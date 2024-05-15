/*
 * File: ACCR_ac.c
 *
 * Code generated for Simulink model 'ACCR_ac'.
 *
 * Model version                  : 9.76
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:02:01 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ACCR_ac.h"
#include "look1_iflf_binlca_16a.h"
#include "look2_ifbu8flf_binlca_16a.h"
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
#define START_SEC_CALIB_UNSPECIFIED_ACCR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KaACCR_n_CompSpd[10] =
{
    965.0F, 1500.0F, 2600.0F, 3200.0F, 3750.0F, 4000.0F, 4500.0F, 5000.0F,
    6000.0F, 7600.0F
} ;                                    /* Referenced by: '<S683>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCF_b_Comp_DVC_Lim_Dial = 0;/* Referenced by: '<S58>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCF_b_Comp_DVC_Lim_Slct = 0;/* Referenced by: '<S59>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_Cf_Bar2KPa_mHEV = 1.0F;/* Referenced by: '<S62>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(uint16, ACCR_VAR_INIT) KeACCR_Cnt_ACOilMigDuration = 400U;/* Referenced by:
                                                                      * '<S812>/Calib'
                                                                      * '<S1048>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(uint16, ACCR_VAR_INIT) KeACCR_Cnt_ACOilMigPeriod = 18000U;/* Referenced by:
                                                                      * '<S813>/Calib'
                                                                      * '<S1049>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(uint16, ACCR_VAR_INIT) KeACCR_Cnt_ACOilMigReset = 100U;/* Referenced by: '<S814>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_I_CurrentACHiPrRetract =
    0.05F;                             /* Referenced by: '<S992>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_I_ECVDCrrntRtLimDown =
    -0.1F;                             /* Referenced by: '<S931>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_I_ECVDMaxCurrent = 0.8F;/* Referenced by: '<S1070>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_I_ECVDMinCurr_ClutchEngag =
    0.2F;                              /* Referenced by: '<S917>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_I_ECVDMinCurrent = 0.0F;/* Referenced by: '<S1071>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_I_ECVD_CurrentTgt_D = 0.0F;/* Referenced by: '<S28>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_3

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_I_ECVD_CurrentTgt_NF = 0.0F;/* Referenced by: '<S1076>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_I_ECVD_MinCurrResoltution =
    0.01F;                             /* Referenced by: '<S938>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_3

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_I_FtERVShtMaxCrrnt_NF =
    0.0F;                              /* Referenced by: '<S1077>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CETermMedTrigMF_a =
    500.0F;                            /* Referenced by: '<S359>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CETermMedTrigMF_a_new =
    -0.5F;                             /* Referenced by: '<S493>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CETermMedTrigMF_b = 1.25F;/* Referenced by: '<S360>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CETermMedTrigMF_b_new =
    0.0F;                              /* Referenced by: '<S494>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CETermMedTrigMF_c = 5.0F;/* Referenced by: '<S361>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CETermMedTrigMF_c_new =
    0.5F;                              /* Referenced by: '<S495>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CETermNegTrapMF_a =
    500.0F;                            /* Referenced by: '<S362>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CETermNegTrapMF_a_new =
    -999.0F;                           /* Referenced by: '<S496>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CETermNegTrapMF_b =
    -10.0F;                            /* Referenced by: '<S363>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CETermNegTrapMF_b_new =
    -500.0F;                           /* Referenced by: '<S497>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CETermNegTrapMF_c = -1.0F;/* Referenced by: '<S364>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CETermNegTrapMF_c_new =
    -40.0F;                            /* Referenced by: '<S498>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CETermNegTrapMF_d = 2.0F;/* Referenced by: '<S365>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CETermNegTrapMF_d_new =
    -4.0F;                             /* Referenced by: '<S499>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CETermPosMedTrapMF_a =
    500.0F;                            /* Referenced by: '<S366>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CETermPosMedTrapMF_a_new =
    -8.0F;                             /* Referenced by: '<S500>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CETermPosMedTrapMF_b =
    5.0F;                              /* Referenced by: '<S367>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CETermPosMedTrapMF_b_new =
    -4.0F;                             /* Referenced by: '<S501>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CETermPosMedTrapMF_c =
    -1.0F;                             /* Referenced by: '<S368>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CETermPosMedTrapMF_c_new =
    -4.0F;                             /* Referenced by: '<S502>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CETermPosMedTrapMF_d =
    10.0F;                             /* Referenced by: '<S369>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CETermPosMedTrapMF_d_new =
    -0.5F;                             /* Referenced by: '<S503>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CETermPosTrapMF_a =
    500.0F;                            /* Referenced by: '<S370>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CETermPosTrapMF_a_new =
    3.0F;                              /* Referenced by: '<S504>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CETermPosTrapMF_b = 10.0F;/* Referenced by: '<S371>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CETermPosTrapMF_b_new =
    8.0F;                              /* Referenced by: '<S505>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CETermPosTrapMF_c = 15.0F;/* Referenced by: '<S372>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CETermPosTrapMF_c_new =
    500.0F;                            /* Referenced by: '<S506>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CETermPosTrapMF_d = 26.0F;/* Referenced by: '<S373>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CETermPosTrapMF_d_new =
    999.0F;                            /* Referenced by: '<S507>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KeACCR_K_CETermVrySmlNegTrapMF_a_new = -4.0F;/* Referenced by: '<S508>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KeACCR_K_CETermVrySmlNegTrapMF_b_new = -0.5F;/* Referenced by: '<S509>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KeACCR_K_CETermVrySmlNegTrapMF_c_new = -0.5F;/* Referenced by: '<S510>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KeACCR_K_CETermVrySmlNegTrapMF_d_new = 0.0F;/* Referenced by: '<S511>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KeACCR_K_CETermVrySmlPosTrapMF_a_new = 0.0F;/* Referenced by: '<S512>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KeACCR_K_CETermVrySmlPosTrapMF_b_new = 0.5F;/* Referenced by: '<S513>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KeACCR_K_CETermVrySmlPosTrapMF_c_new = 0.5F;/* Referenced by: '<S514>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KeACCR_K_CETermVrySmlPosTrapMF_d_new = 3.0F;/* Referenced by: '<S515>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CETermZeroTrapMF_a =
    500.0F;                            /* Referenced by: '<S374>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CETermZeroTrapMF_a_new =
    0.5F;                              /* Referenced by: '<S516>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CETermZeroTrapMF_b =
    -1.0F;                             /* Referenced by: '<S375>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CETermZeroTrapMF_b_new =
    3.0F;                              /* Referenced by: '<S517>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CETermZeroTrapMF_c = 1.0F;/* Referenced by: '<S376>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CETermZeroTrapMF_c_new =
    3.0F;                              /* Referenced by: '<S518>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CETermZeroTrapMF_d = 2.0F;/* Referenced by: '<S377>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CETermZeroTrapMF_d_new =
    8.0F;                              /* Referenced by: '<S519>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CmpSucPres_Kd = 0.0F;/* Referenced by: '<S214>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CmpSucPres_Ki = 1.0F;/* Referenced by: '<S215>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CmpSucPres_Kp = 1.0F;/* Referenced by: '<S216>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CompSpdHCCTISErrKd = 0.0F;/* Referenced by: '<S779>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CompSpdvsPPCTISKd = 0.0F;/* Referenced by: '<S820>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CompSpdvsPPCTISKi = 1.0F;/* Referenced by: '<S821>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CompSpdvsPPCTISKp = 1.0F;/* Referenced by: '<S822>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CompSpdvsPressureKd =
    0.0F;                              /* Referenced by:
                                        * '<S199>/Calib'
                                        * '<S978>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CompSpdvsPressureKi =
    1.0F;                              /* Referenced by:
                                        * '<S200>/Calib'
                                        * '<S979>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_CompSpdvsPressureKp =
    1.0F;                              /* Referenced by:
                                        * '<S201>/Calib'
                                        * '<S980>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_ETermMedTrigMF_a = -5.4F;/* Referenced by: '<S418>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_ETermMedTrigMF_a_new =
    -0.5F;                             /* Referenced by: '<S569>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_ETermMedTrigMF_b = -4.0F;/* Referenced by: '<S419>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_ETermMedTrigMF_b_new =
    0.0F;                              /* Referenced by: '<S570>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_ETermMedTrigMF_c = -0.3F;/* Referenced by: '<S420>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_ETermMedTrigMF_c_new =
    2.5F;                              /* Referenced by: '<S571>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_ETermNegTrapMF_a = -20.0F;/* Referenced by: '<S421>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_ETermNegTrapMF_a_new =
    -6.0F;                             /* Referenced by: '<S572>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_ETermNegTrapMF_b = -15.0F;/* Referenced by: '<S422>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_ETermNegTrapMF_b_new =
    -4.0F;                             /* Referenced by: '<S573>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_ETermNegTrapMF_c = -5.5F;/* Referenced by: '<S423>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_ETermNegTrapMF_c_new =
    -4.0F;                             /* Referenced by: '<S574>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_ETermNegTrapMF_d = -5.4F;/* Referenced by: '<S424>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_ETermNegTrapMF_d_new =
    -2.0F;                             /* Referenced by: '<S575>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_ETermPosMedTrapMF_a =
    -2.0F;                             /* Referenced by: '<S425>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_ETermPosMedTrapMF_a_new =
    -4.0F;                             /* Referenced by: '<S576>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_ETermPosMedTrapMF_b =
    3.0F;                              /* Referenced by: '<S426>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_ETermPosMedTrapMF_b_new =
    -2.0F;                             /* Referenced by: '<S577>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_ETermPosMedTrapMF_c =
    10.0F;                             /* Referenced by: '<S427>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_ETermPosMedTrapMF_c_new =
    -2.0F;                             /* Referenced by: '<S578>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_ETermPosMedTrapMF_d =
    10.1F;                             /* Referenced by: '<S428>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_ETermPosMedTrapMF_d_new =
    -0.5F;                             /* Referenced by: '<S579>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_ETermPosTrapMF_a = 18.0F;/* Referenced by: '<S429>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_ETermPosTrapMF_a_new =
    7.5F;                              /* Referenced by: '<S580>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_ETermPosTrapMF_b = 20.5F;/* Referenced by: '<S430>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_ETermPosTrapMF_b_new =
    20.0F;                             /* Referenced by: '<S581>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_ETermPosTrapMF_c = 40.0F;/* Referenced by: '<S431>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_ETermPosTrapMF_c_new =
    20.0F;                             /* Referenced by: '<S582>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_ETermPosTrapMF_d = 50.0F;/* Referenced by: '<S432>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_ETermPosTrapMF_d_new =
    500.0F;                            /* Referenced by: '<S583>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KeACCR_K_ETermVrySmlNegTrapMF_a_new = -2.0F;/* Referenced by: '<S584>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KeACCR_K_ETermVrySmlNegTrapMF_b_new = -0.5F;/* Referenced by: '<S585>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KeACCR_K_ETermVrySmlNegTrapMF_c_new = -0.5F;/* Referenced by: '<S586>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KeACCR_K_ETermVrySmlNegTrapMF_d_new = 0.0F;/* Referenced by: '<S587>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KeACCR_K_ETermVrySmlPosTrapMF_a_new = 0.0F;/* Referenced by: '<S588>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KeACCR_K_ETermVrySmlPosTrapMF_b_new = 2.5F;/* Referenced by: '<S589>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KeACCR_K_ETermVrySmlPosTrapMF_c_new = 2.5F;/* Referenced by: '<S590>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KeACCR_K_ETermVrySmlPosTrapMF_d_new = 7.5F;/* Referenced by: '<S591>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_ETermZeroTrapMF_a = 8.0F;/* Referenced by: '<S433>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_ETermZeroTrapMF_a_new =
    2.5F;                              /* Referenced by: '<S592>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_ETermZeroTrapMF_b = 10.5F;/* Referenced by: '<S434>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_ETermZeroTrapMF_b_new =
    7.5F;                              /* Referenced by: '<S593>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_ETermZeroTrapMF_c = 20.0F;/* Referenced by: '<S435>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_ETermZeroTrapMF_c_new =
    7.5F;                              /* Referenced by: '<S594>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_ETermZeroTrapMF_d = 20.1F;/* Referenced by: '<S436>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_ETermZeroTrapMF_d_new =
    20.0F;                             /* Referenced by: '<S595>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_FuzzyCEterm_Gain = 1.0F;/* Referenced by: '<S338>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_FuzzyEterm_Gain = 1.0F;/* Referenced by: '<S339>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_FuzzyOut_Gain = 1.0F;/* Referenced by: '<S340>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_K_FuzzyWghtMx = 1.0F;/* Referenced by: '<S486>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_P_HVAC_CompPwrUsage_Dial =
    0.0F;                              /* Referenced by: '<S30>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KeACCR_P_HVAC_CompPwrUsage_FailSafe = 0.0F;/* Referenced by: '<S31>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_3

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_P_HVAC_CompPwrUsage_NFDial =
    0.0F;                              /* Referenced by: '<S1078>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_P_PWRbudget_MinHi = 700.0F;/* Referenced by: '<S836>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_P_PWRbudget_MinLo = 600.0F;/* Referenced by: '<S837>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_Pct_EvapErrIreset = 0.0F;/* Referenced by: '<S691>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_T_AmbAirTemp_Th = -15.0F;/* Referenced by: '<S902>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_T_AmbTemp_Default = 35.0F;/* Referenced by: '<S686>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_T_CompBoardTmp_Th = -15.0F;/* Referenced by: '<S903>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_T_CompSpdFuzzy_AmbHigh =
    32.0F;                             /* Referenced by:
                                        * '<S356>/Calib'
                                        * '<S487>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_T_CompSpdFuzzy_AmbLow =
    30.0F;                             /* Referenced by:
                                        * '<S357>/Calib'
                                        * '<S488>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_T_DMPIEvapTempTgtMax =
    12.0F;                             /* Referenced by: '<S715>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_T_DMPIEvapTempTgtMin = 0.0F;/* Referenced by: '<S716>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_ACCompallow_Ovrd = 0;/* Referenced by: '<S122>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_ACPresCtrlEna_HiPresDtct =
    1;                                 /* Referenced by: '<S202>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT)
    KeACCR_b_ACSucPresCtrlEna_LoPresDtct = 0;/* Referenced by: '<S217>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_3

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_AC_ClutchReq_NF = 0;/* Referenced by: '<S1079>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_AC_Clutchreq_Ovrd = 0;/* Referenced by: '<S918>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_AC_CompEnb_Dial = 0;/* Referenced by: '<S860>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_AC_CompEnb_SD = 0;/* Referenced by: '<S26>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_AC_CompEnb_SelDial = 0;/* Referenced by: '<S861>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_AC_Comp_SelDial = 0;/* Referenced by: '<S80>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_AC_FltState_EACLocEnb = 1;/* Referenced by: '<S883>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_ACclutchReq_D = 0;/* Referenced by: '<S24>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_ACclutchReq_SD = 0;/* Referenced by: '<S25>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_ActRemComp_Decid_Dial = 0;/* Referenced by: '<S82>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_ActRemComp_Decid_SD = 0;/* Referenced by: '<S83>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_AllwHPboostdrngCool = 1;/* Referenced by: '<S778>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_AlternatorMode_Enbl = 0;/* Referenced by: '<S107>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_AmbAirTempFA_Ovrd = 1;/* Referenced by: '<S904>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_BatTempNotOpt_Chk_En = 0;/* Referenced by:
                                                                      * '<S1004>/Calib'
                                                                      * '<S285>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_BattAllowed_D = 0;/* Referenced by: '<S84>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_BattAllowed_SD = 0;/* Referenced by: '<S85>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_BattTher_ActCool_Dial = 0;/* Referenced by:
                                                                      * '<S733>/Calib'
                                                                      * '<S1021>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_BattTher_ActvCool_SD = 1;/* Referenced by:
                                                                      * '<S734>/Calib'
                                                                      * '<S1022>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_CabAllowed_D = 0;/* Referenced by: '<S86>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_CabAllowed_SD = 0;/* Referenced by: '<S87>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_CabReq_NotAllow_Dial = 0;/* Referenced by: '<S94>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_CabReq_NotAllow_SelDial =
    1;                                 /* Referenced by: '<S95>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_CellOvertemp_SelDial = 0;/* Referenced by: '<S88>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_ComRPM_acp_PIDsum_SD = 1;/* Referenced by:
                                                                      * '<S849>/Calib'
                                                                      * '<S1066>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_CommBussOff_Dial = 1;/* Referenced by: '<S884>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_CompBattRtLim_Slct = 1;/* Referenced by:
                                                                      * '<S126>/Calib'
                                                                      * '<S925>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_CompBoardTmpFA_Ovvrd = 0;/* Referenced by: '<S905>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_CompRPM_SlctApp = 0;/* Referenced by: '<S154>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_CompRPM_SlctCal = 0;/* Referenced by:
                                                                      * '<S155>/Calib'
                                                                      * '<S954>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_CompRPM_acpMin_SD = 0;/* Referenced by:
                                                                      * '<S850>/Calib'
                                                                      * '<S1067>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_CompSpdFdb_FA_En = 1;/* Referenced by: '<S909>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT)
    KeACCR_b_CompSpdVsEvapTempError_Slct = 0;/* Referenced by: '<S692>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_CompTempChk_SD = 1;/* Referenced by: '<S906>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_CompressorSpd_SelDial = 0;/* Referenced by: '<S35>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_DMPICompRPMLim_Ena = 0;/* Referenced by: '<S856>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_DMPIEvapTempTgtCor_Ena =
    1;                                 /* Referenced by: '<S717>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_DisFuzzyControls = 0;/* Referenced by: '<S735>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_DisableOilMig_ACPresHi =
    1;                                 /* Referenced by: '<S194>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_DisableOilMig_SucPresLo =
    0;                                 /* Referenced by: '<S195>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_DisarmVlv_ClutchSts1 = 1;/* Referenced by: '<S1026>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_DisarmVlv_ClutchSts2 = 1;/* Referenced by: '<S1027>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_DisarmVlv_ClutchTmrExprd =
    0;                                 /* Referenced by: '<S1028>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_DisblComp4HTCVRA = 0;/* Referenced by: '<S251>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_DisblEXVPressSens_FltDtct
    = 1;                               /* Referenced by: '<S245>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_DisblEXVPressnsr_FA = 1;/* Referenced by: '<S246>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_DisblEXVTempSens_FltDtct =
    1;                                 /* Referenced by: '<S247>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_DisblEXVTempsnsr_FA = 1;/* Referenced by: '<S248>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_Dischrg_BatAndCabCndtn_En
    = 1;                               /* Referenced by: '<S286>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT)
    KeACCR_b_DisregardBattAllowed_DCCooling = 1;/* Referenced by: '<S1010>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT)
    KeACCR_b_DisregardEngOnCheck_DCCooling = 1;/* Referenced by: '<S1011>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_DisregardPSA_DCCooling =
    1;                                 /* Referenced by: '<S1012>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT)
    KeACCR_b_DsblAC_ECVDCurrentAct_FA_Ovrrd = 1;/* Referenced by: '<S910>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_DsblAmbAir_TmpChk = 0;/* Referenced by: '<S907>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT)
    KeACCR_b_DsblComp4Batt_BPCM_LINBusOff = 1;/* Referenced by: '<S257>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_DsblComp4Batt_BPCM_LOC =
    1;                                 /* Referenced by: '<S258>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_DsblComp4Batt_ChlrSB = 1;/* Referenced by: '<S241>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_DsblComp4Batt_LTAPDryRun =
    1;                                 /* Referenced by: '<S268>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_DsblComp4Batt_LTAPPerf =
    1;                                 /* Referenced by: '<S269>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_DsblComp4Batt_LTAP_LOC =
    1;                                 /* Referenced by: '<S270>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_DsblComp4Batt_ShrtGnd = 1;/* Referenced by: '<S242>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_DsblComp4Batt_ePTBusOff =
    1;                                 /* Referenced by: '<S259>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_DsblComp4Cab_EvapClosed =
    1;                                 /* Referenced by: '<S736>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_DsblComp4Cab_EvapShrtGnd =
    1;                                 /* Referenced by: '<S737>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_DsblComp4Cab_EvapShrtHi =
    1;                                 /* Referenced by: '<S738>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_DsblCompBoard_TmpChk = 0;/* Referenced by: '<S908>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_DsblEAC_ForBat_RAEn = 0;/* Referenced by: '<S252>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_DsblEAC_ForCab_RAEn = 0;/* Referenced by: '<S744>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_DsblEAC_HeatPmpRA_En = 0;/* Referenced by: '<S893>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_DsblEXV_LOC = 1;/* Referenced by: '<S249>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_Dsblrpmetc4HeatPmp = 0;/* Referenced by: '<S739>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_DsrgrdBattCond4CabNVH = 1;/* Referenced by:
                                                                      * '<S332>/Calib'
                                                                      * '<S776>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_EACPrefFlt_Dial = 1;/* Referenced by: '<S885>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_EACPrefFlt_En = 0;/* Referenced by: '<S886>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_ECVDMinSel_ClutchDiseng =
    0;                                 /* Referenced by: '<S1029>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_ECVDPreCharge_CurrentSel =
    0;                                 /* Referenced by: '<S1053>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_ECVD_CurrentTgt_SD = 0;/* Referenced by: '<S29>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_EXV_BattOT_RPM_Enbl = 1;/* Referenced by: '<S287>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_EnaFreezeIterm_ACPresHi =
    1;                                 /* Referenced by: '<S196>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_EnaFreezeIterm_SucPresLo =
    0;                                 /* Referenced by: '<S197>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_EnableEVAThrml_State = 0;/* Referenced by: '<S288>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_EnableEvapTempPIDFilter =
    1;                                 /* Referenced by: '<S693>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_EnbChillerNVHLimit = 1;/* Referenced by: '<S301>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_EnbOilMigratn4Cab = 1;/* Referenced by:
                                                                      * '<S797>/Calib'
                                                                      * '<S1038>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_EnbOilMigratnForBatt = 1;/* Referenced by: '<S798>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_EnbOilMigratnForHP = 1;/* Referenced by: '<S799>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_EnblClutchDelay = 0;/* Referenced by: '<S919>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_EnblFltrDerivECHTISErr =
    0;                                 /* Referenced by: '<S780>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_EnblPrcharge_mHEV = 1;/* Referenced by: '<S1054>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_Enbl_ITermFreeze = 1;/* Referenced by: '<S333>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_EvapItermhold = 1;/* Referenced by: '<S694>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT)
    KeACCR_b_FtEvapTmp_FA_DisAllowIterm = 0;/* Referenced by: '<S740>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT)
    KeACCR_b_FtEvapTmp_Tgt_FA_DisAllowIterm = 0;/* Referenced by: '<S741>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_HVAC_CompPwrUsage_FA_Dial
    = 0;                               /* Referenced by: '<S32>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_HVAC_CompPwrUsage_FA_SD =
    0;                                 /* Referenced by: '<S33>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_HVAC_CompPwrUsage_SelDial
    = 0;                               /* Referenced by: '<S34>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_HV_BatCntctrStat_SD = 0;/* Referenced by: '<S90>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_HeatPumpItermHold = 1;/* Referenced by: '<S781>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_HybSysSt_SD = 0;/* Referenced by: '<S92>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_IgnorBatThrml_State = 0;/* Referenced by:
                                                                      * '<S1005>/Calib'
                                                                      * '<S289>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_IgnrClngFltsBattOV = 0;/* Referenced by: '<S290>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_IgnrClngFltsNrmlOp = 0;/* Referenced by: '<S291>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_Ignr_ACShtdownReq_EXV = 0;/* Referenced by: '<S911>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_InFieldMode_Dial = 0;/* Referenced by: '<S65>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_InFieldMode_Slct = 0;/* Referenced by: '<S66>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_LIN2CommBusOff_Dial = 1;/* Referenced by: '<S887>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_LimitCheckSts_Dial = 0;/* Referenced by: '<S67>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_LimitCheckSts_Slct = 0;/* Referenced by: '<S68>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_ModEvapTempError_En = 0;/* Referenced by: '<S718>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_NewFuzzyEnbl = 0;/* Referenced by: '<S341>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_OilMigOpnVlv_Dial = 0;/* Referenced by: '<S37>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_OilMigOpnVlv_INIT = 0;/* Referenced by: '<S1086>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_3

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_OilMigOpnVlv_NFdial = 0;/* Referenced by: '<S1080>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_OilMigOpnVlv_SelDial = 0;/* Referenced by: '<S38>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_OverTempImminent_Dial = 0;/* Referenced by: '<S39>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_OverTempImminent_INIT = 0;/* Referenced by: '<S1087>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_3

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_OverTempImminent_NFdial =
    0;                                 /* Referenced by: '<S1081>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_OverTempImminent_SelDial =
    0;                                 /* Referenced by: '<S40>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_PPCTISTempCtrl_Ena = 0;/* Referenced by: '<S823>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_Prcharge4ClutchReq_mHEV =
    0;                                 /* Referenced by: '<S1055>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_PressurePIDCntrl_En = 1;/* Referenced by:
                                                                      * '<S135>/Calib'
                                                                      * '<S174>/Calib'
                                                                      * '<S932>/Calib'
                                                                      * '<S966>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_PropSysActv_Dial = 0;/* Referenced by: '<S96>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_PropSysActv_SelDial = 0;/* Referenced by: '<S97>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_PwrBdgtDstb_Slct = 0;/* Referenced by: '<S838>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_REMobey = 1;/* Referenced by:
                                                                    * '<S794>/Calib'
                                                                    * '<S1035>/Calib'
                                                                    */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_RPM_PwrBdgtMin_CalOn = 1;/* Referenced by:
                                                                      * '<S127>/Calib'
                                                                      * '<S926>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_RSVCompTransition_Dial =
    0;                                 /* Referenced by: '<S98>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_RSVCompTransition_SD = 0;/* Referenced by: '<S99>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_RedundantCommBusOff_Dial =
    0;                                 /* Referenced by: '<S888>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT)
    KeACCR_b_RedundantDsblComp4Batt_BPCM_LOC = 0;/* Referenced by: '<S260>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT)
    KeACCR_b_RedundantDsblComp4Batt_ePTBusOff = 0;/* Referenced by: '<S261>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_RemoveNVHAATFA_Ovrd = 1;/* Referenced by:
                                                                      * '<S328>/Calib'
                                                                      * '<S772>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_RemoveNVHBlwFA_Ovrd = 1;/* Referenced by:
                                                                      * '<S329>/Calib'
                                                                      * '<S773>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_SelectOldComp_RPMTgt = 0;/* Referenced by:
                                                                      * '<S141>/Calib'
                                                                      * '<S941>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT)
    KeACCR_b_UseTPCRBattErr4CompSpd_PerWup = 1;/* Referenced by: '<S292>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_VehSpd_FA_Dial = 0;/* Referenced by: '<S100>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_VehSpd_FA_SD = 0;/* Referenced by: '<S101>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_VehicleSpeed_SelDial = 0;/* Referenced by: '<S102>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_3

static volatile CONST(boolean, ACCR_VAR_INIT) KeACCR_b_eAC4CabInhibtd_NF = 0;/* Referenced by: '<S1082>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_dT_CellOvertemp_Dial = 0.0F;/* Referenced by: '<S89>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_dT_EvapErrResetIhigh = 0.0F;/* Referenced by: '<S742>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_dT_EvapErrResetIlow = 0.0F;/* Referenced by: '<S743>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_dT_EvapTempError_LSP =
    -0.5F;                             /* Referenced by: '<S719>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_dT_EvapTempError_Offset =
    1.0F;                              /* Referenced by: '<S720>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_dT_EvapTempError_RSP = 0.5F;/* Referenced by: '<S721>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_dT_PPCTISTempErrThres =
    0.0F;                              /* Referenced by: '<S824>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_dt_CmpSucPres = 0.1F;/* Referenced by: '<S218>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_dt_FuzzyDterm_ts = 0.1F;/* Referenced by: '<S342>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_dt_PPCTISTempCtrl = 0.1F;/* Referenced by: '<S825>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_dt_PressureCntrl = 0.1F;/* Referenced by:
                                                                      * '<S203>/Calib'
                                                                      * '<S981>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(TeACCR_e_AC_CompEnb, ACCR_VAR_INIT)
    KeACCR_e_AC_CompEnb_Dial = CeACCR_e_ACComp_Disable;/* Referenced by: '<S27>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(TeTHMR_e_ACCompState, ACCR_VAR_INIT) KeACCR_e_AC_Comp_Dial
    = CeTHMR_e_ACOff;                  /* Referenced by: '<S81>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(TeHVTR_e_HV_BatCntctrStat, ACCR_VAR_INIT)
    KeACCR_e_HV_BatCntctrStat_Dial = CeHVTR_e_Open;/* Referenced by: '<S91>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(TeHPMR_e_HybSysState, ACCR_VAR_INIT) KeACCR_e_HybSysSt_D =
    CeHPMR_e_POWERUP;                  /* Referenced by: '<S93>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_ACOilMigRPM = 5000.0F;/* Referenced by:
                                                                      * '<S815>/Calib'
                                                                      * '<S1050>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_AllwOilMigForLoCmprSpdThd
    = 2000.0F;                         /* Referenced by: '<S816>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_BattLpEmrgencyCool =
    4000.0F;                           /* Referenced by: '<S1015>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_3

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_ChillerV_OpenMaxRPM_NF =
    0.0F;                              /* Referenced by: '<S1083>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_ChillerVlvOpenMaxRPM =
    2500.0F;                           /* Referenced by:
                                        * '<S108>/Calib'
                                        * '<S14>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_CmpSucPres_FinMn = 0.0F;/* Referenced by: '<S219>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_CmpSucPres_FinMx =
    8400.0F;                           /* Referenced by: '<S220>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_CmpSucPres_IV = 0.0F;/* Referenced by: '<S221>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_CmpSucPres_MnRPM = 0.0F;/* Referenced by: '<S222>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_CmpSucPres_MxRPM =
    8600.0F;                           /* Referenced by: '<S223>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_CompBattRtLimDown =
    -8600.0F;                          /* Referenced by: '<S136>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_CompBattRtLimUp = 15.0F;/* Referenced by:
                                                                      * '<S128>/Calib'
                                                                      * '<S933>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_CompRPMITerm_IV = 0.0F;/* Referenced by: '<S343>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_CompRPMITermmin_Fuzzy =
    0.0F;                              /* Referenced by: '<S344>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_CompRPMMin2 = 960.0F;/* Referenced by: '<S109>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_CompRPMdefault = 0.0F;/* Referenced by:
                                                                      * '<S156>/Calib'
                                                                      * '<S955>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_CompRPMmax = 8400.0F;/* Referenced by:
                                                                      * '<S110>/Calib'
                                                                      * '<S826>/Calib'
                                                                      * '<S204>/Calib'
                                                                      * '<S853>/Calib'
                                                                      * '<S982>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_CompRPMmin = 0.0F;/* Referenced by:
                                                                      * '<S827>/Calib'
                                                                      * '<S205>/Calib'
                                                                      * '<S854>/Calib'
                                                                      * '<S983>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_CompRtLimRPM = 2500.0F;/* Referenced by:
                                                                      * '<S129>/Calib'
                                                                      * '<S934>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_CompSpd_DeadbandMinTh =
    2000.0F;                           /* Referenced by: '<S47>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_CompSpd_MinOnCmd = 100.0F;/* Referenced by: '<S817>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_3

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_CompSpd_NFdial = 0.0F;/* Referenced by: '<S1084>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_CompSpd_max_Deadband_RPM =
    2900.0F;                           /* Referenced by: '<S48>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_CompSpd_min_Deadband_RPM =
    2100.0F;                           /* Referenced by: '<S49>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_CompressorSpd_Dial = 0.0F;/* Referenced by: '<S36>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_DVC_EACEnableCmd_Limit =
    1.0F;                              /* Referenced by: '<S43>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_DeIceRPM_Default =
    2500.0F;                           /* Referenced by: '<S764>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_DefaultChillerRPM =
    3000.0F;                           /* Referenced by: '<S293>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_EACEnableCmd_Limit = 1.0F;/* Referenced by: '<S123>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_EXVPresSnsr_RA_RPM =
    1000.0F;                           /* Referenced by: '<S294>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_EvapTempCntrl_MaxRPM =
    8000.0F;                           /* Referenced by: '<S695>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_EvapTempCntrl_MinRPM =
    0.0F;                              /* Referenced by: '<S696>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_FtERVShutMaxRPM = 2500.0F;/* Referenced by:
                                                                      * '<S111>/Calib'
                                                                      * '<S15>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_3

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_FtERVShutMaxRPM_NFdial =
    0.0F;                              /* Referenced by: '<S1085>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_HeatPumpITermInit = 0.0F;/* Referenced by: '<S782>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_HeatPumpMaxRPM = 8400.0F;/* Referenced by:
                                                                      * '<S763>/Calib'
                                                                      * '<S766>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_HeatPumpMinRPM = 0.0F;/* Referenced by: '<S783>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_HldOilMigForHiCmprSpdThd =
    5000.0F;                           /* Referenced by: '<S818>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_PPCTISTempCtrl_IV = 0.0F;/* Referenced by: '<S828>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_PPCTISTempCtrl_MaxRPM =
    8600.0F;                           /* Referenced by: '<S829>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_PPCTISTempCtrl_MinRPM =
    0.0F;                              /* Referenced by: '<S830>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_PressureCntrl_IV = 0.0F;/* Referenced by:
                                                                      * '<S206>/Calib'
                                                                      * '<S984>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_PressureCntrl_MaxRPM =
    8600.0F;                           /* Referenced by:
                                        * '<S207>/Calib'
                                        * '<S985>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_PressureCntrl_MinRPM =
    0.0F;                              /* Referenced by:
                                        * '<S208>/Calib'
                                        * '<S986>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_RPMACHiPrRetract = 500.0F;/* Referenced by: '<S229>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_RPMCompSpdInc = 200.0F;/* Referenced by: '<S309>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_RPMCompSpd_Batt_OV =
    2500.0F;                           /* Referenced by:
                                        * '<S1006>/Calib'
                                        * '<S295>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_RPMCompSpd_Boost =
    1000.0F;                           /* Referenced by:
                                        * '<S1007>/Calib'
                                        * '<S296>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_RPM_PwrBdgtComp_Off =
    0.0F;                              /* Referenced by: '<S839>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_RPMacpPID_Dial = 0.0F;/* Referenced by:
                                                                      * '<S175>/Calib'
                                                                      * '<S967>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_n_RPMacp_Dial = 8400.0F;/* Referenced by:
                                                                      * '<S176>/Calib'
                                                                      * '<S968>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_p_ACHiPrDisengage = 2900.0F;/* Referenced by:
                                                                      * '<S177>/Calib'
                                                                      * '<S969>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_p_ACHiPrEngage = 2450.0F;/* Referenced by:
                                                                      * '<S178>/Calib'
                                                                      * '<S970>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_p_ACHiPrRetract = 2600.0F;/* Referenced by:
                                                                      * '<S230>/Calib'
                                                                      * '<S993>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_p_ACLowPrDisengage = 200.0F;/* Referenced by:
                                                                      * '<S179>/Calib'
                                                                      * '<S971>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_p_ACLowPrEngage = 270.0F;/* Referenced by:
                                                                      * '<S180>/Calib'
                                                                      * '<S972>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_p_ACPrTarget = 3000.0F;/* Referenced by:
                                                                      * '<S209>/Calib'
                                                                      * '<S987>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_p_ACPresHiDtct_LSP =
    2100.0F;                           /* Referenced by: '<S190>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_p_ACPresHiDtct_RSP =
    2200.0F;                           /* Referenced by: '<S191>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_p_ACSucPresLoDtct_LSP =
    100.0F;                            /* Referenced by: '<S192>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_p_ACSucPresLoDtct_RSP =
    90.0F;                             /* Referenced by: '<S193>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_p_ACSuctnPrTarget = 80.0F;/* Referenced by: '<S224>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_p_SatLowPrDisengageHP =
    200.0F;                            /* Referenced by: '<S181>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_r_CompPulleyRatio = 0.75F;/* Referenced by: '<S1016>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_t_ACHiPrCutoffTime = 25.0F;/* Referenced by:
                                                                      * '<S182>/Calib'
                                                                      * '<S973>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_t_ACHiPrRetractTime = 8.0F;/* Referenced by:
                                                                      * '<S231>/Calib'
                                                                      * '<S994>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_t_ClutchEngDelayTime = 5.0F;/* Referenced by: '<S920>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_t_CompFaultDelayTime =
    10.0F;                             /* Referenced by:
                                        * '<S754>/Calib'
                                        * '<S1030>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_t_CompSpdIncTime = 15.0F;/* Referenced by: '<S310>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_t_FilterDerivEvapTemp =
    3.0F;                              /* Referenced by: '<S697>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_t_FltrDerivECHTISErr = 1.0F;/* Referenced by: '<S784>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_t_FuzzyDterm_T = 1.0F;/* Referenced by: '<S345>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_t_PreChargeTime = 900.0F;/* Referenced by: '<S1056>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_v_VehicleSpeed_Dial = 0.0F;/* Referenced by: '<S103>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KeACCR_v_VehicleSpeed_FailSafe =
    0.0F;                              /* Referenced by: '<S104>/Calib' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KtACCR_K_CompRPMITermGain_Fuzzy[36]
    =
{
    500.0F, 500.0F, 500.0F, 500.0F, 500.0F, 500.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F,
    3.0F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F,
    0.75F, 0.75F, 0.75F, 0.75F, 0.75F, 0.75F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S350>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KtACCR_K_CompRPMITermGain_Fuzzy_EcoMode[36] =
{
    500.0F, 500.0F, 500.0F, 500.0F, 500.0F, 500.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F,
    3.0F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F,
    0.75F, 0.75F, 0.75F, 0.75F, 0.75F, 0.75F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S351>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KtACCR_K_CompSpdHCCTISErrKi[48] =
{
    50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 9.0F, 9.0F, 9.0F, 9.0F, 9.0F, 9.0F, 9.0F, 9.0F, 3.0F, 3.0F,
    3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F
} ;                                    /* Referenced by: '<S785>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KtACCR_K_CompSpdHCCTISErrKp[48] =
{
    2400.0F, 2400.0F, 2400.0F, 2400.0F, 2400.0F, 2400.0F, 2400.0F, 2400.0F,
    600.0F, 600.0F, 600.0F, 600.0F, 600.0F, 600.0F, 600.0F, 600.0F, 600.0F,
    600.0F, 600.0F, 600.0F, 600.0F, 600.0F, 600.0F, 600.0F, 375.0F, 375.0F,
    375.0F, 375.0F, 375.0F, 375.0F, 375.0F, 375.0F, 360.0F, 360.0F, 360.0F,
    360.0F, 360.0F, 360.0F, 360.0F, 360.0F, 180.0F, 180.0F, 180.0F, 180.0F,
    180.0F, 180.0F, 180.0F, 180.0F
} ;                                    /* Referenced by: '<S786>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KtACCR_K_CompSpdVsEvapTempErrorKd
    [6] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S698>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KtACCR_K_CompSpdVsEvapTempErrorKd_Amb[48] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S699>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KtACCR_K_CompSpdVsEvapTempErrorKi
    [6] =
{
    50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F
} ;                                    /* Referenced by: '<S700>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KtACCR_K_CompSpdVsEvapTempErrorKi_Amb[48] =
{
    50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 9.0F, 9.0F, 9.0F, 9.0F, 9.0F, 9.0F, 9.0F, 9.0F, 3.0F, 3.0F,
    3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F
} ;                                    /* Referenced by: '<S701>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KtACCR_K_CompSpdVsEvapTempErrorKi_Amb_EcoMode[48] =
{
    50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 50.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 9.0F, 9.0F, 9.0F, 9.0F, 9.0F, 9.0F, 9.0F, 9.0F, 3.0F, 3.0F,
    3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F
} ;                                    /* Referenced by: '<S702>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KtACCR_K_CompSpdVsEvapTempErrorKp
    [6] =
{
    600.0F, 600.0F, 600.0F, 600.0F, 600.0F, 600.0F
} ;                                    /* Referenced by: '<S703>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KtACCR_K_CompSpdVsEvapTempErrorKp_Amb[48] =
{
    2400.0F, 2400.0F, 2400.0F, 2400.0F, 2400.0F, 2400.0F, 2400.0F, 2400.0F,
    600.0F, 600.0F, 600.0F, 600.0F, 600.0F, 600.0F, 600.0F, 600.0F, 600.0F,
    600.0F, 600.0F, 600.0F, 600.0F, 600.0F, 600.0F, 600.0F, 375.0F, 375.0F,
    375.0F, 375.0F, 375.0F, 375.0F, 375.0F, 375.0F, 360.0F, 360.0F, 360.0F,
    360.0F, 360.0F, 360.0F, 360.0F, 360.0F, 180.0F, 180.0F, 180.0F, 180.0F,
    180.0F, 180.0F, 180.0F, 180.0F
} ;                                    /* Referenced by: '<S704>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KtACCR_K_CompSpdVsEvapTempErrorKp_Amb_EcoMode[48] =
{
    2400.0F, 2400.0F, 2400.0F, 2400.0F, 2400.0F, 2400.0F, 2400.0F, 2400.0F,
    600.0F, 600.0F, 600.0F, 600.0F, 600.0F, 600.0F, 600.0F, 600.0F, 600.0F,
    600.0F, 600.0F, 600.0F, 600.0F, 600.0F, 600.0F, 600.0F, 375.0F, 375.0F,
    375.0F, 375.0F, 375.0F, 375.0F, 375.0F, 375.0F, 360.0F, 360.0F, 360.0F,
    360.0F, 360.0F, 360.0F, 360.0F, 360.0F, 180.0F, 180.0F, 180.0F, 180.0F,
    180.0F, 180.0F, 180.0F, 180.0F
} ;                                    /* Referenced by: '<S705>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KtACCR_K_FuzzyMap_HotAmbient[64] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 1.0F, 3.0F, 4.0F,
    6.0F, 8.0F, 10.0F, 0.0F, 1.0F, 2.0F, 3.0F, 4.0F, 6.0F, 9.0F, 10.0F, 0.0F,
    1.0F, 3.0F, 4.0F, 6.0F, 8.0F, 9.0F, 10.0F, 0.0F, 2.0F, 3.0F, 5.0F, 7.0F,
    9.0F, 9.0F, 10.0F, 0.0F, 2.0F, 5.0F, 7.0F, 8.0F, 9.0F, 9.0F, 10.0F, 0.0F,
    3.0F, 5.0F, 7.0F, 8.0F, 9.0F, 10.0F, 10.0F, 0.0F, 3.0F, 2.0F, 5.0F, 6.0F,
    7.0F, 7.0F, 7.0F
} ;                                    /* Referenced by: '<S684>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KtACCR_K_FuzzyMap_IdealAmb[64] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 1.0F, 3.0F, 4.0F,
    6.0F, 8.0F, 10.0F, 0.0F, 1.0F, 2.0F, 3.0F, 4.0F, 6.0F, 9.0F, 10.0F, 0.0F,
    1.0F, 3.0F, 4.0F, 6.0F, 8.0F, 9.0F, 10.0F, 0.0F, 2.0F, 3.0F, 5.0F, 7.0F,
    9.0F, 9.0F, 10.0F, 0.0F, 2.0F, 5.0F, 7.0F, 8.0F, 9.0F, 9.0F, 10.0F, 0.0F,
    3.0F, 5.0F, 7.0F, 8.0F, 9.0F, 10.0F, 10.0F, 0.0F, 3.0F, 2.0F, 5.0F, 6.0F,
    7.0F, 7.0F, 7.0F
} ;                                    /* Referenced by: '<S685>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KtACCR_T_DMPIEvapTempTgtCor[30] =
{
    0.0F, 0.0F, 1.0F, 7.0F, 7.0F, 0.0F, 0.0F, 1.0F, 7.0F, 7.0F, 0.0F, 0.0F, 1.0F,
    7.0F, 7.0F, 0.0F, 0.0F, 1.0F, 7.0F, 7.0F, 0.0F, 0.0F, 0.5F, 5.0F, 7.0F, 0.0F,
    0.0F, 0.5F, 5.0F, 7.0F
} ;                                    /* Referenced by: '<S722>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KtACCR_T_PPCTISTempTgtVehSpd[5] =
{
    80.0F, 80.0F, 80.0F, 80.0F, 80.0F
} ;                                    /* Referenced by: '<S831>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KtACCR_dT_EvapTempErrVsCellTemp_RSP[6] =
{
    0.0F, 0.0F, 2.0F, 2.0F, 2.0F, 2.0F
} ;                                    /* Referenced by: '<S723>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KtACCR_dT_EvapTempErrorVsCellTemp_LSP[6] =
{
    0.0F, 0.0F, -2.0F, -2.0F, -2.0F, -2.0F
} ;                                    /* Referenced by: '<S724>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KtACCR_k_rpmcurrentconversn[12] =
{
    0.0F, 0.2F, 0.25F, 0.29F, 0.31F, 0.32F, 0.4F, 0.46F, 0.51F, 0.6F, 0.7F, 0.8F
} ;                                    /* Referenced by:
                                        * '<S16>/Vector'
                                        * '<S935>/Vector'
                                        * '<S1063>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KtACCR_n_ChillerRPMlookup[7] =
{
    1500.0F, 1551.0F, 1600.0F, 1650.0F, 1700.0F, 1750.0F, 1750.0F
} ;                                    /* Referenced by: '<S297>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KtACCR_n_ChillerRPMlookup_PerWup[4]
    =
{
    0.0F, 1000.0F, 3000.0F, 3000.0F
} ;                                    /* Referenced by: '<S298>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KtACCR_n_CompBattRtLimUp_Amb[6] =
{
    50.0F, 50.0F, 60.0F, 1000.0F, 1000.0F, 1000.0F
} ;                                    /* Referenced by: '<S130>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KtACCR_n_CompRPMITermmax_Fuzzy[5] =
{
    8400.0F, 8400.0F, 8400.0F, 8400.0F, 8400.0F
} ;                                    /* Referenced by: '<S346>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KtACCR_n_CompRPMMaxEngSpd[5] =
{
    8400.0F, 8400.0F, 8400.0F, 6500.0F, 5500.0F
} ;                                    /* Referenced by: '<S1017>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KtACCR_n_CompRPMMaxVehSpd[5] =
{
    5000.0F, 5000.0F, 6000.0F, 8600.0F, 8600.0F
} ;                                    /* Referenced by: '<S857>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KtACCR_n_CompRtLimRPM_Amb[6] =
{
    25.0F, 25.0F, 25.0F, 25.0F, 25.0F, 25.0F
} ;                                    /* Referenced by: '<S131>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KtACCR_n_CompSpdLim_HeatPumpNVH[48]
    =
{
    8400.0F, 8400.0F, 8400.0F, 8400.0F, 8400.0F, 8400.0F, 8400.0F, 8400.0F,
    8400.0F, 8400.0F, 8400.0F, 8400.0F, 8400.0F, 8400.0F, 8400.0F, 8400.0F,
    8400.0F, 8400.0F, 8400.0F, 8400.0F, 8400.0F, 8400.0F, 8400.0F, 8400.0F,
    8400.0F, 8400.0F, 8400.0F, 8400.0F, 8400.0F, 8400.0F, 8400.0F, 8400.0F,
    8400.0F, 8400.0F, 8400.0F, 8400.0F, 8400.0F, 8400.0F, 8400.0F, 8400.0F,
    8400.0F, 8400.0F, 8400.0F, 8400.0F, 8400.0F, 8400.0F, 8400.0F, 8400.0F
} ;                                    /* Referenced by: '<S769>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KtACCR_n_CompSpdLim_NVH[48] =
{
    1000.0F, 1000.0F, 2200.0F, 3300.0F, 4100.0F, 4900.0F, 5600.0F, 7500.0F,
    1000.0F, 1000.0F, 2200.0F, 3300.0F, 4100.0F, 4900.0F, 5600.0F, 7500.0F,
    1000.0F, 1000.0F, 2200.0F, 3300.0F, 4100.0F, 4900.0F, 5600.0F, 7500.0F,
    1000.0F, 1000.0F, 2200.0F, 3300.0F, 4100.0F, 4900.0F, 5600.0F, 7500.0F,
    1000.0F, 1000.0F, 2200.0F, 3300.0F, 4100.0F, 4900.0F, 5600.0F, 7500.0F,
    1000.0F, 1000.0F, 2200.0F, 3300.0F, 4100.0F, 4900.0F, 5600.0F, 7500.0F
} ;                                    /* Referenced by: '<S325>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KtACCR_n_CompmSpd_Hot_Amb[36] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 5400.0F, 1000.0F, 5400.0F,
    4200.0F, 0.0F, 1000.0F, 6000.0F, 4200.0F, 1000.0F, 6000.0F, 0.0F, 1000.0F,
    8400.0F, 6000.0F, 4200.0F, 8400.0F, 0.0F, 0.0F, 4200.0F, 2500.0F, 0.0F,
    6000.0F, 0.0F, 1000.0F, 6000.0F, 4200.0F, 2500.0F, 8400.0F
} ;                                    /* Referenced by: '<S414>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KtACCR_n_CompmSpd_Hot_Amb_EcoMode
    [36] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 5400.0F, 1000.0F, 5400.0F,
    4200.0F, 0.0F, 1000.0F, 6000.0F, 4200.0F, 1000.0F, 6000.0F, 0.0F, 1000.0F,
    8400.0F, 6000.0F, 4200.0F, 8400.0F, 0.0F, 0.0F, 4200.0F, 2500.0F, 0.0F,
    6000.0F, 0.0F, 1000.0F, 6000.0F, 4200.0F, 2500.0F, 8400.0F
} ;                                    /* Referenced by: '<S415>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KtACCR_n_CompmSpd_Ideal_Amb[36] =
{
    -1000.0F, -1000.0F, 860.0F, 0.0F, 1100.0F, 2000.0F, -1000.0F, -1000.0F,
    860.0F, 0.0F, 1100.0F, 2000.0F, -1000.0F, -1000.0F, 860.0F, 0.0F, 1100.0F,
    2000.0F, -1000.0F, -1000.0F, 860.0F, 0.0F, 1100.0F, 2000.0F, -1000.0F,
    -1000.0F, 860.0F, 0.0F, 1100.0F, 2000.0F, -1000.0F, -1000.0F, 860.0F, 0.0F,
    1100.0F, 2000.0F
} ;                                    /* Referenced by: '<S416>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KtACCR_n_CompmSpd_Ideal_Amb_EcoMode[36] =
{
    -1000.0F, -1000.0F, 860.0F, 0.0F, 1100.0F, 2000.0F, -1000.0F, -1000.0F,
    860.0F, 0.0F, 1100.0F, 2000.0F, -1000.0F, -1000.0F, 860.0F, 0.0F, 1100.0F,
    2000.0F, -1000.0F, -1000.0F, 860.0F, 0.0F, 1100.0F, 2000.0F, -1000.0F,
    -1000.0F, 860.0F, 0.0F, 1100.0F, 2000.0F, -1000.0F, -1000.0F, 860.0F, 0.0F,
    1100.0F, 2000.0F
} ;                                    /* Referenced by: '<S417>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KtACCR_n_DMPICompRPMMax[30] =
{
    7600.0F, 7000.0F, 6500.0F, 6000.0F, 5500.0F, 8400.0F, 7000.0F, 6500.0F,
    6000.0F, 5500.0F, 8400.0F, 7000.0F, 6500.0F, 6000.0F, 5500.0F, 8400.0F,
    7000.0F, 6500.0F, 6000.0F, 5500.0F, 8400.0F, 7000.0F, 6500.0F, 6000.0F,
    5500.0F, 8400.0F, 7000.0F, 6500.0F, 6000.0F, 5500.0F
} ;                                    /* Referenced by: '<S858>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KtACCR_n_EVA_ChillerRPMlookup[7] =
{
    1500.0F, 1551.0F, 1600.0F, 1650.0F, 1700.0F, 1750.0F, 1750.0F
} ;                                    /* Referenced by: '<S299>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KtACCR_n_EXV_ChillerRPMlookup[7] =
{
    200.0F, 300.0F, 400.0F, 500.0F, 600.0F, 700.0F, 800.0F
} ;                                    /* Referenced by: '<S300>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KtACCR_n_HPEvapFrzRPMLim[7] =
{
    1000.0F, 3000.0F, 7600.0F, 8400.0F, 8400.0F, 8400.0F, 8400.0F
} ;                                    /* Referenced by: '<S767>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KtACCR_n_PWRbudgetRPMlookup[35] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1262.84766F, 901.956F, 509.528F, 551.616F,
    187.688F, 2813.33228F, 2366.55591F, 1723.52795F, 1131.61206F, 859.635F,
    5305.53662F, 4113.13F, 3911.52808F, 2972.89429F, 2038.07239F, 7173.11084F,
    6439.54297F, 6501.96924F, 4937.61621F, 3431.68188F, 8028.51F, 7195.13F,
    8243.46875F, 7213.51807F, 5339.67773F, 8400.0F, 8136.13F, 8400.0F, 8400.0F,
    7307.70313F
} ;                                    /* Referenced by: '<S840>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KtACCR_n_RPMLimitChargingLvlNVH[14]
    =
{
    0.0F, 0.0F, 800.0F, 800.0F, 1000.0F, 1000.0F, 1000.0F, 1500.0F, 1000.0F,
    1500.0F, 1000.0F, 1500.0F, 1000.0F, 1500.0F
} ;                                    /* Referenced by: '<S302>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KtACCR_p_Amb2SatPres[12] =
{
    -40.0F, -35.0F, -30.0F, -25.0F, -20.0F, -15.0F, -10.0F, -5.0F, 0.0F, 5.0F,
    10.0F, 15.0F
} ;                                    /* Referenced by: '<S183>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KxACCR_K_CompRPMITermGain_Fuzzy[6]
    =
{
    0.2F, 10.0F, 15.0F, 28.0F, 32.0F, 40.0F
} ;                                    /* Referenced by: '<S350>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KxACCR_K_CompRPMITermGain_Fuzzy_EcoMode[6] =
{
    0.2F, 10.0F, 15.0F, 28.0F, 32.0F, 40.0F
} ;                                    /* Referenced by: '<S351>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KxACCR_K_CompSpdHCCTISErrKi[8] =
{
    -5.0F, 0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F
} ;                                    /* Referenced by: '<S785>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KxACCR_K_CompSpdHCCTISErrKp[8] =
{
    -5.0F, 0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F
} ;                                    /* Referenced by: '<S786>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KxACCR_K_CompSpdVsEvapTempErrorKd
    [6] =
{
    -6.0F, -4.0F, 0.0F, 3.0F, 5.0F, 9.0F
} ;                                    /* Referenced by: '<S698>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KxACCR_K_CompSpdVsEvapTempErrorKd_Amb[8] =
{
    -5.0F, 0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F
} ;                                    /* Referenced by: '<S699>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KxACCR_K_CompSpdVsEvapTempErrorKi
    [6] =
{
    -6.0F, -4.0F, 0.0F, 3.0F, 5.0F, 9.0F
} ;                                    /* Referenced by: '<S700>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KxACCR_K_CompSpdVsEvapTempErrorKi_Amb[8] =
{
    -5.0F, 0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F
} ;                                    /* Referenced by: '<S701>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KxACCR_K_CompSpdVsEvapTempErrorKi_Amb_EcoMode[8] =
{
    -5.0F, 0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F
} ;                                    /* Referenced by: '<S702>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KxACCR_K_CompSpdVsEvapTempErrorKp
    [6] =
{
    -6.0F, -4.0F, 0.0F, 3.0F, 5.0F, 9.0F
} ;                                    /* Referenced by: '<S703>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KxACCR_K_CompSpdVsEvapTempErrorKp_Amb[8] =
{
    -5.0F, 0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F
} ;                                    /* Referenced by: '<S704>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KxACCR_K_CompSpdVsEvapTempErrorKp_Amb_EcoMode[8] =
{
    -5.0F, 0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F
} ;                                    /* Referenced by: '<S705>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KxACCR_K_FuzzyMap_HotAmbient[8] =
{
    0.9F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F, 7.0F
} ;                                    /* Referenced by: '<S684>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KxACCR_K_FuzzyMap_IdealAmb[8] =
{
    0.9F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F, 7.0F
} ;                                    /* Referenced by: '<S685>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KxACCR_T_DMPIEvapTempTgtCor[5] =
{
    20.0F, 60.0F, 61.0F, 65.0F, 70.0F
} ;                                    /* Referenced by: '<S722>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KxACCR_T_PPCTISTempTgtVehSpd[5] =
{
    0.0F, 15.0F, 16.0F, 25.0F, 200.0F
} ;                                    /* Referenced by: '<S831>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KxACCR_dT_EvapTempErrVsCellTemp_RSP[6] =
{
    -5.1F, 25.0F, 30.0F, 45.0F, 50.0F, 55.0F
} ;                                    /* Referenced by: '<S723>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KxACCR_dT_EvapTempErrorVsCellTemp_LSP[6] =
{
    -5.1F, 25.0F, 30.0F, 45.0F, 50.0F, 55.0F
} ;                                    /* Referenced by: '<S724>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KxACCR_k_rpmcurrentconversn[12] =
{
    0.0F, 960.0F, 1500.0F, 2100.0F, 2600.0F, 3200.0F, 4600.0F, 5300.0F, 6000.0F,
    7000.0F, 7900.0F, 8400.0F
} ;                                    /* Referenced by:
                                        * '<S16>/Vector'
                                        * '<S935>/Vector'
                                        * '<S1063>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KxACCR_n_ChillerRPMlookup[7] =
{
    0.001F, 1.0F, 2.0F, 3.0F, 4.0F, 6.0F, 8.0F
} ;                                    /* Referenced by: '<S297>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KxACCR_n_ChillerRPMlookup_PerWup[4]
    =
{
    0.0F, 0.001F, 2.0F, 4.0F
} ;                                    /* Referenced by: '<S298>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KxACCR_n_CompBattRtLimUp_Amb[6] =
{
    -5.1F, 25.0F, 30.0F, 45.0F, 50.0F, 55.0F
} ;                                    /* Referenced by: '<S130>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KxACCR_n_CompRPMITermmax_Fuzzy[5] =
{
    0.0F, 10.0F, 28.0F, 32.0F, 40.0F
} ;                                    /* Referenced by: '<S346>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KxACCR_n_CompRPMMaxEngSpd[5] =
{
    0.0F, 1500.0F, 4500.0F, 6500.0F, 8000.0F
} ;                                    /* Referenced by: '<S1017>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KxACCR_n_CompRPMMaxVehSpd[5] =
{
    0.0F, 15.0F, 16.0F, 25.0F, 200.0F
} ;                                    /* Referenced by: '<S857>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KxACCR_n_CompRtLimRPM_Amb[6] =
{
    -5.1F, 25.0F, 30.0F, 45.0F, 50.0F, 55.0F
} ;                                    /* Referenced by: '<S131>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KxACCR_n_CompSpdLim_HeatPumpNVH[8]
    =
{
    10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 90.0F
} ;                                    /* Referenced by: '<S769>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KxACCR_n_CompSpdLim_NVH[8] =
{
    10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 90.0F
} ;                                    /* Referenced by: '<S325>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KxACCR_n_CompmSpd_Hot_Amb[6] =
{
    0.9F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F
} ;                                    /* Referenced by: '<S414>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KxACCR_n_CompmSpd_Hot_Amb_EcoMode
    [6] =
{
    0.9F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F
} ;                                    /* Referenced by: '<S415>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KxACCR_n_CompmSpd_Ideal_Amb[6] =
{
    0.9F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F
} ;                                    /* Referenced by: '<S416>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KxACCR_n_CompmSpd_Ideal_Amb_EcoMode[6] =
{
    0.9F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F
} ;                                    /* Referenced by: '<S417>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KxACCR_n_DMPICompRPMMax[5] =
{
    61.0F, 62.0F, 63.0F, 64.0F, 65.0F
} ;                                    /* Referenced by: '<S858>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KxACCR_n_EVA_ChillerRPMlookup[7] =
{
    0.001F, 1.0F, 2.0F, 3.0F, 4.0F, 6.0F, 8.0F
} ;                                    /* Referenced by: '<S299>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KxACCR_n_EXV_ChillerRPMlookup[7] =
{
    0.001F, 1.0F, 2.0F, 3.0F, 4.0F, 6.0F, 8.0F
} ;                                    /* Referenced by: '<S300>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KxACCR_n_HPEvapFrzRPMLim[7] =
{
    2.0F, 3.0F, 4.0F, 5.0F, 6.0F, 7.0F, 8.0F
} ;                                    /* Referenced by: '<S767>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KxACCR_n_PWRbudgetRPMlookup[5] =
{
    1500.0F, 1800.0F, 2000.0F, 2500.0F, 2800.0F
} ;                                    /* Referenced by: '<S840>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(uint8, ACCR_VAR_INIT) KxACCR_n_RPMLimitChargingLvlNVH[2] =
{
    1U, 2U
} ;                                    /* Referenced by: '<S302>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KxACCR_p_Amb2SatPres[12] =
{
    62.4F, 79.0F, 99.1F, 122.9F, 150.9F, 183.7F, 221.8F, 265.6F, 315.8F, 372.9F,
    437.5F, 510.3F
} ;                                    /* Referenced by: '<S183>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KyACCR_K_CompRPMITermGain_Fuzzy[6]
    =
{
    -4.0F, -1.0F, 0.0F, 1.0F, 10.0F, 40.0F
} ;                                    /* Referenced by: '<S350>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KyACCR_K_CompRPMITermGain_Fuzzy_EcoMode[6] =
{
    -4.0F, -1.0F, 0.0F, 1.0F, 10.0F, 40.0F
} ;                                    /* Referenced by: '<S351>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KyACCR_K_CompSpdHCCTISErrKi[6] =
{
    -6.0F, -2.0F, 2.0F, 5.0F, 10.0F, 40.0F
} ;                                    /* Referenced by: '<S785>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KyACCR_K_CompSpdHCCTISErrKp[6] =
{
    -4.0F, 0.0F, 2.0F, 6.0F, 10.0F, 15.0F
} ;                                    /* Referenced by: '<S786>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KyACCR_K_CompSpdVsEvapTempErrorKd_Amb[6] =
{
    -5.0F, -3.0F, 0.0F, 3.0F, 5.0F, 9.0F
} ;                                    /* Referenced by: '<S699>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KyACCR_K_CompSpdVsEvapTempErrorKi_Amb[6] =
{
    -6.0F, -2.0F, 2.0F, 5.0F, 10.0F, 40.0F
} ;                                    /* Referenced by: '<S701>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KyACCR_K_CompSpdVsEvapTempErrorKi_Amb_EcoMode[6] =
{
    -6.0F, -2.0F, 2.0F, 5.0F, 10.0F, 40.0F
} ;                                    /* Referenced by: '<S702>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KyACCR_K_CompSpdVsEvapTempErrorKp_Amb[6] =
{
    -4.0F, 0.0F, 2.0F, 6.0F, 10.0F, 15.0F
} ;                                    /* Referenced by: '<S704>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KyACCR_K_CompSpdVsEvapTempErrorKp_Amb_EcoMode[6] =
{
    -4.0F, 0.0F, 2.0F, 6.0F, 10.0F, 15.0F
} ;                                    /* Referenced by: '<S705>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KyACCR_K_FuzzyMap_HotAmbient[8] =
{
    0.9F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F, 7.0F
} ;                                    /* Referenced by: '<S684>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KyACCR_K_FuzzyMap_IdealAmb[8] =
{
    0.9F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F, 7.0F
} ;                                    /* Referenced by: '<S685>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KyACCR_T_DMPIEvapTempTgtCor[6] =
{
    0.0F, 10.0F, 25.0F, 45.0F, 65.0F, 75.0F
} ;                                    /* Referenced by: '<S722>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KyACCR_n_CompSpdLim_HeatPumpNVH[6]
    =
{
    0.2F, 10.0F, 25.0F, 28.0F, 32.0F, 40.0F
} ;                                    /* Referenced by: '<S769>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KyACCR_n_CompSpdLim_NVH[6] =
{
    0.2F, 10.0F, 25.0F, 28.0F, 32.0F, 40.0F
} ;                                    /* Referenced by: '<S325>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KyACCR_n_CompmSpd_Hot_Amb[6] =
{
    0.9F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F
} ;                                    /* Referenced by: '<S414>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KyACCR_n_CompmSpd_Hot_Amb_EcoMode
    [6] =
{
    0.9F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F
} ;                                    /* Referenced by: '<S415>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KyACCR_n_CompmSpd_Ideal_Amb[6] =
{
    0.9F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F
} ;                                    /* Referenced by: '<S416>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT)
    KyACCR_n_CompmSpd_Ideal_Amb_EcoMode[6] =
{
    0.9F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F
} ;                                    /* Referenced by: '<S417>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KyACCR_n_DMPICompRPMMax[6] =
{
    0.0F, 10.0F, 25.0F, 45.0F, 65.0F, 75.0F
} ;                                    /* Referenced by: '<S858>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KyACCR_n_PWRbudgetRPMlookup[7] =
{
    0.001F, 600.0F, 1000.0F, 2000.0F, 3000.0F, 4000.0F, 5000.0F
} ;                                    /* Referenced by: '<S840>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static volatile CONST(float32, ACCR_VAR_INIT) KyACCR_n_RPMLimitChargingLvlNVH[7]
    =
{
    0.0F, 800.0F, 1000.0F, 1500.0F, 2000.0F, 3000.0F, 4000.0F
} ;                                    /* Referenced by: '<S302>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_ACCR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ACCR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VaACCR_K_FuzzyOutput[4];/* '<S347>/Product' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VaACCR_K_FuzzyOutputMap[4];/* '<S492>/Switch' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VaACCR_K_FuzzyOutputMap_HotAmb[4];/* '<S684>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VaACCR_K_FuzzyOutputMap_IdealAmb[4];/* '<S685>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VaACCR_K_WghtdAvg[4];/* '<S347>/Product1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VaACCR_n_FuzzyOutMappedRPMs[4];/* '<S492>/Selector1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCF_b_Comp_DVC_Lim_AD;/* '<S53>/Switch' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCF_b_Comp_DVC_Lim_AM2;/* '<S5>/Merge' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_I_Current_high;/* '<S1062>/MinMax' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_I_Current_highlow;/* '<S1062>/MinMax2' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_I_Current_low;/* '<S1062>/MinMax1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_I_Currentb4vehcheck;/* '<S924>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_I_Currentb4vehcheck_1;/* '<S913>/Switch4' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_I_CurrentrateLimDown;/* '<S930>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_I_Currentrawfinal;/* '<S1062>/Sum1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_I_Currentrawlimited;/* '<S1072>/Switch' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_I_CurrenttargetafterRL;/* '<S929>/Product' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_I_Currenttargetraw;/* '<S1068>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_I_ECVDCurrentTgt_B4D;/* '<S915>/Switch' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_I_ECVDCurrentTgt_New_B4D;/* '<S940>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_I_ECVDCurrentTgt_Old_B4D;/* '<S945>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_I_ECVD_HVACCabinReqCurrent;/* '<S1020>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_I_ECVD_currentraw;/* '<S1069>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_K_CEtermMF1_Max;/* '<S491>/MinMax2' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_K_CEtermMF1_Min;/* '<S682>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_K_CEtermMF_Max;/* '<S358>/MinMax2' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_K_CEtermMF_out_AftMerg;/* '<S358>/Merge3' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_K_CEtermMedTrigMF1_out;/* '<S526>/Merge' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_K_CEtermMedTrigMF_out;/* '<S382>/Merge' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_K_CEtermNegTrapMF1_out;/* '<S520>/Merge' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_K_CEtermNegTrapMF_out;/* '<S378>/Merge' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_K_CEtermPosMedTrapMF1_out;/* '<S521>/Merge' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_K_CEtermPosMedTrapMF_out;/* '<S379>/Merge' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_K_CEtermPosTrapMF1_out;/* '<S523>/Merge' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_K_CEtermPosTrapMF_out;/* '<S381>/Merge' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_K_CEtermVrySmllNgtvTrapMF1_out;/* '<S524>/Merge' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_K_CEtermVrySmllPosTrapMF1_out;/* '<S525>/Merge' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_K_CEtermZeroTrapMF1_out;/* '<S522>/Merge' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_K_CEtermZeroTrapMF_out;/* '<S380>/Merge' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_K_EtermMF1_Max;/* '<S491>/MinMax1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_K_EtermMF1_Min;/* '<S680>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_K_EtermMF_Max;/* '<S358>/MinMax1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_K_EtermMF_out_AftMerg;/* '<S358>/Merge2' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_K_EtermMedTrigMF1_out;/* '<S602>/Merge' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_K_EtermMedTrigMF_out;/* '<S441>/Merge' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_K_EtermNegTrapMF1_out;/* '<S596>/Merge' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_K_EtermNegTrapMF_out;/* '<S437>/Merge' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_K_EtermPosMedTrapMF1_out;/* '<S597>/Merge' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_K_EtermPosMedTrapMF_out;/* '<S438>/Merge' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_K_EtermPosTrapMF1_out;/* '<S599>/Merge' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_K_EtermPosTrapMF_out;/* '<S440>/Merge' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_K_EtermVrySmllNgtvTrapMF1_out;/* '<S600>/Merge' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_K_EtermVrySmllPosTrapMF1_out;/* '<S601>/Merge' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_K_EtermZeroTrapMF1_out;/* '<S598>/Merge' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_K_EtermZeroTrapMF_out;/* '<S439>/Merge' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_K_FuzzyRPM_IntegralGain;/* '<S334>/Switch' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_K_MF_DefuzzyMin;/* '<S336>/Sum1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_K_Output_Sum;/* '<S347>/Sum1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_K_WghtdAvg_Sum;/* '<S347>/Sum2' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_P_HVAC_CompPwrUsage_B4D;/* '<S844>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_P_HVAC_CoolPwrApp1;/* '<S847>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_Pct_HVAC_PwrCsmpRatio;/* '<S843>/Product1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_ACClutchAllow;/* '<S915>/Logical1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_ACCompEnbl;/* '<S113>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_ACCompEnbl_1;/* '<S862>/Comparison12' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_ACCompEnbl_2;/* '<S863>/Logical1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_ACCompEnbl_3;/* '<S864>/Logical3' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_ACCompEnbl_4;/* '<S865>/Comparison3' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_ACCompEnbl_B4D;/* '<S869>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_ACCompallow;/* '<S118>/Logical1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_ACHiPrCutoffTimer;/* '<S188>/GreaterThan1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_ACHiPrCutoffTimer_mHEV;/* '<S976>/GreaterThan1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_ACHiPrRetractActive;/* '<S233>/GreaterThan1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_ACHiPrRetractActive_mHEV;/* '<S996>/GreaterThan1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_ACLoPrCutoff;/* '<S172>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_ACLoPrCutoff_mHEV;/* '<S946>/Logical1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_ACOilMigDurationOn_mHEV;/* '<S1039>/Logical6' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_ACOilMigEn;/* '<S800>/Logical10' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_ACOilMigStarted;/* '<S800>/Logical1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_ACOilMigStarted_mHEV;/* '<S1039>/Logical1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_ACOverPressure;/* '<S167>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_ACOverPressure_mHEV;/* '<S961>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_ACPresHiDtct;/* '<S189>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_ACSucPresLoDtct;/* '<S165>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_AC_ClutchReq_AftrDly;/* '<S921>/AND' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_AC_ClutchReq_B4Dly;/* '<S912>/Logical1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_AC_ClutchReq_BD;/* '<S912>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_AC_CompElecPwr_FA;/* '<S20>/Gain' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_BPCMCommFltd;/* '<S238>/Logical7' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_BattAllowed_AD;/* '<S71>/Switch' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_CabAllowed_AD;/* '<S72>/Switch' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_CabReq_NotAllow_AD;/* '<S76>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_ChlrVlvSB_Flt;/* '<S234>/Logical2' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_ClutchFaultDelayActive;/* '<S1033>/GreaterThan1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_ClutchNotEngaged;/* '<S952>/LogicalOperator' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_ClutchNotEngaged_ActvCool;/* '<S952>/LogicalOperator3' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_CompFaultDelayActive;/* '<S755>/GreaterThan1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_CompSpdFuzzy_AmbHot;/* '<S355>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_CompSpdIncActive;/* '<S313>/GreaterThan1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_CompSpdNewFuzzy_AmbHot;/* '<S485>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_CompStatINOP;/* '<S151>/Comparison4' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_DisableOilMig_Pres;/* '<S184>/Logical6' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_ECVDPrechargeActive;/* '<S1059>/GreaterThan1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_EXVsnsrFltd;/* '<S235>/Logical22' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_EvapTempError_Hys;/* '<S713>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_EvapTmpPIDEnbl;/* '<S707>/UnitDelay' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_FreezeITerms_Pres;/* '<S184>/Logical3' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_HVAC_CompPwrUsage_FA;/* '<S12>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_InFieldMode_AD;/* '<S64>/Switch3' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_LTAPFltd;/* '<S239>/Logical3' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_LimCheckingStatus_AD;/* '<S64>/Switch2' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_NoBattClngSysFltsPrsnt;/* '<S147>/Logical11' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_NoCabCondAllwd;/* '<S1018>/Logical14' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_OilMigCmplt;/* '<S800>/Logical9' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_OilMigCmplt_mHEV;/* '<S1039>/Logical5' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_OilMigOpnVlv_B4Merg;/* '<S801>/AND' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_OilMigOpnVlv_B4Merg_mHEV;/* '<S1040>/AND' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_REMcompallowed;/* '<S153>/Logical1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_REMcompallowed_mHEV;/* '<S953>/Logical1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(boolean, ACCR_VAR_INIT) VeACCR_b_RPM_PwrBdgtComp_On;/* '<S835>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_dT_CEvalue;/* '<S335>/Multiplication2' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_dT_EvapTempError;/* '<S322>/Sum5' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_dT_ModEvapTempError_Delta;/* '<S322>/Switch2' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(TeACCR_e_AC_CompEnb, ACCR_VAR_INIT) VeACCR_e_AC_CompEnb_BD;/* '<S116>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(TeTHMR_e_ACCompState, ACCR_VAR_INIT) VeACCR_e_AC_CompState_AD;/* '<S69>/Switch' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(TeACCR_e_AC_CompEnb, ACCR_VAR_INIT) VeACCR_e_CompSpdEnb_ADVC;/* '<S4>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(TeHPMR_e_HybSysState, ACCR_VAR_INIT) VeACCR_e_HybSysSt_AD;/* '<S75>/Switch' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_i_CEtermMFState_AftMerg;/* '<S358>/Merge1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_i_EtermMFState_AftMerg;/* '<S358>/Merge' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_i_MaxCEtermMFState_AftMerg;/* '<S647>/Merge' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_i_MaxEtermMFState_AftMerg;/* '<S645>/Merge' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_i_MinCEtermMFState_AftMerg;/* '<S648>/Merge' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_i_MinEtermMFState_AftMerg;/* '<S646>/Merge' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_ACpressure_PID_mHEV;/* '<S1064>/Switch' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_ACpressureold_mHEV;/* '<S1065>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_CellOvertempRPM;/* '<S240>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_CellOvertempRPM_mHEV;/* '<S947>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_CompRPMIterm;/* '<S482>/Switch' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_CompRPM_Fuzzy;/* '<S320>/Sum_Sub2' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_CompRPM_FuzzyNew_AftGain;/* '<S320>/Product3' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_CompSd_FuzzyNew;/* '<S490>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_CompSpdLimHP_CabNVH;/* '<S768>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_CompSpdLim_CabNVH;/* '<S324>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_CompSpdLim_HPEvapFreeze;/* '<S765>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_CompSpd_Fuzzy;/* '<S336>/Product' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_CompSpd_Fuzzy_AD;/* '<S320>/Switch' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_CompSpeedTgt_B4D;/* '<S118>/Switch' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_CompSpeedTgt_New_B4D;/* '<S140>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_CompSpeedTgt_Old_B4D;/* '<S145>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_CompmSpd_Hot_Amb;/* '<S414>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_CompmSpd_Hot_Amb_EcoMode;/* '<S415>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_CompmSpd_Ideal_Amb;/* '<S416>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_CompmSpd_Ideal_Amb_EcoMode;/* '<S417>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_DCCooling;/* '<S1014>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_PPCTISTempCtrlRPM;/* '<S832>/Switch' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMChlrVlvOpen;/* '<S841>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMFrntEvapShutoffVlv;/* '<S842>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMPreCharge_app_mHEV;/* '<S1052>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMacp;/* '<S173>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMacpPID_AD;/* '<S146>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMacpPID_AD_mHEV;/* '<S946>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMacpPID_AG;/* '<S210>/Switch' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMacpPID_AG_mHEV;/* '<S988>/Switch' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMacpPID_BG;/* '<S211>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMacpPID_BG_mHEV;/* '<S989>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMacpSuctnPID_BG;/* '<S226>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMacp_AD;/* '<S146>/Switch' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMacp_AD_mHEV;/* '<S946>/Switch' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMacp_mHEV;/* '<S965>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMb4vehcheck;/* '<S125>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMb4vehcheck_1;/* '<S117>/Switch4' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMchiller;/* '<S281>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMchiller_mHEV;/* '<S1002>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMcompspd_mHEV;/* '<S1017>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMetc;/* '<S732>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMfault;/* '<S151>/Switch' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMfault_app1;/* '<S753>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMfault_app2;/* '<S752>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMfault_app_mHEV;/* '<S1025>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMheatpumporDeice;/* '<S761>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMhigh;/* '<S852>/MinMax' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMhighlow;/* '<S162>/MinMax2' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMinplant;/* '<S793>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMinplant_mHEV;/* '<S1034>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMlow;/* '<S162>/MinMax1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMoilmig;/* '<S809>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMoilmig_mHEV;/* '<S1045>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMprotD;/* '<S312>/Switch' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMprotD_App1;/* '<S316>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMprotD_App2;/* '<S315>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMprotI;/* '<S307>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMprotISet;/* '<S311>/Input_Parameter' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMpwrbudget_AS;/* '<S159>/Switch4' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMpwrbudget_Raw;/* '<S840>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMrateLimDown;/* '<S134>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMrawfinal;/* '<S852>/Sum2' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMrawlimited;/* '<S855>/Switch' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMretract;/* '<S232>/Input_Parameter' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMretract_mHEV;/* '<S995>/Input_Parameter' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMtargetafterRL;/* '<S133>/Product' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMtargetraw;/* '<S848>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMvalve;/* '<S160>/MinMax' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMvalve_mHEV;/* '<S1060>/Switch1' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_RPMvehspd;/* '<S163>/Switch3' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_n_SDSTempErrRPM;/* '<S299>/Vector' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_p_ACpressure_PID;/* '<S162>/Switch' */

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static VAR(float32, ACCR_VAR_INIT) VeACCR_p_ACpressureold;/* '<S162>/Switch1' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ACCR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_ACCR
#include "MemMap.h"

CONST(ConstB_ACCR_ac_T, ACCR_VAR_INIT) ACCR_ac_ConstB =
{

#if Rte_SysCon_Variant_ACCR_FUNC_3

    CeACCR_e_ACComp_Disable            /* '<S1075>/Constant' */
#define CONSTB_ACCR_AC_T_VARIANT_EXISTS
#endif
#ifndef CONSTB_ACCR_AC_T_VARIANT_EXISTS
    0
#endif                           /* CONSTB_ACCR_AC_T_VARIANT_EXISTS undefined */
};

#define STOP_SEC_CONST_UNSPECIFIED_ACCR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_ACCR
#include "MemMap.h"

CONST(ConstP_ACCR_ac_T, ACCR_VAR_INIT) ACCR_ac_ConstP =
{

#if Rte_SysCon_Variant_ACCR_FUNC_2

    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S302>/Vector'
     */
    {
        1U, 6U
    },

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S325>/Vector'
     *   '<S699>/Vector'
     *   '<S701>/Vector'
     *   '<S702>/Vector'
     *   '<S704>/Vector'
     *   '<S705>/Vector'
     *   '<S769>/Vector'
     *   '<S785>/Vector'
     *   '<S786>/Vector'
     */
    {
        7U, 5U
    },

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S350>/Vector'
     *   '<S351>/Vector'
     *   '<S414>/Vector'
     *   '<S415>/Vector'
     *   '<S416>/Vector'
     *   '<S417>/Vector'
     */
    {
        5U, 5U
    },

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S858>/Vector'
     *   '<S722>/Vector'
     */
    {
        4U, 5U
    },

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S684>/Vector'
     *   '<S685>/Vector'
     */
    {
        7U, 7U
    },

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

    /* Computed Parameter: Vector_maxIndex_i
     * Referenced by: '<S840>/Vector'
     */
    {
        4U, 6U
    },

#endif

#ifndef CONSTP_ACCR_AC_T_VARIANT_EXISTS

    0
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_ACCR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ACCR
#include "MemMap.h"

VAR(B_ACCR_ac_T, ACCR_VAR_INIT) ACCR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ACCR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ACCR
#include "MemMap.h"

VAR(DW_ACCR_ac_T, ACCR_VAR_INIT) ACCR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ACCR
#include "MemMap.h"
#if Rte_SysCon_Variant_ACCR_FUNC_2

static FUNC(void, ACCR_CODE_LOCAL) ACCR_ac_IfActionSubsystem(P2VAR(float32,
    AUTOMATIC, ACCR_VAR_INIT) rty_Out1);

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static FUNC(void, ACCR_CODE_LOCAL) ACCR_ac_IfActionSubsystem2(P2VAR(float32,
    AUTOMATIC, ACCR_VAR_INIT) rty_Out1);

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static FUNC(void, ACCR_CODE_LOCAL) ACCR_ac_IfActionSubsystem1(VAR(float32,
    AUTOMATIC) rtu_u, VAR(float32, AUTOMATIC) rtu_a, VAR(float32, AUTOMATIC)
    rtu_b, P2VAR(float32, AUTOMATIC, ACCR_VAR_INIT) rty_Out1);

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static FUNC(void, ACCR_CODE_LOCAL) ACCR_ac_IfActionSubsystem3(VAR(float32,
    AUTOMATIC) rtu_u, VAR(float32, AUTOMATIC) rtu_c, VAR(float32, AUTOMATIC)
    rtu_d, P2VAR(float32, AUTOMATIC, ACCR_VAR_INIT) rty_Out1);

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static FUNC(void, ACCR_CODE_LOCAL) ACCR_ac_IfActionSubsystem3_f(VAR(float32,
    AUTOMATIC) rtu_u, VAR(float32, AUTOMATIC) rtu_b, VAR(float32, AUTOMATIC)
    rtu_c, P2VAR(float32, AUTOMATIC, ACCR_VAR_INIT) rty_Out1);

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static FUNC(void, ACCR_CODE_LOCAL) ACCR_ac_MF_1(P2VAR(float32, AUTOMATIC,
    ACCR_VAR_INIT) rty_NegativeMF);

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static FUNC(void, ACCR_CODE_LOCAL) ACCR_ac_MF_2(P2VAR(float32, AUTOMATIC,
    ACCR_VAR_INIT) rty_MedianMF);

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static FUNC(void, ACCR_CODE_LOCAL) ACCR_ac_MF_3(P2VAR(float32, AUTOMATIC,
    ACCR_VAR_INIT) rty_ZeroMF);

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static FUNC(void, ACCR_CODE_LOCAL) ACCR_ac_MF_4(P2VAR(float32, AUTOMATIC,
    ACCR_VAR_INIT) rty_ZeroMF);

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static FUNC(void, ACCR_CODE_LOCAL) ACCR_ac_MF_5(P2VAR(float32, AUTOMATIC,
    ACCR_VAR_INIT) rty_PosMedMF);

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static FUNC(void, ACCR_CODE_LOCAL) ACCR_ac_MF_6(P2VAR(float32, AUTOMATIC,
    ACCR_VAR_INIT) rty_PosMedMF);

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

static FUNC(void, ACCR_CODE_LOCAL) ACCR_ac_MF_7(P2VAR(float32, AUTOMATIC,
    ACCR_VAR_INIT) rty_PositiveMF);

#endif

/*
 * Output and update for action system:
 *    '<S378>/IfActionSubsystem'
 *    '<S379>/IfActionSubsystem'
 *    '<S380>/IfActionSubsystem'
 *    '<S381>/IfActionSubsystem'
 *    '<S382>/IfActionSubsystem'
 *    '<S437>/IfActionSubsystem'
 *    '<S438>/IfActionSubsystem'
 *    '<S439>/IfActionSubsystem'
 *    '<S440>/IfActionSubsystem'
 *    '<S441>/IfActionSubsystem'
 *    ...
 */
#if Rte_SysCon_Variant_ACCR_FUNC_2

static FUNC(void, ACCR_CODE_LOCAL) ACCR_ac_IfActionSubsystem(P2VAR(float32,
    AUTOMATIC, ACCR_VAR_INIT) rty_Out1)
{
    /* SignalConversion generated from: '<S383>/Out1' incorporates:
     *  Constant: '<S383>/Constant'
     */
    *rty_Out1 = 0.0F;
}

#endif

/*
 * Output and update for action system:
 *    '<S378>/IfActionSubsystem2'
 *    '<S379>/IfActionSubsystem2'
 *    '<S380>/IfActionSubsystem2'
 *    '<S381>/IfActionSubsystem2'
 *    '<S382>/IfActionSubsystem2'
 *    '<S437>/IfActionSubsystem2'
 *    '<S438>/IfActionSubsystem2'
 *    '<S439>/IfActionSubsystem2'
 *    '<S440>/IfActionSubsystem2'
 *    '<S441>/IfActionSubsystem2'
 *    ...
 */
#if Rte_SysCon_Variant_ACCR_FUNC_2

static FUNC(void, ACCR_CODE_LOCAL) ACCR_ac_IfActionSubsystem2(P2VAR(float32,
    AUTOMATIC, ACCR_VAR_INIT) rty_Out1)
{
    /* SignalConversion generated from: '<S385>/Out1' incorporates:
     *  Constant: '<S385>/Constant'
     */
    *rty_Out1 = 1.0F;
}

#endif

/*
 * Output and update for action system:
 *    '<S378>/IfActionSubsystem1'
 *    '<S379>/IfActionSubsystem1'
 *    '<S380>/IfActionSubsystem1'
 *    '<S381>/IfActionSubsystem1'
 *    '<S382>/IfActionSubsystem1'
 *    '<S437>/IfActionSubsystem1'
 *    '<S438>/IfActionSubsystem3'
 *    '<S439>/IfActionSubsystem1'
 *    '<S440>/IfActionSubsystem1'
 *    '<S441>/IfActionSubsystem3'
 *    ...
 */
#if Rte_SysCon_Variant_ACCR_FUNC_2

static FUNC(void, ACCR_CODE_LOCAL) ACCR_ac_IfActionSubsystem1(VAR(float32,
    AUTOMATIC) rtu_u, VAR(float32, AUTOMATIC) rtu_a, VAR(float32, AUTOMATIC)
    rtu_b, P2VAR(float32, AUTOMATIC, ACCR_VAR_INIT) rty_Out1)
{
    float32 rtb_Sum2_n;
    float32 rtb_Sum3_j;

    /* Sum: '<S384>/Sum3' */
    rtb_Sum3_j = rtu_u - rtu_a;

    /* Sum: '<S384>/Sum2' */
    rtb_Sum2_n = rtu_b - rtu_a;

    /* Outputs for Atomic SubSystem: '<S384>/ProtectedDivision' */
    /* Switch: '<S387>/Switch1' incorporates:
     *  Constant: '<S387>/ConstantValue'
     *  Constant: '<S387>/ConstantValue1'
     *  Constant: '<S387>/ConstantValue2'
     *  Constant: '<S387>/ConstantValue3'
     *  Logic: '<S387>/AND'
     *  Product: '<S387>/Division'
     *  RelationalOperator: '<S387>/GreaterThanorEqual'
     *  RelationalOperator: '<S387>/GreaterThanorEqual1'
     *  RelationalOperator: '<S387>/NotEqual'
     *  RelationalOperator: '<S387>/NotEqual1'
     *  Switch: '<S387>/Switch2'
     *  Switch: '<S387>/Switch3'
     */
    if ((rtb_Sum3_j != 0.0F) && (rtb_Sum2_n != 0.0F))
    {
        *rty_Out1 = rtb_Sum3_j / rtb_Sum2_n;
    }
    else if (rtb_Sum3_j > 0.0F)
    {
        /* Switch: '<S387>/Switch2' incorporates:
         *  Constant: '<S387>/MAXFLOAT'
         */
        *rty_Out1 = 3.402823466E+38F;
    }
    else if (rtb_Sum3_j < 0.0F)
    {
        /* Switch: '<S387>/Switch3' incorporates:
         *  Constant: '<S387>/MINFLOAT'
         *  Switch: '<S387>/Switch2'
         */
        *rty_Out1 = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S387>/Switch2' incorporates:
         *  Constant: '<S387>/ConstantValue4'
         *  Switch: '<S387>/Switch3'
         */
        *rty_Out1 = 0.0F;
    }

    /* End of Switch: '<S387>/Switch1' */
    /* End of Outputs for SubSystem: '<S384>/ProtectedDivision' */
}

#endif

/*
 * Output and update for action system:
 *    '<S378>/IfActionSubsystem3'
 *    '<S379>/IfActionSubsystem3'
 *    '<S380>/IfActionSubsystem4'
 *    '<S381>/IfActionSubsystem4'
 *    '<S437>/IfActionSubsystem4'
 *    '<S438>/IfActionSubsystem4'
 *    '<S439>/IfActionSubsystem3'
 *    '<S440>/IfActionSubsystem3'
 *    '<S520>/IfActionSubsystem3'
 *    '<S521>/IfActionSubsystem3'
 *    ...
 */
#if Rte_SysCon_Variant_ACCR_FUNC_2

static FUNC(void, ACCR_CODE_LOCAL) ACCR_ac_IfActionSubsystem3(VAR(float32,
    AUTOMATIC) rtu_u, VAR(float32, AUTOMATIC) rtu_c, VAR(float32, AUTOMATIC)
    rtu_d, P2VAR(float32, AUTOMATIC, ACCR_VAR_INIT) rty_Out1)
{
    float32 rtb_Sum1_c;
    float32 rtb_Sum3_e;

    /* Sum: '<S386>/Sum3' */
    rtb_Sum3_e = rtu_d - rtu_u;

    /* Sum: '<S386>/Sum1' */
    rtb_Sum1_c = rtu_d - rtu_c;

    /* Outputs for Atomic SubSystem: '<S386>/ProtectedDivision' */
    /* Switch: '<S388>/Switch1' incorporates:
     *  Constant: '<S388>/ConstantValue'
     *  Constant: '<S388>/ConstantValue1'
     *  Constant: '<S388>/ConstantValue2'
     *  Constant: '<S388>/ConstantValue3'
     *  Logic: '<S388>/AND'
     *  Product: '<S388>/Division'
     *  RelationalOperator: '<S388>/GreaterThanorEqual'
     *  RelationalOperator: '<S388>/GreaterThanorEqual1'
     *  RelationalOperator: '<S388>/NotEqual'
     *  RelationalOperator: '<S388>/NotEqual1'
     *  Switch: '<S388>/Switch2'
     *  Switch: '<S388>/Switch3'
     */
    if ((rtb_Sum3_e != 0.0F) && (rtb_Sum1_c != 0.0F))
    {
        *rty_Out1 = rtb_Sum3_e / rtb_Sum1_c;
    }
    else if (rtb_Sum3_e > 0.0F)
    {
        /* Switch: '<S388>/Switch2' incorporates:
         *  Constant: '<S388>/MAXFLOAT'
         */
        *rty_Out1 = 3.402823466E+38F;
    }
    else if (rtb_Sum3_e < 0.0F)
    {
        /* Switch: '<S388>/Switch3' incorporates:
         *  Constant: '<S388>/MINFLOAT'
         *  Switch: '<S388>/Switch2'
         */
        *rty_Out1 = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S388>/Switch2' incorporates:
         *  Constant: '<S388>/ConstantValue4'
         *  Switch: '<S388>/Switch3'
         */
        *rty_Out1 = 0.0F;
    }

    /* End of Switch: '<S388>/Switch1' */
    /* End of Outputs for SubSystem: '<S386>/ProtectedDivision' */
}

#endif

/*
 * Output and update for action system:
 *    '<S382>/IfActionSubsystem3'
 *    '<S441>/IfActionSubsystem4'
 *    '<S526>/IfActionSubsystem3'
 *    '<S602>/IfActionSubsystem4'
 */
#if Rte_SysCon_Variant_ACCR_FUNC_2

static FUNC(void, ACCR_CODE_LOCAL) ACCR_ac_IfActionSubsystem3_f(VAR(float32,
    AUTOMATIC) rtu_u, VAR(float32, AUTOMATIC) rtu_b, VAR(float32, AUTOMATIC)
    rtu_c, P2VAR(float32, AUTOMATIC, ACCR_VAR_INIT) rty_Out1)
{
    float32 rtb_Sum1_hc;
    float32 rtb_Sum3_aq;

    /* Sum: '<S410>/Sum3' */
    rtb_Sum3_aq = rtu_c - rtu_u;

    /* Sum: '<S410>/Sum1' */
    rtb_Sum1_hc = rtu_c - rtu_b;

    /* Outputs for Atomic SubSystem: '<S410>/ProtectedDivision' */
    /* Switch: '<S412>/Switch1' incorporates:
     *  Constant: '<S412>/ConstantValue'
     *  Constant: '<S412>/ConstantValue1'
     *  Constant: '<S412>/ConstantValue2'
     *  Constant: '<S412>/ConstantValue3'
     *  Logic: '<S412>/AND'
     *  Product: '<S412>/Division'
     *  RelationalOperator: '<S412>/GreaterThanorEqual'
     *  RelationalOperator: '<S412>/GreaterThanorEqual1'
     *  RelationalOperator: '<S412>/NotEqual'
     *  RelationalOperator: '<S412>/NotEqual1'
     *  Switch: '<S412>/Switch2'
     *  Switch: '<S412>/Switch3'
     */
    if ((rtb_Sum3_aq != 0.0F) && (rtb_Sum1_hc != 0.0F))
    {
        *rty_Out1 = rtb_Sum3_aq / rtb_Sum1_hc;
    }
    else if (rtb_Sum3_aq > 0.0F)
    {
        /* Switch: '<S412>/Switch2' incorporates:
         *  Constant: '<S412>/MAXFLOAT'
         */
        *rty_Out1 = 3.402823466E+38F;
    }
    else if (rtb_Sum3_aq < 0.0F)
    {
        /* Switch: '<S412>/Switch3' incorporates:
         *  Constant: '<S412>/MINFLOAT'
         *  Switch: '<S412>/Switch2'
         */
        *rty_Out1 = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S412>/Switch2' incorporates:
         *  Constant: '<S412>/ConstantValue4'
         *  Switch: '<S412>/Switch3'
         */
        *rty_Out1 = 0.0F;
    }

    /* End of Switch: '<S412>/Switch1' */
    /* End of Outputs for SubSystem: '<S410>/ProtectedDivision' */
}

#endif

/*
 * Output and update for action system:
 *    '<S645>/MF_1'
 *    '<S646>/MF_1'
 *    '<S647>/MF_1'
 *    '<S648>/MF_1'
 */
#if Rte_SysCon_Variant_ACCR_FUNC_2

static FUNC(void, ACCR_CODE_LOCAL) ACCR_ac_MF_1(P2VAR(float32, AUTOMATIC,
    ACCR_VAR_INIT) rty_NegativeMF)
{
    /* SignalConversion generated from: '<S651>/NegativeMF' incorporates:
     *  Constant: '<S651>/Constant'
     */
    *rty_NegativeMF = 1.0F;
}

#endif

/*
 * Output and update for action system:
 *    '<S645>/MF_2'
 *    '<S646>/MF_2'
 *    '<S647>/MF_2'
 *    '<S648>/MF_2'
 */
#if Rte_SysCon_Variant_ACCR_FUNC_2

static FUNC(void, ACCR_CODE_LOCAL) ACCR_ac_MF_2(P2VAR(float32, AUTOMATIC,
    ACCR_VAR_INIT) rty_MedianMF)
{
    /* SignalConversion generated from: '<S652>/MedianMF' incorporates:
     *  Constant: '<S652>/Constant'
     */
    *rty_MedianMF = 2.0F;
}

#endif

/*
 * Output and update for action system:
 *    '<S645>/MF_3'
 *    '<S646>/MF_3'
 *    '<S647>/MF_3'
 *    '<S648>/MF_3'
 */
#if Rte_SysCon_Variant_ACCR_FUNC_2

static FUNC(void, ACCR_CODE_LOCAL) ACCR_ac_MF_3(P2VAR(float32, AUTOMATIC,
    ACCR_VAR_INIT) rty_ZeroMF)
{
    /* SignalConversion generated from: '<S653>/ZeroMF' incorporates:
     *  Constant: '<S653>/Constant'
     */
    *rty_ZeroMF = 3.0F;
}

#endif

/*
 * Output and update for action system:
 *    '<S645>/MF_4'
 *    '<S646>/MF_4'
 *    '<S647>/MF_4'
 *    '<S648>/MF_4'
 */
#if Rte_SysCon_Variant_ACCR_FUNC_2

static FUNC(void, ACCR_CODE_LOCAL) ACCR_ac_MF_4(P2VAR(float32, AUTOMATIC,
    ACCR_VAR_INIT) rty_ZeroMF)
{
    /* SignalConversion generated from: '<S654>/ZeroMF' incorporates:
     *  Constant: '<S654>/Constant'
     */
    *rty_ZeroMF = 4.0F;
}

#endif

/*
 * Output and update for action system:
 *    '<S645>/MF_5'
 *    '<S646>/MF_5'
 *    '<S647>/MF_5'
 *    '<S648>/MF_5'
 */
#if Rte_SysCon_Variant_ACCR_FUNC_2

static FUNC(void, ACCR_CODE_LOCAL) ACCR_ac_MF_5(P2VAR(float32, AUTOMATIC,
    ACCR_VAR_INIT) rty_PosMedMF)
{
    /* SignalConversion generated from: '<S655>/PosMedMF' incorporates:
     *  Constant: '<S655>/Constant'
     */
    *rty_PosMedMF = 5.0F;
}

#endif

/*
 * Output and update for action system:
 *    '<S645>/MF_6'
 *    '<S646>/MF_6'
 *    '<S647>/MF_6'
 *    '<S648>/MF_6'
 */
#if Rte_SysCon_Variant_ACCR_FUNC_2

static FUNC(void, ACCR_CODE_LOCAL) ACCR_ac_MF_6(P2VAR(float32, AUTOMATIC,
    ACCR_VAR_INIT) rty_PosMedMF)
{
    /* SignalConversion generated from: '<S656>/PosMedMF' incorporates:
     *  Constant: '<S656>/Constant'
     */
    *rty_PosMedMF = 6.0F;
}

#endif

/*
 * Output and update for action system:
 *    '<S645>/MF_7'
 *    '<S646>/MF_7'
 *    '<S647>/MF_7'
 *    '<S648>/MF_7'
 */
#if Rte_SysCon_Variant_ACCR_FUNC_2

static FUNC(void, ACCR_CODE_LOCAL) ACCR_ac_MF_7(P2VAR(float32, AUTOMATIC,
    ACCR_VAR_INIT) rty_PositiveMF)
{
    /* SignalConversion generated from: '<S657>/PositiveMF' incorporates:
     *  Constant: '<S657>/Constant'
     */
    *rty_PositiveMF = 7.0F;
}

#endif

/* Model step function for TID1 */
#if Rte_SysCon_Variant_ACCR_FUNC_2

FUNC(void, ACCR_CODE) ACCR_MedTEH(void) /* Explicit Task: MedTEH */
{

#if Rte_SysCon_Variant_ACCR_FUNC_2

    float32 minV;

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

    float32 minV_0;

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

    float32 tmpForInput[5];

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

    boolean rtb_Logical1_cp;

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

    boolean rtb_Logical1_ecb;

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

    boolean rtb_Logical4;

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

    float32 rtb_Vector_aw;

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

    boolean rtb_Logical2_jm;

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

    boolean rtb_Logical1_n3o;

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

    boolean rtb_Logical3_ke;

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

    float32 rtb_Vector_ni[11];

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

    boolean rtb_Logical4_f2;

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

    float32 rtb_TmpSignalConversionAtVectorInport1[9];

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

    float32 rtb_Vector_fc[9];

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

    float32 rtb_TmpSignalConversionAtVectorInport1_m[4];

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

    float32 rtb_Sum_l[4];

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

    boolean rtb_Logical8_nn;

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

    boolean rtb_Comparison1_ea;

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

    float32 rtb_Vector;

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

    boolean rtb_AND_mh;

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

    float32 rtb_Sum1;

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

    float32 rtb_Switch1_g3[7];

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

    float32 rtb_Switch1_jx;

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

    float32 rtb_Vector_b5;

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

    float32 rtb_Sum1_eo;

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

    float32 rtb_Sum1_f;

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

    boolean Switch_n;

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

    boolean Switch_h;

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

    float32 Product;

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

    float32 Switch_j;

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

    float32 Switch_l;

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

    TeHVTR_e_HV_BatCntctrStat Switch_o3;

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

    TeACCR_e_AC_CompEnb Switch_c;

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

    sint32 i;

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

    TeHCDR_e_BatteryThermalFault tmp;

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

    float32 rtb_TmpSignalConversionAtVectorInport1_d;

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTAIR_p_HghRfrgtPres'
     */
    (void)Rte_Read_VeTAIR_p_HghRfrgtPres_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeHPMR_b_PropSysActv'
     */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_ask);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeBPCR_e_HV_BatCntctrStat'
     */
    (void)Rte_Read_VeBPCR_e_HV_BatCntctrStat_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_gcr);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeCSVR_v_VehSpd'
     */
    (void)Rte_Read_VeCSVR_v_VehSpd_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_i);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeCSVR_b_VehSpdFA'
     */
    (void)Rte_Read_VeCSVR_b_VehSpdFA_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_b);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTHMR_dT_CellOverTemp'
     */
    (void)Rte_Read_VeTHMR_dT_CellOverTemp_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_n);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeRCVR_b_RSVCompTransition'
     */
    (void)Rte_Read_VeRCVR_b_RSVCompTransition_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_it);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTHMR_b_ActRemCompDecision'
     */
    (void)Rte_Read_VeTHMR_b_ActRemCompDecision_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cj);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTHMR_e_AC_CompState'
     */
    (void)Rte_Read_VeTHMR_e_AC_CompState_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mo);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTHMR_b_CabReq_NotAllow'
     */
    (void)Rte_Read_VeTHMR_b_CabReq_NotAllow_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ag);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTHMR_b_BattAllowed'
     */
    (void)Rte_Read_VeTHMR_b_BattAllowed_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_dr);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTHMR_b_CabAllowed'
     */
    (void)Rte_Read_VeTHMR_b_CabAllowed_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_hj);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeBSWR_b_LimCheckingStatus'
     */
    (void)Rte_Read_VeBSWR_b_LimCheckingStatus_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cq);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VePLTR_b_InFieldMode'
     */
    (void)Rte_Read_VePLTR_b_InFieldMode_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_pk);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeHPMR_e_HybSysSt'
     */
    (void)Rte_Read_VeHPMR_e_HybSysSt_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_oa);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTAIR_T_FtEvapTmp'
     */
    (void)Rte_Read_VeTAIR_T_FtEvapTmp_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_g);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTAIR_T_FtEvapTmp_Tgt'
     */
    (void)Rte_Read_VeTAIR_T_FtEvapTmp_Tgt_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_f);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeBTRR_T_CellTempMaxUsed'
     */
    (void)Rte_Read_VeBTRR_T_CellTempMaxUsed_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_e);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeAATR_T_EstAmbAirTemp'
     */
    (void)Rte_Read_VeAATR_T_EstAmbAirTemp_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_a);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTAIR_b_FtEvapTmp_TgtFA'
     */
    (void)Rte_Read_VeTAIR_b_FtEvapTmp_TgtFA_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ob);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTAIR_b_FtEvapTmp_FA'
     */
    (void)Rte_Read_VeTAIR_b_FtEvapTmp_FA_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fa);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VePDTR_e_EngOrBattPwrDschg_State'
     */
    (void)Rte_Read_VePDTR_e_EngOrBattPwrDschg_State_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_h0);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTHMR_e_BatThrmlSt'
     */
    (void)Rte_Read_VeTHMR_e_BatThrmlSt_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cg);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTAIR_n_CompSpdFdb'
     */
    (void)Rte_Read_VeTAIR_n_CompSpdFdb_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_o);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTAIR_e_CompStat'
     */
    (void)Rte_Read_VeTAIR_e_CompStat_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_md);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTAIR_b_ACCompReq'
     */
    (void)Rte_Read_VeTAIR_b_ACCompReq_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_ig2);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTAIR_b_CompSpdIncrReq'
     */
    (void)Rte_Read_VeTAIR_b_CompSpdIncrReq_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_a0);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTAIR_P_AC_CompElecPwr'
     */
    (void)Rte_Read_VeTAIR_P_AC_CompElecPwr_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_d);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VePMTR_e_ThrmlDevEnbl'
     */
    (void)Rte_Read_VePMTR_e_ThrmlDevEnbl_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_n0);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeHCDR_e_BatteryThermalFault'
     */
    (void)Rte_Read_VeHCDR_e_BatteryThermalFault_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_hc);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VePMTR_b_ThrmlSystRly_EnblCmnd'
     */
    (void)Rte_Read_VePMTR_b_ThrmlSystRly_EnblCmnd_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cy);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTHMR_P_PwrBdgt_PwrLimitAvail'
     */
    (void)Rte_Read_VeTHMR_P_PwrBdgt_PwrLimitAvail_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_j);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTHMR_P_Rat_EAC_PwrBdgt_Avail'
     */
    (void)Rte_Read_VeTHMR_P_Rat_EAC_PwrBdgt_Avail_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ig);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTAIR_T_CompBoardTemp'
     */
    (void)Rte_Read_VeTAIR_T_CompBoardTemp_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j3);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTAIR_b_CompBoardTemp_FA'
     */
    (void)Rte_Read_VeTAIR_b_CompBoardTemp_FA_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_m3);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeAATR_b_EstAmbAirTempFA'
     */
    (void)Rte_Read_VeAATR_b_EstAmbAirTempFA_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_b2);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTAIR_b_CompSpdFdb_FA'
     */
    (void)Rte_Read_VeTAIR_b_CompSpdFdb_FA_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ct);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeAVTR_e_EVA_ThrmlState'
     */
    (void)Rte_Read_VeAVTR_e_EVA_ThrmlState_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_gar);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeAVTR_dT_SDS_ClntTempErr'
     */
    (void)Rte_Read_VeAVTR_dT_SDS_ClntTempErr_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ir);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' */
#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTAIR_e_ECM_AC_ClutchSts'
     */
    (void)Rte_Read_VeTAIR_e_ECM_AC_ClutchSts_Value
        (&ACCR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_c);

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTAIR_I_HVAC_Cabin_CurrentReq'
     */
    (void)Rte_Read_VeTAIR_I_HVAC_Cabin_CurrentReq_Value
        (&ACCR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy);

#elif !Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

    /* RelationalOperator: '<S952>/Comparison4' incorporates:
     *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
     */
    ACCR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_c =
        CeTAIR_e_ClutchSts_Default;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' */
#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTAIR_b_HVAC_Cabin_CurrentReqFA'
     */
    (void)Rte_Read_VeTAIR_b_HVAC_Cabin_CurrentReqFA_Value
        (&ACCR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_i);

#elif !Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' */
    ACCR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy = 0.0F;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' */
#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTAIR_I_HVAC_ECVD_CurrentAct'
     */
    (void)Rte_Read_VeTAIR_I_HVAC_ECVD_CurrentAct_Value
        (&ACCR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_l);

#elif !Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' */
    ACCR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_i = false;

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' */
    ACCR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_l = 0.0F;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTAIR_b_HVAC_ECVD_CurrentActFA'
     */
    (void)Rte_Read_VeTAIR_b_HVAC_ECVD_CurrentActFA_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_ns5);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' */
#if Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeESPR_n_EngineSpeed'
     */
    (void)Rte_Read_VeESPR_n_EngineSpeed_Value
        (&ACCR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_f);

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     */
    (void)Rte_Read_VeESSR_e_EngStartStopSt_Value
        (&ACCR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_d);

#elif !Rte_SysCon_Variant_ACCR_FUNC_1 && Rte_SysCon_Variant_ACCR_FUNC_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' */
    ACCR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_f = 0.0F;

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' */
    ACCR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_d = CeESSR_e_EngOff;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTHMR_b_RS_N_Or_NrmlPerWp'
     */
    (void)Rte_Read_VeTHMR_b_RS_N_Or_NrmlPerWp_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_hn);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTPCR_dT_PerWpCond_BatTmpErr'
     */
    (void)Rte_Read_VeTPCR_dT_PerWpCond_BatTmpErr_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VePMIR_e_LTActvPumpDryRun'
     */
    (void)Rte_Read_VePMIR_e_LTActvPumpDryRun_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_pv5);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VePMIR_b_LTActvPumpDryRun_FA'
     */
    (void)Rte_Read_VePMIR_b_LTActvPumpDryRun_FA_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bi);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeBPCR_e_BPCM_LOC_BCP'
     */
    (void)Rte_Read_VeBPCR_e_BPCM_LOC_BCP_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_dks);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeBPCR_b_BPCM_LOC_BCP_FA'
     */
    (void)Rte_Read_VeBPCR_b_BPCM_LOC_BCP_FA_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_gzq);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeBPCR_e_BPCM_LIN_BusOff'
     */
    (void)Rte_Read_VeBPCR_e_BPCM_LIN_BusOff_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cn);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeBPCR_b_BPCM_LIN_BusOff_FA'
     */
    (void)Rte_Read_VeBPCR_b_BPCM_LIN_BusOff_FA_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_agr);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeRCVR_b_FtRfgtShtoff_VlvCmd'
     */
    (void)Rte_Read_VeRCVR_b_FtRfgtShtoff_VlvCmd_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_nnj);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTHMR_b_HTCV_RAEnbl_BattTmpHi'
     */
    (void)Rte_Read_VeTHMR_b_HTCV_RAEnbl_BattTmpHi_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_d4);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeRCVR_b_Chlr_OpenCompTransition'
     */
    (void)Rte_Read_VeRCVR_b_Chlr_OpenCompTransition_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_g5);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeRCVR_b_AC_ShtdwnRqst'
     */
    (void)Rte_Read_VeRCVR_b_AC_ShtdwnRqst_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_l4);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTAIR_Pct_FrtBlwrCmd'
     */
    (void)Rte_Read_VeTAIR_Pct_FrtBlwrCmd_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nq);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTAIR_b_FrtBlwrCmd_FA'
     */
    (void)Rte_Read_VeTAIR_b_FrtBlwrCmd_FA_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fb);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeVLDR_b_EXV_PressElctrFlt_FltDtct'
     */
    (void)Rte_Read_VeVLDR_b_EXV_PressElctrFlt_FltDtct_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_a0a);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeVLDR_b_EXV_TempElctrFlt_FltDtct'
     */
    (void)Rte_Read_VeVLDR_b_EXV_TempElctrFlt_FltDtct_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cu);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTAIR_T_CompIGBTTemp'
     */
    (void)Rte_Read_VeTAIR_T_CompIGBTTemp_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nn);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTAIR_b_CompIGBTTemp_FA'
     */
    (void)Rte_Read_VeTAIR_b_CompIGBTTemp_FA_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bn);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeVLDR_b_EXV_PressSens_FltDtct'
     */
    (void)Rte_Read_VeVLDR_b_EXV_PressSens_FltDtct_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_akj);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeVLDR_b_EXV_TempSens_FltDtct'
     */
    (void)Rte_Read_VeVLDR_b_EXV_TempSens_FltDtct_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_pc);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTHMR_e_CabCoolThermalState'
     */
    (void)Rte_Read_VeTHMR_e_CabCoolThermalState_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_co);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeBTRR_b_BattCoolReq_CPV_RA'
     */
    (void)Rte_Read_VeBTRR_b_BattCoolReq_CPV_RA_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ae);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeRCVR_b_EXV_PresSensrRA'
     */
    (void)Rte_Read_VeRCVR_b_EXV_PresSensrRA_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gc);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTRIR_e_HVACECOModeSts'
     */
    (void)Rte_Read_VeTRIR_e_HVACECOModeSts_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_hz);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTHMR_e_CabHeatThermalMode'
     */
    (void)Rte_Read_VeTHMR_e_CabHeatThermalMode_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_dk);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeCTRR_dT_HeatPumpErr'
     */
    (void)Rte_Read_VeCTRR_dT_HeatPumpErr_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_l);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTHMR_b_DeiceActv'
     */
    (void)Rte_Read_VeTHMR_b_DeiceActv_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nc);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeRCVR_p_eACSuctionPressure'
     */
    (void)Rte_Read_VeRCVR_p_eACSuctionPressure_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_k);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTAIR_b_AC_CompElecPwr_FA'
     */
    (void)Rte_Read_VeTAIR_b_AC_CompElecPwr_FA_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ks);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTAIR_n_DVC_CompSpdTgt'
     */
    (void)Rte_Read_VeTAIR_n_DVC_CompSpdTgt_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_f1);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTAIR_e_CompSpdTgt_IO_CntrlSt'
     */
    (void)Rte_Read_VeTAIR_e_CompSpdTgt_IO_CntrlSt_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_dx);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VePMTR_e_ThrmlEnblRsn'
     */
    (void)Rte_Read_VePMTR_e_ThrmlEnblRsn_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_if);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeHCDR_b_AC_Comp_Fault'
     */
    (void)Rte_Read_VeHCDR_b_AC_Comp_Fault_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ga);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_EvapRefrishutoffCtrlShrtGndFlt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_EvapRefrishutoffCtrlShrtGndFlt_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_lw);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CommBusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CommBusOff_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ja);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LosCommBECM_A'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LosCommBECM_A_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nw);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_EvapRefriShutoffCtrlshrtBattFlt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_EvapRefriShutoffCtrlshrtBattFlt_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ak);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CommBus_B_Off'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CommBus_B_Off_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_oe);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LIN2_BusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LIN2_BusOff_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_c);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommEAC'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommEAC_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ne);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeTHMR_T_PPCTIS_Arb'
     */
    (void)Rte_Read_VeTHMR_T_PPCTIS_Arb_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_o3);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolCtrlVlv1CktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolCtrlVlv1CktHi_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_px);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolCtrlVlv1CktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolCtrlVlv1CktLo_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ns);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommACRefrigExpVlvActA'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommACRefrigExpVlvActA_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fo);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LosCommBECM_A_CANC11'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LosCommBECM_A_CANC11_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_pi);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattCoolPmpPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattCoolPmpPerf_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_dh);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeOBCR_e_ChargingLevel'
     */
    (void)Rte_Read_VeOBCR_e_ChargingLevel_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_i3);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_EACPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_EACPerf_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_lc);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigPresSnsrALo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigPresSnsrALo_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_as);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigPresSnsrAHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigPresSnsrAHi_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ke);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigPresSnsrAPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigPresSnsrAPerf_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_eo);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigTempSnsrCPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigTempSnsrCPerf_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_h);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigPresSnsrCCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigPresSnsrCCktPerf_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_dd);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigExpVlvAct_C_CntrlCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigExpVlvAct_C_CntrlCktPerf_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_dp);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigPresSnsrCCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigPresSnsrCCkt_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ey);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigTempSnsrCCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigTempSnsrCCkt_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_py);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommACRefrigExpVlvActC'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommACRefrigExpVlvActC_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ee);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LIN1_BusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LIN1_BusOff_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_m);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigTempSnsrAPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigTempSnsrAPerf_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_aj);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigExpVlvActCtrCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigExpVlvActCtrCktPerf_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_np);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigTempSnsrBCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigTempSnsrBCkt_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gz);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigTempSnsrACkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigTempSnsrACkt_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_a1);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LIN3_BusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LIN3_BusOff_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_f2);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigExpVlvActD_CntrlCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigExpVlvActD_CntrlCktPerf_Value
        (&ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_pv);

    /* Outputs for Function Call SubSystem: '<Root>/ACCR_FUNC_MedTEH' */
    /* DataStoreWrite: '<S1>/DSW_StatusByte_EvapRefrishutoffCtrlShrtGndFlt' */
    ACCR_ac_DW.StatusByte_EvapRefrishutoffCtrlShrtGndFl =
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_lw;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CommBusOff' */
    ACCR_ac_DW.StatusByte_CommBusOff =
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ja;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LosCommBECM_A' */
    ACCR_ac_DW.StatusByte_LosCommBECM_A =
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nw;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_EvapRefriShutoffCtrlshrtBattFlt' */
    ACCR_ac_DW.StatusByte_EvapRefriShutoffCtrlshrtBattF =
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ak;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CommBus_B_Off' */
    ACCR_ac_DW.StatusByte_CommBus_B_Off =
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_oe;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LIN2_BusOff' */
    ACCR_ac_DW.StatusByte_LIN2_BusOff =
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_c;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommEAC' */
    ACCR_ac_DW.StatusByte_LostCommEAC =
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ne;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CoolCtrlVlv1CktHi' */
    ACCR_ac_DW.StatusByte_CoolCtrlVlv1CktHi =
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_px;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CoolCtrlVlv1CktLo' */
    ACCR_ac_DW.StatusByte_CoolCtrlVlv1CktLo =
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ns;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommACRefrigExpVlvActA' */
    ACCR_ac_DW.StatusByte_LostCommACRefrigExpVlvActA =
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fo;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LosCommBECM_A_CANC11' */
    ACCR_ac_DW.StatusByte_LosCommBECM_A_CANC11 =
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_pi;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_BattCoolPmpPerf' */
    ACCR_ac_DW.StatusByte_BattCoolPmpPerf =
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_dh;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_EACPerf' */
    ACCR_ac_DW.StatusByte_EACPerf =
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_lc;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigPresSnsrALo' */
    ACCR_ac_DW.StatusByte_AC_RefrigPresSnsrALo =
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_as;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigPresSnsrAHi' */
    ACCR_ac_DW.StatusByte_AC_RefrigPresSnsrAHi =
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ke;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigPresSnsrAPerf' */
    ACCR_ac_DW.StatusByte_AC_RefrigPresSnsrAPerf =
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_eo;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigTempSnsrCPerf' */
    ACCR_ac_DW.StatusByte_AC_RefrigTempSnsrCPerf =
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_h;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigPresSnsrCCktPerf' */
    ACCR_ac_DW.StatusByte_AC_RefrigPresSnsrCCktPerf =
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_dd;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigExpVlvAct_C_CntrlCktPerf' */
    ACCR_ac_DW.StatusByte_AC_RefrigExpVlvAct_C_CntrlCkt =
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_dp;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigPresSnsrCCkt' */
    ACCR_ac_DW.StatusByte_AC_RefrigPresSnsrCCkt =
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ey;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigTempSnsrCCkt' */
    ACCR_ac_DW.StatusByte_AC_RefrigTempSnsrCCkt =
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_py;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommACRefrigExpVlvActC' */
    ACCR_ac_DW.StatusByte_LostCommACRefrigExpVlvActC =
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ee;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LIN1_BusOff' */
    ACCR_ac_DW.StatusByte_LIN1_BusOff =
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_m;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigTempSnsrAPerf' */
    ACCR_ac_DW.StatusByte_AC_RefrigTempSnsrAPerf =
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_aj;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigExpVlvActCtrCktPerf' */
    ACCR_ac_DW.StatusByte_AC_RefrigExpVlvActCtrCktPerf =
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_np;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigTempSnsrBCkt' */
    ACCR_ac_DW.StatusByte_AC_RefrigTempSnsrBCkt =
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gz;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigTempSnsrACkt' */
    ACCR_ac_DW.StatusByte_AC_RefrigTempSnsrACkt =
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_a1;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LIN3_BusOff' */
    ACCR_ac_DW.StatusByte_LIN3_BusOff =
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_f2;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigExpVlvActD_CntrlCktPerf' */
    ACCR_ac_DW.StatusByte_AC_RefrigExpVlvActD_CntrlCktP =
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_pv;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InputOverride'
     */
    /* Product: '<S6>/Product' incorporates:
     *  Constant: '<S62>/Calib'
     */
    Product = ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys *
        KeACCR_Cf_Bar2KPa_mHEV;

    /* Switch: '<S74>/Switch' incorporates:
     *  Constant: '<S90>/Calib'
     */
    if (KeACCR_b_HV_BatCntctrStat_SD)
    {
        /* Switch: '<S74>/Switch' incorporates:
         *  Constant: '<S91>/Calib'
         */
        Switch_o3 = KeACCR_e_HV_BatCntctrStat_Dial;
    }
    else
    {
        /* Switch: '<S74>/Switch' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
         */
        Switch_o3 = ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_gcr;
    }

    /* End of Switch: '<S74>/Switch' */

    /* Switch: '<S79>/Switch' incorporates:
     *  Constant: '<S101>/Calib'
     *  Constant: '<S102>/Calib'
     *  Switch: '<S79>/Switch1'
     */
    if (KeACCR_b_VehicleSpeed_SelDial)
    {
        /* Switch: '<S79>/Switch' incorporates:
         *  Constant: '<S103>/Calib'
         */
        Switch_j = KeACCR_v_VehicleSpeed_Dial;
    }
    else
    {
        if (KeACCR_b_VehSpd_FA_SD)
        {
            /* Switch: '<S79>/Switch1' incorporates:
             *  Constant: '<S100>/Calib'
             */
            rtb_AND_mh = KeACCR_b_VehSpd_FA_Dial;
        }
        else
        {
            /* Switch: '<S79>/Switch1' */
            rtb_AND_mh = ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_b;
        }

        /* Switch: '<S79>/Switch2' */
        if (rtb_AND_mh)
        {
            /* Switch: '<S79>/Switch' incorporates:
             *  Constant: '<S104>/Calib'
             */
            Switch_j = KeACCR_v_VehicleSpeed_FailSafe;
        }
        else
        {
            /* Switch: '<S79>/Switch' */
            Switch_j = ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_i;
        }

        /* End of Switch: '<S79>/Switch2' */
    }

    /* End of Switch: '<S79>/Switch' */

    /* Switch: '<S73>/Switch' incorporates:
     *  Constant: '<S88>/Calib'
     */
    if (KeACCR_b_CellOvertemp_SelDial)
    {
        /* Switch: '<S73>/Switch' incorporates:
         *  Constant: '<S89>/Calib'
         */
        Switch_l = KeACCR_dT_CellOvertemp_Dial;
    }
    else
    {
        /* Switch: '<S73>/Switch' */
        Switch_l = ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_n;
    }

    /* End of Switch: '<S73>/Switch' */

    /* Switch: '<S78>/Switch' incorporates:
     *  Constant: '<S99>/Calib'
     */
    if (KeACCR_b_RSVCompTransition_SD)
    {
        /* Switch: '<S78>/Switch' incorporates:
         *  Constant: '<S98>/Calib'
         */
        Switch_n = KeACCR_b_RSVCompTransition_Dial;
    }
    else
    {
        /* Switch: '<S78>/Switch' */
        Switch_n = ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_it;
    }

    /* End of Switch: '<S78>/Switch' */

    /* Switch: '<S70>/Switch' incorporates:
     *  Constant: '<S83>/Calib'
     */
    if (KeACCR_b_ActRemComp_Decid_SD)
    {
        /* Switch: '<S70>/Switch' incorporates:
         *  Constant: '<S82>/Calib'
         */
        Switch_h = KeACCR_b_ActRemComp_Decid_Dial;
    }
    else
    {
        /* Switch: '<S70>/Switch' */
        Switch_h = ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cj;
    }

    /* End of Switch: '<S70>/Switch' */

    /* Switch: '<S69>/Switch' incorporates:
     *  Constant: '<S80>/Calib'
     */
    if (KeACCR_b_AC_Comp_SelDial)
    {
        /* RelationalOperator: '<S864>/Comparison8' incorporates:
         *  Constant: '<S81>/Calib'
         *  Switch: '<S69>/Switch'
         */
        VeACCR_e_AC_CompState_AD = KeACCR_e_AC_Comp_Dial;
    }
    else
    {
        /* RelationalOperator: '<S864>/Comparison8' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
         *  Switch: '<S69>/Switch'
         */
        VeACCR_e_AC_CompState_AD =
            ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mo;
    }

    /* End of Switch: '<S69>/Switch' */

    /* Switch: '<S76>/Switch1' incorporates:
     *  Constant: '<S95>/Calib'
     */
    if (KeACCR_b_CabReq_NotAllow_SelDial)
    {
        /* Switch: '<S76>/Switch1' */
        VeACCR_b_CabReq_NotAllow_AD =
            ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ag;
    }
    else
    {
        /* Switch: '<S76>/Switch1' incorporates:
         *  Constant: '<S94>/Calib'
         */
        VeACCR_b_CabReq_NotAllow_AD = KeACCR_b_CabReq_NotAllow_Dial;
    }

    /* End of Switch: '<S76>/Switch1' */

    /* Switch: '<S71>/Switch' incorporates:
     *  Constant: '<S85>/Calib'
     */
    if (KeACCR_b_BattAllowed_SD)
    {
        /* Switch: '<S71>/Switch' incorporates:
         *  Constant: '<S84>/Calib'
         */
        VeACCR_b_BattAllowed_AD = KeACCR_b_BattAllowed_D;
    }
    else
    {
        /* Switch: '<S71>/Switch' */
        VeACCR_b_BattAllowed_AD =
            ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_dr;
    }

    /* End of Switch: '<S71>/Switch' */

    /* Switch: '<S72>/Switch' incorporates:
     *  Constant: '<S87>/Calib'
     */
    if (KeACCR_b_CabAllowed_SD)
    {
        /* Switch: '<S72>/Switch' incorporates:
         *  Constant: '<S86>/Calib'
         */
        VeACCR_b_CabAllowed_AD = KeACCR_b_CabAllowed_D;
    }
    else
    {
        /* Switch: '<S72>/Switch' */
        VeACCR_b_CabAllowed_AD =
            ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_hj;
    }

    /* End of Switch: '<S72>/Switch' */

    /* Switch: '<S75>/Switch' incorporates:
     *  Constant: '<S92>/Calib'
     */
    if (KeACCR_b_HybSysSt_SD)
    {
        /* Switch: '<S75>/Switch' incorporates:
         *  Constant: '<S93>/Calib'
         */
        VeACCR_e_HybSysSt_AD = KeACCR_e_HybSysSt_D;
    }
    else
    {
        /* Switch: '<S75>/Switch' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
         */
        VeACCR_e_HybSysSt_AD =
            ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_oa;
    }

    /* End of Switch: '<S75>/Switch' */

    /* Switch: '<S64>/Switch2' incorporates:
     *  Constant: '<S68>/Calib'
     */
    if (KeACCR_b_LimitCheckSts_Slct)
    {
        /* Switch: '<S64>/Switch2' */
        VeACCR_b_LimCheckingStatus_AD =
            ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cq;
    }
    else
    {
        /* Switch: '<S64>/Switch2' incorporates:
         *  Constant: '<S67>/Calib'
         */
        VeACCR_b_LimCheckingStatus_AD = KeACCR_b_LimitCheckSts_Dial;
    }

    /* End of Switch: '<S64>/Switch2' */

    /* Switch: '<S64>/Switch3' incorporates:
     *  Constant: '<S66>/Calib'
     */
    if (KeACCR_b_InFieldMode_Slct)
    {
        /* Switch: '<S64>/Switch3' */
        VeACCR_b_InFieldMode_AD =
            ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_pk;
    }
    else
    {
        /* Switch: '<S64>/Switch3' incorporates:
         *  Constant: '<S65>/Calib'
         */
        VeACCR_b_InFieldMode_AD = KeACCR_b_InFieldMode_Dial;
    }

    /* End of Switch: '<S64>/Switch3' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Subsystem1'
     */
    /* Logic: '<S7>/Logical1' incorporates:
     *  Constant: '<S106>/Constant'
     *  Constant: '<S107>/Calib'
     *  RelationalOperator: '<S7>/Comparison2'
     *  Switch: '<S75>/Switch'
     */
    rtb_Logical1_cp = ((((uint32)VeACCR_e_HybSysSt_AD) ==
                        CeHPMR_e_OPERATIONAL_ALTERNATOR) &&
                       (KeACCR_b_AlternatorMode_Enbl));

    /* Logic: '<S1040>/AND' incorporates:
     *  Logic: '<S915>/Logical4'
     *  Logic: '<S942>/Logical1'
     *  Logic: '<S942>/Logical3'
     *  Logic: '<S942>/Logical5'
     *  Logic: '<S942>/Logical6'
     *  RelationalOperator: '<S942>/Comparison1'
     *  RelationalOperator: '<S942>/Comparison9'
     */
#if Rte_SysCon_Variant_ACCR_FUNC_1

    /* Logic: '<S1040>/AND' */
    VeACCR_b_OilMigOpnVlv_B4Merg_mHEV = VeACCR_b_ACOilMigStarted_mHEV;

    /* Logic: '<S942>/Logical1' incorporates:
     *  Constant: '<S943>/Constant'
     *  Constant: '<S944>/Constant'
     */
    rtb_Logical1_ecb = (((((uint32)Switch_o3) != CeHVTR_e_Closed) &&
                         (!rtb_Logical1_cp)) || (rtb_Logical1_cp && (((uint32)
                           Switch_o3) != CeHVTR_e_Open)));

    /* Logic: '<S915>/Logical4' */
    rtb_Logical4 = !rtb_Logical1_ecb;

#endif

    /* End of Logic: '<S1040>/AND' */

    /* RelationalOperator: '<S862>/Comparison12' incorporates:
     *  Constant: '<S871>/Constant'
     */
    VeACCR_b_ACCompEnbl_1 = (CePMTR_e_ENB_All_Thrml == ((uint32)
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_n0));

    /* Logic: '<S863>/Logical1' incorporates:
     *  Constant: '<S872>/Constant'
     *  Constant: '<S873>/Constant'
     *  Constant: '<S874>/Constant'
     *  RelationalOperator: '<S863>/Comparison1'
     *  RelationalOperator: '<S863>/Comparison10'
     *  RelationalOperator: '<S863>/Comparison2'
     */
    VeACCR_b_ACCompEnbl_2 = (((((uint32)
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_n0) !=
        CePMTR_e_DISBL_All_Thrml) && (((uint32)
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_n0) !=
        CePMTR_e_ENB_All_Excpt_Comp)) && (((uint32)
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_n0) !=
        CePMTR_e_Enb_Only_LT_Pmp_N_Fan));

    /* Logic: '<S864>/Logical3' incorporates:
     *  Constant: '<S875>/Constant'
     *  Constant: '<S876>/Constant'
     *  Constant: '<S877>/Constant'
     *  RelationalOperator: '<S864>/Comparison3'
     *  RelationalOperator: '<S864>/Comparison8'
     *  RelationalOperator: '<S864>/Comparison9'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
     */
    VeACCR_b_ACCompEnbl_3 = (((((uint32)
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_hc) ==
        CeHCDR_e_BattThermalNoFault) && (CeTHMR_e_ACOff != ((uint32)
        VeACCR_e_AC_CompState_AD))) && (((uint32)VeACCR_e_AC_CompState_AD) !=
        CeTHMR_e_ACFaulty));

    /* Switch: '<S865>/Switch1' incorporates:
     *  Constant: '<S884>/Calib'
     *  Constant: '<S885>/Calib'
     *  Constant: '<S886>/Calib'
     *  Constant: '<S887>/Calib'
     *  Constant: '<S888>/Calib'
     *  Constant: '<S889>/Constant1'
     *  Constant: '<S889>/Constant2'
     *  Constant: '<S890>/Constant1'
     *  Constant: '<S890>/Constant2'
     *  Constant: '<S891>/Constant1'
     *  Constant: '<S891>/Constant2'
     *  Constant: '<S892>/Constant1'
     *  Constant: '<S892>/Constant2'
     *  Constant: '<S893>/Calib'
     *  Constant: '<S894>/Constant1'
     *  Constant: '<S894>/Constant2'
     *  Constant: '<S895>/Constant1'
     *  Constant: '<S895>/Constant2'
     *  Constant: '<S896>/Constant1'
     *  Constant: '<S896>/Constant2'
     *  Constant: '<S897>/Constant1'
     *  Constant: '<S897>/Constant2'
     *  Constant: '<S898>/Constant1'
     *  Constant: '<S898>/Constant2'
     *  Constant: '<S899>/Constant1'
     *  Constant: '<S899>/Constant2'
     *  Constant: '<S900>/Constant1'
     *  Constant: '<S900>/Constant2'
     *  Constant: '<S901>/Constant1'
     *  Constant: '<S901>/Constant2'
     *  DataStoreRead: '<S889>/StatusByte_LostCommEAC'
     *  DataStoreRead: '<S890>/StatusByte_CommBusOff'
     *  DataStoreRead: '<S891>/StatusByte_CommBus_B_Off'
     *  DataStoreRead: '<S892>/StatusByte_LIN2_BusOff'
     *  DataStoreRead: '<S894>/StatusByte_AC_RefrigExpVlvActD_CntrlCktPerf'
     *  DataStoreRead: '<S895>/StatusByte_LostCommACRefrigExpVlvActA'
     *  DataStoreRead: '<S896>/StatusByte_EACPerf'
     *  DataStoreRead: '<S897>/StatusByte_AC_RefrigExpVlvAct_C_CntrlCktPerf'
     *  DataStoreRead: '<S898>/StatusByte_LostCommACRefrigExpVlvActC'
     *  DataStoreRead: '<S899>/StatusByte_LIN1_BusOff'
     *  DataStoreRead: '<S900>/StatusByte_AC_RefrigExpVlvActCtrCktPerf'
     *  DataStoreRead: '<S901>/StatusByte_LIN3_BusOff'
     *  Logic: '<S865>/Logical10'
     *  Logic: '<S865>/Logical11'
     *  Logic: '<S865>/Logical13'
     *  Logic: '<S865>/Logical7'
     *  Logic: '<S865>/Logical8'
     *  Logic: '<S865>/Logical9'
     *  Logic: '<S881>/Logical1'
     *  Logic: '<S881>/Logical11'
     *  Logic: '<S889>/Logical Operator'
     *  Logic: '<S890>/Logical Operator'
     *  Logic: '<S891>/Logical Operator'
     *  Logic: '<S892>/Logical Operator'
     *  Logic: '<S894>/Logical Operator'
     *  Logic: '<S895>/LogicalOperator'
     *  Logic: '<S896>/Logical Operator'
     *  Logic: '<S897>/Logical Operator'
     *  Logic: '<S898>/Logical Operator'
     *  Logic: '<S899>/Logical Operator'
     *  Logic: '<S900>/Logical Operator'
     *  Logic: '<S901>/Logical Operator'
     *  RelationalOperator: '<S889>/Relational Operator1'
     *  RelationalOperator: '<S889>/Relational Operator2'
     *  RelationalOperator: '<S890>/Relational Operator1'
     *  RelationalOperator: '<S890>/Relational Operator2'
     *  RelationalOperator: '<S891>/Relational Operator1'
     *  RelationalOperator: '<S891>/Relational Operator2'
     *  RelationalOperator: '<S892>/Relational Operator1'
     *  RelationalOperator: '<S892>/Relational Operator2'
     *  RelationalOperator: '<S894>/Relational Operator1'
     *  RelationalOperator: '<S894>/Relational Operator2'
     *  RelationalOperator: '<S895>/RelationalOperator1'
     *  RelationalOperator: '<S895>/RelationalOperator2'
     *  RelationalOperator: '<S896>/Relational Operator1'
     *  RelationalOperator: '<S896>/Relational Operator2'
     *  RelationalOperator: '<S897>/Relational Operator1'
     *  RelationalOperator: '<S897>/Relational Operator2'
     *  RelationalOperator: '<S898>/Relational Operator1'
     *  RelationalOperator: '<S898>/Relational Operator2'
     *  RelationalOperator: '<S899>/Relational Operator1'
     *  RelationalOperator: '<S899>/Relational Operator2'
     *  RelationalOperator: '<S900>/Relational Operator1'
     *  RelationalOperator: '<S900>/Relational Operator2'
     *  RelationalOperator: '<S901>/Relational Operator1'
     *  RelationalOperator: '<S901>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S889>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S889>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S890>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S890>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S891>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S891>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S892>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S892>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S894>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S894>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S895>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S895>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S896>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S896>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S897>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S897>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S898>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S898>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S899>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S899>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S900>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S900>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S901>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S901>/Bitwise Operator2'
     */
    if (KeACCR_b_EACPrefFlt_En)
    {
        rtb_AND_mh = ((((((uint32)ACCR_ac_DW.StatusByte_LostCommEAC) & 1U) != 0U)
                       && ((((uint32)ACCR_ac_DW.StatusByte_LostCommEAC) & 64U) ==
                           0U)) && (KeACCR_b_EACPrefFlt_Dial));
    }
    else
    {
        rtb_AND_mh = (((((((((uint32)ACCR_ac_DW.StatusByte_LostCommEAC) & 1U) !=
                           0U) && ((((uint32)ACCR_ac_DW.StatusByte_LostCommEAC)
                            & 64U) == 0U)) && (KeACCR_b_EACPrefFlt_Dial)) ||
                        (((((((uint32)ACCR_ac_DW.StatusByte_CommBusOff) & 1U) !=
                            0U) && ((((uint32)ACCR_ac_DW.StatusByte_CommBusOff)
                             & 64U) == 0U)) && (KeACCR_b_CommBussOff_Dial)) &&
                         ((((((uint32)ACCR_ac_DW.StatusByte_CommBus_B_Off) & 1U)
                            != 0U) && ((((uint32)
                              ACCR_ac_DW.StatusByte_CommBus_B_Off) & 64U) == 0U))
                          || (KeACCR_b_RedundantCommBusOff_Dial)))) ||
                       ((((((uint32)ACCR_ac_DW.StatusByte_LIN2_BusOff) & 1U) !=
                          0U) && ((((uint32)ACCR_ac_DW.StatusByte_LIN2_BusOff) &
                           64U) == 0U)) && (KeACCR_b_LIN2CommBusOff_Dial))) ||
                      ((KeACCR_b_DsblEAC_HeatPmpRA_En) && ((((((((((((uint32)
            ACCR_ac_DW.StatusByte_EACPerf) & 1U) != 0U) && ((((uint32)
            ACCR_ac_DW.StatusByte_EACPerf) & 64U) == 0U)) || (((((uint32)
            ACCR_ac_DW.StatusByte_AC_RefrigExpVlvAct_C_CntrlCkt) & 1U) != 0U) &&
                               ((((uint32)
            ACCR_ac_DW.StatusByte_AC_RefrigExpVlvAct_C_CntrlCkt) & 64U) == 0U)))
                             || (((((uint32)
            ACCR_ac_DW.StatusByte_LostCommACRefrigExpVlvActC) & 1U) != 0U) &&
                              ((((uint32)
            ACCR_ac_DW.StatusByte_LostCommACRefrigExpVlvActC) & 64U) == 0U))) ||
                            (((((uint32)ACCR_ac_DW.StatusByte_LIN1_BusOff) & 1U)
                              != 0U) && ((((uint32)
                                ACCR_ac_DW.StatusByte_LIN1_BusOff) & 64U) == 0U)))
                           || (((((uint32)
                               ACCR_ac_DW.StatusByte_AC_RefrigExpVlvActCtrCktPerf)
                              & 1U) != 0U) && ((((uint32)
                               ACCR_ac_DW.StatusByte_AC_RefrigExpVlvActCtrCktPerf)
                              & 64U) == 0U))) || (((((sint32)
                              ACCR_ac_DW.StatusByte_LostCommACRefrigExpVlvActA)
                             & 1) > 0) && ((((uint32)
                              ACCR_ac_DW.StatusByte_LostCommACRefrigExpVlvActA)
                             & 64U) == 0U))) || (((((uint32)
                             ACCR_ac_DW.StatusByte_LIN3_BusOff) & 1U) != 0U) &&
                          ((((uint32)ACCR_ac_DW.StatusByte_LIN3_BusOff) & 64U) ==
                           0U))) || (((((uint32)
                            ACCR_ac_DW.StatusByte_AC_RefrigExpVlvActD_CntrlCktP)
                           & 1U) != 0U) && ((((uint32)
                            ACCR_ac_DW.StatusByte_AC_RefrigExpVlvActD_CntrlCktP)
                           & 64U) == 0U)))));
    }

    /* End of Switch: '<S865>/Switch1' */

    /* Switch: '<S882>/Switch1' incorporates:
     *  Constant: '<S878>/Constant'
     *  Constant: '<S880>/Constant'
     *  Constant: '<S883>/Calib'
     *  Logic: '<S865>/Logical12'
     */
    if (rtb_AND_mh && (KeACCR_b_AC_FltState_EACLocEnb))
    {
        tmp = CeHCDR_e_BattThermalCompFault;
    }
    else
    {
        tmp = CeHCDR_e_BattThermalNoFault;
    }

    /* End of Switch: '<S882>/Switch1' */

    /* RelationalOperator: '<S865>/Comparison3' incorporates:
     *  Constant: '<S879>/Constant'
     */
    VeACCR_b_ACCompEnbl_4 = (((uint32)tmp) == CeHCDR_e_BattThermalNoFault);

    /* Switch: '<S866>/Switch1' incorporates:
     *  Constant: '<S906>/Calib'
     *  Switch: '<S866>/Switch2'
     */
    if (KeACCR_b_CompTempChk_SD)
    {
        rtb_Sum1_eo = ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j3;
        rtb_AND_mh = ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_m3;
    }
    else
    {
        rtb_Sum1_eo = ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nn;
        rtb_AND_mh = ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bn;
    }

    /* End of Switch: '<S866>/Switch1' */

    /* Logic: '<S866>/Logical4' incorporates:
     *  Logic: '<S326>/LogicalOperator3'
     */
    rtb_Logical8_nn = !ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_b2;

    /* Switch: '<S869>/Switch1' incorporates:
     *  Constant: '<S902>/Calib'
     *  Constant: '<S903>/Calib'
     *  Constant: '<S904>/Calib'
     *  Constant: '<S905>/Calib'
     *  Constant: '<S907>/Calib'
     *  Constant: '<S908>/Calib'
     *  Constant: '<S909>/Calib'
     *  Constant: '<S910>/Calib'
     *  Constant: '<S911>/Calib'
     *  Logic: '<S859>/Logical'
     *  Logic: '<S859>/Logical4'
     *  Logic: '<S866>/Logical'
     *  Logic: '<S866>/Logical1'
     *  Logic: '<S866>/Logical2'
     *  Logic: '<S866>/Logical3'
     *  Logic: '<S866>/Logical4'
     *  Logic: '<S866>/Logical5'
     *  Logic: '<S866>/Logical6'
     *  Logic: '<S866>/Logical7'
     *  Logic: '<S866>/Logical8'
     *  Logic: '<S867>/Logical1'
     *  Logic: '<S867>/Logical3'
     *  Logic: '<S868>/Logical2'
     *  Logic: '<S868>/Logical5'
     *  Logic: '<S870>/Logical6'
     *  Logic: '<S870>/Logical7'
     *  RelationalOperator: '<S866>/Comparison1'
     *  RelationalOperator: '<S866>/Comparison2'
     */
    VeACCR_b_ACCompEnbl_B4D = ((((((((VeACCR_b_ACCompEnbl_1) &&
        (VeACCR_b_ACCompEnbl_2)) && (VeACCR_b_ACCompEnbl_3)) &&
        (VeACCR_b_ACCompEnbl_4)) && ((((rtb_Sum1_eo > KeACCR_T_CompBoardTmp_Th) &&
        ((!rtb_AND_mh) || (KeACCR_b_CompBoardTmpFA_Ovvrd))) ||
        (KeACCR_b_DsblCompBoard_TmpChk)) &&
        (((ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_a >
           KeACCR_T_AmbAirTemp_Th) && (rtb_Logical8_nn ||
        (KeACCR_b_AmbAirTempFA_Ovrd))) || (KeACCR_b_DsblAmbAir_TmpChk)))) &&
        ((!ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ct) ||
         (KeACCR_b_CompSpdFdb_FA_En))) &&
        ((!ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_ns5) ||
         (KeACCR_b_DsblAC_ECVDCurrentAct_FA_Ovrrd))) &&
        ((!ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_l4) ||
         (KeACCR_b_Ignr_ACShtdownReq_EXV)));

    /* Switch: '<S113>/Switch1' incorporates:
     *  Constant: '<S861>/Calib'
     */
    if (KeACCR_b_AC_CompEnb_SelDial)
    {
        /* Switch: '<S113>/Switch1' incorporates:
         *  Constant: '<S860>/Calib'
         */
        VeACCR_b_ACCompEnbl = KeACCR_b_AC_CompEnb_Dial;
    }
    else
    {
        /* Switch: '<S113>/Switch1' */
        VeACCR_b_ACCompEnbl = VeACCR_b_ACCompEnbl_B4D;
    }

    /* End of Switch: '<S113>/Switch1' */

    /* Lookup_n-D: '<S297>/Vector' incorporates:
     *  Switch: '<S73>/Switch'
     */
    rtb_Vector = look1_iflf_binlca_16a(Switch_l, ((const float32 *)
        &(KxACCR_n_ChillerRPMlookup[0])), ((const float32 *)
        &(KtACCR_n_ChillerRPMlookup[0])), 6U);

    /* Logic: '<S915>/Logical1' incorporates:
     *  Constant: '<S1008>/Constant'
     *  Constant: '<S1009>/Constant'
     *  Constant: '<S1010>/Calib'
     *  Constant: '<S1011>/Calib'
     *  Constant: '<S1012>/Calib'
     *  Constant: '<S1019>/Constant'
     *  Constant: '<S1021>/Calib'
     *  Constant: '<S1022>/Calib'
     *  Constant: '<S1035>/Calib'
     *  Constant: '<S1066>/Calib'
     *  Constant: '<S1067>/Calib'
     *  Constant: '<S919>/Calib'
     *  Constant: '<S954>/Calib'
     *  Constant: '<S966>/Calib'
     *  Constant: '<S999>/Constant'
     *  Logic: '<S1018>/Logical14'
     *  Logic: '<S1018>/Logical5'
     *  Logic: '<S1062>/Logical1'
     *  Logic: '<S1062>/Logical2'
     *  Logic: '<S912>/Logical1'
     *  Logic: '<S912>/Logical2'
     *  Logic: '<S946>/Logical1'
     *  Logic: '<S946>/Logical2'
     *  Logic: '<S946>/Logical3'
     *  Logic: '<S947>/Logical1'
     *  Logic: '<S947>/Logical10'
     *  Logic: '<S947>/Logical2'
     *  Logic: '<S947>/Logical3'
     *  Logic: '<S947>/Logical4'
     *  Logic: '<S947>/Logical5'
     *  Logic: '<S947>/Logical6'
     *  Logic: '<S948>/LogicalOperator'
     *  Logic: '<S948>/LogicalOperator1'
     *  Logic: '<S948>/LogicalOperator2'
     *  Logic: '<S948>/LogicalOperator3'
     *  Logic: '<S952>/LogicalOperator'
     *  Logic: '<S952>/LogicalOperator1'
     *  Logic: '<S952>/LogicalOperator2'
     *  Logic: '<S952>/LogicalOperator3'
     *  Logic: '<S953>/Logical1'
     *  Logic: '<S953>/Logical2'
     *  Logic: '<S957>/LogicalOperator'
     *  Logic: '<S957>/LogicalOperator1'
     *  Logic: '<S957>/LogicalOperator2'
     *  Logic: '<S975>/Logical2'
     *  Logic: '<S975>/Logical3'
     *  Lookup_n-D: '<S1017>/Vector'
     *  Lookup_n-D: '<S1063>/Vector'
     *  MinMax: '<S1062>/MinMax'
     *  MinMax: '<S1062>/MinMax1'
     *  MinMax: '<S1062>/MinMax2'
     *  MinMax: '<S1062>/MinMax3'
     *  Product: '<S950>/Product'
     *  RelationalOperator: '<S1018>/Comparison2'
     *  RelationalOperator: '<S1018>/Comparison6'
     *  RelationalOperator: '<S1018>/Comparison9'
     *  RelationalOperator: '<S1039>/Comparison1'
     *  RelationalOperator: '<S1062>/Comparison1'
     *  RelationalOperator: '<S1062>/Comparison2'
     *  RelationalOperator: '<S1062>/Comparison3'
     *  RelationalOperator: '<S912>/Comparison3'
     *  RelationalOperator: '<S947>/Comparison1'
     *  RelationalOperator: '<S947>/Comparison2'
     *  RelationalOperator: '<S947>/Comparison3'
     *  RelationalOperator: '<S947>/Comparison6'
     *  RelationalOperator: '<S947>/Comparison9'
     *  RelationalOperator: '<S948>/Comparison1'
     *  RelationalOperator: '<S948>/Comparison9'
     *  RelationalOperator: '<S952>/Comparison2'
     *  RelationalOperator: '<S952>/Comparison4'
     *  RelationalOperator: '<S957>/Comparison4'
     *  RelationalOperator: '<S958>/Comparison9'
     *  RelationalOperator: '<S975>/Comparison3'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
     *  SignalConversion generated from: '<S1063>/Vector'
     *  SignalConversion generated from: '<S7>/VariantSource2'
     *  Sum: '<S1062>/Sum1'
     *  Sum: '<S974>/Sum1'
     *  Sum: '<S975>/Sum3'
     *  Switch: '<S1002>/Switch1'
     *  Switch: '<S1003>/Switch1'
     *  Switch: '<S1014>/Switch1'
     *  Switch: '<S1018>/Switch'
     *  Switch: '<S1020>/Switch1'
     *  Switch: '<S1025>/Switch1'
     *  Switch: '<S1034>/Switch1'
     *  Switch: '<S1034>/Switch2'
     *  Switch: '<S1045>/Switch1'
     *  Switch: '<S1052>/Switch1'
     *  Switch: '<S1060>/Switch1'
     *  Switch: '<S1064>/Switch'
     *  Switch: '<S1065>/Switch1'
     *  Switch: '<S1068>/Switch1'
     *  Switch: '<S1069>/Switch1'
     *  Switch: '<S912>/Switch1'
     *  Switch: '<S916>/Switch'
     *  Switch: '<S946>/Switch'
     *  Switch: '<S946>/Switch1'
     *  Switch: '<S947>/Switch1'
     *  Switch: '<S964>/Switch1'
     *  Switch: '<S965>/Switch1'
     *  UnitDelay: '<S946>/UnitDelay'
     */
#if Rte_SysCon_Variant_ACCR_FUNC_1

    /* Outputs for Atomic SubSystem: '<S912>/TurnOnDelayTime' */
    /* Outputs for Atomic SubSystem: '<S1062>/Limiter' */
    /* Outputs for Atomic SubSystem: '<S1057>/TimerResetEnabled1' */
    /* Outputs for Atomic SubSystem: '<S1057>/EdgeRising1' */
    /* Outputs for Atomic SubSystem: '<S975>/TmrRstEnabled' */
    /* Outputs for Enabled SubSystem: '<S975>/Set_retract_RPM' */
    /* Outputs for Atomic SubSystem: '<S975>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S974>/Limiter' */
    /* Outputs for Atomic SubSystem: '<S974>/PIDControl' */
    /* Outputs for Atomic SubSystem: '<S974>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S946>/Hysteresis1' */
    /* Outputs for Atomic SubSystem: '<S946>/Hysteresis' */
    /* Outputs for Atomic SubSystem: '<S946>/TimerResetEnabled' */
    /* Outputs for Atomic SubSystem: '<S946>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S1031>/TimerResetEnabled1' */
    /* Outputs for Atomic SubSystem: '<S1031>/EdgeRising1' */
    /* Logic: '<S915>/Logical1' */
    VeACCR_b_ACClutchAllow = (rtb_Logical4 && (VeACCR_b_ACCompEnbl));

    /* Logic: '<S912>/Logical2' incorporates:
     *  Constant: '<S918>/Calib'
     */
    rtb_Logical2_jm = ((VeACCR_b_ACClutchAllow) || (KeACCR_b_AC_Clutchreq_Ovrd));
    if (KeACCR_b_BattTher_ActvCool_SD)
    {
        rtb_AND_mh = KeACCR_b_BattTher_ActCool_Dial;
    }
    else
    {
        rtb_AND_mh = (((uint32)
                       ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cg) ==
                      CeTHMR_e_EmergencyCooling);
    }

    /* Logic: '<S1018>/Logical14' incorporates:
     *  Constant: '<S1019>/Constant'
     *  Constant: '<S1021>/Calib'
     *  Constant: '<S1022>/Calib'
     *  RelationalOperator: '<S1018>/Comparison9'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
     */
    VeACCR_b_NoCabCondAllwd = ((((rtb_AND_mh ||
        (!ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_ig2)) ||
        (VeACCR_b_CabReq_NotAllow_AD)) || (!VeACCR_b_CabAllowed_AD)) ||
        (ACCR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_i));
    if (VeACCR_b_NoCabCondAllwd)
    {
        /* Switch: '<S1020>/Switch1' incorporates:
         *  Constant: '<S1018>/ConstantValue2'
         */
        VeACCR_I_ECVD_HVACCabinReqCurrent = 0.0F;
    }
    else
    {
        /* Switch: '<S1020>/Switch1' */
        VeACCR_I_ECVD_HVACCabinReqCurrent =
            ACCR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy;
    }

    /* Logic: '<S947>/Logical1' incorporates:
     *  Constant: '<S1000>/Constant'
     *  Constant: '<S1001>/Constant'
     *  Constant: '<S1005>/Calib'
     */
    rtb_Logical1_n3o = ((((CeTHMR_e_EmergencyCooling == ((uint32)
                            ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cg))
                          || (((uint32)
                            ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cg) ==
                           CeTHMR_e_ActiveCooling)) ||
                         (KeACCR_b_IgnorBatThrml_State)) &&
                        (VeACCR_b_BattAllowed_AD));

    /* Logic: '<S947>/Logical3' incorporates:
     *  Constant: '<S1004>/Calib'
     *  Constant: '<S997>/Constant'
     *  Constant: '<S998>/Constant'
     */
    rtb_Logical3_ke = (rtb_Logical1_n3o && ((((uint32)
                          ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_h0) ==
                         CePDTR_e_Dischrg_ForcBatCool_Hys) || ((((uint32)
                           ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_h0) ==
                          CePDTR_e_Dischrg_BatTempNotOpt) &&
                         (KeACCR_b_BatTempNotOpt_Chk_En))));
    if ((((uint32)ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_h0) ==
            CePDTR_e_Dischrg_BatTempNotOpt) && rtb_Logical1_n3o)
    {
        /* Switch: '<S947>/Switch1' incorporates:
         *  Constant: '<S1007>/Calib'
         *  Sum: '<S947>/Sum'
         */
        VeACCR_n_CellOvertempRPM_mHEV = rtb_Vector + KeACCR_n_RPMCompSpd_Boost;
    }
    else
    {
        /* Switch: '<S947>/Switch1' */
        VeACCR_n_CellOvertempRPM_mHEV = rtb_Vector;
    }

    if (rtb_Logical3_ke)
    {
        /* Switch: '<S1002>/Switch1' incorporates:
         *  Constant: '<S1006>/Calib'
         */
        VeACCR_n_RPMchiller_mHEV = KeACCR_n_RPMCompSpd_Batt_OV;
    }
    else if (rtb_Logical1_n3o)
    {
        /* Switch: '<S1003>/Switch1' incorporates:
         *  Switch: '<S1002>/Switch1'
         */
        VeACCR_n_RPMchiller_mHEV = VeACCR_n_CellOvertempRPM_mHEV;
    }
    else
    {
        /* Switch: '<S1002>/Switch1' incorporates:
         *  Constant: '<S947>/ConstantValue2'
         *  Switch: '<S1003>/Switch1'
         */
        VeACCR_n_RPMchiller_mHEV = 0.0F;
    }

    if (VeACCR_b_ACOilMigStarted_mHEV)
    {
        /* Switch: '<S1045>/Switch1' incorporates:
         *  Constant: '<S1050>/Calib'
         */
        VeACCR_n_RPMoilmig_mHEV = KeACCR_n_ACOilMigRPM;
    }
    else
    {
        /* Switch: '<S1045>/Switch1' incorporates:
         *  Constant: '<S1039>/ConstantValue2'
         */
        VeACCR_n_RPMoilmig_mHEV = 0.0F;
    }

    if (Switch_n)
    {
        /* Switch: '<S1060>/Switch1' incorporates:
         *  Constant: '<S111>/Calib'
         */
        VeACCR_n_RPMvalve_mHEV = KeACCR_n_FtERVShutMaxRPM;
    }
    else
    {
        /* Switch: '<S1060>/Switch1' incorporates:
         *  Constant: '<S110>/Calib'
         */
        VeACCR_n_RPMvalve_mHEV = KeACCR_n_CompRPMmax;
    }

    /* Logic: '<S953>/Logical1' incorporates:
     *  Constant: '<S1035>/Calib'
     *  Constant: '<S999>/Constant'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
     *  Switch: '<S1003>/Switch1'
     */
    VeACCR_b_REMcompallowed_mHEV = ((KeACCR_b_REMobey) && Switch_h);
    if (!KeACCR_b_REMobey)
    {
        /* Switch: '<S1034>/Switch1' incorporates:
         *  Constant: '<S110>/Calib'
         */
        VeACCR_n_RPMinplant_mHEV = KeACCR_n_CompRPMmax;
    }
    else if (VeACCR_b_REMcompallowed_mHEV)
    {
        /* Switch: '<S1034>/Switch2' incorporates:
         *  Constant: '<S110>/Calib'
         *  Switch: '<S1034>/Switch1'
         */
        VeACCR_n_RPMinplant_mHEV = KeACCR_n_CompRPMmax;
    }
    else
    {
        /* Switch: '<S1034>/Switch1' incorporates:
         *  Constant: '<S953>/ConstantValue2'
         *  Switch: '<S1034>/Switch2'
         */
        VeACCR_n_RPMinplant_mHEV = 0.0F;
    }

    /* Logic: '<S952>/LogicalOperator' incorporates:
     *  Constant: '<S1023>/Constant'
     *  Constant: '<S1024>/Constant'
     *  Constant: '<S1026>/Calib'
     *  Constant: '<S1027>/Calib'
     *  Constant: '<S1035>/Calib'
     *  Switch: '<S1034>/Switch2'
     */
    VeACCR_b_ClutchNotEngaged = (((KeACCR_b_DisarmVlv_ClutchSts1) &&
        (CeTAIR_e_ClutchSts_ECMDsblsClutch == ((uint32)
        ACCR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_c))) || ((((uint32)
        ACCR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_c) ==
        CeTAIR_e_ClutchSts_ACnotSlctd) && (KeACCR_b_DisarmVlv_ClutchSts2)));

    /* Logic: '<S952>/LogicalOperator3' */
    VeACCR_b_ClutchNotEngaged_ActvCool = ((VeACCR_b_ClutchNotEngaged) &&
        rtb_Logical1_n3o);

    /* UnitDelay: '<S1044>/UnitDelay' incorporates:
     *  UnitDelay: '<S1032>/UnitDelay'
     */
    rtb_Logical4 = ACCR_ac_DW.UnitDelay_DSTATE_fm;

    /* Update for UnitDelay: '<S1032>/UnitDelay' */
    ACCR_ac_DW.UnitDelay_DSTATE_fm = VeACCR_b_ClutchNotEngaged_ActvCool;

    /* Switch: '<S1033>/Switch1' incorporates:
     *  Constant: '<S1030>/Calib'
     *  Constant: '<S1031>/ConstantValue1'
     *  Constant: '<S1033>/ConstantValue3'
     *  Constant: '<S1033>/ConstantValue4'
     *  Logic: '<S1032>/AND'
     *  Logic: '<S1032>/OR1'
     *  Logic: '<S1033>/AND1'
     *  MinMax: '<S1033>/Maximum'
     *  RelationalOperator: '<S1033>/GreaterThan2'
     *  Sum: '<S1033>/Subtraction'
     *  UnitDelay: '<S1033>/UnitDelay'
     */
    if (((VeACCR_b_ClutchNotEngaged_ActvCool) && (!rtb_Logical4)) &&
            (ACCR_ac_DW.UnitDelay_DSTATE_d <= 0.0F))
    {
        ACCR_ac_DW.UnitDelay_DSTATE_d = KeACCR_t_CompFaultDelayTime;
    }
    else
    {
        ACCR_ac_DW.UnitDelay_DSTATE_d = fmaxf(ACCR_ac_DW.UnitDelay_DSTATE_d -
            0.1F, 0.0F);
    }

    /* End of Switch: '<S1033>/Switch1' */

    /* RelationalOperator: '<S1033>/GreaterThan1' incorporates:
     *  Constant: '<S1033>/ConstantValue2'
     *  UnitDelay: '<S1033>/UnitDelay'
     */
    VeACCR_b_ClutchFaultDelayActive = (ACCR_ac_DW.UnitDelay_DSTATE_d > 0.0F);
    if (KeACCR_b_CompRPM_SlctCal)
    {
        /* Switch: '<S916>/Switch' incorporates:
         *  Constant: '<S955>/Calib'
         */
        VeACCR_n_RPMPreCharge_app_mHEV = KeACCR_n_CompRPMdefault;
    }
    else
    {
        /* Switch: '<S916>/Switch' incorporates:
         *  Constant: '<S110>/Calib'
         */
        VeACCR_n_RPMPreCharge_app_mHEV = KeACCR_n_CompRPMmax;
    }

    if (VeACCR_b_ClutchNotEngaged_ActvCool)
    {
        /* Switch: '<S952>/Switch1' incorporates:
         *  Constant: '<S1028>/Calib'
         *  Constant: '<S1029>/Calib'
         *  Switch: '<S952>/Switch2'
         *  Switch: '<S952>/Switch3'
         */
        if ((KeACCR_b_ECVDMinSel_ClutchDiseng) ||
                (VeACCR_b_ClutchFaultDelayActive))
        {
            /* Switch: '<S1025>/Switch1' incorporates:
             *  Constant: '<S109>/Calib'
             */
            VeACCR_n_RPMfault_app_mHEV = KeACCR_n_CompRPMMin2;
        }
        else if (KeACCR_b_DisarmVlv_ClutchTmrExprd)
        {
            /* Switch: '<S952>/Switch2' incorporates:
             *  Switch: '<S1025>/Switch1'
             */
            VeACCR_n_RPMfault_app_mHEV = VeACCR_n_RPMPreCharge_app_mHEV;
        }
        else
        {
            /* Switch: '<S1025>/Switch1' incorporates:
             *  Constant: '<S952>/ConstantValue8'
             *  Switch: '<S952>/Switch2'
             */
            VeACCR_n_RPMfault_app_mHEV = 0.0F;
        }

        /* End of Switch: '<S952>/Switch1' */
    }
    else
    {
        /* Switch: '<S1025>/Switch1' incorporates:
         *  Constant: '<S110>/Calib'
         */
        VeACCR_n_RPMfault_app_mHEV = KeACCR_n_CompRPMmax;
    }

    /* Lookup_n-D: '<S1017>/Vector' incorporates:
     *  Constant: '<S1016>/Calib'
     *  Constant: '<S954>/Calib'
     */
    VeACCR_n_RPMcompspd_mHEV = look1_iflf_binlca_16a
        (ACCR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_f *
         KeACCR_r_CompPulleyRatio, ((const float32 *)
          &(KxACCR_n_CompRPMMaxEngSpd[0])), ((const float32 *)
          &(KtACCR_n_CompRPMMaxEngSpd[0])), 4U);

    /* Logic: '<S960>/AND' incorporates:
     *  Logic: '<S960>/OR1'
     *  UnitDelay: '<S960>/UnitDelay'
     */
    rtb_AND_mh = ((ACCR_ac_DW.UnitDelay_DSTATE_m) &&
                  (!ACCR_ac_DW.UnitDelay_DSTATE_dr));

    /* Update for UnitDelay: '<S960>/UnitDelay' */
    ACCR_ac_DW.UnitDelay_DSTATE_dr = ACCR_ac_DW.UnitDelay_DSTATE_m;

    /* Switch: '<S976>/Switch1' incorporates:
     *  Constant: '<S946>/ConstantValue1'
     *  Constant: '<S973>/Calib'
     *  Constant: '<S976>/ConstantValue3'
     *  Constant: '<S976>/ConstantValue4'
     *  Logic: '<S976>/AND1'
     *  MinMax: '<S976>/Maximum'
     *  RelationalOperator: '<S976>/GreaterThan2'
     *  Sum: '<S976>/Subtraction'
     *  UnitDelay: '<S976>/UnitDelay'
     */
    if (rtb_AND_mh && (ACCR_ac_DW.UnitDelay_DSTATE_p <= 0.0F))
    {
        ACCR_ac_DW.UnitDelay_DSTATE_p = KeACCR_t_ACHiPrCutoffTime;
    }
    else
    {
        ACCR_ac_DW.UnitDelay_DSTATE_p = fmaxf(ACCR_ac_DW.UnitDelay_DSTATE_p -
            0.1F, 0.0F);
    }

    /* End of Switch: '<S976>/Switch1' */

    /* RelationalOperator: '<S976>/GreaterThan1' incorporates:
     *  Constant: '<S976>/ConstantValue2'
     *  UnitDelay: '<S976>/UnitDelay'
     */
    VeACCR_b_ACHiPrCutoffTimer_mHEV = (ACCR_ac_DW.UnitDelay_DSTATE_p > 0.0F);

    /* Switch: '<S961>/Switch1' incorporates:
     *  Constant: '<S969>/Calib'
     *  RelationalOperator: '<S961>/GreaterThan'
     */
    if (Product > KeACCR_p_ACHiPrDisengage)
    {
        /* Switch: '<S961>/Switch1' incorporates:
         *  Constant: '<S961>/ConstantValue'
         */
        VeACCR_b_ACOverPressure_mHEV = true;
    }
    else
    {
        /* Switch: '<S961>/Switch1' incorporates:
         *  Constant: '<S970>/Calib'
         *  RelationalOperator: '<S961>/GreaterThan1'
         *  UnitDelay: '<S961>/UnitDelay'
         */
        VeACCR_b_ACOverPressure_mHEV = ((Product >= KeACCR_p_ACHiPrEngage) &&
            (VeACCR_b_ACOverPressure_mHEV));
    }

    /* End of Switch: '<S961>/Switch1' */

    /* Switch: '<S962>/Switch1' incorporates:
     *  Constant: '<S962>/ConstantValue'
     *  Constant: '<S971>/Calib'
     *  Constant: '<S972>/Calib'
     *  RelationalOperator: '<S962>/GreaterThan'
     *  RelationalOperator: '<S962>/GreaterThan1'
     *  UnitDelay: '<S962>/UnitDelay'
     */
    if (Product > KeACCR_p_ACLowPrEngage)
    {
        ACCR_ac_DW.UnitDelay_DSTATE_cy = true;
    }
    else
    {
        ACCR_ac_DW.UnitDelay_DSTATE_cy = ((Product >= KeACCR_p_ACLowPrDisengage)
            && (ACCR_ac_DW.UnitDelay_DSTATE_cy));
    }

    /* End of Switch: '<S962>/Switch1' */

    /* Logic: '<S946>/Logical1' incorporates:
     *  UnitDelay: '<S962>/UnitDelay'
     */
    VeACCR_b_ACLoPrCutoff_mHEV = !ACCR_ac_DW.UnitDelay_DSTATE_cy;

    /* Logic: '<S946>/Logical2' */
    rtb_Logical4 = (((VeACCR_b_ACHiPrCutoffTimer_mHEV) ||
                     (VeACCR_b_ACOverPressure_mHEV)) ||
                    (VeACCR_b_ACLoPrCutoff_mHEV));

    /* Sum: '<S974>/Sum1' incorporates:
     *  Constant: '<S987>/Calib'
     */
    rtb_Sum1 = Product - KeACCR_p_ACPrTarget;

    /* Logic: '<S977>/AND' incorporates:
     *  Logic: '<S977>/OR1'
     *  UnitDelay: '<S977>/UnitDelay'
     */
    rtb_AND_mh = !ACCR_ac_DW.UnitDelay_DSTATE_ch;

    /* Update for UnitDelay: '<S977>/UnitDelay' incorporates:
     *  Constant: '<S974>/TRUEConstant'
     */
    ACCR_ac_DW.UnitDelay_DSTATE_ch = true;

    /* Switch: '<S989>/Switch' */
    if (rtb_AND_mh)
    {
        /* Switch: '<S989>/Switch' incorporates:
         *  Constant: '<S984>/Calib'
         */
        rtb_Sum1_f = KeACCR_n_PressureCntrl_IV;
    }
    else
    {
        /* Switch: '<S989>/Switch' incorporates:
         *  Constant: '<S979>/Calib'
         *  Constant: '<S981>/Calib'
         *  Product: '<S989>/Multiplication1'
         *  Sum: '<S989>/Sum_Sub'
         *  UnitDelay: '<S989>/UnitDelay'
         */
        rtb_Sum1_f = ((rtb_Sum1 * KeACCR_K_CompSpdvsPressureKi) *
                      KeACCR_dt_PressureCntrl) + ACCR_ac_DW.UnitDelay_DSTATE_pt;
    }

    /* End of Switch: '<S989>/Switch' */

    /* Outputs for Atomic SubSystem: '<S989>/integral_term' */
    /* Switch: '<S990>/Switch1' incorporates:
     *  Constant: '<S985>/Calib'
     *  RelationalOperator: '<S990>/RelationalOperator'
     */
    if (KeACCR_n_PressureCntrl_MaxRPM < rtb_Sum1_f)
    {
        /* Switch: '<S845>/Switch1' */
        rtb_Sum1_f = KeACCR_n_PressureCntrl_MaxRPM;
    }

    /* End of Switch: '<S990>/Switch1' */

    /* Switch: '<S990>/Switch' incorporates:
     *  Constant: '<S986>/Calib'
     *  RelationalOperator: '<S990>/RelationalOperator1'
     *  UnitDelay: '<S989>/UnitDelay'
     */
    if (rtb_Sum1_f > KeACCR_n_PressureCntrl_MinRPM)
    {
        ACCR_ac_DW.UnitDelay_DSTATE_pt = rtb_Sum1_f;
    }
    else
    {
        ACCR_ac_DW.UnitDelay_DSTATE_pt = KeACCR_n_PressureCntrl_MinRPM;
    }

    /* End of Switch: '<S990>/Switch' */
    /* End of Outputs for SubSystem: '<S989>/integral_term' */

    /* Switch: '<S989>/Switch1' incorporates:
     *  Constant: '<S978>/Calib'
     *  Constant: '<S980>/Calib'
     *  Constant: '<S981>/Calib'
     *  Product: '<S989>/Multiplication2'
     *  Product: '<S989>/derivative_term'
     *  Product: '<S989>/proportional_term'
     *  Sum: '<S989>/Sum_Sub1'
     *  Sum: '<S989>/Sum_Sub2'
     *  UnitDelay: '<S989>/UnitDelay'
     *  UnitDelay: '<S989>/UnitDelay1'
     */
    VeACCR_n_RPMacpPID_BG_mHEV = (((rtb_Sum1 - ACCR_ac_DW.UnitDelay1_DSTATE_e) *
        KeACCR_K_CompSpdvsPressureKd) / KeACCR_dt_PressureCntrl) + ((rtb_Sum1 *
        KeACCR_K_CompSpdvsPressureKp) + ACCR_ac_DW.UnitDelay_DSTATE_pt);

    /* Update for UnitDelay: '<S989>/UnitDelay1' */
    ACCR_ac_DW.UnitDelay1_DSTATE_e = rtb_Sum1;

    /* Switch: '<S988>/Switch1' incorporates:
     *  Constant: '<S982>/Calib'
     *  RelationalOperator: '<S988>/RelationalOperator'
     */
    if (KeACCR_n_CompRPMmax < VeACCR_n_RPMacpPID_BG_mHEV)
    {
        /* Switch: '<S845>/Switch1' */
        rtb_Sum1_f = KeACCR_n_CompRPMmax;
    }
    else
    {
        /* Switch: '<S845>/Switch1' */
        rtb_Sum1_f = VeACCR_n_RPMacpPID_BG_mHEV;
    }

    /* End of Switch: '<S988>/Switch1' */

    /* Switch: '<S988>/Switch' incorporates:
     *  Constant: '<S983>/Calib'
     *  RelationalOperator: '<S988>/RelationalOperator1'
     */
    if (rtb_Sum1_f > KeACCR_n_CompRPMmin)
    {
        /* Switch: '<S988>/Switch' */
        VeACCR_n_RPMacpPID_AG_mHEV = rtb_Sum1_f;
    }
    else
    {
        /* Switch: '<S988>/Switch' */
        VeACCR_n_RPMacpPID_AG_mHEV = KeACCR_n_CompRPMmin;
    }

    /* End of Switch: '<S988>/Switch' */
    if (KeACCR_b_PressurePIDCntrl_En)
    {
        /* Switch: '<S963>/Switch1' */
        if (rtb_Logical4)
        {
            /* Switch: '<S946>/Switch1' incorporates:
             *  Constant: '<S946>/ConstantValue2'
             */
            VeACCR_n_RPMacpPID_AD_mHEV = 0.0F;
        }
        else
        {
            /* Switch: '<S946>/Switch1' */
            VeACCR_n_RPMacpPID_AD_mHEV = VeACCR_n_RPMacpPID_AG_mHEV;
        }

        /* End of Switch: '<S963>/Switch1' */
    }
    else
    {
        /* Switch: '<S946>/Switch1' incorporates:
         *  Constant: '<S967>/Calib'
         */
        VeACCR_n_RPMacpPID_AD_mHEV = KeACCR_n_RPMacpPID_Dial;
    }

    /* Logic: '<S975>/Logical2' incorporates:
     *  Constant: '<S966>/Calib'
     *  Constant: '<S993>/Calib'
     */
    rtb_AND_mh = ((!VeACCR_b_ACHiPrRetractActive_mHEV) && (Product >=
                   KeACCR_p_ACHiPrRetract));

    /* Logic: '<S991>/AND' incorporates:
     *  Logic: '<S991>/OR1'
     *  UnitDelay: '<S991>/UnitDelay'
     */
    rtb_Logical3_ke = (rtb_AND_mh && (!ACCR_ac_DW.UnitDelay_DSTATE_ir));

    /* Update for UnitDelay: '<S991>/UnitDelay' */
    ACCR_ac_DW.UnitDelay_DSTATE_ir = rtb_AND_mh;

    /* Outputs for Enabled SubSystem: '<S975>/Set_retract_RPM' incorporates:
     *  EnablePort: '<S995>/Enable'
     */
    if (rtb_Logical3_ke)
    {
        VeACCR_n_RPMretract_mHEV =
            ACCR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_l -
            KeACCR_I_CurrentACHiPrRetract;
    }

    /* Switch: '<S996>/Switch1' incorporates:
     *  Constant: '<S946>/ConstantValue1'
     *  Constant: '<S992>/Calib'
     *  Constant: '<S994>/Calib'
     *  Constant: '<S996>/ConstantValue3'
     *  Constant: '<S996>/ConstantValue4'
     *  Inport: '<S995>/Input_Parameter'
     *  Logic: '<S996>/AND1'
     *  MinMax: '<S996>/Maximum'
     *  RelationalOperator: '<S996>/GreaterThan2'
     *  Sum: '<S996>/Subtraction'
     *  UnitDelay: '<S996>/UnitDelay'
     */
    if (rtb_Logical3_ke && (ACCR_ac_DW.UnitDelay_DSTATE_dv <= 0.0F))
    {
        ACCR_ac_DW.UnitDelay_DSTATE_dv = KeACCR_t_ACHiPrRetractTime;
    }
    else
    {
        ACCR_ac_DW.UnitDelay_DSTATE_dv = fmaxf(ACCR_ac_DW.UnitDelay_DSTATE_dv -
            0.1F, 0.0F);
    }

    /* End of Switch: '<S996>/Switch1' */

    /* RelationalOperator: '<S996>/GreaterThan1' incorporates:
     *  Constant: '<S996>/ConstantValue2'
     *  UnitDelay: '<S996>/UnitDelay'
     */
    VeACCR_b_ACHiPrRetractActive_mHEV = (ACCR_ac_DW.UnitDelay_DSTATE_dv > 0.0F);
    if (rtb_Logical4)
    {
        /* Switch: '<S965>/Switch1' incorporates:
         *  Constant: '<S946>/ConstantValue3'
         */
        VeACCR_n_RPMacp_mHEV = 0.0F;
    }
    else if (VeACCR_b_ACHiPrRetractActive_mHEV)
    {
        /* Switch: '<S964>/Switch1' incorporates:
         *  Switch: '<S965>/Switch1'
         */
        VeACCR_n_RPMacp_mHEV = VeACCR_n_RPMretract_mHEV;
    }
    else
    {
        /* Switch: '<S965>/Switch1' incorporates:
         *  Constant: '<S110>/Calib'
         *  Switch: '<S964>/Switch1'
         */
        VeACCR_n_RPMacp_mHEV = KeACCR_n_CompRPMmax;
    }

    if (KeACCR_b_PressurePIDCntrl_En)
    {
        /* Switch: '<S946>/Switch' incorporates:
         *  Constant: '<S968>/Calib'
         */
        VeACCR_n_RPMacp_AD_mHEV = KeACCR_n_RPMacp_Dial;
    }
    else
    {
        /* Switch: '<S946>/Switch' */
        VeACCR_n_RPMacp_AD_mHEV = VeACCR_n_RPMacp_mHEV;
    }

    if (KeACCR_b_ComRPM_acp_PIDsum_SD)
    {
        /* Switch: '<S1064>/Switch' */
        VeACCR_n_ACpressure_PID_mHEV = VeACCR_n_RPMacpPID_AD_mHEV;
    }
    else
    {
        /* Switch: '<S1064>/Switch' */
        VeACCR_n_ACpressure_PID_mHEV = VeACCR_n_RPMacp_AD_mHEV;
    }

    if (KeACCR_b_CompRPM_acpMin_SD)
    {
        /* Switch: '<S1065>/Switch1' */
        VeACCR_n_ACpressureold_mHEV = VeACCR_n_RPMacpPID_AD_mHEV;
    }
    else
    {
        /* Switch: '<S1065>/Switch1' */
        VeACCR_n_ACpressureold_mHEV = VeACCR_n_RPMacp_AD_mHEV;
    }

    /* Outputs for Function Call SubSystem: '<S1>/InputOverride' */
    /* Switch: '<S77>/Switch' incorporates:
     *  Constant: '<S1066>/Calib'
     *  Constant: '<S1067>/Calib'
     *  Constant: '<S966>/Calib'
     *  Constant: '<S96>/Calib'
     *  Constant: '<S97>/Calib'
     *  Switch: '<S964>/Switch1'
     */
    if (KeACCR_b_PropSysActv_SelDial)
    {
        rtb_AND_mh = KeACCR_b_PropSysActv_Dial;
    }
    else
    {
        rtb_AND_mh = ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_ask;
    }

    /* End of Switch: '<S77>/Switch' */
    /* End of Outputs for SubSystem: '<S1>/InputOverride' */
    if ((((((uint32)ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cg) ==
            CeTHMR_e_EmergencyCooling) && ((VeACCR_b_BattAllowed_AD) ||
            (KeACCR_b_DisregardBattAllowed_DCCooling))) && (rtb_AND_mh ||
            (KeACCR_b_DisregardPSA_DCCooling))) && ((((uint32)
            ACCR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_d) ==
            CeESSR_e_EngRunning) || (KeACCR_b_DisregardEngOnCheck_DCCooling)))
    {
        /* Switch: '<S1014>/Switch1' incorporates:
         *  Constant: '<S1015>/Calib'
         */
        VeACCR_n_DCCooling = KeACCR_n_BattLpEmrgencyCool;
    }
    else
    {
        /* Switch: '<S1014>/Switch1' incorporates:
         *  Constant: '<S1013>/ConstantValue2'
         */
        VeACCR_n_DCCooling = 0.0F;
    }

    /* Logic: '<S957>/LogicalOperator' incorporates:
     *  Constant: '<S1008>/Constant'
     *  Constant: '<S1009>/Constant'
     *  Constant: '<S1010>/Calib'
     *  Constant: '<S1011>/Calib'
     *  Constant: '<S1012>/Calib'
     *  Constant: '<S1051>/Constant'
     *  Constant: '<S1054>/Calib'
     *  Constant: '<S1055>/Calib'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
     */
    rtb_AND_mh = (((((KeACCR_b_Prcharge4ClutchReq_mHEV) &&
                     (VeACCR_b_AC_ClutchReq_BD)) ||
                    (CeTAIR_e_ClutchSts_ClutchEngd == ((uint32)
                      ACCR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_c))) &&
                   (KeACCR_b_EnblPrcharge_mHEV)) && rtb_Logical1_n3o);

    /* Logic: '<S1058>/AND' incorporates:
     *  Logic: '<S1058>/OR1'
     *  UnitDelay: '<S1058>/UnitDelay'
     */
    rtb_Logical1_n3o = (rtb_AND_mh && (!ACCR_ac_DW.UnitDelay_DSTATE_gm));

    /* Update for UnitDelay: '<S1058>/UnitDelay' */
    ACCR_ac_DW.UnitDelay_DSTATE_gm = rtb_AND_mh;

    /* Switch: '<S1059>/Switch1' incorporates:
     *  Constant: '<S1056>/Calib'
     *  Constant: '<S1059>/ConstantValue3'
     *  Logic: '<S1059>/AND1'
     *  RelationalOperator: '<S1059>/GreaterThan2'
     *  Switch: '<S1059>/Switch2'
     *  UnitDelay: '<S1059>/UnitDelay'
     */
    if (rtb_Logical1_n3o && (ACCR_ac_DW.UnitDelay_DSTATE_ec <= 0.0F))
    {
        ACCR_ac_DW.UnitDelay_DSTATE_ec = KeACCR_t_PreChargeTime;
    }
    else
    {
        if (rtb_AND_mh)
        {
            /* Switch: '<S1059>/Switch2' incorporates:
             *  Constant: '<S1057>/ConstantValue1'
             *  Constant: '<S1059>/ConstantValue4'
             *  MinMax: '<S1059>/Maximum'
             *  Sum: '<S1059>/Subtraction'
             */
            ACCR_ac_DW.UnitDelay_DSTATE_ec = fmaxf
                (ACCR_ac_DW.UnitDelay_DSTATE_ec - 0.1F, 0.0F);
        }
    }

    /* End of Switch: '<S1059>/Switch1' */

    /* RelationalOperator: '<S1059>/GreaterThan1' incorporates:
     *  Constant: '<S1059>/ConstantValue2'
     *  UnitDelay: '<S1059>/UnitDelay'
     */
    VeACCR_b_ECVDPrechargeActive = (ACCR_ac_DW.UnitDelay_DSTATE_ec > 0.0F);
    if (VeACCR_b_ECVDPrechargeActive)
    {
        /* Switch: '<S957>/Switch5' incorporates:
         *  Constant: '<S1053>/Calib'
         */
        if (KeACCR_b_ECVDPreCharge_CurrentSel)
        {
            /* Switch: '<S1052>/Switch1' incorporates:
             *  Constant: '<S109>/Calib'
             */
            VeACCR_n_RPMPreCharge_app_mHEV = KeACCR_n_CompRPMMin2;
        }

        /* End of Switch: '<S957>/Switch5' */
    }
    else
    {
        /* Switch: '<S1052>/Switch1' incorporates:
         *  Constant: '<S957>/ConstantValue1'
         */
        VeACCR_n_RPMPreCharge_app_mHEV = 0.0F;
    }

    /* Lookup_n-D: '<S1063>/Vector' incorporates:
     *  Constant: '<S109>/Calib'
     */
    rtb_Vector_ni[0] = KeACCR_n_CompRPMMin2;
    rtb_Vector_ni[1] = VeACCR_n_RPMchiller_mHEV;
    rtb_Vector_ni[2] = VeACCR_n_RPMoilmig_mHEV;
    rtb_Vector_ni[3] = VeACCR_n_RPMvalve_mHEV;
    rtb_Vector_ni[4] = VeACCR_n_RPMinplant_mHEV;
    rtb_Vector_ni[5] = VeACCR_n_RPMfault_app_mHEV;
    rtb_Vector_ni[6] = VeACCR_n_RPMcompspd_mHEV;
    rtb_Vector_ni[7] = VeACCR_n_ACpressure_PID_mHEV;
    rtb_Vector_ni[8] = VeACCR_n_ACpressureold_mHEV;
    rtb_Vector_ni[9] = VeACCR_n_DCCooling;
    rtb_Vector_ni[10] = VeACCR_n_RPMPreCharge_app_mHEV;
    for (i = 0; i < 11; i++)
    {
        rtb_Vector_ni[i] = look1_iflf_binlca_16a(rtb_Vector_ni[i], ((const
            float32 *)&(KxACCR_k_rpmcurrentconversn[0])), ((const float32 *)
            &(KtACCR_k_rpmcurrentconversn[0])), 11U);
    }

    /* MinMax: '<S1062>/MinMax3' */
    rtb_Sum1 = fmaxf(rtb_Vector_ni[1], rtb_Vector_ni[9]);
    if (VeACCR_b_ECVDPrechargeActive)
    {
        /* Switch: '<S1069>/Switch1' */
        VeACCR_I_ECVD_currentraw = rtb_Vector_ni[10];
    }
    else
    {
        /* Switch: '<S1069>/Switch1' incorporates:
         *  Sum: '<S1062>/Sum'
         */
        VeACCR_I_ECVD_currentraw = VeACCR_I_ECVD_HVACCabinReqCurrent + rtb_Sum1;
    }

    /* Switch: '<S1072>/Switch1' incorporates:
     *  Constant: '<S1070>/Calib'
     *  RelationalOperator: '<S1072>/RelationalOperator'
     */
    if (KeACCR_I_ECVDMaxCurrent < VeACCR_I_ECVD_currentraw)
    {
        /* Switch: '<S845>/Switch1' */
        rtb_Sum1_f = KeACCR_I_ECVDMaxCurrent;
    }
    else
    {
        /* Switch: '<S845>/Switch1' */
        rtb_Sum1_f = VeACCR_I_ECVD_currentraw;
    }

    /* End of Switch: '<S1072>/Switch1' */

    /* Switch: '<S1072>/Switch' incorporates:
     *  Constant: '<S1071>/Calib'
     *  RelationalOperator: '<S1072>/RelationalOperator1'
     */
    if (rtb_Sum1_f > KeACCR_I_ECVDMinCurrent)
    {
        /* Switch: '<S1072>/Switch' */
        VeACCR_I_Currentrawlimited = rtb_Sum1_f;
    }
    else
    {
        /* Switch: '<S1072>/Switch' */
        VeACCR_I_Currentrawlimited = KeACCR_I_ECVDMinCurrent;
    }

    /* End of Switch: '<S1072>/Switch' */

    /* Sum: '<S1062>/Sum1' */
    VeACCR_I_Currentrawfinal = VeACCR_I_Currentrawlimited - rtb_Vector_ni[7];

    /* MinMax: '<S1062>/MinMax' */
    VeACCR_I_Current_high = fmaxf(VeACCR_I_Currentrawfinal, rtb_Vector_ni[2]);

    /* MinMax: '<S1062>/MinMax1' */
    VeACCR_I_Current_low = fminf(fminf(fminf(fminf(rtb_Vector_ni[8],
        rtb_Vector_ni[3]), rtb_Vector_ni[4]), rtb_Vector_ni[5]), rtb_Vector_ni[6]);

    /* MinMax: '<S1062>/MinMax2' */
    VeACCR_I_Current_highlow = fminf(VeACCR_I_Current_high, VeACCR_I_Current_low);
    if ((((VeACCR_I_ECVD_HVACCabinReqCurrent < rtb_Vector_ni[0]) && (rtb_Sum1 <
            rtb_Vector_ni[0])) && (rtb_Vector_ni[2] < rtb_Vector_ni[0])) ||
            (rtb_Logical4 && (KeACCR_b_PressurePIDCntrl_En)))
    {
        /* Switch: '<S1068>/Switch1' incorporates:
         *  Constant: '<S1062>/ConstantValue1'
         */
        VeACCR_I_Currenttargetraw = 0.0F;
    }
    else
    {
        /* Switch: '<S1068>/Switch1' */
        VeACCR_I_Currenttargetraw = VeACCR_I_Current_highlow;
    }

    /* Logic: '<S912>/Logical1' incorporates:
     *  Constant: '<S917>/Calib'
     *  Constant: '<S966>/Calib'
     */
    VeACCR_b_AC_ClutchReq_B4Dly = (rtb_Logical2_jm && (VeACCR_I_Currenttargetraw
        >= KeACCR_I_ECVDMinCurr_ClutchEngag));

    /* Outputs for Atomic SubSystem: '<S921>/EdgeRising' */
    /* UnitDelay: '<S1044>/UnitDelay' incorporates:
     *  UnitDelay: '<S922>/UnitDelay'
     */
    rtb_Logical4 = ACCR_ac_DW.UnitDelay_DSTATE_a4;

    /* Update for UnitDelay: '<S922>/UnitDelay' */
    ACCR_ac_DW.UnitDelay_DSTATE_a4 = VeACCR_b_AC_ClutchReq_B4Dly;

    /* Switch: '<S921>/Switch1' incorporates:
     *  Constant: '<S912>/ConstantValue1'
     *  Constant: '<S920>/Calib'
     *  Constant: '<S921>/ConstantValue1'
     *  Logic: '<S921>/OR'
     *  Logic: '<S921>/OR1'
     *  Logic: '<S922>/AND'
     *  Logic: '<S922>/OR1'
     *  MinMax: '<S921>/Minimum'
     *  Sum: '<S921>/Summation'
     *  UnitDelay: '<S921>/UnitDelay'
     */
    if ((!VeACCR_b_AC_ClutchReq_B4Dly) || ((VeACCR_b_AC_ClutchReq_B4Dly) &&
            (!rtb_Logical4)))
    {
        ACCR_ac_DW.UnitDelay_DSTATE_eb = 0.0F;
    }
    else
    {
        ACCR_ac_DW.UnitDelay_DSTATE_eb = fminf(KeACCR_t_ClutchEngDelayTime,
            ACCR_ac_DW.UnitDelay_DSTATE_eb + 0.1F);
    }

    /* End of Switch: '<S921>/Switch1' */
    /* End of Outputs for SubSystem: '<S921>/EdgeRising' */

    /* Logic: '<S921>/AND' incorporates:
     *  Constant: '<S920>/Calib'
     *  RelationalOperator: '<S921>/GreaterThan'
     *  UnitDelay: '<S921>/UnitDelay'
     */
    VeACCR_b_AC_ClutchReq_AftrDly = ((VeACCR_b_AC_ClutchReq_B4Dly) &&
        (ACCR_ac_DW.UnitDelay_DSTATE_eb >= KeACCR_t_ClutchEngDelayTime));
    if (KeACCR_b_EnblClutchDelay)
    {
        /* Switch: '<S912>/Switch1' */
        VeACCR_b_AC_ClutchReq_BD = VeACCR_b_AC_ClutchReq_AftrDly;
    }
    else
    {
        /* Switch: '<S912>/Switch1' */
        VeACCR_b_AC_ClutchReq_BD = VeACCR_b_AC_ClutchReq_B4Dly;
    }

    /* VariantMerge generated from: '<S7>/VariantSource2' incorporates:
     *  Constant: '<S114>/FALSEConstant'
     *  Constant: '<S114>/FALSEConstant1'
     *  Constant: '<S919>/Calib'
     */
    ACCR_ac_B.VariantMerge_For_Variant_Source_Varian_h[0] =
        VeACCR_b_OilMigOpnVlv_B4Merg_mHEV;
    ACCR_ac_B.VariantMerge_For_Variant_Source_Varian_h[1] = false;
    ACCR_ac_B.VariantMerge_For_Variant_Source_Varian_h[2] = false;
    ACCR_ac_B.VariantMerge_For_Variant_Source_Varian_h[3] =
        VeACCR_b_AC_ClutchReq_BD;

    /* End of Outputs for SubSystem: '<S1031>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S1031>/TimerResetEnabled1' */
    /* End of Outputs for SubSystem: '<S946>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S946>/TimerResetEnabled' */
    /* End of Outputs for SubSystem: '<S946>/Hysteresis' */
    /* End of Outputs for SubSystem: '<S946>/Hysteresis1' */
    /* End of Outputs for SubSystem: '<S974>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S974>/PIDControl' */
    /* End of Outputs for SubSystem: '<S974>/Limiter' */
    /* End of Outputs for SubSystem: '<S975>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S975>/Set_retract_RPM' */
    /* End of Outputs for SubSystem: '<S975>/TmrRstEnabled' */
    /* End of Outputs for SubSystem: '<S1057>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S1057>/TimerResetEnabled1' */
    /* End of Outputs for SubSystem: '<S1062>/Limiter' */
    /* End of Outputs for SubSystem: '<S912>/TurnOnDelayTime' */
#endif

    /* End of Logic: '<S915>/Logical1' */

    /* Logic: '<S801>/AND' */
    VeACCR_b_OilMigOpnVlv_B4Merg = VeACCR_b_ACOilMigStarted;

    /* Switch: '<S323>/Switch' incorporates:
     *  Constant: '<S727>/Constant'
     *  Constant: '<S733>/Calib'
     *  Constant: '<S734>/Calib'
     *  RelationalOperator: '<S323>/Comparison9'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
     */
    if (KeACCR_b_BattTher_ActvCool_SD)
    {
        rtb_AND_mh = KeACCR_b_BattTher_ActCool_Dial;
    }
    else
    {
        rtb_AND_mh = (((uint32)
                       ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cg) ==
                      CeTHMR_e_ActiveCooling);
    }

    /* End of Switch: '<S323>/Switch' */

    /* UnitDelay: '<S749>/UnitDelay' incorporates:
     *  Constant: '<S726>/Constant'
     *  Constant: '<S728>/Constant'
     *  Constant: '<S729>/Constant'
     *  Constant: '<S730>/Constant'
     *  Constant: '<S736>/Calib'
     *  Constant: '<S737>/Calib'
     *  Constant: '<S738>/Calib'
     *  Constant: '<S739>/Calib'
     *  Constant: '<S740>/Calib'
     *  Constant: '<S741>/Calib'
     *  Constant: '<S744>/Calib'
     *  Constant: '<S745>/Constant1'
     *  Constant: '<S745>/Constant2'
     *  Constant: '<S746>/Constant1'
     *  Constant: '<S746>/Constant2'
     *  Constant: '<S747>/Constant1'
     *  Constant: '<S747>/Constant2'
     *  Constant: '<S748>/Constant1'
     *  Constant: '<S748>/Constant2'
     *  DataStoreRead: '<S729>/StatusByte_EvapRefriShutoffCtrlshrtBattFlt'
     *  DataStoreRead: '<S730>/StatusByte_EvapRefrishutoffCtrlShrtGndFlt'
     *  DataStoreRead: '<S745>/StatusByte_AC_RefrigTempSnsrCPerf'
     *  DataStoreRead: '<S746>/StatusByte_AC_RefrigPresSnsrCCktPerf'
     *  DataStoreRead: '<S747>/StatusByte_AC_RefrigPresSnsrCCkt'
     *  DataStoreRead: '<S748>/StatusByte_AC_RefrigTempSnsrCCkt'
     *  Logic: '<S323>/Logical10'
     *  Logic: '<S323>/Logical14'
     *  Logic: '<S323>/Logical5'
     *  Logic: '<S323>/Logical6'
     *  Logic: '<S323>/Logical7'
     *  Logic: '<S323>/Logical8'
     *  Logic: '<S323>/Logical9'
     *  Logic: '<S731>/Logical1'
     *  Logic: '<S731>/Logical11'
     *  Logic: '<S745>/Logical Operator'
     *  Logic: '<S746>/Logical Operator'
     *  Logic: '<S747>/Logical Operator'
     *  Logic: '<S748>/Logical Operator'
     *  RelationalOperator: '<S323>/Comparison2'
     *  RelationalOperator: '<S323>/Comparison6'
     *  RelationalOperator: '<S729>/RelationalOperator'
     *  RelationalOperator: '<S730>/RelationalOperator'
     *  RelationalOperator: '<S745>/Relational Operator1'
     *  RelationalOperator: '<S745>/Relational Operator2'
     *  RelationalOperator: '<S746>/Relational Operator1'
     *  RelationalOperator: '<S746>/Relational Operator2'
     *  RelationalOperator: '<S747>/Relational Operator1'
     *  RelationalOperator: '<S747>/Relational Operator2'
     *  RelationalOperator: '<S748>/Relational Operator1'
     *  RelationalOperator: '<S748>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S729>/BitwiseOperator7'
     *  S-Function (sfix_bitop): '<S730>/BitwiseOperator7'
     *  S-Function (sfix_bitop): '<S745>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S745>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S746>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S746>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S747>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S747>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S748>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S748>/Bitwise Operator2'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
     */
    rtb_Logical2_jm = ((((((((rtb_AND_mh || (((uint32)
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_co) ==
        CeTHMR_e_NoCabinCooling)) || ((((uint32)
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_dk) == CeTHMR_e_HeatPump)
        && (KeACCR_b_Dsblrpmetc4HeatPmp))) ||
                            ((ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fa)
        && (KeACCR_b_FtEvapTmp_FA_DisAllowIterm))) || (((((sint32)
        ACCR_ac_DW.StatusByte_EvapRefriShutoffCtrlshrtBattF) & 1) > 0) &&
                            (KeACCR_b_DsblComp4Cab_EvapShrtHi))) ||
                          ((ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_nnj) &&
                           (KeACCR_b_DsblComp4Cab_EvapClosed))) || (((((sint32)
        ACCR_ac_DW.StatusByte_EvapRefrishutoffCtrlShrtGndFl) & 1) > 0) &&
                          (KeACCR_b_DsblComp4Cab_EvapShrtGnd))) ||
                        ((ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ob) &&
                         (KeACCR_b_FtEvapTmp_Tgt_FA_DisAllowIterm))) ||
                       ((KeACCR_b_DsblEAC_ForCab_RAEn) && ((((((((uint32)
        ACCR_ac_DW.StatusByte_AC_RefrigTempSnsrCPerf) & 1U) != 0U) && ((((uint32)
        ACCR_ac_DW.StatusByte_AC_RefrigTempSnsrCPerf) & 64U) == 0U)) ||
                           (((((uint32)
        ACCR_ac_DW.StatusByte_AC_RefrigPresSnsrCCktPerf) & 1U) != 0U) &&
                            ((((uint32)
        ACCR_ac_DW.StatusByte_AC_RefrigPresSnsrCCktPerf) & 64U) == 0U))) ||
                          (((((uint32)
        ACCR_ac_DW.StatusByte_AC_RefrigPresSnsrCCkt) & 1U) != 0U) && ((((uint32)
        ACCR_ac_DW.StatusByte_AC_RefrigPresSnsrCCkt) & 64U) == 0U))) ||
                         (((((uint32)ACCR_ac_DW.StatusByte_AC_RefrigTempSnsrCCkt)
                            & 1U) != 0U) && ((((uint32)
        ACCR_ac_DW.StatusByte_AC_RefrigTempSnsrCCkt) & 64U) == 0U)))));

    /* Logic: '<S323>/Logical3' incorporates:
     *  Logic: '<S323>/Logical4'
     */
    rtb_Logical1_n3o = ((!VeACCR_b_ACCompEnbl) || rtb_Logical2_jm);

    /* SignalConversion generated from: '<S7>/VariantSource2' */
#if !Rte_SysCon_Variant_ACCR_FUNC_1

    /* VariantMerge generated from: '<S7>/VariantSource2' incorporates:
     *  Constant: '<S112>/FALSEConstant'
     *  Constant: '<S115>/Constant'
     *  RelationalOperator: '<S112>/Comparison1'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
     */
    ACCR_ac_B.VariantMerge_For_Variant_Source_Varian_h[0] =
        VeACCR_b_OilMigOpnVlv_B4Merg;
    ACCR_ac_B.VariantMerge_For_Variant_Source_Varian_h[1] = (((uint32)
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_md) == CeTAIR_e_Degraded);
    ACCR_ac_B.VariantMerge_For_Variant_Source_Varian_h[2] = rtb_Logical1_n3o;
    ACCR_ac_B.VariantMerge_For_Variant_Source_Varian_h[3] = false;

#endif

    /* End of SignalConversion generated from: '<S7>/VariantSource2' */

    /* Lookup_n-D: '<S130>/Vector' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
     */
    rtb_Vector_aw = look1_iflf_binlca_16a
        (ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_a, ((const float32 *)
          &(KxACCR_n_CompBattRtLimUp_Amb[0])), ((const float32 *)
          &(KtACCR_n_CompBattRtLimUp_Amb[0])), 5U);

    /* Lookup_n-D: '<S131>/Vector' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
     */
    rtb_Vector_b5 = look1_iflf_binlca_16a
        (ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_a, ((const float32 *)
          &(KxACCR_n_CompRtLimRPM_Amb[0])), ((const float32 *)
          &(KtACCR_n_CompRtLimRPM_Amb[0])), 5U);

    /* RelationalOperator: '<S942>/Comparison10' incorporates:
     *  Constant: '<S925>/Calib'
     *  Constant: '<S926>/Calib'
     *  Constant: '<S932>/Calib'
     *  Constant: '<S941>/Calib'
     *  Logic: '<S923>/Logical5'
     *  Logic: '<S942>/Logical4'
     *  Lookup_n-D: '<S935>/Vector'
     *  Product: '<S929>/Product'
     *  RelationalOperator: '<S913>/Comparison3'
     *  RelationalOperator: '<S923>/Comparison13'
     *  RelationalOperator: '<S923>/Comparison14'
     *  RelationalOperator: '<S928>/Comparison1'
     *  RelationalOperator: '<S942>/Comparison11'
     *  Rounding: '<S929>/Rounding1'
     *  SignalConversion generated from: '<S7>/VariantSource1'
     *  SignalConversion generated from: '<S935>/Vector'
     *  Sum: '<S928>/Sum2'
     *  Sum: '<S928>/Sum3'
     *  Switch: '<S913>/Switch'
     *  Switch: '<S913>/Switch1'
     *  Switch: '<S913>/Switch4'
     *  Switch: '<S915>/Switch'
     *  Switch: '<S923>/Switch'
     *  Switch: '<S924>/Switch1'
     *  Switch: '<S930>/Switch1'
     *  Switch: '<S936>/Switch1'
     *  Switch: '<S940>/Switch1'
     *  Switch: '<S945>/Switch1'
     *  Switch: '<S945>/Switch2'
     *  UnitDelay: '<S928>/UnitDelay'
     */
#if Rte_SysCon_Variant_ACCR_FUNC_1

    /* Outputs for Atomic SubSystem: '<S929>/ProtectedDivision' */
    /* Outputs for Atomic SubSystem: '<S928>/integral_term' */
    /* Logic: '<S942>/Logical4' */
    rtb_Logical4_f2 = ((!ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cy) ||
                       rtb_Logical1_ecb);

    /* SignalConversion generated from: '<S935>/Vector' incorporates:
     *  Constant: '<S109>/Calib'
     *  Constant: '<S110>/Calib'
     *  Constant: '<S933>/Calib'
     *  Constant: '<S934>/Calib'
     */
    rtb_TmpSignalConversionAtVectorInport1[0] = VeACCR_n_RPMacp_AD_mHEV;
    rtb_TmpSignalConversionAtVectorInport1[1] = VeACCR_n_RPMfault_app_mHEV;
    rtb_TmpSignalConversionAtVectorInport1[2] = KeACCR_n_CompRPMmax;
    rtb_TmpSignalConversionAtVectorInport1[3] = KeACCR_n_CompRPMMin2;
    rtb_TmpSignalConversionAtVectorInport1[4] = VeACCR_n_RPMacpPID_AD_mHEV;
    rtb_TmpSignalConversionAtVectorInport1[5] = KeACCR_n_CompBattRtLimUp;
    rtb_TmpSignalConversionAtVectorInport1[6] = rtb_Vector_aw;
    rtb_TmpSignalConversionAtVectorInport1[7] = KeACCR_n_CompRtLimRPM;
    rtb_TmpSignalConversionAtVectorInport1[8] = rtb_Vector_b5;
    for (i = 0; i < 9; i++)
    {
        rtb_Vector_fc[i] = look1_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVectorInport1[i], ((const float32 *)
              &(KxACCR_k_rpmcurrentconversn[0])), ((const float32 *)
              &(KtACCR_k_rpmcurrentconversn[0])), 11U);
    }

    if (KeACCR_b_CompBattRtLim_Slct)
    {
        /* Switch: '<S913>/Switch1' */
        rtb_Sum1 = rtb_Vector_fc[7];
    }
    else
    {
        /* Switch: '<S913>/Switch1' */
        rtb_Sum1 = rtb_Vector_fc[8];
    }

    /* Sum: '<S928>/Sum2' incorporates:
     *  Constant: '<S925>/Calib'
     */
    rtb_Sum1_f = VeACCR_I_Currenttargetraw - ACCR_ac_DW.UnitDelay_DSTATE;
    if (ACCR_ac_DW.UnitDelay_DSTATE < rtb_Sum1)
    {
        if (KeACCR_b_CompBattRtLim_Slct)
        {
            rtb_Sum1_eo = rtb_Vector_fc[5];
        }
        else
        {
            rtb_Sum1_eo = rtb_Vector_fc[6];
        }

        /* Switch: '<S936>/Switch1' incorporates:
         *  Constant: '<S925>/Calib'
         *  MinMax: '<S928>/MinMax'
         *  MinMax: '<S928>/MinMax1'
         *  Sum: '<S928>/Sum1'
         */
        rtb_Sum1 = fmaxf(fminf(rtb_Sum1 - ACCR_ac_DW.UnitDelay_DSTATE,
                               rtb_Sum1_f), rtb_Sum1_eo);
    }
    else if (KeACCR_b_CompBattRtLim_Slct)
    {
        /* Switch: '<S936>/Switch1' */
        rtb_Sum1 = rtb_Vector_fc[5];
    }
    else
    {
        /* Switch: '<S936>/Switch1' */
        rtb_Sum1 = rtb_Vector_fc[6];
    }

    if (KeACCR_b_PressurePIDCntrl_En)
    {
        rtb_Sum1_eo = rtb_Vector_fc[4];
    }
    else
    {
        rtb_Sum1_eo = rtb_Vector_fc[0];
    }

    if ((VeACCR_I_Currenttargetraw == rtb_Sum1_eo) || (VeACCR_I_Currenttargetraw
         == rtb_Vector_fc[1]))
    {
        /* Switch: '<S930>/Switch1' incorporates:
         *  Gain: '<S923>/Gain'
         */
        VeACCR_I_CurrentrateLimDown = -rtb_Vector_fc[2];
    }
    else
    {
        /* Switch: '<S930>/Switch1' incorporates:
         *  Constant: '<S931>/Calib'
         */
        VeACCR_I_CurrentrateLimDown = KeACCR_I_ECVDCrrntRtLimDown;
    }

    /* Switch: '<S937>/Switch1' incorporates:
     *  Constant: '<S925>/Calib'
     *  Constant: '<S932>/Calib'
     *  RelationalOperator: '<S937>/RelationalOperator'
     */
    if (rtb_Sum1 < rtb_Sum1_f)
    {
        /* Switch: '<S845>/Switch1' */
        rtb_Sum1_f = rtb_Sum1;
    }

    /* End of Switch: '<S937>/Switch1' */

    /* Switch: '<S937>/Switch' incorporates:
     *  RelationalOperator: '<S937>/RelationalOperator1'
     */
    if (rtb_Sum1_f <= VeACCR_I_CurrentrateLimDown)
    {
        rtb_Sum1_f = VeACCR_I_CurrentrateLimDown;
    }

    /* End of Switch: '<S937>/Switch' */
    ACCR_ac_DW.UnitDelay_DSTATE += rtb_Sum1_f;

    /* Switch: '<S939>/Switch1' incorporates:
     *  Constant: '<S938>/Calib'
     *  Constant: '<S939>/ConstantValue'
     *  Constant: '<S939>/ConstantValue1'
     *  Constant: '<S939>/ConstantValue2'
     *  Constant: '<S939>/ConstantValue3'
     *  Logic: '<S939>/AND'
     *  RelationalOperator: '<S939>/GreaterThanorEqual'
     *  RelationalOperator: '<S939>/GreaterThanorEqual1'
     *  RelationalOperator: '<S939>/NotEqual'
     *  RelationalOperator: '<S939>/NotEqual1'
     *  Switch: '<S939>/Switch2'
     *  Switch: '<S939>/Switch3'
     */
    if ((ACCR_ac_DW.UnitDelay_DSTATE != 0.0F) &&
            (KeACCR_I_ECVD_MinCurrResoltution != 0.0F))
    {
        /* Switch: '<S939>/Switch1' incorporates:
         *  Product: '<S939>/Division'
         */
        rtb_Sum1 = ACCR_ac_DW.UnitDelay_DSTATE /
            KeACCR_I_ECVD_MinCurrResoltution;
    }
    else if (ACCR_ac_DW.UnitDelay_DSTATE > 0.0F)
    {
        /* Switch: '<S939>/Switch2' incorporates:
         *  Constant: '<S939>/MAXFLOAT'
         *  Switch: '<S939>/Switch1'
         */
        rtb_Sum1 = 3.402823466E+38F;
    }
    else if (ACCR_ac_DW.UnitDelay_DSTATE < 0.0F)
    {
        /* Switch: '<S939>/Switch3' incorporates:
         *  Constant: '<S939>/MINFLOAT'
         *  Switch: '<S939>/Switch1'
         *  Switch: '<S939>/Switch2'
         */
        rtb_Sum1 = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S939>/Switch1' incorporates:
         *  Constant: '<S939>/ConstantValue4'
         *  Switch: '<S939>/Switch2'
         *  Switch: '<S939>/Switch3'
         */
        rtb_Sum1 = 0.0F;
    }

    /* End of Switch: '<S939>/Switch1' */

    /* Product: '<S929>/Product' incorporates:
     *  Constant: '<S938>/Calib'
     */
    VeACCR_I_CurrenttargetafterRL = ceilf(rtb_Sum1) *
        KeACCR_I_ECVD_MinCurrResoltution;
    if (VeACCR_I_Currenttargetraw < rtb_Vector_fc[3])
    {
        /* Switch: '<S924>/Switch1' incorporates:
         *  Constant: '<S913>/ConstantValue1'
         */
        VeACCR_I_Currentb4vehcheck = 0.0F;
    }
    else
    {
        /* Switch: '<S924>/Switch1' */
        VeACCR_I_Currentb4vehcheck = VeACCR_I_CurrenttargetafterRL;
    }

    if (KeACCR_b_RPM_PwrBdgtMin_CalOn)
    {
        /* Switch: '<S913>/Switch4' */
        VeACCR_I_Currentb4vehcheck_1 = VeACCR_I_Currentb4vehcheck;
    }
    else
    {
        /* Switch: '<S913>/Switch4' */
        VeACCR_I_Currentb4vehcheck_1 = VeACCR_I_CurrenttargetafterRL;
    }

    if (rtb_Logical4_f2)
    {
        /* Switch: '<S945>/Switch1' incorporates:
         *  Constant: '<S942>/ConstantValue3'
         */
        VeACCR_I_ECVDCurrentTgt_Old_B4D = 0.0F;
    }
    else if (VeACCR_b_ACCompEnbl)
    {
        /* Switch: '<S945>/Switch2' incorporates:
         *  Switch: '<S945>/Switch1'
         */
        VeACCR_I_ECVDCurrentTgt_Old_B4D = VeACCR_I_Currentb4vehcheck_1;
    }
    else
    {
        /* Switch: '<S945>/Switch1' incorporates:
         *  Constant: '<S942>/ConstantValue4'
         *  Switch: '<S945>/Switch2'
         */
        VeACCR_I_ECVDCurrentTgt_Old_B4D = 0.0F;
    }

    if (VeACCR_b_ACClutchAllow)
    {
        /* Switch: '<S940>/Switch1' */
        VeACCR_I_ECVDCurrentTgt_New_B4D = VeACCR_I_Currentb4vehcheck_1;
    }
    else
    {
        /* Switch: '<S940>/Switch1' incorporates:
         *  Constant: '<S915>/ConstantValue4'
         */
        VeACCR_I_ECVDCurrentTgt_New_B4D = 0.0F;
    }

    if (KeACCR_b_SelectOldComp_RPMTgt)
    {
        /* Switch: '<S915>/Switch' */
        VeACCR_I_ECVDCurrentTgt_B4D = VeACCR_I_ECVDCurrentTgt_Old_B4D;
    }
    else
    {
        /* Switch: '<S915>/Switch' */
        VeACCR_I_ECVDCurrentTgt_B4D = VeACCR_I_ECVDCurrentTgt_New_B4D;
    }

    /* VariantMerge generated from: '<S7>/VariantSource1' incorporates:
     *  Constant: '<S114>/ConstantValue'
     *  Constant: '<S114>/ConstantValue1'
     *  Constant: '<S926>/Calib'
     *  Constant: '<S941>/Calib'
     *  RelationalOperator: '<S942>/Comparison11'
     *  Switch: '<S945>/Switch2'
     */
    ACCR_ac_B.VariantMerge_For_Variant_Source_VariantS[0] = 0.0F;
    ACCR_ac_B.VariantMerge_For_Variant_Source_VariantS[1] = 0.0F;
    ACCR_ac_B.VariantMerge_For_Variant_Source_VariantS[2] =
        VeACCR_I_ECVDCurrentTgt_B4D;

    /* End of Outputs for SubSystem: '<S928>/integral_term' */
    /* End of Outputs for SubSystem: '<S929>/ProtectedDivision' */
#endif

    /* End of RelationalOperator: '<S942>/Comparison10' */

    /* UnitDelay: '<S1044>/UnitDelay' incorporates:
     *  Constant: '<S143>/Constant'
     *  Constant: '<S144>/Constant'
     *  Logic: '<S142>/Logical1'
     *  Logic: '<S142>/Logical3'
     *  Logic: '<S142>/Logical5'
     *  Logic: '<S142>/Logical6'
     *  RelationalOperator: '<S142>/Comparison1'
     *  RelationalOperator: '<S142>/Comparison9'
     */
    rtb_Logical4 = (((((uint32)Switch_o3) != CeHVTR_e_Closed) &&
                     (!rtb_Logical1_cp)) || (rtb_Logical1_cp && (((uint32)
                       Switch_o3) != CeHVTR_e_Open)));

    /* Switch: '<S322>/Switch3' incorporates:
     *  Constant: '<S717>/Calib'
     */
    if (KeACCR_b_DMPIEvapTempTgtCor_Ena)
    {
        /* Sum: '<S322>/Sum1' incorporates:
         *  Lookup_n-D: '<S722>/Vector'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
         *  Switch: '<S79>/Switch'
         */
        rtb_Sum1_f = look2_iflf_binlca_16a
            (ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_o3, Switch_j, ((
               const float32 *)&(KxACCR_T_DMPIEvapTempTgtCor[0])), ((const
               float32 *)&(KyACCR_T_DMPIEvapTempTgtCor[0])), ((const float32 *)
              &(KtACCR_T_DMPIEvapTempTgtCor[0])), ACCR_ac_ConstP.pooled17, 5U) +
            ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_f;

        /* Outputs for Atomic SubSystem: '<S322>/Limiter' */
        /* Switch: '<S725>/Switch1' incorporates:
         *  Constant: '<S715>/Calib'
         *  RelationalOperator: '<S725>/RelationalOperator'
         */
        if (KeACCR_T_DMPIEvapTempTgtMax < rtb_Sum1_f)
        {
            /* Switch: '<S725>/Switch1' */
            rtb_Sum1_f = KeACCR_T_DMPIEvapTempTgtMax;
        }

        /* End of Switch: '<S725>/Switch1' */

        /* Switch: '<S725>/Switch' incorporates:
         *  Constant: '<S716>/Calib'
         *  RelationalOperator: '<S725>/RelationalOperator1'
         */
        if (rtb_Sum1_f <= KeACCR_T_DMPIEvapTempTgtMin)
        {
            /* MinMax: '<S491>/MinMax5' */
            rtb_Sum1_f = KeACCR_T_DMPIEvapTempTgtMin;
        }

        /* End of Switch: '<S725>/Switch' */
        /* End of Outputs for SubSystem: '<S322>/Limiter' */
    }
    else
    {
        /* MinMax: '<S491>/MinMax5' */
        rtb_Sum1_f = ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_f;
    }

    /* End of Switch: '<S322>/Switch3' */

    /* Sum: '<S322>/Sum5' */
    VeACCR_dT_EvapTempError = ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_g
        - rtb_Sum1_f;

    /* Outputs for Atomic SubSystem: '<S322>/Hysteresis1' */
    /* Switch: '<S714>/Switch1' incorporates:
     *  Constant: '<S714>/ConstantValue'
     *  Constant: '<S719>/Calib'
     *  Constant: '<S721>/Calib'
     *  RelationalOperator: '<S714>/GreaterThan'
     *  RelationalOperator: '<S714>/GreaterThan1'
     *  UnitDelay: '<S714>/UnitDelay'
     */
    if (VeACCR_dT_EvapTempError > KeACCR_dT_EvapTempError_RSP)
    {
        ACCR_ac_DW.UnitDelay_DSTATE_k0 = true;
    }
    else
    {
        ACCR_ac_DW.UnitDelay_DSTATE_k0 = ((VeACCR_dT_EvapTempError >=
            KeACCR_dT_EvapTempError_LSP) && (ACCR_ac_DW.UnitDelay_DSTATE_k0));
    }

    /* End of Switch: '<S714>/Switch1' */
    /* End of Outputs for SubSystem: '<S322>/Hysteresis1' */

    /* Outputs for Atomic SubSystem: '<S322>/Hysteresis' */
    /* Switch: '<S713>/Switch1' incorporates:
     *  Lookup_n-D: '<S723>/Vector'
     *  RelationalOperator: '<S713>/GreaterThan'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
     */
    if (VeACCR_dT_EvapTempError > look1_iflf_binlca_16a
            (ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_e, ((const float32
           *)&(KxACCR_dT_EvapTempErrVsCellTemp_RSP[0])), ((const float32 *)
            &(KtACCR_dT_EvapTempErrVsCellTemp_RSP[0])), 5U))
    {
        /* Switch: '<S713>/Switch1' incorporates:
         *  Constant: '<S713>/ConstantValue'
         */
        VeACCR_b_EvapTempError_Hys = true;
    }
    else
    {
        /* Switch: '<S713>/Switch1' incorporates:
         *  Lookup_n-D: '<S724>/Vector'
         *  RelationalOperator: '<S713>/GreaterThan1'
         *  UnitDelay: '<S713>/UnitDelay'
         */
        VeACCR_b_EvapTempError_Hys = ((VeACCR_dT_EvapTempError >=
            look1_iflf_binlca_16a
            (ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_e, ((const float32
            *)&(KxACCR_dT_EvapTempErrorVsCellTemp_LSP[0])), ((const float32 *)
            &(KtACCR_dT_EvapTempErrorVsCellTemp_LSP[0])), 5U)) &&
            (VeACCR_b_EvapTempError_Hys));
    }

    /* End of Switch: '<S713>/Switch1' */
    /* End of Outputs for SubSystem: '<S322>/Hysteresis' */

    /* Switch: '<S322>/Switch2' incorporates:
     *  Constant: '<S718>/Calib'
     */
    if (KeACCR_b_ModEvapTempError_En)
    {
        /* Switch: '<S322>/Switch' */
        if (VeACCR_b_EvapTempError_Hys)
        {
            /* Switch: '<S322>/Switch1' incorporates:
             *  UnitDelay: '<S714>/UnitDelay'
             */
            if (ACCR_ac_DW.UnitDelay_DSTATE_k0)
            {
                /* Switch: '<S322>/Switch2' incorporates:
                 *  Constant: '<S720>/Calib'
                 *  Switch: '<S322>/Switch'
                 */
                VeACCR_dT_ModEvapTempError_Delta =
                    KeACCR_dT_EvapTempError_Offset;
            }
            else
            {
                /* Switch: '<S322>/Switch2' incorporates:
                 *  Switch: '<S322>/Switch'
                 */
                VeACCR_dT_ModEvapTempError_Delta = VeACCR_dT_EvapTempError;
            }

            /* End of Switch: '<S322>/Switch1' */
        }
        else
        {
            /* Switch: '<S322>/Switch2' incorporates:
             *  Switch: '<S322>/Switch'
             */
            VeACCR_dT_ModEvapTempError_Delta = VeACCR_dT_EvapTempError;
        }

        /* End of Switch: '<S322>/Switch' */
    }
    else
    {
        /* Switch: '<S322>/Switch2' */
        VeACCR_dT_ModEvapTempError_Delta = VeACCR_dT_EvapTempError;
    }

    /* End of Switch: '<S322>/Switch2' */

    /* Switch: '<S321>/Switch8' incorporates:
     *  Constant: '<S689>/Constant'
     *  Constant: '<S692>/Calib'
     *  Lookup_n-D: '<S703>/Vector'
     *  Lookup_n-D: '<S704>/Vector'
     *  RelationalOperator: '<S321>/Comparison1'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
     *  Switch: '<S321>/Switch7'
     *  Switch: '<S322>/Switch2'
     */
    if (KeACCR_b_CompSpdVsEvapTempError_Slct)
    {
        rtb_Sum1_eo = look1_iflf_binlca_16a(VeACCR_dT_ModEvapTempError_Delta, ((
            const float32 *)&(KxACCR_K_CompSpdVsEvapTempErrorKp[0])), ((const
            float32 *)&(KtACCR_K_CompSpdVsEvapTempErrorKp[0])), 5U);
    }
    else if (CeTRIR_e_HVAC_ECO_ON == ((uint32)
              ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_hz))
    {
        /* Switch: '<S321>/Switch7' incorporates:
         *  Lookup_n-D: '<S705>/Vector'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
         *  Switch: '<S322>/Switch2'
         */
        rtb_Sum1_eo = look2_iflf_binlca_16a(VeACCR_dT_ModEvapTempError_Delta,
            ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_a, ((const float32 *)
            &(KxACCR_K_CompSpdVsEvapTempErrorKp_Amb_EcoMode[0])), ((const
            float32 *)&(KyACCR_K_CompSpdVsEvapTempErrorKp_Amb_EcoMode[0])), ((
            const float32 *)&(KtACCR_K_CompSpdVsEvapTempErrorKp_Amb_EcoMode[0])),
            ACCR_ac_ConstP.pooled15, 8U);
    }
    else
    {
        rtb_Sum1_eo = look2_iflf_binlca_16a(VeACCR_dT_ModEvapTempError_Delta,
            ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_a, ((const float32 *)
            &(KxACCR_K_CompSpdVsEvapTempErrorKp_Amb[0])), ((const float32 *)
            &(KyACCR_K_CompSpdVsEvapTempErrorKp_Amb[0])), ((const float32 *)
            &(KtACCR_K_CompSpdVsEvapTempErrorKp_Amb[0])),
            ACCR_ac_ConstP.pooled15, 8U);
    }

    /* End of Switch: '<S321>/Switch8' */

    /* Product: '<S706>/proportional_term' */
    rtb_Sum1_f = VeACCR_dT_ModEvapTempError_Delta * rtb_Sum1_eo;

    /* Logic: '<S323>/Logical1' incorporates:
     *  Constant: '<S742>/Calib'
     *  RelationalOperator: '<S323>/Comparison1'
     *  RelationalOperator: '<S323>/Comparison3'
     *  UnitDelay: '<S323>/UnitDelay1'
     */
    rtb_Logical1_cp = ((ACCR_ac_DW.UnitDelay1_DSTATE >
                        VeACCR_dT_ModEvapTempError_Delta) &&
                       (VeACCR_dT_ModEvapTempError_Delta ==
                        KeACCR_dT_EvapErrResetIhigh));

    /* Outputs for Atomic SubSystem: '<S321>/EdgeRising' */
    /* Logic: '<S687>/AND' incorporates:
     *  Logic: '<S687>/OR1'
     *  UnitDelay: '<S687>/UnitDelay'
     */
    rtb_AND_mh = (rtb_Logical1_cp && (!ACCR_ac_DW.UnitDelay_DSTATE_j3));

    /* Update for UnitDelay: '<S687>/UnitDelay' */
    ACCR_ac_DW.UnitDelay_DSTATE_j3 = rtb_Logical1_cp;

    /* End of Outputs for SubSystem: '<S321>/EdgeRising' */

    /* Logic: '<S323>/Logical2' incorporates:
     *  Constant: '<S743>/Calib'
     *  RelationalOperator: '<S323>/Comparison4'
     *  RelationalOperator: '<S323>/Comparison5'
     *  UnitDelay: '<S323>/UnitDelay2'
     */
    rtb_Logical1_ecb = ((ACCR_ac_DW.UnitDelay2_DSTATE <
                         VeACCR_dT_ModEvapTempError_Delta) &&
                        (VeACCR_dT_ModEvapTempError_Delta ==
                         KeACCR_dT_EvapErrResetIlow));

    /* Outputs for Atomic SubSystem: '<S321>/EdgeRising1' */
    /* Logic: '<S688>/AND' incorporates:
     *  Logic: '<S688>/OR1'
     *  UnitDelay: '<S688>/UnitDelay'
     */
    rtb_Logical4_f2 = (rtb_Logical1_ecb && (!ACCR_ac_DW.UnitDelay_DSTATE_ps));

    /* Update for UnitDelay: '<S688>/UnitDelay' */
    ACCR_ac_DW.UnitDelay_DSTATE_ps = rtb_Logical1_ecb;

    /* End of Outputs for SubSystem: '<S321>/EdgeRising1' */

    /* Switch: '<S706>/Switch2' incorporates:
     *  Constant: '<S690>/Constant'
     *  Constant: '<S692>/Calib'
     *  Constant: '<S694>/Calib'
     *  Constant: '<S695>/Calib'
     *  Constant: '<S706>/ConstantValue1'
     *  Logic: '<S321>/Logical2'
     *  Logic: '<S706>/Logical1'
     *  Logic: '<S706>/Logical5'
     *  RelationalOperator: '<S321>/Comparison5'
     *  RelationalOperator: '<S706>/Comparison3'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
     *  Switch: '<S321>/Switch1'
     *  Switch: '<S321>/Switch5'
     *  Switch: '<S706>/Switch'
     *  UnitDelay: '<S706>/UnitDelay'
     */
    if (((rtb_Sum1_f >= KeACCR_n_EvapTempCntrl_MaxRPM) &&
            (KeACCR_b_EvapItermhold)) || rtb_Logical1_n3o)
    {
        ACCR_ac_DW.UnitDelay_DSTATE_n = 0.0F;
    }
    else
    {
        if (rtb_AND_mh || rtb_Logical4_f2)
        {
            /* Switch: '<S321>/Switch3' incorporates:
             *  Logic: '<S321>/Logical4'
             *  RelationalOperator: '<S321>/Comparison4'
             *  Switch: '<S321>/Switch4'
             *  Switch: '<S706>/Switch'
             *  UnitDelay: '<S323>/UnitDelay'
             *  UnitDelay: '<S706>/UnitDelay'
             */
            if (rtb_AND_mh)
            {
                /* Switch: '<S321>/Switch6' incorporates:
                 *  RelationalOperator: '<S321>/Comparison2'
                 *  UnitDelay: '<S323>/UnitDelay'
                 *  UnitDelay: '<S706>/UnitDelay'
                 */
                if (ACCR_ac_DW.UnitDelay_DSTATE_n > VeACCR_n_CompSpeedTgt_B4D)
                {
                    /* Switch: '<S706>/Switch' incorporates:
                     *  Constant: '<S321>/ConstantValue1'
                     *  Constant: '<S691>/Calib'
                     *  Product: '<S321>/Multiplication3'
                     *  Sum: '<S321>/Sum_Sub3'
                     *  Switch: '<S321>/Switch3'
                     */
                    ACCR_ac_DW.UnitDelay_DSTATE_n = (1.0F -
                        KeACCR_Pct_EvapErrIreset) * VeACCR_n_CompSpeedTgt_B4D;
                }

                /* End of Switch: '<S321>/Switch6' */
            }
            else
            {
                if (rtb_Logical4_f2 && (ACCR_ac_DW.UnitDelay_DSTATE_n >
                                        VeACCR_n_CompSpeedTgt_B4D))
                {
                    /* Switch: '<S321>/Switch4' incorporates:
                     *  Constant: '<S321>/ConstantValue1'
                     *  Constant: '<S691>/Calib'
                     *  Product: '<S321>/Multiplication3'
                     *  Sum: '<S321>/Sum_Sub3'
                     *  Switch: '<S321>/Switch3'
                     *  Switch: '<S706>/Switch'
                     *  UnitDelay: '<S323>/UnitDelay'
                     */
                    ACCR_ac_DW.UnitDelay_DSTATE_n = (1.0F -
                        KeACCR_Pct_EvapErrIreset) * VeACCR_n_CompSpeedTgt_B4D;
                }
            }

            /* End of Switch: '<S321>/Switch3' */
        }
        else
        {
            if (KeACCR_b_CompSpdVsEvapTempError_Slct)
            {
                /* Switch: '<S321>/Switch1' incorporates:
                 *  Lookup_n-D: '<S700>/Vector'
                 *  Switch: '<S322>/Switch2'
                 *  Switch: '<S706>/Switch'
                 */
                rtb_Sum1_eo = look1_iflf_binlca_16a
                    (VeACCR_dT_ModEvapTempError_Delta, ((const float32 *)
                      &(KxACCR_K_CompSpdVsEvapTempErrorKi[0])), ((const float32 *)
                      &(KtACCR_K_CompSpdVsEvapTempErrorKi[0])), 5U);
            }
            else if (((uint32)ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_hz)
                     == CeTRIR_e_HVAC_ECO_ON)
            {
                /* Switch: '<S321>/Switch5' incorporates:
                 *  Lookup_n-D: '<S702>/Vector'
                 *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
                 *  Switch: '<S321>/Switch1'
                 *  Switch: '<S322>/Switch2'
                 *  Switch: '<S706>/Switch'
                 */
                rtb_Sum1_eo = look2_iflf_binlca_16a
                    (VeACCR_dT_ModEvapTempError_Delta,
                     ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_a, ((const
                       float32 *)
                      &(KxACCR_K_CompSpdVsEvapTempErrorKi_Amb_EcoMode[0])), ((
                       const float32 *)
                      &(KyACCR_K_CompSpdVsEvapTempErrorKi_Amb_EcoMode[0])), ((
                       const float32 *)
                      &(KtACCR_K_CompSpdVsEvapTempErrorKi_Amb_EcoMode[0])),
                     ACCR_ac_ConstP.pooled15, 8U);
            }
            else
            {
                /* Switch: '<S321>/Switch1' incorporates:
                 *  Lookup_n-D: '<S701>/Vector'
                 *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
                 *  Switch: '<S321>/Switch5'
                 *  Switch: '<S322>/Switch2'
                 *  Switch: '<S706>/Switch'
                 */
                rtb_Sum1_eo = look2_iflf_binlca_16a
                    (VeACCR_dT_ModEvapTempError_Delta,
                     ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_a, ((const
                       float32 *)&(KxACCR_K_CompSpdVsEvapTempErrorKi_Amb[0])),
                     ((const float32 *)&(KyACCR_K_CompSpdVsEvapTempErrorKi_Amb[0])),
                     ((const float32 *)&(KtACCR_K_CompSpdVsEvapTempErrorKi_Amb[0])),
                     ACCR_ac_ConstP.pooled15, 8U);
            }

            /* Switch: '<S706>/Switch' incorporates:
             *  Constant: '<S321>/ConstantValue9'
             *  Constant: '<S690>/Constant'
             *  Product: '<S706>/Multiplication1'
             *  RelationalOperator: '<S321>/Comparison5'
             *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
             *  Sum: '<S706>/Sum_Sub'
             *  Switch: '<S321>/Switch1'
             *  Switch: '<S321>/Switch5'
             *  UnitDelay: '<S706>/UnitDelay'
             */
            ACCR_ac_DW.UnitDelay_DSTATE_n += (VeACCR_dT_ModEvapTempError_Delta *
                rtb_Sum1_eo) * 0.1F;
        }

        /* Outputs for Atomic SubSystem: '<S706>/integral_term' */
        /* Switch: '<S710>/Switch1' incorporates:
         *  Constant: '<S690>/Constant'
         *  Constant: '<S692>/Calib'
         *  RelationalOperator: '<S321>/Comparison5'
         *  RelationalOperator: '<S710>/RelationalOperator'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
         *  Switch: '<S321>/Switch1'
         *  Switch: '<S321>/Switch5'
         *  Switch: '<S706>/Switch'
         */
        if (KeACCR_n_EvapTempCntrl_MaxRPM < ACCR_ac_DW.UnitDelay_DSTATE_n)
        {
            /* Switch: '<S710>/Switch1' */
            ACCR_ac_DW.UnitDelay_DSTATE_n = KeACCR_n_EvapTempCntrl_MaxRPM;
        }

        /* End of Switch: '<S710>/Switch1' */

        /* Switch: '<S710>/Switch' incorporates:
         *  Constant: '<S696>/Calib'
         *  RelationalOperator: '<S710>/RelationalOperator1'
         *  UnitDelay: '<S706>/UnitDelay'
         */
        if (ACCR_ac_DW.UnitDelay_DSTATE_n <= KeACCR_n_EvapTempCntrl_MinRPM)
        {
            ACCR_ac_DW.UnitDelay_DSTATE_n = KeACCR_n_EvapTempCntrl_MinRPM;
        }

        /* End of Switch: '<S710>/Switch' */
        /* End of Outputs for SubSystem: '<S706>/integral_term' */
    }

    /* End of Switch: '<S706>/Switch2' */

    /* Switch: '<S712>/Switch1' incorporates:
     *  Constant: '<S697>/Calib'
     *  Constant: '<S708>/ConstantValue7'
     *  MinMax: '<S712>/Maximum'
     *  Product: '<S712>/Multiplication'
     *  Product: '<S712>/Multiplication1'
     *  Sum: '<S712>/Subtraction'
     *  Sum: '<S712>/Summation'
     *  UnitDelay: '<S712>/UnitDelay'
     */
    ACCR_ac_DW.UnitDelay_DSTATE_k += ((VeACCR_dT_ModEvapTempError_Delta -
        ACCR_ac_DW.UnitDelay_DSTATE_k) * 0.1F) * (1.0F / fmaxf
        (KeACCR_t_FilterDerivEvapTemp, 0.1F));

    /* Switch: '<S709>/Switch1' incorporates:
     *  Constant: '<S693>/Calib'
     */
    if (KeACCR_b_EnableEvapTempPIDFilter)
    {
        /* Switch: '<S709>/Switch1' incorporates:
         *  UnitDelay: '<S712>/UnitDelay'
         */
        rtb_Sum1 = ACCR_ac_DW.UnitDelay_DSTATE_k;
    }
    else
    {
        /* Switch: '<S709>/Switch1' */
        rtb_Sum1 = VeACCR_dT_ModEvapTempError_Delta;
    }

    /* End of Switch: '<S709>/Switch1' */

    /* UnitDelay: '<S707>/UnitDelay' */
    VeACCR_b_EvapTmpPIDEnbl = ACCR_ac_DW.UnitDelay_DSTATE_f;

    /* Switch: '<S706>/Switch1' incorporates:
     *  Constant: '<S321>/ConstantValue9'
     *  Product: '<S706>/Multiplication2'
     *  Product: '<S706>/derivative_term'
     *  Sum: '<S706>/Sum_  Sub1'
     *  Sum: '<S706>/Sum_Sub2'
     *  UnitDelay: '<S706>/UnitDelay'
     *  UnitDelay: '<S706>/UnitDelay1'
     *  UnitDelay: '<S706>/UnitDelay2'
     */
    if (VeACCR_b_EvapTmpPIDEnbl)
    {
        /* Switch: '<S321>/Switch2' incorporates:
         *  Constant: '<S692>/Calib'
         *  Lookup_n-D: '<S698>/Vector'
         *  Lookup_n-D: '<S699>/Vector'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
         *  Switch: '<S322>/Switch2'
         */
        if (KeACCR_b_CompSpdVsEvapTempError_Slct)
        {
            rtb_Sum1_eo = look1_iflf_binlca_16a(VeACCR_dT_ModEvapTempError_Delta,
                ((const float32 *)&(KxACCR_K_CompSpdVsEvapTempErrorKd[0])), ((
                const float32 *)&(KtACCR_K_CompSpdVsEvapTempErrorKd[0])), 5U);
        }
        else
        {
            rtb_Sum1_eo = look2_iflf_binlca_16a(VeACCR_dT_ModEvapTempError_Delta,
                ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_a, ((const
                float32 *)&(KxACCR_K_CompSpdVsEvapTempErrorKd_Amb[0])), ((const
                float32 *)&(KyACCR_K_CompSpdVsEvapTempErrorKd_Amb[0])), ((const
                float32 *)&(KtACCR_K_CompSpdVsEvapTempErrorKd_Amb[0])),
                ACCR_ac_ConstP.pooled15, 8U);
        }

        /* End of Switch: '<S321>/Switch2' */
        ACCR_ac_DW.UnitDelay2_DSTATE_m = (((rtb_Sum1 -
            ACCR_ac_DW.UnitDelay1_DSTATE_d) * rtb_Sum1_eo) / 0.1F) + (rtb_Sum1_f
            + ACCR_ac_DW.UnitDelay_DSTATE_n);
    }

    /* End of Switch: '<S706>/Switch1' */

    /* Product: '<S320>/Product2' incorporates:
     *  Constant: '<S339>/Calib'
     */
    rtb_Sum1_f = VeACCR_dT_ModEvapTempError_Delta * KeACCR_K_FuzzyEterm_Gain;

    /* If: '<S596>/If' incorporates:
     *  Constant: '<S572>/Calib'
     *  Constant: '<S573>/Calib'
     *  Constant: '<S574>/Calib'
     *  Constant: '<S575>/Calib'
     *  Logic: '<S596>/Logical1'
     *  Logic: '<S596>/Logical2'
     *  RelationalOperator: '<S596>/Comparison'
     *  RelationalOperator: '<S596>/Comparison1'
     *  RelationalOperator: '<S596>/Comparison2'
     *  RelationalOperator: '<S596>/Comparison3'
     *  RelationalOperator: '<S596>/Comparison4'
     */
    if ((rtb_Sum1_f < KeACCR_K_ETermNegTrapMF_a_new) || (rtb_Sum1_f >
            KeACCR_K_ETermNegTrapMF_d_new))
    {
        /* Outputs for IfAction SubSystem: '<S596>/IfActionSubsystem' incorporates:
         *  ActionPort: '<S603>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem((&(VeACCR_K_EtermNegTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S596>/IfActionSubsystem' */
    }
    else if ((rtb_Sum1_f >= KeACCR_K_ETermNegTrapMF_b_new) && (rtb_Sum1_f <=
              KeACCR_K_ETermNegTrapMF_c_new))
    {
        /* Outputs for IfAction SubSystem: '<S596>/IfActionSubsystem2' incorporates:
         *  ActionPort: '<S605>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem2((&(VeACCR_K_EtermNegTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S596>/IfActionSubsystem2' */
    }
    else if (rtb_Sum1_f < KeACCR_K_ETermNegTrapMF_b_new)
    {
        /* Outputs for IfAction SubSystem: '<S596>/IfActionSubsystem1' incorporates:
         *  ActionPort: '<S604>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem1(rtb_Sum1_f, KeACCR_K_ETermNegTrapMF_a_new,
            KeACCR_K_ETermNegTrapMF_b_new, (&(VeACCR_K_EtermNegTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S596>/IfActionSubsystem1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S596>/IfActionSubsystem4' incorporates:
         *  ActionPort: '<S606>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem3(rtb_Sum1_f, KeACCR_K_ETermNegTrapMF_c_new,
            KeACCR_K_ETermNegTrapMF_d_new, (&(VeACCR_K_EtermNegTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S596>/IfActionSubsystem4' */
    }

    /* End of If: '<S596>/If' */

    /* If: '<S597>/If' incorporates:
     *  Constant: '<S576>/Calib'
     *  Constant: '<S577>/Calib'
     *  Constant: '<S578>/Calib'
     *  Constant: '<S579>/Calib'
     *  Logic: '<S597>/Logical1'
     *  Logic: '<S597>/Logical2'
     *  RelationalOperator: '<S597>/Comparison'
     *  RelationalOperator: '<S597>/Comparison1'
     *  RelationalOperator: '<S597>/Comparison2'
     *  RelationalOperator: '<S597>/Comparison3'
     *  RelationalOperator: '<S597>/Comparison4'
     */
    if ((rtb_Sum1_f < KeACCR_K_ETermPosMedTrapMF_a_new) || (rtb_Sum1_f >
            KeACCR_K_ETermPosMedTrapMF_d_new))
    {
        /* Outputs for IfAction SubSystem: '<S597>/IfActionSubsystem' incorporates:
         *  ActionPort: '<S609>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem((&(VeACCR_K_EtermPosMedTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S597>/IfActionSubsystem' */
    }
    else if ((rtb_Sum1_f >= KeACCR_K_ETermPosMedTrapMF_b_new) && (rtb_Sum1_f <=
              KeACCR_K_ETermPosMedTrapMF_c_new))
    {
        /* Outputs for IfAction SubSystem: '<S597>/IfActionSubsystem2' incorporates:
         *  ActionPort: '<S610>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem2((&(VeACCR_K_EtermPosMedTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S597>/IfActionSubsystem2' */
    }
    else if (rtb_Sum1_f < KeACCR_K_ETermPosMedTrapMF_b_new)
    {
        /* Outputs for IfAction SubSystem: '<S597>/IfActionSubsystem3' incorporates:
         *  ActionPort: '<S611>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem1(rtb_Sum1_f, KeACCR_K_ETermPosMedTrapMF_a_new,
            KeACCR_K_ETermPosMedTrapMF_b_new, (&(VeACCR_K_EtermPosMedTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S597>/IfActionSubsystem3' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S597>/IfActionSubsystem4' incorporates:
         *  ActionPort: '<S612>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem3(rtb_Sum1_f, KeACCR_K_ETermPosMedTrapMF_c_new,
            KeACCR_K_ETermPosMedTrapMF_d_new, (&(VeACCR_K_EtermPosMedTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S597>/IfActionSubsystem4' */
    }

    /* End of If: '<S597>/If' */

    /* If: '<S600>/If' incorporates:
     *  Constant: '<S584>/Calib'
     *  Constant: '<S585>/Calib'
     *  Constant: '<S586>/Calib'
     *  Constant: '<S587>/Calib'
     *  Logic: '<S600>/Logical1'
     *  Logic: '<S600>/Logical2'
     *  RelationalOperator: '<S600>/Comparison'
     *  RelationalOperator: '<S600>/Comparison1'
     *  RelationalOperator: '<S600>/Comparison2'
     *  RelationalOperator: '<S600>/Comparison3'
     *  RelationalOperator: '<S600>/Comparison4'
     */
    if ((rtb_Sum1_f < KeACCR_K_ETermVrySmlNegTrapMF_a_new) || (rtb_Sum1_f >
            KeACCR_K_ETermVrySmlNegTrapMF_d_new))
    {
        /* Outputs for IfAction SubSystem: '<S600>/IfActionSubsystem' incorporates:
         *  ActionPort: '<S627>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem((&(VeACCR_K_EtermVrySmllNgtvTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S600>/IfActionSubsystem' */
    }
    else if ((rtb_Sum1_f >= KeACCR_K_ETermVrySmlNegTrapMF_b_new) && (rtb_Sum1_f <=
              KeACCR_K_ETermVrySmlNegTrapMF_c_new))
    {
        /* Outputs for IfAction SubSystem: '<S600>/IfActionSubsystem2' incorporates:
         *  ActionPort: '<S628>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem2((&(VeACCR_K_EtermVrySmllNgtvTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S600>/IfActionSubsystem2' */
    }
    else if (rtb_Sum1_f < KeACCR_K_ETermVrySmlNegTrapMF_b_new)
    {
        /* Outputs for IfAction SubSystem: '<S600>/IfActionSubsystem3' incorporates:
         *  ActionPort: '<S629>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem1(rtb_Sum1_f,
            KeACCR_K_ETermVrySmlNegTrapMF_a_new,
            KeACCR_K_ETermVrySmlNegTrapMF_b_new,
            (&(VeACCR_K_EtermVrySmllNgtvTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S600>/IfActionSubsystem3' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S600>/IfActionSubsystem4' incorporates:
         *  ActionPort: '<S630>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem3(rtb_Sum1_f,
            KeACCR_K_ETermVrySmlNegTrapMF_c_new,
            KeACCR_K_ETermVrySmlNegTrapMF_d_new,
            (&(VeACCR_K_EtermVrySmllNgtvTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S600>/IfActionSubsystem4' */
    }

    /* End of If: '<S600>/If' */

    /* If: '<S602>/If' incorporates:
     *  Constant: '<S569>/Calib'
     *  Constant: '<S570>/Calib'
     *  Constant: '<S571>/Calib'
     *  Logic: '<S602>/Logical1'
     *  RelationalOperator: '<S602>/Comparison'
     *  RelationalOperator: '<S602>/Comparison1'
     *  RelationalOperator: '<S602>/Comparison2'
     *  RelationalOperator: '<S602>/Comparison4'
     */
    if ((rtb_Sum1_f < KeACCR_K_ETermMedTrigMF_a_new) || (rtb_Sum1_f >
            KeACCR_K_ETermMedTrigMF_c_new))
    {
        /* Outputs for IfAction SubSystem: '<S602>/IfActionSubsystem' incorporates:
         *  ActionPort: '<S639>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem((&(VeACCR_K_EtermMedTrigMF1_out)));

        /* End of Outputs for SubSystem: '<S602>/IfActionSubsystem' */
    }
    else if (rtb_Sum1_f == KeACCR_K_ETermMedTrigMF_b_new)
    {
        /* Outputs for IfAction SubSystem: '<S602>/IfActionSubsystem2' incorporates:
         *  ActionPort: '<S640>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem2((&(VeACCR_K_EtermMedTrigMF1_out)));

        /* End of Outputs for SubSystem: '<S602>/IfActionSubsystem2' */
    }
    else if (rtb_Sum1_f < KeACCR_K_ETermMedTrigMF_b_new)
    {
        /* Outputs for IfAction SubSystem: '<S602>/IfActionSubsystem3' incorporates:
         *  ActionPort: '<S641>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem1(rtb_Sum1_f, KeACCR_K_ETermMedTrigMF_a_new,
            KeACCR_K_ETermMedTrigMF_b_new, (&(VeACCR_K_EtermMedTrigMF1_out)));

        /* End of Outputs for SubSystem: '<S602>/IfActionSubsystem3' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S602>/IfActionSubsystem4' incorporates:
         *  ActionPort: '<S642>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem3_f(rtb_Sum1_f, KeACCR_K_ETermMedTrigMF_b_new,
            KeACCR_K_ETermMedTrigMF_c_new, (&(VeACCR_K_EtermMedTrigMF1_out)));

        /* End of Outputs for SubSystem: '<S602>/IfActionSubsystem4' */
    }

    /* End of If: '<S602>/If' */

    /* If: '<S601>/If' incorporates:
     *  Constant: '<S588>/Calib'
     *  Constant: '<S589>/Calib'
     *  Constant: '<S590>/Calib'
     *  Constant: '<S591>/Calib'
     *  Logic: '<S601>/Logical1'
     *  Logic: '<S601>/Logical2'
     *  RelationalOperator: '<S601>/Comparison'
     *  RelationalOperator: '<S601>/Comparison1'
     *  RelationalOperator: '<S601>/Comparison2'
     *  RelationalOperator: '<S601>/Comparison3'
     *  RelationalOperator: '<S601>/Comparison4'
     */
    if ((rtb_Sum1_f < KeACCR_K_ETermVrySmlPosTrapMF_a_new) || (rtb_Sum1_f >
            KeACCR_K_ETermVrySmlPosTrapMF_d_new))
    {
        /* Outputs for IfAction SubSystem: '<S601>/IfActionSubsystem' incorporates:
         *  ActionPort: '<S633>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem((&(VeACCR_K_EtermVrySmllPosTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S601>/IfActionSubsystem' */
    }
    else if ((rtb_Sum1_f >= KeACCR_K_ETermVrySmlPosTrapMF_b_new) && (rtb_Sum1_f <=
              KeACCR_K_ETermVrySmlPosTrapMF_c_new))
    {
        /* Outputs for IfAction SubSystem: '<S601>/IfActionSubsystem2' incorporates:
         *  ActionPort: '<S635>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem2((&(VeACCR_K_EtermVrySmllPosTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S601>/IfActionSubsystem2' */
    }
    else if (rtb_Sum1_f < KeACCR_K_ETermVrySmlPosTrapMF_b_new)
    {
        /* Outputs for IfAction SubSystem: '<S601>/IfActionSubsystem1' incorporates:
         *  ActionPort: '<S634>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem1(rtb_Sum1_f,
            KeACCR_K_ETermVrySmlPosTrapMF_a_new,
            KeACCR_K_ETermVrySmlPosTrapMF_b_new,
            (&(VeACCR_K_EtermVrySmllPosTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S601>/IfActionSubsystem1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S601>/IfActionSubsystem3' incorporates:
         *  ActionPort: '<S636>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem3(rtb_Sum1_f,
            KeACCR_K_ETermVrySmlPosTrapMF_c_new,
            KeACCR_K_ETermVrySmlPosTrapMF_d_new,
            (&(VeACCR_K_EtermVrySmllPosTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S601>/IfActionSubsystem3' */
    }

    /* End of If: '<S601>/If' */

    /* If: '<S598>/If' incorporates:
     *  Constant: '<S592>/Calib'
     *  Constant: '<S593>/Calib'
     *  Constant: '<S594>/Calib'
     *  Constant: '<S595>/Calib'
     *  Logic: '<S598>/Logical1'
     *  Logic: '<S598>/Logical2'
     *  RelationalOperator: '<S598>/Comparison'
     *  RelationalOperator: '<S598>/Comparison1'
     *  RelationalOperator: '<S598>/Comparison2'
     *  RelationalOperator: '<S598>/Comparison3'
     *  RelationalOperator: '<S598>/Comparison4'
     */
    if ((rtb_Sum1_f < KeACCR_K_ETermZeroTrapMF_a_new) || (rtb_Sum1_f >
            KeACCR_K_ETermZeroTrapMF_d_new))
    {
        /* Outputs for IfAction SubSystem: '<S598>/IfActionSubsystem' incorporates:
         *  ActionPort: '<S615>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem((&(VeACCR_K_EtermZeroTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S598>/IfActionSubsystem' */
    }
    else if ((rtb_Sum1_f >= KeACCR_K_ETermZeroTrapMF_b_new) && (rtb_Sum1_f <=
              KeACCR_K_ETermZeroTrapMF_c_new))
    {
        /* Outputs for IfAction SubSystem: '<S598>/IfActionSubsystem2' incorporates:
         *  ActionPort: '<S617>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem2((&(VeACCR_K_EtermZeroTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S598>/IfActionSubsystem2' */
    }
    else if (rtb_Sum1_f < KeACCR_K_ETermZeroTrapMF_b_new)
    {
        /* Outputs for IfAction SubSystem: '<S598>/IfActionSubsystem1' incorporates:
         *  ActionPort: '<S616>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem1(rtb_Sum1_f, KeACCR_K_ETermZeroTrapMF_a_new,
            KeACCR_K_ETermZeroTrapMF_b_new, (&(VeACCR_K_EtermZeroTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S598>/IfActionSubsystem1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S598>/IfActionSubsystem3' incorporates:
         *  ActionPort: '<S618>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem3(rtb_Sum1_f, KeACCR_K_ETermZeroTrapMF_c_new,
            KeACCR_K_ETermZeroTrapMF_d_new, (&(VeACCR_K_EtermZeroTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S598>/IfActionSubsystem3' */
    }

    /* End of If: '<S598>/If' */

    /* If: '<S599>/If' incorporates:
     *  Constant: '<S580>/Calib'
     *  Constant: '<S581>/Calib'
     *  Constant: '<S582>/Calib'
     *  Constant: '<S583>/Calib'
     *  Logic: '<S599>/Logical1'
     *  Logic: '<S599>/Logical2'
     *  RelationalOperator: '<S599>/Comparison'
     *  RelationalOperator: '<S599>/Comparison1'
     *  RelationalOperator: '<S599>/Comparison2'
     *  RelationalOperator: '<S599>/Comparison3'
     *  RelationalOperator: '<S599>/Comparison4'
     */
    if ((rtb_Sum1_f < KeACCR_K_ETermPosTrapMF_a_new) || (rtb_Sum1_f >
            KeACCR_K_ETermPosTrapMF_d_new))
    {
        /* Outputs for IfAction SubSystem: '<S599>/IfActionSubsystem' incorporates:
         *  ActionPort: '<S621>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem((&(VeACCR_K_EtermPosTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S599>/IfActionSubsystem' */
    }
    else if ((rtb_Sum1_f >= KeACCR_K_ETermPosTrapMF_b_new) && (rtb_Sum1_f <=
              KeACCR_K_ETermPosTrapMF_c_new))
    {
        /* Outputs for IfAction SubSystem: '<S599>/IfActionSubsystem2' incorporates:
         *  ActionPort: '<S623>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem2((&(VeACCR_K_EtermPosTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S599>/IfActionSubsystem2' */
    }
    else if (rtb_Sum1_f < KeACCR_K_ETermPosTrapMF_b_new)
    {
        /* Outputs for IfAction SubSystem: '<S599>/IfActionSubsystem1' incorporates:
         *  ActionPort: '<S622>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem1(rtb_Sum1_f, KeACCR_K_ETermPosTrapMF_a_new,
            KeACCR_K_ETermPosTrapMF_b_new, (&(VeACCR_K_EtermPosTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S599>/IfActionSubsystem1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S599>/IfActionSubsystem3' incorporates:
         *  ActionPort: '<S624>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem3(rtb_Sum1_f, KeACCR_K_ETermPosTrapMF_c_new,
            KeACCR_K_ETermPosTrapMF_d_new, (&(VeACCR_K_EtermPosTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S599>/IfActionSubsystem3' */
    }

    /* End of If: '<S599>/If' */

    /* MinMax: '<S491>/MinMax1' */
    rtb_Switch1_g3[0] = VeACCR_K_EtermNegTrapMF1_out;
    rtb_Switch1_g3[1] = VeACCR_K_EtermPosMedTrapMF1_out;
    rtb_Switch1_g3[2] = VeACCR_K_EtermVrySmllNgtvTrapMF1_out;
    rtb_Switch1_g3[3] = VeACCR_K_EtermMedTrigMF1_out;
    rtb_Switch1_g3[4] = VeACCR_K_EtermVrySmllPosTrapMF1_out;
    rtb_Switch1_g3[5] = VeACCR_K_EtermZeroTrapMF1_out;
    rtb_Switch1_g3[6] = VeACCR_K_EtermPosTrapMF1_out;
    VeACCR_K_EtermMF1_Max = VeACCR_K_EtermNegTrapMF1_out;
    for (i = 0; i < 6; i++)
    {
        VeACCR_K_EtermMF1_Max = fmaxf(VeACCR_K_EtermMF1_Max, rtb_Switch1_g3[i +
            1]);
    }

    /* End of MinMax: '<S491>/MinMax1' */

    /* If: '<S645>/If' incorporates:
     *  RelationalOperator: '<S645>/Comparison'
     *  RelationalOperator: '<S645>/Comparison1'
     *  RelationalOperator: '<S645>/Comparison2'
     *  RelationalOperator: '<S645>/Comparison3'
     *  RelationalOperator: '<S645>/Comparison4'
     *  RelationalOperator: '<S645>/Comparison5'
     */
    if (VeACCR_K_EtermNegTrapMF1_out == VeACCR_K_EtermMF1_Max)
    {
        /* Outputs for IfAction SubSystem: '<S645>/MF_1' incorporates:
         *  ActionPort: '<S651>/ActionPort'
         */
        ACCR_ac_MF_1((&(VeACCR_i_MaxEtermMFState_AftMerg)));

        /* End of Outputs for SubSystem: '<S645>/MF_1' */
    }
    else if (VeACCR_K_EtermPosMedTrapMF1_out == VeACCR_K_EtermMF1_Max)
    {
        /* Outputs for IfAction SubSystem: '<S645>/MF_2' incorporates:
         *  ActionPort: '<S652>/ActionPort'
         */
        ACCR_ac_MF_2((&(VeACCR_i_MaxEtermMFState_AftMerg)));

        /* End of Outputs for SubSystem: '<S645>/MF_2' */
    }
    else if (VeACCR_K_EtermVrySmllNgtvTrapMF1_out == VeACCR_K_EtermMF1_Max)
    {
        /* Outputs for IfAction SubSystem: '<S645>/MF_3' incorporates:
         *  ActionPort: '<S653>/ActionPort'
         */
        ACCR_ac_MF_3((&(VeACCR_i_MaxEtermMFState_AftMerg)));

        /* End of Outputs for SubSystem: '<S645>/MF_3' */
    }
    else if (VeACCR_K_EtermMedTrigMF1_out == VeACCR_K_EtermMF1_Max)
    {
        /* Outputs for IfAction SubSystem: '<S645>/MF_4' incorporates:
         *  ActionPort: '<S654>/ActionPort'
         */
        ACCR_ac_MF_4((&(VeACCR_i_MaxEtermMFState_AftMerg)));

        /* End of Outputs for SubSystem: '<S645>/MF_4' */
    }
    else if (VeACCR_K_EtermVrySmllPosTrapMF1_out == VeACCR_K_EtermMF1_Max)
    {
        /* Outputs for IfAction SubSystem: '<S645>/MF_5' incorporates:
         *  ActionPort: '<S655>/ActionPort'
         */
        ACCR_ac_MF_5((&(VeACCR_i_MaxEtermMFState_AftMerg)));

        /* End of Outputs for SubSystem: '<S645>/MF_5' */
    }
    else if (VeACCR_K_EtermZeroTrapMF1_out == VeACCR_K_EtermMF1_Max)
    {
        /* Outputs for IfAction SubSystem: '<S645>/MF_6' incorporates:
         *  ActionPort: '<S656>/ActionPort'
         */
        ACCR_ac_MF_6((&(VeACCR_i_MaxEtermMFState_AftMerg)));

        /* End of Outputs for SubSystem: '<S645>/MF_6' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S645>/MF_7' incorporates:
         *  ActionPort: '<S657>/ActionPort'
         */
        ACCR_ac_MF_7((&(VeACCR_i_MaxEtermMFState_AftMerg)));

        /* End of Outputs for SubSystem: '<S645>/MF_7' */
    }

    /* End of If: '<S645>/If' */

    /* Switch: '<S649>/Switch1' incorporates:
     *  Constant: '<S649>/Constant2'
     *  RelationalOperator: '<S649>/Comparison2'
     */
    if (VeACCR_K_EtermNegTrapMF1_out != 0.0F)
    {
        /* Switch: '<S650>/Switch1' */
        rtb_Switch1_g3[0] = VeACCR_K_EtermNegTrapMF1_out;
    }
    else
    {
        /* Switch: '<S650>/Switch1' incorporates:
         *  Constant: '<S649>/Constant1'
         */
        rtb_Switch1_g3[0] = 2.0F;
    }

    if (VeACCR_K_EtermPosMedTrapMF1_out != 0.0F)
    {
        /* Switch: '<S650>/Switch1' */
        rtb_Switch1_g3[1] = VeACCR_K_EtermPosMedTrapMF1_out;
    }
    else
    {
        /* Switch: '<S650>/Switch1' incorporates:
         *  Constant: '<S649>/Constant1'
         */
        rtb_Switch1_g3[1] = 2.0F;
    }

    if (VeACCR_K_EtermVrySmllNgtvTrapMF1_out != 0.0F)
    {
        /* Switch: '<S650>/Switch1' */
        rtb_Switch1_g3[2] = VeACCR_K_EtermVrySmllNgtvTrapMF1_out;
    }
    else
    {
        /* Switch: '<S650>/Switch1' incorporates:
         *  Constant: '<S649>/Constant1'
         */
        rtb_Switch1_g3[2] = 2.0F;
    }

    if (VeACCR_K_EtermMedTrigMF1_out != 0.0F)
    {
        /* Switch: '<S650>/Switch1' */
        rtb_Switch1_g3[3] = VeACCR_K_EtermMedTrigMF1_out;
    }
    else
    {
        /* Switch: '<S650>/Switch1' incorporates:
         *  Constant: '<S649>/Constant1'
         */
        rtb_Switch1_g3[3] = 2.0F;
    }

    if (VeACCR_K_EtermVrySmllPosTrapMF1_out != 0.0F)
    {
        /* Switch: '<S650>/Switch1' */
        rtb_Switch1_g3[4] = VeACCR_K_EtermVrySmllPosTrapMF1_out;
    }
    else
    {
        /* Switch: '<S650>/Switch1' incorporates:
         *  Constant: '<S649>/Constant1'
         */
        rtb_Switch1_g3[4] = 2.0F;
    }

    if (VeACCR_K_EtermZeroTrapMF1_out != 0.0F)
    {
        /* Switch: '<S650>/Switch1' */
        rtb_Switch1_g3[5] = VeACCR_K_EtermZeroTrapMF1_out;
    }
    else
    {
        /* Switch: '<S650>/Switch1' incorporates:
         *  Constant: '<S649>/Constant1'
         */
        rtb_Switch1_g3[5] = 2.0F;
    }

    if (VeACCR_K_EtermPosTrapMF1_out != 0.0F)
    {
        /* Switch: '<S650>/Switch1' */
        rtb_Switch1_g3[6] = VeACCR_K_EtermPosTrapMF1_out;
    }
    else
    {
        /* Switch: '<S650>/Switch1' incorporates:
         *  Constant: '<S649>/Constant1'
         */
        rtb_Switch1_g3[6] = 2.0F;
    }

    /* End of Switch: '<S649>/Switch1' */

    /* MinMax: '<S649>/MinMax3' */
    VeACCR_K_EtermMF1_Min = rtb_Switch1_g3[0];
    for (i = 0; i < 6; i++)
    {
        VeACCR_K_EtermMF1_Min = fminf(VeACCR_K_EtermMF1_Min, rtb_Switch1_g3[i +
            1]);
    }

    /* Switch: '<S680>/Switch1' incorporates:
     *  Constant: '<S679>/Constant2'
     *  Constant: '<S679>/Constant3'
     *  Logic: '<S679>/Logical'
     *  Logic: '<S679>/Logical1'
     *  MinMax: '<S649>/MinMax3'
     *  RelationalOperator: '<S679>/Comparison1'
     *  RelationalOperator: '<S679>/Comparison2'
     *  RelationalOperator: '<S679>/Comparison4'
     */
    if ((VeACCR_K_EtermMF1_Min == 2.0F) || ((1.0F == VeACCR_K_EtermMF1_Min) &&
            (VeACCR_K_EtermMF1_Min == VeACCR_K_EtermMF1_Max)))
    {
        /* Switch: '<S680>/Switch1' incorporates:
         *  Constant: '<S679>/Constant1'
         */
        VeACCR_K_EtermMF1_Min = 0.0F;
    }

    /* End of Switch: '<S680>/Switch1' */

    /* If: '<S646>/If' incorporates:
     *  RelationalOperator: '<S646>/Comparison'
     *  RelationalOperator: '<S646>/Comparison1'
     *  RelationalOperator: '<S646>/Comparison2'
     *  RelationalOperator: '<S646>/Comparison3'
     *  RelationalOperator: '<S646>/Comparison4'
     *  RelationalOperator: '<S646>/Comparison5'
     */
    if (VeACCR_K_EtermNegTrapMF1_out == VeACCR_K_EtermMF1_Min)
    {
        /* Outputs for IfAction SubSystem: '<S646>/MF_1' incorporates:
         *  ActionPort: '<S658>/ActionPort'
         */
        ACCR_ac_MF_1((&(VeACCR_i_MinEtermMFState_AftMerg)));

        /* End of Outputs for SubSystem: '<S646>/MF_1' */
    }
    else if (VeACCR_K_EtermPosMedTrapMF1_out == VeACCR_K_EtermMF1_Min)
    {
        /* Outputs for IfAction SubSystem: '<S646>/MF_2' incorporates:
         *  ActionPort: '<S659>/ActionPort'
         */
        ACCR_ac_MF_2((&(VeACCR_i_MinEtermMFState_AftMerg)));

        /* End of Outputs for SubSystem: '<S646>/MF_2' */
    }
    else if (VeACCR_K_EtermVrySmllNgtvTrapMF1_out == VeACCR_K_EtermMF1_Min)
    {
        /* Outputs for IfAction SubSystem: '<S646>/MF_3' incorporates:
         *  ActionPort: '<S660>/ActionPort'
         */
        ACCR_ac_MF_3((&(VeACCR_i_MinEtermMFState_AftMerg)));

        /* End of Outputs for SubSystem: '<S646>/MF_3' */
    }
    else if (VeACCR_K_EtermMedTrigMF1_out == VeACCR_K_EtermMF1_Min)
    {
        /* Outputs for IfAction SubSystem: '<S646>/MF_4' incorporates:
         *  ActionPort: '<S661>/ActionPort'
         */
        ACCR_ac_MF_4((&(VeACCR_i_MinEtermMFState_AftMerg)));

        /* End of Outputs for SubSystem: '<S646>/MF_4' */
    }
    else if (VeACCR_K_EtermVrySmllPosTrapMF1_out == VeACCR_K_EtermMF1_Min)
    {
        /* Outputs for IfAction SubSystem: '<S646>/MF_5' incorporates:
         *  ActionPort: '<S662>/ActionPort'
         */
        ACCR_ac_MF_5((&(VeACCR_i_MinEtermMFState_AftMerg)));

        /* End of Outputs for SubSystem: '<S646>/MF_5' */
    }
    else if (VeACCR_K_EtermZeroTrapMF1_out == VeACCR_K_EtermMF1_Min)
    {
        /* Outputs for IfAction SubSystem: '<S646>/MF_6' incorporates:
         *  ActionPort: '<S663>/ActionPort'
         */
        ACCR_ac_MF_6((&(VeACCR_i_MinEtermMFState_AftMerg)));

        /* End of Outputs for SubSystem: '<S646>/MF_6' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S646>/MF_7' incorporates:
         *  ActionPort: '<S664>/ActionPort'
         */
        ACCR_ac_MF_7((&(VeACCR_i_MinEtermMFState_AftMerg)));

        /* End of Outputs for SubSystem: '<S646>/MF_7' */
    }

    /* End of If: '<S646>/If' */

    /* SignalConversion generated from: '<S684>/Vector' */
    rtb_TmpSignalConversionAtVectorInport1_m[0] =
        VeACCR_i_MaxEtermMFState_AftMerg;
    rtb_TmpSignalConversionAtVectorInport1_m[1] =
        VeACCR_i_MinEtermMFState_AftMerg;
    rtb_TmpSignalConversionAtVectorInport1_m[2] =
        VeACCR_i_MaxEtermMFState_AftMerg;
    rtb_TmpSignalConversionAtVectorInport1_m[3] =
        VeACCR_i_MinEtermMFState_AftMerg;

    /* MinMax: '<S491>/MinMax5' incorporates:
     *  Constant: '<S335>/ConstantValue1'
     *  Constant: '<S342>/Calib'
     *  Product: '<S335>/Multiplication3'
     */
    rtb_Sum1_f = KeACCR_dt_FuzzyDterm_ts / 2.0F;

    /* Product: '<S335>/Multiplication2' incorporates:
     *  Constant: '<S345>/Calib'
     *  Product: '<S335>/Multiplication4'
     *  Sum: '<S335>/Summation'
     *  Sum: '<S335>/Summation1'
     *  Sum: '<S335>/Summation2'
     *  UnitDelay: '<S335>/UnitDelay'
     *  UnitDelay: '<S335>/UnitDelay1'
     */
    VeACCR_dT_CEvalue = ((VeACCR_dT_ModEvapTempError_Delta - ((rtb_Sum1_f -
                            KeACCR_t_FuzzyDterm_T)
                           * ACCR_ac_DW.UnitDelay1_DSTATE_b)) -
                         ACCR_ac_DW.UnitDelay_DSTATE_ij) / (rtb_Sum1_f +
        KeACCR_t_FuzzyDterm_T);

    /* Product: '<S320>/Product1' incorporates:
     *  Constant: '<S338>/Calib'
     */
    rtb_Sum1_f = VeACCR_dT_CEvalue * KeACCR_K_FuzzyCEterm_Gain;

    /* If: '<S520>/If' incorporates:
     *  Constant: '<S496>/Calib'
     *  Constant: '<S497>/Calib'
     *  Constant: '<S498>/Calib'
     *  Constant: '<S499>/Calib'
     *  Logic: '<S520>/Logical1'
     *  Logic: '<S520>/Logical2'
     *  RelationalOperator: '<S520>/Comparison'
     *  RelationalOperator: '<S520>/Comparison1'
     *  RelationalOperator: '<S520>/Comparison2'
     *  RelationalOperator: '<S520>/Comparison3'
     *  RelationalOperator: '<S520>/Comparison4'
     */
    if ((rtb_Sum1_f < KeACCR_K_CETermNegTrapMF_a_new) || (rtb_Sum1_f >
            KeACCR_K_CETermNegTrapMF_d_new))
    {
        /* Outputs for IfAction SubSystem: '<S520>/IfActionSubsystem' incorporates:
         *  ActionPort: '<S527>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem((&(VeACCR_K_CEtermNegTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S520>/IfActionSubsystem' */
    }
    else if ((rtb_Sum1_f >= KeACCR_K_CETermNegTrapMF_b_new) && (rtb_Sum1_f <=
              KeACCR_K_CETermNegTrapMF_c_new))
    {
        /* Outputs for IfAction SubSystem: '<S520>/IfActionSubsystem2' incorporates:
         *  ActionPort: '<S529>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem2((&(VeACCR_K_CEtermNegTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S520>/IfActionSubsystem2' */
    }
    else if (rtb_Sum1_f < KeACCR_K_CETermNegTrapMF_b_new)
    {
        /* Outputs for IfAction SubSystem: '<S520>/IfActionSubsystem1' incorporates:
         *  ActionPort: '<S528>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem1(rtb_Sum1_f, KeACCR_K_CETermNegTrapMF_a_new,
            KeACCR_K_CETermNegTrapMF_b_new, (&(VeACCR_K_CEtermNegTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S520>/IfActionSubsystem1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S520>/IfActionSubsystem3' incorporates:
         *  ActionPort: '<S530>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem3(rtb_Sum1_f, KeACCR_K_CETermNegTrapMF_c_new,
            KeACCR_K_CETermNegTrapMF_d_new, (&(VeACCR_K_CEtermNegTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S520>/IfActionSubsystem3' */
    }

    /* End of If: '<S520>/If' */

    /* If: '<S521>/If' incorporates:
     *  Constant: '<S500>/Calib'
     *  Constant: '<S501>/Calib'
     *  Constant: '<S502>/Calib'
     *  Constant: '<S503>/Calib'
     *  Logic: '<S521>/Logical1'
     *  Logic: '<S521>/Logical2'
     *  RelationalOperator: '<S521>/Comparison'
     *  RelationalOperator: '<S521>/Comparison1'
     *  RelationalOperator: '<S521>/Comparison2'
     *  RelationalOperator: '<S521>/Comparison3'
     *  RelationalOperator: '<S521>/Comparison4'
     */
    if ((rtb_Sum1_f < KeACCR_K_CETermPosMedTrapMF_a_new) || (rtb_Sum1_f >
            KeACCR_K_CETermPosMedTrapMF_d_new))
    {
        /* Outputs for IfAction SubSystem: '<S521>/IfActionSubsystem' incorporates:
         *  ActionPort: '<S533>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem((&(VeACCR_K_CEtermPosMedTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S521>/IfActionSubsystem' */
    }
    else if ((rtb_Sum1_f >= KeACCR_K_CETermPosMedTrapMF_b_new) && (rtb_Sum1_f <=
              KeACCR_K_CETermPosMedTrapMF_c_new))
    {
        /* Outputs for IfAction SubSystem: '<S521>/IfActionSubsystem2' incorporates:
         *  ActionPort: '<S535>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem2((&(VeACCR_K_CEtermPosMedTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S521>/IfActionSubsystem2' */
    }
    else if (rtb_Sum1_f < KeACCR_K_CETermPosMedTrapMF_b_new)
    {
        /* Outputs for IfAction SubSystem: '<S521>/IfActionSubsystem1' incorporates:
         *  ActionPort: '<S534>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem1(rtb_Sum1_f, KeACCR_K_CETermPosMedTrapMF_a_new,
            KeACCR_K_CETermPosMedTrapMF_b_new,
            (&(VeACCR_K_CEtermPosMedTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S521>/IfActionSubsystem1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S521>/IfActionSubsystem3' incorporates:
         *  ActionPort: '<S536>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem3(rtb_Sum1_f, KeACCR_K_CETermPosMedTrapMF_c_new,
            KeACCR_K_CETermPosMedTrapMF_d_new,
            (&(VeACCR_K_CEtermPosMedTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S521>/IfActionSubsystem3' */
    }

    /* End of If: '<S521>/If' */

    /* If: '<S524>/If' incorporates:
     *  Constant: '<S508>/Calib'
     *  Constant: '<S509>/Calib'
     *  Constant: '<S510>/Calib'
     *  Constant: '<S511>/Calib'
     *  Logic: '<S524>/Logical1'
     *  Logic: '<S524>/Logical2'
     *  RelationalOperator: '<S524>/Comparison'
     *  RelationalOperator: '<S524>/Comparison1'
     *  RelationalOperator: '<S524>/Comparison2'
     *  RelationalOperator: '<S524>/Comparison3'
     *  RelationalOperator: '<S524>/Comparison4'
     */
    if ((rtb_Sum1_f < KeACCR_K_CETermVrySmlNegTrapMF_a_new) || (rtb_Sum1_f >
            KeACCR_K_CETermVrySmlNegTrapMF_d_new))
    {
        /* Outputs for IfAction SubSystem: '<S524>/IfActionSubsystem' incorporates:
         *  ActionPort: '<S551>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem((&(VeACCR_K_CEtermVrySmllNgtvTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S524>/IfActionSubsystem' */
    }
    else if ((rtb_Sum1_f >= KeACCR_K_CETermVrySmlNegTrapMF_b_new) && (rtb_Sum1_f
              <= KeACCR_K_CETermVrySmlNegTrapMF_c_new))
    {
        /* Outputs for IfAction SubSystem: '<S524>/IfActionSubsystem2' incorporates:
         *  ActionPort: '<S552>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem2((&(VeACCR_K_CEtermVrySmllNgtvTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S524>/IfActionSubsystem2' */
    }
    else if (rtb_Sum1_f < KeACCR_K_CETermVrySmlNegTrapMF_b_new)
    {
        /* Outputs for IfAction SubSystem: '<S524>/IfActionSubsystem3' incorporates:
         *  ActionPort: '<S553>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem1(rtb_Sum1_f,
            KeACCR_K_CETermVrySmlNegTrapMF_a_new,
            KeACCR_K_CETermVrySmlNegTrapMF_b_new,
            (&(VeACCR_K_CEtermVrySmllNgtvTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S524>/IfActionSubsystem3' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S524>/IfActionSubsystem4' incorporates:
         *  ActionPort: '<S554>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem3(rtb_Sum1_f,
            KeACCR_K_CETermVrySmlNegTrapMF_c_new,
            KeACCR_K_CETermVrySmlNegTrapMF_d_new,
            (&(VeACCR_K_CEtermVrySmllNgtvTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S524>/IfActionSubsystem4' */
    }

    /* End of If: '<S524>/If' */

    /* If: '<S526>/If' incorporates:
     *  Constant: '<S493>/Calib'
     *  Constant: '<S494>/Calib'
     *  Constant: '<S495>/Calib'
     *  Logic: '<S526>/Logical1'
     *  RelationalOperator: '<S526>/Comparison'
     *  RelationalOperator: '<S526>/Comparison1'
     *  RelationalOperator: '<S526>/Comparison2'
     *  RelationalOperator: '<S526>/Comparison4'
     */
    if ((rtb_Sum1_f < KeACCR_K_CETermMedTrigMF_a_new) || (rtb_Sum1_f >
            KeACCR_K_CETermMedTrigMF_c_new))
    {
        /* Outputs for IfAction SubSystem: '<S526>/IfActionSubsystem' incorporates:
         *  ActionPort: '<S563>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem((&(VeACCR_K_CEtermMedTrigMF1_out)));

        /* End of Outputs for SubSystem: '<S526>/IfActionSubsystem' */
    }
    else if (rtb_Sum1_f == KeACCR_K_CETermMedTrigMF_b_new)
    {
        /* Outputs for IfAction SubSystem: '<S526>/IfActionSubsystem2' incorporates:
         *  ActionPort: '<S565>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem2((&(VeACCR_K_CEtermMedTrigMF1_out)));

        /* End of Outputs for SubSystem: '<S526>/IfActionSubsystem2' */
    }
    else if (rtb_Sum1_f < KeACCR_K_CETermMedTrigMF_b_new)
    {
        /* Outputs for IfAction SubSystem: '<S526>/IfActionSubsystem1' incorporates:
         *  ActionPort: '<S564>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem1(rtb_Sum1_f, KeACCR_K_CETermMedTrigMF_a_new,
            KeACCR_K_CETermMedTrigMF_b_new, (&(VeACCR_K_CEtermMedTrigMF1_out)));

        /* End of Outputs for SubSystem: '<S526>/IfActionSubsystem1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S526>/IfActionSubsystem3' incorporates:
         *  ActionPort: '<S566>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem3_f(rtb_Sum1_f, KeACCR_K_CETermMedTrigMF_b_new,
            KeACCR_K_CETermMedTrigMF_c_new, (&(VeACCR_K_CEtermMedTrigMF1_out)));

        /* End of Outputs for SubSystem: '<S526>/IfActionSubsystem3' */
    }

    /* End of If: '<S526>/If' */

    /* If: '<S525>/If' incorporates:
     *  Constant: '<S512>/Calib'
     *  Constant: '<S513>/Calib'
     *  Constant: '<S514>/Calib'
     *  Constant: '<S515>/Calib'
     *  Logic: '<S525>/Logical1'
     *  Logic: '<S525>/Logical2'
     *  RelationalOperator: '<S525>/Comparison'
     *  RelationalOperator: '<S525>/Comparison1'
     *  RelationalOperator: '<S525>/Comparison2'
     *  RelationalOperator: '<S525>/Comparison3'
     *  RelationalOperator: '<S525>/Comparison4'
     */
    if ((rtb_Sum1_f < KeACCR_K_CETermVrySmlPosTrapMF_a_new) || (rtb_Sum1_f >
            KeACCR_K_CETermVrySmlPosTrapMF_d_new))
    {
        /* Outputs for IfAction SubSystem: '<S525>/IfActionSubsystem' incorporates:
         *  ActionPort: '<S557>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem((&(VeACCR_K_CEtermVrySmllPosTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S525>/IfActionSubsystem' */
    }
    else if ((rtb_Sum1_f >= KeACCR_K_CETermVrySmlPosTrapMF_b_new) && (rtb_Sum1_f
              <= KeACCR_K_CETermVrySmlPosTrapMF_c_new))
    {
        /* Outputs for IfAction SubSystem: '<S525>/IfActionSubsystem2' incorporates:
         *  ActionPort: '<S559>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem2((&(VeACCR_K_CEtermVrySmllPosTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S525>/IfActionSubsystem2' */
    }
    else if (rtb_Sum1_f < KeACCR_K_CETermVrySmlPosTrapMF_b_new)
    {
        /* Outputs for IfAction SubSystem: '<S525>/IfActionSubsystem1' incorporates:
         *  ActionPort: '<S558>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem1(rtb_Sum1_f,
            KeACCR_K_CETermVrySmlPosTrapMF_a_new,
            KeACCR_K_CETermVrySmlPosTrapMF_b_new,
            (&(VeACCR_K_CEtermVrySmllPosTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S525>/IfActionSubsystem1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S525>/IfActionSubsystem3' incorporates:
         *  ActionPort: '<S560>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem3(rtb_Sum1_f,
            KeACCR_K_CETermVrySmlPosTrapMF_c_new,
            KeACCR_K_CETermVrySmlPosTrapMF_d_new,
            (&(VeACCR_K_CEtermVrySmllPosTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S525>/IfActionSubsystem3' */
    }

    /* End of If: '<S525>/If' */

    /* If: '<S522>/If' incorporates:
     *  Constant: '<S516>/Calib'
     *  Constant: '<S517>/Calib'
     *  Constant: '<S518>/Calib'
     *  Constant: '<S519>/Calib'
     *  Logic: '<S522>/Logical1'
     *  Logic: '<S522>/Logical2'
     *  RelationalOperator: '<S522>/Comparison'
     *  RelationalOperator: '<S522>/Comparison1'
     *  RelationalOperator: '<S522>/Comparison2'
     *  RelationalOperator: '<S522>/Comparison3'
     *  RelationalOperator: '<S522>/Comparison4'
     */
    if ((rtb_Sum1_f < KeACCR_K_CETermZeroTrapMF_a_new) || (rtb_Sum1_f >
            KeACCR_K_CETermZeroTrapMF_d_new))
    {
        /* Outputs for IfAction SubSystem: '<S522>/IfActionSubsystem' incorporates:
         *  ActionPort: '<S539>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem((&(VeACCR_K_CEtermZeroTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S522>/IfActionSubsystem' */
    }
    else if ((rtb_Sum1_f >= KeACCR_K_CETermZeroTrapMF_b_new) && (rtb_Sum1_f <=
              KeACCR_K_CETermZeroTrapMF_c_new))
    {
        /* Outputs for IfAction SubSystem: '<S522>/IfActionSubsystem2' incorporates:
         *  ActionPort: '<S541>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem2((&(VeACCR_K_CEtermZeroTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S522>/IfActionSubsystem2' */
    }
    else if (rtb_Sum1_f < KeACCR_K_CETermZeroTrapMF_b_new)
    {
        /* Outputs for IfAction SubSystem: '<S522>/IfActionSubsystem1' incorporates:
         *  ActionPort: '<S540>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem1(rtb_Sum1_f, KeACCR_K_CETermZeroTrapMF_a_new,
            KeACCR_K_CETermZeroTrapMF_b_new, (&(VeACCR_K_CEtermZeroTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S522>/IfActionSubsystem1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S522>/IfActionSubsystem4' incorporates:
         *  ActionPort: '<S542>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem3(rtb_Sum1_f, KeACCR_K_CETermZeroTrapMF_c_new,
            KeACCR_K_CETermZeroTrapMF_d_new, (&(VeACCR_K_CEtermZeroTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S522>/IfActionSubsystem4' */
    }

    /* End of If: '<S522>/If' */

    /* If: '<S523>/If' incorporates:
     *  Constant: '<S504>/Calib'
     *  Constant: '<S505>/Calib'
     *  Constant: '<S506>/Calib'
     *  Constant: '<S507>/Calib'
     *  Logic: '<S523>/Logical1'
     *  Logic: '<S523>/Logical2'
     *  RelationalOperator: '<S523>/Comparison'
     *  RelationalOperator: '<S523>/Comparison1'
     *  RelationalOperator: '<S523>/Comparison2'
     *  RelationalOperator: '<S523>/Comparison3'
     *  RelationalOperator: '<S523>/Comparison4'
     */
    if ((rtb_Sum1_f < KeACCR_K_CETermPosTrapMF_a_new) || (rtb_Sum1_f >
            KeACCR_K_CETermPosTrapMF_d_new))
    {
        /* Outputs for IfAction SubSystem: '<S523>/IfActionSubsystem' incorporates:
         *  ActionPort: '<S545>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem((&(VeACCR_K_CEtermPosTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S523>/IfActionSubsystem' */
    }
    else if ((rtb_Sum1_f >= KeACCR_K_CETermPosTrapMF_b_new) && (rtb_Sum1_f <=
              KeACCR_K_CETermPosTrapMF_c_new))
    {
        /* Outputs for IfAction SubSystem: '<S523>/IfActionSubsystem2' incorporates:
         *  ActionPort: '<S547>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem2((&(VeACCR_K_CEtermPosTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S523>/IfActionSubsystem2' */
    }
    else if (rtb_Sum1_f < KeACCR_K_CETermPosTrapMF_b_new)
    {
        /* Outputs for IfAction SubSystem: '<S523>/IfActionSubsystem1' incorporates:
         *  ActionPort: '<S546>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem1(rtb_Sum1_f, KeACCR_K_CETermPosTrapMF_a_new,
            KeACCR_K_CETermPosTrapMF_b_new, (&(VeACCR_K_CEtermPosTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S523>/IfActionSubsystem1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S523>/IfActionSubsystem4' incorporates:
         *  ActionPort: '<S548>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem3(rtb_Sum1_f, KeACCR_K_CETermPosTrapMF_c_new,
            KeACCR_K_CETermPosTrapMF_d_new, (&(VeACCR_K_CEtermPosTrapMF1_out)));

        /* End of Outputs for SubSystem: '<S523>/IfActionSubsystem4' */
    }

    /* End of If: '<S523>/If' */

    /* MinMax: '<S491>/MinMax2' */
    rtb_Switch1_g3[0] = VeACCR_K_CEtermNegTrapMF1_out;
    rtb_Switch1_g3[1] = VeACCR_K_CEtermPosMedTrapMF1_out;
    rtb_Switch1_g3[2] = VeACCR_K_CEtermVrySmllNgtvTrapMF1_out;
    rtb_Switch1_g3[3] = VeACCR_K_CEtermMedTrigMF1_out;
    rtb_Switch1_g3[4] = VeACCR_K_CEtermVrySmllPosTrapMF1_out;
    rtb_Switch1_g3[5] = VeACCR_K_CEtermZeroTrapMF1_out;
    rtb_Switch1_g3[6] = VeACCR_K_CEtermPosTrapMF1_out;
    VeACCR_K_CEtermMF1_Max = VeACCR_K_CEtermNegTrapMF1_out;
    for (i = 0; i < 6; i++)
    {
        VeACCR_K_CEtermMF1_Max = fmaxf(VeACCR_K_CEtermMF1_Max, rtb_Switch1_g3[i
            + 1]);
    }

    /* End of MinMax: '<S491>/MinMax2' */

    /* If: '<S647>/If' incorporates:
     *  RelationalOperator: '<S647>/Comparison'
     *  RelationalOperator: '<S647>/Comparison1'
     *  RelationalOperator: '<S647>/Comparison2'
     *  RelationalOperator: '<S647>/Comparison3'
     *  RelationalOperator: '<S647>/Comparison4'
     *  RelationalOperator: '<S647>/Comparison5'
     */
    if (VeACCR_K_CEtermNegTrapMF1_out == VeACCR_K_CEtermMF1_Max)
    {
        /* Outputs for IfAction SubSystem: '<S647>/MF_1' incorporates:
         *  ActionPort: '<S665>/ActionPort'
         */
        ACCR_ac_MF_1((&(VeACCR_i_MaxCEtermMFState_AftMerg)));

        /* End of Outputs for SubSystem: '<S647>/MF_1' */
    }
    else if (VeACCR_K_CEtermPosMedTrapMF1_out == VeACCR_K_CEtermMF1_Max)
    {
        /* Outputs for IfAction SubSystem: '<S647>/MF_2' incorporates:
         *  ActionPort: '<S666>/ActionPort'
         */
        ACCR_ac_MF_2((&(VeACCR_i_MaxCEtermMFState_AftMerg)));

        /* End of Outputs for SubSystem: '<S647>/MF_2' */
    }
    else if (VeACCR_K_CEtermVrySmllNgtvTrapMF1_out == VeACCR_K_CEtermMF1_Max)
    {
        /* Outputs for IfAction SubSystem: '<S647>/MF_3' incorporates:
         *  ActionPort: '<S667>/ActionPort'
         */
        ACCR_ac_MF_3((&(VeACCR_i_MaxCEtermMFState_AftMerg)));

        /* End of Outputs for SubSystem: '<S647>/MF_3' */
    }
    else if (VeACCR_K_CEtermMedTrigMF1_out == VeACCR_K_CEtermMF1_Max)
    {
        /* Outputs for IfAction SubSystem: '<S647>/MF_4' incorporates:
         *  ActionPort: '<S668>/ActionPort'
         */
        ACCR_ac_MF_4((&(VeACCR_i_MaxCEtermMFState_AftMerg)));

        /* End of Outputs for SubSystem: '<S647>/MF_4' */
    }
    else if (VeACCR_K_CEtermVrySmllPosTrapMF1_out == VeACCR_K_CEtermMF1_Max)
    {
        /* Outputs for IfAction SubSystem: '<S647>/MF_5' incorporates:
         *  ActionPort: '<S669>/ActionPort'
         */
        ACCR_ac_MF_5((&(VeACCR_i_MaxCEtermMFState_AftMerg)));

        /* End of Outputs for SubSystem: '<S647>/MF_5' */
    }
    else if (VeACCR_K_CEtermZeroTrapMF1_out == VeACCR_K_CEtermMF1_Max)
    {
        /* Outputs for IfAction SubSystem: '<S647>/MF_6' incorporates:
         *  ActionPort: '<S670>/ActionPort'
         */
        ACCR_ac_MF_6((&(VeACCR_i_MaxCEtermMFState_AftMerg)));

        /* End of Outputs for SubSystem: '<S647>/MF_6' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S647>/MF_7' incorporates:
         *  ActionPort: '<S671>/ActionPort'
         */
        ACCR_ac_MF_7((&(VeACCR_i_MaxCEtermMFState_AftMerg)));

        /* End of Outputs for SubSystem: '<S647>/MF_7' */
    }

    /* End of If: '<S647>/If' */

    /* Switch: '<S650>/Switch1' incorporates:
     *  Constant: '<S650>/Constant2'
     *  RelationalOperator: '<S650>/Comparison2'
     */
    if (VeACCR_K_CEtermNegTrapMF1_out != 0.0F)
    {
        /* Switch: '<S650>/Switch1' */
        rtb_Switch1_g3[0] = VeACCR_K_CEtermNegTrapMF1_out;
    }
    else
    {
        /* Switch: '<S650>/Switch1' incorporates:
         *  Constant: '<S650>/Constant1'
         */
        rtb_Switch1_g3[0] = 2.0F;
    }

    if (VeACCR_K_CEtermPosMedTrapMF1_out != 0.0F)
    {
        /* Switch: '<S650>/Switch1' */
        rtb_Switch1_g3[1] = VeACCR_K_CEtermPosMedTrapMF1_out;
    }
    else
    {
        /* Switch: '<S650>/Switch1' incorporates:
         *  Constant: '<S650>/Constant1'
         */
        rtb_Switch1_g3[1] = 2.0F;
    }

    if (VeACCR_K_CEtermVrySmllNgtvTrapMF1_out != 0.0F)
    {
        /* Switch: '<S650>/Switch1' */
        rtb_Switch1_g3[2] = VeACCR_K_CEtermVrySmllNgtvTrapMF1_out;
    }
    else
    {
        /* Switch: '<S650>/Switch1' incorporates:
         *  Constant: '<S650>/Constant1'
         */
        rtb_Switch1_g3[2] = 2.0F;
    }

    if (VeACCR_K_CEtermMedTrigMF1_out != 0.0F)
    {
        /* Switch: '<S650>/Switch1' */
        rtb_Switch1_g3[3] = VeACCR_K_CEtermMedTrigMF1_out;
    }
    else
    {
        /* Switch: '<S650>/Switch1' incorporates:
         *  Constant: '<S650>/Constant1'
         */
        rtb_Switch1_g3[3] = 2.0F;
    }

    if (VeACCR_K_CEtermVrySmllPosTrapMF1_out != 0.0F)
    {
        /* Switch: '<S650>/Switch1' */
        rtb_Switch1_g3[4] = VeACCR_K_CEtermVrySmllPosTrapMF1_out;
    }
    else
    {
        /* Switch: '<S650>/Switch1' incorporates:
         *  Constant: '<S650>/Constant1'
         */
        rtb_Switch1_g3[4] = 2.0F;
    }

    if (VeACCR_K_CEtermZeroTrapMF1_out != 0.0F)
    {
        /* Switch: '<S650>/Switch1' */
        rtb_Switch1_g3[5] = VeACCR_K_CEtermZeroTrapMF1_out;
    }
    else
    {
        /* Switch: '<S650>/Switch1' incorporates:
         *  Constant: '<S650>/Constant1'
         */
        rtb_Switch1_g3[5] = 2.0F;
    }

    if (VeACCR_K_CEtermPosTrapMF1_out != 0.0F)
    {
        /* Switch: '<S650>/Switch1' */
        rtb_Switch1_g3[6] = VeACCR_K_CEtermPosTrapMF1_out;
    }
    else
    {
        /* Switch: '<S650>/Switch1' incorporates:
         *  Constant: '<S650>/Constant1'
         */
        rtb_Switch1_g3[6] = 2.0F;
    }

    /* End of Switch: '<S650>/Switch1' */

    /* MinMax: '<S650>/MinMax3' */
    VeACCR_K_CEtermMF1_Min = rtb_Switch1_g3[0];
    for (i = 0; i < 6; i++)
    {
        VeACCR_K_CEtermMF1_Min = fminf(VeACCR_K_CEtermMF1_Min, rtb_Switch1_g3[i
            + 1]);
    }

    /* Switch: '<S682>/Switch1' incorporates:
     *  Constant: '<S681>/Constant2'
     *  Constant: '<S681>/Constant3'
     *  Logic: '<S681>/Logical'
     *  Logic: '<S681>/Logical1'
     *  MinMax: '<S650>/MinMax3'
     *  RelationalOperator: '<S681>/Comparison1'
     *  RelationalOperator: '<S681>/Comparison2'
     *  RelationalOperator: '<S681>/Comparison4'
     */
    if ((VeACCR_K_CEtermMF1_Min == 2.0F) || ((1.0F == VeACCR_K_CEtermMF1_Min) &&
         (VeACCR_K_CEtermMF1_Min == VeACCR_K_CEtermMF1_Max)))
    {
        /* Switch: '<S682>/Switch1' incorporates:
         *  Constant: '<S681>/Constant1'
         */
        VeACCR_K_CEtermMF1_Min = 0.0F;
    }

    /* End of Switch: '<S682>/Switch1' */

    /* If: '<S648>/If' incorporates:
     *  RelationalOperator: '<S648>/Comparison'
     *  RelationalOperator: '<S648>/Comparison1'
     *  RelationalOperator: '<S648>/Comparison2'
     *  RelationalOperator: '<S648>/Comparison3'
     *  RelationalOperator: '<S648>/Comparison4'
     *  RelationalOperator: '<S648>/Comparison5'
     */
    if (VeACCR_K_CEtermNegTrapMF1_out == VeACCR_K_CEtermMF1_Min)
    {
        /* Outputs for IfAction SubSystem: '<S648>/MF_1' incorporates:
         *  ActionPort: '<S672>/ActionPort'
         */
        ACCR_ac_MF_1((&(VeACCR_i_MinCEtermMFState_AftMerg)));

        /* End of Outputs for SubSystem: '<S648>/MF_1' */
    }
    else if (VeACCR_K_CEtermPosMedTrapMF1_out == VeACCR_K_CEtermMF1_Min)
    {
        /* Outputs for IfAction SubSystem: '<S648>/MF_2' incorporates:
         *  ActionPort: '<S673>/ActionPort'
         */
        ACCR_ac_MF_2((&(VeACCR_i_MinCEtermMFState_AftMerg)));

        /* End of Outputs for SubSystem: '<S648>/MF_2' */
    }
    else if (VeACCR_K_CEtermVrySmllNgtvTrapMF1_out == VeACCR_K_CEtermMF1_Min)
    {
        /* Outputs for IfAction SubSystem: '<S648>/MF_3' incorporates:
         *  ActionPort: '<S674>/ActionPort'
         */
        ACCR_ac_MF_3((&(VeACCR_i_MinCEtermMFState_AftMerg)));

        /* End of Outputs for SubSystem: '<S648>/MF_3' */
    }
    else if (VeACCR_K_CEtermMedTrigMF1_out == VeACCR_K_CEtermMF1_Min)
    {
        /* Outputs for IfAction SubSystem: '<S648>/MF_4' incorporates:
         *  ActionPort: '<S675>/ActionPort'
         */
        ACCR_ac_MF_4((&(VeACCR_i_MinCEtermMFState_AftMerg)));

        /* End of Outputs for SubSystem: '<S648>/MF_4' */
    }
    else if (VeACCR_K_CEtermVrySmllPosTrapMF1_out == VeACCR_K_CEtermMF1_Min)
    {
        /* Outputs for IfAction SubSystem: '<S648>/MF_5' incorporates:
         *  ActionPort: '<S676>/ActionPort'
         */
        ACCR_ac_MF_5((&(VeACCR_i_MinCEtermMFState_AftMerg)));

        /* End of Outputs for SubSystem: '<S648>/MF_5' */
    }
    else if (VeACCR_K_CEtermZeroTrapMF1_out == VeACCR_K_CEtermMF1_Min)
    {
        /* Outputs for IfAction SubSystem: '<S648>/MF_6' incorporates:
         *  ActionPort: '<S677>/ActionPort'
         */
        ACCR_ac_MF_6((&(VeACCR_i_MinCEtermMFState_AftMerg)));

        /* End of Outputs for SubSystem: '<S648>/MF_6' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S648>/MF_7' incorporates:
         *  ActionPort: '<S678>/ActionPort'
         */
        ACCR_ac_MF_7((&(VeACCR_i_MinCEtermMFState_AftMerg)));

        /* End of Outputs for SubSystem: '<S648>/MF_7' */
    }

    /* End of If: '<S648>/If' */

    /* Sum: '<S347>/Sum' incorporates:
     *  SignalConversion generated from: '<S684>/Vector'
     */
    rtb_Sum_l[0] = VeACCR_i_MaxCEtermMFState_AftMerg;
    rtb_Sum_l[1] = VeACCR_i_MinCEtermMFState_AftMerg;
    rtb_Sum_l[2] = VeACCR_i_MinCEtermMFState_AftMerg;
    rtb_Sum_l[3] = VeACCR_i_MaxCEtermMFState_AftMerg;

    /* Lookup_n-D: '<S684>/Vector' */
    for (i = 0; i < 4; i++)
    {
        VaACCR_K_FuzzyOutputMap_HotAmb[(i)] = look2_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVectorInport1_m[i], rtb_Sum_l[i], ((const
               float32 *)&(KxACCR_K_FuzzyMap_HotAmbient[0])), ((const float32 *)
              &(KyACCR_K_FuzzyMap_HotAmbient[0])), ((const float32 *)
              &(KtACCR_K_FuzzyMap_HotAmbient[0])), ACCR_ac_ConstP.pooled18, 8U);
    }

    /* End of Lookup_n-D: '<S684>/Vector' */

    /* Switch: '<S348>/Switch1' */
    if (ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_b2)
    {
        /* Switch: '<S348>/Switch1' incorporates:
         *  Constant: '<S686>/Calib'
         */
        rtb_Switch1_jx = KeACCR_T_AmbTemp_Default;
    }
    else
    {
        /* Switch: '<S348>/Switch1' */
        rtb_Switch1_jx = ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_a;
    }

    /* End of Switch: '<S348>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S347>/Hysteresis' */
    /* Switch: '<S485>/Switch1' incorporates:
     *  Constant: '<S487>/Calib'
     *  RelationalOperator: '<S485>/GreaterThan'
     */
    if (rtb_Switch1_jx > KeACCR_T_CompSpdFuzzy_AmbHigh)
    {
        /* Switch: '<S485>/Switch1' incorporates:
         *  Constant: '<S485>/ConstantValue'
         */
        VeACCR_b_CompSpdNewFuzzy_AmbHot = true;
    }
    else
    {
        /* Switch: '<S485>/Switch1' incorporates:
         *  Constant: '<S488>/Calib'
         *  RelationalOperator: '<S485>/GreaterThan1'
         *  UnitDelay: '<S485>/UnitDelay'
         */
        VeACCR_b_CompSpdNewFuzzy_AmbHot = ((rtb_Switch1_jx >=
            KeACCR_T_CompSpdFuzzy_AmbLow) && (VeACCR_b_CompSpdNewFuzzy_AmbHot));
    }

    /* End of Switch: '<S485>/Switch1' */
    /* End of Outputs for SubSystem: '<S347>/Hysteresis' */
    for (i = 0; i < 4; i++)
    {
        /* Lookup_n-D: '<S685>/Vector' */
        VaACCR_K_FuzzyOutputMap_IdealAmb[(i)] = look2_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVectorInport1_m[i], rtb_Sum_l[i], ((const
               float32 *)&(KxACCR_K_FuzzyMap_IdealAmb[0])), ((const float32 *)
              &(KyACCR_K_FuzzyMap_IdealAmb[0])), ((const float32 *)
              &(KtACCR_K_FuzzyMap_IdealAmb[0])), ACCR_ac_ConstP.pooled18, 8U);

        /* Switch: '<S492>/Switch' */
        if (VeACCR_b_CompSpdNewFuzzy_AmbHot)
        {
            /* Switch: '<S492>/Switch' */
            VaACCR_K_FuzzyOutputMap[(i)] = VaACCR_K_FuzzyOutputMap_HotAmb[(i)];
        }
        else
        {
            /* Switch: '<S492>/Switch' */
            VaACCR_K_FuzzyOutputMap[(i)] = VaACCR_K_FuzzyOutputMap_IdealAmb[(i)];
        }

        /* End of Switch: '<S492>/Switch' */
    }

    /* MinMax: '<S491>/MinMax5' */
    rtb_Sum1_f = fminf(VeACCR_K_EtermMF1_Max, VeACCR_K_CEtermMF1_Max);

    /* MinMax: '<S491>/MinMax6' */
    rtb_Sum1_eo = fminf(VeACCR_K_EtermMF1_Min, VeACCR_K_CEtermMF1_Min);

    /* MinMax: '<S491>/MinMax7' */
    minV = fminf(VeACCR_K_EtermMF1_Max, VeACCR_K_CEtermMF1_Min);

    /* MinMax: '<S491>/MinMax8' */
    minV_0 = fminf(VeACCR_K_EtermMF1_Min, VeACCR_K_CEtermMF1_Max);

    /* Product: '<S347>/Product2' incorporates:
     *  MinMax: '<S491>/MinMax5'
     *  MinMax: '<S491>/MinMax6'
     *  MinMax: '<S491>/MinMax7'
     *  MinMax: '<S491>/MinMax8'
     */
    rtb_TmpSignalConversionAtVectorInport1_m[0] = rtb_Sum1_f * rtb_Sum1_f;
    rtb_TmpSignalConversionAtVectorInport1_m[1] = rtb_Sum1_eo * rtb_Sum1_eo;
    rtb_TmpSignalConversionAtVectorInport1_m[2] = minV * minV;
    rtb_TmpSignalConversionAtVectorInport1_m[3] = minV_0 * minV_0;

    /* Outputs for Atomic SubSystem: '<S347>/ProtectedDivision' */
    for (i = 0; i < 4; i++)
    {
        /* RelationalOperator: '<S489>/NotEqual' */
        rtb_TmpSignalConversionAtVectorInport1_d =
            rtb_TmpSignalConversionAtVectorInport1_m[i];

        /* Selector: '<S492>/Selector1' incorporates:
         *  Constant: '<S683>/Calib'
         */
        VaACCR_n_FuzzyOutMappedRPMs[(i)] = KaACCR_n_CompSpd[((sint32)
            VaACCR_K_FuzzyOutputMap[(i)]) - 1];

        /* Switch: '<S489>/Switch1' incorporates:
         *  Constant: '<S489>/ConstantValue'
         *  RelationalOperator: '<S489>/NotEqual'
         */
        if (rtb_TmpSignalConversionAtVectorInport1_d != 0.0F)
        {
            /* Switch: '<S489>/Switch1' incorporates:
             *  Constant: '<S347>/Constant'
             *  Product: '<S489>/Division'
             */
            rtb_TmpSignalConversionAtVectorInport1_d /= 2.0F;
        }
        else
        {
            /* Switch: '<S489>/Switch1' incorporates:
             *  Constant: '<S489>/ConstantValue4'
             *  Switch: '<S489>/Switch3'
             */
            rtb_TmpSignalConversionAtVectorInport1_d = 0.0F;
        }

        /* End of Switch: '<S489>/Switch1' */

        /* Switch: '<S489>/Switch1' incorporates:
         *  RelationalOperator: '<S489>/NotEqual'
         */
        rtb_TmpSignalConversionAtVectorInport1_m[i] =
            rtb_TmpSignalConversionAtVectorInport1_d;
    }

    /* End of Outputs for SubSystem: '<S347>/ProtectedDivision' */

    /* Product: '<S347>/Product1' incorporates:
     *  Constant: '<S486>/Calib'
     *  MinMax: '<S491>/MinMax5'
     *  MinMax: '<S491>/MinMax6'
     *  MinMax: '<S491>/MinMax7'
     *  MinMax: '<S491>/MinMax8'
     *  Sum: '<S347>/Sum'
     */
    VaACCR_K_WghtdAvg[0] = (rtb_Sum1_f -
                            rtb_TmpSignalConversionAtVectorInport1_m[0]) *
        KeACCR_K_FuzzyWghtMx;
    VaACCR_K_WghtdAvg[1] = (rtb_Sum1_eo -
                            rtb_TmpSignalConversionAtVectorInport1_m[1]) *
        KeACCR_K_FuzzyWghtMx;
    VaACCR_K_WghtdAvg[2] = (minV - rtb_TmpSignalConversionAtVectorInport1_m[2]) *
        KeACCR_K_FuzzyWghtMx;
    VaACCR_K_WghtdAvg[3] = (minV_0 - rtb_TmpSignalConversionAtVectorInport1_m[3])
        * KeACCR_K_FuzzyWghtMx;
    for (i = 0; i < 4; i++)
    {
        /* Product: '<S347>/Product' */
        VaACCR_K_FuzzyOutput[(i)] = VaACCR_n_FuzzyOutMappedRPMs[(i)] *
            VaACCR_K_WghtdAvg[(i)];
    }

    /* Sum: '<S347>/Sum1' */
    VeACCR_K_Output_Sum = ((VaACCR_K_FuzzyOutput[0] + VaACCR_K_FuzzyOutput[1]) +
                           VaACCR_K_FuzzyOutput[2]) + VaACCR_K_FuzzyOutput[3];

    /* Sum: '<S347>/Sum2' */
    VeACCR_K_WghtdAvg_Sum = ((VaACCR_K_WghtdAvg[0] + VaACCR_K_WghtdAvg[1]) +
        VaACCR_K_WghtdAvg[2]) + VaACCR_K_WghtdAvg[3];

    /* Outputs for Atomic SubSystem: '<S347>/ProtectedDivision1' */
    /* Switch: '<S490>/Switch1' incorporates:
     *  Constant: '<S490>/ConstantValue'
     *  Constant: '<S490>/ConstantValue1'
     *  Constant: '<S490>/ConstantValue2'
     *  Constant: '<S490>/ConstantValue3'
     *  Logic: '<S490>/AND'
     *  RelationalOperator: '<S490>/GreaterThanorEqual'
     *  RelationalOperator: '<S490>/GreaterThanorEqual1'
     *  RelationalOperator: '<S490>/NotEqual'
     *  RelationalOperator: '<S490>/NotEqual1'
     *  Switch: '<S490>/Switch2'
     *  Switch: '<S490>/Switch3'
     */
    if ((VeACCR_K_Output_Sum != 0.0F) && (VeACCR_K_WghtdAvg_Sum != 0.0F))
    {
        /* Switch: '<S490>/Switch1' incorporates:
         *  Product: '<S490>/Division'
         */
        VeACCR_n_CompSd_FuzzyNew = VeACCR_K_Output_Sum / VeACCR_K_WghtdAvg_Sum;
    }
    else if (VeACCR_K_Output_Sum > 0.0F)
    {
        /* Switch: '<S490>/Switch2' incorporates:
         *  Constant: '<S490>/MAXFLOAT'
         *  Switch: '<S490>/Switch1'
         */
        VeACCR_n_CompSd_FuzzyNew = 3.402823466E+38F;
    }
    else if (VeACCR_K_Output_Sum < 0.0F)
    {
        /* Switch: '<S490>/Switch3' incorporates:
         *  Constant: '<S490>/MINFLOAT'
         *  Switch: '<S490>/Switch1'
         *  Switch: '<S490>/Switch2'
         */
        VeACCR_n_CompSd_FuzzyNew = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S490>/Switch1' incorporates:
         *  Constant: '<S490>/ConstantValue4'
         *  Switch: '<S490>/Switch2'
         *  Switch: '<S490>/Switch3'
         */
        VeACCR_n_CompSd_FuzzyNew = 0.0F;
    }

    /* End of Switch: '<S490>/Switch1' */
    /* End of Outputs for SubSystem: '<S347>/ProtectedDivision1' */

    /* Product: '<S320>/Product3' incorporates:
     *  Constant: '<S340>/Calib'
     */
    VeACCR_n_CompRPM_FuzzyNew_AftGain = KeACCR_K_FuzzyOut_Gain *
        VeACCR_n_CompSd_FuzzyNew;

    /* If: '<S437>/If' incorporates:
     *  Constant: '<S421>/Calib'
     *  Constant: '<S422>/Calib'
     *  Constant: '<S423>/Calib'
     *  Constant: '<S424>/Calib'
     *  Logic: '<S437>/Logical1'
     *  Logic: '<S437>/Logical2'
     *  RelationalOperator: '<S437>/Comparison'
     *  RelationalOperator: '<S437>/Comparison1'
     *  RelationalOperator: '<S437>/Comparison2'
     *  RelationalOperator: '<S437>/Comparison3'
     *  RelationalOperator: '<S437>/Comparison4'
     */
    if ((VeACCR_dT_ModEvapTempError_Delta < KeACCR_K_ETermNegTrapMF_a) ||
            (VeACCR_dT_ModEvapTempError_Delta > KeACCR_K_ETermNegTrapMF_d))
    {
        /* Outputs for IfAction SubSystem: '<S437>/IfActionSubsystem' incorporates:
         *  ActionPort: '<S442>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem((&(VeACCR_K_EtermNegTrapMF_out)));

        /* End of Outputs for SubSystem: '<S437>/IfActionSubsystem' */
    }
    else if ((VeACCR_dT_ModEvapTempError_Delta >= KeACCR_K_ETermNegTrapMF_b) &&
             (VeACCR_dT_ModEvapTempError_Delta <= KeACCR_K_ETermNegTrapMF_c))
    {
        /* Outputs for IfAction SubSystem: '<S437>/IfActionSubsystem2' incorporates:
         *  ActionPort: '<S444>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem2((&(VeACCR_K_EtermNegTrapMF_out)));

        /* End of Outputs for SubSystem: '<S437>/IfActionSubsystem2' */
    }
    else if (VeACCR_dT_ModEvapTempError_Delta < KeACCR_K_ETermNegTrapMF_b)
    {
        /* Outputs for IfAction SubSystem: '<S437>/IfActionSubsystem1' incorporates:
         *  ActionPort: '<S443>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem1(VeACCR_dT_ModEvapTempError_Delta,
            KeACCR_K_ETermNegTrapMF_a, KeACCR_K_ETermNegTrapMF_b,
            (&(VeACCR_K_EtermNegTrapMF_out)));

        /* End of Outputs for SubSystem: '<S437>/IfActionSubsystem1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S437>/IfActionSubsystem4' incorporates:
         *  ActionPort: '<S445>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem3(VeACCR_dT_ModEvapTempError_Delta,
            KeACCR_K_ETermNegTrapMF_c, KeACCR_K_ETermNegTrapMF_d,
            (&(VeACCR_K_EtermNegTrapMF_out)));

        /* End of Outputs for SubSystem: '<S437>/IfActionSubsystem4' */
    }

    /* End of If: '<S437>/If' */

    /* If: '<S438>/If' incorporates:
     *  Constant: '<S425>/Calib'
     *  Constant: '<S426>/Calib'
     *  Constant: '<S427>/Calib'
     *  Constant: '<S428>/Calib'
     *  Logic: '<S438>/Logical1'
     *  Logic: '<S438>/Logical2'
     *  RelationalOperator: '<S438>/Comparison'
     *  RelationalOperator: '<S438>/Comparison1'
     *  RelationalOperator: '<S438>/Comparison2'
     *  RelationalOperator: '<S438>/Comparison3'
     *  RelationalOperator: '<S438>/Comparison4'
     */
    if ((VeACCR_dT_ModEvapTempError_Delta < KeACCR_K_ETermPosMedTrapMF_a) ||
            (VeACCR_dT_ModEvapTempError_Delta > KeACCR_K_ETermPosMedTrapMF_d))
    {
        /* Outputs for IfAction SubSystem: '<S438>/IfActionSubsystem' incorporates:
         *  ActionPort: '<S448>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem((&(VeACCR_K_EtermPosMedTrapMF_out)));

        /* End of Outputs for SubSystem: '<S438>/IfActionSubsystem' */
    }
    else if ((VeACCR_dT_ModEvapTempError_Delta >= KeACCR_K_ETermPosMedTrapMF_b) &&
             (VeACCR_dT_ModEvapTempError_Delta <= KeACCR_K_ETermPosMedTrapMF_c))
    {
        /* Outputs for IfAction SubSystem: '<S438>/IfActionSubsystem2' incorporates:
         *  ActionPort: '<S449>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem2((&(VeACCR_K_EtermPosMedTrapMF_out)));

        /* End of Outputs for SubSystem: '<S438>/IfActionSubsystem2' */
    }
    else if (VeACCR_dT_ModEvapTempError_Delta < KeACCR_K_ETermPosMedTrapMF_b)
    {
        /* Outputs for IfAction SubSystem: '<S438>/IfActionSubsystem3' incorporates:
         *  ActionPort: '<S450>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem1(VeACCR_dT_ModEvapTempError_Delta,
            KeACCR_K_ETermPosMedTrapMF_a, KeACCR_K_ETermPosMedTrapMF_b,
            (&(VeACCR_K_EtermPosMedTrapMF_out)));

        /* End of Outputs for SubSystem: '<S438>/IfActionSubsystem3' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S438>/IfActionSubsystem4' incorporates:
         *  ActionPort: '<S451>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem3(VeACCR_dT_ModEvapTempError_Delta,
            KeACCR_K_ETermPosMedTrapMF_c, KeACCR_K_ETermPosMedTrapMF_d,
            (&(VeACCR_K_EtermPosMedTrapMF_out)));

        /* End of Outputs for SubSystem: '<S438>/IfActionSubsystem4' */
    }

    /* End of If: '<S438>/If' */

    /* If: '<S441>/If' incorporates:
     *  Constant: '<S418>/Calib'
     *  Constant: '<S419>/Calib'
     *  Constant: '<S420>/Calib'
     *  Logic: '<S441>/Logical1'
     *  RelationalOperator: '<S441>/Comparison'
     *  RelationalOperator: '<S441>/Comparison1'
     *  RelationalOperator: '<S441>/Comparison2'
     *  RelationalOperator: '<S441>/Comparison4'
     */
    if ((VeACCR_dT_ModEvapTempError_Delta < KeACCR_K_ETermMedTrigMF_a) ||
            (VeACCR_dT_ModEvapTempError_Delta > KeACCR_K_ETermMedTrigMF_c))
    {
        /* Outputs for IfAction SubSystem: '<S441>/IfActionSubsystem' incorporates:
         *  ActionPort: '<S466>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem((&(VeACCR_K_EtermMedTrigMF_out)));

        /* End of Outputs for SubSystem: '<S441>/IfActionSubsystem' */
    }
    else if (VeACCR_dT_ModEvapTempError_Delta == KeACCR_K_ETermMedTrigMF_b)
    {
        /* Outputs for IfAction SubSystem: '<S441>/IfActionSubsystem2' incorporates:
         *  ActionPort: '<S467>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem2((&(VeACCR_K_EtermMedTrigMF_out)));

        /* End of Outputs for SubSystem: '<S441>/IfActionSubsystem2' */
    }
    else if (VeACCR_dT_ModEvapTempError_Delta < KeACCR_K_ETermMedTrigMF_b)
    {
        /* Outputs for IfAction SubSystem: '<S441>/IfActionSubsystem3' incorporates:
         *  ActionPort: '<S468>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem1(VeACCR_dT_ModEvapTempError_Delta,
            KeACCR_K_ETermMedTrigMF_a, KeACCR_K_ETermMedTrigMF_b,
            (&(VeACCR_K_EtermMedTrigMF_out)));

        /* End of Outputs for SubSystem: '<S441>/IfActionSubsystem3' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S441>/IfActionSubsystem4' incorporates:
         *  ActionPort: '<S469>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem3_f(VeACCR_dT_ModEvapTempError_Delta,
            KeACCR_K_ETermMedTrigMF_b, KeACCR_K_ETermMedTrigMF_c,
            (&(VeACCR_K_EtermMedTrigMF_out)));

        /* End of Outputs for SubSystem: '<S441>/IfActionSubsystem4' */
    }

    /* End of If: '<S441>/If' */

    /* If: '<S439>/If' incorporates:
     *  Constant: '<S433>/Calib'
     *  Constant: '<S434>/Calib'
     *  Constant: '<S435>/Calib'
     *  Constant: '<S436>/Calib'
     *  Logic: '<S439>/Logical1'
     *  Logic: '<S439>/Logical2'
     *  RelationalOperator: '<S439>/Comparison'
     *  RelationalOperator: '<S439>/Comparison1'
     *  RelationalOperator: '<S439>/Comparison2'
     *  RelationalOperator: '<S439>/Comparison3'
     *  RelationalOperator: '<S439>/Comparison4'
     */
    if ((VeACCR_dT_ModEvapTempError_Delta < KeACCR_K_ETermZeroTrapMF_a) ||
            (VeACCR_dT_ModEvapTempError_Delta > KeACCR_K_ETermZeroTrapMF_d))
    {
        /* Outputs for IfAction SubSystem: '<S439>/IfActionSubsystem' incorporates:
         *  ActionPort: '<S454>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem((&(VeACCR_K_EtermZeroTrapMF_out)));

        /* End of Outputs for SubSystem: '<S439>/IfActionSubsystem' */
    }
    else if ((VeACCR_dT_ModEvapTempError_Delta >= KeACCR_K_ETermZeroTrapMF_b) &&
             (VeACCR_dT_ModEvapTempError_Delta <= KeACCR_K_ETermZeroTrapMF_c))
    {
        /* Outputs for IfAction SubSystem: '<S439>/IfActionSubsystem2' incorporates:
         *  ActionPort: '<S456>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem2((&(VeACCR_K_EtermZeroTrapMF_out)));

        /* End of Outputs for SubSystem: '<S439>/IfActionSubsystem2' */
    }
    else if (VeACCR_dT_ModEvapTempError_Delta < KeACCR_K_ETermZeroTrapMF_b)
    {
        /* Outputs for IfAction SubSystem: '<S439>/IfActionSubsystem1' incorporates:
         *  ActionPort: '<S455>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem1(VeACCR_dT_ModEvapTempError_Delta,
            KeACCR_K_ETermZeroTrapMF_a, KeACCR_K_ETermZeroTrapMF_b,
            (&(VeACCR_K_EtermZeroTrapMF_out)));

        /* End of Outputs for SubSystem: '<S439>/IfActionSubsystem1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S439>/IfActionSubsystem3' incorporates:
         *  ActionPort: '<S457>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem3(VeACCR_dT_ModEvapTempError_Delta,
            KeACCR_K_ETermZeroTrapMF_c, KeACCR_K_ETermZeroTrapMF_d,
            (&(VeACCR_K_EtermZeroTrapMF_out)));

        /* End of Outputs for SubSystem: '<S439>/IfActionSubsystem3' */
    }

    /* End of If: '<S439>/If' */

    /* If: '<S440>/If' incorporates:
     *  Constant: '<S429>/Calib'
     *  Constant: '<S430>/Calib'
     *  Constant: '<S431>/Calib'
     *  Constant: '<S432>/Calib'
     *  Logic: '<S440>/Logical1'
     *  Logic: '<S440>/Logical2'
     *  RelationalOperator: '<S440>/Comparison'
     *  RelationalOperator: '<S440>/Comparison1'
     *  RelationalOperator: '<S440>/Comparison2'
     *  RelationalOperator: '<S440>/Comparison3'
     *  RelationalOperator: '<S440>/Comparison4'
     */
    if ((VeACCR_dT_ModEvapTempError_Delta < KeACCR_K_ETermPosTrapMF_a) ||
            (VeACCR_dT_ModEvapTempError_Delta > KeACCR_K_ETermPosTrapMF_d))
    {
        /* Outputs for IfAction SubSystem: '<S440>/IfActionSubsystem' incorporates:
         *  ActionPort: '<S460>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem((&(VeACCR_K_EtermPosTrapMF_out)));

        /* End of Outputs for SubSystem: '<S440>/IfActionSubsystem' */
    }
    else if ((VeACCR_dT_ModEvapTempError_Delta >= KeACCR_K_ETermPosTrapMF_b) &&
             (VeACCR_dT_ModEvapTempError_Delta <= KeACCR_K_ETermPosTrapMF_c))
    {
        /* Outputs for IfAction SubSystem: '<S440>/IfActionSubsystem2' incorporates:
         *  ActionPort: '<S462>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem2((&(VeACCR_K_EtermPosTrapMF_out)));

        /* End of Outputs for SubSystem: '<S440>/IfActionSubsystem2' */
    }
    else if (VeACCR_dT_ModEvapTempError_Delta < KeACCR_K_ETermPosTrapMF_b)
    {
        /* Outputs for IfAction SubSystem: '<S440>/IfActionSubsystem1' incorporates:
         *  ActionPort: '<S461>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem1(VeACCR_dT_ModEvapTempError_Delta,
            KeACCR_K_ETermPosTrapMF_a, KeACCR_K_ETermPosTrapMF_b,
            (&(VeACCR_K_EtermPosTrapMF_out)));

        /* End of Outputs for SubSystem: '<S440>/IfActionSubsystem1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S440>/IfActionSubsystem3' incorporates:
         *  ActionPort: '<S463>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem3(VeACCR_dT_ModEvapTempError_Delta,
            KeACCR_K_ETermPosTrapMF_c, KeACCR_K_ETermPosTrapMF_d,
            (&(VeACCR_K_EtermPosTrapMF_out)));

        /* End of Outputs for SubSystem: '<S440>/IfActionSubsystem3' */
    }

    /* End of If: '<S440>/If' */

    /* MinMax: '<S358>/MinMax1' */
    tmpForInput[0] = VeACCR_K_EtermNegTrapMF_out;
    tmpForInput[1] = VeACCR_K_EtermPosMedTrapMF_out;
    tmpForInput[2] = VeACCR_K_EtermMedTrigMF_out;
    tmpForInput[3] = VeACCR_K_EtermZeroTrapMF_out;
    tmpForInput[4] = VeACCR_K_EtermPosTrapMF_out;
    VeACCR_K_EtermMF_Max = VeACCR_K_EtermNegTrapMF_out;
    for (i = 0; i < 4; i++)
    {
        VeACCR_K_EtermMF_Max = fmaxf(VeACCR_K_EtermMF_Max, tmpForInput[i + 1]);
    }

    /* End of MinMax: '<S358>/MinMax1' */

    /* If: '<S358>/If' incorporates:
     *  RelationalOperator: '<S358>/Comparison'
     *  RelationalOperator: '<S358>/Comparison1'
     *  RelationalOperator: '<S358>/Comparison2'
     *  RelationalOperator: '<S358>/Comparison3'
     */
    if (VeACCR_K_EtermNegTrapMF_out == VeACCR_K_EtermMF_Max)
    {
        /* Outputs for IfAction SubSystem: '<S358>/Negative_MF' incorporates:
         *  ActionPort: '<S475>/ActionPort'
         */
        /* Merge: '<S358>/Merge' incorporates:
         *  Constant: '<S475>/Constant'
         *  SignalConversion generated from: '<S475>/NegativeMF'
         */
        VeACCR_i_EtermMFState_AftMerg = 1.0F;

        /* Merge: '<S358>/Merge2' incorporates:
         *  Inport: '<S475>/VeACCR_K_EtermNegTrapMF_out'
         */
        VeACCR_K_EtermMF_out_AftMerg = VeACCR_K_EtermNegTrapMF_out;

        /* End of Outputs for SubSystem: '<S358>/Negative_MF' */
    }
    else if (VeACCR_K_EtermPosMedTrapMF_out == VeACCR_K_EtermMF_Max)
    {
        /* Outputs for IfAction SubSystem: '<S358>/PosMed_MF' incorporates:
         *  ActionPort: '<S477>/ActionPort'
         */
        /* Merge: '<S358>/Merge' incorporates:
         *  Constant: '<S477>/Constant'
         *  SignalConversion generated from: '<S477>/PosMedMF'
         */
        VeACCR_i_EtermMFState_AftMerg = 2.0F;

        /* Merge: '<S358>/Merge2' incorporates:
         *  Inport: '<S477>/VeACCR_K_EtermPosMedTrapMF_out'
         */
        VeACCR_K_EtermMF_out_AftMerg = VeACCR_K_EtermPosMedTrapMF_out;

        /* End of Outputs for SubSystem: '<S358>/PosMed_MF' */
    }
    else if (VeACCR_K_EtermMedTrigMF_out == VeACCR_K_EtermMF_Max)
    {
        /* Outputs for IfAction SubSystem: '<S358>/Median_MF' incorporates:
         *  ActionPort: '<S473>/ActionPort'
         */
        /* Merge: '<S358>/Merge' incorporates:
         *  Constant: '<S473>/Constant'
         *  SignalConversion generated from: '<S473>/MedianMF'
         */
        VeACCR_i_EtermMFState_AftMerg = 3.0F;

        /* Merge: '<S358>/Merge2' incorporates:
         *  Inport: '<S473>/VeACCR_K_EtermMedTrigMF_out'
         */
        VeACCR_K_EtermMF_out_AftMerg = VeACCR_K_EtermMedTrigMF_out;

        /* End of Outputs for SubSystem: '<S358>/Median_MF' */
    }
    else if (VeACCR_K_EtermZeroTrapMF_out == VeACCR_K_EtermMF_Max)
    {
        /* Outputs for IfAction SubSystem: '<S358>/Zero_MF' incorporates:
         *  ActionPort: '<S481>/ActionPort'
         */
        /* Merge: '<S358>/Merge' incorporates:
         *  Constant: '<S481>/Constant'
         *  SignalConversion generated from: '<S481>/ZeroMF'
         */
        VeACCR_i_EtermMFState_AftMerg = 4.0F;

        /* Merge: '<S358>/Merge2' incorporates:
         *  Inport: '<S481>/VeACCR_K_EtermZeroTrapMF_out'
         */
        VeACCR_K_EtermMF_out_AftMerg = VeACCR_K_EtermZeroTrapMF_out;

        /* End of Outputs for SubSystem: '<S358>/Zero_MF' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S358>/Positive_MF' incorporates:
         *  ActionPort: '<S479>/ActionPort'
         */
        /* Merge: '<S358>/Merge' incorporates:
         *  Constant: '<S479>/Constant'
         *  SignalConversion generated from: '<S479>/PositiveMF'
         */
        VeACCR_i_EtermMFState_AftMerg = 5.0F;

        /* Merge: '<S358>/Merge2' incorporates:
         *  Inport: '<S479>/VeACCR_K_EtermPosTrapMF_out'
         */
        VeACCR_K_EtermMF_out_AftMerg = VeACCR_K_EtermPosTrapMF_out;

        /* End of Outputs for SubSystem: '<S358>/Positive_MF' */
    }

    /* End of If: '<S358>/If' */

    /* If: '<S378>/If' incorporates:
     *  Constant: '<S362>/Calib'
     *  Constant: '<S363>/Calib'
     *  Constant: '<S364>/Calib'
     *  Constant: '<S365>/Calib'
     *  Logic: '<S378>/Logical1'
     *  Logic: '<S378>/Logical2'
     *  RelationalOperator: '<S378>/Comparison'
     *  RelationalOperator: '<S378>/Comparison1'
     *  RelationalOperator: '<S378>/Comparison2'
     *  RelationalOperator: '<S378>/Comparison3'
     *  RelationalOperator: '<S378>/Comparison4'
     */
    if ((VeACCR_dT_CEvalue < KeACCR_K_CETermNegTrapMF_a) || (VeACCR_dT_CEvalue >
         KeACCR_K_CETermNegTrapMF_d))
    {
        /* Outputs for IfAction SubSystem: '<S378>/IfActionSubsystem' incorporates:
         *  ActionPort: '<S383>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem((&(VeACCR_K_CEtermNegTrapMF_out)));

        /* End of Outputs for SubSystem: '<S378>/IfActionSubsystem' */
    }
    else if ((VeACCR_dT_CEvalue >= KeACCR_K_CETermNegTrapMF_b) &&
             (VeACCR_dT_CEvalue <= KeACCR_K_CETermNegTrapMF_c))
    {
        /* Outputs for IfAction SubSystem: '<S378>/IfActionSubsystem2' incorporates:
         *  ActionPort: '<S385>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem2((&(VeACCR_K_CEtermNegTrapMF_out)));

        /* End of Outputs for SubSystem: '<S378>/IfActionSubsystem2' */
    }
    else if (VeACCR_dT_CEvalue < KeACCR_K_CETermNegTrapMF_b)
    {
        /* Outputs for IfAction SubSystem: '<S378>/IfActionSubsystem1' incorporates:
         *  ActionPort: '<S384>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem1(VeACCR_dT_CEvalue, KeACCR_K_CETermNegTrapMF_a,
            KeACCR_K_CETermNegTrapMF_b, (&(VeACCR_K_CEtermNegTrapMF_out)));

        /* End of Outputs for SubSystem: '<S378>/IfActionSubsystem1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S378>/IfActionSubsystem3' incorporates:
         *  ActionPort: '<S386>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem3(VeACCR_dT_CEvalue, KeACCR_K_CETermNegTrapMF_c,
            KeACCR_K_CETermNegTrapMF_d, (&(VeACCR_K_CEtermNegTrapMF_out)));

        /* End of Outputs for SubSystem: '<S378>/IfActionSubsystem3' */
    }

    /* End of If: '<S378>/If' */

    /* If: '<S379>/If' incorporates:
     *  Constant: '<S366>/Calib'
     *  Constant: '<S367>/Calib'
     *  Constant: '<S368>/Calib'
     *  Constant: '<S369>/Calib'
     *  Logic: '<S379>/Logical1'
     *  Logic: '<S379>/Logical2'
     *  RelationalOperator: '<S379>/Comparison'
     *  RelationalOperator: '<S379>/Comparison1'
     *  RelationalOperator: '<S379>/Comparison2'
     *  RelationalOperator: '<S379>/Comparison3'
     *  RelationalOperator: '<S379>/Comparison4'
     */
    if ((VeACCR_dT_CEvalue < KeACCR_K_CETermPosMedTrapMF_a) ||
            (VeACCR_dT_CEvalue > KeACCR_K_CETermPosMedTrapMF_d))
    {
        /* Outputs for IfAction SubSystem: '<S379>/IfActionSubsystem' incorporates:
         *  ActionPort: '<S389>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem((&(VeACCR_K_CEtermPosMedTrapMF_out)));

        /* End of Outputs for SubSystem: '<S379>/IfActionSubsystem' */
    }
    else if ((VeACCR_dT_CEvalue >= KeACCR_K_CETermPosMedTrapMF_b) &&
             (VeACCR_dT_CEvalue <= KeACCR_K_CETermPosMedTrapMF_c))
    {
        /* Outputs for IfAction SubSystem: '<S379>/IfActionSubsystem2' incorporates:
         *  ActionPort: '<S391>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem2((&(VeACCR_K_CEtermPosMedTrapMF_out)));

        /* End of Outputs for SubSystem: '<S379>/IfActionSubsystem2' */
    }
    else if (VeACCR_dT_CEvalue < KeACCR_K_CETermPosMedTrapMF_b)
    {
        /* Outputs for IfAction SubSystem: '<S379>/IfActionSubsystem1' incorporates:
         *  ActionPort: '<S390>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem1(VeACCR_dT_CEvalue,
            KeACCR_K_CETermPosMedTrapMF_a, KeACCR_K_CETermPosMedTrapMF_b,
            (&(VeACCR_K_CEtermPosMedTrapMF_out)));

        /* End of Outputs for SubSystem: '<S379>/IfActionSubsystem1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S379>/IfActionSubsystem3' incorporates:
         *  ActionPort: '<S392>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem3(VeACCR_dT_CEvalue,
            KeACCR_K_CETermPosMedTrapMF_c, KeACCR_K_CETermPosMedTrapMF_d,
            (&(VeACCR_K_CEtermPosMedTrapMF_out)));

        /* End of Outputs for SubSystem: '<S379>/IfActionSubsystem3' */
    }

    /* End of If: '<S379>/If' */

    /* If: '<S382>/If' incorporates:
     *  Constant: '<S359>/Calib'
     *  Constant: '<S360>/Calib'
     *  Constant: '<S361>/Calib'
     *  Logic: '<S382>/Logical1'
     *  RelationalOperator: '<S382>/Comparison'
     *  RelationalOperator: '<S382>/Comparison1'
     *  RelationalOperator: '<S382>/Comparison2'
     *  RelationalOperator: '<S382>/Comparison4'
     */
    if ((VeACCR_dT_CEvalue < KeACCR_K_CETermMedTrigMF_a) || (VeACCR_dT_CEvalue >
         KeACCR_K_CETermMedTrigMF_c))
    {
        /* Outputs for IfAction SubSystem: '<S382>/IfActionSubsystem' incorporates:
         *  ActionPort: '<S407>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem((&(VeACCR_K_CEtermMedTrigMF_out)));

        /* End of Outputs for SubSystem: '<S382>/IfActionSubsystem' */
    }
    else if (VeACCR_dT_CEvalue == KeACCR_K_CETermMedTrigMF_b)
    {
        /* Outputs for IfAction SubSystem: '<S382>/IfActionSubsystem2' incorporates:
         *  ActionPort: '<S409>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem2((&(VeACCR_K_CEtermMedTrigMF_out)));

        /* End of Outputs for SubSystem: '<S382>/IfActionSubsystem2' */
    }
    else if (VeACCR_dT_CEvalue < KeACCR_K_CETermMedTrigMF_b)
    {
        /* Outputs for IfAction SubSystem: '<S382>/IfActionSubsystem1' incorporates:
         *  ActionPort: '<S408>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem1(VeACCR_dT_CEvalue, KeACCR_K_CETermMedTrigMF_a,
            KeACCR_K_CETermMedTrigMF_b, (&(VeACCR_K_CEtermMedTrigMF_out)));

        /* End of Outputs for SubSystem: '<S382>/IfActionSubsystem1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S382>/IfActionSubsystem3' incorporates:
         *  ActionPort: '<S410>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem3_f(VeACCR_dT_CEvalue,
            KeACCR_K_CETermMedTrigMF_b, KeACCR_K_CETermMedTrigMF_c,
            (&(VeACCR_K_CEtermMedTrigMF_out)));

        /* End of Outputs for SubSystem: '<S382>/IfActionSubsystem3' */
    }

    /* End of If: '<S382>/If' */

    /* If: '<S380>/If' incorporates:
     *  Constant: '<S374>/Calib'
     *  Constant: '<S375>/Calib'
     *  Constant: '<S376>/Calib'
     *  Constant: '<S377>/Calib'
     *  Logic: '<S380>/Logical1'
     *  Logic: '<S380>/Logical2'
     *  RelationalOperator: '<S380>/Comparison'
     *  RelationalOperator: '<S380>/Comparison1'
     *  RelationalOperator: '<S380>/Comparison2'
     *  RelationalOperator: '<S380>/Comparison3'
     *  RelationalOperator: '<S380>/Comparison4'
     */
    if ((VeACCR_dT_CEvalue < KeACCR_K_CETermZeroTrapMF_a) || (VeACCR_dT_CEvalue >
         KeACCR_K_CETermZeroTrapMF_d))
    {
        /* Outputs for IfAction SubSystem: '<S380>/IfActionSubsystem' incorporates:
         *  ActionPort: '<S395>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem((&(VeACCR_K_CEtermZeroTrapMF_out)));

        /* End of Outputs for SubSystem: '<S380>/IfActionSubsystem' */
    }
    else if ((VeACCR_dT_CEvalue >= KeACCR_K_CETermZeroTrapMF_b) &&
             (VeACCR_dT_CEvalue <= KeACCR_K_CETermZeroTrapMF_c))
    {
        /* Outputs for IfAction SubSystem: '<S380>/IfActionSubsystem2' incorporates:
         *  ActionPort: '<S397>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem2((&(VeACCR_K_CEtermZeroTrapMF_out)));

        /* End of Outputs for SubSystem: '<S380>/IfActionSubsystem2' */
    }
    else if (VeACCR_dT_CEvalue < KeACCR_K_CETermZeroTrapMF_b)
    {
        /* Outputs for IfAction SubSystem: '<S380>/IfActionSubsystem1' incorporates:
         *  ActionPort: '<S396>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem1(VeACCR_dT_CEvalue,
            KeACCR_K_CETermZeroTrapMF_a, KeACCR_K_CETermZeroTrapMF_b,
            (&(VeACCR_K_CEtermZeroTrapMF_out)));

        /* End of Outputs for SubSystem: '<S380>/IfActionSubsystem1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S380>/IfActionSubsystem4' incorporates:
         *  ActionPort: '<S398>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem3(VeACCR_dT_CEvalue,
            KeACCR_K_CETermZeroTrapMF_c, KeACCR_K_CETermZeroTrapMF_d,
            (&(VeACCR_K_CEtermZeroTrapMF_out)));

        /* End of Outputs for SubSystem: '<S380>/IfActionSubsystem4' */
    }

    /* End of If: '<S380>/If' */

    /* If: '<S381>/If' incorporates:
     *  Constant: '<S370>/Calib'
     *  Constant: '<S371>/Calib'
     *  Constant: '<S372>/Calib'
     *  Constant: '<S373>/Calib'
     *  Logic: '<S381>/Logical1'
     *  Logic: '<S381>/Logical2'
     *  RelationalOperator: '<S381>/Comparison'
     *  RelationalOperator: '<S381>/Comparison1'
     *  RelationalOperator: '<S381>/Comparison2'
     *  RelationalOperator: '<S381>/Comparison3'
     *  RelationalOperator: '<S381>/Comparison4'
     */
    if ((VeACCR_dT_CEvalue < KeACCR_K_CETermPosTrapMF_a) || (VeACCR_dT_CEvalue >
         KeACCR_K_CETermPosTrapMF_d))
    {
        /* Outputs for IfAction SubSystem: '<S381>/IfActionSubsystem' incorporates:
         *  ActionPort: '<S401>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem((&(VeACCR_K_CEtermPosTrapMF_out)));

        /* End of Outputs for SubSystem: '<S381>/IfActionSubsystem' */
    }
    else if ((VeACCR_dT_CEvalue >= KeACCR_K_CETermPosTrapMF_b) &&
             (VeACCR_dT_CEvalue <= KeACCR_K_CETermPosTrapMF_c))
    {
        /* Outputs for IfAction SubSystem: '<S381>/IfActionSubsystem2' incorporates:
         *  ActionPort: '<S403>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem2((&(VeACCR_K_CEtermPosTrapMF_out)));

        /* End of Outputs for SubSystem: '<S381>/IfActionSubsystem2' */
    }
    else if (VeACCR_dT_CEvalue < KeACCR_K_CETermPosTrapMF_b)
    {
        /* Outputs for IfAction SubSystem: '<S381>/IfActionSubsystem1' incorporates:
         *  ActionPort: '<S402>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem1(VeACCR_dT_CEvalue, KeACCR_K_CETermPosTrapMF_a,
            KeACCR_K_CETermPosTrapMF_b, (&(VeACCR_K_CEtermPosTrapMF_out)));

        /* End of Outputs for SubSystem: '<S381>/IfActionSubsystem1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S381>/IfActionSubsystem4' incorporates:
         *  ActionPort: '<S404>/ActionPort'
         */
        ACCR_ac_IfActionSubsystem3(VeACCR_dT_CEvalue, KeACCR_K_CETermPosTrapMF_c,
            KeACCR_K_CETermPosTrapMF_d, (&(VeACCR_K_CEtermPosTrapMF_out)));

        /* End of Outputs for SubSystem: '<S381>/IfActionSubsystem4' */
    }

    /* End of If: '<S381>/If' */

    /* MinMax: '<S358>/MinMax2' */
    tmpForInput[0] = VeACCR_K_CEtermNegTrapMF_out;
    tmpForInput[1] = VeACCR_K_CEtermPosMedTrapMF_out;
    tmpForInput[2] = VeACCR_K_CEtermMedTrigMF_out;
    tmpForInput[3] = VeACCR_K_CEtermZeroTrapMF_out;
    tmpForInput[4] = VeACCR_K_CEtermPosTrapMF_out;
    VeACCR_K_CEtermMF_Max = VeACCR_K_CEtermNegTrapMF_out;
    for (i = 0; i < 4; i++)
    {
        VeACCR_K_CEtermMF_Max = fmaxf(VeACCR_K_CEtermMF_Max, tmpForInput[i + 1]);
    }

    /* End of MinMax: '<S358>/MinMax2' */

    /* If: '<S358>/If1' incorporates:
     *  RelationalOperator: '<S358>/Comparison4'
     *  RelationalOperator: '<S358>/Comparison5'
     *  RelationalOperator: '<S358>/Comparison6'
     *  RelationalOperator: '<S358>/Comparison7'
     */
    if (VeACCR_K_CEtermNegTrapMF_out == VeACCR_K_CEtermMF_Max)
    {
        /* Outputs for IfAction SubSystem: '<S358>/NegativeMF_CE' incorporates:
         *  ActionPort: '<S474>/ActionPort'
         */
        /* Merge: '<S358>/Merge1' incorporates:
         *  Constant: '<S474>/Constant'
         *  SignalConversion generated from: '<S474>/NegativeMF_CE'
         */
        VeACCR_i_CEtermMFState_AftMerg = 1.0F;

        /* Merge: '<S358>/Merge3' incorporates:
         *  Inport: '<S474>/VeACCR_K_CEtermNegTrapMF_out'
         */
        VeACCR_K_CEtermMF_out_AftMerg = VeACCR_K_CEtermNegTrapMF_out;

        /* End of Outputs for SubSystem: '<S358>/NegativeMF_CE' */
    }
    else if (VeACCR_K_CEtermPosMedTrapMF_out == VeACCR_K_CEtermMF_Max)
    {
        /* Outputs for IfAction SubSystem: '<S358>/PosMedMF_CE' incorporates:
         *  ActionPort: '<S476>/ActionPort'
         */
        /* Merge: '<S358>/Merge1' incorporates:
         *  Constant: '<S476>/Constant'
         *  SignalConversion generated from: '<S476>/PosMedMF_CE'
         */
        VeACCR_i_CEtermMFState_AftMerg = 5.0F;

        /* Merge: '<S358>/Merge3' incorporates:
         *  Inport: '<S476>/VeACCR_K_CEtermPosMedTrapMF_out'
         */
        VeACCR_K_CEtermMF_out_AftMerg = VeACCR_K_CEtermPosMedTrapMF_out;

        /* End of Outputs for SubSystem: '<S358>/PosMedMF_CE' */
    }
    else if (VeACCR_K_CEtermMedTrigMF_out == VeACCR_K_CEtermMF_Max)
    {
        /* Outputs for IfAction SubSystem: '<S358>/MedianMF_CE' incorporates:
         *  ActionPort: '<S472>/ActionPort'
         */
        /* Merge: '<S358>/Merge1' incorporates:
         *  Constant: '<S472>/Constant'
         *  SignalConversion generated from: '<S472>/MedianMF_CE'
         */
        VeACCR_i_CEtermMFState_AftMerg = 2.0F;

        /* Merge: '<S358>/Merge3' incorporates:
         *  Inport: '<S472>/VeACCR_K_CEtermMedTrigMF_out'
         */
        VeACCR_K_CEtermMF_out_AftMerg = VeACCR_K_CEtermMedTrigMF_out;

        /* End of Outputs for SubSystem: '<S358>/MedianMF_CE' */
    }
    else if (VeACCR_K_CEtermZeroTrapMF_out == VeACCR_K_CEtermMF_Max)
    {
        /* Outputs for IfAction SubSystem: '<S358>/ZeroMF_CE' incorporates:
         *  ActionPort: '<S480>/ActionPort'
         */
        /* Merge: '<S358>/Merge1' incorporates:
         *  Constant: '<S480>/Constant'
         *  SignalConversion generated from: '<S480>/ZeroMF_CE'
         */
        VeACCR_i_CEtermMFState_AftMerg = 4.0F;

        /* Merge: '<S358>/Merge3' incorporates:
         *  Inport: '<S480>/VeACCR_K_CEtermZeroTrapMF_out'
         */
        VeACCR_K_CEtermMF_out_AftMerg = VeACCR_K_CEtermZeroTrapMF_out;

        /* End of Outputs for SubSystem: '<S358>/ZeroMF_CE' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S358>/PositiveMF_CE' incorporates:
         *  ActionPort: '<S478>/ActionPort'
         */
        /* Merge: '<S358>/Merge1' incorporates:
         *  Constant: '<S478>/Constant'
         *  SignalConversion generated from: '<S478>/PositiveMF_CE'
         */
        VeACCR_i_CEtermMFState_AftMerg = 3.0F;

        /* Merge: '<S358>/Merge3' incorporates:
         *  Inport: '<S478>/VeACCR_K_CEtermPosTrapMF_out'
         */
        VeACCR_K_CEtermMF_out_AftMerg = VeACCR_K_CEtermPosTrapMF_out;

        /* End of Outputs for SubSystem: '<S358>/PositiveMF_CE' */
    }

    /* End of If: '<S358>/If1' */

    /* Lookup_n-D: '<S415>/Vector' incorporates:
     *  Merge: '<S358>/Merge'
     *  Merge: '<S358>/Merge1'
     */
    VeACCR_n_CompmSpd_Hot_Amb_EcoMode = look2_iflf_binlca_16a
        (VeACCR_i_EtermMFState_AftMerg, VeACCR_i_CEtermMFState_AftMerg, ((const
           float32 *)&(KxACCR_n_CompmSpd_Hot_Amb_EcoMode[0])), ((const float32 *)
          &(KyACCR_n_CompmSpd_Hot_Amb_EcoMode[0])), ((const float32 *)
          &(KtACCR_n_CompmSpd_Hot_Amb_EcoMode[0])), ACCR_ac_ConstP.pooled16, 6U);

    /* Outputs for Atomic SubSystem: '<S336>/Hysteresis' */
    /* Switch: '<S355>/Switch1' incorporates:
     *  Constant: '<S356>/Calib'
     *  RelationalOperator: '<S355>/GreaterThan'
     */
    if (rtb_Switch1_jx > KeACCR_T_CompSpdFuzzy_AmbHigh)
    {
        /* Switch: '<S355>/Switch1' incorporates:
         *  Constant: '<S355>/ConstantValue'
         */
        VeACCR_b_CompSpdFuzzy_AmbHot = true;
    }
    else
    {
        /* Switch: '<S355>/Switch1' incorporates:
         *  Constant: '<S357>/Calib'
         *  RelationalOperator: '<S355>/GreaterThan1'
         *  UnitDelay: '<S355>/UnitDelay'
         */
        VeACCR_b_CompSpdFuzzy_AmbHot = ((rtb_Switch1_jx >=
            KeACCR_T_CompSpdFuzzy_AmbLow) && (VeACCR_b_CompSpdFuzzy_AmbHot));
    }

    /* End of Switch: '<S355>/Switch1' */
    /* End of Outputs for SubSystem: '<S336>/Hysteresis' */

    /* Lookup_n-D: '<S417>/Vector' incorporates:
     *  Merge: '<S358>/Merge'
     *  Merge: '<S358>/Merge1'
     */
    VeACCR_n_CompmSpd_Ideal_Amb_EcoMode = look2_iflf_binlca_16a
        (VeACCR_i_EtermMFState_AftMerg, VeACCR_i_CEtermMFState_AftMerg, ((const
           float32 *)&(KxACCR_n_CompmSpd_Ideal_Amb_EcoMode[0])), ((const float32
           *)&(KyACCR_n_CompmSpd_Ideal_Amb_EcoMode[0])), ((const float32 *)
          &(KtACCR_n_CompmSpd_Ideal_Amb_EcoMode[0])), ACCR_ac_ConstP.pooled16,
         6U);

    /* Lookup_n-D: '<S414>/Vector' incorporates:
     *  Merge: '<S358>/Merge'
     *  Merge: '<S358>/Merge1'
     */
    VeACCR_n_CompmSpd_Hot_Amb = look2_iflf_binlca_16a
        (VeACCR_i_EtermMFState_AftMerg, VeACCR_i_CEtermMFState_AftMerg, ((const
           float32 *)&(KxACCR_n_CompmSpd_Hot_Amb[0])), ((const float32 *)
          &(KyACCR_n_CompmSpd_Hot_Amb[0])), ((const float32 *)
          &(KtACCR_n_CompmSpd_Hot_Amb[0])), ACCR_ac_ConstP.pooled16, 6U);

    /* Lookup_n-D: '<S416>/Vector' incorporates:
     *  Merge: '<S358>/Merge'
     *  Merge: '<S358>/Merge1'
     */
    VeACCR_n_CompmSpd_Ideal_Amb = look2_iflf_binlca_16a
        (VeACCR_i_EtermMFState_AftMerg, VeACCR_i_CEtermMFState_AftMerg, ((const
           float32 *)&(KxACCR_n_CompmSpd_Ideal_Amb[0])), ((const float32 *)
          &(KyACCR_n_CompmSpd_Ideal_Amb[0])), ((const float32 *)
          &(KtACCR_n_CompmSpd_Ideal_Amb[0])), ACCR_ac_ConstP.pooled16, 6U);

    /* Sum: '<S336>/Sum1' incorporates:
     *  Product: '<S336>/Product1'
     *  Sum: '<S336>/Sum'
     */
    VeACCR_K_MF_DefuzzyMin = (VeACCR_K_EtermMF_out_AftMerg +
        VeACCR_K_CEtermMF_out_AftMerg) - (VeACCR_K_EtermMF_out_AftMerg *
        VeACCR_K_CEtermMF_out_AftMerg);

    /* Switch: '<S353>/Switch1' incorporates:
     *  Constant: '<S413>/Constant'
     *  RelationalOperator: '<S353>/Comparison4'
     *  Switch: '<S353>/Switch2'
     */
    if (((uint32)ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_hz) ==
            CeTRIR_e_HVAC_ECO_ON)
    {
        /* Switch: '<S353>/Switch' */
        if (VeACCR_b_CompSpdFuzzy_AmbHot)
        {
            rtb_Sum1_eo = VeACCR_n_CompmSpd_Hot_Amb_EcoMode;
        }
        else
        {
            rtb_Sum1_eo = VeACCR_n_CompmSpd_Ideal_Amb_EcoMode;
        }

        /* End of Switch: '<S353>/Switch' */
    }
    else if (VeACCR_b_CompSpdFuzzy_AmbHot)
    {
        /* Switch: '<S353>/Switch2' */
        rtb_Sum1_eo = VeACCR_n_CompmSpd_Hot_Amb;
    }
    else
    {
        rtb_Sum1_eo = VeACCR_n_CompmSpd_Ideal_Amb;
    }

    /* End of Switch: '<S353>/Switch1' */

    /* Product: '<S336>/Product' */
    VeACCR_n_CompSpd_Fuzzy = rtb_Sum1_eo * VeACCR_K_MF_DefuzzyMin;

    /* Switch: '<S320>/Switch' incorporates:
     *  Constant: '<S341>/Calib'
     */
    if (KeACCR_b_NewFuzzyEnbl)
    {
        /* Switch: '<S320>/Switch' */
        VeACCR_n_CompSpd_Fuzzy_AD = VeACCR_n_CompRPM_FuzzyNew_AftGain;
    }
    else
    {
        /* Switch: '<S320>/Switch' */
        VeACCR_n_CompSpd_Fuzzy_AD = VeACCR_n_CompSpd_Fuzzy;
    }

    /* End of Switch: '<S320>/Switch' */

    /* Lookup_n-D: '<S346>/Vector' incorporates:
     *  Switch: '<S348>/Switch1'
     */
    rtb_Sum1_f = look1_iflf_binlca_16a(rtb_Switch1_jx, ((const float32 *)
        &(KxACCR_n_CompRPMITermmax_Fuzzy[0])), ((const float32 *)
        &(KtACCR_n_CompRPMITermmax_Fuzzy[0])), 4U);

    /* Switch: '<S334>/Switch' incorporates:
     *  Constant: '<S349>/Constant'
     *  RelationalOperator: '<S334>/Comparison4'
     */
    if (((uint32)ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_hz) ==
            CeTRIR_e_HVAC_ECO_ON)
    {
        /* Switch: '<S334>/Switch' incorporates:
         *  Lookup_n-D: '<S351>/Vector'
         *  Switch: '<S322>/Switch2'
         *  Switch: '<S348>/Switch1'
         */
        VeACCR_K_FuzzyRPM_IntegralGain = look2_iflf_binlca_16a
            (VeACCR_dT_ModEvapTempError_Delta, rtb_Switch1_jx, ((const float32 *)
              &(KxACCR_K_CompRPMITermGain_Fuzzy_EcoMode[0])), ((const float32 *)
              &(KyACCR_K_CompRPMITermGain_Fuzzy_EcoMode[0])), ((const float32 *)
              &(KtACCR_K_CompRPMITermGain_Fuzzy_EcoMode[0])),
             ACCR_ac_ConstP.pooled16, 6U);
    }
    else
    {
        /* Switch: '<S334>/Switch' incorporates:
         *  Lookup_n-D: '<S350>/Vector'
         *  Switch: '<S322>/Switch2'
         *  Switch: '<S348>/Switch1'
         */
        VeACCR_K_FuzzyRPM_IntegralGain = look2_iflf_binlca_16a
            (VeACCR_dT_ModEvapTempError_Delta, rtb_Switch1_jx, ((const float32 *)
              &(KxACCR_K_CompRPMITermGain_Fuzzy[0])), ((const float32 *)
              &(KyACCR_K_CompRPMITermGain_Fuzzy[0])), ((const float32 *)
              &(KtACCR_K_CompRPMITermGain_Fuzzy[0])), ACCR_ac_ConstP.pooled16,
             6U);
    }

    /* End of Switch: '<S334>/Switch' */

    /* Outputs for Atomic SubSystem: '<S320>/IntegratorKResetEnabledLimited' */
    /* Switch: '<S337>/Switch' incorporates:
     *  Delay: '<S320>/Delay'
     *  Switch: '<S337>/Switch1'
     */
    if (rtb_Logical1_n3o)
    {
        /* Switch: '<S337>/Switch' incorporates:
         *  Constant: '<S343>/Calib'
         */
        VeACCR_n_CompRPMIterm = KeACCR_n_CompRPMITerm_IV;
    }
    else
    {
        if (!ACCR_ac_DW.Delay_DSTATE_h)
        {
            /* Switch: '<S337>/Switch1' incorporates:
             *  Constant: '<S342>/Calib'
             *  Product: '<S337>/Multiplication'
             *  Sum: '<S337>/Sum_Sub'
             *  Switch: '<S337>/Switch'
             *  UnitDelay: '<S337>/UnitDelay'
             */
            VeACCR_n_CompRPMIterm = ((VeACCR_dT_ModEvapTempError_Delta *
                KeACCR_dt_FuzzyDterm_ts) * VeACCR_K_FuzzyRPM_IntegralGain) +
                VeACCR_n_CompRPMIterm;
        }
    }

    /* End of Switch: '<S337>/Switch' */

    /* Outputs for Atomic SubSystem: '<S337>/Limiter' */
    /* Switch: '<S482>/Switch1' incorporates:
     *  RelationalOperator: '<S482>/RelationalOperator'
     */
    if (rtb_Sum1_f >= VeACCR_n_CompRPMIterm)
    {
        /* Switch: '<S845>/Switch1' */
        rtb_Sum1_f = VeACCR_n_CompRPMIterm;
    }

    /* End of Switch: '<S482>/Switch1' */

    /* Switch: '<S482>/Switch' incorporates:
     *  Constant: '<S344>/Calib'
     *  RelationalOperator: '<S482>/RelationalOperator1'
     */
    if (rtb_Sum1_f > KeACCR_n_CompRPMITermmin_Fuzzy)
    {
        /* Switch: '<S482>/Switch' */
        VeACCR_n_CompRPMIterm = rtb_Sum1_f;
    }
    else
    {
        /* Switch: '<S482>/Switch' */
        VeACCR_n_CompRPMIterm = KeACCR_n_CompRPMITermmin_Fuzzy;
    }

    /* End of Switch: '<S482>/Switch' */
    /* End of Outputs for SubSystem: '<S337>/Limiter' */
    /* End of Outputs for SubSystem: '<S320>/IntegratorKResetEnabledLimited' */

    /* Sum: '<S320>/Sum_Sub2' */
    VeACCR_n_CompRPM_Fuzzy = VeACCR_n_CompSpd_Fuzzy_AD + VeACCR_n_CompRPMIterm;

    /* Logic: '<S327>/LogicalOperator2' incorporates:
     *  Logic: '<S157>/LogicalOperator2'
     *  Logic: '<S240>/Logical12'
     *  Switch: '<S284>/Switch1'
     */
    rtb_AND_mh = !rtb_Logical1_n3o;

    /* Logic: '<S326>/LogicalOperator1' incorporates:
     *  Constant: '<S328>/Calib'
     *  Constant: '<S329>/Calib'
     *  Logic: '<S326>/LogicalOperator'
     *  Logic: '<S326>/LogicalOperator2'
     *  Logic: '<S326>/LogicalOperator3'
     *  Logic: '<S770>/LogicalOperator'
     *  Logic: '<S770>/LogicalOperator1'
     */
    rtb_Logical4_f2 = (((!ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fb) ||
                        (!KeACCR_b_RemoveNVHBlwFA_Ovrd)) && (rtb_Logical8_nn ||
                        (!KeACCR_b_RemoveNVHAATFA_Ovrd)));

    /* Switch: '<S324>/Switch1' incorporates:
     *  Constant: '<S330>/Constant'
     *  Constant: '<S331>/Constant'
     *  Constant: '<S332>/Calib'
     *  Logic: '<S318>/LogicalOperator5'
     *  Logic: '<S326>/LogicalOperator'
     *  Logic: '<S326>/LogicalOperator1'
     *  Logic: '<S327>/LogicalOperator'
     *  Logic: '<S327>/LogicalOperator1'
     *  Logic: '<S327>/LogicalOperator2'
     *  Logic: '<S327>/LogicalOperator3'
     *  Logic: '<S327>/LogicalOperator4'
     *  RelationalOperator: '<S327>/RelationalOperator'
     *  RelationalOperator: '<S327>/RelationalOperator1'
     */
    if (rtb_Logical4_f2 && (rtb_AND_mh && (((CeTHMR_e_ActiveCooling != ((uint32)
             ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cg)) && (((uint32)
             ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cg) !=
            CeTHMR_e_EmergencyCooling)) || (KeACCR_b_DsrgrdBattCond4CabNVH))))
    {
        /* Switch: '<S324>/Switch1' incorporates:
         *  Lookup_n-D: '<S325>/Vector'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
         */
        VeACCR_n_CompSpdLim_CabNVH = look2_iflf_binlca_16a
            (ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nq,
             ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_a, ((const float32
               *)&(KxACCR_n_CompSpdLim_NVH[0])), ((const float32 *)
              &(KyACCR_n_CompSpdLim_NVH[0])), ((const float32 *)
              &(KtACCR_n_CompSpdLim_NVH[0])), ACCR_ac_ConstP.pooled15, 8U);
    }
    else
    {
        /* Switch: '<S324>/Switch1' incorporates:
         *  Constant: '<S110>/Calib'
         */
        VeACCR_n_CompSpdLim_CabNVH = KeACCR_n_CompRPMmax;
    }

    /* End of Switch: '<S324>/Switch1' */

    /* Switch: '<S732>/Switch1' incorporates:
     *  Constant: '<S735>/Calib'
     *  Switch: '<S323>/Switch1'
     */
    if (rtb_Logical2_jm)
    {
        /* Switch: '<S732>/Switch1' incorporates:
         *  Constant: '<S323>/ConstantValue2'
         */
        VeACCR_n_RPMetc = 0.0F;
    }
    else if (KeACCR_b_DisFuzzyControls)
    {
        /* Outputs for Atomic SubSystem: '<S706>/integral_term1' */
        /* Switch: '<S711>/Switch1' incorporates:
         *  Constant: '<S695>/Calib'
         *  RelationalOperator: '<S711>/RelationalOperator'
         *  Switch: '<S323>/Switch1'
         *  UnitDelay: '<S706>/UnitDelay2'
         */
        if (KeACCR_n_EvapTempCntrl_MaxRPM < ACCR_ac_DW.UnitDelay2_DSTATE_m)
        {
            /* Switch: '<S711>/Switch1' */
            VeACCR_n_RPMetc = KeACCR_n_EvapTempCntrl_MaxRPM;
        }
        else
        {
            /* Switch: '<S711>/Switch1' */
            VeACCR_n_RPMetc = ACCR_ac_DW.UnitDelay2_DSTATE_m;
        }

        /* End of Switch: '<S711>/Switch1' */

        /* Switch: '<S711>/Switch' incorporates:
         *  Constant: '<S696>/Calib'
         *  RelationalOperator: '<S711>/RelationalOperator1'
         *  Switch: '<S323>/Switch1'
         */
        if (VeACCR_n_RPMetc <= KeACCR_n_EvapTempCntrl_MinRPM)
        {
            /* Switch: '<S732>/Switch1' incorporates:
             *  Switch: '<S323>/Switch1'
             */
            VeACCR_n_RPMetc = KeACCR_n_EvapTempCntrl_MinRPM;
        }

        /* End of Switch: '<S711>/Switch' */
        /* End of Outputs for SubSystem: '<S706>/integral_term1' */
    }
    else
    {
        /* Switch: '<S732>/Switch1' incorporates:
         *  MinMax: '<S317>/MinMax'
         *  Switch: '<S323>/Switch1'
         */
        VeACCR_n_RPMetc = fminf(VeACCR_n_CompRPM_Fuzzy,
                                VeACCR_n_CompSpdLim_CabNVH);
    }

    /* End of Switch: '<S732>/Switch1' */

    /* Logic: '<S240>/Logical8' incorporates:
     *  Constant: '<S278>/Constant'
     *  Constant: '<S279>/Constant'
     *  Constant: '<S288>/Calib'
     *  Logic: '<S240>/Logical9'
     *  RelationalOperator: '<S240>/Comparison4'
     *  RelationalOperator: '<S240>/Comparison5'
     */
    rtb_Logical8_nn = (((CeAVTR_e_EVA_Cool == ((uint32)
                          ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_gar)) ||
                        (((uint32)
                          ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_gar) ==
                         CeAVTR_e_EVA_MaxCool)) &&
                       (KeACCR_b_EnableEVAThrml_State));

    /* Logic: '<S240>/Logical1' incorporates:
     *  Constant: '<S277>/Constant'
     *  Constant: '<S289>/Calib'
     *  Logic: '<S240>/Logical6'
     *  Logic: '<S240>/Logical7'
     *  RelationalOperator: '<S240>/Comparison9'
     */
    rtb_Logical2_jm = (((((uint32)
                          ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cg) ==
                         CeTHMR_e_ActiveCooling) ||
                        (KeACCR_b_IgnorBatThrml_State)) &&
                       ((VeACCR_b_BattAllowed_AD) || rtb_Logical8_nn));

    /* Logic: '<S234>/Logical2' incorporates:
     *  Constant: '<S241>/Calib'
     *  Constant: '<S242>/Calib'
     *  Constant: '<S243>/Constant1'
     *  Constant: '<S243>/Constant2'
     *  Constant: '<S244>/Constant1'
     *  Constant: '<S244>/Constant2'
     *  DataStoreRead: '<S243>/StatusByte_CoolCtrlVlv1CktHi'
     *  DataStoreRead: '<S244>/StatusByte_CoolCtrlVlv1CktLo'
     *  Logic: '<S234>/Logical1'
     *  Logic: '<S234>/Logical8'
     *  Logic: '<S243>/Logical Operator'
     *  Logic: '<S244>/Logical Operator'
     *  RelationalOperator: '<S243>/Relational Operator1'
     *  RelationalOperator: '<S243>/Relational Operator2'
     *  RelationalOperator: '<S244>/Relational Operator1'
     *  RelationalOperator: '<S244>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S243>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S243>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S244>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S244>/Bitwise Operator2'
     */
    VeACCR_b_ChlrVlvSB_Flt = (((((((uint32)
        ACCR_ac_DW.StatusByte_CoolCtrlVlv1CktHi) & 1U) != 0U) && ((((uint32)
        ACCR_ac_DW.StatusByte_CoolCtrlVlv1CktHi) & 64U) == 0U)) &&
        (KeACCR_b_DsblComp4Batt_ChlrSB)) || ((((((uint32)
        ACCR_ac_DW.StatusByte_CoolCtrlVlv1CktLo) & 1U) != 0U) && ((((uint32)
        ACCR_ac_DW.StatusByte_CoolCtrlVlv1CktLo) & 64U) == 0U)) &&
        (KeACCR_b_DsblComp4Batt_ShrtGnd)));

    /* Logic: '<S239>/Logical3' incorporates:
     *  Constant: '<S266>/Constant'
     *  Constant: '<S267>/Constant'
     *  Constant: '<S268>/Calib'
     *  Constant: '<S269>/Calib'
     *  Constant: '<S270>/Calib'
     *  Constant: '<S271>/Constant1'
     *  Constant: '<S271>/Constant2'
     *  DataStoreRead: '<S271>/StatusByte_BattCoolPmpPerf'
     *  Logic: '<S239>/Logical1'
     *  Logic: '<S239>/Logical2'
     *  Logic: '<S239>/Logical20'
     *  Logic: '<S239>/Logical26'
     *  Logic: '<S239>/Logical4'
     *  Logic: '<S271>/Logical Operator'
     *  RelationalOperator: '<S239>/Comparison1'
     *  RelationalOperator: '<S239>/Comparison4'
     *  RelationalOperator: '<S271>/Relational Operator1'
     *  RelationalOperator: '<S271>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S271>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S271>/Bitwise Operator2'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
     */
    VeACCR_b_LTAPFltd = ((((((((uint32)ACCR_ac_DW.StatusByte_BattCoolPmpPerf) &
        1U) != 0U) && ((((uint32)ACCR_ac_DW.StatusByte_BattCoolPmpPerf) & 64U) ==
                       0U)) && (KeACCR_b_DsblComp4Batt_LTAPPerf)) ||
                          (((CePMPR_e_FTSNA_False != ((uint32)
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_pv5)) ||
                            (ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bi))
                           && (KeACCR_b_DsblComp4Batt_LTAPDryRun))) ||
                         (((((uint32)
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_dks) !=
                            CeBPCR_e_LOC_BCP_False) ||
                           (ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_gzq))
                          && (KeACCR_b_DsblComp4Batt_LTAP_LOC)));

    /* Logic: '<S238>/Logical7' incorporates:
     *  Constant: '<S256>/Constant'
     *  Constant: '<S257>/Calib'
     *  Constant: '<S258>/Calib'
     *  Constant: '<S259>/Calib'
     *  Constant: '<S260>/Calib'
     *  Constant: '<S261>/Calib'
     *  Constant: '<S262>/Constant1'
     *  Constant: '<S262>/Constant2'
     *  Constant: '<S263>/Constant1'
     *  Constant: '<S263>/Constant2'
     *  Constant: '<S264>/Constant1'
     *  Constant: '<S264>/Constant2'
     *  Constant: '<S265>/Constant1'
     *  Constant: '<S265>/Constant2'
     *  DataStoreRead: '<S262>/StatusByte_CommBusOff'
     *  DataStoreRead: '<S263>/StatusByte_LosCommBECM_A'
     *  DataStoreRead: '<S264>/StatusByte_CommBus_B_Off'
     *  DataStoreRead: '<S265>/StatusByte_LosCommBECM_A_CANC11'
     *  Logic: '<S238>/Logical10'
     *  Logic: '<S238>/Logical2'
     *  Logic: '<S238>/Logical3'
     *  Logic: '<S238>/Logical4'
     *  Logic: '<S238>/Logical5'
     *  Logic: '<S238>/Logical6'
     *  Logic: '<S238>/Logical8'
     *  Logic: '<S238>/Logical9'
     *  Logic: '<S262>/Logical Operator'
     *  Logic: '<S263>/Logical Operator'
     *  Logic: '<S264>/Logical Operator'
     *  Logic: '<S265>/Logical Operator'
     *  RelationalOperator: '<S238>/Comparison3'
     *  RelationalOperator: '<S262>/Relational Operator1'
     *  RelationalOperator: '<S262>/Relational Operator2'
     *  RelationalOperator: '<S263>/Relational Operator1'
     *  RelationalOperator: '<S263>/Relational Operator2'
     *  RelationalOperator: '<S264>/Relational Operator1'
     *  RelationalOperator: '<S264>/Relational Operator2'
     *  RelationalOperator: '<S265>/Relational Operator1'
     *  RelationalOperator: '<S265>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S262>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S262>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S263>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S263>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S264>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S264>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S265>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S265>/Bitwise Operator2'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
     */
    VeACCR_b_BPCMCommFltd = (((((((((uint32)ACCR_ac_DW.StatusByte_CommBusOff) &
        1U) != 0U) && ((((uint32)ACCR_ac_DW.StatusByte_CommBusOff) & 64U) == 0U))
        && (KeACCR_b_DsblComp4Batt_ePTBusOff)) && ((((((uint32)
        ACCR_ac_DW.StatusByte_CommBus_B_Off) & 1U) != 0U) && ((((uint32)
        ACCR_ac_DW.StatusByte_CommBus_B_Off) & 64U) == 0U)) ||
        (KeACCR_b_RedundantDsblComp4Batt_ePTBusOff))) || (((((((uint32)
        ACCR_ac_DW.StatusByte_LosCommBECM_A) & 1U) != 0U) && ((((uint32)
        ACCR_ac_DW.StatusByte_LosCommBECM_A) & 64U) == 0U)) &&
        (KeACCR_b_DsblComp4Batt_BPCM_LOC)) && ((((((uint32)
        ACCR_ac_DW.StatusByte_LosCommBECM_A_CANC11) & 1U) != 0U) && ((((uint32)
        ACCR_ac_DW.StatusByte_LosCommBECM_A_CANC11) & 64U) == 0U)) ||
        (KeACCR_b_RedundantDsblComp4Batt_BPCM_LOC)))) || (((((uint32)
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cn) !=
        CeBPCR_e_LIN_BusOff_Disabled) ||
        (ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_agr)) &&
        (KeACCR_b_DsblComp4Batt_BPCM_LINBusOff)));

    /* Logic: '<S235>/Logical22' incorporates:
     *  Constant: '<S245>/Calib'
     *  Constant: '<S246>/Calib'
     *  Constant: '<S247>/Calib'
     *  Constant: '<S248>/Calib'
     *  Constant: '<S249>/Calib'
     *  Constant: '<S250>/Constant1'
     *  Constant: '<S250>/Constant2'
     *  DataStoreRead: '<S250>/StatusByte_LostCommACRefrigExpVlvActA'
     *  Logic: '<S235>/Logical13'
     *  Logic: '<S235>/Logical14'
     *  Logic: '<S235>/Logical15'
     *  Logic: '<S235>/Logical2'
     *  Logic: '<S235>/Logical4'
     *  Logic: '<S250>/Logical Operator'
     *  RelationalOperator: '<S250>/Relational Operator1'
     *  RelationalOperator: '<S250>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S250>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S250>/Bitwise Operator2'
     */
    VeACCR_b_EXVsnsrFltd =
        ((((((ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_a0a) &&
             (KeACCR_b_DisblEXVPressnsr_FA)) ||
            ((ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cu) &&
             (KeACCR_b_DisblEXVTempsnsr_FA))) || ((((((uint32)
                ACCR_ac_DW.StatusByte_LostCommACRefrigExpVlvActA) & 1U) != 0U) &&
             ((((uint32)ACCR_ac_DW.StatusByte_LostCommACRefrigExpVlvActA) & 64U)
              == 0U)) && (KeACCR_b_DsblEXV_LOC))) ||
          ((ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_akj) &&
           (KeACCR_b_DisblEXVPressSens_FltDtct))) ||
         ((ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_pc) &&
          (KeACCR_b_DisblEXVTempSens_FltDtct)));

    /* Logic: '<S147>/Logical11' incorporates:
     *  Constant: '<S251>/Calib'
     *  Constant: '<S252>/Calib'
     *  Constant: '<S253>/Constant1'
     *  Constant: '<S253>/Constant2'
     *  Constant: '<S254>/Constant1'
     *  Constant: '<S254>/Constant2'
     *  Constant: '<S255>/Constant1'
     *  Constant: '<S255>/Constant2'
     *  DataStoreRead: '<S253>/StatusByte_AC_RefrigTempSnsrAPerf'
     *  DataStoreRead: '<S254>/StatusByte_AC_RefrigTempSnsrBCkt'
     *  DataStoreRead: '<S255>/StatusByte_AC_RefrigTempSnsrACkt'
     *  Logic: '<S147>/LogicalOperator'
     *  Logic: '<S236>/Logical12'
     *  Logic: '<S237>/Logical1'
     *  Logic: '<S237>/Logical19'
     *  Logic: '<S253>/Logical Operator'
     *  Logic: '<S254>/Logical Operator'
     *  Logic: '<S255>/Logical Operator'
     *  RelationalOperator: '<S253>/Relational Operator1'
     *  RelationalOperator: '<S253>/Relational Operator2'
     *  RelationalOperator: '<S254>/Relational Operator1'
     *  RelationalOperator: '<S254>/Relational Operator2'
     *  RelationalOperator: '<S255>/Relational Operator1'
     *  RelationalOperator: '<S255>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S253>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S253>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S254>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S254>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S255>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S255>/Bitwise Operator2'
     */
    VeACCR_b_NoBattClngSysFltsPrsnt = ((((((!VeACCR_b_ChlrVlvSB_Flt) &&
        (!VeACCR_b_LTAPFltd)) && (!VeACCR_b_BPCMCommFltd)) &&
        ((!ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_d4) ||
         (!KeACCR_b_DisblComp4HTCVRA))) && (!VeACCR_b_EXVsnsrFltd)) &&
        ((!KeACCR_b_DsblEAC_ForBat_RAEn) || (((((((uint32)
        ACCR_ac_DW.StatusByte_AC_RefrigTempSnsrAPerf) & 1U) == 0U) || ((((uint32)
        ACCR_ac_DW.StatusByte_AC_RefrigTempSnsrAPerf) & 64U) != 0U)) &&
        (((((uint32)ACCR_ac_DW.StatusByte_AC_RefrigTempSnsrBCkt) & 1U) == 0U) ||
         ((((uint32)ACCR_ac_DW.StatusByte_AC_RefrigTempSnsrBCkt) & 64U) != 0U)))
        && (((((uint32)ACCR_ac_DW.StatusByte_AC_RefrigTempSnsrACkt) & 1U) == 0U)
            || ((((uint32)ACCR_ac_DW.StatusByte_AC_RefrigTempSnsrACkt) & 64U) !=
                0U)))));

    /* Lookup_n-D: '<S299>/Vector' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
     */
    VeACCR_n_SDSTempErrRPM = look1_iflf_binlca_16a
        (ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ir, ((const float32 *)
          &(KxACCR_n_EVA_ChillerRPMlookup[0])), ((const float32 *)
          &(KtACCR_n_EVA_ChillerRPMlookup[0])), 6U);

    /* RelationalOperator: '<S273>/Comparison6' incorporates:
     *  Constant: '<S304>/Constant'
     */
    rtb_Logical3_ke = (((uint32)
                        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_i3) ==
                       CeOBCR_e_ChargingLvlAC1);

    /* RelationalOperator: '<S273>/Comparison1' incorporates:
     *  Constant: '<S303>/Constant'
     */
    rtb_Comparison1_ea = (((uint32)
                           ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_i3) ==
                          CeOBCR_e_ChargingLvlAC2);

    /* Switch: '<S272>/Switch3' incorporates:
     *  Constant: '<S287>/Calib'
     *  Constant: '<S292>/Calib'
     *  Constant: '<S301>/Calib'
     *  Logic: '<S240>/Logical10'
     *  Logic: '<S240>/Logical11'
     *  Logic: '<S272>/LogicalOperator5'
     *  Logic: '<S273>/Logical10'
     *  Switch: '<S284>/Switch1'
     *  Switch: '<S284>/Switch2'
     */
    if ((rtb_Logical3_ke || rtb_Comparison1_ea) && (KeACCR_b_EnbChillerNVHLimit))
    {
        /* Switch: '<S305>/Switch1' incorporates:
         *  Constant: '<S273>/Constant1'
         *  Constant: '<S273>/Constant3'
         *  Switch: '<S305>/Switch2'
         */
        if (rtb_Logical3_ke)
        {
            i = 1;
        }
        else if (rtb_Comparison1_ea)
        {
            /* Switch: '<S305>/Switch2' incorporates:
             *  Constant: '<S273>/Constant2'
             */
            i = 2;
        }
        else
        {
            i = 0;
        }

        /* End of Switch: '<S305>/Switch1' */

        /* Switch: '<S284>/Switch1' incorporates:
         *  Constant: '<S287>/Calib'
         *  Constant: '<S292>/Calib'
         *  Logic: '<S240>/Logical10'
         *  Logic: '<S240>/Logical11'
         *  Lookup_n-D: '<S298>/Vector'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
         *  Switch: '<S284>/Switch2'
         */
        if ((ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_hn) &&
                (KeACCR_b_UseTPCRBattErr4CompSpd_PerWup))
        {
            rtb_Vector = look1_iflf_binlca_16a
                (ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p, ((const
                   float32 *)&(KxACCR_n_ChillerRPMlookup_PerWup[0])), ((const
                   float32 *)&(KtACCR_n_ChillerRPMlookup_PerWup[0])), 3U);
        }
        else
        {
            if ((KeACCR_b_EXV_BattOT_RPM_Enbl) && rtb_AND_mh)
            {
                /* Switch: '<S284>/Switch2' incorporates:
                 *  Lookup_n-D: '<S300>/Vector'
                 *  Switch: '<S73>/Switch'
                 */
                rtb_Vector = look1_iflf_binlca_16a(Switch_l, ((const float32 *)
                    &(KxACCR_n_EXV_ChillerRPMlookup[0])), ((const float32 *)
                    &(KtACCR_n_EXV_ChillerRPMlookup[0])), 6U);
            }
        }

        /* Switch: '<S845>/Switch1' incorporates:
         *  Lookup_n-D: '<S302>/Vector'
         */
        rtb_Sum1_f = look2_ifbu8flf_binlca_16a((float32)i, rtb_Vector, ((const
            uint8 *)&(KxACCR_n_RPMLimitChargingLvlNVH[0])), ((const float32 *)
            &(KyACCR_n_RPMLimitChargingLvlNVH[0])), ((const float32 *)
            &(KtACCR_n_RPMLimitChargingLvlNVH[0])),
            ACCR_ac_ConstP.Vector_maxIndex, 2U);
    }
    else if ((ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_hn) &&
             (KeACCR_b_UseTPCRBattErr4CompSpd_PerWup))
    {
        /* Switch: '<S284>/Switch1' incorporates:
         *  Lookup_n-D: '<S298>/Vector'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
         *  Switch: '<S845>/Switch1'
         */
        rtb_Sum1_f = look1_iflf_binlca_16a
            (ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p, ((const float32
               *)&(KxACCR_n_ChillerRPMlookup_PerWup[0])), ((const float32 *)
              &(KtACCR_n_ChillerRPMlookup_PerWup[0])), 3U);
    }
    else if ((KeACCR_b_EXV_BattOT_RPM_Enbl) && rtb_AND_mh)
    {
        /* Switch: '<S284>/Switch2' incorporates:
         *  Lookup_n-D: '<S300>/Vector'
         *  Switch: '<S284>/Switch1'
         *  Switch: '<S73>/Switch'
         *  Switch: '<S845>/Switch1'
         */
        rtb_Sum1_f = look1_iflf_binlca_16a(Switch_l, ((const float32 *)
            &(KxACCR_n_EXV_ChillerRPMlookup[0])), ((const float32 *)
            &(KtACCR_n_EXV_ChillerRPMlookup[0])), 6U);
    }
    else
    {
        /* Switch: '<S845>/Switch1' incorporates:
         *  Switch: '<S284>/Switch1'
         *  Switch: '<S284>/Switch2'
         */
        rtb_Sum1_f = rtb_Vector;
    }

    /* End of Switch: '<S272>/Switch3' */

    /* Switch: '<S240>/Switch1' incorporates:
     *  Constant: '<S276>/Constant'
     *  Constant: '<S280>/Constant'
     *  Constant: '<S286>/Calib'
     *  Logic: '<S240>/Logical13'
     *  Logic: '<S240>/Logical14'
     *  Logic: '<S240>/Logical5'
     *  RelationalOperator: '<S240>/Comparison3'
     *  RelationalOperator: '<S240>/Comparison6'
     *  Switch: '<S283>/Switch1'
     */
    if (((((uint32)ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_h0) ==
            CePDTR_e_Dischrg_BatTempNotOpt) || ((((uint32)
            ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_h0) ==
            CePDTR_e_Dischrg_BatAndCab_Cndtn) &&
            (KeACCR_b_Dischrg_BatAndCabCndtn_En))) && rtb_Logical2_jm)
    {
        /* Switch: '<S283>/Switch1' incorporates:
         *  Constant: '<S293>/Calib'
         */
        if (ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ae)
        {
            rtb_Sum1_eo = KeACCR_n_DefaultChillerRPM;
        }
        else
        {
            rtb_Sum1_eo = rtb_Sum1_f;
        }

        /* Switch: '<S240>/Switch1' incorporates:
         *  Constant: '<S296>/Calib'
         *  MinMax: '<S240>/MinMax2'
         *  Sum: '<S240>/Sum'
         */
        VeACCR_n_CellOvertempRPM = fmaxf(rtb_Sum1_f, rtb_Sum1_eo) +
            KeACCR_n_RPMCompSpd_Boost;
    }
    else
    {
        if (ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ae)
        {
            /* Switch: '<S283>/Switch1' incorporates:
             *  Constant: '<S293>/Calib'
             */
            rtb_Sum1_eo = KeACCR_n_DefaultChillerRPM;
        }
        else
        {
            /* Switch: '<S283>/Switch1' */
            rtb_Sum1_eo = rtb_Sum1_f;
        }

        /* Switch: '<S240>/Switch1' incorporates:
         *  MinMax: '<S240>/MinMax2'
         */
        VeACCR_n_CellOvertempRPM = fmaxf(rtb_Sum1_f, rtb_Sum1_eo);
    }

    /* End of Switch: '<S240>/Switch1' */

    /* Switch: '<S281>/Switch1' incorporates:
     *  Constant: '<S274>/Constant'
     *  Constant: '<S275>/Constant'
     *  Constant: '<S285>/Calib'
     *  Constant: '<S290>/Calib'
     *  Constant: '<S291>/Calib'
     *  Logic: '<S240>/Logical2'
     *  Logic: '<S240>/Logical3'
     *  Logic: '<S240>/Logical4'
     *  Logic: '<S240>/LogicalOperator1'
     *  Logic: '<S240>/LogicalOperator2'
     *  Logic: '<S240>/LogicalOperator3'
     *  Logic: '<S240>/LogicalOperator4'
     *  RelationalOperator: '<S240>/Comparison1'
     *  RelationalOperator: '<S240>/Comparison2'
     *  Switch: '<S282>/Switch1'
     */
    if ((rtb_Logical2_jm && ((((uint32)
                               ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_h0)
           == CePDTR_e_Dischrg_ForcBatCool_Hys) || ((((uint32)
             ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_h0) ==
            CePDTR_e_Dischrg_BatTempNotOpt) && (KeACCR_b_BatTempNotOpt_Chk_En))))
        && ((VeACCR_b_NoBattClngSysFltsPrsnt) || (KeACCR_b_IgnrClngFltsBattOV)))
    {
        /* Switch: '<S281>/Switch1' incorporates:
         *  Constant: '<S295>/Calib'
         */
        VeACCR_n_RPMchiller = KeACCR_n_RPMCompSpd_Batt_OV;
    }
    else if (((KeACCR_b_IgnrClngFltsNrmlOp) || (VeACCR_b_NoBattClngSysFltsPrsnt))
             && rtb_Logical2_jm)
    {
        /* Switch: '<S240>/Switch' incorporates:
         *  Switch: '<S240>/Switch2'
         *  Switch: '<S282>/Switch1'
         */
        if (rtb_Logical8_nn)
        {
            /* Switch: '<S240>/Switch2' incorporates:
             *  Constant: '<S294>/Calib'
             */
            if (ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gc)
            {
                rtb_Sum1_eo = KeACCR_n_EXVPresSnsr_RA_RPM;
            }
            else
            {
                rtb_Sum1_eo = VeACCR_n_CellOvertempRPM;
            }

            /* Switch: '<S281>/Switch1' incorporates:
             *  MinMax: '<S240>/MinMax1'
             *  Switch: '<S240>/Switch'
             */
            VeACCR_n_RPMchiller = fmaxf(VeACCR_n_SDSTempErrRPM, rtb_Sum1_eo);
        }
        else if (ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gc)
        {
            /* Switch: '<S240>/Switch2' incorporates:
             *  Constant: '<S294>/Calib'
             *  Switch: '<S240>/Switch'
             *  Switch: '<S281>/Switch1'
             */
            VeACCR_n_RPMchiller = KeACCR_n_EXVPresSnsr_RA_RPM;
        }
        else
        {
            /* Switch: '<S281>/Switch1' incorporates:
             *  Switch: '<S240>/Switch'
             *  Switch: '<S240>/Switch2'
             */
            VeACCR_n_RPMchiller = VeACCR_n_CellOvertempRPM;
        }

        /* End of Switch: '<S240>/Switch' */
    }
    else
    {
        /* Switch: '<S281>/Switch1' incorporates:
         *  Constant: '<S240>/ConstantValue2'
         *  Switch: '<S282>/Switch1'
         */
        VeACCR_n_RPMchiller = 0.0F;
    }

    /* End of Switch: '<S281>/Switch1' */

    /* Switch: '<S809>/Switch1' incorporates:
     *  RelationalOperator: '<S800>/Comparison1'
     */
    if (VeACCR_b_ACOilMigStarted)
    {
        /* Switch: '<S809>/Switch1' incorporates:
         *  Constant: '<S815>/Calib'
         */
        VeACCR_n_RPMoilmig = KeACCR_n_ACOilMigRPM;
    }
    else
    {
        /* Switch: '<S809>/Switch1' incorporates:
         *  Constant: '<S800>/ConstantValue2'
         */
        VeACCR_n_RPMoilmig = 0.0F;
    }

    /* End of Switch: '<S809>/Switch1' */

    /* UnitDelay: '<S749>/UnitDelay' incorporates:
     *  Constant: '<S778>/Calib'
     *  Logic: '<S759>/LogicalOperator2'
     */
    rtb_Logical2_jm = (rtb_Logical1_n3o || (KeACCR_b_AllwHPboostdrngCool));

    /* Logic: '<S759>/LogicalOperator3' incorporates:
     *  Constant: '<S777>/Constant'
     *  RelationalOperator: '<S759>/RelationalOperator'
     */
    rtb_Logical8_nn = (((VeACCR_b_ACCompEnbl) && (((uint32)
                          ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_dk) ==
                         CeTHMR_e_HeatPump)) && rtb_Logical2_jm);

    /* Logic: '<S759>/LogicalOperator1' */
    rtb_Logical2_jm = ((rtb_Logical2_jm &&
                        (ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nc)) &&
                       (VeACCR_b_ACCompEnbl));

    /* Switch: '<S768>/Switch1' incorporates:
     *  Constant: '<S774>/Constant'
     *  Constant: '<S775>/Constant'
     *  Constant: '<S776>/Calib'
     *  Logic: '<S758>/LogicalOperator5'
     *  Logic: '<S771>/LogicalOperator'
     *  Logic: '<S771>/LogicalOperator1'
     *  Logic: '<S771>/LogicalOperator2'
     *  Logic: '<S771>/LogicalOperator3'
     *  Logic: '<S771>/LogicalOperator4'
     *  RelationalOperator: '<S771>/RelationalOperator'
     *  RelationalOperator: '<S771>/RelationalOperator1'
     */
    if (rtb_Logical4_f2 && ((rtb_Logical8_nn || rtb_Logical2_jm) &&
                            (((CeTHMR_e_ActiveCooling != ((uint32)
             ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cg)) && (((uint32)
             ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cg) !=
            CeTHMR_e_EmergencyCooling)) || (KeACCR_b_DsrgrdBattCond4CabNVH))))
    {
        /* Switch: '<S768>/Switch1' incorporates:
         *  Lookup_n-D: '<S769>/Vector'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
         */
        VeACCR_n_CompSpdLimHP_CabNVH = look2_iflf_binlca_16a
            (ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nq,
             ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_a, ((const float32
               *)&(KxACCR_n_CompSpdLim_HeatPumpNVH[0])), ((const float32 *)
              &(KyACCR_n_CompSpdLim_HeatPumpNVH[0])), ((const float32 *)
              &(KtACCR_n_CompSpdLim_HeatPumpNVH[0])), ACCR_ac_ConstP.pooled15,
             8U);
    }
    else
    {
        /* Switch: '<S768>/Switch1' incorporates:
         *  Constant: '<S763>/Calib'
         */
        VeACCR_n_CompSpdLimHP_CabNVH = KeACCR_n_HeatPumpMaxRPM;
    }

    /* End of Switch: '<S768>/Switch1' */

    /* Switch: '<S765>/Switch1' incorporates:
     *  Logic: '<S757>/LogicalOperator'
     */
    if (!rtb_Logical1_n3o)
    {
        /* Switch: '<S765>/Switch1' incorporates:
         *  Lookup_n-D: '<S767>/Vector'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
         */
        VeACCR_n_CompSpdLim_HPEvapFreeze = look1_iflf_binlca_16a
            (ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_g, ((const float32
               *)&(KxACCR_n_HPEvapFrzRPMLim[0])), ((const float32 *)
              &(KtACCR_n_HPEvapFrzRPMLim[0])), 6U);
    }
    else
    {
        /* Switch: '<S765>/Switch1' incorporates:
         *  Constant: '<S766>/Calib'
         */
        VeACCR_n_CompSpdLim_HPEvapFreeze = KeACCR_n_HeatPumpMaxRPM;
    }

    /* End of Switch: '<S765>/Switch1' */

    /* MinMax: '<S152>/MinMax' */
    VeACCR_n_RPMheatpumporDeice = fminf(VeACCR_n_CompSpdLimHP_CabNVH,
        VeACCR_n_CompSpdLim_HPEvapFreeze);

    /* Logic: '<S760>/LogicalOperator2' incorporates:
     *  Logic: '<S760>/LogicalOperator'
     */
    rtb_Logical1_n3o = !rtb_Logical8_nn;

    /* Switch: '<S787>/Switch' incorporates:
     *  Logic: '<S760>/LogicalOperator2'
     */
    if (rtb_Logical1_n3o)
    {
        /* Switch: '<S787>/Switch' incorporates:
         *  Constant: '<S782>/Calib'
         */
        rtb_Sum1_f = KeACCR_n_HeatPumpITermInit;
    }
    else
    {
        /* Switch: '<S787>/Switch3' incorporates:
         *  Constant: '<S760>/ConstantValue'
         *  Lookup_n-D: '<S785>/Vector'
         *  Product: '<S787>/Multiplication1'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
         */
        Switch_l = (ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_l *
                    look2_iflf_binlca_16a
                    (ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_l,
                     ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_a, ((const
                       float32 *)&(KxACCR_K_CompSpdHCCTISErrKi[0])), ((const
                       float32 *)&(KyACCR_K_CompSpdHCCTISErrKi[0])), ((const
                       float32 *)&(KtACCR_K_CompSpdHCCTISErrKi[0])),
                     ACCR_ac_ConstP.pooled15, 8U)) * 0.1F;

        /* Switch: '<S787>/Switch3' incorporates:
         *  Constant: '<S781>/Calib'
         *  Constant: '<S787>/ConstantValue3'
         *  Logic: '<S787>/Logical1'
         *  Logic: '<S787>/Logical2'
         *  RelationalOperator: '<S787>/Comparison1'
         *  RelationalOperator: '<S787>/Comparison3'
         *  UnitDelay: '<S787>/UnitDelay2'
         */
        if (((ACCR_ac_DW.UnitDelay2_DSTATE_d >= VeACCR_n_RPMheatpumporDeice) &&
                (Switch_l >= 0.0F)) && (KeACCR_b_HeatPumpItermHold))
        {
            /* Switch: '<S787>/Switch3' incorporates:
             *  Constant: '<S787>/ConstantValue2'
             */
            Switch_l = 0.0F;
        }

        /* End of Switch: '<S787>/Switch3' */

        /* Switch: '<S787>/Switch' incorporates:
         *  Sum: '<S787>/Sum_Sub'
         *  UnitDelay: '<S787>/UnitDelay'
         */
        rtb_Sum1_f = Switch_l + ACCR_ac_DW.UnitDelay_DSTATE_e;
    }

    /* End of Switch: '<S787>/Switch' */

    /* Outputs for Atomic SubSystem: '<S787>/integral_term' */
    /* Switch: '<S790>/Switch1' incorporates:
     *  RelationalOperator: '<S790>/RelationalOperator'
     */
    if (VeACCR_n_RPMheatpumporDeice < rtb_Sum1_f)
    {
        /* Switch: '<S845>/Switch1' */
        rtb_Sum1_f = VeACCR_n_RPMheatpumporDeice;
    }

    /* End of Switch: '<S790>/Switch1' */

    /* Switch: '<S790>/Switch' incorporates:
     *  Constant: '<S783>/Calib'
     *  RelationalOperator: '<S790>/RelationalOperator1'
     *  UnitDelay: '<S787>/UnitDelay'
     */
    if (rtb_Sum1_f > KeACCR_n_HeatPumpMinRPM)
    {
        ACCR_ac_DW.UnitDelay_DSTATE_e = rtb_Sum1_f;
    }
    else
    {
        ACCR_ac_DW.UnitDelay_DSTATE_e = KeACCR_n_HeatPumpMinRPM;
    }

    /* End of Switch: '<S790>/Switch' */
    /* End of Outputs for SubSystem: '<S787>/integral_term' */

    /* Switch: '<S792>/Switch1' incorporates:
     *  Constant: '<S784>/Calib'
     *  Constant: '<S788>/ConstantValue7'
     *  MinMax: '<S792>/Maximum'
     *  Product: '<S792>/Multiplication'
     *  Product: '<S792>/Multiplication1'
     *  Sum: '<S792>/Subtraction'
     *  Sum: '<S792>/Summation'
     *  UnitDelay: '<S792>/UnitDelay'
     */
    ACCR_ac_DW.UnitDelay_DSTATE_kk +=
        ((ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_l -
          ACCR_ac_DW.UnitDelay_DSTATE_kk) * 0.1F) * (1.0F / fmaxf
        (KeACCR_t_FltrDerivECHTISErr, 0.1F));

    /* Switch: '<S789>/Switch1' incorporates:
     *  Constant: '<S780>/Calib'
     */
    if (KeACCR_b_EnblFltrDerivECHTISErr)
    {
        /* Switch: '<S789>/Switch1' incorporates:
         *  UnitDelay: '<S792>/UnitDelay'
         */
        Switch_l = ACCR_ac_DW.UnitDelay_DSTATE_kk;
    }
    else
    {
        /* Switch: '<S789>/Switch1' */
        Switch_l = ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_l;
    }

    /* End of Switch: '<S789>/Switch1' */

    /* Switch: '<S787>/Switch1' incorporates:
     *  Constant: '<S760>/ConstantValue'
     *  Constant: '<S779>/Calib'
     *  Lookup_n-D: '<S786>/Vector'
     *  Product: '<S787>/Multiplication2'
     *  Product: '<S787>/derivative_term'
     *  Product: '<S787>/proportional_term'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
     *  Sum: '<S787>/Sum_Sub1'
     *  Sum: '<S787>/Sum_Sub2'
     *  Switch: '<S761>/Switch1'
     *  Switch: '<S762>/Switch1'
     *  UnitDelay: '<S787>/UnitDelay1'
     *  UnitDelay: '<S787>/UnitDelay2'
     */
    if (rtb_Logical8_nn)
    {
        /* Switch: '<S787>/Switch2' incorporates:
         *  Constant: '<S787>/ConstantValue1'
         *  Logic: '<S760>/LogicalOperator2'
         *  UnitDelay: '<S787>/UnitDelay'
         */
        if (rtb_Logical1_n3o)
        {
            rtb_Sum1_f = 0.0F;
        }
        else
        {
            rtb_Sum1_f = ACCR_ac_DW.UnitDelay_DSTATE_e;
        }

        /* End of Switch: '<S787>/Switch2' */
        ACCR_ac_DW.UnitDelay2_DSTATE_d = (((Switch_l -
            ACCR_ac_DW.UnitDelay1_DSTATE_a) * KeACCR_K_CompSpdHCCTISErrKd) /
            0.1F) + ((ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_l *
                      look2_iflf_binlca_16a
                      (ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_l,
                       ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_a, ((
                         const float32 *)&(KxACCR_K_CompSpdHCCTISErrKp[0])), ((
                         const float32 *)&(KyACCR_K_CompSpdHCCTISErrKp[0])), ((
                         const float32 *)&(KtACCR_K_CompSpdHCCTISErrKp[0])),
                       ACCR_ac_ConstP.pooled15, 8U)) + rtb_Sum1_f);

        /* Outputs for Atomic SubSystem: '<S787>/integral_term1' */
        /* Switch: '<S791>/Switch1' incorporates:
         *  Constant: '<S760>/ConstantValue'
         *  Constant: '<S779>/Calib'
         *  Lookup_n-D: '<S786>/Vector'
         *  Product: '<S787>/Multiplication2'
         *  Product: '<S787>/derivative_term'
         *  Product: '<S787>/proportional_term'
         *  RelationalOperator: '<S791>/RelationalOperator'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
         *  Sum: '<S787>/Sum_Sub1'
         *  Sum: '<S787>/Sum_Sub2'
         *  UnitDelay: '<S787>/UnitDelay1'
         *  UnitDelay: '<S787>/UnitDelay2'
         */
        if (VeACCR_n_RPMheatpumporDeice >= ACCR_ac_DW.UnitDelay2_DSTATE_d)
        {
            /* Switch: '<S791>/Switch1' */
            VeACCR_n_RPMheatpumporDeice = ACCR_ac_DW.UnitDelay2_DSTATE_d;
        }

        /* End of Switch: '<S791>/Switch1' */

        /* Switch: '<S791>/Switch' incorporates:
         *  Constant: '<S783>/Calib'
         *  RelationalOperator: '<S791>/RelationalOperator1'
         */
        if (VeACCR_n_RPMheatpumporDeice <= KeACCR_n_HeatPumpMinRPM)
        {
            /* Switch: '<S761>/Switch1' */
            VeACCR_n_RPMheatpumporDeice = KeACCR_n_HeatPumpMinRPM;
        }

        /* End of Switch: '<S791>/Switch' */
        /* End of Outputs for SubSystem: '<S787>/integral_term1' */
    }
    else if (rtb_Logical2_jm)
    {
        /* Switch: '<S762>/Switch1' incorporates:
         *  Constant: '<S764>/Calib'
         *  MinMax: '<S756>/MinMax'
         *  Switch: '<S761>/Switch1'
         */
        VeACCR_n_RPMheatpumporDeice = fminf(KeACCR_n_DeIceRPM_Default,
            VeACCR_n_RPMheatpumporDeice);
    }
    else
    {
        /* Switch: '<S761>/Switch1' incorporates:
         *  Constant: '<S152>/ConstantValue1'
         *  Switch: '<S762>/Switch1'
         */
        VeACCR_n_RPMheatpumporDeice = 0.0F;
    }

    /* End of Switch: '<S787>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S146>/EdgeRising' */
    /* Logic: '<S166>/AND' incorporates:
     *  Logic: '<S166>/OR1'
     *  UnitDelay: '<S146>/UnitDelay'
     *  UnitDelay: '<S166>/UnitDelay'
     */
    rtb_Logical2_jm = ((ACCR_ac_DW.UnitDelay_DSTATE_kf) &&
                       (!ACCR_ac_DW.UnitDelay_DSTATE_drl));

    /* Update for UnitDelay: '<S166>/UnitDelay' incorporates:
     *  UnitDelay: '<S146>/UnitDelay'
     */
    ACCR_ac_DW.UnitDelay_DSTATE_drl = ACCR_ac_DW.UnitDelay_DSTATE_kf;

    /* End of Outputs for SubSystem: '<S146>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S146>/TimerResetEnabled' */
    /* Switch: '<S188>/Switch1' incorporates:
     *  Constant: '<S146>/ConstantValue1'
     *  Constant: '<S182>/Calib'
     *  Constant: '<S188>/ConstantValue3'
     *  Constant: '<S188>/ConstantValue4'
     *  Logic: '<S188>/AND1'
     *  MinMax: '<S188>/Maximum'
     *  RelationalOperator: '<S188>/GreaterThan2'
     *  Sum: '<S188>/Subtraction'
     *  UnitDelay: '<S188>/UnitDelay'
     */
    if (rtb_Logical2_jm && (ACCR_ac_DW.UnitDelay_DSTATE_a <= 0.0F))
    {
        ACCR_ac_DW.UnitDelay_DSTATE_a = KeACCR_t_ACHiPrCutoffTime;
    }
    else
    {
        ACCR_ac_DW.UnitDelay_DSTATE_a = fmaxf(ACCR_ac_DW.UnitDelay_DSTATE_a -
            0.1F, 0.0F);
    }

    /* End of Switch: '<S188>/Switch1' */

    /* RelationalOperator: '<S188>/GreaterThan1' incorporates:
     *  Constant: '<S188>/ConstantValue2'
     *  UnitDelay: '<S188>/UnitDelay'
     */
    VeACCR_b_ACHiPrCutoffTimer = (ACCR_ac_DW.UnitDelay_DSTATE_a > 0.0F);

    /* End of Outputs for SubSystem: '<S146>/TimerResetEnabled' */

    /* Outputs for Atomic SubSystem: '<S146>/Hysteresis' */
    /* Switch: '<S167>/Switch1' incorporates:
     *  Constant: '<S177>/Calib'
     *  RelationalOperator: '<S167>/GreaterThan'
     */
    if (Product > KeACCR_p_ACHiPrDisengage)
    {
        /* Switch: '<S167>/Switch1' incorporates:
         *  Constant: '<S167>/ConstantValue'
         */
        VeACCR_b_ACOverPressure = true;
    }
    else
    {
        /* Switch: '<S167>/Switch1' incorporates:
         *  Constant: '<S178>/Calib'
         *  RelationalOperator: '<S167>/GreaterThan1'
         *  UnitDelay: '<S167>/UnitDelay'
         */
        VeACCR_b_ACOverPressure = ((Product >= KeACCR_p_ACHiPrEngage) &&
            (VeACCR_b_ACOverPressure));
    }

    /* End of Switch: '<S167>/Switch1' */
    /* End of Outputs for SubSystem: '<S146>/Hysteresis' */

    /* Lookup_n-D: '<S183>/Vector' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
     */
    rtb_Sum1_f = look1_iflf_binlca_16a
        (ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_a, ((const float32 *)
          &(KxACCR_p_Amb2SatPres[0])), ((const float32 *)&(KtACCR_p_Amb2SatPres
           [0])), 11U);

    /* Outputs for Atomic SubSystem: '<S146>/Hysteresis2' */
    /* Switch: '<S169>/Switch1' incorporates:
     *  Constant: '<S169>/ConstantValue'
     *  Constant: '<S181>/Calib'
     *  RelationalOperator: '<S169>/GreaterThan'
     *  RelationalOperator: '<S169>/GreaterThan1'
     *  Sum: '<S146>/Sum1'
     *  UnitDelay: '<S169>/UnitDelay'
     */
    if (Product > rtb_Sum1_f)
    {
        ACCR_ac_DW.UnitDelay_DSTATE_my = true;
    }
    else
    {
        ACCR_ac_DW.UnitDelay_DSTATE_my = ((Product >= (rtb_Sum1_f -
            KeACCR_p_SatLowPrDisengageHP)) && (ACCR_ac_DW.UnitDelay_DSTATE_my));
    }

    /* End of Switch: '<S169>/Switch1' */
    /* End of Outputs for SubSystem: '<S146>/Hysteresis2' */

    /* Outputs for Atomic SubSystem: '<S146>/Hysteresis1' */
    /* Switch: '<S168>/Switch1' incorporates:
     *  Constant: '<S168>/ConstantValue'
     *  Constant: '<S179>/Calib'
     *  Constant: '<S180>/Calib'
     *  RelationalOperator: '<S168>/GreaterThan'
     *  RelationalOperator: '<S168>/GreaterThan1'
     *  UnitDelay: '<S168>/UnitDelay'
     */
    if (Product > KeACCR_p_ACLowPrEngage)
    {
        ACCR_ac_DW.UnitDelay_DSTATE_mo = true;
    }
    else
    {
        ACCR_ac_DW.UnitDelay_DSTATE_mo = ((Product >= KeACCR_p_ACLowPrDisengage)
            && (ACCR_ac_DW.UnitDelay_DSTATE_mo));
    }

    /* End of Switch: '<S168>/Switch1' */
    /* End of Outputs for SubSystem: '<S146>/Hysteresis1' */

    /* Switch: '<S172>/Switch1' incorporates:
     *  UnitDelay: '<S146>/UnitDelay1'
     */
    if (ACCR_ac_DW.UnitDelay1_DSTATE_c)
    {
        /* Switch: '<S172>/Switch1' incorporates:
         *  Logic: '<S146>/Logical4'
         *  UnitDelay: '<S169>/UnitDelay'
         */
        VeACCR_b_ACLoPrCutoff = !ACCR_ac_DW.UnitDelay_DSTATE_my;
    }
    else
    {
        /* Switch: '<S172>/Switch1' incorporates:
         *  Logic: '<S146>/Logical1'
         *  UnitDelay: '<S168>/UnitDelay'
         */
        VeACCR_b_ACLoPrCutoff = !ACCR_ac_DW.UnitDelay_DSTATE_mo;
    }

    /* End of Switch: '<S172>/Switch1' */

    /* Logic: '<S146>/Logical2' */
    rtb_Logical1_n3o = (((VeACCR_b_ACHiPrCutoffTimer) ||
                         (VeACCR_b_ACOverPressure)) || (VeACCR_b_ACLoPrCutoff));

    /* Sum: '<S852>/Sum' incorporates:
     *  MinMax: '<S852>/MinMax3'
     */
    rtb_Sum1_f = fmaxf(VeACCR_n_RPMheatpumporDeice, VeACCR_n_RPMetc) +
        VeACCR_n_RPMchiller;

    /* Outputs for Atomic SubSystem: '<S852>/Limiter1' */
    /* Switch: '<S855>/Switch1' incorporates:
     *  Constant: '<S853>/Calib'
     *  RelationalOperator: '<S855>/RelationalOperator'
     */
    if (KeACCR_n_CompRPMmax < rtb_Sum1_f)
    {
        /* Switch: '<S845>/Switch1' */
        rtb_Sum1_f = KeACCR_n_CompRPMmax;
    }

    /* End of Switch: '<S855>/Switch1' */

    /* Switch: '<S855>/Switch' incorporates:
     *  Constant: '<S854>/Calib'
     *  RelationalOperator: '<S855>/RelationalOperator1'
     */
    if (rtb_Sum1_f > KeACCR_n_CompRPMmin)
    {
        /* Switch: '<S855>/Switch' */
        VeACCR_n_RPMrawlimited = rtb_Sum1_f;
    }
    else
    {
        /* Switch: '<S855>/Switch' */
        VeACCR_n_RPMrawlimited = KeACCR_n_CompRPMmin;
    }

    /* End of Switch: '<S855>/Switch' */
    /* End of Outputs for SubSystem: '<S852>/Limiter1' */

    /* Sum: '<S185>/Sum1' incorporates:
     *  Constant: '<S209>/Calib'
     */
    rtb_Sum1_eo = Product - KeACCR_p_ACPrTarget;

    /* Outputs for Atomic SubSystem: '<S164>/Hysteresis1' */
    /* Switch: '<S189>/Switch1' incorporates:
     *  Constant: '<S191>/Calib'
     *  RelationalOperator: '<S189>/GreaterThan'
     */
    if (Product > KeACCR_p_ACPresHiDtct_RSP)
    {
        /* Switch: '<S189>/Switch1' incorporates:
         *  Constant: '<S189>/ConstantValue'
         */
        VeACCR_b_ACPresHiDtct = true;
    }
    else
    {
        /* Switch: '<S189>/Switch1' incorporates:
         *  Constant: '<S190>/Calib'
         *  RelationalOperator: '<S189>/GreaterThan1'
         *  UnitDelay: '<S189>/UnitDelay'
         */
        VeACCR_b_ACPresHiDtct = ((Product >= KeACCR_p_ACPresHiDtct_LSP) &&
            (VeACCR_b_ACPresHiDtct));
    }

    /* End of Switch: '<S189>/Switch1' */
    /* End of Outputs for SubSystem: '<S164>/Hysteresis1' */

    /* Switch: '<S185>/Switch' incorporates:
     *  Constant: '<S202>/Calib'
     */
    rtb_Logical2_jm = ((!KeACCR_b_ACPresCtrlEna_HiPresDtct) ||
                       (VeACCR_b_ACPresHiDtct));

    /* Outputs for Atomic SubSystem: '<S185>/EdgeRising' */
    /* Logic: '<S198>/OR1' incorporates:
     *  UnitDelay: '<S198>/UnitDelay'
     */
    rtb_Logical4_f2 = !ACCR_ac_DW.UnitDelay_DSTATE_pxz;

    /* Update for UnitDelay: '<S198>/UnitDelay' */
    ACCR_ac_DW.UnitDelay_DSTATE_pxz = rtb_Logical2_jm;

    /* Outputs for Atomic SubSystem: '<S185>/PIDControl' */
    /* Switch: '<S211>/Switch' incorporates:
     *  Logic: '<S198>/AND'
     */
    if (rtb_Logical2_jm && rtb_Logical4_f2)
    {
        /* Switch: '<S211>/Switch' incorporates:
         *  Constant: '<S206>/Calib'
         */
        rtb_Sum1_f = KeACCR_n_PressureCntrl_IV;
    }
    else
    {
        /* Switch: '<S211>/Switch' incorporates:
         *  Constant: '<S200>/Calib'
         *  Constant: '<S203>/Calib'
         *  Product: '<S211>/Multiplication1'
         *  Sum: '<S211>/Sum_Sub'
         *  UnitDelay: '<S211>/UnitDelay'
         */
        rtb_Sum1_f = ((rtb_Sum1_eo * KeACCR_K_CompSpdvsPressureKi) *
                      KeACCR_dt_PressureCntrl) + ACCR_ac_DW.UnitDelay_DSTATE_px;
    }

    /* End of Switch: '<S211>/Switch' */
    /* End of Outputs for SubSystem: '<S185>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S211>/integral_term' */
    /* Switch: '<S212>/Switch1' incorporates:
     *  Constant: '<S207>/Calib'
     *  RelationalOperator: '<S212>/RelationalOperator'
     */
    if (KeACCR_n_PressureCntrl_MaxRPM < rtb_Sum1_f)
    {
        /* Switch: '<S845>/Switch1' */
        rtb_Sum1_f = KeACCR_n_PressureCntrl_MaxRPM;
    }

    /* End of Switch: '<S212>/Switch1' */

    /* Switch: '<S212>/Switch' incorporates:
     *  Constant: '<S208>/Calib'
     *  RelationalOperator: '<S212>/RelationalOperator1'
     *  UnitDelay: '<S211>/UnitDelay'
     */
    if (rtb_Sum1_f > KeACCR_n_PressureCntrl_MinRPM)
    {
        ACCR_ac_DW.UnitDelay_DSTATE_px = rtb_Sum1_f;
    }
    else
    {
        ACCR_ac_DW.UnitDelay_DSTATE_px = KeACCR_n_PressureCntrl_MinRPM;
    }

    /* End of Switch: '<S212>/Switch' */
    /* End of Outputs for SubSystem: '<S211>/integral_term' */

    /* Switch: '<S211>/Switch1' */
    if (rtb_Logical2_jm)
    {
        /* Switch: '<S211>/Switch1' incorporates:
         *  Constant: '<S199>/Calib'
         *  Constant: '<S201>/Calib'
         *  Constant: '<S203>/Calib'
         *  Product: '<S211>/Multiplication2'
         *  Product: '<S211>/derivative_term'
         *  Product: '<S211>/proportional_term'
         *  Sum: '<S211>/Sum_Sub1'
         *  Sum: '<S211>/Sum_Sub2'
         *  UnitDelay: '<S211>/UnitDelay'
         *  UnitDelay: '<S211>/UnitDelay1'
         */
        VeACCR_n_RPMacpPID_BG = (((rtb_Sum1_eo - ACCR_ac_DW.UnitDelay1_DSTATE_al)
            * KeACCR_K_CompSpdvsPressureKd) / KeACCR_dt_PressureCntrl) +
            ((rtb_Sum1_eo * KeACCR_K_CompSpdvsPressureKp) +
             ACCR_ac_DW.UnitDelay_DSTATE_px);
    }

    /* End of Switch: '<S211>/Switch1' */

    /* Update for UnitDelay: '<S211>/UnitDelay1' */
    ACCR_ac_DW.UnitDelay1_DSTATE_al = rtb_Sum1_eo;

    /* End of Outputs for SubSystem: '<S185>/PIDControl' */

    /* Outputs for Atomic SubSystem: '<S185>/Limiter' */
    /* Switch: '<S210>/Switch1' incorporates:
     *  Constant: '<S204>/Calib'
     *  RelationalOperator: '<S210>/RelationalOperator'
     */
    if (KeACCR_n_CompRPMmax < VeACCR_n_RPMacpPID_BG)
    {
        /* Switch: '<S845>/Switch1' */
        rtb_Sum1_f = KeACCR_n_CompRPMmax;
    }
    else
    {
        /* Switch: '<S845>/Switch1' */
        rtb_Sum1_f = VeACCR_n_RPMacpPID_BG;
    }

    /* End of Switch: '<S210>/Switch1' */

    /* Switch: '<S210>/Switch' incorporates:
     *  Constant: '<S205>/Calib'
     *  RelationalOperator: '<S210>/RelationalOperator1'
     */
    if (rtb_Sum1_f > KeACCR_n_CompRPMmin)
    {
        /* Switch: '<S210>/Switch' */
        VeACCR_n_RPMacpPID_AG = rtb_Sum1_f;
    }
    else
    {
        /* Switch: '<S210>/Switch' */
        VeACCR_n_RPMacpPID_AG = KeACCR_n_CompRPMmin;
    }

    /* End of Switch: '<S210>/Switch' */
    /* End of Outputs for SubSystem: '<S185>/Limiter' */

    /* Sum: '<S186>/Sum1' incorporates:
     *  Constant: '<S224>/Calib'
     */
    rtb_Sum1_eo = KeACCR_p_ACSuctnPrTarget -
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_k;

    /* Switch: '<S165>/Switch1' incorporates:
     *  Constant: '<S192>/Calib'
     *  RelationalOperator: '<S165>/GreaterThan'
     */
    if (ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_k >
            KeACCR_p_ACSucPresLoDtct_LSP)
    {
        /* Switch: '<S165>/Switch1' incorporates:
         *  Constant: '<S165>/ConstantValue'
         */
        VeACCR_b_ACSucPresLoDtct = false;
    }
    else
    {
        /* Switch: '<S165>/Switch1' incorporates:
         *  Constant: '<S193>/Calib'
         *  RelationalOperator: '<S165>/GreaterThan1'
         *  UnitDelay: '<S165>/UnitDelay'
         */
        VeACCR_b_ACSucPresLoDtct =
            ((ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_k <
              KeACCR_p_ACSucPresLoDtct_RSP) || (VeACCR_b_ACSucPresLoDtct));
    }

    /* End of Switch: '<S165>/Switch1' */

    /* Switch: '<S186>/Switch' incorporates:
     *  Constant: '<S217>/Calib'
     */
    rtb_Logical2_jm = ((!KeACCR_b_ACSucPresCtrlEna_LoPresDtct) ||
                       (VeACCR_b_ACSucPresLoDtct));

    /* Outputs for Atomic SubSystem: '<S186>/EdgeRising' */
    /* Logic: '<S213>/OR1' incorporates:
     *  UnitDelay: '<S213>/UnitDelay'
     */
    rtb_Logical4_f2 = !ACCR_ac_DW.UnitDelay_DSTATE_n4;

    /* Update for UnitDelay: '<S213>/UnitDelay' */
    ACCR_ac_DW.UnitDelay_DSTATE_n4 = rtb_Logical2_jm;

    /* Outputs for Atomic SubSystem: '<S186>/PIDControl' */
    /* Switch: '<S226>/Switch' incorporates:
     *  Logic: '<S213>/AND'
     */
    if (rtb_Logical2_jm && rtb_Logical4_f2)
    {
        /* Switch: '<S226>/Switch' incorporates:
         *  Constant: '<S221>/Calib'
         */
        rtb_Sum1_f = KeACCR_n_CmpSucPres_IV;
    }
    else
    {
        /* Switch: '<S226>/Switch' incorporates:
         *  Constant: '<S215>/Calib'
         *  Constant: '<S218>/Calib'
         *  Product: '<S226>/Multiplication1'
         *  Sum: '<S226>/Sum_Sub'
         *  UnitDelay: '<S226>/UnitDelay'
         */
        rtb_Sum1_f = ((rtb_Sum1_eo * KeACCR_K_CmpSucPres_Ki) *
                      KeACCR_dt_CmpSucPres) + ACCR_ac_DW.UnitDelay_DSTATE_b3;
    }

    /* End of Switch: '<S226>/Switch' */
    /* End of Outputs for SubSystem: '<S186>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S226>/integral_term' */
    /* Switch: '<S227>/Switch1' incorporates:
     *  Constant: '<S223>/Calib'
     *  RelationalOperator: '<S227>/RelationalOperator'
     */
    if (KeACCR_n_CmpSucPres_MxRPM < rtb_Sum1_f)
    {
        /* Switch: '<S845>/Switch1' */
        rtb_Sum1_f = KeACCR_n_CmpSucPres_MxRPM;
    }

    /* End of Switch: '<S227>/Switch1' */

    /* Switch: '<S227>/Switch' incorporates:
     *  Constant: '<S222>/Calib'
     *  RelationalOperator: '<S227>/RelationalOperator1'
     *  UnitDelay: '<S226>/UnitDelay'
     */
    if (rtb_Sum1_f > KeACCR_n_CmpSucPres_MnRPM)
    {
        ACCR_ac_DW.UnitDelay_DSTATE_b3 = rtb_Sum1_f;
    }
    else
    {
        ACCR_ac_DW.UnitDelay_DSTATE_b3 = KeACCR_n_CmpSucPres_MnRPM;
    }

    /* End of Switch: '<S227>/Switch' */
    /* End of Outputs for SubSystem: '<S226>/integral_term' */

    /* Switch: '<S226>/Switch1' */
    if (rtb_Logical2_jm)
    {
        /* Switch: '<S226>/Switch1' incorporates:
         *  Constant: '<S214>/Calib'
         *  Constant: '<S216>/Calib'
         *  Constant: '<S218>/Calib'
         *  Product: '<S226>/Multiplication2'
         *  Product: '<S226>/derivative_term'
         *  Product: '<S226>/proportional_term'
         *  Sum: '<S226>/Sum_Sub1'
         *  Sum: '<S226>/Sum_Sub2'
         *  UnitDelay: '<S226>/UnitDelay'
         *  UnitDelay: '<S226>/UnitDelay1'
         */
        VeACCR_n_RPMacpSuctnPID_BG = (((rtb_Sum1_eo -
            ACCR_ac_DW.UnitDelay1_DSTATE_ej) * KeACCR_K_CmpSucPres_Kd) /
            KeACCR_dt_CmpSucPres) + ((rtb_Sum1_eo * KeACCR_K_CmpSucPres_Kp) +
            ACCR_ac_DW.UnitDelay_DSTATE_b3);
    }

    /* End of Switch: '<S226>/Switch1' */

    /* Update for UnitDelay: '<S226>/UnitDelay1' */
    ACCR_ac_DW.UnitDelay1_DSTATE_ej = rtb_Sum1_eo;

    /* End of Outputs for SubSystem: '<S186>/PIDControl' */

    /* Switch: '<S146>/Switch1' incorporates:
     *  Constant: '<S174>/Calib'
     */
    if (KeACCR_b_PressurePIDCntrl_En)
    {
        /* Switch: '<S170>/Switch1' incorporates:
         *  Constant: '<S220>/Calib'
         *  RelationalOperator: '<S225>/RelationalOperator'
         *  Switch: '<S225>/Switch1'
         */
        if (rtb_Logical1_n3o)
        {
            /* Switch: '<S146>/Switch1' incorporates:
             *  Constant: '<S146>/ConstantValue2'
             *  Switch: '<S170>/Switch1'
             */
            VeACCR_n_RPMacpPID_AD = 0.0F;
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S186>/Limiter' */
            if (KeACCR_n_CmpSucPres_FinMx < VeACCR_n_RPMacpSuctnPID_BG)
            {
                /* Switch: '<S225>/Switch1' incorporates:
                 *  Constant: '<S220>/Calib'
                 */
                rtb_Sum1_f = KeACCR_n_CmpSucPres_FinMx;
            }
            else
            {
                /* Switch: '<S225>/Switch1' */
                rtb_Sum1_f = VeACCR_n_RPMacpSuctnPID_BG;
            }

            /* Switch: '<S225>/Switch' incorporates:
             *  Constant: '<S219>/Calib'
             *  RelationalOperator: '<S225>/RelationalOperator1'
             */
            if (rtb_Sum1_f <= KeACCR_n_CmpSucPres_FinMn)
            {
                rtb_Sum1_f = KeACCR_n_CmpSucPres_FinMn;
            }

            /* End of Switch: '<S225>/Switch' */
            /* End of Outputs for SubSystem: '<S186>/Limiter' */

            /* Switch: '<S146>/Switch1' incorporates:
             *  Sum: '<S146>/Sum'
             *  Switch: '<S170>/Switch1'
             */
            VeACCR_n_RPMacpPID_AD = VeACCR_n_RPMacpPID_AG + rtb_Sum1_f;
        }

        /* End of Switch: '<S170>/Switch1' */
    }
    else
    {
        /* Switch: '<S146>/Switch1' incorporates:
         *  Constant: '<S175>/Calib'
         */
        VeACCR_n_RPMacpPID_AD = KeACCR_n_RPMacpPID_Dial;
    }

    /* End of Switch: '<S146>/Switch1' */

    /* Logic: '<S187>/Logical2' incorporates:
     *  Constant: '<S230>/Calib'
     *  Logic: '<S187>/Logical3'
     *  RelationalOperator: '<S187>/Comparison3'
     */
    rtb_Logical2_jm = ((!VeACCR_b_ACHiPrRetractActive) && (Product >=
                        KeACCR_p_ACHiPrRetract));

    /* Outputs for Atomic SubSystem: '<S187>/EdgeRising' */
    /* Logic: '<S228>/AND' incorporates:
     *  Logic: '<S228>/OR1'
     *  UnitDelay: '<S228>/UnitDelay'
     */
    rtb_Logical4_f2 = (rtb_Logical2_jm && (!ACCR_ac_DW.UnitDelay_DSTATE_jj));

    /* Update for UnitDelay: '<S228>/UnitDelay' */
    ACCR_ac_DW.UnitDelay_DSTATE_jj = rtb_Logical2_jm;

    /* End of Outputs for SubSystem: '<S187>/EdgeRising' */

    /* Outputs for Enabled SubSystem: '<S187>/Set_retract_RPM' incorporates:
     *  EnablePort: '<S232>/Enable'
     */
    if (rtb_Logical4_f2)
    {
        /* Inport: '<S232>/Input_Parameter' incorporates:
         *  Constant: '<S229>/Calib'
         *  Sum: '<S187>/Sum3'
         */
        VeACCR_n_RPMretract = ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_o
            - KeACCR_n_RPMACHiPrRetract;
    }

    /* End of Outputs for SubSystem: '<S187>/Set_retract_RPM' */

    /* Outputs for Atomic SubSystem: '<S187>/TmrRstEnabled' */
    /* Switch: '<S233>/Switch1' incorporates:
     *  Constant: '<S146>/ConstantValue1'
     *  Constant: '<S231>/Calib'
     *  Constant: '<S233>/ConstantValue3'
     *  Constant: '<S233>/ConstantValue4'
     *  Logic: '<S233>/AND1'
     *  MinMax: '<S233>/Maximum'
     *  RelationalOperator: '<S233>/GreaterThan2'
     *  Sum: '<S233>/Subtraction'
     *  UnitDelay: '<S233>/UnitDelay'
     */
    if (rtb_Logical4_f2 && (ACCR_ac_DW.UnitDelay_DSTATE_nq <= 0.0F))
    {
        ACCR_ac_DW.UnitDelay_DSTATE_nq = KeACCR_t_ACHiPrRetractTime;
    }
    else
    {
        ACCR_ac_DW.UnitDelay_DSTATE_nq = fmaxf(ACCR_ac_DW.UnitDelay_DSTATE_nq -
            0.1F, 0.0F);
    }

    /* End of Switch: '<S233>/Switch1' */

    /* RelationalOperator: '<S233>/GreaterThan1' incorporates:
     *  Constant: '<S233>/ConstantValue2'
     *  UnitDelay: '<S233>/UnitDelay'
     */
    VeACCR_b_ACHiPrRetractActive = (ACCR_ac_DW.UnitDelay_DSTATE_nq > 0.0F);

    /* End of Outputs for SubSystem: '<S187>/TmrRstEnabled' */

    /* Switch: '<S173>/Switch1' incorporates:
     *  Switch: '<S171>/Switch1'
     */
    if (rtb_Logical1_n3o)
    {
        /* Switch: '<S173>/Switch1' incorporates:
         *  Constant: '<S146>/ConstantValue3'
         */
        VeACCR_n_RPMacp = 0.0F;
    }
    else if (VeACCR_b_ACHiPrRetractActive)
    {
        /* Switch: '<S171>/Switch1' incorporates:
         *  Switch: '<S173>/Switch1'
         */
        VeACCR_n_RPMacp = VeACCR_n_RPMretract;
    }
    else
    {
        /* Switch: '<S173>/Switch1' incorporates:
         *  Constant: '<S110>/Calib'
         *  Switch: '<S171>/Switch1'
         */
        VeACCR_n_RPMacp = KeACCR_n_CompRPMmax;
    }

    /* End of Switch: '<S173>/Switch1' */

    /* Switch: '<S146>/Switch' incorporates:
     *  Constant: '<S174>/Calib'
     */
    if (KeACCR_b_PressurePIDCntrl_En)
    {
        /* Switch: '<S146>/Switch' incorporates:
         *  Constant: '<S176>/Calib'
         */
        VeACCR_n_RPMacp_AD = KeACCR_n_RPMacp_Dial;
    }
    else
    {
        /* Switch: '<S146>/Switch' */
        VeACCR_n_RPMacp_AD = VeACCR_n_RPMacp;
    }

    /* End of Switch: '<S146>/Switch' */

    /* Switch: '<S162>/Switch' incorporates:
     *  Constant: '<S849>/Calib'
     */
    if (KeACCR_b_ComRPM_acp_PIDsum_SD)
    {
        /* Switch: '<S162>/Switch' */
        VeACCR_p_ACpressure_PID = VeACCR_n_RPMacpPID_AD;
    }
    else
    {
        /* Switch: '<S162>/Switch' */
        VeACCR_p_ACpressure_PID = VeACCR_n_RPMacp_AD;
    }

    /* End of Switch: '<S162>/Switch' */

    /* Sum: '<S158>/Sum1' incorporates:
     *  Lookup_n-D: '<S831>/Vector'
     *  Switch: '<S79>/Switch'
     */
    rtb_Sum1_eo = ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_o3 -
        look1_iflf_binlca_16a(Switch_j, ((const float32 *)
        &(KxACCR_T_PPCTISTempTgtVehSpd[0])), ((const float32 *)
        &(KtACCR_T_PPCTISTempTgtVehSpd[0])), 4U);

    /* Outputs for Atomic SubSystem: '<S158>/EdgeRising' */
    /* Logic: '<S819>/AND' incorporates:
     *  Constant: '<S823>/Calib'
     *  Logic: '<S819>/OR1'
     *  UnitDelay: '<S819>/UnitDelay'
     */
    rtb_Logical2_jm = ((KeACCR_b_PPCTISTempCtrl_Ena) &&
                       (!ACCR_ac_DW.UnitDelay_DSTATE_is));

    /* Update for UnitDelay: '<S819>/UnitDelay' incorporates:
     *  Constant: '<S823>/Calib'
     */
    ACCR_ac_DW.UnitDelay_DSTATE_is = KeACCR_b_PPCTISTempCtrl_Ena;

    /* End of Outputs for SubSystem: '<S158>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S158>/PIDControl' */
    /* Switch: '<S833>/Switch' incorporates:
     *  Constant: '<S824>/Calib'
     *  Logic: '<S158>/OR'
     *  RelationalOperator: '<S158>/GreaterThan'
     */
    if (rtb_Logical2_jm || (rtb_Sum1_eo < KeACCR_dT_PPCTISTempErrThres))
    {
        /* Switch: '<S833>/Switch' incorporates:
         *  Constant: '<S828>/Calib'
         */
        rtb_Sum1_f = KeACCR_n_PPCTISTempCtrl_IV;
    }
    else
    {
        /* Switch: '<S833>/Switch' incorporates:
         *  Constant: '<S821>/Calib'
         *  Constant: '<S825>/Calib'
         *  Product: '<S833>/Multiplication1'
         *  Sum: '<S833>/Sum_Sub'
         *  UnitDelay: '<S833>/UnitDelay'
         */
        rtb_Sum1_f = ((rtb_Sum1_eo * KeACCR_K_CompSpdvsPPCTISKi) *
                      KeACCR_dt_PPCTISTempCtrl) + ACCR_ac_DW.UnitDelay_DSTATE_lh;
    }

    /* End of Switch: '<S833>/Switch' */

    /* Outputs for Atomic SubSystem: '<S833>/integral_term' */
    /* Switch: '<S834>/Switch1' incorporates:
     *  Constant: '<S829>/Calib'
     *  RelationalOperator: '<S834>/RelationalOperator'
     */
    if (KeACCR_n_PPCTISTempCtrl_MaxRPM < rtb_Sum1_f)
    {
        /* Switch: '<S845>/Switch1' */
        rtb_Sum1_f = KeACCR_n_PPCTISTempCtrl_MaxRPM;
    }

    /* End of Switch: '<S834>/Switch1' */

    /* Switch: '<S834>/Switch' incorporates:
     *  Constant: '<S830>/Calib'
     *  RelationalOperator: '<S834>/RelationalOperator1'
     *  UnitDelay: '<S833>/UnitDelay'
     */
    if (rtb_Sum1_f > KeACCR_n_PPCTISTempCtrl_MinRPM)
    {
        ACCR_ac_DW.UnitDelay_DSTATE_lh = rtb_Sum1_f;
    }
    else
    {
        ACCR_ac_DW.UnitDelay_DSTATE_lh = KeACCR_n_PPCTISTempCtrl_MinRPM;
    }

    /* End of Switch: '<S834>/Switch' */
    /* End of Outputs for SubSystem: '<S833>/integral_term' */

    /* Switch: '<S833>/Switch1' incorporates:
     *  Constant: '<S820>/Calib'
     *  Constant: '<S822>/Calib'
     *  Constant: '<S823>/Calib'
     *  Constant: '<S825>/Calib'
     *  Product: '<S833>/Multiplication2'
     *  Product: '<S833>/derivative_term'
     *  Product: '<S833>/proportional_term'
     *  Sum: '<S833>/Sum_Sub1'
     *  Sum: '<S833>/Sum_Sub2'
     *  UnitDelay: '<S833>/UnitDelay'
     *  UnitDelay: '<S833>/UnitDelay1'
     *  UnitDelay: '<S833>/UnitDelay2'
     */
    if (KeACCR_b_PPCTISTempCtrl_Ena)
    {
        ACCR_ac_DW.UnitDelay2_DSTATE_i = (((rtb_Sum1_eo -
            ACCR_ac_DW.UnitDelay1_DSTATE_f) * KeACCR_K_CompSpdvsPPCTISKd) /
            KeACCR_dt_PPCTISTempCtrl) + ((rtb_Sum1_eo *
            KeACCR_K_CompSpdvsPPCTISKp) + ACCR_ac_DW.UnitDelay_DSTATE_lh);
    }

    /* End of Switch: '<S833>/Switch1' */

    /* Update for UnitDelay: '<S833>/UnitDelay1' */
    ACCR_ac_DW.UnitDelay1_DSTATE_f = rtb_Sum1_eo;

    /* End of Outputs for SubSystem: '<S158>/PIDControl' */

    /* Outputs for Atomic SubSystem: '<S158>/Limiter' */
    /* Switch: '<S832>/Switch1' incorporates:
     *  Constant: '<S826>/Calib'
     *  RelationalOperator: '<S832>/RelationalOperator'
     *  UnitDelay: '<S833>/UnitDelay2'
     */
    if (KeACCR_n_CompRPMmax < ACCR_ac_DW.UnitDelay2_DSTATE_i)
    {
        /* Switch: '<S845>/Switch1' */
        rtb_Sum1_f = KeACCR_n_CompRPMmax;
    }
    else
    {
        /* Switch: '<S845>/Switch1' */
        rtb_Sum1_f = ACCR_ac_DW.UnitDelay2_DSTATE_i;
    }

    /* End of Switch: '<S832>/Switch1' */

    /* Switch: '<S832>/Switch' incorporates:
     *  Constant: '<S827>/Calib'
     *  RelationalOperator: '<S832>/RelationalOperator1'
     */
    if (rtb_Sum1_f > KeACCR_n_CompRPMmin)
    {
        /* Switch: '<S832>/Switch' */
        VeACCR_n_PPCTISTempCtrlRPM = rtb_Sum1_f;
    }
    else
    {
        /* Switch: '<S832>/Switch' */
        VeACCR_n_PPCTISTempCtrlRPM = KeACCR_n_CompRPMmin;
    }

    /* End of Switch: '<S832>/Switch' */
    /* End of Outputs for SubSystem: '<S158>/Limiter' */

    /* Sum: '<S852>/Sum2' incorporates:
     *  Sum: '<S852>/Sum1'
     */
    VeACCR_n_RPMrawfinal = (VeACCR_n_RPMrawlimited - VeACCR_p_ACpressure_PID) -
        VeACCR_n_PPCTISTempCtrlRPM;

    /* Logic: '<S149>/Logical2' incorporates:
     *  Logic: '<S149>/Logical3'
     */
    rtb_Logical2_jm = ((!VeACCR_b_CompSpdIncActive) &&
                       (ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_a0));

    /* Outputs for Atomic SubSystem: '<S149>/EdgeRising' */
    /* Logic: '<S306>/AND' incorporates:
     *  Logic: '<S306>/OR1'
     *  UnitDelay: '<S306>/UnitDelay'
     */
    rtb_Logical4_f2 = (rtb_Logical2_jm && (!ACCR_ac_DW.UnitDelay_DSTATE_at));

    /* Update for UnitDelay: '<S306>/UnitDelay' */
    ACCR_ac_DW.UnitDelay_DSTATE_at = rtb_Logical2_jm;

    /* End of Outputs for SubSystem: '<S149>/EdgeRising' */

    /* Outputs for Enabled SubSystem: '<S149>/Set_RPM_Inc' incorporates:
     *  EnablePort: '<S311>/Enable'
     */
    if (rtb_Logical4_f2)
    {
        /* Inport: '<S311>/Input_Parameter' incorporates:
         *  Constant: '<S309>/Calib'
         *  Sum: '<S149>/Sum3'
         */
        VeACCR_n_RPMprotISet =
            ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_o +
            KeACCR_n_RPMCompSpdInc;
    }

    /* End of Outputs for SubSystem: '<S149>/Set_RPM_Inc' */

    /* Outputs for Atomic SubSystem: '<S149>/TimerResetEnabled' */
    /* Switch: '<S313>/Switch1' incorporates:
     *  Constant: '<S149>/ConstantValue1'
     *  Constant: '<S310>/Calib'
     *  Constant: '<S313>/ConstantValue3'
     *  Constant: '<S313>/ConstantValue4'
     *  Logic: '<S313>/AND1'
     *  MinMax: '<S313>/Maximum'
     *  RelationalOperator: '<S313>/GreaterThan2'
     *  Sum: '<S313>/Subtraction'
     *  UnitDelay: '<S313>/UnitDelay'
     */
    if (rtb_Logical4_f2 && (ACCR_ac_DW.UnitDelay_DSTATE_c5 <= 0.0F))
    {
        ACCR_ac_DW.UnitDelay_DSTATE_c5 = KeACCR_t_CompSpdIncTime;
    }
    else
    {
        ACCR_ac_DW.UnitDelay_DSTATE_c5 = fmaxf(ACCR_ac_DW.UnitDelay_DSTATE_c5 -
            0.1F, 0.0F);
    }

    /* End of Switch: '<S313>/Switch1' */

    /* RelationalOperator: '<S313>/GreaterThan1' incorporates:
     *  Constant: '<S313>/ConstantValue2'
     *  UnitDelay: '<S313>/UnitDelay'
     */
    VeACCR_b_CompSpdIncActive = (ACCR_ac_DW.UnitDelay_DSTATE_c5 > 0.0F);

    /* End of Outputs for SubSystem: '<S149>/TimerResetEnabled' */

    /* Switch: '<S307>/Switch1' incorporates:
     *  Switch: '<S308>/Switch1'
     */
    if (VeACCR_b_CompSpdIncActive)
    {
        /* Switch: '<S307>/Switch1' */
        VeACCR_n_RPMprotI = VeACCR_n_RPMprotISet;
    }
    else if (ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_a0)
    {
        /* Switch: '<S308>/Switch1' incorporates:
         *  Switch: '<S307>/Switch1'
         *  UnitDelay: '<S149>/UnitDelay1'
         */
        VeACCR_n_RPMprotI = ACCR_ac_DW.UnitDelay1_DSTATE_o;
    }
    else
    {
        /* Switch: '<S307>/Switch1' incorporates:
         *  Constant: '<S149>/ConstantValue3'
         *  Switch: '<S308>/Switch1'
         */
        VeACCR_n_RPMprotI = 0.0F;
    }

    /* End of Switch: '<S307>/Switch1' */

    /* MinMax: '<S852>/MinMax' */
    VeACCR_n_RPMhigh = fmaxf(fmaxf(VeACCR_n_RPMrawfinal, VeACCR_n_RPMoilmig),
        VeACCR_n_RPMprotI);

    /* Switch: '<S162>/Switch1' incorporates:
     *  Constant: '<S850>/Calib'
     */
    if (KeACCR_b_CompRPM_acpMin_SD)
    {
        /* Switch: '<S162>/Switch1' */
        VeACCR_p_ACpressureold = VeACCR_n_RPMacpPID_AD;
    }
    else
    {
        /* Switch: '<S162>/Switch1' */
        VeACCR_p_ACpressureold = VeACCR_n_RPMacp_AD;
    }

    /* End of Switch: '<S162>/Switch1' */

    /* Switch: '<S842>/Switch1' incorporates:
     *  RelationalOperator: '<S160>/Comparison9'
     */
    if (Switch_n)
    {
        /* Switch: '<S842>/Switch1' incorporates:
         *  Constant: '<S111>/Calib'
         */
        VeACCR_n_RPMFrntEvapShutoffVlv = KeACCR_n_FtERVShutMaxRPM;
    }
    else
    {
        /* Switch: '<S842>/Switch1' incorporates:
         *  Constant: '<S110>/Calib'
         */
        VeACCR_n_RPMFrntEvapShutoffVlv = KeACCR_n_CompRPMmax;
    }

    /* End of Switch: '<S842>/Switch1' */

    /* Switch: '<S841>/Switch1' incorporates:
     *  RelationalOperator: '<S160>/Comparison1'
     */
    if (ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_g5)
    {
        /* Switch: '<S841>/Switch1' incorporates:
         *  Constant: '<S108>/Calib'
         */
        VeACCR_n_RPMChlrVlvOpen = KeACCR_n_ChillerVlvOpenMaxRPM;
    }
    else
    {
        /* Switch: '<S841>/Switch1' incorporates:
         *  Constant: '<S110>/Calib'
         */
        VeACCR_n_RPMChlrVlvOpen = KeACCR_n_CompRPMmax;
    }

    /* End of Switch: '<S841>/Switch1' */

    /* MinMax: '<S160>/MinMax' */
    VeACCR_n_RPMvalve = fminf(VeACCR_n_RPMFrntEvapShutoffVlv,
        VeACCR_n_RPMChlrVlvOpen);

    /* Switch: '<S159>/Switch' incorporates:
     *  Constant: '<S838>/Calib'
     */
    if (KeACCR_b_PwrBdgtDstb_Slct)
    {
        /* Switch: '<S159>/Switch' */
        rtb_Sum1_f = ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_j;
    }
    else
    {
        /* Switch: '<S159>/Switch' */
        rtb_Sum1_f = ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ig;
    }

    /* End of Switch: '<S159>/Switch' */

    /* Lookup_n-D: '<S840>/Vector' incorporates:
     *  Product: '<S6>/Product'
     *  Switch: '<S159>/Switch'
     */
    VeACCR_n_RPMpwrbudget_Raw = look2_iflf_binlca_16a(Product, rtb_Sum1_f, ((
        const float32 *)&(KxACCR_n_PWRbudgetRPMlookup[0])), ((const float32 *)
        &(KyACCR_n_PWRbudgetRPMlookup[0])), ((const float32 *)
        &(KtACCR_n_PWRbudgetRPMlookup[0])), ACCR_ac_ConstP.Vector_maxIndex_i, 5U);

    /* Outputs for Atomic SubSystem: '<S159>/Hysteresis2' */
    /* Switch: '<S835>/Switch1' incorporates:
     *  Constant: '<S836>/Calib'
     *  RelationalOperator: '<S835>/GreaterThan'
     */
    if (rtb_Sum1_f > KeACCR_P_PWRbudget_MinHi)
    {
        /* Switch: '<S835>/Switch1' incorporates:
         *  Constant: '<S835>/ConstantValue'
         */
        VeACCR_b_RPM_PwrBdgtComp_On = true;
    }
    else
    {
        /* Switch: '<S835>/Switch1' incorporates:
         *  Constant: '<S837>/Calib'
         *  RelationalOperator: '<S835>/GreaterThan1'
         *  UnitDelay: '<S835>/UnitDelay'
         */
        VeACCR_b_RPM_PwrBdgtComp_On = ((rtb_Sum1_f >= KeACCR_P_PWRbudget_MinLo) &&
            (VeACCR_b_RPM_PwrBdgtComp_On));
    }

    /* End of Switch: '<S835>/Switch1' */
    /* End of Outputs for SubSystem: '<S159>/Hysteresis2' */

    /* Switch: '<S159>/Switch4' */
    if (VeACCR_b_RPM_PwrBdgtComp_On)
    {
        /* Switch: '<S159>/Switch4' */
        VeACCR_n_RPMpwrbudget_AS = VeACCR_n_RPMpwrbudget_Raw;
    }
    else
    {
        /* Switch: '<S159>/Switch4' incorporates:
         *  Constant: '<S839>/Calib'
         */
        VeACCR_n_RPMpwrbudget_AS = KeACCR_n_RPM_PwrBdgtComp_Off;
    }

    /* End of Switch: '<S159>/Switch4' */

    /* Switch: '<S316>/Switch1' incorporates:
     *  Constant: '<S314>/Constant'
     *  RelationalOperator: '<S312>/Comparison4'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
     *  Switch: '<S316>/Switch2'
     */
    if (VeACCR_b_CompSpdIncActive)
    {
        /* Switch: '<S316>/Switch1' incorporates:
         *  Constant: '<S110>/Calib'
         */
        VeACCR_n_RPMprotD_App1 = KeACCR_n_CompRPMmax;
    }
    else if (((uint32)ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_md) ==
             CeTAIR_e_Degraded)
    {
        /* Switch: '<S316>/Switch2' incorporates:
         *  Switch: '<S316>/Switch1'
         */
        VeACCR_n_RPMprotD_App1 =
            ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_o;
    }
    else
    {
        /* Switch: '<S316>/Switch1' incorporates:
         *  Constant: '<S110>/Calib'
         *  Switch: '<S316>/Switch2'
         */
        VeACCR_n_RPMprotD_App1 = KeACCR_n_CompRPMmax;
    }

    /* End of Switch: '<S316>/Switch1' */

    /* Switch: '<S119>/Switch' incorporates:
     *  Constant: '<S155>/Calib'
     */
    if (KeACCR_b_CompRPM_SlctCal)
    {
        /* Switch: '<S119>/Switch' incorporates:
         *  Constant: '<S156>/Calib'
         */
        VeACCR_n_RPMfault_app2 = KeACCR_n_CompRPMdefault;
    }
    else
    {
        /* Switch: '<S119>/Switch' incorporates:
         *  Constant: '<S110>/Calib'
         */
        VeACCR_n_RPMfault_app2 = KeACCR_n_CompRPMmax;
    }

    /* End of Switch: '<S119>/Switch' */

    /* Switch: '<S315>/Switch2' incorporates:
     *  Switch: '<S315>/Switch1'
     */
    if (VeACCR_b_CompSpdIncActive)
    {
        /* Switch: '<S315>/Switch1' incorporates:
         *  Constant: '<S110>/Calib'
         */
        VeACCR_n_RPMprotD_App2 = KeACCR_n_CompRPMmax;
    }
    else
    {
        /* Switch: '<S315>/Switch1' */
        VeACCR_n_RPMprotD_App2 = VeACCR_n_RPMfault_app2;
    }

    /* End of Switch: '<S315>/Switch2' */

    /* Switch: '<S312>/Switch' incorporates:
     *  Constant: '<S154>/Calib'
     */
    if (KeACCR_b_CompRPM_SlctApp)
    {
        /* Switch: '<S312>/Switch' */
        VeACCR_n_RPMprotD = VeACCR_n_RPMprotD_App1;
    }
    else
    {
        /* Switch: '<S312>/Switch' */
        VeACCR_n_RPMprotD = VeACCR_n_RPMprotD_App2;
    }

    /* End of Switch: '<S312>/Switch' */

    /* Logic: '<S153>/Logical1' incorporates:
     *  Constant: '<S794>/Calib'
     */
    VeACCR_b_REMcompallowed = ((KeACCR_b_REMobey) && Switch_h);

    /* Switch: '<S793>/Switch1' incorporates:
     *  Constant: '<S794>/Calib'
     *  Logic: '<S153>/Logical2'
     *  Switch: '<S793>/Switch2'
     */
    if (!KeACCR_b_REMobey)
    {
        /* Switch: '<S793>/Switch1' incorporates:
         *  Constant: '<S110>/Calib'
         */
        VeACCR_n_RPMinplant = KeACCR_n_CompRPMmax;
    }
    else if (VeACCR_b_REMcompallowed)
    {
        /* Switch: '<S793>/Switch2' incorporates:
         *  Constant: '<S110>/Calib'
         *  Switch: '<S793>/Switch1'
         */
        VeACCR_n_RPMinplant = KeACCR_n_CompRPMmax;
    }
    else
    {
        /* Switch: '<S793>/Switch1' incorporates:
         *  Constant: '<S153>/ConstantValue2'
         *  Switch: '<S793>/Switch2'
         */
        VeACCR_n_RPMinplant = 0.0F;
    }

    /* End of Switch: '<S793>/Switch1' */

    /* RelationalOperator: '<S151>/Comparison4' incorporates:
     *  Constant: '<S751>/Constant'
     */
    VeACCR_b_CompStatINOP = (((uint32)
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_md) ==
        CeTAIR_e_Inoperative);

    /* Outputs for Atomic SubSystem: '<S151>/EdgeRising1' */
    /* UnitDelay: '<S749>/UnitDelay' */
    rtb_Logical2_jm = ACCR_ac_DW.UnitDelay_DSTATE_fz;

    /* Update for UnitDelay: '<S749>/UnitDelay' */
    ACCR_ac_DW.UnitDelay_DSTATE_fz = VeACCR_b_CompStatINOP;

    /* Outputs for Atomic SubSystem: '<S151>/TimerResetEnabled1' */
    /* Switch: '<S755>/Switch1' incorporates:
     *  Constant: '<S151>/ConstantValue1'
     *  Constant: '<S754>/Calib'
     *  Constant: '<S755>/ConstantValue3'
     *  Constant: '<S755>/ConstantValue4'
     *  Logic: '<S749>/AND'
     *  Logic: '<S749>/OR1'
     *  Logic: '<S755>/AND1'
     *  MinMax: '<S755>/Maximum'
     *  RelationalOperator: '<S755>/GreaterThan2'
     *  Sum: '<S755>/Subtraction'
     *  UnitDelay: '<S755>/UnitDelay'
     */
    if (((VeACCR_b_CompStatINOP) && (!rtb_Logical2_jm)) &&
            (ACCR_ac_DW.UnitDelay_DSTATE_ph <= 0.0F))
    {
        ACCR_ac_DW.UnitDelay_DSTATE_ph = KeACCR_t_CompFaultDelayTime;
    }
    else
    {
        ACCR_ac_DW.UnitDelay_DSTATE_ph = fmaxf(ACCR_ac_DW.UnitDelay_DSTATE_ph -
            0.1F, 0.0F);
    }

    /* End of Switch: '<S755>/Switch1' */
    /* End of Outputs for SubSystem: '<S151>/EdgeRising1' */

    /* RelationalOperator: '<S755>/GreaterThan1' incorporates:
     *  Constant: '<S755>/ConstantValue2'
     *  UnitDelay: '<S755>/UnitDelay'
     */
    VeACCR_b_CompFaultDelayActive = (ACCR_ac_DW.UnitDelay_DSTATE_ph > 0.0F);

    /* End of Outputs for SubSystem: '<S151>/TimerResetEnabled1' */

    /* Switch: '<S753>/Switch1' */
    if (VeACCR_b_CompFaultDelayActive)
    {
        /* Switch: '<S753>/Switch1' incorporates:
         *  Constant: '<S151>/ConstantValue3'
         */
        VeACCR_n_RPMfault_app1 = 0.0F;
    }
    else
    {
        /* Switch: '<S753>/Switch1' incorporates:
         *  Constant: '<S110>/Calib'
         */
        VeACCR_n_RPMfault_app1 = KeACCR_n_CompRPMmax;
    }

    /* End of Switch: '<S753>/Switch1' */

    /* Switch: '<S752>/Switch1' incorporates:
     *  Constant: '<S750>/Constant'
     *  RelationalOperator: '<S151>/Comparison1'
     */
    if (((uint32)ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_md) !=
            CeTAIR_e_Inoperative)
    {
        /* Switch: '<S752>/Switch1' incorporates:
         *  Constant: '<S110>/Calib'
         */
        VeACCR_n_RPMfault_app2 = KeACCR_n_CompRPMmax;
    }

    /* End of Switch: '<S752>/Switch1' */

    /* Switch: '<S151>/Switch' incorporates:
     *  Constant: '<S154>/Calib'
     */
    if (KeACCR_b_CompRPM_SlctApp)
    {
        /* Switch: '<S151>/Switch' */
        VeACCR_n_RPMfault = VeACCR_n_RPMfault_app1;
    }
    else
    {
        /* Switch: '<S151>/Switch' */
        VeACCR_n_RPMfault = VeACCR_n_RPMfault_app2;
    }

    /* End of Switch: '<S151>/Switch' */

    /* Switch: '<S163>/Switch3' incorporates:
     *  Constant: '<S856>/Calib'
     */
    if (KeACCR_b_DMPICompRPMLim_Ena)
    {
        /* Switch: '<S163>/Switch3' incorporates:
         *  Lookup_n-D: '<S858>/Vector'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
         *  Switch: '<S79>/Switch'
         */
        VeACCR_n_RPMvehspd = look2_iflf_binlca_16a
            (ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_o3, Switch_j, ((
               const float32 *)&(KxACCR_n_DMPICompRPMMax[0])), ((const float32 *)
              &(KyACCR_n_DMPICompRPMMax[0])), ((const float32 *)
              &(KtACCR_n_DMPICompRPMMax[0])), ACCR_ac_ConstP.pooled17, 5U);
    }
    else
    {
        /* Switch: '<S163>/Switch3' incorporates:
         *  Lookup_n-D: '<S857>/Vector'
         *  Switch: '<S79>/Switch'
         */
        VeACCR_n_RPMvehspd = look1_iflf_binlca_16a(Switch_j, ((const float32 *)
            &(KxACCR_n_CompRPMMaxVehSpd[0])), ((const float32 *)
            &(KtACCR_n_CompRPMMaxVehSpd[0])), 4U);
    }

    /* End of Switch: '<S163>/Switch3' */

    /* MinMax: '<S162>/MinMax1' */
    VeACCR_n_RPMlow = fminf(fminf(fminf(fminf(fminf(fminf(VeACCR_p_ACpressureold,
        VeACCR_n_RPMvalve), VeACCR_n_RPMpwrbudget_AS), VeACCR_n_RPMprotD),
        VeACCR_n_RPMinplant), VeACCR_n_RPMfault), VeACCR_n_RPMvehspd);

    /* MinMax: '<S162>/MinMax2' */
    VeACCR_n_RPMhighlow = fminf(VeACCR_n_RPMhigh, VeACCR_n_RPMlow);

    /* Switch: '<S848>/Switch1' incorporates:
     *  Constant: '<S109>/Calib'
     *  Constant: '<S174>/Calib'
     *  Logic: '<S146>/Logical3'
     *  Logic: '<S162>/Logical1'
     *  Logic: '<S162>/Logical2'
     *  RelationalOperator: '<S851>/Comparison1'
     *  RelationalOperator: '<S851>/Comparison2'
     *  RelationalOperator: '<S851>/Comparison3'
     *  RelationalOperator: '<S851>/Comparison4'
     */
    if (((((VeACCR_n_RPMetc < KeACCR_n_CompRPMMin2) && (VeACCR_n_RPMchiller <
            KeACCR_n_CompRPMMin2)) && (VeACCR_n_RPMoilmig < KeACCR_n_CompRPMMin2))
         && (VeACCR_n_RPMheatpumporDeice < KeACCR_n_CompRPMMin2)) ||
            (rtb_Logical1_n3o && (KeACCR_b_PressurePIDCntrl_En)))
    {
        /* Switch: '<S848>/Switch1' incorporates:
         *  Constant: '<S162>/ConstantValue1'
         */
        VeACCR_n_RPMtargetraw = 0.0F;
    }
    else
    {
        /* Switch: '<S848>/Switch1' */
        VeACCR_n_RPMtargetraw = VeACCR_n_RPMhighlow;
    }

    /* End of Switch: '<S848>/Switch1' */

    /* Switch: '<S117>/Switch1' incorporates:
     *  Constant: '<S126>/Calib'
     */
    if (KeACCR_b_CompBattRtLim_Slct)
    {
        /* Switch: '<S117>/Switch1' incorporates:
         *  Constant: '<S129>/Calib'
         */
        rtb_Vector_b5 = KeACCR_n_CompRtLimRPM;
    }

    /* End of Switch: '<S117>/Switch1' */

    /* Sum: '<S132>/Sum2' incorporates:
     *  UnitDelay: '<S132>/UnitDelay'
     */
    rtb_Sum1_f = VeACCR_n_RPMtargetraw - ACCR_ac_DW.UnitDelay_DSTATE_l;

    /* Switch: '<S137>/Switch1' incorporates:
     *  Constant: '<S126>/Calib'
     *  RelationalOperator: '<S132>/Comparison1'
     *  Switch: '<S117>/Switch'
     *  UnitDelay: '<S132>/UnitDelay'
     */
    if (ACCR_ac_DW.UnitDelay_DSTATE_l < rtb_Vector_b5)
    {
        /* Switch: '<S117>/Switch' incorporates:
         *  Constant: '<S126>/Calib'
         *  Constant: '<S128>/Calib'
         */
        if (KeACCR_b_CompBattRtLim_Slct)
        {
            rtb_Vector_aw = KeACCR_n_CompBattRtLimUp;
        }

        /* Switch: '<S137>/Switch1' incorporates:
         *  MinMax: '<S132>/MinMax'
         *  MinMax: '<S132>/MinMax1'
         *  Sum: '<S132>/Sum1'
         */
        rtb_Vector_aw = fmaxf(fminf(rtb_Vector_b5 -
                               ACCR_ac_DW.UnitDelay_DSTATE_l, rtb_Sum1_f),
                              rtb_Vector_aw);
    }
    else
    {
        if (KeACCR_b_CompBattRtLim_Slct)
        {
            /* Switch: '<S117>/Switch' incorporates:
             *  Constant: '<S128>/Calib'
             *  Switch: '<S137>/Switch1'
             */
            rtb_Vector_aw = KeACCR_n_CompBattRtLimUp;
        }
    }

    /* End of Switch: '<S137>/Switch1' */

    /* Switch: '<S124>/Switch' incorporates:
     *  Constant: '<S135>/Calib'
     */
    if (KeACCR_b_PressurePIDCntrl_En)
    {
        rtb_Sum1_eo = VeACCR_n_RPMacpPID_AD;
    }
    else
    {
        rtb_Sum1_eo = VeACCR_n_RPMacp_AD;
    }

    /* End of Switch: '<S124>/Switch' */

    /* Switch: '<S134>/Switch1' incorporates:
     *  Logic: '<S124>/Logical5'
     *  RelationalOperator: '<S124>/Comparison12'
     *  RelationalOperator: '<S124>/Comparison13'
     *  RelationalOperator: '<S124>/Comparison14'
     */
    if (((VeACCR_n_RPMtargetraw == VeACCR_n_RPMprotD) || (VeACCR_n_RPMtargetraw ==
          rtb_Sum1_eo)) || (VeACCR_n_RPMtargetraw == VeACCR_n_RPMfault))
    {
        /* Switch: '<S134>/Switch1' incorporates:
         *  Constant: '<S110>/Calib'
         *  Gain: '<S124>/Gain'
         */
        VeACCR_n_RPMrateLimDown = -KeACCR_n_CompRPMmax;
    }
    else
    {
        /* Switch: '<S134>/Switch1' incorporates:
         *  Constant: '<S136>/Calib'
         */
        VeACCR_n_RPMrateLimDown = KeACCR_n_CompBattRtLimDown;
    }

    /* End of Switch: '<S134>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S132>/integral_term' */
    /* Switch: '<S138>/Switch1' incorporates:
     *  RelationalOperator: '<S138>/RelationalOperator'
     */
    if (rtb_Vector_aw < rtb_Sum1_f)
    {
        /* Switch: '<S845>/Switch1' */
        rtb_Sum1_f = rtb_Vector_aw;
    }

    /* End of Switch: '<S138>/Switch1' */

    /* Switch: '<S138>/Switch' incorporates:
     *  RelationalOperator: '<S138>/RelationalOperator1'
     */
    if (rtb_Sum1_f <= VeACCR_n_RPMrateLimDown)
    {
        rtb_Sum1_f = VeACCR_n_RPMrateLimDown;
    }

    /* End of Switch: '<S138>/Switch' */
    /* End of Outputs for SubSystem: '<S132>/integral_term' */

    /* Sum: '<S132>/Sum3' incorporates:
     *  UnitDelay: '<S132>/UnitDelay'
     */
    ACCR_ac_DW.UnitDelay_DSTATE_l += rtb_Sum1_f;

    /* Outputs for Atomic SubSystem: '<S133>/ProtectedDivision' */
    /* Switch: '<S139>/Switch1' incorporates:
     *  Constant: '<S139>/ConstantValue'
     *  Constant: '<S139>/ConstantValue2'
     *  Constant: '<S139>/ConstantValue3'
     *  RelationalOperator: '<S139>/GreaterThanorEqual'
     *  RelationalOperator: '<S139>/GreaterThanorEqual1'
     *  RelationalOperator: '<S139>/NotEqual'
     *  Switch: '<S139>/Switch2'
     *  Switch: '<S139>/Switch3'
     *  UnitDelay: '<S132>/UnitDelay'
     */
    if (ACCR_ac_DW.UnitDelay_DSTATE_l != 0.0F)
    {
        /* Switch: '<S139>/Switch1' incorporates:
         *  Constant: '<S133>/ConstantValue'
         *  Product: '<S139>/Division'
         */
        rtb_Vector_aw = ACCR_ac_DW.UnitDelay_DSTATE_l / 50.0F;
    }
    else if (ACCR_ac_DW.UnitDelay_DSTATE_l > 0.0F)
    {
        /* Switch: '<S139>/Switch2' incorporates:
         *  Constant: '<S139>/MAXFLOAT'
         *  Switch: '<S139>/Switch1'
         */
        rtb_Vector_aw = 3.402823466E+38F;
    }
    else if (ACCR_ac_DW.UnitDelay_DSTATE_l < 0.0F)
    {
        /* Switch: '<S139>/Switch3' incorporates:
         *  Constant: '<S139>/MINFLOAT'
         *  Switch: '<S139>/Switch1'
         *  Switch: '<S139>/Switch2'
         */
        rtb_Vector_aw = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S139>/Switch1' incorporates:
         *  Constant: '<S139>/ConstantValue4'
         *  Switch: '<S139>/Switch2'
         *  Switch: '<S139>/Switch3'
         */
        rtb_Vector_aw = 0.0F;
    }

    /* End of Switch: '<S139>/Switch1' */
    /* End of Outputs for SubSystem: '<S133>/ProtectedDivision' */

    /* Product: '<S133>/Product' incorporates:
     *  Constant: '<S133>/ConstantValue'
     *  Rounding: '<S133>/Rounding1'
     */
    VeACCR_n_RPMtargetafterRL = ceilf(rtb_Vector_aw) * 50.0F;

    /* Switch: '<S125>/Switch1' incorporates:
     *  Constant: '<S109>/Calib'
     *  RelationalOperator: '<S117>/Comparison3'
     */
    if (VeACCR_n_RPMtargetraw < KeACCR_n_CompRPMMin2)
    {
        /* Switch: '<S125>/Switch1' incorporates:
         *  Constant: '<S117>/ConstantValue1'
         */
        VeACCR_n_RPMb4vehcheck = 0.0F;
    }
    else
    {
        /* Switch: '<S125>/Switch1' */
        VeACCR_n_RPMb4vehcheck = VeACCR_n_RPMtargetafterRL;
    }

    /* End of Switch: '<S125>/Switch1' */

    /* Switch: '<S117>/Switch4' incorporates:
     *  Constant: '<S127>/Calib'
     */
    if (KeACCR_b_RPM_PwrBdgtMin_CalOn)
    {
        /* Switch: '<S117>/Switch4' */
        VeACCR_n_RPMb4vehcheck_1 = VeACCR_n_RPMb4vehcheck;
    }
    else
    {
        /* Switch: '<S117>/Switch4' */
        VeACCR_n_RPMb4vehcheck_1 = VeACCR_n_RPMtargetafterRL;
    }

    /* End of Switch: '<S117>/Switch4' */

    /* Switch: '<S145>/Switch1' incorporates:
     *  Logic: '<S142>/Logical4'
     *  RelationalOperator: '<S142>/Comparison10'
     *  RelationalOperator: '<S142>/Comparison11'
     *  Switch: '<S145>/Switch2'
     */
    if ((!ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cy) || rtb_Logical4)
    {
        /* Switch: '<S145>/Switch1' incorporates:
         *  Constant: '<S142>/ConstantValue3'
         */
        VeACCR_n_CompSpeedTgt_Old_B4D = 0.0F;
    }
    else if (VeACCR_b_ACCompEnbl)
    {
        /* Switch: '<S145>/Switch2' incorporates:
         *  Switch: '<S145>/Switch1'
         */
        VeACCR_n_CompSpeedTgt_Old_B4D = VeACCR_n_RPMb4vehcheck_1;
    }
    else
    {
        /* Switch: '<S145>/Switch1' incorporates:
         *  Constant: '<S142>/ConstantValue4'
         *  Switch: '<S145>/Switch2'
         */
        VeACCR_n_CompSpeedTgt_Old_B4D = 0.0F;
    }

    /* End of Switch: '<S145>/Switch1' */

    /* Logic: '<S118>/Logical1' incorporates:
     *  Logic: '<S118>/Logical4'
     */
    VeACCR_b_ACCompallow = ((!rtb_Logical4) && (VeACCR_b_ACCompEnbl));

    /* Switch: '<S140>/Switch1' */
    if (VeACCR_b_ACCompallow)
    {
        /* Switch: '<S140>/Switch1' */
        VeACCR_n_CompSpeedTgt_New_B4D = VeACCR_n_RPMb4vehcheck_1;
    }
    else
    {
        /* Switch: '<S140>/Switch1' incorporates:
         *  Constant: '<S118>/ConstantValue4'
         */
        VeACCR_n_CompSpeedTgt_New_B4D = 0.0F;
    }

    /* End of Switch: '<S140>/Switch1' */

    /* Switch: '<S118>/Switch' incorporates:
     *  Constant: '<S141>/Calib'
     */
    if (KeACCR_b_SelectOldComp_RPMTgt)
    {
        /* Switch: '<S118>/Switch' */
        VeACCR_n_CompSpeedTgt_B4D = VeACCR_n_CompSpeedTgt_Old_B4D;
    }
    else
    {
        /* Switch: '<S118>/Switch' */
        VeACCR_n_CompSpeedTgt_B4D = VeACCR_n_CompSpeedTgt_New_B4D;
    }

    /* End of Switch: '<S118>/Switch' */

    /* Outputs for Atomic SubSystem: '<S843>/ProtectedDivision' */
    /* Switch: '<S846>/Switch1' incorporates:
     *  Constant: '<S846>/ConstantValue'
     *  Constant: '<S846>/ConstantValue1'
     *  Constant: '<S846>/ConstantValue2'
     *  Constant: '<S846>/ConstantValue3'
     *  Logic: '<S846>/AND'
     *  RelationalOperator: '<S846>/GreaterThanorEqual'
     *  RelationalOperator: '<S846>/GreaterThanorEqual1'
     *  RelationalOperator: '<S846>/NotEqual'
     *  RelationalOperator: '<S846>/NotEqual1'
     *  Switch: '<S846>/Switch2'
     *  Switch: '<S846>/Switch3'
     */
    if ((VeACCR_n_RPMetc != 0.0F) && (VeACCR_n_RPMtargetraw != 0.0F))
    {
        /* Switch: '<S846>/Switch1' incorporates:
         *  Product: '<S846>/Division'
         */
        rtb_Sum1_f = VeACCR_n_RPMetc / VeACCR_n_RPMtargetraw;
    }
    else if (VeACCR_n_RPMetc > 0.0F)
    {
        /* Switch: '<S846>/Switch2' incorporates:
         *  Constant: '<S846>/MAXFLOAT'
         *  Switch: '<S846>/Switch1'
         */
        rtb_Sum1_f = 3.402823466E+38F;
    }
    else if (VeACCR_n_RPMetc < 0.0F)
    {
        /* Switch: '<S846>/Switch3' incorporates:
         *  Constant: '<S846>/MINFLOAT'
         *  Switch: '<S846>/Switch1'
         *  Switch: '<S846>/Switch2'
         */
        rtb_Sum1_f = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S846>/Switch1' incorporates:
         *  Constant: '<S846>/ConstantValue4'
         *  Switch: '<S846>/Switch2'
         *  Switch: '<S846>/Switch3'
         */
        rtb_Sum1_f = 0.0F;
    }

    /* End of Switch: '<S846>/Switch1' */
    /* End of Outputs for SubSystem: '<S843>/ProtectedDivision' */

    /* Outputs for Atomic SubSystem: '<S843>/Limiter' */
    /* Switch: '<S845>/Switch1' incorporates:
     *  Constant: '<S843>/ConstantValue1'
     *  RelationalOperator: '<S845>/RelationalOperator'
     */
    if (1.0F < rtb_Sum1_f)
    {
        /* Switch: '<S845>/Switch1' */
        rtb_Sum1_f = 1.0F;
    }

    /* End of Switch: '<S845>/Switch1' */

    /* Switch: '<S845>/Switch' incorporates:
     *  Constant: '<S843>/ConstantValue2'
     *  RelationalOperator: '<S845>/RelationalOperator1'
     */
    if (rtb_Sum1_f <= 0.0F)
    {
        rtb_Sum1_f = 0.0F;
    }

    /* End of Switch: '<S845>/Switch' */
    /* End of Outputs for SubSystem: '<S843>/Limiter' */

    /* Product: '<S843>/Product1' incorporates:
     *  Constant: '<S843>/ConstantValue3'
     */
    VeACCR_Pct_HVAC_PwrCsmpRatio = rtb_Sum1_f * 100.0F;

    /* Product: '<S843>/Product' */
    rtb_Vector_aw = VeACCR_Pct_HVAC_PwrCsmpRatio *
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_d;

    /* Outputs for Atomic SubSystem: '<S843>/ProtectedDivision1' */
    /* Switch: '<S847>/Switch1' incorporates:
     *  Constant: '<S847>/ConstantValue'
     *  RelationalOperator: '<S847>/NotEqual'
     */
    if (rtb_Vector_aw != 0.0F)
    {
        /* Switch: '<S847>/Switch1' incorporates:
         *  Constant: '<S843>/ConstantValue4'
         *  Product: '<S847>/Division'
         */
        VeACCR_P_HVAC_CoolPwrApp1 = rtb_Vector_aw / 100.0F;
    }
    else
    {
        /* Switch: '<S847>/Switch1' incorporates:
         *  Constant: '<S847>/ConstantValue4'
         *  Switch: '<S847>/Switch2'
         *  Switch: '<S847>/Switch3'
         */
        VeACCR_P_HVAC_CoolPwrApp1 = 0.0F;
    }

    /* End of Switch: '<S847>/Switch1' */
    /* End of Outputs for SubSystem: '<S843>/ProtectedDivision1' */

    /* Switch: '<S844>/Switch1' */
    if (ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_ig2)
    {
        /* Switch: '<S844>/Switch1' */
        VeACCR_P_HVAC_CompPwrUsage_B4D = VeACCR_P_HVAC_CoolPwrApp1;
    }
    else
    {
        /* Switch: '<S844>/Switch1' incorporates:
         *  Constant: '<S161>/ConstantValue3'
         */
        VeACCR_P_HVAC_CompPwrUsage_B4D = 0.0F;
    }

    /* End of Switch: '<S844>/Switch1' */

    /* SignalConversion generated from: '<S7>/VariantSource1' */
#if !Rte_SysCon_Variant_ACCR_FUNC_1

    /* VariantMerge generated from: '<S7>/VariantSource1' incorporates:
     *  Constant: '<S112>/ConstantValue'
     */
    ACCR_ac_B.VariantMerge_For_Variant_Source_VariantS[0] =
        VeACCR_n_CompSpeedTgt_B4D;
    ACCR_ac_B.VariantMerge_For_Variant_Source_VariantS[1] =
        VeACCR_P_HVAC_CompPwrUsage_B4D;
    ACCR_ac_B.VariantMerge_For_Variant_Source_VariantS[2] = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S7>/VariantSource1' */

    /* Switch: '<S116>/Switch1' incorporates:
     *  Constant: '<S122>/Calib'
     *  Constant: '<S123>/Calib'
     *  Logic: '<S116>/Logical1'
     *  Logic: '<S116>/Logical2'
     *  RelationalOperator: '<S116>/Comparison3'
     */
    if (((VeACCR_b_ACCompallow) || (KeACCR_b_ACCompallow_Ovrd)) &&
            (VeACCR_n_RPMtargetraw >= KeACCR_n_EACEnableCmd_Limit))
    {
        /* Switch: '<S116>/Switch1' incorporates:
         *  Constant: '<S120>/Constant'
         */
        VeACCR_e_AC_CompEnb_BD = CeACCR_e_ACComp_Enable;
    }
    else
    {
        /* Switch: '<S116>/Switch1' incorporates:
         *  Constant: '<S121>/Constant'
         */
        VeACCR_e_AC_CompEnb_BD = CeACCR_e_ACComp_Disable;
    }

    /* End of Switch: '<S116>/Switch1' */

    /* Logic: '<S184>/Logical3' incorporates:
     *  Constant: '<S196>/Calib'
     *  Constant: '<S197>/Calib'
     *  Logic: '<S184>/Logical1'
     *  Logic: '<S184>/Logical2'
     */
    VeACCR_b_FreezeITerms_Pres = (((VeACCR_b_ACPresHiDtct) &&
        (KeACCR_b_EnaFreezeIterm_ACPresHi)) || ((VeACCR_b_ACSucPresLoDtct) &&
        (KeACCR_b_EnaFreezeIterm_SucPresLo)));

    /* Logic: '<S184>/Logical6' incorporates:
     *  Constant: '<S194>/Calib'
     *  Constant: '<S195>/Calib'
     *  Logic: '<S184>/Logical4'
     *  Logic: '<S184>/Logical5'
     */
    VeACCR_b_DisableOilMig_Pres = (((VeACCR_b_ACPresHiDtct) &&
        (KeACCR_b_DisableOilMig_ACPresHi)) || ((VeACCR_b_ACSucPresLoDtct) &&
        (KeACCR_b_DisableOilMig_SucPresLo)));

    /* Logic: '<S319>/LogicalOperator2' incorporates:
     *  Constant: '<S319>/Constant'
     *  Constant: '<S333>/Calib'
     *  Delay: '<S320>/Delay'
     *  Logic: '<S319>/LogicalOperator'
     *  Logic: '<S319>/LogicalOperator1'
     *  RelationalOperator: '<S317>/RelationalOperator'
     *  RelationalOperator: '<S319>/RelationalOperator1'
     */
    ACCR_ac_DW.Delay_DSTATE_h = ((((VeACCR_n_CompRPM_Fuzzy >
        VeACCR_n_CompSpdLim_CabNVH) && (VeACCR_dT_ModEvapTempError_Delta > 0.0F))
        || (VeACCR_b_FreezeITerms_Pres)) && (KeACCR_b_Enbl_ITermFreeze));

    /* Logic: '<S707>/Logical' incorporates:
     *  Logic: '<S707>/Logical1'
     *  Logic: '<S707>/Logical2'
     *  UnitDelay: '<S707>/UnitDelay'
     */
    ACCR_ac_DW.UnitDelay_DSTATE_f = ((!rtb_Logical1_cp) && (!rtb_Logical1_ecb));

    /* Logic: '<S157>/LogicalOperator4' incorporates:
     *  Constant: '<S795>/Constant'
     *  Constant: '<S796>/Constant'
     *  Constant: '<S797>/Calib'
     *  Constant: '<S798>/Calib'
     *  Constant: '<S799>/Calib'
     *  Logic: '<S157>/LogicalOperator'
     *  Logic: '<S157>/LogicalOperator1'
     *  Logic: '<S157>/LogicalOperator3'
     *  Logic: '<S157>/LogicalOperator5'
     *  Logic: '<S157>/LogicalOperator6'
     *  RelationalOperator: '<S157>/Comparison9'
     *  RelationalOperator: '<S157>/RelationalOperator'
     */
    rtb_AND_mh = (((((((uint32)
                       ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cg) ==
                      CeTHMR_e_ActiveCooling) && (KeACCR_b_EnbOilMigratnForBatt))
                    || (rtb_AND_mh && (KeACCR_b_EnbOilMigratn4Cab))) ||
                   ((((uint32)ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_dk)
                     == CeTHMR_e_HeatPump) && (KeACCR_b_EnbOilMigratnForHP))) &&
                  (!VeACCR_b_DisableOilMig_Pres));

    /* Logic: '<S800>/Logical10' incorporates:
     *  Constant: '<S816>/Calib'
     *  Constant: '<S817>/Calib'
     *  RelationalOperator: '<S800>/Comparison10'
     *  RelationalOperator: '<S800>/Comparison2'
     */
    VeACCR_b_ACOilMigEn = (((ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_o >
        KeACCR_n_CompSpd_MinOnCmd) &&
                            (ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_o <
        KeACCR_n_AllwOilMigForLoCmprSpdThd)) && rtb_AND_mh);

    /* Logic: '<S800>/Logical' */
    Switch_n = ((VeACCR_b_ACOilMigStarted) && (VeACCR_b_OilMigCmplt));

    /* Outputs for Atomic SubSystem: '<S800>/EdgeRising' */
    /* Logic: '<S806>/AND' incorporates:
     *  Logic: '<S806>/OR1'
     *  UnitDelay: '<S806>/UnitDelay'
     */
    Switch_h = !ACCR_ac_DW.UnitDelay_DSTATE_gv;

    /* Update for UnitDelay: '<S806>/UnitDelay' incorporates:
     *  Constant: '<S800>/TRUEConstant'
     */
    ACCR_ac_DW.UnitDelay_DSTATE_gv = true;

    /* End of Outputs for SubSystem: '<S800>/EdgeRising' */

    /* Logic: '<S800>/Logical11' incorporates:
     *  Constant: '<S816>/Calib'
     *  Constant: '<S818>/Calib'
     *  RelationalOperator: '<S800>/Comparison3'
     *  RelationalOperator: '<S800>/Comparison4'
     */
    rtb_Logical4 = ((ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_o >=
                     KeACCR_n_AllwOilMigForLoCmprSpdThd) &&
                    (ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_o <=
                     KeACCR_n_HldOilMigForHiCmprSpdThd));

    /* Outputs for Atomic SubSystem: '<S800>/EdgeRising2' */
    /* Logic: '<S808>/OR1' incorporates:
     *  UnitDelay: '<S808>/UnitDelay'
     */
    rtb_Logical1_cp = !ACCR_ac_DW.UnitDelay_DSTATE_br;

    /* Update for UnitDelay: '<S808>/UnitDelay' */
    ACCR_ac_DW.UnitDelay_DSTATE_br = rtb_Logical4;

    /* Outputs for Atomic SubSystem: '<S800>/CountDownResetEnabled2' */
    /* Switch: '<S804>/Switch1' incorporates:
     *  Constant: '<S804>/ConstantValue'
     *  Constant: '<S814>/Calib'
     *  Logic: '<S804>/AND'
     *  Logic: '<S808>/AND'
     *  RelationalOperator: '<S804>/GreaterThan'
     *  Switch: '<S804>/Switch2'
     *  UnitDelay: '<S804>/UnitDelay'
     */
    if (rtb_Logical4 && rtb_Logical1_cp)
    {
        ACCR_ac_DW.UnitDelay_DSTATE_cs = KeACCR_Cnt_ACOilMigReset;
    }
    else
    {
        if (rtb_Logical4 && (((sint32)ACCR_ac_DW.UnitDelay_DSTATE_cs) > 0))
        {
            /* UnitDelay: '<S804>/UnitDelay' incorporates:
             *  Constant: '<S804>/ConstantValue1'
             *  Sum: '<S804>/Subtraction'
             *  Switch: '<S804>/Switch2'
             */
            ACCR_ac_DW.UnitDelay_DSTATE_cs = (uint16)((sint32)(((sint32)
                ACCR_ac_DW.UnitDelay_DSTATE_cs) - 1));
        }
    }

    /* End of Switch: '<S804>/Switch1' */
    /* End of Outputs for SubSystem: '<S800>/EdgeRising2' */

    /* RelationalOperator: '<S804>/GreaterThan1' incorporates:
     *  Constant: '<S804>/ConstantValue2'
     *  UnitDelay: '<S804>/UnitDelay'
     */
    rtb_Logical4 = (((sint32)ACCR_ac_DW.UnitDelay_DSTATE_cs) > 0);

    /* End of Outputs for SubSystem: '<S800>/CountDownResetEnabled2' */

    /* Outputs for Atomic SubSystem: '<S800>/EdgeFalling' */
    /* Logic: '<S805>/AND' incorporates:
     *  Logic: '<S805>/OR1'
     *  UnitDelay: '<S805>/Unit Delay'
     */
    rtb_Logical1_cp = ((!rtb_Logical4) && (ACCR_ac_DW.UnitDelay_DSTATE_o));

    /* Update for UnitDelay: '<S805>/Unit Delay' */
    ACCR_ac_DW.UnitDelay_DSTATE_o = rtb_Logical4;

    /* End of Outputs for SubSystem: '<S800>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S800>/CountDownResetEnabled' */
    /* Switch: '<S802>/Switch1' incorporates:
     *  Constant: '<S802>/ConstantValue'
     *  Constant: '<S818>/Calib'
     *  Logic: '<S800>/Logical12'
     *  Logic: '<S800>/Logical2'
     *  Logic: '<S802>/AND'
     *  RelationalOperator: '<S800>/Comparison5'
     *  RelationalOperator: '<S802>/GreaterThan'
     *  Switch: '<S802>/Switch2'
     *  UnitDelay: '<S802>/UnitDelay'
     */
    if ((Switch_n || Switch_h) || (rtb_Logical1_cp ||
            (ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_o >
             KeACCR_n_HldOilMigForHiCmprSpdThd)))
    {
        /* Switch: '<S810>/Switch1' incorporates:
         *  Logic: '<S800>/Logical3'
         *  Logic: '<S800>/Logical4'
         */
        if ((Switch_h && (!Switch_n)) && rtb_AND_mh)
        {
            /* UnitDelay: '<S802>/UnitDelay' incorporates:
             *  Constant: '<S800>/ConstantValue3'
             *  Constant: '<S813>/Calib'
             *  Sum: '<S800>/Subtract'
             *  Switch: '<S810>/Switch1'
             */
            ACCR_ac_DW.UnitDelay_DSTATE_j = (uint16)((sint32)(((sint32)
                KeACCR_Cnt_ACOilMigPeriod) - 1));
        }
        else
        {
            /* UnitDelay: '<S802>/UnitDelay' incorporates:
             *  Constant: '<S813>/Calib'
             *  Switch: '<S810>/Switch1'
             */
            ACCR_ac_DW.UnitDelay_DSTATE_j = KeACCR_Cnt_ACOilMigPeriod;
        }

        /* End of Switch: '<S810>/Switch1' */
    }
    else
    {
        if ((VeACCR_b_ACOilMigEn) && (((sint32)ACCR_ac_DW.UnitDelay_DSTATE_j) >
                0))
        {
            /* UnitDelay: '<S802>/UnitDelay' incorporates:
             *  Constant: '<S802>/ConstantValue1'
             *  Sum: '<S802>/Subtraction'
             *  Switch: '<S802>/Switch2'
             */
            ACCR_ac_DW.UnitDelay_DSTATE_j = (uint16)((sint32)(((sint32)
                ACCR_ac_DW.UnitDelay_DSTATE_j) - 1));
        }
    }

    /* End of Switch: '<S802>/Switch1' */

    /* Logic: '<S800>/Logical1' incorporates:
     *  Constant: '<S802>/ConstantValue2'
     *  RelationalOperator: '<S802>/GreaterThan1'
     *  UnitDelay: '<S802>/UnitDelay'
     */
    VeACCR_b_ACOilMigStarted = (((sint32)ACCR_ac_DW.UnitDelay_DSTATE_j) <= 0);

    /* End of Outputs for SubSystem: '<S800>/CountDownResetEnabled' */

    /* Outputs for Atomic SubSystem: '<S800>/EdgeRising1' */
    /* Logic: '<S807>/AND' incorporates:
     *  Logic: '<S807>/OR1'
     *  UnitDelay: '<S807>/UnitDelay'
     */
    rtb_AND_mh = !ACCR_ac_DW.UnitDelay_DSTATE_fv;

    /* Update for UnitDelay: '<S807>/UnitDelay' incorporates:
     *  Constant: '<S800>/TRUEConstant2'
     */
    ACCR_ac_DW.UnitDelay_DSTATE_fv = true;

    /* End of Outputs for SubSystem: '<S800>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S800>/CountDownResetEnabled1' */
    /* Switch: '<S803>/Switch1' incorporates:
     *  Constant: '<S803>/ConstantValue'
     *  Logic: '<S800>/Logical5'
     *  Logic: '<S803>/AND'
     *  RelationalOperator: '<S803>/GreaterThan'
     *  Switch: '<S803>/Switch2'
     *  UnitDelay: '<S803>/UnitDelay'
     */
    if (Switch_n || rtb_AND_mh)
    {
        /* Switch: '<S811>/Switch1' incorporates:
         *  Logic: '<S800>/Logical7'
         *  Logic: '<S800>/Logical8'
         */
        if ((rtb_AND_mh && (!Switch_n)) && (VeACCR_b_ACOilMigStarted))
        {
            /* UnitDelay: '<S803>/UnitDelay' incorporates:
             *  Constant: '<S800>/ConstantValue1'
             *  Constant: '<S812>/Calib'
             *  Sum: '<S800>/Subtract1'
             *  Switch: '<S811>/Switch1'
             */
            ACCR_ac_DW.UnitDelay_DSTATE_h = (uint16)((sint32)(((sint32)
                KeACCR_Cnt_ACOilMigDuration) - 1));
        }
        else
        {
            /* UnitDelay: '<S803>/UnitDelay' incorporates:
             *  Constant: '<S812>/Calib'
             *  Switch: '<S811>/Switch1'
             */
            ACCR_ac_DW.UnitDelay_DSTATE_h = KeACCR_Cnt_ACOilMigDuration;
        }

        /* End of Switch: '<S811>/Switch1' */
    }
    else
    {
        if ((VeACCR_b_ACOilMigStarted) && (((sint32)
                ACCR_ac_DW.UnitDelay_DSTATE_h) > 0))
        {
            /* UnitDelay: '<S803>/UnitDelay' incorporates:
             *  Constant: '<S803>/ConstantValue1'
             *  Sum: '<S803>/Subtraction'
             *  Switch: '<S803>/Switch2'
             */
            ACCR_ac_DW.UnitDelay_DSTATE_h = (uint16)((sint32)(((sint32)
                ACCR_ac_DW.UnitDelay_DSTATE_h) - 1));
        }
    }

    /* End of Switch: '<S803>/Switch1' */

    /* Logic: '<S800>/Logical9' incorporates:
     *  Constant: '<S803>/ConstantValue2'
     *  RelationalOperator: '<S803>/GreaterThan1'
     *  UnitDelay: '<S803>/UnitDelay'
     */
    VeACCR_b_OilMigCmplt = (((sint32)ACCR_ac_DW.UnitDelay_DSTATE_h) <= 0);

    /* End of Outputs for SubSystem: '<S800>/CountDownResetEnabled1' */

    /* Outputs for Atomic SubSystem: '<S1039>/CountDownResetEnabled1' */
    /* Outputs for Atomic SubSystem: '<S1039>/EdgeRising1' */
    /* Outputs for Atomic SubSystem: '<S1039>/CountDownResetEnabled' */
    /* Outputs for Atomic SubSystem: '<S1039>/EdgeRising' */
    /* SignalConversion generated from: '<S7>/VariantSource3' incorporates:
     *  Logic: '<S1039>/Logical'
     *  Logic: '<S1039>/Logical1'
     *  Logic: '<S1039>/Logical2'
     *  Logic: '<S1039>/Logical5'
     *  Logic: '<S1039>/Logical6'
     *  Logic: '<S1039>/Logical7'
     *  Logic: '<S956>/LogicalOperator'
     *  Logic: '<S956>/LogicalOperator3'
     *  Logic: '<S956>/LogicalOperator4'
     *  RelationalOperator: '<S1039>/Comparison10'
     *  RelationalOperator: '<S956>/Comparison1'
     *  RelationalOperator: '<S956>/Comparison9'
     *  UnitDelay: '<S946>/UnitDelay'
     */
#if Rte_SysCon_Variant_ACCR_FUNC_1

    /* VariantMerge generated from: '<S7>/VariantSource3' incorporates:
     *  Constant: '<S914>/Constant'
     */
    ACCR_ac_B.VariantMerge_For_Variant_Source_Varian_g = CeACCR_e_ACComp_Disable;

    /* Logic: '<S1039>/Logical' */
    rtb_AND_mh = ((VeACCR_b_ACOilMigStarted_mHEV) && (VeACCR_b_OilMigCmplt_mHEV));

    /* Logic: '<S1043>/AND' incorporates:
     *  Logic: '<S1043>/OR1'
     *  UnitDelay: '<S1043>/UnitDelay'
     */
    Switch_n = !ACCR_ac_DW.UnitDelay_DSTATE_pe;

    /* Update for UnitDelay: '<S1043>/UnitDelay' incorporates:
     *  Constant: '<S1039>/TRUEConstant'
     */
    ACCR_ac_DW.UnitDelay_DSTATE_pe = true;

    /* Switch: '<S1041>/Switch1' incorporates:
     *  Constant: '<S1036>/Constant'
     *  Constant: '<S1037>/Constant'
     *  Constant: '<S1038>/Calib'
     *  Constant: '<S1041>/ConstantValue'
     *  Logic: '<S1041>/AND'
     *  RelationalOperator: '<S1041>/GreaterThan'
     *  Switch: '<S1041>/Switch2'
     *  UnitDelay: '<S1041>/UnitDelay'
     */
    if (rtb_AND_mh || Switch_n)
    {
        /* Switch: '<S1046>/Switch1' incorporates:
         *  Constant: '<S1036>/Constant'
         *  Constant: '<S1037>/Constant'
         *  Constant: '<S1038>/Calib'
         *  Constant: '<S1039>/ConstantValue3'
         *  Constant: '<S1049>/Calib'
         *  Logic: '<S1039>/Logical3'
         *  Logic: '<S1039>/Logical4'
         *  Sum: '<S1039>/Subtract'
         *  UnitDelay: '<S1041>/UnitDelay'
         */
        if ((Switch_n && (!rtb_AND_mh)) && (((CeTHMR_e_EmergencyCooling ==
                ((uint32)ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cg)) ||
              (((uint32)ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cg) ==
                CeTHMR_e_ActiveCooling)) || ((!VeACCR_b_NoCabCondAllwd) &&
                (KeACCR_b_EnbOilMigratn4Cab))))
        {
            ACCR_ac_DW.UnitDelay_DSTATE_b4 = (uint16)((sint32)(((sint32)
                KeACCR_Cnt_ACOilMigPeriod) - 1));
        }
        else
        {
            ACCR_ac_DW.UnitDelay_DSTATE_b4 = KeACCR_Cnt_ACOilMigPeriod;
        }

        /* End of Switch: '<S1046>/Switch1' */
    }
    else
    {
        if ((((CeTHMR_e_EmergencyCooling == ((uint32)
                ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cg)) ||
                (((uint32)ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cg) ==
                 CeTHMR_e_ActiveCooling)) || ((!VeACCR_b_NoCabCondAllwd) &&
                (KeACCR_b_EnbOilMigratn4Cab))) && (((sint32)
                ACCR_ac_DW.UnitDelay_DSTATE_b4) > 0))
        {
            /* UnitDelay: '<S1041>/UnitDelay' incorporates:
             *  Constant: '<S1041>/ConstantValue1'
             *  Sum: '<S1041>/Subtraction'
             *  Switch: '<S1041>/Switch2'
             */
            ACCR_ac_DW.UnitDelay_DSTATE_b4 = (uint16)((sint32)(((sint32)
                ACCR_ac_DW.UnitDelay_DSTATE_b4) - 1));
        }
    }

    /* End of Switch: '<S1041>/Switch1' */

    /* Logic: '<S1039>/Logical1' incorporates:
     *  Constant: '<S1041>/ConstantValue2'
     *  RelationalOperator: '<S1041>/GreaterThan1'
     *  UnitDelay: '<S1041>/UnitDelay'
     */
    VeACCR_b_ACOilMigStarted_mHEV = (((sint32)ACCR_ac_DW.UnitDelay_DSTATE_b4) <=
        0);

    /* Logic: '<S1039>/Logical6' incorporates:
     *  Constant: '<S1039>/ConstantValue8'
     */
    VeACCR_b_ACOilMigDurationOn_mHEV =
        ((ACCR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_l > 0.0F) &&
         (VeACCR_b_ACOilMigStarted_mHEV));

    /* Logic: '<S1044>/AND' incorporates:
     *  Logic: '<S1044>/OR1'
     *  UnitDelay: '<S1044>/UnitDelay'
     */
    Switch_n = !ACCR_ac_DW.UnitDelay_DSTATE_ptw;

    /* Update for UnitDelay: '<S1044>/UnitDelay' incorporates:
     *  Constant: '<S1039>/TRUEConstant2'
     */
    ACCR_ac_DW.UnitDelay_DSTATE_ptw = true;

    /* Switch: '<S1042>/Switch1' incorporates:
     *  Constant: '<S1042>/ConstantValue'
     *  Logic: '<S1042>/AND'
     *  RelationalOperator: '<S1042>/GreaterThan'
     *  Switch: '<S1042>/Switch2'
     *  UnitDelay: '<S1042>/UnitDelay'
     */
    if (rtb_AND_mh || Switch_n)
    {
        /* Switch: '<S1047>/Switch1' incorporates:
         *  Constant: '<S1039>/ConstantValue4'
         *  Constant: '<S1048>/Calib'
         *  Logic: '<S1039>/Logical8'
         *  Logic: '<S1039>/Logical9'
         *  Sum: '<S1039>/Subtract1'
         *  UnitDelay: '<S1042>/UnitDelay'
         */
        if ((Switch_n && (!rtb_AND_mh)) && (VeACCR_b_ACOilMigDurationOn_mHEV))
        {
            ACCR_ac_DW.UnitDelay_DSTATE_en = (uint16)((sint32)(((sint32)
                KeACCR_Cnt_ACOilMigDuration) - 1));
        }
        else
        {
            ACCR_ac_DW.UnitDelay_DSTATE_en = KeACCR_Cnt_ACOilMigDuration;
        }

        /* End of Switch: '<S1047>/Switch1' */
    }
    else
    {
        if ((VeACCR_b_ACOilMigDurationOn_mHEV) && (((sint32)
                ACCR_ac_DW.UnitDelay_DSTATE_en) > 0))
        {
            /* UnitDelay: '<S1042>/UnitDelay' incorporates:
             *  Constant: '<S1042>/ConstantValue1'
             *  Sum: '<S1042>/Subtraction'
             *  Switch: '<S1042>/Switch2'
             */
            ACCR_ac_DW.UnitDelay_DSTATE_en = (uint16)((sint32)(((sint32)
                ACCR_ac_DW.UnitDelay_DSTATE_en) - 1));
        }
    }

    /* End of Switch: '<S1042>/Switch1' */

    /* Logic: '<S1039>/Logical5' incorporates:
     *  Constant: '<S1042>/ConstantValue2'
     *  RelationalOperator: '<S1042>/GreaterThan1'
     *  UnitDelay: '<S1042>/UnitDelay'
     */
    VeACCR_b_OilMigCmplt_mHEV = (((sint32)ACCR_ac_DW.UnitDelay_DSTATE_en) <= 0);
    ACCR_ac_DW.UnitDelay_DSTATE_m = VeACCR_b_ACOverPressure_mHEV;

#else

    /* VariantMerge generated from: '<S7>/VariantSource3' incorporates:
     *  SignalConversion generated from: '<S7>/VariantSource3'
     *  Switch: '<S116>/Switch1'
     */
    ACCR_ac_B.VariantMerge_For_Variant_Source_Varian_g = VeACCR_e_AC_CompEnb_BD;

#endif

    /* End of SignalConversion generated from: '<S7>/VariantSource3' */
    /* End of Outputs for SubSystem: '<S1039>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S1039>/CountDownResetEnabled' */
    /* End of Outputs for SubSystem: '<S1039>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S1039>/CountDownResetEnabled1' */

    /* Update for UnitDelay: '<S323>/UnitDelay1' */
    ACCR_ac_DW.UnitDelay1_DSTATE = VeACCR_dT_ModEvapTempError_Delta;

    /* Update for UnitDelay: '<S323>/UnitDelay2' */
    ACCR_ac_DW.UnitDelay2_DSTATE = VeACCR_dT_ModEvapTempError_Delta;

    /* Update for UnitDelay: '<S706>/UnitDelay1' */
    ACCR_ac_DW.UnitDelay1_DSTATE_d = rtb_Sum1;

    /* Update for UnitDelay: '<S335>/UnitDelay1' */
    ACCR_ac_DW.UnitDelay1_DSTATE_b = VeACCR_dT_CEvalue;

    /* Update for UnitDelay: '<S335>/UnitDelay' */
    ACCR_ac_DW.UnitDelay_DSTATE_ij = VeACCR_dT_ModEvapTempError_Delta;

    /* Update for UnitDelay: '<S787>/UnitDelay1' */
    ACCR_ac_DW.UnitDelay1_DSTATE_a = Switch_l;

    /* Update for UnitDelay: '<S146>/UnitDelay' */
    ACCR_ac_DW.UnitDelay_DSTATE_kf = VeACCR_b_ACOverPressure;

    /* Update for UnitDelay: '<S146>/UnitDelay1' */
    ACCR_ac_DW.UnitDelay1_DSTATE_c = rtb_Logical8_nn;

    /* Update for UnitDelay: '<S149>/UnitDelay1' */
    ACCR_ac_DW.UnitDelay1_DSTATE_o = VeACCR_n_RPMprotISet;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ACCO_FUNC'
     */
    /* Switch: '<S13>/Switch' incorporates:
     *  Constant: '<S35>/Calib'
     */
    if (KeACCR_b_CompressorSpd_SelDial)
    {
        /* SignalConversion generated from: '<S1>/CompressorSpdTgt_AftDial_FUNC' incorporates:
         *  Constant: '<S36>/Calib'
         *  Outport: '<Root>/VeACCR_n_CompSpdTgt'
         */
        (void)Rte_Write_VeACCR_n_CompSpdTgt_Value(KeACCR_n_CompressorSpd_Dial);
    }
    else
    {
        /* SignalConversion generated from: '<S1>/CompressorSpdTgt_AftDial_FUNC' incorporates:
         *  Outport: '<Root>/VeACCR_n_CompSpdTgt'
         */
        (void)Rte_Write_VeACCR_n_CompSpdTgt_Value(ACCR_ac_B.Switch1);
    }

    /* End of Switch: '<S13>/Switch' */

    /* Gain: '<S20>/Gain' */
    VeACCR_b_AC_CompElecPwr_FA =
        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ks;

    /* Switch: '<S12>/Switch1' incorporates:
     *  Constant: '<S33>/Calib'
     */
    if (KeACCR_b_HVAC_CompPwrUsage_FA_SD)
    {
        /* Switch: '<S12>/Switch1' incorporates:
         *  Constant: '<S32>/Calib'
         */
        VeACCR_b_HVAC_CompPwrUsage_FA = KeACCR_b_HVAC_CompPwrUsage_FA_Dial;
    }
    else
    {
        /* Switch: '<S12>/Switch1' */
        VeACCR_b_HVAC_CompPwrUsage_FA = VeACCR_b_AC_CompElecPwr_FA;
    }

    /* End of Switch: '<S12>/Switch1' */

    /* Switch: '<S10>/Switch' incorporates:
     *  Constant: '<S26>/Calib'
     */
    if (KeACCR_b_AC_CompEnb_SD)
    {
        /* Switch: '<S10>/Switch' incorporates:
         *  Constant: '<S27>/Calib'
         */
        Switch_c = KeACCR_e_AC_CompEnb_Dial;
    }
    else
    {
        /* Switch: '<S10>/Switch' incorporates:
         *  Switch: '<S4>/Switch1'
         */
        Switch_c = VeACCR_e_CompSpdEnb_ADVC;
    }

    /* End of Switch: '<S10>/Switch' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DVC_FIN'
     */
    /* Switch: '<S4>/Switch' */
    if (VeACCF_b_Comp_DVC_Lim_AD)
    {
        /* Switch: '<S4>/Switch' */
        ACCR_ac_B.Switch1 = ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_f1;
    }
    else
    {
        /* Switch: '<S4>/Switch' */
        ACCR_ac_B.Switch1 = ACCR_ac_B.VariantMerge_For_Variant_Source_VariantS[0];
    }

    /* End of Switch: '<S4>/Switch' */

    /* Outputs for Atomic SubSystem: '<S44>/Hysteresis' */
    /* Switch: '<S45>/Switch1' incorporates:
     *  Constant: '<S45>/ConstantValue'
     *  Constant: '<S47>/Calib'
     *  Constant: '<S49>/Calib'
     *  RelationalOperator: '<S45>/GreaterThan'
     *  RelationalOperator: '<S45>/GreaterThan1'
     *  UnitDelay: '<S45>/UnitDelay'
     */
    if (ACCR_ac_B.Switch1 > KeACCR_n_CompSpd_min_Deadband_RPM)
    {
        ACCR_ac_DW.UnitDelay_DSTATE_g = true;
    }
    else
    {
        ACCR_ac_DW.UnitDelay_DSTATE_g = ((ACCR_ac_B.Switch1 >=
            KeACCR_n_CompSpd_DeadbandMinTh) && (ACCR_ac_DW.UnitDelay_DSTATE_g));
    }

    /* End of Switch: '<S45>/Switch1' */
    /* End of Outputs for SubSystem: '<S44>/Hysteresis' */

    /* Switch: '<S46>/Switch1' incorporates:
     *  Constant: '<S48>/Calib'
     *  Logic: '<S44>/Logical1'
     *  RelationalOperator: '<S44>/Comparison3'
     *  UnitDelay: '<S45>/UnitDelay'
     */
    if ((ACCR_ac_DW.UnitDelay_DSTATE_g) && (ACCR_ac_B.Switch1 <
            KeACCR_n_CompSpd_max_Deadband_RPM))
    {
        /* Switch: '<S46>/Switch1' */
        ACCR_ac_B.Switch1 = KeACCR_n_CompSpd_max_Deadband_RPM;
    }

    /* End of Switch: '<S46>/Switch1' */

    /* Switch: '<S4>/Switch1' */
    if (VeACCF_b_Comp_DVC_Lim_AD)
    {
        /* Switch: '<S4>/Switch2' incorporates:
         *  Constant: '<S43>/Calib'
         *  RelationalOperator: '<S4>/Comparison3'
         */
        if (ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_f1 >=
                KeACCR_n_DVC_EACEnableCmd_Limit)
        {
            /* Switch: '<S4>/Switch1' incorporates:
             *  Constant: '<S41>/Constant'
             */
            VeACCR_e_CompSpdEnb_ADVC = CeACCR_e_ACComp_Enable;
        }
        else
        {
            /* Switch: '<S4>/Switch1' incorporates:
             *  Constant: '<S42>/Constant'
             */
            VeACCR_e_CompSpdEnb_ADVC = CeACCR_e_ACComp_Disable;
        }

        /* End of Switch: '<S4>/Switch2' */
    }
    else
    {
        /* Switch: '<S4>/Switch1' incorporates:
         *  VariantMerge generated from: '<S7>/VariantSource3'
         */
        VeACCR_e_CompSpdEnb_ADVC =
            ACCR_ac_B.VariantMerge_For_Variant_Source_Varian_g;
    }

    /* End of Switch: '<S4>/Switch1' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/HTSO_Vlv_DVC'
     */
    /* If: '<S5>/If' incorporates:
     *  Constant: '<S52>/Constant'
     *  RelationalOperator: '<S5>/Comparison3'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
     */
    if (((uint32)ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_dx) ==
            CeTAIR_e_Short_Term_Adjustment)
    {
        /* Outputs for IfAction SubSystem: '<S5>/ChkCompDVC_Limits' incorporates:
         *  ActionPort: '<S51>/ActionPort'
         */
        /* If: '<S51>/If' */
        if (VeACCR_b_LimCheckingStatus_AD)
        {
            /* Outputs for IfAction SubSystem: '<S51>/ChkPmpLimits' incorporates:
             *  ActionPort: '<S55>/ActionPort'
             */
            /* Merge: '<S5>/Merge' incorporates:
             *  Constant: '<S57>/Constant'
             *  Gain: '<S56>/Gain'
             *  Logic: '<S55>/Logical3'
             *  RelationalOperator: '<S55>/Comparison2'
             *  RelationalOperator: '<S55>/Comparison3'
             *  RelationalOperator: '<S55>/Comparison4'
             */
            VeACCF_b_Comp_DVC_Lim_AM2 = (((((uint32)
                ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_if) !=
                CePMTR_e_DisableAll) &&
                (!ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ga)) &&
                (!VeACCR_b_InFieldMode_AD));

            /* End of Outputs for SubSystem: '<S51>/ChkPmpLimits' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S51>/CheckDVCLimits1' incorporates:
             *  ActionPort: '<S54>/ActionPort'
             */
            /* Merge: '<S5>/Merge' incorporates:
             *  Constant: '<S54>/TRUEConstant'
             *  Gain: '<S56>/Gain'
             *  SignalConversion generated from: '<S54>/True'
             */
            VeACCF_b_Comp_DVC_Lim_AM2 = true;

            /* End of Outputs for SubSystem: '<S51>/CheckDVCLimits1' */
        }

        /* End of If: '<S51>/If' */
        /* End of Outputs for SubSystem: '<S5>/ChkCompDVC_Limits' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S5>/CheckDVCLimits1' incorporates:
         *  ActionPort: '<S50>/ActionPort'
         */
        /* Merge: '<S5>/Merge' incorporates:
         *  Constant: '<S50>/Constant12'
         *  SignalConversion generated from: '<S50>/False'
         */
        VeACCF_b_Comp_DVC_Lim_AM2 = false;

        /* End of Outputs for SubSystem: '<S5>/CheckDVCLimits1' */
    }

    /* End of If: '<S5>/If' */

    /* Switch: '<S53>/Switch' incorporates:
     *  Constant: '<S59>/Calib'
     */
    if (KeACCF_b_Comp_DVC_Lim_Slct)
    {
        /* Switch: '<S53>/Switch' incorporates:
         *  Constant: '<S58>/Calib'
         */
        VeACCF_b_Comp_DVC_Lim_AD = KeACCF_b_Comp_DVC_Lim_Dial;
    }
    else
    {
        /* Switch: '<S53>/Switch' */
        VeACCF_b_Comp_DVC_Lim_AD = VeACCF_b_Comp_DVC_Lim_AM2;
    }

    /* End of Switch: '<S53>/Switch' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ACCO_FUNC'
     */
    /* Switch: '<S9>/Switch' incorporates:
     *  Constant: '<S25>/Calib'
     */
    if (KeACCR_b_ACclutchReq_SD)
    {
        /* Outport: '<Root>/VeACCR_b_AC_ClutchReq' incorporates:
         *  Constant: '<S24>/Calib'
         *  SignalConversion generated from: '<S1>/AC_ClutchReq_FUNC'
         */
        (void)Rte_Write_VeACCR_b_AC_ClutchReq_Value(KeACCR_b_ACclutchReq_D);
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S1>/Subsystem1' */
        /* Outport: '<Root>/VeACCR_b_AC_ClutchReq' incorporates:
         *  SignalConversion generated from: '<S1>/AC_ClutchReq_FUNC'
         *  SignalConversion generated from: '<S7>/AC_ClutchReq_BD'
         */
        (void)Rte_Write_VeACCR_b_AC_ClutchReq_Value
            (ACCR_ac_B.VariantMerge_For_Variant_Source_Varian_h[3]);

        /* End of Outputs for SubSystem: '<S1>/Subsystem1' */
    }

    /* End of Switch: '<S9>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeACCR_e_AC_CompEnb' incorporates:
     *  SignalConversion generated from: '<S1>/AC_CompEnb_FUNC'
     *  Switch: '<S10>/Switch'
     */
    (void)Rte_Write_VeACCR_e_AC_CompEnb_Value(Switch_c);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ACCO_FUNC'
     */
    /* Outport: '<Root>/VeACCR_n_ChillerV_OpenMaxRPM' incorporates:
     *  Constant: '<S14>/Calib'
     *  Gain: '<S23>/Gain'
     *  SignalConversion generated from: '<S1>/ChillerVOpenMaxRPM_AfterDial_FUNC'
     */
    (void)Rte_Write_VeACCR_n_ChillerV_OpenMaxRPM_Value
        (KeACCR_n_ChillerVlvOpenMaxRPM);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Subsystem1'
     */
    /* Outport: '<Root>/VeACCR_b_eAC4CabInhibtd' incorporates:
     *  SignalConversion generated from: '<S1>/DisableCabinConditioning_Out'
     *  SignalConversion generated from: '<S7>/DisableCabinConditioning'
     */
    (void)Rte_Write_VeACCR_b_eAC4CabInhibtd_Value
        (ACCR_ac_B.VariantMerge_For_Variant_Source_Varian_h[2]);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ACCO_FUNC'
     */
    /* Switch: '<S11>/Switch' incorporates:
     *  Constant: '<S29>/Calib'
     */
    if (KeACCR_b_ECVD_CurrentTgt_SD)
    {
        /* Outport: '<Root>/VeACCR_I_ECVD_CurrentTgt' incorporates:
         *  Constant: '<S28>/Calib'
         *  SignalConversion generated from: '<S1>/ECVD_CurrentTgt_FUNC'
         */
        (void)Rte_Write_VeACCR_I_ECVD_CurrentTgt_Value
            (KeACCR_I_ECVD_CurrentTgt_D);
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S1>/Subsystem1' */
        /* Outport: '<Root>/VeACCR_I_ECVD_CurrentTgt' incorporates:
         *  SignalConversion generated from: '<S1>/ECVD_CurrentTgt_FUNC'
         *  SignalConversion generated from: '<S7>/ECVD_CurrentTgt'
         */
        (void)Rte_Write_VeACCR_I_ECVD_CurrentTgt_Value
            (ACCR_ac_B.VariantMerge_For_Variant_Source_VariantS[2]);

        /* End of Outputs for SubSystem: '<S1>/Subsystem1' */
    }

    /* End of Switch: '<S11>/Switch' */

    /* Outport: '<Root>/VeACCR_I_FtERVShtMaxCrrnt' incorporates:
     *  Constant: '<S15>/Calib'
     *  Lookup_n-D: '<S16>/Vector'
     *  SignalConversion generated from: '<S1>/FtERVShtMaxCrrnt_FUNC'
     */
    (void)Rte_Write_VeACCR_I_FtERVShtMaxCrrnt_Value(look1_iflf_binlca_16a
        (KeACCR_n_FtERVShutMaxRPM, ((const float32 *)
        &(KxACCR_k_rpmcurrentconversn[0])), ((const float32 *)
        &(KtACCR_k_rpmcurrentconversn[0])), 11U));

    /* Outport: '<Root>/VeACCR_n_FtERV_ShutMaxRPM' incorporates:
     *  Constant: '<S15>/Calib'
     *  Gain: '<S21>/Gain'
     *  SignalConversion generated from: '<S1>/FtERVShutMaxRPM_AftDial_FUNC'
     */
    (void)Rte_Write_VeACCR_n_FtERV_ShutMaxRPM_Value(KeACCR_n_FtERVShutMaxRPM);

    /* Switch: '<S12>/Switch' incorporates:
     *  Constant: '<S34>/Calib'
     *  Switch: '<S12>/Switch2'
     */
    if (KeACCR_b_HVAC_CompPwrUsage_SelDial)
    {
        /* Outport: '<Root>/VeACCR_P_HVAC_CompPwrUsage' incorporates:
         *  Constant: '<S30>/Calib'
         *  SignalConversion generated from: '<S1>/HVAC_CompPwrUsage_AD_FUNC'
         */
        (void)Rte_Write_VeACCR_P_HVAC_CompPwrUsage_Value
            (KeACCR_P_HVAC_CompPwrUsage_Dial);
    }
    else if (VeACCR_b_HVAC_CompPwrUsage_FA)
    {
        /* Outport: '<Root>/VeACCR_P_HVAC_CompPwrUsage' incorporates:
         *  Constant: '<S31>/Calib'
         *  SignalConversion generated from: '<S1>/HVAC_CompPwrUsage_AD_FUNC'
         *  Switch: '<S12>/Switch2'
         */
        (void)Rte_Write_VeACCR_P_HVAC_CompPwrUsage_Value
            (KeACCR_P_HVAC_CompPwrUsage_FailSafe);
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S1>/Subsystem1' */
        /* Outport: '<Root>/VeACCR_P_HVAC_CompPwrUsage' incorporates:
         *  SignalConversion generated from: '<S1>/HVAC_CompPwrUsage_AD_FUNC'
         *  SignalConversion generated from: '<S7>/HVAC_CompPwrUsage'
         */
        (void)Rte_Write_VeACCR_P_HVAC_CompPwrUsage_Value
            (ACCR_ac_B.VariantMerge_For_Variant_Source_VariantS[1]);

        /* End of Outputs for SubSystem: '<S1>/Subsystem1' */
    }

    /* End of Switch: '<S12>/Switch' */

    /* Switch: '<S17>/Switch' incorporates:
     *  Constant: '<S37>/Calib'
     *  Constant: '<S38>/Calib'
     *  Merge: '<Root>/Merge_1'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
     */
    if (KeACCR_b_OilMigOpnVlv_SelDial)
    {
        rtb_AND_mh = KeACCR_b_OilMigOpnVlv_Dial;
    }
    else
    {
        rtb_AND_mh = Rte_IrvRead_ACCR_MedTEH_OilMigOpnVlv_write_IRV();
    }

    /* End of Switch: '<S17>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeACCR_b_OilMigOpnVlv' incorporates:
     *  SignalConversion generated from: '<S1>/OilMigOpnVlv_AftDial_FUNC'
     */
    (void)Rte_Write_VeACCR_b_OilMigOpnVlv_Value(rtb_AND_mh);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ACCO_FUNC'
     */
    /* Switch: '<S18>/Switch' incorporates:
     *  Constant: '<S39>/Calib'
     *  Constant: '<S40>/Calib'
     *  Merge: '<Root>/Merge_2'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtACCR_FUNC_MedTEHInport113'
     */
    if (KeACCR_b_OverTempImminent_SelDial)
    {
        rtb_AND_mh = KeACCR_b_OverTempImminent_Dial;
    }
    else
    {
        rtb_AND_mh = Rte_IrvRead_ACCR_MedTEH_OverTempImminent_write_IRV();
    }

    /* End of Switch: '<S18>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeACCR_b_OverTempImminent' incorporates:
     *  SignalConversion generated from: '<S1>/OverTempImminent_AftDial_FUNC'
     */
    (void)Rte_Write_VeACCR_b_OverTempImminent_Value(rtb_AND_mh);

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S1>/OilMigOpnVlv_write'
     * */
    Rte_IrvWrite_ACCR_MedTEH_OilMigOpnVlv_write_IRV
        (ACCR_ac_B.VariantMerge_For_Variant_Source_Varian_h[0]);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Subsystem1'
     */
    /* Merge: '<Root>/Merge_2' incorporates:
     *  SignalConversion generated from: '<S1>/OverTempImminent_write'
     *  SignalConversion generated from: '<S7>/OverTempImminent'
     */
    Rte_IrvWrite_ACCR_MedTEH_OverTempImminent_write_IRV
        (ACCR_ac_B.VariantMerge_For_Variant_Source_Varian_h[1]);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/ACCR_FUNC_MedTEH' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
#endif

}

#endif

/* Output function */
FUNC(void, ACCR_CODE) ACCR_PwrOn(void)
{

#if Rte_SysCon_Variant_ACCR_FUNC_2

    boolean rtb_OutportBufferForOilMigOpnVlv_INIT_wr;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/ACCR_FUNC_PwrOn'
     */
#if Rte_SysCon_Variant_ACCR_FUNC_2 || Rte_SysCon_Variant_ACCR_FUNC_3

    /* S-Function (fcgen): '<S2>/FcnCallGen' */
#if Rte_SysCon_Variant_ACCR_FUNC_2

    /* Outputs for Function Call SubSystem: '<S2>/Subsystem' */
    /* SignalConversion generated from: '<S1074>/OilMigOpnVlv_INIT' incorporates:
     *  Constant: '<S1086>/Calib'
     */
    ACCR_ac_B.OutportBufferForOilMigOpnVlv_INIT = KeACCR_b_OilMigOpnVlv_INIT;

    /* SignalConversion generated from: '<S1074>/OverTempImminent_INIT' incorporates:
     *  Constant: '<S1087>/Calib'
     */
    ACCR_ac_B.OutportBufferForOverTempImminent_INIT =
        KeACCR_b_OverTempImminent_INIT;

    /* End of Outputs for SubSystem: '<S2>/Subsystem' */
#endif

#if Rte_SysCon_Variant_ACCR_FUNC_3

    /* Outputs for Function Call SubSystem: '<S2>/ACCR_NF_DIAL' */
    /* SignalConversion generated from: '<S1073>/CompressorSpdTgt_AftDial_NF' incorporates:
     *  Constant: '<S1084>/Calib'
     */
    ACCR_ac_B.OutportBufferForCompressorSpdTgt_AftDial = KeACCR_n_CompSpd_NFdial;

    /* SignalConversion generated from: '<S1073>/OilMigOpnVlv_AftDial_NF' incorporates:
     *  Constant: '<S1080>/Calib'
     */
    ACCR_ac_B.OutportBufferForOilMigOpnVlv_AftDial_NF =
        KeACCR_b_OilMigOpnVlv_NFdial;

    /* SignalConversion generated from: '<S1073>/OverTempImminent_AftDial_NF' incorporates:
     *  Constant: '<S1081>/Calib'
     */
    ACCR_ac_B.OutportBufferForOverTempImminent_AftDial =
        KeACCR_b_OverTempImminent_NFdial;

    /* SignalConversion generated from: '<S1073>/FtERVShutMaxRPM_AftDial_NF' incorporates:
     *  Constant: '<S1085>/Calib'
     */
    ACCR_ac_B.OutportBufferForFtERVShutMaxRPM_AftDial_ =
        KeACCR_n_FtERVShutMaxRPM_NFdial;

    /* SignalConversion generated from: '<S1073>/HVAC_CompPwrUsage_NF' incorporates:
     *  Constant: '<S1078>/Calib'
     */
    ACCR_ac_B.OutportBufferForHVAC_CompPwrUsage_NF =
        KeACCR_P_HVAC_CompPwrUsage_NFDial;

    /* SignalConversion generated from: '<S1073>/AC_CompEnb_NF' incorporates:
     *  Constant: '<S1075>/Constant'
     */
    ACCR_ac_B.OutportBufferForAC_CompEnb_NF = ACCR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S1073>/AC_ClutchReq_NF' incorporates:
     *  Constant: '<S1079>/Calib'
     */
    ACCR_ac_B.OutportBufferForAC_ClutchReq_NF = KeACCR_b_AC_ClutchReq_NF;

    /* SignalConversion generated from: '<S1073>/ECVD_CurrentTgt_NF' incorporates:
     *  Constant: '<S1076>/Calib'
     */
    ACCR_ac_B.OutportBufferForECVD_CurrentTgt_NF = KeACCR_I_ECVD_CurrentTgt_NF;

    /* SignalConversion generated from: '<S1073>/FtERVShtMaxCrrnt_NF' incorporates:
     *  Constant: '<S1077>/Calib'
     */
    ACCR_ac_B.OutportBufferForFtERVShtMaxCrrnt_NF = KeACCR_I_FtERVShtMaxCrrnt_NF;

    /* SignalConversion generated from: '<S1073>/ChillerVOpenMaxRPM_AfterDial_NF' incorporates:
     *  Constant: '<S1083>/Calib'
     */
    ACCR_ac_B.OutportBufferForChillerVOpenMaxRPM_After =
        KeACCR_n_ChillerV_OpenMaxRPM_NF;

    /* SignalConversion generated from: '<S1073>/DisableCabinConditioning_Out' incorporates:
     *  Constant: '<S1082>/Calib'
     */
    ACCR_ac_B.OutportBufferForDisableCabinConditioning =
        KeACCR_b_eAC4CabInhibtd_NF;

    /* End of Outputs for SubSystem: '<S2>/ACCR_NF_DIAL' */
#endif

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
#endif

    /* SignalConversion generated from: '<S2>/AC_ClutchReq_NF' incorporates:
     *  SignalConversion generated from: '<S2>/AC_CompEnb_NF'
     *  SignalConversion generated from: '<S2>/ChillerVOpenMaxRPM_AfterDial_NF'
     *  SignalConversion generated from: '<S2>/CompressorSpdTgt_AftDial_NF'
     *  SignalConversion generated from: '<S2>/DisableCabinConditioning_Out'
     *  SignalConversion generated from: '<S2>/ECVD_CurrentTgt_NF'
     *  SignalConversion generated from: '<S2>/FtERVShtMaxCrrnt_NF'
     *  SignalConversion generated from: '<S2>/FtERVShutMaxRPM_AftDial_NF'
     *  SignalConversion generated from: '<S2>/HVAC_CompPwrUsage_NF'
     *  SignalConversion generated from: '<S2>/OilMigOpnVlv_AftDial_NF'
     */
#if Rte_SysCon_Variant_ACCR_FUNC_3

    /* Outport: '<Root>/VeACCR_b_AC_ClutchReq' */
    (void)Rte_Write_VeACCR_b_AC_ClutchReq_Value
        (ACCR_ac_B.OutportBufferForAC_ClutchReq_NF);

    /* Outport: '<Root>/VeACCR_e_AC_CompEnb' incorporates:
     *  SignalConversion generated from: '<S1073>/AC_CompEnb_NF'
     */
    (void)Rte_Write_VeACCR_e_AC_CompEnb_Value
        (ACCR_ac_B.OutportBufferForAC_CompEnb_NF);

    /* Outport: '<Root>/VeACCR_n_ChillerV_OpenMaxRPM' */
    (void)Rte_Write_VeACCR_n_ChillerV_OpenMaxRPM_Value
        (ACCR_ac_B.OutportBufferForChillerVOpenMaxRPM_After);

    /* Outport: '<Root>/VeACCR_n_CompSpdTgt' */
    (void)Rte_Write_VeACCR_n_CompSpdTgt_Value
        (ACCR_ac_B.OutportBufferForCompressorSpdTgt_AftDial);

    /* Outport: '<Root>/VeACCR_b_eAC4CabInhibtd' */
    (void)Rte_Write_VeACCR_b_eAC4CabInhibtd_Value
        (ACCR_ac_B.OutportBufferForDisableCabinConditioning);

    /* Outport: '<Root>/VeACCR_I_ECVD_CurrentTgt' */
    (void)Rte_Write_VeACCR_I_ECVD_CurrentTgt_Value
        (ACCR_ac_B.OutportBufferForECVD_CurrentTgt_NF);

    /* Outport: '<Root>/VeACCR_I_FtERVShtMaxCrrnt' */
    (void)Rte_Write_VeACCR_I_FtERVShtMaxCrrnt_Value
        (ACCR_ac_B.OutportBufferForFtERVShtMaxCrrnt_NF);

    /* Outport: '<Root>/VeACCR_n_FtERV_ShutMaxRPM' */
    (void)Rte_Write_VeACCR_n_FtERV_ShutMaxRPM_Value
        (ACCR_ac_B.OutportBufferForFtERVShutMaxRPM_AftDial_);

    /* Outport: '<Root>/VeACCR_P_HVAC_CompPwrUsage' */
    (void)Rte_Write_VeACCR_P_HVAC_CompPwrUsage_Value
        (ACCR_ac_B.OutportBufferForHVAC_CompPwrUsage_NF);

    /* Outport: '<Root>/VeACCR_b_OilMigOpnVlv' */
    (void)Rte_Write_VeACCR_b_OilMigOpnVlv_Value
        (ACCR_ac_B.OutportBufferForOilMigOpnVlv_AftDial_NF);

#endif

    /* End of SignalConversion generated from: '<S2>/AC_ClutchReq_NF' */

    /* SignalConversion generated from: '<S2>/OilMigOpnVlv_INIT_write' */
#if Rte_SysCon_Variant_ACCR_FUNC_2

    /* SignalConversion generated from: '<S2>/OilMigOpnVlv_INIT_write' */
    rtb_OutportBufferForOilMigOpnVlv_INIT_wr =
        ACCR_ac_B.OutportBufferForOilMigOpnVlv_INIT;

#endif

    /* End of SignalConversion generated from: '<S2>/OilMigOpnVlv_INIT_write' */

    /* SignalConversion generated from: '<S2>/OverTempImminent_AftDial_NF' */
#if Rte_SysCon_Variant_ACCR_FUNC_3

    /* Outport: '<Root>/VeACCR_b_OverTempImminent' */
    (void)Rte_Write_VeACCR_b_OverTempImminent_Value
        (ACCR_ac_B.OutportBufferForOverTempImminent_AftDial);

#endif

    /* End of SignalConversion generated from: '<S2>/OverTempImminent_AftDial_NF' */

    /* SignalConversion generated from: '<S2>/OverTempImminent_INIT_write' incorporates:
     *  SignalConversion generated from: '<S2>/OilMigOpnVlv_INIT_write'
     */
#if Rte_SysCon_Variant_ACCR_FUNC_2

    /* Merge: '<Root>/Merge_1' */
    Rte_IrvWrite_ACCR_PwrOn_OilMigOpnVlv_write_IRV
        (rtb_OutportBufferForOilMigOpnVlv_INIT_wr);

    /* Merge: '<Root>/Merge_2' */
    Rte_IrvWrite_ACCR_PwrOn_OverTempImminent_write_IRV
        (ACCR_ac_B.OutportBufferForOverTempImminent_INIT);

#endif

    /* End of SignalConversion generated from: '<S2>/OverTempImminent_INIT_write' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, ACCR_CODE) ACCR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {

#if Rte_SysCon_Variant_ACCR_FUNC_2

        ACCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_gar = CeAVTR_e_NoEVACond;

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_3

        ACCR_ac_B.OutportBufferForAC_CompEnb_NF = CeACCR_e_ACComp_Enable;

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

        ACCR_ac_B.VariantMerge_For_Variant_Source_Varian_g =
            CeACCR_e_ACComp_Enable;

#endif

    }

    /* custom signals */
#if Rte_SysCon_Variant_ACCR_FUNC_2

    VeACCR_e_CompSpdEnb_ADVC = CeACCR_e_ACComp_Enable;

#endif

#if Rte_SysCon_Variant_ACCR_FUNC_2

    VeACCR_e_AC_CompEnb_BD = CeACCR_e_ACComp_Enable;

#endif

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/ACCR_FUNC_PwrOn'
     */
#if Rte_SysCon_Variant_ACCR_FUNC_2 || Rte_SysCon_Variant_ACCR_FUNC_3

    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
#if Rte_SysCon_Variant_ACCR_FUNC_2

    /* SystemInitialize for Function Call SubSystem: '<S2>/Subsystem' */
    /* SystemInitialize for SignalConversion generated from: '<S1074>/OilMigOpnVlv_INIT' incorporates:
     *  Constant: '<S1086>/Calib'
     */
    ACCR_ac_B.OutportBufferForOilMigOpnVlv_INIT = KeACCR_b_OilMigOpnVlv_INIT;

    /* SystemInitialize for SignalConversion generated from: '<S1074>/OverTempImminent_INIT' incorporates:
     *  Constant: '<S1087>/Calib'
     */
    ACCR_ac_B.OutportBufferForOverTempImminent_INIT =
        KeACCR_b_OverTempImminent_INIT;

    /* End of SystemInitialize for SubSystem: '<S2>/Subsystem' */
#endif

#if Rte_SysCon_Variant_ACCR_FUNC_3

    /* SystemInitialize for Function Call SubSystem: '<S2>/ACCR_NF_DIAL' */
    /* SystemInitialize for SignalConversion generated from: '<S1073>/CompressorSpdTgt_AftDial_NF' incorporates:
     *  Constant: '<S1084>/Calib'
     */
    ACCR_ac_B.OutportBufferForCompressorSpdTgt_AftDial = KeACCR_n_CompSpd_NFdial;

    /* SystemInitialize for SignalConversion generated from: '<S1073>/OilMigOpnVlv_AftDial_NF' incorporates:
     *  Constant: '<S1080>/Calib'
     */
    ACCR_ac_B.OutportBufferForOilMigOpnVlv_AftDial_NF =
        KeACCR_b_OilMigOpnVlv_NFdial;

    /* SystemInitialize for SignalConversion generated from: '<S1073>/OverTempImminent_AftDial_NF' incorporates:
     *  Constant: '<S1081>/Calib'
     */
    ACCR_ac_B.OutportBufferForOverTempImminent_AftDial =
        KeACCR_b_OverTempImminent_NFdial;

    /* SystemInitialize for SignalConversion generated from: '<S1073>/FtERVShutMaxRPM_AftDial_NF' incorporates:
     *  Constant: '<S1085>/Calib'
     */
    ACCR_ac_B.OutportBufferForFtERVShutMaxRPM_AftDial_ =
        KeACCR_n_FtERVShutMaxRPM_NFdial;

    /* SystemInitialize for SignalConversion generated from: '<S1073>/HVAC_CompPwrUsage_NF' incorporates:
     *  Constant: '<S1078>/Calib'
     */
    ACCR_ac_B.OutportBufferForHVAC_CompPwrUsage_NF =
        KeACCR_P_HVAC_CompPwrUsage_NFDial;

    /* SystemInitialize for SignalConversion generated from: '<S1073>/AC_CompEnb_NF' incorporates:
     *  Constant: '<S1075>/Constant'
     */
    ACCR_ac_B.OutportBufferForAC_CompEnb_NF = ACCR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S1073>/AC_ClutchReq_NF' incorporates:
     *  Constant: '<S1079>/Calib'
     */
    ACCR_ac_B.OutportBufferForAC_ClutchReq_NF = KeACCR_b_AC_ClutchReq_NF;

    /* SystemInitialize for SignalConversion generated from: '<S1073>/ECVD_CurrentTgt_NF' incorporates:
     *  Constant: '<S1076>/Calib'
     */
    ACCR_ac_B.OutportBufferForECVD_CurrentTgt_NF = KeACCR_I_ECVD_CurrentTgt_NF;

    /* SystemInitialize for SignalConversion generated from: '<S1073>/FtERVShtMaxCrrnt_NF' incorporates:
     *  Constant: '<S1077>/Calib'
     */
    ACCR_ac_B.OutportBufferForFtERVShtMaxCrrnt_NF = KeACCR_I_FtERVShtMaxCrrnt_NF;

    /* SystemInitialize for SignalConversion generated from: '<S1073>/ChillerVOpenMaxRPM_AfterDial_NF' incorporates:
     *  Constant: '<S1083>/Calib'
     */
    ACCR_ac_B.OutportBufferForChillerVOpenMaxRPM_After =
        KeACCR_n_ChillerV_OpenMaxRPM_NF;

    /* SystemInitialize for SignalConversion generated from: '<S1073>/DisableCabinConditioning_Out' incorporates:
     *  Constant: '<S1082>/Calib'
     */
    ACCR_ac_B.OutportBufferForDisableCabinConditioning =
        KeACCR_b_eAC4CabInhibtd_NF;

    /* End of SystemInitialize for SubSystem: '<S2>/ACCR_NF_DIAL' */
#endif

    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
#endif

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
#if Rte_SysCon_Variant_ACCR_FUNC_2

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
    /* SystemInitialize for Function Call SubSystem: '<Root>/ACCR_FUNC_MedTEH' */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Subsystem1'
     */
    /* SystemInitialize for Enabled SubSystem: '<S187>/Set_retract_RPM' */
    /* SystemInitialize for Outport: '<S232>/Output_Parameter' incorporates:
     *  Inport: '<S232>/Input_Parameter'
     */
    VeACCR_n_RPMretract = 9000.0F;

    /* End of SystemInitialize for SubSystem: '<S187>/Set_retract_RPM' */
#if Rte_SysCon_Variant_ACCR_FUNC_1

    /* SystemInitialize for Enabled SubSystem: '<S975>/Set_retract_RPM' */
    /* SystemInitialize for Outport: '<S995>/Output_Parameter' incorporates:
     *  Inport: '<S995>/Input_Parameter'
     */
    VeACCR_n_RPMretract_mHEV = 9000.0F;

    /* End of SystemInitialize for SubSystem: '<S975>/Set_retract_RPM' */
#endif

    /* SystemInitialize for VariantMerge generated from: '<S7>/VariantSource3' incorporates:
     *  Outport: '<S7>/AC_CompEnb_BD'
     */
    ACCR_ac_B.VariantMerge_For_Variant_Source_Varian_g = CeACCR_e_ACComp_Enable;

    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DVC_FIN'
     */
    /* SystemInitialize for Switch: '<S4>/Switch1' incorporates:
     *  Outport: '<S4>/CompressorSpdEnb_ADVC'
     */
    VeACCR_e_CompSpdEnb_ADVC = CeACCR_e_ACComp_Enable;

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for SubSystem: '<Root>/ACCR_FUNC_MedTEH' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
#endif

    /* SystemInitialize for Merge: '<Root>/Merge_3' incorporates:
     *  Merge: '<Root>/Merge_10'
     *  Merge: '<Root>/Merge_11'
     *  Merge: '<Root>/Merge_12'
     *  Merge: '<Root>/Merge_13'
     *  Merge: '<Root>/Merge_4'
     *  Merge: '<Root>/Merge_5'
     *  Merge: '<Root>/Merge_6'
     *  Merge: '<Root>/Merge_7'
     *  Merge: '<Root>/Merge_8'
     *  Merge: '<Root>/Merge_9'
     */
#if Rte_SysCon_Variant_ACCR_FUNC_2 || Rte_SysCon_Variant_ACCR_FUNC_3

    /* SystemInitialize for Outport: '<Root>/VeACCR_e_AC_CompEnb' */
    (void)Rte_Write_VeACCR_e_AC_CompEnb_Value(CeACCR_e_ACComp_Enable);

#endif

    /* End of SystemInitialize for Merge: '<Root>/Merge_3' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
