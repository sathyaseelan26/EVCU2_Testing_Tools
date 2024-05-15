/*
 * File: MTIR_ac.c
 *
 * Code generated for Simulink model 'MTIR_ac'.
 *
 * Model version                  : 9.31
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 14:31:39 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MTIR_ac.h"
#include "look1_iflf_binlcapw.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_MTIR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(float32, MTIR_VAR_INIT) KaMTIR_n_MtrACpbltySpd_Dflt[16] =
{
    0.0F, 13.3928604F, 40.1785698F, 53.5714302F, 66.9642868F, 93.75F,
    107.142899F, 133.928604F, 147.321396F, 214.285706F, 254.464294F, 267.857086F,
    348.214294F, 361.607086F, 375.0F, 455.357086F
} ;                                    /* Referenced by:
                                        * '<S500>/Calib'
                                        * '<S523>/Calib'
                                        */

static volatile CONST(float32, MTIR_VAR_INIT) KaMTIR_n_MtrBCpbltySpd_Dflt[16] =
{
    0.01F, 2500.0F, 3000.0F, 3500.0F, 4000.0F, 4500.0F, 5000.0F, 5500.0F,
    6000.0F, 6500.0F, 7000.0F, 8000.0F, 8500.0F, 9000.0F, 9500.0F, 10500.0F
} ;                                    /* Referenced by:
                                        * '<S501>/Calib'
                                        * '<S524>/Calib'
                                        */

static volatile CONST(float32, MTIR_VAR_INIT) KaMTIR_n_MtrCCpbltySpd_Dflt[16] =
{
    0.0F, 13.3928604F, 40.1785698F, 53.5714302F, 66.9642868F, 93.75F,
    107.142899F, 133.928604F, 147.321396F, 214.285706F, 254.464294F, 267.857086F,
    348.214294F, 361.607086F, 375.0F, 455.357086F
} ;                                    /* Referenced by:
                                        * '<S502>/Calib'
                                        * '<S525>/Calib'
                                        */

static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_Cf_CnvrtEMSpdToCltchSpd =
    1.0F;                              /* Referenced by: '<S489>/Calib' */
static volatile CONST(uint16, MTIR_VAR_INIT) KeMTIR_Cnt_MtrAMaxCpbltyMnWtTm =
    615U;                              /* Referenced by:
                                        * '<S319>/Calib'
                                        * '<S342>/Calib'
                                        * '<S365>/Calib'
                                        * '<S383>/Calib'
                                        * '<S406>/Calib'
                                        * '<S429>/Calib'
                                        */
static volatile CONST(uint16, MTIR_VAR_INIT) KeMTIR_Cnt_MtrAMaxTorqMinWaitTime =
    615U;                              /* Referenced by: '<S248>/Calib' */
static volatile CONST(uint16, MTIR_VAR_INIT) KeMTIR_Cnt_MtrAMinTorqMinWaitTime =
    615U;                              /* Referenced by: '<S261>/Calib' */
static volatile CONST(uint16, MTIR_VAR_INIT)
    KeMTIR_Cnt_MtrA_TorqAchievedMinWaitTime = 615U;/* Referenced by: '<S490>/Calib' */
static volatile CONST(uint16, MTIR_VAR_INIT)
    KeMTIR_Cnt_MtrA_TorqAchieved_AEMDMinWaitTime = 615U;/* Referenced by: '<S491>/Calib' */
static volatile CONST(uint16, MTIR_VAR_INIT) KeMTIR_Cnt_MtrBMaxTorqMinWaitTm =
    615U;                              /* Referenced by: '<S274>/Calib' */
static volatile CONST(uint16, MTIR_VAR_INIT) KeMTIR_Cnt_MtrBMinTorqMinWaitTm =
    615U;                              /* Referenced by: '<S287>/Calib' */
static volatile CONST(uint16, MTIR_VAR_INIT)
    KeMTIR_Cnt_MtrB_TorqAchievedMinWaitTm = 615U;/* Referenced by: '<S492>/Calib' */
static volatile CONST(uint16, MTIR_VAR_INIT)
    KeMTIR_Cnt_MtrB_TorqAchieved_AEMDMinWaitTm = 615U;/* Referenced by: '<S493>/Calib' */

#if Rte_SysCon_Variant_MTIR_1

static volatile CONST(uint16, MTIR_VAR_INIT) KeMTIR_Cnt_MtrCMaxCpbltyMnWtTm =
    615U;                              /* Referenced by:
                                        * '<S157>/Calib'
                                        * '<S180>/Calib'
                                        * '<S203>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_MTIR_1

static volatile CONST(uint16, MTIR_VAR_INIT) KeMTIR_Cnt_MtrCMaxTorqMinWaitTm =
    615U;                              /* Referenced by: '<S208>/Calib' */

#endif

#if Rte_SysCon_Variant_MTIR_1

static volatile CONST(uint16, MTIR_VAR_INIT) KeMTIR_Cnt_MtrCMinTorqMinWaitTm =
    615U;                              /* Referenced by: '<S221>/Calib' */

#endif

static volatile CONST(uint16, MTIR_VAR_INIT)
    KeMTIR_Cnt_MtrC_TorqAchievedMinWaitTime = 615U;/* Referenced by: '<S494>/Calib' */
static volatile CONST(uint16, MTIR_VAR_INIT)
    KeMTIR_Cnt_MtrC_TorqAchieved_AEMDMinWaitTime = 615U;/* Referenced by: '<S495>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrAMaxCpblty_MaxLmt =
    80.0F;         /* Referenced by: '<S31>/PokeMTIR_M_MtrACapabilityMaxChrt' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrAMaxCpblty_MinLmt =
    0.0F;          /* Referenced by: '<S31>/PokeMTIR_M_MtrACapabilityMaxChrt' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrAMaxTrq_MaxLmt =
    200.0F;                            /* Referenced by: '<S249>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrAMaxTrq_MinLmt = 0.0F;/* Referenced by: '<S250>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrAMinCpblty_MaxLmt =
    0.0F;          /* Referenced by: '<S32>/PokeMTIR_M_MtrACapabilityMinChrt' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrAMinCpblty_MinLmt =
    -80.0F;        /* Referenced by: '<S32>/PokeMTIR_M_MtrACapabilityMinChrt' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrAMinTrq_MaxLmt = 0.0F;/* Referenced by: '<S262>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrAMinTrq_MinLmt =
    -200.0F;                           /* Referenced by: '<S263>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT)
    KeMTIR_M_MtrATrqAchieved_AEMD_MaxLmt = 200.0F;/* Referenced by: '<S450>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT)
    KeMTIR_M_MtrATrqAchieved_AEMD_MinLmt = -200.0F;/* Referenced by: '<S451>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrATrqAchieved_MaxLmt =
    200.0F;                            /* Referenced by: '<S457>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrATrqAchieved_MinLmt =
    -200.0F;                           /* Referenced by: '<S458>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrA_MaxTrqDflt = 300.0F;/* Referenced by: '<S548>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrA_MinTrqDflt = -300.0F;/* Referenced by: '<S549>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT)
    KeMTIR_M_MtrA_TorqAchieved_AEMDDflt = 0.0F;/* Referenced by: '<S550>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT)
    KeMTIR_M_MtrA_TorqAchieved_AEMD_FsftVal = 0.0F;
               /* Referenced by: '<S6>/FsftMTIR_M_MtrA_TorqAchieved_AEMDChrt' */
static volatile CONST(float32, MTIR_VAR_INIT)
    KeMTIR_M_MtrA_TorqAchieved_AEMD_Val = 0.0F;
              /* Referenced by: '<S36>/PokeMTIR_M_MtrA_TorqAchieved_AEMDChrt' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrBMaxCpblty_MaxLmt =
    200.0F;        /* Referenced by: '<S37>/PokeMTIR_M_MtrBCapabilityMaxChrt' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrBMaxCpblty_MinLmt =
    0.0F;          /* Referenced by: '<S37>/PokeMTIR_M_MtrBCapabilityMaxChrt' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrBMaxTCMTrqThrs = 0.1F;/* Referenced by: '<S131>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrBMaxTrqLmt_TCM =
    300.0F;                            /* Referenced by: '<S551>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrBMaxTrqLmt_TCMDflt =
    -300.0F;                           /* Referenced by:
                                        * '<S9>/FsftMTIR_M_MtrBMaxTrqLmt_TCMChrt'
                                        * '<S39>/PokeMTIR_M_MtrBMaxTrqLmt_TCMChrt'
                                        */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrBMaxTrq_MaxLmt =
    200.0F;                            /* Referenced by: '<S275>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrBMaxTrq_MinLmt = 0.0F;/* Referenced by: '<S276>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrBMinCpblty_MaxLmt =
    0.0F;          /* Referenced by: '<S38>/PokeMTIR_M_MtrBCapabilityMinChrt' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrBMinCpblty_MinLmt =
    -200.0F;       /* Referenced by: '<S38>/PokeMTIR_M_MtrBCapabilityMinChrt' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrBMinTCMTrqThrs = -0.1F;/* Referenced by: '<S132>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrBMinTrqLmt_TCM =
    -300.0F;                           /* Referenced by: '<S552>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrBMinTrqLmt_TCMDflt =
    300.0F;                            /* Referenced by:
                                        * '<S10>/FsftMTIR_M_MtrBMinTrqLmt_TCMChrt'
                                        * '<S40>/PokeMTIR_M_MtrBMinTrqLmt_TCMChrt'
                                        */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrBMinTrq_MaxLmt = 0.0F;/* Referenced by: '<S288>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrBMinTrq_MinLmt =
    -200.0F;                           /* Referenced by: '<S289>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT)
    KeMTIR_M_MtrBTrqAchieved_AEMD_MaxLmt = 200.0F;/* Referenced by: '<S464>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT)
    KeMTIR_M_MtrBTrqAchieved_AEMD_MinLmt = -200.0F;/* Referenced by: '<S465>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrBTrqAchieved_MaxLmt =
    200.0F;                            /* Referenced by: '<S471>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrBTrqAchieved_MinLmt =
    -200.0F;                           /* Referenced by: '<S472>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrB_MaxTrqDflt = 300.0F;/* Referenced by: '<S553>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrB_MinTrqDflt = -300.0F;/* Referenced by: '<S554>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT)
    KeMTIR_M_MtrB_TorqAchieved_AEMDDflt = 0.0F;/* Referenced by: '<S555>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT)
    KeMTIR_M_MtrB_TorqAchieved_AEMD_FsftVal = 0.0F;
              /* Referenced by: '<S14>/FsftMTIR_M_MtrB_TorqAchieved_AEMDChrt' */
static volatile CONST(float32, MTIR_VAR_INIT)
    KeMTIR_M_MtrB_TorqAchieved_AEMD_Val = 0.0F;
              /* Referenced by: '<S44>/PokeMTIR_M_MtrB_TorqAchieved_AEMDChrt' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrCMaxCpblty_MaxLmt =
    80.0F;         /* Referenced by: '<S45>/PokeMTIR_M_MtrCCapabilityMaxChrt' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrCMaxCpblty_MinLmt =
    0.0F;          /* Referenced by: '<S45>/PokeMTIR_M_MtrCCapabilityMaxChrt' */

#if Rte_SysCon_Variant_MTIR_1

static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrCMaxTrq_MaxLmt =
    200.0F;                            /* Referenced by: '<S209>/Calib' */

#endif

#if Rte_SysCon_Variant_MTIR_1

static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrCMaxTrq_MinLmt = 0.0F;/* Referenced by: '<S210>/Calib' */

#endif

static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrCMinCpblty_MaxLmt =
    0.0F;          /* Referenced by: '<S46>/PokeMTIR_M_MtrCCapabilityMinChrt' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrCMinCpblty_MinLmt =
    -80.0F;        /* Referenced by: '<S46>/PokeMTIR_M_MtrCCapabilityMinChrt' */

#if Rte_SysCon_Variant_MTIR_1

static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrCMinTrq_MaxLmt = 0.0F;/* Referenced by: '<S222>/Calib' */

#endif

#if Rte_SysCon_Variant_MTIR_1

static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrCMinTrq_MinLmt =
    -200.0F;                           /* Referenced by: '<S223>/Calib' */

#endif

#if Rte_SysCon_Variant_MTIR_1

static volatile CONST(float32, MTIR_VAR_INIT)
    KeMTIR_M_MtrCTrqAchieved_AEMD_MaxLmt = 200.0F;/* Referenced by: '<S235>/Calib' */

#endif

#if Rte_SysCon_Variant_MTIR_1

static volatile CONST(float32, MTIR_VAR_INIT)
    KeMTIR_M_MtrCTrqAchieved_AEMD_MinLmt = -200.0F;/* Referenced by: '<S236>/Calib' */

#endif

#if Rte_SysCon_Variant_MTIR_1

static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrCTrqAchieved_MaxLmt =
    200.0F;                            /* Referenced by: '<S242>/Calib' */

#endif

#if Rte_SysCon_Variant_MTIR_1

static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrCTrqAchieved_MinLmt =
    -200.0F;                           /* Referenced by: '<S243>/Calib' */

#endif

static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrC_MaxTrqDflt = 300.0F;/* Referenced by: '<S556>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_MtrC_MinTrqDflt = -300.0F;/* Referenced by: '<S557>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT)
    KeMTIR_M_MtrC_TorqAchieved_AEMDDflt = 0.0F;/* Referenced by: '<S558>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT)
    KeMTIR_M_MtrC_TorqAchieved_AEMD_FsftVal = 0.0F;
              /* Referenced by: '<S20>/FsftMTIR_M_MtrC_TorqAchieved_AEMDChrt' */
static volatile CONST(float32, MTIR_VAR_INIT)
    KeMTIR_M_MtrC_TorqAchieved_AEMD_Val = 0.0F;
              /* Referenced by: '<S50>/PokeMTIR_M_MtrC_TorqAchieved_AEMDChrt' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_P2SpdCntrlMaxTrqRate_LD =
    -100.0F;                           /* Referenced by: '<S436>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_P2SpdCntrlMaxTrqRate_LU =
    100.0F;                            /* Referenced by: '<S437>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_P2SpdCntrlMaxTrq_MaxLim =
    200.0F;                            /* Referenced by: '<S438>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_P2SpdCntrlMaxTrq_MinLim =
    0.0F;                              /* Referenced by: '<S439>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_P2SpdCntrlMinTrqRate_LD =
    -100.0F;                           /* Referenced by: '<S440>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_P2SpdCntrlMinTrqRate_LU =
    100.0F;                            /* Referenced by: '<S441>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_P2SpdCntrlMinTrq_MaxLim =
    0.0F;                              /* Referenced by: '<S442>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_M_P2SpdCntrlMinTrq_MinLim =
    -200.0F;                           /* Referenced by: '<S443>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_U_MtrA_DC_Volt = 360.0F;/* Referenced by:
                                                                      * '<S503>/Calib'
                                                                      * '<S526>/Calib'
                                                                      */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_U_MtrA_Overrd_HV_Volt =
    48.0F;                             /* Referenced by: '<S310>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_U_MtrB_DC_Volt = 360.0F;/* Referenced by:
                                                                      * '<S504>/Calib'
                                                                      * '<S527>/Calib'
                                                                      */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_U_MtrB_Overrd_HV_Volt =
    48.0F;                             /* Referenced by: '<S374>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_U_MtrC_DC_Volt = 360.0F;/* Referenced by:
                                                                      * '<S505>/Calib'
                                                                      * '<S528>/Calib'
                                                                      */

#if Rte_SysCon_Variant_MTIR_1

static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_U_MtrC_Overrd_HV_Volt =
    48.0F;                             /* Referenced by: '<S148>/Calib' */

#endif

static volatile CONST(boolean, MTIR_VAR_INIT) KeMTIR_b_EnMtrAArrUpdtOnArrRcvd =
    0;                                 /* Referenced by:
                                        * '<S320>/Calib'
                                        * '<S343>/Calib'
                                        * '<S366>/Calib'
                                        */
static volatile CONST(boolean, MTIR_VAR_INIT) KeMTIR_b_EnMtrBArrUpdtOnArrRcvd =
    0;                                 /* Referenced by:
                                        * '<S384>/Calib'
                                        * '<S407>/Calib'
                                        * '<S430>/Calib'
                                        */

#if Rte_SysCon_Variant_MTIR_1

static volatile CONST(boolean, MTIR_VAR_INIT) KeMTIR_b_EnMtrCArrUpdtOnArrRcvd =
    0;                                 /* Referenced by:
                                        * '<S158>/Calib'
                                        * '<S181>/Calib'
                                        * '<S204>/Calib'
                                        */

#endif

static volatile CONST(boolean, MTIR_VAR_INIT) KeMTIR_b_EnblMtrsTrqCpbltyCrv = 1;/* Referenced by:
                                                                      * '<S1>/FsftMTIR_M_MtrACapabilityMaxChrt'
                                                                      * '<S2>/FsftMTIR_M_MtrACapabilityMinChrt'
                                                                      * '<S7>/FsftMTIR_M_MtrBCapabilityMaxChrt'
                                                                      * '<S8>/FsftMTIR_M_MtrBCapabilityMinChrt'
                                                                      * '<S15>/FsftMTIR_M_MtrCCapabilityMaxChrt'
                                                                      * '<S16>/FsftMTIR_M_MtrCCapabilityMinChrt'
                                                                      * '<S23>/FsftMTIR_k_MtrADeratingFactorChrt'
                                                                      * '<S24>/FsftMTIR_k_MtrBDeratingFactorChrt'
                                                                      * '<S25>/FsftMTIR_k_MtrCDeratingFactorChrt'
                                                                      * '<S26>/FsftMTIR_n_MtrACapabilitySpdChrt'
                                                                      * '<S27>/FsftMTIR_n_MtrBCapabilitySpdChrt'
                                                                      * '<S28>/FsftMTIR_n_MtrCCapabilitySpdChrt'
                                                                      * '<S32>/PokeMTIR_M_MtrACapabilityMinChrt'
                                                                      * '<S37>/PokeMTIR_M_MtrBCapabilityMaxChrt'
                                                                      * '<S38>/PokeMTIR_M_MtrBCapabilityMinChrt'
                                                                      * '<S45>/PokeMTIR_M_MtrCCapabilityMaxChrt'
                                                                      * '<S46>/PokeMTIR_M_MtrCCapabilityMinChrt'
                                                                      * '<S53>/PokeMTIR_k_MtrADeratingFactorChrt'
                                                                      * '<S54>/PokeMTIR_k_MtrBDeratingFactorChrt'
                                                                      * '<S55>/PokeMTIR_k_MtrCDeratingFactorChrt'
                                                                      * '<S56>/PokeMTIR_n_MtrACapabilitySpdChrt'
                                                                      * '<S57>/PokeMTIR_n_MtrBCapabilitySpdChrt'
                                                                      * '<S58>/PokeMTIR_n_MtrCCapabilitySpdChrt'
                                                                      * '<S59>/TmotMTIR_M_MtrACapabilityMaxChrt'
                                                                      * '<S60>/TmotMTIR_M_MtrACapabilityMinChrt'
                                                                      * '<S61>/TmotMTIR_M_MtrBCapabilityMaxChrt'
                                                                      * '<S62>/TmotMTIR_M_MtrBCapabilityMinChrt'
                                                                      * '<S63>/TmotMTIR_M_MtrCCapabilityMaxChrt'
                                                                      * '<S64>/TmotMTIR_M_MtrCCapabilityMinChrt'
                                                                      * '<S77>/TmotMTIR_k_MtrADeratingFactorChrt'
                                                                      * '<S78>/TmotMTIR_k_MtrBDeratingFactorChrt'
                                                                      * '<S79>/TmotMTIR_k_MtrCDeratingFactorChrt'
                                                                      * '<S80>/TmotMTIR_n_MtrACapabilitySpdChrt'
                                                                      * '<S81>/TmotMTIR_n_MtrBCapabilitySpdChrt'
                                                                      * '<S82>/TmotMTIR_n_MtrCCapabilitySpdChrt'
                                                                      * '<S559>/Calib'
                                                                      * '<S308>/Calib'
                                                                      * '<S326>/Calib'
                                                                      * '<S349>/Calib'
                                                                      * '<S372>/Calib'
                                                                      * '<S390>/Calib'
                                                                      * '<S413>/Calib'
                                                                      * '<S146>/Calib'
                                                                      * '<S164>/Calib'
                                                                      * '<S187>/Calib'
                                                                      */
static volatile CONST(boolean, MTIR_VAR_INIT) KeMTIR_b_EnblOvrdDrtngFctr = 0;/* Referenced by:
                                                                      * '<S329>/Calib'
                                                                      * '<S352>/Calib'
                                                                      * '<S393>/Calib'
                                                                      * '<S416>/Calib'
                                                                      * '<S167>/Calib'
                                                                      * '<S190>/Calib'
                                                                      */
static volatile CONST(boolean, MTIR_VAR_INIT) KeMTIR_b_MtrA_EnblOvrd_HV_Volt = 0;/* Referenced by: '<S311>/Calib' */
static volatile CONST(boolean, MTIR_VAR_INIT) KeMTIR_b_MtrB_EnblOvrd_HV_Volt = 0;/* Referenced by: '<S375>/Calib' */

#if Rte_SysCon_Variant_MTIR_1

static volatile CONST(boolean, MTIR_VAR_INIT) KeMTIR_b_MtrC_EnblOvrd_HV_Volt = 1;/* Referenced by: '<S149>/Calib' */

#endif

static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_dM_MtrAMaxTorqRate_MaxLmt =
    200.0F;                            /* Referenced by: '<S251>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_dM_MtrAMaxTorqRate_MinLmt =
    -200.0F;                           /* Referenced by: '<S252>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_dM_MtrAMinTorqRate_MaxLmt =
    200.0F;                            /* Referenced by: '<S264>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_dM_MtrAMinTorqRate_MinLmt =
    -200.0F;                           /* Referenced by: '<S265>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT)
    KeMTIR_dM_MtrATorqAchievedRate_MaxLmt = 20.0F;/* Referenced by: '<S459>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT)
    KeMTIR_dM_MtrATorqAchievedRate_MinLmt = -20.0F;/* Referenced by: '<S460>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT)
    KeMTIR_dM_MtrATorqAchieved_AEMD_Rate_MaxLmt = 20.0F;/* Referenced by: '<S452>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT)
    KeMTIR_dM_MtrATorqAchieved_AEMD_Rate_MinLmt = -20.0F;/* Referenced by: '<S453>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_dM_MtrBMaxTorqRate_MaxLmt =
    200.0F;                            /* Referenced by: '<S277>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_dM_MtrBMaxTorqRate_MinLmt =
    -200.0F;                           /* Referenced by: '<S278>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_dM_MtrBMinTorqRate_MaxLmt =
    200.0F;                            /* Referenced by: '<S290>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_dM_MtrBMinTorqRate_MinLmt =
    -200.0F;                           /* Referenced by: '<S291>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT)
    KeMTIR_dM_MtrBTorqAchievedRate_MaxLmt = 20.0F;/* Referenced by: '<S473>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT)
    KeMTIR_dM_MtrBTorqAchievedRate_MinLmt = -20.0F;/* Referenced by: '<S474>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT)
    KeMTIR_dM_MtrBTorqAchieved_AEMD_Rate_MaxLmt = 20.0F;/* Referenced by: '<S466>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT)
    KeMTIR_dM_MtrBTorqAchieved_AEMD_Rate_MinLmt = -20.0F;/* Referenced by: '<S467>/Calib' */

#if Rte_SysCon_Variant_MTIR_1

static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_dM_MtrCMaxTorqRate_MaxLmt =
    200.0F;                            /* Referenced by: '<S211>/Calib' */

#endif

#if Rte_SysCon_Variant_MTIR_1

static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_dM_MtrCMaxTorqRate_MinLmt =
    -200.0F;                           /* Referenced by: '<S212>/Calib' */

#endif

#if Rte_SysCon_Variant_MTIR_1

static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_dM_MtrCMinTorqRate_MaxLmt =
    200.0F;                            /* Referenced by: '<S224>/Calib' */

#endif

#if Rte_SysCon_Variant_MTIR_1

static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_dM_MtrCMinTorqRate_MinLmt =
    -200.0F;                           /* Referenced by: '<S225>/Calib' */

#endif

#if Rte_SysCon_Variant_MTIR_1

static volatile CONST(float32, MTIR_VAR_INIT)
    KeMTIR_dM_MtrCTorqAchievedRate_MaxLmt = 20.0F;/* Referenced by: '<S244>/Calib' */

#endif

#if Rte_SysCon_Variant_MTIR_1

static volatile CONST(float32, MTIR_VAR_INIT)
    KeMTIR_dM_MtrCTorqAchievedRate_MinLmt = -20.0F;/* Referenced by: '<S245>/Calib' */

#endif

#if Rte_SysCon_Variant_MTIR_1

static volatile CONST(float32, MTIR_VAR_INIT)
    KeMTIR_dM_MtrCTorqAchieved_AEMD_Rate_MaxLmt = 20.0F;/* Referenced by: '<S237>/Calib' */

#endif

#if Rte_SysCon_Variant_MTIR_1

static volatile CONST(float32, MTIR_VAR_INIT)
    KeMTIR_dM_MtrCTorqAchieved_AEMD_Rate_MinLmt = -20.0F;/* Referenced by: '<S238>/Calib' */

#endif

static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_k_MinTrqLmtSign = 1.0F;/* Referenced by: '<S444>/Calib' */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_k_MtrCpblty_LD = -100.0F;/* Referenced by:
                                                                      * '<S332>/Calib'
                                                                      * '<S355>/Calib'
                                                                      * '<S396>/Calib'
                                                                      * '<S419>/Calib'
                                                                      * '<S170>/Calib'
                                                                      * '<S193>/Calib'
                                                                      */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_k_MtrCpblty_LU = 0.08F;/* Referenced by:
                                                                      * '<S333>/Calib'
                                                                      * '<S356>/Calib'
                                                                      * '<S397>/Calib'
                                                                      * '<S420>/Calib'
                                                                      * '<S171>/Calib'
                                                                      * '<S194>/Calib'
                                                                      */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_k_OverrdDrtngFctr = 1.0F;/* Referenced by:
                                                                      * '<S330>/Calib'
                                                                      * '<S353>/Calib'
                                                                      * '<S394>/Calib'
                                                                      * '<S417>/Calib'
                                                                      * '<S168>/Calib'
                                                                      * '<S191>/Calib'
                                                                      */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_r_DrtngChngThrshld = 0.01F;/* Referenced by:
                                                                      * '<S337>/Calib'
                                                                      * '<S360>/Calib'
                                                                      * '<S401>/Calib'
                                                                      * '<S424>/Calib'
                                                                      * '<S175>/Calib'
                                                                      * '<S198>/Calib'
                                                                      */
static volatile CONST(float32, MTIR_VAR_INIT) KeMTIR_r_HV_Volt_ChngThrshld =
    0.01F;                             /* Referenced by:
                                        * '<S314>/Calib'
                                        * '<S378>/Calib'
                                        * '<S152>/Calib'
                                        */

#define STOP_SEC_CALIB_UNSPECIFIED_MTIR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_MTIR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(boolean, MTIR_VAR_INIT) VaMTIC_b_MtrAMaxCpbltyRcvdArr[16];/* '<S325>/ArrayAssignment' */
static VAR(boolean, MTIR_VAR_INIT) VaMTIC_b_MtrAMinCpbltyRcvdArr[16];/* '<S348>/ArrayAssignment' */
static VAR(boolean, MTIR_VAR_INIT) VaMTIC_b_MtrASpdCpbltyRcvdArr[16];/* '<S307>/ArrayAssignment' */
static VAR(boolean, MTIR_VAR_INIT) VaMTIC_b_MtrBMaxCpbltyRcvdArr[16];/* '<S389>/ArrayAssignment' */
static VAR(boolean, MTIR_VAR_INIT) VaMTIC_b_MtrBMinCpbltyRcvdArr[16];/* '<S412>/ArrayAssignment' */
static VAR(boolean, MTIR_VAR_INIT) VaMTIC_b_MtrBSpdCpbltyRcvdArr[16];/* '<S371>/ArrayAssignment' */

#if Rte_SysCon_Variant_MTIR_1

static VAR(boolean, MTIR_VAR_INIT) VaMTIC_b_MtrCMaxCpbltyRcvdArr[16];/* '<S163>/ArrayAssignment' */

#endif

#if Rte_SysCon_Variant_MTIR_1

static VAR(boolean, MTIR_VAR_INIT) VaMTIC_b_MtrCMinCpbltyRcvdArr[16];/* '<S186>/ArrayAssignment' */

#endif

#if Rte_SysCon_Variant_MTIR_1

static VAR(boolean, MTIR_VAR_INIT) VaMTIC_b_MtrCSpdCpbltyRcvdArr[16];/* '<S145>/ArrayAssignment' */

#endif

static VAR(float32, MTIR_VAR_INIT) VeMTIC_M_MtrA_TorqAchieved;/* '<S456>/Sum3' */
static VAR(float32, MTIR_VAR_INIT) VeMTIC_M_MtrA_TorqAchieved_AEMD;/* '<S449>/Sum3' */
static VAR(float32, MTIR_VAR_INIT) VeMTIC_M_MtrB_TorqAchieved;/* '<S470>/Sum3' */
static VAR(float32, MTIR_VAR_INIT) VeMTIC_M_MtrB_TorqAchieved_AEMD;/* '<S463>/Sum3' */
static VAR(float32, MTIR_VAR_INIT) VeMTIC_M_MtrCTrqAchieved_AEMD;
                              /* '<S117>/SigConvForSigProp_Variant_Source5_0' */
static VAR(float32, MTIR_VAR_INIT) VeMTIC_M_MtrC_TorqAchieved;
                              /* '<S117>/SigConvForSigProp_Variant_Source2_0' */
static VAR(float32, MTIR_VAR_INIT) VeMTIC_U_MtrAVoltFinal;/* '<S306>/Switch' */
static VAR(float32, MTIR_VAR_INIT) VeMTIC_U_MtrBVoltFinal;/* '<S370>/Switch' */

#if Rte_SysCon_Variant_MTIR_1

static VAR(float32, MTIR_VAR_INIT) VeMTIC_U_MtrCVoltFinal;/* '<S144>/Switch' */

#endif

static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrAMaxArrayUpdateEn;/* '<S301>/Logical10' */
static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrAMaxDrtFctEn;/* '<S331>/Logical2' */
static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrAMaxSgnlRcvdDlyd;/* '<S345>/AND' */
static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrAMaxSgnlRcvdEn;/* '<S325>/Logical1' */
static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrAMaxSgnlRcvdEnLatch;/* '<S344>/OR1' */
static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrAMinArrayUpdateEn;/* '<S302>/Logical10' */
static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrAMinDrtFctEn;/* '<S354>/Logical2' */
static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrAMinSgnlRcvdDlyd;/* '<S368>/AND' */
static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrAMinSgnlRcvdEn;/* '<S348>/Logical1' */
static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrAMinSgnlRcvdEnLatch;/* '<S367>/OR1' */
static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrASpdArrayUpdateEn;/* '<S300>/Logical10' */
static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrASpdSgnlRcvdDlyd;/* '<S322>/AND' */
static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrASpdSgnlRcvdEn;/* '<S307>/Logical1' */
static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrASpdSgnlRcvdEnLatch;/* '<S321>/OR1' */
static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrASpdVoltEn;/* '<S312>/Logical2' */
static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrBMaxArrayUpdateEn;/* '<S304>/Logical10' */
static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrBMaxDrtFctEn;/* '<S395>/Logical2' */
static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrBMaxSgnlRcvdDlyd;/* '<S409>/AND' */
static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrBMaxSgnlRcvdEn;/* '<S389>/Logical1' */
static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrBMaxSgnlRcvdEnLatch;/* '<S408>/OR1' */
static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrBMinArrayUpdateEn;/* '<S305>/Logical10' */
static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrBMinDrtFctEn;/* '<S418>/Logical2' */
static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrBMinSgnlRcvdDlyd;/* '<S432>/AND' */
static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrBMinSgnlRcvdEn;/* '<S412>/Logical1' */
static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrBMinSgnlRcvdEnLatch;/* '<S431>/OR1' */
static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrBSpdArrayUpdateEn;/* '<S303>/Logical10' */
static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrBSpdSgnlRcvdDlyd;/* '<S386>/AND' */
static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrBSpdSgnlRcvdEn;/* '<S371>/Logical1' */
static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrBSpdSgnlRcvdEnLatch;/* '<S385>/OR1' */
static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrBSpdVoltEn;/* '<S376>/Logical2' */

#if Rte_SysCon_Variant_MTIR_1

static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrCMaxArrayUpdateEn;/* '<S142>/Logical10' */

#endif

#if Rte_SysCon_Variant_MTIR_1

static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrCMaxDrtFctEn;/* '<S169>/Logical2' */

#endif

#if Rte_SysCon_Variant_MTIR_1

static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrCMaxSgnlRcvdDlyd;/* '<S183>/AND' */

#endif

#if Rte_SysCon_Variant_MTIR_1

static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrCMaxSgnlRcvdEn;/* '<S163>/Logical1' */

#endif

#if Rte_SysCon_Variant_MTIR_1

static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrCMaxSgnlRcvdEnLatch;/* '<S182>/OR1' */

#endif

#if Rte_SysCon_Variant_MTIR_1

static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrCMinArrayUpdateEn;/* '<S143>/Logical10' */

#endif

#if Rte_SysCon_Variant_MTIR_1

static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrCMinDrtFctEn;/* '<S192>/Logical2' */

#endif

#if Rte_SysCon_Variant_MTIR_1

static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrCMinSgnlRcvdDlyd;/* '<S206>/AND' */

#endif

#if Rte_SysCon_Variant_MTIR_1

static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrCMinSgnlRcvdEn;/* '<S186>/Logical1' */

#endif

#if Rte_SysCon_Variant_MTIR_1

static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrCMinSgnlRcvdEnLatch;/* '<S205>/OR1' */

#endif

#if Rte_SysCon_Variant_MTIR_1

static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrCSpdArrayUpdateEn;/* '<S141>/Logical10' */

#endif

#if Rte_SysCon_Variant_MTIR_1

static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrCSpdSgnlRcvdDlyd;/* '<S160>/AND' */

#endif

#if Rte_SysCon_Variant_MTIR_1

static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrCSpdSgnlRcvdEn;/* '<S145>/Logical1' */

#endif

#if Rte_SysCon_Variant_MTIR_1

static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrCSpdSgnlRcvdEnLatch;/* '<S159>/OR1' */

#endif

#if Rte_SysCon_Variant_MTIR_1

static VAR(boolean, MTIR_VAR_INIT) VeMTIC_b_MtrCSpdVoltEn;/* '<S150>/Logical2' */

#endif

static VAR(float32, MTIR_VAR_INIT) VeMTIC_k_MtrAMaxDrtngFctrFinal;/* '<S324>/Switch' */
static VAR(float32, MTIR_VAR_INIT) VeMTIC_k_MtrAMinDrtngFctrFinal;/* '<S347>/Switch' */
static VAR(float32, MTIR_VAR_INIT) VeMTIC_k_MtrBMaxDrtngFctrFinal;/* '<S388>/Switch' */
static VAR(float32, MTIR_VAR_INIT) VeMTIC_k_MtrBMinDrtngFctrFinal;/* '<S411>/Switch' */

#if Rte_SysCon_Variant_MTIR_1

static VAR(float32, MTIR_VAR_INIT) VeMTIC_k_MtrCMaxDrtngFctrFinal;/* '<S162>/Switch' */

#endif

#if Rte_SysCon_Variant_MTIR_1

static VAR(float32, MTIR_VAR_INIT) VeMTIC_k_MtrCMinDrtngFctrFinal;/* '<S185>/Switch' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_MTIR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_MTIR
#include "MemMap.h"

VAR(B_MTIR_ac_T, MTIR_VAR_INIT) MTIR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_MTIR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_MTIR
#include "MemMap.h"

VAR(DW_MTIR_ac_T, MTIR_VAR_INIT) MTIR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_MTIR
#include "MemMap.h"

static FUNC(void, MTIR_CODE_LOCAL) MTIR_ac_Pass(VAR(float32, AUTOMATIC) rtu_In1,
    VAR(float32, AUTOMATIC) rtu_In2, P2VAR(float32, AUTOMATIC, MTIR_VAR_INIT)
    rty_Out1, P2VAR(float32, AUTOMATIC, MTIR_VAR_INIT) rty_Out2);
static FUNC(void, MTIR_CODE_LOCAL) MTIR_ac_Switch(VAR(float32, AUTOMATIC)
    rtu_In1, VAR(float32, AUTOMATIC) rtu_In2, P2VAR(float32, AUTOMATIC,
    MTIR_VAR_INIT) rty_Out1, P2VAR(float32, AUTOMATIC, MTIR_VAR_INIT) rty_Out2);

/*
 * Output and update for action system:
 *    '<S522>/Pass'
 *    '<S522>/Pass1'
 *    '<S522>/Pass2'
 */
static FUNC(void, MTIR_CODE_LOCAL) MTIR_ac_Pass(VAR(float32, AUTOMATIC) rtu_In1,
    VAR(float32, AUTOMATIC) rtu_In2, P2VAR(float32, AUTOMATIC, MTIR_VAR_INIT)
    rty_Out1, P2VAR(float32, AUTOMATIC, MTIR_VAR_INIT) rty_Out2)
{
    /* Gain: '<S542>/Gain' */
    *rty_Out1 = rtu_In1;

    /* Gain: '<S543>/Gain' */
    *rty_Out2 = rtu_In2;
}

/*
 * Output and update for action system:
 *    '<S522>/Switch'
 *    '<S522>/Switch1'
 *    '<S522>/Switch2'
 */
static FUNC(void, MTIR_CODE_LOCAL) MTIR_ac_Switch(VAR(float32, AUTOMATIC)
    rtu_In1, VAR(float32, AUTOMATIC) rtu_In2, P2VAR(float32, AUTOMATIC,
    MTIR_VAR_INIT) rty_Out1, P2VAR(float32, AUTOMATIC, MTIR_VAR_INIT) rty_Out2)
{
    /* Product: '<S533>/Product1' */
    *rty_Out1 = -rtu_In2;

    /* Product: '<S533>/Product' */
    *rty_Out2 = -rtu_In1;
}

/* Model step function for TID1 */
FUNC(void, MTIR_CODE) MTIR_FastTEF(void) /* Explicit Task: FastTEF */
{
    float32 rtb_TmpSignalConversionAtLeM_gv;
    float32 rtb_TmpSignalConversionAtLeM_je;
    float32 rtb_TmpSignalConversionAtLeM_lk;
    float32 rtb_TmpSignalConversionAtLeM_mi;
    float32 rtb_TmpSignalConversionAtLeM_mj;
    float32 rtb_TmpSignalConversionAtLeM_my;
    float32 rtb_TmpSignalConversionAtLeM_ny;
    float32 rtb_TmpSignalConversionAtLeM_ox;
    float32 rtb_TmpSignalConversionAtLe_csn;
    float32 rtb_TmpSignalConversionAtLe_ohu;
    uint8 rtb_TmpSignalConversionAtLeM_ge;
    uint8 rtb_TmpSignalConversionAtLe_lal;
    boolean rtb_TmpSignalConversionAtLeM_av;
    boolean rtb_TmpSignalConversionAtLeM_bc;
    boolean rtb_TmpSignalConversionAtLeM_bg;
    boolean rtb_TmpSignalConversionAtLeM_cf;
    boolean rtb_TmpSignalConversionAtLeM_et;
    boolean rtb_TmpSignalConversionAtLeM_f4;
    boolean rtb_TmpSignalConversionAtLeM_gk;
    boolean rtb_TmpSignalConversionAtLeM_ih;
    boolean rtb_TmpSignalConversionAtLeM_in;
    boolean rtb_TmpSignalConversionAtLeM_iu;
    boolean rtb_TmpSignalConversionAtLeM_k1;
    boolean rtb_TmpSignalConversionAtLeM_ko;
    boolean rtb_TmpSignalConversionAtLeM_kx;
    boolean rtb_TmpSignalConversionAtLeM_l2;
    boolean rtb_TmpSignalConversionAtLeM_m2;
    boolean rtb_TmpSignalConversionAtLeM_nn;
    boolean rtb_TmpSignalConversionAtLe_cpt;
    boolean rtb_TmpSignalConversionAtLe_lcm;

#if Rte_SysCon_Variant_MTIR_1

    float32 rtb_TmpSignalConversionAtLeM_l3;

#endif

#if Rte_SysCon_Variant_MTIR_1

    boolean rtb_TmpSignalConversionAtLe_omf;

#endif

#if Rte_SysCon_Variant_MTIR_1

    float32 rtb_TmpSignalConversionAtLeM_oe;

#endif

    boolean rtb_TmpSignalConversionAtLeM_b1;

#if Rte_SysCon_Variant_MTIR_1

    float32 rtb_TmpSignalConversionAtLeM_ki;

#endif

    float32 rtb_TmpSignalConversionAtLeM_ky;
    boolean rtb_TmpSignalConversionAtLeM_jo;

#if Rte_SysCon_Variant_MTIR_1

    boolean rtb_TmpSignalConversionAtLeM_ee;

#endif

    float32 rtb_Add;
    float32 rtb_Sum2_jr;
    float32 rtb_Sum2_m;
    float32 rtb_Sum2_oi;
    float32 rtb_Sum3_f;
    float32 rtb_Switch1_b3;
    float32 rtb_Switch1_od;
    float32 rtb_TmpSignalConversionAtLeM_d4;
    float32 rtb_TmpSignalConversionAtLeM_pg;
    float32 rtb_TmpSignalConversionAtVeHVTR;
    uint16 rtb_Switch1_eb;
    uint8 rtb_TmpSignalConversionAtLeM_km;
    boolean rtb_OR1_d2;
    boolean rtb_TmpSignalConversionAtLeM_k0;
    boolean rtb_TmpSignalConversionAtLeM_la;
    boolean rtb_TmpSignalConversionAtLeM_np;
    boolean rtb_TmpSignalConversionAtLe_apt;

#if Rte_SysCon_Variant_MTIR_1

    float32 rtb_TmpSignalConversionAtLaMT_g[16];

#endif

#if Rte_SysCon_Variant_MTIR_1

    float32 rtb_TmpSignalConversionAtLaMT_e[16];

#endif

#if Rte_SysCon_Variant_MTIR_1

    float32 rtb_TmpSignalConversionAtLaMT_l[16];

#endif

    sint32 i;
    float32 rtb_TmpSignalConversionAtLaMTIR[16];
    float32 rtb_TmpSignalConversionAtLaMT_d[16];
    float32 rtb_TmpSignalConversionAtLaMT_o[16];
    float32 rtb_TmpSignalConversionAtLaM_jk[16];
    float32 rtb_TmpSignalConversionAtLaM_ob[16];
    float32 rtb_TmpSignalConversionAtLaM_pp[16];
    uint8 tmp[16];

#if Rte_SysCon_Variant_MTIR_1

    uint8 rtb_TmpSignalConversionAtLeM_no;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/MTIR_FastTEF'
     */
    /* SignalConversion generated from: '<S29>/LeMTIR_b_MtrA_TorqAchievedSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_32'
     */
    rtb_TmpSignalConversionAtLeM_bg =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_b_MtrA_TorqAchievedSgnl_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S29>/LeMTIR_b_MtrA_TorqAchieved_AEMDSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_37'
     */
    rtb_TmpSignalConversionAtLeM_nn =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_b_MtrA_TorqAchieved_AEMDSgnl_Rcvd_write_IRV
        ();

    /* SignalConversion generated from: '<S29>/LeMTIR_b_MtrB_TorqAchievedSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_48'
     */
    rtb_TmpSignalConversionAtLe_cpt =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_b_MtrB_TorqAchievedSgnl_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S29>/LeMTIR_b_MtrB_TorqAchieved_AEMDSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_51'
     */
    rtb_TmpSignalConversionAtLeM_cf =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_b_MtrB_TorqAchieved_AEMDSgnl_Rcvd_write_IRV
        ();

    /* SignalConversion generated from: '<S29>/LeMTIR_b_MtrC_TorqAchievedSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_58'
     */
    rtb_TmpSignalConversionAtLeM_l2 =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_b_MtrC_TorqAchievedSgnl_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S29>/LeMTIR_b_MtrC_TorqAchieved_AEMDSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_63'
     */
    rtb_TmpSignalConversionAtLeM_k1 =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_b_MtrC_TorqAchieved_AEMDSgnl_Rcvd_write_IRV
        ();

    /* SignalConversion generated from: '<S29>/LeMTIR_M_MtrA_TorqAchieved_read' incorporates:
     *  Merge: '<Root>/Merge_30'
     */
    rtb_TmpSignalConversionAtLeM_ox =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_M_MtrA_TorqAchieved_write_IRV();

    /* SignalConversion generated from: '<S29>/LeMTIR_M_MtrA_MaxTorq_read' incorporates:
     *  Merge: '<Root>/Merge_34'
     */
    rtb_TmpSignalConversionAtLeM_je =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_M_MtrA_MaxTorq_write_IRV();

    /* SignalConversion generated from: '<S29>/LeMTIR_b_MtrA_MaxTorqSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_33'
     */
    rtb_TmpSignalConversionAtLeM_in =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_b_MtrA_MaxTorqSgnl_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S29>/LeMTIR_M_MtrA_MinTorq_read' incorporates:
     *  Merge: '<Root>/Merge_36'
     */
    rtb_TmpSignalConversionAtLeM_my =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_M_MtrA_MinTorq_write_IRV();

    /* SignalConversion generated from: '<S29>/LeMTIR_b_MtrA_MinTorqSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_35'
     */
    rtb_TmpSignalConversionAtLeM_ko =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_b_MtrA_MinTorqSgnl_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S29>/LeMTIR_M_MtrA_TorqAchieved_AEMD_read' incorporates:
     *  Merge: '<Root>/Merge_39'
     */
    rtb_TmpSignalConversionAtLeM_lk =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_M_MtrA_TorqAchieved_AEMD_write_IRV();

    /* SignalConversion generated from: '<S29>/LaMTIR_M_MtrAMaxCpbltyTrq_Poke_read' */
    Rte_IrvRead_MTIR_FastTEF_VaMTIR_M_MtrAMaxCpbltyTrq_Poke_Init_IRV
        (rtb_TmpSignalConversionAtLaMTIR);

    /* SignalConversion generated from: '<S29>/LeMTIR_b_MtrAMaxCpbltyTrqRcvd_read' incorporates:
     *  Merge: '<Root>/Merge_6'
     */
    rtb_TmpSignalConversionAtLeM_ih =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_b_MtrAMaxCpbltyTrqRcvd_write_IRV();

    /* SignalConversion generated from: '<S29>/LeMTIR_Cnt_MtrAMaxCpbltyIndx_read' incorporates:
     *  Merge: '<Root>/Merge_5'
     */
    rtb_TmpSignalConversionAtLe_lal =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_Cnt_MtrAMaxCpbltyIndx_Init_IRV();

    /* SignalConversion generated from: '<S29>/LaMTIR_M_MtrAMinCpbltyTrq_Poke_read' */
    Rte_IrvRead_MTIR_FastTEF_VaMTIR_M_MtrAMinCpbltyTrq_Poke_Init_IRV
        (rtb_TmpSignalConversionAtLaMT_o);

    /* SignalConversion generated from: '<S29>/LeMTIR_b_MtrACapabilityMinSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_8'
     */
    rtb_TmpSignalConversionAtLeM_m2 =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_b_MtrAMinCpbltyTrqRcvd_write_IRV();

    /* SignalConversion generated from: '<S29>/LaMTIR_n_MtrACpbltySpd_Poke_read' */
    Rte_IrvRead_MTIR_FastTEF_VaMTIR_n_MtrACpbltySpd_Poke_Init_IRV
        (rtb_TmpSignalConversionAtLaM_ob);

    /* SignalConversion generated from: '<S29>/LeMTIR_b_MtrACapabilitySpdSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_1'
     */
    rtb_TmpSignalConversionAtLeM_bc =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_b_MtrACpbltySpdRcvd_write_IRV();

    /* SignalConversion generated from: '<S29>/LeMTIR_b_MtrADeratingFactorSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_3'
     */
    rtb_TmpSignalConversionAtLeM_kx =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_b_MtrADrtngFctrRcvd_write_IRV();

    /* SignalConversion generated from: '<S29>/LeMTIR_k_MtrADrtngFctr_Poke_read' incorporates:
     *  Merge: '<Root>/Merge_4'
     */
    rtb_TmpSignalConversionAtLeM_ny =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_k_MtrADrtngFctr_Poke_Init_IRV();

    /* SignalConversion generated from: '<S29>/LeMTIR_M_MtrB_TorqAchieved_read' incorporates:
     *  Merge: '<Root>/Merge_49'
     */
    rtb_TmpSignalConversionAtLeM_mi =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_M_MtrB_TorqAchieved_write_IRV();

    /* SignalConversion generated from: '<S29>/LeMTIR_M_MtrB_MaxTorq_read' incorporates:
     *  Merge: '<Root>/Merge_45'
     */
    rtb_TmpSignalConversionAtLeM_mj =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_M_MtrB_MaxTorq_write_IRV();

    /* SignalConversion generated from: '<S29>/LeMTIR_b_MtrB_MaxTorqSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_44'
     */
    rtb_TmpSignalConversionAtLeM_f4 =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_b_MtrB_MaxTorqSgnl_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S29>/LeMTIR_M_MtrB_MinTorq_read' incorporates:
     *  Merge: '<Root>/Merge_47'
     */
    rtb_TmpSignalConversionAtLeM_gv =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_M_MtrB_MinTorq_write_IRV();

    /* SignalConversion generated from: '<S29>/LeMTIR_b_MtrB_MinTorqSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_46'
     */
    rtb_TmpSignalConversionAtLeM_av =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_b_MtrB_MinTorqSgnl_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S29>/LeMTIR_M_MtrB_TorqAchieved_AEMD_read' incorporates:
     *  Merge: '<Root>/Merge_53'
     */
    rtb_TmpSignalConversionAtLe_csn =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_M_MtrB_TorqAchieved_AEMD_write_IRV();

    /* SignalConversion generated from: '<S29>/LaMTIR_M_MtrBMaxCpbltyTrq_Poke_read' */
    Rte_IrvRead_MTIR_FastTEF_VaMTIR_M_MtrBMaxCpbltyTrq_Poke_Init_IRV
        (rtb_TmpSignalConversionAtLaM_jk);

    /* SignalConversion generated from: '<S29>/LeMTIR_M_MtrBCapabilityMaxSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_15'
     */
    rtb_TmpSignalConversionAtLe_lcm =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_b_MtrBMaxCpbltyTrqRcvd_write_IRV();

    /* SignalConversion generated from: '<S29>/LeMTIR_Cnt_MtrBMaxCpbltyIndx_read' incorporates:
     *  Merge: '<Root>/Merge_14'
     */
    rtb_TmpSignalConversionAtLeM_ge =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_Cnt_MtrBMaxCpbltyIndx_Init_IRV();

    /* SignalConversion generated from: '<S29>/LaMTIR_M_MtrBMinCpbltyTrq_Poke_read' */
    Rte_IrvRead_MTIR_FastTEF_VaMTIR_M_MtrBMinCpbltyTrq_Poke_Init_IRV
        (rtb_TmpSignalConversionAtLaM_pp);

    /* SignalConversion generated from: '<S29>/LeMTIR_M_MtrBCapabilityMinSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_17'
     */
    rtb_TmpSignalConversionAtLeM_gk =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_b_MtrBMinCpbltyRcvd_write_IRV();

    /* SignalConversion generated from: '<S29>/LaMTIR_n_MtrBCpbltySpd_Poke_read' */
    Rte_IrvRead_MTIR_FastTEF_VaMTIR_n_MtrBCpbltySpd_Poke_Init_IRV
        (rtb_TmpSignalConversionAtLaMT_d);

    /* SignalConversion generated from: '<S29>/LeMTIR_n_MtrBCapabilitySpdSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_10'
     */
    rtb_TmpSignalConversionAtLeM_et =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_b_MtrBCpbltySpdRcvd_write_IRV();

    /* SignalConversion generated from: '<S29>/LeMTIR_k_MtrBDrtngFctr_read' incorporates:
     *  Merge: '<Root>/Merge_13'
     */
    rtb_TmpSignalConversionAtLe_ohu =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_k_MtrBDrtngFctr_Init_IRV();

    /* SignalConversion generated from: '<S29>/LeMTIR_k_MtrBDeratingFactorSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_12'
     */
    rtb_TmpSignalConversionAtLeM_iu =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_b_MtrBDrtngFctrRcvd_write_IRV();

    /* SignalConversion generated from: '<S29>/LeMTIR_M_MtrC_TorqAchieved_read' incorporates:
     *  SignalConversion generated from: '<S29>/LaMTIR_M_MtrCMaxCpbltyTrq_Poke_read'
     *  SignalConversion generated from: '<S29>/LaMTIR_M_MtrCMinCpbltyTrq_Poke_read'
     *  SignalConversion generated from: '<S29>/LaMTIR_n_MtrCCpbltySpd_Poke_read'
     *  SignalConversion generated from: '<S29>/LeMTIR_Cnt_MtrCMaxCpbltyIndx_read'
     *  SignalConversion generated from: '<S29>/LeMTIR_M_MtrCCapabilityMaxSgnl_Rcvd_read'
     *  SignalConversion generated from: '<S29>/LeMTIR_M_MtrCCapabilityMinSgnl_Rcvd_read'
     *  SignalConversion generated from: '<S29>/LeMTIR_M_MtrC_MaxTorq_read'
     *  SignalConversion generated from: '<S29>/LeMTIR_M_MtrC_MinTorq_read'
     *  SignalConversion generated from: '<S29>/LeMTIR_M_MtrC_TorqAchieved_AEMD_read'
     *  SignalConversion generated from: '<S29>/LeMTIR_b_MtrC_MaxTorqSgnl_Rcvd_read'
     *  SignalConversion generated from: '<S29>/LeMTIR_b_MtrC_MinTorqSgnl_Rcvd_read'
     *  SignalConversion generated from: '<S29>/LeMTIR_b_MtrC_TorqAchievedFA_read'
     *  SignalConversion generated from: '<S29>/LeMTIR_b_MtrC_TorqAchieved_AEMDFA_read'
     *  SignalConversion generated from: '<S29>/LeMTIR_k_MtrCDeratingFactorSgnl_Rcvd_read'
     *  SignalConversion generated from: '<S29>/LeMTIR_k_MtrCDrtngFctr_read'
     *  SignalConversion generated from: '<S29>/LeMTIR_n_MtrCCapabilitySpdSgnl_Rcvd_read'
     */
#if Rte_SysCon_Variant_MTIR_1

    /* SignalConversion generated from: '<S29>/LeMTIR_M_MtrC_TorqAchieved_read' incorporates:
     *  Merge: '<Root>/Merge_59'
     */
    rtb_TmpSignalConversionAtLeM_l3 =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_M_MtrC_TorqAchieved_write_IRV();

    /* SignalConversion generated from: '<S29>/LeMTIR_b_MtrC_TorqAchievedFA_read' incorporates:
     *  Merge: '<Root>/Merge_60'
     */
    rtb_TmpSignalConversionAtLe_omf =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_b_MtrC_TorqAchievedFA_write_IRV();

    /* SignalConversion generated from: '<S29>/LeMTIR_M_MtrC_MaxTorq_read' incorporates:
     *  Merge: '<Root>/Merge_55'
     */
    rtb_TmpSignalConversionAtLeM_oe =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_M_MtrC_MaxTorq_write_IRV();

    /* SignalConversion generated from: '<S29>/LeMTIR_b_MtrC_MaxTorqSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_54'
     */
    rtb_TmpSignalConversionAtLeM_b1 =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_b_MtrC_MaxTorqSgnl_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S29>/LeMTIR_M_MtrC_MinTorq_read' incorporates:
     *  Merge: '<Root>/Merge_57'
     */
    rtb_TmpSignalConversionAtLeM_ki =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_M_MtrC_MinTorq_write_IRV();

    /* SignalConversion generated from: '<S29>/LeMTIR_b_MtrC_MinTorqSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_56'
     */
    rtb_TmpSignalConversionAtLeM_jo =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_b_MtrC_MinTorqSgnl_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S29>/LeMTIR_M_MtrC_TorqAchieved_AEMD_read' incorporates:
     *  Merge: '<Root>/Merge_62'
     */
    rtb_TmpSignalConversionAtLeM_ky =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_M_MtrC_TorqAchieved_AEMD_write_IRV();

    /* SignalConversion generated from: '<S29>/LeMTIR_b_MtrC_TorqAchieved_AEMDFA_read' incorporates:
     *  Merge: '<Root>/Merge_61'
     */
    rtb_TmpSignalConversionAtLeM_ee =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_b_MtrC_TorqAchieved_AEMDFA_write_IRV();

    /* SignalConversion generated from: '<S29>/LaMTIR_M_MtrCMaxCpbltyTrq_Poke_read' */
    Rte_IrvRead_MTIR_FastTEF_VaMTIR_M_MtrCMaxCpbltyTrq_Poke_Init_IRV
        (rtb_TmpSignalConversionAtLaMT_e);

    /* SignalConversion generated from: '<S29>/LeMTIR_M_MtrCCapabilityMaxSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_24'
     */
    rtb_TmpSignalConversionAtLeM_np =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_b_MtrCMaxCpbltyTrqRcvd_write_IRV();

    /* SignalConversion generated from: '<S29>/LeMTIR_Cnt_MtrCMaxCpbltyIndx_read' incorporates:
     *  Merge: '<Root>/Merge_23'
     */
    rtb_TmpSignalConversionAtLeM_km =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_Cnt_MtrCMaxCpbltyIndx_Init_IRV();

    /* SignalConversion generated from: '<S29>/LaMTIR_M_MtrCMinCpbltyTrq_Poke_read' */
    Rte_IrvRead_MTIR_FastTEF_VaMTIR_M_MtrCMinCpbltyTrq_Poke_Init_IRV
        (rtb_TmpSignalConversionAtLaMT_l);

    /* SignalConversion generated from: '<S29>/LeMTIR_M_MtrCCapabilityMinSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_26'
     */
    rtb_TmpSignalConversionAtLe_apt =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_b_MtrCMinCpbltyRcvd_write_IRV();

    /* SignalConversion generated from: '<S29>/LaMTIR_n_MtrCCpbltySpd_Poke_read' */
    Rte_IrvRead_MTIR_FastTEF_VaMTIR_n_MtrCCpbltySpd_Poke_Init_IRV
        (rtb_TmpSignalConversionAtLaMT_g);

    /* SignalConversion generated from: '<S29>/LeMTIR_n_MtrCCapabilitySpdSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_20'
     */
    rtb_TmpSignalConversionAtLeM_k0 =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_b_MtrCCpbltySpdRcvd_write_IRV();

    /* SignalConversion generated from: '<S29>/LeMTIR_k_MtrCDrtngFctr_read' incorporates:
     *  Merge: '<Root>/Merge_22'
     */
    rtb_TmpSignalConversionAtLeM_pg =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_k_MtrCDrtngFctr_Init_IRV();

    /* SignalConversion generated from: '<S29>/LeMTIR_k_MtrCDeratingFactorSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_21'
     */
    rtb_TmpSignalConversionAtLeM_la =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_b_MtrCDrtngFctrRcvd_write_IRV();

#endif

    /* End of SignalConversion generated from: '<S29>/LeMTIR_M_MtrC_TorqAchieved_read' */

    /* SignalConversion generated from: '<S29>/LeMTIR_M_P2SpdCntrlMaxTrqLmt_read' incorporates:
     *  Merge: '<Root>/Merge_28'
     */
    rtb_TmpSignalConversionAtLeM_d4 =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_M_P2SpdCntrlMaxTrqLmt_Init_IRV();

    /* SignalConversion generated from: '<S29>/VeHVTR_U_HV_Volt' incorporates:
     *  Inport: '<Root>/VeHVTR_U_HV_Volt'
     */
    (void)Rte_Read_VeHVTR_U_HV_Volt_Value(&rtb_TmpSignalConversionAtVeHVTR);

    /* S-Function (fcgen): '<S29>/FcnCallGen' incorporates:
     *  SubSystem: '<S29>/MTIC'
     */
    /* Outputs for Atomic SubSystem: '<S125>/Limiter' */
    /* Switch: '<S461>/Switch1' incorporates:
     *  Constant: '<S457>/Calib'
     *  RelationalOperator: '<S461>/Relational Operator'
     */
    if (KeMTIR_M_MtrATrqAchieved_MaxLmt < rtb_TmpSignalConversionAtLeM_ox)
    {
        /* Switch: '<S469>/Switch1' */
        rtb_Switch1_b3 = KeMTIR_M_MtrATrqAchieved_MaxLmt;
    }
    else
    {
        /* Switch: '<S469>/Switch1' */
        rtb_Switch1_b3 = rtb_TmpSignalConversionAtLeM_ox;
    }

    /* End of Switch: '<S461>/Switch1' */

    /* Switch: '<S461>/Switch' incorporates:
     *  Constant: '<S458>/Calib'
     *  RelationalOperator: '<S461>/Relational Operator1'
     */
    if (rtb_Switch1_b3 > KeMTIR_M_MtrATrqAchieved_MinLmt)
    {
        /* Switch: '<S461>/Switch' */
        rtb_TmpSignalConversionAtLeM_ox = rtb_Switch1_b3;
    }
    else
    {
        /* Switch: '<S461>/Switch' */
        rtb_TmpSignalConversionAtLeM_ox = KeMTIR_M_MtrATrqAchieved_MinLmt;
    }

    /* End of Switch: '<S461>/Switch' */
    /* End of Outputs for SubSystem: '<S125>/Limiter' */

    /* Outputs for Atomic SubSystem: '<S125>/GradientLimiter' */
    /* Switch: '<S469>/Switch1' incorporates:
     *  UnitDelay: '<S456>/Unit Delay'
     */
    rtb_Switch1_b3 = MTIR_ac_DW.UnitDelay_DSTATE_ne;

    /* Sum: '<S456>/Sum2' */
    rtb_TmpSignalConversionAtLeM_ox -= rtb_Switch1_b3;

    /* Outputs for Atomic SubSystem: '<S456>/Limiter' */
    /* Switch: '<S462>/Switch1' incorporates:
     *  Constant: '<S459>/Calib'
     *  RelationalOperator: '<S462>/Relational Operator'
     */
    if (KeMTIR_dM_MtrATorqAchievedRate_MaxLmt < rtb_TmpSignalConversionAtLeM_ox)
    {
        /* UnitDelay: '<S435>/Unit Delay' */
        rtb_TmpSignalConversionAtLeM_ox = KeMTIR_dM_MtrATorqAchievedRate_MaxLmt;
    }

    /* End of Switch: '<S462>/Switch1' */

    /* Switch: '<S462>/Switch' incorporates:
     *  Constant: '<S460>/Calib'
     *  RelationalOperator: '<S462>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtLeM_ox <= KeMTIR_dM_MtrATorqAchievedRate_MinLmt)
    {
        rtb_TmpSignalConversionAtLeM_ox = KeMTIR_dM_MtrATorqAchievedRate_MinLmt;
    }

    /* End of Switch: '<S462>/Switch' */
    /* End of Outputs for SubSystem: '<S456>/Limiter' */

    /* Sum: '<S456>/Sum3' */
    VeMTIC_M_MtrA_TorqAchieved = rtb_TmpSignalConversionAtLeM_ox +
        rtb_Switch1_b3;

    /* Update for UnitDelay: '<S456>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_ne = VeMTIC_M_MtrA_TorqAchieved;

    /* End of Outputs for SubSystem: '<S125>/GradientLimiter' */

    /* Outputs for Atomic SubSystem: '<S253>/EdgeRising1' */
    /* Logic: '<S256>/OR1' incorporates:
     *  UnitDelay: '<S256>/Unit Delay'
     */
    rtb_OR1_d2 = !MTIR_ac_DW.UnitDelay_DSTATE_cm;

    /* Update for UnitDelay: '<S256>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_cm = rtb_TmpSignalConversionAtLeM_in;

    /* Outputs for Atomic SubSystem: '<S253>/Count Down  Reset Enabled1' */
    /* Switch: '<S255>/Switch1' incorporates:
     *  Constant: '<S255>/Constant Value'
     *  Logic: '<S256>/AND'
     *  RelationalOperator: '<S255>/Greater  Than'
     *  Switch: '<S255>/Switch2'
     *  UnitDelay: '<S255>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeM_in && rtb_OR1_d2)
    {
        /* Switch: '<S255>/Switch1' incorporates:
         *  Constant: '<S248>/Calib'
         */
        rtb_Switch1_eb = KeMTIR_Cnt_MtrAMaxTorqMinWaitTime;
    }
    else if (((sint32)MTIR_ac_DW.UnitDelay_DSTATE_je) > 0)
    {
        /* Switch: '<S255>/Switch2' incorporates:
         *  Constant: '<S255>/Constant Value1'
         *  Sum: '<S255>/Subtraction'
         *  Switch: '<S255>/Switch1'
         *  UnitDelay: '<S255>/Unit Delay'
         */
        rtb_Switch1_eb = (uint16)((sint32)(((sint32)
            MTIR_ac_DW.UnitDelay_DSTATE_je) - 1));
    }
    else
    {
        /* Switch: '<S255>/Switch1' incorporates:
         *  Switch: '<S255>/Switch2'
         *  UnitDelay: '<S255>/Unit Delay'
         */
        rtb_Switch1_eb = MTIR_ac_DW.UnitDelay_DSTATE_je;
    }

    /* End of Switch: '<S255>/Switch1' */
    /* End of Outputs for SubSystem: '<S253>/EdgeRising1' */

    /* Update for UnitDelay: '<S255>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_je = rtb_Switch1_eb;

    /* End of Outputs for SubSystem: '<S253>/Count Down  Reset Enabled1' */

    /* Outputs for Atomic SubSystem: '<S254>/Limiter' */
    /* Switch: '<S259>/Switch1' incorporates:
     *  Constant: '<S249>/Calib'
     *  RelationalOperator: '<S259>/Relational Operator'
     */
    if (KeMTIR_M_MtrAMaxTrq_MaxLmt < rtb_TmpSignalConversionAtLeM_je)
    {
        /* UnitDelay: '<S435>/Unit Delay' */
        rtb_TmpSignalConversionAtLeM_ox = KeMTIR_M_MtrAMaxTrq_MaxLmt;
    }
    else
    {
        /* UnitDelay: '<S435>/Unit Delay' */
        rtb_TmpSignalConversionAtLeM_ox = rtb_TmpSignalConversionAtLeM_je;
    }

    /* End of Switch: '<S259>/Switch1' */

    /* Switch: '<S259>/Switch' incorporates:
     *  Constant: '<S250>/Calib'
     *  RelationalOperator: '<S259>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtLeM_ox <= KeMTIR_M_MtrAMaxTrq_MinLmt)
    {
        rtb_TmpSignalConversionAtLeM_ox = KeMTIR_M_MtrAMaxTrq_MinLmt;
    }

    /* End of Switch: '<S259>/Switch' */
    /* End of Outputs for SubSystem: '<S254>/Limiter' */

    /* Outputs for Atomic SubSystem: '<S254>/GradientLimiter' */
    /* Sum: '<S258>/Sum2' incorporates:
     *  UnitDelay: '<S258>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_je = rtb_TmpSignalConversionAtLeM_ox -
        MTIR_ac_DW.UnitDelay_DSTATE_f4;

    /* Outputs for Atomic SubSystem: '<S258>/Limiter' */
    /* Switch: '<S260>/Switch1' incorporates:
     *  Constant: '<S251>/Calib'
     *  RelationalOperator: '<S260>/Relational Operator'
     */
    if (KeMTIR_dM_MtrAMaxTorqRate_MaxLmt < rtb_TmpSignalConversionAtLeM_je)
    {
        /* Switch: '<S469>/Switch1' */
        rtb_Switch1_b3 = KeMTIR_dM_MtrAMaxTorqRate_MaxLmt;
    }
    else
    {
        /* Switch: '<S469>/Switch1' */
        rtb_Switch1_b3 = rtb_TmpSignalConversionAtLeM_je;
    }

    /* End of Switch: '<S260>/Switch1' */

    /* Switch: '<S260>/Switch' incorporates:
     *  Constant: '<S252>/Calib'
     *  RelationalOperator: '<S260>/Relational Operator1'
     */
    if (rtb_Switch1_b3 <= KeMTIR_dM_MtrAMaxTorqRate_MinLmt)
    {
        rtb_Switch1_b3 = KeMTIR_dM_MtrAMaxTorqRate_MinLmt;
    }

    /* End of Switch: '<S260>/Switch' */
    /* End of Outputs for SubSystem: '<S258>/Limiter' */

    /* Sum: '<S258>/Sum3' incorporates:
     *  UnitDelay: '<S258>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_je = rtb_Switch1_b3 +
        MTIR_ac_DW.UnitDelay_DSTATE_f4;

    /* Update for UnitDelay: '<S258>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_f4 = rtb_TmpSignalConversionAtLeM_je;

    /* End of Outputs for SubSystem: '<S254>/GradientLimiter' */

    /* Outputs for Atomic SubSystem: '<S253>/Count Down  Reset Enabled1' */
    /* Switch: '<S253>/Switch4' incorporates:
     *  Constant: '<S255>/Constant Value2'
     *  RelationalOperator: '<S255>/Greater  Than1'
     */
    if (((sint32)rtb_Switch1_eb) > 0)
    {
        /* Gain: '<S257>/Gain' incorporates:
         *  UnitDelay: '<S253>/Unit Delay'
         */
        rtb_TmpSignalConversionAtLeM_je = MTIR_ac_DW.UnitDelay_DSTATE_f;
    }

    /* End of Switch: '<S253>/Switch4' */
    /* End of Outputs for SubSystem: '<S253>/Count Down  Reset Enabled1' */

    /* Outputs for Atomic SubSystem: '<S266>/EdgeRising1' */
    /* Logic: '<S269>/OR1' incorporates:
     *  UnitDelay: '<S269>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_in = !MTIR_ac_DW.UnitDelay_DSTATE_abk;

    /* Update for UnitDelay: '<S269>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_abk = rtb_TmpSignalConversionAtLeM_ko;

    /* Outputs for Atomic SubSystem: '<S266>/Count Down  Reset Enabled1' */
    /* Switch: '<S268>/Switch1' incorporates:
     *  Constant: '<S268>/Constant Value'
     *  Logic: '<S269>/AND'
     *  RelationalOperator: '<S268>/Greater  Than'
     *  Switch: '<S268>/Switch2'
     *  UnitDelay: '<S268>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeM_ko && rtb_TmpSignalConversionAtLeM_in)
    {
        /* Switch: '<S268>/Switch1' incorporates:
         *  Constant: '<S261>/Calib'
         */
        rtb_Switch1_eb = KeMTIR_Cnt_MtrAMinTorqMinWaitTime;
    }
    else if (((sint32)MTIR_ac_DW.UnitDelay_DSTATE_lp) > 0)
    {
        /* Switch: '<S268>/Switch2' incorporates:
         *  Constant: '<S268>/Constant Value1'
         *  Sum: '<S268>/Subtraction'
         *  Switch: '<S268>/Switch1'
         *  UnitDelay: '<S268>/Unit Delay'
         */
        rtb_Switch1_eb = (uint16)((sint32)(((sint32)
            MTIR_ac_DW.UnitDelay_DSTATE_lp) - 1));
    }
    else
    {
        /* Switch: '<S268>/Switch1' incorporates:
         *  Switch: '<S268>/Switch2'
         *  UnitDelay: '<S268>/Unit Delay'
         */
        rtb_Switch1_eb = MTIR_ac_DW.UnitDelay_DSTATE_lp;
    }

    /* End of Switch: '<S268>/Switch1' */
    /* End of Outputs for SubSystem: '<S266>/EdgeRising1' */

    /* Update for UnitDelay: '<S268>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_lp = rtb_Switch1_eb;

    /* End of Outputs for SubSystem: '<S266>/Count Down  Reset Enabled1' */

    /* Outputs for Atomic SubSystem: '<S267>/Limiter' */
    /* Switch: '<S272>/Switch1' incorporates:
     *  Constant: '<S262>/Calib'
     *  RelationalOperator: '<S272>/Relational Operator'
     */
    if (KeMTIR_M_MtrAMinTrq_MaxLmt < rtb_TmpSignalConversionAtLeM_my)
    {
        /* UnitDelay: '<S435>/Unit Delay' */
        rtb_TmpSignalConversionAtLeM_ox = KeMTIR_M_MtrAMinTrq_MaxLmt;
    }
    else
    {
        /* UnitDelay: '<S435>/Unit Delay' */
        rtb_TmpSignalConversionAtLeM_ox = rtb_TmpSignalConversionAtLeM_my;
    }

    /* End of Switch: '<S272>/Switch1' */

    /* Switch: '<S272>/Switch' incorporates:
     *  Constant: '<S263>/Calib'
     *  RelationalOperator: '<S272>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtLeM_ox <= KeMTIR_M_MtrAMinTrq_MinLmt)
    {
        rtb_TmpSignalConversionAtLeM_ox = KeMTIR_M_MtrAMinTrq_MinLmt;
    }

    /* End of Switch: '<S272>/Switch' */
    /* End of Outputs for SubSystem: '<S267>/Limiter' */

    /* Outputs for Atomic SubSystem: '<S267>/GradientLimiter' */
    /* Sum: '<S271>/Sum2' incorporates:
     *  UnitDelay: '<S271>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_my = rtb_TmpSignalConversionAtLeM_ox -
        MTIR_ac_DW.UnitDelay_DSTATE_h;

    /* Outputs for Atomic SubSystem: '<S271>/Limiter' */
    /* Switch: '<S273>/Switch1' incorporates:
     *  Constant: '<S264>/Calib'
     *  RelationalOperator: '<S273>/Relational Operator'
     */
    if (KeMTIR_dM_MtrAMinTorqRate_MaxLmt < rtb_TmpSignalConversionAtLeM_my)
    {
        /* Switch: '<S469>/Switch1' */
        rtb_Switch1_b3 = KeMTIR_dM_MtrAMinTorqRate_MaxLmt;
    }
    else
    {
        /* Switch: '<S469>/Switch1' */
        rtb_Switch1_b3 = rtb_TmpSignalConversionAtLeM_my;
    }

    /* End of Switch: '<S273>/Switch1' */

    /* Switch: '<S273>/Switch' incorporates:
     *  Constant: '<S265>/Calib'
     *  RelationalOperator: '<S273>/Relational Operator1'
     */
    if (rtb_Switch1_b3 <= KeMTIR_dM_MtrAMinTorqRate_MinLmt)
    {
        rtb_Switch1_b3 = KeMTIR_dM_MtrAMinTorqRate_MinLmt;
    }

    /* End of Switch: '<S273>/Switch' */
    /* End of Outputs for SubSystem: '<S271>/Limiter' */

    /* Sum: '<S271>/Sum3' incorporates:
     *  UnitDelay: '<S271>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_my = rtb_Switch1_b3 +
        MTIR_ac_DW.UnitDelay_DSTATE_h;

    /* Update for UnitDelay: '<S271>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_h = rtb_TmpSignalConversionAtLeM_my;

    /* End of Outputs for SubSystem: '<S267>/GradientLimiter' */

    /* Outputs for Atomic SubSystem: '<S266>/Count Down  Reset Enabled1' */
    /* Switch: '<S266>/Switch4' incorporates:
     *  Constant: '<S268>/Constant Value2'
     *  RelationalOperator: '<S268>/Greater  Than1'
     */
    if (((sint32)rtb_Switch1_eb) > 0)
    {
        /* Gain: '<S270>/Gain' incorporates:
         *  UnitDelay: '<S266>/Unit Delay'
         */
        rtb_TmpSignalConversionAtLeM_my = MTIR_ac_DW.UnitDelay_DSTATE_l;
    }

    /* End of Switch: '<S266>/Switch4' */
    /* End of Outputs for SubSystem: '<S266>/Count Down  Reset Enabled1' */

    /* Outputs for Atomic SubSystem: '<S124>/Limiter' */
    /* Switch: '<S454>/Switch1' incorporates:
     *  Constant: '<S450>/Calib'
     *  RelationalOperator: '<S454>/Relational Operator'
     */
    if (KeMTIR_M_MtrATrqAchieved_AEMD_MaxLmt < rtb_TmpSignalConversionAtLeM_lk)
    {
        /* UnitDelay: '<S435>/Unit Delay' */
        rtb_TmpSignalConversionAtLeM_ox = KeMTIR_M_MtrATrqAchieved_AEMD_MaxLmt;
    }
    else
    {
        /* UnitDelay: '<S435>/Unit Delay' */
        rtb_TmpSignalConversionAtLeM_ox = rtb_TmpSignalConversionAtLeM_lk;
    }

    /* End of Switch: '<S454>/Switch1' */

    /* Switch: '<S454>/Switch' incorporates:
     *  Constant: '<S451>/Calib'
     *  RelationalOperator: '<S454>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtLeM_ox > KeMTIR_M_MtrATrqAchieved_AEMD_MinLmt)
    {
        /* Switch: '<S454>/Switch' */
        rtb_Switch1_b3 = rtb_TmpSignalConversionAtLeM_ox;
    }
    else
    {
        /* Switch: '<S454>/Switch' */
        rtb_Switch1_b3 = KeMTIR_M_MtrATrqAchieved_AEMD_MinLmt;
    }

    /* End of Switch: '<S454>/Switch' */
    /* End of Outputs for SubSystem: '<S124>/Limiter' */

    /* Outputs for Atomic SubSystem: '<S124>/GradientLimiter' */
    /* UnitDelay: '<S435>/Unit Delay' incorporates:
     *  UnitDelay: '<S449>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_ox = MTIR_ac_DW.UnitDelay_DSTATE_os;

    /* Sum: '<S449>/Sum2' */
    rtb_Switch1_b3 -= rtb_TmpSignalConversionAtLeM_ox;

    /* Outputs for Atomic SubSystem: '<S449>/Limiter' */
    /* Switch: '<S455>/Switch1' incorporates:
     *  Constant: '<S452>/Calib'
     *  RelationalOperator: '<S455>/Relational Operator'
     */
    if (KeMTIR_dM_MtrATorqAchieved_AEMD_Rate_MaxLmt < rtb_Switch1_b3)
    {
        /* Switch: '<S469>/Switch1' */
        rtb_Switch1_b3 = KeMTIR_dM_MtrATorqAchieved_AEMD_Rate_MaxLmt;
    }

    /* End of Switch: '<S455>/Switch1' */

    /* Switch: '<S455>/Switch' incorporates:
     *  Constant: '<S453>/Calib'
     *  RelationalOperator: '<S455>/Relational Operator1'
     */
    if (rtb_Switch1_b3 <= KeMTIR_dM_MtrATorqAchieved_AEMD_Rate_MinLmt)
    {
        rtb_Switch1_b3 = KeMTIR_dM_MtrATorqAchieved_AEMD_Rate_MinLmt;
    }

    /* End of Switch: '<S455>/Switch' */
    /* End of Outputs for SubSystem: '<S449>/Limiter' */

    /* Sum: '<S449>/Sum3' */
    VeMTIC_M_MtrA_TorqAchieved_AEMD = rtb_Switch1_b3 +
        rtb_TmpSignalConversionAtLeM_ox;

    /* Update for UnitDelay: '<S449>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_os = VeMTIC_M_MtrA_TorqAchieved_AEMD;

    /* End of Outputs for SubSystem: '<S124>/GradientLimiter' */

    /* Logic: '<S135>/Logical2' incorporates:
     *  Assignment: '<S145>/ArrayAssignment'
     *  Assignment: '<S163>/ArrayAssignment'
     *  Assignment: '<S186>/ArrayAssignment'
     *  Constant: '<S134>/Constant Value10'
     *  Constant: '<S134>/Constant Value11'
     *  Constant: '<S134>/Constant Value12'
     *  Constant: '<S134>/Constant Value13'
     *  Constant: '<S134>/Constant Value14'
     *  Constant: '<S134>/Constant Value15'
     *  Constant: '<S134>/Constant Value16'
     *  Constant: '<S134>/Constant Value17'
     *  Constant: '<S134>/Constant Value18'
     *  Constant: '<S134>/Constant Value19'
     *  Constant: '<S134>/Constant Value20'
     *  Constant: '<S134>/Constant Value21'
     *  Constant: '<S134>/Constant Value22'
     *  Constant: '<S134>/Constant Value23'
     *  Constant: '<S134>/Constant Value24'
     *  Constant: '<S134>/Constant Value25'
     *  Constant: '<S134>/Constant Value26'
     *  Constant: '<S134>/Constant Value27'
     *  Constant: '<S134>/Constant Value28'
     *  Constant: '<S134>/Constant Value29'
     *  Constant: '<S134>/Constant Value30'
     *  Constant: '<S134>/Constant Value31'
     *  Constant: '<S134>/Constant Value32'
     *  Constant: '<S134>/Constant Value33'
     *  Constant: '<S134>/Constant Value34'
     *  Constant: '<S134>/Constant Value35'
     *  Constant: '<S134>/Constant Value36'
     *  Constant: '<S134>/Constant Value37'
     *  Constant: '<S134>/Constant Value38'
     *  Constant: '<S134>/Constant Value39'
     *  Constant: '<S134>/Constant Value40'
     *  Constant: '<S134>/Constant Value41'
     *  Constant: '<S134>/Constant Value42'
     *  Constant: '<S134>/Constant Value43'
     *  Constant: '<S134>/Constant Value44'
     *  Constant: '<S134>/Constant Value45'
     *  Constant: '<S134>/Constant Value46'
     *  Constant: '<S134>/Constant Value47'
     *  Constant: '<S134>/Constant Value48'
     *  Constant: '<S134>/Constant Value49'
     *  Constant: '<S134>/Constant Value50'
     *  Constant: '<S134>/Constant Value51'
     *  Constant: '<S134>/Constant Value52'
     *  Constant: '<S134>/Constant Value53'
     *  Constant: '<S134>/Constant Value6'
     *  Constant: '<S134>/Constant Value7'
     *  Constant: '<S134>/Constant Value8'
     *  Constant: '<S134>/Constant Value9'
     *  Constant: '<S146>/Calib'
     *  Constant: '<S149>/Calib'
     *  Constant: '<S153>/Constant'
     *  Constant: '<S153>/Constant1'
     *  Constant: '<S153>/Constant10'
     *  Constant: '<S153>/Constant11'
     *  Constant: '<S153>/Constant12'
     *  Constant: '<S153>/Constant13'
     *  Constant: '<S153>/Constant14'
     *  Constant: '<S153>/Constant15'
     *  Constant: '<S153>/Constant2'
     *  Constant: '<S153>/Constant3'
     *  Constant: '<S153>/Constant4'
     *  Constant: '<S153>/Constant5'
     *  Constant: '<S153>/Constant6'
     *  Constant: '<S153>/Constant7'
     *  Constant: '<S153>/Constant8'
     *  Constant: '<S153>/Constant9'
     *  Constant: '<S167>/Calib'
     *  Constant: '<S176>/Constant'
     *  Constant: '<S176>/Constant1'
     *  Constant: '<S176>/Constant10'
     *  Constant: '<S176>/Constant11'
     *  Constant: '<S176>/Constant12'
     *  Constant: '<S176>/Constant13'
     *  Constant: '<S176>/Constant14'
     *  Constant: '<S176>/Constant15'
     *  Constant: '<S176>/Constant2'
     *  Constant: '<S176>/Constant3'
     *  Constant: '<S176>/Constant4'
     *  Constant: '<S176>/Constant5'
     *  Constant: '<S176>/Constant6'
     *  Constant: '<S176>/Constant7'
     *  Constant: '<S176>/Constant8'
     *  Constant: '<S176>/Constant9'
     *  Constant: '<S190>/Calib'
     *  Constant: '<S199>/Constant'
     *  Constant: '<S199>/Constant1'
     *  Constant: '<S199>/Constant10'
     *  Constant: '<S199>/Constant11'
     *  Constant: '<S199>/Constant12'
     *  Constant: '<S199>/Constant13'
     *  Constant: '<S199>/Constant14'
     *  Constant: '<S199>/Constant15'
     *  Constant: '<S199>/Constant2'
     *  Constant: '<S199>/Constant3'
     *  Constant: '<S199>/Constant4'
     *  Constant: '<S199>/Constant5'
     *  Constant: '<S199>/Constant6'
     *  Constant: '<S199>/Constant7'
     *  Constant: '<S199>/Constant8'
     *  Constant: '<S199>/Constant9'
     *  Constant: '<S215>/Constant Value2'
     *  Constant: '<S228>/Constant Value2'
     *  Gain: '<S150>/Gain'
     *  Gain: '<S169>/Gain'
     *  Gain: '<S192>/Gain'
     *  Gain: '<S217>/Gain'
     *  Gain: '<S230>/Gain'
     *  Logic: '<S141>/Logical1'
     *  Logic: '<S141>/Logical10'
     *  Logic: '<S141>/Logical2'
     *  Logic: '<S141>/Logical3'
     *  Logic: '<S141>/Logical8'
     *  Logic: '<S141>/Logical9'
     *  Logic: '<S142>/Logical1'
     *  Logic: '<S142>/Logical10'
     *  Logic: '<S142>/Logical2'
     *  Logic: '<S142>/Logical3'
     *  Logic: '<S142>/Logical8'
     *  Logic: '<S142>/Logical9'
     *  Logic: '<S143>/Logical1'
     *  Logic: '<S143>/Logical10'
     *  Logic: '<S143>/Logical2'
     *  Logic: '<S143>/Logical3'
     *  Logic: '<S143>/Logical8'
     *  Logic: '<S143>/Logical9'
     *  Logic: '<S145>/Logical'
     *  Logic: '<S145>/Logical1'
     *  Logic: '<S145>/Logical7'
     *  Logic: '<S150>/Logical2'
     *  Logic: '<S163>/Logical'
     *  Logic: '<S163>/Logical1'
     *  Logic: '<S163>/Logical3'
     *  Logic: '<S163>/Logical7'
     *  Logic: '<S169>/Logical2'
     *  Logic: '<S186>/Logical'
     *  Logic: '<S186>/Logical1'
     *  Logic: '<S186>/Logical3'
     *  Logic: '<S186>/Logical7'
     *  Logic: '<S192>/Logical2'
     *  RelationalOperator: '<S150>/Relational Operator'
     *  RelationalOperator: '<S150>/Relational Operator1'
     *  RelationalOperator: '<S169>/Relational Operator'
     *  RelationalOperator: '<S169>/Relational Operator1'
     *  RelationalOperator: '<S192>/Relational Operator'
     *  RelationalOperator: '<S192>/Relational Operator1'
     *  RelationalOperator: '<S215>/Greater  Than1'
     *  RelationalOperator: '<S228>/Greater  Than1'
     *  SignalConversion generated from: '<S117>/Variant Source2'
     *  Sum: '<S166>/Add'
     *  Sum: '<S166>/Add1'
     *  Sum: '<S189>/Add'
     *  Sum: '<S189>/Add1'
     *  Switch: '<S144>/Switch'
     *  Switch: '<S145>/Switch1'
     *  Switch: '<S145>/Switch2'
     *  Switch: '<S162>/Switch'
     *  Switch: '<S163>/Switch1'
     *  Switch: '<S163>/Switch2'
     *  Switch: '<S173>/Switch2'
     *  Switch: '<S173>/Switch3'
     *  Switch: '<S185>/Switch'
     *  Switch: '<S186>/Switch1'
     *  Switch: '<S186>/Switch2'
     *  Switch: '<S196>/Switch2'
     *  Switch: '<S196>/Switch3'
     *  Switch: '<S213>/Switch4'
     *  Switch: '<S226>/Switch4'
     *  UnitDelay: '<S141>/Unit Delay1'
     *  UnitDelay: '<S142>/Unit Delay1'
     *  UnitDelay: '<S143>/Unit Delay1'
     *  UnitDelay: '<S144>/Unit Delay1'
     *  UnitDelay: '<S150>/Unit Delay5'
     *  UnitDelay: '<S162>/Unit Delay4'
     *  UnitDelay: '<S169>/Unit Delay5'
     *  UnitDelay: '<S173>/Unit Delay'
     *  UnitDelay: '<S185>/Unit Delay4'
     *  UnitDelay: '<S192>/Unit Delay5'
     *  UnitDelay: '<S196>/Unit Delay'
     *  UnitDelay: '<S213>/Unit Delay'
     *  UnitDelay: '<S226>/Unit Delay'
     * */
#if Rte_SysCon_Variant_MTIR_1

    /* Outputs for Enabled SubSystem: '<S143>/Multiply' */
    /* Outputs for Atomic SubSystem: '<S186>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S186>/EdgeRising3' */
    /* Outputs for Atomic SubSystem: '<S186>/EdgeRising2' */
    /* Outputs for Atomic SubSystem: '<S186>/EdgeRising1' */
    /* Outputs for Atomic SubSystem: '<S186>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S192>/Accumulator Reset' */
    /* Outputs for Atomic SubSystem: '<S189>/Limiter' */
    /* Outputs for Enabled SubSystem: '<S142>/Multiply' */
    /* Outputs for Atomic SubSystem: '<S163>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S163>/EdgeRising3' */
    /* Outputs for Atomic SubSystem: '<S163>/EdgeRising2' */
    /* Outputs for Atomic SubSystem: '<S163>/EdgeRising1' */
    /* Outputs for Atomic SubSystem: '<S163>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S169>/Accumulator Reset' */
    /* Outputs for Atomic SubSystem: '<S166>/Limiter' */
    /* Outputs for Enabled SubSystem: '<S141>/Multiply' */
    /* Outputs for Atomic SubSystem: '<S145>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S145>/EdgeRising3' */
    /* Outputs for Atomic SubSystem: '<S145>/EdgeRising2' */
    /* Outputs for Atomic SubSystem: '<S145>/EdgeRising1' */
    /* Outputs for Atomic SubSystem: '<S145>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S150>/Accumulator Reset' */
    /* Outputs for Atomic SubSystem: '<S139>/GradientLimiter' */
    /* Outputs for Atomic SubSystem: '<S139>/Limiter' */
    /* Outputs for Atomic SubSystem: '<S227>/GradientLimiter' */
    /* Outputs for Atomic SubSystem: '<S227>/Limiter' */
    /* Outputs for Atomic SubSystem: '<S226>/Count Down  Reset Enabled1' */
    /* Outputs for Atomic SubSystem: '<S226>/EdgeRising1' */
    /* Outputs for Atomic SubSystem: '<S214>/GradientLimiter' */
    /* Outputs for Atomic SubSystem: '<S214>/Limiter' */
    /* Outputs for Atomic SubSystem: '<S213>/Count Down  Reset Enabled1' */
    /* Outputs for Atomic SubSystem: '<S213>/EdgeRising1' */
    /* Outputs for Atomic SubSystem: '<S140>/GradientLimiter' */
    /* Outputs for Atomic SubSystem: '<S140>/Limiter' */
    /* Switch: '<S246>/Switch1' incorporates:
     *  Constant: '<S242>/Calib'
     *  RelationalOperator: '<S246>/Relational Operator'
     */
    if (KeMTIR_M_MtrCTrqAchieved_MaxLmt < rtb_TmpSignalConversionAtLeM_l3)
    {
        /* UnitDelay: '<S435>/Unit Delay' */
        rtb_TmpSignalConversionAtLeM_ox = KeMTIR_M_MtrCTrqAchieved_MaxLmt;
    }
    else
    {
        /* UnitDelay: '<S435>/Unit Delay' */
        rtb_TmpSignalConversionAtLeM_ox = rtb_TmpSignalConversionAtLeM_l3;
    }

    /* End of Switch: '<S246>/Switch1' */

    /* Switch: '<S246>/Switch' incorporates:
     *  Constant: '<S243>/Calib'
     *  RelationalOperator: '<S246>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtLeM_ox <= KeMTIR_M_MtrCTrqAchieved_MinLmt)
    {
        rtb_TmpSignalConversionAtLeM_ox = KeMTIR_M_MtrCTrqAchieved_MinLmt;
    }

    /* End of Switch: '<S246>/Switch' */

    /* Sum: '<S241>/Sum2' incorporates:
     *  UnitDelay: '<S241>/Unit Delay'
     */
    rtb_Sum2_jr = rtb_TmpSignalConversionAtLeM_ox -
        MTIR_ac_DW.UnitDelay_DSTATE_bt;

    /* Outputs for Atomic SubSystem: '<S241>/Limiter' */
    /* Switch: '<S247>/Switch1' incorporates:
     *  Constant: '<S244>/Calib'
     *  RelationalOperator: '<S247>/Relational Operator'
     */
    if (KeMTIR_dM_MtrCTorqAchievedRate_MaxLmt < rtb_Sum2_jr)
    {
        /* Switch: '<S469>/Switch1' */
        rtb_Switch1_b3 = KeMTIR_dM_MtrCTorqAchievedRate_MaxLmt;
    }
    else
    {
        /* Switch: '<S469>/Switch1' */
        rtb_Switch1_b3 = rtb_Sum2_jr;
    }

    /* End of Switch: '<S247>/Switch1' */

    /* Switch: '<S247>/Switch' incorporates:
     *  Constant: '<S245>/Calib'
     *  RelationalOperator: '<S247>/Relational Operator1'
     */
    if (rtb_Switch1_b3 <= KeMTIR_dM_MtrCTorqAchievedRate_MinLmt)
    {
        rtb_Switch1_b3 = KeMTIR_dM_MtrCTorqAchievedRate_MinLmt;
    }

    /* End of Switch: '<S247>/Switch' */
    /* End of Outputs for SubSystem: '<S241>/Limiter' */

    /* Sum: '<S241>/Sum3' incorporates:
     *  UnitDelay: '<S241>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_lk = rtb_Switch1_b3 +
        MTIR_ac_DW.UnitDelay_DSTATE_bt;

    /* Update for UnitDelay: '<S241>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_bt = rtb_TmpSignalConversionAtLeM_lk;

    /* VariantMerge generated from: '<S117>/Variant Source4' */
    MTIR_ac_B.VariantMerge_For_Variant_Sour_k = (rtb_TmpSignalConversionAtLeM_ee
        || rtb_TmpSignalConversionAtLe_omf);

    /* Logic: '<S216>/AND' incorporates:
     *  Logic: '<S216>/OR1'
     *  UnitDelay: '<S216>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_ko = (rtb_TmpSignalConversionAtLeM_b1 &&
        (!MTIR_ac_DW.UnitDelay_DSTATE_cb));

    /* Update for UnitDelay: '<S216>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_cb = rtb_TmpSignalConversionAtLeM_b1;

    /* Switch: '<S215>/Switch1' incorporates:
     *  Constant: '<S215>/Constant Value'
     *  RelationalOperator: '<S215>/Greater  Than'
     *  Switch: '<S215>/Switch2'
     *  UnitDelay: '<S215>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeM_ko)
    {
        /* Switch: '<S215>/Switch1' incorporates:
         *  Constant: '<S208>/Calib'
         */
        rtb_Switch1_eb = KeMTIR_Cnt_MtrCMaxTorqMinWaitTm;
    }
    else if (((sint32)MTIR_ac_DW.UnitDelay_DSTATE_gg) > 0)
    {
        /* Switch: '<S215>/Switch2' incorporates:
         *  Constant: '<S215>/Constant Value1'
         *  Sum: '<S215>/Subtraction'
         *  Switch: '<S215>/Switch1'
         *  UnitDelay: '<S215>/Unit Delay'
         */
        rtb_Switch1_eb = (uint16)((sint32)(((sint32)
            MTIR_ac_DW.UnitDelay_DSTATE_gg) - 1));
    }
    else
    {
        /* Switch: '<S215>/Switch1' incorporates:
         *  Switch: '<S215>/Switch2'
         *  UnitDelay: '<S215>/Unit Delay'
         */
        rtb_Switch1_eb = MTIR_ac_DW.UnitDelay_DSTATE_gg;
    }

    /* End of Switch: '<S215>/Switch1' */

    /* Update for UnitDelay: '<S215>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_gg = rtb_Switch1_eb;

    /* Switch: '<S219>/Switch1' incorporates:
     *  Constant: '<S209>/Calib'
     *  RelationalOperator: '<S219>/Relational Operator'
     */
    if (KeMTIR_M_MtrCMaxTrq_MaxLmt < rtb_TmpSignalConversionAtLeM_oe)
    {
        /* UnitDelay: '<S435>/Unit Delay' */
        rtb_TmpSignalConversionAtLeM_ox = KeMTIR_M_MtrCMaxTrq_MaxLmt;
    }
    else
    {
        /* UnitDelay: '<S435>/Unit Delay' */
        rtb_TmpSignalConversionAtLeM_ox = rtb_TmpSignalConversionAtLeM_oe;
    }

    /* End of Switch: '<S219>/Switch1' */

    /* Switch: '<S219>/Switch' incorporates:
     *  Constant: '<S210>/Calib'
     *  RelationalOperator: '<S219>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtLeM_ox <= KeMTIR_M_MtrCMaxTrq_MinLmt)
    {
        rtb_TmpSignalConversionAtLeM_ox = KeMTIR_M_MtrCMaxTrq_MinLmt;
    }

    /* End of Switch: '<S219>/Switch' */

    /* Sum: '<S218>/Sum2' incorporates:
     *  UnitDelay: '<S218>/Unit Delay'
     */
    rtb_Sum2_jr = rtb_TmpSignalConversionAtLeM_ox -
        MTIR_ac_DW.UnitDelay_DSTATE_py;

    /* Outputs for Atomic SubSystem: '<S218>/Limiter' */
    /* Switch: '<S220>/Switch1' incorporates:
     *  Constant: '<S211>/Calib'
     *  RelationalOperator: '<S220>/Relational Operator'
     */
    if (KeMTIR_dM_MtrCMaxTorqRate_MaxLmt < rtb_Sum2_jr)
    {
        /* Switch: '<S469>/Switch1' */
        rtb_Switch1_b3 = KeMTIR_dM_MtrCMaxTorqRate_MaxLmt;
    }
    else
    {
        /* Switch: '<S469>/Switch1' */
        rtb_Switch1_b3 = rtb_Sum2_jr;
    }

    /* End of Switch: '<S220>/Switch1' */

    /* Switch: '<S220>/Switch' incorporates:
     *  Constant: '<S212>/Calib'
     *  RelationalOperator: '<S220>/Relational Operator1'
     */
    if (rtb_Switch1_b3 <= KeMTIR_dM_MtrCMaxTorqRate_MinLmt)
    {
        rtb_Switch1_b3 = KeMTIR_dM_MtrCMaxTorqRate_MinLmt;
    }

    /* End of Switch: '<S220>/Switch' */
    /* End of Outputs for SubSystem: '<S218>/Limiter' */

    /* Sum: '<S218>/Sum3' incorporates:
     *  UnitDelay: '<S218>/Unit Delay'
     */
    rtb_Sum2_jr = rtb_Switch1_b3 + MTIR_ac_DW.UnitDelay_DSTATE_py;

    /* Update for UnitDelay: '<S218>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_py = rtb_Sum2_jr;
    if (((sint32)rtb_Switch1_eb) > 0)
    {
        /* Gain: '<S217>/Gain' */
        rtb_Sum2_jr = MTIR_ac_DW.UnitDelay_DSTATE_d;
    }

    /* Logic: '<S229>/AND' incorporates:
     *  Constant: '<S215>/Constant Value2'
     *  Logic: '<S229>/OR1'
     *  RelationalOperator: '<S215>/Greater  Than1'
     *  UnitDelay: '<S229>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_b1 = (rtb_TmpSignalConversionAtLeM_jo &&
        (!MTIR_ac_DW.UnitDelay_DSTATE_fy));

    /* Update for UnitDelay: '<S229>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_fy = rtb_TmpSignalConversionAtLeM_jo;

    /* Switch: '<S228>/Switch1' incorporates:
     *  Constant: '<S228>/Constant Value'
     *  RelationalOperator: '<S228>/Greater  Than'
     *  Switch: '<S228>/Switch2'
     *  UnitDelay: '<S228>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeM_b1)
    {
        /* Switch: '<S228>/Switch1' incorporates:
         *  Constant: '<S221>/Calib'
         */
        rtb_Switch1_eb = KeMTIR_Cnt_MtrCMinTorqMinWaitTm;
    }
    else if (((sint32)MTIR_ac_DW.UnitDelay_DSTATE_bpa) > 0)
    {
        /* Switch: '<S228>/Switch2' incorporates:
         *  Constant: '<S228>/Constant Value1'
         *  Sum: '<S228>/Subtraction'
         *  Switch: '<S228>/Switch1'
         *  UnitDelay: '<S228>/Unit Delay'
         */
        rtb_Switch1_eb = (uint16)((sint32)(((sint32)
            MTIR_ac_DW.UnitDelay_DSTATE_bpa) - 1));
    }
    else
    {
        /* Switch: '<S228>/Switch1' incorporates:
         *  Switch: '<S228>/Switch2'
         *  UnitDelay: '<S228>/Unit Delay'
         */
        rtb_Switch1_eb = MTIR_ac_DW.UnitDelay_DSTATE_bpa;
    }

    /* End of Switch: '<S228>/Switch1' */

    /* Update for UnitDelay: '<S228>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_bpa = rtb_Switch1_eb;

    /* Switch: '<S232>/Switch1' incorporates:
     *  Constant: '<S222>/Calib'
     *  RelationalOperator: '<S232>/Relational Operator'
     */
    if (KeMTIR_M_MtrCMinTrq_MaxLmt < rtb_TmpSignalConversionAtLeM_ki)
    {
        /* UnitDelay: '<S435>/Unit Delay' */
        rtb_TmpSignalConversionAtLeM_ox = KeMTIR_M_MtrCMinTrq_MaxLmt;
    }
    else
    {
        /* UnitDelay: '<S435>/Unit Delay' */
        rtb_TmpSignalConversionAtLeM_ox = rtb_TmpSignalConversionAtLeM_ki;
    }

    /* End of Switch: '<S232>/Switch1' */

    /* Switch: '<S232>/Switch' incorporates:
     *  Constant: '<S223>/Calib'
     *  RelationalOperator: '<S232>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtLeM_ox <= KeMTIR_M_MtrCMinTrq_MinLmt)
    {
        rtb_TmpSignalConversionAtLeM_ox = KeMTIR_M_MtrCMinTrq_MinLmt;
    }

    /* End of Switch: '<S232>/Switch' */

    /* Sum: '<S231>/Sum2' incorporates:
     *  UnitDelay: '<S231>/Unit Delay'
     */
    rtb_Sum2_m = rtb_TmpSignalConversionAtLeM_ox -
        MTIR_ac_DW.UnitDelay_DSTATE_ln;

    /* Outputs for Atomic SubSystem: '<S231>/Limiter' */
    /* Switch: '<S233>/Switch1' incorporates:
     *  Constant: '<S224>/Calib'
     *  RelationalOperator: '<S233>/Relational Operator'
     */
    if (KeMTIR_dM_MtrCMinTorqRate_MaxLmt < rtb_Sum2_m)
    {
        /* Switch: '<S469>/Switch1' */
        rtb_Switch1_b3 = KeMTIR_dM_MtrCMinTorqRate_MaxLmt;
    }
    else
    {
        /* Switch: '<S469>/Switch1' */
        rtb_Switch1_b3 = rtb_Sum2_m;
    }

    /* End of Switch: '<S233>/Switch1' */

    /* Switch: '<S233>/Switch' incorporates:
     *  Constant: '<S225>/Calib'
     *  RelationalOperator: '<S233>/Relational Operator1'
     */
    if (rtb_Switch1_b3 <= KeMTIR_dM_MtrCMinTorqRate_MinLmt)
    {
        rtb_Switch1_b3 = KeMTIR_dM_MtrCMinTorqRate_MinLmt;
    }

    /* End of Switch: '<S233>/Switch' */
    /* End of Outputs for SubSystem: '<S231>/Limiter' */

    /* Sum: '<S231>/Sum3' incorporates:
     *  UnitDelay: '<S231>/Unit Delay'
     */
    rtb_Sum2_m = rtb_Switch1_b3 + MTIR_ac_DW.UnitDelay_DSTATE_ln;

    /* Update for UnitDelay: '<S231>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_ln = rtb_Sum2_m;
    if (((sint32)rtb_Switch1_eb) > 0)
    {
        /* Gain: '<S230>/Gain' */
        rtb_Sum2_m = MTIR_ac_DW.UnitDelay_DSTATE_g;
    }

    /* Switch: '<S239>/Switch1' incorporates:
     *  Constant: '<S228>/Constant Value2'
     *  Constant: '<S235>/Calib'
     *  RelationalOperator: '<S228>/Greater  Than1'
     *  RelationalOperator: '<S239>/Relational Operator'
     */
    if (KeMTIR_M_MtrCTrqAchieved_AEMD_MaxLmt < rtb_TmpSignalConversionAtLeM_ky)
    {
        /* UnitDelay: '<S435>/Unit Delay' */
        rtb_TmpSignalConversionAtLeM_ox = KeMTIR_M_MtrCTrqAchieved_AEMD_MaxLmt;
    }
    else
    {
        /* UnitDelay: '<S435>/Unit Delay' */
        rtb_TmpSignalConversionAtLeM_ox = rtb_TmpSignalConversionAtLeM_ky;
    }

    /* End of Switch: '<S239>/Switch1' */

    /* Switch: '<S239>/Switch' incorporates:
     *  Constant: '<S236>/Calib'
     *  RelationalOperator: '<S239>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtLeM_ox <= KeMTIR_M_MtrCTrqAchieved_AEMD_MinLmt)
    {
        rtb_TmpSignalConversionAtLeM_ox = KeMTIR_M_MtrCTrqAchieved_AEMD_MinLmt;
    }

    /* End of Switch: '<S239>/Switch' */

    /* Sum: '<S234>/Sum2' incorporates:
     *  UnitDelay: '<S234>/Unit Delay'
     */
    rtb_Sum2_oi = rtb_TmpSignalConversionAtLeM_ox -
        MTIR_ac_DW.UnitDelay_DSTATE_h3;

    /* Outputs for Atomic SubSystem: '<S234>/Limiter' */
    /* Switch: '<S240>/Switch1' incorporates:
     *  Constant: '<S237>/Calib'
     *  RelationalOperator: '<S240>/Relational Operator'
     */
    if (KeMTIR_dM_MtrCTorqAchieved_AEMD_Rate_MaxLmt < rtb_Sum2_oi)
    {
        /* Switch: '<S469>/Switch1' */
        rtb_Switch1_b3 = KeMTIR_dM_MtrCTorqAchieved_AEMD_Rate_MaxLmt;
    }
    else
    {
        /* Switch: '<S469>/Switch1' */
        rtb_Switch1_b3 = rtb_Sum2_oi;
    }

    /* End of Switch: '<S240>/Switch1' */

    /* Switch: '<S240>/Switch' incorporates:
     *  Constant: '<S238>/Calib'
     *  RelationalOperator: '<S240>/Relational Operator1'
     */
    if (rtb_Switch1_b3 <= KeMTIR_dM_MtrCTorqAchieved_AEMD_Rate_MinLmt)
    {
        rtb_Switch1_b3 = KeMTIR_dM_MtrCTorqAchieved_AEMD_Rate_MinLmt;
    }

    /* End of Switch: '<S240>/Switch' */
    /* End of Outputs for SubSystem: '<S234>/Limiter' */

    /* Sum: '<S234>/Sum3' incorporates:
     *  UnitDelay: '<S234>/Unit Delay'
     */
    rtb_Sum3_f = rtb_Switch1_b3 + MTIR_ac_DW.UnitDelay_DSTATE_h3;

    /* Update for UnitDelay: '<S234>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_h3 = rtb_Sum3_f;
    if (KeMTIR_b_MtrC_EnblOvrd_HV_Volt)
    {
        /* Switch: '<S144>/Switch' incorporates:
         *  Constant: '<S148>/Calib'
         */
        VeMTIC_U_MtrCVoltFinal = KeMTIR_U_MtrC_Overrd_HV_Volt;
    }
    else
    {
        /* Switch: '<S144>/Switch' */
        VeMTIC_U_MtrCVoltFinal = rtb_TmpSignalConversionAtVeHVTR;
    }

    /* Switch: '<S151>/Switch1' incorporates:
     *  Constant: '<S149>/Calib'
     */
    if (MTIR_ac_DW.UnitDelay5_DSTATE_h)
    {
        /* Switch: '<S151>/Switch1' incorporates:
         *  Constant: '<S150>/Constant Value'
         */
        rtb_Sum2_oi = 0.0F;
    }
    else
    {
        /* Switch: '<S151>/Switch1' incorporates:
         *  Sum: '<S144>/Sum'
         *  Sum: '<S151>/Summation'
         *  UnitDelay: '<S151>/Unit Delay'
         */
        rtb_Sum2_oi = (VeMTIC_U_MtrCVoltFinal - MTIR_ac_DW.UnitDelay1_DSTATE_f)
            + MTIR_ac_DW.UnitDelay_DSTATE_i;
    }

    /* End of Switch: '<S151>/Switch1' */

    /* Update for UnitDelay: '<S151>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_i = rtb_Sum2_oi;

    /* Logic: '<S150>/Logical2' incorporates:
     *  Constant: '<S152>/Calib'
     */
    VeMTIC_b_MtrCSpdVoltEn = ((rtb_Sum2_oi < (-KeMTIR_r_HV_Volt_ChngThrshld)) ||
        (rtb_Sum2_oi > KeMTIR_r_HV_Volt_ChngThrshld));
    tmp[0] = 0U;
    tmp[1] = 1U;
    tmp[2] = 2U;
    tmp[3] = 3U;
    tmp[4] = 4U;
    tmp[5] = 5U;
    tmp[6] = 6U;
    tmp[7] = 7U;
    tmp[8] = 8U;
    tmp[9] = 9U;
    tmp[10] = 10U;
    tmp[11] = 11U;
    tmp[12] = 12U;
    tmp[13] = 13U;
    tmp[14] = 14U;
    tmp[15] = 15U;
    for (i = 0; i < 16; i++)
    {
        if (rtb_TmpSignalConversionAtLeM_k0)
        {
            rtb_TmpSignalConversionAtLeM_no = rtb_TmpSignalConversionAtLeM_km;
        }
        else
        {
            rtb_TmpSignalConversionAtLeM_no = tmp[i];
        }

        VaMTIC_b_MtrCSpdCpbltyRcvdArr[(rtb_TmpSignalConversionAtLeM_no)] =
            rtb_TmpSignalConversionAtLeM_k0;
    }

    /* Outputs for Atomic SubSystem: '<S160>/EdgeRising' */
    /* Logic: '<S161>/AND' incorporates:
     *  Constant: '<S153>/Constant'
     *  Constant: '<S153>/Constant1'
     *  Constant: '<S153>/Constant10'
     *  Constant: '<S153>/Constant11'
     *  Constant: '<S153>/Constant12'
     *  Constant: '<S153>/Constant13'
     *  Constant: '<S153>/Constant14'
     *  Constant: '<S153>/Constant15'
     *  Constant: '<S153>/Constant2'
     *  Constant: '<S153>/Constant3'
     *  Constant: '<S153>/Constant4'
     *  Constant: '<S153>/Constant5'
     *  Constant: '<S153>/Constant6'
     *  Constant: '<S153>/Constant7'
     *  Constant: '<S153>/Constant8'
     *  Constant: '<S153>/Constant9'
     *  Logic: '<S161>/OR1'
     *  UnitDelay: '<S161>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_jo = (rtb_TmpSignalConversionAtLeM_k0 &&
        (!MTIR_ac_DW.UnitDelay_DSTATE_nu));

    /* Update for UnitDelay: '<S161>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_nu = rtb_TmpSignalConversionAtLeM_k0;

    /* End of Outputs for SubSystem: '<S160>/EdgeRising' */

    /* Switch: '<S160>/Switch1' incorporates:
     *  Constant: '<S157>/Calib'
     *  Constant: '<S160>/Constant Value'
     *  Logic: '<S160>/OR'
     *  Logic: '<S160>/OR1'
     *  MinMax: '<S160>/Minimum'
     *  Sum: '<S160>/Summation'
     *  UnitDelay: '<S160>/Unit Delay'
     */
    if ((!rtb_TmpSignalConversionAtLeM_k0) || rtb_TmpSignalConversionAtLeM_jo)
    {
        /* Switch: '<S160>/Switch1' incorporates:
         *  Constant: '<S160>/Constant Value1'
         */
        rtb_Switch1_eb = 0U;
    }
    else if (KeMTIR_Cnt_MtrCMaxCpbltyMnWtTm < ((uint16)(((uint32)
                MTIR_ac_DW.UnitDelay_DSTATE_l5) + 1U)))
    {
        /* MinMax: '<S160>/Minimum' incorporates:
         *  Constant: '<S157>/Calib'
         *  Switch: '<S160>/Switch1'
         */
        rtb_Switch1_eb = KeMTIR_Cnt_MtrCMaxCpbltyMnWtTm;
    }
    else
    {
        /* Switch: '<S160>/Switch1' incorporates:
         *  Constant: '<S160>/Constant Value'
         *  MinMax: '<S160>/Minimum'
         *  Sum: '<S160>/Summation'
         *  UnitDelay: '<S160>/Unit Delay'
         */
        rtb_Switch1_eb = (uint16)(((uint32)MTIR_ac_DW.UnitDelay_DSTATE_l5) + 1U);
    }

    /* End of Switch: '<S160>/Switch1' */

    /* Logic: '<S160>/AND' incorporates:
     *  Constant: '<S157>/Calib'
     *  RelationalOperator: '<S160>/Greater  Than'
     */
    VeMTIC_b_MtrCSpdSgnlRcvdDlyd = (rtb_TmpSignalConversionAtLeM_k0 &&
        (rtb_Switch1_eb >= KeMTIR_Cnt_MtrCMaxCpbltyMnWtTm));

    /* Update for UnitDelay: '<S160>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_l5 = rtb_Switch1_eb;

    /* Logic: '<S154>/AND' incorporates:
     *  Logic: '<S154>/OR1'
     *  UnitDelay: '<S154>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_b1 = ((VeMTIC_b_MtrCSpdSgnlRcvdDlyd) &&
        (!MTIR_ac_DW.UnitDelay_DSTATE_hx));

    /* Update for UnitDelay: '<S154>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_hx = VeMTIC_b_MtrCSpdSgnlRcvdDlyd;
    rtb_TmpSignalConversionAtLeM_jo = VaMTIC_b_MtrCSpdCpbltyRcvdArr[0];
    for (i = 0; i < 15; i++)
    {
        rtb_TmpSignalConversionAtLeM_jo = (rtb_TmpSignalConversionAtLeM_jo &&
            (VaMTIC_b_MtrCSpdCpbltyRcvdArr[i + 1]));
    }

    /* Logic: '<S145>/Logical7' incorporates:
     *  Constant: '<S158>/Calib'
     */
    rtb_TmpSignalConversionAtLeM_ko = (rtb_TmpSignalConversionAtLeM_jo &&
        (KeMTIR_b_EnMtrCArrUpdtOnArrRcvd));

    /* Logic: '<S155>/AND' incorporates:
     *  Logic: '<S155>/OR1'
     *  UnitDelay: '<S155>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_jo = (rtb_TmpSignalConversionAtLeM_ko &&
        (!MTIR_ac_DW.UnitDelay_DSTATE_ao));

    /* Update for UnitDelay: '<S155>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_ao = rtb_TmpSignalConversionAtLeM_ko;

    /* Logic: '<S156>/AND' incorporates:
     *  Logic: '<S156>/OR1'
     *  UnitDelay: '<S156>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_ko = (rtb_TmpSignalConversionAtLeM_k0 &&
        (!MTIR_ac_DW.UnitDelay_DSTATE_oj));

    /* Update for UnitDelay: '<S156>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_oj = rtb_TmpSignalConversionAtLeM_k0;

    /* Logic: '<S145>/Logical1' */
    VeMTIC_b_MtrCSpdSgnlRcvdEn = (rtb_TmpSignalConversionAtLeM_b1 ||
        rtb_TmpSignalConversionAtLeM_jo);

    /* Logic: '<S159>/OR1' incorporates:
     *  Logic: '<S159>/NOT'
     *  Logic: '<S159>/OR'
     *  UnitDelay: '<S159>/Unit Delay'
     */
    VeMTIC_b_MtrCSpdSgnlRcvdEnLatch = ((VeMTIC_b_MtrCSpdSgnlRcvdEn) ||
        ((!rtb_TmpSignalConversionAtLeM_ko) && (MTIR_ac_DW.UnitDelay_DSTATE_ep)));

    /* Update for UnitDelay: '<S159>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_ep = VeMTIC_b_MtrCSpdSgnlRcvdEnLatch;
    rtb_TmpSignalConversionAtLeM_in = !KeMTIR_b_EnblMtrsTrqCpbltyCrv;

    /* Logic: '<S141>/Logical10' incorporates:
     *  Constant: '<S146>/Calib'
     */
    VeMTIC_b_MtrCSpdArrayUpdateEn = (((VeMTIC_b_MtrCSpdSgnlRcvdEn) &&
        (!MTIR_ac_DW.UnitDelay1_DSTATE_a)) || (((VeMTIC_b_MtrCSpdSgnlRcvdEnLatch)
        || rtb_TmpSignalConversionAtLeM_in) && (VeMTIC_b_MtrCSpdVoltEn)));

    /* Outputs for Enabled SubSystem: '<S141>/Multiply' incorporates:
     *  EnablePort: '<S147>/Enable'
     */
    if (VeMTIC_b_MtrCSpdArrayUpdateEn)
    {
        for (i = 0; i < 16; i++)
        {
            /* Product: '<S147>/Product' */
            MTIR_ac_B.Product_ag[i] = rtb_TmpSignalConversionAtLaMT_g[i] *
                VeMTIC_U_MtrCVoltFinal;
        }
    }

    /* Sum: '<S166>/Add' incorporates:
     *  Constant: '<S171>/Calib'
     */
    rtb_Add = MTIR_ac_DW.UnitDelay_DSTATE_ga + KeMTIR_k_MtrCpblty_LU;

    /* Sum: '<S166>/Add1' incorporates:
     *  Constant: '<S170>/Calib'
     */
    rtb_Sum2_oi = MTIR_ac_DW.UnitDelay_DSTATE_ga + KeMTIR_k_MtrCpblty_LD;

    /* Switch: '<S172>/Switch1' incorporates:
     *  RelationalOperator: '<S172>/Relational Operator'
     */
    if (rtb_Add < rtb_TmpSignalConversionAtLeM_pg)
    {
        /* UnitDelay: '<S435>/Unit Delay' */
        rtb_TmpSignalConversionAtLeM_ox = rtb_Add;
    }
    else
    {
        /* UnitDelay: '<S435>/Unit Delay' */
        rtb_TmpSignalConversionAtLeM_ox = rtb_TmpSignalConversionAtLeM_pg;
    }

    /* End of Switch: '<S172>/Switch1' */

    /* Switch: '<S172>/Switch' incorporates:
     *  RelationalOperator: '<S172>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtLeM_ox > rtb_Sum2_oi)
    {
        /* Switch: '<S172>/Switch' */
        rtb_Sum2_oi = rtb_TmpSignalConversionAtLeM_ox;
    }

    /* End of Switch: '<S172>/Switch' */
    if (KeMTIR_b_EnblOvrdDrtngFctr)
    {
        /* Switch: '<S162>/Switch' incorporates:
         *  Constant: '<S168>/Calib'
         */
        VeMTIC_k_MtrCMaxDrtngFctrFinal = KeMTIR_k_OverrdDrtngFctr;
    }
    else
    {
        /* Switch: '<S162>/Switch' */
        VeMTIC_k_MtrCMaxDrtngFctrFinal = rtb_Sum2_oi;
    }

    /* Switch: '<S174>/Switch1' incorporates:
     *  Constant: '<S167>/Calib'
     */
    if (MTIR_ac_DW.UnitDelay5_DSTATE_g)
    {
        /* Switch: '<S174>/Switch1' incorporates:
         *  Constant: '<S169>/Constant Value'
         */
        rtb_Add = 0.0F;
    }
    else
    {
        /* Switch: '<S174>/Switch1' incorporates:
         *  Sum: '<S162>/Sum1'
         *  Sum: '<S174>/Summation'
         *  UnitDelay: '<S174>/Unit Delay'
         */
        rtb_Add = (VeMTIC_k_MtrCMaxDrtngFctrFinal -
                   MTIR_ac_DW.UnitDelay4_DSTATE_m) +
            MTIR_ac_DW.UnitDelay_DSTATE_nd;
    }

    /* End of Switch: '<S174>/Switch1' */

    /* Update for UnitDelay: '<S174>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_nd = rtb_Add;

    /* Logic: '<S169>/Logical2' incorporates:
     *  Constant: '<S175>/Calib'
     */
    VeMTIC_b_MtrCMaxDrtFctEn = ((rtb_Add < (-KeMTIR_r_DrtngChngThrshld)) ||
        (rtb_Add > KeMTIR_r_DrtngChngThrshld));
    tmp[0] = 0U;
    tmp[1] = 1U;
    tmp[2] = 2U;
    tmp[3] = 3U;
    tmp[4] = 4U;
    tmp[5] = 5U;
    tmp[6] = 6U;
    tmp[7] = 7U;
    tmp[8] = 8U;
    tmp[9] = 9U;
    tmp[10] = 10U;
    tmp[11] = 11U;
    tmp[12] = 12U;
    tmp[13] = 13U;
    tmp[14] = 14U;
    tmp[15] = 15U;
    for (i = 0; i < 16; i++)
    {
        if (rtb_TmpSignalConversionAtLeM_np)
        {
            rtb_TmpSignalConversionAtLeM_no = rtb_TmpSignalConversionAtLeM_km;
        }
        else
        {
            rtb_TmpSignalConversionAtLeM_no = tmp[i];
        }

        VaMTIC_b_MtrCMaxCpbltyRcvdArr[(rtb_TmpSignalConversionAtLeM_no)] =
            rtb_TmpSignalConversionAtLeM_np;
    }

    /* Logic: '<S163>/Logical3' incorporates:
     *  Constant: '<S176>/Constant'
     *  Constant: '<S176>/Constant1'
     *  Constant: '<S176>/Constant10'
     *  Constant: '<S176>/Constant11'
     *  Constant: '<S176>/Constant12'
     *  Constant: '<S176>/Constant13'
     *  Constant: '<S176>/Constant14'
     *  Constant: '<S176>/Constant15'
     *  Constant: '<S176>/Constant2'
     *  Constant: '<S176>/Constant3'
     *  Constant: '<S176>/Constant4'
     *  Constant: '<S176>/Constant5'
     *  Constant: '<S176>/Constant6'
     *  Constant: '<S176>/Constant7'
     *  Constant: '<S176>/Constant8'
     *  Constant: '<S176>/Constant9'
     */
    rtb_TmpSignalConversionAtLeM_np = (rtb_TmpSignalConversionAtLeM_la ||
        rtb_TmpSignalConversionAtLeM_np);

    /* Outputs for Atomic SubSystem: '<S183>/EdgeRising' */
    /* Logic: '<S184>/AND' incorporates:
     *  Logic: '<S184>/OR1'
     *  UnitDelay: '<S184>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_k0 = (rtb_TmpSignalConversionAtLeM_np &&
        (!MTIR_ac_DW.UnitDelay_DSTATE_mm));

    /* Update for UnitDelay: '<S184>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_mm = rtb_TmpSignalConversionAtLeM_np;

    /* End of Outputs for SubSystem: '<S183>/EdgeRising' */

    /* Switch: '<S183>/Switch1' incorporates:
     *  Constant: '<S180>/Calib'
     *  Constant: '<S183>/Constant Value'
     *  Logic: '<S183>/OR'
     *  Logic: '<S183>/OR1'
     *  MinMax: '<S183>/Minimum'
     *  Sum: '<S183>/Summation'
     *  UnitDelay: '<S183>/Unit Delay'
     */
    if ((!rtb_TmpSignalConversionAtLeM_np) || rtb_TmpSignalConversionAtLeM_k0)
    {
        /* Switch: '<S183>/Switch1' incorporates:
         *  Constant: '<S183>/Constant Value1'
         */
        rtb_Switch1_eb = 0U;
    }
    else if (KeMTIR_Cnt_MtrCMaxCpbltyMnWtTm < ((uint16)(((uint32)
                MTIR_ac_DW.UnitDelay_DSTATE_gb) + 1U)))
    {
        /* MinMax: '<S183>/Minimum' incorporates:
         *  Constant: '<S180>/Calib'
         *  Switch: '<S183>/Switch1'
         */
        rtb_Switch1_eb = KeMTIR_Cnt_MtrCMaxCpbltyMnWtTm;
    }
    else
    {
        /* Switch: '<S183>/Switch1' incorporates:
         *  Constant: '<S183>/Constant Value'
         *  MinMax: '<S183>/Minimum'
         *  Sum: '<S183>/Summation'
         *  UnitDelay: '<S183>/Unit Delay'
         */
        rtb_Switch1_eb = (uint16)(((uint32)MTIR_ac_DW.UnitDelay_DSTATE_gb) + 1U);
    }

    /* End of Switch: '<S183>/Switch1' */

    /* Logic: '<S183>/AND' incorporates:
     *  Constant: '<S180>/Calib'
     *  RelationalOperator: '<S183>/Greater  Than'
     */
    VeMTIC_b_MtrCMaxSgnlRcvdDlyd = (rtb_TmpSignalConversionAtLeM_np &&
        (rtb_Switch1_eb >= KeMTIR_Cnt_MtrCMaxCpbltyMnWtTm));

    /* Update for UnitDelay: '<S183>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_gb = rtb_Switch1_eb;

    /* Logic: '<S177>/AND' incorporates:
     *  Logic: '<S177>/OR1'
     *  UnitDelay: '<S177>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_k0 = ((VeMTIC_b_MtrCMaxSgnlRcvdDlyd) &&
        (!MTIR_ac_DW.UnitDelay_DSTATE_dkz));

    /* Update for UnitDelay: '<S177>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_dkz = VeMTIC_b_MtrCMaxSgnlRcvdDlyd;
    rtb_TmpSignalConversionAtLeM_jo = VaMTIC_b_MtrCMaxCpbltyRcvdArr[0];
    for (i = 0; i < 15; i++)
    {
        rtb_TmpSignalConversionAtLeM_jo = (rtb_TmpSignalConversionAtLeM_jo &&
            (VaMTIC_b_MtrCMaxCpbltyRcvdArr[i + 1]));
    }

    /* Logic: '<S163>/Logical7' incorporates:
     *  Constant: '<S181>/Calib'
     */
    rtb_TmpSignalConversionAtLeM_b1 = ((rtb_TmpSignalConversionAtLeM_la &&
        rtb_TmpSignalConversionAtLeM_jo) && (KeMTIR_b_EnMtrCArrUpdtOnArrRcvd));

    /* Logic: '<S178>/AND' incorporates:
     *  Logic: '<S178>/OR1'
     *  UnitDelay: '<S178>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_jo = (rtb_TmpSignalConversionAtLeM_b1 &&
        (!MTIR_ac_DW.UnitDelay_DSTATE_mc));

    /* Update for UnitDelay: '<S178>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_mc = rtb_TmpSignalConversionAtLeM_b1;

    /* Logic: '<S179>/AND' incorporates:
     *  Logic: '<S179>/OR1'
     *  UnitDelay: '<S179>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_b1 = (rtb_TmpSignalConversionAtLeM_np &&
        (!MTIR_ac_DW.UnitDelay_DSTATE_kz));

    /* Update for UnitDelay: '<S179>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_kz = rtb_TmpSignalConversionAtLeM_np;

    /* Logic: '<S163>/Logical1' */
    VeMTIC_b_MtrCMaxSgnlRcvdEn = (rtb_TmpSignalConversionAtLeM_k0 ||
        rtb_TmpSignalConversionAtLeM_jo);

    /* Logic: '<S182>/OR1' incorporates:
     *  Logic: '<S182>/NOT'
     *  Logic: '<S182>/OR'
     *  UnitDelay: '<S182>/Unit Delay'
     */
    VeMTIC_b_MtrCMaxSgnlRcvdEnLatch = ((VeMTIC_b_MtrCMaxSgnlRcvdEn) ||
        ((!rtb_TmpSignalConversionAtLeM_b1) && (MTIR_ac_DW.UnitDelay_DSTATE_oy2)));

    /* Update for UnitDelay: '<S182>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_oy2 = VeMTIC_b_MtrCMaxSgnlRcvdEnLatch;

    /* Logic: '<S142>/Logical10' */
    VeMTIC_b_MtrCMaxArrayUpdateEn = (((VeMTIC_b_MtrCMaxSgnlRcvdEn) &&
        (!MTIR_ac_DW.UnitDelay1_DSTATE_ah)) ||
        (((VeMTIC_b_MtrCMaxSgnlRcvdEnLatch) || rtb_TmpSignalConversionAtLeM_in) &&
         (VeMTIC_b_MtrCMaxDrtFctEn)));

    /* Outputs for Enabled SubSystem: '<S142>/Multiply' incorporates:
     *  EnablePort: '<S165>/Enable'
     */
    if (VeMTIC_b_MtrCMaxArrayUpdateEn)
    {
        for (i = 0; i < 16; i++)
        {
            /* Product: '<S165>/Product' */
            MTIR_ac_B.Product_a[i] = rtb_TmpSignalConversionAtLaMT_e[i] *
                VeMTIC_k_MtrCMaxDrtngFctrFinal;
        }
    }

    /* Sum: '<S189>/Add' incorporates:
     *  Constant: '<S194>/Calib'
     */
    rtb_TmpSignalConversionAtLeM_ox = MTIR_ac_DW.UnitDelay_DSTATE_n +
        KeMTIR_k_MtrCpblty_LU;

    /* Sum: '<S189>/Add1' incorporates:
     *  Constant: '<S193>/Calib'
     */
    rtb_Add = MTIR_ac_DW.UnitDelay_DSTATE_n + KeMTIR_k_MtrCpblty_LD;

    /* Switch: '<S195>/Switch1' incorporates:
     *  RelationalOperator: '<S195>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtLeM_ox >= rtb_TmpSignalConversionAtLeM_pg)
    {
        /* UnitDelay: '<S435>/Unit Delay' */
        rtb_TmpSignalConversionAtLeM_ox = rtb_TmpSignalConversionAtLeM_pg;
    }

    /* End of Switch: '<S195>/Switch1' */

    /* Switch: '<S195>/Switch' incorporates:
     *  RelationalOperator: '<S195>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtLeM_ox > rtb_Add)
    {
        /* Switch: '<S195>/Switch' */
        rtb_Add = rtb_TmpSignalConversionAtLeM_ox;
    }

    /* End of Switch: '<S195>/Switch' */
    if (KeMTIR_b_EnblOvrdDrtngFctr)
    {
        /* Switch: '<S185>/Switch' incorporates:
         *  Constant: '<S191>/Calib'
         */
        VeMTIC_k_MtrCMinDrtngFctrFinal = KeMTIR_k_OverrdDrtngFctr;
    }
    else
    {
        /* Switch: '<S185>/Switch' */
        VeMTIC_k_MtrCMinDrtngFctrFinal = rtb_Add;
    }

    /* Switch: '<S197>/Switch1' incorporates:
     *  Constant: '<S190>/Calib'
     */
    if (MTIR_ac_DW.UnitDelay5_DSTATE_l)
    {
        /* Switch: '<S197>/Switch1' incorporates:
         *  Constant: '<S192>/Constant Value'
         */
        rtb_TmpSignalConversionAtLeM_ox = 0.0F;
    }
    else
    {
        /* Switch: '<S197>/Switch1' incorporates:
         *  Sum: '<S185>/Sum1'
         *  Sum: '<S197>/Summation'
         *  UnitDelay: '<S197>/Unit Delay'
         */
        rtb_TmpSignalConversionAtLeM_ox = (VeMTIC_k_MtrCMinDrtngFctrFinal -
            MTIR_ac_DW.UnitDelay4_DSTATE_h) + MTIR_ac_DW.UnitDelay_DSTATE_c;
    }

    /* End of Switch: '<S197>/Switch1' */

    /* Update for UnitDelay: '<S197>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_c = rtb_TmpSignalConversionAtLeM_ox;

    /* Logic: '<S192>/Logical2' incorporates:
     *  Constant: '<S198>/Calib'
     */
    VeMTIC_b_MtrCMinDrtFctEn = ((rtb_TmpSignalConversionAtLeM_ox <
        (-KeMTIR_r_DrtngChngThrshld)) || (rtb_TmpSignalConversionAtLeM_ox >
        KeMTIR_r_DrtngChngThrshld));
    tmp[0] = 0U;
    tmp[1] = 1U;
    tmp[2] = 2U;
    tmp[3] = 3U;
    tmp[4] = 4U;
    tmp[5] = 5U;
    tmp[6] = 6U;
    tmp[7] = 7U;
    tmp[8] = 8U;
    tmp[9] = 9U;
    tmp[10] = 10U;
    tmp[11] = 11U;
    tmp[12] = 12U;
    tmp[13] = 13U;
    tmp[14] = 14U;
    tmp[15] = 15U;
    for (i = 0; i < 16; i++)
    {
        if (rtb_TmpSignalConversionAtLe_apt)
        {
            rtb_TmpSignalConversionAtLeM_no = rtb_TmpSignalConversionAtLeM_km;
        }
        else
        {
            rtb_TmpSignalConversionAtLeM_no = tmp[i];
        }

        VaMTIC_b_MtrCMinCpbltyRcvdArr[(rtb_TmpSignalConversionAtLeM_no)] =
            rtb_TmpSignalConversionAtLe_apt;
    }

    /* Logic: '<S186>/Logical3' incorporates:
     *  Constant: '<S199>/Constant'
     *  Constant: '<S199>/Constant1'
     *  Constant: '<S199>/Constant10'
     *  Constant: '<S199>/Constant11'
     *  Constant: '<S199>/Constant12'
     *  Constant: '<S199>/Constant13'
     *  Constant: '<S199>/Constant14'
     *  Constant: '<S199>/Constant15'
     *  Constant: '<S199>/Constant2'
     *  Constant: '<S199>/Constant3'
     *  Constant: '<S199>/Constant4'
     *  Constant: '<S199>/Constant5'
     *  Constant: '<S199>/Constant6'
     *  Constant: '<S199>/Constant7'
     *  Constant: '<S199>/Constant8'
     *  Constant: '<S199>/Constant9'
     */
    rtb_TmpSignalConversionAtLe_apt = (rtb_TmpSignalConversionAtLeM_la ||
        rtb_TmpSignalConversionAtLe_apt);

    /* Outputs for Atomic SubSystem: '<S206>/EdgeRising' */
    /* Logic: '<S207>/AND' incorporates:
     *  Logic: '<S207>/OR1'
     *  UnitDelay: '<S207>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_np = (rtb_TmpSignalConversionAtLe_apt &&
        (!MTIR_ac_DW.UnitDelay_DSTATE_f5));

    /* Update for UnitDelay: '<S207>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_f5 = rtb_TmpSignalConversionAtLe_apt;

    /* End of Outputs for SubSystem: '<S206>/EdgeRising' */

    /* Switch: '<S206>/Switch1' incorporates:
     *  Constant: '<S203>/Calib'
     *  Constant: '<S206>/Constant Value'
     *  Logic: '<S206>/OR'
     *  Logic: '<S206>/OR1'
     *  MinMax: '<S206>/Minimum'
     *  Sum: '<S206>/Summation'
     *  UnitDelay: '<S206>/Unit Delay'
     */
    if ((!rtb_TmpSignalConversionAtLe_apt) || rtb_TmpSignalConversionAtLeM_np)
    {
        /* Switch: '<S206>/Switch1' incorporates:
         *  Constant: '<S206>/Constant Value1'
         */
        rtb_Switch1_eb = 0U;
    }
    else if (KeMTIR_Cnt_MtrCMaxCpbltyMnWtTm < ((uint16)(((uint32)
                MTIR_ac_DW.UnitDelay_DSTATE_ms) + 1U)))
    {
        /* MinMax: '<S206>/Minimum' incorporates:
         *  Constant: '<S203>/Calib'
         *  Switch: '<S206>/Switch1'
         */
        rtb_Switch1_eb = KeMTIR_Cnt_MtrCMaxCpbltyMnWtTm;
    }
    else
    {
        /* Switch: '<S206>/Switch1' incorporates:
         *  Constant: '<S206>/Constant Value'
         *  MinMax: '<S206>/Minimum'
         *  Sum: '<S206>/Summation'
         *  UnitDelay: '<S206>/Unit Delay'
         */
        rtb_Switch1_eb = (uint16)(((uint32)MTIR_ac_DW.UnitDelay_DSTATE_ms) + 1U);
    }

    /* End of Switch: '<S206>/Switch1' */

    /* Logic: '<S206>/AND' incorporates:
     *  Constant: '<S203>/Calib'
     *  RelationalOperator: '<S206>/Greater  Than'
     */
    VeMTIC_b_MtrCMinSgnlRcvdDlyd = (rtb_TmpSignalConversionAtLe_apt &&
        (rtb_Switch1_eb >= KeMTIR_Cnt_MtrCMaxCpbltyMnWtTm));

    /* Update for UnitDelay: '<S206>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_ms = rtb_Switch1_eb;

    /* Logic: '<S200>/AND' incorporates:
     *  Logic: '<S200>/OR1'
     *  UnitDelay: '<S200>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_np = ((VeMTIC_b_MtrCMinSgnlRcvdDlyd) &&
        (!MTIR_ac_DW.UnitDelay_DSTATE_o1));

    /* Update for UnitDelay: '<S200>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_o1 = VeMTIC_b_MtrCMinSgnlRcvdDlyd;
    rtb_TmpSignalConversionAtLeM_jo = VaMTIC_b_MtrCMinCpbltyRcvdArr[0];
    for (i = 0; i < 15; i++)
    {
        rtb_TmpSignalConversionAtLeM_jo = (rtb_TmpSignalConversionAtLeM_jo &&
            (VaMTIC_b_MtrCMinCpbltyRcvdArr[i + 1]));
    }

    /* Logic: '<S186>/Logical7' incorporates:
     *  Constant: '<S204>/Calib'
     */
    rtb_TmpSignalConversionAtLeM_k0 = ((rtb_TmpSignalConversionAtLeM_la &&
        rtb_TmpSignalConversionAtLeM_jo) && (KeMTIR_b_EnMtrCArrUpdtOnArrRcvd));

    /* Logic: '<S201>/AND' incorporates:
     *  Logic: '<S201>/OR1'
     *  UnitDelay: '<S201>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_la = (rtb_TmpSignalConversionAtLeM_k0 &&
        (!MTIR_ac_DW.UnitDelay_DSTATE_ch));

    /* Update for UnitDelay: '<S201>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_ch = rtb_TmpSignalConversionAtLeM_k0;

    /* Logic: '<S202>/AND' incorporates:
     *  Logic: '<S202>/OR1'
     *  UnitDelay: '<S202>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_k0 = (rtb_TmpSignalConversionAtLe_apt &&
        (!MTIR_ac_DW.UnitDelay_DSTATE_dk));

    /* Update for UnitDelay: '<S202>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_dk = rtb_TmpSignalConversionAtLe_apt;

    /* Logic: '<S186>/Logical1' */
    VeMTIC_b_MtrCMinSgnlRcvdEn = (rtb_TmpSignalConversionAtLeM_np ||
        rtb_TmpSignalConversionAtLeM_la);

    /* Logic: '<S205>/OR1' incorporates:
     *  Logic: '<S205>/NOT'
     *  Logic: '<S205>/OR'
     *  UnitDelay: '<S205>/Unit Delay'
     */
    VeMTIC_b_MtrCMinSgnlRcvdEnLatch = ((VeMTIC_b_MtrCMinSgnlRcvdEn) ||
        ((!rtb_TmpSignalConversionAtLeM_k0) && (MTIR_ac_DW.UnitDelay_DSTATE_fs)));

    /* Update for UnitDelay: '<S205>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_fs = VeMTIC_b_MtrCMinSgnlRcvdEnLatch;

    /* Logic: '<S143>/Logical10' */
    VeMTIC_b_MtrCMinArrayUpdateEn = (((VeMTIC_b_MtrCMinSgnlRcvdEn) &&
        (!MTIR_ac_DW.UnitDelay1_DSTATE_h)) || (((VeMTIC_b_MtrCMinSgnlRcvdEnLatch)
        || rtb_TmpSignalConversionAtLeM_in) && (VeMTIC_b_MtrCMinDrtFctEn)));

    /* Outputs for Enabled SubSystem: '<S143>/Multiply' incorporates:
     *  EnablePort: '<S188>/Enable'
     */
    if (VeMTIC_b_MtrCMinArrayUpdateEn)
    {
        for (i = 0; i < 16; i++)
        {
            /* Product: '<S188>/Product' */
            MTIR_ac_B.Product_g[i] = rtb_TmpSignalConversionAtLaMT_l[i] *
                VeMTIC_k_MtrCMinDrtngFctrFinal;
        }
    }

    /* Switch: '<S448>/Switch1' */
    rtb_Switch1_od = rtb_TmpSignalConversionAtLeM_lk;

    /* End of Outputs for SubSystem: '<S140>/Limiter' */
    /* End of Outputs for SubSystem: '<S140>/GradientLimiter' */
    /* End of Outputs for SubSystem: '<S213>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S213>/Count Down  Reset Enabled1' */
    /* End of Outputs for SubSystem: '<S214>/Limiter' */
    /* End of Outputs for SubSystem: '<S214>/GradientLimiter' */
    /* End of Outputs for SubSystem: '<S226>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S226>/Count Down  Reset Enabled1' */
    /* End of Outputs for SubSystem: '<S227>/Limiter' */
    /* End of Outputs for SubSystem: '<S227>/GradientLimiter' */
    /* End of Outputs for SubSystem: '<S139>/Limiter' */
    /* End of Outputs for SubSystem: '<S139>/GradientLimiter' */
    /* End of Outputs for SubSystem: '<S150>/Accumulator Reset' */
    /* End of Outputs for SubSystem: '<S145>/Turn On Delay Sample' */
    /* End of Outputs for SubSystem: '<S145>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S145>/EdgeRising2' */
    /* End of Outputs for SubSystem: '<S145>/EdgeRising3' */
    /* End of Outputs for SubSystem: '<S145>/Signal Latch On With Reset' */
    /* End of Outputs for SubSystem: '<S141>/Multiply' */
    /* End of Outputs for SubSystem: '<S166>/Limiter' */
    /* End of Outputs for SubSystem: '<S169>/Accumulator Reset' */
    /* End of Outputs for SubSystem: '<S163>/Turn On Delay Sample' */
    /* End of Outputs for SubSystem: '<S163>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S163>/EdgeRising2' */
    /* End of Outputs for SubSystem: '<S163>/EdgeRising3' */
    /* End of Outputs for SubSystem: '<S163>/Signal Latch On With Reset' */
    /* End of Outputs for SubSystem: '<S142>/Multiply' */
    /* End of Outputs for SubSystem: '<S189>/Limiter' */
    /* End of Outputs for SubSystem: '<S192>/Accumulator Reset' */
    /* End of Outputs for SubSystem: '<S186>/Turn On Delay Sample' */
    /* End of Outputs for SubSystem: '<S186>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S186>/EdgeRising2' */
    /* End of Outputs for SubSystem: '<S186>/EdgeRising3' */
    /* End of Outputs for SubSystem: '<S186>/Signal Latch On With Reset' */
    /* End of Outputs for SubSystem: '<S143>/Multiply' */
#else

    MTIR_ac_B.ConstantValue24 = 0.0F;
    MTIR_ac_B.ConstantValue25 = 0.0F;
    MTIR_ac_B.ConstantValue26 = 0.0F;
    MTIR_ac_B.ConstantValue27 = 0.0F;
    MTIR_ac_B.ConstantValue28 = 0.0F;
    MTIR_ac_B.ConstantValue29 = 0.0F;
    MTIR_ac_B.ConstantValue30 = 0.0F;
    MTIR_ac_B.ConstantValue31 = 0.0F;
    MTIR_ac_B.ConstantValue32 = 0.0F;
    MTIR_ac_B.ConstantValue33 = 0.0F;
    MTIR_ac_B.ConstantValue34 = 0.0F;
    MTIR_ac_B.ConstantValue35 = 0.0F;
    MTIR_ac_B.ConstantValue36 = 0.0F;
    MTIR_ac_B.ConstantValue37 = 0.0F;
    MTIR_ac_B.ConstantValue7 = 0.0F;
    MTIR_ac_B.ConstantValue8 = 0.0F;
    MTIR_ac_B.ConstantValue10 = 0.0F;
    MTIR_ac_B.ConstantValue11 = 0.0F;
    MTIR_ac_B.ConstantValue12 = 0.0F;
    MTIR_ac_B.ConstantValue13 = 0.0F;
    MTIR_ac_B.ConstantValue14 = 0.0F;
    MTIR_ac_B.ConstantValue15 = 0.0F;
    MTIR_ac_B.ConstantValue16 = 0.0F;
    MTIR_ac_B.ConstantValue17 = 0.0F;
    MTIR_ac_B.ConstantValue18 = 0.0F;
    MTIR_ac_B.ConstantValue19 = 0.0F;
    MTIR_ac_B.ConstantValue20 = 0.0F;
    MTIR_ac_B.ConstantValue21 = 0.0F;
    MTIR_ac_B.ConstantValue22 = 0.0F;
    MTIR_ac_B.ConstantValue23 = 0.0F;
    MTIR_ac_B.ConstantValue6 = 0.0F;
    MTIR_ac_B.ConstantValue9 = 0.0F;
    MTIR_ac_B.ConstantValue38 = 0.0F;
    MTIR_ac_B.ConstantValue39 = 0.0F;
    MTIR_ac_B.ConstantValue40 = 0.0F;
    MTIR_ac_B.ConstantValue41 = 0.0F;
    MTIR_ac_B.ConstantValue42 = 0.0F;
    MTIR_ac_B.ConstantValue43 = 0.0F;
    MTIR_ac_B.ConstantValue44 = 0.0F;
    MTIR_ac_B.ConstantValue45 = 0.0F;
    MTIR_ac_B.ConstantValue46 = 0.0F;
    MTIR_ac_B.ConstantValue47 = 0.0F;
    MTIR_ac_B.ConstantValue48 = 0.0F;
    MTIR_ac_B.ConstantValue49 = 0.0F;
    MTIR_ac_B.ConstantValue50 = 0.0F;
    MTIR_ac_B.ConstantValue51 = 0.0F;
    MTIR_ac_B.ConstantValue52 = 0.0F;
    MTIR_ac_B.ConstantValue53 = 0.0F;

    /* Switch: '<S448>/Switch1' incorporates:
     *  Constant: '<S134>/Constant Value'
     *  Constant: '<S134>/Constant Value10'
     *  Constant: '<S134>/Constant Value11'
     *  Constant: '<S134>/Constant Value12'
     *  Constant: '<S134>/Constant Value13'
     *  Constant: '<S134>/Constant Value14'
     *  Constant: '<S134>/Constant Value15'
     *  Constant: '<S134>/Constant Value16'
     *  Constant: '<S134>/Constant Value17'
     *  Constant: '<S134>/Constant Value18'
     *  Constant: '<S134>/Constant Value19'
     *  Constant: '<S134>/Constant Value20'
     *  Constant: '<S134>/Constant Value21'
     *  Constant: '<S134>/Constant Value22'
     *  Constant: '<S134>/Constant Value23'
     *  Constant: '<S134>/Constant Value24'
     *  Constant: '<S134>/Constant Value25'
     *  Constant: '<S134>/Constant Value26'
     *  Constant: '<S134>/Constant Value27'
     *  Constant: '<S134>/Constant Value28'
     *  Constant: '<S134>/Constant Value29'
     *  Constant: '<S134>/Constant Value30'
     *  Constant: '<S134>/Constant Value31'
     *  Constant: '<S134>/Constant Value32'
     *  Constant: '<S134>/Constant Value33'
     *  Constant: '<S134>/Constant Value34'
     *  Constant: '<S134>/Constant Value35'
     *  Constant: '<S134>/Constant Value36'
     *  Constant: '<S134>/Constant Value37'
     *  Constant: '<S134>/Constant Value38'
     *  Constant: '<S134>/Constant Value39'
     *  Constant: '<S134>/Constant Value40'
     *  Constant: '<S134>/Constant Value41'
     *  Constant: '<S134>/Constant Value42'
     *  Constant: '<S134>/Constant Value43'
     *  Constant: '<S134>/Constant Value44'
     *  Constant: '<S134>/Constant Value45'
     *  Constant: '<S134>/Constant Value46'
     *  Constant: '<S134>/Constant Value47'
     *  Constant: '<S134>/Constant Value48'
     *  Constant: '<S134>/Constant Value49'
     *  Constant: '<S134>/Constant Value50'
     *  Constant: '<S134>/Constant Value51'
     *  Constant: '<S134>/Constant Value52'
     *  Constant: '<S134>/Constant Value53'
     *  Constant: '<S134>/Constant Value6'
     *  Constant: '<S134>/Constant Value7'
     *  Constant: '<S134>/Constant Value8'
     *  Constant: '<S134>/Constant Value9'
     *  SignalConversion generated from: '<S117>/Variant Source2'
     */
    rtb_Switch1_od = 0.0F;

#endif

    /* End of Logic: '<S135>/Logical2' */

    /* SignalConversion generated from: '<S117>/Variant Source2' */
    VeMTIC_M_MtrC_TorqAchieved = rtb_Switch1_od;

    /* SignalConversion generated from: '<S117>/Variant Source5' */
#if Rte_SysCon_Variant_MTIR_1

    /* Switch: '<S448>/Switch1' */
    rtb_Switch1_od = rtb_Sum3_f;

#else

    /* Switch: '<S448>/Switch1' incorporates:
     *  Constant: '<S134>/Constant Value4'
     *  SignalConversion generated from: '<S117>/Variant Source5'
     */
    rtb_Switch1_od = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S117>/Variant Source5' */

    /* SignalConversion generated from: '<S117>/Variant Source5' */
    VeMTIC_M_MtrCTrqAchieved_AEMD = rtb_Switch1_od;

    /* SignalConversion generated from: '<S117>/Variant Source1' incorporates:
     *  SignalConversion generated from: '<S117>/Variant Source3'
     */
#if Rte_SysCon_Variant_MTIR_1

    /* VariantMerge generated from: '<S117>/Variant Source1' */
    MTIR_ac_B.VariantMerge_For_Variant_Source = rtb_Sum2_jr;

    /* VariantMerge generated from: '<S117>/Variant Source3' */
    MTIR_ac_B.VariantMerge_For_Variant_Sour_p = rtb_Sum2_m;

#else

    /* VariantMerge generated from: '<S117>/Variant Source1' incorporates:
     *  Constant: '<S134>/Constant Value3'
     *  SignalConversion generated from: '<S117>/Variant Source1'
     */
    MTIR_ac_B.VariantMerge_For_Variant_Source = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S117>/Variant Source1' */

    /* SignalConversion generated from: '<S117>/Variant Source6' incorporates:
     *  SignalConversion generated from: '<S117>/Variant Source3'
     *  SignalConversion generated from: '<S117>/Variant Source4'
     */
#if Rte_SysCon_Variant_MTIR_1

    /* VariantMerge generated from: '<S117>/Variant Source6' */
    memcpy(&MTIR_ac_B.VariantMerge_For_Variant_Sour_j[0], &MTIR_ac_B.Product_a[0],
           (sizeof(float32)) << 4ULL);

#else

    /* VariantMerge generated from: '<S117>/Variant Source3' incorporates:
     *  Constant: '<S134>/Constant Value2'
     *  SignalConversion generated from: '<S117>/Variant Source3'
     */
    MTIR_ac_B.VariantMerge_For_Variant_Sour_p = 0.0F;

    /* VariantMerge generated from: '<S117>/Variant Source4' incorporates:
     *  Constant: '<S134>/Constant Value1'
     *  SignalConversion generated from: '<S117>/Variant Source4'
     */
    MTIR_ac_B.VariantMerge_For_Variant_Sour_k = false;

#endif

    /* End of SignalConversion generated from: '<S117>/Variant Source6' */

    /* SignalConversion generated from: '<S117>/Variant Source7' incorporates:
     *  SignalConversion generated from: '<S117>/Variant Source6'
     */
#if Rte_SysCon_Variant_MTIR_1

    /* VariantMerge generated from: '<S117>/Variant Source7' */
    memcpy(&MTIR_ac_B.VariantMerge_For_Variant_Sou_p3[0], &MTIR_ac_B.Product_g[0],
           (sizeof(float32)) << 4ULL);

#else

    /* VariantMerge generated from: '<S117>/Variant Source6' incorporates:
     *  SignalConversion generated from: '<S117>/Variant Source6'
     */
    MTIR_ac_B.VariantMerge_For_Variant_Sour_j[0] = MTIR_ac_B.ConstantValue36;
    MTIR_ac_B.VariantMerge_For_Variant_Sour_j[1] = MTIR_ac_B.ConstantValue37;
    MTIR_ac_B.VariantMerge_For_Variant_Sour_j[2] = MTIR_ac_B.ConstantValue7;
    MTIR_ac_B.VariantMerge_For_Variant_Sour_j[3] = MTIR_ac_B.ConstantValue8;
    MTIR_ac_B.VariantMerge_For_Variant_Sour_j[4] = MTIR_ac_B.ConstantValue24;
    MTIR_ac_B.VariantMerge_For_Variant_Sour_j[5] = MTIR_ac_B.ConstantValue25;
    MTIR_ac_B.VariantMerge_For_Variant_Sour_j[6] = MTIR_ac_B.ConstantValue26;
    MTIR_ac_B.VariantMerge_For_Variant_Sour_j[7] = MTIR_ac_B.ConstantValue27;
    MTIR_ac_B.VariantMerge_For_Variant_Sour_j[8] = MTIR_ac_B.ConstantValue28;
    MTIR_ac_B.VariantMerge_For_Variant_Sour_j[9] = MTIR_ac_B.ConstantValue29;
    MTIR_ac_B.VariantMerge_For_Variant_Sour_j[10] = MTIR_ac_B.ConstantValue30;
    MTIR_ac_B.VariantMerge_For_Variant_Sour_j[11] = MTIR_ac_B.ConstantValue31;
    MTIR_ac_B.VariantMerge_For_Variant_Sour_j[12] = MTIR_ac_B.ConstantValue32;
    MTIR_ac_B.VariantMerge_For_Variant_Sour_j[13] = MTIR_ac_B.ConstantValue33;
    MTIR_ac_B.VariantMerge_For_Variant_Sour_j[14] = MTIR_ac_B.ConstantValue34;
    MTIR_ac_B.VariantMerge_For_Variant_Sour_j[15] = MTIR_ac_B.ConstantValue35;

#endif

    /* End of SignalConversion generated from: '<S117>/Variant Source7' */

    /* SignalConversion generated from: '<S117>/Variant Source8' incorporates:
     *  SignalConversion generated from: '<S117>/Variant Source7'
     */
#if Rte_SysCon_Variant_MTIR_1

    /* VariantMerge generated from: '<S117>/Variant Source8' */
    memcpy(&MTIR_ac_B.VariantMerge_For_Variant_Sour_o[0], &MTIR_ac_B.Product_ag
           [0], (sizeof(float32)) << 4ULL);

#else

    /* VariantMerge generated from: '<S117>/Variant Source7' incorporates:
     *  SignalConversion generated from: '<S117>/Variant Source7'
     */
    MTIR_ac_B.VariantMerge_For_Variant_Sou_p3[0] = MTIR_ac_B.ConstantValue6;
    MTIR_ac_B.VariantMerge_For_Variant_Sou_p3[1] = MTIR_ac_B.ConstantValue9;
    MTIR_ac_B.VariantMerge_For_Variant_Sou_p3[2] = MTIR_ac_B.ConstantValue10;
    MTIR_ac_B.VariantMerge_For_Variant_Sou_p3[3] = MTIR_ac_B.ConstantValue11;
    MTIR_ac_B.VariantMerge_For_Variant_Sou_p3[4] = MTIR_ac_B.ConstantValue12;
    MTIR_ac_B.VariantMerge_For_Variant_Sou_p3[5] = MTIR_ac_B.ConstantValue13;
    MTIR_ac_B.VariantMerge_For_Variant_Sou_p3[6] = MTIR_ac_B.ConstantValue14;
    MTIR_ac_B.VariantMerge_For_Variant_Sou_p3[7] = MTIR_ac_B.ConstantValue15;
    MTIR_ac_B.VariantMerge_For_Variant_Sou_p3[8] = MTIR_ac_B.ConstantValue16;
    MTIR_ac_B.VariantMerge_For_Variant_Sou_p3[9] = MTIR_ac_B.ConstantValue17;
    MTIR_ac_B.VariantMerge_For_Variant_Sou_p3[10] = MTIR_ac_B.ConstantValue18;
    MTIR_ac_B.VariantMerge_For_Variant_Sou_p3[11] = MTIR_ac_B.ConstantValue19;
    MTIR_ac_B.VariantMerge_For_Variant_Sou_p3[12] = MTIR_ac_B.ConstantValue20;
    MTIR_ac_B.VariantMerge_For_Variant_Sou_p3[13] = MTIR_ac_B.ConstantValue21;
    MTIR_ac_B.VariantMerge_For_Variant_Sou_p3[14] = MTIR_ac_B.ConstantValue22;
    MTIR_ac_B.VariantMerge_For_Variant_Sou_p3[15] = MTIR_ac_B.ConstantValue23;

#endif

    /* End of SignalConversion generated from: '<S117>/Variant Source8' */

    /* SignalConversion generated from: '<S117>/Variant Source9' incorporates:
     *  SignalConversion generated from: '<S117>/Variant Source8'
     */
#if Rte_SysCon_Variant_MTIR_1

    /* Switch: '<S448>/Switch1' */
    rtb_Switch1_od = rtb_TmpSignalConversionAtLeM_pg;

#else

    /* VariantMerge generated from: '<S117>/Variant Source8' incorporates:
     *  SignalConversion generated from: '<S117>/Variant Source8'
     */
    MTIR_ac_B.VariantMerge_For_Variant_Sour_o[0] = MTIR_ac_B.ConstantValue52;
    MTIR_ac_B.VariantMerge_For_Variant_Sour_o[1] = MTIR_ac_B.ConstantValue53;
    MTIR_ac_B.VariantMerge_For_Variant_Sour_o[2] = MTIR_ac_B.ConstantValue38;
    MTIR_ac_B.VariantMerge_For_Variant_Sour_o[3] = MTIR_ac_B.ConstantValue39;
    MTIR_ac_B.VariantMerge_For_Variant_Sour_o[4] = MTIR_ac_B.ConstantValue40;
    MTIR_ac_B.VariantMerge_For_Variant_Sour_o[5] = MTIR_ac_B.ConstantValue41;
    MTIR_ac_B.VariantMerge_For_Variant_Sour_o[6] = MTIR_ac_B.ConstantValue42;
    MTIR_ac_B.VariantMerge_For_Variant_Sour_o[7] = MTIR_ac_B.ConstantValue43;
    MTIR_ac_B.VariantMerge_For_Variant_Sour_o[8] = MTIR_ac_B.ConstantValue44;
    MTIR_ac_B.VariantMerge_For_Variant_Sour_o[9] = MTIR_ac_B.ConstantValue45;
    MTIR_ac_B.VariantMerge_For_Variant_Sour_o[10] = MTIR_ac_B.ConstantValue46;
    MTIR_ac_B.VariantMerge_For_Variant_Sour_o[11] = MTIR_ac_B.ConstantValue47;
    MTIR_ac_B.VariantMerge_For_Variant_Sour_o[12] = MTIR_ac_B.ConstantValue48;
    MTIR_ac_B.VariantMerge_For_Variant_Sour_o[13] = MTIR_ac_B.ConstantValue49;
    MTIR_ac_B.VariantMerge_For_Variant_Sour_o[14] = MTIR_ac_B.ConstantValue50;
    MTIR_ac_B.VariantMerge_For_Variant_Sour_o[15] = MTIR_ac_B.ConstantValue51;

    /* Switch: '<S448>/Switch1' incorporates:
     *  Constant: '<S134>/Constant Value5'
     *  SignalConversion generated from: '<S117>/Variant Source9'
     */
    rtb_Switch1_od = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S117>/Variant Source9' */

    /* Switch: '<S306>/Switch' incorporates:
     *  Constant: '<S311>/Calib'
     */
    if (KeMTIR_b_MtrA_EnblOvrd_HV_Volt)
    {
        /* Switch: '<S306>/Switch' incorporates:
         *  Constant: '<S310>/Calib'
         */
        VeMTIC_U_MtrAVoltFinal = KeMTIR_U_MtrA_Overrd_HV_Volt;
    }
    else
    {
        /* Switch: '<S306>/Switch' */
        VeMTIC_U_MtrAVoltFinal = rtb_TmpSignalConversionAtVeHVTR;
    }

    /* End of Switch: '<S306>/Switch' */

    /* Outputs for Atomic SubSystem: '<S312>/Accumulator Reset' */
    /* Switch: '<S313>/Switch1' incorporates:
     *  UnitDelay: '<S312>/Unit Delay5'
     */
    if (MTIR_ac_DW.UnitDelay5_DSTATE_m)
    {
        /* Switch: '<S313>/Switch1' incorporates:
         *  Constant: '<S312>/Constant Value'
         */
        rtb_TmpSignalConversionAtLeM_pg = 0.0F;
    }
    else
    {
        /* Switch: '<S313>/Switch1' incorporates:
         *  Sum: '<S306>/Sum'
         *  Sum: '<S313>/Summation'
         *  UnitDelay: '<S306>/Unit Delay1'
         *  UnitDelay: '<S313>/Unit Delay'
         */
        rtb_TmpSignalConversionAtLeM_pg = (VeMTIC_U_MtrAVoltFinal -
            MTIR_ac_DW.UnitDelay1_DSTATE_j) + MTIR_ac_DW.UnitDelay_DSTATE_n1;
    }

    /* End of Switch: '<S313>/Switch1' */

    /* Update for UnitDelay: '<S313>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_n1 = rtb_TmpSignalConversionAtLeM_pg;

    /* End of Outputs for SubSystem: '<S312>/Accumulator Reset' */

    /* Logic: '<S312>/Logical2' incorporates:
     *  Constant: '<S314>/Calib'
     *  Gain: '<S312>/Gain'
     *  RelationalOperator: '<S312>/Relational Operator'
     *  RelationalOperator: '<S312>/Relational Operator1'
     */
    VeMTIC_b_MtrASpdVoltEn = ((rtb_TmpSignalConversionAtLeM_pg <
        (-KeMTIR_r_HV_Volt_ChngThrshld)) || (rtb_TmpSignalConversionAtLeM_pg >
        KeMTIR_r_HV_Volt_ChngThrshld));

    /* Switch: '<S307>/Switch1' incorporates:
     *  Constant: '<S315>/Constant'
     *  Constant: '<S315>/Constant1'
     *  Constant: '<S315>/Constant10'
     *  Constant: '<S315>/Constant11'
     *  Constant: '<S315>/Constant12'
     *  Constant: '<S315>/Constant13'
     *  Constant: '<S315>/Constant14'
     *  Constant: '<S315>/Constant15'
     *  Constant: '<S315>/Constant2'
     *  Constant: '<S315>/Constant3'
     *  Constant: '<S315>/Constant4'
     *  Constant: '<S315>/Constant5'
     *  Constant: '<S315>/Constant6'
     *  Constant: '<S315>/Constant7'
     *  Constant: '<S315>/Constant8'
     *  Constant: '<S315>/Constant9'
     */
    tmp[0] = 0U;
    tmp[1] = 1U;
    tmp[2] = 2U;
    tmp[3] = 3U;
    tmp[4] = 4U;
    tmp[5] = 5U;
    tmp[6] = 6U;
    tmp[7] = 7U;
    tmp[8] = 8U;
    tmp[9] = 9U;
    tmp[10] = 10U;
    tmp[11] = 11U;
    tmp[12] = 12U;
    tmp[13] = 13U;
    tmp[14] = 14U;
    tmp[15] = 15U;

    /* Assignment: '<S307>/ArrayAssignment' incorporates:
     *  Switch: '<S307>/Switch2'
     */
    for (i = 0; i < 16; i++)
    {
        /* Switch: '<S307>/Switch1' */
        if (rtb_TmpSignalConversionAtLeM_bc)
        {
            rtb_TmpSignalConversionAtLeM_km = rtb_TmpSignalConversionAtLe_lal;
        }
        else
        {
            rtb_TmpSignalConversionAtLeM_km = tmp[i];
        }

        VaMTIC_b_MtrASpdCpbltyRcvdArr[(rtb_TmpSignalConversionAtLeM_km)] =
            rtb_TmpSignalConversionAtLeM_bc;
    }

    /* End of Assignment: '<S307>/ArrayAssignment' */

    /* Outputs for Atomic SubSystem: '<S307>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S322>/EdgeRising' */
    /* Logic: '<S323>/AND' incorporates:
     *  Logic: '<S323>/OR1'
     *  UnitDelay: '<S323>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_la = (rtb_TmpSignalConversionAtLeM_bc &&
        (!MTIR_ac_DW.UnitDelay_DSTATE_di));

    /* Update for UnitDelay: '<S323>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_di = rtb_TmpSignalConversionAtLeM_bc;

    /* End of Outputs for SubSystem: '<S322>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S307>/EdgeRising3' */
    /* Logic: '<S322>/OR1' incorporates:
     *  Logic: '<S318>/AND'
     */
    rtb_TmpSignalConversionAtLeM_b1 = !rtb_TmpSignalConversionAtLeM_bc;

    /* End of Outputs for SubSystem: '<S307>/EdgeRising3' */

    /* Switch: '<S322>/Switch1' incorporates:
     *  Constant: '<S319>/Calib'
     *  Constant: '<S322>/Constant Value'
     *  Logic: '<S322>/OR'
     *  Logic: '<S322>/OR1'
     *  MinMax: '<S322>/Minimum'
     *  Sum: '<S322>/Summation'
     *  UnitDelay: '<S322>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeM_b1 || rtb_TmpSignalConversionAtLeM_la)
    {
        /* Switch: '<S322>/Switch1' incorporates:
         *  Constant: '<S322>/Constant Value1'
         */
        rtb_Switch1_eb = 0U;
    }
    else if (KeMTIR_Cnt_MtrAMaxCpbltyMnWtTm < ((uint16)(((uint32)
                MTIR_ac_DW.UnitDelay_DSTATE_c5) + 1U)))
    {
        /* MinMax: '<S322>/Minimum' incorporates:
         *  Constant: '<S319>/Calib'
         *  Switch: '<S322>/Switch1'
         */
        rtb_Switch1_eb = KeMTIR_Cnt_MtrAMaxCpbltyMnWtTm;
    }
    else
    {
        /* Switch: '<S322>/Switch1' incorporates:
         *  Constant: '<S322>/Constant Value'
         *  MinMax: '<S322>/Minimum'
         *  Sum: '<S322>/Summation'
         *  UnitDelay: '<S322>/Unit Delay'
         */
        rtb_Switch1_eb = (uint16)(((uint32)MTIR_ac_DW.UnitDelay_DSTATE_c5) + 1U);
    }

    /* End of Switch: '<S322>/Switch1' */

    /* Logic: '<S322>/AND' incorporates:
     *  Constant: '<S319>/Calib'
     *  RelationalOperator: '<S322>/Greater  Than'
     */
    VeMTIC_b_MtrASpdSgnlRcvdDlyd = (rtb_TmpSignalConversionAtLeM_bc &&
        (rtb_Switch1_eb >= KeMTIR_Cnt_MtrAMaxCpbltyMnWtTm));

    /* Update for UnitDelay: '<S322>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_c5 = rtb_Switch1_eb;

    /* End of Outputs for SubSystem: '<S307>/Turn On Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S307>/EdgeRising1' */
    /* Logic: '<S316>/OR1' incorporates:
     *  UnitDelay: '<S316>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_la = !MTIR_ac_DW.UnitDelay_DSTATE_dl;

    /* Update for UnitDelay: '<S316>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_dl = VeMTIC_b_MtrASpdSgnlRcvdDlyd;

    /* End of Outputs for SubSystem: '<S307>/EdgeRising1' */

    /* Logic: '<S307>/Logical' */
    rtb_TmpSignalConversionAtLeM_jo = VaMTIC_b_MtrASpdCpbltyRcvdArr[0];
    for (i = 0; i < 15; i++)
    {
        rtb_TmpSignalConversionAtLeM_jo = (rtb_TmpSignalConversionAtLeM_jo &&
            (VaMTIC_b_MtrASpdCpbltyRcvdArr[i + 1]));
    }

    /* Logic: '<S307>/Logical7' incorporates:
     *  Constant: '<S320>/Calib'
     *  Logic: '<S307>/Logical'
     */
    rtb_TmpSignalConversionAtLe_apt = (rtb_TmpSignalConversionAtLeM_jo &&
        (KeMTIR_b_EnMtrAArrUpdtOnArrRcvd));

    /* Outputs for Atomic SubSystem: '<S307>/EdgeRising2' */
    /* Logic: '<S317>/OR1' incorporates:
     *  UnitDelay: '<S317>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_np = !MTIR_ac_DW.UnitDelay_DSTATE_hi;

    /* Update for UnitDelay: '<S317>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_hi = rtb_TmpSignalConversionAtLe_apt;

    /* End of Outputs for SubSystem: '<S307>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S307>/EdgeRising3' */
    /* Logic: '<S318>/OR1' incorporates:
     *  UnitDelay: '<S318>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_k0 = !MTIR_ac_DW.UnitDelay_DSTATE_lu;

    /* Update for UnitDelay: '<S318>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_lu = rtb_TmpSignalConversionAtLeM_bc;

    /* End of Outputs for SubSystem: '<S307>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S307>/EdgeRising1' */
    /* Outputs for Atomic SubSystem: '<S307>/EdgeRising2' */
    /* Logic: '<S307>/Logical1' incorporates:
     *  Logic: '<S316>/AND'
     *  Logic: '<S317>/AND'
     */
    VeMTIC_b_MtrASpdSgnlRcvdEn = (((VeMTIC_b_MtrASpdSgnlRcvdDlyd) &&
        rtb_TmpSignalConversionAtLeM_la) || (rtb_TmpSignalConversionAtLe_apt &&
        rtb_TmpSignalConversionAtLeM_np));

    /* End of Outputs for SubSystem: '<S307>/EdgeRising2' */
    /* End of Outputs for SubSystem: '<S307>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S307>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S307>/EdgeRising3' */
    /* Logic: '<S321>/OR1' incorporates:
     *  Logic: '<S318>/AND'
     *  Logic: '<S321>/NOT'
     *  Logic: '<S321>/OR'
     *  UnitDelay: '<S321>/Unit Delay'
     */
    VeMTIC_b_MtrASpdSgnlRcvdEnLatch = ((VeMTIC_b_MtrASpdSgnlRcvdEn) ||
        ((rtb_TmpSignalConversionAtLeM_b1 || (!rtb_TmpSignalConversionAtLeM_k0))
         && (MTIR_ac_DW.UnitDelay_DSTATE_c0)));

    /* End of Outputs for SubSystem: '<S307>/EdgeRising3' */

    /* Update for UnitDelay: '<S321>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_c0 = VeMTIC_b_MtrASpdSgnlRcvdEnLatch;

    /* End of Outputs for SubSystem: '<S307>/Signal Latch On With Reset' */

    /* Logic: '<S300>/Logical1' incorporates:
     *  Constant: '<S308>/Calib'
     *  Logic: '<S301>/Logical1'
     *  Logic: '<S302>/Logical1'
     *  Logic: '<S303>/Logical1'
     *  Logic: '<S304>/Logical1'
     *  Logic: '<S305>/Logical1'
     */
    rtb_TmpSignalConversionAtLeM_k0 = !KeMTIR_b_EnblMtrsTrqCpbltyCrv;

    /* Logic: '<S300>/Logical10' incorporates:
     *  Logic: '<S300>/Logical1'
     *  Logic: '<S300>/Logical2'
     *  Logic: '<S300>/Logical3'
     *  Logic: '<S300>/Logical8'
     *  Logic: '<S300>/Logical9'
     *  UnitDelay: '<S300>/Unit Delay1'
     */
    VeMTIC_b_MtrASpdArrayUpdateEn = (((VeMTIC_b_MtrASpdSgnlRcvdEn) &&
        (!MTIR_ac_DW.UnitDelay1_DSTATE_e)) || (((VeMTIC_b_MtrASpdSgnlRcvdEnLatch)
        || rtb_TmpSignalConversionAtLeM_k0) && (VeMTIC_b_MtrASpdVoltEn)));

    /* Outputs for Enabled SubSystem: '<S300>/Multiply' incorporates:
     *  EnablePort: '<S309>/Enable'
     */
    if (VeMTIC_b_MtrASpdArrayUpdateEn)
    {
        for (i = 0; i < 16; i++)
        {
            /* Product: '<S309>/Product' */
            MTIR_ac_B.Product_de[i] = rtb_TmpSignalConversionAtLaM_ob[i] *
                VeMTIC_U_MtrAVoltFinal;
        }
    }

    /* End of Outputs for SubSystem: '<S300>/Multiply' */

    /* Sum: '<S328>/Add' incorporates:
     *  Constant: '<S333>/Calib'
     *  UnitDelay: '<S335>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_lk = MTIR_ac_DW.UnitDelay_DSTATE_a +
        KeMTIR_k_MtrCpblty_LU;

    /* Sum: '<S328>/Add1' incorporates:
     *  Constant: '<S332>/Calib'
     *  UnitDelay: '<S335>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_pg = MTIR_ac_DW.UnitDelay_DSTATE_a +
        KeMTIR_k_MtrCpblty_LD;

    /* Outputs for Atomic SubSystem: '<S328>/Limiter' */
    /* Switch: '<S334>/Switch1' incorporates:
     *  RelationalOperator: '<S334>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtLeM_lk < rtb_TmpSignalConversionAtLeM_ny)
    {
        /* UnitDelay: '<S435>/Unit Delay' */
        rtb_TmpSignalConversionAtLeM_ox = rtb_TmpSignalConversionAtLeM_lk;
    }
    else
    {
        /* UnitDelay: '<S435>/Unit Delay' */
        rtb_TmpSignalConversionAtLeM_ox = rtb_TmpSignalConversionAtLeM_ny;
    }

    /* End of Switch: '<S334>/Switch1' */

    /* Switch: '<S334>/Switch' incorporates:
     *  RelationalOperator: '<S334>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtLeM_ox > rtb_TmpSignalConversionAtLeM_pg)
    {
        /* Switch: '<S334>/Switch' */
        rtb_TmpSignalConversionAtLeM_pg = rtb_TmpSignalConversionAtLeM_ox;
    }

    /* End of Switch: '<S334>/Switch' */
    /* End of Outputs for SubSystem: '<S328>/Limiter' */

    /* Switch: '<S324>/Switch' incorporates:
     *  Constant: '<S329>/Calib'
     */
    if (KeMTIR_b_EnblOvrdDrtngFctr)
    {
        /* Switch: '<S324>/Switch' incorporates:
         *  Constant: '<S330>/Calib'
         */
        VeMTIC_k_MtrAMaxDrtngFctrFinal = KeMTIR_k_OverrdDrtngFctr;
    }
    else
    {
        /* Switch: '<S324>/Switch' */
        VeMTIC_k_MtrAMaxDrtngFctrFinal = rtb_TmpSignalConversionAtLeM_pg;
    }

    /* End of Switch: '<S324>/Switch' */

    /* Outputs for Atomic SubSystem: '<S331>/Accumulator Reset' */
    /* Switch: '<S336>/Switch1' incorporates:
     *  UnitDelay: '<S331>/Unit Delay5'
     */
    if (MTIR_ac_DW.UnitDelay5_DSTATE_a)
    {
        /* Switch: '<S336>/Switch1' incorporates:
         *  Constant: '<S331>/Constant Value'
         */
        rtb_TmpSignalConversionAtLeM_lk = 0.0F;
    }
    else
    {
        /* Switch: '<S336>/Switch1' incorporates:
         *  Sum: '<S324>/Sum1'
         *  Sum: '<S336>/Summation'
         *  UnitDelay: '<S324>/Unit Delay4'
         *  UnitDelay: '<S336>/Unit Delay'
         */
        rtb_TmpSignalConversionAtLeM_lk = (VeMTIC_k_MtrAMaxDrtngFctrFinal -
            MTIR_ac_DW.UnitDelay4_DSTATE_e) + MTIR_ac_DW.UnitDelay_DSTATE_ap;
    }

    /* End of Switch: '<S336>/Switch1' */

    /* Update for UnitDelay: '<S336>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_ap = rtb_TmpSignalConversionAtLeM_lk;

    /* End of Outputs for SubSystem: '<S331>/Accumulator Reset' */

    /* Logic: '<S331>/Logical2' incorporates:
     *  Constant: '<S337>/Calib'
     *  Gain: '<S331>/Gain'
     *  RelationalOperator: '<S331>/Relational Operator'
     *  RelationalOperator: '<S331>/Relational Operator1'
     */
    VeMTIC_b_MtrAMaxDrtFctEn = ((rtb_TmpSignalConversionAtLeM_lk <
        (-KeMTIR_r_DrtngChngThrshld)) || (rtb_TmpSignalConversionAtLeM_lk >
        KeMTIR_r_DrtngChngThrshld));

    /* Switch: '<S325>/Switch1' incorporates:
     *  Constant: '<S338>/Constant'
     *  Constant: '<S338>/Constant1'
     *  Constant: '<S338>/Constant10'
     *  Constant: '<S338>/Constant11'
     *  Constant: '<S338>/Constant12'
     *  Constant: '<S338>/Constant13'
     *  Constant: '<S338>/Constant14'
     *  Constant: '<S338>/Constant15'
     *  Constant: '<S338>/Constant2'
     *  Constant: '<S338>/Constant3'
     *  Constant: '<S338>/Constant4'
     *  Constant: '<S338>/Constant5'
     *  Constant: '<S338>/Constant6'
     *  Constant: '<S338>/Constant7'
     *  Constant: '<S338>/Constant8'
     *  Constant: '<S338>/Constant9'
     */
    tmp[0] = 0U;
    tmp[1] = 1U;
    tmp[2] = 2U;
    tmp[3] = 3U;
    tmp[4] = 4U;
    tmp[5] = 5U;
    tmp[6] = 6U;
    tmp[7] = 7U;
    tmp[8] = 8U;
    tmp[9] = 9U;
    tmp[10] = 10U;
    tmp[11] = 11U;
    tmp[12] = 12U;
    tmp[13] = 13U;
    tmp[14] = 14U;
    tmp[15] = 15U;

    /* Assignment: '<S325>/ArrayAssignment' incorporates:
     *  Switch: '<S325>/Switch2'
     */
    for (i = 0; i < 16; i++)
    {
        /* Switch: '<S325>/Switch1' */
        if (rtb_TmpSignalConversionAtLeM_ih)
        {
            rtb_TmpSignalConversionAtLeM_km = rtb_TmpSignalConversionAtLe_lal;
        }
        else
        {
            rtb_TmpSignalConversionAtLeM_km = tmp[i];
        }

        VaMTIC_b_MtrAMaxCpbltyRcvdArr[(rtb_TmpSignalConversionAtLeM_km)] =
            rtb_TmpSignalConversionAtLeM_ih;
    }

    /* End of Assignment: '<S325>/ArrayAssignment' */

    /* Logic: '<S325>/Logical3' */
    rtb_TmpSignalConversionAtLeM_ih = (rtb_TmpSignalConversionAtLeM_kx ||
        rtb_TmpSignalConversionAtLeM_ih);

    /* Outputs for Atomic SubSystem: '<S325>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S345>/EdgeRising' */
    /* Logic: '<S346>/AND' incorporates:
     *  Logic: '<S346>/OR1'
     *  UnitDelay: '<S346>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_bc = (rtb_TmpSignalConversionAtLeM_ih &&
        (!MTIR_ac_DW.UnitDelay_DSTATE_a4v));

    /* Update for UnitDelay: '<S346>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_a4v = rtb_TmpSignalConversionAtLeM_ih;

    /* End of Outputs for SubSystem: '<S345>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S325>/EdgeRising3' */
    /* Logic: '<S345>/OR1' incorporates:
     *  Logic: '<S341>/AND'
     */
    rtb_TmpSignalConversionAtLeM_b1 = !rtb_TmpSignalConversionAtLeM_ih;

    /* End of Outputs for SubSystem: '<S325>/EdgeRising3' */

    /* Switch: '<S345>/Switch1' incorporates:
     *  Constant: '<S342>/Calib'
     *  Constant: '<S345>/Constant Value'
     *  Logic: '<S345>/OR'
     *  Logic: '<S345>/OR1'
     *  MinMax: '<S345>/Minimum'
     *  Sum: '<S345>/Summation'
     *  UnitDelay: '<S345>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeM_b1 || rtb_TmpSignalConversionAtLeM_bc)
    {
        /* Switch: '<S345>/Switch1' incorporates:
         *  Constant: '<S345>/Constant Value1'
         */
        rtb_Switch1_eb = 0U;
    }
    else if (KeMTIR_Cnt_MtrAMaxCpbltyMnWtTm < ((uint16)(((uint32)
                MTIR_ac_DW.UnitDelay_DSTATE_osc) + 1U)))
    {
        /* MinMax: '<S345>/Minimum' incorporates:
         *  Constant: '<S342>/Calib'
         *  Switch: '<S345>/Switch1'
         */
        rtb_Switch1_eb = KeMTIR_Cnt_MtrAMaxCpbltyMnWtTm;
    }
    else
    {
        /* Switch: '<S345>/Switch1' incorporates:
         *  Constant: '<S345>/Constant Value'
         *  MinMax: '<S345>/Minimum'
         *  Sum: '<S345>/Summation'
         *  UnitDelay: '<S345>/Unit Delay'
         */
        rtb_Switch1_eb = (uint16)(((uint32)MTIR_ac_DW.UnitDelay_DSTATE_osc) + 1U);
    }

    /* End of Switch: '<S345>/Switch1' */

    /* Logic: '<S345>/AND' incorporates:
     *  Constant: '<S342>/Calib'
     *  RelationalOperator: '<S345>/Greater  Than'
     */
    VeMTIC_b_MtrAMaxSgnlRcvdDlyd = (rtb_TmpSignalConversionAtLeM_ih &&
        (rtb_Switch1_eb >= KeMTIR_Cnt_MtrAMaxCpbltyMnWtTm));

    /* Update for UnitDelay: '<S345>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_osc = rtb_Switch1_eb;

    /* End of Outputs for SubSystem: '<S325>/Turn On Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S325>/EdgeRising1' */
    /* Logic: '<S339>/OR1' incorporates:
     *  UnitDelay: '<S339>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_bc = !MTIR_ac_DW.UnitDelay_DSTATE_oy;

    /* Update for UnitDelay: '<S339>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_oy = VeMTIC_b_MtrAMaxSgnlRcvdDlyd;

    /* End of Outputs for SubSystem: '<S325>/EdgeRising1' */

    /* Logic: '<S325>/Logical' */
    rtb_TmpSignalConversionAtLeM_jo = VaMTIC_b_MtrAMaxCpbltyRcvdArr[0];
    for (i = 0; i < 15; i++)
    {
        rtb_TmpSignalConversionAtLeM_jo = (rtb_TmpSignalConversionAtLeM_jo &&
            (VaMTIC_b_MtrAMaxCpbltyRcvdArr[i + 1]));
    }

    /* Logic: '<S325>/Logical7' incorporates:
     *  Constant: '<S343>/Calib'
     *  Logic: '<S325>/Logical'
     */
    rtb_TmpSignalConversionAtLeM_la = ((rtb_TmpSignalConversionAtLeM_kx &&
        rtb_TmpSignalConversionAtLeM_jo) && (KeMTIR_b_EnMtrAArrUpdtOnArrRcvd));

    /* Outputs for Atomic SubSystem: '<S325>/EdgeRising2' */
    /* Logic: '<S340>/OR1' incorporates:
     *  UnitDelay: '<S340>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLe_apt = !MTIR_ac_DW.UnitDelay_DSTATE_jd;

    /* Update for UnitDelay: '<S340>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_jd = rtb_TmpSignalConversionAtLeM_la;

    /* End of Outputs for SubSystem: '<S325>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S325>/EdgeRising3' */
    /* Logic: '<S341>/OR1' incorporates:
     *  UnitDelay: '<S341>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_np = !MTIR_ac_DW.UnitDelay_DSTATE_pa;

    /* Update for UnitDelay: '<S341>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_pa = rtb_TmpSignalConversionAtLeM_ih;

    /* End of Outputs for SubSystem: '<S325>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S325>/EdgeRising1' */
    /* Outputs for Atomic SubSystem: '<S325>/EdgeRising2' */
    /* Logic: '<S325>/Logical1' incorporates:
     *  Logic: '<S339>/AND'
     *  Logic: '<S340>/AND'
     */
    VeMTIC_b_MtrAMaxSgnlRcvdEn = (((VeMTIC_b_MtrAMaxSgnlRcvdDlyd) &&
        rtb_TmpSignalConversionAtLeM_bc) || (rtb_TmpSignalConversionAtLeM_la &&
        rtb_TmpSignalConversionAtLe_apt));

    /* End of Outputs for SubSystem: '<S325>/EdgeRising2' */
    /* End of Outputs for SubSystem: '<S325>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S325>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S325>/EdgeRising3' */
    /* Logic: '<S344>/OR1' incorporates:
     *  Logic: '<S341>/AND'
     *  Logic: '<S344>/NOT'
     *  Logic: '<S344>/OR'
     *  UnitDelay: '<S344>/Unit Delay'
     */
    VeMTIC_b_MtrAMaxSgnlRcvdEnLatch = ((VeMTIC_b_MtrAMaxSgnlRcvdEn) ||
        ((rtb_TmpSignalConversionAtLeM_b1 || (!rtb_TmpSignalConversionAtLeM_np))
         && (MTIR_ac_DW.UnitDelay_DSTATE_bh)));

    /* End of Outputs for SubSystem: '<S325>/EdgeRising3' */

    /* Update for UnitDelay: '<S344>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_bh = VeMTIC_b_MtrAMaxSgnlRcvdEnLatch;

    /* End of Outputs for SubSystem: '<S325>/Signal Latch On With Reset' */

    /* Logic: '<S301>/Logical10' incorporates:
     *  Logic: '<S301>/Logical2'
     *  Logic: '<S301>/Logical3'
     *  Logic: '<S301>/Logical8'
     *  Logic: '<S301>/Logical9'
     *  UnitDelay: '<S301>/Unit Delay1'
     */
    VeMTIC_b_MtrAMaxArrayUpdateEn = (((VeMTIC_b_MtrAMaxSgnlRcvdEn) &&
        (!MTIR_ac_DW.UnitDelay1_DSTATE_p)) || (((VeMTIC_b_MtrAMaxSgnlRcvdEnLatch)
        || rtb_TmpSignalConversionAtLeM_k0) && (VeMTIC_b_MtrAMaxDrtFctEn)));

    /* Outputs for Enabled SubSystem: '<S301>/Multiply' incorporates:
     *  EnablePort: '<S327>/Enable'
     */
    if (VeMTIC_b_MtrAMaxArrayUpdateEn)
    {
        for (i = 0; i < 16; i++)
        {
            /* Product: '<S327>/Product' */
            MTIR_ac_B.Product_k[i] = rtb_TmpSignalConversionAtLaMTIR[i] *
                VeMTIC_k_MtrAMaxDrtngFctrFinal;
        }
    }

    /* End of Outputs for SubSystem: '<S301>/Multiply' */

    /* Sum: '<S351>/Add' incorporates:
     *  Constant: '<S356>/Calib'
     *  UnitDelay: '<S358>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_ox = MTIR_ac_DW.UnitDelay_DSTATE_b +
        KeMTIR_k_MtrCpblty_LU;

    /* Sum: '<S351>/Add1' incorporates:
     *  Constant: '<S355>/Calib'
     *  UnitDelay: '<S358>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_lk = MTIR_ac_DW.UnitDelay_DSTATE_b +
        KeMTIR_k_MtrCpblty_LD;

    /* Outputs for Atomic SubSystem: '<S351>/Limiter' */
    /* Switch: '<S357>/Switch1' incorporates:
     *  RelationalOperator: '<S357>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtLeM_ox >= rtb_TmpSignalConversionAtLeM_ny)
    {
        /* UnitDelay: '<S435>/Unit Delay' */
        rtb_TmpSignalConversionAtLeM_ox = rtb_TmpSignalConversionAtLeM_ny;
    }

    /* End of Switch: '<S357>/Switch1' */

    /* Switch: '<S357>/Switch' incorporates:
     *  RelationalOperator: '<S357>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtLeM_ox > rtb_TmpSignalConversionAtLeM_lk)
    {
        /* Switch: '<S357>/Switch' */
        rtb_TmpSignalConversionAtLeM_lk = rtb_TmpSignalConversionAtLeM_ox;
    }

    /* End of Switch: '<S357>/Switch' */
    /* End of Outputs for SubSystem: '<S351>/Limiter' */

    /* Switch: '<S347>/Switch' incorporates:
     *  Constant: '<S352>/Calib'
     */
    if (KeMTIR_b_EnblOvrdDrtngFctr)
    {
        /* Switch: '<S347>/Switch' incorporates:
         *  Constant: '<S353>/Calib'
         */
        VeMTIC_k_MtrAMinDrtngFctrFinal = KeMTIR_k_OverrdDrtngFctr;
    }
    else
    {
        /* Switch: '<S347>/Switch' */
        VeMTIC_k_MtrAMinDrtngFctrFinal = rtb_TmpSignalConversionAtLeM_lk;
    }

    /* End of Switch: '<S347>/Switch' */

    /* Outputs for Atomic SubSystem: '<S354>/Accumulator Reset' */
    /* Switch: '<S359>/Switch1' incorporates:
     *  UnitDelay: '<S354>/Unit Delay5'
     */
    if (MTIR_ac_DW.UnitDelay5_DSTATE_hs)
    {
        /* Switch: '<S359>/Switch1' incorporates:
         *  Constant: '<S354>/Constant Value'
         */
        rtb_TmpSignalConversionAtLeM_ox = 0.0F;
    }
    else
    {
        /* Switch: '<S359>/Switch1' incorporates:
         *  Sum: '<S347>/Sum1'
         *  Sum: '<S359>/Summation'
         *  UnitDelay: '<S347>/Unit Delay4'
         *  UnitDelay: '<S359>/Unit Delay'
         */
        rtb_TmpSignalConversionAtLeM_ox = (VeMTIC_k_MtrAMinDrtngFctrFinal -
            MTIR_ac_DW.UnitDelay4_DSTATE_mn) + MTIR_ac_DW.UnitDelay_DSTATE_e;
    }

    /* End of Switch: '<S359>/Switch1' */

    /* Update for UnitDelay: '<S359>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_e = rtb_TmpSignalConversionAtLeM_ox;

    /* End of Outputs for SubSystem: '<S354>/Accumulator Reset' */

    /* Logic: '<S354>/Logical2' incorporates:
     *  Constant: '<S360>/Calib'
     *  Gain: '<S354>/Gain'
     *  RelationalOperator: '<S354>/Relational Operator'
     *  RelationalOperator: '<S354>/Relational Operator1'
     */
    VeMTIC_b_MtrAMinDrtFctEn = ((rtb_TmpSignalConversionAtLeM_ox <
        (-KeMTIR_r_DrtngChngThrshld)) || (rtb_TmpSignalConversionAtLeM_ox >
        KeMTIR_r_DrtngChngThrshld));

    /* Switch: '<S348>/Switch1' incorporates:
     *  Constant: '<S361>/Constant'
     *  Constant: '<S361>/Constant1'
     *  Constant: '<S361>/Constant10'
     *  Constant: '<S361>/Constant11'
     *  Constant: '<S361>/Constant12'
     *  Constant: '<S361>/Constant13'
     *  Constant: '<S361>/Constant14'
     *  Constant: '<S361>/Constant15'
     *  Constant: '<S361>/Constant2'
     *  Constant: '<S361>/Constant3'
     *  Constant: '<S361>/Constant4'
     *  Constant: '<S361>/Constant5'
     *  Constant: '<S361>/Constant6'
     *  Constant: '<S361>/Constant7'
     *  Constant: '<S361>/Constant8'
     *  Constant: '<S361>/Constant9'
     */
    tmp[0] = 0U;
    tmp[1] = 1U;
    tmp[2] = 2U;
    tmp[3] = 3U;
    tmp[4] = 4U;
    tmp[5] = 5U;
    tmp[6] = 6U;
    tmp[7] = 7U;
    tmp[8] = 8U;
    tmp[9] = 9U;
    tmp[10] = 10U;
    tmp[11] = 11U;
    tmp[12] = 12U;
    tmp[13] = 13U;
    tmp[14] = 14U;
    tmp[15] = 15U;

    /* Assignment: '<S348>/ArrayAssignment' incorporates:
     *  Switch: '<S348>/Switch2'
     */
    for (i = 0; i < 16; i++)
    {
        /* Switch: '<S348>/Switch1' */
        if (rtb_TmpSignalConversionAtLeM_m2)
        {
            rtb_TmpSignalConversionAtLeM_km = rtb_TmpSignalConversionAtLe_lal;
        }
        else
        {
            rtb_TmpSignalConversionAtLeM_km = tmp[i];
        }

        VaMTIC_b_MtrAMinCpbltyRcvdArr[(rtb_TmpSignalConversionAtLeM_km)] =
            rtb_TmpSignalConversionAtLeM_m2;
    }

    /* End of Assignment: '<S348>/ArrayAssignment' */

    /* Logic: '<S348>/Logical3' */
    rtb_TmpSignalConversionAtLeM_m2 = (rtb_TmpSignalConversionAtLeM_kx ||
        rtb_TmpSignalConversionAtLeM_m2);

    /* Outputs for Atomic SubSystem: '<S348>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S368>/EdgeRising' */
    /* Logic: '<S369>/AND' incorporates:
     *  Logic: '<S369>/OR1'
     *  UnitDelay: '<S369>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_ih = (rtb_TmpSignalConversionAtLeM_m2 &&
        (!MTIR_ac_DW.UnitDelay_DSTATE_ab));

    /* Update for UnitDelay: '<S369>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_ab = rtb_TmpSignalConversionAtLeM_m2;

    /* End of Outputs for SubSystem: '<S368>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S348>/EdgeRising3' */
    /* Logic: '<S368>/OR1' incorporates:
     *  Logic: '<S364>/AND'
     */
    rtb_TmpSignalConversionAtLeM_b1 = !rtb_TmpSignalConversionAtLeM_m2;

    /* End of Outputs for SubSystem: '<S348>/EdgeRising3' */

    /* Switch: '<S368>/Switch1' incorporates:
     *  Constant: '<S365>/Calib'
     *  Constant: '<S368>/Constant Value'
     *  Logic: '<S368>/OR'
     *  Logic: '<S368>/OR1'
     *  MinMax: '<S368>/Minimum'
     *  Sum: '<S368>/Summation'
     *  UnitDelay: '<S368>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeM_b1 || rtb_TmpSignalConversionAtLeM_ih)
    {
        /* Switch: '<S368>/Switch1' incorporates:
         *  Constant: '<S368>/Constant Value1'
         */
        rtb_Switch1_eb = 0U;
    }
    else if (KeMTIR_Cnt_MtrAMaxCpbltyMnWtTm < ((uint16)(((uint32)
                MTIR_ac_DW.UnitDelay_DSTATE_c3) + 1U)))
    {
        /* MinMax: '<S368>/Minimum' incorporates:
         *  Constant: '<S365>/Calib'
         *  Switch: '<S368>/Switch1'
         */
        rtb_Switch1_eb = KeMTIR_Cnt_MtrAMaxCpbltyMnWtTm;
    }
    else
    {
        /* Switch: '<S368>/Switch1' incorporates:
         *  Constant: '<S368>/Constant Value'
         *  MinMax: '<S368>/Minimum'
         *  Sum: '<S368>/Summation'
         *  UnitDelay: '<S368>/Unit Delay'
         */
        rtb_Switch1_eb = (uint16)(((uint32)MTIR_ac_DW.UnitDelay_DSTATE_c3) + 1U);
    }

    /* End of Switch: '<S368>/Switch1' */

    /* Logic: '<S368>/AND' incorporates:
     *  Constant: '<S365>/Calib'
     *  RelationalOperator: '<S368>/Greater  Than'
     */
    VeMTIC_b_MtrAMinSgnlRcvdDlyd = (rtb_TmpSignalConversionAtLeM_m2 &&
        (rtb_Switch1_eb >= KeMTIR_Cnt_MtrAMaxCpbltyMnWtTm));

    /* Update for UnitDelay: '<S368>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_c3 = rtb_Switch1_eb;

    /* End of Outputs for SubSystem: '<S348>/Turn On Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S348>/EdgeRising1' */
    /* Logic: '<S362>/OR1' incorporates:
     *  UnitDelay: '<S362>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_ih = !MTIR_ac_DW.UnitDelay_DSTATE_jx;

    /* Update for UnitDelay: '<S362>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_jx = VeMTIC_b_MtrAMinSgnlRcvdDlyd;

    /* End of Outputs for SubSystem: '<S348>/EdgeRising1' */

    /* Logic: '<S348>/Logical' */
    rtb_TmpSignalConversionAtLeM_jo = VaMTIC_b_MtrAMinCpbltyRcvdArr[0];
    for (i = 0; i < 15; i++)
    {
        rtb_TmpSignalConversionAtLeM_jo = (rtb_TmpSignalConversionAtLeM_jo &&
            (VaMTIC_b_MtrAMinCpbltyRcvdArr[i + 1]));
    }

    /* Logic: '<S348>/Logical7' incorporates:
     *  Constant: '<S366>/Calib'
     *  Logic: '<S348>/Logical'
     */
    rtb_TmpSignalConversionAtLeM_kx = ((rtb_TmpSignalConversionAtLeM_kx &&
        rtb_TmpSignalConversionAtLeM_jo) && (KeMTIR_b_EnMtrAArrUpdtOnArrRcvd));

    /* Outputs for Atomic SubSystem: '<S348>/EdgeRising2' */
    /* Logic: '<S363>/OR1' incorporates:
     *  UnitDelay: '<S363>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_bc = !MTIR_ac_DW.UnitDelay_DSTATE_b1;

    /* Update for UnitDelay: '<S363>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_b1 = rtb_TmpSignalConversionAtLeM_kx;

    /* End of Outputs for SubSystem: '<S348>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S348>/EdgeRising3' */
    /* Logic: '<S364>/OR1' incorporates:
     *  UnitDelay: '<S364>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_la = !MTIR_ac_DW.UnitDelay_DSTATE_fb;

    /* Update for UnitDelay: '<S364>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_fb = rtb_TmpSignalConversionAtLeM_m2;

    /* End of Outputs for SubSystem: '<S348>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S348>/EdgeRising1' */
    /* Outputs for Atomic SubSystem: '<S348>/EdgeRising2' */
    /* Logic: '<S348>/Logical1' incorporates:
     *  Logic: '<S362>/AND'
     *  Logic: '<S363>/AND'
     */
    VeMTIC_b_MtrAMinSgnlRcvdEn = (((VeMTIC_b_MtrAMinSgnlRcvdDlyd) &&
        rtb_TmpSignalConversionAtLeM_ih) || (rtb_TmpSignalConversionAtLeM_kx &&
        rtb_TmpSignalConversionAtLeM_bc));

    /* End of Outputs for SubSystem: '<S348>/EdgeRising2' */
    /* End of Outputs for SubSystem: '<S348>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S348>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S348>/EdgeRising3' */
    /* Logic: '<S367>/OR1' incorporates:
     *  Logic: '<S364>/AND'
     *  Logic: '<S367>/NOT'
     *  Logic: '<S367>/OR'
     *  UnitDelay: '<S367>/Unit Delay'
     */
    VeMTIC_b_MtrAMinSgnlRcvdEnLatch = ((VeMTIC_b_MtrAMinSgnlRcvdEn) ||
        ((rtb_TmpSignalConversionAtLeM_b1 || (!rtb_TmpSignalConversionAtLeM_la))
         && (MTIR_ac_DW.UnitDelay_DSTATE_e4)));

    /* End of Outputs for SubSystem: '<S348>/EdgeRising3' */

    /* Update for UnitDelay: '<S367>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_e4 = VeMTIC_b_MtrAMinSgnlRcvdEnLatch;

    /* End of Outputs for SubSystem: '<S348>/Signal Latch On With Reset' */

    /* Logic: '<S302>/Logical10' incorporates:
     *  Logic: '<S302>/Logical2'
     *  Logic: '<S302>/Logical3'
     *  Logic: '<S302>/Logical8'
     *  Logic: '<S302>/Logical9'
     *  UnitDelay: '<S302>/Unit Delay1'
     */
    VeMTIC_b_MtrAMinArrayUpdateEn = (((VeMTIC_b_MtrAMinSgnlRcvdEn) &&
        (!MTIR_ac_DW.UnitDelay1_DSTATE_az)) ||
        (((VeMTIC_b_MtrAMinSgnlRcvdEnLatch) || rtb_TmpSignalConversionAtLeM_k0) &&
         (VeMTIC_b_MtrAMinDrtFctEn)));

    /* Outputs for Enabled SubSystem: '<S302>/Multiply' incorporates:
     *  EnablePort: '<S350>/Enable'
     */
    if (VeMTIC_b_MtrAMinArrayUpdateEn)
    {
        for (i = 0; i < 16; i++)
        {
            /* Product: '<S350>/Product' */
            MTIR_ac_B.Product_m[i] = rtb_TmpSignalConversionAtLaMT_o[i] *
                VeMTIC_k_MtrAMinDrtngFctrFinal;
        }
    }

    /* End of Outputs for SubSystem: '<S302>/Multiply' */

    /* Switch: '<S370>/Switch' incorporates:
     *  Constant: '<S375>/Calib'
     */
    if (KeMTIR_b_MtrB_EnblOvrd_HV_Volt)
    {
        /* Switch: '<S370>/Switch' incorporates:
         *  Constant: '<S374>/Calib'
         */
        VeMTIC_U_MtrBVoltFinal = KeMTIR_U_MtrB_Overrd_HV_Volt;
    }
    else
    {
        /* Switch: '<S370>/Switch' */
        VeMTIC_U_MtrBVoltFinal = rtb_TmpSignalConversionAtVeHVTR;
    }

    /* End of Switch: '<S370>/Switch' */

    /* Outputs for Atomic SubSystem: '<S376>/Accumulator Reset' */
    /* Switch: '<S377>/Switch1' incorporates:
     *  UnitDelay: '<S376>/Unit Delay5'
     */
    if (MTIR_ac_DW.UnitDelay5_DSTATE_ld)
    {
        /* Switch: '<S377>/Switch1' incorporates:
         *  Constant: '<S376>/Constant Value'
         */
        rtb_TmpSignalConversionAtVeHVTR = 0.0F;
    }
    else
    {
        /* Switch: '<S377>/Switch1' incorporates:
         *  Sum: '<S370>/Sum'
         *  Sum: '<S377>/Summation'
         *  UnitDelay: '<S370>/Unit Delay1'
         *  UnitDelay: '<S377>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeHVTR = (VeMTIC_U_MtrBVoltFinal -
            MTIR_ac_DW.UnitDelay1_DSTATE_l) + MTIR_ac_DW.UnitDelay_DSTATE_ft;
    }

    /* End of Switch: '<S377>/Switch1' */

    /* Update for UnitDelay: '<S377>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_ft = rtb_TmpSignalConversionAtVeHVTR;

    /* End of Outputs for SubSystem: '<S376>/Accumulator Reset' */

    /* Logic: '<S376>/Logical2' incorporates:
     *  Constant: '<S378>/Calib'
     *  Gain: '<S376>/Gain'
     *  RelationalOperator: '<S376>/Relational Operator'
     *  RelationalOperator: '<S376>/Relational Operator1'
     */
    VeMTIC_b_MtrBSpdVoltEn = ((rtb_TmpSignalConversionAtVeHVTR <
        (-KeMTIR_r_HV_Volt_ChngThrshld)) || (rtb_TmpSignalConversionAtVeHVTR >
        KeMTIR_r_HV_Volt_ChngThrshld));

    /* Switch: '<S371>/Switch1' incorporates:
     *  Constant: '<S379>/Constant'
     *  Constant: '<S379>/Constant1'
     *  Constant: '<S379>/Constant10'
     *  Constant: '<S379>/Constant11'
     *  Constant: '<S379>/Constant12'
     *  Constant: '<S379>/Constant13'
     *  Constant: '<S379>/Constant14'
     *  Constant: '<S379>/Constant15'
     *  Constant: '<S379>/Constant2'
     *  Constant: '<S379>/Constant3'
     *  Constant: '<S379>/Constant4'
     *  Constant: '<S379>/Constant5'
     *  Constant: '<S379>/Constant6'
     *  Constant: '<S379>/Constant7'
     *  Constant: '<S379>/Constant8'
     *  Constant: '<S379>/Constant9'
     */
    tmp[0] = 0U;
    tmp[1] = 1U;
    tmp[2] = 2U;
    tmp[3] = 3U;
    tmp[4] = 4U;
    tmp[5] = 5U;
    tmp[6] = 6U;
    tmp[7] = 7U;
    tmp[8] = 8U;
    tmp[9] = 9U;
    tmp[10] = 10U;
    tmp[11] = 11U;
    tmp[12] = 12U;
    tmp[13] = 13U;
    tmp[14] = 14U;
    tmp[15] = 15U;

    /* Assignment: '<S371>/ArrayAssignment' incorporates:
     *  Switch: '<S371>/Switch2'
     */
    for (i = 0; i < 16; i++)
    {
        /* Switch: '<S371>/Switch1' */
        if (rtb_TmpSignalConversionAtLeM_et)
        {
            rtb_TmpSignalConversionAtLe_lal = rtb_TmpSignalConversionAtLeM_ge;
        }
        else
        {
            rtb_TmpSignalConversionAtLe_lal = tmp[i];
        }

        VaMTIC_b_MtrBSpdCpbltyRcvdArr[(rtb_TmpSignalConversionAtLe_lal)] =
            rtb_TmpSignalConversionAtLeM_et;
    }

    /* End of Assignment: '<S371>/ArrayAssignment' */

    /* Outputs for Atomic SubSystem: '<S371>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S386>/EdgeRising' */
    /* Logic: '<S387>/AND' incorporates:
     *  Logic: '<S387>/OR1'
     *  UnitDelay: '<S387>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_kx = (rtb_TmpSignalConversionAtLeM_et &&
        (!MTIR_ac_DW.UnitDelay_DSTATE_bw));

    /* Update for UnitDelay: '<S387>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_bw = rtb_TmpSignalConversionAtLeM_et;

    /* End of Outputs for SubSystem: '<S386>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S371>/EdgeRising3' */
    /* Logic: '<S386>/OR1' incorporates:
     *  Logic: '<S382>/AND'
     */
    rtb_TmpSignalConversionAtLeM_b1 = !rtb_TmpSignalConversionAtLeM_et;

    /* End of Outputs for SubSystem: '<S371>/EdgeRising3' */

    /* Switch: '<S386>/Switch1' incorporates:
     *  Constant: '<S383>/Calib'
     *  Constant: '<S386>/Constant Value'
     *  Logic: '<S386>/OR'
     *  Logic: '<S386>/OR1'
     *  MinMax: '<S386>/Minimum'
     *  Sum: '<S386>/Summation'
     *  UnitDelay: '<S386>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeM_b1 || rtb_TmpSignalConversionAtLeM_kx)
    {
        /* Switch: '<S386>/Switch1' incorporates:
         *  Constant: '<S386>/Constant Value1'
         */
        rtb_Switch1_eb = 0U;
    }
    else if (KeMTIR_Cnt_MtrAMaxCpbltyMnWtTm < ((uint16)(((uint32)
                MTIR_ac_DW.UnitDelay_DSTATE_d5) + 1U)))
    {
        /* MinMax: '<S386>/Minimum' incorporates:
         *  Constant: '<S383>/Calib'
         *  Switch: '<S386>/Switch1'
         */
        rtb_Switch1_eb = KeMTIR_Cnt_MtrAMaxCpbltyMnWtTm;
    }
    else
    {
        /* Switch: '<S386>/Switch1' incorporates:
         *  Constant: '<S386>/Constant Value'
         *  MinMax: '<S386>/Minimum'
         *  Sum: '<S386>/Summation'
         *  UnitDelay: '<S386>/Unit Delay'
         */
        rtb_Switch1_eb = (uint16)(((uint32)MTIR_ac_DW.UnitDelay_DSTATE_d5) + 1U);
    }

    /* End of Switch: '<S386>/Switch1' */

    /* Logic: '<S386>/AND' incorporates:
     *  Constant: '<S383>/Calib'
     *  RelationalOperator: '<S386>/Greater  Than'
     */
    VeMTIC_b_MtrBSpdSgnlRcvdDlyd = (rtb_TmpSignalConversionAtLeM_et &&
        (rtb_Switch1_eb >= KeMTIR_Cnt_MtrAMaxCpbltyMnWtTm));

    /* Update for UnitDelay: '<S386>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_d5 = rtb_Switch1_eb;

    /* End of Outputs for SubSystem: '<S371>/Turn On Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S371>/EdgeRising1' */
    /* Logic: '<S380>/OR1' incorporates:
     *  UnitDelay: '<S380>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_kx = !MTIR_ac_DW.UnitDelay_DSTATE_la;

    /* Update for UnitDelay: '<S380>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_la = VeMTIC_b_MtrBSpdSgnlRcvdDlyd;

    /* End of Outputs for SubSystem: '<S371>/EdgeRising1' */

    /* Logic: '<S371>/Logical' */
    rtb_TmpSignalConversionAtLeM_jo = VaMTIC_b_MtrBSpdCpbltyRcvdArr[0];
    for (i = 0; i < 15; i++)
    {
        rtb_TmpSignalConversionAtLeM_jo = (rtb_TmpSignalConversionAtLeM_jo &&
            (VaMTIC_b_MtrBSpdCpbltyRcvdArr[i + 1]));
    }

    /* Logic: '<S371>/Logical7' incorporates:
     *  Constant: '<S384>/Calib'
     *  Logic: '<S371>/Logical'
     */
    rtb_TmpSignalConversionAtLeM_m2 = (rtb_TmpSignalConversionAtLeM_jo &&
        (KeMTIR_b_EnMtrBArrUpdtOnArrRcvd));

    /* Outputs for Atomic SubSystem: '<S371>/EdgeRising2' */
    /* Logic: '<S381>/OR1' incorporates:
     *  UnitDelay: '<S381>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_ih = !MTIR_ac_DW.UnitDelay_DSTATE_ot;

    /* Update for UnitDelay: '<S381>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_ot = rtb_TmpSignalConversionAtLeM_m2;

    /* End of Outputs for SubSystem: '<S371>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S371>/EdgeRising3' */
    /* Logic: '<S382>/OR1' incorporates:
     *  UnitDelay: '<S382>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_bc = !MTIR_ac_DW.UnitDelay_DSTATE_oa;

    /* Update for UnitDelay: '<S382>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_oa = rtb_TmpSignalConversionAtLeM_et;

    /* End of Outputs for SubSystem: '<S371>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S371>/EdgeRising1' */
    /* Outputs for Atomic SubSystem: '<S371>/EdgeRising2' */
    /* Logic: '<S371>/Logical1' incorporates:
     *  Logic: '<S380>/AND'
     *  Logic: '<S381>/AND'
     */
    VeMTIC_b_MtrBSpdSgnlRcvdEn = (((VeMTIC_b_MtrBSpdSgnlRcvdDlyd) &&
        rtb_TmpSignalConversionAtLeM_kx) || (rtb_TmpSignalConversionAtLeM_m2 &&
        rtb_TmpSignalConversionAtLeM_ih));

    /* End of Outputs for SubSystem: '<S371>/EdgeRising2' */
    /* End of Outputs for SubSystem: '<S371>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S371>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S371>/EdgeRising3' */
    /* Logic: '<S385>/OR1' incorporates:
     *  Logic: '<S382>/AND'
     *  Logic: '<S385>/NOT'
     *  Logic: '<S385>/OR'
     *  UnitDelay: '<S385>/Unit Delay'
     */
    VeMTIC_b_MtrBSpdSgnlRcvdEnLatch = ((VeMTIC_b_MtrBSpdSgnlRcvdEn) ||
        ((rtb_TmpSignalConversionAtLeM_b1 || (!rtb_TmpSignalConversionAtLeM_bc))
         && (MTIR_ac_DW.UnitDelay_DSTATE_ps)));

    /* End of Outputs for SubSystem: '<S371>/EdgeRising3' */

    /* Update for UnitDelay: '<S385>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_ps = VeMTIC_b_MtrBSpdSgnlRcvdEnLatch;

    /* End of Outputs for SubSystem: '<S371>/Signal Latch On With Reset' */

    /* Logic: '<S303>/Logical10' incorporates:
     *  Logic: '<S303>/Logical2'
     *  Logic: '<S303>/Logical3'
     *  Logic: '<S303>/Logical8'
     *  Logic: '<S303>/Logical9'
     *  UnitDelay: '<S303>/Unit Delay1'
     */
    VeMTIC_b_MtrBSpdArrayUpdateEn = (((VeMTIC_b_MtrBSpdSgnlRcvdEn) &&
        (!MTIR_ac_DW.UnitDelay1_DSTATE_hl)) ||
        (((VeMTIC_b_MtrBSpdSgnlRcvdEnLatch) || rtb_TmpSignalConversionAtLeM_k0) &&
         (VeMTIC_b_MtrBSpdVoltEn)));

    /* Outputs for Enabled SubSystem: '<S303>/Multiply' incorporates:
     *  EnablePort: '<S373>/Enable'
     */
    if (VeMTIC_b_MtrBSpdArrayUpdateEn)
    {
        for (i = 0; i < 16; i++)
        {
            /* Product: '<S373>/Product' */
            MTIR_ac_B.Product_n[i] = rtb_TmpSignalConversionAtLaMT_d[i] *
                VeMTIC_U_MtrBVoltFinal;
        }
    }

    /* End of Outputs for SubSystem: '<S303>/Multiply' */

    /* Sum: '<S392>/Add' incorporates:
     *  Constant: '<S397>/Calib'
     *  UnitDelay: '<S399>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_ox = MTIR_ac_DW.UnitDelay_DSTATE_o +
        KeMTIR_k_MtrCpblty_LU;

    /* Sum: '<S392>/Add1' incorporates:
     *  Constant: '<S396>/Calib'
     *  UnitDelay: '<S399>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeHVTR = MTIR_ac_DW.UnitDelay_DSTATE_o +
        KeMTIR_k_MtrCpblty_LD;

    /* Outputs for Atomic SubSystem: '<S392>/Limiter' */
    /* Switch: '<S398>/Switch1' incorporates:
     *  RelationalOperator: '<S398>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtLeM_ox >= rtb_TmpSignalConversionAtLe_ohu)
    {
        /* UnitDelay: '<S435>/Unit Delay' */
        rtb_TmpSignalConversionAtLeM_ox = rtb_TmpSignalConversionAtLe_ohu;
    }

    /* End of Switch: '<S398>/Switch1' */

    /* Switch: '<S398>/Switch' incorporates:
     *  RelationalOperator: '<S398>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtLeM_ox > rtb_TmpSignalConversionAtVeHVTR)
    {
        /* Switch: '<S398>/Switch' */
        rtb_Sum3_f = rtb_TmpSignalConversionAtLeM_ox;
    }
    else
    {
        /* Switch: '<S398>/Switch' */
        rtb_Sum3_f = rtb_TmpSignalConversionAtVeHVTR;
    }

    /* End of Switch: '<S398>/Switch' */
    /* End of Outputs for SubSystem: '<S392>/Limiter' */

    /* Switch: '<S388>/Switch' incorporates:
     *  Constant: '<S393>/Calib'
     */
    if (KeMTIR_b_EnblOvrdDrtngFctr)
    {
        /* Switch: '<S388>/Switch' incorporates:
         *  Constant: '<S394>/Calib'
         */
        VeMTIC_k_MtrBMaxDrtngFctrFinal = KeMTIR_k_OverrdDrtngFctr;
    }
    else
    {
        /* Switch: '<S388>/Switch' */
        VeMTIC_k_MtrBMaxDrtngFctrFinal = rtb_Sum3_f;
    }

    /* End of Switch: '<S388>/Switch' */

    /* Outputs for Atomic SubSystem: '<S395>/Accumulator Reset' */
    /* Switch: '<S400>/Switch1' incorporates:
     *  UnitDelay: '<S395>/Unit Delay5'
     */
    if (MTIR_ac_DW.UnitDelay5_DSTATE_mw)
    {
        /* Switch: '<S400>/Switch1' incorporates:
         *  Constant: '<S395>/Constant Value'
         */
        rtb_TmpSignalConversionAtVeHVTR = 0.0F;
    }
    else
    {
        /* Switch: '<S400>/Switch1' incorporates:
         *  Sum: '<S388>/Sum1'
         *  Sum: '<S400>/Summation'
         *  UnitDelay: '<S388>/Unit Delay4'
         *  UnitDelay: '<S400>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeHVTR = (VeMTIC_k_MtrBMaxDrtngFctrFinal -
            MTIR_ac_DW.UnitDelay4_DSTATE_b) + MTIR_ac_DW.UnitDelay_DSTATE_n0;
    }

    /* End of Switch: '<S400>/Switch1' */

    /* Update for UnitDelay: '<S400>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_n0 = rtb_TmpSignalConversionAtVeHVTR;

    /* End of Outputs for SubSystem: '<S395>/Accumulator Reset' */

    /* Logic: '<S395>/Logical2' incorporates:
     *  Constant: '<S401>/Calib'
     *  Gain: '<S395>/Gain'
     *  RelationalOperator: '<S395>/Relational Operator'
     *  RelationalOperator: '<S395>/Relational Operator1'
     */
    VeMTIC_b_MtrBMaxDrtFctEn = ((rtb_TmpSignalConversionAtVeHVTR <
        (-KeMTIR_r_DrtngChngThrshld)) || (rtb_TmpSignalConversionAtVeHVTR >
        KeMTIR_r_DrtngChngThrshld));

    /* Switch: '<S389>/Switch1' incorporates:
     *  Constant: '<S402>/Constant'
     *  Constant: '<S402>/Constant1'
     *  Constant: '<S402>/Constant10'
     *  Constant: '<S402>/Constant11'
     *  Constant: '<S402>/Constant12'
     *  Constant: '<S402>/Constant13'
     *  Constant: '<S402>/Constant14'
     *  Constant: '<S402>/Constant15'
     *  Constant: '<S402>/Constant2'
     *  Constant: '<S402>/Constant3'
     *  Constant: '<S402>/Constant4'
     *  Constant: '<S402>/Constant5'
     *  Constant: '<S402>/Constant6'
     *  Constant: '<S402>/Constant7'
     *  Constant: '<S402>/Constant8'
     *  Constant: '<S402>/Constant9'
     */
    tmp[0] = 0U;
    tmp[1] = 1U;
    tmp[2] = 2U;
    tmp[3] = 3U;
    tmp[4] = 4U;
    tmp[5] = 5U;
    tmp[6] = 6U;
    tmp[7] = 7U;
    tmp[8] = 8U;
    tmp[9] = 9U;
    tmp[10] = 10U;
    tmp[11] = 11U;
    tmp[12] = 12U;
    tmp[13] = 13U;
    tmp[14] = 14U;
    tmp[15] = 15U;

    /* Assignment: '<S389>/ArrayAssignment' incorporates:
     *  Switch: '<S389>/Switch2'
     */
    for (i = 0; i < 16; i++)
    {
        /* Switch: '<S389>/Switch1' */
        if (rtb_TmpSignalConversionAtLe_lcm)
        {
            rtb_TmpSignalConversionAtLe_lal = rtb_TmpSignalConversionAtLeM_ge;
        }
        else
        {
            rtb_TmpSignalConversionAtLe_lal = tmp[i];
        }

        VaMTIC_b_MtrBMaxCpbltyRcvdArr[(rtb_TmpSignalConversionAtLe_lal)] =
            rtb_TmpSignalConversionAtLe_lcm;
    }

    /* End of Assignment: '<S389>/ArrayAssignment' */

    /* Logic: '<S389>/Logical3' */
    rtb_TmpSignalConversionAtLe_lcm = (rtb_TmpSignalConversionAtLeM_iu ||
        rtb_TmpSignalConversionAtLe_lcm);

    /* Outputs for Atomic SubSystem: '<S389>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S409>/EdgeRising' */
    /* Logic: '<S410>/AND' incorporates:
     *  Logic: '<S410>/OR1'
     *  UnitDelay: '<S410>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_et = (rtb_TmpSignalConversionAtLe_lcm &&
        (!MTIR_ac_DW.UnitDelay_DSTATE_cl));

    /* Update for UnitDelay: '<S410>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_cl = rtb_TmpSignalConversionAtLe_lcm;

    /* End of Outputs for SubSystem: '<S409>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S389>/EdgeRising3' */
    /* Logic: '<S409>/OR1' incorporates:
     *  Logic: '<S405>/AND'
     */
    rtb_TmpSignalConversionAtLeM_b1 = !rtb_TmpSignalConversionAtLe_lcm;

    /* End of Outputs for SubSystem: '<S389>/EdgeRising3' */

    /* Switch: '<S409>/Switch1' incorporates:
     *  Constant: '<S406>/Calib'
     *  Constant: '<S409>/Constant Value'
     *  Logic: '<S409>/OR'
     *  Logic: '<S409>/OR1'
     *  MinMax: '<S409>/Minimum'
     *  Sum: '<S409>/Summation'
     *  UnitDelay: '<S409>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeM_b1 || rtb_TmpSignalConversionAtLeM_et)
    {
        /* Switch: '<S409>/Switch1' incorporates:
         *  Constant: '<S409>/Constant Value1'
         */
        rtb_Switch1_eb = 0U;
    }
    else if (KeMTIR_Cnt_MtrAMaxCpbltyMnWtTm < ((uint16)(((uint32)
                MTIR_ac_DW.UnitDelay_DSTATE_ft5) + 1U)))
    {
        /* MinMax: '<S409>/Minimum' incorporates:
         *  Constant: '<S406>/Calib'
         *  Switch: '<S409>/Switch1'
         */
        rtb_Switch1_eb = KeMTIR_Cnt_MtrAMaxCpbltyMnWtTm;
    }
    else
    {
        /* Switch: '<S409>/Switch1' incorporates:
         *  Constant: '<S409>/Constant Value'
         *  MinMax: '<S409>/Minimum'
         *  Sum: '<S409>/Summation'
         *  UnitDelay: '<S409>/Unit Delay'
         */
        rtb_Switch1_eb = (uint16)(((uint32)MTIR_ac_DW.UnitDelay_DSTATE_ft5) + 1U);
    }

    /* End of Switch: '<S409>/Switch1' */

    /* Logic: '<S409>/AND' incorporates:
     *  Constant: '<S406>/Calib'
     *  RelationalOperator: '<S409>/Greater  Than'
     */
    VeMTIC_b_MtrBMaxSgnlRcvdDlyd = (rtb_TmpSignalConversionAtLe_lcm &&
        (rtb_Switch1_eb >= KeMTIR_Cnt_MtrAMaxCpbltyMnWtTm));

    /* Update for UnitDelay: '<S409>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_ft5 = rtb_Switch1_eb;

    /* End of Outputs for SubSystem: '<S389>/Turn On Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S389>/EdgeRising1' */
    /* Logic: '<S403>/OR1' incorporates:
     *  UnitDelay: '<S403>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_et = !MTIR_ac_DW.UnitDelay_DSTATE_fa;

    /* Update for UnitDelay: '<S403>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_fa = VeMTIC_b_MtrBMaxSgnlRcvdDlyd;

    /* End of Outputs for SubSystem: '<S389>/EdgeRising1' */

    /* Logic: '<S389>/Logical' */
    rtb_TmpSignalConversionAtLeM_jo = VaMTIC_b_MtrBMaxCpbltyRcvdArr[0];
    for (i = 0; i < 15; i++)
    {
        rtb_TmpSignalConversionAtLeM_jo = (rtb_TmpSignalConversionAtLeM_jo &&
            (VaMTIC_b_MtrBMaxCpbltyRcvdArr[i + 1]));
    }

    /* Logic: '<S389>/Logical7' incorporates:
     *  Constant: '<S407>/Calib'
     *  Logic: '<S389>/Logical'
     */
    rtb_TmpSignalConversionAtLeM_kx = ((rtb_TmpSignalConversionAtLeM_iu &&
        rtb_TmpSignalConversionAtLeM_jo) && (KeMTIR_b_EnMtrBArrUpdtOnArrRcvd));

    /* Outputs for Atomic SubSystem: '<S389>/EdgeRising2' */
    /* Logic: '<S404>/OR1' incorporates:
     *  UnitDelay: '<S404>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_m2 = !MTIR_ac_DW.UnitDelay_DSTATE_jn;

    /* Update for UnitDelay: '<S404>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_jn = rtb_TmpSignalConversionAtLeM_kx;

    /* End of Outputs for SubSystem: '<S389>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S389>/EdgeRising3' */
    /* Logic: '<S405>/OR1' incorporates:
     *  UnitDelay: '<S405>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_ih = !MTIR_ac_DW.UnitDelay_DSTATE_gbr;

    /* Update for UnitDelay: '<S405>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_gbr = rtb_TmpSignalConversionAtLe_lcm;

    /* End of Outputs for SubSystem: '<S389>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S389>/EdgeRising1' */
    /* Outputs for Atomic SubSystem: '<S389>/EdgeRising2' */
    /* Logic: '<S389>/Logical1' incorporates:
     *  Logic: '<S403>/AND'
     *  Logic: '<S404>/AND'
     */
    VeMTIC_b_MtrBMaxSgnlRcvdEn = (((VeMTIC_b_MtrBMaxSgnlRcvdDlyd) &&
        rtb_TmpSignalConversionAtLeM_et) || (rtb_TmpSignalConversionAtLeM_kx &&
        rtb_TmpSignalConversionAtLeM_m2));

    /* End of Outputs for SubSystem: '<S389>/EdgeRising2' */
    /* End of Outputs for SubSystem: '<S389>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S389>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S389>/EdgeRising3' */
    /* Logic: '<S408>/OR1' incorporates:
     *  Logic: '<S405>/AND'
     *  Logic: '<S408>/NOT'
     *  Logic: '<S408>/OR'
     *  UnitDelay: '<S408>/Unit Delay'
     */
    VeMTIC_b_MtrBMaxSgnlRcvdEnLatch = ((VeMTIC_b_MtrBMaxSgnlRcvdEn) ||
        ((rtb_TmpSignalConversionAtLeM_b1 || (!rtb_TmpSignalConversionAtLeM_ih))
         && (MTIR_ac_DW.UnitDelay_DSTATE_nh)));

    /* End of Outputs for SubSystem: '<S389>/EdgeRising3' */

    /* Update for UnitDelay: '<S408>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_nh = VeMTIC_b_MtrBMaxSgnlRcvdEnLatch;

    /* End of Outputs for SubSystem: '<S389>/Signal Latch On With Reset' */

    /* Logic: '<S304>/Logical10' incorporates:
     *  Logic: '<S304>/Logical2'
     *  Logic: '<S304>/Logical3'
     *  Logic: '<S304>/Logical8'
     *  Logic: '<S304>/Logical9'
     *  UnitDelay: '<S304>/Unit Delay1'
     */
    VeMTIC_b_MtrBMaxArrayUpdateEn = (((VeMTIC_b_MtrBMaxSgnlRcvdEn) &&
        (!MTIR_ac_DW.UnitDelay1_DSTATE_an)) ||
        (((VeMTIC_b_MtrBMaxSgnlRcvdEnLatch) || rtb_TmpSignalConversionAtLeM_k0) &&
         (VeMTIC_b_MtrBMaxDrtFctEn)));

    /* Outputs for Enabled SubSystem: '<S304>/Multiply' incorporates:
     *  EnablePort: '<S391>/Enable'
     */
    if (VeMTIC_b_MtrBMaxArrayUpdateEn)
    {
        for (i = 0; i < 16; i++)
        {
            /* Product: '<S391>/Product' */
            MTIR_ac_B.Product_d[i] = rtb_TmpSignalConversionAtLaM_jk[i] *
                VeMTIC_k_MtrBMaxDrtngFctrFinal;
        }
    }

    /* End of Outputs for SubSystem: '<S304>/Multiply' */

    /* Sum: '<S415>/Add' incorporates:
     *  Constant: '<S420>/Calib'
     *  UnitDelay: '<S422>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_ox = MTIR_ac_DW.UnitDelay_DSTATE_k +
        KeMTIR_k_MtrCpblty_LU;

    /* Sum: '<S415>/Add1' incorporates:
     *  Constant: '<S419>/Calib'
     *  UnitDelay: '<S422>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeHVTR = MTIR_ac_DW.UnitDelay_DSTATE_k +
        KeMTIR_k_MtrCpblty_LD;

    /* Outputs for Atomic SubSystem: '<S415>/Limiter' */
    /* Switch: '<S421>/Switch1' incorporates:
     *  RelationalOperator: '<S421>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtLeM_ox >= rtb_TmpSignalConversionAtLe_ohu)
    {
        /* UnitDelay: '<S435>/Unit Delay' */
        rtb_TmpSignalConversionAtLeM_ox = rtb_TmpSignalConversionAtLe_ohu;
    }

    /* End of Switch: '<S421>/Switch1' */

    /* Switch: '<S421>/Switch' incorporates:
     *  RelationalOperator: '<S421>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtLeM_ox > rtb_TmpSignalConversionAtVeHVTR)
    {
        /* Switch: '<S421>/Switch' */
        rtb_TmpSignalConversionAtLeM_ky = rtb_TmpSignalConversionAtLeM_ox;
    }
    else
    {
        /* Switch: '<S421>/Switch' */
        rtb_TmpSignalConversionAtLeM_ky = rtb_TmpSignalConversionAtVeHVTR;
    }

    /* End of Switch: '<S421>/Switch' */
    /* End of Outputs for SubSystem: '<S415>/Limiter' */

    /* Switch: '<S411>/Switch' incorporates:
     *  Constant: '<S416>/Calib'
     */
    if (KeMTIR_b_EnblOvrdDrtngFctr)
    {
        /* Switch: '<S411>/Switch' incorporates:
         *  Constant: '<S417>/Calib'
         */
        VeMTIC_k_MtrBMinDrtngFctrFinal = KeMTIR_k_OverrdDrtngFctr;
    }
    else
    {
        /* Switch: '<S411>/Switch' */
        VeMTIC_k_MtrBMinDrtngFctrFinal = rtb_TmpSignalConversionAtLeM_ky;
    }

    /* End of Switch: '<S411>/Switch' */

    /* Outputs for Atomic SubSystem: '<S418>/Accumulator Reset' */
    /* Switch: '<S423>/Switch1' incorporates:
     *  UnitDelay: '<S418>/Unit Delay5'
     */
    if (MTIR_ac_DW.UnitDelay5_DSTATE_a3)
    {
        /* Switch: '<S423>/Switch1' incorporates:
         *  Constant: '<S418>/Constant Value'
         */
        rtb_TmpSignalConversionAtVeHVTR = 0.0F;
    }
    else
    {
        /* Switch: '<S423>/Switch1' incorporates:
         *  Sum: '<S411>/Sum1'
         *  Sum: '<S423>/Summation'
         *  UnitDelay: '<S411>/Unit Delay4'
         *  UnitDelay: '<S423>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeHVTR = (VeMTIC_k_MtrBMinDrtngFctrFinal -
            MTIR_ac_DW.UnitDelay4_DSTATE_hv) + MTIR_ac_DW.UnitDelay_DSTATE_fe;
    }

    /* End of Switch: '<S423>/Switch1' */

    /* Update for UnitDelay: '<S423>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_fe = rtb_TmpSignalConversionAtVeHVTR;

    /* End of Outputs for SubSystem: '<S418>/Accumulator Reset' */

    /* Logic: '<S418>/Logical2' incorporates:
     *  Constant: '<S424>/Calib'
     *  Gain: '<S418>/Gain'
     *  RelationalOperator: '<S418>/Relational Operator'
     *  RelationalOperator: '<S418>/Relational Operator1'
     */
    VeMTIC_b_MtrBMinDrtFctEn = ((rtb_TmpSignalConversionAtVeHVTR <
        (-KeMTIR_r_DrtngChngThrshld)) || (rtb_TmpSignalConversionAtVeHVTR >
        KeMTIR_r_DrtngChngThrshld));

    /* Switch: '<S412>/Switch1' incorporates:
     *  Constant: '<S425>/Constant'
     *  Constant: '<S425>/Constant1'
     *  Constant: '<S425>/Constant10'
     *  Constant: '<S425>/Constant11'
     *  Constant: '<S425>/Constant12'
     *  Constant: '<S425>/Constant13'
     *  Constant: '<S425>/Constant14'
     *  Constant: '<S425>/Constant15'
     *  Constant: '<S425>/Constant2'
     *  Constant: '<S425>/Constant3'
     *  Constant: '<S425>/Constant4'
     *  Constant: '<S425>/Constant5'
     *  Constant: '<S425>/Constant6'
     *  Constant: '<S425>/Constant7'
     *  Constant: '<S425>/Constant8'
     *  Constant: '<S425>/Constant9'
     */
    tmp[0] = 0U;
    tmp[1] = 1U;
    tmp[2] = 2U;
    tmp[3] = 3U;
    tmp[4] = 4U;
    tmp[5] = 5U;
    tmp[6] = 6U;
    tmp[7] = 7U;
    tmp[8] = 8U;
    tmp[9] = 9U;
    tmp[10] = 10U;
    tmp[11] = 11U;
    tmp[12] = 12U;
    tmp[13] = 13U;
    tmp[14] = 14U;
    tmp[15] = 15U;

    /* Assignment: '<S412>/ArrayAssignment' incorporates:
     *  Switch: '<S412>/Switch2'
     */
    for (i = 0; i < 16; i++)
    {
        /* Switch: '<S412>/Switch1' */
        if (rtb_TmpSignalConversionAtLeM_gk)
        {
            rtb_TmpSignalConversionAtLe_lal = rtb_TmpSignalConversionAtLeM_ge;
        }
        else
        {
            rtb_TmpSignalConversionAtLe_lal = tmp[i];
        }

        VaMTIC_b_MtrBMinCpbltyRcvdArr[(rtb_TmpSignalConversionAtLe_lal)] =
            rtb_TmpSignalConversionAtLeM_gk;
    }

    /* End of Assignment: '<S412>/ArrayAssignment' */

    /* Logic: '<S412>/Logical3' */
    rtb_TmpSignalConversionAtLeM_gk = (rtb_TmpSignalConversionAtLeM_iu ||
        rtb_TmpSignalConversionAtLeM_gk);

    /* Outputs for Atomic SubSystem: '<S412>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S432>/EdgeRising' */
    /* Logic: '<S433>/AND' incorporates:
     *  Logic: '<S433>/OR1'
     *  UnitDelay: '<S433>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLe_lcm = (rtb_TmpSignalConversionAtLeM_gk &&
        (!MTIR_ac_DW.UnitDelay_DSTATE_a4));

    /* Update for UnitDelay: '<S433>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_a4 = rtb_TmpSignalConversionAtLeM_gk;

    /* End of Outputs for SubSystem: '<S432>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S412>/EdgeRising3' */
    /* Logic: '<S432>/OR1' incorporates:
     *  Logic: '<S428>/AND'
     */
    rtb_TmpSignalConversionAtLeM_b1 = !rtb_TmpSignalConversionAtLeM_gk;

    /* End of Outputs for SubSystem: '<S412>/EdgeRising3' */

    /* Switch: '<S432>/Switch1' incorporates:
     *  Constant: '<S429>/Calib'
     *  Constant: '<S432>/Constant Value'
     *  Logic: '<S432>/OR'
     *  Logic: '<S432>/OR1'
     *  MinMax: '<S432>/Minimum'
     *  Sum: '<S432>/Summation'
     *  UnitDelay: '<S432>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeM_b1 || rtb_TmpSignalConversionAtLe_lcm)
    {
        /* Switch: '<S432>/Switch1' incorporates:
         *  Constant: '<S432>/Constant Value1'
         */
        rtb_Switch1_eb = 0U;
    }
    else if (KeMTIR_Cnt_MtrAMaxCpbltyMnWtTm < ((uint16)(((uint32)
                MTIR_ac_DW.UnitDelay_DSTATE_bp) + 1U)))
    {
        /* MinMax: '<S432>/Minimum' incorporates:
         *  Constant: '<S429>/Calib'
         *  Switch: '<S432>/Switch1'
         */
        rtb_Switch1_eb = KeMTIR_Cnt_MtrAMaxCpbltyMnWtTm;
    }
    else
    {
        /* Switch: '<S432>/Switch1' incorporates:
         *  Constant: '<S432>/Constant Value'
         *  MinMax: '<S432>/Minimum'
         *  Sum: '<S432>/Summation'
         *  UnitDelay: '<S432>/Unit Delay'
         */
        rtb_Switch1_eb = (uint16)(((uint32)MTIR_ac_DW.UnitDelay_DSTATE_bp) + 1U);
    }

    /* End of Switch: '<S432>/Switch1' */

    /* Logic: '<S432>/AND' incorporates:
     *  Constant: '<S429>/Calib'
     *  RelationalOperator: '<S432>/Greater  Than'
     */
    VeMTIC_b_MtrBMinSgnlRcvdDlyd = (rtb_TmpSignalConversionAtLeM_gk &&
        (rtb_Switch1_eb >= KeMTIR_Cnt_MtrAMaxCpbltyMnWtTm));

    /* Update for UnitDelay: '<S432>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_bp = rtb_Switch1_eb;

    /* End of Outputs for SubSystem: '<S412>/Turn On Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S412>/EdgeRising1' */
    /* Logic: '<S426>/OR1' incorporates:
     *  UnitDelay: '<S426>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLe_lcm = !MTIR_ac_DW.UnitDelay_DSTATE_it;

    /* Update for UnitDelay: '<S426>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_it = VeMTIC_b_MtrBMinSgnlRcvdDlyd;

    /* End of Outputs for SubSystem: '<S412>/EdgeRising1' */

    /* Logic: '<S412>/Logical' */
    rtb_TmpSignalConversionAtLeM_jo = VaMTIC_b_MtrBMinCpbltyRcvdArr[0];
    for (i = 0; i < 15; i++)
    {
        rtb_TmpSignalConversionAtLeM_jo = (rtb_TmpSignalConversionAtLeM_jo &&
            (VaMTIC_b_MtrBMinCpbltyRcvdArr[i + 1]));
    }

    /* Logic: '<S412>/Logical7' incorporates:
     *  Constant: '<S430>/Calib'
     *  Logic: '<S412>/Logical'
     */
    rtb_TmpSignalConversionAtLeM_iu = ((rtb_TmpSignalConversionAtLeM_iu &&
        rtb_TmpSignalConversionAtLeM_jo) && (KeMTIR_b_EnMtrBArrUpdtOnArrRcvd));

    /* Outputs for Atomic SubSystem: '<S412>/EdgeRising2' */
    /* Logic: '<S427>/OR1' incorporates:
     *  UnitDelay: '<S427>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_et = !MTIR_ac_DW.UnitDelay_DSTATE_c2;

    /* Update for UnitDelay: '<S427>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_c2 = rtb_TmpSignalConversionAtLeM_iu;

    /* End of Outputs for SubSystem: '<S412>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S412>/EdgeRising3' */
    /* Logic: '<S428>/OR1' incorporates:
     *  UnitDelay: '<S428>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_kx = !MTIR_ac_DW.UnitDelay_DSTATE_e2;

    /* Update for UnitDelay: '<S428>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_e2 = rtb_TmpSignalConversionAtLeM_gk;

    /* End of Outputs for SubSystem: '<S412>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S412>/EdgeRising1' */
    /* Outputs for Atomic SubSystem: '<S412>/EdgeRising2' */
    /* Logic: '<S412>/Logical1' incorporates:
     *  Logic: '<S426>/AND'
     *  Logic: '<S427>/AND'
     */
    VeMTIC_b_MtrBMinSgnlRcvdEn = (((VeMTIC_b_MtrBMinSgnlRcvdDlyd) &&
        rtb_TmpSignalConversionAtLe_lcm) || (rtb_TmpSignalConversionAtLeM_iu &&
        rtb_TmpSignalConversionAtLeM_et));

    /* End of Outputs for SubSystem: '<S412>/EdgeRising2' */
    /* End of Outputs for SubSystem: '<S412>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S412>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S412>/EdgeRising3' */
    /* Logic: '<S431>/OR1' incorporates:
     *  Logic: '<S428>/AND'
     *  Logic: '<S431>/NOT'
     *  Logic: '<S431>/OR'
     *  UnitDelay: '<S431>/Unit Delay'
     */
    VeMTIC_b_MtrBMinSgnlRcvdEnLatch = ((VeMTIC_b_MtrBMinSgnlRcvdEn) ||
        ((rtb_TmpSignalConversionAtLeM_b1 || (!rtb_TmpSignalConversionAtLeM_kx))
         && (MTIR_ac_DW.UnitDelay_DSTATE_pi)));

    /* End of Outputs for SubSystem: '<S412>/EdgeRising3' */

    /* Update for UnitDelay: '<S431>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_pi = VeMTIC_b_MtrBMinSgnlRcvdEnLatch;

    /* End of Outputs for SubSystem: '<S412>/Signal Latch On With Reset' */

    /* Logic: '<S305>/Logical10' incorporates:
     *  Logic: '<S305>/Logical2'
     *  Logic: '<S305>/Logical3'
     *  Logic: '<S305>/Logical8'
     *  Logic: '<S305>/Logical9'
     *  UnitDelay: '<S305>/Unit Delay1'
     */
    VeMTIC_b_MtrBMinArrayUpdateEn = (((VeMTIC_b_MtrBMinSgnlRcvdEn) &&
        (!MTIR_ac_DW.UnitDelay1_DSTATE_le)) ||
        (((VeMTIC_b_MtrBMinSgnlRcvdEnLatch) || rtb_TmpSignalConversionAtLeM_k0) &&
         (VeMTIC_b_MtrBMinDrtFctEn)));

    /* Outputs for Enabled SubSystem: '<S305>/Multiply' incorporates:
     *  EnablePort: '<S414>/Enable'
     */
    if (VeMTIC_b_MtrBMinArrayUpdateEn)
    {
        for (i = 0; i < 16; i++)
        {
            /* Product: '<S414>/Product' */
            MTIR_ac_B.Product_e[i] = rtb_TmpSignalConversionAtLaM_pp[i] *
                VeMTIC_k_MtrBMinDrtngFctrFinal;
        }
    }

    /* End of Outputs for SubSystem: '<S305>/Multiply' */

    /* SignalConversion generated from: '<S29>/VeMTIC_k_MtrCDrtngFctrPrePrcssd' incorporates:
     *  Gain: '<S130>/Gain'
     *  Outport: '<Root>/VeMTIR_k_MtrCDrtngFctr'
     */
    (void)Rte_Write_VeMTIR_k_MtrCDrtngFctr_Value(rtb_Switch1_od);

    /* Outputs for Atomic SubSystem: '<S127>/Limiter' */
    /* Switch: '<S475>/Switch1' incorporates:
     *  Constant: '<S471>/Calib'
     *  RelationalOperator: '<S475>/Relational Operator'
     */
    if (KeMTIR_M_MtrBTrqAchieved_MaxLmt < rtb_TmpSignalConversionAtLeM_mi)
    {
        /* Switch: '<S448>/Switch1' */
        rtb_Switch1_od = KeMTIR_M_MtrBTrqAchieved_MaxLmt;
    }
    else
    {
        /* Switch: '<S448>/Switch1' */
        rtb_Switch1_od = rtb_TmpSignalConversionAtLeM_mi;
    }

    /* End of Switch: '<S475>/Switch1' */

    /* Switch: '<S475>/Switch' incorporates:
     *  Constant: '<S472>/Calib'
     *  RelationalOperator: '<S475>/Relational Operator1'
     */
    if (rtb_Switch1_od > KeMTIR_M_MtrBTrqAchieved_MinLmt)
    {
        /* Switch: '<S475>/Switch' */
        rtb_TmpSignalConversionAtLeM_mi = rtb_Switch1_od;
    }
    else
    {
        /* Switch: '<S475>/Switch' */
        rtb_TmpSignalConversionAtLeM_mi = KeMTIR_M_MtrBTrqAchieved_MinLmt;
    }

    /* End of Switch: '<S475>/Switch' */
    /* End of Outputs for SubSystem: '<S127>/Limiter' */

    /* Outputs for Atomic SubSystem: '<S127>/GradientLimiter' */
    /* Switch: '<S448>/Switch1' incorporates:
     *  UnitDelay: '<S470>/Unit Delay'
     */
    rtb_Switch1_od = MTIR_ac_DW.UnitDelay_DSTATE_p;

    /* Sum: '<S470>/Sum2' */
    rtb_TmpSignalConversionAtLeM_mi -= rtb_Switch1_od;

    /* Outputs for Atomic SubSystem: '<S470>/Limiter' */
    /* Switch: '<S476>/Switch1' incorporates:
     *  Constant: '<S473>/Calib'
     *  RelationalOperator: '<S476>/Relational Operator'
     */
    if (KeMTIR_dM_MtrBTorqAchievedRate_MaxLmt < rtb_TmpSignalConversionAtLeM_mi)
    {
        /* Switch: '<S469>/Switch1' */
        rtb_Switch1_b3 = KeMTIR_dM_MtrBTorqAchievedRate_MaxLmt;
    }
    else
    {
        /* Switch: '<S469>/Switch1' */
        rtb_Switch1_b3 = rtb_TmpSignalConversionAtLeM_mi;
    }

    /* End of Switch: '<S476>/Switch1' */

    /* Switch: '<S476>/Switch' incorporates:
     *  Constant: '<S474>/Calib'
     *  RelationalOperator: '<S476>/Relational Operator1'
     */
    if (rtb_Switch1_b3 <= KeMTIR_dM_MtrBTorqAchievedRate_MinLmt)
    {
        rtb_Switch1_b3 = KeMTIR_dM_MtrBTorqAchievedRate_MinLmt;
    }

    /* End of Switch: '<S476>/Switch' */
    /* End of Outputs for SubSystem: '<S470>/Limiter' */

    /* Sum: '<S470>/Sum3' */
    VeMTIC_M_MtrB_TorqAchieved = rtb_Switch1_b3 + rtb_Switch1_od;

    /* Update for UnitDelay: '<S470>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_p = VeMTIC_M_MtrB_TorqAchieved;

    /* End of Outputs for SubSystem: '<S127>/GradientLimiter' */

    /* Outputs for Atomic SubSystem: '<S279>/EdgeRising1' */
    /* Logic: '<S282>/OR1' incorporates:
     *  UnitDelay: '<S282>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_iu = !MTIR_ac_DW.UnitDelay_DSTATE_pa4;

    /* Update for UnitDelay: '<S282>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_pa4 = rtb_TmpSignalConversionAtLeM_f4;

    /* Outputs for Atomic SubSystem: '<S279>/Count Down  Reset Enabled1' */
    /* Switch: '<S281>/Switch1' incorporates:
     *  Constant: '<S281>/Constant Value'
     *  Logic: '<S282>/AND'
     *  RelationalOperator: '<S281>/Greater  Than'
     *  Switch: '<S281>/Switch2'
     *  UnitDelay: '<S281>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeM_f4 && rtb_TmpSignalConversionAtLeM_iu)
    {
        /* Switch: '<S281>/Switch1' incorporates:
         *  Constant: '<S274>/Calib'
         */
        rtb_Switch1_eb = KeMTIR_Cnt_MtrBMaxTorqMinWaitTm;
    }
    else if (((sint32)MTIR_ac_DW.UnitDelay_DSTATE_ar) > 0)
    {
        /* Switch: '<S281>/Switch2' incorporates:
         *  Constant: '<S281>/Constant Value1'
         *  Sum: '<S281>/Subtraction'
         *  Switch: '<S281>/Switch1'
         *  UnitDelay: '<S281>/Unit Delay'
         */
        rtb_Switch1_eb = (uint16)((sint32)(((sint32)
            MTIR_ac_DW.UnitDelay_DSTATE_ar) - 1));
    }
    else
    {
        /* Switch: '<S281>/Switch1' incorporates:
         *  Switch: '<S281>/Switch2'
         *  UnitDelay: '<S281>/Unit Delay'
         */
        rtb_Switch1_eb = MTIR_ac_DW.UnitDelay_DSTATE_ar;
    }

    /* End of Switch: '<S281>/Switch1' */
    /* End of Outputs for SubSystem: '<S279>/EdgeRising1' */

    /* Update for UnitDelay: '<S281>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_ar = rtb_Switch1_eb;

    /* End of Outputs for SubSystem: '<S279>/Count Down  Reset Enabled1' */

    /* Outputs for Atomic SubSystem: '<S280>/Limiter' */
    /* Switch: '<S285>/Switch1' incorporates:
     *  Constant: '<S275>/Calib'
     *  RelationalOperator: '<S285>/Relational Operator'
     */
    if (KeMTIR_M_MtrBMaxTrq_MaxLmt < rtb_TmpSignalConversionAtLeM_mj)
    {
        /* UnitDelay: '<S435>/Unit Delay' */
        rtb_TmpSignalConversionAtLeM_ox = KeMTIR_M_MtrBMaxTrq_MaxLmt;
    }
    else
    {
        /* UnitDelay: '<S435>/Unit Delay' */
        rtb_TmpSignalConversionAtLeM_ox = rtb_TmpSignalConversionAtLeM_mj;
    }

    /* End of Switch: '<S285>/Switch1' */

    /* Switch: '<S285>/Switch' incorporates:
     *  Constant: '<S276>/Calib'
     *  RelationalOperator: '<S285>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtLeM_ox <= KeMTIR_M_MtrBMaxTrq_MinLmt)
    {
        rtb_TmpSignalConversionAtLeM_ox = KeMTIR_M_MtrBMaxTrq_MinLmt;
    }

    /* End of Switch: '<S285>/Switch' */
    /* End of Outputs for SubSystem: '<S280>/Limiter' */

    /* Outputs for Atomic SubSystem: '<S280>/GradientLimiter' */
    /* Sum: '<S284>/Sum2' incorporates:
     *  UnitDelay: '<S284>/Unit Delay'
     */
    rtb_Switch1_od = rtb_TmpSignalConversionAtLeM_ox -
        MTIR_ac_DW.UnitDelay_DSTATE_fg;

    /* Outputs for Atomic SubSystem: '<S284>/Limiter' */
    /* Switch: '<S286>/Switch1' incorporates:
     *  Constant: '<S277>/Calib'
     *  RelationalOperator: '<S286>/Relational Operator'
     */
    if (KeMTIR_dM_MtrBMaxTorqRate_MaxLmt < rtb_Switch1_od)
    {
        /* Switch: '<S448>/Switch1' */
        rtb_Switch1_od = KeMTIR_dM_MtrBMaxTorqRate_MaxLmt;
    }

    /* End of Switch: '<S286>/Switch1' */

    /* Switch: '<S286>/Switch' incorporates:
     *  Constant: '<S278>/Calib'
     *  RelationalOperator: '<S286>/Relational Operator1'
     */
    if (rtb_Switch1_od <= KeMTIR_dM_MtrBMaxTorqRate_MinLmt)
    {
        rtb_Switch1_od = KeMTIR_dM_MtrBMaxTorqRate_MinLmt;
    }

    /* End of Switch: '<S286>/Switch' */
    /* End of Outputs for SubSystem: '<S284>/Limiter' */

    /* Sum: '<S284>/Sum3' incorporates:
     *  UnitDelay: '<S284>/Unit Delay'
     */
    rtb_Switch1_od += MTIR_ac_DW.UnitDelay_DSTATE_fg;

    /* Update for UnitDelay: '<S284>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_fg = rtb_Switch1_od;

    /* End of Outputs for SubSystem: '<S280>/GradientLimiter' */

    /* Outputs for Atomic SubSystem: '<S279>/Count Down  Reset Enabled1' */
    /* Switch: '<S279>/Switch4' incorporates:
     *  Constant: '<S281>/Constant Value2'
     *  RelationalOperator: '<S281>/Greater  Than1'
     */
    if (((sint32)rtb_Switch1_eb) > 0)
    {
        /* Gain: '<S283>/Gain' incorporates:
         *  UnitDelay: '<S279>/Unit Delay'
         */
        rtb_TmpSignalConversionAtLeM_mj = MTIR_ac_DW.UnitDelay_DSTATE_kr;
    }
    else
    {
        /* Gain: '<S283>/Gain' */
        rtb_TmpSignalConversionAtLeM_mj = rtb_Switch1_od;
    }

    /* End of Switch: '<S279>/Switch4' */
    /* End of Outputs for SubSystem: '<S279>/Count Down  Reset Enabled1' */

    /* Outputs for Atomic SubSystem: '<S292>/EdgeRising1' */
    /* Logic: '<S295>/OR1' incorporates:
     *  UnitDelay: '<S295>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_f4 = !MTIR_ac_DW.UnitDelay_DSTATE_hz;

    /* Update for UnitDelay: '<S295>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_hz = rtb_TmpSignalConversionAtLeM_av;

    /* Outputs for Atomic SubSystem: '<S292>/Count Down  Reset Enabled1' */
    /* Switch: '<S294>/Switch1' incorporates:
     *  Constant: '<S294>/Constant Value'
     *  Logic: '<S295>/AND'
     *  RelationalOperator: '<S294>/Greater  Than'
     *  Switch: '<S294>/Switch2'
     *  UnitDelay: '<S294>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeM_av && rtb_TmpSignalConversionAtLeM_f4)
    {
        /* Switch: '<S294>/Switch1' incorporates:
         *  Constant: '<S287>/Calib'
         */
        rtb_Switch1_eb = KeMTIR_Cnt_MtrBMinTorqMinWaitTm;
    }
    else if (((sint32)MTIR_ac_DW.UnitDelay_DSTATE_cw) > 0)
    {
        /* Switch: '<S294>/Switch2' incorporates:
         *  Constant: '<S294>/Constant Value1'
         *  Sum: '<S294>/Subtraction'
         *  Switch: '<S294>/Switch1'
         *  UnitDelay: '<S294>/Unit Delay'
         */
        rtb_Switch1_eb = (uint16)((sint32)(((sint32)
            MTIR_ac_DW.UnitDelay_DSTATE_cw) - 1));
    }
    else
    {
        /* Switch: '<S294>/Switch1' incorporates:
         *  Switch: '<S294>/Switch2'
         *  UnitDelay: '<S294>/Unit Delay'
         */
        rtb_Switch1_eb = MTIR_ac_DW.UnitDelay_DSTATE_cw;
    }

    /* End of Switch: '<S294>/Switch1' */
    /* End of Outputs for SubSystem: '<S292>/EdgeRising1' */

    /* Update for UnitDelay: '<S294>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_cw = rtb_Switch1_eb;

    /* End of Outputs for SubSystem: '<S292>/Count Down  Reset Enabled1' */

    /* Outputs for Atomic SubSystem: '<S293>/Limiter' */
    /* Switch: '<S298>/Switch1' incorporates:
     *  Constant: '<S288>/Calib'
     *  RelationalOperator: '<S298>/Relational Operator'
     */
    if (KeMTIR_M_MtrBMinTrq_MaxLmt < rtb_TmpSignalConversionAtLeM_gv)
    {
        /* UnitDelay: '<S435>/Unit Delay' */
        rtb_TmpSignalConversionAtLeM_ox = KeMTIR_M_MtrBMinTrq_MaxLmt;
    }
    else
    {
        /* UnitDelay: '<S435>/Unit Delay' */
        rtb_TmpSignalConversionAtLeM_ox = rtb_TmpSignalConversionAtLeM_gv;
    }

    /* End of Switch: '<S298>/Switch1' */

    /* Switch: '<S298>/Switch' incorporates:
     *  Constant: '<S289>/Calib'
     *  RelationalOperator: '<S298>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtLeM_ox <= KeMTIR_M_MtrBMinTrq_MinLmt)
    {
        rtb_TmpSignalConversionAtLeM_ox = KeMTIR_M_MtrBMinTrq_MinLmt;
    }

    /* End of Switch: '<S298>/Switch' */
    /* End of Outputs for SubSystem: '<S293>/Limiter' */

    /* Outputs for Atomic SubSystem: '<S293>/GradientLimiter' */
    /* Sum: '<S297>/Sum2' incorporates:
     *  UnitDelay: '<S297>/Unit Delay'
     */
    rtb_Switch1_od = rtb_TmpSignalConversionAtLeM_ox -
        MTIR_ac_DW.UnitDelay_DSTATE_d0;

    /* Outputs for Atomic SubSystem: '<S297>/Limiter' */
    /* Switch: '<S299>/Switch1' incorporates:
     *  Constant: '<S290>/Calib'
     *  RelationalOperator: '<S299>/Relational Operator'
     */
    if (KeMTIR_dM_MtrBMinTorqRate_MaxLmt < rtb_Switch1_od)
    {
        /* Switch: '<S448>/Switch1' */
        rtb_Switch1_od = KeMTIR_dM_MtrBMinTorqRate_MaxLmt;
    }

    /* End of Switch: '<S299>/Switch1' */

    /* Switch: '<S299>/Switch' incorporates:
     *  Constant: '<S291>/Calib'
     *  RelationalOperator: '<S299>/Relational Operator1'
     */
    if (rtb_Switch1_od <= KeMTIR_dM_MtrBMinTorqRate_MinLmt)
    {
        rtb_Switch1_od = KeMTIR_dM_MtrBMinTorqRate_MinLmt;
    }

    /* End of Switch: '<S299>/Switch' */
    /* End of Outputs for SubSystem: '<S297>/Limiter' */

    /* Sum: '<S297>/Sum3' incorporates:
     *  UnitDelay: '<S297>/Unit Delay'
     */
    rtb_Switch1_od += MTIR_ac_DW.UnitDelay_DSTATE_d0;

    /* Update for UnitDelay: '<S297>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_d0 = rtb_Switch1_od;

    /* End of Outputs for SubSystem: '<S293>/GradientLimiter' */

    /* Outputs for Atomic SubSystem: '<S292>/Count Down  Reset Enabled1' */
    /* Switch: '<S292>/Switch4' incorporates:
     *  Constant: '<S294>/Constant Value2'
     *  RelationalOperator: '<S294>/Greater  Than1'
     */
    if (((sint32)rtb_Switch1_eb) > 0)
    {
        /* Gain: '<S296>/Gain' incorporates:
         *  UnitDelay: '<S292>/Unit Delay'
         */
        rtb_TmpSignalConversionAtLeM_gv = MTIR_ac_DW.UnitDelay_DSTATE_nq;
    }
    else
    {
        /* Gain: '<S296>/Gain' */
        rtb_TmpSignalConversionAtLeM_gv = rtb_Switch1_od;
    }

    /* End of Switch: '<S292>/Switch4' */
    /* End of Outputs for SubSystem: '<S292>/Count Down  Reset Enabled1' */

    /* Outputs for Atomic SubSystem: '<S126>/Limiter' */
    /* Switch: '<S468>/Switch1' incorporates:
     *  Constant: '<S464>/Calib'
     *  RelationalOperator: '<S468>/Relational Operator'
     */
    if (KeMTIR_M_MtrBTrqAchieved_AEMD_MaxLmt < rtb_TmpSignalConversionAtLe_csn)
    {
        /* Switch: '<S448>/Switch1' */
        rtb_Switch1_od = KeMTIR_M_MtrBTrqAchieved_AEMD_MaxLmt;
    }
    else
    {
        /* Switch: '<S448>/Switch1' */
        rtb_Switch1_od = rtb_TmpSignalConversionAtLe_csn;
    }

    /* End of Switch: '<S468>/Switch1' */

    /* Switch: '<S468>/Switch' incorporates:
     *  Constant: '<S465>/Calib'
     *  RelationalOperator: '<S468>/Relational Operator1'
     */
    if (rtb_Switch1_od > KeMTIR_M_MtrBTrqAchieved_AEMD_MinLmt)
    {
        /* Switch: '<S468>/Switch' */
        rtb_TmpSignalConversionAtLe_csn = rtb_Switch1_od;
    }
    else
    {
        /* Switch: '<S468>/Switch' */
        rtb_TmpSignalConversionAtLe_csn = KeMTIR_M_MtrBTrqAchieved_AEMD_MinLmt;
    }

    /* End of Switch: '<S468>/Switch' */
    /* End of Outputs for SubSystem: '<S126>/Limiter' */

    /* Outputs for Atomic SubSystem: '<S126>/GradientLimiter' */
    /* Switch: '<S448>/Switch1' incorporates:
     *  UnitDelay: '<S463>/Unit Delay'
     */
    rtb_Switch1_od = MTIR_ac_DW.UnitDelay_DSTATE_ny;

    /* Sum: '<S463>/Sum2' */
    rtb_TmpSignalConversionAtLe_csn -= rtb_Switch1_od;

    /* Outputs for Atomic SubSystem: '<S463>/Limiter' */
    /* Switch: '<S469>/Switch1' incorporates:
     *  Constant: '<S466>/Calib'
     *  RelationalOperator: '<S469>/Relational Operator'
     */
    if (KeMTIR_dM_MtrBTorqAchieved_AEMD_Rate_MaxLmt <
            rtb_TmpSignalConversionAtLe_csn)
    {
        /* Switch: '<S469>/Switch1' */
        rtb_Switch1_b3 = KeMTIR_dM_MtrBTorqAchieved_AEMD_Rate_MaxLmt;
    }
    else
    {
        /* Switch: '<S469>/Switch1' */
        rtb_Switch1_b3 = rtb_TmpSignalConversionAtLe_csn;
    }

    /* End of Switch: '<S469>/Switch1' */

    /* Switch: '<S469>/Switch' incorporates:
     *  Constant: '<S467>/Calib'
     *  RelationalOperator: '<S469>/Relational Operator1'
     */
    if (rtb_Switch1_b3 <= KeMTIR_dM_MtrBTorqAchieved_AEMD_Rate_MinLmt)
    {
        rtb_Switch1_b3 = KeMTIR_dM_MtrBTorqAchieved_AEMD_Rate_MinLmt;
    }

    /* End of Switch: '<S469>/Switch' */
    /* End of Outputs for SubSystem: '<S463>/Limiter' */

    /* Sum: '<S463>/Sum3' */
    VeMTIC_M_MtrB_TorqAchieved_AEMD = rtb_Switch1_b3 + rtb_Switch1_od;

    /* Update for UnitDelay: '<S463>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_ny = VeMTIC_M_MtrB_TorqAchieved_AEMD;

    /* End of Outputs for SubSystem: '<S126>/GradientLimiter' */

    /* Outputs for Atomic SubSystem: '<S123>/Limiter' */
    /* Switch: '<S445>/Switch1' incorporates:
     *  Constant: '<S438>/Calib'
     *  RelationalOperator: '<S445>/Relational Operator'
     */
    if (KeMTIR_M_P2SpdCntrlMaxTrq_MaxLim < rtb_TmpSignalConversionAtLeM_d4)
    {
        /* UnitDelay: '<S435>/Unit Delay' */
        rtb_TmpSignalConversionAtLeM_ox = KeMTIR_M_P2SpdCntrlMaxTrq_MaxLim;
    }
    else
    {
        /* UnitDelay: '<S435>/Unit Delay' */
        rtb_TmpSignalConversionAtLeM_ox = rtb_TmpSignalConversionAtLeM_d4;
    }

    /* End of Switch: '<S445>/Switch1' */

    /* Switch: '<S445>/Switch' incorporates:
     *  Constant: '<S439>/Calib'
     *  RelationalOperator: '<S445>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtLeM_ox > KeMTIR_M_P2SpdCntrlMaxTrq_MinLim)
    {
        /* Switch: '<S445>/Switch' */
        rtb_TmpSignalConversionAtLeM_d4 = rtb_TmpSignalConversionAtLeM_ox;
    }
    else
    {
        /* Switch: '<S445>/Switch' */
        rtb_TmpSignalConversionAtLeM_d4 = KeMTIR_M_P2SpdCntrlMaxTrq_MinLim;
    }

    /* End of Switch: '<S445>/Switch' */
    /* End of Outputs for SubSystem: '<S123>/Limiter' */

    /* Outputs for Atomic SubSystem: '<S123>/GradientLimiter' */
    /* UnitDelay: '<S435>/Unit Delay' incorporates:
     *  UnitDelay: '<S434>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_ox = MTIR_ac_DW.UnitDelay_DSTATE_j;

    /* Sum: '<S434>/Sum2' */
    rtb_TmpSignalConversionAtLeM_d4 -= rtb_TmpSignalConversionAtLeM_ox;

    /* Outputs for Atomic SubSystem: '<S434>/Limiter' */
    /* Switch: '<S447>/Switch1' incorporates:
     *  Constant: '<S437>/Calib'
     *  RelationalOperator: '<S447>/Relational Operator'
     */
    if (KeMTIR_M_P2SpdCntrlMaxTrqRate_LU < rtb_TmpSignalConversionAtLeM_d4)
    {
        /* Switch: '<S448>/Switch1' */
        rtb_Switch1_od = KeMTIR_M_P2SpdCntrlMaxTrqRate_LU;
    }
    else
    {
        /* Switch: '<S448>/Switch1' */
        rtb_Switch1_od = rtb_TmpSignalConversionAtLeM_d4;
    }

    /* End of Switch: '<S447>/Switch1' */

    /* Switch: '<S447>/Switch' incorporates:
     *  Constant: '<S436>/Calib'
     *  RelationalOperator: '<S447>/Relational Operator1'
     */
    if (rtb_Switch1_od <= KeMTIR_M_P2SpdCntrlMaxTrqRate_LD)
    {
        rtb_Switch1_od = KeMTIR_M_P2SpdCntrlMaxTrqRate_LD;
    }

    /* End of Switch: '<S447>/Switch' */
    /* End of Outputs for SubSystem: '<S434>/Limiter' */

    /* Sum: '<S434>/Sum3' */
    rtb_TmpSignalConversionAtLeM_d4 = rtb_Switch1_od +
        rtb_TmpSignalConversionAtLeM_ox;

    /* Update for UnitDelay: '<S434>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_j = rtb_TmpSignalConversionAtLeM_d4;

    /* End of Outputs for SubSystem: '<S123>/GradientLimiter' */

    /* Product: '<S123>/Product' incorporates:
     *  Constant: '<S444>/Calib'
     *  Merge: '<Root>/Merge_29'
     *  SignalConversion generated from: '<S29>/LeMTIR_M_P2SpdCntrlMinTrqLmt_read'
     */
    rtb_TmpSignalConversionAtLe_csn =
        Rte_IrvRead_MTIR_FastTEF_VeMTIR_M_P2SpdCntrlMinTrqLmt_Init_IRV() *
        KeMTIR_k_MinTrqLmtSign;

    /* Outputs for Atomic SubSystem: '<S123>/Limiter2' */
    /* Switch: '<S446>/Switch1' incorporates:
     *  Constant: '<S442>/Calib'
     *  RelationalOperator: '<S446>/Relational Operator'
     */
    if (KeMTIR_M_P2SpdCntrlMinTrq_MaxLim < rtb_TmpSignalConversionAtLe_csn)
    {
        /* UnitDelay: '<S435>/Unit Delay' */
        rtb_TmpSignalConversionAtLeM_ox = KeMTIR_M_P2SpdCntrlMinTrq_MaxLim;
    }
    else
    {
        /* UnitDelay: '<S435>/Unit Delay' */
        rtb_TmpSignalConversionAtLeM_ox = rtb_TmpSignalConversionAtLe_csn;
    }

    /* End of Switch: '<S446>/Switch1' */

    /* Switch: '<S446>/Switch' incorporates:
     *  Constant: '<S443>/Calib'
     *  RelationalOperator: '<S446>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtLeM_ox > KeMTIR_M_P2SpdCntrlMinTrq_MinLim)
    {
        /* Switch: '<S446>/Switch' */
        rtb_TmpSignalConversionAtLe_csn = rtb_TmpSignalConversionAtLeM_ox;
    }
    else
    {
        /* Switch: '<S446>/Switch' */
        rtb_TmpSignalConversionAtLe_csn = KeMTIR_M_P2SpdCntrlMinTrq_MinLim;
    }

    /* End of Switch: '<S446>/Switch' */
    /* End of Outputs for SubSystem: '<S123>/Limiter2' */

    /* Outputs for Atomic SubSystem: '<S123>/GradientLimiter1' */
    /* UnitDelay: '<S435>/Unit Delay' */
    rtb_TmpSignalConversionAtLeM_ox = MTIR_ac_DW.UnitDelay_DSTATE_ly;

    /* Sum: '<S435>/Sum2' */
    rtb_TmpSignalConversionAtLe_csn -= rtb_TmpSignalConversionAtLeM_ox;

    /* Outputs for Atomic SubSystem: '<S435>/Limiter' */
    /* Switch: '<S448>/Switch1' incorporates:
     *  Constant: '<S441>/Calib'
     *  RelationalOperator: '<S448>/Relational Operator'
     */
    if (KeMTIR_M_P2SpdCntrlMinTrqRate_LU < rtb_TmpSignalConversionAtLe_csn)
    {
        /* Switch: '<S448>/Switch1' */
        rtb_Switch1_od = KeMTIR_M_P2SpdCntrlMinTrqRate_LU;
    }
    else
    {
        /* Switch: '<S448>/Switch1' */
        rtb_Switch1_od = rtb_TmpSignalConversionAtLe_csn;
    }

    /* End of Switch: '<S448>/Switch1' */

    /* Switch: '<S448>/Switch' incorporates:
     *  Constant: '<S440>/Calib'
     *  RelationalOperator: '<S448>/Relational Operator1'
     */
    if (rtb_Switch1_od <= KeMTIR_M_P2SpdCntrlMinTrqRate_LD)
    {
        rtb_Switch1_od = KeMTIR_M_P2SpdCntrlMinTrqRate_LD;
    }

    /* End of Switch: '<S448>/Switch' */
    /* End of Outputs for SubSystem: '<S435>/Limiter' */

    /* Sum: '<S435>/Sum3' */
    rtb_TmpSignalConversionAtLe_csn = rtb_Switch1_od +
        rtb_TmpSignalConversionAtLeM_ox;

    /* Update for UnitDelay: '<S435>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_ly = rtb_TmpSignalConversionAtLe_csn;

    /* End of Outputs for SubSystem: '<S123>/GradientLimiter1' */

    /* Update for UnitDelay: '<S253>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_f = rtb_TmpSignalConversionAtLeM_je;

    /* Update for UnitDelay: '<S266>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_l = rtb_TmpSignalConversionAtLeM_my;

    /* Update for UnitDelay: '<S213>/Unit Delay' incorporates:
     *  UnitDelay: '<S141>/Unit Delay1'
     *  UnitDelay: '<S142>/Unit Delay1'
     *  UnitDelay: '<S143>/Unit Delay1'
     *  UnitDelay: '<S144>/Unit Delay1'
     *  UnitDelay: '<S150>/Unit Delay5'
     *  UnitDelay: '<S162>/Unit Delay4'
     *  UnitDelay: '<S169>/Unit Delay5'
     *  UnitDelay: '<S173>/Unit Delay'
     *  UnitDelay: '<S185>/Unit Delay4'
     *  UnitDelay: '<S192>/Unit Delay5'
     *  UnitDelay: '<S196>/Unit Delay'
     *  UnitDelay: '<S226>/Unit Delay'
     */
#if Rte_SysCon_Variant_MTIR_1

    MTIR_ac_DW.UnitDelay_DSTATE_d = rtb_Sum2_jr;
    MTIR_ac_DW.UnitDelay_DSTATE_g = rtb_Sum2_m;
    MTIR_ac_DW.UnitDelay1_DSTATE_f = VeMTIC_U_MtrCVoltFinal;
    MTIR_ac_DW.UnitDelay5_DSTATE_h = VeMTIC_b_MtrCSpdVoltEn;
    MTIR_ac_DW.UnitDelay1_DSTATE_a = VeMTIC_b_MtrCSpdSgnlRcvdEnLatch;
    MTIR_ac_DW.UnitDelay_DSTATE_ga = rtb_Sum2_oi;
    MTIR_ac_DW.UnitDelay4_DSTATE_m = VeMTIC_k_MtrCMaxDrtngFctrFinal;
    MTIR_ac_DW.UnitDelay5_DSTATE_g = VeMTIC_b_MtrCMaxDrtFctEn;
    MTIR_ac_DW.UnitDelay1_DSTATE_ah = VeMTIC_b_MtrCMaxSgnlRcvdEnLatch;
    MTIR_ac_DW.UnitDelay_DSTATE_n = rtb_Add;
    MTIR_ac_DW.UnitDelay4_DSTATE_h = VeMTIC_k_MtrCMinDrtngFctrFinal;
    MTIR_ac_DW.UnitDelay5_DSTATE_l = VeMTIC_b_MtrCMinDrtFctEn;
    MTIR_ac_DW.UnitDelay1_DSTATE_h = VeMTIC_b_MtrCMinSgnlRcvdEnLatch;

#endif

    /* End of Update for UnitDelay: '<S213>/Unit Delay' */

    /* Update for UnitDelay: '<S306>/Unit Delay1' */
    MTIR_ac_DW.UnitDelay1_DSTATE_j = VeMTIC_U_MtrAVoltFinal;

    /* Update for UnitDelay: '<S312>/Unit Delay5' */
    MTIR_ac_DW.UnitDelay5_DSTATE_m = VeMTIC_b_MtrASpdVoltEn;

    /* Update for UnitDelay: '<S300>/Unit Delay1' */
    MTIR_ac_DW.UnitDelay1_DSTATE_e = VeMTIC_b_MtrASpdSgnlRcvdEnLatch;

    /* Update for UnitDelay: '<S335>/Unit Delay' incorporates:
     *  Switch: '<S335>/Switch3'
     */
    MTIR_ac_DW.UnitDelay_DSTATE_a = rtb_TmpSignalConversionAtLeM_pg;

    /* Update for UnitDelay: '<S324>/Unit Delay4' */
    MTIR_ac_DW.UnitDelay4_DSTATE_e = VeMTIC_k_MtrAMaxDrtngFctrFinal;

    /* Update for UnitDelay: '<S331>/Unit Delay5' */
    MTIR_ac_DW.UnitDelay5_DSTATE_a = VeMTIC_b_MtrAMaxDrtFctEn;

    /* Update for UnitDelay: '<S301>/Unit Delay1' */
    MTIR_ac_DW.UnitDelay1_DSTATE_p = VeMTIC_b_MtrAMaxSgnlRcvdEnLatch;

    /* Update for UnitDelay: '<S358>/Unit Delay' incorporates:
     *  Switch: '<S358>/Switch3'
     */
    MTIR_ac_DW.UnitDelay_DSTATE_b = rtb_TmpSignalConversionAtLeM_lk;

    /* Update for UnitDelay: '<S347>/Unit Delay4' */
    MTIR_ac_DW.UnitDelay4_DSTATE_mn = VeMTIC_k_MtrAMinDrtngFctrFinal;

    /* Update for UnitDelay: '<S354>/Unit Delay5' */
    MTIR_ac_DW.UnitDelay5_DSTATE_hs = VeMTIC_b_MtrAMinDrtFctEn;

    /* Update for UnitDelay: '<S302>/Unit Delay1' */
    MTIR_ac_DW.UnitDelay1_DSTATE_az = VeMTIC_b_MtrAMinSgnlRcvdEnLatch;

    /* Update for UnitDelay: '<S370>/Unit Delay1' */
    MTIR_ac_DW.UnitDelay1_DSTATE_l = VeMTIC_U_MtrBVoltFinal;

    /* Update for UnitDelay: '<S376>/Unit Delay5' */
    MTIR_ac_DW.UnitDelay5_DSTATE_ld = VeMTIC_b_MtrBSpdVoltEn;

    /* Update for UnitDelay: '<S303>/Unit Delay1' */
    MTIR_ac_DW.UnitDelay1_DSTATE_hl = VeMTIC_b_MtrBSpdSgnlRcvdEnLatch;

    /* Update for UnitDelay: '<S399>/Unit Delay' incorporates:
     *  Switch: '<S399>/Switch3'
     */
    MTIR_ac_DW.UnitDelay_DSTATE_o = rtb_Sum3_f;

    /* Update for UnitDelay: '<S388>/Unit Delay4' */
    MTIR_ac_DW.UnitDelay4_DSTATE_b = VeMTIC_k_MtrBMaxDrtngFctrFinal;

    /* Update for UnitDelay: '<S395>/Unit Delay5' */
    MTIR_ac_DW.UnitDelay5_DSTATE_mw = VeMTIC_b_MtrBMaxDrtFctEn;

    /* Update for UnitDelay: '<S304>/Unit Delay1' */
    MTIR_ac_DW.UnitDelay1_DSTATE_an = VeMTIC_b_MtrBMaxSgnlRcvdEnLatch;

    /* Update for UnitDelay: '<S422>/Unit Delay' incorporates:
     *  Switch: '<S422>/Switch3'
     */
    MTIR_ac_DW.UnitDelay_DSTATE_k = rtb_TmpSignalConversionAtLeM_ky;

    /* Update for UnitDelay: '<S411>/Unit Delay4' */
    MTIR_ac_DW.UnitDelay4_DSTATE_hv = VeMTIC_k_MtrBMinDrtngFctrFinal;

    /* Update for UnitDelay: '<S418>/Unit Delay5' */
    MTIR_ac_DW.UnitDelay5_DSTATE_a3 = VeMTIC_b_MtrBMinDrtFctEn;

    /* Update for UnitDelay: '<S305>/Unit Delay1' */
    MTIR_ac_DW.UnitDelay1_DSTATE_le = VeMTIC_b_MtrBMinSgnlRcvdEnLatch;

    /* Update for UnitDelay: '<S279>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_kr = rtb_TmpSignalConversionAtLeM_mj;

    /* Update for UnitDelay: '<S292>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_nq = rtb_TmpSignalConversionAtLeM_gv;

    /* S-Function (fcgen): '<S29>/FcnCallGen' incorporates:
     *  SubSystem: '<S29>/ProcessOutput'
     */
    /* Outputs for Atomic SubSystem: '<S112>/EdgeRising1' */
    /* Logic: '<S483>/OR1' incorporates:
     *  UnitDelay: '<S483>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_av = !MTIR_ac_DW.UnitDelay_DSTATE_hv;

    /* Update for UnitDelay: '<S483>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_hv = rtb_TmpSignalConversionAtLeM_bg;

    /* Outputs for Atomic SubSystem: '<S112>/Count Down  Reset Enabled1' */
    /* Switch: '<S477>/Switch1' incorporates:
     *  Constant: '<S477>/Constant Value'
     *  Logic: '<S483>/AND'
     *  RelationalOperator: '<S477>/Greater  Than'
     *  Switch: '<S477>/Switch2'
     *  UnitDelay: '<S477>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeM_bg && rtb_TmpSignalConversionAtLeM_av)
    {
        /* Switch: '<S477>/Switch1' incorporates:
         *  Constant: '<S490>/Calib'
         */
        rtb_Switch1_eb = KeMTIR_Cnt_MtrA_TorqAchievedMinWaitTime;
    }
    else if (((sint32)MTIR_ac_DW.UnitDelay_DSTATE_cu) > 0)
    {
        /* Switch: '<S477>/Switch2' incorporates:
         *  Constant: '<S477>/Constant Value1'
         *  Sum: '<S477>/Subtraction'
         *  Switch: '<S477>/Switch1'
         *  UnitDelay: '<S477>/Unit Delay'
         */
        rtb_Switch1_eb = (uint16)((sint32)(((sint32)
            MTIR_ac_DW.UnitDelay_DSTATE_cu) - 1));
    }
    else
    {
        /* Switch: '<S477>/Switch1' incorporates:
         *  Switch: '<S477>/Switch2'
         *  UnitDelay: '<S477>/Unit Delay'
         */
        rtb_Switch1_eb = MTIR_ac_DW.UnitDelay_DSTATE_cu;
    }

    /* End of Switch: '<S477>/Switch1' */
    /* End of Outputs for SubSystem: '<S112>/EdgeRising1' */

    /* Update for UnitDelay: '<S477>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_cu = rtb_Switch1_eb;

    /* Switch: '<S112>/Switch2' incorporates:
     *  Constant: '<S477>/Constant Value2'
     *  RelationalOperator: '<S477>/Greater  Than1'
     */
    if (((sint32)rtb_Switch1_eb) > 0)
    {
        /* Switch: '<S112>/Switch2' incorporates:
         *  UnitDelay: '<S112>/Unit Delay'
         */
        rtb_Sum2_jr = MTIR_ac_DW.UnitDelay_DSTATE;
    }
    else
    {
        /* Switch: '<S112>/Switch2' */
        rtb_Sum2_jr = VeMTIC_M_MtrA_TorqAchieved;
    }

    /* End of Switch: '<S112>/Switch2' */
    /* End of Outputs for SubSystem: '<S112>/Count Down  Reset Enabled1' */

    /* Outputs for Atomic SubSystem: '<S112>/EdgeRising2' */
    /* Logic: '<S484>/OR1' incorporates:
     *  UnitDelay: '<S484>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_bg = !MTIR_ac_DW.UnitDelay_DSTATE_nn;

    /* Update for UnitDelay: '<S484>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_nn = rtb_TmpSignalConversionAtLeM_nn;

    /* Outputs for Atomic SubSystem: '<S112>/Count Down  Reset Enabled2' */
    /* Switch: '<S478>/Switch1' incorporates:
     *  Constant: '<S478>/Constant Value'
     *  Logic: '<S484>/AND'
     *  RelationalOperator: '<S478>/Greater  Than'
     *  Switch: '<S478>/Switch2'
     *  UnitDelay: '<S478>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeM_nn && rtb_TmpSignalConversionAtLeM_bg)
    {
        /* Switch: '<S478>/Switch1' incorporates:
         *  Constant: '<S491>/Calib'
         */
        rtb_Switch1_eb = KeMTIR_Cnt_MtrA_TorqAchieved_AEMDMinWaitTime;
    }
    else if (((sint32)MTIR_ac_DW.UnitDelay_DSTATE_js) > 0)
    {
        /* Switch: '<S478>/Switch2' incorporates:
         *  Constant: '<S478>/Constant Value1'
         *  Sum: '<S478>/Subtraction'
         *  Switch: '<S478>/Switch1'
         *  UnitDelay: '<S478>/Unit Delay'
         */
        rtb_Switch1_eb = (uint16)((sint32)(((sint32)
            MTIR_ac_DW.UnitDelay_DSTATE_js) - 1));
    }
    else
    {
        /* Switch: '<S478>/Switch1' incorporates:
         *  Switch: '<S478>/Switch2'
         *  UnitDelay: '<S478>/Unit Delay'
         */
        rtb_Switch1_eb = MTIR_ac_DW.UnitDelay_DSTATE_js;
    }

    /* End of Switch: '<S478>/Switch1' */
    /* End of Outputs for SubSystem: '<S112>/EdgeRising2' */

    /* Update for UnitDelay: '<S478>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_js = rtb_Switch1_eb;

    /* Switch: '<S112>/Switch1' incorporates:
     *  Constant: '<S478>/Constant Value2'
     *  RelationalOperator: '<S478>/Greater  Than1'
     */
    if (((sint32)rtb_Switch1_eb) > 0)
    {
        /* Switch: '<S112>/Switch1' incorporates:
         *  UnitDelay: '<S112>/Unit Delay1'
         */
        rtb_Sum2_m = MTIR_ac_DW.UnitDelay1_DSTATE;
    }
    else
    {
        /* Switch: '<S112>/Switch1' */
        rtb_Sum2_m = VeMTIC_M_MtrA_TorqAchieved_AEMD;
    }

    /* End of Switch: '<S112>/Switch1' */
    /* End of Outputs for SubSystem: '<S112>/Count Down  Reset Enabled2' */

    /* Outputs for Atomic SubSystem: '<S112>/EdgeRising3' */
    /* Logic: '<S485>/OR1' incorporates:
     *  UnitDelay: '<S485>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_nn = !MTIR_ac_DW.UnitDelay_DSTATE_ip;

    /* Update for UnitDelay: '<S485>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_ip = rtb_TmpSignalConversionAtLe_cpt;

    /* Outputs for Atomic SubSystem: '<S112>/Count Down  Reset Enabled3' */
    /* Switch: '<S479>/Switch1' incorporates:
     *  Constant: '<S479>/Constant Value'
     *  Logic: '<S485>/AND'
     *  RelationalOperator: '<S479>/Greater  Than'
     *  Switch: '<S479>/Switch2'
     *  UnitDelay: '<S479>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLe_cpt && rtb_TmpSignalConversionAtLeM_nn)
    {
        /* Switch: '<S479>/Switch1' incorporates:
         *  Constant: '<S492>/Calib'
         */
        rtb_Switch1_eb = KeMTIR_Cnt_MtrB_TorqAchievedMinWaitTm;
    }
    else if (((sint32)MTIR_ac_DW.UnitDelay_DSTATE_h3a) > 0)
    {
        /* Switch: '<S479>/Switch2' incorporates:
         *  Constant: '<S479>/Constant Value1'
         *  Sum: '<S479>/Subtraction'
         *  Switch: '<S479>/Switch1'
         *  UnitDelay: '<S479>/Unit Delay'
         */
        rtb_Switch1_eb = (uint16)((sint32)(((sint32)
            MTIR_ac_DW.UnitDelay_DSTATE_h3a) - 1));
    }
    else
    {
        /* Switch: '<S479>/Switch1' incorporates:
         *  Switch: '<S479>/Switch2'
         *  UnitDelay: '<S479>/Unit Delay'
         */
        rtb_Switch1_eb = MTIR_ac_DW.UnitDelay_DSTATE_h3a;
    }

    /* End of Switch: '<S479>/Switch1' */
    /* End of Outputs for SubSystem: '<S112>/EdgeRising3' */

    /* Update for UnitDelay: '<S479>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_h3a = rtb_Switch1_eb;

    /* Switch: '<S112>/Switch3' incorporates:
     *  Constant: '<S479>/Constant Value2'
     *  RelationalOperator: '<S479>/Greater  Than1'
     */
    if (((sint32)rtb_Switch1_eb) > 0)
    {
        /* Switch: '<S112>/Switch3' incorporates:
         *  UnitDelay: '<S112>/Unit Delay2'
         */
        rtb_Sum2_oi = MTIR_ac_DW.UnitDelay2_DSTATE;
    }
    else
    {
        /* Switch: '<S112>/Switch3' */
        rtb_Sum2_oi = VeMTIC_M_MtrB_TorqAchieved;
    }

    /* End of Switch: '<S112>/Switch3' */
    /* End of Outputs for SubSystem: '<S112>/Count Down  Reset Enabled3' */

    /* Outputs for Atomic SubSystem: '<S112>/EdgeRising4' */
    /* Logic: '<S486>/OR1' incorporates:
     *  UnitDelay: '<S486>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLe_cpt = !MTIR_ac_DW.UnitDelay_DSTATE_oso;

    /* Update for UnitDelay: '<S486>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_oso = rtb_TmpSignalConversionAtLeM_cf;

    /* Outputs for Atomic SubSystem: '<S112>/Count Down  Reset Enabled4' */
    /* Switch: '<S480>/Switch1' incorporates:
     *  Constant: '<S480>/Constant Value'
     *  Logic: '<S486>/AND'
     *  RelationalOperator: '<S480>/Greater  Than'
     *  Switch: '<S480>/Switch2'
     *  UnitDelay: '<S480>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeM_cf && rtb_TmpSignalConversionAtLe_cpt)
    {
        /* Switch: '<S480>/Switch1' incorporates:
         *  Constant: '<S493>/Calib'
         */
        rtb_Switch1_eb = KeMTIR_Cnt_MtrB_TorqAchieved_AEMDMinWaitTm;
    }
    else if (((sint32)MTIR_ac_DW.UnitDelay_DSTATE_m) > 0)
    {
        /* Switch: '<S480>/Switch2' incorporates:
         *  Constant: '<S480>/Constant Value1'
         *  Sum: '<S480>/Subtraction'
         *  Switch: '<S480>/Switch1'
         *  UnitDelay: '<S480>/Unit Delay'
         */
        rtb_Switch1_eb = (uint16)((sint32)(((sint32)
            MTIR_ac_DW.UnitDelay_DSTATE_m) - 1));
    }
    else
    {
        /* Switch: '<S480>/Switch1' incorporates:
         *  Switch: '<S480>/Switch2'
         *  UnitDelay: '<S480>/Unit Delay'
         */
        rtb_Switch1_eb = MTIR_ac_DW.UnitDelay_DSTATE_m;
    }

    /* End of Switch: '<S480>/Switch1' */
    /* End of Outputs for SubSystem: '<S112>/EdgeRising4' */

    /* Update for UnitDelay: '<S480>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_m = rtb_Switch1_eb;

    /* Switch: '<S112>/Switch4' incorporates:
     *  Constant: '<S480>/Constant Value2'
     *  RelationalOperator: '<S480>/Greater  Than1'
     */
    if (((sint32)rtb_Switch1_eb) > 0)
    {
        /* Switch: '<S112>/Switch4' incorporates:
         *  UnitDelay: '<S112>/Unit Delay3'
         */
        rtb_Switch1_od = MTIR_ac_DW.UnitDelay3_DSTATE;
    }
    else
    {
        /* Switch: '<S112>/Switch4' */
        rtb_Switch1_od = VeMTIC_M_MtrB_TorqAchieved_AEMD;
    }

    /* End of Switch: '<S112>/Switch4' */
    /* End of Outputs for SubSystem: '<S112>/Count Down  Reset Enabled4' */

    /* Outputs for Atomic SubSystem: '<S112>/EdgeRising5' */
    /* Logic: '<S487>/OR1' incorporates:
     *  UnitDelay: '<S487>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_cf = !MTIR_ac_DW.UnitDelay_DSTATE_ns;

    /* Update for UnitDelay: '<S487>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_ns = rtb_TmpSignalConversionAtLeM_l2;

    /* Outputs for Atomic SubSystem: '<S112>/Count Down  Reset Enabled5' */
    /* Switch: '<S481>/Switch1' incorporates:
     *  Constant: '<S481>/Constant Value'
     *  Logic: '<S487>/AND'
     *  RelationalOperator: '<S481>/Greater  Than'
     *  Switch: '<S481>/Switch2'
     *  UnitDelay: '<S481>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeM_l2 && rtb_TmpSignalConversionAtLeM_cf)
    {
        /* Switch: '<S481>/Switch1' incorporates:
         *  Constant: '<S494>/Calib'
         */
        rtb_Switch1_eb = KeMTIR_Cnt_MtrC_TorqAchievedMinWaitTime;
    }
    else if (((sint32)MTIR_ac_DW.UnitDelay_DSTATE_cv) > 0)
    {
        /* Switch: '<S481>/Switch2' incorporates:
         *  Constant: '<S481>/Constant Value1'
         *  Sum: '<S481>/Subtraction'
         *  Switch: '<S481>/Switch1'
         *  UnitDelay: '<S481>/Unit Delay'
         */
        rtb_Switch1_eb = (uint16)((sint32)(((sint32)
            MTIR_ac_DW.UnitDelay_DSTATE_cv) - 1));
    }
    else
    {
        /* Switch: '<S481>/Switch1' incorporates:
         *  Switch: '<S481>/Switch2'
         *  UnitDelay: '<S481>/Unit Delay'
         */
        rtb_Switch1_eb = MTIR_ac_DW.UnitDelay_DSTATE_cv;
    }

    /* End of Switch: '<S481>/Switch1' */
    /* End of Outputs for SubSystem: '<S112>/EdgeRising5' */

    /* Update for UnitDelay: '<S481>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_cv = rtb_Switch1_eb;

    /* Switch: '<S112>/Switch5' incorporates:
     *  Constant: '<S481>/Constant Value2'
     *  RelationalOperator: '<S481>/Greater  Than1'
     */
    if (((sint32)rtb_Switch1_eb) > 0)
    {
        /* Switch: '<S112>/Switch5' incorporates:
         *  UnitDelay: '<S112>/Unit Delay4'
         */
        rtb_Add = MTIR_ac_DW.UnitDelay4_DSTATE;
    }
    else
    {
        /* Switch: '<S112>/Switch5' */
        rtb_Add = VeMTIC_M_MtrC_TorqAchieved;
    }

    /* End of Switch: '<S112>/Switch5' */
    /* End of Outputs for SubSystem: '<S112>/Count Down  Reset Enabled5' */

    /* Outputs for Atomic SubSystem: '<S112>/EdgeRising6' */
    /* Logic: '<S488>/OR1' incorporates:
     *  UnitDelay: '<S488>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_l2 = !MTIR_ac_DW.UnitDelay_DSTATE_kf;

    /* Update for UnitDelay: '<S488>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_kf = rtb_TmpSignalConversionAtLeM_k1;

    /* Outputs for Atomic SubSystem: '<S112>/Count Down  Reset Enabled6' */
    /* Switch: '<S482>/Switch1' incorporates:
     *  Constant: '<S482>/Constant Value'
     *  Logic: '<S488>/AND'
     *  RelationalOperator: '<S482>/Greater  Than'
     *  Switch: '<S482>/Switch2'
     *  UnitDelay: '<S482>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeM_k1 && rtb_TmpSignalConversionAtLeM_l2)
    {
        /* Switch: '<S482>/Switch1' incorporates:
         *  Constant: '<S495>/Calib'
         */
        rtb_Switch1_eb = KeMTIR_Cnt_MtrC_TorqAchieved_AEMDMinWaitTime;
    }
    else if (((sint32)MTIR_ac_DW.UnitDelay_DSTATE_bx) > 0)
    {
        /* Switch: '<S482>/Switch2' incorporates:
         *  Constant: '<S482>/Constant Value1'
         *  Sum: '<S482>/Subtraction'
         *  Switch: '<S482>/Switch1'
         *  UnitDelay: '<S482>/Unit Delay'
         */
        rtb_Switch1_eb = (uint16)((sint32)(((sint32)
            MTIR_ac_DW.UnitDelay_DSTATE_bx) - 1));
    }
    else
    {
        /* Switch: '<S482>/Switch1' incorporates:
         *  Switch: '<S482>/Switch2'
         *  UnitDelay: '<S482>/Unit Delay'
         */
        rtb_Switch1_eb = MTIR_ac_DW.UnitDelay_DSTATE_bx;
    }

    /* End of Switch: '<S482>/Switch1' */
    /* End of Outputs for SubSystem: '<S112>/EdgeRising6' */

    /* Update for UnitDelay: '<S482>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE_bx = rtb_Switch1_eb;

    /* Switch: '<S112>/Switch6' incorporates:
     *  Constant: '<S482>/Constant Value2'
     *  RelationalOperator: '<S482>/Greater  Than1'
     */
    if (((sint32)rtb_Switch1_eb) > 0)
    {
        /* Switch: '<S112>/Switch6' incorporates:
         *  UnitDelay: '<S112>/Unit Delay5'
         */
        rtb_TmpSignalConversionAtLeM_mi = MTIR_ac_DW.UnitDelay5_DSTATE;
    }
    else
    {
        /* Switch: '<S112>/Switch6' */
        rtb_TmpSignalConversionAtLeM_mi = VeMTIC_M_MtrCTrqAchieved_AEMD;
    }

    /* End of Switch: '<S112>/Switch6' */
    /* End of Outputs for SubSystem: '<S112>/Count Down  Reset Enabled6' */

    /* Update for UnitDelay: '<S112>/Unit Delay' */
    MTIR_ac_DW.UnitDelay_DSTATE = rtb_Sum2_jr;

    /* Update for UnitDelay: '<S112>/Unit Delay1' */
    MTIR_ac_DW.UnitDelay1_DSTATE = rtb_Sum2_m;

    /* Update for UnitDelay: '<S112>/Unit Delay2' */
    MTIR_ac_DW.UnitDelay2_DSTATE = rtb_Sum2_oi;

    /* Update for UnitDelay: '<S112>/Unit Delay3' */
    MTIR_ac_DW.UnitDelay3_DSTATE = rtb_Switch1_od;

    /* Update for UnitDelay: '<S112>/Unit Delay4' */
    MTIR_ac_DW.UnitDelay4_DSTATE = rtb_Add;

    /* Update for UnitDelay: '<S112>/Unit Delay5' */
    MTIR_ac_DW.UnitDelay5_DSTATE = rtb_TmpSignalConversionAtLeM_mi;

    /* S-Function (fcgen): '<S29>/FcnCallGen' incorporates:
     *  SubSystem: '<S29>/MTIC'
     */
    /* Outport: '<Root>/VeMTIR_b_MtrA_TorqAchievedFA' incorporates:
     *  Logic: '<S115>/Logical2'
     *  Merge: '<Root>/Merge_31'
     *  Merge: '<Root>/Merge_38'
     *  SignalConversion generated from: '<S29>/MtrA_TorqAchieved_FA'
     *  SignalConversion generated from: '<S29>/LeMTIR_b_MtrA_TorqAchievedFA_read'
     *  SignalConversion generated from: '<S29>/LeMTIR_b_MtrA_TorqAchieved_AEMDFA_read'
     */
    (void)Rte_Write_VeMTIR_b_MtrA_TorqAchievedFA_Value
        ((Rte_IrvRead_MTIR_FastTEF_VeMTIR_b_MtrA_TorqAchieved_AEMDFA_write_IRV())
         || (Rte_IrvRead_MTIR_FastTEF_VeMTIR_b_MtrA_TorqAchievedFA_write_IRV()));

    /* Outport: '<Root>/VeMTIR_b_MtrB_TorqAchievedFA' incorporates:
     *  Logic: '<S115>/Logical3'
     *  Merge: '<Root>/Merge_50'
     *  Merge: '<Root>/Merge_52'
     *  SignalConversion generated from: '<S29>/MtrB_TorqAchieved_FA'
     *  SignalConversion generated from: '<S29>/LeMTIR_b_MtrB_TorqAchievedFA_read'
     *  SignalConversion generated from: '<S29>/LeMTIR_b_MtrB_TorqAchieved_AEMDFA_read'
     */
    (void)Rte_Write_VeMTIR_b_MtrB_TorqAchievedFA_Value
        ((Rte_IrvRead_MTIR_FastTEF_VeMTIR_b_MtrB_TorqAchieved_AEMDFA_write_IRV())
         || (Rte_IrvRead_MTIR_FastTEF_VeMTIR_b_MtrB_TorqAchievedFA_write_IRV()));

    /* End of Outputs for S-Function (fcgen): '<S29>/FcnCallGen' */

    /* Outport: '<Root>/VaMTIR_n_MtrCCpbltySpd' incorporates:
     *  SignalConversion generated from: '<S29>/MtrC_CpbltySpd'
     */
    (void)Rte_Write_VaMTIR_n_MtrCCpbltySpd_Value
        (MTIR_ac_B.VariantMerge_For_Variant_Sour_o);

    /* Outport: '<Root>/VaMTIR_M_MtrCMaxCpblty' incorporates:
     *  SignalConversion generated from: '<S29>/MtrC_MaxCpblty'
     */
    (void)Rte_Write_VaMTIR_M_MtrCMaxCpblty_Value
        (MTIR_ac_B.VariantMerge_For_Variant_Sour_j);

    /* Outport: '<Root>/VaMTIR_M_MtrCMinCpblty' incorporates:
     *  SignalConversion generated from: '<S29>/MtrC_MinCpblty'
     */
    (void)Rte_Write_VaMTIR_M_MtrCMinCpblty_Value
        (MTIR_ac_B.VariantMerge_For_Variant_Sou_p3);

    /* Outport: '<Root>/VeMTIR_b_MtrC_TorqAchievedFA' incorporates:
     *  SignalConversion generated from: '<S29>/MtrC_TorqAchieved_FA'
     */
    (void)Rte_Write_VeMTIR_b_MtrC_TorqAchievedFA_Value
        (MTIR_ac_B.VariantMerge_For_Variant_Sour_k);

    /* Outport: '<Root>/VaMTIR_M_MtrAMaxCpblty' incorporates:
     *  SignalConversion generated from: '<S29>/VaMTIC_M_MtrAMaxCpblty'
     */
    (void)Rte_Write_VaMTIR_M_MtrAMaxCpblty_Value(MTIR_ac_B.Product_k);

    /* Outport: '<Root>/VaMTIR_M_MtrBMaxCpblty' incorporates:
     *  SignalConversion generated from: '<S29>/VaMTIC_M_MtrBMaxCpblty'
     */
    (void)Rte_Write_VaMTIR_M_MtrBMaxCpblty_Value(MTIR_ac_B.Product_d);

    /* Outport: '<Root>/VaMTIR_M_MtrAMinCpblty' incorporates:
     *  SignalConversion generated from: '<S29>/VaMTIR_M_MtrAMinCpblty'
     */
    (void)Rte_Write_VaMTIR_M_MtrAMinCpblty_Value(MTIR_ac_B.Product_m);

    /* Outport: '<Root>/VaMTIR_M_MtrBMinCpblty' incorporates:
     *  SignalConversion generated from: '<S29>/VaMTIR_M_MtrBMinCpblty'
     */
    (void)Rte_Write_VaMTIR_M_MtrBMinCpblty_Value(MTIR_ac_B.Product_e);

    /* Outport: '<Root>/VaMTIR_n_MtrACpbltySpd' incorporates:
     *  SignalConversion generated from: '<S29>/VaMTIR_n_MtrACpbltySpd'
     */
    (void)Rte_Write_VaMTIR_n_MtrACpbltySpd_Value(MTIR_ac_B.Product_de);

    /* Outport: '<Root>/VaMTIR_n_MtrBCpbltySpd' incorporates:
     *  SignalConversion generated from: '<S29>/VaMTIR_n_MtrBCpbltySpd'
     */
    (void)Rte_Write_VaMTIR_n_MtrBCpbltySpd_Value(MTIR_ac_B.Product_n);

    /* S-Function (fcgen): '<S29>/FcnCallGen' incorporates:
     *  SubSystem: '<S29>/MTIC'
     */
    /* Outport: '<Root>/VeMTIR_k_MtrADrtngFctr' incorporates:
     *  Gain: '<S128>/Gain'
     *  SignalConversion generated from: '<S29>/VeMTIC_k_MtrADrtngFctrPrePrcssd'
     */
    (void)Rte_Write_VeMTIR_k_MtrADrtngFctr_Value(rtb_TmpSignalConversionAtLeM_ny);

    /* Outport: '<Root>/VeMTIR_k_MtrBDrtngFctr' incorporates:
     *  Gain: '<S129>/Gain'
     *  SignalConversion generated from: '<S29>/VeMTIC_k_MtrBDrtngFctrPrePrcssd'
     */
    (void)Rte_Write_VeMTIR_k_MtrBDrtngFctr_Value(rtb_TmpSignalConversionAtLe_ohu);

    /* End of Outputs for S-Function (fcgen): '<S29>/FcnCallGen' */

    /* Outport: '<Root>/VeMTIR_M_MtrA_MaxTorqRaw' incorporates:
     *  SignalConversion generated from: '<S29>/VeMTIR_M_MtrA_MaxTorqRaw'
     */
    (void)Rte_Write_VeMTIR_M_MtrA_MaxTorqRaw_Value
        (rtb_TmpSignalConversionAtLeM_je);

    /* Outport: '<Root>/VeMTIR_M_MtrA_MinTorqRaw' incorporates:
     *  SignalConversion generated from: '<S29>/VeMTIR_M_MtrA_MinTorqRaw'
     */
    (void)Rte_Write_VeMTIR_M_MtrA_MinTorqRaw_Value
        (rtb_TmpSignalConversionAtLeM_my);

    /* Outport: '<Root>/VeMTIR_M_MtrA_TorqAchieved' incorporates:
     *  SignalConversion generated from: '<S29>/VeMTIR_M_MtrA_TorqAchieved'
     */
    (void)Rte_Write_VeMTIR_M_MtrA_TorqAchieved_Value(rtb_Sum2_jr);

    /* Outport: '<Root>/VeMTIR_M_MtrA_TorqAchieved_AEMD' incorporates:
     *  SignalConversion generated from: '<S29>/VeMTIR_M_MtrA_TorqAchieved_AEMD'
     */
    (void)Rte_Write_VeMTIR_M_MtrA_TorqAchieved_AEMD_Value(rtb_Sum2_m);

    /* Outport: '<Root>/VeMTIR_M_MtrB_MaxTorqRaw' incorporates:
     *  SignalConversion generated from: '<S29>/VeMTIR_M_MtrB_MaxTorqRaw'
     */
    (void)Rte_Write_VeMTIR_M_MtrB_MaxTorqRaw_Value
        (rtb_TmpSignalConversionAtLeM_mj);

    /* Outport: '<Root>/VeMTIR_M_MtrB_MinTorqRaw' incorporates:
     *  SignalConversion generated from: '<S29>/VeMTIR_M_MtrB_MinTorqRaw'
     */
    (void)Rte_Write_VeMTIR_M_MtrB_MinTorqRaw_Value
        (rtb_TmpSignalConversionAtLeM_gv);

    /* Outport: '<Root>/VeMTIR_M_MtrB_TorqAchieved' incorporates:
     *  SignalConversion generated from: '<S29>/VeMTIR_M_MtrB_TorqAchieved'
     */
    (void)Rte_Write_VeMTIR_M_MtrB_TorqAchieved_Value(rtb_Sum2_oi);

    /* S-Function (fcgen): '<S29>/FcnCallGen' incorporates:
     *  SubSystem: '<S29>/ProcessOutput'
     */
    /* Outport: '<Root>/VeMTIR_M_MtrB_TorqAchievedCnvrtd' incorporates:
     *  Constant: '<S489>/Calib'
     *  Product: '<S112>/Product'
     *  SignalConversion generated from: '<S29>/VeMTIR_M_MtrB_TorqAchievedCnvrtd'
     */
    (void)Rte_Write_VeMTIR_M_MtrB_TorqAchievedCnvrtd_Value(rtb_Sum2_oi *
        KeMTIR_Cf_CnvrtEMSpdToCltchSpd);

    /* End of Outputs for S-Function (fcgen): '<S29>/FcnCallGen' */

    /* Outport: '<Root>/VeMTIR_M_MtrB_TorqAchieved_AEMD' incorporates:
     *  SignalConversion generated from: '<S29>/VeMTIR_M_MtrB_TorqAchieved_AEMD'
     */
    (void)Rte_Write_VeMTIR_M_MtrB_TorqAchieved_AEMD_Value(rtb_Switch1_od);

    /* Outport: '<Root>/VeMTIR_M_MtrC_MaxTorqRaw' incorporates:
     *  SignalConversion generated from: '<S29>/VeMTIR_M_MtrC_MaxTorqRaw'
     */
    (void)Rte_Write_VeMTIR_M_MtrC_MaxTorqRaw_Value
        (MTIR_ac_B.VariantMerge_For_Variant_Source);

    /* Outport: '<Root>/VeMTIR_M_MtrC_MinTorqRaw' incorporates:
     *  SignalConversion generated from: '<S29>/VeMTIR_M_MtrC_MinTorqRaw'
     */
    (void)Rte_Write_VeMTIR_M_MtrC_MinTorqRaw_Value
        (MTIR_ac_B.VariantMerge_For_Variant_Sour_p);

    /* Outport: '<Root>/VeMTIR_M_MtrC_TorqAchieved' incorporates:
     *  SignalConversion generated from: '<S29>/VeMTIR_M_MtrC_TorqAchieved'
     */
    (void)Rte_Write_VeMTIR_M_MtrC_TorqAchieved_Value(rtb_Add);

    /* Outport: '<Root>/VeMTIR_M_MtrC_TorqAchieved_AEMD' incorporates:
     *  SignalConversion generated from: '<S29>/VeMTIR_M_MtrC_TorqAchieved_AEMD'
     */
    (void)Rte_Write_VeMTIR_M_MtrC_TorqAchieved_AEMD_Value
        (rtb_TmpSignalConversionAtLeM_mi);

    /* Outport: '<Root>/VeMTIR_M_P2SpdCntrlMaxTrqLmt' incorporates:
     *  SignalConversion generated from: '<S29>/VeMTIR_M_P2SpdCntrlMaxTrqLmt'
     */
    (void)Rte_Write_VeMTIR_M_P2SpdCntrlMaxTrqLmt_Value
        (rtb_TmpSignalConversionAtLeM_d4);

    /* Outport: '<Root>/VeMTIR_M_P2SpdCntrlMinTrqLmt' incorporates:
     *  SignalConversion generated from: '<S29>/VeMTIR_M_P2SpdCntrlMinTrqLmt'
     */
    (void)Rte_Write_VeMTIR_M_P2SpdCntrlMinTrqLmt_Value
        (rtb_TmpSignalConversionAtLe_csn);

    /* S-Function (fcgen): '<S29>/FcnCallGen' incorporates:
     *  SubSystem: '<S29>/MTIC'
     */
    /* Outport: '<Root>/VeMTIR_b_InrtaCompAllwd' incorporates:
     *  Constant: '<S131>/Calib'
     *  Constant: '<S132>/Calib'
     *  Logic: '<S114>/Logical'
     *  Merge: '<Root>/Merge_41_Irv'
     *  Merge: '<Root>/Merge_43_Irv'
     *  RelationalOperator: '<S114>/Comparison'
     *  RelationalOperator: '<S114>/Comparison2'
     *  SignalConversion generated from: '<S29>/VeMTIR_b_InrtaCompAllwd'
     *  SignalConversion generated from: '<S29>/LeMTIR_M_MtrBMaxTrqLmt_TCM_write_read'
     *  SignalConversion generated from: '<S29>/LeMTIR_M_MtrBMinTrqLmt_TCM_write_read'
     */
    (void)Rte_Write_VeMTIR_b_InrtaCompAllwd_Value
        ((Rte_IrvRead_MTIR_FastTEF_VeMTIR_M_MtrBMaxTrqLmt_TCM_write_IRV() >
          KeMTIR_M_MtrBMaxTCMTrqThrs) &&
         (Rte_IrvRead_MTIR_FastTEF_VeMTIR_M_MtrBMinTrqLmt_TCM_write_IRV() <
          KeMTIR_M_MtrBMinTCMTrqThrs));

    /* End of Outputs for S-Function (fcgen): '<S29>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Output function */
FUNC(void, MTIR_CODE) FsftMTIR_M_MtrACapabilityMax(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMTIR_M_MtrACapabilityMax' */
    /* Chart: '<S1>/FsftMTIR_M_MtrACapabilityMaxChrt' */
    /* Gateway: FsftMTIR_M_MtrACapabilityMax/FsftMTIR_M_MtrACapabilityMaxChrt */
    /* During: FsftMTIR_M_MtrACapabilityMax/FsftMTIR_M_MtrACapabilityMaxChrt */
    /* Entry Internal: FsftMTIR_M_MtrACapabilityMax/FsftMTIR_M_MtrACapabilityMaxChrt */
    /* Transition: '<S83>:2' */
    if (KeMTIR_b_EnblMtrsTrqCpbltyCrv)
    {
        /* Transition: '<S83>:36' */
        /* Transition: '<S83>:40' */
        MTIR_ac_B.LeMTIR_b_MtrAMaxCpbltyTrqRcvd_o = false;

        /* Transition: '<S83>:41' */
    }
    else
    {
        /* Transition: '<S83>:37' */
    }

    /* End of Chart: '<S1>/FsftMTIR_M_MtrACapabilityMaxChrt' */

    /* Merge: '<Root>/Merge_6' incorporates:
     *  SignalConversion generated from: '<S1>/VeMTIR_b_MtrAMaxCpbltyTrqRcvd_write'
     * */
    Rte_IrvWrite_FsftMTIR_M_MtrACapabilityMax_VeMTIR_b_MtrAMaxCpbltyTrqRcvd_write_IRV
        (MTIR_ac_B.LeMTIR_b_MtrAMaxCpbltyTrqRcvd_o);

    /* End of Outputs for SubSystem: '<Root>/FsftMTIR_M_MtrACapabilityMax' */
}

/* Output function */
FUNC(void, MTIR_CODE) FsftMTIR_M_MtrACapabilityMin(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMTIR_M_MtrACapabilityMin' */
    /* Chart: '<S2>/FsftMTIR_M_MtrACapabilityMinChrt' */
    /* Gateway: FsftMTIR_M_MtrACapabilityMin/FsftMTIR_M_MtrACapabilityMinChrt */
    /* During: FsftMTIR_M_MtrACapabilityMin/FsftMTIR_M_MtrACapabilityMinChrt */
    /* Entry Internal: FsftMTIR_M_MtrACapabilityMin/FsftMTIR_M_MtrACapabilityMinChrt */
    /* Transition: '<S84>:2' */
    if (KeMTIR_b_EnblMtrsTrqCpbltyCrv)
    {
        /* Transition: '<S84>:36' */
        /* Transition: '<S84>:40' */
        MTIR_ac_B.LeMTIR_b_MtrAMinCpbltyTrqRcvd_c = false;

        /* Transition: '<S84>:41' */
    }
    else
    {
        /* Transition: '<S84>:37' */
    }

    /* End of Chart: '<S2>/FsftMTIR_M_MtrACapabilityMinChrt' */

    /* Merge: '<Root>/Merge_8' incorporates:
     *  SignalConversion generated from: '<S2>/VeMTIR_b_MtrAMinCpbltyTrqRcvd_write'
     * */
    Rte_IrvWrite_FsftMTIR_M_MtrACapabilityMin_VeMTIR_b_MtrAMinCpbltyTrqRcvd_write_IRV
        (MTIR_ac_B.LeMTIR_b_MtrAMinCpbltyTrqRcvd_c);

    /* End of Outputs for SubSystem: '<Root>/FsftMTIR_M_MtrACapabilityMin' */
}

/* Output function */
FUNC(void, MTIR_CODE) FsftMTIR_M_MtrA_MaxTorq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMTIR_M_MtrA_MaxTorq' */
    /* Merge: '<Root>/Merge_34' incorporates:
     *  Chart: '<S3>/FsftMTIR_M_MtrA_MaxTorqChrt'
     *  SignalConversion generated from: '<S3>/VeMTIR_M_MtrA_MaxTorq_write'
     */
    /* Gateway: FsftMTIR_M_MtrA_MaxTorq/FsftMTIR_M_MtrA_MaxTorqChrt */
    /* During: FsftMTIR_M_MtrA_MaxTorq/FsftMTIR_M_MtrA_MaxTorqChrt */
    /* Entry Internal: FsftMTIR_M_MtrA_MaxTorq/FsftMTIR_M_MtrA_MaxTorqChrt */
    /* Transition: '<S85>:2' */
    Rte_IrvWrite_FsftMTIR_M_MtrA_MaxTorq_VeMTIR_M_MtrA_MaxTorq_write_IRV(0.0F);

    /* Merge: '<Root>/Merge_33' incorporates:
     *  Chart: '<S3>/FsftMTIR_M_MtrA_MaxTorqChrt'
     *  SignalConversion generated from: '<S3>/VeMTIR_b_MtrA_MaxTorqSgnl_Rcvd_write'
     */
    Rte_IrvWrite_FsftMTIR_M_MtrA_MaxTorq_VeMTIR_b_MtrA_MaxTorqSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftMTIR_M_MtrA_MaxTorq' */
}

/* Output function */
FUNC(void, MTIR_CODE) FsftMTIR_M_MtrA_MinTorq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMTIR_M_MtrA_MinTorq' */
    /* Merge: '<Root>/Merge_36' incorporates:
     *  Chart: '<S4>/FsftMTIR_M_MtrA_MinTorqChrt'
     *  SignalConversion generated from: '<S4>/VeMTIR_M_MtrA_MinTorq_write'
     */
    /* Gateway: FsftMTIR_M_MtrA_MinTorq/FsftMTIR_M_MtrA_MinTorqChrt */
    /* During: FsftMTIR_M_MtrA_MinTorq/FsftMTIR_M_MtrA_MinTorqChrt */
    /* Entry Internal: FsftMTIR_M_MtrA_MinTorq/FsftMTIR_M_MtrA_MinTorqChrt */
    /* Transition: '<S86>:2' */
    Rte_IrvWrite_FsftMTIR_M_MtrA_MinTorq_VeMTIR_M_MtrA_MinTorq_write_IRV(0.0F);

    /* Merge: '<Root>/Merge_35' incorporates:
     *  Chart: '<S4>/FsftMTIR_M_MtrA_MinTorqChrt'
     *  SignalConversion generated from: '<S4>/VeMTIR_b_MtrA_MinTorqSgnl_Rcvd_write'
     */
    Rte_IrvWrite_FsftMTIR_M_MtrA_MinTorq_VeMTIR_b_MtrA_MinTorqSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftMTIR_M_MtrA_MinTorq' */
}

/* Output function */
FUNC(void, MTIR_CODE) FsftMTIR_M_MtrA_TorqAchieved(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMTIR_M_MtrA_TorqAchieved' */
    /* Merge: '<Root>/Merge_30' incorporates:
     *  Chart: '<S5>/FsftMTIR_M_MtrA_TorqAchievedChrt'
     *  SignalConversion generated from: '<S5>/VeMTIR_M_MtrA_TorqAchieved_write'
     */
    /* Gateway: FsftMTIR_M_MtrA_TorqAchieved/FsftMTIR_M_MtrA_TorqAchievedChrt */
    /* During: FsftMTIR_M_MtrA_TorqAchieved/FsftMTIR_M_MtrA_TorqAchievedChrt */
    /* Entry Internal: FsftMTIR_M_MtrA_TorqAchieved/FsftMTIR_M_MtrA_TorqAchievedChrt */
    /* Transition: '<S87>:2' */
    Rte_IrvWrite_FsftMTIR_M_MtrA_TorqAchieved_VeMTIR_M_MtrA_TorqAchieved_write_IRV
        (0.0F);

    /* Merge: '<Root>/Merge_31' incorporates:
     *  Chart: '<S5>/FsftMTIR_M_MtrA_TorqAchievedChrt'
     *  SignalConversion generated from: '<S5>/VeMTIR_b_MtrA_TorqAchievedFA_write'
     */
    Rte_IrvWrite_FsftMTIR_M_MtrA_TorqAchieved_VeMTIR_b_MtrA_TorqAchievedFA_write_IRV
        (true);

    /* Merge: '<Root>/Merge_32' incorporates:
     *  Chart: '<S5>/FsftMTIR_M_MtrA_TorqAchievedChrt'
     *  SignalConversion generated from: '<S5>/VeMTIR_b_MtrA_TorqAchievedSgnl_Rcvd_write'
     */
    Rte_IrvWrite_FsftMTIR_M_MtrA_TorqAchieved_VeMTIR_b_MtrA_TorqAchievedSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftMTIR_M_MtrA_TorqAchieved' */
}

/* Output function */
FUNC(void, MTIR_CODE) FsftMTIR_M_MtrA_TorqAchieved_AEMD(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMTIR_M_MtrA_TorqAchieved_AEMD' */
    /* Merge: '<Root>/Merge_39' incorporates:
     *  Chart: '<S6>/FsftMTIR_M_MtrA_TorqAchieved_AEMDChrt'
     *  SignalConversion generated from: '<S6>/VeMTIR_M_MtrA_TorqAchieved_AEMD_write'
     */
    /* Gateway: FsftMTIR_M_MtrA_TorqAchieved_AEMD/FsftMTIR_M_MtrA_TorqAchieved_AEMDChrt */
    /* During: FsftMTIR_M_MtrA_TorqAchieved_AEMD/FsftMTIR_M_MtrA_TorqAchieved_AEMDChrt */
    /* Entry Internal: FsftMTIR_M_MtrA_TorqAchieved_AEMD/FsftMTIR_M_MtrA_TorqAchieved_AEMDChrt */
    /* Transition: '<S88>:2' */
    Rte_IrvWrite_FsftMTIR_M_MtrA_TorqAchieved_AEMD_VeMTIR_M_MtrA_TorqAchieved_AEMD_write_IRV
        (KeMTIR_M_MtrA_TorqAchieved_AEMD_FsftVal);

    /* Merge: '<Root>/Merge_38' incorporates:
     *  Chart: '<S6>/FsftMTIR_M_MtrA_TorqAchieved_AEMDChrt'
     *  SignalConversion generated from: '<S6>/VeMTIR_b_MtrA_TorqAchieved_AEMDFA_write'
     */
    Rte_IrvWrite_FsftMTIR_M_MtrA_TorqAchieved_AEMD_VeMTIR_b_MtrA_TorqAchieved_AEMDFA_write_IRV
        (true);

    /* Merge: '<Root>/Merge_37' incorporates:
     *  Chart: '<S6>/FsftMTIR_M_MtrA_TorqAchieved_AEMDChrt'
     *  SignalConversion generated from: '<S6>/VeMTIR_b_MtrA_TorqAchieved_AEMDSgnl_Rcvd_write'
     */
    Rte_IrvWrite_FsftMTIR_M_MtrA_TorqAchieved_AEMD_VeMTIR_b_MtrA_TorqAchieved_AEMDSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftMTIR_M_MtrA_TorqAchieved_AEMD' */
}

/* Output function */
FUNC(void, MTIR_CODE) FsftMTIR_M_MtrBCapabilityMax(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMTIR_M_MtrBCapabilityMax' */
    /* Chart: '<S7>/FsftMTIR_M_MtrBCapabilityMaxChrt' */
    /* Gateway: FsftMTIR_M_MtrBCapabilityMax/FsftMTIR_M_MtrBCapabilityMaxChrt */
    /* During: FsftMTIR_M_MtrBCapabilityMax/FsftMTIR_M_MtrBCapabilityMaxChrt */
    /* Entry Internal: FsftMTIR_M_MtrBCapabilityMax/FsftMTIR_M_MtrBCapabilityMaxChrt */
    /* Transition: '<S89>:2' */
    if (KeMTIR_b_EnblMtrsTrqCpbltyCrv)
    {
        /* Transition: '<S89>:34' */
        /* Transition: '<S89>:39' */
        MTIR_ac_B.LeMTIR_b_MtrBMaxCpbltyTrqRcvd = false;

        /* Transition: '<S89>:40' */
    }
    else
    {
        /* Transition: '<S89>:35' */
    }

    /* End of Chart: '<S7>/FsftMTIR_M_MtrBCapabilityMaxChrt' */

    /* Merge: '<Root>/Merge_15' incorporates:
     *  SignalConversion generated from: '<S7>/VeMTIR_b_MtrBMaxCpbltyTrqRcvd_write'
     * */
    Rte_IrvWrite_FsftMTIR_M_MtrBCapabilityMax_VeMTIR_b_MtrBMaxCpbltyTrqRcvd_write_IRV
        (MTIR_ac_B.LeMTIR_b_MtrBMaxCpbltyTrqRcvd);

    /* End of Outputs for SubSystem: '<Root>/FsftMTIR_M_MtrBCapabilityMax' */
}

/* Output function */
FUNC(void, MTIR_CODE) FsftMTIR_M_MtrBCapabilityMin(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMTIR_M_MtrBCapabilityMin' */
    /* Chart: '<S8>/FsftMTIR_M_MtrBCapabilityMinChrt' */
    /* Gateway: FsftMTIR_M_MtrBCapabilityMin/FsftMTIR_M_MtrBCapabilityMinChrt */
    /* During: FsftMTIR_M_MtrBCapabilityMin/FsftMTIR_M_MtrBCapabilityMinChrt */
    /* Entry Internal: FsftMTIR_M_MtrBCapabilityMin/FsftMTIR_M_MtrBCapabilityMinChrt */
    /* Transition: '<S90>:2' */
    if (KeMTIR_b_EnblMtrsTrqCpbltyCrv)
    {
        /* Transition: '<S90>:35' */
        /* Transition: '<S90>:39' */
        MTIR_ac_B.LeMTIR_b_MtrBMinCpbltyRcvd = false;

        /* Transition: '<S90>:40' */
    }
    else
    {
        /* Transition: '<S90>:36' */
    }

    /* End of Chart: '<S8>/FsftMTIR_M_MtrBCapabilityMinChrt' */

    /* Merge: '<Root>/Merge_17' incorporates:
     *  SignalConversion generated from: '<S8>/VeMTIR_b_MtrBMinCpbltyRcvd_write'
     * */
    Rte_IrvWrite_FsftMTIR_M_MtrBCapabilityMin_VeMTIR_b_MtrBMinCpbltyRcvd_write_IRV
        (MTIR_ac_B.LeMTIR_b_MtrBMinCpbltyRcvd);

    /* End of Outputs for SubSystem: '<Root>/FsftMTIR_M_MtrBCapabilityMin' */
}

/* Output function */
FUNC(void, MTIR_CODE) FsftMTIR_M_MtrBMaxTrqLmt_TCM(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMTIR_M_MtrBMaxTrqLmt_TCM' */
    /* Outport: '<Root>/VeMTIR_M_MtrBMaxTrqLmt_TCM' incorporates:
     *  Chart: '<S9>/FsftMTIR_M_MtrBMaxTrqLmt_TCMChrt'
     *  SignalConversion generated from: '<S9>/VeMTIR_M_MtrBMaxTrqLmt_TCM'
     */
    /* Gateway: FsftMTIR_M_MtrBMaxTrqLmt_TCM/FsftMTIR_M_MtrBMaxTrqLmt_TCMChrt */
    /* During: FsftMTIR_M_MtrBMaxTrqLmt_TCM/FsftMTIR_M_MtrBMaxTrqLmt_TCMChrt */
    /* Entry Internal: FsftMTIR_M_MtrBMaxTrqLmt_TCM/FsftMTIR_M_MtrBMaxTrqLmt_TCMChrt */
    /* Transition: '<S91>:2' */
    (void)Rte_Write_VeMTIR_M_MtrBMaxTrqLmt_TCM_Value
        (KeMTIR_M_MtrBMaxTrqLmt_TCMDflt);

    /* Outport: '<Root>/VeMTIR_M_MtrBMaxTrqLmt_TCMFA' incorporates:
     *  Chart: '<S9>/FsftMTIR_M_MtrBMaxTrqLmt_TCMChrt'
     *  SignalConversion generated from: '<S9>/VeMTIR_b_MtrBMaxTrqLmt_TCMFA'
     */
    (void)Rte_Write_VeMTIR_M_MtrBMaxTrqLmt_TCMFA_Value(true);

    /* Merge: '<Root>/Merge_41_Irv' incorporates:
     *  Chart: '<S9>/FsftMTIR_M_MtrBMaxTrqLmt_TCMChrt'
     *  SignalConversion generated from: '<S9>/VeMTIR_M_MtrBMaxTrqLmt_TCM_write'
     */
    Rte_IrvWrite_FsftMTIR_M_MtrBMaxTrqLmt_TCM_VeMTIR_M_MtrBMaxTrqLmt_TCM_write_IRV
        (KeMTIR_M_MtrBMaxTrqLmt_TCMDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftMTIR_M_MtrBMaxTrqLmt_TCM' */
}

/* Output function */
FUNC(void, MTIR_CODE) FsftMTIR_M_MtrBMinTrqLmt_TCM(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMTIR_M_MtrBMinTrqLmt_TCM' */
    /* Outport: '<Root>/VeMTIR_M_MtrBMinTrqLmt_TCM' incorporates:
     *  Chart: '<S10>/FsftMTIR_M_MtrBMinTrqLmt_TCMChrt'
     *  SignalConversion generated from: '<S10>/VeMTIR_M_MtrBMinTrqLmt_TCM'
     */
    /* Gateway: FsftMTIR_M_MtrBMinTrqLmt_TCM/FsftMTIR_M_MtrBMinTrqLmt_TCMChrt */
    /* During: FsftMTIR_M_MtrBMinTrqLmt_TCM/FsftMTIR_M_MtrBMinTrqLmt_TCMChrt */
    /* Entry Internal: FsftMTIR_M_MtrBMinTrqLmt_TCM/FsftMTIR_M_MtrBMinTrqLmt_TCMChrt */
    /* Transition: '<S92>:2' */
    (void)Rte_Write_VeMTIR_M_MtrBMinTrqLmt_TCM_Value
        (KeMTIR_M_MtrBMinTrqLmt_TCMDflt);

    /* Outport: '<Root>/VeMTIR_M_MtrBMinTrqLmt_TCMFA' incorporates:
     *  Chart: '<S10>/FsftMTIR_M_MtrBMinTrqLmt_TCMChrt'
     *  SignalConversion generated from: '<S10>/VeMTIR_b_MtrBMinTrqLmt_TCMFA'
     */
    (void)Rte_Write_VeMTIR_M_MtrBMinTrqLmt_TCMFA_Value(true);

    /* Merge: '<Root>/Merge_43_Irv' incorporates:
     *  Chart: '<S10>/FsftMTIR_M_MtrBMinTrqLmt_TCMChrt'
     *  SignalConversion generated from: '<S10>/VeMTIR_M_MtrBMinTrqLmt_TCM_write'
     */
    Rte_IrvWrite_FsftMTIR_M_MtrBMinTrqLmt_TCM_VeMTIR_M_MtrBMinTrqLmt_TCM_write_IRV
        (KeMTIR_M_MtrBMinTrqLmt_TCMDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftMTIR_M_MtrBMinTrqLmt_TCM' */
}

/* Output function */
FUNC(void, MTIR_CODE) FsftMTIR_M_MtrB_MaxTorq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMTIR_M_MtrB_MaxTorq' */
    /* Merge: '<Root>/Merge_45' incorporates:
     *  Chart: '<S11>/FsftMTIR_M_MtrB_MaxTorqChrt'
     *  SignalConversion generated from: '<S11>/VeMTIR_M_MtrB_MaxTorq_write'
     */
    /* Gateway: FsftMTIR_M_MtrB_MaxTorq/FsftMTIR_M_MtrB_MaxTorqChrt */
    /* During: FsftMTIR_M_MtrB_MaxTorq/FsftMTIR_M_MtrB_MaxTorqChrt */
    /* Entry Internal: FsftMTIR_M_MtrB_MaxTorq/FsftMTIR_M_MtrB_MaxTorqChrt */
    /* Transition: '<S93>:2' */
    Rte_IrvWrite_FsftMTIR_M_MtrB_MaxTorq_VeMTIR_M_MtrB_MaxTorq_write_IRV(0.0F);

    /* Merge: '<Root>/Merge_44' incorporates:
     *  Chart: '<S11>/FsftMTIR_M_MtrB_MaxTorqChrt'
     *  SignalConversion generated from: '<S11>/VeMTIR_b_MtrB_MaxTorqSgnl_Rcvd_write'
     */
    Rte_IrvWrite_FsftMTIR_M_MtrB_MaxTorq_VeMTIR_b_MtrB_MaxTorqSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftMTIR_M_MtrB_MaxTorq' */
}

/* Output function */
FUNC(void, MTIR_CODE) FsftMTIR_M_MtrB_MinTorq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMTIR_M_MtrB_MinTorq' */
    /* Merge: '<Root>/Merge_47' incorporates:
     *  Chart: '<S12>/FsftMTIR_M_MtrB_MinTorqChrt'
     *  SignalConversion generated from: '<S12>/VeMTIR_M_MtrB_MinTorq_write'
     */
    /* Gateway: FsftMTIR_M_MtrB_MinTorq/FsftMTIR_M_MtrB_MinTorqChrt */
    /* During: FsftMTIR_M_MtrB_MinTorq/FsftMTIR_M_MtrB_MinTorqChrt */
    /* Entry Internal: FsftMTIR_M_MtrB_MinTorq/FsftMTIR_M_MtrB_MinTorqChrt */
    /* Transition: '<S94>:2' */
    Rte_IrvWrite_FsftMTIR_M_MtrB_MinTorq_VeMTIR_M_MtrB_MinTorq_write_IRV(0.0F);

    /* Merge: '<Root>/Merge_46' incorporates:
     *  Chart: '<S12>/FsftMTIR_M_MtrB_MinTorqChrt'
     *  SignalConversion generated from: '<S12>/VeMTIR_b_MtrB_MinTorqSgnl_Rcvd_write'
     */
    Rte_IrvWrite_FsftMTIR_M_MtrB_MinTorq_VeMTIR_b_MtrB_MinTorqSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftMTIR_M_MtrB_MinTorq' */
}

/* Output function */
FUNC(void, MTIR_CODE) FsftMTIR_M_MtrB_TorqAchieved(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMTIR_M_MtrB_TorqAchieved' */
    /* Merge: '<Root>/Merge_49' incorporates:
     *  Chart: '<S13>/FsftMTIR_M_MtrB_TorqAchievedChrt'
     *  SignalConversion generated from: '<S13>/VeMTIR_M_MtrB_TorqAchieved_write'
     */
    /* Gateway: FsftMTIR_M_MtrB_TorqAchieved/FsftMTIR_M_MtrB_TorqAchievedChrt */
    /* During: FsftMTIR_M_MtrB_TorqAchieved/FsftMTIR_M_MtrB_TorqAchievedChrt */
    /* Entry Internal: FsftMTIR_M_MtrB_TorqAchieved/FsftMTIR_M_MtrB_TorqAchievedChrt */
    /* Transition: '<S95>:2' */
    Rte_IrvWrite_FsftMTIR_M_MtrB_TorqAchieved_VeMTIR_M_MtrB_TorqAchieved_write_IRV
        (0.0F);

    /* Merge: '<Root>/Merge_50' incorporates:
     *  Chart: '<S13>/FsftMTIR_M_MtrB_TorqAchievedChrt'
     *  SignalConversion generated from: '<S13>/VeMTIR_b_MtrB_TorqAchievedFA_write'
     */
    Rte_IrvWrite_FsftMTIR_M_MtrB_TorqAchieved_VeMTIR_b_MtrB_TorqAchievedFA_write_IRV
        (true);

    /* Merge: '<Root>/Merge_48' incorporates:
     *  Chart: '<S13>/FsftMTIR_M_MtrB_TorqAchievedChrt'
     *  SignalConversion generated from: '<S13>/VeMTIR_b_MtrB_TorqAchievedSgnl_Rcvd_write'
     */
    Rte_IrvWrite_FsftMTIR_M_MtrB_TorqAchieved_VeMTIR_b_MtrB_TorqAchievedSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftMTIR_M_MtrB_TorqAchieved' */
}

/* Output function */
FUNC(void, MTIR_CODE) FsftMTIR_M_MtrB_TorqAchieved_AEMD(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMTIR_M_MtrB_TorqAchieved_AEMD' */
    /* Merge: '<Root>/Merge_53' incorporates:
     *  Chart: '<S14>/FsftMTIR_M_MtrB_TorqAchieved_AEMDChrt'
     *  SignalConversion generated from: '<S14>/VeMTIR_M_MtrB_TorqAchieved_AEMD_write'
     */
    /* Gateway: FsftMTIR_M_MtrB_TorqAchieved_AEMD/FsftMTIR_M_MtrB_TorqAchieved_AEMDChrt */
    /* During: FsftMTIR_M_MtrB_TorqAchieved_AEMD/FsftMTIR_M_MtrB_TorqAchieved_AEMDChrt */
    /* Entry Internal: FsftMTIR_M_MtrB_TorqAchieved_AEMD/FsftMTIR_M_MtrB_TorqAchieved_AEMDChrt */
    /* Transition: '<S96>:2' */
    Rte_IrvWrite_FsftMTIR_M_MtrB_TorqAchieved_AEMD_VeMTIR_M_MtrB_TorqAchieved_AEMD_write_IRV
        (KeMTIR_M_MtrB_TorqAchieved_AEMD_FsftVal);

    /* Merge: '<Root>/Merge_52' incorporates:
     *  Chart: '<S14>/FsftMTIR_M_MtrB_TorqAchieved_AEMDChrt'
     *  SignalConversion generated from: '<S14>/VeMTIR_b_MtrB_TorqAchieved_AEMDFA_write'
     */
    Rte_IrvWrite_FsftMTIR_M_MtrB_TorqAchieved_AEMD_VeMTIR_b_MtrB_TorqAchieved_AEMDFA_write_IRV
        (true);

    /* Merge: '<Root>/Merge_51' incorporates:
     *  Chart: '<S14>/FsftMTIR_M_MtrB_TorqAchieved_AEMDChrt'
     *  SignalConversion generated from: '<S14>/VeMTIR_b_MtrB_TorqAchieved_AEMDSgnl_Rcvd_write'
     */
    Rte_IrvWrite_FsftMTIR_M_MtrB_TorqAchieved_AEMD_VeMTIR_b_MtrB_TorqAchieved_AEMDSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftMTIR_M_MtrB_TorqAchieved_AEMD' */
}

/* Output function */
FUNC(void, MTIR_CODE) FsftMTIR_M_MtrCCapabilityMax(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMTIR_M_MtrCCapabilityMax' */
    /* Chart: '<S15>/FsftMTIR_M_MtrCCapabilityMaxChrt' */
    /* Gateway: FsftMTIR_M_MtrCCapabilityMax/FsftMTIR_M_MtrCCapabilityMaxChrt */
    /* During: FsftMTIR_M_MtrCCapabilityMax/FsftMTIR_M_MtrCCapabilityMaxChrt */
    /* Entry Internal: FsftMTIR_M_MtrCCapabilityMax/FsftMTIR_M_MtrCCapabilityMaxChrt */
    /* Transition: '<S97>:2' */
    if (KeMTIR_b_EnblMtrsTrqCpbltyCrv)
    {
        /* Transition: '<S97>:34' */
        /* Transition: '<S97>:39' */
        MTIR_ac_B.LeMTIR_b_MtrCMaxCpbltyTrqRcvd_h = false;

        /* Transition: '<S97>:40' */
    }
    else
    {
        /* Transition: '<S97>:35' */
    }

    /* End of Chart: '<S15>/FsftMTIR_M_MtrCCapabilityMaxChrt' */

    /* SignalConversion generated from: '<S15>/FsftMTIR_M_MtrCCapabilityMaxChrt' incorporates:
     *  SignalConversion generated from: '<S15>/VeMTIR_b_MtrCMaxCpbltyTrqRcvd_write'
     */
#if Rte_SysCon_Variant_MTIR_1

    /* Merge: '<Root>/Merge_24' */
    Rte_IrvWrite_FsftMTIR_M_MtrCCapabilityMax_VeMTIR_b_MtrCMaxCpbltyTrqRcvd_write_IRV
        (MTIR_ac_B.LeMTIR_b_MtrCMaxCpbltyTrqRcvd_h);

#endif

    /* End of SignalConversion generated from: '<S15>/FsftMTIR_M_MtrCCapabilityMaxChrt' */
    /* End of Outputs for SubSystem: '<Root>/FsftMTIR_M_MtrCCapabilityMax' */
}

/* Output function */
FUNC(void, MTIR_CODE) FsftMTIR_M_MtrCCapabilityMin(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMTIR_M_MtrCCapabilityMin' */
    /* Chart: '<S16>/FsftMTIR_M_MtrCCapabilityMinChrt' */
    /* Gateway: FsftMTIR_M_MtrCCapabilityMin/FsftMTIR_M_MtrCCapabilityMinChrt */
    /* During: FsftMTIR_M_MtrCCapabilityMin/FsftMTIR_M_MtrCCapabilityMinChrt */
    /* Entry Internal: FsftMTIR_M_MtrCCapabilityMin/FsftMTIR_M_MtrCCapabilityMinChrt */
    /* Transition: '<S98>:2' */
    if (KeMTIR_b_EnblMtrsTrqCpbltyCrv)
    {
        /* Transition: '<S98>:35' */
        /* Transition: '<S98>:39' */
        MTIR_ac_B.LeMTIR_b_MtrCMinCpbltyRcvd = false;

        /* Transition: '<S98>:40' */
    }
    else
    {
        /* Transition: '<S98>:36' */
    }

    /* End of Chart: '<S16>/FsftMTIR_M_MtrCCapabilityMinChrt' */

    /* SignalConversion generated from: '<S16>/FsftMTIR_M_MtrCCapabilityMinChrt' incorporates:
     *  SignalConversion generated from: '<S16>/VeMTIR_b_MtrCMinCpbltyRcvd_write'
     */
#if Rte_SysCon_Variant_MTIR_1

    /* Merge: '<Root>/Merge_26' */
    Rte_IrvWrite_FsftMTIR_M_MtrCCapabilityMin_VeMTIR_b_MtrCMinCpbltyRcvd_write_IRV
        (MTIR_ac_B.LeMTIR_b_MtrCMinCpbltyRcvd);

#endif

    /* End of SignalConversion generated from: '<S16>/FsftMTIR_M_MtrCCapabilityMinChrt' */
    /* End of Outputs for SubSystem: '<Root>/FsftMTIR_M_MtrCCapabilityMin' */
}

/* Output function */
FUNC(void, MTIR_CODE) FsftMTIR_M_MtrC_MaxTorq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMTIR_M_MtrC_MaxTorq' */
    /* SignalConversion generated from: '<S17>/FsftMTIR_M_MtrC_MaxTorqChrt' incorporates:
     *  SignalConversion generated from: '<S17>/VeMTIR_M_MtrC_MaxTorq_write'
     *  SignalConversion generated from: '<S17>/VeMTIR_b_MtrC_MaxTorqSgnl_Rcvd_write'
     */
    /* Gateway: FsftMTIR_M_MtrC_MaxTorq/FsftMTIR_M_MtrC_MaxTorqChrt */
    /* During: FsftMTIR_M_MtrC_MaxTorq/FsftMTIR_M_MtrC_MaxTorqChrt */
    /* Entry Internal: FsftMTIR_M_MtrC_MaxTorq/FsftMTIR_M_MtrC_MaxTorqChrt */
    /* Transition: '<S99>:2' */
#if Rte_SysCon_Variant_MTIR_1

    /* Merge: '<Root>/Merge_55' incorporates:
     *  Chart: '<S17>/FsftMTIR_M_MtrC_MaxTorqChrt'
     */
    Rte_IrvWrite_FsftMTIR_M_MtrC_MaxTorq_VeMTIR_M_MtrC_MaxTorq_write_IRV(0.0F);

    /* Merge: '<Root>/Merge_54' incorporates:
     *  Chart: '<S17>/FsftMTIR_M_MtrC_MaxTorqChrt'
     */
    Rte_IrvWrite_FsftMTIR_M_MtrC_MaxTorq_VeMTIR_b_MtrC_MaxTorqSgnl_Rcvd_write_IRV
        (false);

#endif

    /* End of SignalConversion generated from: '<S17>/FsftMTIR_M_MtrC_MaxTorqChrt' */
    /* End of Outputs for SubSystem: '<Root>/FsftMTIR_M_MtrC_MaxTorq' */
}

/* Output function */
FUNC(void, MTIR_CODE) FsftMTIR_M_MtrC_MinTorq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMTIR_M_MtrC_MinTorq' */
    /* SignalConversion generated from: '<S18>/FsftMTIR_M_MtrC_MinTorqChrt' incorporates:
     *  SignalConversion generated from: '<S18>/VeMTIR_M_MtrC_MinTorq_write'
     *  SignalConversion generated from: '<S18>/VeMTIR_b_MtrC_MinTorqSgnl_Rcvd_write'
     */
    /* Gateway: FsftMTIR_M_MtrC_MinTorq/FsftMTIR_M_MtrC_MinTorqChrt */
    /* During: FsftMTIR_M_MtrC_MinTorq/FsftMTIR_M_MtrC_MinTorqChrt */
    /* Entry Internal: FsftMTIR_M_MtrC_MinTorq/FsftMTIR_M_MtrC_MinTorqChrt */
    /* Transition: '<S100>:2' */
#if Rte_SysCon_Variant_MTIR_1

    /* Merge: '<Root>/Merge_57' incorporates:
     *  Chart: '<S18>/FsftMTIR_M_MtrC_MinTorqChrt'
     */
    Rte_IrvWrite_FsftMTIR_M_MtrC_MinTorq_VeMTIR_M_MtrC_MinTorq_write_IRV(0.0F);

    /* Merge: '<Root>/Merge_56' incorporates:
     *  Chart: '<S18>/FsftMTIR_M_MtrC_MinTorqChrt'
     */
    Rte_IrvWrite_FsftMTIR_M_MtrC_MinTorq_VeMTIR_b_MtrC_MinTorqSgnl_Rcvd_write_IRV
        (false);

#endif

    /* End of SignalConversion generated from: '<S18>/FsftMTIR_M_MtrC_MinTorqChrt' */
    /* End of Outputs for SubSystem: '<Root>/FsftMTIR_M_MtrC_MinTorq' */
}

/* Output function */
FUNC(void, MTIR_CODE) FsftMTIR_M_MtrC_TorqAchieved(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMTIR_M_MtrC_TorqAchieved' */
    /* SignalConversion generated from: '<S19>/FsftMTIR_M_MtrC_TorqAchievedChrt' incorporates:
     *  SignalConversion generated from: '<S19>/VeMTIR_M_MtrC_TorqAchieved_write'
     *  SignalConversion generated from: '<S19>/VeMTIR_b_MtrC_TorqAchievedFA_write'
     */
    /* Gateway: FsftMTIR_M_MtrC_TorqAchieved/FsftMTIR_M_MtrC_TorqAchievedChrt */
    /* During: FsftMTIR_M_MtrC_TorqAchieved/FsftMTIR_M_MtrC_TorqAchievedChrt */
    /* Entry Internal: FsftMTIR_M_MtrC_TorqAchieved/FsftMTIR_M_MtrC_TorqAchievedChrt */
    /* Transition: '<S101>:2' */
#if Rte_SysCon_Variant_MTIR_1

    /* Merge: '<Root>/Merge_59' incorporates:
     *  Chart: '<S19>/FsftMTIR_M_MtrC_TorqAchievedChrt'
     */
    Rte_IrvWrite_FsftMTIR_M_MtrC_TorqAchieved_VeMTIR_M_MtrC_TorqAchieved_write_IRV
        (0.0F);

    /* Merge: '<Root>/Merge_60' incorporates:
     *  Chart: '<S19>/FsftMTIR_M_MtrC_TorqAchievedChrt'
     */
    Rte_IrvWrite_FsftMTIR_M_MtrC_TorqAchieved_VeMTIR_b_MtrC_TorqAchievedFA_write_IRV
        (true);

#endif

    /* End of SignalConversion generated from: '<S19>/FsftMTIR_M_MtrC_TorqAchievedChrt' */

    /* Merge: '<Root>/Merge_58' incorporates:
     *  Chart: '<S19>/FsftMTIR_M_MtrC_TorqAchievedChrt'
     *  SignalConversion generated from: '<S19>/VeMTIR_b_MtrC_TorqAchievedSgnl_Rcvd_write'
     */
    Rte_IrvWrite_FsftMTIR_M_MtrC_TorqAchieved_VeMTIR_b_MtrC_TorqAchievedSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftMTIR_M_MtrC_TorqAchieved' */
}

/* Output function */
FUNC(void, MTIR_CODE) FsftMTIR_M_MtrC_TorqAchieved_AEMD(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMTIR_M_MtrC_TorqAchieved_AEMD' */
    /* SignalConversion generated from: '<S20>/FsftMTIR_M_MtrC_TorqAchieved_AEMDChrt' incorporates:
     *  SignalConversion generated from: '<S20>/VeMTIR_M_MtrC_TorqAchieved_AEMD_write'
     *  SignalConversion generated from: '<S20>/VeMTIR_b_MtrC_TorqAchieved_AEMDFA_write'
     */
    /* Gateway: FsftMTIR_M_MtrC_TorqAchieved_AEMD/FsftMTIR_M_MtrC_TorqAchieved_AEMDChrt */
    /* During: FsftMTIR_M_MtrC_TorqAchieved_AEMD/FsftMTIR_M_MtrC_TorqAchieved_AEMDChrt */
    /* Entry Internal: FsftMTIR_M_MtrC_TorqAchieved_AEMD/FsftMTIR_M_MtrC_TorqAchieved_AEMDChrt */
    /* Transition: '<S102>:2' */
#if Rte_SysCon_Variant_MTIR_1

    /* Merge: '<Root>/Merge_62' incorporates:
     *  Chart: '<S20>/FsftMTIR_M_MtrC_TorqAchieved_AEMDChrt'
     */
    Rte_IrvWrite_FsftMTIR_M_MtrC_TorqAchieved_AEMD_VeMTIR_M_MtrC_TorqAchieved_AEMD_write_IRV
        (KeMTIR_M_MtrC_TorqAchieved_AEMD_FsftVal);

    /* Merge: '<Root>/Merge_61' incorporates:
     *  Chart: '<S20>/FsftMTIR_M_MtrC_TorqAchieved_AEMDChrt'
     */
    Rte_IrvWrite_FsftMTIR_M_MtrC_TorqAchieved_AEMD_VeMTIR_b_MtrC_TorqAchieved_AEMDFA_write_IRV
        (true);

#endif

    /* End of SignalConversion generated from: '<S20>/FsftMTIR_M_MtrC_TorqAchieved_AEMDChrt' */

    /* Merge: '<Root>/Merge_63' incorporates:
     *  Chart: '<S20>/FsftMTIR_M_MtrC_TorqAchieved_AEMDChrt'
     *  SignalConversion generated from: '<S20>/VeMTIR_b_MtrC_TorqAchieved_AEMDSgnl_Rcvd_write'
     */
    Rte_IrvWrite_FsftMTIR_M_MtrC_TorqAchieved_AEMD_VeMTIR_b_MtrC_TorqAchieved_AEMDSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftMTIR_M_MtrC_TorqAchieved_AEMD' */
}

/* Output function */
FUNC(void, MTIR_CODE) FsftMTIR_M_P2SpdCntrlMaxTrqLmt(void)
{
    /* Gateway: FsftMTIR_M_P2SpdCntrlMaxTrqLmt/FsftMTIR_M_P2SpdCntrlMaxTrqLmtChrt */
    /* During: FsftMTIR_M_P2SpdCntrlMaxTrqLmt/FsftMTIR_M_P2SpdCntrlMaxTrqLmtChrt */
    /* Entry Internal: FsftMTIR_M_P2SpdCntrlMaxTrqLmt/FsftMTIR_M_P2SpdCntrlMaxTrqLmtChrt */
    /* Transition: '<S103>:2' */
}

/* Output function */
FUNC(void, MTIR_CODE) FsftMTIR_M_P2SpdCntrlMinTrqLmt(void)
{
    /* Gateway: FsftMTIR_M_P2SpdCntrlMinTrqLmt/FsftMTIR_M_P2SpdCntrlMinTrqLmtChrt */
    /* During: FsftMTIR_M_P2SpdCntrlMinTrqLmt/FsftMTIR_M_P2SpdCntrlMinTrqLmtChrt */
    /* Entry Internal: FsftMTIR_M_P2SpdCntrlMinTrqLmt/FsftMTIR_M_P2SpdCntrlMinTrqLmtChrt */
    /* Transition: '<S104>:2' */
}

/* Output function */
FUNC(void, MTIR_CODE) FsftMTIR_k_MtrADeratingFactor(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMTIR_k_MtrADeratingFactor' */
    /* Chart: '<S23>/FsftMTIR_k_MtrADeratingFactorChrt' */
    /* Gateway: FsftMTIR_k_MtrADeratingFactor/FsftMTIR_k_MtrADeratingFactorChrt */
    /* During: FsftMTIR_k_MtrADeratingFactor/FsftMTIR_k_MtrADeratingFactorChrt */
    /* Entry Internal: FsftMTIR_k_MtrADeratingFactor/FsftMTIR_k_MtrADeratingFactorChrt */
    /* Transition: '<S105>:2' */
    if (KeMTIR_b_EnblMtrsTrqCpbltyCrv)
    {
        /* Transition: '<S105>:35' */
        /* Transition: '<S105>:39' */
        MTIR_ac_B.LeMTIR_b_MtrADrtngFctrRcvd_p = false;

        /* Transition: '<S105>:40' */
    }
    else
    {
        /* Transition: '<S105>:36' */
    }

    /* End of Chart: '<S23>/FsftMTIR_k_MtrADeratingFactorChrt' */

    /* Merge: '<Root>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S23>/VeMTIR_b_MtrADrtngFctrRcvd_write'
     * */
    Rte_IrvWrite_FsftMTIR_k_MtrADeratingFactor_VeMTIR_b_MtrADrtngFctrRcvd_write_IRV
        (MTIR_ac_B.LeMTIR_b_MtrADrtngFctrRcvd_p);

    /* End of Outputs for SubSystem: '<Root>/FsftMTIR_k_MtrADeratingFactor' */
}

/* Output function */
FUNC(void, MTIR_CODE) FsftMTIR_k_MtrBDeratingFactor(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMTIR_k_MtrBDeratingFactor' */
    /* Chart: '<S24>/FsftMTIR_k_MtrBDeratingFactorChrt' */
    /* Gateway: FsftMTIR_k_MtrBDeratingFactor/FsftMTIR_k_MtrBDeratingFactorChrt */
    /* During: FsftMTIR_k_MtrBDeratingFactor/FsftMTIR_k_MtrBDeratingFactorChrt */
    /* Entry Internal: FsftMTIR_k_MtrBDeratingFactor/FsftMTIR_k_MtrBDeratingFactorChrt */
    /* Transition: '<S106>:2' */
    if (KeMTIR_b_EnblMtrsTrqCpbltyCrv)
    {
        /* Transition: '<S106>:35' */
        /* Transition: '<S106>:39' */
        MTIR_ac_B.LeMTIR_b_MtrBDrtngFctrRcvd_b = false;

        /* Transition: '<S106>:40' */
    }
    else
    {
        /* Transition: '<S106>:36' */
    }

    /* End of Chart: '<S24>/FsftMTIR_k_MtrBDeratingFactorChrt' */

    /* Merge: '<Root>/Merge_12' incorporates:
     *  SignalConversion generated from: '<S24>/VeMTIR_b_MtrBDrtngFctrRcvd_write'
     * */
    Rte_IrvWrite_FsftMTIR_k_MtrBDeratingFactor_VeMTIR_b_MtrBDrtngFctrRcvd_write_IRV
        (MTIR_ac_B.LeMTIR_b_MtrBDrtngFctrRcvd_b);

    /* End of Outputs for SubSystem: '<Root>/FsftMTIR_k_MtrBDeratingFactor' */
}

/* Output function */
FUNC(void, MTIR_CODE) FsftMTIR_k_MtrCDeratingFactor(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMTIR_k_MtrCDeratingFactor' */
    /* Chart: '<S25>/FsftMTIR_k_MtrCDeratingFactorChrt' */
    /* Gateway: FsftMTIR_k_MtrCDeratingFactor/FsftMTIR_k_MtrCDeratingFactorChrt */
    /* During: FsftMTIR_k_MtrCDeratingFactor/FsftMTIR_k_MtrCDeratingFactorChrt */
    /* Entry Internal: FsftMTIR_k_MtrCDeratingFactor/FsftMTIR_k_MtrCDeratingFactorChrt */
    /* Transition: '<S107>:2' */
    if (KeMTIR_b_EnblMtrsTrqCpbltyCrv)
    {
        /* Transition: '<S107>:35' */
        /* Transition: '<S107>:39' */
        MTIR_ac_B.LeMTIR_b_MtrCDrtngFctrRcvd_j = false;

        /* Transition: '<S107>:40' */
    }
    else
    {
        /* Transition: '<S107>:36' */
    }

    /* End of Chart: '<S25>/FsftMTIR_k_MtrCDeratingFactorChrt' */

    /* SignalConversion generated from: '<S25>/FsftMTIR_k_MtrCDeratingFactorChrt' incorporates:
     *  SignalConversion generated from: '<S25>/VeMTIR_b_MtrCDrtngFctrRcvd_write'
     */
#if Rte_SysCon_Variant_MTIR_1

    /* Merge: '<Root>/Merge_21' */
    Rte_IrvWrite_FsftMTIR_k_MtrCDeratingFactor_VeMTIR_b_MtrCDrtngFctrRcvd_write_IRV
        (MTIR_ac_B.LeMTIR_b_MtrCDrtngFctrRcvd_j);

#endif

    /* End of SignalConversion generated from: '<S25>/FsftMTIR_k_MtrCDeratingFactorChrt' */
    /* End of Outputs for SubSystem: '<Root>/FsftMTIR_k_MtrCDeratingFactor' */
}

/* Output function */
FUNC(void, MTIR_CODE) FsftMTIR_n_MtrACapabilitySpd(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMTIR_n_MtrACapabilitySpd' */
    /* Chart: '<S26>/FsftMTIR_n_MtrACapabilitySpdChrt' */
    /* Gateway: FsftMTIR_n_MtrACapabilitySpd/FsftMTIR_n_MtrACapabilitySpdChrt */
    /* During: FsftMTIR_n_MtrACapabilitySpd/FsftMTIR_n_MtrACapabilitySpdChrt */
    /* Entry Internal: FsftMTIR_n_MtrACapabilitySpd/FsftMTIR_n_MtrACapabilitySpdChrt */
    /* Transition: '<S108>:2' */
    if (KeMTIR_b_EnblMtrsTrqCpbltyCrv)
    {
        /* Transition: '<S108>:35' */
        /* Transition: '<S108>:39' */
        MTIR_ac_B.LeMTIR_b_MtrACpbltySpdRcvd_p = false;

        /* Transition: '<S108>:40' */
    }
    else
    {
        /* Transition: '<S108>:41' */
    }

    /* End of Chart: '<S26>/FsftMTIR_n_MtrACapabilitySpdChrt' */

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S26>/VeMTIR_b_MtrACpbltySpdRcvd_write'
     * */
    Rte_IrvWrite_FsftMTIR_n_MtrACapabilitySpd_VeMTIR_b_MtrACpbltySpdRcvd_write_IRV
        (MTIR_ac_B.LeMTIR_b_MtrACpbltySpdRcvd_p);

    /* End of Outputs for SubSystem: '<Root>/FsftMTIR_n_MtrACapabilitySpd' */
}

/* Output function */
FUNC(void, MTIR_CODE) FsftMTIR_n_MtrBCapabilitySpd(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMTIR_n_MtrBCapabilitySpd' */
    /* Chart: '<S27>/FsftMTIR_n_MtrBCapabilitySpdChrt' */
    /* Gateway: FsftMTIR_n_MtrBCapabilitySpd/FsftMTIR_n_MtrBCapabilitySpdChrt */
    /* During: FsftMTIR_n_MtrBCapabilitySpd/FsftMTIR_n_MtrBCapabilitySpdChrt */
    /* Entry Internal: FsftMTIR_n_MtrBCapabilitySpd/FsftMTIR_n_MtrBCapabilitySpdChrt */
    /* Transition: '<S109>:2' */
    if (KeMTIR_b_EnblMtrsTrqCpbltyCrv)
    {
        /* Transition: '<S109>:35' */
        /* Transition: '<S109>:39' */
        MTIR_ac_B.LeMTIR_b_MtrBCpbltySpdRcvd_j = false;

        /* Transition: '<S109>:40' */
    }
    else
    {
        /* Transition: '<S109>:36' */
    }

    /* End of Chart: '<S27>/FsftMTIR_n_MtrBCapabilitySpdChrt' */

    /* Merge: '<Root>/Merge_10' incorporates:
     *  SignalConversion generated from: '<S27>/VeMTIR_b_MtrBCpbltySpdRcvd_write'
     * */
    Rte_IrvWrite_FsftMTIR_n_MtrBCapabilitySpd_VeMTIR_b_MtrBCpbltySpdRcvd_write_IRV
        (MTIR_ac_B.LeMTIR_b_MtrBCpbltySpdRcvd_j);

    /* End of Outputs for SubSystem: '<Root>/FsftMTIR_n_MtrBCapabilitySpd' */
}

/* Output function */
FUNC(void, MTIR_CODE) FsftMTIR_n_MtrCCapabilitySpd(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMTIR_n_MtrCCapabilitySpd' */
    /* Chart: '<S28>/FsftMTIR_n_MtrCCapabilitySpdChrt' */
    /* Gateway: FsftMTIR_n_MtrCCapabilitySpd/FsftMTIR_n_MtrCCapabilitySpdChrt */
    /* During: FsftMTIR_n_MtrCCapabilitySpd/FsftMTIR_n_MtrCCapabilitySpdChrt */
    /* Entry Internal: FsftMTIR_n_MtrCCapabilitySpd/FsftMTIR_n_MtrCCapabilitySpdChrt */
    /* Transition: '<S110>:2' */
    if (KeMTIR_b_EnblMtrsTrqCpbltyCrv)
    {
        /* Transition: '<S110>:35' */
        /* Transition: '<S110>:39' */
        MTIR_ac_B.LeMTIR_b_MtrCCpbltySpdRcvd_l = false;

        /* Transition: '<S110>:40' */
    }
    else
    {
        /* Transition: '<S110>:36' */
    }

    /* End of Chart: '<S28>/FsftMTIR_n_MtrCCapabilitySpdChrt' */

    /* SignalConversion generated from: '<S28>/FsftMTIR_n_MtrCCapabilitySpdChrt' incorporates:
     *  SignalConversion generated from: '<S28>/VeMTIR_b_MtrCCpbltySpdRcvd_write'
     */
#if Rte_SysCon_Variant_MTIR_1

    /* Merge: '<Root>/Merge_20' */
    Rte_IrvWrite_FsftMTIR_n_MtrCCapabilitySpd_VeMTIR_b_MtrCCpbltySpdRcvd_write_IRV
        (MTIR_ac_B.LeMTIR_b_MtrCCpbltySpdRcvd_l);

#endif

    /* End of SignalConversion generated from: '<S28>/FsftMTIR_n_MtrCCapabilitySpdChrt' */
    /* End of Outputs for SubSystem: '<Root>/FsftMTIR_n_MtrCCapabilitySpd' */
}

/* Output function */
FUNC(void, MTIR_CODE) PokeMTIR_M_MtrACapabilityMax(VAR(float32, AUTOMATIC)
    LeMTIR_M_MtrA_MaxTrq, VAR(uint8, AUTOMATIC) LeMTIR_Cnt_Index)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeMTIR_M_MtrACapabilityMax' */
    /* Chart: '<S31>/PokeMTIR_M_MtrACapabilityMaxChrt' incorporates:
     *  Constant: '<S559>/Calib'
     *  SignalConversion generated from: '<S31>/LeMTIR_Cnt_Index'
     *  SignalConversion generated from: '<S31>/LeMTIR_M_MtrA_MaxTrq'
     */
    /* Gateway: PokeMTIR_M_MtrACapabilityMax/PokeMTIR_M_MtrACapabilityMaxChrt */
    /* During: PokeMTIR_M_MtrACapabilityMax/PokeMTIR_M_MtrACapabilityMaxChrt */
    /* Entry Internal: PokeMTIR_M_MtrACapabilityMax/PokeMTIR_M_MtrACapabilityMaxChrt */
    /* Transition: '<S560>:2' */
    if (KeMTIR_b_EnblMtrsTrqCpbltyCrv)
    {
        /* Transition: '<S560>:26' */
        /* Transition: '<S560>:57' */
        MTIR_ac_B.LeMTIR_Cnt_MtrAMaxCpbltyIndx = LeMTIR_Cnt_Index;
        MTIR_ac_B.LeMTIR_b_MtrAMaxCpbltyTrqRcvd_g = true;
        if ((LeMTIR_M_MtrA_MaxTrq <= KeMTIR_M_MtrAMaxCpblty_MaxLmt) &&
                (LeMTIR_M_MtrA_MaxTrq >= KeMTIR_M_MtrAMaxCpblty_MinLmt))
        {
            /* Transition: '<S560>:53' */
            /* Transition: '<S560>:77' */
            MTIR_ac_B.VaMTIR_M_MtrAMaxCpbltyTrq_Poke[LeMTIR_Cnt_Index] =
                LeMTIR_M_MtrA_MaxTrq;

            /* Transition: '<S560>:79' */
        }
        else
        {
            /* Transition: '<S560>:80' */
        }

        /* Transition: '<S560>:84' */
        if (LeMTIR_M_MtrA_MaxTrq > KeMTIR_M_MtrAMaxCpblty_MaxLmt)
        {
            /* Transition: '<S560>:37' */
            /* Transition: '<S560>:82' */
            MTIR_ac_B.VaMTIR_M_MtrAMaxCpbltyTrq_Poke[LeMTIR_Cnt_Index] =
                KeMTIR_M_MtrAMaxCpblty_MaxLmt;

            /* Transition: '<S560>:83' */
        }
        else
        {
            /* Transition: '<S560>:39' */
        }

        /* Transition: '<S560>:86' */
        if (LeMTIR_M_MtrA_MaxTrq < KeMTIR_M_MtrAMaxCpblty_MinLmt)
        {
            /* Transition: '<S560>:46' */
            /* Transition: '<S560>:88' */
            MTIR_ac_B.VaMTIR_M_MtrAMaxCpbltyTrq_Poke[LeMTIR_Cnt_Index] =
                KeMTIR_M_MtrAMaxCpblty_MinLmt;

            /* Transition: '<S560>:91' */
        }
        else
        {
            /* Transition: '<S560>:90' */
        }

        /* Transition: '<S560>:92' */
    }
    else
    {
        /* Transition: '<S560>:28' */
    }

    /* End of Chart: '<S31>/PokeMTIR_M_MtrACapabilityMaxChrt' */

    /* Merge: '<Root>/Merge_7' incorporates:
     *  SignalConversion generated from: '<S31>/VaMTIR_M_MtrAMaxCpbltyTrq_Poke_write'
     */
    Rte_IrvWrite_PokeMTIR_M_MtrACapabilityMax_VaMTIR_M_MtrAMaxCpbltyTrq_Poke_Init_IRV
        (MTIR_ac_B.VaMTIR_M_MtrAMaxCpbltyTrq_Poke);

    /* Merge: '<Root>/Merge_5' incorporates:
     *  SignalConversion generated from: '<S31>/VeMTIR_Cnt_MtrAMaxCpbltyIndx_write'
     * */
    Rte_IrvWrite_PokeMTIR_M_MtrACapabilityMax_VeMTIR_Cnt_MtrAMaxCpbltyIndx_Init_IRV
        (MTIR_ac_B.LeMTIR_Cnt_MtrAMaxCpbltyIndx);

    /* Merge: '<Root>/Merge_6' incorporates:
     *  SignalConversion generated from: '<S31>/VeMTIR_b_MtrAMaxCpbltyTrqRcvd_write'
     * */
    Rte_IrvWrite_PokeMTIR_M_MtrACapabilityMax_VeMTIR_b_MtrAMaxCpbltyTrqRcvd_write_IRV
        (MTIR_ac_B.LeMTIR_b_MtrAMaxCpbltyTrqRcvd_g);

    /* End of Outputs for SubSystem: '<Root>/PokeMTIR_M_MtrACapabilityMax' */
}

/* Output function */
FUNC(void, MTIR_CODE) PokeMTIR_M_MtrACapabilityMin(VAR(float32, AUTOMATIC)
    LeMTIR_M_MtrA_MinTrq, VAR(uint8, AUTOMATIC) LeMTIR_Cnt_Index)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeMTIR_M_MtrACapabilityMin' */
    /* Chart: '<S32>/PokeMTIR_M_MtrACapabilityMinChrt' incorporates:
     *  SignalConversion generated from: '<S32>/LeMTIR_Cnt_Index'
     *  SignalConversion generated from: '<S32>/LeMTIR_M_MtrA_MinTrq'
     */
    /* Gateway: PokeMTIR_M_MtrACapabilityMin/PokeMTIR_M_MtrACapabilityMinChrt */
    /* During: PokeMTIR_M_MtrACapabilityMin/PokeMTIR_M_MtrACapabilityMinChrt */
    /* Entry Internal: PokeMTIR_M_MtrACapabilityMin/PokeMTIR_M_MtrACapabilityMinChrt */
    /* Transition: '<S561>:2' */
    if (KeMTIR_b_EnblMtrsTrqCpbltyCrv)
    {
        /* Transition: '<S561>:23' */
        /* Transition: '<S561>:31' */
        MTIR_ac_B.LeMTIR_b_MtrAMinCpbltyTrqRcvd = true;
        if ((LeMTIR_M_MtrA_MinTrq >= KeMTIR_M_MtrAMinCpblty_MinLmt) &&
                (LeMTIR_M_MtrA_MinTrq <= KeMTIR_M_MtrAMinCpblty_MaxLmt))
        {
            /* Transition: '<S561>:30' */
            /* Transition: '<S561>:55' */
            MTIR_ac_B.VaMTIR_M_MtrAMinCpbltyTrq_Poke[LeMTIR_Cnt_Index] =
                LeMTIR_M_MtrA_MinTrq;
        }
        else
        {
            /* Transition: '<S561>:59' */
            /* Transition: '<S561>:73' */
        }

        if (LeMTIR_M_MtrA_MinTrq < KeMTIR_M_MtrAMinCpblty_MinLmt)
        {
            /* Transition: '<S561>:33' */
            /* Transition: '<S561>:61' */
            MTIR_ac_B.VaMTIR_M_MtrAMinCpbltyTrq_Poke[LeMTIR_Cnt_Index] =
                KeMTIR_M_MtrAMinCpblty_MinLmt;
        }
        else
        {
            /* Transition: '<S561>:75' */
            /* Transition: '<S561>:76' */
        }

        if (LeMTIR_M_MtrA_MinTrq > KeMTIR_M_MtrAMinCpblty_MaxLmt)
        {
            /* Transition: '<S561>:36' */
            /* Transition: '<S561>:69' */
            MTIR_ac_B.VaMTIR_M_MtrAMinCpbltyTrq_Poke[LeMTIR_Cnt_Index] =
                KeMTIR_M_MtrAMinCpblty_MaxLmt;

            /* Transition: '<S561>:82' */
        }
        else
        {
            /* Transition: '<S561>:78' */
        }

        /* Transition: '<S561>:84' */
    }
    else
    {
        /* Transition: '<S561>:42' */
    }

    /* End of Chart: '<S32>/PokeMTIR_M_MtrACapabilityMinChrt' */

    /* Merge: '<Root>/Merge_9' incorporates:
     *  SignalConversion generated from: '<S32>/VaMTIR_M_MtrAMinCpbltyTrq_Poke_write'
     */
    Rte_IrvWrite_PokeMTIR_M_MtrACapabilityMin_VaMTIR_M_MtrAMinCpbltyTrq_Poke_Init_IRV
        (MTIR_ac_B.VaMTIR_M_MtrAMinCpbltyTrq_Poke);

    /* Merge: '<Root>/Merge_8' incorporates:
     *  SignalConversion generated from: '<S32>/VeMTIR_b_MtrAMinCpbltyTrqRcvd_write'
     * */
    Rte_IrvWrite_PokeMTIR_M_MtrACapabilityMin_VeMTIR_b_MtrAMinCpbltyTrqRcvd_write_IRV
        (MTIR_ac_B.LeMTIR_b_MtrAMinCpbltyTrqRcvd);

    /* End of Outputs for SubSystem: '<Root>/PokeMTIR_M_MtrACapabilityMin' */
}

/* Output function */
FUNC(void, MTIR_CODE) PokeMTIR_M_MtrA_MaxTorq(VAR(float32, AUTOMATIC)
    LeMTIR_M_MtrA_MaxTorq)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeMTIR_M_MtrA_MaxTorq' */
    /* Merge: '<Root>/Merge_34' incorporates:
     *  SignalConversion generated from: '<S33>/LeMTIR_M_MtrA_MaxTorq'
     *  SignalConversion generated from: '<S33>/VeMTIR_M_MtrA_MaxTorq_write'
     */
    /* Gateway: PokeMTIR_M_MtrA_MaxTorq/PokeMTIR_M_MtrA_MaxTorqChrt */
    /* During: PokeMTIR_M_MtrA_MaxTorq/PokeMTIR_M_MtrA_MaxTorqChrt */
    /* Entry Internal: PokeMTIR_M_MtrA_MaxTorq/PokeMTIR_M_MtrA_MaxTorqChrt */
    /* Transition: '<S562>:2' */
    Rte_IrvWrite_PokeMTIR_M_MtrA_MaxTorq_VeMTIR_M_MtrA_MaxTorq_write_IRV
        (LeMTIR_M_MtrA_MaxTorq);

    /* Merge: '<Root>/Merge_33' incorporates:
     *  Chart: '<S33>/PokeMTIR_M_MtrA_MaxTorqChrt'
     *  SignalConversion generated from: '<S33>/VeMTIR_b_MtrA_MaxTorqSgnl_Rcvd_write'
     */
    Rte_IrvWrite_PokeMTIR_M_MtrA_MaxTorq_VeMTIR_b_MtrA_MaxTorqSgnl_Rcvd_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/PokeMTIR_M_MtrA_MaxTorq' */
}

/* Output function */
FUNC(void, MTIR_CODE) PokeMTIR_M_MtrA_MinTorq(VAR(float32, AUTOMATIC)
    LeMTIR_M_MtrA_MinTorq)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeMTIR_M_MtrA_MinTorq' */
    /* Merge: '<Root>/Merge_36' incorporates:
     *  SignalConversion generated from: '<S34>/LeMTIR_M_MtrA_MinTorq'
     *  SignalConversion generated from: '<S34>/VeMTIR_M_MtrA_MinTorq_write'
     */
    /* Gateway: PokeMTIR_M_MtrA_MinTorq/PokeMTIR_M_MtrA_MinTorqChrt */
    /* During: PokeMTIR_M_MtrA_MinTorq/PokeMTIR_M_MtrA_MinTorqChrt */
    /* Entry Internal: PokeMTIR_M_MtrA_MinTorq/PokeMTIR_M_MtrA_MinTorqChrt */
    /* Transition: '<S563>:2' */
    Rte_IrvWrite_PokeMTIR_M_MtrA_MinTorq_VeMTIR_M_MtrA_MinTorq_write_IRV
        (LeMTIR_M_MtrA_MinTorq);

    /* Merge: '<Root>/Merge_35' incorporates:
     *  Chart: '<S34>/PokeMTIR_M_MtrA_MinTorqChrt'
     *  SignalConversion generated from: '<S34>/VeMTIR_b_MtrA_MinTorqSgnl_Rcvd_write'
     */
    Rte_IrvWrite_PokeMTIR_M_MtrA_MinTorq_VeMTIR_b_MtrA_MinTorqSgnl_Rcvd_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/PokeMTIR_M_MtrA_MinTorq' */
}

/* Output function */
FUNC(void, MTIR_CODE) PokeMTIR_M_MtrA_TorqAchieved(VAR(float32, AUTOMATIC)
    LeMTIR_M_MtrA_TorqAchieved, VAR(boolean, AUTOMATIC)
    LeMTIR_b_MtrA_TorqAchievedFA)
{
    boolean rtb_LeMTIR_b_MtrA_TorqAchieve_h;

    /* Outputs for Function Call SubSystem: '<Root>/PokeMTIR_M_MtrA_TorqAchieved' */
    /* Chart: '<S35>/PokeMTIR_M_MtrA_TorqAchievedChrt' incorporates:
     *  SignalConversion generated from: '<S35>/LeMTIR_M_MtrA_TorqAchieved'
     *  SignalConversion generated from: '<S35>/LeMTIR_b_MtrA_TorqAchievedFA'
     */
    /* Gateway: PokeMTIR_M_MtrA_TorqAchieved/PokeMTIR_M_MtrA_TorqAchievedChrt */
    /* During: PokeMTIR_M_MtrA_TorqAchieved/PokeMTIR_M_MtrA_TorqAchievedChrt */
    /* Entry Internal: PokeMTIR_M_MtrA_TorqAchieved/PokeMTIR_M_MtrA_TorqAchievedChrt */
    /* Transition: '<S564>:2' */
    if (!LeMTIR_b_MtrA_TorqAchievedFA)
    {
        /* Transition: '<S564>:3' */
        /* Transition: '<S564>:15' */
        MTIR_ac_B.LeMTIR_M_MtrA_TorqAchieved_out = LeMTIR_M_MtrA_TorqAchieved;
        rtb_LeMTIR_b_MtrA_TorqAchieve_h = false;
        MTIR_ac_B.LeMTIR_b_MtrA_TorqAchievedSgnl_ = true;

        /* Transition: '<S564>:18' */
    }
    else
    {
        /* Transition: '<S564>:4' */
        rtb_LeMTIR_b_MtrA_TorqAchieve_h = true;
    }

    /* End of Chart: '<S35>/PokeMTIR_M_MtrA_TorqAchievedChrt' */

    /* Merge: '<Root>/Merge_30' incorporates:
     *  SignalConversion generated from: '<S35>/VeMTIR_M_MtrA_TorqAchieved_write'
     * */
    Rte_IrvWrite_PokeMTIR_M_MtrA_TorqAchieved_VeMTIR_M_MtrA_TorqAchieved_write_IRV
        (MTIR_ac_B.LeMTIR_M_MtrA_TorqAchieved_out);

    /* Merge: '<Root>/Merge_31' incorporates:
     *  SignalConversion generated from: '<S35>/VeMTIR_b_MtrA_TorqAchievedFA_write'
     * */
    Rte_IrvWrite_PokeMTIR_M_MtrA_TorqAchieved_VeMTIR_b_MtrA_TorqAchievedFA_write_IRV
        (rtb_LeMTIR_b_MtrA_TorqAchieve_h);

    /* Merge: '<Root>/Merge_32' incorporates:
     *  SignalConversion generated from: '<S35>/VeMTIR_b_MtrA_TorqAchievedSgnl_Rcvd_write'
     * */
    Rte_IrvWrite_PokeMTIR_M_MtrA_TorqAchieved_VeMTIR_b_MtrA_TorqAchievedSgnl_Rcvd_write_IRV
        (MTIR_ac_B.LeMTIR_b_MtrA_TorqAchievedSgnl_);

    /* End of Outputs for SubSystem: '<Root>/PokeMTIR_M_MtrA_TorqAchieved' */
}

/* Output function */
FUNC(void, MTIR_CODE) PokeMTIR_M_MtrA_TorqAchieved_AEMD(VAR(float32, AUTOMATIC)
    LeMTIR_M_MtrA_TorqAchieved_AEMD, VAR(boolean, AUTOMATIC)
    LeMTIR_b_MtrA_TorqAchieved_AEMDFA)
{
    boolean rtb_LeMTIR_b_MtrA_TorqAchieve_c;

    /* Outputs for Function Call SubSystem: '<Root>/PokeMTIR_M_MtrA_TorqAchieved_AEMD' */
    /* Chart: '<S36>/PokeMTIR_M_MtrA_TorqAchieved_AEMDChrt' incorporates:
     *  SignalConversion generated from: '<S36>/LeMTIR_b_MtrA_TorqAchieved_AEMDFA'
     */
    /* Gateway: PokeMTIR_M_MtrA_TorqAchieved_AEMD/PokeMTIR_M_MtrA_TorqAchieved_AEMDChrt */
    /* During: PokeMTIR_M_MtrA_TorqAchieved_AEMD/PokeMTIR_M_MtrA_TorqAchieved_AEMDChrt */
    /* Entry Internal: PokeMTIR_M_MtrA_TorqAchieved_AEMD/PokeMTIR_M_MtrA_TorqAchieved_AEMDChrt */
    /* Transition: '<S565>:2' */
    if (!LeMTIR_b_MtrA_TorqAchieved_AEMDFA)
    {
        /* SignalConversion generated from: '<S36>/VeMTIR_M_MtrA_TorqAchieved_AEMD_write' incorporates:
         *  Merge: '<Root>/Merge_39'
         *  SignalConversion generated from: '<S36>/LeMTIR_M_MtrA_TorqAchieved_AEMD'
         */
        /* Transition: '<S565>:3' */
        /* Transition: '<S565>:15' */
        Rte_IrvWrite_PokeMTIR_M_MtrA_TorqAchieved_AEMD_VeMTIR_M_MtrA_TorqAchieved_AEMD_write_IRV
            (LeMTIR_M_MtrA_TorqAchieved_AEMD);
        rtb_LeMTIR_b_MtrA_TorqAchieve_c = false;
        MTIR_ac_B.LeMTIR_b_MtrA_TorqAchieved_AEMD = true;

        /* Transition: '<S565>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S36>/VeMTIR_M_MtrA_TorqAchieved_AEMD_write' incorporates:
         *  Merge: '<Root>/Merge_39'
         */
        /* Transition: '<S565>:4' */
        Rte_IrvWrite_PokeMTIR_M_MtrA_TorqAchieved_AEMD_VeMTIR_M_MtrA_TorqAchieved_AEMD_write_IRV
            (KeMTIR_M_MtrA_TorqAchieved_AEMD_Val);
        rtb_LeMTIR_b_MtrA_TorqAchieve_c = true;
    }

    /* End of Chart: '<S36>/PokeMTIR_M_MtrA_TorqAchieved_AEMDChrt' */

    /* Merge: '<Root>/Merge_38' incorporates:
     *  SignalConversion generated from: '<S36>/VeMTIR_b_MtrA_TorqAchieved_AEMDFA_write'
     * */
    Rte_IrvWrite_PokeMTIR_M_MtrA_TorqAchieved_AEMD_VeMTIR_b_MtrA_TorqAchieved_AEMDFA_write_IRV
        (rtb_LeMTIR_b_MtrA_TorqAchieve_c);

    /* Merge: '<Root>/Merge_37' incorporates:
     *  SignalConversion generated from: '<S36>/VeMTIR_b_MtrA_TorqAchieved_AEMDSgnl_Rcvd_write'
     * */
    Rte_IrvWrite_PokeMTIR_M_MtrA_TorqAchieved_AEMD_VeMTIR_b_MtrA_TorqAchieved_AEMDSgnl_Rcvd_write_IRV
        (MTIR_ac_B.LeMTIR_b_MtrA_TorqAchieved_AEMD);

    /* End of Outputs for SubSystem: '<Root>/PokeMTIR_M_MtrA_TorqAchieved_AEMD' */
}

/* Output function */
FUNC(void, MTIR_CODE) PokeMTIR_M_MtrBCapabilityMax(VAR(float32, AUTOMATIC)
    LeMTIR_M_MtrB_MaxTrq, VAR(uint8, AUTOMATIC) LeMTIR_Cnt_Index)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeMTIR_M_MtrBCapabilityMax' */
    /* Chart: '<S37>/PokeMTIR_M_MtrBCapabilityMaxChrt' incorporates:
     *  SignalConversion generated from: '<S37>/LeMTIR_Cnt_Index'
     *  SignalConversion generated from: '<S37>/LeMTIR_M_MtrB_MaxTrq'
     */
    /* Gateway: PokeMTIR_M_MtrBCapabilityMax/PokeMTIR_M_MtrBCapabilityMaxChrt */
    /* During: PokeMTIR_M_MtrBCapabilityMax/PokeMTIR_M_MtrBCapabilityMaxChrt */
    /* Entry Internal: PokeMTIR_M_MtrBCapabilityMax/PokeMTIR_M_MtrBCapabilityMaxChrt */
    /* Transition: '<S566>:2' */
    if (KeMTIR_b_EnblMtrsTrqCpbltyCrv)
    {
        /* Transition: '<S566>:23' */
        /* Transition: '<S566>:26' */
        MTIR_ac_B.LeMTIR_Cnt_MtrBMaxCpbltyIndx = LeMTIR_Cnt_Index;
        MTIR_ac_B.LeMTIR_b_MtrBMaxCpbltyTrqRcvd_e = true;
        if ((LeMTIR_M_MtrB_MaxTrq >= KeMTIR_M_MtrBMaxCpblty_MinLmt) &&
                (LeMTIR_M_MtrB_MaxTrq <= KeMTIR_M_MtrBMaxCpblty_MaxLmt))
        {
            /* Transition: '<S566>:25' */
            /* Transition: '<S566>:46' */
            MTIR_ac_B.VaMTIR_M_MtrBMaxCpbltyTrq_Poke[LeMTIR_Cnt_Index] =
                LeMTIR_M_MtrB_MaxTrq;

            /* Transition: '<S566>:60' */
        }
        else
        {
            /* Transition: '<S566>:49' */
        }

        /* Transition: '<S566>:63' */
        if (LeMTIR_M_MtrB_MaxTrq > KeMTIR_M_MtrBMaxCpblty_MaxLmt)
        {
            /* Transition: '<S566>:30' */
            /* Transition: '<S566>:58' */
            MTIR_ac_B.VaMTIR_M_MtrBMaxCpbltyTrq_Poke[LeMTIR_Cnt_Index] =
                KeMTIR_M_MtrBMaxCpblty_MaxLmt;

            /* Transition: '<S566>:66' */
        }
        else
        {
            /* Transition: '<S566>:65' */
        }

        /* Transition: '<S566>:67' */
        if (LeMTIR_M_MtrB_MaxTrq < KeMTIR_M_MtrBMaxCpblty_MinLmt)
        {
            /* Transition: '<S566>:32' */
            /* Transition: '<S566>:56' */
            MTIR_ac_B.VaMTIR_M_MtrBMaxCpbltyTrq_Poke[LeMTIR_Cnt_Index] =
                KeMTIR_M_MtrBMaxCpblty_MinLmt;

            /* Transition: '<S566>:69' */
        }
        else
        {
            /* Transition: '<S566>:54' */
        }

        /* Transition: '<S566>:39' */
    }
    else
    {
        /* Transition: '<S566>:36' */
    }

    /* End of Chart: '<S37>/PokeMTIR_M_MtrBCapabilityMaxChrt' */

    /* Merge: '<Root>/Merge_16' incorporates:
     *  SignalConversion generated from: '<S37>/VaMTIR_M_MtrBMaxCpbltyTrq_Poke_write'
     */
    Rte_IrvWrite_PokeMTIR_M_MtrBCapabilityMax_VaMTIR_M_MtrBMaxCpbltyTrq_Poke_Init_IRV
        (MTIR_ac_B.VaMTIR_M_MtrBMaxCpbltyTrq_Poke);

    /* Merge: '<Root>/Merge_14' incorporates:
     *  SignalConversion generated from: '<S37>/VeMTIR_Cnt_MtrBMaxCpbltyIndx_write'
     * */
    Rte_IrvWrite_PokeMTIR_M_MtrBCapabilityMax_VeMTIR_Cnt_MtrBMaxCpbltyIndx_Init_IRV
        (MTIR_ac_B.LeMTIR_Cnt_MtrBMaxCpbltyIndx);

    /* Merge: '<Root>/Merge_15' incorporates:
     *  SignalConversion generated from: '<S37>/VeMTIR_b_MtrBMaxCpbltyTrqRcvd_write'
     * */
    Rte_IrvWrite_PokeMTIR_M_MtrBCapabilityMax_VeMTIR_b_MtrBMaxCpbltyTrqRcvd_write_IRV
        (MTIR_ac_B.LeMTIR_b_MtrBMaxCpbltyTrqRcvd_e);

    /* End of Outputs for SubSystem: '<Root>/PokeMTIR_M_MtrBCapabilityMax' */
}

/* Output function */
FUNC(void, MTIR_CODE) PokeMTIR_M_MtrBCapabilityMin(VAR(float32, AUTOMATIC)
    LeMTIR_M_MtrB_MinTrq, VAR(uint8, AUTOMATIC) LeMTIR_Cnt_Index)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeMTIR_M_MtrBCapabilityMin' */
    /* Chart: '<S38>/PokeMTIR_M_MtrBCapabilityMinChrt' incorporates:
     *  SignalConversion generated from: '<S38>/LeMTIR_Cnt_Index'
     *  SignalConversion generated from: '<S38>/LeMTIR_M_MtrB_MinTrq'
     */
    /* Gateway: PokeMTIR_M_MtrBCapabilityMin/PokeMTIR_M_MtrBCapabilityMinChrt */
    /* During: PokeMTIR_M_MtrBCapabilityMin/PokeMTIR_M_MtrBCapabilityMinChrt */
    /* Entry Internal: PokeMTIR_M_MtrBCapabilityMin/PokeMTIR_M_MtrBCapabilityMinChrt */
    /* Transition: '<S567>:2' */
    if (KeMTIR_b_EnblMtrsTrqCpbltyCrv)
    {
        /* Transition: '<S567>:22' */
        /* Transition: '<S567>:40' */
        MTIR_ac_B.LeMTIR_b_MtrBMinCpbltyTrqRcvd = true;
        if ((LeMTIR_M_MtrB_MinTrq >= KeMTIR_M_MtrBMinCpblty_MinLmt) &&
                (LeMTIR_M_MtrB_MinTrq <= KeMTIR_M_MtrBMinCpblty_MaxLmt))
        {
            /* Transition: '<S567>:27' */
            /* Transition: '<S567>:45' */
            MTIR_ac_B.VaMTIR_M_MtrBMinCpbltyTrq_Poke[LeMTIR_Cnt_Index] =
                LeMTIR_M_MtrB_MinTrq;

            /* Transition: '<S567>:46' */
        }
        else
        {
            /* Transition: '<S567>:28' */
        }

        /* Transition: '<S567>:60' */
        if (LeMTIR_M_MtrB_MinTrq < KeMTIR_M_MtrBMinCpblty_MinLmt)
        {
            /* Transition: '<S567>:30' */
            /* Transition: '<S567>:52' */
            MTIR_ac_B.VaMTIR_M_MtrBMinCpbltyTrq_Poke[LeMTIR_Cnt_Index] =
                KeMTIR_M_MtrBMinCpblty_MinLmt;

            /* Transition: '<S567>:53' */
        }
        else
        {
            /* Transition: '<S567>:50' */
        }

        /* Transition: '<S567>:61' */
        if (LeMTIR_M_MtrB_MinTrq > KeMTIR_M_MtrBMinCpblty_MaxLmt)
        {
            /* Transition: '<S567>:33' */
            /* Transition: '<S567>:58' */
            MTIR_ac_B.VaMTIR_M_MtrBMinCpbltyTrq_Poke[LeMTIR_Cnt_Index] =
                KeMTIR_M_MtrBMinCpblty_MaxLmt;

            /* Transition: '<S567>:59' */
        }
        else
        {
            /* Transition: '<S567>:56' */
        }

        /* Transition: '<S567>:38' */
    }
    else
    {
        /* Transition: '<S567>:37' */
    }

    /* End of Chart: '<S38>/PokeMTIR_M_MtrBCapabilityMinChrt' */

    /* Merge: '<Root>/Merge_18' incorporates:
     *  SignalConversion generated from: '<S38>/VaMTIR_M_MtrBMinCpbltyTrq_Poke_write'
     */
    Rte_IrvWrite_PokeMTIR_M_MtrBCapabilityMin_VaMTIR_M_MtrBMinCpbltyTrq_Poke_Init_IRV
        (MTIR_ac_B.VaMTIR_M_MtrBMinCpbltyTrq_Poke);

    /* Merge: '<Root>/Merge_17' incorporates:
     *  SignalConversion generated from: '<S38>/VeMTIR_b_MtrBMinCpbltyTrqRcvd_write'
     * */
    Rte_IrvWrite_PokeMTIR_M_MtrBCapabilityMin_VeMTIR_b_MtrBMinCpbltyRcvd_write_IRV
        (MTIR_ac_B.LeMTIR_b_MtrBMinCpbltyTrqRcvd);

    /* End of Outputs for SubSystem: '<Root>/PokeMTIR_M_MtrBCapabilityMin' */
}

/* Output function */
FUNC(void, MTIR_CODE) PokeMTIR_M_MtrBMaxTrqLmt_TCM(VAR(float32, AUTOMATIC)
    LeMTIR_M_MtrBMaxTrqLmt_TCM, VAR(boolean, AUTOMATIC)
    LeMTIR_b_MtrBMaxTrqLmt_TCMFA)
{
    float32 rtb_LeMTIR_M_MtrBMaxTrqLmt_TCM_;
    boolean rtb_LeMTIR_b_MtrBMaxTrqLmt_TC_j;

    /* Outputs for Function Call SubSystem: '<Root>/PokeMTIR_M_MtrBMaxTrqLmt_TCM' */
    /* Chart: '<S39>/PokeMTIR_M_MtrBMaxTrqLmt_TCMChrt' incorporates:
     *  SignalConversion generated from: '<S39>/LeMTIR_M_MtrBMaxTrqLmt_TCM'
     *  SignalConversion generated from: '<S39>/LeMTIR_b_MtrBMaxTrqLmt_TCMFA'
     */
    /* Gateway: PokeMTIR_M_MtrBMaxTrqLmt_TCM/PokeMTIR_M_MtrBMaxTrqLmt_TCMChrt */
    /* During: PokeMTIR_M_MtrBMaxTrqLmt_TCM/PokeMTIR_M_MtrBMaxTrqLmt_TCMChrt */
    /* Entry Internal: PokeMTIR_M_MtrBMaxTrqLmt_TCM/PokeMTIR_M_MtrBMaxTrqLmt_TCMChrt */
    /* Transition: '<S568>:2' */
    if (!LeMTIR_b_MtrBMaxTrqLmt_TCMFA)
    {
        /* Transition: '<S568>:3' */
        /* Transition: '<S568>:15' */
        rtb_LeMTIR_M_MtrBMaxTrqLmt_TCM_ = LeMTIR_M_MtrBMaxTrqLmt_TCM;
        rtb_LeMTIR_b_MtrBMaxTrqLmt_TC_j = false;

        /* Transition: '<S568>:18' */
    }
    else
    {
        /* Transition: '<S568>:4' */
        rtb_LeMTIR_M_MtrBMaxTrqLmt_TCM_ = KeMTIR_M_MtrBMaxTrqLmt_TCMDflt;
        rtb_LeMTIR_b_MtrBMaxTrqLmt_TC_j = true;
    }

    /* End of Chart: '<S39>/PokeMTIR_M_MtrBMaxTrqLmt_TCMChrt' */

    /* Outport: '<Root>/VeMTIR_M_MtrBMaxTrqLmt_TCM' incorporates:
     *  SignalConversion generated from: '<S39>/VeMTIR_M_MtrBMaxTrqLmt_TCM'
     */
    (void)Rte_Write_VeMTIR_M_MtrBMaxTrqLmt_TCM_Value
        (rtb_LeMTIR_M_MtrBMaxTrqLmt_TCM_);

    /* Outport: '<Root>/VeMTIR_M_MtrBMaxTrqLmt_TCMFA' incorporates:
     *  SignalConversion generated from: '<S39>/VeMTIR_b_MtrBMaxTrqLmt_TCMFA'
     */
    (void)Rte_Write_VeMTIR_M_MtrBMaxTrqLmt_TCMFA_Value
        (rtb_LeMTIR_b_MtrBMaxTrqLmt_TC_j);

    /* Merge: '<Root>/Merge_41_Irv' incorporates:
     *  SignalConversion generated from: '<S39>/VeMTIR_M_MtrBMaxTrqLmt_TCM_write'
     * */
    Rte_IrvWrite_PokeMTIR_M_MtrBMaxTrqLmt_TCM_VeMTIR_M_MtrBMaxTrqLmt_TCM_write_IRV
        (rtb_LeMTIR_M_MtrBMaxTrqLmt_TCM_);

    /* End of Outputs for SubSystem: '<Root>/PokeMTIR_M_MtrBMaxTrqLmt_TCM' */
}

/* Output function */
FUNC(void, MTIR_CODE) PokeMTIR_M_MtrBMinTrqLmt_TCM(VAR(float32, AUTOMATIC)
    LeMTIR_M_MtrBMinTrqLmt_TCM, VAR(boolean, AUTOMATIC)
    LeMTIR_b_MtrBMinTrqLmt_TCMFA)
{
    float32 rtb_LeMTIR_M_MtrBMinTrqLmt_TCM_;
    boolean rtb_LeMTIR_b_MtrBMinTrqLmt_TC_m;

    /* Outputs for Function Call SubSystem: '<Root>/PokeMTIR_M_MtrBMinTrqLmt_TCM' */
    /* Chart: '<S40>/PokeMTIR_M_MtrBMinTrqLmt_TCMChrt' incorporates:
     *  SignalConversion generated from: '<S40>/LeMTIR_M_MtrBMinTrqLmt_TCM'
     *  SignalConversion generated from: '<S40>/LeMTIR_b_MtrBMinTrqLmt_TCMFA'
     */
    /* Gateway: PokeMTIR_M_MtrBMinTrqLmt_TCM/PokeMTIR_M_MtrBMinTrqLmt_TCMChrt */
    /* During: PokeMTIR_M_MtrBMinTrqLmt_TCM/PokeMTIR_M_MtrBMinTrqLmt_TCMChrt */
    /* Entry Internal: PokeMTIR_M_MtrBMinTrqLmt_TCM/PokeMTIR_M_MtrBMinTrqLmt_TCMChrt */
    /* Transition: '<S569>:2' */
    if (!LeMTIR_b_MtrBMinTrqLmt_TCMFA)
    {
        /* Transition: '<S569>:3' */
        /* Transition: '<S569>:15' */
        rtb_LeMTIR_M_MtrBMinTrqLmt_TCM_ = LeMTIR_M_MtrBMinTrqLmt_TCM;
        rtb_LeMTIR_b_MtrBMinTrqLmt_TC_m = false;

        /* Transition: '<S569>:18' */
    }
    else
    {
        /* Transition: '<S569>:4' */
        rtb_LeMTIR_M_MtrBMinTrqLmt_TCM_ = KeMTIR_M_MtrBMinTrqLmt_TCMDflt;
        rtb_LeMTIR_b_MtrBMinTrqLmt_TC_m = true;
    }

    /* End of Chart: '<S40>/PokeMTIR_M_MtrBMinTrqLmt_TCMChrt' */

    /* Outport: '<Root>/VeMTIR_M_MtrBMinTrqLmt_TCM' incorporates:
     *  SignalConversion generated from: '<S40>/VeMTIR_M_MtrBMinTrqLmt_TCM'
     */
    (void)Rte_Write_VeMTIR_M_MtrBMinTrqLmt_TCM_Value
        (rtb_LeMTIR_M_MtrBMinTrqLmt_TCM_);

    /* Outport: '<Root>/VeMTIR_M_MtrBMinTrqLmt_TCMFA' incorporates:
     *  SignalConversion generated from: '<S40>/VeMTIR_b_MtrBMinTrqLmt_TCMFA'
     */
    (void)Rte_Write_VeMTIR_M_MtrBMinTrqLmt_TCMFA_Value
        (rtb_LeMTIR_b_MtrBMinTrqLmt_TC_m);

    /* Merge: '<Root>/Merge_43_Irv' incorporates:
     *  SignalConversion generated from: '<S40>/VeMTIR_M_MtrBMinTrqLmt_TCM_write'
     * */
    Rte_IrvWrite_PokeMTIR_M_MtrBMinTrqLmt_TCM_VeMTIR_M_MtrBMinTrqLmt_TCM_write_IRV
        (rtb_LeMTIR_M_MtrBMinTrqLmt_TCM_);

    /* End of Outputs for SubSystem: '<Root>/PokeMTIR_M_MtrBMinTrqLmt_TCM' */
}

/* Output function */
FUNC(void, MTIR_CODE) PokeMTIR_M_MtrB_MaxTorq(VAR(float32, AUTOMATIC)
    LeMTIR_M_MtrB_MaxTorq)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeMTIR_M_MtrB_MaxTorq' */
    /* Merge: '<Root>/Merge_45' incorporates:
     *  SignalConversion generated from: '<S41>/LeMTIR_M_MtrB_MaxTorq'
     *  SignalConversion generated from: '<S41>/VeMTIR_M_MtrB_MaxTorq_write'
     */
    /* Gateway: PokeMTIR_M_MtrB_MaxTorq/PokeMTIR_M_MtrB_MaxTorqChrt */
    /* During: PokeMTIR_M_MtrB_MaxTorq/PokeMTIR_M_MtrB_MaxTorqChrt */
    /* Entry Internal: PokeMTIR_M_MtrB_MaxTorq/PokeMTIR_M_MtrB_MaxTorqChrt */
    /* Transition: '<S570>:2' */
    Rte_IrvWrite_PokeMTIR_M_MtrB_MaxTorq_VeMTIR_M_MtrB_MaxTorq_write_IRV
        (LeMTIR_M_MtrB_MaxTorq);

    /* Merge: '<Root>/Merge_44' incorporates:
     *  Chart: '<S41>/PokeMTIR_M_MtrB_MaxTorqChrt'
     *  SignalConversion generated from: '<S41>/VeMTIR_b_MtrB_MaxTorqSgnl_Rcvd_write'
     */
    Rte_IrvWrite_PokeMTIR_M_MtrB_MaxTorq_VeMTIR_b_MtrB_MaxTorqSgnl_Rcvd_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/PokeMTIR_M_MtrB_MaxTorq' */
}

/* Output function */
FUNC(void, MTIR_CODE) PokeMTIR_M_MtrB_MinTorq(VAR(float32, AUTOMATIC)
    LeMTIR_M_MtrB_MinTorq)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeMTIR_M_MtrB_MinTorq' */
    /* Merge: '<Root>/Merge_47' incorporates:
     *  SignalConversion generated from: '<S42>/LeMTIR_M_MtrB_MinTorq'
     *  SignalConversion generated from: '<S42>/VeMTIR_M_MtrB_MinTorq_write'
     */
    /* Gateway: PokeMTIR_M_MtrB_MinTorq/PokeMTIR_M_MtrB_MinTorqChrt */
    /* During: PokeMTIR_M_MtrB_MinTorq/PokeMTIR_M_MtrB_MinTorqChrt */
    /* Entry Internal: PokeMTIR_M_MtrB_MinTorq/PokeMTIR_M_MtrB_MinTorqChrt */
    /* Transition: '<S571>:2' */
    Rte_IrvWrite_PokeMTIR_M_MtrB_MinTorq_VeMTIR_M_MtrB_MinTorq_write_IRV
        (LeMTIR_M_MtrB_MinTorq);

    /* Merge: '<Root>/Merge_46' incorporates:
     *  Chart: '<S42>/PokeMTIR_M_MtrB_MinTorqChrt'
     *  SignalConversion generated from: '<S42>/VeMTIR_b_MtrB_MinTorqSgnl_Rcvd_write'
     */
    Rte_IrvWrite_PokeMTIR_M_MtrB_MinTorq_VeMTIR_b_MtrB_MinTorqSgnl_Rcvd_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/PokeMTIR_M_MtrB_MinTorq' */
}

/* Output function */
FUNC(void, MTIR_CODE) PokeMTIR_M_MtrB_TorqAchieved(VAR(float32, AUTOMATIC)
    LeMTIR_M_MtrB_TorqAchieved, VAR(boolean, AUTOMATIC)
    LeMTIR_b_MtrB_TorqAchievedFA)
{
    boolean rtb_LeMTIR_b_MtrB_TorqAchieve_g;

    /* Outputs for Function Call SubSystem: '<Root>/PokeMTIR_M_MtrB_TorqAchieved' */
    /* Chart: '<S43>/PokeMTIR_M_MtrB_TorqAchievedChrt' incorporates:
     *  SignalConversion generated from: '<S43>/LeMTIR_M_MtrB_TorqAchieved'
     *  SignalConversion generated from: '<S43>/LeMTIR_b_MtrB_TorqAchievedFA'
     */
    /* Gateway: PokeMTIR_M_MtrB_TorqAchieved/PokeMTIR_M_MtrB_TorqAchievedChrt */
    /* During: PokeMTIR_M_MtrB_TorqAchieved/PokeMTIR_M_MtrB_TorqAchievedChrt */
    /* Entry Internal: PokeMTIR_M_MtrB_TorqAchieved/PokeMTIR_M_MtrB_TorqAchievedChrt */
    /* Transition: '<S572>:2' */
    if (!LeMTIR_b_MtrB_TorqAchievedFA)
    {
        /* Transition: '<S572>:3' */
        /* Transition: '<S572>:15' */
        MTIR_ac_B.LeMTIR_M_MtrB_TorqAchieved_out = LeMTIR_M_MtrB_TorqAchieved;
        rtb_LeMTIR_b_MtrB_TorqAchieve_g = false;
        MTIR_ac_B.LeMTIR_b_MtrB_TorqAchievedSgnl_ = true;

        /* Transition: '<S572>:18' */
    }
    else
    {
        /* Transition: '<S572>:4' */
        rtb_LeMTIR_b_MtrB_TorqAchieve_g = true;
    }

    /* End of Chart: '<S43>/PokeMTIR_M_MtrB_TorqAchievedChrt' */

    /* Merge: '<Root>/Merge_49' incorporates:
     *  SignalConversion generated from: '<S43>/VeMTIR_M_MtrB_TorqAchieved_write'
     * */
    Rte_IrvWrite_PokeMTIR_M_MtrB_TorqAchieved_VeMTIR_M_MtrB_TorqAchieved_write_IRV
        (MTIR_ac_B.LeMTIR_M_MtrB_TorqAchieved_out);

    /* Merge: '<Root>/Merge_50' incorporates:
     *  SignalConversion generated from: '<S43>/VeMTIR_b_MtrB_TorqAchievedFA_write'
     * */
    Rte_IrvWrite_PokeMTIR_M_MtrB_TorqAchieved_VeMTIR_b_MtrB_TorqAchievedFA_write_IRV
        (rtb_LeMTIR_b_MtrB_TorqAchieve_g);

    /* Merge: '<Root>/Merge_48' incorporates:
     *  SignalConversion generated from: '<S43>/VeMTIR_b_MtrB_TorqAchievedSgnl_Rcvd_write'
     * */
    Rte_IrvWrite_PokeMTIR_M_MtrB_TorqAchieved_VeMTIR_b_MtrB_TorqAchievedSgnl_Rcvd_write_IRV
        (MTIR_ac_B.LeMTIR_b_MtrB_TorqAchievedSgnl_);

    /* End of Outputs for SubSystem: '<Root>/PokeMTIR_M_MtrB_TorqAchieved' */
}

/* Output function */
FUNC(void, MTIR_CODE) PokeMTIR_M_MtrB_TorqAchieved_AEMD(VAR(float32, AUTOMATIC)
    LeMTIR_M_MtrB_TorqAchieved_AEMD, VAR(boolean, AUTOMATIC)
    LeMTIR_b_MtrB_TorqAchieved_AEMDFA)
{
    boolean rtb_LeMTIR_b_MtrB_TorqAchieve_j;

    /* Outputs for Function Call SubSystem: '<Root>/PokeMTIR_M_MtrB_TorqAchieved_AEMD' */
    /* Chart: '<S44>/PokeMTIR_M_MtrB_TorqAchieved_AEMDChrt' incorporates:
     *  SignalConversion generated from: '<S44>/LeMTIR_b_MtrB_TorqAchieved_AEMDFA'
     */
    /* Gateway: PokeMTIR_M_MtrB_TorqAchieved_AEMD/PokeMTIR_M_MtrB_TorqAchieved_AEMDChrt */
    /* During: PokeMTIR_M_MtrB_TorqAchieved_AEMD/PokeMTIR_M_MtrB_TorqAchieved_AEMDChrt */
    /* Entry Internal: PokeMTIR_M_MtrB_TorqAchieved_AEMD/PokeMTIR_M_MtrB_TorqAchieved_AEMDChrt */
    /* Transition: '<S573>:2' */
    if (!LeMTIR_b_MtrB_TorqAchieved_AEMDFA)
    {
        /* SignalConversion generated from: '<S44>/VeMTIR_M_MtrB_TorqAchieved_AEMD_write' incorporates:
         *  Merge: '<Root>/Merge_53'
         *  SignalConversion generated from: '<S44>/LeMTIR_M_MtrB_TorqAchieved_AEMD'
         */
        /* Transition: '<S573>:3' */
        /* Transition: '<S573>:15' */
        Rte_IrvWrite_PokeMTIR_M_MtrB_TorqAchieved_AEMD_VeMTIR_M_MtrB_TorqAchieved_AEMD_write_IRV
            (LeMTIR_M_MtrB_TorqAchieved_AEMD);
        rtb_LeMTIR_b_MtrB_TorqAchieve_j = false;
        MTIR_ac_B.LeMTIR_b_MtrB_TorqAchieved_AEMD = true;

        /* Transition: '<S573>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S44>/VeMTIR_M_MtrB_TorqAchieved_AEMD_write' incorporates:
         *  Merge: '<Root>/Merge_53'
         */
        /* Transition: '<S573>:4' */
        Rte_IrvWrite_PokeMTIR_M_MtrB_TorqAchieved_AEMD_VeMTIR_M_MtrB_TorqAchieved_AEMD_write_IRV
            (KeMTIR_M_MtrB_TorqAchieved_AEMD_Val);
        rtb_LeMTIR_b_MtrB_TorqAchieve_j = true;
    }

    /* End of Chart: '<S44>/PokeMTIR_M_MtrB_TorqAchieved_AEMDChrt' */

    /* Merge: '<Root>/Merge_52' incorporates:
     *  SignalConversion generated from: '<S44>/VeMTIR_b_MtrB_TorqAchieved_AEMDFA_write'
     * */
    Rte_IrvWrite_PokeMTIR_M_MtrB_TorqAchieved_AEMD_VeMTIR_b_MtrB_TorqAchieved_AEMDFA_write_IRV
        (rtb_LeMTIR_b_MtrB_TorqAchieve_j);

    /* Merge: '<Root>/Merge_51' incorporates:
     *  SignalConversion generated from: '<S44>/VeMTIR_b_MtrB_TorqAchieved_AEMDSgnl_Rcvd_write'
     * */
    Rte_IrvWrite_PokeMTIR_M_MtrB_TorqAchieved_AEMD_VeMTIR_b_MtrB_TorqAchieved_AEMDSgnl_Rcvd_write_IRV
        (MTIR_ac_B.LeMTIR_b_MtrB_TorqAchieved_AEMD);

    /* End of Outputs for SubSystem: '<Root>/PokeMTIR_M_MtrB_TorqAchieved_AEMD' */
}

/* Output function */
FUNC(void, MTIR_CODE) PokeMTIR_M_MtrCCapabilityMax(VAR(float32, AUTOMATIC)
    LeMTIR_M_MtrC_MaxTrq, VAR(uint8, AUTOMATIC) LeMTIR_Cnt_Index)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeMTIR_M_MtrCCapabilityMax' */
    /* Chart: '<S45>/PokeMTIR_M_MtrCCapabilityMaxChrt' incorporates:
     *  SignalConversion generated from: '<S45>/LeMTIR_Cnt_Index'
     *  SignalConversion generated from: '<S45>/LeMTIR_M_MtrC_MaxTrq'
     */
    /* Gateway: PokeMTIR_M_MtrCCapabilityMax/PokeMTIR_M_MtrCCapabilityMaxChrt */
    /* During: PokeMTIR_M_MtrCCapabilityMax/PokeMTIR_M_MtrCCapabilityMaxChrt */
    /* Entry Internal: PokeMTIR_M_MtrCCapabilityMax/PokeMTIR_M_MtrCCapabilityMaxChrt */
    /* Transition: '<S574>:2' */
    if (KeMTIR_b_EnblMtrsTrqCpbltyCrv)
    {
        /* Transition: '<S574>:23' */
        /* Transition: '<S574>:26' */
        MTIR_ac_B.LeMTIR_Cnt_MtrCMaxCpbltyIndx = LeMTIR_Cnt_Index;
        MTIR_ac_B.LeMTIR_b_MtrCMaxCpbltyTrqRcvd = true;
        if ((LeMTIR_M_MtrC_MaxTrq >= KeMTIR_M_MtrCMaxCpblty_MinLmt) &&
                (LeMTIR_M_MtrC_MaxTrq <= KeMTIR_M_MtrCMaxCpblty_MaxLmt))
        {
            /* Transition: '<S574>:25' */
            /* Transition: '<S574>:46' */
            MTIR_ac_B.VaMTIR_M_MtrCMaxCpbltyTrq_Poke[LeMTIR_Cnt_Index] =
                LeMTIR_M_MtrC_MaxTrq;

            /* Transition: '<S574>:60' */
        }
        else
        {
            /* Transition: '<S574>:49' */
        }

        /* Transition: '<S574>:63' */
        if (LeMTIR_M_MtrC_MaxTrq > KeMTIR_M_MtrCMaxCpblty_MaxLmt)
        {
            /* Transition: '<S574>:30' */
            /* Transition: '<S574>:58' */
            MTIR_ac_B.VaMTIR_M_MtrCMaxCpbltyTrq_Poke[LeMTIR_Cnt_Index] =
                KeMTIR_M_MtrCMaxCpblty_MaxLmt;

            /* Transition: '<S574>:66' */
        }
        else
        {
            /* Transition: '<S574>:65' */
        }

        /* Transition: '<S574>:67' */
        if (LeMTIR_M_MtrC_MaxTrq < KeMTIR_M_MtrCMaxCpblty_MinLmt)
        {
            /* Transition: '<S574>:32' */
            /* Transition: '<S574>:56' */
            MTIR_ac_B.VaMTIR_M_MtrCMaxCpbltyTrq_Poke[LeMTIR_Cnt_Index] =
                KeMTIR_M_MtrCMaxCpblty_MinLmt;

            /* Transition: '<S574>:69' */
        }
        else
        {
            /* Transition: '<S574>:54' */
        }

        /* Transition: '<S574>:39' */
    }
    else
    {
        /* Transition: '<S574>:36' */
    }

    /* End of Chart: '<S45>/PokeMTIR_M_MtrCCapabilityMaxChrt' */

    /* SignalConversion generated from: '<S45>/PokeMTIR_M_MtrCCapabilityMaxChrt' incorporates:
     *  SignalConversion generated from: '<S45>/VaMTIR_M_MtrCMaxCpbltyTrq_Poke_write'
     *  SignalConversion generated from: '<S45>/VeMTIR_Cnt_MtrCMaxCpbltyIndx_write'
     *  SignalConversion generated from: '<S45>/VeMTIR_b_MtrCMaxCpbltyTrqRcvd_write'
     */
#if Rte_SysCon_Variant_MTIR_1

    /* Merge: '<Root>/Merge_25' */
    Rte_IrvWrite_PokeMTIR_M_MtrCCapabilityMax_VaMTIR_M_MtrCMaxCpbltyTrq_Poke_Init_IRV
        (MTIR_ac_B.VaMTIR_M_MtrCMaxCpbltyTrq_Poke);

    /* Merge: '<Root>/Merge_23' */
    Rte_IrvWrite_PokeMTIR_M_MtrCCapabilityMax_VeMTIR_Cnt_MtrCMaxCpbltyIndx_Init_IRV
        (MTIR_ac_B.LeMTIR_Cnt_MtrCMaxCpbltyIndx);

    /* Merge: '<Root>/Merge_24' */
    Rte_IrvWrite_PokeMTIR_M_MtrCCapabilityMax_VeMTIR_b_MtrCMaxCpbltyTrqRcvd_write_IRV
        (MTIR_ac_B.LeMTIR_b_MtrCMaxCpbltyTrqRcvd);

#endif

    /* End of SignalConversion generated from: '<S45>/PokeMTIR_M_MtrCCapabilityMaxChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeMTIR_M_MtrCCapabilityMax' */
}

/* Output function */
FUNC(void, MTIR_CODE) PokeMTIR_M_MtrCCapabilityMin(VAR(float32, AUTOMATIC)
    LeMTIR_M_MtrC_MinTrq, VAR(uint8, AUTOMATIC) LeMTIR_Cnt_Index)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeMTIR_M_MtrCCapabilityMin' */
    /* Chart: '<S46>/PokeMTIR_M_MtrCCapabilityMinChrt' incorporates:
     *  SignalConversion generated from: '<S46>/LeMTIR_Cnt_Index'
     *  SignalConversion generated from: '<S46>/LeMTIR_M_MtrC_MinTrq'
     */
    /* Gateway: PokeMTIR_M_MtrCCapabilityMin/PokeMTIR_M_MtrCCapabilityMinChrt */
    /* During: PokeMTIR_M_MtrCCapabilityMin/PokeMTIR_M_MtrCCapabilityMinChrt */
    /* Entry Internal: PokeMTIR_M_MtrCCapabilityMin/PokeMTIR_M_MtrCCapabilityMinChrt */
    /* Transition: '<S575>:2' */
    if (KeMTIR_b_EnblMtrsTrqCpbltyCrv)
    {
        /* Transition: '<S575>:22' */
        /* Transition: '<S575>:40' */
        MTIR_ac_B.LeMTIR_b_MtrCMinCpbltyTrqRcvd = true;
        if ((LeMTIR_M_MtrC_MinTrq >= KeMTIR_M_MtrCMinCpblty_MinLmt) &&
                (LeMTIR_M_MtrC_MinTrq <= KeMTIR_M_MtrCMinCpblty_MaxLmt))
        {
            /* Transition: '<S575>:27' */
            /* Transition: '<S575>:45' */
            MTIR_ac_B.VaMTIR_M_MtrCMinCpbltyTrq_Poke[LeMTIR_Cnt_Index] =
                LeMTIR_M_MtrC_MinTrq;

            /* Transition: '<S575>:46' */
        }
        else
        {
            /* Transition: '<S575>:28' */
        }

        /* Transition: '<S575>:60' */
        if (LeMTIR_M_MtrC_MinTrq < KeMTIR_M_MtrCMinCpblty_MinLmt)
        {
            /* Transition: '<S575>:30' */
            /* Transition: '<S575>:52' */
            MTIR_ac_B.VaMTIR_M_MtrCMinCpbltyTrq_Poke[LeMTIR_Cnt_Index] =
                KeMTIR_M_MtrCMinCpblty_MinLmt;

            /* Transition: '<S575>:53' */
        }
        else
        {
            /* Transition: '<S575>:50' */
        }

        /* Transition: '<S575>:61' */
        if (LeMTIR_M_MtrC_MinTrq > KeMTIR_M_MtrCMinCpblty_MaxLmt)
        {
            /* Transition: '<S575>:33' */
            /* Transition: '<S575>:58' */
            MTIR_ac_B.VaMTIR_M_MtrCMinCpbltyTrq_Poke[LeMTIR_Cnt_Index] =
                KeMTIR_M_MtrCMinCpblty_MaxLmt;

            /* Transition: '<S575>:59' */
        }
        else
        {
            /* Transition: '<S575>:56' */
        }

        /* Transition: '<S575>:38' */
    }
    else
    {
        /* Transition: '<S575>:37' */
    }

    /* End of Chart: '<S46>/PokeMTIR_M_MtrCCapabilityMinChrt' */

    /* SignalConversion generated from: '<S46>/PokeMTIR_M_MtrCCapabilityMinChrt' incorporates:
     *  SignalConversion generated from: '<S46>/VaMTIR_M_MtrCMinCpbltyTrq_Poke_write'
     *  SignalConversion generated from: '<S46>/VeMTIR_b_MtrCMinCpbltyTrqRcvd_write'
     */
#if Rte_SysCon_Variant_MTIR_1

    /* Merge: '<Root>/Merge_27' */
    Rte_IrvWrite_PokeMTIR_M_MtrCCapabilityMin_VaMTIR_M_MtrCMinCpbltyTrq_Poke_Init_IRV
        (MTIR_ac_B.VaMTIR_M_MtrCMinCpbltyTrq_Poke);

    /* Merge: '<Root>/Merge_26' */
    Rte_IrvWrite_PokeMTIR_M_MtrCCapabilityMin_VeMTIR_b_MtrCMinCpbltyRcvd_write_IRV
        (MTIR_ac_B.LeMTIR_b_MtrCMinCpbltyTrqRcvd);

#endif

    /* End of SignalConversion generated from: '<S46>/PokeMTIR_M_MtrCCapabilityMinChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeMTIR_M_MtrCCapabilityMin' */
}

/* Output function */
FUNC(void, MTIR_CODE) PokeMTIR_M_MtrC_MaxTorq(VAR(float32, AUTOMATIC)
    LeMTIR_M_MtrC_MaxTorq)
{

#if !Rte_SysCon_Variant_MTIR_1

    UNUSED_PARAMETER(LeMTIR_M_MtrC_MaxTorq);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeMTIR_M_MtrC_MaxTorq' */
    /* SignalConversion generated from: '<S47>/PokeMTIR_M_MtrC_MaxTorqChrt' incorporates:
     *  SignalConversion generated from: '<S47>/VeMTIR_M_MtrC_MaxTorq_write'
     *  SignalConversion generated from: '<S47>/VeMTIR_b_MtrC_MaxTorqSgnl_Rcvd_write'
     */
    /* Gateway: PokeMTIR_M_MtrC_MaxTorq/PokeMTIR_M_MtrC_MaxTorqChrt */
    /* During: PokeMTIR_M_MtrC_MaxTorq/PokeMTIR_M_MtrC_MaxTorqChrt */
    /* Entry Internal: PokeMTIR_M_MtrC_MaxTorq/PokeMTIR_M_MtrC_MaxTorqChrt */
    /* Transition: '<S576>:2' */
#if Rte_SysCon_Variant_MTIR_1

    /* Merge: '<Root>/Merge_55' incorporates:
     *  SignalConversion generated from: '<S47>/LeMTIR_M_MtrC_MaxTorq'
     */
    Rte_IrvWrite_PokeMTIR_M_MtrC_MaxTorq_VeMTIR_M_MtrC_MaxTorq_write_IRV
        (LeMTIR_M_MtrC_MaxTorq);

    /* Merge: '<Root>/Merge_54' incorporates:
     *  Chart: '<S47>/PokeMTIR_M_MtrC_MaxTorqChrt'
     */
    Rte_IrvWrite_PokeMTIR_M_MtrC_MaxTorq_VeMTIR_b_MtrC_MaxTorqSgnl_Rcvd_write_IRV
        (true);

#endif

    /* End of SignalConversion generated from: '<S47>/PokeMTIR_M_MtrC_MaxTorqChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeMTIR_M_MtrC_MaxTorq' */
}

/* Output function */
FUNC(void, MTIR_CODE) PokeMTIR_M_MtrC_MinTorq(VAR(float32, AUTOMATIC)
    LeMTIR_M_MtrC_MinTorq)
{

#if !Rte_SysCon_Variant_MTIR_1

    UNUSED_PARAMETER(LeMTIR_M_MtrC_MinTorq);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeMTIR_M_MtrC_MinTorq' */
    /* SignalConversion generated from: '<S48>/PokeMTIR_M_MtrC_MinTorqChrt' incorporates:
     *  SignalConversion generated from: '<S48>/VeMTIR_M_MtrC_MinTorq_write'
     *  SignalConversion generated from: '<S48>/VeMTIR_b_MtrC_MinTorqSgnl_Rcvd_write'
     */
    /* Gateway: PokeMTIR_M_MtrC_MinTorq/PokeMTIR_M_MtrC_MinTorqChrt */
    /* During: PokeMTIR_M_MtrC_MinTorq/PokeMTIR_M_MtrC_MinTorqChrt */
    /* Entry Internal: PokeMTIR_M_MtrC_MinTorq/PokeMTIR_M_MtrC_MinTorqChrt */
    /* Transition: '<S577>:2' */
#if Rte_SysCon_Variant_MTIR_1

    /* Merge: '<Root>/Merge_57' incorporates:
     *  SignalConversion generated from: '<S48>/LeMTIR_M_MtrC_MinTorq'
     */
    Rte_IrvWrite_PokeMTIR_M_MtrC_MinTorq_VeMTIR_M_MtrC_MinTorq_write_IRV
        (LeMTIR_M_MtrC_MinTorq);

    /* Merge: '<Root>/Merge_56' incorporates:
     *  Chart: '<S48>/PokeMTIR_M_MtrC_MinTorqChrt'
     */
    Rte_IrvWrite_PokeMTIR_M_MtrC_MinTorq_VeMTIR_b_MtrC_MinTorqSgnl_Rcvd_write_IRV
        (true);

#endif

    /* End of SignalConversion generated from: '<S48>/PokeMTIR_M_MtrC_MinTorqChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeMTIR_M_MtrC_MinTorq' */
}

/* Output function */
FUNC(void, MTIR_CODE) PokeMTIR_M_MtrC_TorqAchieved(VAR(float32, AUTOMATIC)
    LeMTIR_M_MtrC_TorqAchieved, VAR(boolean, AUTOMATIC)
    LeMTIR_b_MtrC_TorqAchievedFA)
{
    boolean rtb_LeMTIR_b_MtrC_TorqAchieve_k;

    /* Outputs for Function Call SubSystem: '<Root>/PokeMTIR_M_MtrC_TorqAchieved' */
    /* Chart: '<S49>/PokeMTIR_M_MtrC_TorqAchievedChrt' incorporates:
     *  SignalConversion generated from: '<S49>/LeMTIR_M_MtrC_TorqAchieved'
     *  SignalConversion generated from: '<S49>/LeMTIR_b_MtrC_TorqAchievedFA'
     */
    /* Gateway: PokeMTIR_M_MtrC_TorqAchieved/PokeMTIR_M_MtrC_TorqAchievedChrt */
    /* During: PokeMTIR_M_MtrC_TorqAchieved/PokeMTIR_M_MtrC_TorqAchievedChrt */
    /* Entry Internal: PokeMTIR_M_MtrC_TorqAchieved/PokeMTIR_M_MtrC_TorqAchievedChrt */
    /* Transition: '<S578>:2' */
    if (!LeMTIR_b_MtrC_TorqAchievedFA)
    {
        /* Transition: '<S578>:3' */
        /* Transition: '<S578>:15' */
        MTIR_ac_B.LeMTIR_M_MtrC_TorqAchieved_out = LeMTIR_M_MtrC_TorqAchieved;
        rtb_LeMTIR_b_MtrC_TorqAchieve_k = false;
        MTIR_ac_B.LeMTIR_b_MtrC_TorqAchievedSgnl_ = true;

        /* Transition: '<S578>:18' */
    }
    else
    {
        /* Transition: '<S578>:4' */
        rtb_LeMTIR_b_MtrC_TorqAchieve_k = true;
    }

    /* End of Chart: '<S49>/PokeMTIR_M_MtrC_TorqAchievedChrt' */

    /* SignalConversion generated from: '<S49>/PokeMTIR_M_MtrC_TorqAchievedChrt' incorporates:
     *  SignalConversion generated from: '<S49>/VeMTIR_M_MtrC_TorqAchieved_write'
     *  SignalConversion generated from: '<S49>/VeMTIR_b_MtrC_TorqAchievedFA_write'
     */
#if Rte_SysCon_Variant_MTIR_1

    /* Merge: '<Root>/Merge_59' */
    Rte_IrvWrite_PokeMTIR_M_MtrC_TorqAchieved_VeMTIR_M_MtrC_TorqAchieved_write_IRV
        (MTIR_ac_B.LeMTIR_M_MtrC_TorqAchieved_out);

    /* Merge: '<Root>/Merge_60' */
    Rte_IrvWrite_PokeMTIR_M_MtrC_TorqAchieved_VeMTIR_b_MtrC_TorqAchievedFA_write_IRV
        (rtb_LeMTIR_b_MtrC_TorqAchieve_k);

#endif

    /* End of SignalConversion generated from: '<S49>/PokeMTIR_M_MtrC_TorqAchievedChrt' */

    /* Merge: '<Root>/Merge_58' incorporates:
     *  SignalConversion generated from: '<S49>/VeMTIR_b_MtrC_TorqAchievedSgnl_Rcvd_write'
     * */
    Rte_IrvWrite_PokeMTIR_M_MtrC_TorqAchieved_VeMTIR_b_MtrC_TorqAchievedSgnl_Rcvd_write_IRV
        (MTIR_ac_B.LeMTIR_b_MtrC_TorqAchievedSgnl_);

    /* End of Outputs for SubSystem: '<Root>/PokeMTIR_M_MtrC_TorqAchieved' */
}

/* Output function */
FUNC(void, MTIR_CODE) PokeMTIR_M_MtrC_TorqAchieved_AEMD(VAR(float32, AUTOMATIC)
    LeMTIR_M_MtrC_TorqAchieved_AEMD, VAR(boolean, AUTOMATIC)
    LeMTIR_b_MtrC_TorqAchieved_AEMDFA)
{
    float32 rtb_LeMTIR_M_MtrC_TorqAchieve_b;
    boolean rtb_LeMTIR_b_MtrC_TorqAchiev_ax;

    /* Outputs for Function Call SubSystem: '<Root>/PokeMTIR_M_MtrC_TorqAchieved_AEMD' */
    /* Chart: '<S50>/PokeMTIR_M_MtrC_TorqAchieved_AEMDChrt' incorporates:
     *  SignalConversion generated from: '<S50>/LeMTIR_M_MtrC_TorqAchieved_AEMD'
     *  SignalConversion generated from: '<S50>/LeMTIR_b_MtrC_TorqAchieved_AEMDFA'
     */
    /* Gateway: PokeMTIR_M_MtrC_TorqAchieved_AEMD/PokeMTIR_M_MtrC_TorqAchieved_AEMDChrt */
    /* During: PokeMTIR_M_MtrC_TorqAchieved_AEMD/PokeMTIR_M_MtrC_TorqAchieved_AEMDChrt */
    /* Entry Internal: PokeMTIR_M_MtrC_TorqAchieved_AEMD/PokeMTIR_M_MtrC_TorqAchieved_AEMDChrt */
    /* Transition: '<S579>:2' */
    if (!LeMTIR_b_MtrC_TorqAchieved_AEMDFA)
    {
        /* Transition: '<S579>:3' */
        /* Transition: '<S579>:15' */
        rtb_LeMTIR_M_MtrC_TorqAchieve_b = LeMTIR_M_MtrC_TorqAchieved_AEMD;
        rtb_LeMTIR_b_MtrC_TorqAchiev_ax = false;
        MTIR_ac_B.LeMTIR_b_MtrC_TorqAchieved_AEMD = true;

        /* Transition: '<S579>:18' */
    }
    else
    {
        /* Transition: '<S579>:4' */
        rtb_LeMTIR_b_MtrC_TorqAchiev_ax = true;
        rtb_LeMTIR_M_MtrC_TorqAchieve_b = KeMTIR_M_MtrC_TorqAchieved_AEMD_Val;
    }

    /* End of Chart: '<S50>/PokeMTIR_M_MtrC_TorqAchieved_AEMDChrt' */

    /* SignalConversion generated from: '<S50>/PokeMTIR_M_MtrC_TorqAchieved_AEMDChrt' incorporates:
     *  SignalConversion generated from: '<S50>/VeMTIR_M_MtrC_TorqAchieved_AEMD_write'
     *  SignalConversion generated from: '<S50>/VeMTIR_b_MtrC_TorqAchieved_AEMDFA_write'
     */
#if Rte_SysCon_Variant_MTIR_1

    /* Merge: '<Root>/Merge_62' */
    Rte_IrvWrite_PokeMTIR_M_MtrC_TorqAchieved_AEMD_VeMTIR_M_MtrC_TorqAchieved_AEMD_write_IRV
        (rtb_LeMTIR_M_MtrC_TorqAchieve_b);

    /* Merge: '<Root>/Merge_61' */
    Rte_IrvWrite_PokeMTIR_M_MtrC_TorqAchieved_AEMD_VeMTIR_b_MtrC_TorqAchieved_AEMDFA_write_IRV
        (rtb_LeMTIR_b_MtrC_TorqAchiev_ax);

#endif

    /* End of SignalConversion generated from: '<S50>/PokeMTIR_M_MtrC_TorqAchieved_AEMDChrt' */

    /* Merge: '<Root>/Merge_63' incorporates:
     *  SignalConversion generated from: '<S50>/VeMTIR_b_MtrC_TorqAchieved_AEMDSgnl_Rcvd_write'
     * */
    Rte_IrvWrite_PokeMTIR_M_MtrC_TorqAchieved_AEMD_VeMTIR_b_MtrC_TorqAchieved_AEMDSgnl_Rcvd_write_IRV
        (MTIR_ac_B.LeMTIR_b_MtrC_TorqAchieved_AEMD);

    /* End of Outputs for SubSystem: '<Root>/PokeMTIR_M_MtrC_TorqAchieved_AEMD' */
}

/* Output function */
FUNC(void, MTIR_CODE) PokeMTIR_M_P2SpdCntrlMaxTrqLmt(VAR(float32, AUTOMATIC)
    LeMTIR_M_P2SpdCntrlMaxTrqLmt, VAR(boolean, AUTOMATIC)
    LeMTIR_b_P2SpdCntrlMaxTrqLmtFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeMTIR_M_P2SpdCntrlMaxTrqLmt' */
    /* Chart: '<S51>/PokeMTIR_M_P2SpdCntrlMaxTrqLmtChrt' incorporates:
     *  SignalConversion generated from: '<S51>/LeMTIR_M_P2SpdCntrlMaxTrqLmt'
     *  SignalConversion generated from: '<S51>/LeMTIR_b_P2SpdCntrlMaxTrqLmtFA'
     */
    /* Gateway: PokeMTIR_M_P2SpdCntrlMaxTrqLmt/PokeMTIR_M_P2SpdCntrlMaxTrqLmtChrt */
    /* During: PokeMTIR_M_P2SpdCntrlMaxTrqLmt/PokeMTIR_M_P2SpdCntrlMaxTrqLmtChrt */
    /* Entry Internal: PokeMTIR_M_P2SpdCntrlMaxTrqLmt/PokeMTIR_M_P2SpdCntrlMaxTrqLmtChrt */
    /* Transition: '<S580>:2' */
    if (!LeMTIR_b_P2SpdCntrlMaxTrqLmtFA)
    {
        /* Transition: '<S580>:3' */
        /* Transition: '<S580>:15' */
        MTIR_ac_B.LeMTIR_M_P2SpdCntrlMaxTrqLmt_ou = LeMTIR_M_P2SpdCntrlMaxTrqLmt;

        /* Transition: '<S580>:18' */
    }
    else
    {
        /* Transition: '<S580>:4' */
    }

    /* End of Chart: '<S51>/PokeMTIR_M_P2SpdCntrlMaxTrqLmtChrt' */

    /* Merge: '<Root>/Merge_28' incorporates:
     *  SignalConversion generated from: '<S51>/VeMTIR_M_P2SpdCntrlMaxTrqLmt_write'
     * */
    Rte_IrvWrite_PokeMTIR_M_P2SpdCntrlMaxTrqLmt_VeMTIR_M_P2SpdCntrlMaxTrqLmt_Init_IRV
        (MTIR_ac_B.LeMTIR_M_P2SpdCntrlMaxTrqLmt_ou);

    /* End of Outputs for SubSystem: '<Root>/PokeMTIR_M_P2SpdCntrlMaxTrqLmt' */
}

/* Output function */
FUNC(void, MTIR_CODE) PokeMTIR_M_P2SpdCntrlMinTrqLmt(VAR(float32, AUTOMATIC)
    LeMTIR_M_P2SpdCntrlMinTrqLmt, VAR(boolean, AUTOMATIC)
    LeMTIR_b_P2SpdCntrlMinTrqLmtFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeMTIR_M_P2SpdCntrlMinTrqLmt' */
    /* Chart: '<S52>/PokeMTIR_M_P2SpdCntrlMinTrqLmtChrt' incorporates:
     *  SignalConversion generated from: '<S52>/LeMTIR_M_P2SpdCntrlMinTrqLmt'
     *  SignalConversion generated from: '<S52>/LeMTIR_b_P2SpdCntrlMinTrqLmtFA'
     */
    /* Gateway: PokeMTIR_M_P2SpdCntrlMinTrqLmt/PokeMTIR_M_P2SpdCntrlMinTrqLmtChrt */
    /* During: PokeMTIR_M_P2SpdCntrlMinTrqLmt/PokeMTIR_M_P2SpdCntrlMinTrqLmtChrt */
    /* Entry Internal: PokeMTIR_M_P2SpdCntrlMinTrqLmt/PokeMTIR_M_P2SpdCntrlMinTrqLmtChrt */
    /* Transition: '<S581>:2' */
    if (!LeMTIR_b_P2SpdCntrlMinTrqLmtFA)
    {
        /* Transition: '<S581>:3' */
        /* Transition: '<S581>:15' */
        MTIR_ac_B.LeMTIR_M_P2SpdCntrlMinTrqLmt_ou = LeMTIR_M_P2SpdCntrlMinTrqLmt;

        /* Transition: '<S581>:18' */
    }
    else
    {
        /* Transition: '<S581>:4' */
    }

    /* End of Chart: '<S52>/PokeMTIR_M_P2SpdCntrlMinTrqLmtChrt' */

    /* Merge: '<Root>/Merge_29' incorporates:
     *  SignalConversion generated from: '<S52>/VeMTIR_M_P2SpdCntrlMinTrqLmt_write'
     * */
    Rte_IrvWrite_PokeMTIR_M_P2SpdCntrlMinTrqLmt_VeMTIR_M_P2SpdCntrlMinTrqLmt_Init_IRV
        (MTIR_ac_B.LeMTIR_M_P2SpdCntrlMinTrqLmt_ou);

    /* End of Outputs for SubSystem: '<Root>/PokeMTIR_M_P2SpdCntrlMinTrqLmt' */
}

/* Output function */
FUNC(void, MTIR_CODE) PokeMTIR_k_MtrADeratingFactor(VAR(float32, AUTOMATIC)
    LeMTIR_k_DrtngFctr)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeMTIR_k_MtrADeratingFactor' */
    /* Chart: '<S53>/PokeMTIR_k_MtrADeratingFactorChrt' incorporates:
     *  SignalConversion generated from: '<S53>/LeMTIR_k_DrtngFctr'
     */
    /* Gateway: PokeMTIR_k_MtrADeratingFactor/PokeMTIR_k_MtrADeratingFactorChrt */
    /* During: PokeMTIR_k_MtrADeratingFactor/PokeMTIR_k_MtrADeratingFactorChrt */
    /* Entry Internal: PokeMTIR_k_MtrADeratingFactor/PokeMTIR_k_MtrADeratingFactorChrt */
    /* Transition: '<S582>:2' */
    if (KeMTIR_b_EnblMtrsTrqCpbltyCrv)
    {
        /* Transition: '<S582>:22' */
        /* Transition: '<S582>:29' */
        MTIR_ac_B.LeMTIR_k_MtrADrtngFctr_Poke = LeMTIR_k_DrtngFctr;
        MTIR_ac_B.LeMTIR_b_MtrADrtngFctrRcvd = true;

        /* Transition: '<S582>:30' */
    }
    else
    {
        /* Transition: '<S582>:26' */
    }

    /* End of Chart: '<S53>/PokeMTIR_k_MtrADeratingFactorChrt' */

    /* Merge: '<Root>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S53>/VeMTIR_b_MtrADrtngFctrRcvd_write'
     * */
    Rte_IrvWrite_PokeMTIR_k_MtrADeratingFactor_VeMTIR_b_MtrADrtngFctrRcvd_write_IRV
        (MTIR_ac_B.LeMTIR_b_MtrADrtngFctrRcvd);

    /* Merge: '<Root>/Merge_4' incorporates:
     *  SignalConversion generated from: '<S53>/VeMTIR_k_MtrADrtngFctr_Poke_write'
     * */
    Rte_IrvWrite_PokeMTIR_k_MtrADeratingFactor_VeMTIR_k_MtrADrtngFctr_Poke_Init_IRV
        (MTIR_ac_B.LeMTIR_k_MtrADrtngFctr_Poke);

    /* End of Outputs for SubSystem: '<Root>/PokeMTIR_k_MtrADeratingFactor' */
}

/* Output function */
FUNC(void, MTIR_CODE) PokeMTIR_k_MtrBDeratingFactor(VAR(float32, AUTOMATIC)
    LeMTIR_k_DrtngFctr)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeMTIR_k_MtrBDeratingFactor' */
    /* Chart: '<S54>/PokeMTIR_k_MtrBDeratingFactorChrt' incorporates:
     *  SignalConversion generated from: '<S54>/LeMTIR_k_DrtngFctr'
     */
    /* Gateway: PokeMTIR_k_MtrBDeratingFactor/PokeMTIR_k_MtrBDeratingFactorChrt */
    /* During: PokeMTIR_k_MtrBDeratingFactor/PokeMTIR_k_MtrBDeratingFactorChrt */
    /* Entry Internal: PokeMTIR_k_MtrBDeratingFactor/PokeMTIR_k_MtrBDeratingFactorChrt */
    /* Transition: '<S583>:2' */
    if (KeMTIR_b_EnblMtrsTrqCpbltyCrv)
    {
        /* Transition: '<S583>:22' */
        /* Transition: '<S583>:27' */
        MTIR_ac_B.LeMTIR_k_MtrBDrtngFctr = LeMTIR_k_DrtngFctr;
        MTIR_ac_B.LeMTIR_b_MtrBDrtngFctrRcvd = true;

        /* Transition: '<S583>:28' */
    }
    else
    {
        /* Transition: '<S583>:23' */
    }

    /* End of Chart: '<S54>/PokeMTIR_k_MtrBDeratingFactorChrt' */

    /* Merge: '<Root>/Merge_12' incorporates:
     *  SignalConversion generated from: '<S54>/VeMTIR_b_MtrBDrtngFctrRcvd_write'
     * */
    Rte_IrvWrite_PokeMTIR_k_MtrBDeratingFactor_VeMTIR_b_MtrBDrtngFctrRcvd_write_IRV
        (MTIR_ac_B.LeMTIR_b_MtrBDrtngFctrRcvd);

    /* Merge: '<Root>/Merge_13' incorporates:
     *  SignalConversion generated from: '<S54>/VeMTIR_k_MtrBDrtngFctr_write'
     * */
    Rte_IrvWrite_PokeMTIR_k_MtrBDeratingFactor_VeMTIR_k_MtrBDrtngFctr_Init_IRV
        (MTIR_ac_B.LeMTIR_k_MtrBDrtngFctr);

    /* End of Outputs for SubSystem: '<Root>/PokeMTIR_k_MtrBDeratingFactor' */
}

/* Output function */
FUNC(void, MTIR_CODE) PokeMTIR_k_MtrCDeratingFactor(VAR(float32, AUTOMATIC)
    LeMTIR_k_DrtngFctr)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeMTIR_k_MtrCDeratingFactor' */
    /* Chart: '<S55>/PokeMTIR_k_MtrCDeratingFactorChrt' incorporates:
     *  SignalConversion generated from: '<S55>/LeMTIR_k_DrtngFctr'
     */
    /* Gateway: PokeMTIR_k_MtrCDeratingFactor/PokeMTIR_k_MtrCDeratingFactorChrt */
    /* During: PokeMTIR_k_MtrCDeratingFactor/PokeMTIR_k_MtrCDeratingFactorChrt */
    /* Entry Internal: PokeMTIR_k_MtrCDeratingFactor/PokeMTIR_k_MtrCDeratingFactorChrt */
    /* Transition: '<S584>:2' */
    if (KeMTIR_b_EnblMtrsTrqCpbltyCrv)
    {
        /* Transition: '<S584>:22' */
        /* Transition: '<S584>:27' */
        MTIR_ac_B.LeMTIR_k_MtrCDrtngFctr = LeMTIR_k_DrtngFctr;
        MTIR_ac_B.LeMTIR_b_MtrCDrtngFctrRcvd = true;

        /* Transition: '<S584>:28' */
    }
    else
    {
        /* Transition: '<S584>:23' */
    }

    /* End of Chart: '<S55>/PokeMTIR_k_MtrCDeratingFactorChrt' */

    /* SignalConversion generated from: '<S55>/PokeMTIR_k_MtrCDeratingFactorChrt' incorporates:
     *  SignalConversion generated from: '<S55>/VeMTIR_b_MtrCDrtngFctrRcvd_write'
     *  SignalConversion generated from: '<S55>/VeMTIR_k_MtrCDrtngFctr_write'
     */
#if Rte_SysCon_Variant_MTIR_1

    /* Merge: '<Root>/Merge_21' */
    Rte_IrvWrite_PokeMTIR_k_MtrCDeratingFactor_VeMTIR_b_MtrCDrtngFctrRcvd_write_IRV
        (MTIR_ac_B.LeMTIR_b_MtrCDrtngFctrRcvd);

    /* Merge: '<Root>/Merge_22' */
    Rte_IrvWrite_PokeMTIR_k_MtrCDeratingFactor_VeMTIR_k_MtrCDrtngFctr_Init_IRV
        (MTIR_ac_B.LeMTIR_k_MtrCDrtngFctr);

#endif

    /* End of SignalConversion generated from: '<S55>/PokeMTIR_k_MtrCDeratingFactorChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeMTIR_k_MtrCDeratingFactor' */
}

/* Output function */
FUNC(void, MTIR_CODE) PokeMTIR_n_MtrACapabilitySpd(VAR(float32, AUTOMATIC)
    LeMTIR_n_MtrASpd, VAR(uint8, AUTOMATIC) LeMTIR_Cnt_Index)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeMTIR_n_MtrACapabilitySpd' */
    /* Chart: '<S56>/PokeMTIR_n_MtrACapabilitySpdChrt' incorporates:
     *  SignalConversion generated from: '<S56>/LeMTIR_Cnt_Index'
     *  SignalConversion generated from: '<S56>/LeMTIR_n_MtrASpd'
     */
    /* Gateway: PokeMTIR_n_MtrACapabilitySpd/PokeMTIR_n_MtrACapabilitySpdChrt */
    /* During: PokeMTIR_n_MtrACapabilitySpd/PokeMTIR_n_MtrACapabilitySpdChrt */
    /* Entry Internal: PokeMTIR_n_MtrACapabilitySpd/PokeMTIR_n_MtrACapabilitySpdChrt */
    /* Transition: '<S585>:2' */
    if (KeMTIR_b_EnblMtrsTrqCpbltyCrv)
    {
        /* Transition: '<S585>:22' */
        /* Transition: '<S585>:29' */
        MTIR_ac_B.VaMTIR_n_MtrACpbltySpd_Poke[LeMTIR_Cnt_Index] =
            LeMTIR_n_MtrASpd;
        MTIR_ac_B.LeMTIR_b_MtrACpbltySpdRcvd = true;

        /* Transition: '<S585>:30' */
    }
    else
    {
        /* Transition: '<S585>:26' */
    }

    /* End of Chart: '<S56>/PokeMTIR_n_MtrACapabilitySpdChrt' */

    /* Merge: '<Root>/Merge_2' incorporates:
     *  SignalConversion generated from: '<S56>/VaMTIR_n_MtrACpbltySpd_Poke_write'
     */
    Rte_IrvWrite_PokeMTIR_n_MtrACapabilitySpd_VaMTIR_n_MtrACpbltySpd_Poke_Init_IRV
        (MTIR_ac_B.VaMTIR_n_MtrACpbltySpd_Poke);

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S56>/VeMTIR_b_MtrACpbltySpdRcvd_write'
     * */
    Rte_IrvWrite_PokeMTIR_n_MtrACapabilitySpd_VeMTIR_b_MtrACpbltySpdRcvd_write_IRV
        (MTIR_ac_B.LeMTIR_b_MtrACpbltySpdRcvd);

    /* End of Outputs for SubSystem: '<Root>/PokeMTIR_n_MtrACapabilitySpd' */
}

/* Output function */
FUNC(void, MTIR_CODE) PokeMTIR_n_MtrBCapabilitySpd(VAR(float32, AUTOMATIC)
    LeMTIR_n_MtrBSpd, VAR(uint8, AUTOMATIC) LeMTIR_Cnt_Index)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeMTIR_n_MtrBCapabilitySpd' */
    /* Chart: '<S57>/PokeMTIR_n_MtrBCapabilitySpdChrt' incorporates:
     *  SignalConversion generated from: '<S57>/LeMTIR_Cnt_Index'
     *  SignalConversion generated from: '<S57>/LeMTIR_n_MtrBSpd'
     */
    /* Gateway: PokeMTIR_n_MtrBCapabilitySpd/PokeMTIR_n_MtrBCapabilitySpdChrt */
    /* During: PokeMTIR_n_MtrBCapabilitySpd/PokeMTIR_n_MtrBCapabilitySpdChrt */
    /* Entry Internal: PokeMTIR_n_MtrBCapabilitySpd/PokeMTIR_n_MtrBCapabilitySpdChrt */
    /* Transition: '<S586>:2' */
    if (KeMTIR_b_EnblMtrsTrqCpbltyCrv)
    {
        /* Transition: '<S586>:25' */
        /* Transition: '<S586>:27' */
        MTIR_ac_B.VaMTIR_n_MtrBCpbltySpd_Poke[LeMTIR_Cnt_Index] =
            LeMTIR_n_MtrBSpd;
        MTIR_ac_B.LeMTIR_b_MtrBCpbltySpdRcvd = true;

        /* Transition: '<S586>:28' */
    }
    else
    {
        /* Transition: '<S586>:29' */
    }

    /* End of Chart: '<S57>/PokeMTIR_n_MtrBCapabilitySpdChrt' */

    /* Merge: '<Root>/Merge_11' incorporates:
     *  SignalConversion generated from: '<S57>/VaMTIR_n_MtrBCpbltySpd_Poke_write'
     */
    Rte_IrvWrite_PokeMTIR_n_MtrBCapabilitySpd_VaMTIR_n_MtrBCpbltySpd_Poke_Init_IRV
        (MTIR_ac_B.VaMTIR_n_MtrBCpbltySpd_Poke);

    /* Merge: '<Root>/Merge_10' incorporates:
     *  SignalConversion generated from: '<S57>/VeMTIR_b_MtrBCpbltySpdRcvd_write'
     * */
    Rte_IrvWrite_PokeMTIR_n_MtrBCapabilitySpd_VeMTIR_b_MtrBCpbltySpdRcvd_write_IRV
        (MTIR_ac_B.LeMTIR_b_MtrBCpbltySpdRcvd);

    /* End of Outputs for SubSystem: '<Root>/PokeMTIR_n_MtrBCapabilitySpd' */
}

/* Output function */
FUNC(void, MTIR_CODE) PokeMTIR_n_MtrCCapabilitySpd(VAR(float32, AUTOMATIC)
    LeMTIR_n_MtrCSpd, VAR(uint8, AUTOMATIC) LeMTIR_Cnt_Index)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeMTIR_n_MtrCCapabilitySpd' */
    /* Chart: '<S58>/PokeMTIR_n_MtrCCapabilitySpdChrt' incorporates:
     *  SignalConversion generated from: '<S58>/LeMTIR_Cnt_Index'
     *  SignalConversion generated from: '<S58>/LeMTIR_n_MtrCSpd'
     */
    /* Gateway: PokeMTIR_n_MtrCCapabilitySpd/PokeMTIR_n_MtrCCapabilitySpdChrt */
    /* During: PokeMTIR_n_MtrCCapabilitySpd/PokeMTIR_n_MtrCCapabilitySpdChrt */
    /* Entry Internal: PokeMTIR_n_MtrCCapabilitySpd/PokeMTIR_n_MtrCCapabilitySpdChrt */
    /* Transition: '<S587>:2' */
    if (KeMTIR_b_EnblMtrsTrqCpbltyCrv)
    {
        /* Transition: '<S587>:25' */
        /* Transition: '<S587>:27' */
        MTIR_ac_B.VaMTIR_n_MtrCCpbltySpd_Poke[LeMTIR_Cnt_Index] =
            LeMTIR_n_MtrCSpd;
        MTIR_ac_B.LeMTIR_b_MtrCCpbltySpdRcvd = true;

        /* Transition: '<S587>:28' */
    }
    else
    {
        /* Transition: '<S587>:29' */
    }

    /* End of Chart: '<S58>/PokeMTIR_n_MtrCCapabilitySpdChrt' */

    /* SignalConversion generated from: '<S58>/PokeMTIR_n_MtrCCapabilitySpdChrt' incorporates:
     *  SignalConversion generated from: '<S58>/VaMTIR_n_MtrCCpbltySpd_Poke_write'
     *  SignalConversion generated from: '<S58>/VeMTIR_b_MtrCCpbltySpdRcvd_write'
     */
#if Rte_SysCon_Variant_MTIR_1

    /* Merge: '<Root>/Merge_19' */
    Rte_IrvWrite_PokeMTIR_n_MtrCCapabilitySpd_VaMTIR_n_MtrCCpbltySpd_Poke_Init_IRV
        (MTIR_ac_B.VaMTIR_n_MtrCCpbltySpd_Poke);

    /* Merge: '<Root>/Merge_20' */
    Rte_IrvWrite_PokeMTIR_n_MtrCCapabilitySpd_VeMTIR_b_MtrCCpbltySpdRcvd_write_IRV
        (MTIR_ac_B.LeMTIR_b_MtrCCpbltySpdRcvd);

#endif

    /* End of SignalConversion generated from: '<S58>/PokeMTIR_n_MtrCCapabilitySpdChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeMTIR_n_MtrCCapabilitySpd' */
}

/* Output function */
FUNC(void, MTIR_CODE) MTIR_PwrOn(void)
{
    sint32 i;
    float32 Gain[16];
    float32 Gain_c[16];
    float32 Gain_hy[16];
    float32 Gain_m[16];
    float32 Gain_ma[16];
    float32 Gain_p[16];
    float32 Product[16];
    float32 Product1[16];
    float32 Product2[16];
    float32 rtb_ArrayAssignment[16];
    float32 rtb_ArrayAssignment1[16];
    float32 rtb_ArrayAssignment2[16];
    float32 rtb_ArrayAssignment3[16];
    float32 rtb_ArrayAssignment4[16];
    float32 rtb_ArrayAssignment5[16];
    float32 rtb_A_spd;
    float32 rtb_B_Spd;
    float32 rtb_C_Spd;
    float32 rtb_Merge;
    float32 rtb_Merge3;
    float32 rtb_Merge5;
    sint16 s499_iter;

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/MTIR_PwrOn'
     */
    /* S-Function (fcgen): '<S30>/FcnCallGen' incorporates:
     *  SubSystem: '<S30>/MTII_MtrTrqInit'
     */
    /* SignalConversion generated from: '<S497>/VeMTIR_M_MtrA_TorqAchieved' */
    MTIR_ac_B.OutportBufferForVeMTIR_M_MtrA_p = 0.0F;

    /* SignalConversion generated from: '<S497>/VeMTIR_b_MtrA_TorqAchievedFA' */
    MTIR_ac_B.OutportBufferForVeMTIR_b_MtrA_g = false;

    /* SignalConversion generated from: '<S497>/VeMTIR_M_MtrA_MaxTorq' incorporates:
     *  Constant: '<S548>/Calib'
     */
    MTIR_ac_B.OutportBufferForVeMTIR_M_Mtr_m5 = KeMTIR_M_MtrA_MaxTrqDflt;

    /* SignalConversion generated from: '<S497>/VeMTIR_M_MtrA_MinTorq' incorporates:
     *  Constant: '<S549>/Calib'
     */
    MTIR_ac_B.OutportBufferForVeMTIR_M_MtrA_a = KeMTIR_M_MtrA_MinTrqDflt;

    /* SignalConversion generated from: '<S497>/VeMTIR_M_MtrA_TorqAchieved_AEMD' incorporates:
     *  Constant: '<S550>/Calib'
     */
    MTIR_ac_B.OutportBufferForVeMTIR_M_Mtr_mx =
        KeMTIR_M_MtrA_TorqAchieved_AEMDDflt;

    /* SignalConversion generated from: '<S497>/VeMTIR_M_MtrA_TorqAchieved_AEMDFA' */
    MTIR_ac_B.OutportBufferForVeMTIR_M_MtrA_b = false;

    /* SignalConversion generated from: '<S497>/VeMTIR_M_MtrB_TorqAchieved' */
    MTIR_ac_B.OutportBufferForVeMTIR_M_MtrB_j = 0.0F;

    /* SignalConversion generated from: '<S497>/VeMTIR_M_MtrB_TorqAchievedFA' */
    MTIR_ac_B.OutportBufferForVeMTIR_M_MtrB_g = false;

    /* SignalConversion generated from: '<S497>/VeMTIR_M_MtrB_MaxTorq' incorporates:
     *  Constant: '<S553>/Calib'
     */
    MTIR_ac_B.OutportBufferForVeMTIR_M_MtrB_k = KeMTIR_M_MtrB_MaxTrqDflt;

    /* SignalConversion generated from: '<S497>/VeMTIR_M_MtrB_MinTorq' incorporates:
     *  Constant: '<S554>/Calib'
     */
    MTIR_ac_B.OutportBufferForVeMTIR_M_Mtr_cq = KeMTIR_M_MtrB_MinTrqDflt;

    /* SignalConversion generated from: '<S497>/VeMTIR_M_MtrB_TorqAchieved_AEMD' incorporates:
     *  Constant: '<S555>/Calib'
     */
    MTIR_ac_B.OutportBufferForVeMTIR_M_MtrB_o =
        KeMTIR_M_MtrB_TorqAchieved_AEMDDflt;

    /* SignalConversion generated from: '<S497>/VeMTII_M_MtrB_TorqAchieved_AEMDFA' */
    MTIR_ac_B.OutportBufferForVeMTII_M_MtrB_T = false;

    /* SignalConversion generated from: '<S497>/VeMTIR_M_MtrBMaxTrqLmt_TCM' incorporates:
     *  Constant: '<S551>/Calib'
     */
    MTIR_ac_B.OutportBufferForVeMTIR_M_MtrBMa = KeMTIR_M_MtrBMaxTrqLmt_TCM;

    /* SignalConversion generated from: '<S497>/VeMTIR_M_MtrBMaxTrqLmt_TCMFA' */
    MTIR_ac_B.OutportBufferForVeMTIR_M_MtrB_e = false;

    /* SignalConversion generated from: '<S497>/VeMTIR_M_MtrBMinTrqLmt_TCM' incorporates:
     *  Constant: '<S552>/Calib'
     */
    MTIR_ac_B.OutportBufferForVeMTIR_M_MtrBMi = KeMTIR_M_MtrBMinTrqLmt_TCM;

    /* SignalConversion generated from: '<S497>/VeMTIR_M_MtrBMinTrqLmt_TCMFA' */
    MTIR_ac_B.OutportBufferForVeMTIR_M_Mtr_je = false;

    /* SignalConversion generated from: '<S497>/VeMTIR_M_MtrC_TorqAchieved' */
    MTIR_ac_B.OutportBufferForVeMTIR_M_MtrC_e = 0.0F;

    /* SignalConversion generated from: '<S497>/VeMTIR_M_MtrC_TorqAchievedFA' */
    MTIR_ac_B.OutportBufferForVeMTIR_M_MtrC_d = false;

    /* SignalConversion generated from: '<S497>/VeMTIR_M_MtrC_MaxTorq' incorporates:
     *  Constant: '<S556>/Calib'
     */
    MTIR_ac_B.OutportBufferForVeMTIR_M_MtrC_b = KeMTIR_M_MtrC_MaxTrqDflt;

    /* SignalConversion generated from: '<S497>/VeMTIR_M_MtrC_MinTorq' incorporates:
     *  Constant: '<S557>/Calib'
     */
    MTIR_ac_B.OutportBufferForVeMTIR_M_MtrC_f = KeMTIR_M_MtrC_MinTrqDflt;

    /* SignalConversion generated from: '<S497>/VeMTIR_M_MtrC_TorqAchieved_AEMD' incorporates:
     *  Constant: '<S558>/Calib'
     */
    MTIR_ac_B.OutportBufferForVeMTIR_M_Mtr_bz =
        KeMTIR_M_MtrC_TorqAchieved_AEMDDflt;

    /* SignalConversion generated from: '<S497>/VeMTII_M_MtrC_TorqAchieved_AEMDFA' */
    MTIR_ac_B.OutportBufferForVeMTII_M_MtrC_T = false;

    /* SignalConversion generated from: '<S497>/P2SpdCntrlMaxTrqLmtInit' */
    MTIR_ac_B.OutportBufferForP2SpdCntrlMaxTr = 0.0F;

    /* SignalConversion generated from: '<S497>/P2SpdCntrlMinTrqLmtInit' */
    MTIR_ac_B.OutportBufferForP2SpdCntrlMinTr = 0.0F;

    /* S-Function (fcgen): '<S30>/FcnCallGen' incorporates:
     *  SubSystem: '<S30>/MTII_MtrCpbltyTrqInit'
     */
    /* Outputs for Iterator SubSystem: '<S496>/For Iterator Subsystem' incorporates:
     *  ForIterator: '<S499>/For Iterator'
     */
    for (s499_iter = 0; s499_iter < 16; s499_iter++)
    {
        /* Merge: '<S522>/Merge' incorporates:
         *  Constant: '<S523>/Calib'
         *  Constant: '<S526>/Calib'
         *  Product: '<S499>/Product'
         *  Selector: '<S499>/Selector'
         */
        rtb_Merge = KaMTIR_n_MtrACpbltySpd_Dflt[(s499_iter)] *
            KeMTIR_U_MtrA_DC_Volt;

        /* Abs: '<S522>/A_spd' */
        rtb_A_spd = fabsf(rtb_Merge);

        /* Merge: '<S522>/Merge3' incorporates:
         *  Constant: '<S524>/Calib'
         *  Constant: '<S527>/Calib'
         *  Product: '<S499>/Product1'
         *  Selector: '<S499>/Selector1'
         */
        rtb_Merge3 = KaMTIR_n_MtrBCpbltySpd_Dflt[(s499_iter)] *
            KeMTIR_U_MtrB_DC_Volt;

        /* Abs: '<S522>/B_Spd' */
        rtb_B_Spd = fabsf(rtb_Merge3);

        /* Merge: '<S522>/Merge5' incorporates:
         *  Constant: '<S525>/Calib'
         *  Constant: '<S528>/Calib'
         *  Product: '<S499>/Product2'
         *  Selector: '<S499>/Selector2'
         */
        rtb_Merge5 = KaMTIR_n_MtrCCpbltySpd_Dflt[(s499_iter)] *
            KeMTIR_U_MtrC_DC_Volt;

        /* Abs: '<S522>/C_Spd' */
        rtb_C_Spd = fabsf(rtb_Merge5);

        /* If: '<S522>/If1' incorporates:
         *  Abs: '<S522>/A_spd'
         *  Lookup_n-D: '<S536>/Vector'
         *  Lookup_n-D: '<S539>/Vector'
         *  Merge: '<S522>/Merge4'
         */
        if (rtb_Merge > 0.0F)
        {
            /* Outputs for IfAction SubSystem: '<S522>/Pass' incorporates:
             *  ActionPort: '<S530>/Action Port'
             */
            /* Outputs for Atomic SubSystem: '<S522>/Not_Reverse' */
            MTIR_ac_Pass(look1_iflf_binlcapw(rtb_A_spd,
                          (Rte_Prm_KxHSCR_M_Motor_Torque_Min_MtrA_KxHSCR_M_Motor_Torque_Min_MtrA
                           ()),
                          (Rte_Prm_KtHSCR_M_Motor_Torque_Min_MtrA_KtHSCR_M_Motor_Torque_Min_MtrA
                           ()), 21U), look1_iflf_binlcapw(rtb_A_spd,
                          (Rte_Prm_KxHSCR_M_Motor_Torque_Max_MtrA_KxHSCR_M_Motor_Torque_Max_MtrA
                           ()),
                          (Rte_Prm_KtHSCR_M_Motor_Torque_Max_MtrA_KtHSCR_M_Motor_Torque_Max_MtrA
                           ()), 21U), &rtb_Merge,
                         &rtb_ArrayAssignment4[s499_iter]);

            /* End of Outputs for SubSystem: '<S522>/Not_Reverse' */
            /* End of Outputs for SubSystem: '<S522>/Pass' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S522>/Switch' incorporates:
             *  ActionPort: '<S533>/Action Port'
             */
            /* Outputs for Atomic SubSystem: '<S522>/Not_Reverse' */
            MTIR_ac_Switch(look1_iflf_binlcapw(rtb_A_spd,
                            (Rte_Prm_KxHSCR_M_Motor_Torque_Min_MtrA_KxHSCR_M_Motor_Torque_Min_MtrA
                             ()),
                            (Rte_Prm_KtHSCR_M_Motor_Torque_Min_MtrA_KtHSCR_M_Motor_Torque_Min_MtrA
                             ()), 21U), look1_iflf_binlcapw(rtb_A_spd,
                            (Rte_Prm_KxHSCR_M_Motor_Torque_Max_MtrA_KxHSCR_M_Motor_Torque_Max_MtrA
                             ()),
                            (Rte_Prm_KtHSCR_M_Motor_Torque_Max_MtrA_KtHSCR_M_Motor_Torque_Max_MtrA
                             ()), 21U), &rtb_Merge,
                           &rtb_ArrayAssignment4[s499_iter]);

            /* End of Outputs for SubSystem: '<S522>/Not_Reverse' */
            /* End of Outputs for SubSystem: '<S522>/Switch' */
        }

        /* End of If: '<S522>/If1' */

        /* Assignment: '<S521>/Array Assignment' */
        rtb_ArrayAssignment[s499_iter] = rtb_Merge;

        /* Assignment: '<S521>/Array Assignment1' incorporates:
         *  Merge: '<S522>/Merge4'
         */
        rtb_ArrayAssignment1[s499_iter] = rtb_ArrayAssignment4[s499_iter];

        /* If: '<S522>/If2' incorporates:
         *  Abs: '<S522>/B_Spd'
         *  Lookup_n-D: '<S537>/Vector'
         *  Lookup_n-D: '<S540>/Vector'
         *  Merge: '<S522>/Merge4'
         */
        if (rtb_Merge3 > 0.0F)
        {
            /* Outputs for IfAction SubSystem: '<S522>/Pass1' incorporates:
             *  ActionPort: '<S531>/Action Port'
             */
            /* Outputs for Atomic SubSystem: '<S522>/Not_Reverse' */
            MTIR_ac_Pass(look1_iflf_binlcapw(rtb_B_Spd,
                          (Rte_Prm_KxHSCR_M_Motor_Torque_Min_MtrB_KxHSCR_M_Motor_Torque_Min_MtrB
                           ()),
                          (Rte_Prm_KtHSCR_M_Motor_Torque_Min_MtrB_KtHSCR_M_Motor_Torque_Min_MtrB
                           ()), 21U), look1_iflf_binlcapw(rtb_B_Spd,
                          (Rte_Prm_KxHSCR_M_Motor_Torque_Max_MtrB_KxHSCR_M_Motor_Torque_Max_MtrB
                           ()),
                          (Rte_Prm_KtHSCR_M_Motor_Torque_Max_MtrB_KtHSCR_M_Motor_Torque_Max_MtrB
                           ()), 21U), &rtb_ArrayAssignment4[s499_iter],
                         &rtb_Merge3);

            /* End of Outputs for SubSystem: '<S522>/Not_Reverse' */
            /* End of Outputs for SubSystem: '<S522>/Pass1' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S522>/Switch1' incorporates:
             *  ActionPort: '<S534>/Action Port'
             */
            /* Outputs for Atomic SubSystem: '<S522>/Not_Reverse' */
            MTIR_ac_Switch(look1_iflf_binlcapw(rtb_B_Spd,
                            (Rte_Prm_KxHSCR_M_Motor_Torque_Min_MtrB_KxHSCR_M_Motor_Torque_Min_MtrB
                             ()),
                            (Rte_Prm_KtHSCR_M_Motor_Torque_Min_MtrB_KtHSCR_M_Motor_Torque_Min_MtrB
                             ()), 21U), look1_iflf_binlcapw(rtb_B_Spd,
                            (Rte_Prm_KxHSCR_M_Motor_Torque_Max_MtrB_KxHSCR_M_Motor_Torque_Max_MtrB
                             ()),
                            (Rte_Prm_KtHSCR_M_Motor_Torque_Max_MtrB_KtHSCR_M_Motor_Torque_Max_MtrB
                             ()), 21U), &rtb_ArrayAssignment4[s499_iter],
                           &rtb_Merge3);

            /* End of Outputs for SubSystem: '<S522>/Not_Reverse' */
            /* End of Outputs for SubSystem: '<S522>/Switch1' */
        }

        /* End of If: '<S522>/If2' */

        /* Assignment: '<S521>/Array Assignment2' incorporates:
         *  Merge: '<S522>/Merge4'
         */
        rtb_ArrayAssignment2[s499_iter] = rtb_ArrayAssignment4[s499_iter];

        /* Assignment: '<S521>/Array Assignment3' */
        rtb_ArrayAssignment3[s499_iter] = rtb_Merge3;

        /* If: '<S522>/If3' incorporates:
         *  Abs: '<S522>/C_Spd'
         *  Lookup_n-D: '<S538>/Vector'
         *  Lookup_n-D: '<S541>/Vector'
         *  Merge: '<S522>/Merge4'
         */
        if (rtb_Merge5 > 0.0F)
        {
            /* Outputs for IfAction SubSystem: '<S522>/Pass2' incorporates:
             *  ActionPort: '<S532>/Action Port'
             */
            /* Outputs for Atomic SubSystem: '<S522>/Not_Reverse' */
            MTIR_ac_Pass(look1_iflf_binlcapw(rtb_C_Spd,
                          (Rte_Prm_KxHSCR_M_Motor_Torque_Min_MtrC_KxHSCR_M_Motor_Torque_Min_MtrC
                           ()),
                          (Rte_Prm_KtHSCR_M_Motor_Torque_Min_MtrC_KtHSCR_M_Motor_Torque_Min_MtrC
                           ()), 21U), look1_iflf_binlcapw(rtb_C_Spd,
                          (Rte_Prm_KxHSCR_M_Motor_Torque_Max_MtrC_KxHSCR_M_Motor_Torque_Max_MtrC
                           ()),
                          (Rte_Prm_KtHSCR_M_Motor_Torque_Max_MtrC_KtHSCR_M_Motor_Torque_Max_MtrC
                           ()), 21U), &rtb_ArrayAssignment4[s499_iter],
                         &rtb_Merge5);

            /* End of Outputs for SubSystem: '<S522>/Not_Reverse' */
            /* End of Outputs for SubSystem: '<S522>/Pass2' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S522>/Switch2' incorporates:
             *  ActionPort: '<S535>/Action Port'
             */
            /* Outputs for Atomic SubSystem: '<S522>/Not_Reverse' */
            MTIR_ac_Switch(look1_iflf_binlcapw(rtb_C_Spd,
                            (Rte_Prm_KxHSCR_M_Motor_Torque_Min_MtrC_KxHSCR_M_Motor_Torque_Min_MtrC
                             ()),
                            (Rte_Prm_KtHSCR_M_Motor_Torque_Min_MtrC_KtHSCR_M_Motor_Torque_Min_MtrC
                             ()), 21U), look1_iflf_binlcapw(rtb_C_Spd,
                            (Rte_Prm_KxHSCR_M_Motor_Torque_Max_MtrC_KxHSCR_M_Motor_Torque_Max_MtrC
                             ()),
                            (Rte_Prm_KtHSCR_M_Motor_Torque_Max_MtrC_KtHSCR_M_Motor_Torque_Max_MtrC
                             ()), 21U), &rtb_ArrayAssignment4[s499_iter],
                           &rtb_Merge5);

            /* End of Outputs for SubSystem: '<S522>/Not_Reverse' */
            /* End of Outputs for SubSystem: '<S522>/Switch2' */
        }

        /* End of If: '<S522>/If3' */

        /* Assignment: '<S521>/Array Assignment5' */
        rtb_ArrayAssignment5[s499_iter] = rtb_Merge5;
    }

    /* End of Outputs for SubSystem: '<S496>/For Iterator Subsystem' */

    /* SignalConversion generated from: '<S496>/b_MtrAMaxCpbltyRcvd_IV' */
    MTIR_ac_B.OutportBufferForb_MtrAMaxCpblty = false;

    /* SignalConversion generated from: '<S496>/Cnt_MtrACpbltyIndx_IV' */
    MTIR_ac_B.OutportBufferForCnt_MtrACpbltyI = 0U;

    /* SignalConversion generated from: '<S496>/b_MtrAMinCpbltyRcvd_IV' */
    MTIR_ac_B.OutportBufferForb_MtrAMinCpblty = false;

    /* SignalConversion generated from: '<S496>/b_MtrACpbltySpdRcvd_IV' */
    MTIR_ac_B.OutportBufferForb_MtrACpbltySpd = false;

    /* SignalConversion generated from: '<S496>/k_MtrADrtngFctr_IV' */
    MTIR_ac_B.OutportBufferFork_MtrADrtngFctr = 1.0F;

    /* SignalConversion generated from: '<S496>/b_MtrADrtngFctrRcvd_IV' */
    MTIR_ac_B.OutportBufferForb_MtrADrtngFctr = false;

    /* SignalConversion generated from: '<S496>/b_MtrBMaxCpbltyRcvd_IV' */
    MTIR_ac_B.OutportBufferForb_MtrBMaxCpblty = false;

    /* SignalConversion generated from: '<S496>/Cnt_MtrBCpbltyIndx_IV' */
    MTIR_ac_B.OutportBufferForCnt_MtrBCpbltyI = 0U;

    /* SignalConversion generated from: '<S496>/b_MtrBMinCpbltyRcvd_IV' */
    MTIR_ac_B.OutportBufferForb_MtrBMinCpblty = false;

    /* SignalConversion generated from: '<S496>/b_MtrBCpbltySpdRcvd_IV' */
    MTIR_ac_B.OutportBufferForb_MtrBCpbltySpd = false;

    /* SignalConversion generated from: '<S496>/k_MtrBDrtngFctr_IV' */
    MTIR_ac_B.OutportBufferFork_MtrBDrtngFctr = 1.0F;

    /* SignalConversion generated from: '<S496>/b_MtrBDrtngFctrRcvd_IV' */
    MTIR_ac_B.OutportBufferForb_MtrBDrtngFctr = false;
    for (i = 0; i < 16; i++)
    {
        /* Gain: '<S506>/Gain' */
        Gain[i] = rtb_ArrayAssignment1[i];

        /* Gain: '<S509>/Gain' */
        Gain_c[i] = rtb_ArrayAssignment5[i];

        /* Gain: '<S511>/Gain' */
        Gain_m[i] = rtb_ArrayAssignment4[i];

        /* Gain: '<S513>/Gain' */
        Gain_p[i] = rtb_ArrayAssignment3[i];

        /* Gain: '<S515>/Gain' */
        Gain_ma[i] = rtb_ArrayAssignment[i];

        /* Gain: '<S517>/Gain' */
        Gain_hy[i] = rtb_ArrayAssignment2[i];

        /* Product: '<S496>/Product' incorporates:
         *  Constant: '<S500>/Calib'
         *  Constant: '<S503>/Calib'
         */
        Product[i] = KaMTIR_n_MtrACpbltySpd_Dflt[(i)] * KeMTIR_U_MtrA_DC_Volt;

        /* Product: '<S496>/Product1' incorporates:
         *  Constant: '<S501>/Calib'
         *  Constant: '<S504>/Calib'
         */
        Product1[i] = KeMTIR_U_MtrB_DC_Volt * KaMTIR_n_MtrBCpbltySpd_Dflt[(i)];

        /* Product: '<S496>/Product2' incorporates:
         *  Constant: '<S502>/Calib'
         *  Constant: '<S505>/Calib'
         */
        Product2[i] = KeMTIR_U_MtrC_DC_Volt * KaMTIR_n_MtrCCpbltySpd_Dflt[(i)];
    }

    /* SignalConversion generated from: '<S496>/b_MtrCMaxCpbltyRcvd_IV' */
    MTIR_ac_B.OutportBufferForb_MtrCMaxCpblty = false;

    /* SignalConversion generated from: '<S496>/Cnt_MtrCCpbltyIndx_IV' */
    MTIR_ac_B.OutportBufferForCnt_MtrCCpbltyI = 0U;

    /* SignalConversion generated from: '<S496>/b_MtrCMinCpbltyRcvd_IV' */
    MTIR_ac_B.OutportBufferForb_MtrCMinCpblty = false;

    /* SignalConversion generated from: '<S496>/b_MtrCCpbltySpdRcvd_IV' */
    MTIR_ac_B.OutportBufferForb_MtrCCpbltySpd = false;

    /* SignalConversion generated from: '<S496>/k_MtrCDrtngFctr_IV' */
    MTIR_ac_B.OutportBufferFork_MtrCDrtngFctr = 1.0F;

    /* SignalConversion generated from: '<S496>/b_MtrCDrtngFctrRcvd_IV' */
    MTIR_ac_B.OutportBufferForb_MtrCDrtngFctr = false;

    /* S-Function (fcgen): '<S30>/FcnCallGen' incorporates:
     *  SubSystem: '<S30>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S498>/VeMTIR_M_MtrA_TorqAchieved_Out_Init' */
    MTIR_ac_B.OutportBufferForVeMTIR_M_MtrA_T = 0.0F;

    /* SignalConversion generated from: '<S498>/VeMTIR_b_MtrA_TorqAchievedFA_Out_Init' */
    MTIR_ac_B.OutportBufferForVeMTIR_b_MtrA_T = false;

    /* SignalConversion generated from: '<S498>/VeMTIR_M_MtrA_MaxTorqRaw_Out_Init' */
    MTIR_ac_B.OutportBufferForVeMTIR_M_MtrA_M = 0.0F;

    /* SignalConversion generated from: '<S498>/VeMTIR_M_MtrA_MinTorqRaw_Out_Init' */
    MTIR_ac_B.OutportBufferForVeMTIR_M_MtrA_h = 0.0F;

    /* SignalConversion generated from: '<S498>/VeMTIR_M_MtrA_TorqAchieved_AEMD_Out_Init' */
    MTIR_ac_B.OutportBufferForVeMTIR_M_MtrA_m = 0.0F;

    /* SignalConversion generated from: '<S498>/VeMTIR_M_MtrB_TorqAchieved_Out_Init' */
    MTIR_ac_B.OutportBufferForVeMTIR_M_MtrB_T = 0.0F;

    /* SignalConversion generated from: '<S498>/VeMTIR_b_MtrB_TorqAchievedFA_Out_Init' */
    MTIR_ac_B.OutportBufferForVeMTIR_b_MtrB_T = false;

    /* SignalConversion generated from: '<S498>/VeMTIR_M_MtrB_MaxTorqRaw_Out_Init' */
    MTIR_ac_B.OutportBufferForVeMTIR_M_MtrB_M = 0.0F;

    /* SignalConversion generated from: '<S498>/VeMTIR_M_MtrB_MinTorqRaw_Out_Init' */
    MTIR_ac_B.OutportBufferForVeMTIR_M_MtrB_h = 0.0F;

    /* SignalConversion generated from: '<S498>/VeMTIR_M_MtrB_TorqAchieved_AEMD_Out_Init' */
    MTIR_ac_B.OutportBufferForVeMTIR_M_MtrB_c = 0.0F;

    /* SignalConversion generated from: '<S498>/VeMTIR_M_P2SpdCntrlMaxTrqLmt_Out_Init' */
    MTIR_ac_B.OutportBufferForVeMTIR_M_P2SpdC = 0.0F;

    /* SignalConversion generated from: '<S498>/VeMTIR_M_P2SpdCntrlMinTrqLmt_Out_Init' */
    MTIR_ac_B.OutportBufferForVeMTIR_M_P2Sp_e = 0.0F;

    /* SignalConversion generated from: '<S498>/VeMTIR_M_MtrB_TorqAchievedCnvrtd_Out_Init' */
    MTIR_ac_B.OutportBufferForVeMTIR_M_MtrB_i = 0.0F;

    /* SignalConversion generated from: '<S498>/VeMTIR_b_InrtaCompAllwd_Out_Init' */
    MTIR_ac_B.OutportBufferForVeMTIR_b_InrtaC = false;

    /* SignalConversion generated from: '<S498>/VeMTIR_k_MtrADrtngFctr_Out_Init' */
    MTIR_ac_B.OutportBufferForVeMTIR_k_MtrADr = 0.0F;

    /* SignalConversion generated from: '<S498>/VeMTIR_k_MtrBDrtngFctr_Out_Init' */
    MTIR_ac_B.OutportBufferForVeMTIR_k_MtrBDr = 0.0F;

    /* SignalConversion generated from: '<S498>/VeMTIR_M_MtrC_TorqAchieved_Out_Init' */
    MTIR_ac_B.OutportBufferForVeMTIR_M_MtrC_T = 0.0F;

    /* SignalConversion generated from: '<S498>/VeMTIR_b_MtrC_TorqAchievedFA_Out_Init' */
    MTIR_ac_B.OutportBufferForVeMTIR_b_MtrC_T = false;

    /* SignalConversion generated from: '<S498>/VeMTIR_M_MtrC_MaxTorqRaw_Out_Init' */
    MTIR_ac_B.OutportBufferForVeMTIR_M_MtrC_M = 0.0F;

    /* SignalConversion generated from: '<S498>/VeMTIR_M_MtrC_MinTorqRaw_Out_Init' */
    MTIR_ac_B.OutportBufferForVeMTIR_M_MtrC_o = 0.0F;

    /* SignalConversion generated from: '<S498>/VeMTIR_M_MtrC_TorqAchieved_AEMD_Out_Init' */
    MTIR_ac_B.OutportBufferForVeMTIR_M_MtrC_n = 0.0F;

    /* SignalConversion generated from: '<S498>/VeMTIR_k_MtrCDrtngFctr_Out_Init' */
    MTIR_ac_B.OutportBufferForVeMTIR_k_MtrCDr = 0.0F;

    /* End of Outputs for S-Function (fcgen): '<S30>/FcnCallGen' */

    /* Outport: '<Root>/VaMTIR_n_MtrACpbltySpd' incorporates:
     *  SignalConversion generated from: '<S30>/VaMTII_M_MtrACpbltySpdInit'
     */
    (void)Rte_Write_VaMTIR_n_MtrACpbltySpd_Value(Product);

    /* Outport: '<Root>/VaMTIR_M_MtrAMaxCpblty' incorporates:
     *  SignalConversion generated from: '<S30>/VaMTII_M_MtrAMaxCpbltyInit'
     */
    (void)Rte_Write_VaMTIR_M_MtrAMaxCpblty_Value(Gain);

    /* Outport: '<Root>/VaMTIR_M_MtrAMinCpblty' incorporates:
     *  SignalConversion generated from: '<S30>/VaMTII_M_MtrAMinCpbltyInit'
     */
    (void)Rte_Write_VaMTIR_M_MtrAMinCpblty_Value(Gain_ma);

    /* Outport: '<Root>/VaMTIR_n_MtrBCpbltySpd' incorporates:
     *  SignalConversion generated from: '<S30>/VaMTII_M_MtrBCpbltySpdInit'
     */
    (void)Rte_Write_VaMTIR_n_MtrBCpbltySpd_Value(Product1);

    /* Outport: '<Root>/VaMTIR_M_MtrBMaxCpblty' incorporates:
     *  SignalConversion generated from: '<S30>/VaMTII_M_MtrBMaxCpbltyInit'
     */
    (void)Rte_Write_VaMTIR_M_MtrBMaxCpblty_Value(Gain_p);

    /* Outport: '<Root>/VaMTIR_M_MtrBMinCpblty' incorporates:
     *  SignalConversion generated from: '<S30>/VaMTII_M_MtrBMinCpbltyInit'
     */
    (void)Rte_Write_VaMTIR_M_MtrBMinCpblty_Value(Gain_hy);

    /* Outport: '<Root>/VaMTIR_n_MtrCCpbltySpd' incorporates:
     *  SignalConversion generated from: '<S30>/VaMTII_M_MtrCCpbltySpdInit'
     */
    (void)Rte_Write_VaMTIR_n_MtrCCpbltySpd_Value(Product2);

    /* Outport: '<Root>/VaMTIR_M_MtrCMaxCpblty' incorporates:
     *  SignalConversion generated from: '<S30>/VaMTII_M_MtrCMaxCpbltyInit'
     */
    (void)Rte_Write_VaMTIR_M_MtrCMaxCpblty_Value(Gain_c);

    /* Outport: '<Root>/VaMTIR_M_MtrCMinCpblty' incorporates:
     *  SignalConversion generated from: '<S30>/VaMTII_M_MtrCMinCpbltyInit'
     */
    (void)Rte_Write_VaMTIR_M_MtrCMinCpblty_Value(Gain_m);

    /* Outport: '<Root>/VeMTIR_M_MtrA_MaxTorqRaw' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_M_MtrA_MaxTorqRaw_Out_Init'
     */
    (void)Rte_Write_VeMTIR_M_MtrA_MaxTorqRaw_Value
        (MTIR_ac_B.OutportBufferForVeMTIR_M_MtrA_M);

    /* Outport: '<Root>/VeMTIR_M_MtrA_MinTorqRaw' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_M_MtrA_MinTorqRaw_Out_Init'
     */
    (void)Rte_Write_VeMTIR_M_MtrA_MinTorqRaw_Value
        (MTIR_ac_B.OutportBufferForVeMTIR_M_MtrA_h);

    /* Outport: '<Root>/VeMTIR_M_MtrA_TorqAchieved_AEMD' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_M_MtrA_TorqAchieved_AEMD_Out_Init'
     */
    (void)Rte_Write_VeMTIR_M_MtrA_TorqAchieved_AEMD_Value
        (MTIR_ac_B.OutportBufferForVeMTIR_M_MtrA_m);

    /* Outport: '<Root>/VeMTIR_M_MtrA_TorqAchieved' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_M_MtrA_TorqAchieved_Out_Init'
     */
    (void)Rte_Write_VeMTIR_M_MtrA_TorqAchieved_Value
        (MTIR_ac_B.OutportBufferForVeMTIR_M_MtrA_T);

    /* Outport: '<Root>/VeMTIR_M_MtrBMaxTrqLmt_TCM' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_M_MtrBMaxTrqLmt_TCM'
     */
    (void)Rte_Write_VeMTIR_M_MtrBMaxTrqLmt_TCM_Value
        (MTIR_ac_B.OutportBufferForVeMTIR_M_MtrBMa);

    /* Outport: '<Root>/VeMTIR_M_MtrBMaxTrqLmt_TCMFA' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_M_MtrBMaxTrqLmt_TCMFA'
     */
    (void)Rte_Write_VeMTIR_M_MtrBMaxTrqLmt_TCMFA_Value
        (MTIR_ac_B.OutportBufferForVeMTIR_M_MtrB_e);

    /* Outport: '<Root>/VeMTIR_M_MtrBMinTrqLmt_TCM' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_M_MtrBMinTrqLmt_TCM'
     */
    (void)Rte_Write_VeMTIR_M_MtrBMinTrqLmt_TCM_Value
        (MTIR_ac_B.OutportBufferForVeMTIR_M_MtrBMi);

    /* Outport: '<Root>/VeMTIR_M_MtrBMinTrqLmt_TCMFA' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_M_MtrBMinTrqLmt_TCMFA'
     */
    (void)Rte_Write_VeMTIR_M_MtrBMinTrqLmt_TCMFA_Value
        (MTIR_ac_B.OutportBufferForVeMTIR_M_Mtr_je);

    /* Outport: '<Root>/VeMTIR_M_MtrB_MaxTorqRaw' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_M_MtrB_MaxTorqRaw_Out_Init'
     */
    (void)Rte_Write_VeMTIR_M_MtrB_MaxTorqRaw_Value
        (MTIR_ac_B.OutportBufferForVeMTIR_M_MtrB_M);

    /* Outport: '<Root>/VeMTIR_M_MtrB_MinTorqRaw' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_M_MtrB_MinTorqRaw_Out_Init'
     */
    (void)Rte_Write_VeMTIR_M_MtrB_MinTorqRaw_Value
        (MTIR_ac_B.OutportBufferForVeMTIR_M_MtrB_h);

    /* Outport: '<Root>/VeMTIR_M_MtrB_TorqAchievedCnvrtd' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_M_MtrB_TorqAchievedCnvrtd_Out_Init'
     */
    (void)Rte_Write_VeMTIR_M_MtrB_TorqAchievedCnvrtd_Value
        (MTIR_ac_B.OutportBufferForVeMTIR_M_MtrB_i);

    /* Outport: '<Root>/VeMTIR_M_MtrB_TorqAchieved_AEMD' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_M_MtrB_TorqAchieved_AEMD_Out_Init'
     */
    (void)Rte_Write_VeMTIR_M_MtrB_TorqAchieved_AEMD_Value
        (MTIR_ac_B.OutportBufferForVeMTIR_M_MtrB_c);

    /* Outport: '<Root>/VeMTIR_M_MtrB_TorqAchieved' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_M_MtrB_TorqAchieved_Out_Init'
     */
    (void)Rte_Write_VeMTIR_M_MtrB_TorqAchieved_Value
        (MTIR_ac_B.OutportBufferForVeMTIR_M_MtrB_T);

    /* Outport: '<Root>/VeMTIR_M_MtrC_MaxTorqRaw' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_M_MtrC_MaxTorqRaw_Out_Init'
     */
    (void)Rte_Write_VeMTIR_M_MtrC_MaxTorqRaw_Value
        (MTIR_ac_B.OutportBufferForVeMTIR_M_MtrC_M);

    /* Outport: '<Root>/VeMTIR_M_MtrC_MinTorqRaw' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_M_MtrC_MinTorqRaw_Out_Init'
     */
    (void)Rte_Write_VeMTIR_M_MtrC_MinTorqRaw_Value
        (MTIR_ac_B.OutportBufferForVeMTIR_M_MtrC_o);

    /* Outport: '<Root>/VeMTIR_M_MtrC_TorqAchieved_AEMD' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_M_MtrC_TorqAchieved_AEMD_Out_Init'
     */
    (void)Rte_Write_VeMTIR_M_MtrC_TorqAchieved_AEMD_Value
        (MTIR_ac_B.OutportBufferForVeMTIR_M_MtrC_n);

    /* Outport: '<Root>/VeMTIR_M_MtrC_TorqAchieved' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_M_MtrC_TorqAchieved_Out_Init'
     */
    (void)Rte_Write_VeMTIR_M_MtrC_TorqAchieved_Value
        (MTIR_ac_B.OutportBufferForVeMTIR_M_MtrC_T);

    /* Outport: '<Root>/VeMTIR_M_P2SpdCntrlMaxTrqLmt' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_M_P2SpdCntrlMaxTrqLmt_Out_Init'
     */
    (void)Rte_Write_VeMTIR_M_P2SpdCntrlMaxTrqLmt_Value
        (MTIR_ac_B.OutportBufferForVeMTIR_M_P2SpdC);

    /* Outport: '<Root>/VeMTIR_M_P2SpdCntrlMinTrqLmt' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_M_P2SpdCntrlMinTrqLmt_Out_Init'
     */
    (void)Rte_Write_VeMTIR_M_P2SpdCntrlMinTrqLmt_Value
        (MTIR_ac_B.OutportBufferForVeMTIR_M_P2Sp_e);

    /* Outport: '<Root>/VeMTIR_b_InrtaCompAllwd' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_b_InrtaCompAllwd_Out_Init'
     */
    (void)Rte_Write_VeMTIR_b_InrtaCompAllwd_Value
        (MTIR_ac_B.OutportBufferForVeMTIR_b_InrtaC);

    /* Outport: '<Root>/VeMTIR_b_MtrA_TorqAchievedFA' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_b_MtrA_TorqAchievedFA_Out_Init'
     */
    (void)Rte_Write_VeMTIR_b_MtrA_TorqAchievedFA_Value
        (MTIR_ac_B.OutportBufferForVeMTIR_b_MtrA_T);

    /* Outport: '<Root>/VeMTIR_b_MtrB_TorqAchievedFA' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_b_MtrB_TorqAchievedFA_Out_Init'
     */
    (void)Rte_Write_VeMTIR_b_MtrB_TorqAchievedFA_Value
        (MTIR_ac_B.OutportBufferForVeMTIR_b_MtrB_T);

    /* Outport: '<Root>/VeMTIR_b_MtrC_TorqAchievedFA' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_b_MtrC_TorqAchievedFA_Out_Init'
     */
    (void)Rte_Write_VeMTIR_b_MtrC_TorqAchievedFA_Value
        (MTIR_ac_B.OutportBufferForVeMTIR_b_MtrC_T);

    /* Outport: '<Root>/VeMTIR_k_MtrADrtngFctr' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_k_MtrADrtngFctr_Out_Init'
     */
    (void)Rte_Write_VeMTIR_k_MtrADrtngFctr_Value
        (MTIR_ac_B.OutportBufferForVeMTIR_k_MtrADr);

    /* Outport: '<Root>/VeMTIR_k_MtrBDrtngFctr' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_k_MtrBDrtngFctr_Out_Init'
     */
    (void)Rte_Write_VeMTIR_k_MtrBDrtngFctr_Value
        (MTIR_ac_B.OutportBufferForVeMTIR_k_MtrBDr);

    /* Outport: '<Root>/VeMTIR_k_MtrCDrtngFctr' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_k_MtrCDrtngFctr_Out_Init'
     */
    (void)Rte_Write_VeMTIR_k_MtrCDrtngFctr_Value
        (MTIR_ac_B.OutportBufferForVeMTIR_k_MtrCDr);

    /* Merge: '<Root>/Merge_7' incorporates:
     *  SignalConversion generated from: '<S30>/VaMTIR_M_MtrAMaxCpbltyTrq_Poke_Init'
     */
    Rte_IrvWrite_MTIR_PwrOn_VaMTIR_M_MtrAMaxCpbltyTrq_Poke_Init_IRV
        (rtb_ArrayAssignment1);

    /* Merge: '<Root>/Merge_9' incorporates:
     *  SignalConversion generated from: '<S30>/VaMTIR_M_MtrAMinCpbltyTrq_Poke_Init'
     */
    Rte_IrvWrite_MTIR_PwrOn_VaMTIR_M_MtrAMinCpbltyTrq_Poke_Init_IRV
        (rtb_ArrayAssignment);

    /* Merge: '<Root>/Merge_16' incorporates:
     *  SignalConversion generated from: '<S30>/VaMTIR_M_MtrBMaxCpbltyTrq_Poke_Init'
     */
    Rte_IrvWrite_MTIR_PwrOn_VaMTIR_M_MtrBMaxCpbltyTrq_Poke_Init_IRV
        (rtb_ArrayAssignment3);

    /* Merge: '<Root>/Merge_18' incorporates:
     *  SignalConversion generated from: '<S30>/VaMTIR_M_MtrBMinCpbltyTrq_Poke_Init'
     */
    Rte_IrvWrite_MTIR_PwrOn_VaMTIR_M_MtrBMinCpbltyTrq_Poke_Init_IRV
        (rtb_ArrayAssignment2);

    /* Merge: '<Root>/Merge_25' incorporates:
     *  SignalConversion generated from: '<S30>/VaMTIR_M_MtrCMaxCpbltyTrq_Poke_Init'
     */
    Rte_IrvWrite_MTIR_PwrOn_VaMTIR_M_MtrCMaxCpbltyTrq_Poke_Init_IRV
        (rtb_ArrayAssignment5);

    /* Merge: '<Root>/Merge_27' incorporates:
     *  SignalConversion generated from: '<S30>/VaMTIR_M_MtrCMinCpbltyTrq_Poke_Init'
     */
    Rte_IrvWrite_MTIR_PwrOn_VaMTIR_M_MtrCMinCpbltyTrq_Poke_Init_IRV
        (rtb_ArrayAssignment4);

    /* S-Function (fcgen): '<S30>/FcnCallGen' incorporates:
     *  SubSystem: '<S30>/MTII_MtrCpbltyTrqInit'
     */
    /* Gain: '<S519>/Gain' incorporates:
     *  Constant: '<S500>/Calib'
     */
    memcpy(&rtb_ArrayAssignment[0], ((const float32 *)
            &(KaMTIR_n_MtrACpbltySpd_Dflt[0])), (sizeof(float32)) << 4ULL);

    /* End of Outputs for S-Function (fcgen): '<S30>/FcnCallGen' */

    /* Merge: '<Root>/Merge_2' incorporates:
     *  SignalConversion generated from: '<S30>/VaMTIR_n_MtrACpbltySpd_Poke_Init'
     */
    Rte_IrvWrite_MTIR_PwrOn_VaMTIR_n_MtrACpbltySpd_Poke_Init_IRV
        (rtb_ArrayAssignment);

    /* S-Function (fcgen): '<S30>/FcnCallGen' incorporates:
     *  SubSystem: '<S30>/MTII_MtrCpbltyTrqInit'
     */
    /* Gain: '<S520>/Gain' incorporates:
     *  Constant: '<S501>/Calib'
     */
    memcpy(&rtb_ArrayAssignment[0], ((const float32 *)
            &(KaMTIR_n_MtrBCpbltySpd_Dflt[0])), (sizeof(float32)) << 4ULL);

    /* End of Outputs for S-Function (fcgen): '<S30>/FcnCallGen' */

    /* Merge: '<Root>/Merge_11' incorporates:
     *  SignalConversion generated from: '<S30>/VaMTIR_n_MtrBCpbltySpd_Poke_Init'
     */
    Rte_IrvWrite_MTIR_PwrOn_VaMTIR_n_MtrBCpbltySpd_Poke_Init_IRV
        (rtb_ArrayAssignment);

    /* S-Function (fcgen): '<S30>/FcnCallGen' incorporates:
     *  SubSystem: '<S30>/MTII_MtrCpbltyTrqInit'
     */
    /* Gain: '<S508>/Gain' incorporates:
     *  Constant: '<S502>/Calib'
     */
    memcpy(&rtb_ArrayAssignment[0], ((const float32 *)
            &(KaMTIR_n_MtrCCpbltySpd_Dflt[0])), (sizeof(float32)) << 4ULL);

    /* End of Outputs for S-Function (fcgen): '<S30>/FcnCallGen' */

    /* Merge: '<Root>/Merge_19' incorporates:
     *  SignalConversion generated from: '<S30>/VaMTIR_n_MtrCCpbltySpd_Poke_Init'
     */
    Rte_IrvWrite_MTIR_PwrOn_VaMTIR_n_MtrCCpbltySpd_Poke_Init_IRV
        (rtb_ArrayAssignment);

    /* Merge: '<Root>/Merge_5' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_Cnt_MtrAMaxCpbltyIndx_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_Cnt_MtrAMaxCpbltyIndx_Init_IRV
        (MTIR_ac_B.OutportBufferForCnt_MtrACpbltyI);

    /* Merge: '<Root>/Merge_14' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_Cnt_MtrBMaxCpbltyIndx_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_Cnt_MtrBMaxCpbltyIndx_Init_IRV
        (MTIR_ac_B.OutportBufferForCnt_MtrBCpbltyI);

    /* Merge: '<Root>/Merge_23' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_Cnt_MtrCMaxCpbltyIndx_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_Cnt_MtrCMaxCpbltyIndx_Init_IRV
        (MTIR_ac_B.OutportBufferForCnt_MtrCCpbltyI);

    /* Merge: '<Root>/Merge_34' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_M_MtrA_MaxTorq_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_M_MtrA_MaxTorq_write_IRV
        (MTIR_ac_B.OutportBufferForVeMTIR_M_Mtr_m5);

    /* Merge: '<Root>/Merge_36' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_M_MtrA_MinTorq_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_M_MtrA_MinTorq_write_IRV
        (MTIR_ac_B.OutportBufferForVeMTIR_M_MtrA_a);

    /* Merge: '<Root>/Merge_39' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_M_MtrA_TorqAchieved_AEMD_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_M_MtrA_TorqAchieved_AEMD_write_IRV
        (MTIR_ac_B.OutportBufferForVeMTIR_M_Mtr_mx);

    /* Merge: '<Root>/Merge_30' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_M_MtrA_TorqAchieved_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_M_MtrA_TorqAchieved_write_IRV
        (MTIR_ac_B.OutportBufferForVeMTIR_M_MtrA_p);

    /* Merge: '<Root>/Merge_15' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_M_MtrBCapabilityMaxSgnl_Rcvd_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_b_MtrBMaxCpbltyTrqRcvd_write_IRV
        (MTIR_ac_B.OutportBufferForb_MtrBMaxCpblty);

    /* Merge: '<Root>/Merge_17' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_M_MtrBCapabilityMinSgnl_Rcvd_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_b_MtrBMinCpbltyRcvd_write_IRV
        (MTIR_ac_B.OutportBufferForb_MtrBMinCpblty);

    /* Merge: '<Root>/Merge_41_Irv' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_M_MtrBMaxTrqLmt_TCM_write_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_M_MtrBMaxTrqLmt_TCM_write_IRV
        (MTIR_ac_B.OutportBufferForVeMTIR_M_MtrBMa);

    /* Merge: '<Root>/Merge_43_Irv' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_M_MtrBMinTrqLmt_TCM_write_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_M_MtrBMinTrqLmt_TCM_write_IRV
        (MTIR_ac_B.OutportBufferForVeMTIR_M_MtrBMi);

    /* Merge: '<Root>/Merge_45' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_M_MtrB_MaxTorq_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_M_MtrB_MaxTorq_write_IRV
        (MTIR_ac_B.OutportBufferForVeMTIR_M_MtrB_k);

    /* Merge: '<Root>/Merge_47' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_M_MtrB_MinTorq_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_M_MtrB_MinTorq_write_IRV
        (MTIR_ac_B.OutportBufferForVeMTIR_M_Mtr_cq);

    /* Merge: '<Root>/Merge_53' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_M_MtrB_TorqAchieved_AEMD_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_M_MtrB_TorqAchieved_AEMD_write_IRV
        (MTIR_ac_B.OutportBufferForVeMTIR_M_MtrB_o);

    /* Merge: '<Root>/Merge_49' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_M_MtrB_TorqAchieved_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_M_MtrB_TorqAchieved_write_IRV
        (MTIR_ac_B.OutportBufferForVeMTIR_M_MtrB_j);

    /* Merge: '<Root>/Merge_24' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_M_MtrCCapabilityMaxSgnl_Rcvd_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_b_MtrCMaxCpbltyTrqRcvd_write_IRV
        (MTIR_ac_B.OutportBufferForb_MtrCMaxCpblty);

    /* Merge: '<Root>/Merge_26' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_M_MtrCCapabilityMinSgnl_Rcvd_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_b_MtrCMinCpbltyRcvd_write_IRV
        (MTIR_ac_B.OutportBufferForb_MtrCMinCpblty);

    /* Merge: '<Root>/Merge_55' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_M_MtrC_MaxTorq_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_M_MtrC_MaxTorq_write_IRV
        (MTIR_ac_B.OutportBufferForVeMTIR_M_MtrC_b);

    /* Merge: '<Root>/Merge_57' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_M_MtrC_MinTorq_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_M_MtrC_MinTorq_write_IRV
        (MTIR_ac_B.OutportBufferForVeMTIR_M_MtrC_f);

    /* Merge: '<Root>/Merge_62' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_M_MtrC_TorqAchieved_AEMD_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_M_MtrC_TorqAchieved_AEMD_write_IRV
        (MTIR_ac_B.OutportBufferForVeMTIR_M_Mtr_bz);

    /* Merge: '<Root>/Merge_59' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_M_MtrC_TorqAchieved_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_M_MtrC_TorqAchieved_write_IRV
        (MTIR_ac_B.OutportBufferForVeMTIR_M_MtrC_e);

    /* Merge: '<Root>/Merge_28' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_M_P2SpdCntrlMaxTrqLmt_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_M_P2SpdCntrlMaxTrqLmt_Init_IRV
        (MTIR_ac_B.OutportBufferForP2SpdCntrlMaxTr);

    /* Merge: '<Root>/Merge_29' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_M_P2SpdCntrlMinTrqLmt_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_M_P2SpdCntrlMinTrqLmt_Init_IRV
        (MTIR_ac_B.OutportBufferForP2SpdCntrlMinTr);

    /* Merge: '<Root>/Merge_8' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_b_MtrACapabilityMinSgnl_Rcvd_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_b_MtrAMinCpbltyTrqRcvd_write_IRV
        (MTIR_ac_B.OutportBufferForb_MtrAMinCpblty);

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_b_MtrACapabilitySpdSgnl_Rcvd_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_b_MtrACpbltySpdRcvd_write_IRV
        (MTIR_ac_B.OutportBufferForb_MtrACpbltySpd);

    /* Merge: '<Root>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_b_MtrADeratingFactorSgnl_Rcvd_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_b_MtrADrtngFctrRcvd_write_IRV
        (MTIR_ac_B.OutportBufferForb_MtrADrtngFctr);

    /* Merge: '<Root>/Merge_6' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_b_MtrAMaxCpbltyTrqRcvd_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_b_MtrAMaxCpbltyTrqRcvd_write_IRV
        (MTIR_ac_B.OutportBufferForb_MtrAMaxCpblty);

    /* Merge: '<Root>/Merge_31' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_b_MtrA_TorqAchievedFA_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_b_MtrA_TorqAchievedFA_write_IRV
        (MTIR_ac_B.OutportBufferForVeMTIR_b_MtrA_g);

    /* Merge: '<Root>/Merge_38' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_b_MtrA_TorqAchieved_AEMDFA_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_b_MtrA_TorqAchieved_AEMDFA_write_IRV
        (MTIR_ac_B.OutportBufferForVeMTIR_M_MtrA_b);

    /* Merge: '<Root>/Merge_50' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_b_MtrB_TorqAchievedFA_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_b_MtrB_TorqAchievedFA_write_IRV
        (MTIR_ac_B.OutportBufferForVeMTIR_M_MtrB_g);

    /* Merge: '<Root>/Merge_52' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_b_MtrB_TorqAchieved_AEMDFA_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_b_MtrB_TorqAchieved_AEMDFA_write_IRV
        (MTIR_ac_B.OutportBufferForVeMTII_M_MtrB_T);

    /* Merge: '<Root>/Merge_20' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_b_MtrCCpbltySpdRcvd_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_b_MtrCCpbltySpdRcvd_write_IRV
        (MTIR_ac_B.OutportBufferForb_MtrCCpbltySpd);

    /* Merge: '<Root>/Merge_60' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_b_MtrC_TorqAchievedFA_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_b_MtrC_TorqAchievedFA_write_IRV
        (MTIR_ac_B.OutportBufferForVeMTIR_M_MtrC_d);

    /* Merge: '<Root>/Merge_61' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_b_MtrC_TorqAchieved_AEMDFA_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_b_MtrC_TorqAchieved_AEMDFA_write_IRV
        (MTIR_ac_B.OutportBufferForVeMTII_M_MtrC_T);

    /* Merge: '<Root>/Merge_4' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_k_MtrADrtngFctr_Poke_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_k_MtrADrtngFctr_Poke_Init_IRV
        (MTIR_ac_B.OutportBufferFork_MtrADrtngFctr);

    /* Merge: '<Root>/Merge_12' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_k_MtrBDeratingFactorSgnl_Rcvd_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_b_MtrBDrtngFctrRcvd_write_IRV
        (MTIR_ac_B.OutportBufferForb_MtrBDrtngFctr);

    /* Merge: '<Root>/Merge_13' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_k_MtrBDrtngFctr_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_k_MtrBDrtngFctr_Init_IRV
        (MTIR_ac_B.OutportBufferFork_MtrBDrtngFctr);

    /* Merge: '<Root>/Merge_21' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_k_MtrCDeratingFactorSgnl_Rcvd_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_b_MtrCDrtngFctrRcvd_write_IRV
        (MTIR_ac_B.OutportBufferForb_MtrCDrtngFctr);

    /* Merge: '<Root>/Merge_22' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_k_MtrCDrtngFctr_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_k_MtrCDrtngFctr_Init_IRV
        (MTIR_ac_B.OutportBufferFork_MtrCDrtngFctr);

    /* Merge: '<Root>/Merge_10' incorporates:
     *  SignalConversion generated from: '<S30>/VeMTIR_n_MtrBCapabilitySpdSgnl_Rcvd_Init'
     * */
    Rte_IrvWrite_MTIR_PwrOn_VeMTIR_b_MtrBCpbltySpdRcvd_write_IRV
        (MTIR_ac_B.OutportBufferForb_MtrBCpbltySpd);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Output function */
FUNC(void, MTIR_CODE) TmotMTIR_M_MtrACapabilityMax(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotMTIR_M_MtrACapabilityMax' */
    /* Chart: '<S59>/TmotMTIR_M_MtrACapabilityMaxChrt' */
    /* Gateway: TmotMTIR_M_MtrACapabilityMax/TmotMTIR_M_MtrACapabilityMaxChrt */
    /* During: TmotMTIR_M_MtrACapabilityMax/TmotMTIR_M_MtrACapabilityMaxChrt */
    /* Entry Internal: TmotMTIR_M_MtrACapabilityMax/TmotMTIR_M_MtrACapabilityMaxChrt */
    /* Transition: '<S588>:2' */
    if (KeMTIR_b_EnblMtrsTrqCpbltyCrv)
    {
        /* Transition: '<S588>:54' */
        /* Transition: '<S588>:58' */
        MTIR_ac_B.LeMTIR_b_MtrAMaxCpbltyTrqRcvd = false;

        /* Transition: '<S588>:59' */
    }
    else
    {
        /* Transition: '<S588>:55' */
    }

    /* End of Chart: '<S59>/TmotMTIR_M_MtrACapabilityMaxChrt' */

    /* Merge: '<Root>/Merge_6' incorporates:
     *  SignalConversion generated from: '<S59>/VeMTIR_b_MtrAMaxCpbltyTrqRcvd_write'
     * */
    Rte_IrvWrite_TmotMTIR_M_MtrACapabilityMax_VeMTIR_b_MtrAMaxCpbltyTrqRcvd_write_IRV
        (MTIR_ac_B.LeMTIR_b_MtrAMaxCpbltyTrqRcvd);

    /* End of Outputs for SubSystem: '<Root>/TmotMTIR_M_MtrACapabilityMax' */
}

/* Output function */
FUNC(void, MTIR_CODE) TmotMTIR_M_MtrACapabilityMin(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotMTIR_M_MtrACapabilityMin' */
    /* Chart: '<S60>/TmotMTIR_M_MtrACapabilityMinChrt' */
    /* Gateway: TmotMTIR_M_MtrACapabilityMin/TmotMTIR_M_MtrACapabilityMinChrt */
    /* During: TmotMTIR_M_MtrACapabilityMin/TmotMTIR_M_MtrACapabilityMinChrt */
    /* Entry Internal: TmotMTIR_M_MtrACapabilityMin/TmotMTIR_M_MtrACapabilityMinChrt */
    /* Transition: '<S589>:2' */
    if (KeMTIR_b_EnblMtrsTrqCpbltyCrv)
    {
        /* Transition: '<S589>:52' */
        /* Transition: '<S589>:58' */
        MTIR_ac_B.LeMTIR_b_MtrACapabilityMinSgnl_ = false;

        /* Transition: '<S589>:59' */
    }
    else
    {
        /* Transition: '<S589>:53' */
    }

    /* End of Chart: '<S60>/TmotMTIR_M_MtrACapabilityMinChrt' */

    /* Merge: '<Root>/Merge_8' incorporates:
     *  SignalConversion generated from: '<S60>/VeMTIR_b_MtrACapabilityMinSgnl_Rcvd_write'
     * */
    Rte_IrvWrite_TmotMTIR_M_MtrACapabilityMin_VeMTIR_b_MtrAMinCpbltyTrqRcvd_write_IRV
        (MTIR_ac_B.LeMTIR_b_MtrACapabilityMinSgnl_);

    /* End of Outputs for SubSystem: '<Root>/TmotMTIR_M_MtrACapabilityMin' */
}

/* Output function */
FUNC(void, MTIR_CODE) TmotMTIR_M_MtrBCapabilityMax(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotMTIR_M_MtrBCapabilityMax' */
    /* Chart: '<S61>/TmotMTIR_M_MtrBCapabilityMaxChrt' */
    /* Gateway: TmotMTIR_M_MtrBCapabilityMax/TmotMTIR_M_MtrBCapabilityMaxChrt */
    /* During: TmotMTIR_M_MtrBCapabilityMax/TmotMTIR_M_MtrBCapabilityMaxChrt */
    /* Entry Internal: TmotMTIR_M_MtrBCapabilityMax/TmotMTIR_M_MtrBCapabilityMaxChrt */
    /* Transition: '<S590>:70' */
    if (KeMTIR_b_EnblMtrsTrqCpbltyCrv)
    {
        /* Transition: '<S590>:72' */
        /* Transition: '<S590>:76' */
        MTIR_ac_B.LeMTIR_M_MtrBCapabilityMaxSgnl_ = false;

        /* Transition: '<S590>:78' */
    }
    else
    {
        /* Transition: '<S590>:73' */
    }

    /* End of Chart: '<S61>/TmotMTIR_M_MtrBCapabilityMaxChrt' */

    /* Merge: '<Root>/Merge_15' incorporates:
     *  SignalConversion generated from: '<S61>/VeMTIR_M_MtrBCapabilityMaxSgnl_Rcvd_write'
     * */
    Rte_IrvWrite_TmotMTIR_M_MtrBCapabilityMax_VeMTIR_b_MtrBMaxCpbltyTrqRcvd_write_IRV
        (MTIR_ac_B.LeMTIR_M_MtrBCapabilityMaxSgnl_);

    /* End of Outputs for SubSystem: '<Root>/TmotMTIR_M_MtrBCapabilityMax' */
}

/* Output function */
FUNC(void, MTIR_CODE) TmotMTIR_M_MtrBCapabilityMin(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotMTIR_M_MtrBCapabilityMin' */
    /* Chart: '<S62>/TmotMTIR_M_MtrBCapabilityMinChrt' */
    /* Gateway: TmotMTIR_M_MtrBCapabilityMin/TmotMTIR_M_MtrBCapabilityMinChrt */
    /* During: TmotMTIR_M_MtrBCapabilityMin/TmotMTIR_M_MtrBCapabilityMinChrt */
    /* Entry Internal: TmotMTIR_M_MtrBCapabilityMin/TmotMTIR_M_MtrBCapabilityMinChrt */
    /* Transition: '<S591>:53' */
    if (KeMTIR_b_EnblMtrsTrqCpbltyCrv)
    {
        /* Transition: '<S591>:55' */
        /* Transition: '<S591>:59' */
        MTIR_ac_B.LeMTIR_M_MtrBCapabilityMinSgnl_ = false;

        /* Transition: '<S591>:61' */
    }
    else
    {
        /* Transition: '<S591>:56' */
    }

    /* End of Chart: '<S62>/TmotMTIR_M_MtrBCapabilityMinChrt' */

    /* Merge: '<Root>/Merge_17' incorporates:
     *  SignalConversion generated from: '<S62>/VeMTIR_M_MtrBCapabilityMinSgnl_Rcvd_write'
     * */
    Rte_IrvWrite_TmotMTIR_M_MtrBCapabilityMin_VeMTIR_b_MtrBMinCpbltyRcvd_write_IRV
        (MTIR_ac_B.LeMTIR_M_MtrBCapabilityMinSgnl_);

    /* End of Outputs for SubSystem: '<Root>/TmotMTIR_M_MtrBCapabilityMin' */
}

/* Output function */
FUNC(void, MTIR_CODE) TmotMTIR_M_MtrCCapabilityMax(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotMTIR_M_MtrCCapabilityMax' */
    /* Chart: '<S63>/TmotMTIR_M_MtrCCapabilityMaxChrt' */
    /* Gateway: TmotMTIR_M_MtrCCapabilityMax/TmotMTIR_M_MtrCCapabilityMaxChrt */
    /* During: TmotMTIR_M_MtrCCapabilityMax/TmotMTIR_M_MtrCCapabilityMaxChrt */
    /* Entry Internal: TmotMTIR_M_MtrCCapabilityMax/TmotMTIR_M_MtrCCapabilityMaxChrt */
    /* Transition: '<S592>:70' */
    if (KeMTIR_b_EnblMtrsTrqCpbltyCrv)
    {
        /* Transition: '<S592>:72' */
        /* Transition: '<S592>:76' */
        MTIR_ac_B.LeMTIR_M_MtrCCapabilityMaxSgnl_ = false;

        /* Transition: '<S592>:78' */
    }
    else
    {
        /* Transition: '<S592>:73' */
    }

    /* End of Chart: '<S63>/TmotMTIR_M_MtrCCapabilityMaxChrt' */

    /* SignalConversion generated from: '<S63>/TmotMTIR_M_MtrCCapabilityMaxChrt' incorporates:
     *  SignalConversion generated from: '<S63>/VeMTIR_M_MtrCCapabilityMaxSgnl_Rcvd_write'
     */
#if Rte_SysCon_Variant_MTIR_1

    /* Merge: '<Root>/Merge_24' */
    Rte_IrvWrite_TmotMTIR_M_MtrCCapabilityMax_VeMTIR_b_MtrCMaxCpbltyTrqRcvd_write_IRV
        (MTIR_ac_B.LeMTIR_M_MtrCCapabilityMaxSgnl_);

#endif

    /* End of SignalConversion generated from: '<S63>/TmotMTIR_M_MtrCCapabilityMaxChrt' */
    /* End of Outputs for SubSystem: '<Root>/TmotMTIR_M_MtrCCapabilityMax' */
}

/* Output function */
FUNC(void, MTIR_CODE) TmotMTIR_M_MtrCCapabilityMin(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotMTIR_M_MtrCCapabilityMin' */
    /* Chart: '<S64>/TmotMTIR_M_MtrCCapabilityMinChrt' */
    /* Gateway: TmotMTIR_M_MtrCCapabilityMin/TmotMTIR_M_MtrCCapabilityMinChrt */
    /* During: TmotMTIR_M_MtrCCapabilityMin/TmotMTIR_M_MtrCCapabilityMinChrt */
    /* Entry Internal: TmotMTIR_M_MtrCCapabilityMin/TmotMTIR_M_MtrCCapabilityMinChrt */
    /* Transition: '<S593>:53' */
    if (KeMTIR_b_EnblMtrsTrqCpbltyCrv)
    {
        /* Transition: '<S593>:55' */
        /* Transition: '<S593>:59' */
        MTIR_ac_B.LeMTIR_M_MtrCCapabilityMinSgnl_ = false;

        /* Transition: '<S593>:61' */
    }
    else
    {
        /* Transition: '<S593>:56' */
    }

    /* End of Chart: '<S64>/TmotMTIR_M_MtrCCapabilityMinChrt' */

    /* SignalConversion generated from: '<S64>/TmotMTIR_M_MtrCCapabilityMinChrt' incorporates:
     *  SignalConversion generated from: '<S64>/VeMTIR_M_MtrCCapabilityMinSgnl_Rcvd_write'
     */
#if Rte_SysCon_Variant_MTIR_1

    /* Merge: '<Root>/Merge_26' */
    Rte_IrvWrite_TmotMTIR_M_MtrCCapabilityMin_VeMTIR_b_MtrCMinCpbltyRcvd_write_IRV
        (MTIR_ac_B.LeMTIR_M_MtrCCapabilityMinSgnl_);

#endif

    /* End of SignalConversion generated from: '<S64>/TmotMTIR_M_MtrCCapabilityMinChrt' */
    /* End of Outputs for SubSystem: '<Root>/TmotMTIR_M_MtrCCapabilityMin' */
}

/* Output function */
FUNC(void, MTIR_CODE) TmotMTIR_b_MtrA_MaxTorq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotMTIR_b_MtrA_MaxTorq' */
    /* Merge: '<Root>/Merge_33' incorporates:
     *  Chart: '<S65>/TmotMTIR_b_MtrA_MaxTorqChrt'
     *  SignalConversion generated from: '<S65>/VeMTIR_b_MtrA_MaxTorqSgnl_Rcvd_write'
     */
    /* Gateway: TmotMTIR_b_MtrA_MaxTorq/TmotMTIR_b_MtrA_MaxTorqChrt */
    /* During: TmotMTIR_b_MtrA_MaxTorq/TmotMTIR_b_MtrA_MaxTorqChrt */
    /* Entry Internal: TmotMTIR_b_MtrA_MaxTorq/TmotMTIR_b_MtrA_MaxTorqChrt */
    /* Transition: '<S594>:2' */
    Rte_IrvWrite_TmotMTIR_b_MtrA_MaxTorq_VeMTIR_b_MtrA_MaxTorqSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotMTIR_b_MtrA_MaxTorq' */
}

/* Output function */
FUNC(void, MTIR_CODE) TmotMTIR_b_MtrA_MinTorq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotMTIR_b_MtrA_MinTorq' */
    /* Merge: '<Root>/Merge_35' incorporates:
     *  Chart: '<S66>/TmotMTIR_b_MtrA_MinTorqChrt'
     *  SignalConversion generated from: '<S66>/VeMTIR_b_MtrA_MinTorqSgnl_Rcvd_write'
     */
    /* Gateway: TmotMTIR_b_MtrA_MinTorq/TmotMTIR_b_MtrA_MinTorqChrt */
    /* During: TmotMTIR_b_MtrA_MinTorq/TmotMTIR_b_MtrA_MinTorqChrt */
    /* Entry Internal: TmotMTIR_b_MtrA_MinTorq/TmotMTIR_b_MtrA_MinTorqChrt */
    /* Transition: '<S595>:2' */
    Rte_IrvWrite_TmotMTIR_b_MtrA_MinTorq_VeMTIR_b_MtrA_MinTorqSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotMTIR_b_MtrA_MinTorq' */
}

/* Output function */
FUNC(void, MTIR_CODE) TmotMTIR_b_MtrA_TorqAchieved(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotMTIR_b_MtrA_TorqAchieved' */
    /* Merge: '<Root>/Merge_32' incorporates:
     *  Chart: '<S67>/TmotMTIR_b_MtrA_TorqAchievedChrt'
     *  SignalConversion generated from: '<S67>/VeMTIR_b_MtrA_TorqAchievedSgnl_Rcvd_write'
     */
    /* Gateway: TmotMTIR_b_MtrA_TorqAchieved/TmotMTIR_b_MtrA_TorqAchievedChrt */
    /* During: TmotMTIR_b_MtrA_TorqAchieved/TmotMTIR_b_MtrA_TorqAchievedChrt */
    /* Entry Internal: TmotMTIR_b_MtrA_TorqAchieved/TmotMTIR_b_MtrA_TorqAchievedChrt */
    /* Transition: '<S596>:2' */
    Rte_IrvWrite_TmotMTIR_b_MtrA_TorqAchieved_VeMTIR_b_MtrA_TorqAchievedSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotMTIR_b_MtrA_TorqAchieved' */
}

/* Output function */
FUNC(void, MTIR_CODE) TmotMTIR_b_MtrA_TorqAchieved_AEMD(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotMTIR_b_MtrA_TorqAchieved_AEMD' */
    /* Merge: '<Root>/Merge_37' incorporates:
     *  Chart: '<S68>/TmotMTIR_b_MtrA_TorqAchieved_AEMDChrt'
     *  SignalConversion generated from: '<S68>/VeMTIR_b_MtrA_TorqAchieved_AEMDSgnl_Rcvd_write'
     */
    /* Gateway: TmotMTIR_b_MtrA_TorqAchieved_AEMD/TmotMTIR_b_MtrA_TorqAchieved_AEMDChrt */
    /* During: TmotMTIR_b_MtrA_TorqAchieved_AEMD/TmotMTIR_b_MtrA_TorqAchieved_AEMDChrt */
    /* Entry Internal: TmotMTIR_b_MtrA_TorqAchieved_AEMD/TmotMTIR_b_MtrA_TorqAchieved_AEMDChrt */
    /* Transition: '<S597>:2' */
    Rte_IrvWrite_TmotMTIR_b_MtrA_TorqAchieved_AEMD_VeMTIR_b_MtrA_TorqAchieved_AEMDSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotMTIR_b_MtrA_TorqAchieved_AEMD' */
}

/* Output function */
FUNC(void, MTIR_CODE) TmotMTIR_b_MtrB_MaxTorq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotMTIR_b_MtrB_MaxTorq' */
    /* Merge: '<Root>/Merge_44' incorporates:
     *  Chart: '<S69>/TmotMTIR_b_MtrB_MaxTorqChrt'
     *  SignalConversion generated from: '<S69>/VeMTIR_b_MtrB_MaxTorqSgnl_Rcvd_write'
     */
    /* Gateway: TmotMTIR_b_MtrB_MaxTorq/TmotMTIR_b_MtrB_MaxTorqChrt */
    /* During: TmotMTIR_b_MtrB_MaxTorq/TmotMTIR_b_MtrB_MaxTorqChrt */
    /* Entry Internal: TmotMTIR_b_MtrB_MaxTorq/TmotMTIR_b_MtrB_MaxTorqChrt */
    /* Transition: '<S598>:2' */
    Rte_IrvWrite_TmotMTIR_b_MtrB_MaxTorq_VeMTIR_b_MtrB_MaxTorqSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotMTIR_b_MtrB_MaxTorq' */
}

/* Output function */
FUNC(void, MTIR_CODE) TmotMTIR_b_MtrB_MinTorq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotMTIR_b_MtrB_MinTorq' */
    /* Merge: '<Root>/Merge_46' incorporates:
     *  Chart: '<S70>/TmotMTIR_b_MtrB_MinTorqChrt'
     *  SignalConversion generated from: '<S70>/VeMTIR_b_MtrB_MinTorqSgnl_Rcvd_write'
     */
    /* Gateway: TmotMTIR_b_MtrB_MinTorq/TmotMTIR_b_MtrB_MinTorqChrt */
    /* During: TmotMTIR_b_MtrB_MinTorq/TmotMTIR_b_MtrB_MinTorqChrt */
    /* Entry Internal: TmotMTIR_b_MtrB_MinTorq/TmotMTIR_b_MtrB_MinTorqChrt */
    /* Transition: '<S599>:2' */
    Rte_IrvWrite_TmotMTIR_b_MtrB_MinTorq_VeMTIR_b_MtrB_MinTorqSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotMTIR_b_MtrB_MinTorq' */
}

/* Output function */
FUNC(void, MTIR_CODE) TmotMTIR_b_MtrB_TorqAchieved(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotMTIR_b_MtrB_TorqAchieved' */
    /* Merge: '<Root>/Merge_48' incorporates:
     *  Chart: '<S71>/TmotMTIR_b_MtrB_TorqAchievedChrt'
     *  SignalConversion generated from: '<S71>/VeMTIR_b_MtrB_TorqAchievedSgnl_Rcvd_write'
     */
    /* Gateway: TmotMTIR_b_MtrB_TorqAchieved/TmotMTIR_b_MtrB_TorqAchievedChrt */
    /* During: TmotMTIR_b_MtrB_TorqAchieved/TmotMTIR_b_MtrB_TorqAchievedChrt */
    /* Entry Internal: TmotMTIR_b_MtrB_TorqAchieved/TmotMTIR_b_MtrB_TorqAchievedChrt */
    /* Transition: '<S600>:2' */
    Rte_IrvWrite_TmotMTIR_b_MtrB_TorqAchieved_VeMTIR_b_MtrB_TorqAchievedSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotMTIR_b_MtrB_TorqAchieved' */
}

/* Output function */
FUNC(void, MTIR_CODE) TmotMTIR_b_MtrB_TorqAchieved_AEMD(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotMTIR_b_MtrB_TorqAchieved_AEMD' */
    /* Merge: '<Root>/Merge_51' incorporates:
     *  Chart: '<S72>/TmotMTIR_b_MtrB_TorqAchieved_AEMDChrt'
     *  SignalConversion generated from: '<S72>/VeMTIR_b_MtrB_TorqAchieved_AEMDSgnl_Rcvd_write'
     */
    /* Gateway: TmotMTIR_b_MtrB_TorqAchieved_AEMD/TmotMTIR_b_MtrB_TorqAchieved_AEMDChrt */
    /* During: TmotMTIR_b_MtrB_TorqAchieved_AEMD/TmotMTIR_b_MtrB_TorqAchieved_AEMDChrt */
    /* Entry Internal: TmotMTIR_b_MtrB_TorqAchieved_AEMD/TmotMTIR_b_MtrB_TorqAchieved_AEMDChrt */
    /* Transition: '<S601>:2' */
    Rte_IrvWrite_TmotMTIR_b_MtrB_TorqAchieved_AEMD_VeMTIR_b_MtrB_TorqAchieved_AEMDSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotMTIR_b_MtrB_TorqAchieved_AEMD' */
}

/* Output function */
FUNC(void, MTIR_CODE) TmotMTIR_b_MtrC_MaxTorq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotMTIR_b_MtrC_MaxTorq' */
    /* SignalConversion generated from: '<S73>/TmotMTIR_b_MtrC_MaxTorqChrt' incorporates:
     *  SignalConversion generated from: '<S73>/VeMTIR_b_MtrC_MaxTorqSgnl_Rcvd_write'
     */
    /* Gateway: TmotMTIR_b_MtrC_MaxTorq/TmotMTIR_b_MtrC_MaxTorqChrt */
    /* During: TmotMTIR_b_MtrC_MaxTorq/TmotMTIR_b_MtrC_MaxTorqChrt */
    /* Entry Internal: TmotMTIR_b_MtrC_MaxTorq/TmotMTIR_b_MtrC_MaxTorqChrt */
    /* Transition: '<S602>:2' */
#if Rte_SysCon_Variant_MTIR_1

    /* Merge: '<Root>/Merge_54' incorporates:
     *  Chart: '<S73>/TmotMTIR_b_MtrC_MaxTorqChrt'
     */
    Rte_IrvWrite_TmotMTIR_b_MtrC_MaxTorq_VeMTIR_b_MtrC_MaxTorqSgnl_Rcvd_write_IRV
        (false);

#endif

    /* End of SignalConversion generated from: '<S73>/TmotMTIR_b_MtrC_MaxTorqChrt' */
    /* End of Outputs for SubSystem: '<Root>/TmotMTIR_b_MtrC_MaxTorq' */
}

/* Output function */
FUNC(void, MTIR_CODE) TmotMTIR_b_MtrC_MinTorq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotMTIR_b_MtrC_MinTorq' */
    /* SignalConversion generated from: '<S74>/TmotMTIR_b_MtrC_MinTorqChrt' incorporates:
     *  SignalConversion generated from: '<S74>/VeMTIR_b_MtrC_MinTorqSgnl_Rcvd_write'
     */
    /* Gateway: TmotMTIR_b_MtrC_MinTorq/TmotMTIR_b_MtrC_MinTorqChrt */
    /* During: TmotMTIR_b_MtrC_MinTorq/TmotMTIR_b_MtrC_MinTorqChrt */
    /* Entry Internal: TmotMTIR_b_MtrC_MinTorq/TmotMTIR_b_MtrC_MinTorqChrt */
    /* Transition: '<S603>:2' */
#if Rte_SysCon_Variant_MTIR_1

    /* Merge: '<Root>/Merge_56' incorporates:
     *  Chart: '<S74>/TmotMTIR_b_MtrC_MinTorqChrt'
     */
    Rte_IrvWrite_TmotMTIR_b_MtrC_MinTorq_VeMTIR_b_MtrC_MinTorqSgnl_Rcvd_write_IRV
        (false);

#endif

    /* End of SignalConversion generated from: '<S74>/TmotMTIR_b_MtrC_MinTorqChrt' */
    /* End of Outputs for SubSystem: '<Root>/TmotMTIR_b_MtrC_MinTorq' */
}

/* Output function */
FUNC(void, MTIR_CODE) TmotMTIR_b_MtrC_TorqAchieved(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotMTIR_b_MtrC_TorqAchieved' */
    /* Merge: '<Root>/Merge_58' incorporates:
     *  Chart: '<S75>/TmotMTIR_b_MtrC_TorqAchievedChrt'
     *  SignalConversion generated from: '<S75>/VeMTIR_b_MtrC_TorqAchievedSgnl_Rcvd_write'
     */
    /* Gateway: TmotMTIR_b_MtrC_TorqAchieved/TmotMTIR_b_MtrC_TorqAchievedChrt */
    /* During: TmotMTIR_b_MtrC_TorqAchieved/TmotMTIR_b_MtrC_TorqAchievedChrt */
    /* Entry Internal: TmotMTIR_b_MtrC_TorqAchieved/TmotMTIR_b_MtrC_TorqAchievedChrt */
    /* Transition: '<S604>:2' */
    Rte_IrvWrite_TmotMTIR_b_MtrC_TorqAchieved_VeMTIR_b_MtrC_TorqAchievedSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotMTIR_b_MtrC_TorqAchieved' */
}

/* Output function */
FUNC(void, MTIR_CODE) TmotMTIR_b_MtrC_TorqAchieved_AEMD(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotMTIR_b_MtrC_TorqAchieved_AEMD' */
    /* Merge: '<Root>/Merge_63' incorporates:
     *  Chart: '<S76>/TmotMTIR_b_MtrC_TorqAchieved_AEMDChrt'
     *  SignalConversion generated from: '<S76>/VeMTIR_b_MtrC_TorqAchieved_AEMDSgnl_Rcvd_write'
     */
    /* Gateway: TmotMTIR_b_MtrC_TorqAchieved_AEMD/TmotMTIR_b_MtrC_TorqAchieved_AEMDChrt */
    /* During: TmotMTIR_b_MtrC_TorqAchieved_AEMD/TmotMTIR_b_MtrC_TorqAchieved_AEMDChrt */
    /* Entry Internal: TmotMTIR_b_MtrC_TorqAchieved_AEMD/TmotMTIR_b_MtrC_TorqAchieved_AEMDChrt */
    /* Transition: '<S605>:2' */
    Rte_IrvWrite_TmotMTIR_b_MtrC_TorqAchieved_AEMD_VeMTIR_b_MtrC_TorqAchieved_AEMDSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotMTIR_b_MtrC_TorqAchieved_AEMD' */
}

/* Output function */
FUNC(void, MTIR_CODE) TmotMTIR_k_MtrADeratingFactor(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotMTIR_k_MtrADeratingFactor' */
    /* Chart: '<S77>/TmotMTIR_k_MtrADeratingFactorChrt' */
    /* Gateway: TmotMTIR_k_MtrADeratingFactor/TmotMTIR_k_MtrADeratingFactorChrt */
    /* During: TmotMTIR_k_MtrADeratingFactor/TmotMTIR_k_MtrADeratingFactorChrt */
    /* Entry Internal: TmotMTIR_k_MtrADeratingFactor/TmotMTIR_k_MtrADeratingFactorChrt */
    /* Transition: '<S606>:2' */
    if (KeMTIR_b_EnblMtrsTrqCpbltyCrv)
    {
        /* Transition: '<S606>:54' */
        /* Transition: '<S606>:57' */
        MTIR_ac_B.LeMTIR_b_MtrADeratingFactorSgnl = false;

        /* Transition: '<S606>:58' */
    }
    else
    {
        /* Transition: '<S606>:59' */
    }

    /* End of Chart: '<S77>/TmotMTIR_k_MtrADeratingFactorChrt' */

    /* Merge: '<Root>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S77>/VeMTIR_b_MtrADeratingFactorSgnl_Rcvd_write'
     * */
    Rte_IrvWrite_TmotMTIR_k_MtrADeratingFactor_VeMTIR_b_MtrADrtngFctrRcvd_write_IRV
        (MTIR_ac_B.LeMTIR_b_MtrADeratingFactorSgnl);

    /* End of Outputs for SubSystem: '<Root>/TmotMTIR_k_MtrADeratingFactor' */
}

/* Output function */
FUNC(void, MTIR_CODE) TmotMTIR_k_MtrBDeratingFactor(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotMTIR_k_MtrBDeratingFactor' */
    /* Chart: '<S78>/TmotMTIR_k_MtrBDeratingFactorChrt' */
    /* Gateway: TmotMTIR_k_MtrBDeratingFactor/TmotMTIR_k_MtrBDeratingFactorChrt */
    /* During: TmotMTIR_k_MtrBDeratingFactor/TmotMTIR_k_MtrBDeratingFactorChrt */
    /* Entry Internal: TmotMTIR_k_MtrBDeratingFactor/TmotMTIR_k_MtrBDeratingFactorChrt */
    /* Transition: '<S607>:53' */
    if (KeMTIR_b_EnblMtrsTrqCpbltyCrv)
    {
        /* Transition: '<S607>:55' */
        /* Transition: '<S607>:59' */
        MTIR_ac_B.LeMTIR_k_MtrBDeratingFactorSgnl = false;

        /* Transition: '<S607>:61' */
    }
    else
    {
        /* Transition: '<S607>:56' */
    }

    /* End of Chart: '<S78>/TmotMTIR_k_MtrBDeratingFactorChrt' */

    /* Merge: '<Root>/Merge_12' incorporates:
     *  SignalConversion generated from: '<S78>/VeMTIR_k_MtrBDeratingFactorSgnl_Rcvd_write'
     * */
    Rte_IrvWrite_TmotMTIR_k_MtrBDeratingFactor_VeMTIR_b_MtrBDrtngFctrRcvd_write_IRV
        (MTIR_ac_B.LeMTIR_k_MtrBDeratingFactorSgnl);

    /* End of Outputs for SubSystem: '<Root>/TmotMTIR_k_MtrBDeratingFactor' */
}

/* Output function */
FUNC(void, MTIR_CODE) TmotMTIR_k_MtrCDeratingFactor(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotMTIR_k_MtrCDeratingFactor' */
    /* Chart: '<S79>/TmotMTIR_k_MtrCDeratingFactorChrt' */
    /* Gateway: TmotMTIR_k_MtrCDeratingFactor/TmotMTIR_k_MtrCDeratingFactorChrt */
    /* During: TmotMTIR_k_MtrCDeratingFactor/TmotMTIR_k_MtrCDeratingFactorChrt */
    /* Entry Internal: TmotMTIR_k_MtrCDeratingFactor/TmotMTIR_k_MtrCDeratingFactorChrt */
    /* Transition: '<S608>:53' */
    if (KeMTIR_b_EnblMtrsTrqCpbltyCrv)
    {
        /* Transition: '<S608>:55' */
        /* Transition: '<S608>:59' */
        MTIR_ac_B.LeMTIR_k_MtrCDeratingFactorSgnl = false;

        /* Transition: '<S608>:61' */
    }
    else
    {
        /* Transition: '<S608>:56' */
    }

    /* End of Chart: '<S79>/TmotMTIR_k_MtrCDeratingFactorChrt' */

    /* SignalConversion generated from: '<S79>/TmotMTIR_k_MtrCDeratingFactorChrt' incorporates:
     *  SignalConversion generated from: '<S79>/VeMTIR_k_MtrCDeratingFactorSgnl_Rcvd_write'
     */
#if Rte_SysCon_Variant_MTIR_1

    /* Merge: '<Root>/Merge_21' */
    Rte_IrvWrite_TmotMTIR_k_MtrCDeratingFactor_VeMTIR_b_MtrCDrtngFctrRcvd_write_IRV
        (MTIR_ac_B.LeMTIR_k_MtrCDeratingFactorSgnl);

#endif

    /* End of SignalConversion generated from: '<S79>/TmotMTIR_k_MtrCDeratingFactorChrt' */
    /* End of Outputs for SubSystem: '<Root>/TmotMTIR_k_MtrCDeratingFactor' */
}

/* Output function */
FUNC(void, MTIR_CODE) TmotMTIR_n_MtrACapabilitySpd(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotMTIR_n_MtrACapabilitySpd' */
    /* Chart: '<S80>/TmotMTIR_n_MtrACapabilitySpdChrt' */
    /* Gateway: TmotMTIR_n_MtrACapabilitySpd/TmotMTIR_n_MtrACapabilitySpdChrt */
    /* During: TmotMTIR_n_MtrACapabilitySpd/TmotMTIR_n_MtrACapabilitySpdChrt */
    /* Entry Internal: TmotMTIR_n_MtrACapabilitySpd/TmotMTIR_n_MtrACapabilitySpdChrt */
    /* Transition: '<S609>:2' */
    if (KeMTIR_b_EnblMtrsTrqCpbltyCrv)
    {
        /* Transition: '<S609>:54' */
        /* Transition: '<S609>:58' */
        MTIR_ac_B.LeMTIR_b_MtrACapabilitySpdSgnl_ = false;

        /* Transition: '<S609>:59' */
    }
    else
    {
        /* Transition: '<S609>:55' */
    }

    /* End of Chart: '<S80>/TmotMTIR_n_MtrACapabilitySpdChrt' */

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S80>/VeMTIR_b_MtrACapabilitySpdSgnl_Rcvd_write'
     * */
    Rte_IrvWrite_TmotMTIR_n_MtrACapabilitySpd_VeMTIR_b_MtrACpbltySpdRcvd_write_IRV
        (MTIR_ac_B.LeMTIR_b_MtrACapabilitySpdSgnl_);

    /* End of Outputs for SubSystem: '<Root>/TmotMTIR_n_MtrACapabilitySpd' */
}

/* Output function */
FUNC(void, MTIR_CODE) TmotMTIR_n_MtrBCapabilitySpd(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotMTIR_n_MtrBCapabilitySpd' */
    /* Chart: '<S81>/TmotMTIR_n_MtrBCapabilitySpdChrt' */
    /* Gateway: TmotMTIR_n_MtrBCapabilitySpd/TmotMTIR_n_MtrBCapabilitySpdChrt */
    /* During: TmotMTIR_n_MtrBCapabilitySpd/TmotMTIR_n_MtrBCapabilitySpdChrt */
    /* Entry Internal: TmotMTIR_n_MtrBCapabilitySpd/TmotMTIR_n_MtrBCapabilitySpdChrt */
    /* Transition: '<S610>:53' */
    if (KeMTIR_b_EnblMtrsTrqCpbltyCrv)
    {
        /* Transition: '<S610>:55' */
        /* Transition: '<S610>:59' */
        MTIR_ac_B.LeMTIR_n_MtrBCapabilitySpdSgnl_ = false;

        /* Transition: '<S610>:61' */
    }
    else
    {
        /* Transition: '<S610>:56' */
    }

    /* End of Chart: '<S81>/TmotMTIR_n_MtrBCapabilitySpdChrt' */

    /* Merge: '<Root>/Merge_10' incorporates:
     *  SignalConversion generated from: '<S81>/VeMTIR_n_MtrBCapabilitySpdSgnl_Rcvd_write'
     * */
    Rte_IrvWrite_TmotMTIR_n_MtrBCapabilitySpd_VeMTIR_b_MtrBCpbltySpdRcvd_write_IRV
        (MTIR_ac_B.LeMTIR_n_MtrBCapabilitySpdSgnl_);

    /* End of Outputs for SubSystem: '<Root>/TmotMTIR_n_MtrBCapabilitySpd' */
}

/* Output function */
FUNC(void, MTIR_CODE) TmotMTIR_n_MtrCCapabilitySpd(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotMTIR_n_MtrCCapabilitySpd' */
    /* Chart: '<S82>/TmotMTIR_n_MtrCCapabilitySpdChrt' */
    /* Gateway: TmotMTIR_n_MtrCCapabilitySpd/TmotMTIR_n_MtrCCapabilitySpdChrt */
    /* During: TmotMTIR_n_MtrCCapabilitySpd/TmotMTIR_n_MtrCCapabilitySpdChrt */
    /* Entry Internal: TmotMTIR_n_MtrCCapabilitySpd/TmotMTIR_n_MtrCCapabilitySpdChrt */
    /* Transition: '<S611>:53' */
    if (KeMTIR_b_EnblMtrsTrqCpbltyCrv)
    {
        /* Transition: '<S611>:55' */
        /* Transition: '<S611>:59' */
        MTIR_ac_B.LeMTIR_n_MtrCCapabilitySpdSgnl_ = false;

        /* Transition: '<S611>:61' */
    }
    else
    {
        /* Transition: '<S611>:56' */
    }

    /* End of Chart: '<S82>/TmotMTIR_n_MtrCCapabilitySpdChrt' */

    /* SignalConversion generated from: '<S82>/TmotMTIR_n_MtrCCapabilitySpdChrt' incorporates:
     *  SignalConversion generated from: '<S82>/VeMTIR_n_MtrCCapabilitySpdSgnl_Rcvd_write'
     */
#if Rte_SysCon_Variant_MTIR_1

    /* Merge: '<Root>/Merge_20' */
    Rte_IrvWrite_TmotMTIR_n_MtrCCapabilitySpd_VeMTIR_b_MtrCCpbltySpdRcvd_write_IRV
        (MTIR_ac_B.LeMTIR_n_MtrCCapabilitySpdSgnl_);

#endif

    /* End of SignalConversion generated from: '<S82>/TmotMTIR_n_MtrCCapabilitySpdChrt' */
    /* End of Outputs for SubSystem: '<Root>/TmotMTIR_n_MtrCCapabilitySpd' */
}

/* Model initialize function */
FUNC(void, MTIR_CODE) MTIR_ac_Init(void)
{
    {
        float32 tmp[16];

        /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
         *  SubSystem: '<Root>/MTIR_PwrOn'
         */
        /* SystemInitialize for S-Function (fcgen): '<S30>/FcnCallGen' incorporates:
         *  SubSystem: '<S30>/MTII_MtrTrqInit'
         */
        /* SystemInitialize for SignalConversion generated from: '<S497>/VeMTIR_M_MtrA_MaxTorq' incorporates:
         *  Constant: '<S548>/Calib'
         */
        MTIR_ac_B.OutportBufferForVeMTIR_M_Mtr_m5 = KeMTIR_M_MtrA_MaxTrqDflt;

        /* SystemInitialize for SignalConversion generated from: '<S497>/VeMTIR_M_MtrA_MinTorq' incorporates:
         *  Constant: '<S549>/Calib'
         */
        MTIR_ac_B.OutportBufferForVeMTIR_M_MtrA_a = KeMTIR_M_MtrA_MinTrqDflt;

        /* SystemInitialize for SignalConversion generated from: '<S497>/VeMTIR_M_MtrA_TorqAchieved_AEMD' incorporates:
         *  Constant: '<S550>/Calib'
         */
        MTIR_ac_B.OutportBufferForVeMTIR_M_Mtr_mx =
            KeMTIR_M_MtrA_TorqAchieved_AEMDDflt;

        /* SystemInitialize for SignalConversion generated from: '<S497>/VeMTIR_M_MtrB_MaxTorq' incorporates:
         *  Constant: '<S553>/Calib'
         */
        MTIR_ac_B.OutportBufferForVeMTIR_M_MtrB_k = KeMTIR_M_MtrB_MaxTrqDflt;

        /* SystemInitialize for SignalConversion generated from: '<S497>/VeMTIR_M_MtrB_MinTorq' incorporates:
         *  Constant: '<S554>/Calib'
         */
        MTIR_ac_B.OutportBufferForVeMTIR_M_Mtr_cq = KeMTIR_M_MtrB_MinTrqDflt;

        /* SystemInitialize for SignalConversion generated from: '<S497>/VeMTIR_M_MtrB_TorqAchieved_AEMD' incorporates:
         *  Constant: '<S555>/Calib'
         */
        MTIR_ac_B.OutportBufferForVeMTIR_M_MtrB_o =
            KeMTIR_M_MtrB_TorqAchieved_AEMDDflt;

        /* SystemInitialize for SignalConversion generated from: '<S497>/VeMTIR_M_MtrBMaxTrqLmt_TCM' incorporates:
         *  Constant: '<S551>/Calib'
         */
        MTIR_ac_B.OutportBufferForVeMTIR_M_MtrBMa = KeMTIR_M_MtrBMaxTrqLmt_TCM;

        /* SystemInitialize for SignalConversion generated from: '<S497>/VeMTIR_M_MtrBMinTrqLmt_TCM' incorporates:
         *  Constant: '<S552>/Calib'
         */
        MTIR_ac_B.OutportBufferForVeMTIR_M_MtrBMi = KeMTIR_M_MtrBMinTrqLmt_TCM;

        /* SystemInitialize for SignalConversion generated from: '<S497>/VeMTIR_M_MtrC_MaxTorq' incorporates:
         *  Constant: '<S556>/Calib'
         */
        MTIR_ac_B.OutportBufferForVeMTIR_M_MtrC_b = KeMTIR_M_MtrC_MaxTrqDflt;

        /* SystemInitialize for SignalConversion generated from: '<S497>/VeMTIR_M_MtrC_MinTorq' incorporates:
         *  Constant: '<S557>/Calib'
         */
        MTIR_ac_B.OutportBufferForVeMTIR_M_MtrC_f = KeMTIR_M_MtrC_MinTrqDflt;

        /* SystemInitialize for SignalConversion generated from: '<S497>/VeMTIR_M_MtrC_TorqAchieved_AEMD' incorporates:
         *  Constant: '<S558>/Calib'
         */
        MTIR_ac_B.OutportBufferForVeMTIR_M_Mtr_bz =
            KeMTIR_M_MtrC_TorqAchieved_AEMDDflt;

        /* SystemInitialize for S-Function (fcgen): '<S30>/FcnCallGen' incorporates:
         *  SubSystem: '<S30>/MTII_MtrCpbltyTrqInit'
         */
        /* SystemInitialize for SignalConversion generated from: '<S496>/k_MtrADrtngFctr_IV' */
        MTIR_ac_B.OutportBufferFork_MtrADrtngFctr = 1.0F;

        /* SystemInitialize for SignalConversion generated from: '<S496>/k_MtrBDrtngFctr_IV' */
        MTIR_ac_B.OutportBufferFork_MtrBDrtngFctr = 1.0F;

        /* SystemInitialize for SignalConversion generated from: '<S496>/k_MtrCDrtngFctr_IV' */
        MTIR_ac_B.OutportBufferFork_MtrCDrtngFctr = 1.0F;

        /* End of SystemInitialize for S-Function (fcgen): '<S30>/FcnCallGen' */
        /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

        /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
         *  SubSystem: '<Root>/MTIR_FastTEF'
         */
        /* SystemInitialize for S-Function (fcgen): '<S29>/FcnCallGen' incorporates:
         *  SubSystem: '<S29>/MTIC'
         */
        /* SystemInitialize for SignalConversion generated from: '<S117>/Variant Source6' incorporates:
         *  SignalConversion generated from: '<S117>/Variant Source7'
         */
#if Rte_SysCon_Variant_MTIR_1

        /* SystemInitialize for VariantMerge generated from: '<S117>/Variant Source6' */
        memcpy(&MTIR_ac_B.VariantMerge_For_Variant_Sour_j[0],
               &MTIR_ac_B.Product_a[0], (sizeof(float32)) << 4ULL);

        /* SystemInitialize for VariantMerge generated from: '<S117>/Variant Source7' */
        memcpy(&MTIR_ac_B.VariantMerge_For_Variant_Sou_p3[0],
               &MTIR_ac_B.Product_g[0], (sizeof(float32)) << 4ULL);

#else

        /* SystemInitialize for VariantMerge generated from: '<S117>/Variant Source6' incorporates:
         *  SignalConversion generated from: '<S117>/Variant Source6'
         */
        MTIR_ac_B.VariantMerge_For_Variant_Sour_j[0] = MTIR_ac_B.ConstantValue36;
        MTIR_ac_B.VariantMerge_For_Variant_Sour_j[1] = MTIR_ac_B.ConstantValue37;
        MTIR_ac_B.VariantMerge_For_Variant_Sour_j[2] = MTIR_ac_B.ConstantValue7;
        MTIR_ac_B.VariantMerge_For_Variant_Sour_j[3] = MTIR_ac_B.ConstantValue8;
        MTIR_ac_B.VariantMerge_For_Variant_Sour_j[4] = MTIR_ac_B.ConstantValue24;
        MTIR_ac_B.VariantMerge_For_Variant_Sour_j[5] = MTIR_ac_B.ConstantValue25;
        MTIR_ac_B.VariantMerge_For_Variant_Sour_j[6] = MTIR_ac_B.ConstantValue26;
        MTIR_ac_B.VariantMerge_For_Variant_Sour_j[7] = MTIR_ac_B.ConstantValue27;
        MTIR_ac_B.VariantMerge_For_Variant_Sour_j[8] = MTIR_ac_B.ConstantValue28;
        MTIR_ac_B.VariantMerge_For_Variant_Sour_j[9] = MTIR_ac_B.ConstantValue29;
        MTIR_ac_B.VariantMerge_For_Variant_Sour_j[10] =
            MTIR_ac_B.ConstantValue30;
        MTIR_ac_B.VariantMerge_For_Variant_Sour_j[11] =
            MTIR_ac_B.ConstantValue31;
        MTIR_ac_B.VariantMerge_For_Variant_Sour_j[12] =
            MTIR_ac_B.ConstantValue32;
        MTIR_ac_B.VariantMerge_For_Variant_Sour_j[13] =
            MTIR_ac_B.ConstantValue33;
        MTIR_ac_B.VariantMerge_For_Variant_Sour_j[14] =
            MTIR_ac_B.ConstantValue34;
        MTIR_ac_B.VariantMerge_For_Variant_Sour_j[15] =
            MTIR_ac_B.ConstantValue35;

#endif

        /* End of SystemInitialize for SignalConversion generated from: '<S117>/Variant Source6' */

        /* SystemInitialize for SignalConversion generated from: '<S117>/Variant Source8' incorporates:
         *  SignalConversion generated from: '<S117>/Variant Source7'
         */
#if Rte_SysCon_Variant_MTIR_1

        /* SystemInitialize for VariantMerge generated from: '<S117>/Variant Source8' */
        memcpy(&MTIR_ac_B.VariantMerge_For_Variant_Sour_o[0],
               &MTIR_ac_B.Product_ag[0], (sizeof(float32)) << 4ULL);

#else

        /* SystemInitialize for VariantMerge generated from: '<S117>/Variant Source7' incorporates:
         *  SignalConversion generated from: '<S117>/Variant Source7'
         */
        MTIR_ac_B.VariantMerge_For_Variant_Sou_p3[0] = MTIR_ac_B.ConstantValue6;
        MTIR_ac_B.VariantMerge_For_Variant_Sou_p3[1] = MTIR_ac_B.ConstantValue9;
        MTIR_ac_B.VariantMerge_For_Variant_Sou_p3[2] = MTIR_ac_B.ConstantValue10;
        MTIR_ac_B.VariantMerge_For_Variant_Sou_p3[3] = MTIR_ac_B.ConstantValue11;
        MTIR_ac_B.VariantMerge_For_Variant_Sou_p3[4] = MTIR_ac_B.ConstantValue12;
        MTIR_ac_B.VariantMerge_For_Variant_Sou_p3[5] = MTIR_ac_B.ConstantValue13;
        MTIR_ac_B.VariantMerge_For_Variant_Sou_p3[6] = MTIR_ac_B.ConstantValue14;
        MTIR_ac_B.VariantMerge_For_Variant_Sou_p3[7] = MTIR_ac_B.ConstantValue15;
        MTIR_ac_B.VariantMerge_For_Variant_Sou_p3[8] = MTIR_ac_B.ConstantValue16;
        MTIR_ac_B.VariantMerge_For_Variant_Sou_p3[9] = MTIR_ac_B.ConstantValue17;
        MTIR_ac_B.VariantMerge_For_Variant_Sou_p3[10] =
            MTIR_ac_B.ConstantValue18;
        MTIR_ac_B.VariantMerge_For_Variant_Sou_p3[11] =
            MTIR_ac_B.ConstantValue19;
        MTIR_ac_B.VariantMerge_For_Variant_Sou_p3[12] =
            MTIR_ac_B.ConstantValue20;
        MTIR_ac_B.VariantMerge_For_Variant_Sou_p3[13] =
            MTIR_ac_B.ConstantValue21;
        MTIR_ac_B.VariantMerge_For_Variant_Sou_p3[14] =
            MTIR_ac_B.ConstantValue22;
        MTIR_ac_B.VariantMerge_For_Variant_Sou_p3[15] =
            MTIR_ac_B.ConstantValue23;

        /* SystemInitialize for VariantMerge generated from: '<S117>/Variant Source8' incorporates:
         *  SignalConversion generated from: '<S117>/Variant Source8'
         */
        MTIR_ac_B.VariantMerge_For_Variant_Sour_o[0] = MTIR_ac_B.ConstantValue52;
        MTIR_ac_B.VariantMerge_For_Variant_Sour_o[1] = MTIR_ac_B.ConstantValue53;
        MTIR_ac_B.VariantMerge_For_Variant_Sour_o[2] = MTIR_ac_B.ConstantValue38;
        MTIR_ac_B.VariantMerge_For_Variant_Sour_o[3] = MTIR_ac_B.ConstantValue39;
        MTIR_ac_B.VariantMerge_For_Variant_Sour_o[4] = MTIR_ac_B.ConstantValue40;
        MTIR_ac_B.VariantMerge_For_Variant_Sour_o[5] = MTIR_ac_B.ConstantValue41;
        MTIR_ac_B.VariantMerge_For_Variant_Sour_o[6] = MTIR_ac_B.ConstantValue42;
        MTIR_ac_B.VariantMerge_For_Variant_Sour_o[7] = MTIR_ac_B.ConstantValue43;
        MTIR_ac_B.VariantMerge_For_Variant_Sour_o[8] = MTIR_ac_B.ConstantValue44;
        MTIR_ac_B.VariantMerge_For_Variant_Sour_o[9] = MTIR_ac_B.ConstantValue45;
        MTIR_ac_B.VariantMerge_For_Variant_Sour_o[10] =
            MTIR_ac_B.ConstantValue46;
        MTIR_ac_B.VariantMerge_For_Variant_Sour_o[11] =
            MTIR_ac_B.ConstantValue47;
        MTIR_ac_B.VariantMerge_For_Variant_Sour_o[12] =
            MTIR_ac_B.ConstantValue48;
        MTIR_ac_B.VariantMerge_For_Variant_Sour_o[13] =
            MTIR_ac_B.ConstantValue49;
        MTIR_ac_B.VariantMerge_For_Variant_Sour_o[14] =
            MTIR_ac_B.ConstantValue50;
        MTIR_ac_B.VariantMerge_For_Variant_Sour_o[15] =
            MTIR_ac_B.ConstantValue51;

#endif

        /* End of SystemInitialize for SignalConversion generated from: '<S117>/Variant Source8' */
        /* End of SystemInitialize for S-Function (fcgen): '<S29>/FcnCallGen' */
        /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

        /* SystemInitialize for Merge: '<Root>/Merge_64' */
        memset(&tmp[0], 0, (sizeof(float32)) << 4ULL);

        /* SystemInitialize for Outport: '<Root>/VaMTIR_M_MtrAMaxCpblty' incorporates:
         *  Merge: '<Root>/Merge_64'
         */
        (void)Rte_Write_VaMTIR_M_MtrAMaxCpblty_Value(tmp);

        /* SystemInitialize for Merge: '<Root>/Merge_68' */
        memset(&tmp[0], 0, (sizeof(float32)) << 4ULL);

        /* SystemInitialize for Outport: '<Root>/VaMTIR_M_MtrAMinCpblty' incorporates:
         *  Merge: '<Root>/Merge_68'
         */
        (void)Rte_Write_VaMTIR_M_MtrAMinCpblty_Value(tmp);

        /* SystemInitialize for Merge: '<Root>/Merge_69' */
        memset(&tmp[0], 0, (sizeof(float32)) << 4ULL);

        /* SystemInitialize for Outport: '<Root>/VaMTIR_n_MtrACpbltySpd' incorporates:
         *  Merge: '<Root>/Merge_69'
         */
        (void)Rte_Write_VaMTIR_n_MtrACpbltySpd_Value(tmp);

        /* SystemInitialize for Merge: '<Root>/Merge_65' */
        memset(&tmp[0], 0, (sizeof(float32)) << 4ULL);

        /* SystemInitialize for Outport: '<Root>/VaMTIR_M_MtrBMaxCpblty' incorporates:
         *  Merge: '<Root>/Merge_65'
         */
        (void)Rte_Write_VaMTIR_M_MtrBMaxCpblty_Value(tmp);

        /* SystemInitialize for Merge: '<Root>/Merge_66' */
        memset(&tmp[0], 0, (sizeof(float32)) << 4ULL);

        /* SystemInitialize for Outport: '<Root>/VaMTIR_M_MtrBMinCpblty' incorporates:
         *  Merge: '<Root>/Merge_66'
         */
        (void)Rte_Write_VaMTIR_M_MtrBMinCpblty_Value(tmp);

        /* SystemInitialize for Merge: '<Root>/Merge_67' */
        memset(&tmp[0], 0, (sizeof(float32)) << 4ULL);

        /* SystemInitialize for Outport: '<Root>/VaMTIR_n_MtrBCpbltySpd' incorporates:
         *  Merge: '<Root>/Merge_67'
         */
        (void)Rte_Write_VaMTIR_n_MtrBCpbltySpd_Value(tmp);

        /* SystemInitialize for Merge: '<Root>/Merge_70' */
        memset(&tmp[0], 0, (sizeof(float32)) << 4ULL);

        /* SystemInitialize for Outport: '<Root>/VaMTIR_M_MtrCMaxCpblty' incorporates:
         *  Merge: '<Root>/Merge_70'
         */
        (void)Rte_Write_VaMTIR_M_MtrCMaxCpblty_Value(tmp);

        /* SystemInitialize for Merge: '<Root>/Merge_71' */
        memset(&tmp[0], 0, (sizeof(float32)) << 4ULL);

        /* SystemInitialize for Outport: '<Root>/VaMTIR_M_MtrCMinCpblty' incorporates:
         *  Merge: '<Root>/Merge_71'
         */
        (void)Rte_Write_VaMTIR_M_MtrCMinCpblty_Value(tmp);

        /* SystemInitialize for Merge: '<Root>/Merge_72' */
        memset(&tmp[0], 0, (sizeof(float32)) << 4ULL);

        /* SystemInitialize for Outport: '<Root>/VaMTIR_n_MtrCCpbltySpd' incorporates:
         *  Merge: '<Root>/Merge_72'
         */
        (void)Rte_Write_VaMTIR_n_MtrCCpbltySpd_Value(tmp);
    }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
