/*
 * File: STFR_ac.c
 *
 * Code generated for Simulink model 'STFR_ac'.
 *
 * Model version                  : 9.157
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:09:48 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "STFR_ac.h"
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
#define START_SEC_CALIB_UNSPECIFIED_STFR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if !Rte_SysCon_Variant_STFR_DsblFcn

static volatile CONST(float32, STFR_VAR_INIT) HeSTFR_t_MedTEB_dT = 0.01F;/* Referenced by: '<S212>/Calib' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2Equipd

static volatile CONST(boolean, STFR_VAR_INIT) KaSTFR_b_InrtiaStrtAllwdGr[26] =
{
    1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1
} ;                                    /* Referenced by: '<S264>/Calib' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2Equipd

static volatile CONST(boolean, STFR_VAR_INIT) KaSTFR_b_InrtiaStrtMinGr[26] =
{
    0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1
} ;                                    /* Referenced by: '<S265>/Calib' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2p5Equipd

static volatile CONST(uint8, STFR_VAR_INIT) KeSTFR_Cnt_TotCltchStrtAllwd = 2U;/* Referenced by: '<S208>/Calib' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2p5Equipd

static volatile CONST(uint8, STFR_VAR_INIT) KeSTFR_Cnt_TotEMStrtAllwd = 2U;/* Referenced by: '<S209>/Calib' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

static volatile CONST(float32, STFR_VAR_INIT) KeSTFR_M_BeltCapMinDefaultStart =
    0.0F;                              /* Referenced by: '<S183>/Calib' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

static volatile CONST(float32, STFR_VAR_INIT) KeSTFR_M_EngStrtTrqOffset = 0.0F;/* Referenced by: '<S184>/Calib' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

static volatile CONST(float32, STFR_VAR_INIT)
    KeSTFR_M_LearnedBeltCapCrnkShftMinDefaultStart = 0.0F;/* Referenced by: '<S185>/Calib' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

static volatile CONST(boolean, STFR_VAR_INIT) KeSTFR_b_ForceInhbt = 0;/* Referenced by: '<S221>/Calib' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

static volatile CONST(boolean, STFR_VAR_INIT) KeSTFR_b_UseEngStrtTrq = 0;/* Referenced by: '<S186>/Calib' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

static volatile CONST(uint16, STFR_VAR_INIT) KeSTFR_d_ByPassCnd = 0U;/* Referenced by: '<S12>/Calib' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

static volatile CONST(TeSRAR_e_EngStrtType, STFR_VAR_INIT)
    KeSTFR_e_RAStrtTypeCKS = CeSRAR_e_HybTrqStrt;/* Referenced by: '<S232>/Calib' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

static volatile CONST(TeSRAR_e_EngStrtType, STFR_VAR_INIT)
    KeSTFR_e_RAStrtTypeLwPwr = CeSRAR_e_EngTrqStrt;/* Referenced by: '<S233>/Calib' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

static volatile CONST(uint32, STFR_VAR_INIT) KeSTFR_g_DCDCFaultBits = 130023424U;/* Referenced by: '<S244>/Calib' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

static volatile CONST(uint32, STFR_VAR_INIT) KeSTFR_g_ESS_EFAFailSlct = 0U;/* Referenced by: '<S205>/Calib' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

static volatile CONST(uint32, STFR_VAR_INIT) KeSTFR_g_EnblFltTypEval1 = 0U;/* Referenced by: '<S13>/Calib' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

static volatile CONST(uint32, STFR_VAR_INIT) KeSTFR_g_EnblFltTypEval2 = 3U;/* Referenced by: '<S14>/Calib' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2p5Equipd

static volatile CONST(uint32, STFR_VAR_INIT) KeSTFR_g_SelCltStrtNARsns1 = 0U;/* Referenced by: '<S352>/Calib' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2p5Equipd

static volatile CONST(uint32, STFR_VAR_INIT) KeSTFR_g_SelCltStrtNARsns2 = 0U;/* Referenced by: '<S353>/Calib' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2p5Equipd

static volatile CONST(uint32, STFR_VAR_INIT) KeSTFR_g_SelEMStrtNARsns1 = 0U;/* Referenced by: '<S354>/Calib' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2p5Equipd

static volatile CONST(uint32, STFR_VAR_INIT) KeSTFR_g_SelEMStrtNARsns2 = 0U;/* Referenced by: '<S355>/Calib' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2p5Equipd

static volatile CONST(uint32, STFR_VAR_INIT) KeSTFR_g_SelEVDrvNARsns1 = 0U;/* Referenced by: '<S362>/Calib' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2p5Equipd

static volatile CONST(uint32, STFR_VAR_INIT) KeSTFR_g_SelEVDrvNARsns2 = 0U;/* Referenced by: '<S363>/Calib' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2p5Equipd

static volatile CONST(uint32, STFR_VAR_INIT) KeSTFR_g_SelIMStrtNARsns1 = 0U;/* Referenced by: '<S356>/Calib' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2p5Equipd

static volatile CONST(uint32, STFR_VAR_INIT) KeSTFR_g_SelIMStrtNARsns2 = 0U;/* Referenced by: '<S357>/Calib' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2p5Equipd

static volatile CONST(uint32, STFR_VAR_INIT) KeSTFR_g_SelLmpHmRsns1 = 0U;/* Referenced by: '<S210>/Calib' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2p5Equipd

static volatile CONST(uint32, STFR_VAR_INIT) KeSTFR_g_SelLmpHmRsns2 = 0U;/* Referenced by: '<S211>/Calib' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

static volatile CONST(uint32, STFR_VAR_INIT) KeSTFR_g_SelP1fAStrtNARsns1 = 0U;/* Referenced by: '<S335>/Calib' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

static volatile CONST(uint32, STFR_VAR_INIT) KeSTFR_g_SelP1fAStrtNARsns2 = 0U;/* Referenced by: '<S336>/Calib' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

static volatile CONST(uint32, STFR_VAR_INIT) KeSTFR_g_SelP1fLPNARsns1 = 0U;/* Referenced by: '<S337>/Calib' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

static volatile CONST(uint32, STFR_VAR_INIT) KeSTFR_g_SelP1fLPNARsns2 = 0U;/* Referenced by: '<S338>/Calib' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

static volatile CONST(uint32, STFR_VAR_INIT) KeSTFR_g_SelP2BumpNARsns1 = 0U;/* Referenced by: '<S339>/Calib' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

static volatile CONST(uint32, STFR_VAR_INIT) KeSTFR_g_SelP2BumpNARsns2 = 0U;/* Referenced by: '<S340>/Calib' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2p5Equipd

static volatile CONST(uint32, STFR_VAR_INIT) KeSTFR_g_SelRsrvByPassRsns1 = 64U;/* Referenced by: '<S332>/Calib' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2p5Equipd

static volatile CONST(uint32, STFR_VAR_INIT) KeSTFR_g_SelRsrvByPassRsns2 = 0U;/* Referenced by: '<S333>/Calib' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

static volatile CONST(float32, STFR_VAR_INIT) KeSTFR_t_FaildStrtPrevCyclRstDly =
    0.0F;                              /* Referenced by: '<S213>/Calib' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2p5Equipd

static volatile CONST(float32, STFR_VAR_INIT) KeSTFR_v_CltchStrtVehSpdThrsh =
    20.0F;                             /* Referenced by: '<S275>/Calib' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2Equipd

static volatile CONST(float32, STFR_VAR_INIT) KeSTFR_v_InrtiaStrtMinVehSpd =
    30.0F;                             /* Referenced by: '<S266>/Calib' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

static volatile CONST(uint8, STFR_VAR_INIT) KeSTFR_y_SelStrtDvcNA = 0U;/* Referenced by: '<S309>/Calib' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

static volatile CONST(float32, STFR_VAR_INIT) KtSTFR_M_MtrAMinCapP1fFail[4] =
{
    45.0F, 45.0F, 45.0F, 41.0F
} ;                                    /* Referenced by: '<S223>/Vector' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

static volatile CONST(float32, STFR_VAR_INIT) KxSTFR_M_MtrAMinCapP1fFail[4] =
{
    -10.0F, 0.0F, 40.0F, 60.0F
} ;                                    /* Referenced by: '<S223>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_STFR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_STFR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if !Rte_SysCon_Variant_STFR_DsblFcn

static VAR(float32, STFR_VAR_INIT) VeSTFR_M_BeltCapMaxCrnkShft;/* '<S16>/Product1' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

static VAR(boolean, STFR_VAR_INIT) VeSTFR_b_BackUpStrtChkEngOnRaw;/* synthesized block */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

static VAR(boolean, STFR_VAR_INIT) VeSTFR_b_BumpStrtChkEngOnRaw;/* synthesized block */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2p5Equipd

static VAR(boolean, STFR_VAR_INIT) VeSTFR_b_C1D;/* '<S247>/Merge1' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2p5Equipd

static VAR(boolean, STFR_VAR_INIT) VeSTFR_b_C2D;/* '<S247>/Merge3' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

static VAR(boolean, STFR_VAR_INIT) VeSTFR_b_FltBsdOff;/* '<S290>/Logical10' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

static VAR(boolean, STFR_VAR_INIT) VeSTFR_b_FltBsdOn;/* '<S290>/Logical7' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2Equipd

static VAR(boolean, STFR_VAR_INIT) VeSTFR_b_GrThrsh;/* '<S260>/Switch3' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

static VAR(boolean, STFR_VAR_INIT) VeSTFR_b_ImpndSkid;/* '<S20>/Logical5' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

static VAR(boolean, STFR_VAR_INIT) VeSTFR_b_InrtiaStrt;/* synthesized block */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

static VAR(boolean, STFR_VAR_INIT) VeSTFR_b_P2p5HMIMsgRaw;/* synthesized block */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2p5Equipd

static VAR(boolean, STFR_VAR_INIT) VeSTFR_b_ST1D;/* '<S247>/Merge' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2p5Equipd

static VAR(boolean, STFR_VAR_INIT) VeSTFR_b_ST2D;/* '<S247>/Merge2' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

static VAR(boolean, STFR_VAR_INIT) VeSTFR_b_TCMStrtCondNA;/* '<S290>/Logical2' */

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

static VAR(uint16, STFR_VAR_INIT) VeSTFR_d_FltBsdOnOffRsn;/* '<S302>/Switch15' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_STFR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_STFR
#include "MemMap.h"

CONST(ConstB_STFR_ac_T, STFR_VAR_INIT) STFR_ac_ConstB =
{
    CeSTRR_e_NoAction,                 /* '<S371>/Const11' */
    CeSTRR_e_NoOvrrd                   /* '<S371>/Const3' */
};

#define STOP_SEC_CONST_UNSPECIFIED_STFR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_STFR
#include "MemMap.h"

VAR(B_STFR_ac_T, STFR_VAR_INIT) STFR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_STFR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_STFR
#include "MemMap.h"

VAR(DW_STFR_ac_T, STFR_VAR_INIT) STFR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_STFR
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, STFR_CODE) STFR_MedTEB2(void) /* Explicit Task: MedTEB2 */
{

#if !Rte_SysCon_Variant_STFR_DsblFcn

    float32 tmpRead;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    float32 tmpRead_0;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean tmpRead_1;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean tmpRead_2;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean tmpRead_3;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean tmpRead_4;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    float32 tmpRead_5;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean tmpRead_6;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean tmpRead_7;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean tmpRead_8;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2p5Equipd

    uint8 tmpRead_9;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2p5Equipd

    uint8 tmpRead_a;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean tmpRead_b;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    TeINVR_e_MtrInvrtrSt tmpRead_c;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    TeINVR_e_MtrInvrtrSt tmpRead_d;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    TeINVR_e_MtrInvrtrSt tmpRead_e;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean tmpRead_f;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    uint32 tmpRead_g;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    uint32 tmpRead_h;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    uint32 tmpRead_i;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    uint32 tmpRead_j;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2p5Equipd

    sint16 tmpRead_k;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2Equipd

    TeTMDR_e_LockLowSt tmpRead_l;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2Equipd

    TeHCCR_e_ClutchStatus tmpRead_m;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2Equipd

    TeTRNR_e_TCMGearStat tmpRead_n;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    float32 tmpRead_o;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2p5Equipd

    uint16 rtb_DataTypeConversion;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_Switch4_g;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_Switch1_n;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_Compare_dm;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_Compare_ak;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_Compare_ef;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_Compare_n;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_Switch1_ku;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_Logical1_n;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_Logical3_e;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_LeSTFR_b_InhbtESS;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_TmpSignalConversionAtVeHPMR_b_PropSy;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    float32 rtb_Vector;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_Comparison2_c;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_Comparison1_f;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_Logical2_oe;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    sint32 rtb_Switch1;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_VariantMergeForOutportTCMExtFlt;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_VariantMergeForOutportTCMEMFlt;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_VariantMergeForOutportTCMCltchFlt;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_VariantMergeForOutportTCMP2K0Flts;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    uint32 rtb_TmpSignalConversionAtVeESSR_g_StrtSt;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_VariantMergeForOutportTCMST1DFlt;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_VariantMergeForOutportTCMC1DFlt;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_VariantMergeForOutportTCMST2DFlt;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_VariantMergeForOutportTCMC2DFlt;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_VariantMergeForOutportCltchImpStrtEx;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_VariantMergeForOutportEMStrtExprd;

#endif

#if (!Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2Equipd) || (!Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2p5Equipd)

    float32 rtb_TmpSignalConversionAtVeCSVR_v_VehSpd;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_Comparison3_g;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_VariantMergeForOutportGrMin;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2p5Equipd

    sint16 rtb_Switch4_l;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_Compare_fn;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_Compare_o0;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2Equipd

    uint16 rtb_TmpSignalConversionAtVeTINR_d_TCMFai;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    TeHVTR_e_HV_BatCntctrStat rtb_TmpSignalConversionAtVeBPCR_e_HV_Bat;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    TeSTRR_e_AutoStopStartOvrrd rtb_TmpSignalConversionAtVeSRAR_e_EngStr;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    TeSTRR_e_HybStrtrSt rtb_TmpSignalConversionAtVeSTRR_e_HybStr;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    TeHPMR_e_PropSysMode rtb_TmpSignalConversionAtVeHPMR_e_PropSy;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    TeSRAR_e_EngStrtType rtb_TmpSignalConversionAtVeSRAR_e_Eng_bu;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    TeESSR_e_EngStartStopSt rtb_TmpSignalConversionAtVeESSR_e_EngSta;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2p5Equipd

    uint8 rtb_Logical4_m_0;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2Equipd

    sint32 VeSTFR_b_InrtiaStrt_tmp;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    uint32 rtb_LeSTFR_b_InhbtESS_tmp;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' incorporates:
     *  SubSystem: '<Root>/STFR_MedTEB2'
     */
    /* DataTypeConversion: '<S1>/DataTypeConversion' incorporates:
     *  Inport: '<Root>/VeTINR_d_TCMLimphomeFaults'
     */
#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2p5Equipd

    (void)Rte_Read_VeTINR_d_TCMLimphomeFaults_Value(&tmpRead_k);

    /* DataTypeConversion: '<S1>/DataTypeConversion' incorporates:
     *  Inport: '<Root>/VeTINR_d_TCMLimphomeFaults'
     */
    rtb_DataTypeConversion = (uint16)tmpRead_k;

#endif

    /* End of DataTypeConversion: '<S1>/DataTypeConversion' */

    /* SignalConversion generated from: '<S1>/VeBPCR_e_HV_BatCntctrStat' incorporates:
     *  SignalConversion generated from: '<S1>/VeESSR_e_EngStartStopSt'
     *  SignalConversion generated from: '<S1>/VeESSR_g_StrtStpFailPhase'
     *  SignalConversion generated from: '<S1>/VeHPMR_b_PropSysActv'
     *  SignalConversion generated from: '<S1>/VeHPMR_e_PropSysMode'
     *  SignalConversion generated from: '<S1>/VeSRAR_e_EngStrtStpOvrrd'
     *  SignalConversion generated from: '<S1>/VeSRAR_e_EngStrtType'
     *  SignalConversion generated from: '<S1>/VeSTRR_e_HybStrtrSt'
     */
#if !Rte_SysCon_Variant_STFR_DsblFcn

    /* SignalConversion generated from: '<S1>/VeBPCR_e_HV_BatCntctrStat' incorporates:
     *  Inport: '<Root>/VeBPCR_e_HV_BatCntctrStat'
     */
    (void)Rte_Read_VeBPCR_e_HV_BatCntctrStat_Value
        (&rtb_TmpSignalConversionAtVeBPCR_e_HV_Bat);

    /* SignalConversion generated from: '<S1>/VeHPMR_e_PropSysMode' incorporates:
     *  Inport: '<Root>/VeHPMR_e_PropSysMode'
     */
    (void)Rte_Read_VeHPMR_e_PropSysMode_Value
        (&rtb_TmpSignalConversionAtVeHPMR_e_PropSy);

    /* SignalConversion generated from: '<S1>/VeHPMR_b_PropSysActv' incorporates:
     *  Inport: '<Root>/VeHPMR_b_PropSysActv'
     */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value
        (&rtb_TmpSignalConversionAtVeHPMR_b_PropSy);

    /* SignalConversion generated from: '<S1>/VeESSR_e_EngStartStopSt' incorporates:
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     */
    (void)Rte_Read_VeESSR_e_EngStartStopSt_Value
        (&rtb_TmpSignalConversionAtVeESSR_e_EngSta);

    /* SignalConversion generated from: '<S1>/VeESSR_g_StrtStpFailPhase' incorporates:
     *  Inport: '<Root>/VeESSR_g_StrtStpFailPhase'
     */
    (void)Rte_Read_VeESSR_g_StrtStpFailPhase_Value
        (&rtb_TmpSignalConversionAtVeESSR_g_StrtSt);

    /* SignalConversion generated from: '<S1>/VeSTRR_e_HybStrtrSt' incorporates:
     *  Inport: '<Root>/VeSTRR_e_HybStrtrSt'
     */
    (void)Rte_Read_VeSTRR_e_HybStrtrSt_Value
        (&rtb_TmpSignalConversionAtVeSTRR_e_HybStr);

    /* SignalConversion generated from: '<S1>/VeSRAR_e_EngStrtStpOvrrd' incorporates:
     *  Inport: '<Root>/VeSRAR_e_EngStrtStpOvrrd'
     */
    (void)Rte_Read_VeSRAR_e_EngStrtStpOvrrd_Value
        (&rtb_TmpSignalConversionAtVeSRAR_e_EngStr);

    /* SignalConversion generated from: '<S1>/VeSRAR_e_EngStrtType' incorporates:
     *  Inport: '<Root>/VeSRAR_e_EngStrtType'
     */
    (void)Rte_Read_VeSRAR_e_EngStrtType_Value
        (&rtb_TmpSignalConversionAtVeSRAR_e_Eng_bu);

#endif

    /* End of SignalConversion generated from: '<S1>/VeBPCR_e_HV_BatCntctrStat' */

    /* SignalConversion generated from: '<S1>/VeCSVR_v_VehSpdSigned' */
#if (!Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2Equipd) || (!Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2p5Equipd)

    /* SignalConversion generated from: '<S1>/VeCSVR_v_VehSpdSigned' incorporates:
     *  Inport: '<Root>/VeCSVR_v_VehSpdSigned'
     */
    (void)Rte_Read_VeCSVR_v_VehSpdSigned_Value
        (&rtb_TmpSignalConversionAtVeCSVR_v_VehSpd);

#endif

    /* End of SignalConversion generated from: '<S1>/VeCSVR_v_VehSpdSigned' */

    /* SignalConversion generated from: '<S1>/VeTINR_d_TCMFailures' */
#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2Equipd

    /* SignalConversion generated from: '<S1>/VeTINR_d_TCMFailures' incorporates:
     *  Inport: '<Root>/VeTINR_d_TCMFailures'
     */
    (void)Rte_Read_VeTINR_d_TCMFailures_Value
        (&rtb_TmpSignalConversionAtVeTINR_d_TCMFai);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTINR_d_TCMFailures' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/STFC_FltDtctCnfg'
     */
    /* Outputs for Atomic SubSystem: '<S5>/VarSS_STFCFltDtctAlg' */
#if Rte_SysCon_Variant_STFR_DsblFcn

    /* Outputs for Atomic SubSystem: '<S6>/DsblFcn' */
    /* VariantMerge generated from: '<S6>/FltReg1' incorporates:
     *  Constant: '<S7>/Constant'
     */
    STFR_ac_B.VariantMergeForOutportFltReg1 = 0U;

    /* VariantMerge generated from: '<S6>/FltReg2' incorporates:
     *  Constant: '<S7>/Constant2'
     */
    STFR_ac_B.VariantMergeForOutportFltReg2 = 0U;

    /* VariantMerge generated from: '<S6>/EngRun' incorporates:
     *  Constant: '<S7>/Constant3'
     */
    STFR_ac_B.VariantMergeForOutportEngRun = false;

    /* VariantMerge generated from: '<S6>/EngOff' incorporates:
     *  Constant: '<S7>/Constant1'
     */
    STFR_ac_B.VariantMergeForOutportEngOff = false;

    /* VariantMerge generated from: '<S6>/EFAFail' incorporates:
     *  Constant: '<S7>/Constant5'
     */
    STFR_ac_B.VariantMergeForOutportEFAFail = false;

    /* VariantMerge generated from: '<S6>/STPA_EFAFail' incorporates:
     *  Constant: '<S7>/Constant4'
     */
    STFR_ac_B.VariantMergeForOutportSTPA_EFAFail = false;

    /* VariantMerge generated from: '<S6>/EssCD' incorporates:
     *  Constant: '<S7>/Constant7'
     */
    STFR_ac_B.VariantMergeForOutportEssCD = false;

    /* VariantMerge generated from: '<S6>/EssFStp' incorporates:
     *  Constant: '<S7>/Constant6'
     */
    STFR_ac_B.VariantMergeForOutportEssFStp = false;

    /* VariantMerge generated from: '<S6>/EssOFF' incorporates:
     *  Constant: '<S7>/Constant9'
     */
    STFR_ac_B.VariantMergeForOutportEssOFF = false;

    /* VariantMerge generated from: '<S6>/TCMHMIEnbl' incorporates:
     *  Constant: '<S7>/Constant8'
     */
    STFR_ac_B.VariantMergeForOutportTCMHMIEnbl = false;

    /* VariantMerge generated from: '<S6>/TCMCltchAvlbl' incorporates:
     *  Constant: '<S7>/Constant11'
     */
    STFR_ac_B.VariantMergeForOutportTCMCltchAvlbl = false;

    /* VariantMerge generated from: '<S6>/SRAREngOff' incorporates:
     *  Constant: '<S7>/Constant10'
     */
    STFR_ac_B.VariantMergeForOutportSRAREngOff = false;

    /* VariantMerge generated from: '<S6>/SRAREngOnRaw' incorporates:
     *  Constant: '<S7>/Constant13'
     */
    STFR_ac_B.VariantMergeForOutportSRAREngOnRaw = false;

    /* VariantMerge generated from: '<S6>/ImpndInhbtESSOff' incorporates:
     *  Constant: '<S7>/Constant12'
     */
    STFR_ac_B.VariantMergeForOutportImpndInhbtESSOff = false;

    /* VariantMerge generated from: '<S6>/ImpndInhbtESSOn' incorporates:
     *  Constant: '<S7>/Constant15'
     */
    STFR_ac_B.VariantMergeForOutportImpndInhbtESSOn = false;

    /* VariantMerge generated from: '<S6>/StallDtct' incorporates:
     *  Constant: '<S7>/Constant14'
     */
    STFR_ac_B.VariantMergeForOutportStallDtct = false;

    /* VariantMerge generated from: '<S6>/BmpStrtGrThrsh' incorporates:
     *  Constant: '<S7>/Constant17'
     */
    STFR_ac_B.VariantMergeForOutportBmpStrtGrThrsh = false;

    /* VariantMerge generated from: '<S6>/CltchStrtSpdMn' incorporates:
     *  Constant: '<S7>/Constant16'
     */
    STFR_ac_B.VariantMergeForOutportCltchStrtSpdMn = false;

    /* VariantMerge generated from: '<S6>/InhbtTCMCndEnbl' incorporates:
     *  Constant: '<S7>/Constant19'
     */
    STFR_ac_B.VariantMergeForOutportInhbtTCMCndEnbl = false;

    /* VariantMerge generated from: '<S6>/InhbtBmpStEnbl' incorporates:
     *  Constant: '<S7>/Constant18'
     */
    STFR_ac_B.VariantMergeForOutportInhbtBmpStEnbl = false;

    /* VariantMerge generated from: '<S6>/TCMIMAvlbl' incorporates:
     *  Constant: '<S7>/Constant21'
     */
    STFR_ac_B.VariantMergeForOutportTCMIMAvlbl = false;

    /* VariantMerge generated from: '<S6>/TCMEMAvlbl' incorporates:
     *  Constant: '<S7>/Constant20'
     */
    STFR_ac_B.VariantMergeForOutportTCMEMAvlbl = false;

    /* VariantMerge generated from: '<S6>/EssRun' incorporates:
     *  Constant: '<S7>/Constant23'
     */
    STFR_ac_B.VariantMergeForOutportEssRun = false;

    /* VariantMerge generated from: '<S6>/EssPFS' incorporates:
     *  Constant: '<S7>/Constant22'
     */
    STFR_ac_B.VariantMergeForOutportEssPFS = false;

    /* VariantMerge generated from: '<S6>/EssInitSpn' incorporates:
     *  Constant: '<S7>/Constant25'
     */
    STFR_ac_B.VariantMergeForOutportEssInitSpn = false;

    /* VariantMerge generated from: '<S6>/KeyOffSt' incorporates:
     *  Constant: '<S7>/Constant24'
     */
    STFR_ac_B.VariantMergeForOutportKeyOffSt = false;

    /* End of Outputs for SubSystem: '<S6>/DsblFcn' */
#else

    /* Outputs for Atomic SubSystem: '<S6>/EnblFcn' */
    /* Inport: '<Root>/VeSRAR_g_RA_InputSet8' */
    (void)Rte_Read_VeSRAR_g_RA_InputSet8_Value(&tmpRead_j);

    /* Inport: '<Root>/VeESSR_b_BumpStrtsAllwd' */
    (void)Rte_Read_VeESSR_b_BumpStrtsAllwd_Value(&rtb_Logical1_n);

    /* Inport: '<Root>/VeESSR_b_BkupStrtsAllwd' */
    (void)Rte_Read_VeESSR_b_BkupStrtsAllwd_Value(&rtb_Switch1_ku);

    /* Inport: '<Root>/VeBPCR_b_HV_BatCntctrOpenReq' */
    (void)Rte_Read_VeBPCR_b_HV_BatCntctrOpenReq_Value(&rtb_Comparison2_c);

    /* Switch: '<S22>/Switch4' incorporates:
     *  Constant: '<S12>/Calib'
     *  Constant: '<S37>/Constant'
     *  Constant: '<S9>/Constant17'
     *  RelationalOperator: '<S37>/Compare'
     *  S-Function (sfix_bitop): '<S9>/BitwiseLogicalOperator'
     */
    rtb_Switch4_g = ((((sint32)KeSTFR_d_ByPassCnd) & 1) > 0);

    /* Switch: '<S22>/Switch1' incorporates:
     *  Constant: '<S12>/Calib'
     *  Constant: '<S38>/Constant'
     *  Constant: '<S9>/Constant25'
     *  RelationalOperator: '<S38>/Compare'
     *  S-Function (sfix_bitop): '<S9>/BitwiseLogicalOperator1'
     */
    rtb_Switch1_n = ((((sint32)KeSTFR_d_ByPassCnd) & 2) > 0);

    /* VariantMerge generated from: '<S6>/InhbtTCMCndEnbl' incorporates:
     *  Constant: '<S10>/Constant20'
     *  Constant: '<S13>/Calib'
     *  Constant: '<S64>/Constant'
     *  RelationalOperator: '<S64>/Compare'
     *  S-Function (sfix_bitop): '<S10>/BitwiseLogicalOperator19'
     */
    STFR_ac_B.VariantMergeForOutportInhbtTCMCndEnbl = ((KeSTFR_g_EnblFltTypEval1
        & 134217728U) > 0U);

    /* VariantMerge generated from: '<S6>/InhbtBmpStEnbl' incorporates:
     *  Constant: '<S10>/Constant18'
     *  Constant: '<S13>/Calib'
     *  Constant: '<S78>/Constant'
     *  RelationalOperator: '<S78>/Compare'
     *  S-Function (sfix_bitop): '<S10>/BitwiseLogicalOperator31'
     */
    STFR_ac_B.VariantMergeForOutportInhbtBmpStEnbl = ((KeSTFR_g_EnblFltTypEval1
        & 33554432U) > 0U);

    /* RelationalOperator: '<S85>/Compare' incorporates:
     *  Constant: '<S11>/Constant1'
     *  Constant: '<S14>/Calib'
     *  Constant: '<S85>/Constant'
     *  S-Function (sfix_bitop): '<S11>/BitwiseLogicalOperator'
     */
    rtb_Compare_dm = ((KeSTFR_g_EnblFltTypEval2 & 1U) > 0U);

    /* RelationalOperator: '<S86>/Compare' incorporates:
     *  Constant: '<S11>/Constant2'
     *  Constant: '<S14>/Calib'
     *  Constant: '<S86>/Constant'
     *  S-Function (sfix_bitop): '<S11>/BitwiseLogicalOperator1'
     */
    rtb_Compare_ak = ((KeSTFR_g_EnblFltTypEval2 & 2U) > 0U);

    /* RelationalOperator: '<S97>/Compare' incorporates:
     *  Constant: '<S11>/Constant3'
     *  Constant: '<S14>/Calib'
     *  Constant: '<S97>/Constant'
     *  S-Function (sfix_bitop): '<S11>/BitwiseLogicalOperator2'
     */
    rtb_Compare_ef = ((KeSTFR_g_EnblFltTypEval2 & 4U) > 0U);

    /* RelationalOperator: '<S108>/Compare' incorporates:
     *  Constant: '<S108>/Constant'
     *  Constant: '<S11>/Constant4'
     *  Constant: '<S14>/Calib'
     *  S-Function (sfix_bitop): '<S11>/BitwiseLogicalOperator3'
     */
    rtb_Compare_n = ((KeSTFR_g_EnblFltTypEval2 & 8U) > 0U);

    /* VariantMerge generated from: '<S6>/TCMHMIEnbl' incorporates:
     *  Constant: '<S115>/Constant'
     *  Constant: '<S11>/Constant9'
     *  Constant: '<S14>/Calib'
     *  RelationalOperator: '<S115>/Compare'
     *  S-Function (sfix_bitop): '<S11>/BitwiseLogicalOperator8'
     */
    STFR_ac_B.VariantMergeForOutportTCMHMIEnbl = ((KeSTFR_g_EnblFltTypEval2 &
        256U) > 0U);

    /* Switch: '<S189>/Switch1' incorporates:
     *  Constant: '<S10>/Constant23'
     *  Constant: '<S13>/Calib'
     *  Constant: '<S67>/Constant'
     *  RelationalOperator: '<S67>/Compare'
     *  S-Function (sfix_bitop): '<S10>/BitwiseLogicalOperator22'
     */
    rtb_Switch1_ku = (((KeSTFR_g_EnblFltTypEval1 & 1073741824U) <= 0U) ||
                      rtb_Switch1_ku);

    /* Logic: '<S203>/Logical1' incorporates:
     *  Constant: '<S10>/Constant24'
     *  Constant: '<S13>/Calib'
     *  Constant: '<S66>/Constant'
     *  RelationalOperator: '<S66>/Compare'
     *  S-Function (sfix_bitop): '<S10>/BitwiseLogicalOperator23'
     *  Switch: '<S189>/Switch'
     */
    rtb_Logical1_n = (((KeSTFR_g_EnblFltTypEval1 & 2147483648U) <= 0U) ||
                      rtb_Logical1_n);

    /* Outputs for Atomic SubSystem: '<S19>/SignalLatchOnWithReset7' */
    /* Logic: '<S220>/OR1' incorporates:
     *  Constant: '<S218>/Constant'
     *  DataTypeConversion: '<S219>/DataTypeConversion'
     *  Logic: '<S19>/Logical10'
     *  Logic: '<S19>/Logical4'
     *  Logic: '<S19>/Logical5'
     *  Logic: '<S220>/NOT'
     *  Logic: '<S220>/OR'
     *  RelationalOperator: '<S19>/Comparison2'
     *  RelationalOperator: '<S19>/Equal1'
     *  RelationalOperator: '<S19>/Equal2'
     *  Switch: '<S19>/Switch1'
     *  Switch: '<S19>/Switch4'
     *  UnitDelay: '<S19>/UnitDelay1'
     *  UnitDelay: '<S220>/UnitDelay'
     */
    STFR_ac_DW.UnitDelay_DSTATE_k = (((((uint32)
        rtb_TmpSignalConversionAtVeBPCR_e_HV_Bat) != CeHVTR_e_Closed) &&
        (((uint32)((TeHVTR_e_HV_BatCntctrStat)STFR_ac_DW.UnitDelay1_DSTATE)) ==
         CeHVTR_e_Closed)) || (((((uint32)
        rtb_TmpSignalConversionAtVeBPCR_e_HV_Bat) != CeHVTR_e_Closed) ||
        (((!rtb_Switch4_g) && (!rtb_Logical1_n)) || ((!rtb_Switch1_n) &&
        (!rtb_Switch1_ku)))) && (STFR_ac_DW.UnitDelay_DSTATE_k)));

    /* End of Outputs for SubSystem: '<S19>/SignalLatchOnWithReset7' */

    /* Switch: '<S117>/Switch1' incorporates:
     *  Constant: '<S10>/Constant2'
     *  Constant: '<S13>/Calib'
     *  Constant: '<S54>/Constant'
     *  Logic: '<S19>/Logical3'
     *  RelationalOperator: '<S54>/Compare'
     *  S-Function (sfix_bitop): '<S10>/BitwiseLogicalOperator1'
     */
    if (rtb_Comparison2_c && ((KeSTFR_g_EnblFltTypEval1 & 2U) > 0U))
    {
        /* Switch: '<S117>/Switch1' incorporates:
         *  Constant: '<S10>/Constant1'
         *  Constant: '<S53>/Constant'
         *  Logic: '<S19>/Logical1'
         *  RelationalOperator: '<S53>/Compare'
         *  S-Function (sfix_bitop): '<S10>/BitwiseLogicalOperator'
         *  S-Function (sfix_bitop): '<S120>/FixPt Bitwise Operator1'
         *  UnitDelay: '<S220>/UnitDelay'
         */
        rtb_Switch1 = (sint32)((uint32)(((uint32)((((KeSTFR_g_EnblFltTypEval1 &
            1U) > 0U) && (STFR_ac_DW.UnitDelay_DSTATE_k)) ? 1 : 0)) | 2U));
    }
    else
    {
        /* Switch: '<S117>/Switch1' incorporates:
         *  Constant: '<S10>/Constant1'
         *  Constant: '<S53>/Constant'
         *  Logic: '<S19>/Logical1'
         *  RelationalOperator: '<S53>/Compare'
         *  S-Function (sfix_bitop): '<S10>/BitwiseLogicalOperator'
         *  UnitDelay: '<S220>/UnitDelay'
         */
        rtb_Switch1 = (sint32)((((KeSTFR_g_EnblFltTypEval1 & 1U) > 0U) &&
                                (STFR_ac_DW.UnitDelay_DSTATE_k)) ? 1 : 0);
    }

    /* End of Switch: '<S117>/Switch1' */

    /* Inport: '<Root>/VeBPCR_b_HV_BatCntctrOpenPending' */
    (void)Rte_Read_VeBPCR_b_HV_BatCntctrOpenPending_Value(&rtb_Comparison1_f);

    /* Switch: '<S117>/Switch2' incorporates:
     *  Constant: '<S10>/Constant3'
     *  Constant: '<S13>/Calib'
     *  Constant: '<S65>/Constant'
     *  Logic: '<S19>/Logical2'
     *  RelationalOperator: '<S65>/Compare'
     *  S-Function (sfix_bitop): '<S10>/BitwiseLogicalOperator2'
     */
    if (rtb_Comparison1_f && ((KeSTFR_g_EnblFltTypEval1 & 4U) > 0U))
    {
        /* Switch: '<S117>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S131>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 = (sint32)((uint32)(((uint32)rtb_Switch1) | 4U));
    }

    /* End of Switch: '<S117>/Switch2' */

    /* Inport: '<Root>/VeBPDR_b_PosSlipDetectedLtchForSTRR' */
    (void)Rte_Read_VeBPDR_b_PosSlipDetectedLtchForSTRR_Value(&tmpRead_2);

    /* Switch: '<S117>/Switch3' incorporates:
     *  Constant: '<S10>/Constant6'
     *  Constant: '<S12>/Calib'
     *  Constant: '<S13>/Calib'
     *  Constant: '<S45>/Constant'
     *  Constant: '<S81>/Constant'
     *  Constant: '<S9>/Constant26'
     *  Logic: '<S16>/Logical1'
     *  Logic: '<S25>/Logical1'
     *  Logic: '<S25>/Logical2'
     *  RelationalOperator: '<S45>/Compare'
     *  RelationalOperator: '<S81>/Compare'
     *  S-Function (sfix_bitop): '<S10>/BitwiseLogicalOperator5'
     *  S-Function (sfix_bitop): '<S9>/BitwiseLogicalOperator2'
     */
    if ((rtb_TmpSignalConversionAtVeHPMR_b_PropSy || ((((sint32)
            KeSTFR_d_ByPassCnd) & 4) > 0)) && (tmpRead_2 &&
            ((KeSTFR_g_EnblFltTypEval1 & 32U) > 0U)))
    {
        /* Switch: '<S117>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S142>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 = (sint32)((uint32)(((uint32)rtb_Switch1) | 8U));
    }

    /* End of Switch: '<S117>/Switch3' */

    /* Inport: '<Root>/VeBCPR_M_BeltCapMaxOpenLoop' */
    (void)Rte_Read_VeBCPR_M_BeltCapMaxOpenLoop_Value(&tmpRead);

    /* Switch: '<S16>/Switch1' incorporates:
     *  Constant: '<S186>/Calib'
     *  Inport: '<Root>/VeESSR_M_EngStrtTorq'
     */
    if (KeSTFR_b_UseEngStrtTrq)
    {
        (void)Rte_Read_VeESSR_M_EngStrtTorq_Value(&rtb_Vector);

        /* Lookup_n-D: '<S223>/Vector' incorporates:
         *  Constant: '<S184>/Calib'
         *  Inport: '<Root>/VeESSR_M_EngStrtTorq'
         *  Sum: '<S16>/Sum'
         */
        rtb_Vector += KeSTFR_M_EngStrtTrqOffset;
    }
    else
    {
        /* Lookup_n-D: '<S223>/Vector' incorporates:
         *  Constant: '<S183>/Calib'
         */
        rtb_Vector = KeSTFR_M_BeltCapMinDefaultStart;
    }

    /* End of Switch: '<S16>/Switch1' */

    /* Switch: '<S117>/Switch4' incorporates:
     *  Constant: '<S10>/Constant5'
     *  Constant: '<S12>/Calib'
     *  Constant: '<S13>/Calib'
     *  Constant: '<S187>/Calib'
     *  Constant: '<S46>/Constant'
     *  Constant: '<S82>/Constant'
     *  Constant: '<S9>/Constant27'
     *  Logic: '<S16>/Logical4'
     *  Logic: '<S26>/Logical1'
     *  Logic: '<S26>/Logical2'
     *  Product: '<S16>/Product'
     *  RelationalOperator: '<S16>/RelationalOperator'
     *  RelationalOperator: '<S46>/Compare'
     *  RelationalOperator: '<S82>/Compare'
     *  S-Function (sfix_bitop): '<S10>/BitwiseLogicalOperator4'
     *  S-Function (sfix_bitop): '<S9>/BitwiseLogicalOperator3'
     */
    if ((rtb_TmpSignalConversionAtVeHPMR_b_PropSy || ((((sint32)
            KeSTFR_d_ByPassCnd) & 8) > 0)) && (((KeSTFR_g_EnblFltTypEval1 & 16U)
          > 0U) && ((((float32)Rte_Prm_KeTSXR_r_P1f_KeTSXR_r_P1f()) * tmpRead) <=
                    rtb_Vector)))
    {
        /* Switch: '<S117>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S145>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 = (sint32)((uint32)(((uint32)rtb_Switch1) | 16U));
    }

    /* End of Switch: '<S117>/Switch4' */

    /* Inport: '<Root>/VeBCPR_M_BeltCapMaxSer' */
    (void)Rte_Read_VeBCPR_M_BeltCapMaxSer_Value(&tmpRead_0);

    /* Product: '<S16>/Product1' incorporates:
     *  Constant: '<S187>/Calib'
     */
    VeSTFR_M_BeltCapMaxCrnkShft = ((float32)Rte_Prm_KeTSXR_r_P1f_KeTSXR_r_P1f())
        * tmpRead_0;

    /* Switch: '<S117>/Switch12' incorporates:
     *  Constant: '<S10>/Constant7'
     *  Constant: '<S12>/Calib'
     *  Constant: '<S13>/Calib'
     *  Constant: '<S185>/Calib'
     *  Constant: '<S50>/Constant'
     *  Constant: '<S80>/Constant'
     *  Constant: '<S9>/Constant28'
     *  Logic: '<S16>/Logical2'
     *  Logic: '<S29>/Logical1'
     *  Logic: '<S29>/Logical2'
     *  RelationalOperator: '<S16>/RelationalOperator2'
     *  RelationalOperator: '<S50>/Compare'
     *  RelationalOperator: '<S80>/Compare'
     *  S-Function (sfix_bitop): '<S10>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S9>/BitwiseLogicalOperator4'
     */
    if ((rtb_TmpSignalConversionAtVeHPMR_b_PropSy || ((((sint32)
            KeSTFR_d_ByPassCnd) & 16) > 0)) && ((VeSTFR_M_BeltCapMaxCrnkShft <=
            KeSTFR_M_LearnedBeltCapCrnkShftMinDefaultStart) &&
            ((KeSTFR_g_EnblFltTypEval1 & 64U) > 0U)))
    {
        /* Switch: '<S117>/Switch12' incorporates:
         *  S-Function (sfix_bitop): '<S123>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 = (sint32)((uint32)(((uint32)rtb_Switch1) | 32U));
    }

    /* End of Switch: '<S117>/Switch12' */

    /* Inport: '<Root>/VeINVR_e_MtrA_InvrtrSt' */
    (void)Rte_Read_VeINVR_e_MtrA_InvrtrSt_Value(&tmpRead_c);

    /* RelationalOperator: '<S21>/Comparison2' incorporates:
     *  Constant: '<S222>/Constant'
     *  Inport: '<Root>/VeINVR_e_MtrA_InvrtrSt'
     */
    rtb_Comparison2_c = (((uint32)tmpRead_c) == CeINVR_e_InverterFaulted);

    /* Switch: '<S117>/Switch5' incorporates:
     *  Constant: '<S10>/Constant8'
     *  Constant: '<S12>/Calib'
     *  Constant: '<S13>/Calib'
     *  Constant: '<S49>/Constant'
     *  Constant: '<S79>/Constant'
     *  Constant: '<S9>/Constant29'
     *  Logic: '<S21>/Logical4'
     *  Logic: '<S30>/Logical1'
     *  Logic: '<S30>/Logical2'
     *  RelationalOperator: '<S49>/Compare'
     *  RelationalOperator: '<S79>/Compare'
     *  S-Function (sfix_bitop): '<S10>/BitwiseLogicalOperator7'
     *  S-Function (sfix_bitop): '<S9>/BitwiseLogicalOperator5'
     */
    if ((rtb_TmpSignalConversionAtVeHPMR_b_PropSy || ((((sint32)
            KeSTFR_d_ByPassCnd) & 32) > 0)) && (rtb_Comparison2_c &&
            ((KeSTFR_g_EnblFltTypEval1 & 128U) > 0U)))
    {
        /* Switch: '<S117>/Switch5' incorporates:
         *  S-Function (sfix_bitop): '<S146>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 = (sint32)((uint32)(((uint32)rtb_Switch1) | 64U));
    }

    /* End of Switch: '<S117>/Switch5' */

    /* Inport: '<Root>/VeINVR_e_MtrB_InvrtrSt' */
    (void)Rte_Read_VeINVR_e_MtrB_InvrtrSt_Value(&tmpRead_d);

    /* RelationalOperator: '<S21>/Comparison1' incorporates:
     *  Constant: '<S222>/Constant'
     *  Inport: '<Root>/VeINVR_e_MtrB_InvrtrSt'
     */
    rtb_Comparison1_f = (CeINVR_e_InverterFaulted == ((uint32)tmpRead_d));

    /* Switch: '<S117>/Switch6' incorporates:
     *  Constant: '<S10>/Constant9'
     *  Constant: '<S12>/Calib'
     *  Constant: '<S13>/Calib'
     *  Constant: '<S48>/Constant'
     *  Constant: '<S83>/Constant'
     *  Constant: '<S9>/Constant30'
     *  Logic: '<S21>/Logical3'
     *  Logic: '<S31>/Logical1'
     *  Logic: '<S31>/Logical2'
     *  RelationalOperator: '<S48>/Compare'
     *  RelationalOperator: '<S83>/Compare'
     *  S-Function (sfix_bitop): '<S10>/BitwiseLogicalOperator8'
     *  S-Function (sfix_bitop): '<S9>/BitwiseLogicalOperator6'
     */
    if ((rtb_TmpSignalConversionAtVeHPMR_b_PropSy || ((((sint32)
            KeSTFR_d_ByPassCnd) & 64) > 0)) && (((KeSTFR_g_EnblFltTypEval1 &
            256U) > 0U) && rtb_Comparison1_f))
    {
        /* Switch: '<S117>/Switch6' incorporates:
         *  S-Function (sfix_bitop): '<S147>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 = (sint32)((uint32)(((uint32)rtb_Switch1) | 128U));
    }

    /* End of Switch: '<S117>/Switch6' */

    /* VariantMerge generated from: '<S6>/SRAREngOnRaw' incorporates:
     *  Constant: '<S230>/Constant'
     *  RelationalOperator: '<S227>/Comparison1'
     */
    STFR_ac_B.VariantMergeForOutportSRAREngOnRaw = (((uint32)
        rtb_TmpSignalConversionAtVeSRAR_e_EngStr) == CeSTRR_e_OvrrdEngOn);

    /* Switch: '<S117>/Switch7' incorporates:
     *  Constant: '<S10>/Constant26'
     *  Constant: '<S12>/Calib'
     *  Constant: '<S13>/Calib'
     *  Constant: '<S47>/Constant'
     *  Constant: '<S70>/Constant'
     *  Constant: '<S9>/Constant31'
     *  Logic: '<S227>/Logical1'
     *  Logic: '<S32>/Logical1'
     *  Logic: '<S32>/Logical2'
     *  RelationalOperator: '<S47>/Compare'
     *  RelationalOperator: '<S70>/Compare'
     *  S-Function (sfix_bitop): '<S10>/BitwiseLogicalOperator24'
     *  S-Function (sfix_bitop): '<S9>/BitwiseLogicalOperator7'
     */
    if ((rtb_TmpSignalConversionAtVeHPMR_b_PropSy || ((((sint32)
            KeSTFR_d_ByPassCnd) & 128) > 0)) &&
            ((STFR_ac_B.VariantMergeForOutportSRAREngOnRaw) &&
             ((KeSTFR_g_EnblFltTypEval1 & 262144U) > 0U)))
    {
        /* Switch: '<S117>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S148>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 = (sint32)((uint32)(((uint32)rtb_Switch1) | 256U));
    }

    /* End of Switch: '<S117>/Switch7' */

    /* Inport: '<Root>/VeSRAR_b_HybFeedback_ECM' */
    (void)Rte_Read_VeSRAR_b_HybFeedback_ECM_Value(&rtb_Logical2_oe);

    /* Switch: '<S117>/Switch8' incorporates:
     *  Constant: '<S10>/Constant27'
     *  Constant: '<S12>/Calib'
     *  Constant: '<S13>/Calib'
     *  Constant: '<S39>/Constant'
     *  Constant: '<S71>/Constant'
     *  Constant: '<S9>/Constant19'
     *  Logic: '<S227>/Logical11'
     *  Logic: '<S227>/Logical2'
     *  Logic: '<S35>/Logical1'
     *  Logic: '<S35>/Logical2'
     *  RelationalOperator: '<S39>/Compare'
     *  RelationalOperator: '<S71>/Compare'
     *  S-Function (sfix_bitop): '<S10>/BitwiseLogicalOperator25'
     *  S-Function (sfix_bitop): '<S9>/BitwiseLogicalOperator10'
     */
    if ((rtb_TmpSignalConversionAtVeHPMR_b_PropSy || ((((sint32)
            KeSTFR_d_ByPassCnd) & 1024) > 0)) && ((!rtb_Logical2_oe) &&
            ((KeSTFR_g_EnblFltTypEval1 & 524288U) > 0U)))
    {
        /* Switch: '<S117>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S149>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 = (sint32)((uint32)(((uint32)rtb_Switch1) | 512U));
    }

    /* End of Switch: '<S117>/Switch8' */

    /* VariantMerge generated from: '<S6>/EngRun' incorporates:
     *  Constant: '<S195>/Constant'
     *  RelationalOperator: '<S190>/Comparison5'
     */
    STFR_ac_B.VariantMergeForOutportEngRun = (((uint32)
        rtb_TmpSignalConversionAtVeSTRR_e_HybStr) == CeSTRR_e_EngRunningSt);

    /* Outputs for Atomic SubSystem: '<S246>/P2Handles' */
#if Rte_SysCon_Variant_STFR_P2Equipd

    /* Outputs for Atomic SubSystem: '<S257>/P2Handles' */
    /* Inport: '<Root>/VeTRNR_e_ActualGear' */
    (void)Rte_Read_VeTRNR_e_ActualGear_Value(&tmpRead_n);

    /* Inport: '<Root>/VeTRNR_e_C1Stat' */
    (void)Rte_Read_VeTRNR_e_C1Stat_Value(&tmpRead_m);

    /* Inport: '<Root>/VeTMDR_e_LockLowSt' */
    (void)Rte_Read_VeTMDR_e_LockLowSt_Value(&tmpRead_l);

    /* RelationalOperator: '<S260>/Comparison3' incorporates:
     *  Constant: '<S266>/Calib'
     */
    rtb_Comparison3_g = (rtb_TmpSignalConversionAtVeCSVR_v_VehSpd >=
                         KeSTFR_v_InrtiaStrtMinVehSpd);

    /* Selector: '<S260>/Selector2' incorporates:
     *  Constant: '<S263>/Constant'
     *  Constant: '<S264>/Calib'
     *  Constant: '<S265>/Calib'
     *  DataTypeConversion: '<S260>/Data Type Conversion1'
     *  Inport: '<Root>/VeTMDR_e_LockLowSt'
     *  Inport: '<Root>/VeTRNR_e_ActualGear'
     *  RelationalOperator: '<S260>/Comparison1'
     *  Selector: '<S260>/Selector1'
     *  Switch: '<S260>/Switch3'
     */
    VeSTFR_b_InrtiaStrt_tmp = ((sint32)((uint32)(((uint32)tmpRead_n) << 1U))) +
        ((sint32)((((uint32)tmpRead_l) == CeTMDR_e_AWD_Low) ? 1 : 0));
    rtb_VariantMergeForOutportGrMin = KaSTFR_b_InrtiaStrtMinGr
        [(VeSTFR_b_InrtiaStrt_tmp)];

    /* VariantMerge generated from: '<S257>/InrtiaStrt' incorporates:
     *  Constant: '<S10>/Constant10'
     *  Constant: '<S10>/Constant11'
     *  Constant: '<S13>/Calib'
     *  Constant: '<S262>/Constant'
     *  Constant: '<S265>/Calib'
     *  Constant: '<S55>/Constant'
     *  Constant: '<S84>/Constant'
     *  Inport: '<Root>/VeTRNR_e_C1Stat'
     *  Logic: '<S260>/Logical1'
     *  Logic: '<S260>/Logical2'
     *  Logic: '<S260>/Logical4'
     *  RelationalOperator: '<S260>/Comparison2'
     *  RelationalOperator: '<S55>/Compare'
     *  RelationalOperator: '<S84>/Compare'
     *  S-Function (sfix_bitop): '<S10>/BitwiseLogicalOperator10'
     *  S-Function (sfix_bitop): '<S10>/BitwiseLogicalOperator9'
     *  Selector: '<S260>/Selector2'
     *  Switch: '<S260>/Switch1'
     */
    VeSTFR_b_InrtiaStrt = ((((((((KeSTFR_g_EnblFltTypEval1 & 1024U) <= 0U) ||
        rtb_Comparison2_c) && rtb_Comparison1_f) && (((uint32)tmpRead_m) ==
        CeHCCR_e_ClLocked)) && rtb_Comparison3_g) &&
                            rtb_VariantMergeForOutportGrMin) &&
                           ((KeSTFR_g_EnblFltTypEval1 & 512U) > 0U));

    /* Switch: '<S260>/Switch3' */
    if (STFR_ac_B.VariantMergeForOutportEngRun)
    {
        /* Switch: '<S260>/Switch3' incorporates:
         *  Constant: '<S260>/TRUE Constant1'
         */
        VeSTFR_b_GrThrsh = true;
    }
    else
    {
        /* Switch: '<S260>/Switch3' incorporates:
         *  Constant: '<S264>/Calib'
         *  Selector: '<S260>/Selector1'
         */
        VeSTFR_b_GrThrsh = KaSTFR_b_InrtiaStrtAllwdGr[(VeSTFR_b_InrtiaStrt_tmp)];
    }

    /* VariantMerge generated from: '<S6>/BmpStrtGrThrsh' incorporates:
     *  SignalConversion: '<S260>/Signal Conversion'
     */
    STFR_ac_B.VariantMergeForOutportBmpStrtGrThrsh = VeSTFR_b_GrThrsh;

    /* VariantMerge generated from: '<S257>/TCMP2K0Flts' incorporates:
     *  Constant: '<S112>/Constant'
     *  Constant: '<S113>/Constant'
     *  Constant: '<S114>/Constant'
     *  Constant: '<S11>/Constant5'
     *  Constant: '<S11>/Constant6'
     *  Constant: '<S11>/Constant7'
     *  Constant: '<S14>/Calib'
     *  Constant: '<S261>/Constant29'
     *  Constant: '<S261>/Constant30'
     *  Constant: '<S261>/Constant31'
     *  Constant: '<S269>/Constant'
     *  Constant: '<S270>/Constant'
     *  Constant: '<S271>/Constant'
     *  Logic: '<S260>/Logical12'
     *  Logic: '<S260>/Logical20'
     *  Logic: '<S260>/Logical21'
     *  Logic: '<S260>/Logical5'
     *  RelationalOperator: '<S112>/Compare'
     *  RelationalOperator: '<S113>/Compare'
     *  RelationalOperator: '<S114>/Compare'
     *  RelationalOperator: '<S269>/Compare'
     *  RelationalOperator: '<S270>/Compare'
     *  RelationalOperator: '<S271>/Compare'
     *  S-Function (sfix_bitop): '<S11>/BitwiseLogicalOperator4'
     *  S-Function (sfix_bitop): '<S11>/BitwiseLogicalOperator5'
     *  S-Function (sfix_bitop): '<S11>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S261>/Bitwise Logical Operator5'
     *  S-Function (sfix_bitop): '<S261>/Bitwise Logical Operator6'
     *  S-Function (sfix_bitop): '<S261>/Bitwise Logical Operator7'
     */
    rtb_VariantMergeForOutportTCMP2K0Flts = (((((((sint32)
        rtb_TmpSignalConversionAtVeTINR_d_TCMFai) & 32) > 0) &&
        ((KeSTFR_g_EnblFltTypEval2 & 16U) > 0U)) || (((((sint32)
        rtb_TmpSignalConversionAtVeTINR_d_TCMFai) & 64) > 0) &&
        ((KeSTFR_g_EnblFltTypEval2 & 32U) > 0U))) || (((((sint32)
        rtb_TmpSignalConversionAtVeTINR_d_TCMFai) & 128) > 0) &&
        ((KeSTFR_g_EnblFltTypEval2 & 64U) > 0U)));

    /* End of Outputs for SubSystem: '<S257>/P2Handles' */
#else

    /* Outputs for Atomic SubSystem: '<S257>/NF' */
    /* VariantMerge generated from: '<S257>/GrMin' incorporates:
     *  Constant: '<S259>/FalseBlk'
     */
    rtb_VariantMergeForOutportGrMin = false;

    /* VariantMerge generated from: '<S257>/SpdMin' incorporates:
     *  Constant: '<S259>/FalseBlk1'
     */
    rtb_Comparison3_g = false;

    /* VariantMerge generated from: '<S6>/BmpStrtGrThrsh' incorporates:
     *  Constant: '<S259>/FalseBlk2'
     */
    STFR_ac_B.VariantMergeForOutportBmpStrtGrThrsh = false;

    /* VariantMerge generated from: '<S257>/InrtiaStrt' incorporates:
     *  Constant: '<S259>/FalseBlk3'
     */
    VeSTFR_b_InrtiaStrt = false;

    /* VariantMerge generated from: '<S257>/TCMP2K0Flts' incorporates:
     *  Constant: '<S259>/FalseBlk4'
     */
    rtb_VariantMergeForOutportTCMP2K0Flts = false;

    /* End of Outputs for SubSystem: '<S257>/NF' */
#endif

    /* End of Outputs for SubSystem: '<S246>/P2Handles' */

    /* Logic: '<S22>/Logical2' incorporates:
     *  Constant: '<S225>/Constant'
     *  DataTypeConversion: '<S224>/DataTypeConversion'
     *  RelationalOperator: '<S22>/Comparison3'
     *  RelationalOperator: '<S22>/Equal1'
     *  UnitDelay: '<S22>/UnitDelay'
     */
    rtb_Logical2_oe = ((CeHPMR_e_Hybrid != ((uint32)
                         rtb_TmpSignalConversionAtVeHPMR_e_PropSy)) && (((uint32)
                         ((TeHPMR_e_PropSysMode)STFR_ac_DW.UnitDelay_DSTATE_a)) ==
                        CeHPMR_e_Hybrid));

    /* Switch: '<S22>/Switch4' */
    rtb_Switch4_g = (rtb_Switch4_g || rtb_Logical1_n);

    /* Switch: '<S22>/Switch1' */
    rtb_Switch1_n = (rtb_Switch1_n || rtb_Switch1_ku);

    /* Outputs for Atomic SubSystem: '<S22>/SignalLatchOnWithReset7' */
    /* Logic: '<S226>/OR1' incorporates:
     *  Constant: '<S225>/Constant'
     *  Logic: '<S226>/NOT'
     *  Logic: '<S226>/OR'
     *  Logic: '<S22>/Logical4'
     *  Logic: '<S22>/Logical5'
     *  RelationalOperator: '<S22>/Equal4'
     *  UnitDelay: '<S226>/UnitDelay'
     */
    STFR_ac_DW.UnitDelay_DSTATE_c = (rtb_Logical2_oe || (((((uint32)
        rtb_TmpSignalConversionAtVeHPMR_e_PropSy) != CeHPMR_e_Hybrid) ||
        ((!rtb_Switch4_g) || (!rtb_Switch1_n))) &&
        (STFR_ac_DW.UnitDelay_DSTATE_c)));

    /* End of Outputs for SubSystem: '<S22>/SignalLatchOnWithReset7' */

    /* Switch: '<S22>/Switch2' incorporates:
     *  Constant: '<S10>/Constant12'
     *  Constant: '<S13>/Calib'
     *  Constant: '<S56>/Constant'
     *  Logic: '<S22>/Logical3'
     *  RelationalOperator: '<S56>/Compare'
     *  S-Function (sfix_bitop): '<S10>/BitwiseLogicalOperator11'
     *  UnitDelay: '<S226>/UnitDelay'
     */
    if ((KeSTFR_g_EnblFltTypEval1 & 2048U) > 0U)
    {
        rtb_Comparison3_g = ((rtb_VariantMergeForOutportGrMin &&
                              rtb_Comparison3_g) && rtb_Logical2_oe);
    }
    else
    {
        rtb_Comparison3_g = STFR_ac_DW.UnitDelay_DSTATE_c;
    }

    /* End of Switch: '<S22>/Switch2' */

    /* Switch: '<S117>/Switch10' incorporates:
     *  Constant: '<S10>/Constant13'
     *  Constant: '<S13>/Calib'
     *  Constant: '<S60>/Constant'
     *  Logic: '<S22>/Logical14'
     *  Logic: '<S27>/Logical8'
     *  RelationalOperator: '<S60>/Compare'
     *  S-Function (sfix_bitop): '<S10>/BitwiseLogicalOperator12'
     */
    if (rtb_TmpSignalConversionAtVeHPMR_b_PropSy && (((KeSTFR_g_EnblFltTypEval1
            & 4096U) > 0U) && rtb_Comparison3_g))
    {
        /* Switch: '<S117>/Switch10' incorporates:
         *  S-Function (sfix_bitop): '<S121>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 = (sint32)((uint32)(((uint32)rtb_Switch1) | 1024U));
    }

    /* End of Switch: '<S117>/Switch10' */

    /* Inport: '<Root>/VeHPMR_b_Allw12VStrt' */
    (void)Rte_Read_VeHPMR_b_Allw12VStrt_Value(&rtb_LeSTFR_b_InhbtESS);

    /* Switch: '<S117>/Switch11' incorporates:
     *  Constant: '<S10>/Constant14'
     *  Constant: '<S13>/Calib'
     *  Constant: '<S59>/Constant'
     *  Logic: '<S22>/Logical1'
     *  Logic: '<S36>/Logical1'
     *  Logic: '<S36>/Logical2'
     *  RelationalOperator: '<S59>/Compare'
     *  S-Function (sfix_bitop): '<S10>/BitwiseLogicalOperator13'
     */
    if ((!rtb_TmpSignalConversionAtVeHPMR_b_PropSy) && (rtb_LeSTFR_b_InhbtESS &&
         ((KeSTFR_g_EnblFltTypEval1 & 8192U) > 0U)))
    {
        /* Switch: '<S117>/Switch11' incorporates:
         *  S-Function (sfix_bitop): '<S122>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 = (sint32)((uint32)(((uint32)rtb_Switch1) | 2048U));
    }

    /* End of Switch: '<S117>/Switch11' */

    /* Inport: '<Root>/VeESSR_b_BSGStrtFailed' */
    (void)Rte_Read_VeESSR_b_BSGStrtFailed_Value(&tmpRead_7);

    /* Switch: '<S117>/Switch13' incorporates:
     *  Constant: '<S10>/Constant15'
     *  Constant: '<S12>/Calib'
     *  Constant: '<S13>/Calib'
     *  Constant: '<S51>/Constant'
     *  Constant: '<S58>/Constant'
     *  Constant: '<S9>/Constant32'
     *  Logic: '<S189>/Logical4'
     *  Logic: '<S33>/Logical1'
     *  Logic: '<S33>/Logical2'
     *  RelationalOperator: '<S51>/Compare'
     *  RelationalOperator: '<S58>/Compare'
     *  S-Function (sfix_bitop): '<S10>/BitwiseLogicalOperator14'
     *  S-Function (sfix_bitop): '<S9>/BitwiseLogicalOperator8'
     */
    if ((rtb_TmpSignalConversionAtVeHPMR_b_PropSy || ((((sint32)
            KeSTFR_d_ByPassCnd) & 256) > 0)) && (tmpRead_7 &&
            ((KeSTFR_g_EnblFltTypEval1 & 16384U) > 0U)))
    {
        /* Switch: '<S117>/Switch13' incorporates:
         *  S-Function (sfix_bitop): '<S124>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 = (sint32)((uint32)(((uint32)rtb_Switch1) | 4096U));
    }

    /* End of Switch: '<S117>/Switch13' */

    /* Switch: '<S117>/Switch9' incorporates:
     *  Constant: '<S12>/Calib'
     *  Constant: '<S52>/Constant'
     *  Constant: '<S9>/Constant18'
     *  Logic: '<S34>/Logical1'
     *  Logic: '<S34>/Logical2'
     *  RelationalOperator: '<S52>/Compare'
     *  S-Function (sfix_bitop): '<S9>/BitwiseLogicalOperator9'
     */
    if ((rtb_TmpSignalConversionAtVeHPMR_b_PropSy || ((((sint32)
            KeSTFR_d_ByPassCnd) & 512) > 0)) && (VeSTFR_b_InrtiaStrt))
    {
        /* Switch: '<S117>/Switch9' incorporates:
         *  S-Function (sfix_bitop): '<S150>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 = (sint32)((uint32)(((uint32)rtb_Switch1) | 8192U));
    }

    /* End of Switch: '<S117>/Switch9' */

    /* Switch: '<S117>/Switch14' incorporates:
     *  Logic: '<S8>/Logical5'
     */
    if (!rtb_Switch1_ku)
    {
        /* Switch: '<S117>/Switch14' incorporates:
         *  S-Function (sfix_bitop): '<S125>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 = (sint32)((uint32)(((uint32)rtb_Switch1) | 16384U));
    }

    /* End of Switch: '<S117>/Switch14' */

    /* Switch: '<S117>/Switch15' incorporates:
     *  Logic: '<S8>/Logical6'
     */
    if (!rtb_Logical1_n)
    {
        /* Switch: '<S117>/Switch15' incorporates:
         *  S-Function (sfix_bitop): '<S126>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 = (sint32)((uint32)(((uint32)rtb_Switch1) | 32768U));
    }

    /* End of Switch: '<S117>/Switch15' */

    /* Logic: '<S20>/Logical3' incorporates:
     *  Constant: '<S233>/Calib'
     *  RelationalOperator: '<S227>/Comparison12'
     */
    rtb_LeSTFR_b_InhbtESS = (KeSTFR_e_RAStrtTypeLwPwr ==
        rtb_TmpSignalConversionAtVeSRAR_e_Eng_bu);

    /* VariantMerge generated from: '<S6>/KeyOffSt' incorporates:
     *  Constant: '<S196>/Constant'
     *  RelationalOperator: '<S190>/Comparison2'
     */
    STFR_ac_B.VariantMergeForOutportKeyOffSt = (((uint32)
        rtb_TmpSignalConversionAtVeSTRR_e_HybStr) == CeSTRR_e_KeyOffSt);

    /* Switch: '<S117>/Switch16' incorporates:
     *  Constant: '<S10>/Constant28'
     *  Constant: '<S13>/Calib'
     *  Constant: '<S75>/Constant'
     *  Logic: '<S227>/Logical8'
     *  RelationalOperator: '<S75>/Compare'
     *  S-Function (sfix_bitop): '<S10>/BitwiseLogicalOperator26'
     */
    if ((rtb_LeSTFR_b_InhbtESS && ((KeSTFR_g_EnblFltTypEval1 & 1048576U) > 0U)) &&
        (STFR_ac_B.VariantMergeForOutportKeyOffSt))
    {
        /* Switch: '<S117>/Switch16' incorporates:
         *  S-Function (sfix_bitop): '<S127>/FixPt Bitwise Operator1'
         */
        STFR_ac_B.VariantMergeForOutportFltReg1 = ((uint32)rtb_Switch1) | 65536U;
    }
    else
    {
        /* Switch: '<S117>/Switch16' */
        STFR_ac_B.VariantMergeForOutportFltReg1 = (uint32)rtb_Switch1;
    }

    /* End of Switch: '<S117>/Switch16' */

    /* Inport: '<Root>/VeSTRR_b_FrstStrtCmplt' */
    (void)Rte_Read_VeSTRR_b_FrstStrtCmplt_Value(&rtb_Logical3_e);

    /* Logic: '<S203>/Logical3' incorporates:
     *  Logic: '<S227>/Logical3'
     */
    rtb_Logical3_e = !rtb_Logical3_e;

    /* VariantMerge generated from: '<S6>/EngOff' incorporates:
     *  Constant: '<S193>/Constant'
     *  RelationalOperator: '<S190>/Comparison1'
     */
    STFR_ac_B.VariantMergeForOutportEngOff = (CeSTRR_e_EngOffSt == ((uint32)
        rtb_TmpSignalConversionAtVeSTRR_e_HybStr));

    /* Switch: '<S117>/Switch17' incorporates:
     *  Constant: '<S10>/Constant29'
     *  Constant: '<S13>/Calib'
     *  Constant: '<S74>/Constant'
     *  Logic: '<S227>/Logical10'
     *  RelationalOperator: '<S74>/Compare'
     *  S-Function (sfix_bitop): '<S10>/BitwiseLogicalOperator27'
     */
    if (((((KeSTFR_g_EnblFltTypEval1 & 2097152U) > 0U) && rtb_LeSTFR_b_InhbtESS)
         && rtb_Logical3_e) && (STFR_ac_B.VariantMergeForOutportEngOff))
    {
        /* Switch: '<S117>/Switch17' incorporates:
         *  S-Function (sfix_bitop): '<S128>/FixPt Bitwise Operator1'
         */
        STFR_ac_B.VariantMergeForOutportFltReg1 |= 131072U;
    }

    /* End of Switch: '<S117>/Switch17' */

    /* Logic: '<S20>/Logical3' incorporates:
     *  Constant: '<S232>/Calib'
     *  RelationalOperator: '<S227>/Comparison11'
     */
    rtb_LeSTFR_b_InhbtESS = (rtb_TmpSignalConversionAtVeSRAR_e_Eng_bu ==
        KeSTFR_e_RAStrtTypeCKS);

    /* Switch: '<S117>/Switch24' incorporates:
     *  Constant: '<S10>/Constant30'
     *  Constant: '<S13>/Calib'
     *  Constant: '<S73>/Constant'
     *  Logic: '<S227>/Logical14'
     *  RelationalOperator: '<S73>/Compare'
     *  S-Function (sfix_bitop): '<S10>/BitwiseLogicalOperator28'
     */
    if ((rtb_LeSTFR_b_InhbtESS && ((KeSTFR_g_EnblFltTypEval1 & 4194304U) > 0U)) &&
        (STFR_ac_B.VariantMergeForOutportKeyOffSt))
    {
        /* Switch: '<S117>/Switch24' incorporates:
         *  S-Function (sfix_bitop): '<S136>/FixPt Bitwise Operator1'
         */
        STFR_ac_B.VariantMergeForOutportFltReg1 |= 262144U;
    }

    /* End of Switch: '<S117>/Switch24' */

    /* Switch: '<S117>/Switch25' incorporates:
     *  Constant: '<S10>/Constant31'
     *  Constant: '<S13>/Calib'
     *  Constant: '<S72>/Constant'
     *  Logic: '<S227>/Logical17'
     *  RelationalOperator: '<S72>/Compare'
     *  S-Function (sfix_bitop): '<S10>/BitwiseLogicalOperator29'
     */
    if (((((KeSTFR_g_EnblFltTypEval1 & 8388608U) > 0U) && rtb_LeSTFR_b_InhbtESS)
         && rtb_Logical3_e) && (STFR_ac_B.VariantMergeForOutportEngOff))
    {
        /* Switch: '<S117>/Switch25' incorporates:
         *  S-Function (sfix_bitop): '<S137>/FixPt Bitwise Operator1'
         */
        STFR_ac_B.VariantMergeForOutportFltReg1 |= 524288U;
    }

    /* End of Switch: '<S117>/Switch25' */

    /* Outputs for Atomic SubSystem: '<S246>/P2_5Handles' */
#if Rte_SysCon_Variant_STFR_P2p5Equipd

    /* Outputs for Atomic SubSystem: '<S258>/P2_5Handles' */
    /* Inport: '<Root>/VeTINR_b_EngStrtTypAvblFA' */
    (void)Rte_Read_VeTINR_b_EngStrtTypAvblFA_Value(&rtb_Compare_fn);

    /* Switch: '<S273>/Switch4' */
    if (rtb_Compare_fn)
    {
        /* Switch: '<S273>/Switch2' */
        if (STFR_ac_B.VariantMergeForOutportEngRun)
        {
            /* Switch: '<S273>/Switch4' incorporates:
             *  Constant: '<S273>/Constant Value2'
             */
            rtb_Switch4_l = 0;
        }
        else
        {
            /* Switch: '<S273>/Switch4' incorporates:
             *  Constant: '<S273>/Constant Value1'
             */
            rtb_Switch4_l = 264;
        }

        /* End of Switch: '<S273>/Switch2' */
    }
    else
    {
        /* Switch: '<S273>/Switch4' incorporates:
         *  Inport: '<Root>/VeTINR_d_EngStrtTypAvbl'
         */
        (void)Rte_Read_VeTINR_d_EngStrtTypAvbl_Value(&rtb_Switch4_l);
    }

    /* End of Switch: '<S273>/Switch4' */

    /* RelationalOperator: '<S276>/Compare' incorporates:
     *  Constant: '<S274>/Constant17'
     *  Constant: '<S276>/Constant'
     *  DataTypeConversion: '<S274>/Data Type Conversion'
     *  S-Function (sfix_bitop): '<S274>/Bitwise Logical Operator'
     */
    rtb_LeSTFR_b_InhbtESS = ((((sint32)((uint16)rtb_Switch4_l)) & 1) > 0);

    /* RelationalOperator: '<S277>/Compare' incorporates:
     *  Constant: '<S274>/Constant25'
     *  Constant: '<S277>/Constant'
     *  DataTypeConversion: '<S274>/Data Type Conversion'
     *  S-Function (sfix_bitop): '<S274>/Bitwise Logical Operator1'
     */
    rtb_Compare_fn = ((((sint32)((uint16)rtb_Switch4_l)) & 2) > 0);

    /* RelationalOperator: '<S278>/Compare' incorporates:
     *  Constant: '<S274>/Constant26'
     *  Constant: '<S278>/Constant'
     *  DataTypeConversion: '<S274>/Data Type Conversion'
     *  S-Function (sfix_bitop): '<S274>/Bitwise Logical Operator2'
     */
    rtb_Logical3_e = ((((sint32)((uint16)rtb_Switch4_l)) & 4) > 0);

    /* RelationalOperator: '<S279>/Compare' incorporates:
     *  Constant: '<S274>/Constant27'
     *  Constant: '<S279>/Constant'
     *  DataTypeConversion: '<S274>/Data Type Conversion'
     *  S-Function (sfix_bitop): '<S274>/Bitwise Logical Operator3'
     */
    rtb_Compare_o0 = ((((sint32)((uint16)rtb_Switch4_l)) & 8) > 0);

    /* VariantMerge generated from: '<S6>/TCMIMAvlbl' incorporates:
     *  Constant: '<S274>/Constant30'
     *  Constant: '<S281>/Constant'
     *  DataTypeConversion: '<S274>/Data Type Conversion'
     *  Logic: '<S273>/Logical1'
     *  RelationalOperator: '<S281>/Compare'
     *  S-Function (sfix_bitop): '<S274>/Bitwise Logical Operator6'
     */
    STFR_ac_B.VariantMergeForOutportTCMIMAvlbl = ((((((sint32)((uint16)
        rtb_Switch4_l)) & 64) > 0) && rtb_Compare_fn) && rtb_Compare_ak);

    /* VariantMerge generated from: '<S258>/TCMImpFlt' incorporates:
     *  Logic: '<S273>/Logical11'
     *  Logic: '<S273>/Logical8'
     */
    rtb_Compare_fn = (rtb_Compare_ak && (!rtb_Compare_fn));

    /* VariantMerge generated from: '<S258>/TCMCltchFlt' incorporates:
     *  Logic: '<S273>/Logical14'
     *  Logic: '<S273>/Logical15'
     */
    rtb_VariantMergeForOutportTCMCltchFlt = (rtb_Compare_dm && (!rtb_Logical3_e));

    /* VariantMerge generated from: '<S258>/TCMExtFlt' incorporates:
     *  Logic: '<S273>/Logical16'
     *  Logic: '<S273>/Logical18'
     */
    rtb_VariantMergeForOutportTCMExtFlt = (rtb_Compare_n && (!rtb_Compare_o0));

    /* VariantMerge generated from: '<S258>/TCMEMFlt' incorporates:
     *  Logic: '<S273>/Logical17'
     *  Logic: '<S273>/Logical19'
     */
    rtb_VariantMergeForOutportTCMEMFlt = (rtb_Compare_ef &&
        (!rtb_LeSTFR_b_InhbtESS));

    /* VariantMerge generated from: '<S6>/TCMEMAvlbl' incorporates:
     *  Constant: '<S274>/Constant29'
     *  Constant: '<S282>/Constant'
     *  DataTypeConversion: '<S274>/Data Type Conversion'
     *  Logic: '<S273>/Logical2'
     *  RelationalOperator: '<S282>/Compare'
     *  S-Function (sfix_bitop): '<S274>/Bitwise Logical Operator5'
     */
    STFR_ac_B.VariantMergeForOutportTCMEMAvlbl = ((((((sint32)((uint16)
        rtb_Switch4_l)) & 32) > 0) && rtb_LeSTFR_b_InhbtESS) && rtb_Compare_ef);

    /* VariantMerge generated from: '<S258>/TCMP1fGd' incorporates:
     *  Constant: '<S274>/Constant32'
     *  Constant: '<S283>/Constant'
     *  DataTypeConversion: '<S274>/Data Type Conversion'
     *  Logic: '<S273>/Logical3'
     *  RelationalOperator: '<S283>/Compare'
     *  S-Function (sfix_bitop): '<S274>/Bitwise Logical Operator8'
     */
    rtb_Compare_o0 = ((((((sint32)((uint16)rtb_Switch4_l)) & 256) > 0) &&
                       rtb_Compare_o0) && rtb_Compare_n);

    /* VariantMerge generated from: '<S6>/TCMCltchAvlbl' incorporates:
     *  Constant: '<S274>/Constant31'
     *  Constant: '<S280>/Constant'
     *  DataTypeConversion: '<S274>/Data Type Conversion'
     *  Logic: '<S273>/Logical9'
     *  RelationalOperator: '<S280>/Compare'
     *  S-Function (sfix_bitop): '<S274>/Bitwise Logical Operator7'
     */
    STFR_ac_B.VariantMergeForOutportTCMCltchAvlbl = ((((((sint32)((uint16)
        rtb_Switch4_l)) & 128) > 0) && rtb_Logical3_e) && rtb_Compare_dm);

    /* VariantMerge generated from: '<S6>/CltchStrtSpdMn' incorporates:
     *  Constant: '<S111>/Constant'
     *  Constant: '<S11>/Constant8'
     *  Constant: '<S14>/Calib'
     *  Constant: '<S275>/Calib'
     *  Logic: '<S273>/Logical13'
     *  RelationalOperator: '<S111>/Compare'
     *  RelationalOperator: '<S273>/Comparison'
     *  S-Function (sfix_bitop): '<S11>/BitwiseLogicalOperator7'
     */
    STFR_ac_B.VariantMergeForOutportCltchStrtSpdMn = (((KeSTFR_g_EnblFltTypEval2
        & 128U) > 0U) && (rtb_TmpSignalConversionAtVeCSVR_v_VehSpd >=
                          KeSTFR_v_CltchStrtVehSpdThrsh));

    /* End of Outputs for SubSystem: '<S258>/P2_5Handles' */
#else

    /* Outputs for Atomic SubSystem: '<S258>/NF' */
    /* VariantMerge generated from: '<S258>/TCMP1fGd' incorporates:
     *  Constant: '<S272>/TRUEConstant8'
     */
    rtb_Compare_o0 = false;

    /* VariantMerge generated from: '<S6>/TCMEMAvlbl' incorporates:
     *  Constant: '<S272>/TRUEConstant6'
     */
    STFR_ac_B.VariantMergeForOutportTCMEMAvlbl = false;

    /* VariantMerge generated from: '<S6>/TCMIMAvlbl' incorporates:
     *  Constant: '<S272>/TRUEConstant4'
     */
    STFR_ac_B.VariantMergeForOutportTCMIMAvlbl = false;

    /* VariantMerge generated from: '<S6>/TCMCltchAvlbl' incorporates:
     *  Constant: '<S272>/TRUEConstant2'
     */
    STFR_ac_B.VariantMergeForOutportTCMCltchAvlbl = false;

    /* VariantMerge generated from: '<S6>/CltchStrtSpdMn' incorporates:
     *  Constant: '<S272>/TRUEConstant9'
     */
    STFR_ac_B.VariantMergeForOutportCltchStrtSpdMn = false;

    /* VariantMerge generated from: '<S258>/TCMExtFlt' incorporates:
     *  Constant: '<S272>/TRUEConstant7'
     */
    rtb_VariantMergeForOutportTCMExtFlt = false;

    /* VariantMerge generated from: '<S258>/TCMEMFlt' incorporates:
     *  Constant: '<S272>/TRUEConstant5'
     */
    rtb_VariantMergeForOutportTCMEMFlt = false;

    /* VariantMerge generated from: '<S258>/TCMImpFlt' incorporates:
     *  Constant: '<S272>/TRUEConstant3'
     */
    rtb_Compare_fn = false;

    /* VariantMerge generated from: '<S258>/TCMCltchFlt' incorporates:
     *  Constant: '<S272>/TRUEConstant1'
     */
    rtb_VariantMergeForOutportTCMCltchFlt = false;

    /* End of Outputs for SubSystem: '<S258>/NF' */
#endif

    /* End of Outputs for SubSystem: '<S246>/P2_5Handles' */

    /* Switch: '<S117>/Switch26' */
    if (rtb_Compare_o0)
    {
        /* Switch: '<S117>/Switch26' incorporates:
         *  S-Function (sfix_bitop): '<S138>/FixPt Bitwise Operator1'
         */
        STFR_ac_B.VariantMergeForOutportFltReg1 |= 1048576U;
    }

    /* End of Switch: '<S117>/Switch26' */

    /* Switch: '<S117>/Switch20' */
    if (STFR_ac_B.VariantMergeForOutportTCMEMAvlbl)
    {
        /* Switch: '<S117>/Switch20' incorporates:
         *  S-Function (sfix_bitop): '<S132>/FixPt Bitwise Operator1'
         */
        STFR_ac_B.VariantMergeForOutportFltReg1 |= 2097152U;
    }

    /* End of Switch: '<S117>/Switch20' */

    /* Switch: '<S117>/Switch27' */
    if (STFR_ac_B.VariantMergeForOutportTCMIMAvlbl)
    {
        /* Switch: '<S117>/Switch27' incorporates:
         *  S-Function (sfix_bitop): '<S139>/FixPt Bitwise Operator1'
         */
        STFR_ac_B.VariantMergeForOutportFltReg1 |= 4194304U;
    }

    /* End of Switch: '<S117>/Switch27' */

    /* Switch: '<S117>/Switch28' */
    if (STFR_ac_B.VariantMergeForOutportTCMCltchAvlbl)
    {
        /* Switch: '<S117>/Switch28' incorporates:
         *  S-Function (sfix_bitop): '<S140>/FixPt Bitwise Operator1'
         */
        STFR_ac_B.VariantMergeForOutportFltReg1 |= 8388608U;
    }

    /* End of Switch: '<S117>/Switch28' */

    /* Switch: '<S117>/Switch29' */
    if (rtb_VariantMergeForOutportTCMExtFlt)
    {
        /* Switch: '<S117>/Switch29' incorporates:
         *  S-Function (sfix_bitop): '<S141>/FixPt Bitwise Operator1'
         */
        STFR_ac_B.VariantMergeForOutportFltReg1 |= 16777216U;
    }

    /* End of Switch: '<S117>/Switch29' */

    /* Switch: '<S117>/Switch30' */
    if (rtb_VariantMergeForOutportTCMEMFlt)
    {
        /* Switch: '<S117>/Switch30' incorporates:
         *  S-Function (sfix_bitop): '<S143>/FixPt Bitwise Operator1'
         */
        STFR_ac_B.VariantMergeForOutportFltReg1 |= 33554432U;
    }

    /* End of Switch: '<S117>/Switch30' */

    /* Switch: '<S117>/Switch18' */
    if (rtb_Compare_fn)
    {
        /* Switch: '<S117>/Switch18' incorporates:
         *  S-Function (sfix_bitop): '<S129>/FixPt Bitwise Operator1'
         */
        STFR_ac_B.VariantMergeForOutportFltReg1 |= 67108864U;
    }

    /* End of Switch: '<S117>/Switch18' */

    /* Switch: '<S117>/Switch19' */
    if (rtb_VariantMergeForOutportTCMCltchFlt)
    {
        /* Switch: '<S117>/Switch19' incorporates:
         *  S-Function (sfix_bitop): '<S130>/FixPt Bitwise Operator1'
         */
        STFR_ac_B.VariantMergeForOutportFltReg1 |= 134217728U;
    }

    /* End of Switch: '<S117>/Switch19' */

    /* Inport: '<Root>/VeSRAR_b_MtrBZeroTrqActv' */
    (void)Rte_Read_VeSRAR_b_MtrBZeroTrqActv_Value(&tmpRead_f);

    /* Switch: '<S117>/Switch21' incorporates:
     *  Constant: '<S10>/Constant32'
     *  Constant: '<S13>/Calib'
     *  Constant: '<S77>/Constant'
     *  Logic: '<S227>/Logical4'
     *  RelationalOperator: '<S77>/Compare'
     *  S-Function (sfix_bitop): '<S10>/BitwiseLogicalOperator30'
     */
    if (tmpRead_f && ((KeSTFR_g_EnblFltTypEval1 & 16777216U) > 0U))
    {
        /* Switch: '<S117>/Switch21' incorporates:
         *  S-Function (sfix_bitop): '<S133>/FixPt Bitwise Operator1'
         */
        STFR_ac_B.VariantMergeForOutportFltReg1 |= 268435456U;
    }

    /* End of Switch: '<S117>/Switch21' */

    /* Switch: '<S117>/Switch31' */
    if (rtb_VariantMergeForOutportTCMP2K0Flts)
    {
        /* VariantMerge generated from: '<S6>/FltReg1' incorporates:
         *  S-Function (sfix_bitop): '<S144>/FixPt Bitwise Operator1'
         *  Switch: '<S118>/Switch22'
         */
        STFR_ac_B.VariantMergeForOutportFltReg1 |= 536870912U;
    }

    /* End of Switch: '<S117>/Switch31' */

    /* Inport: '<Root>/VeBPCR_b_PwrLimON' */
    (void)Rte_Read_VeBPCR_b_PwrLimON_Value(&tmpRead_1);

    /* S-Function (sfix_bitop): '<S203>/BitwiseLogicalOperator1' incorporates:
     *  S-Function (sfix_bitop): '<S192>/BitwiseLogicalOperator2'
     */
    rtb_LeSTFR_b_InhbtESS_tmp = rtb_TmpSignalConversionAtVeESSR_g_StrtSt & 32U;

    /* Logic: '<S20>/Logical3' incorporates:
     *  Constant: '<S10>/Constant25'
     *  Constant: '<S13>/Calib'
     *  Constant: '<S203>/ConstantValue'
     *  Constant: '<S62>/Constant'
     *  Logic: '<S203>/Logical6'
     *  RelationalOperator: '<S203>/Comparison7'
     *  RelationalOperator: '<S62>/Compare'
     *  S-Function (sfix_bitop): '<S10>/BitwiseLogicalOperator17'
     *  S-Function (sfix_bitop): '<S203>/BitwiseLogicalOperator1'
     */
    rtb_LeSTFR_b_InhbtESS = (((KeSTFR_g_EnblFltTypEval1 & 131072U) > 0U) &&
        (rtb_LeSTFR_b_InhbtESS_tmp > 0U));

    /* Switch: '<S118>/Switch1' */
    if (rtb_LeSTFR_b_InhbtESS)
    {
        /* Switch: '<S118>/Switch1' incorporates:
         *  Constant: '<S10>/Constant4'
         *  Constant: '<S13>/Calib'
         *  Constant: '<S76>/Constant'
         *  Logic: '<S19>/Logical6'
         *  RelationalOperator: '<S76>/Compare'
         *  S-Function (sfix_bitop): '<S10>/BitwiseLogicalOperator3'
         *  S-Function (sfix_bitop): '<S152>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 = (sint32)((uint32)(((uint32)((tmpRead_1 &&
            ((KeSTFR_g_EnblFltTypEval1 & 8U) > 0U)) ? 1 : 0)) | 2U));
    }
    else
    {
        /* Switch: '<S118>/Switch1' incorporates:
         *  Constant: '<S10>/Constant4'
         *  Constant: '<S13>/Calib'
         *  Constant: '<S76>/Constant'
         *  Logic: '<S19>/Logical6'
         *  RelationalOperator: '<S76>/Compare'
         *  S-Function (sfix_bitop): '<S10>/BitwiseLogicalOperator3'
         */
        rtb_Switch1 = (sint32)((tmpRead_1 && ((KeSTFR_g_EnblFltTypEval1 & 8U) >
            0U)) ? 1 : 0);
    }

    /* End of Switch: '<S118>/Switch1' */

    /* Inport: '<Root>/VeSRAR_g_RA_InputSet1' */
    (void)Rte_Read_VeSRAR_g_RA_InputSet1_Value(&tmpRead_g);

    /* Switch: '<S118>/Switch2' incorporates:
     *  Constant: '<S116>/Constant'
     *  Constant: '<S11>/Constant10'
     *  Constant: '<S14>/Calib'
     *  Constant: '<S229>/Constant11'
     *  Constant: '<S244>/Calib'
     *  Logic: '<S229>/Logical3'
     *  RelationalOperator: '<S116>/Compare'
     *  RelationalOperator: '<S229>/Comparison'
     *  S-Function (sfix_bitop): '<S11>/BitwiseLogicalOperator9'
     *  S-Function (sfix_bitop): '<S229>/BitwiseLogicalOperator'
     */
    if (((tmpRead_g & KeSTFR_g_DCDCFaultBits) > 0U) &&
            ((KeSTFR_g_EnblFltTypEval2 & 512U) > 0U))
    {
        /* Switch: '<S118>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S163>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 = (sint32)((uint32)(((uint32)rtb_Switch1) | 4U));
    }

    /* End of Switch: '<S118>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S24>/LmpHmFltExtrctn' */
#if Rte_SysCon_Variant_STFR_P2p5Equipd

    /* Outputs for Atomic SubSystem: '<S245>/LmpHmFltExtrctn' */
    /* SwitchCase: '<S247>/Switch_Case' */
    switch (rtb_DataTypeConversion)
    {
      case 1:
        /* Outputs for IfAction SubSystem: '<S247>/SCA_Case1' incorporates:
         *  ActionPort: '<S249>/ActionPort'
         */
        /* Merge: '<S247>/Merge' incorporates:
         *  Constant: '<S249>/TRUEConstant'
         *  SignalConversion generated from: '<S249>/ST1_D'
         */
        VeSTFR_b_ST1D = true;

        /* Merge: '<S247>/Merge2' incorporates:
         *  Constant: '<S249>/FALSEConstant'
         *  SignalConversion generated from: '<S249>/ST2_D'
         */
        VeSTFR_b_ST2D = false;

        /* Merge: '<S247>/Merge1' incorporates:
         *  Constant: '<S249>/FALSEConstant1'
         *  SignalConversion generated from: '<S249>/C1_D'
         */
        VeSTFR_b_C1D = false;

        /* Merge: '<S247>/Merge3' incorporates:
         *  Constant: '<S249>/FALSEConstant2'
         *  SignalConversion generated from: '<S249>/C2_D'
         */
        VeSTFR_b_C2D = false;

        /* End of Outputs for SubSystem: '<S247>/SCA_Case1' */
        break;

      case 2:
        /* Outputs for IfAction SubSystem: '<S247>/SCA_Case2' incorporates:
         *  ActionPort: '<S250>/ActionPort'
         */
        /* Merge: '<S247>/Merge' incorporates:
         *  Constant: '<S250>/TRUEConstant'
         *  SignalConversion generated from: '<S250>/ST1_D'
         */
        VeSTFR_b_ST1D = true;

        /* Merge: '<S247>/Merge1' incorporates:
         *  Constant: '<S250>/TRUEConstant1'
         *  SignalConversion generated from: '<S250>/C1_D'
         */
        VeSTFR_b_C1D = true;

        /* Merge: '<S247>/Merge2' incorporates:
         *  Constant: '<S250>/FALSEConstant'
         *  SignalConversion generated from: '<S250>/ST2_D'
         */
        VeSTFR_b_ST2D = false;

        /* Merge: '<S247>/Merge3' incorporates:
         *  Constant: '<S250>/FALSEConstant1'
         *  SignalConversion generated from: '<S250>/C2_D'
         */
        VeSTFR_b_C2D = false;

        /* End of Outputs for SubSystem: '<S247>/SCA_Case2' */
        break;

      case 3:
        /* Outputs for IfAction SubSystem: '<S247>/SCA_Case3' incorporates:
         *  ActionPort: '<S251>/ActionPort'
         */
        /* Merge: '<S247>/Merge2' incorporates:
         *  Constant: '<S251>/TRUEConstant'
         *  SignalConversion generated from: '<S251>/ST2_D'
         */
        VeSTFR_b_ST2D = true;

        /* Merge: '<S247>/Merge' incorporates:
         *  Constant: '<S251>/FALSEConstant'
         *  SignalConversion generated from: '<S251>/ST1_D'
         */
        VeSTFR_b_ST1D = false;

        /* Merge: '<S247>/Merge1' incorporates:
         *  Constant: '<S251>/FALSEConstant1'
         *  SignalConversion generated from: '<S251>/C1_D'
         */
        VeSTFR_b_C1D = false;

        /* Merge: '<S247>/Merge3' incorporates:
         *  Constant: '<S251>/FALSEConstant2'
         *  SignalConversion generated from: '<S251>/C2_D'
         */
        VeSTFR_b_C2D = false;

        /* End of Outputs for SubSystem: '<S247>/SCA_Case3' */
        break;

      case 4:
        /* Outputs for IfAction SubSystem: '<S247>/SCA_Case4' incorporates:
         *  ActionPort: '<S252>/ActionPort'
         */
        /* Merge: '<S247>/Merge2' incorporates:
         *  Constant: '<S252>/TRUEConstant'
         *  SignalConversion generated from: '<S252>/ST2_D'
         */
        VeSTFR_b_ST2D = true;

        /* Merge: '<S247>/Merge3' incorporates:
         *  Constant: '<S252>/TRUEConstant1'
         *  SignalConversion generated from: '<S252>/C2_D'
         */
        VeSTFR_b_C2D = true;

        /* Merge: '<S247>/Merge' incorporates:
         *  Constant: '<S252>/FALSEConstant'
         *  SignalConversion generated from: '<S252>/ST1_D'
         */
        VeSTFR_b_ST1D = false;

        /* Merge: '<S247>/Merge1' incorporates:
         *  Constant: '<S252>/FALSEConstant1'
         *  SignalConversion generated from: '<S252>/C1_D'
         */
        VeSTFR_b_C1D = false;

        /* End of Outputs for SubSystem: '<S247>/SCA_Case4' */
        break;

      case 5:
        /* Outputs for IfAction SubSystem: '<S247>/SCA_Case5' incorporates:
         *  ActionPort: '<S253>/ActionPort'
         */
        /* Merge: '<S247>/Merge' incorporates:
         *  Constant: '<S253>/TRUEConstant'
         *  SignalConversion generated from: '<S253>/ST1_D'
         */
        VeSTFR_b_ST1D = true;

        /* Merge: '<S247>/Merge1' incorporates:
         *  Constant: '<S253>/TRUEConstant1'
         *  SignalConversion generated from: '<S253>/C1_D'
         */
        VeSTFR_b_C1D = true;

        /* Merge: '<S247>/Merge2' incorporates:
         *  Constant: '<S253>/TRUEConstant2'
         *  SignalConversion generated from: '<S253>/ST2_D'
         */
        VeSTFR_b_ST2D = true;

        /* Merge: '<S247>/Merge3' incorporates:
         *  Constant: '<S253>/FALSEConstant'
         *  SignalConversion generated from: '<S253>/C2_D'
         */
        VeSTFR_b_C2D = false;

        /* End of Outputs for SubSystem: '<S247>/SCA_Case5' */
        break;

      case 6:
        /* Outputs for IfAction SubSystem: '<S247>/SCA_Case6' incorporates:
         *  ActionPort: '<S254>/ActionPort'
         */
        /* Merge: '<S247>/Merge' incorporates:
         *  Constant: '<S254>/TRUEConstant'
         *  SignalConversion generated from: '<S254>/ST1_D'
         */
        VeSTFR_b_ST1D = true;

        /* Merge: '<S247>/Merge1' incorporates:
         *  Constant: '<S254>/TRUEConstant1'
         *  SignalConversion generated from: '<S254>/C1_D'
         */
        VeSTFR_b_C1D = true;

        /* Merge: '<S247>/Merge2' incorporates:
         *  Constant: '<S254>/TRUEConstant2'
         *  SignalConversion generated from: '<S254>/ST2_D'
         */
        VeSTFR_b_ST2D = true;

        /* Merge: '<S247>/Merge3' incorporates:
         *  Constant: '<S254>/TRUEConstant3'
         *  SignalConversion generated from: '<S254>/C2_D'
         */
        VeSTFR_b_C2D = true;

        /* End of Outputs for SubSystem: '<S247>/SCA_Case6' */
        break;

      case 7:
        /* Outputs for IfAction SubSystem: '<S247>/SCA_Case7' incorporates:
         *  ActionPort: '<S255>/ActionPort'
         */
        /* Merge: '<S247>/Merge3' incorporates:
         *  Constant: '<S255>/TRUEConstant'
         *  SignalConversion generated from: '<S255>/C2_D'
         */
        VeSTFR_b_C2D = true;

        /* Merge: '<S247>/Merge' incorporates:
         *  Constant: '<S255>/FALSEConstant'
         *  SignalConversion generated from: '<S255>/ST1_D'
         */
        VeSTFR_b_ST1D = false;

        /* Merge: '<S247>/Merge1' incorporates:
         *  Constant: '<S255>/FALSEConstant1'
         *  SignalConversion generated from: '<S255>/C1_D'
         */
        VeSTFR_b_C1D = false;

        /* Merge: '<S247>/Merge2' incorporates:
         *  Constant: '<S255>/FALSEConstant2'
         *  SignalConversion generated from: '<S255>/ST2_D'
         */
        VeSTFR_b_ST2D = false;

        /* End of Outputs for SubSystem: '<S247>/SCA_Case7' */
        break;

      default:
        /* Outputs for IfAction SubSystem: '<S247>/SCA_Case8' incorporates:
         *  ActionPort: '<S256>/ActionPort'
         */
        /* Merge: '<S247>/Merge3' incorporates:
         *  Constant: '<S256>/FALSEConstant3'
         *  SignalConversion generated from: '<S256>/C2_D'
         */
        VeSTFR_b_C2D = false;

        /* Merge: '<S247>/Merge' incorporates:
         *  Constant: '<S256>/FALSEConstant'
         *  SignalConversion generated from: '<S256>/ST1_D'
         */
        VeSTFR_b_ST1D = false;

        /* Merge: '<S247>/Merge1' incorporates:
         *  Constant: '<S256>/FALSEConstant2'
         *  SignalConversion generated from: '<S256>/C1_D'
         */
        VeSTFR_b_C1D = false;

        /* Merge: '<S247>/Merge2' incorporates:
         *  Constant: '<S256>/FALSEConstant1'
         *  SignalConversion generated from: '<S256>/ST2_D'
         */
        VeSTFR_b_ST2D = false;

        /* End of Outputs for SubSystem: '<S247>/SCA_Case8' */
        break;
    }

    /* End of SwitchCase: '<S247>/Switch_Case' */

    /* VariantMerge generated from: '<S245>/TCMST1DFlt' incorporates:
     *  Constant: '<S11>/Constant11'
     *  Constant: '<S14>/Calib'
     *  Constant: '<S87>/Constant'
     *  Logic: '<S247>/Logical5'
     *  RelationalOperator: '<S87>/Compare'
     *  S-Function (sfix_bitop): '<S11>/BitwiseLogicalOperator10'
     */
    rtb_VariantMergeForOutportTCMST1DFlt = ((VeSTFR_b_ST1D) &&
        ((KeSTFR_g_EnblFltTypEval2 & 1024U) > 0U));

    /* VariantMerge generated from: '<S245>/TCMC1DFlt' incorporates:
     *  Constant: '<S11>/Constant12'
     *  Constant: '<S14>/Calib'
     *  Constant: '<S88>/Constant'
     *  Logic: '<S247>/Logical6'
     *  RelationalOperator: '<S88>/Compare'
     *  S-Function (sfix_bitop): '<S11>/BitwiseLogicalOperator11'
     */
    rtb_VariantMergeForOutportTCMC1DFlt = ((VeSTFR_b_C1D) &&
        ((KeSTFR_g_EnblFltTypEval2 & 2048U) > 0U));

    /* VariantMerge generated from: '<S245>/TCMST2DFlt' incorporates:
     *  Constant: '<S11>/Constant13'
     *  Constant: '<S14>/Calib'
     *  Constant: '<S92>/Constant'
     *  Logic: '<S247>/Logical7'
     *  RelationalOperator: '<S92>/Compare'
     *  S-Function (sfix_bitop): '<S11>/BitwiseLogicalOperator12'
     */
    rtb_VariantMergeForOutportTCMST2DFlt = ((VeSTFR_b_ST2D) &&
        ((KeSTFR_g_EnblFltTypEval2 & 4096U) > 0U));

    /* VariantMerge generated from: '<S245>/TCMC2DFlt' incorporates:
     *  Constant: '<S11>/Constant14'
     *  Constant: '<S14>/Calib'
     *  Constant: '<S91>/Constant'
     *  Logic: '<S247>/Logical8'
     *  RelationalOperator: '<S91>/Compare'
     *  S-Function (sfix_bitop): '<S11>/BitwiseLogicalOperator13'
     */
    rtb_VariantMergeForOutportTCMC2DFlt = ((VeSTFR_b_C2D) &&
        ((KeSTFR_g_EnblFltTypEval2 & 8192U) > 0U));

    /* End of Outputs for SubSystem: '<S245>/LmpHmFltExtrctn' */
#else

    /* Outputs for Atomic SubSystem: '<S245>/NF' */
    /* VariantMerge generated from: '<S245>/TCMST1DFlt' incorporates:
     *  Constant: '<S248>/FALSE Constant'
     */
    rtb_VariantMergeForOutportTCMST1DFlt = false;

    /* VariantMerge generated from: '<S245>/TCMC1DFlt' incorporates:
     *  Constant: '<S248>/FALSE Constant2'
     */
    rtb_VariantMergeForOutportTCMC1DFlt = false;

    /* VariantMerge generated from: '<S245>/TCMST2DFlt' incorporates:
     *  Constant: '<S248>/FALSE Constant3'
     */
    rtb_VariantMergeForOutportTCMST2DFlt = false;

    /* VariantMerge generated from: '<S245>/TCMC2DFlt' incorporates:
     *  Constant: '<S248>/FALSE Constant1'
     */
    rtb_VariantMergeForOutportTCMC2DFlt = false;

    /* End of Outputs for SubSystem: '<S245>/NF' */
#endif

    /* End of Outputs for SubSystem: '<S24>/LmpHmFltExtrctn' */

    /* Switch: '<S118>/Switch3' */
    if (rtb_VariantMergeForOutportTCMST1DFlt)
    {
        /* Switch: '<S118>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S174>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 = (sint32)((uint32)(((uint32)rtb_Switch1) | 8U));
    }

    /* End of Switch: '<S118>/Switch3' */

    /* Switch: '<S118>/Switch4' */
    if (rtb_VariantMergeForOutportTCMC1DFlt)
    {
        /* Switch: '<S118>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S177>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 = (sint32)((uint32)(((uint32)rtb_Switch1) | 16U));
    }

    /* End of Switch: '<S118>/Switch4' */

    /* Switch: '<S118>/Switch12' */
    if (rtb_VariantMergeForOutportTCMST2DFlt)
    {
        /* Switch: '<S118>/Switch12' incorporates:
         *  S-Function (sfix_bitop): '<S155>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 = (sint32)((uint32)(((uint32)rtb_Switch1) | 32U));
    }

    /* End of Switch: '<S118>/Switch12' */

    /* Switch: '<S118>/Switch5' */
    if (rtb_VariantMergeForOutportTCMC2DFlt)
    {
        /* Switch: '<S118>/Switch5' incorporates:
         *  S-Function (sfix_bitop): '<S178>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 = (sint32)((uint32)(((uint32)rtb_Switch1) | 64U));
    }

    /* End of Switch: '<S118>/Switch5' */

    /* Inport: '<Root>/VeSRAR_g_RA_InputSet5' */
    (void)Rte_Read_VeSRAR_g_RA_InputSet5_Value(&tmpRead_h);

    /* Switch: '<S118>/Switch6' incorporates:
     *  Constant: '<S11>/Constant25'
     *  Constant: '<S14>/Calib'
     *  Constant: '<S235>/Constant25'
     *  Constant: '<S240>/Constant'
     *  Constant: '<S94>/Constant'
     *  Logic: '<S228>/Logical3'
     *  RelationalOperator: '<S240>/Compare'
     *  RelationalOperator: '<S94>/Compare'
     *  S-Function (sfix_bitop): '<S11>/BitwiseLogicalOperator17'
     *  S-Function (sfix_bitop): '<S235>/BitwiseLogicalOperator1'
     */
    if (((tmpRead_h & 4096U) > 0U) && ((KeSTFR_g_EnblFltTypEval2 & 131072U) > 0U))
    {
        /* Switch: '<S118>/Switch6' incorporates:
         *  S-Function (sfix_bitop): '<S179>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 = (sint32)((uint32)(((uint32)rtb_Switch1) | 128U));
    }

    /* End of Switch: '<S118>/Switch6' */

    /* Inport: '<Root>/VeSRAR_g_RA_InputSet7' */
    (void)Rte_Read_VeSRAR_g_RA_InputSet7_Value(&tmpRead_i);

    /* Switch: '<S118>/Switch7' incorporates:
     *  Constant: '<S11>/Constant15'
     *  Constant: '<S11>/Constant16'
     *  Constant: '<S11>/Constant17'
     *  Constant: '<S14>/Calib'
     *  Constant: '<S234>/Constant2'
     *  Constant: '<S234>/Constant4'
     *  Constant: '<S234>/Constant5'
     *  Constant: '<S237>/Constant'
     *  Constant: '<S238>/Constant'
     *  Constant: '<S239>/Constant'
     *  Constant: '<S89>/Constant'
     *  Constant: '<S90>/Constant'
     *  Constant: '<S93>/Constant'
     *  Logic: '<S228>/Logical1'
     *  Logic: '<S228>/Logical2'
     *  Logic: '<S228>/Logical4'
     *  Logic: '<S228>/Logical5'
     *  RelationalOperator: '<S237>/Compare'
     *  RelationalOperator: '<S238>/Compare'
     *  RelationalOperator: '<S239>/Compare'
     *  RelationalOperator: '<S89>/Compare'
     *  RelationalOperator: '<S90>/Compare'
     *  RelationalOperator: '<S93>/Compare'
     *  S-Function (sfix_bitop): '<S11>/BitwiseLogicalOperator14'
     *  S-Function (sfix_bitop): '<S11>/BitwiseLogicalOperator15'
     *  S-Function (sfix_bitop): '<S11>/BitwiseLogicalOperator16'
     *  S-Function (sfix_bitop): '<S234>/BitwiseLogicalOperator3'
     *  S-Function (sfix_bitop): '<S234>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S234>/BitwiseLogicalOperator7'
     */
    if (((((tmpRead_i & 8U) > 0U) && ((KeSTFR_g_EnblFltTypEval2 & 16384U) > 0U))
         || (((tmpRead_i & 32U) > 0U) && ((KeSTFR_g_EnblFltTypEval2 & 32768U) >
            0U))) || (((tmpRead_i & 64U) > 0U) && ((KeSTFR_g_EnblFltTypEval2 &
            65536U) > 0U)))
    {
        /* Switch: '<S118>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S180>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 = (sint32)((uint32)(((uint32)rtb_Switch1) | 256U));
    }

    /* End of Switch: '<S118>/Switch7' */

    /* Inport: '<Root>/VeESSR_b_AStrtReattmptAllowed' */
    (void)Rte_Read_VeESSR_b_AStrtReattmptAllowed_Value(&tmpRead_8);

    /* Logic: '<S203>/Logical3' */
    rtb_Logical3_e = !tmpRead_8;

    /* Switch: '<S118>/Switch8' incorporates:
     *  Constant: '<S106>/Constant'
     *  Constant: '<S11>/Constant29'
     *  Constant: '<S14>/Calib'
     *  Logic: '<S203>/Logical12'
     *  RelationalOperator: '<S106>/Compare'
     *  S-Function (sfix_bitop): '<S11>/BitwiseLogicalOperator27'
     */
    if (rtb_Logical3_e && ((KeSTFR_g_EnblFltTypEval2 & 2097152U) > 0U))
    {
        /* Switch: '<S118>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S181>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 = (sint32)((uint32)(((uint32)rtb_Switch1) | 512U));
    }

    /* End of Switch: '<S118>/Switch8' */

    /* Outputs for Atomic SubSystem: '<S191>/ESS_P2p5StrtExprd' */
    /* UnitDelay: '<S191>/Unit Delay' incorporates:
     *  Inport: '<Root>/VeESSR_Cnt_CSSpinupAttmptCntr'
     *  Inport: '<Root>/VeESSR_Cnt_EMSpinupAttmptCntr'
     */
#if Rte_SysCon_Variant_STFR_P2p5Equipd

    /* Outputs for Atomic SubSystem: '<S204>/Subsystem' */
    (void)Rte_Read_VeESSR_Cnt_EMSpinupAttmptCntr_Value(&tmpRead_a);
    (void)Rte_Read_VeESSR_Cnt_CSSpinupAttmptCntr_Value(&tmpRead_9);

    /* Logic: '<S206>/Logical4' incorporates:
     *  Constant: '<S206>/ConstantValue6'
     *  Constant: '<S210>/Calib'
     *  Constant: '<S211>/Calib'
     *  Inport: '<Root>/VeESSR_Cnt_CSSpinupAttmptCntr'
     *  Inport: '<Root>/VeESSR_Cnt_EMSpinupAttmptCntr'
     *  RelationalOperator: '<S206>/Comparison4'
     *  RelationalOperator: '<S206>/Comparison5'
     *  S-Function (sfix_bitop): '<S206>/BitwiseLogicalOperator6'
     *  S-Function (sfix_bitop): '<S206>/BitwiseLogicalOperator7'
     */
    rtb_VariantMergeForOutportTCMP2K0Flts =
        (((STFR_ac_B.VariantMergeForOutportFltReg1 & KeSTFR_g_SelLmpHmRsns1) >
          0U) || ((STFR_ac_DW.UnitDelay_DSTATE_p & KeSTFR_g_SelLmpHmRsns2) > 0U));

    /* Switch: '<S206>/Switch3' incorporates:
     *  Constant: '<S206>/ConstantValue4'
     *  Constant: '<S209>/Calib'
     */
    if (rtb_VariantMergeForOutportTCMP2K0Flts)
    {
        rtb_Logical4_m_0 = 1U;
    }
    else
    {
        rtb_Logical4_m_0 = KeSTFR_Cnt_TotEMStrtAllwd;
    }

    /* End of Switch: '<S206>/Switch3' */

    /* VariantMerge generated from: '<S204>/EMStrtExprd' incorporates:
     *  Constant: '<S103>/Constant'
     *  Constant: '<S11>/Constant27'
     *  Constant: '<S14>/Calib'
     *  Constant: '<S206>/ConstantValue2'
     *  Logic: '<S206>/Logical10'
     *  RelationalOperator: '<S103>/Compare'
     *  RelationalOperator: '<S206>/Comparison12'
     *  RelationalOperator: '<S206>/Comparison13'
     *  S-Function (sfix_bitop): '<S11>/BitwiseLogicalOperator25'
     *  S-Function (sfix_bitop): '<S206>/BitwiseLogicalOperator3'
     */
    rtb_VariantMergeForOutportEMStrtExprd =
        ((((rtb_TmpSignalConversionAtVeESSR_g_StrtSt & 16777216U) > 0U) &&
          (tmpRead_a >= rtb_Logical4_m_0)) && ((KeSTFR_g_EnblFltTypEval2 &
           524288U) > 0U));

    /* Switch: '<S206>/Switch2' incorporates:
     *  Constant: '<S206>/ConstantValue3'
     *  Constant: '<S208>/Calib'
     */
    if (rtb_VariantMergeForOutportTCMP2K0Flts)
    {
        rtb_Logical4_m_0 = 1U;
    }
    else
    {
        rtb_Logical4_m_0 = KeSTFR_Cnt_TotCltchStrtAllwd;
    }

    /* End of Switch: '<S206>/Switch2' */

    /* VariantMerge generated from: '<S204>/CltchImpStrtExprd' incorporates:
     *  Constant: '<S102>/Constant'
     *  Constant: '<S11>/Constant26'
     *  Constant: '<S14>/Calib'
     *  Constant: '<S206>/ConstantValue1'
     *  Logic: '<S206>/Logical9'
     *  RelationalOperator: '<S102>/Compare'
     *  RelationalOperator: '<S206>/Comparison10'
     *  RelationalOperator: '<S206>/Comparison11'
     *  S-Function (sfix_bitop): '<S11>/BitwiseLogicalOperator24'
     *  S-Function (sfix_bitop): '<S206>/BitwiseLogicalOperator2'
     */
    rtb_VariantMergeForOutportCltchImpStrtEx =
        ((((rtb_TmpSignalConversionAtVeESSR_g_StrtSt & 4194304U) > 0U) &&
          (tmpRead_9 >= rtb_Logical4_m_0)) && ((KeSTFR_g_EnblFltTypEval2 &
           262144U) > 0U));

    /* End of Outputs for SubSystem: '<S204>/Subsystem' */
#else

    /* Outputs for Atomic SubSystem: '<S204>/Subsystem1' */
    /* VariantMerge generated from: '<S204>/CltchImpStrtExprd' incorporates:
     *  Constant: '<S207>/TRUEConstant'
     */
    rtb_VariantMergeForOutportCltchImpStrtEx = false;

    /* VariantMerge generated from: '<S204>/EMStrtExprd' incorporates:
     *  Constant: '<S207>/TRUEConstant1'
     */
    rtb_VariantMergeForOutportEMStrtExprd = false;

    /* End of Outputs for SubSystem: '<S204>/Subsystem1' */
#endif

    /* End of UnitDelay: '<S191>/Unit Delay' */
    /* End of Outputs for SubSystem: '<S191>/ESS_P2p5StrtExprd' */

    /* Switch: '<S118>/Switch10' */
    if (rtb_VariantMergeForOutportCltchImpStrtEx)
    {
        /* Switch: '<S118>/Switch10' incorporates:
         *  S-Function (sfix_bitop): '<S153>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 = (sint32)((uint32)(((uint32)rtb_Switch1) | 1024U));
    }

    /* End of Switch: '<S118>/Switch10' */

    /* Switch: '<S118>/Switch11' */
    if (rtb_VariantMergeForOutportEMStrtExprd)
    {
        /* Switch: '<S118>/Switch11' incorporates:
         *  S-Function (sfix_bitop): '<S154>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 = (sint32)((uint32)(((uint32)rtb_Switch1) | 2048U));
    }

    /* End of Switch: '<S118>/Switch11' */

    /* S-Function (sfix_bitop): '<S203>/BitwiseLogicalOperator4' incorporates:
     *  S-Function (sfix_bitop): '<S192>/BitwiseLogicalOperator3'
     */
    tmpRead_g = rtb_TmpSignalConversionAtVeESSR_g_StrtSt & 128U;

    /* Switch: '<S118>/Switch13' incorporates:
     *  Constant: '<S107>/Constant'
     *  Constant: '<S11>/Constant28'
     *  Constant: '<S14>/Calib'
     *  Constant: '<S203>/ConstantValue5'
     *  Logic: '<S203>/Logical11'
     *  RelationalOperator: '<S107>/Compare'
     *  RelationalOperator: '<S203>/Comparison14'
     *  S-Function (sfix_bitop): '<S11>/BitwiseLogicalOperator26'
     *  S-Function (sfix_bitop): '<S203>/BitwiseLogicalOperator4'
     */
    if ((tmpRead_g > 0U) && ((KeSTFR_g_EnblFltTypEval2 & 1048576U) > 0U))
    {
        /* Switch: '<S118>/Switch13' incorporates:
         *  S-Function (sfix_bitop): '<S156>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 = (sint32)((uint32)(((uint32)rtb_Switch1) | 4096U));
    }

    /* End of Switch: '<S118>/Switch13' */

    /* Switch: '<S118>/Switch9' incorporates:
     *  Constant: '<S105>/Constant'
     *  Constant: '<S11>/Constant30'
     *  Constant: '<S14>/Calib'
     *  DataStoreRead: '<S192>/DataStoreRead'
     *  Logic: '<S192>/Logical7'
     *  RelationalOperator: '<S105>/Compare'
     *  S-Function (sfix_bitop): '<S11>/BitwiseLogicalOperator28'
     */
    if (((KeSTFR_g_EnblFltTypEval2 & 4194304U) > 0U) &&
            (STFR_ac_DW.NeSTFR_b_FailedStrtPrevCycle))
    {
        /* Switch: '<S118>/Switch9' incorporates:
         *  S-Function (sfix_bitop): '<S182>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 = (sint32)((uint32)(((uint32)rtb_Switch1) | 8192U));
    }

    /* End of Switch: '<S118>/Switch9' */

    /* Switch: '<S118>/Switch14' incorporates:
     *  Constant: '<S104>/Constant'
     *  Constant: '<S11>/Constant31'
     *  Constant: '<S14>/Calib'
     *  Constant: '<S236>/Constant2'
     *  Constant: '<S241>/Constant'
     *  Logic: '<S228>/Logical6'
     *  RelationalOperator: '<S104>/Compare'
     *  RelationalOperator: '<S241>/Compare'
     *  S-Function (sfix_bitop): '<S11>/BitwiseLogicalOperator29'
     *  S-Function (sfix_bitop): '<S236>/BitwiseLogicalOperator3'
     */
    if (((tmpRead_j & 16384U) > 0U) && ((KeSTFR_g_EnblFltTypEval2 & 8388608U) >
            0U))
    {
        /* Switch: '<S118>/Switch14' incorporates:
         *  S-Function (sfix_bitop): '<S157>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 = (sint32)((uint32)(((uint32)rtb_Switch1) | 16384U));
    }

    /* End of Switch: '<S118>/Switch14' */

    /* Switch: '<S118>/Switch15' incorporates:
     *  Constant: '<S109>/Constant'
     *  Constant: '<S11>/Constant32'
     *  Constant: '<S14>/Calib'
     *  Constant: '<S236>/Constant4'
     *  Constant: '<S243>/Constant'
     *  Logic: '<S228>/Logical7'
     *  RelationalOperator: '<S109>/Compare'
     *  RelationalOperator: '<S243>/Compare'
     *  S-Function (sfix_bitop): '<S11>/BitwiseLogicalOperator30'
     *  S-Function (sfix_bitop): '<S236>/BitwiseLogicalOperator6'
     */
    if (((tmpRead_j & 32768U) > 0U) && ((KeSTFR_g_EnblFltTypEval2 & 16777216U) >
         0U))
    {
        /* Switch: '<S118>/Switch15' incorporates:
         *  S-Function (sfix_bitop): '<S158>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 = (sint32)((uint32)(((uint32)rtb_Switch1) | 32768U));
    }

    /* End of Switch: '<S118>/Switch15' */

    /* Switch: '<S118>/Switch16' incorporates:
     *  Constant: '<S110>/Constant'
     *  Constant: '<S11>/Constant18'
     *  Constant: '<S14>/Calib'
     *  Constant: '<S236>/Constant5'
     *  Constant: '<S242>/Constant'
     *  Logic: '<S228>/Logical8'
     *  RelationalOperator: '<S110>/Compare'
     *  RelationalOperator: '<S242>/Compare'
     *  S-Function (sfix_bitop): '<S11>/BitwiseLogicalOperator31'
     *  S-Function (sfix_bitop): '<S236>/BitwiseLogicalOperator7'
     */
    if (((tmpRead_j & 65536U) > 0U) && ((KeSTFR_g_EnblFltTypEval2 & 33554432U) >
         0U))
    {
        /* Switch: '<S118>/Switch16' incorporates:
         *  S-Function (sfix_bitop): '<S159>/FixPt Bitwise Operator1'
         */
        STFR_ac_B.VariantMergeForOutportFltReg2 = ((uint32)rtb_Switch1) | 65536U;
    }
    else
    {
        /* Switch: '<S118>/Switch16' */
        STFR_ac_B.VariantMergeForOutportFltReg2 = (uint32)rtb_Switch1;
    }

    /* End of Switch: '<S118>/Switch16' */

    /* Inport: '<Root>/VeINVR_e_MtrC_InvrtrSt' */
    (void)Rte_Read_VeINVR_e_MtrC_InvrtrSt_Value(&tmpRead_e);

    /* Switch: '<S118>/Switch17' incorporates:
     *  Constant: '<S11>/Constant19'
     *  Constant: '<S12>/Calib'
     *  Constant: '<S14>/Calib'
     *  Constant: '<S222>/Constant'
     *  Constant: '<S40>/Constant'
     *  Constant: '<S95>/Constant'
     *  Constant: '<S9>/Constant20'
     *  Inport: '<Root>/VeINVR_e_MtrC_InvrtrSt'
     *  Logic: '<S21>/Logical2'
     *  Logic: '<S28>/Logical1'
     *  Logic: '<S28>/Logical2'
     *  RelationalOperator: '<S21>/Comparison4'
     *  RelationalOperator: '<S40>/Compare'
     *  RelationalOperator: '<S95>/Compare'
     *  S-Function (sfix_bitop): '<S11>/BitwiseLogicalOperator18'
     *  S-Function (sfix_bitop): '<S9>/BitwiseLogicalOperator11'
     */
    if ((rtb_TmpSignalConversionAtVeHPMR_b_PropSy || ((((sint32)
            KeSTFR_d_ByPassCnd) & 2048) > 0)) && (((KeSTFR_g_EnblFltTypEval2 &
            67108864U) > 0U) && (CeINVR_e_InverterFaulted == ((uint32)tmpRead_e))))
    {
        /* Switch: '<S118>/Switch17' incorporates:
         *  S-Function (sfix_bitop): '<S160>/FixPt Bitwise Operator1'
         */
        STFR_ac_B.VariantMergeForOutportFltReg2 |= 131072U;
    }

    /* End of Switch: '<S118>/Switch17' */

    /* Inport: '<Root>/VeSTCR_M_MtrAMaxCapStrtSpdCrnkShft' */
    (void)Rte_Read_VeSTCR_M_MtrAMaxCapStrtSpdCrnkShft_Value(&tmpRead_o);

    /* Inport: '<Root>/VeENGR_T_EngCoolantTemp' */
    (void)Rte_Read_VeENGR_T_EngCoolantTemp_Value(&tmpRead_5);

    /* Switch: '<S118>/Switch24' incorporates:
     *  Constant: '<S11>/Constant20'
     *  Constant: '<S14>/Calib'
     *  Constant: '<S96>/Constant'
     *  Inport: '<Root>/VeENGR_T_EngCoolantTemp'
     *  Logic: '<S21>/Logical1'
     *  Lookup_n-D: '<S223>/Vector'
     *  RelationalOperator: '<S21>/Comparison3'
     *  RelationalOperator: '<S96>/Compare'
     *  S-Function (sfix_bitop): '<S11>/BitwiseLogicalOperator19'
     */
    if ((tmpRead_o <= look1_iflf_binlca_16a(tmpRead_5, ((const float32 *)
            &(KxSTFR_M_MtrAMinCapP1fFail[0])), ((const float32 *)
            &(KtSTFR_M_MtrAMinCapP1fFail[0])), 3U)) &&
            ((KeSTFR_g_EnblFltTypEval2 & 134217728U) > 0U))
    {
        /* VariantMerge generated from: '<S6>/FltReg2' incorporates:
         *  S-Function (sfix_bitop): '<S168>/FixPt Bitwise Operator1'
         *  Switch: '<S118>/Switch22'
         */
        STFR_ac_B.VariantMergeForOutportFltReg2 |= 262144U;
    }

    /* End of Switch: '<S118>/Switch24' */

    /* Inport: '<Root>/VeESSR_b_EngStallReattmpAllwd' */
    (void)Rte_Read_VeESSR_b_EngStallReattmpAllwd_Value(&tmpRead_b);

    /* Inport: '<Root>/VeESSR_b_AStrtFailed' */
    (void)Rte_Read_VeESSR_b_AStrtFailed_Value(&tmpRead_6);

    /* Inport: '<Root>/VeENGR_b_EngineStallDetected' */
    (void)Rte_Read_VeENGR_b_EngineStallDetected_Value(&tmpRead_4);

    /* VariantMerge generated from: '<S6>/EssCD' incorporates:
     *  Constant: '<S200>/Constant'
     *  RelationalOperator: '<S190>/Comparison8'
     */
    STFR_ac_B.VariantMergeForOutportEssCD = (((uint32)
        rtb_TmpSignalConversionAtVeESSR_e_EngSta) == CeESSR_e_CoastDownSt);

    /* VariantMerge generated from: '<S6>/EssOFF' incorporates:
     *  Constant: '<S199>/Constant'
     *  RelationalOperator: '<S190>/Comparison6'
     */
    STFR_ac_B.VariantMergeForOutportEssOFF = (((uint32)
        rtb_TmpSignalConversionAtVeESSR_e_EngSta) == CeESSR_e_EngOff);

    /* Outputs for Atomic SubSystem: '<S17>/SignalLatchOnWithReset' */
    /* Logic: '<S188>/OR1' incorporates:
     *  Logic: '<S17>/Logical2'
     *  Logic: '<S17>/Logical6'
     *  Logic: '<S188>/NOT'
     *  Logic: '<S188>/OR'
     *  UnitDelay: '<S188>/UnitDelay'
     */
    STFR_ac_DW.UnitDelay_DSTATE_m = ((tmpRead_4 &&
        (STFR_ac_B.VariantMergeForOutportEssCD)) ||
        (((!STFR_ac_B.VariantMergeForOutportEssOFF) || (!tmpRead_b)) &&
         (STFR_ac_DW.UnitDelay_DSTATE_m)));

    /* End of Outputs for SubSystem: '<S17>/SignalLatchOnWithReset' */

    /* VariantMerge generated from: '<S6>/StallDtct' incorporates:
     *  Constant: '<S10>/Constant22'
     *  Constant: '<S13>/Calib'
     *  Constant: '<S68>/Constant'
     *  Logic: '<S17>/Logical1'
     *  RelationalOperator: '<S68>/Compare'
     *  S-Function (sfix_bitop): '<S10>/BitwiseLogicalOperator21'
     *  UnitDelay: '<S188>/UnitDelay'
     */
    STFR_ac_B.VariantMergeForOutportStallDtct = ((STFR_ac_DW.UnitDelay_DSTATE_m)
        && ((KeSTFR_g_EnblFltTypEval1 & 536870912U) > 0U));

    /* VariantMerge generated from: '<S6>/EssInitSpn' incorporates:
     *  Constant: '<S194>/Constant'
     *  RelationalOperator: '<S190>/Comparison10'
     */
    STFR_ac_B.VariantMergeForOutportEssInitSpn = (((uint32)
        rtb_TmpSignalConversionAtVeESSR_e_EngSta) == CeESSR_e_InitEngSpinSt);

    /* VariantMerge generated from: '<S6>/EssRun' incorporates:
     *  Constant: '<S197>/Constant'
     *  RelationalOperator: '<S190>/Comparison3'
     */
    STFR_ac_B.VariantMergeForOutportEssRun = (((uint32)
        rtb_TmpSignalConversionAtVeESSR_e_EngSta) == CeESSR_e_EngRunning);

    /* VariantMerge generated from: '<S6>/EssPFS' incorporates:
     *  Constant: '<S198>/Constant'
     *  RelationalOperator: '<S190>/Comparison4'
     */
    STFR_ac_B.VariantMergeForOutportEssPFS = (CeESSR_e_PrepForStopSt == ((uint32)
        rtb_TmpSignalConversionAtVeESSR_e_EngSta));

    /* VariantMerge generated from: '<S6>/EssFStp' incorporates:
     *  Constant: '<S202>/Constant'
     *  RelationalOperator: '<S190>/Comparison7'
     */
    STFR_ac_B.VariantMergeForOutportEssFStp = (((uint32)
        rtb_TmpSignalConversionAtVeESSR_e_EngSta) == CeESSR_e_FinishStopSt);

    /* Logic: '<S203>/Logical1' incorporates:
     *  Constant: '<S10>/Constant17'
     *  Constant: '<S13>/Calib'
     *  Constant: '<S203>/ConstantValue'
     *  Constant: '<S205>/Calib'
     *  Constant: '<S61>/Constant'
     *  RelationalOperator: '<S203>/Comparison'
     *  RelationalOperator: '<S61>/Compare'
     *  S-Function (sfix_bitop): '<S10>/BitwiseLogicalOperator16'
     *  S-Function (sfix_bitop): '<S203>/BitwiseLogicalOperator5'
     */
    rtb_Logical1_n = (((KeSTFR_g_EnblFltTypEval1 & 65536U) > 0U) &&
                      ((rtb_TmpSignalConversionAtVeESSR_g_StrtSt &
                        KeSTFR_g_ESS_EFAFailSlct) > 0U));

    /* VariantMerge generated from: '<S6>/EFAFail' incorporates:
     *  Constant: '<S10>/Constant16'
     *  Constant: '<S13>/Calib'
     *  Constant: '<S57>/Constant'
     *  Logic: '<S203>/Logical2'
     *  Logic: '<S203>/Logical5'
     *  Logic: '<S203>/Logical7'
     *  RelationalOperator: '<S57>/Compare'
     *  S-Function (sfix_bitop): '<S10>/BitwiseLogicalOperator15'
     */
    STFR_ac_B.VariantMergeForOutportEFAFail = (rtb_Logical1_n && (tmpRead_6 ||
        (((KeSTFR_g_EnblFltTypEval1 & 32768U) > 0U) && rtb_Logical3_e)));

    /* VariantMerge generated from: '<S6>/STPA_EFAFail' incorporates:
     *  Logic: '<S203>/Logical8'
     */
    STFR_ac_B.VariantMergeForOutportSTPA_EFAFail = (rtb_LeSTFR_b_InhbtESS ||
        rtb_Logical1_n);

    /* Outputs for Atomic SubSystem: '<S192>/TurnOnDelayTime' */
    /* Outputs for Atomic SubSystem: '<S215>/EdgeRising' */
    /* Logic: '<S217>/AND' incorporates:
     *  Logic: '<S217>/OR1'
     *  UnitDelay: '<S217>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeHPMR_b_PropSy =
        ((STFR_ac_B.VariantMergeForOutportEngRun) &&
         (!STFR_ac_DW.UnitDelay_DSTATE_cx));

    /* Update for UnitDelay: '<S217>/UnitDelay' */
    STFR_ac_DW.UnitDelay_DSTATE_cx = STFR_ac_B.VariantMergeForOutportEngRun;

    /* End of Outputs for SubSystem: '<S215>/EdgeRising' */

    /* Logic: '<S215>/OR1' incorporates:
     *  Logic: '<S215>/AND'
     */
    rtb_Comparison3_g = !STFR_ac_B.VariantMergeForOutportEngRun;

    /* Switch: '<S215>/Switch1' incorporates:
     *  Constant: '<S212>/Calib'
     *  Constant: '<S213>/Calib'
     *  Constant: '<S215>/ConstantValue1'
     *  Logic: '<S215>/OR'
     *  Logic: '<S215>/OR1'
     *  MinMax: '<S215>/Minimum'
     *  Sum: '<S215>/Summation'
     *  UnitDelay: '<S215>/UnitDelay'
     */
    if (rtb_Comparison3_g || rtb_TmpSignalConversionAtVeHPMR_b_PropSy)
    {
        STFR_ac_DW.UnitDelay_DSTATE = 0.0F;
    }
    else
    {
        STFR_ac_DW.UnitDelay_DSTATE = fminf(KeSTFR_t_FaildStrtPrevCyclRstDly,
            HeSTFR_t_MedTEB_dT + STFR_ac_DW.UnitDelay_DSTATE);
    }

    /* End of Switch: '<S215>/Switch1' */
    /* End of Outputs for SubSystem: '<S192>/TurnOnDelayTime' */

    /* If: '<S192>/If' incorporates:
     *  Constant: '<S192>/ConstantValue1'
     *  Logic: '<S192>/Logical3'
     *  Logic: '<S192>/Logical4'
     *  RelationalOperator: '<S192>/Comparison1'
     *  RelationalOperator: '<S192>/Comparison2'
     *  RelationalOperator: '<S192>/Comparison7'
     *  S-Function (sfix_bitop): '<S192>/BitwiseLogicalOperator1'
     */
    if (((rtb_TmpSignalConversionAtVeESSR_g_StrtSt & 16U) > 0U) ||
            ((rtb_LeSTFR_b_InhbtESS_tmp > 0U) && (tmpRead_g > 0U)))
    {
        /* Outputs for IfAction SubSystem: '<S192>/WriteNVRAM' incorporates:
         *  ActionPort: '<S216>/ActionPort'
         */
        /* DataStoreWrite: '<S216>/DataStoreWrite' incorporates:
         *  Constant: '<S216>/TRUEConstant'
         */
        STFR_ac_DW.NeSTFR_b_FailedStrtPrevCycle = true;

        /* End of Outputs for SubSystem: '<S192>/WriteNVRAM' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S192>/ResetNVRAM' incorporates:
         *  ActionPort: '<S214>/ActionPort'
         */
        /* Outputs for Atomic SubSystem: '<S192>/TurnOnDelayTime' */
        /* DataStoreWrite: '<S214>/DataStoreWrite' incorporates:
         *  Constant: '<S213>/Calib'
         *  Logic: '<S215>/AND'
         *  RelationalOperator: '<S215>/GreaterThan'
         *  UnitDelay: '<S215>/UnitDelay'
         */
        STFR_ac_DW.NeSTFR_b_FailedStrtPrevCycle = ((rtb_Comparison3_g ||
            (STFR_ac_DW.UnitDelay_DSTATE < KeSTFR_t_FaildStrtPrevCyclRstDly)) &&
            (STFR_ac_DW.NeSTFR_b_FailedStrtPrevCycle));

        /* End of Outputs for SubSystem: '<S192>/TurnOnDelayTime' */
        /* End of Outputs for SubSystem: '<S192>/ResetNVRAM' */
    }

    /* End of If: '<S192>/If' */

    /* Inport: '<Root>/VeBRKR_b_ImpndSkid' */
    (void)Rte_Read_VeBRKR_b_ImpndSkid_Value(&tmpRead_3);

    /* Logic: '<S20>/Logical5' incorporates:
     *  Constant: '<S10>/Constant19'
     *  Constant: '<S13>/Calib'
     *  Constant: '<S63>/Constant'
     *  RelationalOperator: '<S63>/Compare'
     *  S-Function (sfix_bitop): '<S10>/BitwiseLogicalOperator18'
     */
    VeSTFR_b_ImpndSkid = (((KeSTFR_g_EnblFltTypEval1 & 67108864U) > 0U) &&
                          tmpRead_3);

    /* Logic: '<S20>/Logical3' incorporates:
     *  Constant: '<S221>/Calib'
     */
    rtb_LeSTFR_b_InhbtESS = ((KeSTFR_b_ForceInhbt) || (VeSTFR_b_ImpndSkid));

    /* VariantMerge generated from: '<S6>/ImpndInhbtESSOn' incorporates:
     *  Logic: '<S20>/Logical4'
     *  Logic: '<S20>/Logical6'
     */
    STFR_ac_B.VariantMergeForOutportImpndInhbtESSOn = (rtb_LeSTFR_b_InhbtESS &&
        ((STFR_ac_B.VariantMergeForOutportEngRun) ||
         (STFR_ac_B.VariantMergeForOutportEssPFS)));

    /* VariantMerge generated from: '<S6>/ImpndInhbtESSOff' incorporates:
     *  Logic: '<S20>/Logical7'
     */
    STFR_ac_B.VariantMergeForOutportImpndInhbtESSOff =
        ((STFR_ac_B.VariantMergeForOutportEngOff) && rtb_LeSTFR_b_InhbtESS);

    /* VariantMerge generated from: '<S6>/SRAREngOff' incorporates:
     *  Constant: '<S231>/Constant'
     *  RelationalOperator: '<S227>/Comparison2'
     */
    STFR_ac_B.VariantMergeForOutportSRAREngOff = (CeSTRR_e_OvrrdEngOff ==
        ((uint32)rtb_TmpSignalConversionAtVeSRAR_e_EngStr));

    /* Update for UnitDelay: '<S19>/UnitDelay1' */
    STFR_ac_DW.UnitDelay1_DSTATE = (sint16)
        rtb_TmpSignalConversionAtVeBPCR_e_HV_Bat;

    /* Update for UnitDelay: '<S22>/UnitDelay' */
    STFR_ac_DW.UnitDelay_DSTATE_a = (sint16)
        rtb_TmpSignalConversionAtVeHPMR_e_PropSy;

    /* Update for UnitDelay: '<S191>/Unit Delay' */
#if Rte_SysCon_Variant_STFR_P2p5Equipd

    STFR_ac_DW.UnitDelay_DSTATE_p = STFR_ac_B.VariantMergeForOutportFltReg2;

#endif

    /* End of Update for UnitDelay: '<S191>/Unit Delay' */
    /* End of Outputs for SubSystem: '<S6>/EnblFcn' */
#endif

    /* End of Outputs for SubSystem: '<S5>/VarSS_STFCFltDtctAlg' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSTFR_g_FltReg1' incorporates:
     *  SignalConversion generated from: '<S1>/FltReg1'
     */
    (void)Rte_Write_VeSTFR_g_FltReg1_Value
        (STFR_ac_B.VariantMergeForOutportFltReg1);

    /* Outport: '<Root>/VeSTFR_g_FltReg2' incorporates:
     *  SignalConversion generated from: '<S1>/FltReg2'
     */
    (void)Rte_Write_VeSTFR_g_FltReg2_Value
        (STFR_ac_B.VariantMergeForOutportFltReg2);

    /* Merge: '<Root>/BmpStrtGrThrsh1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/BmpStrtGrThrsh1_write'
     * */
    Rte_IrvWrite_STFR_MedTEB2_BmpStrtGrThrsh1_write_IRV
        (STFR_ac_B.VariantMergeForOutportBmpStrtGrThrsh);

    /* Merge: '<Root>/CltchStrtSpdMn1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/CltchStrtSpdMn1_write'
     * */
    Rte_IrvWrite_STFR_MedTEB2_CltchStrtSpdMn1_write_IRV
        (STFR_ac_B.VariantMergeForOutportCltchStrtSpdMn);

    /* Merge: '<Root>/EFAFail1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/EFAFail1_write'
     * */
    Rte_IrvWrite_STFR_MedTEB2_EFAFail1_write_IRV
        (STFR_ac_B.VariantMergeForOutportEFAFail);

    /* Merge: '<Root>/EngOff1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/EngOff1_write'
     * */
    Rte_IrvWrite_STFR_MedTEB2_EngOff1_write_IRV
        (STFR_ac_B.VariantMergeForOutportEngOff);

    /* Merge: '<Root>/EngRun1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/EngRun1_write'
     * */
    Rte_IrvWrite_STFR_MedTEB2_EngRun1_write_IRV
        (STFR_ac_B.VariantMergeForOutportEngRun);

    /* Merge: '<Root>/EssCD1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/EssCD1_write'
     * */
    Rte_IrvWrite_STFR_MedTEB2_EssCD1_write_IRV
        (STFR_ac_B.VariantMergeForOutportEssCD);

    /* Merge: '<Root>/EssFStp1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/EssFStp1_write'
     * */
    Rte_IrvWrite_STFR_MedTEB2_EssFStp1_write_IRV
        (STFR_ac_B.VariantMergeForOutportEssFStp);

    /* Merge: '<Root>/EssInitSpn1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/EssInitSpn1_write'
     * */
    Rte_IrvWrite_STFR_MedTEB2_EssInitSpn1_write_IRV
        (STFR_ac_B.VariantMergeForOutportEssInitSpn);

    /* Merge: '<Root>/EssOFF1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/EssOFF1_write'
     * */
    Rte_IrvWrite_STFR_MedTEB2_EssOFF1_write_IRV
        (STFR_ac_B.VariantMergeForOutportEssOFF);

    /* Merge: '<Root>/EssPFS1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/EssPFS1_write'
     * */
    Rte_IrvWrite_STFR_MedTEB2_EssPFS1_write_IRV
        (STFR_ac_B.VariantMergeForOutportEssPFS);

    /* Merge: '<Root>/EssRun1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/EssRun1_write'
     * */
    Rte_IrvWrite_STFR_MedTEB2_EssRun1_write_IRV
        (STFR_ac_B.VariantMergeForOutportEssRun);

    /* Merge: '<Root>/FltReg3_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/FltReg1_write'
     * */
    Rte_IrvWrite_STFR_MedTEB2_FltReg1_write_IRV
        (STFR_ac_B.VariantMergeForOutportFltReg1);

    /* Merge: '<Root>/FltReg4_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/FltReg2_write'
     * */
    Rte_IrvWrite_STFR_MedTEB2_FltReg2_write_IRV
        (STFR_ac_B.VariantMergeForOutportFltReg2);

    /* Merge: '<Root>/ImpndInhbtESSOff1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/ImpndInhbtESSOff1_write'
     * */
    Rte_IrvWrite_STFR_MedTEB2_ImpndInhbtESSOff1_write_IRV
        (STFR_ac_B.VariantMergeForOutportImpndInhbtESSOff);

    /* Merge: '<Root>/ImpndInhbtESSOn1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/ImpndInhbtESSOn1_write'
     * */
    Rte_IrvWrite_STFR_MedTEB2_ImpndInhbtESSOn1_write_IRV
        (STFR_ac_B.VariantMergeForOutportImpndInhbtESSOn);

    /* Merge: '<Root>/InhbtBmpStEnbl1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/InhbtBmpStEnbl1_write'
     * */
    Rte_IrvWrite_STFR_MedTEB2_InhbtBmpStEnbl1_write_IRV
        (STFR_ac_B.VariantMergeForOutportInhbtBmpStEnbl);

    /* Merge: '<Root>/InhbtTCMCndEnbl1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/InhbtTCMCndEnbl1_write'
     * */
    Rte_IrvWrite_STFR_MedTEB2_InhbtTCMCndEnbl1_write_IRV
        (STFR_ac_B.VariantMergeForOutportInhbtTCMCndEnbl);

    /* Merge: '<Root>/KeyOffSt1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/KeyOffSt1_write'
     * */
    Rte_IrvWrite_STFR_MedTEB2_KeyOffSt1_write_IRV
        (STFR_ac_B.VariantMergeForOutportKeyOffSt);

    /* Merge: '<Root>/SRAREngOff1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/SRAREngOff1_write'
     * */
    Rte_IrvWrite_STFR_MedTEB2_SRAREngOff1_write_IRV
        (STFR_ac_B.VariantMergeForOutportSRAREngOff);

    /* Merge: '<Root>/SRAREngOnRaw1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/SRAREngOnRaw1_write'
     * */
    Rte_IrvWrite_STFR_MedTEB2_SRAREngOnRaw1_write_IRV
        (STFR_ac_B.VariantMergeForOutportSRAREngOnRaw);

    /* Merge: '<Root>/STPA_EFAFail1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/STPA_EFAFail1_write'
     * */
    Rte_IrvWrite_STFR_MedTEB2_STPA_EFAFail1_write_IRV
        (STFR_ac_B.VariantMergeForOutportSTPA_EFAFail);

    /* Merge: '<Root>/StallDtct1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/StallDtct1_write'
     * */
    Rte_IrvWrite_STFR_MedTEB2_StallDtct1_write_IRV
        (STFR_ac_B.VariantMergeForOutportStallDtct);

    /* Merge: '<Root>/TCMCltchAvlbl1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/TCMCltchAvlbl1_write'
     * */
    Rte_IrvWrite_STFR_MedTEB2_TCMCltchAvlbl1_write_IRV
        (STFR_ac_B.VariantMergeForOutportTCMCltchAvlbl);

    /* Merge: '<Root>/TCMEMAvlbl1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/TCMEMAvlbl1_write'
     * */
    Rte_IrvWrite_STFR_MedTEB2_TCMEMAvlbl1_write_IRV
        (STFR_ac_B.VariantMergeForOutportTCMEMAvlbl);

    /* Merge: '<Root>/TCMHMIEnbl1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/TCMHMIEnbl1_write'
     * */
    Rte_IrvWrite_STFR_MedTEB2_TCMHMIEnbl1_write_IRV
        (STFR_ac_B.VariantMergeForOutportTCMHMIEnbl);

    /* Merge: '<Root>/TCMIMAvlbl1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/TCMIMAvlbl1_write'
     * */
    Rte_IrvWrite_STFR_MedTEB2_TCMIMAvlbl1_write_IRV
        (STFR_ac_B.VariantMergeForOutportTCMIMAvlbl);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' */
}

/* Model step function for TID2 */
FUNC(void, STFR_CODE) STFR_MedTEB3(void) /* Explicit Task: MedTEB3 */
{

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean tmpRead;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean tmpRead_0;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean tmpRead_1;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    uint32 rtb_TmpSignalConversionAtFltReg1_ReadOut;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    uint32 rtb_TmpSignalConversionAtFltReg2_ReadOut;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_TmpSignalConversionAtEssOFF1_ReadOut;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_TmpSignalConversionAtEssCD1_ReadOutp;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_TmpSignalConversionAtEssFStp1_ReadOu;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2p5Equipd

    boolean rtb_TmpSignalConversionAtTCMHMIEnbl1_Rea;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_TmpSignalConversionAtTCMCltchAvlbl1_;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_TmpSignalConversionAtSRAREngOnRaw1_R;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_TmpSignalConversionAtSRAREngOff1_Rea;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_TmpSignalConversionAtImpndInhbtESSOf;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_TmpSignalConversionAtImpndInhbtESSOn;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_TmpSignalConversionAtStallDtct1_Read;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_TmpSignalConversionAtEFAFail1_ReadOu;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_TmpSignalConversionAtSTPA_EFAFail1_R;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_TmpSignalConversionAtCltchStrtSpdMn1;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_TmpSignalConversionAtEngRun1_ReadOut;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_TmpSignalConversionAtEngOff1_ReadOut;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_TmpSignalConversionAtInhbtTCMCndEnbl;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_TmpSignalConversionAtInhbtBmpStEnbl1;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2Equipd

    boolean rtb_TmpSignalConversionAtBmpStrtGrThrsh1;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_TmpSignalConversionAtEssRun1_ReadOut;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_TmpSignalConversionAtEssPFS1_ReadOut;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_TmpSignalConversionAtEssInitSpn1_Rea;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_TmpSignalConversionAtKeyOffSt1_ReadO;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_VariantMergeForOutportRsrvByPass;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_VariantMergeForOutportImmedStpTrg;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_VariantMergeForOutportCLStrtNA;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_VariantMergeForOutportIMStrtNA;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_VariantMergeForOutportEMStrtNA;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    boolean rtb_Comparison2_cy;

#endif

#if !Rte_SysCon_Variant_STFR_DsblFcn

    TeSRAR_e_EngStrtType rtb_TmpSignalConversionAtVeSRAR_e_EngStr;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB3' incorporates:
     *  SubSystem: '<Root>/STFR_MedTEB3'
     */
    /* SignalConversion generated from: '<S2>/FltReg1_Read' incorporates:
     *  SignalConversion generated from: '<S2>/CltchStrtSpdMn1_Read'
     *  SignalConversion generated from: '<S2>/EFAFail1_Read'
     *  SignalConversion generated from: '<S2>/EngOff1_Read'
     *  SignalConversion generated from: '<S2>/EngRun1_Read'
     *  SignalConversion generated from: '<S2>/EssCD1_Read'
     *  SignalConversion generated from: '<S2>/EssFStp1_Read'
     *  SignalConversion generated from: '<S2>/EssOFF1_Read'
     *  SignalConversion generated from: '<S2>/FltReg2_Read'
     *  SignalConversion generated from: '<S2>/ImpndInhbtESSOff1_Read'
     *  SignalConversion generated from: '<S2>/ImpndInhbtESSOn1_Read'
     *  SignalConversion generated from: '<S2>/InhbtTCMCndEnbl1_Read'
     *  SignalConversion generated from: '<S2>/SRAREngOff1_Read'
     *  SignalConversion generated from: '<S2>/SRAREngOnRaw1_Read'
     *  SignalConversion generated from: '<S2>/STPA_EFAFail1_Read'
     *  SignalConversion generated from: '<S2>/StallDtct1_Read'
     *  SignalConversion generated from: '<S2>/TCMCltchAvlbl1_Read'
     */
#if !Rte_SysCon_Variant_STFR_DsblFcn

    /* SignalConversion generated from: '<S2>/FltReg1_Read' incorporates:
     *  Merge: '<Root>/FltReg3_IRV_Merge'
     */
    rtb_TmpSignalConversionAtFltReg1_ReadOut =
        Rte_IrvRead_STFR_MedTEB3_FltReg1_write_IRV();

    /* SignalConversion generated from: '<S2>/FltReg2_Read' incorporates:
     *  Merge: '<Root>/FltReg4_IRV_Merge'
     */
    rtb_TmpSignalConversionAtFltReg2_ReadOut =
        Rte_IrvRead_STFR_MedTEB3_FltReg2_write_IRV();

    /* SignalConversion generated from: '<S2>/EssOFF1_Read' incorporates:
     *  Merge: '<Root>/EssOFF1_IRV_Merge'
     */
    rtb_TmpSignalConversionAtEssOFF1_ReadOut =
        Rte_IrvRead_STFR_MedTEB3_EssOFF1_write_IRV();

    /* SignalConversion generated from: '<S2>/EssCD1_Read' incorporates:
     *  Merge: '<Root>/EssCD1_IRV_Merge'
     */
    rtb_TmpSignalConversionAtEssCD1_ReadOutp =
        Rte_IrvRead_STFR_MedTEB3_EssCD1_write_IRV();

    /* SignalConversion generated from: '<S2>/EssFStp1_Read' incorporates:
     *  Merge: '<Root>/EssFStp1_IRV_Merge'
     */
    rtb_TmpSignalConversionAtEssFStp1_ReadOu =
        Rte_IrvRead_STFR_MedTEB3_EssFStp1_write_IRV();

    /* SignalConversion generated from: '<S2>/TCMCltchAvlbl1_Read' incorporates:
     *  Merge: '<Root>/TCMCltchAvlbl1_IRV_Merge'
     */
    rtb_TmpSignalConversionAtTCMCltchAvlbl1_ =
        Rte_IrvRead_STFR_MedTEB3_TCMCltchAvlbl1_write_IRV();

    /* SignalConversion generated from: '<S2>/SRAREngOnRaw1_Read' incorporates:
     *  Merge: '<Root>/SRAREngOnRaw1_IRV_Merge'
     */
    rtb_TmpSignalConversionAtSRAREngOnRaw1_R =
        Rte_IrvRead_STFR_MedTEB3_SRAREngOnRaw1_write_IRV();

    /* SignalConversion generated from: '<S2>/SRAREngOff1_Read' incorporates:
     *  Merge: '<Root>/SRAREngOff1_IRV_Merge'
     */
    rtb_TmpSignalConversionAtSRAREngOff1_Rea =
        Rte_IrvRead_STFR_MedTEB3_SRAREngOff1_write_IRV();

    /* SignalConversion generated from: '<S2>/ImpndInhbtESSOff1_Read' incorporates:
     *  Merge: '<Root>/ImpndInhbtESSOff1_IRV_Merge'
     */
    rtb_TmpSignalConversionAtImpndInhbtESSOf =
        Rte_IrvRead_STFR_MedTEB3_ImpndInhbtESSOff1_write_IRV();

    /* SignalConversion generated from: '<S2>/ImpndInhbtESSOn1_Read' incorporates:
     *  Merge: '<Root>/ImpndInhbtESSOn1_IRV_Merge'
     */
    rtb_TmpSignalConversionAtImpndInhbtESSOn =
        Rte_IrvRead_STFR_MedTEB3_ImpndInhbtESSOn1_write_IRV();

    /* SignalConversion generated from: '<S2>/StallDtct1_Read' incorporates:
     *  Merge: '<Root>/StallDtct1_IRV_Merge'
     */
    rtb_TmpSignalConversionAtStallDtct1_Read =
        Rte_IrvRead_STFR_MedTEB3_StallDtct1_write_IRV();

    /* SignalConversion generated from: '<S2>/EFAFail1_Read' incorporates:
     *  Merge: '<Root>/EFAFail1_IRV_Merge'
     */
    rtb_TmpSignalConversionAtEFAFail1_ReadOu =
        Rte_IrvRead_STFR_MedTEB3_EFAFail1_write_IRV();

    /* SignalConversion generated from: '<S2>/STPA_EFAFail1_Read' incorporates:
     *  Merge: '<Root>/STPA_EFAFail1_IRV_Merge'
     */
    rtb_TmpSignalConversionAtSTPA_EFAFail1_R =
        Rte_IrvRead_STFR_MedTEB3_STPA_EFAFail1_write_IRV();

    /* SignalConversion generated from: '<S2>/CltchStrtSpdMn1_Read' incorporates:
     *  Merge: '<Root>/CltchStrtSpdMn1_IRV_Merge'
     */
    rtb_TmpSignalConversionAtCltchStrtSpdMn1 =
        Rte_IrvRead_STFR_MedTEB3_CltchStrtSpdMn1_write_IRV();

    /* SignalConversion generated from: '<S2>/EngRun1_Read' incorporates:
     *  Merge: '<Root>/EngRun1_IRV_Merge'
     */
    rtb_TmpSignalConversionAtEngRun1_ReadOut =
        Rte_IrvRead_STFR_MedTEB3_EngRun1_write_IRV();

    /* SignalConversion generated from: '<S2>/EngOff1_Read' incorporates:
     *  Merge: '<Root>/EngOff1_IRV_Merge'
     */
    rtb_TmpSignalConversionAtEngOff1_ReadOut =
        Rte_IrvRead_STFR_MedTEB3_EngOff1_write_IRV();

    /* SignalConversion generated from: '<S2>/InhbtTCMCndEnbl1_Read' incorporates:
     *  Merge: '<Root>/InhbtTCMCndEnbl1_IRV_Merge'
     */
    rtb_TmpSignalConversionAtInhbtTCMCndEnbl =
        Rte_IrvRead_STFR_MedTEB3_InhbtTCMCndEnbl1_write_IRV();

#endif

    /* End of SignalConversion generated from: '<S2>/FltReg1_Read' */

    /* SignalConversion generated from: '<S2>/TCMHMIEnbl1_Read' */
#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2p5Equipd

    /* SignalConversion generated from: '<S2>/TCMHMIEnbl1_Read' incorporates:
     *  Merge: '<Root>/TCMHMIEnbl1_IRV_Merge'
     */
    rtb_TmpSignalConversionAtTCMHMIEnbl1_Rea =
        Rte_IrvRead_STFR_MedTEB3_TCMHMIEnbl1_write_IRV();

#endif

    /* End of SignalConversion generated from: '<S2>/TCMHMIEnbl1_Read' */

    /* SignalConversion generated from: '<S2>/InhbtBmpStEnbl1_Read' incorporates:
     *  SignalConversion generated from: '<S2>/BmpStrtGrThrsh1_Read'
     */
#if !Rte_SysCon_Variant_STFR_DsblFcn && Rte_SysCon_Variant_STFR_P2Equipd

    /* SignalConversion generated from: '<S2>/InhbtBmpStEnbl1_Read' incorporates:
     *  Merge: '<Root>/InhbtBmpStEnbl1_IRV_Merge'
     */
    rtb_TmpSignalConversionAtInhbtBmpStEnbl1 =
        Rte_IrvRead_STFR_MedTEB3_InhbtBmpStEnbl1_write_IRV();

    /* SignalConversion generated from: '<S2>/BmpStrtGrThrsh1_Read' incorporates:
     *  Merge: '<Root>/BmpStrtGrThrsh1_IRV_Merge'
     */
    rtb_TmpSignalConversionAtBmpStrtGrThrsh1 =
        Rte_IrvRead_STFR_MedTEB3_BmpStrtGrThrsh1_write_IRV();

#endif

    /* End of SignalConversion generated from: '<S2>/InhbtBmpStEnbl1_Read' */

    /* SignalConversion generated from: '<S2>/EssRun1_Read' incorporates:
     *  SignalConversion generated from: '<S2>/EssInitSpn1_Read'
     *  SignalConversion generated from: '<S2>/EssPFS1_Read'
     *  SignalConversion generated from: '<S2>/KeyOffSt1_Read'
     *  SignalConversion generated from: '<S2>/VeSRAR_e_EngStrtType'
     */
#if !Rte_SysCon_Variant_STFR_DsblFcn

    /* SignalConversion generated from: '<S2>/EssRun1_Read' incorporates:
     *  Merge: '<Root>/EssRun1_IRV_Merge'
     */
    rtb_TmpSignalConversionAtEssRun1_ReadOut =
        Rte_IrvRead_STFR_MedTEB3_EssRun1_write_IRV();

    /* SignalConversion generated from: '<S2>/EssPFS1_Read' incorporates:
     *  Merge: '<Root>/EssPFS1_IRV_Merge'
     */
    rtb_TmpSignalConversionAtEssPFS1_ReadOut =
        Rte_IrvRead_STFR_MedTEB3_EssPFS1_write_IRV();

    /* SignalConversion generated from: '<S2>/EssInitSpn1_Read' incorporates:
     *  Merge: '<Root>/EssInitSpn1_IRV_Merge'
     */
    rtb_TmpSignalConversionAtEssInitSpn1_Rea =
        Rte_IrvRead_STFR_MedTEB3_EssInitSpn1_write_IRV();

    /* SignalConversion generated from: '<S2>/VeSRAR_e_EngStrtType' incorporates:
     *  Inport: '<Root>/VeSRAR_e_EngStrtType'
     */
    (void)Rte_Read_VeSRAR_e_EngStrtType_Value
        (&rtb_TmpSignalConversionAtVeSRAR_e_EngStr);

    /* SignalConversion generated from: '<S2>/KeyOffSt1_Read' incorporates:
     *  Merge: '<Root>/KeyOffSt1_IRV_Merge'
     */
    rtb_TmpSignalConversionAtKeyOffSt1_ReadO =
        Rte_IrvRead_STFR_MedTEB3_KeyOffSt1_write_IRV();

#endif

    /* End of SignalConversion generated from: '<S2>/EssRun1_Read' */

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/STFC_FltProcessing'
     */
    /* Outputs for Atomic SubSystem: '<S284>/VarSS_STFC_FltProcessing' */
#if Rte_SysCon_Variant_STFR_DsblFcn

    /* Outputs for Atomic SubSystem: '<S285>/DsblFcn' */
    /* VariantMerge generated from: '<S285>/FltBsdOvrrd' incorporates:
     *  Constant: '<S288>/Constant'
     */
    STFR_ac_B.VariantMergeForOutportFltBsdOvrrd = CeSTRR_e_NoOvrrd;

    /* VariantMerge generated from: '<S285>/BmpStrtEngOn' incorporates:
     *  Constant: '<S286>/Constant2'
     */
    STFR_ac_B.VariantMergeForOutportBmpStrtEngOn = false;

    /* VariantMerge generated from: '<S285>/BckUpStrtEngOn' incorporates:
     *  Constant: '<S286>/Constant3'
     */
    STFR_ac_B.VariantMergeForOutportBckUpStrtEngOn = false;

    /* VariantMerge generated from: '<S285>/BmpStrtInhbt' incorporates:
     *  Constant: '<S286>/Constant4'
     */
    STFR_ac_B.VariantMergeForOutportBmpStrtInhbt = false;

    /* VariantMerge generated from: '<S285>/RsrvByPass' incorporates:
     *  Constant: '<S286>/Constant5'
     */
    STFR_ac_B.VariantMergeForOutportRsrvByPass = false;

    /* VariantMerge generated from: '<S285>/StrtAllw' incorporates:
     *  Constant: '<S286>/Constant6'
     */
    STFR_ac_B.VariantMergeForOutportStrtAllw = false;

    /* VariantMerge generated from: '<S285>/P2p5HMIMsg' incorporates:
     *  Constant: '<S286>/Constant'
     */
    STFR_ac_B.VariantMergeForOutportP2p5HMIMsg = false;

    /* VariantMerge generated from: '<S285>/VeSTFR_y_StrtDvcNA' incorporates:
     *  Constant: '<S286>/Constant1'
     */
    STFR_ac_B.VariantMergeForOutportVeSTFR_y_StrtDvcNA = 0U;

    /* VariantMerge generated from: '<S285>/VeSTFR_e_StrtType' incorporates:
     *  Constant: '<S289>/Constant'
     */
    STFR_ac_B.VariantMergeForOutportVeSTFR_e_StrtType = CeSTRR_e_NoAction;

    /* VariantMerge generated from: '<S285>/VeSTFR_b_CltchRsrvOK' incorporates:
     *  Constant: '<S286>/Constant7'
     */
    STFR_ac_B.VariantMergeForOutportVeSTFR_b_CltchRsrv = false;

    /* End of Outputs for SubSystem: '<S285>/DsblFcn' */
#else

    /* Outputs for Atomic SubSystem: '<S285>/EnblFcn' */
    /* Switch: '<S334>/Switch1' incorporates:
     *  Constant: '<S291>/ConstantValue4'
     *  Constant: '<S337>/Calib'
     *  Constant: '<S338>/Calib'
     *  Logic: '<S291>/Logical1'
     *  RelationalOperator: '<S291>/Comparison6'
     *  RelationalOperator: '<S291>/Comparison9'
     *  S-Function (sfix_bitop): '<S291>/BitwiseLogicalOperator5'
     *  S-Function (sfix_bitop): '<S291>/BitwiseLogicalOperator7'
     */
    if (((rtb_TmpSignalConversionAtFltReg1_ReadOut & KeSTFR_g_SelP1fLPNARsns1) >
         0U) || ((rtb_TmpSignalConversionAtFltReg2_ReadOut &
                  KeSTFR_g_SelP1fLPNARsns2) > 0U))
    {
        /* Switch: '<S334>/Switch1' incorporates:
         *  Constant: '<S335>/Calib'
         *  Constant: '<S336>/Calib'
         *  Logic: '<S291>/Logical14'
         *  RelationalOperator: '<S291>/Comparison7'
         *  RelationalOperator: '<S291>/Comparison8'
         *  S-Function (sfix_bitop): '<S291>/BitwiseLogicalOperator4'
         *  S-Function (sfix_bitop): '<S291>/BitwiseLogicalOperator6'
         *  S-Function (sfix_bitop): '<S343>/FixPt Bitwise Operator1'
         */
        STFR_ac_B.VariantMergeForOutportVeSTFR_y_StrtDvcNA = (uint8)
            (((((rtb_TmpSignalConversionAtFltReg1_ReadOut &
                 KeSTFR_g_SelP1fAStrtNARsns1) > 0U) ||
               ((rtb_TmpSignalConversionAtFltReg2_ReadOut &
                 KeSTFR_g_SelP1fAStrtNARsns2) > 0U)) ? 1 : 0) | ((uint8)2));
    }
    else
    {
        /* Switch: '<S334>/Switch1' incorporates:
         *  Constant: '<S335>/Calib'
         *  Constant: '<S336>/Calib'
         *  Logic: '<S291>/Logical14'
         *  RelationalOperator: '<S291>/Comparison7'
         *  RelationalOperator: '<S291>/Comparison8'
         *  S-Function (sfix_bitop): '<S291>/BitwiseLogicalOperator4'
         *  S-Function (sfix_bitop): '<S291>/BitwiseLogicalOperator6'
         */
        STFR_ac_B.VariantMergeForOutportVeSTFR_y_StrtDvcNA = (uint8)
            ((((rtb_TmpSignalConversionAtFltReg1_ReadOut &
                KeSTFR_g_SelP1fAStrtNARsns1) > 0U) ||
              ((rtb_TmpSignalConversionAtFltReg2_ReadOut &
                KeSTFR_g_SelP1fAStrtNARsns2) > 0U)) ? 1 : 0);
    }

    /* End of Switch: '<S334>/Switch1' */

    /* Switch: '<S334>/Switch2' incorporates:
     *  Constant: '<S291>/ConstantValue4'
     *  Constant: '<S339>/Calib'
     *  Constant: '<S340>/Calib'
     *  Logic: '<S291>/Logical2'
     *  RelationalOperator: '<S291>/Comparison1'
     *  RelationalOperator: '<S291>/Comparison2'
     *  S-Function (sfix_bitop): '<S291>/BitwiseLogicalOperator1'
     *  S-Function (sfix_bitop): '<S291>/BitwiseLogicalOperator2'
     */
    if (((rtb_TmpSignalConversionAtFltReg1_ReadOut & KeSTFR_g_SelP2BumpNARsns1) >
         0U) || ((rtb_TmpSignalConversionAtFltReg2_ReadOut &
                  KeSTFR_g_SelP2BumpNARsns2) > 0U))
    {
        /* Switch: '<S334>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S345>/FixPt Bitwise Operator1'
         */
        STFR_ac_B.VariantMergeForOutportVeSTFR_y_StrtDvcNA |= (uint8)4;
    }

    /* End of Switch: '<S334>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S290>/ClutchStart_ReserveByPass' */
#if Rte_SysCon_Variant_STFR_P2p5Equipd

    /* Outputs for Atomic SubSystem: '<S304>/Subsystem' */
    /* VariantMerge generated from: '<S304>/RsrvByPass' incorporates:
     *  Constant: '<S331>/Constant Value3'
     *  Constant: '<S332>/Calib'
     *  Constant: '<S333>/Calib'
     *  Logic: '<S331>/Logical15'
     *  RelationalOperator: '<S331>/Comparison10'
     *  RelationalOperator: '<S331>/Comparison13'
     *  S-Function (sfix_bitop): '<S331>/Bitwise Logical Operator10'
     *  S-Function (sfix_bitop): '<S331>/Bitwise Logical Operator8'
     */
    rtb_VariantMergeForOutportRsrvByPass =
        (((rtb_TmpSignalConversionAtFltReg1_ReadOut &
           KeSTFR_g_SelRsrvByPassRsns1) > 0U) ||
         ((rtb_TmpSignalConversionAtFltReg2_ReadOut &
           KeSTFR_g_SelRsrvByPassRsns2) > 0U));

    /* End of Outputs for SubSystem: '<S304>/Subsystem' */
#else

    /* Outputs for Atomic SubSystem: '<S304>/NF_ReserveByPass' */
    /* VariantMerge generated from: '<S304>/RsrvByPass' incorporates:
     *  Constant: '<S330>/FALSEConstant'
     */
    rtb_VariantMergeForOutportRsrvByPass = false;

    /* End of Outputs for SubSystem: '<S304>/NF_ReserveByPass' */
#endif

    /* End of Outputs for SubSystem: '<S290>/ClutchStart_ReserveByPass' */

    /* Inport: '<Root>/VeSTDR_b_CltchStrtRsrvAvail' */
    (void)Rte_Read_VeSTDR_b_CltchStrtRsrvAvail_Value(&tmpRead_0);

    /* VariantMerge generated from: '<S285>/RsrvByPass' incorporates:
     *  Gain: '<S295>/Gain'
     */
    STFR_ac_B.VariantMergeForOutportRsrvByPass =
        rtb_VariantMergeForOutportRsrvByPass;

    /* VariantMerge generated from: '<S285>/VeSTFR_b_CltchRsrvOK' incorporates:
     *  Logic: '<S291>/Logical4'
     */
    STFR_ac_B.VariantMergeForOutportVeSTFR_b_CltchRsrv = (tmpRead_0 ||
        (STFR_ac_B.VariantMergeForOutportRsrvByPass));

    /* Outputs for Atomic SubSystem: '<S291>/P2P5_StartDevices' */
#if Rte_SysCon_Variant_STFR_P2p5Equipd

    /* Outputs for Atomic SubSystem: '<S341>/P2p5_Handles' */
    /* VariantMerge generated from: '<S341>/EMStrtNA' incorporates:
     *  Constant: '<S351>/ConstantValue4'
     *  Constant: '<S354>/Calib'
     *  Constant: '<S355>/Calib'
     *  Logic: '<S351>/Logical11'
     *  Logic: '<S351>/Logical7'
     *  RelationalOperator: '<S351>/Comparison3'
     *  RelationalOperator: '<S351>/Comparison4'
     *  S-Function (sfix_bitop): '<S351>/BitwiseLogicalOperator3'
     *  S-Function (sfix_bitop): '<S351>/BitwiseLogicalOperator8'
     */
    rtb_VariantMergeForOutportEMStrtNA =
        (((rtb_TmpSignalConversionAtFltReg1_ReadOut & KeSTFR_g_SelEMStrtNARsns1)
          > 0U) || ((rtb_TmpSignalConversionAtFltReg2_ReadOut &
                     KeSTFR_g_SelEMStrtNARsns2) > 0U));

    /* VariantMerge generated from: '<S341>/IMStrtNA' incorporates:
     *  Constant: '<S351>/ConstantValue4'
     *  Constant: '<S356>/Calib'
     *  Constant: '<S357>/Calib'
     *  Logic: '<S351>/Logical12'
     *  Logic: '<S351>/Logical9'
     *  RelationalOperator: '<S351>/Comparison11'
     *  RelationalOperator: '<S351>/Comparison12'
     *  S-Function (sfix_bitop): '<S351>/BitwiseLogicalOperator11'
     *  S-Function (sfix_bitop): '<S351>/BitwiseLogicalOperator12'
     */
    rtb_VariantMergeForOutportIMStrtNA =
        (((rtb_TmpSignalConversionAtFltReg1_ReadOut & KeSTFR_g_SelIMStrtNARsns1)
          > 0U) || ((rtb_TmpSignalConversionAtFltReg2_ReadOut &
                     KeSTFR_g_SelIMStrtNARsns2) > 0U));

    /* VariantMerge generated from: '<S341>/CLStrtNA' incorporates:
     *  Constant: '<S351>/ConstantValue4'
     *  Constant: '<S352>/Calib'
     *  Constant: '<S353>/Calib'
     *  Logic: '<S351>/Logical3'
     *  Logic: '<S351>/Logical5'
     *  Logic: '<S351>/Logical6'
     *  RelationalOperator: '<S351>/Comparison10'
     *  RelationalOperator: '<S351>/Comparison5'
     *  S-Function (sfix_bitop): '<S351>/BitwiseLogicalOperator10'
     *  S-Function (sfix_bitop): '<S351>/BitwiseLogicalOperator9'
     */
    rtb_VariantMergeForOutportCLStrtNA =
        ((((rtb_TmpSignalConversionAtFltReg1_ReadOut &
            KeSTFR_g_SelCltStrtNARsns1) > 0U) ||
          ((rtb_TmpSignalConversionAtFltReg2_ReadOut &
            KeSTFR_g_SelCltStrtNARsns2) > 0U)) ||
         (!STFR_ac_B.VariantMergeForOutportVeSTFR_b_CltchRsrv));

    /* End of Outputs for SubSystem: '<S341>/P2p5_Handles' */
#else

    /* Outputs for Atomic SubSystem: '<S341>/NF' */
    /* VariantMerge generated from: '<S341>/CLStrtNA' incorporates:
     *  Constant: '<S350>/TRUEConstant'
     */
    rtb_VariantMergeForOutportCLStrtNA = true;

    /* VariantMerge generated from: '<S341>/EMStrtNA' incorporates:
     *  Constant: '<S350>/TRUEConstant1'
     */
    rtb_VariantMergeForOutportEMStrtNA = true;

    /* VariantMerge generated from: '<S341>/IMStrtNA' incorporates:
     *  Constant: '<S350>/TRUEConstant2'
     */
    rtb_VariantMergeForOutportIMStrtNA = true;

    /* End of Outputs for SubSystem: '<S341>/NF' */
#endif

    /* End of Outputs for SubSystem: '<S291>/P2P5_StartDevices' */

    /* Switch: '<S334>/Switch3' */
    if (rtb_VariantMergeForOutportCLStrtNA)
    {
        /* Switch: '<S334>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S346>/FixPt Bitwise Operator1'
         */
        STFR_ac_B.VariantMergeForOutportVeSTFR_y_StrtDvcNA |= (uint8)8;
    }

    /* End of Switch: '<S334>/Switch3' */

    /* Switch: '<S334>/Switch4' */
    if (rtb_VariantMergeForOutportIMStrtNA)
    {
        /* Switch: '<S334>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S347>/FixPt Bitwise Operator1'
         */
        STFR_ac_B.VariantMergeForOutportVeSTFR_y_StrtDvcNA |= (uint8)16;
    }

    /* End of Switch: '<S334>/Switch4' */

    /* Switch: '<S334>/Switch12' */
    if (rtb_VariantMergeForOutportEMStrtNA)
    {
        /* VariantMerge generated from: '<S285>/VeSTFR_y_StrtDvcNA' incorporates:
         *  S-Function (sfix_bitop): '<S344>/FixPt Bitwise Operator1'
         *  Switch: '<S334>/Switch5'
         */
        STFR_ac_B.VariantMergeForOutportVeSTFR_y_StrtDvcNA |= (uint8)32;
    }

    /* End of Switch: '<S334>/Switch12' */

    /* Outputs for Atomic SubSystem: '<S290>/BackUpStartEngOn' */
#if Rte_SysCon_Variant_STFR_BckupstrtEquipd

    /* Outputs for Atomic SubSystem: '<S301>/Subsystem' */
    /* VariantMerge generated from: '<S301>/BckUpStrtEngOn' incorporates:
     *  Constant: '<S311>/Constant Value4'
     *  RelationalOperator: '<S311>/Comparison3'
     *  S-Function (sfix_bitop): '<S311>/Bitwise Logical Operator4'
     */
    VeSTFR_b_BackUpStrtChkEngOnRaw = ((((sint32)
        STFR_ac_B.VariantMergeForOutportVeSTFR_y_StrtDvcNA) & 1) == 1);

    /* End of Outputs for SubSystem: '<S301>/Subsystem' */
#else

    /* Outputs for Atomic SubSystem: '<S301>/NF_BckUpStrt' */
    /* VariantMerge generated from: '<S301>/BckUpStrtEngOn' incorporates:
     *  Constant: '<S310>/FALSEConstant1'
     */
    VeSTFR_b_BackUpStrtChkEngOnRaw = false;

    /* End of Outputs for SubSystem: '<S301>/NF_BckUpStrt' */
#endif

    /* End of Outputs for SubSystem: '<S290>/BackUpStartEngOn' */

    /* Outputs for Atomic SubSystem: '<S290>/BumpStart_Inhbt' */
#if Rte_SysCon_Variant_STFR_P2Equipd

    /* Outputs for Atomic SubSystem: '<S303>/Subsystem' */
    /* RelationalOperator: '<S329>/Comparison2' incorporates:
     *  Constant: '<S329>/Constant Value2'
     *  S-Function (sfix_bitop): '<S329>/Bitwise Logical Operator1'
     */
    rtb_Comparison2_cy = ((((sint32)
                            STFR_ac_B.VariantMergeForOutportVeSTFR_y_StrtDvcNA)
                           & 1) == 1);

    /* VariantMerge generated from: '<S303>/BmpStrtEngOn' incorporates:
     *  Logic: '<S329>/Logical8'
     */
    VeSTFR_b_BumpStrtChkEngOnRaw = (rtb_TmpSignalConversionAtBmpStrtGrThrsh1 &&
        rtb_Comparison2_cy);

    /* VariantMerge generated from: '<S303>/BmpStrtInhbt' incorporates:
     *  Logic: '<S329>/Logical1'
     *  RelationalOperator: '<S329>/Comparison1'
     */
    rtb_Comparison2_cy = (rtb_TmpSignalConversionAtInhbtBmpStEnbl1 &&
                          (VeSTFR_b_BumpStrtChkEngOnRaw != rtb_Comparison2_cy));

    /* End of Outputs for SubSystem: '<S303>/Subsystem' */
#else

    /* Outputs for Atomic SubSystem: '<S303>/NF_BmpStrtInhbt' */
    /* VariantMerge generated from: '<S303>/BmpStrtInhbt' incorporates:
     *  Constant: '<S328>/FALSEConstant1'
     */
    rtb_Comparison2_cy = false;

    /* VariantMerge generated from: '<S303>/BmpStrtEngOn' incorporates:
     *  Constant: '<S328>/FALSEConstant2'
     */
    VeSTFR_b_BumpStrtChkEngOnRaw = false;

    /* End of Outputs for SubSystem: '<S303>/NF_BmpStrtInhbt' */
#endif

    /* End of Outputs for SubSystem: '<S290>/BumpStart_Inhbt' */

    /* Logic: '<S290>/Logical12' */
    rtb_TmpSignalConversionAtInhbtBmpStEnbl1 = (rtb_Comparison2_cy &&
        rtb_TmpSignalConversionAtEngRun1_ReadOut);

    /* Switch: '<S302>/Switch1' */
    if (VeSTFR_b_BumpStrtChkEngOnRaw)
    {
        /* Switch: '<S302>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S313>/FixPt Bitwise Operator1'
         *  Switch: '<S302>/Switch'
         */
        VeSTFR_d_FltBsdOnOffRsn = (uint16)((sint32)
            ((rtb_TmpSignalConversionAtInhbtBmpStEnbl1 ? 1 : 0) | ((uint8)2)));
    }
    else
    {
        /* Switch: '<S302>/Switch1' incorporates:
         *  Switch: '<S302>/Switch'
         */
        VeSTFR_d_FltBsdOnOffRsn = (uint16)
            (rtb_TmpSignalConversionAtInhbtBmpStEnbl1 ? ((uint16)1) : ((uint16)0));
    }

    /* End of Switch: '<S302>/Switch1' */

    /* Logic: '<S290>/Logical2' incorporates:
     *  Constant: '<S290>/ConstantValue2'
     *  Constant: '<S290>/ConstantValue7'
     *  Logic: '<S290>/Logical4'
     *  Logic: '<S290>/Logical5'
     *  RelationalOperator: '<S290>/Comparison4'
     *  RelationalOperator: '<S290>/Comparison5'
     *  S-Function (sfix_bitop): '<S290>/BitwiseLogicalOperator2'
     *  S-Function (sfix_bitop): '<S290>/BitwiseLogicalOperator3'
     */
    VeSTFR_b_TCMStrtCondNA = (rtb_TmpSignalConversionAtInhbtTCMCndEnbl &&
        ((((rtb_TmpSignalConversionAtFltReg1_ReadOut & 234881024U) == 234881024U)
          && rtb_TmpSignalConversionAtCltchStrtSpdMn1) ||
         ((rtb_TmpSignalConversionAtFltReg1_ReadOut & 251658240U) == 251658240U)));

    /* Logic: '<S290>/Logical3' */
    rtb_TmpSignalConversionAtEngRun1_ReadOut =
        (rtb_TmpSignalConversionAtEngRun1_ReadOut && (VeSTFR_b_TCMStrtCondNA));

    /* Switch: '<S302>/Switch2' */
    if (rtb_TmpSignalConversionAtEngRun1_ReadOut)
    {
        /* Switch: '<S302>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S320>/FixPt Bitwise Operator1'
         */
        VeSTFR_d_FltBsdOnOffRsn = (uint16)(VeSTFR_d_FltBsdOnOffRsn | ((uint16)4));
    }

    /* End of Switch: '<S302>/Switch2' */

    /* Switch: '<S302>/Switch3' */
    if (VeSTFR_b_BackUpStrtChkEngOnRaw)
    {
        /* Switch: '<S302>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S321>/FixPt Bitwise Operator1'
         */
        VeSTFR_d_FltBsdOnOffRsn = (uint16)(VeSTFR_d_FltBsdOnOffRsn | ((uint16)8));
    }

    /* End of Switch: '<S302>/Switch3' */

    /* RelationalOperator: '<S290>/Comparison15' incorporates:
     *  Constant: '<S309>/Calib'
     */
    rtb_TmpSignalConversionAtCltchStrtSpdMn1 =
        (STFR_ac_B.VariantMergeForOutportVeSTFR_y_StrtDvcNA ==
         KeSTFR_y_SelStrtDvcNA);

    /* Logic: '<S290>/Logical23' incorporates:
     *  Logic: '<S290>/Logical24'
     */
    rtb_TmpSignalConversionAtEssRun1_ReadOut =
        (rtb_TmpSignalConversionAtCltchStrtSpdMn1 &&
         (rtb_TmpSignalConversionAtEssRun1_ReadOut ||
          rtb_TmpSignalConversionAtEssPFS1_ReadOut));

    /* Switch: '<S302>/Switch4' */
    if (rtb_TmpSignalConversionAtEssRun1_ReadOut)
    {
        /* Switch: '<S302>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S322>/FixPt Bitwise Operator1'
         */
        VeSTFR_d_FltBsdOnOffRsn = (uint16)(VeSTFR_d_FltBsdOnOffRsn | ((uint16)16));
    }

    /* End of Switch: '<S302>/Switch4' */

    /* Switch: '<S302>/Switch12' */
    if (rtb_TmpSignalConversionAtImpndInhbtESSOn)
    {
        /* Switch: '<S302>/Switch14' incorporates:
         *  S-Function (sfix_bitop): '<S316>/FixPt Bitwise Operator1'
         */
        VeSTFR_d_FltBsdOnOffRsn = (uint16)(VeSTFR_d_FltBsdOnOffRsn | ((uint16)32));
    }

    /* End of Switch: '<S302>/Switch12' */

    /* Logic: '<S290>/Logical11' */
    rtb_TmpSignalConversionAtEngOff1_ReadOut =
        (rtb_TmpSignalConversionAtEngOff1_ReadOut && rtb_Comparison2_cy);

    /* Switch: '<S302>/Switch7' */
    if (rtb_TmpSignalConversionAtEngOff1_ReadOut)
    {
        /* Switch: '<S302>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S325>/FixPt Bitwise Operator1'
         *  Switch: '<S302>/Switch6'
         */
        VeSTFR_d_FltBsdOnOffRsn = (uint16)(VeSTFR_d_FltBsdOnOffRsn | ((uint16)
            256));
    }

    /* End of Switch: '<S302>/Switch7' */

    /* Logic: '<S290>/Logical9' */
    rtb_TmpSignalConversionAtSTPA_EFAFail1_R = (rtb_Comparison2_cy &&
        rtb_TmpSignalConversionAtSTPA_EFAFail1_R);

    /* Switch: '<S302>/Switch8' */
    if (rtb_TmpSignalConversionAtSTPA_EFAFail1_R)
    {
        /* Switch: '<S302>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S326>/FixPt Bitwise Operator1'
         */
        VeSTFR_d_FltBsdOnOffRsn = (uint16)(VeSTFR_d_FltBsdOnOffRsn | ((uint16)
            512));
    }

    /* End of Switch: '<S302>/Switch8' */

    /* Switch: '<S302>/Switch10' */
    if (rtb_TmpSignalConversionAtEFAFail1_ReadOu)
    {
        /* Switch: '<S302>/Switch10' incorporates:
         *  S-Function (sfix_bitop): '<S314>/FixPt Bitwise Operator1'
         */
        VeSTFR_d_FltBsdOnOffRsn = (uint16)(VeSTFR_d_FltBsdOnOffRsn | ((uint16)
            1024));
    }

    /* End of Switch: '<S302>/Switch10' */

    /* Switch: '<S302>/Switch11' */
    if (rtb_TmpSignalConversionAtStallDtct1_Read)
    {
        /* Switch: '<S302>/Switch11' incorporates:
         *  S-Function (sfix_bitop): '<S315>/FixPt Bitwise Operator1'
         */
        VeSTFR_d_FltBsdOnOffRsn = (uint16)(VeSTFR_d_FltBsdOnOffRsn | ((uint16)
            2048));
    }

    /* End of Switch: '<S302>/Switch11' */

    /* Outputs for Atomic SubSystem: '<S287>/STFC_HMI' */
    /* Outputs for Atomic SubSystem: '<S292>/HMI_Trg' */
    /* Outputs for Atomic SubSystem: '<S287>/STFC_Immed_Stop' */
    /* Outputs for Atomic SubSystem: '<S293>/ISTrg' */
    /* Logic: '<S290>/Logical22' incorporates:
     *  Logic: '<S358>/Logical4'
     *  Logic: '<S360>/Logical4'
     */
    rtb_TmpSignalConversionAtEssOFF1_ReadOut =
        ((rtb_TmpSignalConversionAtEssOFF1_ReadOut ||
          rtb_TmpSignalConversionAtEssCD1_ReadOutp) ||
         rtb_TmpSignalConversionAtEssFStp1_ReadOu);

    /* End of Outputs for SubSystem: '<S293>/ISTrg' */
    /* End of Outputs for SubSystem: '<S287>/STFC_Immed_Stop' */
    /* End of Outputs for SubSystem: '<S292>/HMI_Trg' */
    /* End of Outputs for SubSystem: '<S287>/STFC_HMI' */

    /* Logic: '<S290>/Logical21' incorporates:
     *  Logic: '<S290>/Logical22'
     */
    rtb_TmpSignalConversionAtEssCD1_ReadOutp =
        (rtb_TmpSignalConversionAtCltchStrtSpdMn1 &&
         rtb_TmpSignalConversionAtEssOFF1_ReadOut);

    /* Switch: '<S302>/Switch13' */
    if (rtb_TmpSignalConversionAtEssCD1_ReadOutp)
    {
        /* Switch: '<S302>/Switch13' incorporates:
         *  S-Function (sfix_bitop): '<S317>/FixPt Bitwise Operator1'
         */
        VeSTFR_d_FltBsdOnOffRsn = (uint16)(VeSTFR_d_FltBsdOnOffRsn | ((uint16)
            4096));
    }

    /* End of Switch: '<S302>/Switch13' */

    /* Switch: '<S302>/Switch9' */
    if (rtb_TmpSignalConversionAtImpndInhbtESSOf)
    {
        /* Switch: '<S302>/Switch15' incorporates:
         *  S-Function (sfix_bitop): '<S327>/FixPt Bitwise Operator1'
         *  Switch: '<S302>/Switch14'
         */
        VeSTFR_d_FltBsdOnOffRsn = (uint16)(VeSTFR_d_FltBsdOnOffRsn | ((uint16)
            8192));
    }

    /* End of Switch: '<S302>/Switch9' */

    /* Logic: '<S290>/Logical10' */
    VeSTFR_b_FltBsdOff = (((((rtb_TmpSignalConversionAtEngOff1_ReadOut ||
        rtb_TmpSignalConversionAtSTPA_EFAFail1_R) ||
        rtb_TmpSignalConversionAtEFAFail1_ReadOu) ||
                            rtb_TmpSignalConversionAtStallDtct1_Read) ||
                           rtb_TmpSignalConversionAtEssCD1_ReadOutp) ||
                          rtb_TmpSignalConversionAtImpndInhbtESSOf);

    /* Outputs for Atomic SubSystem: '<S287>/STFC_Immed_Stop' */
#if Rte_SysCon_Variant_STFR_P2p5Equipd

    /* Outputs for Atomic SubSystem: '<S293>/ISTrg' */
    /* VariantMerge generated from: '<S293>/ImmedStpTrg' incorporates:
     *  Constant: '<S360>/Constant Value1'
     *  Constant: '<S360>/Constant Value8'
     *  Constant: '<S362>/Calib'
     *  Constant: '<S363>/Calib'
     *  Logic: '<S360>/Logical1'
     *  Logic: '<S360>/Logical2'
     *  Logic: '<S360>/Logical3'
     *  RelationalOperator: '<S360>/Comparison1'
     *  RelationalOperator: '<S360>/Comparison12'
     *  RelationalOperator: '<S360>/Comparison2'
     *  S-Function (sfix_bitop): '<S360>/Bitwise Logical Operator1'
     *  S-Function (sfix_bitop): '<S360>/Bitwise Logical Operator2'
     *  S-Function (sfix_bitop): '<S360>/Bitwise Logical Operator8'
     */
    rtb_VariantMergeForOutportImmedStpTrg =
        ((((((rtb_TmpSignalConversionAtFltReg1_ReadOut &
              KeSTFR_g_SelEVDrvNARsns1) > 0U) ||
            ((rtb_TmpSignalConversionAtFltReg2_ReadOut &
              KeSTFR_g_SelEVDrvNARsns2) > 0U)) && ((((sint32)
              STFR_ac_B.VariantMergeForOutportVeSTFR_y_StrtDvcNA) & 3) == 3)) &&
          (!rtb_TmpSignalConversionAtTCMCltchAvlbl1_)) &&
         rtb_TmpSignalConversionAtEssOFF1_ReadOut);

    /* End of Outputs for SubSystem: '<S293>/ISTrg' */
#else

    /* Outputs for Atomic SubSystem: '<S293>/NF_ISTrg' */
    /* VariantMerge generated from: '<S293>/ImmedStpTrg' incorporates:
     *  Constant: '<S361>/FALSEConstant5'
     */
    rtb_VariantMergeForOutportImmedStpTrg = false;

    /* End of Outputs for SubSystem: '<S293>/NF_ISTrg' */
#endif

    /* End of Outputs for SubSystem: '<S287>/STFC_Immed_Stop' */

    /* Logic: '<S290>/Logical7' */
    VeSTFR_b_FltBsdOn = (((((rtb_TmpSignalConversionAtInhbtBmpStEnbl1 ||
        (VeSTFR_b_BumpStrtChkEngOnRaw)) ||
                            rtb_TmpSignalConversionAtEngRun1_ReadOut) ||
                           (VeSTFR_b_BackUpStrtChkEngOnRaw)) ||
                          rtb_TmpSignalConversionAtEssRun1_ReadOut) ||
                         rtb_TmpSignalConversionAtImpndInhbtESSOn);

    /* VariantMerge generated from: '<S285>/StrtAllw' incorporates:
     *  Logic: '<S290>/Logical13'
     *  Logic: '<S290>/Logical14'
     *  Logic: '<S290>/Logical26'
     */
    STFR_ac_B.VariantMergeForOutportStrtAllw =
        ((rtb_TmpSignalConversionAtEssInitSpn1_Rea ||
          (!rtb_TmpSignalConversionAtKeyOffSt1_ReadO)) ||
         (!rtb_TmpSignalConversionAtCltchStrtSpdMn1));

    /* Switch: '<S290>/Switch2' incorporates:
     *  Gain: '<S300>/Gain'
     *  Inport: '<Root>/VeHPMR_b_PropSysActv'
     *  Inport: '<Root>/VeSTRR_b_ImmedStop'
     */
    if (rtb_VariantMergeForOutportImmedStpTrg)
    {
        /* VariantMerge generated from: '<S285>/FltBsdOvrrd' incorporates:
         *  Constant: '<S308>/Constant'
         */
        STFR_ac_B.VariantMergeForOutportFltBsdOvrrd = CeSTRR_e_OvrrdImmedStop;
    }
    else
    {
        (void)Rte_Read_VeSTRR_b_ImmedStop_Value(&tmpRead_1);
        (void)Rte_Read_VeHPMR_b_PropSysActv_Value(&tmpRead);

        /* Switch: '<S290>/Switch1' incorporates:
         *  Inport: '<Root>/VeHPMR_b_PropSysActv'
         *  Inport: '<Root>/VeSTRR_b_ImmedStop'
         *  Logic: '<S290>/Logical17'
         *  Logic: '<S290>/Logical18'
         *  Logic: '<S290>/Logical20'
         *  Switch: '<S290>/Switch4'
         */
        if ((rtb_TmpSignalConversionAtSRAREngOff1_Rea || (VeSTFR_b_FltBsdOff)) ||
            (tmpRead_1 && tmpRead))
        {
            /* VariantMerge generated from: '<S285>/FltBsdOvrrd' incorporates:
             *  Constant: '<S306>/Constant'
             *  Switch: '<S290>/Switch1'
             */
            STFR_ac_B.VariantMergeForOutportFltBsdOvrrd = CeSTRR_e_OvrrdEngOff;
        }
        else if (rtb_TmpSignalConversionAtSRAREngOnRaw1_R || (VeSTFR_b_FltBsdOn))
        {
            /* Switch: '<S290>/Switch4' incorporates:
             *  Constant: '<S305>/Constant'
             *  Switch: '<S290>/Switch1'
             *  VariantMerge generated from: '<S285>/FltBsdOvrrd'
             */
            STFR_ac_B.VariantMergeForOutportFltBsdOvrrd = CeSTRR_e_OvrrdEngOn;
        }
        else
        {
            /* VariantMerge generated from: '<S285>/FltBsdOvrrd' incorporates:
             *  Constant: '<S307>/Constant'
             *  Switch: '<S290>/Switch1'
             *  Switch: '<S290>/Switch4'
             */
            STFR_ac_B.VariantMergeForOutportFltBsdOvrrd = CeSTRR_e_NoOvrrd;
        }

        /* End of Switch: '<S290>/Switch1' */
    }

    /* End of Switch: '<S290>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S287>/STFC_HMI' */
#if Rte_SysCon_Variant_STFR_P2p5Equipd

    /* Outputs for Atomic SubSystem: '<S292>/HMI_Trg' */
    /* VariantMerge generated from: '<S292>/HMI' incorporates:
     *  Constant: '<S358>/Constant Value1'
     *  Constant: '<S358>/Constant Value2'
     *  Logic: '<S358>/Logical18'
     *  Logic: '<S358>/Logical2'
     *  Logic: '<S358>/Logical3'
     *  RelationalOperator: '<S358>/Comparison1'
     *  RelationalOperator: '<S358>/Comparison12'
     *  S-Function (sfix_bitop): '<S358>/Bitwise Logical Operator1'
     *  S-Function (sfix_bitop): '<S358>/Bitwise Logical Operator8'
     */
    VeSTFR_b_P2p5HMIMsgRaw = (((((((sint32)
        STFR_ac_B.VariantMergeForOutportVeSTFR_y_StrtDvcNA) & 56) != 56) &&
        ((((sint32)STFR_ac_B.VariantMergeForOutportVeSTFR_y_StrtDvcNA) & 3) == 3))
        && rtb_TmpSignalConversionAtEssOFF1_ReadOut) &&
        rtb_TmpSignalConversionAtTCMHMIEnbl1_Rea);

    /* End of Outputs for SubSystem: '<S292>/HMI_Trg' */
#else

    /* Outputs for Atomic SubSystem: '<S292>/NF_HMI' */
    /* VariantMerge generated from: '<S292>/HMI' incorporates:
     *  Constant: '<S359>/FALSEConstant3'
     */
    VeSTFR_b_P2p5HMIMsgRaw = false;

    /* End of Outputs for SubSystem: '<S292>/NF_HMI' */
#endif

    /* End of Outputs for SubSystem: '<S287>/STFC_HMI' */

    /* VariantMerge generated from: '<S285>/BmpStrtEngOn' incorporates:
     *  Gain: '<S296>/Gain'
     */
    STFR_ac_B.VariantMergeForOutportBmpStrtEngOn = VeSTFR_b_BumpStrtChkEngOnRaw;

    /* VariantMerge generated from: '<S285>/BmpStrtInhbt' incorporates:
     *  Gain: '<S297>/Gain'
     */
    STFR_ac_B.VariantMergeForOutportBmpStrtInhbt = rtb_Comparison2_cy;

    /* VariantMerge generated from: '<S285>/BckUpStrtEngOn' incorporates:
     *  Gain: '<S298>/Gain'
     */
    STFR_ac_B.VariantMergeForOutportBckUpStrtEngOn =
        VeSTFR_b_BackUpStrtChkEngOnRaw;

    /* VariantMerge generated from: '<S285>/P2p5HMIMsg' incorporates:
     *  Gain: '<S299>/Gain'
     */
    STFR_ac_B.VariantMergeForOutportP2p5HMIMsg = VeSTFR_b_P2p5HMIMsgRaw;

    /* Switch: '<S369>/Switch1' incorporates:
     *  Constant: '<S364>/Constant'
     *  Constant: '<S365>/Constant'
     *  RelationalOperator: '<S294>/Comparison1'
     *  RelationalOperator: '<S294>/Comparison2'
     *  Switch: '<S369>/Switch2'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeSRAR_e_EngStr) ==
            CeSRAR_e_HybTrqStrt)
    {
        /* VariantMerge generated from: '<S285>/VeSTFR_e_StrtType' incorporates:
         *  Constant: '<S366>/Constant'
         */
        STFR_ac_B.VariantMergeForOutportVeSTFR_e_StrtType =
            CeSTRR_e_KeyCrnkHybTrq;
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeSRAR_e_EngStr) ==
             CeSRAR_e_EngTrqStrt)
    {
        /* Switch: '<S369>/Switch2' incorporates:
         *  Constant: '<S367>/Constant'
         *  VariantMerge generated from: '<S285>/VeSTFR_e_StrtType'
         */
        STFR_ac_B.VariantMergeForOutportVeSTFR_e_StrtType =
            CeSTRR_e_KeyCrnkEngTrq;
    }
    else
    {
        /* VariantMerge generated from: '<S285>/VeSTFR_e_StrtType' incorporates:
         *  Constant: '<S368>/Constant'
         *  Switch: '<S369>/Switch2'
         */
        STFR_ac_B.VariantMergeForOutportVeSTFR_e_StrtType = CeSTRR_e_NoAction;
    }

    /* End of Switch: '<S369>/Switch1' */
    /* End of Outputs for SubSystem: '<S285>/EnblFcn' */
#endif

    /* End of Outputs for SubSystem: '<S284>/VarSS_STFC_FltProcessing' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeSTFR_b_BackUpStrtChkEngOn' incorporates:
     *  SignalConversion generated from: '<S2>/BckUpStrtEngOn'
     */
    (void)Rte_Write_VeSTFR_b_BackUpStrtChkEngOn_Value
        (STFR_ac_B.VariantMergeForOutportBckUpStrtEngOn);

    /* Outport: '<Root>/VeSTFR_b_BumpStrtChkEngOn' incorporates:
     *  SignalConversion generated from: '<S2>/BmpStrtEngOn'
     */
    (void)Rte_Write_VeSTFR_b_BumpStrtChkEngOn_Value
        (STFR_ac_B.VariantMergeForOutportBmpStrtEngOn);

    /* Outport: '<Root>/VeSTFR_b_BmpStrtInhbt' incorporates:
     *  SignalConversion generated from: '<S2>/BmpStrtInhbt'
     */
    (void)Rte_Write_VeSTFR_b_BmpStrtInhbt_Value
        (STFR_ac_B.VariantMergeForOutportBmpStrtInhbt);

    /* Outport: '<Root>/VeSTFR_e_StrtStpOvrrd' incorporates:
     *  SignalConversion generated from: '<S2>/FltBsdOvrrd'
     *  VariantMerge generated from: '<S285>/FltBsdOvrrd'
     */
    (void)Rte_Write_VeSTFR_e_StrtStpOvrrd_Value
        (STFR_ac_B.VariantMergeForOutportFltBsdOvrrd);

    /* Outport: '<Root>/VeSTFR_b_P2p5HMIMsg' incorporates:
     *  SignalConversion generated from: '<S2>/P2p5HMIMsg'
     */
    (void)Rte_Write_VeSTFR_b_P2p5HMIMsg_Value
        (STFR_ac_B.VariantMergeForOutportP2p5HMIMsg);

    /* Outport: '<Root>/VeSTFR_b_RsrvByPass' incorporates:
     *  SignalConversion generated from: '<S2>/RsrvByPass'
     */
    (void)Rte_Write_VeSTFR_b_RsrvByPass_Value
        (STFR_ac_B.VariantMergeForOutportRsrvByPass);

    /* Outport: '<Root>/VeSTFR_b_StrtAllwd' incorporates:
     *  SignalConversion generated from: '<S2>/StrtAllw'
     */
    (void)Rte_Write_VeSTFR_b_StrtAllwd_Value
        (STFR_ac_B.VariantMergeForOutportStrtAllw);

    /* Outport: '<Root>/VeSTFR_b_CltchRsrvOK' incorporates:
     *  SignalConversion generated from: '<S2>/VeSTFR_b_CltchRsrvOK'
     */
    (void)Rte_Write_VeSTFR_b_CltchRsrvOK_Value
        (STFR_ac_B.VariantMergeForOutportVeSTFR_b_CltchRsrv);

    /* Outport: '<Root>/VeSTFR_e_StrtType' incorporates:
     *  SignalConversion generated from: '<S2>/VeSTFR_e_StrtType'
     *  VariantMerge generated from: '<S285>/VeSTFR_e_StrtType'
     */
    (void)Rte_Write_VeSTFR_e_StrtType_Value
        (STFR_ac_B.VariantMergeForOutportVeSTFR_e_StrtType);

    /* Outport: '<Root>/VeSTFR_y_StrtDvcNA' incorporates:
     *  SignalConversion generated from: '<S2>/VeSTFR_y_StrtDvcNA'
     */
    (void)Rte_Write_VeSTFR_y_StrtDvcNA_Value
        (STFR_ac_B.VariantMergeForOutportVeSTFR_y_StrtDvcNA);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB3' */
}

/* Output function */
FUNC(void, STFR_CODE) STFR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/STFR_PwrOff'
     */
    /* Outport: '<Root>/NeSTFR_b_FailedStrtPrevCycle_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeSTFR_b_FailedStrtPrevCycle'
     */
    (void)Rte_Write_NeSTFR_b_FailedStrtPrevCycle_NeSTFR_b_FailedStrtPrevCycle
        (STFR_ac_DW.NeSTFR_b_FailedStrtPrevCycle);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, STFR_CODE) STFR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/STFR_PwrOn'
     */
    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/DSM_Init'
     */
    /* DataStoreWrite: '<S370>/NeSTFR_b_FailedStrtPrevCycle' incorporates:
     *  Inport: '<Root>/NeSTFR_b_FailedStrtPrevCycle_PM_In'
     */
    (void)Rte_Read_NeSTFR_b_FailedStrtPrevCycle_Rx_NeSTFR_b_FailedStrtPrevCycle(
        &STFR_ac_DW.NeSTFR_b_FailedStrtPrevCycle);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S371>/VeSTFR_g_FltReg1_Out_Init' */
    STFR_ac_B.OutportBufferForVeSTFR_g_FltReg1_Out_Ini = 0U;

    /* SignalConversion generated from: '<S371>/VeSTFR_g_FltReg2_Out_Init' */
    STFR_ac_B.OutportBufferForVeSTFR_g_FltReg2_Out_Ini = 0U;

    /* SignalConversion generated from: '<S371>/VeSTFR_e_StrtStpOvrrd_Out_Init' incorporates:
     *  Constant: '<S371>/Const3'
     */
    STFR_ac_B.OutportBufferForVeSTFR_e_StrtStpOvrrd_Ou = STFR_ac_ConstB.Const3;

    /* SignalConversion generated from: '<S371>/VeSTFR_b_BumpStrtChkEngOn_Out_Init' */
    STFR_ac_B.OutportBufferForVeSTFR_b_BumpStrtChkEngO = false;

    /* SignalConversion generated from: '<S371>/VeSTFR_b_BackUpStrtChkEngOn_Out_Init' */
    STFR_ac_B.OutportBufferForVeSTFR_b_BackUpStrtChkEn = false;

    /* SignalConversion generated from: '<S371>/VeSTFR_b_BmpStrtInhbt_Out_Init' */
    STFR_ac_B.OutportBufferForVeSTFR_b_BmpStrtInhbt_Ou = false;

    /* SignalConversion generated from: '<S371>/VeSTFR_b_RsrvByPass_Out_Init' */
    STFR_ac_B.OutportBufferForVeSTFR_b_RsrvByPass_Out_ = false;

    /* SignalConversion generated from: '<S371>/VeSTFR_b_StrtAllwd_Out_Init' */
    STFR_ac_B.OutportBufferForVeSTFR_b_StrtAllwd_Out_I = false;

    /* SignalConversion generated from: '<S371>/VeSTFR_b_P2p5HMIMsg_Out_Init' */
    STFR_ac_B.OutportBufferForVeSTFR_b_P2p5HMIMsg_Out_ = false;

    /* SignalConversion generated from: '<S371>/VeSTFR_y_StrtDvcNA_Out_Init' */
    STFR_ac_B.OutportBufferForVeSTFR_y_StrtDvcNA_Out_I = 0U;

    /* SignalConversion generated from: '<S371>/VeSTFR_e_StrtType_Out_Init' incorporates:
     *  Constant: '<S371>/Const11'
     */
    STFR_ac_B.OutportBufferForVeSTFR_e_StrtType_Out_In = STFR_ac_ConstB.Const11;

    /* SignalConversion generated from: '<S371>/VeSTFR_b_CltchRsrvOK_Out_Init' */
    STFR_ac_B.OutportBufferForVeSTFR_b_CltchRsrvOK_Out = false;

    /* SignalConversion generated from: '<S371>/EssOFF1_write' */
    STFR_ac_B.OutportBufferForEssOFF1_write = false;

    /* SignalConversion generated from: '<S371>/EssCD1_write' */
    STFR_ac_B.OutportBufferForEssCD1_write = false;

    /* SignalConversion generated from: '<S371>/EssFStp1_write' */
    STFR_ac_B.OutportBufferForEssFStp1_write = false;

    /* SignalConversion generated from: '<S371>/TCMHMIEnbl1_write' */
    STFR_ac_B.OutportBufferForTCMHMIEnbl1_write = false;

    /* SignalConversion generated from: '<S371>/TCMCltchAvlbl1_write' */
    STFR_ac_B.OutportBufferForTCMCltchAvlbl1_write = false;

    /* SignalConversion generated from: '<S371>/SRAREngOnRaw1_write' */
    STFR_ac_B.OutportBufferForSRAREngOnRaw1_write = false;

    /* SignalConversion generated from: '<S371>/SRAREngOff1_write' */
    STFR_ac_B.OutportBufferForSRAREngOff1_write = false;

    /* SignalConversion generated from: '<S371>/ImpndInhbtESSOff1_write' */
    STFR_ac_B.OutportBufferForImpndInhbtESSOff1_write = false;

    /* SignalConversion generated from: '<S371>/ImpndInhbtESSOn1_write' */
    STFR_ac_B.OutportBufferForImpndInhbtESSOn1_write = false;

    /* SignalConversion generated from: '<S371>/StallDtct1_write' */
    STFR_ac_B.OutportBufferForStallDtct1_write = false;

    /* SignalConversion generated from: '<S371>/EFAFail1_write' */
    STFR_ac_B.OutportBufferForEFAFail1_write = false;

    /* SignalConversion generated from: '<S371>/STPA_EFAFail1_write' */
    STFR_ac_B.OutportBufferForSTPA_EFAFail1_write = false;

    /* SignalConversion generated from: '<S371>/CltchStrtSpdMn1_write' */
    STFR_ac_B.OutportBufferForCltchStrtSpdMn1_write = false;

    /* SignalConversion generated from: '<S371>/EngRun1_write' */
    STFR_ac_B.OutportBufferForEngRun1_write = false;

    /* SignalConversion generated from: '<S371>/EngOff1_write' */
    STFR_ac_B.OutportBufferForEngOff1_write = false;

    /* SignalConversion generated from: '<S371>/InhbtTCMCndEnbl1_write' */
    STFR_ac_B.OutportBufferForInhbtTCMCndEnbl1_write = false;

    /* SignalConversion generated from: '<S371>/InhbtBmpStEnbl1_write' */
    STFR_ac_B.OutportBufferForInhbtBmpStEnbl1_write = false;

    /* SignalConversion generated from: '<S371>/BmpStrtGrThrsh1_write' */
    STFR_ac_B.OutportBufferForBmpStrtGrThrsh1_write = false;

    /* SignalConversion generated from: '<S371>/TCMEMAvlbl1_write' */
    STFR_ac_B.OutportBufferForTCMEMAvlbl1_write = false;

    /* SignalConversion generated from: '<S371>/TCMIMAvlbl1_write' */
    STFR_ac_B.OutportBufferForTCMIMAvlbl1_write = false;

    /* SignalConversion generated from: '<S371>/EssRun1_write' */
    STFR_ac_B.OutportBufferForEssRun1_write = false;

    /* SignalConversion generated from: '<S371>/EssPFS1_write' */
    STFR_ac_B.OutportBufferForEssPFS1_write = false;

    /* SignalConversion generated from: '<S371>/EssInitSpn1_write' */
    STFR_ac_B.OutportBufferForEssInitSpn1_write = false;

    /* SignalConversion generated from: '<S371>/KeyOffSt1_write' */
    STFR_ac_B.OutportBufferForKeyOffSt1_write = false;

    /* SignalConversion generated from: '<S371>/FltReg1_write' */
    STFR_ac_B.OutportBufferForFltReg1_write = 0U;

    /* SignalConversion generated from: '<S371>/FltReg2_write' */
    STFR_ac_B.OutportBufferForFltReg2_write = 0U;

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeSTFR_b_BackUpStrtChkEngOn' incorporates:
     *  SignalConversion generated from: '<S4>/VeSTFR_b_BackUpStrtChkEngOn_Out_Init'
     */
    (void)Rte_Write_VeSTFR_b_BackUpStrtChkEngOn_Value
        (STFR_ac_B.OutportBufferForVeSTFR_b_BackUpStrtChkEn);

    /* Outport: '<Root>/VeSTFR_b_BmpStrtInhbt' incorporates:
     *  SignalConversion generated from: '<S4>/VeSTFR_b_BmpStrtInhbt_Out_Init'
     */
    (void)Rte_Write_VeSTFR_b_BmpStrtInhbt_Value
        (STFR_ac_B.OutportBufferForVeSTFR_b_BmpStrtInhbt_Ou);

    /* Outport: '<Root>/VeSTFR_b_BumpStrtChkEngOn' incorporates:
     *  SignalConversion generated from: '<S4>/VeSTFR_b_BumpStrtChkEngOn_Out_Init'
     */
    (void)Rte_Write_VeSTFR_b_BumpStrtChkEngOn_Value
        (STFR_ac_B.OutportBufferForVeSTFR_b_BumpStrtChkEngO);

    /* Outport: '<Root>/VeSTFR_b_CltchRsrvOK' incorporates:
     *  SignalConversion generated from: '<S4>/VeSTFR_b_CltchRsrvOK_Out_Init'
     */
    (void)Rte_Write_VeSTFR_b_CltchRsrvOK_Value
        (STFR_ac_B.OutportBufferForVeSTFR_b_CltchRsrvOK_Out);

    /* Outport: '<Root>/VeSTFR_b_P2p5HMIMsg' incorporates:
     *  SignalConversion generated from: '<S4>/VeSTFR_b_P2p5HMIMsg_Out_Init'
     */
    (void)Rte_Write_VeSTFR_b_P2p5HMIMsg_Value
        (STFR_ac_B.OutportBufferForVeSTFR_b_P2p5HMIMsg_Out_);

    /* Outport: '<Root>/VeSTFR_b_RsrvByPass' incorporates:
     *  SignalConversion generated from: '<S4>/VeSTFR_b_RsrvByPass_Out_Init'
     */
    (void)Rte_Write_VeSTFR_b_RsrvByPass_Value
        (STFR_ac_B.OutportBufferForVeSTFR_b_RsrvByPass_Out_);

    /* Outport: '<Root>/VeSTFR_b_StrtAllwd' incorporates:
     *  SignalConversion generated from: '<S4>/VeSTFR_b_StrtAllwd_Out_Init'
     */
    (void)Rte_Write_VeSTFR_b_StrtAllwd_Value
        (STFR_ac_B.OutportBufferForVeSTFR_b_StrtAllwd_Out_I);

    /* Outport: '<Root>/VeSTFR_e_StrtStpOvrrd' incorporates:
     *  SignalConversion generated from: '<S371>/VeSTFR_e_StrtStpOvrrd_Out_Init'
     *  SignalConversion generated from: '<S4>/VeSTFR_e_StrtStpOvrrd_Out_Init'
     */
    (void)Rte_Write_VeSTFR_e_StrtStpOvrrd_Value
        (STFR_ac_B.OutportBufferForVeSTFR_e_StrtStpOvrrd_Ou);

    /* Outport: '<Root>/VeSTFR_e_StrtType' incorporates:
     *  SignalConversion generated from: '<S371>/VeSTFR_e_StrtType_Out_Init'
     *  SignalConversion generated from: '<S4>/VeSTFR_e_StrtType_Out_Init'
     */
    (void)Rte_Write_VeSTFR_e_StrtType_Value
        (STFR_ac_B.OutportBufferForVeSTFR_e_StrtType_Out_In);

    /* Outport: '<Root>/VeSTFR_g_FltReg1' incorporates:
     *  SignalConversion generated from: '<S4>/VeSTFR_g_FltReg1_Out_Init'
     */
    (void)Rte_Write_VeSTFR_g_FltReg1_Value
        (STFR_ac_B.OutportBufferForVeSTFR_g_FltReg1_Out_Ini);

    /* Outport: '<Root>/VeSTFR_g_FltReg2' incorporates:
     *  SignalConversion generated from: '<S4>/VeSTFR_g_FltReg2_Out_Init'
     */
    (void)Rte_Write_VeSTFR_g_FltReg2_Value
        (STFR_ac_B.OutportBufferForVeSTFR_g_FltReg2_Out_Ini);

    /* Outport: '<Root>/VeSTFR_y_StrtDvcNA' incorporates:
     *  SignalConversion generated from: '<S4>/VeSTFR_y_StrtDvcNA_Out_Init'
     */
    (void)Rte_Write_VeSTFR_y_StrtDvcNA_Value
        (STFR_ac_B.OutportBufferForVeSTFR_y_StrtDvcNA_Out_I);

    /* Merge: '<Root>/BmpStrtGrThrsh1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/BmpStrtGrThrsh1_write'
     * */
    Rte_IrvWrite_STFR_PwrOn_BmpStrtGrThrsh1_write_IRV
        (STFR_ac_B.OutportBufferForBmpStrtGrThrsh1_write);

    /* Merge: '<Root>/CltchStrtSpdMn1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/CltchStrtSpdMn1_write'
     * */
    Rte_IrvWrite_STFR_PwrOn_CltchStrtSpdMn1_write_IRV
        (STFR_ac_B.OutportBufferForCltchStrtSpdMn1_write);

    /* Merge: '<Root>/EFAFail1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/EFAFail1_write'
     * */
    Rte_IrvWrite_STFR_PwrOn_EFAFail1_write_IRV
        (STFR_ac_B.OutportBufferForEFAFail1_write);

    /* Merge: '<Root>/EngOff1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/EngOff1_write'
     * */
    Rte_IrvWrite_STFR_PwrOn_EngOff1_write_IRV
        (STFR_ac_B.OutportBufferForEngOff1_write);

    /* Merge: '<Root>/EngRun1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/EngRun1_write'
     * */
    Rte_IrvWrite_STFR_PwrOn_EngRun1_write_IRV
        (STFR_ac_B.OutportBufferForEngRun1_write);

    /* Merge: '<Root>/EssCD1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/EssCD1_write'
     * */
    Rte_IrvWrite_STFR_PwrOn_EssCD1_write_IRV
        (STFR_ac_B.OutportBufferForEssCD1_write);

    /* Merge: '<Root>/EssFStp1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/EssFStp1_write'
     * */
    Rte_IrvWrite_STFR_PwrOn_EssFStp1_write_IRV
        (STFR_ac_B.OutportBufferForEssFStp1_write);

    /* Merge: '<Root>/EssInitSpn1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/EssInitSpn1_write'
     * */
    Rte_IrvWrite_STFR_PwrOn_EssInitSpn1_write_IRV
        (STFR_ac_B.OutportBufferForEssInitSpn1_write);

    /* Merge: '<Root>/EssOFF1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/EssOFF1_write'
     * */
    Rte_IrvWrite_STFR_PwrOn_EssOFF1_write_IRV
        (STFR_ac_B.OutportBufferForEssOFF1_write);

    /* Merge: '<Root>/EssPFS1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/EssPFS1_write'
     * */
    Rte_IrvWrite_STFR_PwrOn_EssPFS1_write_IRV
        (STFR_ac_B.OutportBufferForEssPFS1_write);

    /* Merge: '<Root>/EssRun1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/EssRun1_write'
     * */
    Rte_IrvWrite_STFR_PwrOn_EssRun1_write_IRV
        (STFR_ac_B.OutportBufferForEssRun1_write);

    /* Merge: '<Root>/FltReg3_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/FltReg1_write'
     * */
    Rte_IrvWrite_STFR_PwrOn_FltReg1_write_IRV
        (STFR_ac_B.OutportBufferForFltReg1_write);

    /* Merge: '<Root>/FltReg4_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/FltReg2_write'
     * */
    Rte_IrvWrite_STFR_PwrOn_FltReg2_write_IRV
        (STFR_ac_B.OutportBufferForFltReg2_write);

    /* Merge: '<Root>/ImpndInhbtESSOff1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/ImpndInhbtESSOff1_write'
     * */
    Rte_IrvWrite_STFR_PwrOn_ImpndInhbtESSOff1_write_IRV
        (STFR_ac_B.OutportBufferForImpndInhbtESSOff1_write);

    /* Merge: '<Root>/ImpndInhbtESSOn1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/ImpndInhbtESSOn1_write'
     * */
    Rte_IrvWrite_STFR_PwrOn_ImpndInhbtESSOn1_write_IRV
        (STFR_ac_B.OutportBufferForImpndInhbtESSOn1_write);

    /* Merge: '<Root>/InhbtBmpStEnbl1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/InhbtBmpStEnbl1_write'
     * */
    Rte_IrvWrite_STFR_PwrOn_InhbtBmpStEnbl1_write_IRV
        (STFR_ac_B.OutportBufferForInhbtBmpStEnbl1_write);

    /* Merge: '<Root>/InhbtTCMCndEnbl1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/InhbtTCMCndEnbl1_write'
     * */
    Rte_IrvWrite_STFR_PwrOn_InhbtTCMCndEnbl1_write_IRV
        (STFR_ac_B.OutportBufferForInhbtTCMCndEnbl1_write);

    /* Merge: '<Root>/KeyOffSt1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/KeyOffSt1_write'
     * */
    Rte_IrvWrite_STFR_PwrOn_KeyOffSt1_write_IRV
        (STFR_ac_B.OutportBufferForKeyOffSt1_write);

    /* Merge: '<Root>/SRAREngOff1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/SRAREngOff1_write'
     * */
    Rte_IrvWrite_STFR_PwrOn_SRAREngOff1_write_IRV
        (STFR_ac_B.OutportBufferForSRAREngOff1_write);

    /* Merge: '<Root>/SRAREngOnRaw1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/SRAREngOnRaw1_write'
     * */
    Rte_IrvWrite_STFR_PwrOn_SRAREngOnRaw1_write_IRV
        (STFR_ac_B.OutportBufferForSRAREngOnRaw1_write);

    /* Merge: '<Root>/STPA_EFAFail1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/STPA_EFAFail1_write'
     * */
    Rte_IrvWrite_STFR_PwrOn_STPA_EFAFail1_write_IRV
        (STFR_ac_B.OutportBufferForSTPA_EFAFail1_write);

    /* Merge: '<Root>/StallDtct1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/StallDtct1_write'
     * */
    Rte_IrvWrite_STFR_PwrOn_StallDtct1_write_IRV
        (STFR_ac_B.OutportBufferForStallDtct1_write);

    /* Merge: '<Root>/TCMCltchAvlbl1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/TCMCltchAvlbl1_write'
     * */
    Rte_IrvWrite_STFR_PwrOn_TCMCltchAvlbl1_write_IRV
        (STFR_ac_B.OutportBufferForTCMCltchAvlbl1_write);

    /* Merge: '<Root>/TCMEMAvlbl1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/TCMEMAvlbl1_write'
     * */
    Rte_IrvWrite_STFR_PwrOn_TCMEMAvlbl1_write_IRV
        (STFR_ac_B.OutportBufferForTCMEMAvlbl1_write);

    /* Merge: '<Root>/TCMHMIEnbl1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/TCMHMIEnbl1_write'
     * */
    Rte_IrvWrite_STFR_PwrOn_TCMHMIEnbl1_write_IRV
        (STFR_ac_B.OutportBufferForTCMHMIEnbl1_write);

    /* Merge: '<Root>/TCMIMAvlbl1_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/TCMIMAvlbl1_write'
     * */
    Rte_IrvWrite_STFR_PwrOn_TCMIMAvlbl1_write_IRV
        (STFR_ac_B.OutportBufferForTCMIMAvlbl1_write);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, STFR_CODE) STFR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/STFR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S371>/VeSTFR_e_StrtStpOvrrd_Out_Init' incorporates:
     *  Constant: '<S371>/Const3'
     */
    STFR_ac_B.OutportBufferForVeSTFR_e_StrtStpOvrrd_Ou = STFR_ac_ConstB.Const3;

    /* SystemInitialize for SignalConversion generated from: '<S371>/VeSTFR_e_StrtType_Out_Init' incorporates:
     *  Constant: '<S371>/Const11'
     */
    STFR_ac_B.OutportBufferForVeSTFR_e_StrtType_Out_In = STFR_ac_ConstB.Const11;

    /* End of SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeSTFR_e_StrtStpOvrrd' incorporates:
     *  Merge: '<Root>/Merge_Outport_3'
     */
    (void)Rte_Write_VeSTFR_e_StrtStpOvrrd_Value(CeSTRR_e_NoOvrrd);

    /* SystemInitialize for Outport: '<Root>/VeSTFR_e_StrtType' incorporates:
     *  Merge: '<Root>/Merge_Outport_11'
     */
    (void)Rte_Write_VeSTFR_e_StrtType_Value(CeSTRR_e_NoAction);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
