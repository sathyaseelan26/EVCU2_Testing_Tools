/*
 * File: CSLR_ac.c
 *
 * Code generated for Simulink model 'CSLR_ac'.
 *
 * Model version                  : 9.85
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:19:34 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CSLR_ac.h"
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
#define START_SEC_CALIB_UNSPECIFIED_CSLR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(boolean, CSLR_VAR_INIT) HeCSLR_b_EnblNCxSlipSpdFailing = 1;/* Referenced by: '<S616>/Calib' */
static volatile CONST(boolean, CSLR_VAR_INIT) HeCSLR_b_M1EqnOHSRLaunch = 1;/* Referenced by: '<S26>/Calib' */
static volatile CONST(float32, CSLR_VAR_INIT) HeCSLR_t_MedTED_dT = 0.02F;/* Referenced by:
                                                                      * '<S27>/Calib'
                                                                      * '<S611>/Calib'
                                                                      * '<S96>/Calib'
                                                                      * '<S136>/Calib'
                                                                      * '<S175>/Calib'
                                                                      * '<S215>/Calib'
                                                                      * '<S274>/Calib'
                                                                      * '<S313>/Calib'
                                                                      * '<S352>/Calib'
                                                                      * '<S391>/Calib'
                                                                      * '<S443>/Calib'
                                                                      * '<S482>/Calib'
                                                                      * '<S521>/Calib'
                                                                      * '<S560>/Calib'
                                                                      */
static volatile CONST(float32, CSLR_VAR_INIT) KaCSLR_t_NiUpdRate[5] =
{
    0.1F, 0.00625F, 10.0F, 0.00625F, 10.0F
} ;                                    /* Referenced by: '<S604>/Calib' */

static volatile CONST(float32, CSLR_VAR_INIT) KaCSLR_t_NoUpdRate[8] =
{
    0.02F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F
} ;                                    /* Referenced by: '<S609>/Calib' */

static volatile CONST(boolean, CSLR_VAR_INIT) KeCSLR_b_EnaC1LockdCalcn = 0;/* Referenced by: '<S28>/Calib' */
static volatile CONST(boolean, CSLR_VAR_INIT) KeCSLR_b_EnaC2LockdCalcn = 0;/* Referenced by: '<S29>/Calib' */
static volatile CONST(boolean, CSLR_VAR_INIT)
    KeCSLR_b_EnaCluSlipAcceCalcnFromCpt = 0;/* Referenced by:
                                             * '<S77>/Calib'
                                             * '<S251>/Calib'
                                             * '<S106>/Calib'
                                             * '<S145>/Calib'
                                             * '<S185>/Calib'
                                             * '<S225>/Calib'
                                             * '<S283>/Calib'
                                             * '<S322>/Calib'
                                             * '<S361>/Calib'
                                             * '<S400>/Calib'
                                             * '<S452>/Calib'
                                             * '<S491>/Calib'
                                             * '<S530>/Calib'
                                             * '<S569>/Calib'
                                             */
static volatile CONST(boolean, CSLR_VAR_INIT) KeCSLR_b_EnblClutchSlip_CANSpeed =
    1;                                 /* Referenced by: '<S605>/Calib' */

#if Rte_SysCon_Variant_CSLR_C1SlipActv || Rte_SysCon_Variant_CSLR_C2SlipActv || Rte_SysCon_Variant_CSLR_C3SlipActv || Rte_SysCon_Variant_CSLR_C4SlipActv

static volatile CONST(boolean, CSLR_VAR_INIT) KeCSLR_b_UseItAcce = 0;/* Referenced by:
                                                                      * '<S107>/Calib'
                                                                      * '<S146>/Calib'
                                                                      * '<S186>/Calib'
                                                                      * '<S226>/Calib'
                                                                      * '<S284>/Calib'
                                                                      * '<S323>/Calib'
                                                                      * '<S362>/Calib'
                                                                      * '<S401>/Calib'
                                                                      * '<S453>/Calib'
                                                                      * '<S492>/Calib'
                                                                      * '<S531>/Calib'
                                                                      * '<S570>/Calib'
                                                                      */

#endif

static volatile CONST(boolean, CSLR_VAR_INIT) KeCSLR_b_UseRawEngSpd = 1;/* Referenced by: '<S11>/Calib' */
static volatile CONST(boolean, CSLR_VAR_INIT) KeCSLR_b_UseRawMtrAAcce = 1;/* Referenced by: '<S594>/Calib' */
static volatile CONST(boolean, CSLR_VAR_INIT) KeCSLR_b_UseRawMtrASpd = 1;/* Referenced by: '<S595>/Calib' */
static volatile CONST(boolean, CSLR_VAR_INIT) KeCSLR_b_UseRawMtrBAcce = 1;/* Referenced by: '<S596>/Calib' */
static volatile CONST(boolean, CSLR_VAR_INIT) KeCSLR_b_UseRawMtrBSpd = 1;/* Referenced by: '<S597>/Calib' */
static volatile CONST(boolean, CSLR_VAR_INIT) KeCSLR_b_UseRawMtrCAcce = 1;/* Referenced by: '<S598>/Calib' */
static volatile CONST(boolean, CSLR_VAR_INIT) KeCSLR_b_UseRawMtrCSpd = 1;/* Referenced by: '<S599>/Calib' */
static volatile CONST(float32, CSLR_VAR_INIT) KeCSLR_t_NC1DotCutOff = 0.5F;/* Referenced by:
                                                                      * '<S78>/Calib'
                                                                      * '<S252>/Calib'
                                                                      * '<S426>/Calib'
                                                                      */
static volatile CONST(float32, CSLR_VAR_INIT) KeCSLR_t_NC2DotCutOff = 0.5F;/* Referenced by:
                                                                      * '<S79>/Calib'
                                                                      * '<S253>/Calib'
                                                                      * '<S427>/Calib'
                                                                      */
static volatile CONST(float32, CSLR_VAR_INIT) KeCSLR_t_NC3DotCutOff = 0.5F;/* Referenced by:
                                                                      * '<S80>/Calib'
                                                                      * '<S254>/Calib'
                                                                      * '<S428>/Calib'
                                                                      */
static volatile CONST(float32, CSLR_VAR_INIT) KeCSLR_t_NC4DotCutOff = 0.5F;/* Referenced by:
                                                                      * '<S81>/Calib'
                                                                      * '<S255>/Calib'
                                                                      * '<S429>/Calib'
                                                                      */
static volatile CONST(float32, CSLR_VAR_INIT) KeCSLR_t_NtDotCutOff = 0.1F;/* Referenced by: '<S613>/Calib' */
static volatile CONST(float32, CSLR_VAR_INIT) KeCSLR_t_NtUpdRate = 0.02F;/* Referenced by: '<S614>/Calib' */
static volatile CONST(uint8, CSLR_VAR_INIT) KeCSLR_y_NC1_M1Source = 0U;/* Referenced by: '<S82>/Calib' */
static volatile CONST(uint8, CSLR_VAR_INIT) KeCSLR_y_NC1_M2Source = 12U;/* Referenced by: '<S256>/Calib' */
static volatile CONST(uint8, CSLR_VAR_INIT) KeCSLR_y_NC1_NSource = 10U;/* Referenced by:
                                                                      * '<S54>/Calib'
                                                                      * '<S430>/Calib'
                                                                      * '<S433>/Calib'
                                                                      */
static volatile CONST(uint8, CSLR_VAR_INIT) KeCSLR_y_NC2_M1Source = 12U;/* Referenced by: '<S83>/Calib' */
static volatile CONST(uint8, CSLR_VAR_INIT) KeCSLR_y_NC2_M2Source = 0U;/* Referenced by: '<S257>/Calib' */
static volatile CONST(uint8, CSLR_VAR_INIT) KeCSLR_y_NC2_NSource = 6U;/* Referenced by:
                                                                      * '<S55>/Calib'
                                                                      * '<S431>/Calib'
                                                                      */
static volatile CONST(uint8, CSLR_VAR_INIT) KeCSLR_y_NC3_M1Source = 0U;/* Referenced by: '<S84>/Calib' */
static volatile CONST(uint8, CSLR_VAR_INIT) KeCSLR_y_NC3_M2Source = 0U;/* Referenced by: '<S258>/Calib' */
static volatile CONST(uint8, CSLR_VAR_INIT) KeCSLR_y_NC3_NSource = 0U;/* Referenced by:
                                                                      * '<S56>/Calib'
                                                                      * '<S432>/Calib'
                                                                      */
static volatile CONST(uint8, CSLR_VAR_INIT) KeCSLR_y_NC4_M1Source = 0U;/* Referenced by: '<S85>/Calib' */
static volatile CONST(uint8, CSLR_VAR_INIT) KeCSLR_y_NC4_M2Source = 0U;/* Referenced by: '<S259>/Calib' */
static volatile CONST(uint8, CSLR_VAR_INIT) KeCSLR_y_NC4_NSource = 0U;/* Referenced by: '<S57>/Calib' */
static volatile CONST(float32, CSLR_VAR_INIT) KtCSLR_n_C1LockedThresh[3] =
{
    80.0F, 80.0F, 80.0F
} ;                                    /* Referenced by: '<S30>/Vector' */

static volatile CONST(float32, CSLR_VAR_INIT) KtCSLR_n_C2LockedThresh[3] =
{
    80.0F, 80.0F, 80.0F
} ;                                    /* Referenced by: '<S31>/Vector' */

static volatile CONST(float32, CSLR_VAR_INIT) KxCSLR_n_C1LockedThresh[3] =
{
    0.0F, 40.0F, 100.0F
} ;                                    /* Referenced by: '<S30>/Vector' */

static volatile CONST(float32, CSLR_VAR_INIT) KxCSLR_n_C2LockedThresh[3] =
{
    0.0F, 40.0F, 100.0F
} ;                                    /* Referenced by: '<S31>/Vector' */

#define STOP_SEC_CALIB_UNSPECIFIED_CSLR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CSLR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(boolean, CSLR_VAR_INIT) VeCSLC_b_M1_Nc1Trigger;/* '<S6>/Merge3' */
static VAR(boolean, CSLR_VAR_INIT) VeCSLC_b_M1_Nc2Trigger;/* '<S6>/Merge1' */
static VAR(boolean, CSLR_VAR_INIT) VeCSLC_b_M1_Nc3Trigger;/* '<S6>/Merge7' */
static VAR(boolean, CSLR_VAR_INIT) VeCSLC_b_M1_Nc4Trigger;/* '<S6>/Merge2' */
static VAR(boolean, CSLR_VAR_INIT) VeCSLC_b_M2_Nc1Trigger;/* synthesized block */
static VAR(boolean, CSLR_VAR_INIT) VeCSLC_b_M2_Nc2Trigger;/* synthesized block */
static VAR(boolean, CSLR_VAR_INIT) VeCSLC_b_M2_Nc3Trigger;/* synthesized block */
static VAR(boolean, CSLR_VAR_INIT) VeCSLC_b_M2_Nc4Trigger;/* synthesized block */
static VAR(boolean, CSLR_VAR_INIT) VeCSLC_b_N_Nc1Trigger;/* synthesized block */
static VAR(boolean, CSLR_VAR_INIT) VeCSLC_b_N_Nc2Trigger;/* synthesized block */
static VAR(boolean, CSLR_VAR_INIT) VeCSLC_b_N_Nc3Trigger;/* synthesized block */
static VAR(boolean, CSLR_VAR_INIT) VeCSLC_b_N_Nc4Trigger;/* synthesized block */

#if Rte_SysCon_Variant_CSLR_C1SlipActv || Rte_SysCon_Variant_CSLR_C2SlipActv || Rte_SysCon_Variant_CSLR_C3SlipActv || Rte_SysCon_Variant_CSLR_C4SlipActv

static VAR(boolean, CSLR_VAR_INIT) VeCSLC_b_N_SpdSrcVld;/* '<S6>/Logical3' */

#endif

#if Rte_SysCon_Variant_CSLR_C1SlipActv || Rte_SysCon_Variant_CSLR_C2SlipActv || Rte_SysCon_Variant_CSLR_C3SlipActv || Rte_SysCon_Variant_CSLR_C4SlipActv

static VAR(boolean, CSLR_VAR_INIT) VeCSLC_b_N_UpdFastEngh;/* '<S6>/Logical' */

#endif

static VAR(float32, CSLR_VAR_INIT) VeCSLC_dn_Nc1dotFromCpt;/* '<S6>/Merge16' */
static VAR(float32, CSLR_VAR_INIT) VeCSLC_dn_Nc2dotFromCpt;/* '<S6>/Merge17' */
static VAR(float32, CSLR_VAR_INIT) VeCSLC_dn_Nc3dotFromCpt;/* '<S6>/Merge18' */
static VAR(float32, CSLR_VAR_INIT) VeCSLC_dn_Nc4dotFromCpt;/* '<S6>/Merge19' */

#if Rte_SysCon_Variant_CSLR_C1SlipActv

static VAR(float32, CSLR_VAR_INIT) VeCSLC_t_N_Nc1UpdRate;/* '<S445>/Switch1' */

#endif

#if Rte_SysCon_Variant_CSLR_C2SlipActv

static VAR(float32, CSLR_VAR_INIT) VeCSLC_t_N_Nc2UpdRate;/* '<S484>/Switch' */

#endif

#if Rte_SysCon_Variant_CSLR_C2SlipActv

static VAR(float32, CSLR_VAR_INIT) VeCSLC_t_N_Nc3UpdRate;/* '<S523>/Switch' */

#endif

#if Rte_SysCon_Variant_CSLR_C4SlipActv

static VAR(float32, CSLR_VAR_INIT) VeCSLC_t_N_Nc4UpdRate;/* '<S562>/Switch1' */

#endif

static VAR(boolean, CSLR_VAR_INIT) VeCSLR_b_ChngInSpd_EngOff_C2;/* '<S8>/Logical6' */
static VAR(boolean, CSLR_VAR_INIT) VeCSLR_b_ChngInSpd_EngRun_C2;/* '<S8>/Logical1' */
static VAR(boolean, CSLR_VAR_INIT) VeCSLR_b_IdleSpeed_EngOff_C2;/* '<S8>/Logical7' */
static VAR(boolean, CSLR_VAR_INIT) VeCSLR_b_NC1Raw_FA;/* synthesized block */
static VAR(boolean, CSLR_VAR_INIT) VeCSLR_b_NC2Raw_FA;/* synthesized block */
static VAR(boolean, CSLR_VAR_INIT) VeCSLR_b_NC3Raw_FA;/* synthesized block */
static VAR(boolean, CSLR_VAR_INIT) VeCSLR_b_NC4Raw_FA;/* synthesized block */
static VAR(boolean, CSLR_VAR_INIT) VeCSLR_b_NiVld;/* '<S8>/Logical4' */
static VAR(boolean, CSLR_VAR_INIT) VeCSLR_b_SpdChngEngSt_C2;/* '<S8>/Logical2' */
static VAR(float32, CSLR_VAR_INIT) VeCSLR_dn_NC3dotRaw;/* synthesized block */
static VAR(float32, CSLR_VAR_INIT) VeCSLR_dn_NC4dotRaw;/* synthesized block */
static VAR(float32, CSLR_VAR_INIT) VeCSLR_n_Clch3_RawSlipSpeed;/* synthesized block */
static VAR(float32, CSLR_VAR_INIT) VeCSLR_n_Clch4_RawSlipSpeed;/* synthesized block */
static VAR(uint8, CSLR_VAR_INIT) VeCSLR_y_NC1Source_DS;/* '<Root>/DSM_1' */
static VAR(uint8, CSLR_VAR_INIT) VeCSLR_y_NC2Source_DS;/* '<Root>/DSM_2' */
static VAR(uint8, CSLR_VAR_INIT) VeCSLR_y_NC3Source_DS;/* '<Root>/DSM_3' */
static VAR(uint8, CSLR_VAR_INIT) VeCSLR_y_NC4Source_DS;/* '<Root>/DSM_4' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CSLR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CSLR
#include "MemMap.h"

VAR(B_CSLR_ac_T, CSLR_VAR_INIT) CSLR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CSLR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CSLR
#include "MemMap.h"

VAR(DW_CSLR_ac_T, CSLR_VAR_INIT) CSLR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CSLR
#include "MemMap.h"
#if !Rte_SysCon_Variant_CSLR_C1SlipActv || !Rte_SysCon_Variant_CSLR_C2SlipActv || !Rte_SysCon_Variant_CSLR_C4SlipActv

static FUNC(void, CSLR_CODE_LOCAL) CSLR_ac_Default(P2VAR(boolean, AUTOMATIC,
    CSLR_VAR_INIT) rty_CSLR_b_NC_FA, P2VAR(float32, AUTOMATIC, CSLR_VAR_INIT)
    rty_NCRaw, P2VAR(float32, AUTOMATIC, CSLR_VAR_INIT) rty_NCdotRaw, P2VAR
    (boolean, AUTOMATIC, CSLR_VAR_INIT) rty_NCTrigger, P2VAR(boolean, AUTOMATIC,
    CSLR_VAR_INIT) rty_NC_SlipSpdFailing);

#endif

#if Rte_SysCon_Variant_CSLR_C1SlipActv || Rte_SysCon_Variant_CSLR_C2SlipActv || Rte_SysCon_Variant_CSLR_C3SlipActv || Rte_SysCon_Variant_CSLR_C4SlipActv

static FUNC(void, CSLR_CODE_LOCAL) CSLR_ac_CSLL_SlipSpdCalcn(VAR(boolean,
    AUTOMATIC) rtu_Enable, CONST(float32, AUTOMATIC) rtu_Mat[8], VAR(float32,
    AUTOMATIC) rtu_Spd, VAR(float32, AUTOMATIC) rtu_Spd_i, VAR(float32,
    AUTOMATIC) rtu_Spd_e, VAR(float32, AUTOMATIC) rtu_Spd_k, VAR(float32,
    AUTOMATIC) rtu_Spd_h, VAR(float32, AUTOMATIC) rtu_Spd_p, VAR(float32,
    AUTOMATIC) rtu_Spd_c, VAR(float32, AUTOMATIC) rtu_Spd_a, VAR(boolean,
    AUTOMATIC) rtu_SpdFA, VAR(boolean, AUTOMATIC) rtu_SpdFA_p, VAR(boolean,
    AUTOMATIC) rtu_SpdFA_e, VAR(boolean, AUTOMATIC) rtu_SpdFA_m, VAR(boolean,
    AUTOMATIC) rtu_SpdFA_g, VAR(boolean, AUTOMATIC) rtu_SpdFA_h, VAR(boolean,
    AUTOMATIC) rtu_SpdFA_k, VAR(boolean, AUTOMATIC) rtu_SpdFA_c, VAR(float32,
    AUTOMATIC) rtu_UpdRate, VAR(float32, AUTOMATIC) rtu_Acce, VAR(float32,
    AUTOMATIC) rtu_Acce_c, VAR(float32, AUTOMATIC) rtu_Acce_f, VAR(float32,
    AUTOMATIC) rtu_Acce_i, VAR(float32, AUTOMATIC) rtu_Acce_j, VAR(float32,
    AUTOMATIC) rtu_Acce_b, VAR(float32, AUTOMATIC) rtu_Acce_m, VAR(float32,
    AUTOMATIC) rtu_Acce_cq, VAR(float32, AUTOMATIC) rtu_NCxDotCutOff, P2VAR
    (boolean, AUTOMATIC, CSLR_VAR_INIT) rty_NCx_FA, P2VAR(float32, AUTOMATIC,
    CSLR_VAR_INIT) rty_NCx, P2VAR(float32, AUTOMATIC, CSLR_VAR_INIT) rty_NCxdot,
    P2VAR(DW_CSLL_SlipSpdCalcn_CSLR_ac_T, AUTOMATIC, CSLR_VAR_INIT) localDW);

#endif

#if Rte_SysCon_Variant_CSLR_C1SlipActv || Rte_SysCon_Variant_CSLR_C2SlipActv || Rte_SysCon_Variant_CSLR_C3SlipActv || Rte_SysCon_Variant_CSLR_C4SlipActv

static FUNC(void, CSLR_CODE_LOCAL) CSLR_ac_AllSpdFstEnghVlid(P2VAR(boolean,
    AUTOMATIC, CSLR_VAR_INIT) rty_NCTrigger);

#endif

#if Rte_SysCon_Variant_CSLR_C1SlipActv || Rte_SysCon_Variant_CSLR_C2SlipActv || Rte_SysCon_Variant_CSLR_C3SlipActv || Rte_SysCon_Variant_CSLR_C4SlipActv

static FUNC(void, CSLR_CODE_LOCAL) CSLR_ac_NiFail(VAR(uint8, AUTOMATIC)
    rtu_NC_NSource_In, P2VAR(uint8, AUTOMATIC, CSLR_VAR_INIT) rty_NC_NSource);

#endif

#if Rte_SysCon_Variant_CSLR_C1SlipActv || Rte_SysCon_Variant_CSLR_C2SlipActv || Rte_SysCon_Variant_CSLR_C3SlipActv || Rte_SysCon_Variant_CSLR_C4SlipActv

static FUNC(void, CSLR_CODE_LOCAL) CSLR_ac_Else(VAR(boolean, AUTOMATIC)
    rtu_NiVld, VAR(boolean, AUTOMATIC) rtu_NoVld, VAR(boolean, AUTOMATIC)
    rtu_NtVld, VAR(uint8, AUTOMATIC) rtu_LeCSLR_y_NC_NSource, P2VAR(boolean,
    AUTOMATIC, CSLR_VAR_INIT) rty_NCTrigger);

#endif

#if Rte_SysCon_Variant_CSLR_C1SlipActv || Rte_SysCon_Variant_CSLR_C2SlipActv || Rte_SysCon_Variant_CSLR_C3SlipActv || Rte_SysCon_Variant_CSLR_C4SlipActv

static FUNC(void, CSLR_CODE_LOCAL) CSLR_ac_SlipSpdFailing(CONST(float32,
    AUTOMATIC) rtu_Matrix[8], P2VAR(boolean, AUTOMATIC, CSLR_VAR_INIT) rty_Out1);

#endif

#if Rte_SysCon_Variant_CSLR_C1SlipActv || Rte_SysCon_Variant_CSLR_C2SlipActv || Rte_SysCon_Variant_CSLR_C3SlipActv || Rte_SysCon_Variant_CSLR_C4SlipActv

static FUNC(void, CSLR_CODE_LOCAL) CSLR_ac_No_SlipSpdFailing(P2VAR(boolean,
    AUTOMATIC, CSLR_VAR_INIT) rty_Out1);

#endif

#if !Rte_SysCon_Variant_CSLR_C1SlipActv || !Rte_SysCon_Variant_CSLR_C2SlipActv || !Rte_SysCon_Variant_CSLR_C3SlipActv || !Rte_SysCon_Variant_CSLR_C4SlipActv

static FUNC(void, CSLR_CODE_LOCAL) CSLR_ac_Default_i(P2VAR(boolean, AUTOMATIC,
    CSLR_VAR_INIT) rty_CSLR_b_NC_FA, P2VAR(float32, AUTOMATIC, CSLR_VAR_INIT)
    rty_NCRaw, P2VAR(float32, AUTOMATIC, CSLR_VAR_INIT) rty_NCdotRaw, P2VAR
    (boolean, AUTOMATIC, CSLR_VAR_INIT) rty_NCTrigger, P2VAR(boolean, AUTOMATIC,
    CSLR_VAR_INIT) rty_NC_SlipSpdFailing);

#endif

static FUNC(void, CSLR_CODE_LOCAL) CSLR_ac_CSLC_ClchSlipCalc_Init(void);
static FUNC(void, CSLR_CODE_LOCAL) CSLR_ac_CSLC_ClchSlipCalc(void);

/*
 * Output and update for atomic system:
 *    '<S434>/Default'
 *    '<S435>/Default'
 *    '<S436>/Default'
 *    '<S437>/Default'
 */
#if !Rte_SysCon_Variant_CSLR_C1SlipActv || !Rte_SysCon_Variant_CSLR_C2SlipActv || !Rte_SysCon_Variant_CSLR_C4SlipActv

static FUNC(void, CSLR_CODE_LOCAL) CSLR_ac_Default(P2VAR(boolean, AUTOMATIC,
    CSLR_VAR_INIT) rty_CSLR_b_NC_FA, P2VAR(float32, AUTOMATIC, CSLR_VAR_INIT)
    rty_NCRaw, P2VAR(float32, AUTOMATIC, CSLR_VAR_INIT) rty_NCdotRaw, P2VAR
    (boolean, AUTOMATIC, CSLR_VAR_INIT) rty_NCTrigger, P2VAR(boolean, AUTOMATIC,
    CSLR_VAR_INIT) rty_NC_SlipSpdFailing)
{
    /* Constant: '<S438>/FALSE Constant2' */
    *rty_CSLR_b_NC_FA = false;

    /* Constant: '<S438>/Constant Value' */
    *rty_NCRaw = 0.0F;

    /* Constant: '<S438>/Constant Value1' */
    *rty_NCdotRaw = 0.0F;

    /* Constant: '<S438>/FALSE Constant3' */
    *rty_NCTrigger = false;

    /* Constant: '<S438>/FALSE Constant1' */
    *rty_NC_SlipSpdFailing = false;
}

#endif

/*
 * Output and update for enable system:
 *    '<S439>/CSLL_SlipSpdCalcn'
 *    '<S478>/CSLL_SlipSpdCalcn'
 *    '<S517>/CSLL_SlipSpdCalcn'
 *    '<S556>/CSLL_SlipSpdCalcn'
 *    '<S92>/CSLL_SlipSpdCalcn'
 *    '<S132>/CSLL_SlipSpdCalcn'
 *    '<S171>/CSLL_SlipSpdCalcn'
 *    '<S211>/CSLL_SlipSpdCalcn'
 *    '<S270>/CSLL_SlipSpdCalcn'
 *    '<S309>/CSLL_SlipSpdCalcn'
 *    ...
 */
#if Rte_SysCon_Variant_CSLR_C1SlipActv || Rte_SysCon_Variant_CSLR_C2SlipActv || Rte_SysCon_Variant_CSLR_C3SlipActv || Rte_SysCon_Variant_CSLR_C4SlipActv

static FUNC(void, CSLR_CODE_LOCAL) CSLR_ac_CSLL_SlipSpdCalcn(VAR(boolean,
    AUTOMATIC) rtu_Enable, CONST(float32, AUTOMATIC) rtu_Mat[8], VAR(float32,
    AUTOMATIC) rtu_Spd, VAR(float32, AUTOMATIC) rtu_Spd_i, VAR(float32,
    AUTOMATIC) rtu_Spd_e, VAR(float32, AUTOMATIC) rtu_Spd_k, VAR(float32,
    AUTOMATIC) rtu_Spd_h, VAR(float32, AUTOMATIC) rtu_Spd_p, VAR(float32,
    AUTOMATIC) rtu_Spd_c, VAR(float32, AUTOMATIC) rtu_Spd_a, VAR(boolean,
    AUTOMATIC) rtu_SpdFA, VAR(boolean, AUTOMATIC) rtu_SpdFA_p, VAR(boolean,
    AUTOMATIC) rtu_SpdFA_e, VAR(boolean, AUTOMATIC) rtu_SpdFA_m, VAR(boolean,
    AUTOMATIC) rtu_SpdFA_g, VAR(boolean, AUTOMATIC) rtu_SpdFA_h, VAR(boolean,
    AUTOMATIC) rtu_SpdFA_k, VAR(boolean, AUTOMATIC) rtu_SpdFA_c, VAR(float32,
    AUTOMATIC) rtu_UpdRate, VAR(float32, AUTOMATIC) rtu_Acce, VAR(float32,
    AUTOMATIC) rtu_Acce_c, VAR(float32, AUTOMATIC) rtu_Acce_f, VAR(float32,
    AUTOMATIC) rtu_Acce_i, VAR(float32, AUTOMATIC) rtu_Acce_j, VAR(float32,
    AUTOMATIC) rtu_Acce_b, VAR(float32, AUTOMATIC) rtu_Acce_m, VAR(float32,
    AUTOMATIC) rtu_Acce_cq, VAR(float32, AUTOMATIC) rtu_NCxDotCutOff, P2VAR
    (boolean, AUTOMATIC, CSLR_VAR_INIT) rty_NCx_FA, P2VAR(float32, AUTOMATIC,
    CSLR_VAR_INIT) rty_NCx, P2VAR(float32, AUTOMATIC, CSLR_VAR_INIT) rty_NCxdot,
    P2VAR(DW_CSLL_SlipSpdCalcn_CSLR_ac_T, AUTOMATIC, CSLR_VAR_INIT) localDW)
{
    sint32 i;
    float32 rtu_Spd_0[8];
    float32 rtb_Multiplication3_a;
    float32 rtb_Multiplication4_d;
    float32 rtb_Switch1;
    float32 tmp;
    float32 tmp_0;
    float32 tmp_1;
    float32 tmp_2;
    float32 tmp_3;
    float32 tmp_4;
    float32 tmp_5;
    boolean rtu_SpdFA_0[8];
    boolean rtb_Comparison;

    /* Outputs for Enabled SubSystem: '<S439>/CSLL_SlipSpdCalcn' incorporates:
     *  EnablePort: '<S441>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S441>/Product' */
        rtu_SpdFA_0[0] = rtu_SpdFA;
        rtu_SpdFA_0[1] = rtu_SpdFA_p;
        rtu_SpdFA_0[2] = rtu_SpdFA_e;
        rtu_SpdFA_0[3] = rtu_SpdFA_m;
        rtu_SpdFA_0[4] = rtu_SpdFA_g;
        rtu_SpdFA_0[5] = rtu_SpdFA_h;
        rtu_SpdFA_0[6] = rtu_SpdFA_k;
        rtu_SpdFA_0[7] = rtu_SpdFA_c;

        /* Product: '<S441>/Product' incorporates:
         *  Abs: '<S441>/Abs'
         */
        rtb_Multiplication4_d = 0.0F;
        for (i = 0; i < 8; i++)
        {
            rtb_Multiplication4_d += rtu_SpdFA_0[i] ? fabsf(rtu_Mat[i]) : 0.0F;
        }

        /* RelationalOperator: '<S441>/Comparison' incorporates:
         *  Constant: '<S441>/Constant Value'
         *  Product: '<S441>/Product'
         */
        rtb_Comparison = (rtb_Multiplication4_d > 0.0F);

        /* Logic: '<S446>/AND' */
        *rty_NCx_FA = rtb_Comparison;

        /* Switch: '<S450>/Switch1' */
        if (rtb_Comparison)
        {
            /* Switch: '<S450>/Switch1' incorporates:
             *  Constant: '<S441>/Constant Value1'
             */
            rtb_Switch1 = 0.0F;
        }
        else
        {
            /* SignalConversion generated from: '<S441>/Product1' */
            rtu_Spd_0[0] = rtu_Spd;
            rtu_Spd_0[1] = rtu_Spd_i;
            rtu_Spd_0[2] = rtu_Spd_e;
            rtu_Spd_0[3] = rtu_Spd_k;
            rtu_Spd_0[4] = rtu_Spd_h;
            rtu_Spd_0[5] = rtu_Spd_p;
            rtu_Spd_0[6] = rtu_Spd_c;
            rtu_Spd_0[7] = rtu_Spd_a;

            /* Product: '<S441>/Product1' */
            rtb_Switch1 = 0.0F;
            for (i = 0; i < 8; i++)
            {
                rtb_Switch1 += rtu_Mat[i] * rtu_Spd_0[i];
            }

            /* End of Product: '<S441>/Product1' */
        }

        /* End of Switch: '<S450>/Switch1' */

        /* If: '<S441>/If' incorporates:
         *  Constant: '<S452>/Calib'
         *  Constant: '<S453>/Calib'
         */
        if ((KeCSLR_b_EnaCluSlipAcceCalcnFromCpt) && (KeCSLR_b_UseItAcce))
        {
            /* Outputs for IfAction SubSystem: '<S441>/CalcnFrmComptSpd' incorporates:
             *  ActionPort: '<S448>/Action Port'
             */
            /* Product: '<S455>/Multiplication3' incorporates:
             *  Constant: '<S455>/Constant Value1'
             */
            rtb_Multiplication3_a = rtu_UpdRate / 2.0F;

            /* Sum: '<S455>/Summation2' */
            rtb_Multiplication4_d = rtb_Multiplication3_a - rtu_NCxDotCutOff;

            /* Product: '<S455>/Multiplication4' incorporates:
             *  UnitDelay: '<S455>/Unit Delay1'
             */
            for (i = 0; i < 8; i++)
            {
                localDW->UnitDelay1_DSTATE_b[i] *= rtb_Multiplication4_d;
            }

            /* End of Product: '<S455>/Multiplication4' */

            /* Sum: '<S455>/Summation' incorporates:
             *  UnitDelay: '<S455>/Unit Delay'
             *  UnitDelay: '<S455>/Unit Delay1'
             */
            rtb_Multiplication4_d = localDW->UnitDelay1_DSTATE_b[0];
            tmp = localDW->UnitDelay1_DSTATE_b[1];
            tmp_0 = localDW->UnitDelay1_DSTATE_b[2];
            tmp_1 = localDW->UnitDelay1_DSTATE_b[3];
            tmp_2 = localDW->UnitDelay1_DSTATE_b[4];
            tmp_3 = localDW->UnitDelay1_DSTATE_b[5];
            tmp_4 = localDW->UnitDelay1_DSTATE_b[6];
            tmp_5 = localDW->UnitDelay1_DSTATE_b[7];
            localDW->UnitDelay1_DSTATE_b[0] = (rtu_Spd - rtb_Multiplication4_d)
                - localDW->UnitDelay_DSTATE_g[0];
            localDW->UnitDelay1_DSTATE_b[1] = (rtu_Spd_i - tmp) -
                localDW->UnitDelay_DSTATE_g[1];
            localDW->UnitDelay1_DSTATE_b[2] = (rtu_Spd_e - tmp_0) -
                localDW->UnitDelay_DSTATE_g[2];
            localDW->UnitDelay1_DSTATE_b[3] = (rtu_Spd_k - tmp_1) -
                localDW->UnitDelay_DSTATE_g[3];
            localDW->UnitDelay1_DSTATE_b[4] = (rtu_Spd_h - tmp_2) -
                localDW->UnitDelay_DSTATE_g[4];
            localDW->UnitDelay1_DSTATE_b[5] = (rtu_Spd_p - tmp_3) -
                localDW->UnitDelay_DSTATE_g[5];
            localDW->UnitDelay1_DSTATE_b[6] = (rtu_Spd_c - tmp_4) -
                localDW->UnitDelay_DSTATE_g[6];
            localDW->UnitDelay1_DSTATE_b[7] = (rtu_Spd_a - tmp_5) -
                localDW->UnitDelay_DSTATE_g[7];

            /* Sum: '<S455>/Summation1' */
            rtb_Multiplication4_d = rtb_Multiplication3_a + rtu_NCxDotCutOff;

            /* Product: '<S448>/Product1' */
            rtb_Multiplication3_a = 0.0F;
            for (i = 0; i < 8; i++)
            {
                /* Product: '<S455>/Multiplication2' incorporates:
                 *  UnitDelay: '<S455>/Unit Delay1'
                 */
                localDW->UnitDelay1_DSTATE_b[i] /= rtb_Multiplication4_d;

                /* Product: '<S448>/Product1' incorporates:
                 *  UnitDelay: '<S455>/Unit Delay1'
                 */
                rtb_Multiplication3_a += rtu_Mat[i] *
                    localDW->UnitDelay1_DSTATE_b[i];
            }

            /* Update for UnitDelay: '<S455>/Unit Delay' */
            localDW->UnitDelay_DSTATE_g[0] = rtu_Spd;
            localDW->UnitDelay_DSTATE_g[1] = rtu_Spd_i;
            localDW->UnitDelay_DSTATE_g[2] = rtu_Spd_e;
            localDW->UnitDelay_DSTATE_g[3] = rtu_Spd_k;
            localDW->UnitDelay_DSTATE_g[4] = rtu_Spd_h;
            localDW->UnitDelay_DSTATE_g[5] = rtu_Spd_p;
            localDW->UnitDelay_DSTATE_g[6] = rtu_Spd_c;
            localDW->UnitDelay_DSTATE_g[7] = rtu_Spd_a;

            /* End of Outputs for SubSystem: '<S441>/CalcnFrmComptSpd' */
        }
        else if (KeCSLR_b_EnaCluSlipAcceCalcnFromCpt)
        {
            /* Outputs for IfAction SubSystem: '<S441>/CalcnFrmComptAcc' incorporates:
             *  ActionPort: '<S447>/Action Port'
             */
            /* SignalConversion generated from: '<S447>/Product1' */
            rtu_Spd_0[0] = rtu_Acce;
            rtu_Spd_0[1] = rtu_Acce_c;
            rtu_Spd_0[2] = rtu_Acce_f;
            rtu_Spd_0[3] = rtu_Acce_i;
            rtu_Spd_0[4] = rtu_Acce_j;
            rtu_Spd_0[5] = rtu_Acce_b;
            rtu_Spd_0[6] = rtu_Acce_m;
            rtu_Spd_0[7] = rtu_Acce_cq;

            /* Product: '<S447>/Product1' */
            rtb_Multiplication3_a = 0.0F;
            for (i = 0; i < 8; i++)
            {
                rtb_Multiplication3_a += rtu_Mat[i] * rtu_Spd_0[i];
            }

            /* End of Product: '<S447>/Product1' */
            /* End of Outputs for SubSystem: '<S441>/CalcnFrmComptAcc' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S441>/CalcnFrmDerivt' incorporates:
             *  ActionPort: '<S449>/Action Port'
             */
            /* Product: '<S456>/Multiplication3' incorporates:
             *  Constant: '<S456>/Constant Value1'
             */
            rtb_Multiplication3_a = rtu_UpdRate / 2.0F;

            /* Product: '<S456>/Multiplication4' incorporates:
             *  Sum: '<S456>/Summation2'
             *  UnitDelay: '<S456>/Unit Delay1'
             */
            rtb_Multiplication4_d = (rtb_Multiplication3_a - rtu_NCxDotCutOff) *
                localDW->UnitDelay1_DSTATE;

            /* UnitDelay: '<S456>/Unit Delay' incorporates:
             *  UnitDelay: '<S456>/Unit Delay1'
             */
            localDW->UnitDelay1_DSTATE = localDW->UnitDelay_DSTATE;

            /* Product: '<S456>/Multiplication2' incorporates:
             *  Sum: '<S456>/Summation'
             *  Sum: '<S456>/Summation1'
             *  UnitDelay: '<S456>/Unit Delay1'
             */
            localDW->UnitDelay1_DSTATE = ((rtb_Switch1 - rtb_Multiplication4_d)
                - localDW->UnitDelay1_DSTATE) / (rtb_Multiplication3_a +
                rtu_NCxDotCutOff);

            /* Merge: '<S441>/Merge' incorporates:
             *  Gain: '<S458>/Gain'
             *  UnitDelay: '<S456>/Unit Delay1'
             */
            rtb_Multiplication3_a = localDW->UnitDelay1_DSTATE;

            /* Update for UnitDelay: '<S456>/Unit Delay' */
            localDW->UnitDelay_DSTATE = rtb_Switch1;

            /* End of Outputs for SubSystem: '<S441>/CalcnFrmDerivt' */
        }

        /* End of If: '<S441>/If' */

        /* Switch: '<S451>/Switch1' incorporates:
         *  Constant: '<S441>/Constant Value3'
         */
        if (rtb_Comparison)
        {
            *rty_NCxdot = 0.0F;
        }
        else
        {
            *rty_NCxdot = rtb_Multiplication3_a;
        }

        /* End of Switch: '<S451>/Switch1' */

        /* Gain: '<S454>/Gain' */
        *rty_NCx = rtb_Switch1;
    }

    /* End of Outputs for SubSystem: '<S439>/CSLL_SlipSpdCalcn' */
}

#endif

/*
 * Output and update for action system:
 *    '<S439>/AllSpdFstEnghVlid'
 *    '<S478>/AllSpdFstEnghVlid'
 *    '<S517>/AllSpdFstEnghVlid'
 *    '<S556>/AllSpdFstEnghVlid'
 *    '<S92>/AllSpdFstEnghVlid'
 *    '<S132>/AllSpdFstEnghVlid'
 *    '<S171>/AllSpdFstEnghVlid'
 *    '<S211>/AllSpdFstEnghVlid'
 *    '<S270>/AllSpdFstEnghVlid'
 *    '<S309>/AllSpdFstEnghVlid'
 *    ...
 */
#if Rte_SysCon_Variant_CSLR_C1SlipActv || Rte_SysCon_Variant_CSLR_C2SlipActv || Rte_SysCon_Variant_CSLR_C3SlipActv || Rte_SysCon_Variant_CSLR_C4SlipActv

static FUNC(void, CSLR_CODE_LOCAL) CSLR_ac_AllSpdFstEnghVlid(P2VAR(boolean,
    AUTOMATIC, CSLR_VAR_INIT) rty_NCTrigger)
{
    /* SignalConversion generated from: '<S440>/NCTrigger' incorporates:
     *  Constant: '<S440>/TRUE Constant'
     */
    *rty_NCTrigger = true;
}

#endif

/*
 * Output and update for action system:
 *    '<S442>/NiFail'
 *    '<S442>/NoFail'
 *    '<S442>/NtFail'
 *    '<S481>/NiFail'
 *    '<S481>/NoFail'
 *    '<S481>/NtFail'
 *    '<S520>/NiFail'
 *    '<S520>/NoFail'
 *    '<S520>/NtFail'
 *    '<S559>/NiFail'
 *    ...
 */
#if Rte_SysCon_Variant_CSLR_C1SlipActv || Rte_SysCon_Variant_CSLR_C2SlipActv || Rte_SysCon_Variant_CSLR_C3SlipActv || Rte_SysCon_Variant_CSLR_C4SlipActv

static FUNC(void, CSLR_CODE_LOCAL) CSLR_ac_NiFail(VAR(uint8, AUTOMATIC)
    rtu_NC_NSource_In, P2VAR(uint8, AUTOMATIC, CSLR_VAR_INIT) rty_NC_NSource)
{
    /* Inport: '<S460>/NC_NSource_In' */
    *rty_NC_NSource = rtu_NC_NSource_In;
}

#endif

/*
 * Output and update for action system:
 *    '<S439>/Else'
 *    '<S478>/Else'
 *    '<S517>/Else'
 *    '<S556>/Else'
 *    '<S92>/Else'
 *    '<S132>/Else'
 *    '<S171>/Else'
 *    '<S211>/Else'
 *    '<S270>/Else'
 *    '<S309>/Else'
 *    ...
 */
#if Rte_SysCon_Variant_CSLR_C1SlipActv || Rte_SysCon_Variant_CSLR_C2SlipActv || Rte_SysCon_Variant_CSLR_C3SlipActv || Rte_SysCon_Variant_CSLR_C4SlipActv

static FUNC(void, CSLR_CODE_LOCAL) CSLR_ac_Else(VAR(boolean, AUTOMATIC)
    rtu_NiVld, VAR(boolean, AUTOMATIC) rtu_NoVld, VAR(boolean, AUTOMATIC)
    rtu_NtVld, VAR(uint8, AUTOMATIC) rtu_LeCSLR_y_NC_NSource, P2VAR(boolean,
    AUTOMATIC, CSLR_VAR_INIT) rty_NCTrigger)
{
    uint8 rtb_Merge4;
    uint8 rtb_Merge_b;

    /* If: '<S442>/If' incorporates:
     *  S-Function (sfix_bitop): '<S467>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S467>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S467>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S468>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S468>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S468>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S469>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S469>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S469>/FixPt Bitwise Operator5'
     */
    if (rtu_NiVld)
    {
        /* Outputs for IfAction SubSystem: '<S442>/NiPass' incorporates:
         *  ActionPort: '<S461>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S442>/NaNbNcPass' */
        /* Merge: '<S442>/Merge' incorporates:
         *  S-Function (sfix_bitop): '<S467>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S467>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S467>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S468>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S468>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S468>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S469>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S469>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S469>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S470>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S470>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S470>/FixPt Bitwise Operator5'
         *  SignalConversion generated from: '<S461>/NC_Source'
         */
        rtb_Merge_b = (uint8)(~((uint8)(((uint8)(~((uint8)(~((uint8)(((uint8)
            (~((uint8)(~((uint8)(((uint8)(~((uint8)(~((uint8)(((uint8)
            (~rtu_LeCSLR_y_NC_NSource)) | ((uint8)1))))))) | ((uint8)2))))))) |
            ((uint8)4))))))) | ((uint8)8))));

        /* End of Outputs for SubSystem: '<S442>/NaNbNcPass' */
        /* End of Outputs for SubSystem: '<S442>/NiPass' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S442>/NiFail' incorporates:
         *  ActionPort: '<S460>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S442>/NaNbNcPass' */
        CSLR_ac_NiFail((uint8)(~((uint8)(((uint8)(~((uint8)(~((uint8)(((uint8)
            (~((uint8)(~((uint8)(((uint8)(~rtu_LeCSLR_y_NC_NSource)) | ((uint8)1)))))))
                                | ((uint8)2))))))) | ((uint8)4)))), &rtb_Merge_b);

        /* End of Outputs for SubSystem: '<S442>/NaNbNcPass' */
        /* End of Outputs for SubSystem: '<S442>/NiFail' */
    }

    /* End of If: '<S442>/If' */

    /* If: '<S442>/If1' */
    if (rtu_NoVld)
    {
        /* Outputs for IfAction SubSystem: '<S442>/NoPass' incorporates:
         *  ActionPort: '<S463>/Action Port'
         */
        /* Merge: '<S442>/Merge4' incorporates:
         *  S-Function (sfix_bitop): '<S471>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S471>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S471>/FixPt Bitwise Operator5'
         *  SignalConversion generated from: '<S463>/NC_Source'
         */
        rtb_Merge4 = (uint8)(~((uint8)(((uint8)(~rtb_Merge_b)) | ((uint8)16))));

        /* End of Outputs for SubSystem: '<S442>/NoPass' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S442>/NoFail' incorporates:
         *  ActionPort: '<S462>/Action Port'
         */
        CSLR_ac_NiFail(rtb_Merge_b, &rtb_Merge4);

        /* End of Outputs for SubSystem: '<S442>/NoFail' */
    }

    /* End of If: '<S442>/If1' */

    /* If: '<S442>/If2' */
    if (rtu_NtVld)
    {
        /* Outputs for IfAction SubSystem: '<S442>/NtPass' incorporates:
         *  ActionPort: '<S466>/Action Port'
         */
        /* Merge: '<S442>/Merge8' incorporates:
         *  S-Function (sfix_bitop): '<S474>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S474>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S474>/FixPt Bitwise Operator5'
         *  SignalConversion generated from: '<S466>/NC_Source'
         */
        rtb_Merge_b = (uint8)(~((uint8)(((uint8)(~rtb_Merge4)) | ((uint8)32))));

        /* End of Outputs for SubSystem: '<S442>/NtPass' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S442>/NtFail' incorporates:
         *  ActionPort: '<S465>/Action Port'
         */
        CSLR_ac_NiFail(rtb_Merge4, &rtb_Merge_b);

        /* End of Outputs for SubSystem: '<S442>/NtFail' */
    }

    /* End of If: '<S442>/If2' */

    /* Outputs for Atomic SubSystem: '<S442>/NrepLNrepRPass' */
    /* RelationalOperator: '<S442>/Comparison4' incorporates:
     *  Constant: '<S442>/Constant Value'
     *  S-Function (sfix_bitop): '<S472>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S472>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S472>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S473>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S473>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S473>/FixPt Bitwise Operator5'
     */
    *rty_NCTrigger = (((sint32)((uint8)(~((uint8)(((uint16)((uint8)(~((uint8)
        (~((uint8)(((uint8)(~rtb_Merge_b)) | ((uint8)64)))))))) | ((uint16)128))))))
                      == 0);

    /* End of Outputs for SubSystem: '<S442>/NrepLNrepRPass' */
}

#endif

/*
 * Output and update for action system:
 *    '<S444>/SlipSpdFailing'
 *    '<S483>/SlipSpdFailing'
 *    '<S522>/SlipSpdFailing'
 *    '<S561>/SlipSpdFailing'
 *    '<S97>/SlipSpdFailing'
 *    '<S137>/SlipSpdFailing'
 *    '<S176>/SlipSpdFailing'
 *    '<S216>/SlipSpdFailing'
 *    '<S275>/SlipSpdFailing'
 *    '<S314>/SlipSpdFailing'
 *    ...
 */
#if Rte_SysCon_Variant_CSLR_C1SlipActv || Rte_SysCon_Variant_CSLR_C2SlipActv || Rte_SysCon_Variant_CSLR_C3SlipActv || Rte_SysCon_Variant_CSLR_C4SlipActv

static FUNC(void, CSLR_CODE_LOCAL) CSLR_ac_SlipSpdFailing(CONST(float32,
    AUTOMATIC) rtu_Matrix[8], P2VAR(boolean, AUTOMATIC, CSLR_VAR_INIT) rty_Out1)
{
    /* RelationalOperator: '<S476>/Comparison5' incorporates:
     *  Constant: '<S476>/Constant Value1'
     */
    *rty_Out1 = (rtu_Matrix[3] != 0.0F);
}

#endif

/*
 * Output and update for action system:
 *    '<S444>/No_SlipSpdFailing '
 *    '<S483>/No_SlipSpdFailing '
 *    '<S522>/No_SlipSpdFailing '
 *    '<S561>/No_SlipSpdFailing '
 *    '<S97>/No_SlipSpdFailing '
 *    '<S137>/No_SlipSpdFailing '
 *    '<S176>/No_SlipSpdFailing '
 *    '<S216>/No_SlipSpdFailing '
 *    '<S275>/No_SlipSpdFailing '
 *    '<S314>/No_SlipSpdFailing '
 *    ...
 */
#if Rte_SysCon_Variant_CSLR_C1SlipActv || Rte_SysCon_Variant_CSLR_C2SlipActv || Rte_SysCon_Variant_CSLR_C3SlipActv || Rte_SysCon_Variant_CSLR_C4SlipActv

static FUNC(void, CSLR_CODE_LOCAL) CSLR_ac_No_SlipSpdFailing(P2VAR(boolean,
    AUTOMATIC, CSLR_VAR_INIT) rty_Out1)
{
    /* SignalConversion generated from: '<S475>/Out1' incorporates:
     *  Constant: '<S475>/Constant Value'
     */
    *rty_Out1 = false;
}

#endif

/*
 * Output and update for atomic system:
 *    '<S86>/Default'
 *    '<S87>/Default'
 *    '<S88>/Default'
 *    '<S89>/Default'
 *    '<S260>/Default'
 *    '<S261>/Default'
 *    '<S262>/Default'
 *    '<S263>/Default'
 */
#if !Rte_SysCon_Variant_CSLR_C1SlipActv || !Rte_SysCon_Variant_CSLR_C2SlipActv || !Rte_SysCon_Variant_CSLR_C3SlipActv || !Rte_SysCon_Variant_CSLR_C4SlipActv

static FUNC(void, CSLR_CODE_LOCAL) CSLR_ac_Default_i(P2VAR(boolean, AUTOMATIC,
    CSLR_VAR_INIT) rty_CSLR_b_NC_FA, P2VAR(float32, AUTOMATIC, CSLR_VAR_INIT)
    rty_NCRaw, P2VAR(float32, AUTOMATIC, CSLR_VAR_INIT) rty_NCdotRaw, P2VAR
    (boolean, AUTOMATIC, CSLR_VAR_INIT) rty_NCTrigger, P2VAR(boolean, AUTOMATIC,
    CSLR_VAR_INIT) rty_NC_SlipSpdFailing)
{
    /* Constant: '<S91>/FALSE Constant2' */
    *rty_CSLR_b_NC_FA = false;

    /* Constant: '<S91>/Constant Value' */
    *rty_NCRaw = 0.0F;

    /* Constant: '<S91>/Constant Value1' */
    *rty_NCdotRaw = 0.0F;

    /* Constant: '<S91>/FALSE Constant3' */
    *rty_NCTrigger = false;

    /* Constant: '<S91>/FALSE Constant1' */
    *rty_NC_SlipSpdFailing = false;
}

#endif

/* System initialize for atomic system: '<S3>/CSLC_ClchSlipCalc' */
static FUNC(void, CSLR_CODE_LOCAL) CSLR_ac_CSLC_ClchSlipCalc_Init(void)
{
    /* Start for If: '<S6>/If' */
    CSLR_ac_DW.If_ActiveSubsystem = -1;
}

/*
 * Outputs for atomic system: '<S3>/CSLC_ClchSlipCalc'
 * Block description for: '<S3>/CSLC_ClchSlipCalc'
 *   ::CM(HSEC_ClchSlipCalc)
 */
static FUNC(void, CSLR_CODE_LOCAL) CSLR_ac_CSLC_ClchSlipCalc(void)
{
    /* local block i/o variables */
    boolean rtb_VariantMergeForOutportNC_SlipSpdFail;
    boolean rtb_VariantMergeForOutportNC_SlipSpdFa_h;
    boolean rtb_VariantMergeForOutportNC_SlipSpdF_hi;
    boolean rtb_VariantMergeForOutportNC_SlipSpd_hiu;
    float32 tmpRead_0;
    float32 tmpRead_1;
    float32 tmpRead_2;
    float32 tmpRead_4;
    float32 tmpRead_5;
    float32 tmpRead_6;
    TeHSER_e_RngEqnSel tmpRead;
    TeOHSR_e_VLE_DriveStat tmpRead_3;

#if Rte_SysCon_Variant_CSLR_C1SlipActv || Rte_SysCon_Variant_CSLR_C2SlipActv || Rte_SysCon_Variant_CSLR_C3SlipActv || Rte_SysCon_Variant_CSLR_C4SlipActv

    boolean rtb_Logical4;

#endif

    float32 rtb_Selector1[8];
    float32 rtb_Switch2;
    float32 rtb_Switch3;
    float32 rtb_Switch5;

#if (!(!Rte_SysCon_Variant_CSLR_C1SlipActv) && Rte_SysCon_Variant_CSLC_ClcStRstTrggr) || (Rte_SysCon_Variant_CSLC_ClcStRstTrggr && Rte_SysCon_Variant_CSLR_C1SlipActv)

    boolean rtb_Comparison1_e[8];

#endif

#if Rte_SysCon_Variant_CSLC_ClcStRstTrggr && Rte_SysCon_Variant_CSLR_C2SlipActv

    boolean rtb_Comparison2_b[8];

#endif

#if Rte_SysCon_Variant_CSLC_ClcStRstTrggr && Rte_SysCon_Variant_CSLR_C3SlipActv

    boolean rtb_Comparison3_c[8];

#endif

#if Rte_SysCon_Variant_CSLC_ClcStRstTrggr && Rte_SysCon_Variant_CSLR_C4SlipActv

    boolean rtb_Comparison5[8];

#endif

    sint32 i;
    float32 *rtb_Merge21_0;

    /* Inport: '<Root>/VeOHSR_e_ILEState' */
    (void)Rte_Read_VeOHSR_e_ILEState_Value(&tmpRead_3);

    /* Inport: '<Root>/VeHSER_e_RngEqnSel' */
    (void)Rte_Read_VeHSER_e_RngEqnSel_Value(&tmpRead);

    /* RelationalOperator: '<S6>/Comparison3' incorporates:
     *  Logic: '<S6>/Logical'
     *  Logic: '<S6>/Logical3'
     *  Logic: '<S6>/Logical4'
     *  RelationalOperator: '<S6>/Comparison1'
     *  RelationalOperator: '<S6>/Comparison2'
     */
#if Rte_SysCon_Variant_CSLR_C1SlipActv || Rte_SysCon_Variant_CSLR_C2SlipActv || Rte_SysCon_Variant_CSLR_C3SlipActv || Rte_SysCon_Variant_CSLR_C4SlipActv

    /* Logic: '<S6>/Logical' incorporates:
     *  Constant: '<S27>/Calib'
     *  Constant: '<S614>/Calib'
     */
    VeCSLC_b_N_UpdFastEngh = (((CSLR_ac_B.Switch1_je <= HeCSLR_t_MedTED_dT) &&
        (CSLR_ac_B.Switch_b <= HeCSLR_t_MedTED_dT)) && (KeCSLR_t_NtUpdRate <=
        HeCSLR_t_MedTED_dT));

    /* Logic: '<S6>/Logical3' */
    VeCSLC_b_N_SpdSrcVld = ((VeCSLR_b_NiVld) && (CSLR_ac_B.Merge1));

    /* Logic: '<S6>/Logical4' */
    rtb_Logical4 = ((VeCSLC_b_N_UpdFastEngh) && (VeCSLC_b_N_SpdSrcVld));

#endif

    /* End of RelationalOperator: '<S6>/Comparison3' */

    /* Inport: '<Root>/VeMSPR_dn_MtrC_AccelRaw' */
    (void)Rte_Read_VeMSPR_dn_MtrC_AccelRaw_Value(&tmpRead_6);

    /* Inport: '<Root>/VeMSPR_dn_MtrB_AccelRaw' */
    (void)Rte_Read_VeMSPR_dn_MtrB_AccelRaw_Value(&tmpRead_5);

    /* Inport: '<Root>/VeMSPR_dn_MtrA_AccelRaw' */
    (void)Rte_Read_VeMSPR_dn_MtrA_AccelRaw_Value(&tmpRead_4);

    /* Inport: '<Root>/VeMSPR_dn_MtrC_Accel' */
    (void)Rte_Read_VeMSPR_dn_MtrC_Accel_Value(&rtb_Switch5);

    /* Inport: '<Root>/VeMSPR_dn_MtrB_Accel' */
    (void)Rte_Read_VeMSPR_dn_MtrB_Accel_Value(&rtb_Switch3);

    /* Inport: '<Root>/VeMSPR_dn_MtrA_Accel' */
    (void)Rte_Read_VeMSPR_dn_MtrA_Accel_Value(&rtb_Switch2);

    /* Inport: '<Root>/VeMSPR_n_MtrC_SpdRaw' */
    (void)Rte_Read_VeMSPR_n_MtrC_SpdRaw_Value(&tmpRead_2);

    /* Inport: '<Root>/VeMSPR_n_MtrB_SpdRaw' */
    (void)Rte_Read_VeMSPR_n_MtrB_SpdRaw_Value(&tmpRead_1);

    /* Inport: '<Root>/VeMSPR_n_MtrA_SpdRaw' */
    (void)Rte_Read_VeMSPR_n_MtrA_SpdRaw_Value(&tmpRead_0);

    /* Inport: '<Root>/VeMSPR_n_MtrC_Spd' */
    (void)Rte_Read_VeMSPR_n_MtrC_Spd_Value(&CSLR_ac_B.Switch4);

    /* Inport: '<Root>/VeMSPR_n_MtrB_Spd' */
    (void)Rte_Read_VeMSPR_n_MtrB_Spd_Value(&CSLR_ac_B.Switch1_je);

    /* Inport: '<Root>/VeMSPR_n_MtrA_Spd' */
    (void)Rte_Read_VeMSPR_n_MtrA_Spd_Value(&CSLR_ac_B.Switch_b);

    /* Switch: '<S17>/Switch' incorporates:
     *  Constant: '<S595>/Calib'
     */
    if (KeCSLR_b_UseRawMtrASpd)
    {
        /* Switch: '<S17>/Switch' incorporates:
         *  Inport: '<Root>/VeMSPR_n_MtrA_Spd'
         */
        CSLR_ac_B.Switch_b = tmpRead_0;
    }

    /* End of Switch: '<S17>/Switch' */

    /* Switch: '<S17>/Switch1' incorporates:
     *  Constant: '<S597>/Calib'
     */
    if (KeCSLR_b_UseRawMtrBSpd)
    {
        /* Switch: '<S17>/Switch1' incorporates:
         *  Inport: '<Root>/VeMSPR_n_MtrB_Spd'
         */
        CSLR_ac_B.Switch1_je = tmpRead_1;
    }

    /* End of Switch: '<S17>/Switch1' */

    /* Switch: '<S17>/Switch4' incorporates:
     *  Constant: '<S599>/Calib'
     */
    if (KeCSLR_b_UseRawMtrCSpd)
    {
        /* Switch: '<S17>/Switch4' incorporates:
         *  Inport: '<Root>/VeMSPR_n_MtrC_Spd'
         */
        CSLR_ac_B.Switch4 = tmpRead_2;
    }

    /* End of Switch: '<S17>/Switch4' */
    for (i = 0; i < 8; i++)
    {
        /* Selector: '<S16>/Selector1' incorporates:
         *  SignalConversion: '<S5>/Signal Conversion'
         */
        rtb_Selector1[i] = CSLR_ac_B.SignalConversion[i * 4];
    }

    /* Switch: '<S17>/Switch2' incorporates:
     *  Constant: '<S594>/Calib'
     */
    if (KeCSLR_b_UseRawMtrAAcce)
    {
        /* Switch: '<S17>/Switch2' */
        rtb_Switch2 = tmpRead_4;
    }

    /* End of Switch: '<S17>/Switch2' */

    /* Switch: '<S17>/Switch3' incorporates:
     *  Constant: '<S596>/Calib'
     */
    if (KeCSLR_b_UseRawMtrBAcce)
    {
        /* Switch: '<S17>/Switch3' */
        rtb_Switch3 = tmpRead_5;
    }

    /* End of Switch: '<S17>/Switch3' */

    /* Switch: '<S17>/Switch5' incorporates:
     *  Constant: '<S598>/Calib'
     */
    if (KeCSLR_b_UseRawMtrCAcce)
    {
        /* Switch: '<S17>/Switch5' */
        rtb_Switch5 = tmpRead_6;
    }

    /* End of Switch: '<S17>/Switch5' */

    /* Outputs for Atomic SubSystem: '<S16>/Nc1Calc' */
#if Rte_SysCon_Variant_CSLR_C1SlipActv

    /* Outputs for Atomic SubSystem: '<S434>/NcCalc' */
    /* DataStoreWrite: '<S439>/Data Store Write3' incorporates:
     *  Constant: '<S430>/Calib'
     */
    VeCSLR_y_NC1Source_DS = KeCSLR_y_NC1_NSource;

    /* If: '<S439>/If' incorporates:
     *  Constant: '<S10>/TRUE Constant1'
     *  Constant: '<S430>/Calib'
     */
    if (rtb_Logical4)
    {
        /* Outputs for IfAction SubSystem: '<S439>/AllSpdFstEnghVlid' incorporates:
         *  ActionPort: '<S440>/Action Port'
         */
        CSLR_ac_AllSpdFstEnghVlid((&(VeCSLC_b_N_Nc1Trigger)));

        /* End of Outputs for SubSystem: '<S439>/AllSpdFstEnghVlid' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S439>/Else' incorporates:
         *  ActionPort: '<S442>/Action Port'
         */
        CSLR_ac_Else(VeCSLR_b_NiVld, CSLR_ac_B.Merge1, true,
                     KeCSLR_y_NC1_NSource, (&(VeCSLC_b_N_Nc1Trigger)));

        /* End of Outputs for SubSystem: '<S439>/Else' */
    }

    /* End of If: '<S439>/If' */

    /* Outputs for Atomic SubSystem: '<S439>/Stop Watch Reset Enabled' */
    /* Switch: '<S445>/Switch1' incorporates:
     *  UnitDelay: '<S439>/Unit Delay'
     */
    if (CSLR_ac_DW.UnitDelay_DSTATE_bx)
    {
        /* Switch: '<S445>/Switch1' incorporates:
         *  Constant: '<S445>/Constant Value2'
         */
        VeCSLC_t_N_Nc1UpdRate = 0.0F;
    }
    else
    {
        /* Switch: '<S445>/Switch1' incorporates:
         *  Constant: '<S443>/Calib'
         *  Sum: '<S445>/Subtraction'
         *  UnitDelay: '<S445>/Unit Delay'
         */
        VeCSLC_t_N_Nc1UpdRate = HeCSLR_t_MedTED_dT + VeCSLC_t_N_Nc1UpdRate;
    }

    /* End of Switch: '<S445>/Switch1' */
    /* End of Outputs for SubSystem: '<S439>/Stop Watch Reset Enabled' */

    /* Outputs for Enabled SubSystem: '<S439>/CSLL_SlipSpdCalcn' */
    /* Constant: '<S1>/Const' incorporates:
     *  Constant: '<S17>/Constant Value2'
     *  Constant: '<S17>/Constant Value3'
     *  Constant: '<S426>/Calib'
     *  Constant: '<S443>/Calib'
     *  Sum: '<S439>/Sum'
     */
    CSLR_ac_CSLL_SlipSpdCalcn(VeCSLC_b_N_Nc1Trigger, rtb_Selector1,
        CSLR_ac_B.Switch_b, CSLR_ac_B.Switch1_je, CSLR_ac_B.Switch4,
        CSLR_ac_B.Switch2, CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_PrimNoSgnd,
        CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo,
        CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_WEDLeftWhe,
        CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_WEDRightWh,
        CSLR_ac_B.TmpSignalConversionAtVeMSPR_b_MtrA_SpdFA,
        CSLR_ac_B.TmpSignalConversionAtVeMSPR_b_MtrB_SpdFA,
        CSLR_ac_B.TmpSignalConversionAtVeMSPR_b_MtrC_SpdFA,
        CSLR_ac_B.TmpSignalConversionAtVeTISR_b_InputSpeed,
        CSLR_ac_B.TmpSignalConversionAtVeVSDR_b_PrimNoFAOu, false,
        CSLR_ac_B.TmpSignalConversionAtVeVSDR_b_WEDLeftWhe,
        CSLR_ac_B.TmpSignalConversionAtVeVSDR_b_WEDRightWh,
        VeCSLC_t_N_Nc1UpdRate + HeCSLR_t_MedTED_dT, rtb_Switch2, rtb_Switch3,
        rtb_Switch5, CSLR_ac_B.TmpSignalConversionAtVeTISR_dn_InputAcce,
        CSLR_ac_B.TmpSignalConversionAtVeVSDR_dn_PrimNodot, CSLR_ac_B.Switch1,
        0.0F, 0.0F, KeCSLR_t_NC1DotCutOff, (&(VeCSLR_b_NC1Raw_FA)),
        &CSLR_ac_B.VariantMergeForOutportNCRaw_g,
        &CSLR_ac_B.VariantMergeForOutportNCdotRaw_k,
        &CSLR_ac_DW.CSLL_SlipSpdCalcn);

    /* End of Outputs for SubSystem: '<S439>/CSLL_SlipSpdCalcn' */

    /* If: '<S444>/If' */
    if (CSLR_ac_B.TmpSignalConversionAtVeESPR_b_BuffrCrnkD)
    {
        /* Outputs for IfAction SubSystem: '<S444>/SlipSpdFailing' incorporates:
         *  ActionPort: '<S476>/Action Port'
         */
        CSLR_ac_SlipSpdFailing(rtb_Selector1,
                               &rtb_VariantMergeForOutportNC_SlipSpd_hiu);

        /* End of Outputs for SubSystem: '<S444>/SlipSpdFailing' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S444>/No_SlipSpdFailing ' incorporates:
         *  ActionPort: '<S475>/Action Port'
         */
        CSLR_ac_No_SlipSpdFailing(&rtb_VariantMergeForOutportNC_SlipSpd_hiu);

        /* End of Outputs for SubSystem: '<S444>/No_SlipSpdFailing ' */
    }

    /* End of If: '<S444>/If' */

    /* Update for UnitDelay: '<S439>/Unit Delay' */
    CSLR_ac_DW.UnitDelay_DSTATE_bx = VeCSLC_b_N_Nc1Trigger;

    /* End of Outputs for SubSystem: '<S434>/NcCalc' */
    /* End of Outputs for SubSystem: '<S16>/Nc1Calc' */
#else

    /* Outputs for Atomic SubSystem: '<S434>/Default' */
    CSLR_ac_Default((&(VeCSLR_b_NC1Raw_FA)),
                    &CSLR_ac_B.VariantMergeForOutportNCRaw_g,
                    &CSLR_ac_B.VariantMergeForOutportNCdotRaw_k,
                    (&(VeCSLC_b_N_Nc1Trigger)),
                    &rtb_VariantMergeForOutportNC_SlipSpd_hiu);

    /* End of Outputs for SubSystem: '<S434>/Default' */
#endif

    for (i = 0; i < 8; i++)
    {
        /* Selector: '<S16>/Selector5' incorporates:
         *  SignalConversion: '<S5>/Signal Conversion'
         */
        rtb_Selector1[i] = CSLR_ac_B.SignalConversion[(i * 4) + 1];
    }

    /* Outputs for Atomic SubSystem: '<S16>/Nc2Calc' */
#if Rte_SysCon_Variant_CSLR_C2SlipActv

    /* Outputs for Atomic SubSystem: '<S435>/NcCalc' */
    /* DataStoreWrite: '<S478>/Data Store Write2' incorporates:
     *  Constant: '<S431>/Calib'
     */
    VeCSLR_y_NC2Source_DS = KeCSLR_y_NC2_NSource;

    /* If: '<S478>/If' incorporates:
     *  Constant: '<S10>/TRUE Constant1'
     *  Constant: '<S431>/Calib'
     */
    if (rtb_Logical4)
    {
        /* Outputs for IfAction SubSystem: '<S478>/AllSpdFstEnghVlid' incorporates:
         *  ActionPort: '<S479>/Action Port'
         */
        CSLR_ac_AllSpdFstEnghVlid((&(VeCSLC_b_N_Nc2Trigger)));

        /* End of Outputs for SubSystem: '<S478>/AllSpdFstEnghVlid' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S478>/Else' incorporates:
         *  ActionPort: '<S481>/Action Port'
         */
        CSLR_ac_Else(VeCSLR_b_NiVld, CSLR_ac_B.Merge1, true,
                     KeCSLR_y_NC2_NSource, (&(VeCSLC_b_N_Nc2Trigger)));

        /* End of Outputs for SubSystem: '<S478>/Else' */
    }

    /* End of If: '<S478>/If' */

    /* Outputs for Atomic SubSystem: '<S478>/Stop Watch Reset Enabled' */
    /* Switch: '<S484>/Switch' incorporates:
     *  UnitDelay: '<S478>/Unit Delay'
     */
    if (CSLR_ac_DW.UnitDelay_DSTATE_pl)
    {
        /* Switch: '<S484>/Switch' incorporates:
         *  Constant: '<S484>/Constant Value2'
         */
        VeCSLC_t_N_Nc2UpdRate = 0.0F;
    }
    else
    {
        /* Switch: '<S484>/Switch' incorporates:
         *  Constant: '<S482>/Calib'
         *  Sum: '<S484>/Subtraction'
         *  UnitDelay: '<S484>/Unit Delay'
         */
        VeCSLC_t_N_Nc2UpdRate = HeCSLR_t_MedTED_dT + VeCSLC_t_N_Nc2UpdRate;
    }

    /* End of Switch: '<S484>/Switch' */
    /* End of Outputs for SubSystem: '<S478>/Stop Watch Reset Enabled' */

    /* Outputs for Enabled SubSystem: '<S478>/CSLL_SlipSpdCalcn' */
    /* Constant: '<S1>/Const' incorporates:
     *  Constant: '<S17>/Constant Value2'
     *  Constant: '<S17>/Constant Value3'
     *  Constant: '<S427>/Calib'
     *  Constant: '<S482>/Calib'
     *  Sum: '<S478>/Sum'
     */
    CSLR_ac_CSLL_SlipSpdCalcn(VeCSLC_b_N_Nc2Trigger, rtb_Selector1,
        CSLR_ac_B.Switch_b, CSLR_ac_B.Switch1_je, CSLR_ac_B.Switch4,
        CSLR_ac_B.Switch2, CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_PrimNoSgnd,
        CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo,
        CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_WEDLeftWhe,
        CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_WEDRightWh,
        CSLR_ac_B.TmpSignalConversionAtVeMSPR_b_MtrA_SpdFA,
        CSLR_ac_B.TmpSignalConversionAtVeMSPR_b_MtrB_SpdFA,
        CSLR_ac_B.TmpSignalConversionAtVeMSPR_b_MtrC_SpdFA,
        CSLR_ac_B.TmpSignalConversionAtVeTISR_b_InputSpeed,
        CSLR_ac_B.TmpSignalConversionAtVeVSDR_b_PrimNoFAOu, false,
        CSLR_ac_B.TmpSignalConversionAtVeVSDR_b_WEDLeftWhe,
        CSLR_ac_B.TmpSignalConversionAtVeVSDR_b_WEDRightWh,
        VeCSLC_t_N_Nc2UpdRate + HeCSLR_t_MedTED_dT, rtb_Switch2, rtb_Switch3,
        rtb_Switch5, CSLR_ac_B.TmpSignalConversionAtVeTISR_dn_InputAcce,
        CSLR_ac_B.TmpSignalConversionAtVeVSDR_dn_PrimNodot, CSLR_ac_B.Switch1,
        0.0F, 0.0F, KeCSLR_t_NC2DotCutOff, (&(VeCSLR_b_NC2Raw_FA)),
        &CSLR_ac_B.VariantMergeForOutportNCRaw,
        &CSLR_ac_B.VariantMergeForOutportNCdotRaw,
        &CSLR_ac_DW.CSLL_SlipSpdCalcn_g);

    /* End of Outputs for SubSystem: '<S478>/CSLL_SlipSpdCalcn' */

    /* If: '<S483>/If' */
    if (CSLR_ac_B.TmpSignalConversionAtVeESPR_b_BuffrCrnkD)
    {
        /* Outputs for IfAction SubSystem: '<S483>/SlipSpdFailing' incorporates:
         *  ActionPort: '<S515>/Action Port'
         */
        CSLR_ac_SlipSpdFailing(rtb_Selector1,
                               &rtb_VariantMergeForOutportNC_SlipSpdF_hi);

        /* End of Outputs for SubSystem: '<S483>/SlipSpdFailing' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S483>/No_SlipSpdFailing ' incorporates:
         *  ActionPort: '<S514>/Action Port'
         */
        CSLR_ac_No_SlipSpdFailing(&rtb_VariantMergeForOutportNC_SlipSpdF_hi);

        /* End of Outputs for SubSystem: '<S483>/No_SlipSpdFailing ' */
    }

    /* End of If: '<S483>/If' */

    /* Update for UnitDelay: '<S478>/Unit Delay' */
    CSLR_ac_DW.UnitDelay_DSTATE_pl = VeCSLC_b_N_Nc2Trigger;

    /* End of Outputs for SubSystem: '<S435>/NcCalc' */
#else

    /* Outputs for Atomic SubSystem: '<S435>/Default' */
    CSLR_ac_Default((&(VeCSLR_b_NC2Raw_FA)),
                    &CSLR_ac_B.VariantMergeForOutportNCRaw,
                    &CSLR_ac_B.VariantMergeForOutportNCdotRaw,
                    (&(VeCSLC_b_N_Nc2Trigger)),
                    &rtb_VariantMergeForOutportNC_SlipSpdF_hi);

    /* End of Outputs for SubSystem: '<S435>/Default' */
#endif

    /* End of Outputs for SubSystem: '<S16>/Nc2Calc' */
    for (i = 0; i < 8; i++)
    {
        /* Selector: '<S16>/Selector6' incorporates:
         *  SignalConversion: '<S5>/Signal Conversion'
         */
        rtb_Selector1[i] = CSLR_ac_B.SignalConversion[(i * 4) + 2];
    }

    /* Outputs for Atomic SubSystem: '<S16>/Nc3Calc' */
#if Rte_SysCon_Variant_CSLR_C2SlipActv

    /* Outputs for Atomic SubSystem: '<S436>/NcCalc' */
    /* DataStoreWrite: '<S517>/Data Store Write1' incorporates:
     *  Constant: '<S432>/Calib'
     */
    VeCSLR_y_NC3Source_DS = KeCSLR_y_NC3_NSource;

    /* If: '<S517>/If' incorporates:
     *  Constant: '<S10>/TRUE Constant1'
     *  Constant: '<S432>/Calib'
     */
    if (rtb_Logical4)
    {
        /* Outputs for IfAction SubSystem: '<S517>/AllSpdFstEnghVlid' incorporates:
         *  ActionPort: '<S518>/Action Port'
         */
        CSLR_ac_AllSpdFstEnghVlid((&(VeCSLC_b_N_Nc3Trigger)));

        /* End of Outputs for SubSystem: '<S517>/AllSpdFstEnghVlid' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S517>/Else' incorporates:
         *  ActionPort: '<S520>/Action Port'
         */
        CSLR_ac_Else(VeCSLR_b_NiVld, CSLR_ac_B.Merge1, true,
                     KeCSLR_y_NC3_NSource, (&(VeCSLC_b_N_Nc3Trigger)));

        /* End of Outputs for SubSystem: '<S517>/Else' */
    }

    /* End of If: '<S517>/If' */

    /* Outputs for Atomic SubSystem: '<S517>/Stop Watch Reset Enabled' */
    /* Switch: '<S523>/Switch' incorporates:
     *  UnitDelay: '<S517>/Unit Delay'
     */
    if (CSLR_ac_DW.UnitDelay_DSTATE_p0)
    {
        /* Switch: '<S523>/Switch' incorporates:
         *  Constant: '<S523>/Constant Value2'
         */
        VeCSLC_t_N_Nc3UpdRate = 0.0F;
    }
    else
    {
        /* Switch: '<S523>/Switch' incorporates:
         *  Constant: '<S521>/Calib'
         *  Sum: '<S523>/Subtraction'
         *  UnitDelay: '<S523>/Unit Delay'
         */
        VeCSLC_t_N_Nc3UpdRate = HeCSLR_t_MedTED_dT + VeCSLC_t_N_Nc3UpdRate;
    }

    /* End of Switch: '<S523>/Switch' */
    /* End of Outputs for SubSystem: '<S517>/Stop Watch Reset Enabled' */

    /* Outputs for Enabled SubSystem: '<S517>/CSLL_SlipSpdCalcn' */
    /* Constant: '<S1>/Const' incorporates:
     *  Constant: '<S17>/Constant Value2'
     *  Constant: '<S17>/Constant Value3'
     *  Constant: '<S428>/Calib'
     *  Constant: '<S521>/Calib'
     *  Sum: '<S517>/Sum'
     */
    CSLR_ac_CSLL_SlipSpdCalcn(VeCSLC_b_N_Nc3Trigger, rtb_Selector1,
        CSLR_ac_B.Switch_b, CSLR_ac_B.Switch1_je, CSLR_ac_B.Switch4,
        CSLR_ac_B.Switch2, CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_PrimNoSgnd,
        CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo,
        CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_WEDLeftWhe,
        CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_WEDRightWh,
        CSLR_ac_B.TmpSignalConversionAtVeMSPR_b_MtrA_SpdFA,
        CSLR_ac_B.TmpSignalConversionAtVeMSPR_b_MtrB_SpdFA,
        CSLR_ac_B.TmpSignalConversionAtVeMSPR_b_MtrC_SpdFA,
        CSLR_ac_B.TmpSignalConversionAtVeTISR_b_InputSpeed,
        CSLR_ac_B.TmpSignalConversionAtVeVSDR_b_PrimNoFAOu, false,
        CSLR_ac_B.TmpSignalConversionAtVeVSDR_b_WEDLeftWhe,
        CSLR_ac_B.TmpSignalConversionAtVeVSDR_b_WEDRightWh,
        VeCSLC_t_N_Nc3UpdRate + HeCSLR_t_MedTED_dT, rtb_Switch2, rtb_Switch3,
        rtb_Switch5, CSLR_ac_B.TmpSignalConversionAtVeTISR_dn_InputAcce,
        CSLR_ac_B.TmpSignalConversionAtVeVSDR_dn_PrimNodot, CSLR_ac_B.Switch1,
        0.0F, 0.0F, KeCSLR_t_NC3DotCutOff, (&(VeCSLR_b_NC3Raw_FA)),
        (&(VeCSLR_n_Clch3_RawSlipSpeed)), (&(VeCSLR_dn_NC3dotRaw)),
        &CSLR_ac_DW.CSLL_SlipSpdCalcn_h);

    /* End of Outputs for SubSystem: '<S517>/CSLL_SlipSpdCalcn' */

    /* If: '<S522>/If' */
    if (CSLR_ac_B.TmpSignalConversionAtVeESPR_b_BuffrCrnkD)
    {
        /* Outputs for IfAction SubSystem: '<S522>/SlipSpdFailing' incorporates:
         *  ActionPort: '<S554>/Action Port'
         */
        CSLR_ac_SlipSpdFailing(rtb_Selector1,
                               &rtb_VariantMergeForOutportNC_SlipSpdFa_h);

        /* End of Outputs for SubSystem: '<S522>/SlipSpdFailing' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S522>/No_SlipSpdFailing ' incorporates:
         *  ActionPort: '<S553>/Action Port'
         */
        CSLR_ac_No_SlipSpdFailing(&rtb_VariantMergeForOutportNC_SlipSpdFa_h);

        /* End of Outputs for SubSystem: '<S522>/No_SlipSpdFailing ' */
    }

    /* End of If: '<S522>/If' */

    /* Update for UnitDelay: '<S517>/Unit Delay' */
    CSLR_ac_DW.UnitDelay_DSTATE_p0 = VeCSLC_b_N_Nc3Trigger;

    /* End of Outputs for SubSystem: '<S436>/NcCalc' */
#else

    /* Outputs for Atomic SubSystem: '<S436>/Default' */
    CSLR_ac_Default((&(VeCSLR_b_NC3Raw_FA)), (&(VeCSLR_n_Clch3_RawSlipSpeed)), (
                     &(VeCSLR_dn_NC3dotRaw)), (&(VeCSLC_b_N_Nc3Trigger)),
                    &rtb_VariantMergeForOutportNC_SlipSpdFa_h);

    /* End of Outputs for SubSystem: '<S436>/Default' */
#endif

    /* End of Outputs for SubSystem: '<S16>/Nc3Calc' */
    for (i = 0; i < 8; i++)
    {
        /* Selector: '<S16>/Selector7' incorporates:
         *  SignalConversion: '<S5>/Signal Conversion'
         */
        rtb_Selector1[i] = CSLR_ac_B.SignalConversion[(i * 4) + 3];
    }

    /* Outputs for Atomic SubSystem: '<S16>/Nc4Calc' */
#if Rte_SysCon_Variant_CSLR_C4SlipActv

    /* Outputs for Atomic SubSystem: '<S437>/NcCalc' */
    /* DataStoreWrite: '<S556>/Data Store Write' incorporates:
     *  Constant: '<S433>/Calib'
     */
    VeCSLR_y_NC4Source_DS = KeCSLR_y_NC1_NSource;

    /* If: '<S556>/If' incorporates:
     *  Constant: '<S10>/TRUE Constant1'
     *  Constant: '<S433>/Calib'
     */
    if (rtb_Logical4)
    {
        /* Outputs for IfAction SubSystem: '<S556>/AllSpdFstEnghVlid' incorporates:
         *  ActionPort: '<S557>/Action Port'
         */
        CSLR_ac_AllSpdFstEnghVlid((&(VeCSLC_b_N_Nc4Trigger)));

        /* End of Outputs for SubSystem: '<S556>/AllSpdFstEnghVlid' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S556>/Else' incorporates:
         *  ActionPort: '<S559>/Action Port'
         */
        CSLR_ac_Else(VeCSLR_b_NiVld, CSLR_ac_B.Merge1, true,
                     KeCSLR_y_NC1_NSource, (&(VeCSLC_b_N_Nc4Trigger)));

        /* End of Outputs for SubSystem: '<S556>/Else' */
    }

    /* End of If: '<S556>/If' */

    /* Outputs for Atomic SubSystem: '<S556>/Stop Watch Reset Enabled' */
    /* Switch: '<S562>/Switch1' incorporates:
     *  UnitDelay: '<S556>/Unit Delay'
     */
    if (CSLR_ac_DW.UnitDelay_DSTATE_pj)
    {
        /* Switch: '<S562>/Switch1' incorporates:
         *  Constant: '<S562>/Constant Value2'
         */
        VeCSLC_t_N_Nc4UpdRate = 0.0F;
    }
    else
    {
        /* Switch: '<S562>/Switch1' incorporates:
         *  Constant: '<S560>/Calib'
         *  Sum: '<S562>/Subtraction'
         *  UnitDelay: '<S562>/Unit Delay'
         */
        VeCSLC_t_N_Nc4UpdRate = HeCSLR_t_MedTED_dT + VeCSLC_t_N_Nc4UpdRate;
    }

    /* End of Switch: '<S562>/Switch1' */
    /* End of Outputs for SubSystem: '<S556>/Stop Watch Reset Enabled' */

    /* Outputs for Enabled SubSystem: '<S556>/CSLL_SlipSpdCalcn' */
    /* Constant: '<S1>/Const' incorporates:
     *  Constant: '<S17>/Constant Value2'
     *  Constant: '<S17>/Constant Value3'
     *  Constant: '<S429>/Calib'
     *  Constant: '<S560>/Calib'
     *  Sum: '<S556>/Sum'
     */
    CSLR_ac_CSLL_SlipSpdCalcn(VeCSLC_b_N_Nc4Trigger, rtb_Selector1,
        CSLR_ac_B.Switch_b, CSLR_ac_B.Switch1_je, CSLR_ac_B.Switch4,
        CSLR_ac_B.Switch2, CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_PrimNoSgnd,
        CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo,
        CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_WEDLeftWhe,
        CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_WEDRightWh,
        CSLR_ac_B.TmpSignalConversionAtVeMSPR_b_MtrA_SpdFA,
        CSLR_ac_B.TmpSignalConversionAtVeMSPR_b_MtrB_SpdFA,
        CSLR_ac_B.TmpSignalConversionAtVeMSPR_b_MtrC_SpdFA,
        CSLR_ac_B.TmpSignalConversionAtVeTISR_b_InputSpeed,
        CSLR_ac_B.TmpSignalConversionAtVeVSDR_b_PrimNoFAOu, false,
        CSLR_ac_B.TmpSignalConversionAtVeVSDR_b_WEDLeftWhe,
        CSLR_ac_B.TmpSignalConversionAtVeVSDR_b_WEDRightWh,
        VeCSLC_t_N_Nc4UpdRate + HeCSLR_t_MedTED_dT, rtb_Switch2, rtb_Switch3,
        rtb_Switch5, CSLR_ac_B.TmpSignalConversionAtVeTISR_dn_InputAcce,
        CSLR_ac_B.TmpSignalConversionAtVeVSDR_dn_PrimNodot, CSLR_ac_B.Switch1,
        0.0F, 0.0F, KeCSLR_t_NC4DotCutOff, (&(VeCSLR_b_NC4Raw_FA)),
        (&(VeCSLR_n_Clch4_RawSlipSpeed)), (&(VeCSLR_dn_NC4dotRaw)),
        &CSLR_ac_DW.CSLL_SlipSpdCalcn_b);

    /* End of Outputs for SubSystem: '<S556>/CSLL_SlipSpdCalcn' */

    /* If: '<S561>/If' */
    if (CSLR_ac_B.TmpSignalConversionAtVeESPR_b_BuffrCrnkD)
    {
        /* Outputs for IfAction SubSystem: '<S561>/SlipSpdFailing' incorporates:
         *  ActionPort: '<S593>/Action Port'
         */
        CSLR_ac_SlipSpdFailing(rtb_Selector1,
                               &rtb_VariantMergeForOutportNC_SlipSpdFail);

        /* End of Outputs for SubSystem: '<S561>/SlipSpdFailing' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S561>/No_SlipSpdFailing ' incorporates:
         *  ActionPort: '<S592>/Action Port'
         */
        CSLR_ac_No_SlipSpdFailing(&rtb_VariantMergeForOutportNC_SlipSpdFail);

        /* End of Outputs for SubSystem: '<S561>/No_SlipSpdFailing ' */
    }

    /* End of If: '<S561>/If' */

    /* Update for UnitDelay: '<S556>/Unit Delay' */
    CSLR_ac_DW.UnitDelay_DSTATE_pj = VeCSLC_b_N_Nc4Trigger;

    /* End of Outputs for SubSystem: '<S437>/NcCalc' */
#else

    /* Outputs for Atomic SubSystem: '<S437>/Default' */
    CSLR_ac_Default((&(VeCSLR_b_NC4Raw_FA)), (&(VeCSLR_n_Clch4_RawSlipSpeed)), (
                     &(VeCSLR_dn_NC4dotRaw)), (&(VeCSLC_b_N_Nc4Trigger)),
                    &rtb_VariantMergeForOutportNC_SlipSpdFail);

    /* End of Outputs for SubSystem: '<S437>/Default' */
#endif

    /* End of Outputs for SubSystem: '<S16>/Nc4Calc' */

    /* Abs: '<S6>/Abs2' incorporates:
     *  Abs: '<S6>/Abs3'
     */
    tmpRead_6 = fabsf(CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_PrimNoSgnd);

    /* If: '<S6>/If' incorporates:
     *  Abs: '<S6>/Abs1'
     *  Abs: '<S6>/Abs2'
     *  Abs: '<S6>/Abs4'
     *  Constant: '<S17>/Constant Value2'
     *  Constant: '<S17>/Constant Value3'
     *  Constant: '<S18>/Constant'
     *  Constant: '<S19>/Constant'
     *  Constant: '<S1>/Const'
     *  Constant: '<S20>/Constant'
     *  Constant: '<S21>/Constant'
     *  Constant: '<S22>/Constant'
     *  Constant: '<S23>/Constant'
     *  Constant: '<S24>/Constant'
     *  Constant: '<S252>/Calib'
     *  Constant: '<S253>/Calib'
     *  Constant: '<S254>/Calib'
     *  Constant: '<S255>/Calib'
     *  Constant: '<S26>/Calib'
     *  Constant: '<S28>/Calib'
     *  Constant: '<S29>/Calib'
     *  Constant: '<S78>/Calib'
     *  Constant: '<S79>/Calib'
     *  Constant: '<S80>/Calib'
     *  Constant: '<S81>/Calib'
     *  Inport: '<Root>/VeOHSR_e_ILEState'
     *  Logic: '<S6>/AND'
     *  Logic: '<S6>/AND1'
     *  Logic: '<S6>/AND2'
     *  Logic: '<S6>/AND3'
     *  Logic: '<S6>/AND6'
     *  Logic: '<S6>/Logical1'
     *  Logic: '<S6>/Logical2'
     *  Lookup_n-D: '<S30>/Vector'
     *  Lookup_n-D: '<S31>/Vector'
     *  RelationalOperator: '<S6>/Equal'
     *  RelationalOperator: '<S6>/Equal1'
     *  RelationalOperator: '<S6>/Equal2'
     *  RelationalOperator: '<S6>/Equal3'
     *  RelationalOperator: '<S6>/Equal4'
     *  RelationalOperator: '<S6>/Equal5'
     *  RelationalOperator: '<S6>/Equal6'
     *  RelationalOperator: '<S6>/Equal7'
     *  RelationalOperator: '<S6>/Equal8'
     */
    if (((((((((uint32)tmpRead) == CeHSER_e_UseM1Eqn) || (((uint32)tmpRead) ==
              CeHSER_e_UseG1Eqn)) || (((uint32)tmpRead) == CeHSER_e_UseG2Eqn)) ||
           ((((uint32)tmpRead_3) == CeOHSR_e_LaunchState) &&
            (HeCSLR_b_M1EqnOHSRLaunch))) && (fabsf
            (CSLR_ac_B.VariantMergeForOutportNCRaw_g) < look1_iflf_binlca_16a
            (tmpRead_6, ((const float32 *)&(KxCSLR_n_C1LockedThresh[0])), ((
              const float32 *)&(KtCSLR_n_C1LockedThresh[0])), 2U))) &&
            (!VeCSLR_b_NC1Raw_FA)) && (KeCSLR_b_EnaC1LockdCalcn))
    {
        CSLR_ac_DW.If_ActiveSubsystem = 0;

        /* Outputs for IfAction SubSystem: '<S6>/CSLC_ClchSpd_M1' incorporates:
         *  ActionPort: '<S14>/Action Port'
         */
        for (i = 0; i < 8; i++)
        {
            /* Selector: '<S14>/Selector4' incorporates:
             *  SignalConversion: '<S5>/Signal Conversion1'
             */
            rtb_Selector1[i] = CSLR_ac_B.LaCSLR_r_M1_ClchSlpMat_NcnDep[i * 4];
        }

        /* Outputs for Atomic SubSystem: '<S14>/Nc1Calc' */
#if Rte_SysCon_Variant_CSLR_C1SlipActv

        /* Outputs for Atomic SubSystem: '<S86>/NcCalc' */
        /* DataStoreWrite: '<S92>/Data Store Write3' incorporates:
         *  Constant: '<S82>/Calib'
         */
        VeCSLR_y_NC1Source_DS = KeCSLR_y_NC1_M1Source;

        /* If: '<S92>/If' incorporates:
         *  Constant: '<S10>/TRUE Constant1'
         *  Constant: '<S82>/Calib'
         */
        if (rtb_Logical4)
        {
            /* Outputs for IfAction SubSystem: '<S92>/AllSpdFstEnghVlid' incorporates:
             *  ActionPort: '<S93>/Action Port'
             */
            CSLR_ac_AllSpdFstEnghVlid(&CSLR_ac_B.Merge_l);

            /* End of Outputs for SubSystem: '<S92>/AllSpdFstEnghVlid' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S92>/Else' incorporates:
             *  ActionPort: '<S95>/Action Port'
             */
            CSLR_ac_Else(VeCSLR_b_NiVld, CSLR_ac_B.Merge1, true,
                         KeCSLR_y_NC1_M1Source, &CSLR_ac_B.Merge_l);

            /* End of Outputs for SubSystem: '<S92>/Else' */
        }

        /* End of If: '<S92>/If' */

        /* Outputs for Atomic SubSystem: '<S92>/Stop Watch Reset Enabled' */
        /* Switch: '<S99>/Switch1' incorporates:
         *  Constant: '<S96>/Calib'
         *  Constant: '<S99>/Constant Value2'
         *  Sum: '<S99>/Subtraction'
         *  UnitDelay: '<S92>/Unit Delay'
         *  UnitDelay: '<S99>/Unit Delay'
         */
        if (CSLR_ac_DW.UnitDelay_DSTATE_dr)
        {
            CSLR_ac_DW.UnitDelay_DSTATE_ht = 0.0F;
        }
        else
        {
            CSLR_ac_DW.UnitDelay_DSTATE_ht += HeCSLR_t_MedTED_dT;
        }

        /* End of Switch: '<S99>/Switch1' */
        /* End of Outputs for SubSystem: '<S92>/Stop Watch Reset Enabled' */

        /* Switch: '<S92>/Switch' incorporates:
         *  Constant: '<S77>/Calib'
         *  Constant: '<S96>/Calib'
         *  Sum: '<S92>/Sum'
         *  UnitDelay: '<S99>/Unit Delay'
         */
        if (KeCSLR_b_EnaCluSlipAcceCalcnFromCpt)
        {
            tmpRead_6 = HeCSLR_t_MedTED_dT;
        }
        else
        {
            tmpRead_6 = CSLR_ac_DW.UnitDelay_DSTATE_ht + HeCSLR_t_MedTED_dT;
        }

        /* End of Switch: '<S92>/Switch' */

        /* Outputs for Enabled SubSystem: '<S92>/CSLL_SlipSpdCalcn' */
        CSLR_ac_CSLL_SlipSpdCalcn(CSLR_ac_B.Merge_l, rtb_Selector1,
            CSLR_ac_B.Switch_b, CSLR_ac_B.Switch1_je, CSLR_ac_B.Switch4,
            CSLR_ac_B.Switch2,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_PrimNoSgnd,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_WEDLeftWhe,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_WEDRightWh,
            CSLR_ac_B.TmpSignalConversionAtVeMSPR_b_MtrA_SpdFA,
            CSLR_ac_B.TmpSignalConversionAtVeMSPR_b_MtrB_SpdFA,
            CSLR_ac_B.TmpSignalConversionAtVeMSPR_b_MtrC_SpdFA,
            CSLR_ac_B.TmpSignalConversionAtVeTISR_b_InputSpeed,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_b_PrimNoFAOu, false,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_b_WEDLeftWhe,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_b_WEDRightWh, tmpRead_6,
            rtb_Switch2, rtb_Switch3, rtb_Switch5,
            CSLR_ac_B.TmpSignalConversionAtVeTISR_dn_InputAcce,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_dn_PrimNodot,
            CSLR_ac_B.Switch1, 0.0F, 0.0F, KeCSLR_t_NC1DotCutOff,
            &CSLR_ac_B.Merge8, &CSLR_ac_B.Merge, (&(VeCSLC_dn_Nc1dotFromCpt)),
            &CSLR_ac_DW.CSLL_SlipSpdCalcn_e);

        /* End of Outputs for SubSystem: '<S92>/CSLL_SlipSpdCalcn' */

        /* If: '<S97>/If' incorporates:
         *  Constant: '<S17>/Constant Value2'
         *  Constant: '<S17>/Constant Value3'
         *  Constant: '<S1>/Const'
         *  Constant: '<S78>/Calib'
         */
        if (CSLR_ac_B.TmpSignalConversionAtVeESPR_b_BuffrCrnkD)
        {
            /* Outputs for IfAction SubSystem: '<S97>/SlipSpdFailing' incorporates:
             *  ActionPort: '<S130>/Action Port'
             */
            CSLR_ac_SlipSpdFailing(rtb_Selector1,
                                   &CSLR_ac_B.VM_Conditional_Signal_NCxSlipSpdFailing_
                                   [0]);

            /* End of Outputs for SubSystem: '<S97>/SlipSpdFailing' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S97>/No_SlipSpdFailing ' incorporates:
             *  ActionPort: '<S129>/Action Port'
             */
            CSLR_ac_No_SlipSpdFailing
                (&CSLR_ac_B.VM_Conditional_Signal_NCxSlipSpdFailing_[0]);

            /* End of Outputs for SubSystem: '<S97>/No_SlipSpdFailing ' */
        }

        /* End of If: '<S97>/If' */

        /* Merge: '<S6>/Merge3' incorporates:
         *  Gain: '<S98>/Gain'
         */
        VeCSLC_b_M1_Nc1Trigger = CSLR_ac_B.Merge_l;

        /* Update for UnitDelay: '<S92>/Unit Delay' */
        CSLR_ac_DW.UnitDelay_DSTATE_dr = CSLR_ac_B.Merge_l;

        /* End of Outputs for SubSystem: '<S86>/NcCalc' */
#else

        /* Outputs for Atomic SubSystem: '<S86>/Default' */
        CSLR_ac_Default_i(&CSLR_ac_B.Merge8, &CSLR_ac_B.Merge,
                          (&(VeCSLC_dn_Nc1dotFromCpt)),
                          (&(VeCSLC_b_M1_Nc1Trigger)),
                          &CSLR_ac_B.VM_Conditional_Signal_NCxSlipSpdFailing_[0]);

        /* End of Outputs for SubSystem: '<S86>/Default' */
#endif

        /* End of Outputs for SubSystem: '<S14>/Nc1Calc' */
        for (i = 0; i < 8; i++)
        {
            /* Selector: '<S14>/Selector5' incorporates:
             *  SignalConversion: '<S5>/Signal Conversion1'
             */
            rtb_Selector1[i] = CSLR_ac_B.LaCSLR_r_M1_ClchSlpMat_NcnDep[(i * 4) +
                1];
        }

        /* Outputs for Atomic SubSystem: '<S14>/Nc2Calc' */
#if Rte_SysCon_Variant_CSLR_C2SlipActv

        /* Outputs for Atomic SubSystem: '<S87>/NcCalc' */
        /* DataStoreWrite: '<S132>/Data Store Write3' incorporates:
         *  Constant: '<S83>/Calib'
         */
        VeCSLR_y_NC2Source_DS = KeCSLR_y_NC2_M1Source;

        /* If: '<S132>/If' incorporates:
         *  Constant: '<S10>/TRUE Constant1'
         *  Constant: '<S83>/Calib'
         */
        if (rtb_Logical4)
        {
            /* Outputs for IfAction SubSystem: '<S132>/AllSpdFstEnghVlid' incorporates:
             *  ActionPort: '<S133>/Action Port'
             */
            CSLR_ac_AllSpdFstEnghVlid(&CSLR_ac_B.VariantMergeForOutportNCTrigger);

            /* End of Outputs for SubSystem: '<S132>/AllSpdFstEnghVlid' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S132>/Else' incorporates:
             *  ActionPort: '<S135>/Action Port'
             */
            CSLR_ac_Else(VeCSLR_b_NiVld, CSLR_ac_B.Merge1, true,
                         KeCSLR_y_NC2_M1Source,
                         &CSLR_ac_B.VariantMergeForOutportNCTrigger);

            /* End of Outputs for SubSystem: '<S132>/Else' */
        }

        /* End of If: '<S132>/If' */

        /* Outputs for Atomic SubSystem: '<S132>/Stop Watch Reset Enabled' */
        /* Switch: '<S138>/Switch' incorporates:
         *  Constant: '<S136>/Calib'
         *  Constant: '<S138>/Constant Value2'
         *  Sum: '<S138>/Subtraction'
         *  UnitDelay: '<S132>/Unit Delay'
         *  UnitDelay: '<S138>/Unit Delay'
         */
        if (CSLR_ac_DW.UnitDelay_DSTATE_e)
        {
            CSLR_ac_DW.UnitDelay_DSTATE_d = 0.0F;
        }
        else
        {
            CSLR_ac_DW.UnitDelay_DSTATE_d += HeCSLR_t_MedTED_dT;
        }

        /* End of Switch: '<S138>/Switch' */
        /* End of Outputs for SubSystem: '<S132>/Stop Watch Reset Enabled' */

        /* Switch: '<S132>/Switch' incorporates:
         *  Constant: '<S136>/Calib'
         *  Constant: '<S77>/Calib'
         *  Sum: '<S132>/Sum'
         *  UnitDelay: '<S138>/Unit Delay'
         */
        if (KeCSLR_b_EnaCluSlipAcceCalcnFromCpt)
        {
            tmpRead_6 = HeCSLR_t_MedTED_dT;
        }
        else
        {
            tmpRead_6 = CSLR_ac_DW.UnitDelay_DSTATE_d + HeCSLR_t_MedTED_dT;
        }

        /* End of Switch: '<S132>/Switch' */

        /* Outputs for Enabled SubSystem: '<S132>/CSLL_SlipSpdCalcn' */
        CSLR_ac_CSLL_SlipSpdCalcn(CSLR_ac_B.VariantMergeForOutportNCTrigger,
            rtb_Selector1, CSLR_ac_B.Switch_b, CSLR_ac_B.Switch1_je,
            CSLR_ac_B.Switch4, CSLR_ac_B.Switch2,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_PrimNoSgnd,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_WEDLeftWhe,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_WEDRightWh,
            CSLR_ac_B.TmpSignalConversionAtVeMSPR_b_MtrA_SpdFA,
            CSLR_ac_B.TmpSignalConversionAtVeMSPR_b_MtrB_SpdFA,
            CSLR_ac_B.TmpSignalConversionAtVeMSPR_b_MtrC_SpdFA,
            CSLR_ac_B.TmpSignalConversionAtVeTISR_b_InputSpeed,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_b_PrimNoFAOu, false,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_b_WEDLeftWhe,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_b_WEDRightWh, tmpRead_6,
            rtb_Switch2, rtb_Switch3, rtb_Switch5,
            CSLR_ac_B.TmpSignalConversionAtVeTISR_dn_InputAcce,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_dn_PrimNodot,
            CSLR_ac_B.Switch1, 0.0F, 0.0F, KeCSLR_t_NC2DotCutOff,
            &CSLR_ac_B.Merge9, &CSLR_ac_B.Merge4, (&(VeCSLC_dn_Nc2dotFromCpt)),
            &CSLR_ac_DW.CSLL_SlipSpdCalcn_o);

        /* End of Outputs for SubSystem: '<S132>/CSLL_SlipSpdCalcn' */

        /* If: '<S137>/If' incorporates:
         *  Constant: '<S79>/Calib'
         */
        if (CSLR_ac_B.TmpSignalConversionAtVeESPR_b_BuffrCrnkD)
        {
            /* Outputs for IfAction SubSystem: '<S137>/SlipSpdFailing' incorporates:
             *  ActionPort: '<S169>/Action Port'
             */
            CSLR_ac_SlipSpdFailing(rtb_Selector1,
                                   &CSLR_ac_B.VM_Conditional_Signal_NCxSlipSpdFailing_
                                   [1]);

            /* End of Outputs for SubSystem: '<S137>/SlipSpdFailing' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S137>/No_SlipSpdFailing ' incorporates:
             *  ActionPort: '<S168>/Action Port'
             */
            CSLR_ac_No_SlipSpdFailing
                (&CSLR_ac_B.VM_Conditional_Signal_NCxSlipSpdFailing_[1]);

            /* End of Outputs for SubSystem: '<S137>/No_SlipSpdFailing ' */
        }

        /* End of If: '<S137>/If' */

        /* Update for UnitDelay: '<S132>/Unit Delay' */
        CSLR_ac_DW.UnitDelay_DSTATE_e =
            CSLR_ac_B.VariantMergeForOutportNCTrigger;

        /* End of Outputs for SubSystem: '<S87>/NcCalc' */
#else

        /* Outputs for Atomic SubSystem: '<S87>/Default' */
        CSLR_ac_Default_i(&CSLR_ac_B.Merge9, &CSLR_ac_B.Merge4,
                          (&(VeCSLC_dn_Nc2dotFromCpt)),
                          &CSLR_ac_B.VariantMergeForOutportNCTrigger,
                          &CSLR_ac_B.VM_Conditional_Signal_NCxSlipSpdFailing_[1]);

        /* End of Outputs for SubSystem: '<S87>/Default' */
#endif

        /* End of Outputs for SubSystem: '<S14>/Nc2Calc' */
        for (i = 0; i < 8; i++)
        {
            /* Selector: '<S14>/Selector6' incorporates:
             *  SignalConversion: '<S5>/Signal Conversion1'
             */
            rtb_Selector1[i] = CSLR_ac_B.LaCSLR_r_M1_ClchSlpMat_NcnDep[(i * 4) +
                2];
        }

        /* Outputs for Atomic SubSystem: '<S14>/Nc3Calc' */
#if Rte_SysCon_Variant_CSLR_C3SlipActv

        /* Outputs for Atomic SubSystem: '<S88>/NcCalc' */
        /* DataStoreWrite: '<S171>/Data Store Write3' incorporates:
         *  Constant: '<S84>/Calib'
         */
        VeCSLR_y_NC3Source_DS = KeCSLR_y_NC3_M1Source;

        /* If: '<S171>/If' incorporates:
         *  Constant: '<S10>/TRUE Constant1'
         *  Constant: '<S84>/Calib'
         */
        if (rtb_Logical4)
        {
            /* Outputs for IfAction SubSystem: '<S171>/AllSpdFstEnghVlid' incorporates:
             *  ActionPort: '<S172>/Action Port'
             */
            CSLR_ac_AllSpdFstEnghVlid(&CSLR_ac_B.Merge_j);

            /* End of Outputs for SubSystem: '<S171>/AllSpdFstEnghVlid' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S171>/Else' incorporates:
             *  ActionPort: '<S174>/Action Port'
             */
            CSLR_ac_Else(VeCSLR_b_NiVld, CSLR_ac_B.Merge1, true,
                         KeCSLR_y_NC3_M1Source, &CSLR_ac_B.Merge_j);

            /* End of Outputs for SubSystem: '<S171>/Else' */
        }

        /* End of If: '<S171>/If' */

        /* Outputs for Atomic SubSystem: '<S171>/Stop Watch Reset Enabled' */
        /* Switch: '<S178>/Switch1' incorporates:
         *  Constant: '<S175>/Calib'
         *  Constant: '<S178>/Constant Value2'
         *  Sum: '<S178>/Subtraction'
         *  UnitDelay: '<S171>/Unit Delay'
         *  UnitDelay: '<S178>/Unit Delay'
         */
        if (CSLR_ac_DW.UnitDelay_DSTATE_aw)
        {
            CSLR_ac_DW.UnitDelay_DSTATE_l = 0.0F;
        }
        else
        {
            CSLR_ac_DW.UnitDelay_DSTATE_l += HeCSLR_t_MedTED_dT;
        }

        /* End of Switch: '<S178>/Switch1' */
        /* End of Outputs for SubSystem: '<S171>/Stop Watch Reset Enabled' */

        /* Switch: '<S171>/Switch' incorporates:
         *  Constant: '<S175>/Calib'
         *  Constant: '<S77>/Calib'
         *  Sum: '<S171>/Sum'
         *  UnitDelay: '<S178>/Unit Delay'
         */
        if (KeCSLR_b_EnaCluSlipAcceCalcnFromCpt)
        {
            tmpRead_6 = HeCSLR_t_MedTED_dT;
        }
        else
        {
            tmpRead_6 = CSLR_ac_DW.UnitDelay_DSTATE_l + HeCSLR_t_MedTED_dT;
        }

        /* End of Switch: '<S171>/Switch' */

        /* Outputs for Enabled SubSystem: '<S171>/CSLL_SlipSpdCalcn' */
        CSLR_ac_CSLL_SlipSpdCalcn(CSLR_ac_B.Merge_j, rtb_Selector1,
            CSLR_ac_B.Switch_b, CSLR_ac_B.Switch1_je, CSLR_ac_B.Switch4,
            CSLR_ac_B.Switch2,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_PrimNoSgnd,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_WEDLeftWhe,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_WEDRightWh,
            CSLR_ac_B.TmpSignalConversionAtVeMSPR_b_MtrA_SpdFA,
            CSLR_ac_B.TmpSignalConversionAtVeMSPR_b_MtrB_SpdFA,
            CSLR_ac_B.TmpSignalConversionAtVeMSPR_b_MtrC_SpdFA,
            CSLR_ac_B.TmpSignalConversionAtVeTISR_b_InputSpeed,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_b_PrimNoFAOu, false,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_b_WEDLeftWhe,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_b_WEDRightWh, tmpRead_6,
            rtb_Switch2, rtb_Switch3, rtb_Switch5,
            CSLR_ac_B.TmpSignalConversionAtVeTISR_dn_InputAcce,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_dn_PrimNodot,
            CSLR_ac_B.Switch1, 0.0F, 0.0F, KeCSLR_t_NC3DotCutOff,
            &CSLR_ac_B.Merge10, &CSLR_ac_B.Merge5, (&(VeCSLC_dn_Nc3dotFromCpt)),
            &CSLR_ac_DW.CSLL_SlipSpdCalcn_j);

        /* End of Outputs for SubSystem: '<S171>/CSLL_SlipSpdCalcn' */

        /* If: '<S176>/If' incorporates:
         *  Constant: '<S80>/Calib'
         */
        if (CSLR_ac_B.TmpSignalConversionAtVeESPR_b_BuffrCrnkD)
        {
            /* Outputs for IfAction SubSystem: '<S176>/SlipSpdFailing' incorporates:
             *  ActionPort: '<S209>/Action Port'
             */
            CSLR_ac_SlipSpdFailing(rtb_Selector1,
                                   &CSLR_ac_B.VM_Conditional_Signal_NCxSlipSpdFailing_
                                   [2]);

            /* End of Outputs for SubSystem: '<S176>/SlipSpdFailing' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S176>/No_SlipSpdFailing ' incorporates:
             *  ActionPort: '<S208>/Action Port'
             */
            CSLR_ac_No_SlipSpdFailing
                (&CSLR_ac_B.VM_Conditional_Signal_NCxSlipSpdFailing_[2]);

            /* End of Outputs for SubSystem: '<S176>/No_SlipSpdFailing ' */
        }

        /* End of If: '<S176>/If' */

        /* Merge: '<S6>/Merge7' incorporates:
         *  Gain: '<S177>/Gain'
         */
        VeCSLC_b_M1_Nc3Trigger = CSLR_ac_B.Merge_j;

        /* Update for UnitDelay: '<S171>/Unit Delay' */
        CSLR_ac_DW.UnitDelay_DSTATE_aw = CSLR_ac_B.Merge_j;

        /* End of Outputs for SubSystem: '<S88>/NcCalc' */
#else

        /* Outputs for Atomic SubSystem: '<S88>/Default' */
        CSLR_ac_Default_i(&CSLR_ac_B.Merge10, &CSLR_ac_B.Merge5,
                          (&(VeCSLC_dn_Nc3dotFromCpt)),
                          (&(VeCSLC_b_M1_Nc3Trigger)),
                          &CSLR_ac_B.VM_Conditional_Signal_NCxSlipSpdFailing_[2]);

        /* End of Outputs for SubSystem: '<S88>/Default' */
#endif

        /* End of Outputs for SubSystem: '<S14>/Nc3Calc' */
        for (i = 0; i < 8; i++)
        {
            /* Selector: '<S14>/Selector7' incorporates:
             *  SignalConversion: '<S5>/Signal Conversion1'
             */
            rtb_Selector1[i] = CSLR_ac_B.LaCSLR_r_M1_ClchSlpMat_NcnDep[(i * 4) +
                3];
        }

        /* Outputs for Atomic SubSystem: '<S14>/Nc4Calc' */
#if Rte_SysCon_Variant_CSLR_C4SlipActv

        /* Outputs for Atomic SubSystem: '<S89>/NcCalc' */
        /* DataStoreWrite: '<S211>/Data Store Write3' incorporates:
         *  Constant: '<S85>/Calib'
         */
        VeCSLR_y_NC4Source_DS = KeCSLR_y_NC4_M1Source;

        /* If: '<S211>/If' incorporates:
         *  Constant: '<S10>/TRUE Constant1'
         *  Constant: '<S85>/Calib'
         */
        if (rtb_Logical4)
        {
            /* Outputs for IfAction SubSystem: '<S211>/AllSpdFstEnghVlid' incorporates:
             *  ActionPort: '<S212>/Action Port'
             */
            CSLR_ac_AllSpdFstEnghVlid(&CSLR_ac_B.Merge_g);

            /* End of Outputs for SubSystem: '<S211>/AllSpdFstEnghVlid' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S211>/Else' incorporates:
             *  ActionPort: '<S214>/Action Port'
             */
            CSLR_ac_Else(VeCSLR_b_NiVld, CSLR_ac_B.Merge1, true,
                         KeCSLR_y_NC4_M1Source, &CSLR_ac_B.Merge_g);

            /* End of Outputs for SubSystem: '<S211>/Else' */
        }

        /* End of If: '<S211>/If' */

        /* Outputs for Atomic SubSystem: '<S211>/Stop Watch Reset Enabled' */
        /* Switch: '<S218>/Switch1' incorporates:
         *  Constant: '<S215>/Calib'
         *  Constant: '<S218>/Constant Value2'
         *  Sum: '<S218>/Subtraction'
         *  UnitDelay: '<S211>/Unit Delay'
         *  UnitDelay: '<S218>/Unit Delay'
         */
        if (CSLR_ac_DW.UnitDelay_DSTATE_ky)
        {
            CSLR_ac_DW.UnitDelay_DSTATE_p = 0.0F;
        }
        else
        {
            CSLR_ac_DW.UnitDelay_DSTATE_p += HeCSLR_t_MedTED_dT;
        }

        /* End of Switch: '<S218>/Switch1' */
        /* End of Outputs for SubSystem: '<S211>/Stop Watch Reset Enabled' */

        /* Switch: '<S211>/Switch' incorporates:
         *  Constant: '<S215>/Calib'
         *  Constant: '<S77>/Calib'
         *  Sum: '<S211>/Sum'
         *  UnitDelay: '<S218>/Unit Delay'
         */
        if (KeCSLR_b_EnaCluSlipAcceCalcnFromCpt)
        {
            tmpRead_6 = HeCSLR_t_MedTED_dT;
        }
        else
        {
            tmpRead_6 = CSLR_ac_DW.UnitDelay_DSTATE_p + HeCSLR_t_MedTED_dT;
        }

        /* End of Switch: '<S211>/Switch' */

        /* Outputs for Enabled SubSystem: '<S211>/CSLL_SlipSpdCalcn' */
        CSLR_ac_CSLL_SlipSpdCalcn(CSLR_ac_B.Merge_g, rtb_Selector1,
            CSLR_ac_B.Switch_b, CSLR_ac_B.Switch1_je, CSLR_ac_B.Switch4,
            CSLR_ac_B.Switch2,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_PrimNoSgnd,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_WEDLeftWhe,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_WEDRightWh,
            CSLR_ac_B.TmpSignalConversionAtVeMSPR_b_MtrA_SpdFA,
            CSLR_ac_B.TmpSignalConversionAtVeMSPR_b_MtrB_SpdFA,
            CSLR_ac_B.TmpSignalConversionAtVeMSPR_b_MtrC_SpdFA,
            CSLR_ac_B.TmpSignalConversionAtVeTISR_b_InputSpeed,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_b_PrimNoFAOu, false,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_b_WEDLeftWhe,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_b_WEDRightWh, tmpRead_6,
            rtb_Switch2, rtb_Switch3, rtb_Switch5,
            CSLR_ac_B.TmpSignalConversionAtVeTISR_dn_InputAcce,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_dn_PrimNodot,
            CSLR_ac_B.Switch1, 0.0F, 0.0F, KeCSLR_t_NC4DotCutOff,
            &CSLR_ac_B.Merge11, &CSLR_ac_B.Merge6, (&(VeCSLC_dn_Nc4dotFromCpt)),
            &CSLR_ac_DW.CSLL_SlipSpdCalcn_hs);

        /* End of Outputs for SubSystem: '<S211>/CSLL_SlipSpdCalcn' */

        /* If: '<S216>/If' incorporates:
         *  Constant: '<S81>/Calib'
         */
        if (CSLR_ac_B.TmpSignalConversionAtVeESPR_b_BuffrCrnkD)
        {
            /* Outputs for IfAction SubSystem: '<S216>/SlipSpdFailing' incorporates:
             *  ActionPort: '<S249>/Action Port'
             */
            CSLR_ac_SlipSpdFailing(rtb_Selector1,
                                   &CSLR_ac_B.VM_Conditional_Signal_NCxSlipSpdFailing_
                                   [3]);

            /* End of Outputs for SubSystem: '<S216>/SlipSpdFailing' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S216>/No_SlipSpdFailing ' incorporates:
             *  ActionPort: '<S248>/Action Port'
             */
            CSLR_ac_No_SlipSpdFailing
                (&CSLR_ac_B.VM_Conditional_Signal_NCxSlipSpdFailing_[3]);

            /* End of Outputs for SubSystem: '<S216>/No_SlipSpdFailing ' */
        }

        /* End of If: '<S216>/If' */

        /* Merge: '<S6>/Merge2' incorporates:
         *  Gain: '<S217>/Gain'
         */
        VeCSLC_b_M1_Nc4Trigger = CSLR_ac_B.Merge_g;

        /* Update for UnitDelay: '<S211>/Unit Delay' */
        CSLR_ac_DW.UnitDelay_DSTATE_ky = CSLR_ac_B.Merge_g;

        /* End of Outputs for SubSystem: '<S89>/NcCalc' */
#else

        /* Outputs for Atomic SubSystem: '<S89>/Default' */
        CSLR_ac_Default_i(&CSLR_ac_B.Merge11, &CSLR_ac_B.Merge6,
                          (&(VeCSLC_dn_Nc4dotFromCpt)),
                          (&(VeCSLC_b_M1_Nc4Trigger)),
                          &CSLR_ac_B.VM_Conditional_Signal_NCxSlipSpdFailing_[3]);

        /* End of Outputs for SubSystem: '<S89>/Default' */
#endif

        /* End of Outputs for SubSystem: '<S14>/Nc4Calc' */

        /* Merge: '<S6>/Merge1' incorporates:
         *  Constant: '<S17>/Constant Value2'
         *  Constant: '<S17>/Constant Value3'
         *  Constant: '<S1>/Const'
         *  Constant: '<S78>/Calib'
         *  Constant: '<S79>/Calib'
         *  Constant: '<S80>/Calib'
         *  Constant: '<S81>/Calib'
         *  SignalConversion generated from: '<S14>/Nc2Trigger'
         */
        VeCSLC_b_M1_Nc2Trigger = CSLR_ac_B.VariantMergeForOutportNCTrigger;

        /* Merge: '<S6>/Merge21' incorporates:
         *  Gain: '<S90>/Gain'
         *  SignalConversion: '<S5>/Signal Conversion1'
         */
        rtb_Merge21_0 = &CSLR_ac_B.LaCSLR_r_M1_ClchSlpMat_NcnDep[0];

        /* End of Outputs for SubSystem: '<S6>/CSLC_ClchSpd_M1' */
    }
    else if ((((((((uint32)tmpRead) == CeHSER_e_UseM2Eqn) || (((uint32)tmpRead) ==
                  CeHSER_e_UseG3Eqn)) || (((uint32)tmpRead) == CeHSER_e_UseG4Eqn))
               && (fabsf(CSLR_ac_B.VariantMergeForOutportNCRaw) <
                   look1_iflf_binlca_16a(tmpRead_6, ((const float32 *)
                  &(KxCSLR_n_C2LockedThresh[0])), ((const float32 *)
                  &(KtCSLR_n_C2LockedThresh[0])), 2U))) && (!VeCSLR_b_NC2Raw_FA))
             && (KeCSLR_b_EnaC2LockdCalcn))
    {
        CSLR_ac_DW.If_ActiveSubsystem = 1;

        /* Outputs for IfAction SubSystem: '<S6>/CSLC_ClchSpd_M2' incorporates:
         *  ActionPort: '<S15>/Action Port'
         */
        for (i = 0; i < 8; i++)
        {
            /* Selector: '<S15>/Selector4' incorporates:
             *  SignalConversion: '<S5>/Signal Conversion2'
             */
            rtb_Selector1[i] = CSLR_ac_B.LaCSLR_r_M2_ClchSlpMat_NcnDep[i * 4];
        }

        /* Outputs for Atomic SubSystem: '<S15>/Nc1Calc' */
#if Rte_SysCon_Variant_CSLR_C1SlipActv

        /* Outputs for Atomic SubSystem: '<S260>/NcCalc' */
        /* DataStoreWrite: '<S270>/Data Store Write3' incorporates:
         *  Constant: '<S256>/Calib'
         */
        VeCSLR_y_NC1Source_DS = KeCSLR_y_NC1_M2Source;

        /* If: '<S270>/If' incorporates:
         *  Constant: '<S10>/TRUE Constant1'
         *  Constant: '<S256>/Calib'
         */
        if (rtb_Logical4)
        {
            /* Outputs for IfAction SubSystem: '<S270>/AllSpdFstEnghVlid' incorporates:
             *  ActionPort: '<S271>/Action Port'
             */
            CSLR_ac_AllSpdFstEnghVlid((&(VeCSLC_b_M2_Nc1Trigger)));

            /* End of Outputs for SubSystem: '<S270>/AllSpdFstEnghVlid' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S270>/Else' incorporates:
             *  ActionPort: '<S273>/Action Port'
             */
            CSLR_ac_Else(VeCSLR_b_NiVld, CSLR_ac_B.Merge1, true,
                         KeCSLR_y_NC1_M2Source, (&(VeCSLC_b_M2_Nc1Trigger)));

            /* End of Outputs for SubSystem: '<S270>/Else' */
        }

        /* End of If: '<S270>/If' */

        /* Outputs for Atomic SubSystem: '<S270>/Stop Watch Reset Enabled' */
        /* Switch: '<S276>/Switch1' incorporates:
         *  Constant: '<S274>/Calib'
         *  Constant: '<S276>/Constant Value2'
         *  Sum: '<S276>/Subtraction'
         *  UnitDelay: '<S270>/Unit Delay'
         *  UnitDelay: '<S276>/Unit Delay'
         */
        if (CSLR_ac_DW.UnitDelay_DSTATE_m)
        {
            CSLR_ac_DW.UnitDelay_DSTATE_n = 0.0F;
        }
        else
        {
            CSLR_ac_DW.UnitDelay_DSTATE_n += HeCSLR_t_MedTED_dT;
        }

        /* End of Switch: '<S276>/Switch1' */
        /* End of Outputs for SubSystem: '<S270>/Stop Watch Reset Enabled' */

        /* Switch: '<S270>/Switch' incorporates:
         *  Constant: '<S251>/Calib'
         *  Constant: '<S274>/Calib'
         *  Sum: '<S270>/Sum'
         *  UnitDelay: '<S276>/Unit Delay'
         */
        if (KeCSLR_b_EnaCluSlipAcceCalcnFromCpt)
        {
            tmpRead_6 = HeCSLR_t_MedTED_dT;
        }
        else
        {
            tmpRead_6 = CSLR_ac_DW.UnitDelay_DSTATE_n + HeCSLR_t_MedTED_dT;
        }

        /* End of Switch: '<S270>/Switch' */

        /* Outputs for Enabled SubSystem: '<S270>/CSLL_SlipSpdCalcn' */
        CSLR_ac_CSLL_SlipSpdCalcn(VeCSLC_b_M2_Nc1Trigger, rtb_Selector1,
            CSLR_ac_B.Switch_b, CSLR_ac_B.Switch1_je, CSLR_ac_B.Switch4,
            CSLR_ac_B.Switch2,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_PrimNoSgnd,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_WEDLeftWhe,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_WEDRightWh,
            CSLR_ac_B.TmpSignalConversionAtVeMSPR_b_MtrA_SpdFA,
            CSLR_ac_B.TmpSignalConversionAtVeMSPR_b_MtrB_SpdFA,
            CSLR_ac_B.TmpSignalConversionAtVeMSPR_b_MtrC_SpdFA,
            CSLR_ac_B.TmpSignalConversionAtVeTISR_b_InputSpeed,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_b_PrimNoFAOu, false,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_b_WEDLeftWhe,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_b_WEDRightWh, tmpRead_6,
            rtb_Switch2, rtb_Switch3, rtb_Switch5,
            CSLR_ac_B.TmpSignalConversionAtVeTISR_dn_InputAcce,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_dn_PrimNodot,
            CSLR_ac_B.Switch1, 0.0F, 0.0F, KeCSLR_t_NC1DotCutOff,
            &CSLR_ac_B.Merge8, &CSLR_ac_B.Merge, (&(VeCSLC_dn_Nc1dotFromCpt)),
            &CSLR_ac_DW.CSLL_SlipSpdCalcn_e4);

        /* End of Outputs for SubSystem: '<S270>/CSLL_SlipSpdCalcn' */

        /* If: '<S275>/If' incorporates:
         *  Constant: '<S17>/Constant Value2'
         *  Constant: '<S17>/Constant Value3'
         *  Constant: '<S1>/Const'
         *  Constant: '<S252>/Calib'
         */
        if (CSLR_ac_B.TmpSignalConversionAtVeESPR_b_BuffrCrnkD)
        {
            /* Outputs for IfAction SubSystem: '<S275>/SlipSpdFailing' incorporates:
             *  ActionPort: '<S307>/Action Port'
             */
            CSLR_ac_SlipSpdFailing(rtb_Selector1,
                                   &CSLR_ac_B.VM_Conditional_Signal_NCxSlipSpdFailing_
                                   [0]);

            /* End of Outputs for SubSystem: '<S275>/SlipSpdFailing' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S275>/No_SlipSpdFailing ' incorporates:
             *  ActionPort: '<S306>/Action Port'
             */
            CSLR_ac_No_SlipSpdFailing
                (&CSLR_ac_B.VM_Conditional_Signal_NCxSlipSpdFailing_[0]);

            /* End of Outputs for SubSystem: '<S275>/No_SlipSpdFailing ' */
        }

        /* End of If: '<S275>/If' */

        /* Update for UnitDelay: '<S270>/Unit Delay' */
        CSLR_ac_DW.UnitDelay_DSTATE_m = VeCSLC_b_M2_Nc1Trigger;

        /* End of Outputs for SubSystem: '<S260>/NcCalc' */
#else

        /* Outputs for Atomic SubSystem: '<S260>/Default' */
        CSLR_ac_Default_i(&CSLR_ac_B.Merge8, &CSLR_ac_B.Merge,
                          (&(VeCSLC_dn_Nc1dotFromCpt)),
                          (&(VeCSLC_b_M2_Nc1Trigger)),
                          &CSLR_ac_B.VM_Conditional_Signal_NCxSlipSpdFailing_[0]);

        /* End of Outputs for SubSystem: '<S260>/Default' */
#endif

        /* End of Outputs for SubSystem: '<S15>/Nc1Calc' */
        for (i = 0; i < 8; i++)
        {
            /* Selector: '<S15>/Selector5' incorporates:
             *  SignalConversion: '<S5>/Signal Conversion2'
             */
            rtb_Selector1[i] = CSLR_ac_B.LaCSLR_r_M2_ClchSlpMat_NcnDep[(i * 4) +
                1];
        }

        /* Outputs for Atomic SubSystem: '<S15>/Nc2Calc' */
#if Rte_SysCon_Variant_CSLR_C2SlipActv

        /* Outputs for Atomic SubSystem: '<S261>/NcCalc' */
        /* DataStoreWrite: '<S309>/Data Store Write3' incorporates:
         *  Constant: '<S257>/Calib'
         */
        VeCSLR_y_NC2Source_DS = KeCSLR_y_NC2_M2Source;

        /* If: '<S309>/If' incorporates:
         *  Constant: '<S10>/TRUE Constant1'
         *  Constant: '<S257>/Calib'
         */
        if (rtb_Logical4)
        {
            /* Outputs for IfAction SubSystem: '<S309>/AllSpdFstEnghVlid' incorporates:
             *  ActionPort: '<S310>/Action Port'
             */
            CSLR_ac_AllSpdFstEnghVlid((&(VeCSLC_b_M2_Nc2Trigger)));

            /* End of Outputs for SubSystem: '<S309>/AllSpdFstEnghVlid' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S309>/Else' incorporates:
             *  ActionPort: '<S312>/Action Port'
             */
            CSLR_ac_Else(VeCSLR_b_NiVld, CSLR_ac_B.Merge1, true,
                         KeCSLR_y_NC2_M2Source, (&(VeCSLC_b_M2_Nc2Trigger)));

            /* End of Outputs for SubSystem: '<S309>/Else' */
        }

        /* End of If: '<S309>/If' */

        /* Outputs for Atomic SubSystem: '<S309>/Stop Watch Reset Enabled' */
        /* Switch: '<S315>/Switch' incorporates:
         *  Constant: '<S313>/Calib'
         *  Constant: '<S315>/Constant Value2'
         *  Sum: '<S315>/Subtraction'
         *  UnitDelay: '<S309>/Unit Delay'
         *  UnitDelay: '<S315>/Unit Delay'
         */
        if (CSLR_ac_DW.UnitDelay_DSTATE_k2)
        {
            CSLR_ac_DW.UnitDelay_DSTATE_g = 0.0F;
        }
        else
        {
            CSLR_ac_DW.UnitDelay_DSTATE_g += HeCSLR_t_MedTED_dT;
        }

        /* End of Switch: '<S315>/Switch' */
        /* End of Outputs for SubSystem: '<S309>/Stop Watch Reset Enabled' */

        /* Switch: '<S309>/Switch' incorporates:
         *  Constant: '<S251>/Calib'
         *  Constant: '<S313>/Calib'
         *  Sum: '<S309>/Sum'
         *  UnitDelay: '<S315>/Unit Delay'
         */
        if (KeCSLR_b_EnaCluSlipAcceCalcnFromCpt)
        {
            tmpRead_6 = HeCSLR_t_MedTED_dT;
        }
        else
        {
            tmpRead_6 = CSLR_ac_DW.UnitDelay_DSTATE_g + HeCSLR_t_MedTED_dT;
        }

        /* End of Switch: '<S309>/Switch' */

        /* Outputs for Enabled SubSystem: '<S309>/CSLL_SlipSpdCalcn' */
        CSLR_ac_CSLL_SlipSpdCalcn(VeCSLC_b_M2_Nc2Trigger, rtb_Selector1,
            CSLR_ac_B.Switch_b, CSLR_ac_B.Switch1_je, CSLR_ac_B.Switch4,
            CSLR_ac_B.Switch2,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_PrimNoSgnd,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_WEDLeftWhe,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_WEDRightWh,
            CSLR_ac_B.TmpSignalConversionAtVeMSPR_b_MtrA_SpdFA,
            CSLR_ac_B.TmpSignalConversionAtVeMSPR_b_MtrB_SpdFA,
            CSLR_ac_B.TmpSignalConversionAtVeMSPR_b_MtrC_SpdFA,
            CSLR_ac_B.TmpSignalConversionAtVeTISR_b_InputSpeed,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_b_PrimNoFAOu, false,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_b_WEDLeftWhe,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_b_WEDRightWh, tmpRead_6,
            rtb_Switch2, rtb_Switch3, rtb_Switch5,
            CSLR_ac_B.TmpSignalConversionAtVeTISR_dn_InputAcce,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_dn_PrimNodot,
            CSLR_ac_B.Switch1, 0.0F, 0.0F, KeCSLR_t_NC2DotCutOff,
            &CSLR_ac_B.Merge9, &CSLR_ac_B.Merge4, (&(VeCSLC_dn_Nc2dotFromCpt)),
            &CSLR_ac_DW.CSLL_SlipSpdCalcn_n);

        /* End of Outputs for SubSystem: '<S309>/CSLL_SlipSpdCalcn' */

        /* If: '<S314>/If' incorporates:
         *  Constant: '<S253>/Calib'
         */
        if (CSLR_ac_B.TmpSignalConversionAtVeESPR_b_BuffrCrnkD)
        {
            /* Outputs for IfAction SubSystem: '<S314>/SlipSpdFailing' incorporates:
             *  ActionPort: '<S346>/Action Port'
             */
            CSLR_ac_SlipSpdFailing(rtb_Selector1,
                                   &CSLR_ac_B.VM_Conditional_Signal_NCxSlipSpdFailing_
                                   [1]);

            /* End of Outputs for SubSystem: '<S314>/SlipSpdFailing' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S314>/No_SlipSpdFailing ' incorporates:
             *  ActionPort: '<S345>/Action Port'
             */
            CSLR_ac_No_SlipSpdFailing
                (&CSLR_ac_B.VM_Conditional_Signal_NCxSlipSpdFailing_[1]);

            /* End of Outputs for SubSystem: '<S314>/No_SlipSpdFailing ' */
        }

        /* End of If: '<S314>/If' */

        /* Update for UnitDelay: '<S309>/Unit Delay' */
        CSLR_ac_DW.UnitDelay_DSTATE_k2 = VeCSLC_b_M2_Nc2Trigger;

        /* End of Outputs for SubSystem: '<S261>/NcCalc' */
#else

        /* Outputs for Atomic SubSystem: '<S261>/Default' */
        CSLR_ac_Default_i(&CSLR_ac_B.Merge9, &CSLR_ac_B.Merge4,
                          (&(VeCSLC_dn_Nc2dotFromCpt)),
                          (&(VeCSLC_b_M2_Nc2Trigger)),
                          &CSLR_ac_B.VM_Conditional_Signal_NCxSlipSpdFailing_[1]);

        /* End of Outputs for SubSystem: '<S261>/Default' */
#endif

        /* End of Outputs for SubSystem: '<S15>/Nc2Calc' */
        for (i = 0; i < 8; i++)
        {
            /* Selector: '<S15>/Selector6' incorporates:
             *  SignalConversion: '<S5>/Signal Conversion2'
             */
            rtb_Selector1[i] = CSLR_ac_B.LaCSLR_r_M2_ClchSlpMat_NcnDep[(i * 4) +
                2];
        }

        /* Outputs for Atomic SubSystem: '<S15>/Nc3Calc' */
#if Rte_SysCon_Variant_CSLR_C3SlipActv

        /* Outputs for Atomic SubSystem: '<S262>/NcCalc' */
        /* DataStoreWrite: '<S348>/Data Store Write3' incorporates:
         *  Constant: '<S258>/Calib'
         */
        VeCSLR_y_NC3Source_DS = KeCSLR_y_NC3_M2Source;

        /* If: '<S348>/If' incorporates:
         *  Constant: '<S10>/TRUE Constant1'
         *  Constant: '<S258>/Calib'
         */
        if (rtb_Logical4)
        {
            /* Outputs for IfAction SubSystem: '<S348>/AllSpdFstEnghVlid' incorporates:
             *  ActionPort: '<S349>/Action Port'
             */
            CSLR_ac_AllSpdFstEnghVlid((&(VeCSLC_b_M2_Nc3Trigger)));

            /* End of Outputs for SubSystem: '<S348>/AllSpdFstEnghVlid' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S348>/Else' incorporates:
             *  ActionPort: '<S351>/Action Port'
             */
            CSLR_ac_Else(VeCSLR_b_NiVld, CSLR_ac_B.Merge1, true,
                         KeCSLR_y_NC3_M2Source, (&(VeCSLC_b_M2_Nc3Trigger)));

            /* End of Outputs for SubSystem: '<S348>/Else' */
        }

        /* End of If: '<S348>/If' */

        /* Outputs for Atomic SubSystem: '<S348>/Stop Watch Reset Enabled' */
        /* Switch: '<S354>/Switch1' incorporates:
         *  Constant: '<S352>/Calib'
         *  Constant: '<S354>/Constant Value2'
         *  Sum: '<S354>/Subtraction'
         *  UnitDelay: '<S348>/Unit Delay'
         *  UnitDelay: '<S354>/Unit Delay'
         */
        if (CSLR_ac_DW.UnitDelay_DSTATE_g0)
        {
            CSLR_ac_DW.UnitDelay_DSTATE_a = 0.0F;
        }
        else
        {
            CSLR_ac_DW.UnitDelay_DSTATE_a += HeCSLR_t_MedTED_dT;
        }

        /* End of Switch: '<S354>/Switch1' */
        /* End of Outputs for SubSystem: '<S348>/Stop Watch Reset Enabled' */

        /* Switch: '<S348>/Switch' incorporates:
         *  Constant: '<S251>/Calib'
         *  Constant: '<S352>/Calib'
         *  Sum: '<S348>/Sum'
         *  UnitDelay: '<S354>/Unit Delay'
         */
        if (KeCSLR_b_EnaCluSlipAcceCalcnFromCpt)
        {
            tmpRead_6 = HeCSLR_t_MedTED_dT;
        }
        else
        {
            tmpRead_6 = CSLR_ac_DW.UnitDelay_DSTATE_a + HeCSLR_t_MedTED_dT;
        }

        /* End of Switch: '<S348>/Switch' */

        /* Outputs for Enabled SubSystem: '<S348>/CSLL_SlipSpdCalcn' */
        CSLR_ac_CSLL_SlipSpdCalcn(VeCSLC_b_M2_Nc3Trigger, rtb_Selector1,
            CSLR_ac_B.Switch_b, CSLR_ac_B.Switch1_je, CSLR_ac_B.Switch4,
            CSLR_ac_B.Switch2,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_PrimNoSgnd,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_WEDLeftWhe,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_WEDRightWh,
            CSLR_ac_B.TmpSignalConversionAtVeMSPR_b_MtrA_SpdFA,
            CSLR_ac_B.TmpSignalConversionAtVeMSPR_b_MtrB_SpdFA,
            CSLR_ac_B.TmpSignalConversionAtVeMSPR_b_MtrC_SpdFA,
            CSLR_ac_B.TmpSignalConversionAtVeTISR_b_InputSpeed,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_b_PrimNoFAOu, false,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_b_WEDLeftWhe,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_b_WEDRightWh, tmpRead_6,
            rtb_Switch2, rtb_Switch3, rtb_Switch5,
            CSLR_ac_B.TmpSignalConversionAtVeTISR_dn_InputAcce,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_dn_PrimNodot,
            CSLR_ac_B.Switch1, 0.0F, 0.0F, KeCSLR_t_NC3DotCutOff,
            &CSLR_ac_B.Merge10, &CSLR_ac_B.Merge5, (&(VeCSLC_dn_Nc3dotFromCpt)),
            &CSLR_ac_DW.CSLL_SlipSpdCalcn_f);

        /* End of Outputs for SubSystem: '<S348>/CSLL_SlipSpdCalcn' */

        /* If: '<S353>/If' incorporates:
         *  Constant: '<S254>/Calib'
         */
        if (CSLR_ac_B.TmpSignalConversionAtVeESPR_b_BuffrCrnkD)
        {
            /* Outputs for IfAction SubSystem: '<S353>/SlipSpdFailing' incorporates:
             *  ActionPort: '<S385>/Action Port'
             */
            CSLR_ac_SlipSpdFailing(rtb_Selector1,
                                   &CSLR_ac_B.VM_Conditional_Signal_NCxSlipSpdFailing_
                                   [2]);

            /* End of Outputs for SubSystem: '<S353>/SlipSpdFailing' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S353>/No_SlipSpdFailing ' incorporates:
             *  ActionPort: '<S384>/Action Port'
             */
            CSLR_ac_No_SlipSpdFailing
                (&CSLR_ac_B.VM_Conditional_Signal_NCxSlipSpdFailing_[2]);

            /* End of Outputs for SubSystem: '<S353>/No_SlipSpdFailing ' */
        }

        /* End of If: '<S353>/If' */

        /* Update for UnitDelay: '<S348>/Unit Delay' */
        CSLR_ac_DW.UnitDelay_DSTATE_g0 = VeCSLC_b_M2_Nc3Trigger;

        /* End of Outputs for SubSystem: '<S262>/NcCalc' */
#else

        /* Outputs for Atomic SubSystem: '<S262>/Default' */
        CSLR_ac_Default_i(&CSLR_ac_B.Merge10, &CSLR_ac_B.Merge5,
                          (&(VeCSLC_dn_Nc3dotFromCpt)),
                          (&(VeCSLC_b_M2_Nc3Trigger)),
                          &CSLR_ac_B.VM_Conditional_Signal_NCxSlipSpdFailing_[2]);

        /* End of Outputs for SubSystem: '<S262>/Default' */
#endif

        /* End of Outputs for SubSystem: '<S15>/Nc3Calc' */
        for (i = 0; i < 8; i++)
        {
            /* Selector: '<S15>/Selector7' incorporates:
             *  SignalConversion: '<S5>/Signal Conversion2'
             */
            rtb_Selector1[i] = CSLR_ac_B.LaCSLR_r_M2_ClchSlpMat_NcnDep[(i * 4) +
                3];
        }

        /* Outputs for Atomic SubSystem: '<S15>/Nc4Calc' */
#if Rte_SysCon_Variant_CSLR_C4SlipActv

        /* Outputs for Atomic SubSystem: '<S263>/NcCalc' */
        /* DataStoreWrite: '<S387>/Data Store Write3' incorporates:
         *  Constant: '<S259>/Calib'
         */
        VeCSLR_y_NC4Source_DS = KeCSLR_y_NC4_M2Source;

        /* If: '<S387>/If' incorporates:
         *  Constant: '<S10>/TRUE Constant1'
         *  Constant: '<S259>/Calib'
         */
        if (rtb_Logical4)
        {
            /* Outputs for IfAction SubSystem: '<S387>/AllSpdFstEnghVlid' incorporates:
             *  ActionPort: '<S388>/Action Port'
             */
            CSLR_ac_AllSpdFstEnghVlid((&(VeCSLC_b_M2_Nc4Trigger)));

            /* End of Outputs for SubSystem: '<S387>/AllSpdFstEnghVlid' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S387>/Else' incorporates:
             *  ActionPort: '<S390>/Action Port'
             */
            CSLR_ac_Else(VeCSLR_b_NiVld, CSLR_ac_B.Merge1, true,
                         KeCSLR_y_NC4_M2Source, (&(VeCSLC_b_M2_Nc4Trigger)));

            /* End of Outputs for SubSystem: '<S387>/Else' */
        }

        /* End of If: '<S387>/If' */

        /* Outputs for Atomic SubSystem: '<S387>/Stop Watch Reset Enabled' */
        /* Switch: '<S393>/Switch1' incorporates:
         *  Constant: '<S391>/Calib'
         *  Constant: '<S393>/Constant Value2'
         *  Sum: '<S393>/Subtraction'
         *  UnitDelay: '<S387>/Unit Delay'
         *  UnitDelay: '<S393>/Unit Delay'
         */
        if (CSLR_ac_DW.UnitDelay_DSTATE_dm)
        {
            CSLR_ac_DW.UnitDelay_DSTATE_b = 0.0F;
        }
        else
        {
            CSLR_ac_DW.UnitDelay_DSTATE_b += HeCSLR_t_MedTED_dT;
        }

        /* End of Switch: '<S393>/Switch1' */
        /* End of Outputs for SubSystem: '<S387>/Stop Watch Reset Enabled' */

        /* Switch: '<S387>/Switch' incorporates:
         *  Constant: '<S251>/Calib'
         *  Constant: '<S391>/Calib'
         *  Sum: '<S387>/Sum'
         *  UnitDelay: '<S393>/Unit Delay'
         */
        if (KeCSLR_b_EnaCluSlipAcceCalcnFromCpt)
        {
            tmpRead_6 = HeCSLR_t_MedTED_dT;
        }
        else
        {
            tmpRead_6 = CSLR_ac_DW.UnitDelay_DSTATE_b + HeCSLR_t_MedTED_dT;
        }

        /* End of Switch: '<S387>/Switch' */

        /* Outputs for Enabled SubSystem: '<S387>/CSLL_SlipSpdCalcn' */
        CSLR_ac_CSLL_SlipSpdCalcn(VeCSLC_b_M2_Nc4Trigger, rtb_Selector1,
            CSLR_ac_B.Switch_b, CSLR_ac_B.Switch1_je, CSLR_ac_B.Switch4,
            CSLR_ac_B.Switch2,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_PrimNoSgnd,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_WEDLeftWhe,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_WEDRightWh,
            CSLR_ac_B.TmpSignalConversionAtVeMSPR_b_MtrA_SpdFA,
            CSLR_ac_B.TmpSignalConversionAtVeMSPR_b_MtrB_SpdFA,
            CSLR_ac_B.TmpSignalConversionAtVeMSPR_b_MtrC_SpdFA,
            CSLR_ac_B.TmpSignalConversionAtVeTISR_b_InputSpeed,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_b_PrimNoFAOu, false,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_b_WEDLeftWhe,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_b_WEDRightWh, tmpRead_6,
            rtb_Switch2, rtb_Switch3, rtb_Switch5,
            CSLR_ac_B.TmpSignalConversionAtVeTISR_dn_InputAcce,
            CSLR_ac_B.TmpSignalConversionAtVeVSDR_dn_PrimNodot,
            CSLR_ac_B.Switch1, 0.0F, 0.0F, KeCSLR_t_NC4DotCutOff,
            &CSLR_ac_B.Merge11, &CSLR_ac_B.Merge6, (&(VeCSLC_dn_Nc4dotFromCpt)),
            &CSLR_ac_DW.CSLL_SlipSpdCalcn_a);

        /* End of Outputs for SubSystem: '<S387>/CSLL_SlipSpdCalcn' */

        /* If: '<S392>/If' incorporates:
         *  Constant: '<S255>/Calib'
         */
        if (CSLR_ac_B.TmpSignalConversionAtVeESPR_b_BuffrCrnkD)
        {
            /* Outputs for IfAction SubSystem: '<S392>/SlipSpdFailing' incorporates:
             *  ActionPort: '<S424>/Action Port'
             */
            CSLR_ac_SlipSpdFailing(rtb_Selector1,
                                   &CSLR_ac_B.VM_Conditional_Signal_NCxSlipSpdFailing_
                                   [3]);

            /* End of Outputs for SubSystem: '<S392>/SlipSpdFailing' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S392>/No_SlipSpdFailing ' incorporates:
             *  ActionPort: '<S423>/Action Port'
             */
            CSLR_ac_No_SlipSpdFailing
                (&CSLR_ac_B.VM_Conditional_Signal_NCxSlipSpdFailing_[3]);

            /* End of Outputs for SubSystem: '<S392>/No_SlipSpdFailing ' */
        }

        /* End of If: '<S392>/If' */

        /* Update for UnitDelay: '<S387>/Unit Delay' */
        CSLR_ac_DW.UnitDelay_DSTATE_dm = VeCSLC_b_M2_Nc4Trigger;

        /* End of Outputs for SubSystem: '<S263>/NcCalc' */
#else

        /* Outputs for Atomic SubSystem: '<S263>/Default' */
        CSLR_ac_Default_i(&CSLR_ac_B.Merge11, &CSLR_ac_B.Merge6,
                          (&(VeCSLC_dn_Nc4dotFromCpt)),
                          (&(VeCSLC_b_M2_Nc4Trigger)),
                          &CSLR_ac_B.VM_Conditional_Signal_NCxSlipSpdFailing_[3]);

        /* End of Outputs for SubSystem: '<S263>/Default' */
#endif

        /* End of Outputs for SubSystem: '<S15>/Nc4Calc' */

        /* Merge: '<S6>/Merge3' incorporates:
         *  Constant: '<S17>/Constant Value2'
         *  Constant: '<S17>/Constant Value3'
         *  Constant: '<S1>/Const'
         *  Constant: '<S252>/Calib'
         *  Constant: '<S253>/Calib'
         *  Constant: '<S254>/Calib'
         *  Constant: '<S255>/Calib'
         *  Gain: '<S264>/Gain'
         */
        VeCSLC_b_M1_Nc1Trigger = VeCSLC_b_M2_Nc1Trigger;

        /* Merge: '<S6>/Merge1' incorporates:
         *  Gain: '<S265>/Gain'
         */
        VeCSLC_b_M1_Nc2Trigger = VeCSLC_b_M2_Nc2Trigger;

        /* Merge: '<S6>/Merge7' incorporates:
         *  Gain: '<S266>/Gain'
         */
        VeCSLC_b_M1_Nc3Trigger = VeCSLC_b_M2_Nc3Trigger;

        /* Merge: '<S6>/Merge21' incorporates:
         *  Gain: '<S267>/Gain'
         *  SignalConversion: '<S5>/Signal Conversion2'
         */
        rtb_Merge21_0 = &CSLR_ac_B.LaCSLR_r_M2_ClchSlpMat_NcnDep[0];

        /* Merge: '<S6>/Merge2' incorporates:
         *  Gain: '<S268>/Gain'
         */
        VeCSLC_b_M1_Nc4Trigger = VeCSLC_b_M2_Nc4Trigger;

        /* End of Outputs for SubSystem: '<S6>/CSLC_ClchSpd_M2' */
    }
    else
    {
        CSLR_ac_DW.If_ActiveSubsystem = 2;

        /* Outputs for IfAction SubSystem: '<S6>/CSLC_ClchSlip_else' incorporates:
         *  ActionPort: '<S13>/Action Port'
         */
        /* DataStoreWrite: '<S13>/Data Store Write' incorporates:
         *  Constant: '<S57>/Calib'
         */
        VeCSLR_y_NC4Source_DS = KeCSLR_y_NC4_NSource;

        /* DataStoreWrite: '<S13>/Data Store Write1' incorporates:
         *  Constant: '<S56>/Calib'
         */
        VeCSLR_y_NC3Source_DS = KeCSLR_y_NC3_NSource;

        /* DataStoreWrite: '<S13>/Data Store Write2' incorporates:
         *  Constant: '<S55>/Calib'
         */
        VeCSLR_y_NC2Source_DS = KeCSLR_y_NC2_NSource;

        /* DataStoreWrite: '<S13>/Data Store Write3' incorporates:
         *  Constant: '<S54>/Calib'
         */
        VeCSLR_y_NC1Source_DS = KeCSLR_y_NC1_NSource;

        /* Merge: '<S6>/Merge' incorporates:
         *  Gain: '<S68>/Gain'
         */
        CSLR_ac_B.Merge = CSLR_ac_B.VariantMergeForOutportNCRaw_g;

        /* Merge: '<S6>/Merge8' incorporates:
         *  Gain: '<S58>/Gain'
         */
        CSLR_ac_B.Merge8 = VeCSLR_b_NC1Raw_FA;

        /* Merge: '<S6>/Merge16' incorporates:
         *  Gain: '<S62>/Gain'
         */
        VeCSLC_dn_Nc1dotFromCpt = CSLR_ac_B.VariantMergeForOutportNCdotRaw_k;

        /* Merge: '<S6>/Merge4' incorporates:
         *  Gain: '<S71>/Gain'
         */
        CSLR_ac_B.Merge4 = CSLR_ac_B.VariantMergeForOutportNCRaw;

        /* Merge: '<S6>/Merge9' incorporates:
         *  Gain: '<S70>/Gain'
         */
        CSLR_ac_B.Merge9 = VeCSLR_b_NC2Raw_FA;

        /* Merge: '<S6>/Merge17' incorporates:
         *  Gain: '<S63>/Gain'
         */
        VeCSLC_dn_Nc2dotFromCpt = CSLR_ac_B.VariantMergeForOutportNCdotRaw;

        /* Merge: '<S6>/Merge5' incorporates:
         *  Gain: '<S74>/Gain'
         */
        CSLR_ac_B.Merge5 = VeCSLR_n_Clch3_RawSlipSpeed;

        /* Merge: '<S6>/Merge10' incorporates:
         *  Gain: '<S73>/Gain'
         */
        CSLR_ac_B.Merge10 = VeCSLR_b_NC3Raw_FA;

        /* Merge: '<S6>/Merge18' incorporates:
         *  Gain: '<S64>/Gain'
         */
        VeCSLC_dn_Nc3dotFromCpt = VeCSLR_dn_NC3dotRaw;

        /* Merge: '<S6>/Merge6' incorporates:
         *  Gain: '<S61>/Gain'
         */
        CSLR_ac_B.Merge6 = VeCSLR_n_Clch4_RawSlipSpeed;

        /* Merge: '<S6>/Merge11' incorporates:
         *  Gain: '<S60>/Gain'
         */
        CSLR_ac_B.Merge11 = VeCSLR_b_NC4Raw_FA;

        /* Merge: '<S6>/Merge19' incorporates:
         *  Gain: '<S65>/Gain'
         */
        VeCSLC_dn_Nc4dotFromCpt = VeCSLR_dn_NC4dotRaw;

        /* Merge: '<S6>/Merge3' incorporates:
         *  Gain: '<S69>/Gain'
         */
        VeCSLC_b_M1_Nc1Trigger = VeCSLC_b_N_Nc1Trigger;

        /* Merge: '<S6>/Merge1' incorporates:
         *  Gain: '<S59>/Gain'
         */
        VeCSLC_b_M1_Nc2Trigger = VeCSLC_b_N_Nc2Trigger;

        /* Merge: '<S6>/Merge7' incorporates:
         *  Gain: '<S75>/Gain'
         */
        VeCSLC_b_M1_Nc3Trigger = VeCSLC_b_N_Nc3Trigger;

        /* Merge: '<S6>/Merge2' incorporates:
         *  Gain: '<S72>/Gain'
         */
        VeCSLC_b_M1_Nc4Trigger = VeCSLC_b_N_Nc4Trigger;

        /* VariantMerge generated from: '<S4>/NCxSlipSpdFailing' incorporates:
         *  Gain: '<S66>/Gain'
         *  SignalConversion generated from: '<S66>/Gain'
         */
        CSLR_ac_B.VM_Conditional_Signal_NCxSlipSpdFailing_[0] =
            rtb_VariantMergeForOutportNC_SlipSpd_hiu;
        CSLR_ac_B.VM_Conditional_Signal_NCxSlipSpdFailing_[1] =
            rtb_VariantMergeForOutportNC_SlipSpdF_hi;
        CSLR_ac_B.VM_Conditional_Signal_NCxSlipSpdFailing_[2] =
            rtb_VariantMergeForOutportNC_SlipSpdFa_h;
        CSLR_ac_B.VM_Conditional_Signal_NCxSlipSpdFailing_[3] =
            rtb_VariantMergeForOutportNC_SlipSpdFail;

        /* Merge: '<S6>/Merge21' incorporates:
         *  Gain: '<S67>/Gain'
         *  SignalConversion: '<S5>/Signal Conversion'
         */
        rtb_Merge21_0 = &CSLR_ac_B.SignalConversion[0];

        /* End of Outputs for SubSystem: '<S6>/CSLC_ClchSlip_else' */
    }

    /* End of If: '<S6>/If' */
#if Rte_SysCon_Variant_CSLC_ClcStRstTrggr

    /* Outputs for Atomic SubSystem: '<S6>/CSLC_ClcStRstTrggr' */
    /* Outputs for Atomic SubSystem: '<S12>/CSLC_ClcStRstTrggr' */
    /* Selector: '<S52>/C1_RowSelect_TSXR_ClchSlpMat' */
#if Rte_SysCon_Variant_CSLR_C1SlipActv

    /* Selector: '<S52>/C1_RowSelect_TSXR_ClchSlpMat' incorporates:
     *  Merge: '<S6>/Merge21'
     */
    for (i = 0; i < 8; i++)
    {
        CSLR_ac_B.C1_RowSelect_TSXR_ClchSlpMat[i] = rtb_Merge21_0[i * 4];
    }

#endif

    /* End of Selector: '<S52>/C1_RowSelect_TSXR_ClchSlpMat' */

    /* Selector: '<S52>/C2_RowSelect_TSXR_ClchSlpMat' */
#if Rte_SysCon_Variant_CSLR_C2SlipActv

    /* Selector: '<S52>/C2_RowSelect_TSXR_ClchSlpMat' incorporates:
     *  Merge: '<S6>/Merge21'
     */
    for (i = 0; i < 8; i++)
    {
        CSLR_ac_B.C2_RowSelect_TSXR_ClchSlpMat[i] = rtb_Merge21_0[(i * 4) + 1];
    }

#endif

    /* End of Selector: '<S52>/C2_RowSelect_TSXR_ClchSlpMat' */

    /* Selector: '<S52>/C3_RowSelect_TSXR_ClchSlpMat' */
#if Rte_SysCon_Variant_CSLR_C3SlipActv

    /* Selector: '<S52>/C3_RowSelect_TSXR_ClchSlpMat' incorporates:
     *  Merge: '<S6>/Merge21'
     */
    for (i = 0; i < 8; i++)
    {
        CSLR_ac_B.C3_RowSelect_TSXR_ClchSlpMat[i] = rtb_Merge21_0[(i * 4) + 2];
    }

#endif

    /* End of Selector: '<S52>/C3_RowSelect_TSXR_ClchSlpMat' */

    /* Selector: '<S52>/C4_RowSelect_TSXR_ClchSlpMat' */
#if Rte_SysCon_Variant_CSLR_C4SlipActv

    /* Selector: '<S52>/C4_RowSelect_TSXR_ClchSlpMat' incorporates:
     *  Merge: '<S6>/Merge21'
     */
    for (i = 0; i < 8; i++)
    {
        CSLR_ac_B.C4_RowSelect_TSXR_ClchSlpMat[i] = rtb_Merge21_0[(i * 4) + 3];
    }

#endif

    /* End of Selector: '<S52>/C4_RowSelect_TSXR_ClchSlpMat' */
    for (i = 0; i < 8; i++)
    {
        /* UnitDelay: '<S52>/Unit Delay1' incorporates:
         *  RelationalOperator: '<S52>/Comparison1'
         */
#if Rte_SysCon_Variant_CSLR_C1SlipActv

        /* RelationalOperator: '<S52>/Comparison1' incorporates:
         *  Selector: '<S52>/C1_RowSelect_TSXR_ClchSlpMat'
         */
        rtb_Comparison1_e[i] = (CSLR_ac_B.C1_RowSelect_TSXR_ClchSlpMat[i] !=
                                CSLR_ac_DW.UnitDelay1_DSTATE_j[i]);

#endif

        /* End of UnitDelay: '<S52>/Unit Delay1' */

        /* UnitDelay: '<S52>/Unit Delay2' incorporates:
         *  RelationalOperator: '<S52>/Comparison2'
         */
#if Rte_SysCon_Variant_CSLR_C2SlipActv

        /* RelationalOperator: '<S52>/Comparison2' incorporates:
         *  Selector: '<S52>/C2_RowSelect_TSXR_ClchSlpMat'
         */
        rtb_Comparison2_b[i] = (CSLR_ac_B.C2_RowSelect_TSXR_ClchSlpMat[i] !=
                                CSLR_ac_DW.UnitDelay2_DSTATE[i]);

#endif

        /* End of UnitDelay: '<S52>/Unit Delay2' */

        /* UnitDelay: '<S52>/Unit Delay3' incorporates:
         *  RelationalOperator: '<S52>/Comparison3'
         */
#if Rte_SysCon_Variant_CSLR_C3SlipActv

        /* RelationalOperator: '<S52>/Comparison3' incorporates:
         *  Selector: '<S52>/C3_RowSelect_TSXR_ClchSlpMat'
         */
        rtb_Comparison3_c[i] = (CSLR_ac_B.C3_RowSelect_TSXR_ClchSlpMat[i] !=
                                CSLR_ac_DW.UnitDelay3_DSTATE[i]);

#endif

        /* End of UnitDelay: '<S52>/Unit Delay3' */

        /* UnitDelay: '<S52>/Unit Delay6' incorporates:
         *  RelationalOperator: '<S52>/Comparison5'
         */
#if Rte_SysCon_Variant_CSLR_C4SlipActv

        /* RelationalOperator: '<S52>/Comparison5' incorporates:
         *  Selector: '<S52>/C4_RowSelect_TSXR_ClchSlpMat'
         */
        rtb_Comparison5[i] = (CSLR_ac_B.C4_RowSelect_TSXR_ClchSlpMat[i] !=
                              CSLR_ac_DW.UnitDelay6_DSTATE[i]);

#endif

        /* End of UnitDelay: '<S52>/Unit Delay6' */
    }

    /* SignalConversion generated from: '<S52>/Variant Source1' */
#if !Rte_SysCon_Variant_CSLR_C2SlipActv

    /* VariantMerge generated from: '<S52>/Variant Source1' incorporates:
     *  Constant: '<S52>/Constant1'
     */
    CSLR_ac_B.VariantMerge_For_Variant_Source_Varian_g = false;

#endif

    /* End of SignalConversion generated from: '<S52>/Variant Source1' */

    /* SignalConversion generated from: '<S52>/Variant Source2' */
#if !Rte_SysCon_Variant_CSLR_C3SlipActv

    /* VariantMerge generated from: '<S52>/Variant Source2' incorporates:
     *  Constant: '<S52>/Constant2'
     */
    CSLR_ac_B.VariantMerge_For_Variant_Source_Varian_i = false;

#endif

    /* End of SignalConversion generated from: '<S52>/Variant Source2' */

    /* SignalConversion generated from: '<S52>/Variant Source3' */
#if !Rte_SysCon_Variant_CSLR_C4SlipActv

    /* VariantMerge generated from: '<S52>/Variant Source3' incorporates:
     *  Constant: '<S52>/Constant3'
     */
    CSLR_ac_B.VariantMerge_For_Variant_Source_Varian_p = false;

#endif

    /* End of SignalConversion generated from: '<S52>/Variant Source3' */

    /* SignalConversion generated from: '<S52>/Variant Source' incorporates:
     *  Logic: '<S52>/vector2scalar'
     */
#if !Rte_SysCon_Variant_CSLR_C1SlipActv

    /* VariantMerge generated from: '<S52>/Variant Source' incorporates:
     *  Constant: '<S52>/Constant'
     */
    CSLR_ac_B.VariantMerge_For_Variant_Source_Variant_ = false;

#else

    /* Logic: '<S52>/vector2scalar' incorporates:
     *  RelationalOperator: '<S52>/Comparison1'
     */
    CSLR_ac_B.VariantMerge_For_Variant_Source_Variant_ = rtb_Comparison1_e[0];
    for (i = 0; i < 7; i++)
    {
        CSLR_ac_B.VariantMerge_For_Variant_Source_Variant_ =
            ((CSLR_ac_B.VariantMerge_For_Variant_Source_Variant_) ||
             (rtb_Comparison1_e[i + 1]));
    }

#endif

    /* End of SignalConversion generated from: '<S52>/Variant Source' */

    /* Logic: '<S52>/vector2scalar1' incorporates:
     *  RelationalOperator: '<S52>/Comparison2'
     */
#if Rte_SysCon_Variant_CSLR_C2SlipActv

    CSLR_ac_B.VariantMerge_For_Variant_Source_Varian_g = rtb_Comparison2_b[0];
    for (i = 0; i < 7; i++)
    {
        CSLR_ac_B.VariantMerge_For_Variant_Source_Varian_g =
            ((CSLR_ac_B.VariantMerge_For_Variant_Source_Varian_g) ||
             (rtb_Comparison2_b[i + 1]));
    }

#endif

    /* End of Logic: '<S52>/vector2scalar1' */

    /* Logic: '<S52>/vector2scalar2' incorporates:
     *  RelationalOperator: '<S52>/Comparison3'
     */
#if Rte_SysCon_Variant_CSLR_C3SlipActv

    CSLR_ac_B.VariantMerge_For_Variant_Source_Varian_i = rtb_Comparison3_c[0];
    for (i = 0; i < 7; i++)
    {
        CSLR_ac_B.VariantMerge_For_Variant_Source_Varian_i =
            ((CSLR_ac_B.VariantMerge_For_Variant_Source_Varian_i) ||
             (rtb_Comparison3_c[i + 1]));
    }

#endif

    /* End of Logic: '<S52>/vector2scalar2' */

    /* Logic: '<S52>/vector2scalar4' incorporates:
     *  RelationalOperator: '<S52>/Comparison5'
     */
#if Rte_SysCon_Variant_CSLR_C4SlipActv

    CSLR_ac_B.VariantMerge_For_Variant_Source_Varian_p = rtb_Comparison5[0];
    for (i = 0; i < 7; i++)
    {
        CSLR_ac_B.VariantMerge_For_Variant_Source_Varian_p =
            ((CSLR_ac_B.VariantMerge_For_Variant_Source_Varian_p) ||
             (rtb_Comparison5[i + 1]));
    }

#endif

    /* End of Logic: '<S52>/vector2scalar4' */
    for (i = 0; i < 8; i++)
    {
        /* Update for UnitDelay: '<S52>/Unit Delay1' incorporates:
         *  Selector: '<S52>/C1_RowSelect_TSXR_ClchSlpMat'
         */
#if Rte_SysCon_Variant_CSLR_C1SlipActv

        CSLR_ac_DW.UnitDelay1_DSTATE_j[i] =
            CSLR_ac_B.C1_RowSelect_TSXR_ClchSlpMat[i];

#endif

        /* End of Update for UnitDelay: '<S52>/Unit Delay1' */

        /* Update for UnitDelay: '<S52>/Unit Delay2' incorporates:
         *  Selector: '<S52>/C2_RowSelect_TSXR_ClchSlpMat'
         */
#if Rte_SysCon_Variant_CSLR_C2SlipActv

        CSLR_ac_DW.UnitDelay2_DSTATE[i] =
            CSLR_ac_B.C2_RowSelect_TSXR_ClchSlpMat[i];

#endif

        /* End of Update for UnitDelay: '<S52>/Unit Delay2' */

        /* Update for UnitDelay: '<S52>/Unit Delay3' incorporates:
         *  Selector: '<S52>/C3_RowSelect_TSXR_ClchSlpMat'
         */
#if Rte_SysCon_Variant_CSLR_C3SlipActv

        CSLR_ac_DW.UnitDelay3_DSTATE[i] =
            CSLR_ac_B.C3_RowSelect_TSXR_ClchSlpMat[i];

#endif

        /* End of Update for UnitDelay: '<S52>/Unit Delay3' */

        /* Update for UnitDelay: '<S52>/Unit Delay6' incorporates:
         *  Selector: '<S52>/C4_RowSelect_TSXR_ClchSlpMat'
         */
#if Rte_SysCon_Variant_CSLR_C4SlipActv

        CSLR_ac_DW.UnitDelay6_DSTATE[i] =
            CSLR_ac_B.C4_RowSelect_TSXR_ClchSlpMat[i];

#endif

        /* End of Update for UnitDelay: '<S52>/Unit Delay6' */
    }

    /* End of Outputs for SubSystem: '<S12>/CSLC_ClcStRstTrggr' */
    /* End of Outputs for SubSystem: '<S6>/CSLC_ClcStRstTrggr' */
#endif

    /* Gain: '<S32>/Gain' */
    CSLR_ac_B.Gain = CSLR_ac_B.Merge;

    /* Gain: '<S33>/Gain' */
    CSLR_ac_B.Gain_d = CSLR_ac_B.Merge8;

    /* Gain: '<S36>/Gain' */
    CSLR_ac_B.Gain_i = CSLR_ac_B.VariantMergeForOutportNCRaw_g;

    /* Gain: '<S38>/Gain' */
    CSLR_ac_B.Gain_m = CSLR_ac_B.VariantMergeForOutportNCRaw;

    /* Gain: '<S40>/Gain' */
    CSLR_ac_B.Gain_a = VeCSLC_dn_Nc1dotFromCpt;

    /* Gain: '<S41>/Gain' */
    CSLR_ac_B.Gain_ak = VeCSLC_dn_Nc2dotFromCpt;

    /* Gain: '<S42>/Gain' */
    CSLR_ac_B.Gain_mw = VeCSLC_dn_Nc3dotFromCpt;

    /* Gain: '<S43>/Gain' */
    CSLR_ac_B.Gain_mt = VeCSLC_dn_Nc4dotFromCpt;

    /* Gain: '<S44>/Gain' */
    CSLR_ac_B.Gain_o = CSLR_ac_B.Merge4;

    /* Gain: '<S45>/Gain' */
    CSLR_ac_B.Gain_p = CSLR_ac_B.Merge9;

    /* Gain: '<S46>/Gain' */
    CSLR_ac_B.Gain_f = CSLR_ac_B.Merge5;

    /* Gain: '<S48>/Gain' */
    CSLR_ac_B.Gain_j = CSLR_ac_B.Merge6;

    /* Gain: '<S50>/Gain' */
    CSLR_ac_B.Gain_n = VeCSLC_b_M1_Nc1Trigger;

    /* Gain: '<S51>/Gain' */
    CSLR_ac_B.Gain_b = VeCSLC_b_M1_Nc2Trigger;
}

/* Model step function for TID1 */
FUNC(void, CSLR_CODE) CSLR_MedTED(void) /* Explicit Task: MedTED */
{
    sint32 i;
    float32 rtb_Multiplication3;
    TeESSR_e_EngStartStopSt rtb_TmpSignalConversionAtVeESSR_e_EngSta;
    TeTISR_e_InpSpdDfltSource rtb_TmpSignalConversionAtVeTISR_e_InpSpd;
    TeVSDR_e_PrimNoSource rtb_TmpSignalConversionAtVeVSDR_e_PrimNo;
    boolean Switch_h[4];
    boolean rtb_Comparison5;
    boolean rtb_Switch3;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/CSLR_MedTED'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CSLR_InputProcess'
     */
    /* SignalConversion: '<S5>/Signal Conversion2' incorporates:
     *  Inport: '<Root>/VaTSXR_r_M2_ClchSlpMat_NcnDep'
     */
    (void)Rte_Read_VaTSXR_r_M2_ClchSlpMat_NcnDep_Value
        (CSLR_ac_B.LaCSLR_r_M2_ClchSlpMat_NcnDep);

    /* SignalConversion: '<S5>/Signal Conversion1' incorporates:
     *  Inport: '<Root>/VaTSXR_r_M1_ClchSlpMat_NcnDep'
     */
    (void)Rte_Read_VaTSXR_r_M1_ClchSlpMat_NcnDep_Value
        (CSLR_ac_B.LaCSLR_r_M1_ClchSlpMat_NcnDep);

    /* SignalConversion: '<S5>/Signal Conversion' incorporates:
     *  Inport: '<Root>/VaTSXR_r_N_ClchSlpMat_NcnDep'
     */
    (void)Rte_Read_VaTSXR_r_N_ClchSlpMat_NcnDep_Value(CSLR_ac_B.SignalConversion);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeTISR_n_InputSpeedRaw' */
    (void)Rte_Read_VeTISR_n_InputSpeedRaw_Value(&rtb_Multiplication3);

    /* Inport: '<Root>/VeTISR_n_InputSpeed' */
    (void)Rte_Read_VeTISR_n_InputSpeed_Value(&CSLR_ac_B.Switch2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/CSLR_MedTED'
     */
    /* SignalConversion generated from: '<S1>/VeESPR_b_BuffrCrnkDiagFailing' incorporates:
     *  Inport: '<Root>/VeESPR_b_BuffrCrnkDiagFailing'
     */
    (void)Rte_Read_VeESPR_b_BuffrCrnkDiagFailing_Value
        (&CSLR_ac_B.TmpSignalConversionAtVeESPR_b_BuffrCrnkD);

    /* SignalConversion generated from: '<S1>/VeTISR_e_InpSpdSource' incorporates:
     *  Inport: '<Root>/VeTISR_e_InpSpdSource'
     */
    (void)Rte_Read_VeTISR_e_InpSpdSource_Value
        (&rtb_TmpSignalConversionAtVeTISR_e_InpSpd);

    /* SignalConversion generated from: '<S1>/VeESSR_e_EngStartStopSt' incorporates:
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     */
    (void)Rte_Read_VeESSR_e_EngStartStopSt_Value
        (&rtb_TmpSignalConversionAtVeESSR_e_EngSta);

    /* SignalConversion generated from: '<S1>/VeMSPR_b_MtrA_SpdFA' incorporates:
     *  Inport: '<Root>/VeMSPR_b_MtrA_SpdFA'
     */
    (void)Rte_Read_VeMSPR_b_MtrA_SpdFA_Value
        (&CSLR_ac_B.TmpSignalConversionAtVeMSPR_b_MtrA_SpdFA);

    /* SignalConversion generated from: '<S1>/VeMSPR_b_MtrB_SpdFA' incorporates:
     *  Inport: '<Root>/VeMSPR_b_MtrB_SpdFA'
     */
    (void)Rte_Read_VeMSPR_b_MtrB_SpdFA_Value
        (&CSLR_ac_B.TmpSignalConversionAtVeMSPR_b_MtrB_SpdFA);

    /* SignalConversion generated from: '<S1>/VeMSPR_b_MtrC_SpdFA' incorporates:
     *  Inport: '<Root>/VeMSPR_b_MtrC_SpdFA'
     */
    (void)Rte_Read_VeMSPR_b_MtrC_SpdFA_Value
        (&CSLR_ac_B.TmpSignalConversionAtVeMSPR_b_MtrC_SpdFA);

    /* SignalConversion generated from: '<S1>/VeTISR_b_InputSpeedFA' incorporates:
     *  Inport: '<Root>/VeTISR_b_InputSpeedFA'
     */
    (void)Rte_Read_VeTISR_b_InputSpeedFA_Value
        (&CSLR_ac_B.TmpSignalConversionAtVeTISR_b_InputSpeed);

    /* SignalConversion generated from: '<S1>/VeTISR_dn_InputAcceltn' incorporates:
     *  Inport: '<Root>/VeTISR_dn_InputAcceltn'
     */
    (void)Rte_Read_VeTISR_dn_InputAcceltn_Value
        (&CSLR_ac_B.TmpSignalConversionAtVeTISR_dn_InputAcce);

    /* SignalConversion generated from: '<S1>/VeVSDR_b_PrimNoFA' incorporates:
     *  Inport: '<Root>/VeVSDR_b_PrimNoFA'
     */
    (void)Rte_Read_VeVSDR_b_PrimNoFA_Value
        (&CSLR_ac_B.TmpSignalConversionAtVeVSDR_b_PrimNoFAOu);

    /* SignalConversion generated from: '<S1>/VeVSDR_dn_PrimNodot' incorporates:
     *  Inport: '<Root>/VeVSDR_dn_PrimNodot'
     */
    (void)Rte_Read_VeVSDR_dn_PrimNodot_Value
        (&CSLR_ac_B.TmpSignalConversionAtVeVSDR_dn_PrimNodot);

    /* SignalConversion generated from: '<S1>/VeVSDR_n_NTurb' incorporates:
     *  Inport: '<Root>/VeVSDR_n_NTurb'
     */
    (void)Rte_Read_VeVSDR_n_NTurb_Value
        (&CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo);

    /* SignalConversion generated from: '<S1>/VeVSDR_n_PrimNoSgndFltrd' incorporates:
     *  Inport: '<Root>/VeVSDR_n_PrimNoSgndFltrd'
     */
    (void)Rte_Read_VeVSDR_n_PrimNoSgndFltrd_Value
        (&CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_PrimNoSgnd);

    /* SignalConversion generated from: '<S1>/VeVSDR_e_PrimNoSrc' incorporates:
     *  Inport: '<Root>/VeVSDR_e_PrimNoSrc'
     */
    (void)Rte_Read_VeVSDR_e_PrimNoSrc_Value
        (&rtb_TmpSignalConversionAtVeVSDR_e_PrimNo);

    /* SignalConversion generated from: '<S1>/VeVSDR_n_WEDLeftWheel' incorporates:
     *  Inport: '<Root>/VeVSDR_n_WEDLeftWheel'
     */
    (void)Rte_Read_VeVSDR_n_WEDLeftWheel_Value
        (&CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_WEDLeftWhe);

    /* SignalConversion generated from: '<S1>/VeVSDR_n_WEDRightWheel' incorporates:
     *  Inport: '<Root>/VeVSDR_n_WEDRightWheel'
     */
    (void)Rte_Read_VeVSDR_n_WEDRightWheel_Value
        (&CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_WEDRightWh);

    /* SignalConversion generated from: '<S1>/VeVSDR_b_WEDLeftWheelFA' incorporates:
     *  Inport: '<Root>/VeVSDR_b_WEDLeftWheelFA'
     */
    (void)Rte_Read_VeVSDR_b_WEDLeftWheelFA_Value
        (&CSLR_ac_B.TmpSignalConversionAtVeVSDR_b_WEDLeftWhe);

    /* SignalConversion generated from: '<S1>/VeVSDR_b_WEDRightWheelFA' incorporates:
     *  Inport: '<Root>/VeVSDR_b_WEDRightWheelFA'
     */
    (void)Rte_Read_VeVSDR_b_WEDRightWheelFA_Value
        (&CSLR_ac_B.TmpSignalConversionAtVeVSDR_b_WEDRightWh);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CSLC_ClchSlipCalc'
     */
    /* Switch: '<S3>/Switch2' incorporates:
     *  Constant: '<S11>/Calib'
     *  Inport: '<Root>/VeTISR_n_InputSpeed'
     */
    if (KeCSLR_b_UseRawEngSpd)
    {
        CSLR_ac_B.Switch2 = rtb_Multiplication3;
    }

    /* End of Switch: '<S3>/Switch2' */

    /* Product: '<S610>/Multiplication3' incorporates:
     *  Abs: '<S8>/Abs'
     */
    rtb_Multiplication3 = fabsf(CSLR_ac_B.Switch2);

    /* RelationalOperator: '<S3>/Comparison5' incorporates:
     *  UnitDelay: '<S3>/Unit Delay'
     */
    rtb_Comparison5 = (CSLR_ac_B.Switch2 != CSLR_ac_DW.UnitDelay_DSTATE);

    /* Logic: '<S8>/Logical1' incorporates:
     *  Constant: '<S602>/Constant'
     *  Constant: '<S8>/Constant Value'
     *  RelationalOperator: '<S8>/Comparison3'
     *  RelationalOperator: '<S8>/Comparison4'
     */
    VeCSLR_b_ChngInSpd_EngRun_C2 = (((((uint32)
        rtb_TmpSignalConversionAtVeESSR_e_EngSta) == CeESSR_e_EngRunning) &&
        (rtb_Multiplication3 > 0.0F)) && rtb_Comparison5);

    /* Switch: '<S8>/Switch3' incorporates:
     *  Constant: '<S603>/Constant'
     *  RelationalOperator: '<S8>/Comparison7'
     */
    rtb_Switch3 = (((uint32)rtb_TmpSignalConversionAtVeESSR_e_EngSta) ==
                   CeESSR_e_EngOff);

    /* Logic: '<S8>/Logical6' incorporates:
     *  Constant: '<S8>/Constant Value2'
     *  RelationalOperator: '<S8>/Comparison6'
     */
    VeCSLR_b_ChngInSpd_EngOff_C2 = ((rtb_Comparison5 && (rtb_Multiplication3 >
        0.0F)) && rtb_Switch3);

    /* Logic: '<S8>/Logical7' incorporates:
     *  Constant: '<S8>/Constant Value4'
     *  RelationalOperator: '<S8>/Comparison5'
     */
    VeCSLR_b_IdleSpeed_EngOff_C2 = (rtb_Switch3 && (rtb_Multiplication3 == 0.0F));

    /* Logic: '<S8>/Logical2' */
    VeCSLR_b_SpdChngEngSt_C2 = (((VeCSLR_b_ChngInSpd_EngRun_C2) ||
        (VeCSLR_b_ChngInSpd_EngOff_C2)) || (VeCSLR_b_IdleSpeed_EngOff_C2));

    /* Switch: '<S8>/Switch3' incorporates:
     *  Constant: '<S600>/Constant'
     *  Constant: '<S605>/Calib'
     *  Constant: '<S8>/TRUE Constant1'
     *  Logic: '<S8>/Logical3'
     *  RelationalOperator: '<S8>/Comparison1'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeTISR_e_InpSpd) ==
            CeTISR_e_EngSpeedFromCAN)
    {
        rtb_Switch3 = ((VeCSLR_b_SpdChngEngSt_C2) &&
                       (KeCSLR_b_EnblClutchSlip_CANSpeed));
    }
    else
    {
        rtb_Switch3 = true;
    }

    /* End of Switch: '<S8>/Switch3' */

    /* Logic: '<S8>/Logical4' incorporates:
     *  Constant: '<S601>/Constant'
     *  Logic: '<S8>/Logical10'
     *  Logic: '<S8>/Logical9'
     *  RelationalOperator: '<S8>/Comparison2'
     */
    VeCSLR_b_NiVld = (((!CSLR_ac_B.TmpSignalConversionAtVeESPR_b_BuffrCrnkD) ||
                       (((uint32)rtb_TmpSignalConversionAtVeTISR_e_InpSpd) !=
                        CeTISR_e_EngSpeedFromMCP)) && rtb_Switch3);

    /* If: '<S9>/If' incorporates:
     *  Constant: '<S606>/Constant'
     *  RelationalOperator: '<S9>/Comparison4'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeVSDR_e_PrimNo) ==
            CeVSDR_e_PrimNoSrcNotAvail)
    {
        /* Outputs for IfAction SubSystem: '<S9>/NoValidSource' incorporates:
         *  ActionPort: '<S608>/Action Port'
         */
        /* SignalConversion generated from: '<S608>/UpdRate' incorporates:
         *  Constant: '<S608>/Constant Value'
         */
        CSLR_ac_B.Switch_b = 10.0F;

        /* SignalConversion generated from: '<S608>/NoVld' incorporates:
         *  Constant: '<S608>/FALSE Constant'
         */
        CSLR_ac_B.Merge1 = false;

        /* End of Outputs for SubSystem: '<S9>/NoValidSource' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S9>/DeterUpdateRat' incorporates:
         *  ActionPort: '<S607>/Action Port'
         */
        /* Selector: '<S607>/Selector' incorporates:
         *  Constant: '<S609>/Calib'
         */
        CSLR_ac_B.Switch_b = KaCSLR_t_NoUpdRate
            [(rtb_TmpSignalConversionAtVeVSDR_e_PrimNo)];

        /* SignalConversion generated from: '<S607>/NoVld' incorporates:
         *  Constant: '<S607>/TRUE Constant1'
         */
        CSLR_ac_B.Merge1 = true;

        /* End of Outputs for SubSystem: '<S9>/DeterUpdateRat' */
    }

    /* End of If: '<S9>/If' */

    /* Selector: '<S8>/Selector' incorporates:
     *  Constant: '<S604>/Calib'
     */
    CSLR_ac_B.Switch1_je = KaCSLR_t_NiUpdRate
        [(rtb_TmpSignalConversionAtVeTISR_e_InpSpd)];

    /* Product: '<S610>/Multiplication3' incorporates:
     *  Constant: '<S610>/Constant Value1'
     *  Constant: '<S611>/Calib'
     */
    rtb_Multiplication3 = HeCSLR_t_MedTED_dT / 2.0F;

    /* Product: '<S610>/Multiplication2' incorporates:
     *  Constant: '<S613>/Calib'
     *  Product: '<S610>/Multiplication4'
     *  Sum: '<S610>/Summation'
     *  Sum: '<S610>/Summation1'
     *  Sum: '<S610>/Summation2'
     *  UnitDelay: '<S610>/Unit Delay'
     *  UnitDelay: '<S610>/Unit Delay1'
     */
    CSLR_ac_DW.UnitDelay1_DSTATE =
        ((CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo -
          ((rtb_Multiplication3 - KeCSLR_t_NtDotCutOff) *
           CSLR_ac_DW.UnitDelay1_DSTATE)) - CSLR_ac_DW.UnitDelay_DSTATE_h) /
        (rtb_Multiplication3 + KeCSLR_t_NtDotCutOff);

    /* Switch: '<S612>/Switch1' incorporates:
     *  UnitDelay: '<S610>/Unit Delay1'
     */
    CSLR_ac_B.Switch1 = CSLR_ac_DW.UnitDelay1_DSTATE;

    /* Outputs for Atomic SubSystem: '<S3>/CSLC_ClchSlipCalc' */
    CSLR_ac_CSLC_ClchSlipCalc();

    /* End of Outputs for SubSystem: '<S3>/CSLC_ClchSlipCalc' */

    /* Update for UnitDelay: '<S3>/Unit Delay' */
    CSLR_ac_DW.UnitDelay_DSTATE = CSLR_ac_B.Switch2;

    /* Update for UnitDelay: '<S610>/Unit Delay' */
    CSLR_ac_DW.UnitDelay_DSTATE_h =
        CSLR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CSLO_25ms_Otpts'
     */
    for (i = 0; i < 4; i++)
    {
        /* SignalConversion generated from: '<S4>/NCxSlipSpdFailing' */
#if !Rte_SysCon_Variant_CSLR_EnblNCxFlng_BffrCrnk

        CSLR_ac_B.VM_Conditional_Signal_NCxSlipSpdFailing_[i] = false;

#endif

        /* End of SignalConversion generated from: '<S4>/NCxSlipSpdFailing' */

        /* Switch: '<S4>/Switch' incorporates:
         *  Constant: '<S616>/Calib'
         */
        if (HeCSLR_b_EnblNCxSlipSpdFailing)
        {
            /* Switch: '<S4>/Switch' */
            Switch_h[i] = CSLR_ac_B.VM_Conditional_Signal_NCxSlipSpdFailing_[i];
        }
        else
        {
            /* Switch: '<S4>/Switch' */
            Switch_h[i] = false;
        }

        /* End of Switch: '<S4>/Switch' */
    }

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VaCSLR_b_NCx_SlipSpdFailing' incorporates:
     *  SignalConversion generated from: '<S1>/CSLO_25ms_Otpts__NCx_SlipSpdFailing'
     */
    (void)Rte_Write_VaCSLR_b_NCx_SlipSpdFailing_Value(Switch_h);

    /* SignalConversion generated from: '<S1>/ClchStRst' */
#if Rte_SysCon_Variant_CSLC_ClcStRstTrggr

    Switch_h[0] = CSLR_ac_B.VariantMerge_For_Variant_Source_Variant_;
    Switch_h[1] = CSLR_ac_B.VariantMerge_For_Variant_Source_Varian_g;
    Switch_h[2] = CSLR_ac_B.VariantMerge_For_Variant_Source_Varian_i;
    Switch_h[3] = CSLR_ac_B.VariantMerge_For_Variant_Source_Varian_p;

    /* Outport: '<Root>/VaCSLR_b_ClchStRst' */
    (void)Rte_Write_VaCSLR_b_ClchStRst_Value(Switch_h);

#endif

    /* End of SignalConversion generated from: '<S1>/ClchStRst' */

    /* Outport: '<Root>/VeCSLR_b_NC1_FA' incorporates:
     *  SignalConversion generated from: '<S1>/NC1_FA'
     */
    (void)Rte_Write_VeCSLR_b_NC1_FA_Value(CSLR_ac_B.Gain_d);

    /* Outport: '<Root>/VeCSLR_dn_NC1dot' incorporates:
     *  SignalConversion generated from: '<S1>/NC1dot'
     */
    (void)Rte_Write_VeCSLR_dn_NC1dot_Value(CSLR_ac_B.Gain_a);

    /* Outport: '<Root>/VeCSLR_b_NC2_FA' incorporates:
     *  SignalConversion generated from: '<S1>/NC2_FA'
     */
    (void)Rte_Write_VeCSLR_b_NC2_FA_Value(CSLR_ac_B.Gain_p);

    /* Outport: '<Root>/VeCSLR_dn_NC2dot' incorporates:
     *  SignalConversion generated from: '<S1>/NC2dot'
     */
    (void)Rte_Write_VeCSLR_dn_NC2dot_Value(CSLR_ac_B.Gain_ak);

    /* Outport: '<Root>/VeCSLR_dn_NC3dot' incorporates:
     *  SignalConversion generated from: '<S1>/NC3dot'
     */
    (void)Rte_Write_VeCSLR_dn_NC3dot_Value(CSLR_ac_B.Gain_mw);

    /* Outport: '<Root>/VeCSLR_dn_NC4dot' incorporates:
     *  SignalConversion generated from: '<S1>/NC4dot'
     */
    (void)Rte_Write_VeCSLR_dn_NC4dot_Value(CSLR_ac_B.Gain_mt);

    /* Outport: '<Root>/VeCSLR_n_Clch1_SlipSpeed' incorporates:
     *  SignalConversion generated from: '<S1>/Nc1'
     */
    (void)Rte_Write_VeCSLR_n_Clch1_SlipSpeed_Value(CSLR_ac_B.Gain);

    /* Outport: '<Root>/VeCSLR_n_Clch1_RawSlipSpeed' incorporates:
     *  SignalConversion generated from: '<S1>/Nc1Raw'
     */
    (void)Rte_Write_VeCSLR_n_Clch1_RawSlipSpeed_Value(CSLR_ac_B.Gain_i);

    /* Outport: '<Root>/VeCSLR_b_NC1Trigger' incorporates:
     *  SignalConversion generated from: '<S1>/Nc1Trigger'
     */
    (void)Rte_Write_VeCSLR_b_NC1Trigger_Value(CSLR_ac_B.Gain_n);

    /* Outport: '<Root>/VeCSLR_n_Clch2_SlipSpeed' incorporates:
     *  SignalConversion generated from: '<S1>/Nc2'
     */
    (void)Rte_Write_VeCSLR_n_Clch2_SlipSpeed_Value(CSLR_ac_B.Gain_o);

    /* Outport: '<Root>/VeCSLR_n_Clch2_RawSlipSpeed' incorporates:
     *  SignalConversion generated from: '<S1>/Nc2Raw'
     */
    (void)Rte_Write_VeCSLR_n_Clch2_RawSlipSpeed_Value(CSLR_ac_B.Gain_m);

    /* Outport: '<Root>/VeCSLR_b_NC2Trigger' incorporates:
     *  SignalConversion generated from: '<S1>/Nc2Trigger'
     */
    (void)Rte_Write_VeCSLR_b_NC2Trigger_Value(CSLR_ac_B.Gain_b);

    /* Outport: '<Root>/VeCSLR_n_Clch3_SlipSpeed' incorporates:
     *  SignalConversion generated from: '<S1>/Nc3'
     */
    (void)Rte_Write_VeCSLR_n_Clch3_SlipSpeed_Value(CSLR_ac_B.Gain_f);

    /* Outport: '<Root>/VeCSLR_n_Clch4_SlipSpeed' incorporates:
     *  SignalConversion generated from: '<S1>/Nc4'
     */
    (void)Rte_Write_VeCSLR_n_Clch4_SlipSpeed_Value(CSLR_ac_B.Gain_j);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
}

/* Output function */
FUNC(void, CSLR_CODE) CSLR_PwrOn(void)
{
    sint32 i;

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/CSLR_PwrOn'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/CSLO_Init'
     */
    /* SignalConversion generated from: '<S617>/C1_SlipSpeed' */
    CSLR_ac_B.OutportBufferForC1_SlipSpeed = 0.0F;

    /* SignalConversion generated from: '<S617>/NC1_dot' */
    CSLR_ac_B.OutportBufferForNC1_dot = 0.0F;

    /* SignalConversion generated from: '<S617>/C2_SlipSpeed' */
    CSLR_ac_B.OutportBufferForC2_SlipSpeed = 0.0F;

    /* SignalConversion generated from: '<S617>/NC2_dot' */
    CSLR_ac_B.OutportBufferForNC2_dot = 0.0F;

    /* SignalConversion generated from: '<S617>/C3_SlipSpeed' */
    CSLR_ac_B.OutportBufferForC3_SlipSpeed = 0.0F;

    /* SignalConversion generated from: '<S617>/NC3_dot' */
    CSLR_ac_B.OutportBufferForNC3_dot = 0.0F;

    /* SignalConversion generated from: '<S617>/C4_SlipSpeed' */
    CSLR_ac_B.OutportBufferForC4_SlipSpeed = 0.0F;

    /* SignalConversion generated from: '<S617>/NC4_dot' */
    CSLR_ac_B.OutportBufferForNC4_dot = 0.0F;

    /* SignalConversion generated from: '<S617>/NC1_FA' */
    CSLR_ac_B.OutportBufferForNC1_FA = false;

    /* SignalConversion generated from: '<S617>/NC2_FA' */
    CSLR_ac_B.OutportBufferForNC2_FA = false;

    /* SignalConversion generated from: '<S617>/NC1_Raw' */
    CSLR_ac_B.OutportBufferForNC1_Raw = 0.0F;

    /* SignalConversion generated from: '<S617>/NC2_Raw' */
    CSLR_ac_B.OutportBufferForNC2_Raw = 0.0F;

    /* SignalConversion generated from: '<S617>/Nc1_Trigger' */
    CSLR_ac_B.OutportBufferForNc1_Trigger = false;

    /* SignalConversion generated from: '<S617>/Nc2_Trigger' */
    CSLR_ac_B.OutportBufferForNc2_Trigger = false;
    for (i = 0; i < 4; i++)
    {
        /* SignalConversion generated from: '<S617>/NCx_SlipSpdFailing' */
        CSLR_ac_B.OutportBufferForNCx_SlipSpdFailing[i] = false;

        /* SignalConversion generated from: '<S617>/ClchStRst' */
        CSLR_ac_B.OutportBufferForClchStRst[i] = false;
    }

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeCSLR_n_Clch1_SlipSpeed' incorporates:
     *  SignalConversion generated from: '<S2>/C1_SlipSpeed'
     */
    (void)Rte_Write_VeCSLR_n_Clch1_SlipSpeed_Value
        (CSLR_ac_B.OutportBufferForC1_SlipSpeed);

    /* Outport: '<Root>/VeCSLR_n_Clch2_SlipSpeed' incorporates:
     *  SignalConversion generated from: '<S2>/C2_SlipSpeed'
     */
    (void)Rte_Write_VeCSLR_n_Clch2_SlipSpeed_Value
        (CSLR_ac_B.OutportBufferForC2_SlipSpeed);

    /* Outport: '<Root>/VeCSLR_n_Clch3_SlipSpeed' incorporates:
     *  SignalConversion generated from: '<S2>/C3_SlipSpeed'
     */
    (void)Rte_Write_VeCSLR_n_Clch3_SlipSpeed_Value
        (CSLR_ac_B.OutportBufferForC3_SlipSpeed);

    /* Outport: '<Root>/VeCSLR_n_Clch4_SlipSpeed' incorporates:
     *  SignalConversion generated from: '<S2>/C4_SlipSpeed'
     */
    (void)Rte_Write_VeCSLR_n_Clch4_SlipSpeed_Value
        (CSLR_ac_B.OutportBufferForC4_SlipSpeed);

    /* Outport: '<Root>/VaCSLR_b_ClchStRst' incorporates:
     *  SignalConversion generated from: '<S2>/ClchStRst'
     */
    (void)Rte_Write_VaCSLR_b_ClchStRst_Value(CSLR_ac_B.OutportBufferForClchStRst);

    /* Outport: '<Root>/VeCSLR_b_NC1_FA' incorporates:
     *  SignalConversion generated from: '<S2>/NC1_FA'
     */
    (void)Rte_Write_VeCSLR_b_NC1_FA_Value(CSLR_ac_B.OutportBufferForNC1_FA);

    /* Outport: '<Root>/VeCSLR_n_Clch1_RawSlipSpeed' incorporates:
     *  SignalConversion generated from: '<S2>/NC1_Raw'
     */
    (void)Rte_Write_VeCSLR_n_Clch1_RawSlipSpeed_Value
        (CSLR_ac_B.OutportBufferForNC1_Raw);

    /* Outport: '<Root>/VeCSLR_dn_NC1dot' incorporates:
     *  SignalConversion generated from: '<S2>/NC1_dot'
     */
    (void)Rte_Write_VeCSLR_dn_NC1dot_Value(CSLR_ac_B.OutportBufferForNC1_dot);

    /* Outport: '<Root>/VeCSLR_b_NC2_FA' incorporates:
     *  SignalConversion generated from: '<S2>/NC2_FA'
     */
    (void)Rte_Write_VeCSLR_b_NC2_FA_Value(CSLR_ac_B.OutportBufferForNC2_FA);

    /* Outport: '<Root>/VeCSLR_n_Clch2_RawSlipSpeed' incorporates:
     *  SignalConversion generated from: '<S2>/NC2_Raw'
     */
    (void)Rte_Write_VeCSLR_n_Clch2_RawSlipSpeed_Value
        (CSLR_ac_B.OutportBufferForNC2_Raw);

    /* Outport: '<Root>/VeCSLR_dn_NC2dot' incorporates:
     *  SignalConversion generated from: '<S2>/NC2_dot'
     */
    (void)Rte_Write_VeCSLR_dn_NC2dot_Value(CSLR_ac_B.OutportBufferForNC2_dot);

    /* Outport: '<Root>/VeCSLR_dn_NC3dot' incorporates:
     *  SignalConversion generated from: '<S2>/NC3_dot'
     */
    (void)Rte_Write_VeCSLR_dn_NC3dot_Value(CSLR_ac_B.OutportBufferForNC3_dot);

    /* Outport: '<Root>/VeCSLR_dn_NC4dot' incorporates:
     *  SignalConversion generated from: '<S2>/NC4_dot'
     */
    (void)Rte_Write_VeCSLR_dn_NC4dot_Value(CSLR_ac_B.OutportBufferForNC4_dot);

    /* Outport: '<Root>/VaCSLR_b_NCx_SlipSpdFailing' incorporates:
     *  SignalConversion generated from: '<S2>/NCx_SlipSpdFailing'
     */
    (void)Rte_Write_VaCSLR_b_NCx_SlipSpdFailing_Value
        (CSLR_ac_B.OutportBufferForNCx_SlipSpdFailing);

    /* Outport: '<Root>/VeCSLR_b_NC1Trigger' incorporates:
     *  SignalConversion generated from: '<S2>/Nc1_Trigger'
     */
    (void)Rte_Write_VeCSLR_b_NC1Trigger_Value
        (CSLR_ac_B.OutportBufferForNc1_Trigger);

    /* Outport: '<Root>/VeCSLR_b_NC2Trigger' incorporates:
     *  SignalConversion generated from: '<S2>/Nc2_Trigger'
     */
    (void)Rte_Write_VeCSLR_b_NC2Trigger_Value
        (CSLR_ac_B.OutportBufferForNc2_Trigger);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, CSLR_CODE) CSLR_ac_Init(void)
{
    {
        sint32 i;
        boolean tmp[4];

        /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
         *  SubSystem: '<Root>/CSLR_MedTED'
         */
        /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
         *  SubSystem: '<S1>/CSLC_ClchSlipCalc'
         */
        /* SystemInitialize for Atomic SubSystem: '<S3>/CSLC_ClchSlipCalc' */
        CSLR_ac_CSLC_ClchSlipCalc_Init();

        /* End of SystemInitialize for SubSystem: '<S3>/CSLC_ClchSlipCalc' */
        /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
        /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

        /* SystemInitialize for Merge: '<Root>/Merge_10' */
        for (i = 0; i < 4; i++)
        {
            tmp[i] = false;
        }

        /* SystemInitialize for Outport: '<Root>/VaCSLR_b_NCx_SlipSpdFailing' incorporates:
         *  Merge: '<Root>/Merge_10'
         */
        (void)Rte_Write_VaCSLR_b_NCx_SlipSpdFailing_Value(tmp);

        /* SystemInitialize for Merge: '<Root>/Merge_5' */
        for (i = 0; i < 4; i++)
        {
            tmp[i] = false;
        }

        /* SystemInitialize for Outport: '<Root>/VaCSLR_b_ClchStRst' incorporates:
         *  Merge: '<Root>/Merge_5'
         */
        (void)Rte_Write_VaCSLR_b_ClchStRst_Value(tmp);
    }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
