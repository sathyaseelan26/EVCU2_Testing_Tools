/*
 * File: TITR_ac.c
 *
 * Code generated for Simulink model 'TITR_ac'.
 *
 * Model version                  : 9.75
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:43:56 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TITR_ac.h"
#include "look1_iflf_binlca_16a.h"
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
#define START_SEC_CALIB_UNSPECIFIED_TITR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_TITR_FUNC

static volatile CONST(boolean, TITR_VAR_INIT) HaTITR_b_EnblTiSnsd4Strt[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S87>/Calib' */

#endif

static volatile CONST(boolean, TITR_VAR_INIT) HeTITR_b_AllowSEMArb = 0;/* Referenced by: '<S52>/Calib' */
static volatile CONST(boolean, TITR_VAR_INIT) HeTITR_b_SEM_TiSlct = 0;/* Referenced by: '<S53>/Calib' */
static volatile CONST(float32, TITR_VAR_INIT) HeTITR_t_12p5_dT = 0.0125F;/* Referenced by:
                                                                      * '<S88>/Calib'
                                                                      * '<S15>/Calib'
                                                                      * '<S149>/Calib'
                                                                      * '<S54>/Calib'
                                                                      * '<S74>/Calib'
                                                                      * '<S68>/Calib'
                                                                      */

#if Rte_SysCon_Variant_TITR_FUNC && Rte_SysCon_Variant_TITR_UsePumpTrqAsLoad

static volatile CONST(float32, TITR_VAR_INIT) KaTITR_T_SumpOilTempAxis[7] =
{
    -30.0F, -10.0F, 10.0F, 30.0F, 50.0F, 75.0F, 115.0F
} ;                                    /* Referenced by: '<S128>/Calib' */

#endif

static volatile CONST(boolean, TITR_VAR_INIT) KaTITR_b_ESSRStrtStpSt_CLSlwDsbld
    [29] =
{
    1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S22>/Calib' */

#if Rte_SysCon_Variant_TITR_FUNC

static volatile CONST(boolean, TITR_VAR_INIT) KaTITR_b_EnableTiProtectn[16] =
{
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
} ;                                    /* Referenced by: '<S150>/Calib' */

#endif

static volatile CONST(boolean, TITR_VAR_INIT) KaTITR_b_TiBlendSEM_RngEqnMap[16] =
{
    0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S55>/Calib' */

#if Rte_SysCon_Variant_TITR_FUNC && Rte_SysCon_Variant_TITR_UsePumpTrqAsLoad

static volatile CONST(float32, TITR_VAR_INIT) KaTITR_k_PmpTorqOffset[84] =
{
    1.73922F, 0.37007F, 0.24509F, 0.67711F, 1.06064F, 1.36781F, 1.65523F,
    2.25663F, 3.07947F, 4.63855F, 6.15324F, 7.65445F, 1.73922F, 0.37007F,
    0.24509F, 0.67711F, 1.06064F, 1.36781F, 1.65523F, 2.25663F, 3.07947F,
    4.63855F, 6.15324F, 7.65445F, 1.73922F, 0.37007F, 0.24509F, 0.67711F,
    1.06064F, 1.36781F, 1.65523F, 2.25663F, 3.07947F, 4.63855F, 6.15324F,
    7.65445F, 1.73922F, 0.37007F, 0.24509F, 0.67711F, 1.06064F, 1.36781F,
    1.65523F, 2.25663F, 3.07947F, 4.63855F, 6.15324F, 7.65445F, 1.73922F,
    0.37007F, 0.24509F, 0.67711F, 1.06064F, 1.36781F, 1.65523F, 2.25663F,
    3.07947F, 4.63855F, 6.15324F, 7.65445F, 2.39035F, 1.72138F, 0.44079F,
    -0.26815F, -0.11912F, 0.12575F, 0.4263F, 1.07562F, 1.79088F, 3.3184F,
    4.80804F, 6.47553F, 2.2401F, 2.25905F, 1.39135F, -0.0561F, -0.57942F,
    -0.49895F, -1.1891F, 0.42016F, 0.9508F, 2.43858F, 3.96269F, 5.64826F
} ;                                    /* Referenced by: '<S129>/Calib' */

#endif

#if Rte_SysCon_Variant_TITR_FUNC && Rte_SysCon_Variant_TITR_UsePumpTrqAsLoad

static volatile CONST(float32, TITR_VAR_INIT) KaTITR_k_PmpTorqSlope[84] =
{
    0.00368F, 0.00593F, 0.00573F, 0.00485F, 0.00418F, 0.00369F, 0.00331F,
    0.0028F, 0.00229F, 0.00156F, 0.00125F, 0.00119F, 0.00368F, 0.00593F,
    0.00573F, 0.00485F, 0.00418F, 0.00369F, 0.00331F, 0.0028F, 0.00229F,
    0.00156F, 0.00125F, 0.00119F, 0.00368F, 0.00593F, 0.00573F, 0.00485F,
    0.00418F, 0.00369F, 0.00331F, 0.0028F, 0.00229F, 0.00156F, 0.00125F,
    0.00119F, 0.00368F, 0.00593F, 0.00573F, 0.00485F, 0.00418F, 0.00369F,
    0.00331F, 0.0028F, 0.00229F, 0.00156F, 0.00125F, 0.00119F, 0.00368F,
    0.00593F, 0.00573F, 0.00485F, 0.00418F, 0.00369F, 0.00331F, 0.0028F,
    0.00229F, 0.00156F, 0.00125F, 0.00119F, 0.0018F, 0.00402F, 0.00579F,
    0.00615F, 0.0055F, 0.00485F, 0.00432F, 0.0035F, 0.00289F, 0.00212F, 0.00172F,
    0.00146F, 0.00095F, 0.00229F, 0.00419F, 0.00591F, 0.00626F, 0.00583F,
    0.00516F, 0.00416F, 0.0035F, 0.00249F, 0.00192F, 0.00152F
} ;                                    /* Referenced by: '<S130>/Calib' */

#endif

#if Rte_SysCon_Variant_TITR_FUNC && Rte_SysCon_Variant_TITR_UsePumpTrqAsLoad

static volatile CONST(float32, TITR_VAR_INIT) KaTITR_n_PumpSpdAxis[12] =
{
    494.0F, 992.0F, 1496.0F, 1998.0F, 2496.0F, 2999.0F, 3501.0F, 3999.0F,
    4501.0F, 5000.0F, 5500.0F, 6005.0F
} ;                                    /* Referenced by: '<S131>/Calib' */

#endif

#if Rte_SysCon_Variant_TITR_FUNC && Rte_SysCon_Variant_TITR_UsePumpTrqAsLoad

static volatile CONST(float32, TITR_VAR_INIT) KeTITR_K_EVT_PTO_GrRat = 1.25F;/* Referenced by: '<S132>/Calib' */

#endif

#if Rte_SysCon_Variant_TITR_FUNC

static volatile CONST(float32, TITR_VAR_INIT) KeTITR_K_SnsdTi_FltCoef = 0.2F;/* Referenced by: '<S123>/Calib' */

#endif

#if Rte_SysCon_Variant_TITR_FUNC

static volatile CONST(float32, TITR_VAR_INIT) KeTITR_K_TiPstDamp_Flt = 0.2F;/* Referenced by: '<S124>/Calib' */

#endif

#if Rte_SysCon_Variant_TITR_FUNC

static volatile CONST(float32, TITR_VAR_INIT) KeTITR_M_DialEngTorqDevOnly = 0.0F;/* Referenced by: '<S151>/Calib' */

#endif

#if Rte_SysCon_Variant_TITR_NF

static volatile CONST(float32, TITR_VAR_INIT) KeTITR_M_EngCorrTrq_init = 1.0F;/* Referenced by: '<S188>/Calib' */

#endif

#if Rte_SysCon_Variant_TITR_FUNC

static volatile CONST(float32, TITR_VAR_INIT) KeTITR_M_EngTrqCrrctnShpd_Decr =
    -0.4F;                             /* Referenced by: '<S161>/Calib' */

#endif

#if Rte_SysCon_Variant_TITR_FUNC

static volatile CONST(float32, TITR_VAR_INIT) KeTITR_M_EngTrqCrrctnShpd_Incr =
    0.4F;                              /* Referenced by: '<S162>/Calib' */

#endif

#if Rte_SysCon_Variant_TITR_NF

static volatile CONST(float32, TITR_VAR_INIT) KeTITR_M_InputTorqAct_init = 1.0F;/* Referenced by: '<S189>/Calib' */

#endif

#if Rte_SysCon_Variant_TITR_NF

static volatile CONST(float32, TITR_VAR_INIT) KeTITR_M_InputTorqAct_wPDCL_init =
    1.0F;                              /* Referenced by: '<S190>/Calib' */

#endif

#if Rte_SysCon_Variant_TITR_NF

static volatile CONST(float32, TITR_VAR_INIT) KeTITR_M_InputTrqAirflow_init =
    1.0F;                              /* Referenced by: '<S191>/Calib' */

#endif

#if Rte_SysCon_Variant_TITR_NF

static volatile CONST(float32, TITR_VAR_INIT)
    KeTITR_M_InputTrqCapacityMinOff_init = 1.0F;/* Referenced by: '<S192>/Calib' */

#endif

#if Rte_SysCon_Variant_TITR_NF

static volatile CONST(float32, TITR_VAR_INIT)
    KeTITR_M_InputTrqCapacityMinRunImmed_init = 1.0F;/* Referenced by: '<S193>/Calib' */

#endif

#if Rte_SysCon_Variant_TITR_NF

static volatile CONST(float32, TITR_VAR_INIT) KeTITR_M_InputTrqMax_init = 999.0F;/* Referenced by: '<S194>/Calib' */

#endif

#if Rte_SysCon_Variant_TITR_NF

static volatile CONST(float32, TITR_VAR_INIT) KeTITR_M_InputTrqMin_init =
    -999.0F;                           /* Referenced by: '<S195>/Calib' */

#endif

#if Rte_SysCon_Variant_TITR_NF

static volatile CONST(float32, TITR_VAR_INIT) KeTITR_M_InputTrqStaticSEM_init =
    1.0F;                              /* Referenced by: '<S196>/Calib' */

#endif

#if Rte_SysCon_Variant_TITR_NF

static volatile CONST(float32, TITR_VAR_INIT) KeTITR_M_PumpTorq_init = 1.0F;/* Referenced by: '<S197>/Calib' */

#endif

#if Rte_SysCon_Variant_TITR_FUNC && Rte_SysCon_Variant_TITR_UsePumpTrqAsLoad

static volatile CONST(float32, TITR_VAR_INIT) KeTITR_M_PumpTorqueMax = 50.0F;/* Referenced by: '<S167>/Calib' */

#endif

#if Rte_SysCon_Variant_TITR_FUNC && Rte_SysCon_Variant_TITR_UsePumpTrqAsLoad

static volatile CONST(float32, TITR_VAR_INIT) KeTITR_M_PumpTorqueMin = -50.0F;/* Referenced by: '<S168>/Calib' */

#endif

#if Rte_SysCon_Variant_TITR_NF

static volatile CONST(float32, TITR_VAR_INIT) KeTITR_M_SnsdEng_Flt_init = 1.0F;/* Referenced by: '<S181>/Calib' */

#endif

#if Rte_SysCon_Variant_TITR_NF

static volatile CONST(float32, TITR_VAR_INIT) KeTITR_M_SnsdTiRaw_Out_init = 1.0F;/* Referenced by: '<S182>/Calib' */

#endif

#if Rte_SysCon_Variant_TITR_NF

static volatile CONST(float32, TITR_VAR_INIT) KeTITR_M_SnsdTi_Flt_init = 1.0F;/* Referenced by: '<S183>/Calib' */

#endif

static volatile CONST(float32, TITR_VAR_INIT) KeTITR_M_TiCombDlyNegRst = -5.0F;/* Referenced by: '<S75>/Calib' */
static volatile CONST(float32, TITR_VAR_INIT) KeTITR_M_TiCombDlyPosRst = 5.0F;/* Referenced by: '<S76>/Calib' */

#if Rte_SysCon_Variant_TITR_NF

static volatile CONST(float32, TITR_VAR_INIT) KeTITR_M_TiPostDamp_Flt_init =
    1.0F;                              /* Referenced by: '<S184>/Calib' */

#endif

#if Rte_SysCon_Variant_TITR_NF

static volatile CONST(float32, TITR_VAR_INIT) KeTITR_M_TiPostDamp_Raw_init =
    1.0F;                              /* Referenced by: '<S185>/Calib' */

#endif

static volatile CONST(boolean, TITR_VAR_INIT) KeTITR_b_ActiveDampingEnabled = 0;/* Referenced by: '<S23>/Calib' */
static volatile CONST(boolean, TITR_VAR_INIT) KeTITR_b_EnblTiSEMShaping = 0;/* Referenced by: '<S37>/Calib' */

#if Rte_SysCon_Variant_TITR_FUNC

static volatile CONST(boolean, TITR_VAR_INIT) KeTITR_b_NiDotBuffCranked = 1;/* Referenced by: '<S117>/Calib' */

#endif

static volatile CONST(boolean, TITR_VAR_INIT) KeTITR_b_PulseCancelCmndFdbk = 0;/* Referenced by: '<S24>/Calib' */
static volatile CONST(boolean, TITR_VAR_INIT) KeTITR_b_RespType_Ovrd = 0;/* Referenced by: '<S56>/Calib' */
static volatile CONST(boolean, TITR_VAR_INIT) KeTITR_b_SEMTiOffset_Enbl = 0;/* Referenced by: '<S57>/Calib' */

#if Rte_SysCon_Variant_TITR_NF

static volatile CONST(boolean, TITR_VAR_INIT) KeTITR_b_SnsdTi_notVld_init = 1;/* Referenced by: '<S186>/Calib' */

#endif

static volatile CONST(boolean, TITR_VAR_INIT) KeTITR_b_TiActForSEM_DEC = 0;/* Referenced by: '<S58>/Calib' */
static volatile CONST(boolean, TITR_VAR_INIT) KeTITR_b_UseEngTrqCmndDuringSEM =
    1;                                 /* Referenced by: '<S59>/Calib' */

#if Rte_SysCon_Variant_TITR_FUNC

static volatile CONST(boolean, TITR_VAR_INIT) KeTITR_b_UseTuskindT = 0;/* Referenced by: '<S89>/Calib' */

#endif

#if Rte_SysCon_Variant_TITR_NF

static volatile CONST(float32, TITR_VAR_INIT) KeTITR_dn_NiDot_init = 1.0F;/* Referenced by: '<S187>/Calib' */

#endif

static volatile CONST(float32, TITR_VAR_INIT) KeTITR_k_CmbDlySettlgTmFact = 4.0F;/* Referenced by: '<S77>/Calib' */

#if Rte_SysCon_Variant_TITR_FUNC

static volatile CONST(float32, TITR_VAR_INIT) KeTITR_k_InputTorqFilterECMIdle =
    1.0F;                              /* Referenced by: '<S152>/Calib' */

#endif

static volatile CONST(float32, TITR_VAR_INIT) KeTITR_k_TaCLCmdFilt_CLDsbld =
    0.5F;                              /* Referenced by: '<S25>/Calib' */
static volatile CONST(float32, TITR_VAR_INIT) KeTITR_t_CombDelayDisblTime =
    0.0125F;                           /* Referenced by: '<S78>/Calib' */

#if Rte_SysCon_Variant_TITR_FUNC

static volatile CONST(float32, TITR_VAR_INIT) KeTITR_t_NiDotTimePeriod = 0.0125F;/* Referenced by: '<S118>/Calib' */

#endif

#if Rte_SysCon_Variant_TITR_FUNC

static volatile CONST(float32, TITR_VAR_INIT) KeTITR_t_NoDotTimePeriod = 0.0125F;/* Referenced by: '<S119>/Calib' */

#endif

static volatile CONST(float32, TITR_VAR_INIT) KeTITR_t_TeSEM_Filt = 0.15F;/* Referenced by: '<S60>/Calib' */
static volatile CONST(float32, TITR_VAR_INIT) KeTITR_t_TiRamp = 0.0125F;/* Referenced by: '<S61>/Calib' */

#if Rte_SysCon_Variant_TITR_FUNC

static volatile CONST(float32, TITR_VAR_INIT) KeTITR_t_UndershootBlendInTime =
    1.0F;                              /* Referenced by: '<S153>/Calib' */

#endif

#if Rte_SysCon_Variant_TITR_FUNC

static volatile CONST(float32, TITR_VAR_INIT) KeTITR_t_UndershootBlendOutTime =
    0.0F;                              /* Referenced by: '<S154>/Calib' */

#endif

#if Rte_SysCon_Variant_TITR_FUNC

static volatile CONST(float32, TITR_VAR_INIT) KtTITR_M_TiAdjst_NiErr[112] =
{
    -200.0F, -90.0F, -80.0F, -70.0F, -60.0F, -50.0F, -10.0F, 0.0F, 0.0F, 10.0F,
    50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F, -200.0F, -90.0F, -80.0F, -70.0F,
    -60.0F, -50.0F, -10.0F, 0.0F, 0.0F, 10.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F,
    100.0F, -200.0F, -90.0F, -80.0F, -70.0F, -60.0F, -50.0F, -10.0F, 0.0F, 0.0F,
    10.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F, -200.0F, -90.0F, -80.0F,
    -70.0F, -60.0F, -50.0F, -10.0F, 0.0F, 0.0F, 10.0F, 50.0F, 60.0F, 70.0F,
    80.0F, 90.0F, 100.0F, -200.0F, -90.0F, -80.0F, -70.0F, -60.0F, -50.0F,
    -10.0F, 0.0F, 0.0F, 10.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F,
    -200.0F, -90.0F, -80.0F, -70.0F, -60.0F, -50.0F, -10.0F, 0.0F, 0.0F, 10.0F,
    50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F, -200.0F, -90.0F, -80.0F, -70.0F,
    -60.0F, -50.0F, -10.0F, 0.0F, 0.0F, 10.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F,
    100.0F
} ;                                    /* Referenced by: '<S155>/Vector' */

#endif

static volatile CONST(float32, TITR_VAR_INIT) KtTITR_dk_LD_TiSEMBlend[5] =
{
    0.0F, 0.0F, -26.667F, -26.667F, -999.0F
} ;                                    /* Referenced by: '<S69>/Vector' */

#if Rte_SysCon_Variant_TITR_FUNC

static volatile CONST(float32, TITR_VAR_INIT) KtTITR_k_InputTorqFilterConst[7] =
{
    0.95F, 0.95F, 0.55F, 0.55F, 0.55F, 0.95F, 0.95F
} ;                                    /* Referenced by: '<S156>/Vector' */

#endif

static volatile CONST(float32, TITR_VAR_INIT) KtTITR_k_TaCLCmdFilt_Extnl[7] =
{
    0.0F, 0.6F, 1.6F, 2.6F, 4.5F, 4.5F, 4.5F
} ;                                    /* Referenced by: '<S26>/Vector' */

static volatile CONST(float32, TITR_VAR_INIT) KtTITR_k_TbCLCmdFilt_Extnl[7] =
{
    0.0F, 0.6F, 1.6F, 2.6F, 4.5F, 4.5F, 4.5F
} ;                                    /* Referenced by: '<S27>/Vector' */

static volatile CONST(float32, TITR_VAR_INIT) KtTITR_k_TcCLCmdFilt_Extnl[7] =
{
    0.0F, 0.6F, 1.6F, 2.6F, 4.5F, 4.5F, 4.5F
} ;                                    /* Referenced by: '<S28>/Vector' */

#if Rte_SysCon_Variant_TITR_FUNC

static volatile CONST(float32, TITR_VAR_INIT) KxTITR_M_TiAdjst_NiErr[16] =
{
    -900.0F, -800.0F, -700.0F, -600.0F, -500.0F, -400.0F, -300.0F, -100.0F, 0.0F,
    204.0F, 307.0F, 406.0F, 511.0F, 601.0F, 724.0F, 821.0F
} ;                                    /* Referenced by: '<S155>/Vector' */

#endif

static volatile CONST(float32, TITR_VAR_INIT) KxTITR_dk_LD_TiSEMBlend[5] =
{
    0.0F, 0.025F, 0.0375F, 0.075F, 0.0875F
} ;                                    /* Referenced by: '<S69>/Vector' */

#if Rte_SysCon_Variant_TITR_FUNC

static volatile CONST(float32, TITR_VAR_INIT) KxTITR_k_InputTorqFilterConst[7] =
{
    -90.0F, -60.0F, -30.0F, 0.0F, 30.0F, 60.0F, 99.0F
} ;                                    /* Referenced by: '<S156>/Vector' */

#endif

static volatile CONST(float32, TITR_VAR_INIT) KxTITR_k_TaCLCmdFilt_Extnl[7] =
{
    0.0F, 380.0F, 1350.0F, 3395.0F, 5400.0F, 7405.0F, 9420.0F
} ;                                    /* Referenced by: '<S26>/Vector' */

static volatile CONST(float32, TITR_VAR_INIT) KxTITR_k_TbCLCmdFilt_Extnl[7] =
{
    0.0F, 380.0F, 1350.0F, 3395.0F, 5400.0F, 7405.0F, 9420.0F
} ;                                    /* Referenced by: '<S27>/Vector' */

static volatile CONST(float32, TITR_VAR_INIT) KxTITR_k_TcCLCmdFilt_Extnl[7] =
{
    0.0F, 380.0F, 1350.0F, 3395.0F, 5400.0F, 7405.0F, 9420.0F
} ;                                    /* Referenced by: '<S28>/Vector' */

#if Rte_SysCon_Variant_TITR_FUNC

static volatile CONST(float32, TITR_VAR_INIT) KyTITR_M_TiAdjst_NiErr[7] =
{
    701.0F, 852.0F, 1060.0F, 1180.0F, 1303.0F, 1401.0F, 1503.0F
} ;                                    /* Referenced by: '<S155>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_TITR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TITR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(boolean, TITR_VAR_INIT) VeHTDC_b_Reset_TaCL;/* '<S14>/Logical2' */
static VAR(boolean, TITR_VAR_INIT) VeHTDC_b_Reset_TbCL;/* '<S14>/Logical1' */
static VAR(boolean, TITR_VAR_INIT) VeHTDC_b_Reset_TcCL;/* '<S14>/Logical3' */
static VAR(float32, TITR_VAR_INIT) VeTITC_M_EngTrqSEMArb;/* '<S39>/MinMax1' */
static VAR(float32, TITR_VAR_INIT) VeTITC_M_EngTrqSEMCmnd;/* '<S39>/Switch2' */
static VAR(float32, TITR_VAR_INIT) VeTITC_M_EngTrqSEMFlt;/* '<S63>/Switch1' */
static VAR(float32, TITR_VAR_INIT) VeTITC_M_EngTrqSEM_EngPot;/* '<S39>/Switch9' */
static VAR(float32, TITR_VAR_INIT) VeTITC_M_TaActDmpCmd_Extnl;/* '<S20>/Switch1' */
static VAR(float32, TITR_VAR_INIT) VeTITC_M_TaCL_LPF_External;/* '<S34>/Switch' */
static VAR(float32, TITR_VAR_INIT) VeTITC_M_TaPulseCmd;/* '<S16>/Switch1' */
static VAR(float32, TITR_VAR_INIT) VeTITC_M_TbActDmpCmd_Extnl;/* '<S21>/Switch1' */
static VAR(float32, TITR_VAR_INIT) VeTITC_M_TbCL_LPF_External;/* '<S35>/Switch' */
static VAR(float32, TITR_VAR_INIT) VeTITC_M_TbPulseCmd;/* '<S17>/Switch1' */
static VAR(float32, TITR_VAR_INIT) VeTITC_M_TcActDmpCmd_Extnl;/* '<S19>/Switch1' */
static VAR(float32, TITR_VAR_INIT) VeTITC_M_TcCL_LPF_External;/* '<S36>/Switch' */
static VAR(float32, TITR_VAR_INIT) VeTITC_M_TcPulseCmd;/* '<S18>/Switch1' */
static VAR(float32, TITR_VAR_INIT) VeTITC_M_TiCombDly;/* '<S40>/Sum2' */
static VAR(float32, TITR_VAR_INIT) VeTITC_M_TiCombDlyErr;/* '<S40>/Sum1' */
static VAR(float32, TITR_VAR_INIT) VeTITC_M_TiLmtedFrmTRAR;/* '<S39>/MinMax' */
static VAR(boolean, TITR_VAR_INIT) VeTITC_b_DisableSEMBlend;/* '<S39>/Logical7' */
static VAR(boolean, TITR_VAR_INIT) VeTITC_b_SEMBlendActv;/* '<S39>/Logical3' */
static VAR(float32, TITR_VAR_INIT) VeTITC_dk_LD_TiSEMBlend;/* '<S69>/Vector' */
static VAR(float32, TITR_VAR_INIT) VeTITC_dn_NidotDelta_ExtFlt;/* '<S8>/MinMax' */
static VAR(float32, TITR_VAR_INIT) VeTITC_k_TiCombFiltCoeff;/* '<S40>/Switch' */
static VAR(float32, TITR_VAR_INIT) VeTITC_k_TiSEMBlendRaw;/* '<S39>/Switch' */
static VAR(float32, TITR_VAR_INIT) VeTITC_t_Sum;/* '<S66>/Switch1' */
static VAR(float32, TITR_VAR_INIT) VeTITR_M_TiBlended;/* '<S39>/Switch11' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TITR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_TITR
#include "MemMap.h"

CONST(ConstP_TITR_ac_T, TITR_VAR_INIT) TITR_ac_ConstP =
{

#if Rte_SysCon_Variant_TITR_FUNC

    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S155>/Vector'
     */
    {
        15U, 6U
    },

#endif

#ifndef CONSTP_TITR_AC_T_VARIANT_EXISTS

    0
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_TITR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TITR
#include "MemMap.h"

VAR(B_TITR_ac_T, TITR_VAR_INIT) TITR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TITR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TITR
#include "MemMap.h"

VAR(DW_TITR_ac_T, TITR_VAR_INIT) TITR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TITR
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, TITR_CODE) TITR_MedTEB(void) /* Explicit Task: MedTEB */
{

#if Rte_SysCon_Variant_TITR_FUNC

    boolean tmpRead;

#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 tmpRead_0[19];

#endif

#if Rte_SysCon_Variant_TITR_FUNC

    boolean tmpRead_1;

#endif

    float32 tmpRead_a[114];
    TeDTRR_e_SumFWIDFst tmpRead_3;
    TeENGR_e_EngDFSO_St tmpRead_6;
    TeTINR_e_TCM_TrqCntrlModeReq tmpRead_5;
    TeTSXR_e_ConstrntType tmpRead_c;
    TeWTAR_e_PedalTrqArb tmpRead_2;
    TeWTAR_e_PedalTrqArb tmpRead_4;
    boolean rtb_TmpSignalConversionAtVeESSR_b_EngStr;
    boolean tmpRead_7;
    boolean tmpRead_8;
    boolean tmpRead_9;
    boolean tmpRead_b;
    boolean tmpRead_d;

#if Rte_SysCon_Variant_TITR_FUNC

    boolean rtb_VM_Conditional_Signal_TransOilTemp_F;

#endif

#if Rte_SysCon_Variant_TITR_FUNC && Rte_SysCon_Variant_TITR_UsePumpTrqAsLoad

    sint16 rtb_IndexUpper;

#endif

#if Rte_SysCon_Variant_TITR_FUNC && Rte_SysCon_Variant_TITR_UsePumpTrqAsLoad

    sint16 rtb_IndexUpper_d;

#endif

#if Rte_SysCon_Variant_TITR_FUNC && Rte_SysCon_Variant_TITR_UsePumpTrqAsLoad

    sint16 rtb_IndexLower_o;

#endif

#if Rte_SysCon_Variant_TITR_FUNC && Rte_SysCon_Variant_TITR_UsePumpTrqAsLoad

    sint16 rtb_IndexLower;

#endif

    float32 rtb_Abs3;
    float32 rtb_Multiplication14;
    float32 rtb_Multiplication15;
    float32 rtb_Multiplication16;
    float32 rtb_Selector2_n;
    float32 rtb_TmpSignalConversionAtVeICSR_M_TcCLOu;
    float32 rtb_VM_Conditional_Signal_InputTrqAirflo;
    boolean rtb_NOT2;
    boolean rtb_NOT3;
    boolean rtb_NOT5;
    boolean rtb_NOT6;
    boolean rtb_RelationalOperator1_m;
    boolean rtb_TmpSignalConversionAtVeVTVR_b_TCM_Fa;
    boolean rtb_TmpSignalConversionAtVeVTVR_b_TrqRtL;

#if Rte_SysCon_Variant_TITR_FUNC

    float32 rtb_TmpSignalConversionAtVeHSER_n_NxOutp;

#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 rtb_TmpSignalConversionAtVeVSDR_n_PrimNo;

#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 rtb_TmpSignalConversionAtVeTISR_n_Inpu_m;

#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 rtb_Merge1;

#endif

#if Rte_SysCon_Variant_TITR_FUNC

    boolean rtb_NotEqual_f;

#endif

    float32 rtb_Add;
    float32 rtb_LeTITC_n_PumpSpd;
    float32 rtb_TmpSignalConversionAtVeTISR_n_InputS;
    boolean rtb_TmpSignalConversionAtVeMTQR_b_Altern;

#if Rte_SysCon_Variant_TITR_FUNC

    float32 rtb_TmpSignalConversionAtVeETQR_M_EngTrq;

#endif

    float32 rtb_Division_e;
    float32 rtb_Switch1_bu;
    float32 rtb_TmpSignalConversionAtVeVTVR_t_EngCom;

#if Rte_SysCon_Variant_TITR_FUNC

    float32 rtb_Vector_m[2];

#endif

    float32 rtb_Subtraction6[2];
    float32 rtb_Subtraction2;
    float32 rtb_TmpSignalConversionAtVeETQR_M_EngT_n;

#if Rte_SysCon_Variant_TITR_FUNC

    TeENGR_e_ETRQ_Mode rtb_TmpSignalConversionAtVeENGR_e_ETRQ_M;

#endif

    float32 rtb_TmpSignalConversionAtVeMTQR_M_MtrA_T;
    TeESSR_e_EngStartStopSt rtb_TmpSignalConversionAtVeESSR_e_EngSta;
    TeHSER_e_SteadyStates rtb_TmpSignalConversionAtVeHSER_e_HTDR_S;
    TeTRAR_e_HybCmndEngTorqRespTyp rtb_TmpSignalConversionAtVeTRAR_e_HybCmn;

#if Rte_SysCon_Variant_TITR_FUNC

    float32 rtb_TmpSignalConversionAtVeMTIR_M_MtrB_T;

#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 rtb_TmpSignalConversionAtVeMTIR_M_MtrC_T;

#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 rtb_TmpSignalConversionAtVeTTQR_M_SumTrq;

#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 rtb_TmpSignalConversionAtVeTCCR_M_TimpOu;

#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 rtb_TmpSignalConversionAtVeHSER_M_Clch1_;

#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 rtb_TmpSignalConversionAtVeHSER_M_Clch2_;

#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 rtb_TmpSignalConversionAtVeHSER_M_Clch3_;

#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 rtb_TmpSignalConversionAtVeHSER_M_Clch4_;

#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 rtb_TmpSignalConversionAtVeHSER_dn_NxDot;

#endif

    float32 VeTITR_M_TaCLSum;
    float32 VeTITR_M_TbCLSum;
    float32 VeTITR_M_TiPrdt;

#if Rte_SysCon_Variant_TITR_FUNC

    sint32 i;

#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 rtb_TmpSignalConversionAtVeMTQR[19];

#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 rtb_VaTITC_M_TiCrrctn;

#endif

#if Rte_SysCon_Variant_TITR_FUNC && Rte_SysCon_Variant_TITR_UsePumpTrqAsLoad

    sint32 rtb_Switch1_mb_tmp;

#endif

#if Rte_SysCon_Variant_TITR_FUNC && Rte_SysCon_Variant_TITR_UsePumpTrqAsLoad

    sint32 rtb_Switch1_mb_tmp_tmp;

#endif

#if Rte_SysCon_Variant_TITR_FUNC && Rte_SysCon_Variant_TITR_UsePumpTrqAsLoad

    sint32 rtb_Switch1_mb_tmp_0;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/TITR_MedTEB'
     */
    /* SignalConversion generated from: '<S1>/VeENGR_e_ETRQ_Mode' incorporates:
     *  SignalConversion generated from: '<S1>/VeESSR_b_EngStrtStpActive'
     *  SignalConversion generated from: '<S1>/VeETQR_M_EngTrqActual'
     *  SignalConversion generated from: '<S1>/VeETQR_M_EngTrqActual_w_CL'
     *  SignalConversion generated from: '<S1>/VeTISR_n_InputSpeed'
     */
#if Rte_SysCon_Variant_TITR_FUNC

    /* SignalConversion generated from: '<S1>/VeENGR_e_ETRQ_Mode' incorporates:
     *  Inport: '<Root>/VeENGR_e_ETRQ_Mode'
     */
    (void)Rte_Read_VeENGR_e_ETRQ_Mode_Value
        (&rtb_TmpSignalConversionAtVeENGR_e_ETRQ_M);

    /* SignalConversion generated from: '<S1>/VeESSR_b_EngStrtStpActive' incorporates:
     *  Inport: '<Root>/VeESSR_b_EngStrtStpActive'
     */
    (void)Rte_Read_VeESSR_b_EngStrtStpActive_Value
        (&rtb_TmpSignalConversionAtVeESSR_b_EngStr);

    /* SignalConversion generated from: '<S1>/VeETQR_M_EngTrqActual' incorporates:
     *  Inport: '<Root>/VeETQR_M_EngTrqActual'
     */
    (void)Rte_Read_VeETQR_M_EngTrqActual_Value
        (&rtb_TmpSignalConversionAtVeETQR_M_EngTrq);

    /* SignalConversion generated from: '<S1>/VeTISR_n_InputSpeed' incorporates:
     *  Inport: '<Root>/VeTISR_n_InputSpeed'
     */
    (void)Rte_Read_VeTISR_n_InputSpeed_Value
        (&rtb_TmpSignalConversionAtVeTISR_n_InputS);

    /* SignalConversion generated from: '<S1>/VeETQR_M_EngTrqActual_w_CL' incorporates:
     *  Inport: '<Root>/VeETQR_M_EngTrqActual_w_CL'
     */
    (void)Rte_Read_VeETQR_M_EngTrqActual_w_CL_Value
        (&rtb_TmpSignalConversionAtVeETQR_M_EngT_n);

#endif

    /* End of SignalConversion generated from: '<S1>/VeENGR_e_ETRQ_Mode' */

    /* SignalConversion generated from: '<S1>/VeHSER_e_HTDR_State' incorporates:
     *  Inport: '<Root>/VeHSER_e_HTDR_State'
     */
    (void)Rte_Read_VeHSER_e_HTDR_State_Value
        (&rtb_TmpSignalConversionAtVeHSER_e_HTDR_S);

    /* SignalConversion generated from: '<S1>/VeHSER_n_Nx' incorporates:
     *  SignalConversion generated from: '<S1>/VeHSER_M_Clch1_TorqEst'
     *  SignalConversion generated from: '<S1>/VeHSER_M_Clch2_TorqEst'
     *  SignalConversion generated from: '<S1>/VeHSER_M_Clch3_TorqEst'
     *  SignalConversion generated from: '<S1>/VeHSER_M_Clch4_TorqEst'
     */
#if Rte_SysCon_Variant_TITR_FUNC

    /* SignalConversion generated from: '<S1>/VeHSER_n_Nx' incorporates:
     *  Inport: '<Root>/VeHSER_n_Nx'
     */
    (void)Rte_Read_VeHSER_n_Nx_Value(&rtb_TmpSignalConversionAtVeHSER_n_NxOutp);

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch1_TorqEst' incorporates:
     *  Inport: '<Root>/VeHSER_M_Clch1_TorqEst'
     */
    (void)Rte_Read_VeHSER_M_Clch1_TorqEst_Value
        (&rtb_TmpSignalConversionAtVeHSER_M_Clch1_);

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch2_TorqEst' incorporates:
     *  Inport: '<Root>/VeHSER_M_Clch2_TorqEst'
     */
    (void)Rte_Read_VeHSER_M_Clch2_TorqEst_Value
        (&rtb_TmpSignalConversionAtVeHSER_M_Clch2_);

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch3_TorqEst' incorporates:
     *  Inport: '<Root>/VeHSER_M_Clch3_TorqEst'
     */
    (void)Rte_Read_VeHSER_M_Clch3_TorqEst_Value
        (&rtb_TmpSignalConversionAtVeHSER_M_Clch3_);

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch4_TorqEst' incorporates:
     *  Inport: '<Root>/VeHSER_M_Clch4_TorqEst'
     */
    (void)Rte_Read_VeHSER_M_Clch4_TorqEst_Value
        (&rtb_TmpSignalConversionAtVeHSER_M_Clch4_);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHSER_n_Nx' */

    /* SignalConversion generated from: '<S1>/VeMTQR_M_MtrA_TorqAchieved' incorporates:
     *  Inport: '<Root>/VeMTQR_M_MtrA_TorqAchieved'
     */
    (void)Rte_Read_VeMTQR_M_MtrA_TorqAchieved_Value
        (&rtb_TmpSignalConversionAtVeMTQR_M_MtrA_T);

    /* SignalConversion generated from: '<S1>/VeMTIR_M_MtrB_TorqAchieved' incorporates:
     *  SignalConversion generated from: '<S1>/VeTCCR_M_Timp'
     *  SignalConversion generated from: '<S1>/VeTISR_n_InputSpeedRaw'
     *  SignalConversion generated from: '<S1>/VeTTQR_M_SumTrqStatic'
     *  SignalConversion generated from: '<S1>/VeVSDR_n_PrimNoSgndFltrd'
     */
#if Rte_SysCon_Variant_TITR_FUNC

    /* SignalConversion generated from: '<S1>/VeMTIR_M_MtrB_TorqAchieved' incorporates:
     *  Inport: '<Root>/VeMTIR_M_MtrB_TorqAchieved'
     */
    (void)Rte_Read_VeMTIR_M_MtrB_TorqAchieved_Value
        (&rtb_TmpSignalConversionAtVeMTIR_M_MtrB_T);

    /* SignalConversion generated from: '<S1>/VeTCCR_M_Timp' incorporates:
     *  Inport: '<Root>/VeTCCR_M_Timp'
     */
    (void)Rte_Read_VeTCCR_M_Timp_Value(&rtb_TmpSignalConversionAtVeTCCR_M_TimpOu);

    /* SignalConversion generated from: '<S1>/VeTISR_n_InputSpeedRaw' incorporates:
     *  Inport: '<Root>/VeTISR_n_InputSpeedRaw'
     */
    (void)Rte_Read_VeTISR_n_InputSpeedRaw_Value
        (&rtb_TmpSignalConversionAtVeTISR_n_Inpu_m);

    /* SignalConversion generated from: '<S1>/VeVSDR_n_PrimNoSgndFltrd' incorporates:
     *  Inport: '<Root>/VeVSDR_n_PrimNoSgndFltrd'
     */
    (void)Rte_Read_VeVSDR_n_PrimNoSgndFltrd_Value
        (&rtb_TmpSignalConversionAtVeVSDR_n_PrimNo);

    /* SignalConversion generated from: '<S1>/VeTTQR_M_SumTrqStatic' incorporates:
     *  Inport: '<Root>/VeTTQR_M_SumTrqStatic'
     */
    (void)Rte_Read_VeTTQR_M_SumTrqStatic_Value
        (&rtb_TmpSignalConversionAtVeTTQR_M_SumTrq);

#endif

    /* End of SignalConversion generated from: '<S1>/VeMTIR_M_MtrB_TorqAchieved' */

    /* SignalConversion generated from: '<S1>/VeESSR_e_EngStartStopSt' incorporates:
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     */
    (void)Rte_Read_VeESSR_e_EngStartStopSt_Value
        (&rtb_TmpSignalConversionAtVeESSR_e_EngSta);

    /* SignalConversion generated from: '<S1>/VeMTIR_M_MtrC_TorqAchieved' incorporates:
     *  SignalConversion generated from: '<S1>/VeHSER_dn_NxDot'
     */
#if Rte_SysCon_Variant_TITR_FUNC

    /* SignalConversion generated from: '<S1>/VeMTIR_M_MtrC_TorqAchieved' incorporates:
     *  Inport: '<Root>/VeMTIR_M_MtrC_TorqAchieved'
     */
    (void)Rte_Read_VeMTIR_M_MtrC_TorqAchieved_Value
        (&rtb_TmpSignalConversionAtVeMTIR_M_MtrC_T);

    /* SignalConversion generated from: '<S1>/VeHSER_dn_NxDot' incorporates:
     *  Inport: '<Root>/VeHSER_dn_NxDot'
     */
    (void)Rte_Read_VeHSER_dn_NxDot_Value
        (&rtb_TmpSignalConversionAtVeHSER_dn_NxDot);

#endif

    /* End of SignalConversion generated from: '<S1>/VeMTIR_M_MtrC_TorqAchieved' */

    /* SignalConversion generated from: '<S1>/VeVTVR_t_EngCombstnDelay' incorporates:
     *  Inport: '<Root>/VeVTVR_t_EngCombstnDelay'
     */
    (void)Rte_Read_VeVTVR_t_EngCombstnDelay_Value
        (&rtb_TmpSignalConversionAtVeVTVR_t_EngCom);

    /* SignalConversion generated from: '<S1>/VeVTVR_b_TrqRtLmtEnbld_SEM' incorporates:
     *  Inport: '<Root>/VeVTVR_b_TrqRtLmtEnbld_SEM'
     */
    (void)Rte_Read_VeVTVR_b_TrqRtLmtEnbld_SEM_Value
        (&rtb_TmpSignalConversionAtVeVTVR_b_TrqRtL);

    /* SignalConversion generated from: '<S1>/VeTRAR_e_HybCmndEngTorqRespTyp' incorporates:
     *  Inport: '<Root>/VeTRAR_e_HybCmndEngTorqRespTyp'
     */
    (void)Rte_Read_VeTRAR_e_HybCmndEngTorqRespTyp_Value
        (&rtb_TmpSignalConversionAtVeTRAR_e_HybCmn);

    /* SignalConversion generated from: '<S1>/VeVTVR_b_TCM_FastReq_DEC' incorporates:
     *  Inport: '<Root>/VeVTVR_b_TCM_FastReq_DEC'
     */
    (void)Rte_Read_VeVTVR_b_TCM_FastReq_DEC_Value
        (&rtb_TmpSignalConversionAtVeVTVR_b_TCM_Fa);

    /* SignalConversion generated from: '<S1>/VeMTQR_b_AlternatorMd_MtrA' incorporates:
     *  Inport: '<Root>/VeMTQR_b_AlternatorMd_MtrA'
     */
    (void)Rte_Read_VeMTQR_b_AlternatorMd_MtrA_Value
        (&rtb_TmpSignalConversionAtVeMTQR_b_Altern);

    /* SignalConversion generated from: '<S1>/VeICSR_M_TcCL' incorporates:
     *  Inport: '<Root>/VeICSR_M_TcCL'
     */
    (void)Rte_Read_VeICSR_M_TcCL_Value(&rtb_TmpSignalConversionAtVeICSR_M_TcCLOu);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/TITC_CalcTiFinal'
     */
    /* SignalConversion generated from: '<S4>/EngTrqStatic_SEM' incorporates:
     *  Inport: '<Root>/VeETQR_M_EngCapacityMax'
     *  Inport: '<Root>/VeETQR_M_EngCapacityMinOff'
     *  Inport: '<Root>/VeETQR_M_EngCapacityMinRun'
     *  Inport: '<Root>/VeETQR_M_EngCapacityMinRunImmedRed'
     *  Inport: '<Root>/VeETQR_M_EngTrqAirflow'
     *  Inport: '<Root>/VeETQR_M_EngTrqStaticSEM'
     *  Inport: '<S7>/EngCapacityMinRun_Immed'
     *  Inport: '<S7>/EngCapacityMin_Off'
     *  Inport: '<S7>/EngCapacityMin_Run'
     *  Inport: '<S7>/EngCapacity_Max'
     *  Inport: '<S7>/EngTrqStaticSEM'
     *  Inport: '<S7>/EngTrq_Airflow'
     */
#if Rte_SysCon_Variant_TITR_FUNC

    /* Outputs for Function Call SubSystem: '<S1>/TITC_InputTorqLimCntrl' */
    (void)Rte_Read_VeETQR_M_EngTrqStaticSEM_Value
        (&TITR_ac_B.VariantMerge_For_Variant_Source_VariantS[7]);
    (void)Rte_Read_VeETQR_M_EngTrqAirflow_Value
        (&TITR_ac_B.VariantMerge_For_Variant_Source_VariantS[3]);
    (void)Rte_Read_VeETQR_M_EngCapacityMinRunImmedRed_Value
        (&TITR_ac_B.VariantMerge_For_Variant_Source_VariantS[5]);
    (void)Rte_Read_VeETQR_M_EngCapacityMinRun_Value
        (&TITR_ac_B.VariantMerge_For_Variant_Source_VariantS[2]);
    (void)Rte_Read_VeETQR_M_EngCapacityMinOff_Value
        (&TITR_ac_B.VariantMerge_For_Variant_Source_VariantS[4]);
    (void)Rte_Read_VeETQR_M_EngCapacityMax_Value
        (&TITR_ac_B.VariantMerge_For_Variant_Source_VariantS[1]);

    /* Outputs for Atomic SubSystem: '<S134>/EngActualTrqSS_Lowpass_Fltr' */
    /* Switch: '<S145>/Switch1' incorporates:
     *  Inport: '<Root>/VeESSR_M_EngTorqEst'
     *  Inport: '<Root>/VeETQR_M_EngCapacityMax'
     *  Inport: '<Root>/VeETQR_M_EngCapacityMinOff'
     *  Inport: '<Root>/VeETQR_M_EngCapacityMinRun'
     *  Inport: '<Root>/VeETQR_M_EngCapacityMinRunImmedRed'
     *  Inport: '<Root>/VeETQR_M_EngTrqAirflow'
     *  Inport: '<Root>/VeETQR_M_EngTrqStaticSEM'
     *  Inport: '<S7>/EngCapacityMinRun_Immed'
     *  Inport: '<S7>/EngCapacityMin_Off'
     *  Inport: '<S7>/EngCapacityMin_Run'
     *  Inport: '<S7>/EngCapacity_Max'
     *  Inport: '<S7>/EngTrqStaticSEM'
     *  Inport: '<S7>/EngTrq_Airflow'
     *  Product: '<S145>/Multiplication'
     *  Sum: '<S145>/Subtraction'
     *  Sum: '<S145>/Summation'
     *  UnitDelay: '<S134>/UnitDelay2'
     *  UnitDelay: '<S145>/UnitDelay'
     */
    if (rtb_TmpSignalConversionAtVeESSR_b_EngStr)
    {
        (void)Rte_Read_VeESSR_M_EngTorqEst_Value(&rtb_Subtraction2);
        for (i = 0; i < 2; i++)
        {
            TITR_ac_DW.UnitDelay2_DSTATE_h[i] = rtb_Subtraction2;
        }
    }
    else
    {
        /* Sum: '<S134>/Subtraction2' incorporates:
         *  Constant: '<S151>/Calib'
         */
        rtb_Subtraction2 = rtb_TmpSignalConversionAtVeETQR_M_EngTrq +
            KeTITR_M_DialEngTorqDevOnly;

        /* Switch: '<S134>/Switch1' incorporates:
         *  Constant: '<S146>/Constant'
         *  RelationalOperator: '<S134>/Comparison4'
         *  SignalConversion generated from: '<S1>/VeENGR_e_ETRQ_Mode'
         */
        if (((uint32)rtb_TmpSignalConversionAtVeENGR_e_ETRQ_M) == CeENGR_e_Idle)
        {
            /* Switch: '<S134>/Switch1' incorporates:
             *  Constant: '<S152>/Calib'
             */
            for (i = 0; i < 2; i++)
            {
                rtb_Vector_m[i] = KeTITR_k_InputTorqFilterECMIdle;
            }

            /* End of Switch: '<S134>/Switch1' */
        }
        else
        {
            /* Sum: '<S134>/Subtraction6' incorporates:
             *  UnitDelay: '<S134>/UnitDelay2'
             */
            rtb_Subtraction6[0] = rtb_Subtraction2 -
                TITR_ac_DW.UnitDelay2_DSTATE_h[0];
            rtb_Subtraction6[1] = rtb_TmpSignalConversionAtVeETQR_M_EngT_n -
                TITR_ac_DW.UnitDelay2_DSTATE_h[1];

            /* Lookup_n-D: '<S156>/Vector' */
            for (i = 0; i < 2; i++)
            {
                rtb_Vector_m[i] = look1_iflf_binlca_16a(rtb_Subtraction6[i], ((
                    const float32 *)&(KxTITR_k_InputTorqFilterConst[0])), ((
                    const float32 *)&(KtTITR_k_InputTorqFilterConst[0])), 6U);
            }

            /* End of Lookup_n-D: '<S156>/Vector' */
        }

        /* End of Switch: '<S134>/Switch1' */
        TITR_ac_DW.UnitDelay2_DSTATE_h[0] = ((rtb_Subtraction2 -
            TITR_ac_DW.UnitDelay_DSTATE_ba[0]) * rtb_Vector_m[0]) +
            TITR_ac_DW.UnitDelay_DSTATE_ba[0];
        TITR_ac_DW.UnitDelay2_DSTATE_h[1] =
            ((rtb_TmpSignalConversionAtVeETQR_M_EngT_n -
              TITR_ac_DW.UnitDelay_DSTATE_ba[1]) * rtb_Vector_m[1]) +
            TITR_ac_DW.UnitDelay_DSTATE_ba[1];
    }

    /* End of Switch: '<S145>/Switch1' */
    for (i = 0; i < 2; i++)
    {
        /* Update for UnitDelay: '<S145>/UnitDelay' incorporates:
         *  UnitDelay: '<S134>/UnitDelay2'
         */
        TITR_ac_DW.UnitDelay_DSTATE_ba[i] = TITR_ac_DW.UnitDelay2_DSTATE_h[i];

        /* MinMax: '<S134>/MinMax1' incorporates:
         *  Constant: '<S134>/ConstantValue'
         *  UnitDelay: '<S134>/UnitDelay2'
         */
        rtb_Subtraction6[i] = fmaxf(TITR_ac_DW.UnitDelay2_DSTATE_h[i], 0.0F);

        /* MinMax: '<S134>/MinMax' incorporates:
         *  Constant: '<S134>/ConstantValue'
         *  UnitDelay: '<S134>/UnitDelay2'
         */
        rtb_Vector_m[i] = fminf(0.0F, TITR_ac_DW.UnitDelay2_DSTATE_h[i]);
    }

    /* End of Outputs for SubSystem: '<S134>/EngActualTrqSS_Lowpass_Fltr' */

    /* Logic: '<S134>/Logical' incorporates:
     *  Constant: '<S147>/Constant'
     *  Constant: '<S150>/Calib'
     *  DataTypeConversion: '<S134>/DataTypeConversion'
     *  Logic: '<S134>/Logical2'
     *  RelationalOperator: '<S134>/Comparison1'
     *  Selector: '<S134>/Selector'
     *  SignalConversion generated from: '<S1>/VeENGR_e_ETRQ_Mode'
     *  SignalConversion generated from: '<S1>/VeHSER_e_HTDR_State'
     */
    rtb_TmpSignalConversionAtVeESSR_b_EngStr = (((((uint32)
        rtb_TmpSignalConversionAtVeENGR_e_ETRQ_M) == CeENGR_e_Idle) &&
        (!rtb_TmpSignalConversionAtVeESSR_b_EngStr)) &&
        (KaTITR_b_EnableTiProtectn[(rtb_TmpSignalConversionAtVeHSER_e_HTDR_S)]));

    /* If: '<S134>/If' */
    if (rtb_TmpSignalConversionAtVeESSR_b_EngStr)
    {
        /* Outputs for IfAction SubSystem: '<S134>/NoLULD' incorporates:
         *  ActionPort: '<S158>/ActionPort'
         */
        /* Merge: '<S134>/Merge' incorporates:
         *  Constant: '<S158>/ConstantValue'
         *  SignalConversion generated from: '<S158>/INC'
         */
        rtb_Subtraction2 = 9999.0F;

        /* Merge: '<S134>/Merge1' incorporates:
         *  Constant: '<S158>/ConstantValue1'
         *  SignalConversion generated from: '<S158>/DEC'
         */
        rtb_Merge1 = -9999.0F;

        /* End of Outputs for SubSystem: '<S134>/NoLULD' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S134>/Cal_LULD' incorporates:
         *  ActionPort: '<S143>/ActionPort'
         */
        /* Merge: '<S134>/Merge' incorporates:
         *  Constant: '<S162>/Calib'
         *  SignalConversion generated from: '<S143>/INC'
         */
        rtb_Subtraction2 = KeTITR_M_EngTrqCrrctnShpd_Incr;

        /* Merge: '<S134>/Merge1' incorporates:
         *  Constant: '<S161>/Calib'
         *  SignalConversion generated from: '<S143>/DEC'
         */
        rtb_Merge1 = KeTITR_M_EngTrqCrrctnShpd_Decr;

        /* End of Outputs for SubSystem: '<S134>/Cal_LULD' */
    }

    /* End of If: '<S134>/If' */

    /* Outputs for Atomic SubSystem: '<S134>/EdgeBi' */
    /* RelationalOperator: '<S144>/NotEqual' incorporates:
     *  UnitDelay: '<S144>/UnitDelay'
     */
    rtb_NotEqual_f = (rtb_TmpSignalConversionAtVeESSR_b_EngStr !=
                      TITR_ac_DW.UnitDelay_DSTATE_fu);

    /* Update for UnitDelay: '<S144>/UnitDelay' */
    TITR_ac_DW.UnitDelay_DSTATE_fu = rtb_TmpSignalConversionAtVeESSR_b_EngStr;

    /* End of Outputs for SubSystem: '<S134>/EdgeBi' */

    /* Switch: '<S142>/Switch2' incorporates:
     *  Switch: '<S134>/Switch2'
     *  Switch: '<S142>/Switch3'
     *  UnitDelay: '<S134>/UnitDelay'
     *  UnitDelay: '<S142>/UnitDelay'
     */
    if (rtb_NotEqual_f)
    {
        TITR_ac_DW.UnitDelay_DSTATE_fi = TITR_ac_DW.UnitDelay_DSTATE_j2;

        /* Switch: '<S142>/Switch1' incorporates:
         *  Constant: '<S142>/ConstantValue4'
         *  UnitDelay: '<S134>/UnitDelay'
         *  UnitDelay: '<S142>/UnitDelay'
         *  UnitDelay: '<S142>/UnitDelay3'
         */
        TITR_ac_DW.UnitDelay3_DSTATE_n = 0.0F;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeESSR_b_EngStr)
        {
            /* Switch: '<S134>/Switch2' incorporates:
             *  Constant: '<S153>/Calib'
             */
            rtb_TmpSignalConversionAtVeETQR_M_EngT_n =
                KeTITR_t_UndershootBlendInTime;
        }
        else
        {
            /* Switch: '<S134>/Switch2' incorporates:
             *  Constant: '<S154>/Calib'
             */
            rtb_TmpSignalConversionAtVeETQR_M_EngT_n =
                KeTITR_t_UndershootBlendOutTime;
        }

        /* MinMax: '<S142>/Maximum' incorporates:
         *  Constant: '<S149>/Calib'
         */
        rtb_TmpSignalConversionAtVeETQR_M_EngT_n = fmaxf(HeTITR_t_12p5_dT,
            rtb_TmpSignalConversionAtVeETQR_M_EngT_n);

        /* Outputs for Atomic SubSystem: '<S142>/ProtectedDivision' */
        /* Switch: '<S160>/Switch1' incorporates:
         *  Constant: '<S149>/Calib'
         *  Constant: '<S160>/ConstantValue'
         *  Constant: '<S160>/ConstantValue1'
         *  Constant: '<S160>/ConstantValue2'
         *  Constant: '<S160>/ConstantValue3'
         *  Logic: '<S160>/AND'
         *  RelationalOperator: '<S160>/GreaterThanorEqual'
         *  RelationalOperator: '<S160>/GreaterThanorEqual1'
         *  RelationalOperator: '<S160>/NotEqual'
         *  RelationalOperator: '<S160>/NotEqual1'
         *  Switch: '<S160>/Switch2'
         *  Switch: '<S160>/Switch3'
         */
        if ((HeTITR_t_12p5_dT != 0.0F) &&
                (rtb_TmpSignalConversionAtVeETQR_M_EngT_n != 0.0F))
        {
            /* Switch: '<S160>/Switch1' incorporates:
             *  Product: '<S160>/Division'
             */
            rtb_TmpSignalConversionAtVeETQR_M_EngT_n = HeTITR_t_12p5_dT /
                rtb_TmpSignalConversionAtVeETQR_M_EngT_n;
        }
        else if (HeTITR_t_12p5_dT > 0.0F)
        {
            /* Switch: '<S160>/Switch2' incorporates:
             *  Constant: '<S160>/MAXFLOAT'
             *  Switch: '<S160>/Switch1'
             */
            rtb_TmpSignalConversionAtVeETQR_M_EngT_n = 3.402823466E+38F;
        }
        else if (HeTITR_t_12p5_dT < 0.0F)
        {
            /* Switch: '<S160>/Switch3' incorporates:
             *  Constant: '<S160>/MINFLOAT'
             *  Switch: '<S160>/Switch1'
             *  Switch: '<S160>/Switch2'
             */
            rtb_TmpSignalConversionAtVeETQR_M_EngT_n = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S160>/Switch1' incorporates:
             *  Constant: '<S160>/ConstantValue4'
             *  Switch: '<S160>/Switch2'
             *  Switch: '<S160>/Switch3'
             */
            rtb_TmpSignalConversionAtVeETQR_M_EngT_n = 0.0F;
        }

        /* End of Switch: '<S160>/Switch1' */
        /* End of Outputs for SubSystem: '<S142>/ProtectedDivision' */

        /* Switch: '<S142>/Switch1' incorporates:
         *  Constant: '<S142>/ConstantValue2'
         *  Constant: '<S142>/ConstantValue3'
         *  MinMax: '<S142>/MinMax'
         *  Sum: '<S142>/Summation1'
         *  UnitDelay: '<S142>/UnitDelay1'
         *  UnitDelay: '<S142>/UnitDelay3'
         */
        if (!TITR_ac_DW.UnitDelay1_DSTATE_c)
        {
            TITR_ac_DW.UnitDelay3_DSTATE_n = 1.0F;
        }

        TITR_ac_DW.UnitDelay3_DSTATE_n = fminf(TITR_ac_DW.UnitDelay3_DSTATE_n +
            rtb_TmpSignalConversionAtVeETQR_M_EngT_n, 1.0F);
    }

    /* End of Switch: '<S142>/Switch2' */

    /* Switch: '<S134>/Switch3' incorporates:
     *  Inport: '<Root>/VeICSR_n_NiErr_out'
     */
    if (rtb_TmpSignalConversionAtVeESSR_b_EngStr)
    {
        (void)Rte_Read_VeICSR_n_NiErr_out_Value(&rtb_Add);

        /* VariantMerge generated from: '<S7>/TransMnPress_Cmd' incorporates:
         *  Inport: '<Root>/VeICSR_n_NiErr_out'
         *  Lookup_n-D: '<S155>/Vector'
         *  SignalConversion generated from: '<S1>/VeTISR_n_InputSpeed'
         */
        rtb_TmpSignalConversionAtVeETQR_M_EngT_n = look2_iflf_binlca_16a(rtb_Add,
            rtb_TmpSignalConversionAtVeTISR_n_InputS, ((const float32 *)
            &(KxTITR_M_TiAdjst_NiErr[0])), ((const float32 *)
            &(KyTITR_M_TiAdjst_NiErr[0])), ((const float32 *)
            &(KtTITR_M_TiAdjst_NiErr[0])), TITR_ac_ConstP.Vector_maxIndex, 16U);
    }
    else
    {
        /* VariantMerge generated from: '<S7>/TransMnPress_Cmd' incorporates:
         *  Constant: '<S134>/ConstantValue1'
         */
        rtb_TmpSignalConversionAtVeETQR_M_EngT_n = 0.0F;
    }

    /* End of Switch: '<S134>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S134>/GradientLimiter1' */
    /* Switch: '<S169>/Switch1' incorporates:
     *  UnitDelay: '<S148>/UnitDelay'
     */
    rtb_Add = TITR_ac_DW.UnitDelay_DSTATE_di;

    /* Sum: '<S148>/Sum2' incorporates:
     *  Constant: '<S142>/ConstantValue'
     *  Product: '<S142>/Multiplication'
     *  Product: '<S142>/Multiplication3'
     *  Sum: '<S142>/Subtraction'
     *  Sum: '<S142>/Summation'
     *  UnitDelay: '<S142>/UnitDelay'
     *  UnitDelay: '<S142>/UnitDelay3'
     *  UnitDelay: '<S148>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeETQR_M_EngT_n = (((1.0F -
        TITR_ac_DW.UnitDelay3_DSTATE_n) * TITR_ac_DW.UnitDelay_DSTATE_fi) +
        (TITR_ac_DW.UnitDelay3_DSTATE_n *
         rtb_TmpSignalConversionAtVeETQR_M_EngT_n)) -
        TITR_ac_DW.UnitDelay_DSTATE_di;

    /* Outputs for Atomic SubSystem: '<S148>/Limiter' */
    /* Switch: '<S163>/Switch1' incorporates:
     *  RelationalOperator: '<S163>/RelationalOperator'
     */
    if (rtb_Subtraction2 < rtb_TmpSignalConversionAtVeETQR_M_EngT_n)
    {
        /* VariantMerge generated from: '<S7>/TransMnPress_Cmd' */
        rtb_TmpSignalConversionAtVeETQR_M_EngT_n = rtb_Subtraction2;
    }

    /* End of Switch: '<S163>/Switch1' */

    /* Switch: '<S163>/Switch' incorporates:
     *  RelationalOperator: '<S163>/RelationalOperator1'
     */
    if (rtb_TmpSignalConversionAtVeETQR_M_EngT_n > rtb_Merge1)
    {
        rtb_Merge1 = rtb_TmpSignalConversionAtVeETQR_M_EngT_n;
    }

    /* End of Switch: '<S163>/Switch' */
    /* End of Outputs for SubSystem: '<S148>/Limiter' */

    /* Sum: '<S148>/Sum3' incorporates:
     *  UnitDelay: '<S134>/UnitDelay'
     *  UnitDelay: '<S148>/UnitDelay'
     */
    TITR_ac_DW.UnitDelay_DSTATE_j2 = rtb_Merge1 + TITR_ac_DW.UnitDelay_DSTATE_di;

    /* Update for UnitDelay: '<S148>/UnitDelay' incorporates:
     *  UnitDelay: '<S134>/UnitDelay'
     */
    TITR_ac_DW.UnitDelay_DSTATE_di = TITR_ac_DW.UnitDelay_DSTATE_j2;

    /* End of Outputs for SubSystem: '<S134>/GradientLimiter1' */

    /* Outputs for Atomic SubSystem: '<S134>/Limiter' */
    for (i = 0; i < 2; i++)
    {
        rtb_Subtraction2 = rtb_Subtraction6[i];
        rtb_Merge1 = rtb_Vector_m[i];

        /* Sum: '<S134>/Subtraction1' incorporates:
         *  RelationalOperator: '<S157>/RelationalOperator'
         *  RelationalOperator: '<S157>/RelationalOperator1'
         *  UnitDelay: '<S134>/UnitDelay'
         *  UnitDelay: '<S134>/UnitDelay2'
         */
        rtb_VaTITC_M_TiCrrctn = TITR_ac_DW.UnitDelay2_DSTATE_h[i] -
            TITR_ac_DW.UnitDelay_DSTATE_j2;

        /* Switch: '<S157>/Switch1' incorporates:
         *  RelationalOperator: '<S157>/RelationalOperator'
         */
        if (rtb_Subtraction2 >= rtb_VaTITC_M_TiCrrctn)
        {
            /* Sum: '<S134>/Subtraction3' */
            rtb_Subtraction2 = rtb_VaTITC_M_TiCrrctn;
        }

        /* End of Switch: '<S157>/Switch1' */

        /* Switch: '<S157>/Switch' incorporates:
         *  RelationalOperator: '<S157>/RelationalOperator1'
         */
        if (rtb_Subtraction2 > rtb_Merge1)
        {
            /* Switch: '<S157>/Switch' */
            rtb_Merge1 = rtb_Subtraction2;
        }

        /* End of Switch: '<S157>/Switch' */
        rtb_Vector_m[i] = rtb_Merge1;
        rtb_Subtraction6[i] = rtb_Subtraction2;
    }

    /* End of Outputs for SubSystem: '<S134>/Limiter' */

    /* SignalConversion generated from: '<S7>/TransMnPress_Cmd' incorporates:
     *  RelationalOperator: '<S157>/RelationalOperator'
     *  RelationalOperator: '<S157>/RelationalOperator1'
     *  Sum: '<S134>/Subtraction3'
     *  Switch: '<S157>/Switch'
     */
#if Rte_SysCon_Variant_TITR_FUNC && Rte_SysCon_Variant_TITR_UsePumpTrqAsLoad

    /* VariantMerge generated from: '<S7>/TransMnPress_Cmd' incorporates:
     *  Inport: '<Root>/VeHCCR_p_TransMnPressCmd'
     */
    (void)Rte_Read_VeHCCR_p_TransMnPressCmd_Value
        (&rtb_TmpSignalConversionAtVeETQR_M_EngT_n);

#elif !Rte_SysCon_Variant_TITR_FUNC || !Rte_SysCon_Variant_TITR_UsePumpTrqAsLoad

    /* VariantMerge generated from: '<S7>/TransMnPress_Cmd' incorporates:
     *  SignalConversion generated from: '<S7>/TransMnPress_Cmd'
     */
    rtb_TmpSignalConversionAtVeETQR_M_EngT_n = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S7>/TransMnPress_Cmd' */

    /* Product: '<S136>/Multiplication' incorporates:
     *  Chart: '<S173>/Index_Search'
     *  Constant: '<S131>/Calib'
     */
#if Rte_SysCon_Variant_TITR_UsePumpTrqAsLoad

    /* Product: '<S136>/Multiplication' incorporates:
     *  Constant: '<S132>/Calib'
     */
    rtb_LeTITC_n_PumpSpd = rtb_TmpSignalConversionAtVeTISR_n_InputS *
        KeTITR_K_EVT_PTO_GrRat;

    /* Gateway: TITR_Dynamic1DBSearch12pts/Index_Search */
    /* During: TITR_Dynamic1DBSearch12pts/Index_Search */
    /* Entry Internal: TITR_Dynamic1DBSearch12pts/Index_Search */
    /* Transition: '<S175>:17' */
    if (rtb_LeTITC_n_PumpSpd >= KaTITR_n_PumpSpdAxis[6])
    {
        /* Transition: '<S175>:13' */
        /* Transition: '<S175>:19' */
        if (rtb_LeTITC_n_PumpSpd >= KaTITR_n_PumpSpdAxis[9])
        {
            /* Transition: '<S175>:26' */
            /* Transition: '<S175>:7' */
            if (rtb_LeTITC_n_PumpSpd >= KaTITR_n_PumpSpdAxis[10])
            {
                /* Transition: '<S175>:9' */
                /* Transition: '<S175>:12' */
                rtb_IndexUpper = 11;
                rtb_IndexLower = 10;

                /* Transition: '<S175>:11' */
            }
            else
            {
                /* Transition: '<S175>:32' */
                rtb_IndexUpper = 10;
                rtb_IndexLower = 9;
            }

            /* Transition: '<S175>:8' */
            /* Transition: '<S175>:30' */
        }
        else
        {
            /* Transition: '<S175>:5' */
            if (rtb_LeTITC_n_PumpSpd >= KaTITR_n_PumpSpdAxis[7])
            {
                /* Transition: '<S175>:14' */
                if (rtb_LeTITC_n_PumpSpd >= KaTITR_n_PumpSpdAxis[8])
                {
                    /* Transition: '<S175>:18' */
                    /* Transition: '<S175>:33' */
                    rtb_IndexUpper = 9;
                    rtb_IndexLower = 8;

                    /* Transition: '<S175>:35' */
                }
                else
                {
                    /* Transition: '<S175>:2' */
                    rtb_IndexUpper = 8;
                    rtb_IndexLower = 7;
                }

                /* Transition: '<S175>:23' */
            }
            else
            {
                /* Transition: '<S175>:21' */
                rtb_IndexUpper = 7;
                rtb_IndexLower = 6;
            }

            /* Transition: '<S175>:28' */
        }

        /* Transition: '<S175>:31' */
        /* Transition: '<S175>:16' */
    }
    else
    {
        /* Transition: '<S175>:43' */
        if (rtb_LeTITC_n_PumpSpd >= KaTITR_n_PumpSpdAxis[3])
        {
            /* Transition: '<S175>:39' */
            /* Transition: '<S175>:51' */
            if (rtb_LeTITC_n_PumpSpd >= KaTITR_n_PumpSpdAxis[4])
            {
                /* Transition: '<S175>:49' */
                if (rtb_LeTITC_n_PumpSpd >= KaTITR_n_PumpSpdAxis[5])
                {
                    /* Transition: '<S175>:6' */
                    /* Transition: '<S175>:54' */
                    rtb_IndexUpper = 6;
                    rtb_IndexLower = 5;

                    /* Transition: '<S175>:53' */
                }
                else
                {
                    /* Transition: '<S175>:47' */
                    rtb_IndexUpper = 5;
                    rtb_IndexLower = 4;
                }

                /* Transition: '<S175>:48' */
            }
            else
            {
                /* Transition: '<S175>:36' */
                rtb_IndexUpper = 4;
                rtb_IndexLower = 3;
            }

            /* Transition: '<S175>:50' */
            /* Transition: '<S175>:38' */
        }
        else
        {
            /* Transition: '<S175>:52' */
            if (rtb_LeTITC_n_PumpSpd >= KaTITR_n_PumpSpdAxis[1])
            {
                /* Transition: '<S175>:46' */
                if (rtb_LeTITC_n_PumpSpd >= KaTITR_n_PumpSpdAxis[2])
                {
                    /* Transition: '<S175>:41' */
                    /* Transition: '<S175>:42' */
                    rtb_IndexUpper = 3;
                    rtb_IndexLower = 2;

                    /* Transition: '<S175>:55' */
                }
                else
                {
                    /* Transition: '<S175>:34' */
                    rtb_IndexUpper = 2;
                    rtb_IndexLower = 1;
                }

                /* Transition: '<S175>:44' */
            }
            else
            {
                /* Transition: '<S175>:45' */
                rtb_IndexUpper = 1;
                rtb_IndexLower = 0;
            }

            /* Transition: '<S175>:40' */
        }

        /* Transition: '<S175>:37' */
    }

    /* Transition: '<S175>:1' */
    rtb_TmpSignalConversionAtVeTISR_n_InputS = KaTITR_n_PumpSpdAxis
        [(rtb_IndexUpper)] - KaTITR_n_PumpSpdAxis[(rtb_IndexLower)];
    if (rtb_TmpSignalConversionAtVeTISR_n_InputS <= 0.0F)
    {
        /* Transition: '<S175>:4' */
        /* Transition: '<S175>:20' */
        /* Transition: '<S175>:15' */
        /* Transition: '<S175>:10' */
        rtb_LeTITC_n_PumpSpd = 1.0F;

        /* Transition: '<S175>:3' */
    }
    else
    {
        /* Transition: '<S175>:29' */
        rtb_LeTITC_n_PumpSpd = (rtb_LeTITC_n_PumpSpd - KaTITR_n_PumpSpdAxis
                                [(rtb_IndexLower)]) /
            rtb_TmpSignalConversionAtVeTISR_n_InputS;
        if (rtb_LeTITC_n_PumpSpd < 0.0F)
        {
            /* Transition: '<S175>:25' */
            /* Transition: '<S175>:15' */
            /* Transition: '<S175>:10' */
            rtb_LeTITC_n_PumpSpd = 1.0F;

            /* Transition: '<S175>:3' */
        }
        else
        {
            /* Transition: '<S175>:27' */
            if (rtb_LeTITC_n_PumpSpd > 1.0F)
            {
                /* Transition: '<S175>:24' */
                /* Transition: '<S175>:10' */
                rtb_LeTITC_n_PumpSpd = 1.0F;

                /* Transition: '<S175>:3' */
            }
            else
            {
                /* Transition: '<S175>:22' */
            }
        }
    }

#endif

    /* End of Product: '<S136>/Multiplication' */

    /* SignalConversion generated from: '<S7>/TransOilTemp_FA' incorporates:
     *  SignalConversion generated from: '<S7>/TransOil_Temp'
     * */
#if Rte_SysCon_Variant_TITR_FUNC && Rte_SysCon_Variant_TITR_UsePumpTrqAsLoad

    /* VariantMerge generated from: '<S7>/TransOilTemp_FA' incorporates:
     *  Inport: '<Root>/VeTFTR_b_TransOilTempFA'
     */
    (void)Rte_Read_VeTFTR_b_TransOilTempFA_Value
        (&rtb_VM_Conditional_Signal_TransOilTemp_F);

    /* Switch: '<S169>/Switch1' incorporates:
     *  Inport: '<Root>/VeTFTR_T_TransOilTemp'
     */
    (void)Rte_Read_VeTFTR_T_TransOilTemp_Value(&rtb_Add);

#elif !Rte_SysCon_Variant_TITR_FUNC || !Rte_SysCon_Variant_TITR_UsePumpTrqAsLoad

    /* VariantMerge generated from: '<S7>/TransOilTemp_FA' incorporates:
     *  SignalConversion generated from: '<S7>/TransOilTemp_FA'
     */
    rtb_VM_Conditional_Signal_TransOilTemp_F = false;

    /* Switch: '<S169>/Switch1' incorporates:
     *  SignalConversion generated from: '<S7>/TransOil_Temp'
     */
    rtb_Add = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S7>/TransOilTemp_FA' */

    /* Outputs for Atomic SubSystem: '<S137>/Limiter' */
    /* Switch: '<S138>/Switch' incorporates:
     *  Chart: '<S172>/Index_Search'
     *  Constant: '<S128>/Calib'
     *  Constant: '<S129>/Calib'
     *  Constant: '<S130>/Calib'
     *  Gain: '<S139>/Gain'
     *  Gain: '<S140>/Gain'
     *  Gain: '<S141>/Gain'
     *  Gain: '<S164>/Gain'
     *  Gain: '<S165>/Gain'
     *  Product: '<S137>/Product'
     *  Product: '<S170>/Multiplication'
     *  Product: '<S170>/Multiplication1'
     *  Product: '<S170>/Multiplication2'
     *  Product: '<S171>/Multiplication'
     *  Product: '<S171>/Multiplication1'
     *  Product: '<S171>/Multiplication2'
     *  Selector: '<S170>/Selector1'
     *  Selector: '<S170>/Selector2'
     *  Selector: '<S170>/Selector3'
     *  Selector: '<S170>/Selector4'
     *  Selector: '<S171>/Selector1'
     *  Selector: '<S171>/Selector2'
     *  Selector: '<S171>/Selector3'
     *  Selector: '<S171>/Selector4'
     *  Sum: '<S133>/Subtraction'
     *  Sum: '<S133>/Subtraction1'
     *  Sum: '<S133>/Subtraction2'
     *  Sum: '<S133>/Subtraction3'
     *  Sum: '<S133>/Subtraction4'
     *  Sum: '<S133>/Subtraction5'
     *  Sum: '<S133>/Subtraction6'
     *  Sum: '<S137>/Add'
     *  Sum: '<S170>/Subtraction3'
     *  Sum: '<S170>/Subtraction4'
     *  Sum: '<S170>/Subtraction5'
     *  Sum: '<S170>/Subtraction6'
     *  Sum: '<S170>/Subtraction7'
     *  Sum: '<S170>/Subtraction8'
     *  Sum: '<S171>/Subtraction3'
     *  Sum: '<S171>/Subtraction4'
     *  Sum: '<S171>/Subtraction5'
     *  Sum: '<S171>/Subtraction6'
     *  Sum: '<S171>/Subtraction7'
     *  Sum: '<S171>/Subtraction8'
     */
#if Rte_SysCon_Variant_TITR_UsePumpTrqAsLoad

    if (rtb_VM_Conditional_Signal_TransOilTemp_F)
    {
        /* Switch: '<S138>/Switch' incorporates:
         *  Constant: '<S138>/ConstantValue'
         */
        rtb_Add = 50.0F;
    }

    /* Gateway: TITR_Dynamic1DBSearch07pts/Index_Search */
    /* During: TITR_Dynamic1DBSearch07pts/Index_Search */
    /* Entry Internal: TITR_Dynamic1DBSearch07pts/Index_Search */
    /* Transition: '<S174>:17' */
    if (rtb_Add >= KaTITR_T_SumpOilTempAxis[3])
    {
        /* Transition: '<S174>:9' */
        /* Transition: '<S174>:31' */
        if (rtb_Add >= KaTITR_T_SumpOilTempAxis[4])
        {
            /* Transition: '<S174>:28' */
            if (rtb_Add >= KaTITR_T_SumpOilTempAxis[5])
            {
                /* Transition: '<S174>:6' */
                /* Transition: '<S174>:2' */
                rtb_IndexUpper_d = 6;
                rtb_IndexLower_o = 5;

                /* Transition: '<S174>:16' */
            }
            else
            {
                /* Transition: '<S174>:23' */
                rtb_IndexUpper_d = 5;
                rtb_IndexLower_o = 4;
            }

            /* Transition: '<S174>:26' */
        }
        else
        {
            /* Transition: '<S174>:5' */
            rtb_IndexUpper_d = 4;
            rtb_IndexLower_o = 3;
        }

        /* Transition: '<S174>:30' */
        /* Transition: '<S174>:8' */
    }
    else
    {
        /* Transition: '<S174>:32' */
        if (rtb_Add >= KaTITR_T_SumpOilTempAxis[1])
        {
            /* Transition: '<S174>:21' */
            if (rtb_Add >= KaTITR_T_SumpOilTempAxis[2])
            {
                /* Transition: '<S174>:12' */
                /* Transition: '<S174>:14' */
                rtb_IndexUpper_d = 3;
                rtb_IndexLower_o = 2;

                /* Transition: '<S174>:13' */
            }
            else
            {
                /* Transition: '<S174>:7' */
                rtb_IndexUpper_d = 2;
                rtb_IndexLower_o = 1;
            }

            /* Transition: '<S174>:18' */
        }
        else
        {
            /* Transition: '<S174>:19' */
            rtb_IndexUpper_d = 1;
            rtb_IndexLower_o = 0;
        }

        /* Transition: '<S174>:11' */
    }

    /* Transition: '<S174>:1' */
    rtb_TmpSignalConversionAtVeTISR_n_InputS = KaTITR_T_SumpOilTempAxis
        [(rtb_IndexUpper_d)] - KaTITR_T_SumpOilTempAxis[(rtb_IndexLower_o)];
    if (rtb_TmpSignalConversionAtVeTISR_n_InputS <= 0.0F)
    {
        /* Transition: '<S174>:4' */
        /* Transition: '<S174>:20' */
        /* Transition: '<S174>:15' */
        /* Transition: '<S174>:10' */
        rtb_TmpSignalConversionAtVeTISR_n_InputS = 1.0F;

        /* Transition: '<S174>:3' */
    }
    else
    {
        /* Transition: '<S174>:29' */
        rtb_TmpSignalConversionAtVeTISR_n_InputS = (rtb_Add -
            KaTITR_T_SumpOilTempAxis[(rtb_IndexLower_o)]) /
            rtb_TmpSignalConversionAtVeTISR_n_InputS;
        if (rtb_TmpSignalConversionAtVeTISR_n_InputS < 0.0F)
        {
            /* Transition: '<S174>:25' */
            /* Transition: '<S174>:15' */
            /* Transition: '<S174>:10' */
            rtb_TmpSignalConversionAtVeTISR_n_InputS = 1.0F;

            /* Transition: '<S174>:3' */
        }
        else
        {
            /* Transition: '<S174>:27' */
            if (rtb_TmpSignalConversionAtVeTISR_n_InputS > 1.0F)
            {
                /* Transition: '<S174>:24' */
                /* Transition: '<S174>:10' */
                rtb_TmpSignalConversionAtVeTISR_n_InputS = 1.0F;

                /* Transition: '<S174>:3' */
            }
            else
            {
                /* Transition: '<S174>:22' */
            }
        }
    }

    rtb_Switch1_mb_tmp_tmp = 12 * ((sint32)rtb_IndexLower_o);
    i = rtb_Switch1_mb_tmp_tmp + ((sint32)rtb_IndexLower);
    rtb_Add = KaTITR_k_PmpTorqSlope[(i)];
    rtb_Switch1_mb_tmp = 12 * ((sint32)rtb_IndexUpper_d);
    rtb_Switch1_mb_tmp_0 = rtb_Switch1_mb_tmp + ((sint32)rtb_IndexLower);

    /* Switch: '<S169>/Switch1' incorporates:
     *  Constant: '<S128>/Calib'
     *  Constant: '<S129>/Calib'
     *  Constant: '<S130>/Calib'
     */
    rtb_Add += (KaTITR_k_PmpTorqSlope[(rtb_Switch1_mb_tmp_0)] - rtb_Add) *
        rtb_TmpSignalConversionAtVeTISR_n_InputS;
    rtb_Switch1_mb_tmp_tmp += (sint32)rtb_IndexUpper;
    rtb_Subtraction2 = KaTITR_k_PmpTorqSlope[(rtb_Switch1_mb_tmp_tmp)];
    rtb_Switch1_mb_tmp += (sint32)rtb_IndexUpper;

    /* Sum: '<S171>/Subtraction8' incorporates:
     *  Constant: '<S129>/Calib'
     *  Constant: '<S130>/Calib'
     */
    rtb_Subtraction2 = (((((KaTITR_k_PmpTorqSlope[(rtb_Switch1_mb_tmp)] -
                            rtb_Subtraction2) *
                           rtb_TmpSignalConversionAtVeTISR_n_InputS) +
                          rtb_Subtraction2) - rtb_Add) * rtb_LeTITC_n_PumpSpd) +
        rtb_Add;
    rtb_Add = KaTITR_k_PmpTorqOffset[(i)];

    /* Switch: '<S169>/Switch1' incorporates:
     *  Constant: '<S129>/Calib'
     */
    rtb_Add += (KaTITR_k_PmpTorqOffset[(rtb_Switch1_mb_tmp_0)] - rtb_Add) *
        rtb_TmpSignalConversionAtVeTISR_n_InputS;
    rtb_Merge1 = KaTITR_k_PmpTorqOffset[(rtb_Switch1_mb_tmp_tmp)];

    /* Sum: '<S137>/Add' incorporates:
     *  Constant: '<S129>/Calib'
     */
    rtb_Add = ((((((KaTITR_k_PmpTorqOffset[(rtb_Switch1_mb_tmp)] - rtb_Merge1) *
                   rtb_TmpSignalConversionAtVeTISR_n_InputS) + rtb_Merge1) -
                 rtb_Add) * rtb_LeTITC_n_PumpSpd) + rtb_Add) +
        (rtb_TmpSignalConversionAtVeETQR_M_EngT_n * rtb_Subtraction2);

    /* Switch: '<S169>/Switch1' incorporates:
     *  Constant: '<S167>/Calib'
     *  RelationalOperator: '<S169>/RelationalOperator'
     */
    if (KeTITR_M_PumpTorqueMax < rtb_Add)
    {
        /* Switch: '<S169>/Switch1' */
        rtb_Add = KeTITR_M_PumpTorqueMax;
    }

    /* End of Switch: '<S169>/Switch1' */

    /* Switch: '<S169>/Switch' incorporates:
     *  Constant: '<S168>/Calib'
     *  RelationalOperator: '<S169>/RelationalOperator1'
     */
    if (rtb_Add <= KeTITR_M_PumpTorqueMin)
    {
        /* Switch: '<S169>/Switch' */
        rtb_Add = KeTITR_M_PumpTorqueMin;
    }

    /* End of Switch: '<S169>/Switch' */

    /* Sum: '<S134>/Subtraction3' */
    for (i = 0; i < 2; i++)
    {
        rtb_Subtraction6[i] = rtb_Vector_m[i] - rtb_Add;
    }

    TITR_ac_B.VariantMerge_For_Variant_Source_VariantS[0] = rtb_Subtraction6[0];
    TITR_ac_B.VariantMerge_For_Variant_Source_VariantS[1] -= rtb_Add;
    TITR_ac_B.VariantMerge_For_Variant_Source_VariantS[2] -= rtb_Add;
    TITR_ac_B.VariantMerge_For_Variant_Source_VariantS[3] -= rtb_Add;
    TITR_ac_B.VariantMerge_For_Variant_Source_VariantS[4] -= rtb_Add;
    TITR_ac_B.VariantMerge_For_Variant_Source_VariantS[5] -= rtb_Add;
    TITR_ac_B.VariantMerge_For_Variant_Source_VariantS[6] = rtb_Add;
    TITR_ac_B.VariantMerge_For_Variant_Source_VariantS[7] -= rtb_Add;
    TITR_ac_B.VariantMerge_For_Variant_Source_VariantS[8] = rtb_Subtraction6[1];

#else

    /* Gain: '<S165>/Gain' */
    TITR_ac_B.VariantMerge_For_Variant_Source_VariantS[0] = rtb_Vector_m[0];

    /* Gain: '<S164>/Gain' */
    TITR_ac_B.VariantMerge_For_Variant_Source_VariantS[8] = rtb_Vector_m[1];

#endif

    /* End of Switch: '<S138>/Switch' */
    /* End of Outputs for SubSystem: '<S137>/Limiter' */

    /* SignalConversion generated from: '<S7>/InputTorqAct_wCL' */
    TITR_ac_B.OutportBufferForInputTorqAct_wCL =
        TITR_ac_B.VariantMerge_For_Variant_Source_VariantS[8];

    /* SignalConversion generated from: '<S7>/InputTrqAirflow' */
    TITR_ac_B.OutportBufferForInputTrqAirflow =
        TITR_ac_B.VariantMerge_For_Variant_Source_VariantS[3];

    /* SignalConversion generated from: '<S7>/InputTrqCapacityMinOff' */
    TITR_ac_B.OutportBufferForInputTrqCapacityMinOff =
        TITR_ac_B.VariantMerge_For_Variant_Source_VariantS[4];

    /* SignalConversion generated from: '<S7>/InputTrqCapacityMinRunImmed' */
    TITR_ac_B.OutportBufferForInputTrqCapacityMinRunIm =
        TITR_ac_B.VariantMerge_For_Variant_Source_VariantS[5];

    /* SignalConversion generated from: '<S7>/InputTrqMax' */
    TITR_ac_B.OutportBufferForInputTrqMax =
        TITR_ac_B.VariantMerge_For_Variant_Source_VariantS[1];

    /* SignalConversion generated from: '<S7>/InputTrqMin' */
    TITR_ac_B.OutportBufferForInputTrqMin =
        TITR_ac_B.VariantMerge_For_Variant_Source_VariantS[2];

    /* SignalConversion generated from: '<S7>/PumpTorq' */
    TITR_ac_B.OutportBufferForPumpTorq =
        TITR_ac_B.VariantMerge_For_Variant_Source_VariantS[6];

    /* SignalConversion generated from: '<S7>/TrqStaticSEM' */
    TITR_ac_B.OutportBufferForTrqStaticSEM =
        TITR_ac_B.VariantMerge_For_Variant_Source_VariantS[7];

    /* Gain: '<S159>/Gain' incorporates:
     *  Sum: '<S134>/Subtraction3'
     *  UnitDelay: '<S134>/UnitDelay2'
     */
    TITR_ac_B.Gain_d = TITR_ac_DW.UnitDelay2_DSTATE_h[0] - rtb_Vector_m[0];

    /* Update for UnitDelay: '<S142>/UnitDelay1' incorporates:
     *  Constant: '<S142>/TRUEConstant'
     */
    TITR_ac_DW.UnitDelay1_DSTATE_c = true;

    /* End of Outputs for SubSystem: '<S1>/TITC_InputTorqLimCntrl' */

    /* Switch: '<S14>/Switch1' */
    rtb_Subtraction2 = TITR_ac_B.OutportBufferForTrqStaticSEM;

#endif

    /* End of SignalConversion generated from: '<S4>/EngTrqStatic_SEM' */

    /* Product: '<S39>/Product1' incorporates:
     *  Constant: '<S39>/ConstantValue5'
     *  Constant: '<S62>/Calib'
     *  MinMax: '<S39>/MinMax2'
     */
    rtb_LeTITC_n_PumpSpd = fminf(0.0F, rtb_TmpSignalConversionAtVeMTQR_M_MtrA_T)
        * ((float32)Rte_Prm_KeTSXR_r_P1f_KeTSXR_r_P1f());

    /* SignalConversion generated from: '<S4>/EngTrqStatic_SEM' */
#if !Rte_SysCon_Variant_TITR_FUNC

    /* Switch: '<S14>/Switch1' */
    rtb_Subtraction2 = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S4>/EngTrqStatic_SEM' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeTTQR_e_TCMTrqCntrlMdFst' */
    (void)Rte_Read_VeTTQR_e_TCMTrqCntrlMdFst_Value(&tmpRead_5);

    /* Inport: '<Root>/VeATRR_e_TrqArb' */
    (void)Rte_Read_VeATRR_e_TrqArb_Value(&tmpRead_4);

    /* Inport: '<Root>/VeDTRR_e_SumFWIDSlw' */
    (void)Rte_Read_VeDTRR_e_SumFWIDSlw_Value(&tmpRead_3);

    /* Inport: '<Root>/VeVTVR_e_TrqArb' */
    (void)Rte_Read_VeVTVR_e_TrqArb_Value(&tmpRead_2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/TITR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/TITC_CalcTiFinal'
     */
    /* RelationalOperator: '<S39>/Comparison6' incorporates:
     *  Constant: '<S49>/Constant'
     *  Inport: '<Root>/VeATRR_e_TrqArb'
     */
    rtb_TmpSignalConversionAtVeESSR_b_EngStr = (((uint32)tmpRead_4) ==
        CeWTAR_e_UndrShtPrt);

    /* Switch: '<S39>/Switch8' incorporates:
     *  Constant: '<S43>/Constant'
     *  Inport: '<Root>/VeENGR_b_EngCombustionCmnd'
     *  Inport: '<Root>/VeENGR_e_EngDFSO_St'
     *  Inport: '<Root>/VeTRAR_b_EngDFCOReq'
     *  Logic: '<S39>/Logical5'
     *  Logic: '<S39>/Logical9'
     *  RelationalOperator: '<S39>/Equal8'
     *  UnitDelay: '<S39>/UnitDelay'
     */
    if (!rtb_TmpSignalConversionAtVeVTVR_b_TCM_Fa)
    {
        (void)Rte_Read_VeTRAR_b_EngDFCOReq_Value(&tmpRead_9);
        (void)Rte_Read_VeENGR_b_EngCombustionCmnd_Value(&tmpRead_7);
        (void)Rte_Read_VeENGR_e_EngDFSO_St_Value(&tmpRead_6);
        TITR_ac_DW.UnitDelay_DSTATE_g = (((((uint32)tmpRead_6) ==
            CeENGR_e_DFSO_Enabled) || (!tmpRead_7)) || tmpRead_9);
    }

    /* End of Switch: '<S39>/Switch8' */

    /* Switch: '<S39>/Switch7' incorporates:
     *  Constant: '<S52>/Calib'
     *  Inport: '<Root>/VeVTVR_b_TCM_FastReq_INC'
     *  Inport: '<Root>/VeVTVR_b_TCM_SlowReq_INC'
     */
    if (HeTITR_b_AllowSEMArb)
    {
        (void)Rte_Read_VeVTVR_b_TCM_SlowReq_INC_Value(&rtb_RelationalOperator1_m);
        (void)Rte_Read_VeVTVR_b_TCM_FastReq_INC_Value(&tmpRead_8);

        /* RelationalOperator: '<S36>/RelationalOperator1' incorporates:
         *  Inport: '<Root>/VeVTVR_b_TCM_FastReq_INC'
         *  Inport: '<Root>/VeVTVR_b_TCM_SlowReq_INC'
         *  Logic: '<S39>/Logical8'
         */
        rtb_RelationalOperator1_m = (tmpRead_8 || rtb_RelationalOperator1_m);
    }
    else
    {
        /* RelationalOperator: '<S36>/RelationalOperator1' incorporates:
         *  Constant: '<S39>/FALSEConstant'
         */
        rtb_RelationalOperator1_m = false;
    }

    /* End of Switch: '<S39>/Switch7' */

    /* Logic: '<S39>/Logical7' incorporates:
     *  Constant: '<S58>/Calib'
     *  Logic: '<S39>/Logical12'
     *  UnitDelay: '<S39>/UnitDelay'
     */
    VeTITC_b_DisableSEMBlend = ((((TITR_ac_DW.UnitDelay_DSTATE_g) &&
        rtb_TmpSignalConversionAtVeVTVR_b_TCM_Fa) && (KeTITR_b_TiActForSEM_DEC))
        || rtb_RelationalOperator1_m);

    /* Logic: '<S39>/Logical3' incorporates:
     *  Constant: '<S45>/Constant'
     *  Constant: '<S47>/Constant'
     *  Constant: '<S55>/Calib'
     *  Constant: '<S56>/Calib'
     *  Constant: '<S59>/Calib'
     *  DataTypeConversion: '<S39>/DataTypeConversion'
     *  Inport: '<Root>/VeVTVR_e_TrqArb'
     *  Logic: '<S39>/Logical1'
     *  Logic: '<S39>/Logical6'
     *  RelationalOperator: '<S39>/Comparison1'
     *  RelationalOperator: '<S39>/Comparison2'
     *  Selector: '<S39>/Selector'
     *  SignalConversion generated from: '<S1>/VeHSER_e_HTDR_State'
     */
    VeTITC_b_SEMBlendActv = (((((((uint32)tmpRead_2) == CeWTAR_e_TransTorque) &&
        (KaTITR_b_TiBlendSEM_RngEqnMap[(rtb_TmpSignalConversionAtVeHSER_e_HTDR_S)]))
        && (KeTITR_b_UseEngTrqCmndDuringSEM)) && ((((uint32)
        rtb_TmpSignalConversionAtVeTRAR_e_HybCmn) != CeTRAR_e_Inactive) ||
        (KeTITR_b_RespType_Ovrd))) && (!VeTITC_b_DisableSEMBlend));

    /* Outputs for Atomic SubSystem: '<S42>/EdgeFalling' */
    /* RelationalOperator: '<S36>/RelationalOperator1' incorporates:
     *  UnitDelay: '<S67>/UnitDelay'
     */
    rtb_RelationalOperator1_m = TITR_ac_DW.UnitDelay_DSTATE_b4;

    /* Update for UnitDelay: '<S67>/UnitDelay' */
    TITR_ac_DW.UnitDelay_DSTATE_b4 = VeTITC_b_SEMBlendActv;

    /* Outputs for Atomic SubSystem: '<S42>/AccumulatorResetLimited' */
    /* Switch: '<S66>/Switch1' incorporates:
     *  Logic: '<S67>/AND'
     *  Logic: '<S67>/OR1'
     */
    if ((!VeTITC_b_SEMBlendActv) && rtb_RelationalOperator1_m)
    {
        /* Switch: '<S66>/Switch1' incorporates:
         *  Constant: '<S42>/ConstantValue2'
         */
        VeTITC_t_Sum = 0.0F;
    }
    else
    {
        /* Sum: '<S66>/Summation' incorporates:
         *  Constant: '<S68>/Calib'
         *  UnitDelay: '<S66>/UnitDelay'
         */
        VeTITC_t_Sum = HeTITR_t_12p5_dT + VeTITC_t_Sum;

        /* Outputs for Atomic SubSystem: '<S66>/Limiter' */
        /* Switch: '<S70>/Switch1' incorporates:
         *  Constant: '<S42>/ConstantValue4'
         *  RelationalOperator: '<S70>/RelationalOperator'
         */
        if (10.0F < VeTITC_t_Sum)
        {
            /* Switch: '<S70>/Switch1' */
            VeTITC_t_Sum = 10.0F;
        }

        /* End of Switch: '<S70>/Switch1' */

        /* Switch: '<S70>/Switch' incorporates:
         *  Constant: '<S42>/ConstantValue3'
         *  RelationalOperator: '<S70>/RelationalOperator1'
         */
        if (VeTITC_t_Sum <= 0.0F)
        {
            /* Switch: '<S66>/Switch1' */
            VeTITC_t_Sum = 0.0F;
        }

        /* End of Switch: '<S70>/Switch' */
        /* End of Outputs for SubSystem: '<S66>/Limiter' */
    }

    /* End of Switch: '<S66>/Switch1' */
    /* End of Outputs for SubSystem: '<S42>/AccumulatorResetLimited' */
    /* End of Outputs for SubSystem: '<S42>/EdgeFalling' */

    /* Lookup_n-D: '<S69>/Vector' incorporates:
     *  Switch: '<S66>/Switch1'
     */
    VeTITC_dk_LD_TiSEMBlend = look1_iflf_binlca_16a(VeTITC_t_Sum, ((const
        float32 *)&(KxTITR_dk_LD_TiSEMBlend[0])), ((const float32 *)
        &(KtTITR_dk_LD_TiSEMBlend[0])), 4U);

    /* Switch: '<S39>/Switch' */
    VeTITC_k_TiSEMBlendRaw = (float32)(VeTITC_b_SEMBlendActv ? 1.0F : 0.0F);

    /* Outputs for Atomic SubSystem: '<S39>/GradientLimiter' */
    /* Sum: '<S51>/Sum2' incorporates:
     *  UnitDelay: '<S51>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeTISR_n_InputS = VeTITC_k_TiSEMBlendRaw -
        TITR_ac_DW.UnitDelay_DSTATE_n;

    /* Outputs for Atomic SubSystem: '<S51>/Limiter' */
    /* Switch: '<S71>/Switch1' incorporates:
     *  Constant: '<S39>/MAXFLOAT'
     *  RelationalOperator: '<S71>/RelationalOperator'
     */
    if (3.402823466E+38F < rtb_TmpSignalConversionAtVeTISR_n_InputS)
    {
        /* Sum: '<S8>/Summation8' */
        rtb_TmpSignalConversionAtVeTISR_n_InputS = 3.402823466E+38F;
    }

    /* End of Switch: '<S71>/Switch1' */

    /* Switch: '<S71>/Switch' incorporates:
     *  RelationalOperator: '<S71>/RelationalOperator1'
     */
    if (rtb_TmpSignalConversionAtVeTISR_n_InputS <= VeTITC_dk_LD_TiSEMBlend)
    {
        rtb_TmpSignalConversionAtVeTISR_n_InputS = VeTITC_dk_LD_TiSEMBlend;
    }

    /* End of Switch: '<S71>/Switch' */
    /* End of Outputs for SubSystem: '<S51>/Limiter' */

    /* Sum: '<S51>/Sum3' incorporates:
     *  UnitDelay: '<S51>/UnitDelay'
     */
    TITR_ac_DW.UnitDelay_DSTATE_n += rtb_TmpSignalConversionAtVeTISR_n_InputS;

    /* End of Outputs for SubSystem: '<S39>/GradientLimiter' */

    /* Outputs for Atomic SubSystem: '<S39>/SignalLatchOnWithReset' */
    /* Logic: '<S65>/OR1' incorporates:
     *  Constant: '<S39>/ConstantValue2'
     *  Constant: '<S46>/Constant'
     *  Constant: '<S50>/Constant'
     *  Constant: '<S52>/Calib'
     *  Inport: '<Root>/VeDTRR_e_SumFWIDSlw'
     *  Inport: '<Root>/VeTTQR_e_TCMTrqCntrlMdFst'
     *  Logic: '<S39>/Logical11'
     *  Logic: '<S39>/Logical13'
     *  Logic: '<S65>/NOT'
     *  Logic: '<S65>/OR'
     *  RelationalOperator: '<S39>/Comparison3'
     *  RelationalOperator: '<S39>/Comparison4'
     *  RelationalOperator: '<S39>/Comparison8'
     *  UnitDelay: '<S51>/UnitDelay'
     *  UnitDelay: '<S65>/UnitDelay'
     */
    TITR_ac_DW.UnitDelay_DSTATE_j2o = (((((uint32)tmpRead_5) == CeTINR_e_TrqInc)
        || (((uint32)tmpRead_3) == CeDTRR_e_Trans)) ||
        (((TITR_ac_DW.UnitDelay_DSTATE_n >= 0.01F) && (!HeTITR_b_AllowSEMArb)) &&
         (TITR_ac_DW.UnitDelay_DSTATE_j2o)));

    /* End of Outputs for SubSystem: '<S39>/SignalLatchOnWithReset' */

    /* Logic: '<S39>/Logical4' incorporates:
     *  UnitDelay: '<S65>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeVTVR_b_TCM_Fa =
        (rtb_TmpSignalConversionAtVeESSR_b_EngStr ||
         (TITR_ac_DW.UnitDelay_DSTATE_j2o));

    /* Outputs for Atomic SubSystem: '<S39>/EdgeRising' */
    /* Logic: '<S44>/OR1' incorporates:
     *  UnitDelay: '<S44>/UnitDelay'
     */
    rtb_RelationalOperator1_m = !TITR_ac_DW.UnitDelay_DSTATE_k;

    /* Update for UnitDelay: '<S44>/UnitDelay' */
    TITR_ac_DW.UnitDelay_DSTATE_k = rtb_TmpSignalConversionAtVeVTVR_b_TCM_Fa;

    /* End of Outputs for SubSystem: '<S39>/EdgeRising' */

    /* SignalConversion generated from: '<S4>/InputTrqAirflow' */
#if Rte_SysCon_Variant_TITR_FUNC

    /* VariantMerge generated from: '<S4>/InputTrqAirflow' */
    rtb_VM_Conditional_Signal_InputTrqAirflo =
        TITR_ac_B.OutportBufferForInputTrqAirflow;

#else

    /* VariantMerge generated from: '<S4>/InputTrqAirflow' incorporates:
     *  SignalConversion generated from: '<S4>/InputTrqAirflow'
     */
    rtb_VM_Conditional_Signal_InputTrqAirflo = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S4>/InputTrqAirflow' */

    /* Outputs for Atomic SubSystem: '<S39>/LowpassTResetEnabled' */
    /* Outputs for Atomic SubSystem: '<S39>/EdgeRising' */
    /* Switch: '<S63>/Switch1' incorporates:
     *  Inport: '<Root>/VeOITR_M_TiPredicted'
     *  Inport: '<Root>/VeTRAR_M_HybCmndEngTorqPrdtd'
     *  Logic: '<S44>/AND'
     *  Switch: '<S63>/Switch2'
     */
    if (rtb_TmpSignalConversionAtVeVTVR_b_TCM_Fa && rtb_RelationalOperator1_m)
    {
        /* Switch: '<S63>/Switch1' */
        VeTITC_M_EngTrqSEMFlt = rtb_VM_Conditional_Signal_InputTrqAirflo;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeVTVR_b_TCM_Fa)
        {
            (void)Rte_Read_VeOITR_M_TiPredicted_Value(&VeTITR_M_TiPrdt);
            (void)Rte_Read_VeTRAR_M_HybCmndEngTorqPrdtd_Value(&rtb_Abs3);

            /* Switch: '<S39>/Switch5' incorporates:
             *  Constant: '<S60>/Calib'
             *  Constant: '<S61>/Calib'
             *  Inport: '<Root>/VeOITR_M_TiPredicted'
             *  Inport: '<Root>/VeTRAR_M_HybCmndEngTorqPrdtd'
             *  Switch: '<S63>/Switch2'
             */
            if (rtb_TmpSignalConversionAtVeESSR_b_EngStr)
            {
                rtb_TmpSignalConversionAtVeTISR_n_InputS = KeTITR_t_TiRamp;
            }
            else
            {
                rtb_TmpSignalConversionAtVeTISR_n_InputS = KeTITR_t_TeSEM_Filt;
            }

            /* End of Switch: '<S39>/Switch5' */

            /* Switch: '<S39>/Switch1' incorporates:
             *  Constant: '<S57>/Calib'
             *  Switch: '<S63>/Switch2'
             */
            if (KeTITR_b_SEMTiOffset_Enbl)
            {
                rtb_Abs3 = VeTITR_M_TiPrdt;
            }

            /* End of Switch: '<S39>/Switch1' */

            /* Switch: '<S63>/Switch1' incorporates:
             *  Constant: '<S54>/Calib'
             *  MinMax: '<S63>/Maximum'
             *  Product: '<S63>/Multiplication'
             *  Product: '<S63>/Multiplication1'
             *  Sum: '<S63>/Subtraction'
             *  Sum: '<S63>/Summation'
             *  Switch: '<S63>/Switch2'
             *  UnitDelay: '<S63>/UnitDelay'
             */
            VeTITC_M_EngTrqSEMFlt = (((rtb_Abs3 - VeTITC_M_EngTrqSEMFlt) *
                HeTITR_t_12p5_dT) * (1.0F / fmaxf
                (rtb_TmpSignalConversionAtVeTISR_n_InputS, HeTITR_t_12p5_dT))) +
                VeTITC_M_EngTrqSEMFlt;
        }
    }

    /* End of Switch: '<S63>/Switch1' */
    /* End of Outputs for SubSystem: '<S39>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S39>/LowpassTResetEnabled' */

    /* Switch: '<S39>/Switch9' incorporates:
     *  Constant: '<S53>/Calib'
     *  Switch: '<S39>/Switch3'
     *  UnitDelay: '<S65>/UnitDelay'
     */
    if (HeTITR_b_SEM_TiSlct)
    {
        /* Switch: '<S39>/Switch9' */
        VeTITC_M_EngTrqSEM_EngPot = rtb_Subtraction2;
    }
    else if (TITR_ac_DW.UnitDelay_DSTATE_j2o)
    {
        /* Switch: '<S39>/Switch3' incorporates:
         *  Switch: '<S39>/Switch9'
         */
        VeTITC_M_EngTrqSEM_EngPot = VeTITC_M_EngTrqSEMFlt;
    }
    else
    {
        /* Switch: '<S39>/Switch9' incorporates:
         *  Switch: '<S39>/Switch3'
         */
        VeTITC_M_EngTrqSEM_EngPot = rtb_VM_Conditional_Signal_InputTrqAirflo;
    }

    /* End of Switch: '<S39>/Switch9' */

    /* Switch: '<S39>/Switch10' */
    if (rtb_TmpSignalConversionAtVeMTQR_b_Altern)
    {
        /* Switch: '<S39>/Switch10' incorporates:
         *  Sum: '<S39>/Sum2'
         */
        VeTITR_M_TiPrdt = rtb_LeTITC_n_PumpSpd + VeTITC_M_EngTrqSEM_EngPot;
    }
    else
    {
        /* Switch: '<S39>/Switch10' */
        VeTITR_M_TiPrdt = VeTITC_M_EngTrqSEM_EngPot;
    }

    /* End of Switch: '<S39>/Switch10' */

    /* SignalConversion generated from: '<S4>/Ti_Actual' incorporates:
     *  SignalConversion generated from: '<S4>/InputTrqCapacityMinRunImmed'
     * */
#if Rte_SysCon_Variant_TITR_FUNC

    /* Switch: '<S14>/Switch1' */
    rtb_Subtraction2 = TITR_ac_B.VariantMerge_For_Variant_Source_VariantS[0];

    /* Selector: '<S14>/Selector2' */
    rtb_Selector2_n = TITR_ac_B.OutportBufferForInputTrqCapacityMinRunIm;

#else

    /* Switch: '<S14>/Switch1' incorporates:
     *  SignalConversion generated from: '<S4>/Ti_Actual'
     */
    rtb_Subtraction2 = 0.0F;

    /* Selector: '<S14>/Selector2' incorporates:
     *  SignalConversion generated from: '<S4>/InputTrqCapacityMinRunImmed'
     */
    rtb_Selector2_n = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S4>/Ti_Actual' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeTRAR_M_EngTorqCmndImmed' */
    (void)Rte_Read_VeTRAR_M_EngTorqCmndImmed_Value((&(VeTITC_M_EngTrqSEMCmnd)));

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/TITR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/TITC_CalcTiFinal'
     */
    /* Switch: '<S39>/Switch2' incorporates:
     *  Constant: '<S48>/Constant'
     *  Constant: '<S52>/Calib'
     *  Logic: '<S39>/Logical2'
     *  RelationalOperator: '<S39>/Comparison5'
     */
    if ((((uint32)rtb_TmpSignalConversionAtVeTRAR_e_HybCmn) == CeTRAR_e_Inactive)
        && (HeTITR_b_AllowSEMArb))
    {
        /* Switch: '<S39>/Switch2' incorporates:
         *  Inport: '<Root>/VeTRAR_M_EngTorqCmndImmed'
         */
        VeTITC_M_EngTrqSEMCmnd = VeTITC_M_EngTrqSEM_EngPot;
    }

    /* End of Switch: '<S39>/Switch2' */

    /* MinMax: '<S39>/MinMax1' */
    VeTITC_M_EngTrqSEMArb = fmaxf(rtb_Selector2_n, VeTITC_M_EngTrqSEMCmnd);

    /* Switch: '<S39>/Switch6' incorporates:
     *  Constant: '<S52>/Calib'
     */
    if (HeTITR_b_AllowSEMArb)
    {
        rtb_VM_Conditional_Signal_InputTrqAirflo = VeTITC_M_EngTrqSEM_EngPot;
    }

    /* End of Switch: '<S39>/Switch6' */

    /* MinMax: '<S39>/MinMax' */
    VeTITC_M_TiLmtedFrmTRAR = fminf(VeTITC_M_EngTrqSEMArb,
        rtb_VM_Conditional_Signal_InputTrqAirflo);

    /* Switch: '<S39>/Switch11' incorporates:
     *  Switch: '<S39>/Switch4'
     */
    if (rtb_TmpSignalConversionAtVeMTQR_b_Altern)
    {
        /* Switch: '<S39>/Switch4' */
        if (VeTITC_b_DisableSEMBlend)
        {
            rtb_Selector2_n = rtb_Subtraction2;
        }
        else
        {
            rtb_Selector2_n = VeTITC_M_TiLmtedFrmTRAR;
        }

        /* Switch: '<S39>/Switch11' incorporates:
         *  Constant: '<S41>/ConstantValue2'
         *  Product: '<S41>/Product'
         *  Product: '<S41>/Product1'
         *  Sum: '<S39>/Sum1'
         *  Sum: '<S41>/Sum1'
         *  Sum: '<S41>/Sum2'
         *  UnitDelay: '<S51>/UnitDelay'
         */
        VeTITR_M_TiBlended = (((1.0F - TITR_ac_DW.UnitDelay_DSTATE_n) *
                               rtb_Subtraction2) + (rtb_Selector2_n *
                               TITR_ac_DW.UnitDelay_DSTATE_n)) +
            rtb_LeTITC_n_PumpSpd;
    }
    else
    {
        if (VeTITC_b_DisableSEMBlend)
        {
            /* Switch: '<S39>/Switch4' */
            rtb_Selector2_n = rtb_Subtraction2;
        }
        else
        {
            /* Switch: '<S39>/Switch4' */
            rtb_Selector2_n = VeTITC_M_TiLmtedFrmTRAR;
        }

        /* Switch: '<S39>/Switch11' incorporates:
         *  Constant: '<S41>/ConstantValue2'
         *  Product: '<S41>/Product'
         *  Product: '<S41>/Product1'
         *  Sum: '<S41>/Sum1'
         *  Sum: '<S41>/Sum2'
         *  UnitDelay: '<S51>/UnitDelay'
         */
        VeTITR_M_TiBlended = ((1.0F - TITR_ac_DW.UnitDelay_DSTATE_n) *
                              rtb_Subtraction2) + (rtb_Selector2_n *
            TITR_ac_DW.UnitDelay_DSTATE_n);
    }

    /* End of Switch: '<S39>/Switch11' */

    /* Outputs for Atomic SubSystem: '<S40>/EdgeRising' */
    /* Logic: '<S73>/AND' incorporates:
     *  Logic: '<S73>/OR1'
     *  UnitDelay: '<S73>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeMTQR_b_Altern = !TITR_ac_DW.UnitDelay_DSTATE_p;

    /* Update for UnitDelay: '<S73>/UnitDelay' incorporates:
     *  Constant: '<S40>/TRUEConstant1'
     */
    TITR_ac_DW.UnitDelay_DSTATE_p = true;

    /* End of Outputs for SubSystem: '<S40>/EdgeRising' */

    /* Switch: '<S83>/Switch1' */
    if (rtb_TmpSignalConversionAtVeMTQR_b_Altern)
    {
        /* Selector: '<S14>/Selector2' */
        rtb_Selector2_n = VeTITR_M_TiBlended;
    }
    else
    {
        /* Selector: '<S14>/Selector2' incorporates:
         *  UnitDelay: '<S83>/UnitDelay'
         */
        rtb_Selector2_n = TITR_ac_DW.UnitDelay_DSTATE_f;
    }

    /* End of Switch: '<S83>/Switch1' */

    /* Sum: '<S40>/Sum1' */
    VeTITC_M_TiCombDlyErr = VeTITR_M_TiBlended - rtb_Selector2_n;

    /* Outputs for Atomic SubSystem: '<S40>/SignalLatchOnWithReset' */
    /* Outputs for Atomic SubSystem: '<S40>/ClosedInterval' */
    /* Logic: '<S82>/OR1' incorporates:
     *  Constant: '<S75>/Calib'
     *  Constant: '<S76>/Calib'
     *  Logic: '<S40>/Logical'
     *  Logic: '<S40>/Logical2'
     *  Logic: '<S72>/LogicalOperator'
     *  Logic: '<S82>/NOT'
     *  Logic: '<S82>/OR'
     *  RelationalOperator: '<S72>/RelatonalOperator'
     *  RelationalOperator: '<S72>/RelatonalOperator1'
     *  UnitDelay: '<S82>/UnitDelay'
     */
    TITR_ac_DW.UnitDelay_DSTATE_j5 = (rtb_TmpSignalConversionAtVeVTVR_b_TrqRtL ||
        ((rtb_TmpSignalConversionAtVeVTVR_b_TrqRtL || ((VeTITC_M_TiCombDlyErr <
        KeTITR_M_TiCombDlyNegRst) || (VeTITC_M_TiCombDlyErr >
        KeTITR_M_TiCombDlyPosRst))) && (TITR_ac_DW.UnitDelay_DSTATE_j5)));

    /* End of Outputs for SubSystem: '<S40>/ClosedInterval' */
    /* End of Outputs for SubSystem: '<S40>/SignalLatchOnWithReset' */

    /* Switch: '<S40>/Switch' incorporates:
     *  UnitDelay: '<S82>/UnitDelay'
     */
    if (TITR_ac_DW.UnitDelay_DSTATE_j5)
    {
        /* Switch: '<S40>/Switch1' incorporates:
         *  Constant: '<S77>/Calib'
         *  Constant: '<S78>/Calib'
         *  Constant: '<S80>/ConstantValue'
         *  Constant: '<S80>/ConstantValue1'
         *  Constant: '<S80>/ConstantValue2'
         *  Constant: '<S80>/ConstantValue3'
         *  Logic: '<S80>/AND'
         *  RelationalOperator: '<S40>/Comparison3'
         *  RelationalOperator: '<S80>/GreaterThanorEqual'
         *  RelationalOperator: '<S80>/GreaterThanorEqual1'
         *  RelationalOperator: '<S80>/NotEqual'
         *  RelationalOperator: '<S80>/NotEqual1'
         *  Switch: '<S80>/Switch1'
         *  Switch: '<S80>/Switch2'
         *  Switch: '<S80>/Switch3'
         */
        if (rtb_TmpSignalConversionAtVeVTVR_t_EngCom <=
                KeTITR_t_CombDelayDisblTime)
        {
            /* Switch: '<S40>/Switch' incorporates:
             *  Constant: '<S40>/ConstantValue2'
             *  Switch: '<S40>/Switch1'
             */
            VeTITC_k_TiCombFiltCoeff = 1.0F;
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S40>/ProtectedDivision' */
            if ((KeTITR_k_CmbDlySettlgTmFact != 0.0F) &&
                    (rtb_TmpSignalConversionAtVeVTVR_t_EngCom != 0.0F))
            {
                /* Switch: '<S80>/Switch1' incorporates:
                 *  Constant: '<S77>/Calib'
                 *  Product: '<S80>/Division'
                 */
                rtb_TmpSignalConversionAtVeVTVR_t_EngCom =
                    KeTITR_k_CmbDlySettlgTmFact /
                    rtb_TmpSignalConversionAtVeVTVR_t_EngCom;
            }
            else if (KeTITR_k_CmbDlySettlgTmFact > 0.0F)
            {
                /* Switch: '<S80>/Switch2' incorporates:
                 *  Constant: '<S80>/MAXFLOAT'
                 *  Switch: '<S80>/Switch1'
                 */
                rtb_TmpSignalConversionAtVeVTVR_t_EngCom = 3.402823466E+38F;
            }
            else if (KeTITR_k_CmbDlySettlgTmFact < 0.0F)
            {
                /* Switch: '<S80>/Switch3' incorporates:
                 *  Constant: '<S80>/MINFLOAT'
                 *  Switch: '<S80>/Switch1'
                 *  Switch: '<S80>/Switch2'
                 */
                rtb_TmpSignalConversionAtVeVTVR_t_EngCom = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S80>/Switch1' incorporates:
                 *  Constant: '<S80>/ConstantValue4'
                 *  Switch: '<S80>/Switch2'
                 *  Switch: '<S80>/Switch3'
                 */
                rtb_TmpSignalConversionAtVeVTVR_t_EngCom = 0.0F;
            }

            /* End of Outputs for SubSystem: '<S40>/ProtectedDivision' */

            /* Product: '<S40>/Product2' incorporates:
             *  Constant: '<S74>/Calib'
             *  Constant: '<S77>/Calib'
             *  Constant: '<S80>/ConstantValue2'
             *  Constant: '<S80>/ConstantValue3'
             *  Product: '<S40>/Product1'
             *  RelationalOperator: '<S80>/GreaterThanorEqual'
             *  RelationalOperator: '<S80>/GreaterThanorEqual1'
             *  Switch: '<S80>/Switch1'
             *  Switch: '<S80>/Switch2'
             *  Switch: '<S80>/Switch3'
             */
            rtb_TmpSignalConversionAtVeVTVR_t_EngCom *= HeTITR_t_12p5_dT;

            /* Outputs for Atomic SubSystem: '<S40>/ProtectedDivision1' */
            /* Switch: '<S81>/Switch1' incorporates:
             *  Constant: '<S40>/ConstantValue'
             *  Constant: '<S81>/ConstantValue'
             *  Constant: '<S81>/ConstantValue1'
             *  Constant: '<S81>/ConstantValue2'
             *  Constant: '<S81>/ConstantValue3'
             *  Logic: '<S81>/AND'
             *  Product: '<S40>/Product2'
             *  RelationalOperator: '<S81>/GreaterThanorEqual'
             *  RelationalOperator: '<S81>/GreaterThanorEqual1'
             *  RelationalOperator: '<S81>/NotEqual'
             *  RelationalOperator: '<S81>/NotEqual1'
             *  Sum: '<S40>/Sum'
             *  Switch: '<S81>/Switch2'
             *  Switch: '<S81>/Switch3'
             */
            if ((rtb_TmpSignalConversionAtVeVTVR_t_EngCom != 0.0F) &&
                    ((rtb_TmpSignalConversionAtVeVTVR_t_EngCom + 1.0F) != 0.0F))
            {
                /* Switch: '<S81>/Switch1' incorporates:
                 *  Product: '<S81>/Division'
                 */
                VeTITC_k_TiCombFiltCoeff =
                    rtb_TmpSignalConversionAtVeVTVR_t_EngCom /
                    (rtb_TmpSignalConversionAtVeVTVR_t_EngCom + 1.0F);
            }
            else if (rtb_TmpSignalConversionAtVeVTVR_t_EngCom > 0.0F)
            {
                /* Switch: '<S81>/Switch2' incorporates:
                 *  Constant: '<S81>/MAXFLOAT'
                 *  Switch: '<S81>/Switch1'
                 */
                VeTITC_k_TiCombFiltCoeff = 3.402823466E+38F;
            }
            else if (rtb_TmpSignalConversionAtVeVTVR_t_EngCom < 0.0F)
            {
                /* Switch: '<S81>/Switch3' incorporates:
                 *  Constant: '<S81>/MINFLOAT'
                 *  Switch: '<S81>/Switch1'
                 *  Switch: '<S81>/Switch2'
                 */
                VeTITC_k_TiCombFiltCoeff = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S81>/Switch1' incorporates:
                 *  Constant: '<S81>/ConstantValue4'
                 *  Switch: '<S81>/Switch2'
                 *  Switch: '<S81>/Switch3'
                 */
                VeTITC_k_TiCombFiltCoeff = 0.0F;
            }

            /* End of Switch: '<S81>/Switch1' */
            /* End of Outputs for SubSystem: '<S40>/ProtectedDivision1' */

            /* Outputs for Atomic SubSystem: '<S40>/Limiter' */
            /* Switch: '<S79>/Switch1' incorporates:
             *  Constant: '<S40>/ConstantValue3'
             *  RelationalOperator: '<S79>/RelationalOperator'
             */
            if (1.0F < VeTITC_k_TiCombFiltCoeff)
            {
                /* Switch: '<S79>/Switch1' */
                VeTITC_k_TiCombFiltCoeff = 1.0F;
            }

            /* End of Switch: '<S79>/Switch1' */

            /* Switch: '<S79>/Switch' incorporates:
             *  Constant: '<S40>/ConstantValue4'
             *  RelationalOperator: '<S79>/RelationalOperator1'
             */
            if (VeTITC_k_TiCombFiltCoeff <= 0.0F)
            {
                /* Switch: '<S40>/Switch' incorporates:
                 *  Switch: '<S40>/Switch1'
                 */
                VeTITC_k_TiCombFiltCoeff = 0.0F;
            }

            /* End of Switch: '<S79>/Switch' */
            /* End of Outputs for SubSystem: '<S40>/Limiter' */
        }

        /* End of Switch: '<S40>/Switch1' */
    }
    else
    {
        /* Switch: '<S40>/Switch' incorporates:
         *  Constant: '<S40>/ConstantValue1'
         */
        VeTITC_k_TiCombFiltCoeff = 1.0F;
    }

    /* End of Switch: '<S40>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeTSXR_e_HTDRTacTiConstrnType' */
    (void)Rte_Read_VeTSXR_e_HTDRTacTiConstrnType_Value(&tmpRead_c);

    /* Inport: '<Root>/VaTSXR_r_HTDRTacTiConstrn' */
    (void)Rte_Read_VaTSXR_r_HTDRTacTiConstrn_Value(tmpRead_a);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/TITR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/TITC_CalcTiFinal'
     */
    /* Sum: '<S40>/Sum2' incorporates:
     *  Product: '<S40>/Product'
     */
    VeTITC_M_TiCombDly = (VeTITC_k_TiCombFiltCoeff * VeTITC_M_TiCombDlyErr) +
        rtb_Selector2_n;

    /* Switch: '<S9>/Switch2' incorporates:
     *  Constant: '<S37>/Calib'
     */
    if (KeTITR_b_EnblTiSEMShaping)
    {
        /* SignalConversion generated from: '<S1>/Ti_Final' incorporates:
         *  Outport: '<Root>/VeTITR_M_TiFinal'
         */
        (void)Rte_Write_VeTITR_M_TiFinal_Value(VeTITC_M_TiCombDly);
    }
    else
    {
        /* SignalConversion generated from: '<S1>/Ti_Final' incorporates:
         *  Outport: '<Root>/VeTITR_M_TiFinal'
         */
        (void)Rte_Write_VeTITR_M_TiFinal_Value(rtb_Subtraction2);
    }

    /* End of Switch: '<S9>/Switch2' */

    /* Switch: '<S83>/Switch3' incorporates:
     *  UnitDelay: '<S83>/UnitDelay'
     */
    if (rtb_TmpSignalConversionAtVeMTQR_b_Altern)
    {
        TITR_ac_DW.UnitDelay_DSTATE_f = VeTITR_M_TiBlended;
    }
    else
    {
        TITR_ac_DW.UnitDelay_DSTATE_f = VeTITC_M_TiCombDly;
    }

    /* End of Switch: '<S83>/Switch3' */

    /* Abs: '<S14>/Abs' incorporates:
     *  Inport: '<Root>/VaTSXR_r_HTDRTacTiConstrn'
     *  Selector: '<S14>/Selector2'
     *  SignalConversion: '<S4>/SignalConversion3'
     */
    rtb_TmpSignalConversionAtVeVTVR_t_EngCom = fabsf(tmpRead_a[6]);

    /* RelationalOperator: '<S36>/RelationalOperator1' incorporates:
     *  Constant: '<S32>/Constant'
     *  Inport: '<Root>/VeTSXR_e_HTDRTacTiConstrnType'
     *  RelationalOperator: '<S14>/Comparison6'
     *  SignalConversion: '<S4>/SignalConversion1'
     */
    rtb_RelationalOperator1_m = (((uint32)tmpRead_c) == CeTSXR_e_Gear);

    /* Switch: '<S14>/Switch1' */
    if (rtb_RelationalOperator1_m)
    {
        /* Switch: '<S14>/Switch1' incorporates:
         *  Constant: '<S14>/ConstantValue9'
         */
        rtb_Subtraction2 = 0.0F;
    }
    else
    {
        /* Switch: '<S14>/Switch1' incorporates:
         *  Inport: '<Root>/VaTSXR_r_HTDRTacTiConstrn'
         *  Selector: '<S14>/Selector4'
         *  SignalConversion: '<S4>/SignalConversion3'
         */
        rtb_Subtraction2 = tmpRead_a[7];
    }

    /* End of Switch: '<S14>/Switch1' */

    /* Abs: '<S14>/Abs1' */
    rtb_VM_Conditional_Signal_InputTrqAirflo = fabsf(rtb_Subtraction2);

    /* Logic: '<S14>/Logical1' incorporates:
     *  Constant: '<S14>/ConstantValue'
     *  Constant: '<S14>/ConstantValue10'
     *  Constant: '<S14>/ConstantValue12'
     *  Constant: '<S14>/ConstantValue13'
     *  RelationalOperator: '<S14>/Comparison'
     *  RelationalOperator: '<S14>/Comparison1'
     *  RelationalOperator: '<S14>/Comparison2'
     *  RelationalOperator: '<S14>/Comparison3'
     *  UnitDelay: '<S14>/UnitDelay'
     *  UnitDelay: '<S14>/UnitDelay1'
     */
    VeHTDC_b_Reset_TbCL = ((((rtb_TmpSignalConversionAtVeVTVR_t_EngCom > 0.001F)
        && (TITR_ac_DW.UnitDelay_DSTATE_i < 0.001F)) &&
                            (rtb_VM_Conditional_Signal_InputTrqAirflo < 0.001F))
                           && (TITR_ac_DW.UnitDelay1_DSTATE_b > 0.001F));

    /* Outputs for Atomic SubSystem: '<S8>/EdgeRising1' */
    /* Logic: '<S11>/OR1' incorporates:
     *  UnitDelay: '<S11>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeVTVR_b_TrqRtL = !TITR_ac_DW.UnitDelay_DSTATE_k3;

    /* Update for UnitDelay: '<S11>/UnitDelay' */
    TITR_ac_DW.UnitDelay_DSTATE_k3 = VeHTDC_b_Reset_TbCL;

    /* End of Outputs for SubSystem: '<S8>/EdgeRising1' */

    /* Abs: '<S14>/Abs3' incorporates:
     *  Inport: '<Root>/VaTSXR_r_HTDRTacTiConstrn'
     *  Selector: '<S14>/Selector1'
     *  SignalConversion: '<S4>/SignalConversion3'
     */
    rtb_Abs3 = fabsf(tmpRead_a[0]);

    /* Switch: '<S14>/Switch2' */
    if (rtb_RelationalOperator1_m)
    {
        /* Switch: '<S14>/Switch2' incorporates:
         *  Constant: '<S14>/ConstantValue8'
         */
        rtb_Selector2_n = 0.0F;
    }
    else
    {
        /* Switch: '<S14>/Switch2' incorporates:
         *  Inport: '<Root>/VaTSXR_r_HTDRTacTiConstrn'
         *  Selector: '<S14>/Selector3'
         *  SignalConversion: '<S4>/SignalConversion3'
         */
        rtb_Selector2_n = tmpRead_a[1];
    }

    /* End of Switch: '<S14>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeICSR_b_TaNxCL_Enabled' */
    (void)Rte_Read_VeICSR_b_TaNxCL_Enabled_Value(&rtb_NOT3);

    /* Inport: '<Root>/VeICSR_b_TaNiCL_Enabled' */
    (void)Rte_Read_VeICSR_b_TaNiCL_Enabled_Value(&rtb_NOT2);

    /* Inport: '<Root>/VeHSER_dn_InputAccelProfile' */
    (void)Rte_Read_VeHSER_dn_InputAccelProfile_Value(&rtb_Switch1_bu);

    /* Inport: '<Root>/VeHSER_dn_NiDotMinLm' */
    (void)Rte_Read_VeHSER_dn_NiDotMinLm_Value(&rtb_Multiplication14);

    /* Inport: '<Root>/VeHSER_dn_NiDotMaxLm' */
    (void)Rte_Read_VeHSER_dn_NiDotMaxLm_Value(&rtb_Multiplication15);

    /* Inport: '<Root>/VeESSR_M_MtrBPulseCancelTrq' */
    (void)Rte_Read_VeESSR_M_MtrBPulseCancelTrq_Value((&(VeTITC_M_TbPulseCmd)));

    /* Inport: '<Root>/VeESSR_M_MtrAPulseCancelTrq' */
    (void)Rte_Read_VeESSR_M_MtrAPulseCancelTrq_Value((&(VeTITC_M_TaPulseCmd)));

    /* Inport: '<Root>/VePMDR_b_RunCrankActive' */
    (void)Rte_Read_VePMDR_b_RunCrankActive_Value(&tmpRead_b);

    /* Inport: '<Root>/VeHADR_M_MtrB_DrvlineDmpgTorq' */
    (void)Rte_Read_VeHADR_M_MtrB_DrvlineDmpgTorq_Value
        ((&(VeTITC_M_TbActDmpCmd_Extnl)));

    /* Inport: '<Root>/VeHADR_M_MtrA_DrvlineDmpgTorq' */
    (void)Rte_Read_VeHADR_M_MtrA_DrvlineDmpgTorq_Value
        ((&(VeTITC_M_TaActDmpCmd_Extnl)));

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/TITR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/TITC_CalcTiFinal'
     */
    /* Abs: '<S14>/Abs2' */
    rtb_LeTITC_n_PumpSpd = fabsf(rtb_Selector2_n);

    /* Logic: '<S14>/Logical2' incorporates:
     *  Constant: '<S14>/ConstantValue14'
     *  Constant: '<S14>/ConstantValue15'
     *  Constant: '<S14>/ConstantValue16'
     *  Constant: '<S14>/ConstantValue17'
     *  RelationalOperator: '<S14>/Comparison4'
     *  RelationalOperator: '<S14>/Comparison5'
     *  RelationalOperator: '<S14>/Comparison7'
     *  RelationalOperator: '<S14>/Comparison8'
     *  UnitDelay: '<S14>/UnitDelay2'
     *  UnitDelay: '<S14>/UnitDelay3'
     */
    VeHTDC_b_Reset_TaCL = ((((rtb_Abs3 > 0.001F) &&
        (TITR_ac_DW.UnitDelay3_DSTATE < 0.001F)) && (rtb_LeTITC_n_PumpSpd <
        0.001F)) && (TITR_ac_DW.UnitDelay2_DSTATE_j > 0.001F));

    /* Outputs for Atomic SubSystem: '<S8>/EdgeRising2' */
    /* Logic: '<S12>/OR1' incorporates:
     *  UnitDelay: '<S12>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeVTVR_b_TCM_Fa = !TITR_ac_DW.UnitDelay_DSTATE_b5;

    /* Update for UnitDelay: '<S12>/UnitDelay' */
    TITR_ac_DW.UnitDelay_DSTATE_b5 = VeHTDC_b_Reset_TaCL;

    /* End of Outputs for SubSystem: '<S8>/EdgeRising2' */

    /* Abs: '<S14>/Abs4' incorporates:
     *  Inport: '<Root>/VaTSXR_r_HTDRTacTiConstrn'
     *  Selector: '<S14>/Selector5'
     *  SignalConversion: '<S4>/SignalConversion3'
     */
    rtb_TmpSignalConversionAtVeETQR_M_EngT_n = fabsf(tmpRead_a[12]);

    /* Abs: '<S14>/Abs5' incorporates:
     *  Inport: '<Root>/VaTSXR_r_HTDRTacTiConstrn'
     *  Selector: '<S14>/Selector6'
     *  SignalConversion: '<S4>/SignalConversion3'
     */
    rtb_Add = fabsf(tmpRead_a[13]);

    /* Logic: '<S14>/Logical3' incorporates:
     *  Constant: '<S14>/ConstantValue22'
     *  Constant: '<S14>/ConstantValue23'
     *  Constant: '<S14>/ConstantValue24'
     *  Constant: '<S14>/ConstantValue25'
     *  RelationalOperator: '<S14>/Comparison10'
     *  RelationalOperator: '<S14>/Comparison11'
     *  RelationalOperator: '<S14>/Comparison12'
     *  RelationalOperator: '<S14>/Comparison9'
     *  UnitDelay: '<S14>/UnitDelay4'
     *  UnitDelay: '<S14>/UnitDelay5'
     */
    VeHTDC_b_Reset_TcCL = ((((rtb_TmpSignalConversionAtVeETQR_M_EngT_n < 0.001F)
        && (TITR_ac_DW.UnitDelay4_DSTATE > 0.001F)) && (rtb_Add < 0.001F)) &&
                           (TITR_ac_DW.UnitDelay5_DSTATE > 0.001F));

    /* Outputs for Atomic SubSystem: '<S8>/EdgeRising3' */
    /* Logic: '<S13>/OR1' incorporates:
     *  UnitDelay: '<S13>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeMTQR_b_Altern = !TITR_ac_DW.UnitDelay_DSTATE_nk;

    /* Update for UnitDelay: '<S13>/UnitDelay' */
    TITR_ac_DW.UnitDelay_DSTATE_nk = VeHTDC_b_Reset_TcCL;

    /* End of Outputs for SubSystem: '<S8>/EdgeRising3' */

    /* Switch: '<S16>/Switch1' incorporates:
     *  Constant: '<S24>/Calib'
     *  Switch: '<S17>/Switch1'
     */
    if (!KeTITR_b_PulseCancelCmndFdbk)
    {
        /* Switch: '<S16>/Switch1' incorporates:
         *  Constant: '<S8>/ConstantValue12'
         *  Inport: '<Root>/VeESSR_M_MtrAPulseCancelTrq'
         */
        VeTITC_M_TaPulseCmd = 0.0F;

        /* Switch: '<S17>/Switch1' incorporates:
         *  Constant: '<S8>/ConstantValue6'
         *  Inport: '<Root>/VeESSR_M_MtrBPulseCancelTrq'
         */
        VeTITC_M_TbPulseCmd = 0.0F;
    }

    /* End of Switch: '<S16>/Switch1' */

    /* Switch: '<S18>/Switch1' incorporates:
     *  Constant: '<S1>/Const'
     */
    VeTITC_M_TcPulseCmd = 0.0F;

    /* Switch: '<S19>/Switch1' incorporates:
     *  Constant: '<S1>/Const1'
     */
    VeTITC_M_TcActDmpCmd_Extnl = 0.0F;

    /* Switch: '<S20>/Switch1' incorporates:
     *  Constant: '<S23>/Calib'
     *  Logic: '<S8>/NOT12'
     *  Switch: '<S21>/Switch1'
     */
    if ((!tmpRead_b) || (!KeTITR_b_ActiveDampingEnabled))
    {
        /* Switch: '<S20>/Switch1' incorporates:
         *  Constant: '<S8>/ConstantValue7'
         *  Inport: '<Root>/VeHADR_M_MtrA_DrvlineDmpgTorq'
         */
        VeTITC_M_TaActDmpCmd_Extnl = 0.0F;

        /* Switch: '<S21>/Switch1' incorporates:
         *  Constant: '<S8>/ConstantValue9'
         *  Inport: '<Root>/VeHADR_M_MtrB_DrvlineDmpgTorq'
         */
        VeTITC_M_TbActDmpCmd_Extnl = 0.0F;
    }

    /* End of Switch: '<S20>/Switch1' */

    /* MinMax: '<S8>/MinMax' incorporates:
     *  Sum: '<S8>/Summation5'
     *  Sum: '<S8>/Summation9'
     */
    VeTITC_dn_NidotDelta_ExtFlt = fminf(rtb_Multiplication15 - rtb_Switch1_bu,
        rtb_Switch1_bu - rtb_Multiplication14);

    /* Logic: '<S8>/NOT3' */
    rtb_NOT3 = !rtb_NOT3;

    /* Logic: '<S8>/NOT2' incorporates:
     *  Logic: '<S8>/NOT1'
     */
    rtb_NOT2 = ((!rtb_NOT2) && rtb_NOT3);

    /* Outputs for Atomic SubSystem: '<S8>/LowpassTResetEnabled15' */
    /* Switch: '<S29>/Switch3' */
    if (rtb_NOT2)
    {
        /* Switch: '<S29>/Switch3' incorporates:
         *  Constant: '<S29>/ConstantValue20'
         *  MinMax: '<S29>/Maximum1'
         *  MinMax: '<S29>/Maximum2'
         *  UnitDelay: '<S29>/UnitDelay'
         */
        rtb_Subtraction6[0] = fmaxf(VeTITC_M_TaCL_LPF_External, 0.0F);
        rtb_Subtraction6[1] = fminf(VeTITC_M_TaCL_LPF_External, 0.0F);
    }
    else
    {
        /* Switch: '<S29>/Switch3' incorporates:
         *  Constant: '<S29>/ConstantValue13'
         *  Constant: '<S29>/ConstantValue26'
         */
        rtb_Subtraction6[0] = 9999.0F;
        rtb_Subtraction6[1] = -9999.0F;
    }

    /* End of Switch: '<S29>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S8>/EdgeRising2' */
    /* Switch: '<S29>/Switch1' incorporates:
     *  Inport: '<Root>/VeICSR_M_TaCL_Unclipped'
     *  Logic: '<S12>/AND'
     */
    if ((VeHTDC_b_Reset_TaCL) && rtb_TmpSignalConversionAtVeVTVR_b_TCM_Fa)
    {
        /* Switch: '<S29>/Switch1' incorporates:
         *  Constant: '<S8>/ConstantValue13'
         */
        rtb_Switch1_bu = 0.0F;
    }
    else
    {
        (void)Rte_Read_VeICSR_M_TaCL_Unclipped_Value(&rtb_Division_e);

        /* Logic: '<S8>/NOT7' incorporates:
         *  Constant: '<S22>/Calib'
         *  DataTypeConversion: '<S8>/DataTypeConversion'
         *  Inport: '<Root>/VeICSR_M_TaCL_Unclipped'
         *  Selector: '<S8>/Selector'
         *  SignalConversion generated from: '<S1>/VeESSR_e_EngStartStopSt'
         */
        rtb_NOT3 = (rtb_NOT3 && (KaTITR_b_ESSRStrtStpSt_CLSlwDsbld[(sint16)
                     rtb_TmpSignalConversionAtVeESSR_e_EngSta]));

        /* Switch: '<S8>/Switch3' incorporates:
         *  Constant: '<S25>/Calib'
         *  Logic: '<S8>/NOT9'
         *  Lookup_n-D: '<S26>/Vector'
         *  MinMax: '<S8>/MinMax'
         */
        if (rtb_NOT2 || rtb_NOT3)
        {
            rtb_Switch1_bu = KeTITR_k_TaCLCmdFilt_CLDsbld;
        }
        else
        {
            rtb_Switch1_bu = look1_iflf_binlca_16a(VeTITC_dn_NidotDelta_ExtFlt,
                ((const float32 *)&(KxTITR_k_TaCLCmdFilt_Extnl[0])), ((const
                float32 *)&(KtTITR_k_TaCLCmdFilt_Extnl[0])), 6U);
        }

        /* End of Switch: '<S8>/Switch3' */

        /* Switch: '<S8>/Switch2' incorporates:
         *  Constant: '<S8>/ConstantValue16'
         */
        if (rtb_NOT3)
        {
            rtb_Division_e = 0.0F;
        }

        /* End of Switch: '<S8>/Switch2' */

        /* Switch: '<S29>/Switch1' incorporates:
         *  Constant: '<S15>/Calib'
         *  MinMax: '<S29>/Maximum'
         *  Product: '<S29>/Multiplication'
         *  Product: '<S29>/Multiplication1'
         *  Sum: '<S29>/Subtraction'
         *  Sum: '<S29>/Summation'
         *  UnitDelay: '<S29>/UnitDelay'
         */
        rtb_Switch1_bu = (((rtb_Division_e - VeTITC_M_TaCL_LPF_External) *
                           HeTITR_t_12p5_dT) * (1.0F / fmaxf(rtb_Switch1_bu,
                            HeTITR_t_12p5_dT))) + VeTITC_M_TaCL_LPF_External;
    }

    /* End of Switch: '<S29>/Switch1' */
    /* End of Outputs for SubSystem: '<S8>/EdgeRising2' */
    /* End of Outputs for SubSystem: '<S8>/LowpassTResetEnabled15' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeICSR_b_TbNxCL_Enabled' */
    (void)Rte_Read_VeICSR_b_TbNxCL_Enabled_Value(&rtb_NOT5);

    /* Inport: '<Root>/VeICSR_b_TbNiCL_Enabled' */
    (void)Rte_Read_VeICSR_b_TbNiCL_Enabled_Value(&rtb_NOT6);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/TITR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/TITC_CalcTiFinal'
     */
    /* Outputs for Atomic SubSystem: '<S8>/LowpassTResetEnabled15' */
    /* Outputs for Atomic SubSystem: '<S29>/Limiter' */
    /* Switch: '<S34>/Switch1' incorporates:
     *  RelationalOperator: '<S34>/RelationalOperator'
     */
    if (rtb_Subtraction6[0] < rtb_Switch1_bu)
    {
        /* Sum: '<S8>/Summation3' */
        rtb_Switch1_bu = rtb_Subtraction6[0];
    }

    /* End of Switch: '<S34>/Switch1' */

    /* Switch: '<S34>/Switch' incorporates:
     *  RelationalOperator: '<S34>/RelationalOperator1'
     */
    if (rtb_Switch1_bu > rtb_Subtraction6[1])
    {
        /* Switch: '<S34>/Switch' */
        VeTITC_M_TaCL_LPF_External = rtb_Switch1_bu;
    }
    else
    {
        /* Switch: '<S34>/Switch' */
        VeTITC_M_TaCL_LPF_External = rtb_Subtraction6[1];
    }

    /* End of Switch: '<S34>/Switch' */
    /* End of Outputs for SubSystem: '<S29>/Limiter' */
    /* End of Outputs for SubSystem: '<S8>/LowpassTResetEnabled15' */

    /* Logic: '<S8>/NOT5' */
    rtb_NOT5 = !rtb_NOT5;

    /* Logic: '<S8>/NOT6' incorporates:
     *  Logic: '<S8>/NOT4'
     */
    rtb_NOT6 = ((!rtb_NOT6) && rtb_NOT5);

    /* Outputs for Atomic SubSystem: '<S8>/LowpassTResetEnabled16' */
    /* Switch: '<S30>/Switch3' */
    if (rtb_NOT6)
    {
        /* Switch: '<S30>/Switch3' incorporates:
         *  Constant: '<S30>/ConstantValue20'
         *  MinMax: '<S30>/Maximum1'
         *  MinMax: '<S30>/Maximum2'
         *  UnitDelay: '<S30>/UnitDelay'
         */
        rtb_Subtraction6[0] = fmaxf(VeTITC_M_TbCL_LPF_External, 0.0F);
        rtb_Subtraction6[1] = fminf(VeTITC_M_TbCL_LPF_External, 0.0F);
    }
    else
    {
        /* Switch: '<S30>/Switch3' incorporates:
         *  Constant: '<S30>/ConstantValue13'
         *  Constant: '<S30>/ConstantValue26'
         */
        rtb_Subtraction6[0] = 9999.0F;
        rtb_Subtraction6[1] = -9999.0F;
    }

    /* End of Switch: '<S30>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S8>/EdgeRising1' */
    /* Switch: '<S30>/Switch1' incorporates:
     *  Inport: '<Root>/VeICSR_M_TbCL_Unclipped'
     *  Logic: '<S11>/AND'
     */
    if ((VeHTDC_b_Reset_TbCL) && rtb_TmpSignalConversionAtVeVTVR_b_TrqRtL)
    {
        /* Switch: '<S30>/Switch1' incorporates:
         *  Constant: '<S8>/ConstantValue20'
         */
        rtb_Switch1_bu = 0.0F;
    }
    else
    {
        (void)Rte_Read_VeICSR_M_TbCL_Unclipped_Value(&rtb_Multiplication16);

        /* Logic: '<S8>/NOT8' incorporates:
         *  Constant: '<S22>/Calib'
         *  DataTypeConversion: '<S8>/DataTypeConversion'
         *  Inport: '<Root>/VeICSR_M_TbCL_Unclipped'
         *  Selector: '<S8>/Selector'
         *  SignalConversion generated from: '<S1>/VeESSR_e_EngStartStopSt'
         */
        rtb_NOT5 = ((KaTITR_b_ESSRStrtStpSt_CLSlwDsbld[(sint16)
                     rtb_TmpSignalConversionAtVeESSR_e_EngSta]) && rtb_NOT5);

        /* Switch: '<S8>/Switch1' incorporates:
         *  Constant: '<S25>/Calib'
         *  Logic: '<S8>/NOT10'
         *  Lookup_n-D: '<S27>/Vector'
         *  MinMax: '<S8>/MinMax'
         */
        if (rtb_NOT6 || rtb_NOT5)
        {
            rtb_Switch1_bu = KeTITR_k_TaCLCmdFilt_CLDsbld;
        }
        else
        {
            rtb_Switch1_bu = look1_iflf_binlca_16a(VeTITC_dn_NidotDelta_ExtFlt,
                ((const float32 *)&(KxTITR_k_TbCLCmdFilt_Extnl[0])), ((const
                float32 *)&(KtTITR_k_TbCLCmdFilt_Extnl[0])), 6U);
        }

        /* End of Switch: '<S8>/Switch1' */

        /* Switch: '<S8>/Switch4' incorporates:
         *  Constant: '<S8>/ConstantValue17'
         */
        if (rtb_NOT5)
        {
            rtb_Multiplication16 = 0.0F;
        }

        /* End of Switch: '<S8>/Switch4' */

        /* Switch: '<S30>/Switch1' incorporates:
         *  Constant: '<S15>/Calib'
         *  MinMax: '<S30>/Maximum'
         *  Product: '<S30>/Multiplication'
         *  Product: '<S30>/Multiplication1'
         *  Sum: '<S30>/Subtraction'
         *  Sum: '<S30>/Summation'
         *  UnitDelay: '<S30>/UnitDelay'
         */
        rtb_Switch1_bu = (((rtb_Multiplication16 - VeTITC_M_TbCL_LPF_External) *
                           HeTITR_t_12p5_dT) * (1.0F / fmaxf(rtb_Switch1_bu,
                            HeTITR_t_12p5_dT))) + VeTITC_M_TbCL_LPF_External;
    }

    /* End of Switch: '<S30>/Switch1' */
    /* End of Outputs for SubSystem: '<S8>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S8>/LowpassTResetEnabled16' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeICSR_b_TcNxCL_Enabled' */
    (void)Rte_Read_VeICSR_b_TcNxCL_Enabled_Value(&tmpRead_d);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/TITR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/TITC_CalcTiFinal'
     */
    /* Outputs for Atomic SubSystem: '<S8>/LowpassTResetEnabled16' */
    /* Outputs for Atomic SubSystem: '<S30>/Limiter' */
    /* Switch: '<S35>/Switch1' incorporates:
     *  RelationalOperator: '<S35>/RelationalOperator'
     */
    if (rtb_Subtraction6[0] < rtb_Switch1_bu)
    {
        /* Sum: '<S8>/Summation3' */
        rtb_Switch1_bu = rtb_Subtraction6[0];
    }

    /* End of Switch: '<S35>/Switch1' */

    /* Switch: '<S35>/Switch' incorporates:
     *  RelationalOperator: '<S35>/RelationalOperator1'
     */
    if (rtb_Switch1_bu > rtb_Subtraction6[1])
    {
        /* Switch: '<S35>/Switch' */
        VeTITC_M_TbCL_LPF_External = rtb_Switch1_bu;
    }
    else
    {
        /* Switch: '<S35>/Switch' */
        VeTITC_M_TbCL_LPF_External = rtb_Subtraction6[1];
    }

    /* End of Switch: '<S35>/Switch' */
    /* End of Outputs for SubSystem: '<S30>/Limiter' */
    /* End of Outputs for SubSystem: '<S8>/LowpassTResetEnabled16' */

    /* Outputs for Atomic SubSystem: '<S8>/LowpassTResetEnabled21' */
    /* Switch: '<S31>/Switch3' incorporates:
     *  Logic: '<S8>/NOT11'
     */
    if (!tmpRead_d)
    {
        /* Switch: '<S31>/Switch3' incorporates:
         *  Constant: '<S31>/ConstantValue20'
         *  MinMax: '<S31>/Maximum1'
         *  MinMax: '<S31>/Maximum2'
         *  UnitDelay: '<S31>/UnitDelay'
         */
        rtb_Subtraction6[0] = fmaxf(VeTITC_M_TcCL_LPF_External, 0.0F);
        rtb_Subtraction6[1] = fminf(VeTITC_M_TcCL_LPF_External, 0.0F);
    }
    else
    {
        /* Switch: '<S31>/Switch3' incorporates:
         *  Constant: '<S31>/ConstantValue13'
         *  Constant: '<S31>/ConstantValue26'
         */
        rtb_Subtraction6[0] = 9999.0F;
        rtb_Subtraction6[1] = -9999.0F;
    }

    /* End of Switch: '<S31>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S8>/EdgeRising3' */
    /* Switch: '<S31>/Switch1' incorporates:
     *  Logic: '<S13>/AND'
     */
    if ((VeHTDC_b_Reset_TcCL) && rtb_TmpSignalConversionAtVeMTQR_b_Altern)
    {
        /* Switch: '<S31>/Switch1' incorporates:
         *  Constant: '<S8>/ConstantValue35'
         */
        rtb_Switch1_bu = 0.0F;
    }
    else
    {
        /* Switch: '<S31>/Switch1' incorporates:
         *  Constant: '<S15>/Calib'
         *  Lookup_n-D: '<S28>/Vector'
         *  MinMax: '<S31>/Maximum'
         *  MinMax: '<S8>/MinMax'
         *  Product: '<S31>/Multiplication'
         *  Product: '<S31>/Multiplication1'
         *  Sum: '<S31>/Subtraction'
         *  Sum: '<S31>/Summation'
         *  UnitDelay: '<S31>/UnitDelay'
         */
        rtb_Switch1_bu = (((rtb_TmpSignalConversionAtVeICSR_M_TcCLOu -
                            VeTITC_M_TcCL_LPF_External) * HeTITR_t_12p5_dT) *
                          (1.0F / fmaxf(look1_iflf_binlca_16a
                            (VeTITC_dn_NidotDelta_ExtFlt, ((const float32 *)
                              &(KxTITR_k_TcCLCmdFilt_Extnl[0])), ((const float32
                               *)&(KtTITR_k_TcCLCmdFilt_Extnl[0])), 6U),
                            HeTITR_t_12p5_dT))) + VeTITC_M_TcCL_LPF_External;
    }

    /* End of Switch: '<S31>/Switch1' */
    /* End of Outputs for SubSystem: '<S8>/EdgeRising3' */
    /* End of Outputs for SubSystem: '<S8>/LowpassTResetEnabled21' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeICSR_M_TbCL' */
    (void)Rte_Read_VeICSR_M_TbCL_Value(&VeTITR_M_TbCLSum);

    /* Inport: '<Root>/VeICSR_M_TaCL' */
    (void)Rte_Read_VeICSR_M_TaCL_Value(&VeTITR_M_TaCLSum);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/TITR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/TITC_CalcTiFinal'
     */
    /* Outputs for Atomic SubSystem: '<S8>/LowpassTResetEnabled21' */
    /* Outputs for Atomic SubSystem: '<S31>/Limiter' */
    /* Switch: '<S36>/Switch1' incorporates:
     *  RelationalOperator: '<S36>/RelationalOperator'
     */
    if (rtb_Subtraction6[0] < rtb_Switch1_bu)
    {
        /* Sum: '<S8>/Summation3' */
        rtb_Switch1_bu = rtb_Subtraction6[0];
    }

    /* End of Switch: '<S36>/Switch1' */

    /* Switch: '<S36>/Switch' incorporates:
     *  RelationalOperator: '<S36>/RelationalOperator1'
     */
    if (rtb_Switch1_bu > rtb_Subtraction6[1])
    {
        /* Switch: '<S36>/Switch' */
        VeTITC_M_TcCL_LPF_External = rtb_Switch1_bu;
    }
    else
    {
        /* Switch: '<S36>/Switch' */
        VeTITC_M_TcCL_LPF_External = rtb_Subtraction6[1];
    }

    /* End of Switch: '<S36>/Switch' */
    /* End of Outputs for SubSystem: '<S31>/Limiter' */
    /* End of Outputs for SubSystem: '<S8>/LowpassTResetEnabled21' */

    /* Sum: '<S8>/Summation3' */
    rtb_Switch1_bu = VeTITC_M_TaCL_LPF_External + VeTITC_M_TaActDmpCmd_Extnl;

    /* Sum: '<S8>/Summation10' */
    rtb_TmpSignalConversionAtVeICSR_M_TcCLOu =
        (rtb_TmpSignalConversionAtVeICSR_M_TcCLOu + VeTITC_M_TcActDmpCmd_Extnl)
        + VeTITC_M_TcPulseCmd;

    /* Sum: '<S8>/Summation2' */
    VeTITR_M_TbCLSum = (VeTITR_M_TbCLSum + VeTITC_M_TbActDmpCmd_Extnl) +
        VeTITC_M_TbPulseCmd;

    /* Sum: '<S8>/Summation8' incorporates:
     *  Sum: '<S8>/Summation11'
     */
    rtb_TmpSignalConversionAtVeTISR_n_InputS = VeTITC_M_TcCL_LPF_External +
        VeTITC_M_TcActDmpCmd_Extnl;

    /* Product: '<S8>/Multiplication14' incorporates:
     *  Inport: '<Root>/VaTSXR_r_HTDRTacTiConstrn'
     *  Selector: '<S14>/Selector6'
     *  SignalConversion: '<S4>/SignalConversion3'
     */
    rtb_Multiplication14 = rtb_TmpSignalConversionAtVeTISR_n_InputS * tmpRead_a
        [13];

    /* Product: '<S8>/Multiplication15' incorporates:
     *  Inport: '<Root>/VaTSXR_r_HTDRTacTiConstrn'
     *  Selector: '<S14>/Selector5'
     *  SignalConversion: '<S4>/SignalConversion3'
     */
    rtb_Multiplication15 = tmpRead_a[12] *
        rtb_TmpSignalConversionAtVeTISR_n_InputS;

    /* Product: '<S8>/Multiplication16' incorporates:
     *  Inport: '<Root>/VaTSXR_r_HTDRTacTiConstrn'
     *  Selector: '<S14>/Selector8'
     *  SignalConversion: '<S4>/SignalConversion3'
     */
    rtb_Multiplication16 = rtb_TmpSignalConversionAtVeTISR_n_InputS * tmpRead_a
        [14];

    /* Sum: '<S8>/Summation8' */
    rtb_TmpSignalConversionAtVeTISR_n_InputS = VeTITC_M_TbCL_LPF_External +
        VeTITC_M_TbActDmpCmd_Extnl;

    /* Sum: '<S8>/Summation4' */
    VeTITR_M_TaCLSum = (VeTITR_M_TaCLSum + VeTITC_M_TaActDmpCmd_Extnl) +
        VeTITC_M_TaPulseCmd;

    /* Update for UnitDelay: '<S14>/UnitDelay' */
    TITR_ac_DW.UnitDelay_DSTATE_i = rtb_TmpSignalConversionAtVeVTVR_t_EngCom;

    /* Update for UnitDelay: '<S14>/UnitDelay1' */
    TITR_ac_DW.UnitDelay1_DSTATE_b = rtb_VM_Conditional_Signal_InputTrqAirflo;

    /* Update for UnitDelay: '<S14>/UnitDelay3' */
    TITR_ac_DW.UnitDelay3_DSTATE = rtb_Abs3;

    /* Update for UnitDelay: '<S14>/UnitDelay2' */
    TITR_ac_DW.UnitDelay2_DSTATE_j = rtb_LeTITC_n_PumpSpd;

    /* Update for UnitDelay: '<S14>/UnitDelay4' */
    TITR_ac_DW.UnitDelay4_DSTATE = rtb_TmpSignalConversionAtVeETQR_M_EngT_n;

    /* Update for UnitDelay: '<S14>/UnitDelay5' */
    TITR_ac_DW.UnitDelay5_DSTATE = rtb_Add;

    /* SignalConversion generated from: '<S1>/InputTorqAct' incorporates:
     *  Inport: '<Root>/VaTSXR_r_TITRCalcTiEqn'
     *  Inport: '<Root>/VeICSR_b_Disable_Ni'
     *  Inport: '<Root>/VeTISR_b_InputSpeedFA'
     *  SignalConversion generated from: '<S1>/InputTorqAct_wCL'
     *  SignalConversion generated from: '<S1>/InputTrqAirflow'
     *  SignalConversion generated from: '<S1>/InputTrqCapacityMinOff'
     *  SignalConversion generated from: '<S1>/InputTrqCapacityMinRunImmed'
     *  SignalConversion generated from: '<S1>/InputTrqMax'
     *  SignalConversion generated from: '<S1>/InputTrqMin'
     */
#if Rte_SysCon_Variant_TITR_FUNC

    (void)Rte_Read_VeICSR_b_Disable_Ni_Value(&tmpRead_1);
    (void)Rte_Read_VaTSXR_r_TITRCalcTiEqn_Value(tmpRead_0);
    (void)Rte_Read_VeTISR_b_InputSpeedFA_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S1>/TITC_InTorqEstCtrl' */
    /* Product: '<S114>/Multiplication3' incorporates:
     *  Constant: '<S114>/ConstantValue1'
     *  Constant: '<S88>/Calib'
     *  Inport: '<Root>/VaTSXR_r_TITRCalcTiEqn'
     *  Inport: '<Root>/VeICSR_b_Disable_Ni'
     *  Inport: '<Root>/VeTISR_b_InputSpeedFA'
     *  Product: '<S113>/Multiplication3'
     */
    rtb_Division_e = HeTITR_t_12p5_dT / 2.0F;

    /* Product: '<S114>/Multiplication2' incorporates:
     *  Constant: '<S119>/Calib'
     *  Product: '<S114>/Multiplication3'
     *  Product: '<S114>/Multiplication4'
     *  Sum: '<S114>/Summation'
     *  Sum: '<S114>/Summation1'
     *  Sum: '<S114>/Summation2'
     *  UnitDelay: '<S114>/UnitDelay'
     *  UnitDelay: '<S114>/UnitDelay1'
     */
    TITR_ac_DW.UnitDelay1_DSTATE_n = ((rtb_TmpSignalConversionAtVeVSDR_n_PrimNo
        - ((rtb_Division_e - KeTITR_t_NoDotTimePeriod) *
           TITR_ac_DW.UnitDelay1_DSTATE_n)) - TITR_ac_DW.UnitDelay_DSTATE_d) /
        (rtb_Division_e + KeTITR_t_NoDotTimePeriod);

    /* Outputs for Atomic SubSystem: '<S92>/DifferenceQuotient4' */
    /* Sum: '<S116>/Sum//Sub' incorporates:
     *  UnitDelay: '<S116>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeVTVR_t_EngCom =
        rtb_TmpSignalConversionAtVeVSDR_n_PrimNo - TITR_ac_DW.UnitDelay_DSTATE_b;

    /* Update for UnitDelay: '<S116>/UnitDelay' */
    TITR_ac_DW.UnitDelay_DSTATE_b = rtb_TmpSignalConversionAtVeVSDR_n_PrimNo;

    /* End of Outputs for SubSystem: '<S92>/DifferenceQuotient4' */

    /* Product: '<S113>/Multiplication2' incorporates:
     *  Constant: '<S118>/Calib'
     *  Product: '<S113>/Multiplication4'
     *  Sum: '<S113>/Summation'
     *  Sum: '<S113>/Summation1'
     *  Sum: '<S113>/Summation2'
     *  UnitDelay: '<S113>/UnitDelay'
     *  UnitDelay: '<S113>/UnitDelay1'
     */
    TITR_ac_DW.UnitDelay1_DSTATE_l = ((rtb_TmpSignalConversionAtVeTISR_n_Inpu_m
        - ((rtb_Division_e - KeTITR_t_NiDotTimePeriod) *
           TITR_ac_DW.UnitDelay1_DSTATE_l)) - TITR_ac_DW.UnitDelay_DSTATE_h) /
        (rtb_Division_e + KeTITR_t_NiDotTimePeriod);

    /* Outputs for Atomic SubSystem: '<S92>/DifferenceQuotient3' */
    /* Product: '<S115>/Division' incorporates:
     *  Constant: '<S88>/Calib'
     *  Sum: '<S115>/Sum//Sub'
     *  UnitDelay: '<S115>/UnitDelay'
     */
    rtb_Division_e = (rtb_TmpSignalConversionAtVeTISR_n_Inpu_m -
                      TITR_ac_DW.UnitDelay_DSTATE_m) / HeTITR_t_12p5_dT;

    /* Update for UnitDelay: '<S115>/UnitDelay' */
    TITR_ac_DW.UnitDelay_DSTATE_m = rtb_TmpSignalConversionAtVeTISR_n_Inpu_m;

    /* End of Outputs for SubSystem: '<S92>/DifferenceQuotient3' */

    /* Switch: '<S92>/Switch3' incorporates:
     *  Constant: '<S117>/Calib'
     *  Constant: '<S89>/Calib'
     *  Logic: '<S92>/Logical'
     *  Logic: '<S92>/Logical2'
     *  Switch: '<S92>/Switch'
     */
    if ((!tmpRead) && (KeTITR_b_NiDotBuffCranked))
    {
        /* Switch: '<S92>/Switch3' incorporates:
         *  Inport: '<Root>/VeTISR_dn_InputAcceltn'
         */
        (void)Rte_Read_VeTISR_dn_InputAcceltn_Value(&TITR_ac_B.Gain_h);
    }
    else if (KeTITR_b_UseTuskindT)
    {
        /* Switch: '<S92>/Switch' incorporates:
         *  Switch: '<S92>/Switch3'
         *  UnitDelay: '<S113>/UnitDelay1'
         */
        TITR_ac_B.Gain_h = TITR_ac_DW.UnitDelay1_DSTATE_l;
    }
    else
    {
        /* Switch: '<S92>/Switch3' incorporates:
         *  Switch: '<S92>/Switch'
         */
        TITR_ac_B.Gain_h = rtb_Division_e;
    }

    /* End of Switch: '<S92>/Switch3' */

    /* If: '<S5>/If1' incorporates:
     *  Constant: '<S87>/Calib'
     *  DataTypeConversion: '<S5>/DataTypeConversion'
     *  Logic: '<S5>/Logical11'
     *  Logic: '<S5>/Logical2'
     *  Selector: '<S5>/Selector'
     *  SignalConversion generated from: '<S1>/VeESSR_e_EngStartStopSt'
     */
    if ((!tmpRead_1) || (HaTITR_b_EnblTiSnsd4Strt
                         [(rtb_TmpSignalConversionAtVeESSR_e_EngSta)]))
    {
        /* Outputs for IfAction SubSystem: '<S5>/CalcTiFromTSXR' incorporates:
         *  ActionPort: '<S84>/ActionPort'
         */
        /* SignalConversion generated from: '<S84>/Product' incorporates:
         *  Constant: '<S5>/ConstantValue10'
         *  Constant: '<S5>/ConstantValue7'
         *  Constant: '<S5>/ConstantValue8'
         *  Constant: '<S5>/ConstantValue9'
         */
        rtb_TmpSignalConversionAtVeMTQR[0] =
            rtb_TmpSignalConversionAtVeMTQR_M_MtrA_T;
        rtb_TmpSignalConversionAtVeMTQR[1] =
            rtb_TmpSignalConversionAtVeMTIR_M_MtrB_T;
        rtb_TmpSignalConversionAtVeMTQR[2] =
            rtb_TmpSignalConversionAtVeMTIR_M_MtrC_T;
        rtb_TmpSignalConversionAtVeMTQR[3] = 0.0F;
        rtb_TmpSignalConversionAtVeMTQR[4] = 0.0F;
        rtb_TmpSignalConversionAtVeMTQR[5] = 0.0F;
        rtb_TmpSignalConversionAtVeMTQR[6] = 0.0F;
        rtb_TmpSignalConversionAtVeMTQR[7] =
            rtb_TmpSignalConversionAtVeTTQR_M_SumTrq;
        rtb_TmpSignalConversionAtVeMTQR[8] =
            rtb_TmpSignalConversionAtVeTCCR_M_TimpOu;
        rtb_TmpSignalConversionAtVeMTQR[9] =
            rtb_TmpSignalConversionAtVeHSER_M_Clch1_;
        rtb_TmpSignalConversionAtVeMTQR[10] =
            rtb_TmpSignalConversionAtVeHSER_M_Clch2_;
        rtb_TmpSignalConversionAtVeMTQR[11] =
            rtb_TmpSignalConversionAtVeHSER_M_Clch3_;
        rtb_TmpSignalConversionAtVeMTQR[12] =
            rtb_TmpSignalConversionAtVeHSER_M_Clch4_;
        rtb_TmpSignalConversionAtVeMTQR[13] =
            rtb_TmpSignalConversionAtVeTISR_n_Inpu_m;
        rtb_TmpSignalConversionAtVeMTQR[14] = TITR_ac_B.Gain_h;
        rtb_TmpSignalConversionAtVeMTQR[15] =
            rtb_TmpSignalConversionAtVeVSDR_n_PrimNo;

        /* End of Outputs for SubSystem: '<S5>/CalcTiFromTSXR' */

        /* Switch: '<S92>/Switch1' incorporates:
         *  Constant: '<S89>/Calib'
         */
        if (KeTITR_b_UseTuskindT)
        {
            /* Outputs for IfAction SubSystem: '<S5>/CalcTiFromTSXR' incorporates:
             *  ActionPort: '<S84>/ActionPort'
             */
            /* SignalConversion generated from: '<S84>/Product' incorporates:
             *  UnitDelay: '<S114>/UnitDelay1'
             */
            rtb_TmpSignalConversionAtVeMTQR[16] = TITR_ac_DW.UnitDelay1_DSTATE_n;

            /* End of Outputs for SubSystem: '<S5>/CalcTiFromTSXR' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S5>/CalcTiFromTSXR' incorporates:
             *  ActionPort: '<S84>/ActionPort'
             */
            /* Outputs for Atomic SubSystem: '<S92>/DifferenceQuotient4' */
            /* SignalConversion generated from: '<S84>/Product' incorporates:
             *  Constant: '<S88>/Calib'
             *  Product: '<S116>/Division'
             */
            rtb_TmpSignalConversionAtVeMTQR[16] =
                rtb_TmpSignalConversionAtVeVTVR_t_EngCom / HeTITR_t_12p5_dT;

            /* End of Outputs for SubSystem: '<S92>/DifferenceQuotient4' */
            /* End of Outputs for SubSystem: '<S5>/CalcTiFromTSXR' */
        }

        /* End of Switch: '<S92>/Switch1' */

        /* Outputs for IfAction SubSystem: '<S5>/CalcTiFromTSXR' incorporates:
         *  ActionPort: '<S84>/ActionPort'
         */
        /* SignalConversion generated from: '<S84>/Product' incorporates:
         *  Gain: '<S93>/Gain1'
         *  Sum: '<S93>/Sum1'
         *  UnitDelay: '<S93>/UnitDelay'
         */
        rtb_TmpSignalConversionAtVeMTQR[17] =
            (rtb_TmpSignalConversionAtVeHSER_n_NxOutp +
             TITR_ac_DW.UnitDelay_DSTATE) * 0.5F;
        rtb_TmpSignalConversionAtVeMTQR[18] =
            rtb_TmpSignalConversionAtVeHSER_dn_NxDot;

        /* Product: '<S84>/Product' incorporates:
         *  Inport: '<Root>/VaTSXR_r_TITRCalcTiEqn'
         *  SignalConversion: '<S5>/SignalConversion'
         */
        TITR_ac_B.OutportBufferForSnsdTi_Raw = 0.0F;
        for (i = 0; i < 19; i++)
        {
            TITR_ac_B.OutportBufferForSnsdTi_Raw += tmpRead_0[i] *
                rtb_TmpSignalConversionAtVeMTQR[i];
        }

        /* SignalConversion generated from: '<S5>/TiPostDamp_Raw' incorporates:
         *  Gain: '<S95>/Gain'
         *  Merge: '<S5>/Merge2'
         *  Product: '<S84>/Product'
         */
        TITR_ac_B.OutportBufferForTiPostDamp_Raw =
            TITR_ac_B.OutportBufferForSnsdTi_Raw;

        /* SignalConversion generated from: '<S5>/SnsdTi_notVld' incorporates:
         *  Constant: '<S84>/FALSEConstant'
         *  Merge: '<S5>/Merge4'
         *  SignalConversion generated from: '<S84>/Calc_N_FA'
         */
        TITR_ac_B.OutportBufferForSnsdTi_notVld = false;

        /* End of Outputs for SubSystem: '<S5>/CalcTiFromTSXR' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S5>/FixedGear_Case' incorporates:
         *  ActionPort: '<S86>/Resets'
         */
        /* Product: '<S84>/Product' incorporates:
         *  Gain: '<S96>/Gain'
         *  Merge: '<S5>/Merge'
         *  SignalConversion generated from: '<S5>/SnsdTi_Raw'
         */
        TITR_ac_B.OutportBufferForSnsdTi_Raw =
            rtb_TmpSignalConversionAtVeETQR_M_EngTrq;

        /* SignalConversion generated from: '<S5>/TiPostDamp_Raw' incorporates:
         *  Gain: '<S97>/Gain'
         *  Merge: '<S5>/Merge2'
         */
        TITR_ac_B.OutportBufferForTiPostDamp_Raw =
            rtb_TmpSignalConversionAtVeETQR_M_EngTrq;

        /* SignalConversion generated from: '<S5>/SnsdTi_notVld' incorporates:
         *  Constant: '<S86>/TRUEConstant'
         *  Merge: '<S5>/Merge4'
         *  SignalConversion generated from: '<S86>/Out3'
         */
        TITR_ac_B.OutportBufferForSnsdTi_notVld = true;

        /* End of Outputs for SubSystem: '<S5>/FixedGear_Case' */
    }

    /* End of If: '<S5>/If1' */

    /* Update for UnitDelay: '<S93>/UnitDelay' */
    TITR_ac_DW.UnitDelay_DSTATE = rtb_TmpSignalConversionAtVeHSER_n_NxOutp;

    /* Update for UnitDelay: '<S114>/UnitDelay' */
    TITR_ac_DW.UnitDelay_DSTATE_d = rtb_TmpSignalConversionAtVeVSDR_n_PrimNo;

    /* Update for UnitDelay: '<S113>/UnitDelay' */
    TITR_ac_DW.UnitDelay_DSTATE_h = rtb_TmpSignalConversionAtVeTISR_n_Inpu_m;

    /* End of Outputs for SubSystem: '<S1>/TITC_InTorqEstCtrl' */

    /* Outputs for Function Call SubSystem: '<S1>/TITC_InTrqEstFlt' */
    /* Sum: '<S120>/Subtraction1' incorporates:
     *  Constant: '<S123>/Calib'
     *  Product: '<S120>/Multiplication'
     *  Sum: '<S120>/Subtraction'
     *  UnitDelay: '<S6>/UnitDelay2'
     */
    TITR_ac_DW.UnitDelay2_DSTATE += (TITR_ac_B.OutportBufferForSnsdTi_Raw -
        TITR_ac_DW.UnitDelay2_DSTATE) * KeTITR_K_SnsdTi_FltCoef;

    /* Gain: '<S125>/Gain' incorporates:
     *  UnitDelay: '<S6>/UnitDelay2'
     */
    TITR_ac_B.Gain = TITR_ac_DW.UnitDelay2_DSTATE;

    /* Sum: '<S6>/Sum' incorporates:
     *  UnitDelay: '<S6>/UnitDelay2'
     */
    TITR_ac_B.Sum = TITR_ac_DW.UnitDelay2_DSTATE +
        TITR_ac_B.OutportBufferForPumpTorq;

    /* Sum: '<S121>/Subtraction1' incorporates:
     *  Constant: '<S124>/Calib'
     *  Product: '<S121>/Multiplication'
     *  Sum: '<S121>/Subtraction'
     *  UnitDelay: '<S6>/UnitDelay1'
     */
    TITR_ac_DW.UnitDelay1_DSTATE += (TITR_ac_B.OutportBufferForTiPostDamp_Raw -
        TITR_ac_DW.UnitDelay1_DSTATE) * KeTITR_K_TiPstDamp_Flt;

    /* Gain: '<S126>/Gain' incorporates:
     *  UnitDelay: '<S6>/UnitDelay1'
     */
    TITR_ac_B.Gain_k = TITR_ac_DW.UnitDelay1_DSTATE;

    /* End of Outputs for SubSystem: '<S1>/TITC_InTrqEstFlt' */

    /* Outport: '<Root>/VeTITR_M_InputTorqAct' */
    (void)Rte_Write_VeTITR_M_InputTorqAct_Value
        (TITR_ac_B.VariantMerge_For_Variant_Source_VariantS[0]);

    /* Outport: '<Root>/VeTITR_M_InputTorqAct_wPDCL' */
    (void)Rte_Write_VeTITR_M_InputTorqAct_wPDCL_Value
        (TITR_ac_B.OutportBufferForInputTorqAct_wCL);

    /* Outport: '<Root>/VeTITR_M_InputTrqAirflow' */
    (void)Rte_Write_VeTITR_M_InputTrqAirflow_Value
        (TITR_ac_B.OutportBufferForInputTrqAirflow);

    /* Outport: '<Root>/VeTITR_M_InputTrqCapacityMinOff' */
    (void)Rte_Write_VeTITR_M_InputTrqCapacityMinOff_Value
        (TITR_ac_B.OutportBufferForInputTrqCapacityMinOff);

    /* Outport: '<Root>/VeTITR_M_InputTrqCapacityMinRunImmed' */
    (void)Rte_Write_VeTITR_M_InputTrqCapacityMinRunImmed_Value
        (TITR_ac_B.OutportBufferForInputTrqCapacityMinRunIm);

    /* Outport: '<Root>/VeTITR_M_InputTrqMax' */
    (void)Rte_Write_VeTITR_M_InputTrqMax_Value
        (TITR_ac_B.OutportBufferForInputTrqMax);

    /* Outport: '<Root>/VeTITR_M_InputTrqMin' */
    (void)Rte_Write_VeTITR_M_InputTrqMin_Value
        (TITR_ac_B.OutportBufferForInputTrqMin);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
#endif

    /* End of SignalConversion generated from: '<S1>/InputTorqAct' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/TITC_CalcTiFinal'
     */
    /* Outport: '<Root>/VeTITR_dn_NxDotCL_Fast' incorporates:
     *  Inport: '<Root>/VaTSXR_r_HTDRTacTiConstrn'
     *  Product: '<S8>/Multiplication10'
     *  Product: '<S8>/Multiplication11'
     *  Product: '<S8>/Multiplication9'
     *  Selector: '<S14>/Selector7'
     *  Selector: '<S14>/Selector8'
     *  Selector: '<S14>/Selector9'
     *  SignalConversion generated from: '<S1>/NxDotCL_Fast'
     *  SignalConversion: '<S4>/SignalConversion3'
     *  Sum: '<S8>/Summation6'
     */
    (void)Rte_Write_VeTITR_dn_NxDotCL_Fast_Value(((VeTITR_M_TaCLSum * tmpRead_a
        [2]) + (VeTITR_M_TbCLSum * tmpRead_a[8])) +
        (rtb_TmpSignalConversionAtVeICSR_M_TcCLOu * tmpRead_a[14]));

    /* Outport: '<Root>/VeTITR_dn_NxDotCL_Slow' incorporates:
     *  Inport: '<Root>/VaTSXR_r_HTDRTacTiConstrn'
     *  Product: '<S8>/Multiplication17'
     *  Product: '<S8>/Multiplication18'
     *  Selector: '<S14>/Selector7'
     *  Selector: '<S14>/Selector9'
     *  SignalConversion generated from: '<S1>/NxDotCL_Slow'
     *  SignalConversion: '<S4>/SignalConversion3'
     *  Sum: '<S8>/Summation13'
     */
    (void)Rte_Write_VeTITR_dn_NxDotCL_Slow_Value(((rtb_Switch1_bu * tmpRead_a[2])
        + (rtb_TmpSignalConversionAtVeTISR_n_InputS * tmpRead_a[8])) +
        rtb_Multiplication16);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* SignalConversion generated from: '<S1>/PumpTorq' incorporates:
     *  SignalConversion generated from: '<S1>/SnsdEng_Flt'
     *  SignalConversion generated from: '<S1>/SnsdTi_Flt'
     *  SignalConversion generated from: '<S1>/SnsdTi_Raw'
     *  SignalConversion generated from: '<S1>/SnsdTi_notVld'
     */
#if Rte_SysCon_Variant_TITR_FUNC

    /* Outport: '<Root>/VeTITR_M_PumpTorq' */
    (void)Rte_Write_VeTITR_M_PumpTorq_Value(TITR_ac_B.OutportBufferForPumpTorq);

    /* Outport: '<Root>/VeTITR_M_SnsdEng_Flt' */
    (void)Rte_Write_VeTITR_M_SnsdEng_Flt_Value(TITR_ac_B.Sum);

    /* Outport: '<Root>/VeTITR_M_SnsdTi_Flt' */
    (void)Rte_Write_VeTITR_M_SnsdTi_Flt_Value(TITR_ac_B.Gain);

    /* Outport: '<Root>/VeTITR_M_SnsdTiRaw_Out' */
    (void)Rte_Write_VeTITR_M_SnsdTiRaw_Out_Value
        (TITR_ac_B.OutportBufferForSnsdTi_Raw);

    /* Outport: '<Root>/VeTITR_b_SnsdTi_notVld' */
    (void)Rte_Write_VeTITR_b_SnsdTi_notVld_Value
        (TITR_ac_B.OutportBufferForSnsdTi_notVld);

#endif

    /* End of SignalConversion generated from: '<S1>/PumpTorq' */

    /* Outport: '<Root>/VeTITR_M_TaCLSum' incorporates:
     *  SignalConversion generated from: '<S1>/Ta_CL_PreMapper'
     */
    (void)Rte_Write_VeTITR_M_TaCLSum_Value(VeTITR_M_TaCLSum);

    /* Outport: '<Root>/VeTITR_M_TbCLSum' incorporates:
     *  SignalConversion generated from: '<S1>/Tb_CL_LPF'
     */
    (void)Rte_Write_VeTITR_M_TbCLSum_Value(VeTITR_M_TbCLSum);

    /* Outport: '<Root>/VeTITR_M_TcCLSum' incorporates:
     *  SignalConversion generated from: '<S1>/Tc_CL_LPF'
     */
    (void)Rte_Write_VeTITR_M_TcCLSum_Value
        (rtb_TmpSignalConversionAtVeICSR_M_TcCLOu);

    /* SignalConversion generated from: '<S1>/TiPostDamp_Flt' incorporates:
     *  SignalConversion generated from: '<S1>/TiPostDamp_Raw'
     */
#if Rte_SysCon_Variant_TITR_FUNC

    /* Outport: '<Root>/VeTITR_M_TiPostDamp_Flt' */
    (void)Rte_Write_VeTITR_M_TiPostDamp_Flt_Value(TITR_ac_B.Gain_k);

    /* Outport: '<Root>/VeTITR_M_TiPostDamp_Raw' */
    (void)Rte_Write_VeTITR_M_TiPostDamp_Raw_Value
        (TITR_ac_B.OutportBufferForTiPostDamp_Raw);

#endif

    /* End of SignalConversion generated from: '<S1>/TiPostDamp_Flt' */

    /* Outport: '<Root>/VeTITR_M_TiPrdt' incorporates:
     *  SignalConversion generated from: '<S1>/TiPrdt'
     */
    (void)Rte_Write_VeTITR_M_TiPrdt_Value(VeTITR_M_TiPrdt);

    /* Outport: '<Root>/VeTITR_k_TiSEMBlend' incorporates:
     *  SignalConversion generated from: '<S1>/TiSEMBlend'
     *  UnitDelay: '<S51>/UnitDelay'
     */
    (void)Rte_Write_VeTITR_k_TiSEMBlend_Value(TITR_ac_DW.UnitDelay_DSTATE_n);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/TITC_CalcTiFinal'
     */
    /* Outport: '<Root>/VeTITR_M_Ti_CL_Fast' incorporates:
     *  Inport: '<Root>/VaTSXR_r_HTDRTacTiConstrn'
     *  Product: '<S8>/Multiplication12'
     *  Product: '<S8>/Multiplication3'
     *  Product: '<S8>/Multiplication4'
     *  Selector: '<S14>/Selector1'
     *  Selector: '<S14>/Selector2'
     *  Selector: '<S14>/Selector5'
     *  SignalConversion generated from: '<S1>/Ti_CL_Fast'
     *  SignalConversion: '<S4>/SignalConversion3'
     *  Sum: '<S8>/Summation'
     */
    (void)Rte_Write_VeTITR_M_Ti_CL_Fast_Value(((VeTITR_M_TaCLSum * tmpRead_a[0])
        + (VeTITR_M_TbCLSum * tmpRead_a[6])) +
        (rtb_TmpSignalConversionAtVeICSR_M_TcCLOu * tmpRead_a[12]));

    /* Outport: '<Root>/VeTITR_M_Ti_CL_Slow' incorporates:
     *  Inport: '<Root>/VaTSXR_r_HTDRTacTiConstrn'
     *  Product: '<S8>/Multiplication6'
     *  Product: '<S8>/Multiplication7'
     *  Selector: '<S14>/Selector1'
     *  Selector: '<S14>/Selector2'
     *  SignalConversion generated from: '<S1>/Ti_CL_Slow'
     *  SignalConversion: '<S4>/SignalConversion3'
     *  Sum: '<S8>/Summation12'
     */
    (void)Rte_Write_VeTITR_M_Ti_CL_Slow_Value(((rtb_Switch1_bu * tmpRead_a[0]) +
        (rtb_TmpSignalConversionAtVeTISR_n_InputS * tmpRead_a[6])) +
        rtb_Multiplication15);

    /* Outport: '<Root>/VeTITR_M_Ti_xSEM' incorporates:
     *  Gain: '<S38>/Gain'
     *  SignalConversion generated from: '<S1>/Ti_xSEM'
     */
    (void)Rte_Write_VeTITR_M_Ti_xSEM_Value(VeTITR_M_TiPrdt);

    /* Outport: '<Root>/VeTITR_M_To_CL_Fast' incorporates:
     *  Inport: '<Root>/VaTSXR_r_HTDRTacTiConstrn'
     *  Product: '<S8>/Multiplication13'
     *  Product: '<S8>/Multiplication2'
     *  Product: '<S8>/Multiplication5'
     *  Selector: '<S14>/Selector6'
     *  SignalConversion generated from: '<S1>/To_CL_Fast'
     *  SignalConversion: '<S4>/SignalConversion3'
     *  Sum: '<S8>/Summation1'
     */
    (void)Rte_Write_VeTITR_M_To_CL_Fast_Value(((VeTITR_M_TaCLSum *
        rtb_Selector2_n) + (VeTITR_M_TbCLSum * rtb_Subtraction2)) +
        (rtb_TmpSignalConversionAtVeICSR_M_TcCLOu * tmpRead_a[13]));

    /* Outport: '<Root>/VeTITR_M_To_CL_Slow' incorporates:
     *  Product: '<S8>/Multiplication1'
     *  Product: '<S8>/Multiplication8'
     *  SignalConversion generated from: '<S1>/To_CL_Slow'
     *  Sum: '<S8>/Summation7'
     */
    (void)Rte_Write_VeTITR_M_To_CL_Slow_Value(((rtb_Switch1_bu * rtb_Selector2_n)
        + (rtb_TmpSignalConversionAtVeTISR_n_InputS * rtb_Subtraction2)) +
        rtb_Multiplication14);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* SignalConversion generated from: '<S1>/TrqStaticSEM' incorporates:
     *  SignalConversion generated from: '<S1>/VeTITC_M_EngCorrTrq'
     *  SignalConversion generated from: '<S1>/VeTITC_dn_NiDot'
     */
#if Rte_SysCon_Variant_TITR_FUNC

    /* Outport: '<Root>/VeTITR_M_InputTrqStaticSEM' */
    (void)Rte_Write_VeTITR_M_InputTrqStaticSEM_Value
        (TITR_ac_B.OutportBufferForTrqStaticSEM);

    /* Outport: '<Root>/VeTITR_M_EngCorrTrq' */
    (void)Rte_Write_VeTITR_M_EngCorrTrq_Value(TITR_ac_B.Gain_d);

    /* Outport: '<Root>/VeTITR_dn_NiDot' */
    (void)Rte_Write_VeTITR_dn_NiDot_Value(TITR_ac_B.Gain_h);

#endif

    /* End of SignalConversion generated from: '<S1>/TrqStaticSEM' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Output function */
FUNC(void, TITR_CODE) TITR_PUP(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PUP' incorporates:
     *  SubSystem: '<Root>/TITR_PUP'
     */
    /* SignalConversion generated from: '<S2>/EngTrqActual_w_CL' incorporates:
     *  SignalConversion generated from: '<S2>/M_EngCapacityMinOff'
     *  SignalConversion generated from: '<S2>/M_EngCapacityMinRunImmed'
     *  SignalConversion generated from: '<S2>/M_EngCorrTrq'
     *  SignalConversion generated from: '<S2>/M_EngTrqAirflow'
     *  SignalConversion generated from: '<S2>/M_EngTrqStaticSEM'
     *  SignalConversion generated from: '<S2>/M_InputTorqAct'
     *  SignalConversion generated from: '<S2>/M_InputTrqMax'
     *  SignalConversion generated from: '<S2>/M_InputTrqMin'
     *  SignalConversion generated from: '<S2>/M_PumpTorq'
     *  SignalConversion generated from: '<S2>/M_SnsdTi_Raw'
     *  SignalConversion generated from: '<S2>/M_TiPostDamper_Raw'
     *  SignalConversion generated from: '<S2>/b_SnsdTi_notVld'
     */
#if Rte_SysCon_Variant_TITR_NF

    /* S-Function (fcgen): '<S2>/FcnCallGen' */
    /* Outputs for Function Call SubSystem: '<S2>/TITC_PuPInitInputTorqLim' */
    /* SignalConversion generated from: '<S177>/M_InputTorqAct' */
    TITR_ac_B.OutportBufferForM_InputTorqAct_e = 0.0F;

    /* SignalConversion generated from: '<S177>/M_InputTrqMax' */
    TITR_ac_B.OutportBufferForM_InputTrqMax_o = 0.0F;

    /* SignalConversion generated from: '<S177>/M_InputTrqMin' */
    TITR_ac_B.OutportBufferForM_InputTrqMin_f = 0.0F;

    /* SignalConversion generated from: '<S177>/M_EngTrqAirflow' */
    TITR_ac_B.OutportBufferForM_EngTrqAirflow_l = 0.0F;

    /* SignalConversion generated from: '<S177>/M_EngCapacityMinOff' */
    TITR_ac_B.OutportBufferForM_EngCapacityMinOff_o = 0.0F;

    /* SignalConversion generated from: '<S177>/M_EngCapacityMinRunImmed' */
    TITR_ac_B.OutportBufferForM_EngCapacityMinRunImm_a = 0.0F;

    /* SignalConversion generated from: '<S177>/M_PumpTorq' */
    TITR_ac_B.OutportBufferForM_PumpTorq_l = 0.0F;

    /* SignalConversion generated from: '<S177>/M_EngCorrTrq' */
    TITR_ac_B.OutportBufferForM_EngCorrTrq_m = 0.0F;

    /* SignalConversion generated from: '<S177>/M_EngTrqStaticSEM' */
    TITR_ac_B.OutportBufferForM_EngTrqStaticSEM_d = 0.0F;

    /* SignalConversion generated from: '<S177>/EngTrqActual_w_CL' */
    TITR_ac_B.OutportBufferForEngTrqActual_w_CL_g = 0.0F;

    /* End of Outputs for SubSystem: '<S2>/TITC_PuPInitInputTorqLim' */

    /* Outport: '<Root>/VeTITR_M_InputTorqAct_wPDCL' */
    (void)Rte_Write_VeTITR_M_InputTorqAct_wPDCL_Value
        (TITR_ac_B.OutportBufferForEngTrqActual_w_CL_g);

    /* Outport: '<Root>/VeTITR_M_InputTrqCapacityMinOff' */
    (void)Rte_Write_VeTITR_M_InputTrqCapacityMinOff_Value
        (TITR_ac_B.OutportBufferForM_EngCapacityMinOff_o);

    /* Outport: '<Root>/VeTITR_M_InputTrqCapacityMinRunImmed' */
    (void)Rte_Write_VeTITR_M_InputTrqCapacityMinRunImmed_Value
        (TITR_ac_B.OutportBufferForM_EngCapacityMinRunImm_a);

    /* Outport: '<Root>/VeTITR_M_EngCorrTrq' */
    (void)Rte_Write_VeTITR_M_EngCorrTrq_Value
        (TITR_ac_B.OutportBufferForM_EngCorrTrq_m);

    /* Outport: '<Root>/VeTITR_M_InputTrqAirflow' */
    (void)Rte_Write_VeTITR_M_InputTrqAirflow_Value
        (TITR_ac_B.OutportBufferForM_EngTrqAirflow_l);

    /* Outport: '<Root>/VeTITR_M_InputTrqStaticSEM' */
    (void)Rte_Write_VeTITR_M_InputTrqStaticSEM_Value
        (TITR_ac_B.OutportBufferForM_EngTrqStaticSEM_d);

    /* Outport: '<Root>/VeTITR_M_InputTorqAct' */
    (void)Rte_Write_VeTITR_M_InputTorqAct_Value
        (TITR_ac_B.OutportBufferForM_InputTorqAct_e);

    /* Outport: '<Root>/VeTITR_M_InputTrqMax' */
    (void)Rte_Write_VeTITR_M_InputTrqMax_Value
        (TITR_ac_B.OutportBufferForM_InputTrqMax_o);

    /* Outport: '<Root>/VeTITR_M_InputTrqMin' */
    (void)Rte_Write_VeTITR_M_InputTrqMin_Value
        (TITR_ac_B.OutportBufferForM_InputTrqMin_f);

    /* Outport: '<Root>/VeTITR_M_PumpTorq' */
    (void)Rte_Write_VeTITR_M_PumpTorq_Value
        (TITR_ac_B.OutportBufferForM_PumpTorq_l);

    /* Outport: '<Root>/VeTITR_M_SnsdTiRaw_Out' */
    (void)Rte_Write_VeTITR_M_SnsdTiRaw_Out_Value(0.0F);

    /* Outport: '<Root>/VeTITR_M_TiPostDamp_Raw' */
    (void)Rte_Write_VeTITR_M_TiPostDamp_Raw_Value(0.0F);

    /* Outport: '<Root>/VeTITR_b_SnsdTi_notVld' */
    (void)Rte_Write_VeTITR_b_SnsdTi_notVld_Value(false);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
#endif

    /* End of SignalConversion generated from: '<S2>/EngTrqActual_w_CL' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PUP' */
}

/* Output function */
FUNC(void, TITR_CODE) TITR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/TITR_PwrOn'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S178>/VeTITR_M_TiFinal_Out_Init' */
    TITR_ac_B.OutportBufferForVeTITR_M_TiFinal_Out_Ini = 0.0F;

    /* SignalConversion generated from: '<S178>/VeTITR_M_TiPrdt_Out_Init' */
    TITR_ac_B.OutportBufferForVeTITR_M_TiPrdt_Out_Init = 0.0F;

    /* SignalConversion generated from: '<S178>/VeTITR_k_TiSEMBlend_Out_Init' */
    TITR_ac_B.OutportBufferForVeTITR_k_TiSEMBlend_Out_ = 0.0F;

    /* SignalConversion generated from: '<S178>/VeTITR_M_Ti_xSEM_Out_Init' */
    TITR_ac_B.OutportBufferForVeTITR_M_Ti_xSEM_Out_Ini = 0.0F;

    /* SignalConversion generated from: '<S178>/VeTITR_M_Ti_CL_Slow_Out_Init' */
    TITR_ac_B.OutportBufferForVeTITR_M_Ti_CL_Slow_Out_ = 0.0F;

    /* SignalConversion generated from: '<S178>/VeTITR_M_To_CL_Slow_Out_Init' */
    TITR_ac_B.OutportBufferForVeTITR_M_To_CL_Slow_Out_ = 0.0F;

    /* SignalConversion generated from: '<S178>/VeTITR_M_TaCLSum_Out_Init' */
    TITR_ac_B.OutportBufferForVeTITR_M_TaCLSum_Out_Ini = 0.0F;

    /* SignalConversion generated from: '<S178>/VeTITR_M_TbCLSum_Out_Init' */
    TITR_ac_B.OutportBufferForVeTITR_M_TbCLSum_Out_Ini = 0.0F;

    /* SignalConversion generated from: '<S178>/VeTITR_M_TcCLSum_Out_Init' */
    TITR_ac_B.OutportBufferForVeTITR_M_TcCLSum_Out_Ini = 0.0F;

    /* SignalConversion generated from: '<S178>/VeTITR_M_Ti_CL_Fast_Out_Init' */
    TITR_ac_B.OutportBufferForVeTITR_M_Ti_CL_Fast_Out_ = 0.0F;

    /* SignalConversion generated from: '<S178>/VeTITR_M_To_CL_Fast_Out_Init' */
    TITR_ac_B.OutportBufferForVeTITR_M_To_CL_Fast_Out_ = 0.0F;

    /* SignalConversion generated from: '<S178>/VeTITR_dn_NxDotCL_Fast_Out_Init' */
    TITR_ac_B.OutportBufferForVeTITR_dn_NxDotCL_Fast_O = 0.0F;

    /* SignalConversion generated from: '<S178>/VeTITR_dn_NxDotCL_Slow_Out_Init' */
    TITR_ac_B.OutportBufferForVeTITR_dn_NxDotCL_Slow_O = 0.0F;

    /* SignalConversion generated from: '<S3>/Dn_NiDot' incorporates:
     *  SignalConversion generated from: '<S3>/Dn_NiDot1'
     *  SignalConversion generated from: '<S3>/EngTrqActual_w_CL'
     *  SignalConversion generated from: '<S3>/M_EngCapacityMinOff'
     *  SignalConversion generated from: '<S3>/M_EngCapacityMinRunImmed'
     *  SignalConversion generated from: '<S3>/M_EngCorrTrq'
     *  SignalConversion generated from: '<S3>/M_EngTrqAirflow'
     *  SignalConversion generated from: '<S3>/M_EngTrqStaticSEM'
     *  SignalConversion generated from: '<S3>/M_InputTorqAct'
     *  SignalConversion generated from: '<S3>/M_InputTrqMax'
     *  SignalConversion generated from: '<S3>/M_InputTrqMin'
     *  SignalConversion generated from: '<S3>/M_PumpTorq'
     *  SignalConversion generated from: '<S3>/M_SnsdTi_Raw'
     *  SignalConversion generated from: '<S3>/M_SnsdTi_Raw1'
     *  SignalConversion generated from: '<S3>/M_TiPostDamper_Raw'
     *  SignalConversion generated from: '<S3>/M_TiPostDamper_Raw1'
     */
#if Rte_SysCon_Variant_TITR_NF

    /* Outputs for Function Call SubSystem: '<S3>/TITC_InitInputTorqLim' */
    /* SignalConversion generated from: '<S180>/M_InputTorqAct' incorporates:
     *  Constant: '<S189>/Calib'
     */
    TITR_ac_B.OutportBufferForM_InputTorqAct = KeTITR_M_InputTorqAct_init;

    /* SignalConversion generated from: '<S180>/M_InputTrqMax' incorporates:
     *  Constant: '<S194>/Calib'
     */
    TITR_ac_B.OutportBufferForM_InputTrqMax = KeTITR_M_InputTrqMax_init;

    /* SignalConversion generated from: '<S180>/M_InputTrqMin' incorporates:
     *  Constant: '<S195>/Calib'
     */
    TITR_ac_B.OutportBufferForM_InputTrqMin = KeTITR_M_InputTrqMin_init;

    /* SignalConversion generated from: '<S180>/M_EngTrqAirflow' incorporates:
     *  Constant: '<S191>/Calib'
     */
    TITR_ac_B.OutportBufferForM_EngTrqAirflow = KeTITR_M_InputTrqAirflow_init;

    /* SignalConversion generated from: '<S180>/M_EngCapacityMinOff' incorporates:
     *  Constant: '<S192>/Calib'
     */
    TITR_ac_B.OutportBufferForM_EngCapacityMinOff =
        KeTITR_M_InputTrqCapacityMinOff_init;

    /* SignalConversion generated from: '<S180>/M_EngCapacityMinRunImmed' incorporates:
     *  Constant: '<S193>/Calib'
     */
    TITR_ac_B.OutportBufferForM_EngCapacityMinRunImmed =
        KeTITR_M_InputTrqCapacityMinRunImmed_init;

    /* SignalConversion generated from: '<S180>/M_PumpTorq' incorporates:
     *  Constant: '<S197>/Calib'
     */
    TITR_ac_B.OutportBufferForM_PumpTorq = KeTITR_M_PumpTorq_init;

    /* SignalConversion generated from: '<S180>/M_EngCorrTrq' incorporates:
     *  Constant: '<S188>/Calib'
     */
    TITR_ac_B.OutportBufferForM_EngCorrTrq = KeTITR_M_EngCorrTrq_init;

    /* SignalConversion generated from: '<S180>/M_EngTrqStaticSEM' incorporates:
     *  Constant: '<S196>/Calib'
     */
    TITR_ac_B.OutportBufferForM_EngTrqStaticSEM =
        KeTITR_M_InputTrqStaticSEM_init;

    /* SignalConversion generated from: '<S180>/EngTrqActual_w_CL' incorporates:
     *  Constant: '<S190>/Calib'
     */
    TITR_ac_B.OutportBufferForEngTrqActual_w_CL =
        KeTITR_M_InputTorqAct_wPDCL_init;

    /* End of Outputs for SubSystem: '<S3>/TITC_InitInputTorqLim' */

    /* Outputs for Function Call SubSystem: '<S3>/TITC_InitInTorqEst' */
    /* SignalConversion generated from: '<S179>/M_SnsdTi_Raw' incorporates:
     *  Constant: '<S182>/Calib'
     */
    TITR_ac_B.OutportBufferForM_SnsdTi_Raw = KeTITR_M_SnsdTiRaw_Out_init;

    /* SignalConversion generated from: '<S179>/b_SnsdTi_notVld' incorporates:
     *  Constant: '<S186>/Calib'
     */
    TITR_ac_B.OutportBufferForb_SnsdTi_notVld = KeTITR_b_SnsdTi_notVld_init;

    /* SignalConversion generated from: '<S179>/M_TiPostDamper_Raw' incorporates:
     *  Constant: '<S185>/Calib'
     */
    TITR_ac_B.OutportBufferForM_TiPostDamper_Raw = KeTITR_M_TiPostDamp_Raw_init;

    /* SignalConversion generated from: '<S179>/Dn_NiDot' incorporates:
     *  Constant: '<S187>/Calib'
     */
    TITR_ac_B.OutportBufferForDn_NiDot = KeTITR_dn_NiDot_init;

    /* SignalConversion generated from: '<S179>/M_TiPostDamper_Raw1' incorporates:
     *  Constant: '<S183>/Calib'
     */
    TITR_ac_B.OutportBufferForM_TiPostDamper_Raw1 = KeTITR_M_SnsdTi_Flt_init;

    /* SignalConversion generated from: '<S179>/Dn_NiDot1' incorporates:
     *  Constant: '<S181>/Calib'
     */
    TITR_ac_B.OutportBufferForDn_NiDot1 = KeTITR_M_SnsdEng_Flt_init;

    /* SignalConversion generated from: '<S179>/M_SnsdTi_Raw1' incorporates:
     *  Constant: '<S184>/Calib'
     */
    TITR_ac_B.OutportBufferForM_SnsdTi_Raw1 = KeTITR_M_TiPostDamp_Flt_init;

    /* End of Outputs for SubSystem: '<S3>/TITC_InitInTorqEst' */

    /* Outport: '<Root>/VeTITR_dn_NiDot' */
    (void)Rte_Write_VeTITR_dn_NiDot_Value(TITR_ac_B.OutportBufferForDn_NiDot);

    /* Outport: '<Root>/VeTITR_M_SnsdEng_Flt' */
    (void)Rte_Write_VeTITR_M_SnsdEng_Flt_Value
        (TITR_ac_B.OutportBufferForDn_NiDot1);

    /* Outport: '<Root>/VeTITR_M_InputTorqAct_wPDCL' */
    (void)Rte_Write_VeTITR_M_InputTorqAct_wPDCL_Value
        (TITR_ac_B.OutportBufferForEngTrqActual_w_CL);

    /* Outport: '<Root>/VeTITR_M_InputTrqCapacityMinOff' */
    (void)Rte_Write_VeTITR_M_InputTrqCapacityMinOff_Value
        (TITR_ac_B.OutportBufferForM_EngCapacityMinOff);

    /* Outport: '<Root>/VeTITR_M_InputTrqCapacityMinRunImmed' */
    (void)Rte_Write_VeTITR_M_InputTrqCapacityMinRunImmed_Value
        (TITR_ac_B.OutportBufferForM_EngCapacityMinRunImmed);

    /* Outport: '<Root>/VeTITR_M_EngCorrTrq' */
    (void)Rte_Write_VeTITR_M_EngCorrTrq_Value
        (TITR_ac_B.OutportBufferForM_EngCorrTrq);

    /* Outport: '<Root>/VeTITR_M_InputTrqAirflow' */
    (void)Rte_Write_VeTITR_M_InputTrqAirflow_Value
        (TITR_ac_B.OutportBufferForM_EngTrqAirflow);

    /* Outport: '<Root>/VeTITR_M_InputTrqStaticSEM' */
    (void)Rte_Write_VeTITR_M_InputTrqStaticSEM_Value
        (TITR_ac_B.OutportBufferForM_EngTrqStaticSEM);

    /* Outport: '<Root>/VeTITR_M_InputTorqAct' */
    (void)Rte_Write_VeTITR_M_InputTorqAct_Value
        (TITR_ac_B.OutportBufferForM_InputTorqAct);

    /* Outport: '<Root>/VeTITR_M_InputTrqMax' */
    (void)Rte_Write_VeTITR_M_InputTrqMax_Value
        (TITR_ac_B.OutportBufferForM_InputTrqMax);

    /* Outport: '<Root>/VeTITR_M_InputTrqMin' */
    (void)Rte_Write_VeTITR_M_InputTrqMin_Value
        (TITR_ac_B.OutportBufferForM_InputTrqMin);

    /* Outport: '<Root>/VeTITR_M_PumpTorq' */
    (void)Rte_Write_VeTITR_M_PumpTorq_Value(TITR_ac_B.OutportBufferForM_PumpTorq);

    /* Outport: '<Root>/VeTITR_M_SnsdTiRaw_Out' */
    (void)Rte_Write_VeTITR_M_SnsdTiRaw_Out_Value
        (TITR_ac_B.OutportBufferForM_SnsdTi_Raw);

    /* Outport: '<Root>/VeTITR_M_TiPostDamp_Flt' */
    (void)Rte_Write_VeTITR_M_TiPostDamp_Flt_Value
        (TITR_ac_B.OutportBufferForM_SnsdTi_Raw1);

    /* Outport: '<Root>/VeTITR_M_TiPostDamp_Raw' */
    (void)Rte_Write_VeTITR_M_TiPostDamp_Raw_Value
        (TITR_ac_B.OutportBufferForM_TiPostDamper_Raw);

    /* Outport: '<Root>/VeTITR_M_SnsdTi_Flt' */
    (void)Rte_Write_VeTITR_M_SnsdTi_Flt_Value
        (TITR_ac_B.OutportBufferForM_TiPostDamper_Raw1);

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
#endif

    /* End of SignalConversion generated from: '<S3>/Dn_NiDot' */

    /* Outport: '<Root>/VeTITR_M_TaCLSum' incorporates:
     *  SignalConversion generated from: '<S3>/VeTITR_M_TaCLSum_Out_Init'
     */
    (void)Rte_Write_VeTITR_M_TaCLSum_Value
        (TITR_ac_B.OutportBufferForVeTITR_M_TaCLSum_Out_Ini);

    /* Outport: '<Root>/VeTITR_M_TbCLSum' incorporates:
     *  SignalConversion generated from: '<S3>/VeTITR_M_TbCLSum_Out_Init'
     */
    (void)Rte_Write_VeTITR_M_TbCLSum_Value
        (TITR_ac_B.OutportBufferForVeTITR_M_TbCLSum_Out_Ini);

    /* Outport: '<Root>/VeTITR_M_TcCLSum' incorporates:
     *  SignalConversion generated from: '<S3>/VeTITR_M_TcCLSum_Out_Init'
     */
    (void)Rte_Write_VeTITR_M_TcCLSum_Value
        (TITR_ac_B.OutportBufferForVeTITR_M_TcCLSum_Out_Ini);

    /* Outport: '<Root>/VeTITR_M_TiFinal' incorporates:
     *  SignalConversion generated from: '<S3>/VeTITR_M_TiFinal_Out_Init'
     */
    (void)Rte_Write_VeTITR_M_TiFinal_Value
        (TITR_ac_B.OutportBufferForVeTITR_M_TiFinal_Out_Ini);

    /* Outport: '<Root>/VeTITR_M_TiPrdt' incorporates:
     *  SignalConversion generated from: '<S3>/VeTITR_M_TiPrdt_Out_Init'
     */
    (void)Rte_Write_VeTITR_M_TiPrdt_Value
        (TITR_ac_B.OutportBufferForVeTITR_M_TiPrdt_Out_Init);

    /* Outport: '<Root>/VeTITR_M_Ti_CL_Fast' incorporates:
     *  SignalConversion generated from: '<S3>/VeTITR_M_Ti_CL_Fast_Out_Init'
     */
    (void)Rte_Write_VeTITR_M_Ti_CL_Fast_Value
        (TITR_ac_B.OutportBufferForVeTITR_M_Ti_CL_Fast_Out_);

    /* Outport: '<Root>/VeTITR_M_Ti_CL_Slow' incorporates:
     *  SignalConversion generated from: '<S3>/VeTITR_M_Ti_CL_Slow_Out_Init'
     */
    (void)Rte_Write_VeTITR_M_Ti_CL_Slow_Value
        (TITR_ac_B.OutportBufferForVeTITR_M_Ti_CL_Slow_Out_);

    /* Outport: '<Root>/VeTITR_M_Ti_xSEM' incorporates:
     *  SignalConversion generated from: '<S3>/VeTITR_M_Ti_xSEM_Out_Init'
     */
    (void)Rte_Write_VeTITR_M_Ti_xSEM_Value
        (TITR_ac_B.OutportBufferForVeTITR_M_Ti_xSEM_Out_Ini);

    /* Outport: '<Root>/VeTITR_M_To_CL_Fast' incorporates:
     *  SignalConversion generated from: '<S3>/VeTITR_M_To_CL_Fast_Out_Init'
     */
    (void)Rte_Write_VeTITR_M_To_CL_Fast_Value
        (TITR_ac_B.OutportBufferForVeTITR_M_To_CL_Fast_Out_);

    /* Outport: '<Root>/VeTITR_M_To_CL_Slow' incorporates:
     *  SignalConversion generated from: '<S3>/VeTITR_M_To_CL_Slow_Out_Init'
     */
    (void)Rte_Write_VeTITR_M_To_CL_Slow_Value
        (TITR_ac_B.OutportBufferForVeTITR_M_To_CL_Slow_Out_);

    /* Outport: '<Root>/VeTITR_dn_NxDotCL_Fast' incorporates:
     *  SignalConversion generated from: '<S3>/VeTITR_dn_NxDotCL_Fast_Out_Init'
     */
    (void)Rte_Write_VeTITR_dn_NxDotCL_Fast_Value
        (TITR_ac_B.OutportBufferForVeTITR_dn_NxDotCL_Fast_O);

    /* Outport: '<Root>/VeTITR_dn_NxDotCL_Slow' incorporates:
     *  SignalConversion generated from: '<S3>/VeTITR_dn_NxDotCL_Slow_Out_Init'
     */
    (void)Rte_Write_VeTITR_dn_NxDotCL_Slow_Value
        (TITR_ac_B.OutportBufferForVeTITR_dn_NxDotCL_Slow_O);

    /* Outport: '<Root>/VeTITR_k_TiSEMBlend' incorporates:
     *  SignalConversion generated from: '<S3>/VeTITR_k_TiSEMBlend_Out_Init'
     */
    (void)Rte_Write_VeTITR_k_TiSEMBlend_Value
        (TITR_ac_B.OutportBufferForVeTITR_k_TiSEMBlend_Out_);

    /* SignalConversion generated from: '<S3>/b_SnsdTi_notVld' */
#if Rte_SysCon_Variant_TITR_NF

    /* Outport: '<Root>/VeTITR_b_SnsdTi_notVld' */
    (void)Rte_Write_VeTITR_b_SnsdTi_notVld_Value
        (TITR_ac_B.OutportBufferForb_SnsdTi_notVld);

#endif

    /* End of SignalConversion generated from: '<S3>/b_SnsdTi_notVld' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, TITR_CODE) TITR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/TITR_PwrOn'
     */
#if Rte_SysCon_Variant_TITR_NF

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PUP' incorporates:
     *  SubSystem: '<Root>/TITR_PUP'
     */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* SystemInitialize for Function Call SubSystem: '<S3>/TITC_InitInputTorqLim' */
    /* SystemInitialize for SignalConversion generated from: '<S180>/M_InputTorqAct' incorporates:
     *  Constant: '<S189>/Calib'
     */
    TITR_ac_B.OutportBufferForM_InputTorqAct = KeTITR_M_InputTorqAct_init;

    /* SystemInitialize for SignalConversion generated from: '<S180>/M_InputTrqMax' incorporates:
     *  Constant: '<S194>/Calib'
     */
    TITR_ac_B.OutportBufferForM_InputTrqMax = KeTITR_M_InputTrqMax_init;

    /* SystemInitialize for SignalConversion generated from: '<S180>/M_InputTrqMin' incorporates:
     *  Constant: '<S195>/Calib'
     */
    TITR_ac_B.OutportBufferForM_InputTrqMin = KeTITR_M_InputTrqMin_init;

    /* SystemInitialize for SignalConversion generated from: '<S180>/M_EngTrqAirflow' incorporates:
     *  Constant: '<S191>/Calib'
     */
    TITR_ac_B.OutportBufferForM_EngTrqAirflow = KeTITR_M_InputTrqAirflow_init;

    /* SystemInitialize for SignalConversion generated from: '<S180>/M_EngCapacityMinOff' incorporates:
     *  Constant: '<S192>/Calib'
     */
    TITR_ac_B.OutportBufferForM_EngCapacityMinOff =
        KeTITR_M_InputTrqCapacityMinOff_init;

    /* SystemInitialize for SignalConversion generated from: '<S180>/M_EngCapacityMinRunImmed' incorporates:
     *  Constant: '<S193>/Calib'
     */
    TITR_ac_B.OutportBufferForM_EngCapacityMinRunImmed =
        KeTITR_M_InputTrqCapacityMinRunImmed_init;

    /* SystemInitialize for SignalConversion generated from: '<S180>/M_PumpTorq' incorporates:
     *  Constant: '<S197>/Calib'
     */
    TITR_ac_B.OutportBufferForM_PumpTorq = KeTITR_M_PumpTorq_init;

    /* SystemInitialize for SignalConversion generated from: '<S180>/M_EngCorrTrq' incorporates:
     *  Constant: '<S188>/Calib'
     */
    TITR_ac_B.OutportBufferForM_EngCorrTrq = KeTITR_M_EngCorrTrq_init;

    /* SystemInitialize for SignalConversion generated from: '<S180>/M_EngTrqStaticSEM' incorporates:
     *  Constant: '<S196>/Calib'
     */
    TITR_ac_B.OutportBufferForM_EngTrqStaticSEM =
        KeTITR_M_InputTrqStaticSEM_init;

    /* SystemInitialize for SignalConversion generated from: '<S180>/EngTrqActual_w_CL' incorporates:
     *  Constant: '<S190>/Calib'
     */
    TITR_ac_B.OutportBufferForEngTrqActual_w_CL =
        KeTITR_M_InputTorqAct_wPDCL_init;

    /* End of SystemInitialize for SubSystem: '<S3>/TITC_InitInputTorqLim' */
    /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
#endif

    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PUP' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
