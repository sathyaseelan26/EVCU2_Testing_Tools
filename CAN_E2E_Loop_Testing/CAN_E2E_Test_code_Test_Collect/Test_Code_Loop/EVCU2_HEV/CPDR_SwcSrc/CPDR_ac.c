/*
 * File: CPDR_ac.c
 *
 * Code generated for Simulink model 'CPDR_ac'.
 *
 * Model version                  : 9.216
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sun Apr  7 07:07:52 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CPDR_ac.h"
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
#define START_SEC_CALIB_UNSPECIFIED_CPDR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_CPDR_2

static volatile CONST(float32, CPDR_VAR_INIT) HeCPDR_t_MedTED = 0.02F;/* Referenced by:
                                                                      * '<S90>/Calib'
                                                                      * '<S100>/Calib'
                                                                      * '<S131>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CPDR_11 || Rte_SysCon_Variant_CPDR_3 || Rte_SysCon_Variant_CPDR_4 || Rte_SysCon_Variant_CPDR_5 || Rte_SysCon_Variant_CPDR_6 || Rte_SysCon_Variant_CPDR_7 || Rte_SysCon_Variant_CPDR_8

static volatile CONST(float32, CPDR_VAR_INIT) HeCPDR_t_MedTEH = 0.1F;/* Referenced by:
                                                                      * '<S1032>/Calib'
                                                                      * '<S255>/Calib'
                                                                      * '<S451>/Calib'
                                                                      * '<S460>/Calib'
                                                                      * '<S559>/Calib'
                                                                      * '<S568>/Calib'
                                                                      * '<S614>/Calib'
                                                                      * '<S743>/Calib'
                                                                      * '<S898>/Calib'
                                                                      * '<S285>/Calib'
                                                                      * '<S289>/Calib'
                                                                      * '<S645>/Calib'
                                                                      * '<S778>/Calib'
                                                                      * '<S932>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CPDR_7

static volatile CONST(sint16, CPDR_VAR_INIT) KeCPDR_Cnt_EOPA_DryRunFlt_FailCnt =
    1;                                 /* Referenced by: '<S373>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static volatile CONST(sint16, CPDR_VAR_INIT) KeCPDR_Cnt_EOPA_DryRunFlt_SmpCnt =
    10;                                /* Referenced by: '<S374>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static volatile CONST(sint16, CPDR_VAR_INIT) KeCPDR_Cnt_EOPA_FunPer_FailCnt = 5;/* Referenced by: '<S424>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static volatile CONST(sint16, CPDR_VAR_INIT) KeCPDR_Cnt_EOPA_FunPer_SmpCnt = 10;/* Referenced by: '<S425>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static volatile CONST(sint16, CPDR_VAR_INIT) KeCPDR_Cnt_EOPB_DryRunFlt_FailCnt =
    1;                                 /* Referenced by: '<S481>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static volatile CONST(sint16, CPDR_VAR_INIT) KeCPDR_Cnt_EOPB_DryRunFlt_SmpCnt =
    10;                                /* Referenced by: '<S482>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static volatile CONST(sint16, CPDR_VAR_INIT) KeCPDR_Cnt_EOPB_FunPer_FailCnt = 5;/* Referenced by: '<S532>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static volatile CONST(sint16, CPDR_VAR_INIT) KeCPDR_Cnt_EOPB_FunPer_SmpCnt = 10;/* Referenced by: '<S533>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(sint16, CPDR_VAR_INIT) KeCPDR_Cnt_HTAP_FunPer_FailCnt = 0;/* Referenced by: '<S662>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(sint16, CPDR_VAR_INIT) KeCPDR_Cnt_HTAP_FunPer_SmpCnt = 0;/* Referenced by: '<S663>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(float32, CPDR_VAR_INIT)
    KeCPDR_Cnt_IUMPR_HTAP_MinConsecCnt_CmdOn = 2.0F;/* Referenced by: '<S586>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3 || Rte_SysCon_Variant_CPDR_7 || Rte_SysCon_Variant_CPDR_8

static volatile CONST(float32, CPDR_VAR_INIT)
    KeCPDR_Cnt_IUMPR_LTAP_MinConsecCnt_CmdOn = 2.0F;/* Referenced by:
                                                     * '<S339>/Calib'
                                                     * '<S410>/Calib'
                                                     * '<S518>/Calib'
                                                     */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(float32, CPDR_VAR_INIT)
    KeCPDR_Cnt_IUMPR_PECP2_MinConsecCnt_CmdOn = 2.0F;/* Referenced by: '<S814>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(float32, CPDR_VAR_INIT)
    KeCPDR_Cnt_IUMPR_PECP_MinConsecCnt_CmdOn = 2.0F;/* Referenced by: '<S990>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_11

static volatile CONST(float32, CPDR_VAR_INIT)
    KeCPDR_Cnt_IUMPR_PWM_EOP_MinConsecCnt_CmdOn = 2.0F;/* Referenced by: '<S1052>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static volatile CONST(float32, CPDR_VAR_INIT)
    KeCPDR_Cnt_IUMPR_TAP_MinConsecCnt_CmdOn = 2.0F;/* Referenced by: '<S80>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(sint16, CPDR_VAR_INIT) KeCPDR_Cnt_LTAP_DryRunFlt_FailCnt =
    100;                               /* Referenced by: '<S220>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(sint16, CPDR_VAR_INIT) KeCPDR_Cnt_LTAP_DryRunFlt_SmpCnt =
    125;                               /* Referenced by: '<S221>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(sint16, CPDR_VAR_INIT) KeCPDR_Cnt_LTAP_FunPer_FailCnt = 0;/* Referenced by: '<S302>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(sint16, CPDR_VAR_INIT) KeCPDR_Cnt_LTAP_FunPer_SmpCnt = 0;/* Referenced by: '<S303>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(sint16, CPDR_VAR_INIT) KeCPDR_Cnt_LTPP2_FunPer_FailCnt = 0;/* Referenced by: '<S791>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(sint16, CPDR_VAR_INIT) KeCPDR_Cnt_LTPP2_FunPer_SmpCnt = 0;/* Referenced by: '<S792>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(sint16, CPDR_VAR_INIT) KeCPDR_Cnt_LTPP_FunPer_FailCnt = 0;/* Referenced by: '<S945>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(sint16, CPDR_VAR_INIT) KeCPDR_Cnt_LTPP_FunPer_SmpCnt = 0;/* Referenced by: '<S946>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(sint16, CPDR_VAR_INIT) KeCPDR_Cnt_PECP2DryRunFlt_FailCnt =
    100;                               /* Referenced by: '<S709>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(sint16, CPDR_VAR_INIT) KeCPDR_Cnt_PECP2DryRunFlt_SmpCnt =
    125;                               /* Referenced by: '<S710>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(sint16, CPDR_VAR_INIT) KeCPDR_Cnt_PECPDryRunFlt_FailCnt =
    0;                                 /* Referenced by: '<S863>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(sint16, CPDR_VAR_INIT) KeCPDR_Cnt_PECPDryRunFlt_SmpCnt = 0;/* Referenced by: '<S864>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_11

static volatile CONST(sint16, CPDR_VAR_INIT) KeCPDR_Cnt_PWM_EOP_FunPer_FailCnt =
    5;                                 /* Referenced by: '<S1058>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_11

static volatile CONST(sint16, CPDR_VAR_INIT) KeCPDR_Cnt_PWM_EOP_FunPer_SmpCnt =
    10;                                /* Referenced by: '<S1059>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static volatile CONST(uint16, CPDR_VAR_INIT) KeCPDR_Cnt_PmpPerf_SetCodeThd = 3U;/* Referenced by: '<S91>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static volatile CONST(uint16, CPDR_VAR_INIT) KeCPDR_Cnt_PmpPerf_WarnCnt = 10U;/* Referenced by: '<S92>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_Pct_MaxPmpSpd = 0.1F;/* Referenced by: '<S147>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_T_EOPA_MinOilTemp = 30.0F;/* Referenced by: '<S370>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_T_EOPB_MinOilTemp = 30.0F;/* Referenced by: '<S478>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_T_HTAP_PumpTempLwrLim =
    -40.0F;                            /* Referenced by: '<S654>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_T_HTAP_PumpTempUprLim =
    150.0F;                            /* Referenced by: '<S655>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_T_LTAP_PumpTempLwrLim =
    -40.0F;                            /* Referenced by: '<S297>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_T_LTAP_PumpTempUprLim =
    150.0F;                            /* Referenced by: '<S298>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_T_LTPP2_PumpTempLwrLim =
    -40.0F;                            /* Referenced by: '<S785>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_T_LTPP2_PumpTempUprLim =
    150.0F;                            /* Referenced by: '<S786>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_T_LTPP_PumpTempLwrLim =
    -40.0F;                            /* Referenced by: '<S939>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_T_LTPP_PumpTempUprLim =
    150.0F;                            /* Referenced by: '<S940>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_U_BF1_SysVolt_D = 0.0F;/* Referenced by: '<S27>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_U_EOPA_MaxOprtngVltg =
    16.0F;                             /* Referenced by: '<S448>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_U_EOPA_MinOprtngVltg = 9.0F;/* Referenced by: '<S449>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_U_EOPB_MaxOprtngVltg =
    16.0F;                             /* Referenced by: '<S556>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_U_EOPB_MinOprtngVltg = 9.0F;/* Referenced by: '<S557>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_U_HTAP_MaxOprtngVltg =
    16.0F;                             /* Referenced by: '<S656>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_U_HTAP_MinOprtngVltg = 9.0F;/* Referenced by: '<S657>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_U_LTAP_MaxOprtngVltg =
    16.0F;                             /* Referenced by: '<S252>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_U_LTAP_MinOprtngVltg = 9.0F;/* Referenced by: '<S253>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_U_LTPP2_MaxOprtngVltg =
    16.0F;                             /* Referenced by: '<S787>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_U_LTPP2_MinOprtngVltg =
    9.0F;                              /* Referenced by: '<S788>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_U_LTPP_MaxOprtngVltg =
    16.0F;                             /* Referenced by: '<S941>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_U_LTPP_MinOprtngVltg = 9.0F;/* Referenced by: '<S942>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_11

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_U_PWM_EOP_MaxOprtngVltg =
    16.0F;                             /* Referenced by: '<S1041>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_11

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_U_PWM_EOP_MinOprtngVltg =
    9.0F;                              /* Referenced by: '<S1042>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_AuxPmpPerf_ThrmlEnbl = 0;/* Referenced by: '<S123>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_AuxPumpSpd_Act_SD = 0;/* Referenced by: '<S25>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_11

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_Aux_TF_Pmp_CM_Fdbck_SigRan_LtchEnbl = 1;/* Referenced by: '<S1060>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_BCP_DryRunSNAEnblCndsOV =
    0;                                 /* Referenced by: '<S266>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_BCP_DryRunSNAFault_En = 1;/* Referenced by: '<S299>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_BCP_SpdSNAEnblCndsOV = 0;/* Referenced by: '<S267>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_BCP_SpdSNAFault_En = 1;/* Referenced by: '<S300>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_BCP_VltgInRange_OV = 0;/* Referenced by: '<S271>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_BF1_SysVolt_SD = 0;/* Referenced by: '<S28>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_BPCM_LIN_BusOff_FA_D = 0;/* Referenced by: '<S29>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_BPCM_LIN_BusOff_FA_SD = 0;/* Referenced by: '<S30>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_BPCM_LIN_BusOff_SD = 0;/* Referenced by: '<S31>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_BPCM_LIN_BusOff_SgnlRcvd_D = 0;/* Referenced by: '<S33>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_BPCM_LIN_BusOff_SgnlRcvd_SD = 0;/* Referenced by: '<S34>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_BPCM_LOC_BCP_FA_D = 0;/* Referenced by: '<S35>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_BPCM_LOC_BCP_FA_SD = 0;/* Referenced by: '<S36>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_BPCM_LOC_BCP_SD = 0;/* Referenced by: '<S37>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_BPCM_LOC_BCP_SgnlRcvd_D =
    0;                                 /* Referenced by: '<S39>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_BPCM_LOC_BCP_SgnlRcvd_SD =
    0;                                 /* Referenced by: '<S40>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_BattCoolPmpOveSpd_LtchEnbl = 1;/* Referenced by: '<S222>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_BattCoolPmpPerf_LtchEnbl =
    1;                                 /* Referenced by: '<S304>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_ColdBiasStsChkDsbl = 0;/* Referenced by: '<S124>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_CoolPmpACtrlCktPerf_LtchEnbl = 1;/* Referenced by: '<S664>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_DryRun_Detection_RPM_OV =
    0;                                 /* Referenced by: '<S851>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_DsblDFailSafe_OvrdEnbl =
    0;                                 /* Referenced by: '<S41>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_DsblDFailSafe_OvrdVal = 0;/* Referenced by: '<S42>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_EOPA_SpdSNAEnblCndsOV = 0;/* Referenced by: '<S445>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_EOPA_SpdSNAFault_En = 0;/* Referenced by: '<S464>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_EOPB_SpdSNAEnblCndsOV = 0;/* Referenced by: '<S553>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_EOPB_SpdSNAFault_En = 0;/* Referenced by: '<S572>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_HTAP_ChkEnbl_D = 0;/* Referenced by: '<S1003>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_HTAP_ChkEnbl_SD = 0;/* Referenced by: '<S1004>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_HTAP_CmdLessLimEvent_OV =
    0;                                 /* Referenced by: '<S629>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_HTAP_CmdLessLim_Disbl = 1;/* Referenced by: '<S601>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_HTAP_DeltSpdCmdEnbl_OV =
    0;                                 /* Referenced by: '<S642>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_HTAP_FunPerFlt = 0;/* Referenced by: '<S630>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_HTAP_FunPer_MainRly_OV =
    0;                                 /* Referenced by: '<S631>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_HTAP_FunPer_ThrmlEnbl = 0;/* Referenced by: '<S632>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_HTAP_LINBusoff_FA_OV = 0;/* Referenced by: '<S633>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_HTAP_LIN_Bus = 0;/* Referenced by: '<S651>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_HTAP_LOCFltDtct = 1;/* Referenced by: '<S634>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_HTAP_MaxOpRPM_SD = 0;/* Referenced by: '<S43>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_HTAP_MaxSpdChk_OV = 0;/* Referenced by: '<S643>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_HTAP_MinSpdChk_OV = 0;/* Referenced by: '<S644>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_HTAP_PumpTempChk_OV = 0;/* Referenced by: '<S635>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_HTAP_SpdSNAEnblCndsOV = 0;/* Referenced by: '<S626>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_HTAP_SpdSNAFault_En = 0;/* Referenced by: '<S660>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_HTAP_Temp_FA_OV = 1;/* Referenced by: '<S636>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_HTAP_ThrmlRlyCtrlCkt_FA_OV = 0;/* Referenced by: '<S637>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_HTAP_VltgInRange_OV = 0;/* Referenced by: '<S638>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_HTAuxPumpDryRun_OV = 1;/* Referenced by: '<S639>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_HTAuxPump_LmpHMEvent_OV =
    1;                                 /* Referenced by: '<S653>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_HTAuxPump_LmpHM_OV = 1;/* Referenced by: '<S640>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_HT_AuxPmpMntrRPMEvent_OV =
    1;                                 /* Referenced by: '<S659>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_HT_AuxPmpMntrRPM_OV = 1;/* Referenced by: '<S641>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_EOPA_DryRun_EOPADryRun_ChkEnbl = 0;/* Referenced by: '<S400>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_EOPA_DryRun_EOPAPerf_ChkEnbl = 0;/* Referenced by: '<S401>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_EOPA_DryRun_LINBus1_ChkEnbl = 0;/* Referenced by: '<S402>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_EOPA_DryRun_LOC_ChkEnbl = 0;/* Referenced by: '<S403>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_EOPA_Perf_EOPADryRun_ChkEnbl = 0;/* Referenced by: '<S417>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_EOPA_Perf_EOPAPerf_ChkEnbl = 0;/* Referenced by: '<S418>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_EOPA_Perf_LINBus1_ChkEnbl = 0;/* Referenced by: '<S419>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_EOPA_Perf_LOC_ChkEnbl = 0;/* Referenced by: '<S420>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_EOPB_DryRun_EOPBDryRun_ChkEnbl = 0;/* Referenced by: '<S508>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_EOPB_DryRun_EOPBPerf_ChkEnbl = 0;/* Referenced by: '<S509>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_EOPB_DryRun_LINBus3_ChkEnbl = 0;/* Referenced by: '<S510>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_EOPB_DryRun_LOC_ChkEnbl = 0;/* Referenced by: '<S511>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_EOPB_Perf_EOPBDryRun_ChkEnbl = 0;/* Referenced by: '<S525>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_EOPB_Perf_EOPBPerf_ChkEnbl = 0;/* Referenced by: '<S526>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_EOPB_Perf_LINBus3_ChkEnbl = 0;/* Referenced by: '<S527>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_EOPB_Perf_LOC_ChkEnbl = 0;/* Referenced by: '<S528>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_HTAP_Perf_CrktChkEnbl = 1;/* Referenced by: '<S594>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_IUMPR_HTAP_Perf_D = 0;/* Referenced by: '<S1005>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_HTAP_Perf_HTAP_PerfChkEnbl = 1;/* Referenced by: '<S595>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_HTAP_Perf_LINBus1_ChkEnbl = 0;/* Referenced by: '<S596>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_HTAP_Perf_LINBus2_ChkEnbl = 1;/* Referenced by: '<S597>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_HTAP_Perf_LOC_ChkEnbl = 1;/* Referenced by: '<S598>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_IUMPR_HTAP_Perf_SD = 0;/* Referenced by: '<S1006>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_LTAP_DryRun_CANePTBus_ChkEnbl = 0;/* Referenced by: '<S327>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_LTAP_DryRun_CrktChkEnbl = 0;/* Referenced by: '<S328>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_LTAP_DryRun_InvData_ChkEnbl = 0;/* Referenced by: '<S329>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_LTAP_DryRun_LINBus1_ChkEnbl = 0;/* Referenced by: '<S330>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_LTAP_DryRun_LOC_BECM_ChkEnbl = 0;/* Referenced by: '<S331>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_LTAP_DryRun_LOC_ChkEnbl = 0;/* Referenced by: '<S332>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_LTAP_DryRun_LTAP_PerfChkEnbl = 0;/* Referenced by: '<S333>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_LTAP_Perf_CANePTBus_ChkEnbl = 1;/* Referenced by: '<S350>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_LTAP_Perf_CrktChkEnbl = 1;/* Referenced by: '<S351>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_IUMPR_LTAP_Perf_D = 0;/* Referenced by: '<S1007>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_LTAP_Perf_DryRun_ChkEnbl = 0;/* Referenced by: '<S352>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_LTAP_Perf_InvData_ChkEnbl = 0;/* Referenced by: '<S353>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_LTAP_Perf_LINBus1_ChkEnbl = 0;/* Referenced by: '<S354>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_LTAP_Perf_LOC_BECM_ChkEnbl = 0;/* Referenced by: '<S355>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_LTAP_Perf_LOC_ChkEnbl = 0;/* Referenced by: '<S356>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_LTAP_Perf_LTAP_PerfChkEnbl = 1;/* Referenced by: '<S357>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_IUMPR_LTAP_Perf_SD = 0;/* Referenced by: '<S1008>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_IUMPR_LTPP2_DryRn_D = 0;/* Referenced by: '<S1009>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_IUMPR_LTPP2_DryRn_SD = 0;/* Referenced by: '<S1010>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_IUMPR_LTPP2_Perf_D = 0;/* Referenced by: '<S1011>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_IUMPR_LTPP2_Perf_SD = 0;/* Referenced by: '<S1012>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_IUMPR_LTPP_DryRn_D = 0;/* Referenced by: '<S1013>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_IUMPR_LTPP_DryRn_SD = 0;/* Referenced by: '<S1014>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_IUMPR_LTPP_Perf_D = 0;/* Referenced by: '<S1015>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_IUMPR_LTPP_Perf_SD = 0;/* Referenced by: '<S1016>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_PECP2_DryRn_CrktChkEnbl = 1;/* Referenced by: '<S823>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_PECP2_DryRn_LINBus1_ChkEnbl = 1;/* Referenced by: '<S824>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_PECP2_DryRn_LINBus3_ChkEnbl = 0;/* Referenced by: '<S825>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_PECP2_DryRn_LOC_ChkEnbl = 1;/* Referenced by: '<S826>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_PECP2_Perf_CrktChkEnbl = 1;/* Referenced by: '<S832>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_PECP2_Perf_LINBus1_ChkEnbl = 1;/* Referenced by: '<S833>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_PECP2_Perf_LINBus3_ChkEnbl = 0;/* Referenced by: '<S834>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_PECP2_Perf_LOC_ChkEnbl = 1;/* Referenced by: '<S835>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_PECP2_Perf_PECP2_PerfChkEnbl = 0;/* Referenced by: '<S836>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_PECP_DryRn_CrktChkEnbl = 1;/* Referenced by: '<S969>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_PECP_DryRn_LINBus1_ChkEnbl = 0;/* Referenced by: '<S970>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_PECP_DryRn_LINBus2_ChkEnbl = 1;/* Referenced by: '<S971>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_PECP_DryRn_LOC_ChkEnbl = 1;/* Referenced by: '<S972>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_PECP_Perf_CrktChkEnbl = 1;/* Referenced by: '<S979>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_PECP_Perf_DryRun_ChkEnbl = 1;/* Referenced by: '<S980>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_PECP_Perf_LINBus1_ChkEnbl = 0;/* Referenced by: '<S981>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_PECP_Perf_LINBus2_ChkEnbl = 1;/* Referenced by: '<S982>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_PECP_Perf_LOC_ChkEnbl = 1;/* Referenced by: '<S983>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_PECP_Perf_PECP_PerfChkEnbl = 1;/* Referenced by: '<S984>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_TAP_Perf_LINBus_ChkEnbl = 1;/* Referenced by: '<S71>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_TAP_Perf_LOC_ChkEnbl = 1;/* Referenced by: '<S72>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_IUMPR_TAP_Perf_ThrmlRly_ChkEnbl = 1;/* Referenced by: '<S73>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_InputSpeed_SD = 0;/* Referenced by: '<S45>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LINBusOff_OV = 0;/* Referenced by: '<S125>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTAP_ChkEnbl_D = 0;/* Referenced by: '<S1017>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTAP_ChkEnbl_SD = 0;/* Referenced by: '<S1018>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTAP_CmdLessLimEvent_OV =
    0;                                 /* Referenced by: '<S272>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTAP_CmdLessLim_Disbl = 1;/* Referenced by: '<S239>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTAP_DeltSpdCmdEnbl_OV =
    0;                                 /* Referenced by: '<S282>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTAP_DryRun_ChkEnbl_Ovrd =
    0;                                 /* Referenced by: '<S223>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_LTAP_DryRun_Detection_RPM_Ovrd = 0;/* Referenced by: '<S214>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTAP_DryRun_FA_Ovrd = 0;/* Referenced by: '<S215>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTAP_DryRun_MainRly_OV =
    0;                                 /* Referenced by: '<S216>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTAP_DryRun_PumpPerf_Ovrd
    = 0;                               /* Referenced by: '<S217>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTAP_DryRun_ThrmlEnbl = 0;/* Referenced by: '<S218>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_LTAP_DryRun_ThrmlRlyCtrlCkt_Ovrd = 0;/* Referenced by: '<S219>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTAP_FunPerFlt = 0;/* Referenced by: '<S273>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTAP_FunPer_MainRly_OV =
    0;                                 /* Referenced by: '<S274>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTAP_FunPer_ThrmlEnbl = 0;/* Referenced by: '<S275>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTAP_MaxOpRPM_SD = 0;/* Referenced by: '<S47>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTAP_MaxSpdChk_OV = 0;/* Referenced by: '<S283>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTAP_MinSpdChk_OV = 0;/* Referenced by: '<S284>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTAP_PumpTempChk_OV = 0;/* Referenced by: '<S276>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTAP_Temp_FA_OV = 1;/* Referenced by: '<S277>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_LTAP_ThrmlRlyCtrlCkt_FA_OV = 0;/* Referenced by: '<S278>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTActPumpDryRun_OV = 1;/* Referenced by: '<S279>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTActPumpLmpHMEvent_OV =
    1;                                 /* Referenced by: '<S294>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTActPumpLmpHM_OV = 1;/* Referenced by: '<S280>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTActPumpMntrRPMEvent_OV =
    1;                                 /* Referenced by: '<S296>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTActPumpMntrRPM_OV = 1;/* Referenced by: '<S281>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP2_ChkEnbl_D = 0;/* Referenced by: '<S1019>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP2_ChkEnbl_SD = 0;/* Referenced by: '<S1020>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP2_CmdLessLimEvent_OV =
    0;                                 /* Referenced by: '<S762>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP2_CmdLessLim_Disbl =
    1;                                 /* Referenced by: '<S728>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP2_DeltSpdCmdEnbl_OV =
    0;                                 /* Referenced by: '<S775>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP2_DryRun_ChkEnbl_OV =
    0;                                 /* Referenced by: '<S711>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_LTPP2_DryRun_Detection_RPM_OV = 0;/* Referenced by: '<S697>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP2_DryRun_FA = 0;/* Referenced by: '<S698>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP2_DryRun_MainRly_OV =
    0;                                 /* Referenced by: '<S699>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP2_DryRun_ThrmlEnbl =
    0;                                 /* Referenced by: '<S700>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP2_FunPerFlt = 0;/* Referenced by: '<S763>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP2_FunPer_MainRly_OV =
    0;                                 /* Referenced by: '<S764>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP2_FunPer_ThrmlEnbl =
    0;                                 /* Referenced by: '<S765>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP2_LINBusoff_FA_OV = 0;/* Referenced by:
                                                                      * '<S701>/Calib'
                                                                      * '<S766>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP2_LOCFltDtct = 1;/* Referenced by:
                                                                      * '<S702>/Calib'
                                                                      * '<S767>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CPDR_1

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP2_MaxOpRPM_SD = 0;/* Referenced by: '<S49>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP2_MaxSpdChk_OV = 0;/* Referenced by: '<S776>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP2_MinSpdChk_OV = 0;/* Referenced by: '<S777>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP2_PumpTempChk_OV = 0;/* Referenced by: '<S768>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP2_SpdSNAEnblCndsOV =
    0;                                 /* Referenced by: '<S756>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP2_SpdSNAFault_En = 1;/* Referenced by: '<S789>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP2_Temp_FA_OV = 1;/* Referenced by: '<S769>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_LTPP2_ThrmlRlyCtrlCkt_FA_OV = 0;/* Referenced by:
                                              * '<S703>/Calib'
                                              * '<S770>/Calib'
                                              */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP2_VltgInRange_OV = 0;/* Referenced by: '<S771>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP_ChkEnbl_D = 0;/* Referenced by: '<S1021>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP_ChkEnbl_SD = 0;/* Referenced by: '<S1022>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP_CmdLessLimEvent_OV =
    0;                                 /* Referenced by: '<S916>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP_CmdLessLim_Disbl = 1;/* Referenced by: '<S882>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP_DeltSpdCmdEnbl_OV =
    0;                                 /* Referenced by: '<S929>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP_DryRun_ChkEnbl_OV =
    0;                                 /* Referenced by: '<S865>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP_DryRun_FA = 0;/* Referenced by: '<S852>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP_DryRun_MainRly_OV =
    0;                                 /* Referenced by: '<S853>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP_DryRun_ThrmlEnbl = 0;/* Referenced by: '<S854>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP_FunPerFlt = 0;/* Referenced by: '<S917>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP_FunPer_MainRly_OV =
    0;                                 /* Referenced by: '<S918>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP_FunPer_ThrmlEnbl = 0;/* Referenced by: '<S919>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP_LINBusoff_FA_OV = 0;/* Referenced by:
                                                                      * '<S855>/Calib'
                                                                      * '<S920>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP_LOCFltDtct = 1;/* Referenced by:
                                                                      * '<S856>/Calib'
                                                                      * '<S921>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CPDR_1

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP_MaxOpRPM_SD = 0;/* Referenced by: '<S51>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP_MaxSpdChk_OV = 0;/* Referenced by: '<S930>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP_MinSpdChk_OV = 0;/* Referenced by: '<S931>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP_PumpTempChk_OV = 0;/* Referenced by: '<S922>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP_SpdSNAEnblCndsOV = 0;/* Referenced by: '<S911>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP_SpdSNAFault_En = 1;/* Referenced by: '<S943>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP_Temp_FA_OV = 1;/* Referenced by: '<S923>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_LTPP_ThrmlRlyCtrlCkt_FA_OV = 0;/* Referenced by:
                                             * '<S857>/Calib'
                                             * '<S924>/Calib'
                                             */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPP_VltgInRange_OV = 0;/* Referenced by: '<S925>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPsvPump2DryRun_OV = 1;/* Referenced by: '<S772>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPsvPump2MntrRPMEvent_OV
    = 1;                               /* Referenced by: '<S755>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPsvPump2MntrRPM_OV = 1;/* Referenced by: '<S773>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPsvPump2_LmpHMEvent_OV =
    1;                                 /* Referenced by: '<S753>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPsvPump2_LmpHM_OV = 1;/* Referenced by: '<S774>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPsvPumpDryRun_OV = 1;/* Referenced by: '<S926>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPsvPumpMntrRPMEvent_OV =
    1;                                 /* Referenced by: '<S910>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPsvPumpMntrRPM_OV = 1;/* Referenced by: '<S927>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPsvPump_LmpHMEvent_OV =
    1;                                 /* Referenced by: '<S908>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_LTPsvPump_LmpHM_OV = 1;/* Referenced by: '<S928>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_MtrElect_CooPumBOvrSpd_LtchEnbl = 1;/* Referenced by: '<S712>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_MtrElect_CoolPumAOvrSpd_LtchEnbl = 1;/* Referenced by: '<S866>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_MtrElect_CoolPumBCtrlPerf_LtchEnbl = 1;/* Referenced by: '<S793>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_PECP2_LIN_Bus = 0;/* Referenced by:
                                                                      * '<S708>/Calib'
                                                                      * '<S784>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_PECP_LIN_Bus = 0;/* Referenced by:
                                                                      * '<S862>/Calib'
                                                                      * '<S938>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CPDR_2

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_PmpPerf_Fail1OV = 0;/* Referenced by: '<S167>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_PmpPerf_Fail2OV = 1;/* Referenced by: '<S168>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_PmpPerf_XYEnbl = 0;/* Referenced by: '<S116>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_PostCode_OvrdEnbl = 0;/* Referenced by: '<S53>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_PostCode_OvrdVal = 0;/* Referenced by: '<S54>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_PropSysActv_D = 0;/* Referenced by: '<S55>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_PropSysActv_SD = 0;/* Referenced by: '<S56>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_PwrElecPmpPerf_LtchEnbl =
    1;                                 /* Referenced by: '<S947>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_PwrtrnOilPmp1OvrSpd_LtchEnbl = 1;/* Referenced by: '<S375>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_PwrtrnOilPmp1Perf_LtchEnbl = 1;/* Referenced by: '<S426>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_PwrtrnOilPmp2OvrSpd_LtchEnbl = 1;/* Referenced by: '<S483>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static volatile CONST(boolean, CPDR_VAR_INIT)
    KeCPDR_b_PwrtrnOilPmp2Perf_LtchEnbl = 1;/* Referenced by: '<S534>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_RPMCmdChkEnbl = 0;/* Referenced by: '<S126>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_RunCrankActive_D = 0;/* Referenced by: '<S57>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_RunCrankActive_SD = 0;/* Referenced by: '<S58>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_TAPSpdChkEnbl_App1OV = 0;/* Referenced by: '<S169>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_TAPSpdChkEnbl_App2OV = 1;/* Referenced by: '<S170>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_TAP_LossCom_OV = 0;/* Referenced by: '<S127>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_ThrmlRlyCtrlCkt_FA_OV = 0;/* Referenced by: '<S128>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static volatile CONST(boolean, CPDR_VAR_INIT) KeCPDR_b_TransAuxPmp_Cmd_SD = 0;/* Referenced by: '<S59>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static volatile CONST(TeBPCR_e_LIN_BusOff, CPDR_VAR_INIT)
    KeCPDR_e_BPCM_LIN_BusOff_D = CeBPCR_e_LIN_BusOff_Disabled;/* Referenced by: '<S32>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static volatile CONST(TeBPCR_e_LOC_BCP, CPDR_VAR_INIT) KeCPDR_e_BPCM_LOC_BCP_D =
    CeBPCR_e_LOC_BCP_False;            /* Referenced by: '<S38>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(TePMPR_e_FTSNA, CPDR_VAR_INIT) KeCPDR_e_LTAP_DryRun_Chk =
    CePMPR_e_FTSNA_False;              /* Referenced by: '<S205>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(TePMPR_e_FTSNA, CPDR_VAR_INIT) KeCPDR_e_PECP2DryRunChk =
    CePMPR_e_FTSNA_False;              /* Referenced by: '<S690>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(TePMPR_e_FTSNA, CPDR_VAR_INIT) KeCPDR_e_PECPDryRunChk =
    CePMPR_e_FTSNA_False;              /* Referenced by: '<S844>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_AuxPumpSpd_Act_D = 0.0F;/* Referenced by: '<S26>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5 || Rte_SysCon_Variant_CPDR_6

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_DryRun_Detection_RPM =
    4500.0F;                           /* Referenced by:
                                        * '<S704>/Calib'
                                        * '<S858>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_CPDR_7

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_EOPA_FunPer_DesRPM =
    700.0F;                            /* Referenced by: '<S465>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_EOPA_MaxCmdSpd = 6000.0F;/* Referenced by: '<S452>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_EOPA_MinCmdSpd = 800.0F;/* Referenced by: '<S453>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_EOPA_MinCmdThrshld =
    800.0F;                            /* Referenced by: '<S405>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_EOPA_PmpPerf_DeltSpdbig =
    250.0F;                            /* Referenced by: '<S454>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_EOPA_PmpPerf_DeltSpdsmall
    = 50.0F;                           /* Referenced by: '<S455>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_EOPA_RcvrySpdTgt_UppTh =
    1200.0F;                           /* Referenced by: '<S372>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_EOPB_FunPer_DesRPM =
    700.0F;                            /* Referenced by: '<S573>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_EOPB_MaxCmdSpd = 6000.0F;/* Referenced by: '<S560>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_EOPB_MinCmdSpd = 800.0F;/* Referenced by: '<S561>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_EOPB_MinCmdThrshld =
    800.0F;                            /* Referenced by: '<S513>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_EOPB_PmpPerf_DeltSpdbig =
    250.0F;                            /* Referenced by: '<S562>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_EOPB_PmpPerf_DeltSpdsmall
    = 50.0F;                           /* Referenced by: '<S563>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_EOPB_RcvrySpdTgt_UppTh =
    1200.0F;                           /* Referenced by: '<S480>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_HTAP_FunPer_DesRPM = 0.0F;/* Referenced by: '<S602>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_HTAP_MaxOpRPM_D = 0.0F;/* Referenced by: '<S44>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_HTAP_MinCmdThrshld =
    800.0F;                            /* Referenced by: '<S578>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_HTA_PmpPerf_DeltSpdbig =
    0.0F;                              /* Referenced by: '<S615>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_HTA_PmpPerf_DeltSpdsmall =
    0.0F;                              /* Referenced by: '<S616>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_HTA_PmpPerf_MaxSpd = 0.0F;/* Referenced by: '<S617>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_HTA_PmpPerf_MinSpd = 0.0F;/* Referenced by: '<S618>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_IUMPR_TAP_MinCmdThrshld =
    900.0F;                            /* Referenced by: '<S75>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_InputSpeed_D = 0.0F;/* Referenced by: '<S46>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_LTAP_DryRun_Detection_RPM
    = 4500.0F;                         /* Referenced by: '<S213>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_LTAP_FunPer_DesRPM = 0.0F;/* Referenced by: '<S240>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_LTAP_MaxOpRPM_D = 0.0F;/* Referenced by: '<S48>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_LTAP_MinCmdThrshld =
    800.0F;                            /* Referenced by: '<S186>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_LTA_PmpPerf_DeltSpdbig =
    0.0F;                              /* Referenced by: '<S256>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_LTA_PmpPerf_DeltSpdsmall =
    0.0F;                              /* Referenced by: '<S257>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_LTA_PmpPerf_MaxSpd = 0.0F;/* Referenced by: '<S258>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_LTA_PmpPerf_MinSpd = 0.0F;/* Referenced by: '<S259>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_LTPP2_FunPer_DesRPM =
    0.0F;                              /* Referenced by: '<S729>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_LTPP2_MaxOpRPM_D = 0.0F;/* Referenced by: '<S50>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_LTPP_FunPer_DesRPM = 0.0F;/* Referenced by: '<S883>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_LTPP_MaxOpRPM_D = 0.0F;/* Referenced by: '<S52>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_LTP_Pmp2Perf_DeltSpdbig =
    0.0F;                              /* Referenced by: '<S744>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_LTP_Pmp2Perf_DeltSpdsmall
    = 0.0F;                            /* Referenced by: '<S745>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_LTP_Pmp2Perf_MaxSpd =
    0.0F;                              /* Referenced by: '<S746>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_LTP_Pmp2Perf_MinSpd =
    0.0F;                              /* Referenced by: '<S747>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_LTP_PmpPerf_DeltSpdbig =
    0.0F;                              /* Referenced by: '<S899>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_LTP_PmpPerf_DeltSpdsmall =
    0.0F;                              /* Referenced by: '<S900>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_LTP_PmpPerf_MaxSpd = 0.0F;/* Referenced by: '<S901>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_LTP_PmpPerf_MinSpd = 0.0F;/* Referenced by: '<S902>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_MinRPMCmnd = 792.0F;/* Referenced by: '<S129>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_PECP2_MinCmdThrshld =
    800.0F;                            /* Referenced by: '<S686>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_PECP_MinCmdThrshld =
    800.0F;                            /* Referenced by: '<S840>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_11

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_PWM_EOP_FunPer_DesRPM =
    700.0F;                            /* Referenced by: '<S1043>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_11

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_PWM_EOP_MaxCmdSpd =
    6000.0F;                           /* Referenced by: '<S1033>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_11

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_PWM_EOP_MinCmdSpd =
    800.0F;                            /* Referenced by: '<S1034>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_11

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_PWM_EOP_MinCmdThrshld =
    800.0F;                            /* Referenced by: '<S1047>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_11

static volatile CONST(float32, CPDR_VAR_INIT)
    KeCPDR_n_PWM_EOP_PmpPerf_DeltSpdbig = 250.0F;/* Referenced by: '<S1035>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_11

static volatile CONST(float32, CPDR_VAR_INIT)
    KeCPDR_n_PWM_EOP_PmpPerf_DeltSpdsmall = 50.0F;/* Referenced by: '<S1036>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_PmpPerf_DeltSpdbig =
    1000.0F;                           /* Referenced by: '<S132>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_PmpPerf_DeltSpdsmall =
    500.0F;                            /* Referenced by: '<S133>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_PmpPerf_MaxSpd = 1999.0F;/* Referenced by: '<S134>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_PmpPerf_MinSpd = 300.0F;/* Referenced by: '<S135>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_PmpPerf_NiMaxSpd = 450.0F;/* Referenced by: '<S117>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_n_TransAuxPmp_Cmd_D = 0.0F;/* Referenced by: '<S60>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_t_DiagDlyPropSysAct = 0.2F;/* Referenced by: '<S101>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_t_EOPA_PmpPerf_DeltSpd_Big =
    0.2F;                              /* Referenced by: '<S456>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static volatile CONST(float32, CPDR_VAR_INIT)
    KeCPDR_t_EOPA_PmpPerf_DeltSpd_Small = 0.2F;/* Referenced by: '<S457>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_t_EOPA_rpmSNA_WaitTime =
    1.0F;                              /* Referenced by: '<S461>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_t_EOPB_PmpPerf_DeltSpd_Big =
    0.2F;                              /* Referenced by: '<S564>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static volatile CONST(float32, CPDR_VAR_INIT)
    KeCPDR_t_EOPB_PmpPerf_DeltSpd_Small = 0.2F;/* Referenced by: '<S565>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_t_EOPB_rpmSNA_WaitTime =
    1.0F;                              /* Referenced by: '<S569>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_t_HTAP_rpmSNA_WaitTime =
    3.0F;                              /* Referenced by: '<S646>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_t_HTA_PmpPerf_DeltSpd_Big =
    0.0F;                              /* Referenced by: '<S619>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_t_HTA_PmpPerf_DeltSpd_Small
    = 0.0F;                            /* Referenced by: '<S620>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(float32, CPDR_VAR_INIT)
    KeCPDR_t_IUMPR_HTAP_MinConsecTime_CmdOn = 2.0F;/* Referenced by: '<S587>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static volatile CONST(float32, CPDR_VAR_INIT)
    KeCPDR_t_IUMPR_HTAP_MinCumlTime_CmdOn = 10.0F;/* Referenced by: '<S588>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3 || Rte_SysCon_Variant_CPDR_7 || Rte_SysCon_Variant_CPDR_8

static volatile CONST(float32, CPDR_VAR_INIT)
    KeCPDR_t_IUMPR_LTAP_MinConsecTime_CmdOn = 2.0F;/* Referenced by:
                                                    * '<S340>/Calib'
                                                    * '<S411>/Calib'
                                                    * '<S519>/Calib'
                                                    */

#endif

#if Rte_SysCon_Variant_CPDR_3 || Rte_SysCon_Variant_CPDR_7 || Rte_SysCon_Variant_CPDR_8

static volatile CONST(float32, CPDR_VAR_INIT)
    KeCPDR_t_IUMPR_LTAP_MinCumlTime_CmdOn = 10.0F;/* Referenced by:
                                                   * '<S341>/Calib'
                                                   * '<S412>/Calib'
                                                   * '<S520>/Calib'
                                                   */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(float32, CPDR_VAR_INIT)
    KeCPDR_t_IUMPR_PECP2_MinConsecTime_CmdOn = 2.0F;/* Referenced by: '<S815>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(float32, CPDR_VAR_INIT)
    KeCPDR_t_IUMPR_PECP2_MinCumlTime_CmdOn = 10.0F;/* Referenced by: '<S816>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(float32, CPDR_VAR_INIT)
    KeCPDR_t_IUMPR_PECP_MinConsecTime_CmdOn = 2.0F;/* Referenced by: '<S991>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(float32, CPDR_VAR_INIT)
    KeCPDR_t_IUMPR_PECP_MinCumlTime_CmdOn = 10.0F;/* Referenced by: '<S992>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_11

static volatile CONST(float32, CPDR_VAR_INIT)
    KeCPDR_t_IUMPR_PWM_EOP_MinConsecTime_CmdOn = 2.0F;/* Referenced by: '<S1053>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_11

static volatile CONST(float32, CPDR_VAR_INIT)
    KeCPDR_t_IUMPR_PWM_EOP_MinCumlTime_CmdOn = 10.0F;/* Referenced by: '<S1054>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static volatile CONST(float32, CPDR_VAR_INIT)
    KeCPDR_t_IUMPR_TAP_MinConsecTime_CmdOn = 2.0F;/* Referenced by: '<S81>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static volatile CONST(float32, CPDR_VAR_INIT)
    KeCPDR_t_IUMPR_TAP_MinCumlTime_CmdOn = 10.0F;/* Referenced by: '<S82>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_t_LTAP_DryRunSNA_WaitTime =
    3.0F;                              /* Referenced by: '<S286>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_t_LTAP_rpmSNA_WaitTime =
    3.0F;                              /* Referenced by: '<S290>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_t_LTA_PmpPerf_DeltSpd_Big =
    0.0F;                              /* Referenced by: '<S260>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_t_LTA_PmpPerf_DeltSpd_Small
    = 0.0F;                            /* Referenced by: '<S261>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_t_LTPP2_rpmSNA_WaitTime =
    3.0F;                              /* Referenced by: '<S779>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_t_LTPP_rpmSNA_WaitTime =
    3.0F;                              /* Referenced by: '<S933>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_t_LTP_Pmp2Perf_DeltSpd_Big =
    0.0F;                              /* Referenced by: '<S748>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static volatile CONST(float32, CPDR_VAR_INIT)
    KeCPDR_t_LTP_Pmp2Perf_DeltSpd_Small = 0.0F;/* Referenced by: '<S749>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_t_LTP_PmpPerf_DeltSpd_Big =
    0.0F;                              /* Referenced by: '<S903>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_t_LTP_PmpPerf_DeltSpd_Small
    = 0.0F;                            /* Referenced by: '<S904>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_t_Max_Montrng_Tm = 80.0F;/* Referenced by: '<S115>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_11

static volatile CONST(float32, CPDR_VAR_INIT)
    KeCPDR_t_PWM_EOP_PmpPerf_DeltSpd_Big = 0.2F;/* Referenced by: '<S1037>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_11

static volatile CONST(float32, CPDR_VAR_INIT)
    KeCPDR_t_PWM_EOP_PmpPerf_DeltSpd_Small = 0.2F;/* Referenced by: '<S1038>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_t_PmpPerf_DeltSpd_Big =
    1.0F;                              /* Referenced by: '<S136>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_t_PmpPerf_DeltSpd_Small =
    0.5F;                              /* Referenced by: '<S137>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static volatile CONST(float32, CPDR_VAR_INIT) KeCPDR_t_PmpPerf_RstWarnDly =
    10.0F;                             /* Referenced by: '<S93>/Calib' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static volatile CONST(float32, CPDR_VAR_INIT) KtCPDR_n_AuxPmp_OvrSpd[6] =
{
    1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F
} ;                                    /* Referenced by: '<S145>/Vector' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static volatile CONST(float32, CPDR_VAR_INIT) KtCPDR_n_AuxPmp_UndrSpd[6] =
{
    500.0F, 500.0F, 500.0F, 500.0F, 500.0F, 500.0F
} ;                                    /* Referenced by: '<S146>/Vector' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static volatile CONST(float32, CPDR_VAR_INIT) KxCPDR_n_AuxPmp_OvrSpd[6] =
{
    10.01F, 30.0F, 50.0F, 70.0F, 90.0F, 110.0F
} ;                                    /* Referenced by: '<S145>/Vector' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static volatile CONST(float32, CPDR_VAR_INIT) KxCPDR_n_AuxPmp_UndrSpd[6] =
{
    10.01F, 30.0F, 50.0F, 70.0F, 90.0F, 110.0F
} ;                                    /* Referenced by: '<S146>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_CPDR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CPDR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_CPDR_7

static VAR(uint16, CPDR_VAR_INIT) VeCPDR_Cnt_EOPA_DryRun_FailCnt;/* '<S384>/Switch1' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static VAR(uint16, CPDR_VAR_INIT) VeCPDR_Cnt_EOPA_DryRun_SmpCnt;/* '<S385>/Switch1' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static VAR(uint16, CPDR_VAR_INIT) VeCPDR_Cnt_EOPA_Perf_FailCnt;/* '<S435>/Switch1' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static VAR(uint16, CPDR_VAR_INIT) VeCPDR_Cnt_EOPA_Perf_SmpCnt;/* '<S436>/Switch1' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static VAR(uint16, CPDR_VAR_INIT) VeCPDR_Cnt_EOPB_DryRun_FailCnt;/* '<S492>/Switch1' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static VAR(uint16, CPDR_VAR_INIT) VeCPDR_Cnt_EOPB_DryRun_SmpCnt;/* '<S493>/Switch1' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static VAR(uint16, CPDR_VAR_INIT) VeCPDR_Cnt_EOPB_Perf_FailCnt;/* '<S543>/Switch1' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static VAR(uint16, CPDR_VAR_INIT) VeCPDR_Cnt_EOPB_Perf_SmpCnt;/* '<S544>/Switch1' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static VAR(uint16, CPDR_VAR_INIT) VeCPDR_Cnt_HTAP_Perf_FailCnt;/* '<S673>/Switch1' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static VAR(uint16, CPDR_VAR_INIT) VeCPDR_Cnt_HTAP_Perf_SmpCnt;/* '<S674>/Switch1' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static VAR(uint16, CPDR_VAR_INIT) VeCPDR_Cnt_LTAP_DryRun_FailCnt;/* '<S232>/Switch1' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static VAR(uint16, CPDR_VAR_INIT) VeCPDR_Cnt_LTAP_DryRun_SmpCnt;/* '<S233>/Switch1' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static VAR(uint16, CPDR_VAR_INIT) VeCPDR_Cnt_LTAP_Perf_FailCnt;/* '<S313>/Switch1' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static VAR(uint16, CPDR_VAR_INIT) VeCPDR_Cnt_LTAP_Perf_SmpCnt;/* '<S314>/Switch1' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static VAR(uint16, CPDR_VAR_INIT) VeCPDR_Cnt_LTPP2_DryRun_FailCnt;/* '<S721>/Switch1' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static VAR(uint16, CPDR_VAR_INIT) VeCPDR_Cnt_LTPP2_DryRun_SmpCnt;/* '<S722>/Switch1' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static VAR(uint16, CPDR_VAR_INIT) VeCPDR_Cnt_LTPP2_Perf_FailCnt;/* '<S802>/Switch1' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static VAR(uint16, CPDR_VAR_INIT) VeCPDR_Cnt_LTPP2_Perf_SmpCnt;/* '<S803>/Switch1' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static VAR(uint16, CPDR_VAR_INIT) VeCPDR_Cnt_LTPP_DryRun_FailCnt;/* '<S875>/Switch1' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static VAR(uint16, CPDR_VAR_INIT) VeCPDR_Cnt_LTPP_DryRun_SmpCnt;/* '<S876>/Switch1' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static VAR(uint16, CPDR_VAR_INIT) VeCPDR_Cnt_LTPP_Perf_FailCnt;/* '<S956>/Switch1' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static VAR(uint16, CPDR_VAR_INIT) VeCPDR_Cnt_LTPP_Perf_SmpCnt;/* '<S957>/Switch1' */

#endif

#if Rte_SysCon_Variant_CPDR_11

static VAR(uint16, CPDR_VAR_INIT) VeCPDR_Cnt_PWM_EOP_Perf_FailCnt;/* '<S1069>/Switch1' */

#endif

#if Rte_SysCon_Variant_CPDR_11

static VAR(uint16, CPDR_VAR_INIT) VeCPDR_Cnt_PWM_EOP_Perf_SmpCnt;/* '<S1070>/Switch1' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static VAR(uint16, CPDR_VAR_INIT) VeCPDR_Cnt_PmpPerf_LtchWarnCnt;/* '<S165>/MinMax1' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static VAR(uint16, CPDR_VAR_INIT) VeCPDR_Cnt_PmpPerf_WarnCnt;/* '<S156>/Switch1' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static VAR(float32, CPDR_VAR_INIT) VeCPDR_U_BF1_SysVolt_AD;/* '<S8>/Switch' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_BCP_CommonEnblConds;/* '<S264>/AND32' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_BCP_DryRunSNAConfirmed;/* '<S287>/AND' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_BCP_PerfEnblConds;/* '<S265>/AND12' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_BCP_SpdSNAConfirmed;/* '<S291>/AND' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_BCP_VltgInRange;/* '<S244>/Logical2' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_BPCM_LIN_BusOff_FA_AD;/* '<S9>/Switch1' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_BPCM_LIN_BusOff_SgnlRcvd_AD;/* '<S11>/Switch2' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_BPCM_LOC_BCP_FA_AD;/* '<S12>/Switch1' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_BPCM_LOC_BCP_SgnlRcvd_AD;/* '<S14>/Switch2' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_DsblDiagFailSafe_AD;/* '<S15>/Switch' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_EOPA_CommON;/* '<S361>/AND1' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_EOPA_CommonEnblConds;/* '<S442>/AND1' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_EOPA_DryRun_ChkEnbl;/* '<S365>/AND1' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_EOPA_DryRun_FltChk;/* '<S366>/AND2' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_EOPA_DryRun_FltDtct;/* '<S376>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_EOPA_FunPer_ChkEnbl;/* '<S422>/AND1' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_EOPA_FunPer_FltChk;/* '<S423>/AND18' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_EOPA_FunPer_FltDtct;/* '<S427>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_EOPA_PerfEnblConds;/* '<S443>/AND12' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_EOPA_PmpPerf_DeltSpdCmdEnbl;/* '<S443>/Logical14' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_EOPA_SpdSNAConfirmed;/* '<S462>/AND' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_EOPA_VltgInRange;/* '<S446>/Logical2' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_EOPB_CommON;/* '<S469>/AND1' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_EOPB_CommonEnblConds;/* '<S550>/AND1' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_EOPB_DryRun_ChkEnbl;/* '<S473>/AND1' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_EOPB_DryRun_FltChk;/* '<S474>/AND2' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_EOPB_DryRun_FltDtct;/* '<S484>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_EOPB_FunPer_ChkEnbl;/* '<S530>/AND1' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_EOPB_FunPer_FltChk;/* '<S531>/AND18' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_EOPB_FunPer_FltDtct;/* '<S535>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_EOPB_PerfEnblConds;/* '<S551>/AND12' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_EOPB_PmpPerf_DeltSpdCmdEnbl;/* '<S551>/Logical14' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_EOPB_SpdSNAConfirmed;/* '<S570>/AND' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_EOPB_VltgInRange;/* '<S554>/Logical2' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_HTAPP_LimpHmChek_Enb;/* '<S609>/Switch3' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_HTAP_CmdLessLim;/* '<S600>/Comparison1' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_HTAP_CommonEnblConds;/* '<S623>/AND3' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_HTAP_FunPer_FltChk;/* '<S600>/AND1' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_HTAP_FunPer_FltDtctPre;/* '<S603>/Unit Delay' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_HTAP_MntrChedEnb;/* '<S612>/Switch3' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_HTAP_PerfEnblConds;/* '<S624>/AND11' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_HTAP_PumpTempChk;/* '<S610>/Logical2' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_HTAP_SpdSNAConfirmed;/* '<S647>/AND' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_HTAP_VltgDrpFunPer_FltChk;/* '<S661>/AND22' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_HTAP_VltgInRange;/* '<S611>/Logical2' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_HTA_PmpPerf_DeltSpdCmdEnbl;/* '<S604>/Logical14' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_LTAP_CmdLessLim;/* '<S242>/Comparison1' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_LTAP_DryRun_ChkEnbl;/* '<S209>/AND3' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_LTAP_DryRun_FltDtct;/* '<S224>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_LTAP_FunPer_FltChk;/* '<S242>/AND1' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_LTAP_FunPer_FltDtctPre;/* '<S243>/Unit Delay' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_LTAP_LimpHmChek_Enb;/* '<S249>/Switch3' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_LTAP_MntrChedEnb;/* '<S250>/Switch3' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_LTAP_PumpTempChk;/* '<S251>/Logical2' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_LTAP_VltgDrpFunPer_FltChk;/* '<S301>/AND22' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_LTA_PmpPerf_DeltSpdCmdEnbl;/* '<S245>/Logical14' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_LTPP2_CmdLessLim;/* '<S731>/Comparison1' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_LTPP2_CommonEnblConds;/* '<S757>/AND33' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_LTPP2_DryRun_ChkEnbl;/* '<S691>/AND3' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_LTPP2_DryRun_FltDtct;/* '<S713>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_LTPP2_FunPer_FltChk;/* '<S731>/AND1' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_LTPP2_FunPer_FltDtctPre;/* '<S732>/Unit Delay' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_LTPP2_LimpHmChek_Enb;/* '<S736>/Switch3' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_LTPP2_MntrChedEnb;/* '<S737>/Switch3' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_LTPP2_PerfEnblConds;/* '<S758>/AND1' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_LTPP2_PumpTempChk;/* '<S740>/Logical2' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_LTPP2_SpdSNAConfirmed;/* '<S780>/AND' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_LTPP2_VltgDrpFunPer_FltChk;/* '<S790>/AND22' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_LTPP2_VltgInRange;/* '<S741>/Logical2' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_LTPP_CmdLessLim;/* '<S885>/Comparison1' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_LTPP_CommonEnblConds;/* '<S912>/AND3' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_LTPP_DryRun_ChkEnbl;/* '<S845>/AND3' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_LTPP_DryRun_FltDtct;/* '<S867>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_LTPP_FunPer_FltChk;/* '<S885>/AND1' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_LTPP_FunPer_FltDtctPre;/* '<S886>/Unit Delay' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_LTPP_LimpHmChek_Enb;/* '<S891>/Switch3' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_LTPP_MntrChedEnb;/* '<S892>/Switch3' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_LTPP_PerfEnblConds;/* '<S913>/AND12' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_LTPP_PumpTempChk;/* '<S895>/Logical2' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_LTPP_SpdSNAConfirmed;/* '<S934>/AND' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_LTPP_VltgDrpFunPer_FltChk;/* '<S944>/AND22' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_LTPP_VltgInRange;/* '<S896>/Logical2' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_LTP_Pmp2Perf_DeltSpdCmdEnbl;/* '<S733>/Logical14' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_LTP_PmpPerf_DeltSpdCmdEnbl;/* '<S887>/Logical14' */

#endif

#if Rte_SysCon_Variant_CPDR_11

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_PWM_EOP_CmdInSS;/* '<S1029>/Logical14' */

#endif

#if Rte_SysCon_Variant_CPDR_11

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_PWM_EOP_FunPer_ChkEnbl;/* '<S1024>/AND1' */

#endif

#if Rte_SysCon_Variant_CPDR_11

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_PWM_EOP_FunPer_FltChk;/* '<S1025>/Comparison2' */

#endif

#if Rte_SysCon_Variant_CPDR_11

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_PWM_EOP_FunPer_FltDtct;/* '<S1061>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_CPDR_11

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_PWM_EOP_SSCmdInRange;/* '<S1029>/AND12' */

#endif

#if Rte_SysCon_Variant_CPDR_11

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_PWM_EOP_VltgInRange;/* '<S1030>/Logical2' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_PmpPerf_CntEnbl;/* '<S95>/AND1' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_PmpPerf_CntEnbl1;/* '<S107>/Logical4' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_PmpPerf_CntEnbl2;/* '<S98>/Merge' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_PmpPerf_CntEnbl2_BM;/* '<S105>/Switch' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_PmpPerf_CurrSmplFail;/* '<S95>/AND5' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_PmpPerf_CurrSmplFail1;/* '<S143>/Logical1' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_PmpPerf_CurrSmplFail2;/* '<S144>/Logical7' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_PmpPerf_DeltSpdCmdEnbl;/* '<S99>/Logical14' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_PmpPerf_EnblCnd1;/* '<S108>/Logical11' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_PmpPerf_EnblCnd2;/* '<S105>/Logical2' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_PmpPerf_EnblCnd3;/* '<S105>/Logical1' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_PostCodeClrDiagDsbl_AD;/* '<S21>/Switch' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_PropSysActv_AD;/* '<S22>/Switch1' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_ResetCnts;/* '<S6>/OR3' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_ResetFOMs;/* '<S65>/Gain' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static VAR(boolean, CPDR_VAR_INIT) VeCPDR_b_RunCrankActive_AD;/* '<S23>/Switch' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static VAR(TeBPCR_e_LIN_BusOff, CPDR_VAR_INIT) VeCPDR_e_BPCM_LIN_BusOff_AD;/* '<S10>/Switch' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static VAR(TeBPCR_e_LOC_BCP, CPDR_VAR_INIT) VeCPDR_e_BPCM_LOC_BCP_AD;/* '<S13>/Switch' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static VAR(float32, CPDR_VAR_INIT) VeCPDR_n_AuxPumpSpdAct_AD;/* '<S7>/Switch' */

#endif

#if Rte_SysCon_Variant_CPDR_7

static VAR(float32, CPDR_VAR_INIT) VeCPDR_n_EOPA_FunPer_RPM_Error;/* '<S423>/Abs' */

#endif

#if Rte_SysCon_Variant_CPDR_8

static VAR(float32, CPDR_VAR_INIT) VeCPDR_n_EOPB_FunPer_RPM_Error;/* '<S531>/Abs' */

#endif

#if Rte_SysCon_Variant_CPDR_4

static VAR(float32, CPDR_VAR_INIT) VeCPDR_n_HTAP_FunPer_RPM_Error;/* '<S600>/Abs' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static VAR(float32, CPDR_VAR_INIT) VeCPDR_n_HTAP_MaxOpRPM_AD;/* '<S16>/Switch2' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static VAR(float32, CPDR_VAR_INIT) VeCPDR_n_InputSpeed_AD;/* '<S17>/Switch' */

#endif

#if Rte_SysCon_Variant_CPDR_3

static VAR(float32, CPDR_VAR_INIT) VeCPDR_n_LTAP_FunPer_RPM_Error;/* '<S242>/Abs' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static VAR(float32, CPDR_VAR_INIT) VeCPDR_n_LTAP_MaxOpRPM_AD;/* '<S18>/Switch2' */

#endif

#if Rte_SysCon_Variant_CPDR_6

static VAR(float32, CPDR_VAR_INIT) VeCPDR_n_LTPP2_FunPer_RPM_Error;/* '<S731>/Abs' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static VAR(float32, CPDR_VAR_INIT) VeCPDR_n_LTPP2_MaxOpRPM_AD;/* '<S19>/Switch1' */

#endif

#if Rte_SysCon_Variant_CPDR_5

static VAR(float32, CPDR_VAR_INIT) VeCPDR_n_LTPP_FunPer_RPM_Error;/* '<S885>/Abs' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static VAR(float32, CPDR_VAR_INIT) VeCPDR_n_LTPP_MaxOpRPM_AD;/* '<S20>/Switch1' */

#endif

#if Rte_SysCon_Variant_CPDR_11

static VAR(float32, CPDR_VAR_INIT) VeCPDR_n_PWM_EOP_FunPer_RPM_Error;/* '<S1025>/Abs' */

#endif

#if Rte_SysCon_Variant_CPDR_2

static VAR(float32, CPDR_VAR_INIT) VeCPDR_n_TAP_PmpPerf_RPM_Error;/* '<S143>/Subtraction2' */

#endif

#if Rte_SysCon_Variant_CPDR_1

static VAR(float32, CPDR_VAR_INIT) VeCPDR_n_TransAuxPmp_Cmd_AD;/* '<S24>/Switch' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CPDR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_CPDR
#include "MemMap.h"

CONST(ConstB_CPDR_ac_T, CPDR_VAR_INIT) CPDR_ac_ConstB =
{
    CeDFIB_e_Init,                     /* '<S1080>/Constant' */
    CeDFIB_e_Init,                     /* '<S1081>/Constant' */
    CeDFIB_e_Init,                     /* '<S1082>/Constant' */
    CeDFIB_e_Init,                     /* '<S1083>/Constant' */
    CeDFIB_e_Init,                     /* '<S1084>/Constant' */
    CeDFIB_e_Init,                     /* '<S1085>/Constant' */
    CeDFIB_e_Init,                     /* '<S1086>/Constant' */
    CeDFIB_e_Init,                     /* '<S1087>/Constant' */
    CeDFIB_e_Init,                     /* '<S1088>/Constant' */
    CeDFIB_e_Init,                     /* '<S1089>/Constant' */
    CeDFIB_e_Init,                     /* '<S1090>/Constant' */
    CeDFIB_e_Init,                     /* '<S1091>/Constant' */
    CeDFIB_e_Init,                     /* '<S1092>/Constant' */
    CeBPCR_e_LOC_BCP_False,            /* '<S1079>/Constant' */
    CeBPCR_e_LIN_BusOff_Disabled       /* '<S1078>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_CPDR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CPDR
#include "MemMap.h"

VAR(B_CPDR_ac_T, CPDR_VAR_INIT) CPDR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CPDR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CPDR
#include "MemMap.h"

VAR(DW_CPDR_ac_T, CPDR_VAR_INIT) CPDR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CPDR
#include "MemMap.h"
#if Rte_SysCon_Variant_CPDR_11 || Rte_SysCon_Variant_CPDR_3 || Rte_SysCon_Variant_CPDR_4 || Rte_SysCon_Variant_CPDR_5 || Rte_SysCon_Variant_CPDR_6 || Rte_SysCon_Variant_CPDR_7 || Rte_SysCon_Variant_CPDR_8

static FUNC(void, CPDR_CODE_LOCAL) CPDR_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CPDR_VAR_INIT)
    rty_FaultSts);

#endif

#if Rte_SysCon_Variant_CPDR_11 || Rte_SysCon_Variant_CPDR_3 || Rte_SysCon_Variant_CPDR_4 || Rte_SysCon_Variant_CPDR_5 || Rte_SysCon_Variant_CPDR_6 || Rte_SysCon_Variant_CPDR_7 || Rte_SysCon_Variant_CPDR_8

static FUNC(void, CPDR_CODE_LOCAL) CPDR_ac_Init_g(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CPDR_VAR_INIT)
    rty_FaultSts);

#endif

#if Rte_SysCon_Variant_CPDR_11 || Rte_SysCon_Variant_CPDR_3 || Rte_SysCon_Variant_CPDR_4 || Rte_SysCon_Variant_CPDR_5 || Rte_SysCon_Variant_CPDR_6 || Rte_SysCon_Variant_CPDR_7 || Rte_SysCon_Variant_CPDR_8

static FUNC(void, CPDR_CODE_LOCAL) CPDR_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CPDR_VAR_INIT)
    rty_FaultSts);

#endif

/*
 * Output and update for enable system:
 *    '<S224>/Fail'
 *    '<S305>/Fail'
 *    '<S376>/Fail'
 *    '<S427>/Fail'
 *    '<S484>/Fail'
 *    '<S535>/Fail'
 *    '<S665>/Fail'
 *    '<S713>/Fail'
 *    '<S794>/Fail'
 *    '<S867>/Fail'
 *    ...
 */
#if Rte_SysCon_Variant_CPDR_11 || Rte_SysCon_Variant_CPDR_3 || Rte_SysCon_Variant_CPDR_4 || Rte_SysCon_Variant_CPDR_5 || Rte_SysCon_Variant_CPDR_6 || Rte_SysCon_Variant_CPDR_7 || Rte_SysCon_Variant_CPDR_8

static FUNC(void, CPDR_CODE_LOCAL) CPDR_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CPDR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S224>/Fail' incorporates:
     *  EnablePort: '<S228>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S228>/FaultSts' incorporates:
         *  Constant: '<S234>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Fail;
    }

    /* End of Outputs for SubSystem: '<S224>/Fail' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S224>/Init'
 *    '<S305>/Init'
 *    '<S376>/Init'
 *    '<S427>/Init'
 *    '<S484>/Init'
 *    '<S535>/Init'
 *    '<S665>/Init'
 *    '<S713>/Init'
 *    '<S794>/Init'
 *    '<S867>/Init'
 *    ...
 */
#if Rte_SysCon_Variant_CPDR_11 || Rte_SysCon_Variant_CPDR_3 || Rte_SysCon_Variant_CPDR_4 || Rte_SysCon_Variant_CPDR_5 || Rte_SysCon_Variant_CPDR_6 || Rte_SysCon_Variant_CPDR_7 || Rte_SysCon_Variant_CPDR_8

static FUNC(void, CPDR_CODE_LOCAL) CPDR_ac_Init_g(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CPDR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S224>/Init' incorporates:
     *  EnablePort: '<S229>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S229>/FaultSts' incorporates:
         *  Constant: '<S235>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Init;
    }

    /* End of Outputs for SubSystem: '<S224>/Init' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S224>/Pass'
 *    '<S305>/Pass'
 *    '<S376>/Pass'
 *    '<S427>/Pass'
 *    '<S484>/Pass'
 *    '<S535>/Pass'
 *    '<S665>/Pass'
 *    '<S713>/Pass'
 *    '<S794>/Pass'
 *    '<S867>/Pass'
 *    ...
 */
#if Rte_SysCon_Variant_CPDR_11 || Rte_SysCon_Variant_CPDR_3 || Rte_SysCon_Variant_CPDR_4 || Rte_SysCon_Variant_CPDR_5 || Rte_SysCon_Variant_CPDR_6 || Rte_SysCon_Variant_CPDR_7 || Rte_SysCon_Variant_CPDR_8

static FUNC(void, CPDR_CODE_LOCAL) CPDR_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CPDR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S224>/Pass' incorporates:
     *  EnablePort: '<S230>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S230>/FaultSts' incorporates:
         *  Constant: '<S236>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Pass;
    }

    /* End of Outputs for SubSystem: '<S224>/Pass' */
}

#endif

/* Model step function for TID1 */
FUNC(void, CPDR_CODE) CPDR_MedTED(void) /* Explicit Task: MedTED */
{

#if Rte_SysCon_Variant_CPDR_2

    TeTAPR_e_TransAuxPmp_TrueFalseSNA tmpRead;

#endif

#if Rte_SysCon_Variant_CPDR_2

    TeTAPR_e_TransAuxPmp_FalseTrueSNA tmpRead_0;

#endif

#if Rte_SysCon_Variant_CPDR_1

    float32 rtb_OutportBufferForAuxPumpSpdAct_AD_w_d;

#endif

#if Rte_SysCon_Variant_CPDR_1

    float32 rtb_OutportBufferForBF1_SysVolt_AD;

#endif

#if Rte_SysCon_Variant_CPDR_1

    boolean rtb_OutportBufferForBPCM_LIN_BusOff_FA_k;

#endif

#if Rte_SysCon_Variant_CPDR_1

    boolean rtb_OutportBufferForBPCM_LIN_BusOff_Sg_h;

#endif

#if Rte_SysCon_Variant_CPDR_1

    boolean rtb_OutportBufferForBPCM_LOC_BCP_FA_AD_d;

#endif

#if Rte_SysCon_Variant_CPDR_1

    boolean rtb_OutportBufferForBPCM_LOC_BCP_SgnlR_b;

#endif

#if Rte_SysCon_Variant_CPDR_1

    boolean rtb_OutportBufferForDsblDiagFailSafe_A_o;

#endif

#if Rte_SysCon_Variant_CPDR_1

    float32 rtb_OutportBufferForHTAP_MaxOpRPM_AD_w_o;

#endif

#if Rte_SysCon_Variant_CPDR_1

    float32 rtb_OutportBufferForLTAP_MaxOpRPM_AD_w_n;

#endif

#if Rte_SysCon_Variant_CPDR_1

    float32 rtb_OutportBufferForLTPP2_MaxOpRPM_AD__k;

#endif

#if Rte_SysCon_Variant_CPDR_1

    float32 rtb_OutportBufferForLTPP_MaxOpRPM_AD_w_a;

#endif

#if Rte_SysCon_Variant_CPDR_1

    boolean rtb_OutportBufferForPostCodeClrDiagDsb_n;

#endif

#if Rte_SysCon_Variant_CPDR_1

    boolean rtb_OutportBufferForPropSysActv_AD_wri_n;

#endif

#if Rte_SysCon_Variant_CPDR_1

    float32 rtb_OutportBufferForTransAuxPmp_Cmd_AD_g;

#endif

#if Rte_SysCon_Variant_CPDR_2

    boolean rtb_OR1_ne;

#endif

#if Rte_SysCon_Variant_CPDR_2

    boolean rtb_AND_m;

#endif

#if Rte_SysCon_Variant_CPDR_2

    boolean rtb_GreaterThanorEqual7;

#endif

#if Rte_SysCon_Variant_CPDR_2

    boolean rtb_GreaterThanorEqual8;

#endif

#if Rte_SysCon_Variant_CPDR_2

    uint16 rtb_Switch1_oe;

#endif

#if Rte_SysCon_Variant_CPDR_2

    float32 rtb_TmpSignalConversionAtVeTFTR_T_TransO;

#endif

#if Rte_SysCon_Variant_CPDR_1

    TeBPCR_e_LIN_BusOff rtb_OutportBufferForBPCM_LIN_BusOff_AD_b;

#endif

#if Rte_SysCon_Variant_CPDR_1

    TeBPCR_e_LOC_BCP rtb_OutportBufferForBPCM_LOC_BCP_AD_wr_a;

#endif

#if Rte_SysCon_Variant_CPDR_2

    TePMTR_e_ThrmlDevisEnbl rtb_TmpSignalConversionAtVePMTR_e_Thrm_n;

#endif

#if Rte_SysCon_Variant_CPDR_2

    TeTAPR_e_TransAuxPmp_FalseTrueSNA rtb_TmpSignalConversionAtVePMIR_e_TAP_Co;

#endif

#if Rte_SysCon_Variant_CPDR_2

    sint32 VeCPDR_b_PmpPerf_EnblCnd1_tmp;

#endif

#if Rte_SysCon_Variant_CPDR_2

    uint32 VeCPDR_b_PmpPerf_EnblCnd1_tmp_0;

#endif

#if Rte_SysCon_Variant_CPDR_2

    sint32 VeCPDR_b_PmpPerf_EnblCnd1_tmp_1;

#endif

#if Rte_SysCon_Variant_CPDR_2

    uint32 VeCPDR_b_PmpPerf_EnblCnd1_tmp_2;

#endif

#if Rte_SysCon_Variant_CPDR_2

    sint32 VeCPDR_b_PmpPerf_EnblCnd1_tmp_3;

#endif

#if Rte_SysCon_Variant_CPDR_2

    uint32 VeCPDR_b_PmpPerf_EnblCnd1_tmp_4;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/CPDR_MedTED'
     */
    /* DataStoreWrite: '<S1>/DSW_StatusByte_ThrmlRlyCtrlCkt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_ThrmlRlyCtrlCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_ThrmlRlyCtrlCkt_Value
        (&CPDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommTAP' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommTAP'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommTAP_Value
        (&CPDR_ac_DW.StatusByte_LostCommTAP);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LIN1_BusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LIN1_BusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LIN1_BusOff_Value
        (&CPDR_ac_DW.StatusByte_LIN1_BusOff);

    /* SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp' incorporates:
     *  SignalConversion generated from: '<S1>/VePMIR_e_TAP_ColdBiasSts'
     *  SignalConversion generated from: '<S1>/VePMTR_e_ThrmlDevEnbl'
     */
#if Rte_SysCon_Variant_CPDR_2

    /* SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp' incorporates:
     *  Inport: '<Root>/VeTFTR_T_TransOilTemp'
     */
    (void)Rte_Read_VeTFTR_T_TransOilTemp_Value
        (&rtb_TmpSignalConversionAtVeTFTR_T_TransO);

    /* SignalConversion generated from: '<S1>/VePMIR_e_TAP_ColdBiasSts' incorporates:
     *  Inport: '<Root>/VePMIR_e_TAP_ColdBiasSts'
     */
    (void)Rte_Read_VePMIR_e_TAP_ColdBiasSts_Value
        (&rtb_TmpSignalConversionAtVePMIR_e_TAP_Co);

    /* SignalConversion generated from: '<S1>/VePMTR_e_ThrmlDevEnbl' incorporates:
     *  Inport: '<Root>/VePMTR_e_ThrmlDevEnbl'
     */
    (void)Rte_Read_VePMTR_e_ThrmlDevEnbl_Value
        (&rtb_TmpSignalConversionAtVePMTR_e_Thrm_n);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp' */
#if Rte_SysCon_Variant_CPDR_1 || Rte_SysCon_Variant_CPDR_2

    /* S-Function (fcgen): '<S1>/FcnCallGen' */
#if Rte_SysCon_Variant_CPDR_1

    /* Inport: '<Root>/VeTISR_n_InputSpeed' */
    (void)Rte_Read_VeTISR_n_InputSpeed_Value((&(VeCPDR_n_InputSpeed_AD)));

    /* Inport: '<Root>/VePMIR_n_AuxPumpSpdAct' */
    (void)Rte_Read_VePMIR_n_AuxPumpSpdAct_Value((&(VeCPDR_n_AuxPumpSpdAct_AD)));

    /* Inport: '<Root>/VeTAPR_n_TransAuxPmp_Cmd' */
    (void)Rte_Read_VeTAPR_n_TransAuxPmp_Cmd_Value((&(VeCPDR_n_TransAuxPmp_Cmd_AD)));

    /* Inport: '<Root>/VePMDR_b_RunCrankActive' */
    (void)Rte_Read_VePMDR_b_RunCrankActive_Value((&(VeCPDR_b_RunCrankActive_AD)));

    /* Inport: '<Root>/VePMPR_n_HTAP_MaxOpRPM' */
    (void)Rte_Read_VePMPR_n_HTAP_MaxOpRPM_Value((&(VeCPDR_n_HTAP_MaxOpRPM_AD)));

    /* Inport: '<Root>/VePMPR_n_LTAP_MaxOpRPM' */
    (void)Rte_Read_VePMPR_n_LTAP_MaxOpRPM_Value((&(VeCPDR_n_LTAP_MaxOpRPM_AD)));

    /* Inport: '<Root>/VePMPR_n_LTPP2_MaxOpRPM' */
    (void)Rte_Read_VePMPR_n_LTPP2_MaxOpRPM_Value((&(VeCPDR_n_LTPP2_MaxOpRPM_AD)));

    /* Inport: '<Root>/VePMPR_n_LTPP_MaxOpRPM' */
    (void)Rte_Read_VePMPR_n_LTPP_MaxOpRPM_Value((&(VeCPDR_n_LTPP_MaxOpRPM_AD)));

    /* Inport: '<Root>/VeHPMR_b_PropSysActv' */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value((&(VeCPDR_b_PropSysActv_AD)));

    /* Inport: '<Root>/VeBPCR_b_BPCM_LOC_BCP_SgnlRcvd' */
    (void)Rte_Read_VeBPCR_b_BPCM_LOC_BCP_SgnlRcvd_Value
        ((&(VeCPDR_b_BPCM_LOC_BCP_SgnlRcvd_AD)));

    /* Inport: '<Root>/VeBPCR_b_BPCM_LOC_BCP_FA' */
    (void)Rte_Read_VeBPCR_b_BPCM_LOC_BCP_FA_Value((&(VeCPDR_b_BPCM_LOC_BCP_FA_AD)));

    /* Inport: '<Root>/VeBPCR_e_BPCM_LOC_BCP' */
    (void)Rte_Read_VeBPCR_e_BPCM_LOC_BCP_Value((&(VeCPDR_e_BPCM_LOC_BCP_AD)));

    /* Inport: '<Root>/VeBPCR_b_BPCM_LIN_BusOff_SgnlRcvd' */
    (void)Rte_Read_VeBPCR_b_BPCM_LIN_BusOff_SgnlRcvd_Value
        ((&(VeCPDR_b_BPCM_LIN_BusOff_SgnlRcvd_AD)));

    /* Inport: '<Root>/VeBPCR_b_BPCM_LIN_BusOff_FA' */
    (void)Rte_Read_VeBPCR_b_BPCM_LIN_BusOff_FA_Value
        ((&(VeCPDR_b_BPCM_LIN_BusOff_FA_AD)));

    /* Inport: '<Root>/VeBPCR_e_BPCM_LIN_BusOff' */
    (void)Rte_Read_VeBPCR_e_BPCM_LIN_BusOff_Value((&(VeCPDR_e_BPCM_LIN_BusOff_AD)));

    /* Inport: '<Root>/VePMDR_U_BF1_SysVolt' */
    (void)Rte_Read_VePMDR_U_BF1_SysVolt_Value((&(VeCPDR_U_BF1_SysVolt_AD)));

    /* Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl' */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value
        ((&(VeCPDR_b_PostCodeClrDiagDsbl_AD)));

    /* Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe' */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value
        ((&(VeCPDR_b_DsblDiagFailSafe_AD)));

    /* Outputs for Function Call SubSystem: '<S1>/Inputs' */
    /* Switch: '<S15>/Switch' incorporates:
     *  Constant: '<S41>/Calib'
     */
    if (KeCPDR_b_DsblDFailSafe_OvrdEnbl)
    {
        /* Switch: '<S15>/Switch' incorporates:
         *  Constant: '<S42>/Calib'
         *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
         */
        VeCPDR_b_DsblDiagFailSafe_AD = KeCPDR_b_DsblDFailSafe_OvrdVal;
    }

    /* End of Switch: '<S15>/Switch' */

    /* SignalConversion: '<S15>/Signal Conversion' */
    CPDR_ac_B.SignalConversion_d = VeCPDR_b_DsblDiagFailSafe_AD;

    /* Switch: '<S21>/Switch' incorporates:
     *  Constant: '<S53>/Calib'
     */
    if (KeCPDR_b_PostCode_OvrdEnbl)
    {
        /* Switch: '<S21>/Switch' incorporates:
         *  Constant: '<S54>/Calib'
         *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
         */
        VeCPDR_b_PostCodeClrDiagDsbl_AD = KeCPDR_b_PostCode_OvrdVal;
    }

    /* End of Switch: '<S21>/Switch' */

    /* SignalConversion: '<S21>/Signal Conversion' */
    CPDR_ac_B.SignalConversion_l = VeCPDR_b_PostCodeClrDiagDsbl_AD;

    /* Switch: '<S8>/Switch' incorporates:
     *  Constant: '<S28>/Calib'
     */
    if (KeCPDR_b_BF1_SysVolt_SD)
    {
        /* Switch: '<S8>/Switch' incorporates:
         *  Constant: '<S27>/Calib'
         *  Inport: '<Root>/VePMDR_U_BF1_SysVolt'
         */
        VeCPDR_U_BF1_SysVolt_AD = KeCPDR_U_BF1_SysVolt_D;
    }

    /* End of Switch: '<S8>/Switch' */

    /* SignalConversion: '<S8>/Signal Conversion' */
    CPDR_ac_B.SignalConversion = VeCPDR_U_BF1_SysVolt_AD;

    /* Switch: '<S10>/Switch' incorporates:
     *  Constant: '<S31>/Calib'
     */
    if (KeCPDR_b_BPCM_LIN_BusOff_SD)
    {
        /* Switch: '<S10>/Switch' incorporates:
         *  Constant: '<S32>/Calib'
         *  Inport: '<Root>/VeBPCR_e_BPCM_LIN_BusOff'
         */
        VeCPDR_e_BPCM_LIN_BusOff_AD = KeCPDR_e_BPCM_LIN_BusOff_D;
    }

    /* End of Switch: '<S10>/Switch' */

    /* SignalConversion: '<S10>/Signal Conversion' incorporates:
     *  Switch: '<S10>/Switch'
     */
    CPDR_ac_B.SignalConversion_f = VeCPDR_e_BPCM_LIN_BusOff_AD;

    /* Switch: '<S9>/Switch1' incorporates:
     *  Constant: '<S30>/Calib'
     */
    if (KeCPDR_b_BPCM_LIN_BusOff_FA_SD)
    {
        /* Switch: '<S9>/Switch1' incorporates:
         *  Constant: '<S29>/Calib'
         *  Inport: '<Root>/VeBPCR_b_BPCM_LIN_BusOff_FA'
         */
        VeCPDR_b_BPCM_LIN_BusOff_FA_AD = KeCPDR_b_BPCM_LIN_BusOff_FA_D;
    }

    /* End of Switch: '<S9>/Switch1' */

    /* SignalConversion: '<S9>/Signal Conversion' */
    CPDR_ac_B.SignalConversion_p = VeCPDR_b_BPCM_LIN_BusOff_FA_AD;

    /* Switch: '<S11>/Switch2' incorporates:
     *  Constant: '<S34>/Calib'
     */
    if (KeCPDR_b_BPCM_LIN_BusOff_SgnlRcvd_SD)
    {
        /* Switch: '<S11>/Switch2' incorporates:
         *  Constant: '<S33>/Calib'
         *  Inport: '<Root>/VeBPCR_b_BPCM_LIN_BusOff_SgnlRcvd'
         */
        VeCPDR_b_BPCM_LIN_BusOff_SgnlRcvd_AD =
            KeCPDR_b_BPCM_LIN_BusOff_SgnlRcvd_D;
    }

    /* End of Switch: '<S11>/Switch2' */

    /* SignalConversion: '<S11>/Signal Conversion' */
    CPDR_ac_B.SignalConversion_au = VeCPDR_b_BPCM_LIN_BusOff_SgnlRcvd_AD;

    /* Switch: '<S13>/Switch' incorporates:
     *  Constant: '<S37>/Calib'
     */
    if (KeCPDR_b_BPCM_LOC_BCP_SD)
    {
        /* Switch: '<S13>/Switch' incorporates:
         *  Constant: '<S38>/Calib'
         *  Inport: '<Root>/VeBPCR_e_BPCM_LOC_BCP'
         */
        VeCPDR_e_BPCM_LOC_BCP_AD = KeCPDR_e_BPCM_LOC_BCP_D;
    }

    /* End of Switch: '<S13>/Switch' */

    /* SignalConversion: '<S13>/Signal Conversion' incorporates:
     *  Switch: '<S13>/Switch'
     */
    CPDR_ac_B.SignalConversion_dd = VeCPDR_e_BPCM_LOC_BCP_AD;

    /* Switch: '<S12>/Switch1' incorporates:
     *  Constant: '<S36>/Calib'
     */
    if (KeCPDR_b_BPCM_LOC_BCP_FA_SD)
    {
        /* Switch: '<S12>/Switch1' incorporates:
         *  Constant: '<S35>/Calib'
         *  Inport: '<Root>/VeBPCR_b_BPCM_LOC_BCP_FA'
         */
        VeCPDR_b_BPCM_LOC_BCP_FA_AD = KeCPDR_b_BPCM_LOC_BCP_FA_D;
    }

    /* End of Switch: '<S12>/Switch1' */

    /* SignalConversion: '<S12>/Signal Conversion' */
    CPDR_ac_B.SignalConversion_lx = VeCPDR_b_BPCM_LOC_BCP_FA_AD;

    /* Switch: '<S14>/Switch2' incorporates:
     *  Constant: '<S40>/Calib'
     */
    if (KeCPDR_b_BPCM_LOC_BCP_SgnlRcvd_SD)
    {
        /* Switch: '<S14>/Switch2' incorporates:
         *  Constant: '<S39>/Calib'
         *  Inport: '<Root>/VeBPCR_b_BPCM_LOC_BCP_SgnlRcvd'
         */
        VeCPDR_b_BPCM_LOC_BCP_SgnlRcvd_AD = KeCPDR_b_BPCM_LOC_BCP_SgnlRcvd_D;
    }

    /* End of Switch: '<S14>/Switch2' */

    /* SignalConversion: '<S14>/Signal Conversion' */
    CPDR_ac_B.SignalConversion_hr = VeCPDR_b_BPCM_LOC_BCP_SgnlRcvd_AD;

    /* Switch: '<S22>/Switch1' incorporates:
     *  Constant: '<S56>/Calib'
     */
    if (KeCPDR_b_PropSysActv_SD)
    {
        /* Switch: '<S22>/Switch1' incorporates:
         *  Constant: '<S55>/Calib'
         *  Inport: '<Root>/VeHPMR_b_PropSysActv'
         */
        VeCPDR_b_PropSysActv_AD = KeCPDR_b_PropSysActv_D;
    }

    /* End of Switch: '<S22>/Switch1' */

    /* SignalConversion: '<S22>/Signal Conversion' */
    CPDR_ac_B.SignalConversion_kc = VeCPDR_b_PropSysActv_AD;

    /* Switch: '<S20>/Switch1' incorporates:
     *  Constant: '<S51>/Calib'
     */
    if (KeCPDR_b_LTPP_MaxOpRPM_SD)
    {
        /* Switch: '<S20>/Switch1' incorporates:
         *  Constant: '<S52>/Calib'
         *  Inport: '<Root>/VePMPR_n_LTPP_MaxOpRPM'
         */
        VeCPDR_n_LTPP_MaxOpRPM_AD = KeCPDR_n_LTPP_MaxOpRPM_D;
    }

    /* End of Switch: '<S20>/Switch1' */

    /* SignalConversion: '<S20>/Signal Conversion' */
    CPDR_ac_B.SignalConversion_j = VeCPDR_n_LTPP_MaxOpRPM_AD;

    /* Switch: '<S19>/Switch1' incorporates:
     *  Constant: '<S49>/Calib'
     */
    if (KeCPDR_b_LTPP2_MaxOpRPM_SD)
    {
        /* Switch: '<S19>/Switch1' incorporates:
         *  Constant: '<S50>/Calib'
         *  Inport: '<Root>/VePMPR_n_LTPP2_MaxOpRPM'
         */
        VeCPDR_n_LTPP2_MaxOpRPM_AD = KeCPDR_n_LTPP2_MaxOpRPM_D;
    }

    /* End of Switch: '<S19>/Switch1' */

    /* SignalConversion: '<S19>/Signal Conversion' */
    CPDR_ac_B.SignalConversion_h = VeCPDR_n_LTPP2_MaxOpRPM_AD;

    /* Switch: '<S18>/Switch2' incorporates:
     *  Constant: '<S47>/Calib'
     */
    if (KeCPDR_b_LTAP_MaxOpRPM_SD)
    {
        /* Switch: '<S18>/Switch2' incorporates:
         *  Constant: '<S48>/Calib'
         *  Inport: '<Root>/VePMPR_n_LTAP_MaxOpRPM'
         */
        VeCPDR_n_LTAP_MaxOpRPM_AD = KeCPDR_n_LTAP_MaxOpRPM_D;
    }

    /* End of Switch: '<S18>/Switch2' */

    /* SignalConversion: '<S18>/Signal Conversion' */
    CPDR_ac_B.SignalConversion_a = VeCPDR_n_LTAP_MaxOpRPM_AD;

    /* Switch: '<S16>/Switch2' incorporates:
     *  Constant: '<S43>/Calib'
     */
    if (KeCPDR_b_HTAP_MaxOpRPM_SD)
    {
        /* Switch: '<S16>/Switch2' incorporates:
         *  Constant: '<S44>/Calib'
         *  Inport: '<Root>/VePMPR_n_HTAP_MaxOpRPM'
         */
        VeCPDR_n_HTAP_MaxOpRPM_AD = KeCPDR_n_HTAP_MaxOpRPM_D;
    }

    /* End of Switch: '<S16>/Switch2' */

    /* SignalConversion: '<S16>/Signal Conversion' */
    CPDR_ac_B.SignalConversion_e = VeCPDR_n_HTAP_MaxOpRPM_AD;

    /* Switch: '<S23>/Switch' incorporates:
     *  Constant: '<S58>/Calib'
     */
    if (KeCPDR_b_RunCrankActive_SD)
    {
        /* Switch: '<S23>/Switch' incorporates:
         *  Constant: '<S57>/Calib'
         *  Inport: '<Root>/VePMDR_b_RunCrankActive'
         */
        VeCPDR_b_RunCrankActive_AD = KeCPDR_b_RunCrankActive_D;
    }

    /* End of Switch: '<S23>/Switch' */

    /* Switch: '<S24>/Switch' incorporates:
     *  Constant: '<S59>/Calib'
     */
    if (KeCPDR_b_TransAuxPmp_Cmd_SD)
    {
        /* Switch: '<S24>/Switch' incorporates:
         *  Constant: '<S60>/Calib'
         *  Inport: '<Root>/VeTAPR_n_TransAuxPmp_Cmd'
         */
        VeCPDR_n_TransAuxPmp_Cmd_AD = KeCPDR_n_TransAuxPmp_Cmd_D;
    }

    /* End of Switch: '<S24>/Switch' */

    /* SignalConversion: '<S24>/Signal Conversion' */
    CPDR_ac_B.SignalConversion_n = VeCPDR_n_TransAuxPmp_Cmd_AD;

    /* Switch: '<S7>/Switch' incorporates:
     *  Constant: '<S25>/Calib'
     */
    if (KeCPDR_b_AuxPumpSpd_Act_SD)
    {
        /* Switch: '<S7>/Switch' incorporates:
         *  Constant: '<S26>/Calib'
         *  Inport: '<Root>/VePMIR_n_AuxPumpSpdAct'
         */
        VeCPDR_n_AuxPumpSpdAct_AD = KeCPDR_n_AuxPumpSpd_Act_D;
    }

    /* End of Switch: '<S7>/Switch' */

    /* SignalConversion: '<S7>/Signal Conversion' */
    CPDR_ac_B.SignalConversion_k = VeCPDR_n_AuxPumpSpdAct_AD;

    /* Switch: '<S17>/Switch' incorporates:
     *  Constant: '<S45>/Calib'
     */
    if (KeCPDR_b_InputSpeed_SD)
    {
        /* Switch: '<S17>/Switch' incorporates:
         *  Constant: '<S46>/Calib'
         *  Inport: '<Root>/VeTISR_n_InputSpeed'
         */
        VeCPDR_n_InputSpeed_AD = KeCPDR_n_InputSpeed_D;
    }

    /* End of Switch: '<S17>/Switch' */
    /* End of Outputs for SubSystem: '<S1>/Inputs' */
#endif

#if Rte_SysCon_Variant_CPDR_2

    /* Outputs for Function Call SubSystem: '<S1>/TAP_Diagnostics' */

    /* Gain: '<S65>/Gain' */
    VeCPDR_b_ResetFOMs = CPDR_ac_B.SignalConversion_l;

    /* Outputs for Atomic SubSystem: '<S6>/EdgeRising' */
    /* Logic: '<S61>/OR1' incorporates:
     *  UnitDelay: '<S61>/Unit Delay'
     */
    rtb_OR1_ne = !CPDR_ac_DW.UnitDelay_DSTATE_oa;

    /* Update for UnitDelay: '<S61>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_oa = VeCPDR_b_RunCrankActive_AD;

    /* Logic: '<S6>/OR3' incorporates:
     *  Logic: '<S61>/AND'
     *  Logic: '<S64>/NOT4'
     */
    VeCPDR_b_ResetCnts = (((VeCPDR_b_RunCrankActive_AD) && rtb_OR1_ne) ||
                          ((CPDR_ac_B.SignalConversion_d) ||
                           (CPDR_ac_B.SignalConversion_l)));

    /* End of Outputs for SubSystem: '<S6>/EdgeRising' */

    /* Sum: '<S143>/Subtraction2' incorporates:
     *  Sum: '<S144>/Subtraction'
     */
    VeCPDR_n_TAP_PmpPerf_RPM_Error = CPDR_ac_B.SignalConversion_n -
        CPDR_ac_B.SignalConversion_k;

    /* Logic: '<S143>/Logical1' incorporates:
     *  Lookup_n-D: '<S145>/Vector'
     *  Lookup_n-D: '<S146>/Vector'
     *  RelationalOperator: '<S143>/Greater Than or Equal 1'
     *  RelationalOperator: '<S143>/Greater Than or Equal 2'
     *  SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp'
     *  Sum: '<S143>/Subtraction1'
     */
    VeCPDR_b_PmpPerf_CurrSmplFail1 = (((CPDR_ac_B.SignalConversion_k -
        CPDR_ac_B.SignalConversion_n) >= look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeTFTR_T_TransO, ((const float32 *)
        &(KxCPDR_n_AuxPmp_OvrSpd[0])), ((const float32 *)
        &(KtCPDR_n_AuxPmp_OvrSpd[0])), 5U)) || (VeCPDR_n_TAP_PmpPerf_RPM_Error >=
        look1_iflf_binlca_16a(rtb_TmpSignalConversionAtVeTFTR_T_TransO, ((const
        float32 *)&(KxCPDR_n_AuxPmp_UndrSpd[0])), ((const float32 *)
        &(KtCPDR_n_AuxPmp_UndrSpd[0])), 5U)));

    /* Logic: '<S144>/Logical7' incorporates:
     *  Abs: '<S144>/Abs1'
     *  Constant: '<S147>/Calib'
     *  Product: '<S144>/Product'
     *  RelationalOperator: '<S144>/Greater Than or Equal '
     */
    VeCPDR_b_PmpPerf_CurrSmplFail2 = (fabsf(VeCPDR_n_TAP_PmpPerf_RPM_Error) >=
        (CPDR_ac_B.SignalConversion_n * KeCPDR_Pct_MaxPmpSpd));

    /* Logic: '<S95>/AND5' incorporates:
     *  Constant: '<S167>/Calib'
     *  Constant: '<S168>/Calib'
     *  Logic: '<S95>/AND4'
     *  Logic: '<S95>/AND6'
     */
    VeCPDR_b_PmpPerf_CurrSmplFail = (((VeCPDR_b_PmpPerf_CurrSmplFail1) ||
        (KeCPDR_b_PmpPerf_Fail1OV)) && ((VeCPDR_b_PmpPerf_CurrSmplFail2) ||
        (KeCPDR_b_PmpPerf_Fail2OV)));

    /* Outputs for Atomic SubSystem: '<S97>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S102>/EdgeRising' */
    /* UnitDelay: '<S76>/Unit Delay' incorporates:
     *  UnitDelay: '<S103>/Unit Delay'
     */
    rtb_OR1_ne = CPDR_ac_DW.UnitDelay_DSTATE_fe;

    /* Update for UnitDelay: '<S103>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_fe = CPDR_ac_B.SignalConversion_kc;

    /* Switch: '<S102>/Switch1' incorporates:
     *  Constant: '<S100>/Calib'
     *  Constant: '<S101>/Calib'
     *  Constant: '<S102>/Constant Value1'
     *  Logic: '<S102>/OR'
     *  Logic: '<S102>/OR1'
     *  Logic: '<S103>/AND'
     *  Logic: '<S103>/OR1'
     *  MinMax: '<S102>/Minimum'
     *  Sum: '<S102>/Summation'
     *  UnitDelay: '<S102>/Unit Delay'
     */
    if ((!CPDR_ac_B.SignalConversion_kc) || ((CPDR_ac_B.SignalConversion_kc) &&
            (!rtb_OR1_ne)))
    {
        CPDR_ac_DW.UnitDelay_DSTATE_oy = 0.0F;
    }
    else
    {
        CPDR_ac_DW.UnitDelay_DSTATE_oy = fminf(KeCPDR_t_DiagDlyPropSysAct,
            HeCPDR_t_MedTED + CPDR_ac_DW.UnitDelay_DSTATE_oy);
    }

    /* End of Switch: '<S102>/Switch1' */
    /* End of Outputs for SubSystem: '<S102>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S97>/Turn On Delay Time1' */

    /* Outputs for Atomic SubSystem: '<S99>/DeltaOneStep1' */
    /* Abs: '<S99>/Abs' incorporates:
     *  UnitDelay: '<S130>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeTFTR_T_TransO = CPDR_ac_DW.UnitDelay_DSTATE_la;

    /* Update for UnitDelay: '<S130>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_la = CPDR_ac_B.SignalConversion_n;

    /* Abs: '<S99>/Abs' incorporates:
     *  Sum: '<S130>/Sum//Sub'
     */
    rtb_TmpSignalConversionAtVeTFTR_T_TransO = fabsf
        (CPDR_ac_B.SignalConversion_n - rtb_TmpSignalConversionAtVeTFTR_T_TransO);

    /* End of Outputs for SubSystem: '<S99>/DeltaOneStep1' */

    /* Outputs for Atomic SubSystem: '<S99>/Timer Retrigger Reset Enabled2' */
    /* Switch: '<S139>/Switch1' incorporates:
     *  Constant: '<S131>/Calib'
     *  Constant: '<S133>/Calib'
     *  Constant: '<S137>/Calib'
     *  Constant: '<S139>/Constant Value4'
     *  MinMax: '<S139>/Maximum'
     *  RelationalOperator: '<S99>/Greater Than or Equal 3'
     *  Sum: '<S139>/Subtraction'
     *  UnitDelay: '<S139>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeTFTR_T_TransO >=
            KeCPDR_n_PmpPerf_DeltSpdsmall)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_lp = KeCPDR_t_PmpPerf_DeltSpd_Small;
    }
    else
    {
        CPDR_ac_DW.UnitDelay_DSTATE_lp = fmaxf(CPDR_ac_DW.UnitDelay_DSTATE_lp -
            HeCPDR_t_MedTED, 0.0F);
    }

    /* End of Switch: '<S139>/Switch1' */
    /* End of Outputs for SubSystem: '<S99>/Timer Retrigger Reset Enabled2' */

    /* Outputs for Atomic SubSystem: '<S99>/Timer Retrigger Reset Enabled' */
    /* Switch: '<S138>/Switch1' incorporates:
     *  Constant: '<S131>/Calib'
     *  Constant: '<S132>/Calib'
     *  Constant: '<S136>/Calib'
     *  Constant: '<S138>/Constant Value4'
     *  MinMax: '<S138>/Maximum'
     *  RelationalOperator: '<S99>/Greater Than or Equal 4'
     *  Sum: '<S138>/Subtraction'
     *  UnitDelay: '<S138>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeTFTR_T_TransO >= KeCPDR_n_PmpPerf_DeltSpdbig)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_hc = KeCPDR_t_PmpPerf_DeltSpd_Big;
    }
    else
    {
        CPDR_ac_DW.UnitDelay_DSTATE_hc = fmaxf(CPDR_ac_DW.UnitDelay_DSTATE_hc -
            HeCPDR_t_MedTED, 0.0F);
    }

    /* End of Switch: '<S138>/Switch1' */
    /* End of Outputs for SubSystem: '<S99>/Timer Retrigger Reset Enabled' */
    /* End of Outputs for SubSystem: '<S1>/TAP_Diagnostics' */

    /* Inport: '<Root>/VeTFTR_b_TransOilTempFA' */
    (void)Rte_Read_VeTFTR_b_TransOilTempFA_Value(&rtb_AND_m);

    /* Outputs for Function Call SubSystem: '<S1>/TAP_Diagnostics' */
    /* Outputs for Atomic SubSystem: '<S99>/Timer Retrigger Reset Enabled2' */
    /* Outputs for Atomic SubSystem: '<S99>/Timer Retrigger Reset Enabled' */
    /* Logic: '<S99>/Logical14' incorporates:
     *  Constant: '<S138>/Constant Value2'
     *  Constant: '<S139>/Constant Value2'
     *  Logic: '<S99>/Logical5'
     *  Logic: '<S99>/Logical6'
     *  RelationalOperator: '<S138>/Greater  Than1'
     *  RelationalOperator: '<S139>/Greater  Than1'
     *  UnitDelay: '<S138>/Unit Delay'
     *  UnitDelay: '<S139>/Unit Delay'
     */
    VeCPDR_b_PmpPerf_DeltSpdCmdEnbl = ((CPDR_ac_DW.UnitDelay_DSTATE_lp <= 0.0F) &&
        (CPDR_ac_DW.UnitDelay_DSTATE_hc <= 0.0F));

    /* End of Outputs for SubSystem: '<S99>/Timer Retrigger Reset Enabled' */
    /* End of Outputs for SubSystem: '<S99>/Timer Retrigger Reset Enabled2' */

    /* Outputs for Atomic SubSystem: '<S97>/Turn On Delay Time1' */
    /* Logic: '<S107>/Logical4' incorporates:
     *  Constant: '<S101>/Calib'
     *  Constant: '<S116>/Calib'
     *  Constant: '<S117>/Calib'
     *  Constant: '<S134>/Calib'
     *  Constant: '<S135>/Calib'
     *  Logic: '<S102>/AND'
     *  Logic: '<S107>/Logical1'
     *  RelationalOperator: '<S102>/Greater  Than'
     *  RelationalOperator: '<S107>/Greater Than or Equal 5'
     *  RelationalOperator: '<S99>/Greater Than or Equal 1'
     *  RelationalOperator: '<S99>/Greater Than or Equal 2'
     *  UnitDelay: '<S102>/Unit Delay'
     */
    VeCPDR_b_PmpPerf_CntEnbl1 = ((((((((CPDR_ac_B.SignalConversion_kc) &&
        (CPDR_ac_DW.UnitDelay_DSTATE_oy >= KeCPDR_t_DiagDlyPropSysAct)) &&
        (KeCPDR_b_PmpPerf_XYEnbl)) && (CPDR_ac_B.SignalConversion_n >=
        KeCPDR_n_PmpPerf_MinSpd)) && (CPDR_ac_B.SignalConversion_n <=
        KeCPDR_n_PmpPerf_MaxSpd)) && (VeCPDR_b_PmpPerf_DeltSpdCmdEnbl)) &&
        (VeCPDR_n_InputSpeed_AD <= KeCPDR_n_PmpPerf_NiMaxSpd)) && (!rtb_AND_m));

    /* End of Outputs for SubSystem: '<S97>/Turn On Delay Time1' */

    /* S-Function (sfix_bitop): '<S121>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S121>/StatusByte_LostCommTAP'
     *  S-Function (sfix_bitop): '<S69>/Bitwise Operator2'
     */
    VeCPDR_b_PmpPerf_EnblCnd1_tmp = ((sint32)CPDR_ac_DW.StatusByte_LostCommTAP)
        & 1;

    /* S-Function (sfix_bitop): '<S121>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S121>/StatusByte_LostCommTAP'
     *  S-Function (sfix_bitop): '<S69>/Bitwise Operator1'
     */
    VeCPDR_b_PmpPerf_EnblCnd1_tmp_0 = ((uint32)CPDR_ac_DW.StatusByte_LostCommTAP)
        & 64U;

    /* S-Function (sfix_bitop): '<S122>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S122>/StatusByte_ThrmlRlyCtrlCkt'
     *  S-Function (sfix_bitop): '<S70>/Bitwise Operator2'
     */
    VeCPDR_b_PmpPerf_EnblCnd1_tmp_1 = ((sint32)
        CPDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 1;

    /* S-Function (sfix_bitop): '<S122>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S122>/StatusByte_ThrmlRlyCtrlCkt'
     *  S-Function (sfix_bitop): '<S70>/Bitwise Operator1'
     */
    VeCPDR_b_PmpPerf_EnblCnd1_tmp_2 = ((uint32)
        CPDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 64U;

    /* S-Function (sfix_bitop): '<S120>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S120>/StatusByte_LIN1_BusOff'
     *  S-Function (sfix_bitop): '<S68>/Bitwise Operator2'
     */
    VeCPDR_b_PmpPerf_EnblCnd1_tmp_3 = ((sint32)CPDR_ac_DW.StatusByte_LIN1_BusOff)
        & 1;

    /* S-Function (sfix_bitop): '<S120>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S120>/StatusByte_LIN1_BusOff'
     *  S-Function (sfix_bitop): '<S68>/Bitwise Operator1'
     */
    VeCPDR_b_PmpPerf_EnblCnd1_tmp_4 = ((uint32)CPDR_ac_DW.StatusByte_LIN1_BusOff)
        & 64U;

    /* Logic: '<S108>/Logical11' incorporates:
     *  Constant: '<S118>/Constant'
     *  Constant: '<S119>/Constant'
     *  Constant: '<S120>/Constant1'
     *  Constant: '<S120>/Constant2'
     *  Constant: '<S121>/Constant1'
     *  Constant: '<S121>/Constant2'
     *  Constant: '<S122>/Constant1'
     *  Constant: '<S122>/Constant2'
     *  Constant: '<S123>/Calib'
     *  Constant: '<S124>/Calib'
     *  Constant: '<S125>/Calib'
     *  Constant: '<S126>/Calib'
     *  Constant: '<S127>/Calib'
     *  Constant: '<S128>/Calib'
     *  Constant: '<S129>/Calib'
     *  Logic: '<S108>/AND1'
     *  Logic: '<S108>/AND2'
     *  Logic: '<S108>/AND3'
     *  Logic: '<S108>/AND4'
     *  Logic: '<S108>/AND6'
     *  Logic: '<S108>/AND7'
     *  Logic: '<S108>/Logical1'
     *  Logic: '<S108>/Logical2'
     *  Logic: '<S108>/Logical3'
     *  Logic: '<S108>/Logical7'
     *  Logic: '<S120>/Logical Operator'
     *  Logic: '<S121>/Logical Operator'
     *  Logic: '<S122>/Logical Operator'
     *  RelationalOperator: '<S108>/Comparison12'
     *  RelationalOperator: '<S108>/Greater Than or Equal 2'
     *  RelationalOperator: '<S108>/Greater Than or Equal 6'
     *  RelationalOperator: '<S120>/Relational Operator1'
     *  RelationalOperator: '<S120>/Relational Operator2'
     *  RelationalOperator: '<S121>/Relational Operator1'
     *  RelationalOperator: '<S121>/Relational Operator2'
     *  RelationalOperator: '<S122>/Relational Operator1'
     *  RelationalOperator: '<S122>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S120>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S120>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S121>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S121>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S122>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S122>/Bitwise Operator2'
     *  SignalConversion generated from: '<S1>/VePMTR_e_ThrmlDevEnbl'
     */
    VeCPDR_b_PmpPerf_EnblCnd1 = (((((((((uint32)
        rtb_TmpSignalConversionAtVePMTR_e_Thrm_n) != CePMTR_e_DISBL_All_Thrml) ||
        (KeCPDR_b_AuxPmpPerf_ThrmlEnbl)) && (((VeCPDR_b_PmpPerf_EnblCnd1_tmp <=
        0) || (VeCPDR_b_PmpPerf_EnblCnd1_tmp_0 != 0U)) ||
        (KeCPDR_b_TAP_LossCom_OV))) && ((CPDR_ac_B.SignalConversion_n >
        KeCPDR_n_MinRPMCmnd) || (KeCPDR_b_RPMCmdChkEnbl))) && ((((uint32)
        rtb_TmpSignalConversionAtVePMIR_e_TAP_Co) !=
        CeTAPR_e_TAP_FalseTrueSNA_True) || (KeCPDR_b_ColdBiasStsChkDsbl))) &&
        (((VeCPDR_b_PmpPerf_EnblCnd1_tmp_3 <= 0) ||
          (VeCPDR_b_PmpPerf_EnblCnd1_tmp_4 != 0U)) || (KeCPDR_b_LINBusOff_OV))) &&
        (((VeCPDR_b_PmpPerf_EnblCnd1_tmp_1 <= 0) ||
          (VeCPDR_b_PmpPerf_EnblCnd1_tmp_2 != 0U)) ||
         (KeCPDR_b_ThrmlRlyCtrlCkt_FA_OV)));

    /* Outputs for Atomic SubSystem: '<S98>/EdgeRising' */
    /* Logic: '<S104>/AND' incorporates:
     *  Logic: '<S104>/OR1'
     *  UnitDelay: '<S104>/Unit Delay'
     */
    rtb_AND_m = ((VeCPDR_b_PmpPerf_EnblCnd1) && (!CPDR_ac_DW.UnitDelay_DSTATE_px));

    /* Update for UnitDelay: '<S104>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_px = VeCPDR_b_PmpPerf_EnblCnd1;

    /* End of Outputs for SubSystem: '<S98>/EdgeRising' */

    /* If: '<S98>/If' incorporates:
     *  Inport: '<Root>/VePMIR_e_TransAuxPumpLmpHM'
     *  Inport: '<Root>/VePMIR_e_TransAuxPumpMntrRPM'
     */
    if (VeCPDR_b_PmpPerf_EnblCnd1)
    {
        (void)Rte_Read_VePMIR_e_TransAuxPumpLmpHM_Value(&tmpRead_0);

        /* Outputs for IfAction SubSystem: '<S98>/If Action Subsystem' incorporates:
         *  ActionPort: '<S105>/Action Port'
         */
        /* RelationalOperator: '<S105>/Greater Than or Equal 1' incorporates:
         *  Constant: '<S113>/Constant'
         *  Inport: '<Root>/VePMIR_e_TransAuxPumpLmpHM'
         */
        rtb_OR1_ne = (((uint32)tmpRead_0) == CeTAPR_e_TAP_FalseTrueSNA_False);

        /* Outputs for Atomic SubSystem: '<S105>/Counter Reset  Enabled ' */
        /* Switch: '<S109>/Switch1' incorporates:
         *  Constant: '<S109>/Constant Value2'
         *  Logic: '<S105>/Logical6'
         *  UnitDelay: '<S109>/Unit Delay'
         */
        if (rtb_OR1_ne || rtb_AND_m)
        {
            CPDR_ac_DW.UnitDelay_DSTATE_ai = 0U;
        }
        else
        {
            /* UnitDelay: '<S109>/Unit Delay' incorporates:
             *  Constant: '<S109>/Constant Value1'
             *  Sum: '<S109>/Subtraction'
             *  Switch: '<S109>/Switch2'
             */
            CPDR_ac_DW.UnitDelay_DSTATE_ai = (uint16)(((uint32)
                CPDR_ac_DW.UnitDelay_DSTATE_ai) + 1U);
        }

        /* End of Switch: '<S109>/Switch1' */
        /* End of Outputs for SubSystem: '<S105>/Counter Reset  Enabled ' */
        /* End of Outputs for SubSystem: '<S98>/If Action Subsystem' */
        (void)Rte_Read_VePMIR_e_TransAuxPumpMntrRPM_Value(&tmpRead);

        /* Outputs for IfAction SubSystem: '<S98>/If Action Subsystem' incorporates:
         *  ActionPort: '<S105>/Action Port'
         */
        /* RelationalOperator: '<S105>/Greater Than or Equal 7' incorporates:
         *  Constant: '<S112>/Constant'
         *  Inport: '<Root>/VePMIR_e_TransAuxPumpMntrRPM'
         */
        rtb_GreaterThanorEqual7 = (((uint32)tmpRead) ==
            CeTAPR_e_TAP_TrueFalseSNA_True);

        /* Outputs for Atomic SubSystem: '<S105>/Counter Reset  Enabled 1' */
        /* Switch: '<S110>/Switch1' incorporates:
         *  Constant: '<S110>/Constant Value2'
         *  Logic: '<S105>/Logical7'
         *  UnitDelay: '<S110>/Unit Delay'
         */
        if (rtb_GreaterThanorEqual7 || rtb_AND_m)
        {
            CPDR_ac_DW.UnitDelay_DSTATE_bo = 0U;
        }
        else
        {
            /* UnitDelay: '<S110>/Unit Delay' incorporates:
             *  Constant: '<S110>/Constant Value1'
             *  Sum: '<S110>/Subtraction'
             *  Switch: '<S110>/Switch2'
             */
            CPDR_ac_DW.UnitDelay_DSTATE_bo = (uint16)(((uint32)
                CPDR_ac_DW.UnitDelay_DSTATE_bo) + 1U);
        }

        /* End of Switch: '<S110>/Switch1' */
        /* End of Outputs for SubSystem: '<S105>/Counter Reset  Enabled 1' */

        /* RelationalOperator: '<S105>/Greater Than or Equal 8' incorporates:
         *  Constant: '<S114>/Constant'
         */
        rtb_GreaterThanorEqual8 = (((uint32)
            rtb_TmpSignalConversionAtVePMIR_e_TAP_Co) ==
            CeTAPR_e_TAP_FalseTrueSNA_False);

        /* Outputs for Atomic SubSystem: '<S105>/Counter Reset  Enabled 2' */
        /* Switch: '<S111>/Switch1' incorporates:
         *  Constant: '<S111>/Constant Value2'
         *  Logic: '<S105>/Logical8'
         *  UnitDelay: '<S111>/Unit Delay'
         */
        if (rtb_GreaterThanorEqual8 || rtb_AND_m)
        {
            CPDR_ac_DW.UnitDelay_DSTATE_pj = 0U;
        }
        else
        {
            /* UnitDelay: '<S111>/Unit Delay' incorporates:
             *  Constant: '<S111>/Constant Value1'
             *  Sum: '<S111>/Subtraction'
             *  Switch: '<S111>/Switch2'
             */
            CPDR_ac_DW.UnitDelay_DSTATE_pj = (uint16)(((uint32)
                CPDR_ac_DW.UnitDelay_DSTATE_pj) + 1U);
        }

        /* End of Switch: '<S111>/Switch1' */
        /* End of Outputs for SubSystem: '<S105>/Counter Reset  Enabled 2' */

        /* Logic: '<S105>/Logical1' incorporates:
         *  Constant: '<S115>/Calib'
         *  RelationalOperator: '<S105>/Greater Than or Equal 2'
         *  RelationalOperator: '<S105>/Greater Than or Equal 3'
         *  RelationalOperator: '<S105>/Greater Than or Equal 4'
         *  UnitDelay: '<S109>/Unit Delay'
         *  UnitDelay: '<S110>/Unit Delay'
         *  UnitDelay: '<S111>/Unit Delay'
         */
        VeCPDR_b_PmpPerf_EnblCnd3 = (((((float32)CPDR_ac_DW.UnitDelay_DSTATE_ai)
            > KeCPDR_t_Max_Montrng_Tm) || (((float32)
            CPDR_ac_DW.UnitDelay_DSTATE_bo) > KeCPDR_t_Max_Montrng_Tm)) ||
            (((float32)CPDR_ac_DW.UnitDelay_DSTATE_pj) > KeCPDR_t_Max_Montrng_Tm));

        /* Logic: '<S105>/Logical2' */
        VeCPDR_b_PmpPerf_EnblCnd2 = ((rtb_OR1_ne && rtb_GreaterThanorEqual7) &&
            rtb_GreaterThanorEqual8);

        /* Switch: '<S105>/Switch' */
        VeCPDR_b_PmpPerf_CntEnbl2_BM = ((VeCPDR_b_PmpPerf_EnblCnd2) ||
            (VeCPDR_b_PmpPerf_EnblCnd3));

        /* Merge: '<S98>/Merge' incorporates:
         *  SignalConversion: '<S105>/Signal Conversion'
         */
        VeCPDR_b_PmpPerf_CntEnbl2 = VeCPDR_b_PmpPerf_CntEnbl2_BM;

        /* End of Outputs for SubSystem: '<S98>/If Action Subsystem' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S98>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S106>/Action Port'
         */
        /* Merge: '<S98>/Merge' incorporates:
         *  Constant: '<S106>/FALSE Constant'
         *  SignalConversion generated from: '<S106>/Out1'
         */
        VeCPDR_b_PmpPerf_CntEnbl2 = false;

        /* End of Outputs for SubSystem: '<S98>/If Action Subsystem1' */
    }

    /* End of If: '<S98>/If' */

    /* Logic: '<S95>/AND1' incorporates:
     *  Constant: '<S169>/Calib'
     *  Constant: '<S170>/Calib'
     *  Logic: '<S95>/AND2'
     *  Logic: '<S95>/AND3'
     */
    VeCPDR_b_PmpPerf_CntEnbl = (((VeCPDR_b_PmpPerf_CntEnbl1) ||
        (KeCPDR_b_TAPSpdChkEnbl_App1OV)) && ((VeCPDR_b_PmpPerf_CntEnbl2) ||
        (KeCPDR_b_TAPSpdChkEnbl_App2OV)));

    /* Switch: '<S156>/Switch1' incorporates:
     *  Constant: '<S158>/Constant Value1'
     *  If: '<S149>/If'
     *  Logic: '<S149>/Fail_Counter_Reset'
     *  Logic: '<S149>/NOT6'
     *  Logic: '<S89>/NOT2'
     *  RelationalOperator: '<S158>/Less Than  or Equal'
     *  Switch: '<S159>/Switch1'
     *  UnitDelay: '<S149>/Unit Delay'
     *  UnitDelay: '<S149>/Unit Delay1'
     *  UnitDelay: '<S151>/Unit Delay'
     */
    if (((VeCPDR_b_ResetCnts) || (CPDR_ac_DW.UnitDelay_DSTATE_hj)) ||
            (CPDR_ac_DW.UnitDelay1_DSTATE_ah))
    {
        /* Switch: '<S156>/Switch1' incorporates:
         *  Constant: '<S149>/Constant Value2'
         */
        VeCPDR_Cnt_PmpPerf_WarnCnt = 0U;
    }
    else if ((VeCPDR_b_PmpPerf_CurrSmplFail) && (VeCPDR_b_PmpPerf_CntEnbl))
    {
        /* Outputs for IfAction SubSystem: '<S149>/Add_1_to_Previous' incorporates:
         *  ActionPort: '<S155>/Action Port'
         */
        /* If: '<S149>/If' incorporates:
         *  Constant: '<S155>/Constant Value3'
         *  Sum: '<S155>/Subtraction1'
         *  Switch: '<S156>/Switch1'
         *  UnitDelay: '<S149>/Unit Delay'
         */
        VeCPDR_Cnt_PmpPerf_WarnCnt = (uint16)(((uint32)
            VeCPDR_Cnt_PmpPerf_WarnCnt) + 1U);

        /* End of Outputs for SubSystem: '<S149>/Add_1_to_Previous' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S149>/Subtract_1_from_Previous_Limit_0' incorporates:
         *  ActionPort: '<S158>/Action Port'
         */
        if (((sint32)VeCPDR_Cnt_PmpPerf_WarnCnt) <= 0)
        {
            /* If: '<S149>/If' incorporates:
             *  Constant: '<S158>/Constant Value1'
             *  Switch: '<S156>/Switch1'
             *  Switch: '<S159>/Switch1'
             */
            VeCPDR_Cnt_PmpPerf_WarnCnt = 0U;
        }
        else
        {
            /* If: '<S149>/If' incorporates:
             *  Constant: '<S158>/Constant Value3'
             *  Sum: '<S158>/Subtraction1'
             *  Switch: '<S156>/Switch1'
             *  Switch: '<S159>/Switch1'
             *  UnitDelay: '<S149>/Unit Delay'
             */
            VeCPDR_Cnt_PmpPerf_WarnCnt = (uint16)((sint32)(((sint32)
                VeCPDR_Cnt_PmpPerf_WarnCnt) - 1));
        }

        /* End of Outputs for SubSystem: '<S149>/Subtract_1_from_Previous_Limit_0' */
    }

    /* End of Switch: '<S156>/Switch1' */

    /* RelationalOperator: '<S149>/Greater Than or Equal ' incorporates:
     *  Constant: '<S92>/Calib'
     *  UnitDelay: '<S149>/Unit Delay1'
     */
    CPDR_ac_DW.UnitDelay1_DSTATE_ah = (VeCPDR_Cnt_PmpPerf_WarnCnt >=
        KeCPDR_Cnt_PmpPerf_WarnCnt);

    /* Outputs for Atomic SubSystem: '<S89>/Signal Latch On With Reset' */
    /* Logic: '<S153>/OR1' incorporates:
     *  Logic: '<S153>/NOT'
     *  Logic: '<S153>/OR'
     *  Logic: '<S89>/NOT4'
     *  UnitDelay: '<S149>/Unit Delay1'
     *  UnitDelay: '<S151>/Unit Delay'
     *  UnitDelay: '<S153>/Unit Delay'
     */
    CPDR_ac_DW.UnitDelay_DSTATE_m3 = ((CPDR_ac_DW.UnitDelay1_DSTATE_ah) ||
        (((!VeCPDR_b_ResetCnts) && (!CPDR_ac_DW.UnitDelay_DSTATE_hj)) &&
         (CPDR_ac_DW.UnitDelay_DSTATE_m3)));

    /* End of Outputs for SubSystem: '<S89>/Signal Latch On With Reset' */

    /* Outputs for Atomic SubSystem: '<S89>/EdgeRising' */
    /* Logic: '<S148>/AND' incorporates:
     *  Logic: '<S148>/OR1'
     *  UnitDelay: '<S148>/Unit Delay'
     *  UnitDelay: '<S153>/Unit Delay'
     */
    rtb_AND_m = ((CPDR_ac_DW.UnitDelay_DSTATE_m3) &&
                 (!CPDR_ac_DW.UnitDelay_DSTATE_ii));

    /* Update for UnitDelay: '<S148>/Unit Delay' incorporates:
     *  UnitDelay: '<S153>/Unit Delay'
     */
    CPDR_ac_DW.UnitDelay_DSTATE_ii = CPDR_ac_DW.UnitDelay_DSTATE_m3;

    /* End of Outputs for SubSystem: '<S89>/EdgeRising' */

    /* Switch: '<S152>/Switch' incorporates:
     *  Constant: '<S152>/Constant Value'
     *  DataStoreWrite: '<S84>/Data Store Write2'
     *  Switch: '<S152>/Switch1'
     */
    if (VeCPDR_b_ResetFOMs)
    {
        CPDR_ac_DW.VeCPDR_Cnt_PmpPerf_LtchWarn = 0U;
    }
    else
    {
        if (rtb_AND_m)
        {
            /* Switch: '<S162>/Switch2' incorporates:
             *  Constant: '<S162>/Constant'
             *  Constant: '<S162>/Constant2'
             *  DataStoreRead: '<S84>/Data Store Read'
             *  DataStoreWrite: '<S84>/Data Store Write2'
             *  RelationalOperator: '<S162>/Relational Operator1'
             *  Sum: '<S162>/Sum'
             *  Switch: '<S152>/Switch1'
             */
            if (((sint32)CPDR_ac_DW.VeCPDR_Cnt_PmpPerf_LtchWarn) < 65535)
            {
                CPDR_ac_DW.VeCPDR_Cnt_PmpPerf_LtchWarn = (uint16)(((uint32)
                    CPDR_ac_DW.VeCPDR_Cnt_PmpPerf_LtchWarn) + 1U);
            }
            else
            {
                CPDR_ac_DW.VeCPDR_Cnt_PmpPerf_LtchWarn = MAX_uint16_T;
            }

            /* End of Switch: '<S162>/Switch2' */
        }
    }

    /* End of Switch: '<S152>/Switch' */

    /* Switch: '<S165>/Switch1' incorporates:
     *  Switch: '<S165>/Switch2'
     */
    if (VeCPDR_b_ResetCnts)
    {
        /* Switch: '<S166>/Switch1' incorporates:
         *  Constant: '<S165>/Constant Value2'
         */
        rtb_Switch1_oe = 0U;
    }
    else if (rtb_AND_m)
    {
        /* Switch: '<S165>/Switch2' incorporates:
         *  Constant: '<S165>/Constant Value1'
         *  Sum: '<S165>/Subtraction'
         *  Switch: '<S166>/Switch1'
         *  UnitDelay: '<S165>/Unit Delay'
         */
        rtb_Switch1_oe = (uint16)(((uint32)VeCPDR_Cnt_PmpPerf_LtchWarnCnt) + 1U);
    }
    else
    {
        /* Switch: '<S166>/Switch1' incorporates:
         *  Switch: '<S165>/Switch2'
         *  UnitDelay: '<S165>/Unit Delay'
         */
        rtb_Switch1_oe = VeCPDR_Cnt_PmpPerf_LtchWarnCnt;
    }

    /* End of Switch: '<S165>/Switch1' */

    /* MinMax: '<S165>/MinMax1' */
    if (65000 < ((sint32)rtb_Switch1_oe))
    {
        /* MinMax: '<S165>/MinMax1' */
        VeCPDR_Cnt_PmpPerf_LtchWarnCnt = 65000U;
    }
    else
    {
        /* MinMax: '<S165>/MinMax1' */
        VeCPDR_Cnt_PmpPerf_LtchWarnCnt = rtb_Switch1_oe;
    }

    /* End of MinMax: '<S165>/MinMax1' */

    /* RelationalOperator: '<S154>/Comparison1' incorporates:
     *  Constant: '<S91>/Calib'
     */
    rtb_OR1_ne = (VeCPDR_Cnt_PmpPerf_LtchWarnCnt >=
                  KeCPDR_Cnt_PmpPerf_SetCodeThd);

    /* Outputs for Atomic SubSystem: '<S154>/EdgeRising2' */
    /* Logic: '<S164>/OR1' incorporates:
     *  UnitDelay: '<S164>/Unit Delay'
     */
    rtb_GreaterThanorEqual7 = !CPDR_ac_DW.UnitDelay_DSTATE_am;

    /* Update for UnitDelay: '<S164>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_am = rtb_OR1_ne;

    /* Outputs for Enabled SubSystem: '<S84>/Event_AuxTransFldPmpPerf_ReportTestFailed_7' incorporates:
     *  EnablePort: '<S86>/Enable'
     */
    /* Logic: '<S164>/AND' */
    if (rtb_OR1_ne && rtb_GreaterThanorEqual7)
    {
        /* DataStoreWrite: '<S86>/VeCPDR_e_FaultSts_AuxTransFldPmpPerf' incorporates:
         *  Constant: '<S140>/Constant'
         */
        CPDR_ac_DW.VeCPDR_e_FaultSts_AuxTransFldPmpPerf = CeDFIB_e_Fail;
    }

    /* End of Logic: '<S164>/AND' */
    /* End of Outputs for SubSystem: '<S84>/Event_AuxTransFldPmpPerf_ReportTestFailed_7' */
    /* End of Outputs for SubSystem: '<S154>/EdgeRising2' */

    /* Switch: '<S166>/Switch1' incorporates:
     *  Logic: '<S154>/NOT1'
     *  Switch: '<S166>/Switch2'
     *  UnitDelay: '<S154>/Unit Delay1'
     */
    if (((VeCPDR_b_ResetCnts) || (VeCPDR_b_PmpPerf_CurrSmplFail)) ||
            (CPDR_ac_DW.UnitDelay1_DSTATE_mn))
    {
        /* Switch: '<S166>/Switch1' incorporates:
         *  Constant: '<S166>/Constant Value2'
         */
        rtb_Switch1_oe = 0U;
    }
    else if (VeCPDR_b_PmpPerf_CntEnbl)
    {
        /* Switch: '<S166>/Switch2' incorporates:
         *  Constant: '<S166>/Constant Value1'
         *  Sum: '<S166>/Subtraction'
         *  Switch: '<S166>/Switch1'
         *  UnitDelay: '<S166>/Unit Delay'
         */
        rtb_Switch1_oe = (uint16)(((uint32)CPDR_ac_DW.UnitDelay_DSTATE_ms) + 1U);
    }
    else
    {
        /* Switch: '<S166>/Switch1' incorporates:
         *  Switch: '<S166>/Switch2'
         *  UnitDelay: '<S166>/Unit Delay'
         */
        rtb_Switch1_oe = CPDR_ac_DW.UnitDelay_DSTATE_ms;
    }

    /* End of Switch: '<S166>/Switch1' */

    /* MinMax: '<S166>/MinMax1' */
    if (65000 < ((sint32)rtb_Switch1_oe))
    {
        CPDR_ac_DW.UnitDelay_DSTATE_ms = 65000U;
    }
    else
    {
        CPDR_ac_DW.UnitDelay_DSTATE_ms = rtb_Switch1_oe;
    }

    /* End of MinMax: '<S166>/MinMax1' */

    /* RelationalOperator: '<S154>/Comparison' incorporates:
     *  Constant: '<S91>/Calib'
     *  Constant: '<S92>/Calib'
     *  Product: '<S154>/Product'
     *  UnitDelay: '<S166>/Unit Delay'
     */
    rtb_GreaterThanorEqual7 = (((uint32)CPDR_ac_DW.UnitDelay_DSTATE_ms) >
        (((uint32)KeCPDR_Cnt_PmpPerf_SetCodeThd) * ((uint32)
        KeCPDR_Cnt_PmpPerf_WarnCnt)));

    /* Outputs for Atomic SubSystem: '<S154>/EdgeRising1' */
    /* Logic: '<S163>/AND' incorporates:
     *  Logic: '<S163>/OR1'
     *  UnitDelay: '<S163>/Unit Delay'
     */
    CPDR_ac_DW.UnitDelay1_DSTATE_mn = (rtb_GreaterThanorEqual7 &&
        (!CPDR_ac_DW.UnitDelay_DSTATE_he));

    /* Update for UnitDelay: '<S163>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_he = rtb_GreaterThanorEqual7;

    /* End of Outputs for SubSystem: '<S154>/EdgeRising1' */

    /* Outputs for Enabled SubSystem: '<S84>/Event_AuxTransFldPmpPerf_ReportTestPassed_8' incorporates:
     *  EnablePort: '<S87>/Enable'
     */
    if (CPDR_ac_DW.UnitDelay1_DSTATE_mn)
    {
        /* DataStoreWrite: '<S87>/VeCPDR_e_FaultSts_AuxTransFldPmpPerf' incorporates:
         *  Constant: '<S141>/Constant'
         */
        CPDR_ac_DW.VeCPDR_e_FaultSts_AuxTransFldPmpPerf = CeDFIB_e_Pass;
    }

    /* End of Outputs for SubSystem: '<S84>/Event_AuxTransFldPmpPerf_ReportTestPassed_8' */

    /* Outputs for Atomic SubSystem: '<S151>/Timer Retrigger Reset Enabled' */
    /* Switch: '<S161>/Switch1' incorporates:
     *  Constant: '<S93>/Calib'
     *  Logic: '<S151>/Logical1'
     *  Logic: '<S151>/Logical2'
     *  Switch: '<S161>/Switch2'
     *  UnitDelay: '<S153>/Unit Delay'
     *  UnitDelay: '<S161>/Unit Delay'
     */
    if (rtb_AND_m)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_j1 = KeCPDR_t_PmpPerf_RstWarnDly;
    }
    else
    {
        if ((CPDR_ac_DW.UnitDelay_DSTATE_m3) && (!rtb_OR1_ne))
        {
            /* UnitDelay: '<S161>/Unit Delay' incorporates:
             *  Constant: '<S161>/Constant Value4'
             *  Constant: '<S90>/Calib'
             *  MinMax: '<S161>/Maximum'
             *  Sum: '<S161>/Subtraction'
             *  Switch: '<S161>/Switch2'
             */
            CPDR_ac_DW.UnitDelay_DSTATE_j1 = fmaxf
                (CPDR_ac_DW.UnitDelay_DSTATE_j1 - HeCPDR_t_MedTED, 0.0F);
        }
    }

    /* End of Switch: '<S161>/Switch1' */

    /* RelationalOperator: '<S161>/Greater  Than1' incorporates:
     *  Constant: '<S161>/Constant Value2'
     *  UnitDelay: '<S161>/Unit Delay'
     */
    rtb_AND_m = (CPDR_ac_DW.UnitDelay_DSTATE_j1 > 0.0F);

    /* End of Outputs for SubSystem: '<S151>/Timer Retrigger Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S151>/EdgeFalling' */
    /* Logic: '<S160>/AND' incorporates:
     *  Logic: '<S160>/OR1'
     *  UnitDelay: '<S151>/Unit Delay'
     *  UnitDelay: '<S160>/Unit Delay'
     */
    CPDR_ac_DW.UnitDelay_DSTATE_hj = ((!rtb_AND_m) &&
        (CPDR_ac_DW.UnitDelay_DSTATE_jc));

    /* Update for UnitDelay: '<S160>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_jc = rtb_AND_m;

    /* End of Outputs for SubSystem: '<S151>/EdgeFalling' */

    /* Logic: '<S66>/Logical1' incorporates:
     *  Constant: '<S68>/Constant1'
     *  Constant: '<S68>/Constant2'
     *  Constant: '<S69>/Constant1'
     *  Constant: '<S69>/Constant2'
     *  Constant: '<S70>/Constant1'
     *  Constant: '<S70>/Constant2'
     *  Constant: '<S71>/Calib'
     *  Constant: '<S72>/Calib'
     *  Constant: '<S73>/Calib'
     *  Logic: '<S66>/Logical2'
     *  Logic: '<S66>/Logical3'
     *  Logic: '<S66>/Logical4'
     *  Logic: '<S68>/Logical Operator'
     *  Logic: '<S69>/Logical Operator'
     *  Logic: '<S70>/Logical Operator'
     *  RelationalOperator: '<S68>/Relational Operator1'
     *  RelationalOperator: '<S68>/Relational Operator2'
     *  RelationalOperator: '<S69>/Relational Operator1'
     *  RelationalOperator: '<S69>/Relational Operator2'
     *  RelationalOperator: '<S70>/Relational Operator1'
     *  RelationalOperator: '<S70>/Relational Operator2'
     */
    CPDR_ac_B.Logical1 = (((((VeCPDR_b_PmpPerf_EnblCnd1_tmp > 0) &&
        (VeCPDR_b_PmpPerf_EnblCnd1_tmp_0 == 0U)) &&
                            (KeCPDR_b_IUMPR_TAP_Perf_LOC_ChkEnbl)) ||
                           (((VeCPDR_b_PmpPerf_EnblCnd1_tmp_1 > 0) &&
        (VeCPDR_b_PmpPerf_EnblCnd1_tmp_2 == 0U)) &&
                            (KeCPDR_b_IUMPR_TAP_Perf_ThrmlRly_ChkEnbl))) ||
                          (((VeCPDR_b_PmpPerf_EnblCnd1_tmp_3 > 0) &&
                            (VeCPDR_b_PmpPerf_EnblCnd1_tmp_4 == 0U)) &&
                           (KeCPDR_b_IUMPR_TAP_Perf_LINBus_ChkEnbl)));

    /* RelationalOperator: '<S67>/Comparison2' incorporates:
     *  Constant: '<S75>/Calib'
     */
    rtb_GreaterThanorEqual7 = (CPDR_ac_B.SignalConversion_n <
        KeCPDR_n_IUMPR_TAP_MinCmdThrshld);

    /* Logic: '<S67>/Logical1' */
    rtb_AND_m = !CPDR_ac_B.SignalConversion_kc;

    /* Outputs for Atomic SubSystem: '<S67>/Stop Watch Reset Enabled2' */
    /* Switch: '<S78>/Switch1' incorporates:
     *  Constant: '<S78>/Constant Value2'
     *  Logic: '<S67>/Logical3'
     *  UnitDelay: '<S78>/Unit Delay'
     */
    if (rtb_GreaterThanorEqual7 || rtb_AND_m)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_cm = 0.0F;
    }
    else
    {
        /* UnitDelay: '<S78>/Unit Delay' incorporates:
         *  Constant: '<S67>/Constant Value1'
         *  Sum: '<S78>/Subtraction'
         *  Switch: '<S78>/Switch2'
         */
        CPDR_ac_DW.UnitDelay_DSTATE_cm += 0.025F;
    }

    /* End of Switch: '<S78>/Switch1' */
    /* End of Outputs for SubSystem: '<S67>/Stop Watch Reset Enabled2' */

    /* RelationalOperator: '<S74>/Comparison1' incorporates:
     *  Constant: '<S81>/Calib'
     *  UnitDelay: '<S78>/Unit Delay'
     */
    rtb_OR1_ne = (CPDR_ac_DW.UnitDelay_DSTATE_cm >
                  KeCPDR_t_IUMPR_TAP_MinConsecTime_CmdOn);

    /* Outputs for Atomic SubSystem: '<S67>/Stop Watch Reset Enabled' */
    /* Switch: '<S77>/Switch1' incorporates:
     *  Constant: '<S77>/Constant Value2'
     *  Logic: '<S67>/Logical4'
     *  Switch: '<S77>/Switch2'
     *  UnitDelay: '<S77>/Unit Delay'
     */
    if (rtb_AND_m)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_gs = 0.0F;
    }
    else
    {
        if (!rtb_GreaterThanorEqual7)
        {
            /* UnitDelay: '<S77>/Unit Delay' incorporates:
             *  Constant: '<S67>/Constant Value2'
             *  Sum: '<S77>/Subtraction'
             *  Switch: '<S77>/Switch2'
             */
            CPDR_ac_DW.UnitDelay_DSTATE_gs += 0.025F;
        }
    }

    /* End of Switch: '<S77>/Switch1' */
    /* End of Outputs for SubSystem: '<S67>/Stop Watch Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S74>/EdgeRising' */
    /* Logic: '<S79>/OR1' incorporates:
     *  UnitDelay: '<S79>/Unit Delay'
     */
    rtb_GreaterThanorEqual7 = !CPDR_ac_DW.UnitDelay_DSTATE_ck;

    /* Update for UnitDelay: '<S79>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_ck = rtb_OR1_ne;

    /* End of Outputs for SubSystem: '<S74>/EdgeRising' */

    /* Switch: '<S74>/Switch' incorporates:
     *  Constant: '<S74>/Constant Value5'
     *  Logic: '<S79>/AND'
     *  Sum: '<S74>/Sum'
     *  UnitDelay: '<S74>/Unit Delay'
     */
    if (rtb_AND_m)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_c3 = 0.0F;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S74>/EdgeRising' */
        CPDR_ac_DW.UnitDelay_DSTATE_c3 += (float32)((rtb_OR1_ne &&
            rtb_GreaterThanorEqual7) ? 1 : 0);

        /* End of Outputs for SubSystem: '<S74>/EdgeRising' */
    }

    /* End of Switch: '<S74>/Switch' */

    /* Outputs for Atomic SubSystem: '<S67>/Signal Latch On With Reset' */
    /* Logic: '<S76>/OR1' incorporates:
     *  Constant: '<S80>/Calib'
     *  Constant: '<S82>/Calib'
     *  Logic: '<S74>/Logical4'
     *  Logic: '<S76>/NOT'
     *  Logic: '<S76>/OR'
     *  RelationalOperator: '<S74>/Comparison2'
     *  RelationalOperator: '<S74>/Comparison4'
     *  UnitDelay: '<S74>/Unit Delay'
     *  UnitDelay: '<S76>/Unit Delay'
     *  UnitDelay: '<S77>/Unit Delay'
     */
    CPDR_ac_DW.UnitDelay_DSTATE_lts = (((CPDR_ac_DW.UnitDelay_DSTATE_gs >=
        KeCPDR_t_IUMPR_TAP_MinCumlTime_CmdOn) || (CPDR_ac_DW.UnitDelay_DSTATE_c3
        >= KeCPDR_Cnt_IUMPR_TAP_MinConsecCnt_CmdOn)) || ((!rtb_AND_m) &&
        (CPDR_ac_DW.UnitDelay_DSTATE_lts)));

    /* End of Outputs for SubSystem: '<S67>/Signal Latch On With Reset' */

    /* DataStoreRead: '<S6>/DSR_VeCPDR_e_FaultSts_AuxTransFldPmpPerf' */
    CPDR_ac_B.DSR_VeCPDR_e_FaultSts_AuxTransFldPmpPerf =
        CPDR_ac_DW.VeCPDR_e_FaultSts_AuxTransFldPmpPerf;

    /* End of Outputs for SubSystem: '<S1>/TAP_Diagnostics' */
#endif

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
#endif

    /* SignalConversion generated from: '<S1>/AuxPumpSpdAct_AD_write' incorporates:
     *  SignalConversion generated from: '<S1>/BF1_SysVolt_AD'
     *  SignalConversion generated from: '<S1>/BPCM_LIN_BusOff_AD_write'
     *  SignalConversion generated from: '<S1>/BPCM_LIN_BusOff_FA_AD_write'
     *  SignalConversion generated from: '<S1>/BPCM_LIN_BusOff_SgnlRcvd_AD_write'
     *  SignalConversion generated from: '<S1>/BPCM_LOC_BCP_AD_write'
     *  SignalConversion generated from: '<S1>/BPCM_LOC_BCP_FA_AD_write'
     *  SignalConversion generated from: '<S1>/BPCM_LOC_BCP_SgnlRcvd_AD_write'
     *  SignalConversion generated from: '<S1>/DsblDiagFailSafe_AD_write'
     *  SignalConversion generated from: '<S1>/HTAP_MaxOpRPM_AD_write'
     *  SignalConversion generated from: '<S1>/LTAP_MaxOpRPM_AD_write'
     *  SignalConversion generated from: '<S1>/LTPP2_MaxOpRPM_AD_write'
     *  SignalConversion generated from: '<S1>/LTPP_MaxOpRPM_AD_write'
     *  SignalConversion generated from: '<S1>/PostCodeClrDiagDsbl_AD_write'
     *  SignalConversion generated from: '<S1>/PropSysActv_AD_write'
     *  SignalConversion generated from: '<S1>/TransAuxPmp_Cmd_AD_write'
     */
#if Rte_SysCon_Variant_CPDR_1

    /* SignalConversion generated from: '<S1>/AuxPumpSpdAct_AD_write' */
    rtb_OutportBufferForAuxPumpSpdAct_AD_w_d = CPDR_ac_B.SignalConversion_k;

    /* SignalConversion generated from: '<S1>/BF1_SysVolt_AD' */
    rtb_OutportBufferForBF1_SysVolt_AD = CPDR_ac_B.SignalConversion;

    /* SignalConversion generated from: '<S1>/BPCM_LIN_BusOff_AD_write' incorporates:
     *  SignalConversion: '<S10>/Signal Conversion'
     */
    rtb_OutportBufferForBPCM_LIN_BusOff_AD_b = CPDR_ac_B.SignalConversion_f;

    /* SignalConversion generated from: '<S1>/BPCM_LIN_BusOff_FA_AD_write' */
    rtb_OutportBufferForBPCM_LIN_BusOff_FA_k = CPDR_ac_B.SignalConversion_p;

    /* SignalConversion generated from: '<S1>/BPCM_LIN_BusOff_SgnlRcvd_AD_write' */
    rtb_OutportBufferForBPCM_LIN_BusOff_Sg_h = CPDR_ac_B.SignalConversion_au;

    /* SignalConversion generated from: '<S1>/BPCM_LOC_BCP_AD_write' incorporates:
     *  SignalConversion: '<S13>/Signal Conversion'
     */
    rtb_OutportBufferForBPCM_LOC_BCP_AD_wr_a = CPDR_ac_B.SignalConversion_dd;

    /* SignalConversion generated from: '<S1>/BPCM_LOC_BCP_FA_AD_write' */
    rtb_OutportBufferForBPCM_LOC_BCP_FA_AD_d = CPDR_ac_B.SignalConversion_lx;

    /* SignalConversion generated from: '<S1>/BPCM_LOC_BCP_SgnlRcvd_AD_write' */
    rtb_OutportBufferForBPCM_LOC_BCP_SgnlR_b = CPDR_ac_B.SignalConversion_hr;

    /* SignalConversion generated from: '<S1>/DsblDiagFailSafe_AD_write' */
    rtb_OutportBufferForDsblDiagFailSafe_A_o = CPDR_ac_B.SignalConversion_d;

    /* SignalConversion generated from: '<S1>/HTAP_MaxOpRPM_AD_write' */
    rtb_OutportBufferForHTAP_MaxOpRPM_AD_w_o = CPDR_ac_B.SignalConversion_e;

    /* SignalConversion generated from: '<S1>/LTAP_MaxOpRPM_AD_write' */
    rtb_OutportBufferForLTAP_MaxOpRPM_AD_w_n = CPDR_ac_B.SignalConversion_a;

    /* SignalConversion generated from: '<S1>/LTPP2_MaxOpRPM_AD_write' */
    rtb_OutportBufferForLTPP2_MaxOpRPM_AD__k = CPDR_ac_B.SignalConversion_h;

    /* SignalConversion generated from: '<S1>/LTPP_MaxOpRPM_AD_write' */
    rtb_OutportBufferForLTPP_MaxOpRPM_AD_w_a = CPDR_ac_B.SignalConversion_j;

    /* SignalConversion generated from: '<S1>/PostCodeClrDiagDsbl_AD_write' */
    rtb_OutportBufferForPostCodeClrDiagDsb_n = CPDR_ac_B.SignalConversion_l;

    /* SignalConversion generated from: '<S1>/PropSysActv_AD_write' */
    rtb_OutportBufferForPropSysActv_AD_wri_n = CPDR_ac_B.SignalConversion_kc;

    /* SignalConversion generated from: '<S1>/TransAuxPmp_Cmd_AD_write' */
    rtb_OutportBufferForTransAuxPmp_Cmd_AD_g = CPDR_ac_B.SignalConversion_n;

#endif

    /* End of SignalConversion generated from: '<S1>/AuxPumpSpdAct_AD_write' */

    /* SignalConversion generated from: '<S1>/VeCPDR_b_AuxPumpPerf_FltDtct' incorporates:
     *  SignalConversion generated from: '<S1>/VeCPDR_b_IUMPR_TAP_FunPerf'
     *  SignalConversion generated from: '<S1>/VeCPDR_b_IUMPR_TAP_MinCmdThrshld_Met'
     *  SignalConversion generated from: '<S1>/VeCPDR_e_FaultSts_AuxTransFldPmpPerf'
     */
#if Rte_SysCon_Variant_CPDR_2

    /* Outport: '<Root>/VeCPDR_b_AuxPumpPerf_FltDtct' incorporates:
     *  UnitDelay: '<S153>/Unit Delay'
     */
    (void)Rte_Write_VeCPDR_b_AuxPumpPerf_FltDtct_Value
        (CPDR_ac_DW.UnitDelay_DSTATE_m3);

    /* Outport: '<Root>/VeCPDR_b_IUMPR_TAP_FunPerf' */
    (void)Rte_Write_VeCPDR_b_IUMPR_TAP_FunPerf_Value(CPDR_ac_B.Logical1);

    /* Outport: '<Root>/VeCPDR_b_IUMPR_TAP_MinCmdThrshld_Met' incorporates:
     *  UnitDelay: '<S76>/Unit Delay'
     */
    (void)Rte_Write_VeCPDR_b_IUMPR_TAP_MinCmdThrshld_Met_Value
        (CPDR_ac_DW.UnitDelay_DSTATE_lts);

    /* Outport: '<Root>/VeCPDR_e_FaultSts_AuxTransFldPmpPerf' incorporates:
     *  DataStoreRead: '<S6>/DSR_VeCPDR_e_FaultSts_AuxTransFldPmpPerf'
     */
    (void)Rte_Write_VeCPDR_e_FaultSts_AuxTransFldPmpPerf_Value
        (CPDR_ac_B.DSR_VeCPDR_e_FaultSts_AuxTransFldPmpPerf);

#endif

    /* End of SignalConversion generated from: '<S1>/VeCPDR_b_AuxPumpPerf_FltDtct' */

    /* SignalConversion generated from: '<S1>/AuxPumpSpdAct_AD_write' incorporates:
     *  SignalConversion generated from: '<S1>/BF1_SysVolt_AD'
     *  SignalConversion generated from: '<S1>/BPCM_LIN_BusOff_AD_write'
     *  SignalConversion generated from: '<S1>/BPCM_LIN_BusOff_FA_AD_write'
     *  SignalConversion generated from: '<S1>/BPCM_LIN_BusOff_SgnlRcvd_AD_write'
     *  SignalConversion generated from: '<S1>/BPCM_LOC_BCP_AD_write'
     *  SignalConversion generated from: '<S1>/BPCM_LOC_BCP_FA_AD_write'
     *  SignalConversion generated from: '<S1>/BPCM_LOC_BCP_SgnlRcvd_AD_write'
     *  SignalConversion generated from: '<S1>/DsblDiagFailSafe_AD_write'
     *  SignalConversion generated from: '<S1>/HTAP_MaxOpRPM_AD_write'
     *  SignalConversion generated from: '<S1>/LTAP_MaxOpRPM_AD_write'
     *  SignalConversion generated from: '<S1>/LTPP2_MaxOpRPM_AD_write'
     *  SignalConversion generated from: '<S1>/LTPP_MaxOpRPM_AD_write'
     *  SignalConversion generated from: '<S1>/PostCodeClrDiagDsbl_AD_write'
     *  SignalConversion generated from: '<S1>/PropSysActv_AD_write'
     *  SignalConversion generated from: '<S1>/TransAuxPmp_Cmd_AD_write'
     */
#if Rte_SysCon_Variant_CPDR_1

    /* Merge: '<Root>/AuxPumpSpdAct_AD_IRV_Merge' */
    Rte_IrvWrite_CPDR_MedTED_AuxPumpSpdAct_AD_write_IRV
        (rtb_OutportBufferForAuxPumpSpdAct_AD_w_d);

    /* Merge: '<Root>/HB_SysVolt_AD_IRV_Merge' */
    Rte_IrvWrite_CPDR_MedTED_BF1_SysVolt_AD_IRV
        (rtb_OutportBufferForBF1_SysVolt_AD);

    /* Merge: '<Root>/BPCM_LIN_BusOff_AD_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/BPCM_LIN_BusOff_AD_write'
     */
    Rte_IrvWrite_CPDR_MedTED_BPCM_LIN_BusOff_AD_write_IRV
        (rtb_OutportBufferForBPCM_LIN_BusOff_AD_b);

    /* Merge: '<Root>/BPCM_LIN_BusOff_FA_AD_IRV_Merge' */
    Rte_IrvWrite_CPDR_MedTED_BPCM_LIN_BusOff_FA_AD_write_IRV
        (rtb_OutportBufferForBPCM_LIN_BusOff_FA_k);

    /* Merge: '<Root>/BPCM_LIN_BusOff_SgnlRcvd_AD_IRV_Merge' */
    Rte_IrvWrite_CPDR_MedTED_BPCM_LIN_BusOff_SgnlRcvd_AD_write_IRV
        (rtb_OutportBufferForBPCM_LIN_BusOff_Sg_h);

    /* Merge: '<Root>/BPCM_LOC_BCP_AD_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/BPCM_LOC_BCP_AD_write'
     */
    Rte_IrvWrite_CPDR_MedTED_BPCM_LOC_BCP_AD_write_IRV
        (rtb_OutportBufferForBPCM_LOC_BCP_AD_wr_a);

    /* Merge: '<Root>/BPCM_LOC_BCP_FA_AD_IRV_Merge' */
    Rte_IrvWrite_CPDR_MedTED_BPCM_LOC_BCP_FA_AD_write_IRV
        (rtb_OutportBufferForBPCM_LOC_BCP_FA_AD_d);

    /* Merge: '<Root>/BPCM_LOC_BCP_SgnlRcvd_AD_IRV_Merge' */
    Rte_IrvWrite_CPDR_MedTED_BPCM_LOC_BCP_SgnlRcvd_AD_write_IRV
        (rtb_OutportBufferForBPCM_LOC_BCP_SgnlR_b);

    /* Merge: '<Root>/DsblDiagFailSafe_AD_IRV_Merge' */
    Rte_IrvWrite_CPDR_MedTED_DsblDiagFailSafe_AD_write_IRV
        (rtb_OutportBufferForDsblDiagFailSafe_A_o);

    /* Merge: '<Root>/HTAP_MaxOpRPM_AD_IRV_Merge' */
    Rte_IrvWrite_CPDR_MedTED_HTAP_MaxOpRPM_AD_write_IRV
        (rtb_OutportBufferForHTAP_MaxOpRPM_AD_w_o);

    /* Merge: '<Root>/LTAP_MaxOpRPM_AD_IRV_Merge' */
    Rte_IrvWrite_CPDR_MedTED_LTAP_MaxOpRPM_AD_write_IRV
        (rtb_OutportBufferForLTAP_MaxOpRPM_AD_w_n);

    /* Merge: '<Root>/LTPP2_MaxOpRPM_AD_IRV_Merge' */
    Rte_IrvWrite_CPDR_MedTED_LTPP2_MaxOpRPM_AD_write_IRV
        (rtb_OutportBufferForLTPP2_MaxOpRPM_AD__k);

    /* Merge: '<Root>/LTPP_MaxOpRPM_AD_IRV_Merge' */
    Rte_IrvWrite_CPDR_MedTED_LTPP_MaxOpRPM_AD_write_IRV
        (rtb_OutportBufferForLTPP_MaxOpRPM_AD_w_a);

    /* Merge: '<Root>/PostCodeClrDiagDsbl_AD_IRV_Merge' */
    Rte_IrvWrite_CPDR_MedTED_PostCodeClrDiagDsbl_AD_write_IRV
        (rtb_OutportBufferForPostCodeClrDiagDsb_n);

    /* Merge: '<Root>/PropSysActv_AD_IRV_Merge' */
    Rte_IrvWrite_CPDR_MedTED_PropSysActv_AD_write_IRV
        (rtb_OutportBufferForPropSysActv_AD_wri_n);

    /* Merge: '<Root>/TransAuxPmp_Cmd_AD_IRV_Merge' */
    Rte_IrvWrite_CPDR_MedTED_TransAuxPmp_Cmd_AD_write_IRV
        (rtb_OutportBufferForTransAuxPmp_Cmd_AD_g);

#endif

    /* End of SignalConversion generated from: '<S1>/AuxPumpSpdAct_AD_write' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
}

/* Model step function for TID2 */
FUNC(void, CPDR_CODE) CPDR_MedTEH(void) /* Explicit Task: MedTEH */
{

#if Rte_SysCon_Variant_CPDR_5

    TePMPR_e_FTSNA tmpRead;

#endif

#if Rte_SysCon_Variant_CPDR_6

    TePMPR_e_FTSNA tmpRead_0;

#endif

#if Rte_SysCon_Variant_CPDR_5

    TePMPR_e_TFSNA tmpRead_1;

#endif

#if Rte_SysCon_Variant_CPDR_6

    TePMPR_e_TFSNA tmpRead_2;

#endif

#if Rte_SysCon_Variant_CPDR_5

    TePMPR_e_FTSNA tmpRead_3;

#endif

#if Rte_SysCon_Variant_CPDR_3

    TePMPR_e_FTSNA tmpRead_4;

#endif

#if Rte_SysCon_Variant_CPDR_3

    TePMPR_e_FTSNA tmpRead_5;

#endif

#if Rte_SysCon_Variant_CPDR_3

    boolean tmpRead_6;

#endif

#if Rte_SysCon_Variant_CPDR_3

    boolean tmpRead_7;

#endif

#if Rte_SysCon_Variant_CPDR_3

    TePMPR_e_FTSNA tmpRead_8;

#endif

#if Rte_SysCon_Variant_CPDR_3

    boolean tmpRead_9;

#endif

#if Rte_SysCon_Variant_CPDR_4

    TePMPR_e_FTSNA tmpRead_a;

#endif

#if Rte_SysCon_Variant_CPDR_4

    TePMPR_e_FTSNA tmpRead_b;

#endif

#if Rte_SysCon_Variant_CPDR_4

    TePMPR_e_TFSNA tmpRead_c;

#endif

#if Rte_SysCon_Variant_CPDR_11

    float32 tmpRead_d;

#endif

#if Rte_SysCon_Variant_CPDR_3 || Rte_SysCon_Variant_CPDR_4 || Rte_SysCon_Variant_CPDR_5 || Rte_SysCon_Variant_CPDR_6 || Rte_SysCon_Variant_CPDR_7

    boolean rtb_TmpSignalConversionAtBPCM_LIN_BusOff;

#endif

#if Rte_SysCon_Variant_CPDR_3

    boolean rtb_TmpSignalConversionAtBPCM_LIN_BusO_i;

#endif

#if Rte_SysCon_Variant_CPDR_3

    boolean rtb_TmpSignalConversionAtBPCM_LOC_BCP_FA;

#endif

#if Rte_SysCon_Variant_CPDR_3

    boolean rtb_TmpSignalConversionAtBPCM_LOC_BCP_Sg;

#endif

#if Rte_SysCon_Variant_CPDR_11 || Rte_SysCon_Variant_CPDR_3 || Rte_SysCon_Variant_CPDR_4 || Rte_SysCon_Variant_CPDR_5 || Rte_SysCon_Variant_CPDR_6 || Rte_SysCon_Variant_CPDR_7 || Rte_SysCon_Variant_CPDR_8

    boolean rtb_TmpSignalConversionAtDsblDiagFailSaf;

#endif

#if Rte_SysCon_Variant_CPDR_11 || Rte_SysCon_Variant_CPDR_3 || Rte_SysCon_Variant_CPDR_4 || Rte_SysCon_Variant_CPDR_5 || Rte_SysCon_Variant_CPDR_6 || Rte_SysCon_Variant_CPDR_7 || Rte_SysCon_Variant_CPDR_8

    boolean rtb_TmpSignalConversionAtPostCodeClrDiag;

#endif

#if Rte_SysCon_Variant_CPDR_11 || Rte_SysCon_Variant_CPDR_3 || Rte_SysCon_Variant_CPDR_4 || Rte_SysCon_Variant_CPDR_5 || Rte_SysCon_Variant_CPDR_6 || Rte_SysCon_Variant_CPDR_7 || Rte_SysCon_Variant_CPDR_8

    float32 rtb_TmpSignalConversionAtBF1_SysVolt_AD_;

#endif

#if Rte_SysCon_Variant_CPDR_3

    float32 rtb_TmpSignalConversionAtLTAP_MaxOpRPM_A;

#endif

#if Rte_SysCon_Variant_CPDR_11 || Rte_SysCon_Variant_CPDR_3 || Rte_SysCon_Variant_CPDR_4 || Rte_SysCon_Variant_CPDR_5 || Rte_SysCon_Variant_CPDR_6 || Rte_SysCon_Variant_CPDR_7 || Rte_SysCon_Variant_CPDR_8

    boolean rtb_TmpSignalConversionAtPropSysActv_AD_;

#endif

#if Rte_SysCon_Variant_CPDR_11 || Rte_SysCon_Variant_CPDR_3 || Rte_SysCon_Variant_CPDR_4 || Rte_SysCon_Variant_CPDR_5 || Rte_SysCon_Variant_CPDR_6

    boolean rtb_TmpSignalConversionAtVeTMIR_b_MainRl;

#endif

#if Rte_SysCon_Variant_CPDR_3 || Rte_SysCon_Variant_CPDR_7

    float32 rtb_TmpSignalConversionAtVePMPR_n_LT_Act;

#endif

#if Rte_SysCon_Variant_CPDR_3

    boolean rtb_UnitDelay1_e;

#endif

#if !Rte_SysCon_Variant_CPDR_9 && Rte_SysCon_Variant_CPDR_3

    boolean rtb_AND1_le;

#endif

#if !Rte_SysCon_Variant_CPDR_9 && Rte_SysCon_Variant_CPDR_3

    boolean rtb_UnitDelay_oz;

#endif

#if Rte_SysCon_Variant_CPDR_3

    boolean rtb_NOT4_g;

#endif

#if Rte_SysCon_Variant_CPDR_11 || Rte_SysCon_Variant_CPDR_3 || Rte_SysCon_Variant_CPDR_4 || Rte_SysCon_Variant_CPDR_5 || Rte_SysCon_Variant_CPDR_6 || Rte_SysCon_Variant_CPDR_7 || Rte_SysCon_Variant_CPDR_8

    boolean rtb_TmpSignalConversionAtVeDFIR_b_IsDiag;

#endif

#if Rte_SysCon_Variant_CPDR_3

    float32 rtb_TmpSignalConversionAtVePMIR_T_LTActv;

#endif

#if Rte_SysCon_Variant_CPDR_3

    boolean rtb_AND3_pq;

#endif

#if Rte_SysCon_Variant_CPDR_3 || Rte_SysCon_Variant_CPDR_7

    float32 rtb_TmpSignalConversionAtVePMIR_n_LTActv;

#endif

#if Rte_SysCon_Variant_CPDR_7

    boolean rtb_RelationalOperator3_c;

#endif

#if Rte_SysCon_Variant_CPDR_7

    boolean rtb_Logical1_m4;

#endif

#if Rte_SysCon_Variant_CPDR_7

    boolean rtb_NOT4_gk;

#endif

#if Rte_SysCon_Variant_CPDR_7

    float32 rtb_SumSub_j;

#endif

#if Rte_SysCon_Variant_CPDR_7 || Rte_SysCon_Variant_CPDR_8

    boolean rtb_AND3_m4;

#endif

#if Rte_SysCon_Variant_CPDR_8

    float32 rtb_TmpSignalConversionAtVePMIR_n_TransA;

#endif

#if Rte_SysCon_Variant_CPDR_8

    boolean rtb_RelationalOperator3_g;

#endif

#if Rte_SysCon_Variant_CPDR_4 || Rte_SysCon_Variant_CPDR_5 || Rte_SysCon_Variant_CPDR_6 || Rte_SysCon_Variant_CPDR_8

    boolean rtb_Logical1_h;

#endif

#if Rte_SysCon_Variant_CPDR_8

    boolean rtb_NOT4_h;

#endif

#if Rte_SysCon_Variant_CPDR_4 || Rte_SysCon_Variant_CPDR_8

    float32 rtb_TmpSignalConversionAtVeTAPR_n_TransA;

#endif

#if Rte_SysCon_Variant_CPDR_8

    float32 rtb_SumSub_i;

#endif

#if Rte_SysCon_Variant_CPDR_4 || Rte_SysCon_Variant_CPDR_5 || Rte_SysCon_Variant_CPDR_6 || Rte_SysCon_Variant_CPDR_8

    boolean rtb_AND3_k;

#endif

#if Rte_SysCon_Variant_CPDR_4

    float32 rtb_TmpSignalConversionAtVePMIR_T_HTAuxP;

#endif

#if Rte_SysCon_Variant_CPDR_4 || Rte_SysCon_Variant_CPDR_5

    float32 rtb_TmpSignalConversionAtVePMPR_n_HT_Aux;

#endif

#if Rte_SysCon_Variant_CPDR_4

    boolean rtb_AND3_e;

#endif

#if Rte_SysCon_Variant_CPDR_4 || Rte_SysCon_Variant_CPDR_5

    float32 rtb_TmpSignalConversionAtVePMIR_n_HTAuxP;

#endif

#if Rte_SysCon_Variant_CPDR_5 || Rte_SysCon_Variant_CPDR_6

    float32 rtb_TmpSignalConversionAtVePMPR_n_LT_Psv;

#endif

#if Rte_SysCon_Variant_CPDR_5

    boolean rtb_NOT4_p;

#endif

#if Rte_SysCon_Variant_CPDR_11 || Rte_SysCon_Variant_CPDR_5 || Rte_SysCon_Variant_CPDR_6

    boolean rtb_Logical1_cy;

#endif

#if Rte_SysCon_Variant_CPDR_5

    float32 rtb_TmpSignalConversionAtVePMIR_T_LTPsvP;

#endif

#if Rte_SysCon_Variant_CPDR_5

    boolean rtb_AND3;

#endif

#if Rte_SysCon_Variant_CPDR_5 || Rte_SysCon_Variant_CPDR_6

    float32 rtb_TmpSignalConversionAtVePMIR_n_LTPsvP;

#endif

#if Rte_SysCon_Variant_CPDR_6

    float32 rtb_TmpSignalConversionAtVePMPR_n_LT_P_p;

#endif

#if Rte_SysCon_Variant_CPDR_6

    boolean rtb_NOT4_n;

#endif

#if Rte_SysCon_Variant_CPDR_5 || Rte_SysCon_Variant_CPDR_6

    boolean rtb_Logical1_po;

#endif

#if Rte_SysCon_Variant_CPDR_6

    float32 rtb_TmpSignalConversionAtVePMIR_T_LTPs_l;

#endif

#if Rte_SysCon_Variant_CPDR_6

    boolean rtb_AND3_n;

#endif

#if Rte_SysCon_Variant_CPDR_6

    boolean rtb_RelationalOperator3_jf;

#endif

#if Rte_SysCon_Variant_CPDR_6

    float32 rtb_TmpSignalConversionAtVePMIR_n_LTPs_i;

#endif

#if Rte_SysCon_Variant_CPDR_11

    float32 rtb_TmpSignalConversionAtVeTAPR_n_KMHEVD;

#endif

#if Rte_SysCon_Variant_CPDR_4

    boolean rtb_AND_gr;

#endif

#if Rte_SysCon_Variant_CPDR_5

    boolean rtb_AND_ci;

#endif

#if Rte_SysCon_Variant_CPDR_11

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_h;

#endif

#if Rte_SysCon_Variant_CPDR_11

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Status;

#endif

#if Rte_SysCon_Variant_CPDR_11

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_d;

#endif

#if !Rte_SysCon_Variant_CPDR_9 && Rte_SysCon_Variant_CPDR_3

    TeBPCR_e_LIN_BusOff rtb_TmpSignalConversionAtBPCM_LIN_BusO_f;

#endif

#if !Rte_SysCon_Variant_CPDR_9 && Rte_SysCon_Variant_CPDR_3

    TeBPCR_e_LOC_BCP rtb_TmpSignalConversionAtBPCM_LOC_BCP_AD;

#endif

#if Rte_SysCon_Variant_CPDR_3 || Rte_SysCon_Variant_CPDR_4 || Rte_SysCon_Variant_CPDR_5 || Rte_SysCon_Variant_CPDR_6 || Rte_SysCon_Variant_CPDR_7 || Rte_SysCon_Variant_CPDR_8

    TePMTR_e_ThrmlDevisEnbl rtb_TmpSignalConversionAtVePMTR_e_ThrmlD;

#endif

#if Rte_SysCon_Variant_CPDR_7

    TeTAPR_e_TransAuxPmp_FalseTrueSNA rtb_TmpSignalConversionAtVePMIR_e_TransA;

#endif

#if Rte_SysCon_Variant_CPDR_8

    TeTAPR_e_TransAuxPmp_FalseTrueSNA rtb_TmpSignalConversionAtVePMIR_e_Tran_f;

#endif

#if Rte_SysCon_Variant_CPDR_6

    TePMPR_e_FTSNA rtb_TmpSignalConversionAtVePMIR_e_LTPsvP;

#endif

#if Rte_SysCon_Variant_CPDR_3 || Rte_SysCon_Variant_CPDR_4 || Rte_SysCon_Variant_CPDR_5 || Rte_SysCon_Variant_CPDR_6

    sint32 VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp;

#endif

#if Rte_SysCon_Variant_CPDR_3 || Rte_SysCon_Variant_CPDR_4 || Rte_SysCon_Variant_CPDR_5 || Rte_SysCon_Variant_CPDR_6

    uint32 VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_0;

#endif

#if Rte_SysCon_Variant_CPDR_3 || Rte_SysCon_Variant_CPDR_4 || Rte_SysCon_Variant_CPDR_5 || Rte_SysCon_Variant_CPDR_6

    uint32 rtb_RelationalOperator3_m_tmp;

#endif

#if Rte_SysCon_Variant_CPDR_3 || Rte_SysCon_Variant_CPDR_4 || Rte_SysCon_Variant_CPDR_5 || Rte_SysCon_Variant_CPDR_6

    uint32 VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_1;

#endif

#if Rte_SysCon_Variant_CPDR_5 || Rte_SysCon_Variant_CPDR_6

    uint32 rtb_RelationalOperator3_p_tmp;

#endif

#if Rte_SysCon_Variant_CPDR_5 || Rte_SysCon_Variant_CPDR_6

    sint32 rtb_Logical6_c_tmp;

#endif

#if Rte_SysCon_Variant_CPDR_5 || Rte_SysCon_Variant_CPDR_6

    uint32 rtb_Logical6_c_tmp_0;

#endif

#if Rte_SysCon_Variant_CPDR_5

    sint32 rtb_Logical6_c_tmp_1;

#endif

#if Rte_SysCon_Variant_CPDR_5

    uint32 rtb_Logical6_c_tmp_2;

#endif

#if Rte_SysCon_Variant_CPDR_3 || Rte_SysCon_Variant_CPDR_4 || Rte_SysCon_Variant_CPDR_5 || Rte_SysCon_Variant_CPDR_6

    sint32 VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_2;

#endif

#if Rte_SysCon_Variant_CPDR_3 || Rte_SysCon_Variant_CPDR_5 || Rte_SysCon_Variant_CPDR_6

    sint32 VeCPDR_b_BCP_CommonEnblConds_tmp;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/CPDR_MedTEH'
     */
    /* DataStoreWrite: '<S2>/DSW_StatusByte_LIN1_BusOff1' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CooPumBOvrSpd'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CooPumBOvrSpd_Value
        (&CPDR_ac_DW.StatusByte_MtrElect_CooPumBOvrSpd);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_PwrElecPmpPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_PwrElecPmpPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_PwrElecPmpPerf_Value
        (&CPDR_ac_DW.StatusByte_PwrElecPmpPerf);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_MtrElect_CoolPumAOvrSpd' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CoolPumAOvrSpd'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CoolPumAOvrSpd_Value
        (&CPDR_ac_DW.StatusByte_MtrElect_CoolPumAOvrSpd);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LostCommMtrElectCoolPmpA' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommMtrElectCoolPmpA'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommMtrElectCoolPmpA_Value
        (&CPDR_ac_DW.StatusByte_LostCommMtrElectCoolPmpA);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_MtrElect_CoolPumBCtrlPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CoolPumBCtrlPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CoolPumBCtrlPerf_Value
        (&CPDR_ac_DW.StatusByte_MtrElect_CoolPumBCtrlPerf);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LostCommMtrElectCoolPmpB' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommMtrElectCoolPmpB'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommMtrElectCoolPmpB_Value
        (&CPDR_ac_DW.StatusByte_LostCommMtrElectCoolPmpB);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_CoolPmpACtrlCktPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolPmpACtrlCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolPmpACtrlCktPerf_Value
        (&CPDR_ac_DW.StatusByte_CoolPmpACtrlCktPerf);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LostCommCoolPmpA' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommCoolPmpA'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommCoolPmpA_Value
        (&CPDR_ac_DW.StatusByte_LostCommCoolPmpA);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LIN2_BusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LIN2_BusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LIN2_BusOff_Value
        (&CPDR_ac_DW.StatusByte_LIN2_BusOff);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_PwrtrnOilPmp2Perf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_PwrtrnOilPmp2Perf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_PwrtrnOilPmp2Perf_Value
        (&CPDR_ac_DW.StatusByte_PwrtrnOilPmp2Perf);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_PwrtrnOilPmp2OvrSpd' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_PwrtrnOilPmp2OvrSpd'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_PwrtrnOilPmp2OvrSpd_Value
        (&CPDR_ac_DW.StatusByte_PwrtrnOilPmp2OvrSpd);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LostCommPwrtrn_OilPmp2' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommPwrtrn_OilPmp2'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommPwrtrn_OilPmp2_Value
        (&CPDR_ac_DW.StatusByte_LostCommPwrtrn_OilPmp2);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LIN3_BusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LIN3_BusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LIN3_BusOff_Value
        (&CPDR_ac_DW.StatusByte_LIN3_BusOff);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_PwrtrnOilPmp1Perf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_PwrtrnOilPmp1Perf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_PwrtrnOilPmp1Perf_Value
        (&CPDR_ac_DW.StatusByte_PwrtrnOilPmp1Perf);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_PwrtrnOilPmp1OvrSpd' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_PwrtrnOilPmp1OvrSpd'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_PwrtrnOilPmp1OvrSpd_Value
        (&CPDR_ac_DW.StatusByte_PwrtrnOilPmp1OvrSpd);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LostCommPwrtrn_OilPmp1' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommPwrtrn_OilPmp1'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommPwrtrn_OilPmp1_Value
        (&CPDR_ac_DW.StatusByte_LostCommPwrtrn_OilPmp1);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_BattCoolPmpOveSpd' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattCoolPmpOveSpd'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattCoolPmpOveSpd_Value
        (&CPDR_ac_DW.StatusByte_BattCoolPmpOveSpd);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_BattCoolPmpPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattCoolPmpPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattCoolPmpPerf_Value
        (&CPDR_ac_DW.StatusByte_BattCoolPmpPerf);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LosCommBECM_A' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LosCommBECM_A'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LosCommBECM_A_Value
        (&CPDR_ac_DW.StatusByte_LosCommBECM_A);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_InvData_BECM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_BECM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_BECM_Value
        (&CPDR_ac_DW.StatusByte_InvData_BECM);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_CommBusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CommBusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CommBusOff_Value
        (&CPDR_ac_DW.StatusByte_CommBusOff);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LosCommBECM_A_CANC11' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LosCommBECM_A_CANC11'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LosCommBECM_A_CANC11_Value
        (&CPDR_ac_DW.StatusByte_LosCommBECM_A_CANC11);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_InvData_BECM_CANC11' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_BECM_CANC11'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_BECM_CANC11_Value
        (&CPDR_ac_DW.StatusByte_InvData_BECM_CANC11);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_CommBus_B_Off' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CommBus_B_Off'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CommBus_B_Off_Value
        (&CPDR_ac_DW.StatusByte_CommBus_B_Off);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LostCommHB_CoolPmp' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommHB_CoolPmp'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommHB_CoolPmp_Value
        (&CPDR_ac_DW.StatusByte_LostCommHB_CoolPmp);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_ThrmlRlyCtrlCkt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_ThrmlRlyCtrlCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_ThrmlRlyCtrlCkt_Value
        (&CPDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LIN1_BusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LIN1_BusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LIN1_BusOff_Value
        (&CPDR_ac_DW.StatusByte_LIN1_BusOff);

    /* SignalConversion generated from: '<S2>/VePMTR_e_ThrmlDevEnbl' */
#if Rte_SysCon_Variant_CPDR_3 || Rte_SysCon_Variant_CPDR_4 || Rte_SysCon_Variant_CPDR_5 || Rte_SysCon_Variant_CPDR_6 || Rte_SysCon_Variant_CPDR_7 || Rte_SysCon_Variant_CPDR_8

    /* SignalConversion generated from: '<S2>/VePMTR_e_ThrmlDevEnbl' incorporates:
     *  Inport: '<Root>/VePMTR_e_ThrmlDevEnbl'
     */
    (void)Rte_Read_VePMTR_e_ThrmlDevEnbl_Value
        (&rtb_TmpSignalConversionAtVePMTR_e_ThrmlD);

#endif

    /* End of SignalConversion generated from: '<S2>/VePMTR_e_ThrmlDevEnbl' */

    /* SignalConversion generated from: '<S2>/VeTMIR_b_MainRly_CmdReq' */
#if Rte_SysCon_Variant_CPDR_3 || Rte_SysCon_Variant_CPDR_4 || Rte_SysCon_Variant_CPDR_5 || Rte_SysCon_Variant_CPDR_6

    /* SignalConversion generated from: '<S2>/VeTMIR_b_MainRly_CmdReq' incorporates:
     *  Inport: '<Root>/VeTMIR_b_MainRly_CmdReq'
     */
    (void)Rte_Read_VeTMIR_b_MainRly_CmdReq_Value
        (&rtb_TmpSignalConversionAtVeTMIR_b_MainRl);

#endif

    /* End of SignalConversion generated from: '<S2>/VeTMIR_b_MainRly_CmdReq' */

    /* SignalConversion generated from: '<S2>/VePMPR_n_LT_ActvPmpCmd' */
#if Rte_SysCon_Variant_CPDR_3

    /* SignalConversion generated from: '<S2>/VePMPR_n_LT_ActvPmpCmd' incorporates:
     *  Inport: '<Root>/VePMPR_n_LT_ActvPmpCmd'
     */
    (void)Rte_Read_VePMPR_n_LT_ActvPmpCmd_Value
        (&rtb_TmpSignalConversionAtVePMPR_n_LT_Act);

#endif

    /* End of SignalConversion generated from: '<S2>/VePMPR_n_LT_ActvPmpCmd' */

    /* SignalConversion generated from: '<S2>/VeDFIR_b_IsDiagGlobalConditionsValid' incorporates:
     *  SignalConversion generated from: '<S2>/BF1_SysVolt_AD_Read'
     *  SignalConversion generated from: '<S2>/DsblDiagFailSafe_AD_Read'
     *  SignalConversion generated from: '<S2>/PostCodeClrDiagDsbl_AD_Read'
     */
#if Rte_SysCon_Variant_CPDR_11 || Rte_SysCon_Variant_CPDR_3 || Rte_SysCon_Variant_CPDR_4 || Rte_SysCon_Variant_CPDR_5 || Rte_SysCon_Variant_CPDR_6 || Rte_SysCon_Variant_CPDR_7 || Rte_SysCon_Variant_CPDR_8

    /* SignalConversion generated from: '<S2>/VeDFIR_b_IsDiagGlobalConditionsValid' incorporates:
     *  Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid'
     */
    (void)Rte_Read_VeDFIR_b_IsDiagGlobalConditionsValid_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_IsDiag);

    /* SignalConversion generated from: '<S2>/DsblDiagFailSafe_AD_Read' incorporates:
     *  Merge: '<Root>/DsblDiagFailSafe_AD_IRV_Merge'
     */
    rtb_TmpSignalConversionAtDsblDiagFailSaf =
        Rte_IrvRead_CPDR_MedTEH_DsblDiagFailSafe_AD_write_IRV();

    /* SignalConversion generated from: '<S2>/PostCodeClrDiagDsbl_AD_Read' incorporates:
     *  Merge: '<Root>/PostCodeClrDiagDsbl_AD_IRV_Merge'
     */
    rtb_TmpSignalConversionAtPostCodeClrDiag =
        Rte_IrvRead_CPDR_MedTEH_PostCodeClrDiagDsbl_AD_write_IRV();

    /* SignalConversion generated from: '<S2>/BF1_SysVolt_AD_Read' incorporates:
     *  Merge: '<Root>/HB_SysVolt_AD_IRV_Merge'
     */
    rtb_TmpSignalConversionAtBF1_SysVolt_AD_ =
        Rte_IrvRead_CPDR_MedTEH_BF1_SysVolt_AD_IRV();

#endif

    /* End of SignalConversion generated from: '<S2>/VeDFIR_b_IsDiagGlobalConditionsValid' */

    /* SignalConversion generated from: '<S2>/BPCM_LIN_BusOff_AD_Read' incorporates:
     *  SignalConversion generated from: '<S2>/BPCM_LIN_BusOff_FA_AD_Read'
     *  SignalConversion generated from: '<S2>/BPCM_LIN_BusOff_SgnlRcvd_AD_Read'
     *  SignalConversion generated from: '<S2>/BPCM_LOC_BCP_AD_Read'
     *  SignalConversion generated from: '<S2>/BPCM_LOC_BCP_FA_AD_Read'
     *  SignalConversion generated from: '<S2>/BPCM_LOC_BCP_SgnlRcvd_AD_Read'
     */
#if !Rte_SysCon_Variant_CPDR_9 && Rte_SysCon_Variant_CPDR_3

    /* SignalConversion generated from: '<S2>/BPCM_LIN_BusOff_AD_Read' incorporates:
     *  Merge: '<Root>/BPCM_LIN_BusOff_AD_IRV_Merge'
     */
    rtb_TmpSignalConversionAtBPCM_LIN_BusO_f =
        Rte_IrvRead_CPDR_MedTEH_BPCM_LIN_BusOff_AD_write_IRV();

    /* SignalConversion generated from: '<S2>/BPCM_LIN_BusOff_FA_AD_Read' incorporates:
     *  Merge: '<Root>/BPCM_LIN_BusOff_FA_AD_IRV_Merge'
     */
    rtb_TmpSignalConversionAtBPCM_LIN_BusOff =
        Rte_IrvRead_CPDR_MedTEH_BPCM_LIN_BusOff_FA_AD_write_IRV();

    /* SignalConversion generated from: '<S2>/BPCM_LIN_BusOff_SgnlRcvd_AD_Read' incorporates:
     *  Merge: '<Root>/BPCM_LIN_BusOff_SgnlRcvd_AD_IRV_Merge'
     */
    rtb_TmpSignalConversionAtBPCM_LIN_BusO_i =
        Rte_IrvRead_CPDR_MedTEH_BPCM_LIN_BusOff_SgnlRcvd_AD_write_IRV();

    /* SignalConversion generated from: '<S2>/BPCM_LOC_BCP_AD_Read' incorporates:
     *  Merge: '<Root>/BPCM_LOC_BCP_AD_IRV_Merge'
     */
    rtb_TmpSignalConversionAtBPCM_LOC_BCP_AD =
        Rte_IrvRead_CPDR_MedTEH_BPCM_LOC_BCP_AD_write_IRV();

    /* SignalConversion generated from: '<S2>/BPCM_LOC_BCP_FA_AD_Read' incorporates:
     *  Merge: '<Root>/BPCM_LOC_BCP_FA_AD_IRV_Merge'
     */
    rtb_TmpSignalConversionAtBPCM_LOC_BCP_FA =
        Rte_IrvRead_CPDR_MedTEH_BPCM_LOC_BCP_FA_AD_write_IRV();

    /* SignalConversion generated from: '<S2>/BPCM_LOC_BCP_SgnlRcvd_AD_Read' incorporates:
     *  Merge: '<Root>/BPCM_LOC_BCP_SgnlRcvd_AD_IRV_Merge'
     */
    rtb_TmpSignalConversionAtBPCM_LOC_BCP_Sg =
        Rte_IrvRead_CPDR_MedTEH_BPCM_LOC_BCP_SgnlRcvd_AD_write_IRV();

#endif

    /* End of SignalConversion generated from: '<S2>/BPCM_LIN_BusOff_AD_Read' */

    /* SignalConversion generated from: '<S2>/VePMIR_T_LTActvPumpTemp' incorporates:
     *  SignalConversion generated from: '<S2>/LTAP_MaxOpRPM_AD_Read'
     *  SignalConversion generated from: '<S2>/VePMIR_n_LTActvPumpRPMAct'
     */
#if Rte_SysCon_Variant_CPDR_3

    /* SignalConversion generated from: '<S2>/VePMIR_T_LTActvPumpTemp' incorporates:
     *  Inport: '<Root>/VePMIR_T_LTActvPumpTemp'
     */
    (void)Rte_Read_VePMIR_T_LTActvPumpTemp_Value
        (&rtb_TmpSignalConversionAtVePMIR_T_LTActv);

    /* SignalConversion generated from: '<S2>/VePMIR_n_LTActvPumpRPMAct' incorporates:
     *  Inport: '<Root>/VePMIR_n_LTActvPumpRPMAct'
     */
    (void)Rte_Read_VePMIR_n_LTActvPumpRPMAct_Value
        (&rtb_TmpSignalConversionAtVePMIR_n_LTActv);

    /* SignalConversion generated from: '<S2>/LTAP_MaxOpRPM_AD_Read' incorporates:
     *  Merge: '<Root>/LTAP_MaxOpRPM_AD_IRV_Merge'
     */
    rtb_TmpSignalConversionAtLTAP_MaxOpRPM_A =
        Rte_IrvRead_CPDR_MedTEH_LTAP_MaxOpRPM_AD_write_IRV();

#endif

    /* End of SignalConversion generated from: '<S2>/VePMIR_T_LTActvPumpTemp' */

    /* SignalConversion generated from: '<S2>/PropSysActv_AD_Read' */
#if Rte_SysCon_Variant_CPDR_11 || Rte_SysCon_Variant_CPDR_3 || Rte_SysCon_Variant_CPDR_4 || Rte_SysCon_Variant_CPDR_5 || Rte_SysCon_Variant_CPDR_6 || Rte_SysCon_Variant_CPDR_7 || Rte_SysCon_Variant_CPDR_8

    /* SignalConversion generated from: '<S2>/PropSysActv_AD_Read' incorporates:
     *  Merge: '<Root>/PropSysActv_AD_IRV_Merge'
     */
    rtb_TmpSignalConversionAtPropSysActv_AD_ =
        Rte_IrvRead_CPDR_MedTEH_PropSysActv_AD_write_IRV();

#endif

    /* End of SignalConversion generated from: '<S2>/PropSysActv_AD_Read' */

    /* Outputs for Atomic SubSystem: '<S171>/BCP_Diagnostics' */
#if Rte_SysCon_Variant_CPDR_3

    /* Outputs for Atomic SubSystem: '<S178>/BCP_Diagnostics_FUNC' */
    /* Inport: '<Root>/VePMIR_b_LTActvPumpDryRun_FA' */
    (void)Rte_Read_VePMIR_b_LTActvPumpDryRun_FA_Value(&tmpRead_9);

    /* S-Function (sfix_bitop): '<S195>/Bitwise Operator2' incorporates:
     *  Logic: '<S188>/AND1'
     *  Logic: '<S189>/AND1'
     *  Logic: '<S189>/AND11'
     *  Logic: '<S189>/AND2'
     *  Logic: '<S191>/AND28'
     *  Logic: '<S192>/AND28'
     *  Logic: '<S195>/Logical Operator'
     *  Logic: '<S196>/Logical Operator'
     *  Logic: '<S198>/AND1'
     *  Logic: '<S198>/AND14'
     *  Logic: '<S198>/AND2'
     *  Logic: '<S198>/AND3'
     *  Logic: '<S202>/Logical Operator'
     *  Logic: '<S203>/Logical Operator'
     *  Logic: '<S204>/Logical Operator'
     *  RelationalOperator: '<S191>/Comparison1'
     *  RelationalOperator: '<S191>/Comparison2'
     *  RelationalOperator: '<S191>/Comparison3'
     *  RelationalOperator: '<S192>/Comparison1'
     *  RelationalOperator: '<S192>/Comparison2'
     *  RelationalOperator: '<S192>/Comparison3'
     *  RelationalOperator: '<S195>/Relational Operator1'
     *  RelationalOperator: '<S195>/Relational Operator2'
     *  RelationalOperator: '<S196>/Relational Operator1'
     *  RelationalOperator: '<S196>/Relational Operator2'
     *  RelationalOperator: '<S202>/Relational Operator1'
     *  RelationalOperator: '<S202>/Relational Operator2'
     *  RelationalOperator: '<S203>/Relational Operator1'
     *  RelationalOperator: '<S203>/Relational Operator2'
     *  RelationalOperator: '<S204>/Relational Operator1'
     *  RelationalOperator: '<S204>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S195>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S196>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S196>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S202>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S202>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S203>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S203>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S204>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S204>/Bitwise Operator2'
     */
#if Rte_SysCon_Variant_CPDR_9

    /* UnitDelay: '<S306>/Unit Delay1' incorporates:
     *  Constant: '<S195>/Constant1'
     *  Constant: '<S195>/Constant2'
     *  Constant: '<S196>/Constant1'
     *  Constant: '<S196>/Constant2'
     *  DataStoreRead: '<S195>/StatusByte_LIN1_BusOff'
     *  DataStoreRead: '<S196>/StatusByte_LostCommHB_CoolPmp'
     */
    rtb_UnitDelay1_e = ((((((sint32)CPDR_ac_DW.StatusByte_LIN1_BusOff) & 1) <= 0)
                         || ((((uint32)CPDR_ac_DW.StatusByte_LIN1_BusOff) & 64U)
                          != 0U)) && (((((sint32)
                            CPDR_ac_DW.StatusByte_LostCommHB_CoolPmp) & 1) <= 0)
                         || ((((uint32)CPDR_ac_DW.StatusByte_LostCommHB_CoolPmp)
                           & 64U) != 0U)));

#else

    /* Logic: '<S188>/AND1' incorporates:
     *  Constant: '<S193>/Constant'
     *  Constant: '<S194>/Constant'
     *  Logic: '<S191>/AND28'
     *  Logic: '<S192>/AND28'
     *  RelationalOperator: '<S191>/Comparison1'
     *  RelationalOperator: '<S191>/Comparison2'
     *  RelationalOperator: '<S191>/Comparison3'
     *  RelationalOperator: '<S192>/Comparison1'
     *  RelationalOperator: '<S192>/Comparison2'
     *  RelationalOperator: '<S192>/Comparison3'
     *  SignalConversion generated from: '<S2>/BPCM_LIN_BusOff_AD_Read'
     *  SignalConversion generated from: '<S2>/BPCM_LOC_BCP_AD_Read'
     */
    rtb_AND1_le = ((((((uint32)rtb_TmpSignalConversionAtBPCM_LIN_BusO_f) ==
                      CeBPCR_e_LIN_BusOff_Disabled) &&
                     (!rtb_TmpSignalConversionAtBPCM_LIN_BusOff)) &&
                    rtb_TmpSignalConversionAtBPCM_LIN_BusO_i) && (((((uint32)
                       rtb_TmpSignalConversionAtBPCM_LOC_BCP_AD) ==
                      CeBPCR_e_LOC_BCP_False) &&
                     (!rtb_TmpSignalConversionAtBPCM_LOC_BCP_FA)) &&
                    rtb_TmpSignalConversionAtBPCM_LOC_BCP_Sg));

    /* UnitDelay: '<S225>/Unit Delay' incorporates:
     *  Constant: '<S202>/Constant1'
     *  Constant: '<S202>/Constant2'
     *  Constant: '<S203>/Constant1'
     *  Constant: '<S203>/Constant2'
     *  Constant: '<S204>/Constant1'
     *  Constant: '<S204>/Constant2'
     *  DataStoreRead: '<S202>/StatusByte_CommBusOff'
     *  DataStoreRead: '<S203>/StatusByte_InvData_BECM'
     *  DataStoreRead: '<S204>/StatusByte_LosCommBECM_A'
     *  Logic: '<S198>/AND1'
     *  Logic: '<S198>/AND14'
     *  Logic: '<S198>/AND2'
     *  Logic: '<S198>/AND3'
     *  Logic: '<S202>/Logical Operator'
     *  Logic: '<S203>/Logical Operator'
     *  Logic: '<S204>/Logical Operator'
     *  RelationalOperator: '<S202>/Relational Operator1'
     *  RelationalOperator: '<S202>/Relational Operator2'
     *  RelationalOperator: '<S203>/Relational Operator1'
     *  RelationalOperator: '<S203>/Relational Operator2'
     *  RelationalOperator: '<S204>/Relational Operator1'
     *  RelationalOperator: '<S204>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S202>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S202>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S203>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S203>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S204>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S204>/Bitwise Operator2'
     */
    rtb_UnitDelay_oz = (((((((sint32)CPDR_ac_DW.StatusByte_CommBusOff) & 1) <= 0)
                          || ((((uint32)CPDR_ac_DW.StatusByte_CommBusOff) & 64U)
                           != 0U)) && (((((sint32)
        CPDR_ac_DW.StatusByte_InvData_BECM) & 1) <= 0) || ((((uint32)
        CPDR_ac_DW.StatusByte_InvData_BECM) & 64U) != 0U))) && (((((sint32)
                            CPDR_ac_DW.StatusByte_LosCommBECM_A) & 1) <= 0) ||
                         ((((uint32)CPDR_ac_DW.StatusByte_LosCommBECM_A) & 64U)
                          != 0U)));

#endif

    /* End of S-Function (sfix_bitop): '<S195>/Bitwise Operator2' */

    /* S-Function (sfix_bitop): '<S199>/Bitwise Operator2' incorporates:
     *  Logic: '<S190>/AND14'
     *  Logic: '<S197>/AND1'
     *  Logic: '<S197>/AND14'
     *  Logic: '<S197>/AND2'
     *  Logic: '<S197>/AND3'
     *  Logic: '<S199>/Logical Operator'
     *  Logic: '<S200>/Logical Operator'
     *  Logic: '<S201>/Logical Operator'
     *  RelationalOperator: '<S199>/Relational Operator1'
     *  RelationalOperator: '<S199>/Relational Operator2'
     *  RelationalOperator: '<S200>/Relational Operator1'
     *  RelationalOperator: '<S200>/Relational Operator2'
     *  RelationalOperator: '<S201>/Relational Operator1'
     *  RelationalOperator: '<S201>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S199>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S200>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S200>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S201>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S201>/Bitwise Operator2'
     *  SignalConversion generated from: '<S190>/Variant Source1'
     */
#if !Rte_SysCon_Variant_CPDR_9 && Rte_SysCon_Variant_CPDR_10

    /* Logic: '<S197>/AND14' incorporates:
     *  Constant: '<S199>/Constant1'
     *  Constant: '<S199>/Constant2'
     *  Constant: '<S200>/Constant1'
     *  Constant: '<S200>/Constant2'
     *  Constant: '<S201>/Constant1'
     *  Constant: '<S201>/Constant2'
     *  DataStoreRead: '<S199>/StatusByte_CommBus_B_Off'
     *  DataStoreRead: '<S200>/StatusByte_InvData_BECM_CANC11'
     *  DataStoreRead: '<S201>/StatusByte_LosCommBECM_A_CANC11'
     */
    rtb_TmpSignalConversionAtBPCM_LIN_BusOff = (((((((sint32)
        CPDR_ac_DW.StatusByte_CommBus_B_Off) & 1) <= 0) || ((((uint32)
        CPDR_ac_DW.StatusByte_CommBus_B_Off) & 64U) != 0U)) && (((((sint32)
        CPDR_ac_DW.StatusByte_InvData_BECM_CANC11) & 1) <= 0) || ((((uint32)
        CPDR_ac_DW.StatusByte_InvData_BECM_CANC11) & 64U) != 0U))) &&
        (((((sint32)CPDR_ac_DW.StatusByte_LosCommBECM_A_CANC11) & 1) <= 0) ||
         ((((uint32)CPDR_ac_DW.StatusByte_LosCommBECM_A_CANC11) & 64U) != 0U)));

    /* Logic: '<S187>/NOT4' */
    rtb_NOT4_g = (rtb_TmpSignalConversionAtBPCM_LIN_BusOff || rtb_UnitDelay_oz);

#elif !Rte_SysCon_Variant_CPDR_10 && !Rte_SysCon_Variant_CPDR_9

    /* Logic: '<S187>/NOT4' incorporates:
     *  SignalConversion generated from: '<S190>/Variant Source1'
     */
    rtb_NOT4_g = rtb_UnitDelay_oz;

#endif

    /* End of S-Function (sfix_bitop): '<S199>/Bitwise Operator2' */

    /* Logic: '<S180>/AND28' */
#if !Rte_SysCon_Variant_CPDR_9

    /* UnitDelay: '<S306>/Unit Delay1' */
    rtb_UnitDelay1_e = (rtb_AND1_le && rtb_NOT4_g);

#endif

    /* End of Logic: '<S180>/AND28' */

    /* S-Function (sfix_bitop): '<S212>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S212>/StatusByte_ThrmlRlyCtrlCkt'
     *  S-Function (sfix_bitop): '<S247>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S349>/Bitwise Operator2'
     */
    VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp = ((sint32)
        CPDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 1;

    /* S-Function (sfix_bitop): '<S212>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S212>/StatusByte_ThrmlRlyCtrlCkt'
     *  S-Function (sfix_bitop): '<S247>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S349>/Bitwise Operator1'
     */
    VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_0 = ((uint32)
        CPDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 64U;

    /* S-Function (sfix_bitop): '<S211>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S211>/StatusByte_BattCoolPmpPerf'
     *  S-Function (sfix_bitop): '<S305>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S343>/Bitwise Operator1'
     */
    VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_1 = ((uint32)
        CPDR_ac_DW.StatusByte_BattCoolPmpPerf) & 64U;

    /* S-Function (sfix_bitop): '<S211>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S211>/StatusByte_BattCoolPmpPerf'
     *  S-Function (sfix_bitop): '<S343>/Bitwise Operator2'
     */
    VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_2 = ((sint32)
        CPDR_ac_DW.StatusByte_BattCoolPmpPerf) & 1;

    /* Logic: '<S209>/AND3' incorporates:
     *  Constant: '<S210>/Constant'
     *  Constant: '<S211>/Constant1'
     *  Constant: '<S211>/Constant2'
     *  Constant: '<S212>/Constant1'
     *  Constant: '<S212>/Constant2'
     *  Constant: '<S213>/Calib'
     *  Constant: '<S214>/Calib'
     *  Constant: '<S215>/Calib'
     *  Constant: '<S216>/Calib'
     *  Constant: '<S217>/Calib'
     *  Constant: '<S218>/Calib'
     *  Constant: '<S219>/Calib'
     *  Logic: '<S209>/AND1'
     *  Logic: '<S209>/AND10'
     *  Logic: '<S209>/AND13'
     *  Logic: '<S209>/AND14'
     *  Logic: '<S209>/AND2'
     *  Logic: '<S209>/AND24'
     *  Logic: '<S209>/AND26'
     *  Logic: '<S209>/AND6'
     *  Logic: '<S209>/AND9'
     *  Logic: '<S211>/Logical Operator'
     *  Logic: '<S212>/Logical Operator'
     *  RelationalOperator: '<S206>/Comparison1'
     *  RelationalOperator: '<S206>/Comparison12'
     *  RelationalOperator: '<S211>/Relational Operator1'
     *  RelationalOperator: '<S211>/Relational Operator2'
     *  RelationalOperator: '<S212>/Relational Operator1'
     *  RelationalOperator: '<S212>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S211>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S211>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S212>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S212>/Bitwise Operator2'
     */
    VeCPDR_b_LTAP_DryRun_ChkEnbl = (((((((((((uint32)
        rtb_TmpSignalConversionAtVePMTR_e_ThrmlD) != CePMTR_e_DISBL_All_Thrml) ||
        (KeCPDR_b_LTAP_DryRun_ThrmlEnbl)) &&
        (rtb_TmpSignalConversionAtVeTMIR_b_MainRl ||
         (KeCPDR_b_LTAP_DryRun_MainRly_OV))) && ((!tmpRead_9) ||
        (KeCPDR_b_LTAP_DryRun_FA_Ovrd))) &&
        ((rtb_TmpSignalConversionAtVePMPR_n_LT_Act >=
          KeCPDR_n_LTAP_DryRun_Detection_RPM) ||
         (KeCPDR_b_LTAP_DryRun_Detection_RPM_Ovrd))) &&
        (((VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp <= 0) ||
          (VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_0 != 0U)) ||
         (KeCPDR_b_LTAP_DryRun_ThrmlRlyCtrlCkt_Ovrd))) &&
        (((VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_2 <= 0) ||
          (VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_1 != 0U)) ||
         (KeCPDR_b_LTAP_DryRun_PumpPerf_Ovrd))) && rtb_UnitDelay1_e) &&
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag);

    /* S-Function (sfix_bitop): '<S224>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S208>/Data Store Read'
     *  S-Function (sfix_bitop): '<S246>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S342>/Bitwise Operator1'
     */
    rtb_RelationalOperator3_m_tmp = ((uint32)
        CPDR_ac_DW.StatusByte_BattCoolPmpOveSpd) & 64U;

    /* RelationalOperator: '<S224>/Relational Operator3' incorporates:
     *  Constant: '<S224>/Constant3'
     *  S-Function (sfix_bitop): '<S224>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtBPCM_LIN_BusO_i = (rtb_RelationalOperator3_m_tmp ==
        0U);

    /* Outputs for Atomic SubSystem: '<S224>/EdgeFalling1' */
    /* Logic: '<S224>/Logical Operator' incorporates:
     *  Logic: '<S226>/OR1'
     */
    rtb_TmpSignalConversionAtBPCM_LOC_BCP_FA =
        !rtb_TmpSignalConversionAtBPCM_LIN_BusO_i;

    /* End of Outputs for SubSystem: '<S224>/EdgeFalling1' */

    /* Logic: '<S224>/Logical1' incorporates:
     *  Constant: '<S222>/Calib'
     *  Constant: '<S223>/Calib'
     *  Constant: '<S224>/Constant1'
     *  DataStoreRead: '<S208>/Data Store Read'
     *  Logic: '<S208>/Logical1'
     *  Logic: '<S224>/Logical Operator'
     *  Logic: '<S224>/Logical10'
     *  Logic: '<S224>/Logical12'
     *  RelationalOperator: '<S224>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S224>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtBPCM_LIN_BusOff = (((VeCPDR_b_LTAP_DryRun_ChkEnbl) ||
        (KeCPDR_b_LTAP_DryRun_ChkEnbl_Ovrd)) &&
        ((!KeCPDR_b_BattCoolPmpOveSpd_LtchEnbl) || (((((uint32)
        CPDR_ac_DW.StatusByte_BattCoolPmpOveSpd) & 1U) == 0U) ||
        rtb_TmpSignalConversionAtBPCM_LOC_BCP_FA)));

    /* Logic: '<S187>/NOT4' */
    rtb_NOT4_g = (rtb_TmpSignalConversionAtDsblDiagFailSaf ||
                  rtb_TmpSignalConversionAtPostCodeClrDiag);

    /* Outputs for Atomic SubSystem: '<S224>/EdgeFalling1' */
    /* Logic: '<S226>/AND' incorporates:
     *  UnitDelay: '<S226>/Unit Delay'
     */
    rtb_TmpSignalConversionAtBPCM_LOC_BCP_FA =
        (rtb_TmpSignalConversionAtBPCM_LOC_BCP_FA &&
         (CPDR_ac_DW.UnitDelay_DSTATE_az));

    /* Update for UnitDelay: '<S226>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_az = rtb_TmpSignalConversionAtBPCM_LIN_BusO_i;

    /* End of Outputs for SubSystem: '<S224>/EdgeFalling1' */

    /* Logic: '<S224>/Logical5' */
    rtb_TmpSignalConversionAtBPCM_LIN_BusO_i = (rtb_NOT4_g ||
        rtb_TmpSignalConversionAtBPCM_LOC_BCP_FA);

    /* Outputs for Atomic SubSystem: '<S225>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S225>/Counter Reset  Enabled ' */
    /* Switch: '<S232>/Switch1' incorporates:
     *  Inport: '<Root>/VePMIR_e_LTActvPumpDryRun'
     *  Logic: '<S225>/Fail Counter Reset'
     *  Switch: '<S233>/Switch1'
     *  UnitDelay: '<S225>/Unit Delay'
     *  UnitDelay: '<S225>/Unit Delay1'
     */
    if ((rtb_TmpSignalConversionAtBPCM_LIN_BusO_i ||
            (CPDR_ac_DW.UnitDelay_DSTATE_fc)) || (CPDR_ac_DW.UnitDelay1_DSTATE_d))
    {
        /* Switch: '<S232>/Switch1' incorporates:
         *  Constant: '<S232>/Constant Value2'
         */
        VeCPDR_Cnt_LTAP_DryRun_FailCnt = 0U;

        /* Switch: '<S233>/Switch1' incorporates:
         *  Constant: '<S233>/Constant Value2'
         */
        VeCPDR_Cnt_LTAP_DryRun_SmpCnt = 0U;
    }
    else
    {
        (void)Rte_Read_VePMIR_e_LTActvPumpDryRun_Value(&tmpRead_8);

        /* Switch: '<S232>/Switch2' incorporates:
         *  Constant: '<S205>/Calib'
         *  Inport: '<Root>/VePMIR_e_LTActvPumpDryRun'
         *  Logic: '<S225>/NOT6'
         *  RelationalOperator: '<S207>/Comparison4'
         */
        if (rtb_TmpSignalConversionAtBPCM_LIN_BusOff && (tmpRead_8 ==
                KeCPDR_e_LTAP_DryRun_Chk))
        {
            /* Switch: '<S232>/Switch1' incorporates:
             *  Constant: '<S232>/Constant Value1'
             *  Sum: '<S232>/Subtraction'
             *  Switch: '<S232>/Switch2'
             *  UnitDelay: '<S232>/Unit Delay'
             */
            VeCPDR_Cnt_LTAP_DryRun_FailCnt = (uint16)(((uint32)
                VeCPDR_Cnt_LTAP_DryRun_FailCnt) + 1U);
        }

        /* End of Switch: '<S232>/Switch2' */

        /* Switch: '<S233>/Switch2' */
        if (rtb_TmpSignalConversionAtBPCM_LIN_BusOff)
        {
            /* Switch: '<S233>/Switch1' incorporates:
             *  Constant: '<S233>/Constant Value1'
             *  Sum: '<S233>/Subtraction'
             *  Switch: '<S233>/Switch2'
             *  UnitDelay: '<S233>/Unit Delay'
             */
            VeCPDR_Cnt_LTAP_DryRun_SmpCnt = (uint16)(((uint32)
                VeCPDR_Cnt_LTAP_DryRun_SmpCnt) + 1U);
        }

        /* End of Switch: '<S233>/Switch2' */
    }

    /* End of Switch: '<S232>/Switch1' */
    /* End of Outputs for SubSystem: '<S225>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S225>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S225>/Greater Than or Equal ' incorporates:
     *  Constant: '<S220>/Calib'
     */
    CPDR_ac_DW.UnitDelay1_DSTATE_d = (((sint32)VeCPDR_Cnt_LTAP_DryRun_FailCnt) >=
        ((sint32)KeCPDR_Cnt_LTAP_DryRunFlt_FailCnt));

    /* Logic: '<S225>/NOT5' incorporates:
     *  Constant: '<S221>/Calib'
     *  Logic: '<S225>/NOT3'
     *  RelationalOperator: '<S225>/Less Than  or Equal'
     */
    CPDR_ac_DW.UnitDelay_DSTATE_fc = ((((sint32)VeCPDR_Cnt_LTAP_DryRun_SmpCnt) >=
        ((sint32)KeCPDR_Cnt_LTAP_DryRunFlt_SmpCnt)) &&
        (!CPDR_ac_DW.UnitDelay1_DSTATE_d));

    /* Switch: '<S238>/Switch1' incorporates:
     *  Constant: '<S231>/Constant Value'
     *  DataStoreWrite: '<S208>/Data Store Write1'
     *  Switch: '<S237>/Switch1'
     */
    if (rtb_TmpSignalConversionAtPostCodeClrDiag)
    {
        CPDR_ac_DW.NeCPDR_Cnt_LTAP_FunDryRun_MFOP = 0U;
    }
    else
    {
        if (CPDR_ac_DW.UnitDelay_DSTATE_fc)
        {
            /* MinMax: '<S231>/Minimum2' incorporates:
             *  DataStoreRead: '<S208>/Data Store Read3'
             *  Switch: '<S237>/Switch1'
             */
            if (VeCPDR_Cnt_LTAP_DryRun_FailCnt >
                    CPDR_ac_DW.NeCPDR_Cnt_LTAP_FunDryRun_MFOP)
            {
                /* DataStoreWrite: '<S208>/Data Store Write1' incorporates:
                 *  Switch: '<S237>/Switch1'
                 */
                CPDR_ac_DW.NeCPDR_Cnt_LTAP_FunDryRun_MFOP =
                    VeCPDR_Cnt_LTAP_DryRun_FailCnt;
            }

            /* End of MinMax: '<S231>/Minimum2' */
        }
    }

    /* End of Switch: '<S238>/Switch1' */

    /* Inport: '<Root>/VePMIR_e_LTActvPumpLmpHM' */
    (void)Rte_Read_VePMIR_e_LTActvPumpLmpHM_Value(&tmpRead_4);

    /* Outputs for Enabled SubSystem: '<S224>/Fail' */
    CPDR_ac_Fail(CPDR_ac_DW.UnitDelay1_DSTATE_d, &CPDR_ac_B.Merge_ci);

    /* End of Outputs for SubSystem: '<S224>/Fail' */

    /* Outputs for Enabled SubSystem: '<S224>/Init' */
    CPDR_ac_Init_g(rtb_TmpSignalConversionAtBPCM_LIN_BusO_i, &CPDR_ac_B.Merge_ci);

    /* End of Outputs for SubSystem: '<S224>/Init' */

    /* Outputs for Enabled SubSystem: '<S224>/Pass' */
    CPDR_ac_Pass(CPDR_ac_DW.UnitDelay_DSTATE_fc, &CPDR_ac_B.Merge_ci);

    /* End of Outputs for SubSystem: '<S224>/Pass' */

    /* RelationalOperator: '<S224>/Relational Operator' incorporates:
     *  Constant: '<S227>/Constant'
     *  Merge: '<S224>/Merge'
     */
    VeCPDR_b_LTAP_DryRun_FltDtct = (((uint32)CPDR_ac_B.Merge_ci) ==
        CeDFIB_e_Fail);

    /* UnitDelay: '<S243>/Unit Delay' */
    VeCPDR_b_LTAP_FunPer_FltDtctPre = CPDR_ac_DW.UnitDelay_DSTATE_nt;

    /* Logic: '<S244>/Logical2' incorporates:
     *  Constant: '<S252>/Calib'
     *  Constant: '<S253>/Calib'
     *  RelationalOperator: '<S244>/Comparison4'
     *  RelationalOperator: '<S244>/Comparison5'
     */
    VeCPDR_b_BCP_VltgInRange = ((rtb_TmpSignalConversionAtBF1_SysVolt_AD_ <=
        KeCPDR_U_LTAP_MaxOprtngVltg) &&
        (rtb_TmpSignalConversionAtBF1_SysVolt_AD_ >= KeCPDR_U_LTAP_MinOprtngVltg));

    /* Logic: '<S251>/Logical2' incorporates:
     *  Constant: '<S297>/Calib'
     *  Constant: '<S298>/Calib'
     *  RelationalOperator: '<S251>/Comparison4'
     *  RelationalOperator: '<S251>/Comparison5'
     */
    VeCPDR_b_LTAP_PumpTempChk = ((rtb_TmpSignalConversionAtVePMIR_T_LTActv <=
        KeCPDR_T_LTAP_PumpTempUprLim) &&
        (rtb_TmpSignalConversionAtVePMIR_T_LTActv >=
         KeCPDR_T_LTAP_PumpTempLwrLim));

    /* RelationalOperator: '<S242>/Comparison1' */
    VeCPDR_b_LTAP_CmdLessLim = (rtb_TmpSignalConversionAtVePMPR_n_LT_Act <
        rtb_TmpSignalConversionAtLTAP_MaxOpRPM_A);

    /* Switch: '<S249>/Switch3' incorporates:
     *  Constant: '<S293>/Constant'
     *  Inport: '<Root>/VePMIR_e_LTActvPumpLmpHM'
     *  RelationalOperator: '<S249>/Comparison3'
     */
    if (((uint32)tmpRead_4) == CePMPR_e_FTSNA_False)
    {
        /* Switch: '<S249>/Switch3' incorporates:
         *  Constant: '<S249>/TRUE Constant2'
         */
        VeCPDR_b_LTAP_LimpHmChek_Enb = true;
    }
    else
    {
        /* Switch: '<S249>/Switch3' incorporates:
         *  Constant: '<S294>/Calib'
         *  Logic: '<S249>/AND18'
         *  Switch: '<S249>/Switch1'
         */
        VeCPDR_b_LTAP_LimpHmChek_Enb = ((!VeCPDR_b_LTAP_CmdLessLim) &&
            (KeCPDR_b_LTActPumpLmpHMEvent_OV));
    }

    /* End of Switch: '<S249>/Switch3' */

    /* Inport: '<Root>/VePMIR_e_LTActvPumpMntrRPM' */
    (void)Rte_Read_VePMIR_e_LTActvPumpMntrRPM_Value(&tmpRead_5);

    /* Switch: '<S250>/Switch3' incorporates:
     *  Constant: '<S295>/Constant'
     *  Inport: '<Root>/VePMIR_e_LTActvPumpMntrRPM'
     *  RelationalOperator: '<S250>/Comparison3'
     */
    if (((uint32)tmpRead_5) == CePMPR_e_FTSNA_True)
    {
        /* Switch: '<S250>/Switch3' incorporates:
         *  Constant: '<S250>/TRUE Constant2'
         */
        VeCPDR_b_LTAP_MntrChedEnb = true;
    }
    else
    {
        /* Switch: '<S250>/Switch3' incorporates:
         *  Constant: '<S296>/Calib'
         *  Logic: '<S250>/AND18'
         *  Switch: '<S250>/Switch1'
         */
        VeCPDR_b_LTAP_MntrChedEnb = ((!VeCPDR_b_LTAP_CmdLessLim) &&
            (KeCPDR_b_LTActPumpMntrRPMEvent_OV));
    }

    /* End of Switch: '<S250>/Switch3' */

    /* Inport: '<Root>/VePMIR_b_LTActvPumpTemp_FA' */
    (void)Rte_Read_VePMIR_b_LTActvPumpTemp_FA_Value(&tmpRead_6);

    /* S-Function (sfix_bitop): '<S246>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S246>/StatusByte_BattCoolPmpOveSpd'
     *  S-Function (sfix_bitop): '<S342>/Bitwise Operator2'
     */
    VeCPDR_b_BCP_CommonEnblConds_tmp = ((sint32)
        CPDR_ac_DW.StatusByte_BattCoolPmpOveSpd) & 1;

    /* Logic: '<S264>/AND32' incorporates:
     *  Constant: '<S246>/Constant1'
     *  Constant: '<S246>/Constant2'
     *  Constant: '<S247>/Constant1'
     *  Constant: '<S247>/Constant2'
     *  Constant: '<S270>/Constant'
     *  Constant: '<S271>/Calib'
     *  Constant: '<S272>/Calib'
     *  Constant: '<S273>/Calib'
     *  Constant: '<S274>/Calib'
     *  Constant: '<S275>/Calib'
     *  Constant: '<S276>/Calib'
     *  Constant: '<S277>/Calib'
     *  Constant: '<S278>/Calib'
     *  Constant: '<S279>/Calib'
     *  Constant: '<S280>/Calib'
     *  Constant: '<S281>/Calib'
     *  Logic: '<S246>/Logical Operator'
     *  Logic: '<S247>/Logical Operator'
     *  Logic: '<S264>/AND11'
     *  Logic: '<S264>/AND16'
     *  Logic: '<S264>/AND17'
     *  Logic: '<S264>/AND2'
     *  Logic: '<S264>/AND24'
     *  Logic: '<S264>/AND26'
     *  Logic: '<S264>/AND27'
     *  Logic: '<S264>/AND30'
     *  Logic: '<S264>/AND33'
     *  Logic: '<S264>/AND34'
     *  Logic: '<S264>/AND35'
     *  Logic: '<S264>/AND36'
     *  Logic: '<S264>/AND5'
     *  Logic: '<S264>/AND7'
     *  Logic: '<S264>/AND9'
     *  RelationalOperator: '<S246>/Relational Operator1'
     *  RelationalOperator: '<S246>/Relational Operator2'
     *  RelationalOperator: '<S247>/Relational Operator1'
     *  RelationalOperator: '<S247>/Relational Operator2'
     *  RelationalOperator: '<S264>/Comparison12'
     *  S-Function (sfix_bitop): '<S246>/Bitwise Operator2'
     */
    VeCPDR_b_BCP_CommonEnblConds = ((((((((((((((((uint32)
        rtb_TmpSignalConversionAtVePMTR_e_ThrmlD) != CePMTR_e_DISBL_All_Thrml) ||
        (KeCPDR_b_LTAP_FunPer_ThrmlEnbl)) &&
        (rtb_TmpSignalConversionAtVeTMIR_b_MainRl ||
         (KeCPDR_b_LTAP_FunPer_MainRly_OV))) &&
        ((!VeCPDR_b_LTAP_FunPer_FltDtctPre) || (KeCPDR_b_LTAP_FunPerFlt))) &&
        ((VeCPDR_b_BCP_VltgInRange) || (KeCPDR_b_BCP_VltgInRange_OV))) &&
        (((VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp <= 0) ||
          (VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_0 != 0U)) ||
         (KeCPDR_b_LTAP_ThrmlRlyCtrlCkt_FA_OV))) &&
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag) && ((VeCPDR_b_LTAP_PumpTempChk)
        || (KeCPDR_b_LTAP_PumpTempChk_OV))) &&
        (((VeCPDR_b_BCP_CommonEnblConds_tmp <= 0) ||
          (rtb_RelationalOperator3_m_tmp != 0U)) || (KeCPDR_b_LTActPumpDryRun_OV)))
        && ((VeCPDR_b_LTAP_LimpHmChek_Enb) || (KeCPDR_b_LTActPumpLmpHM_OV))) &&
        ((VeCPDR_b_LTAP_MntrChedEnb) || (KeCPDR_b_LTActPumpMntrRPM_OV))) &&
        ((VeCPDR_b_LTAP_CmdLessLim) || (KeCPDR_b_LTAP_CmdLessLimEvent_OV))) &&
        ((!tmpRead_6) || (KeCPDR_b_LTAP_Temp_FA_OV))) && rtb_UnitDelay1_e);

    /* Outputs for Atomic SubSystem: '<S245>/DeltaOneStep1' */
    /* Sum: '<S254>/Sum//Sub' incorporates:
     *  UnitDelay: '<S254>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVePMIR_T_LTActv =
        rtb_TmpSignalConversionAtVePMPR_n_LT_Act -
        CPDR_ac_DW.UnitDelay_DSTATE_as;

    /* Update for UnitDelay: '<S254>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_as = rtb_TmpSignalConversionAtVePMPR_n_LT_Act;

    /* End of Outputs for SubSystem: '<S245>/DeltaOneStep1' */

    /* Sum: '<S242>/Add' incorporates:
     *  Abs: '<S245>/Abs'
     */
    rtb_TmpSignalConversionAtVePMIR_T_LTActv = fabsf
        (rtb_TmpSignalConversionAtVePMIR_T_LTActv);

    /* Outputs for Atomic SubSystem: '<S245>/Timer Retrigger Reset Enabled2' */
    /* Switch: '<S263>/Switch1' incorporates:
     *  Constant: '<S255>/Calib'
     *  Constant: '<S257>/Calib'
     *  Constant: '<S261>/Calib'
     *  Constant: '<S263>/Constant Value4'
     *  MinMax: '<S263>/Maximum'
     *  RelationalOperator: '<S245>/Greater Than or Equal 3'
     *  Sum: '<S263>/Subtraction'
     *  UnitDelay: '<S263>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVePMIR_T_LTActv >=
            KeCPDR_n_LTA_PmpPerf_DeltSpdsmall)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_kj = KeCPDR_t_LTA_PmpPerf_DeltSpd_Small;
    }
    else
    {
        CPDR_ac_DW.UnitDelay_DSTATE_kj = fmaxf(CPDR_ac_DW.UnitDelay_DSTATE_kj -
            HeCPDR_t_MedTEH, 0.0F);
    }

    /* End of Switch: '<S263>/Switch1' */
    /* End of Outputs for SubSystem: '<S245>/Timer Retrigger Reset Enabled2' */

    /* Outputs for Atomic SubSystem: '<S245>/Timer Retrigger Reset Enabled1' */
    /* Switch: '<S262>/Switch1' incorporates:
     *  Constant: '<S255>/Calib'
     *  Constant: '<S256>/Calib'
     *  Constant: '<S260>/Calib'
     *  Constant: '<S262>/Constant Value4'
     *  MinMax: '<S262>/Maximum'
     *  RelationalOperator: '<S245>/Greater Than or Equal 4'
     *  Sum: '<S262>/Subtraction'
     *  UnitDelay: '<S262>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVePMIR_T_LTActv >=
            KeCPDR_n_LTA_PmpPerf_DeltSpdbig)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_pc = KeCPDR_t_LTA_PmpPerf_DeltSpd_Big;
    }
    else
    {
        CPDR_ac_DW.UnitDelay_DSTATE_pc = fmaxf(CPDR_ac_DW.UnitDelay_DSTATE_pc -
            HeCPDR_t_MedTEH, 0.0F);
    }

    /* End of Switch: '<S262>/Switch1' */
    /* End of Outputs for SubSystem: '<S245>/Timer Retrigger Reset Enabled1' */

    /* Inport: '<Root>/VePMIR_b_LTActvPumpRPMAct_SNA' */
    (void)Rte_Read_VePMIR_b_LTActvPumpRPMAct_SNA_Value(&tmpRead_7);

    /* Outputs for Atomic SubSystem: '<S245>/Timer Retrigger Reset Enabled2' */
    /* Outputs for Atomic SubSystem: '<S245>/Timer Retrigger Reset Enabled1' */
    /* Logic: '<S245>/Logical14' incorporates:
     *  Constant: '<S262>/Constant Value2'
     *  Constant: '<S263>/Constant Value2'
     *  Logic: '<S245>/Logical5'
     *  Logic: '<S245>/Logical6'
     *  RelationalOperator: '<S262>/Greater  Than1'
     *  RelationalOperator: '<S263>/Greater  Than1'
     *  UnitDelay: '<S262>/Unit Delay'
     *  UnitDelay: '<S263>/Unit Delay'
     */
    VeCPDR_b_LTA_PmpPerf_DeltSpdCmdEnbl = ((CPDR_ac_DW.UnitDelay_DSTATE_kj <=
        0.0F) && (CPDR_ac_DW.UnitDelay_DSTATE_pc <= 0.0F));

    /* End of Outputs for SubSystem: '<S245>/Timer Retrigger Reset Enabled1' */
    /* End of Outputs for SubSystem: '<S245>/Timer Retrigger Reset Enabled2' */

    /* Logic: '<S265>/AND12' incorporates:
     *  Constant: '<S258>/Calib'
     *  Constant: '<S259>/Calib'
     *  Constant: '<S282>/Calib'
     *  Constant: '<S283>/Calib'
     *  Constant: '<S284>/Calib'
     *  Logic: '<S265>/AND1'
     *  Logic: '<S265>/AND10'
     *  Logic: '<S265>/AND8'
     *  RelationalOperator: '<S245>/Greater Than or Equal 1'
     *  RelationalOperator: '<S245>/Greater Than or Equal 2'
     */
    VeCPDR_b_BCP_PerfEnblConds = ((((rtb_TmpSignalConversionAtVePMPR_n_LT_Act >=
        KeCPDR_n_LTA_PmpPerf_MinSpd) || (KeCPDR_b_LTAP_MinSpdChk_OV)) &&
        ((rtb_TmpSignalConversionAtVePMPR_n_LT_Act <=
          KeCPDR_n_LTA_PmpPerf_MaxSpd) || (KeCPDR_b_LTAP_MaxSpdChk_OV))) &&
        ((VeCPDR_b_LTA_PmpPerf_DeltSpdCmdEnbl) ||
         (KeCPDR_b_LTAP_DeltSpdCmdEnbl_OV)));

    /* Logic: '<S248>/AND6' */
    rtb_TmpSignalConversionAtBPCM_LIN_BusOff = ((VeCPDR_b_BCP_CommonEnblConds) &&
        tmpRead_7);

    /* Outputs for Atomic SubSystem: '<S269>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S291>/EdgeRising' */
    /* Logic: '<S292>/AND' incorporates:
     *  Logic: '<S292>/OR1'
     *  UnitDelay: '<S292>/Unit Delay'
     */
    rtb_TmpSignalConversionAtBPCM_LIN_BusO_i =
        (rtb_TmpSignalConversionAtBPCM_LIN_BusOff &&
         (!CPDR_ac_DW.UnitDelay_DSTATE_iz));

    /* Update for UnitDelay: '<S292>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_iz = rtb_TmpSignalConversionAtBPCM_LIN_BusOff;

    /* End of Outputs for SubSystem: '<S291>/EdgeRising' */

    /* Switch: '<S291>/Switch1' incorporates:
     *  Constant: '<S289>/Calib'
     *  Constant: '<S290>/Calib'
     *  Constant: '<S291>/Constant Value1'
     *  Logic: '<S291>/OR'
     *  Logic: '<S291>/OR1'
     *  MinMax: '<S291>/Minimum'
     *  Sum: '<S291>/Summation'
     *  UnitDelay: '<S291>/Unit Delay'
     */
    if ((!rtb_TmpSignalConversionAtBPCM_LIN_BusOff) ||
            rtb_TmpSignalConversionAtBPCM_LIN_BusO_i)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_mz = 0.0F;
    }
    else
    {
        CPDR_ac_DW.UnitDelay_DSTATE_mz = fminf(KeCPDR_t_LTAP_rpmSNA_WaitTime,
            HeCPDR_t_MedTEH + CPDR_ac_DW.UnitDelay_DSTATE_mz);
    }

    /* End of Switch: '<S291>/Switch1' */
    /* End of Outputs for SubSystem: '<S269>/Turn On Delay Time' */

    /* Inport: '<Root>/VePMIR_b_LTActvPumpDryRun_SNA' */
    (void)Rte_Read_VePMIR_b_LTActvPumpDryRun_SNA_Value(&rtb_AND3_pq);

    /* Outputs for Atomic SubSystem: '<S269>/Turn On Delay Time' */
    /* Logic: '<S291>/AND' incorporates:
     *  Constant: '<S290>/Calib'
     *  RelationalOperator: '<S291>/Greater  Than'
     *  UnitDelay: '<S291>/Unit Delay'
     */
    VeCPDR_b_BCP_SpdSNAConfirmed = (rtb_TmpSignalConversionAtBPCM_LIN_BusOff &&
        (CPDR_ac_DW.UnitDelay_DSTATE_mz >= KeCPDR_t_LTAP_rpmSNA_WaitTime));

    /* End of Outputs for SubSystem: '<S269>/Turn On Delay Time' */

    /* Logic: '<S248>/AND3' */
    rtb_AND3_pq = ((VeCPDR_b_BCP_CommonEnblConds) && rtb_AND3_pq);

    /* Outputs for Atomic SubSystem: '<S268>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S287>/EdgeRising' */
    /* Logic: '<S288>/AND' incorporates:
     *  Logic: '<S288>/OR1'
     *  UnitDelay: '<S288>/Unit Delay'
     */
    rtb_TmpSignalConversionAtBPCM_LIN_BusOff = (rtb_AND3_pq &&
        (!CPDR_ac_DW.UnitDelay_DSTATE_bb));

    /* Update for UnitDelay: '<S288>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_bb = rtb_AND3_pq;

    /* End of Outputs for SubSystem: '<S287>/EdgeRising' */

    /* Switch: '<S287>/Switch1' incorporates:
     *  Constant: '<S285>/Calib'
     *  Constant: '<S286>/Calib'
     *  Constant: '<S287>/Constant Value1'
     *  Logic: '<S287>/OR'
     *  Logic: '<S287>/OR1'
     *  MinMax: '<S287>/Minimum'
     *  Sum: '<S287>/Summation'
     *  UnitDelay: '<S287>/Unit Delay'
     */
    if ((!rtb_AND3_pq) || rtb_TmpSignalConversionAtBPCM_LIN_BusOff)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_d5 = 0.0F;
    }
    else
    {
        CPDR_ac_DW.UnitDelay_DSTATE_d5 = fminf(KeCPDR_t_LTAP_DryRunSNA_WaitTime,
            HeCPDR_t_MedTEH + CPDR_ac_DW.UnitDelay_DSTATE_d5);
    }

    /* End of Switch: '<S287>/Switch1' */

    /* Logic: '<S287>/AND' incorporates:
     *  Constant: '<S286>/Calib'
     *  RelationalOperator: '<S287>/Greater  Than'
     *  UnitDelay: '<S287>/Unit Delay'
     */
    VeCPDR_b_BCP_DryRunSNAConfirmed = (rtb_AND3_pq &&
        (CPDR_ac_DW.UnitDelay_DSTATE_d5 >= KeCPDR_t_LTAP_DryRunSNA_WaitTime));

    /* End of Outputs for SubSystem: '<S268>/Turn On Delay Time' */

    /* Logic: '<S248>/AND1' incorporates:
     *  Constant: '<S266>/Calib'
     *  Constant: '<S267>/Calib'
     *  Logic: '<S248>/AND12'
     *  Logic: '<S248>/AND2'
     *  Logic: '<S248>/AND5'
     */
    rtb_AND3_pq = ((((VeCPDR_b_BCP_CommonEnblConds) &&
                     (VeCPDR_b_BCP_PerfEnblConds)) ||
                    ((KeCPDR_b_BCP_SpdSNAEnblCndsOV) &&
                     (VeCPDR_b_BCP_SpdSNAConfirmed))) ||
                   ((KeCPDR_b_BCP_DryRunSNAEnblCndsOV) &&
                    (VeCPDR_b_BCP_DryRunSNAConfirmed)));

    /* RelationalOperator: '<S305>/Relational Operator3' incorporates:
     *  Constant: '<S305>/Constant3'
     */
    rtb_TmpSignalConversionAtBPCM_LOC_BCP_FA =
        (VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_1 == 0U);

    /* Outputs for Atomic SubSystem: '<S305>/EdgeFalling1' */
    /* Logic: '<S305>/Logical Operator' incorporates:
     *  Logic: '<S307>/OR1'
     */
    rtb_TmpSignalConversionAtBPCM_LOC_BCP_Sg =
        !rtb_TmpSignalConversionAtBPCM_LOC_BCP_FA;

    /* End of Outputs for SubSystem: '<S305>/EdgeFalling1' */

    /* Logic: '<S305>/Logical1' incorporates:
     *  Constant: '<S304>/Calib'
     *  Constant: '<S305>/Constant1'
     *  DataStoreRead: '<S243>/Data Store Read'
     *  Logic: '<S305>/Logical Operator'
     *  Logic: '<S305>/Logical10'
     *  Logic: '<S305>/Logical12'
     *  RelationalOperator: '<S305>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S305>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtBPCM_LIN_BusO_i = (rtb_AND3_pq &&
        ((!KeCPDR_b_BattCoolPmpPerf_LtchEnbl) || (((((uint32)
        CPDR_ac_DW.StatusByte_BattCoolPmpPerf) & 1U) == 0U) ||
        rtb_TmpSignalConversionAtBPCM_LOC_BCP_Sg)));

    /* Abs: '<S242>/Abs' incorporates:
     *  Sum: '<S242>/Add'
     */
    VeCPDR_n_LTAP_FunPer_RPM_Error = fabsf
        (rtb_TmpSignalConversionAtVePMPR_n_LT_Act -
         rtb_TmpSignalConversionAtVePMIR_n_LTActv);

    /* Logic: '<S301>/AND22' incorporates:
     *  Constant: '<S240>/Calib'
     *  RelationalOperator: '<S301>/Comparison1'
     *  RelationalOperator: '<S301>/Comparison4'
     *  Sum: '<S301>/Add'
     *  Sum: '<S301>/Add1'
     */
    VeCPDR_b_LTAP_VltgDrpFunPer_FltChk =
        ((rtb_TmpSignalConversionAtVePMIR_n_LTActv <
          (rtb_TmpSignalConversionAtLTAP_MaxOpRPM_A -
           KeCPDR_n_LTAP_FunPer_DesRPM)) ||
         (rtb_TmpSignalConversionAtVePMIR_n_LTActv >
          (rtb_TmpSignalConversionAtVePMPR_n_LT_Act +
           KeCPDR_n_LTAP_FunPer_DesRPM)));

    /* Switch: '<S242>/Switch1' incorporates:
     *  Constant: '<S239>/Calib'
     *  Constant: '<S240>/Calib'
     *  Logic: '<S242>/AND22'
     *  RelationalOperator: '<S242>/Comparison4'
     */
    if ((KeCPDR_b_LTAP_CmdLessLim_Disbl) || (VeCPDR_b_LTAP_CmdLessLim))
    {
        rtb_TmpSignalConversionAtBPCM_LIN_BusOff =
            (VeCPDR_n_LTAP_FunPer_RPM_Error > KeCPDR_n_LTAP_FunPer_DesRPM);
    }
    else
    {
        rtb_TmpSignalConversionAtBPCM_LIN_BusOff =
            VeCPDR_b_LTAP_VltgDrpFunPer_FltChk;
    }

    /* End of Switch: '<S242>/Switch1' */

    /* Logic: '<S242>/AND1' incorporates:
     *  Constant: '<S299>/Calib'
     *  Constant: '<S300>/Calib'
     *  Logic: '<S242>/AND2'
     *  Logic: '<S242>/AND3'
     */
    VeCPDR_b_LTAP_FunPer_FltChk = ((rtb_TmpSignalConversionAtBPCM_LIN_BusOff ||
        ((VeCPDR_b_BCP_SpdSNAConfirmed) && (KeCPDR_b_BCP_SpdSNAFault_En))) ||
        ((VeCPDR_b_BCP_DryRunSNAConfirmed) && (KeCPDR_b_BCP_DryRunSNAFault_En)));

    /* Outputs for Atomic SubSystem: '<S305>/EdgeFalling1' */
    /* Logic: '<S307>/AND' incorporates:
     *  UnitDelay: '<S307>/Unit Delay'
     */
    rtb_TmpSignalConversionAtBPCM_LIN_BusOff =
        (rtb_TmpSignalConversionAtBPCM_LOC_BCP_Sg &&
         (CPDR_ac_DW.UnitDelay_DSTATE_lx));

    /* Update for UnitDelay: '<S307>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_lx = rtb_TmpSignalConversionAtBPCM_LOC_BCP_FA;

    /* End of Outputs for SubSystem: '<S305>/EdgeFalling1' */

    /* Logic: '<S305>/Logical5' */
    rtb_NOT4_g = (rtb_NOT4_g || rtb_TmpSignalConversionAtBPCM_LIN_BusOff);

    /* Outputs for Atomic SubSystem: '<S306>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S306>/Counter Reset  Enabled ' */
    /* Switch: '<S313>/Switch1' incorporates:
     *  Logic: '<S306>/Fail Counter Reset'
     *  Logic: '<S306>/NOT6'
     *  Switch: '<S313>/Switch2'
     *  Switch: '<S314>/Switch1'
     *  UnitDelay: '<S306>/Unit Delay'
     *  UnitDelay: '<S306>/Unit Delay1'
     */
    if ((rtb_NOT4_g || (CPDR_ac_DW.UnitDelay_DSTATE_mb)) ||
            (CPDR_ac_DW.UnitDelay1_DSTATE_l))
    {
        /* Switch: '<S313>/Switch1' incorporates:
         *  Constant: '<S313>/Constant Value2'
         */
        VeCPDR_Cnt_LTAP_Perf_FailCnt = 0U;

        /* Switch: '<S314>/Switch1' incorporates:
         *  Constant: '<S314>/Constant Value2'
         */
        VeCPDR_Cnt_LTAP_Perf_SmpCnt = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtBPCM_LIN_BusO_i &&
                (VeCPDR_b_LTAP_FunPer_FltChk))
        {
            /* Switch: '<S313>/Switch1' incorporates:
             *  Constant: '<S313>/Constant Value1'
             *  Sum: '<S313>/Subtraction'
             *  Switch: '<S313>/Switch2'
             *  UnitDelay: '<S313>/Unit Delay'
             */
            VeCPDR_Cnt_LTAP_Perf_FailCnt = (uint16)(((uint32)
                VeCPDR_Cnt_LTAP_Perf_FailCnt) + 1U);
        }

        /* Switch: '<S314>/Switch2' */
        if (rtb_TmpSignalConversionAtBPCM_LIN_BusO_i)
        {
            /* Switch: '<S314>/Switch1' incorporates:
             *  Constant: '<S314>/Constant Value1'
             *  Sum: '<S314>/Subtraction'
             *  Switch: '<S314>/Switch2'
             *  UnitDelay: '<S314>/Unit Delay'
             */
            VeCPDR_Cnt_LTAP_Perf_SmpCnt = (uint16)(((uint32)
                VeCPDR_Cnt_LTAP_Perf_SmpCnt) + 1U);
        }

        /* End of Switch: '<S314>/Switch2' */
    }

    /* End of Switch: '<S313>/Switch1' */
    /* End of Outputs for SubSystem: '<S306>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S306>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S306>/Greater Than or Equal ' incorporates:
     *  Constant: '<S302>/Calib'
     */
    CPDR_ac_DW.UnitDelay1_DSTATE_l = (((sint32)VeCPDR_Cnt_LTAP_Perf_FailCnt) >=
        ((sint32)KeCPDR_Cnt_LTAP_FunPer_FailCnt));

    /* Logic: '<S306>/NOT5' incorporates:
     *  Constant: '<S303>/Calib'
     *  Logic: '<S306>/NOT3'
     *  RelationalOperator: '<S306>/Less Than  or Equal'
     */
    CPDR_ac_DW.UnitDelay_DSTATE_mb = ((((sint32)VeCPDR_Cnt_LTAP_Perf_SmpCnt) >=
        ((sint32)KeCPDR_Cnt_LTAP_FunPer_SmpCnt)) &&
        (!CPDR_ac_DW.UnitDelay1_DSTATE_l));

    /* Switch: '<S319>/Switch1' incorporates:
     *  Constant: '<S312>/Constant Value'
     *  DataStoreWrite: '<S243>/Data Store Write3'
     *  Switch: '<S318>/Switch1'
     */
    if (rtb_TmpSignalConversionAtPostCodeClrDiag)
    {
        CPDR_ac_DW.NeCPDR_Cnt_LTAP_FunPer_MFOP = 0U;
    }
    else
    {
        if (CPDR_ac_DW.UnitDelay_DSTATE_mb)
        {
            /* MinMax: '<S312>/Minimum2' incorporates:
             *  DataStoreRead: '<S243>/Data Store Read1'
             *  Switch: '<S318>/Switch1'
             */
            if (VeCPDR_Cnt_LTAP_Perf_FailCnt >
                    CPDR_ac_DW.NeCPDR_Cnt_LTAP_FunPer_MFOP)
            {
                /* DataStoreWrite: '<S243>/Data Store Write3' incorporates:
                 *  Switch: '<S318>/Switch1'
                 */
                CPDR_ac_DW.NeCPDR_Cnt_LTAP_FunPer_MFOP =
                    VeCPDR_Cnt_LTAP_Perf_FailCnt;
            }

            /* End of MinMax: '<S312>/Minimum2' */
        }
    }

    /* End of Switch: '<S319>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S305>/Fail' */
    CPDR_ac_Fail(CPDR_ac_DW.UnitDelay1_DSTATE_l, &CPDR_ac_B.Merge_n);

    /* End of Outputs for SubSystem: '<S305>/Fail' */

    /* Outputs for Enabled SubSystem: '<S305>/Init' */
    CPDR_ac_Init_g(rtb_NOT4_g, &CPDR_ac_B.Merge_n);

    /* End of Outputs for SubSystem: '<S305>/Init' */

    /* Outputs for Enabled SubSystem: '<S305>/Pass' */
    CPDR_ac_Pass(CPDR_ac_DW.UnitDelay_DSTATE_mb, &CPDR_ac_B.Merge_n);

    /* End of Outputs for SubSystem: '<S305>/Pass' */

    /* RelationalOperator: '<S305>/Relational Operator' incorporates:
     *  Constant: '<S308>/Constant'
     *  Merge: '<S305>/Merge'
     *  UnitDelay: '<S243>/Unit Delay'
     */
    CPDR_ac_DW.UnitDelay_DSTATE_nt = (((uint32)CPDR_ac_B.Merge_n) ==
        CeDFIB_e_Fail);

    /* RelationalOperator: '<S184>/Comparison2' incorporates:
     *  Constant: '<S186>/Calib'
     */
    rtb_TmpSignalConversionAtBPCM_LIN_BusO_i =
        (rtb_TmpSignalConversionAtVePMPR_n_LT_Act < KeCPDR_n_LTAP_MinCmdThrshld);

    /* Logic: '<S184>/Logical1' */
    rtb_NOT4_g = !rtb_TmpSignalConversionAtPropSysActv_AD_;

    /* Outputs for Atomic SubSystem: '<S184>/Stop Watch Reset Enabled2' */
    /* Switch: '<S336>/Switch' incorporates:
     *  Constant: '<S336>/Constant Value2'
     *  Logic: '<S184>/Logical3'
     *  UnitDelay: '<S336>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtBPCM_LIN_BusO_i || rtb_NOT4_g)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_ge = 0.0F;
    }
    else
    {
        /* UnitDelay: '<S336>/Unit Delay' incorporates:
         *  Constant: '<S184>/Constant Value1'
         *  Sum: '<S336>/Subtraction'
         *  Switch: '<S336>/Switch2'
         */
        CPDR_ac_DW.UnitDelay_DSTATE_ge += 0.1F;
    }

    /* End of Switch: '<S336>/Switch' */
    /* End of Outputs for SubSystem: '<S184>/Stop Watch Reset Enabled2' */

    /* RelationalOperator: '<S334>/Comparison1' incorporates:
     *  Constant: '<S340>/Calib'
     *  UnitDelay: '<S336>/Unit Delay'
     */
    rtb_TmpSignalConversionAtBPCM_LIN_BusOff = (CPDR_ac_DW.UnitDelay_DSTATE_ge >
        KeCPDR_t_IUMPR_LTAP_MinConsecTime_CmdOn);

    /* Outputs for Atomic SubSystem: '<S184>/Stop Watch Reset Enabled3' */
    /* Switch: '<S337>/Switch' incorporates:
     *  Constant: '<S337>/Constant Value2'
     *  Logic: '<S184>/Logical4'
     *  Switch: '<S337>/Switch2'
     *  UnitDelay: '<S337>/Unit Delay'
     */
    if (rtb_NOT4_g)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_be = 0.0F;
    }
    else
    {
        if (!rtb_TmpSignalConversionAtBPCM_LIN_BusO_i)
        {
            /* UnitDelay: '<S337>/Unit Delay' incorporates:
             *  Constant: '<S184>/Constant Value2'
             *  Sum: '<S337>/Subtraction'
             *  Switch: '<S337>/Switch2'
             */
            CPDR_ac_DW.UnitDelay_DSTATE_be += 0.1F;
        }
    }

    /* End of Switch: '<S337>/Switch' */
    /* End of Outputs for SubSystem: '<S184>/Stop Watch Reset Enabled3' */

    /* Outputs for Atomic SubSystem: '<S334>/EdgeRising' */
    /* Logic: '<S338>/OR1' incorporates:
     *  UnitDelay: '<S338>/Unit Delay'
     */
    rtb_TmpSignalConversionAtBPCM_LIN_BusO_i = !CPDR_ac_DW.UnitDelay_DSTATE_kp;

    /* Update for UnitDelay: '<S338>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_kp = rtb_TmpSignalConversionAtBPCM_LIN_BusOff;

    /* End of Outputs for SubSystem: '<S334>/EdgeRising' */

    /* Switch: '<S334>/Switch' incorporates:
     *  Constant: '<S334>/Constant Value5'
     *  Logic: '<S338>/AND'
     *  Sum: '<S334>/Sum'
     *  UnitDelay: '<S334>/Unit Delay'
     */
    if (rtb_NOT4_g)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_jj = 0.0F;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S334>/EdgeRising' */
        CPDR_ac_DW.UnitDelay_DSTATE_jj += (float32)
            ((rtb_TmpSignalConversionAtBPCM_LIN_BusOff &&
              rtb_TmpSignalConversionAtBPCM_LIN_BusO_i) ? 1 : 0);

        /* End of Outputs for SubSystem: '<S334>/EdgeRising' */
    }

    /* End of Switch: '<S334>/Switch' */

    /* Outputs for Atomic SubSystem: '<S184>/Signal Latch On With Reset' */
    /* Logic: '<S335>/OR1' incorporates:
     *  Constant: '<S339>/Calib'
     *  Constant: '<S341>/Calib'
     *  Logic: '<S334>/Logical4'
     *  Logic: '<S335>/NOT'
     *  Logic: '<S335>/OR'
     *  RelationalOperator: '<S334>/Comparison2'
     *  RelationalOperator: '<S334>/Comparison4'
     *  UnitDelay: '<S334>/Unit Delay'
     *  UnitDelay: '<S335>/Unit Delay'
     *  UnitDelay: '<S337>/Unit Delay'
     */
    CPDR_ac_DW.UnitDelay_DSTATE_ae = (((CPDR_ac_DW.UnitDelay_DSTATE_be >=
        KeCPDR_t_IUMPR_LTAP_MinCumlTime_CmdOn) ||
        (CPDR_ac_DW.UnitDelay_DSTATE_jj >=
         KeCPDR_Cnt_IUMPR_LTAP_MinConsecCnt_CmdOn)) || ((!rtb_NOT4_g) &&
        (CPDR_ac_DW.UnitDelay_DSTATE_ae)));

    /* End of Outputs for SubSystem: '<S184>/Signal Latch On With Reset' */

    /* Logic: '<S185>/Logical3' incorporates:
     *  Constant: '<S342>/Constant1'
     *  Constant: '<S342>/Constant2'
     *  Constant: '<S343>/Constant1'
     *  Constant: '<S343>/Constant2'
     *  Constant: '<S344>/Constant1'
     *  Constant: '<S344>/Constant2'
     *  Constant: '<S345>/Constant1'
     *  Constant: '<S345>/Constant2'
     *  Constant: '<S346>/Constant1'
     *  Constant: '<S346>/Constant2'
     *  Constant: '<S347>/Constant1'
     *  Constant: '<S347>/Constant2'
     *  Constant: '<S348>/Constant1'
     *  Constant: '<S348>/Constant2'
     *  Constant: '<S349>/Constant1'
     *  Constant: '<S349>/Constant2'
     *  Constant: '<S350>/Calib'
     *  Constant: '<S351>/Calib'
     *  Constant: '<S352>/Calib'
     *  Constant: '<S353>/Calib'
     *  Constant: '<S354>/Calib'
     *  Constant: '<S355>/Calib'
     *  Constant: '<S356>/Calib'
     *  Constant: '<S357>/Calib'
     *  DataStoreRead: '<S344>/StatusByte_CommBusOff'
     *  DataStoreRead: '<S345>/StatusByte_InvData_BECM'
     *  DataStoreRead: '<S346>/StatusByte_LIN1_BusOff'
     *  DataStoreRead: '<S347>/StatusByte_LosCommBECM_A'
     *  DataStoreRead: '<S348>/StatusByte_LostCommHB_CoolPmp'
     *  Logic: '<S185>/Logical1'
     *  Logic: '<S185>/Logical2'
     *  Logic: '<S185>/Logical4'
     *  Logic: '<S185>/Logical5'
     *  Logic: '<S185>/Logical6'
     *  Logic: '<S185>/Logical7'
     *  Logic: '<S185>/Logical8'
     *  Logic: '<S185>/Logical9'
     *  Logic: '<S342>/Logical Operator'
     *  Logic: '<S343>/Logical Operator'
     *  Logic: '<S344>/Logical Operator'
     *  Logic: '<S345>/Logical Operator'
     *  Logic: '<S346>/Logical Operator'
     *  Logic: '<S347>/Logical Operator'
     *  Logic: '<S348>/Logical Operator'
     *  Logic: '<S349>/Logical Operator'
     *  RelationalOperator: '<S342>/Relational Operator1'
     *  RelationalOperator: '<S342>/Relational Operator2'
     *  RelationalOperator: '<S343>/Relational Operator1'
     *  RelationalOperator: '<S343>/Relational Operator2'
     *  RelationalOperator: '<S344>/Relational Operator1'
     *  RelationalOperator: '<S344>/Relational Operator2'
     *  RelationalOperator: '<S345>/Relational Operator1'
     *  RelationalOperator: '<S345>/Relational Operator2'
     *  RelationalOperator: '<S346>/Relational Operator1'
     *  RelationalOperator: '<S346>/Relational Operator2'
     *  RelationalOperator: '<S347>/Relational Operator1'
     *  RelationalOperator: '<S347>/Relational Operator2'
     *  RelationalOperator: '<S348>/Relational Operator1'
     *  RelationalOperator: '<S348>/Relational Operator2'
     *  RelationalOperator: '<S349>/Relational Operator1'
     *  RelationalOperator: '<S349>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S344>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S344>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S345>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S345>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S346>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S346>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S347>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S347>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S348>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S348>/Bitwise Operator2'
     */
    rtb_NOT4_g = ((((((((((VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp > 0) &&
                          (VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_0 == 0U)) &&
                         (KeCPDR_b_IUMPR_LTAP_Perf_CrktChkEnbl)) || ((((((sint32)
        CPDR_ac_DW.StatusByte_CommBusOff) & 1) > 0) && ((((uint32)
        CPDR_ac_DW.StatusByte_CommBusOff) & 64U) == 0U)) &&
                         (KeCPDR_b_IUMPR_LTAP_Perf_CANePTBus_ChkEnbl))) ||
                       (((VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_2 > 0) &&
                         (VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_1 == 0U)) &&
                        (KeCPDR_b_IUMPR_LTAP_Perf_LTAP_PerfChkEnbl))) ||
                      (((VeCPDR_b_BCP_CommonEnblConds_tmp > 0) &&
                        (rtb_RelationalOperator3_m_tmp == 0U)) &&
                       (KeCPDR_b_IUMPR_LTAP_Perf_DryRun_ChkEnbl))) ||
                     ((((((sint32)CPDR_ac_DW.StatusByte_LIN1_BusOff) & 1) > 0) &&
                       ((((uint32)CPDR_ac_DW.StatusByte_LIN1_BusOff) & 64U) ==
                        0U)) && (KeCPDR_b_IUMPR_LTAP_Perf_LINBus1_ChkEnbl))) ||
                    ((((((sint32)CPDR_ac_DW.StatusByte_LostCommHB_CoolPmp) & 1) >
                       0) && ((((uint32)CPDR_ac_DW.StatusByte_LostCommHB_CoolPmp)
                        & 64U) == 0U)) && (KeCPDR_b_IUMPR_LTAP_Perf_LOC_ChkEnbl)))
                   || ((((((sint32)CPDR_ac_DW.StatusByte_InvData_BECM) & 1) > 0)
                        && ((((uint32)CPDR_ac_DW.StatusByte_InvData_BECM) & 64U)
                            == 0U)) && (KeCPDR_b_IUMPR_LTAP_Perf_InvData_ChkEnbl)))
                  || ((((((sint32)CPDR_ac_DW.StatusByte_LosCommBECM_A) & 1) > 0)
                       && ((((uint32)CPDR_ac_DW.StatusByte_LosCommBECM_A) & 64U)
                           == 0U)) && (KeCPDR_b_IUMPR_LTAP_Perf_LOC_BECM_ChkEnbl)));

    /* Outport: '<Root>/VeCPDR_b_IUMPR_LTAP_DryRun' incorporates:
     *  Constant: '<S320>/Constant1'
     *  Constant: '<S320>/Constant2'
     *  Constant: '<S321>/Constant1'
     *  Constant: '<S321>/Constant2'
     *  Constant: '<S322>/Constant1'
     *  Constant: '<S322>/Constant2'
     *  Constant: '<S323>/Constant1'
     *  Constant: '<S323>/Constant2'
     *  Constant: '<S324>/Constant1'
     *  Constant: '<S324>/Constant2'
     *  Constant: '<S325>/Constant1'
     *  Constant: '<S325>/Constant2'
     *  Constant: '<S326>/Constant1'
     *  Constant: '<S326>/Constant2'
     *  Constant: '<S327>/Calib'
     *  Constant: '<S328>/Calib'
     *  Constant: '<S329>/Calib'
     *  Constant: '<S330>/Calib'
     *  Constant: '<S331>/Calib'
     *  Constant: '<S332>/Calib'
     *  Constant: '<S333>/Calib'
     *  DataStoreRead: '<S320>/StatusByte_BattCoolPmpPerf'
     *  DataStoreRead: '<S321>/StatusByte_CommBusOff'
     *  DataStoreRead: '<S322>/StatusByte_InvData_BECM'
     *  DataStoreRead: '<S323>/StatusByte_LIN1_BusOff'
     *  DataStoreRead: '<S324>/StatusByte_LosCommBECM_A'
     *  DataStoreRead: '<S325>/StatusByte_LostCommHB_CoolPmp'
     *  DataStoreRead: '<S326>/StatusByte_ThrmlRlyCtrlCkt'
     *  Logic: '<S183>/Logical1'
     *  Logic: '<S183>/Logical2'
     *  Logic: '<S183>/Logical3'
     *  Logic: '<S183>/Logical4'
     *  Logic: '<S183>/Logical6'
     *  Logic: '<S183>/Logical7'
     *  Logic: '<S183>/Logical8'
     *  Logic: '<S183>/Logical9'
     *  Logic: '<S320>/Logical Operator'
     *  Logic: '<S321>/Logical Operator'
     *  Logic: '<S322>/Logical Operator'
     *  Logic: '<S323>/Logical Operator'
     *  Logic: '<S324>/Logical Operator'
     *  Logic: '<S325>/Logical Operator'
     *  Logic: '<S326>/Logical Operator'
     *  RelationalOperator: '<S320>/Relational Operator1'
     *  RelationalOperator: '<S320>/Relational Operator2'
     *  RelationalOperator: '<S321>/Relational Operator1'
     *  RelationalOperator: '<S321>/Relational Operator2'
     *  RelationalOperator: '<S322>/Relational Operator1'
     *  RelationalOperator: '<S322>/Relational Operator2'
     *  RelationalOperator: '<S323>/Relational Operator1'
     *  RelationalOperator: '<S323>/Relational Operator2'
     *  RelationalOperator: '<S324>/Relational Operator1'
     *  RelationalOperator: '<S324>/Relational Operator2'
     *  RelationalOperator: '<S325>/Relational Operator1'
     *  RelationalOperator: '<S325>/Relational Operator2'
     *  RelationalOperator: '<S326>/Relational Operator1'
     *  RelationalOperator: '<S326>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S320>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S320>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S321>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S321>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S322>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S322>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S323>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S323>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S324>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S324>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S325>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S325>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S326>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S326>/Bitwise Operator2'
     */
    (void)Rte_Write_VeCPDR_b_IUMPR_LTAP_DryRun_Value((((((((((((sint32)
        CPDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 1) > 0) && ((((uint32)
        CPDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 64U) == 0U)) &&
        (KeCPDR_b_IUMPR_LTAP_DryRun_CrktChkEnbl)) || ((((((sint32)
        CPDR_ac_DW.StatusByte_BattCoolPmpPerf) & 1) > 0) && ((((uint32)
        CPDR_ac_DW.StatusByte_BattCoolPmpPerf) & 64U) == 0U)) &&
        (KeCPDR_b_IUMPR_LTAP_DryRun_LTAP_PerfChkEnbl))) || ((((((sint32)
        CPDR_ac_DW.StatusByte_LIN1_BusOff) & 1) > 0) && ((((uint32)
        CPDR_ac_DW.StatusByte_LIN1_BusOff) & 64U) == 0U)) &&
        (KeCPDR_b_IUMPR_LTAP_DryRun_LINBus1_ChkEnbl))) || ((((((sint32)
        CPDR_ac_DW.StatusByte_LostCommHB_CoolPmp) & 1) > 0) && ((((uint32)
        CPDR_ac_DW.StatusByte_LostCommHB_CoolPmp) & 64U) == 0U)) &&
        (KeCPDR_b_IUMPR_LTAP_DryRun_LOC_ChkEnbl))) || ((((((sint32)
        CPDR_ac_DW.StatusByte_CommBusOff) & 1) > 0) && ((((uint32)
        CPDR_ac_DW.StatusByte_CommBusOff) & 64U) == 0U)) &&
        (KeCPDR_b_IUMPR_LTAP_DryRun_CANePTBus_ChkEnbl))) || ((((((sint32)
        CPDR_ac_DW.StatusByte_InvData_BECM) & 1) > 0) && ((((uint32)
        CPDR_ac_DW.StatusByte_InvData_BECM) & 64U) == 0U)) &&
        (KeCPDR_b_IUMPR_LTAP_DryRun_InvData_ChkEnbl))) || ((((((sint32)
        CPDR_ac_DW.StatusByte_LosCommBECM_A) & 1) > 0) && ((((uint32)
        CPDR_ac_DW.StatusByte_LosCommBECM_A) & 64U) == 0U)) &&
        (KeCPDR_b_IUMPR_LTAP_DryRun_LOC_BECM_ChkEnbl)));

    /* End of Outputs for SubSystem: '<S178>/BCP_Diagnostics_FUNC' */
#endif

    /* End of Outputs for SubSystem: '<S171>/BCP_Diagnostics' */

    /* Outputs for Atomic SubSystem: '<S172>/EOPA_Diagnostics' */
    /* SignalConversion generated from: '<S2>/TransAuxPmp_Cmd_AD_Read' incorporates:
     *  Inport: '<Root>/VePMIR_T_TransAuxPumpOilTemp'
     *  Inport: '<Root>/VePMIR_b_AuxPumpSpdAct_FA'
     *  Inport: '<Root>/VePMIR_b_AuxPumpSpdAct_SNA'
     *  Inport: '<Root>/VePMIR_b_TransAuxPumpDryRun_FA'
     *  Inport: '<Root>/VePMIR_b_TransAuxPumpOilTemp_FA'
     *  SignalConversion generated from: '<S2>/AuxPumpSpdAct_AD_Read'
     *  SignalConversion generated from: '<S2>/VePMIR_e_TransAuxPumpDryRun'
     */
#if Rte_SysCon_Variant_CPDR_7

    /* Outputs for Atomic SubSystem: '<S358>/EOPA_Diagnostics_FUNC' */
    /* SignalConversion generated from: '<S2>/TransAuxPmp_Cmd_AD_Read' incorporates:
     *  Merge: '<Root>/TransAuxPmp_Cmd_AD_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVePMPR_n_LT_Act =
        Rte_IrvRead_CPDR_MedTEH_TransAuxPmp_Cmd_AD_write_IRV();

    /* SignalConversion generated from: '<S2>/AuxPumpSpdAct_AD_Read' incorporates:
     *  Merge: '<Root>/AuxPumpSpdAct_AD_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVePMIR_n_LTActv =
        Rte_IrvRead_CPDR_MedTEH_AuxPumpSpdAct_AD_write_IRV();

    /* SignalConversion generated from: '<S2>/VePMIR_e_TransAuxPumpDryRun' incorporates:
     *  Inport: '<Root>/VePMIR_e_TransAuxPumpDryRun'
     */
    (void)Rte_Read_VePMIR_e_TransAuxPumpDryRun_Value
        (&rtb_TmpSignalConversionAtVePMIR_e_TransA);
    (void)Rte_Read_VePMIR_b_AuxPumpSpdAct_FA_Value(&rtb_Logical1_m4);
    (void)Rte_Read_VePMIR_b_TransAuxPumpDryRun_FA_Value(&rtb_NOT4_gk);
    (void)Rte_Read_VePMIR_b_TransAuxPumpOilTemp_FA_Value
        (&rtb_RelationalOperator3_c);
    (void)Rte_Read_VePMIR_T_TransAuxPumpOilTemp_Value(&rtb_SumSub_j);

    /* Logic: '<S361>/AND1' incorporates:
     *  Constant: '<S391>/Constant1'
     *  Constant: '<S391>/Constant2'
     *  Constant: '<S392>/Constant1'
     *  Constant: '<S392>/Constant2'
     *  DataStoreRead: '<S391>/StatusByte_LIN1_BusOff'
     *  DataStoreRead: '<S392>/StatusByte_LostCommPwrtrn_OilPmp1'
     *  Inport: '<Root>/VePMIR_T_TransAuxPumpOilTemp'
     *  Inport: '<Root>/VePMIR_b_AuxPumpSpdAct_FA'
     *  Inport: '<Root>/VePMIR_b_TransAuxPumpDryRun_FA'
     *  Inport: '<Root>/VePMIR_b_TransAuxPumpOilTemp_FA'
     *  Logic: '<S361>/AND2'
     *  Logic: '<S361>/AND4'
     *  Logic: '<S391>/Logical Operator'
     *  Logic: '<S392>/Logical Operator'
     *  RelationalOperator: '<S391>/Relational Operator1'
     *  RelationalOperator: '<S391>/Relational Operator2'
     *  RelationalOperator: '<S392>/Relational Operator1'
     *  RelationalOperator: '<S392>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S391>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S391>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S392>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S392>/Bitwise Operator2'
     */
    VeCPDR_b_EOPA_CommON = ((((((sint32)CPDR_ac_DW.StatusByte_LIN1_BusOff) & 1) <=
        0) || ((((uint32)CPDR_ac_DW.StatusByte_LIN1_BusOff) & 64U) != 0U)) &&
                            (((((sint32)
        CPDR_ac_DW.StatusByte_LostCommPwrtrn_OilPmp1) & 1) <= 0) || ((((uint32)
        CPDR_ac_DW.StatusByte_LostCommPwrtrn_OilPmp1) & 64U) != 0U)));

    /* Logic: '<S366>/AND2' incorporates:
     *  Constant: '<S371>/Constant'
     *  Constant: '<S372>/Calib'
     *  RelationalOperator: '<S366>/Comparison1'
     *  RelationalOperator: '<S366>/Comparison2'
     */
    VeCPDR_b_EOPA_DryRun_FltChk = ((((uint32)
        rtb_TmpSignalConversionAtVePMIR_e_TransA) ==
        CeTAPR_e_TAP_FalseTrueSNA_True) &&
        (rtb_TmpSignalConversionAtVePMIR_n_LTActv <
         KeCPDR_n_EOPA_RcvrySpdTgt_UppTh));

    /* Logic: '<S365>/AND1' incorporates:
     *  Constant: '<S368>/Constant'
     *  Constant: '<S369>/Constant'
     *  Constant: '<S370>/Calib'
     *  Logic: '<S365>/AND2'
     *  Logic: '<S365>/AND3'
     *  Logic: '<S365>/AND4'
     *  Logic: '<S365>/AND5'
     *  RelationalOperator: '<S365>/Comparison1'
     *  RelationalOperator: '<S365>/Comparison12'
     *  RelationalOperator: '<S365>/Comparison2'
     */
    VeCPDR_b_EOPA_DryRun_ChkEnbl = ((((((((((uint32)
        rtb_TmpSignalConversionAtVePMTR_e_ThrmlD) != CePMTR_e_DISBL_All_Thrml) &&
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag) && (VeCPDR_b_EOPA_CommON)) &&
        (rtb_SumSub_j > KeCPDR_T_EOPA_MinOilTemp)) &&
        (!rtb_RelationalOperator3_c)) && (!rtb_NOT4_gk)) && (!rtb_Logical1_m4)) &&
        ((VeCPDR_b_EOPA_DryRun_FltChk) || (((uint32)
        rtb_TmpSignalConversionAtVePMIR_e_TransA) ==
        CeTAPR_e_TAP_FalseTrueSNA_False)));

    /* RelationalOperator: '<S376>/Relational Operator3' incorporates:
     *  Constant: '<S376>/Constant3'
     *  DataStoreRead: '<S367>/Data Store Read2'
     *  S-Function (sfix_bitop): '<S376>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_c = ((((uint32)
        CPDR_ac_DW.StatusByte_PwrtrnOilPmp1OvrSpd) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S376>/EdgeFalling1' */
    /* Logic: '<S376>/Logical Operator' incorporates:
     *  Logic: '<S378>/OR1'
     */
    rtb_TmpSignalConversionAtBPCM_LIN_BusOff = !rtb_RelationalOperator3_c;

    /* End of Outputs for SubSystem: '<S376>/EdgeFalling1' */

    /* Logic: '<S376>/Logical1' incorporates:
     *  Constant: '<S375>/Calib'
     *  Constant: '<S376>/Constant1'
     *  DataStoreRead: '<S367>/Data Store Read2'
     *  Logic: '<S376>/Logical Operator'
     *  Logic: '<S376>/Logical10'
     *  Logic: '<S376>/Logical12'
     *  RelationalOperator: '<S376>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S376>/Bitwise Operator3'
     */
    rtb_Logical1_m4 = ((VeCPDR_b_EOPA_DryRun_ChkEnbl) &&
                       ((!KeCPDR_b_PwrtrnOilPmp1OvrSpd_LtchEnbl) || (((((uint32)
                            CPDR_ac_DW.StatusByte_PwrtrnOilPmp1OvrSpd) & 1U) ==
                          0U) || rtb_TmpSignalConversionAtBPCM_LIN_BusOff)));

    /* Logic: '<S363>/NOT4' */
    rtb_NOT4_gk = (rtb_TmpSignalConversionAtDsblDiagFailSaf ||
                   rtb_TmpSignalConversionAtPostCodeClrDiag);

    /* Outputs for Atomic SubSystem: '<S376>/EdgeFalling1' */
    /* Logic: '<S378>/AND' incorporates:
     *  UnitDelay: '<S378>/Unit Delay'
     */
    rtb_TmpSignalConversionAtBPCM_LIN_BusOff =
        (rtb_TmpSignalConversionAtBPCM_LIN_BusOff &&
         (CPDR_ac_DW.UnitDelay_DSTATE_kk));

    /* Update for UnitDelay: '<S378>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_kk = rtb_RelationalOperator3_c;

    /* End of Outputs for SubSystem: '<S376>/EdgeFalling1' */

    /* Logic: '<S376>/Logical5' */
    rtb_RelationalOperator3_c = (rtb_NOT4_gk ||
        rtb_TmpSignalConversionAtBPCM_LIN_BusOff);

    /* Outputs for Atomic SubSystem: '<S377>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S377>/Counter Reset  Enabled ' */
    /* Switch: '<S384>/Switch1' incorporates:
     *  Logic: '<S377>/Fail Counter Reset'
     *  Logic: '<S377>/NOT6'
     *  Switch: '<S384>/Switch2'
     *  Switch: '<S385>/Switch1'
     *  UnitDelay: '<S377>/Unit Delay'
     *  UnitDelay: '<S377>/Unit Delay1'
     */
    if ((rtb_RelationalOperator3_c || (CPDR_ac_DW.UnitDelay_DSTATE_a3)) ||
            (CPDR_ac_DW.UnitDelay1_DSTATE_k))
    {
        /* Switch: '<S384>/Switch1' incorporates:
         *  Constant: '<S384>/Constant Value2'
         */
        VeCPDR_Cnt_EOPA_DryRun_FailCnt = 0U;

        /* Switch: '<S385>/Switch1' incorporates:
         *  Constant: '<S385>/Constant Value2'
         */
        VeCPDR_Cnt_EOPA_DryRun_SmpCnt = 0U;
    }
    else
    {
        if (rtb_Logical1_m4 && (VeCPDR_b_EOPA_DryRun_FltChk))
        {
            /* Switch: '<S384>/Switch1' incorporates:
             *  Constant: '<S384>/Constant Value1'
             *  Sum: '<S384>/Subtraction'
             *  Switch: '<S384>/Switch2'
             *  UnitDelay: '<S384>/Unit Delay'
             */
            VeCPDR_Cnt_EOPA_DryRun_FailCnt = (uint16)(((uint32)
                VeCPDR_Cnt_EOPA_DryRun_FailCnt) + 1U);
        }

        /* Switch: '<S385>/Switch2' */
        if (rtb_Logical1_m4)
        {
            /* Switch: '<S385>/Switch1' incorporates:
             *  Constant: '<S385>/Constant Value1'
             *  Sum: '<S385>/Subtraction'
             *  Switch: '<S385>/Switch2'
             *  UnitDelay: '<S385>/Unit Delay'
             */
            VeCPDR_Cnt_EOPA_DryRun_SmpCnt = (uint16)(((uint32)
                VeCPDR_Cnt_EOPA_DryRun_SmpCnt) + 1U);
        }

        /* End of Switch: '<S385>/Switch2' */
    }

    /* End of Switch: '<S384>/Switch1' */
    /* End of Outputs for SubSystem: '<S377>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S377>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S377>/Greater Than or Equal ' incorporates:
     *  Constant: '<S373>/Calib'
     */
    CPDR_ac_DW.UnitDelay1_DSTATE_k = (((sint32)VeCPDR_Cnt_EOPA_DryRun_FailCnt) >=
        ((sint32)KeCPDR_Cnt_EOPA_DryRunFlt_FailCnt));

    /* Logic: '<S377>/NOT5' incorporates:
     *  Constant: '<S374>/Calib'
     *  Logic: '<S377>/NOT3'
     *  RelationalOperator: '<S377>/Less Than  or Equal'
     */
    rtb_Logical1_m4 = ((((sint32)VeCPDR_Cnt_EOPA_DryRun_SmpCnt) >= ((sint32)
                         KeCPDR_Cnt_EOPA_DryRunFlt_SmpCnt)) &&
                       (!CPDR_ac_DW.UnitDelay1_DSTATE_k));

    /* Switch: '<S390>/Switch1' incorporates:
     *  Constant: '<S383>/Constant Value'
     *  DataStoreWrite: '<S367>/Data Store Write3'
     *  Switch: '<S389>/Switch1'
     */
    if (rtb_TmpSignalConversionAtPostCodeClrDiag)
    {
        CPDR_ac_DW.NeCPDR_Cnt_EOPA_FunDryRun_MFOP = 0U;
    }
    else
    {
        if (rtb_Logical1_m4)
        {
            /* MinMax: '<S383>/Minimum2' incorporates:
             *  DataStoreRead: '<S367>/Data Store Read1'
             *  Switch: '<S389>/Switch1'
             */
            if (VeCPDR_Cnt_EOPA_DryRun_FailCnt >
                    CPDR_ac_DW.NeCPDR_Cnt_EOPA_FunDryRun_MFOP)
            {
                /* DataStoreWrite: '<S367>/Data Store Write3' incorporates:
                 *  Switch: '<S389>/Switch1'
                 */
                CPDR_ac_DW.NeCPDR_Cnt_EOPA_FunDryRun_MFOP =
                    VeCPDR_Cnt_EOPA_DryRun_FailCnt;
            }

            /* End of MinMax: '<S383>/Minimum2' */
        }
    }

    /* End of Switch: '<S390>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S376>/Fail' */
    CPDR_ac_Fail(CPDR_ac_DW.UnitDelay1_DSTATE_k, &CPDR_ac_B.Merge_b);

    /* End of Outputs for SubSystem: '<S376>/Fail' */

    /* Outputs for Enabled SubSystem: '<S376>/Init' */
    CPDR_ac_Init_g(rtb_RelationalOperator3_c, &CPDR_ac_B.Merge_b);

    /* End of Outputs for SubSystem: '<S376>/Init' */

    /* Outputs for Enabled SubSystem: '<S376>/Pass' */
    CPDR_ac_Pass(rtb_Logical1_m4, &CPDR_ac_B.Merge_b);

    /* End of Outputs for SubSystem: '<S376>/Pass' */

    /* RelationalOperator: '<S376>/Relational Operator' incorporates:
     *  Constant: '<S379>/Constant'
     *  Merge: '<S376>/Merge'
     */
    VeCPDR_b_EOPA_DryRun_FltDtct = (((uint32)CPDR_ac_B.Merge_b) == CeDFIB_e_Fail);

    /* Logic: '<S446>/Logical2' incorporates:
     *  Constant: '<S448>/Calib'
     *  Constant: '<S449>/Calib'
     *  RelationalOperator: '<S446>/Comparison4'
     *  RelationalOperator: '<S446>/Comparison5'
     */
    VeCPDR_b_EOPA_VltgInRange = ((rtb_TmpSignalConversionAtBF1_SysVolt_AD_ <=
        KeCPDR_U_EOPA_MaxOprtngVltg) &&
        (rtb_TmpSignalConversionAtBF1_SysVolt_AD_ >= KeCPDR_U_EOPA_MinOprtngVltg));

    /* Logic: '<S442>/AND1' incorporates:
     *  Constant: '<S447>/Constant'
     *  RelationalOperator: '<S442>/Comparison12'
     */
    VeCPDR_b_EOPA_CommonEnblConds = ((((((uint32)
        rtb_TmpSignalConversionAtVePMTR_e_ThrmlD) != CePMTR_e_DISBL_All_Thrml) &&
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag) && (VeCPDR_b_EOPA_VltgInRange))
        && (VeCPDR_b_EOPA_CommON));

    /* Outputs for Atomic SubSystem: '<S443>/DeltaOneStep1' */
    /* Sum: '<S450>/Sum//Sub' incorporates:
     *  UnitDelay: '<S450>/Unit Delay'
     */
    rtb_SumSub_j = rtb_TmpSignalConversionAtVePMPR_n_LT_Act -
        CPDR_ac_DW.UnitDelay_DSTATE_bl;

    /* Update for UnitDelay: '<S450>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_bl = rtb_TmpSignalConversionAtVePMPR_n_LT_Act;

    /* End of Outputs for SubSystem: '<S443>/DeltaOneStep1' */

    /* Sum: '<S423>/Add' incorporates:
     *  Abs: '<S443>/Abs'
     */
    rtb_SumSub_j = fabsf(rtb_SumSub_j);

    /* Outputs for Atomic SubSystem: '<S443>/Timer Retrigger Reset Enabled1' */
    /* Switch: '<S458>/Switch1' incorporates:
     *  Constant: '<S451>/Calib'
     *  Constant: '<S455>/Calib'
     *  Constant: '<S457>/Calib'
     *  Constant: '<S458>/Constant Value4'
     *  MinMax: '<S458>/Maximum'
     *  RelationalOperator: '<S443>/Greater Than or Equal 3'
     *  Sum: '<S458>/Subtraction'
     *  UnitDelay: '<S458>/Unit Delay'
     */
    if (rtb_SumSub_j >= KeCPDR_n_EOPA_PmpPerf_DeltSpdsmall)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_lr = KeCPDR_t_EOPA_PmpPerf_DeltSpd_Small;
    }
    else
    {
        CPDR_ac_DW.UnitDelay_DSTATE_lr = fmaxf(CPDR_ac_DW.UnitDelay_DSTATE_lr -
            HeCPDR_t_MedTEH, 0.0F);
    }

    /* End of Switch: '<S458>/Switch1' */
    /* End of Outputs for SubSystem: '<S443>/Timer Retrigger Reset Enabled1' */

    /* Outputs for Atomic SubSystem: '<S443>/Timer Retrigger Reset Enabled2' */
    /* Switch: '<S459>/Switch1' incorporates:
     *  Constant: '<S451>/Calib'
     *  Constant: '<S454>/Calib'
     *  Constant: '<S456>/Calib'
     *  Constant: '<S459>/Constant Value4'
     *  MinMax: '<S459>/Maximum'
     *  RelationalOperator: '<S443>/Greater Than or Equal 4'
     *  Sum: '<S459>/Subtraction'
     *  UnitDelay: '<S459>/Unit Delay'
     */
    if (rtb_SumSub_j >= KeCPDR_n_EOPA_PmpPerf_DeltSpdbig)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_et = KeCPDR_t_EOPA_PmpPerf_DeltSpd_Big;
    }
    else
    {
        CPDR_ac_DW.UnitDelay_DSTATE_et = fmaxf(CPDR_ac_DW.UnitDelay_DSTATE_et -
            HeCPDR_t_MedTEH, 0.0F);
    }

    /* End of Switch: '<S459>/Switch1' */
    /* End of Outputs for SubSystem: '<S443>/Timer Retrigger Reset Enabled2' */
    (void)Rte_Read_VePMIR_b_AuxPumpSpdAct_SNA_Value(&rtb_AND3_m4);

    /* Outputs for Atomic SubSystem: '<S443>/Timer Retrigger Reset Enabled1' */
    /* Outputs for Atomic SubSystem: '<S443>/Timer Retrigger Reset Enabled2' */
    /* Logic: '<S443>/Logical14' incorporates:
     *  Constant: '<S458>/Constant Value2'
     *  Constant: '<S459>/Constant Value2'
     *  Inport: '<Root>/VePMIR_b_AuxPumpSpdAct_SNA'
     *  Logic: '<S443>/Logical5'
     *  Logic: '<S443>/Logical6'
     *  RelationalOperator: '<S458>/Greater  Than1'
     *  RelationalOperator: '<S459>/Greater  Than1'
     *  UnitDelay: '<S458>/Unit Delay'
     *  UnitDelay: '<S459>/Unit Delay'
     */
    VeCPDR_b_EOPA_PmpPerf_DeltSpdCmdEnbl = ((CPDR_ac_DW.UnitDelay_DSTATE_lr <=
        0.0F) && (CPDR_ac_DW.UnitDelay_DSTATE_et <= 0.0F));

    /* End of Outputs for SubSystem: '<S443>/Timer Retrigger Reset Enabled2' */
    /* End of Outputs for SubSystem: '<S443>/Timer Retrigger Reset Enabled1' */

    /* Logic: '<S443>/AND12' incorporates:
     *  Constant: '<S452>/Calib'
     *  Constant: '<S453>/Calib'
     *  RelationalOperator: '<S443>/Greater Than or Equal 1'
     *  RelationalOperator: '<S443>/Greater Than or Equal 2'
     */
    VeCPDR_b_EOPA_PerfEnblConds = (((rtb_TmpSignalConversionAtVePMPR_n_LT_Act >=
        KeCPDR_n_EOPA_MinCmdSpd) && (rtb_TmpSignalConversionAtVePMPR_n_LT_Act <=
        KeCPDR_n_EOPA_MaxCmdSpd)) && (VeCPDR_b_EOPA_PmpPerf_DeltSpdCmdEnbl));

    /* Logic: '<S422>/AND3' */
    rtb_AND3_m4 = ((VeCPDR_b_EOPA_CommonEnblConds) && rtb_AND3_m4);

    /* Outputs for Atomic SubSystem: '<S444>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S462>/EdgeRising' */
    /* Logic: '<S463>/AND' incorporates:
     *  Logic: '<S463>/OR1'
     *  UnitDelay: '<S463>/Unit Delay'
     */
    rtb_RelationalOperator3_c = (rtb_AND3_m4 &&
        (!CPDR_ac_DW.UnitDelay_DSTATE_c3r));

    /* Update for UnitDelay: '<S463>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_c3r = rtb_AND3_m4;

    /* End of Outputs for SubSystem: '<S462>/EdgeRising' */

    /* Switch: '<S462>/Switch1' incorporates:
     *  Constant: '<S460>/Calib'
     *  Constant: '<S461>/Calib'
     *  Constant: '<S462>/Constant Value1'
     *  Logic: '<S462>/OR'
     *  Logic: '<S462>/OR1'
     *  MinMax: '<S462>/Minimum'
     *  Sum: '<S462>/Summation'
     *  UnitDelay: '<S462>/Unit Delay'
     */
    if ((!rtb_AND3_m4) || rtb_RelationalOperator3_c)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_h = 0.0F;
    }
    else
    {
        CPDR_ac_DW.UnitDelay_DSTATE_h = fminf(KeCPDR_t_EOPA_rpmSNA_WaitTime,
            HeCPDR_t_MedTEH + CPDR_ac_DW.UnitDelay_DSTATE_h);
    }

    /* End of Switch: '<S462>/Switch1' */

    /* Logic: '<S462>/AND' incorporates:
     *  Constant: '<S461>/Calib'
     *  RelationalOperator: '<S462>/Greater  Than'
     *  UnitDelay: '<S462>/Unit Delay'
     */
    VeCPDR_b_EOPA_SpdSNAConfirmed = (rtb_AND3_m4 &&
        (CPDR_ac_DW.UnitDelay_DSTATE_h >= KeCPDR_t_EOPA_rpmSNA_WaitTime));

    /* End of Outputs for SubSystem: '<S444>/Turn On Delay Time' */

    /* Logic: '<S422>/AND1' incorporates:
     *  Constant: '<S445>/Calib'
     *  Logic: '<S422>/AND12'
     *  Logic: '<S422>/AND2'
     */
    VeCPDR_b_EOPA_FunPer_ChkEnbl = (((VeCPDR_b_EOPA_CommonEnblConds) &&
        (VeCPDR_b_EOPA_PerfEnblConds)) || ((KeCPDR_b_EOPA_SpdSNAEnblCndsOV) &&
        (VeCPDR_b_EOPA_SpdSNAConfirmed)));

    /* RelationalOperator: '<S427>/Relational Operator3' incorporates:
     *  Constant: '<S427>/Constant3'
     *  DataStoreRead: '<S421>/Data Store Read'
     *  S-Function (sfix_bitop): '<S427>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_c = ((((uint32)
        CPDR_ac_DW.StatusByte_PwrtrnOilPmp1Perf) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S427>/EdgeFalling1' */
    /* Logic: '<S427>/Logical Operator' incorporates:
     *  Logic: '<S429>/OR1'
     */
    rtb_TmpSignalConversionAtBPCM_LIN_BusOff = !rtb_RelationalOperator3_c;

    /* End of Outputs for SubSystem: '<S427>/EdgeFalling1' */

    /* Logic: '<S427>/Logical1' incorporates:
     *  Constant: '<S426>/Calib'
     *  Constant: '<S427>/Constant1'
     *  DataStoreRead: '<S421>/Data Store Read'
     *  Logic: '<S427>/Logical Operator'
     *  Logic: '<S427>/Logical10'
     *  Logic: '<S427>/Logical12'
     *  RelationalOperator: '<S427>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S427>/Bitwise Operator3'
     */
    rtb_AND3_m4 = ((VeCPDR_b_EOPA_FunPer_ChkEnbl) &&
                   ((!KeCPDR_b_PwrtrnOilPmp1Perf_LtchEnbl) || (((((uint32)
                        CPDR_ac_DW.StatusByte_PwrtrnOilPmp1Perf) & 1U) == 0U) ||
                     rtb_TmpSignalConversionAtBPCM_LIN_BusOff)));

    /* Abs: '<S423>/Abs' incorporates:
     *  Sum: '<S423>/Add'
     */
    VeCPDR_n_EOPA_FunPer_RPM_Error = fabsf
        (rtb_TmpSignalConversionAtVePMPR_n_LT_Act -
         rtb_TmpSignalConversionAtVePMIR_n_LTActv);

    /* Logic: '<S423>/AND18' incorporates:
     *  Constant: '<S464>/Calib'
     *  Constant: '<S465>/Calib'
     *  Logic: '<S423>/AND2'
     *  RelationalOperator: '<S423>/Comparison2'
     */
    VeCPDR_b_EOPA_FunPer_FltChk = ((VeCPDR_n_EOPA_FunPer_RPM_Error >
        KeCPDR_n_EOPA_FunPer_DesRPM) || ((VeCPDR_b_EOPA_SpdSNAConfirmed) &&
        (KeCPDR_b_EOPA_SpdSNAFault_En)));

    /* Outputs for Atomic SubSystem: '<S427>/EdgeFalling1' */
    /* Logic: '<S429>/AND' incorporates:
     *  UnitDelay: '<S429>/Unit Delay'
     */
    rtb_TmpSignalConversionAtBPCM_LIN_BusOff =
        (rtb_TmpSignalConversionAtBPCM_LIN_BusOff &&
         (CPDR_ac_DW.UnitDelay_DSTATE_ji));

    /* Update for UnitDelay: '<S429>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_ji = rtb_RelationalOperator3_c;

    /* End of Outputs for SubSystem: '<S427>/EdgeFalling1' */

    /* Logic: '<S427>/Logical5' */
    rtb_NOT4_gk = (rtb_NOT4_gk || rtb_TmpSignalConversionAtBPCM_LIN_BusOff);

    /* UnitDelay: '<S428>/Unit Delay1' incorporates:
     *  UnitDelay: '<S377>/Unit Delay'
     */
    CPDR_ac_DW.UnitDelay_DSTATE_a3 = CPDR_ac_DW.UnitDelay1_DSTATE_e;

    /* Outputs for Atomic SubSystem: '<S428>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S428>/Counter Reset  Enabled ' */
    /* Switch: '<S435>/Switch1' incorporates:
     *  Logic: '<S428>/Fail Counter Reset'
     *  Logic: '<S428>/NOT6'
     *  Switch: '<S435>/Switch2'
     *  Switch: '<S436>/Switch1'
     *  UnitDelay: '<S377>/Unit Delay'
     *  UnitDelay: '<S428>/Unit Delay'
     */
    if ((rtb_NOT4_gk || (CPDR_ac_DW.UnitDelay_DSTATE_ew)) ||
            (CPDR_ac_DW.UnitDelay_DSTATE_a3))
    {
        /* Switch: '<S435>/Switch1' incorporates:
         *  Constant: '<S435>/Constant Value2'
         */
        VeCPDR_Cnt_EOPA_Perf_FailCnt = 0U;

        /* Switch: '<S436>/Switch1' incorporates:
         *  Constant: '<S436>/Constant Value2'
         */
        VeCPDR_Cnt_EOPA_Perf_SmpCnt = 0U;
    }
    else
    {
        if (rtb_AND3_m4 && (VeCPDR_b_EOPA_FunPer_FltChk))
        {
            /* Switch: '<S435>/Switch1' incorporates:
             *  Constant: '<S435>/Constant Value1'
             *  Sum: '<S435>/Subtraction'
             *  Switch: '<S435>/Switch2'
             *  UnitDelay: '<S435>/Unit Delay'
             */
            VeCPDR_Cnt_EOPA_Perf_FailCnt = (uint16)(((uint32)
                VeCPDR_Cnt_EOPA_Perf_FailCnt) + 1U);
        }

        /* Switch: '<S436>/Switch2' */
        if (rtb_AND3_m4)
        {
            /* Switch: '<S436>/Switch1' incorporates:
             *  Constant: '<S436>/Constant Value1'
             *  Sum: '<S436>/Subtraction'
             *  Switch: '<S436>/Switch2'
             *  UnitDelay: '<S436>/Unit Delay'
             */
            VeCPDR_Cnt_EOPA_Perf_SmpCnt = (uint16)(((uint32)
                VeCPDR_Cnt_EOPA_Perf_SmpCnt) + 1U);
        }

        /* End of Switch: '<S436>/Switch2' */
    }

    /* End of Switch: '<S435>/Switch1' */
    /* End of Outputs for SubSystem: '<S428>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S428>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S428>/Greater Than or Equal ' incorporates:
     *  Constant: '<S424>/Calib'
     */
    CPDR_ac_DW.UnitDelay1_DSTATE_e = (((sint32)VeCPDR_Cnt_EOPA_Perf_FailCnt) >=
        ((sint32)KeCPDR_Cnt_EOPA_FunPer_FailCnt));

    /* Logic: '<S428>/NOT5' incorporates:
     *  Constant: '<S425>/Calib'
     *  Logic: '<S428>/NOT3'
     *  RelationalOperator: '<S428>/Less Than  or Equal'
     */
    CPDR_ac_DW.UnitDelay_DSTATE_ew = ((((sint32)VeCPDR_Cnt_EOPA_Perf_SmpCnt) >=
        ((sint32)KeCPDR_Cnt_EOPA_FunPer_SmpCnt)) &&
        (!CPDR_ac_DW.UnitDelay1_DSTATE_e));

    /* Switch: '<S441>/Switch1' incorporates:
     *  Constant: '<S434>/Constant Value'
     *  DataStoreWrite: '<S421>/Data Store Write3'
     *  Switch: '<S440>/Switch1'
     */
    if (rtb_TmpSignalConversionAtPostCodeClrDiag)
    {
        CPDR_ac_DW.NeCPDR_Cnt_EOPA_FunPer_MFOP = 0U;
    }
    else
    {
        if (CPDR_ac_DW.UnitDelay_DSTATE_ew)
        {
            /* MinMax: '<S434>/Minimum2' incorporates:
             *  DataStoreRead: '<S421>/Data Store Read1'
             *  Switch: '<S440>/Switch1'
             */
            if (VeCPDR_Cnt_EOPA_Perf_FailCnt >
                    CPDR_ac_DW.NeCPDR_Cnt_EOPA_FunPer_MFOP)
            {
                /* DataStoreWrite: '<S421>/Data Store Write3' incorporates:
                 *  Switch: '<S440>/Switch1'
                 */
                CPDR_ac_DW.NeCPDR_Cnt_EOPA_FunPer_MFOP =
                    VeCPDR_Cnt_EOPA_Perf_FailCnt;
            }

            /* End of MinMax: '<S434>/Minimum2' */
        }
    }

    /* End of Switch: '<S441>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S427>/Fail' */
    CPDR_ac_Fail(CPDR_ac_DW.UnitDelay1_DSTATE_e, &CPDR_ac_B.Merge_g);

    /* End of Outputs for SubSystem: '<S427>/Fail' */

    /* Outputs for Enabled SubSystem: '<S427>/Init' */
    CPDR_ac_Init_g(rtb_NOT4_gk, &CPDR_ac_B.Merge_g);

    /* End of Outputs for SubSystem: '<S427>/Init' */

    /* Outputs for Enabled SubSystem: '<S427>/Pass' */
    CPDR_ac_Pass(CPDR_ac_DW.UnitDelay_DSTATE_ew, &CPDR_ac_B.Merge_g);

    /* End of Outputs for SubSystem: '<S427>/Pass' */

    /* RelationalOperator: '<S427>/Relational Operator' incorporates:
     *  Constant: '<S430>/Constant'
     *  Merge: '<S427>/Merge'
     */
    VeCPDR_b_EOPA_FunPer_FltDtct = (((uint32)CPDR_ac_B.Merge_g) == CeDFIB_e_Fail);

    /* RelationalOperator: '<S394>/Comparison2' incorporates:
     *  Constant: '<S405>/Calib'
     */
    rtb_RelationalOperator3_c = (rtb_TmpSignalConversionAtVePMPR_n_LT_Act <
        KeCPDR_n_EOPA_MinCmdThrshld);

    /* Logic: '<S394>/Logical1' */
    rtb_AND3_m4 = !rtb_TmpSignalConversionAtPropSysActv_AD_;

    /* Outputs for Atomic SubSystem: '<S394>/Stop Watch Reset Enabled2' */
    /* Switch: '<S407>/Switch1' incorporates:
     *  Constant: '<S407>/Constant Value2'
     *  Logic: '<S394>/Logical3'
     *  UnitDelay: '<S407>/Unit Delay'
     */
    if (rtb_RelationalOperator3_c || rtb_AND3_m4)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_p = 0.0F;
    }
    else
    {
        /* UnitDelay: '<S407>/Unit Delay' incorporates:
         *  Constant: '<S394>/Constant Value1'
         *  Sum: '<S407>/Subtraction'
         *  Switch: '<S407>/Switch2'
         */
        CPDR_ac_DW.UnitDelay_DSTATE_p += 0.1F;
    }

    /* End of Switch: '<S407>/Switch1' */
    /* End of Outputs for SubSystem: '<S394>/Stop Watch Reset Enabled2' */

    /* RelationalOperator: '<S404>/Comparison1' incorporates:
     *  Constant: '<S411>/Calib'
     *  UnitDelay: '<S407>/Unit Delay'
     */
    rtb_NOT4_gk = (CPDR_ac_DW.UnitDelay_DSTATE_p >
                   KeCPDR_t_IUMPR_LTAP_MinConsecTime_CmdOn);

    /* Outputs for Atomic SubSystem: '<S394>/Stop Watch Reset Enabled3' */
    /* Switch: '<S408>/Switch1' incorporates:
     *  Constant: '<S408>/Constant Value2'
     *  Logic: '<S394>/Logical4'
     *  Switch: '<S408>/Switch2'
     *  UnitDelay: '<S408>/Unit Delay'
     */
    if (rtb_AND3_m4)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_i4 = 0.0F;
    }
    else
    {
        if (!rtb_RelationalOperator3_c)
        {
            /* UnitDelay: '<S408>/Unit Delay' incorporates:
             *  Constant: '<S394>/Constant Value2'
             *  Sum: '<S408>/Subtraction'
             *  Switch: '<S408>/Switch2'
             */
            CPDR_ac_DW.UnitDelay_DSTATE_i4 += 0.1F;
        }
    }

    /* End of Switch: '<S408>/Switch1' */
    /* End of Outputs for SubSystem: '<S394>/Stop Watch Reset Enabled3' */

    /* Outputs for Atomic SubSystem: '<S404>/EdgeRising' */
    /* Logic: '<S409>/OR1' incorporates:
     *  UnitDelay: '<S409>/Unit Delay'
     */
    rtb_RelationalOperator3_c = !CPDR_ac_DW.UnitDelay_DSTATE_d5d;

    /* Update for UnitDelay: '<S409>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_d5d = rtb_NOT4_gk;

    /* End of Outputs for SubSystem: '<S404>/EdgeRising' */

    /* Switch: '<S404>/Switch' incorporates:
     *  Constant: '<S404>/Constant Value5'
     *  Logic: '<S409>/AND'
     *  Sum: '<S404>/Sum'
     *  UnitDelay: '<S404>/Unit Delay'
     */
    if (rtb_AND3_m4)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_es = 0.0F;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S404>/EdgeRising' */
        CPDR_ac_DW.UnitDelay_DSTATE_es += (float32)((rtb_NOT4_gk &&
            rtb_RelationalOperator3_c) ? 1 : 0);

        /* End of Outputs for SubSystem: '<S404>/EdgeRising' */
    }

    /* End of Switch: '<S404>/Switch' */

    /* Outputs for Atomic SubSystem: '<S394>/Signal Latch On With Reset' */
    /* Logic: '<S406>/OR1' incorporates:
     *  Constant: '<S410>/Calib'
     *  Constant: '<S412>/Calib'
     *  Logic: '<S404>/Logical4'
     *  Logic: '<S406>/NOT'
     *  Logic: '<S406>/OR'
     *  RelationalOperator: '<S404>/Comparison2'
     *  RelationalOperator: '<S404>/Comparison4'
     *  UnitDelay: '<S404>/Unit Delay'
     *  UnitDelay: '<S406>/Unit Delay'
     *  UnitDelay: '<S408>/Unit Delay'
     */
    CPDR_ac_DW.UnitDelay_DSTATE_ht = (((CPDR_ac_DW.UnitDelay_DSTATE_i4 >=
        KeCPDR_t_IUMPR_LTAP_MinCumlTime_CmdOn) ||
        (CPDR_ac_DW.UnitDelay_DSTATE_es >=
         KeCPDR_Cnt_IUMPR_LTAP_MinConsecCnt_CmdOn)) || ((!rtb_AND3_m4) &&
        (CPDR_ac_DW.UnitDelay_DSTATE_ht)));

    /* End of Outputs for SubSystem: '<S394>/Signal Latch On With Reset' */

    /* Outport: '<Root>/VeCPDR_b_IUMPR_EOPA_FunPerf' incorporates:
     *  Constant: '<S413>/Constant1'
     *  Constant: '<S413>/Constant2'
     *  Constant: '<S414>/Constant1'
     *  Constant: '<S414>/Constant2'
     *  Constant: '<S415>/Constant1'
     *  Constant: '<S415>/Constant2'
     *  Constant: '<S416>/Constant1'
     *  Constant: '<S416>/Constant2'
     *  Constant: '<S417>/Calib'
     *  Constant: '<S418>/Calib'
     *  Constant: '<S419>/Calib'
     *  Constant: '<S420>/Calib'
     *  DataStoreRead: '<S413>/StatusByte_LIN1_BusOff'
     *  DataStoreRead: '<S414>/StatusByte_LostCommPwrtrn_OilPmp1'
     *  DataStoreRead: '<S415>/StatusByte_PwrtrnOilPmp1OvrSpd'
     *  DataStoreRead: '<S416>/StatusByte_PwrtrnOilPmp1Perf'
     *  Logic: '<S395>/Logical1'
     *  Logic: '<S395>/Logical3'
     *  Logic: '<S395>/Logical4'
     *  Logic: '<S395>/Logical5'
     *  Logic: '<S395>/Logical6'
     *  Logic: '<S413>/Logical Operator'
     *  Logic: '<S414>/Logical Operator'
     *  Logic: '<S415>/Logical Operator'
     *  Logic: '<S416>/Logical Operator'
     *  RelationalOperator: '<S413>/Relational Operator1'
     *  RelationalOperator: '<S413>/Relational Operator2'
     *  RelationalOperator: '<S414>/Relational Operator1'
     *  RelationalOperator: '<S414>/Relational Operator2'
     *  RelationalOperator: '<S415>/Relational Operator1'
     *  RelationalOperator: '<S415>/Relational Operator2'
     *  RelationalOperator: '<S416>/Relational Operator1'
     *  RelationalOperator: '<S416>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S413>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S413>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S414>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S414>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S415>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S415>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S416>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S416>/Bitwise Operator2'
     */
    (void)Rte_Write_VeCPDR_b_IUMPR_EOPA_FunPerf_Value(((((((((sint32)
        CPDR_ac_DW.StatusByte_LIN1_BusOff) & 1) > 0) && ((((uint32)
        CPDR_ac_DW.StatusByte_LIN1_BusOff) & 64U) == 0U)) &&
        (KeCPDR_b_IUMPR_EOPA_Perf_LINBus1_ChkEnbl)) || ((((((sint32)
        CPDR_ac_DW.StatusByte_LostCommPwrtrn_OilPmp1) & 1) > 0) && ((((uint32)
        CPDR_ac_DW.StatusByte_LostCommPwrtrn_OilPmp1) & 64U) == 0U)) &&
        (KeCPDR_b_IUMPR_EOPA_Perf_LOC_ChkEnbl))) || ((((((sint32)
        CPDR_ac_DW.StatusByte_PwrtrnOilPmp1Perf) & 1) > 0) && ((((uint32)
        CPDR_ac_DW.StatusByte_PwrtrnOilPmp1Perf) & 64U) == 0U)) &&
        (KeCPDR_b_IUMPR_EOPA_Perf_EOPAPerf_ChkEnbl))) || ((((((sint32)
        CPDR_ac_DW.StatusByte_PwrtrnOilPmp1OvrSpd) & 1) > 0) && ((((uint32)
        CPDR_ac_DW.StatusByte_PwrtrnOilPmp1OvrSpd) & 64U) == 0U)) &&
        (KeCPDR_b_IUMPR_EOPA_Perf_EOPADryRun_ChkEnbl)));

    /* Outport: '<Root>/VeCPDR_b_IUMPR_EOPA_DryRun' incorporates:
     *  Constant: '<S396>/Constant1'
     *  Constant: '<S396>/Constant2'
     *  Constant: '<S397>/Constant1'
     *  Constant: '<S397>/Constant2'
     *  Constant: '<S398>/Constant1'
     *  Constant: '<S398>/Constant2'
     *  Constant: '<S399>/Constant1'
     *  Constant: '<S399>/Constant2'
     *  Constant: '<S400>/Calib'
     *  Constant: '<S401>/Calib'
     *  Constant: '<S402>/Calib'
     *  Constant: '<S403>/Calib'
     *  DataStoreRead: '<S396>/StatusByte_LIN1_BusOff'
     *  DataStoreRead: '<S397>/StatusByte_LostCommPwrtrn_OilPmp1'
     *  DataStoreRead: '<S398>/StatusByte_PwrtrnOilPmp1OvrSpd'
     *  DataStoreRead: '<S399>/StatusByte_PwrtrnOilPmp1Perf'
     *  Logic: '<S393>/Logical1'
     *  Logic: '<S393>/Logical2'
     *  Logic: '<S393>/Logical3'
     *  Logic: '<S393>/Logical7'
     *  Logic: '<S393>/Logical8'
     *  Logic: '<S396>/Logical Operator'
     *  Logic: '<S397>/Logical Operator'
     *  Logic: '<S398>/Logical Operator'
     *  Logic: '<S399>/Logical Operator'
     *  RelationalOperator: '<S396>/Relational Operator1'
     *  RelationalOperator: '<S396>/Relational Operator2'
     *  RelationalOperator: '<S397>/Relational Operator1'
     *  RelationalOperator: '<S397>/Relational Operator2'
     *  RelationalOperator: '<S398>/Relational Operator1'
     *  RelationalOperator: '<S398>/Relational Operator2'
     *  RelationalOperator: '<S399>/Relational Operator1'
     *  RelationalOperator: '<S399>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S396>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S396>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S397>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S397>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S398>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S398>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S399>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S399>/Bitwise Operator2'
     */
    (void)Rte_Write_VeCPDR_b_IUMPR_EOPA_DryRun_Value(((((((((sint32)
        CPDR_ac_DW.StatusByte_LIN1_BusOff) & 1) > 0) && ((((uint32)
        CPDR_ac_DW.StatusByte_LIN1_BusOff) & 64U) == 0U)) &&
        (KeCPDR_b_IUMPR_EOPA_DryRun_LINBus1_ChkEnbl)) || ((((((sint32)
        CPDR_ac_DW.StatusByte_LostCommPwrtrn_OilPmp1) & 1) > 0) && ((((uint32)
        CPDR_ac_DW.StatusByte_LostCommPwrtrn_OilPmp1) & 64U) == 0U)) &&
        (KeCPDR_b_IUMPR_EOPA_DryRun_LOC_ChkEnbl))) || ((((((sint32)
        CPDR_ac_DW.StatusByte_PwrtrnOilPmp1Perf) & 1) > 0) && ((((uint32)
        CPDR_ac_DW.StatusByte_PwrtrnOilPmp1Perf) & 64U) == 0U)) &&
        (KeCPDR_b_IUMPR_EOPA_DryRun_EOPAPerf_ChkEnbl))) || ((((((sint32)
        CPDR_ac_DW.StatusByte_PwrtrnOilPmp1OvrSpd) & 1) > 0) && ((((uint32)
        CPDR_ac_DW.StatusByte_PwrtrnOilPmp1OvrSpd) & 64U) == 0U)) &&
        (KeCPDR_b_IUMPR_EOPA_DryRun_EOPADryRun_ChkEnbl)));

    /* Update for UnitDelay: '<S377>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_a3 = rtb_Logical1_m4;

    /* End of Outputs for SubSystem: '<S358>/EOPA_Diagnostics_FUNC' */
#endif

    /* End of SignalConversion generated from: '<S2>/TransAuxPmp_Cmd_AD_Read' */
    /* End of Outputs for SubSystem: '<S172>/EOPA_Diagnostics' */

    /* Outputs for Atomic SubSystem: '<S173>/EOPB_Diagnostics' */
    /* SignalConversion generated from: '<S2>/VeTAPR_n_TransAuxPmp2_Cmd' incorporates:
     *  Inport: '<Root>/VePMIR_T_TransAuxPump2OilTemp'
     *  Inport: '<Root>/VePMIR_b_TransAuxPump2DryRun_FA'
     *  Inport: '<Root>/VePMIR_b_TransAuxPump2OilTemp_FA'
     *  Inport: '<Root>/VePMIR_b_TransAuxPump2SpdAct_FA'
     *  Inport: '<Root>/VePMIR_b_TransAuxPump2SpdAct_SNA'
     *  SignalConversion generated from: '<S2>/VePMIR_e_TransAuxPump2DryRun'
     *  SignalConversion generated from: '<S2>/VePMIR_n_TransAuxPump2SpdAct'
     */
#if Rte_SysCon_Variant_CPDR_8

    /* Outputs for Atomic SubSystem: '<S466>/EOPB_Diagnostics_FUNC' */
    /* SignalConversion generated from: '<S2>/VeTAPR_n_TransAuxPmp2_Cmd' incorporates:
     *  Inport: '<Root>/VeTAPR_n_TransAuxPmp2_Cmd'
     */
    (void)Rte_Read_VeTAPR_n_TransAuxPmp2_Cmd_Value
        (&rtb_TmpSignalConversionAtVeTAPR_n_TransA);

    /* SignalConversion generated from: '<S2>/VePMIR_n_TransAuxPump2SpdAct' incorporates:
     *  Inport: '<Root>/VePMIR_n_TransAuxPump2SpdAct'
     */
    (void)Rte_Read_VePMIR_n_TransAuxPump2SpdAct_Value
        (&rtb_TmpSignalConversionAtVePMIR_n_TransA);

    /* SignalConversion generated from: '<S2>/VePMIR_e_TransAuxPump2DryRun' incorporates:
     *  Inport: '<Root>/VePMIR_e_TransAuxPump2DryRun'
     */
    (void)Rte_Read_VePMIR_e_TransAuxPump2DryRun_Value
        (&rtb_TmpSignalConversionAtVePMIR_e_Tran_f);
    (void)Rte_Read_VePMIR_b_TransAuxPump2SpdAct_FA_Value(&rtb_Logical1_h);
    (void)Rte_Read_VePMIR_b_TransAuxPump2DryRun_FA_Value(&rtb_NOT4_h);
    (void)Rte_Read_VePMIR_b_TransAuxPump2OilTemp_FA_Value
        (&rtb_RelationalOperator3_g);
    (void)Rte_Read_VePMIR_T_TransAuxPump2OilTemp_Value(&rtb_SumSub_i);

    /* Logic: '<S469>/AND1' incorporates:
     *  Constant: '<S499>/Constant1'
     *  Constant: '<S499>/Constant2'
     *  Constant: '<S500>/Constant1'
     *  Constant: '<S500>/Constant2'
     *  DataStoreRead: '<S499>/StatusByte_LIN3_BusOff'
     *  DataStoreRead: '<S500>/StatusByte_LostCommPwrtrn_OilPmp2'
     *  Inport: '<Root>/VePMIR_T_TransAuxPump2OilTemp'
     *  Inport: '<Root>/VePMIR_b_TransAuxPump2DryRun_FA'
     *  Inport: '<Root>/VePMIR_b_TransAuxPump2OilTemp_FA'
     *  Inport: '<Root>/VePMIR_b_TransAuxPump2SpdAct_FA'
     *  Logic: '<S469>/AND2'
     *  Logic: '<S469>/AND4'
     *  Logic: '<S499>/Logical Operator'
     *  Logic: '<S500>/Logical Operator'
     *  RelationalOperator: '<S499>/Relational Operator1'
     *  RelationalOperator: '<S499>/Relational Operator2'
     *  RelationalOperator: '<S500>/Relational Operator1'
     *  RelationalOperator: '<S500>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S499>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S499>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S500>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S500>/Bitwise Operator2'
     */
    VeCPDR_b_EOPB_CommON = ((((((sint32)CPDR_ac_DW.StatusByte_LIN3_BusOff) & 1) <=
        0) || ((((uint32)CPDR_ac_DW.StatusByte_LIN3_BusOff) & 64U) != 0U)) &&
                            (((((sint32)
        CPDR_ac_DW.StatusByte_LostCommPwrtrn_OilPmp2) & 1) <= 0) || ((((uint32)
        CPDR_ac_DW.StatusByte_LostCommPwrtrn_OilPmp2) & 64U) != 0U)));

    /* Logic: '<S474>/AND2' incorporates:
     *  Constant: '<S479>/Constant'
     *  Constant: '<S480>/Calib'
     *  RelationalOperator: '<S474>/Comparison1'
     *  RelationalOperator: '<S474>/Comparison2'
     *  SignalConversion generated from: '<S2>/VePMIR_e_TransAuxPump2DryRun'
     */
    VeCPDR_b_EOPB_DryRun_FltChk = ((((uint32)
        rtb_TmpSignalConversionAtVePMIR_e_Tran_f) ==
        CeTAPR_e_TAP_FalseTrueSNA_True) &&
        (rtb_TmpSignalConversionAtVePMIR_n_TransA <
         KeCPDR_n_EOPB_RcvrySpdTgt_UppTh));

    /* Logic: '<S473>/AND1' incorporates:
     *  Constant: '<S476>/Constant'
     *  Constant: '<S477>/Constant'
     *  Constant: '<S478>/Calib'
     *  Logic: '<S473>/AND2'
     *  Logic: '<S473>/AND3'
     *  Logic: '<S473>/AND4'
     *  Logic: '<S473>/AND5'
     *  RelationalOperator: '<S473>/Comparison1'
     *  RelationalOperator: '<S473>/Comparison12'
     *  RelationalOperator: '<S473>/Comparison2'
     *  RelationalOperator: '<S474>/Comparison1'
     *  SignalConversion generated from: '<S2>/VePMIR_e_TransAuxPump2DryRun'
     */
    VeCPDR_b_EOPB_DryRun_ChkEnbl = ((((((((((uint32)
        rtb_TmpSignalConversionAtVePMTR_e_ThrmlD) != CePMTR_e_DISBL_All_Thrml) &&
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag) && (VeCPDR_b_EOPB_CommON)) &&
        (rtb_SumSub_i > KeCPDR_T_EOPB_MinOilTemp)) &&
        (!rtb_RelationalOperator3_g)) && (!rtb_NOT4_h)) && (!rtb_Logical1_h)) &&
        ((VeCPDR_b_EOPB_DryRun_FltChk) || (((uint32)
        rtb_TmpSignalConversionAtVePMIR_e_Tran_f) ==
        CeTAPR_e_TAP_FalseTrueSNA_False)));

    /* RelationalOperator: '<S484>/Relational Operator3' incorporates:
     *  Constant: '<S484>/Constant3'
     *  DataStoreRead: '<S475>/Data Store Read2'
     *  S-Function (sfix_bitop): '<S484>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_g = ((((uint32)
        CPDR_ac_DW.StatusByte_PwrtrnOilPmp2OvrSpd) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S484>/EdgeFalling1' */
    /* Logic: '<S484>/Logical Operator' incorporates:
     *  Logic: '<S486>/OR1'
     */
    rtb_AND3_m4 = !rtb_RelationalOperator3_g;

    /* End of Outputs for SubSystem: '<S484>/EdgeFalling1' */

    /* Logic: '<S484>/Logical1' incorporates:
     *  Constant: '<S483>/Calib'
     *  Constant: '<S484>/Constant1'
     *  DataStoreRead: '<S475>/Data Store Read2'
     *  Logic: '<S484>/Logical Operator'
     *  Logic: '<S484>/Logical10'
     *  Logic: '<S484>/Logical12'
     *  RelationalOperator: '<S484>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S484>/Bitwise Operator3'
     */
    rtb_Logical1_h = ((VeCPDR_b_EOPB_DryRun_ChkEnbl) &&
                      ((!KeCPDR_b_PwrtrnOilPmp2OvrSpd_LtchEnbl) || (((((uint32)
                           CPDR_ac_DW.StatusByte_PwrtrnOilPmp2OvrSpd) & 1U) ==
                         0U) || rtb_AND3_m4)));

    /* Logic: '<S471>/NOT4' */
    rtb_NOT4_h = (rtb_TmpSignalConversionAtDsblDiagFailSaf ||
                  rtb_TmpSignalConversionAtPostCodeClrDiag);

    /* Outputs for Atomic SubSystem: '<S484>/EdgeFalling1' */
    /* Logic: '<S486>/AND' incorporates:
     *  UnitDelay: '<S486>/Unit Delay'
     */
    rtb_AND3_m4 = (rtb_AND3_m4 && (CPDR_ac_DW.UnitDelay_DSTATE_i5));

    /* Update for UnitDelay: '<S486>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_i5 = rtb_RelationalOperator3_g;

    /* End of Outputs for SubSystem: '<S484>/EdgeFalling1' */

    /* Logic: '<S484>/Logical5' */
    rtb_RelationalOperator3_g = (rtb_NOT4_h || rtb_AND3_m4);

    /* Outputs for Atomic SubSystem: '<S485>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S485>/Counter Reset  Enabled ' */
    /* Switch: '<S492>/Switch1' incorporates:
     *  Logic: '<S485>/Fail Counter Reset'
     *  Logic: '<S485>/NOT6'
     *  Switch: '<S492>/Switch2'
     *  Switch: '<S493>/Switch1'
     *  UnitDelay: '<S485>/Unit Delay'
     *  UnitDelay: '<S485>/Unit Delay1'
     */
    if ((rtb_RelationalOperator3_g || (CPDR_ac_DW.UnitDelay_DSTATE_geyw)) ||
            (CPDR_ac_DW.UnitDelay1_DSTATE_p))
    {
        /* Switch: '<S492>/Switch1' incorporates:
         *  Constant: '<S492>/Constant Value2'
         */
        VeCPDR_Cnt_EOPB_DryRun_FailCnt = 0U;

        /* Switch: '<S493>/Switch1' incorporates:
         *  Constant: '<S493>/Constant Value2'
         */
        VeCPDR_Cnt_EOPB_DryRun_SmpCnt = 0U;
    }
    else
    {
        if (rtb_Logical1_h && (VeCPDR_b_EOPB_DryRun_FltChk))
        {
            /* Switch: '<S492>/Switch1' incorporates:
             *  Constant: '<S492>/Constant Value1'
             *  Sum: '<S492>/Subtraction'
             *  Switch: '<S492>/Switch2'
             *  UnitDelay: '<S492>/Unit Delay'
             */
            VeCPDR_Cnt_EOPB_DryRun_FailCnt = (uint16)(((uint32)
                VeCPDR_Cnt_EOPB_DryRun_FailCnt) + 1U);
        }

        /* Switch: '<S493>/Switch2' */
        if (rtb_Logical1_h)
        {
            /* Switch: '<S493>/Switch1' incorporates:
             *  Constant: '<S493>/Constant Value1'
             *  Sum: '<S493>/Subtraction'
             *  Switch: '<S493>/Switch2'
             *  UnitDelay: '<S493>/Unit Delay'
             */
            VeCPDR_Cnt_EOPB_DryRun_SmpCnt = (uint16)(((uint32)
                VeCPDR_Cnt_EOPB_DryRun_SmpCnt) + 1U);
        }

        /* End of Switch: '<S493>/Switch2' */
    }

    /* End of Switch: '<S492>/Switch1' */
    /* End of Outputs for SubSystem: '<S485>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S485>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S485>/Greater Than or Equal ' incorporates:
     *  Constant: '<S481>/Calib'
     */
    CPDR_ac_DW.UnitDelay1_DSTATE_p = (((sint32)VeCPDR_Cnt_EOPB_DryRun_FailCnt) >=
        ((sint32)KeCPDR_Cnt_EOPB_DryRunFlt_FailCnt));

    /* Logic: '<S485>/NOT5' incorporates:
     *  Constant: '<S482>/Calib'
     *  Logic: '<S485>/NOT3'
     *  RelationalOperator: '<S485>/Less Than  or Equal'
     */
    rtb_Logical1_h = ((((sint32)VeCPDR_Cnt_EOPB_DryRun_SmpCnt) >= ((sint32)
                        KeCPDR_Cnt_EOPB_DryRunFlt_SmpCnt)) &&
                      (!CPDR_ac_DW.UnitDelay1_DSTATE_p));

    /* Switch: '<S498>/Switch1' incorporates:
     *  Constant: '<S491>/Constant Value'
     *  DataStoreWrite: '<S475>/Data Store Write3'
     *  Switch: '<S497>/Switch1'
     */
    if (rtb_TmpSignalConversionAtPostCodeClrDiag)
    {
        CPDR_ac_DW.NeCPDR_Cnt_EOPB_FunDryRun_MFOP = 0U;
    }
    else
    {
        if (rtb_Logical1_h)
        {
            /* MinMax: '<S491>/Minimum2' incorporates:
             *  DataStoreRead: '<S475>/Data Store Read1'
             *  Switch: '<S497>/Switch1'
             */
            if (VeCPDR_Cnt_EOPB_DryRun_FailCnt >
                    CPDR_ac_DW.NeCPDR_Cnt_EOPB_FunDryRun_MFOP)
            {
                /* DataStoreWrite: '<S475>/Data Store Write3' incorporates:
                 *  Switch: '<S497>/Switch1'
                 */
                CPDR_ac_DW.NeCPDR_Cnt_EOPB_FunDryRun_MFOP =
                    VeCPDR_Cnt_EOPB_DryRun_FailCnt;
            }

            /* End of MinMax: '<S491>/Minimum2' */
        }
    }

    /* End of Switch: '<S498>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S484>/Fail' */
    CPDR_ac_Fail(CPDR_ac_DW.UnitDelay1_DSTATE_p, &CPDR_ac_B.Merge_f);

    /* End of Outputs for SubSystem: '<S484>/Fail' */

    /* Outputs for Enabled SubSystem: '<S484>/Init' */
    CPDR_ac_Init_g(rtb_RelationalOperator3_g, &CPDR_ac_B.Merge_f);

    /* End of Outputs for SubSystem: '<S484>/Init' */

    /* Outputs for Enabled SubSystem: '<S484>/Pass' */
    CPDR_ac_Pass(rtb_Logical1_h, &CPDR_ac_B.Merge_f);

    /* End of Outputs for SubSystem: '<S484>/Pass' */

    /* RelationalOperator: '<S484>/Relational Operator' incorporates:
     *  Constant: '<S487>/Constant'
     *  Merge: '<S484>/Merge'
     */
    VeCPDR_b_EOPB_DryRun_FltDtct = (((uint32)CPDR_ac_B.Merge_f) == CeDFIB_e_Fail);

    /* Logic: '<S554>/Logical2' incorporates:
     *  Constant: '<S556>/Calib'
     *  Constant: '<S557>/Calib'
     *  RelationalOperator: '<S554>/Comparison4'
     *  RelationalOperator: '<S554>/Comparison5'
     */
    VeCPDR_b_EOPB_VltgInRange = ((rtb_TmpSignalConversionAtBF1_SysVolt_AD_ <=
        KeCPDR_U_EOPB_MaxOprtngVltg) &&
        (rtb_TmpSignalConversionAtBF1_SysVolt_AD_ >= KeCPDR_U_EOPB_MinOprtngVltg));

    /* Logic: '<S550>/AND1' incorporates:
     *  Constant: '<S555>/Constant'
     *  RelationalOperator: '<S550>/Comparison12'
     */
    VeCPDR_b_EOPB_CommonEnblConds = ((((((uint32)
        rtb_TmpSignalConversionAtVePMTR_e_ThrmlD) != CePMTR_e_DISBL_All_Thrml) &&
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag) && (VeCPDR_b_EOPB_VltgInRange))
        && (VeCPDR_b_EOPB_CommON));

    /* Outputs for Atomic SubSystem: '<S551>/DeltaOneStep1' */
    /* Sum: '<S558>/Sum//Sub' incorporates:
     *  UnitDelay: '<S558>/Unit Delay'
     */
    rtb_SumSub_i = rtb_TmpSignalConversionAtVeTAPR_n_TransA -
        CPDR_ac_DW.UnitDelay_DSTATE_na;

    /* Update for UnitDelay: '<S558>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_na = rtb_TmpSignalConversionAtVeTAPR_n_TransA;

    /* End of Outputs for SubSystem: '<S551>/DeltaOneStep1' */

    /* Sum: '<S531>/Add' incorporates:
     *  Abs: '<S551>/Abs'
     */
    rtb_SumSub_i = fabsf(rtb_SumSub_i);

    /* Outputs for Atomic SubSystem: '<S551>/Timer Retrigger Reset Enabled1' */
    /* Switch: '<S566>/Switch1' incorporates:
     *  Constant: '<S559>/Calib'
     *  Constant: '<S563>/Calib'
     *  Constant: '<S565>/Calib'
     *  Constant: '<S566>/Constant Value4'
     *  MinMax: '<S566>/Maximum'
     *  RelationalOperator: '<S551>/Greater Than or Equal 3'
     *  Sum: '<S566>/Subtraction'
     *  UnitDelay: '<S566>/Unit Delay'
     */
    if (rtb_SumSub_i >= KeCPDR_n_EOPB_PmpPerf_DeltSpdsmall)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_gy = KeCPDR_t_EOPB_PmpPerf_DeltSpd_Small;
    }
    else
    {
        CPDR_ac_DW.UnitDelay_DSTATE_gy = fmaxf(CPDR_ac_DW.UnitDelay_DSTATE_gy -
            HeCPDR_t_MedTEH, 0.0F);
    }

    /* End of Switch: '<S566>/Switch1' */
    /* End of Outputs for SubSystem: '<S551>/Timer Retrigger Reset Enabled1' */

    /* Outputs for Atomic SubSystem: '<S551>/Timer Retrigger Reset Enabled2' */
    /* Switch: '<S567>/Switch1' incorporates:
     *  Constant: '<S559>/Calib'
     *  Constant: '<S562>/Calib'
     *  Constant: '<S564>/Calib'
     *  Constant: '<S567>/Constant Value4'
     *  MinMax: '<S567>/Maximum'
     *  RelationalOperator: '<S551>/Greater Than or Equal 4'
     *  Sum: '<S567>/Subtraction'
     *  UnitDelay: '<S567>/Unit Delay'
     */
    if (rtb_SumSub_i >= KeCPDR_n_EOPB_PmpPerf_DeltSpdbig)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_fr = KeCPDR_t_EOPB_PmpPerf_DeltSpd_Big;
    }
    else
    {
        CPDR_ac_DW.UnitDelay_DSTATE_fr = fmaxf(CPDR_ac_DW.UnitDelay_DSTATE_fr -
            HeCPDR_t_MedTEH, 0.0F);
    }

    /* End of Switch: '<S567>/Switch1' */
    /* End of Outputs for SubSystem: '<S551>/Timer Retrigger Reset Enabled2' */
    (void)Rte_Read_VePMIR_b_TransAuxPump2SpdAct_SNA_Value(&rtb_AND3_k);

    /* Outputs for Atomic SubSystem: '<S551>/Timer Retrigger Reset Enabled1' */
    /* Outputs for Atomic SubSystem: '<S551>/Timer Retrigger Reset Enabled2' */
    /* Logic: '<S551>/Logical14' incorporates:
     *  Constant: '<S566>/Constant Value2'
     *  Constant: '<S567>/Constant Value2'
     *  Inport: '<Root>/VePMIR_b_TransAuxPump2SpdAct_SNA'
     *  Logic: '<S551>/Logical5'
     *  Logic: '<S551>/Logical6'
     *  RelationalOperator: '<S566>/Greater  Than1'
     *  RelationalOperator: '<S567>/Greater  Than1'
     *  UnitDelay: '<S566>/Unit Delay'
     *  UnitDelay: '<S567>/Unit Delay'
     */
    VeCPDR_b_EOPB_PmpPerf_DeltSpdCmdEnbl = ((CPDR_ac_DW.UnitDelay_DSTATE_gy <=
        0.0F) && (CPDR_ac_DW.UnitDelay_DSTATE_fr <= 0.0F));

    /* End of Outputs for SubSystem: '<S551>/Timer Retrigger Reset Enabled2' */
    /* End of Outputs for SubSystem: '<S551>/Timer Retrigger Reset Enabled1' */

    /* Logic: '<S551>/AND12' incorporates:
     *  Constant: '<S560>/Calib'
     *  Constant: '<S561>/Calib'
     *  RelationalOperator: '<S551>/Greater Than or Equal 1'
     *  RelationalOperator: '<S551>/Greater Than or Equal 2'
     */
    VeCPDR_b_EOPB_PerfEnblConds = (((rtb_TmpSignalConversionAtVeTAPR_n_TransA >=
        KeCPDR_n_EOPB_MinCmdSpd) && (rtb_TmpSignalConversionAtVeTAPR_n_TransA <=
        KeCPDR_n_EOPB_MaxCmdSpd)) && (VeCPDR_b_EOPB_PmpPerf_DeltSpdCmdEnbl));

    /* Logic: '<S530>/AND3' */
    rtb_AND3_k = ((VeCPDR_b_EOPB_CommonEnblConds) && rtb_AND3_k);

    /* Outputs for Atomic SubSystem: '<S552>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S570>/EdgeRising' */
    /* Logic: '<S571>/AND' incorporates:
     *  Logic: '<S571>/OR1'
     *  UnitDelay: '<S571>/Unit Delay'
     */
    rtb_RelationalOperator3_g = (rtb_AND3_k && (!CPDR_ac_DW.UnitDelay_DSTATE_iv));

    /* Update for UnitDelay: '<S571>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_iv = rtb_AND3_k;

    /* End of Outputs for SubSystem: '<S570>/EdgeRising' */

    /* Switch: '<S570>/Switch1' incorporates:
     *  Constant: '<S568>/Calib'
     *  Constant: '<S569>/Calib'
     *  Constant: '<S570>/Constant Value1'
     *  Logic: '<S570>/OR'
     *  Logic: '<S570>/OR1'
     *  MinMax: '<S570>/Minimum'
     *  Sum: '<S570>/Summation'
     *  UnitDelay: '<S570>/Unit Delay'
     */
    if ((!rtb_AND3_k) || rtb_RelationalOperator3_g)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_lt = 0.0F;
    }
    else
    {
        CPDR_ac_DW.UnitDelay_DSTATE_lt = fminf(KeCPDR_t_EOPB_rpmSNA_WaitTime,
            HeCPDR_t_MedTEH + CPDR_ac_DW.UnitDelay_DSTATE_lt);
    }

    /* End of Switch: '<S570>/Switch1' */

    /* Logic: '<S570>/AND' incorporates:
     *  Constant: '<S569>/Calib'
     *  RelationalOperator: '<S570>/Greater  Than'
     *  UnitDelay: '<S570>/Unit Delay'
     */
    VeCPDR_b_EOPB_SpdSNAConfirmed = (rtb_AND3_k &&
        (CPDR_ac_DW.UnitDelay_DSTATE_lt >= KeCPDR_t_EOPB_rpmSNA_WaitTime));

    /* End of Outputs for SubSystem: '<S552>/Turn On Delay Time' */

    /* Logic: '<S530>/AND1' incorporates:
     *  Constant: '<S553>/Calib'
     *  Logic: '<S530>/AND12'
     *  Logic: '<S530>/AND2'
     */
    VeCPDR_b_EOPB_FunPer_ChkEnbl = (((VeCPDR_b_EOPB_CommonEnblConds) &&
        (VeCPDR_b_EOPB_PerfEnblConds)) || ((KeCPDR_b_EOPB_SpdSNAEnblCndsOV) &&
        (VeCPDR_b_EOPB_SpdSNAConfirmed)));

    /* RelationalOperator: '<S535>/Relational Operator3' incorporates:
     *  Constant: '<S535>/Constant3'
     *  DataStoreRead: '<S529>/Data Store Read'
     *  S-Function (sfix_bitop): '<S535>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_g = ((((uint32)
        CPDR_ac_DW.StatusByte_PwrtrnOilPmp2Perf) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S535>/EdgeFalling1' */
    /* Logic: '<S535>/Logical Operator' incorporates:
     *  Logic: '<S537>/OR1'
     */
    rtb_AND3_m4 = !rtb_RelationalOperator3_g;

    /* End of Outputs for SubSystem: '<S535>/EdgeFalling1' */

    /* Logic: '<S535>/Logical1' incorporates:
     *  Constant: '<S534>/Calib'
     *  Constant: '<S535>/Constant1'
     *  DataStoreRead: '<S529>/Data Store Read'
     *  Logic: '<S535>/Logical Operator'
     *  Logic: '<S535>/Logical10'
     *  Logic: '<S535>/Logical12'
     *  RelationalOperator: '<S535>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S535>/Bitwise Operator3'
     */
    rtb_AND3_k = ((VeCPDR_b_EOPB_FunPer_ChkEnbl) &&
                  ((!KeCPDR_b_PwrtrnOilPmp2Perf_LtchEnbl) || (((((uint32)
                       CPDR_ac_DW.StatusByte_PwrtrnOilPmp2Perf) & 1U) == 0U) ||
                    rtb_AND3_m4)));

    /* Abs: '<S531>/Abs' incorporates:
     *  Sum: '<S531>/Add'
     */
    VeCPDR_n_EOPB_FunPer_RPM_Error = fabsf
        (rtb_TmpSignalConversionAtVeTAPR_n_TransA -
         rtb_TmpSignalConversionAtVePMIR_n_TransA);

    /* Logic: '<S531>/AND18' incorporates:
     *  Constant: '<S572>/Calib'
     *  Constant: '<S573>/Calib'
     *  Logic: '<S531>/AND2'
     *  RelationalOperator: '<S531>/Comparison2'
     */
    VeCPDR_b_EOPB_FunPer_FltChk = ((VeCPDR_n_EOPB_FunPer_RPM_Error >
        KeCPDR_n_EOPB_FunPer_DesRPM) || ((VeCPDR_b_EOPB_SpdSNAConfirmed) &&
        (KeCPDR_b_EOPB_SpdSNAFault_En)));

    /* Outputs for Atomic SubSystem: '<S535>/EdgeFalling1' */
    /* Logic: '<S537>/AND' incorporates:
     *  UnitDelay: '<S537>/Unit Delay'
     */
    rtb_AND3_m4 = (rtb_AND3_m4 && (CPDR_ac_DW.UnitDelay_DSTATE_bj));

    /* Update for UnitDelay: '<S537>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_bj = rtb_RelationalOperator3_g;

    /* End of Outputs for SubSystem: '<S535>/EdgeFalling1' */

    /* Logic: '<S535>/Logical5' */
    rtb_NOT4_h = (rtb_NOT4_h || rtb_AND3_m4);

    /* UnitDelay: '<S536>/Unit Delay1' incorporates:
     *  UnitDelay: '<S485>/Unit Delay'
     */
    CPDR_ac_DW.UnitDelay_DSTATE_geyw = CPDR_ac_DW.UnitDelay1_DSTATE_i;

    /* Outputs for Atomic SubSystem: '<S536>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S536>/Counter Reset  Enabled ' */
    /* Switch: '<S543>/Switch1' incorporates:
     *  Logic: '<S536>/Fail Counter Reset'
     *  Logic: '<S536>/NOT6'
     *  Switch: '<S543>/Switch2'
     *  Switch: '<S544>/Switch1'
     *  UnitDelay: '<S485>/Unit Delay'
     *  UnitDelay: '<S536>/Unit Delay'
     */
    if ((rtb_NOT4_h || (CPDR_ac_DW.UnitDelay_DSTATE_ek)) ||
            (CPDR_ac_DW.UnitDelay_DSTATE_geyw))
    {
        /* Switch: '<S543>/Switch1' incorporates:
         *  Constant: '<S543>/Constant Value2'
         */
        VeCPDR_Cnt_EOPB_Perf_FailCnt = 0U;

        /* Switch: '<S544>/Switch1' incorporates:
         *  Constant: '<S544>/Constant Value2'
         */
        VeCPDR_Cnt_EOPB_Perf_SmpCnt = 0U;
    }
    else
    {
        if (rtb_AND3_k && (VeCPDR_b_EOPB_FunPer_FltChk))
        {
            /* Switch: '<S543>/Switch1' incorporates:
             *  Constant: '<S543>/Constant Value1'
             *  Sum: '<S543>/Subtraction'
             *  Switch: '<S543>/Switch2'
             *  UnitDelay: '<S543>/Unit Delay'
             */
            VeCPDR_Cnt_EOPB_Perf_FailCnt = (uint16)(((uint32)
                VeCPDR_Cnt_EOPB_Perf_FailCnt) + 1U);
        }

        /* Switch: '<S544>/Switch2' */
        if (rtb_AND3_k)
        {
            /* Switch: '<S544>/Switch1' incorporates:
             *  Constant: '<S544>/Constant Value1'
             *  Sum: '<S544>/Subtraction'
             *  Switch: '<S544>/Switch2'
             *  UnitDelay: '<S544>/Unit Delay'
             */
            VeCPDR_Cnt_EOPB_Perf_SmpCnt = (uint16)(((uint32)
                VeCPDR_Cnt_EOPB_Perf_SmpCnt) + 1U);
        }

        /* End of Switch: '<S544>/Switch2' */
    }

    /* End of Switch: '<S543>/Switch1' */
    /* End of Outputs for SubSystem: '<S536>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S536>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S536>/Greater Than or Equal ' incorporates:
     *  Constant: '<S532>/Calib'
     */
    CPDR_ac_DW.UnitDelay1_DSTATE_i = (((sint32)VeCPDR_Cnt_EOPB_Perf_FailCnt) >=
        ((sint32)KeCPDR_Cnt_EOPB_FunPer_FailCnt));

    /* Logic: '<S536>/NOT5' incorporates:
     *  Constant: '<S533>/Calib'
     *  Logic: '<S536>/NOT3'
     *  RelationalOperator: '<S536>/Less Than  or Equal'
     */
    CPDR_ac_DW.UnitDelay_DSTATE_ek = ((((sint32)VeCPDR_Cnt_EOPB_Perf_SmpCnt) >=
        ((sint32)KeCPDR_Cnt_EOPB_FunPer_SmpCnt)) &&
        (!CPDR_ac_DW.UnitDelay1_DSTATE_i));

    /* Switch: '<S549>/Switch1' incorporates:
     *  Constant: '<S542>/Constant Value'
     *  DataStoreWrite: '<S529>/Data Store Write3'
     *  Switch: '<S548>/Switch1'
     */
    if (rtb_TmpSignalConversionAtPostCodeClrDiag)
    {
        CPDR_ac_DW.NeCPDR_Cnt_EOPB_FunPer_MFOP = 0U;
    }
    else
    {
        if (CPDR_ac_DW.UnitDelay_DSTATE_ek)
        {
            /* MinMax: '<S542>/Minimum2' incorporates:
             *  DataStoreRead: '<S529>/Data Store Read1'
             *  Switch: '<S548>/Switch1'
             */
            if (VeCPDR_Cnt_EOPB_Perf_FailCnt >
                    CPDR_ac_DW.NeCPDR_Cnt_EOPB_FunPer_MFOP)
            {
                /* DataStoreWrite: '<S529>/Data Store Write3' incorporates:
                 *  Switch: '<S548>/Switch1'
                 */
                CPDR_ac_DW.NeCPDR_Cnt_EOPB_FunPer_MFOP =
                    VeCPDR_Cnt_EOPB_Perf_FailCnt;
            }

            /* End of MinMax: '<S542>/Minimum2' */
        }
    }

    /* End of Switch: '<S549>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S535>/Fail' */
    CPDR_ac_Fail(CPDR_ac_DW.UnitDelay1_DSTATE_i, &CPDR_ac_B.Merge_a);

    /* End of Outputs for SubSystem: '<S535>/Fail' */

    /* Outputs for Enabled SubSystem: '<S535>/Init' */
    CPDR_ac_Init_g(rtb_NOT4_h, &CPDR_ac_B.Merge_a);

    /* End of Outputs for SubSystem: '<S535>/Init' */

    /* Outputs for Enabled SubSystem: '<S535>/Pass' */
    CPDR_ac_Pass(CPDR_ac_DW.UnitDelay_DSTATE_ek, &CPDR_ac_B.Merge_a);

    /* End of Outputs for SubSystem: '<S535>/Pass' */

    /* RelationalOperator: '<S535>/Relational Operator' incorporates:
     *  Constant: '<S538>/Constant'
     *  Merge: '<S535>/Merge'
     */
    VeCPDR_b_EOPB_FunPer_FltDtct = (((uint32)CPDR_ac_B.Merge_a) == CeDFIB_e_Fail);

    /* RelationalOperator: '<S502>/Comparison2' incorporates:
     *  Constant: '<S513>/Calib'
     */
    rtb_RelationalOperator3_g = (rtb_TmpSignalConversionAtVeTAPR_n_TransA <
        KeCPDR_n_EOPB_MinCmdThrshld);

    /* Logic: '<S502>/Logical1' */
    rtb_AND3_k = !rtb_TmpSignalConversionAtPropSysActv_AD_;

    /* Outputs for Atomic SubSystem: '<S502>/Stop Watch Reset Enabled2' */
    /* Switch: '<S515>/Switch1' incorporates:
     *  Constant: '<S515>/Constant Value2'
     *  Logic: '<S502>/Logical3'
     *  UnitDelay: '<S515>/Unit Delay'
     */
    if (rtb_RelationalOperator3_g || rtb_AND3_k)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_go = 0.0F;
    }
    else
    {
        /* UnitDelay: '<S515>/Unit Delay' incorporates:
         *  Constant: '<S502>/Constant Value1'
         *  Sum: '<S515>/Subtraction'
         *  Switch: '<S515>/Switch2'
         */
        CPDR_ac_DW.UnitDelay_DSTATE_go += 0.1F;
    }

    /* End of Switch: '<S515>/Switch1' */
    /* End of Outputs for SubSystem: '<S502>/Stop Watch Reset Enabled2' */

    /* RelationalOperator: '<S512>/Comparison1' incorporates:
     *  Constant: '<S519>/Calib'
     *  UnitDelay: '<S515>/Unit Delay'
     */
    rtb_NOT4_h = (CPDR_ac_DW.UnitDelay_DSTATE_go >
                  KeCPDR_t_IUMPR_LTAP_MinConsecTime_CmdOn);

    /* Outputs for Atomic SubSystem: '<S502>/Stop Watch Reset Enabled3' */
    /* Switch: '<S516>/Switch1' incorporates:
     *  Constant: '<S516>/Constant Value2'
     *  Logic: '<S502>/Logical4'
     *  Switch: '<S516>/Switch2'
     *  UnitDelay: '<S516>/Unit Delay'
     */
    if (rtb_AND3_k)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_jxx = 0.0F;
    }
    else
    {
        if (!rtb_RelationalOperator3_g)
        {
            /* UnitDelay: '<S516>/Unit Delay' incorporates:
             *  Constant: '<S502>/Constant Value2'
             *  Sum: '<S516>/Subtraction'
             *  Switch: '<S516>/Switch2'
             */
            CPDR_ac_DW.UnitDelay_DSTATE_jxx += 0.1F;
        }
    }

    /* End of Switch: '<S516>/Switch1' */
    /* End of Outputs for SubSystem: '<S502>/Stop Watch Reset Enabled3' */

    /* Outputs for Atomic SubSystem: '<S512>/EdgeRising' */
    /* Logic: '<S517>/OR1' incorporates:
     *  UnitDelay: '<S517>/Unit Delay'
     */
    rtb_RelationalOperator3_g = !CPDR_ac_DW.UnitDelay_DSTATE_bg;

    /* Update for UnitDelay: '<S517>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_bg = rtb_NOT4_h;

    /* End of Outputs for SubSystem: '<S512>/EdgeRising' */

    /* Switch: '<S512>/Switch' incorporates:
     *  Constant: '<S512>/Constant Value5'
     *  Logic: '<S517>/AND'
     *  Sum: '<S512>/Sum'
     *  UnitDelay: '<S512>/Unit Delay'
     */
    if (rtb_AND3_k)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_cl = 0.0F;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S512>/EdgeRising' */
        CPDR_ac_DW.UnitDelay_DSTATE_cl += (float32)((rtb_NOT4_h &&
            rtb_RelationalOperator3_g) ? 1 : 0);

        /* End of Outputs for SubSystem: '<S512>/EdgeRising' */
    }

    /* End of Switch: '<S512>/Switch' */

    /* Outputs for Atomic SubSystem: '<S502>/Signal Latch On With Reset' */
    /* Logic: '<S514>/OR1' incorporates:
     *  Constant: '<S518>/Calib'
     *  Constant: '<S520>/Calib'
     *  Logic: '<S512>/Logical4'
     *  Logic: '<S514>/NOT'
     *  Logic: '<S514>/OR'
     *  RelationalOperator: '<S512>/Comparison2'
     *  RelationalOperator: '<S512>/Comparison4'
     *  UnitDelay: '<S512>/Unit Delay'
     *  UnitDelay: '<S514>/Unit Delay'
     *  UnitDelay: '<S516>/Unit Delay'
     */
    CPDR_ac_DW.UnitDelay_DSTATE_ci = (((CPDR_ac_DW.UnitDelay_DSTATE_jxx >=
        KeCPDR_t_IUMPR_LTAP_MinCumlTime_CmdOn) ||
        (CPDR_ac_DW.UnitDelay_DSTATE_cl >=
         KeCPDR_Cnt_IUMPR_LTAP_MinConsecCnt_CmdOn)) || ((!rtb_AND3_k) &&
        (CPDR_ac_DW.UnitDelay_DSTATE_ci)));

    /* End of Outputs for SubSystem: '<S502>/Signal Latch On With Reset' */

    /* Outport: '<Root>/VeCPDR_b_IUMPR_EOPB_FunPerf' incorporates:
     *  Constant: '<S521>/Constant1'
     *  Constant: '<S521>/Constant2'
     *  Constant: '<S522>/Constant1'
     *  Constant: '<S522>/Constant2'
     *  Constant: '<S523>/Constant1'
     *  Constant: '<S523>/Constant2'
     *  Constant: '<S524>/Constant1'
     *  Constant: '<S524>/Constant2'
     *  Constant: '<S525>/Calib'
     *  Constant: '<S526>/Calib'
     *  Constant: '<S527>/Calib'
     *  Constant: '<S528>/Calib'
     *  DataStoreRead: '<S521>/StatusByte_LIN3_BusOff'
     *  DataStoreRead: '<S522>/StatusByte_LostCommPwrtrn_OilPmp2'
     *  DataStoreRead: '<S523>/StatusByte_PwrtrnOilPmp2OvrSpd'
     *  DataStoreRead: '<S524>/StatusByte_PwrtrnOilPmp2Perf'
     *  Logic: '<S503>/Logical1'
     *  Logic: '<S503>/Logical3'
     *  Logic: '<S503>/Logical4'
     *  Logic: '<S503>/Logical5'
     *  Logic: '<S503>/Logical6'
     *  Logic: '<S521>/Logical Operator'
     *  Logic: '<S522>/Logical Operator'
     *  Logic: '<S523>/Logical Operator'
     *  Logic: '<S524>/Logical Operator'
     *  RelationalOperator: '<S521>/Relational Operator1'
     *  RelationalOperator: '<S521>/Relational Operator2'
     *  RelationalOperator: '<S522>/Relational Operator1'
     *  RelationalOperator: '<S522>/Relational Operator2'
     *  RelationalOperator: '<S523>/Relational Operator1'
     *  RelationalOperator: '<S523>/Relational Operator2'
     *  RelationalOperator: '<S524>/Relational Operator1'
     *  RelationalOperator: '<S524>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S521>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S521>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S522>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S522>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S523>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S523>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S524>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S524>/Bitwise Operator2'
     */
    (void)Rte_Write_VeCPDR_b_IUMPR_EOPB_FunPerf_Value(((((((((sint32)
        CPDR_ac_DW.StatusByte_LIN3_BusOff) & 1) > 0) && ((((uint32)
        CPDR_ac_DW.StatusByte_LIN3_BusOff) & 64U) == 0U)) &&
        (KeCPDR_b_IUMPR_EOPB_Perf_LINBus3_ChkEnbl)) || ((((((sint32)
        CPDR_ac_DW.StatusByte_LostCommPwrtrn_OilPmp2) & 1) > 0) && ((((uint32)
        CPDR_ac_DW.StatusByte_LostCommPwrtrn_OilPmp2) & 64U) == 0U)) &&
        (KeCPDR_b_IUMPR_EOPB_Perf_LOC_ChkEnbl))) || ((((((sint32)
        CPDR_ac_DW.StatusByte_PwrtrnOilPmp2Perf) & 1) > 0) && ((((uint32)
        CPDR_ac_DW.StatusByte_PwrtrnOilPmp2Perf) & 64U) == 0U)) &&
        (KeCPDR_b_IUMPR_EOPB_Perf_EOPBPerf_ChkEnbl))) || ((((((sint32)
        CPDR_ac_DW.StatusByte_PwrtrnOilPmp2OvrSpd) & 1) > 0) && ((((uint32)
        CPDR_ac_DW.StatusByte_PwrtrnOilPmp2OvrSpd) & 64U) == 0U)) &&
        (KeCPDR_b_IUMPR_EOPB_Perf_EOPBDryRun_ChkEnbl)));

    /* Outport: '<Root>/VeCPDR_b_IUMPR_EOPB_DryRun' incorporates:
     *  Constant: '<S504>/Constant1'
     *  Constant: '<S504>/Constant2'
     *  Constant: '<S505>/Constant1'
     *  Constant: '<S505>/Constant2'
     *  Constant: '<S506>/Constant1'
     *  Constant: '<S506>/Constant2'
     *  Constant: '<S507>/Constant1'
     *  Constant: '<S507>/Constant2'
     *  Constant: '<S508>/Calib'
     *  Constant: '<S509>/Calib'
     *  Constant: '<S510>/Calib'
     *  Constant: '<S511>/Calib'
     *  DataStoreRead: '<S504>/StatusByte_LIN3_BusOff'
     *  DataStoreRead: '<S505>/StatusByte_LostCommPwrtrn_OilPmp2'
     *  DataStoreRead: '<S506>/StatusByte_PwrtrnOilPmp2OvrSpd'
     *  DataStoreRead: '<S507>/StatusByte_PwrtrnOilPmp2Perf'
     *  Logic: '<S501>/Logical1'
     *  Logic: '<S501>/Logical2'
     *  Logic: '<S501>/Logical3'
     *  Logic: '<S501>/Logical7'
     *  Logic: '<S501>/Logical8'
     *  Logic: '<S504>/Logical Operator'
     *  Logic: '<S505>/Logical Operator'
     *  Logic: '<S506>/Logical Operator'
     *  Logic: '<S507>/Logical Operator'
     *  RelationalOperator: '<S504>/Relational Operator1'
     *  RelationalOperator: '<S504>/Relational Operator2'
     *  RelationalOperator: '<S505>/Relational Operator1'
     *  RelationalOperator: '<S505>/Relational Operator2'
     *  RelationalOperator: '<S506>/Relational Operator1'
     *  RelationalOperator: '<S506>/Relational Operator2'
     *  RelationalOperator: '<S507>/Relational Operator1'
     *  RelationalOperator: '<S507>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S504>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S504>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S505>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S505>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S506>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S506>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S507>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S507>/Bitwise Operator2'
     */
    (void)Rte_Write_VeCPDR_b_IUMPR_EOPB_DryRun_Value(((((((((sint32)
        CPDR_ac_DW.StatusByte_LIN3_BusOff) & 1) > 0) && ((((uint32)
        CPDR_ac_DW.StatusByte_LIN3_BusOff) & 64U) == 0U)) &&
        (KeCPDR_b_IUMPR_EOPB_DryRun_LINBus3_ChkEnbl)) || ((((((sint32)
        CPDR_ac_DW.StatusByte_LostCommPwrtrn_OilPmp2) & 1) > 0) && ((((uint32)
        CPDR_ac_DW.StatusByte_LostCommPwrtrn_OilPmp2) & 64U) == 0U)) &&
        (KeCPDR_b_IUMPR_EOPB_DryRun_LOC_ChkEnbl))) || ((((((sint32)
        CPDR_ac_DW.StatusByte_PwrtrnOilPmp2Perf) & 1) > 0) && ((((uint32)
        CPDR_ac_DW.StatusByte_PwrtrnOilPmp2Perf) & 64U) == 0U)) &&
        (KeCPDR_b_IUMPR_EOPB_DryRun_EOPBPerf_ChkEnbl))) || ((((((sint32)
        CPDR_ac_DW.StatusByte_PwrtrnOilPmp2OvrSpd) & 1) > 0) && ((((uint32)
        CPDR_ac_DW.StatusByte_PwrtrnOilPmp2OvrSpd) & 64U) == 0U)) &&
        (KeCPDR_b_IUMPR_EOPB_DryRun_EOPBDryRun_ChkEnbl)));

    /* Update for UnitDelay: '<S485>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_geyw = rtb_Logical1_h;

    /* End of Outputs for SubSystem: '<S466>/EOPB_Diagnostics_FUNC' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeTAPR_n_TransAuxPmp2_Cmd' */
    /* End of Outputs for SubSystem: '<S173>/EOPB_Diagnostics' */

    /* Outputs for Atomic SubSystem: '<S174>/AHP_Diagnostics' */
    /* SignalConversion generated from: '<S2>/VePMPR_n_HT_AuxPmpCmd' incorporates:
     *  Inport: '<Root>/VePMIR_b_HTAuxPumpRPMAct_SNA'
     *  Inport: '<Root>/VePMIR_b_HTAuxPumpTemp_FA'
     *  Inport: '<Root>/VePMIR_e_HTAuxPumpDryRun'
     *  Inport: '<Root>/VePMIR_e_HTAuxPumpLmpHM'
     *  Inport: '<Root>/VePMIR_e_HTAuxPumpMntrRPM'
     *  SignalConversion generated from: '<S2>/HTAP_MaxOpRPM_AD_Read'
     *  SignalConversion generated from: '<S2>/VePMIR_T_HTAuxPumpTemp'
     *  SignalConversion generated from: '<S2>/VePMIR_n_HTAuxPumpRPMAct'
     */
#if Rte_SysCon_Variant_CPDR_4

    /* Outputs for Atomic SubSystem: '<S574>/AHP_Diagnostics_FUNC' */
    /* SignalConversion generated from: '<S2>/VePMPR_n_HT_AuxPmpCmd' incorporates:
     *  Inport: '<Root>/VePMPR_n_HT_AuxPmpCmd'
     */
    (void)Rte_Read_VePMPR_n_HT_AuxPmpCmd_Value
        (&rtb_TmpSignalConversionAtVePMPR_n_HT_Aux);

    /* SignalConversion generated from: '<S2>/VePMIR_T_HTAuxPumpTemp' incorporates:
     *  Inport: '<Root>/VePMIR_T_HTAuxPumpTemp'
     */
    (void)Rte_Read_VePMIR_T_HTAuxPumpTemp_Value
        (&rtb_TmpSignalConversionAtVePMIR_T_HTAuxP);

    /* SignalConversion generated from: '<S2>/VePMIR_n_HTAuxPumpRPMAct' incorporates:
     *  Inport: '<Root>/VePMIR_n_HTAuxPumpRPMAct'
     */
    (void)Rte_Read_VePMIR_n_HTAuxPumpRPMAct_Value
        (&rtb_TmpSignalConversionAtVePMIR_n_HTAuxP);

    /* SignalConversion generated from: '<S2>/HTAP_MaxOpRPM_AD_Read' incorporates:
     *  Merge: '<Root>/HTAP_MaxOpRPM_AD_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVeTAPR_n_TransA =
        Rte_IrvRead_CPDR_MedTEH_HTAP_MaxOpRPM_AD_write_IRV();

    /* Logic: '<S611>/Logical2' incorporates:
     *  Constant: '<S656>/Calib'
     *  Constant: '<S657>/Calib'
     *  RelationalOperator: '<S611>/Comparison4'
     *  RelationalOperator: '<S611>/Comparison5'
     */
    VeCPDR_b_HTAP_VltgInRange = ((rtb_TmpSignalConversionAtBF1_SysVolt_AD_ <=
        KeCPDR_U_HTAP_MaxOprtngVltg) &&
        (rtb_TmpSignalConversionAtBF1_SysVolt_AD_ >= KeCPDR_U_HTAP_MinOprtngVltg));

    /* UnitDelay: '<S603>/Unit Delay' */
    VeCPDR_b_HTAP_FunPer_FltDtctPre = CPDR_ac_DW.UnitDelay_DSTATE_l1;
    (void)Rte_Read_VePMIR_e_HTAuxPumpLmpHM_Value(&tmpRead_b);
    (void)Rte_Read_VePMIR_e_HTAuxPumpDryRun_Value(&tmpRead_a);

    /* Logic: '<S610>/Logical2' incorporates:
     *  Constant: '<S654>/Calib'
     *  Constant: '<S655>/Calib'
     *  Inport: '<Root>/VePMIR_e_HTAuxPumpDryRun'
     *  Inport: '<Root>/VePMIR_e_HTAuxPumpLmpHM'
     *  RelationalOperator: '<S610>/Comparison4'
     *  RelationalOperator: '<S610>/Comparison5'
     */
    VeCPDR_b_HTAP_PumpTempChk = ((rtb_TmpSignalConversionAtVePMIR_T_HTAuxP <=
        KeCPDR_T_HTAP_PumpTempUprLim) &&
        (rtb_TmpSignalConversionAtVePMIR_T_HTAuxP >=
         KeCPDR_T_HTAP_PumpTempLwrLim));

    /* RelationalOperator: '<S600>/Comparison1' */
    VeCPDR_b_HTAP_CmdLessLim = (rtb_TmpSignalConversionAtVePMPR_n_HT_Aux <
        rtb_TmpSignalConversionAtVeTAPR_n_TransA);

    /* Switch: '<S609>/Switch3' incorporates:
     *  Constant: '<S652>/Constant'
     *  Inport: '<Root>/VePMIR_e_HTAuxPumpLmpHM'
     *  RelationalOperator: '<S609>/Comparison3'
     */
    if (((uint32)tmpRead_b) == CePMPR_e_FTSNA_False)
    {
        /* Switch: '<S609>/Switch3' incorporates:
         *  Constant: '<S609>/TRUE Constant2'
         */
        VeCPDR_b_HTAPP_LimpHmChek_Enb = true;
    }
    else
    {
        /* Switch: '<S609>/Switch3' incorporates:
         *  Constant: '<S653>/Calib'
         *  Logic: '<S609>/AND18'
         *  Switch: '<S609>/Switch1'
         */
        VeCPDR_b_HTAPP_LimpHmChek_Enb = ((!VeCPDR_b_HTAP_CmdLessLim) &&
            (KeCPDR_b_HTAuxPump_LmpHMEvent_OV));
    }

    /* End of Switch: '<S609>/Switch3' */
    (void)Rte_Read_VePMIR_e_HTAuxPumpMntrRPM_Value(&tmpRead_c);

    /* Switch: '<S612>/Switch3' incorporates:
     *  Constant: '<S658>/Constant'
     *  Inport: '<Root>/VePMIR_e_HTAuxPumpMntrRPM'
     *  RelationalOperator: '<S612>/Comparison3'
     */
    if (((uint32)tmpRead_c) == CePMPR_e_TFSNA_True)
    {
        /* Switch: '<S612>/Switch3' incorporates:
         *  Constant: '<S612>/TRUE Constant2'
         */
        VeCPDR_b_HTAP_MntrChedEnb = true;
    }
    else
    {
        /* Switch: '<S612>/Switch3' incorporates:
         *  Constant: '<S659>/Calib'
         *  Logic: '<S612>/AND18'
         *  Switch: '<S612>/Switch1'
         */
        VeCPDR_b_HTAP_MntrChedEnb = ((!VeCPDR_b_HTAP_CmdLessLim) &&
            (KeCPDR_b_HT_AuxPmpMntrRPMEvent_OV));
    }

    /* End of Switch: '<S612>/Switch3' */
    (void)Rte_Read_VePMIR_b_HTAuxPumpTemp_FA_Value(&rtb_AND_gr);

    /* Switch: '<S608>/Switch' incorporates:
     *  Constant: '<S649>/Constant1'
     *  Constant: '<S649>/Constant2'
     *  Constant: '<S650>/Constant1'
     *  Constant: '<S650>/Constant2'
     *  Constant: '<S651>/Calib'
     *  DataStoreRead: '<S649>/StatusByte_LIN1_BusOff'
     *  DataStoreRead: '<S650>/StatusByte_LIN2_BusOff'
     *  Inport: '<Root>/VePMIR_b_HTAuxPumpTemp_FA'
     *  Logic: '<S649>/Logical Operator'
     *  Logic: '<S650>/Logical Operator'
     *  RelationalOperator: '<S649>/Relational Operator1'
     *  RelationalOperator: '<S649>/Relational Operator2'
     *  RelationalOperator: '<S650>/Relational Operator1'
     *  RelationalOperator: '<S650>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S649>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S649>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S650>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S650>/Bitwise Operator2'
     */
    if (KeCPDR_b_HTAP_LIN_Bus)
    {
        rtb_TmpSignalConversionAtBPCM_LIN_BusOff = (((((sint32)
            CPDR_ac_DW.StatusByte_LIN2_BusOff) & 1) > 0) && ((((uint32)
            CPDR_ac_DW.StatusByte_LIN2_BusOff) & 64U) == 0U));
    }
    else
    {
        rtb_TmpSignalConversionAtBPCM_LIN_BusOff = (((((sint32)
            CPDR_ac_DW.StatusByte_LIN1_BusOff) & 1) > 0) && ((((uint32)
            CPDR_ac_DW.StatusByte_LIN1_BusOff) & 64U) == 0U));
    }

    /* End of Switch: '<S608>/Switch' */

    /* S-Function (sfix_bitop): '<S605>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S605>/StatusByte_LostCommCoolPmpA'
     *  S-Function (sfix_bitop): '<S592>/Bitwise Operator2'
     */
    VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp = ((sint32)
        CPDR_ac_DW.StatusByte_LostCommCoolPmpA) & 1;

    /* S-Function (sfix_bitop): '<S605>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S605>/StatusByte_LostCommCoolPmpA'
     *  S-Function (sfix_bitop): '<S592>/Bitwise Operator1'
     */
    VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_0 = ((uint32)
        CPDR_ac_DW.StatusByte_LostCommCoolPmpA) & 64U;

    /* S-Function (sfix_bitop): '<S606>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S606>/StatusByte_ThrmlRlyCtrlCkt'
     *  S-Function (sfix_bitop): '<S593>/Bitwise Operator2'
     */
    VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_2 = ((sint32)
        CPDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 1;

    /* S-Function (sfix_bitop): '<S606>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S606>/StatusByte_ThrmlRlyCtrlCkt'
     *  S-Function (sfix_bitop): '<S593>/Bitwise Operator1'
     */
    VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_1 = ((uint32)
        CPDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 64U;

    /* Logic: '<S623>/AND3' incorporates:
     *  Constant: '<S605>/Constant1'
     *  Constant: '<S605>/Constant2'
     *  Constant: '<S606>/Constant1'
     *  Constant: '<S606>/Constant2'
     *  Constant: '<S627>/Constant'
     *  Constant: '<S628>/Constant'
     *  Constant: '<S629>/Calib'
     *  Constant: '<S630>/Calib'
     *  Constant: '<S631>/Calib'
     *  Constant: '<S632>/Calib'
     *  Constant: '<S633>/Calib'
     *  Constant: '<S634>/Calib'
     *  Constant: '<S635>/Calib'
     *  Constant: '<S636>/Calib'
     *  Constant: '<S637>/Calib'
     *  Constant: '<S638>/Calib'
     *  Constant: '<S639>/Calib'
     *  Constant: '<S640>/Calib'
     *  Constant: '<S641>/Calib'
     *  Inport: '<Root>/VePMIR_e_HTAuxPumpDryRun'
     *  Logic: '<S605>/Logical Operator'
     *  Logic: '<S606>/Logical Operator'
     *  Logic: '<S623>/AND10'
     *  Logic: '<S623>/AND13'
     *  Logic: '<S623>/AND14'
     *  Logic: '<S623>/AND15'
     *  Logic: '<S623>/AND16'
     *  Logic: '<S623>/AND19'
     *  Logic: '<S623>/AND21'
     *  Logic: '<S623>/AND22'
     *  Logic: '<S623>/AND23'
     *  Logic: '<S623>/AND24'
     *  Logic: '<S623>/AND25'
     *  Logic: '<S623>/AND27'
     *  Logic: '<S623>/AND31'
     *  Logic: '<S623>/AND5'
     *  Logic: '<S623>/AND6'
     *  Logic: '<S623>/AND7'
     *  Logic: '<S623>/AND8'
     *  Logic: '<S623>/AND9'
     *  RelationalOperator: '<S605>/Relational Operator1'
     *  RelationalOperator: '<S605>/Relational Operator2'
     *  RelationalOperator: '<S606>/Relational Operator1'
     *  RelationalOperator: '<S606>/Relational Operator2'
     *  RelationalOperator: '<S623>/Comparison1'
     *  RelationalOperator: '<S623>/Comparison12'
     *  S-Function (sfix_bitop): '<S605>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S605>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S606>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S606>/Bitwise Operator2'
     *  SignalConversion generated from: '<S2>/VePMTR_e_ThrmlDevEnbl'
     */
    VeCPDR_b_HTAP_CommonEnblConds = (((((((((((((((((uint32)
        rtb_TmpSignalConversionAtVePMTR_e_ThrmlD) != CePMTR_e_DISBL_All_Thrml) ||
        (KeCPDR_b_HTAP_FunPer_ThrmlEnbl)) &&
        (rtb_TmpSignalConversionAtVeTMIR_b_MainRl ||
         (KeCPDR_b_HTAP_FunPer_MainRly_OV))) && ((VeCPDR_b_HTAP_VltgInRange) ||
        (KeCPDR_b_HTAP_VltgInRange_OV))) && ((!VeCPDR_b_HTAP_FunPer_FltDtctPre) ||
        (KeCPDR_b_HTAP_FunPerFlt))) && (((VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp <= 0)
        || (VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_0 != 0U)) ||
        (KeCPDR_b_HTAP_LOCFltDtct))) && (((VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_2 <=
        0) || (VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_1 != 0U)) ||
        (KeCPDR_b_HTAP_ThrmlRlyCtrlCkt_FA_OV))) &&
        ((!rtb_TmpSignalConversionAtBPCM_LIN_BusOff) ||
         (KeCPDR_b_HTAP_LINBusoff_FA_OV))) &&
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag) && ((VeCPDR_b_HTAP_PumpTempChk)
        || (KeCPDR_b_HTAP_PumpTempChk_OV))) && ((((uint32)tmpRead_a) ==
        CePMPR_e_FTSNA_False) || (KeCPDR_b_HTAuxPumpDryRun_OV))) &&
        ((VeCPDR_b_HTAPP_LimpHmChek_Enb) || (KeCPDR_b_HTAuxPump_LmpHM_OV))) &&
        ((VeCPDR_b_HTAP_MntrChedEnb) || (KeCPDR_b_HT_AuxPmpMntrRPM_OV))) &&
        ((VeCPDR_b_HTAP_CmdLessLim) || (KeCPDR_b_HTAP_CmdLessLimEvent_OV))) &&
        ((!rtb_AND_gr) || (KeCPDR_b_HTAP_Temp_FA_OV)));

    /* Outputs for Atomic SubSystem: '<S604>/DeltaOneStep1' */
    /* Sum: '<S613>/Sum//Sub' incorporates:
     *  UnitDelay: '<S613>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVePMIR_T_HTAuxP =
        rtb_TmpSignalConversionAtVePMPR_n_HT_Aux -
        CPDR_ac_DW.UnitDelay_DSTATE_l0;

    /* Update for UnitDelay: '<S613>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_l0 = rtb_TmpSignalConversionAtVePMPR_n_HT_Aux;

    /* End of Outputs for SubSystem: '<S604>/DeltaOneStep1' */

    /* Sum: '<S600>/Add' incorporates:
     *  Abs: '<S604>/Abs'
     */
    rtb_TmpSignalConversionAtVePMIR_T_HTAuxP = fabsf
        (rtb_TmpSignalConversionAtVePMIR_T_HTAuxP);

    /* Outputs for Atomic SubSystem: '<S604>/Timer Retrigger Reset Enabled2' */
    /* Switch: '<S622>/Switch1' incorporates:
     *  Constant: '<S614>/Calib'
     *  Constant: '<S616>/Calib'
     *  Constant: '<S620>/Calib'
     *  Constant: '<S622>/Constant Value4'
     *  MinMax: '<S622>/Maximum'
     *  RelationalOperator: '<S604>/Greater Than or Equal 3'
     *  Sum: '<S622>/Subtraction'
     *  UnitDelay: '<S622>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVePMIR_T_HTAuxP >=
            KeCPDR_n_HTA_PmpPerf_DeltSpdsmall)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_aa = KeCPDR_t_HTA_PmpPerf_DeltSpd_Small;
    }
    else
    {
        CPDR_ac_DW.UnitDelay_DSTATE_aa = fmaxf(CPDR_ac_DW.UnitDelay_DSTATE_aa -
            HeCPDR_t_MedTEH, 0.0F);
    }

    /* End of Switch: '<S622>/Switch1' */
    /* End of Outputs for SubSystem: '<S604>/Timer Retrigger Reset Enabled2' */

    /* Outputs for Atomic SubSystem: '<S604>/Timer Retrigger Reset Enabled1' */
    /* Switch: '<S621>/Switch1' incorporates:
     *  Constant: '<S614>/Calib'
     *  Constant: '<S615>/Calib'
     *  Constant: '<S619>/Calib'
     *  Constant: '<S621>/Constant Value4'
     *  MinMax: '<S621>/Maximum'
     *  RelationalOperator: '<S604>/Greater Than or Equal 4'
     *  Sum: '<S621>/Subtraction'
     *  UnitDelay: '<S621>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVePMIR_T_HTAuxP >=
            KeCPDR_n_HTA_PmpPerf_DeltSpdbig)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_gh = KeCPDR_t_HTA_PmpPerf_DeltSpd_Big;
    }
    else
    {
        CPDR_ac_DW.UnitDelay_DSTATE_gh = fmaxf(CPDR_ac_DW.UnitDelay_DSTATE_gh -
            HeCPDR_t_MedTEH, 0.0F);
    }

    /* End of Switch: '<S621>/Switch1' */
    /* End of Outputs for SubSystem: '<S604>/Timer Retrigger Reset Enabled1' */
    (void)Rte_Read_VePMIR_b_HTAuxPumpRPMAct_SNA_Value(&rtb_AND3_e);

    /* Outputs for Atomic SubSystem: '<S604>/Timer Retrigger Reset Enabled2' */
    /* Outputs for Atomic SubSystem: '<S604>/Timer Retrigger Reset Enabled1' */
    /* Logic: '<S604>/Logical14' incorporates:
     *  Constant: '<S621>/Constant Value2'
     *  Constant: '<S622>/Constant Value2'
     *  Inport: '<Root>/VePMIR_b_HTAuxPumpRPMAct_SNA'
     *  Logic: '<S604>/Logical5'
     *  Logic: '<S604>/Logical6'
     *  RelationalOperator: '<S621>/Greater  Than1'
     *  RelationalOperator: '<S622>/Greater  Than1'
     *  UnitDelay: '<S621>/Unit Delay'
     *  UnitDelay: '<S622>/Unit Delay'
     */
    VeCPDR_b_HTA_PmpPerf_DeltSpdCmdEnbl = ((CPDR_ac_DW.UnitDelay_DSTATE_aa <=
        0.0F) && (CPDR_ac_DW.UnitDelay_DSTATE_gh <= 0.0F));

    /* End of Outputs for SubSystem: '<S604>/Timer Retrigger Reset Enabled1' */
    /* End of Outputs for SubSystem: '<S604>/Timer Retrigger Reset Enabled2' */

    /* Logic: '<S624>/AND11' incorporates:
     *  Constant: '<S617>/Calib'
     *  Constant: '<S618>/Calib'
     *  Constant: '<S642>/Calib'
     *  Constant: '<S643>/Calib'
     *  Constant: '<S644>/Calib'
     *  Logic: '<S624>/AND1'
     *  Logic: '<S624>/AND17'
     *  Logic: '<S624>/AND4'
     *  RelationalOperator: '<S604>/Greater Than or Equal 1'
     *  RelationalOperator: '<S604>/Greater Than or Equal 2'
     */
    VeCPDR_b_HTAP_PerfEnblConds = ((((rtb_TmpSignalConversionAtVePMPR_n_HT_Aux >=
        KeCPDR_n_HTA_PmpPerf_MinSpd) || (KeCPDR_b_HTAP_MinSpdChk_OV)) &&
        ((rtb_TmpSignalConversionAtVePMPR_n_HT_Aux <=
          KeCPDR_n_HTA_PmpPerf_MaxSpd) || (KeCPDR_b_HTAP_MaxSpdChk_OV))) &&
        ((VeCPDR_b_HTA_PmpPerf_DeltSpdCmdEnbl) ||
         (KeCPDR_b_HTAP_DeltSpdCmdEnbl_OV)));

    /* Logic: '<S607>/AND3' */
    rtb_AND3_e = ((VeCPDR_b_HTAP_CommonEnblConds) && rtb_AND3_e);

    /* Outputs for Atomic SubSystem: '<S625>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S647>/EdgeRising' */
    /* Logic: '<S648>/AND' incorporates:
     *  Logic: '<S648>/OR1'
     *  UnitDelay: '<S648>/Unit Delay'
     */
    rtb_AND_gr = (rtb_AND3_e && (!CPDR_ac_DW.UnitDelay_DSTATE_ia));

    /* Update for UnitDelay: '<S648>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_ia = rtb_AND3_e;

    /* End of Outputs for SubSystem: '<S647>/EdgeRising' */

    /* Switch: '<S647>/Switch1' incorporates:
     *  Constant: '<S645>/Calib'
     *  Constant: '<S646>/Calib'
     *  Constant: '<S647>/Constant Value1'
     *  Logic: '<S647>/OR'
     *  Logic: '<S647>/OR1'
     *  MinMax: '<S647>/Minimum'
     *  Sum: '<S647>/Summation'
     *  UnitDelay: '<S647>/Unit Delay'
     */
    if ((!rtb_AND3_e) || rtb_AND_gr)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_du = 0.0F;
    }
    else
    {
        CPDR_ac_DW.UnitDelay_DSTATE_du = fminf(KeCPDR_t_HTAP_rpmSNA_WaitTime,
            HeCPDR_t_MedTEH + CPDR_ac_DW.UnitDelay_DSTATE_du);
    }

    /* End of Switch: '<S647>/Switch1' */

    /* Logic: '<S647>/AND' incorporates:
     *  Constant: '<S646>/Calib'
     *  RelationalOperator: '<S647>/Greater  Than'
     *  UnitDelay: '<S647>/Unit Delay'
     */
    VeCPDR_b_HTAP_SpdSNAConfirmed = (rtb_AND3_e &&
        (CPDR_ac_DW.UnitDelay_DSTATE_du >= KeCPDR_t_HTAP_rpmSNA_WaitTime));

    /* End of Outputs for SubSystem: '<S625>/Turn On Delay Time' */

    /* Logic: '<S607>/AND1' incorporates:
     *  Constant: '<S626>/Calib'
     *  Logic: '<S607>/AND12'
     *  Logic: '<S607>/AND2'
     */
    rtb_AND3_e = (((VeCPDR_b_HTAP_CommonEnblConds) &&
                   (VeCPDR_b_HTAP_PerfEnblConds)) ||
                  ((KeCPDR_b_HTAP_SpdSNAEnblCndsOV) &&
                   (VeCPDR_b_HTAP_SpdSNAConfirmed)));

    /* S-Function (sfix_bitop): '<S665>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S603>/Data Store Read'
     *  S-Function (sfix_bitop): '<S589>/Bitwise Operator1'
     */
    rtb_RelationalOperator3_m_tmp = ((uint32)
        CPDR_ac_DW.StatusByte_CoolPmpACtrlCktPerf) & 64U;

    /* RelationalOperator: '<S665>/Relational Operator3' incorporates:
     *  Constant: '<S665>/Constant3'
     *  S-Function (sfix_bitop): '<S665>/Bitwise Operator2'
     */
    rtb_AND3_k = (rtb_RelationalOperator3_m_tmp == 0U);

    /* Outputs for Atomic SubSystem: '<S665>/EdgeFalling1' */
    /* Logic: '<S665>/Logical Operator' incorporates:
     *  Logic: '<S667>/OR1'
     */
    rtb_Logical1_h = !rtb_AND3_k;

    /* End of Outputs for SubSystem: '<S665>/EdgeFalling1' */

    /* Logic: '<S665>/Logical1' incorporates:
     *  Constant: '<S664>/Calib'
     *  Constant: '<S665>/Constant1'
     *  DataStoreRead: '<S603>/Data Store Read'
     *  Logic: '<S665>/Logical Operator'
     *  Logic: '<S665>/Logical10'
     *  Logic: '<S665>/Logical12'
     *  RelationalOperator: '<S665>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S665>/Bitwise Operator3'
     */
    rtb_AND_gr = (rtb_AND3_e && ((!KeCPDR_b_CoolPmpACtrlCktPerf_LtchEnbl) ||
                   (((((uint32)CPDR_ac_DW.StatusByte_CoolPmpACtrlCktPerf) & 1U) ==
                     0U) || rtb_Logical1_h)));

    /* Abs: '<S600>/Abs' incorporates:
     *  Sum: '<S600>/Add'
     */
    VeCPDR_n_HTAP_FunPer_RPM_Error = fabsf
        (rtb_TmpSignalConversionAtVePMPR_n_HT_Aux -
         rtb_TmpSignalConversionAtVePMIR_n_HTAuxP);

    /* Logic: '<S661>/AND22' incorporates:
     *  Constant: '<S602>/Calib'
     *  RelationalOperator: '<S661>/Comparison1'
     *  RelationalOperator: '<S661>/Comparison4'
     *  Sum: '<S661>/Add'
     *  Sum: '<S661>/Add1'
     */
    VeCPDR_b_HTAP_VltgDrpFunPer_FltChk =
        ((rtb_TmpSignalConversionAtVePMIR_n_HTAuxP <
          (rtb_TmpSignalConversionAtVeTAPR_n_TransA -
           KeCPDR_n_HTAP_FunPer_DesRPM)) ||
         (rtb_TmpSignalConversionAtVePMIR_n_HTAuxP >
          (rtb_TmpSignalConversionAtVePMPR_n_HT_Aux +
           KeCPDR_n_HTAP_FunPer_DesRPM)));

    /* Switch: '<S600>/Switch1' incorporates:
     *  Constant: '<S601>/Calib'
     *  Constant: '<S602>/Calib'
     *  Logic: '<S600>/AND22'
     *  RelationalOperator: '<S600>/Comparison4'
     */
    if ((KeCPDR_b_HTAP_CmdLessLim_Disbl) || (VeCPDR_b_HTAP_CmdLessLim))
    {
        rtb_TmpSignalConversionAtBPCM_LIN_BusOff =
            (VeCPDR_n_HTAP_FunPer_RPM_Error > KeCPDR_n_HTAP_FunPer_DesRPM);
    }
    else
    {
        rtb_TmpSignalConversionAtBPCM_LIN_BusOff =
            VeCPDR_b_HTAP_VltgDrpFunPer_FltChk;
    }

    /* End of Switch: '<S600>/Switch1' */

    /* Logic: '<S600>/AND1' incorporates:
     *  Constant: '<S660>/Calib'
     *  Logic: '<S600>/AND2'
     */
    VeCPDR_b_HTAP_FunPer_FltChk = (rtb_TmpSignalConversionAtBPCM_LIN_BusOff ||
        ((VeCPDR_b_HTAP_SpdSNAConfirmed) && (KeCPDR_b_HTAP_SpdSNAFault_En)));

    /* Outputs for Atomic SubSystem: '<S665>/EdgeFalling1' */
    /* Logic: '<S667>/AND' incorporates:
     *  UnitDelay: '<S667>/Unit Delay'
     */
    rtb_Logical1_h = (rtb_Logical1_h && (CPDR_ac_DW.UnitDelay_DSTATE_lk));

    /* Update for UnitDelay: '<S667>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_lk = rtb_AND3_k;

    /* End of Outputs for SubSystem: '<S665>/EdgeFalling1' */

    /* Logic: '<S665>/Logical5' incorporates:
     *  Logic: '<S579>/NOT4'
     */
    rtb_AND3_k = ((rtb_TmpSignalConversionAtDsblDiagFailSaf ||
                   rtb_TmpSignalConversionAtPostCodeClrDiag) || rtb_Logical1_h);

    /* Outputs for Atomic SubSystem: '<S666>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S666>/Counter Reset  Enabled ' */
    /* Switch: '<S673>/Switch1' incorporates:
     *  Logic: '<S666>/Fail Counter Reset'
     *  Logic: '<S666>/NOT6'
     *  Switch: '<S673>/Switch2'
     *  Switch: '<S674>/Switch1'
     *  UnitDelay: '<S666>/Unit Delay'
     *  UnitDelay: '<S666>/Unit Delay1'
     */
    if ((rtb_AND3_k || (CPDR_ac_DW.UnitDelay_DSTATE_pe)) ||
            (CPDR_ac_DW.UnitDelay1_DSTATE_b))
    {
        /* Switch: '<S673>/Switch1' incorporates:
         *  Constant: '<S673>/Constant Value2'
         */
        VeCPDR_Cnt_HTAP_Perf_FailCnt = 0U;

        /* Switch: '<S674>/Switch1' incorporates:
         *  Constant: '<S674>/Constant Value2'
         */
        VeCPDR_Cnt_HTAP_Perf_SmpCnt = 0U;
    }
    else
    {
        if (rtb_AND_gr && (VeCPDR_b_HTAP_FunPer_FltChk))
        {
            /* Switch: '<S673>/Switch1' incorporates:
             *  Constant: '<S673>/Constant Value1'
             *  Sum: '<S673>/Subtraction'
             *  Switch: '<S673>/Switch2'
             *  UnitDelay: '<S673>/Unit Delay'
             */
            VeCPDR_Cnt_HTAP_Perf_FailCnt = (uint16)(((uint32)
                VeCPDR_Cnt_HTAP_Perf_FailCnt) + 1U);
        }

        /* Switch: '<S674>/Switch2' */
        if (rtb_AND_gr)
        {
            /* Switch: '<S674>/Switch1' incorporates:
             *  Constant: '<S674>/Constant Value1'
             *  Sum: '<S674>/Subtraction'
             *  Switch: '<S674>/Switch2'
             *  UnitDelay: '<S674>/Unit Delay'
             */
            VeCPDR_Cnt_HTAP_Perf_SmpCnt = (uint16)(((uint32)
                VeCPDR_Cnt_HTAP_Perf_SmpCnt) + 1U);
        }

        /* End of Switch: '<S674>/Switch2' */
    }

    /* End of Switch: '<S673>/Switch1' */
    /* End of Outputs for SubSystem: '<S666>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S666>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S666>/Greater Than or Equal ' incorporates:
     *  Constant: '<S662>/Calib'
     */
    CPDR_ac_DW.UnitDelay1_DSTATE_b = (((sint32)VeCPDR_Cnt_HTAP_Perf_FailCnt) >=
        ((sint32)KeCPDR_Cnt_HTAP_FunPer_FailCnt));

    /* Logic: '<S666>/NOT5' incorporates:
     *  Constant: '<S663>/Calib'
     *  Logic: '<S666>/NOT3'
     *  RelationalOperator: '<S666>/Less Than  or Equal'
     */
    CPDR_ac_DW.UnitDelay_DSTATE_pe = ((((sint32)VeCPDR_Cnt_HTAP_Perf_SmpCnt) >=
        ((sint32)KeCPDR_Cnt_HTAP_FunPer_SmpCnt)) &&
        (!CPDR_ac_DW.UnitDelay1_DSTATE_b));

    /* Switch: '<S679>/Switch1' incorporates:
     *  Constant: '<S672>/Constant Value'
     *  DataStoreWrite: '<S603>/Data Store Write4'
     *  Switch: '<S678>/Switch1'
     */
    if (rtb_TmpSignalConversionAtPostCodeClrDiag)
    {
        CPDR_ac_DW.NeCPDR_Cnt_HTAP_FunPer_MFOP = 0U;
    }
    else
    {
        if (CPDR_ac_DW.UnitDelay_DSTATE_pe)
        {
            /* MinMax: '<S672>/Minimum2' incorporates:
             *  DataStoreRead: '<S603>/Data Store Read3'
             *  Switch: '<S678>/Switch1'
             */
            if (VeCPDR_Cnt_HTAP_Perf_FailCnt >
                    CPDR_ac_DW.NeCPDR_Cnt_HTAP_FunPer_MFOP)
            {
                /* DataStoreWrite: '<S603>/Data Store Write4' incorporates:
                 *  Switch: '<S678>/Switch1'
                 */
                CPDR_ac_DW.NeCPDR_Cnt_HTAP_FunPer_MFOP =
                    VeCPDR_Cnt_HTAP_Perf_FailCnt;
            }

            /* End of MinMax: '<S672>/Minimum2' */
        }
    }

    /* End of Switch: '<S679>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S665>/Fail' */
    CPDR_ac_Fail(CPDR_ac_DW.UnitDelay1_DSTATE_b, &CPDR_ac_B.Merge_ia);

    /* End of Outputs for SubSystem: '<S665>/Fail' */

    /* Outputs for Enabled SubSystem: '<S665>/Init' */
    CPDR_ac_Init_g(rtb_AND3_k, &CPDR_ac_B.Merge_ia);

    /* End of Outputs for SubSystem: '<S665>/Init' */

    /* Outputs for Enabled SubSystem: '<S665>/Pass' */
    CPDR_ac_Pass(CPDR_ac_DW.UnitDelay_DSTATE_pe, &CPDR_ac_B.Merge_ia);

    /* End of Outputs for SubSystem: '<S665>/Pass' */

    /* RelationalOperator: '<S665>/Relational Operator' incorporates:
     *  Constant: '<S668>/Constant'
     *  Merge: '<S665>/Merge'
     *  UnitDelay: '<S603>/Unit Delay'
     */
    CPDR_ac_DW.UnitDelay_DSTATE_l1 = (((uint32)CPDR_ac_B.Merge_ia) ==
        CeDFIB_e_Fail);

    /* RelationalOperator: '<S576>/Comparison2' incorporates:
     *  Constant: '<S578>/Calib'
     */
    rtb_Logical1_h = (rtb_TmpSignalConversionAtVePMPR_n_HT_Aux <
                      KeCPDR_n_HTAP_MinCmdThrshld);

    /* Logic: '<S576>/Logical1' */
    rtb_AND_gr = !rtb_TmpSignalConversionAtPropSysActv_AD_;

    /* Outputs for Atomic SubSystem: '<S576>/Stop Watch Reset Enabled2' */
    /* Switch: '<S584>/Switch' incorporates:
     *  Constant: '<S584>/Constant Value2'
     *  Logic: '<S576>/Logical3'
     *  UnitDelay: '<S584>/Unit Delay'
     */
    if (rtb_Logical1_h || rtb_AND_gr)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_jo = 0.0F;
    }
    else
    {
        /* UnitDelay: '<S584>/Unit Delay' incorporates:
         *  Constant: '<S576>/Constant Value1'
         *  Sum: '<S584>/Subtraction'
         *  Switch: '<S584>/Switch2'
         */
        CPDR_ac_DW.UnitDelay_DSTATE_jo += 0.1F;
    }

    /* End of Switch: '<S584>/Switch' */
    /* End of Outputs for SubSystem: '<S576>/Stop Watch Reset Enabled2' */

    /* RelationalOperator: '<S581>/Comparison1' incorporates:
     *  Constant: '<S587>/Calib'
     *  UnitDelay: '<S584>/Unit Delay'
     */
    rtb_AND3_k = (CPDR_ac_DW.UnitDelay_DSTATE_jo >
                  KeCPDR_t_IUMPR_HTAP_MinConsecTime_CmdOn);

    /* Outputs for Atomic SubSystem: '<S576>/Stop Watch Reset Enabled' */
    /* Switch: '<S583>/Switch' incorporates:
     *  Constant: '<S583>/Constant Value2'
     *  Logic: '<S576>/Logical4'
     *  Switch: '<S583>/Switch2'
     *  UnitDelay: '<S583>/Unit Delay'
     */
    if (rtb_AND_gr)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_bv = 0.0F;
    }
    else
    {
        if (!rtb_Logical1_h)
        {
            /* UnitDelay: '<S583>/Unit Delay' incorporates:
             *  Constant: '<S576>/Constant Value2'
             *  Sum: '<S583>/Subtraction'
             *  Switch: '<S583>/Switch2'
             */
            CPDR_ac_DW.UnitDelay_DSTATE_bv += 0.1F;
        }
    }

    /* End of Switch: '<S583>/Switch' */
    /* End of Outputs for SubSystem: '<S576>/Stop Watch Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S581>/EdgeRising' */
    /* Logic: '<S585>/OR1' incorporates:
     *  UnitDelay: '<S585>/Unit Delay'
     */
    rtb_Logical1_h = !CPDR_ac_DW.UnitDelay_DSTATE_ce;

    /* Update for UnitDelay: '<S585>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_ce = rtb_AND3_k;

    /* End of Outputs for SubSystem: '<S581>/EdgeRising' */

    /* Switch: '<S581>/Switch' incorporates:
     *  Constant: '<S581>/Constant Value5'
     *  Logic: '<S585>/AND'
     *  Sum: '<S581>/Sum'
     *  UnitDelay: '<S581>/Unit Delay'
     */
    if (rtb_AND_gr)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_n = 0.0F;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S581>/EdgeRising' */
        CPDR_ac_DW.UnitDelay_DSTATE_n += (float32)((rtb_AND3_k && rtb_Logical1_h)
            ? 1 : 0);

        /* End of Outputs for SubSystem: '<S581>/EdgeRising' */
    }

    /* End of Switch: '<S581>/Switch' */

    /* Outputs for Atomic SubSystem: '<S576>/Signal Latch On With Reset' */
    /* Logic: '<S582>/OR1' incorporates:
     *  Constant: '<S586>/Calib'
     *  Constant: '<S588>/Calib'
     *  Logic: '<S581>/Logical4'
     *  Logic: '<S582>/NOT'
     *  Logic: '<S582>/OR'
     *  RelationalOperator: '<S581>/Comparison2'
     *  RelationalOperator: '<S581>/Comparison4'
     *  UnitDelay: '<S581>/Unit Delay'
     *  UnitDelay: '<S582>/Unit Delay'
     *  UnitDelay: '<S583>/Unit Delay'
     */
    CPDR_ac_DW.UnitDelay_DSTATE_pc1 = (((CPDR_ac_DW.UnitDelay_DSTATE_bv >=
        KeCPDR_t_IUMPR_HTAP_MinCumlTime_CmdOn) || (CPDR_ac_DW.UnitDelay_DSTATE_n
        >= KeCPDR_Cnt_IUMPR_HTAP_MinConsecCnt_CmdOn)) || ((!rtb_AND_gr) &&
        (CPDR_ac_DW.UnitDelay_DSTATE_pc1)));

    /* End of Outputs for SubSystem: '<S576>/Signal Latch On With Reset' */

    /* Logic: '<S577>/Logical5' incorporates:
     *  Constant: '<S589>/Constant1'
     *  Constant: '<S589>/Constant2'
     *  Constant: '<S590>/Constant1'
     *  Constant: '<S590>/Constant2'
     *  Constant: '<S591>/Constant1'
     *  Constant: '<S591>/Constant2'
     *  Constant: '<S592>/Constant1'
     *  Constant: '<S592>/Constant2'
     *  Constant: '<S593>/Constant1'
     *  Constant: '<S593>/Constant2'
     *  Constant: '<S594>/Calib'
     *  Constant: '<S595>/Calib'
     *  Constant: '<S596>/Calib'
     *  Constant: '<S597>/Calib'
     *  Constant: '<S598>/Calib'
     *  DataStoreRead: '<S589>/StatusByte_CoolPmpACtrlCktPerf'
     *  DataStoreRead: '<S590>/StatusByte_LIN1_BusOff'
     *  DataStoreRead: '<S591>/StatusByte_LIN2_BusOff'
     *  Logic: '<S577>/Logical'
     *  Logic: '<S577>/Logical1'
     *  Logic: '<S577>/Logical2'
     *  Logic: '<S577>/Logical3'
     *  Logic: '<S577>/Logical4'
     *  Logic: '<S589>/Logical Operator'
     *  Logic: '<S590>/Logical Operator'
     *  Logic: '<S591>/Logical Operator'
     *  Logic: '<S592>/Logical Operator'
     *  Logic: '<S593>/Logical Operator'
     *  RelationalOperator: '<S589>/Relational Operator1'
     *  RelationalOperator: '<S589>/Relational Operator2'
     *  RelationalOperator: '<S590>/Relational Operator1'
     *  RelationalOperator: '<S590>/Relational Operator2'
     *  RelationalOperator: '<S591>/Relational Operator1'
     *  RelationalOperator: '<S591>/Relational Operator2'
     *  RelationalOperator: '<S592>/Relational Operator1'
     *  RelationalOperator: '<S592>/Relational Operator2'
     *  RelationalOperator: '<S593>/Relational Operator1'
     *  RelationalOperator: '<S593>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S589>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S590>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S590>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S591>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S591>/Bitwise Operator2'
     */
    rtb_AND_gr = (((((((VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp > 0) &&
                       (VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_0 == 0U)) &&
                      (KeCPDR_b_IUMPR_HTAP_Perf_LOC_ChkEnbl)) ||
                     (((VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_2 > 0) &&
                       (VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_1 == 0U)) &&
                      (KeCPDR_b_IUMPR_HTAP_Perf_CrktChkEnbl))) || ((((((sint32)
                         CPDR_ac_DW.StatusByte_LIN1_BusOff) & 1) > 0) &&
                      ((((uint32)CPDR_ac_DW.StatusByte_LIN1_BusOff) & 64U) == 0U))
                     && (KeCPDR_b_IUMPR_HTAP_Perf_LINBus1_ChkEnbl))) ||
                   ((((((sint32)CPDR_ac_DW.StatusByte_LIN2_BusOff) & 1) > 0) &&
                     ((((uint32)CPDR_ac_DW.StatusByte_LIN2_BusOff) & 64U) == 0U))
                    && (KeCPDR_b_IUMPR_HTAP_Perf_LINBus2_ChkEnbl))) ||
                  ((((((sint32)CPDR_ac_DW.StatusByte_CoolPmpACtrlCktPerf) & 1) >
                     0) && (rtb_RelationalOperator3_m_tmp == 0U)) &&
                   (KeCPDR_b_IUMPR_HTAP_Perf_HTAP_PerfChkEnbl)));

    /* End of Outputs for SubSystem: '<S574>/AHP_Diagnostics_FUNC' */
#endif

    /* End of SignalConversion generated from: '<S2>/VePMPR_n_HT_AuxPmpCmd' */
    /* End of Outputs for SubSystem: '<S174>/AHP_Diagnostics' */

    /* SignalConversion generated from: '<S2>/VePMPR_n_LT_PsvPmpCmd' incorporates:
     *  Inport: '<Root>/VePMIR_b_LTPsvPumpDryRun_FA'
     *  Inport: '<Root>/VePMIR_b_LTPsvPumpTemp_FA'
     *  Inport: '<Root>/VePMIR_b_LTPsvPump_RPMAct_SNA'
     *  Inport: '<Root>/VePMIR_e_LTPsvPumpLmpHM'
     *  Inport: '<Root>/VePMIR_e_LTPsvPumpMntrRPM'
     *  SignalConversion generated from: '<S175>/LTCL_Flags'
     *  SignalConversion generated from: '<S2>/LTPP_MaxOpRPM_AD_Read'
     *  SignalConversion generated from: '<S2>/VePMIR_T_LTPsvPumpTemp'
     *  SignalConversion generated from: '<S2>/VePMIR_n_LTPsvPump_RPMAct'
     * */
#if Rte_SysCon_Variant_CPDR_5

    /* Outputs for Atomic SubSystem: '<S175>/LTPP_Diagnostics' */
    /* Outputs for Atomic SubSystem: '<S682>/LTPP_Diagnostics_FUNC' */
    /* SignalConversion generated from: '<S2>/VePMPR_n_LT_PsvPmpCmd' incorporates:
     *  Inport: '<Root>/VePMPR_n_LT_PsvPmpCmd'
     */
    (void)Rte_Read_VePMPR_n_LT_PsvPmpCmd_Value
        (&rtb_TmpSignalConversionAtVePMPR_n_LT_Psv);

    /* SignalConversion generated from: '<S2>/VePMIR_T_LTPsvPumpTemp' incorporates:
     *  Inport: '<Root>/VePMIR_T_LTPsvPumpTemp'
     */
    (void)Rte_Read_VePMIR_T_LTPsvPumpTemp_Value
        (&rtb_TmpSignalConversionAtVePMIR_T_LTPsvP);

    /* SignalConversion generated from: '<S2>/VePMIR_n_LTPsvPump_RPMAct' incorporates:
     *  Inport: '<Root>/VePMIR_n_LTPsvPump_RPMAct'
     */
    (void)Rte_Read_VePMIR_n_LTPsvPump_RPMAct_Value
        (&rtb_TmpSignalConversionAtVePMIR_n_LTPsvP);

    /* SignalConversion generated from: '<S2>/LTPP_MaxOpRPM_AD_Read' incorporates:
     *  Merge: '<Root>/LTPP_MaxOpRPM_AD_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVePMPR_n_HT_Aux =
        Rte_IrvRead_CPDR_MedTEH_LTPP_MaxOpRPM_AD_write_IRV();
    (void)Rte_Read_VePMIR_b_LTPsvPumpDryRun_FA_Value(&rtb_NOT4_p);

    /* Switch: '<S859>/Switch' incorporates:
     *  Constant: '<S860>/Constant1'
     *  Constant: '<S860>/Constant2'
     *  Constant: '<S861>/Constant1'
     *  Constant: '<S861>/Constant2'
     *  Constant: '<S862>/Calib'
     *  DataStoreRead: '<S860>/StatusByte_LIN1_BusOff'
     *  DataStoreRead: '<S861>/StatusByte_LIN2_BusOff'
     *  Inport: '<Root>/VePMIR_b_LTPsvPumpDryRun_FA'
     *  Logic: '<S860>/Logical Operator'
     *  Logic: '<S861>/Logical Operator'
     *  RelationalOperator: '<S860>/Relational Operator1'
     *  RelationalOperator: '<S860>/Relational Operator2'
     *  RelationalOperator: '<S861>/Relational Operator1'
     *  RelationalOperator: '<S861>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S860>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S860>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S861>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S861>/Bitwise Operator2'
     */
    if (KeCPDR_b_PECP_LIN_Bus)
    {
        rtb_TmpSignalConversionAtBPCM_LIN_BusOff = (((((sint32)
            CPDR_ac_DW.StatusByte_LIN2_BusOff) & 1) > 0) && ((((uint32)
            CPDR_ac_DW.StatusByte_LIN2_BusOff) & 64U) == 0U));
    }
    else
    {
        rtb_TmpSignalConversionAtBPCM_LIN_BusOff = (((((sint32)
            CPDR_ac_DW.StatusByte_LIN1_BusOff) & 1) > 0) && ((((uint32)
            CPDR_ac_DW.StatusByte_LIN1_BusOff) & 64U) == 0U));
    }

    /* End of Switch: '<S859>/Switch' */

    /* S-Function (sfix_bitop): '<S849>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S849>/StatusByte_LostCommMtrElectCoolPmpA'
     *  S-Function (sfix_bitop): '<S888>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S967>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S975>/Bitwise Operator2'
     */
    VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp = ((sint32)
        CPDR_ac_DW.StatusByte_LostCommMtrElectCoolPmpA) & 1;

    /* S-Function (sfix_bitop): '<S849>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S849>/StatusByte_LostCommMtrElectCoolPmpA'
     *  S-Function (sfix_bitop): '<S888>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S967>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S975>/Bitwise Operator1'
     */
    VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_0 = ((uint32)
        CPDR_ac_DW.StatusByte_LostCommMtrElectCoolPmpA) & 64U;

    /* S-Function (sfix_bitop): '<S850>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S850>/StatusByte_ThrmlRlyCtrlCkt'
     *  S-Function (sfix_bitop): '<S890>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S968>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S978>/Bitwise Operator2'
     */
    VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_2 = ((sint32)
        CPDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 1;

    /* S-Function (sfix_bitop): '<S850>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S850>/StatusByte_ThrmlRlyCtrlCkt'
     *  S-Function (sfix_bitop): '<S890>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S968>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S978>/Bitwise Operator1'
     */
    VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_1 = ((uint32)
        CPDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 64U;

    /* Logic: '<S845>/AND3' incorporates:
     *  Constant: '<S848>/Constant'
     *  Constant: '<S849>/Constant1'
     *  Constant: '<S849>/Constant2'
     *  Constant: '<S850>/Constant1'
     *  Constant: '<S850>/Constant2'
     *  Constant: '<S851>/Calib'
     *  Constant: '<S852>/Calib'
     *  Constant: '<S853>/Calib'
     *  Constant: '<S854>/Calib'
     *  Constant: '<S855>/Calib'
     *  Constant: '<S856>/Calib'
     *  Constant: '<S857>/Calib'
     *  Constant: '<S858>/Calib'
     *  Logic: '<S845>/AND1'
     *  Logic: '<S845>/AND10'
     *  Logic: '<S845>/AND13'
     *  Logic: '<S845>/AND14'
     *  Logic: '<S845>/AND15'
     *  Logic: '<S845>/AND16'
     *  Logic: '<S845>/AND2'
     *  Logic: '<S845>/AND24'
     *  Logic: '<S845>/AND31'
     *  Logic: '<S845>/AND4'
     *  Logic: '<S845>/AND5'
     *  Logic: '<S849>/Logical Operator'
     *  Logic: '<S850>/Logical Operator'
     *  RelationalOperator: '<S845>/Comparison1'
     *  RelationalOperator: '<S845>/Comparison12'
     *  RelationalOperator: '<S849>/Relational Operator1'
     *  RelationalOperator: '<S849>/Relational Operator2'
     *  RelationalOperator: '<S850>/Relational Operator1'
     *  RelationalOperator: '<S850>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S849>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S849>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S850>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S850>/Bitwise Operator2'
     */
    VeCPDR_b_LTPP_DryRun_ChkEnbl = (((((((((((uint32)
        rtb_TmpSignalConversionAtVePMTR_e_ThrmlD) != CePMTR_e_DISBL_All_Thrml) ||
        (KeCPDR_b_LTPP_DryRun_ThrmlEnbl)) &&
        (rtb_TmpSignalConversionAtVeTMIR_b_MainRl ||
         (KeCPDR_b_LTPP_DryRun_MainRly_OV))) && ((!rtb_NOT4_p) ||
        (KeCPDR_b_LTPP_DryRun_FA))) &&
        ((rtb_TmpSignalConversionAtVePMPR_n_LT_Psv >=
          KeCPDR_n_DryRun_Detection_RPM) || (KeCPDR_b_DryRun_Detection_RPM_OV)))
        && (((VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp <= 0) ||
             (VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_0 != 0U)) ||
            (KeCPDR_b_LTPP_LOCFltDtct))) &&
        (((VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_2 <= 0) ||
          (VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_1 != 0U)) ||
         (KeCPDR_b_LTPP_ThrmlRlyCtrlCkt_FA_OV))) &&
        ((!rtb_TmpSignalConversionAtBPCM_LIN_BusOff) ||
         (KeCPDR_b_LTPP_LINBusoff_FA_OV))) &&
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag);

    /* S-Function (sfix_bitop): '<S867>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S847>/Data Store Read'
     *  S-Function (sfix_bitop): '<S889>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S976>/Bitwise Operator1'
     */
    rtb_RelationalOperator3_m_tmp = ((uint32)
        CPDR_ac_DW.StatusByte_MtrElect_CoolPumAOvrSpd) & 64U;

    /* RelationalOperator: '<S867>/Relational Operator3' incorporates:
     *  Constant: '<S867>/Constant3'
     *  S-Function (sfix_bitop): '<S867>/Bitwise Operator2'
     */
    rtb_AND3_k = (rtb_RelationalOperator3_m_tmp == 0U);

    /* Outputs for Atomic SubSystem: '<S867>/EdgeFalling1' */
    /* Logic: '<S867>/Logical Operator' incorporates:
     *  Logic: '<S869>/OR1'
     */
    rtb_Logical1_h = !rtb_AND3_k;

    /* End of Outputs for SubSystem: '<S867>/EdgeFalling1' */

    /* Logic: '<S867>/Logical1' incorporates:
     *  Constant: '<S865>/Calib'
     *  Constant: '<S866>/Calib'
     *  Constant: '<S867>/Constant1'
     *  DataStoreRead: '<S847>/Data Store Read'
     *  Logic: '<S847>/Logical1'
     *  Logic: '<S867>/Logical Operator'
     *  Logic: '<S867>/Logical10'
     *  Logic: '<S867>/Logical12'
     *  RelationalOperator: '<S867>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S867>/Bitwise Operator3'
     */
    rtb_Logical1_cy = (((VeCPDR_b_LTPP_DryRun_ChkEnbl) ||
                        (KeCPDR_b_LTPP_DryRun_ChkEnbl_OV)) &&
                       ((!KeCPDR_b_MtrElect_CoolPumAOvrSpd_LtchEnbl) ||
                        (((((uint32)
                            CPDR_ac_DW.StatusByte_MtrElect_CoolPumAOvrSpd) & 1U)
                          == 0U) || rtb_Logical1_h)));

    /* Logic: '<S842>/NOT4' */
    rtb_NOT4_p = (rtb_TmpSignalConversionAtDsblDiagFailSaf ||
                  rtb_TmpSignalConversionAtPostCodeClrDiag);

    /* Outputs for Atomic SubSystem: '<S867>/EdgeFalling1' */
    /* Logic: '<S869>/AND' incorporates:
     *  UnitDelay: '<S869>/Unit Delay'
     */
    rtb_Logical1_h = (rtb_Logical1_h && (CPDR_ac_DW.UnitDelay_DSTATE_cg));

    /* Update for UnitDelay: '<S869>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_cg = rtb_AND3_k;

    /* End of Outputs for SubSystem: '<S867>/EdgeFalling1' */

    /* Logic: '<S867>/Logical5' */
    rtb_AND3_k = (rtb_NOT4_p || rtb_Logical1_h);

    /* Outputs for Atomic SubSystem: '<S868>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S868>/Counter Reset  Enabled ' */
    /* Switch: '<S875>/Switch1' incorporates:
     *  Inport: '<Root>/VePMIR_e_LTPsvPumpDryRun'
     *  Logic: '<S868>/Fail Counter Reset'
     *  Switch: '<S876>/Switch1'
     *  UnitDelay: '<S868>/Unit Delay'
     *  UnitDelay: '<S868>/Unit Delay1'
     */
    if ((rtb_AND3_k || (CPDR_ac_DW.UnitDelay_DSTATE_mw)) ||
            (CPDR_ac_DW.UnitDelay1_DSTATE_a))
    {
        /* Switch: '<S875>/Switch1' incorporates:
         *  Constant: '<S875>/Constant Value2'
         */
        VeCPDR_Cnt_LTPP_DryRun_FailCnt = 0U;

        /* Switch: '<S876>/Switch1' incorporates:
         *  Constant: '<S876>/Constant Value2'
         */
        VeCPDR_Cnt_LTPP_DryRun_SmpCnt = 0U;
    }
    else
    {
        (void)Rte_Read_VePMIR_e_LTPsvPumpDryRun_Value(&tmpRead_3);

        /* Switch: '<S875>/Switch2' incorporates:
         *  Constant: '<S844>/Calib'
         *  Inport: '<Root>/VePMIR_e_LTPsvPumpDryRun'
         *  Logic: '<S868>/NOT6'
         *  RelationalOperator: '<S846>/Comparison4'
         */
        if (rtb_Logical1_cy && (tmpRead_3 == KeCPDR_e_PECPDryRunChk))
        {
            /* Switch: '<S875>/Switch1' incorporates:
             *  Constant: '<S875>/Constant Value1'
             *  Sum: '<S875>/Subtraction'
             *  Switch: '<S875>/Switch2'
             *  UnitDelay: '<S875>/Unit Delay'
             */
            VeCPDR_Cnt_LTPP_DryRun_FailCnt = (uint16)(((uint32)
                VeCPDR_Cnt_LTPP_DryRun_FailCnt) + 1U);
        }

        /* End of Switch: '<S875>/Switch2' */

        /* Switch: '<S876>/Switch2' */
        if (rtb_Logical1_cy)
        {
            /* Switch: '<S876>/Switch1' incorporates:
             *  Constant: '<S876>/Constant Value1'
             *  Sum: '<S876>/Subtraction'
             *  Switch: '<S876>/Switch2'
             *  UnitDelay: '<S876>/Unit Delay'
             */
            VeCPDR_Cnt_LTPP_DryRun_SmpCnt = (uint16)(((uint32)
                VeCPDR_Cnt_LTPP_DryRun_SmpCnt) + 1U);
        }

        /* End of Switch: '<S876>/Switch2' */
    }

    /* End of Switch: '<S875>/Switch1' */
    /* End of Outputs for SubSystem: '<S868>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S868>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S868>/Greater Than or Equal ' incorporates:
     *  Constant: '<S863>/Calib'
     */
    CPDR_ac_DW.UnitDelay1_DSTATE_a = (((sint32)VeCPDR_Cnt_LTPP_DryRun_FailCnt) >=
        ((sint32)KeCPDR_Cnt_PECPDryRunFlt_FailCnt));

    /* Logic: '<S868>/NOT5' incorporates:
     *  Constant: '<S864>/Calib'
     *  Logic: '<S868>/NOT3'
     *  RelationalOperator: '<S868>/Less Than  or Equal'
     */
    rtb_Logical1_cy = ((((sint32)VeCPDR_Cnt_LTPP_DryRun_SmpCnt) >= ((sint32)
                         KeCPDR_Cnt_PECPDryRunFlt_SmpCnt)) &&
                       (!CPDR_ac_DW.UnitDelay1_DSTATE_a));

    /* Switch: '<S881>/Switch1' incorporates:
     *  Constant: '<S874>/Constant Value'
     *  DataStoreWrite: '<S847>/Data Store Write1'
     *  Switch: '<S880>/Switch1'
     */
    if (rtb_TmpSignalConversionAtPostCodeClrDiag)
    {
        CPDR_ac_DW.NeCPDR_Cnt_LTPP_FunDryRun_MFOP = 0U;
    }
    else
    {
        if (rtb_Logical1_cy)
        {
            /* MinMax: '<S874>/Minimum2' incorporates:
             *  DataStoreRead: '<S847>/Data Store Read3'
             *  Switch: '<S880>/Switch1'
             */
            if (VeCPDR_Cnt_LTPP_DryRun_FailCnt >
                    CPDR_ac_DW.NeCPDR_Cnt_LTPP_FunDryRun_MFOP)
            {
                /* DataStoreWrite: '<S847>/Data Store Write1' incorporates:
                 *  Switch: '<S880>/Switch1'
                 */
                CPDR_ac_DW.NeCPDR_Cnt_LTPP_FunDryRun_MFOP =
                    VeCPDR_Cnt_LTPP_DryRun_FailCnt;
            }

            /* End of MinMax: '<S874>/Minimum2' */
        }
    }

    /* End of Switch: '<S881>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S867>/Fail' */
    CPDR_ac_Fail(CPDR_ac_DW.UnitDelay1_DSTATE_a, &CPDR_ac_B.Merge_c);

    /* End of Outputs for SubSystem: '<S867>/Fail' */

    /* Outputs for Enabled SubSystem: '<S867>/Init' */
    CPDR_ac_Init_g(rtb_AND3_k, &CPDR_ac_B.Merge_c);

    /* End of Outputs for SubSystem: '<S867>/Init' */

    /* Outputs for Enabled SubSystem: '<S867>/Pass' */
    CPDR_ac_Pass(rtb_Logical1_cy, &CPDR_ac_B.Merge_c);

    /* End of Outputs for SubSystem: '<S867>/Pass' */

    /* RelationalOperator: '<S867>/Relational Operator' incorporates:
     *  Constant: '<S870>/Constant'
     *  Merge: '<S867>/Merge'
     */
    VeCPDR_b_LTPP_DryRun_FltDtct = (((uint32)CPDR_ac_B.Merge_c) == CeDFIB_e_Fail);

    /* Logic: '<S896>/Logical2' incorporates:
     *  Constant: '<S941>/Calib'
     *  Constant: '<S942>/Calib'
     *  RelationalOperator: '<S896>/Comparison4'
     *  RelationalOperator: '<S896>/Comparison5'
     */
    VeCPDR_b_LTPP_VltgInRange = ((rtb_TmpSignalConversionAtBF1_SysVolt_AD_ <=
        KeCPDR_U_LTPP_MaxOprtngVltg) &&
        (rtb_TmpSignalConversionAtBF1_SysVolt_AD_ >= KeCPDR_U_LTPP_MinOprtngVltg));

    /* UnitDelay: '<S886>/Unit Delay' */
    VeCPDR_b_LTPP_FunPer_FltDtctPre = CPDR_ac_DW.UnitDelay_DSTATE_h1;
    (void)Rte_Read_VePMIR_e_LTPsvPumpLmpHM_Value(&tmpRead);

    /* Logic: '<S895>/Logical2' incorporates:
     *  Constant: '<S939>/Calib'
     *  Constant: '<S940>/Calib'
     *  Inport: '<Root>/VePMIR_e_LTPsvPumpLmpHM'
     *  RelationalOperator: '<S895>/Comparison4'
     *  RelationalOperator: '<S895>/Comparison5'
     */
    VeCPDR_b_LTPP_PumpTempChk = ((rtb_TmpSignalConversionAtVePMIR_T_LTPsvP <
        KeCPDR_T_LTPP_PumpTempUprLim) &&
        (rtb_TmpSignalConversionAtVePMIR_T_LTPsvP > KeCPDR_T_LTPP_PumpTempLwrLim));

    /* RelationalOperator: '<S885>/Comparison1' */
    VeCPDR_b_LTPP_CmdLessLim = (rtb_TmpSignalConversionAtVePMPR_n_LT_Psv <
        rtb_TmpSignalConversionAtVePMPR_n_HT_Aux);

    /* Switch: '<S891>/Switch3' incorporates:
     *  Constant: '<S907>/Constant'
     *  Inport: '<Root>/VePMIR_e_LTPsvPumpLmpHM'
     *  RelationalOperator: '<S891>/Comparison3'
     */
    if (((uint32)tmpRead) == CePMPR_e_FTSNA_False)
    {
        /* Switch: '<S891>/Switch3' incorporates:
         *  Constant: '<S891>/TRUE Constant2'
         */
        VeCPDR_b_LTPP_LimpHmChek_Enb = true;
    }
    else
    {
        /* Switch: '<S891>/Switch3' incorporates:
         *  Constant: '<S908>/Calib'
         *  Logic: '<S891>/AND18'
         *  Switch: '<S891>/Switch1'
         */
        VeCPDR_b_LTPP_LimpHmChek_Enb = ((!VeCPDR_b_LTPP_CmdLessLim) &&
            (KeCPDR_b_LTPsvPump_LmpHMEvent_OV));
    }

    /* End of Switch: '<S891>/Switch3' */
    (void)Rte_Read_VePMIR_e_LTPsvPumpMntrRPM_Value(&tmpRead_1);

    /* Switch: '<S892>/Switch3' incorporates:
     *  Constant: '<S909>/Constant'
     *  Inport: '<Root>/VePMIR_e_LTPsvPumpMntrRPM'
     *  RelationalOperator: '<S892>/Comparison3'
     */
    if (((uint32)tmpRead_1) == CePMPR_e_TFSNA_True)
    {
        /* Switch: '<S892>/Switch3' incorporates:
         *  Constant: '<S892>/TRUE Constant2'
         */
        VeCPDR_b_LTPP_MntrChedEnb = true;
    }
    else
    {
        /* Switch: '<S892>/Switch3' incorporates:
         *  Constant: '<S910>/Calib'
         *  Logic: '<S892>/AND18'
         *  Switch: '<S892>/Switch1'
         */
        VeCPDR_b_LTPP_MntrChedEnb = ((!VeCPDR_b_LTPP_CmdLessLim) &&
            (KeCPDR_b_LTPsvPumpMntrRPMEvent_OV));
    }

    /* End of Switch: '<S892>/Switch3' */
    (void)Rte_Read_VePMIR_b_LTPsvPumpTemp_FA_Value(&rtb_AND_ci);

    /* Switch: '<S894>/Switch' incorporates:
     *  Constant: '<S936>/Constant1'
     *  Constant: '<S936>/Constant2'
     *  Constant: '<S937>/Constant1'
     *  Constant: '<S937>/Constant2'
     *  Constant: '<S938>/Calib'
     *  DataStoreRead: '<S936>/StatusByte_LIN1_BusOff'
     *  DataStoreRead: '<S937>/StatusByte_LIN2_BusOff'
     *  Inport: '<Root>/VePMIR_b_LTPsvPumpTemp_FA'
     *  Logic: '<S936>/Logical Operator'
     *  Logic: '<S937>/Logical Operator'
     *  RelationalOperator: '<S936>/Relational Operator1'
     *  RelationalOperator: '<S936>/Relational Operator2'
     *  RelationalOperator: '<S937>/Relational Operator1'
     *  RelationalOperator: '<S937>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S936>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S936>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S937>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S937>/Bitwise Operator2'
     */
    if (KeCPDR_b_PECP_LIN_Bus)
    {
        rtb_TmpSignalConversionAtBPCM_LIN_BusOff = (((((sint32)
            CPDR_ac_DW.StatusByte_LIN2_BusOff) & 1) > 0) && ((((uint32)
            CPDR_ac_DW.StatusByte_LIN2_BusOff) & 64U) == 0U));
    }
    else
    {
        rtb_TmpSignalConversionAtBPCM_LIN_BusOff = (((((sint32)
            CPDR_ac_DW.StatusByte_LIN1_BusOff) & 1) > 0) && ((((uint32)
            CPDR_ac_DW.StatusByte_LIN1_BusOff) & 64U) == 0U));
    }

    /* End of Switch: '<S894>/Switch' */

    /* S-Function (sfix_bitop): '<S889>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S889>/StatusByte_MtrElect_CoolPumAOvrSpd'
     *  S-Function (sfix_bitop): '<S976>/Bitwise Operator2'
     */
    VeCPDR_b_BCP_CommonEnblConds_tmp = ((sint32)
        CPDR_ac_DW.StatusByte_MtrElect_CoolPumAOvrSpd) & 1;

    /* Logic: '<S912>/AND3' incorporates:
     *  Constant: '<S888>/Constant1'
     *  Constant: '<S888>/Constant2'
     *  Constant: '<S889>/Constant1'
     *  Constant: '<S889>/Constant2'
     *  Constant: '<S890>/Constant1'
     *  Constant: '<S890>/Constant2'
     *  Constant: '<S915>/Constant'
     *  Constant: '<S916>/Calib'
     *  Constant: '<S917>/Calib'
     *  Constant: '<S918>/Calib'
     *  Constant: '<S919>/Calib'
     *  Constant: '<S920>/Calib'
     *  Constant: '<S921>/Calib'
     *  Constant: '<S922>/Calib'
     *  Constant: '<S923>/Calib'
     *  Constant: '<S924>/Calib'
     *  Constant: '<S925>/Calib'
     *  Constant: '<S926>/Calib'
     *  Constant: '<S927>/Calib'
     *  Constant: '<S928>/Calib'
     *  Logic: '<S888>/Logical Operator'
     *  Logic: '<S889>/Logical Operator'
     *  Logic: '<S890>/Logical Operator'
     *  Logic: '<S912>/AND1'
     *  Logic: '<S912>/AND10'
     *  Logic: '<S912>/AND11'
     *  Logic: '<S912>/AND13'
     *  Logic: '<S912>/AND14'
     *  Logic: '<S912>/AND15'
     *  Logic: '<S912>/AND16'
     *  Logic: '<S912>/AND19'
     *  Logic: '<S912>/AND22'
     *  Logic: '<S912>/AND23'
     *  Logic: '<S912>/AND24'
     *  Logic: '<S912>/AND31'
     *  Logic: '<S912>/AND4'
     *  Logic: '<S912>/AND5'
     *  Logic: '<S912>/AND6'
     *  Logic: '<S912>/AND7'
     *  Logic: '<S912>/AND8'
     *  Logic: '<S912>/Logical1'
     *  Logic: '<S912>/Logical2'
     *  RelationalOperator: '<S888>/Relational Operator1'
     *  RelationalOperator: '<S888>/Relational Operator2'
     *  RelationalOperator: '<S889>/Relational Operator1'
     *  RelationalOperator: '<S889>/Relational Operator2'
     *  RelationalOperator: '<S890>/Relational Operator1'
     *  RelationalOperator: '<S890>/Relational Operator2'
     *  RelationalOperator: '<S912>/Comparison12'
     *  S-Function (sfix_bitop): '<S889>/Bitwise Operator2'
     */
    VeCPDR_b_LTPP_CommonEnblConds = (((((((((((((((((uint32)
        rtb_TmpSignalConversionAtVePMTR_e_ThrmlD) != CePMTR_e_DISBL_All_Thrml) ||
        (KeCPDR_b_LTPP_FunPer_ThrmlEnbl)) &&
        (rtb_TmpSignalConversionAtVeTMIR_b_MainRl ||
         (KeCPDR_b_LTPP_FunPer_MainRly_OV))) && ((VeCPDR_b_LTPP_VltgInRange) ||
        (KeCPDR_b_LTPP_VltgInRange_OV))) && ((!VeCPDR_b_LTPP_FunPer_FltDtctPre) ||
        (KeCPDR_b_LTPP_FunPerFlt))) && (((VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp <= 0)
        || (VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_0 != 0U)) ||
        (KeCPDR_b_LTPP_LOCFltDtct))) && (((VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_2 <=
        0) || (VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_1 != 0U)) ||
        (KeCPDR_b_LTPP_ThrmlRlyCtrlCkt_FA_OV))) &&
        ((!rtb_TmpSignalConversionAtBPCM_LIN_BusOff) ||
         (KeCPDR_b_LTPP_LINBusoff_FA_OV))) && ((VeCPDR_b_LTPP_PumpTempChk) ||
        (KeCPDR_b_LTPP_PumpTempChk_OV))) &&
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag) &&
        (((VeCPDR_b_BCP_CommonEnblConds_tmp <= 0) ||
          (rtb_RelationalOperator3_m_tmp != 0U)) || (KeCPDR_b_LTPsvPumpDryRun_OV)))
        && ((VeCPDR_b_LTPP_LimpHmChek_Enb) || (KeCPDR_b_LTPsvPump_LmpHM_OV))) &&
        ((VeCPDR_b_LTPP_MntrChedEnb) || (KeCPDR_b_LTPsvPumpMntrRPM_OV))) &&
        ((VeCPDR_b_LTPP_CmdLessLim) || (KeCPDR_b_LTPP_CmdLessLimEvent_OV))) &&
        ((!rtb_AND_ci) || (KeCPDR_b_LTPP_Temp_FA_OV)));

    /* Outputs for Atomic SubSystem: '<S887>/DeltaOneStep1' */
    /* Sum: '<S897>/Sum//Sub' incorporates:
     *  UnitDelay: '<S897>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVePMIR_n_HTAuxP =
        rtb_TmpSignalConversionAtVePMPR_n_LT_Psv - CPDR_ac_DW.UnitDelay_DSTATE_m;

    /* Update for UnitDelay: '<S897>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_m = rtb_TmpSignalConversionAtVePMPR_n_LT_Psv;

    /* End of Outputs for SubSystem: '<S887>/DeltaOneStep1' */

    /* Sum: '<S885>/Add' incorporates:
     *  Abs: '<S887>/Abs'
     */
    rtb_TmpSignalConversionAtVePMIR_n_HTAuxP = fabsf
        (rtb_TmpSignalConversionAtVePMIR_n_HTAuxP);

    /* Outputs for Atomic SubSystem: '<S887>/Timer Retrigger Reset Enabled1' */
    /* Switch: '<S905>/Switch1' incorporates:
     *  Constant: '<S898>/Calib'
     *  Constant: '<S900>/Calib'
     *  Constant: '<S904>/Calib'
     *  Constant: '<S905>/Constant Value4'
     *  MinMax: '<S905>/Maximum'
     *  RelationalOperator: '<S887>/Greater Than or Equal 3'
     *  Sum: '<S905>/Subtraction'
     *  UnitDelay: '<S905>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVePMIR_n_HTAuxP >=
            KeCPDR_n_LTP_PmpPerf_DeltSpdsmall)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_e3 = KeCPDR_t_LTP_PmpPerf_DeltSpd_Small;
    }
    else
    {
        CPDR_ac_DW.UnitDelay_DSTATE_e3 = fmaxf(CPDR_ac_DW.UnitDelay_DSTATE_e3 -
            HeCPDR_t_MedTEH, 0.0F);
    }

    /* End of Switch: '<S905>/Switch1' */
    /* End of Outputs for SubSystem: '<S887>/Timer Retrigger Reset Enabled1' */

    /* Outputs for Atomic SubSystem: '<S887>/Timer Retrigger Reset Enabled2' */
    /* Switch: '<S906>/Switch1' incorporates:
     *  Constant: '<S898>/Calib'
     *  Constant: '<S899>/Calib'
     *  Constant: '<S903>/Calib'
     *  Constant: '<S906>/Constant Value4'
     *  MinMax: '<S906>/Maximum'
     *  RelationalOperator: '<S887>/Greater Than or Equal 4'
     *  Sum: '<S906>/Subtraction'
     *  UnitDelay: '<S906>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVePMIR_n_HTAuxP >=
            KeCPDR_n_LTP_PmpPerf_DeltSpdbig)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_b = KeCPDR_t_LTP_PmpPerf_DeltSpd_Big;
    }
    else
    {
        CPDR_ac_DW.UnitDelay_DSTATE_b = fmaxf(CPDR_ac_DW.UnitDelay_DSTATE_b -
            HeCPDR_t_MedTEH, 0.0F);
    }

    /* End of Switch: '<S906>/Switch1' */
    /* End of Outputs for SubSystem: '<S887>/Timer Retrigger Reset Enabled2' */
    (void)Rte_Read_VePMIR_b_LTPsvPump_RPMAct_SNA_Value(&rtb_AND3);

    /* Outputs for Atomic SubSystem: '<S887>/Timer Retrigger Reset Enabled1' */
    /* Outputs for Atomic SubSystem: '<S887>/Timer Retrigger Reset Enabled2' */
    /* Logic: '<S887>/Logical14' incorporates:
     *  Constant: '<S905>/Constant Value2'
     *  Constant: '<S906>/Constant Value2'
     *  Inport: '<Root>/VePMIR_b_LTPsvPump_RPMAct_SNA'
     *  Logic: '<S887>/Logical5'
     *  Logic: '<S887>/Logical6'
     *  RelationalOperator: '<S905>/Greater  Than1'
     *  RelationalOperator: '<S906>/Greater  Than1'
     *  UnitDelay: '<S905>/Unit Delay'
     *  UnitDelay: '<S906>/Unit Delay'
     */
    VeCPDR_b_LTP_PmpPerf_DeltSpdCmdEnbl = ((CPDR_ac_DW.UnitDelay_DSTATE_e3 <=
        0.0F) && (CPDR_ac_DW.UnitDelay_DSTATE_b <= 0.0F));

    /* End of Outputs for SubSystem: '<S887>/Timer Retrigger Reset Enabled2' */
    /* End of Outputs for SubSystem: '<S887>/Timer Retrigger Reset Enabled1' */

    /* Logic: '<S913>/AND12' incorporates:
     *  Constant: '<S901>/Calib'
     *  Constant: '<S902>/Calib'
     *  Constant: '<S929>/Calib'
     *  Constant: '<S930>/Calib'
     *  Constant: '<S931>/Calib'
     *  Logic: '<S913>/AND2'
     *  Logic: '<S913>/AND31'
     *  Logic: '<S913>/AND9'
     *  RelationalOperator: '<S887>/Greater Than or Equal 1'
     *  RelationalOperator: '<S887>/Greater Than or Equal 2'
     */
    VeCPDR_b_LTPP_PerfEnblConds = ((((rtb_TmpSignalConversionAtVePMPR_n_LT_Psv >=
        KeCPDR_n_LTP_PmpPerf_MinSpd) || (KeCPDR_b_LTPP_MinSpdChk_OV)) &&
        ((rtb_TmpSignalConversionAtVePMPR_n_LT_Psv <=
          KeCPDR_n_LTP_PmpPerf_MaxSpd) || (KeCPDR_b_LTPP_MaxSpdChk_OV))) &&
        ((VeCPDR_b_LTP_PmpPerf_DeltSpdCmdEnbl) ||
         (KeCPDR_b_LTPP_DeltSpdCmdEnbl_OV)));

    /* Logic: '<S893>/AND3' */
    rtb_AND3 = ((VeCPDR_b_LTPP_CommonEnblConds) && rtb_AND3);

    /* Outputs for Atomic SubSystem: '<S914>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S934>/EdgeRising' */
    /* Logic: '<S935>/AND' incorporates:
     *  Logic: '<S935>/OR1'
     *  UnitDelay: '<S935>/Unit Delay'
     */
    rtb_AND_ci = (rtb_AND3 && (!CPDR_ac_DW.UnitDelay_DSTATE_po));

    /* Update for UnitDelay: '<S935>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_po = rtb_AND3;

    /* End of Outputs for SubSystem: '<S934>/EdgeRising' */

    /* Switch: '<S934>/Switch1' incorporates:
     *  Constant: '<S932>/Calib'
     *  Constant: '<S933>/Calib'
     *  Constant: '<S934>/Constant Value1'
     *  Logic: '<S934>/OR'
     *  Logic: '<S934>/OR1'
     *  MinMax: '<S934>/Minimum'
     *  Sum: '<S934>/Summation'
     *  UnitDelay: '<S934>/Unit Delay'
     */
    if ((!rtb_AND3) || rtb_AND_ci)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_f = 0.0F;
    }
    else
    {
        CPDR_ac_DW.UnitDelay_DSTATE_f = fminf(KeCPDR_t_LTPP_rpmSNA_WaitTime,
            HeCPDR_t_MedTEH + CPDR_ac_DW.UnitDelay_DSTATE_f);
    }

    /* End of Switch: '<S934>/Switch1' */

    /* Logic: '<S934>/AND' incorporates:
     *  Constant: '<S933>/Calib'
     *  RelationalOperator: '<S934>/Greater  Than'
     *  UnitDelay: '<S934>/Unit Delay'
     */
    VeCPDR_b_LTPP_SpdSNAConfirmed = (rtb_AND3 && (CPDR_ac_DW.UnitDelay_DSTATE_f >=
        KeCPDR_t_LTPP_rpmSNA_WaitTime));

    /* End of Outputs for SubSystem: '<S914>/Turn On Delay Time' */

    /* Logic: '<S893>/AND1' incorporates:
     *  Constant: '<S911>/Calib'
     *  Logic: '<S893>/AND12'
     *  Logic: '<S893>/AND2'
     */
    rtb_AND3 = (((VeCPDR_b_LTPP_CommonEnblConds) && (VeCPDR_b_LTPP_PerfEnblConds))
                || ((KeCPDR_b_LTPP_SpdSNAEnblCndsOV) &&
                    (VeCPDR_b_LTPP_SpdSNAConfirmed)));

    /* S-Function (sfix_bitop): '<S948>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S886>/Data Store Read'
     *  S-Function (sfix_bitop): '<S977>/Bitwise Operator1'
     */
    rtb_RelationalOperator3_p_tmp = ((uint32)
        CPDR_ac_DW.StatusByte_PwrElecPmpPerf) & 64U;

    /* RelationalOperator: '<S948>/Relational Operator3' incorporates:
     *  Constant: '<S948>/Constant3'
     *  S-Function (sfix_bitop): '<S948>/Bitwise Operator2'
     */
    rtb_AND3_k = (rtb_RelationalOperator3_p_tmp == 0U);

    /* Outputs for Atomic SubSystem: '<S948>/EdgeFalling1' */
    /* Logic: '<S948>/Logical Operator' incorporates:
     *  Logic: '<S950>/OR1'
     */
    rtb_Logical1_h = !rtb_AND3_k;

    /* End of Outputs for SubSystem: '<S948>/EdgeFalling1' */

    /* Logic: '<S948>/Logical1' incorporates:
     *  Constant: '<S947>/Calib'
     *  Constant: '<S948>/Constant1'
     *  DataStoreRead: '<S886>/Data Store Read'
     *  Logic: '<S948>/Logical Operator'
     *  Logic: '<S948>/Logical10'
     *  Logic: '<S948>/Logical12'
     *  RelationalOperator: '<S948>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S948>/Bitwise Operator3'
     */
    rtb_AND_ci = (rtb_AND3 && ((!KeCPDR_b_PwrElecPmpPerf_LtchEnbl) ||
                   (((((uint32)CPDR_ac_DW.StatusByte_PwrElecPmpPerf) & 1U) == 0U)
                    || rtb_Logical1_h)));

    /* Abs: '<S885>/Abs' incorporates:
     *  Sum: '<S885>/Add'
     */
    VeCPDR_n_LTPP_FunPer_RPM_Error = fabsf
        (rtb_TmpSignalConversionAtVePMPR_n_LT_Psv -
         rtb_TmpSignalConversionAtVePMIR_n_LTPsvP);

    /* Logic: '<S944>/AND22' incorporates:
     *  Constant: '<S883>/Calib'
     *  RelationalOperator: '<S944>/Comparison1'
     *  RelationalOperator: '<S944>/Comparison4'
     *  Sum: '<S944>/Add'
     *  Sum: '<S944>/Add1'
     */
    VeCPDR_b_LTPP_VltgDrpFunPer_FltChk =
        ((rtb_TmpSignalConversionAtVePMIR_n_LTPsvP <
          (rtb_TmpSignalConversionAtVePMPR_n_HT_Aux -
           KeCPDR_n_LTPP_FunPer_DesRPM)) ||
         (rtb_TmpSignalConversionAtVePMIR_n_LTPsvP >
          (rtb_TmpSignalConversionAtVePMPR_n_LT_Psv +
           KeCPDR_n_LTPP_FunPer_DesRPM)));

    /* Switch: '<S885>/Switch1' incorporates:
     *  Constant: '<S882>/Calib'
     *  Constant: '<S883>/Calib'
     *  Logic: '<S885>/AND22'
     *  RelationalOperator: '<S885>/Comparison4'
     */
    if ((KeCPDR_b_LTPP_CmdLessLim_Disbl) || (VeCPDR_b_LTPP_CmdLessLim))
    {
        rtb_TmpSignalConversionAtBPCM_LIN_BusOff =
            (VeCPDR_n_LTPP_FunPer_RPM_Error > KeCPDR_n_LTPP_FunPer_DesRPM);
    }
    else
    {
        rtb_TmpSignalConversionAtBPCM_LIN_BusOff =
            VeCPDR_b_LTPP_VltgDrpFunPer_FltChk;
    }

    /* End of Switch: '<S885>/Switch1' */

    /* Logic: '<S885>/AND1' incorporates:
     *  Constant: '<S943>/Calib'
     *  Logic: '<S885>/AND2'
     */
    VeCPDR_b_LTPP_FunPer_FltChk = (rtb_TmpSignalConversionAtBPCM_LIN_BusOff ||
        ((VeCPDR_b_LTPP_SpdSNAConfirmed) && (KeCPDR_b_LTPP_SpdSNAFault_En)));

    /* Outputs for Atomic SubSystem: '<S948>/EdgeFalling1' */
    /* Logic: '<S950>/AND' incorporates:
     *  UnitDelay: '<S950>/Unit Delay'
     */
    rtb_Logical1_h = (rtb_Logical1_h && (CPDR_ac_DW.UnitDelay_DSTATE_io));

    /* Update for UnitDelay: '<S950>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_io = rtb_AND3_k;

    /* End of Outputs for SubSystem: '<S948>/EdgeFalling1' */

    /* Logic: '<S948>/Logical5' */
    rtb_NOT4_p = (rtb_NOT4_p || rtb_Logical1_h);

    /* UnitDelay: '<S949>/Unit Delay1' incorporates:
     *  UnitDelay: '<S868>/Unit Delay'
     */
    CPDR_ac_DW.UnitDelay_DSTATE_mw = CPDR_ac_DW.UnitDelay1_DSTATE_h;

    /* Outputs for Atomic SubSystem: '<S949>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S949>/Counter Reset  Enabled ' */
    /* Switch: '<S956>/Switch1' incorporates:
     *  Logic: '<S949>/Fail Counter Reset'
     *  Logic: '<S949>/NOT6'
     *  Switch: '<S956>/Switch2'
     *  Switch: '<S957>/Switch1'
     *  UnitDelay: '<S868>/Unit Delay'
     *  UnitDelay: '<S949>/Unit Delay'
     */
    if ((rtb_NOT4_p || (CPDR_ac_DW.UnitDelay_DSTATE_dv)) ||
            (CPDR_ac_DW.UnitDelay_DSTATE_mw))
    {
        /* Switch: '<S956>/Switch1' incorporates:
         *  Constant: '<S956>/Constant Value2'
         */
        VeCPDR_Cnt_LTPP_Perf_FailCnt = 0U;

        /* Switch: '<S957>/Switch1' incorporates:
         *  Constant: '<S957>/Constant Value2'
         */
        VeCPDR_Cnt_LTPP_Perf_SmpCnt = 0U;
    }
    else
    {
        if (rtb_AND_ci && (VeCPDR_b_LTPP_FunPer_FltChk))
        {
            /* Switch: '<S956>/Switch1' incorporates:
             *  Constant: '<S956>/Constant Value1'
             *  Sum: '<S956>/Subtraction'
             *  Switch: '<S956>/Switch2'
             *  UnitDelay: '<S956>/Unit Delay'
             */
            VeCPDR_Cnt_LTPP_Perf_FailCnt = (uint16)(((uint32)
                VeCPDR_Cnt_LTPP_Perf_FailCnt) + 1U);
        }

        /* Switch: '<S957>/Switch2' */
        if (rtb_AND_ci)
        {
            /* Switch: '<S957>/Switch1' incorporates:
             *  Constant: '<S957>/Constant Value1'
             *  Sum: '<S957>/Subtraction'
             *  Switch: '<S957>/Switch2'
             *  UnitDelay: '<S957>/Unit Delay'
             */
            VeCPDR_Cnt_LTPP_Perf_SmpCnt = (uint16)(((uint32)
                VeCPDR_Cnt_LTPP_Perf_SmpCnt) + 1U);
        }

        /* End of Switch: '<S957>/Switch2' */
    }

    /* End of Switch: '<S956>/Switch1' */
    /* End of Outputs for SubSystem: '<S949>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S949>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S949>/Greater Than or Equal ' incorporates:
     *  Constant: '<S945>/Calib'
     */
    CPDR_ac_DW.UnitDelay1_DSTATE_h = (((sint32)VeCPDR_Cnt_LTPP_Perf_FailCnt) >=
        ((sint32)KeCPDR_Cnt_LTPP_FunPer_FailCnt));

    /* Logic: '<S949>/NOT5' incorporates:
     *  Constant: '<S946>/Calib'
     *  Logic: '<S949>/NOT3'
     *  RelationalOperator: '<S949>/Less Than  or Equal'
     */
    CPDR_ac_DW.UnitDelay_DSTATE_dv = ((((sint32)VeCPDR_Cnt_LTPP_Perf_SmpCnt) >=
        ((sint32)KeCPDR_Cnt_LTPP_FunPer_SmpCnt)) &&
        (!CPDR_ac_DW.UnitDelay1_DSTATE_h));

    /* Switch: '<S962>/Switch1' incorporates:
     *  Constant: '<S955>/Constant Value'
     *  DataStoreWrite: '<S886>/Data Store Write3'
     *  Switch: '<S961>/Switch1'
     */
    if (rtb_TmpSignalConversionAtPostCodeClrDiag)
    {
        CPDR_ac_DW.NeCPDR_Cnt_LTPP_FunPer_MFOP = 0U;
    }
    else
    {
        if (CPDR_ac_DW.UnitDelay_DSTATE_dv)
        {
            /* MinMax: '<S955>/Minimum2' incorporates:
             *  DataStoreRead: '<S886>/Data Store Read1'
             *  Switch: '<S961>/Switch1'
             */
            if (VeCPDR_Cnt_LTPP_Perf_FailCnt >
                    CPDR_ac_DW.NeCPDR_Cnt_LTPP_FunPer_MFOP)
            {
                /* DataStoreWrite: '<S886>/Data Store Write3' incorporates:
                 *  Switch: '<S961>/Switch1'
                 */
                CPDR_ac_DW.NeCPDR_Cnt_LTPP_FunPer_MFOP =
                    VeCPDR_Cnt_LTPP_Perf_FailCnt;
            }

            /* End of MinMax: '<S955>/Minimum2' */
        }
    }

    /* End of Switch: '<S962>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S948>/Fail' */
    CPDR_ac_Fail(CPDR_ac_DW.UnitDelay1_DSTATE_h, &CPDR_ac_B.Merge_e);

    /* End of Outputs for SubSystem: '<S948>/Fail' */

    /* Outputs for Enabled SubSystem: '<S948>/Init' */
    CPDR_ac_Init_g(rtb_NOT4_p, &CPDR_ac_B.Merge_e);

    /* End of Outputs for SubSystem: '<S948>/Init' */

    /* Outputs for Enabled SubSystem: '<S948>/Pass' */
    CPDR_ac_Pass(CPDR_ac_DW.UnitDelay_DSTATE_dv, &CPDR_ac_B.Merge_e);

    /* End of Outputs for SubSystem: '<S948>/Pass' */

    /* RelationalOperator: '<S948>/Relational Operator' incorporates:
     *  Constant: '<S951>/Constant'
     *  Merge: '<S948>/Merge'
     *  UnitDelay: '<S886>/Unit Delay'
     */
    CPDR_ac_DW.UnitDelay_DSTATE_h1 = (((uint32)CPDR_ac_B.Merge_e) ==
        CeDFIB_e_Fail);

    /* RelationalOperator: '<S843>/Comparison2' incorporates:
     *  Constant: '<S840>/Calib'
     */
    rtb_AND3_k = (rtb_TmpSignalConversionAtVePMPR_n_LT_Psv <
                  KeCPDR_n_PECP_MinCmdThrshld);

    /* Logic: '<S843>/Logical1' */
    rtb_AND_ci = !rtb_TmpSignalConversionAtPropSysActv_AD_;

    /* Outputs for Atomic SubSystem: '<S843>/Stop Watch Reset Enabled' */
    /* Switch: '<S987>/Switch' incorporates:
     *  Constant: '<S987>/Constant Value2'
     *  Logic: '<S843>/Logical3'
     *  UnitDelay: '<S987>/Unit Delay'
     */
    if (rtb_AND3_k || rtb_AND_ci)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_i = 0.0F;
    }
    else
    {
        /* UnitDelay: '<S987>/Unit Delay' incorporates:
         *  Constant: '<S843>/Constant Value1'
         *  Sum: '<S987>/Subtraction'
         *  Switch: '<S987>/Switch2'
         */
        CPDR_ac_DW.UnitDelay_DSTATE_i += 0.1F;
    }

    /* End of Switch: '<S987>/Switch' */
    /* End of Outputs for SubSystem: '<S843>/Stop Watch Reset Enabled' */

    /* RelationalOperator: '<S985>/Comparison1' incorporates:
     *  Constant: '<S991>/Calib'
     *  UnitDelay: '<S987>/Unit Delay'
     */
    rtb_NOT4_p = (CPDR_ac_DW.UnitDelay_DSTATE_i >
                  KeCPDR_t_IUMPR_PECP_MinConsecTime_CmdOn);

    /* Outputs for Atomic SubSystem: '<S843>/Stop Watch Reset Enabled1' */
    /* Switch: '<S988>/Switch' incorporates:
     *  Constant: '<S988>/Constant Value2'
     *  Logic: '<S843>/Logical4'
     *  Switch: '<S988>/Switch2'
     *  UnitDelay: '<S988>/Unit Delay'
     */
    if (rtb_AND_ci)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_e = 0.0F;
    }
    else
    {
        if (!rtb_AND3_k)
        {
            /* UnitDelay: '<S988>/Unit Delay' incorporates:
             *  Constant: '<S843>/Constant Value2'
             *  Sum: '<S988>/Subtraction'
             *  Switch: '<S988>/Switch2'
             */
            CPDR_ac_DW.UnitDelay_DSTATE_e += 0.1F;
        }
    }

    /* End of Switch: '<S988>/Switch' */
    /* End of Outputs for SubSystem: '<S843>/Stop Watch Reset Enabled1' */

    /* Outputs for Atomic SubSystem: '<S985>/EdgeRising' */
    /* Logic: '<S989>/OR1' incorporates:
     *  UnitDelay: '<S989>/Unit Delay'
     */
    rtb_AND3_k = !CPDR_ac_DW.UnitDelay_DSTATE_pu;

    /* Update for UnitDelay: '<S989>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_pu = rtb_NOT4_p;

    /* End of Outputs for SubSystem: '<S985>/EdgeRising' */

    /* Switch: '<S985>/Switch' incorporates:
     *  Constant: '<S985>/Constant Value5'
     *  Logic: '<S989>/AND'
     *  Sum: '<S985>/Sum'
     *  UnitDelay: '<S985>/Unit Delay'
     */
    if (rtb_AND_ci)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_o = 0.0F;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S985>/EdgeRising' */
        CPDR_ac_DW.UnitDelay_DSTATE_o += (float32)((rtb_NOT4_p && rtb_AND3_k) ?
            1 : 0);

        /* End of Outputs for SubSystem: '<S985>/EdgeRising' */
    }

    /* End of Switch: '<S985>/Switch' */

    /* Outputs for Atomic SubSystem: '<S843>/Signal Latch On With Reset' */
    /* Logic: '<S986>/OR1' incorporates:
     *  Constant: '<S990>/Calib'
     *  Constant: '<S992>/Calib'
     *  Logic: '<S985>/Logical4'
     *  Logic: '<S986>/NOT'
     *  Logic: '<S986>/OR'
     *  RelationalOperator: '<S985>/Comparison2'
     *  RelationalOperator: '<S985>/Comparison4'
     *  UnitDelay: '<S985>/Unit Delay'
     *  UnitDelay: '<S986>/Unit Delay'
     *  UnitDelay: '<S988>/Unit Delay'
     */
    CPDR_ac_DW.UnitDelay_DSTATE_jd = (((CPDR_ac_DW.UnitDelay_DSTATE_e >=
        KeCPDR_t_IUMPR_PECP_MinCumlTime_CmdOn) || (CPDR_ac_DW.UnitDelay_DSTATE_o
        >= KeCPDR_Cnt_IUMPR_PECP_MinConsecCnt_CmdOn)) || ((!rtb_AND_ci) &&
        (CPDR_ac_DW.UnitDelay_DSTATE_jd)));

    /* End of Outputs for SubSystem: '<S843>/Signal Latch On With Reset' */

    /* S-Function (sfix_bitop): '<S973>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S973>/StatusByte_LIN1_BusOff'
     *  S-Function (sfix_bitop): '<S965>/Bitwise Operator2'
     */
    rtb_Logical6_c_tmp = ((sint32)CPDR_ac_DW.StatusByte_LIN1_BusOff) & 1;

    /* S-Function (sfix_bitop): '<S973>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S973>/StatusByte_LIN1_BusOff'
     *  S-Function (sfix_bitop): '<S965>/Bitwise Operator1'
     */
    rtb_Logical6_c_tmp_0 = ((uint32)CPDR_ac_DW.StatusByte_LIN1_BusOff) & 64U;

    /* S-Function (sfix_bitop): '<S974>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S974>/StatusByte_LIN2_BusOff'
     *  S-Function (sfix_bitop): '<S966>/Bitwise Operator2'
     */
    rtb_Logical6_c_tmp_1 = ((sint32)CPDR_ac_DW.StatusByte_LIN2_BusOff) & 1;

    /* S-Function (sfix_bitop): '<S974>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S974>/StatusByte_LIN2_BusOff'
     *  S-Function (sfix_bitop): '<S966>/Bitwise Operator1'
     */
    rtb_Logical6_c_tmp_2 = ((uint32)CPDR_ac_DW.StatusByte_LIN2_BusOff) & 64U;

    /* Logic: '<S964>/Logical6' incorporates:
     *  Constant: '<S973>/Constant1'
     *  Constant: '<S973>/Constant2'
     *  Constant: '<S974>/Constant1'
     *  Constant: '<S974>/Constant2'
     *  Constant: '<S975>/Constant1'
     *  Constant: '<S975>/Constant2'
     *  Constant: '<S976>/Constant1'
     *  Constant: '<S976>/Constant2'
     *  Constant: '<S977>/Constant1'
     *  Constant: '<S977>/Constant2'
     *  Constant: '<S978>/Constant1'
     *  Constant: '<S978>/Constant2'
     *  Constant: '<S979>/Calib'
     *  Constant: '<S980>/Calib'
     *  Constant: '<S981>/Calib'
     *  Constant: '<S982>/Calib'
     *  Constant: '<S983>/Calib'
     *  Constant: '<S984>/Calib'
     *  DataStoreRead: '<S977>/StatusByte_PwrElecPmpPerf'
     *  Logic: '<S964>/Logical'
     *  Logic: '<S964>/Logical1'
     *  Logic: '<S964>/Logical2'
     *  Logic: '<S964>/Logical3'
     *  Logic: '<S964>/Logical4'
     *  Logic: '<S964>/Logical5'
     *  Logic: '<S973>/Logical Operator'
     *  Logic: '<S974>/Logical Operator'
     *  Logic: '<S975>/Logical Operator'
     *  Logic: '<S976>/Logical Operator'
     *  Logic: '<S977>/Logical Operator'
     *  Logic: '<S978>/Logical Operator'
     *  RelationalOperator: '<S973>/Relational Operator1'
     *  RelationalOperator: '<S973>/Relational Operator2'
     *  RelationalOperator: '<S974>/Relational Operator1'
     *  RelationalOperator: '<S974>/Relational Operator2'
     *  RelationalOperator: '<S975>/Relational Operator1'
     *  RelationalOperator: '<S975>/Relational Operator2'
     *  RelationalOperator: '<S976>/Relational Operator1'
     *  RelationalOperator: '<S976>/Relational Operator2'
     *  RelationalOperator: '<S977>/Relational Operator1'
     *  RelationalOperator: '<S977>/Relational Operator2'
     *  RelationalOperator: '<S978>/Relational Operator1'
     *  RelationalOperator: '<S978>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S973>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S973>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S974>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S974>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S977>/Bitwise Operator2'
     */
    rtb_AND_ci = ((((((((VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp > 0) &&
                        (VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_0 == 0U)) &&
                       (KeCPDR_b_IUMPR_PECP_Perf_LOC_ChkEnbl)) ||
                      (((VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_2 > 0) &&
                        (VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_1 == 0U)) &&
                       (KeCPDR_b_IUMPR_PECP_Perf_CrktChkEnbl))) ||
                     (((rtb_Logical6_c_tmp_1 > 0) && (rtb_Logical6_c_tmp_2 == 0U))
                      && (KeCPDR_b_IUMPR_PECP_Perf_LINBus2_ChkEnbl))) ||
                    (((rtb_Logical6_c_tmp > 0) && (rtb_Logical6_c_tmp_0 == 0U)) &&
                     (KeCPDR_b_IUMPR_PECP_Perf_LINBus1_ChkEnbl))) ||
                   (((VeCPDR_b_BCP_CommonEnblConds_tmp > 0) &&
                     (rtb_RelationalOperator3_m_tmp == 0U)) &&
                    (KeCPDR_b_IUMPR_PECP_Perf_DryRun_ChkEnbl))) || ((((((sint32)
                       CPDR_ac_DW.StatusByte_PwrElecPmpPerf) & 1) > 0) &&
                    (rtb_RelationalOperator3_p_tmp == 0U)) &&
                   (KeCPDR_b_IUMPR_PECP_Perf_PECP_PerfChkEnbl)));

    /* Logic: '<S963>/Logical4' incorporates:
     *  Constant: '<S965>/Constant1'
     *  Constant: '<S965>/Constant2'
     *  Constant: '<S966>/Constant1'
     *  Constant: '<S966>/Constant2'
     *  Constant: '<S967>/Constant1'
     *  Constant: '<S967>/Constant2'
     *  Constant: '<S968>/Constant1'
     *  Constant: '<S968>/Constant2'
     *  Constant: '<S969>/Calib'
     *  Constant: '<S970>/Calib'
     *  Constant: '<S971>/Calib'
     *  Constant: '<S972>/Calib'
     *  Logic: '<S963>/Logical'
     *  Logic: '<S963>/Logical1'
     *  Logic: '<S963>/Logical2'
     *  Logic: '<S963>/Logical3'
     *  Logic: '<S965>/Logical Operator'
     *  Logic: '<S966>/Logical Operator'
     *  Logic: '<S967>/Logical Operator'
     *  Logic: '<S968>/Logical Operator'
     *  RelationalOperator: '<S965>/Relational Operator1'
     *  RelationalOperator: '<S965>/Relational Operator2'
     *  RelationalOperator: '<S966>/Relational Operator1'
     *  RelationalOperator: '<S966>/Relational Operator2'
     *  RelationalOperator: '<S967>/Relational Operator1'
     *  RelationalOperator: '<S967>/Relational Operator2'
     *  RelationalOperator: '<S968>/Relational Operator1'
     *  RelationalOperator: '<S968>/Relational Operator2'
     */
    rtb_NOT4_p = ((((((VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp > 0) &&
                      (VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_0 == 0U)) &&
                     (KeCPDR_b_IUMPR_PECP_DryRn_LOC_ChkEnbl)) ||
                    (((VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_2 > 0) &&
                      (VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_1 == 0U)) &&
                     (KeCPDR_b_IUMPR_PECP_DryRn_CrktChkEnbl))) ||
                   (((rtb_Logical6_c_tmp > 0) && (rtb_Logical6_c_tmp_0 == 0U)) &&
                    (KeCPDR_b_IUMPR_PECP_DryRn_LINBus1_ChkEnbl))) ||
                  (((rtb_Logical6_c_tmp_1 > 0) && (rtb_Logical6_c_tmp_2 == 0U)) &&
                   (KeCPDR_b_IUMPR_PECP_DryRn_LINBus2_ChkEnbl)));

    /* Update for UnitDelay: '<S868>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_mw = rtb_Logical1_cy;

    /* VariantMerge generated from: '<S175>/LTCL_Flags' incorporates:
     *  UnitDelay: '<S886>/Unit Delay'
     */
    rtb_Logical1_cy = CPDR_ac_DW.UnitDelay_DSTATE_h1;

    /* End of Outputs for SubSystem: '<S682>/LTPP_Diagnostics_FUNC' */
    /* End of Outputs for SubSystem: '<S175>/LTPP_Diagnostics' */
#elif !Rte_SysCon_Variant_CPDR_5 && Rte_SysCon_Variant_CPDR_6

    /* VariantMerge generated from: '<S175>/LTCL_Flags' incorporates:
     *  SignalConversion generated from: '<S175>/LTCL_Flags'
     */
    rtb_Logical1_cy = false;

#endif

    /* End of SignalConversion generated from: '<S2>/VePMPR_n_LT_PsvPmpCmd' */

    /* SignalConversion generated from: '<S2>/VePMPR_n_LT_PsvPmp2Cmd' incorporates:
     *  Inport: '<Root>/VePMIR_b_LTPsvPump2DryRun_FA'
     *  Inport: '<Root>/VePMIR_b_LTPsvPump2RPMAct_SNA'
     *  Inport: '<Root>/VePMIR_b_LTPsvPump2Temp_FA'
     *  Inport: '<Root>/VePMIR_e_LTPsvPump2LmpHM'
     *  Inport: '<Root>/VePMIR_e_LTPsvPump2MntrRPM'
     *  SignalConversion generated from: '<S175>/LTCL_Flags'
     *  SignalConversion generated from: '<S2>/LTPP2_MaxOpRPM_AD_Read'
     *  SignalConversion generated from: '<S2>/VePMIR_T_LTPsvPump2Temp'
     *  SignalConversion generated from: '<S2>/VePMIR_e_LTPsvPump2DryRun'
     *  SignalConversion generated from: '<S2>/VePMIR_n_LTPsvPump2RPMAct'
     * */
#if Rte_SysCon_Variant_CPDR_6

    /* Outputs for Atomic SubSystem: '<S175>/LTPP2_Diagnostics' */
    /* Outputs for Atomic SubSystem: '<S681>/LTPP2_Diagnostics_FUNC' */
    /* SignalConversion generated from: '<S2>/VePMPR_n_LT_PsvPmp2Cmd' incorporates:
     *  Inport: '<Root>/VePMPR_n_LT_PsvPmp2Cmd'
     */
    (void)Rte_Read_VePMPR_n_LT_PsvPmp2Cmd_Value
        (&rtb_TmpSignalConversionAtVePMPR_n_LT_P_p);

    /* SignalConversion generated from: '<S2>/VePMIR_e_LTPsvPump2DryRun' incorporates:
     *  Inport: '<Root>/VePMIR_e_LTPsvPump2DryRun'
     */
    (void)Rte_Read_VePMIR_e_LTPsvPump2DryRun_Value
        (&rtb_TmpSignalConversionAtVePMIR_e_LTPsvP);

    /* SignalConversion generated from: '<S2>/VePMIR_T_LTPsvPump2Temp' incorporates:
     *  Inport: '<Root>/VePMIR_T_LTPsvPump2Temp'
     */
    (void)Rte_Read_VePMIR_T_LTPsvPump2Temp_Value
        (&rtb_TmpSignalConversionAtVePMIR_T_LTPs_l);

    /* SignalConversion generated from: '<S2>/VePMIR_n_LTPsvPump2RPMAct' incorporates:
     *  Inport: '<Root>/VePMIR_n_LTPsvPump2RPMAct'
     */
    (void)Rte_Read_VePMIR_n_LTPsvPump2RPMAct_Value
        (&rtb_TmpSignalConversionAtVePMIR_n_LTPs_i);

    /* SignalConversion generated from: '<S2>/LTPP2_MaxOpRPM_AD_Read' incorporates:
     *  Merge: '<Root>/LTPP2_MaxOpRPM_AD_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVePMPR_n_LT_Psv =
        Rte_IrvRead_CPDR_MedTEH_LTPP2_MaxOpRPM_AD_write_IRV();
    (void)Rte_Read_VePMIR_b_LTPsvPump2DryRun_FA_Value(&rtb_NOT4_n);

    /* Switch: '<S705>/Switch' incorporates:
     *  Constant: '<S706>/Constant1'
     *  Constant: '<S706>/Constant2'
     *  Constant: '<S707>/Constant1'
     *  Constant: '<S707>/Constant2'
     *  Constant: '<S708>/Calib'
     *  DataStoreRead: '<S706>/StatusByte_LIN1_BusOff'
     *  DataStoreRead: '<S707>/StatusByte_LIN3_BusOff'
     *  Inport: '<Root>/VePMIR_b_LTPsvPump2DryRun_FA'
     *  Logic: '<S706>/Logical Operator'
     *  Logic: '<S707>/Logical Operator'
     *  RelationalOperator: '<S706>/Relational Operator1'
     *  RelationalOperator: '<S706>/Relational Operator2'
     *  RelationalOperator: '<S707>/Relational Operator1'
     *  RelationalOperator: '<S707>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S706>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S706>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S707>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S707>/Bitwise Operator2'
     */
    if (KeCPDR_b_PECP2_LIN_Bus)
    {
        rtb_TmpSignalConversionAtBPCM_LIN_BusOff = (((((sint32)
            CPDR_ac_DW.StatusByte_LIN3_BusOff) & 1) > 0) && ((((uint32)
            CPDR_ac_DW.StatusByte_LIN3_BusOff) & 64U) == 0U));
    }
    else
    {
        rtb_TmpSignalConversionAtBPCM_LIN_BusOff = (((((sint32)
            CPDR_ac_DW.StatusByte_LIN1_BusOff) & 1) > 0) && ((((uint32)
            CPDR_ac_DW.StatusByte_LIN1_BusOff) & 64U) == 0U));
    }

    /* End of Switch: '<S705>/Switch' */

    /* S-Function (sfix_bitop): '<S695>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S695>/StatusByte_LostCommMtrElectCoolPmpB'
     *  S-Function (sfix_bitop): '<S734>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S821>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S829>/Bitwise Operator2'
     */
    VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp = ((sint32)
        CPDR_ac_DW.StatusByte_LostCommMtrElectCoolPmpB) & 1;

    /* S-Function (sfix_bitop): '<S695>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S695>/StatusByte_LostCommMtrElectCoolPmpB'
     *  S-Function (sfix_bitop): '<S734>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S821>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S829>/Bitwise Operator1'
     */
    VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_0 = ((uint32)
        CPDR_ac_DW.StatusByte_LostCommMtrElectCoolPmpB) & 64U;

    /* S-Function (sfix_bitop): '<S696>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S696>/StatusByte_ThrmlRlyCtrlCkt'
     *  S-Function (sfix_bitop): '<S735>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S822>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S831>/Bitwise Operator2'
     */
    VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_2 = ((sint32)
        CPDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 1;

    /* S-Function (sfix_bitop): '<S696>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S696>/StatusByte_ThrmlRlyCtrlCkt'
     *  S-Function (sfix_bitop): '<S735>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S822>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S831>/Bitwise Operator1'
     */
    VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_1 = ((uint32)
        CPDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 64U;

    /* Logic: '<S691>/AND3' incorporates:
     *  Constant: '<S694>/Constant'
     *  Constant: '<S695>/Constant1'
     *  Constant: '<S695>/Constant2'
     *  Constant: '<S696>/Constant1'
     *  Constant: '<S696>/Constant2'
     *  Constant: '<S697>/Calib'
     *  Constant: '<S698>/Calib'
     *  Constant: '<S699>/Calib'
     *  Constant: '<S700>/Calib'
     *  Constant: '<S701>/Calib'
     *  Constant: '<S702>/Calib'
     *  Constant: '<S703>/Calib'
     *  Constant: '<S704>/Calib'
     *  Logic: '<S691>/AND1'
     *  Logic: '<S691>/AND10'
     *  Logic: '<S691>/AND13'
     *  Logic: '<S691>/AND14'
     *  Logic: '<S691>/AND15'
     *  Logic: '<S691>/AND16'
     *  Logic: '<S691>/AND2'
     *  Logic: '<S691>/AND24'
     *  Logic: '<S691>/AND31'
     *  Logic: '<S691>/AND4'
     *  Logic: '<S691>/AND6'
     *  Logic: '<S695>/Logical Operator'
     *  Logic: '<S696>/Logical Operator'
     *  RelationalOperator: '<S691>/Comparison1'
     *  RelationalOperator: '<S691>/Comparison12'
     *  RelationalOperator: '<S695>/Relational Operator1'
     *  RelationalOperator: '<S695>/Relational Operator2'
     *  RelationalOperator: '<S696>/Relational Operator1'
     *  RelationalOperator: '<S696>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S695>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S695>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S696>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S696>/Bitwise Operator2'
     */
    VeCPDR_b_LTPP2_DryRun_ChkEnbl = (((((((((((uint32)
        rtb_TmpSignalConversionAtVePMTR_e_ThrmlD) != CePMTR_e_DISBL_All_Thrml) ||
        (KeCPDR_b_LTPP2_DryRun_ThrmlEnbl)) &&
        (rtb_TmpSignalConversionAtVeTMIR_b_MainRl ||
         (KeCPDR_b_LTPP2_DryRun_MainRly_OV))) && ((!rtb_NOT4_n) ||
        (KeCPDR_b_LTPP2_DryRun_FA))) &&
        ((rtb_TmpSignalConversionAtVePMPR_n_LT_P_p >=
          KeCPDR_n_DryRun_Detection_RPM) ||
         (KeCPDR_b_LTPP2_DryRun_Detection_RPM_OV))) &&
        (((VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp <= 0) ||
          (VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_0 != 0U)) ||
         (KeCPDR_b_LTPP2_LOCFltDtct))) && (((VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_2 <=
        0) || (VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_1 != 0U)) ||
        (KeCPDR_b_LTPP2_ThrmlRlyCtrlCkt_FA_OV))) &&
        ((!rtb_TmpSignalConversionAtBPCM_LIN_BusOff) ||
         (KeCPDR_b_LTPP2_LINBusoff_FA_OV))) &&
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag);

    /* RelationalOperator: '<S713>/Relational Operator3' incorporates:
     *  Constant: '<S713>/Constant3'
     *  DataStoreRead: '<S693>/Data Store Read'
     *  S-Function (sfix_bitop): '<S713>/Bitwise Operator2'
     */
    rtb_AND3_k = ((((uint32)CPDR_ac_DW.StatusByte_MtrElect_CooPumBOvrSpd) & 64U)
                  == 0U);

    /* Outputs for Atomic SubSystem: '<S713>/EdgeFalling1' */
    /* Logic: '<S713>/Logical Operator' incorporates:
     *  Logic: '<S715>/OR1'
     */
    rtb_Logical1_h = !rtb_AND3_k;

    /* End of Outputs for SubSystem: '<S713>/EdgeFalling1' */

    /* Logic: '<S713>/Logical1' incorporates:
     *  Constant: '<S711>/Calib'
     *  Constant: '<S712>/Calib'
     *  Constant: '<S713>/Constant1'
     *  DataStoreRead: '<S693>/Data Store Read'
     *  Logic: '<S693>/Logical1'
     *  Logic: '<S713>/Logical Operator'
     *  Logic: '<S713>/Logical10'
     *  Logic: '<S713>/Logical12'
     *  RelationalOperator: '<S713>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S713>/Bitwise Operator3'
     */
    rtb_Logical1_po = (((VeCPDR_b_LTPP2_DryRun_ChkEnbl) ||
                        (KeCPDR_b_LTPP2_DryRun_ChkEnbl_OV)) &&
                       ((!KeCPDR_b_MtrElect_CooPumBOvrSpd_LtchEnbl) ||
                        (((((uint32)CPDR_ac_DW.StatusByte_MtrElect_CooPumBOvrSpd)
                           & 1U) == 0U) || rtb_Logical1_h)));

    /* Logic: '<S687>/NOT4' */
    rtb_NOT4_n = (rtb_TmpSignalConversionAtDsblDiagFailSaf ||
                  rtb_TmpSignalConversionAtPostCodeClrDiag);

    /* Outputs for Atomic SubSystem: '<S713>/EdgeFalling1' */
    /* Logic: '<S715>/AND' incorporates:
     *  UnitDelay: '<S715>/Unit Delay'
     */
    rtb_Logical1_h = (rtb_Logical1_h && (CPDR_ac_DW.UnitDelay_DSTATE_pb));

    /* Update for UnitDelay: '<S715>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_pb = rtb_AND3_k;

    /* End of Outputs for SubSystem: '<S713>/EdgeFalling1' */

    /* Logic: '<S713>/Logical5' */
    rtb_AND3_k = (rtb_NOT4_n || rtb_Logical1_h);

    /* Outputs for Atomic SubSystem: '<S714>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S714>/Counter Reset  Enabled ' */
    /* Switch: '<S721>/Switch1' incorporates:
     *  Constant: '<S690>/Calib'
     *  Logic: '<S714>/Fail Counter Reset'
     *  Logic: '<S714>/NOT6'
     *  RelationalOperator: '<S692>/Comparison4'
     *  SignalConversion generated from: '<S2>/VePMIR_e_LTPsvPump2DryRun'
     *  Switch: '<S721>/Switch2'
     *  Switch: '<S722>/Switch1'
     *  UnitDelay: '<S714>/Unit Delay'
     *  UnitDelay: '<S714>/Unit Delay1'
     */
    if ((rtb_AND3_k || (CPDR_ac_DW.UnitDelay_DSTATE_bt)) ||
            (CPDR_ac_DW.UnitDelay1_DSTATE_m))
    {
        /* Switch: '<S721>/Switch1' incorporates:
         *  Constant: '<S721>/Constant Value2'
         */
        VeCPDR_Cnt_LTPP2_DryRun_FailCnt = 0U;

        /* Switch: '<S722>/Switch1' incorporates:
         *  Constant: '<S722>/Constant Value2'
         */
        VeCPDR_Cnt_LTPP2_DryRun_SmpCnt = 0U;
    }
    else
    {
        if (rtb_Logical1_po && (rtb_TmpSignalConversionAtVePMIR_e_LTPsvP ==
                                KeCPDR_e_PECP2DryRunChk))
        {
            /* Switch: '<S721>/Switch1' incorporates:
             *  Constant: '<S721>/Constant Value1'
             *  Sum: '<S721>/Subtraction'
             *  Switch: '<S721>/Switch2'
             *  UnitDelay: '<S721>/Unit Delay'
             */
            VeCPDR_Cnt_LTPP2_DryRun_FailCnt = (uint16)(((uint32)
                VeCPDR_Cnt_LTPP2_DryRun_FailCnt) + 1U);
        }

        /* Switch: '<S722>/Switch2' */
        if (rtb_Logical1_po)
        {
            /* Switch: '<S722>/Switch1' incorporates:
             *  Constant: '<S722>/Constant Value1'
             *  Sum: '<S722>/Subtraction'
             *  Switch: '<S722>/Switch2'
             *  UnitDelay: '<S722>/Unit Delay'
             */
            VeCPDR_Cnt_LTPP2_DryRun_SmpCnt = (uint16)(((uint32)
                VeCPDR_Cnt_LTPP2_DryRun_SmpCnt) + 1U);
        }

        /* End of Switch: '<S722>/Switch2' */
    }

    /* End of Switch: '<S721>/Switch1' */
    /* End of Outputs for SubSystem: '<S714>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S714>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S714>/Greater Than or Equal ' incorporates:
     *  Constant: '<S709>/Calib'
     */
    CPDR_ac_DW.UnitDelay1_DSTATE_m = (((sint32)VeCPDR_Cnt_LTPP2_DryRun_FailCnt) >=
        ((sint32)KeCPDR_Cnt_PECP2DryRunFlt_FailCnt));

    /* Logic: '<S714>/NOT5' incorporates:
     *  Constant: '<S710>/Calib'
     *  Logic: '<S714>/NOT3'
     *  RelationalOperator: '<S714>/Less Than  or Equal'
     */
    rtb_Logical1_po = ((((sint32)VeCPDR_Cnt_LTPP2_DryRun_SmpCnt) >= ((sint32)
                         KeCPDR_Cnt_PECP2DryRunFlt_SmpCnt)) &&
                       (!CPDR_ac_DW.UnitDelay1_DSTATE_m));

    /* Switch: '<S727>/Switch1' incorporates:
     *  Constant: '<S720>/Constant Value'
     *  DataStoreWrite: '<S693>/Data Store Write1'
     *  Switch: '<S726>/Switch1'
     */
    if (rtb_TmpSignalConversionAtPostCodeClrDiag)
    {
        CPDR_ac_DW.NeCPDR_Cnt_LTPP2_FunDryRun_MFOP = 0U;
    }
    else
    {
        if (rtb_Logical1_po)
        {
            /* MinMax: '<S720>/Minimum2' incorporates:
             *  DataStoreRead: '<S693>/Data Store Read3'
             *  Switch: '<S726>/Switch1'
             */
            if (VeCPDR_Cnt_LTPP2_DryRun_FailCnt >
                    CPDR_ac_DW.NeCPDR_Cnt_LTPP2_FunDryRun_MFOP)
            {
                /* DataStoreWrite: '<S693>/Data Store Write1' incorporates:
                 *  Switch: '<S726>/Switch1'
                 */
                CPDR_ac_DW.NeCPDR_Cnt_LTPP2_FunDryRun_MFOP =
                    VeCPDR_Cnt_LTPP2_DryRun_FailCnt;
            }

            /* End of MinMax: '<S720>/Minimum2' */
        }
    }

    /* End of Switch: '<S727>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S713>/Fail' */
    CPDR_ac_Fail(CPDR_ac_DW.UnitDelay1_DSTATE_m, &CPDR_ac_B.Merge_p);

    /* End of Outputs for SubSystem: '<S713>/Fail' */

    /* Outputs for Enabled SubSystem: '<S713>/Init' */
    CPDR_ac_Init_g(rtb_AND3_k, &CPDR_ac_B.Merge_p);

    /* End of Outputs for SubSystem: '<S713>/Init' */

    /* Outputs for Enabled SubSystem: '<S713>/Pass' */
    CPDR_ac_Pass(rtb_Logical1_po, &CPDR_ac_B.Merge_p);

    /* End of Outputs for SubSystem: '<S713>/Pass' */

    /* RelationalOperator: '<S713>/Relational Operator' incorporates:
     *  Constant: '<S716>/Constant'
     *  Merge: '<S713>/Merge'
     */
    VeCPDR_b_LTPP2_DryRun_FltDtct = (((uint32)CPDR_ac_B.Merge_p) ==
        CeDFIB_e_Fail);

    /* Logic: '<S741>/Logical2' incorporates:
     *  Constant: '<S787>/Calib'
     *  Constant: '<S788>/Calib'
     *  RelationalOperator: '<S741>/Comparison4'
     *  RelationalOperator: '<S741>/Comparison5'
     */
    VeCPDR_b_LTPP2_VltgInRange = ((rtb_TmpSignalConversionAtBF1_SysVolt_AD_ <=
        KeCPDR_U_LTPP2_MaxOprtngVltg) &&
        (rtb_TmpSignalConversionAtBF1_SysVolt_AD_ >=
         KeCPDR_U_LTPP2_MinOprtngVltg));

    /* UnitDelay: '<S732>/Unit Delay' */
    VeCPDR_b_LTPP2_FunPer_FltDtctPre = CPDR_ac_DW.UnitDelay_DSTATE_hq;
    (void)Rte_Read_VePMIR_e_LTPsvPump2LmpHM_Value(&tmpRead_0);

    /* Logic: '<S740>/Logical2' incorporates:
     *  Constant: '<S785>/Calib'
     *  Constant: '<S786>/Calib'
     *  Inport: '<Root>/VePMIR_e_LTPsvPump2LmpHM'
     *  RelationalOperator: '<S740>/Comparison4'
     *  RelationalOperator: '<S740>/Comparison5'
     */
    VeCPDR_b_LTPP2_PumpTempChk = ((rtb_TmpSignalConversionAtVePMIR_T_LTPs_l <
        KeCPDR_T_LTPP2_PumpTempUprLim) &&
        (rtb_TmpSignalConversionAtVePMIR_T_LTPs_l >
         KeCPDR_T_LTPP2_PumpTempLwrLim));

    /* RelationalOperator: '<S731>/Comparison1' */
    VeCPDR_b_LTPP2_CmdLessLim = (rtb_TmpSignalConversionAtVePMPR_n_LT_P_p <
        rtb_TmpSignalConversionAtVePMPR_n_LT_Psv);

    /* Switch: '<S736>/Switch3' incorporates:
     *  Constant: '<S752>/Constant'
     *  Inport: '<Root>/VePMIR_e_LTPsvPump2LmpHM'
     *  RelationalOperator: '<S736>/Comparison3'
     */
    if (((uint32)tmpRead_0) == CePMPR_e_FTSNA_False)
    {
        /* Switch: '<S736>/Switch3' incorporates:
         *  Constant: '<S736>/TRUE Constant2'
         */
        VeCPDR_b_LTPP2_LimpHmChek_Enb = true;
    }
    else
    {
        /* Switch: '<S736>/Switch3' incorporates:
         *  Constant: '<S753>/Calib'
         *  Logic: '<S736>/AND18'
         *  Switch: '<S736>/Switch1'
         */
        VeCPDR_b_LTPP2_LimpHmChek_Enb = ((KeCPDR_b_LTPsvPump2_LmpHMEvent_OV) &&
            (!VeCPDR_b_LTPP2_CmdLessLim));
    }

    /* End of Switch: '<S736>/Switch3' */
    (void)Rte_Read_VePMIR_e_LTPsvPump2MntrRPM_Value(&tmpRead_2);

    /* Switch: '<S737>/Switch3' incorporates:
     *  Constant: '<S754>/Constant'
     *  Inport: '<Root>/VePMIR_e_LTPsvPump2MntrRPM'
     *  RelationalOperator: '<S737>/Comparison3'
     */
    if (((uint32)tmpRead_2) == CePMPR_e_TFSNA_True)
    {
        /* Switch: '<S737>/Switch3' incorporates:
         *  Constant: '<S737>/TRUE Constant2'
         */
        VeCPDR_b_LTPP2_MntrChedEnb = true;
    }
    else
    {
        /* Switch: '<S737>/Switch3' incorporates:
         *  Constant: '<S755>/Calib'
         *  Logic: '<S737>/AND18'
         *  Switch: '<S737>/Switch1'
         */
        VeCPDR_b_LTPP2_MntrChedEnb = ((KeCPDR_b_LTPsvPump2MntrRPMEvent_OV) &&
            (!VeCPDR_b_LTPP2_CmdLessLim));
    }

    /* End of Switch: '<S737>/Switch3' */
    (void)Rte_Read_VePMIR_b_LTPsvPump2Temp_FA_Value(&rtb_RelationalOperator3_jf);

    /* Switch: '<S739>/Switch' incorporates:
     *  Constant: '<S782>/Constant1'
     *  Constant: '<S782>/Constant2'
     *  Constant: '<S783>/Constant1'
     *  Constant: '<S783>/Constant2'
     *  Constant: '<S784>/Calib'
     *  DataStoreRead: '<S782>/StatusByte_LIN1_BusOff'
     *  DataStoreRead: '<S783>/StatusByte_LIN3_BusOff'
     *  Inport: '<Root>/VePMIR_b_LTPsvPump2Temp_FA'
     *  Logic: '<S782>/Logical Operator'
     *  Logic: '<S783>/Logical Operator'
     *  RelationalOperator: '<S782>/Relational Operator1'
     *  RelationalOperator: '<S782>/Relational Operator2'
     *  RelationalOperator: '<S783>/Relational Operator1'
     *  RelationalOperator: '<S783>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S782>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S782>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S783>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S783>/Bitwise Operator2'
     */
    if (KeCPDR_b_PECP2_LIN_Bus)
    {
        rtb_TmpSignalConversionAtBPCM_LIN_BusOff = (((((sint32)
            CPDR_ac_DW.StatusByte_LIN3_BusOff) & 1) > 0) && ((((uint32)
            CPDR_ac_DW.StatusByte_LIN3_BusOff) & 64U) == 0U));
    }
    else
    {
        rtb_TmpSignalConversionAtBPCM_LIN_BusOff = (((((sint32)
            CPDR_ac_DW.StatusByte_LIN1_BusOff) & 1) > 0) && ((((uint32)
            CPDR_ac_DW.StatusByte_LIN1_BusOff) & 64U) == 0U));
    }

    /* End of Switch: '<S739>/Switch' */

    /* Logic: '<S757>/AND33' incorporates:
     *  Constant: '<S734>/Constant1'
     *  Constant: '<S734>/Constant2'
     *  Constant: '<S735>/Constant1'
     *  Constant: '<S735>/Constant2'
     *  Constant: '<S760>/Constant'
     *  Constant: '<S761>/Constant'
     *  Constant: '<S762>/Calib'
     *  Constant: '<S763>/Calib'
     *  Constant: '<S764>/Calib'
     *  Constant: '<S765>/Calib'
     *  Constant: '<S766>/Calib'
     *  Constant: '<S767>/Calib'
     *  Constant: '<S768>/Calib'
     *  Constant: '<S769>/Calib'
     *  Constant: '<S770>/Calib'
     *  Constant: '<S771>/Calib'
     *  Constant: '<S772>/Calib'
     *  Constant: '<S773>/Calib'
     *  Constant: '<S774>/Calib'
     *  Logic: '<S734>/Logical Operator'
     *  Logic: '<S735>/Logical Operator'
     *  Logic: '<S757>/AND1'
     *  Logic: '<S757>/AND10'
     *  Logic: '<S757>/AND11'
     *  Logic: '<S757>/AND12'
     *  Logic: '<S757>/AND13'
     *  Logic: '<S757>/AND15'
     *  Logic: '<S757>/AND17'
     *  Logic: '<S757>/AND18'
     *  Logic: '<S757>/AND2'
     *  Logic: '<S757>/AND20'
     *  Logic: '<S757>/AND26'
     *  Logic: '<S757>/AND27'
     *  Logic: '<S757>/AND28'
     *  Logic: '<S757>/AND29'
     *  Logic: '<S757>/AND30'
     *  Logic: '<S757>/AND32'
     *  Logic: '<S757>/AND8'
     *  Logic: '<S757>/AND9'
     *  RelationalOperator: '<S734>/Relational Operator1'
     *  RelationalOperator: '<S734>/Relational Operator2'
     *  RelationalOperator: '<S735>/Relational Operator1'
     *  RelationalOperator: '<S735>/Relational Operator2'
     *  RelationalOperator: '<S757>/Comparison1'
     *  RelationalOperator: '<S757>/Comparison12'
     *  SignalConversion generated from: '<S2>/VePMIR_e_LTPsvPump2DryRun'
     */
    VeCPDR_b_LTPP2_CommonEnblConds = (((((((((((((((((uint32)
        rtb_TmpSignalConversionAtVePMTR_e_ThrmlD) != CePMTR_e_DISBL_All_Thrml) ||
        (KeCPDR_b_LTPP2_FunPer_ThrmlEnbl)) &&
        (rtb_TmpSignalConversionAtVeTMIR_b_MainRl ||
         (KeCPDR_b_LTPP2_FunPer_MainRly_OV))) && ((VeCPDR_b_LTPP2_VltgInRange) ||
        (KeCPDR_b_LTPP2_VltgInRange_OV))) && ((!VeCPDR_b_LTPP2_FunPer_FltDtctPre)
        || (KeCPDR_b_LTPP2_FunPerFlt))) && (((VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp <=
        0) || (VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_0 != 0U)) ||
        (KeCPDR_b_LTPP2_LOCFltDtct))) && (((VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_2 <=
        0) || (VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_1 != 0U)) ||
        (KeCPDR_b_LTPP2_ThrmlRlyCtrlCkt_FA_OV))) &&
        ((!rtb_TmpSignalConversionAtBPCM_LIN_BusOff) ||
         (KeCPDR_b_LTPP2_LINBusoff_FA_OV))) &&
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag) &&
        ((VeCPDR_b_LTPP2_PumpTempChk) || (KeCPDR_b_LTPP2_PumpTempChk_OV))) &&
        ((((uint32)rtb_TmpSignalConversionAtVePMIR_e_LTPsvP) ==
          CePMPR_e_FTSNA_False) || (KeCPDR_b_LTPsvPump2DryRun_OV))) &&
        ((VeCPDR_b_LTPP2_LimpHmChek_Enb) || (KeCPDR_b_LTPsvPump2_LmpHM_OV))) &&
        ((VeCPDR_b_LTPP2_MntrChedEnb) || (KeCPDR_b_LTPsvPump2MntrRPM_OV))) &&
        ((VeCPDR_b_LTPP2_CmdLessLim) || (KeCPDR_b_LTPP2_CmdLessLimEvent_OV))) &&
        ((!rtb_RelationalOperator3_jf) || (KeCPDR_b_LTPP2_Temp_FA_OV)));

    /* Outputs for Atomic SubSystem: '<S733>/DeltaOneStep1' */
    /* Sum: '<S742>/Sum//Sub' incorporates:
     *  UnitDelay: '<S742>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVePMIR_n_LTPsvP =
        rtb_TmpSignalConversionAtVePMPR_n_LT_P_p -
        CPDR_ac_DW.UnitDelay_DSTATE_jx;

    /* Update for UnitDelay: '<S742>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_jx = rtb_TmpSignalConversionAtVePMPR_n_LT_P_p;

    /* End of Outputs for SubSystem: '<S733>/DeltaOneStep1' */

    /* Sum: '<S731>/Add' incorporates:
     *  Abs: '<S733>/Abs'
     */
    rtb_TmpSignalConversionAtVePMIR_n_LTPsvP = fabsf
        (rtb_TmpSignalConversionAtVePMIR_n_LTPsvP);

    /* Outputs for Atomic SubSystem: '<S733>/Timer Retrigger Reset Enabled1' */
    /* Switch: '<S750>/Switch1' incorporates:
     *  Constant: '<S743>/Calib'
     *  Constant: '<S745>/Calib'
     *  Constant: '<S749>/Calib'
     *  Constant: '<S750>/Constant Value4'
     *  MinMax: '<S750>/Maximum'
     *  RelationalOperator: '<S733>/Greater Than or Equal 3'
     *  Sum: '<S750>/Subtraction'
     *  UnitDelay: '<S750>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVePMIR_n_LTPsvP >=
            KeCPDR_n_LTP_Pmp2Perf_DeltSpdsmall)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_a = KeCPDR_t_LTP_Pmp2Perf_DeltSpd_Small;
    }
    else
    {
        CPDR_ac_DW.UnitDelay_DSTATE_a = fmaxf(CPDR_ac_DW.UnitDelay_DSTATE_a -
            HeCPDR_t_MedTEH, 0.0F);
    }

    /* End of Switch: '<S750>/Switch1' */
    /* End of Outputs for SubSystem: '<S733>/Timer Retrigger Reset Enabled1' */

    /* Outputs for Atomic SubSystem: '<S733>/Timer Retrigger Reset Enabled2' */
    /* Switch: '<S751>/Switch1' incorporates:
     *  Constant: '<S743>/Calib'
     *  Constant: '<S744>/Calib'
     *  Constant: '<S748>/Calib'
     *  Constant: '<S751>/Constant Value4'
     *  MinMax: '<S751>/Maximum'
     *  RelationalOperator: '<S733>/Greater Than or Equal 4'
     *  Sum: '<S751>/Subtraction'
     *  UnitDelay: '<S751>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVePMIR_n_LTPsvP >=
            KeCPDR_n_LTP_Pmp2Perf_DeltSpdbig)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_bx = KeCPDR_t_LTP_Pmp2Perf_DeltSpd_Big;
    }
    else
    {
        CPDR_ac_DW.UnitDelay_DSTATE_bx = fmaxf(CPDR_ac_DW.UnitDelay_DSTATE_bx -
            HeCPDR_t_MedTEH, 0.0F);
    }

    /* End of Switch: '<S751>/Switch1' */
    /* End of Outputs for SubSystem: '<S733>/Timer Retrigger Reset Enabled2' */
    (void)Rte_Read_VePMIR_b_LTPsvPump2RPMAct_SNA_Value(&rtb_AND3_n);

    /* Outputs for Atomic SubSystem: '<S733>/Timer Retrigger Reset Enabled1' */
    /* Outputs for Atomic SubSystem: '<S733>/Timer Retrigger Reset Enabled2' */
    /* Logic: '<S733>/Logical14' incorporates:
     *  Constant: '<S750>/Constant Value2'
     *  Constant: '<S751>/Constant Value2'
     *  Inport: '<Root>/VePMIR_b_LTPsvPump2RPMAct_SNA'
     *  Logic: '<S733>/Logical5'
     *  Logic: '<S733>/Logical6'
     *  RelationalOperator: '<S750>/Greater  Than1'
     *  RelationalOperator: '<S751>/Greater  Than1'
     *  UnitDelay: '<S750>/Unit Delay'
     *  UnitDelay: '<S751>/Unit Delay'
     */
    VeCPDR_b_LTP_Pmp2Perf_DeltSpdCmdEnbl = ((CPDR_ac_DW.UnitDelay_DSTATE_a <=
        0.0F) && (CPDR_ac_DW.UnitDelay_DSTATE_bx <= 0.0F));

    /* End of Outputs for SubSystem: '<S733>/Timer Retrigger Reset Enabled2' */
    /* End of Outputs for SubSystem: '<S733>/Timer Retrigger Reset Enabled1' */

    /* Logic: '<S758>/AND1' incorporates:
     *  Constant: '<S746>/Calib'
     *  Constant: '<S747>/Calib'
     *  Constant: '<S775>/Calib'
     *  Constant: '<S776>/Calib'
     *  Constant: '<S777>/Calib'
     *  Logic: '<S758>/AND3'
     *  Logic: '<S758>/AND31'
     *  Logic: '<S758>/AND4'
     *  RelationalOperator: '<S733>/Greater Than or Equal 1'
     *  RelationalOperator: '<S733>/Greater Than or Equal 2'
     */
    VeCPDR_b_LTPP2_PerfEnblConds = ((((rtb_TmpSignalConversionAtVePMPR_n_LT_P_p >=
        KeCPDR_n_LTP_Pmp2Perf_MinSpd) || (KeCPDR_b_LTPP2_MinSpdChk_OV)) &&
        ((rtb_TmpSignalConversionAtVePMPR_n_LT_P_p <=
          KeCPDR_n_LTP_Pmp2Perf_MaxSpd) || (KeCPDR_b_LTPP2_MaxSpdChk_OV))) &&
        ((VeCPDR_b_LTP_Pmp2Perf_DeltSpdCmdEnbl) ||
         (KeCPDR_b_LTPP2_DeltSpdCmdEnbl_OV)));

    /* Logic: '<S738>/AND3' */
    rtb_AND3_n = ((VeCPDR_b_LTPP2_CommonEnblConds) && rtb_AND3_n);

    /* Outputs for Atomic SubSystem: '<S759>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S780>/EdgeRising' */
    /* Logic: '<S781>/AND' incorporates:
     *  Logic: '<S781>/OR1'
     *  UnitDelay: '<S781>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeTMIR_b_MainRl = (rtb_AND3_n &&
        (!CPDR_ac_DW.UnitDelay_DSTATE_f0));

    /* Update for UnitDelay: '<S781>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_f0 = rtb_AND3_n;

    /* End of Outputs for SubSystem: '<S780>/EdgeRising' */

    /* Switch: '<S780>/Switch1' incorporates:
     *  Constant: '<S778>/Calib'
     *  Constant: '<S779>/Calib'
     *  Constant: '<S780>/Constant Value1'
     *  Logic: '<S780>/OR'
     *  Logic: '<S780>/OR1'
     *  MinMax: '<S780>/Minimum'
     *  Sum: '<S780>/Summation'
     *  UnitDelay: '<S780>/Unit Delay'
     */
    if ((!rtb_AND3_n) || rtb_TmpSignalConversionAtVeTMIR_b_MainRl)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_ko = 0.0F;
    }
    else
    {
        CPDR_ac_DW.UnitDelay_DSTATE_ko = fminf(KeCPDR_t_LTPP2_rpmSNA_WaitTime,
            HeCPDR_t_MedTEH + CPDR_ac_DW.UnitDelay_DSTATE_ko);
    }

    /* End of Switch: '<S780>/Switch1' */

    /* Logic: '<S780>/AND' incorporates:
     *  Constant: '<S779>/Calib'
     *  RelationalOperator: '<S780>/Greater  Than'
     *  UnitDelay: '<S780>/Unit Delay'
     */
    VeCPDR_b_LTPP2_SpdSNAConfirmed = (rtb_AND3_n &&
        (CPDR_ac_DW.UnitDelay_DSTATE_ko >= KeCPDR_t_LTPP2_rpmSNA_WaitTime));

    /* End of Outputs for SubSystem: '<S759>/Turn On Delay Time' */

    /* Logic: '<S738>/AND1' incorporates:
     *  Constant: '<S756>/Calib'
     *  Logic: '<S738>/AND12'
     *  Logic: '<S738>/AND2'
     */
    rtb_AND3_n = (((VeCPDR_b_LTPP2_CommonEnblConds) &&
                   (VeCPDR_b_LTPP2_PerfEnblConds)) ||
                  ((KeCPDR_b_LTPP2_SpdSNAEnblCndsOV) &&
                   (VeCPDR_b_LTPP2_SpdSNAConfirmed)));

    /* S-Function (sfix_bitop): '<S794>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S732>/Data Store Read'
     *  S-Function (sfix_bitop): '<S830>/Bitwise Operator1'
     */
    rtb_RelationalOperator3_m_tmp = ((uint32)
        CPDR_ac_DW.StatusByte_MtrElect_CoolPumBCtrlPerf) & 64U;

    /* RelationalOperator: '<S794>/Relational Operator3' incorporates:
     *  Constant: '<S794>/Constant3'
     *  S-Function (sfix_bitop): '<S794>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_jf = (rtb_RelationalOperator3_m_tmp == 0U);

    /* Outputs for Atomic SubSystem: '<S794>/EdgeFalling1' */
    /* Logic: '<S794>/Logical Operator' incorporates:
     *  Logic: '<S796>/OR1'
     */
    rtb_AND3_k = !rtb_RelationalOperator3_jf;

    /* End of Outputs for SubSystem: '<S794>/EdgeFalling1' */

    /* Logic: '<S794>/Logical1' incorporates:
     *  Constant: '<S793>/Calib'
     *  Constant: '<S794>/Constant1'
     *  DataStoreRead: '<S732>/Data Store Read'
     *  Logic: '<S794>/Logical Operator'
     *  Logic: '<S794>/Logical10'
     *  Logic: '<S794>/Logical12'
     *  RelationalOperator: '<S794>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S794>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVeTMIR_b_MainRl = (rtb_AND3_n &&
        ((!KeCPDR_b_MtrElect_CoolPumBCtrlPerf_LtchEnbl) || (((((uint32)
        CPDR_ac_DW.StatusByte_MtrElect_CoolPumBCtrlPerf) & 1U) == 0U) ||
        rtb_AND3_k)));

    /* Abs: '<S731>/Abs' incorporates:
     *  Sum: '<S731>/Add'
     */
    VeCPDR_n_LTPP2_FunPer_RPM_Error = fabsf
        (rtb_TmpSignalConversionAtVePMPR_n_LT_P_p -
         rtb_TmpSignalConversionAtVePMIR_n_LTPs_i);

    /* Logic: '<S790>/AND22' incorporates:
     *  Constant: '<S729>/Calib'
     *  RelationalOperator: '<S790>/Comparison1'
     *  RelationalOperator: '<S790>/Comparison4'
     *  Sum: '<S790>/Add'
     *  Sum: '<S790>/Add1'
     */
    VeCPDR_b_LTPP2_VltgDrpFunPer_FltChk =
        ((rtb_TmpSignalConversionAtVePMIR_n_LTPs_i <
          (rtb_TmpSignalConversionAtVePMPR_n_LT_Psv -
           KeCPDR_n_LTPP2_FunPer_DesRPM)) ||
         (rtb_TmpSignalConversionAtVePMIR_n_LTPs_i >
          (rtb_TmpSignalConversionAtVePMPR_n_LT_P_p +
           KeCPDR_n_LTPP2_FunPer_DesRPM)));

    /* Switch: '<S731>/Switch1' incorporates:
     *  Constant: '<S728>/Calib'
     *  Constant: '<S729>/Calib'
     *  Logic: '<S731>/AND22'
     *  RelationalOperator: '<S731>/Comparison4'
     */
    if ((KeCPDR_b_LTPP2_CmdLessLim_Disbl) || (VeCPDR_b_LTPP2_CmdLessLim))
    {
        rtb_TmpSignalConversionAtBPCM_LIN_BusOff =
            (VeCPDR_n_LTPP2_FunPer_RPM_Error > KeCPDR_n_LTPP2_FunPer_DesRPM);
    }
    else
    {
        rtb_TmpSignalConversionAtBPCM_LIN_BusOff =
            VeCPDR_b_LTPP2_VltgDrpFunPer_FltChk;
    }

    /* End of Switch: '<S731>/Switch1' */

    /* Logic: '<S731>/AND1' incorporates:
     *  Constant: '<S789>/Calib'
     *  Logic: '<S731>/AND2'
     */
    VeCPDR_b_LTPP2_FunPer_FltChk = (rtb_TmpSignalConversionAtBPCM_LIN_BusOff ||
        ((VeCPDR_b_LTPP2_SpdSNAConfirmed) && (KeCPDR_b_LTPP2_SpdSNAFault_En)));

    /* Outputs for Atomic SubSystem: '<S794>/EdgeFalling1' */
    /* Logic: '<S796>/AND' incorporates:
     *  UnitDelay: '<S796>/Unit Delay'
     */
    rtb_AND3_k = (rtb_AND3_k && (CPDR_ac_DW.UnitDelay_DSTATE_g1));

    /* Update for UnitDelay: '<S796>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_g1 = rtb_RelationalOperator3_jf;

    /* End of Outputs for SubSystem: '<S794>/EdgeFalling1' */

    /* Logic: '<S794>/Logical5' */
    rtb_RelationalOperator3_jf = (rtb_NOT4_n || rtb_AND3_k);

    /* UnitDelay: '<S795>/Unit Delay1' incorporates:
     *  UnitDelay: '<S714>/Unit Delay'
     */
    CPDR_ac_DW.UnitDelay_DSTATE_bt = CPDR_ac_DW.UnitDelay1_DSTATE_a2;

    /* Outputs for Atomic SubSystem: '<S795>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S795>/Counter Reset  Enabled ' */
    /* Switch: '<S802>/Switch1' incorporates:
     *  Logic: '<S795>/Fail Counter Reset'
     *  Logic: '<S795>/NOT6'
     *  Switch: '<S802>/Switch2'
     *  Switch: '<S803>/Switch1'
     *  UnitDelay: '<S714>/Unit Delay'
     *  UnitDelay: '<S795>/Unit Delay'
     */
    if ((rtb_RelationalOperator3_jf || (CPDR_ac_DW.UnitDelay_DSTATE_at)) ||
            (CPDR_ac_DW.UnitDelay_DSTATE_bt))
    {
        /* Switch: '<S802>/Switch1' incorporates:
         *  Constant: '<S802>/Constant Value2'
         */
        VeCPDR_Cnt_LTPP2_Perf_FailCnt = 0U;

        /* Switch: '<S803>/Switch1' incorporates:
         *  Constant: '<S803>/Constant Value2'
         */
        VeCPDR_Cnt_LTPP2_Perf_SmpCnt = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeTMIR_b_MainRl &&
                (VeCPDR_b_LTPP2_FunPer_FltChk))
        {
            /* Switch: '<S802>/Switch1' incorporates:
             *  Constant: '<S802>/Constant Value1'
             *  Sum: '<S802>/Subtraction'
             *  Switch: '<S802>/Switch2'
             *  UnitDelay: '<S802>/Unit Delay'
             */
            VeCPDR_Cnt_LTPP2_Perf_FailCnt = (uint16)(((uint32)
                VeCPDR_Cnt_LTPP2_Perf_FailCnt) + 1U);
        }

        /* Switch: '<S803>/Switch2' */
        if (rtb_TmpSignalConversionAtVeTMIR_b_MainRl)
        {
            /* Switch: '<S803>/Switch1' incorporates:
             *  Constant: '<S803>/Constant Value1'
             *  Sum: '<S803>/Subtraction'
             *  Switch: '<S803>/Switch2'
             *  UnitDelay: '<S803>/Unit Delay'
             */
            VeCPDR_Cnt_LTPP2_Perf_SmpCnt = (uint16)(((uint32)
                VeCPDR_Cnt_LTPP2_Perf_SmpCnt) + 1U);
        }

        /* End of Switch: '<S803>/Switch2' */
    }

    /* End of Switch: '<S802>/Switch1' */
    /* End of Outputs for SubSystem: '<S795>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S795>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S795>/Greater Than or Equal ' incorporates:
     *  Constant: '<S791>/Calib'
     */
    CPDR_ac_DW.UnitDelay1_DSTATE_a2 = (((sint32)VeCPDR_Cnt_LTPP2_Perf_FailCnt) >=
        ((sint32)KeCPDR_Cnt_LTPP2_FunPer_FailCnt));

    /* Logic: '<S795>/NOT5' incorporates:
     *  Constant: '<S792>/Calib'
     *  Logic: '<S795>/NOT3'
     *  RelationalOperator: '<S795>/Less Than  or Equal'
     */
    CPDR_ac_DW.UnitDelay_DSTATE_at = ((((sint32)VeCPDR_Cnt_LTPP2_Perf_SmpCnt) >=
        ((sint32)KeCPDR_Cnt_LTPP2_FunPer_SmpCnt)) &&
        (!CPDR_ac_DW.UnitDelay1_DSTATE_a2));

    /* Switch: '<S808>/Switch1' incorporates:
     *  Constant: '<S801>/Constant Value'
     *  DataStoreWrite: '<S732>/Data Store Write3'
     *  Switch: '<S807>/Switch1'
     */
    if (rtb_TmpSignalConversionAtPostCodeClrDiag)
    {
        CPDR_ac_DW.NeCPDR_Cnt_LTPP2_FunPer_MFOP = 0U;
    }
    else
    {
        if (CPDR_ac_DW.UnitDelay_DSTATE_at)
        {
            /* MinMax: '<S801>/Minimum2' incorporates:
             *  DataStoreRead: '<S732>/Data Store Read1'
             *  Switch: '<S807>/Switch1'
             */
            if (VeCPDR_Cnt_LTPP2_Perf_FailCnt >
                    CPDR_ac_DW.NeCPDR_Cnt_LTPP2_FunPer_MFOP)
            {
                /* DataStoreWrite: '<S732>/Data Store Write3' incorporates:
                 *  Switch: '<S807>/Switch1'
                 */
                CPDR_ac_DW.NeCPDR_Cnt_LTPP2_FunPer_MFOP =
                    VeCPDR_Cnt_LTPP2_Perf_FailCnt;
            }

            /* End of MinMax: '<S801>/Minimum2' */
        }
    }

    /* End of Switch: '<S808>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S794>/Fail' */
    CPDR_ac_Fail(CPDR_ac_DW.UnitDelay1_DSTATE_a2, &CPDR_ac_B.Merge_i);

    /* End of Outputs for SubSystem: '<S794>/Fail' */

    /* Outputs for Enabled SubSystem: '<S794>/Init' */
    CPDR_ac_Init_g(rtb_RelationalOperator3_jf, &CPDR_ac_B.Merge_i);

    /* End of Outputs for SubSystem: '<S794>/Init' */

    /* Outputs for Enabled SubSystem: '<S794>/Pass' */
    CPDR_ac_Pass(CPDR_ac_DW.UnitDelay_DSTATE_at, &CPDR_ac_B.Merge_i);

    /* End of Outputs for SubSystem: '<S794>/Pass' */

    /* RelationalOperator: '<S794>/Relational Operator' incorporates:
     *  Constant: '<S797>/Constant'
     *  Merge: '<S794>/Merge'
     *  UnitDelay: '<S732>/Unit Delay'
     */
    CPDR_ac_DW.UnitDelay_DSTATE_hq = (((uint32)CPDR_ac_B.Merge_i) ==
        CeDFIB_e_Fail);

    /* RelationalOperator: '<S688>/Comparison2' incorporates:
     *  Constant: '<S686>/Calib'
     */
    rtb_NOT4_n = (rtb_TmpSignalConversionAtVePMPR_n_LT_P_p <
                  KeCPDR_n_PECP2_MinCmdThrshld);

    /* Logic: '<S688>/Logical1' */
    rtb_TmpSignalConversionAtVeTMIR_b_MainRl =
        !rtb_TmpSignalConversionAtPropSysActv_AD_;

    /* Outputs for Atomic SubSystem: '<S688>/Stop Watch Reset Enabled2' */
    /* Switch: '<S811>/Switch' incorporates:
     *  Constant: '<S811>/Constant Value2'
     *  Logic: '<S688>/Logical3'
     *  UnitDelay: '<S811>/Unit Delay'
     */
    if (rtb_NOT4_n || rtb_TmpSignalConversionAtVeTMIR_b_MainRl)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_ee = 0.0F;
    }
    else
    {
        /* UnitDelay: '<S811>/Unit Delay' incorporates:
         *  Constant: '<S688>/Constant Value1'
         *  Sum: '<S811>/Subtraction'
         *  Switch: '<S811>/Switch2'
         */
        CPDR_ac_DW.UnitDelay_DSTATE_ee += 0.1F;
    }

    /* End of Switch: '<S811>/Switch' */
    /* End of Outputs for SubSystem: '<S688>/Stop Watch Reset Enabled2' */

    /* RelationalOperator: '<S809>/Comparison1' incorporates:
     *  Constant: '<S815>/Calib'
     *  UnitDelay: '<S811>/Unit Delay'
     */
    rtb_RelationalOperator3_jf = (CPDR_ac_DW.UnitDelay_DSTATE_ee >
        KeCPDR_t_IUMPR_PECP2_MinConsecTime_CmdOn);

    /* Outputs for Atomic SubSystem: '<S688>/Stop Watch Reset Enabled3' */
    /* Switch: '<S812>/Switch' incorporates:
     *  Constant: '<S812>/Constant Value2'
     *  Logic: '<S688>/Logical4'
     *  Switch: '<S812>/Switch2'
     *  UnitDelay: '<S812>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeTMIR_b_MainRl)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_k = 0.0F;
    }
    else
    {
        if (!rtb_NOT4_n)
        {
            /* UnitDelay: '<S812>/Unit Delay' incorporates:
             *  Constant: '<S688>/Constant Value2'
             *  Sum: '<S812>/Subtraction'
             *  Switch: '<S812>/Switch2'
             */
            CPDR_ac_DW.UnitDelay_DSTATE_k += 0.1F;
        }
    }

    /* End of Switch: '<S812>/Switch' */
    /* End of Outputs for SubSystem: '<S688>/Stop Watch Reset Enabled3' */

    /* Outputs for Atomic SubSystem: '<S809>/EdgeRising' */
    /* Logic: '<S813>/OR1' incorporates:
     *  UnitDelay: '<S813>/Unit Delay'
     */
    rtb_NOT4_n = !CPDR_ac_DW.UnitDelay_DSTATE_gey;

    /* Update for UnitDelay: '<S813>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_gey = rtb_RelationalOperator3_jf;

    /* End of Outputs for SubSystem: '<S809>/EdgeRising' */

    /* Switch: '<S809>/Switch' incorporates:
     *  Constant: '<S809>/Constant Value5'
     *  Logic: '<S813>/AND'
     *  Sum: '<S809>/Sum'
     *  UnitDelay: '<S809>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeTMIR_b_MainRl)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_gu = 0.0F;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S809>/EdgeRising' */
        CPDR_ac_DW.UnitDelay_DSTATE_gu += (float32)((rtb_RelationalOperator3_jf &&
            rtb_NOT4_n) ? 1 : 0);

        /* End of Outputs for SubSystem: '<S809>/EdgeRising' */
    }

    /* End of Switch: '<S809>/Switch' */

    /* Outputs for Atomic SubSystem: '<S688>/Signal Latch On With Reset' */
    /* Logic: '<S810>/OR1' incorporates:
     *  Constant: '<S814>/Calib'
     *  Constant: '<S816>/Calib'
     *  Logic: '<S809>/Logical4'
     *  Logic: '<S810>/NOT'
     *  Logic: '<S810>/OR'
     *  RelationalOperator: '<S809>/Comparison2'
     *  RelationalOperator: '<S809>/Comparison4'
     *  UnitDelay: '<S809>/Unit Delay'
     *  UnitDelay: '<S810>/Unit Delay'
     *  UnitDelay: '<S812>/Unit Delay'
     */
    CPDR_ac_DW.UnitDelay_DSTATE_mj = (((CPDR_ac_DW.UnitDelay_DSTATE_k >=
        KeCPDR_t_IUMPR_PECP2_MinCumlTime_CmdOn) ||
        (CPDR_ac_DW.UnitDelay_DSTATE_gu >=
         KeCPDR_Cnt_IUMPR_PECP2_MinConsecCnt_CmdOn)) ||
        ((!rtb_TmpSignalConversionAtVeTMIR_b_MainRl) &&
         (CPDR_ac_DW.UnitDelay_DSTATE_mj)));

    /* End of Outputs for SubSystem: '<S688>/Signal Latch On With Reset' */

    /* S-Function (sfix_bitop): '<S827>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S827>/StatusByte_LIN1_BusOff'
     *  S-Function (sfix_bitop): '<S819>/Bitwise Operator2'
     */
    VeCPDR_b_BCP_CommonEnblConds_tmp = ((sint32)
        CPDR_ac_DW.StatusByte_LIN1_BusOff) & 1;

    /* S-Function (sfix_bitop): '<S827>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S827>/StatusByte_LIN1_BusOff'
     *  S-Function (sfix_bitop): '<S819>/Bitwise Operator1'
     */
    rtb_RelationalOperator3_p_tmp = ((uint32)CPDR_ac_DW.StatusByte_LIN1_BusOff)
        & 64U;

    /* S-Function (sfix_bitop): '<S828>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S828>/StatusByte_LIN3_BusOff'
     *  S-Function (sfix_bitop): '<S820>/Bitwise Operator2'
     */
    rtb_Logical6_c_tmp = ((sint32)CPDR_ac_DW.StatusByte_LIN3_BusOff) & 1;

    /* S-Function (sfix_bitop): '<S828>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S828>/StatusByte_LIN3_BusOff'
     *  S-Function (sfix_bitop): '<S820>/Bitwise Operator1'
     */
    rtb_Logical6_c_tmp_0 = ((uint32)CPDR_ac_DW.StatusByte_LIN3_BusOff) & 64U;

    /* Logic: '<S818>/Logical4' incorporates:
     *  Constant: '<S827>/Constant1'
     *  Constant: '<S827>/Constant2'
     *  Constant: '<S828>/Constant1'
     *  Constant: '<S828>/Constant2'
     *  Constant: '<S829>/Constant1'
     *  Constant: '<S829>/Constant2'
     *  Constant: '<S830>/Constant1'
     *  Constant: '<S830>/Constant2'
     *  Constant: '<S831>/Constant1'
     *  Constant: '<S831>/Constant2'
     *  Constant: '<S832>/Calib'
     *  Constant: '<S833>/Calib'
     *  Constant: '<S834>/Calib'
     *  Constant: '<S835>/Calib'
     *  Constant: '<S836>/Calib'
     *  DataStoreRead: '<S830>/StatusByte_MtrElect_CoolPumBCtrlPerf'
     *  Logic: '<S818>/Logical'
     *  Logic: '<S818>/Logical1'
     *  Logic: '<S818>/Logical2'
     *  Logic: '<S818>/Logical3'
     *  Logic: '<S818>/Logical5'
     *  Logic: '<S827>/Logical Operator'
     *  Logic: '<S828>/Logical Operator'
     *  Logic: '<S829>/Logical Operator'
     *  Logic: '<S830>/Logical Operator'
     *  Logic: '<S831>/Logical Operator'
     *  RelationalOperator: '<S827>/Relational Operator1'
     *  RelationalOperator: '<S827>/Relational Operator2'
     *  RelationalOperator: '<S828>/Relational Operator1'
     *  RelationalOperator: '<S828>/Relational Operator2'
     *  RelationalOperator: '<S829>/Relational Operator1'
     *  RelationalOperator: '<S829>/Relational Operator2'
     *  RelationalOperator: '<S830>/Relational Operator1'
     *  RelationalOperator: '<S830>/Relational Operator2'
     *  RelationalOperator: '<S831>/Relational Operator1'
     *  RelationalOperator: '<S831>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S827>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S827>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S828>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S828>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S830>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_jf = (((((((VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp > 0) &&
        (VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_0 == 0U)) &&
        (KeCPDR_b_IUMPR_PECP2_Perf_LOC_ChkEnbl)) ||
        (((VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_2 > 0) &&
          (VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_1 == 0U)) &&
         (KeCPDR_b_IUMPR_PECP2_Perf_CrktChkEnbl))) ||
        (((VeCPDR_b_BCP_CommonEnblConds_tmp > 0) &&
          (rtb_RelationalOperator3_p_tmp == 0U)) &&
         (KeCPDR_b_IUMPR_PECP2_Perf_LINBus1_ChkEnbl))) || ((((((sint32)
        CPDR_ac_DW.StatusByte_MtrElect_CoolPumBCtrlPerf) & 1) > 0) &&
        (rtb_RelationalOperator3_m_tmp == 0U)) &&
        (KeCPDR_b_IUMPR_PECP2_Perf_PECP2_PerfChkEnbl))) || (((rtb_Logical6_c_tmp
        > 0) && (rtb_Logical6_c_tmp_0 == 0U)) &&
        (KeCPDR_b_IUMPR_PECP2_Perf_LINBus3_ChkEnbl)));

    /* Logic: '<S817>/Logical3' incorporates:
     *  Constant: '<S819>/Constant1'
     *  Constant: '<S819>/Constant2'
     *  Constant: '<S820>/Constant1'
     *  Constant: '<S820>/Constant2'
     *  Constant: '<S821>/Constant1'
     *  Constant: '<S821>/Constant2'
     *  Constant: '<S822>/Constant1'
     *  Constant: '<S822>/Constant2'
     *  Constant: '<S823>/Calib'
     *  Constant: '<S824>/Calib'
     *  Constant: '<S825>/Calib'
     *  Constant: '<S826>/Calib'
     *  Logic: '<S817>/Logical'
     *  Logic: '<S817>/Logical1'
     *  Logic: '<S817>/Logical2'
     *  Logic: '<S817>/Logical4'
     *  Logic: '<S819>/Logical Operator'
     *  Logic: '<S820>/Logical Operator'
     *  Logic: '<S821>/Logical Operator'
     *  Logic: '<S822>/Logical Operator'
     *  RelationalOperator: '<S819>/Relational Operator1'
     *  RelationalOperator: '<S819>/Relational Operator2'
     *  RelationalOperator: '<S820>/Relational Operator1'
     *  RelationalOperator: '<S820>/Relational Operator2'
     *  RelationalOperator: '<S821>/Relational Operator1'
     *  RelationalOperator: '<S821>/Relational Operator2'
     *  RelationalOperator: '<S822>/Relational Operator1'
     *  RelationalOperator: '<S822>/Relational Operator2'
     */
    rtb_NOT4_n = ((((((VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp > 0) &&
                      (VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_0 == 0U)) &&
                     (KeCPDR_b_IUMPR_PECP2_DryRn_LOC_ChkEnbl)) ||
                    (((VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_2 > 0) &&
                      (VeCPDR_b_LTAP_DryRun_ChkEnbl_tmp_1 == 0U)) &&
                     (KeCPDR_b_IUMPR_PECP2_DryRn_CrktChkEnbl))) ||
                   (((VeCPDR_b_BCP_CommonEnblConds_tmp > 0) &&
                     (rtb_RelationalOperator3_p_tmp == 0U)) &&
                    (KeCPDR_b_IUMPR_PECP2_DryRn_LINBus1_ChkEnbl))) ||
                  (((rtb_Logical6_c_tmp > 0) && (rtb_Logical6_c_tmp_0 == 0U)) &&
                   (KeCPDR_b_IUMPR_PECP2_DryRn_LINBus3_ChkEnbl)));

    /* Update for UnitDelay: '<S714>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_bt = rtb_Logical1_po;

    /* VariantMerge generated from: '<S175>/LTCL_Flags' incorporates:
     *  UnitDelay: '<S732>/Unit Delay'
     */
    rtb_Logical1_po = CPDR_ac_DW.UnitDelay_DSTATE_hq;

    /* End of Outputs for SubSystem: '<S681>/LTPP2_Diagnostics_FUNC' */
    /* End of Outputs for SubSystem: '<S175>/LTPP2_Diagnostics' */
#elif !Rte_SysCon_Variant_CPDR_6 && Rte_SysCon_Variant_CPDR_5

    /* VariantMerge generated from: '<S175>/LTCL_Flags' incorporates:
     *  SignalConversion generated from: '<S175>/LTCL_Flags'
     */
    rtb_Logical1_po = false;

#endif

    /* End of SignalConversion generated from: '<S2>/VePMPR_n_LT_PsvPmp2Cmd' */

    /* Logic: '<S680>/Logical1' */
#if Rte_SysCon_Variant_CPDR_5 || Rte_SysCon_Variant_CPDR_6

    /* Outport: '<Root>/VeCPDR_b_LTCL_FunPer_FltDtct' */
    (void)Rte_Write_VeCPDR_b_LTCL_FunPer_FltDtct_Value(rtb_Logical1_cy &&
        rtb_Logical1_po);

#endif

    /* End of Logic: '<S680>/Logical1' */

    /* SignalConversion generated from: '<S175>/LTCL_Flags' */
#if Rte_SysCon_Variant_CPDR_5

    /* VariantMerge generated from: '<S175>/LTCL_Flags' */
    rtb_Logical1_po = VeCPDR_b_LTPP_DryRun_FltDtct;

#elif !Rte_SysCon_Variant_CPDR_5 && Rte_SysCon_Variant_CPDR_6

    /* VariantMerge generated from: '<S175>/LTCL_Flags' incorporates:
     *  SignalConversion generated from: '<S175>/LTCL_Flags'
     */
    rtb_Logical1_po = false;

#endif

    /* End of SignalConversion generated from: '<S175>/LTCL_Flags' */

    /* SignalConversion generated from: '<S175>/LTCL_Flags' */
#if Rte_SysCon_Variant_CPDR_6

    /* VariantMerge generated from: '<S175>/LTCL_Flags' */
    rtb_Logical1_cy = VeCPDR_b_LTPP2_DryRun_FltDtct;

#elif !Rte_SysCon_Variant_CPDR_6 && Rte_SysCon_Variant_CPDR_5

    /* VariantMerge generated from: '<S175>/LTCL_Flags' incorporates:
     *  SignalConversion generated from: '<S175>/LTCL_Flags'
     */
    rtb_Logical1_cy = false;

#endif

    /* End of SignalConversion generated from: '<S175>/LTCL_Flags' */

    /* Logic: '<S680>/Logical2' */
#if Rte_SysCon_Variant_CPDR_5 || Rte_SysCon_Variant_CPDR_6

    /* Outport: '<Root>/VeCPDR_b_LTCL_DryRun_FltDtct' */
    (void)Rte_Write_VeCPDR_b_LTCL_DryRun_FltDtct_Value(rtb_Logical1_po ||
        rtb_Logical1_cy);

#endif

    /* End of Logic: '<S680>/Logical2' */

    /* SignalConversion generated from: '<S2>/VeCPDR_b_HTAP_FunPer_FltDtct' */
#if Rte_SysCon_Variant_CPDR_4

    /* Outport: '<Root>/VeCPDR_b_HTAP_FunPer_FltDtct' incorporates:
     *  UnitDelay: '<S603>/Unit Delay'
     */
    (void)Rte_Write_VeCPDR_b_HTAP_FunPer_FltDtct_Value
        (CPDR_ac_DW.UnitDelay_DSTATE_l1);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCPDR_b_HTAP_FunPer_FltDtct' */

    /* SignalConversion generated from: '<S2>/VeCPDR_b_IUMPR_EOPA_MinCmdThrshld_Met' */
#if Rte_SysCon_Variant_CPDR_7

    /* Outport: '<Root>/VeCPDR_b_IUMPR_EOPA_MinCmdThrshld_Met' */
    (void)Rte_Write_VeCPDR_b_IUMPR_EOPA_MinCmdThrshld_Met_Value
        (CPDR_ac_DW.UnitDelay_DSTATE_ht);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCPDR_b_IUMPR_EOPA_MinCmdThrshld_Met' */

    /* SignalConversion generated from: '<S2>/VeCPDR_b_IUMPR_EOPB_MinCmdThrshld_Met' */
#if Rte_SysCon_Variant_CPDR_8

    /* Outport: '<Root>/VeCPDR_b_IUMPR_EOPB_MinCmdThrshld_Met' */
    (void)Rte_Write_VeCPDR_b_IUMPR_EOPB_MinCmdThrshld_Met_Value
        (CPDR_ac_DW.UnitDelay_DSTATE_ci);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCPDR_b_IUMPR_EOPB_MinCmdThrshld_Met' */

    /* SignalConversion generated from: '<S2>/VeCPDR_b_IUMPR_HTAP_MinCmdThrshld_Met' */
#if Rte_SysCon_Variant_CPDR_4

    /* Outport: '<Root>/VeCPDR_b_IUMPR_HTAP_MinCmdThrshld_Met' */
    (void)Rte_Write_VeCPDR_b_IUMPR_HTAP_MinCmdThrshld_Met_Value
        (CPDR_ac_DW.UnitDelay_DSTATE_pc1);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCPDR_b_IUMPR_HTAP_MinCmdThrshld_Met' */

    /* SignalConversion generated from: '<S2>/VeCPDR_b_IUMPR_LTAP_MinCmdThrshld_Met' */
#if Rte_SysCon_Variant_CPDR_3

    /* Outport: '<Root>/VeCPDR_b_IUMPR_LTAP_MinCmdThrshld_Met' */
    (void)Rte_Write_VeCPDR_b_IUMPR_LTAP_MinCmdThrshld_Met_Value
        (CPDR_ac_DW.UnitDelay_DSTATE_ae);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCPDR_b_IUMPR_LTAP_MinCmdThrshld_Met' */

    /* SignalConversion generated from: '<S2>/VeCPDR_b_IUMPR_PECP2_MinCmdThrshld_Met' */
#if Rte_SysCon_Variant_CPDR_6

    /* Outport: '<Root>/VeCPDR_b_IUMPR_PECP2_MinCmdThrshld_Met' */
    (void)Rte_Write_VeCPDR_b_IUMPR_PECP2_MinCmdThrshld_Met_Value
        (CPDR_ac_DW.UnitDelay_DSTATE_mj);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCPDR_b_IUMPR_PECP2_MinCmdThrshld_Met' */

    /* SignalConversion generated from: '<S2>/VeCPDR_b_IUMPR_PECP_MinCmdThrshld_Met' */
#if Rte_SysCon_Variant_CPDR_5

    /* Outport: '<Root>/VeCPDR_b_IUMPR_PECP_MinCmdThrshld_Met' */
    (void)Rte_Write_VeCPDR_b_IUMPR_PECP_MinCmdThrshld_Met_Value
        (CPDR_ac_DW.UnitDelay_DSTATE_jd);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCPDR_b_IUMPR_PECP_MinCmdThrshld_Met' */

    /* SignalConversion generated from: '<S2>/VeTAPR_n_KMHEVDesiredSpeed' incorporates:
     *  Inport: '<Root>/VePMIR_n_EOP_SpeedFdbk'
     *  SignalConversion generated from: '<S2>/VeCPDR_b_IUMPR_PWM_EOP_MinCmdThrshld_Met'
     *  SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_Aux_TF_Pmp_CM_Ckt'
     *  SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_Aux_TF_Pmp_CM_Fdbck'
     *  SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_Aux_TF_Pmp_CM_Fdbck_SigRan'
     */
#if Rte_SysCon_Variant_CPDR_11

    /* Outputs for Atomic SubSystem: '<S2>/PWM_EOP_Diagnostics' */
    /* Outputs for Atomic SubSystem: '<S177>/PWM_EOP_Diagnostics_FUNC' */
    /* SignalConversion generated from: '<S2>/VeTAPR_n_KMHEVDesiredSpeed' incorporates:
     *  Inport: '<Root>/VeTAPR_n_KMHEVDesiredSpeed'
     */
    (void)Rte_Read_VeTAPR_n_KMHEVDesiredSpeed_Value
        (&rtb_TmpSignalConversionAtVeTAPR_n_KMHEVD);

    /* SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_Aux_TF_Pmp_CM_Fdbck' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_Aux_TF_Pmp_CM_Fdbck'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_Aux_TF_Pmp_CM_Fdbck_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Status);

    /* SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_Aux_TF_Pmp_CM_Ckt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_Aux_TF_Pmp_CM_Ckt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_Aux_TF_Pmp_CM_Ckt_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_d);

    /* SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_Aux_TF_Pmp_CM_Fdbck_SigRan' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_Aux_TF_Pmp_CM_Fdbck_SigRan'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_Aux_TF_Pmp_CM_Fdbck_SigRan_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_h);

    /* Logic: '<S1030>/Logical2' incorporates:
     *  Constant: '<S1041>/Calib'
     *  Constant: '<S1042>/Calib'
     *  RelationalOperator: '<S1030>/Comparison4'
     *  RelationalOperator: '<S1030>/Comparison5'
     */
    VeCPDR_b_PWM_EOP_VltgInRange = ((rtb_TmpSignalConversionAtBF1_SysVolt_AD_ <=
        KeCPDR_U_PWM_EOP_MaxOprtngVltg) &&
        (rtb_TmpSignalConversionAtBF1_SysVolt_AD_ >=
         KeCPDR_U_PWM_EOP_MinOprtngVltg));

    /* Outputs for Atomic SubSystem: '<S1029>/DeltaOneStep1' */
    /* Sum: '<S1031>/Sum//Sub' incorporates:
     *  UnitDelay: '<S1031>/Unit Delay'
     */
    rtb_TmpSignalConversionAtBF1_SysVolt_AD_ =
        rtb_TmpSignalConversionAtVeTAPR_n_KMHEVD - CPDR_ac_DW.UnitDelay_DSTATE_g;

    /* Update for UnitDelay: '<S1031>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_g = rtb_TmpSignalConversionAtVeTAPR_n_KMHEVD;

    /* End of Outputs for SubSystem: '<S1029>/DeltaOneStep1' */

    /* Sum: '<S1025>/Add' incorporates:
     *  Abs: '<S1029>/Abs'
     */
    rtb_TmpSignalConversionAtBF1_SysVolt_AD_ = fabsf
        (rtb_TmpSignalConversionAtBF1_SysVolt_AD_);

    /* Outputs for Atomic SubSystem: '<S1029>/Timer Retrigger Reset Enabled1' */
    /* Switch: '<S1039>/Switch1' incorporates:
     *  Constant: '<S1032>/Calib'
     *  Constant: '<S1036>/Calib'
     *  Constant: '<S1038>/Calib'
     *  Constant: '<S1039>/Constant Value4'
     *  MinMax: '<S1039>/Maximum'
     *  RelationalOperator: '<S1029>/Greater Than or Equal 3'
     *  Sum: '<S1039>/Subtraction'
     *  UnitDelay: '<S1039>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtBF1_SysVolt_AD_ >=
            KeCPDR_n_PWM_EOP_PmpPerf_DeltSpdsmall)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_l = KeCPDR_t_PWM_EOP_PmpPerf_DeltSpd_Small;
    }
    else
    {
        CPDR_ac_DW.UnitDelay_DSTATE_l = fmaxf(CPDR_ac_DW.UnitDelay_DSTATE_l -
            HeCPDR_t_MedTEH, 0.0F);
    }

    /* End of Switch: '<S1039>/Switch1' */
    /* End of Outputs for SubSystem: '<S1029>/Timer Retrigger Reset Enabled1' */

    /* Outputs for Atomic SubSystem: '<S1029>/Timer Retrigger Reset Enabled2' */
    /* Switch: '<S1040>/Switch1' incorporates:
     *  Constant: '<S1032>/Calib'
     *  Constant: '<S1035>/Calib'
     *  Constant: '<S1037>/Calib'
     *  Constant: '<S1040>/Constant Value4'
     *  MinMax: '<S1040>/Maximum'
     *  RelationalOperator: '<S1029>/Greater Than or Equal 4'
     *  Sum: '<S1040>/Subtraction'
     *  UnitDelay: '<S1040>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtBF1_SysVolt_AD_ >=
            KeCPDR_n_PWM_EOP_PmpPerf_DeltSpdbig)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_c = KeCPDR_t_PWM_EOP_PmpPerf_DeltSpd_Big;
    }
    else
    {
        CPDR_ac_DW.UnitDelay_DSTATE_c = fmaxf(CPDR_ac_DW.UnitDelay_DSTATE_c -
            HeCPDR_t_MedTEH, 0.0F);
    }

    /* End of Switch: '<S1040>/Switch1' */
    /* End of Outputs for SubSystem: '<S1029>/Timer Retrigger Reset Enabled2' */
    (void)Rte_Read_VePMIR_n_EOP_SpeedFdbk_Value(&tmpRead_d);

    /* Outputs for Atomic SubSystem: '<S1029>/Timer Retrigger Reset Enabled1' */
    /* Outputs for Atomic SubSystem: '<S1029>/Timer Retrigger Reset Enabled2' */
    /* Logic: '<S1029>/Logical14' incorporates:
     *  Constant: '<S1039>/Constant Value2'
     *  Constant: '<S1040>/Constant Value2'
     *  Inport: '<Root>/VePMIR_n_EOP_SpeedFdbk'
     *  Logic: '<S1029>/Logical5'
     *  Logic: '<S1029>/Logical6'
     *  RelationalOperator: '<S1039>/Greater  Than1'
     *  RelationalOperator: '<S1040>/Greater  Than1'
     *  UnitDelay: '<S1039>/Unit Delay'
     *  UnitDelay: '<S1040>/Unit Delay'
     */
    VeCPDR_b_PWM_EOP_CmdInSS = ((CPDR_ac_DW.UnitDelay_DSTATE_l <= 0.0F) &&
        (CPDR_ac_DW.UnitDelay_DSTATE_c <= 0.0F));

    /* End of Outputs for SubSystem: '<S1029>/Timer Retrigger Reset Enabled2' */
    /* End of Outputs for SubSystem: '<S1029>/Timer Retrigger Reset Enabled1' */

    /* Logic: '<S1029>/AND12' incorporates:
     *  Constant: '<S1033>/Calib'
     *  Constant: '<S1034>/Calib'
     *  RelationalOperator: '<S1029>/Greater Than or Equal 1'
     *  RelationalOperator: '<S1029>/Greater Than or Equal 2'
     */
    VeCPDR_b_PWM_EOP_SSCmdInRange = (((rtb_TmpSignalConversionAtVeTAPR_n_KMHEVD >=
        KeCPDR_n_PWM_EOP_MinCmdSpd) && (rtb_TmpSignalConversionAtVeTAPR_n_KMHEVD
        <= KeCPDR_n_PWM_EOP_MaxCmdSpd)) && (VeCPDR_b_PWM_EOP_CmdInSS));

    /* Logic: '<S1024>/AND1' */
    VeCPDR_b_PWM_EOP_FunPer_ChkEnbl = ((rtb_TmpSignalConversionAtVeDFIR_b_IsDiag
        && (VeCPDR_b_PWM_EOP_VltgInRange)) && (VeCPDR_b_PWM_EOP_SSCmdInRange));

    /* RelationalOperator: '<S1061>/Relational Operator3' incorporates:
     *  Constant: '<S1061>/Constant3'
     *  S-Function (sfix_bitop): '<S1061>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtVeTMIR_b_MainRl = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_h) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S1061>/EdgeFalling1' */
    /* Logic: '<S1061>/Logical Operator' incorporates:
     *  Logic: '<S1063>/OR1'
     */
    rtb_Logical1_cy = !rtb_TmpSignalConversionAtVeTMIR_b_MainRl;

    /* End of Outputs for SubSystem: '<S1061>/EdgeFalling1' */

    /* Logic: '<S1061>/Logical1' incorporates:
     *  Constant: '<S1060>/Calib'
     *  Constant: '<S1061>/Constant1'
     *  Logic: '<S1061>/Logical Operator'
     *  Logic: '<S1061>/Logical10'
     *  Logic: '<S1061>/Logical12'
     *  RelationalOperator: '<S1061>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S1061>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_IsDiag = ((VeCPDR_b_PWM_EOP_FunPer_ChkEnbl)
        && ((!KeCPDR_b_Aux_TF_Pmp_CM_Fdbck_SigRan_LtchEnbl) || (((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_h) & 1U) == 0U) ||
        rtb_Logical1_cy)));

    /* Abs: '<S1025>/Abs' incorporates:
     *  Sum: '<S1025>/Add'
     */
    VeCPDR_n_PWM_EOP_FunPer_RPM_Error = fabsf
        (rtb_TmpSignalConversionAtVeTAPR_n_KMHEVD - tmpRead_d);

    /* RelationalOperator: '<S1025>/Comparison2' incorporates:
     *  Constant: '<S1043>/Calib'
     */
    VeCPDR_b_PWM_EOP_FunPer_FltChk = (VeCPDR_n_PWM_EOP_FunPer_RPM_Error >
        KeCPDR_n_PWM_EOP_FunPer_DesRPM);

    /* Outputs for Atomic SubSystem: '<S1061>/EdgeFalling1' */
    /* Logic: '<S1063>/AND' incorporates:
     *  UnitDelay: '<S1063>/Unit Delay'
     */
    rtb_Logical1_cy = (rtb_Logical1_cy && (CPDR_ac_DW.UnitDelay_DSTATE_fvj));

    /* Update for UnitDelay: '<S1063>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_fvj = rtb_TmpSignalConversionAtVeTMIR_b_MainRl;

    /* End of Outputs for SubSystem: '<S1061>/EdgeFalling1' */

    /* Logic: '<S1061>/Logical5' incorporates:
     *  Logic: '<S1027>/NOT4'
     */
    rtb_TmpSignalConversionAtDsblDiagFailSaf =
        ((rtb_TmpSignalConversionAtDsblDiagFailSaf ||
          rtb_TmpSignalConversionAtPostCodeClrDiag) || rtb_Logical1_cy);

    /* Outputs for Atomic SubSystem: '<S1062>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S1062>/Counter Reset  Enabled ' */
    /* Switch: '<S1069>/Switch1' incorporates:
     *  Logic: '<S1062>/Fail Counter Reset'
     *  Logic: '<S1062>/NOT6'
     *  Switch: '<S1069>/Switch2'
     *  Switch: '<S1070>/Switch1'
     *  UnitDelay: '<S1062>/Unit Delay'
     *  UnitDelay: '<S1062>/Unit Delay1'
     */
    if ((rtb_TmpSignalConversionAtDsblDiagFailSaf ||
            (CPDR_ac_DW.UnitDelay_DSTATE_j1l)) || (CPDR_ac_DW.UnitDelay1_DSTATE))
    {
        /* Switch: '<S1069>/Switch1' incorporates:
         *  Constant: '<S1069>/Constant Value2'
         */
        VeCPDR_Cnt_PWM_EOP_Perf_FailCnt = 0U;

        /* Switch: '<S1070>/Switch1' incorporates:
         *  Constant: '<S1070>/Constant Value2'
         */
        VeCPDR_Cnt_PWM_EOP_Perf_SmpCnt = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
                (VeCPDR_b_PWM_EOP_FunPer_FltChk))
        {
            /* Switch: '<S1069>/Switch1' incorporates:
             *  Constant: '<S1069>/Constant Value1'
             *  Sum: '<S1069>/Subtraction'
             *  Switch: '<S1069>/Switch2'
             *  UnitDelay: '<S1069>/Unit Delay'
             */
            VeCPDR_Cnt_PWM_EOP_Perf_FailCnt = (uint16)(((uint32)
                VeCPDR_Cnt_PWM_EOP_Perf_FailCnt) + 1U);
        }

        /* Switch: '<S1070>/Switch2' */
        if (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag)
        {
            /* Switch: '<S1070>/Switch1' incorporates:
             *  Constant: '<S1070>/Constant Value1'
             *  Sum: '<S1070>/Subtraction'
             *  Switch: '<S1070>/Switch2'
             *  UnitDelay: '<S1070>/Unit Delay'
             */
            VeCPDR_Cnt_PWM_EOP_Perf_SmpCnt = (uint16)(((uint32)
                VeCPDR_Cnt_PWM_EOP_Perf_SmpCnt) + 1U);
        }

        /* End of Switch: '<S1070>/Switch2' */
    }

    /* End of Switch: '<S1069>/Switch1' */
    /* End of Outputs for SubSystem: '<S1062>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S1062>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S1062>/Greater Than or Equal ' incorporates:
     *  Constant: '<S1058>/Calib'
     */
    CPDR_ac_DW.UnitDelay1_DSTATE = (((sint32)VeCPDR_Cnt_PWM_EOP_Perf_FailCnt) >=
        ((sint32)KeCPDR_Cnt_PWM_EOP_FunPer_FailCnt));

    /* Logic: '<S1062>/NOT5' incorporates:
     *  Constant: '<S1059>/Calib'
     *  Logic: '<S1062>/NOT3'
     *  RelationalOperator: '<S1062>/Less Than  or Equal'
     */
    CPDR_ac_DW.UnitDelay_DSTATE_j1l = ((((sint32)VeCPDR_Cnt_PWM_EOP_Perf_SmpCnt)
        >= ((sint32)KeCPDR_Cnt_PWM_EOP_FunPer_SmpCnt)) &&
        (!CPDR_ac_DW.UnitDelay1_DSTATE));

    /* Switch: '<S1075>/Switch1' incorporates:
     *  Constant: '<S1068>/Constant Value'
     *  DataStoreWrite: '<S1028>/Data Store Write3'
     *  Switch: '<S1074>/Switch1'
     */
    if (rtb_TmpSignalConversionAtPostCodeClrDiag)
    {
        CPDR_ac_DW.NeCPDR_Cnt_PWM_EOP_FunPer_MFOP = 0U;
    }
    else
    {
        if (CPDR_ac_DW.UnitDelay_DSTATE_j1l)
        {
            /* MinMax: '<S1068>/Minimum2' incorporates:
             *  DataStoreRead: '<S1028>/Data Store Read1'
             *  Switch: '<S1074>/Switch1'
             */
            if (VeCPDR_Cnt_PWM_EOP_Perf_FailCnt >
                    CPDR_ac_DW.NeCPDR_Cnt_PWM_EOP_FunPer_MFOP)
            {
                /* DataStoreWrite: '<S1028>/Data Store Write3' incorporates:
                 *  Switch: '<S1074>/Switch1'
                 */
                CPDR_ac_DW.NeCPDR_Cnt_PWM_EOP_FunPer_MFOP =
                    VeCPDR_Cnt_PWM_EOP_Perf_FailCnt;
            }

            /* End of MinMax: '<S1068>/Minimum2' */
        }
    }

    /* End of Switch: '<S1075>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S1061>/Fail' */
    CPDR_ac_Fail(CPDR_ac_DW.UnitDelay1_DSTATE, &CPDR_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S1061>/Fail' */

    /* Outputs for Enabled SubSystem: '<S1061>/Init' */
    CPDR_ac_Init_g(rtb_TmpSignalConversionAtDsblDiagFailSaf, &CPDR_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S1061>/Init' */

    /* Outputs for Enabled SubSystem: '<S1061>/Pass' */
    CPDR_ac_Pass(CPDR_ac_DW.UnitDelay_DSTATE_j1l, &CPDR_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S1061>/Pass' */

    /* RelationalOperator: '<S1061>/Relational Operator' incorporates:
     *  Constant: '<S1064>/Constant'
     *  Merge: '<S1061>/Merge'
     */
    VeCPDR_b_PWM_EOP_FunPer_FltDtct = (((uint32)CPDR_ac_B.Merge) ==
        CeDFIB_e_Fail);

    /* RelationalOperator: '<S1044>/Comparison2' incorporates:
     *  Constant: '<S1047>/Calib'
     */
    rtb_TmpSignalConversionAtPostCodeClrDiag =
        (rtb_TmpSignalConversionAtVeTAPR_n_KMHEVD <
         KeCPDR_n_PWM_EOP_MinCmdThrshld);

    /* Logic: '<S1044>/Logical1' */
    rtb_TmpSignalConversionAtPropSysActv_AD_ =
        !rtb_TmpSignalConversionAtPropSysActv_AD_;

    /* Outputs for Atomic SubSystem: '<S1044>/Stop Watch Reset Enabled2' */
    /* Switch: '<S1049>/Switch1' incorporates:
     *  Constant: '<S1049>/Constant Value2'
     *  Logic: '<S1044>/Logical3'
     *  UnitDelay: '<S1049>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtPostCodeClrDiag ||
            rtb_TmpSignalConversionAtPropSysActv_AD_)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_d = 0.0F;
    }
    else
    {
        /* UnitDelay: '<S1049>/Unit Delay' incorporates:
         *  Constant: '<S1044>/Constant Value1'
         *  Sum: '<S1049>/Subtraction'
         *  Switch: '<S1049>/Switch2'
         */
        CPDR_ac_DW.UnitDelay_DSTATE_d += 0.1F;
    }

    /* End of Switch: '<S1049>/Switch1' */
    /* End of Outputs for SubSystem: '<S1044>/Stop Watch Reset Enabled2' */

    /* RelationalOperator: '<S1046>/Comparison1' incorporates:
     *  Constant: '<S1053>/Calib'
     *  UnitDelay: '<S1049>/Unit Delay'
     */
    rtb_TmpSignalConversionAtDsblDiagFailSaf = (CPDR_ac_DW.UnitDelay_DSTATE_d >
        KeCPDR_t_IUMPR_PWM_EOP_MinConsecTime_CmdOn);

    /* Outputs for Atomic SubSystem: '<S1044>/Stop Watch Reset Enabled3' */
    /* Switch: '<S1050>/Switch1' incorporates:
     *  Constant: '<S1050>/Constant Value2'
     *  Logic: '<S1044>/Logical4'
     *  Switch: '<S1050>/Switch2'
     *  UnitDelay: '<S1050>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtPropSysActv_AD_)
    {
        CPDR_ac_DW.UnitDelay_DSTATE_j = 0.0F;
    }
    else
    {
        if (!rtb_TmpSignalConversionAtPostCodeClrDiag)
        {
            /* UnitDelay: '<S1050>/Unit Delay' incorporates:
             *  Constant: '<S1044>/Constant Value2'
             *  Sum: '<S1050>/Subtraction'
             *  Switch: '<S1050>/Switch2'
             */
            CPDR_ac_DW.UnitDelay_DSTATE_j += 0.1F;
        }
    }

    /* End of Switch: '<S1050>/Switch1' */
    /* End of Outputs for SubSystem: '<S1044>/Stop Watch Reset Enabled3' */

    /* Outputs for Atomic SubSystem: '<S1046>/EdgeRising' */
    /* Logic: '<S1051>/OR1' incorporates:
     *  UnitDelay: '<S1051>/Unit Delay'
     */
    rtb_TmpSignalConversionAtPostCodeClrDiag = !CPDR_ac_DW.UnitDelay_DSTATE_ie;

    /* Update for UnitDelay: '<S1051>/Unit Delay' */
    CPDR_ac_DW.UnitDelay_DSTATE_ie = rtb_TmpSignalConversionAtDsblDiagFailSaf;

    /* End of Outputs for SubSystem: '<S1046>/EdgeRising' */

    /* Switch: '<S1046>/Switch' incorporates:
     *  Constant: '<S1046>/Constant Value5'
     *  Logic: '<S1051>/AND'
     *  Sum: '<S1046>/Sum'
     *  UnitDelay: '<S1046>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtPropSysActv_AD_)
    {
        CPDR_ac_DW.UnitDelay_DSTATE = 0.0F;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S1046>/EdgeRising' */
        CPDR_ac_DW.UnitDelay_DSTATE += (float32)
            ((rtb_TmpSignalConversionAtDsblDiagFailSaf &&
              rtb_TmpSignalConversionAtPostCodeClrDiag) ? 1 : 0);

        /* End of Outputs for SubSystem: '<S1046>/EdgeRising' */
    }

    /* End of Switch: '<S1046>/Switch' */

    /* Outputs for Atomic SubSystem: '<S1044>/Signal Latch On With Reset' */
    /* Logic: '<S1048>/OR1' incorporates:
     *  Constant: '<S1052>/Calib'
     *  Constant: '<S1054>/Calib'
     *  Logic: '<S1046>/Logical4'
     *  Logic: '<S1048>/NOT'
     *  Logic: '<S1048>/OR'
     *  RelationalOperator: '<S1046>/Comparison2'
     *  RelationalOperator: '<S1046>/Comparison4'
     *  UnitDelay: '<S1046>/Unit Delay'
     *  UnitDelay: '<S1048>/Unit Delay'
     *  UnitDelay: '<S1050>/Unit Delay'
     */
    CPDR_ac_DW.UnitDelay_DSTATE_od = (((CPDR_ac_DW.UnitDelay_DSTATE_j >=
        KeCPDR_t_IUMPR_PWM_EOP_MinCumlTime_CmdOn) ||
        (CPDR_ac_DW.UnitDelay_DSTATE >=
         KeCPDR_Cnt_IUMPR_PWM_EOP_MinConsecCnt_CmdOn)) ||
        ((!rtb_TmpSignalConversionAtPropSysActv_AD_) &&
         (CPDR_ac_DW.UnitDelay_DSTATE_od)));

    /* End of Outputs for SubSystem: '<S1044>/Signal Latch On With Reset' */

    /* Outport: '<Root>/VeCPDR_b_IUMPR_PWM_EOP_FunPerf' incorporates:
     *  Constant: '<S1055>/Constant1'
     *  Constant: '<S1055>/Constant2'
     *  Constant: '<S1056>/Constant1'
     *  Constant: '<S1056>/Constant2'
     *  Constant: '<S1057>/Constant1'
     *  Constant: '<S1057>/Constant2'
     *  Logic: '<S1045>/Logical3'
     *  Logic: '<S1055>/Logical Operator'
     *  Logic: '<S1056>/Logical Operator'
     *  Logic: '<S1057>/Logical Operator'
     *  RelationalOperator: '<S1055>/Relational Operator1'
     *  RelationalOperator: '<S1055>/Relational Operator2'
     *  RelationalOperator: '<S1056>/Relational Operator1'
     *  RelationalOperator: '<S1056>/Relational Operator2'
     *  RelationalOperator: '<S1057>/Relational Operator1'
     *  RelationalOperator: '<S1057>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S1055>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1055>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1056>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1056>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1057>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1057>/Bitwise Operator2'
     */
    (void)Rte_Write_VeCPDR_b_IUMPR_PWM_EOP_FunPerf_Value(((((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Status) & 1U) != 0U) && ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Status) & 64U) == 0U)) || (((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_d) & 1U) != 0U) && ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_d) & 64U) == 0U))) || (((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_h) & 1U) != 0U) && ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_h) & 64U) == 0U)));

    /* Outport: '<Root>/VeCPDR_b_IUMPR_PWM_EOP_MinCmdThrshld_Met' */
    (void)Rte_Write_VeCPDR_b_IUMPR_PWM_EOP_MinCmdThrshld_Met_Value
        (CPDR_ac_DW.UnitDelay_DSTATE_od);

    /* End of Outputs for SubSystem: '<S177>/PWM_EOP_Diagnostics_FUNC' */
    /* End of Outputs for SubSystem: '<S2>/PWM_EOP_Diagnostics' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeTAPR_n_KMHEVDesiredSpeed' */

    /* SignalConversion generated from: '<S2>/VeCPDR_b_LTAP_FunPer_FltDtct' */
#if Rte_SysCon_Variant_CPDR_3

    /* Outport: '<Root>/VeCPDR_b_LTAP_FunPer_FltDtct' incorporates:
     *  UnitDelay: '<S243>/Unit Delay'
     */
    (void)Rte_Write_VeCPDR_b_LTAP_FunPer_FltDtct_Value
        (CPDR_ac_DW.UnitDelay_DSTATE_nt);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCPDR_b_LTAP_FunPer_FltDtct' */

    /* SignalConversion generated from: '<S2>/VeCPDR_b_LTPP2_FunPer_FltDtct' */
#if Rte_SysCon_Variant_CPDR_6

    /* Outport: '<Root>/VeCPDR_b_LTPP2_FunPer_FltDtct' incorporates:
     *  UnitDelay: '<S732>/Unit Delay'
     */
    (void)Rte_Write_VeCPDR_b_LTPP2_FunPer_FltDtct_Value
        (CPDR_ac_DW.UnitDelay_DSTATE_hq);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCPDR_b_LTPP2_FunPer_FltDtct' */

    /* SignalConversion generated from: '<S2>/VeCPDR_b_LTPP_FunPer_FltDtct' */
#if Rte_SysCon_Variant_CPDR_5

    /* Outport: '<Root>/VeCPDR_b_LTPP_FunPer_FltDtct' incorporates:
     *  UnitDelay: '<S886>/Unit Delay'
     */
    (void)Rte_Write_VeCPDR_b_LTPP_FunPer_FltDtct_Value
        (CPDR_ac_DW.UnitDelay_DSTATE_h1);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCPDR_b_LTPP_FunPer_FltDtct' */

    /* SignalConversion generated from: '<S2>/VeCPDR_e_FaultSts_Aux_TF_Pmp_CM_Fdbck_SigRan' */
#if Rte_SysCon_Variant_CPDR_11

    /* Outport: '<Root>/VeCPDR_e_FaultSts_Aux_TF_Pmp_CM_Fdbck_SigRan' incorporates:
     *  Merge: '<S1061>/Merge'
     */
    (void)Rte_Write_VeCPDR_e_FaultSts_Aux_TF_Pmp_CM_Fdbck_SigRan_Value
        (CPDR_ac_B.Merge);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCPDR_e_FaultSts_Aux_TF_Pmp_CM_Fdbck_SigRan' */

    /* SignalConversion generated from: '<S2>/VeCPDR_e_FaultSts_BattCoolPmpOveSpd' incorporates:
     *  SignalConversion generated from: '<S2>/VeCPDR_e_FaultSts_BattCoolPmpPerf'
     */
#if Rte_SysCon_Variant_CPDR_3

    /* Outport: '<Root>/VeCPDR_e_FaultSts_BattCoolPmpOveSpd' incorporates:
     *  Merge: '<S224>/Merge'
     */
    (void)Rte_Write_VeCPDR_e_FaultSts_BattCoolPmpOveSpd_Value(CPDR_ac_B.Merge_ci);

    /* Outport: '<Root>/VeCPDR_e_FaultSts_BattCoolPmpPerf' incorporates:
     *  Merge: '<S305>/Merge'
     */
    (void)Rte_Write_VeCPDR_e_FaultSts_BattCoolPmpPerf_Value(CPDR_ac_B.Merge_n);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCPDR_e_FaultSts_BattCoolPmpOveSpd' */

    /* SignalConversion generated from: '<S2>/VeCPDR_e_FaultSts_CoolPmpACtrlCktPerf' */
#if Rte_SysCon_Variant_CPDR_4

    /* Outport: '<Root>/VeCPDR_e_FaultSts_CoolPmpACtrlCktPerf' incorporates:
     *  Merge: '<S665>/Merge'
     */
    (void)Rte_Write_VeCPDR_e_FaultSts_CoolPmpACtrlCktPerf_Value
        (CPDR_ac_B.Merge_ia);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCPDR_e_FaultSts_CoolPmpACtrlCktPerf' */

    /* SignalConversion generated from: '<S2>/VeCPDR_e_FaultSts_MtrElect_CooPumBOvrSpd' */
#if Rte_SysCon_Variant_CPDR_6

    /* Outport: '<Root>/VeCPDR_e_FaultSts_MtrElect_CooPumBOvrSpd' incorporates:
     *  Merge: '<S713>/Merge'
     */
    (void)Rte_Write_VeCPDR_e_FaultSts_MtrElect_CooPumBOvrSpd_Value
        (CPDR_ac_B.Merge_p);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCPDR_e_FaultSts_MtrElect_CooPumBOvrSpd' */

    /* SignalConversion generated from: '<S2>/VeCPDR_e_FaultSts_MtrElect_CoolPumAOvrSpd' */
#if Rte_SysCon_Variant_CPDR_5

    /* Outport: '<Root>/VeCPDR_e_FaultSts_MtrElect_CoolPumAOvrSpd' incorporates:
     *  Merge: '<S867>/Merge'
     */
    (void)Rte_Write_VeCPDR_e_FaultSts_MtrElect_CoolPumAOvrSpd_Value
        (CPDR_ac_B.Merge_c);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCPDR_e_FaultSts_MtrElect_CoolPumAOvrSpd' */

    /* SignalConversion generated from: '<S2>/VeCPDR_e_FaultSts_MtrElect_CoolPumBCtrlPerf' */
#if Rte_SysCon_Variant_CPDR_6

    /* Outport: '<Root>/VeCPDR_e_FaultSts_MtrElect_CoolPumBCtrlPerf' incorporates:
     *  Merge: '<S794>/Merge'
     */
    (void)Rte_Write_VeCPDR_e_FaultSts_MtrElect_CoolPumBCtrlPerf_Value
        (CPDR_ac_B.Merge_i);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCPDR_e_FaultSts_MtrElect_CoolPumBCtrlPerf' */

    /* SignalConversion generated from: '<S2>/VeCPDR_e_FaultSts_PwrElecPmpPerf' */
#if Rte_SysCon_Variant_CPDR_5

    /* Outport: '<Root>/VeCPDR_e_FaultSts_PwrElecPmpPerf' incorporates:
     *  Merge: '<S948>/Merge'
     */
    (void)Rte_Write_VeCPDR_e_FaultSts_PwrElecPmpPerf_Value(CPDR_ac_B.Merge_e);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCPDR_e_FaultSts_PwrElecPmpPerf' */

    /* SignalConversion generated from: '<S2>/VeCPDR_e_FaultSts_PwrtrnOilPmp1OvrSpd' incorporates:
     *  SignalConversion generated from: '<S2>/VeCPDR_e_FaultSts_PwrtrnOilPmp1Perf'
     */
#if Rte_SysCon_Variant_CPDR_7

    /* Outport: '<Root>/VeCPDR_e_FaultSts_PwrtrnOilPmp1OvrSpd' incorporates:
     *  Merge: '<S376>/Merge'
     */
    (void)Rte_Write_VeCPDR_e_FaultSts_PwrtrnOilPmp1OvrSpd_Value
        (CPDR_ac_B.Merge_b);

    /* Outport: '<Root>/VeCPDR_e_FaultSts_PwrtrnOilPmp1Perf' incorporates:
     *  Merge: '<S427>/Merge'
     */
    (void)Rte_Write_VeCPDR_e_FaultSts_PwrtrnOilPmp1Perf_Value(CPDR_ac_B.Merge_g);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCPDR_e_FaultSts_PwrtrnOilPmp1OvrSpd' */

    /* SignalConversion generated from: '<S2>/VeCPDR_e_FaultSts_PwrtrnOilPmp2OvrSpd' incorporates:
     *  SignalConversion generated from: '<S2>/VeCPDR_e_FaultSts_PwrtrnOilPmp2Perf'
     */
#if Rte_SysCon_Variant_CPDR_8

    /* Outport: '<Root>/VeCPDR_e_FaultSts_PwrtrnOilPmp2OvrSpd' incorporates:
     *  Merge: '<S484>/Merge'
     */
    (void)Rte_Write_VeCPDR_e_FaultSts_PwrtrnOilPmp2OvrSpd_Value
        (CPDR_ac_B.Merge_f);

    /* Outport: '<Root>/VeCPDR_e_FaultSts_PwrtrnOilPmp2Perf' incorporates:
     *  Merge: '<S535>/Merge'
     */
    (void)Rte_Write_VeCPDR_e_FaultSts_PwrtrnOilPmp2Perf_Value(CPDR_ac_B.Merge_a);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCPDR_e_FaultSts_PwrtrnOilPmp2OvrSpd' */

    /* Switch: '<S1002>/Switch' incorporates:
     *  Constant: '<S1022>/Calib'
     */
#if Rte_SysCon_Variant_CPDR_5

    if (KeCPDR_b_LTPP_ChkEnbl_SD)
    {
        /* Outport: '<Root>/VeCPDR_b_LTPP_FunPer_ChkEnbl' incorporates:
         *  Constant: '<S1021>/Calib'
         */
        (void)Rte_Write_VeCPDR_b_LTPP_FunPer_ChkEnbl_Value
            (KeCPDR_b_LTPP_ChkEnbl_D);
    }
    else
    {
        /* Outport: '<Root>/VeCPDR_b_LTPP_FunPer_ChkEnbl' */
        (void)Rte_Write_VeCPDR_b_LTPP_FunPer_ChkEnbl_Value(rtb_AND3);
    }

#endif

    /* End of Switch: '<S1002>/Switch' */

    /* Switch: '<S1001>/Switch' incorporates:
     *  Constant: '<S1020>/Calib'
     */
#if Rte_SysCon_Variant_CPDR_6

    if (KeCPDR_b_LTPP2_ChkEnbl_SD)
    {
        /* Outport: '<Root>/VeCPDR_b_LTPP2_FunPer_ChkEnbl' incorporates:
         *  Constant: '<S1019>/Calib'
         */
        (void)Rte_Write_VeCPDR_b_LTPP2_FunPer_ChkEnbl_Value
            (KeCPDR_b_LTPP2_ChkEnbl_D);
    }
    else
    {
        /* Outport: '<Root>/VeCPDR_b_LTPP2_FunPer_ChkEnbl' */
        (void)Rte_Write_VeCPDR_b_LTPP2_FunPer_ChkEnbl_Value(rtb_AND3_n);
    }

#endif

    /* End of Switch: '<S1001>/Switch' */

    /* Switch: '<S1000>/Switch' incorporates:
     *  Constant: '<S1018>/Calib'
     */
#if Rte_SysCon_Variant_CPDR_3

    if (KeCPDR_b_LTAP_ChkEnbl_SD)
    {
        /* Outport: '<Root>/VeCPDR_b_LTAP_FunPer_ChkEnbl' incorporates:
         *  Constant: '<S1017>/Calib'
         */
        (void)Rte_Write_VeCPDR_b_LTAP_FunPer_ChkEnbl_Value
            (KeCPDR_b_LTAP_ChkEnbl_D);
    }
    else
    {
        /* Outport: '<Root>/VeCPDR_b_LTAP_FunPer_ChkEnbl' */
        (void)Rte_Write_VeCPDR_b_LTAP_FunPer_ChkEnbl_Value(rtb_AND3_pq);
    }

#endif

    /* End of Switch: '<S1000>/Switch' */

    /* Switch: '<S993>/Switch' incorporates:
     *  Constant: '<S1004>/Calib'
     */
#if Rte_SysCon_Variant_CPDR_4

    if (KeCPDR_b_HTAP_ChkEnbl_SD)
    {
        /* Outport: '<Root>/VeCPDR_b_HTAP_FunPer_ChkEnbl' incorporates:
         *  Constant: '<S1003>/Calib'
         */
        (void)Rte_Write_VeCPDR_b_HTAP_FunPer_ChkEnbl_Value
            (KeCPDR_b_HTAP_ChkEnbl_D);
    }
    else
    {
        /* Outport: '<Root>/VeCPDR_b_HTAP_FunPer_ChkEnbl' */
        (void)Rte_Write_VeCPDR_b_HTAP_FunPer_ChkEnbl_Value(rtb_AND3_e);
    }

#endif

    /* End of Switch: '<S993>/Switch' */

    /* Switch: '<S999>/Switch' incorporates:
     *  Constant: '<S1014>/Calib'
     *  Constant: '<S1016>/Calib'
     *  Switch: '<S998>/Switch'
     */
#if Rte_SysCon_Variant_CPDR_5

    if (KeCPDR_b_IUMPR_LTPP_Perf_SD)
    {
        /* Outport: '<Root>/VeCPDR_b_IUMPR_PECP_FunPerf' incorporates:
         *  Constant: '<S1015>/Calib'
         */
        (void)Rte_Write_VeCPDR_b_IUMPR_PECP_FunPerf_Value
            (KeCPDR_b_IUMPR_LTPP_Perf_D);
    }
    else
    {
        /* Outport: '<Root>/VeCPDR_b_IUMPR_PECP_FunPerf' */
        (void)Rte_Write_VeCPDR_b_IUMPR_PECP_FunPerf_Value(rtb_AND_ci);
    }

    if (KeCPDR_b_IUMPR_LTPP_DryRn_SD)
    {
        /* Outport: '<Root>/VeCPDR_b_IUMPR_LTPP_DryRun' incorporates:
         *  Constant: '<S1013>/Calib'
         */
        (void)Rte_Write_VeCPDR_b_IUMPR_LTPP_DryRun_Value
            (KeCPDR_b_IUMPR_LTPP_DryRn_D);
    }
    else
    {
        /* Outport: '<Root>/VeCPDR_b_IUMPR_LTPP_DryRun' */
        (void)Rte_Write_VeCPDR_b_IUMPR_LTPP_DryRun_Value(rtb_NOT4_p);
    }

#endif

    /* End of Switch: '<S999>/Switch' */

    /* Switch: '<S997>/Switch' incorporates:
     *  Constant: '<S1010>/Calib'
     *  Constant: '<S1012>/Calib'
     *  Switch: '<S996>/Switch'
     */
#if Rte_SysCon_Variant_CPDR_6

    if (KeCPDR_b_IUMPR_LTPP2_Perf_SD)
    {
        /* Outport: '<Root>/VeCPDR_b_IUMPR_PECP2_FunPerf' incorporates:
         *  Constant: '<S1011>/Calib'
         */
        (void)Rte_Write_VeCPDR_b_IUMPR_PECP2_FunPerf_Value
            (KeCPDR_b_IUMPR_LTPP2_Perf_D);
    }
    else
    {
        /* Outport: '<Root>/VeCPDR_b_IUMPR_PECP2_FunPerf' */
        (void)Rte_Write_VeCPDR_b_IUMPR_PECP2_FunPerf_Value
            (rtb_RelationalOperator3_jf);
    }

    if (KeCPDR_b_IUMPR_LTPP2_DryRn_SD)
    {
        /* Outport: '<Root>/VeCPDR_b_IUMPR_LTPP2_DryRun' incorporates:
         *  Constant: '<S1009>/Calib'
         */
        (void)Rte_Write_VeCPDR_b_IUMPR_LTPP2_DryRun_Value
            (KeCPDR_b_IUMPR_LTPP2_DryRn_D);
    }
    else
    {
        /* Outport: '<Root>/VeCPDR_b_IUMPR_LTPP2_DryRun' */
        (void)Rte_Write_VeCPDR_b_IUMPR_LTPP2_DryRun_Value(rtb_NOT4_n);
    }

#endif

    /* End of Switch: '<S997>/Switch' */

    /* Switch: '<S995>/Switch' incorporates:
     *  Constant: '<S1008>/Calib'
     */
#if Rte_SysCon_Variant_CPDR_3

    if (KeCPDR_b_IUMPR_LTAP_Perf_SD)
    {
        /* Outport: '<Root>/VeCPDR_b_IUMPR_LTAP_FunPerf' incorporates:
         *  Constant: '<S1007>/Calib'
         */
        (void)Rte_Write_VeCPDR_b_IUMPR_LTAP_FunPerf_Value
            (KeCPDR_b_IUMPR_LTAP_Perf_D);
    }
    else
    {
        /* Outport: '<Root>/VeCPDR_b_IUMPR_LTAP_FunPerf' */
        (void)Rte_Write_VeCPDR_b_IUMPR_LTAP_FunPerf_Value(rtb_NOT4_g);
    }

#endif

    /* End of Switch: '<S995>/Switch' */

    /* Switch: '<S994>/Switch' incorporates:
     *  Constant: '<S1006>/Calib'
     */
#if Rte_SysCon_Variant_CPDR_4

    if (KeCPDR_b_IUMPR_HTAP_Perf_SD)
    {
        /* Outport: '<Root>/VeCPDR_b_IUMPR_HTAP_FunPerf' incorporates:
         *  Constant: '<S1005>/Calib'
         */
        (void)Rte_Write_VeCPDR_b_IUMPR_HTAP_FunPerf_Value
            (KeCPDR_b_IUMPR_HTAP_Perf_D);
    }
    else
    {
        /* Outport: '<Root>/VeCPDR_b_IUMPR_HTAP_FunPerf' */
        (void)Rte_Write_VeCPDR_b_IUMPR_HTAP_FunPerf_Value(rtb_AND_gr);
    }

#endif

    /* End of Switch: '<S994>/Switch' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
}

/* Output function */
FUNC(void, CPDR_CODE) CPDR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/CPDR_PwrOff'
     */
    /* Outport: '<Root>/NeCPDR_Cnt_EOPA_FunDryRun_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeCPDR_Cnt_EOPA_FunDryRun_MFOP'
     */
    (void)
        Rte_Write_NeCPDR_Cnt_EOPA_FunDryRun_MFOP_NeCPDR_Cnt_EOPA_FunDryRun_MFOP
        (CPDR_ac_DW.NeCPDR_Cnt_EOPA_FunDryRun_MFOP);

    /* Outport: '<Root>/NeCPDR_Cnt_EOPA_FunPer_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeCPDR_Cnt_EOPA_FunPer_MFOP'
     */
    (void)Rte_Write_NeCPDR_Cnt_EOPA_FunPer_MFOP_NeCPDR_Cnt_EOPA_FunPer_MFOP
        (CPDR_ac_DW.NeCPDR_Cnt_EOPA_FunPer_MFOP);

    /* Outport: '<Root>/NeCPDR_Cnt_EOPB_FunDryRun_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeCPDR_Cnt_EOPB_FunDryRun_MFOP'
     */
    (void)
        Rte_Write_NeCPDR_Cnt_EOPB_FunDryRun_MFOP_NeCPDR_Cnt_EOPB_FunDryRun_MFOP
        (CPDR_ac_DW.NeCPDR_Cnt_EOPB_FunDryRun_MFOP);

    /* Outport: '<Root>/NeCPDR_Cnt_EOPB_FunPer_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeCPDR_Cnt_EOPB_FunPer_MFOP'
     */
    (void)Rte_Write_NeCPDR_Cnt_EOPB_FunPer_MFOP_NeCPDR_Cnt_EOPB_FunPer_MFOP
        (CPDR_ac_DW.NeCPDR_Cnt_EOPB_FunPer_MFOP);

    /* Outport: '<Root>/NeCPDR_Cnt_HTAP_FunPer_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeCPDR_Cnt_HTAP_FunPer_MFOP'
     */
    (void)Rte_Write_NeCPDR_Cnt_HTAP_FunPer_MFOP_NeCPDR_Cnt_HTAP_FunPer_MFOP
        (CPDR_ac_DW.NeCPDR_Cnt_HTAP_FunPer_MFOP);

    /* Outport: '<Root>/NeCPDR_Cnt_LTAP_FunDryRun_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeCPDR_Cnt_LTAP_FunDryRun_MFOP'
     */
    (void)
        Rte_Write_NeCPDR_Cnt_LTAP_FunDryRun_MFOP_NeCPDR_Cnt_LTAP_FunDryRun_MFOP
        (CPDR_ac_DW.NeCPDR_Cnt_LTAP_FunDryRun_MFOP);

    /* Outport: '<Root>/NeCPDR_Cnt_LTAP_FunPer_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeCPDR_Cnt_LTAP_FunPer_MFOP'
     */
    (void)Rte_Write_NeCPDR_Cnt_LTAP_FunPer_MFOP_NeCPDR_Cnt_LTAP_FunPer_MFOP
        (CPDR_ac_DW.NeCPDR_Cnt_LTAP_FunPer_MFOP);

    /* Outport: '<Root>/NeCPDR_Cnt_LTPP2_FunDryRun_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeCPDR_Cnt_LTPP2_FunDryRun_MFOP'
     */
    (void)
        Rte_Write_NeCPDR_Cnt_LTPP2_FunDryRun_MFOP_NeCPDR_Cnt_LTPP2_FunDryRun_MFOP
        (CPDR_ac_DW.NeCPDR_Cnt_LTPP2_FunDryRun_MFOP);

    /* Outport: '<Root>/NeCPDR_Cnt_LTPP2_FunPer_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeCPDR_Cnt_LTPP2_FunPer_MFOP'
     */
    (void)Rte_Write_NeCPDR_Cnt_LTPP2_FunPer_MFOP_NeCPDR_Cnt_LTPP2_FunPer_MFOP
        (CPDR_ac_DW.NeCPDR_Cnt_LTPP2_FunPer_MFOP);

    /* Outport: '<Root>/NeCPDR_Cnt_LTPP_FunDryRun_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeCPDR_Cnt_LTPP_FunDryRun_MFOP'
     */
    (void)
        Rte_Write_NeCPDR_Cnt_LTPP_FunDryRun_MFOP_NeCPDR_Cnt_LTPP_FunDryRun_MFOP
        (CPDR_ac_DW.NeCPDR_Cnt_LTPP_FunDryRun_MFOP);

    /* Outport: '<Root>/NeCPDR_Cnt_LTPP_FunPer_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeCPDR_Cnt_LTPP_FunPer_MFOP'
     */
    (void)Rte_Write_NeCPDR_Cnt_LTPP_FunPer_MFOP_NeCPDR_Cnt_LTPP_FunPer_MFOP
        (CPDR_ac_DW.NeCPDR_Cnt_LTPP_FunPer_MFOP);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, CPDR_CODE) CPDR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/CPDR_PwrOn'
     */
    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/DSM_Init'
     */
    /* DataStoreWrite: '<S1076>/NeCPDR_Cnt_LTPP_FunPer_MFOP' incorporates:
     *  Inport: '<Root>/NeCPDR_Cnt_LTPP_FunPer_MFOP_PM_In'
     */
    (void)Rte_Read_NeCPDR_Cnt_LTPP_FunPer_MFOP_Rx_NeCPDR_Cnt_LTPP_FunPer_MFOP
        (&CPDR_ac_DW.NeCPDR_Cnt_LTPP_FunPer_MFOP);

    /* DataStoreWrite: '<S1076>/NeCPDR_Cnt_LTPP_FunDryRun_MFOP' incorporates:
     *  Inport: '<Root>/NeCPDR_Cnt_LTPP_FunDryRun_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeCPDR_Cnt_LTPP_FunDryRun_MFOP_Rx_NeCPDR_Cnt_LTPP_FunDryRun_MFOP
        (&CPDR_ac_DW.NeCPDR_Cnt_LTPP_FunDryRun_MFOP);

    /* DataStoreWrite: '<S1076>/NeCPDR_Cnt_LTPP2_FunPer_MFOP' incorporates:
     *  Inport: '<Root>/NeCPDR_Cnt_LTPP2_FunPer_MFOP_PM_In'
     */
    (void)Rte_Read_NeCPDR_Cnt_LTPP2_FunPer_MFOP_Rx_NeCPDR_Cnt_LTPP2_FunPer_MFOP(
        &CPDR_ac_DW.NeCPDR_Cnt_LTPP2_FunPer_MFOP);

    /* DataStoreWrite: '<S1076>/NeCPDR_Cnt_LTPP2_FunDryRun_MFOP' incorporates:
     *  Inport: '<Root>/NeCPDR_Cnt_LTPP2_FunDryRun_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeCPDR_Cnt_LTPP2_FunDryRun_MFOP_Rx_NeCPDR_Cnt_LTPP2_FunDryRun_MFOP
        (&CPDR_ac_DW.NeCPDR_Cnt_LTPP2_FunDryRun_MFOP);

    /* DataStoreWrite: '<S1076>/NeCPDR_Cnt_LTAP_FunPer_MFOP' incorporates:
     *  Inport: '<Root>/NeCPDR_Cnt_LTAP_FunPer_MFOP_PM_In'
     */
    (void)Rte_Read_NeCPDR_Cnt_LTAP_FunPer_MFOP_Rx_NeCPDR_Cnt_LTAP_FunPer_MFOP
        (&CPDR_ac_DW.NeCPDR_Cnt_LTAP_FunPer_MFOP);

    /* DataStoreWrite: '<S1076>/NeCPDR_Cnt_LTAP_FunDryRun_MFOP' incorporates:
     *  Inport: '<Root>/NeCPDR_Cnt_LTAP_FunDryRun_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeCPDR_Cnt_LTAP_FunDryRun_MFOP_Rx_NeCPDR_Cnt_LTAP_FunDryRun_MFOP
        (&CPDR_ac_DW.NeCPDR_Cnt_LTAP_FunDryRun_MFOP);

    /* DataStoreWrite: '<S1076>/NeCPDR_Cnt_HTAP_FunPer_MFOP' incorporates:
     *  Inport: '<Root>/NeCPDR_Cnt_HTAP_FunPer_MFOP_PM_In'
     */
    (void)Rte_Read_NeCPDR_Cnt_HTAP_FunPer_MFOP_Rx_NeCPDR_Cnt_HTAP_FunPer_MFOP
        (&CPDR_ac_DW.NeCPDR_Cnt_HTAP_FunPer_MFOP);

    /* DataStoreWrite: '<S1076>/NeCPDR_Cnt_EOPB_FunPer_MFOP' incorporates:
     *  Inport: '<Root>/NeCPDR_Cnt_EOPB_FunPer_MFOP_PM_In'
     */
    (void)Rte_Read_NeCPDR_Cnt_EOPB_FunPer_MFOP_Rx_NeCPDR_Cnt_EOPB_FunPer_MFOP
        (&CPDR_ac_DW.NeCPDR_Cnt_EOPB_FunPer_MFOP);

    /* DataStoreWrite: '<S1076>/NeCPDR_Cnt_EOPB_FunDryRun_MFOP' incorporates:
     *  Inport: '<Root>/NeCPDR_Cnt_EOPB_FunDryRun_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeCPDR_Cnt_EOPB_FunDryRun_MFOP_Rx_NeCPDR_Cnt_EOPB_FunDryRun_MFOP
        (&CPDR_ac_DW.NeCPDR_Cnt_EOPB_FunDryRun_MFOP);

    /* DataStoreWrite: '<S1076>/NeCPDR_Cnt_EOPA_FunPer_MFOP' incorporates:
     *  Inport: '<Root>/NeCPDR_Cnt_EOPA_FunPer_MFOP_PM_In'
     */
    (void)Rte_Read_NeCPDR_Cnt_EOPA_FunPer_MFOP_Rx_NeCPDR_Cnt_EOPA_FunPer_MFOP
        (&CPDR_ac_DW.NeCPDR_Cnt_EOPA_FunPer_MFOP);

    /* DataStoreWrite: '<S1076>/NeCPDR_Cnt_EOPA_FunDryRun_MFOP' incorporates:
     *  Inport: '<Root>/NeCPDR_Cnt_EOPA_FunDryRun_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeCPDR_Cnt_EOPA_FunDryRun_MFOP_Rx_NeCPDR_Cnt_EOPA_FunDryRun_MFOP
        (&CPDR_ac_DW.NeCPDR_Cnt_EOPA_FunDryRun_MFOP);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S1077>/VeCPDR_b_LTPP_FunPer_ChkEnbl_Out_Init' */
    CPDR_ac_B.OutportBufferForVeCPDR_b_LTPP_FunPer_Chk = false;

    /* SignalConversion generated from: '<S1077>/VeCPDR_b_LTPP_FunPer_FltDtct_Out_Init' */
    CPDR_ac_B.OutportBufferForVeCPDR_b_LTPP_FunPer_Flt = false;

    /* SignalConversion generated from: '<S1077>/VeCPDR_b_LTPP2_FunPer_ChkEnbl_Out_Init' */
    CPDR_ac_B.OutportBufferForVeCPDR_b_LTPP2_FunPer_Ch = false;

    /* SignalConversion generated from: '<S1077>/VeCPDR_b_LTPP2_FunPer_FltDtct_Out_Init' */
    CPDR_ac_B.OutportBufferForVeCPDR_b_LTPP2_FunPer_Fl = false;

    /* SignalConversion generated from: '<S1077>/VeCPDR_b_LTAP_FunPer_ChkEnbl_Out_Init' */
    CPDR_ac_B.OutportBufferForVeCPDR_b_LTAP_FunPer_Chk = false;

    /* SignalConversion generated from: '<S1077>/VeCPDR_b_LTAP_FunPer_FltDtct_Out_Init' */
    CPDR_ac_B.OutportBufferForVeCPDR_b_LTAP_FunPer_Flt = false;

    /* SignalConversion generated from: '<S1077>/VeCPDR_b_HTAP_FunPer_ChkEnbl_Out_Init' */
    CPDR_ac_B.OutportBufferForVeCPDR_b_HTAP_FunPer_Chk = false;

    /* SignalConversion generated from: '<S1077>/VeCPDR_b_HTAP_FunPer_FltDtct_Out_Init' */
    CPDR_ac_B.OutportBufferForVeCPDR_b_HTAP_FunPer_Flt = false;

    /* SignalConversion generated from: '<S1077>/VeCPDR_b_IUMPR_PECP_FunPerf_Out_Init' */
    CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_PECP_FunP = false;

    /* SignalConversion generated from: '<S1077>/VeCPDR_b_IUMPR_LTPP_DryRun_Out_Init' */
    CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_LTPP_DryR = false;

    /* SignalConversion generated from: '<S1077>/VeCPDR_b_IUMPR_PECP2_FunPerf_Out_Init' */
    CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_PECP2_Fun = false;

    /* SignalConversion generated from: '<S1077>/VeCPDR_b_IUMPR_LTPP2_DryRun_Out_Init' */
    CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_LTPP2_Dry = false;

    /* SignalConversion generated from: '<S1077>/VeCPDR_b_IUMPR_LTAP_FunPerf_Out_Init' */
    CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_LTAP_FunP = false;

    /* SignalConversion generated from: '<S1077>/VeCPDR_b_IUMPR_HTAP_FunPerf_Out_Init' */
    CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_HTAP_FunP = false;

    /* SignalConversion generated from: '<S1077>/VeCPDR_b_IUMPR_PECP_MinCmdThrshld_Met_Out_Init' */
    CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_PECP_MinC = false;

    /* SignalConversion generated from: '<S1077>/VeCPDR_b_LTCL_FunPer_FltDtct_Out_Init' */
    CPDR_ac_B.OutportBufferForVeCPDR_b_LTCL_FunPer_Flt = false;

    /* SignalConversion generated from: '<S1077>/VeCPDR_b_LTCL_DryRun_FltDtct_Out_Init' */
    CPDR_ac_B.OutportBufferForVeCPDR_b_LTCL_DryRun_Flt = false;

    /* SignalConversion generated from: '<S1077>/VeCPDR_b_IUMPR_PECP2_MinCmdThrshld_Met_Out_Init' */
    CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_PECP2_Min = false;

    /* SignalConversion generated from: '<S1077>/VeCPDR_b_IUMPR_LTAP_MinCmdThrshld_Met_Out_Init' */
    CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_LTAP_MinC = false;

    /* SignalConversion generated from: '<S1077>/VeCPDR_b_IUMPR_HTAP_MinCmdThrshld_Met_Out_Init' */
    CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_HTAP_MinC = false;

    /* SignalConversion generated from: '<S1077>/VeCPDR_b_IUMPR_LTAP_DryRun_Out_Init' */
    CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_LTAP_DryR = false;

    /* SignalConversion generated from: '<S1077>/VeCPDR_b_IUMPR_EOPA_MinCmdThrshld_Met_Out_Init' */
    CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_EOPA_MinC = false;

    /* SignalConversion generated from: '<S1077>/VeCPDR_b_IUMPR_EOPA_FunPerf_Out_Init' */
    CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_EOPA_FunP = false;

    /* SignalConversion generated from: '<S1077>/VeCPDR_b_IUMPR_EOPA_DryRun_Out_Init' */
    CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_EOPA_DryR = false;

    /* SignalConversion generated from: '<S1077>/VeCPDR_b_IUMPR_EOPB_MinCmdThrshld_Met_Out_Init' */
    CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_EOPB_MinC = false;

    /* SignalConversion generated from: '<S1077>/VeCPDR_b_IUMPR_EOPB_FunPerf_Out_Init' */
    CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_EOPB_FunP = false;

    /* SignalConversion generated from: '<S1077>/VeCPDR_b_IUMPR_EOPB_DryRun_Out_Init' */
    CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_EOPB_DryR = false;

    /* SignalConversion generated from: '<S1077>/VeCPDR_b_AuxPumpPerf_FltDtct_Out_Init' */
    CPDR_ac_B.OutportBufferForVeCPDR_b_AuxPumpPerf_Flt = false;

    /* SignalConversion generated from: '<S1077>/VeCPDR_b_IUMPR_TAP_FunPerf_Out_Init' */
    CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_TAP_FunPe = false;

    /* SignalConversion generated from: '<S1077>/VeCPDR_b_IUMPR_TAP_MinCmdThrshld_Met_Out_Init' */
    CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_TAP_MinCm = false;

    /* SignalConversion generated from: '<S1077>/VeCPDR_b_IUMPR_PWM_EOP_MinCmdThrshld_Met_Out_Init' */
    CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_PWM_EOP_M = false;

    /* SignalConversion generated from: '<S1077>/VeCPDR_b_IUMPR_PWM_EOP_FunPerf_Out_Init' */
    CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_PWM_EOP_F = false;

    /* SignalConversion generated from: '<S1077>/BF1_SysVolt_AD_write' */
    CPDR_ac_B.OutportBufferForBF1_SysVolt_AD_write = 0.0F;

    /* SignalConversion generated from: '<S1077>/DsblDiagFailSafe_AD_write' */
    CPDR_ac_B.OutportBufferForDsblDiagFailSafe_AD_writ = false;

    /* SignalConversion generated from: '<S1077>/PostCodeClrDiagDsbl_AD_write' */
    CPDR_ac_B.OutportBufferForPostCodeClrDiagDsbl_AD_w = false;

    /* SignalConversion generated from: '<S1077>/LTPP_MaxOpRPM_AD_write' */
    CPDR_ac_B.OutportBufferForLTPP_MaxOpRPM_AD_write = 0.0F;

    /* SignalConversion generated from: '<S1077>/LTPP2_MaxOpRPM_AD_write' */
    CPDR_ac_B.OutportBufferForLTPP2_MaxOpRPM_AD_write = 0.0F;

    /* SignalConversion generated from: '<S1077>/PropSysActv_AD_write' */
    CPDR_ac_B.OutportBufferForPropSysActv_AD_write = false;

    /* SignalConversion generated from: '<S1077>/BPCM_LIN_BusOff_AD_write' incorporates:
     *  Constant: '<S1078>/Constant'
     */
    CPDR_ac_B.OutportBufferForBPCM_LIN_BusOff_AD_write =
        CPDR_ac_ConstB.Constant_a1;

    /* SignalConversion generated from: '<S1077>/BPCM_LIN_BusOff_FA_AD_write' */
    CPDR_ac_B.OutportBufferForBPCM_LIN_BusOff_FA_AD_wr = false;

    /* SignalConversion generated from: '<S1077>/BPCM_LIN_BusOff_SgnlRcvd_AD_write' */
    CPDR_ac_B.OutportBufferForBPCM_LIN_BusOff_SgnlRcvd = false;

    /* SignalConversion generated from: '<S1077>/BPCM_LOC_BCP_AD_write' incorporates:
     *  Constant: '<S1079>/Constant'
     */
    CPDR_ac_B.OutportBufferForBPCM_LOC_BCP_AD_write = CPDR_ac_ConstB.Constant_pz;

    /* SignalConversion generated from: '<S1077>/BPCM_LOC_BCP_FA_AD_write' */
    CPDR_ac_B.OutportBufferForBPCM_LOC_BCP_FA_AD_write = false;

    /* SignalConversion generated from: '<S1077>/BPCM_LOC_BCP_SgnlRcvd_AD_write' */
    CPDR_ac_B.OutportBufferForBPCM_LOC_BCP_SgnlRcvd_AD = false;

    /* SignalConversion generated from: '<S1077>/LTAP_MaxOpRPM_AD_write' */
    CPDR_ac_B.OutportBufferForLTAP_MaxOpRPM_AD_write = 0.0F;

    /* SignalConversion generated from: '<S1077>/HTAP_MaxOpRPM_AD_write' */
    CPDR_ac_B.OutportBufferForHTAP_MaxOpRPM_AD_write = 0.0F;

    /* SignalConversion generated from: '<S1077>/TransAuxPmp_Cmd_AD_write' */
    CPDR_ac_B.OutportBufferForTransAuxPmp_Cmd_AD_write = 0.0F;

    /* SignalConversion generated from: '<S1077>/AuxPumpSpdAct_AD_write' */
    CPDR_ac_B.OutportBufferForAuxPumpSpdAct_AD_write = 0.0F;

    /* SignalConversion generated from: '<S1077>/VeCPDR_e_FaultSts_AuxTransFldPmpPerf' incorporates:
     *  Constant: '<S1080>/Constant'
     */
    CPDR_ac_B.OutportBufferForVeCPDR_e_FaultSts_AuxTra = CPDR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S1077>/VeCPDR_e_FaultSts_BattCoolPmpOveSpd' incorporates:
     *  Constant: '<S1081>/Constant'
     */
    CPDR_ac_B.OutportBufferForVeCPDR_e_FaultSts_BattCo =
        CPDR_ac_ConstB.Constant_o;

    /* SignalConversion generated from: '<S1077>/VeCPDR_e_FaultSts_BattCoolPmpPerf' incorporates:
     *  Constant: '<S1082>/Constant'
     */
    CPDR_ac_B.OutportBufferForVeCPDR_e_FaultSts_Batt_o =
        CPDR_ac_ConstB.Constant_h;

    /* SignalConversion generated from: '<S1077>/VeCPDR_e_FaultSts_PwrtrnOilPmp1OvrSpd' incorporates:
     *  Constant: '<S1083>/Constant'
     */
    CPDR_ac_B.OutportBufferForVeCPDR_e_FaultSts_Pwrtrn =
        CPDR_ac_ConstB.Constant_e;

    /* SignalConversion generated from: '<S1077>/VeCPDR_e_FaultSts_PwrtrnOilPmp1Perf' incorporates:
     *  Constant: '<S1084>/Constant'
     */
    CPDR_ac_B.OutportBufferForVeCPDR_e_FaultSts_Pwrt_c =
        CPDR_ac_ConstB.Constant_p;

    /* SignalConversion generated from: '<S1077>/VeCPDR_e_FaultSts_PwrtrnOilPmp2OvrSpd' incorporates:
     *  Constant: '<S1085>/Constant'
     */
    CPDR_ac_B.OutportBufferForVeCPDR_e_FaultSts_Pwrt_e =
        CPDR_ac_ConstB.Constant_a;

    /* SignalConversion generated from: '<S1077>/VeCPDR_e_FaultSts_PwrtrnOilPmp2Perf' incorporates:
     *  Constant: '<S1086>/Constant'
     */
    CPDR_ac_B.OutportBufferForVeCPDR_e_FaultSts_Pwrt_k =
        CPDR_ac_ConstB.Constant_ae;

    /* SignalConversion generated from: '<S1077>/VeCPDR_e_FaultSts_CoolPmpACtrlCktPerf' incorporates:
     *  Constant: '<S1087>/Constant'
     */
    CPDR_ac_B.OutportBufferForVeCPDR_e_FaultSts_CoolPm =
        CPDR_ac_ConstB.Constant_hr;

    /* SignalConversion generated from: '<S1077>/VeCPDR_e_FaultSts_MtrElect_CooPumBOvrSpd' incorporates:
     *  Constant: '<S1088>/Constant'
     */
    CPDR_ac_B.OutportBufferForVeCPDR_e_FaultSts_MtrEle =
        CPDR_ac_ConstB.Constant_d;

    /* SignalConversion generated from: '<S1077>/VeCPDR_e_FaultSts_MtrElect_CoolPumBCtrlPerf' incorporates:
     *  Constant: '<S1089>/Constant'
     */
    CPDR_ac_B.OutportBufferForVeCPDR_e_FaultSts_MtrE_i =
        CPDR_ac_ConstB.Constant_pq;

    /* SignalConversion generated from: '<S1077>/VeCPDR_e_FaultSts_MtrElect_CoolPumAOvrSpd' incorporates:
     *  Constant: '<S1090>/Constant'
     */
    CPDR_ac_B.OutportBufferForVeCPDR_e_FaultSts_MtrE_c =
        CPDR_ac_ConstB.Constant_n;

    /* SignalConversion generated from: '<S1077>/VeCPDR_e_FaultSts_PwrElecPmpPerf' incorporates:
     *  Constant: '<S1091>/Constant'
     */
    CPDR_ac_B.OutportBufferForVeCPDR_e_FaultSts_PwrEle =
        CPDR_ac_ConstB.Constant_ed;

    /* SignalConversion generated from: '<S1077>/VeCPDR_e_FaultSts_Aux_TF_Pmp_CM_Fdbck_SigRan' incorporates:
     *  Constant: '<S1092>/Constant'
     */
    CPDR_ac_B.OutportBufferForVeCPDR_e_FaultSts_Aux_TF =
        CPDR_ac_ConstB.Constant_g;

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeCPDR_e_FaultSts_AuxTransFldPmpPerf' incorporates:
     *  SignalConversion generated from: '<S1077>/VeCPDR_e_FaultSts_AuxTransFldPmpPerf'
     *  SignalConversion generated from: '<S4>/R_VeCPDR_e_FaultSts_AuxTransFldPmpPerf'
     */
    (void)Rte_Write_VeCPDR_e_FaultSts_AuxTransFldPmpPerf_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_e_FaultSts_AuxTra);

    /* Outport: '<Root>/VeCPDR_e_FaultSts_BattCoolPmpOveSpd' incorporates:
     *  SignalConversion generated from: '<S1077>/VeCPDR_e_FaultSts_BattCoolPmpOveSpd'
     *  SignalConversion generated from: '<S4>/R_VeCPDR_e_FaultSts_BattCoolPmpOveSpd'
     */
    (void)Rte_Write_VeCPDR_e_FaultSts_BattCoolPmpOveSpd_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_e_FaultSts_BattCo);

    /* Outport: '<Root>/VeCPDR_e_FaultSts_BattCoolPmpPerf' incorporates:
     *  SignalConversion generated from: '<S1077>/VeCPDR_e_FaultSts_BattCoolPmpPerf'
     *  SignalConversion generated from: '<S4>/R_VeCPDR_e_FaultSts_BattCoolPmpPerf'
     */
    (void)Rte_Write_VeCPDR_e_FaultSts_BattCoolPmpPerf_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_e_FaultSts_Batt_o);

    /* Outport: '<Root>/VeCPDR_e_FaultSts_CoolPmpACtrlCktPerf' incorporates:
     *  SignalConversion generated from: '<S1077>/VeCPDR_e_FaultSts_CoolPmpACtrlCktPerf'
     *  SignalConversion generated from: '<S4>/R_VeCPDR_e_FaultSts_CoolPmpACtrlCktPerf'
     */
    (void)Rte_Write_VeCPDR_e_FaultSts_CoolPmpACtrlCktPerf_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_e_FaultSts_CoolPm);

    /* Outport: '<Root>/VeCPDR_e_FaultSts_MtrElect_CooPumBOvrSpd' incorporates:
     *  SignalConversion generated from: '<S1077>/VeCPDR_e_FaultSts_MtrElect_CooPumBOvrSpd'
     *  SignalConversion generated from: '<S4>/R_VeCPDR_e_FaultSts_MtrElect_CooPumBOvrSpd'
     */
    (void)Rte_Write_VeCPDR_e_FaultSts_MtrElect_CooPumBOvrSpd_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_e_FaultSts_MtrEle);

    /* Outport: '<Root>/VeCPDR_e_FaultSts_MtrElect_CoolPumAOvrSpd' incorporates:
     *  SignalConversion generated from: '<S1077>/VeCPDR_e_FaultSts_MtrElect_CoolPumAOvrSpd'
     *  SignalConversion generated from: '<S4>/R_VeCPDR_e_FaultSts_MtrElect_CoolPumAOvrSpd'
     */
    (void)Rte_Write_VeCPDR_e_FaultSts_MtrElect_CoolPumAOvrSpd_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_e_FaultSts_MtrE_c);

    /* Outport: '<Root>/VeCPDR_e_FaultSts_MtrElect_CoolPumBCtrlPerf' incorporates:
     *  SignalConversion generated from: '<S1077>/VeCPDR_e_FaultSts_MtrElect_CoolPumBCtrlPerf'
     *  SignalConversion generated from: '<S4>/R_VeCPDR_e_FaultSts_MtrElect_CoolPumBCtrlPerf'
     */
    (void)Rte_Write_VeCPDR_e_FaultSts_MtrElect_CoolPumBCtrlPerf_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_e_FaultSts_MtrE_i);

    /* Outport: '<Root>/VeCPDR_e_FaultSts_PwrElecPmpPerf' incorporates:
     *  SignalConversion generated from: '<S1077>/VeCPDR_e_FaultSts_PwrElecPmpPerf'
     *  SignalConversion generated from: '<S4>/R_VeCPDR_e_FaultSts_PwrElecPmpPerf'
     */
    (void)Rte_Write_VeCPDR_e_FaultSts_PwrElecPmpPerf_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_e_FaultSts_PwrEle);

    /* Outport: '<Root>/VeCPDR_e_FaultSts_PwrtrnOilPmp1OvrSpd' incorporates:
     *  SignalConversion generated from: '<S1077>/VeCPDR_e_FaultSts_PwrtrnOilPmp1OvrSpd'
     *  SignalConversion generated from: '<S4>/R_VeCPDR_e_FaultSts_PwrtrnOilPmp1OvrSpd'
     */
    (void)Rte_Write_VeCPDR_e_FaultSts_PwrtrnOilPmp1OvrSpd_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_e_FaultSts_Pwrtrn);

    /* Outport: '<Root>/VeCPDR_e_FaultSts_PwrtrnOilPmp1Perf' incorporates:
     *  SignalConversion generated from: '<S1077>/VeCPDR_e_FaultSts_PwrtrnOilPmp1Perf'
     *  SignalConversion generated from: '<S4>/R_VeCPDR_e_FaultSts_PwrtrnOilPmp1Perf'
     */
    (void)Rte_Write_VeCPDR_e_FaultSts_PwrtrnOilPmp1Perf_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_e_FaultSts_Pwrt_c);

    /* Outport: '<Root>/VeCPDR_e_FaultSts_PwrtrnOilPmp2OvrSpd' incorporates:
     *  SignalConversion generated from: '<S1077>/VeCPDR_e_FaultSts_PwrtrnOilPmp2OvrSpd'
     *  SignalConversion generated from: '<S4>/R_VeCPDR_e_FaultSts_PwrtrnOilPmp2OvrSpd'
     */
    (void)Rte_Write_VeCPDR_e_FaultSts_PwrtrnOilPmp2OvrSpd_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_e_FaultSts_Pwrt_e);

    /* Outport: '<Root>/VeCPDR_e_FaultSts_PwrtrnOilPmp2Perf' incorporates:
     *  SignalConversion generated from: '<S1077>/VeCPDR_e_FaultSts_PwrtrnOilPmp2Perf'
     *  SignalConversion generated from: '<S4>/R_VeCPDR_e_FaultSts_PwrtrnOilPmp2Perf'
     */
    (void)Rte_Write_VeCPDR_e_FaultSts_PwrtrnOilPmp2Perf_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_e_FaultSts_Pwrt_k);

    /* Outport: '<Root>/VeCPDR_b_AuxPumpPerf_FltDtct' incorporates:
     *  SignalConversion generated from: '<S4>/VeCPDR_b_AuxPumpPerf_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeCPDR_b_AuxPumpPerf_FltDtct_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_b_AuxPumpPerf_Flt);

    /* Outport: '<Root>/VeCPDR_b_HTAP_FunPer_ChkEnbl' incorporates:
     *  SignalConversion generated from: '<S4>/VeCPDR_b_HTAP_FunPer_ChkEnbl_Out_Init'
     */
    (void)Rte_Write_VeCPDR_b_HTAP_FunPer_ChkEnbl_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_b_HTAP_FunPer_Chk);

    /* Outport: '<Root>/VeCPDR_b_HTAP_FunPer_FltDtct' incorporates:
     *  SignalConversion generated from: '<S4>/VeCPDR_b_HTAP_FunPer_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeCPDR_b_HTAP_FunPer_FltDtct_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_b_HTAP_FunPer_Flt);

    /* Outport: '<Root>/VeCPDR_b_IUMPR_EOPA_DryRun' incorporates:
     *  SignalConversion generated from: '<S4>/VeCPDR_b_IUMPR_EOPA_DryRun_Out_Init'
     */
    (void)Rte_Write_VeCPDR_b_IUMPR_EOPA_DryRun_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_EOPA_DryR);

    /* Outport: '<Root>/VeCPDR_b_IUMPR_EOPA_FunPerf' incorporates:
     *  SignalConversion generated from: '<S4>/VeCPDR_b_IUMPR_EOPA_FunPerf_Out_Init'
     */
    (void)Rte_Write_VeCPDR_b_IUMPR_EOPA_FunPerf_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_EOPA_FunP);

    /* Outport: '<Root>/VeCPDR_b_IUMPR_EOPA_MinCmdThrshld_Met' incorporates:
     *  SignalConversion generated from: '<S4>/VeCPDR_b_IUMPR_EOPA_MinCmdThrshld_Met_Out_Init'
     */
    (void)Rte_Write_VeCPDR_b_IUMPR_EOPA_MinCmdThrshld_Met_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_EOPA_MinC);

    /* Outport: '<Root>/VeCPDR_b_IUMPR_EOPB_DryRun' incorporates:
     *  SignalConversion generated from: '<S4>/VeCPDR_b_IUMPR_EOPB_DryRun_Out_Init'
     */
    (void)Rte_Write_VeCPDR_b_IUMPR_EOPB_DryRun_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_EOPB_DryR);

    /* Outport: '<Root>/VeCPDR_b_IUMPR_EOPB_FunPerf' incorporates:
     *  SignalConversion generated from: '<S4>/VeCPDR_b_IUMPR_EOPB_FunPerf_Out_Init'
     */
    (void)Rte_Write_VeCPDR_b_IUMPR_EOPB_FunPerf_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_EOPB_FunP);

    /* Outport: '<Root>/VeCPDR_b_IUMPR_EOPB_MinCmdThrshld_Met' incorporates:
     *  SignalConversion generated from: '<S4>/VeCPDR_b_IUMPR_EOPB_MinCmdThrshld_Met_Out_Init'
     */
    (void)Rte_Write_VeCPDR_b_IUMPR_EOPB_MinCmdThrshld_Met_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_EOPB_MinC);

    /* Outport: '<Root>/VeCPDR_b_IUMPR_HTAP_FunPerf' incorporates:
     *  SignalConversion generated from: '<S4>/VeCPDR_b_IUMPR_HTAP_FunPerf_Out_Init'
     */
    (void)Rte_Write_VeCPDR_b_IUMPR_HTAP_FunPerf_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_HTAP_FunP);

    /* Outport: '<Root>/VeCPDR_b_IUMPR_HTAP_MinCmdThrshld_Met' incorporates:
     *  SignalConversion generated from: '<S4>/VeCPDR_b_IUMPR_HTAP_MinCmdThrshld_Met_Out_Init'
     */
    (void)Rte_Write_VeCPDR_b_IUMPR_HTAP_MinCmdThrshld_Met_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_HTAP_MinC);

    /* Outport: '<Root>/VeCPDR_b_IUMPR_LTAP_DryRun' incorporates:
     *  SignalConversion generated from: '<S4>/VeCPDR_b_IUMPR_LTAP_DryRun_Out_Init'
     */
    (void)Rte_Write_VeCPDR_b_IUMPR_LTAP_DryRun_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_LTAP_DryR);

    /* Outport: '<Root>/VeCPDR_b_IUMPR_LTAP_FunPerf' incorporates:
     *  SignalConversion generated from: '<S4>/VeCPDR_b_IUMPR_LTAP_FunPerf_Out_Init'
     */
    (void)Rte_Write_VeCPDR_b_IUMPR_LTAP_FunPerf_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_LTAP_FunP);

    /* Outport: '<Root>/VeCPDR_b_IUMPR_LTAP_MinCmdThrshld_Met' incorporates:
     *  SignalConversion generated from: '<S4>/VeCPDR_b_IUMPR_LTAP_MinCmdThrshld_Met_Out_Init'
     */
    (void)Rte_Write_VeCPDR_b_IUMPR_LTAP_MinCmdThrshld_Met_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_LTAP_MinC);

    /* Outport: '<Root>/VeCPDR_b_IUMPR_LTPP2_DryRun' incorporates:
     *  SignalConversion generated from: '<S4>/VeCPDR_b_IUMPR_LTPP2_DryRun_Out_Init'
     */
    (void)Rte_Write_VeCPDR_b_IUMPR_LTPP2_DryRun_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_LTPP2_Dry);

    /* Outport: '<Root>/VeCPDR_b_IUMPR_LTPP_DryRun' incorporates:
     *  SignalConversion generated from: '<S4>/VeCPDR_b_IUMPR_LTPP_DryRun_Out_Init'
     */
    (void)Rte_Write_VeCPDR_b_IUMPR_LTPP_DryRun_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_LTPP_DryR);

    /* Outport: '<Root>/VeCPDR_b_IUMPR_PECP2_FunPerf' incorporates:
     *  SignalConversion generated from: '<S4>/VeCPDR_b_IUMPR_PECP2_FunPerf_Out_Init'
     */
    (void)Rte_Write_VeCPDR_b_IUMPR_PECP2_FunPerf_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_PECP2_Fun);

    /* Outport: '<Root>/VeCPDR_b_IUMPR_PECP2_MinCmdThrshld_Met' incorporates:
     *  SignalConversion generated from: '<S4>/VeCPDR_b_IUMPR_PECP2_MinCmdThrshld_Met_Out_Init'
     */
    (void)Rte_Write_VeCPDR_b_IUMPR_PECP2_MinCmdThrshld_Met_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_PECP2_Min);

    /* Outport: '<Root>/VeCPDR_b_IUMPR_PECP_FunPerf' incorporates:
     *  SignalConversion generated from: '<S4>/VeCPDR_b_IUMPR_PECP_FunPerf_Out_Init'
     */
    (void)Rte_Write_VeCPDR_b_IUMPR_PECP_FunPerf_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_PECP_FunP);

    /* Outport: '<Root>/VeCPDR_b_IUMPR_PECP_MinCmdThrshld_Met' incorporates:
     *  SignalConversion generated from: '<S4>/VeCPDR_b_IUMPR_PECP_MinCmdThrshld_Met_Out_Init'
     */
    (void)Rte_Write_VeCPDR_b_IUMPR_PECP_MinCmdThrshld_Met_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_PECP_MinC);

    /* Outport: '<Root>/VeCPDR_b_IUMPR_PWM_EOP_FunPerf' incorporates:
     *  SignalConversion generated from: '<S4>/VeCPDR_b_IUMPR_PWM_EOP_FunPerf_Out_Init'
     */
    (void)Rte_Write_VeCPDR_b_IUMPR_PWM_EOP_FunPerf_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_PWM_EOP_F);

    /* Outport: '<Root>/VeCPDR_b_IUMPR_PWM_EOP_MinCmdThrshld_Met' incorporates:
     *  SignalConversion generated from: '<S4>/VeCPDR_b_IUMPR_PWM_EOP_MinCmdThrshld_Met_Out_Init'
     */
    (void)Rte_Write_VeCPDR_b_IUMPR_PWM_EOP_MinCmdThrshld_Met_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_PWM_EOP_M);

    /* Outport: '<Root>/VeCPDR_b_IUMPR_TAP_FunPerf' incorporates:
     *  SignalConversion generated from: '<S4>/VeCPDR_b_IUMPR_TAP_FunPerf_Out_Init'
     */
    (void)Rte_Write_VeCPDR_b_IUMPR_TAP_FunPerf_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_TAP_FunPe);

    /* Outport: '<Root>/VeCPDR_b_IUMPR_TAP_MinCmdThrshld_Met' incorporates:
     *  SignalConversion generated from: '<S4>/VeCPDR_b_IUMPR_TAP_MinCmdThrshld_Met_Out_Init'
     */
    (void)Rte_Write_VeCPDR_b_IUMPR_TAP_MinCmdThrshld_Met_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_b_IUMPR_TAP_MinCm);

    /* Outport: '<Root>/VeCPDR_b_LTAP_FunPer_ChkEnbl' incorporates:
     *  SignalConversion generated from: '<S4>/VeCPDR_b_LTAP_FunPer_ChkEnbl_Out_Init'
     */
    (void)Rte_Write_VeCPDR_b_LTAP_FunPer_ChkEnbl_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_b_LTAP_FunPer_Chk);

    /* Outport: '<Root>/VeCPDR_b_LTAP_FunPer_FltDtct' incorporates:
     *  SignalConversion generated from: '<S4>/VeCPDR_b_LTAP_FunPer_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeCPDR_b_LTAP_FunPer_FltDtct_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_b_LTAP_FunPer_Flt);

    /* Outport: '<Root>/VeCPDR_b_LTCL_DryRun_FltDtct' incorporates:
     *  SignalConversion generated from: '<S4>/VeCPDR_b_LTCL_DryRun_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeCPDR_b_LTCL_DryRun_FltDtct_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_b_LTCL_DryRun_Flt);

    /* Outport: '<Root>/VeCPDR_b_LTCL_FunPer_FltDtct' incorporates:
     *  SignalConversion generated from: '<S4>/VeCPDR_b_LTCL_FunPer_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeCPDR_b_LTCL_FunPer_FltDtct_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_b_LTCL_FunPer_Flt);

    /* Outport: '<Root>/VeCPDR_b_LTPP2_FunPer_ChkEnbl' incorporates:
     *  SignalConversion generated from: '<S4>/VeCPDR_b_LTPP2_FunPer_ChkEnbl_Out_Init'
     */
    (void)Rte_Write_VeCPDR_b_LTPP2_FunPer_ChkEnbl_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_b_LTPP2_FunPer_Ch);

    /* Outport: '<Root>/VeCPDR_b_LTPP2_FunPer_FltDtct' incorporates:
     *  SignalConversion generated from: '<S4>/VeCPDR_b_LTPP2_FunPer_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeCPDR_b_LTPP2_FunPer_FltDtct_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_b_LTPP2_FunPer_Fl);

    /* Outport: '<Root>/VeCPDR_b_LTPP_FunPer_ChkEnbl' incorporates:
     *  SignalConversion generated from: '<S4>/VeCPDR_b_LTPP_FunPer_ChkEnbl_Out_Init'
     */
    (void)Rte_Write_VeCPDR_b_LTPP_FunPer_ChkEnbl_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_b_LTPP_FunPer_Chk);

    /* Outport: '<Root>/VeCPDR_b_LTPP_FunPer_FltDtct' incorporates:
     *  SignalConversion generated from: '<S4>/VeCPDR_b_LTPP_FunPer_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeCPDR_b_LTPP_FunPer_FltDtct_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_b_LTPP_FunPer_Flt);

    /* Outport: '<Root>/VeCPDR_e_FaultSts_Aux_TF_Pmp_CM_Fdbck_SigRan' incorporates:
     *  SignalConversion generated from: '<S1077>/VeCPDR_e_FaultSts_Aux_TF_Pmp_CM_Fdbck_SigRan'
     *  SignalConversion generated from: '<S4>/VeCPDR_e_FaultSts_Aux_TF_Pmp_CM_Fdbck_SigRan'
     */
    (void)Rte_Write_VeCPDR_e_FaultSts_Aux_TF_Pmp_CM_Fdbck_SigRan_Value
        (CPDR_ac_B.OutportBufferForVeCPDR_e_FaultSts_Aux_TF);

    /* Merge: '<Root>/AuxPumpSpdAct_AD_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/AuxPumpSpdAct_AD_write'
     * */
    Rte_IrvWrite_CPDR_PwrOn_AuxPumpSpdAct_AD_write_IRV
        (CPDR_ac_B.OutportBufferForAuxPumpSpdAct_AD_write);

    /* Merge: '<Root>/HB_SysVolt_AD_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/BF1_SysVolt_AD_write'
     * */
    Rte_IrvWrite_CPDR_PwrOn_BF1_SysVolt_AD_IRV
        (CPDR_ac_B.OutportBufferForBF1_SysVolt_AD_write);

    /* Merge: '<Root>/BPCM_LIN_BusOff_AD_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1077>/BPCM_LIN_BusOff_AD_write'
     *  SignalConversion generated from: '<S4>/BPCM_LIN_BusOff_AD_write'
     * */
    Rte_IrvWrite_CPDR_PwrOn_BPCM_LIN_BusOff_AD_write_IRV
        (CPDR_ac_B.OutportBufferForBPCM_LIN_BusOff_AD_write);

    /* Merge: '<Root>/BPCM_LIN_BusOff_FA_AD_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/BPCM_LIN_BusOff_FA_AD_write'
     * */
    Rte_IrvWrite_CPDR_PwrOn_BPCM_LIN_BusOff_FA_AD_write_IRV
        (CPDR_ac_B.OutportBufferForBPCM_LIN_BusOff_FA_AD_wr);

    /* Merge: '<Root>/BPCM_LIN_BusOff_SgnlRcvd_AD_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/BPCM_LIN_BusOff_SgnlRcvd_AD_write'
     * */
    Rte_IrvWrite_CPDR_PwrOn_BPCM_LIN_BusOff_SgnlRcvd_AD_write_IRV
        (CPDR_ac_B.OutportBufferForBPCM_LIN_BusOff_SgnlRcvd);

    /* Merge: '<Root>/BPCM_LOC_BCP_AD_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1077>/BPCM_LOC_BCP_AD_write'
     *  SignalConversion generated from: '<S4>/BPCM_LOC_BCP_AD_write'
     * */
    Rte_IrvWrite_CPDR_PwrOn_BPCM_LOC_BCP_AD_write_IRV
        (CPDR_ac_B.OutportBufferForBPCM_LOC_BCP_AD_write);

    /* Merge: '<Root>/BPCM_LOC_BCP_FA_AD_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/BPCM_LOC_BCP_FA_AD_write'
     * */
    Rte_IrvWrite_CPDR_PwrOn_BPCM_LOC_BCP_FA_AD_write_IRV
        (CPDR_ac_B.OutportBufferForBPCM_LOC_BCP_FA_AD_write);

    /* Merge: '<Root>/BPCM_LOC_BCP_SgnlRcvd_AD_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/BPCM_LOC_BCP_SgnlRcvd_AD_write'
     * */
    Rte_IrvWrite_CPDR_PwrOn_BPCM_LOC_BCP_SgnlRcvd_AD_write_IRV
        (CPDR_ac_B.OutportBufferForBPCM_LOC_BCP_SgnlRcvd_AD);

    /* Merge: '<Root>/DsblDiagFailSafe_AD_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/DsblDiagFailSafe_AD_write'
     * */
    Rte_IrvWrite_CPDR_PwrOn_DsblDiagFailSafe_AD_write_IRV
        (CPDR_ac_B.OutportBufferForDsblDiagFailSafe_AD_writ);

    /* Merge: '<Root>/HTAP_MaxOpRPM_AD_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/HTAP_MaxOpRPM_AD_write'
     * */
    Rte_IrvWrite_CPDR_PwrOn_HTAP_MaxOpRPM_AD_write_IRV
        (CPDR_ac_B.OutportBufferForHTAP_MaxOpRPM_AD_write);

    /* Merge: '<Root>/LTAP_MaxOpRPM_AD_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/LTAP_MaxOpRPM_AD_write'
     * */
    Rte_IrvWrite_CPDR_PwrOn_LTAP_MaxOpRPM_AD_write_IRV
        (CPDR_ac_B.OutportBufferForLTAP_MaxOpRPM_AD_write);

    /* Merge: '<Root>/LTPP2_MaxOpRPM_AD_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/LTPP2_MaxOpRPM_AD_write'
     * */
    Rte_IrvWrite_CPDR_PwrOn_LTPP2_MaxOpRPM_AD_write_IRV
        (CPDR_ac_B.OutportBufferForLTPP2_MaxOpRPM_AD_write);

    /* Merge: '<Root>/LTPP_MaxOpRPM_AD_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/LTPP_MaxOpRPM_AD_write'
     * */
    Rte_IrvWrite_CPDR_PwrOn_LTPP_MaxOpRPM_AD_write_IRV
        (CPDR_ac_B.OutportBufferForLTPP_MaxOpRPM_AD_write);

    /* Merge: '<Root>/PostCodeClrDiagDsbl_AD_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/PostCodeClrDiagDsbl_AD_write'
     * */
    Rte_IrvWrite_CPDR_PwrOn_PostCodeClrDiagDsbl_AD_write_IRV
        (CPDR_ac_B.OutportBufferForPostCodeClrDiagDsbl_AD_w);

    /* Merge: '<Root>/PropSysActv_AD_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/PropSysActv_AD_write'
     * */
    Rte_IrvWrite_CPDR_PwrOn_PropSysActv_AD_write_IRV
        (CPDR_ac_B.OutportBufferForPropSysActv_AD_write);

    /* Merge: '<Root>/TransAuxPmp_Cmd_AD_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/TransAuxPmp_Cmd_AD_write'
     * */
    Rte_IrvWrite_CPDR_PwrOn_TransAuxPmp_Cmd_AD_write_IRV
        (CPDR_ac_B.OutportBufferForTransAuxPmp_Cmd_AD_write);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, CPDR_CODE) CPDR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/CPDR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S1077>/BPCM_LIN_BusOff_AD_write' incorporates:
     *  Constant: '<S1078>/Constant'
     */
    CPDR_ac_B.OutportBufferForBPCM_LIN_BusOff_AD_write =
        CPDR_ac_ConstB.Constant_a1;

    /* SystemInitialize for SignalConversion generated from: '<S1077>/BPCM_LOC_BCP_AD_write' incorporates:
     *  Constant: '<S1079>/Constant'
     */
    CPDR_ac_B.OutportBufferForBPCM_LOC_BCP_AD_write = CPDR_ac_ConstB.Constant_pz;

    /* SystemInitialize for SignalConversion generated from: '<S1077>/VeCPDR_e_FaultSts_AuxTransFldPmpPerf' incorporates:
     *  Constant: '<S1080>/Constant'
     */
    CPDR_ac_B.OutportBufferForVeCPDR_e_FaultSts_AuxTra = CPDR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S1077>/VeCPDR_e_FaultSts_BattCoolPmpOveSpd' incorporates:
     *  Constant: '<S1081>/Constant'
     */
    CPDR_ac_B.OutportBufferForVeCPDR_e_FaultSts_BattCo =
        CPDR_ac_ConstB.Constant_o;

    /* SystemInitialize for SignalConversion generated from: '<S1077>/VeCPDR_e_FaultSts_BattCoolPmpPerf' incorporates:
     *  Constant: '<S1082>/Constant'
     */
    CPDR_ac_B.OutportBufferForVeCPDR_e_FaultSts_Batt_o =
        CPDR_ac_ConstB.Constant_h;

    /* SystemInitialize for SignalConversion generated from: '<S1077>/VeCPDR_e_FaultSts_PwrtrnOilPmp1OvrSpd' incorporates:
     *  Constant: '<S1083>/Constant'
     */
    CPDR_ac_B.OutportBufferForVeCPDR_e_FaultSts_Pwrtrn =
        CPDR_ac_ConstB.Constant_e;

    /* SystemInitialize for SignalConversion generated from: '<S1077>/VeCPDR_e_FaultSts_PwrtrnOilPmp1Perf' incorporates:
     *  Constant: '<S1084>/Constant'
     */
    CPDR_ac_B.OutportBufferForVeCPDR_e_FaultSts_Pwrt_c =
        CPDR_ac_ConstB.Constant_p;

    /* SystemInitialize for SignalConversion generated from: '<S1077>/VeCPDR_e_FaultSts_PwrtrnOilPmp2OvrSpd' incorporates:
     *  Constant: '<S1085>/Constant'
     */
    CPDR_ac_B.OutportBufferForVeCPDR_e_FaultSts_Pwrt_e =
        CPDR_ac_ConstB.Constant_a;

    /* SystemInitialize for SignalConversion generated from: '<S1077>/VeCPDR_e_FaultSts_PwrtrnOilPmp2Perf' incorporates:
     *  Constant: '<S1086>/Constant'
     */
    CPDR_ac_B.OutportBufferForVeCPDR_e_FaultSts_Pwrt_k =
        CPDR_ac_ConstB.Constant_ae;

    /* SystemInitialize for SignalConversion generated from: '<S1077>/VeCPDR_e_FaultSts_CoolPmpACtrlCktPerf' incorporates:
     *  Constant: '<S1087>/Constant'
     */
    CPDR_ac_B.OutportBufferForVeCPDR_e_FaultSts_CoolPm =
        CPDR_ac_ConstB.Constant_hr;

    /* SystemInitialize for SignalConversion generated from: '<S1077>/VeCPDR_e_FaultSts_MtrElect_CooPumBOvrSpd' incorporates:
     *  Constant: '<S1088>/Constant'
     */
    CPDR_ac_B.OutportBufferForVeCPDR_e_FaultSts_MtrEle =
        CPDR_ac_ConstB.Constant_d;

    /* SystemInitialize for SignalConversion generated from: '<S1077>/VeCPDR_e_FaultSts_MtrElect_CoolPumBCtrlPerf' incorporates:
     *  Constant: '<S1089>/Constant'
     */
    CPDR_ac_B.OutportBufferForVeCPDR_e_FaultSts_MtrE_i =
        CPDR_ac_ConstB.Constant_pq;

    /* SystemInitialize for SignalConversion generated from: '<S1077>/VeCPDR_e_FaultSts_MtrElect_CoolPumAOvrSpd' incorporates:
     *  Constant: '<S1090>/Constant'
     */
    CPDR_ac_B.OutportBufferForVeCPDR_e_FaultSts_MtrE_c =
        CPDR_ac_ConstB.Constant_n;

    /* SystemInitialize for SignalConversion generated from: '<S1077>/VeCPDR_e_FaultSts_PwrElecPmpPerf' incorporates:
     *  Constant: '<S1091>/Constant'
     */
    CPDR_ac_B.OutportBufferForVeCPDR_e_FaultSts_PwrEle =
        CPDR_ac_ConstB.Constant_ed;

    /* SystemInitialize for SignalConversion generated from: '<S1077>/VeCPDR_e_FaultSts_Aux_TF_Pmp_CM_Fdbck_SigRan' incorporates:
     *  Constant: '<S1092>/Constant'
     */
    CPDR_ac_B.OutportBufferForVeCPDR_e_FaultSts_Aux_TF =
        CPDR_ac_ConstB.Constant_g;

    /* End of SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/CPDR_MedTED'
     */
#if Rte_SysCon_Variant_CPDR_1 || Rte_SysCon_Variant_CPDR_2

    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
#if Rte_SysCon_Variant_CPDR_2
#endif

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
#endif

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/CPDR_MedTEH'
     */
    /* SystemInitialize for Atomic SubSystem: '<S171>/BCP_Diagnostics' */
#if Rte_SysCon_Variant_CPDR_3
#endif

    /* End of SystemInitialize for SubSystem: '<S171>/BCP_Diagnostics' */

    /* SystemInitialize for Atomic SubSystem: '<S172>/EOPA_Diagnostics' */
#if Rte_SysCon_Variant_CPDR_7
#endif

    /* End of SystemInitialize for SubSystem: '<S172>/EOPA_Diagnostics' */

    /* SystemInitialize for Atomic SubSystem: '<S173>/EOPB_Diagnostics' */
#if Rte_SysCon_Variant_CPDR_8
#endif

    /* End of SystemInitialize for SubSystem: '<S173>/EOPB_Diagnostics' */

    /* SystemInitialize for Atomic SubSystem: '<S174>/AHP_Diagnostics' */
#if Rte_SysCon_Variant_CPDR_4
#endif

    /* End of SystemInitialize for SubSystem: '<S174>/AHP_Diagnostics' */

    /* SystemInitialize for Atomic SubSystem: '<S175>/LTPP2_Diagnostics' */
#if Rte_SysCon_Variant_CPDR_6
#endif

    /* End of SystemInitialize for SubSystem: '<S175>/LTPP2_Diagnostics' */

    /* SystemInitialize for Atomic SubSystem: '<S175>/LTPP_Diagnostics' */
#if Rte_SysCon_Variant_CPDR_5
#endif

    /* End of SystemInitialize for SubSystem: '<S175>/LTPP_Diagnostics' */

    /* SystemInitialize for Atomic SubSystem: '<S2>/PWM_EOP_Diagnostics' */
#if Rte_SysCon_Variant_CPDR_11
#endif

    /* End of SystemInitialize for SubSystem: '<S2>/PWM_EOP_Diagnostics' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* SystemInitialize for Outport: '<Root>/VeCPDR_e_FaultSts_AuxTransFldPmpPerf' incorporates:
     *  Merge: '<Root>/M_VeCPDR_e_FaultSts_AuxTransFldPmpPerf'
     */
    (void)Rte_Write_VeCPDR_e_FaultSts_AuxTransFldPmpPerf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeCPDR_e_FaultSts_BattCoolPmpOveSpd' incorporates:
     *  Merge: '<Root>/M_VeCPDR_e_FaultSts_BattCoolPmpOveSpd'
     */
    (void)Rte_Write_VeCPDR_e_FaultSts_BattCoolPmpOveSpd_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeCPDR_e_FaultSts_BattCoolPmpPerf' incorporates:
     *  Merge: '<Root>/M_VeCPDR_e_FaultSts_BattCoolPmpPerf'
     */
    (void)Rte_Write_VeCPDR_e_FaultSts_BattCoolPmpPerf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeCPDR_e_FaultSts_PwrtrnOilPmp1OvrSpd' incorporates:
     *  Merge: '<Root>/M_VeCPDR_e_FaultSts_PwrtrnOilPmp1OvrSpd'
     */
    (void)Rte_Write_VeCPDR_e_FaultSts_PwrtrnOilPmp1OvrSpd_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeCPDR_e_FaultSts_PwrtrnOilPmp1Perf' incorporates:
     *  Merge: '<Root>/M_VeCPDR_e_FaultSts_PwrtrnOilPmp1Perf'
     */
    (void)Rte_Write_VeCPDR_e_FaultSts_PwrtrnOilPmp1Perf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeCPDR_e_FaultSts_PwrtrnOilPmp2OvrSpd' incorporates:
     *  Merge: '<Root>/M_VeCPDR_e_FaultSts_PwrtrnOilPmp2OvrSpd'
     */
    (void)Rte_Write_VeCPDR_e_FaultSts_PwrtrnOilPmp2OvrSpd_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeCPDR_e_FaultSts_PwrtrnOilPmp2Perf' incorporates:
     *  Merge: '<Root>/M_VeCPDR_e_FaultSts_PwrtrnOilPmp2Perf'
     */
    (void)Rte_Write_VeCPDR_e_FaultSts_PwrtrnOilPmp2Perf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeCPDR_e_FaultSts_CoolPmpACtrlCktPerf' incorporates:
     *  Merge: '<Root>/M_VeCPDR_e_FaultSts_CoolPmpACtrlCktPerf'
     */
    (void)Rte_Write_VeCPDR_e_FaultSts_CoolPmpACtrlCktPerf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeCPDR_e_FaultSts_MtrElect_CooPumBOvrSpd' incorporates:
     *  Merge: '<Root>/M_VeCPDR_e_FaultSts_MtrElect_CooPumBOvrSpd'
     */
    (void)Rte_Write_VeCPDR_e_FaultSts_MtrElect_CooPumBOvrSpd_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeCPDR_e_FaultSts_MtrElect_CoolPumBCtrlPerf' incorporates:
     *  Merge: '<Root>/M_VeCPDR_e_FaultSts_MtrElect_CoolPumBCtrlPerf'
     */
    (void)Rte_Write_VeCPDR_e_FaultSts_MtrElect_CoolPumBCtrlPerf_Value
        (CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeCPDR_e_FaultSts_MtrElect_CoolPumAOvrSpd' incorporates:
     *  Merge: '<Root>/M_VeCPDR_e_FaultSts_MtrElect_CoolPumAOvrSpd'
     */
    (void)Rte_Write_VeCPDR_e_FaultSts_MtrElect_CoolPumAOvrSpd_Value
        (CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeCPDR_e_FaultSts_PwrElecPmpPerf' incorporates:
     *  Merge: '<Root>/M_VeCPDR_e_FaultSts_PwrElecPmpPerf'
     */
    (void)Rte_Write_VeCPDR_e_FaultSts_PwrElecPmpPerf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeCPDR_e_FaultSts_Aux_TF_Pmp_CM_Fdbck_SigRan' incorporates:
     *  Merge: '<Root>/M_VeCPDR_e_FaultSts_PwrElecPmpPerf1'
     */
    (void)Rte_Write_VeCPDR_e_FaultSts_Aux_TF_Pmp_CM_Fdbck_SigRan_Value
        (CeDFIB_e_Init);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
