/*
 * File: PMDR_ac.c
 *
 * Code generated for Simulink model 'PMDR_ac'.
 *
 * Model version                  : 9.75
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 18:11:09 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PMDR_ac.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_PMDR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(TePMDR_e_KeyInIgn, PMDR_VAR_INIT) KaPMDR_e_KeyInIgn_Map[10]
    =
{
    CePMDR_e_KeyInIgn_DEFAULT, CePMDR_e_KeyInIgn_Not_In_Ign,
    CePMDR_e_KeyInIgn_In_Ign, CePMDR_e_KeyInIgn_SNA, CePMDR_e_KeyInIgn_DEFAULT,
    CePMDR_e_KeyInIgn_DEFAULT, CePMDR_e_KeyInIgn_DEFAULT,
    CePMDR_e_KeyInIgn_DEFAULT, CePMDR_e_KeyInIgn_DEFAULT,
    CePMDR_e_KeyInIgn_DEFAULT
};                                     /* Referenced by: '<S679>/Calib' */

static volatile CONST(TePMDR_e_OperationalMode, PMDR_VAR_INIT)
    KaPMDR_e_OperationalModeSts_Map[16] =
{
    CePMDR_e_Init, CePMDR_e_Ign_Off_WithoutKey, CePMDR_e_Ign_Off,
    CePMDR_e_Ign_Acc, CePMDR_e_Ign_On, CePMDR_e_Ign_PreStart, CePMDR_e_Ign_Start,
    CePMDR_e_Ign_Cranking, CePMDR_e_Ign_On_EngOn, CePMDR_e_Ign_PreAcc,
    CePMDR_e_Ign_PreOff, CePMDR_e_Auto_Cranking, CePMDR_e_Auto_Stop,
    CePMDR_e_KeyAuthenticated, CePMDR_e_NotUsed, CePMDR_e_SNA
};                                     /* Referenced by: '<S681>/Calib' */

static volatile CONST(TePMDR_e_PowerMode, PMDR_VAR_INIT)
    KaPMDR_e_PowerModeRaw_Map[10] =
{
    CePMDR_e_PowerMode_Off, CePMDR_e_PowerMode_Off, CePMDR_e_PowerMode_Acc,
    CePMDR_e_PowerMode_Run, CePMDR_e_PowerMode_Crank, CePMDR_e_PowerMode_Off,
    CePMDR_e_PowerMode_Off, CePMDR_e_PowerMode_SNA, CePMDR_e_PowerMode_Off,
    CePMDR_e_PowerMode_Off
};                                     /* Referenced by:
                                        * '<S683>/Calib'
                                        * '<S685>/Calib'
                                        */

static volatile CONST(uint16, PMDR_VAR_INIT) KePMDC_Cnt_AccRunHiDbnc = 2U;/* Referenced by: '<S97>/Calib' */
static volatile CONST(uint16, PMDR_VAR_INIT) KePMDC_Cnt_AccRunLoDbnc = 2U;/* Referenced by: '<S98>/Calib' */
static volatile CONST(uint16, PMDR_VAR_INIT) KePMDC_Cnt_IgnRunCrankHiDbnc = 2U;/* Referenced by: '<S176>/Calib' */
static volatile CONST(uint16, PMDR_VAR_INIT) KePMDC_Cnt_IgnRunCrankLoDbnc = 2U;/* Referenced by: '<S177>/Calib' */
static volatile CONST(float32, PMDR_VAR_INIT) KePMDC_U_IgnAccRunThrshHi = 6.0F;/* Referenced by: '<S99>/Calib' */
static volatile CONST(float32, PMDR_VAR_INIT) KePMDC_U_IgnAccRunThrshLo = 2.0F;/* Referenced by: '<S100>/Calib' */
static volatile CONST(float32, PMDR_VAR_INIT) KePMDC_U_IgnRunCrankThrshHi = 6.0F;/* Referenced by: '<S178>/Calib' */
static volatile CONST(float32, PMDR_VAR_INIT) KePMDC_U_IgnRunCrankThrshLo = 2.0F;/* Referenced by: '<S179>/Calib' */

#if Rte_SysCon_Variant_PMDR_10

static volatile CONST(uint16, PMDR_VAR_INIT) KePMDD_Cnt_AccHiDiagEnblDelay = 0U;/* Referenced by: '<S466>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDR_10

static volatile CONST(uint16, PMDR_VAR_INIT) KePMDD_Cnt_AccHiFailLim = 72U;/* Referenced by: '<S467>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDR_10

static volatile CONST(uint16, PMDR_VAR_INIT) KePMDD_Cnt_AccHiSmplLim = 80U;/* Referenced by: '<S468>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDR_10

static volatile CONST(uint16, PMDR_VAR_INIT) KePMDD_Cnt_AccLoDiagEnblDelay = 0U;/* Referenced by: '<S493>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDR_10

static volatile CONST(uint16, PMDR_VAR_INIT) KePMDD_Cnt_AccLoFailLim = 72U;/* Referenced by: '<S494>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDR_10

static volatile CONST(uint16, PMDR_VAR_INIT) KePMDD_Cnt_AccLoSmplLim = 80U;/* Referenced by: '<S495>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDR_12

static volatile CONST(uint16, PMDR_VAR_INIT) KePMDD_Cnt_RunCrankHiDiagEnblDelay =
    0U;                                /* Referenced by: '<S552>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDR_12

static volatile CONST(uint16, PMDR_VAR_INIT) KePMDD_Cnt_RunCrankHiFailLim = 72U;/* Referenced by: '<S553>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDR_12

static volatile CONST(uint16, PMDR_VAR_INIT) KePMDD_Cnt_RunCrankHiSmplLim = 80U;/* Referenced by: '<S554>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDR_12

static volatile CONST(uint16, PMDR_VAR_INIT)
    KePMDD_Cnt_RunCrankOpenDiagEnblDelay = 0U;/* Referenced by: '<S521>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDR_12

static volatile CONST(uint16, PMDR_VAR_INIT) KePMDD_Cnt_RunCrankOpenFailLim =
    72U;                               /* Referenced by: '<S522>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDR_12

static volatile CONST(uint16, PMDR_VAR_INIT) KePMDD_Cnt_RunCrankOpenSmplLim =
    80U;                               /* Referenced by: '<S523>/Calib' */

#endif

#if !Rte_SysCon_Variant_PMDR_9 && Rte_SysCon_Variant_PMDR_12

static volatile CONST(uint16, PMDR_VAR_INIT) KePMDD_Cnt_RunCrnkActvECMDbnc = 2U;/* Referenced by: '<S524>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDR_11

static volatile CONST(uint16, PMDR_VAR_INIT) KePMDD_Cnt_RunHiDiagEnblDelay = 0U;/* Referenced by: '<S578>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDR_11

static volatile CONST(uint16, PMDR_VAR_INIT) KePMDD_Cnt_RunHiFailLim = 72U;/* Referenced by: '<S579>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDR_11

static volatile CONST(uint16, PMDR_VAR_INIT) KePMDD_Cnt_RunHiSmplLim = 80U;/* Referenced by: '<S580>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDR_11

static volatile CONST(uint16, PMDR_VAR_INIT) KePMDD_Cnt_RunLoDiagEnblDelay = 0U;/* Referenced by: '<S603>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDR_11

static volatile CONST(uint16, PMDR_VAR_INIT) KePMDD_Cnt_RunLoFailLim = 72U;/* Referenced by: '<S604>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDR_11

static volatile CONST(uint16, PMDR_VAR_INIT) KePMDD_Cnt_RunLoSmplLim = 80U;/* Referenced by: '<S605>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDR_4 || Rte_SysCon_Variant_PMDR_5 || Rte_SysCon_Variant_PMDR_6 || Rte_SysCon_Variant_PMDR_7 || Rte_SysCon_Variant_PMDR_8

static volatile CONST(uint16, PMDR_VAR_INIT) KePMDD_Cnt_SysVoltHiFail = 6U;/* Referenced by: '<S201>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDR_4 || Rte_SysCon_Variant_PMDR_5 || Rte_SysCon_Variant_PMDR_6 || Rte_SysCon_Variant_PMDR_7 || Rte_SysCon_Variant_PMDR_8

static volatile CONST(uint16, PMDR_VAR_INIT) KePMDD_Cnt_SysVoltHiSample = 6U;/* Referenced by: '<S202>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDR_4 || Rte_SysCon_Variant_PMDR_5 || Rte_SysCon_Variant_PMDR_6 || Rte_SysCon_Variant_PMDR_7 || Rte_SysCon_Variant_PMDR_8

static volatile CONST(uint16, PMDR_VAR_INIT) KePMDD_Cnt_SysVoltLoFail = 6U;/* Referenced by: '<S327>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDR_4 || Rte_SysCon_Variant_PMDR_5 || Rte_SysCon_Variant_PMDR_6 || Rte_SysCon_Variant_PMDR_7 || Rte_SysCon_Variant_PMDR_8

static volatile CONST(uint16, PMDR_VAR_INIT) KePMDD_Cnt_SysVoltLoSample = 6U;/* Referenced by: '<S328>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDR_4 || Rte_SysCon_Variant_PMDR_5 || Rte_SysCon_Variant_PMDR_6 || Rte_SysCon_Variant_PMDR_7 || Rte_SysCon_Variant_PMDR_8

static volatile CONST(float32, PMDR_VAR_INIT) KePMDD_U_SysVoltMaxThrsh = 18.0F;/* Referenced by: '<S203>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDR_4 || Rte_SysCon_Variant_PMDR_5 || Rte_SysCon_Variant_PMDR_6 || Rte_SysCon_Variant_PMDR_7 || Rte_SysCon_Variant_PMDR_8

static volatile CONST(float32, PMDR_VAR_INIT) KePMDD_U_SysVoltMinThrsh = 10.0F;/* Referenced by: '<S329>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDR_10

static volatile CONST(boolean, PMDR_VAR_INIT) KePMDD_b_AccHiDiagEnbl = 1;/* Referenced by: '<S469>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDR_10

static volatile CONST(boolean, PMDR_VAR_INIT) KePMDD_b_AccLoDiagEnbl = 1;/* Referenced by: '<S496>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDR_11 || Rte_SysCon_Variant_PMDR_12

static volatile CONST(boolean, PMDR_VAR_INIT) KePMDD_b_OvrdMtrStartEvnt = 0;/* Referenced by:
                                                                      * '<S525>/Calib'
                                                                      * '<S606>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_PMDR_10

static volatile CONST(boolean, PMDR_VAR_INIT) KePMDD_b_OvrdRmtStart = 0;/* Referenced by: '<S497>/Calib' */

#endif

static volatile CONST(boolean, PMDR_VAR_INIT) KePMDD_b_OvrdStarterMtrCond = 0;/* Referenced by: '<S357>/Calib' */

#if Rte_SysCon_Variant_PMDR_10

static volatile CONST(boolean, PMDR_VAR_INIT) KePMDD_b_PAD_Ovrd = 0;/* Referenced by: '<S470>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDR_12

static volatile CONST(boolean, PMDR_VAR_INIT) KePMDD_b_RunCrankHiDiagEnbl = 1;/* Referenced by: '<S555>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDR_12

static volatile CONST(boolean, PMDR_VAR_INIT) KePMDD_b_RunCrankOpenDiagEnbl = 1;/* Referenced by: '<S526>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDR_11

static volatile CONST(boolean, PMDR_VAR_INIT) KePMDD_b_RunHiDiagEnbl = 0;/* Referenced by: '<S581>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDR_11

static volatile CONST(boolean, PMDR_VAR_INIT) KePMDD_b_RunLoDiagEnbl = 0;/* Referenced by: '<S607>/Calib' */

#endif

static volatile CONST(boolean, PMDR_VAR_INIT)
    KePMDD_b_SysVoltDiag_OvrdRunCrnkEnbl = 1;/* Referenced by:
                                              * '<S229>/Calib'
                                              * '<S358>/Calib'
                                              */

#if Rte_SysCon_Variant_PMDR_4 || Rte_SysCon_Variant_PMDR_5 || Rte_SysCon_Variant_PMDR_6 || Rte_SysCon_Variant_PMDR_7 || Rte_SysCon_Variant_PMDR_8

static volatile CONST(boolean, PMDR_VAR_INIT) KePMDD_b_SysVoltHighDiagEnbl = 0;/* Referenced by: '<S230>/Calib' */

#endif

static volatile CONST(boolean, PMDR_VAR_INIT) KePMDD_b_SysVoltLowDiagEnbl = 1;/* Referenced by: '<S359>/Calib' */
static volatile CONST(float32, PMDR_VAR_INIT) KePMDD_t_StarterMtrCondTout = 1.0F;/* Referenced by: '<S360>/Calib' */

#if Rte_SysCon_Variant_PMDR_1

static volatile CONST(uint16, PMDR_VAR_INIT) KePMDR_Cnt_HCPCrnkActvTout = 800U;/* Referenced by: '<S154>/Calib' */

#endif

static volatile CONST(float32, PMDR_VAR_INIT) KePMDR_U_BF1_SysVolt = 0.0F;/* Referenced by: '<S631>/Calib' */
static volatile CONST(float32, PMDR_VAR_INIT) KePMDR_U_BF2_SysVolt = 0.0F;/* Referenced by: '<S632>/Calib' */
static volatile CONST(float32, PMDR_VAR_INIT) KePMDR_U_BF3_SysVolt = 0.0F;/* Referenced by: '<S633>/Calib' */
static volatile CONST(float32, PMDR_VAR_INIT) KePMDR_U_HBSpare_SysVolt = 0.0F;/* Referenced by: '<S634>/Calib' */
static volatile CONST(float32, PMDR_VAR_INIT) KePMDR_U_HB_SysVolt = 0.0F;/* Referenced by: '<S635>/Calib' */
static volatile CONST(float32, PMDR_VAR_INIT) KePMDR_U_IgnRunCrnk = 0.0F;/* Referenced by: '<S636>/Calib' */
static volatile CONST(float32, PMDR_VAR_INIT) KePMDR_U_MainRelay_SysVolt = 12.0F;/* Referenced by: '<S637>/Calib' */
static volatile CONST(boolean, PMDR_VAR_INIT) KePMDR_b_BCMWakeUp = 0;/* Referenced by: '<S638>/Calib' */
static volatile CONST(boolean, PMDR_VAR_INIT) KePMDR_b_CrankAborted = 0;/* Referenced by: '<S639>/Calib' */

#if Rte_SysCon_Variant_PMDR_10

static volatile CONST(boolean, PMDR_VAR_INIT) KePMDR_b_DisableECMSigRunCrnkAct =
    0;                                 /* Referenced by: '<S498>/Calib' */

#endif

static volatile CONST(boolean, PMDR_VAR_INIT) KePMDR_b_EStop = 0;/* Referenced by: '<S640>/Calib' */
static volatile CONST(boolean, PMDR_VAR_INIT) KePMDR_b_EnblPowerMode_OneHWLine =
    1;                                 /* Referenced by: '<S122>/Calib' */
static volatile CONST(boolean, PMDR_VAR_INIT) KePMDR_b_EnblPowerMode_Others = 0;/* Referenced by: '<S123>/Calib' */
static volatile CONST(boolean, PMDR_VAR_INIT) KePMDR_b_EnblTonaleCmdIgnSts = 1;/* Referenced by: '<S156>/Calib' */
static volatile CONST(boolean, PMDR_VAR_INIT) KePMDR_b_EngOffReq_C2_Init = 0;/* Referenced by: '<S641>/Calib' */
static volatile CONST(boolean, PMDR_VAR_INIT) KePMDR_b_EngOffReq_C_Init = 0;/* Referenced by: '<S642>/Calib' */
static volatile CONST(boolean, PMDR_VAR_INIT) KePMDR_b_EngOffRq_C2_FA_Init = 0;/* Referenced by: '<S643>/Calib' */
static volatile CONST(boolean, PMDR_VAR_INIT) KePMDR_b_EngOffRq_C_FA_Init = 0;/* Referenced by: '<S644>/Calib' */
static volatile CONST(boolean, PMDR_VAR_INIT) KePMDR_b_IgnInputsPowerModeFAOvrd =
    0;                                 /* Referenced by: '<S63>/Calib' */
static volatile CONST(boolean, PMDR_VAR_INIT)
    KePMDR_b_IgnInputsPowerModeFAOvrd_OneHWLine = 0;/* Referenced by: '<S49>/Calib' */
static volatile CONST(boolean, PMDR_VAR_INIT) KePMDR_b_IgnInputsPowerModeFAVal =
    0;                                 /* Referenced by: '<S64>/Calib' */
static volatile CONST(boolean, PMDR_VAR_INIT)
    KePMDR_b_IgnInputsPowerModeFAVal_OneHWLine = 0;/* Referenced by: '<S50>/Calib' */
static volatile CONST(boolean, PMDR_VAR_INIT) KePMDR_b_IgnInputsPowerModeOvrd =
    0;                                 /* Referenced by: '<S65>/Calib' */
static volatile CONST(boolean, PMDR_VAR_INIT)
    KePMDR_b_IgnInputsPowerModeOvrd_OneHWLine = 0;/* Referenced by: '<S51>/Calib' */
static volatile CONST(boolean, PMDR_VAR_INIT) KePMDR_b_IgnRunCrnk_Digi = 0;/* Referenced by: '<S645>/Calib' */

#if Rte_SysCon_Variant_PMDR_10

static volatile CONST(boolean, PMDR_VAR_INIT)
    KePMDR_b_IgnSwAccPstnCktHi_LtchEnbl = 0;/* Referenced by: '<S471>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDR_10

static volatile CONST(boolean, PMDR_VAR_INIT)
    KePMDR_b_IgnSwAccPstnCktLo_LtchEnbl = 0;/* Referenced by: '<S499>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDR_12

static volatile CONST(boolean, PMDR_VAR_INIT)
    KePMDR_b_IgnSwRunCrnkPstnCktHi_LtchEnbl = 0;/* Referenced by: '<S556>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDR_12

static volatile CONST(boolean, PMDR_VAR_INIT)
    KePMDR_b_IgnSwRunCrnkPstnCktLo_LtchEnbl = 0;/* Referenced by: '<S527>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDR_11

static volatile CONST(boolean, PMDR_VAR_INIT)
    KePMDR_b_IgnSwRunPstnCktHi_LtchEnbl = 0;/* Referenced by: '<S582>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDR_11

static volatile CONST(boolean, PMDR_VAR_INIT)
    KePMDR_b_IgnSwRunPstnCktLo_LtchEnbl = 0;/* Referenced by: '<S608>/Calib' */

#endif

static volatile CONST(boolean, PMDR_VAR_INIT) KePMDR_b_KeyInIgnFA = 0;/* Referenced by: '<S646>/Calib' */
static volatile CONST(boolean, PMDR_VAR_INIT) KePMDR_b_OBCMWUp = 0;/* Referenced by: '<S647>/Calib' */
static volatile CONST(boolean, PMDR_VAR_INIT) KePMDR_b_Ovrd_EngOffRqFA_CANC2 = 0;/* Referenced by: '<S149>/Calib' */
static volatile CONST(boolean, PMDR_VAR_INIT) KePMDR_b_PAD_Actv_Init = 0;/* Referenced by: '<S648>/Calib' */
static volatile CONST(boolean, PMDR_VAR_INIT) KePMDR_b_PMM_PowerModeFAOvrd = 0;/* Referenced by: '<S124>/Calib' */
static volatile CONST(boolean, PMDR_VAR_INIT) KePMDR_b_PMM_PowerModeFAVal = 0;/* Referenced by: '<S125>/Calib' */
static volatile CONST(boolean, PMDR_VAR_INIT) KePMDR_b_PMM_PowerModeOvrd = 0;/* Referenced by: '<S126>/Calib' */
static volatile CONST(boolean, PMDR_VAR_INIT) KePMDR_b_PTRunAbrt = 0;/* Referenced by: '<S649>/Calib' */
static volatile CONST(boolean, PMDR_VAR_INIT) KePMDR_b_PowerModeRawFA = 1;/* Referenced by: '<S650>/Calib' */
static volatile CONST(boolean, PMDR_VAR_INIT) KePMDR_b_RunCrnkActvECM = 0;/* Referenced by: '<S651>/Calib' */
static volatile CONST(boolean, PMDR_VAR_INIT) KePMDR_b_StrtCntrlStOn = 0;/* Referenced by: '<S652>/Calib' */

#if Rte_SysCon_Variant_PMDR_4 || Rte_SysCon_Variant_PMDR_5 || Rte_SysCon_Variant_PMDR_6 || Rte_SysCon_Variant_PMDR_7 || Rte_SysCon_Variant_PMDR_8

static volatile CONST(boolean, PMDR_VAR_INIT) KePMDR_b_SysVoltHi_LtchEnbl = 0;/* Referenced by: '<S204>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDR_4 || Rte_SysCon_Variant_PMDR_5 || Rte_SysCon_Variant_PMDR_6 || Rte_SysCon_Variant_PMDR_7 || Rte_SysCon_Variant_PMDR_8

static volatile CONST(boolean, PMDR_VAR_INIT) KePMDR_b_SysVoltLo_LtchEnbl = 0;/* Referenced by: '<S330>/Calib' */

#endif

static volatile CONST(boolean, PMDR_VAR_INIT) KePMDR_b_Tonale_PowerModeRawFA = 1;/* Referenced by: '<S653>/Calib' */
static volatile CONST(TePMDR_e_PowerMode, PMDR_VAR_INIT)
    KePMDR_e_IgnInputsPowerModeVal = CePMDR_e_PowerMode_Off;/* Referenced by: '<S66>/Calib' */
static volatile CONST(TePMDR_e_PowerMode, PMDR_VAR_INIT)
    KePMDR_e_IgnInputsPowerModeVal_OneHWLine = CePMDR_e_PowerMode_Off;/* Referenced by: '<S52>/Calib' */
static volatile CONST(TePMDR_e_KeyInIgn, PMDR_VAR_INIT) KePMDR_e_KeyInIgn =
    CePMDR_e_KeyInIgn_DEFAULT;         /* Referenced by: '<S654>/Calib' */
static volatile CONST(TePMDR_e_OperationalMode, PMDR_VAR_INIT)
    KePMDR_e_OperationalModeSts_Init = CePMDR_e_Ign_Off;/* Referenced by: '<S655>/Calib' */
static volatile CONST(TePMDR_e_PowerMode, PMDR_VAR_INIT)
    KePMDR_e_PMM_PowerModeVal = CePMDR_e_PowerMode_Off;/* Referenced by: '<S127>/Calib' */
static volatile CONST(TePMDR_e_PowerMode, PMDR_VAR_INIT) KePMDR_e_PowerModeRaw =
    CePMDR_e_PowerMode_Off;            /* Referenced by: '<S656>/Calib' */
static volatile CONST(TePMDR_e_PowerMode, PMDR_VAR_INIT)
    KePMDR_e_Tonale_PowerModeRaw = CePMDR_e_PowerMode_Off;/* Referenced by: '<S657>/Calib' */
static volatile CONST(float32, PMDR_VAR_INIT) KePMDR_t_HybridAccDelay = 0.05F;/* Referenced by: '<S76>/Calib' */
static volatile CONST(float32, PMDR_VAR_INIT) KePMDR_t_RelayDelay = 0.0187F;/* Referenced by: '<S73>/Calib' */
static volatile CONST(float32, PMDR_VAR_INIT) KePMDR_t_dT = 0.0125F;/* Referenced by:
                                                                     * '<S169>/Calib'
                                                                     * '<S74>/Calib'
                                                                     * '<S77>/Calib'
                                                                     * '<S361>/Calib'
                                                                     */

#define STOP_SEC_CALIB_UNSPECIFIED_PMDR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PMDR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(boolean, PMDR_VAR_INIT) VePMDC_b_IgnPwrModeFA_OneHWLine;/* '<S39>/Switch1' */
static VAR(boolean, PMDR_VAR_INIT) VePMDC_b_PMM_PowerModeRunCrnkCAN;/* '<S47>/Logical2' */
static VAR(boolean, PMDR_VAR_INIT) VePMDC_b_RunActive;/* '<S39>/Merge2' */
static VAR(boolean, PMDR_VAR_INIT) VePMDC_b_RunActiveFA;/* '<S39>/Merge3' */
static VAR(TePMDR_e_PowerMode, PMDR_VAR_INIT) VePMDC_e_IgnPwrMode_OneHWLine;/* '<S39>/Switch10' */
static VAR(float32, PMDR_VAR_INIT) VePMDC_t_HybridAccDelay_DS;/* '<Root>/DSM_6' */
static VAR(float32, PMDR_VAR_INIT) VePMDC_t_RelayDelay_DS;/* '<Root>/DSM_5' */

#if Rte_SysCon_Variant_PMDR_10

static VAR(uint16, PMDR_VAR_INIT) VePMDD_Cnt_Fail_AccHi;/* '<S484>/Switch1' */

#endif

#if Rte_SysCon_Variant_PMDR_10

static VAR(uint16, PMDR_VAR_INIT) VePMDD_Cnt_Fail_AccLo;/* '<S512>/Switch1' */

#endif

#if Rte_SysCon_Variant_PMDR_12

static VAR(uint16, PMDR_VAR_INIT) VePMDD_Cnt_Fail_CktHi;/* '<S570>/Switch1' */

#endif

#if Rte_SysCon_Variant_PMDR_12

static VAR(uint16, PMDR_VAR_INIT) VePMDD_Cnt_Fail_CktLo;/* '<S544>/Switch1' */

#endif

#if Rte_SysCon_Variant_PMDR_11

static VAR(uint16, PMDR_VAR_INIT) VePMDD_Cnt_Fail_RunHi;/* '<S595>/Switch1' */

#endif

#if Rte_SysCon_Variant_PMDR_11

static VAR(uint16, PMDR_VAR_INIT) VePMDD_Cnt_Fail_RunLo;/* '<S621>/Switch1' */

#endif

#if Rte_SysCon_Variant_PMDR_10

static VAR(uint16, PMDR_VAR_INIT) VePMDD_Cnt_Smp_AccLo;/* '<S513>/Switch1' */

#endif

#if Rte_SysCon_Variant_PMDR_10

static VAR(uint16, PMDR_VAR_INIT) VePMDD_Cnt_Smpl_AccHi;/* '<S485>/Switch1' */

#endif

#if Rte_SysCon_Variant_PMDR_12

static VAR(uint16, PMDR_VAR_INIT) VePMDD_Cnt_Smpl_CktHi;/* '<S571>/Switch1' */

#endif

#if Rte_SysCon_Variant_PMDR_12

static VAR(uint16, PMDR_VAR_INIT) VePMDD_Cnt_Smpl_CktLo;/* '<S545>/Switch1' */

#endif

#if Rte_SysCon_Variant_PMDR_11

static VAR(uint16, PMDR_VAR_INIT) VePMDD_Cnt_Smpl_RunHi;/* '<S596>/Switch1' */

#endif

#if Rte_SysCon_Variant_PMDR_11

static VAR(uint16, PMDR_VAR_INIT) VePMDD_Cnt_Smpl_RunLo;/* '<S622>/Switch1' */

#endif

#if Rte_SysCon_Variant_PMDR_4

static VAR(uint16, PMDR_VAR_INIT) VePMDD_Cnt_SysVoltHiFail_BF1;/* '<S242>/Switch1' */

#endif

#if Rte_SysCon_Variant_PMDR_5

static VAR(uint16, PMDR_VAR_INIT) VePMDD_Cnt_SysVoltHiFail_BF2;/* '<S261>/Switch1' */

#endif

#if Rte_SysCon_Variant_PMDR_6

static VAR(uint16, PMDR_VAR_INIT) VePMDD_Cnt_SysVoltHiFail_BF3;/* '<S280>/Switch1' */

#endif

#if Rte_SysCon_Variant_PMDR_7

static VAR(uint16, PMDR_VAR_INIT) VePMDD_Cnt_SysVoltHiFail_HB;/* '<S299>/Switch1' */

#endif

#if Rte_SysCon_Variant_PMDR_8

static VAR(uint16, PMDR_VAR_INIT) VePMDD_Cnt_SysVoltHiFail_HBSpare;/* '<S318>/Switch1' */

#endif

#if Rte_SysCon_Variant_PMDR_4

static VAR(uint16, PMDR_VAR_INIT) VePMDD_Cnt_SysVoltHiSmpl_BF1;/* '<S243>/Switch1' */

#endif

#if Rte_SysCon_Variant_PMDR_5

static VAR(uint16, PMDR_VAR_INIT) VePMDD_Cnt_SysVoltHiSmpl_BF2;/* '<S262>/Switch1' */

#endif

#if Rte_SysCon_Variant_PMDR_6

static VAR(uint16, PMDR_VAR_INIT) VePMDD_Cnt_SysVoltHiSmpl_BF3;/* '<S281>/Switch1' */

#endif

#if Rte_SysCon_Variant_PMDR_7

static VAR(uint16, PMDR_VAR_INIT) VePMDD_Cnt_SysVoltHiSmpl_HB;/* '<S300>/Switch1' */

#endif

#if Rte_SysCon_Variant_PMDR_8

static VAR(uint16, PMDR_VAR_INIT) VePMDD_Cnt_SysVoltHiSmpl_HBSpare;/* '<S319>/Switch1' */

#endif

#if Rte_SysCon_Variant_PMDR_4

static VAR(uint16, PMDR_VAR_INIT) VePMDD_Cnt_SysVoltLowFail_BF1;/* '<S375>/Switch1' */

#endif

#if Rte_SysCon_Variant_PMDR_5

static VAR(uint16, PMDR_VAR_INIT) VePMDD_Cnt_SysVoltLowFail_BF2;/* '<S394>/Switch1' */

#endif

#if Rte_SysCon_Variant_PMDR_6

static VAR(uint16, PMDR_VAR_INIT) VePMDD_Cnt_SysVoltLowFail_BF3;/* '<S413>/Switch1' */

#endif

#if Rte_SysCon_Variant_PMDR_7

static VAR(uint16, PMDR_VAR_INIT) VePMDD_Cnt_SysVoltLowFail_HB;/* '<S432>/Switch1' */

#endif

#if Rte_SysCon_Variant_PMDR_8

static VAR(uint16, PMDR_VAR_INIT) VePMDD_Cnt_SysVoltLowFail_HBSpare;/* '<S451>/Switch1' */

#endif

#if Rte_SysCon_Variant_PMDR_4

static VAR(uint16, PMDR_VAR_INIT) VePMDD_Cnt_SysVoltLowSmpl_BF1;/* '<S376>/Switch1' */

#endif

#if Rte_SysCon_Variant_PMDR_5

static VAR(uint16, PMDR_VAR_INIT) VePMDD_Cnt_SysVoltLowSmpl_BF2;/* '<S395>/Switch1' */

#endif

#if Rte_SysCon_Variant_PMDR_6

static VAR(uint16, PMDR_VAR_INIT) VePMDD_Cnt_SysVoltLowSmpl_BF3;/* '<S414>/Switch1' */

#endif

#if Rte_SysCon_Variant_PMDR_7

static VAR(uint16, PMDR_VAR_INIT) VePMDD_Cnt_SysVoltLowSmpl_HB;/* '<S433>/Switch1' */

#endif

#if Rte_SysCon_Variant_PMDR_8

static VAR(uint16, PMDR_VAR_INIT) VePMDD_Cnt_SysVoltLowSmpl_HBSpare;/* '<S452>/Switch1' */

#endif

static VAR(boolean, PMDR_VAR_INIT) VePMDD_b_CrnkEvntMet_Key;/* '<S332>/Logical11' */
static VAR(boolean, PMDR_VAR_INIT) VePMDD_b_CrnkEvntMet_StrtrMtr;/* '<S332>/Logical12' */

#if Rte_SysCon_Variant_PMDR_10

static VAR(boolean, PMDR_VAR_INIT) VePMDD_b_PADOffEnblP2538;/* '<S459>/Logical1' */

#endif

#if Rte_SysCon_Variant_PMDR_10

static VAR(boolean, PMDR_VAR_INIT) VePMDD_b_RmtVehStrtActv;/* '<S460>/Logical9' */

#endif

static VAR(boolean, PMDR_VAR_INIT) VePMDR_b_AccRunArb;/* '<S41>/Merge1' */
static VAR(boolean, PMDR_VAR_INIT) VePMDR_b_AccRunFAArb;/* '<S41>/Merge2' */

#if Rte_SysCon_Variant_PMDR_4

static VAR(boolean, PMDR_VAR_INIT) VePMDR_b_BF1_SysHiFailSetting;/* '<S231>/Comparison7' */

#endif

#if Rte_SysCon_Variant_PMDR_4

static VAR(boolean, PMDR_VAR_INIT) VePMDR_b_BF1_SysLoFailSetting;/* '<S364>/Comparison3' */

#endif

#if Rte_SysCon_Variant_PMDR_5

static VAR(boolean, PMDR_VAR_INIT) VePMDR_b_BF2_SysHiFailSetting;/* '<S250>/Comparison7' */

#endif

#if Rte_SysCon_Variant_PMDR_5

static VAR(boolean, PMDR_VAR_INIT) VePMDR_b_BF2_SysLoFailSetting;/* '<S383>/Comparison3' */

#endif

#if Rte_SysCon_Variant_PMDR_6

static VAR(boolean, PMDR_VAR_INIT) VePMDR_b_BF3_SysHiFailSetting;/* '<S269>/Comparison7' */

#endif

#if Rte_SysCon_Variant_PMDR_6

static VAR(boolean, PMDR_VAR_INIT) VePMDR_b_BF3_SysLoFailSetting;/* '<S402>/Comparison3' */

#endif

#if Rte_SysCon_Variant_PMDR_8

static VAR(boolean, PMDR_VAR_INIT) VePMDR_b_HBSpare_SysHiFailSetting;/* '<S307>/Comparison7' */

#endif

#if Rte_SysCon_Variant_PMDR_8

static VAR(boolean, PMDR_VAR_INIT) VePMDR_b_HBSpare_SysLoFailSetting;/* '<S440>/Comparison3' */

#endif

#if Rte_SysCon_Variant_PMDR_7

static VAR(boolean, PMDR_VAR_INIT) VePMDR_b_HB_SysHiFailSetting;/* '<S288>/Comparison7' */

#endif

#if Rte_SysCon_Variant_PMDR_7

static VAR(boolean, PMDR_VAR_INIT) VePMDR_b_HB_SysLoFailSetting;/* '<S421>/Comparison3' */

#endif

#if Rte_SysCon_Variant_PMDR_1

static VAR(boolean, PMDR_VAR_INIT) VePMDR_b_HCPCrankActv;/* '<S44>/Logical' */

#endif

#if Rte_SysCon_Variant_PMDR_1

static VAR(boolean, PMDR_VAR_INIT) VePMDR_b_HCP_CrankActvTout;/* '<S151>/Greater  Than1' */

#endif

static VAR(boolean, PMDR_VAR_INIT) VePMDR_b_IgnInputsPowerModeFA;/* '<S40>/Switch1' */

#if Rte_SysCon_Variant_PMDR_4

static VAR(boolean, PMDR_VAR_INIT) VePMDR_b_SysVoltHighFA_BF1;/* '<S234>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_PMDR_5

static VAR(boolean, PMDR_VAR_INIT) VePMDR_b_SysVoltHighFA_BF2;/* '<S253>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_PMDR_6

static VAR(boolean, PMDR_VAR_INIT) VePMDR_b_SysVoltHighFA_BF3;/* '<S272>/Relational Operator' */

#endif

static VAR(boolean, PMDR_VAR_INIT) VePMDR_b_SysVoltHighFA_HB;/* synthesized block */

#if Rte_SysCon_Variant_PMDR_8

static VAR(boolean, PMDR_VAR_INIT) VePMDR_b_SysVoltHighFA_HBSpare;/* '<S310>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_PMDR_12

static VAR(boolean, PMDR_VAR_INIT) VePMDR_b_isCANRunCrank;
                               /* '<S461>/SigConvForSigProp_VariantSource1_0' */

#endif

#if Rte_SysCon_Variant_PMDR_12

static VAR(boolean, PMDR_VAR_INIT) VePMDR_b_isRunCrankAnalog_Low;
                               /* '<S461>/SigConvForSigProp_VariantSource2_0' */

#endif

#if Rte_SysCon_Variant_PMDR_12

static VAR(boolean, PMDR_VAR_INIT) VePMDR_b_isRunCrankCANSignal_FA;
                                /* '<S461>/SigConvForSigProp_VariantSource_0' */

#endif

static VAR(TePMDR_e_AccRunSrc, PMDR_VAR_INIT) VePMDR_e_Dbg_AccRunSrc;/* '<S41>/Merge5' */
static VAR(TePMDR_e_RunCrankSrc, PMDR_VAR_INIT) VePMDR_e_Dbg_RunCrankActSrc;/* '<S47>/Merge5' */
static VAR(sint8, PMDR_VAR_INIT) VePMDR_e_EngOffRq_CANSrc;/* '<S43>/Merge1' */
static VAR(TeDFIB_e_FaultDebounceStatus, PMDR_VAR_INIT)
    VePMDR_e_FaultSts_SysVoltHi_BF1;   /* synthesized block */
static VAR(TeDFIB_e_FaultDebounceStatus, PMDR_VAR_INIT)
    VePMDR_e_FaultSts_SysVoltHi_BF2;   /* synthesized block */
static VAR(TeDFIB_e_FaultDebounceStatus, PMDR_VAR_INIT)
    VePMDR_e_FaultSts_SysVoltHi_BF3;   /* synthesized block */
static VAR(TeDFIB_e_FaultDebounceStatus, PMDR_VAR_INIT)
    VePMDR_e_FaultSts_SysVoltHi_HB;    /* synthesized block */
static VAR(TeDFIB_e_FaultDebounceStatus, PMDR_VAR_INIT)
    VePMDR_e_FaultSts_SysVoltHi_HBSpare;/* synthesized block */
static VAR(TeDFIB_e_FaultDebounceStatus, PMDR_VAR_INIT)
    VePMDR_e_FaultSts_SysVoltLo_BF1;   /* synthesized block */
static VAR(TeDFIB_e_FaultDebounceStatus, PMDR_VAR_INIT)
    VePMDR_e_FaultSts_SysVoltLo_BF2;   /* synthesized block */
static VAR(TeDFIB_e_FaultDebounceStatus, PMDR_VAR_INIT)
    VePMDR_e_FaultSts_SysVoltLo_BF3;   /* synthesized block */
static VAR(TeDFIB_e_FaultDebounceStatus, PMDR_VAR_INIT)
    VePMDR_e_FaultSts_SysVoltLo_HB;    /* synthesized block */
static VAR(TeDFIB_e_FaultDebounceStatus, PMDR_VAR_INIT)
    VePMDR_e_FaultSts_SysVoltLo_HBSpare;/* synthesized block */
static VAR(TePMDR_e_PMM_PowerModeSrc, PMDR_VAR_INIT) VePMDR_e_PMMPowerModeSrc;/* '<S42>/Merge3' */
static VAR(TePMDR_e_PowerMode, PMDR_VAR_INIT) VePMDR_e_PMM_PowerModePrev;/* '<S42>/Unit Delay2' */
static VAR(TePMDR_e_PowerMode, PMDR_VAR_INIT) VePMDR_e_PowerMode_OtherSrc;/* '<S46>/Merge' */
static VAR(TePMDR_e_PowerMode, PMDR_VAR_INIT) VePMDR_e_SignalPowerMode;/* '<S40>/Merge2' */
static VAR(float32, PMDR_VAR_INIT) VePMDR_t_HybridAccDelay;/* '<S69>/Sum' */
static VAR(float32, PMDR_VAR_INIT) VePMDR_t_RelayDelay;/* '<S68>/Sum' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PMDR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_PMDR
#include "MemMap.h"

CONST(ConstB_PMDR_ac_T, PMDR_VAR_INIT) PMDR_ac_ConstB =
{
    CePMDR_e_PowerMode_Off,            /* '<S630>/Const2' */
    CePMDR_e_PowerMode_Off,            /* '<S630>/Const9' */
    CePMDR_e_PowerMode_Off,            /* '<S630>/Const13' */
    CePMDR_e_PowerMode_Off,            /* '<S658>/Constant' */
    CePMDR_e_PowerMode_Off,            /* '<S659>/Constant' */
    CePMDR_e_KeySt_Off,                /* '<S630>/Const12' */
    CeDFIB_e_Init,                     /* '<S660>/Constant' */
    CeDFIB_e_Init,                     /* '<S661>/Constant' */
    CeDFIB_e_Init,                     /* '<S662>/Constant' */
    CeDFIB_e_Init,                     /* '<S663>/Constant' */
    CeDFIB_e_Init,                     /* '<S664>/Constant' */
    CeDFIB_e_Init,                     /* '<S665>/Constant' */
    CeDFIB_e_Init,                     /* '<S666>/Constant' */
    CeDFIB_e_Init                      /* '<S667>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_PMDR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PMDR
#include "MemMap.h"

VAR(B_PMDR_ac_T, PMDR_VAR_INIT) PMDR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PMDR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PMDR
#include "MemMap.h"

VAR(DW_PMDR_ac_T, PMDR_VAR_INIT) PMDR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PMDR
#include "MemMap.h"

static FUNC(void, PMDR_CODE_LOCAL) PMDR_ac_DfltAnalog(P2VAR(boolean, AUTOMATIC,
    PMDR_VAR_INIT) rty_RunCrnkActvAnalog);
static FUNC(void, PMDR_CODE_LOCAL) PMDR_ac_Key_OFF(VAR(TePMDR_e_KeyStatus,
    AUTOMATIC) rtu_In1, P2VAR(TePMDR_e_KeyStatus, AUTOMATIC, PMDR_VAR_INIT)
    rty_Out1);
static FUNC(void, PMDR_CODE_LOCAL) PMDR_ac_Key_RunPreCrank(VAR
    (TePMDR_e_KeyStatus, AUTOMATIC) rtu_In2, P2VAR(TePMDR_e_KeyStatus, AUTOMATIC,
    PMDR_VAR_INIT) rty_Out2);

#if Rte_SysCon_Variant_PMDR_10 || Rte_SysCon_Variant_PMDR_11 || Rte_SysCon_Variant_PMDR_12 || Rte_SysCon_Variant_PMDR_4 || Rte_SysCon_Variant_PMDR_5 || Rte_SysCon_Variant_PMDR_6 || Rte_SysCon_Variant_PMDR_7 || Rte_SysCon_Variant_PMDR_8

static FUNC(void, PMDR_CODE_LOCAL) PMDR_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, PMDR_VAR_INIT)
    rty_FaultSts);

#endif

#if Rte_SysCon_Variant_PMDR_10 || Rte_SysCon_Variant_PMDR_11 || Rte_SysCon_Variant_PMDR_12 || Rte_SysCon_Variant_PMDR_4 || Rte_SysCon_Variant_PMDR_5 || Rte_SysCon_Variant_PMDR_6 || Rte_SysCon_Variant_PMDR_7 || Rte_SysCon_Variant_PMDR_8

static FUNC(void, PMDR_CODE_LOCAL) PMDR_ac_Init_k(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, PMDR_VAR_INIT)
    rty_FaultSts);

#endif

#if Rte_SysCon_Variant_PMDR_10 || Rte_SysCon_Variant_PMDR_11 || Rte_SysCon_Variant_PMDR_12 || Rte_SysCon_Variant_PMDR_4 || Rte_SysCon_Variant_PMDR_5 || Rte_SysCon_Variant_PMDR_6 || Rte_SysCon_Variant_PMDR_7 || Rte_SysCon_Variant_PMDR_8

static FUNC(void, PMDR_CODE_LOCAL) PMDR_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, PMDR_VAR_INIT)
    rty_FaultSts);

#endif

static FUNC(void, PMDR_CODE_LOCAL) PMDR_ac_Init_i(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, PMDR_VAR_INIT) rty_FaultSts);
static FUNC(void, PMDR_CODE_LOCAL) PMDR_ac_Fail_h(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, PMDR_VAR_INIT) rty_FaultSts);
static FUNC(void, PMDR_CODE_LOCAL) PMDR_ac_Pass_d(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, PMDR_VAR_INIT) rty_FaultSts);

/*
 * Output and update for action system:
 *    '<S41>/DfltAnalog'
 *    '<S47>/Dflt_Analog'
 */
static FUNC(void, PMDR_CODE_LOCAL) PMDR_ac_DfltAnalog(P2VAR(boolean, AUTOMATIC,
    PMDR_VAR_INIT) rty_RunCrnkActvAnalog)
{
    /* SignalConversion generated from: '<S90>/RunCrnkActvAnalog' incorporates:
     *  Constant: '<S90>/FALSE Constant'
     */
    *rty_RunCrnkActvAnalog = false;
}

/*
 * Output and update for action system:
 *    '<S42>/Key_OFF'
 *    '<S42>/Key_Acc'
 *    '<S42>/Key_Crank'
 *    '<S42>/Key_SNA'
 */
static FUNC(void, PMDR_CODE_LOCAL) PMDR_ac_Key_OFF(VAR(TePMDR_e_KeyStatus,
    AUTOMATIC) rtu_In1, P2VAR(TePMDR_e_KeyStatus, AUTOMATIC, PMDR_VAR_INIT)
    rty_Out1)
{
    /* Inport: '<S130>/In1' */
    *rty_Out1 = rtu_In1;
}

/*
 * Output and update for action system:
 *    '<S42>/Key_RunPreCrank'
 *    '<S42>/Key_RunPostCrank'
 */
static FUNC(void, PMDR_CODE_LOCAL) PMDR_ac_Key_RunPreCrank(VAR
    (TePMDR_e_KeyStatus, AUTOMATIC) rtu_In2, P2VAR(TePMDR_e_KeyStatus, AUTOMATIC,
    PMDR_VAR_INIT) rty_Out2)
{
    /* Inport: '<S132>/In2' */
    *rty_Out2 = rtu_In2;
}

/*
 * Output and update for enable system:
 *    '<S476>/Fail'
 *    '<S504>/Fail'
 *    '<S536>/Fail'
 *    '<S562>/Fail'
 *    '<S587>/Fail'
 *    '<S613>/Fail'
 *    '<S234>/Fail'
 *    '<S253>/Fail'
 *    '<S272>/Fail'
 *    '<S291>/Fail'
 *    ...
 */
#if Rte_SysCon_Variant_PMDR_10 || Rte_SysCon_Variant_PMDR_11 || Rte_SysCon_Variant_PMDR_12 || Rte_SysCon_Variant_PMDR_4 || Rte_SysCon_Variant_PMDR_5 || Rte_SysCon_Variant_PMDR_6 || Rte_SysCon_Variant_PMDR_7 || Rte_SysCon_Variant_PMDR_8

static FUNC(void, PMDR_CODE_LOCAL) PMDR_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, PMDR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S476>/Fail' incorporates:
     *  EnablePort: '<S480>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S480>/FaultSts' incorporates:
         *  Constant: '<S486>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Fail;
    }

    /* End of Outputs for SubSystem: '<S476>/Fail' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S476>/Init'
 *    '<S504>/Init'
 *    '<S536>/Init'
 *    '<S562>/Init'
 *    '<S587>/Init'
 *    '<S613>/Init'
 *    '<S234>/Init'
 *    '<S253>/Init'
 *    '<S272>/Init'
 *    '<S291>/Init'
 *    ...
 */
#if Rte_SysCon_Variant_PMDR_10 || Rte_SysCon_Variant_PMDR_11 || Rte_SysCon_Variant_PMDR_12 || Rte_SysCon_Variant_PMDR_4 || Rte_SysCon_Variant_PMDR_5 || Rte_SysCon_Variant_PMDR_6 || Rte_SysCon_Variant_PMDR_7 || Rte_SysCon_Variant_PMDR_8

static FUNC(void, PMDR_CODE_LOCAL) PMDR_ac_Init_k(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, PMDR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S476>/Init' incorporates:
     *  EnablePort: '<S481>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S481>/FaultSts' incorporates:
         *  Constant: '<S487>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Init;
    }

    /* End of Outputs for SubSystem: '<S476>/Init' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S476>/Pass'
 *    '<S504>/Pass'
 *    '<S536>/Pass'
 *    '<S562>/Pass'
 *    '<S587>/Pass'
 *    '<S613>/Pass'
 *    '<S234>/Pass'
 *    '<S253>/Pass'
 *    '<S272>/Pass'
 *    '<S291>/Pass'
 *    ...
 */
#if Rte_SysCon_Variant_PMDR_10 || Rte_SysCon_Variant_PMDR_11 || Rte_SysCon_Variant_PMDR_12 || Rte_SysCon_Variant_PMDR_4 || Rte_SysCon_Variant_PMDR_5 || Rte_SysCon_Variant_PMDR_6 || Rte_SysCon_Variant_PMDR_7 || Rte_SysCon_Variant_PMDR_8

static FUNC(void, PMDR_CODE_LOCAL) PMDR_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, PMDR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S476>/Pass' incorporates:
     *  EnablePort: '<S482>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S482>/FaultSts' incorporates:
         *  Constant: '<S488>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Pass;
    }

    /* End of Outputs for SubSystem: '<S476>/Pass' */
}

#endif

/*
 * Output and update for action system:
 *    '<S200>/Init'
 *    '<S326>/Init'
 */
static FUNC(void, PMDR_CODE_LOCAL) PMDR_ac_Init_i(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, PMDR_VAR_INIT) rty_FaultSts)
{
    /* SignalConversion generated from: '<S224>/FaultSts' incorporates:
     *  Constant: '<S227>/Constant'
     */
    *rty_FaultSts = CeDFIB_e_Init;
}

/*
 * Output and update for action system:
 *    '<S200>/Fail'
 *    '<S326>/Fail'
 */
static FUNC(void, PMDR_CODE_LOCAL) PMDR_ac_Fail_h(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, PMDR_VAR_INIT) rty_FaultSts)
{
    /* SignalConversion generated from: '<S223>/FaultSts' incorporates:
     *  Constant: '<S226>/Constant'
     */
    *rty_FaultSts = CeDFIB_e_Fail;
}

/*
 * Output and update for action system:
 *    '<S200>/Pass'
 *    '<S326>/Pass'
 */
static FUNC(void, PMDR_CODE_LOCAL) PMDR_ac_Pass_d(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, PMDR_VAR_INIT) rty_FaultSts)
{
    /* SignalConversion generated from: '<S225>/FaultSts' incorporates:
     *  Constant: '<S228>/Constant'
     */
    *rty_FaultSts = CeDFIB_e_Pass;
}

/* Model step function for TID1 */
FUNC(void, PMDR_CODE) PMDR_MedTEB(void) /* Explicit Task: MedTEB */
{
    float32 rtb_TmpSignalConversionAtVePMDB_U_IgnRun;
    float32 rtb_TmpSignalConversionAtVePMDR_U_IgnAcc;
    TePMDR_e_PowerMode VePMDR_e_PowerModeRaw;
    TePMDR_e_PowerMode rtb_LePMDR_e_IgnInputsPowerMode;
    TePMDR_e_PowerMode rtb_Merge;
    boolean VePMDR_b_PowerModeRawFA;
    boolean rtb_AND_kc;
    boolean rtb_AND_pa;
    boolean rtb_Comparison5_fm;
    boolean rtb_Comparison5_li;
    boolean rtb_TmpSignalConversionAtVePMDB_b_IgnR_h;
    boolean rtb_TmpSignalConversionAtVePMDB_b_IgnRun;
    boolean rtb_TmpSignalConversionAtVePMDR_b_StrtCn;
    boolean rtb_VariantMerge_For_Variant_Source_Vari;
    boolean tmpRead;
    boolean tmpRead_0;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/PMDR_MedTEB'
     */
    /* SignalConversion generated from: '<S10>/VePMDB_b_IgnRunCrnk' incorporates:
     *  Inport: '<Root>/VePMDB_b_IgnRunCrnk'
     */
    (void)Rte_Read_VePMDB_b_IgnRunCrnk_Value
        (&rtb_TmpSignalConversionAtVePMDB_b_IgnRun);

    /* SignalConversion generated from: '<S10>/VePMDB_U_IgnRunCrnk' incorporates:
     *  Inport: '<Root>/VePMDB_U_IgnRunCrnk'
     */
    (void)Rte_Read_VePMDB_U_IgnRunCrnk_Value
        (&rtb_TmpSignalConversionAtVePMDB_U_IgnRun);

    /* SignalConversion generated from: '<S10>/VePMDB_b_IgnRunCrnkDigitalFA_read' incorporates:
     *  Inport: '<Root>/VePMDB_b_IgnRunCrnkFA'
     */
    (void)Rte_Read_VePMDB_b_IgnRunCrnkFA_Value
        (&rtb_TmpSignalConversionAtVePMDB_b_IgnR_h);

    /* SignalConversion generated from: '<S10>/VePMDR_b_StrtCntrlStOn_read' incorporates:
     *  Merge: '<Root>/Merge_22'
     */
    rtb_TmpSignalConversionAtVePMDR_b_StrtCn =
        Rte_IrvRead_PMDR_MedTEB_VePMDR_b_StrtCntrlStOn_ECM_write_IRV();

    /* SignalConversion generated from: '<S10>/VePMDR_U_IgnAccRun_read' incorporates:
     *  Inport: '<Root>/VePMDB_U_IgnAccRun'
     */
    (void)Rte_Read_VePMDB_U_IgnAccRun_Value
        (&rtb_TmpSignalConversionAtVePMDR_U_IgnAcc);

    /* S-Function (fcgen): '<S10>/FcnCallGen' incorporates:
     *  SubSystem: '<S10>/InputsOverride'
     */
    /* Switch: '<S45>/Switch' incorporates:
     *  Constant: '<S156>/Calib'
     *  Switch: '<S45>/Switch1'
     */
    if (KePMDR_b_EnblTonaleCmdIgnSts)
    {
        /* Switch: '<S45>/Switch' incorporates:
         *  Merge: '<Root>/Merge_21'
         *  SignalConversion generated from: '<S10>/VePMDR_e_Tonale_PowerModeRaw_read'
         */
        VePMDR_e_PowerModeRaw =
            Rte_IrvRead_PMDR_MedTEB_VePMDR_e_Tonale_PowerModeRaw_write_IRV();

        /* Switch: '<S45>/Switch1' incorporates:
         *  Merge: '<Root>/Merge_30'
         *  SignalConversion generated from: '<S10>/VePMDR_b_Tonale_PowerModeRawFA_read'
         */
        VePMDR_b_PowerModeRawFA =
            Rte_IrvRead_PMDR_MedTEB_VePMDR_b_Tonale_PowerModeRawFA_write_IRV();
    }
    else
    {
        /* Switch: '<S45>/Switch' incorporates:
         *  Merge: '<Root>/Merge_34'
         *  SignalConversion generated from: '<S10>/VePMDR_e_PowerModeRaw_read'
         */
        VePMDR_e_PowerModeRaw =
            Rte_IrvRead_PMDR_MedTEB_VePMDR_e_PowerModeRaw_write_IRV();

        /* Switch: '<S45>/Switch1' incorporates:
         *  Merge: '<Root>/Merge_37'
         *  SignalConversion generated from: '<S10>/VePMDR_b_PowerModeRawFA_read'
         */
        VePMDR_b_PowerModeRawFA =
            Rte_IrvRead_PMDR_MedTEB_VePMDR_b_PowerModeRawFA_write_IRV();
    }

    /* End of Switch: '<S45>/Switch' */

    /* S-Function (fcgen): '<S10>/FcnCallGen' incorporates:
     *  SubSystem: '<S10>/DtrmnPMDC_AccRun'
     */
    /* If: '<S41>/If1' incorporates:
     *  Constant: '<S100>/Calib'
     *  Constant: '<S102>/Constant Value'
     *  Constant: '<S102>/Constant Value1'
     *  Constant: '<S103>/Constant Value'
     *  Constant: '<S103>/Constant Value1'
     *  Constant: '<S97>/Calib'
     *  Constant: '<S98>/Calib'
     *  Constant: '<S99>/Calib'
     *  Logic: '<S102>/OR'
     *  Logic: '<S102>/OR1'
     *  Logic: '<S103>/AND'
     *  Logic: '<S103>/OR'
     *  Logic: '<S103>/OR1'
     *  Logic: '<S104>/AND'
     *  Logic: '<S104>/OR1'
     *  Logic: '<S105>/AND'
     *  Logic: '<S105>/OR1'
     *  MinMax: '<S102>/Minimum'
     *  MinMax: '<S103>/Minimum'
     *  RelationalOperator: '<S91>/Comparison4'
     *  RelationalOperator: '<S91>/Comparison5'
     *  Sum: '<S102>/Summation'
     *  Sum: '<S103>/Summation'
     *  Switch: '<S102>/Switch1'
     *  Switch: '<S103>/Switch1'
     *  UnitDelay: '<S102>/Unit Delay'
     *  UnitDelay: '<S103>/Unit Delay'
     *  UnitDelay: '<S104>/Unit Delay'
     *  UnitDelay: '<S105>/Unit Delay'
     * */
    PMDR_ac_DW.If1_ActiveSubsystem_m = 0;

    /* Outputs for IfAction SubSystem: '<S41>/DtrmAnalog' incorporates:
     *  ActionPort: '<S91>/Action Port'
     */
    rtb_Comparison5_fm = (rtb_TmpSignalConversionAtVePMDR_U_IgnAcc >
                          KePMDC_U_IgnAccRunThrshHi);

    /* Outputs for Atomic SubSystem: '<S91>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S102>/EdgeRising' */
    rtb_AND_kc = (rtb_Comparison5_fm && (!PMDR_ac_DW.UnitDelay_DSTATE_d5));
    PMDR_ac_DW.UnitDelay_DSTATE_d5 = rtb_Comparison5_fm;

    /* End of Outputs for SubSystem: '<S102>/EdgeRising' */
    if ((!rtb_Comparison5_fm) || rtb_AND_kc)
    {
        PMDR_ac_DW.UnitDelay_DSTATE_go = 0U;
    }
    else if (KePMDC_Cnt_AccRunHiDbnc < ((uint16)(((uint32)
                PMDR_ac_DW.UnitDelay_DSTATE_go) + 1U)))
    {
        /* MinMax: '<S102>/Minimum' incorporates:
         *  Constant: '<S97>/Calib'
         */
        PMDR_ac_DW.UnitDelay_DSTATE_go = KePMDC_Cnt_AccRunHiDbnc;
    }
    else
    {
        /* MinMax: '<S102>/Minimum' incorporates:
         *  Constant: '<S102>/Constant Value'
         *  Sum: '<S102>/Summation'
         *  UnitDelay: '<S102>/Unit Delay'
         */
        PMDR_ac_DW.UnitDelay_DSTATE_go = (uint16)(((uint32)
            PMDR_ac_DW.UnitDelay_DSTATE_go) + 1U);
    }

    /* End of Outputs for SubSystem: '<S91>/Turn On Delay Sample' */
    rtb_AND_kc = (rtb_TmpSignalConversionAtVePMDR_U_IgnAcc <=
                  KePMDC_U_IgnAccRunThrshLo);

    /* Outputs for Atomic SubSystem: '<S91>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S103>/EdgeRising' */
    rtb_AND_pa = (rtb_AND_kc && (!PMDR_ac_DW.UnitDelay_DSTATE_eg));
    PMDR_ac_DW.UnitDelay_DSTATE_eg = rtb_AND_kc;

    /* End of Outputs for SubSystem: '<S103>/EdgeRising' */
    rtb_AND_kc = !rtb_AND_kc;
    if (rtb_AND_kc || rtb_AND_pa)
    {
        PMDR_ac_DW.UnitDelay_DSTATE_ii = 0U;
    }
    else if (KePMDC_Cnt_AccRunLoDbnc < ((uint16)(((uint32)
                PMDR_ac_DW.UnitDelay_DSTATE_ii) + 1U)))
    {
        /* MinMax: '<S103>/Minimum' incorporates:
         *  Constant: '<S98>/Calib'
         */
        PMDR_ac_DW.UnitDelay_DSTATE_ii = KePMDC_Cnt_AccRunLoDbnc;
    }
    else
    {
        /* MinMax: '<S103>/Minimum' incorporates:
         *  Constant: '<S103>/Constant Value'
         *  Sum: '<S103>/Summation'
         *  UnitDelay: '<S103>/Unit Delay'
         */
        PMDR_ac_DW.UnitDelay_DSTATE_ii = (uint16)(((uint32)
            PMDR_ac_DW.UnitDelay_DSTATE_ii) + 1U);
    }

    /* Outputs for IfAction SubSystem: '<S91>/PrevVal' incorporates:
     *  ActionPort: '<S101>/Action Port'
     */
    /* Outputs for IfAction SubSystem: '<S91>/AccRun_NotActv' incorporates:
     *  ActionPort: '<S96>/Action Port'
     */
    /* Outputs for IfAction SubSystem: '<S91>/AccRun_Actv' incorporates:
     *  ActionPort: '<S95>/Action Port'
     */
    /* Outputs for Atomic SubSystem: '<S91>/Turn On Delay Sample' */
    /* If: '<S91>/If' incorporates:
     *  Constant: '<S97>/Calib'
     *  Constant: '<S98>/Calib'
     *  If: '<S41>/If1'
     *  Inport: '<S101>/AccRunAnalogArb_Prev'
     *  Logic: '<S102>/AND'
     *  Logic: '<S103>/AND'
     *  Merge: '<S41>/Merge4'
     *  RelationalOperator: '<S102>/Greater  Than'
     *  RelationalOperator: '<S103>/Greater  Than'
     *  SignalConversion generated from: '<S95>/VePMDR_b_AccRunAnalog'
     *  SignalConversion generated from: '<S96>/VePMDR_b_AccRunAnalog'
     *  UnitDelay: '<S102>/Unit Delay'
     *  UnitDelay: '<S103>/Unit Delay'
     *  UnitDelay: '<S91>/Unit Delay'
     */
    PMDR_ac_B.VePMDR_b_AccRunActiveAnalog = ((rtb_Comparison5_fm &&
        (PMDR_ac_DW.UnitDelay_DSTATE_go >= KePMDC_Cnt_AccRunHiDbnc)) ||
        ((rtb_AND_kc || (PMDR_ac_DW.UnitDelay_DSTATE_ii <
                         KePMDC_Cnt_AccRunLoDbnc)) &&
         (PMDR_ac_DW.UnitDelay_DSTATE_n2)));

    /* End of Outputs for SubSystem: '<S91>/Turn On Delay Sample' */
    /* End of Outputs for SubSystem: '<S91>/AccRun_Actv' */
    /* End of Outputs for SubSystem: '<S91>/AccRun_NotActv' */
    /* End of Outputs for SubSystem: '<S91>/PrevVal' */
    /* End of Outputs for SubSystem: '<S91>/Turn On Delay Sample1' */
    /* End of Outputs for SubSystem: '<S41>/DtrmAnalog' */
    /* End of Outputs for S-Function (fcgen): '<S10>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VePMDB_b_IgnAccRunFA' */
    (void)Rte_Read_VePMDB_b_IgnAccRunFA_Value(&rtb_Comparison5_li);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/PMDR_MedTEB'
     */
    /* S-Function (fcgen): '<S10>/FcnCallGen' incorporates:
     *  SubSystem: '<S10>/DtrmnPMDC_AccRun'
     */
    /* If: '<S41>/If2' */
    if (!rtb_Comparison5_li)
    {
        /* Merge: '<S41>/Merge1' incorporates:
         *  Inport: '<Root>/VePMDB_b_IgnAccRun'
         */
        (void)Rte_Read_VePMDB_b_IgnAccRun_Value((&(VePMDR_b_AccRunArb)));

        /* Outputs for IfAction SubSystem: '<S41>/AccRun_Use_Digital' incorporates:
         *  ActionPort: '<S89>/Action Port'
         */
        /* Merge: '<S41>/Merge2' incorporates:
         *  Constant: '<S89>/FALSE Constant'
         *  SignalConversion generated from: '<S89>/Out2'
         */
        VePMDR_b_AccRunFAArb = false;

        /* Merge: '<S41>/Merge5' incorporates:
         *  Constant: '<S94>/Constant'
         *  SignalConversion generated from: '<S89>/Dbg1'
         */
        VePMDR_e_Dbg_AccRunSrc = CePMDR_e_AccRun_Digital;

        /* End of Outputs for SubSystem: '<S41>/AccRun_Use_Digital' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S41>/AccRun_Use_Analog' incorporates:
         *  ActionPort: '<S88>/Action Port'
         */
        /* Merge: '<S41>/Merge1' incorporates:
         *  Inport: '<S88>/AccRunAnalogIn'
         */
        VePMDR_b_AccRunArb = PMDR_ac_B.VePMDR_b_AccRunActiveAnalog;

        /* Merge: '<S41>/Merge2' incorporates:
         *  Constant: '<S88>/FALSE Constant'
         *  SignalConversion generated from: '<S88>/Out2'
         */
        VePMDR_b_AccRunFAArb = false;

        /* Merge: '<S41>/Merge5' incorporates:
         *  Constant: '<S93>/Constant'
         *  SignalConversion generated from: '<S88>/Dbg2'
         */
        VePMDR_e_Dbg_AccRunSrc = CePMDR_e_AccRun_Analog;

        /* End of Outputs for SubSystem: '<S41>/AccRun_Use_Analog' */
    }

    /* End of If: '<S41>/If2' */

    /* Update for If: '<S41>/If1' */
    if (PMDR_ac_DW.If1_ActiveSubsystem_m == 0)
    {
        /* Update for IfAction SubSystem: '<S41>/DtrmAnalog' incorporates:
         *  ActionPort: '<S91>/Action Port'
         */
        /* Update for UnitDelay: '<S91>/Unit Delay' */
        PMDR_ac_DW.UnitDelay_DSTATE_n2 = PMDR_ac_B.VePMDR_b_AccRunActiveAnalog;

        /* End of Update for SubSystem: '<S41>/DtrmAnalog' */
    }

    /* End of Update for If: '<S41>/If1' */

    /* S-Function (fcgen): '<S10>/FcnCallGen' incorporates:
     *  SubSystem: '<S10>/RunCrankActive'
     */
    /* If: '<S47>/If1' incorporates:
     *  Constant: '<S176>/Calib'
     *  Constant: '<S177>/Calib'
     *  Constant: '<S178>/Calib'
     *  Constant: '<S179>/Calib'
     *  Constant: '<S183>/Constant Value'
     *  Constant: '<S183>/Constant Value1'
     *  Constant: '<S184>/Constant Value'
     *  Constant: '<S184>/Constant Value1'
     *  Logic: '<S183>/OR'
     *  Logic: '<S183>/OR1'
     *  Logic: '<S184>/AND'
     *  Logic: '<S184>/OR'
     *  Logic: '<S184>/OR1'
     *  Logic: '<S185>/AND'
     *  Logic: '<S185>/OR1'
     *  Logic: '<S186>/AND'
     *  Logic: '<S186>/OR1'
     *  MinMax: '<S183>/Minimum'
     *  MinMax: '<S184>/Minimum'
     *  RelationalOperator: '<S165>/Comparison4'
     *  RelationalOperator: '<S165>/Comparison5'
     *  Sum: '<S183>/Summation'
     *  Sum: '<S184>/Summation'
     *  Switch: '<S183>/Switch1'
     *  Switch: '<S184>/Switch1'
     *  UnitDelay: '<S183>/Unit Delay'
     *  UnitDelay: '<S184>/Unit Delay'
     *  UnitDelay: '<S185>/Unit Delay'
     *  UnitDelay: '<S186>/Unit Delay'
     * */
    PMDR_ac_DW.If1_ActiveSubsystem = 0;

    /* Outputs for IfAction SubSystem: '<S47>/Dtrmn_Analog' incorporates:
     *  ActionPort: '<S165>/Action Port'
     */
    rtb_AND_kc = (rtb_TmpSignalConversionAtVePMDB_U_IgnRun <=
                  KePMDC_U_IgnRunCrankThrshLo);
    rtb_Comparison5_li = (rtb_TmpSignalConversionAtVePMDB_U_IgnRun >
                          KePMDC_U_IgnRunCrankThrshHi);

    /* Outputs for Atomic SubSystem: '<S165>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S183>/EdgeRising' */
    rtb_Comparison5_fm = (rtb_Comparison5_li && (!PMDR_ac_DW.UnitDelay_DSTATE_ir));
    PMDR_ac_DW.UnitDelay_DSTATE_ir = rtb_Comparison5_li;

    /* End of Outputs for SubSystem: '<S183>/EdgeRising' */
    if ((!rtb_Comparison5_li) || rtb_Comparison5_fm)
    {
        PMDR_ac_DW.UnitDelay_DSTATE_cf = 0U;
    }
    else if (KePMDC_Cnt_IgnRunCrankHiDbnc < ((uint16)(((uint32)
                PMDR_ac_DW.UnitDelay_DSTATE_cf) + 1U)))
    {
        /* MinMax: '<S183>/Minimum' incorporates:
         *  Constant: '<S176>/Calib'
         */
        PMDR_ac_DW.UnitDelay_DSTATE_cf = KePMDC_Cnt_IgnRunCrankHiDbnc;
    }
    else
    {
        /* MinMax: '<S183>/Minimum' incorporates:
         *  Constant: '<S183>/Constant Value'
         *  Sum: '<S183>/Summation'
         *  UnitDelay: '<S183>/Unit Delay'
         */
        PMDR_ac_DW.UnitDelay_DSTATE_cf = (uint16)(((uint32)
            PMDR_ac_DW.UnitDelay_DSTATE_cf) + 1U);
    }

    /* End of Outputs for SubSystem: '<S165>/Turn On Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S165>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S184>/EdgeRising' */
    rtb_Comparison5_fm = (rtb_AND_kc && (!PMDR_ac_DW.UnitDelay_DSTATE_ep));
    PMDR_ac_DW.UnitDelay_DSTATE_ep = rtb_AND_kc;

    /* End of Outputs for SubSystem: '<S184>/EdgeRising' */
    rtb_AND_kc = !rtb_AND_kc;
    if (rtb_AND_kc || rtb_Comparison5_fm)
    {
        PMDR_ac_DW.UnitDelay_DSTATE_pc = 0U;
    }
    else if (KePMDC_Cnt_IgnRunCrankLoDbnc < ((uint16)(((uint32)
                PMDR_ac_DW.UnitDelay_DSTATE_pc) + 1U)))
    {
        /* MinMax: '<S184>/Minimum' incorporates:
         *  Constant: '<S177>/Calib'
         */
        PMDR_ac_DW.UnitDelay_DSTATE_pc = KePMDC_Cnt_IgnRunCrankLoDbnc;
    }
    else
    {
        /* MinMax: '<S184>/Minimum' incorporates:
         *  Constant: '<S184>/Constant Value'
         *  Sum: '<S184>/Summation'
         *  UnitDelay: '<S184>/Unit Delay'
         */
        PMDR_ac_DW.UnitDelay_DSTATE_pc = (uint16)(((uint32)
            PMDR_ac_DW.UnitDelay_DSTATE_pc) + 1U);
    }

    /* Outputs for IfAction SubSystem: '<S165>/PrevVal' incorporates:
     *  ActionPort: '<S180>/Action Port'
     */
    /* Outputs for IfAction SubSystem: '<S165>/RunCrank_NotActv' incorporates:
     *  ActionPort: '<S182>/Action Port'
     */
    /* Outputs for IfAction SubSystem: '<S165>/RunCrank_Actv' incorporates:
     *  ActionPort: '<S181>/Action Port'
     */
    /* Outputs for Atomic SubSystem: '<S165>/Turn On Delay Sample' */
    /* If: '<S165>/If' incorporates:
     *  Constant: '<S176>/Calib'
     *  Constant: '<S177>/Calib'
     *  If: '<S47>/If1'
     *  Inport: '<S180>/RunCrnkActvAnalog_Prev'
     *  Logic: '<S183>/AND'
     *  Logic: '<S184>/AND'
     *  Merge: '<S47>/Merge4'
     *  RelationalOperator: '<S183>/Greater  Than'
     *  RelationalOperator: '<S184>/Greater  Than'
     *  SignalConversion generated from: '<S181>/RunCrnkActvAnalog'
     *  SignalConversion generated from: '<S182>/RunCrnkActvAnalog'
     *  UnitDelay: '<S165>/Unit Delay'
     *  UnitDelay: '<S183>/Unit Delay'
     *  UnitDelay: '<S184>/Unit Delay'
     */
    PMDR_ac_B.VePMDR_b_RunCrankActiveAnalog = ((rtb_Comparison5_li &&
        (PMDR_ac_DW.UnitDelay_DSTATE_cf >= KePMDC_Cnt_IgnRunCrankHiDbnc)) ||
        ((rtb_AND_kc || (PMDR_ac_DW.UnitDelay_DSTATE_pc <
                         KePMDC_Cnt_IgnRunCrankLoDbnc)) &&
         (PMDR_ac_DW.UnitDelay_DSTATE_b5)));

    /* End of Outputs for SubSystem: '<S165>/Turn On Delay Sample' */
    /* End of Outputs for SubSystem: '<S165>/RunCrank_Actv' */
    /* End of Outputs for SubSystem: '<S165>/RunCrank_NotActv' */
    /* End of Outputs for SubSystem: '<S165>/PrevVal' */
    /* End of Outputs for SubSystem: '<S165>/Turn On Delay Sample1' */
    /* End of Outputs for SubSystem: '<S47>/Dtrmn_Analog' */

    /* Logic: '<S47>/Logical2' incorporates:
     *  Constant: '<S167>/Constant'
     *  Constant: '<S168>/Constant'
     *  RelationalOperator: '<S47>/Comparison1'
     *  RelationalOperator: '<S47>/Comparison2'
     */
    VePMDC_b_PMM_PowerModeRunCrnkCAN = ((((uint32)VePMDR_e_PowerModeRaw) ==
        CePMDR_e_PowerMode_Run) || (((uint32)VePMDR_e_PowerModeRaw) ==
        CePMDR_e_PowerMode_Crank));

    /* If: '<S47>/If_RunCrank' */
    if (!VePMDR_b_PowerModeRawFA)
    {
        /* Outputs for IfAction SubSystem: '<S47>/RunCrank_Use_CBC' incorporates:
         *  ActionPort: '<S172>/Action Port'
         */
        /* Merge: '<S47>/Merge1' incorporates:
         *  Inport: '<S172>/RunCrnkActvCANIn'
         */
        VePMDC_b_RunActive = VePMDC_b_PMM_PowerModeRunCrnkCAN;

        /* Merge: '<S47>/Merge5' incorporates:
         *  Constant: '<S189>/Constant'
         *  SignalConversion generated from: '<S172>/Dbg1'
         */
        VePMDR_e_Dbg_RunCrankActSrc = CePMDR_e_RunCrank_CAN_CBC;

        /* End of Outputs for SubSystem: '<S47>/RunCrank_Use_CBC' */
    }
    else if (!rtb_TmpSignalConversionAtVePMDB_b_IgnR_h)
    {
        /* Outputs for IfAction SubSystem: '<S47>/RunCrank_Use_Dig' incorporates:
         *  ActionPort: '<S173>/Action Port'
         */
        /* Merge: '<S47>/Merge1' incorporates:
         *  Inport: '<S173>/RunCrnkActvDigitalIn'
         */
        VePMDC_b_RunActive = rtb_TmpSignalConversionAtVePMDB_b_IgnRun;

        /* Merge: '<S47>/Merge5' incorporates:
         *  Constant: '<S190>/Constant'
         *  SignalConversion generated from: '<S173>/Dbg2'
         */
        VePMDR_e_Dbg_RunCrankActSrc = CePMDR_e_RunCrank_HW_Digital;

        /* End of Outputs for SubSystem: '<S47>/RunCrank_Use_Dig' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S47>/RunCrank_Use_Ana' incorporates:
         *  ActionPort: '<S171>/Action Port'
         */
        /* Merge: '<S47>/Merge1' incorporates:
         *  Inport: '<S171>/RunCrnkActvAnalogIn'
         */
        VePMDC_b_RunActive = PMDR_ac_B.VePMDR_b_RunCrankActiveAnalog;

        /* Merge: '<S47>/Merge5' incorporates:
         *  Constant: '<S188>/Constant'
         *  SignalConversion generated from: '<S171>/Dbg3'
         */
        VePMDR_e_Dbg_RunCrankActSrc = CePMDR_e_RunCrank_HW_Analog;

        /* End of Outputs for SubSystem: '<S47>/RunCrank_Use_Ana' */
    }

    /* End of If: '<S47>/If_RunCrank' */

    /* Outputs for Atomic SubSystem: '<S47>/Stop Watch Reset Enabled1' */
    /* Switch: '<S175>/Switch2' incorporates:
     *  Constant: '<S175>/Constant Value2'
     *  Logic: '<S47>/Logical8'
     *  Switch: '<S175>/Switch1'
     *  UnitDelay: '<S175>/Unit Delay'
     */
    if (!VePMDC_b_RunActive)
    {
        PMDR_ac_DW.UnitDelay_DSTATE_c = 0.0F;
    }
    else
    {
        /* UnitDelay: '<S175>/Unit Delay' incorporates:
         *  Constant: '<S169>/Calib'
         *  Sum: '<S175>/Subtraction'
         *  Switch: '<S175>/Switch2'
         */
        PMDR_ac_DW.UnitDelay_DSTATE_c += KePMDR_t_dT;
    }

    /* End of Switch: '<S175>/Switch2' */
    /* End of Outputs for SubSystem: '<S47>/Stop Watch Reset Enabled1' */

    /* Update for If: '<S47>/If1' */
    if (PMDR_ac_DW.If1_ActiveSubsystem == 0)
    {
        /* Update for IfAction SubSystem: '<S47>/Dtrmn_Analog' incorporates:
         *  ActionPort: '<S165>/Action Port'
         */
        /* Update for UnitDelay: '<S165>/Unit Delay' */
        PMDR_ac_DW.UnitDelay_DSTATE_b5 = PMDR_ac_B.VePMDR_b_RunCrankActiveAnalog;

        /* End of Update for SubSystem: '<S47>/Dtrmn_Analog' */
    }

    /* End of Update for If: '<S47>/If1' */

    /* S-Function (fcgen): '<S10>/FcnCallGen' incorporates:
     *  SubSystem: '<S10>/Calc_SigPwrMode'
     */
    /* If: '<S40>/If2' incorporates:
     *  If: '<S71>/If'
     */
    if (!VePMDR_b_AccRunFAArb)
    {
        /* Outputs for IfAction SubSystem: '<S40>/SwCaseAction7' incorporates:
         *  ActionPort: '<S71>/Action Port'
         */
        rtb_AND_kc = !VePMDC_b_RunActive;
        rtb_TmpSignalConversionAtVePMDB_b_IgnR_h = !VePMDR_b_AccRunArb;

        /* If: '<S71>/If' */
        if (rtb_AND_kc && rtb_TmpSignalConversionAtVePMDB_b_IgnR_h)
        {
            /* Outputs for IfAction SubSystem: '<S71>/SwCaseAction' incorporates:
             *  ActionPort: '<S79>/Action Port'
             */
            /* Merge: '<S40>/Merge2' incorporates:
             *  Constant: '<S83>/Constant'
             *  SignalConversion generated from: '<S79>/Out1'
             */
            VePMDR_e_SignalPowerMode = CePMDR_e_PowerMode_Off;

            /* End of Outputs for SubSystem: '<S71>/SwCaseAction' */
        }
        else if (rtb_AND_kc && (VePMDR_b_AccRunArb))
        {
            /* Outputs for IfAction SubSystem: '<S71>/SwCaseAction1' incorporates:
             *  ActionPort: '<S80>/Action Port'
             */
            /* Merge: '<S40>/Merge2' incorporates:
             *  Constant: '<S84>/Constant'
             *  SignalConversion generated from: '<S80>/Out1'
             */
            VePMDR_e_SignalPowerMode = CePMDR_e_PowerMode_Acc;

            /* End of Outputs for SubSystem: '<S71>/SwCaseAction1' */
        }
        else if ((VePMDC_b_RunActive) && (VePMDR_b_AccRunArb))
        {
            /* Outputs for IfAction SubSystem: '<S71>/SwCaseAction2' incorporates:
             *  ActionPort: '<S81>/Action Port'
             */
            /* Merge: '<S40>/Merge2' incorporates:
             *  Constant: '<S85>/Constant'
             *  SignalConversion generated from: '<S81>/Out1'
             */
            VePMDR_e_SignalPowerMode = CePMDR_e_PowerMode_Run;

            /* End of Outputs for SubSystem: '<S71>/SwCaseAction2' */
        }
        else
        {
            if ((VePMDC_b_RunActive) && rtb_TmpSignalConversionAtVePMDB_b_IgnR_h)
            {
                /* Outputs for IfAction SubSystem: '<S71>/SwCaseAction3' incorporates:
                 *  ActionPort: '<S82>/Action Port'
                 */
                /* Merge: '<S40>/Merge2' incorporates:
                 *  Constant: '<S86>/Constant'
                 *  SignalConversion generated from: '<S82>/Out1'
                 */
                VePMDR_e_SignalPowerMode = CePMDR_e_PowerMode_Crank;

                /* End of Outputs for SubSystem: '<S71>/SwCaseAction3' */
            }
        }

        /* Merge: '<S40>/Merge3' incorporates:
         *  Constant: '<S71>/FALSE Constant'
         *  SignalConversion generated from: '<S71>/Out2'
         */
        VePMDR_b_IgnInputsPowerModeFA = false;

        /* End of Outputs for SubSystem: '<S40>/SwCaseAction7' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S40>/SwCaseAction1' incorporates:
         *  ActionPort: '<S67>/Action Port'
         */
        /* Merge: '<S40>/Merge2' incorporates:
         *  Constant: '<S72>/Constant'
         *  SignalConversion generated from: '<S67>/Out1'
         */
        VePMDR_e_SignalPowerMode = CePMDR_e_PowerMode_Off;

        /* Merge: '<S40>/Merge3' incorporates:
         *  Constant: '<S67>/TRUE Constant'
         *  SignalConversion generated from: '<S67>/Out2'
         */
        VePMDR_b_IgnInputsPowerModeFA = true;

        /* End of Outputs for SubSystem: '<S40>/SwCaseAction1' */
    }

    /* End of If: '<S40>/If2' */

    /* If: '<S40>/If1' incorporates:
     *  Constant: '<S61>/Constant'
     *  Constant: '<S62>/Constant'
     *  Merge: '<S40>/Merge2'
     *  RelationalOperator: '<S40>/Comparison1'
     *  RelationalOperator: '<S40>/Comparison6'
     */
    if (((uint32)VePMDR_e_SignalPowerMode) == CePMDR_e_PowerMode_Crank)
    {
        /* Outputs for IfAction SubSystem: '<S40>/SwCaseAction4' incorporates:
         *  ActionPort: '<S68>/Action Port'
         */
        /* Sum: '<S68>/Sum' incorporates:
         *  Constant: '<S74>/Calib'
         *  DataStoreRead: '<S68>/Data Store Read'
         */
        VePMDR_t_RelayDelay = VePMDC_t_RelayDelay_DS + KePMDR_t_dT;

        /* DataStoreWrite: '<S68>/Data Store Write' */
        VePMDC_t_RelayDelay_DS = VePMDR_t_RelayDelay;

        /* If: '<S68>/If' incorporates:
         *  Constant: '<S73>/Calib'
         *  Inport: '<S75>/VePMDR_e_SignalPowerMode'
         *  RelationalOperator: '<S68>/Comparison7'
         */
        if (VePMDR_t_RelayDelay >= KePMDR_t_RelayDelay)
        {
            /* Outputs for IfAction SubSystem: '<S68>/SwCaseAction' incorporates:
             *  ActionPort: '<S75>/Action Port'
             */
            /* DataStoreWrite: '<S75>/Data Store Write' incorporates:
             *  Constant: '<S75>/Constant Value1'
             */
            VePMDC_t_HybridAccDelay_DS = 0.0F;
            PMDR_ac_B.VePMDR_e_SignalPowerMode_l = VePMDR_e_SignalPowerMode;

            /* End of Outputs for SubSystem: '<S68>/SwCaseAction' */
        }

        /* End of If: '<S68>/If' */

        /* Switch: '<S40>/Switch10' incorporates:
         *  Inport: '<S75>/VePMDR_e_SignalPowerMode'
         *  SignalConversion generated from: '<S68>/VePMDR_e_IgnInputsPowerMode'
         */
        rtb_LePMDR_e_IgnInputsPowerMode = PMDR_ac_B.VePMDR_e_SignalPowerMode_l;

        /* End of Outputs for SubSystem: '<S40>/SwCaseAction4' */
    }
    else if (((uint32)VePMDR_e_SignalPowerMode) == CePMDR_e_PowerMode_Acc)
    {
        /* Outputs for IfAction SubSystem: '<S40>/SwCaseAction5' incorporates:
         *  ActionPort: '<S69>/Action Port'
         */
        /* Sum: '<S69>/Sum' incorporates:
         *  Constant: '<S77>/Calib'
         *  DataStoreRead: '<S69>/Data Store Read'
         */
        VePMDR_t_HybridAccDelay = VePMDC_t_HybridAccDelay_DS + KePMDR_t_dT;

        /* DataStoreWrite: '<S69>/Data Store Write' */
        VePMDC_t_HybridAccDelay_DS = VePMDR_t_HybridAccDelay;

        /* If: '<S69>/If' incorporates:
         *  Constant: '<S76>/Calib'
         *  Inport: '<S78>/VePMDR_e_SignalPowerMode'
         *  RelationalOperator: '<S69>/Comparison7'
         */
        if (VePMDR_t_HybridAccDelay >= KePMDR_t_HybridAccDelay)
        {
            /* Outputs for IfAction SubSystem: '<S69>/SwCaseAction' incorporates:
             *  ActionPort: '<S78>/Action Port'
             */
            /* DataStoreWrite: '<S78>/Data Store Write' incorporates:
             *  Constant: '<S78>/Constant Value1'
             */
            VePMDC_t_RelayDelay_DS = 0.0F;
            PMDR_ac_B.VePMDR_e_SignalPowerMode_a = VePMDR_e_SignalPowerMode;

            /* End of Outputs for SubSystem: '<S69>/SwCaseAction' */
        }

        /* End of If: '<S69>/If' */

        /* Switch: '<S40>/Switch10' incorporates:
         *  Inport: '<S78>/VePMDR_e_SignalPowerMode'
         *  SignalConversion generated from: '<S69>/VePMDR_e_IgnInputsPowerMode'
         */
        rtb_LePMDR_e_IgnInputsPowerMode = PMDR_ac_B.VePMDR_e_SignalPowerMode_a;

        /* End of Outputs for SubSystem: '<S40>/SwCaseAction5' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S40>/SwCaseAction6' incorporates:
         *  ActionPort: '<S70>/Action Port'
         */
        /* DataStoreWrite: '<S70>/Data Store Write' incorporates:
         *  Constant: '<S70>/Constant Value'
         */
        VePMDC_t_RelayDelay_DS = 0.0F;

        /* DataStoreWrite: '<S70>/Data Store Write1' incorporates:
         *  Constant: '<S70>/Constant Value1'
         */
        VePMDC_t_HybridAccDelay_DS = 0.0F;

        /* Switch: '<S40>/Switch10' incorporates:
         *  Inport: '<S70>/VePMDI_e_SignalPowerMode'
         */
        rtb_LePMDR_e_IgnInputsPowerMode = VePMDR_e_SignalPowerMode;

        /* End of Outputs for SubSystem: '<S40>/SwCaseAction6' */
    }

    /* End of If: '<S40>/If1' */

    /* Switch: '<S40>/Switch10' incorporates:
     *  Constant: '<S65>/Calib'
     */
    if (KePMDR_b_IgnInputsPowerModeOvrd)
    {
        /* Switch: '<S40>/Switch10' incorporates:
         *  Constant: '<S66>/Calib'
         */
        rtb_LePMDR_e_IgnInputsPowerMode = KePMDR_e_IgnInputsPowerModeVal;
    }

    /* End of Switch: '<S40>/Switch10' */

    /* Switch: '<S40>/Switch1' incorporates:
     *  Constant: '<S63>/Calib'
     */
    if (KePMDR_b_IgnInputsPowerModeFAOvrd)
    {
        /* Switch: '<S40>/Switch1' incorporates:
         *  Constant: '<S64>/Calib'
         */
        VePMDR_b_IgnInputsPowerModeFA = KePMDR_b_IgnInputsPowerModeFAVal;
    }

    /* End of Switch: '<S40>/Switch1' */

    /* S-Function (fcgen): '<S10>/FcnCallGen' incorporates:
     *  SubSystem: '<S10>/CalcPMDI_SignalPowerMode_OneHWLine'
     */
    /* Outputs for IfAction SubSystem: '<S39>/SwCaseAction7' incorporates:
     *  ActionPort: '<S57>/Action Port'
     */
    /* If: '<S39>/If2' incorporates:
     *  Constant: '<S57>/FALSE Constant'
     *  Merge: '<S39>/Merge3'
     *  SignalConversion generated from: '<S57>/FA'
     */
    VePMDC_b_RunActiveFA = false;

    /* End of Outputs for SubSystem: '<S39>/SwCaseAction7' */

    /* Switch: '<S39>/Switch1' incorporates:
     *  Constant: '<S49>/Calib'
     */
    if (KePMDR_b_IgnInputsPowerModeFAOvrd_OneHWLine)
    {
        /* Switch: '<S39>/Switch1' incorporates:
         *  Constant: '<S50>/Calib'
         */
        VePMDC_b_IgnPwrModeFA_OneHWLine =
            KePMDR_b_IgnInputsPowerModeFAVal_OneHWLine;
    }
    else
    {
        /* Switch: '<S39>/Switch1' */
        VePMDC_b_IgnPwrModeFA_OneHWLine = VePMDC_b_RunActiveFA;
    }

    /* End of Switch: '<S39>/Switch1' */

    /* Switch: '<S39>/Switch10' incorporates:
     *  Constant: '<S51>/Calib'
     *  If: '<S39>/If1'
     *  RelationalOperator: '<S39>/Comparison6'
     */
    if (KePMDR_b_IgnInputsPowerModeOvrd_OneHWLine)
    {
        /* Switch: '<S39>/Switch10' incorporates:
         *  Constant: '<S52>/Calib'
         */
        VePMDC_e_IgnPwrMode_OneHWLine = KePMDR_e_IgnInputsPowerModeVal_OneHWLine;
    }
    else if (VePMDC_b_RunActive)
    {
        /* Outputs for IfAction SubSystem: '<S39>/SwCaseAction4' incorporates:
         *  ActionPort: '<S55>/Action Port'
         */
        /* If: '<S39>/If1' incorporates:
         *  Constant: '<S58>/Constant'
         *  SignalConversion generated from: '<S55>/VePMDR_e_IgnInputsPowerMode'
         *  Switch: '<S39>/Switch10'
         */
        VePMDC_e_IgnPwrMode_OneHWLine = CePMDR_e_PowerMode_Run;

        /* End of Outputs for SubSystem: '<S39>/SwCaseAction4' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S39>/SwCaseAction6' incorporates:
         *  ActionPort: '<S56>/Action Port'
         */
        /* If: '<S39>/If1' incorporates:
         *  Constant: '<S59>/Constant'
         *  SignalConversion generated from: '<S56>/VePMDR_e_IgnInputsPowerMode'
         *  Switch: '<S39>/Switch10'
         */
        VePMDC_e_IgnPwrMode_OneHWLine = CePMDR_e_PowerMode_Off;

        /* End of Outputs for SubSystem: '<S39>/SwCaseAction6' */
    }

    /* End of Switch: '<S39>/Switch10' */

    /* S-Function (fcgen): '<S10>/FcnCallGen' incorporates:
     *  SubSystem: '<S10>/PMDC_PM_OtherSrc'
     */
    /* Logic: '<S46>/Logical1' */
    rtb_TmpSignalConversionAtVePMDB_b_IgnR_h =
        !rtb_TmpSignalConversionAtVePMDR_b_StrtCn;

    /* If: '<S46>/If' incorporates:
     *  Logic: '<S46>/Logical'
     *  Logic: '<S46>/Logical2'
     *  Logic: '<S46>/Logical3'
     *  Logic: '<S46>/Logical4'
     */
    if ((!PMDR_ac_B.VePMDR_b_RunCrankActiveAnalog) &&
            rtb_TmpSignalConversionAtVePMDB_b_IgnR_h)
    {
        /* Outputs for IfAction SubSystem: '<S46>/both_ip_false_OFF' incorporates:
         *  ActionPort: '<S158>/Action Port'
         */
        /* Merge: '<S46>/Merge' incorporates:
         *  Constant: '<S161>/Constant'
         *  SignalConversion generated from: '<S158>/Out1'
         */
        VePMDR_e_PowerMode_OtherSrc = CePMDR_e_PowerMode_Off;

        /* End of Outputs for SubSystem: '<S46>/both_ip_false_OFF' */
    }
    else if (rtb_TmpSignalConversionAtVePMDB_b_IgnR_h &&
             (PMDR_ac_B.VePMDR_b_RunCrankActiveAnalog))
    {
        /* Outputs for IfAction SubSystem: '<S46>/ip_diff_RUN' incorporates:
         *  ActionPort: '<S160>/Action Port'
         */
        /* Merge: '<S46>/Merge' incorporates:
         *  Constant: '<S163>/Constant'
         *  SignalConversion generated from: '<S160>/Out1'
         */
        VePMDR_e_PowerMode_OtherSrc = CePMDR_e_PowerMode_Run;

        /* End of Outputs for SubSystem: '<S46>/ip_diff_RUN' */
    }
    else
    {
        if ((PMDR_ac_B.VePMDR_b_RunCrankActiveAnalog) &&
                rtb_TmpSignalConversionAtVePMDR_b_StrtCn)
        {
            /* Outputs for IfAction SubSystem: '<S46>/both_ip_true_START' incorporates:
             *  ActionPort: '<S159>/Action Port'
             */
            /* Merge: '<S46>/Merge' incorporates:
             *  Constant: '<S162>/Constant'
             *  SignalConversion generated from: '<S159>/Out1'
             */
            VePMDR_e_PowerMode_OtherSrc = CePMDR_e_PowerMode_Crank;

            /* End of Outputs for SubSystem: '<S46>/both_ip_true_START' */
        }
    }

    /* End of If: '<S46>/If' */

    /* SignalConversion generated from: '<S46>/VePMDR_b_PowerMode_OtherSrcFA' */
    PMDR_ac_B.VePMDR_b_PowerMode_OtherSrcFA = false;

    /* S-Function (fcgen): '<S10>/FcnCallGen' incorporates:
     *  SubSystem: '<S10>/Dtrmn_PMM_PwrMd'
     */
    /* If: '<S42>/If' incorporates:
     *  Constant: '<S122>/Calib'
     *  Constant: '<S123>/Calib'
     *  Logic: '<S42>/Logical4'
     *  Logic: '<S42>/Logical5'
     *  Logic: '<S42>/Logical6'
     *  Logic: '<S42>/Logical7'
     */
    if (!VePMDR_b_PowerModeRawFA)
    {
        /* Outputs for IfAction SubSystem: '<S42>/PMM_PwrMd_CAN' incorporates:
         *  ActionPort: '<S134>/Action Port'
         */
        /* Merge: '<S42>/Merge' incorporates:
         *  Inport: '<S134>/VePMDR_e_PowerModeRaw'
         *  Switch: '<S45>/Switch'
         */
        rtb_Merge = VePMDR_e_PowerModeRaw;

        /* Merge: '<S42>/Merge1' incorporates:
         *  Constant: '<S134>/FALSE Constant'
         *  SignalConversion generated from: '<S134>/VePMDR_b_PMM_PowerModeFA'
         */
        rtb_TmpSignalConversionAtVePMDB_b_IgnR_h = false;

        /* Merge: '<S42>/Merge3' incorporates:
         *  Constant: '<S141>/Constant'
         *  SignalConversion generated from: '<S134>/Dbg'
         */
        VePMDR_e_PMMPowerModeSrc = CePMDR_e_PMMPowerMode_CAN;

        /* End of Outputs for SubSystem: '<S42>/PMM_PwrMd_CAN' */
    }
    else if (!VePMDR_b_IgnInputsPowerModeFA)
    {
        /* Outputs for IfAction SubSystem: '<S42>/PMM_PwrMd_HW' incorporates:
         *  ActionPort: '<S136>/Action Port'
         */
        /* Outputs for Function Call SubSystem: '<S10>/Calc_SigPwrMode' */
        /* Merge: '<S42>/Merge' incorporates:
         *  DataTypeConversion: '<S60>/DataTypeConversion'
         *  Inport: '<S136>/VePMDR_e_IgnInputsPowerMode'
         *  Switch: '<S40>/Switch10'
         */
        rtb_Merge = rtb_LePMDR_e_IgnInputsPowerMode;

        /* End of Outputs for SubSystem: '<S10>/Calc_SigPwrMode' */

        /* Merge: '<S42>/Merge1' incorporates:
         *  Constant: '<S136>/FALSE Constant'
         *  SignalConversion generated from: '<S136>/VePMDR_b_PMM_PowerModeFA'
         */
        rtb_TmpSignalConversionAtVePMDB_b_IgnR_h = false;

        /* Merge: '<S42>/Merge3' incorporates:
         *  Constant: '<S144>/Constant'
         *  SignalConversion generated from: '<S136>/Dbg'
         */
        VePMDR_e_PMMPowerModeSrc = CePMDR_e_PMMPowerMode_HW;

        /* End of Outputs for SubSystem: '<S42>/PMM_PwrMd_HW' */
    }
    else if ((!PMDR_ac_B.VePMDR_b_PowerMode_OtherSrcFA) &&
             (KePMDR_b_EnblPowerMode_Others))
    {
        /* Outputs for IfAction SubSystem: '<S42>/PMM_PwrMd_Other' incorporates:
         *  ActionPort: '<S138>/Action Port'
         */
        /* Merge: '<S42>/Merge' incorporates:
         *  Inport: '<S138>/VePMDR_e_IgnInputsPowerMode'
         *  Merge: '<S46>/Merge'
         */
        rtb_Merge = VePMDR_e_PowerMode_OtherSrc;

        /* Merge: '<S42>/Merge1' incorporates:
         *  Constant: '<S138>/FALSE Constant'
         *  SignalConversion generated from: '<S138>/VePMDR_b_PMM_PowerModeFA'
         */
        rtb_TmpSignalConversionAtVePMDB_b_IgnR_h = false;

        /* Merge: '<S42>/Merge3' incorporates:
         *  Constant: '<S146>/Constant'
         *  SignalConversion generated from: '<S138>/Dbg'
         */
        VePMDR_e_PMMPowerModeSrc = CePMDR_e_PMMPowerMode_Others;

        /* End of Outputs for SubSystem: '<S42>/PMM_PwrMd_Other' */
    }
    else if ((!VePMDC_b_IgnPwrModeFA_OneHWLine) &&
             (KePMDR_b_EnblPowerMode_OneHWLine))
    {
        /* Outputs for IfAction SubSystem: '<S42>/PMM_PwrMd_OneHWLine' incorporates:
         *  ActionPort: '<S137>/Action Port'
         */
        /* Merge: '<S42>/Merge' incorporates:
         *  Inport: '<S137>/VePMDC_e_IgnPwrMode_OneHWLine'
         *  Switch: '<S39>/Switch10'
         */
        rtb_Merge = VePMDC_e_IgnPwrMode_OneHWLine;

        /* Merge: '<S42>/Merge1' incorporates:
         *  Constant: '<S137>/FALSE Constant'
         *  SignalConversion generated from: '<S137>/VePMDR_b_PMM_PowerModeFA'
         */
        rtb_TmpSignalConversionAtVePMDB_b_IgnR_h = false;

        /* Merge: '<S42>/Merge3' incorporates:
         *  Constant: '<S145>/Constant'
         *  SignalConversion generated from: '<S137>/Dbg'
         */
        VePMDR_e_PMMPowerModeSrc = CePMDR_e_PMMPowerMode_OneHWLine;

        /* End of Outputs for SubSystem: '<S42>/PMM_PwrMd_OneHWLine' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S42>/PMM_PwrMd_Dflt' incorporates:
         *  ActionPort: '<S135>/Action Port'
         */
        /* Merge: '<S42>/Merge' incorporates:
         *  Constant: '<S143>/Constant'
         *  SignalConversion generated from: '<S135>/VePMDR_e_PowerModeRaw'
         */
        rtb_Merge = CePMDR_e_PowerMode_Off;

        /* Merge: '<S42>/Merge1' incorporates:
         *  Constant: '<S135>/TRUE Constant'
         *  SignalConversion generated from: '<S135>/VePMDR_b_PMM_PowerModeFA'
         */
        rtb_TmpSignalConversionAtVePMDB_b_IgnR_h = true;

        /* Merge: '<S42>/Merge3' incorporates:
         *  Constant: '<S142>/Constant'
         *  SignalConversion generated from: '<S135>/Dbg'
         */
        VePMDR_e_PMMPowerModeSrc = CePMDR_e_PMMPowerMode_Default;

        /* End of Outputs for SubSystem: '<S42>/PMM_PwrMd_Dflt' */
    }

    /* End of If: '<S42>/If' */

    /* Switch: '<S42>/Switch10' incorporates:
     *  Constant: '<S126>/Calib'
     */
    if (KePMDR_b_PMM_PowerModeOvrd)
    {
        /* Switch: '<S42>/Switch10' incorporates:
         *  Constant: '<S127>/Calib'
         */
        rtb_Merge = KePMDR_e_PMM_PowerModeVal;
    }

    /* End of Switch: '<S42>/Switch10' */

    /* RelationalOperator: '<S42>/Comparison10' incorporates:
     *  UnitDelay: '<S42>/Unit Delay2'
     */
    VePMDR_e_PMM_PowerModePrev = PMDR_ac_DW.UnitDelay2_DSTATE;

    /* Outputs for Atomic SubSystem: '<S42>/Signal Latch On With Reset' */
    /* Logic: '<S139>/OR1' incorporates:
     *  Constant: '<S107>/Constant'
     *  Constant: '<S116>/Constant'
     *  Constant: '<S117>/Constant'
     *  Constant: '<S118>/Constant'
     *  Logic: '<S139>/NOT'
     *  Logic: '<S139>/OR'
     *  Logic: '<S42>/Logical'
     *  Logic: '<S42>/Logical2'
     *  RelationalOperator: '<S42>/Comparison10'
     *  RelationalOperator: '<S42>/Comparison3'
     *  RelationalOperator: '<S42>/Comparison5'
     *  RelationalOperator: '<S42>/Comparison6'
     *  UnitDelay: '<S139>/Unit Delay'
     */
    PMDR_ac_DW.UnitDelay_DSTATE_oa = ((((((uint32)VePMDR_e_PMM_PowerModePrev) ==
        CePMDR_e_PowerMode_Off) || (((uint32)VePMDR_e_PMM_PowerModePrev) ==
        CePMDR_e_PowerMode_Acc)) && (((uint32)rtb_Merge) ==
        CePMDR_e_PowerMode_Run)) || ((((uint32)rtb_Merge) ==
        CePMDR_e_PowerMode_Run) && (PMDR_ac_DW.UnitDelay_DSTATE_oa)));

    /* End of Outputs for SubSystem: '<S42>/Signal Latch On With Reset' */

    /* Outputs for Atomic SubSystem: '<S42>/Signal Latch On With Reset1' */
    /* Logic: '<S140>/OR1' incorporates:
     *  Constant: '<S119>/Constant'
     *  Constant: '<S120>/Constant'
     *  Constant: '<S121>/Constant'
     *  Logic: '<S140>/NOT'
     *  Logic: '<S140>/OR'
     *  Logic: '<S42>/Logical1'
     *  RelationalOperator: '<S42>/Comparison7'
     *  RelationalOperator: '<S42>/Comparison8'
     *  RelationalOperator: '<S42>/Comparison9'
     *  UnitDelay: '<S140>/Unit Delay'
     */
    PMDR_ac_DW.UnitDelay_DSTATE_ld = (((((uint32)VePMDR_e_PMM_PowerModePrev) ==
        CePMDR_e_PowerMode_Crank) && (((uint32)rtb_Merge) ==
        CePMDR_e_PowerMode_Run)) || ((((uint32)rtb_Merge) ==
        CePMDR_e_PowerMode_Run) && (PMDR_ac_DW.UnitDelay_DSTATE_ld)));

    /* End of Outputs for SubSystem: '<S42>/Signal Latch On With Reset1' */

    /* If: '<S42>/If1' incorporates:
     *  Constant: '<S106>/Constant'
     *  Constant: '<S108>/Constant'
     *  Constant: '<S109>/Constant'
     *  Constant: '<S110>/Constant'
     *  Constant: '<S111>/Constant'
     *  Constant: '<S112>/Constant'
     *  Constant: '<S113>/Constant'
     *  Constant: '<S114>/Constant'
     *  Constant: '<S115>/Constant'
     *  RelationalOperator: '<S42>/Comparison1'
     *  RelationalOperator: '<S42>/Comparison2'
     *  RelationalOperator: '<S42>/Comparison4'
     *  UnitDelay: '<S139>/Unit Delay'
     */
    if (((uint32)rtb_Merge) == CePMDR_e_PowerMode_Off)
    {
        /* Outputs for IfAction SubSystem: '<S42>/Key_OFF' incorporates:
         *  ActionPort: '<S130>/Action Port'
         */
        PMDR_ac_Key_OFF(CePMDR_e_KeySt_Off, &PMDR_ac_B.VePMDR_e_KeyStatus);

        /* End of Outputs for SubSystem: '<S42>/Key_OFF' */
    }
    else if (((uint32)rtb_Merge) == CePMDR_e_PowerMode_Acc)
    {
        /* Outputs for IfAction SubSystem: '<S42>/Key_Acc' incorporates:
         *  ActionPort: '<S128>/Action Port'
         */
        PMDR_ac_Key_OFF(CePMDR_e_KeySt_Acc, &PMDR_ac_B.VePMDR_e_KeyStatus);

        /* End of Outputs for SubSystem: '<S42>/Key_Acc' */
    }
    else if (PMDR_ac_DW.UnitDelay_DSTATE_oa)
    {
        /* Outputs for IfAction SubSystem: '<S42>/Key_RunPreCrank' incorporates:
         *  ActionPort: '<S132>/Action Port'
         */
        PMDR_ac_Key_RunPreCrank(CePMDR_e_KeySt_RunPreCrank,
                                &PMDR_ac_B.VePMDR_e_KeyStatus);

        /* End of Outputs for SubSystem: '<S42>/Key_RunPreCrank' */
    }
    else if (((uint32)rtb_Merge) == CePMDR_e_PowerMode_Crank)
    {
        /* Outputs for IfAction SubSystem: '<S42>/Key_Crank' incorporates:
         *  ActionPort: '<S129>/Action Port'
         */
        PMDR_ac_Key_OFF(CePMDR_e_KeySt_Crank, &PMDR_ac_B.VePMDR_e_KeyStatus);

        /* End of Outputs for SubSystem: '<S42>/Key_Crank' */
    }
    else if (PMDR_ac_DW.UnitDelay_DSTATE_ld)
    {
        /* Outputs for IfAction SubSystem: '<S42>/Key_RunPostCrank' incorporates:
         *  ActionPort: '<S131>/Action Port'
         */
        PMDR_ac_Key_RunPreCrank(CePMDR_e_KeySt_RunPostCrank,
                                &PMDR_ac_B.VePMDR_e_KeyStatus);

        /* End of Outputs for SubSystem: '<S42>/Key_RunPostCrank' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S42>/Key_SNA' incorporates:
         *  ActionPort: '<S133>/Action Port'
         */
        PMDR_ac_Key_OFF(CePMDR_e_KeySt_SNA, &PMDR_ac_B.VePMDR_e_KeyStatus);

        /* End of Outputs for SubSystem: '<S42>/Key_SNA' */
    }

    /* End of If: '<S42>/If1' */

    /* Switch: '<S42>/Switch1' incorporates:
     *  Constant: '<S124>/Calib'
     */
    if (KePMDR_b_PMM_PowerModeFAOvrd)
    {
        /* Switch: '<S42>/Switch1' incorporates:
         *  Constant: '<S125>/Calib'
         */
        rtb_TmpSignalConversionAtVePMDB_b_IgnR_h = KePMDR_b_PMM_PowerModeFAVal;
    }

    /* End of Switch: '<S42>/Switch1' */

    /* Update for UnitDelay: '<S42>/Unit Delay2' incorporates:
     *  Switch: '<S42>/Switch10'
     */
    PMDR_ac_DW.UnitDelay2_DSTATE = rtb_Merge;

    /* S-Function (fcgen): '<S10>/FcnCallGen' incorporates:
     *  SubSystem: '<S10>/HCP_PTCrankActv'
     */
    /* RelationalOperator: '<S44>/Comparison4' incorporates:
     *  Inport: '<Root>/VeHPMR_b_PropSysActv'
     *  Logic: '<S44>/Logical'
     *  Logic: '<S44>/Logical2'
     *  SignalConversion generated from: '<S44>/Variant Source'
     * */
#if Rte_SysCon_Variant_PMDR_1

    /* Outputs for Atomic SubSystem: '<S44>/Count Down  Reset Trigger Enabled' */
    /* RelationalOperator: '<S44>/Comparison4' incorporates:
     *  Constant: '<S153>/Constant'
     */
    rtb_AND_kc = (((uint32)VePMDR_e_PowerModeRaw) == CePMDR_e_PowerMode_Crank);

    /* Outputs for Atomic SubSystem: '<S151>/EdgeRising' */
    /* Logic: '<S155>/OR1' incorporates:
     *  UnitDelay: '<S155>/Unit Delay'
     */
    rtb_Comparison5_li = !PMDR_ac_DW.UnitDelay_DSTATE_i5;

    /* Update for UnitDelay: '<S155>/Unit Delay' */
    PMDR_ac_DW.UnitDelay_DSTATE_i5 = rtb_AND_kc;

    /* Switch: '<S151>/Switch1' incorporates:
     *  Constant: '<S151>/Constant Value'
     *  Constant: '<S154>/Calib'
     *  Logic: '<S151>/AND'
     *  Logic: '<S155>/AND'
     *  RelationalOperator: '<S151>/Greater  Than'
     *  Switch: '<S151>/Switch2'
     *  UnitDelay: '<S151>/Unit Delay'
     */
    if (rtb_AND_kc && rtb_Comparison5_li)
    {
        PMDR_ac_DW.UnitDelay_DSTATE_k3 = KePMDR_Cnt_HCPCrnkActvTout;
    }
    else
    {
        if (rtb_AND_kc && (((sint32)PMDR_ac_DW.UnitDelay_DSTATE_k3) > 0))
        {
            /* UnitDelay: '<S151>/Unit Delay' incorporates:
             *  Constant: '<S151>/Constant Value1'
             *  Sum: '<S151>/Subtraction'
             *  Switch: '<S151>/Switch2'
             */
            PMDR_ac_DW.UnitDelay_DSTATE_k3 = (uint16)((sint32)(((sint32)
                PMDR_ac_DW.UnitDelay_DSTATE_k3) - 1));
        }
    }

    /* End of Switch: '<S151>/Switch1' */
    /* End of Outputs for SubSystem: '<S151>/EdgeRising' */

    /* RelationalOperator: '<S151>/Greater  Than1' incorporates:
     *  Constant: '<S151>/Constant Value2'
     *  UnitDelay: '<S151>/Unit Delay'
     */
    VePMDR_b_HCP_CrankActvTout = (((sint32)PMDR_ac_DW.UnitDelay_DSTATE_k3) > 0);
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value
        (&rtb_VariantMerge_For_Variant_Source_Vari);

    /* Logic: '<S44>/Logical' incorporates:
     *  Inport: '<Root>/VeHPMR_b_PropSysActv'
     */
    VePMDR_b_HCPCrankActv = ((rtb_AND_kc && (VePMDR_b_HCP_CrankActvTout)) &&
        (!rtb_VariantMerge_For_Variant_Source_Vari));

    /* VariantMerge generated from: '<S44>/Variant Source' */
    rtb_VariantMerge_For_Variant_Source_Vari = VePMDR_b_HCPCrankActv;

    /* End of Outputs for SubSystem: '<S44>/Count Down  Reset Trigger Enabled' */
#else

    /* VariantMerge generated from: '<S44>/Variant Source' incorporates:
     *  SignalConversion generated from: '<S44>/Variant Source'
     */
    rtb_VariantMerge_For_Variant_Source_Vari =
        rtb_TmpSignalConversionAtVePMDR_b_StrtCn;

#endif

    /* End of RelationalOperator: '<S44>/Comparison4' */

    /* S-Function (fcgen): '<S10>/FcnCallGen' incorporates:
     *  SubSystem: '<S10>/EngOffRq'
     */
    /* If: '<S43>/If' incorporates:
     *  Constant: '<S149>/Calib'
     *  Logic: '<S43>/Logical1'
     *  Merge: '<Root>/Merge_26'
     *  Merge: '<Root>/Merge_29'
     *  SignalConversion generated from: '<S10>/VePMDR_b_EngOffRq_C2FA_read'
     *  SignalConversion generated from: '<S10>/VePMDR_b_EngOffRq_CFA_read'
     */
    if (!Rte_IrvRead_PMDR_MedTEB_VePMDR_b_EngOffRq_CFA_write_IRV())
    {
        /* Outputs for IfAction SubSystem: '<S43>/CANC_EngOffRq' incorporates:
         *  ActionPort: '<S148>/Action Port'
         */
        /* Merge: '<S43>/Merge' incorporates:
         *  Inport: '<S148>/VePMDR_b_EngOffReq_C_In'
         *  Merge: '<Root>/Merge_20'
         *  SignalConversion generated from: '<S10>/VePMDR_b_EngOffRq_C_read'
         */
        PMDR_ac_B.VePMDR_b_EngineOffRequest =
            Rte_IrvRead_PMDR_MedTEB_VePMDR_b_EngOffReq_C_Init_write_IRV();

        /* Merge: '<S43>/Merge1' incorporates:
         *  Constant: '<S148>/Constant Value'
         *  SignalConversion generated from: '<S148>/Debug'
         */
        VePMDR_e_EngOffRq_CANSrc = 1;

        /* End of Outputs for SubSystem: '<S43>/CANC_EngOffRq' */
    }
    else
    {
        if ((!Rte_IrvRead_PMDR_MedTEB_VePMDR_b_EngOffRq_C2FA_write_IRV()) &&
                (!KePMDR_b_Ovrd_EngOffRqFA_CANC2))
        {
            /* Outputs for IfAction SubSystem: '<S43>/CANC2_EngOffRq' incorporates:
             *  ActionPort: '<S147>/Action Port'
             */
            /* Merge: '<S43>/Merge' incorporates:
             *  Inport: '<S147>/VePMDR_b_EngOffReq_C2_In'
             *  Merge: '<Root>/Merge_24'
             *  SignalConversion generated from: '<S10>/VePMDR_b_EngOffRq_C2_read'
             */
            PMDR_ac_B.VePMDR_b_EngineOffRequest =
                Rte_IrvRead_PMDR_MedTEB_VePMDR_b_EngOffReq_C2_Init_write_IRV();

            /* Merge: '<S43>/Merge1' incorporates:
             *  Constant: '<S147>/Constant Value'
             *  SignalConversion generated from: '<S147>/Debug'
             */
            VePMDR_e_EngOffRq_CANSrc = 2;

            /* End of Outputs for SubSystem: '<S43>/CANC2_EngOffRq' */
        }
    }

    /* End of If: '<S43>/If' */
    /* End of Outputs for S-Function (fcgen): '<S10>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VePMDB_b_OBCMWup' */
    (void)Rte_Read_VePMDB_b_OBCMWup_Value(&tmpRead_0);

    /* Inport: '<Root>/VePMDB_b_EStop' */
    (void)Rte_Read_VePMDB_b_EStop_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/PMDR_MedTEB'
     */
    /* S-Function (fcgen): '<S10>/FcnCallGen' incorporates:
     *  SubSystem: '<S10>/Subsystem'
     */
    /* Outport: '<Root>/VePMDR_b_EStop' incorporates:
     *  Inport: '<S48>/VePMDB_b_EStop'
     *  SignalConversion generated from: '<S10>/Out2'
     */
    (void)Rte_Write_VePMDR_b_EStop_Value(tmpRead);

    /* Outport: '<Root>/VePMDR_b_IgnRunCrnk' incorporates:
     *  Inport: '<S48>/VePMDB_b_IgnRunCrnk'
     *  SignalConversion generated from: '<S10>/Outport'
     */
    (void)Rte_Write_VePMDR_b_IgnRunCrnk_Value
        (rtb_TmpSignalConversionAtVePMDB_b_IgnRun);

    /* Outport: '<Root>/VePMDR_U_IgnRunCrnk' incorporates:
     *  Inport: '<S48>/VePMDB_U_IgnRunCrnk'
     *  SignalConversion generated from: '<S10>/Outport1'
     */
    (void)Rte_Write_VePMDR_U_IgnRunCrnk_Value
        (rtb_TmpSignalConversionAtVePMDB_U_IgnRun);

    /* Outport: '<Root>/VePMDR_b_OBCMWupFA' incorporates:
     *  Constant: '<S10>/Constant2'
     *  Inport: '<S48>/VePMDR_b_OBCMWupFA'
     *  SignalConversion generated from: '<S10>/Outport2'
     */
    (void)Rte_Write_VePMDR_b_OBCMWupFA_Value(false);

    /* Outport: '<Root>/VePMDR_b_OBCMWup' incorporates:
     *  Inport: '<S48>/VePMDB_b_OBCMWup'
     *  SignalConversion generated from: '<S10>/Outport3'
     */
    (void)Rte_Write_VePMDR_b_OBCMWup_Value(tmpRead_0);

    /* End of Outputs for S-Function (fcgen): '<S10>/FcnCallGen' */

    /* Outport: '<Root>/VePMDR_e_PowerModeRaw' incorporates:
     *  SignalConversion generated from: '<S10>/VePMDI_e_PowerModeRaw'
     *  Switch: '<S45>/Switch'
     */
    (void)Rte_Write_VePMDR_e_PowerModeRaw_Value(VePMDR_e_PowerModeRaw);

    /* Outport: '<Root>/VePMDR_b_AccRunActiveAnalog' incorporates:
     *  SignalConversion generated from: '<S10>/VePMDR_b_AccRunActiveAnalog'
     */
    (void)Rte_Write_VePMDR_b_AccRunActiveAnalog_Value
        (PMDR_ac_B.VePMDR_b_AccRunActiveAnalog);

    /* Outport: '<Root>/VePMDR_b_EngineOffRequest' incorporates:
     *  SignalConversion generated from: '<S10>/VePMDR_b_EngineOffRequest'
     */
    (void)Rte_Write_VePMDR_b_EngineOffRequest_Value
        (PMDR_ac_B.VePMDR_b_EngineOffRequest);

    /* Outport: '<Root>/VePMDR_b_PMM_PowerModeFA' incorporates:
     *  SignalConversion generated from: '<S10>/VePMDR_b_PMM_PowerModeFA'
     */
    (void)Rte_Write_VePMDR_b_PMM_PowerModeFA_Value
        (rtb_TmpSignalConversionAtVePMDB_b_IgnR_h);

    /* Outport: '<Root>/VePMDR_b_PowerModeRawFA' incorporates:
     *  SignalConversion generated from: '<S10>/VePMDR_b_PowerModeRawFA'
     */
    (void)Rte_Write_VePMDR_b_PowerModeRawFA_Value(VePMDR_b_PowerModeRawFA);

    /* Outport: '<Root>/VePMDR_b_RunCrankActive' incorporates:
     *  SignalConversion generated from: '<S10>/VePMDR_b_RunCrankActive'
     */
    (void)Rte_Write_VePMDR_b_RunCrankActive_Value(VePMDC_b_RunActive);

    /* Outport: '<Root>/VePMDR_b_RunCrankActiveAnalog' incorporates:
     *  SignalConversion generated from: '<S10>/VePMDR_b_RunCrankActiveAnalog'
     */
    (void)Rte_Write_VePMDR_b_RunCrankActiveAnalog_Value
        (PMDR_ac_B.VePMDR_b_RunCrankActiveAnalog);

    /* S-Function (fcgen): '<S10>/FcnCallGen' incorporates:
     *  SubSystem: '<S10>/HCP_PTCrankActv'
     */
    /* Outport: '<Root>/VePMDR_b_StrtCntrlStOn' incorporates:
     *  Logic: '<S150>/AND'
     *  SignalConversion generated from: '<S10>/VePMDR_b_StrtCntrlStOn'
     */
    (void)Rte_Write_VePMDR_b_StrtCntrlStOn_Value
        (rtb_VariantMerge_For_Variant_Source_Vari);

    /* S-Function (fcgen): '<S10>/FcnCallGen' incorporates:
     *  SubSystem: '<S10>/Calc_SigPwrMode'
     */
    /* Outport: '<Root>/VePMDR_e_IgnInputsPowerMode' incorporates:
     *  DataTypeConversion: '<S60>/DataTypeConversion'
     *  SignalConversion generated from: '<S10>/VePMDR_e_IgnInputsPowerMode'
     *  Switch: '<S40>/Switch10'
     */
    (void)Rte_Write_VePMDR_e_IgnInputsPowerMode_Value
        (rtb_LePMDR_e_IgnInputsPowerMode);

    /* End of Outputs for S-Function (fcgen): '<S10>/FcnCallGen' */

    /* Outport: '<Root>/VePMDR_e_KeyStatus' incorporates:
     *  Merge: '<S42>/Merge2'
     *  SignalConversion generated from: '<S10>/VePMDR_e_KeyStatus'
     */
    (void)Rte_Write_VePMDR_e_KeyStatus_Value(PMDR_ac_B.VePMDR_e_KeyStatus);

    /* Outport: '<Root>/VePMDR_e_PMM_PowerMode' incorporates:
     *  SignalConversion generated from: '<S10>/VePMDR_e_PMM_PowerMode'
     *  Switch: '<S42>/Switch10'
     */
    (void)Rte_Write_VePMDR_e_PMM_PowerMode_Value(rtb_Merge);

    /* Outport: '<Root>/VePMDR_t_RunCrankActive' incorporates:
     *  SignalConversion generated from: '<S10>/VePMDR_t_RunCrankActive'
     *  UnitDelay: '<S175>/Unit Delay'
     */
    (void)Rte_Write_VePMDR_t_RunCrankActive_Value(PMDR_ac_DW.UnitDelay_DSTATE_c);

    /* Merge: '<Root>/VePMDI_e_PowerModeRaw_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S10>/VePMDI_e_PowerModeRaw_write'
     *  Switch: '<S45>/Switch'
     * */
    Rte_IrvWrite_PMDR_MedTEB_VePMDI_e_PowerModeRaw_write_IRV
        (VePMDR_e_PowerModeRaw);

    /* Merge: '<Root>/VePMDR_b_AccRunActiveAnalog_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S10>/VePMDR_b_AccRunActiveAnalog_write'
     * */
    Rte_IrvWrite_PMDR_MedTEB_VePMDR_b_AccRunActiveAnalog_write_IRV
        (PMDR_ac_B.VePMDR_b_AccRunActiveAnalog);

    /* Merge: '<Root>/VePMDR_b_PMM_PowerModeFA_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S10>/VePMDR_b_PMM_PowerModeFA_write'
     * */
    Rte_IrvWrite_PMDR_MedTEB_VePMDR_b_PMM_PowerModeFA_write_IRV
        (rtb_TmpSignalConversionAtVePMDB_b_IgnR_h);

    /* Merge: '<Root>/VePMDR_b_PowerModeRawDigitalFA_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S10>/VePMDR_b_PowerModeRawFA_write'
     * */
    Rte_IrvWrite_PMDR_MedTEB_VePMDR_b_PowerModeRawFA_write1_IRV
        (VePMDR_b_PowerModeRawFA);

    /* Merge: '<Root>/VePMDR_b_RunCrankActiveAnalog_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S10>/VePMDR_b_RunCrankActiveAnalog_write'
     * */
    Rte_IrvWrite_PMDR_MedTEB_VePMDR_b_RunCrankActiveAnalog_write_IRV
        (PMDR_ac_B.VePMDR_b_RunCrankActiveAnalog);

    /* Merge: '<Root>/VePMDR_b_RunCrankActive_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S10>/VePMDR_b_RunCrankActive_write'
     * */
    Rte_IrvWrite_PMDR_MedTEB_VePMDR_b_RunCrankActive_write_IRV
        (VePMDC_b_RunActive);

    /* Merge: '<Root>/VePMDR_e_PMM_PowerMode_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S10>/VePMDR_e_PMM_PowerMode_write'
     *  Switch: '<S42>/Switch10'
     * */
    Rte_IrvWrite_PMDR_MedTEB_VePMDR_e_PMM_PowerMode_write_IRV(rtb_Merge);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Model step function for TID2 */
FUNC(void, PMDR_CODE) PMDR_MedTEB1(void) /* Explicit Task: MedTEB1 */
{
    /* (no output/update code required) */
}

/* Model step function for TID3 */
FUNC(void, PMDR_CODE) PMDR_MedTED(void) /* Explicit Task: MedTED */
{
    TeESSR_e_EngStrtType tmpRead;

#if Rte_SysCon_Variant_PMDR_10 || Rte_SysCon_Variant_PMDR_12

    boolean rtb_TmpSignalConversionAtVePMDR_b_RunCrn;

#endif

#if Rte_SysCon_Variant_PMDR_10 || Rte_SysCon_Variant_PMDR_12

    boolean rtb_TmpSignalConversionAtVePMDR_b_RunC_g;

#endif

#if Rte_SysCon_Variant_PMDR_11 || Rte_SysCon_Variant_PMDR_12

    boolean rtb_TmpSignalConversionAtVePMDR_b_RunCra;

#endif

#if Rte_SysCon_Variant_PMDR_12

    boolean rtb_TmpSignalConversionAtVePMDR_b_PMM_Po;

#endif

    boolean rtb_TmpSignalConversionAtVePMDR_b_AccRun;
    boolean rtb_TmpSignalConversionAtVePMDR_b_PowerM;

#if Rte_SysCon_Variant_PMDR_10

    boolean rtb_TmpSignalConversionAtVePMDR_b_PAD_Ac;

#endif

#if Rte_SysCon_Variant_PMDR_10

    boolean rtb_TmpSignalConversionAtVePMDR_b_PAD__b;

#endif

    boolean rtb_TmpSignalConversionAtVePMDR_b_RunC_i;

#if Rte_SysCon_Variant_PMDR_8

    float32 rtb_TmpSignalConversionAtVePMDR_U_HBSpar;

#endif

#if Rte_SysCon_Variant_PMDR_6

    float32 rtb_TmpSignalConversionAtVePMDR_U_BF3_Sy;

#endif

#if (!(!Rte_SysCon_Variant_PMDR_9) && Rte_SysCon_Variant_PMDR_12) || (!Rte_SysCon_Variant_PMDR_9 && Rte_SysCon_Variant_PMDR_12)

    boolean rtb_VePMDR_b_RunCrnkActvECMFA_write_IRV;

#endif

#if Rte_SysCon_Variant_PMDR_12

    boolean rtb_VePMDR_b_RunCrnkActvECM_write_IRV;

#endif

#if Rte_SysCon_Variant_PMDR_12

    boolean rtb_VePMDR_b_PowerModeRawFA_write1_IRV;

#endif

    boolean rtb_TmpSignalConversionAtVeDFIR_b_DiagSy;
    boolean rtb_TmpSignalConversionAtVeDFIR_b_DsblDi;
    boolean rtb_TmpSignalConversionAtVeDFIR_b_PostCo;

#if Rte_SysCon_Variant_PMDR_4 || Rte_SysCon_Variant_PMDR_5 || Rte_SysCon_Variant_PMDR_6 || Rte_SysCon_Variant_PMDR_7 || Rte_SysCon_Variant_PMDR_8

    boolean rtb_NOT4;

#endif

    float32 rtb_TmpSignalConversionAtVePMDB_U_BF1_Sy;
    float32 rtb_TmpSignalConversionAtVePMDB_U_BF2_Sy;
    float32 rtb_TmpSignalConversionAtVePMDB_U_HB_Sys;
    boolean rtb_Logical_o;
    boolean rtb_NOT4_h;
    boolean rtb_TmpSignalConversionAtVeDFIR_b_IsDiag;

#if Rte_SysCon_Variant_PMDR_10

    boolean rtb_AND_bu;

#endif

#if Rte_SysCon_Variant_PMDR_10

    boolean rtb_Logical5_mg;

#endif

#if Rte_SysCon_Variant_PMDR_12 || Rte_SysCon_Variant_PMDR_6 || Rte_SysCon_Variant_PMDR_7 || Rte_SysCon_Variant_PMDR_8

    boolean rtb_Comparison2_ap;

#endif

#if Rte_SysCon_Variant_PMDR_12 || Rte_SysCon_Variant_PMDR_8

    boolean rtb_Logical9;

#endif

#if Rte_SysCon_Variant_PMDR_11

    boolean rtb_Logical5_b3;

#endif

#if Rte_SysCon_Variant_PMDR_11

    boolean rtb_AND_mk;

#endif

#if Rte_SysCon_Variant_PMDR_10

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Sta_c5;

#endif

#if Rte_SysCon_Variant_PMDR_10

    boolean rtb_AND_pv;

#endif

#if Rte_SysCon_Variant_PMDR_10

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_b;

#endif

#if Rte_SysCon_Variant_PMDR_12

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_n;

#endif

#if Rte_SysCon_Variant_PMDR_11

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_l;

#endif

#if Rte_SysCon_Variant_PMDR_11

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Sta_pt;

#endif

#if Rte_SysCon_Variant_PMDR_12

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Status;

#endif

#if Rte_SysCon_Variant_PMDR_4 || Rte_SysCon_Variant_PMDR_5 || Rte_SysCon_Variant_PMDR_6 || Rte_SysCon_Variant_PMDR_7 || Rte_SysCon_Variant_PMDR_8

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_m;

#endif

#if Rte_SysCon_Variant_PMDR_4 || Rte_SysCon_Variant_PMDR_5 || Rte_SysCon_Variant_PMDR_6 || Rte_SysCon_Variant_PMDR_7 || Rte_SysCon_Variant_PMDR_8

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_p;

#endif

    TePMDR_e_PowerMode rtb_TmpSignalConversionAtVePMDR_e_PMM_Po;

#if Rte_SysCon_Variant_PMDR_10 || Rte_SysCon_Variant_PMDR_11 || Rte_SysCon_Variant_PMDR_12

    TePMDR_e_PowerMode rtb_TmpSignalConversionAtVePMDI_e_PowerM;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/PMDR_MedTED'
     */
    /* SignalConversion generated from: '<S12>/VePMDB_U_BF2_SysVolt' incorporates:
     *  Inport: '<Root>/VePMDB_U_BF2_SysVolt'
     */
    (void)Rte_Read_VePMDB_U_BF2_SysVolt_Value
        (&rtb_TmpSignalConversionAtVePMDB_U_BF2_Sy);

    /* SignalConversion generated from: '<S12>/VePMDB_U_BF1_SysVolt' incorporates:
     *  Inport: '<Root>/VePMDB_U_BF1_SysVolt'
     */
    (void)Rte_Read_VePMDB_U_BF1_SysVolt_Value
        (&rtb_TmpSignalConversionAtVePMDB_U_BF1_Sy);

    /* SignalConversion generated from: '<S12>/VePMDB_U_HB_SysVolt' incorporates:
     *  Inport: '<Root>/VePMDB_U_HB_SysVolt'
     */
    (void)Rte_Read_VePMDB_U_HB_SysVolt_Value
        (&rtb_TmpSignalConversionAtVePMDB_U_HB_Sys);

    /* SignalConversion generated from: '<S12>/VePMDR_b_RunCrnkActvECMFA_read' incorporates:
     *  SignalConversion generated from: '<S12>/VePMDR_b_RunCrnkActvECM_read'
     */
#if Rte_SysCon_Variant_PMDR_10 || Rte_SysCon_Variant_PMDR_12

    /* SignalConversion generated from: '<S12>/VePMDR_b_RunCrnkActvECMFA_read' incorporates:
     *  Merge: '<Root>/Merge_3_Irv'
     */
    rtb_TmpSignalConversionAtVePMDR_b_RunCrn =
        Rte_IrvRead_PMDR_MedTED_VePMDR_b_RunCrnkActvECMFA_write_IRV();

    /* SignalConversion generated from: '<S12>/VePMDR_b_RunCrnkActvECM_read' incorporates:
     *  Merge: '<Root>/Merge_11_Irv'
     */
    rtb_TmpSignalConversionAtVePMDR_b_RunC_g =
        Rte_IrvRead_PMDR_MedTED_VePMDR_b_RunCrnkActvECM_write_IRV();

#endif

    /* End of SignalConversion generated from: '<S12>/VePMDR_b_RunCrnkActvECMFA_read' */

    /* SignalConversion generated from: '<S12>/VePMDR_b_RunCrankActiveAnalog_Read' incorporates:
     *  SignalConversion generated from: '<S12>/VePMDR_b_PMM_PowerModeFA_Read'
     */
#if Rte_SysCon_Variant_PMDR_12

    /* SignalConversion generated from: '<S12>/VePMDR_b_RunCrankActiveAnalog_Read' incorporates:
     *  Merge: '<Root>/VePMDR_b_RunCrankActiveAnalog_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVePMDR_b_RunCra =
        Rte_IrvRead_PMDR_MedTED_VePMDR_b_RunCrankActiveAnalog_write_IRV();

    /* SignalConversion generated from: '<S12>/VePMDR_b_PMM_PowerModeFA_Read' incorporates:
     *  Merge: '<Root>/VePMDR_b_PMM_PowerModeFA_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVePMDR_b_PMM_Po =
        Rte_IrvRead_PMDR_MedTED_VePMDR_b_PMM_PowerModeFA_write_IRV();

#endif

    /* End of SignalConversion generated from: '<S12>/VePMDR_b_RunCrankActiveAnalog_Read' */

    /* SignalConversion generated from: '<S12>/VePMDR_e_PMM_PowerMode_Read' incorporates:
     *  Merge: '<Root>/VePMDR_e_PMM_PowerMode_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVePMDR_e_PMM_Po =
        Rte_IrvRead_PMDR_MedTED_VePMDR_e_PMM_PowerMode_write_IRV();

    /* SignalConversion generated from: '<S12>/VeDFIR_b_DsblDiagFailSafe' incorporates:
     *  SignalConversion generated from: '<S12>/VeDFIR_b_PostCodeClrDiagDsbl'
     */
#if Rte_SysCon_Variant_PMDR_10 || Rte_SysCon_Variant_PMDR_11 || Rte_SysCon_Variant_PMDR_12 || Rte_SysCon_Variant_PMDR_4 || Rte_SysCon_Variant_PMDR_5 || Rte_SysCon_Variant_PMDR_6 || Rte_SysCon_Variant_PMDR_7 || Rte_SysCon_Variant_PMDR_8

    /* SignalConversion generated from: '<S12>/VeDFIR_b_DsblDiagFailSafe' incorporates:
     *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
     */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_DsblDi);

    /* SignalConversion generated from: '<S12>/VeDFIR_b_PostCodeClrDiagDsbl' incorporates:
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

#endif

    /* End of SignalConversion generated from: '<S12>/VeDFIR_b_DsblDiagFailSafe' */

    /* SignalConversion generated from: '<S12>/VePMDI_e_PowerModeRaw_Read' */
#if Rte_SysCon_Variant_PMDR_10 || Rte_SysCon_Variant_PMDR_11 || Rte_SysCon_Variant_PMDR_12

    /* SignalConversion generated from: '<S12>/VePMDI_e_PowerModeRaw_Read' incorporates:
     *  Merge: '<Root>/VePMDI_e_PowerModeRaw_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVePMDI_e_PowerM =
        Rte_IrvRead_PMDR_MedTED_VePMDI_e_PowerModeRaw_write_IRV();

#endif

    /* End of SignalConversion generated from: '<S12>/VePMDI_e_PowerModeRaw_Read' */

    /* SignalConversion generated from: '<S12>/VePMDR_b_PowerModeRawDigitalFA_Read' */
#if Rte_SysCon_Variant_PMDR_10 || Rte_SysCon_Variant_PMDR_11 || (Rte_SysCon_Variant_PMDR_12 && Rte_SysCon_Variant_PMDR_9)

    /* SignalConversion generated from: '<S12>/VePMDR_b_PowerModeRawDigitalFA_Read' incorporates:
     *  Merge: '<Root>/VePMDR_b_PowerModeRawDigitalFA_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVePMDR_b_PowerM =
        Rte_IrvRead_PMDR_MedTED_VePMDR_b_PowerModeRawFA_write1_IRV();

#endif

    /* End of SignalConversion generated from: '<S12>/VePMDR_b_PowerModeRawDigitalFA_Read' */

    /* SignalConversion generated from: '<S12>/VePMDR_b_AccRunActiveAnalog_Read' */
#if Rte_SysCon_Variant_PMDR_10 || Rte_SysCon_Variant_PMDR_11

    /* SignalConversion generated from: '<S12>/VePMDR_b_AccRunActiveAnalog_Read' incorporates:
     *  Merge: '<Root>/VePMDR_b_AccRunActiveAnalog_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVePMDR_b_AccRun =
        Rte_IrvRead_PMDR_MedTED_VePMDR_b_AccRunActiveAnalog_write_IRV();

#endif

    /* End of SignalConversion generated from: '<S12>/VePMDR_b_AccRunActiveAnalog_Read' */

    /* SignalConversion generated from: '<S12>/VePMDR_b_PAD_Actv_read' incorporates:
     *  SignalConversion generated from: '<S12>/VePMDR_b_PAD_ActvFA_read'
     */
#if Rte_SysCon_Variant_PMDR_10

    /* SignalConversion generated from: '<S12>/VePMDR_b_PAD_Actv_read' incorporates:
     *  Merge: '<Root>/Merge_27'
     */
    rtb_TmpSignalConversionAtVePMDR_b_PAD_Ac =
        Rte_IrvRead_PMDR_MedTED_VePMDR_b_PAD_Actv_Init_write_IRV();

    /* SignalConversion generated from: '<S12>/VePMDR_b_PAD_ActvFA_read' incorporates:
     *  Merge: '<Root>/Merge_28'
     */
    rtb_TmpSignalConversionAtVePMDR_b_PAD__b =
        Rte_IrvRead_PMDR_MedTED_VePMDR_b_PAD_ActvFA_write_IRV();

#endif

    /* End of SignalConversion generated from: '<S12>/VePMDR_b_PAD_Actv_read' */

    /* SignalConversion generated from: '<S12>/VeDFIR_b_IsDiagGlobalConditionsValid' */
#if Rte_SysCon_Variant_PMDR_10 || Rte_SysCon_Variant_PMDR_11 || Rte_SysCon_Variant_PMDR_12

    /* SignalConversion generated from: '<S12>/VeDFIR_b_IsDiagGlobalConditionsValid' incorporates:
     *  Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid'
     */
    (void)Rte_Read_VeDFIR_b_IsDiagGlobalConditionsValid_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_IsDiag);

#endif

    /* End of SignalConversion generated from: '<S12>/VeDFIR_b_IsDiagGlobalConditionsValid' */

    /* SignalConversion generated from: '<S12>/VeDMAB_y_StatusByte_IgnSwRunCrnkPstnCktLo' incorporates:
     *  SignalConversion generated from: '<S12>/VeDMAB_y_StatusByte_IgnSwRunCrnkPstnCktHi'
     */
#if Rte_SysCon_Variant_PMDR_12

    /* SignalConversion generated from: '<S12>/VeDMAB_y_StatusByte_IgnSwRunCrnkPstnCktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_IgnSwRunCrnkPstnCktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_IgnSwRunCrnkPstnCktLo_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Status);

    /* SignalConversion generated from: '<S12>/VeDMAB_y_StatusByte_IgnSwRunCrnkPstnCktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_IgnSwRunCrnkPstnCktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_IgnSwRunCrnkPstnCktHi_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_n);

#endif

    /* End of SignalConversion generated from: '<S12>/VeDMAB_y_StatusByte_IgnSwRunCrnkPstnCktLo' */

    /* SignalConversion generated from: '<S12>/VeDMAB_y_StatusByte_IgnSwAccPstnCktLo' incorporates:
     *  SignalConversion generated from: '<S12>/VeDMAB_y_StatusByte_IgnSwAccPstnCktHi'
     */
#if Rte_SysCon_Variant_PMDR_10

    /* SignalConversion generated from: '<S12>/VeDMAB_y_StatusByte_IgnSwAccPstnCktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_IgnSwAccPstnCktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_IgnSwAccPstnCktLo_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_b);

    /* SignalConversion generated from: '<S12>/VeDMAB_y_StatusByte_IgnSwAccPstnCktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_IgnSwAccPstnCktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_IgnSwAccPstnCktHi_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Sta_c5);

#endif

    /* End of SignalConversion generated from: '<S12>/VeDMAB_y_StatusByte_IgnSwAccPstnCktLo' */

    /* SignalConversion generated from: '<S12>/VeDMAB_y_StatusByte_IgnSwRunPstnCktLo' incorporates:
     *  SignalConversion generated from: '<S12>/VeDMAB_y_StatusByte_IgnSwRunPstnCktHi'
     */
#if Rte_SysCon_Variant_PMDR_11

    /* SignalConversion generated from: '<S12>/VeDMAB_y_StatusByte_IgnSwRunPstnCktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_IgnSwRunPstnCktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_IgnSwRunPstnCktLo_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Sta_pt);

    /* SignalConversion generated from: '<S12>/VeDMAB_y_StatusByte_IgnSwRunPstnCktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_IgnSwRunPstnCktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_IgnSwRunPstnCktHi_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_l);

#endif

    /* End of SignalConversion generated from: '<S12>/VeDMAB_y_StatusByte_IgnSwRunPstnCktLo' */

    /* SignalConversion generated from: '<S12>/VePMDR_b_RunCrankActive_Read' incorporates:
     *  Merge: '<Root>/VePMDR_b_RunCrankActive_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVePMDR_b_RunC_i =
        Rte_IrvRead_PMDR_MedTED_VePMDR_b_RunCrankActive_write_IRV();

    /* SignalConversion generated from: '<S12>/VeDFIR_b_DiagSystemDsbl' incorporates:
     *  Inport: '<Root>/VeDFIR_b_DiagSystemDsbl'
     */
    (void)Rte_Read_VeDFIR_b_DiagSystemDsbl_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_DiagSy);

    /* SignalConversion generated from: '<S12>/VePMDR_U_HBSpare_SysVolt_read' */
#if Rte_SysCon_Variant_PMDR_8

    /* SignalConversion generated from: '<S12>/VePMDR_U_HBSpare_SysVolt_read' incorporates:
     *  Merge: '<Root>/Merge_25_Irv'
     */
    rtb_TmpSignalConversionAtVePMDR_U_HBSpar =
        Rte_IrvRead_PMDR_MedTED_VePMDR_U_HBSpare_SysVolt_write_IRV();

#endif

    /* End of SignalConversion generated from: '<S12>/VePMDR_U_HBSpare_SysVolt_read' */

    /* SignalConversion generated from: '<S12>/VePMDR_U_BF3_SysVolt_read' */
#if Rte_SysCon_Variant_PMDR_6

    /* SignalConversion generated from: '<S12>/VePMDR_U_BF3_SysVolt_read' incorporates:
     *  Merge: '<Root>/Merge_23_Irv'
     */
    rtb_TmpSignalConversionAtVePMDR_U_BF3_Sy =
        Rte_IrvRead_PMDR_MedTED_VePMDR_U_BF3_SysVolt_write_IRV();

#endif

    /* End of SignalConversion generated from: '<S12>/VePMDR_U_BF3_SysVolt_read' */

    /* SignalConversion generated from: '<S12>/VeDMAB_y_StatusByte_SysVoltHi' incorporates:
     *  SignalConversion generated from: '<S12>/VeDMAB_y_StatusByte_SysVoltLo'
     */
#if Rte_SysCon_Variant_PMDR_4 || Rte_SysCon_Variant_PMDR_5 || Rte_SysCon_Variant_PMDR_6 || Rte_SysCon_Variant_PMDR_7 || Rte_SysCon_Variant_PMDR_8

    /* SignalConversion generated from: '<S12>/VeDMAB_y_StatusByte_SysVoltHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_SysVoltHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_SysVoltHi_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_p);

    /* SignalConversion generated from: '<S12>/VeDMAB_y_StatusByte_SysVoltLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_SysVoltLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_SysVoltLo_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_m);

#endif

    /* End of SignalConversion generated from: '<S12>/VeDMAB_y_StatusByte_SysVoltHi' */

    /* S-Function (fcgen): '<S12>/FcnCallGen1' incorporates:
     *  SubSystem: '<S12>/RunStrt_AccRun'
     */
#if Rte_SysCon_Variant_PMDR_10

    /* Outputs for Enabled SubSystem: '<S196>/Acc_Low_Circuit' */
    /* Outputs for Enabled SubSystem: '<S196>/Acc_High_Circuit' */
    /* Outputs for Enabled SubSystem: '<S196>/Acc_High_Circuit' incorporates:
     *  EnablePort: '<S459>/Enable'
     */

    /* Logic: '<S459>/Logical1' incorporates:
     *  Constant: '<S470>/Calib'
     *  Logic: '<S459>/Logical'
     *  Logic: '<S459>/Logical2'
     *  Logic: '<S459>/Logical3'
     */
    VePMDD_b_PADOffEnblP2538 = (((!rtb_TmpSignalConversionAtVePMDR_b_PAD_Ac) &&
        (!rtb_TmpSignalConversionAtVePMDR_b_PAD__b)) || (KePMDD_b_PAD_Ovrd));

    /* Logic: '<S459>/Logical5' incorporates:
     *  Constant: '<S465>/Constant'
     *  Constant: '<S469>/Calib'
     *  Logic: '<S459>/Logical4'
     *  RelationalOperator: '<S459>/Comparison2'
     *  SignalConversion generated from: '<S12>/VePMDI_e_PowerModeRaw_Read'
     */
    rtb_TmpSignalConversionAtVePMDR_b_PAD__b = (((((KePMDD_b_AccHiDiagEnbl) &&
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag) && (((uint32)
        rtb_TmpSignalConversionAtVePMDI_e_PowerM) == CePMDR_e_PowerMode_Off)) &&
        (!rtb_TmpSignalConversionAtVePMDR_b_PowerM)) &&
        (VePMDD_b_PADOffEnblP2538));

    /* Outputs for Atomic SubSystem: '<S459>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S473>/EdgeRising' */
    /* Logic: '<S475>/AND' incorporates:
     *  Logic: '<S475>/OR1'
     *  UnitDelay: '<S475>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVePMDR_b_PAD_Ac =
        (rtb_TmpSignalConversionAtVePMDR_b_PAD__b &&
         (!PMDR_ac_DW.UnitDelay_DSTATE_ox));

    /* Update for UnitDelay: '<S475>/Unit Delay' */
    PMDR_ac_DW.UnitDelay_DSTATE_ox = rtb_TmpSignalConversionAtVePMDR_b_PAD__b;

    /* End of Outputs for SubSystem: '<S473>/EdgeRising' */

    /* Switch: '<S473>/Switch1' incorporates:
     *  Constant: '<S466>/Calib'
     *  Constant: '<S473>/Constant Value'
     *  Constant: '<S473>/Constant Value1'
     *  Logic: '<S473>/OR'
     *  Logic: '<S473>/OR1'
     *  MinMax: '<S473>/Minimum'
     *  Sum: '<S473>/Summation'
     *  UnitDelay: '<S473>/Unit Delay'
     */
    if ((!rtb_TmpSignalConversionAtVePMDR_b_PAD__b) ||
            rtb_TmpSignalConversionAtVePMDR_b_PAD_Ac)
    {
        PMDR_ac_DW.UnitDelay_DSTATE_bd = 0U;
    }
    else if (KePMDD_Cnt_AccHiDiagEnblDelay < ((uint16)(((uint32)
                PMDR_ac_DW.UnitDelay_DSTATE_bd) + 1U)))
    {
        /* MinMax: '<S473>/Minimum' incorporates:
         *  Constant: '<S466>/Calib'
         */
        PMDR_ac_DW.UnitDelay_DSTATE_bd = KePMDD_Cnt_AccHiDiagEnblDelay;
    }
    else
    {
        /* MinMax: '<S473>/Minimum' incorporates:
         *  Constant: '<S473>/Constant Value'
         *  Sum: '<S473>/Summation'
         *  UnitDelay: '<S473>/Unit Delay'
         */
        PMDR_ac_DW.UnitDelay_DSTATE_bd = (uint16)(((uint32)
            PMDR_ac_DW.UnitDelay_DSTATE_bd) + 1U);
    }

    /* End of Switch: '<S473>/Switch1' */
    /* End of Outputs for SubSystem: '<S459>/Turn On Delay Sample1' */

    /* RelationalOperator: '<S476>/Relational Operator3' incorporates:
     *  Constant: '<S476>/Constant3'
     *  S-Function (sfix_bitop): '<S476>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtVePMDR_b_PAD_Ac = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_c5) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S476>/EdgeFalling1' */
    /* Logic: '<S476>/Logical Operator' incorporates:
     *  Logic: '<S478>/OR1'
     */
    rtb_AND_bu = !rtb_TmpSignalConversionAtVePMDR_b_PAD_Ac;

    /* End of Outputs for SubSystem: '<S476>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S459>/Turn On Delay Sample1' */
    /* Logic: '<S476>/Logical1' incorporates:
     *  Constant: '<S466>/Calib'
     *  Constant: '<S471>/Calib'
     *  Constant: '<S476>/Constant1'
     *  Logic: '<S473>/AND'
     *  Logic: '<S476>/Logical Operator'
     *  Logic: '<S476>/Logical10'
     *  Logic: '<S476>/Logical12'
     *  RelationalOperator: '<S473>/Greater  Than'
     *  RelationalOperator: '<S476>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S476>/Bitwise Operator3'
     *  UnitDelay: '<S473>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVePMDR_b_PAD__b =
        ((rtb_TmpSignalConversionAtVePMDR_b_PAD__b &&
          (PMDR_ac_DW.UnitDelay_DSTATE_bd >= KePMDD_Cnt_AccHiDiagEnblDelay)) &&
         ((!KePMDR_b_IgnSwAccPstnCktHi_LtchEnbl) || (((((uint32)
              rtb_TmpSignalConversionAtVeDMAB_y_Sta_c5) & 1U) == 0U) ||
           rtb_AND_bu)));

    /* End of Outputs for SubSystem: '<S459>/Turn On Delay Sample1' */

    /* Outputs for Atomic SubSystem: '<S476>/EdgeFalling1' */
    /* Logic: '<S478>/AND' incorporates:
     *  UnitDelay: '<S478>/Unit Delay'
     */
    rtb_AND_bu = (rtb_AND_bu && (PMDR_ac_DW.UnitDelay_DSTATE_dof));

    /* Update for UnitDelay: '<S478>/Unit Delay' */
    PMDR_ac_DW.UnitDelay_DSTATE_dof = rtb_TmpSignalConversionAtVePMDR_b_PAD_Ac;

    /* End of Outputs for SubSystem: '<S476>/EdgeFalling1' */

    /* Logic: '<S476>/Logical5' incorporates:
     *  Logic: '<S472>/NOT4'
     */
    rtb_TmpSignalConversionAtVePMDR_b_PAD_Ac =
        ((rtb_TmpSignalConversionAtVeDFIR_b_DsblDi ||
          rtb_TmpSignalConversionAtVeDFIR_b_PostCo) || rtb_AND_bu);

    /* Outputs for Atomic SubSystem: '<S477>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S477>/Counter Reset  Enabled ' */
    /* Switch: '<S484>/Switch1' incorporates:
     *  Logic: '<S477>/Fail Counter Reset'
     *  Logic: '<S477>/NOT6'
     *  Switch: '<S484>/Switch2'
     *  Switch: '<S485>/Switch1'
     *  UnitDelay: '<S477>/Unit Delay'
     *  UnitDelay: '<S477>/Unit Delay1'
     */
    if ((rtb_TmpSignalConversionAtVePMDR_b_PAD_Ac ||
            (PMDR_ac_DW.UnitDelay_DSTATE_ee)) ||
            (PMDR_ac_DW.UnitDelay1_DSTATE_ok))
    {
        /* Switch: '<S484>/Switch1' incorporates:
         *  Constant: '<S484>/Constant Value2'
         */
        VePMDD_Cnt_Fail_AccHi = 0U;

        /* Switch: '<S485>/Switch1' incorporates:
         *  Constant: '<S485>/Constant Value2'
         */
        VePMDD_Cnt_Smpl_AccHi = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVePMDR_b_PAD__b &&
                rtb_TmpSignalConversionAtVePMDR_b_AccRun)
        {
            /* Switch: '<S484>/Switch1' incorporates:
             *  Constant: '<S484>/Constant Value1'
             *  Sum: '<S484>/Subtraction'
             *  Switch: '<S484>/Switch2'
             *  UnitDelay: '<S484>/Unit Delay'
             */
            VePMDD_Cnt_Fail_AccHi = (uint16)(((uint32)VePMDD_Cnt_Fail_AccHi) +
                1U);
        }

        /* Switch: '<S485>/Switch2' */
        if (rtb_TmpSignalConversionAtVePMDR_b_PAD__b)
        {
            /* Switch: '<S485>/Switch1' incorporates:
             *  Constant: '<S485>/Constant Value1'
             *  Sum: '<S485>/Subtraction'
             *  Switch: '<S485>/Switch2'
             *  UnitDelay: '<S485>/Unit Delay'
             */
            VePMDD_Cnt_Smpl_AccHi = (uint16)(((uint32)VePMDD_Cnt_Smpl_AccHi) +
                1U);
        }

        /* End of Switch: '<S485>/Switch2' */
    }

    /* End of Switch: '<S484>/Switch1' */
    /* End of Outputs for SubSystem: '<S477>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S477>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S477>/Greater Than or Equal ' incorporates:
     *  Constant: '<S467>/Calib'
     */
    PMDR_ac_DW.UnitDelay1_DSTATE_ok = (VePMDD_Cnt_Fail_AccHi >=
        KePMDD_Cnt_AccHiFailLim);

    /* Logic: '<S477>/NOT5' incorporates:
     *  Constant: '<S468>/Calib'
     *  Logic: '<S477>/NOT3'
     *  RelationalOperator: '<S477>/Less Than  or Equal'
     */
    PMDR_ac_DW.UnitDelay_DSTATE_ee = ((VePMDD_Cnt_Smpl_AccHi >=
        KePMDD_Cnt_AccHiSmplLim) && (!PMDR_ac_DW.UnitDelay1_DSTATE_ok));

    /* Switch: '<S490>/Switch1' incorporates:
     *  Constant: '<S483>/Constant Value'
     *  DataStoreWrite: '<S459>/Data Store Write'
     *  Switch: '<S489>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        PMDR_ac_DW.NePMDD_Cnt_AccHiMaxFOP = 0U;
    }
    else
    {
        if (PMDR_ac_DW.UnitDelay_DSTATE_ee)
        {
            /* MinMax: '<S483>/Minimum2' incorporates:
             *  DataStoreRead: '<S459>/Data Store Read'
             *  Switch: '<S489>/Switch1'
             */
            if (VePMDD_Cnt_Fail_AccHi > PMDR_ac_DW.NePMDD_Cnt_AccHiMaxFOP)
            {
                /* DataStoreWrite: '<S459>/Data Store Write' incorporates:
                 *  Switch: '<S489>/Switch1'
                 */
                PMDR_ac_DW.NePMDD_Cnt_AccHiMaxFOP = VePMDD_Cnt_Fail_AccHi;
            }

            /* End of MinMax: '<S483>/Minimum2' */
        }
    }

    /* End of Switch: '<S490>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S476>/Fail' */
    PMDR_ac_Fail(PMDR_ac_DW.UnitDelay1_DSTATE_ok, &PMDR_ac_B.Merge_cq);

    /* End of Outputs for SubSystem: '<S476>/Fail' */

    /* Outputs for Enabled SubSystem: '<S476>/Init' */
    PMDR_ac_Init_k(rtb_TmpSignalConversionAtVePMDR_b_PAD_Ac, &PMDR_ac_B.Merge_cq);

    /* End of Outputs for SubSystem: '<S476>/Init' */

    /* Outputs for Enabled SubSystem: '<S476>/Pass' */
    PMDR_ac_Pass(PMDR_ac_DW.UnitDelay_DSTATE_ee, &PMDR_ac_B.Merge_cq);

    /* End of Outputs for SubSystem: '<S476>/Pass' */

    /* Inport: '<Root>/VePLTR_b_RmtVehStartReqFA' */
    (void)Rte_Read_VePLTR_b_RmtVehStartReqFA_Value(&rtb_AND_pv);

    /* Inport: '<Root>/VePLTR_b_RmtVehStartReq' */
    (void)Rte_Read_VePLTR_b_RmtVehStartReq_Value(&rtb_Logical5_mg);

    /* Outputs for Enabled SubSystem: '<S196>/Acc_Low_Circuit' incorporates:
     *  EnablePort: '<S460>/Enable'
     */

    /* Logic: '<S460>/Logical9' incorporates:
     *  Constant: '<S497>/Calib'
     *  Logic: '<S460>/Logical'
     *  Logic: '<S460>/Logical10'
     *  Logic: '<S460>/Logical11'
     */
    VePMDD_b_RmtVehStrtActv = (((!rtb_Logical5_mg) && (!rtb_AND_pv)) ||
        (KePMDD_b_OvrdRmtStart));

    /* Logic: '<S460>/Logical5' incorporates:
     *  Constant: '<S491>/Constant'
     *  Constant: '<S492>/Constant'
     *  Constant: '<S496>/Calib'
     *  Constant: '<S498>/Calib'
     *  Logic: '<S460>/Logical1'
     *  Logic: '<S460>/Logical3'
     *  Logic: '<S460>/Logical4'
     *  Logic: '<S460>/Logical7'
     *  Logic: '<S460>/Logical8'
     *  RelationalOperator: '<S460>/Comparison1'
     *  RelationalOperator: '<S460>/Comparison2'
     *  SignalConversion generated from: '<S12>/VePMDI_e_PowerModeRaw_Read'
     */
    rtb_Logical5_mg = (((((((KePMDD_b_AccLoDiagEnbl) &&
                            rtb_TmpSignalConversionAtVeDFIR_b_IsDiag) &&
                           ((((uint32)rtb_TmpSignalConversionAtVePMDI_e_PowerM) ==
        CePMDR_e_PowerMode_Run) || (((uint32)
        rtb_TmpSignalConversionAtVePMDI_e_PowerM) == CePMDR_e_PowerMode_Acc))) &&
                          (!rtb_TmpSignalConversionAtVePMDR_b_PowerM)) &&
                         ((!rtb_TmpSignalConversionAtVePMDR_b_RunCrn) ||
                          (KePMDR_b_DisableECMSigRunCrnkAct))) &&
                        ((KePMDR_b_DisableECMSigRunCrnkAct) ||
                         rtb_TmpSignalConversionAtVePMDR_b_RunC_g)) &&
                       (VePMDD_b_RmtVehStrtActv));

    /* Outputs for Atomic SubSystem: '<S460>/Turn On Delay Sample2' */
    /* Outputs for Atomic SubSystem: '<S501>/EdgeRising' */
    /* Logic: '<S503>/AND' incorporates:
     *  Logic: '<S503>/OR1'
     *  UnitDelay: '<S503>/Unit Delay'
     */
    rtb_AND_pv = (rtb_Logical5_mg && (!PMDR_ac_DW.UnitDelay_DSTATE_or));

    /* Update for UnitDelay: '<S503>/Unit Delay' */
    PMDR_ac_DW.UnitDelay_DSTATE_or = rtb_Logical5_mg;

    /* End of Outputs for SubSystem: '<S501>/EdgeRising' */

    /* Switch: '<S501>/Switch1' incorporates:
     *  Constant: '<S493>/Calib'
     *  Constant: '<S501>/Constant Value'
     *  Constant: '<S501>/Constant Value1'
     *  Logic: '<S501>/OR'
     *  Logic: '<S501>/OR1'
     *  MinMax: '<S501>/Minimum'
     *  Sum: '<S501>/Summation'
     *  UnitDelay: '<S501>/Unit Delay'
     */
    if ((!rtb_Logical5_mg) || rtb_AND_pv)
    {
        PMDR_ac_DW.UnitDelay_DSTATE_nb = 0U;
    }
    else if (KePMDD_Cnt_AccLoDiagEnblDelay < ((uint16)(((uint32)
                PMDR_ac_DW.UnitDelay_DSTATE_nb) + 1U)))
    {
        /* MinMax: '<S501>/Minimum' incorporates:
         *  Constant: '<S493>/Calib'
         */
        PMDR_ac_DW.UnitDelay_DSTATE_nb = KePMDD_Cnt_AccLoDiagEnblDelay;
    }
    else
    {
        /* MinMax: '<S501>/Minimum' incorporates:
         *  Constant: '<S501>/Constant Value'
         *  Sum: '<S501>/Summation'
         *  UnitDelay: '<S501>/Unit Delay'
         */
        PMDR_ac_DW.UnitDelay_DSTATE_nb = (uint16)(((uint32)
            PMDR_ac_DW.UnitDelay_DSTATE_nb) + 1U);
    }

    /* End of Switch: '<S501>/Switch1' */
    /* End of Outputs for SubSystem: '<S460>/Turn On Delay Sample2' */

    /* RelationalOperator: '<S504>/Relational Operator3' incorporates:
     *  Constant: '<S504>/Constant3'
     *  S-Function (sfix_bitop): '<S504>/Bitwise Operator2'
     */
    rtb_AND_pv = ((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Stat_b) & 64U) ==
                  0U);

    /* Outputs for Atomic SubSystem: '<S504>/EdgeFalling1' */
    /* Logic: '<S504>/Logical Operator' incorporates:
     *  Logic: '<S506>/OR1'
     */
    rtb_TmpSignalConversionAtVePMDR_b_PAD_Ac = !rtb_AND_pv;

    /* End of Outputs for SubSystem: '<S504>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S460>/Turn On Delay Sample2' */
    /* Logic: '<S504>/Logical1' incorporates:
     *  Constant: '<S493>/Calib'
     *  Constant: '<S499>/Calib'
     *  Constant: '<S504>/Constant1'
     *  Logic: '<S501>/AND'
     *  Logic: '<S504>/Logical Operator'
     *  Logic: '<S504>/Logical10'
     *  Logic: '<S504>/Logical12'
     *  RelationalOperator: '<S501>/Greater  Than'
     *  RelationalOperator: '<S504>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S504>/Bitwise Operator3'
     *  UnitDelay: '<S501>/Unit Delay'
     */
    rtb_Logical5_mg = ((rtb_Logical5_mg && (PMDR_ac_DW.UnitDelay_DSTATE_nb >=
                         KePMDD_Cnt_AccLoDiagEnblDelay)) &&
                       ((!KePMDR_b_IgnSwAccPstnCktLo_LtchEnbl) || (((((uint32)
                            rtb_TmpSignalConversionAtVeDMAB_y_Stat_b) & 1U) ==
                          0U) || rtb_TmpSignalConversionAtVePMDR_b_PAD_Ac)));

    /* End of Outputs for SubSystem: '<S460>/Turn On Delay Sample2' */

    /* Outputs for Atomic SubSystem: '<S504>/EdgeFalling1' */
    /* Logic: '<S506>/AND' incorporates:
     *  UnitDelay: '<S506>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVePMDR_b_PAD_Ac =
        (rtb_TmpSignalConversionAtVePMDR_b_PAD_Ac &&
         (PMDR_ac_DW.UnitDelay_DSTATE_a1));

    /* Update for UnitDelay: '<S506>/Unit Delay' */
    PMDR_ac_DW.UnitDelay_DSTATE_a1 = rtb_AND_pv;

    /* End of Outputs for SubSystem: '<S504>/EdgeFalling1' */

    /* Logic: '<S504>/Logical5' incorporates:
     *  Logic: '<S500>/NOT4'
     */
    rtb_AND_pv = ((rtb_TmpSignalConversionAtVeDFIR_b_DsblDi ||
                   rtb_TmpSignalConversionAtVeDFIR_b_PostCo) ||
                  rtb_TmpSignalConversionAtVePMDR_b_PAD_Ac);

    /* Outputs for Atomic SubSystem: '<S505>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S505>/Counter Reset  Enabled ' */
    /* Switch: '<S512>/Switch1' incorporates:
     *  Logic: '<S460>/Logical2'
     *  Logic: '<S505>/Fail Counter Reset'
     *  Logic: '<S505>/NOT6'
     *  Switch: '<S512>/Switch2'
     *  Switch: '<S513>/Switch1'
     *  UnitDelay: '<S505>/Unit Delay'
     *  UnitDelay: '<S505>/Unit Delay1'
     */
    if ((rtb_AND_pv || (PMDR_ac_DW.UnitDelay_DSTATE_dr)) ||
            (PMDR_ac_DW.UnitDelay1_DSTATE_e))
    {
        /* Switch: '<S512>/Switch1' incorporates:
         *  Constant: '<S512>/Constant Value2'
         */
        VePMDD_Cnt_Fail_AccLo = 0U;

        /* Switch: '<S513>/Switch1' incorporates:
         *  Constant: '<S513>/Constant Value2'
         */
        VePMDD_Cnt_Smp_AccLo = 0U;
    }
    else
    {
        if (rtb_Logical5_mg && (!rtb_TmpSignalConversionAtVePMDR_b_AccRun))
        {
            /* Switch: '<S512>/Switch1' incorporates:
             *  Constant: '<S512>/Constant Value1'
             *  Sum: '<S512>/Subtraction'
             *  Switch: '<S512>/Switch2'
             *  UnitDelay: '<S512>/Unit Delay'
             */
            VePMDD_Cnt_Fail_AccLo = (uint16)(((uint32)VePMDD_Cnt_Fail_AccLo) +
                1U);
        }

        /* Switch: '<S513>/Switch2' */
        if (rtb_Logical5_mg)
        {
            /* Switch: '<S513>/Switch1' incorporates:
             *  Constant: '<S513>/Constant Value1'
             *  Sum: '<S513>/Subtraction'
             *  Switch: '<S513>/Switch2'
             *  UnitDelay: '<S513>/Unit Delay'
             */
            VePMDD_Cnt_Smp_AccLo = (uint16)(((uint32)VePMDD_Cnt_Smp_AccLo) + 1U);
        }

        /* End of Switch: '<S513>/Switch2' */
    }

    /* End of Switch: '<S512>/Switch1' */
    /* End of Outputs for SubSystem: '<S505>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S505>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S505>/Greater Than or Equal ' incorporates:
     *  Constant: '<S494>/Calib'
     */
    PMDR_ac_DW.UnitDelay1_DSTATE_e = (VePMDD_Cnt_Fail_AccLo >=
        KePMDD_Cnt_AccLoFailLim);

    /* Logic: '<S505>/NOT5' incorporates:
     *  Constant: '<S495>/Calib'
     *  Logic: '<S505>/NOT3'
     *  RelationalOperator: '<S505>/Less Than  or Equal'
     */
    PMDR_ac_DW.UnitDelay_DSTATE_dr = ((VePMDD_Cnt_Smp_AccLo >=
        KePMDD_Cnt_AccLoSmplLim) && (!PMDR_ac_DW.UnitDelay1_DSTATE_e));

    /* Switch: '<S518>/Switch1' incorporates:
     *  Constant: '<S511>/Constant Value'
     *  DataStoreWrite: '<S460>/Data Store Write2'
     *  Switch: '<S517>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        PMDR_ac_DW.NePMDD_Cnt_AccLoMaxFOP = 0U;
    }
    else
    {
        if (PMDR_ac_DW.UnitDelay_DSTATE_dr)
        {
            /* MinMax: '<S511>/Minimum2' incorporates:
             *  DataStoreRead: '<S460>/Data Store Read2'
             *  Switch: '<S517>/Switch1'
             */
            if (VePMDD_Cnt_Fail_AccLo > PMDR_ac_DW.NePMDD_Cnt_AccLoMaxFOP)
            {
                /* DataStoreWrite: '<S460>/Data Store Write2' incorporates:
                 *  Switch: '<S517>/Switch1'
                 */
                PMDR_ac_DW.NePMDD_Cnt_AccLoMaxFOP = VePMDD_Cnt_Fail_AccLo;
            }

            /* End of MinMax: '<S511>/Minimum2' */
        }
    }

    /* End of Switch: '<S518>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S504>/Fail' */
    PMDR_ac_Fail(PMDR_ac_DW.UnitDelay1_DSTATE_e, &PMDR_ac_B.Merge_i);

    /* End of Outputs for SubSystem: '<S504>/Fail' */

    /* Outputs for Enabled SubSystem: '<S504>/Init' */
    PMDR_ac_Init_k(rtb_AND_pv, &PMDR_ac_B.Merge_i);

    /* End of Outputs for SubSystem: '<S504>/Init' */

    /* Outputs for Enabled SubSystem: '<S504>/Pass' */
    PMDR_ac_Pass(PMDR_ac_DW.UnitDelay_DSTATE_dr, &PMDR_ac_B.Merge_i);

    /* End of Outputs for SubSystem: '<S504>/Pass' */

    /* End of Outputs for SubSystem: '<S196>/Acc_High_Circuit' */
    /* End of Outputs for SubSystem: '<S196>/Acc_Low_Circuit' */
#endif

    /* SignalConversion generated from: '<S196>/RunCrk_Low_Crct' */
#if !Rte_SysCon_Variant_PMDR_9 && Rte_SysCon_Variant_PMDR_12

    /* VariantMerge generated from: '<S196>/RunCrk_Low_Crct' */
    rtb_VePMDR_b_RunCrnkActvECMFA_write_IRV =
        rtb_TmpSignalConversionAtVePMDR_b_RunCrn;

    /* VariantMerge generated from: '<S196>/RunCrk_Low_Crct' */
    rtb_VePMDR_b_RunCrnkActvECM_write_IRV =
        rtb_TmpSignalConversionAtVePMDR_b_RunC_g;

#elif !(!Rte_SysCon_Variant_PMDR_9) && Rte_SysCon_Variant_PMDR_12

    /* VariantMerge generated from: '<S196>/RunCrk_Low_Crct' incorporates:
     *  SignalConversion generated from: '<S196>/RunCrk_Low_Crct'
     */
    rtb_VePMDR_b_RunCrnkActvECMFA_write_IRV = false;

    /* VariantMerge generated from: '<S196>/RunCrk_Low_Crct' incorporates:
     *  SignalConversion generated from: '<S196>/RunCrk_Low_Crct'
     */
    rtb_VePMDR_b_RunCrnkActvECM_write_IRV = false;

#endif

    /* End of SignalConversion generated from: '<S196>/RunCrk_Low_Crct' */

    /* SignalConversion generated from: '<S196>/RunCrk_Low_Crct' */
#if Rte_SysCon_Variant_PMDR_12 && Rte_SysCon_Variant_PMDR_9

    /* VariantMerge generated from: '<S196>/RunCrk_Low_Crct' */
    rtb_VePMDR_b_PowerModeRawFA_write1_IRV =
        rtb_TmpSignalConversionAtVePMDR_b_PowerM;

#elif !Rte_SysCon_Variant_PMDR_9 && Rte_SysCon_Variant_PMDR_12

    /* VariantMerge generated from: '<S196>/RunCrk_Low_Crct' incorporates:
     *  SignalConversion generated from: '<S196>/RunCrk_Low_Crct'
     */
    rtb_VePMDR_b_PowerModeRawFA_write1_IRV = false;

#endif

    /* End of SignalConversion generated from: '<S196>/RunCrk_Low_Crct' */
#if Rte_SysCon_Variant_PMDR_12

    /* Outputs for Enabled SubSystem: '<S196>/RunCrnk_Hi_Crct' */
    /* Outputs for Enabled SubSystem: '<S196>/RunCrk_Low_Crct' */
    /* Outputs for Enabled SubSystem: '<S196>/RunCrk_Low_Crct' incorporates:
     *  EnablePort: '<S461>/Enable'
     */

    /* Logic: '<S519>/AND' incorporates:
     *  Logic: '<S520>/AND'
     */
#if Rte_SysCon_Variant_PMDR_9

    /* RelationalOperator: '<S461>/Comparison2' */
    rtb_Comparison2_ap = rtb_VePMDR_b_PowerModeRawFA_write1_IRV;

#else

    /* RelationalOperator: '<S461>/Comparison2' incorporates:
     *  Logic: '<S520>/AND'
     */
    rtb_Comparison2_ap = rtb_VePMDR_b_RunCrnkActvECMFA_write_IRV;

#endif

    /* End of Logic: '<S519>/AND' */

    /* SignalConversion generated from: '<S461>/VariantSource' */
    VePMDR_b_isRunCrankCANSignal_FA = rtb_Comparison2_ap;

    /* RelationalOperator: '<S461>/Comparison2' incorporates:
     *  Constant: '<S528>/Constant'
     *  SignalConversion generated from: '<S12>/VePMDI_e_PowerModeRaw_Read'
     */
    rtb_Comparison2_ap = (((uint32)rtb_TmpSignalConversionAtVePMDI_e_PowerM) ==
                          CePMDR_e_PowerMode_Run);

    /* SignalConversion generated from: '<S461>/VariantSource1' */
#if Rte_SysCon_Variant_PMDR_9

    /* Logic: '<S461>/Logical9' */
    rtb_Logical9 = rtb_Comparison2_ap;

#else

    /* Outputs for Atomic SubSystem: '<S461>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S532>/EdgeRising' */
    /* Logic: '<S535>/AND' incorporates:
     *  Logic: '<S535>/OR1'
     *  UnitDelay: '<S535>/Unit Delay'
     */
    rtb_Logical9 = (rtb_VePMDR_b_RunCrnkActvECM_write_IRV &&
                    (!PMDR_ac_DW.UnitDelay_DSTATE_ci));

    /* Update for UnitDelay: '<S535>/Unit Delay' */
    PMDR_ac_DW.UnitDelay_DSTATE_ci = rtb_VePMDR_b_RunCrnkActvECM_write_IRV;

    /* End of Outputs for SubSystem: '<S532>/EdgeRising' */

    /* Switch: '<S532>/Switch1' incorporates:
     *  Constant: '<S524>/Calib'
     *  Constant: '<S532>/Constant Value'
     *  Constant: '<S532>/Constant Value1'
     *  Logic: '<S532>/OR'
     *  Logic: '<S532>/OR1'
     *  MinMax: '<S532>/Minimum'
     *  Sum: '<S532>/Summation'
     *  UnitDelay: '<S532>/Unit Delay'
     */
    if ((!rtb_VePMDR_b_RunCrnkActvECM_write_IRV) || rtb_Logical9)
    {
        PMDR_ac_DW.UnitDelay_DSTATE_pb = 0U;
    }
    else if (KePMDD_Cnt_RunCrnkActvECMDbnc < ((uint16)(((uint32)
                PMDR_ac_DW.UnitDelay_DSTATE_pb) + 1U)))
    {
        /* MinMax: '<S532>/Minimum' incorporates:
         *  Constant: '<S524>/Calib'
         */
        PMDR_ac_DW.UnitDelay_DSTATE_pb = KePMDD_Cnt_RunCrnkActvECMDbnc;
    }
    else
    {
        /* MinMax: '<S532>/Minimum' incorporates:
         *  Constant: '<S532>/Constant Value'
         *  Sum: '<S532>/Summation'
         *  UnitDelay: '<S532>/Unit Delay'
         */
        PMDR_ac_DW.UnitDelay_DSTATE_pb = (uint16)(((uint32)
            PMDR_ac_DW.UnitDelay_DSTATE_pb) + 1U);
    }

    /* End of Switch: '<S532>/Switch1' */

    /* Logic: '<S461>/Logical9' incorporates:
     *  Constant: '<S524>/Calib'
     *  Logic: '<S532>/AND'
     *  RelationalOperator: '<S532>/Greater  Than'
     *  SignalConversion generated from: '<S461>/VariantSource1'
     *  UnitDelay: '<S532>/Unit Delay'
     */
    rtb_Logical9 = (rtb_VePMDR_b_RunCrnkActvECM_write_IRV &&
                    (PMDR_ac_DW.UnitDelay_DSTATE_pb >=
                     KePMDD_Cnt_RunCrnkActvECMDbnc));

    /* End of Outputs for SubSystem: '<S461>/Turn On Delay Sample1' */
#endif

    /* End of SignalConversion generated from: '<S461>/VariantSource1' */

    /* SignalConversion generated from: '<S461>/VariantSource1' */
    VePMDR_b_isCANRunCrank = rtb_Logical9;

    /* Logic: '<S461>/Logical' incorporates:
     *  Constant: '<S525>/Calib'
     *  Constant: '<S526>/Calib'
     *  Logic: '<S461>/Logical2'
     *  Logic: '<S461>/Logical3'
     */
    rtb_Logical9 = (((((KePMDD_b_RunCrankOpenDiagEnbl) &&
                       rtb_TmpSignalConversionAtVeDFIR_b_IsDiag) &&
                      (!VePMDR_b_isRunCrankCANSignal_FA)) &&
                     (VePMDR_b_isCANRunCrank)) &&
                    ((VePMDD_b_CrnkEvntMet_StrtrMtr) ||
                     (KePMDD_b_OvrdMtrStartEvnt)));

    /* Outputs for Atomic SubSystem: '<S461>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S531>/EdgeRising' */
    /* Logic: '<S534>/AND' incorporates:
     *  Logic: '<S534>/OR1'
     *  UnitDelay: '<S534>/Unit Delay'
     */
    rtb_VePMDR_b_RunCrnkActvECM_write_IRV = (rtb_Logical9 &&
        (!PMDR_ac_DW.UnitDelay_DSTATE_mx));

    /* Update for UnitDelay: '<S534>/Unit Delay' */
    PMDR_ac_DW.UnitDelay_DSTATE_mx = rtb_Logical9;

    /* End of Outputs for SubSystem: '<S531>/EdgeRising' */

    /* Switch: '<S531>/Switch1' incorporates:
     *  Constant: '<S521>/Calib'
     *  Constant: '<S531>/Constant Value'
     *  Constant: '<S531>/Constant Value1'
     *  Logic: '<S531>/OR'
     *  Logic: '<S531>/OR1'
     *  MinMax: '<S531>/Minimum'
     *  Sum: '<S531>/Summation'
     *  UnitDelay: '<S531>/Unit Delay'
     */
    if ((!rtb_Logical9) || rtb_VePMDR_b_RunCrnkActvECM_write_IRV)
    {
        PMDR_ac_DW.UnitDelay_DSTATE_m = 0U;
    }
    else if (KePMDD_Cnt_RunCrankOpenDiagEnblDelay < ((uint16)(((uint32)
                PMDR_ac_DW.UnitDelay_DSTATE_m) + 1U)))
    {
        /* MinMax: '<S531>/Minimum' incorporates:
         *  Constant: '<S521>/Calib'
         */
        PMDR_ac_DW.UnitDelay_DSTATE_m = KePMDD_Cnt_RunCrankOpenDiagEnblDelay;
    }
    else
    {
        /* MinMax: '<S531>/Minimum' incorporates:
         *  Constant: '<S531>/Constant Value'
         *  Sum: '<S531>/Summation'
         *  UnitDelay: '<S531>/Unit Delay'
         */
        PMDR_ac_DW.UnitDelay_DSTATE_m = (uint16)(((uint32)
            PMDR_ac_DW.UnitDelay_DSTATE_m) + 1U);
    }

    /* End of Switch: '<S531>/Switch1' */
    /* End of Outputs for SubSystem: '<S461>/Turn On Delay Sample' */

    /* RelationalOperator: '<S536>/Relational Operator3' incorporates:
     *  Constant: '<S536>/Constant3'
     *  S-Function (sfix_bitop): '<S536>/Bitwise Operator2'
     */
    rtb_VePMDR_b_RunCrnkActvECM_write_IRV = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Status) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S536>/EdgeFalling1' */
    /* Logic: '<S536>/Logical Operator' incorporates:
     *  Logic: '<S538>/OR1'
     */
    rtb_TmpSignalConversionAtVePMDR_b_RunC_g =
        !rtb_VePMDR_b_RunCrnkActvECM_write_IRV;

    /* End of Outputs for SubSystem: '<S536>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S461>/Turn On Delay Sample' */
    /* Logic: '<S536>/Logical1' incorporates:
     *  Constant: '<S521>/Calib'
     *  Constant: '<S527>/Calib'
     *  Constant: '<S536>/Constant1'
     *  Logic: '<S531>/AND'
     *  Logic: '<S536>/Logical Operator'
     *  Logic: '<S536>/Logical10'
     *  Logic: '<S536>/Logical12'
     *  RelationalOperator: '<S531>/Greater  Than'
     *  RelationalOperator: '<S536>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S536>/Bitwise Operator3'
     *  UnitDelay: '<S531>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVePMDR_b_RunCrn = ((rtb_Logical9 &&
        (PMDR_ac_DW.UnitDelay_DSTATE_m >= KePMDD_Cnt_RunCrankOpenDiagEnblDelay))
        && ((!KePMDR_b_IgnSwRunCrnkPstnCktLo_LtchEnbl) || (((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Status) & 1U) == 0U) ||
        rtb_TmpSignalConversionAtVePMDR_b_RunC_g)));

    /* End of Outputs for SubSystem: '<S461>/Turn On Delay Sample' */

    /* Logic: '<S461>/Logical9' */
    rtb_Logical9 = !rtb_TmpSignalConversionAtVePMDR_b_RunCra;

    /* SignalConversion generated from: '<S461>/VariantSource2' incorporates:
     *  Logic: '<S461>/Logical5'
     */
#if Rte_SysCon_Variant_PMDR_9

    /* UnitDelay: '<S538>/Unit Delay' */
    VePMDR_b_isRunCrankAnalog_Low = rtb_Logical9;

#else

    /* UnitDelay: '<S538>/Unit Delay' incorporates:
     *  Logic: '<S461>/Logical5'
     */
    VePMDR_b_isRunCrankAnalog_Low = (rtb_Comparison2_ap && rtb_Logical9);

#endif

    /* End of SignalConversion generated from: '<S461>/VariantSource2' */

    /* Outputs for Atomic SubSystem: '<S536>/EdgeFalling1' */
    /* Logic: '<S538>/AND' incorporates:
     *  UnitDelay: '<S538>/Unit Delay'
     */
    rtb_Comparison2_ap = (rtb_TmpSignalConversionAtVePMDR_b_RunC_g &&
                          (PMDR_ac_DW.UnitDelay_DSTATE_nx));

    /* Update for UnitDelay: '<S538>/Unit Delay' */
    PMDR_ac_DW.UnitDelay_DSTATE_nx = rtb_VePMDR_b_RunCrnkActvECM_write_IRV;

    /* End of Outputs for SubSystem: '<S536>/EdgeFalling1' */

    /* Logic: '<S536>/Logical5' incorporates:
     *  Constant: '<S529>/Constant'
     *  Logic: '<S461>/Logical8'
     *  Logic: '<S530>/NOT4'
     *  RelationalOperator: '<S461>/Comparison2'
     *  RelationalOperator: '<S461>/Comparison5'
     *  SignalConversion generated from: '<S12>/VePMDI_e_PowerModeRaw_Read'
     */
    rtb_VePMDR_b_RunCrnkActvECM_write_IRV = (((((uint32)
        rtb_TmpSignalConversionAtVePMDI_e_PowerM) == CePMDR_e_PowerMode_Off) ||
        (rtb_TmpSignalConversionAtVeDFIR_b_DsblDi ||
         rtb_TmpSignalConversionAtVeDFIR_b_PostCo)) || rtb_Comparison2_ap);

    /* Outputs for Atomic SubSystem: '<S537>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S537>/Counter Reset  Enabled ' */
    /* Switch: '<S544>/Switch1' incorporates:
     *  Logic: '<S537>/Fail Counter Reset'
     *  Logic: '<S537>/NOT6'
     *  Switch: '<S544>/Switch2'
     *  Switch: '<S545>/Switch1'
     *  UnitDelay: '<S537>/Unit Delay'
     *  UnitDelay: '<S537>/Unit Delay1'
     */
    if ((rtb_VePMDR_b_RunCrnkActvECM_write_IRV ||
            (PMDR_ac_DW.UnitDelay_DSTATE_oc)) ||
            (PMDR_ac_DW.UnitDelay1_DSTATE_jm))
    {
        /* Switch: '<S544>/Switch1' incorporates:
         *  Constant: '<S544>/Constant Value2'
         */
        VePMDD_Cnt_Fail_CktLo = 0U;

        /* Switch: '<S545>/Switch1' incorporates:
         *  Constant: '<S545>/Constant Value2'
         */
        VePMDD_Cnt_Smpl_CktLo = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVePMDR_b_RunCrn &&
                (VePMDR_b_isRunCrankAnalog_Low))
        {
            /* Switch: '<S544>/Switch1' incorporates:
             *  Constant: '<S544>/Constant Value1'
             *  Sum: '<S544>/Subtraction'
             *  Switch: '<S544>/Switch2'
             *  UnitDelay: '<S544>/Unit Delay'
             */
            VePMDD_Cnt_Fail_CktLo = (uint16)(((uint32)VePMDD_Cnt_Fail_CktLo) +
                1U);
        }

        /* Switch: '<S545>/Switch2' */
        if (rtb_TmpSignalConversionAtVePMDR_b_RunCrn)
        {
            /* Switch: '<S545>/Switch1' incorporates:
             *  Constant: '<S545>/Constant Value1'
             *  Sum: '<S545>/Subtraction'
             *  Switch: '<S545>/Switch2'
             *  UnitDelay: '<S545>/Unit Delay'
             */
            VePMDD_Cnt_Smpl_CktLo = (uint16)(((uint32)VePMDD_Cnt_Smpl_CktLo) +
                1U);
        }

        /* End of Switch: '<S545>/Switch2' */
    }

    /* End of Switch: '<S544>/Switch1' */
    /* End of Outputs for SubSystem: '<S537>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S537>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S537>/Greater Than or Equal ' incorporates:
     *  Constant: '<S522>/Calib'
     */
    rtb_Comparison2_ap = (VePMDD_Cnt_Fail_CktLo >=
                          KePMDD_Cnt_RunCrankOpenFailLim);

    /* Logic: '<S537>/NOT5' incorporates:
     *  Constant: '<S523>/Calib'
     *  Logic: '<S537>/NOT3'
     *  RelationalOperator: '<S537>/Less Than  or Equal'
     */
    rtb_Logical9 = ((VePMDD_Cnt_Smpl_CktLo >= KePMDD_Cnt_RunCrankOpenSmplLim) &&
                    (!rtb_Comparison2_ap));

    /* Switch: '<S550>/Switch1' incorporates:
     *  Constant: '<S543>/Constant Value'
     *  DataStoreWrite: '<S461>/Data Store Write'
     *  Switch: '<S549>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        PMDR_ac_DW.NePMDD_Cnt_RunCrankOpenMaxFOP = 0U;
    }
    else
    {
        if (rtb_Logical9)
        {
            /* MinMax: '<S543>/Minimum2' incorporates:
             *  DataStoreRead: '<S461>/Data Store Read'
             *  Switch: '<S549>/Switch1'
             */
            if (VePMDD_Cnt_Fail_CktLo > PMDR_ac_DW.NePMDD_Cnt_RunCrankOpenMaxFOP)
            {
                /* DataStoreWrite: '<S461>/Data Store Write' incorporates:
                 *  Switch: '<S549>/Switch1'
                 */
                PMDR_ac_DW.NePMDD_Cnt_RunCrankOpenMaxFOP = VePMDD_Cnt_Fail_CktLo;
            }

            /* End of MinMax: '<S543>/Minimum2' */
        }
    }

    /* End of Switch: '<S550>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S536>/Fail' */
    PMDR_ac_Fail(rtb_Comparison2_ap, &PMDR_ac_B.Merge_d4);

    /* End of Outputs for SubSystem: '<S536>/Fail' */

    /* Outputs for Enabled SubSystem: '<S536>/Init' */
    PMDR_ac_Init_k(rtb_VePMDR_b_RunCrnkActvECM_write_IRV, &PMDR_ac_B.Merge_d4);

    /* End of Outputs for SubSystem: '<S536>/Init' */

    /* Outputs for Enabled SubSystem: '<S536>/Pass' */
    PMDR_ac_Pass(rtb_Logical9, &PMDR_ac_B.Merge_d4);

    /* End of Outputs for SubSystem: '<S536>/Pass' */

    /* Outputs for Enabled SubSystem: '<S196>/RunCrnk_Hi_Crct' incorporates:
     *  EnablePort: '<S462>/Enable'
     */

    /* Logic: '<S462>/Logical3' incorporates:
     *  Constant: '<S551>/Constant'
     *  Constant: '<S555>/Calib'
     *  Constant: '<S557>/Constant'
     *  Logic: '<S462>/Logical1'
     *  Logic: '<S462>/Logical2'
     *  RelationalOperator: '<S462>/Comparison1'
     *  RelationalOperator: '<S462>/Comparison4'
     *  SignalConversion generated from: '<S12>/VePMDR_e_PMM_PowerMode_Read'
     */
    rtb_VePMDR_b_RunCrnkActvECM_write_IRV = ((((KePMDD_b_RunCrankHiDiagEnbl) &&
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag) && ((((uint32)
        rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) == CePMDR_e_PowerMode_Acc) ||
        (((uint32)rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) ==
         CePMDR_e_PowerMode_Off))) && (!rtb_TmpSignalConversionAtVePMDR_b_PMM_Po));

    /* Outputs for Atomic SubSystem: '<S462>/Turn On Delay Sample2' */
    /* Outputs for Atomic SubSystem: '<S559>/EdgeRising' */
    /* Logic: '<S561>/AND' incorporates:
     *  Logic: '<S561>/OR1'
     *  UnitDelay: '<S561>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVePMDR_b_PMM_Po =
        (rtb_VePMDR_b_RunCrnkActvECM_write_IRV &&
         (!PMDR_ac_DW.UnitDelay_DSTATE_jl));

    /* Update for UnitDelay: '<S561>/Unit Delay' */
    PMDR_ac_DW.UnitDelay_DSTATE_jl = rtb_VePMDR_b_RunCrnkActvECM_write_IRV;

    /* End of Outputs for SubSystem: '<S559>/EdgeRising' */

    /* Switch: '<S559>/Switch1' incorporates:
     *  Constant: '<S552>/Calib'
     *  Constant: '<S559>/Constant Value'
     *  Constant: '<S559>/Constant Value1'
     *  Logic: '<S559>/OR'
     *  Logic: '<S559>/OR1'
     *  MinMax: '<S559>/Minimum'
     *  Sum: '<S559>/Summation'
     *  UnitDelay: '<S559>/Unit Delay'
     */
    if ((!rtb_VePMDR_b_RunCrnkActvECM_write_IRV) ||
            rtb_TmpSignalConversionAtVePMDR_b_PMM_Po)
    {
        PMDR_ac_DW.UnitDelay_DSTATE_gb = 0U;
    }
    else if (KePMDD_Cnt_RunCrankHiDiagEnblDelay < ((uint16)(((uint32)
                PMDR_ac_DW.UnitDelay_DSTATE_gb) + 1U)))
    {
        /* MinMax: '<S559>/Minimum' incorporates:
         *  Constant: '<S552>/Calib'
         */
        PMDR_ac_DW.UnitDelay_DSTATE_gb = KePMDD_Cnt_RunCrankHiDiagEnblDelay;
    }
    else
    {
        /* MinMax: '<S559>/Minimum' incorporates:
         *  Constant: '<S559>/Constant Value'
         *  Sum: '<S559>/Summation'
         *  UnitDelay: '<S559>/Unit Delay'
         */
        PMDR_ac_DW.UnitDelay_DSTATE_gb = (uint16)(((uint32)
            PMDR_ac_DW.UnitDelay_DSTATE_gb) + 1U);
    }

    /* End of Switch: '<S559>/Switch1' */
    /* End of Outputs for SubSystem: '<S462>/Turn On Delay Sample2' */

    /* RelationalOperator: '<S562>/Relational Operator3' incorporates:
     *  Constant: '<S562>/Constant3'
     *  S-Function (sfix_bitop): '<S562>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtVePMDR_b_PMM_Po = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_n) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S562>/EdgeFalling1' */
    /* Logic: '<S562>/Logical Operator' incorporates:
     *  Logic: '<S564>/OR1'
     */
    rtb_TmpSignalConversionAtVePMDR_b_RunCrn =
        !rtb_TmpSignalConversionAtVePMDR_b_PMM_Po;

    /* End of Outputs for SubSystem: '<S562>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S462>/Turn On Delay Sample2' */
    /* Logic: '<S562>/Logical1' incorporates:
     *  Constant: '<S552>/Calib'
     *  Constant: '<S556>/Calib'
     *  Constant: '<S562>/Constant1'
     *  Logic: '<S559>/AND'
     *  Logic: '<S562>/Logical Operator'
     *  Logic: '<S562>/Logical10'
     *  Logic: '<S562>/Logical12'
     *  RelationalOperator: '<S559>/Greater  Than'
     *  RelationalOperator: '<S562>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S562>/Bitwise Operator3'
     *  UnitDelay: '<S559>/Unit Delay'
     */
    rtb_VePMDR_b_RunCrnkActvECM_write_IRV =
        ((rtb_VePMDR_b_RunCrnkActvECM_write_IRV &&
          (PMDR_ac_DW.UnitDelay_DSTATE_gb >= KePMDD_Cnt_RunCrankHiDiagEnblDelay))
         && ((!KePMDR_b_IgnSwRunCrnkPstnCktHi_LtchEnbl) || (((((uint32)
              rtb_TmpSignalConversionAtVeDMAB_y_Stat_n) & 1U) == 0U) ||
           rtb_TmpSignalConversionAtVePMDR_b_RunCrn)));

    /* End of Outputs for SubSystem: '<S462>/Turn On Delay Sample2' */

    /* Outputs for Atomic SubSystem: '<S562>/EdgeFalling1' */
    /* Logic: '<S564>/AND' incorporates:
     *  UnitDelay: '<S564>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVePMDR_b_RunCrn =
        (rtb_TmpSignalConversionAtVePMDR_b_RunCrn &&
         (PMDR_ac_DW.UnitDelay_DSTATE_oi));

    /* Update for UnitDelay: '<S564>/Unit Delay' */
    PMDR_ac_DW.UnitDelay_DSTATE_oi = rtb_TmpSignalConversionAtVePMDR_b_PMM_Po;

    /* End of Outputs for SubSystem: '<S562>/EdgeFalling1' */

    /* Logic: '<S562>/Logical5' incorporates:
     *  Logic: '<S558>/NOT4'
     */
    rtb_TmpSignalConversionAtVePMDR_b_PMM_Po =
        ((rtb_TmpSignalConversionAtVeDFIR_b_DsblDi ||
          rtb_TmpSignalConversionAtVeDFIR_b_PostCo) ||
         rtb_TmpSignalConversionAtVePMDR_b_RunCrn);

    /* Outputs for Atomic SubSystem: '<S563>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S563>/Counter Reset  Enabled ' */
    /* Switch: '<S570>/Switch1' incorporates:
     *  Logic: '<S563>/Fail Counter Reset'
     *  Logic: '<S563>/NOT6'
     *  Switch: '<S570>/Switch2'
     *  Switch: '<S571>/Switch1'
     *  UnitDelay: '<S563>/Unit Delay'
     *  UnitDelay: '<S563>/Unit Delay1'
     */
    if ((rtb_TmpSignalConversionAtVePMDR_b_PMM_Po ||
            (PMDR_ac_DW.UnitDelay_DSTATE_boq)) ||
            (PMDR_ac_DW.UnitDelay1_DSTATE_jz))
    {
        /* Switch: '<S570>/Switch1' incorporates:
         *  Constant: '<S570>/Constant Value2'
         */
        VePMDD_Cnt_Fail_CktHi = 0U;

        /* Switch: '<S571>/Switch1' incorporates:
         *  Constant: '<S571>/Constant Value2'
         */
        VePMDD_Cnt_Smpl_CktHi = 0U;
    }
    else
    {
        if (rtb_VePMDR_b_RunCrnkActvECM_write_IRV &&
                rtb_TmpSignalConversionAtVePMDR_b_RunCra)
        {
            /* Switch: '<S570>/Switch1' incorporates:
             *  Constant: '<S570>/Constant Value1'
             *  Sum: '<S570>/Subtraction'
             *  Switch: '<S570>/Switch2'
             *  UnitDelay: '<S570>/Unit Delay'
             */
            VePMDD_Cnt_Fail_CktHi = (uint16)(((uint32)VePMDD_Cnt_Fail_CktHi) +
                1U);
        }

        /* Switch: '<S571>/Switch2' */
        if (rtb_VePMDR_b_RunCrnkActvECM_write_IRV)
        {
            /* Switch: '<S571>/Switch1' incorporates:
             *  Constant: '<S571>/Constant Value1'
             *  Sum: '<S571>/Subtraction'
             *  Switch: '<S571>/Switch2'
             *  UnitDelay: '<S571>/Unit Delay'
             */
            VePMDD_Cnt_Smpl_CktHi = (uint16)(((uint32)VePMDD_Cnt_Smpl_CktHi) +
                1U);
        }

        /* End of Switch: '<S571>/Switch2' */
    }

    /* End of Switch: '<S570>/Switch1' */
    /* End of Outputs for SubSystem: '<S563>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S563>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S563>/Greater Than or Equal ' incorporates:
     *  Constant: '<S553>/Calib'
     */
    PMDR_ac_DW.UnitDelay1_DSTATE_jz = (VePMDD_Cnt_Fail_CktHi >=
        KePMDD_Cnt_RunCrankHiFailLim);

    /* Logic: '<S563>/NOT5' incorporates:
     *  Constant: '<S554>/Calib'
     *  Logic: '<S563>/NOT3'
     *  RelationalOperator: '<S563>/Less Than  or Equal'
     */
    PMDR_ac_DW.UnitDelay_DSTATE_boq = ((VePMDD_Cnt_Smpl_CktHi >=
        KePMDD_Cnt_RunCrankHiSmplLim) && (!PMDR_ac_DW.UnitDelay1_DSTATE_jz));

    /* Switch: '<S576>/Switch1' incorporates:
     *  Constant: '<S569>/Constant Value'
     *  DataStoreWrite: '<S462>/Data Store Write'
     *  Switch: '<S575>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        PMDR_ac_DW.NePMDD_Cnt_RunCrankHiMaxFOP = 0U;
    }
    else
    {
        if (PMDR_ac_DW.UnitDelay_DSTATE_boq)
        {
            /* MinMax: '<S569>/Minimum2' incorporates:
             *  DataStoreRead: '<S462>/Data Store Read'
             *  Switch: '<S575>/Switch1'
             */
            if (VePMDD_Cnt_Fail_CktHi > PMDR_ac_DW.NePMDD_Cnt_RunCrankHiMaxFOP)
            {
                /* DataStoreWrite: '<S462>/Data Store Write' incorporates:
                 *  Switch: '<S575>/Switch1'
                 */
                PMDR_ac_DW.NePMDD_Cnt_RunCrankHiMaxFOP = VePMDD_Cnt_Fail_CktHi;
            }

            /* End of MinMax: '<S569>/Minimum2' */
        }
    }

    /* End of Switch: '<S576>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S562>/Fail' */
    PMDR_ac_Fail(PMDR_ac_DW.UnitDelay1_DSTATE_jz, &PMDR_ac_B.Merge_c);

    /* End of Outputs for SubSystem: '<S562>/Fail' */

    /* Outputs for Enabled SubSystem: '<S562>/Init' */
    PMDR_ac_Init_k(rtb_TmpSignalConversionAtVePMDR_b_PMM_Po, &PMDR_ac_B.Merge_c);

    /* End of Outputs for SubSystem: '<S562>/Init' */

    /* Outputs for Enabled SubSystem: '<S562>/Pass' */
    PMDR_ac_Pass(PMDR_ac_DW.UnitDelay_DSTATE_boq, &PMDR_ac_B.Merge_c);

    /* End of Outputs for SubSystem: '<S562>/Pass' */

    /* End of Outputs for SubSystem: '<S196>/RunCrk_Low_Crct' */
    /* End of Outputs for SubSystem: '<S196>/RunCrnk_Hi_Crct' */
#endif

#if Rte_SysCon_Variant_PMDR_11

    /* Outputs for Enabled SubSystem: '<S196>/Run_Low_Circuit' */
    /* Outputs for Enabled SubSystem: '<S196>/Run_High_Circuit' */
    /* Outputs for Enabled SubSystem: '<S196>/Run_High_Circuit' incorporates:
     *  EnablePort: '<S463>/Enable'
     */

    /* Logic: '<S463>/Logical5' incorporates:
     *  Constant: '<S577>/Constant'
     *  Constant: '<S581>/Calib'
     *  Logic: '<S463>/Logical4'
     *  RelationalOperator: '<S463>/Comparison2'
     *  SignalConversion generated from: '<S12>/VePMDI_e_PowerModeRaw_Read'
     */
    rtb_Logical5_b3 = ((((KePMDD_b_RunHiDiagEnbl) &&
                         rtb_TmpSignalConversionAtVeDFIR_b_IsDiag) && (((uint32)
                          rtb_TmpSignalConversionAtVePMDI_e_PowerM) ==
                         CePMDR_e_PowerMode_Off)) &&
                       (!rtb_TmpSignalConversionAtVePMDR_b_PowerM));

    /* Outputs for Atomic SubSystem: '<S463>/Turn On Delay Sample2' */
    /* Outputs for Atomic SubSystem: '<S584>/EdgeRising' */
    /* Logic: '<S586>/AND' incorporates:
     *  Logic: '<S586>/OR1'
     *  UnitDelay: '<S586>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVePMDR_b_RunCra = (rtb_Logical5_b3 &&
        (!PMDR_ac_DW.UnitDelay_DSTATE_bf));

    /* Update for UnitDelay: '<S586>/Unit Delay' */
    PMDR_ac_DW.UnitDelay_DSTATE_bf = rtb_Logical5_b3;

    /* End of Outputs for SubSystem: '<S584>/EdgeRising' */

    /* Switch: '<S584>/Switch1' incorporates:
     *  Constant: '<S578>/Calib'
     *  Constant: '<S584>/Constant Value'
     *  Constant: '<S584>/Constant Value1'
     *  Logic: '<S584>/OR'
     *  Logic: '<S584>/OR1'
     *  MinMax: '<S584>/Minimum'
     *  Sum: '<S584>/Summation'
     *  UnitDelay: '<S584>/Unit Delay'
     */
    if ((!rtb_Logical5_b3) || rtb_TmpSignalConversionAtVePMDR_b_RunCra)
    {
        PMDR_ac_DW.UnitDelay_DSTATE_do = 0U;
    }
    else if (KePMDD_Cnt_RunHiDiagEnblDelay < ((uint16)(((uint32)
                PMDR_ac_DW.UnitDelay_DSTATE_do) + 1U)))
    {
        /* MinMax: '<S584>/Minimum' incorporates:
         *  Constant: '<S578>/Calib'
         */
        PMDR_ac_DW.UnitDelay_DSTATE_do = KePMDD_Cnt_RunHiDiagEnblDelay;
    }
    else
    {
        /* MinMax: '<S584>/Minimum' incorporates:
         *  Constant: '<S584>/Constant Value'
         *  Sum: '<S584>/Summation'
         *  UnitDelay: '<S584>/Unit Delay'
         */
        PMDR_ac_DW.UnitDelay_DSTATE_do = (uint16)(((uint32)
            PMDR_ac_DW.UnitDelay_DSTATE_do) + 1U);
    }

    /* End of Switch: '<S584>/Switch1' */
    /* End of Outputs for SubSystem: '<S463>/Turn On Delay Sample2' */

    /* RelationalOperator: '<S587>/Relational Operator3' incorporates:
     *  Constant: '<S587>/Constant3'
     *  S-Function (sfix_bitop): '<S587>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtVePMDR_b_RunCra = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_l) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S587>/EdgeFalling1' */
    /* Logic: '<S587>/Logical Operator' incorporates:
     *  Logic: '<S589>/OR1'
     */
    rtb_AND_mk = !rtb_TmpSignalConversionAtVePMDR_b_RunCra;

    /* End of Outputs for SubSystem: '<S587>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S463>/Turn On Delay Sample2' */
    /* Logic: '<S587>/Logical1' incorporates:
     *  Constant: '<S578>/Calib'
     *  Constant: '<S582>/Calib'
     *  Constant: '<S587>/Constant1'
     *  Logic: '<S584>/AND'
     *  Logic: '<S587>/Logical Operator'
     *  Logic: '<S587>/Logical10'
     *  Logic: '<S587>/Logical12'
     *  RelationalOperator: '<S584>/Greater  Than'
     *  RelationalOperator: '<S587>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S587>/Bitwise Operator3'
     *  UnitDelay: '<S584>/Unit Delay'
     */
    rtb_Logical5_b3 = ((rtb_Logical5_b3 && (PMDR_ac_DW.UnitDelay_DSTATE_do >=
                         KePMDD_Cnt_RunHiDiagEnblDelay)) &&
                       ((!KePMDR_b_IgnSwRunPstnCktHi_LtchEnbl) || (((((uint32)
                            rtb_TmpSignalConversionAtVeDMAB_y_Stat_l) & 1U) ==
                          0U) || rtb_AND_mk)));

    /* End of Outputs for SubSystem: '<S463>/Turn On Delay Sample2' */

    /* Outputs for Atomic SubSystem: '<S587>/EdgeFalling1' */
    /* Logic: '<S589>/AND' incorporates:
     *  UnitDelay: '<S589>/Unit Delay'
     */
    rtb_AND_mk = (rtb_AND_mk && (PMDR_ac_DW.UnitDelay_DSTATE_p4));

    /* Update for UnitDelay: '<S589>/Unit Delay' */
    PMDR_ac_DW.UnitDelay_DSTATE_p4 = rtb_TmpSignalConversionAtVePMDR_b_RunCra;

    /* End of Outputs for SubSystem: '<S587>/EdgeFalling1' */

    /* Logic: '<S587>/Logical5' incorporates:
     *  Logic: '<S583>/NOT4'
     */
    rtb_TmpSignalConversionAtVePMDR_b_RunCra =
        ((rtb_TmpSignalConversionAtVeDFIR_b_DsblDi ||
          rtb_TmpSignalConversionAtVeDFIR_b_PostCo) || rtb_AND_mk);

    /* Outputs for Atomic SubSystem: '<S588>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S588>/Counter Reset  Enabled ' */
    /* Switch: '<S595>/Switch1' incorporates:
     *  Logic: '<S588>/Fail Counter Reset'
     *  Logic: '<S588>/NOT6'
     *  Switch: '<S595>/Switch2'
     *  Switch: '<S596>/Switch1'
     *  UnitDelay: '<S588>/Unit Delay'
     *  UnitDelay: '<S588>/Unit Delay1'
     */
    if ((rtb_TmpSignalConversionAtVePMDR_b_RunCra ||
            (PMDR_ac_DW.UnitDelay_DSTATE_b1)) || (PMDR_ac_DW.UnitDelay1_DSTATE_a))
    {
        /* Switch: '<S595>/Switch1' incorporates:
         *  Constant: '<S595>/Constant Value2'
         */
        VePMDD_Cnt_Fail_RunHi = 0U;

        /* Switch: '<S596>/Switch1' incorporates:
         *  Constant: '<S596>/Constant Value2'
         */
        VePMDD_Cnt_Smpl_RunHi = 0U;
    }
    else
    {
        if (rtb_Logical5_b3 && rtb_TmpSignalConversionAtVePMDR_b_AccRun)
        {
            /* Switch: '<S595>/Switch1' incorporates:
             *  Constant: '<S595>/Constant Value1'
             *  Sum: '<S595>/Subtraction'
             *  Switch: '<S595>/Switch2'
             *  UnitDelay: '<S595>/Unit Delay'
             */
            VePMDD_Cnt_Fail_RunHi = (uint16)(((uint32)VePMDD_Cnt_Fail_RunHi) +
                1U);
        }

        /* Switch: '<S596>/Switch2' */
        if (rtb_Logical5_b3)
        {
            /* Switch: '<S596>/Switch1' incorporates:
             *  Constant: '<S596>/Constant Value1'
             *  Sum: '<S596>/Subtraction'
             *  Switch: '<S596>/Switch2'
             *  UnitDelay: '<S596>/Unit Delay'
             */
            VePMDD_Cnt_Smpl_RunHi = (uint16)(((uint32)VePMDD_Cnt_Smpl_RunHi) +
                1U);
        }

        /* End of Switch: '<S596>/Switch2' */
    }

    /* End of Switch: '<S595>/Switch1' */
    /* End of Outputs for SubSystem: '<S588>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S588>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S588>/Greater Than or Equal ' incorporates:
     *  Constant: '<S579>/Calib'
     */
    PMDR_ac_DW.UnitDelay1_DSTATE_a = (VePMDD_Cnt_Fail_RunHi >=
        KePMDD_Cnt_RunHiFailLim);

    /* Logic: '<S588>/NOT5' incorporates:
     *  Constant: '<S580>/Calib'
     *  Logic: '<S588>/NOT3'
     *  RelationalOperator: '<S588>/Less Than  or Equal'
     */
    PMDR_ac_DW.UnitDelay_DSTATE_b1 = ((VePMDD_Cnt_Smpl_RunHi >=
        KePMDD_Cnt_RunHiSmplLim) && (!PMDR_ac_DW.UnitDelay1_DSTATE_a));

    /* Switch: '<S601>/Switch1' incorporates:
     *  Constant: '<S594>/Constant Value'
     *  DataStoreWrite: '<S463>/Data Store Write2'
     *  Switch: '<S600>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        PMDR_ac_DW.NePMDD_Cnt_RunHiMaxFOP = 0U;
    }
    else
    {
        if (PMDR_ac_DW.UnitDelay_DSTATE_b1)
        {
            /* MinMax: '<S594>/Minimum2' incorporates:
             *  DataStoreRead: '<S463>/Data Store Read2'
             *  Switch: '<S600>/Switch1'
             */
            if (VePMDD_Cnt_Fail_RunHi > PMDR_ac_DW.NePMDD_Cnt_RunHiMaxFOP)
            {
                /* DataStoreWrite: '<S463>/Data Store Write2' incorporates:
                 *  Switch: '<S600>/Switch1'
                 */
                PMDR_ac_DW.NePMDD_Cnt_RunHiMaxFOP = VePMDD_Cnt_Fail_RunHi;
            }

            /* End of MinMax: '<S594>/Minimum2' */
        }
    }

    /* End of Switch: '<S601>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S587>/Fail' */
    PMDR_ac_Fail(PMDR_ac_DW.UnitDelay1_DSTATE_a, &PMDR_ac_B.Merge_g);

    /* End of Outputs for SubSystem: '<S587>/Fail' */

    /* Outputs for Enabled SubSystem: '<S587>/Init' */
    PMDR_ac_Init_k(rtb_TmpSignalConversionAtVePMDR_b_RunCra, &PMDR_ac_B.Merge_g);

    /* End of Outputs for SubSystem: '<S587>/Init' */

    /* Outputs for Enabled SubSystem: '<S587>/Pass' */
    PMDR_ac_Pass(PMDR_ac_DW.UnitDelay_DSTATE_b1, &PMDR_ac_B.Merge_g);

    /* End of Outputs for SubSystem: '<S587>/Pass' */

    /* Outputs for Enabled SubSystem: '<S196>/Run_Low_Circuit' incorporates:
     *  EnablePort: '<S464>/Enable'
     */

    /* Logic: '<S464>/Logical5' incorporates:
     *  Constant: '<S602>/Constant'
     *  Constant: '<S606>/Calib'
     *  Constant: '<S607>/Calib'
     *  Logic: '<S464>/Logical1'
     *  Logic: '<S464>/Logical4'
     *  RelationalOperator: '<S464>/Comparison2'
     *  SignalConversion generated from: '<S12>/VePMDI_e_PowerModeRaw_Read'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_IsDiag = (((((KePMDD_b_RunLoDiagEnbl) &&
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag) && (((uint32)
        rtb_TmpSignalConversionAtVePMDI_e_PowerM) == CePMDR_e_PowerMode_Run)) &&
        (!rtb_TmpSignalConversionAtVePMDR_b_PowerM)) &&
        ((VePMDD_b_CrnkEvntMet_StrtrMtr) || (KePMDD_b_OvrdMtrStartEvnt)));

    /* Outputs for Atomic SubSystem: '<S464>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S610>/EdgeRising' */
    /* Logic: '<S612>/AND' incorporates:
     *  Logic: '<S612>/OR1'
     *  UnitDelay: '<S612>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVePMDR_b_PowerM =
        (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
         (!PMDR_ac_DW.UnitDelay_DSTATE_i3));

    /* Update for UnitDelay: '<S612>/Unit Delay' */
    PMDR_ac_DW.UnitDelay_DSTATE_i3 = rtb_TmpSignalConversionAtVeDFIR_b_IsDiag;

    /* End of Outputs for SubSystem: '<S610>/EdgeRising' */

    /* Switch: '<S610>/Switch1' incorporates:
     *  Constant: '<S603>/Calib'
     *  Constant: '<S610>/Constant Value'
     *  Constant: '<S610>/Constant Value1'
     *  Logic: '<S610>/OR'
     *  Logic: '<S610>/OR1'
     *  MinMax: '<S610>/Minimum'
     *  Sum: '<S610>/Summation'
     *  UnitDelay: '<S610>/Unit Delay'
     */
    if ((!rtb_TmpSignalConversionAtVeDFIR_b_IsDiag) ||
            rtb_TmpSignalConversionAtVePMDR_b_PowerM)
    {
        PMDR_ac_DW.UnitDelay_DSTATE_hc = 0U;
    }
    else if (KePMDD_Cnt_RunLoDiagEnblDelay < ((uint16)(((uint32)
                PMDR_ac_DW.UnitDelay_DSTATE_hc) + 1U)))
    {
        /* MinMax: '<S610>/Minimum' incorporates:
         *  Constant: '<S603>/Calib'
         */
        PMDR_ac_DW.UnitDelay_DSTATE_hc = KePMDD_Cnt_RunLoDiagEnblDelay;
    }
    else
    {
        /* MinMax: '<S610>/Minimum' incorporates:
         *  Constant: '<S610>/Constant Value'
         *  Sum: '<S610>/Summation'
         *  UnitDelay: '<S610>/Unit Delay'
         */
        PMDR_ac_DW.UnitDelay_DSTATE_hc = (uint16)(((uint32)
            PMDR_ac_DW.UnitDelay_DSTATE_hc) + 1U);
    }

    /* End of Switch: '<S610>/Switch1' */
    /* End of Outputs for SubSystem: '<S464>/Turn On Delay Sample1' */

    /* RelationalOperator: '<S613>/Relational Operator3' incorporates:
     *  Constant: '<S613>/Constant3'
     *  S-Function (sfix_bitop): '<S613>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtVePMDR_b_PowerM = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_pt) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S613>/EdgeFalling1' */
    /* Logic: '<S613>/Logical Operator' incorporates:
     *  Logic: '<S615>/OR1'
     */
    rtb_TmpSignalConversionAtVePMDR_b_RunCra =
        !rtb_TmpSignalConversionAtVePMDR_b_PowerM;

    /* End of Outputs for SubSystem: '<S613>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S464>/Turn On Delay Sample1' */
    /* Logic: '<S613>/Logical1' incorporates:
     *  Constant: '<S603>/Calib'
     *  Constant: '<S608>/Calib'
     *  Constant: '<S613>/Constant1'
     *  Logic: '<S610>/AND'
     *  Logic: '<S613>/Logical Operator'
     *  Logic: '<S613>/Logical10'
     *  Logic: '<S613>/Logical12'
     *  RelationalOperator: '<S610>/Greater  Than'
     *  RelationalOperator: '<S613>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S613>/Bitwise Operator3'
     *  UnitDelay: '<S610>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_IsDiag =
        ((rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
          (PMDR_ac_DW.UnitDelay_DSTATE_hc >= KePMDD_Cnt_RunLoDiagEnblDelay)) &&
         ((!KePMDR_b_IgnSwRunPstnCktLo_LtchEnbl) || (((((uint32)
              rtb_TmpSignalConversionAtVeDMAB_y_Sta_pt) & 1U) == 0U) ||
           rtb_TmpSignalConversionAtVePMDR_b_RunCra)));

    /* End of Outputs for SubSystem: '<S464>/Turn On Delay Sample1' */

    /* Outputs for Atomic SubSystem: '<S613>/EdgeFalling1' */
    /* Logic: '<S615>/AND' incorporates:
     *  UnitDelay: '<S615>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVePMDR_b_RunCra =
        (rtb_TmpSignalConversionAtVePMDR_b_RunCra &&
         (PMDR_ac_DW.UnitDelay_DSTATE_es));

    /* Update for UnitDelay: '<S615>/Unit Delay' */
    PMDR_ac_DW.UnitDelay_DSTATE_es = rtb_TmpSignalConversionAtVePMDR_b_PowerM;

    /* End of Outputs for SubSystem: '<S613>/EdgeFalling1' */

    /* Logic: '<S613>/Logical5' incorporates:
     *  Logic: '<S609>/NOT4'
     */
    rtb_TmpSignalConversionAtVePMDR_b_PowerM =
        ((rtb_TmpSignalConversionAtVeDFIR_b_DsblDi ||
          rtb_TmpSignalConversionAtVeDFIR_b_PostCo) ||
         rtb_TmpSignalConversionAtVePMDR_b_RunCra);

    /* Outputs for Atomic SubSystem: '<S614>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S614>/Counter Reset  Enabled ' */
    /* Switch: '<S621>/Switch1' incorporates:
     *  Logic: '<S464>/Logical2'
     *  Logic: '<S614>/Fail Counter Reset'
     *  Logic: '<S614>/NOT6'
     *  Switch: '<S621>/Switch2'
     *  Switch: '<S622>/Switch1'
     *  UnitDelay: '<S614>/Unit Delay'
     *  UnitDelay: '<S614>/Unit Delay1'
     */
    if ((rtb_TmpSignalConversionAtVePMDR_b_PowerM ||
            (PMDR_ac_DW.UnitDelay_DSTATE_gq)) || (PMDR_ac_DW.UnitDelay1_DSTATE_j))
    {
        /* Switch: '<S621>/Switch1' incorporates:
         *  Constant: '<S621>/Constant Value2'
         */
        VePMDD_Cnt_Fail_RunLo = 0U;

        /* Switch: '<S622>/Switch1' incorporates:
         *  Constant: '<S622>/Constant Value2'
         */
        VePMDD_Cnt_Smpl_RunLo = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
                (!rtb_TmpSignalConversionAtVePMDR_b_AccRun))
        {
            /* Switch: '<S621>/Switch1' incorporates:
             *  Constant: '<S621>/Constant Value1'
             *  Sum: '<S621>/Subtraction'
             *  Switch: '<S621>/Switch2'
             *  UnitDelay: '<S621>/Unit Delay'
             */
            VePMDD_Cnt_Fail_RunLo = (uint16)(((uint32)VePMDD_Cnt_Fail_RunLo) +
                1U);
        }

        /* Switch: '<S622>/Switch2' */
        if (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag)
        {
            /* Switch: '<S622>/Switch1' incorporates:
             *  Constant: '<S622>/Constant Value1'
             *  Sum: '<S622>/Subtraction'
             *  Switch: '<S622>/Switch2'
             *  UnitDelay: '<S622>/Unit Delay'
             */
            VePMDD_Cnt_Smpl_RunLo = (uint16)(((uint32)VePMDD_Cnt_Smpl_RunLo) +
                1U);
        }

        /* End of Switch: '<S622>/Switch2' */
    }

    /* End of Switch: '<S621>/Switch1' */
    /* End of Outputs for SubSystem: '<S614>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S614>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S614>/Greater Than or Equal ' incorporates:
     *  Constant: '<S604>/Calib'
     */
    rtb_Logical5_b3 = (VePMDD_Cnt_Fail_RunLo >= KePMDD_Cnt_RunLoFailLim);

    /* Logic: '<S614>/NOT5' incorporates:
     *  Constant: '<S605>/Calib'
     *  Logic: '<S614>/NOT3'
     *  RelationalOperator: '<S614>/Less Than  or Equal'
     */
    rtb_AND_mk = ((VePMDD_Cnt_Smpl_RunLo >= KePMDD_Cnt_RunLoSmplLim) &&
                  (!rtb_Logical5_b3));

    /* Switch: '<S627>/Switch1' incorporates:
     *  Constant: '<S620>/Constant Value'
     *  DataStoreWrite: '<S464>/Data Store Write2'
     *  Switch: '<S626>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        PMDR_ac_DW.NePMDD_Cnt_RunLoMaxFOP = 0U;
    }
    else
    {
        if (rtb_AND_mk)
        {
            /* MinMax: '<S620>/Minimum2' incorporates:
             *  DataStoreRead: '<S464>/Data Store Read2'
             *  Switch: '<S626>/Switch1'
             */
            if (VePMDD_Cnt_Fail_RunLo > PMDR_ac_DW.NePMDD_Cnt_RunLoMaxFOP)
            {
                /* DataStoreWrite: '<S464>/Data Store Write2' incorporates:
                 *  Switch: '<S626>/Switch1'
                 */
                PMDR_ac_DW.NePMDD_Cnt_RunLoMaxFOP = VePMDD_Cnt_Fail_RunLo;
            }

            /* End of MinMax: '<S620>/Minimum2' */
        }
    }

    /* End of Switch: '<S627>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S613>/Fail' */
    PMDR_ac_Fail(rtb_Logical5_b3, &PMDR_ac_B.Merge_d);

    /* End of Outputs for SubSystem: '<S613>/Fail' */

    /* Outputs for Enabled SubSystem: '<S613>/Init' */
    PMDR_ac_Init_k(rtb_TmpSignalConversionAtVePMDR_b_PowerM, &PMDR_ac_B.Merge_d);

    /* End of Outputs for SubSystem: '<S613>/Init' */

    /* Outputs for Enabled SubSystem: '<S613>/Pass' */
    PMDR_ac_Pass(rtb_AND_mk, &PMDR_ac_B.Merge_d);

    /* End of Outputs for SubSystem: '<S613>/Pass' */

    /* End of Outputs for SubSystem: '<S196>/Run_High_Circuit' */
    /* End of Outputs for SubSystem: '<S196>/Run_Low_Circuit' */
#endif

#if Rte_SysCon_Variant_PMDR_12

    /* Update for Enabled SubSystem: '<S196>/RunCrk_Low_Crct' */
    /* Update for Enabled SubSystem: '<S196>/RunCrk_Low_Crct' incorporates:
     *  EnablePort: '<S461>/Enable'
     */

    /* Update for UnitDelay: '<S537>/Unit Delay' */
    PMDR_ac_DW.UnitDelay_DSTATE_oc = rtb_Logical9;

    /* Update for UnitDelay: '<S537>/Unit Delay1' */
    PMDR_ac_DW.UnitDelay1_DSTATE_jm = rtb_Comparison2_ap;

    /* End of Update for SubSystem: '<S196>/RunCrk_Low_Crct' */
#endif

#if Rte_SysCon_Variant_PMDR_11

    /* Update for Enabled SubSystem: '<S196>/Run_Low_Circuit' */
    /* Update for Enabled SubSystem: '<S196>/Run_Low_Circuit' incorporates:
     *  EnablePort: '<S464>/Enable'
     */

    /* Update for UnitDelay: '<S614>/Unit Delay' */
    PMDR_ac_DW.UnitDelay_DSTATE_gq = rtb_AND_mk;

    /* Update for UnitDelay: '<S614>/Unit Delay1' */
    PMDR_ac_DW.UnitDelay1_DSTATE_j = rtb_Logical5_b3;

    /* End of Update for SubSystem: '<S196>/Run_Low_Circuit' */
#endif

    /* End of Outputs for S-Function (fcgen): '<S12>/FcnCallGen1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeESSR_e_EngStrtType' */
    (void)Rte_Read_VeESSR_e_EngStrtType_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/PMDR_MedTED'
     */
    /* S-Function (fcgen): '<S12>/FcnCallGen1' incorporates:
     *  SubSystem: '<S12>/PMDD_Sys_Volt_Diag'
     */

    /* Logic: '<S332>/Logical11' incorporates:
     *  Constant: '<S356>/Constant'
     *  Constant: '<S357>/Calib'
     *  RelationalOperator: '<S332>/Comparison4'
     *  SignalConversion generated from: '<S12>/VePMDR_e_PMM_PowerMode_Read'
     */
    VePMDD_b_CrnkEvntMet_Key = ((((uint32)
        rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) == CePMDR_e_PowerMode_Run) ||
        (KePMDD_b_OvrdStarterMtrCond));

    /* RelationalOperator: '<S332>/Comparison5' incorporates:
     *  Constant: '<S355>/Constant'
     *  Inport: '<Root>/VeESSR_e_EngStrtType'
     */
    rtb_TmpSignalConversionAtVePMDR_b_PowerM = (((uint32)tmpRead) ==
        CeESSR_e_EngTrqStrt);

    /* Outputs for Atomic SubSystem: '<S332>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S362>/EdgeRising' */
    /* Logic: '<S363>/AND' incorporates:
     *  Logic: '<S363>/OR1'
     *  UnitDelay: '<S363>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVePMDR_b_AccRun =
        (rtb_TmpSignalConversionAtVePMDR_b_PowerM &&
         (!PMDR_ac_DW.UnitDelay_DSTATE_lr));

    /* Update for UnitDelay: '<S363>/Unit Delay' */
    PMDR_ac_DW.UnitDelay_DSTATE_lr = rtb_TmpSignalConversionAtVePMDR_b_PowerM;

    /* End of Outputs for SubSystem: '<S362>/EdgeRising' */

    /* Logic: '<S362>/OR1' incorporates:
     *  Logic: '<S332>/Logical14'
     */
    rtb_TmpSignalConversionAtVePMDR_b_PowerM =
        !rtb_TmpSignalConversionAtVePMDR_b_PowerM;

    /* Switch: '<S362>/Switch1' incorporates:
     *  Constant: '<S360>/Calib'
     *  Constant: '<S361>/Calib'
     *  Constant: '<S362>/Constant Value1'
     *  Logic: '<S362>/OR'
     *  Logic: '<S362>/OR1'
     *  MinMax: '<S362>/Minimum'
     *  Sum: '<S362>/Summation'
     *  UnitDelay: '<S362>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVePMDR_b_PowerM ||
            rtb_TmpSignalConversionAtVePMDR_b_AccRun)
    {
        PMDR_ac_DW.UnitDelay_DSTATE = 0.0F;
    }
    else
    {
        PMDR_ac_DW.UnitDelay_DSTATE = fminf(KePMDD_t_StarterMtrCondTout,
            KePMDR_t_dT + PMDR_ac_DW.UnitDelay_DSTATE);
    }

    /* End of Switch: '<S362>/Switch1' */

    /* Logic: '<S332>/Logical12' incorporates:
     *  Constant: '<S357>/Calib'
     *  Constant: '<S360>/Calib'
     *  RelationalOperator: '<S362>/Greater  Than'
     *  UnitDelay: '<S362>/Unit Delay'
     */
    VePMDD_b_CrnkEvntMet_StrtrMtr = ((rtb_TmpSignalConversionAtVePMDR_b_PowerM ||
        (PMDR_ac_DW.UnitDelay_DSTATE >= KePMDD_t_StarterMtrCondTout)) ||
        (KePMDD_b_OvrdStarterMtrCond));

    /* End of Outputs for SubSystem: '<S332>/Turn On Delay Time' */

    /* Logic: '<S332>/Logical' incorporates:
     *  Constant: '<S358>/Calib'
     *  Constant: '<S359>/Calib'
     *  Logic: '<S332>/Logical1'
     *  Logic: '<S332>/Logical13'
     */
    rtb_TmpSignalConversionAtVePMDR_b_AccRun = (((((KePMDD_b_SysVoltLowDiagEnbl)
        && ((KePMDD_b_SysVoltDiag_OvrdRunCrnkEnbl) ||
            rtb_TmpSignalConversionAtVePMDR_b_RunC_i)) &&
        (!rtb_TmpSignalConversionAtVeDFIR_b_DiagSy)) &&
        (VePMDD_b_CrnkEvntMet_Key)) && (VePMDD_b_CrnkEvntMet_StrtrMtr));

    /* Logic: '<S331>/NOT4' */
#if Rte_SysCon_Variant_PMDR_4 || Rte_SysCon_Variant_PMDR_5 || Rte_SysCon_Variant_PMDR_6 || Rte_SysCon_Variant_PMDR_7 || Rte_SysCon_Variant_PMDR_8

    /* Logic: '<S331>/NOT4' */
    rtb_NOT4 = (rtb_TmpSignalConversionAtVeDFIR_b_DsblDi ||
                rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

#endif

    /* End of Logic: '<S331>/NOT4' */

    /* Outputs for Atomic SubSystem: '<S199>/SysVoltLow_HB' */
#if Rte_SysCon_Variant_PMDR_7

    /* Outputs for Atomic SubSystem: '<S336>/SysVoltLow_HB' */

    /* RelationalOperator: '<S424>/Relational Operator3' incorporates:
     *  Constant: '<S424>/Constant3'
     *  S-Function (sfix_bitop): '<S424>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_IsDiag = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_m) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S424>/EdgeFalling1' */
    /* Logic: '<S424>/Logical Operator' incorporates:
     *  Logic: '<S426>/OR1'
     */
    rtb_Comparison2_ap = !rtb_TmpSignalConversionAtVeDFIR_b_IsDiag;

    /* End of Outputs for SubSystem: '<S424>/EdgeFalling1' */

    /* Logic: '<S424>/Logical1' incorporates:
     *  Constant: '<S330>/Calib'
     *  Constant: '<S424>/Constant1'
     *  Logic: '<S424>/Logical Operator'
     *  Logic: '<S424>/Logical10'
     *  Logic: '<S424>/Logical12'
     *  RelationalOperator: '<S424>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S424>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVePMDR_b_PowerM =
        (rtb_TmpSignalConversionAtVePMDR_b_AccRun &&
         ((!KePMDR_b_SysVoltLo_LtchEnbl) || (((((uint32)
              rtb_TmpSignalConversionAtVeDMAB_y_Stat_m) & 1U) == 0U) ||
           rtb_Comparison2_ap)));

    /* RelationalOperator: '<S421>/Comparison3' incorporates:
     *  Constant: '<S329>/Calib'
     */
    VePMDR_b_HB_SysLoFailSetting = (rtb_TmpSignalConversionAtVePMDB_U_HB_Sys <=
        KePMDD_U_SysVoltMinThrsh);

    /* Outputs for Atomic SubSystem: '<S424>/EdgeFalling1' */
    /* Logic: '<S426>/AND' incorporates:
     *  UnitDelay: '<S426>/Unit Delay'
     */
    rtb_Comparison2_ap = (rtb_Comparison2_ap && (PMDR_ac_DW.UnitDelay_DSTATE_j2));

    /* Update for UnitDelay: '<S426>/Unit Delay' */
    PMDR_ac_DW.UnitDelay_DSTATE_j2 = rtb_TmpSignalConversionAtVeDFIR_b_IsDiag;

    /* End of Outputs for SubSystem: '<S424>/EdgeFalling1' */

    /* Logic: '<S424>/Logical5' */
    rtb_TmpSignalConversionAtVeDFIR_b_IsDiag = (rtb_NOT4 || rtb_Comparison2_ap);

    /* Outputs for Atomic SubSystem: '<S425>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S425>/Counter Reset  Enabled ' */
    /* Switch: '<S432>/Switch1' incorporates:
     *  Logic: '<S425>/Fail Counter Reset'
     *  Logic: '<S425>/NOT6'
     *  Switch: '<S432>/Switch2'
     *  Switch: '<S433>/Switch1'
     *  UnitDelay: '<S425>/Unit Delay'
     *  UnitDelay: '<S425>/Unit Delay1'
     */
    if ((rtb_TmpSignalConversionAtVeDFIR_b_IsDiag ||
            (PMDR_ac_DW.UnitDelay_DSTATE_d3)) || (PMDR_ac_DW.UnitDelay1_DSTATE_c))
    {
        /* Switch: '<S432>/Switch1' incorporates:
         *  Constant: '<S432>/Constant Value2'
         */
        VePMDD_Cnt_SysVoltLowFail_HB = 0U;

        /* Switch: '<S433>/Switch1' incorporates:
         *  Constant: '<S433>/Constant Value2'
         */
        VePMDD_Cnt_SysVoltLowSmpl_HB = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVePMDR_b_PowerM &&
                (VePMDR_b_HB_SysLoFailSetting))
        {
            /* Switch: '<S432>/Switch1' incorporates:
             *  Constant: '<S432>/Constant Value1'
             *  Sum: '<S432>/Subtraction'
             *  Switch: '<S432>/Switch2'
             *  UnitDelay: '<S432>/Unit Delay'
             */
            VePMDD_Cnt_SysVoltLowFail_HB = (uint16)(((uint32)
                VePMDD_Cnt_SysVoltLowFail_HB) + 1U);
        }

        /* Switch: '<S433>/Switch2' */
        if (rtb_TmpSignalConversionAtVePMDR_b_PowerM)
        {
            /* Switch: '<S433>/Switch1' incorporates:
             *  Constant: '<S433>/Constant Value1'
             *  Sum: '<S433>/Subtraction'
             *  Switch: '<S433>/Switch2'
             *  UnitDelay: '<S433>/Unit Delay'
             */
            VePMDD_Cnt_SysVoltLowSmpl_HB = (uint16)(((uint32)
                VePMDD_Cnt_SysVoltLowSmpl_HB) + 1U);
        }

        /* End of Switch: '<S433>/Switch2' */
    }

    /* End of Switch: '<S432>/Switch1' */
    /* End of Outputs for SubSystem: '<S425>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S425>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S425>/Greater Than or Equal ' incorporates:
     *  Constant: '<S327>/Calib'
     */
    PMDR_ac_DW.UnitDelay1_DSTATE_c = (VePMDD_Cnt_SysVoltLowFail_HB >=
        KePMDD_Cnt_SysVoltLoFail);

    /* Logic: '<S425>/NOT5' incorporates:
     *  Constant: '<S328>/Calib'
     *  Logic: '<S425>/NOT3'
     *  RelationalOperator: '<S425>/Less Than  or Equal'
     */
    PMDR_ac_DW.UnitDelay_DSTATE_d3 = ((VePMDD_Cnt_SysVoltLowSmpl_HB >=
        KePMDD_Cnt_SysVoltLoSample) && (!PMDR_ac_DW.UnitDelay1_DSTATE_c));

    /* Switch: '<S438>/Switch1' incorporates:
     *  Constant: '<S431>/Constant Value'
     *  DataStoreWrite: '<S421>/Data Store Write11'
     *  Switch: '<S437>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        PMDR_ac_DW.NePMDR_Cnt_HBSysVoltLow_MFOP = 0U;
    }
    else
    {
        if (PMDR_ac_DW.UnitDelay_DSTATE_d3)
        {
            /* MinMax: '<S431>/Minimum2' incorporates:
             *  DataStoreRead: '<S421>/Data Store Read11'
             *  Switch: '<S437>/Switch1'
             */
            if (VePMDD_Cnt_SysVoltLowFail_HB >
                    PMDR_ac_DW.NePMDR_Cnt_HBSysVoltLow_MFOP)
            {
                /* DataStoreWrite: '<S421>/Data Store Write11' incorporates:
                 *  Switch: '<S437>/Switch1'
                 */
                PMDR_ac_DW.NePMDR_Cnt_HBSysVoltLow_MFOP =
                    VePMDD_Cnt_SysVoltLowFail_HB;
            }

            /* End of MinMax: '<S431>/Minimum2' */
        }
    }

    /* End of Switch: '<S438>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S424>/Fail' */
    PMDR_ac_Fail(PMDR_ac_DW.UnitDelay1_DSTATE_c,
                 (&(VePMDR_e_FaultSts_SysVoltLo_HB)));

    /* End of Outputs for SubSystem: '<S424>/Fail' */

    /* Outputs for Enabled SubSystem: '<S424>/Init' */
    PMDR_ac_Init_k(rtb_TmpSignalConversionAtVeDFIR_b_IsDiag,
                   (&(VePMDR_e_FaultSts_SysVoltLo_HB)));

    /* End of Outputs for SubSystem: '<S424>/Init' */

    /* Outputs for Enabled SubSystem: '<S424>/Pass' */
    PMDR_ac_Pass(PMDR_ac_DW.UnitDelay_DSTATE_d3,
                 (&(VePMDR_e_FaultSts_SysVoltLo_HB)));

    /* End of Outputs for SubSystem: '<S424>/Pass' */

    /* VariantMerge generated from: '<S336>/SysVoltLowFA_HB' incorporates:
     *  Constant: '<S427>/Constant'
     *  RelationalOperator: '<S424>/Relational Operator'
     *  VariantMerge generated from: '<S336>/FaultSts_SysVoltLo_HB'
     */
    PMDR_ac_B.VariantMergeForOutportSysVoltLowFA_HB = (((uint32)
        VePMDR_e_FaultSts_SysVoltLo_HB) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S336>/SysVoltLow_HB' */
#else

    /* Outputs for Atomic SubSystem: '<S336>/SysVoltLow_HB_Stub' */
    /* VariantMerge generated from: '<S336>/FaultSts_SysVoltLo_HB' incorporates:
     *  Constant: '<S439>/Constant'
     */
    VePMDR_e_FaultSts_SysVoltLo_HB = CeDFIB_e_Pass;

    /* VariantMerge generated from: '<S336>/SysVoltLowFA_HB' incorporates:
     *  Constant: '<S422>/FALSE Constant2'
     */
    PMDR_ac_B.VariantMergeForOutportSysVoltLowFA_HB = false;

    /* End of Outputs for SubSystem: '<S336>/SysVoltLow_HB_Stub' */
#endif

    /* End of Outputs for SubSystem: '<S199>/SysVoltLow_HB' */

    /* Logic: '<S206>/Logical13' incorporates:
     *  Logic: '<S205>/NOT4'
     *  Logic: '<S206>/Logical'
     *  Logic: '<S206>/Logical1'
     */
#if Rte_SysCon_Variant_PMDR_4 || Rte_SysCon_Variant_PMDR_5 || Rte_SysCon_Variant_PMDR_6 || Rte_SysCon_Variant_PMDR_7 || Rte_SysCon_Variant_PMDR_8

    /* Logic: '<S206>/Logical' incorporates:
     *  Constant: '<S229>/Calib'
     *  Constant: '<S230>/Calib'
     */
    rtb_Logical_o = (((KePMDD_b_SysVoltHighDiagEnbl) &&
                      ((KePMDD_b_SysVoltDiag_OvrdRunCrnkEnbl) ||
                       rtb_TmpSignalConversionAtVePMDR_b_RunC_i)) &&
                     (!rtb_TmpSignalConversionAtVeDFIR_b_DiagSy));

    /* Logic: '<S205>/NOT4' */
    rtb_NOT4_h = (rtb_TmpSignalConversionAtVeDFIR_b_DsblDi ||
                  rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

#endif

    /* End of Logic: '<S206>/Logical13' */

    /* Outputs for Atomic SubSystem: '<S198>/SysVoltHigh_HB' */
#if Rte_SysCon_Variant_PMDR_7

    /* Outputs for Atomic SubSystem: '<S210>/SysVoltHigh_HB' */

    /* RelationalOperator: '<S291>/Relational Operator3' incorporates:
     *  Constant: '<S291>/Constant3'
     *  S-Function (sfix_bitop): '<S291>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtVePMDR_b_RunC_i = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_p) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S291>/EdgeFalling1' */
    /* Logic: '<S291>/Logical Operator' incorporates:
     *  Logic: '<S293>/OR1'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_DiagSy =
        !rtb_TmpSignalConversionAtVePMDR_b_RunC_i;

    /* End of Outputs for SubSystem: '<S291>/EdgeFalling1' */

    /* Logic: '<S291>/Logical1' incorporates:
     *  Constant: '<S204>/Calib'
     *  Constant: '<S291>/Constant1'
     *  Logic: '<S291>/Logical Operator'
     *  Logic: '<S291>/Logical10'
     *  Logic: '<S291>/Logical12'
     *  RelationalOperator: '<S291>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S291>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_DsblDi = (rtb_Logical_o &&
        ((!KePMDR_b_SysVoltHi_LtchEnbl) || (((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_p) & 1U) == 0U) ||
        rtb_TmpSignalConversionAtVeDFIR_b_DiagSy)));

    /* RelationalOperator: '<S288>/Comparison7' incorporates:
     *  Constant: '<S203>/Calib'
     */
    VePMDR_b_HB_SysHiFailSetting = (rtb_TmpSignalConversionAtVePMDB_U_HB_Sys >=
        KePMDD_U_SysVoltMaxThrsh);

    /* Outputs for Atomic SubSystem: '<S291>/EdgeFalling1' */
    /* Logic: '<S293>/AND' incorporates:
     *  UnitDelay: '<S293>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_DiagSy =
        (rtb_TmpSignalConversionAtVeDFIR_b_DiagSy &&
         (PMDR_ac_DW.UnitDelay_DSTATE_ju));

    /* Update for UnitDelay: '<S293>/Unit Delay' */
    PMDR_ac_DW.UnitDelay_DSTATE_ju = rtb_TmpSignalConversionAtVePMDR_b_RunC_i;

    /* End of Outputs for SubSystem: '<S291>/EdgeFalling1' */

    /* Logic: '<S291>/Logical5' */
    rtb_TmpSignalConversionAtVePMDR_b_RunC_i = (rtb_NOT4_h ||
        rtb_TmpSignalConversionAtVeDFIR_b_DiagSy);

    /* Outputs for Atomic SubSystem: '<S292>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S292>/Counter Reset  Enabled ' */
    /* Switch: '<S299>/Switch1' incorporates:
     *  Logic: '<S292>/Fail Counter Reset'
     *  Logic: '<S292>/NOT6'
     *  Switch: '<S299>/Switch2'
     *  Switch: '<S300>/Switch1'
     *  UnitDelay: '<S292>/Unit Delay'
     *  UnitDelay: '<S292>/Unit Delay1'
     */
    if ((rtb_TmpSignalConversionAtVePMDR_b_RunC_i ||
            (PMDR_ac_DW.UnitDelay_DSTATE_gy)) || (PMDR_ac_DW.UnitDelay1_DSTATE_h))
    {
        /* Switch: '<S299>/Switch1' incorporates:
         *  Constant: '<S299>/Constant Value2'
         */
        VePMDD_Cnt_SysVoltHiFail_HB = 0U;

        /* Switch: '<S300>/Switch1' incorporates:
         *  Constant: '<S300>/Constant Value2'
         */
        VePMDD_Cnt_SysVoltHiSmpl_HB = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeDFIR_b_DsblDi &&
                (VePMDR_b_HB_SysHiFailSetting))
        {
            /* Switch: '<S299>/Switch1' incorporates:
             *  Constant: '<S299>/Constant Value1'
             *  Sum: '<S299>/Subtraction'
             *  Switch: '<S299>/Switch2'
             *  UnitDelay: '<S299>/Unit Delay'
             */
            VePMDD_Cnt_SysVoltHiFail_HB = (uint16)(((uint32)
                VePMDD_Cnt_SysVoltHiFail_HB) + 1U);
        }

        /* Switch: '<S300>/Switch2' */
        if (rtb_TmpSignalConversionAtVeDFIR_b_DsblDi)
        {
            /* Switch: '<S300>/Switch1' incorporates:
             *  Constant: '<S300>/Constant Value1'
             *  Sum: '<S300>/Subtraction'
             *  Switch: '<S300>/Switch2'
             *  UnitDelay: '<S300>/Unit Delay'
             */
            VePMDD_Cnt_SysVoltHiSmpl_HB = (uint16)(((uint32)
                VePMDD_Cnt_SysVoltHiSmpl_HB) + 1U);
        }

        /* End of Switch: '<S300>/Switch2' */
    }

    /* End of Switch: '<S299>/Switch1' */
    /* End of Outputs for SubSystem: '<S292>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S292>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S292>/Greater Than or Equal ' incorporates:
     *  Constant: '<S201>/Calib'
     */
    PMDR_ac_DW.UnitDelay1_DSTATE_h = (VePMDD_Cnt_SysVoltHiFail_HB >=
        KePMDD_Cnt_SysVoltHiFail);

    /* Logic: '<S292>/NOT5' incorporates:
     *  Constant: '<S202>/Calib'
     *  Logic: '<S292>/NOT3'
     *  RelationalOperator: '<S292>/Less Than  or Equal'
     */
    PMDR_ac_DW.UnitDelay_DSTATE_gy = ((VePMDD_Cnt_SysVoltHiSmpl_HB >=
        KePMDD_Cnt_SysVoltHiSample) && (!PMDR_ac_DW.UnitDelay1_DSTATE_h));

    /* Switch: '<S305>/Switch1' incorporates:
     *  Constant: '<S298>/Constant Value'
     *  DataStoreWrite: '<S288>/Data Store Write3'
     *  Switch: '<S304>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        PMDR_ac_DW.NePMDR_Cnt_BFHBSysVoltHi_MFOP = 0U;
    }
    else
    {
        if (PMDR_ac_DW.UnitDelay_DSTATE_gy)
        {
            /* MinMax: '<S298>/Minimum2' incorporates:
             *  DataStoreRead: '<S288>/Data Store Read8'
             *  Switch: '<S304>/Switch1'
             */
            if (VePMDD_Cnt_SysVoltHiFail_HB >
                    PMDR_ac_DW.NePMDR_Cnt_BFHBSysVoltHi_MFOP)
            {
                /* DataStoreWrite: '<S288>/Data Store Write3' incorporates:
                 *  Switch: '<S304>/Switch1'
                 */
                PMDR_ac_DW.NePMDR_Cnt_BFHBSysVoltHi_MFOP =
                    VePMDD_Cnt_SysVoltHiFail_HB;
            }

            /* End of MinMax: '<S298>/Minimum2' */
        }
    }

    /* End of Switch: '<S305>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S291>/Fail' */
    PMDR_ac_Fail(PMDR_ac_DW.UnitDelay1_DSTATE_h,
                 (&(VePMDR_e_FaultSts_SysVoltHi_HB)));

    /* End of Outputs for SubSystem: '<S291>/Fail' */

    /* Outputs for Enabled SubSystem: '<S291>/Init' */
    PMDR_ac_Init_k(rtb_TmpSignalConversionAtVePMDR_b_RunC_i,
                   (&(VePMDR_e_FaultSts_SysVoltHi_HB)));

    /* End of Outputs for SubSystem: '<S291>/Init' */

    /* Outputs for Enabled SubSystem: '<S291>/Pass' */
    PMDR_ac_Pass(PMDR_ac_DW.UnitDelay_DSTATE_gy,
                 (&(VePMDR_e_FaultSts_SysVoltHi_HB)));

    /* End of Outputs for SubSystem: '<S291>/Pass' */

    /* VariantMerge generated from: '<S210>/SysVoltHighFA_HB' incorporates:
     *  Constant: '<S294>/Constant'
     *  RelationalOperator: '<S291>/Relational Operator'
     *  VariantMerge generated from: '<S210>/FaultSts_SysVoltHi_HB'
     */
    VePMDR_b_SysVoltHighFA_HB = (((uint32)VePMDR_e_FaultSts_SysVoltHi_HB) ==
        CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S210>/SysVoltHigh_HB' */
#else

    /* Outputs for Atomic SubSystem: '<S210>/SysVoltHigh_HB_Stub' */
    /* VariantMerge generated from: '<S210>/FaultSts_SysVoltHi_HB' incorporates:
     *  Constant: '<S306>/Constant'
     */
    VePMDR_e_FaultSts_SysVoltHi_HB = CeDFIB_e_Pass;

    /* VariantMerge generated from: '<S210>/SysVoltHighFA_HB' incorporates:
     *  Constant: '<S289>/Constant'
     */
    VePMDR_b_SysVoltHighFA_HB = false;

    /* End of Outputs for SubSystem: '<S210>/SysVoltHigh_HB_Stub' */
#endif

    /* End of Outputs for SubSystem: '<S198>/SysVoltHigh_HB' */

    /* Logic: '<S195>/Logical1' */
    rtb_TmpSignalConversionAtVeDFIR_b_DsblDi =
        ((PMDR_ac_B.VariantMergeForOutportSysVoltLowFA_HB) ||
         (VePMDR_b_SysVoltHighFA_HB));

    /* Outputs for Atomic SubSystem: '<S198>/SysVoltHigh_BF1' */
#if Rte_SysCon_Variant_PMDR_4

    /* Outputs for Atomic SubSystem: '<S207>/SysVoltHigh_BF1' */

    /* RelationalOperator: '<S234>/Relational Operator3' incorporates:
     *  Constant: '<S234>/Constant3'
     *  S-Function (sfix_bitop): '<S234>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_DiagSy = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_p) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S234>/EdgeFalling1' */
    /* Logic: '<S234>/Logical Operator' incorporates:
     *  Logic: '<S236>/OR1'
     */
    rtb_TmpSignalConversionAtVePMDR_b_PowerM =
        !rtb_TmpSignalConversionAtVeDFIR_b_DiagSy;

    /* End of Outputs for SubSystem: '<S234>/EdgeFalling1' */

    /* Logic: '<S234>/Logical1' incorporates:
     *  Constant: '<S204>/Calib'
     *  Constant: '<S234>/Constant1'
     *  Logic: '<S234>/Logical Operator'
     *  Logic: '<S234>/Logical10'
     *  Logic: '<S234>/Logical12'
     *  RelationalOperator: '<S234>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S234>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVePMDR_b_RunC_i = (rtb_Logical_o &&
        ((!KePMDR_b_SysVoltHi_LtchEnbl) || (((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_p) & 1U) == 0U) ||
        rtb_TmpSignalConversionAtVePMDR_b_PowerM)));

    /* RelationalOperator: '<S231>/Comparison7' incorporates:
     *  Constant: '<S203>/Calib'
     */
    VePMDR_b_BF1_SysHiFailSetting = (rtb_TmpSignalConversionAtVePMDB_U_BF1_Sy >=
        KePMDD_U_SysVoltMaxThrsh);

    /* Outputs for Atomic SubSystem: '<S234>/EdgeFalling1' */
    /* Logic: '<S236>/AND' incorporates:
     *  UnitDelay: '<S236>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVePMDR_b_PowerM =
        (rtb_TmpSignalConversionAtVePMDR_b_PowerM &&
         (PMDR_ac_DW.UnitDelay_DSTATE_gm));

    /* Update for UnitDelay: '<S236>/Unit Delay' */
    PMDR_ac_DW.UnitDelay_DSTATE_gm = rtb_TmpSignalConversionAtVeDFIR_b_DiagSy;

    /* End of Outputs for SubSystem: '<S234>/EdgeFalling1' */

    /* Logic: '<S234>/Logical5' */
    rtb_TmpSignalConversionAtVeDFIR_b_DiagSy = (rtb_NOT4_h ||
        rtb_TmpSignalConversionAtVePMDR_b_PowerM);

    /* Outputs for Atomic SubSystem: '<S235>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S235>/Counter Reset  Enabled ' */
    /* Switch: '<S242>/Switch1' incorporates:
     *  Logic: '<S235>/Fail Counter Reset'
     *  Logic: '<S235>/NOT6'
     *  Switch: '<S242>/Switch2'
     *  Switch: '<S243>/Switch1'
     *  UnitDelay: '<S235>/Unit Delay'
     *  UnitDelay: '<S235>/Unit Delay1'
     */
    if ((rtb_TmpSignalConversionAtVeDFIR_b_DiagSy ||
            (PMDR_ac_DW.UnitDelay_DSTATE_os)) ||
            (PMDR_ac_DW.UnitDelay1_DSTATE_k4))
    {
        /* Switch: '<S242>/Switch1' incorporates:
         *  Constant: '<S242>/Constant Value2'
         */
        VePMDD_Cnt_SysVoltHiFail_BF1 = 0U;

        /* Switch: '<S243>/Switch1' incorporates:
         *  Constant: '<S243>/Constant Value2'
         */
        VePMDD_Cnt_SysVoltHiSmpl_BF1 = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVePMDR_b_RunC_i &&
                (VePMDR_b_BF1_SysHiFailSetting))
        {
            /* Switch: '<S242>/Switch1' incorporates:
             *  Constant: '<S242>/Constant Value1'
             *  Sum: '<S242>/Subtraction'
             *  Switch: '<S242>/Switch2'
             *  UnitDelay: '<S242>/Unit Delay'
             */
            VePMDD_Cnt_SysVoltHiFail_BF1 = (uint16)(((uint32)
                VePMDD_Cnt_SysVoltHiFail_BF1) + 1U);
        }

        /* Switch: '<S243>/Switch2' */
        if (rtb_TmpSignalConversionAtVePMDR_b_RunC_i)
        {
            /* Switch: '<S243>/Switch1' incorporates:
             *  Constant: '<S243>/Constant Value1'
             *  Sum: '<S243>/Subtraction'
             *  Switch: '<S243>/Switch2'
             *  UnitDelay: '<S243>/Unit Delay'
             */
            VePMDD_Cnt_SysVoltHiSmpl_BF1 = (uint16)(((uint32)
                VePMDD_Cnt_SysVoltHiSmpl_BF1) + 1U);
        }

        /* End of Switch: '<S243>/Switch2' */
    }

    /* End of Switch: '<S242>/Switch1' */
    /* End of Outputs for SubSystem: '<S235>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S235>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S235>/Greater Than or Equal ' incorporates:
     *  Constant: '<S201>/Calib'
     */
    PMDR_ac_DW.UnitDelay1_DSTATE_k4 = (VePMDD_Cnt_SysVoltHiFail_BF1 >=
        KePMDD_Cnt_SysVoltHiFail);

    /* Logic: '<S235>/NOT5' incorporates:
     *  Constant: '<S202>/Calib'
     *  Logic: '<S235>/NOT3'
     *  RelationalOperator: '<S235>/Less Than  or Equal'
     */
    PMDR_ac_DW.UnitDelay_DSTATE_os = ((VePMDD_Cnt_SysVoltHiSmpl_BF1 >=
        KePMDD_Cnt_SysVoltHiSample) && (!PMDR_ac_DW.UnitDelay1_DSTATE_k4));

    /* Switch: '<S248>/Switch1' incorporates:
     *  Constant: '<S241>/Constant Value'
     *  DataStoreWrite: '<S231>/Data Store Write3'
     *  Switch: '<S247>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        PMDR_ac_DW.NePMDR_Cnt_BF1SysVoltHi_MFOP = 0U;
    }
    else
    {
        if (PMDR_ac_DW.UnitDelay_DSTATE_os)
        {
            /* MinMax: '<S241>/Minimum2' incorporates:
             *  DataStoreRead: '<S231>/Data Store Read8'
             *  Switch: '<S247>/Switch1'
             */
            if (VePMDD_Cnt_SysVoltHiFail_BF1 >
                    PMDR_ac_DW.NePMDR_Cnt_BF1SysVoltHi_MFOP)
            {
                /* DataStoreWrite: '<S231>/Data Store Write3' incorporates:
                 *  Switch: '<S247>/Switch1'
                 */
                PMDR_ac_DW.NePMDR_Cnt_BF1SysVoltHi_MFOP =
                    VePMDD_Cnt_SysVoltHiFail_BF1;
            }

            /* End of MinMax: '<S241>/Minimum2' */
        }
    }

    /* End of Switch: '<S248>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S234>/Fail' */
    PMDR_ac_Fail(PMDR_ac_DW.UnitDelay1_DSTATE_k4,
                 (&(VePMDR_e_FaultSts_SysVoltHi_BF1)));

    /* End of Outputs for SubSystem: '<S234>/Fail' */

    /* Outputs for Enabled SubSystem: '<S234>/Init' */
    PMDR_ac_Init_k(rtb_TmpSignalConversionAtVeDFIR_b_DiagSy,
                   (&(VePMDR_e_FaultSts_SysVoltHi_BF1)));

    /* End of Outputs for SubSystem: '<S234>/Init' */

    /* Outputs for Enabled SubSystem: '<S234>/Pass' */
    PMDR_ac_Pass(PMDR_ac_DW.UnitDelay_DSTATE_os,
                 (&(VePMDR_e_FaultSts_SysVoltHi_BF1)));

    /* End of Outputs for SubSystem: '<S234>/Pass' */

    /* RelationalOperator: '<S234>/Relational Operator' incorporates:
     *  Constant: '<S237>/Constant'
     *  VariantMerge generated from: '<S207>/FaultSts_SysVoltHi_BF1'
     */
    VePMDR_b_SysVoltHighFA_BF1 = (((uint32)VePMDR_e_FaultSts_SysVoltHi_BF1) ==
        CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S207>/SysVoltHigh_BF1' */
#else

    /* Outputs for Atomic SubSystem: '<S207>/SysVoltHigh_BF1_Stub' */
    /* VariantMerge generated from: '<S207>/FaultSts_SysVoltHi_BF1' incorporates:
     *  Constant: '<S249>/Constant'
     */
    VePMDR_e_FaultSts_SysVoltHi_BF1 = CeDFIB_e_Pass;

    /* End of Outputs for SubSystem: '<S207>/SysVoltHigh_BF1_Stub' */
#endif

    /* End of Outputs for SubSystem: '<S198>/SysVoltHigh_BF1' */

    /* RelationalOperator: '<S200>/Relational Operator' incorporates:
     *  Constant: '<S212>/Constant'
     *  VariantMerge generated from: '<S207>/FaultSts_SysVoltHi_BF1'
     */
    rtb_TmpSignalConversionAtVePMDR_b_RunC_i = (((uint32)
        VePMDR_e_FaultSts_SysVoltHi_BF1) == CeDFIB_e_Init);

    /* Outputs for Atomic SubSystem: '<S198>/SysVoltHigh_BF2' */
#if Rte_SysCon_Variant_PMDR_5

    /* Outputs for Atomic SubSystem: '<S208>/SysVoltHigh_BF2' */

    /* RelationalOperator: '<S253>/Relational Operator3' incorporates:
     *  Constant: '<S253>/Constant3'
     *  S-Function (sfix_bitop): '<S253>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtVePMDR_b_PowerM = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_p) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S253>/EdgeFalling1' */
    /* Logic: '<S253>/Logical Operator' incorporates:
     *  Logic: '<S255>/OR1'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_IsDiag =
        !rtb_TmpSignalConversionAtVePMDR_b_PowerM;

    /* End of Outputs for SubSystem: '<S253>/EdgeFalling1' */

    /* Logic: '<S253>/Logical1' incorporates:
     *  Constant: '<S204>/Calib'
     *  Constant: '<S253>/Constant1'
     *  Logic: '<S253>/Logical Operator'
     *  Logic: '<S253>/Logical10'
     *  Logic: '<S253>/Logical12'
     *  RelationalOperator: '<S253>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S253>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_DiagSy = (rtb_Logical_o &&
        ((!KePMDR_b_SysVoltHi_LtchEnbl) || (((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_p) & 1U) == 0U) ||
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag)));

    /* RelationalOperator: '<S250>/Comparison7' incorporates:
     *  Constant: '<S203>/Calib'
     */
    VePMDR_b_BF2_SysHiFailSetting = (rtb_TmpSignalConversionAtVePMDB_U_BF2_Sy >=
        KePMDD_U_SysVoltMaxThrsh);

    /* Outputs for Atomic SubSystem: '<S253>/EdgeFalling1' */
    /* Logic: '<S255>/AND' incorporates:
     *  UnitDelay: '<S255>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_IsDiag =
        (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
         (PMDR_ac_DW.UnitDelay_DSTATE_ny));

    /* Update for UnitDelay: '<S255>/Unit Delay' */
    PMDR_ac_DW.UnitDelay_DSTATE_ny = rtb_TmpSignalConversionAtVePMDR_b_PowerM;

    /* End of Outputs for SubSystem: '<S253>/EdgeFalling1' */

    /* Logic: '<S253>/Logical5' */
    rtb_TmpSignalConversionAtVePMDR_b_PowerM = (rtb_NOT4_h ||
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag);

    /* Outputs for Atomic SubSystem: '<S254>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S254>/Counter Reset  Enabled ' */
    /* Switch: '<S261>/Switch1' incorporates:
     *  Logic: '<S254>/Fail Counter Reset'
     *  Logic: '<S254>/NOT6'
     *  Switch: '<S261>/Switch2'
     *  Switch: '<S262>/Switch1'
     *  UnitDelay: '<S254>/Unit Delay'
     *  UnitDelay: '<S254>/Unit Delay1'
     */
    if ((rtb_TmpSignalConversionAtVePMDR_b_PowerM ||
            (PMDR_ac_DW.UnitDelay_DSTATE_cfc)) ||
            (PMDR_ac_DW.UnitDelay1_DSTATE_l))
    {
        /* Switch: '<S261>/Switch1' incorporates:
         *  Constant: '<S261>/Constant Value2'
         */
        VePMDD_Cnt_SysVoltHiFail_BF2 = 0U;

        /* Switch: '<S262>/Switch1' incorporates:
         *  Constant: '<S262>/Constant Value2'
         */
        VePMDD_Cnt_SysVoltHiSmpl_BF2 = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeDFIR_b_DiagSy &&
                (VePMDR_b_BF2_SysHiFailSetting))
        {
            /* Switch: '<S261>/Switch1' incorporates:
             *  Constant: '<S261>/Constant Value1'
             *  Sum: '<S261>/Subtraction'
             *  Switch: '<S261>/Switch2'
             *  UnitDelay: '<S261>/Unit Delay'
             */
            VePMDD_Cnt_SysVoltHiFail_BF2 = (uint16)(((uint32)
                VePMDD_Cnt_SysVoltHiFail_BF2) + 1U);
        }

        /* Switch: '<S262>/Switch2' */
        if (rtb_TmpSignalConversionAtVeDFIR_b_DiagSy)
        {
            /* Switch: '<S262>/Switch1' incorporates:
             *  Constant: '<S262>/Constant Value1'
             *  Sum: '<S262>/Subtraction'
             *  Switch: '<S262>/Switch2'
             *  UnitDelay: '<S262>/Unit Delay'
             */
            VePMDD_Cnt_SysVoltHiSmpl_BF2 = (uint16)(((uint32)
                VePMDD_Cnt_SysVoltHiSmpl_BF2) + 1U);
        }

        /* End of Switch: '<S262>/Switch2' */
    }

    /* End of Switch: '<S261>/Switch1' */
    /* End of Outputs for SubSystem: '<S254>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S254>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S254>/Greater Than or Equal ' incorporates:
     *  Constant: '<S201>/Calib'
     */
    PMDR_ac_DW.UnitDelay1_DSTATE_l = (VePMDD_Cnt_SysVoltHiFail_BF2 >=
        KePMDD_Cnt_SysVoltHiFail);

    /* Logic: '<S254>/NOT5' incorporates:
     *  Constant: '<S202>/Calib'
     *  Logic: '<S254>/NOT3'
     *  RelationalOperator: '<S254>/Less Than  or Equal'
     */
    PMDR_ac_DW.UnitDelay_DSTATE_cfc = ((VePMDD_Cnt_SysVoltHiSmpl_BF2 >=
        KePMDD_Cnt_SysVoltHiSample) && (!PMDR_ac_DW.UnitDelay1_DSTATE_l));

    /* Switch: '<S267>/Switch1' incorporates:
     *  Constant: '<S260>/Constant Value'
     *  DataStoreWrite: '<S250>/Data Store Write3'
     *  Switch: '<S266>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        PMDR_ac_DW.NePMDR_Cnt_BF2SysVoltHi_MFOP = 0U;
    }
    else
    {
        if (PMDR_ac_DW.UnitDelay_DSTATE_cfc)
        {
            /* MinMax: '<S260>/Minimum2' incorporates:
             *  DataStoreRead: '<S250>/Data Store Read8'
             *  Switch: '<S266>/Switch1'
             */
            if (VePMDD_Cnt_SysVoltHiFail_BF2 >
                    PMDR_ac_DW.NePMDR_Cnt_BF2SysVoltHi_MFOP)
            {
                /* DataStoreWrite: '<S250>/Data Store Write3' incorporates:
                 *  Switch: '<S266>/Switch1'
                 */
                PMDR_ac_DW.NePMDR_Cnt_BF2SysVoltHi_MFOP =
                    VePMDD_Cnt_SysVoltHiFail_BF2;
            }

            /* End of MinMax: '<S260>/Minimum2' */
        }
    }

    /* End of Switch: '<S267>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S253>/Fail' */
    PMDR_ac_Fail(PMDR_ac_DW.UnitDelay1_DSTATE_l,
                 (&(VePMDR_e_FaultSts_SysVoltHi_BF2)));

    /* End of Outputs for SubSystem: '<S253>/Fail' */

    /* Outputs for Enabled SubSystem: '<S253>/Init' */
    PMDR_ac_Init_k(rtb_TmpSignalConversionAtVePMDR_b_PowerM,
                   (&(VePMDR_e_FaultSts_SysVoltHi_BF2)));

    /* End of Outputs for SubSystem: '<S253>/Init' */

    /* Outputs for Enabled SubSystem: '<S253>/Pass' */
    PMDR_ac_Pass(PMDR_ac_DW.UnitDelay_DSTATE_cfc,
                 (&(VePMDR_e_FaultSts_SysVoltHi_BF2)));

    /* End of Outputs for SubSystem: '<S253>/Pass' */

    /* RelationalOperator: '<S253>/Relational Operator' incorporates:
     *  Constant: '<S256>/Constant'
     *  VariantMerge generated from: '<S208>/FaultSts_SysVoltHi_BF2'
     */
    VePMDR_b_SysVoltHighFA_BF2 = (((uint32)VePMDR_e_FaultSts_SysVoltHi_BF2) ==
        CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S208>/SysVoltHigh_BF2' */
#else

    /* Outputs for Atomic SubSystem: '<S208>/SysVoltHigh_BF2_Stub' */
    /* VariantMerge generated from: '<S208>/FaultSts_SysVoltHi_BF2' incorporates:
     *  Constant: '<S268>/Constant'
     */
    VePMDR_e_FaultSts_SysVoltHi_BF2 = CeDFIB_e_Pass;

    /* End of Outputs for SubSystem: '<S208>/SysVoltHigh_BF2_Stub' */
#endif

    /* End of Outputs for SubSystem: '<S198>/SysVoltHigh_BF2' */

    /* RelationalOperator: '<S200>/Relational Operator1' incorporates:
     *  Constant: '<S215>/Constant'
     *  VariantMerge generated from: '<S208>/FaultSts_SysVoltHi_BF2'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_DiagSy = (((uint32)
        VePMDR_e_FaultSts_SysVoltHi_BF2) == CeDFIB_e_Init);

    /* Outputs for Atomic SubSystem: '<S198>/SysVoltHigh_BF3' */
#if Rte_SysCon_Variant_PMDR_6

    /* Outputs for Atomic SubSystem: '<S209>/SysVoltHigh_BF3' */

    /* RelationalOperator: '<S272>/Relational Operator3' incorporates:
     *  Constant: '<S272>/Constant3'
     *  S-Function (sfix_bitop): '<S272>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_IsDiag = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_p) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S272>/EdgeFalling1' */
    /* Logic: '<S272>/Logical Operator' incorporates:
     *  Logic: '<S274>/OR1'
     */
    rtb_Comparison2_ap = !rtb_TmpSignalConversionAtVeDFIR_b_IsDiag;

    /* End of Outputs for SubSystem: '<S272>/EdgeFalling1' */

    /* Logic: '<S272>/Logical1' incorporates:
     *  Constant: '<S204>/Calib'
     *  Constant: '<S272>/Constant1'
     *  Logic: '<S272>/Logical Operator'
     *  Logic: '<S272>/Logical10'
     *  Logic: '<S272>/Logical12'
     *  RelationalOperator: '<S272>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S272>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVePMDR_b_PowerM = (rtb_Logical_o &&
        ((!KePMDR_b_SysVoltHi_LtchEnbl) || (((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_p) & 1U) == 0U) ||
        rtb_Comparison2_ap)));

    /* RelationalOperator: '<S269>/Comparison7' incorporates:
     *  Constant: '<S203>/Calib'
     */
    VePMDR_b_BF3_SysHiFailSetting = (rtb_TmpSignalConversionAtVePMDR_U_BF3_Sy >=
        KePMDD_U_SysVoltMaxThrsh);

    /* Outputs for Atomic SubSystem: '<S272>/EdgeFalling1' */
    /* Logic: '<S274>/AND' incorporates:
     *  UnitDelay: '<S274>/Unit Delay'
     */
    rtb_Comparison2_ap = (rtb_Comparison2_ap && (PMDR_ac_DW.UnitDelay_DSTATE_db));

    /* Update for UnitDelay: '<S274>/Unit Delay' */
    PMDR_ac_DW.UnitDelay_DSTATE_db = rtb_TmpSignalConversionAtVeDFIR_b_IsDiag;

    /* End of Outputs for SubSystem: '<S272>/EdgeFalling1' */

    /* Logic: '<S272>/Logical5' */
    rtb_TmpSignalConversionAtVeDFIR_b_IsDiag = (rtb_NOT4_h || rtb_Comparison2_ap);

    /* Outputs for Atomic SubSystem: '<S273>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S273>/Counter Reset  Enabled ' */
    /* Switch: '<S280>/Switch1' incorporates:
     *  Logic: '<S273>/Fail Counter Reset'
     *  Logic: '<S273>/NOT6'
     *  Switch: '<S280>/Switch2'
     *  Switch: '<S281>/Switch1'
     *  UnitDelay: '<S273>/Unit Delay'
     *  UnitDelay: '<S273>/Unit Delay1'
     */
    if ((rtb_TmpSignalConversionAtVeDFIR_b_IsDiag ||
            (PMDR_ac_DW.UnitDelay_DSTATE_nc)) || (PMDR_ac_DW.UnitDelay1_DSTATE_k))
    {
        /* Switch: '<S280>/Switch1' incorporates:
         *  Constant: '<S280>/Constant Value2'
         */
        VePMDD_Cnt_SysVoltHiFail_BF3 = 0U;

        /* Switch: '<S281>/Switch1' incorporates:
         *  Constant: '<S281>/Constant Value2'
         */
        VePMDD_Cnt_SysVoltHiSmpl_BF3 = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVePMDR_b_PowerM &&
                (VePMDR_b_BF3_SysHiFailSetting))
        {
            /* Switch: '<S280>/Switch1' incorporates:
             *  Constant: '<S280>/Constant Value1'
             *  Sum: '<S280>/Subtraction'
             *  Switch: '<S280>/Switch2'
             *  UnitDelay: '<S280>/Unit Delay'
             */
            VePMDD_Cnt_SysVoltHiFail_BF3 = (uint16)(((uint32)
                VePMDD_Cnt_SysVoltHiFail_BF3) + 1U);
        }

        /* Switch: '<S281>/Switch2' */
        if (rtb_TmpSignalConversionAtVePMDR_b_PowerM)
        {
            /* Switch: '<S281>/Switch1' incorporates:
             *  Constant: '<S281>/Constant Value1'
             *  Sum: '<S281>/Subtraction'
             *  Switch: '<S281>/Switch2'
             *  UnitDelay: '<S281>/Unit Delay'
             */
            VePMDD_Cnt_SysVoltHiSmpl_BF3 = (uint16)(((uint32)
                VePMDD_Cnt_SysVoltHiSmpl_BF3) + 1U);
        }

        /* End of Switch: '<S281>/Switch2' */
    }

    /* End of Switch: '<S280>/Switch1' */
    /* End of Outputs for SubSystem: '<S273>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S273>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S273>/Greater Than or Equal ' incorporates:
     *  Constant: '<S201>/Calib'
     */
    PMDR_ac_DW.UnitDelay1_DSTATE_k = (VePMDD_Cnt_SysVoltHiFail_BF3 >=
        KePMDD_Cnt_SysVoltHiFail);

    /* Logic: '<S273>/NOT5' incorporates:
     *  Constant: '<S202>/Calib'
     *  Logic: '<S273>/NOT3'
     *  RelationalOperator: '<S273>/Less Than  or Equal'
     */
    PMDR_ac_DW.UnitDelay_DSTATE_nc = ((VePMDD_Cnt_SysVoltHiSmpl_BF3 >=
        KePMDD_Cnt_SysVoltHiSample) && (!PMDR_ac_DW.UnitDelay1_DSTATE_k));

    /* Switch: '<S286>/Switch1' incorporates:
     *  Constant: '<S279>/Constant Value'
     *  DataStoreWrite: '<S269>/Data Store Write3'
     *  Switch: '<S285>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        PMDR_ac_DW.NePMDR_Cnt_BF3SysVoltHi_MFOP = 0U;
    }
    else
    {
        if (PMDR_ac_DW.UnitDelay_DSTATE_nc)
        {
            /* MinMax: '<S279>/Minimum2' incorporates:
             *  DataStoreRead: '<S269>/Data Store Read8'
             *  Switch: '<S285>/Switch1'
             */
            if (VePMDD_Cnt_SysVoltHiFail_BF3 >
                    PMDR_ac_DW.NePMDR_Cnt_BF3SysVoltHi_MFOP)
            {
                /* DataStoreWrite: '<S269>/Data Store Write3' incorporates:
                 *  Switch: '<S285>/Switch1'
                 */
                PMDR_ac_DW.NePMDR_Cnt_BF3SysVoltHi_MFOP =
                    VePMDD_Cnt_SysVoltHiFail_BF3;
            }

            /* End of MinMax: '<S279>/Minimum2' */
        }
    }

    /* End of Switch: '<S286>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S272>/Fail' */
    PMDR_ac_Fail(PMDR_ac_DW.UnitDelay1_DSTATE_k,
                 (&(VePMDR_e_FaultSts_SysVoltHi_BF3)));

    /* End of Outputs for SubSystem: '<S272>/Fail' */

    /* Outputs for Enabled SubSystem: '<S272>/Init' */
    PMDR_ac_Init_k(rtb_TmpSignalConversionAtVeDFIR_b_IsDiag,
                   (&(VePMDR_e_FaultSts_SysVoltHi_BF3)));

    /* End of Outputs for SubSystem: '<S272>/Init' */

    /* Outputs for Enabled SubSystem: '<S272>/Pass' */
    PMDR_ac_Pass(PMDR_ac_DW.UnitDelay_DSTATE_nc,
                 (&(VePMDR_e_FaultSts_SysVoltHi_BF3)));

    /* End of Outputs for SubSystem: '<S272>/Pass' */

    /* RelationalOperator: '<S272>/Relational Operator' incorporates:
     *  Constant: '<S275>/Constant'
     *  VariantMerge generated from: '<S209>/FaultSts_SysVoltHi_BF3'
     */
    VePMDR_b_SysVoltHighFA_BF3 = (((uint32)VePMDR_e_FaultSts_SysVoltHi_BF3) ==
        CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S209>/SysVoltHigh_BF3' */
#else

    /* Outputs for Atomic SubSystem: '<S209>/SysVoltHigh_BF3_Stub' */
    /* VariantMerge generated from: '<S209>/FaultSts_SysVoltHi_BF3' incorporates:
     *  Constant: '<S287>/Constant'
     */
    VePMDR_e_FaultSts_SysVoltHi_BF3 = CeDFIB_e_Pass;

    /* End of Outputs for SubSystem: '<S209>/SysVoltHigh_BF3_Stub' */
#endif

    /* End of Outputs for SubSystem: '<S198>/SysVoltHigh_BF3' */

    /* RelationalOperator: '<S200>/Relational Operator2' incorporates:
     *  Constant: '<S216>/Constant'
     *  VariantMerge generated from: '<S209>/FaultSts_SysVoltHi_BF3'
     */
    rtb_TmpSignalConversionAtVePMDR_b_PowerM = (((uint32)
        VePMDR_e_FaultSts_SysVoltHi_BF3) == CeDFIB_e_Init);

    /* RelationalOperator: '<S200>/Relational Operator3' incorporates:
     *  Constant: '<S217>/Constant'
     *  VariantMerge generated from: '<S210>/FaultSts_SysVoltHi_HB'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_IsDiag = (((uint32)
        VePMDR_e_FaultSts_SysVoltHi_HB) == CeDFIB_e_Init);

    /* Outputs for Atomic SubSystem: '<S198>/SysVoltHigh_HBSpare' */
#if Rte_SysCon_Variant_PMDR_8

    /* Outputs for Atomic SubSystem: '<S211>/SysVoltHigh_HBSpare' */

    /* RelationalOperator: '<S310>/Relational Operator3' incorporates:
     *  Constant: '<S310>/Constant3'
     *  S-Function (sfix_bitop): '<S310>/Bitwise Operator2'
     */
    rtb_Comparison2_ap = ((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Stat_p) &
                           64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S310>/EdgeFalling1' */
    /* Logic: '<S310>/Logical Operator' incorporates:
     *  Logic: '<S312>/OR1'
     */
    rtb_Logical9 = !rtb_Comparison2_ap;

    /* End of Outputs for SubSystem: '<S310>/EdgeFalling1' */

    /* Logic: '<S310>/Logical1' incorporates:
     *  Constant: '<S204>/Calib'
     *  Constant: '<S310>/Constant1'
     *  Logic: '<S310>/Logical Operator'
     *  Logic: '<S310>/Logical10'
     *  Logic: '<S310>/Logical12'
     *  RelationalOperator: '<S310>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S310>/Bitwise Operator3'
     */
    rtb_Logical_o = (rtb_Logical_o && ((!KePMDR_b_SysVoltHi_LtchEnbl) ||
                      (((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Stat_p) & 1U)
                        == 0U) || rtb_Logical9)));

    /* RelationalOperator: '<S307>/Comparison7' incorporates:
     *  Constant: '<S203>/Calib'
     */
    VePMDR_b_HBSpare_SysHiFailSetting =
        (rtb_TmpSignalConversionAtVePMDR_U_HBSpar >= KePMDD_U_SysVoltMaxThrsh);

    /* Outputs for Atomic SubSystem: '<S310>/EdgeFalling1' */
    /* Logic: '<S312>/AND' incorporates:
     *  UnitDelay: '<S312>/Unit Delay'
     */
    rtb_Logical9 = (rtb_Logical9 && (PMDR_ac_DW.UnitDelay_DSTATE_bo));

    /* Update for UnitDelay: '<S312>/Unit Delay' */
    PMDR_ac_DW.UnitDelay_DSTATE_bo = rtb_Comparison2_ap;

    /* End of Outputs for SubSystem: '<S310>/EdgeFalling1' */

    /* Logic: '<S310>/Logical5' */
    rtb_NOT4_h = (rtb_NOT4_h || rtb_Logical9);

    /* Outputs for Atomic SubSystem: '<S311>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S311>/Counter Reset  Enabled ' */
    /* Switch: '<S318>/Switch1' incorporates:
     *  Logic: '<S311>/Fail Counter Reset'
     *  Logic: '<S311>/NOT6'
     *  Switch: '<S318>/Switch2'
     *  Switch: '<S319>/Switch1'
     *  UnitDelay: '<S311>/Unit Delay'
     *  UnitDelay: '<S311>/Unit Delay1'
     */
    if ((rtb_NOT4_h || (PMDR_ac_DW.UnitDelay_DSTATE_kr)) ||
            (PMDR_ac_DW.UnitDelay1_DSTATE_o))
    {
        /* Switch: '<S318>/Switch1' incorporates:
         *  Constant: '<S318>/Constant Value2'
         */
        VePMDD_Cnt_SysVoltHiFail_HBSpare = 0U;

        /* Switch: '<S319>/Switch1' incorporates:
         *  Constant: '<S319>/Constant Value2'
         */
        VePMDD_Cnt_SysVoltHiSmpl_HBSpare = 0U;
    }
    else
    {
        if (rtb_Logical_o && (VePMDR_b_HBSpare_SysHiFailSetting))
        {
            /* Switch: '<S318>/Switch1' incorporates:
             *  Constant: '<S318>/Constant Value1'
             *  Sum: '<S318>/Subtraction'
             *  Switch: '<S318>/Switch2'
             *  UnitDelay: '<S318>/Unit Delay'
             */
            VePMDD_Cnt_SysVoltHiFail_HBSpare = (uint16)(((uint32)
                VePMDD_Cnt_SysVoltHiFail_HBSpare) + 1U);
        }

        /* Switch: '<S319>/Switch2' */
        if (rtb_Logical_o)
        {
            /* Switch: '<S319>/Switch1' incorporates:
             *  Constant: '<S319>/Constant Value1'
             *  Sum: '<S319>/Subtraction'
             *  Switch: '<S319>/Switch2'
             *  UnitDelay: '<S319>/Unit Delay'
             */
            VePMDD_Cnt_SysVoltHiSmpl_HBSpare = (uint16)(((uint32)
                VePMDD_Cnt_SysVoltHiSmpl_HBSpare) + 1U);
        }

        /* End of Switch: '<S319>/Switch2' */
    }

    /* End of Switch: '<S318>/Switch1' */
    /* End of Outputs for SubSystem: '<S311>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S311>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S311>/Greater Than or Equal ' incorporates:
     *  Constant: '<S201>/Calib'
     */
    PMDR_ac_DW.UnitDelay1_DSTATE_o = (VePMDD_Cnt_SysVoltHiFail_HBSpare >=
        KePMDD_Cnt_SysVoltHiFail);

    /* Logic: '<S311>/NOT5' incorporates:
     *  Constant: '<S202>/Calib'
     *  Logic: '<S311>/NOT3'
     *  RelationalOperator: '<S311>/Less Than  or Equal'
     */
    PMDR_ac_DW.UnitDelay_DSTATE_kr = ((VePMDD_Cnt_SysVoltHiSmpl_HBSpare >=
        KePMDD_Cnt_SysVoltHiSample) && (!PMDR_ac_DW.UnitDelay1_DSTATE_o));

    /* Switch: '<S324>/Switch1' incorporates:
     *  Constant: '<S317>/Constant Value'
     *  DataStoreWrite: '<S307>/Data Store Write3'
     *  Switch: '<S323>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        PMDR_ac_DW.NePMDR_Cnt_BFHBSpareSysVoltHi_MFOP = 0U;
    }
    else
    {
        if (PMDR_ac_DW.UnitDelay_DSTATE_kr)
        {
            /* MinMax: '<S317>/Minimum2' incorporates:
             *  DataStoreRead: '<S307>/Data Store Read8'
             *  Switch: '<S323>/Switch1'
             */
            if (VePMDD_Cnt_SysVoltHiFail_HBSpare >
                    PMDR_ac_DW.NePMDR_Cnt_BFHBSpareSysVoltHi_MFOP)
            {
                /* DataStoreWrite: '<S307>/Data Store Write3' incorporates:
                 *  Switch: '<S323>/Switch1'
                 */
                PMDR_ac_DW.NePMDR_Cnt_BFHBSpareSysVoltHi_MFOP =
                    VePMDD_Cnt_SysVoltHiFail_HBSpare;
            }

            /* End of MinMax: '<S317>/Minimum2' */
        }
    }

    /* End of Switch: '<S324>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S310>/Fail' */
    PMDR_ac_Fail(PMDR_ac_DW.UnitDelay1_DSTATE_o,
                 (&(VePMDR_e_FaultSts_SysVoltHi_HBSpare)));

    /* End of Outputs for SubSystem: '<S310>/Fail' */

    /* Outputs for Enabled SubSystem: '<S310>/Init' */
    PMDR_ac_Init_k(rtb_NOT4_h, (&(VePMDR_e_FaultSts_SysVoltHi_HBSpare)));

    /* End of Outputs for SubSystem: '<S310>/Init' */

    /* Outputs for Enabled SubSystem: '<S310>/Pass' */
    PMDR_ac_Pass(PMDR_ac_DW.UnitDelay_DSTATE_kr,
                 (&(VePMDR_e_FaultSts_SysVoltHi_HBSpare)));

    /* End of Outputs for SubSystem: '<S310>/Pass' */

    /* RelationalOperator: '<S310>/Relational Operator' incorporates:
     *  Constant: '<S313>/Constant'
     *  VariantMerge generated from: '<S211>/FaultSts_SysVoltHi_HBSpare'
     */
    VePMDR_b_SysVoltHighFA_HBSpare = (((uint32)
        VePMDR_e_FaultSts_SysVoltHi_HBSpare) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S211>/SysVoltHigh_HBSpare' */
#else

    /* Outputs for Atomic SubSystem: '<S211>/SysVoltHigh_HBSpare_Stub' */
    /* VariantMerge generated from: '<S211>/FaultSts_SysVoltHi_HBSpare' incorporates:
     *  Constant: '<S325>/Constant'
     */
    VePMDR_e_FaultSts_SysVoltHi_HBSpare = CeDFIB_e_Pass;

    /* End of Outputs for SubSystem: '<S211>/SysVoltHigh_HBSpare_Stub' */
#endif

    /* End of Outputs for SubSystem: '<S198>/SysVoltHigh_HBSpare' */

    /* If: '<S200>/If' incorporates:
     *  Constant: '<S213>/Constant'
     *  Constant: '<S218>/Constant'
     *  Constant: '<S219>/Constant'
     *  Constant: '<S220>/Constant'
     *  Constant: '<S221>/Constant'
     *  Constant: '<S222>/Constant'
     *  Logic: '<S200>/Logical1'
     *  Logic: '<S200>/Logical10'
     *  RelationalOperator: '<S200>/Relational Operator4'
     *  RelationalOperator: '<S200>/Relational Operator5'
     *  RelationalOperator: '<S200>/Relational Operator6'
     *  RelationalOperator: '<S200>/Relational Operator7'
     *  RelationalOperator: '<S200>/Relational Operator8'
     *  RelationalOperator: '<S200>/Relational Operator9'
     *  VariantMerge generated from: '<S207>/FaultSts_SysVoltHi_BF1'
     *  VariantMerge generated from: '<S208>/FaultSts_SysVoltHi_BF2'
     *  VariantMerge generated from: '<S209>/FaultSts_SysVoltHi_BF3'
     *  VariantMerge generated from: '<S210>/FaultSts_SysVoltHi_HB'
     *  VariantMerge generated from: '<S211>/FaultSts_SysVoltHi_HBSpare'
     */
    if ((((rtb_TmpSignalConversionAtVePMDR_b_RunC_i ||
            rtb_TmpSignalConversionAtVeDFIR_b_DiagSy) ||
            rtb_TmpSignalConversionAtVePMDR_b_PowerM) ||
            rtb_TmpSignalConversionAtVeDFIR_b_IsDiag) || (((uint32)
            VePMDR_e_FaultSts_SysVoltHi_HBSpare) == CeDFIB_e_Init))
    {
        /* Outputs for IfAction SubSystem: '<S200>/Init' incorporates:
         *  ActionPort: '<S224>/Action Port'
         */
        PMDR_ac_Init_i(&PMDR_ac_B.Merge);

        /* End of Outputs for SubSystem: '<S200>/Init' */
    }
    else if (((((((uint32)VePMDR_e_FaultSts_SysVoltHi_BF1) == CeDFIB_e_Fail) ||
                (((uint32)VePMDR_e_FaultSts_SysVoltHi_BF2) == CeDFIB_e_Fail)) ||
               (((uint32)VePMDR_e_FaultSts_SysVoltHi_BF3) == CeDFIB_e_Fail)) ||
              (((uint32)VePMDR_e_FaultSts_SysVoltHi_HB) == CeDFIB_e_Fail)) ||
             (((uint32)VePMDR_e_FaultSts_SysVoltHi_HBSpare) == CeDFIB_e_Fail))
    {
        /* Outputs for IfAction SubSystem: '<S200>/Fail' incorporates:
         *  ActionPort: '<S223>/Action Port'
         */
        PMDR_ac_Fail_h(&PMDR_ac_B.Merge);

        /* End of Outputs for SubSystem: '<S200>/Fail' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S200>/Pass' incorporates:
         *  ActionPort: '<S225>/Action Port'
         */
        PMDR_ac_Pass_d(&PMDR_ac_B.Merge);

        /* End of Outputs for SubSystem: '<S200>/Pass' */
    }

    /* End of If: '<S200>/If' */

    /* RelationalOperator: '<S200>/Relational Operator10' incorporates:
     *  Constant: '<S214>/Constant'
     *  Merge: '<S200>/Merge'
     */
    rtb_NOT4_h = (((uint32)PMDR_ac_B.Merge) == CeDFIB_e_Fail);

    /* Outputs for Atomic SubSystem: '<S199>/SysVoltLow_BF1' */
#if Rte_SysCon_Variant_PMDR_4

    /* Outputs for Atomic SubSystem: '<S333>/SysVoltLow_BF1' */

    /* RelationalOperator: '<S367>/Relational Operator3' incorporates:
     *  Constant: '<S367>/Constant3'
     *  S-Function (sfix_bitop): '<S367>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtVePMDR_b_RunC_i = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_m) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S367>/EdgeFalling1' */
    /* Logic: '<S367>/Logical Operator' incorporates:
     *  Logic: '<S369>/OR1'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_DiagSy =
        !rtb_TmpSignalConversionAtVePMDR_b_RunC_i;

    /* End of Outputs for SubSystem: '<S367>/EdgeFalling1' */

    /* Logic: '<S367>/Logical1' incorporates:
     *  Constant: '<S330>/Calib'
     *  Constant: '<S367>/Constant1'
     *  Logic: '<S367>/Logical Operator'
     *  Logic: '<S367>/Logical10'
     *  Logic: '<S367>/Logical12'
     *  RelationalOperator: '<S367>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S367>/Bitwise Operator3'
     */
    rtb_Logical_o = (rtb_TmpSignalConversionAtVePMDR_b_AccRun &&
                     ((!KePMDR_b_SysVoltLo_LtchEnbl) || (((((uint32)
                          rtb_TmpSignalConversionAtVeDMAB_y_Stat_m) & 1U) == 0U)
                       || rtb_TmpSignalConversionAtVeDFIR_b_DiagSy)));

    /* RelationalOperator: '<S364>/Comparison3' incorporates:
     *  Constant: '<S329>/Calib'
     */
    VePMDR_b_BF1_SysLoFailSetting = (rtb_TmpSignalConversionAtVePMDB_U_BF1_Sy <=
        KePMDD_U_SysVoltMinThrsh);

    /* Outputs for Atomic SubSystem: '<S367>/EdgeFalling1' */
    /* Logic: '<S369>/AND' incorporates:
     *  UnitDelay: '<S369>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_DiagSy =
        (rtb_TmpSignalConversionAtVeDFIR_b_DiagSy &&
         (PMDR_ac_DW.UnitDelay_DSTATE_a2));

    /* Update for UnitDelay: '<S369>/Unit Delay' */
    PMDR_ac_DW.UnitDelay_DSTATE_a2 = rtb_TmpSignalConversionAtVePMDR_b_RunC_i;

    /* End of Outputs for SubSystem: '<S367>/EdgeFalling1' */

    /* Logic: '<S367>/Logical5' */
    rtb_TmpSignalConversionAtVePMDR_b_RunC_i = (rtb_NOT4 ||
        rtb_TmpSignalConversionAtVeDFIR_b_DiagSy);

    /* Outputs for Atomic SubSystem: '<S368>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S368>/Counter Reset  Enabled ' */
    /* Switch: '<S375>/Switch1' incorporates:
     *  Logic: '<S368>/Fail Counter Reset'
     *  Logic: '<S368>/NOT6'
     *  Switch: '<S375>/Switch2'
     *  Switch: '<S376>/Switch1'
     *  UnitDelay: '<S368>/Unit Delay'
     *  UnitDelay: '<S368>/Unit Delay1'
     */
    if ((rtb_TmpSignalConversionAtVePMDR_b_RunC_i ||
            (PMDR_ac_DW.UnitDelay_DSTATE_nt)) || (PMDR_ac_DW.UnitDelay1_DSTATE_i))
    {
        /* Switch: '<S375>/Switch1' incorporates:
         *  Constant: '<S375>/Constant Value2'
         */
        VePMDD_Cnt_SysVoltLowFail_BF1 = 0U;

        /* Switch: '<S376>/Switch1' incorporates:
         *  Constant: '<S376>/Constant Value2'
         */
        VePMDD_Cnt_SysVoltLowSmpl_BF1 = 0U;
    }
    else
    {
        if (rtb_Logical_o && (VePMDR_b_BF1_SysLoFailSetting))
        {
            /* Switch: '<S375>/Switch1' incorporates:
             *  Constant: '<S375>/Constant Value1'
             *  Sum: '<S375>/Subtraction'
             *  Switch: '<S375>/Switch2'
             *  UnitDelay: '<S375>/Unit Delay'
             */
            VePMDD_Cnt_SysVoltLowFail_BF1 = (uint16)(((uint32)
                VePMDD_Cnt_SysVoltLowFail_BF1) + 1U);
        }

        /* Switch: '<S376>/Switch2' */
        if (rtb_Logical_o)
        {
            /* Switch: '<S376>/Switch1' incorporates:
             *  Constant: '<S376>/Constant Value1'
             *  Sum: '<S376>/Subtraction'
             *  Switch: '<S376>/Switch2'
             *  UnitDelay: '<S376>/Unit Delay'
             */
            VePMDD_Cnt_SysVoltLowSmpl_BF1 = (uint16)(((uint32)
                VePMDD_Cnt_SysVoltLowSmpl_BF1) + 1U);
        }

        /* End of Switch: '<S376>/Switch2' */
    }

    /* End of Switch: '<S375>/Switch1' */
    /* End of Outputs for SubSystem: '<S368>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S368>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S368>/Greater Than or Equal ' incorporates:
     *  Constant: '<S327>/Calib'
     */
    PMDR_ac_DW.UnitDelay1_DSTATE_i = (VePMDD_Cnt_SysVoltLowFail_BF1 >=
        KePMDD_Cnt_SysVoltLoFail);

    /* Logic: '<S368>/NOT5' incorporates:
     *  Constant: '<S328>/Calib'
     *  Logic: '<S368>/NOT3'
     *  RelationalOperator: '<S368>/Less Than  or Equal'
     */
    PMDR_ac_DW.UnitDelay_DSTATE_nt = ((VePMDD_Cnt_SysVoltLowSmpl_BF1 >=
        KePMDD_Cnt_SysVoltLoSample) && (!PMDR_ac_DW.UnitDelay1_DSTATE_i));

    /* Switch: '<S381>/Switch1' incorporates:
     *  Constant: '<S374>/Constant Value'
     *  DataStoreWrite: '<S364>/Data Store Write11'
     *  Switch: '<S380>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        PMDR_ac_DW.NePMDR_Cnt_BF1SysVoltLow_MFOP = 0U;
    }
    else
    {
        if (PMDR_ac_DW.UnitDelay_DSTATE_nt)
        {
            /* MinMax: '<S374>/Minimum2' incorporates:
             *  DataStoreRead: '<S364>/Data Store Read11'
             *  Switch: '<S380>/Switch1'
             */
            if (VePMDD_Cnt_SysVoltLowFail_BF1 >
                    PMDR_ac_DW.NePMDR_Cnt_BF1SysVoltLow_MFOP)
            {
                /* DataStoreWrite: '<S364>/Data Store Write11' incorporates:
                 *  Switch: '<S380>/Switch1'
                 */
                PMDR_ac_DW.NePMDR_Cnt_BF1SysVoltLow_MFOP =
                    VePMDD_Cnt_SysVoltLowFail_BF1;
            }

            /* End of MinMax: '<S374>/Minimum2' */
        }
    }

    /* End of Switch: '<S381>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S367>/Fail' */
    PMDR_ac_Fail(PMDR_ac_DW.UnitDelay1_DSTATE_i,
                 (&(VePMDR_e_FaultSts_SysVoltLo_BF1)));

    /* End of Outputs for SubSystem: '<S367>/Fail' */

    /* Outputs for Enabled SubSystem: '<S367>/Init' */
    PMDR_ac_Init_k(rtb_TmpSignalConversionAtVePMDR_b_RunC_i,
                   (&(VePMDR_e_FaultSts_SysVoltLo_BF1)));

    /* End of Outputs for SubSystem: '<S367>/Init' */

    /* Outputs for Enabled SubSystem: '<S367>/Pass' */
    PMDR_ac_Pass(PMDR_ac_DW.UnitDelay_DSTATE_nt,
                 (&(VePMDR_e_FaultSts_SysVoltLo_BF1)));

    /* End of Outputs for SubSystem: '<S367>/Pass' */

    /* VariantMerge generated from: '<S333>/SysVoltLowFA_BF1' incorporates:
     *  Constant: '<S370>/Constant'
     *  RelationalOperator: '<S367>/Relational Operator'
     *  VariantMerge generated from: '<S333>/FaultSts_SysVoltLo_BF1'
     */
    PMDR_ac_B.VariantMergeForOutportSysVoltLowFA_BF1 = (((uint32)
        VePMDR_e_FaultSts_SysVoltLo_BF1) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S333>/SysVoltLow_BF1' */
    /* End of Outputs for SubSystem: '<S199>/SysVoltLow_BF1' */
#else

    /* Outputs for Atomic SubSystem: '<S333>/SysVoltLow_BF1_Stub' */
    /* VariantMerge generated from: '<S333>/FaultSts_SysVoltLo_BF1' incorporates:
     *  Constant: '<S382>/Constant'
     */
    VePMDR_e_FaultSts_SysVoltLo_BF1 = CeDFIB_e_Pass;

    /* VariantMerge generated from: '<S333>/SysVoltLowFA_BF1' incorporates:
     *  Constant: '<S365>/FALSE Constant2'
     */
    PMDR_ac_B.VariantMergeForOutportSysVoltLowFA_BF1 = false;

    /* End of Outputs for SubSystem: '<S333>/SysVoltLow_BF1_Stub' */
#endif

    /* RelationalOperator: '<S326>/Relational Operator' incorporates:
     *  Constant: '<S338>/Constant'
     *  VariantMerge generated from: '<S333>/FaultSts_SysVoltLo_BF1'
     */
    rtb_Logical_o = (((uint32)VePMDR_e_FaultSts_SysVoltLo_BF1) == CeDFIB_e_Init);

    /* Outputs for Atomic SubSystem: '<S199>/SysVoltLow_BF2' */
#if Rte_SysCon_Variant_PMDR_5

    /* Outputs for Atomic SubSystem: '<S334>/SysVoltLow_BF2' */

    /* RelationalOperator: '<S386>/Relational Operator3' incorporates:
     *  Constant: '<S386>/Constant3'
     *  S-Function (sfix_bitop): '<S386>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_DiagSy = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_m) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S386>/EdgeFalling1' */
    /* Logic: '<S386>/Logical Operator' incorporates:
     *  Logic: '<S388>/OR1'
     */
    rtb_TmpSignalConversionAtVePMDR_b_PowerM =
        !rtb_TmpSignalConversionAtVeDFIR_b_DiagSy;

    /* End of Outputs for SubSystem: '<S386>/EdgeFalling1' */

    /* Logic: '<S386>/Logical1' incorporates:
     *  Constant: '<S330>/Calib'
     *  Constant: '<S386>/Constant1'
     *  Logic: '<S386>/Logical Operator'
     *  Logic: '<S386>/Logical10'
     *  Logic: '<S386>/Logical12'
     *  RelationalOperator: '<S386>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S386>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVePMDR_b_RunC_i =
        (rtb_TmpSignalConversionAtVePMDR_b_AccRun &&
         ((!KePMDR_b_SysVoltLo_LtchEnbl) || (((((uint32)
              rtb_TmpSignalConversionAtVeDMAB_y_Stat_m) & 1U) == 0U) ||
           rtb_TmpSignalConversionAtVePMDR_b_PowerM)));

    /* RelationalOperator: '<S383>/Comparison3' incorporates:
     *  Constant: '<S329>/Calib'
     */
    VePMDR_b_BF2_SysLoFailSetting = (rtb_TmpSignalConversionAtVePMDB_U_BF2_Sy <=
        KePMDD_U_SysVoltMinThrsh);

    /* Outputs for Atomic SubSystem: '<S386>/EdgeFalling1' */
    /* Logic: '<S388>/AND' incorporates:
     *  UnitDelay: '<S388>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVePMDR_b_PowerM =
        (rtb_TmpSignalConversionAtVePMDR_b_PowerM &&
         (PMDR_ac_DW.UnitDelay_DSTATE_nn));

    /* Update for UnitDelay: '<S388>/Unit Delay' */
    PMDR_ac_DW.UnitDelay_DSTATE_nn = rtb_TmpSignalConversionAtVeDFIR_b_DiagSy;

    /* End of Outputs for SubSystem: '<S386>/EdgeFalling1' */

    /* Logic: '<S386>/Logical5' */
    rtb_TmpSignalConversionAtVeDFIR_b_DiagSy = (rtb_NOT4 ||
        rtb_TmpSignalConversionAtVePMDR_b_PowerM);

    /* Outputs for Atomic SubSystem: '<S387>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S387>/Counter Reset  Enabled ' */
    /* Switch: '<S394>/Switch1' incorporates:
     *  Logic: '<S387>/Fail Counter Reset'
     *  Logic: '<S387>/NOT6'
     *  Switch: '<S394>/Switch2'
     *  Switch: '<S395>/Switch1'
     *  UnitDelay: '<S387>/Unit Delay'
     *  UnitDelay: '<S387>/Unit Delay1'
     */
    if ((rtb_TmpSignalConversionAtVeDFIR_b_DiagSy ||
            (PMDR_ac_DW.UnitDelay_DSTATE_jz)) || (PMDR_ac_DW.UnitDelay1_DSTATE_d))
    {
        /* Switch: '<S394>/Switch1' incorporates:
         *  Constant: '<S394>/Constant Value2'
         */
        VePMDD_Cnt_SysVoltLowFail_BF2 = 0U;

        /* Switch: '<S395>/Switch1' incorporates:
         *  Constant: '<S395>/Constant Value2'
         */
        VePMDD_Cnt_SysVoltLowSmpl_BF2 = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVePMDR_b_RunC_i &&
                (VePMDR_b_BF2_SysLoFailSetting))
        {
            /* Switch: '<S394>/Switch1' incorporates:
             *  Constant: '<S394>/Constant Value1'
             *  Sum: '<S394>/Subtraction'
             *  Switch: '<S394>/Switch2'
             *  UnitDelay: '<S394>/Unit Delay'
             */
            VePMDD_Cnt_SysVoltLowFail_BF2 = (uint16)(((uint32)
                VePMDD_Cnt_SysVoltLowFail_BF2) + 1U);
        }

        /* Switch: '<S395>/Switch2' */
        if (rtb_TmpSignalConversionAtVePMDR_b_RunC_i)
        {
            /* Switch: '<S395>/Switch1' incorporates:
             *  Constant: '<S395>/Constant Value1'
             *  Sum: '<S395>/Subtraction'
             *  Switch: '<S395>/Switch2'
             *  UnitDelay: '<S395>/Unit Delay'
             */
            VePMDD_Cnt_SysVoltLowSmpl_BF2 = (uint16)(((uint32)
                VePMDD_Cnt_SysVoltLowSmpl_BF2) + 1U);
        }

        /* End of Switch: '<S395>/Switch2' */
    }

    /* End of Switch: '<S394>/Switch1' */
    /* End of Outputs for SubSystem: '<S387>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S387>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S387>/Greater Than or Equal ' incorporates:
     *  Constant: '<S327>/Calib'
     */
    PMDR_ac_DW.UnitDelay1_DSTATE_d = (VePMDD_Cnt_SysVoltLowFail_BF2 >=
        KePMDD_Cnt_SysVoltLoFail);

    /* Logic: '<S387>/NOT5' incorporates:
     *  Constant: '<S328>/Calib'
     *  Logic: '<S387>/NOT3'
     *  RelationalOperator: '<S387>/Less Than  or Equal'
     */
    PMDR_ac_DW.UnitDelay_DSTATE_jz = ((VePMDD_Cnt_SysVoltLowSmpl_BF2 >=
        KePMDD_Cnt_SysVoltLoSample) && (!PMDR_ac_DW.UnitDelay1_DSTATE_d));

    /* Switch: '<S400>/Switch1' incorporates:
     *  Constant: '<S393>/Constant Value'
     *  DataStoreWrite: '<S383>/Data Store Write11'
     *  Switch: '<S399>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        PMDR_ac_DW.NePMDR_Cnt_BF2SysVoltLow_MFOP = 0U;
    }
    else
    {
        if (PMDR_ac_DW.UnitDelay_DSTATE_jz)
        {
            /* MinMax: '<S393>/Minimum2' incorporates:
             *  DataStoreRead: '<S383>/Data Store Read11'
             *  Switch: '<S399>/Switch1'
             */
            if (VePMDD_Cnt_SysVoltLowFail_BF2 >
                    PMDR_ac_DW.NePMDR_Cnt_BF2SysVoltLow_MFOP)
            {
                /* DataStoreWrite: '<S383>/Data Store Write11' incorporates:
                 *  Switch: '<S399>/Switch1'
                 */
                PMDR_ac_DW.NePMDR_Cnt_BF2SysVoltLow_MFOP =
                    VePMDD_Cnt_SysVoltLowFail_BF2;
            }

            /* End of MinMax: '<S393>/Minimum2' */
        }
    }

    /* End of Switch: '<S400>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S386>/Fail' */
    PMDR_ac_Fail(PMDR_ac_DW.UnitDelay1_DSTATE_d,
                 (&(VePMDR_e_FaultSts_SysVoltLo_BF2)));

    /* End of Outputs for SubSystem: '<S386>/Fail' */

    /* Outputs for Enabled SubSystem: '<S386>/Init' */
    PMDR_ac_Init_k(rtb_TmpSignalConversionAtVeDFIR_b_DiagSy,
                   (&(VePMDR_e_FaultSts_SysVoltLo_BF2)));

    /* End of Outputs for SubSystem: '<S386>/Init' */

    /* Outputs for Enabled SubSystem: '<S386>/Pass' */
    PMDR_ac_Pass(PMDR_ac_DW.UnitDelay_DSTATE_jz,
                 (&(VePMDR_e_FaultSts_SysVoltLo_BF2)));

    /* End of Outputs for SubSystem: '<S386>/Pass' */

    /* VariantMerge generated from: '<S334>/SysVoltLowFA_BF2' incorporates:
     *  Constant: '<S389>/Constant'
     *  RelationalOperator: '<S386>/Relational Operator'
     *  VariantMerge generated from: '<S334>/FaultSts_SysVoltLo_BF2'
     */
    PMDR_ac_B.VariantMergeForOutportSysVoltLowFA_BF2 = (((uint32)
        VePMDR_e_FaultSts_SysVoltLo_BF2) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S334>/SysVoltLow_BF2' */
#else

    /* Outputs for Atomic SubSystem: '<S334>/SysVoltLow_BF2_Stub' */
    /* VariantMerge generated from: '<S334>/FaultSts_SysVoltLo_BF2' incorporates:
     *  Constant: '<S401>/Constant'
     */
    VePMDR_e_FaultSts_SysVoltLo_BF2 = CeDFIB_e_Pass;

    /* VariantMerge generated from: '<S334>/SysVoltLowFA_BF2' incorporates:
     *  Constant: '<S384>/FALSE Constant2'
     */
    PMDR_ac_B.VariantMergeForOutportSysVoltLowFA_BF2 = false;

    /* End of Outputs for SubSystem: '<S334>/SysVoltLow_BF2_Stub' */
#endif

    /* End of Outputs for SubSystem: '<S199>/SysVoltLow_BF2' */

    /* RelationalOperator: '<S326>/Relational Operator1' incorporates:
     *  Constant: '<S341>/Constant'
     *  VariantMerge generated from: '<S334>/FaultSts_SysVoltLo_BF2'
     */
    rtb_TmpSignalConversionAtVePMDR_b_RunC_i = (((uint32)
        VePMDR_e_FaultSts_SysVoltLo_BF2) == CeDFIB_e_Init);

    /* Outputs for Atomic SubSystem: '<S199>/SysVoltLow_BF3' */
#if Rte_SysCon_Variant_PMDR_6

    /* Outputs for Atomic SubSystem: '<S335>/SysVoltLow_BF3' */

    /* RelationalOperator: '<S405>/Relational Operator3' incorporates:
     *  Constant: '<S405>/Constant3'
     *  S-Function (sfix_bitop): '<S405>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtVePMDR_b_PowerM = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_m) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S405>/EdgeFalling1' */
    /* Logic: '<S405>/Logical Operator' incorporates:
     *  Logic: '<S407>/OR1'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_IsDiag =
        !rtb_TmpSignalConversionAtVePMDR_b_PowerM;

    /* End of Outputs for SubSystem: '<S405>/EdgeFalling1' */

    /* Logic: '<S405>/Logical1' incorporates:
     *  Constant: '<S330>/Calib'
     *  Constant: '<S405>/Constant1'
     *  Logic: '<S405>/Logical Operator'
     *  Logic: '<S405>/Logical10'
     *  Logic: '<S405>/Logical12'
     *  RelationalOperator: '<S405>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S405>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_DiagSy =
        (rtb_TmpSignalConversionAtVePMDR_b_AccRun &&
         ((!KePMDR_b_SysVoltLo_LtchEnbl) || (((((uint32)
              rtb_TmpSignalConversionAtVeDMAB_y_Stat_m) & 1U) == 0U) ||
           rtb_TmpSignalConversionAtVeDFIR_b_IsDiag)));

    /* RelationalOperator: '<S402>/Comparison3' incorporates:
     *  Constant: '<S329>/Calib'
     */
    VePMDR_b_BF3_SysLoFailSetting = (rtb_TmpSignalConversionAtVePMDR_U_BF3_Sy <=
        KePMDD_U_SysVoltMinThrsh);

    /* Outputs for Atomic SubSystem: '<S405>/EdgeFalling1' */
    /* Logic: '<S407>/AND' incorporates:
     *  UnitDelay: '<S407>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_IsDiag =
        (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
         (PMDR_ac_DW.UnitDelay_DSTATE_cc));

    /* Update for UnitDelay: '<S407>/Unit Delay' */
    PMDR_ac_DW.UnitDelay_DSTATE_cc = rtb_TmpSignalConversionAtVePMDR_b_PowerM;

    /* End of Outputs for SubSystem: '<S405>/EdgeFalling1' */

    /* Logic: '<S405>/Logical5' */
    rtb_TmpSignalConversionAtVePMDR_b_PowerM = (rtb_NOT4 ||
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag);

    /* Outputs for Atomic SubSystem: '<S406>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S406>/Counter Reset  Enabled ' */
    /* Switch: '<S413>/Switch1' incorporates:
     *  Logic: '<S406>/Fail Counter Reset'
     *  Logic: '<S406>/NOT6'
     *  Switch: '<S413>/Switch2'
     *  Switch: '<S414>/Switch1'
     *  UnitDelay: '<S406>/Unit Delay'
     *  UnitDelay: '<S406>/Unit Delay1'
     */
    if ((rtb_TmpSignalConversionAtVePMDR_b_PowerM ||
            (PMDR_ac_DW.UnitDelay_DSTATE_ge)) || (PMDR_ac_DW.UnitDelay1_DSTATE_g))
    {
        /* Switch: '<S413>/Switch1' incorporates:
         *  Constant: '<S413>/Constant Value2'
         */
        VePMDD_Cnt_SysVoltLowFail_BF3 = 0U;

        /* Switch: '<S414>/Switch1' incorporates:
         *  Constant: '<S414>/Constant Value2'
         */
        VePMDD_Cnt_SysVoltLowSmpl_BF3 = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeDFIR_b_DiagSy &&
                (VePMDR_b_BF3_SysLoFailSetting))
        {
            /* Switch: '<S413>/Switch1' incorporates:
             *  Constant: '<S413>/Constant Value1'
             *  Sum: '<S413>/Subtraction'
             *  Switch: '<S413>/Switch2'
             *  UnitDelay: '<S413>/Unit Delay'
             */
            VePMDD_Cnt_SysVoltLowFail_BF3 = (uint16)(((uint32)
                VePMDD_Cnt_SysVoltLowFail_BF3) + 1U);
        }

        /* Switch: '<S414>/Switch2' */
        if (rtb_TmpSignalConversionAtVeDFIR_b_DiagSy)
        {
            /* Switch: '<S414>/Switch1' incorporates:
             *  Constant: '<S414>/Constant Value1'
             *  Sum: '<S414>/Subtraction'
             *  Switch: '<S414>/Switch2'
             *  UnitDelay: '<S414>/Unit Delay'
             */
            VePMDD_Cnt_SysVoltLowSmpl_BF3 = (uint16)(((uint32)
                VePMDD_Cnt_SysVoltLowSmpl_BF3) + 1U);
        }

        /* End of Switch: '<S414>/Switch2' */
    }

    /* End of Switch: '<S413>/Switch1' */
    /* End of Outputs for SubSystem: '<S406>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S406>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S406>/Greater Than or Equal ' incorporates:
     *  Constant: '<S327>/Calib'
     */
    PMDR_ac_DW.UnitDelay1_DSTATE_g = (VePMDD_Cnt_SysVoltLowFail_BF3 >=
        KePMDD_Cnt_SysVoltLoFail);

    /* Logic: '<S406>/NOT5' incorporates:
     *  Constant: '<S328>/Calib'
     *  Logic: '<S406>/NOT3'
     *  RelationalOperator: '<S406>/Less Than  or Equal'
     */
    PMDR_ac_DW.UnitDelay_DSTATE_ge = ((VePMDD_Cnt_SysVoltLowSmpl_BF3 >=
        KePMDD_Cnt_SysVoltLoSample) && (!PMDR_ac_DW.UnitDelay1_DSTATE_g));

    /* Switch: '<S419>/Switch1' incorporates:
     *  Constant: '<S412>/Constant Value'
     *  DataStoreWrite: '<S402>/Data Store Write11'
     *  Switch: '<S418>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        PMDR_ac_DW.NePMDR_Cnt_BF3SysVoltLow_MFOP = 0U;
    }
    else
    {
        if (PMDR_ac_DW.UnitDelay_DSTATE_ge)
        {
            /* MinMax: '<S412>/Minimum2' incorporates:
             *  DataStoreRead: '<S402>/Data Store Read11'
             *  Switch: '<S418>/Switch1'
             */
            if (VePMDD_Cnt_SysVoltLowFail_BF3 >
                    PMDR_ac_DW.NePMDR_Cnt_BF3SysVoltLow_MFOP)
            {
                /* DataStoreWrite: '<S402>/Data Store Write11' incorporates:
                 *  Switch: '<S418>/Switch1'
                 */
                PMDR_ac_DW.NePMDR_Cnt_BF3SysVoltLow_MFOP =
                    VePMDD_Cnt_SysVoltLowFail_BF3;
            }

            /* End of MinMax: '<S412>/Minimum2' */
        }
    }

    /* End of Switch: '<S419>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S405>/Fail' */
    PMDR_ac_Fail(PMDR_ac_DW.UnitDelay1_DSTATE_g,
                 (&(VePMDR_e_FaultSts_SysVoltLo_BF3)));

    /* End of Outputs for SubSystem: '<S405>/Fail' */

    /* Outputs for Enabled SubSystem: '<S405>/Init' */
    PMDR_ac_Init_k(rtb_TmpSignalConversionAtVePMDR_b_PowerM,
                   (&(VePMDR_e_FaultSts_SysVoltLo_BF3)));

    /* End of Outputs for SubSystem: '<S405>/Init' */

    /* Outputs for Enabled SubSystem: '<S405>/Pass' */
    PMDR_ac_Pass(PMDR_ac_DW.UnitDelay_DSTATE_ge,
                 (&(VePMDR_e_FaultSts_SysVoltLo_BF3)));

    /* End of Outputs for SubSystem: '<S405>/Pass' */

    /* VariantMerge generated from: '<S335>/SysVoltLowFA_BF3' incorporates:
     *  Constant: '<S408>/Constant'
     *  RelationalOperator: '<S405>/Relational Operator'
     *  VariantMerge generated from: '<S335>/FaultSts_SysVoltLo_BF3'
     */
    PMDR_ac_B.VariantMergeForOutportSysVoltLowFA_BF3 = (((uint32)
        VePMDR_e_FaultSts_SysVoltLo_BF3) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S335>/SysVoltLow_BF3' */
#else

    /* Outputs for Atomic SubSystem: '<S335>/SysVoltLow_BF3_Stub' */
    /* VariantMerge generated from: '<S335>/FaultSts_SysVoltLo_BF3' incorporates:
     *  Constant: '<S420>/Constant'
     */
    VePMDR_e_FaultSts_SysVoltLo_BF3 = CeDFIB_e_Pass;

    /* VariantMerge generated from: '<S335>/SysVoltLowFA_BF3' incorporates:
     *  Constant: '<S403>/FALSE Constant2'
     */
    PMDR_ac_B.VariantMergeForOutportSysVoltLowFA_BF3 = false;

    /* End of Outputs for SubSystem: '<S335>/SysVoltLow_BF3_Stub' */
#endif

    /* End of Outputs for SubSystem: '<S199>/SysVoltLow_BF3' */

    /* RelationalOperator: '<S326>/Relational Operator2' incorporates:
     *  Constant: '<S342>/Constant'
     *  VariantMerge generated from: '<S335>/FaultSts_SysVoltLo_BF3'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_DiagSy = (((uint32)
        VePMDR_e_FaultSts_SysVoltLo_BF3) == CeDFIB_e_Init);

    /* RelationalOperator: '<S326>/Relational Operator3' incorporates:
     *  Constant: '<S343>/Constant'
     *  VariantMerge generated from: '<S336>/FaultSts_SysVoltLo_HB'
     */
    rtb_TmpSignalConversionAtVePMDR_b_PowerM = (((uint32)
        VePMDR_e_FaultSts_SysVoltLo_HB) == CeDFIB_e_Init);

    /* Outputs for Atomic SubSystem: '<S199>/SysVoltLow_HBSpare' */
#if Rte_SysCon_Variant_PMDR_8

    /* Outputs for Atomic SubSystem: '<S337>/SysVoltLow_HBSpare' */

    /* RelationalOperator: '<S443>/Relational Operator3' incorporates:
     *  Constant: '<S443>/Constant3'
     *  S-Function (sfix_bitop): '<S443>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_IsDiag = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_m) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S443>/EdgeFalling1' */
    /* Logic: '<S443>/Logical Operator' incorporates:
     *  Logic: '<S445>/OR1'
     */
    rtb_Comparison2_ap = !rtb_TmpSignalConversionAtVeDFIR_b_IsDiag;

    /* End of Outputs for SubSystem: '<S443>/EdgeFalling1' */

    /* Logic: '<S443>/Logical1' incorporates:
     *  Constant: '<S330>/Calib'
     *  Constant: '<S443>/Constant1'
     *  Logic: '<S443>/Logical Operator'
     *  Logic: '<S443>/Logical10'
     *  Logic: '<S443>/Logical12'
     *  RelationalOperator: '<S443>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S443>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVePMDR_b_AccRun =
        (rtb_TmpSignalConversionAtVePMDR_b_AccRun &&
         ((!KePMDR_b_SysVoltLo_LtchEnbl) || (((((uint32)
              rtb_TmpSignalConversionAtVeDMAB_y_Stat_m) & 1U) == 0U) ||
           rtb_Comparison2_ap)));

    /* RelationalOperator: '<S440>/Comparison3' incorporates:
     *  Constant: '<S329>/Calib'
     */
    VePMDR_b_HBSpare_SysLoFailSetting =
        (rtb_TmpSignalConversionAtVePMDR_U_HBSpar <= KePMDD_U_SysVoltMinThrsh);

    /* Outputs for Atomic SubSystem: '<S443>/EdgeFalling1' */
    /* Logic: '<S445>/AND' incorporates:
     *  UnitDelay: '<S445>/Unit Delay'
     */
    rtb_Comparison2_ap = (rtb_Comparison2_ap && (PMDR_ac_DW.UnitDelay_DSTATE_k0));

    /* Update for UnitDelay: '<S445>/Unit Delay' */
    PMDR_ac_DW.UnitDelay_DSTATE_k0 = rtb_TmpSignalConversionAtVeDFIR_b_IsDiag;

    /* End of Outputs for SubSystem: '<S443>/EdgeFalling1' */

    /* Logic: '<S443>/Logical5' */
    rtb_NOT4 = (rtb_NOT4 || rtb_Comparison2_ap);

    /* Outputs for Atomic SubSystem: '<S444>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S444>/Counter Reset  Enabled ' */
    /* Switch: '<S451>/Switch1' incorporates:
     *  Logic: '<S444>/Fail Counter Reset'
     *  Logic: '<S444>/NOT6'
     *  Switch: '<S451>/Switch2'
     *  Switch: '<S452>/Switch1'
     *  UnitDelay: '<S444>/Unit Delay'
     *  UnitDelay: '<S444>/Unit Delay1'
     */
    if ((rtb_NOT4 || (PMDR_ac_DW.UnitDelay_DSTATE_n0)) ||
            (PMDR_ac_DW.UnitDelay1_DSTATE))
    {
        /* Switch: '<S451>/Switch1' incorporates:
         *  Constant: '<S451>/Constant Value2'
         */
        VePMDD_Cnt_SysVoltLowFail_HBSpare = 0U;

        /* Switch: '<S452>/Switch1' incorporates:
         *  Constant: '<S452>/Constant Value2'
         */
        VePMDD_Cnt_SysVoltLowSmpl_HBSpare = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVePMDR_b_AccRun &&
                (VePMDR_b_HBSpare_SysLoFailSetting))
        {
            /* Switch: '<S451>/Switch1' incorporates:
             *  Constant: '<S451>/Constant Value1'
             *  Sum: '<S451>/Subtraction'
             *  Switch: '<S451>/Switch2'
             *  UnitDelay: '<S451>/Unit Delay'
             */
            VePMDD_Cnt_SysVoltLowFail_HBSpare = (uint16)(((uint32)
                VePMDD_Cnt_SysVoltLowFail_HBSpare) + 1U);
        }

        /* Switch: '<S452>/Switch2' */
        if (rtb_TmpSignalConversionAtVePMDR_b_AccRun)
        {
            /* Switch: '<S452>/Switch1' incorporates:
             *  Constant: '<S452>/Constant Value1'
             *  Sum: '<S452>/Subtraction'
             *  Switch: '<S452>/Switch2'
             *  UnitDelay: '<S452>/Unit Delay'
             */
            VePMDD_Cnt_SysVoltLowSmpl_HBSpare = (uint16)(((uint32)
                VePMDD_Cnt_SysVoltLowSmpl_HBSpare) + 1U);
        }

        /* End of Switch: '<S452>/Switch2' */
    }

    /* End of Switch: '<S451>/Switch1' */
    /* End of Outputs for SubSystem: '<S444>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S444>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S444>/Greater Than or Equal ' incorporates:
     *  Constant: '<S327>/Calib'
     */
    PMDR_ac_DW.UnitDelay1_DSTATE = (VePMDD_Cnt_SysVoltLowFail_HBSpare >=
        KePMDD_Cnt_SysVoltLoFail);

    /* Logic: '<S444>/NOT5' incorporates:
     *  Constant: '<S328>/Calib'
     *  Logic: '<S444>/NOT3'
     *  RelationalOperator: '<S444>/Less Than  or Equal'
     */
    PMDR_ac_DW.UnitDelay_DSTATE_n0 = ((VePMDD_Cnt_SysVoltLowSmpl_HBSpare >=
        KePMDD_Cnt_SysVoltLoSample) && (!PMDR_ac_DW.UnitDelay1_DSTATE));

    /* Switch: '<S457>/Switch1' incorporates:
     *  Constant: '<S450>/Constant Value'
     *  DataStoreWrite: '<S440>/Data Store Write11'
     *  Switch: '<S456>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        PMDR_ac_DW.NePMDR_Cnt_HBSpareSysVoltLow_MFOP = 0U;
    }
    else
    {
        if (PMDR_ac_DW.UnitDelay_DSTATE_n0)
        {
            /* MinMax: '<S450>/Minimum2' incorporates:
             *  DataStoreRead: '<S440>/Data Store Read11'
             *  Switch: '<S456>/Switch1'
             */
            if (VePMDD_Cnt_SysVoltLowFail_HBSpare >
                    PMDR_ac_DW.NePMDR_Cnt_HBSpareSysVoltLow_MFOP)
            {
                /* DataStoreWrite: '<S440>/Data Store Write11' incorporates:
                 *  Switch: '<S456>/Switch1'
                 */
                PMDR_ac_DW.NePMDR_Cnt_HBSpareSysVoltLow_MFOP =
                    VePMDD_Cnt_SysVoltLowFail_HBSpare;
            }

            /* End of MinMax: '<S450>/Minimum2' */
        }
    }

    /* End of Switch: '<S457>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S443>/Fail' */
    PMDR_ac_Fail(PMDR_ac_DW.UnitDelay1_DSTATE,
                 (&(VePMDR_e_FaultSts_SysVoltLo_HBSpare)));

    /* End of Outputs for SubSystem: '<S443>/Fail' */

    /* Outputs for Enabled SubSystem: '<S443>/Init' */
    PMDR_ac_Init_k(rtb_NOT4, (&(VePMDR_e_FaultSts_SysVoltLo_HBSpare)));

    /* End of Outputs for SubSystem: '<S443>/Init' */

    /* Outputs for Enabled SubSystem: '<S443>/Pass' */
    PMDR_ac_Pass(PMDR_ac_DW.UnitDelay_DSTATE_n0,
                 (&(VePMDR_e_FaultSts_SysVoltLo_HBSpare)));

    /* End of Outputs for SubSystem: '<S443>/Pass' */

    /* VariantMerge generated from: '<S337>/SysVoltLowFA_HBSpare' incorporates:
     *  Constant: '<S446>/Constant'
     *  RelationalOperator: '<S443>/Relational Operator'
     *  VariantMerge generated from: '<S337>/FaultSts_SysVoltLo_HBSpare'
     */
    PMDR_ac_B.VariantMergeForOutportSysVoltLowFA_HBSpa = (((uint32)
        VePMDR_e_FaultSts_SysVoltLo_HBSpare) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S337>/SysVoltLow_HBSpare' */
#else

    /* Outputs for Atomic SubSystem: '<S337>/SysVoltLow_HBSpare_Stub' */
    /* VariantMerge generated from: '<S337>/FaultSts_SysVoltLo_HBSpare' incorporates:
     *  Constant: '<S458>/Constant'
     */
    VePMDR_e_FaultSts_SysVoltLo_HBSpare = CeDFIB_e_Pass;

    /* VariantMerge generated from: '<S337>/SysVoltLowFA_HBSpare' incorporates:
     *  Constant: '<S441>/FALSE Constant2'
     */
    PMDR_ac_B.VariantMergeForOutportSysVoltLowFA_HBSpa = false;

    /* End of Outputs for SubSystem: '<S337>/SysVoltLow_HBSpare_Stub' */
#endif

    /* End of Outputs for SubSystem: '<S199>/SysVoltLow_HBSpare' */

    /* If: '<S326>/If' incorporates:
     *  Constant: '<S339>/Constant'
     *  Constant: '<S344>/Constant'
     *  Constant: '<S345>/Constant'
     *  Constant: '<S346>/Constant'
     *  Constant: '<S347>/Constant'
     *  Constant: '<S348>/Constant'
     *  Logic: '<S326>/Logical1'
     *  Logic: '<S326>/Logical10'
     *  RelationalOperator: '<S326>/Relational Operator4'
     *  RelationalOperator: '<S326>/Relational Operator5'
     *  RelationalOperator: '<S326>/Relational Operator6'
     *  RelationalOperator: '<S326>/Relational Operator7'
     *  RelationalOperator: '<S326>/Relational Operator8'
     *  RelationalOperator: '<S326>/Relational Operator9'
     *  VariantMerge generated from: '<S333>/FaultSts_SysVoltLo_BF1'
     *  VariantMerge generated from: '<S334>/FaultSts_SysVoltLo_BF2'
     *  VariantMerge generated from: '<S335>/FaultSts_SysVoltLo_BF3'
     *  VariantMerge generated from: '<S336>/FaultSts_SysVoltLo_HB'
     *  VariantMerge generated from: '<S337>/FaultSts_SysVoltLo_HBSpare'
     */
    if ((((rtb_Logical_o || rtb_TmpSignalConversionAtVePMDR_b_RunC_i) ||
            rtb_TmpSignalConversionAtVeDFIR_b_DiagSy) ||
            rtb_TmpSignalConversionAtVePMDR_b_PowerM) || (((uint32)
            VePMDR_e_FaultSts_SysVoltLo_HBSpare) == CeDFIB_e_Init))
    {
        /* Outputs for IfAction SubSystem: '<S326>/Init' incorporates:
         *  ActionPort: '<S350>/Action Port'
         */
        PMDR_ac_Init_i(&PMDR_ac_B.Merge_p);

        /* End of Outputs for SubSystem: '<S326>/Init' */
    }
    else if (((((((uint32)VePMDR_e_FaultSts_SysVoltLo_BF1) == CeDFIB_e_Fail) ||
                (((uint32)VePMDR_e_FaultSts_SysVoltLo_BF2) == CeDFIB_e_Fail)) ||
               (((uint32)VePMDR_e_FaultSts_SysVoltLo_BF3) == CeDFIB_e_Fail)) ||
              (((uint32)VePMDR_e_FaultSts_SysVoltLo_HB) == CeDFIB_e_Fail)) ||
             (((uint32)VePMDR_e_FaultSts_SysVoltLo_HBSpare) == CeDFIB_e_Fail))
    {
        /* Outputs for IfAction SubSystem: '<S326>/Fail' incorporates:
         *  ActionPort: '<S349>/Action Port'
         */
        PMDR_ac_Fail_h(&PMDR_ac_B.Merge_p);

        /* End of Outputs for SubSystem: '<S326>/Fail' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S326>/Pass' incorporates:
         *  ActionPort: '<S351>/Action Port'
         */
        PMDR_ac_Pass_d(&PMDR_ac_B.Merge_p);

        /* End of Outputs for SubSystem: '<S326>/Pass' */
    }

    /* End of If: '<S326>/If' */

    /* RelationalOperator: '<S326>/Relational Operator10' incorporates:
     *  Constant: '<S340>/Constant'
     *  Merge: '<S326>/Merge'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_PostCo = (((uint32)PMDR_ac_B.Merge_p) ==
        CeDFIB_e_Fail);

    /* S-Function (fcgen): '<S12>/FcnCallGen1' incorporates:
     *  SubSystem: '<S12>/Subsystem1'
     */
    /* Outport: '<Root>/VePMDR_U_BF2_SysVolt' incorporates:
     *  Inport: '<S197>/VePMDB_U_BF2_SysVolt'
     *  SignalConversion generated from: '<S12>/Out1'
     */
    (void)Rte_Write_VePMDR_U_BF2_SysVolt_Value
        (rtb_TmpSignalConversionAtVePMDB_U_BF2_Sy);

    /* Outport: '<Root>/VePMDR_U_HB_SysVolt' incorporates:
     *  Inport: '<S197>/VePMDB_U_HB_SysVolt'
     *  SignalConversion generated from: '<S12>/Out3'
     */
    (void)Rte_Write_VePMDR_U_HB_SysVolt_Value
        (rtb_TmpSignalConversionAtVePMDB_U_HB_Sys);

    /* Outport: '<Root>/VePMDR_U_BF1_SysVolt' incorporates:
     *  Inport: '<S197>/VePMDB_U_BF1_SysVolt'
     *  SignalConversion generated from: '<S12>/Outport1'
     */
    (void)Rte_Write_VePMDR_U_BF1_SysVolt_Value
        (rtb_TmpSignalConversionAtVePMDB_U_BF1_Sy);

    /* End of Outputs for S-Function (fcgen): '<S12>/FcnCallGen1' */

    /* Outport: '<Root>/VePMDR_b_HB_SysVoltFA' incorporates:
     *  SignalConversion generated from: '<S12>/VePMDD_b_HB_SysVoltFA'
     */
    (void)Rte_Write_VePMDR_b_HB_SysVoltFA_Value
        (rtb_TmpSignalConversionAtVeDFIR_b_DsblDi);

    /* Outport: '<Root>/VePMDR_b_SysVoltHighFA' incorporates:
     *  SignalConversion generated from: '<S12>/VePMDD_b_SysVoltHighFA'
     */
    (void)Rte_Write_VePMDR_b_SysVoltHighFA_Value(rtb_NOT4_h);

    /* Outport: '<Root>/VePMDR_b_SysVoltLowFA' incorporates:
     *  SignalConversion generated from: '<S12>/VePMDD_b_SysVoltLowFA'
     */
    (void)Rte_Write_VePMDR_b_SysVoltLowFA_Value
        (rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* Outport: '<Root>/VePMDR_b_SysVoltLowFA_BF1' incorporates:
     *  SignalConversion generated from: '<S12>/VePMDR_b_SysVoltLowFA_BF1'
     */
    (void)Rte_Write_VePMDR_b_SysVoltLowFA_BF1_Value
        (PMDR_ac_B.VariantMergeForOutportSysVoltLowFA_BF1);

    /* Outport: '<Root>/VePMDR_b_SysVoltLowFA_BF2' incorporates:
     *  SignalConversion generated from: '<S12>/VePMDR_b_SysVoltLowFA_BF2'
     */
    (void)Rte_Write_VePMDR_b_SysVoltLowFA_BF2_Value
        (PMDR_ac_B.VariantMergeForOutportSysVoltLowFA_BF2);

    /* Outport: '<Root>/VePMDR_b_SysVoltLowFA_BF3' incorporates:
     *  SignalConversion generated from: '<S12>/VePMDR_b_SysVoltLowFA_BF3'
     */
    (void)Rte_Write_VePMDR_b_SysVoltLowFA_BF3_Value
        (PMDR_ac_B.VariantMergeForOutportSysVoltLowFA_BF3);

    /* Outport: '<Root>/VePMDR_b_SysVoltLowFA_HB' incorporates:
     *  SignalConversion generated from: '<S12>/VePMDR_b_SysVoltLowFA_HB'
     */
    (void)Rte_Write_VePMDR_b_SysVoltLowFA_HB_Value
        (PMDR_ac_B.VariantMergeForOutportSysVoltLowFA_HB);

    /* Outport: '<Root>/VePMDR_b_SysVoltLowFA_HBSpare' incorporates:
     *  SignalConversion generated from: '<S12>/VePMDR_b_SysVoltLowFA_HBSpare'
     */
    (void)Rte_Write_VePMDR_b_SysVoltLowFA_HBSpare_Value
        (PMDR_ac_B.VariantMergeForOutportSysVoltLowFA_HBSpa);

    /* SignalConversion generated from: '<S12>/VePMDR_e_FaultSts_IgnSwAccPstnCktHi' incorporates:
     *  SignalConversion generated from: '<S12>/VePMDR_e_FaultSts_IgnSwAccPstnCktLo'
     */
#if Rte_SysCon_Variant_PMDR_10

    /* Outport: '<Root>/VePMDR_e_FaultSts_IgnSwAccPstnCktHi' incorporates:
     *  Merge: '<S476>/Merge'
     */
    (void)Rte_Write_VePMDR_e_FaultSts_IgnSwAccPstnCktHi_Value(PMDR_ac_B.Merge_cq);

    /* Outport: '<Root>/VePMDR_e_FaultSts_IgnSwAccPstnCktLo' incorporates:
     *  Merge: '<S504>/Merge'
     */
    (void)Rte_Write_VePMDR_e_FaultSts_IgnSwAccPstnCktLo_Value(PMDR_ac_B.Merge_i);

#endif

    /* End of SignalConversion generated from: '<S12>/VePMDR_e_FaultSts_IgnSwAccPstnCktHi' */

    /* SignalConversion generated from: '<S12>/VePMDR_e_FaultSts_IgnSwRunCrnkPstnCktHi' incorporates:
     *  SignalConversion generated from: '<S12>/VePMDR_e_FaultSts_IgnSwRunCrnkPstnCktLo'
     */
#if Rte_SysCon_Variant_PMDR_12

    /* Outport: '<Root>/VePMDR_e_FaultSts_IgnSwRunCrnkPstnCktHi' incorporates:
     *  Merge: '<S562>/Merge'
     */
    (void)Rte_Write_VePMDR_e_FaultSts_IgnSwRunCrnkPstnCktHi_Value
        (PMDR_ac_B.Merge_c);

    /* Outport: '<Root>/VePMDR_e_FaultSts_IgnSwRunCrnkPstnCktLo' incorporates:
     *  Merge: '<S536>/Merge'
     */
    (void)Rte_Write_VePMDR_e_FaultSts_IgnSwRunCrnkPstnCktLo_Value
        (PMDR_ac_B.Merge_d4);

#endif

    /* End of SignalConversion generated from: '<S12>/VePMDR_e_FaultSts_IgnSwRunCrnkPstnCktHi' */

    /* SignalConversion generated from: '<S12>/VePMDR_e_FaultSts_IgnSwRunPstnCktHi' incorporates:
     *  SignalConversion generated from: '<S12>/VePMDR_e_FaultSts_IgnSwRunPstnCktLo'
     */
#if Rte_SysCon_Variant_PMDR_11

    /* Outport: '<Root>/VePMDR_e_FaultSts_IgnSwRunPstnCktHi' incorporates:
     *  Merge: '<S587>/Merge'
     */
    (void)Rte_Write_VePMDR_e_FaultSts_IgnSwRunPstnCktHi_Value(PMDR_ac_B.Merge_g);

    /* Outport: '<Root>/VePMDR_e_FaultSts_IgnSwRunPstnCktLo' incorporates:
     *  Merge: '<S613>/Merge'
     */
    (void)Rte_Write_VePMDR_e_FaultSts_IgnSwRunPstnCktLo_Value(PMDR_ac_B.Merge_d);

#endif

    /* End of SignalConversion generated from: '<S12>/VePMDR_e_FaultSts_IgnSwRunPstnCktHi' */

    /* Outport: '<Root>/VePMDR_e_FaultSts_SysVoltHi' incorporates:
     *  Merge: '<S200>/Merge'
     *  SignalConversion generated from: '<S12>/VePMDR_e_FaultSts_SysVoltHi'
     */
    (void)Rte_Write_VePMDR_e_FaultSts_SysVoltHi_Value(PMDR_ac_B.Merge);

    /* Outport: '<Root>/VePMDR_e_FaultSts_SysVoltLo' incorporates:
     *  Merge: '<S326>/Merge'
     *  SignalConversion generated from: '<S12>/VePMDR_e_FaultSts_SysVoltLo'
     */
    (void)Rte_Write_VePMDR_e_FaultSts_SysVoltLo_Value(PMDR_ac_B.Merge_p);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
}

/* Output function */
FUNC(void, PMDR_CODE) FsftPMDR_b_EngOffRq_C(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMDR_b_EngOffRq_C' */
    /* Merge: '<Root>/Merge_29' incorporates:
     *  Chart: '<S1>/FsftPMDR_b_EngOffRq_CChrt'
     *  SignalConversion generated from: '<S1>/VePMDR_b_EngOffRq_CFA_write'
     */
    /* Gateway: FsftPMDR_b_EngOffRq_C/FsftPMDR_b_EngOffRq_CChrt */
    /* During: FsftPMDR_b_EngOffRq_C/FsftPMDR_b_EngOffRq_CChrt */
    /* Entry Internal: FsftPMDR_b_EngOffRq_C/FsftPMDR_b_EngOffRq_CChrt */
    /* Transition: '<S30>:2' */
    Rte_IrvWrite_FsftPMDR_b_EngOffRq_C_VePMDR_b_EngOffRq_CFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMDR_b_EngOffRq_C' */
}

/* Output function */
FUNC(void, PMDR_CODE) FsftPMDR_b_EngOffRq_C2(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMDR_b_EngOffRq_C2' */
    /* Merge: '<Root>/Merge_26' incorporates:
     *  Chart: '<S2>/FsftPMDR_b_EngOffRq_C2Chrt'
     *  SignalConversion generated from: '<S2>/VePMDR_b_EngOffRq_C2FA_write'
     */
    /* Gateway: FsftPMDR_b_EngOffRq_C2/FsftPMDR_b_EngOffRq_C2Chrt */
    /* During: FsftPMDR_b_EngOffRq_C2/FsftPMDR_b_EngOffRq_C2Chrt */
    /* Entry Internal: FsftPMDR_b_EngOffRq_C2/FsftPMDR_b_EngOffRq_C2Chrt */
    /* Transition: '<S31>:2' */
    Rte_IrvWrite_FsftPMDR_b_EngOffRq_C2_VePMDR_b_EngOffRq_C2FA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMDR_b_EngOffRq_C2' */
}

/* Output function */
FUNC(void, PMDR_CODE) FsftPMDR_b_OperationalModeSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMDR_b_OperationalModeSts' */
    /* Outport: '<Root>/VePMDR_b_OperationalModeStsFA' incorporates:
     *  Chart: '<S3>/FsftPMDR_b_OperationalModeStsChrt'
     *  SignalConversion generated from: '<S3>/VePMDR_b_OperationalModeStsFA'
     */
    /* Gateway: FsftPMDR_b_OperationalModeSts/FsftPMDR_b_OperationalModeStsChrt */
    /* During: FsftPMDR_b_OperationalModeSts/FsftPMDR_b_OperationalModeStsChrt */
    /* Entry Internal: FsftPMDR_b_OperationalModeSts/FsftPMDR_b_OperationalModeStsChrt */
    /* Transition: '<S32>:2' */
    (void)Rte_Write_VePMDR_b_OperationalModeStsFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMDR_b_OperationalModeSts' */
}

/* Output function */
FUNC(void, PMDR_CODE) FsftPMDR_b_PAD_Actv(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMDR_b_PAD_Actv' */
    /* SignalConversion generated from: '<S4>/FsftPMDR_b_PAD_ActvChrt' incorporates:
     *  SignalConversion generated from: '<S4>/VePMDR_b_PAD_ActvFA_write'
     */
    /* Gateway: FsftPMDR_b_PAD_Actv/FsftPMDR_b_PAD_ActvChrt */
    /* During: FsftPMDR_b_PAD_Actv/FsftPMDR_b_PAD_ActvChrt */
    /* Entry Internal: FsftPMDR_b_PAD_Actv/FsftPMDR_b_PAD_ActvChrt */
    /* Transition: '<S33>:2' */
#if Rte_SysCon_Variant_PMDR_10

    /* Merge: '<Root>/Merge_28' incorporates:
     *  Chart: '<S4>/FsftPMDR_b_PAD_ActvChrt'
     */
    Rte_IrvWrite_FsftPMDR_b_PAD_Actv_VePMDR_b_PAD_ActvFA_write_IRV(true);

#endif

    /* End of SignalConversion generated from: '<S4>/FsftPMDR_b_PAD_ActvChrt' */
    /* End of Outputs for SubSystem: '<Root>/FsftPMDR_b_PAD_Actv' */
}

/* Output function */
FUNC(void, PMDR_CODE) FsftPMDR_b_RunCrnkActvECM(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMDR_b_RunCrnkActvECM' */
    /* Outport: '<Root>/VePMDR_b_RunCrnkActvECM_FA' incorporates:
     *  Chart: '<S5>/FsftPMDR_b_RunCrnkActvECMChrt'
     *  SignalConversion generated from: '<S5>/VePMDR_b_RunCrnkActvECMFA'
     */
    /* Gateway: FsftPMDR_b_RunCrnkActvECM/FsftPMDR_b_RunCrnkActvECMChrt */
    /* During: FsftPMDR_b_RunCrnkActvECM/FsftPMDR_b_RunCrnkActvECMChrt */
    /* Entry Internal: FsftPMDR_b_RunCrnkActvECM/FsftPMDR_b_RunCrnkActvECMChrt */
    /* Transition: '<S34>:2' */
    (void)Rte_Write_VePMDR_b_RunCrnkActvECM_FA_Value(true);

    /* Merge: '<Root>/Merge_3_Irv' incorporates:
     *  Chart: '<S5>/FsftPMDR_b_RunCrnkActvECMChrt'
     *  SignalConversion generated from: '<S5>/VePMDR_b_RunCrnkActvECMFA_write'
     */
    Rte_IrvWrite_FsftPMDR_b_RunCrnkActvECM_VePMDR_b_RunCrnkActvECMFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMDR_b_RunCrnkActvECM' */
}

/* Output function */
FUNC(void, PMDR_CODE) FsftPMDR_b_StrtCntrlStOn(void)
{
    /* Gateway: FsftPMDR_b_StrtCntrlStOn/FsftPMDR_b_StrtCntrlStOnChrt */
    /* During: FsftPMDR_b_StrtCntrlStOn/FsftPMDR_b_StrtCntrlStOnChrt */
    /* Entry Internal: FsftPMDR_b_StrtCntrlStOn/FsftPMDR_b_StrtCntrlStOnChrt */
    /* Transition: '<S35>:2' */
}

/* Output function */
FUNC(void, PMDR_CODE) FsftPMDR_e_KeyInIgn(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMDR_e_KeyInIgn' */
    /* Outport: '<Root>/VePMDR_b_KeyInIgnFA' incorporates:
     *  Chart: '<S7>/FsftPMDR_e_KeyInIgnChrt'
     *  SignalConversion generated from: '<S7>/VePMDR_b_KeyInIgnFA'
     */
    /* Gateway: FsftPMDR_e_KeyInIgn/FsftPMDR_e_KeyInIgnChrt */
    /* During: FsftPMDR_e_KeyInIgn/FsftPMDR_e_KeyInIgnChrt */
    /* Entry Internal: FsftPMDR_e_KeyInIgn/FsftPMDR_e_KeyInIgnChrt */
    /* Transition: '<S36>:2' */
    (void)Rte_Write_VePMDR_b_KeyInIgnFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMDR_e_KeyInIgn' */
}

/* Output function */
FUNC(void, PMDR_CODE) FsftPMDR_e_PowerModeRaw(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMDR_e_PowerModeRaw' */
    /* Merge: '<Root>/Merge_37' incorporates:
     *  Chart: '<S8>/FsftPMDR_e_PowerModeRawChrt'
     *  SignalConversion generated from: '<S8>/VePMDR_b_PowerModeRawFA_write'
     */
    /* Gateway: FsftPMDR_e_PowerModeRaw/FsftPMDR_e_PowerModeRawChrt */
    /* During: FsftPMDR_e_PowerModeRaw/FsftPMDR_e_PowerModeRawChrt */
    /* Entry Internal: FsftPMDR_e_PowerModeRaw/FsftPMDR_e_PowerModeRawChrt */
    /* Transition: '<S37>:2' */
    Rte_IrvWrite_FsftPMDR_e_PowerModeRaw_VePMDR_b_PowerModeRawFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMDR_e_PowerModeRaw' */
}

/* Output function */
FUNC(void, PMDR_CODE) FsftPMDR_e_Tonale_PowerModeRaw(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPMDR_e_Tonale_PowerModeRaw' */
    /* Merge: '<Root>/Merge_30' incorporates:
     *  Chart: '<S9>/FsftPMDR_e_Tonale_PowerModeRawChrt'
     *  SignalConversion generated from: '<S9>/VePMDR_b_Tonale_PowerModeRawFA_write'
     */
    /* Gateway: FsftPMDR_e_Tonale_PowerModeRaw/FsftPMDR_e_Tonale_PowerModeRawChrt */
    /* During: FsftPMDR_e_Tonale_PowerModeRaw/FsftPMDR_e_Tonale_PowerModeRawChrt */
    /* Entry Internal: FsftPMDR_e_Tonale_PowerModeRaw/FsftPMDR_e_Tonale_PowerModeRawChrt */
    /* Transition: '<S38>:2' */
    Rte_IrvWrite_FsftPMDR_e_Tonale_PowerModeRaw_VePMDR_b_Tonale_PowerModeRawFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPMDR_e_Tonale_PowerModeRaw' */
}

/* Output function */
FUNC(void, PMDR_CODE) PokePMDR_U_BF3_SysVolt(VAR(float32, AUTOMATIC)
    LePMDR_U_BF3_SysVolt, VAR(boolean, AUTOMATIC) LePMDR_b_BF3_SysVoltFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMDR_U_BF3_SysVolt' */
    /* Chart: '<S15>/PokePMDR_U_BF3_SysVoltChrt' incorporates:
     *  SignalConversion generated from: '<S15>/LePMDR_U_BF3_SysVolt'
     *  SignalConversion generated from: '<S15>/LePMDR_b_BF3_SysVoltFA'
     */
    /* Gateway: PokePMDR_U_BF3_SysVolt/PokePMDR_U_BF3_SysVoltChrt */
    /* During: PokePMDR_U_BF3_SysVolt/PokePMDR_U_BF3_SysVoltChrt */
    /* Entry Internal: PokePMDR_U_BF3_SysVolt/PokePMDR_U_BF3_SysVoltChrt */
    /* Transition: '<S668>:2' */
    if (!LePMDR_b_BF3_SysVoltFA)
    {
        /* Transition: '<S668>:3' */
        /* Transition: '<S668>:15' */
        PMDR_ac_B.LePMDR_U_BF3_SysVolt_out = LePMDR_U_BF3_SysVolt;

        /* Transition: '<S668>:18' */
    }
    else
    {
        /* Transition: '<S668>:4' */
    }

    /* End of Chart: '<S15>/PokePMDR_U_BF3_SysVoltChrt' */

    /* Outport: '<Root>/VePMDR_U_BF3_SysVolt' incorporates:
     *  SignalConversion generated from: '<S15>/VePMDR_U_BF3_SysVolt'
     */
    (void)Rte_Write_VePMDR_U_BF3_SysVolt_Value
        (PMDR_ac_B.LePMDR_U_BF3_SysVolt_out);

    /* SignalConversion generated from: '<S15>/PokePMDR_U_BF3_SysVoltChrt' incorporates:
     *  SignalConversion generated from: '<S15>/VePMDR_U_BF3_SysVolt_write'
     */
#if Rte_SysCon_Variant_PMDR_6

    /* Merge: '<Root>/Merge_23_Irv' */
    Rte_IrvWrite_PokePMDR_U_BF3_SysVolt_VePMDR_U_BF3_SysVolt_write_IRV
        (PMDR_ac_B.LePMDR_U_BF3_SysVolt_out);

#endif

    /* End of SignalConversion generated from: '<S15>/PokePMDR_U_BF3_SysVoltChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokePMDR_U_BF3_SysVolt' */
}

/* Output function */
FUNC(void, PMDR_CODE) PokePMDR_U_HBSpare_SysVolt(VAR(float32, AUTOMATIC)
    LePMDR_U_HBSpare_SysVolt, VAR(boolean, AUTOMATIC) LePMDR_b_HBSpare_SysVoltFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMDR_U_HBSpare_SysVolt' */
    /* Chart: '<S16>/PokePMDR_U_HBSpare_SysVoltChrt' incorporates:
     *  SignalConversion generated from: '<S16>/LePMDR_U_HBSpare_SysVolt'
     *  SignalConversion generated from: '<S16>/LePMDR_b_HBSpare_SysVoltFA'
     */
    /* Gateway: PokePMDR_U_HBSpare_SysVolt/PokePMDR_U_HBSpare_SysVoltChrt */
    /* During: PokePMDR_U_HBSpare_SysVolt/PokePMDR_U_HBSpare_SysVoltChrt */
    /* Entry Internal: PokePMDR_U_HBSpare_SysVolt/PokePMDR_U_HBSpare_SysVoltChrt */
    /* Transition: '<S669>:2' */
    if (!LePMDR_b_HBSpare_SysVoltFA)
    {
        /* Transition: '<S669>:3' */
        /* Transition: '<S669>:15' */
        PMDR_ac_B.LePMDR_U_HBSpare_SysVolt_out = LePMDR_U_HBSpare_SysVolt;

        /* Transition: '<S669>:18' */
    }
    else
    {
        /* Transition: '<S669>:4' */
    }

    /* End of Chart: '<S16>/PokePMDR_U_HBSpare_SysVoltChrt' */

    /* Outport: '<Root>/VePMDR_U_HBSpare_SysVolt' incorporates:
     *  SignalConversion generated from: '<S16>/VePMDR_U_HBSpare_SysVolt'
     */
    (void)Rte_Write_VePMDR_U_HBSpare_SysVolt_Value
        (PMDR_ac_B.LePMDR_U_HBSpare_SysVolt_out);

    /* SignalConversion generated from: '<S16>/PokePMDR_U_HBSpare_SysVoltChrt' incorporates:
     *  SignalConversion generated from: '<S16>/VePMDR_U_HBSpare_SysVolt_write'
     */
#if Rte_SysCon_Variant_PMDR_8

    /* Merge: '<Root>/Merge_25_Irv' */
    Rte_IrvWrite_PokePMDR_U_HBSpare_SysVolt_VePMDR_U_HBSpare_SysVolt_write_IRV
        (PMDR_ac_B.LePMDR_U_HBSpare_SysVolt_out);

#endif

    /* End of SignalConversion generated from: '<S16>/PokePMDR_U_HBSpare_SysVoltChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokePMDR_U_HBSpare_SysVolt' */
}

/* Output function */
FUNC(void, PMDR_CODE) PokePMDR_U_MainRelay_SysVolt(VAR(float32, AUTOMATIC)
    LePMDR_U_MainRelay_SysVolt, VAR(boolean, AUTOMATIC)
    LePMDR_b_MainRelay_SysVoltFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMDR_U_MainRelay_SysVolt' */
    /* Chart: '<S17>/PokePMDR_U_MainRelay_SysVoltChrt' incorporates:
     *  SignalConversion generated from: '<S17>/LePMDR_U_MainRelay_SysVolt'
     *  SignalConversion generated from: '<S17>/LePMDR_b_MainRelay_SysVoltFA'
     */
    /* Gateway: PokePMDR_U_MainRelay_SysVolt/PokePMDR_U_MainRelay_SysVoltChrt */
    /* During: PokePMDR_U_MainRelay_SysVolt/PokePMDR_U_MainRelay_SysVoltChrt */
    /* Entry Internal: PokePMDR_U_MainRelay_SysVolt/PokePMDR_U_MainRelay_SysVoltChrt */
    /* Transition: '<S670>:2' */
    if (!LePMDR_b_MainRelay_SysVoltFA)
    {
        /* Transition: '<S670>:3' */
        /* Transition: '<S670>:15' */
        PMDR_ac_B.LePMDR_U_MainRelay_SysVolt_out = LePMDR_U_MainRelay_SysVolt;

        /* Transition: '<S670>:18' */
    }
    else
    {
        /* Transition: '<S670>:4' */
    }

    /* End of Chart: '<S17>/PokePMDR_U_MainRelay_SysVoltChrt' */

    /* Outport: '<Root>/VePMDR_U_MainRelay_SysVolt' incorporates:
     *  SignalConversion generated from: '<S17>/VePMDR_U_MainRelay_SysVolt'
     */
    (void)Rte_Write_VePMDR_U_MainRelay_SysVolt_Value
        (PMDR_ac_B.LePMDR_U_MainRelay_SysVolt_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMDR_U_MainRelay_SysVolt' */
}

/* Output function */
FUNC(void, PMDR_CODE) PokePMDR_b_BCMWup(VAR(boolean, AUTOMATIC) LePMDR_b_BCMWup,
    VAR(boolean, AUTOMATIC) LePMDR_b_BCMWupFA)
{
    boolean rtb_LePMDR_b_BCMWupFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMDR_b_BCMWup' */
    /* Chart: '<S18>/PokePMDR_b_BCMWupChrt' incorporates:
     *  SignalConversion generated from: '<S18>/LePMDR_b_BCMWupFA'
     *  SignalConversion generated from: '<S18>/LePMDR_b_BCMWup'
     */
    /* Gateway: PokePMDR_b_BCMWup/PokePMDR_b_BCMWupChrt */
    /* During: PokePMDR_b_BCMWup/PokePMDR_b_BCMWupChrt */
    /* Entry Internal: PokePMDR_b_BCMWup/PokePMDR_b_BCMWupChrt */
    /* Transition: '<S671>:2' */
    if (!LePMDR_b_BCMWupFA)
    {
        /* Transition: '<S671>:3' */
        /* Transition: '<S671>:15' */
        PMDR_ac_B.LePMDR_b_BCMWup_out = LePMDR_b_BCMWup;
        rtb_LePMDR_b_BCMWupFA_out = false;

        /* Transition: '<S671>:18' */
    }
    else
    {
        /* Transition: '<S671>:4' */
        rtb_LePMDR_b_BCMWupFA_out = true;
    }

    /* End of Chart: '<S18>/PokePMDR_b_BCMWupChrt' */

    /* Outport: '<Root>/VePMDR_b_BCMWakeupLine' incorporates:
     *  SignalConversion generated from: '<S18>/VePMDR_b_BCMWup'
     */
    (void)Rte_Write_VePMDR_b_BCMWakeupLine_Value(PMDR_ac_B.LePMDR_b_BCMWup_out);

    /* Outport: '<Root>/VePMDR_b_BCMWakeupLineFA' incorporates:
     *  SignalConversion generated from: '<S18>/VePMDR_b_BCMWupFA'
     */
    (void)Rte_Write_VePMDR_b_BCMWakeupLineFA_Value(rtb_LePMDR_b_BCMWupFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMDR_b_BCMWup' */
}

/* Output function */
FUNC(void, PMDR_CODE) PokePMDR_b_CrankAborted(VAR(boolean, AUTOMATIC)
    LePMDR_b_CrankAborted)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMDR_b_CrankAborted' */
    /* Outport: '<Root>/VePMDR_b_CrankAborted' incorporates:
     *  SignalConversion generated from: '<S19>/VePMDR_b_CrankAborted'
     *  SignalConversion generated from: '<S19>/LePMDR_b_CrankAborted'
     */
    /* Gateway: PokePMDR_b_CrankAborted/PokePMDR_b_CrankAbortedChrt */
    /* During: PokePMDR_b_CrankAborted/PokePMDR_b_CrankAbortedChrt */
    /* Entry Internal: PokePMDR_b_CrankAborted/PokePMDR_b_CrankAbortedChrt */
    /* Transition: '<S672>:2' */
    (void)Rte_Write_VePMDR_b_CrankAborted_Value(LePMDR_b_CrankAborted);

    /* End of Outputs for SubSystem: '<Root>/PokePMDR_b_CrankAborted' */
}

/* Output function */
FUNC(void, PMDR_CODE) PokePMDR_b_EngOffRq_C(VAR(boolean, AUTOMATIC)
    LePMDR_b_EngOffRq_C)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMDR_b_EngOffRq_C' */
    /* Merge: '<Root>/Merge_29' incorporates:
     *  Chart: '<S20>/PokePMDR_b_EngOffRq_CChrt'
     *  SignalConversion generated from: '<S20>/VePMDR_b_EngOffRq_C__FA_Rst_write'
     */
    /* Gateway: PokePMDR_b_EngOffRq_C/PokePMDR_b_EngOffRq_CChrt */
    /* During: PokePMDR_b_EngOffRq_C/PokePMDR_b_EngOffRq_CChrt */
    /* Entry Internal: PokePMDR_b_EngOffRq_C/PokePMDR_b_EngOffRq_CChrt */
    /* Transition: '<S673>:2' */
    Rte_IrvWrite_PokePMDR_b_EngOffRq_C_VePMDR_b_EngOffRq_CFA_write_IRV(false);

    /* Merge: '<Root>/Merge_20' incorporates:
     *  SignalConversion generated from: '<S20>/LePMDR_b_EngOffRq_C'
     *  SignalConversion generated from: '<S20>/VePMDR_b_EngOffRq_C_write'
     */
    Rte_IrvWrite_PokePMDR_b_EngOffRq_C_VePMDR_b_EngOffReq_C_Init_write_IRV
        (LePMDR_b_EngOffRq_C);

    /* End of Outputs for SubSystem: '<Root>/PokePMDR_b_EngOffRq_C' */
}

/* Output function */
FUNC(void, PMDR_CODE) PokePMDR_b_EngOffRq_C2(VAR(boolean, AUTOMATIC)
    LePMDR_b_EngOffRq_C2)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMDR_b_EngOffRq_C2' */
    /* Merge: '<Root>/Merge_26' incorporates:
     *  Chart: '<S21>/PokePMDR_b_EngOffRq_C2Chrt'
     *  SignalConversion generated from: '<S21>/VePMDR_b_EngOffRq_C2_FA_Rst_write'
     */
    /* Gateway: PokePMDR_b_EngOffRq_C2/PokePMDR_b_EngOffRq_C2Chrt */
    /* During: PokePMDR_b_EngOffRq_C2/PokePMDR_b_EngOffRq_C2Chrt */
    /* Entry Internal: PokePMDR_b_EngOffRq_C2/PokePMDR_b_EngOffRq_C2Chrt */
    /* Transition: '<S674>:2' */
    Rte_IrvWrite_PokePMDR_b_EngOffRq_C2_VePMDR_b_EngOffRq_C2FA_write_IRV(false);

    /* Merge: '<Root>/Merge_24' incorporates:
     *  SignalConversion generated from: '<S21>/LePMDR_b_EngOffRq_C2'
     *  SignalConversion generated from: '<S21>/VePMDR_b_EngOffRq_C2_write'
     */
    Rte_IrvWrite_PokePMDR_b_EngOffRq_C2_VePMDR_b_EngOffReq_C2_Init_write_IRV
        (LePMDR_b_EngOffRq_C2);

    /* End of Outputs for SubSystem: '<Root>/PokePMDR_b_EngOffRq_C2' */
}

/* Output function */
FUNC(void, PMDR_CODE) PokePMDR_b_PAD_Actv(VAR(boolean, AUTOMATIC)
    LePMDR_b_PAD_Actv)
{

#if !Rte_SysCon_Variant_PMDR_10

    UNUSED_PARAMETER(LePMDR_b_PAD_Actv);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokePMDR_b_PAD_Actv' */
    /* SignalConversion generated from: '<S22>/PokePMDR_b_PAD_ActvChrt' incorporates:
     *  SignalConversion generated from: '<S22>/VePMDR_b_PAD_Actv_write'
     *  SignalConversion generated from: '<S22>/VePMDR_b_PAD_FA_Rst_write'
     */
    /* Gateway: PokePMDR_b_PAD_Actv/PokePMDR_b_PAD_ActvChrt */
    /* During: PokePMDR_b_PAD_Actv/PokePMDR_b_PAD_ActvChrt */
    /* Entry Internal: PokePMDR_b_PAD_Actv/PokePMDR_b_PAD_ActvChrt */
    /* Transition: '<S675>:2' */
#if Rte_SysCon_Variant_PMDR_10

    /* Merge: '<Root>/Merge_27' incorporates:
     *  SignalConversion generated from: '<S22>/LePMDR_b_PAD_Actv'
     */
    Rte_IrvWrite_PokePMDR_b_PAD_Actv_VePMDR_b_PAD_Actv_Init_write_IRV
        (LePMDR_b_PAD_Actv);

    /* Merge: '<Root>/Merge_28' incorporates:
     *  Chart: '<S22>/PokePMDR_b_PAD_ActvChrt'
     */
    Rte_IrvWrite_PokePMDR_b_PAD_Actv_VePMDR_b_PAD_ActvFA_write_IRV(false);

#endif

    /* End of SignalConversion generated from: '<S22>/PokePMDR_b_PAD_ActvChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokePMDR_b_PAD_Actv' */
}

/* Output function */
FUNC(void, PMDR_CODE) PokePMDR_b_PTRunAbrt(VAR(boolean, AUTOMATIC)
    LePMDR_b_PTRunAbrt)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMDR_b_PTRunAbrt' */
    /* Outport: '<Root>/VePMDR_b_PTRunAbrt' incorporates:
     *  SignalConversion generated from: '<S23>/VePMDR_b_PTRunAbrt'
     *  SignalConversion generated from: '<S23>/LePMDR_b_PTRunAbrt'
     */
    /* Gateway: PokePMDR_b_PTRunAbrt/PokePMDR_b_PTRunAbrtChrt */
    /* During: PokePMDR_b_PTRunAbrt/PokePMDR_b_PTRunAbrtChrt */
    /* Entry Internal: PokePMDR_b_PTRunAbrt/PokePMDR_b_PTRunAbrtChrt */
    /* Transition: '<S676>:2' */
    (void)Rte_Write_VePMDR_b_PTRunAbrt_Value(LePMDR_b_PTRunAbrt);

    /* End of Outputs for SubSystem: '<Root>/PokePMDR_b_PTRunAbrt' */
}

/* Output function */
FUNC(void, PMDR_CODE) PokePMDR_b_RunCrnkActvECM(VAR(boolean, AUTOMATIC)
    LePMDR_b_RunCrnkActvECM, VAR(boolean, AUTOMATIC) LePMDR_b_RunCrnkActvECMFA)
{
    boolean rtb_LePMDR_b_RunCrnkActvECMFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMDR_b_RunCrnkActvECM' */
    /* Chart: '<S24>/PokePMDR_b_RunCrnkActvECMChrt' incorporates:
     *  SignalConversion generated from: '<S24>/LePMDR_b_RunCrnkActvECMFA'
     *  SignalConversion generated from: '<S24>/LePMDR_b_RunCrnkActvECM'
     */
    /* Gateway: PokePMDR_b_RunCrnkActvECM/PokePMDR_b_RunCrnkActvECMChrt */
    /* During: PokePMDR_b_RunCrnkActvECM/PokePMDR_b_RunCrnkActvECMChrt */
    /* Entry Internal: PokePMDR_b_RunCrnkActvECM/PokePMDR_b_RunCrnkActvECMChrt */
    /* Transition: '<S677>:2' */
    if (!LePMDR_b_RunCrnkActvECMFA)
    {
        /* Transition: '<S677>:3' */
        /* Transition: '<S677>:15' */
        PMDR_ac_B.LePMDR_b_RunCrnkActvECM_out = LePMDR_b_RunCrnkActvECM;
        rtb_LePMDR_b_RunCrnkActvECMFA_out = false;

        /* Transition: '<S677>:18' */
    }
    else
    {
        /* Transition: '<S677>:4' */
        rtb_LePMDR_b_RunCrnkActvECMFA_out = true;
    }

    /* End of Chart: '<S24>/PokePMDR_b_RunCrnkActvECMChrt' */

    /* Outport: '<Root>/VePMDR_b_RunCrnkActvECM' incorporates:
     *  SignalConversion generated from: '<S24>/VePMDR_b_RunCrnkActvECM'
     */
    (void)Rte_Write_VePMDR_b_RunCrnkActvECM_Value
        (PMDR_ac_B.LePMDR_b_RunCrnkActvECM_out);

    /* Outport: '<Root>/VePMDR_b_RunCrnkActvECM_FA' incorporates:
     *  SignalConversion generated from: '<S24>/VePMDR_b_RunCrnkActvECMFA'
     */
    (void)Rte_Write_VePMDR_b_RunCrnkActvECM_FA_Value
        (rtb_LePMDR_b_RunCrnkActvECMFA_out);

    /* Merge: '<Root>/Merge_3_Irv' incorporates:
     *  SignalConversion generated from: '<S24>/VePMDR_b_RunCrnkActvECMFA_write'
     * */
    Rte_IrvWrite_PokePMDR_b_RunCrnkActvECM_VePMDR_b_RunCrnkActvECMFA_write_IRV
        (rtb_LePMDR_b_RunCrnkActvECMFA_out);

    /* Merge: '<Root>/Merge_11_Irv' incorporates:
     *  SignalConversion generated from: '<S24>/VePMDR_b_RunCrnkActvECM_write'
     * */
    Rte_IrvWrite_PokePMDR_b_RunCrnkActvECM_VePMDR_b_RunCrnkActvECM_write_IRV
        (PMDR_ac_B.LePMDR_b_RunCrnkActvECM_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMDR_b_RunCrnkActvECM' */
}

/* Output function */
FUNC(void, PMDR_CODE) PokePMDR_b_StrtCntrlStOn(VAR(boolean, AUTOMATIC)
    LePMDR_b_StrtCntrlStOn, VAR(boolean, AUTOMATIC) LePMDR_b_StrtCntrlStOnFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePMDR_b_StrtCntrlStOn' */
    /* Chart: '<S25>/PokePMDR_b_StrtCntrlStOnChrt' incorporates:
     *  SignalConversion generated from: '<S25>/LePMDR_b_StrtCntrlStOnFA'
     *  SignalConversion generated from: '<S25>/LePMDR_b_StrtCntrlStOn'
     */
    /* Gateway: PokePMDR_b_StrtCntrlStOn/PokePMDR_b_StrtCntrlStOnChrt */
    /* During: PokePMDR_b_StrtCntrlStOn/PokePMDR_b_StrtCntrlStOnChrt */
    /* Entry Internal: PokePMDR_b_StrtCntrlStOn/PokePMDR_b_StrtCntrlStOnChrt */
    /* Transition: '<S678>:2' */
    if (!LePMDR_b_StrtCntrlStOnFA)
    {
        /* Transition: '<S678>:3' */
        /* Transition: '<S678>:15' */
        PMDR_ac_B.LePMDR_b_StrtCntrlStOn_out = LePMDR_b_StrtCntrlStOn;

        /* Transition: '<S678>:18' */
    }
    else
    {
        /* Transition: '<S678>:4' */
    }

    /* End of Chart: '<S25>/PokePMDR_b_StrtCntrlStOnChrt' */

    /* Merge: '<Root>/Merge_22' incorporates:
     *  SignalConversion generated from: '<S25>/VePMDR_b_StrtCntrlStOn_write'
     * */
    Rte_IrvWrite_PokePMDR_b_StrtCntrlStOn_VePMDR_b_StrtCntrlStOn_ECM_write_IRV
        (PMDR_ac_B.LePMDR_b_StrtCntrlStOn_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMDR_b_StrtCntrlStOn' */
}

/* Output function */
FUNC(void, PMDR_CODE) PokePMDR_e_KeyInIgn(VAR(sint16, AUTOMATIC)
    LePMDR_e_KeyInIgn, VAR(boolean, AUTOMATIC) LePMDR_b_KeyInIgnFA)
{
    boolean rtb_LePMDR_b_KeyInIgnFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMDR_e_KeyInIgn' */
    /* Chart: '<S26>/PokePMDR_e_KeyInIgnChrt' incorporates:
     *  Constant: '<S679>/Calib'
     *  SignalConversion generated from: '<S26>/LePMDR_b_KeyInIgnFA'
     *  SignalConversion generated from: '<S26>/LePMDR_e_KeyInIgn'
     */
    /* Gateway: PokePMDR_e_KeyInIgn/PokePMDR_e_KeyInIgnChrt */
    /* During: PokePMDR_e_KeyInIgn/PokePMDR_e_KeyInIgnChrt */
    /* Entry Internal: PokePMDR_e_KeyInIgn/PokePMDR_e_KeyInIgnChrt */
    /* Transition: '<S680>:2' */
    if (!LePMDR_b_KeyInIgnFA)
    {
        /* Transition: '<S680>:3' */
        /* Transition: '<S680>:15' */
        PMDR_ac_B.LePMDR_e_KeyInIgn_out = KaPMDR_e_KeyInIgn_Map
            [(LePMDR_e_KeyInIgn)];
        rtb_LePMDR_b_KeyInIgnFA_out = false;

        /* Transition: '<S680>:18' */
    }
    else
    {
        /* Transition: '<S680>:4' */
        rtb_LePMDR_b_KeyInIgnFA_out = true;
    }

    /* End of Chart: '<S26>/PokePMDR_e_KeyInIgnChrt' */

    /* Outport: '<Root>/VePMDR_b_KeyInIgnFA' incorporates:
     *  SignalConversion generated from: '<S26>/VePMDR_b_KeyInIgnFA'
     */
    (void)Rte_Write_VePMDR_b_KeyInIgnFA_Value(rtb_LePMDR_b_KeyInIgnFA_out);

    /* Outport: '<Root>/VePMDR_e_KeyInIgn' incorporates:
     *  SignalConversion generated from: '<S26>/VePMDR_e_KeyInIgn'
     */
    (void)Rte_Write_VePMDR_e_KeyInIgn_Value(PMDR_ac_B.LePMDR_e_KeyInIgn_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMDR_e_KeyInIgn' */
}

/* Output function */
FUNC(void, PMDR_CODE) PokePMDR_e_OperationalModeSts(VAR(sint16, AUTOMATIC)
    LePMDR_e_OperationalModeSts, VAR(boolean, AUTOMATIC)
    LePMDR_b_OperationalModeStsFA)
{
    boolean rtb_LePMDR_b_OperationalModeStsFA_out_l;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMDR_e_OperationalModeSts' */
    /* Chart: '<S27>/PokePMDR_e_OperationalModeStsChrt' incorporates:
     *  Constant: '<S681>/Calib'
     *  SignalConversion generated from: '<S27>/LePMDR_b_OperationalModeStsFA'
     *  SignalConversion generated from: '<S27>/LePMDR_e_OperationalModeSts'
     */
    /* Gateway: PokePMDR_e_OperationalModeSts/PokePMDR_e_OperationalModeStsChrt */
    /* During: PokePMDR_e_OperationalModeSts/PokePMDR_e_OperationalModeStsChrt */
    /* Entry Internal: PokePMDR_e_OperationalModeSts/PokePMDR_e_OperationalModeStsChrt */
    /* Transition: '<S682>:2' */
    if (!LePMDR_b_OperationalModeStsFA)
    {
        /* Transition: '<S682>:3' */
        /* Transition: '<S682>:15' */
        PMDR_ac_B.LePMDR_e_OperationalModeSts_out =
            KaPMDR_e_OperationalModeSts_Map[(LePMDR_e_OperationalModeSts)];
        rtb_LePMDR_b_OperationalModeStsFA_out_l = false;

        /* Transition: '<S682>:18' */
    }
    else
    {
        /* Transition: '<S682>:4' */
        rtb_LePMDR_b_OperationalModeStsFA_out_l = true;
    }

    /* End of Chart: '<S27>/PokePMDR_e_OperationalModeStsChrt' */

    /* Outport: '<Root>/VePMDR_b_OperationalModeStsFA' incorporates:
     *  SignalConversion generated from: '<S27>/VePMDR_b_OperationalModeStsFA'
     */
    (void)Rte_Write_VePMDR_b_OperationalModeStsFA_Value
        (rtb_LePMDR_b_OperationalModeStsFA_out_l);

    /* Outport: '<Root>/VePMDR_e_OperationalModeSts' incorporates:
     *  SignalConversion generated from: '<S27>/VePMDR_e_OperationalModeSts'
     */
    (void)Rte_Write_VePMDR_e_OperationalModeSts_Value
        (PMDR_ac_B.LePMDR_e_OperationalModeSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMDR_e_OperationalModeSts' */
}

/* Output function */
FUNC(void, PMDR_CODE) PokePMDR_e_PowerModeRaw(VAR(sint16, AUTOMATIC)
    LePMDR_e_PowerModeRaw, VAR(boolean, AUTOMATIC) LePMDR_b_PowerModeRawFA)
{
    boolean rtb_LePMDR_b_PowerModeRawFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMDR_e_PowerModeRaw' */
    /* Chart: '<S28>/PokePMDR_e_PowerModeRawChrt' incorporates:
     *  Constant: '<S683>/Calib'
     *  SignalConversion generated from: '<S28>/LePMDR_b_PowerModeRawFA'
     *  SignalConversion generated from: '<S28>/LePMDR_e_PowerModeRaw'
     */
    /* Gateway: PokePMDR_e_PowerModeRaw/PokePMDR_e_PowerModeRawChrt */
    /* During: PokePMDR_e_PowerModeRaw/PokePMDR_e_PowerModeRawChrt */
    /* Entry Internal: PokePMDR_e_PowerModeRaw/PokePMDR_e_PowerModeRawChrt */
    /* Transition: '<S684>:2' */
    if (!LePMDR_b_PowerModeRawFA)
    {
        /* Transition: '<S684>:3' */
        /* Transition: '<S684>:15' */
        PMDR_ac_B.LePMDR_e_PowerModeRaw_out = KaPMDR_e_PowerModeRaw_Map
            [(LePMDR_e_PowerModeRaw)];
        rtb_LePMDR_b_PowerModeRawFA_out = false;

        /* Transition: '<S684>:18' */
    }
    else
    {
        /* Transition: '<S684>:4' */
        rtb_LePMDR_b_PowerModeRawFA_out = true;
    }

    /* End of Chart: '<S28>/PokePMDR_e_PowerModeRawChrt' */

    /* Merge: '<Root>/Merge_37' incorporates:
     *  SignalConversion generated from: '<S28>/VePMDR_b_PowerModeRawFA_write'
     * */
    Rte_IrvWrite_PokePMDR_e_PowerModeRaw_VePMDR_b_PowerModeRawFA_write_IRV
        (rtb_LePMDR_b_PowerModeRawFA_out);

    /* Merge: '<Root>/Merge_34' incorporates:
     *  SignalConversion generated from: '<S28>/VePMDR_e_PowerModeRaw_write'
     * */
    Rte_IrvWrite_PokePMDR_e_PowerModeRaw_VePMDR_e_PowerModeRaw_write_IRV
        (PMDR_ac_B.LePMDR_e_PowerModeRaw_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMDR_e_PowerModeRaw' */
}

/* Output function */
FUNC(void, PMDR_CODE) PokePMDR_e_Tonale_PowerModeRaw(VAR(sint16, AUTOMATIC)
    LePMDR_e_PowerModeRaw, VAR(boolean, AUTOMATIC) LePMDR_b_PowerModeRawFA)
{
    boolean rtb_LePMDR_b_Tonale_PowerModeRawFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePMDR_e_Tonale_PowerModeRaw' */
    /* Chart: '<S29>/PokePMDR_e_Tonale_PowerModeRawChrt' incorporates:
     *  Constant: '<S685>/Calib'
     *  SignalConversion generated from: '<S29>/LePMDR_b_PowerModeRawFA'
     *  SignalConversion generated from: '<S29>/LePMDR_e_PowerModeRaw'
     */
    /* Gateway: PokePMDR_e_Tonale_PowerModeRaw/PokePMDR_e_Tonale_PowerModeRawChrt */
    /* During: PokePMDR_e_Tonale_PowerModeRaw/PokePMDR_e_Tonale_PowerModeRawChrt */
    /* Entry Internal: PokePMDR_e_Tonale_PowerModeRaw/PokePMDR_e_Tonale_PowerModeRawChrt */
    /* Transition: '<S686>:2' */
    if (!LePMDR_b_PowerModeRawFA)
    {
        /* Transition: '<S686>:3' */
        /* Transition: '<S686>:15' */
        PMDR_ac_B.LePMDR_e_Tonale_PowerModeRaw_out = KaPMDR_e_PowerModeRaw_Map
            [(LePMDR_e_PowerModeRaw)];
        rtb_LePMDR_b_Tonale_PowerModeRawFA_out = false;

        /* Transition: '<S686>:18' */
    }
    else
    {
        /* Transition: '<S686>:4' */
        rtb_LePMDR_b_Tonale_PowerModeRawFA_out = true;
    }

    /* End of Chart: '<S29>/PokePMDR_e_Tonale_PowerModeRawChrt' */

    /* Merge: '<Root>/Merge_30' incorporates:
     *  SignalConversion generated from: '<S29>/VePMDR_b_Tonale_PowerModeRawFA_write'
     * */
    Rte_IrvWrite_PokePMDR_e_Tonale_PowerModeRaw_VePMDR_b_Tonale_PowerModeRawFA_write_IRV
        (rtb_LePMDR_b_Tonale_PowerModeRawFA_out);

    /* Merge: '<Root>/Merge_21' incorporates:
     *  SignalConversion generated from: '<S29>/VePMDR_e_Tonale_PowerModeRaw_write'
     * */
    Rte_IrvWrite_PokePMDR_e_Tonale_PowerModeRaw_VePMDR_e_Tonale_PowerModeRaw_write_IRV
        (PMDR_ac_B.LePMDR_e_Tonale_PowerModeRaw_out);

    /* End of Outputs for SubSystem: '<Root>/PokePMDR_e_Tonale_PowerModeRaw' */
}

/* Output function */
FUNC(void, PMDR_CODE) PMDR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/PMDR_PwrOff'
     */
    /* Outport: '<Root>/NePMDD_Cnt_RunCrankOpenMaxFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S13>/NePMDD_Cnt_RunCrankOpenMaxFOP'
     */
    (void)Rte_Write_NePMDD_Cnt_RunCrankOpenMaxFOP_NePMDD_Cnt_RunCrankOpenMaxFOP
        (PMDR_ac_DW.NePMDD_Cnt_RunCrankOpenMaxFOP);

    /* Outport: '<Root>/NePMDD_Cnt_RunCrankHiMaxFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S13>/NePMDD_Cnt_RunCrankHiMaxFOP'
     */
    (void)Rte_Write_NePMDD_Cnt_RunCrankHiMaxFOP_NePMDD_Cnt_RunCrankHiMaxFOP
        (PMDR_ac_DW.NePMDD_Cnt_RunCrankHiMaxFOP);

    /* Outport: '<Root>/NePMDD_Cnt_AccLoMaxFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S13>/NePMDD_Cnt_AccLoMaxFOP'
     */
    (void)Rte_Write_NePMDD_Cnt_AccLoMaxFOP_NePMDD_Cnt_AccLoMaxFOP
        (PMDR_ac_DW.NePMDD_Cnt_AccLoMaxFOP);

    /* Outport: '<Root>/NePMDD_Cnt_AccHiMaxFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S13>/NePMDD_Cnt_AccHiMaxFOP'
     */
    (void)Rte_Write_NePMDD_Cnt_AccHiMaxFOP_NePMDD_Cnt_AccHiMaxFOP
        (PMDR_ac_DW.NePMDD_Cnt_AccHiMaxFOP);

    /* Outport: '<Root>/NePMDD_Cnt_RunLoMaxFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S13>/NePMDD_Cnt_RunLoMaxFOP'
     */
    (void)Rte_Write_NePMDD_Cnt_RunLoMaxFOP_NePMDD_Cnt_RunLoMaxFOP
        (PMDR_ac_DW.NePMDD_Cnt_RunLoMaxFOP);

    /* Outport: '<Root>/NePMDD_Cnt_RunHiMaxFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S13>/NePMDD_Cnt_RunHiMaxFOP'
     */
    (void)Rte_Write_NePMDD_Cnt_RunHiMaxFOP_NePMDD_Cnt_RunHiMaxFOP
        (PMDR_ac_DW.NePMDD_Cnt_RunHiMaxFOP);

    /* Outport: '<Root>/NePMDR_Cnt_BF1SysVoltHi_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S13>/NePMDR_Cnt_BF1SysVoltHi_MFOP'
     */
    (void)Rte_Write_NePMDR_Cnt_BF1SysVoltHi_MFOP_NePMDR_Cnt_BF1SysVoltHi_MFOP
        (PMDR_ac_DW.NePMDR_Cnt_BF1SysVoltHi_MFOP);

    /* Outport: '<Root>/NePMDR_Cnt_BF1SysVoltLow_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S13>/NePMDR_Cnt_BF1SysVoltLow_MFOP'
     */
    (void)Rte_Write_NePMDR_Cnt_BF1SysVoltLow_MFOP_NePMDR_Cnt_BF1SysVoltLow_MFOP
        (PMDR_ac_DW.NePMDR_Cnt_BF1SysVoltLow_MFOP);

    /* Outport: '<Root>/NePMDR_Cnt_BF2SysVoltHi_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S13>/NePMDR_Cnt_BF2SysVoltHi_MFOP'
     */
    (void)Rte_Write_NePMDR_Cnt_BF2SysVoltHi_MFOP_NePMDR_Cnt_BF2SysVoltHi_MFOP
        (PMDR_ac_DW.NePMDR_Cnt_BF2SysVoltHi_MFOP);

    /* Outport: '<Root>/NePMDR_Cnt_BF2SysVoltLow_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S13>/NePMDR_Cnt_BF2SysVoltLow_MFOP'
     */
    (void)Rte_Write_NePMDR_Cnt_BF2SysVoltLow_MFOP_NePMDR_Cnt_BF2SysVoltLow_MFOP
        (PMDR_ac_DW.NePMDR_Cnt_BF2SysVoltLow_MFOP);

    /* Outport: '<Root>/NePMDR_Cnt_BF3SysVoltHi_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S13>/NePMDR_Cnt_BF3SysVoltHi_MFOP'
     */
    (void)Rte_Write_NePMDR_Cnt_BF3SysVoltHi_MFOP_NePMDR_Cnt_BF3SysVoltHi_MFOP
        (PMDR_ac_DW.NePMDR_Cnt_BF3SysVoltHi_MFOP);

    /* Outport: '<Root>/NePMDR_Cnt_BF3SysVoltLow_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S13>/NePMDR_Cnt_BF3SysVoltLow_MFOP'
     */
    (void)Rte_Write_NePMDR_Cnt_BF3SysVoltLow_MFOP_NePMDR_Cnt_BF3SysVoltLow_MFOP
        (PMDR_ac_DW.NePMDR_Cnt_BF3SysVoltLow_MFOP);

    /* Outport: '<Root>/NePMDR_Cnt_BFHBSpareSysVoltHi_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S13>/NePMDR_Cnt_BFHBSpareSysVoltHi_MFOP'
     */
    (void)
        Rte_Write_NePMDR_Cnt_BFHBSpareSysVoltHi_MFOP_NePMDR_Cnt_BFHBSpareSysVoltHi_MFOP
        (PMDR_ac_DW.NePMDR_Cnt_BFHBSpareSysVoltHi_MFOP);

    /* Outport: '<Root>/NePMDR_Cnt_BFHBSysVoltHi_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S13>/NePMDR_Cnt_BFHBSysVoltHi_MFOP'
     */
    (void)Rte_Write_NePMDR_Cnt_BFHBSysVoltHi_MFOP_NePMDR_Cnt_BFHBSysVoltHi_MFOP
        (PMDR_ac_DW.NePMDR_Cnt_BFHBSysVoltHi_MFOP);

    /* Outport: '<Root>/NePMDR_Cnt_HBSpareSysVoltLow_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S13>/NePMDR_Cnt_HBSpareSysVoltLow_MFOP'
     */
    (void)
        Rte_Write_NePMDR_Cnt_HBSpareSysVoltLow_MFOP_NePMDR_Cnt_HBSpareSysVoltLow_MFOP
        (PMDR_ac_DW.NePMDR_Cnt_HBSpareSysVoltLow_MFOP);

    /* Outport: '<Root>/NePMDR_Cnt_HBSysVoltLow_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S13>/NePMDR_Cnt_HBSysVoltLow_MFOP'
     */
    (void)Rte_Write_NePMDR_Cnt_HBSysVoltLow_MFOP_NePMDR_Cnt_HBSysVoltLow_MFOP
        (PMDR_ac_DW.NePMDR_Cnt_HBSysVoltLow_MFOP);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, PMDR_CODE) PMDR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/PMDR_PwrOn'
     */
    /* S-Function (fcgen): '<S14>/FcnCallGen' incorporates:
     *  SubSystem: '<S14>/DSM_Init'
     */
    /* DataStoreWrite: '<S628>/NePMDR_Cnt_HBSysVoltLow_MFOP' incorporates:
     *  Inport: '<Root>/NePMDR_Cnt_HBSysVoltLow_MFOP_PM_In'
     */
    (void)Rte_Read_NePMDR_Cnt_HBSysVoltLow_MFOP_Rx_NePMDR_Cnt_HBSysVoltLow_MFOP(
        &PMDR_ac_DW.NePMDR_Cnt_HBSysVoltLow_MFOP);

    /* DataStoreWrite: '<S628>/NePMDR_Cnt_HBSpareSysVoltLow_MFOP' incorporates:
     *  Inport: '<Root>/NePMDR_Cnt_HBSpareSysVoltLow_MFOP_PM_In'
     */
    (void)
        Rte_Read_NePMDR_Cnt_HBSpareSysVoltLow_MFOP_Rx_NePMDR_Cnt_HBSpareSysVoltLow_MFOP
        (&PMDR_ac_DW.NePMDR_Cnt_HBSpareSysVoltLow_MFOP);

    /* DataStoreWrite: '<S628>/NePMDR_Cnt_BFHBSysVoltHi_MFOP' incorporates:
     *  Inport: '<Root>/NePMDR_Cnt_BFHBSysVoltHi_MFOP_PM_In'
     */
    (void)
        Rte_Read_NePMDR_Cnt_BFHBSysVoltHi_MFOP_Rx_NePMDR_Cnt_BFHBSysVoltHi_MFOP(
        &PMDR_ac_DW.NePMDR_Cnt_BFHBSysVoltHi_MFOP);

    /* DataStoreWrite: '<S628>/NePMDR_Cnt_BFHBSpareSysVoltHi_MFOP' incorporates:
     *  Inport: '<Root>/NePMDR_Cnt_BFHBSpareSysVoltHi_MFOP_PM_In'
     */
    (void)
        Rte_Read_NePMDR_Cnt_BFHBSpareSysVoltHi_MFOP_Rx_NePMDR_Cnt_BFHBSpareSysVoltHi_MFOP
        (&PMDR_ac_DW.NePMDR_Cnt_BFHBSpareSysVoltHi_MFOP);

    /* DataStoreWrite: '<S628>/NePMDR_Cnt_BF3SysVoltLow_MFOP' incorporates:
     *  Inport: '<Root>/NePMDR_Cnt_BF3SysVoltLow_MFOP_PM_In'
     */
    (void)
        Rte_Read_NePMDR_Cnt_BF3SysVoltLow_MFOP_Rx_NePMDR_Cnt_BF3SysVoltLow_MFOP(
        &PMDR_ac_DW.NePMDR_Cnt_BF3SysVoltLow_MFOP);

    /* DataStoreWrite: '<S628>/NePMDR_Cnt_BF3SysVoltHi_MFOP' incorporates:
     *  Inport: '<Root>/NePMDR_Cnt_BF3SysVoltHi_MFOP_PM_In'
     */
    (void)Rte_Read_NePMDR_Cnt_BF3SysVoltHi_MFOP_Rx_NePMDR_Cnt_BF3SysVoltHi_MFOP(
        &PMDR_ac_DW.NePMDR_Cnt_BF3SysVoltHi_MFOP);

    /* DataStoreWrite: '<S628>/NePMDR_Cnt_BF2SysVoltLow_MFOP' incorporates:
     *  Inport: '<Root>/NePMDR_Cnt_BF2SysVoltLow_MFOP_PM_In'
     */
    (void)
        Rte_Read_NePMDR_Cnt_BF2SysVoltLow_MFOP_Rx_NePMDR_Cnt_BF2SysVoltLow_MFOP(
        &PMDR_ac_DW.NePMDR_Cnt_BF2SysVoltLow_MFOP);

    /* DataStoreWrite: '<S628>/NePMDR_Cnt_BF2SysVoltHi_MFOP' incorporates:
     *  Inport: '<Root>/NePMDR_Cnt_BF2SysVoltHi_MFOP_PM_In'
     */
    (void)Rte_Read_NePMDR_Cnt_BF2SysVoltHi_MFOP_Rx_NePMDR_Cnt_BF2SysVoltHi_MFOP(
        &PMDR_ac_DW.NePMDR_Cnt_BF2SysVoltHi_MFOP);

    /* DataStoreWrite: '<S628>/NePMDR_Cnt_BF1SysVoltLow_MFOP' incorporates:
     *  Inport: '<Root>/NePMDR_Cnt_BF1SysVoltLow_MFOP_PM_In'
     */
    (void)
        Rte_Read_NePMDR_Cnt_BF1SysVoltLow_MFOP_Rx_NePMDR_Cnt_BF1SysVoltLow_MFOP(
        &PMDR_ac_DW.NePMDR_Cnt_BF1SysVoltLow_MFOP);

    /* DataStoreWrite: '<S628>/NePMDR_Cnt_BF1SysVoltHi_MFOP' incorporates:
     *  Inport: '<Root>/NePMDR_Cnt_BF1SysVoltHi_MFOP_PM_In'
     */
    (void)Rte_Read_NePMDR_Cnt_BF1SysVoltHi_MFOP_Rx_NePMDR_Cnt_BF1SysVoltHi_MFOP(
        &PMDR_ac_DW.NePMDR_Cnt_BF1SysVoltHi_MFOP);

    /* DataStoreWrite: '<S628>/NePMDD_Cnt_RunHiMaxFOP' incorporates:
     *  Inport: '<Root>/NePMDD_Cnt_RunHiMaxFOP_PM_In'
     */
    (void)Rte_Read_NePMDD_Cnt_RunHiMaxFOP_Rx_NePMDD_Cnt_RunHiMaxFOP
        (&PMDR_ac_DW.NePMDD_Cnt_RunHiMaxFOP);

    /* DataStoreWrite: '<S628>/NePMDD_Cnt_RunLoMaxFOP' incorporates:
     *  Inport: '<Root>/NePMDD_Cnt_RunLoMaxFOP_PM_In'
     */
    (void)Rte_Read_NePMDD_Cnt_RunLoMaxFOP_Rx_NePMDD_Cnt_RunLoMaxFOP
        (&PMDR_ac_DW.NePMDD_Cnt_RunLoMaxFOP);

    /* DataStoreWrite: '<S628>/NePMDD_Cnt_AccHiMaxFOP' incorporates:
     *  Inport: '<Root>/NePMDD_Cnt_AccHiMaxFOP_PM_In'
     */
    (void)Rte_Read_NePMDD_Cnt_AccHiMaxFOP_Rx_NePMDD_Cnt_AccHiMaxFOP
        (&PMDR_ac_DW.NePMDD_Cnt_AccHiMaxFOP);

    /* DataStoreWrite: '<S628>/NePMDD_Cnt_AccLoMaxFOP' incorporates:
     *  Inport: '<Root>/NePMDD_Cnt_AccLoMaxFOP_PM_In'
     */
    (void)Rte_Read_NePMDD_Cnt_AccLoMaxFOP_Rx_NePMDD_Cnt_AccLoMaxFOP
        (&PMDR_ac_DW.NePMDD_Cnt_AccLoMaxFOP);

    /* DataStoreWrite: '<S628>/NePMDD_Cnt_RunCrankHiMaxFOP' incorporates:
     *  Inport: '<Root>/NePMDD_Cnt_RunCrankHiMaxFOP_PM_In'
     */
    (void)Rte_Read_NePMDD_Cnt_RunCrankHiMaxFOP_Rx_NePMDD_Cnt_RunCrankHiMaxFOP
        (&PMDR_ac_DW.NePMDD_Cnt_RunCrankHiMaxFOP);

    /* DataStoreWrite: '<S628>/NePMDD_Cnt_RunCrankOpenMaxFOP' incorporates:
     *  Inport: '<Root>/NePMDD_Cnt_RunCrankOpenMaxFOP_PM_In'
     */
    (void)
        Rte_Read_NePMDD_Cnt_RunCrankOpenMaxFOP_Rx_NePMDD_Cnt_RunCrankOpenMaxFOP(
        &PMDR_ac_DW.NePMDD_Cnt_RunCrankOpenMaxFOP);

    /* S-Function (fcgen): '<S14>/FcnCallGen' incorporates:
     *  SubSystem: '<S14>/InitPMDIOutput'
     */
    /* SignalConversion generated from: '<S629>/VePMDR_e_PowerModeRaw' incorporates:
     *  Constant: '<S656>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_e_PowerModeRaw = KePMDR_e_PowerModeRaw;

    /* SignalConversion generated from: '<S629>/VePMDI_b_PMM_PowerModeRawFA' incorporates:
     *  Constant: '<S650>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDI_b_PMM_PowerModeRa = KePMDR_b_PowerModeRawFA;

    /* SignalConversion generated from: '<S629>/VePMDR_e_Tonale_PowerModeRaw' incorporates:
     *  Constant: '<S657>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_e_Tonale_PowerMod =
        KePMDR_e_Tonale_PowerModeRaw;

    /* SignalConversion generated from: '<S629>/VePMDR_b_Tonale_PowerModeRawFA' incorporates:
     *  Constant: '<S653>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_b_Tonale_PowerMod =
        KePMDR_b_Tonale_PowerModeRawFA;

    /* SignalConversion generated from: '<S629>/VePMDI_U_IgnRunCrnk' incorporates:
     *  Constant: '<S636>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDI_U_IgnRunCrnk = KePMDR_U_IgnRunCrnk;

    /* SignalConversion generated from: '<S629>/VePMDI_b_IgnRunCrnk' incorporates:
     *  Constant: '<S645>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDI_b_IgnRunCrnk = KePMDR_b_IgnRunCrnk_Digi;

    /* SignalConversion generated from: '<S629>/VePMDR_b_StrtCntrlStOn_ECM' incorporates:
     *  Constant: '<S652>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_b_StrtCntrlStOn_E = KePMDR_b_StrtCntrlStOn;

    /* SignalConversion generated from: '<S629>/VePMDR_b_BCMWakeUp' incorporates:
     *  Constant: '<S638>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_b_BCMWakeUp = KePMDR_b_BCMWakeUp;

    /* SignalConversion generated from: '<S629>/VePMDR_b_BCMWakeUpFA' */
    PMDR_ac_B.OutportBufferForVePMDR_b_BCMWakeUpFA = true;

    /* SignalConversion generated from: '<S629>/VePMDR_b_OBCMWup' incorporates:
     *  Constant: '<S647>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_b_OBCMWup = KePMDR_b_OBCMWUp;

    /* SignalConversion generated from: '<S629>/VePMDR_b_OBCMWupFA' */
    PMDR_ac_B.OutportBufferForVePMDR_b_OBCMWupFA = true;

    /* SignalConversion generated from: '<S629>/VePMDR_b_PTRunAbrt' incorporates:
     *  Constant: '<S649>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_b_PTRunAbrt = KePMDR_b_PTRunAbrt;

    /* SignalConversion generated from: '<S629>/VePMDR_b_CrankAborted' incorporates:
     *  Constant: '<S639>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_b_CrankAborted = KePMDR_b_CrankAborted;

    /* SignalConversion generated from: '<S629>/VePMDI_b_EStop' incorporates:
     *  Constant: '<S640>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDI_b_EStop = KePMDR_b_EStop;

    /* SignalConversion generated from: '<S629>/VePMDI_e_KeyInIgn' incorporates:
     *  Constant: '<S654>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDI_e_KeyInIgn = KePMDR_e_KeyInIgn;

    /* SignalConversion generated from: '<S629>/VePMDI_b_KeyInIgnFA' incorporates:
     *  Constant: '<S646>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDI_b_KeyInIgnFA = KePMDR_b_KeyInIgnFA;

    /* SignalConversion generated from: '<S629>/VePMDR_b_RunCrnkActvECM' incorporates:
     *  Constant: '<S651>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_b_RunCrnkActvECM = KePMDR_b_RunCrnkActvECM;

    /* SignalConversion generated from: '<S629>/VePMDI_b_RunCrnkActvECM_FA' */
    PMDR_ac_B.OutportBufferForVePMDI_b_RunCrnkActvECM_ = true;

    /* SignalConversion generated from: '<S629>/VePMDR_U_HB_SysVolt' incorporates:
     *  Constant: '<S635>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_U_HB_SysVolt = KePMDR_U_HB_SysVolt;

    /* SignalConversion generated from: '<S629>/VePMDR_U_BF1_SysVolt' incorporates:
     *  Constant: '<S631>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_U_BF1_SysVolt = KePMDR_U_BF1_SysVolt;

    /* SignalConversion generated from: '<S629>/VePMDR_U_BF2_SysVolt' incorporates:
     *  Constant: '<S632>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_U_BF2_SysVolt = KePMDR_U_BF2_SysVolt;

    /* SignalConversion generated from: '<S629>/VePMDR_U_HBSpare_SysVolt' incorporates:
     *  Constant: '<S634>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_U_HBSpare_SysVolt =
        KePMDR_U_HBSpare_SysVolt;

    /* SignalConversion generated from: '<S629>/VePMDR_U_BF3_SysVolt' incorporates:
     *  Constant: '<S633>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_U_BF3_SysVolt = KePMDR_U_BF3_SysVolt;

    /* SignalConversion generated from: '<S629>/VePMDR_b_PAD_Actv_Init' incorporates:
     *  Constant: '<S648>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_b_PAD_Actv_Init = KePMDR_b_PAD_Actv_Init;

    /* SignalConversion generated from: '<S629>/VePMDR_b_PAD_FA_Init' */
    PMDR_ac_B.OutportBufferForVePMDR_b_PAD_FA_Init = false;

    /* SignalConversion generated from: '<S629>/VePMDR_b_EngOffReq_C_Init' incorporates:
     *  Constant: '<S642>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_b_EngOffReq_C_Ini =
        KePMDR_b_EngOffReq_C_Init;

    /* SignalConversion generated from: '<S629>/VePMDR_b_EngOffReq_C_FA_Init' incorporates:
     *  Constant: '<S644>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_b_EngOffReq_C_FA_ =
        KePMDR_b_EngOffRq_C_FA_Init;

    /* SignalConversion generated from: '<S629>/VePMDR_b_EngOffReq_C2_Init' incorporates:
     *  Constant: '<S641>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_b_EngOffReq_C2_In =
        KePMDR_b_EngOffReq_C2_Init;

    /* SignalConversion generated from: '<S629>/VePMDR_b_EngOffReq_C2_FA_Init' incorporates:
     *  Constant: '<S643>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_b_EngOffReq_C2_FA =
        KePMDR_b_EngOffRq_C2_FA_Init;

    /* SignalConversion generated from: '<S629>/VePMDR_b_OperationalModeSts_Init' incorporates:
     *  Constant: '<S655>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_b_OperationalMo_c =
        KePMDR_e_OperationalModeSts_Init;

    /* SignalConversion generated from: '<S629>/VePMDR_b_OperationalModeSts_FA_Init' */
    PMDR_ac_B.OutportBufferForVePMDR_b_OperationalMode = false;

    /* SignalConversion generated from: '<S629>/KePMDR_U_MainRelay_SysVolt_Init' incorporates:
     *  Constant: '<S637>/Calib'
     */
    PMDR_ac_B.OutportBufferForKePMDR_U_MainRelay_SysVo =
        KePMDR_U_MainRelay_SysVolt;

    /* S-Function (fcgen): '<S14>/FcnCallGen' incorporates:
     *  SubSystem: '<S14>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S630>/VePMDR_b_RunCrankActiveAnalog_Out_Init' */
    PMDR_ac_B.OutportBufferForVePMDR_b_RunCrankActiveA = false;

    /* SignalConversion generated from: '<S630>/VePMDR_e_PMM_PowerMode_Out_Init' incorporates:
     *  Constant: '<S630>/Const2'
     */
    PMDR_ac_B.OutportBufferForVePMDR_e_PMM_PowerMode_O = PMDR_ac_ConstB.Const2;

    /* SignalConversion generated from: '<S630>/VePMDR_t_RunCrankActive_Out_Init' */
    PMDR_ac_B.OutportBufferForVePMDR_t_RunCrankActive_ = 0.0F;

    /* SignalConversion generated from: '<S630>/VePMDR_b_RunCrankActive_Out_Init' */
    PMDR_ac_B.OutportBufferForVePMDR_b_RunCrankActive_ = false;

    /* SignalConversion generated from: '<S630>/VePMDR_b_SysVoltLowFA_Out_Init' */
    PMDR_ac_B.OutportBufferForVePMDR_b_SysVoltLowFA_Ou = false;

    /* SignalConversion generated from: '<S630>/VePMDR_b_SysVoltHighFA_Out_Init' */
    PMDR_ac_B.OutportBufferForVePMDR_b_SysVoltHighFA_O = false;

    /* SignalConversion generated from: '<S630>/VePMDR_b_StrtCntrlStOn_Out_Init' */
    PMDR_ac_B.OutportBufferForVePMDR_b_StrtCntrlStOn_O = false;

    /* SignalConversion generated from: '<S630>/VePMDR_b_PMM_PowerModeFA_Out_Init' */
    PMDR_ac_B.OutportBufferForVePMDR_b_PMM_PowerModeFA = false;

    /* SignalConversion generated from: '<S630>/VePMDR_e_IgnInputsPowerMode_Out_Init' incorporates:
     *  Constant: '<S630>/Const9'
     */
    PMDR_ac_B.OutportBufferForVePMDR_e_IgnInputsPowerM = PMDR_ac_ConstB.Const9;

    /* SignalConversion generated from: '<S630>/VePMDR_b_AccRunActiveAnalog_Out_Init' */
    PMDR_ac_B.OutportBufferForVePMDR_b_AccRunActiveAna = false;

    /* SignalConversion generated from: '<S630>/VePMDR_b_HB_SysVoltFA_Out_Init' */
    PMDR_ac_B.OutportBufferForVePMDR_b_HB_SysVoltFA_Ou = false;

    /* SignalConversion generated from: '<S630>/VePMDR_e_KeyStatus_Out_Init' incorporates:
     *  Constant: '<S630>/Const12'
     */
    PMDR_ac_B.OutportBufferForVePMDR_e_KeyStatus_Out_I = PMDR_ac_ConstB.Const12;

    /* SignalConversion generated from: '<S630>/VePMDR_e_PowerModeRaw_Out_Init' incorporates:
     *  Constant: '<S630>/Const13'
     */
    PMDR_ac_B.OutportBufferForVePMDR_e_PowerModeRaw_Ou = PMDR_ac_ConstB.Const13;

    /* SignalConversion generated from: '<S630>/VePMDR_b_PowerModeRawFA_Out_Init' */
    PMDR_ac_B.OutportBufferForVePMDR_b_PowerModeRawFA_ = false;

    /* SignalConversion generated from: '<S630>/VePMDR_b_SysVoltLowFA_BF1_Out_Init' */
    PMDR_ac_B.OutportBufferForVePMDR_b_SysVoltLowFA_BF = false;

    /* SignalConversion generated from: '<S630>/VePMDR_b_SysVoltLowFA_BF2_Out_Init' */
    PMDR_ac_B.OutportBufferForVePMDR_b_SysVoltLowFA__j = false;

    /* SignalConversion generated from: '<S630>/VePMDR_b_SysVoltLowFA_HB_Out_Init' */
    PMDR_ac_B.OutportBufferForVePMDR_b_SysVoltLowFA_HB = false;

    /* SignalConversion generated from: '<S630>/VePMDR_b_SysVoltLowFA_HBSpare_Out_Init' */
    PMDR_ac_B.OutportBufferForVePMDR_b_SysVoltLowFA_j5 = false;

    /* SignalConversion generated from: '<S630>/VePMDR_b_SysVoltLowFA_BF3_Out_Init' */
    PMDR_ac_B.OutportBufferForVePMDR_b_SysVoltLowFA__k = false;

    /* SignalConversion generated from: '<S630>/VePMDR_b_EngineOffRequest_Out_Init' */
    PMDR_ac_B.OutportBufferForVePMDR_b_EngineOffReques = false;

    /* SignalConversion generated from: '<S630>/VePMDI_e_PowerModeRaw_write' incorporates:
     *  Constant: '<S658>/Constant'
     */
    PMDR_ac_B.OutportBufferForVePMDI_e_PowerModeRaw_wr = PMDR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S630>/VePMDR_b_PowerModeRawDigitalFA_write' */
    PMDR_ac_B.OutportBufferForVePMDR_b_PowerModeRawDig = false;

    /* SignalConversion generated from: '<S630>/VePMDR_b_AccRunActiveAnalog_write' */
    PMDR_ac_B.OutportBufferForVePMDR_b_AccRunActiveA_p = false;

    /* SignalConversion generated from: '<S630>/VePMDR_b_RunCrankActive_write' */
    PMDR_ac_B.OutportBufferForVePMDR_b_RunCrankActiv_f = false;

    /* SignalConversion generated from: '<S630>/VePMDR_b_RunCrankActiveAnalog_write' */
    PMDR_ac_B.OutportBufferForVePMDR_b_RunCrankActiv_g = false;

    /* SignalConversion generated from: '<S630>/VePMDR_e_PMM_PowerMode_write' incorporates:
     *  Constant: '<S659>/Constant'
     */
    PMDR_ac_B.OutportBufferForVePMDR_e_PMM_PowerMode_w =
        PMDR_ac_ConstB.Constant_b;

    /* SignalConversion generated from: '<S630>/VePMDR_b_PMM_PowerModeFA_write' */
    PMDR_ac_B.OutportBufferForVePMDR_b_PMM_PowerMode_h = false;

    /* SignalConversion generated from: '<S630>/VePMDR_e_FaultSts_SysVoltHi' incorporates:
     *  Constant: '<S660>/Constant'
     */
    PMDR_ac_B.OutportBufferForVePMDR_e_FaultSts_SysVol =
        PMDR_ac_ConstB.Constant_l;

    /* SignalConversion generated from: '<S630>/VePMDR_e_FaultSts_SysVoltLo' incorporates:
     *  Constant: '<S661>/Constant'
     */
    PMDR_ac_B.OutportBufferForVePMDR_e_FaultSts_SysV_l =
        PMDR_ac_ConstB.Constant_b0;

    /* SignalConversion generated from: '<S630>/VePMDR_e_FaultSts_IgnSwAccPstnCktHi' incorporates:
     *  Constant: '<S662>/Constant'
     */
    PMDR_ac_B.OutportBufferForVePMDR_e_FaultSts_IgnSwA =
        PMDR_ac_ConstB.Constant_f;

    /* SignalConversion generated from: '<S630>/VePMDR_e_FaultSts_IgnSwAccPstnCktLo' incorporates:
     *  Constant: '<S663>/Constant'
     */
    PMDR_ac_B.OutportBufferForVePMDR_e_FaultSts_IgnS_i =
        PMDR_ac_ConstB.Constant_k;

    /* SignalConversion generated from: '<S630>/VePMDR_e_FaultSts_IgnSwRunCrnkPstnCktLo' incorporates:
     *  Constant: '<S664>/Constant'
     */
    PMDR_ac_B.OutportBufferForVePMDR_e_FaultSts_IgnSwR =
        PMDR_ac_ConstB.Constant_j;

    /* SignalConversion generated from: '<S630>/VePMDR_e_FaultSts_IgnSwRunCrnkPstnCktHi' incorporates:
     *  Constant: '<S665>/Constant'
     */
    PMDR_ac_B.OutportBufferForVePMDR_e_FaultSts_IgnS_b =
        PMDR_ac_ConstB.Constant_g;

    /* SignalConversion generated from: '<S630>/VePMDR_e_FaultSts_IgnSwRunPstnCktHi' incorporates:
     *  Constant: '<S666>/Constant'
     */
    PMDR_ac_B.OutportBufferForVePMDR_e_FaultSts_IgnS_k =
        PMDR_ac_ConstB.Constant_b4;

    /* SignalConversion generated from: '<S630>/VePMDR_e_FaultSts_IgnSwRunPstnCktLo' incorporates:
     *  Constant: '<S667>/Constant'
     */
    PMDR_ac_B.OutportBufferForVePMDR_e_FaultSts_IgnS_l =
        PMDR_ac_ConstB.Constant_js;

    /* End of Outputs for S-Function (fcgen): '<S14>/FcnCallGen' */

    /* Outport: '<Root>/VePMDR_U_MainRelay_SysVolt' incorporates:
     *  SignalConversion generated from: '<S14>/KePMDR_U_MainRelay_SysVolt_Init'
     */
    (void)Rte_Write_VePMDR_U_MainRelay_SysVolt_Value
        (PMDR_ac_B.OutportBufferForKePMDR_U_MainRelay_SysVo);

    /* Outport: '<Root>/VePMDR_e_FaultSts_IgnSwAccPstnCktHi' incorporates:
     *  SignalConversion generated from: '<S14>/R_VePMDR_e_FaultSts_IgnSwAccPstnCktHi'
     *  SignalConversion generated from: '<S630>/VePMDR_e_FaultSts_IgnSwAccPstnCktHi'
     */
    (void)Rte_Write_VePMDR_e_FaultSts_IgnSwAccPstnCktHi_Value
        (PMDR_ac_B.OutportBufferForVePMDR_e_FaultSts_IgnSwA);

    /* Outport: '<Root>/VePMDR_e_FaultSts_IgnSwAccPstnCktLo' incorporates:
     *  SignalConversion generated from: '<S14>/R_VePMDR_e_FaultSts_IgnSwAccPstnCktLo'
     *  SignalConversion generated from: '<S630>/VePMDR_e_FaultSts_IgnSwAccPstnCktLo'
     */
    (void)Rte_Write_VePMDR_e_FaultSts_IgnSwAccPstnCktLo_Value
        (PMDR_ac_B.OutportBufferForVePMDR_e_FaultSts_IgnS_i);

    /* Outport: '<Root>/VePMDR_e_FaultSts_IgnSwRunCrnkPstnCktHi' incorporates:
     *  SignalConversion generated from: '<S14>/R_VePMDR_e_FaultSts_IgnSwRunCrnkPstnCktHi'
     *  SignalConversion generated from: '<S630>/VePMDR_e_FaultSts_IgnSwRunCrnkPstnCktHi'
     */
    (void)Rte_Write_VePMDR_e_FaultSts_IgnSwRunCrnkPstnCktHi_Value
        (PMDR_ac_B.OutportBufferForVePMDR_e_FaultSts_IgnS_b);

    /* Outport: '<Root>/VePMDR_e_FaultSts_IgnSwRunCrnkPstnCktLo' incorporates:
     *  SignalConversion generated from: '<S14>/R_VePMDR_e_FaultSts_IgnSwRunCrnkPstnCktLo'
     *  SignalConversion generated from: '<S630>/VePMDR_e_FaultSts_IgnSwRunCrnkPstnCktLo'
     */
    (void)Rte_Write_VePMDR_e_FaultSts_IgnSwRunCrnkPstnCktLo_Value
        (PMDR_ac_B.OutportBufferForVePMDR_e_FaultSts_IgnSwR);

    /* Outport: '<Root>/VePMDR_e_FaultSts_IgnSwRunPstnCktHi' incorporates:
     *  SignalConversion generated from: '<S14>/R_VePMDR_e_FaultSts_IgnSwRunPstnCktHi'
     *  SignalConversion generated from: '<S630>/VePMDR_e_FaultSts_IgnSwRunPstnCktHi'
     */
    (void)Rte_Write_VePMDR_e_FaultSts_IgnSwRunPstnCktHi_Value
        (PMDR_ac_B.OutportBufferForVePMDR_e_FaultSts_IgnS_k);

    /* Outport: '<Root>/VePMDR_e_FaultSts_IgnSwRunPstnCktLo' incorporates:
     *  SignalConversion generated from: '<S14>/R_VePMDR_e_FaultSts_IgnSwRunPstnCktLo'
     *  SignalConversion generated from: '<S630>/VePMDR_e_FaultSts_IgnSwRunPstnCktLo'
     */
    (void)Rte_Write_VePMDR_e_FaultSts_IgnSwRunPstnCktLo_Value
        (PMDR_ac_B.OutportBufferForVePMDR_e_FaultSts_IgnS_l);

    /* Outport: '<Root>/VePMDR_e_FaultSts_SysVoltHi' incorporates:
     *  SignalConversion generated from: '<S14>/R_VePMDR_e_FaultSts_SysVoltHi'
     *  SignalConversion generated from: '<S630>/VePMDR_e_FaultSts_SysVoltHi'
     */
    (void)Rte_Write_VePMDR_e_FaultSts_SysVoltHi_Value
        (PMDR_ac_B.OutportBufferForVePMDR_e_FaultSts_SysVol);

    /* Outport: '<Root>/VePMDR_e_FaultSts_SysVoltLo' incorporates:
     *  SignalConversion generated from: '<S14>/R_VePMDR_e_FaultSts_SysVoltLo'
     *  SignalConversion generated from: '<S630>/VePMDR_e_FaultSts_SysVoltLo'
     */
    (void)Rte_Write_VePMDR_e_FaultSts_SysVoltLo_Value
        (PMDR_ac_B.OutportBufferForVePMDR_e_FaultSts_SysV_l);

    /* Outport: '<Root>/VePMDR_U_IgnRunCrnk' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDI_U_IgnRunCrnk'
     */
    (void)Rte_Write_VePMDR_U_IgnRunCrnk_Value
        (PMDR_ac_B.OutportBufferForVePMDI_U_IgnRunCrnk);

    /* Outport: '<Root>/VePMDR_b_EStop' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDI_b_EStop'
     */
    (void)Rte_Write_VePMDR_b_EStop_Value
        (PMDR_ac_B.OutportBufferForVePMDI_b_EStop);

    /* Outport: '<Root>/VePMDR_b_IgnRunCrnk' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDI_b_IgnRunCrnk'
     */
    (void)Rte_Write_VePMDR_b_IgnRunCrnk_Value
        (PMDR_ac_B.OutportBufferForVePMDI_b_IgnRunCrnk);

    /* Outport: '<Root>/VePMDR_b_KeyInIgnFA' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDI_b_KeyInIgnFA'
     */
    (void)Rte_Write_VePMDR_b_KeyInIgnFA_Value
        (PMDR_ac_B.OutportBufferForVePMDI_b_KeyInIgnFA);

    /* Outport: '<Root>/VePMDR_b_RunCrnkActvECM_FA' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDI_b_RunCrnkActvECM_FA'
     */
    (void)Rte_Write_VePMDR_b_RunCrnkActvECM_FA_Value
        (PMDR_ac_B.OutportBufferForVePMDI_b_RunCrnkActvECM_);

    /* Outport: '<Root>/VePMDR_e_KeyInIgn' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDI_e_KeyInIgn'
     *  SignalConversion generated from: '<S629>/VePMDI_e_KeyInIgn'
     */
    (void)Rte_Write_VePMDR_e_KeyInIgn_Value
        (PMDR_ac_B.OutportBufferForVePMDI_e_KeyInIgn);

    /* Outport: '<Root>/VePMDR_U_BF1_SysVolt' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_U_BF1_SysVolt'
     */
    (void)Rte_Write_VePMDR_U_BF1_SysVolt_Value
        (PMDR_ac_B.OutportBufferForVePMDR_U_BF1_SysVolt);

    /* Outport: '<Root>/VePMDR_U_BF2_SysVolt' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_U_BF2_SysVolt'
     */
    (void)Rte_Write_VePMDR_U_BF2_SysVolt_Value
        (PMDR_ac_B.OutportBufferForVePMDR_U_BF2_SysVolt);

    /* Outport: '<Root>/VePMDR_U_BF3_SysVolt' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_U_BF3_SysVolt'
     */
    (void)Rte_Write_VePMDR_U_BF3_SysVolt_Value
        (PMDR_ac_B.OutportBufferForVePMDR_U_BF3_SysVolt);

    /* Outport: '<Root>/VePMDR_U_HBSpare_SysVolt' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_U_HBSpare_SysVolt'
     */
    (void)Rte_Write_VePMDR_U_HBSpare_SysVolt_Value
        (PMDR_ac_B.OutportBufferForVePMDR_U_HBSpare_SysVolt);

    /* Outport: '<Root>/VePMDR_U_HB_SysVolt' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_U_HB_SysVolt'
     */
    (void)Rte_Write_VePMDR_U_HB_SysVolt_Value
        (PMDR_ac_B.OutportBufferForVePMDR_U_HB_SysVolt);

    /* Outport: '<Root>/VePMDR_b_AccRunActiveAnalog' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_b_AccRunActiveAnalog_Out_Init'
     */
    (void)Rte_Write_VePMDR_b_AccRunActiveAnalog_Value
        (PMDR_ac_B.OutportBufferForVePMDR_b_AccRunActiveAna);

    /* Outport: '<Root>/VePMDR_b_BCMWakeupLine' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_b_BCMWakeUp'
     */
    (void)Rte_Write_VePMDR_b_BCMWakeupLine_Value
        (PMDR_ac_B.OutportBufferForVePMDR_b_BCMWakeUp);

    /* Outport: '<Root>/VePMDR_b_BCMWakeupLineFA' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_b_BCMWakeUpFA'
     */
    (void)Rte_Write_VePMDR_b_BCMWakeupLineFA_Value
        (PMDR_ac_B.OutportBufferForVePMDR_b_BCMWakeUpFA);

    /* Outport: '<Root>/VePMDR_b_CrankAborted' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_b_CrankAborted'
     */
    (void)Rte_Write_VePMDR_b_CrankAborted_Value
        (PMDR_ac_B.OutportBufferForVePMDR_b_CrankAborted);

    /* Outport: '<Root>/VePMDR_b_EngineOffRequest' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_b_EngineOffRequest_Out_Init'
     */
    (void)Rte_Write_VePMDR_b_EngineOffRequest_Value
        (PMDR_ac_B.OutportBufferForVePMDR_b_EngineOffReques);

    /* Outport: '<Root>/VePMDR_b_HB_SysVoltFA' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_b_HB_SysVoltFA_Out_Init'
     */
    (void)Rte_Write_VePMDR_b_HB_SysVoltFA_Value
        (PMDR_ac_B.OutportBufferForVePMDR_b_HB_SysVoltFA_Ou);

    /* Outport: '<Root>/VePMDR_b_OBCMWup' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_b_OBCMWup'
     */
    (void)Rte_Write_VePMDR_b_OBCMWup_Value
        (PMDR_ac_B.OutportBufferForVePMDR_b_OBCMWup);

    /* Outport: '<Root>/VePMDR_b_OBCMWupFA' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_b_OBCMWupFA'
     */
    (void)Rte_Write_VePMDR_b_OBCMWupFA_Value
        (PMDR_ac_B.OutportBufferForVePMDR_b_OBCMWupFA);

    /* Outport: '<Root>/VePMDR_b_OperationalModeStsFA' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_b_OperationalModeSts_FA_Init'
     */
    (void)Rte_Write_VePMDR_b_OperationalModeStsFA_Value
        (PMDR_ac_B.OutportBufferForVePMDR_b_OperationalMode);

    /* Outport: '<Root>/VePMDR_e_OperationalModeSts' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_b_OperationalModeSts_Init'
     *  SignalConversion generated from: '<S629>/VePMDR_b_OperationalModeSts_Init'
     */
    (void)Rte_Write_VePMDR_e_OperationalModeSts_Value
        (PMDR_ac_B.OutportBufferForVePMDR_b_OperationalMo_c);

    /* Outport: '<Root>/VePMDR_b_PMM_PowerModeFA' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_b_PMM_PowerModeFA_Out_Init'
     */
    (void)Rte_Write_VePMDR_b_PMM_PowerModeFA_Value
        (PMDR_ac_B.OutportBufferForVePMDR_b_PMM_PowerModeFA);

    /* Outport: '<Root>/VePMDR_b_PTRunAbrt' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_b_PTRunAbrt'
     */
    (void)Rte_Write_VePMDR_b_PTRunAbrt_Value
        (PMDR_ac_B.OutportBufferForVePMDR_b_PTRunAbrt);

    /* Outport: '<Root>/VePMDR_b_PowerModeRawFA' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_b_PowerModeRawFA_Out_Init'
     */
    (void)Rte_Write_VePMDR_b_PowerModeRawFA_Value
        (PMDR_ac_B.OutportBufferForVePMDR_b_PowerModeRawFA_);

    /* Outport: '<Root>/VePMDR_b_RunCrankActiveAnalog' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_b_RunCrankActiveAnalog_Out_Init'
     */
    (void)Rte_Write_VePMDR_b_RunCrankActiveAnalog_Value
        (PMDR_ac_B.OutportBufferForVePMDR_b_RunCrankActiveA);

    /* Outport: '<Root>/VePMDR_b_RunCrankActive' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_b_RunCrankActive_Out_Init'
     */
    (void)Rte_Write_VePMDR_b_RunCrankActive_Value
        (PMDR_ac_B.OutportBufferForVePMDR_b_RunCrankActive_);

    /* Outport: '<Root>/VePMDR_b_RunCrnkActvECM' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_b_RunCrnkActvECM'
     */
    (void)Rte_Write_VePMDR_b_RunCrnkActvECM_Value
        (PMDR_ac_B.OutportBufferForVePMDR_b_RunCrnkActvECM);

    /* Outport: '<Root>/VePMDR_b_StrtCntrlStOn' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_b_StrtCntrlStOn_Out_Init'
     */
    (void)Rte_Write_VePMDR_b_StrtCntrlStOn_Value
        (PMDR_ac_B.OutportBufferForVePMDR_b_StrtCntrlStOn_O);

    /* Outport: '<Root>/VePMDR_b_SysVoltHighFA' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_b_SysVoltHighFA_Out_Init'
     */
    (void)Rte_Write_VePMDR_b_SysVoltHighFA_Value
        (PMDR_ac_B.OutportBufferForVePMDR_b_SysVoltHighFA_O);

    /* Outport: '<Root>/VePMDR_b_SysVoltLowFA_BF1' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_b_SysVoltLowFA_BF1_Out_Init'
     */
    (void)Rte_Write_VePMDR_b_SysVoltLowFA_BF1_Value
        (PMDR_ac_B.OutportBufferForVePMDR_b_SysVoltLowFA_BF);

    /* Outport: '<Root>/VePMDR_b_SysVoltLowFA_BF2' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_b_SysVoltLowFA_BF2_Out_Init'
     */
    (void)Rte_Write_VePMDR_b_SysVoltLowFA_BF2_Value
        (PMDR_ac_B.OutportBufferForVePMDR_b_SysVoltLowFA__j);

    /* Outport: '<Root>/VePMDR_b_SysVoltLowFA_BF3' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_b_SysVoltLowFA_BF3_Out_Init'
     */
    (void)Rte_Write_VePMDR_b_SysVoltLowFA_BF3_Value
        (PMDR_ac_B.OutportBufferForVePMDR_b_SysVoltLowFA__k);

    /* Outport: '<Root>/VePMDR_b_SysVoltLowFA_HBSpare' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_b_SysVoltLowFA_HBSpare_Out_Init'
     */
    (void)Rte_Write_VePMDR_b_SysVoltLowFA_HBSpare_Value
        (PMDR_ac_B.OutportBufferForVePMDR_b_SysVoltLowFA_j5);

    /* Outport: '<Root>/VePMDR_b_SysVoltLowFA_HB' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_b_SysVoltLowFA_HB_Out_Init'
     */
    (void)Rte_Write_VePMDR_b_SysVoltLowFA_HB_Value
        (PMDR_ac_B.OutportBufferForVePMDR_b_SysVoltLowFA_HB);

    /* Outport: '<Root>/VePMDR_b_SysVoltLowFA' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_b_SysVoltLowFA_Out_Init'
     */
    (void)Rte_Write_VePMDR_b_SysVoltLowFA_Value
        (PMDR_ac_B.OutportBufferForVePMDR_b_SysVoltLowFA_Ou);

    /* Outport: '<Root>/VePMDR_e_IgnInputsPowerMode' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_e_IgnInputsPowerMode_Out_Init'
     *  SignalConversion generated from: '<S630>/VePMDR_e_IgnInputsPowerMode_Out_Init'
     */
    (void)Rte_Write_VePMDR_e_IgnInputsPowerMode_Value
        (PMDR_ac_B.OutportBufferForVePMDR_e_IgnInputsPowerM);

    /* Outport: '<Root>/VePMDR_e_KeyStatus' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_e_KeyStatus_Out_Init'
     *  SignalConversion generated from: '<S630>/VePMDR_e_KeyStatus_Out_Init'
     */
    (void)Rte_Write_VePMDR_e_KeyStatus_Value
        (PMDR_ac_B.OutportBufferForVePMDR_e_KeyStatus_Out_I);

    /* Outport: '<Root>/VePMDR_e_PMM_PowerMode' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_e_PMM_PowerMode_Out_Init'
     *  SignalConversion generated from: '<S630>/VePMDR_e_PMM_PowerMode_Out_Init'
     */
    (void)Rte_Write_VePMDR_e_PMM_PowerMode_Value
        (PMDR_ac_B.OutportBufferForVePMDR_e_PMM_PowerMode_O);

    /* Outport: '<Root>/VePMDR_e_PowerModeRaw' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_e_PowerModeRaw_Out_Init'
     *  SignalConversion generated from: '<S630>/VePMDR_e_PowerModeRaw_Out_Init'
     */
    (void)Rte_Write_VePMDR_e_PowerModeRaw_Value
        (PMDR_ac_B.OutportBufferForVePMDR_e_PowerModeRaw_Ou);

    /* Outport: '<Root>/VePMDR_t_RunCrankActive' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_t_RunCrankActive_Out_Init'
     */
    (void)Rte_Write_VePMDR_t_RunCrankActive_Value
        (PMDR_ac_B.OutportBufferForVePMDR_t_RunCrankActive_);

    /* Merge: '<Root>/Merge_37' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDI_b_PMM_PowerModeRawFA_write'
     * */
    Rte_IrvWrite_PMDR_PwrOn_VePMDR_b_PowerModeRawFA_write_IRV
        (PMDR_ac_B.OutportBufferForVePMDI_b_PMM_PowerModeRa);

    /* Merge: '<Root>/Merge_3_Irv' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDI_b_RunCrnkActvECM_FA_write'
     * */
    Rte_IrvWrite_PMDR_PwrOn_VePMDR_b_RunCrnkActvECMFA_write_IRV
        (PMDR_ac_B.OutportBufferForVePMDI_b_RunCrnkActvECM_);

    /* Merge: '<Root>/VePMDI_e_PowerModeRaw_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDI_e_PowerModeRaw_write'
     *  SignalConversion generated from: '<S630>/VePMDI_e_PowerModeRaw_write'
     * */
    Rte_IrvWrite_PMDR_PwrOn_VePMDI_e_PowerModeRaw_write_IRV
        (PMDR_ac_B.OutportBufferForVePMDI_e_PowerModeRaw_wr);

    /* Merge: '<Root>/Merge_23_Irv' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_U_BF3_SysVolt_write'
     * */
    Rte_IrvWrite_PMDR_PwrOn_VePMDR_U_BF3_SysVolt_write_IRV
        (PMDR_ac_B.OutportBufferForVePMDR_U_BF3_SysVolt);

    /* Merge: '<Root>/Merge_25_Irv' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_U_HBSpare_SysVolt_write'
     * */
    Rte_IrvWrite_PMDR_PwrOn_VePMDR_U_HBSpare_SysVolt_write_IRV
        (PMDR_ac_B.OutportBufferForVePMDR_U_HBSpare_SysVolt);

    /* Merge: '<Root>/VePMDR_b_AccRunActiveAnalog_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_b_AccRunActiveAnalog_write'
     * */
    Rte_IrvWrite_PMDR_PwrOn_VePMDR_b_AccRunActiveAnalog_write_IRV
        (PMDR_ac_B.OutportBufferForVePMDR_b_AccRunActiveA_p);

    /* Merge: '<Root>/Merge_26' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_b_EngOffReq_C2_FA_Init_write'
     * */
    Rte_IrvWrite_PMDR_PwrOn_VePMDR_b_EngOffRq_C2FA_write_IRV
        (PMDR_ac_B.OutportBufferForVePMDR_b_EngOffReq_C2_FA);

    /* Merge: '<Root>/Merge_24' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_b_EngOffReq_C2_Init_write'
     * */
    Rte_IrvWrite_PMDR_PwrOn_VePMDR_b_EngOffReq_C2_Init_write_IRV
        (PMDR_ac_B.OutportBufferForVePMDR_b_EngOffReq_C2_In);

    /* Merge: '<Root>/Merge_29' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_b_EngOffReq_C_FA_Init_write'
     * */
    Rte_IrvWrite_PMDR_PwrOn_VePMDR_b_EngOffRq_CFA_write_IRV
        (PMDR_ac_B.OutportBufferForVePMDR_b_EngOffReq_C_FA_);

    /* Merge: '<Root>/Merge_20' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_b_EngOffReq_C_Init_write'
     * */
    Rte_IrvWrite_PMDR_PwrOn_VePMDR_b_EngOffReq_C_Init_write_IRV
        (PMDR_ac_B.OutportBufferForVePMDR_b_EngOffReq_C_Ini);

    /* Merge: '<Root>/Merge_27' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_b_PAD_Actv_Init_write'
     * */
    Rte_IrvWrite_PMDR_PwrOn_VePMDR_b_PAD_Actv_Init_write_IRV
        (PMDR_ac_B.OutportBufferForVePMDR_b_PAD_Actv_Init);

    /* Merge: '<Root>/Merge_28' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_b_PAD_FA_Init_write'
     * */
    Rte_IrvWrite_PMDR_PwrOn_VePMDR_b_PAD_ActvFA_write_IRV
        (PMDR_ac_B.OutportBufferForVePMDR_b_PAD_FA_Init);

    /* Merge: '<Root>/VePMDR_b_PMM_PowerModeFA_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_b_PMM_PowerModeFA_write'
     * */
    Rte_IrvWrite_PMDR_PwrOn_VePMDR_b_PMM_PowerModeFA_write_IRV
        (PMDR_ac_B.OutportBufferForVePMDR_b_PMM_PowerMode_h);

    /* Merge: '<Root>/VePMDR_b_PowerModeRawDigitalFA_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_b_PowerModeRawDigitalFA_write'
     * */
    Rte_IrvWrite_PMDR_PwrOn_VePMDR_b_PowerModeRawFA_write1_IRV
        (PMDR_ac_B.OutportBufferForVePMDR_b_PowerModeRawDig);

    /* Merge: '<Root>/VePMDR_b_RunCrankActiveAnalog_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_b_RunCrankActiveAnalog_write'
     * */
    Rte_IrvWrite_PMDR_PwrOn_VePMDR_b_RunCrankActiveAnalog_write_IRV
        (PMDR_ac_B.OutportBufferForVePMDR_b_RunCrankActiv_g);

    /* Merge: '<Root>/VePMDR_b_RunCrankActive_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_b_RunCrankActive_write'
     * */
    Rte_IrvWrite_PMDR_PwrOn_VePMDR_b_RunCrankActive_write_IRV
        (PMDR_ac_B.OutportBufferForVePMDR_b_RunCrankActiv_f);

    /* Merge: '<Root>/Merge_11_Irv' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_b_RunCrnkActvECM_write'
     * */
    Rte_IrvWrite_PMDR_PwrOn_VePMDR_b_RunCrnkActvECM_write_IRV
        (PMDR_ac_B.OutportBufferForVePMDR_b_RunCrnkActvECM);

    /* Merge: '<Root>/Merge_22' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_b_StrtCntrlStOn_ECM_write'
     * */
    Rte_IrvWrite_PMDR_PwrOn_VePMDR_b_StrtCntrlStOn_ECM_write_IRV
        (PMDR_ac_B.OutportBufferForVePMDR_b_StrtCntrlStOn_E);

    /* Merge: '<Root>/Merge_30' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_b_Tonale_PowerModeRawFA_write'
     * */
    Rte_IrvWrite_PMDR_PwrOn_VePMDR_b_Tonale_PowerModeRawFA_write_IRV
        (PMDR_ac_B.OutportBufferForVePMDR_b_Tonale_PowerMod);

    /* Merge: '<Root>/VePMDR_e_PMM_PowerMode_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_e_PMM_PowerMode_write'
     *  SignalConversion generated from: '<S630>/VePMDR_e_PMM_PowerMode_write'
     * */
    Rte_IrvWrite_PMDR_PwrOn_VePMDR_e_PMM_PowerMode_write_IRV
        (PMDR_ac_B.OutportBufferForVePMDR_e_PMM_PowerMode_w);

    /* Merge: '<Root>/Merge_34' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_e_PowerModeRaw_write'
     *  SignalConversion generated from: '<S629>/VePMDR_e_PowerModeRaw'
     * */
    Rte_IrvWrite_PMDR_PwrOn_VePMDR_e_PowerModeRaw_write_IRV
        (PMDR_ac_B.OutportBufferForVePMDR_e_PowerModeRaw);

    /* Merge: '<Root>/Merge_21' incorporates:
     *  SignalConversion generated from: '<S14>/VePMDR_e_Tonale_PowerModeRaw_write'
     *  SignalConversion generated from: '<S629>/VePMDR_e_Tonale_PowerModeRaw'
     * */
    Rte_IrvWrite_PMDR_PwrOn_VePMDR_e_Tonale_PowerModeRaw_write_IRV
        (PMDR_ac_B.OutportBufferForVePMDR_e_Tonale_PowerMod);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, PMDR_CODE) PMDR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/PMDR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S14>/FcnCallGen' incorporates:
     *  SubSystem: '<S14>/InitPMDIOutput'
     */
    /* SystemInitialize for SignalConversion generated from: '<S629>/VePMDR_e_PowerModeRaw' incorporates:
     *  Constant: '<S656>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_e_PowerModeRaw = KePMDR_e_PowerModeRaw;

    /* SystemInitialize for SignalConversion generated from: '<S629>/VePMDI_b_PMM_PowerModeRawFA' incorporates:
     *  Constant: '<S650>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDI_b_PMM_PowerModeRa = KePMDR_b_PowerModeRawFA;

    /* SystemInitialize for SignalConversion generated from: '<S629>/VePMDR_e_Tonale_PowerModeRaw' incorporates:
     *  Constant: '<S657>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_e_Tonale_PowerMod =
        KePMDR_e_Tonale_PowerModeRaw;

    /* SystemInitialize for SignalConversion generated from: '<S629>/VePMDR_b_Tonale_PowerModeRawFA' incorporates:
     *  Constant: '<S653>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_b_Tonale_PowerMod =
        KePMDR_b_Tonale_PowerModeRawFA;

    /* SystemInitialize for SignalConversion generated from: '<S629>/VePMDI_U_IgnRunCrnk' incorporates:
     *  Constant: '<S636>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDI_U_IgnRunCrnk = KePMDR_U_IgnRunCrnk;

    /* SystemInitialize for SignalConversion generated from: '<S629>/VePMDI_b_IgnRunCrnk' incorporates:
     *  Constant: '<S645>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDI_b_IgnRunCrnk = KePMDR_b_IgnRunCrnk_Digi;

    /* SystemInitialize for SignalConversion generated from: '<S629>/VePMDR_b_StrtCntrlStOn_ECM' incorporates:
     *  Constant: '<S652>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_b_StrtCntrlStOn_E = KePMDR_b_StrtCntrlStOn;

    /* SystemInitialize for SignalConversion generated from: '<S629>/VePMDR_b_BCMWakeUp' incorporates:
     *  Constant: '<S638>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_b_BCMWakeUp = KePMDR_b_BCMWakeUp;

    /* SystemInitialize for SignalConversion generated from: '<S629>/VePMDR_b_BCMWakeUpFA' */
    PMDR_ac_B.OutportBufferForVePMDR_b_BCMWakeUpFA = true;

    /* SystemInitialize for SignalConversion generated from: '<S629>/VePMDR_b_OBCMWup' incorporates:
     *  Constant: '<S647>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_b_OBCMWup = KePMDR_b_OBCMWUp;

    /* SystemInitialize for SignalConversion generated from: '<S629>/VePMDR_b_OBCMWupFA' */
    PMDR_ac_B.OutportBufferForVePMDR_b_OBCMWupFA = true;

    /* SystemInitialize for SignalConversion generated from: '<S629>/VePMDR_b_PTRunAbrt' incorporates:
     *  Constant: '<S649>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_b_PTRunAbrt = KePMDR_b_PTRunAbrt;

    /* SystemInitialize for SignalConversion generated from: '<S629>/VePMDR_b_CrankAborted' incorporates:
     *  Constant: '<S639>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_b_CrankAborted = KePMDR_b_CrankAborted;

    /* SystemInitialize for SignalConversion generated from: '<S629>/VePMDI_b_EStop' incorporates:
     *  Constant: '<S640>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDI_b_EStop = KePMDR_b_EStop;

    /* SystemInitialize for SignalConversion generated from: '<S629>/VePMDI_e_KeyInIgn' incorporates:
     *  Constant: '<S654>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDI_e_KeyInIgn = KePMDR_e_KeyInIgn;

    /* SystemInitialize for SignalConversion generated from: '<S629>/VePMDI_b_KeyInIgnFA' incorporates:
     *  Constant: '<S646>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDI_b_KeyInIgnFA = KePMDR_b_KeyInIgnFA;

    /* SystemInitialize for SignalConversion generated from: '<S629>/VePMDR_b_RunCrnkActvECM' incorporates:
     *  Constant: '<S651>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_b_RunCrnkActvECM = KePMDR_b_RunCrnkActvECM;

    /* SystemInitialize for SignalConversion generated from: '<S629>/VePMDI_b_RunCrnkActvECM_FA' */
    PMDR_ac_B.OutportBufferForVePMDI_b_RunCrnkActvECM_ = true;

    /* SystemInitialize for SignalConversion generated from: '<S629>/VePMDR_U_HB_SysVolt' incorporates:
     *  Constant: '<S635>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_U_HB_SysVolt = KePMDR_U_HB_SysVolt;

    /* SystemInitialize for SignalConversion generated from: '<S629>/VePMDR_U_BF1_SysVolt' incorporates:
     *  Constant: '<S631>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_U_BF1_SysVolt = KePMDR_U_BF1_SysVolt;

    /* SystemInitialize for SignalConversion generated from: '<S629>/VePMDR_U_BF2_SysVolt' incorporates:
     *  Constant: '<S632>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_U_BF2_SysVolt = KePMDR_U_BF2_SysVolt;

    /* SystemInitialize for SignalConversion generated from: '<S629>/VePMDR_U_HBSpare_SysVolt' incorporates:
     *  Constant: '<S634>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_U_HBSpare_SysVolt =
        KePMDR_U_HBSpare_SysVolt;

    /* SystemInitialize for SignalConversion generated from: '<S629>/VePMDR_U_BF3_SysVolt' incorporates:
     *  Constant: '<S633>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_U_BF3_SysVolt = KePMDR_U_BF3_SysVolt;

    /* SystemInitialize for SignalConversion generated from: '<S629>/VePMDR_b_PAD_Actv_Init' incorporates:
     *  Constant: '<S648>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_b_PAD_Actv_Init = KePMDR_b_PAD_Actv_Init;

    /* SystemInitialize for SignalConversion generated from: '<S629>/VePMDR_b_EngOffReq_C_Init' incorporates:
     *  Constant: '<S642>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_b_EngOffReq_C_Ini =
        KePMDR_b_EngOffReq_C_Init;

    /* SystemInitialize for SignalConversion generated from: '<S629>/VePMDR_b_EngOffReq_C_FA_Init' incorporates:
     *  Constant: '<S644>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_b_EngOffReq_C_FA_ =
        KePMDR_b_EngOffRq_C_FA_Init;

    /* SystemInitialize for SignalConversion generated from: '<S629>/VePMDR_b_EngOffReq_C2_Init' incorporates:
     *  Constant: '<S641>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_b_EngOffReq_C2_In =
        KePMDR_b_EngOffReq_C2_Init;

    /* SystemInitialize for SignalConversion generated from: '<S629>/VePMDR_b_EngOffReq_C2_FA_Init' incorporates:
     *  Constant: '<S643>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_b_EngOffReq_C2_FA =
        KePMDR_b_EngOffRq_C2_FA_Init;

    /* SystemInitialize for SignalConversion generated from: '<S629>/VePMDR_b_OperationalModeSts_Init' incorporates:
     *  Constant: '<S655>/Calib'
     */
    PMDR_ac_B.OutportBufferForVePMDR_b_OperationalMo_c =
        KePMDR_e_OperationalModeSts_Init;

    /* SystemInitialize for SignalConversion generated from: '<S629>/KePMDR_U_MainRelay_SysVolt_Init' incorporates:
     *  Constant: '<S637>/Calib'
     */
    PMDR_ac_B.OutportBufferForKePMDR_U_MainRelay_SysVo =
        KePMDR_U_MainRelay_SysVolt;

    /* SystemInitialize for S-Function (fcgen): '<S14>/FcnCallGen' incorporates:
     *  SubSystem: '<S14>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S630>/VePMDR_e_PMM_PowerMode_Out_Init' incorporates:
     *  Constant: '<S630>/Const2'
     */
    PMDR_ac_B.OutportBufferForVePMDR_e_PMM_PowerMode_O = PMDR_ac_ConstB.Const2;

    /* SystemInitialize for SignalConversion generated from: '<S630>/VePMDR_e_IgnInputsPowerMode_Out_Init' incorporates:
     *  Constant: '<S630>/Const9'
     */
    PMDR_ac_B.OutportBufferForVePMDR_e_IgnInputsPowerM = PMDR_ac_ConstB.Const9;

    /* SystemInitialize for SignalConversion generated from: '<S630>/VePMDR_e_KeyStatus_Out_Init' incorporates:
     *  Constant: '<S630>/Const12'
     */
    PMDR_ac_B.OutportBufferForVePMDR_e_KeyStatus_Out_I = PMDR_ac_ConstB.Const12;

    /* SystemInitialize for SignalConversion generated from: '<S630>/VePMDR_e_PowerModeRaw_Out_Init' incorporates:
     *  Constant: '<S630>/Const13'
     */
    PMDR_ac_B.OutportBufferForVePMDR_e_PowerModeRaw_Ou = PMDR_ac_ConstB.Const13;

    /* SystemInitialize for SignalConversion generated from: '<S630>/VePMDI_e_PowerModeRaw_write' incorporates:
     *  Constant: '<S658>/Constant'
     */
    PMDR_ac_B.OutportBufferForVePMDI_e_PowerModeRaw_wr = PMDR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S630>/VePMDR_e_PMM_PowerMode_write' incorporates:
     *  Constant: '<S659>/Constant'
     */
    PMDR_ac_B.OutportBufferForVePMDR_e_PMM_PowerMode_w =
        PMDR_ac_ConstB.Constant_b;

    /* SystemInitialize for SignalConversion generated from: '<S630>/VePMDR_e_FaultSts_SysVoltHi' incorporates:
     *  Constant: '<S660>/Constant'
     */
    PMDR_ac_B.OutportBufferForVePMDR_e_FaultSts_SysVol =
        PMDR_ac_ConstB.Constant_l;

    /* SystemInitialize for SignalConversion generated from: '<S630>/VePMDR_e_FaultSts_SysVoltLo' incorporates:
     *  Constant: '<S661>/Constant'
     */
    PMDR_ac_B.OutportBufferForVePMDR_e_FaultSts_SysV_l =
        PMDR_ac_ConstB.Constant_b0;

    /* SystemInitialize for SignalConversion generated from: '<S630>/VePMDR_e_FaultSts_IgnSwAccPstnCktHi' incorporates:
     *  Constant: '<S662>/Constant'
     */
    PMDR_ac_B.OutportBufferForVePMDR_e_FaultSts_IgnSwA =
        PMDR_ac_ConstB.Constant_f;

    /* SystemInitialize for SignalConversion generated from: '<S630>/VePMDR_e_FaultSts_IgnSwAccPstnCktLo' incorporates:
     *  Constant: '<S663>/Constant'
     */
    PMDR_ac_B.OutportBufferForVePMDR_e_FaultSts_IgnS_i =
        PMDR_ac_ConstB.Constant_k;

    /* SystemInitialize for SignalConversion generated from: '<S630>/VePMDR_e_FaultSts_IgnSwRunCrnkPstnCktLo' incorporates:
     *  Constant: '<S664>/Constant'
     */
    PMDR_ac_B.OutportBufferForVePMDR_e_FaultSts_IgnSwR =
        PMDR_ac_ConstB.Constant_j;

    /* SystemInitialize for SignalConversion generated from: '<S630>/VePMDR_e_FaultSts_IgnSwRunCrnkPstnCktHi' incorporates:
     *  Constant: '<S665>/Constant'
     */
    PMDR_ac_B.OutportBufferForVePMDR_e_FaultSts_IgnS_b =
        PMDR_ac_ConstB.Constant_g;

    /* SystemInitialize for SignalConversion generated from: '<S630>/VePMDR_e_FaultSts_IgnSwRunPstnCktHi' incorporates:
     *  Constant: '<S666>/Constant'
     */
    PMDR_ac_B.OutportBufferForVePMDR_e_FaultSts_IgnS_k =
        PMDR_ac_ConstB.Constant_b4;

    /* SystemInitialize for SignalConversion generated from: '<S630>/VePMDR_e_FaultSts_IgnSwRunPstnCktLo' incorporates:
     *  Constant: '<S667>/Constant'
     */
    PMDR_ac_B.OutportBufferForVePMDR_e_FaultSts_IgnS_l =
        PMDR_ac_ConstB.Constant_js;

    /* End of SystemInitialize for S-Function (fcgen): '<S14>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/PMDR_MedTEB'
     */
    /* SystemInitialize for S-Function (fcgen): '<S10>/FcnCallGen' incorporates:
     *  SubSystem: '<S10>/DtrmnPMDC_AccRun'
     */
    /* Start for If: '<S41>/If1' */
    PMDR_ac_DW.If1_ActiveSubsystem_m = -1;

    /* SystemInitialize for S-Function (fcgen): '<S10>/FcnCallGen' incorporates:
     *  SubSystem: '<S10>/RunCrankActive'
     */
    /* Start for If: '<S47>/If1' */
    PMDR_ac_DW.If1_ActiveSubsystem = -1;

    /* End of SystemInitialize for S-Function (fcgen): '<S10>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* SystemInitialize for Outport: '<Root>/VePMDR_e_PMM_PowerMode' incorporates:
     *  Merge: '<Root>/Merge_Outport_3'
     */
    (void)Rte_Write_VePMDR_e_PMM_PowerMode_Value(CePMDR_e_PowerMode_Off);

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/PMDR_MedTED'
     */
    /* SystemInitialize for S-Function (fcgen): '<S12>/FcnCallGen1' incorporates:
     *  SubSystem: '<S12>/RunStrt_AccRun'
     */
#if Rte_SysCon_Variant_PMDR_10
#endif

#if Rte_SysCon_Variant_PMDR_12
#endif

#if Rte_SysCon_Variant_PMDR_11
#endif

    /* SystemInitialize for S-Function (fcgen): '<S12>/FcnCallGen1' incorporates:
     *  SubSystem: '<S12>/PMDD_Sys_Volt_Diag'
     */

    /* SystemInitialize for Atomic SubSystem: '<S198>/SysVoltHigh_BF1' */
#if Rte_SysCon_Variant_PMDR_4
#endif

    /* End of SystemInitialize for SubSystem: '<S198>/SysVoltHigh_BF1' */

    /* SystemInitialize for Atomic SubSystem: '<S198>/SysVoltHigh_BF2' */
#if Rte_SysCon_Variant_PMDR_5
#endif

    /* End of SystemInitialize for SubSystem: '<S198>/SysVoltHigh_BF2' */

    /* SystemInitialize for Atomic SubSystem: '<S198>/SysVoltHigh_BF3' */
#if Rte_SysCon_Variant_PMDR_6
#endif

    /* End of SystemInitialize for SubSystem: '<S198>/SysVoltHigh_BF3' */

    /* SystemInitialize for Atomic SubSystem: '<S198>/SysVoltHigh_HB' */
#if Rte_SysCon_Variant_PMDR_7
#endif

    /* End of SystemInitialize for SubSystem: '<S198>/SysVoltHigh_HB' */

    /* SystemInitialize for Atomic SubSystem: '<S198>/SysVoltHigh_HBSpare' */
#if Rte_SysCon_Variant_PMDR_8
#endif

    /* End of SystemInitialize for SubSystem: '<S198>/SysVoltHigh_HBSpare' */

    /* SystemInitialize for Atomic SubSystem: '<S199>/SysVoltLow_BF1' */
#if Rte_SysCon_Variant_PMDR_4

    /* End of SystemInitialize for SubSystem: '<S199>/SysVoltLow_BF1' */
#endif

    /* SystemInitialize for Atomic SubSystem: '<S199>/SysVoltLow_BF2' */
#if Rte_SysCon_Variant_PMDR_5
#endif

    /* End of SystemInitialize for SubSystem: '<S199>/SysVoltLow_BF2' */

    /* SystemInitialize for Atomic SubSystem: '<S199>/SysVoltLow_BF3' */
#if Rte_SysCon_Variant_PMDR_6
#endif

    /* End of SystemInitialize for SubSystem: '<S199>/SysVoltLow_BF3' */

    /* SystemInitialize for Atomic SubSystem: '<S199>/SysVoltLow_HB' */
#if Rte_SysCon_Variant_PMDR_7
#endif

    /* End of SystemInitialize for SubSystem: '<S199>/SysVoltLow_HB' */

    /* SystemInitialize for Atomic SubSystem: '<S199>/SysVoltLow_HBSpare' */
#if Rte_SysCon_Variant_PMDR_8
#endif

    /* End of SystemInitialize for SubSystem: '<S199>/SysVoltLow_HBSpare' */

    /* End of SystemInitialize for S-Function (fcgen): '<S12>/FcnCallGen1' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* SystemInitialize for Outport: '<Root>/VePMDR_e_IgnInputsPowerMode' incorporates:
     *  Merge: '<Root>/Merge_Outport_12'
     */
    (void)Rte_Write_VePMDR_e_IgnInputsPowerMode_Value(CePMDR_e_PowerMode_Off);

    /* SystemInitialize for Outport: '<Root>/VePMDR_e_KeyInIgn' incorporates:
     *  Merge: '<Root>/Merge_35'
     */
    (void)Rte_Write_VePMDR_e_KeyInIgn_Value(CePMDR_e_KeyInIgn_DEFAULT);

    /* SystemInitialize for Outport: '<Root>/VePMDR_e_KeyStatus' incorporates:
     *  Merge: '<Root>/Merge_Outport_25'
     */
    (void)Rte_Write_VePMDR_e_KeyStatus_Value(CePMDR_e_KeySt_Off);

    /* SystemInitialize for Outport: '<Root>/VePMDR_e_PowerModeRaw' incorporates:
     *  Merge: '<Root>/Merge_Outport_27'
     */
    (void)Rte_Write_VePMDR_e_PowerModeRaw_Value(CePMDR_e_PowerMode_Off);

    /* SystemInitialize for Outport: '<Root>/VePMDR_e_OperationalModeSts' incorporates:
     *  Merge: '<Root>/Merge_31'
     */
    (void)Rte_Write_VePMDR_e_OperationalModeSts_Value(CePMDR_e_Init);

    /* SystemInitialize for Outport: '<Root>/VePMDR_e_FaultSts_SysVoltHi' incorporates:
     *  Merge: '<Root>/M_VePMDR_e_FaultSts_SysVoltHi'
     */
    (void)Rte_Write_VePMDR_e_FaultSts_SysVoltHi_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VePMDR_e_FaultSts_SysVoltLo' incorporates:
     *  Merge: '<Root>/M_VePMDR_e_FaultSts_SysVoltLo'
     */
    (void)Rte_Write_VePMDR_e_FaultSts_SysVoltLo_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VePMDR_e_FaultSts_IgnSwAccPstnCktHi' incorporates:
     *  Merge: '<Root>/M_VePMDR_e_FaultSts_IgnSwAccPstnCktHi'
     */
    (void)Rte_Write_VePMDR_e_FaultSts_IgnSwAccPstnCktHi_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VePMDR_e_FaultSts_IgnSwAccPstnCktLo' incorporates:
     *  Merge: '<Root>/M_VePMDR_e_FaultSts_IgnSwAccPstnCktLo'
     */
    (void)Rte_Write_VePMDR_e_FaultSts_IgnSwAccPstnCktLo_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VePMDR_e_FaultSts_IgnSwRunCrnkPstnCktLo' incorporates:
     *  Merge: '<Root>/M_VePMDR_e_FaultSts_IgnSwRunCrnkPstnCktLo'
     */
    (void)Rte_Write_VePMDR_e_FaultSts_IgnSwRunCrnkPstnCktLo_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VePMDR_e_FaultSts_IgnSwRunCrnkPstnCktHi' incorporates:
     *  Merge: '<Root>/M_VePMDR_e_FaultSts_IgnSwRunCrnkPstnCktHi'
     */
    (void)Rte_Write_VePMDR_e_FaultSts_IgnSwRunCrnkPstnCktHi_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VePMDR_e_FaultSts_IgnSwRunPstnCktHi' incorporates:
     *  Merge: '<Root>/M_VePMDR_e_FaultSts_IgnSwRunPstnCktHi'
     */
    (void)Rte_Write_VePMDR_e_FaultSts_IgnSwRunPstnCktHi_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VePMDR_e_FaultSts_IgnSwRunPstnCktLo' incorporates:
     *  Merge: '<Root>/M_VePMDR_e_FaultSts_IgnSwRunPstnCktLo'
     */
    (void)Rte_Write_VePMDR_e_FaultSts_IgnSwRunPstnCktLo_Value(CeDFIB_e_Init);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
