/*
 * File: IMOR_ac.c
 *
 * Code generated for Simulink model 'IMOR_ac'.
 *
 * Model version                  : 9.171
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 14:15:17 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "IMOR_ac.h"



uint8 SendCANR_IMMO_CODE_REQUEST_IMOR_ac_Test_1;

/* Named constants for Chart: '<S199>/Immobilizer_HCP_BCM' */
#if Rte_SysCon_Variant_IMOR_1
#define IMOR__IN_IMOR_CodeRec_RecAck86SentAftr99 ((uint8)10U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR__IN_IMOR_CodeRec_RecAck87SentAftr99 ((uint8)12U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeRec        ((uint8)1U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeRec_CopyF1G1 ((uint8)1U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeRec_Crank  ((uint8)2U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeRec_F1G1Gen ((uint8)3U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeRec_InvkMKA ((uint8)4U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeRec_KeyCycInit ((uint8)5U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeRec_NoVal  ((uint8)6U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeRec_OVCopyF1G2 ((uint8)7U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeRec_RG     ((uint8)8U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeRec_RecAck86Sent ((uint8)9U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeRec_RecAck87Sent ((uint8)11U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeRec_RecCmpRsp2Rcvd ((uint8)13U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeRec_RecCntInc ((uint8)14U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeRec_RecCpyRspRcvd ((uint8)15U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeRec_RecEOT ((uint8)16U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeRec_RecMKeyStr ((uint8)17U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeRec_RecMKeyStrVrfy ((uint8)18U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeRec_RecNACK ((uint8)19U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeRec_RecPrplsnDisbl ((uint8)20U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeRec_RecPrplsnEnbl ((uint8)21U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeRec_RecRspRcvd ((uint8)22U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeRec_RecRspRcvd10 ((uint8)23U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeRec_RecRspRcvd99 ((uint8)24U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeRec_RecRspRcvdAA ((uint8)25U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeRec_Rsp99G1G2Comp ((uint8)26U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeRec_Rsp99G1G2Comp2 ((uint8)27U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeRec_SndRecReq ((uint8)28U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeVrfy       ((uint8)2U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeVrfy_ACKSent ((uint8)1U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeVrfy_CopyF1G1 ((uint8)2U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeVrfy_F1G1Gen ((uint8)3U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeVrfy_Init  ((uint8)4U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeVrfy_InvkMKA ((uint8)5U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeVrfy_KCInit ((uint8)6U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeVrfy_NACKSent ((uint8)7U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeVrfy_NegUC ((uint8)8U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeVrfy_OVCopyF1G2 ((uint8)9U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeVrfy_RG    ((uint8)10U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeVrfy_RG1   ((uint8)11U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeVrfy_RstStateTmr ((uint8)12U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeVrfy_VrfyCntInc ((uint8)13U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeVrfy_VrfyPrplsnDisbl ((uint8)14U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeVrfy_VrfyPrplsnEnbl ((uint8)15U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_CodeVrfy_VrfyRspRcvd ((uint8)16U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_ImmobEnbld     ((uint8)3U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_ImmobSysCondsMet ((uint8)4U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_Init           ((uint8)5U)
#endif

#if Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_NO_ACTIVE_CHILD     ((uint8)0U)
#endif

/* Named constants for Chart: '<S193>/ECM_BCM_Monitor' */
#if !Rte_SysCon_Variant_IMOR_3 && Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_ECMKO_CANCheck ((uint8)1U)
#endif

#if !Rte_SysCon_Variant_IMOR_3 && Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_ECMKO_CheckComplete ((uint8)2U)
#endif

#if !Rte_SysCon_Variant_IMOR_3 && Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_ECMKO_Crank    ((uint8)3U)
#endif

#if !Rte_SysCon_Variant_IMOR_3 && Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_ECMKO_DTC2_WUFail ((uint8)4U)
#endif

#if !Rte_SysCon_Variant_IMOR_3 && Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_ECMKO_DTC3_NoRationality ((uint8)5U)
#endif

#if !Rte_SysCon_Variant_IMOR_3 && Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_ECMKO_Passed   ((uint8)6U)
#endif

#if !Rte_SysCon_Variant_IMOR_3 && Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_ECMKO_StartTimer ((uint8)7U)
#endif

#if !Rte_SysCon_Variant_IMOR_3 && Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_ECMRpt_CheckECM ((uint8)1U)
#endif

#if !Rte_SysCon_Variant_IMOR_3 && Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_ECMRpt_Checking ((uint8)2U)
#endif

#if !Rte_SysCon_Variant_IMOR_3 && Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_ECMRpt_Complete ((uint8)3U)
#endif

#if !Rte_SysCon_Variant_IMOR_3 && Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_ECMRpt_Crank   ((uint8)4U)
#endif

#if !Rte_SysCon_Variant_IMOR_3 && Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_ECMRpt_DTC2    ((uint8)5U)
#endif

#if !Rte_SysCon_Variant_IMOR_3 && Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_ECMRpt_DTC3    ((uint8)6U)
#endif

#if !Rte_SysCon_Variant_IMOR_3 && Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_ECMRpt_SOPRcvd ((uint8)7U)
#endif

#if !Rte_SysCon_Variant_IMOR_3 && Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_ECMRpt_SendinSOP ((uint8)8U)
#endif

#if !Rte_SysCon_Variant_IMOR_3 && Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_ECMRpt_TimerWait ((uint8)9U)
#endif

#if !Rte_SysCon_Variant_IMOR_3 && Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_ECM_ECMInit    ((uint8)1U)
#endif

#if !Rte_SysCon_Variant_IMOR_3 && Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_KeyOn          ((uint8)2U)
#endif

#if !Rte_SysCon_Variant_IMOR_3 && Rte_SysCon_Variant_IMOR_1
#define IMOR_ac_IN_IMOR_Repeat         ((uint8)3U)
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
#define START_SEC_CALIB_UNSPECIFIED_IMOR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(float32, IMOR_VAR_INIT) KeIMOR_Cnt_HCPResetCntr = 10.0F;/* Referenced by: '<S137>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(float32, IMOR_VAR_INIT) KeIMOR_Cnt_HCPReset_Deb = 3.0F;/* Referenced by: '<S138>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint16, IMOR_VAR_INIT) KeIMOR_Cnt_KeyCycleMaxCunt = 1U;/* Referenced by: '<S353>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(float32, IMOR_VAR_INIT) KeIMOR_Cnt_MaxTrials = 33.0F;
                               /* Referenced by: '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint16, IMOR_VAR_INIT) KeIMOR_Cnt_P0513_Fail_Deb = 10U;/* Referenced by: '<S159>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint16, IMOR_VAR_INIT) KeIMOR_Cnt_P0513_Pass_Deb = 10U;/* Referenced by: '<S154>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint16, IMOR_VAR_INIT) KeIMOR_Cnt_P1A11_Fail_Deb = 10U;/* Referenced by: '<S240>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint16, IMOR_VAR_INIT) KeIMOR_Cnt_P1A11_Pass_Deb = 10U;/* Referenced by: '<S245>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint16, IMOR_VAR_INIT) KeIMOR_Cnt_RunCrankActive_Deb = 10U;/* Referenced by: '<S389>/Calib' */

#endif

#if !Rte_SysCon_Variant_IMOR_3 && Rte_SysCon_Variant_IMOR_1

static volatile CONST(float32, IMOR_VAR_INIT) KeIMOR_Cnt_SOPsent = 10.0F;
                                   /* Referenced by: '<S193>/ECM_BCM_Monitor' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(float32, IMOR_VAR_INIT) KeIMOR_Cnt_Tvalid_immo = 960.0F;/* Referenced by: '<S362>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_2

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_AuthenticationValid = 1;/* Referenced by: '<S413>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_BSWMem_Resp_Slct = 0;/* Referenced by: '<S208>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_BSWMem_Slct = 0;/* Referenced by: '<S209>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_CntrlEncdResFlag_En = 1;/* Referenced by:
                                                                      * '<S166>/Calib'
                                                                      * '<S97>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_CodeRecCmplt_Mem_OV = 0;/* Referenced by: '<S299>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_CodeRecCmplt_Mem_SD = 0;/* Referenced by: '<S300>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_DisableFstKeyInplantMd =
    0;                                 /* Referenced by: '<S363>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_ECMImmoStCANCFA_D = 0;/* Referenced by: '<S301>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_ECMImmoStCANCFA_SD = 0;/* Referenced by: '<S302>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_ECMImmoStCANC_SD = 0;/* Referenced by: '<S303>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_ECMImmoStePTFA_D = 0;/* Referenced by: '<S304>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_ECMImmoStePTFA_SD = 0;/* Referenced by: '<S305>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_ECMImmoStePT_SD = 0;/* Referenced by: '<S306>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_ECMStsHCPReset_SD = 0;/* Referenced by: '<S84>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_EnblDecByPassCntr = 0;/* Referenced by: '<S164>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_EnblDsblOvrrd_D = 0;/* Referenced by: '<S373>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_EnblDsblOvrrd_SD = 0;/* Referenced by: '<S374>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_EnblImmobFn = 1;/* Referenced by: '<S210>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_EnblImmobilizer = 1;/* Referenced by: '<S211>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_EnblP0513 = 1;/* Referenced by: '<S152>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_EnblP1A11 = 1;/* Referenced by: '<S238>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_EngResetChk_OV = 0;/* Referenced by: '<S307>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_EngResetChk_OVEn = 0;/* Referenced by: '<S308>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_F1G1GeneratedOV = 0;/* Referenced by: '<S212>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_F1G1GeneratedVerOV = 0;/* Referenced by: '<S213>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_FstReKeyInplantOvrdEnbl =
    1;                                 /* Referenced by: '<S337>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_FstReKeyInplantOvrdVal =
    0;                                 /* Referenced by: '<S338>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_HCPNotProg = 0;/* Referenced by: '<S214>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_HCPPrevProg = 0;/* Referenced by: '<S215>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_HCPReset_OV = 1;/* Referenced by: '<S139>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_HCPReset_SD = 1;/* Referenced by: '<S140>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_ImmoByPassCANStat_En = 1;/* Referenced by: '<S128>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_ImmoByPass_En = 1;/* Referenced by: '<S85>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_Immo_CANStat_SD = 0;/* Referenced by: '<S129>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_Immo_Ovrd_D = 0;/* Referenced by: '<S86>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_Immo_Ovrd_SD = 0;/* Referenced by: '<S87>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_InputSpeedFA_OV = 0;/* Referenced by: '<S309>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_InputSpeedFA_OVEn = 0;/* Referenced by: '<S310>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_KeyInRun_DelaySD = 1;/* Referenced by:
                                                                      * '<S397>/Calib'
                                                                      * '<S364>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_MMKey1_Slct = 0;/* Referenced by: '<S278>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_MMKey1org21_Temp_SD = 0;/* Referenced by: '<S311>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_MMKey1org22_Temp_SD = 0;/* Referenced by: '<S312>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_MMKey2_Slct = 0;/* Referenced by: '<S279>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_MMKey3_Slct = 0;/* Referenced by: '<S280>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_MMKey4_Slct = 0;/* Referenced by: '<S281>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_MMKey5_Slct = 0;/* Referenced by: '<S282>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_MMKey6_Slct = 0;/* Referenced by: '<S283>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_MMKey_3_Temp_SD = 0;/* Referenced by: '<S313>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_MMKey_4_Temp_SD = 0;/* Referenced by: '<S314>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_MMKey_5_Temp_SD = 0;/* Referenced by: '<S315>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_MMKey_6_Temp_SD = 0;/* Referenced by: '<S316>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_ORC_Health_Fsft_En = 1;/* Referenced by: '<S92>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_ORC_Health_Rec_En = 1;/* Referenced by:
                                                                      * '<S167>/Calib'
                                                                      * '<S98>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_OvrdRndNum = 0;/* Referenced by: '<S292>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_PropSysActv_OV = 0;/* Referenced by: '<S317>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_PropSysActv_SD = 0;/* Referenced by: '<S318>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_Rand1_SD = 0;/* Referenced by: '<S255>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_Rand2_SD = 0;/* Referenced by: '<S256>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_Rand3_SD = 0;/* Referenced by: '<S257>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_Rand4_SD = 0;/* Referenced by: '<S258>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_RunCrankActive_D = 0;/* Referenced by: '<S319>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_RunCrankActive_SD = 0;/* Referenced by: '<S320>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_ThreeSecAftKeyOffApp_SD =
    0;                                 /* Referenced by: '<S272>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_ThreeSecAftKeyOff_D = 0;/* Referenced by: '<S339>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_ThreeSecAftKeyOff_SD = 1;/* Referenced by: '<S340>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_UseAutoSAREEPROMStatusVal
    = 0;                               /* Referenced by: '<S291>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_Use_Spec30Check = 0;
                               /* Referenced by: '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_VC_VehCfg2_Stat_rec_En =
    1;                                 /* Referenced by:
                                        * '<S168>/Calib'
                                        * '<S99>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_VC_VehCfg3_Stat_rec_En =
    1;                                 /* Referenced by:
                                        * '<S169>/Calib'
                                        * '<S100>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_VC_VehCfg4_Stat_rec_En =
    1;                                 /* Referenced by:
                                        * '<S170>/Calib'
                                        * '<S101>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_VC_VehCfg6_Stat_rec_En =
    1;                                 /* Referenced by:
                                        * '<S171>/Calib'
                                        * '<S102>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_VehCfg2_Stat_Fsft_En = 1;/* Referenced by: '<S93>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_VehCfg3_Stat_Fsft_En = 1;/* Referenced by: '<S94>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_VehCfg4_Stat_Fsft_En = 1;/* Referenced by: '<S95>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(boolean, IMOR_VAR_INIT) KeIMOR_b_VehCfg6_Stat_Fsft_En = 1;/* Referenced by: '<S96>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(float32, IMOR_VAR_INIT) KeIMOR_cnt_CodeVrfyMaxLmt = 33.0F;
                               /* Referenced by: '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint16, IMOR_VAR_INIT) KeIMOR_d_F1_Ovrd = 3174U;/* Referenced by: '<S216>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint16, IMOR_VAR_INIT) KeIMOR_d_F1_VerOvrd = 2895U;/* Referenced by: '<S217>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint16, IMOR_VAR_INIT) KeIMOR_d_G1_Ovrd = 9799U;/* Referenced by: '<S218>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint16, IMOR_VAR_INIT) KeIMOR_d_G1_VerOvrd = 4085U;/* Referenced by: '<S219>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_2

static volatile CONST(TeIMOR_e_BuildAssemblyModeStat, IMOR_VAR_INIT)
    KeIMOR_e_BuildAssemblyModeStat = CeIMOR_e_ImmoPairingPassed;/* Referenced by: '<S414>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(TeIMOR_e_ECMStatCANC, IMOR_VAR_INIT)
    KeIMOR_e_ECMImmoStCANC_D = CeIMOR_e_ECMcIS;/* Referenced by: '<S321>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(TeIMOR_e_ECMStatCANePT, IMOR_VAR_INIT)
    KeIMOR_e_ECMImmoStePT_D = CeIMOR_e_ECMeIS;/* Referenced by: '<S322>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(TeIMOR_e_HCPImmoStatCanC, IMOR_VAR_INIT)
    KeIMOR_e_Immo_CANStat_D = CeIMOR_e_HCPIS;/* Referenced by: '<S130>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(float32, IMOR_VAR_INIT) KeIMOR_n_InputSpeedLimit = 1.0F;/* Referenced by: '<S398>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(float32, IMOR_VAR_INIT) KeIMOR_t_CANWaitDly = 12.0F;
                               /* Referenced by: '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(float32, IMOR_VAR_INIT) KeIMOR_t_CANWaitDly_Rec = 8.0F;
                               /* Referenced by: '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(float32, IMOR_VAR_INIT) KeIMOR_t_CV_NACKDly = 2.0F;
                               /* Referenced by: '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(float32, IMOR_VAR_INIT) KeIMOR_t_CV_PrplsnDisblDly = 2.0F;
                               /* Referenced by: '<S199>/Immobilizer_HCP_BCM' */

#endif

#if !Rte_SysCon_Variant_IMOR_3 && Rte_SysCon_Variant_IMOR_1

static volatile CONST(float32, IMOR_VAR_INIT) KeIMOR_t_ECMRationalityTimer =
    64.0F;                         /* Referenced by: '<S193>/ECM_BCM_Monitor' */

#endif

#if !Rte_SysCon_Variant_IMOR_3 && Rte_SysCon_Variant_IMOR_1

static volatile CONST(float32, IMOR_VAR_INIT) KeIMOR_t_ECMSOPDelay = 12.0F;
                                   /* Referenced by: '<S193>/ECM_BCM_Monitor' */

#endif

#if !Rte_SysCon_Variant_IMOR_3 && Rte_SysCon_Variant_IMOR_1

static volatile CONST(float32, IMOR_VAR_INIT) KeIMOR_t_ECMSOPIncDelay = 2.0F;
                                   /* Referenced by: '<S193>/ECM_BCM_Monitor' */

#endif

#if !Rte_SysCon_Variant_IMOR_3 && Rte_SysCon_Variant_IMOR_1

static volatile CONST(float32, IMOR_VAR_INIT) KeIMOR_t_ECMWUTimer = 640.0F;
                                   /* Referenced by: '<S193>/ECM_BCM_Monitor' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(float32, IMOR_VAR_INIT) KeIMOR_t_EnblDsbl_Dly = 80.0F;/* Referenced by: '<S375>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(float32, IMOR_VAR_INIT) KeIMOR_t_F1G1GenDly = 2.0F;
                               /* Referenced by: '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(float32, IMOR_VAR_INIT) KeIMOR_t_G2CmpDly = 12.0F;
                               /* Referenced by: '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(float32, IMOR_VAR_INIT) KeIMOR_t_InvkMKADly = 2.0F;
                               /* Referenced by: '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(float32, IMOR_VAR_INIT) KeIMOR_t_KeyInRun_Delay = 32.0F;/* Referenced by:
                                                                      * '<S399>/Calib'
                                                                      * '<S365>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(float32, IMOR_VAR_INIT) KeIMOR_t_MKeyRcvDelay = 12.0F;
                               /* Referenced by: '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(float32, IMOR_VAR_INIT) KeIMOR_t_MKeyStrDly = 2.0F;
                               /* Referenced by: '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(float32, IMOR_VAR_INIT) KeIMOR_t_PrplsnDisblDly = 2.0F;
                               /* Referenced by: '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(float32, IMOR_VAR_INIT) KeIMOR_t_PrplsnEnblDly = 2.0F;
                               /* Referenced by: '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(float32, IMOR_VAR_INIT) KeIMOR_t_RNGDly = 2.0F;
                               /* Referenced by: '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(float32, IMOR_VAR_INIT) KeIMOR_t_RepeatDly = 48000.0F;/* Referenced by:
                                                                      * '<S199>/Immobilizer_HCP_BCM'
                                                                      * '<S193>/ECM_BCM_Monitor'
                                                                      */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(float32, IMOR_VAR_INIT) KeIMOR_t_Rsp2CmpDly = 5.0F;
                               /* Referenced by: '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(float32, IMOR_VAR_INIT) KeIMOR_t_Rsp86SndDly = 2.0F;
                               /* Referenced by: '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(float32, IMOR_VAR_INIT) KeIMOR_t_RspRcvd10Dly = 2.0F;
                               /* Referenced by: '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(float32, IMOR_VAR_INIT) KeIMOR_t_SndRecReqDly = 1.0F;
                               /* Referenced by: '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(float32, IMOR_VAR_INIT) KeIMOR_t_StrVrfyDly = 5.0F;
                               /* Referenced by: '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(float32, IMOR_VAR_INIT) KeIMOR_t_ValidImmoTmr = 960.0F;/* Referenced by: '<S273>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(float32, IMOR_VAR_INIT) KeIMOR_t_ValidKeyCycTmr = 960.0F;/* Referenced by: '<S366>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(float32, IMOR_VAR_INIT) KeIMOR_t_WaitFor99Dly = 2.0F;
                               /* Referenced by: '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(float32, IMOR_VAR_INIT) KeIMOR_t_dT = 1.0F;/* Referenced by:
                                                                  * '<S199>/Immobilizer_HCP_BCM'
                                                                  * '<S334>/Calib'
                                                                  * '<S220>/Calib'
                                                                  * '<S193>/ECM_BCM_Monitor'
                                                                  */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint8, IMOR_VAR_INIT) KeIMOR_y_CntrlEncdReq05 = 5U;
                               /* Referenced by: '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint8, IMOR_VAR_INIT) KeIMOR_y_CntrlEncdReq06 = 6U;
                               /* Referenced by: '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint8, IMOR_VAR_INIT) KeIMOR_y_CntrlEncdReq15 = 21U;
                               /* Referenced by: '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint8, IMOR_VAR_INIT) KeIMOR_y_CntrlEncdReq81 = 129U;
                               /* Referenced by: '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint8, IMOR_VAR_INIT) KeIMOR_y_CntrlEncdReq84 = 132U;
                               /* Referenced by: '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint8, IMOR_VAR_INIT) KeIMOR_y_CntrlEncdReq85 = 133U;
                               /* Referenced by: '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint8, IMOR_VAR_INIT) KeIMOR_y_CntrlEncdReq86 = 134U;
                               /* Referenced by: '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint8, IMOR_VAR_INIT) KeIMOR_y_CntrlEncdReq87 = 135U;
                               /* Referenced by: '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint8, IMOR_VAR_INIT) KeIMOR_y_CntrlEncdResp00 = 0U;
                               /* Referenced by: '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint8, IMOR_VAR_INIT) KeIMOR_y_CntrlEncdResp10 = 16U;
                               /* Referenced by: '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint8, IMOR_VAR_INIT) KeIMOR_y_CntrlEncdResp99 = 153U;
                               /* Referenced by: '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint8, IMOR_VAR_INIT) KeIMOR_y_CntrlEncdRespAA = 170U;
                               /* Referenced by: '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint8, IMOR_VAR_INIT) KeIMOR_y_CntrlEncdRespAB = 171U;
                               /* Referenced by: '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint8, IMOR_VAR_INIT) KeIMOR_y_MMKey1org21_RecMem = 91U;/* Referenced by: '<S221>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint8, IMOR_VAR_INIT) KeIMOR_y_MMKey1org21_Temp_OV = 0U;/* Referenced by: '<S323>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint8, IMOR_VAR_INIT) KeIMOR_y_MMKey1org22_RecMem = 127U;/* Referenced by: '<S222>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint8, IMOR_VAR_INIT) KeIMOR_y_MMKey1org22_Temp_OV = 0U;/* Referenced by: '<S324>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint8, IMOR_VAR_INIT) KeIMOR_y_MMKey_3_RecMem = 99U;/* Referenced by: '<S223>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint8, IMOR_VAR_INIT) KeIMOR_y_MMKey_3_Temp_OV = 0U;/* Referenced by: '<S325>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint8, IMOR_VAR_INIT) KeIMOR_y_MMKey_4_RecMem = 142U;/* Referenced by: '<S224>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint8, IMOR_VAR_INIT) KeIMOR_y_MMKey_4_Temp_OV = 0U;/* Referenced by: '<S326>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint8, IMOR_VAR_INIT) KeIMOR_y_MMKey_5_RecMem = 172U;/* Referenced by: '<S225>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint8, IMOR_VAR_INIT) KeIMOR_y_MMKey_5_Temp_OV = 0U;/* Referenced by: '<S327>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint8, IMOR_VAR_INIT) KeIMOR_y_MMKey_6_RecMem = 20U;/* Referenced by: '<S226>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint8, IMOR_VAR_INIT) KeIMOR_y_MMKey_6_Temp_OV = 0U;/* Referenced by: '<S328>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint16, IMOR_VAR_INIT) KeIMOR_y_Rand1_Dial = 0U;/* Referenced by: '<S259>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint16, IMOR_VAR_INIT) KeIMOR_y_Rand2_Dial = 0U;/* Referenced by: '<S260>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint16, IMOR_VAR_INIT) KeIMOR_y_Rand3_Dial = 0U;/* Referenced by: '<S261>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint16, IMOR_VAR_INIT) KeIMOR_y_Rand4_Dial = 1U;/* Referenced by: '<S262>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint8, IMOR_VAR_INIT) KeIMOR_y_RndNum1 = 0U;/* Referenced by: '<S293>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint8, IMOR_VAR_INIT) KeIMOR_y_RndNum2 = 1U;/* Referenced by: '<S294>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint8, IMOR_VAR_INIT) KeIMOR_y_RndNum3 = 2U;/* Referenced by: '<S295>/Calib' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static volatile CONST(uint8, IMOR_VAR_INIT) KeIMOR_y_RndNum4 = 3U;/* Referenced by: '<S296>/Calib' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_IMOR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_IMOR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(float32, IMOR_VAR_INIT) EeIMOR_M_Rand1_prev;/* '<Root>/DSM_17' */
static VAR(float32, IMOR_VAR_INIT) EeIMOR_M_Rand2_prev;/* '<Root>/DSM_18' */
static VAR(float32, IMOR_VAR_INIT) EeIMOR_M_Rand3_prev;/* '<Root>/DSM_19' */
static VAR(float32, IMOR_VAR_INIT) EeIMOR_M_Rand4_prev;/* '<Root>/DSM_20' */
static VAR(boolean, IMOR_VAR_INIT) EeIMOR_b_AuthCmd00_InFlag;/* '<Root>/DSM_35' */
static VAR(boolean, IMOR_VAR_INIT) EeIMOR_b_AuthCmd01_InFlag;/* '<Root>/DSM_36' */
static VAR(boolean, IMOR_VAR_INIT) EeIMOR_b_AuthCmd02_InFlag;/* '<Root>/DSM_37' */
static VAR(boolean, IMOR_VAR_INIT) EeIMOR_b_AuthCmd03_InFlag;/* '<Root>/DSM_38' */
static VAR(boolean, IMOR_VAR_INIT) EeIMOR_b_AuthCmd04_InFlag;/* '<Root>/DSM_39' */
static VAR(boolean, IMOR_VAR_INIT) EeIMOR_b_AuthCmd05_InFlag;/* '<Root>/DSM_40' */
static VAR(boolean, IMOR_VAR_INIT) EeIMOR_b_AuthCmd06_InFlag;/* '<Root>/DSM_41' */
static VAR(boolean, IMOR_VAR_INIT) EeIMOR_b_AuthCmd07_InFlag;/* '<Root>/DSM_42' */
static VAR(boolean, IMOR_VAR_INIT) EeIMOR_b_AuthCmd08_InFlag;/* '<Root>/DSM_43' */
static VAR(boolean, IMOR_VAR_INIT) EeIMOR_b_AuthCmd09_InFlag;/* '<Root>/DSM_44' */
static VAR(boolean, IMOR_VAR_INIT) EeIMOR_b_AuthCmd10_InFlag;/* '<Root>/DSM_45' */
static VAR(boolean, IMOR_VAR_INIT) EeIMOR_b_AuthCmd11_InFlag;/* '<Root>/DSM_46' */
static VAR(boolean, IMOR_VAR_INIT) EeIMOR_b_AuthCmd12_InFlag;/* '<Root>/DSM_47' */
static VAR(boolean, IMOR_VAR_INIT) EeIMOR_b_AuthCmd13_InFlag;/* '<Root>/DSM_48' */
static VAR(boolean, IMOR_VAR_INIT) EeIMOR_b_AuthCmd14_InFlag;/* '<Root>/DSM_49' */
static VAR(boolean, IMOR_VAR_INIT) EeIMOR_b_AuthCmd15_InFlag;/* '<Root>/DSM_50' */
static VAR(boolean, IMOR_VAR_INIT) EeIMOR_b_AuthCmdCntrlEncdRespFlag;/* '<Root>/DSM_51' */
static VAR(boolean, IMOR_VAR_INIT) EeIMOR_b_CntrlEncdResFlag;/* '<Root>/DSM_33' */
static VAR(boolean, IMOR_VAR_INIT) EeIMOR_b_CodeRecCmplt_Mem;/* '<Root>/DSM_34' */
static VAR(boolean, IMOR_VAR_INIT) EeIMOR_b_ImmoAuthValid_ECMMem;/* '<Root>/DSM_16' */
static VAR(boolean, IMOR_VAR_INIT) EeIMOR_b_ImmoAuthValid_Mem;/* '<Root>/DSM_2' */
static VAR(boolean, IMOR_VAR_INIT) EeIMOR_b_MKeyStrToE2;/* '<Root>/DSM_32' */
static VAR(boolean, IMOR_VAR_INIT) EeIMOR_b_MMKey1org21Flag;/* '<Root>/DSM_3' */
static VAR(boolean, IMOR_VAR_INIT) EeIMOR_b_MMKey1org22Flag;/* '<Root>/DSM_4' */
static VAR(boolean, IMOR_VAR_INIT) EeIMOR_b_MMKey_3Flag;/* '<Root>/DSM_5' */
static VAR(boolean, IMOR_VAR_INIT) EeIMOR_b_MMKey_4Flag;/* '<Root>/DSM_6' */
static VAR(boolean, IMOR_VAR_INIT) EeIMOR_b_MMKey_5Flag;/* '<Root>/DSM_7' */
static VAR(boolean, IMOR_VAR_INIT) EeIMOR_b_MMKey_6Flag;/* '<Root>/DSM_8' */
static VAR(boolean, IMOR_VAR_INIT) EeIMOR_b_ORC_Health_rec;/* '<Root>/DSM_22' */
static VAR(boolean, IMOR_VAR_INIT) EeIMOR_b_VC_VehCfg2_Stat_rec;/* '<Root>/DSM_24' */
static VAR(boolean, IMOR_VAR_INIT) EeIMOR_b_VC_VehCfg3_Stat_rec;/* '<Root>/DSM_25' */
static VAR(boolean, IMOR_VAR_INIT) EeIMOR_b_VC_VehCfg4_Stat_rec;/* '<Root>/DSM_26' */
static VAR(boolean, IMOR_VAR_INIT) EeIMOR_b_VC_VehCfg6_Stat_rec;/* '<Root>/DSM_27' */
static VAR(sint16, IMOR_VAR_INIT) EeIMOR_e_BuildAssemblyModeStat;/* '<Root>/DSM_28' */
static VAR(uint8, IMOR_VAR_INIT) EeIMOR_y_MMKey1org21_Mem;/* '<Root>/DSM_31' */
static VAR(uint8, IMOR_VAR_INIT) EeIMOR_y_MMKey1org22_Mem;/* '<Root>/DSM_1' */
static VAR(uint8, IMOR_VAR_INIT) EeIMOR_y_MMKey_3_Mem;/* '<Root>/DSM_12' */
static VAR(uint8, IMOR_VAR_INIT) EeIMOR_y_MMKey_4_Mem;/* '<Root>/DSM_23' */
static VAR(uint8, IMOR_VAR_INIT) EeIMOR_y_MMKey_5_Mem;/* '<Root>/DSM_29' */
static VAR(uint8, IMOR_VAR_INIT) EeIMOR_y_MMKey_6_Mem;/* '<Root>/DSM_30' */

#if Rte_SysCon_Variant_IMOR_1

static VAR(uint8, IMOR_VAR_INIT) VaIMOR_y_MMKeyStr_EE[7];/* '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOC_b_ImmoPassed;/* '<S372>/Logical' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOC_b_KeyInRun;/* '<S333>/Comparison6' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOC_b_KeyOffAcc;/* '<S333>/Logical1' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOC_b_KeyRunCrank;/* '<S333>/Logical13' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOC_b_KeyTransRunCrank;/* '<S333>/Logical5' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOC_b_ThreeSecAftKeyOff;/* '<S367>/OR1' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(uint16, IMOR_VAR_INIT) VeIMOR_Cnt_KeyCycleMaxCunt;/* '<S348>/Switch' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(uint16, IMOR_VAR_INIT) VeIMOR_Cnt_KeyOffCounter;/* '<S126>/Switch1' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(float32, IMOR_VAR_INIT) VeIMOR_Cnt_KeyOffOnCnt;/* '<S50>/Data Type Conversion' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(uint16, IMOR_VAR_INIT) VeIMOR_Cnt_KeyOffOnCntTemp;/* '<S330>/Switch' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(uint16, IMOR_VAR_INIT) VeIMOR_Cnt_RandCounter;/* '<S249>/Switch' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_1SecAftKeyOff;/* '<S342>/Comparison14' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_AuthenticationValid_BD;/* '<S88>/Gain' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_CBCRes_Rcvd;/* '<S199>/Immobilizer_HCP_BCM' */

#endif

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_CntrlEncdResFlag;/* '<Root>/DSM_21' */

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_CodeRecCplt_Mem;/* '<S49>/Switch11' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_ComfortStrategy_AL;/* '<S341>/Logical3' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_ComfortStrategy_Aft_Latch;/* '<S354>/OR1' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_ComfortStrategy_AuthPass;/* '<S352>/AND' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_ComfortStrategy_BD;/* '<S331>/Logical11' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_ComfortStrategy_Cnt;/* '<S342>/Comparison5' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_DesRmtVehStartReq;/* '<S394>/AND' */

#endif

#if !Rte_SysCon_Variant_IMOR_3 && Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_ECMReset;/* '<S196>/Logical5' */

#endif

#if !Rte_SysCon_Variant_IMOR_3 && Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_ECUValidKeyCycle;/* '<S193>/Logical3' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_EnblDsbl;/* '<S332>/Switch' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_EnblDsbl_AD;/* '<S376>/AND' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_EnblDsbl_BD;/* '<S332>/Logical1' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_EnblP0513_En;/* '<S60>/Logical15' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_FstReKeyInplantMd;/* '<S331>/Switch1' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_HCPECMImmoPASSED;/* '<S53>/Switch6' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_HCPReset_AD;/* '<S59>/Switch2' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_HCPReset_AL;/* '<S141>/OR1' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_HCPReset_Cntr;/* '<S59>/Comparison1' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_HCPReset_Deb;/* '<S144>/Gain' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_ImmoByPass;/* '<S90>/Logical3' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_ImmoByPass_AL;/* '<S89>/OR1' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_ImmoByPass_Reset;/* '<S91>/Logical16' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_KeyCntRst;/* '<S342>/Logical2' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_KeyCrank;/* '<S230>/Gain' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_KeyCycleMaxLim;/* '<S341>/Comparison' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_KeyInRunNoPSA;/* '<S335>/Switch1' */

#endif

#if !Rte_SysCon_Variant_IMOR_3 && Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_KeyON;/* '<S193>/Logical1' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_KeyONpostCRANK;/* '<S335>/Logical7' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_KeyOffOnCntEnbl;/* '<S50>/Logical15' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_KeyWasOff;/* '<S206>/Comparison15' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_Latch_Reset;/* '<S342>/Logical8' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_MemValRstTmrEnbl;/* '<S206>/Comparison18' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_NotValidKeyCyc;/* '<S206>/Logical11' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_PMMOffOn;/* '<S59>/Logical2' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_PMM_RunCrank_AL;/* '<S400>/OR1' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_RmtVehStartReq_AD;/* '<S335>/Logical12' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_RmtVehStartReq_BD;/* '<S336>/Gain' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_RmtVehStartReq_Valid_AD;/* '<S342>/Unit Delay3' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_RstImmoAuthInMemArb;/* '<S206>/Comparison19' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_RstValidKeyCyclTmr;/* '<S342>/Logical1' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_RunCrankActiveAnalog_AD;/* '<S392>/Gain' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_SetP0513_Fail;/* '<S60>/Logical9' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_SetP0513_Fail_Deb;/* '<S160>/AND' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_SetP0513_Pass;/* '<S60>/Logical3' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_SetP0513_Pass_Deb;/* '<S155>/AND' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_SetP1A11_Fail;/* '<S201>/Logical1' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_SetP1A11_Fail_Deb;/* '<S241>/AND' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_SetP1A11_Pass;/* '<S201>/Logical3' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_SetP1A11_Pass_Deb;/* '<S246>/AND' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_ValidKeyCycle;/* '<S342>/Switch' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_ValidKeyCycleBfrSW;/* '<S342>/Logical12' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_ValidKeyCycle_AD2;/* '<S368>/OR1' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_ValidKeyCycle_BD;/* '<S342>/Logical10' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_ValidKeyCycle_Delay;/* '<S342>/Switch2' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_Write_2_EEPROM_Key;/* '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(boolean, IMOR_VAR_INIT) VeIMOR_b_keyPOS_OK;/* '<S206>/Logical7' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(TeIMOR_e_HCPImmoStatCanC, IMOR_VAR_INIT) VeIMOR_e_HCPStatCanC;/* '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(float32, IMOR_VAR_INIT) VeIMOR_t_MemValRstTMr;/* '<S277>/Switch' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(uint16, IMOR_VAR_INIT) VeIMOR_t_Random1;/* '<S252>/Sum9' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(uint16, IMOR_VAR_INIT) VeIMOR_t_Random2;/* '<S252>/Sum1' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(uint16, IMOR_VAR_INIT) VeIMOR_t_Random3;/* '<S252>/Sum2' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(uint16, IMOR_VAR_INIT) VeIMOR_t_Random4;/* '<S252>/Sum3' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(float32, IMOR_VAR_INIT) VeIMOR_t_ValidKeyCycTmr;/* '<S369>/Switch' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(uint8, IMOR_VAR_INIT) VeIMOR_y_MMKey1org21_Temp;/* '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(uint8, IMOR_VAR_INIT) VeIMOR_y_MMKey1org22_Temp;/* '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(uint8, IMOR_VAR_INIT) VeIMOR_y_MMKey_3_Temp;/* '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(uint8, IMOR_VAR_INIT) VeIMOR_y_MMKey_4_Temp;/* '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(uint8, IMOR_VAR_INIT) VeIMOR_y_MMKey_5_Temp;/* '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(uint8, IMOR_VAR_INIT) VeIMOR_y_MMKey_6_Temp;/* '<S199>/Immobilizer_HCP_BCM' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(uint8, IMOR_VAR_INIT) VeIMOR_y_MiniKrypt_extF1_1;/* '<Root>/DSM_9' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(uint8, IMOR_VAR_INIT) VeIMOR_y_MiniKrypt_extF1_2;/* '<Root>/DSM_10' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(uint8, IMOR_VAR_INIT) VeIMOR_y_MiniKrypt_extG1_1;/* '<Root>/DSM_11' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(uint8, IMOR_VAR_INIT) VeIMOR_y_MiniKrypt_extG1_2;/* '<Root>/DSM_13' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(float32, IMOR_VAR_INIT) VeIMOR_y_Rand1Sgn;/* '<S252>/Product2' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(float32, IMOR_VAR_INIT) VeIMOR_y_Rand2Sgn;/* '<S252>/Product3' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(float32, IMOR_VAR_INIT) VeIMOR_y_Rand3Sgn;/* '<S252>/Product4' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(float32, IMOR_VAR_INIT) VeIMOR_y_Rand4Sgn;/* '<S252>/Product1' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(uint8, IMOR_VAR_INIT) VeIMOR_y_f1_1gen;/* '<Root>/DSM_15' */

#endif

#if Rte_SysCon_Variant_IMOR_1

static VAR(uint8, IMOR_VAR_INIT) VeIMOR_y_f1_2gen;/* '<Root>/DSM_14' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_IMOR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_IMOR
#include "MemMap.h"

CONST(ConstB_IMOR_ac_T, IMOR_VAR_INIT) IMOR_ac_ConstB =
{
    CeIMOR_e_Init,                     /* '<S409>/Constant' */
    CeIMOR_e_HCPIS,                    /* '<S410>/Constant' */
    CeIMOR_e_ECMInit,                  /* '<S411>/Constant' */
    CeDFIB_e_Init,                     /* '<S415>/Constant' */
    CeDFIB_e_Init                      /* '<S416>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_IMOR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_IMOR
#include "MemMap.h"

VAR(B_IMOR_ac_T, IMOR_VAR_INIT) IMOR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_IMOR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_IMOR
#include "MemMap.h"

VAR(DW_IMOR_ac_T, IMOR_VAR_INIT) IMOR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_IMOR
#include "MemMap.h"
#if Rte_SysCon_Variant_IMOR_1

static FUNC(void, IMOR_CODE_LOCAL) IMOR_ac_Subsystem2(VAR(boolean, AUTOMATIC)
    rtu_Enable, VAR(boolean, AUTOMATIC) rtu_In1, P2VAR(B_Subsystem2_IMOR_ac_T,
    AUTOMATIC, IMOR_VAR_INIT) localB);

#endif

/* Forward declaration for local functions */
#if Rte_SysCon_Variant_IMOR_1

static void IMOR_enter_atomic_IMOR_CodeRec_SndRecReq;

#endif

#if Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_IMOR_CodeRec_InvkMKA;

#endif

#if Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_IMOR_CodeRec_NoVal;

#endif

#if Rte_SysCon_Variant_IMOR_1

static boolean IMOR_ac_Call_Check_F1G1Gen_n;

#endif

#if Rte_SysCon_Variant_IMOR_1

static void IMO_enter_atomic_IMOR_CodeRec_KeyCycInit;

#endif

#if Rte_SysCon_Variant_IMOR_1

static void IMOR_a_enter_atomic_IMOR_CodeRec_RecNACK;

#endif

#if Rte_SysCon_Variant_IMOR_1

static boolean IMOR_ac_CheckMMKeyIntegrity;

#endif

#if Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_IMOR_CodeRec_RecAck86Sent(const uint8
    *TmpSignalConversionAtVeIMOR_y_CntrlEncdR);

#endif

#if Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_IMOR_CodeRec_RecAck86SentAftr99(const uint8
    *TmpSignalConversionAtVeIMOR_y_CntrlEncdR);

#endif

#if Rte_SysCon_Variant_IMOR_1

static boolean IMOR_ac_Call_Write_2_EEPROM_Key;

#endif

#if Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_IMOR_CodeRec_RecAck87Sent;

#endif

#if Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_IMOR_CodeRec_RecCmpRsp2Rcvd;

#endif

#if Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_IMOR_CodeRec_RecCpyRspRcvd;

#endif

#if Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_IMOR_CodeRec_RecMKeyStrVrfy(const TeIMOR_e_EEPROG_STATUS
    *Switch);

#endif

#if Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_IMOR_CodeRec_RecRspRcvd(const uint8
    *TmpSignalConversionAtVeIMOR_y_CntrlEncdR);

#endif

#if Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_IMOR_CodeRec_RecRspRcvd99;

#endif

#if Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_IMOR_CodeRec_RecRspRcvdAA;

#endif

#if Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_IMOR_CodeRec_Rsp99G1G2Comp;

#endif

#if Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_IMOR_CodeRec_Rsp99G1G2Comp2;

#endif

#if Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_IMOR_CodeRec(const boolean *DataStoreRead7, const
    TeIMOR_e_EEPROG_STATUS *Switch, const uint8
    *TmpSignalConversionAtVeIMOR_y_CntrlEncdR);

#endif

#if Rte_SysCon_Variant_IMOR_1

static void IMOR_enter_atomic_IMOR_CodeVrfy_NACKSent;

#endif

#if Rte_SysCon_Variant_IMOR_1

static void IMOR_a_enter_atomic_IMOR_CodeVrfy_KCInit;

#endif

#if Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_IMOR_CodeVrfy_VrfyRspRcvd;

#endif

#if Rte_SysCon_Variant_IMOR_1

static void IMOR__enter_atomic_IMOR_CodeVrfy_F1G1Gen;

#endif

#if Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_IMOR_CodeVrfy_F1G1Gen(const uint8
    *TmpSignalConversionAtVeIMOR_y_CntrlEncdR);

#endif

#if Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_enter_atomic_IMOR_CodeVrfy_RG1(const uint8 *Switch1, const
    uint8 *Switch2, const uint8 *Switch3, const uint8 *Switch4, const uint8
    *Switch5);

#endif

#if Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_enter_atomic_IMOR_CodeVrfy_RG;

#endif

#if Rte_SysCon_Variant_IMOR_1

static boolean IMOR_ac_Call_Check_F1G1Gen;

#endif

#if Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_IMOR_CodeVrfy(const uint8 *Switch1, const uint8 *Switch2,
    const uint8 *Switch3, const uint8 *TmpSignalConversionAtVeIMOR_y_CntrlEncdR,
    const uint8 *Switch4, const uint8 *Switch5);

#endif

#if !Rte_SysCon_Variant_IMOR_3 && Rte_SysCon_Variant_IMOR_1

static void IMOR__enter_atomic_IMOR_ECMKO_StartTimer;

#endif

#if !Rte_SysCon_Variant_IMOR_3 && Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_IMOR_ECMRpt_SendinSOP;

#endif

#if !Rte_SysCon_Variant_IMOR_3 && Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_enter_atomic_IMOR_ECMKO_Passed;

#endif

#if !Rte_SysCon_Variant_IMOR_3 && Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_IMOR_KeyOn;

#endif

/*
 * Output and update for enable system:
 *    '<S136>/Subsystem2'
 *    '<S388>/Subsystem2'
 */
#if Rte_SysCon_Variant_IMOR_1

static FUNC(void, IMOR_CODE_LOCAL) IMOR_ac_Subsystem2(VAR(boolean, AUTOMATIC)
    rtu_Enable, VAR(boolean, AUTOMATIC) rtu_In1, P2VAR(B_Subsystem2_IMOR_ac_T,
    AUTOMATIC, IMOR_VAR_INIT) localB)
{
    /* Outputs for Enabled SubSystem: '<S136>/Subsystem2' incorporates:
     *  EnablePort: '<S145>/Enable'
     */
    if (rtu_Enable)
    {
        /* Inport: '<S145>/In1' */
        localB->In1 = rtu_In1;
    }

    /* End of Outputs for SubSystem: '<S136>/Subsystem2' */
}

#endif

/* Function for Chart: '<S199>/Immobilizer_HCP_BCM' */
#if Rte_SysCon_Variant_IMOR_1

static void IMOR_enter_atomic_IMOR_CodeRec_SndRecReq
{
    /* Entry 'IMOR_CodeRec_SndRecReq': '<S207>:7' */
    IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_SndRecReq;
    IMOR_ac_B.VeIMOR_b_SKIMNotProg = false;
    IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
    VeIMOR_b_CntrlEncdResFlag = false;
    EeIMOR_b_MMKey1org21Flag = false;
    EeIMOR_b_MMKey1org22Flag = false;
    EeIMOR_b_MMKey_3Flag = false;
    EeIMOR_b_MMKey_4Flag = false;
    EeIMOR_b_MMKey_5Flag = false;
    EeIMOR_b_MMKey_6Flag = false;
    IMOR_ac_B.VeIMOR_y_CntrlEncdReq_Arb = KeIMOR_y_CntrlEncdReq85;
    IMOR_ac_B.VeIMOR_y_rnd_1_Arb = IMOR_ac_B.VeIMOR_y_rnd1Init;
    IMOR_ac_B.VeIMOR_y_rnd_2_Arb = IMOR_ac_B.VeIMOR_y_rnd2Init;
    IMOR_ac_B.VeIMOR_y_rnd_3_Arb = IMOR_ac_B.VeIMOR_y_rnd3Init;
    IMOR_ac_B.VeIMOR_y_rnd_4_Arb = IMOR_ac_B.VeIMOR_y_rnd4Init;
    IMOR_ac_B.VeIMOR_y_MiniKryptF1_1_Arb = VeIMOR_y_f1_1gen;
    IMOR_ac_B.VeIMOR_y_MiniKryptF1_2_Arb = VeIMOR_y_f1_2gen;
    VeIMOR_e_HCPStatCanC = CeIMOR_e_HCPIS;
    IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = true;
}

#endif

/* Function for Chart: '<S199>/Immobilizer_HCP_BCM' */
#if Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_IMOR_CodeRec_InvkMKA
{
    IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_EnblMKA;
    IMOR_ac_B.VeIMOR_b_InvokeMKA = true;

    /* Constant: '<S212>/Calib' */
    /* During 'IMOR_CodeRec_InvkMKA': '<S207>:428' */
    if ((IMOR_ac_B.VeIMOR_b_F1G1Generated) && (KeIMOR_b_F1G1GeneratedOV))
    {
        /* Transition: '<S207>:432' */
        IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_OVCopyF1G2;

        /* Entry 'IMOR_CodeRec_OVCopyF1G2': '<S207>:578' */
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_CopyF1G1;
        IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
        IMOR_ac_B.VeIMOR_b_InvokeMKA = false;

        /* Constant: '<S216>/Calib' */
        IMOR_ac_B.VeIMOR_d_F1 = KeIMOR_d_F1_Ovrd;

        /* Constant: '<S218>/Calib' */
        IMOR_ac_B.VeIMOR_d_G1_Arb = KeIMOR_d_G1_Ovrd;
    }
    else if ((IMOR_ac_B.VeIMOR_b_F1G1Generated) && (!KeIMOR_b_F1G1GeneratedOV))
    {
        /* Transition: '<S207>:583' */
        IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_CopyF1G1;

        /* Entry 'IMOR_CodeRec_CopyF1G1': '<S207>:429' */
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_CopyF1G1;
        IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
        IMOR_ac_B.VeIMOR_b_InvokeMKA = false;
        VeIMOR_y_MiniKrypt_extF1_1 = ExtractByte((WORD_1)IMOR_ac_B.VeIMOR_d_F1,
            (BYTE_1)1U);
        VeIMOR_y_MiniKrypt_extF1_2 = ExtractByte((WORD_1)IMOR_ac_B.VeIMOR_d_F1,
            (BYTE_1)0U);
        VeIMOR_y_MiniKrypt_extG1_1 = ExtractByte((WORD_1)
            IMOR_ac_B.VeIMOR_d_G1_Arb, (BYTE_1)1U);
        VeIMOR_y_MiniKrypt_extG1_2 = ExtractByte((WORD_1)
            IMOR_ac_B.VeIMOR_d_G1_Arb, (BYTE_1)0U);
    }
    else
    {
        IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
    }

    /* End of Constant: '<S212>/Calib' */
}

#endif

/* Function for Chart: '<S199>/Immobilizer_HCP_BCM' */
#if Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_IMOR_CodeRec_NoVal
{
    IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_NoValue;
    VeIMOR_y_MMKey1org21_Temp = 0U;
    VeIMOR_y_MMKey1org22_Temp = 0U;
    VeIMOR_y_MMKey_3_Temp = 0U;
    VeIMOR_y_MMKey_4_Temp = 0U;
    VeIMOR_y_MMKey_5_Temp = 0U;
    VeIMOR_y_MMKey_6_Temp = 0U;
    IMOR_ac_B.VeIMOR_b_BCMRespTENRec_Arb = false;
    IMOR_ac_B.VeIMOR_b_HCPNotProg_Arb = true;

    /* During 'IMOR_CodeRec_NoVal': '<S207>:6' */
    if (IMOR_ac_B.VeIMOR_t_StateTimer_Arb >= KeIMOR_t_RNGDly)
    {
        /* Transition: '<S207>:436' */
        IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_RG;

        /* Entry 'IMOR_CodeRec_RG': '<S207>:427' */
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_RandNumGen;
        IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
        IMOR_ac_B.VeIMOR_y_rnd1Init = (uint8)RandConv((U16)VeIMOR_t_Random1);
        IMOR_ac_B.VeIMOR_y_rnd2Init = (uint8)RandConv((U16)VeIMOR_t_Random2);
        IMOR_ac_B.VeIMOR_y_rnd3Init = (uint8)RandConv((U16)VeIMOR_t_Random3);
        IMOR_ac_B.VeIMOR_y_rnd4Init = (uint8)RandConv((U16)VeIMOR_t_Random4);
        IMOR_ac_B.VeIMOR_d_RandonNumber_Arb = (uint32)Concat_4((BYTE_1)
            IMOR_ac_B.VeIMOR_y_rnd1Init, (BYTE_1)IMOR_ac_B.VeIMOR_y_rnd2Init,
            (BYTE_1)IMOR_ac_B.VeIMOR_y_rnd3Init, (BYTE_1)
            IMOR_ac_B.VeIMOR_y_rnd4Init);

        /* Constant: '<S221>/Calib' incorporates:
         *  Constant: '<S222>/Calib'
         */
        IMOR_ac_B.VeIMOR_d_SecKey_h_Arb = (uint16)Concat_2((BYTE_1)
            KeIMOR_y_MMKey1org21_RecMem, (BYTE_1)KeIMOR_y_MMKey1org22_RecMem);

        /* Constant: '<S223>/Calib' incorporates:
         *  Constant: '<S224>/Calib'
         *  Constant: '<S225>/Calib'
         *  Constant: '<S226>/Calib'
         */
        IMOR_ac_B.VeIMOR_d_SecKey_l_Arb = (uint32)Concat_4((BYTE_1)
            KeIMOR_y_MMKey_3_RecMem, (BYTE_1)KeIMOR_y_MMKey_4_RecMem, (BYTE_1)
            KeIMOR_y_MMKey_5_RecMem, (BYTE_1)KeIMOR_y_MMKey_6_RecMem);
    }
    else
    {
        IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
    }
}

#endif

/* Function for Chart: '<S199>/Immobilizer_HCP_BCM' */
#if Rte_SysCon_Variant_IMOR_1

static boolean IMOR_ac_Call_Check_F1G1Gen_n
{
    /* Graphical Function 'Call_Check_F1G1Gen': '<S207>:486' */
    /* Transition: '<S207>:488' */
    GenerateF1G1((U32)IMOR_ac_B.VeIMOR_d_RandonNumber_Arb, (U16)
                 IMOR_ac_B.VeIMOR_d_SecKey_h_Arb, (U32)
                 IMOR_ac_B.VeIMOR_d_SecKey_l_Arb, (U16 *)(&IMOR_ac_B.VeIMOR_d_F1),
                 (U16 *)(&IMOR_ac_B.VeIMOR_d_G1_Arb));
    return true;
}

#endif

/* Function for Chart: '<S199>/Immobilizer_HCP_BCM' */
#if Rte_SysCon_Variant_IMOR_1

static void IMO_enter_atomic_IMOR_CodeRec_KeyCycInit
{
    /* Entry 'IMOR_CodeRec_KeyCycInit': '<S207>:26' */
    IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_KeyCycInit;
    IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
    IMOR_ac_B.VeIMOR_cnt_IMORRecCnt_Arb = 1.0F;
    IMOR_ac_B.VeIMOR_b_WrtMKeyToE2_Arb = false;
    IMOR_ac_B.VeIMOR_b_WrtCRCmpltToE2_Arb = false;
    IMOR_ac_B.VeIMOR_y_rnd_1_Arb = 0U;
    IMOR_ac_B.VeIMOR_y_rnd_2_Arb = 0U;
    IMOR_ac_B.VeIMOR_y_rnd_3_Arb = 0U;
    IMOR_ac_B.VeIMOR_y_rnd_4_Arb = 0U;
    IMOR_ac_B.VeIMOR_b_AuthValidArb = false;
    VeIMOR_y_MMKey1org21_Temp = 0U;
    VeIMOR_y_MMKey1org22_Temp = 0U;
    VeIMOR_y_MMKey_3_Temp = 0U;
    VeIMOR_y_MMKey_4_Temp = 0U;
    VeIMOR_y_MMKey_5_Temp = 0U;
    VeIMOR_y_MMKey_6_Temp = 0U;
    VeIMOR_e_HCPStatCanC = CeIMOR_e_HCPIS;
    IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = false;
}

#endif

/* Function for Chart: '<S199>/Immobilizer_HCP_BCM' */
#if Rte_SysCon_Variant_IMOR_1

static void IMOR_a_enter_atomic_IMOR_CodeRec_RecNACK
{
    /* Entry 'IMOR_CodeRec_RecNACK': '<S207>:20' */
    IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_RecNACK;
    IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
    IMOR_ac_B.VeIMOR_y_CntrlEncdReq_Arb = KeIMOR_y_CntrlEncdReq81;
    IMOR_ac_B.VeIMOR_y_rnd_1_Arb = 0U;
    IMOR_ac_B.VeIMOR_y_rnd_2_Arb = 0U;
    IMOR_ac_B.VeIMOR_y_rnd_3_Arb = 0U;
    IMOR_ac_B.VeIMOR_y_rnd_4_Arb = 0U;
    IMOR_ac_B.VeIMOR_y_MiniKryptF1_1_Arb = 0U;
    IMOR_ac_B.VeIMOR_y_MiniKryptF1_2_Arb = 0U;
    IMOR_ac_B.VeIMOR_b_SKIMNotProg = true;
    VeIMOR_e_HCPStatCanC = CeIMOR_e_HCPKILL;
    IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = true;
}

#endif

/* Function for Chart: '<S199>/Immobilizer_HCP_BCM' */
#if Rte_SysCon_Variant_IMOR_1

static boolean IMOR_ac_CheckMMKeyIntegrity
{
    boolean LeIMOR_b_MMKeyNotFFs;

    /* Graphical Function 'CheckMMKeyIntegrity': '<S207>:721' */
    /* Transition: '<S207>:723' */
    if (KeIMOR_b_Use_Spec30Check)
    {
        /* Transition: '<S207>:727' */
        /* Transition: '<S207>:728' */
        LeIMOR_b_MMKeyNotFFs = ((((((((sint32)
            IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey1org2) != ((sint32)0xFF))
            || (((sint32)IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey1or_i) !=
                ((sint32)0xFF))) || (((sint32)
            IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey_3_Re) != ((sint32)0xFF)))
            || (((sint32)IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey_4_Re) !=
                ((sint32)0xFF))) || (((sint32)
            IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey_5_Re) != ((sint32)0xFF)))
                                || (((sint32)
            IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey_6_Re) != ((sint32)0xFF)));

        /* Transition: '<S207>:739' */
    }
    else
    {
        /* Transition: '<S207>:729' */
        LeIMOR_b_MMKeyNotFFs = true;
    }

    /* Transition: '<S207>:731' */
    return ((((((((sint32)IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey1org2) !=
                 0) || (((sint32)
                         IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey1or_i) !=
                        0)) || (((sint32)
                 IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey_3_Re) != 0)) ||
              (((sint32)IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey_4_Re) != 0))
             || (((sint32)IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey_5_Re) !=
                 0)) || (((sint32)
                          IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey_6_Re) !=
                         0)) && LeIMOR_b_MMKeyNotFFs;
}

#endif

/* Function for Chart: '<S199>/Immobilizer_HCP_BCM' */
#if Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_IMOR_CodeRec_RecAck86Sent(const uint8
    *TmpSignalConversionAtVeIMOR_y_CntrlEncdR)
{
    boolean guard1 = false;
    IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_Ack86Sent;
    IMOR_ac_B.VeIMOR_y_CntrlEncdReq_Arb = KeIMOR_y_CntrlEncdReq86;

    /* During 'IMOR_CodeRec_RecAck86Sent': '<S207>:13' */
    if ((((((((((*TmpSignalConversionAtVeIMOR_y_CntrlEncdR) !=
                KeIMOR_y_CntrlEncdResp00) &&
               ((*TmpSignalConversionAtVeIMOR_y_CntrlEncdR) ==
                KeIMOR_y_CntrlEncdRespAA)) && (VeIMOR_b_CntrlEncdResFlag)) &&
             (EeIMOR_b_MMKey1org21Flag)) && (EeIMOR_b_MMKey1org22Flag)) &&
            (EeIMOR_b_MMKey_3Flag)) && (EeIMOR_b_MMKey_4Flag)) &&
            (EeIMOR_b_MMKey_5Flag)) && (EeIMOR_b_MMKey_6Flag))
    {
        /* Transition: '<S207>:55' */
        IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_RecCmpRsp2Rcvd;

        /* Entry 'IMOR_CodeRec_RecCmpRsp2Rcvd': '<S207>:14' */
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_CmpRsp2Rcvd;
        IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
        VeIMOR_b_CntrlEncdResFlag = false;
        EeIMOR_b_MMKey1org21Flag = false;
        EeIMOR_b_MMKey1org22Flag = false;
        EeIMOR_b_MMKey_3Flag = false;
        EeIMOR_b_MMKey_4Flag = false;
        EeIMOR_b_MMKey_5Flag = false;
        EeIMOR_b_MMKey_6Flag = false;
        IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = false;
        IMOR_ac_DW.LeIMOR_b_MMKeyOK = IMOR_ac_CheckMMKeyIntegrity();
        VeIMOR_e_HCPStatCanC = CeIMOR_e_HCPIS;
    }
    else
    {
        guard1 = false;
        if (IMOR_ac_B.VeIMOR_t_StateTimer_Arb >= KeIMOR_t_MKeyRcvDelay)
        {
            /* Transition: '<S207>:69' */
            /* Transition: '<S207>:71' */
            /* Transition: '<S207>:72' */
            /* Transition: '<S207>:129' */
            /* Transition: '<S207>:70' */
            if (!IMOR_ac_B.VeIMOR_b_BCMRespTENRec_Arb)
            {
                /* Transition: '<S207>:128' */
                IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_RecCntInc;

                /* Entry 'IMOR_CodeRec_RecCntInc': '<S207>:19' */
                IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_RecCntInc;
                IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
                IMOR_ac_B.VeIMOR_cnt_IMORRecCnt_Arb++;
                IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = false;
            }
            else if (((IMOR_ac_B.VeIMOR_b_BCMRespTENRec_Arb) ||
                      (IMOR_ac_B.VeIMOR_b_BCMFailedG1G2_Arb)) ||
                     (IMOR_ac_B.VeIMOR_b_BCMNoSecondRespRec_Arb))
            {
                /* Transition: '<S207>:424' */
                IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_RecNACK;
                IMOR_a_enter_atomic_IMOR_CodeRec_RecNACK();
            }
            else
            {
                guard1 = true;
            }
        }
        else
        {
            guard1 = true;
        }

        if (guard1)
        {
            if (VeIMOR_b_KeyInRunNoPSA)
            {
                /* Transition: '<S207>:133' */
                /* Transition: '<S207>:139' */
                /* Transition: '<S207>:138' */
                /* Transition: '<S207>:137' */
                IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_KeyCycInit;
                IMO_enter_atomic_IMOR_CodeRec_KeyCycInit();
            }
            else
            {
                IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
                IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = false;
            }
        }
    }
}

#endif

/* Function for Chart: '<S199>/Immobilizer_HCP_BCM' */
#if Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_IMOR_CodeRec_RecAck86SentAftr99(const uint8
    *TmpSignalConversionAtVeIMOR_y_CntrlEncdR)
{
    boolean guard1 = false;
    IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_Ack86SentAftr99;
    IMOR_ac_B.VeIMOR_y_CntrlEncdReq_Arb = KeIMOR_y_CntrlEncdReq86;

    /* During 'IMOR_CodeRec_RecAck86SentAftr99': '<S207>:22' */
    guard1 = false;
    if ((*TmpSignalConversionAtVeIMOR_y_CntrlEncdR) != KeIMOR_y_CntrlEncdResp99)
    {
        /* Transition: '<S207>:65' */
        IMOR_ac_B.VeIMOR_b_BCMNoSecondRespRec_Arb = true;

        /* Transition: '<S207>:68' */
        /* Transition: '<S207>:70' */
        if (!IMOR_ac_B.VeIMOR_b_BCMRespTENRec_Arb)
        {
            /* Transition: '<S207>:128' */
            IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_RecCntInc;

            /* Entry 'IMOR_CodeRec_RecCntInc': '<S207>:19' */
            IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_RecCntInc;
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
            IMOR_ac_B.VeIMOR_cnt_IMORRecCnt_Arb++;
            IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = false;
        }
        else if (((IMOR_ac_B.VeIMOR_b_BCMRespTENRec_Arb) ||
                  (IMOR_ac_B.VeIMOR_b_BCMFailedG1G2_Arb)) ||
                 (IMOR_ac_B.VeIMOR_b_BCMNoSecondRespRec_Arb))
        {
            /* Transition: '<S207>:424' */
            IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_RecNACK;
            IMOR_a_enter_atomic_IMOR_CodeRec_RecNACK();
        }
        else
        {
            guard1 = true;
        }
    }
    else
    {
        guard1 = true;
    }

    if (guard1)
    {
        if (((*TmpSignalConversionAtVeIMOR_y_CntrlEncdR) ==
                KeIMOR_y_CntrlEncdResp99) && ((IMOR_ac_B.VeIMOR_t_StateTimer_Arb
              >= KeIMOR_t_WaitFor99Dly) || (VeIMOR_b_CntrlEncdResFlag)))
        {
            /* Transition: '<S207>:64' */
            IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_Rsp99G1G2Comp2;

            /* Entry 'IMOR_CodeRec_Rsp99G1G2Comp2': '<S207>:453' */
            IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_Rsp99G1G2Comp2;
            VeIMOR_b_CntrlEncdResFlag = false;
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
            IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = false;
        }
        else if (VeIMOR_b_KeyInRunNoPSA)
        {
            /* Transition: '<S207>:144' */
            /* Transition: '<S207>:146' */
            /* Transition: '<S207>:460' */
            /* Transition: '<S207>:461' */
            /* Transition: '<S207>:641' */
            /* Transition: '<S207>:610' */
            /* Transition: '<S207>:609' */
            /* Transition: '<S207>:142' */
            /* Transition: '<S207>:141' */
            /* Transition: '<S207>:140' */
            /* Transition: '<S207>:139' */
            /* Transition: '<S207>:138' */
            /* Transition: '<S207>:137' */
            IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_KeyCycInit;
            IMO_enter_atomic_IMOR_CodeRec_KeyCycInit();
        }
        else
        {
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
            IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = false;
        }
    }
}

#endif

/* Function for Chart: '<S199>/Immobilizer_HCP_BCM' */
#if Rte_SysCon_Variant_IMOR_1

static boolean IMOR_ac_Call_Write_2_EEPROM_Key
{
    boolean LeIMOR_b_Write_2_EEPROM_Key;

    /* Graphical Function 'Call_Write_2_EEPROM_Key': '<S207>:668' */
    /* Transition: '<S207>:670' */
    /* ProgRntmeImmobilizerMMKey(&(VaIMOR_y_MMKeyStr_EE[0]), 7); */
    LeIMOR_b_Write_2_EEPROM_Key = true;

    /* Outputs for Function Call SubSystem: '<S199>/Function-Call Subsystem' */
    /* Outport: '<Root>/AaIMOR_y_MMKeyStr_EE_Strimm_out' incorporates:
     *  Inport: '<S203>/VaIMOR_y_MMKeyStr_EE'
     */
    /* Event: '<S207>:753' */
    Rte_Write_AaIMOR_y_MMKeyStr_EE_AaIMOR_y_MMKeyStr_EE
        ((&(VaIMOR_y_MMKeyStr_EE[0])));

    /* End of Outputs for SubSystem: '<S199>/Function-Call Subsystem' */
    return LeIMOR_b_Write_2_EEPROM_Key;
}

#endif

/* Function for Chart: '<S199>/Immobilizer_HCP_BCM' */
#if Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_IMOR_CodeRec_RecAck87Sent
{
    IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_RecAck87Sent;
    IMOR_ac_B.VeIMOR_y_CntrlEncdReq_Arb = KeIMOR_y_CntrlEncdReq87;

    /* During 'IMOR_CodeRec_RecAck87Sent': '<S207>:15' */
    if (IMOR_ac_B.VeIMOR_t_StateTimer_Arb >= KeIMOR_t_MKeyStrDly)
    {
        /* Transition: '<S207>:57' */
        /* Exit 'IMOR_CodeRec_RecAck87Sent': '<S207>:15' */
        IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_RecMKeyStr;

        /* Entry 'IMOR_CodeRec_RecMKeyStr': '<S207>:515' */
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_MKeyStr;
        IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
        EeIMOR_y_MMKey1org21_Mem =
            IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey1org2;
        EeIMOR_y_MMKey1org22_Mem =
            IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey1or_i;
        EeIMOR_y_MMKey_3_Mem =
            IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey_3_Re;
        EeIMOR_y_MMKey_4_Mem =
            IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey_4_Re;
        EeIMOR_y_MMKey_5_Mem =
            IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey_5_Re;
        EeIMOR_y_MMKey_6_Mem =
            IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey_6_Re;
        VaIMOR_y_MMKeyStr_EE[0] =
            IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey1org2;
        VaIMOR_y_MMKeyStr_EE[1] =
            IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey1or_i;
        VaIMOR_y_MMKeyStr_EE[2] =
            IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey_3_Re;
        VaIMOR_y_MMKeyStr_EE[3] =
            IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey_4_Re;
        VaIMOR_y_MMKeyStr_EE[4] =
            IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey_5_Re;
        VaIMOR_y_MMKeyStr_EE[5] =
            IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey_6_Re;

        /* Constant: '<S199>/Constant Value1' */
        VaIMOR_y_MMKeyStr_EE[6] = 1U;
        VeIMOR_b_Write_2_EEPROM_Key = IMOR_ac_Call_Write_2_EEPROM_Key();
        IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = false;
        EeIMOR_b_MKeyStrToE2 = true;
    }
    else if (VeIMOR_b_KeyInRunNoPSA)
    {
        /* Transition: '<S207>:135' */
        /* Transition: '<S207>:141' */
        /* Transition: '<S207>:140' */
        /* Transition: '<S207>:139' */
        /* Transition: '<S207>:138' */
        /* Transition: '<S207>:137' */
        /* Exit 'IMOR_CodeRec_RecAck87Sent': '<S207>:15' */
        IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_KeyCycInit;
        IMO_enter_atomic_IMOR_CodeRec_KeyCycInit();
    }
    else
    {
        IMOR_ac_B.VeIMOR_b_WrtMKeyToE2_Arb = true;
        VeIMOR_e_HCPStatCanC = CeIMOR_e_HCPIS;
        IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
        IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = false;
    }
}

#endif

/* Function for Chart: '<S199>/Immobilizer_HCP_BCM' */
#if Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_IMOR_CodeRec_RecCmpRsp2Rcvd
{
    IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_CmpRsp2Rcvd;

    /* During 'IMOR_CodeRec_RecCmpRsp2Rcvd': '<S207>:14' */
    if (IMOR_ac_DW.LeIMOR_b_MMKeyOK)
    {
        /* Transition: '<S207>:56' */
        IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_RecAck87Sent;

        /* Entry 'IMOR_CodeRec_RecAck87Sent': '<S207>:15' */
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_RecAck87Sent;
        IMOR_ac_B.VeIMOR_y_CntrlEncdReq_Arb = KeIMOR_y_CntrlEncdReq87;
        IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
        IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = true;
    }
    else if ((IMOR_ac_B.VeIMOR_t_StateTimer_Arb >= KeIMOR_t_Rsp2CmpDly) &&
             (!IMOR_ac_DW.LeIMOR_b_MMKeyOK))
    {
        /* Transition: '<S207>:108' */
        IMOR_ac_B.VeIMOR_b_BCMNoPRAorMiniKeyRec_Arb = true;

        /* Transition: '<S207>:471' */
        /* Transition: '<S207>:109' */
        /* Transition: '<S207>:78' */
        IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_RecNACK;
        IMOR_a_enter_atomic_IMOR_CodeRec_RecNACK();
    }
    else if (VeIMOR_b_KeyInRunNoPSA)
    {
        /* Transition: '<S207>:134' */
        /* Transition: '<S207>:140' */
        /* Transition: '<S207>:139' */
        /* Transition: '<S207>:138' */
        /* Transition: '<S207>:137' */
        IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_KeyCycInit;
        IMO_enter_atomic_IMOR_CodeRec_KeyCycInit();
    }
    else
    {
        IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
    }
}

#endif

/* Function for Chart: '<S199>/Immobilizer_HCP_BCM' */
#if Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_IMOR_CodeRec_RecCpyRspRcvd
{
    boolean guard1 = false;
    IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_CpyRspRcvd;

    /* During 'IMOR_CodeRec_RecCpyRspRcvd': '<S207>:12' */
    guard1 = false;
    if (((VeIMOR_y_MiniKrypt_extG1_1 !=
            IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey1org2) ||
            (VeIMOR_y_MiniKrypt_extG1_2 !=
             IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey1or_i)) ||
            (IMOR_ac_B.VeIMOR_t_StateTimer_Arb >= KeIMOR_t_G2CmpDly))
    {
        /* Transition: '<S207>:465' */
        IMOR_ac_B.VeIMOR_b_BCMFailedG1G2_Arb = true;

        /* Transition: '<S207>:468' */
        /* Transition: '<S207>:71' */
        /* Transition: '<S207>:72' */
        /* Transition: '<S207>:129' */
        /* Transition: '<S207>:70' */
        if (!IMOR_ac_B.VeIMOR_b_BCMRespTENRec_Arb)
        {
            /* Transition: '<S207>:128' */
            /* Exit 'IMOR_CodeRec_RecCpyRspRcvd': '<S207>:12' */
            IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_RecCntInc;

            /* Entry 'IMOR_CodeRec_RecCntInc': '<S207>:19' */
            IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_RecCntInc;
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
            IMOR_ac_B.VeIMOR_cnt_IMORRecCnt_Arb++;
            IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = false;
        }
        else if (((IMOR_ac_B.VeIMOR_b_BCMRespTENRec_Arb) ||
                  (IMOR_ac_B.VeIMOR_b_BCMFailedG1G2_Arb)) ||
                 (IMOR_ac_B.VeIMOR_b_BCMNoSecondRespRec_Arb))
        {
            /* Transition: '<S207>:424' */
            /* Exit 'IMOR_CodeRec_RecCpyRspRcvd': '<S207>:12' */
            IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_RecNACK;
            IMOR_a_enter_atomic_IMOR_CodeRec_RecNACK();
        }
        else
        {
            guard1 = true;
        }
    }
    else
    {
        guard1 = true;
    }

    if (guard1)
    {
        if (((VeIMOR_y_MiniKrypt_extG1_1 ==
                IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey1org2) &&
                (VeIMOR_y_MiniKrypt_extG1_2 ==
                 IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey1or_i)) &&
                (IMOR_ac_B.VeIMOR_t_StateTimer_Arb >= KeIMOR_t_Rsp86SndDly))
        {
            /* Transition: '<S207>:54' */
            /* Exit 'IMOR_CodeRec_RecCpyRspRcvd': '<S207>:12' */
            IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_RecAck86Sent;

            /* Entry 'IMOR_CodeRec_RecAck86Sent': '<S207>:13' */
            IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_Ack86Sent;
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
            IMOR_ac_B.VeIMOR_y_CntrlEncdReq_Arb = KeIMOR_y_CntrlEncdReq86;
            IMOR_ac_B.VeIMOR_y_rnd_1_Arb = 0U;
            IMOR_ac_B.VeIMOR_y_rnd_2_Arb = 0U;
            IMOR_ac_B.VeIMOR_y_rnd_3_Arb = 0U;
            IMOR_ac_B.VeIMOR_y_rnd_4_Arb = 0U;
            IMOR_ac_B.VeIMOR_y_MiniKryptF1_1_Arb = 0U;
            IMOR_ac_B.VeIMOR_y_MiniKryptF1_2_Arb = 0U;
            VeIMOR_b_CntrlEncdResFlag = false;
            IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = true;
        }
        else if (VeIMOR_b_KeyInRunNoPSA)
        {
            /* Transition: '<S207>:132' */
            /* Transition: '<S207>:138' */
            /* Transition: '<S207>:137' */
            /* Exit 'IMOR_CodeRec_RecCpyRspRcvd': '<S207>:12' */
            IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_KeyCycInit;
            IMO_enter_atomic_IMOR_CodeRec_KeyCycInit();
        }
        else
        {
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
        }
    }
}

#endif

/* Function for Chart: '<S199>/Immobilizer_HCP_BCM' */
#if Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_IMOR_CodeRec_RecMKeyStrVrfy(const TeIMOR_e_EEPROG_STATUS
    *Switch)
{
    boolean guard1 = false;
    boolean guard2 = false;
    boolean tmp;
    IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_MKeyStrVrfy;

    /* Constant: '<S208>/Calib' incorporates:
     *  Switch: '<S228>/Switch'
     */
    /* During 'IMOR_CodeRec_RecMKeyStrVrfy': '<S207>:16' */
    tmp = !KeIMOR_b_BSWMem_Resp_Slct;
    if (((KeIMOR_b_BSWMem_Resp_Slct) && (((uint32)(*Switch)) ==
            CeIMOR_e_EEPROG_SUCCESS)) ||
            (((((((IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey1org2 ==
                   EeIMOR_y_MMKey1org21_Mem) &&
                  (IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey1or_i ==
                   EeIMOR_y_MMKey1org22_Mem)) &&
                 (IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey_3_Re ==
                  EeIMOR_y_MMKey_3_Mem)) &&
                (IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey_4_Re ==
                 EeIMOR_y_MMKey_4_Mem)) &&
               (IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey_5_Re ==
                EeIMOR_y_MMKey_5_Mem)) &&
              (IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey_6_Re ==
               EeIMOR_y_MMKey_6_Mem)) && tmp))
    {
        /* Transition: '<S207>:677' */
        /* Transition: '<S207>:58' */
        IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_RecEOT;

        /* Entry 'IMOR_CodeRec_RecEOT': '<S207>:17' */
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_RecEOT;
        IMOR_ac_B.VeIMOR_y_CntrlEncdReq_Arb = KeIMOR_y_CntrlEncdReq84;
        IMOR_ac_B.VeIMOR_b_WrtCRCmpltToE2_Arb = true;
        IMOR_ac_B.VeIMOR_b_SKIMNotProg = false;
        IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
        VeIMOR_e_HCPStatCanC = CeIMOR_e_HCPRUN;
        IMOR_ac_B.VeIMOR_b_AuthValidArb = true;
        IMOR_ac_B.VeIMOR_b_HCPNotProg_Arb = false;
        EeIMOR_b_CodeRecCmplt_Mem = true;
        IMOR_ac_B.VeIMOR_y_rnd_1_Arb = 0U;
        IMOR_ac_B.VeIMOR_y_rnd_2_Arb = 0U;
        IMOR_ac_B.VeIMOR_y_rnd_3_Arb = 0U;
        IMOR_ac_B.VeIMOR_y_rnd_4_Arb = 0U;
        IMOR_ac_B.VeIMOR_y_MiniKryptF1_1_Arb = 0U;
        IMOR_ac_B.VeIMOR_y_MiniKryptF1_2_Arb = 0U;
        IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = true;
    }
    else if (VeIMOR_b_KeyInRunNoPSA)
    {
        /* Transition: '<S207>:136' */
        /* Transition: '<S207>:142' */
        /* Transition: '<S207>:141' */
        /* Transition: '<S207>:140' */
        /* Transition: '<S207>:139' */
        /* Transition: '<S207>:138' */
        /* Transition: '<S207>:137' */
        IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_KeyCycInit;
        IMO_enter_atomic_IMOR_CodeRec_KeyCycInit();
    }
    else
    {
        guard1 = false;
        guard2 = false;
        if ((IMOR_ac_B.VeIMOR_t_StateTimer_Arb >= KeIMOR_t_StrVrfyDly) && tmp)
        {
            /* Transition: '<S207>:680' */
            /* Transition: '<S207>:75' */
            VeIMOR_e_HCPStatCanC = CeIMOR_e_HCPKILL;
            IMOR_ac_B.VeIMOR_b_AuthValidArb = false;
            IMOR_ac_B.VeIMOR_b_BCMMiniKeyNotStoredRec_Arb = true;
            IMOR_ac_B.VeIMOR_b_SKIMNotProg = true;

            /* Transition: '<S207>:79' */
            /* Transition: '<S207>:80' */
            if (VeIMOR_b_ValidKeyCycle)
            {
                /* Transition: '<S207>:110' */
                IMOR_ac_B.VeIMOR_b_WrtCRCmpltToE2_Arb = false;
                guard1 = true;
            }
            else
            {
                guard2 = true;
            }
        }
        else
        {
            guard2 = true;
        }

        if (guard2)
        {
            if ((((uint32)(*Switch)) == CeIMOR_e_EEPROG_COMP_FAILED) &&
                    (KeIMOR_b_BSWMem_Resp_Slct))
            {
                /* Transition: '<S207>:681' */
                /* Transition: '<S207>:75' */
                VeIMOR_e_HCPStatCanC = CeIMOR_e_HCPKILL;
                IMOR_ac_B.VeIMOR_b_AuthValidArb = false;
                IMOR_ac_B.VeIMOR_b_BCMMiniKeyNotStoredRec_Arb = true;
                IMOR_ac_B.VeIMOR_b_SKIMNotProg = true;

                /* Transition: '<S207>:79' */
                /* Transition: '<S207>:80' */
                if (VeIMOR_b_ValidKeyCycle)
                {
                    /* Transition: '<S207>:110' */
                    IMOR_ac_B.VeIMOR_b_WrtCRCmpltToE2_Arb = false;
                    guard1 = true;
                }
                else
                {
                    IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
                }
            }
            else
            {
                IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
            }
        }

        if (guard1)
        {
            /* Transition: '<S207>:126' */
            /* Transition: '<S207>:127' */
            /* Transition: '<S207>:107' */
            /* Transition: '<S207>:652' */
            IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_NO_ACTIVE_CHILD;
            IMOR_ac_DW.is_c1_IMOR_ac = IMOR_ac_IN_IMOR_ImmobEnbld;

            /* Entry 'IMOR_ImmobEnbld': '<S207>:5' */
            IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_ImmobEnbld;
            IMOR_ac_B.VeIMOR_b_HCPNotProg_Arb = true;
        }
    }

    /* End of Constant: '<S208>/Calib' */
}

#endif

/* Function for Chart: '<S199>/Immobilizer_HCP_BCM' */
#if Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_IMOR_CodeRec_RecRspRcvd(const uint8
    *TmpSignalConversionAtVeIMOR_y_CntrlEncdR)
{
    IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_RecRspRcvd;

    /* During 'IMOR_CodeRec_RecRspRcvd': '<S207>:8' */
    if (((*TmpSignalConversionAtVeIMOR_y_CntrlEncdR) == KeIMOR_y_CntrlEncdRespAA)
        && (VeIMOR_b_CntrlEncdResFlag))
    {
        /* Transition: '<S207>:51' */
        /* Transition: '<S207>:81' */
        IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_RecRspRcvdAA;

        /* Entry 'IMOR_CodeRec_RecRspRcvdAA': '<S207>:10' */
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_RspRcvdAA;
        VeIMOR_b_CBCRes_Rcvd = true;
        IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
        VeIMOR_e_HCPStatCanC = CeIMOR_e_HCPIS;
    }
    else if (((*TmpSignalConversionAtVeIMOR_y_CntrlEncdR) ==
              KeIMOR_y_CntrlEncdResp99) && (VeIMOR_b_CntrlEncdResFlag))
    {
        /* Transition: '<S207>:50' */
        IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_RecRspRcvd99;

        /* Entry 'IMOR_CodeRec_RecRspRcvd99': '<S207>:9' */
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_RspRcvd99;
        VeIMOR_b_CBCRes_Rcvd = true;
        IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
        VeIMOR_e_HCPStatCanC = CeIMOR_e_HCPIS;
    }
    else if (((*TmpSignalConversionAtVeIMOR_y_CntrlEncdR) ==
              KeIMOR_y_CntrlEncdResp10) && (VeIMOR_b_CntrlEncdResFlag))
    {
        /* Transition: '<S207>:52' */
        IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_RecRspRcvd10;

        /* Entry 'IMOR_CodeRec_RecRspRcvd10': '<S207>:11' */
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_RspRcvd10;
        VeIMOR_b_CBCRes_Rcvd = true;
        VeIMOR_b_CntrlEncdResFlag = false;
        IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
        IMOR_ac_B.VeIMOR_b_BCMRespTENRec_Arb = true;
    }
    else if (IMOR_ac_B.VeIMOR_t_StateTimer_Arb >= KeIMOR_t_CANWaitDly_Rec)
    {
        /* Transition: '<S207>:60' */
        VeIMOR_b_CBCRes_Rcvd = false;
        IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = false;
        if (!IMOR_ac_B.VeIMOR_b_BCMRespTENRec_Arb)
        {
            /* Transition: '<S207>:128' */
            IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_RecCntInc;

            /* Entry 'IMOR_CodeRec_RecCntInc': '<S207>:19' */
            IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_RecCntInc;
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
            IMOR_ac_B.VeIMOR_cnt_IMORRecCnt_Arb++;
            IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = false;
        }
        else if (((IMOR_ac_B.VeIMOR_b_BCMRespTENRec_Arb) ||
                  (IMOR_ac_B.VeIMOR_b_BCMFailedG1G2_Arb)) ||
                 (IMOR_ac_B.VeIMOR_b_BCMNoSecondRespRec_Arb))
        {
            /* Transition: '<S207>:424' */
            IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_RecNACK;
            IMOR_a_enter_atomic_IMOR_CodeRec_RecNACK();
        }
        else
        {
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
        }
    }
    else
    {
        IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
    }
}

#endif

/* Function for Chart: '<S199>/Immobilizer_HCP_BCM' */
#if Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_IMOR_CodeRec_RecRspRcvd99
{
    IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_RspRcvd99;

    /* During 'IMOR_CodeRec_RecRspRcvd99': '<S207>:9' */
    if ((EeIMOR_b_MMKey1org21Flag) && (EeIMOR_b_MMKey1org22Flag))
    {
        /* Transition: '<S207>:63' */
        /* Exit 'IMOR_CodeRec_RecRspRcvd99': '<S207>:9' */
        IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_Rsp99G1G2Comp;

        /* Entry 'IMOR_CodeRec_Rsp99G1G2Comp': '<S207>:447' */
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_Rsp99G1G2Comp;
        EeIMOR_b_MMKey1org21Flag = false;
        EeIMOR_b_MMKey1org22Flag = false;
        IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
        VeIMOR_e_HCPStatCanC = CeIMOR_e_HCPIS;
        EeIMOR_y_MMKey1org21_Mem =
            IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey1org2;
        EeIMOR_y_MMKey1org22_Mem =
            IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey1or_i;
    }
    else if (VeIMOR_b_KeyInRunNoPSA)
    {
        /* Transition: '<S207>:143' */
        /* Transition: '<S207>:146' */
        /* Transition: '<S207>:460' */
        /* Transition: '<S207>:461' */
        /* Transition: '<S207>:641' */
        /* Transition: '<S207>:610' */
        /* Transition: '<S207>:609' */
        /* Transition: '<S207>:142' */
        /* Transition: '<S207>:141' */
        /* Transition: '<S207>:140' */
        /* Transition: '<S207>:139' */
        /* Transition: '<S207>:138' */
        /* Transition: '<S207>:137' */
        /* Exit 'IMOR_CodeRec_RecRspRcvd99': '<S207>:9' */
        IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_KeyCycInit;
        IMO_enter_atomic_IMOR_CodeRec_KeyCycInit();
    }
    else
    {
        IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
    }
}

#endif

/* Function for Chart: '<S199>/Immobilizer_HCP_BCM' */
#if Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_IMOR_CodeRec_RecRspRcvdAA
{
    IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_RspRcvdAA;

    /* During 'IMOR_CodeRec_RecRspRcvdAA': '<S207>:10' */
    if ((((((EeIMOR_b_MMKey1org21Flag) || (EeIMOR_b_MMKey1org22Flag)) ||
            (EeIMOR_b_MMKey_3Flag)) || (EeIMOR_b_MMKey_4Flag)) ||
            (EeIMOR_b_MMKey_5Flag)) || (EeIMOR_b_MMKey_6Flag))
    {
        /* Transition: '<S207>:53' */
        IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_RecCpyRspRcvd;

        /* Entry 'IMOR_CodeRec_RecCpyRspRcvd': '<S207>:12' */
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_CpyRspRcvd;
        IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
        EeIMOR_b_MMKey1org21Flag = false;
        EeIMOR_b_MMKey1org22Flag = false;
        EeIMOR_b_MMKey_3Flag = false;
        EeIMOR_b_MMKey_4Flag = false;
        EeIMOR_b_MMKey_5Flag = false;
        EeIMOR_b_MMKey_6Flag = false;
        EeIMOR_y_MMKey1org21_Mem =
            IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey1org2;
        EeIMOR_y_MMKey1org22_Mem =
            IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey1or_i;
        EeIMOR_y_MMKey_3_Mem =
            IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey_3_Re;
        EeIMOR_y_MMKey_4_Mem =
            IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey_4_Re;
        EeIMOR_y_MMKey_5_Mem =
            IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey_5_Re;
        EeIMOR_y_MMKey_6_Mem =
            IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey_6_Re;
    }
    else if (VeIMOR_b_KeyInRunNoPSA)
    {
        /* Transition: '<S207>:131' */
        /* Transition: '<S207>:137' */
        IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_KeyCycInit;
        IMO_enter_atomic_IMOR_CodeRec_KeyCycInit();
    }
    else
    {
        IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
    }
}

#endif

/* Function for Chart: '<S199>/Immobilizer_HCP_BCM' */
#if Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_IMOR_CodeRec_Rsp99G1G2Comp
{
    IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_Rsp99G1G2Comp;

    /* During 'IMOR_CodeRec_Rsp99G1G2Comp': '<S207>:447' */
    if (VeIMOR_b_KeyInRunNoPSA)
    {
        /* Transition: '<S207>:449' */
        /* Transition: '<S207>:146' */
        /* Transition: '<S207>:460' */
        /* Transition: '<S207>:461' */
        /* Transition: '<S207>:641' */
        /* Transition: '<S207>:610' */
        /* Transition: '<S207>:609' */
        /* Transition: '<S207>:142' */
        /* Transition: '<S207>:141' */
        /* Transition: '<S207>:140' */
        /* Transition: '<S207>:139' */
        /* Transition: '<S207>:138' */
        /* Transition: '<S207>:137' */
        /* Exit 'IMOR_CodeRec_Rsp99G1G2Comp': '<S207>:447' */
        IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_KeyCycInit;
        IMO_enter_atomic_IMOR_CodeRec_KeyCycInit();
    }
    else if (((VeIMOR_y_MiniKrypt_extG1_1 ==
               IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey1org2) &&
              (VeIMOR_y_MiniKrypt_extG1_2 ==
               IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey1or_i)) &&
             (IMOR_ac_B.VeIMOR_t_StateTimer_Arb < KeIMOR_t_G2CmpDly))
    {
        /* Transition: '<S207>:448' */
        /* Exit 'IMOR_CodeRec_Rsp99G1G2Comp': '<S207>:447' */
        IMOR_ac_DW.is_IMOR_CodeRec = IMOR__IN_IMOR_CodeRec_RecAck86SentAftr99;

        /* Entry 'IMOR_CodeRec_RecAck86SentAftr99': '<S207>:22' */
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_Ack86SentAftr99;
        IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
        IMOR_ac_B.VeIMOR_y_CntrlEncdReq_Arb = KeIMOR_y_CntrlEncdReq86;
        IMOR_ac_B.VeIMOR_y_rnd_1_Arb = 0U;
        IMOR_ac_B.VeIMOR_y_rnd_2_Arb = 0U;
        IMOR_ac_B.VeIMOR_y_rnd_3_Arb = 0U;
        IMOR_ac_B.VeIMOR_y_rnd_4_Arb = 0U;
        IMOR_ac_B.VeIMOR_y_MiniKryptF1_1_Arb = 0U;
        IMOR_ac_B.VeIMOR_y_MiniKryptF1_2_Arb = 0U;
        VeIMOR_b_CntrlEncdResFlag = false;
        VeIMOR_e_HCPStatCanC = CeIMOR_e_HCPIS;
        IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = true;
    }
    else if (((VeIMOR_y_MiniKrypt_extG1_1 !=
               IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey1org2) ||
              (VeIMOR_y_MiniKrypt_extG1_2 !=
               IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey1or_i)) ||
             (IMOR_ac_B.VeIMOR_t_StateTimer_Arb >= KeIMOR_t_G2CmpDly))
    {
        /* Transition: '<S207>:450' */
        IMOR_ac_B.VeIMOR_b_BCMFailedG1G2_Arb = true;

        /* Transition: '<S207>:68' */
        /* Transition: '<S207>:70' */
        if (!IMOR_ac_B.VeIMOR_b_BCMRespTENRec_Arb)
        {
            /* Transition: '<S207>:128' */
            /* Exit 'IMOR_CodeRec_Rsp99G1G2Comp': '<S207>:447' */
            IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_RecCntInc;

            /* Entry 'IMOR_CodeRec_RecCntInc': '<S207>:19' */
            IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_RecCntInc;
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
            IMOR_ac_B.VeIMOR_cnt_IMORRecCnt_Arb++;
            IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = false;
        }
        else if (((IMOR_ac_B.VeIMOR_b_BCMRespTENRec_Arb) ||
                  (IMOR_ac_B.VeIMOR_b_BCMFailedG1G2_Arb)) ||
                 (IMOR_ac_B.VeIMOR_b_BCMNoSecondRespRec_Arb))
        {
            /* Transition: '<S207>:424' */
            /* Exit 'IMOR_CodeRec_Rsp99G1G2Comp': '<S207>:447' */
            IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_RecNACK;
            IMOR_a_enter_atomic_IMOR_CodeRec_RecNACK();
        }
        else
        {
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
        }
    }
    else
    {
        IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
    }
}

#endif

/* Function for Chart: '<S199>/Immobilizer_HCP_BCM' */
#if Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_IMOR_CodeRec_Rsp99G1G2Comp2
{
    boolean guard1 = false;
    IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_Rsp99G1G2Comp2;

    /* During 'IMOR_CodeRec_Rsp99G1G2Comp2': '<S207>:453' */
    guard1 = false;
    if (((VeIMOR_y_MiniKrypt_extG1_1 !=
            IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey1org2) ||
            (VeIMOR_y_MiniKrypt_extG1_2 !=
             IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey1or_i)) ||
            (IMOR_ac_B.VeIMOR_t_StateTimer_Arb >= KeIMOR_t_G2CmpDly))
    {
        /* Transition: '<S207>:455' */
        IMOR_ac_B.VeIMOR_b_BCMFailedG1G2_Arb = true;

        /* Transition: '<S207>:129' */
        /* Transition: '<S207>:70' */
        if (!IMOR_ac_B.VeIMOR_b_BCMRespTENRec_Arb)
        {
            /* Transition: '<S207>:128' */
            /* Exit 'IMOR_CodeRec_Rsp99G1G2Comp2': '<S207>:453' */
            IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_RecCntInc;

            /* Entry 'IMOR_CodeRec_RecCntInc': '<S207>:19' */
            IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_RecCntInc;
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
            IMOR_ac_B.VeIMOR_cnt_IMORRecCnt_Arb++;
            IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = false;
        }
        else if (((IMOR_ac_B.VeIMOR_b_BCMRespTENRec_Arb) ||
                  (IMOR_ac_B.VeIMOR_b_BCMFailedG1G2_Arb)) ||
                 (IMOR_ac_B.VeIMOR_b_BCMNoSecondRespRec_Arb))
        {
            /* Transition: '<S207>:424' */
            /* Exit 'IMOR_CodeRec_Rsp99G1G2Comp2': '<S207>:453' */
            IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_RecNACK;
            IMOR_a_enter_atomic_IMOR_CodeRec_RecNACK();
        }
        else
        {
            guard1 = true;
        }
    }
    else
    {
        guard1 = true;
    }

    if (guard1)
    {
        if (VeIMOR_b_KeyInRunNoPSA)
        {
            /* Transition: '<S207>:145' */
            /* Transition: '<S207>:460' */
            /* Transition: '<S207>:461' */
            /* Transition: '<S207>:641' */
            /* Transition: '<S207>:610' */
            /* Transition: '<S207>:609' */
            /* Transition: '<S207>:142' */
            /* Transition: '<S207>:141' */
            /* Transition: '<S207>:140' */
            /* Transition: '<S207>:139' */
            /* Transition: '<S207>:138' */
            /* Transition: '<S207>:137' */
            /* Exit 'IMOR_CodeRec_Rsp99G1G2Comp2': '<S207>:453' */
            IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_KeyCycInit;
            IMO_enter_atomic_IMOR_CodeRec_KeyCycInit();
        }
        else if (((VeIMOR_y_MiniKrypt_extG1_1 ==
                   IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey1org2) &&
                  (VeIMOR_y_MiniKrypt_extG1_2 ==
                   IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey1or_i)) &&
                 (IMOR_ac_B.VeIMOR_t_StateTimer_Arb < KeIMOR_t_G2CmpDly))
        {
            /* Transition: '<S207>:454' */
            /* Exit 'IMOR_CodeRec_Rsp99G1G2Comp2': '<S207>:453' */
            IMOR_ac_DW.is_IMOR_CodeRec =
                IMOR__IN_IMOR_CodeRec_RecAck87SentAftr99;

            /* Entry 'IMOR_CodeRec_RecAck87SentAftr99': '<S207>:23' */
            IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_RecAck87SentAftr99;
            IMOR_ac_B.VeIMOR_y_CntrlEncdReq_Arb = KeIMOR_y_CntrlEncdReq87;
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
            VeIMOR_e_HCPStatCanC = CeIMOR_e_HCPRUN;
            IMOR_ac_B.VeIMOR_b_AuthValidArb = true;
            IMOR_ac_B.VeIMOR_y_rnd_1_Arb = 0U;
            IMOR_ac_B.VeIMOR_y_rnd_2_Arb = 0U;
            IMOR_ac_B.VeIMOR_y_rnd_3_Arb = 0U;
            IMOR_ac_B.VeIMOR_y_rnd_4_Arb = 0U;
            IMOR_ac_B.VeIMOR_y_MiniKryptF1_1_Arb = 0U;
            IMOR_ac_B.VeIMOR_y_MiniKryptF1_2_Arb = 0U;
            IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = true;
        }
        else
        {
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
        }
    }
}

#endif

/* Function for Chart: '<S199>/Immobilizer_HCP_BCM' */
#if Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_IMOR_CodeRec(const boolean *DataStoreRead7, const
    TeIMOR_e_EEPROG_STATUS *Switch, const uint8
    *TmpSignalConversionAtVeIMOR_y_CntrlEncdR)
{
    /* During 'IMOR_CodeRec': '<S207>:2' */
    switch (IMOR_ac_DW.is_IMOR_CodeRec)
    {
      case IMOR_ac_IN_IMOR_CodeRec_CopyF1G1:
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_CopyF1G1;
        IMOR_ac_B.VeIMOR_b_InvokeMKA = false;

        /* During 'IMOR_CodeRec_CopyF1G1': '<S207>:429' */
        if (IMOR_ac_B.VeIMOR_t_StateTimer_Arb >= KeIMOR_t_F1G1GenDly)
        {
            /* Transition: '<S207>:433' */
            IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_F1G1Gen;

            /* Entry 'IMOR_CodeRec_F1G1Gen': '<S207>:430' */
            IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_F1G1Generated;
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
            IMOR_ac_B.VeIMOR_y_rnd_1_Arb = IMOR_ac_B.VeIMOR_y_rnd1Init;
            IMOR_ac_B.VeIMOR_y_rnd_2_Arb = IMOR_ac_B.VeIMOR_y_rnd2Init;
            IMOR_ac_B.VeIMOR_y_rnd_3_Arb = IMOR_ac_B.VeIMOR_y_rnd3Init;
            IMOR_ac_B.VeIMOR_y_rnd_4_Arb = IMOR_ac_B.VeIMOR_y_rnd4Init;
            VeIMOR_y_f1_1gen = VeIMOR_y_MiniKrypt_extF1_1;
            VeIMOR_y_f1_2gen = VeIMOR_y_MiniKrypt_extF1_2;
        }
        else
        {
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
        }
        break;

      case IMOR_ac_IN_IMOR_CodeRec_Crank:
        IMOR_ac_B.VeIMOR_b_HCPNotProg_Arb = false;

        /* During 'IMOR_CodeRec_Crank': '<S207>:696' */
        if (!VeIMOR_b_KeyCrank)
        {
            /* Transition: '<S207>:706' */
            IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_RecPrplsnEnbl;

            /* Entry 'IMOR_CodeRec_RecPrplsnEnbl': '<S207>:18' */
            IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_PrplsnEnbl;
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
        }
        else
        {
            if (VeIMOR_b_ValidKeyCycle)
            {
                /* Transition: '<S207>:708' */
                IMOR_ac_B.VeIMOR_b_AuthValidArb = false;
                IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_NO_ACTIVE_CHILD;
                IMOR_ac_DW.is_c1_IMOR_ac = IMOR_ac_IN_IMOR_ImmobEnbld;

                /* Entry 'IMOR_ImmobEnbld': '<S207>:5' */
                IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_ImmobEnbld;
                IMOR_ac_B.VeIMOR_b_HCPNotProg_Arb = true;
            }
        }
        break;

      case IMOR_ac_IN_IMOR_CodeRec_F1G1Gen:
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_F1G1Generated;

        /* During 'IMOR_CodeRec_F1G1Gen': '<S207>:430' */
        if (IMOR_ac_B.VeIMOR_t_StateTimer_Arb >= KeIMOR_t_SndRecReqDly)
        {
            /* Transition: '<S207>:46' */
            IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_SndRecReq;
            IMOR_enter_atomic_IMOR_CodeRec_SndRecReq();
        }
        else
        {
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
        }
        break;

      case IMOR_ac_IN_IMOR_CodeRec_InvkMKA:
        IMOR_ac_IMOR_CodeRec_InvkMKA();
        break;

      case IMOR_ac_IN_IMOR_CodeRec_KeyCycInit:
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_KeyCycInit;
        VeIMOR_y_MMKey1org21_Temp = 0U;
        VeIMOR_y_MMKey1org22_Temp = 0U;
        VeIMOR_y_MMKey_3_Temp = 0U;
        VeIMOR_y_MMKey_4_Temp = 0U;
        VeIMOR_y_MMKey_5_Temp = 0U;
        VeIMOR_y_MMKey_6_Temp = 0U;

        /* During 'IMOR_CodeRec_KeyCycInit': '<S207>:26' */
        /* Transition: '<S207>:130' */
        IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_SndRecReq;
        IMOR_enter_atomic_IMOR_CodeRec_SndRecReq();
        break;

      case IMOR_ac_IN_IMOR_CodeRec_NoVal:
        IMOR_ac_IMOR_CodeRec_NoVal();
        break;

      case IMOR_ac_IN_IMOR_CodeRec_OVCopyF1G2:
        /* During 'IMOR_CodeRec_OVCopyF1G2': '<S207>:578' */
        /* Transition: '<S207>:579' */
        IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_CopyF1G1;

        /* Entry 'IMOR_CodeRec_CopyF1G1': '<S207>:429' */
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_CopyF1G1;
        IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
        IMOR_ac_B.VeIMOR_b_InvokeMKA = false;
        VeIMOR_y_MiniKrypt_extF1_1 = ExtractByte((WORD_1)IMOR_ac_B.VeIMOR_d_F1,
            (BYTE_1)1U);
        VeIMOR_y_MiniKrypt_extF1_2 = ExtractByte((WORD_1)IMOR_ac_B.VeIMOR_d_F1,
            (BYTE_1)0U);
        VeIMOR_y_MiniKrypt_extG1_1 = ExtractByte((WORD_1)
            IMOR_ac_B.VeIMOR_d_G1_Arb, (BYTE_1)1U);
        VeIMOR_y_MiniKrypt_extG1_2 = ExtractByte((WORD_1)
            IMOR_ac_B.VeIMOR_d_G1_Arb, (BYTE_1)0U);
        break;

      case IMOR_ac_IN_IMOR_CodeRec_RG:
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_RandNumGen;

        /* During 'IMOR_CodeRec_RG': '<S207>:427' */
        if (IMOR_ac_B.VeIMOR_t_StateTimer_Arb >= KeIMOR_t_InvkMKADly)
        {
            /* Transition: '<S207>:431' */
            IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_InvkMKA;

            /* Entry 'IMOR_CodeRec_InvkMKA': '<S207>:428' */
            IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_EnblMKA;
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
            IMOR_ac_B.VeIMOR_b_InvokeMKA = true;
            IMOR_ac_B.VeIMOR_b_F1G1Generated = IMOR_ac_Call_Check_F1G1Gen_n();
        }
        else
        {
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
        }
        break;

      case IMOR_ac_IN_IMOR_CodeRec_RecAck86Sent:
        IMOR_ac_IMOR_CodeRec_RecAck86Sent
            (TmpSignalConversionAtVeIMOR_y_CntrlEncdR);
        break;

      case IMOR__IN_IMOR_CodeRec_RecAck86SentAftr99:
        IMOR_ac_IMOR_CodeRec_RecAck86SentAftr99
            (TmpSignalConversionAtVeIMOR_y_CntrlEncdR);
        break;

      case IMOR_ac_IN_IMOR_CodeRec_RecAck87Sent:
        IMOR_ac_IMOR_CodeRec_RecAck87Sent();
        break;

      case IMOR__IN_IMOR_CodeRec_RecAck87SentAftr99:
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_RecAck87SentAftr99;
        IMOR_ac_B.VeIMOR_y_CntrlEncdReq_Arb = KeIMOR_y_CntrlEncdReq87;

        /* During 'IMOR_CodeRec_RecAck87SentAftr99': '<S207>:23' */
        if (IMOR_ac_B.VeIMOR_t_StateTimer_Arb >= KeIMOR_t_PrplsnEnblDly)
        {
            /* Transition: '<S207>:66' */
            /* Transition: '<S207>:73' */
            /* Exit 'IMOR_CodeRec_RecAck87SentAftr99': '<S207>:23' */
            IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_RecPrplsnEnbl;

            /* Entry 'IMOR_CodeRec_RecPrplsnEnbl': '<S207>:18' */
            IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_PrplsnEnbl;
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
        }
        else if (VeIMOR_b_KeyInRunNoPSA)
        {
            /* Transition: '<S207>:458' */
            /* Transition: '<S207>:461' */
            /* Transition: '<S207>:641' */
            /* Transition: '<S207>:610' */
            /* Transition: '<S207>:609' */
            /* Transition: '<S207>:142' */
            /* Transition: '<S207>:141' */
            /* Transition: '<S207>:140' */
            /* Transition: '<S207>:139' */
            /* Transition: '<S207>:138' */
            /* Transition: '<S207>:137' */
            /* Exit 'IMOR_CodeRec_RecAck87SentAftr99': '<S207>:23' */
            IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_KeyCycInit;
            IMO_enter_atomic_IMOR_CodeRec_KeyCycInit();
        }
        else
        {
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
            IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = false;
        }
        break;

      case IMOR_ac_IN_IMOR_CodeRec_RecCmpRsp2Rcvd:
        IMOR_ac_IMOR_CodeRec_RecCmpRsp2Rcvd();
        break;

      case IMOR_ac_IN_IMOR_CodeRec_RecCntInc:
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_RecCntInc;

        /* During 'IMOR_CodeRec_RecCntInc': '<S207>:19' */
        if (IMOR_ac_B.VeIMOR_cnt_IMORRecCnt_Arb < KeIMOR_Cnt_MaxTrials)
        {
            /* Transition: '<S207>:74' */
            IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_SndRecReq;
            IMOR_enter_atomic_IMOR_CodeRec_SndRecReq();
        }
        else if (IMOR_ac_B.VeIMOR_cnt_IMORRecCnt_Arb >= KeIMOR_Cnt_MaxTrials)
        {
            /* Transition: '<S207>:61' */
            /* Transition: '<S207>:393' */
            IMOR_ac_B.VeIMOR_b_BCMNoENQpResponse_Arb = true;
            IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_RecNACK;
            IMOR_a_enter_atomic_IMOR_CodeRec_RecNACK();
        }
        else
        {
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
        }
        break;

      case IMOR_ac_IN_IMOR_CodeRec_RecCpyRspRcvd:
        IMOR_ac_IMOR_CodeRec_RecCpyRspRcvd();
        break;

      case IMOR_ac_IN_IMOR_CodeRec_RecEOT:
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_RecEOT;
        IMOR_ac_B.VeIMOR_y_CntrlEncdReq_Arb = KeIMOR_y_CntrlEncdReq84;
        IMOR_ac_B.VeIMOR_b_HCPNotProg_Arb = false;

        /* During 'IMOR_CodeRec_RecEOT': '<S207>:17' */
        if (IMOR_ac_B.VeIMOR_t_StateTimer_Arb >= KeIMOR_t_PrplsnEnblDly)
        {
            /* Transition: '<S207>:59' */
            IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_RecPrplsnEnbl;

            /* Entry 'IMOR_CodeRec_RecPrplsnEnbl': '<S207>:18' */
            IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_PrplsnEnbl;
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
        }
        else
        {
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
            IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = false;
        }
        break;

      case IMOR_ac_IN_IMOR_CodeRec_RecMKeyStr:
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_MKeyStr;

        /* During 'IMOR_CodeRec_RecMKeyStr': '<S207>:515' */
        if ((*DataStoreRead7) && (IMOR_ac_B.VeIMOR_t_StateTimer_Arb >=
                                  KeIMOR_t_MKeyStrDly))
        {
            /* Transition: '<S207>:517' */
            IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_RecMKeyStrVrfy;

            /* Entry 'IMOR_CodeRec_RecMKeyStrVrfy': '<S207>:16' */
            IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_MKeyStrVrfy;
            IMOR_ac_B.VeIMOR_b_WrtMKeyToE2_Arb = false;
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
        }
        else
        {
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
        }
        break;

      case IMOR_ac_IN_IMOR_CodeRec_RecMKeyStrVrfy:
        IMOR_ac_IMOR_CodeRec_RecMKeyStrVrfy(Switch);
        break;

      case IMOR_ac_IN_IMOR_CodeRec_RecNACK:
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_RecNACK;
        IMOR_ac_B.VeIMOR_y_CntrlEncdReq_Arb = KeIMOR_y_CntrlEncdReq81;

        /* During 'IMOR_CodeRec_RecNACK': '<S207>:20' */
        if (IMOR_ac_B.VeIMOR_t_StateTimer_Arb >= KeIMOR_t_PrplsnDisblDly)
        {
            /* Transition: '<S207>:62' */
            IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_RecPrplsnDisbl;

            /* Entry 'IMOR_CodeRec_RecPrplsnDisbl': '<S207>:21' */
            IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_PrplsnDisbl;
            IMOR_ac_B.VeIMOR_b_AuthValidArb = false;
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
            IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = false;
        }
        else
        {
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
            IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = false;
        }
        break;

      case IMOR_ac_IN_IMOR_CodeRec_RecPrplsnDisbl:
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_PrplsnDisbl;

        /* During 'IMOR_CodeRec_RecPrplsnDisbl': '<S207>:21' */
        /* Transition: '<S207>:76' */
        if (VeIMOR_b_ValidKeyCycle)
        {
            /* Transition: '<S207>:110' */
            IMOR_ac_B.VeIMOR_b_WrtCRCmpltToE2_Arb = false;

            /* Transition: '<S207>:126' */
            /* Transition: '<S207>:127' */
            /* Transition: '<S207>:107' */
            /* Transition: '<S207>:652' */
            IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_NO_ACTIVE_CHILD;
            IMOR_ac_DW.is_c1_IMOR_ac = IMOR_ac_IN_IMOR_ImmobEnbld;

            /* Entry 'IMOR_ImmobEnbld': '<S207>:5' */
            IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_ImmobEnbld;
            IMOR_ac_B.VeIMOR_b_HCPNotProg_Arb = true;
        }
        else
        {
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
        }
        break;

      case IMOR_ac_IN_IMOR_CodeRec_RecPrplsnEnbl:
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_PrplsnEnbl;

        /* During 'IMOR_CodeRec_RecPrplsnEnbl': '<S207>:18' */
        if (((IMOR_ac_B.VeIMOR_t_StateTimer_Arb >= KeIMOR_t_RepeatDly) &&
                (!VeIMOR_b_KeyCrank)) || (VeIMOR_b_ValidKeyCycle))
        {
            /* Transition: '<S207>:643' */
            IMOR_ac_B.VeIMOR_b_AuthValidArb = false;
            IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_NO_ACTIVE_CHILD;
            IMOR_ac_DW.is_c1_IMOR_ac = IMOR_ac_IN_IMOR_ImmobEnbld;

            /* Entry 'IMOR_ImmobEnbld': '<S207>:5' */
            IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_ImmobEnbld;
            IMOR_ac_B.VeIMOR_b_HCPNotProg_Arb = true;
        }
        else if (VeIMOR_b_KeyCrank)
        {
            /* Transition: '<S207>:703' */
            IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_Crank;

            /* Entry 'IMOR_CodeRec_Crank': '<S207>:696' */
            VeIMOR_e_HCPStatCanC = CeIMOR_e_HCPRUN;
            IMOR_ac_B.VeIMOR_b_AuthValidArb = true;
            IMOR_ac_B.VeIMOR_b_HCPNotProg_Arb = false;
        }
        else
        {
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
        }
        break;

      case IMOR_ac_IN_IMOR_CodeRec_RecRspRcvd:
        IMOR_ac_IMOR_CodeRec_RecRspRcvd(TmpSignalConversionAtVeIMOR_y_CntrlEncdR);
        break;

      case IMOR_ac_IN_IMOR_CodeRec_RecRspRcvd10:
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_RspRcvd10;
        IMOR_ac_B.VeIMOR_b_BCMRespTENRec_Arb = true;

        /* During 'IMOR_CodeRec_RecRspRcvd10': '<S207>:11' */
        if (IMOR_ac_B.VeIMOR_t_StateTimer_Arb >= KeIMOR_t_RspRcvd10Dly)
        {
            /* Transition: '<S207>:67' */
            /* Transition: '<S207>:68' */
            /* Transition: '<S207>:70' */
            if (!IMOR_ac_B.VeIMOR_b_BCMRespTENRec_Arb)
            {
                /* Transition: '<S207>:128' */
                /* Exit 'IMOR_CodeRec_RecRspRcvd10': '<S207>:11' */
                IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_RecCntInc;

                /* Entry 'IMOR_CodeRec_RecCntInc': '<S207>:19' */
                IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_RecCntInc;
                IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
                IMOR_ac_B.VeIMOR_cnt_IMORRecCnt_Arb++;
                IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = false;
            }
            else if (((IMOR_ac_B.VeIMOR_b_BCMRespTENRec_Arb) ||
                      (IMOR_ac_B.VeIMOR_b_BCMFailedG1G2_Arb)) ||
                     (IMOR_ac_B.VeIMOR_b_BCMNoSecondRespRec_Arb))
            {
                /* Transition: '<S207>:424' */
                /* Exit 'IMOR_CodeRec_RecRspRcvd10': '<S207>:11' */
                IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_RecNACK;
                IMOR_a_enter_atomic_IMOR_CodeRec_RecNACK();
            }
            else
            {
                IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
            }
        }
        else
        {
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
        }
        break;

      case IMOR_ac_IN_IMOR_CodeRec_RecRspRcvd99:
        IMOR_ac_IMOR_CodeRec_RecRspRcvd99();
        break;

      case IMOR_ac_IN_IMOR_CodeRec_RecRspRcvdAA:
        IMOR_ac_IMOR_CodeRec_RecRspRcvdAA();
        break;

      case IMOR_ac_IN_IMOR_CodeRec_Rsp99G1G2Comp:
        IMOR_ac_IMOR_CodeRec_Rsp99G1G2Comp();
        break;

      case IMOR_ac_IN_IMOR_CodeRec_Rsp99G1G2Comp2:
        IMOR_ac_IMOR_CodeRec_Rsp99G1G2Comp2();
        break;

      default:
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_SndRecReq;
        IMOR_ac_B.VeIMOR_y_CntrlEncdReq_Arb = KeIMOR_y_CntrlEncdReq85;

        /* During 'IMOR_CodeRec_SndRecReq': '<S207>:7' */
        if (IMOR_ac_B.VeIMOR_t_StateTimer_Arb >= KeIMOR_t_Rsp86SndDly)
        {
            /* Transition: '<S207>:49' */
            IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_RecRspRcvd;

            /* Entry 'IMOR_CodeRec_RecRspRcvd': '<S207>:8' */
            IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_RecRspRcvd;
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
            IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = false;
            VeIMOR_e_HCPStatCanC = CeIMOR_e_HCPIS;
        }
        else
        {
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
            IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = false;
        }
        break;
    }
}

#endif

/* Function for Chart: '<S199>/Immobilizer_HCP_BCM' */
#if Rte_SysCon_Variant_IMOR_1

static void IMOR_enter_atomic_IMOR_CodeVrfy_NACKSent
{
    /* Entry 'IMOR_CodeVrfy_NACKSent': '<S207>:33' */
    IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CV_NACKSent;
    IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
    IMOR_ac_B.VeIMOR_y_CntrlEncdReq_Arb = KeIMOR_y_CntrlEncdReq15;
    IMOR_ac_B.VeIMOR_y_rnd_1_Arb = 0U;
    IMOR_ac_B.VeIMOR_y_rnd_2_Arb = 0U;
    IMOR_ac_B.VeIMOR_y_rnd_3_Arb = 0U;
    IMOR_ac_B.VeIMOR_y_rnd_4_Arb = 0U;
    IMOR_ac_B.VeIMOR_y_MiniKryptF1_1_Arb = 0U;
    IMOR_ac_B.VeIMOR_y_MiniKryptF1_2_Arb = 0U;
    VeIMOR_e_HCPStatCanC = CeIMOR_e_HCPKILL;
    IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = true;
}

#endif

/* Function for Chart: '<S199>/Immobilizer_HCP_BCM' */
#if Rte_SysCon_Variant_IMOR_1

static void IMOR_a_enter_atomic_IMOR_CodeVrfy_KCInit
{
    /* Entry 'IMOR_CodeVrfy_KCInit': '<S207>:38' */
    IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CV_KeyCycInit;
    IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
    IMOR_ac_B.VeIMOR_b_WrtCRCmpltToE2_Arb = false;
    IMOR_ac_B.VeIMOR_cnt_CodeVrfyCnt_Arb = 1.0F;
    IMOR_ac_B.VeIMOR_y_CntrlEncdReq_Arb = 0U;
    IMOR_ac_B.VeIMOR_y_rnd_1_Arb = 0U;
    IMOR_ac_B.VeIMOR_y_rnd_2_Arb = 0U;
    IMOR_ac_B.VeIMOR_y_rnd_3_Arb = 0U;
    IMOR_ac_B.VeIMOR_y_rnd_4_Arb = 0U;
    IMOR_ac_B.VeIMOR_y_MiniKryptF1_1_Arb = 0U;
    IMOR_ac_B.VeIMOR_y_MiniKryptF1_2_Arb = 0U;
    IMOR_ac_B.VeIMOR_y_MiniKryptG1_1_Arb = 0U;
    IMOR_ac_B.VeIMOR_y_MiniKryptG1_2_Arb = 0U;
    IMOR_ac_B.VeIMOR_b_AuthValidArb = false;
    VeIMOR_e_HCPStatCanC = CeIMOR_e_HCPIS;
    IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = false;
}

#endif

/* Function for Chart: '<S199>/Immobilizer_HCP_BCM' */
#if Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_IMOR_CodeVrfy_VrfyRspRcvd
{
    IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CV_VrfyRspRcvd;

    /* During 'IMOR_CodeVrfy_VrfyRspRcvd': '<S207>:31' */
    if (((VeIMOR_y_MiniKrypt_extG1_1 ==
            IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey1org2) &&
            (VeIMOR_y_MiniKrypt_extG1_2 ==
             IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey1or_i)) &&
            (IMOR_ac_B.VeIMOR_t_StateTimer_Arb < KeIMOR_t_G2CmpDly))
    {
        /* Transition: '<S207>:99' */
        /* Exit 'IMOR_CodeVrfy_VrfyRspRcvd': '<S207>:31' */
        IMOR_ac_DW.is_IMOR_CodeVrfy = IMOR_ac_IN_IMOR_CodeVrfy_ACKSent;

        /* Entry 'IMOR_CodeVrfy_ACKSent': '<S207>:35' */
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CV_ACKSent;
        IMOR_ac_B.VeIMOR_y_CntrlEncdReq_Arb = KeIMOR_y_CntrlEncdReq06;
        IMOR_ac_B.VeIMOR_y_rnd_1_Arb = 0U;
        IMOR_ac_B.VeIMOR_y_rnd_2_Arb = 0U;
        IMOR_ac_B.VeIMOR_y_rnd_3_Arb = 0U;
        IMOR_ac_B.VeIMOR_y_rnd_4_Arb = 0U;
        IMOR_ac_B.VeIMOR_y_MiniKryptF1_1_Arb = 0U;
        IMOR_ac_B.VeIMOR_y_MiniKryptF1_2_Arb = 0U;
        IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
        IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = true;
    }
    else if (VeIMOR_b_KeyInRunNoPSA)
    {
        /* Transition: '<S207>:115' */
        /* Transition: '<S207>:117' */
        /* Transition: '<S207>:119' */
        /* Transition: '<S207>:121' */
        /* Transition: '<S207>:125' */
        /* Exit 'IMOR_CodeVrfy_VrfyRspRcvd': '<S207>:31' */
        IMOR_ac_DW.is_IMOR_CodeVrfy = IMOR_ac_IN_IMOR_CodeVrfy_KCInit;
        IMOR_a_enter_atomic_IMOR_CodeVrfy_KCInit();
    }
    else if (IMOR_ac_B.VeIMOR_t_StateTimer_Arb >= KeIMOR_t_G2CmpDly)
    {
        /* Transition: '<S207>:77' */
        /* Transition: '<S207>:399' */
        IMOR_ac_B.VeIMOR_b_BCMRespBadG2Verify_Arb = true;

        /* Exit 'IMOR_CodeVrfy_VrfyRspRcvd': '<S207>:31' */
        IMOR_ac_DW.is_IMOR_CodeVrfy = IMOR_ac_IN_IMOR_CodeVrfy_NACKSent;
        IMOR_enter_atomic_IMOR_CodeVrfy_NACKSent();
    }
    else
    {
        IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
    }
}

#endif

/* Function for Chart: '<S199>/Immobilizer_HCP_BCM' */
#if Rte_SysCon_Variant_IMOR_1

static void IMOR__enter_atomic_IMOR_CodeVrfy_F1G1Gen
{
    /* Entry 'IMOR_CodeVrfy_F1G1Gen': '<S207>:29' */
    IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CV_F1G1Generated;
    IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
    VeIMOR_b_CntrlEncdResFlag = false;
    EeIMOR_b_MMKey1org21Flag = false;
    EeIMOR_b_MMKey1org22Flag = false;
    EeIMOR_b_MMKey_3Flag = false;
    EeIMOR_b_MMKey_4Flag = false;
    EeIMOR_b_MMKey_5Flag = false;
    EeIMOR_b_MMKey_6Flag = false;
    IMOR_ac_B.VeIMOR_y_rnd_1_Arb = IMOR_ac_B.VeIMOR_y_rnd1Init;
    IMOR_ac_B.VeIMOR_y_rnd_2_Arb = IMOR_ac_B.VeIMOR_y_rnd2Init;
    IMOR_ac_B.VeIMOR_y_rnd_3_Arb = IMOR_ac_B.VeIMOR_y_rnd3Init;
    IMOR_ac_B.VeIMOR_y_rnd_4_Arb = IMOR_ac_B.VeIMOR_y_rnd4Init;
    VeIMOR_e_HCPStatCanC = CeIMOR_e_HCPIS;
    IMOR_ac_B.VeIMOR_y_CntrlEncdReq_Arb = KeIMOR_y_CntrlEncdReq05;
    IMOR_ac_B.VeIMOR_y_MiniKryptF1_1_Arb = VeIMOR_y_f1_1gen;
    IMOR_ac_B.VeIMOR_y_MiniKryptF1_2_Arb = VeIMOR_y_f1_2gen;
    IMOR_ac_B.VeIMOR_b_BCMFailedVerif_Arb = false;
    IMOR_ac_B.VeIMOR_b_BCMRespUCVerify_Arb = false;
    IMOR_ac_B.VeIMOR_b_BCMRespTENVerify_Arb = false;
    IMOR_ac_B.VeIMOR_b_BCMRespBadG2Verify_Arb = false;
    IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = true;
}

#endif

/* Function for Chart: '<S199>/Immobilizer_HCP_BCM' */
#if Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_IMOR_CodeVrfy_F1G1Gen(const uint8
    *TmpSignalConversionAtVeIMOR_y_CntrlEncdR)
{
    boolean guard1 = false;
    IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CV_F1G1Generated;
    IMOR_ac_B.VeIMOR_y_CntrlEncdReq_Arb = KeIMOR_y_CntrlEncdReq05;

    /* During 'IMOR_CodeVrfy_F1G1Gen': '<S207>:29' */
    if (!IMOR_ac_B.Logical4)
    {
        /* Transition: '<S207>:745' */
        /* Transition: '<S207>:746' */
        /* Transition: '<S207>:747' */
        IMOR_ac_DW.is_IMOR_CodeVrfy = IMOR_ac_IN_IMOR_CodeVrfy_VrfyPrplsnDisbl;

        /* Entry 'IMOR_CodeVrfy_VrfyPrplsnDisbl': '<S207>:34' */
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CV_PrplsnDisbl;
        IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = false;
        IMOR_ac_B.VeIMOR_b_AuthValidArb = false;
        IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
    }
    else if (((((((((*TmpSignalConversionAtVeIMOR_y_CntrlEncdR) ==
                    KeIMOR_y_CntrlEncdRespAB) && (VeIMOR_b_CntrlEncdResFlag)) &&
                  (EeIMOR_b_MMKey1org21Flag)) && (EeIMOR_b_MMKey1org22Flag)) &&
                (EeIMOR_b_MMKey_3Flag)) && (EeIMOR_b_MMKey_4Flag)) &&
              (EeIMOR_b_MMKey_5Flag)) && (EeIMOR_b_MMKey_6Flag))
    {
        /* Transition: '<S207>:90' */
        IMOR_ac_DW.is_IMOR_CodeVrfy = IMOR_ac_IN_IMOR_CodeVrfy_VrfyRspRcvd;

        /* Entry 'IMOR_CodeVrfy_VrfyRspRcvd': '<S207>:31' */
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CV_VrfyRspRcvd;
        EeIMOR_b_MMKey1org21Flag = false;
        EeIMOR_b_MMKey1org22Flag = false;
        EeIMOR_b_MMKey_3Flag = false;
        EeIMOR_b_MMKey_4Flag = false;
        EeIMOR_b_MMKey_5Flag = false;
        EeIMOR_b_MMKey_6Flag = false;
        IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
        VeIMOR_b_CntrlEncdResFlag = false;
        IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = false;
        VeIMOR_e_HCPStatCanC = CeIMOR_e_HCPIS;
    }
    else
    {
        /* Transition: '<S207>:89' */
        guard1 = false;
        if (((*TmpSignalConversionAtVeIMOR_y_CntrlEncdR) ==
                KeIMOR_y_CntrlEncdResp10) && (VeIMOR_b_CntrlEncdResFlag))
        {
            /* Transition: '<S207>:94' */
            IMOR_ac_B.VeIMOR_b_BCMRespTENVerify_Arb = true;
            guard1 = true;
        }
        else if (((*TmpSignalConversionAtVeIMOR_y_CntrlEncdR) ==
                  KeIMOR_y_CntrlEncdResp99) && (VeIMOR_b_CntrlEncdResFlag))
        {
            /* Transition: '<S207>:98' */
            IMOR_ac_B.VeIMOR_b_BCMRespUCVerify_Arb = true;
            guard1 = true;
        }
        else if (IMOR_ac_B.VeIMOR_t_StateTimer_Arb >= KeIMOR_t_CANWaitDly)
        {
            /* Transition: '<S207>:91' */
            IMOR_ac_DW.is_IMOR_CodeVrfy = IMOR_ac_IN_IMOR_CodeVrfy_VrfyCntInc;

            /* Entry 'IMOR_CodeVrfy_VrfyCntInc': '<S207>:32' */
            IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CV_VrfyCntInc;
            IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = false;
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
            VeIMOR_e_HCPStatCanC = CeIMOR_e_HCPIS;
            IMOR_ac_B.VeIMOR_cnt_CodeVrfyCnt_Arb++;
        }
        else if (VeIMOR_b_KeyInRunNoPSA)
        {
            /* Transition: '<S207>:118' */
            /* Transition: '<S207>:119' */
            /* Transition: '<S207>:121' */
            /* Transition: '<S207>:125' */
            IMOR_ac_DW.is_IMOR_CodeVrfy = IMOR_ac_IN_IMOR_CodeVrfy_KCInit;
            IMOR_a_enter_atomic_IMOR_CodeVrfy_KCInit();
        }
        else
        {
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
            IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = false;
        }

        if (guard1)
        {
            IMOR_ac_DW.is_IMOR_CodeVrfy = IMOR_ac_IN_IMOR_CodeVrfy_NegUC;

            /* Entry 'IMOR_CodeVrfy_NegUC': '<S207>:30' */
            IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CV_NegUC;
            IMOR_ac_B.VeIMOR_b_BCMFailedVerif_Arb = true;
            IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = false;
            VeIMOR_b_CntrlEncdResFlag = false;
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
        }
    }
}

#endif

/* Function for Chart: '<S199>/Immobilizer_HCP_BCM' */
#if Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_enter_atomic_IMOR_CodeVrfy_RG1(const uint8 *Switch1, const
    uint8 *Switch2, const uint8 *Switch3, const uint8 *Switch4, const uint8
    *Switch5)
{
    /* Entry 'IMOR_CodeVrfy_RG1': '<S207>:686' */
    IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CV_RandNumGen_BSW;
    IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
    IMOR_ac_B.VeIMOR_y_rnd1Init = (uint8)RandConv((U16)VeIMOR_t_Random1);
    IMOR_ac_B.VeIMOR_y_rnd2Init = (uint8)RandConv((U16)VeIMOR_t_Random2);
    IMOR_ac_B.VeIMOR_y_rnd3Init = (uint8)RandConv((U16)VeIMOR_t_Random3);
    IMOR_ac_B.VeIMOR_y_rnd4Init = (uint8)RandConv((U16)VeIMOR_t_Random4);
    VeIMOR_e_HCPStatCanC = CeIMOR_e_HCPIS;
    IMOR_ac_B.VeIMOR_d_RandonNumber_Arb = (uint32)Concat_4((BYTE_1)
        IMOR_ac_B.VeIMOR_y_rnd1Init, (BYTE_1)IMOR_ac_B.VeIMOR_y_rnd2Init,
        (BYTE_1)IMOR_ac_B.VeIMOR_y_rnd3Init, (BYTE_1)IMOR_ac_B.VeIMOR_y_rnd4Init);
    IMOR_ac_B.VeIMOR_d_SecKey_h_Arb = (uint16)Concat_2((BYTE_1)(*Switch1),
        (BYTE_1)(*Switch2));
    IMOR_ac_B.VeIMOR_d_SecKey_l_Arb = (uint32)Concat_4((BYTE_1)(*Switch3),
        (BYTE_1)(*Switch4), (BYTE_1)(*Switch5), (BYTE_1)IMOR_ac_B.Switch6);
}

#endif

/* Function for Chart: '<S199>/Immobilizer_HCP_BCM' */
#if Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_enter_atomic_IMOR_CodeVrfy_RG
{
    /* Entry 'IMOR_CodeVrfy_RG': '<S207>:25' */
    IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CV_RandNumGen;
    IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
    IMOR_ac_B.VeIMOR_y_rnd1Init = (uint8)RandConv((U16)VeIMOR_t_Random1);
    IMOR_ac_B.VeIMOR_y_rnd2Init = (uint8)RandConv((U16)VeIMOR_t_Random2);
    IMOR_ac_B.VeIMOR_y_rnd3Init = (uint8)RandConv((U16)VeIMOR_t_Random3);
    IMOR_ac_B.VeIMOR_y_rnd4Init = (uint8)RandConv((U16)VeIMOR_t_Random4);
    VeIMOR_e_HCPStatCanC = CeIMOR_e_HCPIS;
    IMOR_ac_B.VeIMOR_d_RandonNumber_Arb = (uint32)Concat_4((BYTE_1)
        IMOR_ac_B.VeIMOR_y_rnd1Init, (BYTE_1)IMOR_ac_B.VeIMOR_y_rnd2Init,
        (BYTE_1)IMOR_ac_B.VeIMOR_y_rnd3Init, (BYTE_1)IMOR_ac_B.VeIMOR_y_rnd4Init);
    IMOR_ac_B.VeIMOR_d_SecKey_h_Arb = (uint16)Concat_2((BYTE_1)
        EeIMOR_y_MMKey1org21_Mem, (BYTE_1)EeIMOR_y_MMKey1org22_Mem);
    IMOR_ac_B.VeIMOR_d_SecKey_l_Arb = (uint32)Concat_4((BYTE_1)
        EeIMOR_y_MMKey_3_Mem, (BYTE_1)EeIMOR_y_MMKey_4_Mem, (BYTE_1)
        EeIMOR_y_MMKey_5_Mem, (BYTE_1)EeIMOR_y_MMKey_6_Mem);
}

#endif

/* Function for Chart: '<S199>/Immobilizer_HCP_BCM' */
#if Rte_SysCon_Variant_IMOR_1

static boolean IMOR_ac_Call_Check_F1G1Gen
{
    /* Graphical Function 'Call_Check_F1G1Gen': '<S207>:37' */
    /* Transition: '<S207>:101' */
    GenerateF1G1((U32)IMOR_ac_B.VeIMOR_d_RandonNumber_Arb, (U16)
                 IMOR_ac_B.VeIMOR_d_SecKey_h_Arb, (U32)
                 IMOR_ac_B.VeIMOR_d_SecKey_l_Arb, (U16 *)(&IMOR_ac_B.VeIMOR_d_F1),
                 (U16 *)(&IMOR_ac_B.VeIMOR_d_G1_Arb));
    return true;
}

#endif

/* Function for Chart: '<S199>/Immobilizer_HCP_BCM' */
#if Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_IMOR_CodeVrfy(const uint8 *Switch1, const uint8 *Switch2,
    const uint8 *Switch3, const uint8 *TmpSignalConversionAtVeIMOR_y_CntrlEncdR,
    const uint8 *Switch4, const uint8 *Switch5)
{
    /* During 'IMOR_CodeVrfy': '<S207>:3' */
    switch (IMOR_ac_DW.is_IMOR_CodeVrfy)
    {
      case IMOR_ac_IN_IMOR_CodeVrfy_ACKSent:
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CV_ACKSent;
        IMOR_ac_B.VeIMOR_y_CntrlEncdReq_Arb = KeIMOR_y_CntrlEncdReq06;

        /* During 'IMOR_CodeVrfy_ACKSent': '<S207>:35' */
        if (IMOR_ac_B.VeIMOR_t_StateTimer_Arb >= KeIMOR_t_PrplsnEnblDly)
        {
            /* Transition: '<S207>:100' */
            IMOR_ac_DW.is_IMOR_CodeVrfy =
                IMOR_ac_IN_IMOR_CodeVrfy_VrfyPrplsnEnbl;

            /* Entry 'IMOR_CodeVrfy_VrfyPrplsnEnbl': '<S207>:36' */
            IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CV_PrplsnEnbl;
            IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = false;
            IMOR_ac_B.VeIMOR_b_AuthValidArb = true;
            VeIMOR_e_HCPStatCanC = CeIMOR_e_HCPRUN;
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
        }
        else if (VeIMOR_b_KeyInRunNoPSA)
        {
            /* Transition: '<S207>:113' */
            /* Transition: '<S207>:116' */
            /* Transition: '<S207>:117' */
            /* Transition: '<S207>:119' */
            /* Transition: '<S207>:121' */
            /* Transition: '<S207>:125' */
            IMOR_ac_DW.is_IMOR_CodeVrfy = IMOR_ac_IN_IMOR_CodeVrfy_KCInit;
            IMOR_a_enter_atomic_IMOR_CodeVrfy_KCInit();
        }
        else
        {
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
            IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = false;
        }
        break;

      case IMOR_ac_IN_IMOR_CodeVrfy_CopyF1G1:
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CV_CopyF1G1;
        IMOR_ac_B.VeIMOR_b_InvokeMKA = false;

        /* During 'IMOR_CodeVrfy_CopyF1G1': '<S207>:28' */
        if (IMOR_ac_B.VeIMOR_t_StateTimer_Arb >= KeIMOR_t_F1G1GenDly)
        {
            /* Transition: '<S207>:88' */
            IMOR_ac_DW.is_IMOR_CodeVrfy = IMOR_ac_IN_IMOR_CodeVrfy_F1G1Gen;
            IMOR__enter_atomic_IMOR_CodeVrfy_F1G1Gen();
        }
        else if (VeIMOR_b_KeyInRunNoPSA)
        {
            /* Transition: '<S207>:123' */
            /* Transition: '<S207>:121' */
            /* Transition: '<S207>:125' */
            IMOR_ac_DW.is_IMOR_CodeVrfy = IMOR_ac_IN_IMOR_CodeVrfy_KCInit;
            IMOR_a_enter_atomic_IMOR_CodeVrfy_KCInit();
        }
        else
        {
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
        }
        break;

      case IMOR_ac_IN_IMOR_CodeVrfy_F1G1Gen:
        IMOR_ac_IMOR_CodeVrfy_F1G1Gen(TmpSignalConversionAtVeIMOR_y_CntrlEncdR);
        break;

      case IMOR_ac_IN_IMOR_CodeVrfy_Init:
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CV_Init;
        IMOR_ac_B.VeIMOR_y_MiniKryptG1_1_Arb = 0U;
        IMOR_ac_B.VeIMOR_y_MiniKryptG1_2_Arb = 0U;
        IMOR_ac_B.VeIMOR_b_HCPNotProg_Arb = false;

        /* During 'IMOR_CodeVrfy_Init': '<S207>:24' */
        if (IMOR_ac_B.VeIMOR_t_StateTimer_Arb >= KeIMOR_t_RNGDly)
        {
            /* Constant: '<S209>/Calib' */
            /* Transition: '<S207>:84' */
            if (!KeIMOR_b_BSWMem_Slct)
            {
                /* Transition: '<S207>:689' */
                IMOR_ac_DW.is_IMOR_CodeVrfy = IMOR_ac_IN_IMOR_CodeVrfy_RG;
                IMOR_ac_enter_atomic_IMOR_CodeVrfy_RG();
            }
            else
            {
                /* Transition: '<S207>:690' */
                IMOR_ac_DW.is_IMOR_CodeVrfy = IMOR_ac_IN_IMOR_CodeVrfy_RG1;
                IMOR_ac_enter_atomic_IMOR_CodeVrfy_RG1(Switch1, Switch2, Switch3,
                    Switch4, Switch5);
            }
        }
        else
        {
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
        }
        break;

      case IMOR_ac_IN_IMOR_CodeVrfy_InvkMKA:
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CV_EnblMKA;
        IMOR_ac_B.VeIMOR_b_InvokeMKA = true;

        /* During 'IMOR_CodeVrfy_InvkMKA': '<S207>:27' */
        if (VeIMOR_b_KeyInRunNoPSA)
        {
            /* Transition: '<S207>:122' */
            /* Transition: '<S207>:125' */
            IMOR_ac_DW.is_IMOR_CodeVrfy = IMOR_ac_IN_IMOR_CodeVrfy_KCInit;
            IMOR_a_enter_atomic_IMOR_CodeVrfy_KCInit();
        }
        else if ((IMOR_ac_B.VeIMOR_b_F1G1Generated) &&
                 (KeIMOR_b_F1G1GeneratedVerOV))
        {
            /* Transition: '<S207>:87' */
            IMOR_ac_DW.is_IMOR_CodeVrfy = IMOR_ac_IN_IMOR_CodeVrfy_OVCopyF1G2;

            /* Entry 'IMOR_CodeVrfy_OVCopyF1G2': '<S207>:587' */
            IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CV_CopyF1G1;
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
            IMOR_ac_B.VeIMOR_b_InvokeMKA = false;

            /* Constant: '<S217>/Calib' */
            IMOR_ac_B.VeIMOR_d_F1 = KeIMOR_d_F1_VerOvrd;

            /* Constant: '<S219>/Calib' */
            IMOR_ac_B.VeIMOR_d_G1_Arb = KeIMOR_d_G1_VerOvrd;
        }
        else if ((IMOR_ac_B.VeIMOR_b_F1G1Generated) &&
                 (!KeIMOR_b_F1G1GeneratedVerOV))
        {
            /* Transition: '<S207>:589' */
            IMOR_ac_DW.is_IMOR_CodeVrfy = IMOR_ac_IN_IMOR_CodeVrfy_CopyF1G1;

            /* Entry 'IMOR_CodeVrfy_CopyF1G1': '<S207>:28' */
            IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CV_CopyF1G1;
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
            IMOR_ac_B.VeIMOR_b_InvokeMKA = false;
            VeIMOR_y_MiniKrypt_extF1_1 = ExtractByte((WORD_1)
                IMOR_ac_B.VeIMOR_d_F1, (BYTE_1)1U);
            VeIMOR_y_MiniKrypt_extF1_2 = ExtractByte((WORD_1)
                IMOR_ac_B.VeIMOR_d_F1, (BYTE_1)0U);
            VeIMOR_y_MiniKrypt_extG1_1 = ExtractByte((WORD_1)
                IMOR_ac_B.VeIMOR_d_G1_Arb, (BYTE_1)1U);
            VeIMOR_y_MiniKrypt_extG1_2 = ExtractByte((WORD_1)
                IMOR_ac_B.VeIMOR_d_G1_Arb, (BYTE_1)0U);
            VeIMOR_y_f1_1gen = VeIMOR_y_MiniKrypt_extF1_1;
            VeIMOR_y_f1_2gen = VeIMOR_y_MiniKrypt_extF1_2;
        }
        else
        {
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
        }
        break;

      case IMOR_ac_IN_IMOR_CodeVrfy_KCInit:
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CV_KeyCycInit;
        IMOR_ac_B.VeIMOR_y_CntrlEncdReq_Arb = 0U;
        IMOR_ac_B.VeIMOR_y_MiniKryptG1_1_Arb = 0U;
        IMOR_ac_B.VeIMOR_y_MiniKryptG1_2_Arb = 0U;

        /* Constant: '<S209>/Calib' */
        /* During 'IMOR_CodeVrfy_KCInit': '<S207>:38' */
        /* Transition: '<S207>:124' */
        if (!KeIMOR_b_BSWMem_Slct)
        {
            /* Transition: '<S207>:689' */
            IMOR_ac_DW.is_IMOR_CodeVrfy = IMOR_ac_IN_IMOR_CodeVrfy_RG;
            IMOR_ac_enter_atomic_IMOR_CodeVrfy_RG();
        }
        else
        {
            /* Transition: '<S207>:690' */
            IMOR_ac_DW.is_IMOR_CodeVrfy = IMOR_ac_IN_IMOR_CodeVrfy_RG1;
            IMOR_ac_enter_atomic_IMOR_CodeVrfy_RG1(Switch1, Switch2, Switch3,
                Switch4, Switch5);
        }
        break;

      case IMOR_ac_IN_IMOR_CodeVrfy_NACKSent:
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CV_NACKSent;
        IMOR_ac_B.VeIMOR_y_CntrlEncdReq_Arb = KeIMOR_y_CntrlEncdReq15;

        /* During 'IMOR_CodeVrfy_NACKSent': '<S207>:33' */
        if (IMOR_ac_B.VeIMOR_t_StateTimer_Arb > KeIMOR_t_CV_PrplsnDisblDly)
        {
            /* Transition: '<S207>:93' */
            IMOR_ac_DW.is_IMOR_CodeVrfy =
                IMOR_ac_IN_IMOR_CodeVrfy_VrfyPrplsnDisbl;

            /* Entry 'IMOR_CodeVrfy_VrfyPrplsnDisbl': '<S207>:34' */
            IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CV_PrplsnDisbl;
            IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = false;
            IMOR_ac_B.VeIMOR_b_AuthValidArb = false;
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
        }
        else
        {
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
            IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = false;
        }
        break;

      case IMOR_ac_IN_IMOR_CodeVrfy_NegUC:
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CV_NegUC;

        /* During 'IMOR_CodeVrfy_NegUC': '<S207>:30' */
        if (IMOR_ac_B.VeIMOR_t_StateTimer_Arb > KeIMOR_t_CV_NACKDly)
        {
            /* Transition: '<S207>:92' */
            /* Exit 'IMOR_CodeVrfy_NegUC': '<S207>:30' */
            IMOR_ac_DW.is_IMOR_CodeVrfy = IMOR_ac_IN_IMOR_CodeVrfy_NACKSent;
            IMOR_enter_atomic_IMOR_CodeVrfy_NACKSent();
        }
        else if (VeIMOR_b_KeyInRunNoPSA)
        {
            /* Transition: '<S207>:120' */
            /* Transition: '<S207>:150' */
            /* Transition: '<S207>:152' */
            /* Transition: '<S207>:153' */
            /* Transition: '<S207>:151' */
            /* Transition: '<S207>:114' */
            /* Transition: '<S207>:116' */
            /* Transition: '<S207>:117' */
            /* Transition: '<S207>:119' */
            /* Transition: '<S207>:121' */
            /* Transition: '<S207>:125' */
            /* Exit 'IMOR_CodeVrfy_NegUC': '<S207>:30' */
            IMOR_ac_DW.is_IMOR_CodeVrfy = IMOR_ac_IN_IMOR_CodeVrfy_KCInit;
            IMOR_a_enter_atomic_IMOR_CodeVrfy_KCInit();
        }
        else
        {
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
        }
        break;

      case IMOR_ac_IN_IMOR_CodeVrfy_OVCopyF1G2:
        /* During 'IMOR_CodeVrfy_OVCopyF1G2': '<S207>:587' */
        /* Transition: '<S207>:591' */
        IMOR_ac_DW.is_IMOR_CodeVrfy = IMOR_ac_IN_IMOR_CodeVrfy_CopyF1G1;

        /* Entry 'IMOR_CodeVrfy_CopyF1G1': '<S207>:28' */
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CV_CopyF1G1;
        IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
        IMOR_ac_B.VeIMOR_b_InvokeMKA = false;
        VeIMOR_y_MiniKrypt_extF1_1 = ExtractByte((WORD_1)IMOR_ac_B.VeIMOR_d_F1,
            (BYTE_1)1U);
        VeIMOR_y_MiniKrypt_extF1_2 = ExtractByte((WORD_1)IMOR_ac_B.VeIMOR_d_F1,
            (BYTE_1)0U);
        VeIMOR_y_MiniKrypt_extG1_1 = ExtractByte((WORD_1)
            IMOR_ac_B.VeIMOR_d_G1_Arb, (BYTE_1)1U);
        VeIMOR_y_MiniKrypt_extG1_2 = ExtractByte((WORD_1)
            IMOR_ac_B.VeIMOR_d_G1_Arb, (BYTE_1)0U);
        VeIMOR_y_f1_1gen = VeIMOR_y_MiniKrypt_extF1_1;
        VeIMOR_y_f1_2gen = VeIMOR_y_MiniKrypt_extF1_2;
        break;

      case IMOR_ac_IN_IMOR_CodeVrfy_RG:
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CV_RandNumGen;

        /* During 'IMOR_CodeVrfy_RG': '<S207>:25' */
        if (IMOR_ac_B.VeIMOR_t_StateTimer_Arb >= KeIMOR_t_InvkMKADly)
        {
            /* Transition: '<S207>:85' */
            IMOR_ac_DW.is_IMOR_CodeVrfy = IMOR_ac_IN_IMOR_CodeVrfy_InvkMKA;

            /* Entry 'IMOR_CodeVrfy_InvkMKA': '<S207>:27' */
            IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CV_EnblMKA;
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
            IMOR_ac_B.VeIMOR_b_InvokeMKA = true;
            VeIMOR_e_HCPStatCanC = CeIMOR_e_HCPIS;
            IMOR_ac_B.VeIMOR_b_F1G1Generated = IMOR_ac_Call_Check_F1G1Gen();
        }
        else
        {
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
        }
        break;

      case IMOR_ac_IN_IMOR_CodeVrfy_RG1:
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CV_RandNumGen_BSW;

        /* During 'IMOR_CodeVrfy_RG1': '<S207>:686' */
        if (IMOR_ac_B.VeIMOR_t_StateTimer_Arb >= KeIMOR_t_InvkMKADly)
        {
            /* Transition: '<S207>:691' */
            IMOR_ac_DW.is_IMOR_CodeVrfy = IMOR_ac_IN_IMOR_CodeVrfy_InvkMKA;

            /* Entry 'IMOR_CodeVrfy_InvkMKA': '<S207>:27' */
            IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CV_EnblMKA;
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
            IMOR_ac_B.VeIMOR_b_InvokeMKA = true;
            VeIMOR_e_HCPStatCanC = CeIMOR_e_HCPIS;
            IMOR_ac_B.VeIMOR_b_F1G1Generated = IMOR_ac_Call_Check_F1G1Gen();
        }
        else
        {
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
        }
        break;

      case IMOR_ac_IN_IMOR_CodeVrfy_RstStateTmr:
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CV_RstStateTmr;

        /* During 'IMOR_CodeVrfy_RstStateTmr': '<S207>:39' */
        if (!VeIMOR_b_KeyCrank)
        {
            /* Transition: '<S207>:156' */
            IMOR_ac_DW.is_IMOR_CodeVrfy =
                IMOR_ac_IN_IMOR_CodeVrfy_VrfyPrplsnEnbl;

            /* Entry 'IMOR_CodeVrfy_VrfyPrplsnEnbl': '<S207>:36' */
            IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CV_PrplsnEnbl;
            IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = false;
            IMOR_ac_B.VeIMOR_b_AuthValidArb = true;
            VeIMOR_e_HCPStatCanC = CeIMOR_e_HCPRUN;
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
        }
        else
        {
            if (VeIMOR_b_ValidKeyCycle)
            {
                /* Transition: '<S207>:713' */
                IMOR_ac_B.VeIMOR_b_AuthValidArb = false;
                IMOR_ac_DW.is_IMOR_CodeVrfy = IMOR_ac_IN_NO_ACTIVE_CHILD;
                IMOR_ac_DW.is_c1_IMOR_ac = IMOR_ac_IN_IMOR_ImmobEnbld;

                /* Entry 'IMOR_ImmobEnbld': '<S207>:5' */
                IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_ImmobEnbld;
                IMOR_ac_B.VeIMOR_b_HCPNotProg_Arb = true;
            }
        }
        break;

      case IMOR_ac_IN_IMOR_CodeVrfy_VrfyCntInc:
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CV_VrfyCntInc;

        /* During 'IMOR_CodeVrfy_VrfyCntInc': '<S207>:32' */
        if (IMOR_ac_B.VeIMOR_cnt_CodeVrfyCnt_Arb < KeIMOR_cnt_CodeVrfyMaxLmt)
        {
            /* Transition: '<S207>:96' */
            IMOR_ac_DW.is_IMOR_CodeVrfy = IMOR_ac_IN_IMOR_CodeVrfy_F1G1Gen;
            IMOR__enter_atomic_IMOR_CodeVrfy_F1G1Gen();
        }
        else if (IMOR_ac_B.VeIMOR_cnt_CodeVrfyCnt_Arb >=
                 KeIMOR_cnt_CodeVrfyMaxLmt)
        {
            /* Transition: '<S207>:95' */
            /* Transition: '<S207>:97' */
            IMOR_ac_B.VeIMOR_b_BCMNoVerifResp_Arb = true;
            IMOR_ac_DW.is_IMOR_CodeVrfy = IMOR_ac_IN_IMOR_CodeVrfy_NACKSent;
            IMOR_enter_atomic_IMOR_CodeVrfy_NACKSent();
        }
        else
        {
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
        }
        break;

      case IMOR_ac_IN_IMOR_CodeVrfy_VrfyPrplsnDisbl:
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CV_PrplsnDisbl;

        /* During 'IMOR_CodeVrfy_VrfyPrplsnDisbl': '<S207>:34' */
        if (VeIMOR_b_ValidKeyCycle)
        {
            /* Transition: '<S207>:154' */
            /* Transition: '<S207>:153' */
            /* Transition: '<S207>:151' */
            /* Transition: '<S207>:114' */
            /* Transition: '<S207>:116' */
            /* Transition: '<S207>:117' */
            /* Transition: '<S207>:119' */
            /* Transition: '<S207>:121' */
            /* Transition: '<S207>:125' */
            IMOR_ac_DW.is_IMOR_CodeVrfy = IMOR_ac_IN_IMOR_CodeVrfy_KCInit;
            IMOR_a_enter_atomic_IMOR_CodeVrfy_KCInit();
        }
        else
        {
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
        }
        break;

      case IMOR_ac_IN_IMOR_CodeVrfy_VrfyPrplsnEnbl:
        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CV_PrplsnEnbl;

        /* During 'IMOR_CodeVrfy_VrfyPrplsnEnbl': '<S207>:36' */
        if (VeIMOR_b_ValidKeyCycle)
        {
            /* Transition: '<S207>:112' */
            /* Transition: '<S207>:114' */
            /* Transition: '<S207>:116' */
            /* Transition: '<S207>:117' */
            /* Transition: '<S207>:119' */
            /* Transition: '<S207>:121' */
            /* Transition: '<S207>:125' */
            IMOR_ac_DW.is_IMOR_CodeVrfy = IMOR_ac_IN_IMOR_CodeVrfy_KCInit;
            IMOR_a_enter_atomic_IMOR_CodeVrfy_KCInit();
        }
        else if (VeIMOR_b_KeyCrank)
        {
            /* Transition: '<S207>:155' */
            IMOR_ac_DW.is_IMOR_CodeVrfy = IMOR_ac_IN_IMOR_CodeVrfy_RstStateTmr;

            /* Entry 'IMOR_CodeVrfy_RstStateTmr': '<S207>:39' */
            IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CV_RstStateTmr;
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
        }
        else if (((IMOR_ac_B.VeIMOR_t_StateTimer_Arb >= KeIMOR_t_RepeatDly) && (
                   !VeIMOR_b_KeyCrank)) || (VeIMOR_b_ValidKeyCycle))
        {
            /* Transition: '<S207>:625' */
            IMOR_ac_B.VeIMOR_b_AuthValidArb = false;
            IMOR_ac_DW.is_IMOR_CodeVrfy = IMOR_ac_IN_NO_ACTIVE_CHILD;
            IMOR_ac_DW.is_c1_IMOR_ac = IMOR_ac_IN_IMOR_ImmobEnbld;

            /* Entry 'IMOR_ImmobEnbld': '<S207>:5' */
            IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_ImmobEnbld;
            IMOR_ac_B.VeIMOR_b_HCPNotProg_Arb = true;
        }
        else
        {
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
        }
        break;

      default:
        IMOR_ac_IMOR_CodeVrfy_VrfyRspRcvd();
        break;
    }
}

#endif

/* Function for Chart: '<S193>/ECM_BCM_Monitor' */
#if !Rte_SysCon_Variant_IMOR_3 && Rte_SysCon_Variant_IMOR_1

static void IMOR__enter_atomic_IMOR_ECMKO_StartTimer
{
    /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMStat' */
    /* Entry 'IMOR_ECMKO_StartTimer': '<S197>:327' */
    IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMStat = CeIMOR_e_ECMKO_StartTimer;

    /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMPassed' */
    IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMPassed = false;

    /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMNoSOPResp' */
    IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMNoSOPR = false;

    /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMnoWU' */
    IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMnoWU = false;

    /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMWUnoHandshake' */
    IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMWUnoHa = false;

    /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMFailedRationality' */
    IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMFailed = false;

    /* VariantMerge generated from: '<S83>/VeIMOR_b_ImmoSOPRequest' */
    IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ImmoSOPRe = false;

    /* VariantMerge generated from: '<S83>/VeIMOR_b_EngDsbldToIC' */
    IMOR_ac_B.VariantMergeForOutportVeIMOR_b_EngDsbldT = false;

    /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMHCPStatCanC' */
    IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMHCPSta = CeIMOR_e_HCPIS;

    /* VariantMerge generated from: '<S83>/VeIMOR_Cnt_SOPsentCnt' */
    IMOR_ac_B.VariantMergeForOutportVeIMOR_Cnt_SOPsent = 0.0F;

    /* VariantMerge generated from: '<S83>/VeIMOR_t_ECMStateTimer' */
    IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT = 0.0F;
}

#endif

/* Function for Chart: '<S193>/ECM_BCM_Monitor' */
#if !Rte_SysCon_Variant_IMOR_3 && Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_IMOR_ECMRpt_SendinSOP
{
    boolean guard1 = false;

    /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMStat' */
    IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMStat = CeIMOR_e_ECMRpt_SendinSOP;

    /* During 'IMOR_ECMRpt_SendinSOP': '<S197>:292' */
    guard1 = false;
    if ((((IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT >=
            KeIMOR_t_ECMSOPDelay) && ((((uint32)
             IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmo_h) !=
            CeIMOR_e_ECMcIS) || (((uint32)
             IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmoSt) !=
            CeIMOR_e_ECMeIS))) &&
            (IMOR_ac_B.VariantMergeForOutportVeIMOR_Cnt_SOPsent >
             KeIMOR_Cnt_SOPsent)) || ((((uint32)
            IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmo_h) ==
            CeIMOR_e_HCPKILL) && (((uint32)
            IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmoSt) ==
            CeIMOR_e_HCPKILL)))
    {
        /* VariantMerge generated from: '<S83>/VeIMOR_b_ImmoSOPRequest' */
        /* Transition: '<S197>:300' */
        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ImmoSOPRe = false;

        /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMNoSOPResp' */
        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMNoSOPR = true;

        /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMPassed' */
        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMPassed = false;

        /* VariantMerge generated from: '<S83>/VeIMOR_b_CANepTMsgSndReq' */
        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_CANepTMsg = false;

        /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMHCPStatCanC' */
        IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMHCPSta = CeIMOR_e_HCPKILL;
        if (((VeIMOR_b_ECMReset) || (VeIMOR_b_ECUValidKeyCycle)) ||
                (VeIMOR_b_KeyON))
        {
            /* Transition: '<S197>:269' */
            IMOR_ac_DW.is_IMOR_Repeat = IMOR_ac_IN_NO_ACTIVE_CHILD;
            IMOR_ac_DW.is_c35_IMOR_ac = IMOR_ac_IN_IMOR_KeyOn;
            IMOR_ac_DW.is_IMOR_KeyOn = IMOR_ac_IN_IMOR_ECMKO_StartTimer;
            IMOR__enter_atomic_IMOR_ECMKO_StartTimer();
        }
        else
        {
            guard1 = true;
        }
    }
    else
    {
        guard1 = true;
    }

    if (guard1)
    {
        if ((((IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT <=
                KeIMOR_t_ECMSOPDelay) && (((uint32)
                IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmo_h) ==
                CeIMOR_e_ECMcIS)) && (((uint32)
                IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmoSt) ==
                CeIMOR_e_ECMeIS)) &&
                (IMOR_ac_B.VariantMergeForOutportVeIMOR_Cnt_SOPsent <=
                 KeIMOR_Cnt_SOPsent))
        {
            /* Transition: '<S197>:298' */
            IMOR_ac_DW.is_IMOR_Repeat = IMOR_ac_IN_IMOR_ECMRpt_SOPRcvd;

            /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMStat' */
            /* Entry 'IMOR_ECMRpt_SOPRcvd': '<S197>:306' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMStat =
                CeIMOR_e_ECMRpt_SOPRcvd;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMPassed' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMPassed = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMNoSOPResp' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMNoSOPR = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMnoWU' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMnoWU = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMWUnoHandshake' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMWUnoHa = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMFailedRationality' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMFailed = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ImmoSOPRequest' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ImmoSOPRe = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_EngDsbldToIC' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_EngDsbldT = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMHCPStatCanC' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMHCPSta = CeIMOR_e_HCPIS;

            /* VariantMerge generated from: '<S83>/VeIMOR_t_ECMStateTimer' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT = 0.0F;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_CANepTMsgSndReq' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_CANepTMsg = false;
        }
        else if (((IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT >=
                   KeIMOR_t_ECMSOPDelay) && ((((uint32)
                     IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmo_h) !=
                    CeIMOR_e_ECMcIS) || (((uint32)
                     IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmoSt) !=
                    CeIMOR_e_ECMeIS))) &&
                 (IMOR_ac_B.VariantMergeForOutportVeIMOR_Cnt_SOPsent <=
                  KeIMOR_Cnt_SOPsent))
        {
            /* Transition: '<S197>:294' */
            IMOR_ac_DW.is_IMOR_Repeat = IMOR_ac_IN_IMOR_ECMRpt_TimerWait;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ImmoSOPRequest' */
            /* Entry 'IMOR_ECMRpt_TimerWait': '<S197>:424' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ImmoSOPRe = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_CANepTMsgSndReq' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_CANepTMsg = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMHCPStatCanC' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMHCPSta = CeIMOR_e_HCPIS;

            /* VariantMerge generated from: '<S83>/VeIMOR_t_ECMStateTimer' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT = 0.0F;
        }
        else if (IMOR_ac_B.VeIMOR_b_KeyONpostCRANK_a)
        {
            /* VariantMerge generated from: '<S83>/VeIMOR_b_CANepTMsgSndReq' */
            /* Transition: '<S197>:493' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_CANepTMsg = false;

            /* Transition: '<S197>:495' */
            /* Transition: '<S197>:496' */
            IMOR_ac_DW.is_IMOR_Repeat = IMOR_ac_IN_IMOR_ECMRpt_Complete;

            /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMStat' */
            /* Entry 'IMOR_ECMRpt_Complete': '<S197>:275' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMStat =
                CeIMOR_e_ECMRpt_Complete;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMPassed' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMPassed = true;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMNoSOPResp' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMNoSOPR = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMnoWU' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMnoWU = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMWUnoHandshake' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMWUnoHa = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMFailedRationality' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMFailed = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ImmoSOPRequest' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ImmoSOPRe = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_EngDsbldToIC' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_EngDsbldT = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMHCPStatCanC' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMHCPSta = CeIMOR_e_HCPRUN;

            /* VariantMerge generated from: '<S83>/VeIMOR_t_ECMStateTimer' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT = 0.0F;
        }
        else
        {
            /* VariantMerge generated from: '<S83>/VeIMOR_t_ECMStateTimer' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT += KeIMOR_t_dT;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_CANepTMsgSndReq' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_CANepTMsg = false;
        }
    }
}

#endif

/* Function for Chart: '<S193>/ECM_BCM_Monitor' */
#if !Rte_SysCon_Variant_IMOR_3 && Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_enter_atomic_IMOR_ECMKO_Passed
{
    /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMStat' */
    /* Entry 'IMOR_ECMKO_Passed': '<S197>:233' */
    IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMStat = CeIMOR_e_ECMKO_Passed;

    /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMPassed' */
    IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMPassed = true;

    /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMNoSOPResp' */
    IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMNoSOPR = false;

    /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMnoWU' */
    IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMnoWU = false;

    /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMWUnoHandshake' */
    IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMWUnoHa = false;

    /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMFailedRationality' */
    IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMFailed = false;

    /* VariantMerge generated from: '<S83>/VeIMOR_b_ImmoSOPRequest' */
    IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ImmoSOPRe = false;

    /* VariantMerge generated from: '<S83>/VeIMOR_b_EngDsbldToIC' */
    IMOR_ac_B.VariantMergeForOutportVeIMOR_b_EngDsbldT = false;

    /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMHCPStatCanC' */
    IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMHCPSta = CeIMOR_e_HCPRUN;

    /* VariantMerge generated from: '<S83>/VeIMOR_Cnt_SOPsentCnt' */
    IMOR_ac_B.VariantMergeForOutportVeIMOR_Cnt_SOPsent = 0.0F;

    /* VariantMerge generated from: '<S83>/VeIMOR_t_ECMStateTimer' */
    IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT = 0.0F;
}

#endif

/* Function for Chart: '<S193>/ECM_BCM_Monitor' */
#if !Rte_SysCon_Variant_IMOR_3 && Rte_SysCon_Variant_IMOR_1

static void IMOR_ac_IMOR_KeyOn
{
    boolean guard1 = false;
    boolean guard2 = false;
    boolean guard3 = false;
    boolean guard4 = false;

    /* During 'IMOR_KeyOn': '<S197>:67' */
    guard1 = false;
    guard2 = false;
    guard3 = false;
    guard4 = false;
    switch (IMOR_ac_DW.is_IMOR_KeyOn)
    {
      case IMOR_ac_IN_IMOR_ECMKO_CANCheck:
        /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMStat' */
        IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMStat =
            CeIMOR_e_ECMKO_CANCheck;

        /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMFailedRationality' */
        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMFailed = false;

        /* VariantMerge generated from: '<S83>/VeIMOR_b_EngDsbldToIC' */
        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_EngDsbldT = false;

        /* During 'IMOR_ECMKO_CANCheck': '<S197>:215' */
        if (((IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT <
                KeIMOR_t_ECMRationalityTimer) &&
                (IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmo_h ==
                 ((TeIMOR_e_ECMStatCANC)
                  IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmoSt))) &&
                (((((uint32)IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmo_h) ==
                   CeIMOR_e_ECMcRUN) || (((uint32)
                IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmo_h) ==
                CeIMOR_e_ECMcKILL)) || (((uint32)
                IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmo_h) ==
                CeIMOR_e_ECMcSNA)))
        {
            /* Transition: '<S197>:223' */
            if ((((uint32)IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmo_h) ==
                 CeIMOR_e_ECMcRUN) && (((uint32)
                                        IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmoSt)
                 == CeIMOR_e_ECMeRUN))
            {
                /* Transition: '<S197>:235' */
                IMOR_ac_DW.is_IMOR_KeyOn = IMOR_ac_IN_IMOR_ECMKO_Passed;
                IMOR_ac_enter_atomic_IMOR_ECMKO_Passed();
            }
            else if (((((uint32)
                        IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmo_h) !=
                       CeIMOR_e_ECMcRUN) && (((uint32)
                        IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmoSt) !=
                       CeIMOR_e_ECMeRUN)) && (VeIMOR_b_KeyON))
            {
                /* Transition: '<S197>:227' */
                /* Transition: '<S197>:240' */
                /* Transition: '<S197>:241' */
                /* Transition: '<S197>:411' */
                /* Transition: '<S197>:422' */
                /* Transition: '<S197>:421' */
                /* Transition: '<S197>:416' */
                guard1 = true;
            }
            else
            {
                guard3 = true;
            }
        }
        else
        {
            guard3 = true;
        }
        break;

      case IMOR_ac_IN_IMOR_ECMKO_CheckComplete:
        /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMStat' */
        IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMStat =
            CeIMOR_e_ECMKO_CheckComplete;

        /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMFailedRationality' */
        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMFailed = false;

        /* VariantMerge generated from: '<S83>/VeIMOR_b_EngDsbldToIC' */
        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_EngDsbldT = false;

        /* VariantMerge generated from: '<S43>/VeIMOR_e_ECMImmoStatCanC' incorporates:
         *  VariantMerge generated from: '<S43>/VeIMOR_e_ECMImmoStatePT'
         *  VariantMerge generated from: '<S83>/VeIMOR_Cnt_SOPsentCnt'
         *  VariantMerge generated from: '<S83>/VeIMOR_b_ECMFailedRationality'
         *  VariantMerge generated from: '<S83>/VeIMOR_b_ECMNoSOPResp'
         *  VariantMerge generated from: '<S83>/VeIMOR_b_ECMPassed'
         *  VariantMerge generated from: '<S83>/VeIMOR_b_ECMWUnoHandshake'
         *  VariantMerge generated from: '<S83>/VeIMOR_b_ECMnoWU'
         *  VariantMerge generated from: '<S83>/VeIMOR_b_EngDsbldToIC'
         *  VariantMerge generated from: '<S83>/VeIMOR_b_ImmoSOPRequest'
         *  VariantMerge generated from: '<S83>/VeIMOR_e_ECMHCPStatCanC'
         *  VariantMerge generated from: '<S83>/VeIMOR_e_ECMStat'
         *  VariantMerge generated from: '<S83>/VeIMOR_t_ECMStateTimer'
         */
        /* During 'IMOR_ECMKO_CheckComplete': '<S197>:211' */
        if ((IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT <
                KeIMOR_t_ECMWUTimer) && ((((uint32)
                IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmo_h) !=
                CeIMOR_e_ECMcIS) || (((uint32)
                IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmoSt) !=
                CeIMOR_e_ECMeIS)))
        {
            /* Transition: '<S197>:218' */
            IMOR_ac_DW.is_IMOR_KeyOn = IMOR_ac_IN_IMOR_ECMKO_CANCheck;

            /* Entry 'IMOR_ECMKO_CANCheck': '<S197>:215' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMStat =
                CeIMOR_e_ECMKO_CANCheck;
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMPassed = false;
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMNoSOPR = false;
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMnoWU = false;
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMWUnoHa = false;
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMFailed = false;
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ImmoSOPRe = false;
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_EngDsbldT = false;
            IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMHCPSta = CeIMOR_e_HCPIS;
            IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT = 0.0F;
        }
        else if (IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT >=
                 KeIMOR_t_ECMWUTimer)
        {
            /* Transition: '<S197>:219' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMWUnoHa = true;
            IMOR_ac_DW.is_IMOR_KeyOn = IMOR_ac_IN_IMOR_ECMKO_DTC2_WUFail;

            /* Entry 'IMOR_ECMKO_DTC2_WUFail': '<S197>:210' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMStat =
                CeIMOR_e_ECMKO_DTC2_WUFail;
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMPassed = false;
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMNoSOPR = false;
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMFailed = false;
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ImmoSOPRe = false;
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_EngDsbldT = false;
            IMOR_ac_B.VariantMergeForOutportVeIMOR_Cnt_SOPsent = 0.0F;
            IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMHCPSta =
                CeIMOR_e_HCPKILL;
            IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT = 0.0F;
        }
        else if (VeIMOR_b_KeyON)
        {
            /* Transition: '<S197>:485' */
            /* Transition: '<S197>:489' */
            IMOR_ac_DW.is_IMOR_KeyOn = IMOR_ac_IN_IMOR_ECMKO_StartTimer;
            IMOR__enter_atomic_IMOR_ECMKO_StartTimer();
        }
        else
        {
            IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT += KeIMOR_t_dT;
        }

        /* End of VariantMerge generated from: '<S43>/VeIMOR_e_ECMImmoStatCanC' */
        break;

      case IMOR_ac_IN_IMOR_ECMKO_Crank:
        /* During 'IMOR_ECMKO_Crank': '<S197>:463' */
        if (!IMOR_ac_B.VeIMOR_b_KeyONpostCRANK_a)
        {
            /* Transition: '<S197>:468' */
            IMOR_ac_DW.is_IMOR_KeyOn = IMOR_ac_IN_IMOR_ECMKO_Passed;
            IMOR_ac_enter_atomic_IMOR_ECMKO_Passed();
        }
        else
        {
            if (VeIMOR_b_ECUValidKeyCycle)
            {
                /* Transition: '<S197>:466' */
                /* Transition: '<S197>:411' */
                /* Transition: '<S197>:422' */
                /* Transition: '<S197>:421' */
                /* Transition: '<S197>:416' */
                IMOR_ac_DW.is_IMOR_KeyOn = IMOR_ac_IN_IMOR_ECMKO_StartTimer;
                IMOR__enter_atomic_IMOR_ECMKO_StartTimer();
            }
        }
        break;

      case IMOR_ac_IN_IMOR_ECMKO_DTC2_WUFail:
        /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMStat' */
        IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMStat =
            CeIMOR_e_ECMKO_DTC2_WUFail;

        /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMFailedRationality' */
        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMFailed = false;

        /* VariantMerge generated from: '<S83>/VeIMOR_b_EngDsbldToIC' */
        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_EngDsbldT = false;

        /* During 'IMOR_ECMKO_DTC2_WUFail': '<S197>:210' */
        /* Transition: '<S197>:232' */
        /* Transition: '<S197>:236' */
        /* Transition: '<S197>:240' */
        if (VeIMOR_b_KeyON)
        {
            /* Transition: '<S197>:241' */
            /* Transition: '<S197>:411' */
            /* Transition: '<S197>:422' */
            /* Transition: '<S197>:421' */
            /* Transition: '<S197>:416' */
            IMOR_ac_DW.is_IMOR_KeyOn = IMOR_ac_IN_IMOR_ECMKO_StartTimer;
            IMOR__enter_atomic_IMOR_ECMKO_StartTimer();
        }
        else
        {
            /* VariantMerge generated from: '<S83>/VeIMOR_t_ECMStateTimer' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT += KeIMOR_t_dT;
        }
        break;

      case IMOR_ac_IN_IMOR_ECMKO_DTC3_NoRationality:
        /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMStat' */
        IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMStat =
            CeIMOR_e_ECMKO_DTC3_NoRationality;

        /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMFailedRationality' */
        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMFailed = true;

        /* VariantMerge generated from: '<S83>/VeIMOR_b_EngDsbldToIC' */
        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_EngDsbldT = false;

        /* During 'IMOR_ECMKO_DTC3_NoRationality': '<S197>:216' */
        /* Transition: '<S197>:226' */
        /* Transition: '<S197>:240' */
        if (VeIMOR_b_KeyON)
        {
            /* Transition: '<S197>:241' */
            /* Transition: '<S197>:411' */
            /* Transition: '<S197>:422' */
            /* Transition: '<S197>:421' */
            /* Transition: '<S197>:416' */
            IMOR_ac_DW.is_IMOR_KeyOn = IMOR_ac_IN_IMOR_ECMKO_StartTimer;
            IMOR__enter_atomic_IMOR_ECMKO_StartTimer();
        }
        break;

      case IMOR_ac_IN_IMOR_ECMKO_Passed:
        /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMStat' */
        IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMStat = CeIMOR_e_ECMKO_Passed;

        /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMFailedRationality' */
        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMFailed = false;

        /* VariantMerge generated from: '<S83>/VeIMOR_b_EngDsbldToIC' */
        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_EngDsbldT = false;

        /* During 'IMOR_ECMKO_Passed': '<S197>:233' */
        if ((!IMOR_ac_B.VeIMOR_b_KeyONpostCRANK_a) &&
                (IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT >=
                 KeIMOR_t_RepeatDly))
        {
            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMPassed' */
            /* Transition: '<S197>:120' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMPassed = false;
            if ((((uint32)IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmo_h) !=
                 CeIMOR_e_ECMcRUN) && (((uint32)
                                        IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmoSt)
                 != CeIMOR_e_ECMeRUN))
            {
                /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMPassed' */
                /* Transition: '<S197>:283' */
                IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMPassed = false;

                /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMHCPStatCanC' */
                IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMHCPSta =
                    CeIMOR_e_HCPKILL;

                /* Transition: '<S197>:384' */
                if (((VeIMOR_b_ECMReset) || (VeIMOR_b_ECUValidKeyCycle)) ||
                        (VeIMOR_b_KeyON))
                {
                    /* Transition: '<S197>:269' */
                    IMOR_ac_DW.is_c35_IMOR_ac = IMOR_ac_IN_IMOR_KeyOn;
                    IMOR_ac_DW.is_IMOR_KeyOn = IMOR_ac_IN_IMOR_ECMKO_StartTimer;
                    IMOR__enter_atomic_IMOR_ECMKO_StartTimer();
                }
                else
                {
                    guard4 = true;
                }
            }
            else
            {
                guard4 = true;
            }
        }
        else
        {
            guard2 = true;
        }
        break;

      default:
        /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMStat' */
        IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMStat =
            CeIMOR_e_ECMKO_StartTimer;

        /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMFailedRationality' */
        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMFailed = false;

        /* VariantMerge generated from: '<S83>/VeIMOR_b_EngDsbldToIC' */
        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_EngDsbldT = false;

        /* During 'IMOR_ECMKO_StartTimer': '<S197>:327' */
        if (((IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT <
                KeIMOR_t_ECMWUTimer) &&
                (IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmo_h ==
                 ((TeIMOR_e_ECMStatCANC)
                  IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmoSt))) &&
                ((((uint32)IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmo_h)
                  != CeIMOR_e_ECMcIS) || (((uint32)
                IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmoSt) !=
                CeIMOR_e_ECMeIS)))
        {
            /* Transition: '<S197>:461' */
            IMOR_ac_DW.is_IMOR_KeyOn = IMOR_ac_IN_IMOR_ECMKO_CANCheck;

            /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMStat' */
            /* Entry 'IMOR_ECMKO_CANCheck': '<S197>:215' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMStat =
                CeIMOR_e_ECMKO_CANCheck;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMPassed' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMPassed = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMNoSOPResp' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMNoSOPR = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMnoWU' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMnoWU = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMWUnoHandshake' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMWUnoHa = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMFailedRationality' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMFailed = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ImmoSOPRequest' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ImmoSOPRe = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_EngDsbldToIC' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_EngDsbldT = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMHCPStatCanC' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMHCPSta = CeIMOR_e_HCPIS;

            /* VariantMerge generated from: '<S83>/VeIMOR_t_ECMStateTimer' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT = 0.0F;
        }
        else if (((IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT <
                   KeIMOR_t_ECMWUTimer) && (((uint32)
                    IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmo_h) ==
                   CeIMOR_e_ECMcIS)) && (((uint32)
                   IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmoSt) ==
                  CeIMOR_e_ECMeIS))
        {
            /* Transition: '<S197>:332' */
            IMOR_ac_DW.is_IMOR_KeyOn = IMOR_ac_IN_IMOR_ECMKO_CheckComplete;

            /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMStat' */
            /* Entry 'IMOR_ECMKO_CheckComplete': '<S197>:211' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMStat =
                CeIMOR_e_ECMKO_CheckComplete;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMPassed' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMPassed = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMNoSOPResp' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMNoSOPR = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMnoWU' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMnoWU = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMWUnoHandshake' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMWUnoHa = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMFailedRationality' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMFailed = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ImmoSOPRequest' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ImmoSOPRe = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_EngDsbldToIC' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_EngDsbldT = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMHCPStatCanC' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMHCPSta = CeIMOR_e_HCPIS;

            /* VariantMerge generated from: '<S83>/VeIMOR_Cnt_SOPsentCnt' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_Cnt_SOPsent = 0.0F;
        }
        else if (IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT >=
                 KeIMOR_t_ECMWUTimer)
        {
            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMnoWU' */
            /* Transition: '<S197>:331' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMnoWU = true;
            IMOR_ac_DW.is_IMOR_KeyOn = IMOR_ac_IN_IMOR_ECMKO_DTC2_WUFail;

            /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMStat' */
            /* Entry 'IMOR_ECMKO_DTC2_WUFail': '<S197>:210' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMStat =
                CeIMOR_e_ECMKO_DTC2_WUFail;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMPassed' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMPassed = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMNoSOPResp' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMNoSOPR = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMFailedRationality' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMFailed = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ImmoSOPRequest' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ImmoSOPRe = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_EngDsbldToIC' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_EngDsbldT = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_Cnt_SOPsentCnt' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_Cnt_SOPsent = 0.0F;

            /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMHCPStatCanC' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMHCPSta =
                CeIMOR_e_HCPKILL;

            /* VariantMerge generated from: '<S83>/VeIMOR_t_ECMStateTimer' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT = 0.0F;
        }
        else if (VeIMOR_b_KeyON)
        {
            /* Transition: '<S197>:482' */
            IMOR_ac_DW.is_IMOR_KeyOn = IMOR_ac_IN_IMOR_ECMKO_StartTimer;
            IMOR__enter_atomic_IMOR_ECMKO_StartTimer();
        }
        else
        {
            /* VariantMerge generated from: '<S83>/VeIMOR_t_ECMStateTimer' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT += KeIMOR_t_dT;
        }
        break;
    }

    if (guard4)
    {
        if ((((uint32)IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmo_h) ==
                CeIMOR_e_ECMcRUN) && (((uint32)
                IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmoSt) ==
                CeIMOR_e_ECMeRUN))
        {
            /* Transition: '<S197>:289' */
            IMOR_ac_DW.is_IMOR_KeyOn = IMOR_ac_IN_NO_ACTIVE_CHILD;
            IMOR_ac_DW.is_c35_IMOR_ac = IMOR_ac_IN_IMOR_Repeat;
            IMOR_ac_DW.is_IMOR_Repeat = IMOR_ac_IN_IMOR_ECMRpt_CheckECM;

            /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMStat' */
            /* Entry 'IMOR_ECMRpt_CheckECM': '<S197>:272' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMStat =
                CeIMOR_e_ECMRpt_CheckECM;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMPassed' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMPassed = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMNoSOPResp' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMNoSOPR = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMnoWU' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMnoWU = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMWUnoHandshake' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMWUnoHa = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMFailedRationality' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMFailed = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ImmoSOPRequest' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ImmoSOPRe = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_EngDsbldToIC' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_EngDsbldT = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMHCPStatCanC' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMHCPSta = CeIMOR_e_HCPIS;

            /* VariantMerge generated from: '<S83>/VeIMOR_Cnt_SOPsentCnt' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_Cnt_SOPsent = 1.0F;

            /* VariantMerge generated from: '<S83>/VeIMOR_t_ECMStateTimer' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT = 0.0F;
        }
        else
        {
            guard2 = true;
        }
    }

    if (guard3)
    {
        if (IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT >=
                KeIMOR_t_ECMRationalityTimer)
        {
            /* Transition: '<S197>:224' */
            IMOR_ac_DW.is_IMOR_KeyOn = IMOR_ac_IN_IMOR_ECMKO_DTC3_NoRationality;

            /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMStat' */
            /* Entry 'IMOR_ECMKO_DTC3_NoRationality': '<S197>:216' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMStat =
                CeIMOR_e_ECMKO_DTC3_NoRationality;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMPassed' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMPassed = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMNoSOPResp' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMNoSOPR = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMnoWU' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMnoWU = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMWUnoHandshake' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMWUnoHa = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMFailedRationality' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMFailed = true;

            /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMHCPStatCanC' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMHCPSta =
                CeIMOR_e_HCPKILL;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ImmoSOPRequest' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ImmoSOPRe = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_EngDsbldToIC' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_EngDsbldT = false;
        }
        else if (VeIMOR_b_KeyON)
        {
            /* Transition: '<S197>:487' */
            /* Transition: '<S197>:488' */
            /* Transition: '<S197>:489' */
            guard1 = true;
        }
        else
        {
            /* VariantMerge generated from: '<S83>/VeIMOR_t_ECMStateTimer' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT += KeIMOR_t_dT;
        }
    }

    if (guard2)
    {
        if (VeIMOR_b_ECUValidKeyCycle)
        {
            /* Transition: '<S197>:242' */
            /* Transition: '<S197>:411' */
            /* Transition: '<S197>:422' */
            /* Transition: '<S197>:421' */
            /* Transition: '<S197>:416' */
            IMOR_ac_DW.is_IMOR_KeyOn = IMOR_ac_IN_IMOR_ECMKO_StartTimer;
            IMOR__enter_atomic_IMOR_ECMKO_StartTimer();
        }
        else if (IMOR_ac_B.VeIMOR_b_KeyONpostCRANK_a)
        {
            /* Transition: '<S197>:467' */
            IMOR_ac_DW.is_IMOR_KeyOn = IMOR_ac_IN_IMOR_ECMKO_Crank;

            /* VariantMerge generated from: '<S83>/VeIMOR_Cnt_SOPsentCnt' */
            /* Entry 'IMOR_ECMKO_Crank': '<S197>:463' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_Cnt_SOPsent = 0.0F;

            /* VariantMerge generated from: '<S83>/VeIMOR_t_ECMStateTimer' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT = 0.0F;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMPassed' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMPassed = true;
        }
        else
        {
            /* VariantMerge generated from: '<S83>/VeIMOR_t_ECMStateTimer' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT += KeIMOR_t_dT;
        }
    }

    if (guard1)
    {
        IMOR_ac_DW.is_IMOR_KeyOn = IMOR_ac_IN_IMOR_ECMKO_StartTimer;
        IMOR__enter_atomic_IMOR_ECMKO_StartTimer();
    }
}

#endif

/* Model step function for TID1 */
FUNC(void, IMOR_CODE) IMOR_FastTEF /* Explicit Task: FastTEF */
{
    /* local block i/o variables */
#if Rte_SysCon_Variant_IMOR_1

    boolean rtb_VeIMOR_b_AuthValidVal_write_IRV;

#endif

#if Rte_SysCon_Variant_IMOR_1

    boolean rtb_KeyOff3secArb_write_IRV;

#endif

#if Rte_SysCon_Variant_IMOR_1

    boolean rtb_VeIMOR_b_InvokeMKA_Arb_write_IRV;

#endif

#if Rte_SysCon_Variant_IMOR_1

    TePMDR_e_PowerMode rtb_TmpSignalConversionAtVePMDR_e_PMM_Po;

#endif

#if Rte_SysCon_Variant_IMOR_1

    boolean tmpRead;

#endif

#if Rte_SysCon_Variant_IMOR_1

    boolean tmpRead_0;

#endif

#if Rte_SysCon_Variant_IMOR_1

    float32 tmpRead_1;

#endif

#if Rte_SysCon_Variant_IMOR_1

    boolean tmpRead_2;

#endif

#if Rte_SysCon_Variant_IMOR_1

    TeIMOR_e_ECMStatCANC tmpRead_3;

#endif

#if Rte_SysCon_Variant_IMOR_1

    boolean tmpRead_4;

#endif

#if Rte_SysCon_Variant_IMOR_1

    TeIMOR_e_ECMStatCANePT tmpRead_5;

#endif

#if Rte_SysCon_Variant_IMOR_1

    boolean tmpRead_6;

#endif

#if Rte_SysCon_Variant_IMOR_1

    boolean tmpRead_7;

#endif

#if Rte_SysCon_Variant_IMOR_1

    boolean rtb_VeIMOR_b_KeyInRunNoPSA;

#endif

#if Rte_SysCon_Variant_IMOR_1

    boolean rtb_VeIMOR_b_ValidKeyCycle;

#endif

#if Rte_SysCon_Variant_IMOR_1

    boolean rtb_VM_Conditional_Signal_PropSysActv_En;

#endif

#if Rte_SysCon_Variant_IMOR_1

    boolean rtb_VM_Conditional_Signal_VeIMOR_b_ECMRe;

#endif

#if Rte_SysCon_Variant_IMOR_1

    boolean rtb_DataStoreRead8;

#endif

#if Rte_SysCon_Variant_IMOR_1

    float32 rtb_Abs1;

#endif

#if Rte_SysCon_Variant_IMOR_1

    float32 rtb_Abs8;

#endif

#if Rte_SysCon_Variant_IMOR_1

    float32 rtb_Abs2;

#endif

#if Rte_SysCon_Variant_IMOR_1

    float32 rtb_Abs3;

#endif

#if Rte_SysCon_Variant_IMOR_1

    uint16 rtb_Switch3_b;

#endif

#if Rte_SysCon_Variant_IMOR_1

    uint8 rtb_TmpSignalConversionAtVeBSWR_Cnt_Immo;

#endif

#if Rte_SysCon_Variant_IMOR_1

    boolean rtb_Logical4_j1;

#endif

#if Rte_SysCon_Variant_IMOR_1

    sint8 rtPrevAction;

#endif

#if Rte_SysCon_Variant_IMOR_1

    boolean rtb_TmpSignalConversionAtVeBSWR_b_ImmoAu;

#endif

#if Rte_SysCon_Variant_IMOR_1

    boolean rtb_AND_ec;

#endif

#if Rte_SysCon_Variant_IMOR_1

    float32 rtb_Product5_k;

#endif

#if Rte_SysCon_Variant_IMOR_1

    boolean DataStoreRead7;

#endif

#if Rte_SysCon_Variant_IMOR_1

    uint8 Switch1;

#endif

#if Rte_SysCon_Variant_IMOR_1

    uint8 Switch2;

#endif

#if Rte_SysCon_Variant_IMOR_1

    uint8 Switch3;

#endif

#if Rte_SysCon_Variant_IMOR_1

    TeIMOR_e_EEPROG_STATUS Switch;

#endif

#if Rte_SysCon_Variant_IMOR_1

    uint8 TmpSignalConversionAtVeIMOR_y_CntrlEncdR;

#endif

#if Rte_SysCon_Variant_IMOR_1

    VaIMOR_y_ImmoCodeReq BusIMMO_CODE_REQUEST_FD3;

#endif

#if Rte_SysCon_Variant_IMOR_1

    uint8 Switch4;

#endif

#if Rte_SysCon_Variant_IMOR_1

    uint8 Switch5;

#endif

#if Rte_SysCon_Variant_IMOR_1

    sint32 VeIMOR_y_Rand1Sgn_tmp;

#endif

#if Rte_SysCon_Variant_IMOR_1

    sint32 VeIMOR_y_Rand2Sgn_tmp;

#endif

#if Rte_SysCon_Variant_IMOR_1

    TeIMOR_e_HCPImmoStatCanC VeIMOR_b_SetP1A11_Fail_tmp;

#endif

#if !Rte_SysCon_Variant_IMOR_3 && Rte_SysCon_Variant_IMOR_1

    boolean guard1 = false;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/IMOR_FastTEF'
     */
    /* SignalConversion generated from: '<S6>/VeIMOR_b_AuthValidVal_read' incorporates:
     *  Inport: '<Root>/VeHPMR_b_PropSysActv'
     *  Inport: '<Root>/VePITR_b_ECMImmoStatCanC_FA'
     *  Inport: '<Root>/VePITR_b_ECMImmoStatePT_FA'
     *  Inport: '<Root>/VePITR_b_ECMReset'
     *  Inport: '<Root>/VePITR_e_ECMImmoStatCanC'
     *  Inport: '<Root>/VePITR_e_ECMImmoStatePT'
     *  Inport: '<Root>/VePMDR_b_RunCrankActiveAnalog'
     *  Inport: '<Root>/VeTISR_b_InputSpeedFA'
     *  Inport: '<Root>/VeTISR_n_InputSpeed'
     *  Logic: '<S391>/AND'
     *  SignalConversion generated from: '<S6>/KeyOff3secArb_write'
     *  SignalConversion generated from: '<S6>/VeIMOR_Cnt_SOPsentCnt'
     *  SignalConversion generated from: '<S6>/VeIMOR_b_AuthValidVal_write'
     *  SignalConversion generated from: '<S6>/VeIMOR_b_AuthenticationValid'
     *  SignalConversion generated from: '<S6>/VeIMOR_b_BCMFailedG1G2'
     *  SignalConversion generated from: '<S6>/VeIMOR_b_BCMFailedVerif'
     *  SignalConversion generated from: '<S6>/VeIMOR_b_BCMMiniKeyNotStoredRec'
     *  SignalConversion generated from: '<S6>/VeIMOR_b_BCMNoENQpResponse'
     *  SignalConversion generated from: '<S6>/VeIMOR_b_BCMNoPRAorMiniKeyRec'
     *  SignalConversion generated from: '<S6>/VeIMOR_b_BCMNoSecondRespRec'
     *  SignalConversion generated from: '<S6>/VeIMOR_b_BCMNoVerifResp'
     *  SignalConversion generated from: '<S6>/VeIMOR_b_BCMRespBadG2Verify'
     *  SignalConversion generated from: '<S6>/VeIMOR_b_BCMRespTENRec'
     *  SignalConversion generated from: '<S6>/VeIMOR_b_BCMRespTENVerify'
     *  SignalConversion generated from: '<S6>/VeIMOR_b_BCMRespUCVerify'
     *  SignalConversion generated from: '<S6>/VeIMOR_b_CANMsgSndReq'
     *  SignalConversion generated from: '<S6>/VeIMOR_b_CANepTMsgSndReq'
     *  SignalConversion generated from: '<S6>/VeIMOR_b_ECMFailedRationality'
     *  SignalConversion generated from: '<S6>/VeIMOR_b_ECMNoSOPResp'
     *  SignalConversion generated from: '<S6>/VeIMOR_b_ECMPassed'
     *  SignalConversion generated from: '<S6>/VeIMOR_b_ECMWUnoHandshake'
     *  SignalConversion generated from: '<S6>/VeIMOR_b_ECMnoWU'
     *  SignalConversion generated from: '<S6>/VeIMOR_b_EngDsbldToIC'
     *  SignalConversion generated from: '<S6>/VeIMOR_b_FstRstFnArb'
     *  SignalConversion generated from: '<S6>/VeIMOR_b_HCPNotProg'
     *  SignalConversion generated from: '<S6>/VeIMOR_b_ImmoSOPRequest'
     *  SignalConversion generated from: '<S6>/VeIMOR_b_InvokeMKA_Arb_write'
     *  SignalConversion generated from: '<S6>/VeIMOR_b_WrtCRCmpltToE2'
     *  SignalConversion generated from: '<S6>/VeIMOR_b_WrtMKeyToE2'
     *  SignalConversion generated from: '<S6>/VeIMOR_cnt_CodeVrfyCnt'
     *  SignalConversion generated from: '<S6>/VeIMOR_cnt_IMORRecCnt'
     *  SignalConversion generated from: '<S6>/VeIMOR_d_G1'
     *  SignalConversion generated from: '<S6>/VeIMOR_d_RandonNumber'
     *  SignalConversion generated from: '<S6>/VeIMOR_d_SecKey_h'
     *  SignalConversion generated from: '<S6>/VeIMOR_d_SecKey_l'
     *  SignalConversion generated from: '<S6>/VeIMOR_e_ECMStat'
     *  SignalConversion generated from: '<S6>/VeIMOR_e_HCPImmoStatCanC_FC'
     *  SignalConversion generated from: '<S6>/VeIMOR_e_IMORStat'
     *  SignalConversion generated from: '<S6>/VeIMOR_t_ECMStateTimer'
     *  SignalConversion generated from: '<S6>/VeIMOR_t_StateTimer'
     *  SignalConversion generated from: '<S6>/VeIMOR_y_AuthCmd00'
     *  SignalConversion generated from: '<S6>/VeIMOR_y_AuthCmd01'
     *  SignalConversion generated from: '<S6>/VeIMOR_y_AuthCmd02'
     *  SignalConversion generated from: '<S6>/VeIMOR_y_AuthCmd03'
     *  SignalConversion generated from: '<S6>/VeIMOR_y_AuthCmd04'
     *  SignalConversion generated from: '<S6>/VeIMOR_y_AuthCmd05'
     *  SignalConversion generated from: '<S6>/VeIMOR_y_AuthCmd06'
     *  SignalConversion generated from: '<S6>/VeIMOR_y_AuthCmd07'
     *  SignalConversion generated from: '<S6>/VeIMOR_y_AuthCmd08'
     *  SignalConversion generated from: '<S6>/VeIMOR_y_AuthCmd09'
     *  SignalConversion generated from: '<S6>/VeIMOR_y_AuthCmd10'
     *  SignalConversion generated from: '<S6>/VeIMOR_y_AuthCmd11'
     *  SignalConversion generated from: '<S6>/VeIMOR_y_AuthCmd12'
     *  SignalConversion generated from: '<S6>/VeIMOR_y_AuthCmd13'
     *  SignalConversion generated from: '<S6>/VeIMOR_y_AuthCmd14'
     *  SignalConversion generated from: '<S6>/VeIMOR_y_AuthCmd15'
     *  SignalConversion generated from: '<S6>/VeIMOR_y_AuthCmdCntrlEncdReq'
     *  SignalConversion generated from: '<S6>/VeIMOR_y_CntrlEncdReq'
     *  SignalConversion generated from: '<S6>/VeIMOR_y_MiniKryptF1_1'
     *  SignalConversion generated from: '<S6>/VeIMOR_y_MiniKryptF1_2'
     *  SignalConversion generated from: '<S6>/VeIMOR_y_MiniKryptG1_1'
     *  SignalConversion generated from: '<S6>/VeIMOR_y_MiniKryptG1_2'
     *  SignalConversion generated from: '<S6>/VeIMOR_y_rnd_1'
     *  SignalConversion generated from: '<S6>/VeIMOR_y_rnd_2'
     *  SignalConversion generated from: '<S6>/VeIMOR_y_rnd_3'
     *  SignalConversion generated from: '<S6>/VeIMOR_y_rnd_4'
     *  SignalConversion generated from: '<S6>/KeyOff3secArb_read'
     *  SignalConversion generated from: '<S6>/VeIMOR_b_InvokeMKA_Arb_read'
     *  SignalConversion generated from: '<S6>/VaIMOR_y_MMKeyStr_EE_Strimm_In'
     *  SignalConversion generated from: '<S6>/VeBSWR_Cnt_ImmoByPassCntr'
     *  SignalConversion generated from: '<S6>/VeBSWR_b_ImmoAuthValidMem'
     *  SignalConversion generated from: '<S6>/VeIMOR_b_ORC_HealthFA_Read'
     *  SignalConversion generated from: '<S6>/VeIMOR_b_VC_VehCfg2_StatFA_Read'
     *  SignalConversion generated from: '<S6>/VeIMOR_b_VC_VehCfg3_StatFA_Read'
     *  SignalConversion generated from: '<S6>/VeIMOR_b_VC_VehCfg4_StatFA_Read'
     *  SignalConversion generated from: '<S6>/VeIMOR_b_VC_VehCfg6_StatFA_Read'
     *  SignalConversion generated from: '<S6>/VeIMOR_y_CntrlEncdResp_Read'
     *  SignalConversion generated from: '<S6>/VeIMOR_y_MMKey1org21_Read'
     *  SignalConversion generated from: '<S6>/VeIMOR_y_MMKey1org22_Read'
     *  SignalConversion generated from: '<S6>/VeIMOR_y_MMKey_3_Read'
     *  SignalConversion generated from: '<S6>/VeIMOR_y_MMKey_4_Read'
     *  SignalConversion generated from: '<S6>/VeIMOR_y_MMKey_5_Read'
     *  SignalConversion generated from: '<S6>/VeIMOR_y_MMKey_6_Read'
     *  SignalConversion generated from: '<S6>/VePMDR_e_PMM_PowerMode'
     * */
#if Rte_SysCon_Variant_IMOR_1

    /* Outputs for Enabled SubSystem: '<S6>/Subsystem' */
    /* S-Function (fcgen): '<S6>/FcnCallGen' */
    /* SignalConversion generated from: '<S6>/VeIMOR_b_AuthValidVal_read' incorporates:
     *  Merge: '<Root>/Merge_1'
     */
    rtb_VeIMOR_b_AuthValidVal_write_IRV =
        Rte_IrvRead_IMOR_FastTEF_VeIMOR_b_AuthValidVal_write_IRV();

    /* SignalConversion generated from: '<S6>/KeyOff3secArb_read' incorporates:
     *  Merge: '<Root>/Merge_2'
     */
    rtb_KeyOff3secArb_write_IRV =
        Rte_IrvRead_IMOR_FastTEF_KeyOff3secArb_write_IRV();

    /* SignalConversion generated from: '<S6>/VeIMOR_b_InvokeMKA_Arb_read' incorporates:
     *  Merge: '<Root>/Merge_3'
     */
    rtb_VeIMOR_b_InvokeMKA_Arb_write_IRV =
        Rte_IrvRead_IMOR_FastTEF_VeIMOR_b_InvokeMKA_Arb_write_IRV();

    /* SignalConversion generated from: '<S6>/VePMDR_e_PMM_PowerMode' incorporates:
     *  Inport: '<Root>/VePMDR_e_PMM_PowerMode'
     */
    Rte_Read_VePMDR_e_PMM_PowerMode_Value
        (&rtb_TmpSignalConversionAtVePMDR_e_PMM_Po);

    /* SignalConversion generated from: '<S6>/VeIMOR_y_CntrlEncdResp_Read' incorporates:
     *  Merge: '<Root>/VeIMOR_y_CntrlEncdResp_IRV_Merge'
     */
    TmpSignalConversionAtVeIMOR_y_CntrlEncdR =
        Rte_IrvRead_IMOR_FastTEF_VeIMOR_y_CntrlEncdResp_write_IRV();

    /* SignalConversion generated from: '<S6>/VeIMOR_y_MMKey1org21_Read' incorporates:
     *  Merge: '<Root>/VeIMOR_y_MMKey1org21_IRV_Merge'
     */
    IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey1org2 =
        Rte_IrvRead_IMOR_FastTEF_VeIMOR_y_MMKey1org21_write_IRV();

    /* SignalConversion generated from: '<S6>/VeIMOR_y_MMKey1org22_Read' incorporates:
     *  Merge: '<Root>/VeIMOR_y_MMKey1org22_IRV_Merge'
     */
    IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey1or_i =
        Rte_IrvRead_IMOR_FastTEF_VeIMOR_y_MMKey1org22_write_IRV();

    /* SignalConversion generated from: '<S6>/VeIMOR_y_MMKey_3_Read' incorporates:
     *  Merge: '<Root>/VeIMOR_y_MMKey_3_IRV_Merge'
     */
    IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey_3_Re =
        Rte_IrvRead_IMOR_FastTEF_VeIMOR_y_MMKey_3_write_IRV();

    /* SignalConversion generated from: '<S6>/VeIMOR_y_MMKey_4_Read' incorporates:
     *  Merge: '<Root>/VeIMOR_y_MMKey_4_IRV_Merge'
     */
    IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey_4_Re =
        Rte_IrvRead_IMOR_FastTEF_VeIMOR_y_MMKey_4_write_IRV();

    /* SignalConversion generated from: '<S6>/VeIMOR_y_MMKey_5_Read' incorporates:
     *  Merge: '<Root>/VeIMOR_y_MMKey_5_IRV_Merge'
     */
    IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey_5_Re =
        Rte_IrvRead_IMOR_FastTEF_VeIMOR_y_MMKey_5_write_IRV();

    /* SignalConversion generated from: '<S6>/VeIMOR_y_MMKey_6_Read' incorporates:
     *  Merge: '<Root>/VeIMOR_y_MMKey_6_IRV_Merge'
     */
    IMOR_ac_B.TmpSignalConversionAtVeIMOR_y_MMKey_6_Re =
        Rte_IrvRead_IMOR_FastTEF_VeIMOR_y_MMKey_6_write_IRV();

    /* SignalConversion generated from: '<S6>/VaIMOR_y_MMKeyStr_EE_Strimm_In' incorporates:
     *  Inport: '<Root>/AaIMOR_y_MMKeyStr_EE_Strimm_in'
     */
    Rte_Read_AaIMOR_y_MMKeyStr_EE_Rx_AaIMOR_y_MMKeyStr_EE
        (IMOR_ac_B.TmpSignalConversionAtVaIMOR_y_MMKeyStr_E);

    /* SignalConversion generated from: '<S6>/VeBSWR_Cnt_ImmoByPassCntr' incorporates:
     *  Inport: '<Root>/AeIMOR_Cnt_ImmoByPassCntr_Strimm_in'
     */
    Rte_Read_AeIMOR_Cnt_ImmoByPassCntr_Rx_AeIMOR_Cnt_ImmoByPassCntr
        (&rtb_TmpSignalConversionAtVeBSWR_Cnt_Immo);

    /* SignalConversion generated from: '<S6>/VeBSWR_b_ImmoAuthValidMem' incorporates:
     *  Inport: '<Root>/AeIMOR_b_UpdtAuthStat_Strimm_in'
     */
    Rte_Read_AeIMOR_b_UpdtAuthStat_Rx_AeIMOR_b_UpdtAuthStat
        (&rtb_TmpSignalConversionAtVeBSWR_b_ImmoAu);

    /* Outputs for Function Call SubSystem: '<S6>/Immobilizer' */
    /* Outputs for Enabled SubSystem: '<S47>/Trgd_HCPBCM' incorporates:
     *  EnablePort: '<S199>/Enable'
     */
    if (VeIMOR_b_EnblDsbl)
    {
        IMOR_ac_DW.Trgd_HCPBCM_MODE = true;

        /* Switch: '<S200>/Switch' incorporates:
         *  DataStoreWrite: '<S200>/Data Store Write7'
         */
        if (!rtb_KeyOff3secArb_write_IRV)
        {
            EeIMOR_b_ImmoAuthValid_Mem = rtb_VeIMOR_b_AuthValidVal_write_IRV;
        }

        /* End of Switch: '<S200>/Switch' */

        /* DataStoreRead: '<S199>/Data Store Read7' */
        DataStoreRead7 = EeIMOR_b_MKeyStrToE2;

        /* DataStoreRead: '<S199>/Data Store Read8' */
        rtb_DataStoreRead8 = EeIMOR_b_ImmoAuthValid_Mem;

        /* Switch: '<S227>/Switch1' incorporates:
         *  Constant: '<S278>/Calib'
         */
        if (KeIMOR_b_MMKey1_Slct)
        {
            /* Switch: '<S227>/Switch1' */
            Switch1 = IMOR_ac_B.TmpSignalConversionAtVaIMOR_y_MMKeyStr_E[0];
        }
        else
        {
            /* Switch: '<S227>/Switch1' incorporates:
             *  DataStoreRead: '<S227>/Data Store Read1'
             */
            Switch1 = EeIMOR_y_MMKey1org21_Mem;
        }

        /* End of Switch: '<S227>/Switch1' */

        /* Switch: '<S227>/Switch2' incorporates:
         *  Constant: '<S279>/Calib'
         */
        if (KeIMOR_b_MMKey2_Slct)
        {
            /* Switch: '<S227>/Switch2' */
            Switch2 = IMOR_ac_B.TmpSignalConversionAtVaIMOR_y_MMKeyStr_E[1];
        }
        else
        {
            /* Switch: '<S227>/Switch2' incorporates:
             *  DataStoreRead: '<S227>/Data Store Read2'
             */
            Switch2 = EeIMOR_y_MMKey1org22_Mem;
        }

        /* End of Switch: '<S227>/Switch2' */

        /* Switch: '<S227>/Switch3' incorporates:
         *  Constant: '<S280>/Calib'
         */
        if (KeIMOR_b_MMKey3_Slct)
        {
            /* Switch: '<S227>/Switch3' */
            Switch3 = IMOR_ac_B.TmpSignalConversionAtVaIMOR_y_MMKeyStr_E[2];
        }
        else
        {
            /* Switch: '<S227>/Switch3' incorporates:
             *  DataStoreRead: '<S227>/Data Store Read3'
             */
            Switch3 = EeIMOR_y_MMKey_3_Mem;
        }

        /* End of Switch: '<S227>/Switch3' */

        /* Switch: '<S227>/Switch4' incorporates:
         *  Constant: '<S281>/Calib'
         */
        if (KeIMOR_b_MMKey4_Slct)
        {
            /* Switch: '<S227>/Switch4' */
            Switch4 = IMOR_ac_B.TmpSignalConversionAtVaIMOR_y_MMKeyStr_E[3];
        }
        else
        {
            /* Switch: '<S227>/Switch4' incorporates:
             *  DataStoreRead: '<S227>/Data Store Read4'
             */
            Switch4 = EeIMOR_y_MMKey_4_Mem;
        }

        /* End of Switch: '<S227>/Switch4' */

        /* Switch: '<S227>/Switch5' incorporates:
         *  Constant: '<S282>/Calib'
         */
        if (KeIMOR_b_MMKey5_Slct)
        {
            /* Switch: '<S227>/Switch5' */
            Switch5 = IMOR_ac_B.TmpSignalConversionAtVaIMOR_y_MMKeyStr_E[4];
        }
        else
        {
            /* Switch: '<S227>/Switch5' incorporates:
             *  DataStoreRead: '<S227>/Data Store Read5'
             */
            Switch5 = EeIMOR_y_MMKey_5_Mem;
        }

        /* End of Switch: '<S227>/Switch5' */

        /* Switch: '<S227>/Switch6' incorporates:
         *  Constant: '<S283>/Calib'
         */
        if (KeIMOR_b_MMKey6_Slct)
        {
            /* Switch: '<S227>/Switch6' */
            IMOR_ac_B.Switch6 =
                IMOR_ac_B.TmpSignalConversionAtVaIMOR_y_MMKeyStr_E[5];
        }
        else
        {
            /* Switch: '<S227>/Switch6' incorporates:
             *  DataStoreRead: '<S227>/Data Store Read6'
             */
            IMOR_ac_B.Switch6 = EeIMOR_y_MMKey_6_Mem;
        }

        /* End of Switch: '<S227>/Switch6' */
        Rte_Read_VeMTQR_M_MtrA_MaxTorq_LT_Value(&rtb_Abs8);
        Rte_Read_VeMTQR_M_MtrA_MinTorq_LT_Value(&rtb_Abs3);
        Rte_Read_VeMTQR_M_MtrB_MaxTorq_LT_Value(&rtb_Abs2);
        Rte_Read_VeMTQR_M_MtrB_MinTorq_LT_Value(&rtb_Abs1);

        /* Abs: '<S251>/Abs1' incorporates:
         *  DataStoreRead: '<S204>/Data Store Read4'
         *  Inport: '<Root>/VeMTQR_M_MtrA_MaxTorq_LT'
         *  Inport: '<Root>/VeMTQR_M_MtrA_MinTorq_LT'
         *  Inport: '<Root>/VeMTQR_M_MtrB_MaxTorq_LT'
         *  Inport: '<Root>/VeMTQR_M_MtrB_MinTorq_LT'
         *  Sum: '<S251>/Sum9'
         */
        rtb_Abs1 = fabsf(rtb_Abs1 - EeIMOR_M_Rand4_prev);

        /* Abs: '<S251>/Abs8' incorporates:
         *  DataStoreRead: '<S204>/Data Store Read1'
         *  Sum: '<S251>/Sum12'
         */
        rtb_Abs8 = fabsf(rtb_Abs8 - EeIMOR_M_Rand1_prev);

        /* Abs: '<S251>/Abs2' incorporates:
         *  DataStoreRead: '<S204>/Data Store Read3'
         *  Sum: '<S251>/Sum10'
         */
        rtb_Abs2 = fabsf(rtb_Abs2 - EeIMOR_M_Rand3_prev);

        /* Abs: '<S251>/Abs3' incorporates:
         *  DataStoreRead: '<S204>/Data Store Read2'
         *  Sum: '<S251>/Sum11'
         */
        rtb_Abs3 = fabsf(rtb_Abs3 - EeIMOR_M_Rand2_prev);

        /* Outputs for Atomic SubSystem: '<S204>/Counter Reset  Enabled 1' */
        /* Switch: '<S249>/Switch' incorporates:
         *  UnitDelay: '<S204>/Unit Delay6'
         */
        if (IMOR_ac_DW.UnitDelay6_DSTATE)
        {
            /* Switch: '<S249>/Switch' incorporates:
             *  Constant: '<S249>/Constant Value2'
             */
            VeIMOR_Cnt_RandCounter = 0U;
        }
        else
        {
            /* Switch: '<S249>/Switch' incorporates:
             *  Constant: '<S249>/Constant Value1'
             *  Sum: '<S249>/Subtraction'
             *  UnitDelay: '<S249>/Unit Delay'
             */
            VeIMOR_Cnt_RandCounter = (uint16)(((uint32)VeIMOR_Cnt_RandCounter) +
                1U);
        }

        /* End of Switch: '<S249>/Switch' */
        /* End of Outputs for SubSystem: '<S204>/Counter Reset  Enabled 1' */

        /* S-Function (sfix_bitop): '<S252>/Bitwise Logical Operator1' incorporates:
         *  DataTypeConversion: '<S251>/FloatToFix1'
         *  DataTypeConversion: '<S251>/FloatToFix4'
         *  S-Function (sfix_bitop): '<S252>/Bitwise Logical Operator10'
         *  S-Function (sfix_bitop): '<S252>/Bitwise Logical Operator7'
         */
        VeIMOR_y_Rand1Sgn_tmp = ((sint32)((uint16)rtb_Abs1)) & ((sint32)((uint16)
            rtb_Abs8));

        /* Product: '<S252>/Product2' incorporates:
         *  Constant: '<S252>/Constant Value'
         *  DataTypeConversion: '<S251>/FloatToFix2'
         *  DataTypeConversion: '<S251>/FloatToFix3'
         *  DataTypeConversion: '<S252>/Data Type Conversion14'
         *  S-Function (sfix_bitop): '<S252>/Bitwise Logical Operator1'
         *  S-Function (sfix_bitop): '<S252>/Bitwise Logical Operator2'
         *  S-Function (sfix_bitop): '<S252>/Bitwise Logical Operator4'
         */
        VeIMOR_y_Rand1Sgn = (((float32)((sint32)(VeIMOR_y_Rand1Sgn_tmp |
                                (((sint32)((uint16)rtb_Abs2)) & ((sint32)
            ((uint16)rtb_Abs3)))))) * ((float32)VeIMOR_Cnt_RandCounter)) *
            101.0F;

        /* Switch: '<S252>/Switch' incorporates:
         *  Constant: '<S255>/Calib'
         */
        if (KeIMOR_b_Rand1_SD)
        {
            /* Switch: '<S252>/Switch3' incorporates:
             *  Constant: '<S259>/Calib'
             */
            rtb_Switch3_b = KeIMOR_y_Rand1_Dial;
        }
        else
        {
            /* Product: '<S252>/Product5' incorporates:
             *  Constant: '<S252>/Constant Value4'
             */
            rtb_Product5_k = VeIMOR_y_Rand1Sgn / 65535.0F;

            /* Switch: '<S252>/Switch4' incorporates:
             *  Constant: '<S252>/Constant Value16'
             *  RelationalOperator: '<S252>/Comparison7'
             */
            if (rtb_Product5_k >= 255.0F)
            {
                /* Abs: '<S252>/Abs5' incorporates:
                 *  Constant: '<S252>/Constant Value5'
                 *  Product: '<S252>/Product12'
                 *  Product: '<S252>/Product13'
                 */
                rtb_Product5_k = (rtb_Product5_k / 255.0F) * 100.0F;
            }

            /* End of Switch: '<S252>/Switch4' */

            /* Abs: '<S252>/Abs5' */
            rtb_Product5_k = fabsf(rtb_Product5_k);

            /* Switch: '<S252>/Switch7' incorporates:
             *  DataTypeConversion: '<S252>/FloatToFix5'
             *  RelationalOperator: '<S252>/Comparison9'
             */
            if (((sint32)((uint16)rtb_Product5_k)) >= 255)
            {
                /* Switch: '<S252>/Switch3' incorporates:
                 *  Constant: '<S252>/Constant Value18'
                 *  Constant: '<S252>/Constant Value19'
                 *  Product: '<S252>/Product14'
                 *  Product: '<S252>/Product15'
                 *  Switch: '<S252>/Switch7'
                 */
                rtb_Switch3_b = (uint16)((((uint32)((uint16)rtb_Product5_k)) /
                    255U) * 100U);
            }
            else
            {
                /* Switch: '<S252>/Switch3' incorporates:
                 *  Switch: '<S252>/Switch7'
                 */
                rtb_Switch3_b = (uint16)rtb_Product5_k;
            }

            /* End of Switch: '<S252>/Switch7' */
        }

        /* End of Switch: '<S252>/Switch' */

        /* Sum: '<S252>/Sum9' incorporates:
         *  Constant: '<S252>/Constant Value12'
         */
        VeIMOR_t_Random1 = (uint16)(((uint32)rtb_Switch3_b) + 3U);

        /* S-Function (sfix_bitop): '<S252>/Bitwise Logical Operator5' incorporates:
         *  DataTypeConversion: '<S251>/FloatToFix2'
         *  DataTypeConversion: '<S251>/FloatToFix3'
         *  S-Function (sfix_bitop): '<S252>/Bitwise Logical Operator8'
         */
        VeIMOR_y_Rand2Sgn_tmp = ((sint32)((uint16)rtb_Abs3)) | ((sint32)((uint16)
            rtb_Abs2));

        /* Product: '<S252>/Product3' incorporates:
         *  Constant: '<S252>/Constant Value1'
         *  DataTypeConversion: '<S251>/FloatToFix1'
         *  DataTypeConversion: '<S251>/FloatToFix4'
         *  DataTypeConversion: '<S252>/Data Type Conversion13'
         *  S-Function (sfix_bitop): '<S252>/Bitwise Logical Operator3'
         *  S-Function (sfix_bitop): '<S252>/Bitwise Logical Operator5'
         *  S-Function (sfix_bitop): '<S252>/Bitwise Logical Operator6'
         */
        VeIMOR_y_Rand2Sgn = (((float32)((sint32)((((sint32)((uint16)rtb_Abs1)) |
            ((sint32)((uint16)rtb_Abs8))) & VeIMOR_y_Rand2Sgn_tmp))) * ((float32)
                              VeIMOR_Cnt_RandCounter)) * 103.0F;

        /* Switch: '<S252>/Switch1' incorporates:
         *  Constant: '<S256>/Calib'
         */
        if (KeIMOR_b_Rand2_SD)
        {
            /* Switch: '<S252>/Switch3' incorporates:
             *  Constant: '<S260>/Calib'
             */
            rtb_Switch3_b = KeIMOR_y_Rand2_Dial;
        }
        else
        {
            /* Product: '<S252>/Product7' incorporates:
             *  Constant: '<S252>/Constant Value6'
             */
            rtb_Product5_k = VeIMOR_y_Rand2Sgn / 65535.0F;

            /* Switch: '<S252>/Switch5' incorporates:
             *  Constant: '<S252>/Constant Value7'
             *  RelationalOperator: '<S252>/Comparison10'
             */
            if (rtb_Product5_k >= 255.0F)
            {
                /* Abs: '<S252>/Abs4' incorporates:
                 *  Constant: '<S252>/Constant Value22'
                 *  Product: '<S252>/Product16'
                 *  Product: '<S252>/Product6'
                 */
                rtb_Product5_k = (rtb_Product5_k / 255.0F) * 100.0F;
            }

            /* End of Switch: '<S252>/Switch5' */

            /* Abs: '<S252>/Abs4' */
            rtb_Product5_k = fabsf(rtb_Product5_k);

            /* Switch: '<S252>/Switch6' incorporates:
             *  DataTypeConversion: '<S252>/FloatToFix1'
             *  RelationalOperator: '<S252>/Comparison11'
             */
            if (((sint32)((uint16)rtb_Product5_k)) >= 255)
            {
                /* Switch: '<S252>/Switch3' incorporates:
                 *  Constant: '<S252>/Constant Value20'
                 *  Constant: '<S252>/Constant Value21'
                 *  Product: '<S252>/Product17'
                 *  Product: '<S252>/Product18'
                 *  Switch: '<S252>/Switch6'
                 */
                rtb_Switch3_b = (uint16)((((uint32)((uint16)rtb_Product5_k)) /
                    255U) * 100U);
            }
            else
            {
                /* Switch: '<S252>/Switch3' incorporates:
                 *  Switch: '<S252>/Switch6'
                 */
                rtb_Switch3_b = (uint16)rtb_Product5_k;
            }

            /* End of Switch: '<S252>/Switch6' */
        }

        /* End of Switch: '<S252>/Switch1' */

        /* Sum: '<S252>/Sum1' incorporates:
         *  Constant: '<S252>/Constant Value14'
         */
        VeIMOR_t_Random2 = (uint16)(((uint32)rtb_Switch3_b) + 5U);

        /* Product: '<S252>/Product4' incorporates:
         *  Constant: '<S252>/Constant Value2'
         *  DataTypeConversion: '<S252>/Data Type Conversion15'
         *  S-Function (sfix_bitop): '<S252>/Bitwise Logical Operator9'
         */
        VeIMOR_y_Rand3Sgn = (((float32)((uint16)(~((uint16)((sint32)
            (VeIMOR_y_Rand1Sgn_tmp & VeIMOR_y_Rand2Sgn_tmp)))))) * ((float32)
                              VeIMOR_Cnt_RandCounter)) * 149.0F;

        /* Switch: '<S252>/Switch2' incorporates:
         *  Constant: '<S257>/Calib'
         */
        if (KeIMOR_b_Rand3_SD)
        {
            /* Switch: '<S252>/Switch3' incorporates:
             *  Constant: '<S261>/Calib'
             */
            rtb_Switch3_b = KeIMOR_y_Rand3_Dial;
        }
        else
        {
            /* Product: '<S252>/Product9' incorporates:
             *  Constant: '<S252>/Constant Value8'
             */
            rtb_Product5_k = VeIMOR_y_Rand3Sgn / 65535.0F;

            /* Switch: '<S252>/Switch8' incorporates:
             *  Constant: '<S252>/Constant Value9'
             *  RelationalOperator: '<S252>/Comparison8'
             */
            if (rtb_Product5_k >= 255.0F)
            {
                /* Abs: '<S252>/Abs6' incorporates:
                 *  Constant: '<S252>/Constant Value24'
                 *  Product: '<S252>/Product19'
                 *  Product: '<S252>/Product8'
                 */
                rtb_Product5_k = (rtb_Product5_k / 255.0F) * 100.0F;
            }

            /* End of Switch: '<S252>/Switch8' */

            /* Abs: '<S252>/Abs6' */
            rtb_Product5_k = fabsf(rtb_Product5_k);

            /* Switch: '<S252>/Switch9' incorporates:
             *  DataTypeConversion: '<S252>/FloatToFix2'
             *  RelationalOperator: '<S252>/Comparison13'
             */
            if (((sint32)((uint16)rtb_Product5_k)) >= 255)
            {
                /* Switch: '<S252>/Switch3' incorporates:
                 *  Constant: '<S252>/Constant Value17'
                 *  Constant: '<S252>/Constant Value23'
                 *  Product: '<S252>/Product20'
                 *  Product: '<S252>/Product21'
                 *  Switch: '<S252>/Switch9'
                 */
                rtb_Switch3_b = (uint16)((((uint32)((uint16)rtb_Product5_k)) /
                    255U) * 100U);
            }
            else
            {
                /* Switch: '<S252>/Switch3' incorporates:
                 *  Switch: '<S252>/Switch9'
                 */
                rtb_Switch3_b = (uint16)rtb_Product5_k;
            }

            /* End of Switch: '<S252>/Switch9' */
        }

        /* End of Switch: '<S252>/Switch2' */

        /* Sum: '<S252>/Sum2' incorporates:
         *  Constant: '<S252>/Constant Value13'
         */
        VeIMOR_t_Random3 = (uint16)(((uint32)rtb_Switch3_b) + 7U);

        /* Product: '<S252>/Product1' incorporates:
         *  Constant: '<S252>/Constant Value3'
         *  DataTypeConversion: '<S251>/FloatToFix2'
         *  DataTypeConversion: '<S251>/FloatToFix3'
         *  DataTypeConversion: '<S252>/Data Type Conversion16'
         *  S-Function (sfix_bitop): '<S252>/Bitwise Logical Operator10'
         *  S-Function (sfix_bitop): '<S252>/Bitwise Logical Operator11'
         *  S-Function (sfix_bitop): '<S252>/Bitwise Logical Operator12'
         */
        VeIMOR_y_Rand4Sgn = (((float32)((uint16)(~((uint16)(((uint16)(~((uint16)
            VeIMOR_y_Rand1Sgn_tmp))) & (((uint16)rtb_Abs2) ^ ((uint16)rtb_Abs3)))))))
                             * ((float32)VeIMOR_Cnt_RandCounter)) * 137.0F;

        /* Switch: '<S252>/Switch3' incorporates:
         *  Constant: '<S258>/Calib'
         */
        if (KeIMOR_b_Rand4_SD)
        {
            /* Switch: '<S252>/Switch3' incorporates:
             *  Constant: '<S262>/Calib'
             */
            rtb_Switch3_b = KeIMOR_y_Rand4_Dial;
        }
        else
        {
            /* Product: '<S252>/Product11' incorporates:
             *  Constant: '<S252>/Constant Value10'
             */
            rtb_Product5_k = VeIMOR_y_Rand4Sgn / 65535.0F;

            /* Switch: '<S252>/Switch10' incorporates:
             *  Constant: '<S252>/Constant Value11'
             *  RelationalOperator: '<S252>/Comparison14'
             */
            if (rtb_Product5_k >= 255.0F)
            {
                /* Abs: '<S252>/Abs7' incorporates:
                 *  Constant: '<S252>/Constant Value27'
                 *  Product: '<S252>/Product10'
                 *  Product: '<S252>/Product22'
                 */
                rtb_Product5_k = (rtb_Product5_k / 255.0F) * 100.0F;
            }

            /* End of Switch: '<S252>/Switch10' */

            /* Abs: '<S252>/Abs7' */
            rtb_Product5_k = fabsf(rtb_Product5_k);

            /* Switch: '<S252>/Switch11' incorporates:
             *  DataTypeConversion: '<S252>/FloatToFix3'
             *  RelationalOperator: '<S252>/Comparison15'
             */
            if (((sint32)((uint16)rtb_Product5_k)) >= 255)
            {
                /* Switch: '<S252>/Switch3' incorporates:
                 *  Constant: '<S252>/Constant Value25'
                 *  Constant: '<S252>/Constant Value26'
                 *  Product: '<S252>/Product23'
                 *  Product: '<S252>/Product24'
                 *  Switch: '<S252>/Switch11'
                 */
                rtb_Switch3_b = (uint16)((((uint32)((uint16)rtb_Product5_k)) /
                    255U) * 100U);
            }
            else
            {
                /* Switch: '<S252>/Switch3' incorporates:
                 *  Switch: '<S252>/Switch11'
                 */
                rtb_Switch3_b = (uint16)rtb_Product5_k;
            }

            /* End of Switch: '<S252>/Switch11' */
        }

        /* End of Switch: '<S252>/Switch3' */

        /* Sum: '<S252>/Sum3' incorporates:
         *  Constant: '<S252>/Constant Value15'
         */
        VeIMOR_t_Random4 = (uint16)(((uint32)rtb_Switch3_b) + 9U);
        IMOR_ac_B.VeIMOR_b_KeyONpostCRANK_e = VeIMOR_b_KeyONpostCRANK;

        /* Gain: '<S230>/Gain' incorporates:
         *  Inport: '<S199>/VeIMOR_b_KeyONpostCRANK'
         */
        VeIMOR_b_KeyCrank = IMOR_ac_B.VeIMOR_b_KeyONpostCRANK_e;

        /* Switch: '<S228>/Switch' incorporates:
         *  Constant: '<S291>/Calib'
         *  Logic: '<S228>/Logical1'
         */
        if (KeIMOR_b_UseAutoSAREEPROMStatusVal)
        {
            /* Switch: '<S228>/Switch' incorporates:
             *  Constant: '<S287>/Constant'
             */
            Switch = CeIMOR_e_EEPROG_COMP_FAILED;
        }
        else
        {
            /* Switch: '<S228>/Switch' incorporates:
             *  Constant: '<S289>/Constant'
             *  Switch: '<S228>/Switch1'
             *  Switch: '<S228>/Switch2'
             */
            Switch = CeIMOR_e_EEPROG_DEFAULT;
        }

        /* End of Switch: '<S228>/Switch' */

        /* Chart: '<S199>/Immobilizer_HCP_BCM' incorporates:
         *  Constant: '<S199>/Constant Value1'
         *  Constant: '<S199>/Constant Value7'
         *  Constant: '<S209>/Calib'
         *  Constant: '<S210>/Calib'
         *  Constant: '<S211>/Calib'
         *  Constant: '<S214>/Calib'
         *  Constant: '<S215>/Calib'
         */
        /* Gateway: IMOR_FastTEF/Immobilizer/Trgd_HCPBCM/Immobilizer_HCP_BCM */
        /* During: IMOR_FastTEF/Immobilizer/Trgd_HCPBCM/Immobilizer_HCP_BCM */
        if (((uint32)IMOR_ac_DW.is_active_c1_IMOR_ac) == 0U)
        {
            /* Entry: IMOR_FastTEF/Immobilizer/Trgd_HCPBCM/Immobilizer_HCP_BCM */
            IMOR_ac_DW.is_active_c1_IMOR_ac = 1U;

            /* Entry Internal: IMOR_FastTEF/Immobilizer/Trgd_HCPBCM/Immobilizer_HCP_BCM */
            /* Transition: '<S207>:105' */
            IMOR_ac_DW.is_c1_IMOR_ac = IMOR_ac_IN_IMOR_Init;

            /* Entry 'IMOR_Init': '<S207>:1' */
            IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_Init;
            IMOR_ac_B.VeIMOR_b_WrtMKeyToE2_Arb = false;
            IMOR_ac_B.VeIMOR_b_SKIMNotProg = false;
            IMOR_ac_B.VeIMOR_b_WrtCRCmpltToE2_Arb = false;
            IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
            VeIMOR_e_HCPStatCanC = CeIMOR_e_HCPIS;
        }
        else
        {
            switch (IMOR_ac_DW.is_c1_IMOR_ac)
            {
              case IMOR_ac_IN_IMOR_CodeRec:
                IMOR_ac_IMOR_CodeRec(&DataStoreRead7, &Switch,
                                     &TmpSignalConversionAtVeIMOR_y_CntrlEncdR);
                break;

              case IMOR_ac_IN_IMOR_CodeVrfy:
                IMOR_ac_IMOR_CodeVrfy(&Switch1, &Switch2, &Switch3,
                                      &TmpSignalConversionAtVeIMOR_y_CntrlEncdR,
                                      &Switch4, &Switch5);
                break;

              case IMOR_ac_IN_IMOR_ImmobEnbld:
                IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_ImmobEnbld;
                IMOR_ac_B.VeIMOR_b_HCPNotProg_Arb = true;

                /* During 'IMOR_ImmobEnbld': '<S207>:5' */
                if ((((!EeIMOR_b_CodeRecCmplt_Mem) && (!KeIMOR_b_BSWMem_Slct)) ||
                     (KeIMOR_b_HCPNotProg)) || (((((sint32)
                        IMOR_ac_B.TmpSignalConversionAtVaIMOR_y_MMKeyStr_E[6]) ==
                       0) && (KeIMOR_b_BSWMem_Slct)) || (KeIMOR_b_HCPNotProg)))
                {
                    /* Transition: '<S207>:658' */
                    /* Transition: '<S207>:659' */
                    /* Transition: '<S207>:42' */
                    IMOR_ac_DW.is_c1_IMOR_ac = IMOR_ac_IN_IMOR_CodeRec;
                    IMOR_ac_DW.is_IMOR_CodeRec = IMOR_ac_IN_IMOR_CodeRec_NoVal;

                    /* Entry 'IMOR_CodeRec_NoVal': '<S207>:6' */
                    IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CR_NoValue;
                    IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
                    IMOR_ac_B.VeIMOR_cnt_IMORRecCnt_Arb = 1.0F;
                    IMOR_ac_B.VeIMOR_b_WrtMKeyToE2_Arb = false;
                    IMOR_ac_B.VeIMOR_b_WrtCRCmpltToE2_Arb = false;
                    IMOR_ac_B.VeIMOR_y_rnd_1_Arb = 0U;
                    IMOR_ac_B.VeIMOR_y_rnd_2_Arb = 0U;
                    IMOR_ac_B.VeIMOR_y_rnd_3_Arb = 0U;
                    IMOR_ac_B.VeIMOR_y_rnd_4_Arb = 0U;
                    IMOR_ac_B.VeIMOR_b_AuthValidArb = false;
                    VeIMOR_y_MMKey1org21_Temp = 0U;
                    VeIMOR_y_MMKey1org22_Temp = 0U;
                    VeIMOR_y_MMKey_3_Temp = 0U;
                    VeIMOR_y_MMKey_4_Temp = 0U;
                    VeIMOR_y_MMKey_5_Temp = 0U;
                    VeIMOR_y_MMKey_6_Temp = 0U;
                    IMOR_ac_DW.LeIMOR_b_MMKeyOK = false;
                    IMOR_ac_B.VeIMOR_b_BCMRespTENRec_Arb = false;
                    IMOR_ac_B.VeIMOR_b_HCPNotProg_Arb = true;
                    IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = false;
                    VeIMOR_e_HCPStatCanC = CeIMOR_e_HCPIS;
                }
                else
                {
                    if (((EeIMOR_b_CodeRecCmplt_Mem) || (KeIMOR_b_HCPPrevProg)) ||
                        (((((sint32)
                            IMOR_ac_B.TmpSignalConversionAtVaIMOR_y_MMKeyStr_E[6])
                           == 1) && (KeIMOR_b_BSWMem_Slct)) ||
                            (KeIMOR_b_HCPPrevProg)))
                    {
                        /* Transition: '<S207>:661' */
                        /* Transition: '<S207>:662' */
                        /* Transition: '<S207>:43' */
                        IMOR_ac_DW.is_c1_IMOR_ac = IMOR_ac_IN_IMOR_CodeVrfy;
                        IMOR_ac_DW.is_IMOR_CodeVrfy =
                            IMOR_ac_IN_IMOR_CodeVrfy_Init;

                        /* Entry 'IMOR_CodeVrfy_Init': '<S207>:24' */
                        IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_CV_Init;
                        IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
                        IMOR_ac_B.VeIMOR_cnt_CodeVrfyCnt_Arb = 1.0F;
                        IMOR_ac_B.VeIMOR_b_WrtCRCmpltToE2_Arb = false;
                        IMOR_ac_B.VeIMOR_y_rnd_1_Arb = 0U;
                        IMOR_ac_B.VeIMOR_y_rnd_2_Arb = 0U;
                        IMOR_ac_B.VeIMOR_y_rnd_3_Arb = 0U;
                        IMOR_ac_B.VeIMOR_y_rnd_4_Arb = 0U;
                        IMOR_ac_B.VeIMOR_y_MiniKryptF1_1_Arb = 0U;
                        IMOR_ac_B.VeIMOR_y_MiniKryptF1_2_Arb = 0U;
                        IMOR_ac_B.VeIMOR_y_MiniKryptG1_1_Arb = 0U;
                        IMOR_ac_B.VeIMOR_y_MiniKryptG1_2_Arb = 0U;
                        IMOR_ac_B.VeIMOR_b_AuthValidArb = false;
                        IMOR_ac_B.VeIMOR_b_HCPNotProg_Arb = false;
                        VeIMOR_e_HCPStatCanC = CeIMOR_e_HCPIS;
                        IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb = false;
                    }
                }
                break;

              case IMOR_ac_IN_IMOR_ImmobSysCondsMet:
                IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_SysCondMet;

                /* During 'IMOR_ImmobSysCondsMet': '<S207>:4' */
                if (!KeIMOR_b_EnblImmobilizer)
                {
                    /* Transition: '<S207>:44' */
                    /* Transition: '<S207>:40' */
                    IMOR_ac_B.VeIMOR_b_AuthValidArb = true;
                    IMOR_ac_DW.is_c1_IMOR_ac = IMOR_ac_IN_IMOR_ImmobSysCondsMet;

                    /* Entry 'IMOR_ImmobSysCondsMet': '<S207>:4' */
                    IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_SysCondMet;
                    IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
                }
                else
                {
                    /* Transition: '<S207>:41' */
                    IMOR_ac_DW.is_c1_IMOR_ac = IMOR_ac_IN_IMOR_ImmobEnbld;

                    /* Entry 'IMOR_ImmobEnbld': '<S207>:5' */
                    IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_ImmobEnbld;
                    IMOR_ac_B.VeIMOR_b_HCPNotProg_Arb = true;
                }
                break;

              default:
                IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_Init;

                /* During 'IMOR_Init': '<S207>:1' */
                if ((KeIMOR_b_EnblImmobFn) && (VeIMOR_b_KeyInRunNoPSA))
                {
                    /* Transition: '<S207>:45' */
                    IMOR_ac_DW.is_c1_IMOR_ac = IMOR_ac_IN_IMOR_ImmobSysCondsMet;

                    /* Entry 'IMOR_ImmobSysCondsMet': '<S207>:4' */
                    IMOR_ac_B.VeIMOR_e_IMORStat_Arb = CeIMOR_e_SysCondMet;
                    IMOR_ac_B.VeIMOR_t_StateTimer_Arb = 0.0F;
                }
                else
                {
                    IMOR_ac_B.VeIMOR_t_StateTimer_Arb += KeIMOR_t_dT;
                }
                break;
            }
        }

        /* End of Chart: '<S199>/Immobilizer_HCP_BCM' */

        /* Switch: '<S206>/Switch1' incorporates:
         *  Constant: '<S201>/Constant Value'
         *  Constant: '<S233>/Constant'
         *  Constant: '<S234>/Constant'
         *  Constant: '<S238>/Calib'
         *  Logic: '<S201>/Logical10'
         *  Logic: '<S201>/Logical2'
         *  Logic: '<S201>/Logical6'
         *  RelationalOperator: '<S201>/Comparison14'
         *  RelationalOperator: '<S201>/Comparison16'
         *  RelationalOperator: '<S201>/Comparison2'
         */
        DataStoreRead7 = ((((((uint32)rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) ==
                             CePMDR_e_PowerMode_Run) || (((uint32)
                              rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) ==
                             CePMDR_e_PowerMode_Crank)) && (KeIMOR_b_EnblP1A11))
                          && (((sint32)rtb_TmpSignalConversionAtVeBSWR_Cnt_Immo)
                              < 1));

        /* Logic: '<S201>/Logical1' incorporates:
         *  Constant: '<S235>/Constant'
         *  RelationalOperator: '<S201>/Comparison7'
         */
        VeIMOR_b_SetP1A11_Fail = (((((uint32)VeIMOR_e_HCPStatCanC) ==
            CeIMOR_e_HCPKILL) && (IMOR_ac_B.VeIMOR_b_SKIMNotProg)) &&
            DataStoreRead7);

        /* Logic: '<S201>/Logical4' */
        rtb_Logical4_j1 = !IMOR_ac_B.VeIMOR_b_SKIMNotProg;

        /* Logic: '<S201>/Logical3' incorporates:
         *  Constant: '<S232>/Constant'
         *  RelationalOperator: '<S201>/Comparison1'
         *  RelationalOperator: '<S201>/Comparison7'
         */
        VeIMOR_b_SetP1A11_Pass = ((DataStoreRead7 && rtb_Logical4_j1) &&
            (((uint32)VeIMOR_e_HCPStatCanC) == CeIMOR_e_HCPRUN));

        /* If: '<S201>/If' */
        rtPrevAction = IMOR_ac_DW.If_ActiveSubsystem_c;
        IMOR_ac_DW.If_ActiveSubsystem_c = -1;
        if (VeIMOR_b_SetP1A11_Fail)
        {
            IMOR_ac_DW.If_ActiveSubsystem_c = 0;
        }
        else
        {
            if (VeIMOR_b_SetP1A11_Pass)
            {
                IMOR_ac_DW.If_ActiveSubsystem_c = 1;
            }
        }

        switch (IMOR_ac_DW.If_ActiveSubsystem_c)
        {
          case 0:
            if (IMOR_ac_DW.If_ActiveSubsystem_c != rtPrevAction)
            {
                /* SystemReset for IfAction SubSystem: '<S201>/If Action Subsystem' incorporates:
                 *  ActionPort: '<S236>/Action Port'
                 */
                /* SystemReset for Atomic SubSystem: '<S236>/Turn On Delay Sample' */
                /* SystemReset for If: '<S201>/If' incorporates:
                 *  UnitDelay: '<S241>/Unit Delay'
                 *  UnitDelay: '<S243>/Unit Delay'
                 */
                IMOR_ac_DW.UnitDelay_DSTATE_i = 0U;

                /* SystemReset for Atomic SubSystem: '<S241>/EdgeRising' */
                IMOR_ac_DW.UnitDelay_DSTATE_ai = false;

                /* End of SystemReset for SubSystem: '<S241>/EdgeRising' */
                /* End of SystemReset for SubSystem: '<S236>/Turn On Delay Sample' */
                /* End of SystemReset for SubSystem: '<S201>/If Action Subsystem' */
            }

            /* Outputs for IfAction SubSystem: '<S201>/If Action Subsystem' incorporates:
             *  ActionPort: '<S236>/Action Port'
             */
            /* Outputs for Atomic SubSystem: '<S236>/Turn On Delay Sample' */
            /* Outputs for Atomic SubSystem: '<S241>/EdgeRising' */
            /* Logic: '<S243>/AND' incorporates:
             *  Logic: '<S243>/OR1'
             *  UnitDelay: '<S243>/Unit Delay'
             */
            DataStoreRead7 = ((IMOR_ac_B.VeIMOR_b_SKIMNotProg) &&
                              (!IMOR_ac_DW.UnitDelay_DSTATE_ai));

            /* Update for UnitDelay: '<S243>/Unit Delay' */
            IMOR_ac_DW.UnitDelay_DSTATE_ai = IMOR_ac_B.VeIMOR_b_SKIMNotProg;

            /* End of Outputs for SubSystem: '<S241>/EdgeRising' */

            /* Switch: '<S241>/Switch1' incorporates:
             *  Constant: '<S240>/Calib'
             *  Constant: '<S241>/Constant Value'
             *  Constant: '<S241>/Constant Value1'
             *  Logic: '<S241>/OR'
             *  Logic: '<S241>/OR1'
             *  MinMax: '<S241>/Minimum'
             *  Sum: '<S241>/Summation'
             *  UnitDelay: '<S241>/Unit Delay'
             */
            if ((!IMOR_ac_B.VeIMOR_b_SKIMNotProg) || DataStoreRead7)
            {
                IMOR_ac_DW.UnitDelay_DSTATE_i = 0U;
            }
            else if (KeIMOR_Cnt_P1A11_Fail_Deb < ((uint16)(((uint32)
                        IMOR_ac_DW.UnitDelay_DSTATE_i) + 1U)))
            {
                /* MinMax: '<S241>/Minimum' incorporates:
                 *  Constant: '<S240>/Calib'
                 */
                IMOR_ac_DW.UnitDelay_DSTATE_i = KeIMOR_Cnt_P1A11_Fail_Deb;
            }
            else
            {
                /* MinMax: '<S241>/Minimum' incorporates:
                 *  Constant: '<S241>/Constant Value'
                 *  Sum: '<S241>/Summation'
                 *  UnitDelay: '<S241>/Unit Delay'
                 */
                IMOR_ac_DW.UnitDelay_DSTATE_i = (uint16)(((uint32)
                    IMOR_ac_DW.UnitDelay_DSTATE_i) + 1U);
            }

            /* End of Switch: '<S241>/Switch1' */

            /* Logic: '<S241>/AND' incorporates:
             *  Constant: '<S240>/Calib'
             *  RelationalOperator: '<S241>/Greater  Than'
             *  UnitDelay: '<S241>/Unit Delay'
             */
            VeIMOR_b_SetP1A11_Fail_Deb = ((IMOR_ac_B.VeIMOR_b_SKIMNotProg) &&
                (IMOR_ac_DW.UnitDelay_DSTATE_i >= KeIMOR_Cnt_P1A11_Fail_Deb));

            /* End of Outputs for SubSystem: '<S236>/Turn On Delay Sample' */

            /* Outputs for Enabled SubSystem: '<S236>/Event_SKIMNotStored_ReportTestFailed_3' incorporates:
             *  EnablePort: '<S239>/Enable'
             */
            if (VeIMOR_b_SetP1A11_Fail_Deb)
            {
                /* DataStoreWrite: '<S239>/FaultSts_SKIMNotStored' incorporates:
                 *  Constant: '<S242>/Constant'
                 */
                IMOR_ac_DW.FaultSts_SKIMNotStored = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S236>/Event_SKIMNotStored_ReportTestFailed_3' */
            /* End of Outputs for SubSystem: '<S201>/If Action Subsystem' */
            break;

          case 1:
            if (IMOR_ac_DW.If_ActiveSubsystem_c != rtPrevAction)
            {
                /* SystemReset for IfAction SubSystem: '<S201>/If Action Subsystem1' incorporates:
                 *  ActionPort: '<S237>/Action Port'
                 */
                /* SystemReset for Atomic SubSystem: '<S237>/Turn On Delay Sample' */
                /* SystemReset for If: '<S201>/If' incorporates:
                 *  UnitDelay: '<S246>/Unit Delay'
                 *  UnitDelay: '<S248>/Unit Delay'
                 */
                IMOR_ac_DW.UnitDelay_DSTATE_k = 0U;

                /* SystemReset for Atomic SubSystem: '<S246>/EdgeRising' */
                IMOR_ac_DW.UnitDelay_DSTATE_oe = false;

                /* End of SystemReset for SubSystem: '<S246>/EdgeRising' */
                /* End of SystemReset for SubSystem: '<S237>/Turn On Delay Sample' */
                /* End of SystemReset for SubSystem: '<S201>/If Action Subsystem1' */
            }

            /* Outputs for IfAction SubSystem: '<S201>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S237>/Action Port'
             */
            /* Outputs for Atomic SubSystem: '<S237>/Turn On Delay Sample' */
            /* Outputs for Atomic SubSystem: '<S246>/EdgeRising' */
            /* Logic: '<S248>/AND' incorporates:
             *  Logic: '<S248>/OR1'
             *  UnitDelay: '<S248>/Unit Delay'
             */
            DataStoreRead7 = (rtb_Logical4_j1 &&
                              (!IMOR_ac_DW.UnitDelay_DSTATE_oe));

            /* Update for UnitDelay: '<S248>/Unit Delay' */
            IMOR_ac_DW.UnitDelay_DSTATE_oe = rtb_Logical4_j1;

            /* End of Outputs for SubSystem: '<S246>/EdgeRising' */

            /* Switch: '<S246>/Switch1' incorporates:
             *  Constant: '<S245>/Calib'
             *  Constant: '<S246>/Constant Value'
             *  Constant: '<S246>/Constant Value1'
             *  Logic: '<S246>/OR'
             *  Logic: '<S246>/OR1'
             *  MinMax: '<S246>/Minimum'
             *  Sum: '<S246>/Summation'
             *  UnitDelay: '<S246>/Unit Delay'
             */
            if ((!rtb_Logical4_j1) || DataStoreRead7)
            {
                IMOR_ac_DW.UnitDelay_DSTATE_k = 0U;
            }
            else if (KeIMOR_Cnt_P1A11_Pass_Deb < ((uint16)(((uint32)
                        IMOR_ac_DW.UnitDelay_DSTATE_k) + 1U)))
            {
                /* MinMax: '<S246>/Minimum' incorporates:
                 *  Constant: '<S245>/Calib'
                 */
                IMOR_ac_DW.UnitDelay_DSTATE_k = KeIMOR_Cnt_P1A11_Pass_Deb;
            }
            else
            {
                /* MinMax: '<S246>/Minimum' incorporates:
                 *  Constant: '<S246>/Constant Value'
                 *  Sum: '<S246>/Summation'
                 *  UnitDelay: '<S246>/Unit Delay'
                 */
                IMOR_ac_DW.UnitDelay_DSTATE_k = (uint16)(((uint32)
                    IMOR_ac_DW.UnitDelay_DSTATE_k) + 1U);
            }

            /* End of Switch: '<S246>/Switch1' */

            /* Logic: '<S246>/AND' incorporates:
             *  Constant: '<S245>/Calib'
             *  RelationalOperator: '<S246>/Greater  Than'
             *  UnitDelay: '<S246>/Unit Delay'
             */
            VeIMOR_b_SetP1A11_Pass_Deb = (rtb_Logical4_j1 &&
                (IMOR_ac_DW.UnitDelay_DSTATE_k >= KeIMOR_Cnt_P1A11_Pass_Deb));

            /* End of Outputs for SubSystem: '<S237>/Turn On Delay Sample' */

            /* Outputs for Enabled SubSystem: '<S237>/Event_SKIMNotStored_ReportTestPassed_4' incorporates:
             *  EnablePort: '<S244>/Enable'
             */
            if (VeIMOR_b_SetP1A11_Pass_Deb)
            {
                /* DataStoreWrite: '<S244>/FaultSts_SKIMNotStored' incorporates:
                 *  Constant: '<S247>/Constant'
                 */
                IMOR_ac_DW.FaultSts_SKIMNotStored = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S237>/Event_SKIMNotStored_ReportTestPassed_4' */
            /* End of Outputs for SubSystem: '<S201>/If Action Subsystem1' */
            break;

          default:
            /* no actions */
            break;
        }

        /* End of If: '<S201>/If' */

        /* DataTypeConversion: '<S202>/DataTypeConversion' */
        IMOR_ac_B.DataTypeConversion = IMOR_ac_B.VeIMOR_e_IMORStat_Arb;

        /* Product: '<S251>/Product5' incorporates:
         *  Constant: '<S251>/Constant Value'
         *  Constant: '<S251>/Constant Value4'
         *  Constant: '<S251>/Constant Value9'
         *  Product: '<S251>/Product2'
         *  Sum: '<S251>/Sum1'
         */
        rtb_Abs1 = (((((float32)VeIMOR_Cnt_RandCounter) - 3.1526F) * rtb_Abs1) *
                    101.0F) / 65535.0F;

        /* Product: '<S251>/Product6' incorporates:
         *  Constant: '<S251>/Constant Value2'
         *  Constant: '<S251>/Constant Value6'
         *  Constant: '<S251>/Constant Value9'
         *  Product: '<S251>/Product1'
         *  Sum: '<S251>/Sum1'
         */
        rtb_Abs2 = (((((float32)VeIMOR_Cnt_RandCounter) - 3.1526F) * rtb_Abs2) *
                    123.0F) / 65535.0F;

        /* Product: '<S251>/Product7' incorporates:
         *  Constant: '<S251>/Constant Value3'
         *  Constant: '<S251>/Constant Value7'
         *  Constant: '<S251>/Constant Value9'
         *  Product: '<S251>/Product3'
         *  Sum: '<S251>/Sum1'
         */
        rtb_Abs3 = (((((float32)VeIMOR_Cnt_RandCounter) - 3.1526F) * rtb_Abs3) *
                    51.0F) / 65535.0F;

        /* Product: '<S251>/Product8' incorporates:
         *  Constant: '<S251>/Constant Value5'
         *  Constant: '<S251>/Constant Value8'
         *  Constant: '<S251>/Constant Value9'
         *  Product: '<S251>/Product4'
         *  Sum: '<S251>/Sum1'
         */
        rtb_Abs8 = (((((float32)VeIMOR_Cnt_RandCounter) - 3.1526F) * rtb_Abs8) *
                    17.0F) / 65535.0F;

        /* Logic: '<S250>/Logical' incorporates:
         *  Constant: '<S250>/Constant Value15'
         *  RelationalOperator: '<S250>/Comparison1'
         *  RelationalOperator: '<S250>/Comparison2'
         *  RelationalOperator: '<S250>/Comparison3'
         *  RelationalOperator: '<S250>/Comparison5'
         *  RelationalOperator: '<S250>/Comparison6'
         */
        DataStoreRead7 = ((((rtb_VeIMOR_b_InvokeMKA_Arb_write_IRV && (rtb_Abs1
                              != 0.0F)) && (rtb_Abs2 != 0.0F)) && (rtb_Abs3 !=
                            0.0F)) && (rtb_Abs8 != 0.0F));

        /* Outputs for Atomic SubSystem: '<S250>/EdgeRising' */
        /* Logic: '<S254>/OR1' incorporates:
         *  UnitDelay: '<S254>/Unit Delay'
         */
        rtb_Logical4_j1 = !IMOR_ac_DW.UnitDelay_DSTATE_jd;

        /* Update for UnitDelay: '<S254>/Unit Delay' */
        IMOR_ac_DW.UnitDelay_DSTATE_jd = DataStoreRead7;

        /* Outputs for Enabled SubSystem: '<S204>/Update_Rand_Memory' incorporates:
         *  EnablePort: '<S253>/Enable'
         */
        if (DataStoreRead7 && rtb_Logical4_j1)
        {
            /* DataStoreWrite: '<S253>/Data Store Write1' */
            EeIMOR_M_Rand1_prev = rtb_Abs1;

            /* DataStoreWrite: '<S253>/Data Store Write2' */
            EeIMOR_M_Rand2_prev = rtb_Abs2;

            /* DataStoreWrite: '<S253>/Data Store Write3' */
            EeIMOR_M_Rand3_prev = rtb_Abs3;

            /* DataStoreWrite: '<S253>/Data Store Write4' */
            EeIMOR_M_Rand4_prev = rtb_Abs8;
        }

        /* End of Outputs for SubSystem: '<S204>/Update_Rand_Memory' */
        /* End of Outputs for SubSystem: '<S250>/EdgeRising' */

        /* RelationalOperator: '<S204>/Comparison17' incorporates:
         *  Constant: '<S204>/Constant Value1'
         *  Logic: '<S254>/AND'
         *  UnitDelay: '<S204>/Unit Delay6'
         */
        IMOR_ac_DW.UnitDelay6_DSTATE = (((sint32)VeIMOR_Cnt_RandCounter) == 100);

        /* Switch: '<S205>/Switch7' incorporates:
         *  DataStoreRead: '<S205>/Data Store Read9'
         */
        if (EeIMOR_b_ImmoAuthValid_Mem)
        {
            /* Switch: '<S205>/Switch7' incorporates:
             *  Constant: '<S263>/Constant'
             */
            IMOR_ac_B.Switch7_g = CeIMOR_e_HCPRUN;
        }
        else
        {
            /* Switch: '<S205>/Switch7' */
            IMOR_ac_B.Switch7_g = VeIMOR_e_HCPStatCanC;
        }

        /* End of Switch: '<S205>/Switch7' */

        /* RelationalOperator: '<S206>/Comparison15' incorporates:
         *  Constant: '<S267>/Constant'
         *  UnitDelay: '<S206>/Unit Delay4'
         */
        VeIMOR_b_KeyWasOff = (((uint32)IMOR_ac_DW.UnitDelay4_DSTATE_i) ==
                              CePMDR_e_PowerMode_Off);

        /* Logic: '<S206>/Logical7' */
        VeIMOR_b_keyPOS_OK = ((IMOR_ac_B.Logical4) && (VeIMOR_b_KeyWasOff));

        /* Outputs for Atomic SubSystem: '<S206>/Signal Latch On With Reset2' */
        /* Outputs for Atomic SubSystem: '<S206>/EdgeRising1' */
        /* Logic: '<S276>/OR1' incorporates:
         *  Constant: '<S268>/Constant'
         *  Constant: '<S269>/Constant'
         *  Logic: '<S206>/Logical10'
         *  Logic: '<S271>/AND'
         *  Logic: '<S271>/OR1'
         *  Logic: '<S276>/NOT'
         *  Logic: '<S276>/OR'
         *  RelationalOperator: '<S206>/Comparison16'
         *  RelationalOperator: '<S206>/Comparison17'
         *  UnitDelay: '<S206>/Unit Delay5'
         *  UnitDelay: '<S271>/Unit Delay'
         *  UnitDelay: '<S276>/Unit Delay'
         */
        IMOR_ac_DW.UnitDelay_DSTATE_og = (((VeIMOR_b_ValidKeyCycle) &&
            (!IMOR_ac_DW.UnitDelay_DSTATE_ec)) || (((((uint32)
            IMOR_ac_DW.UnitDelay5_DSTATE_e) != CePMDR_e_PowerMode_Run) ||
            (((uint32)rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) !=
             CePMDR_e_PowerMode_Off)) && (IMOR_ac_DW.UnitDelay_DSTATE_og)));

        /* End of Outputs for SubSystem: '<S206>/EdgeRising1' */
        /* End of Outputs for SubSystem: '<S206>/Signal Latch On With Reset2' */

        /* Logic: '<S206>/Logical11' incorporates:
         *  UnitDelay: '<S276>/Unit Delay'
         */
        VeIMOR_b_NotValidKeyCyc = !IMOR_ac_DW.UnitDelay_DSTATE_og;

        /* Switch: '<S206>/Switch1' incorporates:
         *  Logic: '<S206>/Logical8'
         */
        DataStoreRead7 = ((VeIMOR_b_keyPOS_OK) && (VeIMOR_b_NotValidKeyCyc));

        /* Logic: '<S264>/AND' */
        IMOR_ac_B.AND_b = DataStoreRead7;

        /* RelationalOperator: '<S206>/Comparison18' incorporates:
         *  Constant: '<S270>/Constant'
         */
        VeIMOR_b_MemValRstTmrEnbl = (((uint32)
            rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) == CePMDR_e_PowerMode_Off);

        /* Outputs for Atomic SubSystem: '<S206>/Stop Watch Reset Enabled2' */
        /* Switch: '<S277>/Switch2' incorporates:
         *  Logic: '<S206>/Logical12'
         *  Switch: '<S277>/Switch'
         */
        if (!VeIMOR_b_MemValRstTmrEnbl)
        {
            /* Switch: '<S277>/Switch' incorporates:
             *  Constant: '<S277>/Constant Value2'
             */
            VeIMOR_t_MemValRstTMr = 0.0F;
        }
        else
        {
            /* Switch: '<S277>/Switch' incorporates:
             *  Constant: '<S220>/Calib'
             *  Sum: '<S277>/Subtraction'
             *  Switch: '<S277>/Switch2'
             *  UnitDelay: '<S277>/Unit Delay'
             */
            VeIMOR_t_MemValRstTMr = KeIMOR_t_dT + VeIMOR_t_MemValRstTMr;
        }

        /* End of Switch: '<S277>/Switch2' */
        /* End of Outputs for SubSystem: '<S206>/Stop Watch Reset Enabled2' */

        /* RelationalOperator: '<S206>/Comparison19' incorporates:
         *  Constant: '<S273>/Calib'
         */
        VeIMOR_b_RstImmoAuthInMemArb = (VeIMOR_t_MemValRstTMr <
            KeIMOR_t_ValidImmoTmr);

        /* Outputs for Atomic SubSystem: '<S206>/Signal Latch On With Reset' */
        /* Logic: '<S274>/OR1' incorporates:
         *  Constant: '<S266>/Constant'
         *  Logic: '<S274>/NOT'
         *  Logic: '<S274>/OR'
         *  RelationalOperator: '<S206>/Comparison12'
         *  UnitDelay: '<S274>/Unit Delay'
         */
        IMOR_ac_DW.UnitDelay_DSTATE_jb = (rtb_KeyOff3secArb_write_IRV ||
            ((((uint32)rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) !=
              CePMDR_e_PowerMode_Off) && (IMOR_ac_DW.UnitDelay_DSTATE_jb)));

        /* End of Outputs for SubSystem: '<S206>/Signal Latch On With Reset' */

        /* Outputs for Atomic SubSystem: '<S206>/Signal Latch On With Reset1' */
        /* Logic: '<S275>/OR1' incorporates:
         *  Constant: '<S265>/Constant'
         *  Logic: '<S275>/NOT'
         *  Logic: '<S275>/OR'
         *  RelationalOperator: '<S206>/Comparison1'
         *  UnitDelay: '<S275>/Unit Delay'
         */
        IMOR_ac_DW.UnitDelay_DSTATE_gu = (rtb_DataStoreRead8 || ((((uint32)
            rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) != CePMDR_e_PowerMode_Off)
            && (IMOR_ac_DW.UnitDelay_DSTATE_gu)));

        /* End of Outputs for SubSystem: '<S206>/Signal Latch On With Reset1' */

        /* Switch: '<S206>/Switch1' incorporates:
         *  Constant: '<S272>/Calib'
         */
        if (KeIMOR_b_ThreeSecAftKeyOffApp_SD)
        {
            /* Switch: '<S206>/Switch1' */
            DataStoreRead7 = IMOR_ac_DW.UnitDelay_DSTATE_jb;
        }

        /* End of Switch: '<S206>/Switch1' */

        /* Switch: '<S206>/Switch4' */
        if (DataStoreRead7)
        {
            /* Switch: '<S206>/Switch4' */
            IMOR_ac_B.VeIMOR_b_AuthValidVal = IMOR_ac_DW.UnitDelay_DSTATE_gu;
        }
        else
        {
            /* Switch: '<S206>/Switch4' */
            IMOR_ac_B.VeIMOR_b_AuthValidVal = IMOR_ac_B.VeIMOR_b_AuthValidArb;
        }

        /* End of Switch: '<S206>/Switch4' */

        /* Gain: '<S229>/Gain' */
        IMOR_ac_B.Gain_d = IMOR_ac_B.VeIMOR_b_InvokeMKA;

        /* Switch: '<S231>/Switch' incorporates:
         *  Constant: '<S292>/Calib'
         *  Switch: '<S231>/Switch1'
         *  Switch: '<S231>/Switch2'
         *  Switch: '<S231>/Switch3'
         */
        if (KeIMOR_b_OvrdRndNum)
        {
            /* Switch: '<S231>/Switch' incorporates:
             *  Constant: '<S293>/Calib'
             */
            IMOR_ac_B.VeIMOR_y_rnd_1_FC = KeIMOR_y_RndNum1;

            /* Switch: '<S231>/Switch1' incorporates:
             *  Constant: '<S294>/Calib'
             */
            IMOR_ac_B.VeIMOR_y_rnd_2_FC = KeIMOR_y_RndNum2;

            /* Switch: '<S231>/Switch2' incorporates:
             *  Constant: '<S295>/Calib'
             */
            IMOR_ac_B.VeIMOR_y_rnd_3_FC = KeIMOR_y_RndNum3;

            /* Switch: '<S231>/Switch3' incorporates:
             *  Constant: '<S296>/Calib'
             */
            IMOR_ac_B.VeIMOR_y_rnd_4_FC = KeIMOR_y_RndNum4;
        }
        else
        {
            /* Switch: '<S231>/Switch' */
            IMOR_ac_B.VeIMOR_y_rnd_1_FC = IMOR_ac_B.VeIMOR_y_rnd_1_Arb;

            /* Switch: '<S231>/Switch1' */
            IMOR_ac_B.VeIMOR_y_rnd_2_FC = IMOR_ac_B.VeIMOR_y_rnd_2_Arb;

            /* Switch: '<S231>/Switch2' */
            IMOR_ac_B.VeIMOR_y_rnd_3_FC = IMOR_ac_B.VeIMOR_y_rnd_3_Arb;

            /* Switch: '<S231>/Switch3' */
            IMOR_ac_B.VeIMOR_y_rnd_4_FC = IMOR_ac_B.VeIMOR_y_rnd_4_Arb;
        }

        /* End of Switch: '<S231>/Switch' */
    }
    else
    {
        if (IMOR_ac_DW.Trgd_HCPBCM_MODE)
        {
            /* Disable for If: '<S201>/If' */
            IMOR_ac_DW.If_ActiveSubsystem_c = -1;
            IMOR_ac_DW.Trgd_HCPBCM_MODE = false;
        }
    }

    /* End of Outputs for SubSystem: '<S47>/Trgd_HCPBCM' */

    /* Outputs for Atomic SubSystem: '<S47>/IMMO_CODE_REQUEST_FD3' */
    /* BusCreator: '<S198>/BusIMMO_CODE_REQUEST_FD3' incorporates:
     *  Inport: '<Root>/VeMTQR_M_MtrA_MaxTorq_LT'
     *  Inport: '<Root>/VeMTQR_M_MtrA_MinTorq_LT'
     *  Inport: '<Root>/VeMTQR_M_MtrB_MaxTorq_LT'
     *  Inport: '<Root>/VeMTQR_M_MtrB_MinTorq_LT'
     *  Inport: '<S199>/VeIMOR_b_KeyONpostCRANK'
     *  Logic: '<S254>/AND'
     */
    BusIMMO_CODE_REQUEST_FD3.e_e_ControlEncodingReq =
        IMOR_ac_B.VeIMOR_y_CntrlEncdReq_Arb;
    BusIMMO_CODE_REQUEST_FD3.e_e_f1_1 = IMOR_ac_B.VeIMOR_y_MiniKryptF1_1_Arb;
    BusIMMO_CODE_REQUEST_FD3.e_e_f1_2 = IMOR_ac_B.VeIMOR_y_MiniKryptF1_2_Arb;
    BusIMMO_CODE_REQUEST_FD3.e_e_rnd_1 = IMOR_ac_B.VeIMOR_y_rnd_1_FC;
    BusIMMO_CODE_REQUEST_FD3.e_e_rnd_2 = IMOR_ac_B.VeIMOR_y_rnd_2_FC;
    BusIMMO_CODE_REQUEST_FD3.e_e_rnd_3 = IMOR_ac_B.VeIMOR_y_rnd_3_FC;
    BusIMMO_CODE_REQUEST_FD3.e_e_rnd_4 = IMOR_ac_B.VeIMOR_y_rnd_4_FC;

    /* End of Outputs for SubSystem: '<S47>/IMMO_CODE_REQUEST_FD3' */

    /* SignalConversion generated from: '<S47>/SendCANR_IMMO_CODE_REQUEST_Vld' */
    IMOR_ac_B.OutportBufferForSendCANR_IMMO_CODE_REQUE = true;

    /* Update for Enabled SubSystem: '<S47>/Trgd_HCPBCM' incorporates:
     *  EnablePort: '<S199>/Enable'
     */
    if (IMOR_ac_DW.Trgd_HCPBCM_MODE)
    {
        /* Update for UnitDelay: '<S206>/Unit Delay4' incorporates:
         *  SignalConversion generated from: '<S6>/VePMDR_e_PMM_PowerMode'
         */
        IMOR_ac_DW.UnitDelay4_DSTATE_i =
            rtb_TmpSignalConversionAtVePMDR_e_PMM_Po;

        /* Update for Atomic SubSystem: '<S206>/EdgeRising1' */
        /* Update for UnitDelay: '<S271>/Unit Delay' */
        IMOR_ac_DW.UnitDelay_DSTATE_ec = VeIMOR_b_ValidKeyCycle;

        /* End of Update for SubSystem: '<S206>/EdgeRising1' */

        /* Update for UnitDelay: '<S206>/Unit Delay5' incorporates:
         *  SignalConversion generated from: '<S6>/VePMDR_e_PMM_PowerMode'
         */
        IMOR_ac_DW.UnitDelay5_DSTATE_e =
            rtb_TmpSignalConversionAtVePMDR_e_PMM_Po;
    }

    /* End of Update for SubSystem: '<S47>/Trgd_HCPBCM' */
    /* End of Outputs for SubSystem: '<S6>/Immobilizer' */

    /* Outputs for Function Call SubSystem: '<S6>/ECM_Immobilizer' */
    /* SignalConversion generated from: '<S43>/DelayedKeyInRunNoPSA' incorporates:
     *  SignalConversion generated from: '<S43>/ECUValidKeyCycle'
     *  SignalConversion generated from: '<S43>/KeyStatCrank'
     *  SignalConversion generated from: '<S43>/PropSysActv_En'
     *  SignalConversion generated from: '<S43>/VeIMOR_b_ECMReset'
     *  SignalConversion generated from: '<S43>/VeIMOR_e_ECMImmoStatCanC'
     *  SignalConversion generated from: '<S43>/VeIMOR_e_ECMImmoStatePT'
     * */
#if !Rte_SysCon_Variant_IMOR_3 && Rte_SysCon_Variant_IMOR_1

    /* VariantMerge generated from: '<S43>/DelayedKeyInRunNoPSA' */
    rtb_VeIMOR_b_KeyInRunNoPSA = VeIMOR_b_KeyInRunNoPSA;

    /* VariantMerge generated from: '<S43>/ECUValidKeyCycle' */
    rtb_VeIMOR_b_ValidKeyCycle = VeIMOR_b_ValidKeyCycle;

    /* VariantMerge generated from: '<S43>/KeyStatCrank' */
    IMOR_ac_B.VeIMOR_b_KeyONpostCRANK_a = IMOR_ac_B.VeIMOR_b_KeyONpostCRANK_e;

    /* VariantMerge generated from: '<S43>/PropSysActv_En' */
    rtb_VM_Conditional_Signal_PropSysActv_En = IMOR_ac_B.Switch7;

    /* VariantMerge generated from: '<S43>/VeIMOR_b_ECMReset' */
    rtb_VM_Conditional_Signal_VeIMOR_b_ECMRe = IMOR_ac_B.Switch1_f;

    /* VariantMerge generated from: '<S43>/VeIMOR_e_ECMImmoStatCanC' incorporates:
     *  Switch: '<S49>/Switch12'
     */
    IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmo_h = IMOR_ac_B.Switch12;

    /* VariantMerge generated from: '<S43>/VeIMOR_e_ECMImmoStatePT' incorporates:
     *  Switch: '<S49>/Switch14'
     */
    IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmoSt = IMOR_ac_B.Switch14;

#elif !(!Rte_SysCon_Variant_IMOR_3) || !Rte_SysCon_Variant_IMOR_1

    /* VariantMerge generated from: '<S43>/VeIMOR_e_ECMImmoStatCanC' incorporates:
     *  SignalConversion generated from: '<S43>/VeIMOR_e_ECMImmoStatCanC'
     */
    IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmo_h = CeIMOR_e_ECMcIS;

    /* VariantMerge generated from: '<S43>/VeIMOR_e_ECMImmoStatePT' incorporates:
     *  SignalConversion generated from: '<S43>/VeIMOR_e_ECMImmoStatePT'
     */
    IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmoSt = CeIMOR_e_ECMeIS;

    /* VariantMerge generated from: '<S43>/VeIMOR_b_ECMReset' incorporates:
     *  SignalConversion generated from: '<S43>/VeIMOR_b_ECMReset'
     */
    rtb_VM_Conditional_Signal_VeIMOR_b_ECMRe = false;

    /* VariantMerge generated from: '<S43>/ECUValidKeyCycle' incorporates:
     *  SignalConversion generated from: '<S43>/ECUValidKeyCycle'
     */
    rtb_VeIMOR_b_ValidKeyCycle = false;

    /* VariantMerge generated from: '<S43>/KeyStatCrank' incorporates:
     *  SignalConversion generated from: '<S43>/KeyStatCrank'
     */
    IMOR_ac_B.VeIMOR_b_KeyONpostCRANK_a = false;

    /* VariantMerge generated from: '<S43>/DelayedKeyInRunNoPSA' incorporates:
     *  SignalConversion generated from: '<S43>/DelayedKeyInRunNoPSA'
     */
    rtb_VeIMOR_b_KeyInRunNoPSA = false;

    /* VariantMerge generated from: '<S43>/PropSysActv_En' incorporates:
     *  SignalConversion generated from: '<S43>/PropSysActv_En'
     */
    rtb_VM_Conditional_Signal_PropSysActv_En = false;

#endif

    /* End of SignalConversion generated from: '<S43>/DelayedKeyInRunNoPSA' */

    /* Outputs for Enabled SubSystem: '<S43>/Trgd_BCMECM' incorporates:
     *  EnablePort: '<S52>/Enable'
     */
    if (VeIMOR_b_EnblDsbl)
    {
        IMOR_ac_DW.Trgd_BCMECM_MODE = true;

        /* RelationalOperator: '<S59>/Comparison1' incorporates:
         *  Constant: '<S137>/Calib'
         *  UnitDelay: '<S59>/Unit Delay2'
         */
        VeIMOR_b_HCPReset_Cntr = (((float32)IMOR_ac_DW.UnitDelay2_DSTATE_f) <
            KeIMOR_Cnt_HCPResetCntr);

        /* Logic: '<S59>/Logical3' */
        rtb_DataStoreRead8 = (rtb_TmpSignalConversionAtVeBSWR_b_ImmoAu &&
                              (VeIMOR_b_HCPReset_Cntr));

        /* Outputs for Atomic SubSystem: '<S136>/Counter Reset  Enabled ' */
        /* Switch: '<S142>/Switch2' incorporates:
         *  Constant: '<S142>/Constant Value2'
         *  Logic: '<S136>/Logical2'
         *  RelationalOperator: '<S136>/Comparison4'
         *  Switch: '<S142>/Switch'
         *  UnitDelay: '<S136>/Unit Delay'
         *  UnitDelay: '<S142>/Unit Delay'
         */
        if (rtb_DataStoreRead8 != IMOR_ac_DW.UnitDelay_DSTATE_m4)
        {
            IMOR_ac_DW.UnitDelay_DSTATE_m = 0U;
        }
        else
        {
            /* UnitDelay: '<S142>/Unit Delay' incorporates:
             *  Constant: '<S142>/Constant Value1'
             *  Sum: '<S142>/Subtraction'
             *  Switch: '<S142>/Switch2'
             */
            IMOR_ac_DW.UnitDelay_DSTATE_m = (uint16)(((uint32)
                IMOR_ac_DW.UnitDelay_DSTATE_m) + 1U);
        }

        /* End of Switch: '<S142>/Switch2' */
        /* End of Outputs for SubSystem: '<S136>/Counter Reset  Enabled ' */

        /* RelationalOperator: '<S136>/Comparison1' incorporates:
         *  Constant: '<S138>/Calib'
         *  UnitDelay: '<S142>/Unit Delay'
         */
        DataStoreRead7 = (((float32)IMOR_ac_DW.UnitDelay_DSTATE_m) >=
                          KeIMOR_Cnt_HCPReset_Deb);

        /* Outputs for Atomic SubSystem: '<S136>/EdgeRising2' */
        /* Logic: '<S143>/OR1' incorporates:
         *  UnitDelay: '<S143>/Unit Delay'
         */
        rtb_Logical4_j1 = !IMOR_ac_DW.UnitDelay_DSTATE_h;

        /* Update for UnitDelay: '<S143>/Unit Delay' */
        IMOR_ac_DW.UnitDelay_DSTATE_h = DataStoreRead7;

        /* Outputs for Enabled SubSystem: '<S136>/Subsystem2' */
        IMOR_ac_Subsystem2(DataStoreRead7 && rtb_Logical4_j1, rtb_DataStoreRead8,
                           &IMOR_ac_B.Subsystem2);

        /* End of Outputs for SubSystem: '<S136>/Subsystem2' */
        /* End of Outputs for SubSystem: '<S136>/EdgeRising2' */

        /* Gain: '<S144>/Gain' incorporates:
         *  Logic: '<S143>/AND'
         */
        VeIMOR_b_HCPReset_Deb = IMOR_ac_B.Subsystem2.In1;

        /* Logic: '<S59>/Logical2' incorporates:
         *  Constant: '<S132>/Constant'
         *  Constant: '<S134>/Constant'
         *  Constant: '<S135>/Constant'
         *  Logic: '<S59>/Logical4'
         *  RelationalOperator: '<S59>/Comparison3'
         *  RelationalOperator: '<S59>/Comparison4'
         *  RelationalOperator: '<S59>/Comparison5'
         *  UnitDelay: '<S59>/Unit Delay1'
         */
        VeIMOR_b_PMMOffOn = ((IMOR_ac_DW.UnitDelay1_DSTATE_b) && (((((uint32)
            rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) == CePMDR_e_PowerMode_Acc)
                               || (((uint32)
            rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) == CePMDR_e_PowerMode_Run))
                              || (((uint32)
                                rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) ==
                               CePMDR_e_PowerMode_Crank)));

        /* Outputs for Atomic SubSystem: '<S59>/Signal Latch On With Reset' */
        /* Logic: '<S141>/OR1' incorporates:
         *  Logic: '<S141>/NOT'
         *  Logic: '<S141>/OR'
         *  UnitDelay: '<S141>/Unit Delay'
         */
        VeIMOR_b_HCPReset_AL = ((VeIMOR_b_HCPReset_Deb) || ((!VeIMOR_b_PMMOffOn)
            && (VeIMOR_b_HCPReset_AL)));

        /* End of Outputs for SubSystem: '<S59>/Signal Latch On With Reset' */

        /* Switch: '<S59>/Switch2' incorporates:
         *  Constant: '<S140>/Calib'
         */
        if (KeIMOR_b_HCPReset_SD)
        {
            /* Switch: '<S59>/Switch2' incorporates:
             *  Constant: '<S139>/Calib'
             */
            VeIMOR_b_HCPReset_AD = KeIMOR_b_HCPReset_OV;
        }
        else
        {
            /* Switch: '<S59>/Switch2' incorporates:
             *  Logic: '<S59>/Logical1'
             */
            VeIMOR_b_HCPReset_AD = !VeIMOR_b_HCPReset_AL;
        }

        /* End of Switch: '<S59>/Switch2' */

        /* Outputs for Atomic SubSystem: '<S52>/Variant Subsystem' */
#if Rte_SysCon_Variant_IMOR_3

        /* Outputs for Atomic SubSystem: '<S83>/ECM_BCM_MntrDfltVal' */
        /* VariantMerge generated from: '<S83>/VeIMOR_b_EngDsbldToIC' incorporates:
         *  Constant: '<S192>/FALSE Constant'
         */
        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_EngDsbldT = false;

        /* VariantMerge generated from: '<S83>/VeIMOR_b_ImmoSOPRequest' incorporates:
         *  Constant: '<S192>/FALSE Constant1'
         */
        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ImmoSOPRe = false;

        /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMPassed' incorporates:
         *  Constant: '<S192>/TRUE Constant'
         */
        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMPassed = true;

        /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMStat' incorporates:
         *  Constant: '<S194>/Constant'
         */
        IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMStat = CeIMOR_e_CityBEV;

        /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMFailedRationality' incorporates:
         *  Constant: '<S192>/FALSE Constant2'
         */
        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMFailed = false;

        /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMWUnoHandshake' incorporates:
         *  Constant: '<S192>/FALSE Constant3'
         */
        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMWUnoHa = false;

        /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMnoWU' incorporates:
         *  Constant: '<S192>/FALSE Constant4'
         */
        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMnoWU = false;

        /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMNoSOPResp' incorporates:
         *  Constant: '<S192>/FALSE Constant5'
         */
        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMNoSOPR = false;

        /* VariantMerge generated from: '<S83>/VeIMOR_Cnt_SOPsentCnt' incorporates:
         *  Constant: '<S192>/Constant Value'
         */
        IMOR_ac_B.VariantMergeForOutportVeIMOR_Cnt_SOPsent = 0.0F;

        /* VariantMerge generated from: '<S83>/VeIMOR_t_ECMStateTimer' incorporates:
         *  Constant: '<S192>/Constant Value1'
         */
        IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT = 0.0F;

        /* VariantMerge generated from: '<S83>/VeIMOR_b_CANepTMsgSndReq' incorporates:
         *  Constant: '<S192>/FALSE Constant6'
         */
        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_CANepTMsg = false;

        /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMHCPStatCanC' incorporates:
         *  Constant: '<S195>/Constant'
         */
        IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMHCPSta = CeIMOR_e_HCPRUN;

        /* End of Outputs for SubSystem: '<S83>/ECM_BCM_MntrDfltVal' */
#else

        /* Outputs for Atomic SubSystem: '<S83>/Immo' */
        /* Logic: '<S196>/Logical5' incorporates:
         *  RelationalOperator: '<S196>/Comparison1'
         *  RelationalOperator: '<S196>/Comparison2'
         *  RelationalOperator: '<S196>/Comparison3'
         *  UnitDelay: '<S196>/Unit Delay2'
         */
        VeIMOR_b_ECMReset = (((!rtb_VM_Conditional_Signal_VeIMOR_b_ECMRe) &&
                              (IMOR_ac_DW.UnitDelay2_DSTATE_l)) &&
                             rtb_VM_Conditional_Signal_PropSysActv_En);

        /* Logic: '<S193>/Logical1' */
        VeIMOR_b_KeyON = (rtb_VeIMOR_b_KeyInRunNoPSA && (VeIMOR_b_HCPReset_AD));

        /* Logic: '<S193>/Logical3' */
        VeIMOR_b_ECUValidKeyCycle = (rtb_VeIMOR_b_ValidKeyCycle &&
            (VeIMOR_b_HCPReset_AD));

        /* Chart: '<S193>/ECM_BCM_Monitor' */
        /* Gateway: IMOR_FastTEF/ECM_Immobilizer/Trgd_BCMECM/Variant Subsystem/Immo/ECM_BCM_Monitor */
        /* During: IMOR_FastTEF/ECM_Immobilizer/Trgd_BCMECM/Variant Subsystem/Immo/ECM_BCM_Monitor */
        if (((uint32)IMOR_ac_DW.is_active_c35_IMOR_ac) == 0U)
        {
            /* Entry: IMOR_FastTEF/ECM_Immobilizer/Trgd_BCMECM/Variant Subsystem/Immo/ECM_BCM_Monitor */
            IMOR_ac_DW.is_active_c35_IMOR_ac = 1U;

            /* Entry Internal: IMOR_FastTEF/ECM_Immobilizer/Trgd_BCMECM/Variant Subsystem/Immo/ECM_BCM_Monitor */
            /* Transition: '<S197>:324' */
            IMOR_ac_DW.is_c35_IMOR_ac = IMOR_ac_IN_IMOR_ECM_ECMInit;

            /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMStat' */
            /* Entry 'IMOR_ECM_ECMInit': '<S197>:11' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMStat = CeIMOR_e_ECMInit;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMPassed' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMPassed = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMNoSOPResp' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMNoSOPR = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMnoWU' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMnoWU = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMWUnoHandshake' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMWUnoHa = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMFailedRationality' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMFailed = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_ImmoSOPRequest' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ImmoSOPRe = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_b_EngDsbldToIC' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_EngDsbldT = false;

            /* VariantMerge generated from: '<S83>/VeIMOR_Cnt_SOPsentCnt' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_Cnt_SOPsent = 0.0F;

            /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMHCPStatCanC' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMHCPSta = CeIMOR_e_HCPIS;

            /* VariantMerge generated from: '<S83>/VeIMOR_t_ECMStateTimer' */
            IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT = 0.0F;
        }
        else
        {
            guard1 = false;
            switch (IMOR_ac_DW.is_c35_IMOR_ac)
            {
              case IMOR_ac_IN_IMOR_ECM_ECMInit:
                /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMStat' */
                IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMStat =
                    CeIMOR_e_ECMInit;

                /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMFailedRationality' */
                IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMFailed = false;

                /* VariantMerge generated from: '<S83>/VeIMOR_b_EngDsbldToIC' */
                IMOR_ac_B.VariantMergeForOutportVeIMOR_b_EngDsbldT = false;

                /* During 'IMOR_ECM_ECMInit': '<S197>:11' */
                if (VeIMOR_b_KeyON)
                {
                    /* Transition: '<S197>:205' */
                    IMOR_ac_DW.is_c35_IMOR_ac = IMOR_ac_IN_IMOR_KeyOn;
                    IMOR_ac_DW.is_IMOR_KeyOn = IMOR_ac_IN_IMOR_ECMKO_StartTimer;
                    IMOR__enter_atomic_IMOR_ECMKO_StartTimer();
                }
                else
                {
                    /* VariantMerge generated from: '<S83>/VeIMOR_t_ECMStateTimer' */
                    IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT +=
                        KeIMOR_t_dT;
                }
                break;

              case IMOR_ac_IN_IMOR_KeyOn:
                IMOR_ac_IMOR_KeyOn();
                break;

              default:
                /* During 'IMOR_Repeat': '<S197>:247' */
                switch (IMOR_ac_DW.is_IMOR_Repeat)
                {
                  case IMOR_ac_IN_IMOR_ECMRpt_CheckECM:
                    /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMFailedRationality' */
                    IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMFailed = false;

                    /* VariantMerge generated from: '<S83>/VeIMOR_b_EngDsbldToIC' */
                    IMOR_ac_B.VariantMergeForOutportVeIMOR_b_EngDsbldT = false;

                    /* During 'IMOR_ECMRpt_CheckECM': '<S197>:272' */
                    /* Transition: '<S197>:449' */
                    IMOR_ac_DW.is_IMOR_Repeat = IMOR_ac_IN_IMOR_ECMRpt_SendinSOP;

                    /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMStat' */
                    /* Entry 'IMOR_ECMRpt_SendinSOP': '<S197>:292' */
                    IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMStat =
                        CeIMOR_e_ECMRpt_SendinSOP;

                    /* VariantMerge generated from: '<S83>/VeIMOR_t_ECMStateTimer' */
                    IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT = 0.0F;

                    /* VariantMerge generated from: '<S83>/VeIMOR_b_ImmoSOPRequest' */
                    IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ImmoSOPRe = true;

                    /* VariantMerge generated from: '<S83>/VeIMOR_b_CANepTMsgSndReq' */
                    IMOR_ac_B.VariantMergeForOutportVeIMOR_b_CANepTMsg = true;

                    /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMHCPStatCanC' */
                    IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMHCPSta =
                        CeIMOR_e_HCPIS;
                    break;

                  case IMOR_ac_IN_IMOR_ECMRpt_Checking:
                    /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMStat' */
                    IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMStat =
                        CeIMOR_e_ECMRpt_Checking;

                    /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMFailedRationality' */
                    IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMFailed = false;

                    /* VariantMerge generated from: '<S83>/VeIMOR_b_EngDsbldToIC' */
                    IMOR_ac_B.VariantMergeForOutportVeIMOR_b_EngDsbldT = false;

                    /* During 'IMOR_ECMRpt_Checking': '<S197>:273' */
                    if (((IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT <
                            KeIMOR_t_ECMRationalityTimer) &&
                            (IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmo_h ==
                             ((TeIMOR_e_ECMStatCANC)
                              IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmoSt)))
                        && (((((uint32)
                               IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmo_h)
                              == CeIMOR_e_ECMcRUN) || (((uint32)
                            IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmo_h) ==
                           CeIMOR_e_ECMcKILL)) || (((uint32)
                            IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmo_h) ==
                          CeIMOR_e_ECMcSNA)))
                    {
                        /* Transition: '<S197>:338' */
                        if (((IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmo_h
                              == ((TeIMOR_e_ECMStatCANC)
                                  IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmoSt))
                             && (((uint32)
                                  IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmo_h)
                                 == CeIMOR_e_ECMcRUN)) && (((uint32)
                                IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmoSt)
                             == CeIMOR_e_ECMeRUN))
                        {
                            /* Transition: '<S197>:261' */
                            IMOR_ac_DW.is_IMOR_Repeat =
                                IMOR_ac_IN_IMOR_ECMRpt_Complete;

                            /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMStat' */
                            /* Entry 'IMOR_ECMRpt_Complete': '<S197>:275' */
                            IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMStat =
                                CeIMOR_e_ECMRpt_Complete;

                            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMPassed' */
                            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMPassed =
                                true;

                            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMNoSOPResp' */
                            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMNoSOPR =
                                false;

                            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMnoWU' */
                            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMnoWU =
                                false;

                            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMWUnoHandshake' */
                            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMWUnoHa =
                                false;

                            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMFailedRationality' */
                            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMFailed =
                                false;

                            /* VariantMerge generated from: '<S83>/VeIMOR_b_ImmoSOPRequest' */
                            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ImmoSOPRe =
                                false;

                            /* VariantMerge generated from: '<S83>/VeIMOR_b_EngDsbldToIC' */
                            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_EngDsbldT =
                                false;

                            /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMHCPStatCanC' */
                            IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMHCPSta =
                                CeIMOR_e_HCPRUN;

                            /* VariantMerge generated from: '<S83>/VeIMOR_t_ECMStateTimer' */
                            IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT =
                                0.0F;
                        }
                        else
                        {
                            /* Transition: '<S197>:339' */
                            guard1 = true;
                        }
                    }
                    else if (IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT >=
                             KeIMOR_t_ECMRationalityTimer)
                    {
                        /* Transition: '<S197>:312' */
                        guard1 = true;
                    }
                    else
                    {
                        /* VariantMerge generated from: '<S83>/VeIMOR_t_ECMStateTimer' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT +=
                            KeIMOR_t_dT;
                    }
                    break;

                  case IMOR_ac_IN_IMOR_ECMRpt_Complete:
                    /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMStat' */
                    IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMStat =
                        CeIMOR_e_ECMRpt_Complete;

                    /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMFailedRationality' */
                    IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMFailed = false;

                    /* VariantMerge generated from: '<S83>/VeIMOR_b_EngDsbldToIC' */
                    IMOR_ac_B.VariantMergeForOutportVeIMOR_b_EngDsbldT = false;

                    /* During 'IMOR_ECMRpt_Complete': '<S197>:275' */
                    if ((VeIMOR_b_ECUValidKeyCycle) && (((VeIMOR_b_ECMReset) ||
                            (VeIMOR_b_ECUValidKeyCycle)) || (VeIMOR_b_KeyON)))
                    {
                        /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMPassed' */
                        /* Transition: '<S197>:264' */
                        /* Transition: '<S197>:317' */
                        /* Transition: '<S197>:319' */
                        /* Transition: '<S197>:269' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMPassed =
                            false;
                        IMOR_ac_DW.is_IMOR_Repeat = IMOR_ac_IN_NO_ACTIVE_CHILD;
                        IMOR_ac_DW.is_c35_IMOR_ac = IMOR_ac_IN_IMOR_KeyOn;
                        IMOR_ac_DW.is_IMOR_KeyOn =
                            IMOR_ac_IN_IMOR_ECMKO_StartTimer;
                        IMOR__enter_atomic_IMOR_ECMKO_StartTimer();
                    }
                    else if ((IMOR_ac_B.VeIMOR_b_KeyONpostCRANK_a) ||
                             (VeIMOR_b_ECMReset))
                    {
                        /* Transition: '<S197>:470' */
                        IMOR_ac_DW.is_IMOR_Repeat = IMOR_ac_IN_IMOR_ECMRpt_Crank;

                        /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMPassed' */
                        /* Entry 'IMOR_ECMRpt_Crank': '<S197>:469' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMPassed =
                            true;

                        /* VariantMerge generated from: '<S83>/VeIMOR_b_EngDsbldToIC' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_EngDsbldT =
                            false;

                        /* VariantMerge generated from: '<S83>/VeIMOR_t_ECMStateTimer' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT =
                            0.0F;
                    }
                    else if ((!IMOR_ac_B.VeIMOR_b_KeyONpostCRANK_a) &&
                             (IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT
                              >= KeIMOR_t_RepeatDly))
                    {
                        /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMPassed' */
                        /* Transition: '<S197>:441' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMPassed =
                            false;

                        /* VariantMerge generated from: '<S83>/VeIMOR_Cnt_SOPsentCnt' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_Cnt_SOPsent =
                            0.0F;

                        /* Transition: '<S197>:440' */
                        IMOR_ac_DW.is_IMOR_Repeat =
                            IMOR_ac_IN_IMOR_ECMRpt_TimerWait;

                        /* VariantMerge generated from: '<S83>/VeIMOR_b_ImmoSOPRequest' */
                        /* Entry 'IMOR_ECMRpt_TimerWait': '<S197>:424' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ImmoSOPRe =
                            false;

                        /* VariantMerge generated from: '<S83>/VeIMOR_b_CANepTMsgSndReq' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_CANepTMsg =
                            false;

                        /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMHCPStatCanC' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMHCPSta =
                            CeIMOR_e_HCPIS;

                        /* VariantMerge generated from: '<S83>/VeIMOR_t_ECMStateTimer' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT =
                            0.0F;
                    }
                    else
                    {
                        /* VariantMerge generated from: '<S83>/VeIMOR_t_ECMStateTimer' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT +=
                            KeIMOR_t_dT;
                    }
                    break;

                  case IMOR_ac_IN_IMOR_ECMRpt_Crank:
                    /* VariantMerge generated from: '<S83>/VeIMOR_b_EngDsbldToIC' */
                    IMOR_ac_B.VariantMergeForOutportVeIMOR_b_EngDsbldT = false;

                    /* During 'IMOR_ECMRpt_Crank': '<S197>:469' */
                    if (!IMOR_ac_B.VeIMOR_b_KeyONpostCRANK_a)
                    {
                        /* Transition: '<S197>:474' */
                        IMOR_ac_DW.is_IMOR_Repeat =
                            IMOR_ac_IN_IMOR_ECMRpt_Complete;

                        /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMStat' */
                        /* Entry 'IMOR_ECMRpt_Complete': '<S197>:275' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMStat =
                            CeIMOR_e_ECMRpt_Complete;

                        /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMPassed' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMPassed =
                            true;

                        /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMNoSOPResp' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMNoSOPR =
                            false;

                        /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMnoWU' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMnoWU = false;

                        /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMWUnoHandshake' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMWUnoHa =
                            false;

                        /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMFailedRationality' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMFailed =
                            false;

                        /* VariantMerge generated from: '<S83>/VeIMOR_b_ImmoSOPRequest' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ImmoSOPRe =
                            false;

                        /* VariantMerge generated from: '<S83>/VeIMOR_b_EngDsbldToIC' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_EngDsbldT =
                            false;

                        /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMHCPStatCanC' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMHCPSta =
                            CeIMOR_e_HCPRUN;

                        /* VariantMerge generated from: '<S83>/VeIMOR_t_ECMStateTimer' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT =
                            0.0F;
                    }
                    else
                    {
                        if ((VeIMOR_b_ECUValidKeyCycle) && (((VeIMOR_b_ECMReset)
                              || (VeIMOR_b_ECUValidKeyCycle)) || (VeIMOR_b_KeyON)))
                        {
                            /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMPassed' */
                            /* Transition: '<S197>:471' */
                            /* Transition: '<S197>:317' */
                            /* Transition: '<S197>:319' */
                            /* Transition: '<S197>:269' */
                            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMPassed =
                                false;
                            IMOR_ac_DW.is_IMOR_Repeat =
                                IMOR_ac_IN_NO_ACTIVE_CHILD;
                            IMOR_ac_DW.is_c35_IMOR_ac = IMOR_ac_IN_IMOR_KeyOn;
                            IMOR_ac_DW.is_IMOR_KeyOn =
                                IMOR_ac_IN_IMOR_ECMKO_StartTimer;
                            IMOR__enter_atomic_IMOR_ECMKO_StartTimer();
                        }
                    }
                    break;

                  case IMOR_ac_IN_IMOR_ECMRpt_DTC2:
                    /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMStat' */
                    IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMStat =
                        CeIMOR_e_ECMRpt_DTC2;

                    /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMFailedRationality' */
                    IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMFailed = false;

                    /* VariantMerge generated from: '<S83>/VeIMOR_b_EngDsbldToIC' */
                    IMOR_ac_B.VariantMergeForOutportVeIMOR_b_EngDsbldT = false;

                    /* During 'IMOR_ECMRpt_DTC2': '<S197>:274' */
                    /* Transition: '<S197>:260' */
                    /* Transition: '<S197>:265' */
                    /* Transition: '<S197>:313' */
                    /* Transition: '<S197>:317' */
                    /* Transition: '<S197>:319' */
                    if (((VeIMOR_b_ECMReset) || (VeIMOR_b_ECUValidKeyCycle)) ||
                            (VeIMOR_b_KeyON))
                    {
                        /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMPassed' */
                        /* Transition: '<S197>:269' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMPassed =
                            false;
                        IMOR_ac_DW.is_IMOR_Repeat = IMOR_ac_IN_NO_ACTIVE_CHILD;
                        IMOR_ac_DW.is_c35_IMOR_ac = IMOR_ac_IN_IMOR_KeyOn;
                        IMOR_ac_DW.is_IMOR_KeyOn =
                            IMOR_ac_IN_IMOR_ECMKO_StartTimer;
                        IMOR__enter_atomic_IMOR_ECMKO_StartTimer();
                    }
                    else
                    {
                        /* VariantMerge generated from: '<S83>/VeIMOR_t_ECMStateTimer' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT +=
                            KeIMOR_t_dT;
                    }
                    break;

                  case IMOR_ac_IN_IMOR_ECMRpt_DTC3:
                    /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMStat' */
                    IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMStat =
                        CeIMOR_e_ECMRpt_DTC3;

                    /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMFailedRationality' */
                    IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMFailed = true;

                    /* VariantMerge generated from: '<S83>/VeIMOR_b_EngDsbldToIC' */
                    IMOR_ac_B.VariantMergeForOutportVeIMOR_b_EngDsbldT = false;

                    /* During 'IMOR_ECMRpt_DTC3': '<S197>:276' */
                    /* Transition: '<S197>:263' */
                    /* Transition: '<S197>:313' */
                    /* Transition: '<S197>:317' */
                    /* Transition: '<S197>:319' */
                    if (((VeIMOR_b_ECMReset) || (VeIMOR_b_ECUValidKeyCycle)) ||
                            (VeIMOR_b_KeyON))
                    {
                        /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMPassed' */
                        /* Transition: '<S197>:269' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMPassed =
                            false;
                        IMOR_ac_DW.is_IMOR_Repeat = IMOR_ac_IN_NO_ACTIVE_CHILD;
                        IMOR_ac_DW.is_c35_IMOR_ac = IMOR_ac_IN_IMOR_KeyOn;
                        IMOR_ac_DW.is_IMOR_KeyOn =
                            IMOR_ac_IN_IMOR_ECMKO_StartTimer;
                        IMOR__enter_atomic_IMOR_ECMKO_StartTimer();
                    }
                    break;

                  case IMOR_ac_IN_IMOR_ECMRpt_SOPRcvd:
                    /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMStat' */
                    IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMStat =
                        CeIMOR_e_ECMRpt_SOPRcvd;

                    /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMFailedRationality' */
                    IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMFailed = false;

                    /* VariantMerge generated from: '<S83>/VeIMOR_b_EngDsbldToIC' */
                    IMOR_ac_B.VariantMergeForOutportVeIMOR_b_EngDsbldT = false;

                    /* During 'IMOR_ECMRpt_SOPRcvd': '<S197>:306' */
                    if ((IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT <
                            KeIMOR_t_ECMWUTimer) && ((((uint32)
                            IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmo_h)
                            != CeIMOR_e_ECMcIS) || (((uint32)
                            IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmoSt)
                            != CeIMOR_e_ECMeIS)))
                    {
                        /* Transition: '<S197>:257' */
                        IMOR_ac_DW.is_IMOR_Repeat =
                            IMOR_ac_IN_IMOR_ECMRpt_Checking;

                        /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMStat' */
                        /* Entry 'IMOR_ECMRpt_Checking': '<S197>:273' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMStat =
                            CeIMOR_e_ECMRpt_Checking;

                        /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMPassed' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMPassed =
                            false;

                        /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMNoSOPResp' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMNoSOPR =
                            false;

                        /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMnoWU' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMnoWU = false;

                        /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMWUnoHandshake' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMWUnoHa =
                            false;

                        /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMFailedRationality' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMFailed =
                            false;

                        /* VariantMerge generated from: '<S83>/VeIMOR_b_ImmoSOPRequest' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ImmoSOPRe =
                            false;

                        /* VariantMerge generated from: '<S83>/VeIMOR_b_EngDsbldToIC' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_EngDsbldT =
                            false;

                        /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMHCPStatCanC' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMHCPSta =
                            CeIMOR_e_HCPIS;

                        /* VariantMerge generated from: '<S83>/VeIMOR_t_ECMStateTimer' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT =
                            0.0F;
                    }
                    else if (((IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT
                               >= KeIMOR_t_ECMWUTimer) && (((uint32)
                                IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmo_h)
                               == CeIMOR_e_ECMcIS)) && (((uint32)
                               IMOR_ac_B.VM_Conditional_Signal_VeIMOR_e_ECMImmoSt)
                              == CeIMOR_e_ECMeIS))
                    {
                        /* Transition: '<S197>:256' */
                        IMOR_ac_DW.is_IMOR_Repeat = IMOR_ac_IN_IMOR_ECMRpt_DTC2;

                        /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMStat' */
                        /* Entry 'IMOR_ECMRpt_DTC2': '<S197>:274' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMStat =
                            CeIMOR_e_ECMRpt_DTC2;

                        /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMPassed' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMPassed =
                            false;

                        /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMNoSOPResp' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMNoSOPR =
                            false;

                        /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMnoWU' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMnoWU = false;

                        /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMWUnoHandshake' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMWUnoHa =
                            true;

                        /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMFailedRationality' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMFailed =
                            false;

                        /* VariantMerge generated from: '<S83>/VeIMOR_b_ImmoSOPRequest' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ImmoSOPRe =
                            false;

                        /* VariantMerge generated from: '<S83>/VeIMOR_b_EngDsbldToIC' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_EngDsbldT =
                            false;

                        /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMHCPStatCanC' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMHCPSta =
                            CeIMOR_e_HCPKILL;

                        /* VariantMerge generated from: '<S83>/VeIMOR_Cnt_SOPsentCnt' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_Cnt_SOPsent =
                            0.0F;

                        /* VariantMerge generated from: '<S83>/VeIMOR_t_ECMStateTimer' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT =
                            0.0F;
                    }
                    else
                    {
                        /* VariantMerge generated from: '<S83>/VeIMOR_t_ECMStateTimer' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT +=
                            KeIMOR_t_dT;
                    }
                    break;

                  case IMOR_ac_IN_IMOR_ECMRpt_SendinSOP:
                    IMOR_ac_IMOR_ECMRpt_SendinSOP();
                    break;

                  default:
                    /* During 'IMOR_ECMRpt_TimerWait': '<S197>:424' */
                    if (IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT >=
                            KeIMOR_t_ECMSOPIncDelay)
                    {
                        /* VariantMerge generated from: '<S83>/VeIMOR_Cnt_SOPsentCnt' */
                        /* Transition: '<S197>:425' */
                        /* Exit 'IMOR_ECMRpt_TimerWait': '<S197>:424' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_Cnt_SOPsent++;
                        IMOR_ac_DW.is_IMOR_Repeat =
                            IMOR_ac_IN_IMOR_ECMRpt_SendinSOP;

                        /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMStat' */
                        /* Entry 'IMOR_ECMRpt_SendinSOP': '<S197>:292' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMStat =
                            CeIMOR_e_ECMRpt_SendinSOP;

                        /* VariantMerge generated from: '<S83>/VeIMOR_t_ECMStateTimer' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT =
                            0.0F;

                        /* VariantMerge generated from: '<S83>/VeIMOR_b_ImmoSOPRequest' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ImmoSOPRe =
                            true;

                        /* VariantMerge generated from: '<S83>/VeIMOR_b_CANepTMsgSndReq' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_CANepTMsg =
                            true;

                        /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMHCPStatCanC' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMHCPSta =
                            CeIMOR_e_HCPIS;
                    }
                    else
                    {
                        /* VariantMerge generated from: '<S83>/VeIMOR_t_ECMStateTimer' */
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT +=
                            KeIMOR_t_dT;
                    }
                    break;
                }
                break;
            }

            if (guard1)
            {
                IMOR_ac_DW.is_IMOR_Repeat = IMOR_ac_IN_IMOR_ECMRpt_DTC3;

                /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMStat' */
                /* Entry 'IMOR_ECMRpt_DTC3': '<S197>:276' */
                IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMStat =
                    CeIMOR_e_ECMRpt_DTC3;

                /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMPassed' */
                IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMPassed = false;

                /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMNoSOPResp' */
                IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMNoSOPR = false;

                /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMnoWU' */
                IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMnoWU = false;

                /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMWUnoHandshake' */
                IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMWUnoHa = false;

                /* VariantMerge generated from: '<S83>/VeIMOR_b_ECMFailedRationality' */
                IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMFailed = true;

                /* VariantMerge generated from: '<S83>/VeIMOR_e_ECMHCPStatCanC' */
                IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMHCPSta =
                    CeIMOR_e_HCPKILL;

                /* VariantMerge generated from: '<S83>/VeIMOR_b_ImmoSOPRequest' */
                IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ImmoSOPRe = false;

                /* VariantMerge generated from: '<S83>/VeIMOR_b_EngDsbldToIC' */
                IMOR_ac_B.VariantMergeForOutportVeIMOR_b_EngDsbldT = false;
            }
        }

        /* End of Chart: '<S193>/ECM_BCM_Monitor' */

        /* Update for UnitDelay: '<S196>/Unit Delay2' */
        IMOR_ac_DW.UnitDelay2_DSTATE_l =
            rtb_VM_Conditional_Signal_VeIMOR_b_ECMRe;

        /* End of Outputs for SubSystem: '<S83>/Immo' */
#endif

        /* End of Outputs for SubSystem: '<S52>/Variant Subsystem' */

        /* Switch: '<S53>/Switch1' */
        if (!rtb_KeyOff3secArb_write_IRV)
        {
            /* Switch: '<S53>/Switch3' incorporates:
             *  Constant: '<S84>/Calib'
             */
            if (KeIMOR_b_ECMStsHCPReset_SD)
            {
                /* Switch: '<S53>/Switch2' */
                if (VeIMOR_b_HCPReset_AD)
                {
                    /* DataStoreWrite: '<S53>/Data Store Write7' incorporates:
                     *  Gain: '<S80>/Gain'
                     *  Switch: '<S53>/Switch3'
                     */
                    EeIMOR_b_ImmoAuthValid_ECMMem =
                        IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMPassed;
                }
                else
                {
                    /* DataStoreWrite: '<S53>/Data Store Write7' incorporates:
                     *  Switch: '<S53>/Switch3'
                     */
                    EeIMOR_b_ImmoAuthValid_ECMMem =
                        rtb_TmpSignalConversionAtVeBSWR_b_ImmoAu;
                }

                /* End of Switch: '<S53>/Switch2' */
            }
            else
            {
                /* DataStoreWrite: '<S53>/Data Store Write7' incorporates:
                 *  Gain: '<S80>/Gain'
                 *  Switch: '<S53>/Switch3'
                 */
                EeIMOR_b_ImmoAuthValid_ECMMem =
                    IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMPassed;
            }

            /* End of Switch: '<S53>/Switch3' */
        }

        /* End of Switch: '<S53>/Switch1' */

        /* Logic: '<S90>/Logical3' incorporates:
         *  Constant: '<S90>/Constant Value'
         *  Constant: '<S90>/Constant Value1'
         *  Constant: '<S92>/Calib'
         *  Constant: '<S93>/Calib'
         *  Constant: '<S94>/Calib'
         *  Constant: '<S95>/Calib'
         *  Constant: '<S96>/Calib'
         *  Logic: '<S90>/Logical4'
         *  Logic: '<S90>/Logical5'
         *  Logic: '<S90>/Logical6'
         *  Logic: '<S90>/Logical7'
         *  Logic: '<S90>/Logical8'
         *  Logic: '<S90>/Logical9'
         *  Merge: '<Root>/VeIMOR_b_ORC_HealthFA_IRV_Merge'
         *  Merge: '<Root>/VeIMOR_b_VC_VehCfg2_StatFA_IRV_Merge'
         *  Merge: '<Root>/VeIMOR_b_VC_VehCfg3_StatFA_IRV_Merge'
         *  Merge: '<Root>/VeIMOR_b_VC_VehCfg4_StatFA_IRV_Merge'
         *  Merge: '<Root>/VeIMOR_b_VC_VehCfg6_StatFA_IRV_Merge'
         *  RelationalOperator: '<S90>/Comparison'
         *  RelationalOperator: '<S90>/Comparison1'
         *  SignalConversion generated from: '<S6>/VeIMOR_b_ORC_HealthFA_Read'
         *  SignalConversion generated from: '<S6>/VeIMOR_b_VC_VehCfg2_StatFA_Read'
         *  SignalConversion generated from: '<S6>/VeIMOR_b_VC_VehCfg3_StatFA_Read'
         *  SignalConversion generated from: '<S6>/VeIMOR_b_VC_VehCfg4_StatFA_Read'
         *  SignalConversion generated from: '<S6>/VeIMOR_b_VC_VehCfg6_StatFA_Read'
         */
        VeIMOR_b_ImmoByPass = ((((((((((sint32)
            rtb_TmpSignalConversionAtVeBSWR_Cnt_Immo) >= 1) && (((sint32)
            IMOR_ac_B.TmpSignalConversionAtVaIMOR_y_MMKeyStr_E[6]) == 0)) &&
            (!VeIMOR_b_CBCRes_Rcvd)) &&
            ((Rte_IrvRead_IMOR_FastTEF_VeIMOR_b_ORC_HealthFA_write_IRV()) ||
             (KeIMOR_b_ORC_Health_Fsft_En))) &&
            ((Rte_IrvRead_IMOR_FastTEF_VeIMOR_b_VC_VehCfg2_StatFA_write_IRV()) ||
             (KeIMOR_b_VehCfg2_Stat_Fsft_En))) &&
            ((Rte_IrvRead_IMOR_FastTEF_VeIMOR_b_VC_VehCfg3_StatFA_write_IRV()) ||
             (KeIMOR_b_VehCfg3_Stat_Fsft_En))) &&
                                ((Rte_IrvRead_IMOR_FastTEF_VeIMOR_b_VC_VehCfg4_StatFA_write_IRV
            ()) || (KeIMOR_b_VehCfg4_Stat_Fsft_En))) &&
                               ((Rte_IrvRead_IMOR_FastTEF_VeIMOR_b_VC_VehCfg6_StatFA_write_IRV
            ()) || (KeIMOR_b_VehCfg6_Stat_Fsft_En)));

        /* Logic: '<S91>/Logical16' incorporates:
         *  Constant: '<S100>/Calib'
         *  Constant: '<S101>/Calib'
         *  Constant: '<S102>/Calib'
         *  Constant: '<S97>/Calib'
         *  Constant: '<S98>/Calib'
         *  Constant: '<S99>/Calib'
         *  DataStoreRead: '<S91>/Data Store Read1'
         *  DataStoreRead: '<S91>/Data Store Read2'
         *  DataStoreRead: '<S91>/Data Store Read3'
         *  DataStoreRead: '<S91>/Data Store Read4'
         *  DataStoreRead: '<S91>/Data Store Read5'
         *  DataStoreRead: '<S91>/Data Store Read6'
         *  Logic: '<S63>/Logical16'
         *  Logic: '<S91>/Logical2'
         *  Logic: '<S91>/Logical3'
         *  Logic: '<S91>/Logical4'
         *  Logic: '<S91>/Logical5'
         *  Logic: '<S91>/Logical6'
         *  Logic: '<S91>/Logical7'
         */
        rtb_TmpSignalConversionAtVeBSWR_b_ImmoAu =
            (((((((EeIMOR_b_ORC_Health_rec) && (KeIMOR_b_ORC_Health_Rec_En)) ||
                 ((EeIMOR_b_VC_VehCfg2_Stat_rec) &&
                  (KeIMOR_b_VC_VehCfg2_Stat_rec_En))) ||
                ((EeIMOR_b_VC_VehCfg3_Stat_rec) &&
                 (KeIMOR_b_VC_VehCfg3_Stat_rec_En))) ||
               ((EeIMOR_b_VC_VehCfg4_Stat_rec) &&
                (KeIMOR_b_VC_VehCfg4_Stat_rec_En))) ||
              ((EeIMOR_b_VC_VehCfg6_Stat_rec) &&
               (KeIMOR_b_VC_VehCfg6_Stat_rec_En))) ||
             ((VeIMOR_b_CntrlEncdResFlag) && (KeIMOR_b_CntrlEncdResFlag_En)));

        /* Logic: '<S91>/Logical16' incorporates:
         *  Constant: '<S91>/Constant Value'
         *  Logic: '<S91>/Logical1'
         *  RelationalOperator: '<S91>/Comparison'
         */
        VeIMOR_b_ImmoByPass_Reset = (rtb_TmpSignalConversionAtVeBSWR_b_ImmoAu ||
            (((sint32)rtb_TmpSignalConversionAtVeBSWR_Cnt_Immo) < 1));

        /* Outputs for Atomic SubSystem: '<S53>/Signal Latch On With Reset' */
        /* Logic: '<S89>/OR1' incorporates:
         *  Logic: '<S89>/NOT'
         *  Logic: '<S89>/OR'
         *  UnitDelay: '<S89>/Unit Delay'
         */
        VeIMOR_b_ImmoByPass_AL = ((VeIMOR_b_ImmoByPass) ||
            ((!VeIMOR_b_ImmoByPass_Reset) && (VeIMOR_b_ImmoByPass_AL)));

        /* End of Outputs for SubSystem: '<S53>/Signal Latch On With Reset' */

        /* Switch: '<S53>/Switch6' incorporates:
         *  Constant: '<S85>/Calib'
         *  Constant: '<S87>/Calib'
         *  Switch: '<S53>/Switch5'
         */
        if (KeIMOR_b_Immo_Ovrd_SD)
        {
            /* Switch: '<S53>/Switch6' incorporates:
             *  Constant: '<S86>/Calib'
             */
            VeIMOR_b_HCPECMImmoPASSED = KeIMOR_b_Immo_Ovrd_D;
        }
        else if (KeIMOR_b_ImmoByPass_En)
        {
            /* Switch: '<S53>/Switch5' incorporates:
             *  DataStoreWrite: '<S53>/Data Store Write7'
             *  Logic: '<S53>/Logical1'
             *  Switch: '<S53>/Switch4'
             *  Switch: '<S53>/Switch6'
             */
            VeIMOR_b_HCPECMImmoPASSED = ((VeIMOR_b_ImmoByPass_AL) ||
                (rtb_VeIMOR_b_AuthValidVal_write_IRV &&
                 (EeIMOR_b_ImmoAuthValid_ECMMem)));
        }
        else
        {
            /* Switch: '<S53>/Switch6' incorporates:
             *  DataStoreWrite: '<S53>/Data Store Write7'
             *  Logic: '<S53>/Logical1'
             *  Switch: '<S53>/Switch5'
             */
            VeIMOR_b_HCPECMImmoPASSED = (rtb_VeIMOR_b_AuthValidVal_write_IRV &&
                (EeIMOR_b_ImmoAuthValid_ECMMem));
        }

        /* End of Switch: '<S53>/Switch6' */

        /* Gain: '<S88>/Gain' */
        VeIMOR_b_AuthenticationValid_BD = VeIMOR_b_HCPECMImmoPASSED;

        /* UnitDelay: '<S175>/Unit Delay' incorporates:
         *  Constant: '<S54>/Constant Value4'
         *  RelationalOperator: '<S54>/Comparison6'
         */
        rtb_VeIMOR_b_KeyInRunNoPSA = (((sint32)
            rtb_TmpSignalConversionAtVeBSWR_Cnt_Immo) >= 1);

        /* If: '<S54>/If' incorporates:
         *  Constant: '<S54>/Constant Value2'
         *  Constant: '<S54>/Constant Value3'
         *  Constant: '<S54>/Constant Value5'
         *  Logic: '<S54>/Logical1'
         *  Logic: '<S54>/Logical2'
         *  Logic: '<S54>/Logical4'
         *  Logic: '<S54>/Logical5'
         *  RelationalOperator: '<S54>/Comparison5'
         *  RelationalOperator: '<S54>/Comparison7'
         *  RelationalOperator: '<S54>/Comparison8'
         */
        if (((sint32)IMOR_ac_B.TmpSignalConversionAtVaIMOR_y_MMKeyStr_E[6]) == 1)
        {
            /* Outputs for IfAction SubSystem: '<S54>/Immo_Pairing_Process_Passed' incorporates:
             *  ActionPort: '<S106>/Action Port'
             */
            /* DataStoreWrite: '<S106>/Data Store Write1' */
            EeIMOR_e_BuildAssemblyModeStat = 0;

            /* End of Outputs for SubSystem: '<S54>/Immo_Pairing_Process_Passed' */
        }
        else if (rtb_VeIMOR_b_KeyInRunNoPSA && (VeIMOR_b_ImmoByPass_AL))
        {
            /* Outputs for IfAction SubSystem: '<S54>/Build_and_Assembly_Mode' incorporates:
             *  ActionPort: '<S103>/Action Port'
             */
            /* DataStoreWrite: '<S103>/Data Store Write1' */
            EeIMOR_e_BuildAssemblyModeStat = 1;

            /* End of Outputs for SubSystem: '<S54>/Build_and_Assembly_Mode' */
        }
        else
        {
            /* Logic: '<S54>/Logical1' incorporates:
             *  Logic: '<S54>/Logical3'
             */
            rtb_VeIMOR_b_ValidKeyCycle = !VeIMOR_b_ImmoByPass_AL;
            if (((((sint32)IMOR_ac_B.TmpSignalConversionAtVaIMOR_y_MMKeyStr_E[6])
                  == 0) && (((sint32)rtb_TmpSignalConversionAtVeBSWR_Cnt_Immo) ==
                            0)) && rtb_VeIMOR_b_ValidKeyCycle)
            {
                /* Outputs for IfAction SubSystem: '<S54>/Immo_Not_Paired' incorporates:
                 *  ActionPort: '<S104>/Action Port'
                 */
                /* DataStoreWrite: '<S104>/Data Store Write1' */
                EeIMOR_e_BuildAssemblyModeStat = 2;

                /* End of Outputs for SubSystem: '<S54>/Immo_Not_Paired' */
            }
            else
            {
                if (rtb_VeIMOR_b_KeyInRunNoPSA && rtb_VeIMOR_b_ValidKeyCycle)
                {
                    /* Outputs for IfAction SubSystem: '<S54>/Immo_Pair_Process_Failed' incorporates:
                     *  ActionPort: '<S105>/Action Port'
                     */
                    /* DataStoreWrite: '<S105>/Data Store Write1' */
                    EeIMOR_e_BuildAssemblyModeStat = 3;

                    /* End of Outputs for SubSystem: '<S54>/Immo_Pair_Process_Failed' */
                }
            }
        }

        /* End of If: '<S54>/If' */

        /* Outputs for Enabled SubSystem: '<S52>/Dec_ImmoByPassCnt' incorporates:
         *  EnablePort: '<S57>/Enable'
         */
        if ((((((uint32)IMOR_ac_DW.UnitDelay1_DSTATE_j) ==
                CePMDR_e_PowerMode_Off) && (CePMDR_e_PowerMode_Off != ((uint32)
                rtb_TmpSignalConversionAtVePMDR_e_PMM_Po))) && (((sint32)
                rtb_TmpSignalConversionAtVeBSWR_Cnt_Immo) > 0)) &&
                (KeIMOR_b_EnblDecByPassCntr))
        {
            /* Outport: '<Root>/AeIMOR_Cnt_ImmoByPassCntr_Strimm_out' incorporates:
             *  Constant: '<S57>/Constant Value1'
             *  Sum: '<S57>/Sum1'
             */
            Rte_Write_AeIMOR_Cnt_ImmoByPassCntr_AeIMOR_Cnt_ImmoByPassCntr
                ((uint8)((sint32)(((sint32)
                                   rtb_TmpSignalConversionAtVeBSWR_Cnt_Immo) - 1)));
        }

        /* End of Outputs for SubSystem: '<S52>/Dec_ImmoByPassCnt' */

        /* UnitDelay: '<S58>/Unit Delay1' incorporates:
         *  Constant: '<S163>/Constant'
         *  Constant: '<S164>/Calib'
         *  Constant: '<S62>/Constant Value'
         *  Logic: '<S62>/Logical'
         *  Logic: '<S62>/Logical1'
         *  RelationalOperator: '<S62>/Comparison'
         *  RelationalOperator: '<S62>/Comparison4'
         *  RelationalOperator: '<S62>/Comparison5'
         *  UnitDelay: '<S62>/Unit Delay1'
         */
        rtb_VeIMOR_b_KeyInRunNoPSA = IMOR_ac_DW.UnitDelay1_DSTATE_p;

        /* Logic: '<S58>/Logical1' incorporates:
         *  Constant: '<S111>/Constant'
         *  RelationalOperator: '<S58>/Comparison1'
         *  UnitDelay: '<S58>/Unit Delay1'
         *  UnitDelay: '<S58>/Unit Delay2'
         */
        IMOR_ac_DW.UnitDelay1_DSTATE_p = ((((uint32)
            rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) == CePMDR_e_PowerMode_Off)
            && (IMOR_ac_DW.UnitDelay2_DSTATE_h));

        /* Outputs for Atomic SubSystem: '<S58>/EdgeRising' */
        /* Logic: '<S127>/AND' incorporates:
         *  Logic: '<S127>/OR1'
         *  UnitDelay: '<S127>/Unit Delay'
         *  UnitDelay: '<S58>/Unit Delay1'
         */
        rtb_VeIMOR_b_ValidKeyCycle = ((IMOR_ac_DW.UnitDelay1_DSTATE_p) &&
            (!IMOR_ac_DW.UnitDelay_DSTATE_id));

        /* Update for UnitDelay: '<S127>/Unit Delay' incorporates:
         *  UnitDelay: '<S58>/Unit Delay1'
         */
        IMOR_ac_DW.UnitDelay_DSTATE_id = IMOR_ac_DW.UnitDelay1_DSTATE_p;

        /* End of Outputs for SubSystem: '<S58>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S58>/Signal Latch Off With Reset' */
        /* Logic: '<S131>/OR2' incorporates:
         *  Logic: '<S131>/OR'
         *  UnitDelay: '<S131>/Unit Delay'
         */
        IMOR_ac_DW.UnitDelay_DSTATE_cv = (rtb_VeIMOR_b_KeyInRunNoPSA &&
            (rtb_VeIMOR_b_ValidKeyCycle || (IMOR_ac_DW.UnitDelay_DSTATE_cv)));

        /* End of Outputs for SubSystem: '<S58>/Signal Latch Off With Reset' */

        /* Outputs for Atomic SubSystem: '<S58>/Counter Reset  Enabled 1' */
        /* Switch: '<S126>/Switch1' incorporates:
         *  Switch: '<S126>/Switch2'
         *  Switch: '<S126>/Switch3'
         *  UnitDelay: '<S131>/Unit Delay'
         */
        if (rtb_VeIMOR_b_ValidKeyCycle)
        {
            /* Switch: '<S126>/Switch1' incorporates:
             *  Constant: '<S126>/Constant Value2'
             */
            VeIMOR_Cnt_KeyOffCounter = 0U;
        }
        else
        {
            if (IMOR_ac_DW.UnitDelay_DSTATE_cv)
            {
                /* Switch: '<S126>/Switch1' incorporates:
                 *  Constant: '<S126>/Constant Value3'
                 *  Switch: '<S126>/Switch2'
                 *  Switch: '<S126>/Switch3'
                 */
                VeIMOR_Cnt_KeyOffCounter = 10U;
            }
        }

        /* End of Switch: '<S126>/Switch1' */
        /* End of Outputs for SubSystem: '<S58>/Counter Reset  Enabled 1' */

        /* Logic: '<S58>/Logical3' incorporates:
         *  Constant: '<S117>/Constant'
         *  Constant: '<S121>/Constant'
         *  Constant: '<S122>/Constant'
         *  RelationalOperator: '<S58>/Comparison2'
         *  RelationalOperator: '<S58>/Comparison3'
         *  RelationalOperator: '<S58>/Comparison4'
         *  UnitDelay: '<S58>/Unit Delay2'
         */
        IMOR_ac_DW.UnitDelay2_DSTATE_h = (((((uint32)
            rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) == CePMDR_e_PowerMode_Acc)
            || (((uint32)rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) ==
                CePMDR_e_PowerMode_Run)) || (((uint32)
            rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) ==
            CePMDR_e_PowerMode_Crank));

        /* Switch: '<S58>/Switch4' incorporates:
         *  Constant: '<S120>/Constant'
         *  Constant: '<S124>/Constant'
         *  Logic: '<S58>/Logical4'
         *  RelationalOperator: '<S58>/Comparison23'
         *  RelationalOperator: '<S58>/Comparison5'
         */
        if ((((uint32)rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) ==
                CePMDR_e_PowerMode_Off) || (((uint32)
                rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) ==
                CePMDR_e_PowerMode_Acc))
        {
            /* Switch: '<S58>/Switch4' incorporates:
             *  Constant: '<S123>/Constant'
             */
            IMOR_ac_B.Switch6_b = CeIMOR_e_HCPIS;
        }
        else
        {
            /* RelationalOperator: '<S58>/Comparison22' incorporates:
             *  RelationalOperator: '<S58>/Comparison18'
             *  RelationalOperator: '<S58>/Comparison20'
             *  Switch: '<S205>/Switch7'
             *  Switch: '<S58>/Switch2'
             *  Switch: '<S58>/Switch3'
             */
            VeIMOR_b_SetP1A11_Fail_tmp = IMOR_ac_B.Switch7_g;

            /* Switch: '<S58>/Switch3' incorporates:
             *  Constant: '<S112>/Constant'
             *  Constant: '<S115>/Constant'
             *  Constant: '<S118>/Constant'
             *  Logic: '<S58>/Logical16'
             *  Logic: '<S58>/Logical17'
             *  Logic: '<S58>/Logical18'
             *  RelationalOperator: '<S58>/Comparison17'
             *  RelationalOperator: '<S58>/Comparison18'
             *  RelationalOperator: '<S58>/Comparison19'
             *  RelationalOperator: '<S58>/Comparison20'
             *  RelationalOperator: '<S58>/Comparison21'
             *  RelationalOperator: '<S58>/Comparison22'
             *  Switch: '<S58>/Switch1'
             *  Switch: '<S58>/Switch2'
             *  VariantMerge generated from: '<S83>/VeIMOR_e_ECMHCPStatCanC'
             */
            if ((((uint32)IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMHCPSta) ==
                 CeIMOR_e_HCPRUN) && (CeIMOR_e_HCPRUN == ((uint32)
                    VeIMOR_b_SetP1A11_Fail_tmp)))
            {
                /* Switch: '<S58>/Switch4' incorporates:
                 *  Constant: '<S119>/Constant'
                 *  Switch: '<S58>/Switch3'
                 */
                IMOR_ac_B.Switch6_b = CeIMOR_e_HCPRUN;
            }
            else if ((((uint32)
                       IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMHCPSta) ==
                      CeIMOR_e_HCPKILL) || (CeIMOR_e_HCPKILL == ((uint32)
                       VeIMOR_b_SetP1A11_Fail_tmp)))
            {
                /* Switch: '<S58>/Switch2' incorporates:
                 *  Constant: '<S116>/Constant'
                 *  Switch: '<S58>/Switch4'
                 */
                IMOR_ac_B.Switch6_b = CeIMOR_e_HCPKILL;
            }
            else if ((((uint32)
                       IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMHCPSta) ==
                      CeIMOR_e_HCPIS) || (CeIMOR_e_HCPIS == ((uint32)
                       VeIMOR_b_SetP1A11_Fail_tmp)))
            {
                /* Switch: '<S58>/Switch1' incorporates:
                 *  Constant: '<S113>/Constant'
                 *  Switch: '<S58>/Switch2'
                 *  Switch: '<S58>/Switch4'
                 */
                IMOR_ac_B.Switch6_b = CeIMOR_e_HCPIS;
            }
            else
            {
                /* Switch: '<S58>/Switch4' incorporates:
                 *  Constant: '<S114>/Constant'
                 *  Switch: '<S58>/Switch1'
                 *  Switch: '<S58>/Switch2'
                 */
                IMOR_ac_B.Switch6_b = CeIMOR_e_HCPSNA;
            }
        }

        /* End of Switch: '<S58>/Switch4' */

        /* Switch: '<S58>/Switch6' incorporates:
         *  Constant: '<S128>/Calib'
         *  Constant: '<S129>/Calib'
         *  Switch: '<S58>/Switch5'
         */
        if (KeIMOR_b_Immo_CANStat_SD)
        {
            /* Switch: '<S58>/Switch6' incorporates:
             *  Constant: '<S130>/Calib'
             */
            IMOR_ac_B.Switch6_b = KeIMOR_e_Immo_CANStat_D;
        }
        else
        {
            if (KeIMOR_b_ImmoByPassCANStat_En)
            {
                /* Switch: '<S58>/Switch7' incorporates:
                 *  Switch: '<S58>/Switch5'
                 */
                if (VeIMOR_b_ImmoByPass_AL)
                {
                    /* Switch: '<S58>/Switch6' incorporates:
                     *  Constant: '<S125>/Constant'
                     *  Switch: '<S58>/Switch5'
                     */
                    IMOR_ac_B.Switch6_b = CeIMOR_e_HCPRUN;
                }

                /* End of Switch: '<S58>/Switch7' */
            }
        }

        /* End of Switch: '<S58>/Switch6' */

        /* RelationalOperator: '<S59>/Comparison2' incorporates:
         *  Constant: '<S133>/Constant'
         *  UnitDelay: '<S59>/Unit Delay1'
         */
        IMOR_ac_DW.UnitDelay1_DSTATE_b = (((uint32)
            rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) == CePMDR_e_PowerMode_Off);

        /* Switch: '<S52>/Switch4' incorporates:
         *  Constant: '<S55>/Constant'
         *  Constant: '<S56>/Constant'
         *  Logic: '<S52>/Logical4'
         *  RelationalOperator: '<S52>/Comparison1'
         *  RelationalOperator: '<S52>/Comparison25'
         */
        IMOR_ac_B.VeIMOR_b_AuthenticationValid_FC = (((((uint32)
            rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) != CePMDR_e_PowerMode_Off)
            && (((uint32)rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) !=
                CePMDR_e_PowerMode_Acc)) && (VeIMOR_b_AuthenticationValid_BD));

        /* Logic: '<S60>/Logical15' incorporates:
         *  Constant: '<S148>/Constant'
         *  Constant: '<S149>/Constant'
         *  Constant: '<S152>/Calib'
         *  Constant: '<S60>/Constant Value'
         *  Logic: '<S60>/Logical1'
         *  Logic: '<S60>/Logical10'
         *  Logic: '<S60>/Logical2'
         *  RelationalOperator: '<S60>/Comparison14'
         *  RelationalOperator: '<S60>/Comparison16'
         *  RelationalOperator: '<S60>/Comparison2'
         */
        VeIMOR_b_EnblP0513_En = (((((((uint32)
            rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) == CePMDR_e_PowerMode_Run)
            || (((uint32)rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) ==
                CePMDR_e_PowerMode_Crank)) && (KeIMOR_b_EnblP0513)) && (((sint32)
            rtb_TmpSignalConversionAtVeBSWR_Cnt_Immo) < 1)) &&
            (!VeIMOR_b_SetP1A11_Fail));

        /* RelationalOperator: '<S60>/Comparison4' incorporates:
         *  RelationalOperator: '<S60>/Comparison3'
         *  RelationalOperator: '<S64>/Comparison21'
         *  RelationalOperator: '<S64>/Comparison3'
         *  Switch: '<S58>/Switch6'
         */
        VeIMOR_b_SetP1A11_Fail_tmp = IMOR_ac_B.Switch6_b;

        /* Logic: '<S60>/Logical3' incorporates:
         *  Constant: '<S146>/Constant'
         *  Gain: '<S71>/Gain'
         *  RelationalOperator: '<S60>/Comparison4'
         */
        VeIMOR_b_SetP0513_Pass = (((((uint32)VeIMOR_b_SetP1A11_Fail_tmp) ==
            CeIMOR_e_HCPRUN) && (IMOR_ac_B.VeIMOR_b_AuthenticationValid_FC)) &&
            (VeIMOR_b_EnblP0513_En));

        /* Outputs for IfAction SubSystem: '<S60>/If Action Subsystem' incorporates:
         *  ActionPort: '<S150>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S150>/Turn On Delay Sample' */
        /* If: '<S60>/If' incorporates:
         *  Gain: '<S71>/Gain'
         *  Logic: '<S155>/OR1'
         *  Logic: '<S60>/Logical14'
         */
        rtb_VeIMOR_b_KeyInRunNoPSA = !IMOR_ac_B.VeIMOR_b_AuthenticationValid_FC;

        /* End of Outputs for SubSystem: '<S150>/Turn On Delay Sample' */
        /* End of Outputs for SubSystem: '<S60>/If Action Subsystem' */

        /* Logic: '<S60>/Logical9' incorporates:
         *  Constant: '<S147>/Constant'
         *  Logic: '<S60>/Logical14'
         *  RelationalOperator: '<S60>/Comparison3'
         */
        VeIMOR_b_SetP0513_Fail = (((VeIMOR_b_EnblP0513_En) &&
            rtb_VeIMOR_b_KeyInRunNoPSA) && (((uint32)VeIMOR_b_SetP1A11_Fail_tmp)
            == CeIMOR_e_HCPKILL));

        /* If: '<S60>/If' */
        rtPrevAction = IMOR_ac_DW.If_ActiveSubsystem;
        IMOR_ac_DW.If_ActiveSubsystem = -1;
        if (VeIMOR_b_SetP0513_Pass)
        {
            IMOR_ac_DW.If_ActiveSubsystem = 0;
        }
        else
        {
            if (VeIMOR_b_SetP0513_Fail)
            {
                IMOR_ac_DW.If_ActiveSubsystem = 1;
            }
        }

        switch (IMOR_ac_DW.If_ActiveSubsystem)
        {
          case 0:
            if (IMOR_ac_DW.If_ActiveSubsystem != rtPrevAction)
            {
                /* SystemReset for IfAction SubSystem: '<S60>/If Action Subsystem' incorporates:
                 *  ActionPort: '<S150>/Action Port'
                 */
                /* SystemReset for Atomic SubSystem: '<S150>/Turn On Delay Sample' */
                /* SystemReset for If: '<S60>/If' incorporates:
                 *  UnitDelay: '<S155>/Unit Delay'
                 *  UnitDelay: '<S157>/Unit Delay'
                 */
                IMOR_ac_DW.UnitDelay_DSTATE_e = 0U;

                /* SystemReset for Atomic SubSystem: '<S155>/EdgeRising' */
                IMOR_ac_DW.UnitDelay_DSTATE_et = false;

                /* End of SystemReset for SubSystem: '<S155>/EdgeRising' */
                /* End of SystemReset for SubSystem: '<S150>/Turn On Delay Sample' */
                /* End of SystemReset for SubSystem: '<S60>/If Action Subsystem' */
            }

            /* Outputs for IfAction SubSystem: '<S60>/If Action Subsystem' incorporates:
             *  ActionPort: '<S150>/Action Port'
             */
            /* Outputs for Atomic SubSystem: '<S150>/Turn On Delay Sample' */
            /* Outputs for Atomic SubSystem: '<S155>/EdgeRising' */
            /* Logic: '<S157>/AND' incorporates:
             *  Gain: '<S71>/Gain'
             *  Logic: '<S157>/OR1'
             *  UnitDelay: '<S157>/Unit Delay'
             */
            rtb_VeIMOR_b_ValidKeyCycle =
                ((IMOR_ac_B.VeIMOR_b_AuthenticationValid_FC) &&
                 (!IMOR_ac_DW.UnitDelay_DSTATE_et));

            /* Update for UnitDelay: '<S157>/Unit Delay' incorporates:
             *  Gain: '<S71>/Gain'
             */
            IMOR_ac_DW.UnitDelay_DSTATE_et =
                IMOR_ac_B.VeIMOR_b_AuthenticationValid_FC;

            /* End of Outputs for SubSystem: '<S155>/EdgeRising' */

            /* Switch: '<S155>/Switch1' incorporates:
             *  Constant: '<S154>/Calib'
             *  Constant: '<S155>/Constant Value'
             *  Constant: '<S155>/Constant Value1'
             *  Logic: '<S155>/OR'
             *  MinMax: '<S155>/Minimum'
             *  Sum: '<S155>/Summation'
             *  UnitDelay: '<S155>/Unit Delay'
             */
            if (rtb_VeIMOR_b_KeyInRunNoPSA || rtb_VeIMOR_b_ValidKeyCycle)
            {
                IMOR_ac_DW.UnitDelay_DSTATE_e = 0U;
            }
            else if (KeIMOR_Cnt_P0513_Pass_Deb < ((uint16)(((uint32)
                        IMOR_ac_DW.UnitDelay_DSTATE_e) + 1U)))
            {
                /* MinMax: '<S155>/Minimum' incorporates:
                 *  Constant: '<S154>/Calib'
                 */
                IMOR_ac_DW.UnitDelay_DSTATE_e = KeIMOR_Cnt_P0513_Pass_Deb;
            }
            else
            {
                /* MinMax: '<S155>/Minimum' incorporates:
                 *  Constant: '<S155>/Constant Value'
                 *  Sum: '<S155>/Summation'
                 *  UnitDelay: '<S155>/Unit Delay'
                 */
                IMOR_ac_DW.UnitDelay_DSTATE_e = (uint16)(((uint32)
                    IMOR_ac_DW.UnitDelay_DSTATE_e) + 1U);
            }

            /* End of Switch: '<S155>/Switch1' */

            /* Logic: '<S155>/AND' incorporates:
             *  Constant: '<S154>/Calib'
             *  Gain: '<S71>/Gain'
             *  RelationalOperator: '<S155>/Greater  Than'
             *  UnitDelay: '<S155>/Unit Delay'
             */
            VeIMOR_b_SetP0513_Pass_Deb =
                ((IMOR_ac_B.VeIMOR_b_AuthenticationValid_FC) &&
                 (IMOR_ac_DW.UnitDelay_DSTATE_e >= KeIMOR_Cnt_P0513_Pass_Deb));

            /* End of Outputs for SubSystem: '<S150>/Turn On Delay Sample' */

            /* Outputs for Enabled SubSystem: '<S150>/Event_ImmobKeyIncrt_ReportTestPassed_1' incorporates:
             *  EnablePort: '<S153>/Enable'
             */
            if (VeIMOR_b_SetP0513_Pass_Deb)
            {
                /* DataStoreWrite: '<S153>/FaultSts_ImmobKeyIncrt' incorporates:
                 *  Constant: '<S156>/Constant'
                 */
                IMOR_ac_DW.FaultSts_ImmobKeyIncrt = CeDFIB_e_Pass;
            }

            /* End of Outputs for SubSystem: '<S150>/Event_ImmobKeyIncrt_ReportTestPassed_1' */
            /* End of Outputs for SubSystem: '<S60>/If Action Subsystem' */
            break;

          case 1:
            if (IMOR_ac_DW.If_ActiveSubsystem != rtPrevAction)
            {
                /* SystemReset for IfAction SubSystem: '<S60>/If Action Subsystem1' incorporates:
                 *  ActionPort: '<S151>/Action Port'
                 */
                /* SystemReset for Atomic SubSystem: '<S151>/Turn On Delay Sample' */
                /* SystemReset for If: '<S60>/If' incorporates:
                 *  UnitDelay: '<S160>/Unit Delay'
                 *  UnitDelay: '<S162>/Unit Delay'
                 */
                IMOR_ac_DW.UnitDelay_DSTATE_o = 0U;

                /* SystemReset for Atomic SubSystem: '<S160>/EdgeRising' */
                IMOR_ac_DW.UnitDelay_DSTATE_i3e = false;

                /* End of SystemReset for SubSystem: '<S160>/EdgeRising' */
                /* End of SystemReset for SubSystem: '<S151>/Turn On Delay Sample' */
                /* End of SystemReset for SubSystem: '<S60>/If Action Subsystem1' */
            }

            /* Outputs for IfAction SubSystem: '<S60>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S151>/Action Port'
             */
            /* Outputs for Atomic SubSystem: '<S151>/Turn On Delay Sample' */
            /* Outputs for Atomic SubSystem: '<S160>/EdgeRising' */
            /* Logic: '<S162>/AND' incorporates:
             *  Logic: '<S162>/OR1'
             *  Logic: '<S60>/Logical14'
             *  UnitDelay: '<S162>/Unit Delay'
             */
            rtb_VeIMOR_b_ValidKeyCycle = (rtb_VeIMOR_b_KeyInRunNoPSA &&
                (!IMOR_ac_DW.UnitDelay_DSTATE_i3e));

            /* Update for UnitDelay: '<S162>/Unit Delay' incorporates:
             *  Logic: '<S60>/Logical14'
             */
            IMOR_ac_DW.UnitDelay_DSTATE_i3e = rtb_VeIMOR_b_KeyInRunNoPSA;

            /* End of Outputs for SubSystem: '<S160>/EdgeRising' */

            /* Switch: '<S160>/Switch1' incorporates:
             *  Constant: '<S159>/Calib'
             *  Constant: '<S160>/Constant Value'
             *  Constant: '<S160>/Constant Value1'
             *  Logic: '<S160>/OR'
             *  Logic: '<S160>/OR1'
             *  Logic: '<S60>/Logical14'
             *  MinMax: '<S160>/Minimum'
             *  Sum: '<S160>/Summation'
             *  UnitDelay: '<S160>/Unit Delay'
             */
            if ((!rtb_VeIMOR_b_KeyInRunNoPSA) || rtb_VeIMOR_b_ValidKeyCycle)
            {
                IMOR_ac_DW.UnitDelay_DSTATE_o = 0U;
            }
            else if (KeIMOR_Cnt_P0513_Fail_Deb < ((uint16)(((uint32)
                        IMOR_ac_DW.UnitDelay_DSTATE_o) + 1U)))
            {
                /* MinMax: '<S160>/Minimum' incorporates:
                 *  Constant: '<S159>/Calib'
                 */
                IMOR_ac_DW.UnitDelay_DSTATE_o = KeIMOR_Cnt_P0513_Fail_Deb;
            }
            else
            {
                /* MinMax: '<S160>/Minimum' incorporates:
                 *  Constant: '<S160>/Constant Value'
                 *  Sum: '<S160>/Summation'
                 *  UnitDelay: '<S160>/Unit Delay'
                 */
                IMOR_ac_DW.UnitDelay_DSTATE_o = (uint16)(((uint32)
                    IMOR_ac_DW.UnitDelay_DSTATE_o) + 1U);
            }

            /* End of Switch: '<S160>/Switch1' */

            /* Logic: '<S160>/AND' incorporates:
             *  Constant: '<S159>/Calib'
             *  Logic: '<S60>/Logical14'
             *  RelationalOperator: '<S160>/Greater  Than'
             *  UnitDelay: '<S160>/Unit Delay'
             */
            VeIMOR_b_SetP0513_Fail_Deb = (rtb_VeIMOR_b_KeyInRunNoPSA &&
                (IMOR_ac_DW.UnitDelay_DSTATE_o >= KeIMOR_Cnt_P0513_Fail_Deb));

            /* End of Outputs for SubSystem: '<S151>/Turn On Delay Sample' */

            /* Outputs for Enabled SubSystem: '<S151>/Event_ImmobKeyIncrt_ReportTestFailed_2' incorporates:
             *  EnablePort: '<S158>/Enable'
             */
            if (VeIMOR_b_SetP0513_Fail_Deb)
            {
                /* DataStoreWrite: '<S158>/FaultSts_ImmobKeyIncrt' incorporates:
                 *  Constant: '<S161>/Constant'
                 */
                IMOR_ac_DW.FaultSts_ImmobKeyIncrt = CeDFIB_e_Fail;
            }

            /* End of Outputs for SubSystem: '<S151>/Event_ImmobKeyIncrt_ReportTestFailed_2' */
            /* End of Outputs for SubSystem: '<S60>/If Action Subsystem1' */
            break;

          default:
            /* no actions */
            break;
        }

        /* Outputs for Atomic SubSystem: '<S63>/EdgeRising' */
        /* Logic: '<S165>/AND' incorporates:
         *  Logic: '<S165>/OR1'
         *  UnitDelay: '<S165>/Unit Delay'
         */
        rtb_VeIMOR_b_KeyInRunNoPSA = (rtb_TmpSignalConversionAtVeBSWR_b_ImmoAu &&
            (!IMOR_ac_DW.UnitDelay_DSTATE_dd));

        /* Update for UnitDelay: '<S165>/Unit Delay' */
        IMOR_ac_DW.UnitDelay_DSTATE_dd =
            rtb_TmpSignalConversionAtVeBSWR_b_ImmoAu;

        /* End of Outputs for SubSystem: '<S63>/EdgeRising' */

        /* Outputs for Enabled SubSystem: '<S52>/Dsbl_Auth_ByPass' incorporates:
         *  EnablePort: '<S61>/Enable'
         */
        if ((((sint32)rtb_TmpSignalConversionAtVeBSWR_Cnt_Immo) >= 1) &&
                rtb_VeIMOR_b_KeyInRunNoPSA)
        {
            /* Outport: '<Root>/AeIMOR_Cnt_ImmoByPassCntr_Strimm_out' incorporates:
             *  Constant: '<S61>/Constant Value'
             *  SignalConversion generated from: '<S61>/VeIMOR_Cnt_ImmoByPassCntr_Strimm_out'
             */
            Rte_Write_AeIMOR_Cnt_ImmoByPassCntr_AeIMOR_Cnt_ImmoByPassCntr
                ((uint8)0U);
        }

        /* End of Outputs for SubSystem: '<S52>/Dsbl_Auth_ByPass' */

        /* Logic: '<S64>/Logical7' incorporates:
         *  Constant: '<S172>/Constant'
         *  Constant: '<S173>/Constant'
         *  Constant: '<S174>/Constant'
         *  Constant: '<S63>/Constant Value1'
         *  Logic: '<S63>/Logical1'
         *  Logic: '<S64>/Logical3'
         *  RelationalOperator: '<S63>/Comparison'
         *  RelationalOperator: '<S64>/Comparison21'
         *  RelationalOperator: '<S64>/Comparison3'
         *  RelationalOperator: '<S64>/Comparison4'
         *  UnitDelay: '<S64>/Unit Delay1'
         */
        rtb_TmpSignalConversionAtVeBSWR_b_ImmoAu = (((((uint32)
            VeIMOR_b_SetP1A11_Fail_tmp) == CeIMOR_e_HCPRUN) || (((uint32)
            VeIMOR_b_SetP1A11_Fail_tmp) == CeIMOR_e_HCPKILL)) && (((uint32)
            IMOR_ac_DW.UnitDelay1_DSTATE_pe) == CeIMOR_e_HCPIS));

        /* Outputs for Atomic SubSystem: '<S64>/EdgeRising' */
        /* Logic: '<S175>/OR1' incorporates:
         *  UnitDelay: '<S175>/Unit Delay'
         */
        rtb_VeIMOR_b_KeyInRunNoPSA = !IMOR_ac_DW.UnitDelay_DSTATE_mg;

        /* Update for UnitDelay: '<S175>/Unit Delay' */
        IMOR_ac_DW.UnitDelay_DSTATE_mg =
            rtb_TmpSignalConversionAtVeBSWR_b_ImmoAu;

        /* End of Outputs for SubSystem: '<S64>/EdgeRising' */

        /* DataTypeConversion: '<S65>/DataTypeConversion' incorporates:
         *  Switch: '<S58>/Switch6'
         */
        IMOR_ac_B.DataTypeConversion_c = IMOR_ac_B.Switch6_b;

        /* DataTypeConversion: '<S67>/DataTypeConversion' incorporates:
         *  VariantMerge generated from: '<S83>/VeIMOR_e_ECMStat'
         */
        IMOR_ac_B.DataTypeConversion_f =
            IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMStat;

        /* RelationalOperator: '<S372>/Comparison2' incorporates:
         *  DataTypeConversion: '<S68>/DataTypeConversion'
         *  VariantMerge generated from: '<S83>/VeIMOR_e_ECMStat'
         */
        IMOR_ac_B.DataTypeConversion_i =
            IMOR_ac_B.VariantMergeForOutportVeIMOR_e_ECMStat;

        /* Gain: '<S72>/Gain' */
        IMOR_ac_B.Gain_l = IMOR_ac_B.VariantMergeForOutportVeIMOR_b_EngDsbldT;

        /* Gain: '<S73>/Gain' */
        IMOR_ac_B.Gain_b = IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMWUnoHa;

        /* Gain: '<S74>/Gain' */
        IMOR_ac_B.Gain_f = IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMnoWU;

        /* Gain: '<S75>/Gain' */
        IMOR_ac_B.Gain_fj = IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMNoSOPR;

        /* Gain: '<S76>/Gain' */
        IMOR_ac_B.Gain = IMOR_ac_B.VariantMergeForOutportVeIMOR_Cnt_SOPsent;

        /* Gain: '<S77>/Gain' */
        IMOR_ac_B.Gain_h = IMOR_ac_B.VariantMergeForOutportVeIMOR_t_ECMStateT;

        /* Gain: '<S78>/Gain' */
        IMOR_ac_B.Gain_m = IMOR_ac_B.VariantMergeForOutportVeIMOR_b_CANepTMsg;

        /* Gain: '<S79>/Gain' */
        IMOR_ac_B.Gain_n = IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ImmoSOPRe;

        /* Gain: '<S81>/Gain' */
        IMOR_ac_B.Gain_lh = IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMFailed;

        /* SignalConversion: '<S52>/Signal Conversion1' incorporates:
         *  Gain: '<S80>/Gain'
         */
        IMOR_ac_B.VeIMOR_b_ECMPassed_FC =
            IMOR_ac_B.VariantMergeForOutportVeIMOR_b_ECMPassed;

        /* Outputs for Enabled SubSystem: '<S52>/UpdtEEPROM_AuthSt' incorporates:
         *  EnablePort: '<S82>/Enable'
         */
        /* Outputs for Atomic SubSystem: '<S64>/EdgeRising' */
        if (rtb_TmpSignalConversionAtVeBSWR_b_ImmoAu &&
                rtb_VeIMOR_b_KeyInRunNoPSA)
        {
            /* Outport: '<Root>/AeIMOR_b_UpdtAuthStat_Strimm_out' incorporates:
             *  Gain: '<S71>/Gain'
             *  Inport: '<S82>/AuthValid_EEPROM'
             */
            Rte_Write_AeIMOR_b_UpdtAuthStat_AeIMOR_b_UpdtAuthStat
                (IMOR_ac_B.VeIMOR_b_AuthenticationValid_FC);
        }

        /* End of Outputs for SubSystem: '<S64>/EdgeRising' */
        /* End of Outputs for SubSystem: '<S52>/UpdtEEPROM_AuthSt' */

        /* Outport: '<Root>/VeIMOR_e_BuildAssemblyModeStat' incorporates:
         *  DataStoreRead: '<S52>/Data Store Read'
         *  DataTypeConversion: '<S66>/DataTypeConversion'
         *  Logic: '<S175>/AND'
         */
        Rte_Write_VeIMOR_e_BuildAssemblyModeStat_Value
            ((TeIMOR_e_BuildAssemblyModeStat)EeIMOR_e_BuildAssemblyModeStat);

        /* Update for UnitDelay: '<S59>/Unit Delay2' */
        IMOR_ac_DW.UnitDelay2_DSTATE_f = VeIMOR_Cnt_KeyOffCounter;

        /* Update for UnitDelay: '<S136>/Unit Delay' */
        IMOR_ac_DW.UnitDelay_DSTATE_m4 = rtb_DataStoreRead8;

        /* Update for UnitDelay: '<S62>/Unit Delay1' incorporates:
         *  SignalConversion generated from: '<S6>/VePMDR_e_PMM_PowerMode'
         */
        IMOR_ac_DW.UnitDelay1_DSTATE_j =
            rtb_TmpSignalConversionAtVePMDR_e_PMM_Po;

        /* Update for UnitDelay: '<S64>/Unit Delay1' incorporates:
         *  Switch: '<S58>/Switch6'
         */
        IMOR_ac_DW.UnitDelay1_DSTATE_pe = IMOR_ac_B.Switch6_b;
    }
    else
    {
        if (IMOR_ac_DW.Trgd_BCMECM_MODE)
        {
            /* Disable for If: '<S60>/If' */
            IMOR_ac_DW.If_ActiveSubsystem = -1;
            IMOR_ac_DW.Trgd_BCMECM_MODE = false;
        }
    }

    /* End of Outputs for SubSystem: '<S43>/Trgd_BCMECM' */
    /* End of Outputs for SubSystem: '<S6>/ECM_Immobilizer' */

    /* Outputs for Function Call SubSystem: '<S6>/KeyCycleMgmtSubsys' */
    /* RelationalOperator: '<S333>/Comparison6' incorporates:
     *  Constant: '<S163>/Constant'
     *  Constant: '<S164>/Calib'
     *  Constant: '<S385>/Constant'
     *  Constant: '<S62>/Constant Value'
     *  Constant: '<S63>/Constant Value1'
     *  Logic: '<S143>/AND'
     *  Logic: '<S175>/AND'
     *  Logic: '<S62>/Logical'
     *  Logic: '<S62>/Logical1'
     *  Logic: '<S63>/Logical1'
     *  RelationalOperator: '<S62>/Comparison'
     *  RelationalOperator: '<S62>/Comparison4'
     *  RelationalOperator: '<S62>/Comparison5'
     *  RelationalOperator: '<S63>/Comparison'
     *  UnitDelay: '<S62>/Unit Delay1'
     */
    VeIMOC_b_KeyInRun = (((uint32)rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) ==
                         CePMDR_e_PowerMode_Run);

    /* Logic: '<S333>/Logical13' incorporates:
     *  Constant: '<S383>/Constant'
     *  RelationalOperator: '<S333>/Comparison15'
     */
    VeIMOC_b_KeyRunCrank = ((VeIMOC_b_KeyInRun) || (((uint32)
        rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) == CePMDR_e_PowerMode_Crank));

    /* Logic: '<S50>/Logical15' incorporates:
     *  Constant: '<S329>/Constant'
     *  RelationalOperator: '<S50>/Comparison18'
     *  UnitDelay: '<S50>/Unit Delay5'
     */
    VeIMOR_b_KeyOffOnCntEnbl = ((((uint32)IMOR_ac_DW.UnitDelay5_DSTATE_i) ==
        CePMDR_e_PowerMode_Off) && (VeIMOC_b_KeyRunCrank));

    /* Outputs for Atomic SubSystem: '<S50>/Counter Reset  Enabled ' */
    /* Switch: '<S330>/Switch2' */
    if (VeIMOR_b_KeyOffOnCntEnbl)
    {
        /* Switch: '<S330>/Switch' incorporates:
         *  Constant: '<S330>/Constant Value1'
         *  Sum: '<S330>/Subtraction'
         *  Switch: '<S330>/Switch2'
         *  UnitDelay: '<S330>/Unit Delay'
         */
        VeIMOR_Cnt_KeyOffOnCntTemp = (uint16)(((uint32)
            VeIMOR_Cnt_KeyOffOnCntTemp) + 1U);
    }

    /* End of Switch: '<S330>/Switch2' */
    /* End of Outputs for SubSystem: '<S50>/Counter Reset  Enabled ' */

    /* DataTypeConversion: '<S50>/Data Type Conversion' */
    VeIMOR_Cnt_KeyOffOnCnt = (float32)VeIMOR_Cnt_KeyOffOnCntTemp;

    /* Logic: '<S341>/Logical5' incorporates:
     *  Constant: '<S343>/Constant'
     *  Constant: '<S344>/Constant'
     *  Constant: '<S345>/Constant'
     *  Constant: '<S346>/Constant'
     *  Logic: '<S341>/Logical4'
     *  RelationalOperator: '<S341>/Comparison1'
     *  RelationalOperator: '<S341>/Comparison2'
     *  RelationalOperator: '<S341>/Comparison3'
     *  RelationalOperator: '<S341>/Comparison4'
     *  UnitDelay: '<S341>/Unit Delay6'
     *  UnitDelay: '<S341>/Unit Delay8'
     *  UnitDelay: '<S341>/Unit Delay9'
     */
    rtb_TmpSignalConversionAtVeBSWR_b_ImmoAu = ((((uint32)
        rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) == CePMDR_e_PowerMode_Off) &&
        (((((uint32)IMOR_ac_DW.UnitDelay6_DSTATE_g) == CePMDR_e_PowerMode_Acc) ||
          (((uint32)IMOR_ac_DW.UnitDelay8_DSTATE) == CePMDR_e_PowerMode_Run)) ||
         (((uint32)IMOR_ac_DW.UnitDelay9_DSTATE) == CePMDR_e_PowerMode_Crank)));

    /* Outputs for Atomic SubSystem: '<S341>/EdgeRising2' */
    /* Logic: '<S351>/OR1' incorporates:
     *  UnitDelay: '<S351>/Unit Delay'
     */
    rtb_VeIMOR_b_KeyInRunNoPSA = !IMOR_ac_DW.UnitDelay_DSTATE_co;

    /* Update for UnitDelay: '<S351>/Unit Delay' */
    IMOR_ac_DW.UnitDelay_DSTATE_co = rtb_TmpSignalConversionAtVeBSWR_b_ImmoAu;

    /* End of Outputs for SubSystem: '<S341>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S341>/EdgeRising3' */
    /* Logic: '<S352>/AND' incorporates:
     *  Logic: '<S352>/OR1'
     *  UnitDelay: '<S341>/Unit Delay10'
     *  UnitDelay: '<S352>/Unit Delay'
     */
    VeIMOR_b_ComfortStrategy_AuthPass = ((IMOR_ac_DW.UnitDelay10_DSTATE) &&
        (!IMOR_ac_DW.UnitDelay_DSTATE_ko));

    /* Update for UnitDelay: '<S352>/Unit Delay' incorporates:
     *  UnitDelay: '<S341>/Unit Delay10'
     */
    IMOR_ac_DW.UnitDelay_DSTATE_ko = IMOR_ac_DW.UnitDelay10_DSTATE;

    /* End of Outputs for SubSystem: '<S341>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S341>/Counter Reset  Enabled ' */
    /* Switch: '<S348>/Switch' incorporates:
     *  Logic: '<S351>/AND'
     *  Switch: '<S348>/Switch2'
     */
    if (VeIMOR_b_ComfortStrategy_AuthPass)
    {
        /* Switch: '<S348>/Switch' incorporates:
         *  Constant: '<S348>/Constant Value2'
         */
        VeIMOR_Cnt_KeyCycleMaxCunt = 0U;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S341>/EdgeRising2' */
        if (rtb_TmpSignalConversionAtVeBSWR_b_ImmoAu &&
                rtb_VeIMOR_b_KeyInRunNoPSA)
        {
            /* Switch: '<S348>/Switch' incorporates:
             *  Constant: '<S348>/Constant Value1'
             *  Sum: '<S348>/Subtraction'
             *  Switch: '<S348>/Switch2'
             *  UnitDelay: '<S348>/Unit Delay'
             */
            VeIMOR_Cnt_KeyCycleMaxCunt = (uint16)(((uint32)
                VeIMOR_Cnt_KeyCycleMaxCunt) + 1U);
        }

        /* End of Outputs for SubSystem: '<S341>/EdgeRising2' */
    }

    /* End of Switch: '<S348>/Switch' */
    /* End of Outputs for SubSystem: '<S341>/Counter Reset  Enabled ' */

    /* RelationalOperator: '<S341>/Comparison' incorporates:
     *  Constant: '<S353>/Calib'
     */
    VeIMOR_b_KeyCycleMaxLim = (VeIMOR_Cnt_KeyCycleMaxCunt <=
        KeIMOR_Cnt_KeyCycleMaxCunt);

    /* Logic: '<S333>/Logical5' incorporates:
     *  Constant: '<S386>/Constant'
     *  Constant: '<S387>/Constant'
     *  Logic: '<S333>/Logical4'
     *  RelationalOperator: '<S333>/Comparison7'
     *  RelationalOperator: '<S333>/Comparison8'
     *  UnitDelay: '<S333>/Unit Delay'
     *  UnitDelay: '<S333>/Unit Delay1'
     */
    VeIMOC_b_KeyTransRunCrank = ((VeIMOC_b_KeyRunCrank) && ((((uint32)
        IMOR_ac_DW.UnitDelay_DSTATE_pr) == CePMDR_e_PowerMode_Off) || (((uint32)
        IMOR_ac_DW.UnitDelay1_DSTATE_c) == CePMDR_e_PowerMode_Acc)));

    /* Outputs for Atomic SubSystem: '<S341>/Signal Latch On With Reset2' */
    /* Logic: '<S356>/OR1' incorporates:
     *  Constant: '<S347>/Constant'
     *  Logic: '<S356>/NOT'
     *  Logic: '<S356>/OR'
     *  RelationalOperator: '<S341>/Comparison5'
     *  UnitDelay: '<S356>/Unit Delay'
     */
    IMOR_ac_DW.UnitDelay_DSTATE_gd = ((VeIMOC_b_KeyTransRunCrank) || ((((uint32)
        rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) != CePMDR_e_PowerMode_Off) &&
        (IMOR_ac_DW.UnitDelay_DSTATE_gd)));

    /* End of Outputs for SubSystem: '<S341>/Signal Latch On With Reset2' */

    /* Outputs for Atomic SubSystem: '<S341>/EdgeRising1' */
    /* Logic: '<S350>/AND' incorporates:
     *  Logic: '<S332>/Logical'
     *  Logic: '<S335>/Logical3'
     */
    rtb_TmpSignalConversionAtVeBSWR_b_ImmoAu = !IMOR_ac_B.Switch7;

    /* Outputs for Atomic SubSystem: '<S341>/Signal Latch On With Reset1' */
    /* Logic: '<S355>/OR1' incorporates:
     *  Logic: '<S350>/AND'
     *  Logic: '<S350>/OR1'
     *  Logic: '<S355>/NOT'
     *  Logic: '<S355>/OR'
     *  UnitDelay: '<S341>/Unit Delay5'
     *  UnitDelay: '<S350>/Unit Delay'
     *  UnitDelay: '<S355>/Unit Delay'
     */
    IMOR_ac_DW.UnitDelay_DSTATE_fo = ((IMOR_ac_DW.UnitDelay5_DSTATE) ||
        ((rtb_TmpSignalConversionAtVeBSWR_b_ImmoAu ||
          (IMOR_ac_DW.UnitDelay_DSTATE_go)) && (IMOR_ac_DW.UnitDelay_DSTATE_fo)));

    /* End of Outputs for SubSystem: '<S341>/Signal Latch On With Reset1' */
    /* End of Outputs for SubSystem: '<S341>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S388>/Counter Reset  Enabled ' */
    /* Switch: '<S390>/Switch2' incorporates:
     *  Constant: '<S390>/Constant Value2'
     *  Logic: '<S388>/Logical2'
     *  RelationalOperator: '<S388>/Comparison4'
     *  Switch: '<S390>/Switch'
     *  UnitDelay: '<S388>/Unit Delay'
     *  UnitDelay: '<S390>/Unit Delay'
     */
    if (IMOR_ac_B.Switch3_b != IMOR_ac_DW.UnitDelay_DSTATE_j)
    {
        IMOR_ac_DW.UnitDelay_DSTATE_a = 0U;
    }
    else
    {
        /* UnitDelay: '<S390>/Unit Delay' incorporates:
         *  Constant: '<S390>/Constant Value1'
         *  Sum: '<S390>/Subtraction'
         *  Switch: '<S390>/Switch2'
         */
        IMOR_ac_DW.UnitDelay_DSTATE_a = (uint16)(((uint32)
            IMOR_ac_DW.UnitDelay_DSTATE_a) + 1U);
    }

    /* End of Switch: '<S390>/Switch2' */
    /* End of Outputs for SubSystem: '<S388>/Counter Reset  Enabled ' */

    /* RelationalOperator: '<S388>/Comparison1' incorporates:
     *  Constant: '<S389>/Calib'
     *  UnitDelay: '<S390>/Unit Delay'
     */
    rtb_VeIMOR_b_KeyInRunNoPSA = (IMOR_ac_DW.UnitDelay_DSTATE_a >=
        KeIMOR_Cnt_RunCrankActive_Deb);

    /* Outputs for Atomic SubSystem: '<S388>/EdgeRising2' */
    /* Logic: '<S391>/OR1' incorporates:
     *  UnitDelay: '<S391>/Unit Delay'
     */
    rtb_VeIMOR_b_ValidKeyCycle = !IMOR_ac_DW.UnitDelay_DSTATE_gn;

    /* Update for UnitDelay: '<S391>/Unit Delay' */
    IMOR_ac_DW.UnitDelay_DSTATE_gn = rtb_VeIMOR_b_KeyInRunNoPSA;

    /* Outputs for Enabled SubSystem: '<S388>/Subsystem2' */
    IMOR_ac_Subsystem2(rtb_VeIMOR_b_KeyInRunNoPSA && rtb_VeIMOR_b_ValidKeyCycle,
                       IMOR_ac_B.Switch3_b, &IMOR_ac_B.Subsystem2_h);

    /* End of Outputs for SubSystem: '<S388>/Subsystem2' */
    /* End of Outputs for SubSystem: '<S388>/EdgeRising2' */

    /* Gain: '<S392>/Gain' incorporates:
     *  Logic: '<S391>/AND'
     */
    VeIMOR_b_RunCrankActiveAnalog_AD = IMOR_ac_B.Subsystem2_h.In1;

    /* Logic: '<S341>/Logical7' incorporates:
     *  UnitDelay: '<S355>/Unit Delay'
     *  UnitDelay: '<S356>/Unit Delay'
     */
    rtb_VeIMOR_b_KeyInRunNoPSA = (((IMOR_ac_DW.UnitDelay_DSTATE_gd) &&
        (IMOR_ac_DW.UnitDelay_DSTATE_fo)) && (VeIMOR_b_RunCrankActiveAnalog_AD));

    /* Logic: '<S341>/Logical2' */
    rtb_VeIMOR_b_ValidKeyCycle = (rtb_VeIMOR_b_KeyInRunNoPSA ||
        (VeIMOR_b_ComfortStrategy_AuthPass));

    /* Outputs for Atomic SubSystem: '<S341>/EdgeRising' */
    /* Logic: '<S349>/OR1' incorporates:
     *  UnitDelay: '<S349>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_PropSysActv_En = !IMOR_ac_DW.UnitDelay_DSTATE_fu;

    /* Update for UnitDelay: '<S349>/Unit Delay' */
    IMOR_ac_DW.UnitDelay_DSTATE_fu = rtb_VeIMOR_b_ValidKeyCycle;

    /* Outputs for Atomic SubSystem: '<S341>/Signal Latch On With Reset' */
    /* Logic: '<S354>/OR1' incorporates:
     *  Logic: '<S349>/AND'
     *  Logic: '<S354>/NOT'
     *  Logic: '<S354>/OR'
     *  UnitDelay: '<S341>/Unit Delay1'
     *  UnitDelay: '<S354>/Unit Delay'
     */
    VeIMOR_b_ComfortStrategy_Aft_Latch = ((IMOR_ac_DW.UnitDelay1_DSTATE) ||
        (((!rtb_VeIMOR_b_ValidKeyCycle) ||
          (!rtb_VM_Conditional_Signal_PropSysActv_En)) &&
         (IMOR_ac_DW.UnitDelay_DSTATE_du)));

    /* End of Outputs for SubSystem: '<S341>/EdgeRising' */

    /* Update for UnitDelay: '<S354>/Unit Delay' */
    IMOR_ac_DW.UnitDelay_DSTATE_du = VeIMOR_b_ComfortStrategy_Aft_Latch;

    /* End of Outputs for SubSystem: '<S341>/Signal Latch On With Reset' */

    /* Logic: '<S341>/Logical3' */
    VeIMOR_b_ComfortStrategy_AL = ((VeIMOR_b_ComfortStrategy_Aft_Latch) &&
        (VeIMOR_b_KeyCycleMaxLim));

    /* Logic: '<S333>/Logical1' incorporates:
     *  Constant: '<S382>/Constant'
     *  Constant: '<S384>/Constant'
     *  RelationalOperator: '<S333>/Comparison1'
     *  RelationalOperator: '<S333>/Comparison2'
     */
    VeIMOC_b_KeyOffAcc = ((((uint32)rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) ==
                           CePMDR_e_PowerMode_Off) || (((uint32)
                            rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) ==
                           CePMDR_e_PowerMode_Acc));

    /* UnitDelay: '<S342>/Unit Delay2' */
    rtb_Abs8 = IMOR_ac_DW.UnitDelay2_DSTATE;

    /* Logic: '<S342>/Logical2' incorporates:
     *  Logic: '<S342>/Logical3'
     *  RelationalOperator: '<S342>/Comparison1'
     *  UnitDelay: '<S342>/Unit Delay'
     *  UnitDelay: '<S342>/Unit Delay1'
     */
    VeIMOR_b_KeyCntRst = ((!IMOR_ac_DW.UnitDelay1_DSTATE_m) && (rtb_Abs8 >
                           IMOR_ac_DW.UnitDelay_DSTATE));

    /* Logic: '<S342>/Logical1' incorporates:
     *  UnitDelay: '<S342>/Unit Delay1'
     */
    VeIMOR_b_RstValidKeyCyclTmr = ((IMOR_ac_DW.UnitDelay1_DSTATE_m) ||
        (VeIMOR_b_KeyCntRst));

    /* Outputs for Atomic SubSystem: '<S342>/Stop Watch Reset Enabled1' */
    /* Switch: '<S369>/Switch' incorporates:
     *  Switch: '<S369>/Switch2'
     */
    if (VeIMOR_b_RstValidKeyCyclTmr)
    {
        /* Switch: '<S369>/Switch' incorporates:
         *  Constant: '<S369>/Constant Value2'
         */
        VeIMOR_t_ValidKeyCycTmr = 0.0F;
    }
    else
    {
        if (VeIMOC_b_KeyOffAcc)
        {
            /* Switch: '<S369>/Switch' incorporates:
             *  Constant: '<S334>/Calib'
             *  Sum: '<S369>/Subtraction'
             *  Switch: '<S369>/Switch2'
             *  UnitDelay: '<S369>/Unit Delay'
             */
            VeIMOR_t_ValidKeyCycTmr = KeIMOR_t_dT + VeIMOR_t_ValidKeyCycTmr;
        }
    }

    /* End of Switch: '<S369>/Switch' */
    /* End of Outputs for SubSystem: '<S342>/Stop Watch Reset Enabled1' */
    /* End of Outputs for SubSystem: '<S6>/KeyCycleMgmtSubsys' */

    /* Gain: '<S336>/Gain' incorporates:
     *  Inport: '<Root>/VePLTR_b_RmtVehStartReq'
     */
    Rte_Read_VePLTR_b_RmtVehStartReq_Value((&(VeIMOR_b_RmtVehStartReq_BD)));

    /* Outputs for Function Call SubSystem: '<S6>/KeyCycleMgmtSubsys' */
    /* RelationalOperator: '<S342>/Comparison5' incorporates:
     *  Constant: '<S362>/Calib'
     */
    VeIMOR_b_ComfortStrategy_Cnt = (VeIMOR_t_ValidKeyCycTmr >
        KeIMOR_Cnt_Tvalid_immo);

    /* Outputs for Atomic SubSystem: '<S342>/Signal Latch On With Reset' */
    /* Logic: '<S367>/OR1' incorporates:
     *  Constant: '<S358>/Constant'
     *  Constant: '<S359>/Constant'
     *  Logic: '<S342>/Logical18'
     *  Logic: '<S342>/Logical19'
     *  Logic: '<S342>/Logical20'
     *  Logic: '<S367>/NOT'
     *  Logic: '<S367>/OR'
     *  RelationalOperator: '<S342>/Comparison7'
     *  RelationalOperator: '<S342>/Comparison8'
     *  UnitDelay: '<S342>/Unit Delay4'
     *  UnitDelay: '<S342>/Unit Delay5'
     *  UnitDelay: '<S367>/Unit Delay'
     */
    VeIMOC_b_ThreeSecAftKeyOff = (((IMOR_ac_DW.UnitDelay5_DSTATE_b) && (((uint32)
        rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) == CePMDR_e_PowerMode_Off)) ||
        ((((!IMOR_ac_DW.UnitDelay4_DSTATE) || (((uint32)
        rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) != CePMDR_e_PowerMode_Run)) &&
          (!VeIMOR_b_ComfortStrategy_Cnt)) && (IMOR_ac_DW.UnitDelay_DSTATE_f)));

    /* Update for UnitDelay: '<S367>/Unit Delay' */
    IMOR_ac_DW.UnitDelay_DSTATE_f = VeIMOC_b_ThreeSecAftKeyOff;

    /* End of Outputs for SubSystem: '<S342>/Signal Latch On With Reset' */

    /* Outputs for Atomic SubSystem: '<S335>/EdgeFalling' */
    /* Outputs for Atomic SubSystem: '<S342>/EdgeFalling' */
    /* Logic: '<S331>/Logical13' incorporates:
     *  Logic: '<S360>/OR1'
     *  Logic: '<S394>/OR1'
     */
    rtb_VeIMOR_b_ValidKeyCycle = !VeIMOR_b_RmtVehStartReq_BD;

    /* End of Outputs for SubSystem: '<S342>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S335>/EdgeFalling' */

    /* Logic: '<S331>/Logical11' incorporates:
     *  Logic: '<S331>/Logical13'
     */
    VeIMOR_b_ComfortStrategy_BD = (((VeIMOC_b_ThreeSecAftKeyOff) &&
        rtb_VeIMOR_b_ValidKeyCycle) && (VeIMOR_b_ComfortStrategy_AL));

    /* RelationalOperator: '<S342>/Comparison14' incorporates:
     *  Constant: '<S366>/Calib'
     */
    VeIMOR_b_1SecAftKeyOff = (VeIMOR_t_ValidKeyCycTmr > KeIMOR_t_ValidKeyCycTmr);

    /* RelationalOperator: '<S342>/Comparison6' incorporates:
     *  Constant: '<S357>/Constant'
     *  UnitDelay: '<S342>/Unit Delay4'
     */
    IMOR_ac_DW.UnitDelay4_DSTATE = (((uint32)
        rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) == CePMDR_e_PowerMode_Crank);

    /* Outputs for Atomic SubSystem: '<S342>/EdgeFalling' */
    /* Logic: '<S360>/AND' incorporates:
     *  UnitDelay: '<S360>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_VeIMOR_b_ECMRe = (rtb_VeIMOR_b_ValidKeyCycle &&
        (IMOR_ac_DW.UnitDelay_DSTATE_is));

    /* Update for UnitDelay: '<S360>/Unit Delay' */
    IMOR_ac_DW.UnitDelay_DSTATE_is = VeIMOR_b_RmtVehStartReq_BD;

    /* End of Outputs for SubSystem: '<S342>/EdgeFalling' */

    /* Logic: '<S342>/Logical4' */
    IMOR_ac_B.Logical4 = ((VeIMOC_b_KeyRunCrank) &&
                          (VeIMOR_b_RunCrankActiveAnalog_AD));

    /* Logic: '<S342>/Logical12' */
    VeIMOR_b_ValidKeyCycleBfrSW = ((VeIMOR_b_1SecAftKeyOff) &&
        (IMOR_ac_B.Logical4));

    /* UnitDelay: '<S342>/Unit Delay3' */
    VeIMOR_b_RmtVehStartReq_Valid_AD = IMOR_ac_DW.UnitDelay3_DSTATE;

    /* Logic: '<S342>/Logical10' */
    VeIMOR_b_ValidKeyCycle_BD = ((VeIMOR_b_ValidKeyCycleBfrSW) ||
        (VeIMOR_b_RmtVehStartReq_Valid_AD));

    /* Logic: '<S342>/Logical8' */
    VeIMOR_b_Latch_Reset = (rtb_VM_Conditional_Signal_VeIMOR_b_ECMRe ||
                            (VeIMOC_b_KeyOffAcc));

    /* Outputs for Atomic SubSystem: '<S342>/Signal Latch On With Reset1' */
    /* Logic: '<S342>/Logical17' incorporates:
     *  Logic: '<S368>/NOT'
     */
    rtb_VM_Conditional_Signal_PropSysActv_En = !VeIMOR_b_Latch_Reset;

    /* Logic: '<S368>/OR1' incorporates:
     *  Logic: '<S342>/Logical15'
     *  Logic: '<S342>/Logical17'
     *  Logic: '<S368>/OR'
     *  UnitDelay: '<S368>/Unit Delay'
     */
    VeIMOR_b_ValidKeyCycle_AD2 = (((VeIMOR_b_ValidKeyCycle_BD) &&
        rtb_VM_Conditional_Signal_PropSysActv_En) ||
        (rtb_VM_Conditional_Signal_PropSysActv_En &&
         (IMOR_ac_DW.UnitDelay_DSTATE_c1b)));

    /* Update for UnitDelay: '<S368>/Unit Delay' */
    IMOR_ac_DW.UnitDelay_DSTATE_c1b = VeIMOR_b_ValidKeyCycle_AD2;

    /* End of Outputs for SubSystem: '<S342>/Signal Latch On With Reset1' */

    /* Outputs for Atomic SubSystem: '<S342>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S370>/EdgeRising' */
    /* UnitDelay: '<S396>/Unit Delay' incorporates:
     *  UnitDelay: '<S371>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_PropSysActv_En = IMOR_ac_DW.UnitDelay_DSTATE_kt;

    /* Update for UnitDelay: '<S371>/Unit Delay' */
    IMOR_ac_DW.UnitDelay_DSTATE_kt = VeIMOR_b_ValidKeyCycle_AD2;

    /* Switch: '<S370>/Switch1' incorporates:
     *  Constant: '<S334>/Calib'
     *  Constant: '<S365>/Calib'
     *  Constant: '<S370>/Constant Value1'
     *  Logic: '<S370>/OR'
     *  Logic: '<S370>/OR1'
     *  Logic: '<S371>/AND'
     *  Logic: '<S371>/OR1'
     *  MinMax: '<S370>/Minimum'
     *  Sum: '<S370>/Summation'
     *  UnitDelay: '<S370>/Unit Delay'
     */
    if ((!VeIMOR_b_ValidKeyCycle_AD2) || ((VeIMOR_b_ValidKeyCycle_AD2) &&
            (!rtb_VM_Conditional_Signal_PropSysActv_En)))
    {
        IMOR_ac_DW.UnitDelay_DSTATE_lq = 0.0F;
    }
    else
    {
        IMOR_ac_DW.UnitDelay_DSTATE_lq = fminf(KeIMOR_t_KeyInRun_Delay,
            KeIMOR_t_dT + IMOR_ac_DW.UnitDelay_DSTATE_lq);
    }

    /* End of Switch: '<S370>/Switch1' */
    /* End of Outputs for SubSystem: '<S370>/EdgeRising' */

    /* Logic: '<S370>/AND' incorporates:
     *  Constant: '<S365>/Calib'
     *  RelationalOperator: '<S370>/Greater  Than'
     *  UnitDelay: '<S370>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_PropSysActv_En = ((VeIMOR_b_ValidKeyCycle_AD2) &&
        (IMOR_ac_DW.UnitDelay_DSTATE_lq >= KeIMOR_t_KeyInRun_Delay));

    /* End of Outputs for SubSystem: '<S342>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S342>/EdgeRising' */
    /* Logic: '<S361>/OR1' incorporates:
     *  UnitDelay: '<S361>/Unit Delay'
     */
    rtb_DataStoreRead8 = !IMOR_ac_DW.UnitDelay_DSTATE_b0;

    /* Update for UnitDelay: '<S361>/Unit Delay' */
    IMOR_ac_DW.UnitDelay_DSTATE_b0 = rtb_VM_Conditional_Signal_PropSysActv_En;

    /* End of Outputs for SubSystem: '<S342>/EdgeRising' */

    /* Switch: '<S331>/Switch1' incorporates:
     *  Constant: '<S337>/Calib'
     *  Inport: '<Root>/VePLTR_b_InFieldMode'
     */
    if (KeIMOR_b_FstReKeyInplantOvrdEnbl)
    {
        /* Switch: '<S331>/Switch1' incorporates:
         *  Constant: '<S338>/Calib'
         */
        VeIMOR_b_FstReKeyInplantMd = KeIMOR_b_FstReKeyInplantOvrdVal;
    }
    else
    {
        Rte_Read_VePLTR_b_InFieldMode_Value(&rtb_AND_ec);

        /* Switch: '<S331>/Switch1' incorporates:
         *  Inport: '<Root>/VePLTR_b_InFieldMode'
         *  Logic: '<S331>/Logical5'
         */
        VeIMOR_b_FstReKeyInplantMd = !rtb_AND_ec;
    }

    /* End of Switch: '<S331>/Switch1' */

    /* Logic: '<S342>/Logical7' incorporates:
     *  UnitDelay: '<S342>/Unit Delay3'
     */
    IMOR_ac_DW.UnitDelay3_DSTATE = (rtb_VM_Conditional_Signal_VeIMOR_b_ECMRe &&
        (VeIMOC_b_KeyInRun));

    /* Outputs for Atomic SubSystem: '<S342>/EdgeRising' */
    /* Switch: '<S342>/Switch2' incorporates:
     *  Constant: '<S364>/Calib'
     *  Logic: '<S361>/AND'
     */
    VeIMOR_b_ValidKeyCycle_Delay = ((KeIMOR_b_KeyInRun_DelaySD) &&
        (rtb_VM_Conditional_Signal_PropSysActv_En && rtb_DataStoreRead8));

    /* End of Outputs for SubSystem: '<S342>/EdgeRising' */

    /* Switch: '<S342>/Switch' incorporates:
     *  Logic: '<S342>/Logical6'
     */
    if ((VeIMOR_b_FstReKeyInplantMd) && (VeIMOR_b_KeyOffOnCntEnbl))
    {
        /* Switch: '<S342>/Switch' incorporates:
         *  Constant: '<S363>/Calib'
         */
        VeIMOR_b_ValidKeyCycle = KeIMOR_b_DisableFstKeyInplantMd;
    }
    else
    {
        /* Switch: '<S342>/Switch' */
        VeIMOR_b_ValidKeyCycle = VeIMOR_b_ValidKeyCycle_Delay;
    }

    /* End of Switch: '<S342>/Switch' */

    /* Logic: '<S372>/Logical' incorporates:
     *  Constant: '<S377>/Constant'
     *  Constant: '<S378>/Constant'
     *  Constant: '<S379>/Constant'
     *  Constant: '<S380>/Constant'
     *  Logic: '<S372>/Logical1'
     *  RelationalOperator: '<S372>/Comparison1'
     *  RelationalOperator: '<S372>/Comparison2'
     *  RelationalOperator: '<S372>/Comparison3'
     *  RelationalOperator: '<S372>/Comparison4'
     *  Switch: '<S58>/Switch6'
     */
    VeIMOC_b_ImmoPassed = (((((uint32)IMOR_ac_B.VeIMOR_e_IMORStat_Arb) ==
        CeIMOR_e_CV_RstStateTmr) && (((uint32)IMOR_ac_B.Switch6_b) ==
        CeIMOR_e_HCPRUN)) && ((((uint32)IMOR_ac_B.DataTypeConversion_i) ==
        CeIMOR_e_ECMKO_Passed) || (((uint32)IMOR_ac_B.DataTypeConversion_i) ==
        CeIMOR_e_ECMRpt_Complete)));

    /* Logic: '<S332>/Logical1' incorporates:
     *  Logic: '<S332>/Logical'
     *  Logic: '<S332>/Logical2'
     */
    VeIMOR_b_EnblDsbl_BD = (((((!VeIMOC_b_KeyRunCrank) ||
        rtb_TmpSignalConversionAtVeBSWR_b_ImmoAu) ||
        (!VeIMOR_b_RunCrankActiveAnalog_AD)) || (!VeIMOC_b_ImmoPassed)) ||
                            (VeIMOR_b_RmtVehStartReq_BD));

    /* Outputs for Atomic SubSystem: '<S332>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S376>/EdgeFalling' */
    /* UnitDelay: '<S396>/Unit Delay' incorporates:
     *  UnitDelay: '<S381>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_PropSysActv_En = IMOR_ac_DW.UnitDelay_DSTATE_am;

    /* Update for UnitDelay: '<S381>/Unit Delay' */
    IMOR_ac_DW.UnitDelay_DSTATE_am = VeIMOR_b_EnblDsbl_BD;

    /* Switch: '<S376>/Switch' incorporates:
     *  Constant: '<S334>/Calib'
     *  Constant: '<S375>/Calib'
     *  Constant: '<S376>/Constant Value1'
     *  Logic: '<S381>/AND'
     *  Logic: '<S381>/OR1'
     *  MinMax: '<S376>/Minimum'
     *  Sum: '<S376>/Summation'
     *  UnitDelay: '<S376>/Unit Delay'
     */
    if ((!VeIMOR_b_EnblDsbl_BD) && rtb_VM_Conditional_Signal_PropSysActv_En)
    {
        IMOR_ac_DW.UnitDelay_DSTATE_g = KeIMOR_t_EnblDsbl_Dly;
    }
    else
    {
        IMOR_ac_DW.UnitDelay_DSTATE_g = fmaxf(IMOR_ac_DW.UnitDelay_DSTATE_g -
            KeIMOR_t_dT, 0.0F);
    }

    /* End of Switch: '<S376>/Switch' */
    /* End of Outputs for SubSystem: '<S376>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S332>/Turn Off Delay Time' */
    /* End of Outputs for SubSystem: '<S6>/KeyCycleMgmtSubsys' */
    Rte_Read_VeTISR_n_InputSpeed_Value(&tmpRead_1);

    /* Outputs for Function Call SubSystem: '<S6>/KeyCycleMgmtSubsys' */
    /* Outputs for Atomic SubSystem: '<S332>/Turn Off Delay Time' */
    /* Logic: '<S376>/AND' incorporates:
     *  Constant: '<S376>/Constant Value2'
     *  Inport: '<Root>/VeTISR_n_InputSpeed'
     *  RelationalOperator: '<S376>/Greater  Than'
     *  UnitDelay: '<S376>/Unit Delay'
     */
    VeIMOR_b_EnblDsbl_AD = ((VeIMOR_b_EnblDsbl_BD) ||
                            (IMOR_ac_DW.UnitDelay_DSTATE_g > 0.0F));

    /* End of Outputs for SubSystem: '<S332>/Turn Off Delay Time' */

    /* Switch: '<S332>/Switch' incorporates:
     *  Constant: '<S374>/Calib'
     */
    if (KeIMOR_b_EnblDsblOvrrd_SD)
    {
        /* Switch: '<S332>/Switch' incorporates:
         *  Constant: '<S373>/Calib'
         */
        VeIMOR_b_EnblDsbl = KeIMOR_b_EnblDsblOvrrd_D;
    }
    else
    {
        /* Switch: '<S332>/Switch' */
        VeIMOR_b_EnblDsbl = VeIMOR_b_EnblDsbl_AD;
    }

    /* End of Switch: '<S332>/Switch' */

    /* Outputs for Atomic SubSystem: '<S335>/EdgeFalling' */
    /* Logic: '<S394>/AND' incorporates:
     *  UnitDelay: '<S394>/Unit Delay'
     */
    VeIMOR_b_DesRmtVehStartReq = (rtb_VeIMOR_b_ValidKeyCycle &&
        (IMOR_ac_DW.UnitDelay_DSTATE_pc));

    /* Update for UnitDelay: '<S394>/Unit Delay' */
    IMOR_ac_DW.UnitDelay_DSTATE_pc = VeIMOR_b_RmtVehStartReq_BD;

    /* End of Outputs for SubSystem: '<S335>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S335>/Signal Latch On With Reset1' */
    /* Logic: '<S400>/OR1' incorporates:
     *  Logic: '<S335>/Logical14'
     *  Logic: '<S400>/OR'
     *  UnitDelay: '<S335>/Unit Delay'
     *  UnitDelay: '<S400>/Unit Delay'
     */
    VeIMOR_b_PMM_RunCrank_AL = ((IMOR_ac_DW.UnitDelay_DSTATE_i3) ||
        ((VeIMOC_b_KeyRunCrank) && (IMOR_ac_DW.UnitDelay_DSTATE_as)));

    /* Update for UnitDelay: '<S400>/Unit Delay' */
    IMOR_ac_DW.UnitDelay_DSTATE_as = VeIMOR_b_PMM_RunCrank_AL;

    /* End of Outputs for SubSystem: '<S335>/Signal Latch On With Reset1' */

    /* Logic: '<S335>/Logical12' */
    VeIMOR_b_RmtVehStartReq_AD = ((VeIMOR_b_DesRmtVehStartReq) &&
        (VeIMOC_b_KeyInRun));

    /* Logic: '<S335>/Logical8' incorporates:
     *  Logic: '<S335>/Logical2'
     */
    VeIMOR_b_KeyInRunNoPSA = ((((VeIMOR_b_PMM_RunCrank_AL) &&
        rtb_TmpSignalConversionAtVeBSWR_b_ImmoAu) &&
        (VeIMOR_b_RunCrankActiveAnalog_AD)) || (VeIMOR_b_RmtVehStartReq_AD));

    /* Outputs for Atomic SubSystem: '<S335>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S401>/EdgeRising' */
    /* Logic: '<S402>/AND' incorporates:
     *  Logic: '<S402>/OR1'
     *  UnitDelay: '<S402>/Unit Delay'
     */
    rtb_AND_ec = ((VeIMOR_b_KeyInRunNoPSA) && (!IMOR_ac_DW.UnitDelay_DSTATE_c));

    /* Update for UnitDelay: '<S402>/Unit Delay' */
    IMOR_ac_DW.UnitDelay_DSTATE_c = VeIMOR_b_KeyInRunNoPSA;

    /* End of Outputs for SubSystem: '<S401>/EdgeRising' */

    /* Switch: '<S401>/Switch1' incorporates:
     *  Constant: '<S334>/Calib'
     *  Constant: '<S399>/Calib'
     *  Constant: '<S401>/Constant Value1'
     *  Logic: '<S401>/OR'
     *  Logic: '<S401>/OR1'
     *  MinMax: '<S401>/Minimum'
     *  Sum: '<S401>/Summation'
     *  UnitDelay: '<S401>/Unit Delay'
     */
    if ((!VeIMOR_b_KeyInRunNoPSA) || rtb_AND_ec)
    {
        IMOR_ac_DW.UnitDelay_DSTATE_l = 0.0F;
    }
    else
    {
        IMOR_ac_DW.UnitDelay_DSTATE_l = fminf(KeIMOR_t_KeyInRun_Delay,
            KeIMOR_t_dT + IMOR_ac_DW.UnitDelay_DSTATE_l);
    }

    /* End of Switch: '<S401>/Switch1' */

    /* Logic: '<S401>/AND' incorporates:
     *  Constant: '<S399>/Calib'
     *  RelationalOperator: '<S401>/Greater  Than'
     *  UnitDelay: '<S401>/Unit Delay'
     */
    rtb_AND_ec = ((VeIMOR_b_KeyInRunNoPSA) && (IMOR_ac_DW.UnitDelay_DSTATE_l >=
                   KeIMOR_t_KeyInRun_Delay));

    /* End of Outputs for SubSystem: '<S335>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S335>/EdgeRising' */
    /* Logic: '<S396>/OR1' incorporates:
     *  UnitDelay: '<S396>/Unit Delay'
     */
    rtb_VeIMOR_b_ValidKeyCycle = !IMOR_ac_DW.UnitDelay_DSTATE_c1;

    /* Update for UnitDelay: '<S396>/Unit Delay' */
    IMOR_ac_DW.UnitDelay_DSTATE_c1 = rtb_AND_ec;

    /* End of Outputs for SubSystem: '<S335>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S335>/EdgeFalling1' */
    /* Logic: '<S335>/Logical7' incorporates:
     *  Constant: '<S398>/Calib'
     *  Logic: '<S335>/Logical15'
     *  Logic: '<S335>/Logical4'
     *  Logic: '<S335>/Logical5'
     *  Logic: '<S335>/Logical6'
     *  Logic: '<S395>/AND'
     *  Logic: '<S395>/OR1'
     *  RelationalOperator: '<S335>/Comparison1'
     *  UnitDelay: '<S395>/Unit Delay'
     */
    VeIMOR_b_KeyONpostCRANK = (((((!rtb_TmpSignalConversionAtVeBSWR_b_ImmoAu) ||
        (tmpRead_1 >= KeIMOR_n_InputSpeedLimit)) || (IMOR_ac_B.Switch2_l)) ||
        (((!IMOR_ac_B.Switch1_f) && (IMOR_ac_DW.UnitDelay_DSTATE_pe)) &&
         rtb_TmpSignalConversionAtVeBSWR_b_ImmoAu)) || (VeIMOC_b_KeyOffAcc));

    /* End of Outputs for SubSystem: '<S335>/EdgeFalling1' */

    /* Switch: '<S335>/Switch1' incorporates:
     *  Constant: '<S397>/Calib'
     */
    if (KeIMOR_b_KeyInRun_DelaySD)
    {
        /* Outputs for Atomic SubSystem: '<S335>/EdgeRising' */
        /* Switch: '<S335>/Switch1' incorporates:
         *  Logic: '<S396>/AND'
         */
        VeIMOR_b_KeyInRunNoPSA = (rtb_AND_ec && rtb_VeIMOR_b_ValidKeyCycle);

        /* End of Outputs for SubSystem: '<S335>/EdgeRising' */
    }

    /* End of Switch: '<S335>/Switch1' */

    /* Update for UnitDelay: '<S50>/Unit Delay5' incorporates:
     *  SignalConversion generated from: '<S6>/VePMDR_e_PMM_PowerMode'
     */
    IMOR_ac_DW.UnitDelay5_DSTATE_i = rtb_TmpSignalConversionAtVePMDR_e_PMM_Po;

    /* Update for UnitDelay: '<S341>/Unit Delay6' incorporates:
     *  SignalConversion generated from: '<S6>/VePMDR_e_PMM_PowerMode'
     */
    IMOR_ac_DW.UnitDelay6_DSTATE_g = rtb_TmpSignalConversionAtVePMDR_e_PMM_Po;

    /* Update for UnitDelay: '<S341>/Unit Delay8' incorporates:
     *  SignalConversion generated from: '<S6>/VePMDR_e_PMM_PowerMode'
     */
    IMOR_ac_DW.UnitDelay8_DSTATE = rtb_TmpSignalConversionAtVePMDR_e_PMM_Po;

    /* Update for UnitDelay: '<S341>/Unit Delay9' incorporates:
     *  SignalConversion generated from: '<S6>/VePMDR_e_PMM_PowerMode'
     */
    IMOR_ac_DW.UnitDelay9_DSTATE = rtb_TmpSignalConversionAtVePMDR_e_PMM_Po;

    /* Update for UnitDelay: '<S341>/Unit Delay10' */
    IMOR_ac_DW.UnitDelay10_DSTATE = rtb_VeIMOR_b_AuthValidVal_write_IRV;

    /* Update for UnitDelay: '<S333>/Unit Delay' incorporates:
     *  SignalConversion generated from: '<S6>/VePMDR_e_PMM_PowerMode'
     */
    IMOR_ac_DW.UnitDelay_DSTATE_pr = rtb_TmpSignalConversionAtVePMDR_e_PMM_Po;

    /* Update for UnitDelay: '<S333>/Unit Delay1' incorporates:
     *  SignalConversion generated from: '<S6>/VePMDR_e_PMM_PowerMode'
     */
    IMOR_ac_DW.UnitDelay1_DSTATE_c = rtb_TmpSignalConversionAtVePMDR_e_PMM_Po;

    /* Update for UnitDelay: '<S341>/Unit Delay5' */
    IMOR_ac_DW.UnitDelay5_DSTATE = IMOR_ac_B.Switch7;

    /* Update for Atomic SubSystem: '<S341>/EdgeRising1' */
    /* Update for UnitDelay: '<S350>/Unit Delay' */
    IMOR_ac_DW.UnitDelay_DSTATE_go = IMOR_ac_B.Switch7;

    /* End of Update for SubSystem: '<S341>/EdgeRising1' */

    /* Update for UnitDelay: '<S388>/Unit Delay' */
    IMOR_ac_DW.UnitDelay_DSTATE_j = IMOR_ac_B.Switch3_b;

    /* Update for UnitDelay: '<S341>/Unit Delay1' */
    IMOR_ac_DW.UnitDelay1_DSTATE = rtb_VeIMOR_b_KeyInRunNoPSA;

    /* Update for UnitDelay: '<S342>/Unit Delay5' */
    IMOR_ac_DW.UnitDelay5_DSTATE_b = VeIMOC_b_KeyRunCrank;

    /* Update for UnitDelay: '<S342>/Unit Delay1' */
    IMOR_ac_DW.UnitDelay1_DSTATE_m = VeIMOR_b_ValidKeyCycle;

    /* Update for UnitDelay: '<S342>/Unit Delay2' */
    IMOR_ac_DW.UnitDelay2_DSTATE = VeIMOR_Cnt_KeyOffOnCnt;

    /* Update for UnitDelay: '<S342>/Unit Delay' */
    IMOR_ac_DW.UnitDelay_DSTATE = rtb_Abs8;

    /* Update for Atomic SubSystem: '<S335>/EdgeFalling1' */
    /* Update for UnitDelay: '<S395>/Unit Delay' */
    IMOR_ac_DW.UnitDelay_DSTATE_pe = IMOR_ac_B.Switch1_f;

    /* End of Update for SubSystem: '<S335>/EdgeFalling1' */

    /* Update for UnitDelay: '<S335>/Unit Delay' */
    IMOR_ac_DW.UnitDelay_DSTATE_i3 = VeIMOC_b_KeyTransRunCrank;

    /* End of Outputs for SubSystem: '<S6>/KeyCycleMgmtSubsys' */

    /* Outputs for Function Call SubSystem: '<S6>/InputOverrides' */
    /* Switch: '<S49>/Switch4' incorporates:
     *  Constant: '<S311>/Calib'
     *  Constant: '<S323>/Calib'
     *  DataStoreWrite: '<S49>/Data Store Write1'
     */
    if (KeIMOR_b_MMKey1org21_Temp_SD)
    {
        EeIMOR_y_MMKey1org21_Mem = KeIMOR_y_MMKey1org21_Temp_OV;
    }

    /* End of Switch: '<S49>/Switch4' */

    /* Switch: '<S49>/Switch5' incorporates:
     *  Constant: '<S312>/Calib'
     *  Constant: '<S324>/Calib'
     *  DataStoreWrite: '<S49>/Data Store Write2'
     */
    if (KeIMOR_b_MMKey1org22_Temp_SD)
    {
        EeIMOR_y_MMKey1org22_Mem = KeIMOR_y_MMKey1org22_Temp_OV;
    }

    /* End of Switch: '<S49>/Switch5' */

    /* Switch: '<S49>/Switch6' incorporates:
     *  Constant: '<S313>/Calib'
     *  Constant: '<S325>/Calib'
     *  DataStoreWrite: '<S49>/Data Store Write3'
     */
    if (KeIMOR_b_MMKey_3_Temp_SD)
    {
        EeIMOR_y_MMKey_3_Mem = KeIMOR_y_MMKey_3_Temp_OV;
    }

    /* End of Switch: '<S49>/Switch6' */

    /* Switch: '<S49>/Switch8' incorporates:
     *  Constant: '<S314>/Calib'
     *  Constant: '<S326>/Calib'
     *  DataStoreWrite: '<S49>/Data Store Write4'
     */
    if (KeIMOR_b_MMKey_4_Temp_SD)
    {
        EeIMOR_y_MMKey_4_Mem = KeIMOR_y_MMKey_4_Temp_OV;
    }

    /* End of Switch: '<S49>/Switch8' */

    /* Switch: '<S49>/Switch9' incorporates:
     *  Constant: '<S315>/Calib'
     *  Constant: '<S327>/Calib'
     *  DataStoreWrite: '<S49>/Data Store Write5'
     */
    if (KeIMOR_b_MMKey_5_Temp_SD)
    {
        EeIMOR_y_MMKey_5_Mem = KeIMOR_y_MMKey_5_Temp_OV;
    }

    /* End of Switch: '<S49>/Switch9' */

    /* Switch: '<S49>/Switch10' incorporates:
     *  Constant: '<S316>/Calib'
     *  Constant: '<S328>/Calib'
     *  DataStoreWrite: '<S49>/Data Store Write6'
     */
    if (KeIMOR_b_MMKey_6_Temp_SD)
    {
        EeIMOR_y_MMKey_6_Mem = KeIMOR_y_MMKey_6_Temp_OV;
    }

    /* End of Switch: '<S49>/Switch10' */

    /* Switch: '<S49>/Switch11' incorporates:
     *  Constant: '<S300>/Calib'
     */
    if (KeIMOR_b_CodeRecCmplt_Mem_SD)
    {
        /* Switch: '<S49>/Switch11' incorporates:
         *  Constant: '<S299>/Calib'
         */
        VeIMOR_b_CodeRecCplt_Mem = KeIMOR_b_CodeRecCmplt_Mem_OV;
    }
    else
    {
        /* Switch: '<S49>/Switch11' incorporates:
         *  DataStoreRead: '<S49>/Data Store Read9'
         */
        VeIMOR_b_CodeRecCplt_Mem = EeIMOR_b_CodeRecCmplt_Mem;
    }

    /* End of Switch: '<S49>/Switch11' */
    /* End of Outputs for SubSystem: '<S6>/InputOverrides' */
    Rte_Read_VePITR_b_ECMReset_Value(&tmpRead_7);
    Rte_Read_VePITR_b_ECMImmoStatePT_FA_Value(&tmpRead_6);
    Rte_Read_VePITR_e_ECMImmoStatePT_Value(&tmpRead_5);
    Rte_Read_VePITR_b_ECMImmoStatCanC_FA_Value(&tmpRead_4);
    Rte_Read_VePITR_e_ECMImmoStatCanC_Value(&tmpRead_3);
    Rte_Read_VeTISR_b_InputSpeedFA_Value(&tmpRead_2);
    Rte_Read_VeHPMR_b_PropSysActv_Value(&tmpRead_0);
    Rte_Read_VePMDR_b_RunCrankActiveAnalog_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S6>/InputOverrides' */
    /* DataStoreWrite: '<S49>/Data Store Write8' incorporates:
     *  Inport: '<Root>/VeHPMR_b_PropSysActv'
     *  Inport: '<Root>/VePITR_b_ECMImmoStatCanC_FA'
     *  Inport: '<Root>/VePITR_b_ECMImmoStatePT_FA'
     *  Inport: '<Root>/VePITR_b_ECMReset'
     *  Inport: '<Root>/VePITR_e_ECMImmoStatCanC'
     *  Inport: '<Root>/VePITR_e_ECMImmoStatePT'
     *  Inport: '<Root>/VePMDR_b_RunCrankActiveAnalog'
     *  Inport: '<Root>/VeTISR_b_InputSpeedFA'
     */
    EeIMOR_b_CodeRecCmplt_Mem = VeIMOR_b_CodeRecCplt_Mem;

    /* Switch: '<S49>/Switch7' incorporates:
     *  Constant: '<S318>/Calib'
     */
    if (KeIMOR_b_PropSysActv_SD)
    {
        /* Switch: '<S49>/Switch7' incorporates:
         *  Constant: '<S317>/Calib'
         */
        IMOR_ac_B.Switch7 = KeIMOR_b_PropSysActv_OV;
    }
    else
    {
        /* Switch: '<S49>/Switch7' */
        IMOR_ac_B.Switch7 = tmpRead_0;
    }

    /* End of Switch: '<S49>/Switch7' */

    /* Switch: '<S49>/Switch1' incorporates:
     *  Constant: '<S310>/Calib'
     */
    if (KeIMOR_b_InputSpeedFA_OVEn)
    {
        /* Switch: '<S49>/Switch1' incorporates:
         *  Constant: '<S309>/Calib'
         */
        IMOR_ac_B.Switch1_f = KeIMOR_b_InputSpeedFA_OV;
    }
    else
    {
        /* Switch: '<S49>/Switch1' */
        IMOR_ac_B.Switch1_f = tmpRead_7;
    }

    /* End of Switch: '<S49>/Switch1' */

    /* Switch: '<S49>/Switch2' incorporates:
     *  Constant: '<S308>/Calib'
     */
    if (KeIMOR_b_EngResetChk_OVEn)
    {
        /* Switch: '<S49>/Switch2' incorporates:
         *  Constant: '<S307>/Calib'
         */
        IMOR_ac_B.Switch2_l = KeIMOR_b_EngResetChk_OV;
    }
    else
    {
        /* Switch: '<S49>/Switch2' */
        IMOR_ac_B.Switch2_l = tmpRead_2;
    }

    /* End of Switch: '<S49>/Switch2' */

    /* Switch: '<S49>/Switch3' incorporates:
     *  Constant: '<S320>/Calib'
     */
    if (KeIMOR_b_RunCrankActive_SD)
    {
        /* Switch: '<S49>/Switch3' incorporates:
         *  Constant: '<S319>/Calib'
         */
        IMOR_ac_B.Switch3_b = KeIMOR_b_RunCrankActive_D;
    }
    else
    {
        /* Switch: '<S49>/Switch3' */
        IMOR_ac_B.Switch3_b = tmpRead;
    }

    /* End of Switch: '<S49>/Switch3' */

    /* Switch: '<S49>/Switch12' incorporates:
     *  Constant: '<S303>/Calib'
     */
    if (KeIMOR_b_ECMImmoStCANC_SD)
    {
        /* Switch: '<S49>/Switch12' incorporates:
         *  Constant: '<S321>/Calib'
         */
        IMOR_ac_B.Switch12 = KeIMOR_e_ECMImmoStCANC_D;
    }
    else
    {
        /* Switch: '<S49>/Switch12' incorporates:
         *  Inport: '<Root>/VePITR_e_ECMImmoStatCanC'
         */
        IMOR_ac_B.Switch12 = tmpRead_3;
    }

    /* End of Switch: '<S49>/Switch12' */

    /* Switch: '<S49>/Switch14' incorporates:
     *  Constant: '<S306>/Calib'
     */
    if (KeIMOR_b_ECMImmoStePT_SD)
    {
        /* Switch: '<S49>/Switch14' incorporates:
         *  Constant: '<S322>/Calib'
         */
        IMOR_ac_B.Switch14 = KeIMOR_e_ECMImmoStePT_D;
    }
    else
    {
        /* Switch: '<S49>/Switch14' incorporates:
         *  Inport: '<Root>/VePITR_e_ECMImmoStatePT'
         */
        IMOR_ac_B.Switch14 = tmpRead_5;
    }

    /* End of Switch: '<S49>/Switch14' */
    /* End of Outputs for SubSystem: '<S6>/InputOverrides' */

    /* Outputs for Function Call SubSystem: '<S6>/Immobilizer_AuthCmd' */
    /* SignalConversion generated from: '<S48>/VeIMOR_y_AuthCmd00' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd00 = 0U;

    /* SignalConversion generated from: '<S48>/VeIMOR_y_AuthCmd01' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd01 = 0U;

    /* SignalConversion generated from: '<S48>/VeIMOR_y_AuthCmd02' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd02 = 0U;

    /* SignalConversion generated from: '<S48>/VeIMOR_y_AuthCmd03' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd03 = 0U;

    /* SignalConversion generated from: '<S48>/VeIMOR_y_AuthCmd04' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd04 = 0U;

    /* SignalConversion generated from: '<S48>/VeIMOR_y_AuthCmd05' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd05 = 0U;

    /* SignalConversion generated from: '<S48>/VeIMOR_y_AuthCmd06' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd06 = 0U;

    /* SignalConversion generated from: '<S48>/VeIMOR_y_AuthCmd07' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd07 = 0U;

    /* SignalConversion generated from: '<S48>/VeIMOR_y_AuthCmd08' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd08 = 0U;

    /* SignalConversion generated from: '<S48>/VeIMOR_y_AuthCmd09' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd09 = 0U;

    /* SignalConversion generated from: '<S48>/VeIMOR_y_AuthCmd10' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd10 = 0U;

    /* SignalConversion generated from: '<S48>/VeIMOR_y_AuthCmd11' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd11 = 0U;

    /* SignalConversion generated from: '<S48>/VeIMOR_y_AuthCmd12' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd12 = 0U;

    /* SignalConversion generated from: '<S48>/VeIMOR_y_AuthCmd13' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd13 = 0U;

    /* SignalConversion generated from: '<S48>/VeIMOR_y_AuthCmd14' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd14 = 0U;

    /* SignalConversion generated from: '<S48>/VeIMOR_y_AuthCmd15' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd15 = 0U;

    /* SignalConversion generated from: '<S48>/VeIMOR_y_AuthCmdCntrlEncdReq' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmdCntrlE_p = 0U;

    /* End of Outputs for SubSystem: '<S6>/Immobilizer_AuthCmd' */

    /* Outport: '<Root>/VeIMOR_Cnt_SOPsentCnt' */
    Rte_Write_VeIMOR_Cnt_SOPsentCnt_Value(IMOR_ac_B.Gain);

    /* Outport: '<Root>/VeIMOR_b_AuthenticationValid' */
    Rte_Write_VeIMOR_b_AuthenticationValid_Value
        (IMOR_ac_B.VeIMOR_b_AuthenticationValid_FC);

    /* Outport: '<Root>/VeIMOR_b_BCMFailedG1G2' */
    Rte_Write_VeIMOR_b_BCMFailedG1G2_Value
        (IMOR_ac_B.VeIMOR_b_BCMFailedG1G2_Arb);

    /* Outport: '<Root>/VeIMOR_b_BCMFailedVerif' */
    Rte_Write_VeIMOR_b_BCMFailedVerif_Value
        (IMOR_ac_B.VeIMOR_b_BCMFailedVerif_Arb);

    /* Outport: '<Root>/VeIMOR_b_BCMMiniKeyNotStoredRec' */
    Rte_Write_VeIMOR_b_BCMMiniKeyNotStoredRec_Value
        (IMOR_ac_B.VeIMOR_b_BCMMiniKeyNotStoredRec_Arb);

    /* Outport: '<Root>/VeIMOR_b_BCMNoENQpResponse' */
    Rte_Write_VeIMOR_b_BCMNoENQpResponse_Value
        (IMOR_ac_B.VeIMOR_b_BCMNoENQpResponse_Arb);

    /* Outport: '<Root>/VeIMOR_b_BCMNoPRAorMiniKeyRec' */
    Rte_Write_VeIMOR_b_BCMNoPRAorMiniKeyRec_Value
        (IMOR_ac_B.VeIMOR_b_BCMNoPRAorMiniKeyRec_Arb);

    /* Outport: '<Root>/VeIMOR_b_BCMNoSecondRespRec' */
    Rte_Write_VeIMOR_b_BCMNoSecondRespRec_Value
        (IMOR_ac_B.VeIMOR_b_BCMNoSecondRespRec_Arb);

    /* Outport: '<Root>/VeIMOR_b_BCMNoVerifResp' */
    Rte_Write_VeIMOR_b_BCMNoVerifResp_Value
        (IMOR_ac_B.VeIMOR_b_BCMNoVerifResp_Arb);

    /* Outport: '<Root>/VeIMOR_b_BCMRespBadG2Verify' */
    Rte_Write_VeIMOR_b_BCMRespBadG2Verify_Value
        (IMOR_ac_B.VeIMOR_b_BCMRespBadG2Verify_Arb);

    /* Outport: '<Root>/VeIMOR_b_BCMRespTENRec' */
    Rte_Write_VeIMOR_b_BCMRespTENRec_Value
        (IMOR_ac_B.VeIMOR_b_BCMRespTENRec_Arb);

    /* Outport: '<Root>/VeIMOR_b_BCMRespTENVerify' */
    Rte_Write_VeIMOR_b_BCMRespTENVerify_Value
        (IMOR_ac_B.VeIMOR_b_BCMRespTENVerify_Arb);

    /* Outport: '<Root>/VeIMOR_b_BCMRespUCVerify' */
    Rte_Write_VeIMOR_b_BCMRespUCVerify_Value
        (IMOR_ac_B.VeIMOR_b_BCMRespUCVerify_Arb);

    /* Outport: '<Root>/VeIMOR_b_CANMsgSndReq' */
    Rte_Write_VeIMOR_b_CANMsgSndReq_Value
        (IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb);

    /* Outport: '<Root>/VeIMOR_b_CANepTMsgSndReq' */
    Rte_Write_VeIMOR_b_CANepTMsgSndReq_Value(IMOR_ac_B.Gain_m);

    /* Outport: '<Root>/VeIMOR_b_ECMFailedRationality' */
    Rte_Write_VeIMOR_b_ECMFailedRationality_Value(IMOR_ac_B.Gain_lh);

    /* Outport: '<Root>/VeIMOR_b_ECMNoSOPResp' */
    Rte_Write_VeIMOR_b_ECMNoSOPResp_Value(IMOR_ac_B.Gain_fj);

    /* Outport: '<Root>/VeIMOR_b_ECMPassed' */
    Rte_Write_VeIMOR_b_ECMPassed_Value(IMOR_ac_B.VeIMOR_b_ECMPassed_FC);

    /* Outport: '<Root>/VeIMOR_b_ECMWUnoHandshake' */
    Rte_Write_VeIMOR_b_ECMWUnoHandshake_Value(IMOR_ac_B.Gain_b);

    /* Outport: '<Root>/VeIMOR_b_ECMnoWU' */
    Rte_Write_VeIMOR_b_ECMnoWU_Value(IMOR_ac_B.Gain_f);

    /* Outport: '<Root>/VeIMOR_b_EngDsbldToIC' */
    Rte_Write_VeIMOR_b_EngDsbldToIC_Value(IMOR_ac_B.Gain_l);

    /* Outport: '<Root>/VeIMOR_b_FstRstFn' */
    Rte_Write_VeIMOR_b_FstRstFn_Value(IMOR_ac_B.AND_b);

    /* Outport: '<Root>/VeIMOR_b_HCPNotProg' */
    Rte_Write_VeIMOR_b_HCPNotProg_Value(IMOR_ac_B.VeIMOR_b_HCPNotProg_Arb);

    /* Outport: '<Root>/VeIMOR_b_ImmoSOPRequest' */
    Rte_Write_VeIMOR_b_ImmoSOPRequest_Value(IMOR_ac_B.Gain_n);

    /* Outport: '<Root>/VeIMOR_b_WrtCRCmpltToE2' */
    Rte_Write_VeIMOR_b_WrtCRCmpltToE2_Value
        (IMOR_ac_B.VeIMOR_b_WrtCRCmpltToE2_Arb);

    /* Outport: '<Root>/VeIMOR_b_WrtMKeyToE2' */
    Rte_Write_VeIMOR_b_WrtMKeyToE2_Value
        (IMOR_ac_B.VeIMOR_b_WrtMKeyToE2_Arb);

    /* Outport: '<Root>/VeIMOR_Cnt_CodeVrfyCnt' */
    Rte_Write_VeIMOR_Cnt_CodeVrfyCnt_Value
        (IMOR_ac_B.VeIMOR_cnt_CodeVrfyCnt_Arb);

    /* Outport: '<Root>/VeIMOR_Cnt_IMORRecCnt' */
    Rte_Write_VeIMOR_Cnt_IMORRecCnt_Value
        (IMOR_ac_B.VeIMOR_cnt_IMORRecCnt_Arb);

    /* Outport: '<Root>/VeIMOR_d_G1' */
    Rte_Write_VeIMOR_d_G1_Value(IMOR_ac_B.VeIMOR_d_G1_Arb);

    /* Outport: '<Root>/VeIMOR_d_RandonNumber' */
    Rte_Write_VeIMOR_d_RandonNumber_Value
        (IMOR_ac_B.VeIMOR_d_RandonNumber_Arb);

    /* Outport: '<Root>/VeIMOR_d_SecKey_h' */
    Rte_Write_VeIMOR_d_SecKey_h_Value(IMOR_ac_B.VeIMOR_d_SecKey_h_Arb);

    /* Outport: '<Root>/VeIMOR_d_SecKey_l' */
    Rte_Write_VeIMOR_d_SecKey_l_Value(IMOR_ac_B.VeIMOR_d_SecKey_l_Arb);

    /* Outport: '<Root>/VeIMOR_e_ECMStat' incorporates:
     *  DataTypeConversion: '<S67>/DataTypeConversion'
     */
    Rte_Write_VeIMOR_e_ECMStat_Value(IMOR_ac_B.DataTypeConversion_f);

    /* Outport: '<Root>/VeIMOR_e_HCPImmoStatCanC' incorporates:
     *  DataTypeConversion: '<S65>/DataTypeConversion'
     */
    Rte_Write_VeIMOR_e_HCPImmoStatCanC_Value
        (IMOR_ac_B.DataTypeConversion_c);

    /* Outport: '<Root>/VeIMOR_e_IMORStat' incorporates:
     *  DataTypeConversion: '<S202>/DataTypeConversion'
     */
    Rte_Write_VeIMOR_e_IMORStat_Value(IMOR_ac_B.DataTypeConversion);

    /* Outport: '<Root>/VeIMOR_t_ECMStateTimer' */
    Rte_Write_VeIMOR_t_ECMStateTimer_Value(IMOR_ac_B.Gain_h);

    /* Outport: '<Root>/VeIMOR_t_StateTimer' */
    Rte_Write_VeIMOR_t_StateTimer_Value(IMOR_ac_B.VeIMOR_t_StateTimer_Arb);

    /* Outport: '<Root>/VeIMOR_y_AuthCmd00' */
    Rte_Write_VeIMOR_y_AuthCmd00_Value
        (IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd00);

    /* Outport: '<Root>/VeIMOR_y_AuthCmd01' */
    Rte_Write_VeIMOR_y_AuthCmd01_Value
        (IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd01);

    /* Outport: '<Root>/VeIMOR_y_AuthCmd02' */
    Rte_Write_VeIMOR_y_AuthCmd02_Value
        (IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd02);

    /* Outport: '<Root>/VeIMOR_y_AuthCmd03' */
    Rte_Write_VeIMOR_y_AuthCmd03_Value
        (IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd03);

    /* Outport: '<Root>/VeIMOR_y_AuthCmd04' */
    Rte_Write_VeIMOR_y_AuthCmd04_Value
        (IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd04);

    /* Outport: '<Root>/VeIMOR_y_AuthCmd05' */
    Rte_Write_VeIMOR_y_AuthCmd05_Value
        (IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd05);

    /* Outport: '<Root>/VeIMOR_y_AuthCmd06' */
    Rte_Write_VeIMOR_y_AuthCmd06_Value
        (IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd06);

    /* Outport: '<Root>/VeIMOR_y_AuthCmd07' */
    Rte_Write_VeIMOR_y_AuthCmd07_Value
        (IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd07);

    /* Outport: '<Root>/VeIMOR_y_AuthCmd08' */
    Rte_Write_VeIMOR_y_AuthCmd08_Value
        (IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd08);

    /* Outport: '<Root>/VeIMOR_y_AuthCmd09' */
    Rte_Write_VeIMOR_y_AuthCmd09_Value
        (IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd09);

    /* Outport: '<Root>/VeIMOR_y_AuthCmd10' */
    Rte_Write_VeIMOR_y_AuthCmd10_Value
        (IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd10);

    /* Outport: '<Root>/VeIMOR_y_AuthCmd11' */
    Rte_Write_VeIMOR_y_AuthCmd11_Value
        (IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd11);

    /* Outport: '<Root>/VeIMOR_y_AuthCmd12' */
    Rte_Write_VeIMOR_y_AuthCmd12_Value
        (IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd12);

    /* Outport: '<Root>/VeIMOR_y_AuthCmd13' */
    Rte_Write_VeIMOR_y_AuthCmd13_Value
        (IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd13);

    /* Outport: '<Root>/VeIMOR_y_AuthCmd14' */
    Rte_Write_VeIMOR_y_AuthCmd14_Value
        (IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd14);

    /* Outport: '<Root>/VeIMOR_y_AuthCmd15' */
    Rte_Write_VeIMOR_y_AuthCmd15_Value
        (IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd15);

    /* Outport: '<Root>/VeIMOR_y_AuthCmdCntrlEncdReq' */
    Rte_Write_VeIMOR_y_AuthCmdCntrlEncdReq_Value
        (IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmdCntrlE_p);

    /* Outport: '<Root>/VeIMOR_y_CntrlEncdReq' */
    Rte_Write_VeIMOR_y_CntrlEncdReq_Value
        (IMOR_ac_B.VeIMOR_y_CntrlEncdReq_Arb);

    /* Outport: '<Root>/VeIMOR_y_MiniKryptF1_1' */
    Rte_Write_VeIMOR_y_MiniKryptF1_1_Value
        (IMOR_ac_B.VeIMOR_y_MiniKryptF1_1_Arb);

    /* Outport: '<Root>/VeIMOR_y_MiniKryptF1_2' */
    Rte_Write_VeIMOR_y_MiniKryptF1_2_Value
        (IMOR_ac_B.VeIMOR_y_MiniKryptF1_2_Arb);

    /* Outport: '<Root>/VeIMOR_y_MiniKryptG1_1' */
    Rte_Write_VeIMOR_y_MiniKryptG1_1_Value
        (IMOR_ac_B.VeIMOR_y_MiniKryptG1_1_Arb);

    /* Outport: '<Root>/VeIMOR_y_MiniKryptG1_2' */
    Rte_Write_VeIMOR_y_MiniKryptG1_2_Value
        (IMOR_ac_B.VeIMOR_y_MiniKryptG1_2_Arb);

    /* Outport: '<Root>/VeIMOR_y_rnd_1' */
    Rte_Write_VeIMOR_y_rnd_1_Value(IMOR_ac_B.VeIMOR_y_rnd_1_FC);

    /* Outport: '<Root>/VeIMOR_y_rnd_2' */
    Rte_Write_VeIMOR_y_rnd_2_Value(IMOR_ac_B.VeIMOR_y_rnd_2_FC);

    /* Outport: '<Root>/VeIMOR_y_rnd_3' */
    Rte_Write_VeIMOR_y_rnd_3_Value(IMOR_ac_B.VeIMOR_y_rnd_3_FC);

    /* Outport: '<Root>/VeIMOR_y_rnd_4' */
    Rte_Write_VeIMOR_y_rnd_4_Value(IMOR_ac_B.VeIMOR_y_rnd_4_FC);

    /* Outputs for Enabled SubSystem: '<S6>/Subsystem' incorporates:
     *  EnablePort: '<S51>/Enable'
     */
    if (IMOR_ac_B.VeIMOR_b_CANMsgSndReq_Arb)
    {
        /* Outport: '<Root>/SendCANR_IMMO_CODE_REQUEST' incorporates:
         *  Inport: '<S51>/In1'
         */

&BusIMMO_CODE_REQUEST_FD3 = SendCANR_IMMO_CODE_REQUEST_IMOR_ac_Test_1;
        Rte_Write_SendCANR_IMMO_CODE_REQUEST_SendCANR_IMMO_CODE_REQUEST            (&BusIMMO_CODE_REQUEST_FD3);

        /* Outport: '<Root>/SendCANR_IMMO_CODE_REQUEST_Vld' incorporates:
         *  Inport: '<S51>/SendCANR_IMMO_CODE_REQUEST_Vld_read'
         */
        
            Rte_Write_SendCANR_IMMO_CODE_REQUEST_Vld_SendCANR_IMMO_CODE_REQUEST_Vld
            (IMOR_ac_B.OutportBufferForSendCANR_IMMO_CODE_REQUE);
    }

    /* Outputs for Function Call SubSystem: '<S6>/KeyCycleMgmtSubsys' */
    /* Switch: '<S331>/Switch4' incorporates:
     *  Constant: '<S340>/Calib'
     */
    if (KeIMOR_b_ThreeSecAftKeyOff_SD)
    {
        /* Merge: '<Root>/Merge_2' incorporates:
         *  Constant: '<S339>/Calib'
         */
        Rte_IrvWrite_IMOR_FastTEF_KeyOff3secArb_write_IRV
            (KeIMOR_b_ThreeSecAftKeyOff_D);
    }
    else
    {
        /* Merge: '<Root>/Merge_2' */
        Rte_IrvWrite_IMOR_FastTEF_KeyOff3secArb_write_IRV
            (VeIMOR_b_ComfortStrategy_BD);
    }

    /* End of Switch: '<S331>/Switch4' */
    /* End of Outputs for SubSystem: '<S6>/KeyCycleMgmtSubsys' */

    /* Merge: '<Root>/Merge_1' */
    Rte_IrvWrite_IMOR_FastTEF_VeIMOR_b_AuthValidVal_write_IRV
        (IMOR_ac_B.VeIMOR_b_AuthValidVal);

    /* Merge: '<Root>/Merge_3' */
    Rte_IrvWrite_IMOR_FastTEF_VeIMOR_b_InvokeMKA_Arb_write_IRV(IMOR_ac_B.Gain_d);

    /* End of Outputs for S-Function (fcgen): '<S6>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<S6>/Subsystem' */
#endif

    /* End of SignalConversion generated from: '<S6>/VeIMOR_b_AuthValidVal_read' */

    /* Outport: '<Root>/VeIMOR_e_FaultSts_ImmobKeyIncrt' incorporates:
     *  DataStoreRead: '<S6>/DSR_VeIMOR_e_FaultSts_ImmobKeyIncrt'
     */
    Rte_Write_VeIMOR_e_FaultSts_ImmobKeyIncrt_Value
        (IMOR_ac_DW.FaultSts_ImmobKeyIncrt);

    /* Outport: '<Root>/VeIMOR_e_FaultSts_SKIMNotStored' incorporates:
     *  DataStoreRead: '<S6>/DSR_VeIMOR_e_FaultSts_SKIMNotStored'
     */
    Rte_Write_VeIMOR_e_FaultSts_SKIMNotStored_Value
        (IMOR_ac_DW.FaultSts_SKIMNotStored);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Output function */
FUNC(void, IMOR_CODE) FsftIMOR_b_ORC_Health
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIMOR_b_ORC_Health' */
    /* SignalConversion generated from: '<S1>/FsftIMOR_b_ORC_HealthChrt' incorporates:
     *  SignalConversion generated from: '<S1>/VeIMOR_b_ORC_HealthFA_write'
     */
    /* Gateway: FsftIMOR_b_ORC_Health/FsftIMOR_b_ORC_HealthChrt */
    /* During: FsftIMOR_b_ORC_Health/FsftIMOR_b_ORC_HealthChrt */
    /* Entry Internal: FsftIMOR_b_ORC_Health/FsftIMOR_b_ORC_HealthChrt */
    /* Transition: '<S38>:2' */
#if Rte_SysCon_Variant_IMOR_1

    /* Merge: '<Root>/VeIMOR_b_ORC_HealthFA_IRV_Merge' incorporates:
     *  Chart: '<S1>/FsftIMOR_b_ORC_HealthChrt'
     */
    Rte_IrvWrite_FsftIMOR_b_ORC_Health_VeIMOR_b_ORC_HealthFA_write_IRV(true);

#endif

    /* End of SignalConversion generated from: '<S1>/FsftIMOR_b_ORC_HealthChrt' */
    /* End of Outputs for SubSystem: '<Root>/FsftIMOR_b_ORC_Health' */
}

/* Output function */
FUNC(void, IMOR_CODE) FsftIMOR_b_VC_VehCfg2_Stat
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIMOR_b_VC_VehCfg2_Stat' */
    /* SignalConversion generated from: '<S2>/FsftIMOR_b_VC_VehCfg2_StatChrt' incorporates:
     *  SignalConversion generated from: '<S2>/VeIMOR_b_VC_VehCfg2_StatFA_write'
     */
    /* Gateway: FsftIMOR_b_VC_VehCfg2_Stat/FsftIMOR_b_VC_VehCfg2_StatChrt */
    /* During: FsftIMOR_b_VC_VehCfg2_Stat/FsftIMOR_b_VC_VehCfg2_StatChrt */
    /* Entry Internal: FsftIMOR_b_VC_VehCfg2_Stat/FsftIMOR_b_VC_VehCfg2_StatChrt */
    /* Transition: '<S39>:2' */
#if Rte_SysCon_Variant_IMOR_1

    /* Merge: '<Root>/VeIMOR_b_VC_VehCfg2_StatFA_IRV_Merge' incorporates:
     *  Chart: '<S2>/FsftIMOR_b_VC_VehCfg2_StatChrt'
     */
    Rte_IrvWrite_FsftIMOR_b_VC_VehCfg2_Stat_VeIMOR_b_VC_VehCfg2_StatFA_write_IRV
        (true);

#endif

    /* End of SignalConversion generated from: '<S2>/FsftIMOR_b_VC_VehCfg2_StatChrt' */
    /* End of Outputs for SubSystem: '<Root>/FsftIMOR_b_VC_VehCfg2_Stat' */
}

/* Output function */
FUNC(void, IMOR_CODE) FsftIMOR_b_VC_VehCfg3_Stat
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIMOR_b_VC_VehCfg3_Stat' */
    /* SignalConversion generated from: '<S3>/FsftIMOR_b_VC_VehCfg3_StatChrt' incorporates:
     *  SignalConversion generated from: '<S3>/VeIMOR_b_VC_VehCfg3_StatFA_write'
     */
    /* Gateway: FsftIMOR_b_VC_VehCfg3_Stat/FsftIMOR_b_VC_VehCfg3_StatChrt */
    /* During: FsftIMOR_b_VC_VehCfg3_Stat/FsftIMOR_b_VC_VehCfg3_StatChrt */
    /* Entry Internal: FsftIMOR_b_VC_VehCfg3_Stat/FsftIMOR_b_VC_VehCfg3_StatChrt */
    /* Transition: '<S40>:2' */
#if Rte_SysCon_Variant_IMOR_1

    /* Merge: '<Root>/VeIMOR_b_VC_VehCfg3_StatFA_IRV_Merge' incorporates:
     *  Chart: '<S3>/FsftIMOR_b_VC_VehCfg3_StatChrt'
     */
    Rte_IrvWrite_FsftIMOR_b_VC_VehCfg3_Stat_VeIMOR_b_VC_VehCfg3_StatFA_write_IRV
        (true);

#endif

    /* End of SignalConversion generated from: '<S3>/FsftIMOR_b_VC_VehCfg3_StatChrt' */
    /* End of Outputs for SubSystem: '<Root>/FsftIMOR_b_VC_VehCfg3_Stat' */
}

/* Output function */
FUNC(void, IMOR_CODE) FsftIMOR_b_VC_VehCfg4_Stat
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIMOR_b_VC_VehCfg4_Stat' */
    /* SignalConversion generated from: '<S4>/FsftIMOR_b_VC_VehCfg4_StatChrt' incorporates:
     *  SignalConversion generated from: '<S4>/VeIMOR_b_VC_VehCfg4_StatFA_write'
     */
    /* Gateway: FsftIMOR_b_VC_VehCfg4_Stat/FsftIMOR_b_VC_VehCfg4_StatChrt */
    /* During: FsftIMOR_b_VC_VehCfg4_Stat/FsftIMOR_b_VC_VehCfg4_StatChrt */
    /* Entry Internal: FsftIMOR_b_VC_VehCfg4_Stat/FsftIMOR_b_VC_VehCfg4_StatChrt */
    /* Transition: '<S41>:2' */
#if Rte_SysCon_Variant_IMOR_1

    /* Merge: '<Root>/VeIMOR_b_VC_VehCfg4_StatFA_IRV_Merge' incorporates:
     *  Chart: '<S4>/FsftIMOR_b_VC_VehCfg4_StatChrt'
     */
    Rte_IrvWrite_FsftIMOR_b_VC_VehCfg4_Stat_VeIMOR_b_VC_VehCfg4_StatFA_write_IRV
        (true);

#endif

    /* End of SignalConversion generated from: '<S4>/FsftIMOR_b_VC_VehCfg4_StatChrt' */
    /* End of Outputs for SubSystem: '<Root>/FsftIMOR_b_VC_VehCfg4_Stat' */
}

/* Output function */
FUNC(void, IMOR_CODE) FsftIMOR_b_VC_VehCfg6_Stat
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftIMOR_b_VC_VehCfg6_Stat' */
    /* SignalConversion generated from: '<S5>/FsftIMOR_b_VC_VehCfg6_StatChrt' incorporates:
     *  SignalConversion generated from: '<S5>/VeIMOR_b_VC_VehCfg6_StatFA_write'
     */
    /* Gateway: FsftIMOR_b_VC_VehCfg6_Stat/FsftIMOR_b_VC_VehCfg6_StatChrt */
    /* During: FsftIMOR_b_VC_VehCfg6_Stat/FsftIMOR_b_VC_VehCfg6_StatChrt */
    /* Entry Internal: FsftIMOR_b_VC_VehCfg6_Stat/FsftIMOR_b_VC_VehCfg6_StatChrt */
    /* Transition: '<S42>:2' */
#if Rte_SysCon_Variant_IMOR_1

    /* Merge: '<Root>/VeIMOR_b_VC_VehCfg6_StatFA_IRV_Merge' incorporates:
     *  Chart: '<S5>/FsftIMOR_b_VC_VehCfg6_StatChrt'
     */
    Rte_IrvWrite_FsftIMOR_b_VC_VehCfg6_Stat_VeIMOR_b_VC_VehCfg6_StatFA_write_IRV
        (true);

#endif

    /* End of SignalConversion generated from: '<S5>/FsftIMOR_b_VC_VehCfg6_StatChrt' */
    /* End of Outputs for SubSystem: '<Root>/FsftIMOR_b_VC_VehCfg6_Stat' */
}

/* Output function */
FUNC(void, IMOR_CODE) PokeIMOR_b_ORC_Health(VAR(boolean, AUTOMATIC)
    LeIMOR_b_ORC_Health)
{

#if !Rte_SysCon_Variant_IMOR_1

    UNUSED_PARAMETER(LeIMOR_b_ORC_Health);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeIMOR_b_ORC_Health' */
    /* Chart: '<S9>/PokeIMOR_b_ORC_HealthChrt' */
    /* Gateway: PokeIMOR_b_ORC_Health/PokeIMOR_b_ORC_HealthChrt */
    /* During: PokeIMOR_b_ORC_Health/PokeIMOR_b_ORC_HealthChrt */
    /* Entry Internal: PokeIMOR_b_ORC_Health/PokeIMOR_b_ORC_HealthChrt */
    /* Transition: '<S417>:2' */
    EeIMOR_b_ORC_Health_rec = true;

    /* SignalConversion generated from: '<S9>/PokeIMOR_b_ORC_HealthChrt' incorporates:
     *  SignalConversion generated from: '<S9>/VeIMOR_b_ORC_Health_write'
     */
#if Rte_SysCon_Variant_IMOR_1

    /* Merge: '<Root>/VeIMOR_b_ORC_Health_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S9>/LeIMOR_b_ORC_Health'
     */
    Rte_IrvWrite_PokeIMOR_b_ORC_Health_VeIMOR_b_ORC_Health_write_IRV
        (LeIMOR_b_ORC_Health);

#endif

    /* End of SignalConversion generated from: '<S9>/PokeIMOR_b_ORC_HealthChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeIMOR_b_ORC_Health' */
}

/* Output function */
FUNC(void, IMOR_CODE) PokeIMOR_e_VC_VehCfg2_Stat(VAR(sint16, AUTOMATIC)
    LeIMOR_e_VC_VehCfg2_Stat)
{

#if !Rte_SysCon_Variant_IMOR_1

    UNUSED_PARAMETER(LeIMOR_e_VC_VehCfg2_Stat);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeIMOR_e_VC_VehCfg2_Stat' */
    /* Chart: '<S10>/PokeIMOR_e_VC_VehCfg2_StatChrt' */
    /* Gateway: PokeIMOR_e_VC_VehCfg2_Stat/PokeIMOR_e_VC_VehCfg2_StatChrt */
    /* During: PokeIMOR_e_VC_VehCfg2_Stat/PokeIMOR_e_VC_VehCfg2_StatChrt */
    /* Entry Internal: PokeIMOR_e_VC_VehCfg2_Stat/PokeIMOR_e_VC_VehCfg2_StatChrt */
    /* Transition: '<S418>:2' */
    EeIMOR_b_VC_VehCfg2_Stat_rec = true;

    /* SignalConversion generated from: '<S10>/PokeIMOR_e_VC_VehCfg2_StatChrt' incorporates:
     *  SignalConversion generated from: '<S10>/VeIMOR_e_VC_VehCfg2_Stat_write'
     */
#if Rte_SysCon_Variant_IMOR_1

    /* Merge: '<Root>/VeIMOR_e_VC_VehCfg2_Stat_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S10>/LeIMOR_e_VC_VehCfg2_Stat'
     */
    Rte_IrvWrite_PokeIMOR_e_VC_VehCfg2_Stat_VeIMOR_e_VC_VehCfg2_Stat_write_IRV
        (LeIMOR_e_VC_VehCfg2_Stat);

#endif

    /* End of SignalConversion generated from: '<S10>/PokeIMOR_e_VC_VehCfg2_StatChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeIMOR_e_VC_VehCfg2_Stat' */
}

/* Output function */
FUNC(void, IMOR_CODE) PokeIMOR_e_VC_VehCfg3_Stat(VAR(sint16, AUTOMATIC)
    LeIMOR_e_VC_VehCfg3_Stat)
{

#if !Rte_SysCon_Variant_IMOR_1

    UNUSED_PARAMETER(LeIMOR_e_VC_VehCfg3_Stat);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeIMOR_e_VC_VehCfg3_Stat' */
    /* Chart: '<S11>/PokeIMOR_e_VC_VehCfg3_StatChrt' */
    /* Gateway: PokeIMOR_e_VC_VehCfg3_Stat/PokeIMOR_e_VC_VehCfg3_StatChrt */
    /* During: PokeIMOR_e_VC_VehCfg3_Stat/PokeIMOR_e_VC_VehCfg3_StatChrt */
    /* Entry Internal: PokeIMOR_e_VC_VehCfg3_Stat/PokeIMOR_e_VC_VehCfg3_StatChrt */
    /* Transition: '<S419>:2' */
    EeIMOR_b_VC_VehCfg3_Stat_rec = true;

    /* SignalConversion generated from: '<S11>/PokeIMOR_e_VC_VehCfg3_StatChrt' incorporates:
     *  SignalConversion generated from: '<S11>/VeIMOR_e_VC_VehCfg3_Stat_write'
     */
#if Rte_SysCon_Variant_IMOR_1

    /* Merge: '<Root>/VeIMOR_e_VC_VehCfg3_Stat_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S11>/LeIMOR_e_VC_VehCfg3_Stat'
     */
    Rte_IrvWrite_PokeIMOR_e_VC_VehCfg3_Stat_VeIMOR_e_VC_VehCfg3_Stat_write_IRV
        (LeIMOR_e_VC_VehCfg3_Stat);

#endif

    /* End of SignalConversion generated from: '<S11>/PokeIMOR_e_VC_VehCfg3_StatChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeIMOR_e_VC_VehCfg3_Stat' */
}

/* Output function */
FUNC(void, IMOR_CODE) PokeIMOR_e_VC_VehCfg4_Stat(VAR(sint16, AUTOMATIC)
    LeIMOR_e_VC_VehCfg4_Stat)
{

#if !Rte_SysCon_Variant_IMOR_1

    UNUSED_PARAMETER(LeIMOR_e_VC_VehCfg4_Stat);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeIMOR_e_VC_VehCfg4_Stat' */
    /* Chart: '<S12>/PokeIMOR_e_VC_VehCfg4_StatChrt' */
    /* Gateway: PokeIMOR_e_VC_VehCfg4_Stat/PokeIMOR_e_VC_VehCfg4_StatChrt */
    /* During: PokeIMOR_e_VC_VehCfg4_Stat/PokeIMOR_e_VC_VehCfg4_StatChrt */
    /* Entry Internal: PokeIMOR_e_VC_VehCfg4_Stat/PokeIMOR_e_VC_VehCfg4_StatChrt */
    /* Transition: '<S420>:2' */
    EeIMOR_b_VC_VehCfg4_Stat_rec = true;

    /* SignalConversion generated from: '<S12>/PokeIMOR_e_VC_VehCfg4_StatChrt' incorporates:
     *  SignalConversion generated from: '<S12>/VeIMOR_e_VC_VehCfg4_Stat_write'
     */
#if Rte_SysCon_Variant_IMOR_1

    /* Merge: '<Root>/VeIMOR_e_VC_VehCfg4_Stat_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S12>/LeIMOR_e_VC_VehCfg4_Stat'
     */
    Rte_IrvWrite_PokeIMOR_e_VC_VehCfg4_Stat_VeIMOR_e_VC_VehCfg4_Stat_write_IRV
        (LeIMOR_e_VC_VehCfg4_Stat);

#endif

    /* End of SignalConversion generated from: '<S12>/PokeIMOR_e_VC_VehCfg4_StatChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeIMOR_e_VC_VehCfg4_Stat' */
}

/* Output function */
FUNC(void, IMOR_CODE) PokeIMOR_e_VC_VehCfg6_Stat(VAR(sint16, AUTOMATIC)
    LeIMOR_e_VC_VehCfg6_Stat)
{

#if !Rte_SysCon_Variant_IMOR_1

    UNUSED_PARAMETER(LeIMOR_e_VC_VehCfg6_Stat);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeIMOR_e_VC_VehCfg6_Stat' */
    /* Chart: '<S13>/PokeIMOR_e_VC_VehCfg6_StatChrt' */
    /* Gateway: PokeIMOR_e_VC_VehCfg6_Stat/PokeIMOR_e_VC_VehCfg6_StatChrt */
    /* During: PokeIMOR_e_VC_VehCfg6_Stat/PokeIMOR_e_VC_VehCfg6_StatChrt */
    /* Entry Internal: PokeIMOR_e_VC_VehCfg6_Stat/PokeIMOR_e_VC_VehCfg6_StatChrt */
    /* Transition: '<S421>:2' */
    EeIMOR_b_VC_VehCfg6_Stat_rec = true;

    /* SignalConversion generated from: '<S13>/PokeIMOR_e_VC_VehCfg6_StatChrt' incorporates:
     *  SignalConversion generated from: '<S13>/VeIMOR_e_VC_VehCfg6_Stat_write'
     */
#if Rte_SysCon_Variant_IMOR_1

    /* Merge: '<Root>/VeIMOR_e_VC_VehCfg6_Stat_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S13>/LeIMOR_e_VC_VehCfg6_Stat'
     */
    Rte_IrvWrite_PokeIMOR_e_VC_VehCfg6_Stat_VeIMOR_e_VC_VehCfg6_Stat_write_IRV
        (LeIMOR_e_VC_VehCfg6_Stat);

#endif

    /* End of SignalConversion generated from: '<S13>/PokeIMOR_e_VC_VehCfg6_StatChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeIMOR_e_VC_VehCfg6_Stat' */
}

/* Output function */
FUNC(void, IMOR_CODE) PokeIMOR_y_AuthCmd00_In(VAR(uint8, AUTOMATIC)
    LeIMOR_y_AuthCmd00)
{

#if !Rte_SysCon_Variant_IMOR_1

    UNUSED_PARAMETER(LeIMOR_y_AuthCmd00);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeIMOR_y_AuthCmd00_In' */
    /* Chart: '<S14>/PokeIMOR_y_AuthCmd00_Chrt' */
    /* Gateway: PokeIMOR_y_AuthCmd00_In/PokeIMOR_y_AuthCmd00_Chrt */
    /* During: PokeIMOR_y_AuthCmd00_In/PokeIMOR_y_AuthCmd00_Chrt */
    /* Entry Internal: PokeIMOR_y_AuthCmd00_In/PokeIMOR_y_AuthCmd00_Chrt */
    /* Transition: '<S422>:2' */
    EeIMOR_b_AuthCmd00_InFlag = true;

    /* SignalConversion generated from: '<S14>/PokeIMOR_y_AuthCmd00_Chrt' incorporates:
     *  SignalConversion generated from: '<S14>/VeIMOR_y_AuthCmd00_In_write'
     */
#if Rte_SysCon_Variant_IMOR_1

    /* Merge: '<Root>/VeIMOR_y_AuthCmd00_In_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S14>/LeIMOR_y_AuthCmd00_In'
     */
    Rte_IrvWrite_PokeIMOR_y_AuthCmd00_In_VeIMOR_y_AuthCmd00_In_write_IRV
        (LeIMOR_y_AuthCmd00);

#endif

    /* End of SignalConversion generated from: '<S14>/PokeIMOR_y_AuthCmd00_Chrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeIMOR_y_AuthCmd00_In' */
}

/* Output function */
FUNC(void, IMOR_CODE) PokeIMOR_y_AuthCmd01_In(VAR(uint8, AUTOMATIC)
    LeIMOR_y_AuthCmd01)
{

#if !Rte_SysCon_Variant_IMOR_1

    UNUSED_PARAMETER(LeIMOR_y_AuthCmd01);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeIMOR_y_AuthCmd01_In' */
    /* Chart: '<S15>/PokeIMOR_y_AuthCmd01_Chrt' */
    /* Gateway: PokeIMOR_y_AuthCmd01_In/PokeIMOR_y_AuthCmd01_Chrt */
    /* During: PokeIMOR_y_AuthCmd01_In/PokeIMOR_y_AuthCmd01_Chrt */
    /* Entry Internal: PokeIMOR_y_AuthCmd01_In/PokeIMOR_y_AuthCmd01_Chrt */
    /* Transition: '<S423>:2' */
    EeIMOR_b_AuthCmd01_InFlag = true;

    /* SignalConversion generated from: '<S15>/PokeIMOR_y_AuthCmd01_Chrt' incorporates:
     *  SignalConversion generated from: '<S15>/VeIMOR_y_AuthCmd01_In_write'
     */
#if Rte_SysCon_Variant_IMOR_1

    /* Merge: '<Root>/VeIMOR_y_AuthCmd01_In_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S15>/LeIMOR_y_AuthCmd01_In'
     */
    Rte_IrvWrite_PokeIMOR_y_AuthCmd01_In_VeIMOR_y_AuthCmd01_In_write_IRV
        (LeIMOR_y_AuthCmd01);

#endif

    /* End of SignalConversion generated from: '<S15>/PokeIMOR_y_AuthCmd01_Chrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeIMOR_y_AuthCmd01_In' */
}

/* Output function */
FUNC(void, IMOR_CODE) PokeIMOR_y_AuthCmd02_In(VAR(uint8, AUTOMATIC)
    LeIMOR_y_AuthCmd02)
{

#if !Rte_SysCon_Variant_IMOR_1

    UNUSED_PARAMETER(LeIMOR_y_AuthCmd02);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeIMOR_y_AuthCmd02_In' */
    /* Chart: '<S16>/PokeIMOR_y_AuthCmd02_Chrt' */
    /* Gateway: PokeIMOR_y_AuthCmd02_In/PokeIMOR_y_AuthCmd02_Chrt */
    /* During: PokeIMOR_y_AuthCmd02_In/PokeIMOR_y_AuthCmd02_Chrt */
    /* Entry Internal: PokeIMOR_y_AuthCmd02_In/PokeIMOR_y_AuthCmd02_Chrt */
    /* Transition: '<S424>:2' */
    EeIMOR_b_AuthCmd02_InFlag = true;

    /* SignalConversion generated from: '<S16>/PokeIMOR_y_AuthCmd02_Chrt' incorporates:
     *  SignalConversion generated from: '<S16>/VeIMOR_y_AuthCmd02_In_write'
     */
#if Rte_SysCon_Variant_IMOR_1

    /* Merge: '<Root>/VeIMOR_y_AuthCmd02_In_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S16>/LeIMOR_y_AuthCmd02_In'
     */
    Rte_IrvWrite_PokeIMOR_y_AuthCmd02_In_VeIMOR_y_AuthCmd02_In_write_IRV
        (LeIMOR_y_AuthCmd02);

#endif

    /* End of SignalConversion generated from: '<S16>/PokeIMOR_y_AuthCmd02_Chrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeIMOR_y_AuthCmd02_In' */
}

/* Output function */
FUNC(void, IMOR_CODE) PokeIMOR_y_AuthCmd03_In(VAR(uint8, AUTOMATIC)
    LeIMOR_y_AuthCmd03)
{

#if !Rte_SysCon_Variant_IMOR_1

    UNUSED_PARAMETER(LeIMOR_y_AuthCmd03);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeIMOR_y_AuthCmd03_In' */
    /* Chart: '<S17>/PokeIMOR_y_AuthCmd03_Chrt' */
    /* Gateway: PokeIMOR_y_AuthCmd03_In/PokeIMOR_y_AuthCmd03_Chrt */
    /* During: PokeIMOR_y_AuthCmd03_In/PokeIMOR_y_AuthCmd03_Chrt */
    /* Entry Internal: PokeIMOR_y_AuthCmd03_In/PokeIMOR_y_AuthCmd03_Chrt */
    /* Transition: '<S425>:2' */
    EeIMOR_b_AuthCmd03_InFlag = true;

    /* SignalConversion generated from: '<S17>/PokeIMOR_y_AuthCmd03_Chrt' incorporates:
     *  SignalConversion generated from: '<S17>/VeIMOR_y_AuthCmd03_In_write'
     */
#if Rte_SysCon_Variant_IMOR_1

    /* Merge: '<Root>/VeIMOR_y_AuthCmd03_In_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S17>/LeIMOR_y_AuthCmd03_In'
     */
    Rte_IrvWrite_PokeIMOR_y_AuthCmd03_In_VeIMOR_y_AuthCmd03_In_write_IRV
        (LeIMOR_y_AuthCmd03);

#endif

    /* End of SignalConversion generated from: '<S17>/PokeIMOR_y_AuthCmd03_Chrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeIMOR_y_AuthCmd03_In' */
}

/* Output function */
FUNC(void, IMOR_CODE) PokeIMOR_y_AuthCmd04_In(VAR(uint8, AUTOMATIC)
    LeIMOR_y_AuthCmd04)
{

#if !Rte_SysCon_Variant_IMOR_1

    UNUSED_PARAMETER(LeIMOR_y_AuthCmd04);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeIMOR_y_AuthCmd04_In' */
    /* Chart: '<S18>/PokeIMOR_y_AuthCmd04_Chrt' */
    /* Gateway: PokeIMOR_y_AuthCmd04_In/PokeIMOR_y_AuthCmd04_Chrt */
    /* During: PokeIMOR_y_AuthCmd04_In/PokeIMOR_y_AuthCmd04_Chrt */
    /* Entry Internal: PokeIMOR_y_AuthCmd04_In/PokeIMOR_y_AuthCmd04_Chrt */
    /* Transition: '<S426>:2' */
    EeIMOR_b_AuthCmd04_InFlag = true;

    /* SignalConversion generated from: '<S18>/PokeIMOR_y_AuthCmd04_Chrt' incorporates:
     *  SignalConversion generated from: '<S18>/VeIMOR_y_AuthCmd04_In_write'
     */
#if Rte_SysCon_Variant_IMOR_1

    /* Merge: '<Root>/VeIMOR_y_AuthCmd04_In_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S18>/LeIMOR_y_AuthCmd04_In'
     */
    Rte_IrvWrite_PokeIMOR_y_AuthCmd04_In_VeIMOR_y_AuthCmd04_In_write_IRV
        (LeIMOR_y_AuthCmd04);

#endif

    /* End of SignalConversion generated from: '<S18>/PokeIMOR_y_AuthCmd04_Chrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeIMOR_y_AuthCmd04_In' */
}

/* Output function */
FUNC(void, IMOR_CODE) PokeIMOR_y_AuthCmd05_In(VAR(uint8, AUTOMATIC)
    LeIMOR_y_AuthCmd05)
{

#if !Rte_SysCon_Variant_IMOR_1

    UNUSED_PARAMETER(LeIMOR_y_AuthCmd05);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeIMOR_y_AuthCmd05_In' */
    /* Chart: '<S19>/PokeIMOR_y_AuthCmd05_Chrt' */
    /* Gateway: PokeIMOR_y_AuthCmd05_In/PokeIMOR_y_AuthCmd05_Chrt */
    /* During: PokeIMOR_y_AuthCmd05_In/PokeIMOR_y_AuthCmd05_Chrt */
    /* Entry Internal: PokeIMOR_y_AuthCmd05_In/PokeIMOR_y_AuthCmd05_Chrt */
    /* Transition: '<S427>:2' */
    EeIMOR_b_AuthCmd05_InFlag = true;

    /* SignalConversion generated from: '<S19>/PokeIMOR_y_AuthCmd05_Chrt' incorporates:
     *  SignalConversion generated from: '<S19>/VeIMOR_y_AuthCmd05_In_write'
     */
#if Rte_SysCon_Variant_IMOR_1

    /* Merge: '<Root>/VeIMOR_y_AuthCmd05_In_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S19>/LeIMOR_y_AuthCmd05_In'
     */
    Rte_IrvWrite_PokeIMOR_y_AuthCmd05_In_VeIMOR_y_AuthCmd05_In_write_IRV
        (LeIMOR_y_AuthCmd05);

#endif

    /* End of SignalConversion generated from: '<S19>/PokeIMOR_y_AuthCmd05_Chrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeIMOR_y_AuthCmd05_In' */
}

/* Output function */
FUNC(void, IMOR_CODE) PokeIMOR_y_AuthCmd06_In(VAR(uint8, AUTOMATIC)
    LeIMOR_y_AuthCmd06)
{

#if !Rte_SysCon_Variant_IMOR_1

    UNUSED_PARAMETER(LeIMOR_y_AuthCmd06);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeIMOR_y_AuthCmd06_In' */
    /* Chart: '<S20>/PokeIMOR_y_AuthCmd06_Chrt' */
    /* Gateway: PokeIMOR_y_AuthCmd06_In/PokeIMOR_y_AuthCmd06_Chrt */
    /* During: PokeIMOR_y_AuthCmd06_In/PokeIMOR_y_AuthCmd06_Chrt */
    /* Entry Internal: PokeIMOR_y_AuthCmd06_In/PokeIMOR_y_AuthCmd06_Chrt */
    /* Transition: '<S428>:2' */
    EeIMOR_b_AuthCmd06_InFlag = true;

    /* SignalConversion generated from: '<S20>/PokeIMOR_y_AuthCmd06_Chrt' incorporates:
     *  SignalConversion generated from: '<S20>/VeIMOR_y_AuthCmd06_In_write'
     */
#if Rte_SysCon_Variant_IMOR_1

    /* Merge: '<Root>/VeIMOR_y_AuthCmd06_In_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S20>/LeIMOR_y_AuthCmd06_In'
     */
    Rte_IrvWrite_PokeIMOR_y_AuthCmd06_In_VeIMOR_y_AuthCmd06_In_write_IRV
        (LeIMOR_y_AuthCmd06);

#endif

    /* End of SignalConversion generated from: '<S20>/PokeIMOR_y_AuthCmd06_Chrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeIMOR_y_AuthCmd06_In' */
}

/* Output function */
FUNC(void, IMOR_CODE) PokeIMOR_y_AuthCmd07_In(VAR(uint8, AUTOMATIC)
    LeIMOR_y_AuthCmd07)
{

#if !Rte_SysCon_Variant_IMOR_1

    UNUSED_PARAMETER(LeIMOR_y_AuthCmd07);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeIMOR_y_AuthCmd07_In' */
    /* Chart: '<S21>/PokeIMOR_y_AuthCmd07_Chrt' */
    /* Gateway: PokeIMOR_y_AuthCmd07_In/PokeIMOR_y_AuthCmd07_Chrt */
    /* During: PokeIMOR_y_AuthCmd07_In/PokeIMOR_y_AuthCmd07_Chrt */
    /* Entry Internal: PokeIMOR_y_AuthCmd07_In/PokeIMOR_y_AuthCmd07_Chrt */
    /* Transition: '<S429>:2' */
    EeIMOR_b_AuthCmd07_InFlag = true;

    /* SignalConversion generated from: '<S21>/PokeIMOR_y_AuthCmd07_Chrt' incorporates:
     *  SignalConversion generated from: '<S21>/VeIMOR_y_AuthCmd07_In_write'
     */
#if Rte_SysCon_Variant_IMOR_1

    /* Merge: '<Root>/VeIMOR_y_AuthCmd07_In_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S21>/LeIMOR_y_AuthCmd00_In'
     */
    Rte_IrvWrite_PokeIMOR_y_AuthCmd07_In_VeIMOR_y_AuthCmd07_In_write_IRV
        (LeIMOR_y_AuthCmd07);

#endif

    /* End of SignalConversion generated from: '<S21>/PokeIMOR_y_AuthCmd07_Chrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeIMOR_y_AuthCmd07_In' */
}

/* Output function */
FUNC(void, IMOR_CODE) PokeIMOR_y_AuthCmd08_In(VAR(uint8, AUTOMATIC)
    LeIMOR_y_AuthCmd08)
{

#if !Rte_SysCon_Variant_IMOR_1

    UNUSED_PARAMETER(LeIMOR_y_AuthCmd08);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeIMOR_y_AuthCmd08_In' */
    /* Chart: '<S22>/PokeIMOR_y_AuthCmd08_Chrt' */
    /* Gateway: PokeIMOR_y_AuthCmd08_In/PokeIMOR_y_AuthCmd08_Chrt */
    /* During: PokeIMOR_y_AuthCmd08_In/PokeIMOR_y_AuthCmd08_Chrt */
    /* Entry Internal: PokeIMOR_y_AuthCmd08_In/PokeIMOR_y_AuthCmd08_Chrt */
    /* Transition: '<S430>:2' */
    EeIMOR_b_AuthCmd08_InFlag = true;

    /* SignalConversion generated from: '<S22>/PokeIMOR_y_AuthCmd08_Chrt' incorporates:
     *  SignalConversion generated from: '<S22>/VeIMOR_y_AuthCmd08_In_write'
     */
#if Rte_SysCon_Variant_IMOR_1

    /* Merge: '<Root>/VeIMOR_y_AuthCmd08_In_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S22>/LeIMOR_y_AuthCmd08_In'
     */
    Rte_IrvWrite_PokeIMOR_y_AuthCmd08_In_VeIMOR_y_AuthCmd08_In_write_IRV
        (LeIMOR_y_AuthCmd08);

#endif

    /* End of SignalConversion generated from: '<S22>/PokeIMOR_y_AuthCmd08_Chrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeIMOR_y_AuthCmd08_In' */
}

/* Output function */
FUNC(void, IMOR_CODE) PokeIMOR_y_AuthCmd09_In(VAR(uint8, AUTOMATIC)
    LeIMOR_y_AuthCmd09)
{

#if !Rte_SysCon_Variant_IMOR_1

    UNUSED_PARAMETER(LeIMOR_y_AuthCmd09);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeIMOR_y_AuthCmd09_In' */
    /* Chart: '<S23>/PokeIMOR_y_AuthCmd09_Chrt' */
    /* Gateway: PokeIMOR_y_AuthCmd09_In/PokeIMOR_y_AuthCmd09_Chrt */
    /* During: PokeIMOR_y_AuthCmd09_In/PokeIMOR_y_AuthCmd09_Chrt */
    /* Entry Internal: PokeIMOR_y_AuthCmd09_In/PokeIMOR_y_AuthCmd09_Chrt */
    /* Transition: '<S431>:2' */
    EeIMOR_b_AuthCmd09_InFlag = true;

    /* SignalConversion generated from: '<S23>/PokeIMOR_y_AuthCmd09_Chrt' incorporates:
     *  SignalConversion generated from: '<S23>/VeIMOR_y_AuthCmd09_In_write'
     */
#if Rte_SysCon_Variant_IMOR_1

    /* Merge: '<Root>/VeIMOR_y_AuthCmd09_In_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S23>/LeIMOR_y_AuthCmd00_In'
     */
    Rte_IrvWrite_PokeIMOR_y_AuthCmd09_In_VeIMOR_y_AuthCmd09_In_write_IRV
        (LeIMOR_y_AuthCmd09);

#endif

    /* End of SignalConversion generated from: '<S23>/PokeIMOR_y_AuthCmd09_Chrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeIMOR_y_AuthCmd09_In' */
}

/* Output function */
FUNC(void, IMOR_CODE) PokeIMOR_y_AuthCmd10_In(VAR(uint8, AUTOMATIC)
    LeIMOR_y_AuthCmd10)
{

#if !Rte_SysCon_Variant_IMOR_1

    UNUSED_PARAMETER(LeIMOR_y_AuthCmd10);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeIMOR_y_AuthCmd10_In' */
    /* Chart: '<S24>/PokeIMOR_y_AuthCmd10_Chrt' */
    /* Gateway: PokeIMOR_y_AuthCmd10_In/PokeIMOR_y_AuthCmd10_Chrt */
    /* During: PokeIMOR_y_AuthCmd10_In/PokeIMOR_y_AuthCmd10_Chrt */
    /* Entry Internal: PokeIMOR_y_AuthCmd10_In/PokeIMOR_y_AuthCmd10_Chrt */
    /* Transition: '<S432>:2' */
    EeIMOR_b_AuthCmd10_InFlag = true;

    /* SignalConversion generated from: '<S24>/PokeIMOR_y_AuthCmd10_Chrt' incorporates:
     *  SignalConversion generated from: '<S24>/VeIMOR_y_AuthCmd10_In_write'
     */
#if Rte_SysCon_Variant_IMOR_1

    /* Merge: '<Root>/VeIMOR_y_AuthCmd10_In_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S24>/LeIMOR_y_AuthCmd10_In'
     */
    Rte_IrvWrite_PokeIMOR_y_AuthCmd10_In_VeIMOR_y_AuthCmd10_In_write_IRV
        (LeIMOR_y_AuthCmd10);

#endif

    /* End of SignalConversion generated from: '<S24>/PokeIMOR_y_AuthCmd10_Chrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeIMOR_y_AuthCmd10_In' */
}

/* Output function */
FUNC(void, IMOR_CODE) PokeIMOR_y_AuthCmd11_In(VAR(uint8, AUTOMATIC)
    LeIMOR_y_AuthCmd11)
{

#if !Rte_SysCon_Variant_IMOR_1

    UNUSED_PARAMETER(LeIMOR_y_AuthCmd11);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeIMOR_y_AuthCmd11_In' */
    /* Chart: '<S25>/PokeIMOR_y_AuthCmd11_Chrt' */
    /* Gateway: PokeIMOR_y_AuthCmd11_In/PokeIMOR_y_AuthCmd11_Chrt */
    /* During: PokeIMOR_y_AuthCmd11_In/PokeIMOR_y_AuthCmd11_Chrt */
    /* Entry Internal: PokeIMOR_y_AuthCmd11_In/PokeIMOR_y_AuthCmd11_Chrt */
    /* Transition: '<S433>:2' */
    EeIMOR_b_AuthCmd11_InFlag = true;

    /* SignalConversion generated from: '<S25>/PokeIMOR_y_AuthCmd11_Chrt' incorporates:
     *  SignalConversion generated from: '<S25>/VeIMOR_y_AuthCmd11_In_write'
     */
#if Rte_SysCon_Variant_IMOR_1

    /* Merge: '<Root>/VeIMOR_y_AuthCmd11_In_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S25>/LeIMOR_y_AuthCmd11_In'
     */
    Rte_IrvWrite_PokeIMOR_y_AuthCmd11_In_VeIMOR_y_AuthCmd11_In_write_IRV
        (LeIMOR_y_AuthCmd11);

#endif

    /* End of SignalConversion generated from: '<S25>/PokeIMOR_y_AuthCmd11_Chrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeIMOR_y_AuthCmd11_In' */
}

/* Output function */
FUNC(void, IMOR_CODE) PokeIMOR_y_AuthCmd12_In(VAR(uint8, AUTOMATIC)
    LeIMOR_y_AuthCmd12)
{

#if !Rte_SysCon_Variant_IMOR_1

    UNUSED_PARAMETER(LeIMOR_y_AuthCmd12);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeIMOR_y_AuthCmd12_In' */
    /* Chart: '<S26>/PokeIMOR_y_AuthCmd12_Chrt' */
    /* Gateway: PokeIMOR_y_AuthCmd12_In/PokeIMOR_y_AuthCmd12_Chrt */
    /* During: PokeIMOR_y_AuthCmd12_In/PokeIMOR_y_AuthCmd12_Chrt */
    /* Entry Internal: PokeIMOR_y_AuthCmd12_In/PokeIMOR_y_AuthCmd12_Chrt */
    /* Transition: '<S434>:2' */
    EeIMOR_b_AuthCmd12_InFlag = true;

    /* SignalConversion generated from: '<S26>/PokeIMOR_y_AuthCmd12_Chrt' incorporates:
     *  SignalConversion generated from: '<S26>/VeIMOR_y_AuthCmd12_In_write'
     */
#if Rte_SysCon_Variant_IMOR_1

    /* Merge: '<Root>/VeIMOR_y_AuthCmd12_In_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S26>/LeIMOR_y_AuthCmd12_In'
     */
    Rte_IrvWrite_PokeIMOR_y_AuthCmd12_In_VeIMOR_y_AuthCmd12_In_write_IRV
        (LeIMOR_y_AuthCmd12);

#endif

    /* End of SignalConversion generated from: '<S26>/PokeIMOR_y_AuthCmd12_Chrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeIMOR_y_AuthCmd12_In' */
}

/* Output function */
FUNC(void, IMOR_CODE) PokeIMOR_y_AuthCmd13_In(VAR(uint8, AUTOMATIC)
    LeIMOR_y_AuthCmd13)
{

#if !Rte_SysCon_Variant_IMOR_1

    UNUSED_PARAMETER(LeIMOR_y_AuthCmd13);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeIMOR_y_AuthCmd13_In' */
    /* Chart: '<S27>/PokeIMOR_y_AuthCmd13_Chrt' */
    /* Gateway: PokeIMOR_y_AuthCmd13_In/PokeIMOR_y_AuthCmd13_Chrt */
    /* During: PokeIMOR_y_AuthCmd13_In/PokeIMOR_y_AuthCmd13_Chrt */
    /* Entry Internal: PokeIMOR_y_AuthCmd13_In/PokeIMOR_y_AuthCmd13_Chrt */
    /* Transition: '<S435>:2' */
    EeIMOR_b_AuthCmd13_InFlag = true;

    /* SignalConversion generated from: '<S27>/PokeIMOR_y_AuthCmd13_Chrt' incorporates:
     *  SignalConversion generated from: '<S27>/VeIMOR_y_AuthCmd13_In_write'
     */
#if Rte_SysCon_Variant_IMOR_1

    /* Merge: '<Root>/VeIMOR_y_AuthCmd13_In_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S27>/LeIMOR_y_AuthCmd13_In'
     */
    Rte_IrvWrite_PokeIMOR_y_AuthCmd13_In_VeIMOR_y_AuthCmd13_In_write_IRV
        (LeIMOR_y_AuthCmd13);

#endif

    /* End of SignalConversion generated from: '<S27>/PokeIMOR_y_AuthCmd13_Chrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeIMOR_y_AuthCmd13_In' */
}

/* Output function */
FUNC(void, IMOR_CODE) PokeIMOR_y_AuthCmd14_In(VAR(uint8, AUTOMATIC)
    LeIMOR_y_AuthCmd14)
{

#if !Rte_SysCon_Variant_IMOR_1

    UNUSED_PARAMETER(LeIMOR_y_AuthCmd14);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeIMOR_y_AuthCmd14_In' */
    /* Chart: '<S28>/PokeIMOR_y_AuthCmd14_Chrt' */
    /* Gateway: PokeIMOR_y_AuthCmd14_In/PokeIMOR_y_AuthCmd14_Chrt */
    /* During: PokeIMOR_y_AuthCmd14_In/PokeIMOR_y_AuthCmd14_Chrt */
    /* Entry Internal: PokeIMOR_y_AuthCmd14_In/PokeIMOR_y_AuthCmd14_Chrt */
    /* Transition: '<S436>:2' */
    EeIMOR_b_AuthCmd14_InFlag = true;

    /* SignalConversion generated from: '<S28>/PokeIMOR_y_AuthCmd14_Chrt' incorporates:
     *  SignalConversion generated from: '<S28>/VeIMOR_y_AuthCmd14_In_write'
     */
#if Rte_SysCon_Variant_IMOR_1

    /* Merge: '<Root>/VeIMOR_y_AuthCmd14_In_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S28>/LeIMOR_y_AuthCmd14_In'
     */
    Rte_IrvWrite_PokeIMOR_y_AuthCmd14_In_VeIMOR_y_AuthCmd14_In_write_IRV
        (LeIMOR_y_AuthCmd14);

#endif

    /* End of SignalConversion generated from: '<S28>/PokeIMOR_y_AuthCmd14_Chrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeIMOR_y_AuthCmd14_In' */
}

/* Output function */
FUNC(void, IMOR_CODE) PokeIMOR_y_AuthCmd15_In(VAR(uint8, AUTOMATIC)
    LeIMOR_y_AuthCmd15)
{

#if !Rte_SysCon_Variant_IMOR_1

    UNUSED_PARAMETER(LeIMOR_y_AuthCmd15);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeIMOR_y_AuthCmd15_In' */
    /* Chart: '<S29>/PokeIMOR_y_AuthCmd15_Chrt' */
    /* Gateway: PokeIMOR_y_AuthCmd15_In/PokeIMOR_y_AuthCmd15_Chrt */
    /* During: PokeIMOR_y_AuthCmd15_In/PokeIMOR_y_AuthCmd15_Chrt */
    /* Entry Internal: PokeIMOR_y_AuthCmd15_In/PokeIMOR_y_AuthCmd15_Chrt */
    /* Transition: '<S437>:2' */
    EeIMOR_b_AuthCmd15_InFlag = true;

    /* SignalConversion generated from: '<S29>/PokeIMOR_y_AuthCmd15_Chrt' incorporates:
     *  SignalConversion generated from: '<S29>/VeIMOR_y_AuthCmd15_In_write'
     */
#if Rte_SysCon_Variant_IMOR_1

    /* Merge: '<Root>/VeIMOR_y_AuthCmd15_In_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S29>/LeIMOR_y_AuthCmd15_In'
     */
    Rte_IrvWrite_PokeIMOR_y_AuthCmd15_In_VeIMOR_y_AuthCmd15_In_write_IRV
        (LeIMOR_y_AuthCmd15);

#endif

    /* End of SignalConversion generated from: '<S29>/PokeIMOR_y_AuthCmd15_Chrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeIMOR_y_AuthCmd15_In' */
}

/* Output function */
FUNC(void, IMOR_CODE) PokeIMOR_y_AuthCmdCntrlEncdResp(VAR(uint8, AUTOMATIC)
    LeIMOR_y_AuthCmdCntrlEncdResp)
{

#if !Rte_SysCon_Variant_IMOR_1

    UNUSED_PARAMETER(LeIMOR_y_AuthCmdCntrlEncdResp);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeIMOR_y_AuthCmdCntrlEncdResp' */
    /* Chart: '<S30>/PokeIMOR_y_AuthCmdCntrlEncdResp_Chrt' */
    /* Gateway: PokeIMOR_y_AuthCmdCntrlEncdResp/PokeIMOR_y_AuthCmdCntrlEncdResp_Chrt */
    /* During: PokeIMOR_y_AuthCmdCntrlEncdResp/PokeIMOR_y_AuthCmdCntrlEncdResp_Chrt */
    /* Entry Internal: PokeIMOR_y_AuthCmdCntrlEncdResp/PokeIMOR_y_AuthCmdCntrlEncdResp_Chrt */
    /* Transition: '<S438>:2' */
    EeIMOR_b_AuthCmdCntrlEncdRespFlag = true;

    /* SignalConversion generated from: '<S30>/PokeIMOR_y_AuthCmdCntrlEncdResp_Chrt' incorporates:
     *  SignalConversion generated from: '<S30>/VeIMOR_y_AuthCmdCntrlEncdResp_write'
     */
#if Rte_SysCon_Variant_IMOR_1

    /* Merge: '<Root>/VeIMOR_y_AuthCmdCntrlEncdResp_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S30>/LeIMOR_y_AuthCmd00_In'
     */
    Rte_IrvWrite_PokeIMOR_y_AuthCmdCntrlEncdResp_VeIMOR_y_AuthCmdCntrlEncdResp_write_IRV
        (LeIMOR_y_AuthCmdCntrlEncdResp);

#endif

    /* End of SignalConversion generated from: '<S30>/PokeIMOR_y_AuthCmdCntrlEncdResp_Chrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeIMOR_y_AuthCmdCntrlEncdResp' */
}

/* Output function */
FUNC(void, IMOR_CODE) PokeIMOR_y_CntrlEncdResp(VAR(uint8, AUTOMATIC)
    LeIMOR_y_CntrlEncdResp)
{

#if !Rte_SysCon_Variant_IMOR_1

    UNUSED_PARAMETER(LeIMOR_y_CntrlEncdResp);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeIMOR_y_CntrlEncdResp' */
    /* Chart: '<S31>/PokeIMOR_y_CntrlEncdRespChrt' */
    /* Gateway: PokeIMOR_y_CntrlEncdResp/PokeIMOR_y_CntrlEncdRespChrt */
    /* During: PokeIMOR_y_CntrlEncdResp/PokeIMOR_y_CntrlEncdRespChrt */
    /* Entry Internal: PokeIMOR_y_CntrlEncdResp/PokeIMOR_y_CntrlEncdRespChrt */
    /* Transition: '<S439>:2' */
    VeIMOR_b_CntrlEncdResFlag = true;

    /* SignalConversion generated from: '<S31>/PokeIMOR_y_CntrlEncdRespChrt' incorporates:
     *  SignalConversion generated from: '<S31>/VeIMOR_y_CntrlEncdResp_write'
     */
#if Rte_SysCon_Variant_IMOR_1

    /* Merge: '<Root>/VeIMOR_y_CntrlEncdResp_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S31>/LeIMOR_y_CntrlEncdResp'
     */
    Rte_IrvWrite_PokeIMOR_y_CntrlEncdResp_VeIMOR_y_CntrlEncdResp_write_IRV
        (LeIMOR_y_CntrlEncdResp);

#endif

    /* End of SignalConversion generated from: '<S31>/PokeIMOR_y_CntrlEncdRespChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeIMOR_y_CntrlEncdResp' */
}

/* Output function */
FUNC(void, IMOR_CODE) PokeIMOR_y_MMKey1org21(VAR(uint8, AUTOMATIC)
    LeIMOR_y_MMKey1org21)
{

#if !Rte_SysCon_Variant_IMOR_1

    UNUSED_PARAMETER(LeIMOR_y_MMKey1org21);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeIMOR_y_MMKey1org21' */
    /* Chart: '<S32>/PokeIMOR_y_MMKey1org21Chrt' */
    /* Gateway: PokeIMOR_y_MMKey1org21/PokeIMOR_y_MMKey1org21Chrt */
    /* During: PokeIMOR_y_MMKey1org21/PokeIMOR_y_MMKey1org21Chrt */
    /* Entry Internal: PokeIMOR_y_MMKey1org21/PokeIMOR_y_MMKey1org21Chrt */
    /* Transition: '<S440>:2' */
    EeIMOR_b_MMKey1org21Flag = true;

    /* SignalConversion generated from: '<S32>/PokeIMOR_y_MMKey1org21Chrt' incorporates:
     *  SignalConversion generated from: '<S32>/VeIMOR_y_MMKey1org21_write'
     */
#if Rte_SysCon_Variant_IMOR_1

    /* Merge: '<Root>/VeIMOR_y_MMKey1org21_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S32>/LeIMOR_y_MMKey1org21'
     */
    Rte_IrvWrite_PokeIMOR_y_MMKey1org21_VeIMOR_y_MMKey1org21_write_IRV
        (LeIMOR_y_MMKey1org21);

#endif

    /* End of SignalConversion generated from: '<S32>/PokeIMOR_y_MMKey1org21Chrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeIMOR_y_MMKey1org21' */
}

/* Output function */
FUNC(void, IMOR_CODE) PokeIMOR_y_MMKey1org22(VAR(uint8, AUTOMATIC)
    LeIMOR_y_MMKey1org22)
{

#if !Rte_SysCon_Variant_IMOR_1

    UNUSED_PARAMETER(LeIMOR_y_MMKey1org22);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeIMOR_y_MMKey1org22' */
    /* Chart: '<S33>/PokeIMOR_y_MMKey1org22Chrt' */
    /* Gateway: PokeIMOR_y_MMKey1org22/PokeIMOR_y_MMKey1org22Chrt */
    /* During: PokeIMOR_y_MMKey1org22/PokeIMOR_y_MMKey1org22Chrt */
    /* Entry Internal: PokeIMOR_y_MMKey1org22/PokeIMOR_y_MMKey1org22Chrt */
    /* Transition: '<S441>:2' */
    EeIMOR_b_MMKey1org22Flag = true;

    /* SignalConversion generated from: '<S33>/PokeIMOR_y_MMKey1org22Chrt' incorporates:
     *  SignalConversion generated from: '<S33>/VeIMOR_y_MMKey1org22_write'
     */
#if Rte_SysCon_Variant_IMOR_1

    /* Merge: '<Root>/VeIMOR_y_MMKey1org22_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S33>/LeIMOR_y_MMKey1org22'
     */
    Rte_IrvWrite_PokeIMOR_y_MMKey1org22_VeIMOR_y_MMKey1org22_write_IRV
        (LeIMOR_y_MMKey1org22);

#endif

    /* End of SignalConversion generated from: '<S33>/PokeIMOR_y_MMKey1org22Chrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeIMOR_y_MMKey1org22' */
}

/* Output function */
FUNC(void, IMOR_CODE) PokeIMOR_y_MMKey_3(VAR(uint8, AUTOMATIC) LeIMOR_y_MMKey_3)
{

#if !Rte_SysCon_Variant_IMOR_1

    UNUSED_PARAMETER(LeIMOR_y_MMKey_3);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeIMOR_y_MMKey_3' */
    /* Chart: '<S34>/PokeIMOR_y_MMKey_3Chrt' */
    /* Gateway: PokeIMOR_y_MMKey_3/PokeIMOR_y_MMKey_3Chrt */
    /* During: PokeIMOR_y_MMKey_3/PokeIMOR_y_MMKey_3Chrt */
    /* Entry Internal: PokeIMOR_y_MMKey_3/PokeIMOR_y_MMKey_3Chrt */
    /* Transition: '<S442>:2' */
    EeIMOR_b_MMKey_3Flag = true;

    /* SignalConversion generated from: '<S34>/PokeIMOR_y_MMKey_3Chrt' incorporates:
     *  SignalConversion generated from: '<S34>/VeIMOR_y_MMKey_3_write'
     */
#if Rte_SysCon_Variant_IMOR_1

    /* Merge: '<Root>/VeIMOR_y_MMKey_3_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S34>/LeIMOR_y_MMKey_3'
     */
    Rte_IrvWrite_PokeIMOR_y_MMKey_3_VeIMOR_y_MMKey_3_write_IRV(LeIMOR_y_MMKey_3);

#endif

    /* End of SignalConversion generated from: '<S34>/PokeIMOR_y_MMKey_3Chrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeIMOR_y_MMKey_3' */
}

/* Output function */
FUNC(void, IMOR_CODE) PokeIMOR_y_MMKey_4(VAR(uint8, AUTOMATIC) LeIMOR_y_MMKey_4)
{

#if !Rte_SysCon_Variant_IMOR_1

    UNUSED_PARAMETER(LeIMOR_y_MMKey_4);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeIMOR_y_MMKey_4' */
    /* Chart: '<S35>/PokeIMOR_y_MMKey_4Chrt' */
    /* Gateway: PokeIMOR_y_MMKey_4/PokeIMOR_y_MMKey_4Chrt */
    /* During: PokeIMOR_y_MMKey_4/PokeIMOR_y_MMKey_4Chrt */
    /* Entry Internal: PokeIMOR_y_MMKey_4/PokeIMOR_y_MMKey_4Chrt */
    /* Transition: '<S443>:2' */
    EeIMOR_b_MMKey_4Flag = true;

    /* SignalConversion generated from: '<S35>/PokeIMOR_y_MMKey_4Chrt' incorporates:
     *  SignalConversion generated from: '<S35>/VeIMOR_y_MMKey_4_write'
     */
#if Rte_SysCon_Variant_IMOR_1

    /* Merge: '<Root>/VeIMOR_y_MMKey_4_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S35>/LeIMOR_y_MMKey_4'
     */
    Rte_IrvWrite_PokeIMOR_y_MMKey_4_VeIMOR_y_MMKey_4_write_IRV(LeIMOR_y_MMKey_4);

#endif

    /* End of SignalConversion generated from: '<S35>/PokeIMOR_y_MMKey_4Chrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeIMOR_y_MMKey_4' */
}

/* Output function */
FUNC(void, IMOR_CODE) PokeIMOR_y_MMKey_5(VAR(uint8, AUTOMATIC) LeIMOR_y_MMKey_5)
{

#if !Rte_SysCon_Variant_IMOR_1

    UNUSED_PARAMETER(LeIMOR_y_MMKey_5);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeIMOR_y_MMKey_5' */
    /* Chart: '<S36>/PokeIMOR_y_MMKey_5Chrt' */
    /* Gateway: PokeIMOR_y_MMKey_5/PokeIMOR_y_MMKey_5Chrt */
    /* During: PokeIMOR_y_MMKey_5/PokeIMOR_y_MMKey_5Chrt */
    /* Entry Internal: PokeIMOR_y_MMKey_5/PokeIMOR_y_MMKey_5Chrt */
    /* Transition: '<S444>:2' */
    EeIMOR_b_MMKey_5Flag = true;

    /* SignalConversion generated from: '<S36>/PokeIMOR_y_MMKey_5Chrt' incorporates:
     *  SignalConversion generated from: '<S36>/VeIMOR_y_MMKey_5_write'
     */
#if Rte_SysCon_Variant_IMOR_1

    /* Merge: '<Root>/VeIMOR_y_MMKey_5_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S36>/LeIMOR_y_MMKey_5'
     */
    Rte_IrvWrite_PokeIMOR_y_MMKey_5_VeIMOR_y_MMKey_5_write_IRV(LeIMOR_y_MMKey_5);

#endif

    /* End of SignalConversion generated from: '<S36>/PokeIMOR_y_MMKey_5Chrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeIMOR_y_MMKey_5' */
}

/* Output function */
FUNC(void, IMOR_CODE) PokeIMOR_y_MMKey_6(VAR(uint8, AUTOMATIC) LeIMOR_y_MMKey_6)
{

#if !Rte_SysCon_Variant_IMOR_1

    UNUSED_PARAMETER(LeIMOR_y_MMKey_6);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeIMOR_y_MMKey_6' */
    /* Chart: '<S37>/PokeIMOR_y_MMKey_6Chrt' */
    /* Gateway: PokeIMOR_y_MMKey_6/PokeIMOR_y_MMKey_6Chrt */
    /* During: PokeIMOR_y_MMKey_6/PokeIMOR_y_MMKey_6Chrt */
    /* Entry Internal: PokeIMOR_y_MMKey_6/PokeIMOR_y_MMKey_6Chrt */
    /* Transition: '<S445>:2' */
    EeIMOR_b_MMKey_6Flag = true;

    /* SignalConversion generated from: '<S37>/PokeIMOR_y_MMKey_6Chrt' incorporates:
     *  SignalConversion generated from: '<S37>/VeIMOR_y_MMKey_6_write'
     */
#if Rte_SysCon_Variant_IMOR_1

    /* Merge: '<Root>/VeIMOR_y_MMKey_6_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S37>/LeIMOR_y_MMKey_6'
     */
    Rte_IrvWrite_PokeIMOR_y_MMKey_6_VeIMOR_y_MMKey_6_write_IRV(LeIMOR_y_MMKey_6);

#endif

    /* End of SignalConversion generated from: '<S37>/PokeIMOR_y_MMKey_6Chrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeIMOR_y_MMKey_6' */
}

/* Output function */
FUNC(void, IMOR_CODE) IMOR_PwrOff
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/IMOR_PwrOff'
     */
    /* Outport: '<Root>/EeIMOR_y_MMKey1org22_Mem_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_y_MMKey1org22_Mem'
     */
    Rte_Write_EeIMOR_y_MMKey1org22_Mem_EeIMOR_y_MMKey1org22_Mem
        (EeIMOR_y_MMKey1org22_Mem);

    /* Outport: '<Root>/EeIMOR_y_MMKey_3_Mem_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_y_MMKey_3_Mem'
     */
    Rte_Write_EeIMOR_y_MMKey_3_Mem_EeIMOR_y_MMKey_3_Mem
        (EeIMOR_y_MMKey_3_Mem);

    /* Outport: '<Root>/EeIMOR_b_ImmoAuthValid_ECMMem_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_b_ImmoAuthValid_ECMMem'
     */
    Rte_Write_EeIMOR_b_ImmoAuthValid_ECMMem_EeIMOR_b_ImmoAuthValid_ECMMem
        (EeIMOR_b_ImmoAuthValid_ECMMem);

    /* Outport: '<Root>/EeIMOR_M_Rand1_prev_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_M_Rand1_prev'
     */
    Rte_Write_EeIMOR_M_Rand1_prev_EeIMOR_M_Rand1_prev(EeIMOR_M_Rand1_prev);

    /* Outport: '<Root>/EeIMOR_M_Rand2_prev_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_M_Rand2_prev'
     */
    Rte_Write_EeIMOR_M_Rand2_prev_EeIMOR_M_Rand2_prev(EeIMOR_M_Rand2_prev);

    /* Outport: '<Root>/EeIMOR_M_Rand3_prev_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_M_Rand3_prev'
     */
    Rte_Write_EeIMOR_M_Rand3_prev_EeIMOR_M_Rand3_prev(EeIMOR_M_Rand3_prev);

    /* Outport: '<Root>/EeIMOR_b_ImmoAuthValid_Mem_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_b_ImmoAuthValid_Mem'
     */
    Rte_Write_EeIMOR_b_ImmoAuthValid_Mem_EeIMOR_b_ImmoAuthValid_Mem
        (EeIMOR_b_ImmoAuthValid_Mem);

    /* Outport: '<Root>/EeIMOR_M_Rand4_prev_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_M_Rand4_prev'
     */
    Rte_Write_EeIMOR_M_Rand4_prev_EeIMOR_M_Rand4_prev(EeIMOR_M_Rand4_prev);

    /* Outport: '<Root>/EeIMOR_b_ORC_Health_rec_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_b_ORC_Health_rec'
     */
    Rte_Write_EeIMOR_b_ORC_Health_rec_EeIMOR_b_ORC_Health_rec
        (EeIMOR_b_ORC_Health_rec);

    /* Outport: '<Root>/EeIMOR_y_MMKey_4_Mem_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_y_MMKey_4_Mem'
     */
    Rte_Write_EeIMOR_y_MMKey_4_Mem_EeIMOR_y_MMKey_4_Mem
        (EeIMOR_y_MMKey_4_Mem);

    /* Outport: '<Root>/EeIMOR_b_VC_VehCfg2_Stat_rec_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_b_VC_VehCfg2_Stat_rec'
     */
    Rte_Write_EeIMOR_b_VC_VehCfg2_Stat_rec_EeIMOR_b_VC_VehCfg2_Stat_rec
        (EeIMOR_b_VC_VehCfg2_Stat_rec);

    /* Outport: '<Root>/EeIMOR_b_VC_VehCfg3_Stat_rec_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_b_VC_VehCfg3_Stat_rec'
     */
    Rte_Write_EeIMOR_b_VC_VehCfg3_Stat_rec_EeIMOR_b_VC_VehCfg3_Stat_rec
        (EeIMOR_b_VC_VehCfg3_Stat_rec);

    /* Outport: '<Root>/EeIMOR_b_VC_VehCfg4_Stat_rec_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_b_VC_VehCfg4_Stat_rec'
     */
    Rte_Write_EeIMOR_b_VC_VehCfg4_Stat_rec_EeIMOR_b_VC_VehCfg4_Stat_rec
        (EeIMOR_b_VC_VehCfg4_Stat_rec);

    /* Outport: '<Root>/EeIMOR_b_VC_VehCfg6_Stat_rec_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_b_VC_VehCfg6_Stat_rec'
     */
    Rte_Write_EeIMOR_b_VC_VehCfg6_Stat_rec_EeIMOR_b_VC_VehCfg6_Stat_rec
        (EeIMOR_b_VC_VehCfg6_Stat_rec);

    /* Outport: '<Root>/EeIMOR_e_BuildAssemblyModeStat_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_e_BuildAssemblyModeStat'
     */
    
        Rte_Write_EeIMOR_e_BuildAssemblyModeStat_EeIMOR_e_BuildAssemblyModeStat
        (EeIMOR_e_BuildAssemblyModeStat);

    /* Outport: '<Root>/EeIMOR_y_MMKey_5_Mem_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_y_MMKey_5_Mem'
     */
    Rte_Write_EeIMOR_y_MMKey_5_Mem_EeIMOR_y_MMKey_5_Mem
        (EeIMOR_y_MMKey_5_Mem);

    /* Outport: '<Root>/EeIMOR_b_MMKey1org21Flag_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_b_MMKey1org21Flag'
     */
    Rte_Write_EeIMOR_b_MMKey1org21Flag_EeIMOR_b_MMKey1org21Flag
        (EeIMOR_b_MMKey1org21Flag);

    /* Outport: '<Root>/EeIMOR_y_MMKey_6_Mem_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_y_MMKey_6_Mem'
     */
    Rte_Write_EeIMOR_y_MMKey_6_Mem_EeIMOR_y_MMKey_6_Mem
        (EeIMOR_y_MMKey_6_Mem);

    /* Outport: '<Root>/EeIMOR_y_MMKey1org21_Mem_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_y_MMKey1org21_Mem'
     */
    Rte_Write_EeIMOR_y_MMKey1org21_Mem_EeIMOR_y_MMKey1org21_Mem
        (EeIMOR_y_MMKey1org21_Mem);

    /* Outport: '<Root>/EeIMOR_b_MKeyStrToE2_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_b_MKeyStrToE2'
     */
    Rte_Write_EeIMOR_b_MKeyStrToE2_EeIMOR_b_MKeyStrToE2
        (EeIMOR_b_MKeyStrToE2);

    /* Outport: '<Root>/EeIMOR_b_CntrlEncdResFlag_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_b_CntrlEncdResFlag'
     */
    Rte_Write_EeIMOR_b_CntrlEncdResFlag_EeIMOR_b_CntrlEncdResFlag
        (EeIMOR_b_CntrlEncdResFlag);

    /* Outport: '<Root>/EeIMOR_b_CodeRecCmplt_Mem_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_b_CodeRecCmplt_Mem'
     */
    Rte_Write_EeIMOR_b_CodeRecCmplt_Mem_EeIMOR_b_CodeRecCmplt_Mem
        (EeIMOR_b_CodeRecCmplt_Mem);

    /* Outport: '<Root>/EeIMOR_b_MMKey1org22Flag_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_b_MMKey1org22Flag'
     */
    Rte_Write_EeIMOR_b_MMKey1org22Flag_EeIMOR_b_MMKey1org22Flag
        (EeIMOR_b_MMKey1org22Flag);

    /* Outport: '<Root>/EeIMOR_b_MMKey_3Flag_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_b_MMKey_3Flag'
     */
    Rte_Write_EeIMOR_b_MMKey_3Flag_EeIMOR_b_MMKey_3Flag
        (EeIMOR_b_MMKey_3Flag);

    /* Outport: '<Root>/EeIMOR_b_MMKey_4Flag_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_b_MMKey_4Flag'
     */
    Rte_Write_EeIMOR_b_MMKey_4Flag_EeIMOR_b_MMKey_4Flag
        (EeIMOR_b_MMKey_4Flag);

    /* Outport: '<Root>/EeIMOR_b_MMKey_5Flag_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_b_MMKey_5Flag'
     */
    Rte_Write_EeIMOR_b_MMKey_5Flag_EeIMOR_b_MMKey_5Flag
        (EeIMOR_b_MMKey_5Flag);

    /* Outport: '<Root>/EeIMOR_b_MMKey_6Flag_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_b_MMKey_6Flag'
     */
    Rte_Write_EeIMOR_b_MMKey_6Flag_EeIMOR_b_MMKey_6Flag
        (EeIMOR_b_MMKey_6Flag);

    /* SignalConversion generated from: '<S7>/AeIMOR_b_UpdtAuthStat_Pwdn_Strimm_Out' */
#if Rte_SysCon_Variant_IMOR_1

    /* S-Function (fcgen): '<S7>/FcnCallGen' */
    /* Outputs for Function Call SubSystem: '<S7>/Reset_Authentication' */
    /* SignalConversion generated from: '<S403>/AeIMOR_b_UpdtAuthStat_Pwdn_Strimm_Out' */
    IMOR_ac_B.OutportBufferForAeIMOR_b_UpdtAuthStat_Pw = false;

    /* End of Outputs for SubSystem: '<S7>/Reset_Authentication' */

    /* Outport: '<Root>/AeIMOR_b_UpdtAuthStat_Strimm_out' */
    Rte_Write_AeIMOR_b_UpdtAuthStat_AeIMOR_b_UpdtAuthStat
        (IMOR_ac_B.OutportBufferForAeIMOR_b_UpdtAuthStat_Pw);

    /* End of Outputs for S-Function (fcgen): '<S7>/FcnCallGen' */
#endif

    /* End of SignalConversion generated from: '<S7>/AeIMOR_b_UpdtAuthStat_Pwdn_Strimm_Out' */

    /* Outport: '<Root>/EeIMOR_b_AuthCmd00_InFlag_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_b_AuthCmd00_InFlag'
     */
    Rte_Write_EeIMOR_b_AuthCmd00_InFlag_EeIMOR_b_AuthCmd00_InFlag
        (EeIMOR_b_AuthCmd00_InFlag);

    /* Outport: '<Root>/EeIMOR_b_AuthCmd01_InFlag_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_b_AuthCmd01_InFlag'
     */
    Rte_Write_EeIMOR_b_AuthCmd01_InFlag_EeIMOR_b_AuthCmd01_InFlag
        (EeIMOR_b_AuthCmd01_InFlag);

    /* Outport: '<Root>/EeIMOR_b_AuthCmd02_InFlag_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_b_AuthCmd02_InFlag'
     */
    Rte_Write_EeIMOR_b_AuthCmd02_InFlag_EeIMOR_b_AuthCmd02_InFlag
        (EeIMOR_b_AuthCmd02_InFlag);

    /* Outport: '<Root>/EeIMOR_b_AuthCmd03_InFlag_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_b_AuthCmd03_InFlag'
     */
    Rte_Write_EeIMOR_b_AuthCmd03_InFlag_EeIMOR_b_AuthCmd03_InFlag
        (EeIMOR_b_AuthCmd03_InFlag);

    /* Outport: '<Root>/EeIMOR_b_AuthCmd04_InFlag_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_b_AuthCmd04_InFlag'
     */
    Rte_Write_EeIMOR_b_AuthCmd04_InFlag_EeIMOR_b_AuthCmd04_InFlag
        (EeIMOR_b_AuthCmd04_InFlag);

    /* Outport: '<Root>/EeIMOR_b_AuthCmd05_InFlag_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_b_AuthCmd05_InFlag'
     */
    Rte_Write_EeIMOR_b_AuthCmd05_InFlag_EeIMOR_b_AuthCmd05_InFlag
        (EeIMOR_b_AuthCmd05_InFlag);

    /* Outport: '<Root>/EeIMOR_b_AuthCmd06_InFlag_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_b_AuthCmd06_InFlag'
     */
    Rte_Write_EeIMOR_b_AuthCmd06_InFlag_EeIMOR_b_AuthCmd06_InFlag
        (EeIMOR_b_AuthCmd06_InFlag);

    /* Outport: '<Root>/EeIMOR_b_AuthCmd07_InFlag_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_b_AuthCmd07_InFlag'
     */
    Rte_Write_EeIMOR_b_AuthCmd07_InFlag_EeIMOR_b_AuthCmd07_InFlag
        (EeIMOR_b_AuthCmd07_InFlag);

    /* Outport: '<Root>/EeIMOR_b_AuthCmd08_InFlag_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_b_AuthCmd08_InFlag'
     */
    Rte_Write_EeIMOR_b_AuthCmd08_InFlag_EeIMOR_b_AuthCmd08_InFlag
        (EeIMOR_b_AuthCmd08_InFlag);

    /* Outport: '<Root>/EeIMOR_b_AuthCmd09_InFlag_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_b_AuthCmd09_InFlag'
     */
    Rte_Write_EeIMOR_b_AuthCmd09_InFlag_EeIMOR_b_AuthCmd09_InFlag
        (EeIMOR_b_AuthCmd09_InFlag);

    /* Outport: '<Root>/EeIMOR_b_AuthCmd10_InFlag_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_b_AuthCmd10_InFlag'
     */
    Rte_Write_EeIMOR_b_AuthCmd10_InFlag_EeIMOR_b_AuthCmd10_InFlag
        (EeIMOR_b_AuthCmd10_InFlag);

    /* Outport: '<Root>/EeIMOR_b_AuthCmd11_InFlag_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_b_AuthCmd11_InFlag'
     */
    Rte_Write_EeIMOR_b_AuthCmd11_InFlag_EeIMOR_b_AuthCmd11_InFlag
        (EeIMOR_b_AuthCmd11_InFlag);

    /* Outport: '<Root>/EeIMOR_b_AuthCmd12_InFlag_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_b_AuthCmd12_InFlag'
     */
    Rte_Write_EeIMOR_b_AuthCmd12_InFlag_EeIMOR_b_AuthCmd12_InFlag
        (EeIMOR_b_AuthCmd12_InFlag);

    /* Outport: '<Root>/EeIMOR_b_AuthCmd13_InFlag_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_b_AuthCmd13_InFlag'
     */
    Rte_Write_EeIMOR_b_AuthCmd13_InFlag_EeIMOR_b_AuthCmd13_InFlag
        (EeIMOR_b_AuthCmd13_InFlag);

    /* Outport: '<Root>/EeIMOR_b_AuthCmd14_InFlag_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_b_AuthCmd14_InFlag'
     */
    Rte_Write_EeIMOR_b_AuthCmd14_InFlag_EeIMOR_b_AuthCmd14_InFlag
        (EeIMOR_b_AuthCmd14_InFlag);

    /* Outport: '<Root>/EeIMOR_b_AuthCmd15_InFlag_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_b_AuthCmd15_InFlag'
     */
    Rte_Write_EeIMOR_b_AuthCmd15_InFlag_EeIMOR_b_AuthCmd15_InFlag
        (EeIMOR_b_AuthCmd15_InFlag);

    /* Outport: '<Root>/EeIMOR_b_AuthCmdCntrlEncdRespFlag_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/EeIMOR_b_AuthCmdCntrlEncdRespFlag'
     */
    
        Rte_Write_EeIMOR_b_AuthCmdCntrlEncdRespFlag_EeIMOR_b_AuthCmdCntrlEncdRespFlag
        (EeIMOR_b_AuthCmdCntrlEncdRespFlag);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, IMOR_CODE) IMOR_PwrOn
{

#if Rte_SysCon_Variant_IMOR_1

    boolean rtb_OutportBufferForVeIMOR_b_RndNumDone_;

#endif

#if Rte_SysCon_Variant_IMOR_1

    boolean rtb_OutportBufferForVeIMOR_b_RstImmoAuth;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/IMOR_PwrOn'
     */
    /* S-Function (fcgen): '<S8>/FcnCallGen' incorporates:
     *  SubSystem: '<S8>/DSM_Init'
     */
    /* DataStoreWrite: '<S404>/EeIMOR_b_AuthCmdCntrlEncdRespFlag' incorporates:
     *  Inport: '<Root>/EeIMOR_b_AuthCmdCntrlEncdRespFlag_PM_In'
     */
    
        Rte_Read_EeIMOR_b_AuthCmdCntrlEncdRespFlag_Rx_EeIMOR_b_AuthCmdCntrlEncdRespFlag
        ((&(EeIMOR_b_AuthCmdCntrlEncdRespFlag)));

    /* DataStoreWrite: '<S404>/EeIMOR_b_AuthCmd15_InFlag' incorporates:
     *  Inport: '<Root>/EeIMOR_b_AuthCmd15_InFlag_PM_In'
     */
    Rte_Read_EeIMOR_b_AuthCmd15_InFlag_Rx_EeIMOR_b_AuthCmd15_InFlag
        ((&(EeIMOR_b_AuthCmd15_InFlag)));

    /* DataStoreWrite: '<S404>/EeIMOR_b_AuthCmd14_InFlag' incorporates:
     *  Inport: '<Root>/EeIMOR_b_AuthCmd14_InFlag_PM_In'
     */
    Rte_Read_EeIMOR_b_AuthCmd14_InFlag_Rx_EeIMOR_b_AuthCmd14_InFlag
        ((&(EeIMOR_b_AuthCmd14_InFlag)));

    /* DataStoreWrite: '<S404>/EeIMOR_b_AuthCmd13_InFlag' incorporates:
     *  Inport: '<Root>/EeIMOR_b_AuthCmd13_InFlag_PM_In'
     */
    Rte_Read_EeIMOR_b_AuthCmd13_InFlag_Rx_EeIMOR_b_AuthCmd13_InFlag
        ((&(EeIMOR_b_AuthCmd13_InFlag)));

    /* DataStoreWrite: '<S404>/EeIMOR_b_AuthCmd12_InFlag' incorporates:
     *  Inport: '<Root>/EeIMOR_b_AuthCmd12_InFlag_PM_In'
     */
    Rte_Read_EeIMOR_b_AuthCmd12_InFlag_Rx_EeIMOR_b_AuthCmd12_InFlag
        ((&(EeIMOR_b_AuthCmd12_InFlag)));

    /* DataStoreWrite: '<S404>/EeIMOR_b_AuthCmd11_InFlag' incorporates:
     *  Inport: '<Root>/EeIMOR_b_AuthCmd11_InFlag_PM_In'
     */
    Rte_Read_EeIMOR_b_AuthCmd11_InFlag_Rx_EeIMOR_b_AuthCmd11_InFlag
        ((&(EeIMOR_b_AuthCmd11_InFlag)));

    /* DataStoreWrite: '<S404>/EeIMOR_b_AuthCmd10_InFlag' incorporates:
     *  Inport: '<Root>/EeIMOR_b_AuthCmd10_InFlag_PM_In'
     */
    Rte_Read_EeIMOR_b_AuthCmd10_InFlag_Rx_EeIMOR_b_AuthCmd10_InFlag
        ((&(EeIMOR_b_AuthCmd10_InFlag)));

    /* DataStoreWrite: '<S404>/EeIMOR_b_AuthCmd09_InFlag' incorporates:
     *  Inport: '<Root>/EeIMOR_b_AuthCmd09_InFlag_PM_In'
     */
    Rte_Read_EeIMOR_b_AuthCmd09_InFlag_Rx_EeIMOR_b_AuthCmd09_InFlag
        ((&(EeIMOR_b_AuthCmd09_InFlag)));

    /* DataStoreWrite: '<S404>/EeIMOR_b_AuthCmd08_InFlag' incorporates:
     *  Inport: '<Root>/EeIMOR_b_AuthCmd08_InFlag_PM_In'
     */
    Rte_Read_EeIMOR_b_AuthCmd08_InFlag_Rx_EeIMOR_b_AuthCmd08_InFlag
        ((&(EeIMOR_b_AuthCmd08_InFlag)));

    /* DataStoreWrite: '<S404>/EeIMOR_b_AuthCmd07_InFlag' incorporates:
     *  Inport: '<Root>/EeIMOR_b_AuthCmd07_InFlag_PM_In'
     */
    Rte_Read_EeIMOR_b_AuthCmd07_InFlag_Rx_EeIMOR_b_AuthCmd07_InFlag
        ((&(EeIMOR_b_AuthCmd07_InFlag)));

    /* DataStoreWrite: '<S404>/EeIMOR_b_AuthCmd06_InFlag' incorporates:
     *  Inport: '<Root>/EeIMOR_b_AuthCmd06_InFlag_PM_In'
     */
    Rte_Read_EeIMOR_b_AuthCmd06_InFlag_Rx_EeIMOR_b_AuthCmd06_InFlag
        ((&(EeIMOR_b_AuthCmd06_InFlag)));

    /* DataStoreWrite: '<S404>/EeIMOR_b_AuthCmd05_InFlag' incorporates:
     *  Inport: '<Root>/EeIMOR_b_AuthCmd05_InFlag_PM_In'
     */
    Rte_Read_EeIMOR_b_AuthCmd05_InFlag_Rx_EeIMOR_b_AuthCmd05_InFlag
        ((&(EeIMOR_b_AuthCmd05_InFlag)));

    /* DataStoreWrite: '<S404>/EeIMOR_b_AuthCmd04_InFlag' incorporates:
     *  Inport: '<Root>/EeIMOR_b_AuthCmd04_InFlag_PM_In'
     */
    Rte_Read_EeIMOR_b_AuthCmd04_InFlag_Rx_EeIMOR_b_AuthCmd04_InFlag
        ((&(EeIMOR_b_AuthCmd04_InFlag)));

    /* DataStoreWrite: '<S404>/EeIMOR_b_AuthCmd03_InFlag' incorporates:
     *  Inport: '<Root>/EeIMOR_b_AuthCmd03_InFlag_PM_In'
     */
    Rte_Read_EeIMOR_b_AuthCmd03_InFlag_Rx_EeIMOR_b_AuthCmd03_InFlag
        ((&(EeIMOR_b_AuthCmd03_InFlag)));

    /* DataStoreWrite: '<S404>/EeIMOR_b_AuthCmd02_InFlag' incorporates:
     *  Inport: '<Root>/EeIMOR_b_AuthCmd02_InFlag_PM_In'
     */
    Rte_Read_EeIMOR_b_AuthCmd02_InFlag_Rx_EeIMOR_b_AuthCmd02_InFlag
        ((&(EeIMOR_b_AuthCmd02_InFlag)));

    /* DataStoreWrite: '<S404>/EeIMOR_b_AuthCmd01_InFlag' incorporates:
     *  Inport: '<Root>/EeIMOR_b_AuthCmd01_InFlag_PM_In'
     */
    Rte_Read_EeIMOR_b_AuthCmd01_InFlag_Rx_EeIMOR_b_AuthCmd01_InFlag
        ((&(EeIMOR_b_AuthCmd01_InFlag)));

    /* DataStoreWrite: '<S404>/EeIMOR_b_AuthCmd00_InFlag' incorporates:
     *  Inport: '<Root>/EeIMOR_b_AuthCmd00_InFlag_PM_In'
     */
    Rte_Read_EeIMOR_b_AuthCmd00_InFlag_Rx_EeIMOR_b_AuthCmd00_InFlag
        ((&(EeIMOR_b_AuthCmd00_InFlag)));

    /* DataStoreWrite: '<S404>/EeIMOR_b_MMKey_6Flag' incorporates:
     *  Inport: '<Root>/EeIMOR_b_MMKey_6Flag_PM_In'
     */
    Rte_Read_EeIMOR_b_MMKey_6Flag_Rx_EeIMOR_b_MMKey_6Flag
        ((&(EeIMOR_b_MMKey_6Flag)));

    /* DataStoreWrite: '<S404>/EeIMOR_b_MMKey_5Flag' incorporates:
     *  Inport: '<Root>/EeIMOR_b_MMKey_5Flag_PM_In'
     */
    Rte_Read_EeIMOR_b_MMKey_5Flag_Rx_EeIMOR_b_MMKey_5Flag
        ((&(EeIMOR_b_MMKey_5Flag)));

    /* DataStoreWrite: '<S404>/EeIMOR_b_MMKey_4Flag' incorporates:
     *  Inport: '<Root>/EeIMOR_b_MMKey_4Flag_PM_In'
     */
    Rte_Read_EeIMOR_b_MMKey_4Flag_Rx_EeIMOR_b_MMKey_4Flag
        ((&(EeIMOR_b_MMKey_4Flag)));

    /* DataStoreWrite: '<S404>/EeIMOR_b_MMKey_3Flag' incorporates:
     *  Inport: '<Root>/EeIMOR_b_MMKey_3Flag_PM_In'
     */
    Rte_Read_EeIMOR_b_MMKey_3Flag_Rx_EeIMOR_b_MMKey_3Flag
        ((&(EeIMOR_b_MMKey_3Flag)));

    /* DataStoreWrite: '<S404>/EeIMOR_b_MMKey1org22Flag' incorporates:
     *  Inport: '<Root>/EeIMOR_b_MMKey1org22Flag_PM_In'
     */
    Rte_Read_EeIMOR_b_MMKey1org22Flag_Rx_EeIMOR_b_MMKey1org22Flag
        ((&(EeIMOR_b_MMKey1org22Flag)));

    /* DataStoreWrite: '<S404>/EeIMOR_b_CodeRecCmplt_Mem' incorporates:
     *  Inport: '<Root>/EeIMOR_b_CodeRecCmplt_Mem_PM_In'
     */
    Rte_Read_EeIMOR_b_CodeRecCmplt_Mem_Rx_EeIMOR_b_CodeRecCmplt_Mem
        ((&(EeIMOR_b_CodeRecCmplt_Mem)));

    /* DataStoreWrite: '<S404>/EeIMOR_b_CntrlEncdResFlag' incorporates:
     *  Inport: '<Root>/EeIMOR_b_CntrlEncdResFlag_PM_In'
     */
    Rte_Read_EeIMOR_b_CntrlEncdResFlag_Rx_EeIMOR_b_CntrlEncdResFlag
        ((&(EeIMOR_b_CntrlEncdResFlag)));

    /* DataStoreWrite: '<S404>/EeIMOR_b_MKeyStrToE2' incorporates:
     *  Inport: '<Root>/EeIMOR_b_MKeyStrToE2_PM_In'
     */
    Rte_Read_EeIMOR_b_MKeyStrToE2_Rx_EeIMOR_b_MKeyStrToE2
        ((&(EeIMOR_b_MKeyStrToE2)));

    /* DataStoreWrite: '<S404>/EeIMOR_y_MMKey1org21_Mem' incorporates:
     *  Inport: '<Root>/EeIMOR_y_MMKey1org21_Mem_PM_In'
     */
    Rte_Read_EeIMOR_y_MMKey1org21_Mem_Rx_EeIMOR_y_MMKey1org21_Mem
        ((&(EeIMOR_y_MMKey1org21_Mem)));

    /* DataStoreWrite: '<S404>/EeIMOR_y_MMKey_6_Mem' incorporates:
     *  Inport: '<Root>/EeIMOR_y_MMKey_6_Mem_PM_In'
     */
    Rte_Read_EeIMOR_y_MMKey_6_Mem_Rx_EeIMOR_y_MMKey_6_Mem
        ((&(EeIMOR_y_MMKey_6_Mem)));

    /* DataStoreWrite: '<S404>/EeIMOR_b_MMKey1org21Flag' incorporates:
     *  Inport: '<Root>/EeIMOR_b_MMKey1org21Flag_PM_In'
     */
    Rte_Read_EeIMOR_b_MMKey1org21Flag_Rx_EeIMOR_b_MMKey1org21Flag
        ((&(EeIMOR_b_MMKey1org21Flag)));

    /* DataStoreWrite: '<S404>/EeIMOR_y_MMKey_5_Mem' incorporates:
     *  Inport: '<Root>/EeIMOR_y_MMKey_5_Mem_PM_In'
     */
    Rte_Read_EeIMOR_y_MMKey_5_Mem_Rx_EeIMOR_y_MMKey_5_Mem
        ((&(EeIMOR_y_MMKey_5_Mem)));

    /* DataStoreWrite: '<S404>/EeIMOR_e_BuildAssemblyModeStat' incorporates:
     *  Inport: '<Root>/EeIMOR_e_BuildAssemblyModeStat_PM_In'
     */
    
        Rte_Read_EeIMOR_e_BuildAssemblyModeStat_Rx_EeIMOR_e_BuildAssemblyModeStat
        ((&(EeIMOR_e_BuildAssemblyModeStat)));

    /* DataStoreWrite: '<S404>/EeIMOR_b_VC_VehCfg6_Stat_rec' incorporates:
     *  Inport: '<Root>/EeIMOR_b_VC_VehCfg6_Stat_rec_PM_In'
     */
    Rte_Read_EeIMOR_b_VC_VehCfg6_Stat_rec_Rx_EeIMOR_b_VC_VehCfg6_Stat_rec
        ((&(EeIMOR_b_VC_VehCfg6_Stat_rec)));

    /* DataStoreWrite: '<S404>/EeIMOR_b_VC_VehCfg4_Stat_rec' incorporates:
     *  Inport: '<Root>/EeIMOR_b_VC_VehCfg4_Stat_rec_PM_In'
     */
    Rte_Read_EeIMOR_b_VC_VehCfg4_Stat_rec_Rx_EeIMOR_b_VC_VehCfg4_Stat_rec
        ((&(EeIMOR_b_VC_VehCfg4_Stat_rec)));

    /* DataStoreWrite: '<S404>/EeIMOR_b_VC_VehCfg3_Stat_rec' incorporates:
     *  Inport: '<Root>/EeIMOR_b_VC_VehCfg3_Stat_rec_PM_In'
     */
    Rte_Read_EeIMOR_b_VC_VehCfg3_Stat_rec_Rx_EeIMOR_b_VC_VehCfg3_Stat_rec
        ((&(EeIMOR_b_VC_VehCfg3_Stat_rec)));

    /* DataStoreWrite: '<S404>/EeIMOR_b_VC_VehCfg2_Stat_rec' incorporates:
     *  Inport: '<Root>/EeIMOR_b_VC_VehCfg2_Stat_rec_PM_In'
     */
    Rte_Read_EeIMOR_b_VC_VehCfg2_Stat_rec_Rx_EeIMOR_b_VC_VehCfg2_Stat_rec
        ((&(EeIMOR_b_VC_VehCfg2_Stat_rec)));

    /* DataStoreWrite: '<S404>/EeIMOR_y_MMKey_4_Mem' incorporates:
     *  Inport: '<Root>/EeIMOR_y_MMKey_4_Mem_PM_In'
     */
    Rte_Read_EeIMOR_y_MMKey_4_Mem_Rx_EeIMOR_y_MMKey_4_Mem
        ((&(EeIMOR_y_MMKey_4_Mem)));

    /* DataStoreWrite: '<S404>/EeIMOR_b_ORC_Health_rec' incorporates:
     *  Inport: '<Root>/EeIMOR_b_ORC_Health_rec_PM_In'
     */
    Rte_Read_EeIMOR_b_ORC_Health_rec_Rx_EeIMOR_b_ORC_Health_rec
        ((&(EeIMOR_b_ORC_Health_rec)));

    /* DataStoreWrite: '<S404>/EeIMOR_M_Rand4_prev' incorporates:
     *  Inport: '<Root>/EeIMOR_M_Rand4_prev_PM_In'
     */
    Rte_Read_EeIMOR_M_Rand4_prev_Rx_EeIMOR_M_Rand4_prev
        ((&(EeIMOR_M_Rand4_prev)));

    /* DataStoreWrite: '<S404>/EeIMOR_b_ImmoAuthValid_Mem' incorporates:
     *  Inport: '<Root>/EeIMOR_b_ImmoAuthValid_Mem_PM_In'
     */
    Rte_Read_EeIMOR_b_ImmoAuthValid_Mem_Rx_EeIMOR_b_ImmoAuthValid_Mem
        ((&(EeIMOR_b_ImmoAuthValid_Mem)));

    /* DataStoreWrite: '<S404>/EeIMOR_M_Rand3_prev' incorporates:
     *  Inport: '<Root>/EeIMOR_M_Rand3_prev_PM_In'
     */
    Rte_Read_EeIMOR_M_Rand3_prev_Rx_EeIMOR_M_Rand3_prev
        ((&(EeIMOR_M_Rand3_prev)));

    /* DataStoreWrite: '<S404>/EeIMOR_M_Rand2_prev' incorporates:
     *  Inport: '<Root>/EeIMOR_M_Rand2_prev_PM_In'
     */
    Rte_Read_EeIMOR_M_Rand2_prev_Rx_EeIMOR_M_Rand2_prev
        ((&(EeIMOR_M_Rand2_prev)));

    /* DataStoreWrite: '<S404>/EeIMOR_M_Rand1_prev' incorporates:
     *  Inport: '<Root>/EeIMOR_M_Rand1_prev_PM_In'
     */
    Rte_Read_EeIMOR_M_Rand1_prev_Rx_EeIMOR_M_Rand1_prev
        ((&(EeIMOR_M_Rand1_prev)));

    /* DataStoreWrite: '<S404>/EeIMOR_b_ImmoAuthValid_ECMMem' incorporates:
     *  Inport: '<Root>/EeIMOR_b_ImmoAuthValid_ECMMem_PM_In'
     */
    
        Rte_Read_EeIMOR_b_ImmoAuthValid_ECMMem_Rx_EeIMOR_b_ImmoAuthValid_ECMMem
        ((&(EeIMOR_b_ImmoAuthValid_ECMMem)));

    /* DataStoreWrite: '<S404>/EeIMOR_y_MMKey_3_Mem' incorporates:
     *  Inport: '<Root>/EeIMOR_y_MMKey_3_Mem_PM_In'
     */
    Rte_Read_EeIMOR_y_MMKey_3_Mem_Rx_EeIMOR_y_MMKey_3_Mem
        ((&(EeIMOR_y_MMKey_3_Mem)));

    /* DataStoreWrite: '<S404>/EeIMOR_y_MMKey1org22_Mem' incorporates:
     *  Inport: '<Root>/EeIMOR_y_MMKey1org22_Mem_PM_In'
     */
    Rte_Read_EeIMOR_y_MMKey1org22_Mem_Rx_EeIMOR_y_MMKey1org22_Mem
        ((&(EeIMOR_y_MMKey1org22_Mem)));

#if Rte_SysCon_Variant_IMOR_1

    /* Outputs for Function Call SubSystem: '<S8>/IMOC_Init' */
    /* Switch: '<S405>/Switch1' incorporates:
     *  Constant: '<S405>/Constant Value3'
     *  DataStoreRead: '<S405>/Data Store Read2'
     *  RelationalOperator: '<S405>/Comparison1'
     */
    if (0.0F == EeIMOR_M_Rand2_prev)
    {
        /* DataStoreWrite: '<S405>/Data Store Write2' incorporates:
         *  Constant: '<S405>/Constant Value2'
         */
        EeIMOR_M_Rand2_prev = 149.43F;
    }

    /* End of Switch: '<S405>/Switch1' */

    /* Switch: '<S405>/Switch3' incorporates:
     *  Constant: '<S405>/Constant Value5'
     *  DataStoreRead: '<S405>/Data Store Read4'
     *  RelationalOperator: '<S405>/Comparison2'
     */
    if (0.0F == EeIMOR_M_Rand4_prev)
    {
        /* DataStoreWrite: '<S405>/Data Store Write4' incorporates:
         *  Constant: '<S405>/Constant Value7'
         */
        EeIMOR_M_Rand4_prev = 127.19F;
    }

    /* End of Switch: '<S405>/Switch3' */

    /* Switch: '<S405>/Switch2' incorporates:
     *  Constant: '<S405>/Constant Value4'
     *  DataStoreRead: '<S405>/Data Store Read3'
     *  RelationalOperator: '<S405>/Comparison3'
     */
    if (0.0F == EeIMOR_M_Rand3_prev)
    {
        /* DataStoreWrite: '<S405>/Data Store Write3' incorporates:
         *  Constant: '<S405>/Constant Value6'
         */
        EeIMOR_M_Rand3_prev = 67.31F;
    }

    /* End of Switch: '<S405>/Switch2' */

    /* Switch: '<S405>/Switch' incorporates:
     *  Constant: '<S405>/Constant Value14'
     *  DataStoreRead: '<S405>/Data Store Read1'
     *  RelationalOperator: '<S405>/Comparison4'
     */
    if (0.0F == EeIMOR_M_Rand1_prev)
    {
        /* DataStoreWrite: '<S405>/Data Store Write1' incorporates:
         *  Constant: '<S405>/Constant Value1'
         */
        EeIMOR_M_Rand1_prev = 241.11F;
    }

    /* End of Switch: '<S405>/Switch' */

    /* SignalConversion generated from: '<S405>/VeIMOR_b_AuthValidInit' */
    IMOR_ac_B.VeIMOR_b_AuthValidInit = false;

    /* SignalConversion generated from: '<S405>/VeIMOR_b_RstImmoAuthInMemInit' */
    IMOR_ac_B.VeIMOR_b_RstImmoAuthInMemInit = false;

    /* SignalConversion generated from: '<S405>/VeIMOR_b_RndNumDone_Init' */
    IMOR_ac_B.VeIMOR_b_RndNumDone_Init = false;

    /* End of Outputs for SubSystem: '<S8>/IMOC_Init' */
    /* End of Outputs for S-Function (fcgen): '<S8>/FcnCallGen' */
#endif

    /* S-Function (fcgen): '<S8>/FcnCallGen' incorporates:
     *  SubSystem: '<S8>/InitIMOO'
     */
    /* SignalConversion generated from: '<S406>/Variant Source' incorporates:
     *  Constant: '<S406>/Constant Value2'
     *  Constant: '<S412>/Constant'
     *  Constant: '<S413>/Calib'
     */
#if Rte_SysCon_Variant_IMOR_2

    IMOR_ac_B.Calib = KeIMOR_b_AuthenticationValid;

    /* VariantMerge generated from: '<S406>/Variant Source' incorporates:
     *  Constant: '<S413>/Calib'
     */
    IMOR_ac_B.VariantMerge_For_Variant_Source_Variant_ = IMOR_ac_B.Calib;

#else

    IMOR_ac_B.ConstantValue2 = false;

    /* VariantMerge generated from: '<S406>/Variant Source' incorporates:
     *  Constant: '<S406>/Constant Value2'
     *  SignalConversion generated from: '<S406>/Variant Source'
     */
    IMOR_ac_B.VariantMerge_For_Variant_Source_Variant_ =
        IMOR_ac_B.ConstantValue2;
    IMOR_ac_B.Constant = CeIMOR_e_ImmoNotPaired;

#endif

    /* End of SignalConversion generated from: '<S406>/Variant Source' */

    /* SignalConversion generated from: '<S406>/LeIMOR_e_IMORStat_Init' incorporates:
     *  Constant: '<S409>/Constant'
     */
    IMOR_ac_B.LeIMOR_e_IMORStat_Init = IMOR_ac_ConstB.Constant_i;

    /* SignalConversion generated from: '<S406>/LeIMOR_t_StateTimer_Init' */
    IMOR_ac_B.LeIMOR_t_StateTimer_Init = 0.0F;

    /* SignalConversion generated from: '<S406>/LeIMOR_cnt_IMORRecCount_Init' */
    IMOR_ac_B.LeIMOR_Cnt_IMORRecCnt_Init = 0.0F;

    /* SignalConversion generated from: '<S406>/LeIMOR_y_CntrlEncdReq_Init' */
    IMOR_ac_B.LeIMOR_y_CntrlEncdReq_Init = 0U;

    /* SignalConversion generated from: '<S406>/LeIMOR_y_rnd_1_Init' */
    IMOR_ac_B.LeIMOR_y_rnd_1_Init = 0U;

    /* SignalConversion generated from: '<S406>/LeIMOR_y_rnd_2_Init' */
    IMOR_ac_B.LeIMOR_y_rnd_2_Init = 0U;

    /* SignalConversion generated from: '<S406>/LeIMOR_y_rnd_3_Init' */
    IMOR_ac_B.LeIMOR_y_rnd_3_Init = 0U;

    /* SignalConversion generated from: '<S406>/LeIMOR_y_rnd_4_Init' */
    IMOR_ac_B.LeIMOR_y_rnd_4_Init = 0U;

    /* SignalConversion generated from: '<S406>/LeIMOR_cnt_CodeVrfyCount_Init' */
    IMOR_ac_B.LeIMOR_Cnt_CodeVrfyCnt_Init = 0.0F;

    /* SignalConversion generated from: '<S406>/LeIMOR_y_MiniKryptF1_1_Init' */
    IMOR_ac_B.LeIMOR_y_MiniKryptF1_1_Init = 0U;

    /* SignalConversion generated from: '<S406>/LeIMOR_y_MiniKryptF1_2_Init' */
    IMOR_ac_B.LeIMOR_y_MiniKryptF1_2_Init = 0U;

    /* SignalConversion generated from: '<S406>/LeIMOR_y_MiniKryptG1_1_Init' */
    IMOR_ac_B.LeIMOR_y_MiniKryptG1_1_Init = 0U;

    /* SignalConversion generated from: '<S406>/LeIMOR_y_MiniKryptG1_2_Init' */
    IMOR_ac_B.LeIMOR_y_MiniKryptG1_2_Init = 0U;

    /* SignalConversion generated from: '<S406>/LeIMOR_b_WrtMKeyToE2_Init' */
    IMOR_ac_B.LeIMOR_b_WrtMKeyToE2_Init = false;

    /* SignalConversion generated from: '<S406>/LeIMOR_b_WrtCRCmpltToE2_Init' */
    IMOR_ac_B.LeIMOR_b_WrtCRCmpltToE2_Init = false;

    /* SignalConversion generated from: '<S406>/LeIMOR_d_G1_Init' */
    IMOR_ac_B.LeIMOR_d_G1_Init = 0U;

    /* SignalConversion generated from: '<S406>/LeIMOR_d_RandonNumber_Init' */
    IMOR_ac_B.LeIMOR_d_RandonNumber_Init = 0U;

    /* SignalConversion generated from: '<S406>/LeIMOR_d_SecKey_h_Init' */
    IMOR_ac_B.LeIMOR_d_SecKey_h_Init = 0U;

    /* SignalConversion generated from: '<S406>/LeIMOR_d_SecKey_l_Init' */
    IMOR_ac_B.LeIMOR_d_SecKey_l_Init = 0U;

    /* SignalConversion generated from: '<S406>/LeIMOR_b_FstRstFn_Init' */
    IMOR_ac_B.LeIMOR_b_FstRstFn_Init = false;

    /* SignalConversion generated from: '<S406>/LeIMOR_b_CANMsgSndReq_Init' */
    IMOR_ac_B.LeIMOR_b_CANMsgSndReq_Init = false;

    /* SignalConversion generated from: '<S406>/LeIMOR_e_HCPImmoStatCanC_Init' incorporates:
     *  Constant: '<S410>/Constant'
     */
    IMOR_ac_B.LeIMOR_e_HCPImmoStatCanC_Init = IMOR_ac_ConstB.Constant_l;

    /* SignalConversion generated from: '<S406>/LeIMOR_e_EngDsbldToIC_Init' */
    IMOR_ac_B.LeIMOR_e_EngDsbldToIC_Init = false;

    /* SignalConversion generated from: '<S406>/LeIMOR_b_ImmoSOPRequest_Init' */
    IMOR_ac_B.LeIMOR_b_ImmoSOPRequest_Init = false;

    /* SignalConversion generated from: '<S406>/LeIMOR_b_ECMPassed_Init' */
    IMOR_ac_B.LeIMOR_b_ECMPassed_Init = false;

    /* SignalConversion generated from: '<S406>/LeIMOR_e_ECMStat_Init' incorporates:
     *  Constant: '<S411>/Constant'
     */
    IMOR_ac_B.LeIMOR_e_ECMStat_Init = IMOR_ac_ConstB.Constant_e;

    /* SignalConversion generated from: '<S406>/LeIMOR_Cnt_SOPsentCnt_Init' */
    IMOR_ac_B.LeIMOR_Cnt_SOPsentCnt_Init = 0.0F;

    /* SignalConversion generated from: '<S406>/LeIMOR_t_ECMStateTimer_Init' */
    IMOR_ac_B.LeIMOR_t_ECMStateTimer_Init = 0.0F;

    /* SignalConversion generated from: '<S406>/LeIMOR_b_BCMNoVerifRespDID_Init' */
    IMOR_ac_B.LeIMOR_b_BCMNoVerifRespDID_Init = false;

    /* SignalConversion generated from: '<S406>/LeIMOR_b_BCMFailedVerif_Init' */
    IMOR_ac_B.LeIMOR_b_BCMFailedVerif_Init = false;

    /* SignalConversion generated from: '<S406>/LeIMOR_b_BCMRespTENVerify_Init' */
    IMOR_ac_B.LeIMOR_b_BCMRespTENVerify_Init = false;

    /* SignalConversion generated from: '<S406>/LeIMOR_b_BCMRespUCVerify_Init' */
    IMOR_ac_B.LeIMOR_b_BCMRespUCVerify_Init = false;

    /* SignalConversion generated from: '<S406>/LeIMOR_b_BCMRespBadG2Verify_Init' */
    IMOR_ac_B.LeIMOR_b_BCMRespBadG2Verify_Init = false;

    /* SignalConversion generated from: '<S406>/LeIMOR_b_BCMNoENQpResponse_Init' */
    IMOR_ac_B.LeIMOR_b_BCMNoENQpResponse_Init = false;

    /* SignalConversion generated from: '<S406>/LeIMOR_b_BCMRespTENRec_Init' */
    IMOR_ac_B.LeIMOR_b_BCMRespTENRec_Init = false;

    /* SignalConversion generated from: '<S406>/LeIMOR_b_BCMNoSecondRespRec_Init' */
    IMOR_ac_B.LeIMOR_b_BCMNoSecondRespRec_Init = false;

    /* SignalConversion generated from: '<S406>/LeIMOR_b_BCMNoPRAorMiniKeyRec_Init' */
    IMOR_ac_B.LeIMOR_b_BCMNoPRAorMiniKeyRec_Init = false;

    /* SignalConversion generated from: '<S406>/LeIMOR_b_BCMMiniKeyNotStoredRec_Init' */
    IMOR_ac_B.LeIMOR_b_BCMMiniKeyNotStoredRec_Init = false;

    /* SignalConversion generated from: '<S406>/LeIMOR_b_BCMFailedG1G2Rec_Init' */
    IMOR_ac_B.LeIMOR_b_BCMFailedG1G2Rec_Init = false;

    /* SignalConversion generated from: '<S406>/LeIMOR_b_ECMFailedRationality_Init' */
    IMOR_ac_B.LeIMOR_b_ECMFailedRationality_Init = false;

    /* SignalConversion generated from: '<S406>/LeIMOR_b_ECMWUnoHandshake_Init' */
    IMOR_ac_B.LeIMOR_b_ECMWUnoHandshake_Init = false;

    /* SignalConversion generated from: '<S406>/LeIMOR_b_ECMnoWU_Init' */
    IMOR_ac_B.LeIMOR_b_ECMnoWU_Init = false;

    /* SignalConversion generated from: '<S406>/LeIMOR_b_ECMNoSOPResp_Init' */
    IMOR_ac_B.LeIMOR_b_ECMNoSOPResp_Init = false;

    /* SignalConversion generated from: '<S406>/LeIMOR_b_HCPNotProg_Init' */
    IMOR_ac_B.LeIMOR_b_HCPNotProg_Init = false;

    /* SignalConversion generated from: '<S406>/LeIMOR_b_CANepTMsgSndReq_Init' */
    IMOR_ac_B.LeIMOR_b_CANepTMsgSndReq_Init = false;

    /* SignalConversion generated from: '<S406>/Variant Source1' incorporates:
     *  Constant: '<S414>/Calib'
     */
#if Rte_SysCon_Variant_IMOR_2

    IMOR_ac_B.Calib_e = KeIMOR_e_BuildAssemblyModeStat;

    /* VariantMerge generated from: '<S406>/Variant Source1' incorporates:
     *  Constant: '<S414>/Calib'
     */
    IMOR_ac_B.VariantMerge_For_Variant_Source_Varian_g = IMOR_ac_B.Calib_e;

#else

    /* VariantMerge generated from: '<S406>/Variant Source1' incorporates:
     *  Constant: '<S412>/Constant'
     *  SignalConversion generated from: '<S406>/Variant Source1'
     */
    IMOR_ac_B.VariantMerge_For_Variant_Source_Varian_g = IMOR_ac_B.Constant;

#endif

    /* End of SignalConversion generated from: '<S406>/Variant Source1' */

    /* SignalConversion generated from: '<S406>/LeIMOR_y_AuthCmd00_Init' */
    IMOR_ac_B.LeIMOR_y_AuthCmd00_Init = 0U;

    /* SignalConversion generated from: '<S406>/LeIMOR_y_AuthCmd01_Init' */
    IMOR_ac_B.LeIMOR_y_AuthCmd01_Init = 0U;

    /* SignalConversion generated from: '<S406>/LeIMOR_y_AuthCmd02_Init' */
    IMOR_ac_B.LeIMOR_y_AuthCmd02_Init = 0U;

    /* SignalConversion generated from: '<S406>/LeIMOR_y_AuthCmd03_Init' */
    IMOR_ac_B.LeIMOR_y_AuthCmd03_Init = 0U;

    /* SignalConversion generated from: '<S406>/LeIMOR_y_AuthCmd04_Init' */
    IMOR_ac_B.LeIMOR_y_AuthCmd04_Init = 0U;

    /* SignalConversion generated from: '<S406>/LeIMOR_y_AuthCmd05_Init' */
    IMOR_ac_B.LeIMOR_y_AuthCmd05_Init = 0U;

    /* SignalConversion generated from: '<S406>/LeIMOR_y_AuthCmd06_Init' */
    IMOR_ac_B.LeIMOR_y_AuthCmd06_Init = 0U;

    /* SignalConversion generated from: '<S406>/LeIMOR_y_AuthCmd07_Init' */
    IMOR_ac_B.LeIMOR_y_AuthCmd07_Init = 0U;

    /* SignalConversion generated from: '<S406>/LeIMOR_y_AuthCmd08_Init' */
    IMOR_ac_B.LeIMOR_y_AuthCmd08_Init = 0U;

    /* SignalConversion generated from: '<S406>/LeIMOR_y_AuthCmd09_Init' */
    IMOR_ac_B.LeIMOR_y_AuthCmd09_Init = 0U;

    /* SignalConversion generated from: '<S406>/LeIMOR_y_AuthCmd10_Init' */
    IMOR_ac_B.LeIMOR_y_AuthCmd10_Init = 0U;

    /* SignalConversion generated from: '<S406>/LeIMOR_y_AuthCmd11_Init' */
    IMOR_ac_B.LeIMOR_y_AuthCmd11_Init = 0U;

    /* SignalConversion generated from: '<S406>/LeIMOR_y_AuthCmd12_Init' */
    IMOR_ac_B.LeIMOR_y_AuthCmd12_Init = 0U;

    /* SignalConversion generated from: '<S406>/LeIMOR_y_AuthCmd13_Init' */
    IMOR_ac_B.LeIMOR_y_AuthCmd13_Init = 0U;

    /* SignalConversion generated from: '<S406>/LeIMOR_y_AuthCmd14_Init' */
    IMOR_ac_B.LeIMOR_y_AuthCmd14_Init = 0U;

    /* SignalConversion generated from: '<S406>/LeIMOR_y_AuthCmd15_Init' */
    IMOR_ac_B.LeIMOR_y_AuthCmd15_Init = 0U;

    /* SignalConversion generated from: '<S406>/LeIMOR_y_AuthCmdCntrlEncdReq_Init' */
    IMOR_ac_B.LeIMOR_y_AuthCmdCntrlEncdResp_Init = 0U;

    /* S-Function (fcgen): '<S8>/FcnCallGen' incorporates:
     *  SubSystem: '<S8>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S407>/VeIMOR_b_ORC_HealthFA_write' */
    IMOR_ac_B.OutportBufferForVeIMOR_b_ORC_HealthFA_wr = false;

    /* SignalConversion generated from: '<S407>/VeIMOR_b_VC_VehCfg2_StatFA_write' */
    IMOR_ac_B.OutportBufferForVeIMOR_b_VC_VehCfg2_Stat = false;

    /* SignalConversion generated from: '<S407>/VeIMOR_b_VC_VehCfg3_StatFA_write' */
    IMOR_ac_B.OutportBufferForVeIMOR_b_VC_VehCfg3_Stat = false;

    /* SignalConversion generated from: '<S407>/VeIMOR_b_VC_VehCfg4_StatFA_write' */
    IMOR_ac_B.OutportBufferForVeIMOR_b_VC_VehCfg4_Stat = false;

    /* SignalConversion generated from: '<S407>/VeIMOR_b_VC_VehCfg6_StatFA_write' */
    IMOR_ac_B.OutportBufferForVeIMOR_b_VC_VehCfg6_Stat = false;

    /* SignalConversion generated from: '<S407>/VeIMOR_b_ORC_Health_write' */
    IMOR_ac_B.OutportBufferForVeIMOR_b_ORC_Health_writ = false;

    /* SignalConversion generated from: '<S407>/VeIMOR_e_VC_VehCfg2_Stat_write' */
    IMOR_ac_B.OutportBufferForVeIMOR_e_VC_VehCfg2_Stat = 0;

    /* SignalConversion generated from: '<S407>/VeIMOR_e_VC_VehCfg3_Stat_write' */
    IMOR_ac_B.OutportBufferForVeIMOR_e_VC_VehCfg3_Stat = 0;

    /* SignalConversion generated from: '<S407>/VeIMOR_e_VC_VehCfg4_Stat_write' */
    IMOR_ac_B.OutportBufferForVeIMOR_e_VC_VehCfg4_Stat = 0;

    /* SignalConversion generated from: '<S407>/VeIMOR_e_VC_VehCfg6_Stat_write' */
    IMOR_ac_B.OutportBufferForVeIMOR_e_VC_VehCfg6_Stat = 0;

    /* SignalConversion generated from: '<S407>/VeIMOR_y_CntrlEncdResp_write' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_CntrlEncdResp_w = 0U;

    /* SignalConversion generated from: '<S407>/VeIMOR_y_MMKey1org21_write' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_MMKey1org21_wri = 0U;

    /* SignalConversion generated from: '<S407>/VeIMOR_y_MMKey1org22_write' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_MMKey1org22_wri = 0U;

    /* SignalConversion generated from: '<S407>/VeIMOR_y_MMKey_3_write' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_MMKey_3_write = 0U;

    /* SignalConversion generated from: '<S407>/VeIMOR_y_MMKey_4_write' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_MMKey_4_write = 0U;

    /* SignalConversion generated from: '<S407>/VeIMOR_y_MMKey_5_write' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_MMKey_5_write = 0U;

    /* SignalConversion generated from: '<S407>/VeIMOR_y_MMKey_6_write' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_MMKey_6_write = 0U;

    /* SignalConversion generated from: '<S407>/VeIMOR_e_FaultSts_ImmobKeyIncrt' incorporates:
     *  Constant: '<S415>/Constant'
     */
    IMOR_ac_B.OutportBufferForVeIMOR_e_FaultSts_ImmobK =
        IMOR_ac_ConstB.Constant_j;

    /* SignalConversion generated from: '<S407>/VeIMOR_e_FaultSts_SKIMNotStored' incorporates:
     *  Constant: '<S416>/Constant'
     */
    IMOR_ac_B.OutportBufferForVeIMOR_e_FaultSts_SKIMNo =
        IMOR_ac_ConstB.Constant_gm;

    /* SignalConversion generated from: '<S407>/VeIMOR_y_AuthCmd00_In_write' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd00_In_wr = 0U;

    /* SignalConversion generated from: '<S407>/VeIMOR_y_AuthCmd01_In_write' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd01_In_wr = 0U;

    /* SignalConversion generated from: '<S407>/VeIMOR_y_AuthCmd02_In_write' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd02_In_wr = 0U;

    /* SignalConversion generated from: '<S407>/VeIMOR_y_AuthCmd00_In_write3' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd00_In__j = 0U;

    /* SignalConversion generated from: '<S407>/VeIMOR_y_AuthCmd04_In_write' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd04_In_wr = 0U;

    /* SignalConversion generated from: '<S407>/VeIMOR_y_AuthCmd05_In_write' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd05_In_wr = 0U;

    /* SignalConversion generated from: '<S407>/VeIMOR_y_AuthCmd06_In_write' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd06_In_wr = 0U;

    /* SignalConversion generated from: '<S407>/VeIMOR_y_AuthCmd07_In_write' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd07_In_wr = 0U;

    /* SignalConversion generated from: '<S407>/VeIMOR_y_AuthCmd08_In_write' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd08_In_wr = 0U;

    /* SignalConversion generated from: '<S407>/VeIMOR_y_AuthCmd09_In_write' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd09_In_wr = 0U;

    /* SignalConversion generated from: '<S407>/VeIMOR_y_AuthCmd10_In_write' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd10_In_wr = 0U;

    /* SignalConversion generated from: '<S407>/VeIMOR_y_AuthCmd11_In_write' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd11_In_wr = 0U;

    /* SignalConversion generated from: '<S407>/VeIMOR_y_AuthCmd12_In_write' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd12_In_wr = 0U;

    /* SignalConversion generated from: '<S407>/VeIMOR_y_AuthCmd13_In_write' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd13_In_wr = 0U;

    /* SignalConversion generated from: '<S407>/VeIMOR_y_AuthCmd14_In_write' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd14_In_wr = 0U;

    /* SignalConversion generated from: '<S407>/VeIMOR_y_AuthCmd15_In_write' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd15_In_wr = 0U;

    /* SignalConversion generated from: '<S407>/VeIMOR_y_AuthCmdCntrlEncdResp_write' */
    IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmdCntrlEnc = 0U;

    /* End of Outputs for S-Function (fcgen): '<S8>/FcnCallGen' */

    /* Outport: '<Root>/VeIMOR_Cnt_SOPsentCnt' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_Cnt_SOPsentCnt_Init'
     */
    Rte_Write_VeIMOR_Cnt_SOPsentCnt_Value
        (IMOR_ac_B.LeIMOR_Cnt_SOPsentCnt_Init);

    /* Outport: '<Root>/VeIMOR_b_AuthenticationValid' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_b_AuthenticationValid_Init'
     */
    Rte_Write_VeIMOR_b_AuthenticationValid_Value
        (IMOR_ac_B.VariantMerge_For_Variant_Source_Variant_);

    /* Outport: '<Root>/VeIMOR_b_BCMFailedG1G2' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_b_BCMFailedG1G2Rec_Init'
     */
    Rte_Write_VeIMOR_b_BCMFailedG1G2_Value
        (IMOR_ac_B.LeIMOR_b_BCMFailedG1G2Rec_Init);

    /* Outport: '<Root>/VeIMOR_b_BCMFailedVerif' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_b_BCMFailedVerif_Init'
     */
    Rte_Write_VeIMOR_b_BCMFailedVerif_Value
        (IMOR_ac_B.LeIMOR_b_BCMFailedVerif_Init);

    /* Outport: '<Root>/VeIMOR_b_BCMMiniKeyNotStoredRec' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_b_BCMMiniKeyNotStoredRec_Init'
     */
    Rte_Write_VeIMOR_b_BCMMiniKeyNotStoredRec_Value
        (IMOR_ac_B.LeIMOR_b_BCMMiniKeyNotStoredRec_Init);

    /* Outport: '<Root>/VeIMOR_b_BCMNoENQpResponse' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_b_BCMNoENQpResponse_Init'
     */
    Rte_Write_VeIMOR_b_BCMNoENQpResponse_Value
        (IMOR_ac_B.LeIMOR_b_BCMNoENQpResponse_Init);

    /* Outport: '<Root>/VeIMOR_b_BCMNoPRAorMiniKeyRec' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_b_BCMNoPRAorMiniKeyRec_Init'
     */
    Rte_Write_VeIMOR_b_BCMNoPRAorMiniKeyRec_Value
        (IMOR_ac_B.LeIMOR_b_BCMNoPRAorMiniKeyRec_Init);

    /* Outport: '<Root>/VeIMOR_b_BCMNoSecondRespRec' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_b_BCMNoSecondRespRec_Init'
     */
    Rte_Write_VeIMOR_b_BCMNoSecondRespRec_Value
        (IMOR_ac_B.LeIMOR_b_BCMNoSecondRespRec_Init);

    /* Outport: '<Root>/VeIMOR_b_BCMNoVerifResp' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_b_BCMNoVerifRespDID_Init'
     */
    Rte_Write_VeIMOR_b_BCMNoVerifResp_Value
        (IMOR_ac_B.LeIMOR_b_BCMNoVerifRespDID_Init);

    /* Outport: '<Root>/VeIMOR_b_BCMRespBadG2Verify' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_b_BCMRespBadG2Verify_Init'
     */
    Rte_Write_VeIMOR_b_BCMRespBadG2Verify_Value
        (IMOR_ac_B.LeIMOR_b_BCMRespBadG2Verify_Init);

    /* Outport: '<Root>/VeIMOR_b_BCMRespTENRec' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_b_BCMRespTENRec_Init'
     */
    Rte_Write_VeIMOR_b_BCMRespTENRec_Value
        (IMOR_ac_B.LeIMOR_b_BCMRespTENRec_Init);

    /* Outport: '<Root>/VeIMOR_b_BCMRespTENVerify' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_b_BCMRespTENVerify_Init'
     */
    Rte_Write_VeIMOR_b_BCMRespTENVerify_Value
        (IMOR_ac_B.LeIMOR_b_BCMRespTENVerify_Init);

    /* Outport: '<Root>/VeIMOR_b_BCMRespUCVerify' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_b_BCMRespUCVerify_Init'
     */
    Rte_Write_VeIMOR_b_BCMRespUCVerify_Value
        (IMOR_ac_B.LeIMOR_b_BCMRespUCVerify_Init);

    /* Outport: '<Root>/VeIMOR_b_CANMsgSndReq' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_b_CANMsgSndReq_Init'
     */
    Rte_Write_VeIMOR_b_CANMsgSndReq_Value
        (IMOR_ac_B.LeIMOR_b_CANMsgSndReq_Init);

    /* Outport: '<Root>/VeIMOR_b_CANepTMsgSndReq' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_b_CANepTMsgSndReq_Init'
     */
    Rte_Write_VeIMOR_b_CANepTMsgSndReq_Value
        (IMOR_ac_B.LeIMOR_b_CANepTMsgSndReq_Init);

    /* Outport: '<Root>/VeIMOR_b_ECMFailedRationality' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_b_ECMFailedRationality_Init'
     */
    Rte_Write_VeIMOR_b_ECMFailedRationality_Value
        (IMOR_ac_B.LeIMOR_b_ECMFailedRationality_Init);

    /* Outport: '<Root>/VeIMOR_b_ECMNoSOPResp' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_b_ECMNoSOPResp_Init'
     */
    Rte_Write_VeIMOR_b_ECMNoSOPResp_Value
        (IMOR_ac_B.LeIMOR_b_ECMNoSOPResp_Init);

    /* Outport: '<Root>/VeIMOR_b_ECMPassed' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_b_ECMPassed_Init'
     */
    Rte_Write_VeIMOR_b_ECMPassed_Value(IMOR_ac_B.LeIMOR_b_ECMPassed_Init);

    /* Outport: '<Root>/VeIMOR_b_ECMWUnoHandshake' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_b_ECMWUnoHandshake_Init'
     */
    Rte_Write_VeIMOR_b_ECMWUnoHandshake_Value
        (IMOR_ac_B.LeIMOR_b_ECMWUnoHandshake_Init);

    /* Outport: '<Root>/VeIMOR_b_ECMnoWU' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_b_ECMnoWU_Init'
     */
    Rte_Write_VeIMOR_b_ECMnoWU_Value(IMOR_ac_B.LeIMOR_b_ECMnoWU_Init);

    /* Outport: '<Root>/VeIMOR_b_FstRstFn' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_b_FstRstFn_Init'
     */
    Rte_Write_VeIMOR_b_FstRstFn_Value(IMOR_ac_B.LeIMOR_b_FstRstFn_Init);

    /* Outport: '<Root>/VeIMOR_b_HCPNotProg' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_b_HCPNotProg_Init'
     */
    Rte_Write_VeIMOR_b_HCPNotProg_Value(IMOR_ac_B.LeIMOR_b_HCPNotProg_Init);

    /* Outport: '<Root>/VeIMOR_b_ImmoSOPRequest' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_b_ImmoSOPRequest_Init'
     */
    Rte_Write_VeIMOR_b_ImmoSOPRequest_Value
        (IMOR_ac_B.LeIMOR_b_ImmoSOPRequest_Init);

    /* Outport: '<Root>/VeIMOR_b_WrtCRCmpltToE2' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_b_WrtCRCmpltToE2_Init'
     */
    Rte_Write_VeIMOR_b_WrtCRCmpltToE2_Value
        (IMOR_ac_B.LeIMOR_b_WrtCRCmpltToE2_Init);

    /* Outport: '<Root>/VeIMOR_b_WrtMKeyToE2' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_b_WrtMKeyToE2_Init'
     */
    Rte_Write_VeIMOR_b_WrtMKeyToE2_Value
        (IMOR_ac_B.LeIMOR_b_WrtMKeyToE2_Init);

    /* Outport: '<Root>/VeIMOR_Cnt_CodeVrfyCnt' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_cnt_CodeVrfyCount_Init'
     */
    Rte_Write_VeIMOR_Cnt_CodeVrfyCnt_Value
        (IMOR_ac_B.LeIMOR_Cnt_CodeVrfyCnt_Init);

    /* Outport: '<Root>/VeIMOR_Cnt_IMORRecCnt' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_cnt_IMORRecCount_Init'
     */
    Rte_Write_VeIMOR_Cnt_IMORRecCnt_Value
        (IMOR_ac_B.LeIMOR_Cnt_IMORRecCnt_Init);

    /* Outport: '<Root>/VeIMOR_d_G1' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_d_G1_Init'
     */
    Rte_Write_VeIMOR_d_G1_Value(IMOR_ac_B.LeIMOR_d_G1_Init);

    /* Outport: '<Root>/VeIMOR_d_RandonNumber' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_d_RandonNumber_Init'
     */
    Rte_Write_VeIMOR_d_RandonNumber_Value
        (IMOR_ac_B.LeIMOR_d_RandonNumber_Init);

    /* Outport: '<Root>/VeIMOR_d_SecKey_h' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_d_SecKey_h_Init'
     */
    Rte_Write_VeIMOR_d_SecKey_h_Value(IMOR_ac_B.LeIMOR_d_SecKey_h_Init);

    /* Outport: '<Root>/VeIMOR_d_SecKey_l' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_d_SecKey_l_Init'
     */
    Rte_Write_VeIMOR_d_SecKey_l_Value(IMOR_ac_B.LeIMOR_d_SecKey_l_Init);

    /* Outport: '<Root>/VeIMOR_e_BuildAssemblyModeStat' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_e_BuildAssemblyModeStat_Init'
     *  VariantMerge generated from: '<S406>/Variant Source1'
     */
    Rte_Write_VeIMOR_e_BuildAssemblyModeStat_Value
        (IMOR_ac_B.VariantMerge_For_Variant_Source_Varian_g);

    /* Outport: '<Root>/VeIMOR_e_ECMStat' incorporates:
     *  SignalConversion generated from: '<S406>/LeIMOR_e_ECMStat_Init'
     *  SignalConversion generated from: '<S8>/LeIMOR_e_ECMStat_Init'
     */
    Rte_Write_VeIMOR_e_ECMStat_Value(IMOR_ac_B.LeIMOR_e_ECMStat_Init);

    /* Outport: '<Root>/VeIMOR_b_EngDsbldToIC' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_e_EngDsbldToIC_Init'
     */
    Rte_Write_VeIMOR_b_EngDsbldToIC_Value
        (IMOR_ac_B.LeIMOR_e_EngDsbldToIC_Init);

    /* Outport: '<Root>/VeIMOR_e_HCPImmoStatCanC' incorporates:
     *  SignalConversion generated from: '<S406>/LeIMOR_e_HCPImmoStatCanC_Init'
     *  SignalConversion generated from: '<S8>/LeIMOR_e_HCPImmoStatCanC_Init'
     */
    Rte_Write_VeIMOR_e_HCPImmoStatCanC_Value
        (IMOR_ac_B.LeIMOR_e_HCPImmoStatCanC_Init);

    /* Outport: '<Root>/VeIMOR_e_IMORStat' incorporates:
     *  SignalConversion generated from: '<S406>/LeIMOR_e_IMORStat_Init'
     *  SignalConversion generated from: '<S8>/LeIMOR_e_IMORStat_Init'
     */
    Rte_Write_VeIMOR_e_IMORStat_Value(IMOR_ac_B.LeIMOR_e_IMORStat_Init);

    /* Outport: '<Root>/VeIMOR_t_ECMStateTimer' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_t_ECMStateTimer_Init'
     */
    Rte_Write_VeIMOR_t_ECMStateTimer_Value
        (IMOR_ac_B.LeIMOR_t_ECMStateTimer_Init);

    /* Outport: '<Root>/VeIMOR_t_StateTimer' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_t_StateTimer_Init'
     */
    Rte_Write_VeIMOR_t_StateTimer_Value(IMOR_ac_B.LeIMOR_t_StateTimer_Init);

    /* Outport: '<Root>/VeIMOR_y_AuthCmd00' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_y_AuthCmd00_Init'
     */
    Rte_Write_VeIMOR_y_AuthCmd00_Value(IMOR_ac_B.LeIMOR_y_AuthCmd00_Init);

    /* Outport: '<Root>/VeIMOR_y_AuthCmd01' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_y_AuthCmd01_Init'
     */
    Rte_Write_VeIMOR_y_AuthCmd01_Value(IMOR_ac_B.LeIMOR_y_AuthCmd01_Init);

    /* Outport: '<Root>/VeIMOR_y_AuthCmd02' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_y_AuthCmd02_Init'
     */
    Rte_Write_VeIMOR_y_AuthCmd02_Value(IMOR_ac_B.LeIMOR_y_AuthCmd02_Init);

    /* Outport: '<Root>/VeIMOR_y_AuthCmd03' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_y_AuthCmd03_Init'
     */
    Rte_Write_VeIMOR_y_AuthCmd03_Value(IMOR_ac_B.LeIMOR_y_AuthCmd03_Init);

    /* Outport: '<Root>/VeIMOR_y_AuthCmd04' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_y_AuthCmd04_Init'
     */
    Rte_Write_VeIMOR_y_AuthCmd04_Value(IMOR_ac_B.LeIMOR_y_AuthCmd04_Init);

    /* Outport: '<Root>/VeIMOR_y_AuthCmd05' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_y_AuthCmd05_Init'
     */
    Rte_Write_VeIMOR_y_AuthCmd05_Value(IMOR_ac_B.LeIMOR_y_AuthCmd05_Init);

    /* Outport: '<Root>/VeIMOR_y_AuthCmd06' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_y_AuthCmd06_Init'
     */
    Rte_Write_VeIMOR_y_AuthCmd06_Value(IMOR_ac_B.LeIMOR_y_AuthCmd06_Init);

    /* Outport: '<Root>/VeIMOR_y_AuthCmd07' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_y_AuthCmd07_Init'
     */
    Rte_Write_VeIMOR_y_AuthCmd07_Value(IMOR_ac_B.LeIMOR_y_AuthCmd07_Init);

    /* Outport: '<Root>/VeIMOR_y_AuthCmd08' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_y_AuthCmd08_Init'
     */
    Rte_Write_VeIMOR_y_AuthCmd08_Value(IMOR_ac_B.LeIMOR_y_AuthCmd08_Init);

    /* Outport: '<Root>/VeIMOR_y_AuthCmd09' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_y_AuthCmd09_Init'
     */
    Rte_Write_VeIMOR_y_AuthCmd09_Value(IMOR_ac_B.LeIMOR_y_AuthCmd09_Init);

    /* Outport: '<Root>/VeIMOR_y_AuthCmd10' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_y_AuthCmd10_Init'
     */
    Rte_Write_VeIMOR_y_AuthCmd10_Value(IMOR_ac_B.LeIMOR_y_AuthCmd10_Init);

    /* Outport: '<Root>/VeIMOR_y_AuthCmd11' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_y_AuthCmd11_Init'
     */
    Rte_Write_VeIMOR_y_AuthCmd11_Value(IMOR_ac_B.LeIMOR_y_AuthCmd11_Init);

    /* Outport: '<Root>/VeIMOR_y_AuthCmd12' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_y_AuthCmd12_Init'
     */
    Rte_Write_VeIMOR_y_AuthCmd12_Value(IMOR_ac_B.LeIMOR_y_AuthCmd12_Init);

    /* Outport: '<Root>/VeIMOR_y_AuthCmd13' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_y_AuthCmd13_Init'
     */
    Rte_Write_VeIMOR_y_AuthCmd13_Value(IMOR_ac_B.LeIMOR_y_AuthCmd13_Init);

    /* Outport: '<Root>/VeIMOR_y_AuthCmd14' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_y_AuthCmd14_Init'
     */
    Rte_Write_VeIMOR_y_AuthCmd14_Value(IMOR_ac_B.LeIMOR_y_AuthCmd14_Init);

    /* Outport: '<Root>/VeIMOR_y_AuthCmd15' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_y_AuthCmd15_Init'
     */
    Rte_Write_VeIMOR_y_AuthCmd15_Value(IMOR_ac_B.LeIMOR_y_AuthCmd15_Init);

    /* Outport: '<Root>/VeIMOR_y_AuthCmdCntrlEncdReq' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_y_AuthCmdCntrlEncdReq_Init'
     */
    Rte_Write_VeIMOR_y_AuthCmdCntrlEncdReq_Value
        (IMOR_ac_B.LeIMOR_y_AuthCmdCntrlEncdResp_Init);

    /* Outport: '<Root>/VeIMOR_y_CntrlEncdReq' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_y_CntrlEncdReq_Init'
     */
    Rte_Write_VeIMOR_y_CntrlEncdReq_Value
        (IMOR_ac_B.LeIMOR_y_CntrlEncdReq_Init);

    /* Outport: '<Root>/VeIMOR_y_MiniKryptF1_1' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_y_MiniKryptF1_1_Init'
     */
    Rte_Write_VeIMOR_y_MiniKryptF1_1_Value
        (IMOR_ac_B.LeIMOR_y_MiniKryptF1_1_Init);

    /* Outport: '<Root>/VeIMOR_y_MiniKryptF1_2' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_y_MiniKryptF1_2_Init'
     */
    Rte_Write_VeIMOR_y_MiniKryptF1_2_Value
        (IMOR_ac_B.LeIMOR_y_MiniKryptF1_2_Init);

    /* Outport: '<Root>/VeIMOR_y_MiniKryptG1_1' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_y_MiniKryptG1_1_Init'
     */
    Rte_Write_VeIMOR_y_MiniKryptG1_1_Value
        (IMOR_ac_B.LeIMOR_y_MiniKryptG1_1_Init);

    /* Outport: '<Root>/VeIMOR_y_MiniKryptG1_2' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_y_MiniKryptG1_2_Init'
     */
    Rte_Write_VeIMOR_y_MiniKryptG1_2_Value
        (IMOR_ac_B.LeIMOR_y_MiniKryptG1_2_Init);

    /* Outport: '<Root>/VeIMOR_y_rnd_1' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_y_rnd_1_Init'
     */
    Rte_Write_VeIMOR_y_rnd_1_Value(IMOR_ac_B.LeIMOR_y_rnd_1_Init);

    /* Outport: '<Root>/VeIMOR_y_rnd_2' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_y_rnd_2_Init'
     */
    Rte_Write_VeIMOR_y_rnd_2_Value(IMOR_ac_B.LeIMOR_y_rnd_2_Init);

    /* Outport: '<Root>/VeIMOR_y_rnd_3' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_y_rnd_3_Init'
     */
    Rte_Write_VeIMOR_y_rnd_3_Value(IMOR_ac_B.LeIMOR_y_rnd_3_Init);

    /* Outport: '<Root>/VeIMOR_y_rnd_4' incorporates:
     *  SignalConversion generated from: '<S8>/LeIMOR_y_rnd_4_Init'
     */
    Rte_Write_VeIMOR_y_rnd_4_Value(IMOR_ac_B.LeIMOR_y_rnd_4_Init);

    /* Outport: '<Root>/VeIMOR_e_FaultSts_ImmobKeyIncrt' incorporates:
     *  SignalConversion generated from: '<S407>/VeIMOR_e_FaultSts_ImmobKeyIncrt'
     *  SignalConversion generated from: '<S8>/R_VeIMOR_e_FaultSts_ImmobKeyIncrt'
     */
    Rte_Write_VeIMOR_e_FaultSts_ImmobKeyIncrt_Value
        (IMOR_ac_B.OutportBufferForVeIMOR_e_FaultSts_ImmobK);

    /* Outport: '<Root>/VeIMOR_e_FaultSts_SKIMNotStored' incorporates:
     *  SignalConversion generated from: '<S407>/VeIMOR_e_FaultSts_SKIMNotStored'
     *  SignalConversion generated from: '<S8>/R_VeIMOR_e_FaultSts_SKIMNotStored'
     */
    Rte_Write_VeIMOR_e_FaultSts_SKIMNotStored_Value
        (IMOR_ac_B.OutportBufferForVeIMOR_e_FaultSts_SKIMNo);

    /* SignalConversion generated from: '<S8>/VeIMOR_b_AuthValidInit_write' incorporates:
     *  SignalConversion generated from: '<S8>/VeIMOR_b_RndNumDone_Init_write'
     *  SignalConversion generated from: '<S8>/VeIMOR_b_RstImmoAuthInMemInit_write'
     */
#if Rte_SysCon_Variant_IMOR_1

    /* SignalConversion generated from: '<S8>/VeIMOR_b_RndNumDone_Init_write' */
    rtb_OutportBufferForVeIMOR_b_RndNumDone_ =
        IMOR_ac_B.VeIMOR_b_RndNumDone_Init;

    /* SignalConversion generated from: '<S8>/VeIMOR_b_RstImmoAuthInMemInit_write' */
    rtb_OutportBufferForVeIMOR_b_RstImmoAuth =
        IMOR_ac_B.VeIMOR_b_RstImmoAuthInMemInit;

    /* Merge: '<Root>/Merge_1' */
    Rte_IrvWrite_IMOR_PwrOn_VeIMOR_b_AuthValidVal_write_IRV
        (IMOR_ac_B.VeIMOR_b_AuthValidInit);

#endif

    /* End of SignalConversion generated from: '<S8>/VeIMOR_b_AuthValidInit_write' */

    /* Merge: '<Root>/VeIMOR_b_ORC_HealthFA_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S8>/VeIMOR_b_ORC_HealthFA_write'
     * */
    Rte_IrvWrite_IMOR_PwrOn_VeIMOR_b_ORC_HealthFA_write_IRV
        (IMOR_ac_B.OutportBufferForVeIMOR_b_ORC_HealthFA_wr);

    /* Merge: '<Root>/VeIMOR_b_ORC_Health_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S8>/VeIMOR_b_ORC_Health_write'
     * */
    Rte_IrvWrite_IMOR_PwrOn_VeIMOR_b_ORC_Health_write_IRV
        (IMOR_ac_B.OutportBufferForVeIMOR_b_ORC_Health_writ);

    /* SignalConversion generated from: '<S8>/VeIMOR_b_RndNumDone_Init_write' incorporates:
     *  SignalConversion generated from: '<S8>/VeIMOR_b_RstImmoAuthInMemInit_write'
     */
#if Rte_SysCon_Variant_IMOR_1

    /* Merge: '<Root>/Merge_3' */
    Rte_IrvWrite_IMOR_PwrOn_VeIMOR_b_InvokeMKA_Arb_write_IRV
        (rtb_OutportBufferForVeIMOR_b_RndNumDone_);

    /* Merge: '<Root>/Merge_2' */
    Rte_IrvWrite_IMOR_PwrOn_KeyOff3secArb_write_IRV
        (rtb_OutportBufferForVeIMOR_b_RstImmoAuth);

#endif

    /* End of SignalConversion generated from: '<S8>/VeIMOR_b_RndNumDone_Init_write' */

    /* Merge: '<Root>/VeIMOR_b_VC_VehCfg2_StatFA_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S8>/VeIMOR_b_VC_VehCfg2_StatFA_write'
     * */
    Rte_IrvWrite_IMOR_PwrOn_VeIMOR_b_VC_VehCfg2_StatFA_write_IRV
        (IMOR_ac_B.OutportBufferForVeIMOR_b_VC_VehCfg2_Stat);

    /* Merge: '<Root>/VeIMOR_b_VC_VehCfg3_StatFA_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S8>/VeIMOR_b_VC_VehCfg3_StatFA_write'
     * */
    Rte_IrvWrite_IMOR_PwrOn_VeIMOR_b_VC_VehCfg3_StatFA_write_IRV
        (IMOR_ac_B.OutportBufferForVeIMOR_b_VC_VehCfg3_Stat);

    /* Merge: '<Root>/VeIMOR_b_VC_VehCfg4_StatFA_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S8>/VeIMOR_b_VC_VehCfg4_StatFA_write'
     * */
    Rte_IrvWrite_IMOR_PwrOn_VeIMOR_b_VC_VehCfg4_StatFA_write_IRV
        (IMOR_ac_B.OutportBufferForVeIMOR_b_VC_VehCfg4_Stat);

    /* Merge: '<Root>/VeIMOR_b_VC_VehCfg6_StatFA_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S8>/VeIMOR_b_VC_VehCfg6_StatFA_write'
     * */
    Rte_IrvWrite_IMOR_PwrOn_VeIMOR_b_VC_VehCfg6_StatFA_write_IRV
        (IMOR_ac_B.OutportBufferForVeIMOR_b_VC_VehCfg6_Stat);

    /* Merge: '<Root>/VeIMOR_e_VC_VehCfg2_Stat_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S8>/VeIMOR_e_VC_VehCfg2_Stat_write'
     * */
    Rte_IrvWrite_IMOR_PwrOn_VeIMOR_e_VC_VehCfg2_Stat_write_IRV
        (IMOR_ac_B.OutportBufferForVeIMOR_e_VC_VehCfg2_Stat);

    /* Merge: '<Root>/VeIMOR_e_VC_VehCfg3_Stat_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S8>/VeIMOR_e_VC_VehCfg3_Stat_write'
     * */
    Rte_IrvWrite_IMOR_PwrOn_VeIMOR_e_VC_VehCfg3_Stat_write_IRV
        (IMOR_ac_B.OutportBufferForVeIMOR_e_VC_VehCfg3_Stat);

    /* Merge: '<Root>/VeIMOR_e_VC_VehCfg4_Stat_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S8>/VeIMOR_e_VC_VehCfg4_Stat_write'
     * */
    Rte_IrvWrite_IMOR_PwrOn_VeIMOR_e_VC_VehCfg4_Stat_write_IRV
        (IMOR_ac_B.OutportBufferForVeIMOR_e_VC_VehCfg4_Stat);

    /* Merge: '<Root>/VeIMOR_e_VC_VehCfg6_Stat_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S8>/VeIMOR_e_VC_VehCfg6_Stat_write'
     * */
    Rte_IrvWrite_IMOR_PwrOn_VeIMOR_e_VC_VehCfg6_Stat_write_IRV
        (IMOR_ac_B.OutportBufferForVeIMOR_e_VC_VehCfg6_Stat);

    /* Merge: '<Root>/VeIMOR_y_AuthCmd00_In_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S8>/VeIMOR_y_AuthCmd00_In_write'
     * */
    Rte_IrvWrite_IMOR_PwrOn_VeIMOR_y_AuthCmd00_In_write_IRV
        (IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd00_In_wr);

    /* Merge: '<Root>/VeIMOR_y_AuthCmd01_In_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S8>/VeIMOR_y_AuthCmd01_In_write'
     * */
    Rte_IrvWrite_IMOR_PwrOn_VeIMOR_y_AuthCmd01_In_write_IRV
        (IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd01_In_wr);

    /* Merge: '<Root>/VeIMOR_y_AuthCmd02_In_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S8>/VeIMOR_y_AuthCmd02_In_write'
     * */
    Rte_IrvWrite_IMOR_PwrOn_VeIMOR_y_AuthCmd02_In_write_IRV
        (IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd02_In_wr);

    /* Merge: '<Root>/VeIMOR_y_AuthCmd03_In_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S8>/VeIMOR_y_AuthCmd03_In_write'
     * */
    Rte_IrvWrite_IMOR_PwrOn_VeIMOR_y_AuthCmd03_In_write_IRV
        (IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd00_In__j);

    /* Merge: '<Root>/VeIMOR_y_AuthCmd04_In_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S8>/VeIMOR_y_AuthCmd04_In_write'
     * */
    Rte_IrvWrite_IMOR_PwrOn_VeIMOR_y_AuthCmd04_In_write_IRV
        (IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd04_In_wr);

    /* Merge: '<Root>/VeIMOR_y_AuthCmd05_In_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S8>/VeIMOR_y_AuthCmd05_In_write'
     * */
    Rte_IrvWrite_IMOR_PwrOn_VeIMOR_y_AuthCmd05_In_write_IRV
        (IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd05_In_wr);

    /* Merge: '<Root>/VeIMOR_y_AuthCmd06_In_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S8>/VeIMOR_y_AuthCmd06_In_write'
     * */
    Rte_IrvWrite_IMOR_PwrOn_VeIMOR_y_AuthCmd06_In_write_IRV
        (IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd06_In_wr);

    /* Merge: '<Root>/VeIMOR_y_AuthCmd07_In_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S8>/VeIMOR_y_AuthCmd07_In_write'
     * */
    Rte_IrvWrite_IMOR_PwrOn_VeIMOR_y_AuthCmd07_In_write_IRV
        (IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd07_In_wr);

    /* Merge: '<Root>/VeIMOR_y_AuthCmd08_In_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S8>/VeIMOR_y_AuthCmd08_In_write'
     * */
    Rte_IrvWrite_IMOR_PwrOn_VeIMOR_y_AuthCmd08_In_write_IRV
        (IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd08_In_wr);

    /* Merge: '<Root>/VeIMOR_y_AuthCmd09_In_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S8>/VeIMOR_y_AuthCmd09_In_write'
     * */
    Rte_IrvWrite_IMOR_PwrOn_VeIMOR_y_AuthCmd09_In_write_IRV
        (IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd09_In_wr);

    /* Merge: '<Root>/VeIMOR_y_AuthCmd10_In_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S8>/VeIMOR_y_AuthCmd10_In_write'
     * */
    Rte_IrvWrite_IMOR_PwrOn_VeIMOR_y_AuthCmd10_In_write_IRV
        (IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd10_In_wr);

    /* Merge: '<Root>/VeIMOR_y_AuthCmd11_In_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S8>/VeIMOR_y_AuthCmd11_In_write'
     * */
    Rte_IrvWrite_IMOR_PwrOn_VeIMOR_y_AuthCmd11_In_write_IRV
        (IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd11_In_wr);

    /* Merge: '<Root>/VeIMOR_y_AuthCmd12_In_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S8>/VeIMOR_y_AuthCmd12_In_write'
     * */
    Rte_IrvWrite_IMOR_PwrOn_VeIMOR_y_AuthCmd12_In_write_IRV
        (IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd12_In_wr);

    /* Merge: '<Root>/VeIMOR_y_AuthCmd13_In_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S8>/VeIMOR_y_AuthCmd13_In_write'
     * */
    Rte_IrvWrite_IMOR_PwrOn_VeIMOR_y_AuthCmd13_In_write_IRV
        (IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd13_In_wr);

    /* Merge: '<Root>/VeIMOR_y_AuthCmd14_In_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S8>/VeIMOR_y_AuthCmd14_In_write'
     * */
    Rte_IrvWrite_IMOR_PwrOn_VeIMOR_y_AuthCmd14_In_write_IRV
        (IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd14_In_wr);

    /* Merge: '<Root>/VeIMOR_y_AuthCmd15_In_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S8>/VeIMOR_y_AuthCmd15_In_write'
     * */
    Rte_IrvWrite_IMOR_PwrOn_VeIMOR_y_AuthCmd15_In_write_IRV
        (IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmd15_In_wr);

    /* Merge: '<Root>/VeIMOR_y_AuthCmdCntrlEncdResp_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S8>/VeIMOR_y_AuthCmdCntrlEncdResp_write'
     * */
    Rte_IrvWrite_IMOR_PwrOn_VeIMOR_y_AuthCmdCntrlEncdResp_write_IRV
        (IMOR_ac_B.OutportBufferForVeIMOR_y_AuthCmdCntrlEnc);

    /* Merge: '<Root>/VeIMOR_y_CntrlEncdResp_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S8>/VeIMOR_y_CntrlEncdResp_write'
     * */
    Rte_IrvWrite_IMOR_PwrOn_VeIMOR_y_CntrlEncdResp_write_IRV
        (IMOR_ac_B.OutportBufferForVeIMOR_y_CntrlEncdResp_w);

    /* Merge: '<Root>/VeIMOR_y_MMKey1org21_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S8>/VeIMOR_y_MMKey1org21_write'
     * */
    Rte_IrvWrite_IMOR_PwrOn_VeIMOR_y_MMKey1org21_write_IRV
        (IMOR_ac_B.OutportBufferForVeIMOR_y_MMKey1org21_wri);

    /* Merge: '<Root>/VeIMOR_y_MMKey1org22_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S8>/VeIMOR_y_MMKey1org22_write'
     * */
    Rte_IrvWrite_IMOR_PwrOn_VeIMOR_y_MMKey1org22_write_IRV
        (IMOR_ac_B.OutportBufferForVeIMOR_y_MMKey1org22_wri);

    /* Merge: '<Root>/VeIMOR_y_MMKey_3_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S8>/VeIMOR_y_MMKey_3_write'
     * */
    Rte_IrvWrite_IMOR_PwrOn_VeIMOR_y_MMKey_3_write_IRV
        (IMOR_ac_B.OutportBufferForVeIMOR_y_MMKey_3_write);

    /* Merge: '<Root>/VeIMOR_y_MMKey_4_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S8>/VeIMOR_y_MMKey_4_write'
     * */
    Rte_IrvWrite_IMOR_PwrOn_VeIMOR_y_MMKey_4_write_IRV
        (IMOR_ac_B.OutportBufferForVeIMOR_y_MMKey_4_write);

    /* Merge: '<Root>/VeIMOR_y_MMKey_5_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S8>/VeIMOR_y_MMKey_5_write'
     * */
    Rte_IrvWrite_IMOR_PwrOn_VeIMOR_y_MMKey_5_write_IRV
        (IMOR_ac_B.OutportBufferForVeIMOR_y_MMKey_5_write);

    /* Merge: '<Root>/VeIMOR_y_MMKey_6_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S8>/VeIMOR_y_MMKey_6_write'
     * */
    Rte_IrvWrite_IMOR_PwrOn_VeIMOR_y_MMKey_6_write_IRV
        (IMOR_ac_B.OutportBufferForVeIMOR_y_MMKey_6_write);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, IMOR_CODE) IMOR_ac_Init
{
    /* Start for DataStoreMemory: '<Root>/DSM_17' */
    EeIMOR_M_Rand1_prev = 241.11F;

    /* Start for DataStoreMemory: '<Root>/DSM_18' */
    EeIMOR_M_Rand2_prev = 149.43F;

    /* Start for DataStoreMemory: '<Root>/DSM_19' */
    EeIMOR_M_Rand3_prev = 67.31F;

    /* Start for DataStoreMemory: '<Root>/DSM_20' */
    EeIMOR_M_Rand4_prev = 127.19F;

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/IMOR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S8>/FcnCallGen' incorporates:
     *  SubSystem: '<S8>/InitIMOO'
     */
    /* SystemInitialize for SignalConversion generated from: '<S406>/Variant Source' incorporates:
     *  Constant: '<S412>/Constant'
     *  Constant: '<S413>/Calib'
     *  Constant: '<S414>/Calib'
     */
#if Rte_SysCon_Variant_IMOR_2

    IMOR_ac_B.Calib = KeIMOR_b_AuthenticationValid;
    IMOR_ac_B.Calib_e = KeIMOR_e_BuildAssemblyModeStat;

    /* SystemInitialize for VariantMerge generated from: '<S406>/Variant Source' incorporates:
     *  Constant: '<S413>/Calib'
     *  Constant: '<S414>/Calib'
     */
    IMOR_ac_B.VariantMerge_For_Variant_Source_Variant_ = IMOR_ac_B.Calib;

#else

    IMOR_ac_B.Constant = CeIMOR_e_ImmoNotPaired;

    /* SystemInitialize for VariantMerge generated from: '<S406>/Variant Source' incorporates:
     *  Constant: '<S412>/Constant'
     *  SignalConversion generated from: '<S406>/Variant Source'
     */
    IMOR_ac_B.VariantMerge_For_Variant_Source_Variant_ =
        IMOR_ac_B.ConstantValue2;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S406>/Variant Source' */

    /* SystemInitialize for SignalConversion generated from: '<S406>/LeIMOR_e_IMORStat_Init' incorporates:
     *  Constant: '<S409>/Constant'
     */
    IMOR_ac_B.LeIMOR_e_IMORStat_Init = IMOR_ac_ConstB.Constant_i;

    /* SystemInitialize for SignalConversion generated from: '<S406>/LeIMOR_e_HCPImmoStatCanC_Init' incorporates:
     *  Constant: '<S410>/Constant'
     */
    IMOR_ac_B.LeIMOR_e_HCPImmoStatCanC_Init = IMOR_ac_ConstB.Constant_l;

    /* SystemInitialize for SignalConversion generated from: '<S406>/LeIMOR_e_ECMStat_Init' incorporates:
     *  Constant: '<S411>/Constant'
     */
    IMOR_ac_B.LeIMOR_e_ECMStat_Init = IMOR_ac_ConstB.Constant_e;

    /* SystemInitialize for SignalConversion generated from: '<S406>/Variant Source1' */
#if Rte_SysCon_Variant_IMOR_2

    /* SystemInitialize for VariantMerge generated from: '<S406>/Variant Source1' incorporates:
     *  Constant: '<S414>/Calib'
     */
    IMOR_ac_B.VariantMerge_For_Variant_Source_Varian_g = IMOR_ac_B.Calib_e;

#else

    /* SystemInitialize for VariantMerge generated from: '<S406>/Variant Source1' incorporates:
     *  Constant: '<S412>/Constant'
     *  SignalConversion generated from: '<S406>/Variant Source1'
     */
    IMOR_ac_B.VariantMerge_For_Variant_Source_Varian_g = IMOR_ac_B.Constant;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S406>/Variant Source1' */

    /* SystemInitialize for S-Function (fcgen): '<S8>/FcnCallGen' incorporates:
     *  SubSystem: '<S8>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S407>/VeIMOR_e_FaultSts_ImmobKeyIncrt' incorporates:
     *  Constant: '<S415>/Constant'
     */
    IMOR_ac_B.OutportBufferForVeIMOR_e_FaultSts_ImmobK =
        IMOR_ac_ConstB.Constant_j;

    /* SystemInitialize for SignalConversion generated from: '<S407>/VeIMOR_e_FaultSts_SKIMNotStored' incorporates:
     *  Constant: '<S416>/Constant'
     */
    IMOR_ac_B.OutportBufferForVeIMOR_e_FaultSts_SKIMNo =
        IMOR_ac_ConstB.Constant_gm;

    /* End of SystemInitialize for S-Function (fcgen): '<S8>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/IMOR_FastTEF'
     */
#if Rte_SysCon_Variant_IMOR_1

    /* SystemInitialize for S-Function (fcgen): '<S6>/FcnCallGen' */
    /* SystemInitialize for Function Call SubSystem: '<S6>/Immobilizer' */
    /* SystemInitialize for SignalConversion generated from: '<S47>/SendCANR_IMMO_CODE_REQUEST_Vld' */
    IMOR_ac_B.OutportBufferForSendCANR_IMMO_CODE_REQUE = true;

    /* SystemInitialize for Enabled SubSystem: '<S47>/Trgd_HCPBCM' */
    /* Start for If: '<S201>/If' */
    IMOR_ac_DW.If_ActiveSubsystem_c = -1;

    /* End of SystemInitialize for SubSystem: '<S47>/Trgd_HCPBCM' */
    /* End of SystemInitialize for SubSystem: '<S6>/Immobilizer' */

    /* SystemInitialize for Function Call SubSystem: '<S6>/ECM_Immobilizer' */
    /* SystemInitialize for Enabled SubSystem: '<S43>/Trgd_BCMECM' */
    /* Start for If: '<S60>/If' */
    IMOR_ac_DW.If_ActiveSubsystem = -1;

    /* SystemInitialize for Atomic SubSystem: '<S58>/Signal Latch Off With Reset' */
    /* InitializeConditions for UnitDelay: '<S131>/Unit Delay' */
    IMOR_ac_DW.UnitDelay_DSTATE_cv = true;

    /* End of SystemInitialize for SubSystem: '<S58>/Signal Latch Off With Reset' */
    /* End of SystemInitialize for SubSystem: '<S43>/Trgd_BCMECM' */
    /* End of SystemInitialize for SubSystem: '<S6>/ECM_Immobilizer' */
    /* End of SystemInitialize for S-Function (fcgen): '<S6>/FcnCallGen' */
#endif

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* SystemInitialize for Outport: '<Root>/VeIMOR_e_IMORStat' incorporates:
     *  Merge: '<Root>/Merge_5'
     */
    Rte_Write_VeIMOR_e_IMORStat_Value(CeIMOR_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeIMOR_e_HCPImmoStatCanC' incorporates:
     *  Merge: '<Root>/Merge_19'
     */
    Rte_Write_VeIMOR_e_HCPImmoStatCanC_Value(CeIMOR_e_HCPIS);

    /* SystemInitialize for Outport: '<Root>/VeIMOR_e_ECMStat' incorporates:
     *  Merge: '<Root>/Merge_23'
     */
    Rte_Write_VeIMOR_e_ECMStat_Value(CeIMOR_e_ECMInit);

    /* SystemInitialize for Outport: '<Root>/VeIMOR_e_BuildAssemblyModeStat' incorporates:
     *  Merge: '<Root>/Merge_45'
     */
    Rte_Write_VeIMOR_e_BuildAssemblyModeStat_Value
        (CeIMOR_e_ImmoPairingPassed);

    /* SystemInitialize for Outport: '<Root>/VeIMOR_e_FaultSts_ImmobKeyIncrt' incorporates:
     *  Merge: '<Root>/M_VeIMOR_e_FaultSts_ImmobKeyIncrt'
     */
    Rte_Write_VeIMOR_e_FaultSts_ImmobKeyIncrt_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeIMOR_e_FaultSts_SKIMNotStored' incorporates:
     *  Merge: '<Root>/M_VeIMOR_e_FaultSts_SKIMNotStored'
     */
    Rte_Write_VeIMOR_e_FaultSts_SKIMNotStored_Value(CeDFIB_e_Init);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
