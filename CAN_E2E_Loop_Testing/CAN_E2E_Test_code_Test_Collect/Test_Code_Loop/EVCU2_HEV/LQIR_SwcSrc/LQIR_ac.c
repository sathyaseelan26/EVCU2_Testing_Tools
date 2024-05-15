/*
 * File: LQIR_ac.c
 *
 * Code generated for Simulink model 'LQIR_ac'.
 *
 * Model version                  : 9.87
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 14:26:46 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LQIR_ac.h"
#include "look1_iflf_binlcapw.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_LQIR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) HeLQIR_t_MedTEB_dT = 0.01F;/* Referenced by:
                                                                      * '<S102>/Calib'
                                                                      * '<S37>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KaLQIR_K_G1_Kmatrix[2] =
{
    1.74342167F, 0.642237127F
} ;                                    /* Referenced by: '<S46>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KaLQIR_K_G2_Kmatrix[2] =
{
    1.74342167F, 0.642237127F
} ;                                    /* Referenced by: '<S53>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KaLQIR_K_G3_Kmatrix[2] =
{
    1.74342167F, 0.642237127F
} ;                                    /* Referenced by: '<S60>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KaLQIR_K_G4_Kmatrix[2] =
{
    1.74342167F, 0.642237127F
} ;                                    /* Referenced by: '<S67>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KaLQIR_K_M1_Kmatrix[2] =
{
    1.74342167F, 0.642237127F
} ;                                    /* Referenced by: '<S74>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KaLQIR_K_M2_Kmatrix[2] =
{
    1.74342167F, 0.642237127F
} ;                                    /* Referenced by: '<S81>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KaLQIR_K_M3_Kmatrix[2] =
{
    1.74342167F, 0.642237127F
} ;                                    /* Referenced by: '<S88>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KaLQIR_K_N_Kmatrix[2] =
{
    1.74342167F, 0.642237127F
} ;                                    /* Referenced by: '<S95>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_J_G1_Ie = 99.0F;/* Referenced by: '<S47>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_J_G2_Ie = 0.0249821693F;/* Referenced by: '<S54>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_J_G3_Ie = 99.0F;/* Referenced by: '<S61>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_J_G4_Ie = 99.0F;/* Referenced by: '<S68>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_J_M1_Ie = 0.0171503909F;/* Referenced by: '<S75>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_J_M2_Ie = 0.0249821693F;/* Referenced by: '<S82>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_J_M3_Ie = 99.0F;/* Referenced by: '<S89>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_J_N_Ie = 0.0171503909F;/* Referenced by: '<S96>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_G1_EngMdl_A =
    0.731615603F;                      /* Referenced by: '<S48>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_G1_EngMdl_B =
    0.268384367F;                      /* Referenced by: '<S49>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_G1_EngMdl_C = 1.0F;/* Referenced by: '<S50>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_G1_EngMdl_D = 0.0F;/* Referenced by: '<S51>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_G1_Kint = 0.199292824F;/* Referenced by: '<S52>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_G2_EngMdl_A =
    0.731615603F;                      /* Referenced by: '<S55>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_G2_EngMdl_B =
    0.268384367F;                      /* Referenced by: '<S56>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_G2_EngMdl_C = 1.0F;/* Referenced by: '<S57>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_G2_EngMdl_D = 0.0F;/* Referenced by: '<S58>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_G2_Kint = 0.199292824F;/* Referenced by: '<S59>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_G3_EngMdl_A =
    0.731615603F;                      /* Referenced by: '<S62>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_G3_EngMdl_B =
    0.268384367F;                      /* Referenced by: '<S63>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_G3_EngMdl_C = 1.0F;/* Referenced by: '<S64>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_G3_EngMdl_D = 0.0F;/* Referenced by: '<S65>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_G3_Kint = 0.199292824F;/* Referenced by: '<S66>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_G4_EngMdl_A =
    0.731615603F;                      /* Referenced by: '<S69>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_G4_EngMdl_B =
    0.268384367F;                      /* Referenced by: '<S70>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_G4_EngMdl_C = 1.0F;/* Referenced by: '<S71>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_G4_EngMdl_D = 0.0F;/* Referenced by: '<S72>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_G4_Kint = 0.199292824F;/* Referenced by: '<S73>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_M1_EngMdl_A =
    0.731615603F;                      /* Referenced by: '<S76>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_M1_EngMdl_B =
    0.268384367F;                      /* Referenced by: '<S77>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_M1_EngMdl_C = 1.0F;/* Referenced by: '<S78>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_M1_EngMdl_D = 0.0F;/* Referenced by: '<S79>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_M1_Kint = 0.199292824F;/* Referenced by: '<S80>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_M2_EngMdl_A =
    0.731615603F;                      /* Referenced by: '<S83>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_M2_EngMdl_B =
    0.268384367F;                      /* Referenced by: '<S84>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_M2_EngMdl_C = 1.0F;/* Referenced by: '<S85>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_M2_EngMdl_D = 0.0F;/* Referenced by: '<S86>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_M2_Kint = 0.199292824F;/* Referenced by: '<S87>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_M3_EngMdl_A =
    0.731615603F;                      /* Referenced by: '<S90>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_M3_EngMdl_B =
    0.268384367F;                      /* Referenced by: '<S91>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_M3_EngMdl_C = 1.0F;/* Referenced by: '<S92>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_M3_EngMdl_D = 0.0F;/* Referenced by: '<S93>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_M3_Kint = 0.199292824F;/* Referenced by: '<S94>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_N_EngMdl_A = 0.731615603F;/* Referenced by: '<S97>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_N_EngMdl_B = 0.268384367F;/* Referenced by: '<S98>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_N_EngMdl_C = 1.0F;/* Referenced by: '<S99>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_N_EngMdl_D = 0.0F;/* Referenced by: '<S100>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_K_N_Kint = 0.199292824F;/* Referenced by: '<S101>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_M_ItermMax = 9999.0F;/* Referenced by: '<S129>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_M_ItermMin = -9999.0F;/* Referenced by: '<S130>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(boolean, LQIR_VAR_INIT) KeLQIR_b_CmndSaturationActive = 1;/* Referenced by: '<S125>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(boolean, LQIR_VAR_INIT) KeLQIR_b_DisableLQI = 0;/* Referenced by: '<S103>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(boolean, LQIR_VAR_INIT) KeLQIR_b_InactiveOutSel = 0;/* Referenced by: '<S136>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(boolean, LQIR_VAR_INIT) KeLQIR_b_ItermFreezeActive = 1;/* Referenced by: '<S131>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(boolean, LQIR_VAR_INIT) KeLQIR_b_KeepMinMax = 0;/* Referenced by:
                                                                      * '<S8>/Calib'
                                                                      * '<S138>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(boolean, LQIR_VAR_INIT) KeLQIR_b_TiErrorInit = 1;/* Referenced by: '<S108>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(boolean, LQIR_VAR_INIT) KeLQIR_b_TiFastArb = 1;/* Referenced by: '<S149>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KeLQIR_k_TiCmdFilt = 0.7385F;/* Referenced by: '<S38>/Calib' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KtLQIR_K_BackCalcGain[5] =
{
    0.0F, 0.0F, 1.0F, 3.0F, 3.0F
} ;                                    /* Referenced by: '<S39>/Vector' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static volatile CONST(float32, LQIR_VAR_INIT) KxLQIR_K_BackCalcGain[5] =
{
    0.0F, 10.0F, 50.0F, 100.0F, 200.0F
} ;                                    /* Referenced by: '<S39>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_LQIR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_LQIR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_LQIR_1

static VAR(float32, LQIR_VAR_INIT) VeLQIR_J_Ie;/* '<S3>/Merge3' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static VAR(float32, LQIR_VAR_INIT) VeLQIR_K_BackCalcGain;/* '<S3>/Merge6' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static VAR(float32, LQIR_VAR_INIT) VeLQIR_K_EngMdl_A;/* '<S3>/Merge7' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static VAR(float32, LQIR_VAR_INIT) VeLQIR_K_EngMdl_B;/* '<S3>/Merge8' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static VAR(float32, LQIR_VAR_INIT) VeLQIR_K_EngMdl_C;/* '<S3>/Merge9' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static VAR(float32, LQIR_VAR_INIT) VeLQIR_K_EngMdl_D;/* '<S3>/Merge10' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static VAR(float32, LQIR_VAR_INIT) VeLQIR_K_IeOverTstep;/* '<S3>/Merge1' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static VAR(float32, LQIR_VAR_INIT) VeLQIR_K_Kint;/* '<S3>/Merge4' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static VAR(float32, LQIR_VAR_INIT) VeLQIR_K_Kmatrix[2];/* '<S3>/Merge2' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static VAR(float32, LQIR_VAR_INIT) VeLQIR_M_BackCalcLQI;/* '<S120>/Product' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static VAR(float32, LQIR_VAR_INIT) VeLQIR_M_Igain_LQI;/* '<S111>/Product1' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static VAR(float32, LQIR_VAR_INIT) VeLQIR_M_ItermLQI;/* '<S134>/Switch' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static VAR(float32, LQIR_VAR_INIT) VeLQIR_M_PtermLQI;/* '<S111>/Product' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static VAR(float32, LQIR_VAR_INIT) VeLQIR_M_TiDelayModelIC;/* '<S107>/Add' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static VAR(float32, LQIR_VAR_INIT) VeLQIR_M_TiLQI_Raw;/* '<S111>/Add' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static VAR(float32, LQIR_VAR_INIT) VeLQIR_M_TiMinEST_ETRQ_Raw;/* '<S145>/Add1' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static VAR(float32, LQIR_VAR_INIT) VeLQIR_M_TiStateErrorLQI;/* '<S121>/Gain' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static VAR(float32, LQIR_VAR_INIT) VeLQIR_M_Ti_HybCmndArb;/* '<S144>/Switch2' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static VAR(boolean, LQIR_VAR_INIT) VeLQIR_b_CtlrInit;/* '<Root>/DSM_1' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static VAR(boolean, LQIR_VAR_INIT) VeLQIR_b_DisableAll;/* '<S9>/Switch' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static VAR(float32, LQIR_VAR_INIT) VeLQIR_k_TiCmdFilt;/* '<S3>/Merge5' */

#endif

#if Rte_SysCon_Variant_LQIR_1

static VAR(float32, LQIR_VAR_INIT) VeLQIR_t_Tstep;/* '<S3>/Merge11' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_LQIR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_LQIR
#include "MemMap.h"

VAR(B_LQIR_ac_T, LQIR_VAR_INIT) LQIR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_LQIR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_LQIR
#include "MemMap.h"

VAR(DW_LQIR_ac_T, LQIR_VAR_INIT) LQIR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_LQIR
#include "MemMap.h"

/* Model step function for TID1 */
#if Rte_SysCon_Variant_LQIR_1

FUNC(void, LQIR_CODE) LQIR_MedTEB2(void) /* Explicit Task: MedTEB2 */
{

#if Rte_SysCon_Variant_LQIR_1

    boolean tmpRead;

#endif

#if Rte_SysCon_Variant_LQIR_1

    boolean tmpRead_0;

#endif

#if Rte_SysCon_Variant_LQIR_1

    float32 rtb_TmpSignalConversionAtVeHS_e;

#endif

#if Rte_SysCon_Variant_LQIR_1

    float32 rtb_TmpSignalConversionAtVeHSER;

#endif

#if Rte_SysCon_Variant_LQIR_1

    float32 rtb_Product1_n;

#endif

#if Rte_SysCon_Variant_LQIR_1

    float32 rtb_Add3_d;

#endif

#if Rte_SysCon_Variant_LQIR_1

    float32 rtb_Product;

#endif

#if Rte_SysCon_Variant_LQIR_1

    float32 rtb_TmpSignalConversionAtVeES_g;

#endif

#if Rte_SysCon_Variant_LQIR_1

    float32 rtb_TmpSignalConversionAtVeTRAR;

#endif

#if Rte_SysCon_Variant_LQIR_1

    float32 rtb_Switch1;

#endif

#if Rte_SysCon_Variant_LQIR_1

    float32 rtb_TmpSignalConversionAtVeESSR;

#endif

#if Rte_SysCon_Variant_LQIR_1

    float32 rtb_Sum1_n;

#endif

#if Rte_SysCon_Variant_LQIR_1

    float32 rtb_Switch_lj;

#endif

#if Rte_SysCon_Variant_LQIR_1

    float32 rtb_Sum2;

#endif

#if Rte_SysCon_Variant_LQIR_1

    TeHSER_e_RngEqnSel rtb_TmpSignalConversionAtVeHS_h;

#endif

#if Rte_SysCon_Variant_LQIR_1

    TeTRAR_e_HybCmndEngTorqRespTyp rtb_TmpSignalConversionAtVeTR_n;

#endif

#if Rte_SysCon_Variant_LQIR_1

    float32 Merge1;

#endif

#if Rte_SysCon_Variant_LQIR_1

    boolean Gain_k4;

#endif

#if Rte_SysCon_Variant_LQIR_1

    float32 Gain_h;

#endif

#if Rte_SysCon_Variant_LQIR_1

    float32 Gain_a;

#endif

#if Rte_SysCon_Variant_LQIR_1

    sint32 i;

#endif

#if Rte_SysCon_Variant_LQIR_1

    float32 tmp[2];

#endif

#if Rte_SysCon_Variant_LQIR_1

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' */
    /* Outputs for Function Call SubSystem: '<Root>/LQIR_MedTEB2' */
    /* SignalConversion generated from: '<S1>/VeTRAR_M_HybCmndEngTorqPrdtd' incorporates:
     *  Inport: '<Root>/VeTRAR_M_HybCmndEngTorqPrdtd'
     */
    (void)Rte_Read_VeTRAR_M_HybCmndEngTorqPrdtd_Value
        (&rtb_TmpSignalConversionAtVeTRAR);

    /* SignalConversion generated from: '<S1>/VeTRAR_e_HybCmndEngTorqRespTyp' incorporates:
     *  Inport: '<Root>/VeTRAR_e_HybCmndEngTorqRespTyp'
     */
    (void)Rte_Read_VeTRAR_e_HybCmndEngTorqRespTyp_Value
        (&rtb_TmpSignalConversionAtVeTR_n);

    /* SignalConversion generated from: '<S1>/VeESSR_r_MaxSparkAuthority' incorporates:
     *  Inport: '<Root>/VeESSR_r_MaxSparkAuthority'
     */
    (void)Rte_Read_VeESSR_r_MaxSparkAuthority_Value
        (&rtb_TmpSignalConversionAtVeESSR);

    /* SignalConversion generated from: '<S1>/VeESSR_M_EngineLosses' incorporates:
     *  Inport: '<Root>/VeESSR_M_EngineLosses'
     */
    (void)Rte_Read_VeESSR_M_EngineLosses_Value(&rtb_TmpSignalConversionAtVeES_g);

    /* SignalConversion generated from: '<S1>/VeHSER_n_NiPred' incorporates:
     *  Inport: '<Root>/VeHSER_n_NiPred'
     */
    (void)Rte_Read_VeHSER_n_NiPred_Value(&rtb_TmpSignalConversionAtVeHSER);

    /* SignalConversion generated from: '<S1>/VeHSER_dn_InputAccelProfile' incorporates:
     *  Inport: '<Root>/VeHSER_dn_InputAccelProfile'
     */
    (void)Rte_Read_VeHSER_dn_InputAccelProfile_Value
        (&rtb_TmpSignalConversionAtVeHS_e);

    /* SignalConversion generated from: '<S1>/VeHSER_e_RngEqnSel' incorporates:
     *  Inport: '<Root>/VeHSER_e_RngEqnSel'
     */
    (void)Rte_Read_VeHSER_e_RngEqnSel_Value(&rtb_TmpSignalConversionAtVeHS_h);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/LQIC_CalSelect'
     */
    /* Switch: '<S9>/Switch' incorporates:
     *  Constant: '<S103>/Calib'
     *  Inport: '<Root>/VeENGR_b_EngCombustionCmnd'
     *  Inport: '<Root>/VeESSR_b_HCPFuelDisable'
     *  Inport: '<Root>/VeHSER_b_DisablNiClsdLoopCntrl'
     */
    if (KeLQIR_b_DisableLQI)
    {
        /* Switch: '<S9>/Switch' incorporates:
         *  Constant: '<S9>/TRUE Constant'
         */
        VeLQIR_b_DisableAll = true;
    }
    else
    {
        (void)Rte_Read_VeENGR_b_EngCombustionCmnd_Value(&Gain_k4);
        (void)Rte_Read_VeESSR_b_HCPFuelDisable_Value(&tmpRead_0);
        (void)Rte_Read_VeHSER_b_DisablNiClsdLoopCntrl_Value(&tmpRead);

        /* Switch: '<S9>/Switch' incorporates:
         *  DataStoreRead: '<S9>/Dsr_CtlrInit'
         *  Inport: '<Root>/VeENGR_b_EngCombustionCmnd'
         *  Inport: '<Root>/VeESSR_b_HCPFuelDisable'
         *  Inport: '<Root>/VeHSER_b_DisablNiClsdLoopCntrl'
         *  Logic: '<S9>/Logical Operator1'
         *  Logic: '<S9>/Logical Operator2'
         *  Logic: '<S9>/Logical Operator3'
         *  Logic: '<S9>/Logical Operator5'
         *  Logic: '<S9>/or1'
         *  Logic: '<S9>/or2'
         */
        VeLQIR_b_DisableAll = ((tmpRead || (tmpRead_0 && (!Gain_k4))) ||
                               (VeLQIR_b_CtlrInit));
    }

    /* End of Switch: '<S9>/Switch' */

    /* Switch: '<S3>/Switch' incorporates:
     *  Constant: '<S8>/Calib'
     */
    Gain_k4 = !KeLQIR_b_KeepMinMax;

    /* If: '<S3>/If' incorporates:
     *  Constant: '<S23>/Constant'
     *  Constant: '<S24>/Constant'
     *  Constant: '<S25>/Constant'
     *  Constant: '<S26>/Constant'
     *  Constant: '<S27>/Constant'
     *  Constant: '<S28>/Constant'
     *  Constant: '<S29>/Constant'
     *  Constant: '<S30>/Constant'
     *  Constant: '<S31>/Constant'
     *  Constant: '<S32>/Constant'
     *  Gain: '<S104>/Gain'
     *  If: '<S21>/If'
     *  Inport: '<Root>/VeHSER_dn_NiDotMaxLm'
     *  Inport: '<Root>/VeHSER_dn_NiDotMinLm'
     *  Logic: '<S21>/Logical1'
     *  Logic: '<S21>/Logical2'
     *  RelationalOperator: '<S21>/Comparison1'
     *  RelationalOperator: '<S21>/Comparison10'
     *  RelationalOperator: '<S21>/Comparison2'
     *  RelationalOperator: '<S21>/Comparison3'
     *  RelationalOperator: '<S21>/Comparison4'
     *  RelationalOperator: '<S21>/Comparison5'
     *  RelationalOperator: '<S21>/Comparison6'
     *  RelationalOperator: '<S21>/Comparison7'
     *  RelationalOperator: '<S21>/Comparison8'
     *  RelationalOperator: '<S21>/Comparison9'
     */
    if (Gain_k4 && (VeLQIR_b_DisableAll))
    {
        /* Outputs for IfAction SubSystem: '<S3>/Calibrations_Inactive' incorporates:
         *  ActionPort: '<S7>/Action Port'
         */
        /* Merge: '<S3>/Merge3' incorporates:
         *  Constant: '<S7>/Constant'
         *  SignalConversion generated from: '<S7>/VeLQIR_J_Ie'
         */
        VeLQIR_J_Ie = 1.0F;

        /* Merge: '<S3>/Merge1' incorporates:
         *  Constant: '<S7>/Constant1'
         *  SignalConversion generated from: '<S7>/VeLQIR_K_IeOverTstep'
         */
        VeLQIR_K_IeOverTstep = 0.0F;
        for (i = 0; i < 2; i++)
        {
            /* Merge: '<S3>/Merge2' incorporates:
             *  Reshape: '<S7>/Reshape2'
             */
            VeLQIR_K_Kmatrix[(i)] = 0.0F;
        }

        /* Merge: '<S3>/Merge4' incorporates:
         *  Constant: '<S7>/Constant2'
         *  SignalConversion generated from: '<S7>/VeLQIR_K_Kint'
         */
        VeLQIR_K_Kint = 0.0F;

        /* Merge: '<S3>/Merge5' incorporates:
         *  Constant: '<S7>/Constant3'
         *  SignalConversion generated from: '<S7>/VeLQIR_k_TiCmdFilt'
         */
        VeLQIR_k_TiCmdFilt = 0.0F;

        /* Merge: '<S3>/Merge6' incorporates:
         *  Constant: '<S7>/Constant4'
         *  SignalConversion generated from: '<S7>/VeLQIR_K_BackCalcGain'
         */
        VeLQIR_K_BackCalcGain = 0.0F;

        /* Merge: '<S3>/Merge7' incorporates:
         *  Constant: '<S7>/Constant9'
         *  SignalConversion generated from: '<S7>/VeLQIR_K_EngMdl_A'
         */
        VeLQIR_K_EngMdl_A = 0.0F;

        /* Merge: '<S3>/Merge8' incorporates:
         *  Constant: '<S7>/Constant7'
         *  SignalConversion generated from: '<S7>/VeLQIR_K_EngMdl_B'
         */
        VeLQIR_K_EngMdl_B = 0.0F;

        /* Merge: '<S3>/Merge9' incorporates:
         *  Constant: '<S7>/Constant5'
         *  SignalConversion generated from: '<S7>/VeLQIR_K_EngMdl_C'
         */
        VeLQIR_K_EngMdl_C = 0.0F;

        /* Merge: '<S3>/Merge10' incorporates:
         *  Constant: '<S7>/Constant6'
         *  SignalConversion generated from: '<S7>/VeLQIR_K_EngMdl_D'
         */
        VeLQIR_K_EngMdl_D = 0.0F;

        /* Merge: '<S3>/Merge11' incorporates:
         *  Constant: '<S102>/Calib'
         *  SignalConversion generated from: '<S7>/Tstep'
         */
        VeLQIR_t_Tstep = HeLQIR_t_MedTEB_dT;

        /* End of Outputs for SubSystem: '<S3>/Calibrations_Inactive' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S3>/Calibrations_Active' incorporates:
         *  ActionPort: '<S6>/Action Port'
         */
        if ((((uint32)rtb_TmpSignalConversionAtVeHS_h) == CeHSER_e_UseNeutralEqn)
            || (((uint32)rtb_TmpSignalConversionAtVeHS_h) ==
                CeHSER_e_UseNeutralEqn_2))
        {
            /* Outputs for IfAction SubSystem: '<S21>/Neutral' incorporates:
             *  ActionPort: '<S43>/Action Port'
             */
            /* If: '<S21>/If' incorporates:
             *  Constant: '<S100>/Calib'
             *  Constant: '<S101>/Calib'
             *  Constant: '<S96>/Calib'
             *  Constant: '<S97>/Calib'
             *  Constant: '<S98>/Calib'
             *  Constant: '<S99>/Calib'
             *  Merge: '<S21>/Merge3'
             *  Merge: '<S3>/Merge10'
             *  Merge: '<S3>/Merge4'
             *  Merge: '<S3>/Merge7'
             *  Merge: '<S3>/Merge8'
             *  Merge: '<S3>/Merge9'
             *  SignalConversion generated from: '<S43>/N_LQIR_J_Ie'
             */
            LQIR_ac_B.Merge3_c = KeLQIR_J_N_Ie;
            for (i = 0; i < 2; i++)
            {
                /* Merge: '<S21>/Merge1' incorporates:
                 *  Constant: '<S95>/Calib'
                 */
                LQIR_ac_B.Merge1_c[i] = KaLQIR_K_N_Kmatrix[(i)];
            }

            VeLQIR_K_Kint = KeLQIR_K_N_Kint;
            VeLQIR_K_EngMdl_A = KeLQIR_K_N_EngMdl_A;
            VeLQIR_K_EngMdl_B = KeLQIR_K_N_EngMdl_B;
            VeLQIR_K_EngMdl_C = KeLQIR_K_N_EngMdl_C;
            VeLQIR_K_EngMdl_D = KeLQIR_K_N_EngMdl_D;

            /* End of Outputs for SubSystem: '<S21>/Neutral' */
        }
        else if (((uint32)rtb_TmpSignalConversionAtVeHS_h) == CeHSER_e_UseM1Eqn)
        {
            /* Outputs for IfAction SubSystem: '<S21>/M1' incorporates:
             *  ActionPort: '<S40>/Action Port'
             */
            /* If: '<S21>/If' incorporates:
             *  Constant: '<S75>/Calib'
             *  Constant: '<S76>/Calib'
             *  Constant: '<S77>/Calib'
             *  Constant: '<S78>/Calib'
             *  Constant: '<S79>/Calib'
             *  Constant: '<S80>/Calib'
             *  Merge: '<S21>/Merge3'
             *  Merge: '<S3>/Merge10'
             *  Merge: '<S3>/Merge4'
             *  Merge: '<S3>/Merge7'
             *  Merge: '<S3>/Merge8'
             *  Merge: '<S3>/Merge9'
             *  SignalConversion generated from: '<S40>/M1_LQIR_J_Ie'
             */
            LQIR_ac_B.Merge3_c = KeLQIR_J_M1_Ie;
            for (i = 0; i < 2; i++)
            {
                /* Merge: '<S21>/Merge1' incorporates:
                 *  Constant: '<S74>/Calib'
                 */
                LQIR_ac_B.Merge1_c[i] = KaLQIR_K_M1_Kmatrix[(i)];
            }

            VeLQIR_K_Kint = KeLQIR_K_M1_Kint;
            VeLQIR_K_EngMdl_A = KeLQIR_K_M1_EngMdl_A;
            VeLQIR_K_EngMdl_B = KeLQIR_K_M1_EngMdl_B;
            VeLQIR_K_EngMdl_C = KeLQIR_K_M1_EngMdl_C;
            VeLQIR_K_EngMdl_D = KeLQIR_K_M1_EngMdl_D;

            /* End of Outputs for SubSystem: '<S21>/M1' */
        }
        else if ((((uint32)rtb_TmpSignalConversionAtVeHS_h) == CeHSER_e_UseM2Eqn)
                 || (((uint32)rtb_TmpSignalConversionAtVeHS_h) ==
                     CeHSER_e_UseM2Eqn_2))
        {
            /* Outputs for IfAction SubSystem: '<S21>/M2' incorporates:
             *  ActionPort: '<S41>/Action Port'
             */
            /* If: '<S21>/If' incorporates:
             *  Constant: '<S82>/Calib'
             *  Constant: '<S83>/Calib'
             *  Constant: '<S84>/Calib'
             *  Constant: '<S85>/Calib'
             *  Constant: '<S86>/Calib'
             *  Constant: '<S87>/Calib'
             *  Merge: '<S21>/Merge3'
             *  Merge: '<S3>/Merge10'
             *  Merge: '<S3>/Merge4'
             *  Merge: '<S3>/Merge7'
             *  Merge: '<S3>/Merge8'
             *  Merge: '<S3>/Merge9'
             *  SignalConversion generated from: '<S41>/M2_LQIR_J_Ie'
             */
            LQIR_ac_B.Merge3_c = KeLQIR_J_M2_Ie;
            for (i = 0; i < 2; i++)
            {
                /* Merge: '<S21>/Merge1' incorporates:
                 *  Constant: '<S81>/Calib'
                 */
                LQIR_ac_B.Merge1_c[i] = KaLQIR_K_M2_Kmatrix[(i)];
            }

            VeLQIR_K_Kint = KeLQIR_K_M2_Kint;
            VeLQIR_K_EngMdl_A = KeLQIR_K_M2_EngMdl_A;
            VeLQIR_K_EngMdl_B = KeLQIR_K_M2_EngMdl_B;
            VeLQIR_K_EngMdl_C = KeLQIR_K_M2_EngMdl_C;
            VeLQIR_K_EngMdl_D = KeLQIR_K_M2_EngMdl_D;

            /* End of Outputs for SubSystem: '<S21>/M2' */
        }
        else if (((uint32)rtb_TmpSignalConversionAtVeHS_h) == CeHSER_e_UseM3Eqn)
        {
            /* Outputs for IfAction SubSystem: '<S21>/M3' incorporates:
             *  ActionPort: '<S42>/Action Port'
             */
            /* If: '<S21>/If' incorporates:
             *  Constant: '<S89>/Calib'
             *  Constant: '<S90>/Calib'
             *  Constant: '<S91>/Calib'
             *  Constant: '<S92>/Calib'
             *  Constant: '<S93>/Calib'
             *  Constant: '<S94>/Calib'
             *  Merge: '<S21>/Merge3'
             *  Merge: '<S3>/Merge10'
             *  Merge: '<S3>/Merge4'
             *  Merge: '<S3>/Merge7'
             *  Merge: '<S3>/Merge8'
             *  Merge: '<S3>/Merge9'
             *  SignalConversion generated from: '<S42>/M3_LQIR_J_Ie'
             */
            LQIR_ac_B.Merge3_c = KeLQIR_J_M3_Ie;
            for (i = 0; i < 2; i++)
            {
                /* Merge: '<S21>/Merge1' incorporates:
                 *  Constant: '<S88>/Calib'
                 */
                LQIR_ac_B.Merge1_c[i] = KaLQIR_K_M3_Kmatrix[(i)];
            }

            VeLQIR_K_Kint = KeLQIR_K_M3_Kint;
            VeLQIR_K_EngMdl_A = KeLQIR_K_M3_EngMdl_A;
            VeLQIR_K_EngMdl_B = KeLQIR_K_M3_EngMdl_B;
            VeLQIR_K_EngMdl_C = KeLQIR_K_M3_EngMdl_C;
            VeLQIR_K_EngMdl_D = KeLQIR_K_M3_EngMdl_D;

            /* End of Outputs for SubSystem: '<S21>/M3' */
        }
        else if (((uint32)rtb_TmpSignalConversionAtVeHS_h) == CeHSER_e_UseG1Eqn)
        {
            /* Outputs for IfAction SubSystem: '<S21>/G1' incorporates:
             *  ActionPort: '<S33>/Action Port'
             */
            /* If: '<S21>/If' incorporates:
             *  Constant: '<S47>/Calib'
             *  Constant: '<S48>/Calib'
             *  Constant: '<S49>/Calib'
             *  Constant: '<S50>/Calib'
             *  Constant: '<S51>/Calib'
             *  Constant: '<S52>/Calib'
             *  Merge: '<S21>/Merge3'
             *  Merge: '<S3>/Merge10'
             *  Merge: '<S3>/Merge4'
             *  Merge: '<S3>/Merge7'
             *  Merge: '<S3>/Merge8'
             *  Merge: '<S3>/Merge9'
             *  SignalConversion generated from: '<S33>/G1_LQIR_J_Ie'
             */
            LQIR_ac_B.Merge3_c = KeLQIR_J_G1_Ie;
            for (i = 0; i < 2; i++)
            {
                /* Merge: '<S21>/Merge1' incorporates:
                 *  Constant: '<S46>/Calib'
                 */
                LQIR_ac_B.Merge1_c[i] = KaLQIR_K_G1_Kmatrix[(i)];
            }

            VeLQIR_K_Kint = KeLQIR_K_G1_Kint;
            VeLQIR_K_EngMdl_A = KeLQIR_K_G1_EngMdl_A;
            VeLQIR_K_EngMdl_B = KeLQIR_K_G1_EngMdl_B;
            VeLQIR_K_EngMdl_C = KeLQIR_K_G1_EngMdl_C;
            VeLQIR_K_EngMdl_D = KeLQIR_K_G1_EngMdl_D;

            /* End of Outputs for SubSystem: '<S21>/G1' */
        }
        else if (((uint32)rtb_TmpSignalConversionAtVeHS_h) == CeHSER_e_UseG2Eqn)
        {
            /* Outputs for IfAction SubSystem: '<S21>/G2' incorporates:
             *  ActionPort: '<S34>/Action Port'
             */
            /* If: '<S21>/If' incorporates:
             *  Constant: '<S54>/Calib'
             *  Constant: '<S55>/Calib'
             *  Constant: '<S56>/Calib'
             *  Constant: '<S57>/Calib'
             *  Constant: '<S58>/Calib'
             *  Constant: '<S59>/Calib'
             *  Merge: '<S21>/Merge3'
             *  Merge: '<S3>/Merge10'
             *  Merge: '<S3>/Merge4'
             *  Merge: '<S3>/Merge7'
             *  Merge: '<S3>/Merge8'
             *  Merge: '<S3>/Merge9'
             *  SignalConversion generated from: '<S34>/G2_LQIR_J_Ie'
             */
            LQIR_ac_B.Merge3_c = KeLQIR_J_G2_Ie;
            for (i = 0; i < 2; i++)
            {
                /* Merge: '<S21>/Merge1' incorporates:
                 *  Constant: '<S53>/Calib'
                 */
                LQIR_ac_B.Merge1_c[i] = KaLQIR_K_G2_Kmatrix[(i)];
            }

            VeLQIR_K_Kint = KeLQIR_K_G2_Kint;
            VeLQIR_K_EngMdl_A = KeLQIR_K_G2_EngMdl_A;
            VeLQIR_K_EngMdl_B = KeLQIR_K_G2_EngMdl_B;
            VeLQIR_K_EngMdl_C = KeLQIR_K_G2_EngMdl_C;
            VeLQIR_K_EngMdl_D = KeLQIR_K_G2_EngMdl_D;

            /* End of Outputs for SubSystem: '<S21>/G2' */
        }
        else if (((uint32)rtb_TmpSignalConversionAtVeHS_h) == CeHSER_e_UseG3Eqn)
        {
            /* Outputs for IfAction SubSystem: '<S21>/G3' incorporates:
             *  ActionPort: '<S35>/Action Port'
             */
            /* If: '<S21>/If' incorporates:
             *  Constant: '<S61>/Calib'
             *  Constant: '<S62>/Calib'
             *  Constant: '<S63>/Calib'
             *  Constant: '<S64>/Calib'
             *  Constant: '<S65>/Calib'
             *  Constant: '<S66>/Calib'
             *  Merge: '<S21>/Merge3'
             *  Merge: '<S3>/Merge10'
             *  Merge: '<S3>/Merge4'
             *  Merge: '<S3>/Merge7'
             *  Merge: '<S3>/Merge8'
             *  Merge: '<S3>/Merge9'
             *  SignalConversion generated from: '<S35>/G3_LQIR_J_Ie'
             */
            LQIR_ac_B.Merge3_c = KeLQIR_J_G3_Ie;
            for (i = 0; i < 2; i++)
            {
                /* Merge: '<S21>/Merge1' incorporates:
                 *  Constant: '<S60>/Calib'
                 */
                LQIR_ac_B.Merge1_c[i] = KaLQIR_K_G3_Kmatrix[(i)];
            }

            VeLQIR_K_Kint = KeLQIR_K_G3_Kint;
            VeLQIR_K_EngMdl_A = KeLQIR_K_G3_EngMdl_A;
            VeLQIR_K_EngMdl_B = KeLQIR_K_G3_EngMdl_B;
            VeLQIR_K_EngMdl_C = KeLQIR_K_G3_EngMdl_C;
            VeLQIR_K_EngMdl_D = KeLQIR_K_G3_EngMdl_D;

            /* End of Outputs for SubSystem: '<S21>/G3' */
        }
        else
        {
            if (((uint32)rtb_TmpSignalConversionAtVeHS_h) == CeHSER_e_UseG4Eqn)
            {
                /* Outputs for IfAction SubSystem: '<S21>/G4' incorporates:
                 *  ActionPort: '<S36>/Action Port'
                 */
                /* If: '<S21>/If' incorporates:
                 *  Constant: '<S68>/Calib'
                 *  Constant: '<S69>/Calib'
                 *  Constant: '<S70>/Calib'
                 *  Constant: '<S71>/Calib'
                 *  Constant: '<S72>/Calib'
                 *  Constant: '<S73>/Calib'
                 *  Merge: '<S21>/Merge3'
                 *  Merge: '<S3>/Merge10'
                 *  Merge: '<S3>/Merge4'
                 *  Merge: '<S3>/Merge7'
                 *  Merge: '<S3>/Merge8'
                 *  Merge: '<S3>/Merge9'
                 *  SignalConversion generated from: '<S36>/G4_LQIR_J_Ie'
                 */
                LQIR_ac_B.Merge3_c = KeLQIR_J_G4_Ie;
                for (i = 0; i < 2; i++)
                {
                    /* Merge: '<S21>/Merge1' incorporates:
                     *  Constant: '<S67>/Calib'
                     */
                    LQIR_ac_B.Merge1_c[i] = KaLQIR_K_G4_Kmatrix[(i)];
                }

                VeLQIR_K_Kint = KeLQIR_K_G4_Kint;
                VeLQIR_K_EngMdl_A = KeLQIR_K_G4_EngMdl_A;
                VeLQIR_K_EngMdl_B = KeLQIR_K_G4_EngMdl_B;
                VeLQIR_K_EngMdl_C = KeLQIR_K_G4_EngMdl_C;
                VeLQIR_K_EngMdl_D = KeLQIR_K_G4_EngMdl_D;

                /* End of Outputs for SubSystem: '<S21>/G4' */
            }
        }

        /* End of Outputs for SubSystem: '<S3>/Calibrations_Active' */
        (void)Rte_Read_VeHSER_dn_NiDotMinLm_Value(&Gain_h);
        (void)Rte_Read_VeHSER_dn_NiDotMaxLm_Value(&Gain_a);

        /* Outputs for IfAction SubSystem: '<S3>/Calibrations_Active' incorporates:
         *  ActionPort: '<S6>/Action Port'
         */
        /* Merge: '<S3>/Merge1' incorporates:
         *  Constant: '<S23>/Constant'
         *  Constant: '<S24>/Constant'
         *  Constant: '<S25>/Constant'
         *  Constant: '<S26>/Constant'
         *  Constant: '<S27>/Constant'
         *  Constant: '<S28>/Constant'
         *  Constant: '<S30>/Constant'
         *  Constant: '<S32>/Constant'
         *  Constant: '<S37>/Calib'
         *  If: '<S21>/If'
         *  Inport: '<Root>/VeHSER_dn_NiDotMaxLm'
         *  Inport: '<Root>/VeHSER_dn_NiDotMinLm'
         *  Logic: '<S21>/Logical2'
         *  Product: '<S21>/Divide'
         *  RelationalOperator: '<S21>/Comparison10'
         *  RelationalOperator: '<S21>/Comparison2'
         *  RelationalOperator: '<S21>/Comparison3'
         *  RelationalOperator: '<S21>/Comparison5'
         *  RelationalOperator: '<S21>/Comparison6'
         *  RelationalOperator: '<S21>/Comparison7'
         *  RelationalOperator: '<S21>/Comparison8'
         *  RelationalOperator: '<S21>/Comparison9'
         */
        VeLQIR_K_IeOverTstep = LQIR_ac_B.Merge3_c / HeLQIR_t_MedTEB_dT;
        for (i = 0; i < 2; i++)
        {
            /* Merge: '<S3>/Merge2' incorporates:
             *  Reshape: '<S21>/Reshape2'
             */
            VeLQIR_K_Kmatrix[(i)] = LQIR_ac_B.Merge1_c[i];
        }

        /* Merge: '<S3>/Merge3' incorporates:
         *  Gain: '<S44>/Gain'
         */
        VeLQIR_J_Ie = LQIR_ac_B.Merge3_c;

        /* Merge: '<S3>/Merge11' incorporates:
         *  Constant: '<S37>/Calib'
         *  Gain: '<S45>/Gain'
         */
        VeLQIR_t_Tstep = HeLQIR_t_MedTEB_dT;

        /* Merge: '<S3>/Merge6' incorporates:
         *  Lookup_n-D: '<S39>/Vector'
         *  MinMax: '<S22>/MinMax'
         *  Sum: '<S22>/Add'
         *  Sum: '<S22>/Add1'
         */
        VeLQIR_K_BackCalcGain = look1_iflf_binlcapw(fminf(Gain_a -
            rtb_TmpSignalConversionAtVeHS_e, rtb_TmpSignalConversionAtVeHS_e -
            Gain_h), ((const float32 *)&(KxLQIR_K_BackCalcGain[0])), ((const
            float32 *)&(KtLQIR_K_BackCalcGain[0])), 4U);

        /* Merge: '<S3>/Merge5' incorporates:
         *  Constant: '<S38>/Calib'
         *  SignalConversion generated from: '<S6>/VeLQIR_k_TiCmdFilt'
         */
        VeLQIR_k_TiCmdFilt = KeLQIR_k_TiCmdFilt;

        /* End of Outputs for SubSystem: '<S3>/Calibrations_Active' */
    }

    /* End of If: '<S3>/If' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/LQIC_Controller'
     */
    /* DataStoreWrite: '<S4>/Dsw_CtlrInit' incorporates:
     *  Constant: '<S4>/FALSE Constant'
     */
    VeLQIR_b_CtlrInit = false;

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/LQIC_CalSelect'
     */
    /* If: '<S4>/If' incorporates:
     *  Gain: '<S104>/Gain'
     *  Inport: '<Root>/VeETQR_M_EngTrqActual'
     *  Inport: '<Root>/VeETQR_M_EngTrqAirflow'
     *  Inport: '<Root>/VeHSER_n_InputSpeedProfile'
     */
    if (VeLQIR_b_DisableAll)
    {
        /* Outputs for IfAction SubSystem: '<S4>/LQI_Inactive' incorporates:
         *  ActionPort: '<S106>/Action Port'
         */
        /* Product: '<S106>/Product' incorporates:
         *  Gain: '<S11>/Gain'
         *  Sum: '<S106>/Sum1'
         *  UnitDelay generated from: '<S106>/Unit Delay'
         */
        rtb_Sum1_n = (rtb_TmpSignalConversionAtVeHSER -
                      LQIR_ac_DW.UnitDelay_1_DSTATE_j) * VeLQIR_K_IeOverTstep;

        /* Switch: '<S106>/Switch' incorporates:
         *  Constant: '<S136>/Calib'
         *  Switch: '<S106>/Switch1'
         *  Switch: '<S106>/Switch2'
         *  Switch: '<S106>/Switch3'
         */
        if (KeLQIR_b_InactiveOutSel)
        {
            /* Merge: '<S4>/Merge4' */
            rtb_Sum2 = rtb_Sum1_n;

            /* Outputs for Atomic SubSystem: '<S106>/Protected Division' */
            /* Switch: '<S137>/Switch1' incorporates:
             *  Constant: '<S137>/Constant Value'
             *  Constant: '<S137>/Constant Value1'
             *  Constant: '<S137>/Constant Value2'
             *  Constant: '<S137>/Constant Value3'
             *  Gain: '<S10>/Gain'
             *  Logic: '<S137>/AND'
             *  RelationalOperator: '<S137>/Greater Than or Equal '
             *  RelationalOperator: '<S137>/Greater Than or Equal 1'
             *  RelationalOperator: '<S137>/Not Equal'
             *  RelationalOperator: '<S137>/Not Equal1'
             *  Switch: '<S137>/Switch2'
             *  Switch: '<S137>/Switch3'
             */
            if ((rtb_Sum1_n != 0.0F) && (VeLQIR_J_Ie != 0.0F))
            {
                /* Merge: '<S4>/Merge2' incorporates:
                 *  Product: '<S137>/Division'
                 *  Switch: '<S137>/Switch1'
                 */
                rtb_Product = rtb_Sum1_n / VeLQIR_J_Ie;
            }
            else if (rtb_Sum1_n > 0.0F)
            {
                /* Switch: '<S137>/Switch2' incorporates:
                 *  Constant: '<S137>/MAXFLOAT'
                 *  Merge: '<S4>/Merge2'
                 */
                rtb_Product = 3.402823466E+38F;
            }
            else if (rtb_Sum1_n < 0.0F)
            {
                /* Switch: '<S137>/Switch3' incorporates:
                 *  Constant: '<S137>/MINFLOAT'
                 *  Merge: '<S4>/Merge2'
                 *  Switch: '<S137>/Switch2'
                 */
                rtb_Product = -3.402823466E+38F;
            }
            else
            {
                /* Merge: '<S4>/Merge2' incorporates:
                 *  Constant: '<S137>/Constant Value4'
                 *  Switch: '<S137>/Switch2'
                 *  Switch: '<S137>/Switch3'
                 */
                rtb_Product = 0.0F;
            }

            /* End of Switch: '<S137>/Switch1' */
            /* End of Outputs for SubSystem: '<S106>/Protected Division' */

            /* Merge: '<S4>/Merge1' */
            rtb_TmpSignalConversionAtVeHS_e = rtb_Sum1_n;

            /* Merge: '<S4>/Merge3' */
            rtb_Product1_n = rtb_Sum1_n;
        }
        else
        {
            /* Merge: '<S4>/Merge4' incorporates:
             *  Constant: '<S106>/Constant4'
             */
            rtb_Sum2 = 0.0F;

            /* Merge: '<S4>/Merge2' incorporates:
             *  Constant: '<S106>/Constant3'
             */
            rtb_Product = 0.0F;

            /* Merge: '<S4>/Merge1' incorporates:
             *  Constant: '<S106>/Constant2'
             */
            rtb_TmpSignalConversionAtVeHS_e = 0.0F;

            /* Merge: '<S4>/Merge3' incorporates:
             *  Constant: '<S106>/Constant1'
             */
            rtb_Product1_n = 0.0F;
        }

        /* End of Switch: '<S106>/Switch' */

        /* Merge: '<S4>/Merge5' incorporates:
         *  Constant: '<S106>/Constant5'
         *  SignalConversion generated from: '<S106>/VeLQIR_n_NiStateErrorLQI'
         */
        Gain_h = 0.0F;

        /* Update for UnitDelay generated from: '<S106>/Unit Delay' */
        LQIR_ac_DW.UnitDelay_1_DSTATE_j = rtb_TmpSignalConversionAtVeHSER;

        /* End of Outputs for SubSystem: '<S4>/LQI_Inactive' */
    }
    else
    {
        (void)Rte_Read_VeETQR_M_EngTrqAirflow_Value(&rtb_Product);
        (void)Rte_Read_VeETQR_M_EngTrqActual_Value(&rtb_Add3_d);

        /* Outputs for IfAction SubSystem: '<S4>/LQI_Active' incorporates:
         *  ActionPort: '<S105>/Action Port'
         */
        /* Sum: '<S107>/Add' incorporates:
         *  Constant: '<S107>/Constant Value'
         *  Inport: '<Root>/VeETQR_M_EngTrqActual'
         *  Inport: '<Root>/VeETQR_M_EngTrqAirflow'
         *  MinMax: '<S107>/MinMax'
         */
        VeLQIR_M_TiDelayModelIC = rtb_Product - fmaxf(rtb_Add3_d, 0.0F);

        /* Switch generated from: '<S135>/Switch1' incorporates:
         *  UnitDelay generated from: '<S135>/Unit Delay'
         *  UnitDelay: '<S4>/Unit Delay'
         */
        if (LQIR_ac_DW.UnitDelay_DSTATE_e)
        {
            rtb_Add3_d = rtb_TmpSignalConversionAtVeHSER;
        }
        else
        {
            rtb_Add3_d = LQIR_ac_DW.UnitDelay_1_DSTATE;
        }

        /* End of Switch generated from: '<S135>/Switch1' */

        /* Product: '<S112>/Product' incorporates:
         *  Gain: '<S11>/Gain'
         *  Sum: '<S112>/Sum1'
         */
        rtb_Product = (rtb_TmpSignalConversionAtVeHSER - rtb_Add3_d) *
            VeLQIR_K_IeOverTstep;

        /* Switch: '<S118>/Switch1' incorporates:
         *  Switch: '<S105>/Switch1'
         *  UnitDelay: '<S4>/Unit Delay'
         */
        if (LQIR_ac_DW.UnitDelay_DSTATE_e)
        {
            /* Switch: '<S118>/Switch1' */
            Gain_h = VeLQIR_M_TiDelayModelIC;

            /* Switch: '<S105>/Switch' incorporates:
             *  Constant: '<S108>/Calib'
             */
            if (KeLQIR_b_TiErrorInit)
            {
                /* Product: '<S110>/Product1' */
                rtb_Product1_n = rtb_Product;
            }
            else
            {
                /* Product: '<S110>/Product1' */
                rtb_Product1_n = VeLQIR_M_TiDelayModelIC;
            }

            /* End of Switch: '<S105>/Switch' */
        }
        else
        {
            /* Switch: '<S118>/Switch1' incorporates:
             *  UnitDelay: '<S118>/Unit Delay'
             */
            Gain_h = LQIR_ac_DW.UnitDelay_DSTATE_d;

            /* Product: '<S110>/Product1' incorporates:
             *  UnitDelay: '<S118>/Unit Delay'
             */
            rtb_Product1_n = LQIR_ac_DW.UnitDelay_DSTATE_d;
        }

        /* End of Switch: '<S118>/Switch1' */
        /* End of Outputs for SubSystem: '<S4>/LQI_Active' */
        (void)Rte_Read_VeHSER_n_InputSpeedProfile_Value(&rtb_Switch_lj);

        /* Outputs for IfAction SubSystem: '<S4>/LQI_Active' incorporates:
         *  ActionPort: '<S105>/Action Port'
         */
        /* Sum: '<S109>/Sum4' incorporates:
         *  Inport: '<Root>/VeHSER_n_InputSpeedProfile'
         */
        Gain_a = rtb_TmpSignalConversionAtVeHSER - rtb_Switch_lj;

        /* Gain: '<S121>/Gain' incorporates:
         *  Sum: '<S109>/Sum4'
         */
        VeLQIR_M_TiStateErrorLQI = rtb_Product - rtb_Product1_n;

        /* SignalConversion generated from: '<S111>/Product' */
        tmp[0] = VeLQIR_M_TiStateErrorLQI;
        tmp[1] = Gain_a;

        /* Product: '<S111>/Product' incorporates:
         *  Gain: '<S13>/Gain'
         *  Merge: '<S3>/Merge2'
         */
        rtb_Add3_d = 0.0F;
        for (i = 0; i < 2; i++)
        {
            rtb_Add3_d += VeLQIR_K_Kmatrix[(i)] * tmp[i];
        }

        /* Product: '<S111>/Product' */
        VeLQIR_M_PtermLQI = rtb_Add3_d;

        /* Product: '<S111>/Product1' incorporates:
         *  Gain: '<S14>/Gain'
         */
        VeLQIR_M_Igain_LQI = Gain_a * VeLQIR_K_Kint;

        /* Switch: '<S133>/Switch1' incorporates:
         *  Switch: '<S132>/Switch1'
         *  UnitDelay: '<S4>/Unit Delay'
         */
        if (LQIR_ac_DW.UnitDelay_DSTATE_e)
        {
            /* Product: '<S110>/Product1' */
            rtb_Product1_n = VeLQIR_M_TiDelayModelIC;

            /* Sum: '<S110>/Add3' */
            rtb_Add3_d = VeLQIR_M_TiDelayModelIC;
        }
        else
        {
            /* Product: '<S110>/Product1' incorporates:
             *  UnitDelay: '<S133>/Unit Delay'
             */
            rtb_Product1_n = LQIR_ac_DW.UnitDelay_DSTATE_b;

            /* Sum: '<S110>/Add3' incorporates:
             *  UnitDelay: '<S132>/Unit Delay'
             */
            rtb_Add3_d = LQIR_ac_DW.UnitDelay_DSTATE_o;
        }

        /* End of Switch: '<S133>/Switch1' */

        /* Product: '<S120>/Product' incorporates:
         *  Gain: '<S16>/Gain'
         *  Sum: '<S120>/Sum1'
         */
        VeLQIR_M_BackCalcLQI = (rtb_Add3_d - rtb_Product1_n) *
            VeLQIR_K_BackCalcGain;

        /* Outputs for Atomic SubSystem: '<S120>/IntegratorK Reset Enabled Limited' */
        /* Switch: '<S128>/Switch' incorporates:
         *  Constant: '<S131>/Calib'
         *  Logic: '<S120>/Logical Operator'
         *  RelationalOperator: '<S120>/Relational Operator'
         *  Switch: '<S120>/Switch'
         *  UnitDelay: '<S119>/Unit Delay2'
         *  UnitDelay: '<S119>/Unit Delay3'
         *  UnitDelay: '<S4>/Unit Delay'
         */
        if (LQIR_ac_DW.UnitDelay_DSTATE_e)
        {
            /* Switch: '<S128>/Switch' incorporates:
             *  Constant: '<S120>/Constant Value'
             */
            rtb_Switch_lj = 0.0F;
        }
        else
        {
            if ((KeLQIR_b_ItermFreezeActive) && (LQIR_ac_DW.UnitDelay3_DSTATE !=
                 LQIR_ac_DW.UnitDelay2_DSTATE))
            {
                /* Switch: '<S120>/Switch' incorporates:
                 *  Constant: '<S120>/Constant'
                 */
                rtb_Add3_d = 0.0F;
            }
            else
            {
                /* Switch: '<S120>/Switch' incorporates:
                 *  Sum: '<S120>/Add'
                 */
                rtb_Add3_d = VeLQIR_M_Igain_LQI + VeLQIR_M_BackCalcLQI;
            }

            /* Switch: '<S128>/Switch' incorporates:
             *  Gain: '<S12>/Gain'
             *  Product: '<S128>/Multiplication'
             *  Sum: '<S128>/Sum//Sub'
             *  UnitDelay: '<S128>/Unit Delay'
             */
            rtb_Switch_lj = (rtb_Add3_d * VeLQIR_t_Tstep) +
                LQIR_ac_DW.UnitDelay_DSTATE_p;
        }

        /* End of Switch: '<S128>/Switch' */

        /* Outputs for Atomic SubSystem: '<S128>/Limiter' */
        /* Switch: '<S134>/Switch1' incorporates:
         *  Constant: '<S129>/Calib'
         *  RelationalOperator: '<S134>/Relational Operator'
         */
        if (KeLQIR_M_ItermMax < rtb_Switch_lj)
        {
            /* Sum: '<S110>/Add3' */
            rtb_Add3_d = KeLQIR_M_ItermMax;
        }
        else
        {
            /* Sum: '<S110>/Add3' */
            rtb_Add3_d = rtb_Switch_lj;
        }

        /* End of Switch: '<S134>/Switch1' */

        /* Switch: '<S134>/Switch' incorporates:
         *  Constant: '<S130>/Calib'
         *  RelationalOperator: '<S134>/Relational Operator1'
         */
        if (rtb_Add3_d > KeLQIR_M_ItermMin)
        {
            /* Switch: '<S134>/Switch' */
            VeLQIR_M_ItermLQI = rtb_Add3_d;
        }
        else
        {
            /* Switch: '<S134>/Switch' */
            VeLQIR_M_ItermLQI = KeLQIR_M_ItermMin;
        }

        /* End of Switch: '<S134>/Switch' */
        /* End of Outputs for SubSystem: '<S128>/Limiter' */

        /* Update for UnitDelay: '<S128>/Unit Delay' */
        LQIR_ac_DW.UnitDelay_DSTATE_p = VeLQIR_M_ItermLQI;

        /* End of Outputs for SubSystem: '<S120>/IntegratorK Reset Enabled Limited' */

        /* Sum: '<S111>/Add' */
        VeLQIR_M_TiLQI_Raw = VeLQIR_M_PtermLQI + VeLQIR_M_ItermLQI;

        /* Switch: '<S127>/Switch1' incorporates:
         *  UnitDelay: '<S4>/Unit Delay'
         */
        if (LQIR_ac_DW.UnitDelay_DSTATE_e)
        {
            /* Sum: '<S110>/Add3' */
            rtb_Add3_d = VeLQIR_M_TiDelayModelIC;
        }
        else
        {
            /* Sum: '<S110>/Add3' incorporates:
             *  UnitDelay: '<S127>/Unit Delay'
             */
            rtb_Add3_d = LQIR_ac_DW.UnitDelay_DSTATE_f;
        }

        /* End of Switch: '<S127>/Switch1' */

        /* Sum: '<S123>/Subtraction1' incorporates:
         *  Gain: '<S15>/Gain'
         *  Product: '<S123>/Multiplication'
         *  Sum: '<S123>/Subtraction'
         */
        rtb_Switch_lj = ((VeLQIR_M_TiLQI_Raw - rtb_Add3_d) * VeLQIR_k_TiCmdFilt)
            + rtb_Add3_d;

        /* Switch: '<S119>/Switch' incorporates:
         *  Constant: '<S125>/Calib'
         *  Inport: '<Root>/VeETQR_M_EngCapacityMax'
         */
        if (KeLQIR_b_CmndSaturationActive)
        {
            (void)Rte_Read_VeETQR_M_EngCapacityMax_Value(&rtb_Sum1_n);

            /* Sum: '<S119>/Sum' incorporates:
             *  Inport: '<Root>/VeETQR_M_EngCapacityMax'
             *  UnitDelay: '<S119>/Unit Delay'
             *  UnitDelay: '<S119>/Unit Delay1'
             */
            rtb_Add3_d = LQIR_ac_DW.UnitDelay_DSTATE_k -
                LQIR_ac_DW.UnitDelay1_DSTATE;

            /* Sum: '<S119>/Sum1' */
            rtb_Sum1_n -= rtb_Add3_d;

            /* Switch: '<S126>/Switch2' incorporates:
             *  Inport: '<Root>/VeETQR_M_EngCapacityMinRun'
             *  RelationalOperator: '<S126>/LowerRelop1'
             */
            if (rtb_Switch_lj <= rtb_Sum1_n)
            {
                (void)Rte_Read_VeETQR_M_EngCapacityMinRun_Value(&rtb_Sum2);

                /* Sum: '<S119>/Sum2' incorporates:
                 *  Inport: '<Root>/VeETQR_M_EngCapacityMinRun'
                 */
                rtb_Sum2 -= rtb_Add3_d;

                /* Switch: '<S126>/Switch' incorporates:
                 *  RelationalOperator: '<S126>/UpperRelop'
                 */
                if (rtb_Switch_lj < rtb_Sum2)
                {
                    /* Switch: '<S119>/Switch' incorporates:
                     *  Switch: '<S126>/Switch2'
                     */
                    rtb_Sum1_n = rtb_Sum2;
                }
                else
                {
                    /* Switch: '<S119>/Switch' incorporates:
                     *  Switch: '<S126>/Switch2'
                     */
                    rtb_Sum1_n = rtb_Switch_lj;
                }

                /* End of Switch: '<S126>/Switch' */
            }

            /* End of Switch: '<S126>/Switch2' */
        }
        else
        {
            /* Switch: '<S119>/Switch' */
            rtb_Sum1_n = rtb_Switch_lj;
        }

        /* End of Switch: '<S119>/Switch' */

        /* Sum: '<S110>/Add3' incorporates:
         *  Gain: '<S19>/Gain'
         *  Gain: '<S20>/Gain'
         *  Product: '<S110>/Product'
         *  Product: '<S110>/Product1'
         */
        rtb_Add3_d = (VeLQIR_K_EngMdl_D * rtb_Sum1_n) + (VeLQIR_K_EngMdl_C *
            Gain_h);

        /* Switch: '<S118>/Switch3' incorporates:
         *  UnitDelay: '<S4>/Unit Delay'
         */
        if (LQIR_ac_DW.UnitDelay_DSTATE_e)
        {
            /* Update for UnitDelay: '<S118>/Unit Delay' incorporates:
             *  Switch: '<S118>/Switch3'
             */
            LQIR_ac_DW.UnitDelay_DSTATE_d = VeLQIR_M_TiDelayModelIC;
        }
        else
        {
            /* Update for UnitDelay: '<S118>/Unit Delay' incorporates:
             *  Gain: '<S17>/Gain'
             *  Gain: '<S18>/Gain'
             *  Product: '<S110>/Product2'
             *  Product: '<S110>/Product3'
             *  Sum: '<S110>/Add2'
             *  Switch: '<S118>/Switch3'
             */
            LQIR_ac_DW.UnitDelay_DSTATE_d = (VeLQIR_K_EngMdl_B * rtb_Sum1_n) +
                (VeLQIR_K_EngMdl_A * Gain_h);
        }

        /* End of Switch: '<S118>/Switch3' */

        /* Outputs for Atomic SubSystem: '<S119>/Protected Division' */
        /* Switch: '<S124>/Switch1' incorporates:
         *  Constant: '<S124>/Constant Value'
         *  Constant: '<S124>/Constant Value1'
         *  Constant: '<S124>/Constant Value2'
         *  Constant: '<S124>/Constant Value3'
         *  Gain: '<S10>/Gain'
         *  Logic: '<S124>/AND'
         *  RelationalOperator: '<S124>/Greater Than or Equal '
         *  RelationalOperator: '<S124>/Greater Than or Equal 1'
         *  RelationalOperator: '<S124>/Not Equal'
         *  RelationalOperator: '<S124>/Not Equal1'
         *  Switch: '<S124>/Switch2'
         *  Switch: '<S124>/Switch3'
         */
        if ((rtb_Sum1_n != 0.0F) && (VeLQIR_J_Ie != 0.0F))
        {
            /* Switch: '<S124>/Switch1' incorporates:
             *  Product: '<S124>/Division'
             */
            rtb_Sum2 = rtb_Sum1_n / VeLQIR_J_Ie;
        }
        else if (rtb_Sum1_n > 0.0F)
        {
            /* Switch: '<S124>/Switch2' incorporates:
             *  Constant: '<S124>/MAXFLOAT'
             *  Switch: '<S124>/Switch1'
             */
            rtb_Sum2 = 3.402823466E+38F;
        }
        else if (rtb_Sum1_n < 0.0F)
        {
            /* Switch: '<S124>/Switch3' incorporates:
             *  Constant: '<S124>/MINFLOAT'
             *  Switch: '<S124>/Switch1'
             *  Switch: '<S124>/Switch2'
             */
            rtb_Sum2 = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S124>/Switch1' incorporates:
             *  Constant: '<S124>/Constant Value4'
             *  Switch: '<S124>/Switch2'
             *  Switch: '<S124>/Switch3'
             */
            rtb_Sum2 = 0.0F;
        }

        /* End of Switch: '<S124>/Switch1' */
        /* End of Outputs for SubSystem: '<S119>/Protected Division' */

        /* Switch: '<S132>/Switch3' incorporates:
         *  UnitDelay: '<S4>/Unit Delay'
         */
        if (LQIR_ac_DW.UnitDelay_DSTATE_e)
        {
            /* Update for UnitDelay: '<S132>/Unit Delay' incorporates:
             *  Switch: '<S132>/Switch3'
             */
            LQIR_ac_DW.UnitDelay_DSTATE_o = VeLQIR_M_TiDelayModelIC;
        }
        else
        {
            /* Update for UnitDelay: '<S132>/Unit Delay' incorporates:
             *  Gain: '<S10>/Gain'
             *  Product: '<S111>/Product2'
             *  Switch: '<S132>/Switch3'
             */
            LQIR_ac_DW.UnitDelay_DSTATE_o = rtb_TmpSignalConversionAtVeHS_e *
                VeLQIR_J_Ie;
        }

        /* End of Switch: '<S132>/Switch3' */

        /* Update for UnitDelay: '<S119>/Unit Delay' incorporates:
         *  Inport: '<Root>/VeOITR_M_OptInputTorq'
         */
        (void)Rte_Read_VeOITR_M_OptInputTorq_Value
            (&LQIR_ac_DW.UnitDelay_DSTATE_k);

        /* Merge: '<S4>/Merge3' incorporates:
         *  Gain: '<S113>/Gain'
         */
        rtb_Product1_n = rtb_Product;

        /* Merge: '<S4>/Merge1' incorporates:
         *  Gain: '<S114>/Gain'
         */
        rtb_TmpSignalConversionAtVeHS_e = rtb_Sum1_n;

        /* Merge: '<S4>/Merge2' incorporates:
         *  Gain: '<S115>/Gain'
         */
        rtb_Product = rtb_Sum2;

        /* Merge: '<S4>/Merge4' incorporates:
         *  Gain: '<S116>/Gain'
         */
        rtb_Sum2 = rtb_Add3_d;

        /* Merge: '<S4>/Merge5' incorporates:
         *  Gain: '<S117>/Gain'
         */
        Gain_h = Gain_a;

        /* Update for UnitDelay generated from: '<S135>/Unit Delay' incorporates:
         *  Switch generated from: '<S135>/Switch3'
         */
        LQIR_ac_DW.UnitDelay_1_DSTATE = rtb_TmpSignalConversionAtVeHSER;

        /* Update for UnitDelay: '<S119>/Unit Delay1' */
        LQIR_ac_DW.UnitDelay1_DSTATE = rtb_Sum1_n;

        /* Update for UnitDelay: '<S119>/Unit Delay3' */
        LQIR_ac_DW.UnitDelay3_DSTATE = rtb_Switch_lj;

        /* Update for UnitDelay: '<S119>/Unit Delay2' */
        LQIR_ac_DW.UnitDelay2_DSTATE = rtb_Sum1_n;

        /* Switch: '<S133>/Switch3' incorporates:
         *  Switch: '<S127>/Switch3'
         *  UnitDelay: '<S4>/Unit Delay'
         */
        if (LQIR_ac_DW.UnitDelay_DSTATE_e)
        {
            /* Update for UnitDelay: '<S133>/Unit Delay' */
            LQIR_ac_DW.UnitDelay_DSTATE_b = VeLQIR_M_TiDelayModelIC;

            /* Update for UnitDelay: '<S127>/Unit Delay' */
            LQIR_ac_DW.UnitDelay_DSTATE_f = VeLQIR_M_TiDelayModelIC;
        }
        else
        {
            /* Update for UnitDelay: '<S133>/Unit Delay' */
            LQIR_ac_DW.UnitDelay_DSTATE_b = rtb_Add3_d;

            /* Update for UnitDelay: '<S127>/Unit Delay' */
            LQIR_ac_DW.UnitDelay_DSTATE_f = rtb_Sum1_n;
        }

        /* End of Switch: '<S133>/Switch3' */
        /* End of Outputs for SubSystem: '<S4>/LQI_Active' */
    }

    /* End of If: '<S4>/If' */

    /* Update for UnitDelay: '<S4>/Unit Delay' incorporates:
     *  Gain: '<S104>/Gain'
     */
    LQIR_ac_DW.UnitDelay_DSTATE_e = VeLQIR_b_DisableAll;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/LQIC_TiEstMinMax'
     */
    /* If: '<S5>/If' incorporates:
     *  Constant: '<S149>/Calib'
     *  Gain: '<S104>/Gain'
     *  Inport: '<Root>/VeETQR_M_EngCapacityMinOff'
     *  Inport: '<Root>/VeTRAR_M_EngTorqCmndImmed'
     *  Switch: '<S144>/Switch2'
     */
    if (Gain_k4 && (VeLQIR_b_DisableAll))
    {
        /* Merge: '<S5>/Merge1' incorporates:
         *  Inport: '<Root>/VeTITR_M_InputTrqCapacityMinOff'
         */
        (void)Rte_Read_VeTITR_M_InputTrqCapacityMinOff_Value(&Merge1);

        /* Merge: '<S5>/Merge3' incorporates:
         *  Inport: '<Root>/VeTITR_M_InputTorqAct'
         */
        (void)Rte_Read_VeTITR_M_InputTorqAct_Value(&rtb_Switch1);
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S5>/TiEstMinMax_Active' incorporates:
         *  ActionPort: '<S139>/Action Port'
         */
        if (KeLQIR_b_TiFastArb)
        {
            (void)Rte_Read_VeTRAR_M_EngTorqCmndImmed_Value(&rtb_Switch1);

            /* Switch: '<S144>/Switch1' incorporates:
             *  Constant: '<S147>/Constant'
             *  Constant: '<S148>/Constant'
             *  Inport: '<Root>/VeTRAR_M_EngTorqCmndImmed'
             *  Logic: '<S144>/Logical'
             *  RelationalOperator: '<S144>/Equal1'
             *  RelationalOperator: '<S144>/Equal4'
             *  Switch: '<S144>/Switch2'
             */
            if ((CeTRAR_e_Pleasability_Limited == ((uint32)
                    rtb_TmpSignalConversionAtVeTR_n)) || (((uint32)
                    rtb_TmpSignalConversionAtVeTR_n) == CeTRAR_e_Maximum_Range))
            {
                /* Switch: '<S144>/Switch2' */
                VeLQIR_M_Ti_HybCmndArb = rtb_Switch1;
            }
            else
            {
                /* Switch: '<S144>/Switch2' */
                VeLQIR_M_Ti_HybCmndArb = rtb_TmpSignalConversionAtVeTRAR;
            }

            /* End of Switch: '<S144>/Switch1' */
        }
        else
        {
            /* Switch: '<S144>/Switch2' */
            VeLQIR_M_Ti_HybCmndArb = rtb_TmpSignalConversionAtVeTRAR;
        }

        /* Switch: '<S146>/Switch1' incorporates:
         *  Inport: '<Root>/VeTRAR_M_EngTorqCmndImmed'
         *  UnitDelay: '<S5>/Unit Delay'
         */
        if (LQIR_ac_DW.UnitDelay_DSTATE_n)
        {
            /* Switch: '<S146>/Switch1' */
            rtb_Switch1 = rtb_TmpSignalConversionAtVeHS_e;
        }
        else
        {
            /* Switch: '<S146>/Switch1' incorporates:
             *  UnitDelay: '<S146>/Unit Delay'
             */
            rtb_Switch1 = LQIR_ac_DW.UnitDelay_DSTATE;
        }

        /* End of Switch: '<S146>/Switch1' */

        /* Sum: '<S141>/Add3' incorporates:
         *  Gain: '<S19>/Gain'
         *  Gain: '<S20>/Gain'
         *  Product: '<S141>/Product'
         *  Product: '<S141>/Product1'
         */
        rtb_TmpSignalConversionAtVeTRAR = (VeLQIR_K_EngMdl_D *
            VeLQIR_M_Ti_HybCmndArb) + (VeLQIR_K_EngMdl_C * rtb_Switch1);

        /* Switch: '<S146>/Switch3' incorporates:
         *  UnitDelay: '<S5>/Unit Delay'
         */
        if (LQIR_ac_DW.UnitDelay_DSTATE_n)
        {
            /* Update for UnitDelay: '<S146>/Unit Delay' incorporates:
             *  Switch: '<S146>/Switch3'
             */
            LQIR_ac_DW.UnitDelay_DSTATE = rtb_TmpSignalConversionAtVeHS_e;
        }
        else
        {
            /* Update for UnitDelay: '<S146>/Unit Delay' incorporates:
             *  Gain: '<S17>/Gain'
             *  Gain: '<S18>/Gain'
             *  Product: '<S141>/Product2'
             *  Product: '<S141>/Product3'
             *  Sum: '<S141>/Add2'
             *  Switch: '<S146>/Switch3'
             */
            LQIR_ac_DW.UnitDelay_DSTATE = (VeLQIR_K_EngMdl_B *
                VeLQIR_M_Ti_HybCmndArb) + (VeLQIR_K_EngMdl_A * rtb_Switch1);
        }

        /* End of Switch: '<S146>/Switch3' */

        /* Merge: '<S5>/Merge3' incorporates:
         *  Gain: '<S142>/Gain'
         */
        rtb_Switch1 = rtb_TmpSignalConversionAtVeTRAR;

        /* Sum: '<S145>/Add' */
        rtb_TmpSignalConversionAtVeTRAR += rtb_TmpSignalConversionAtVeES_g;

        /* Outputs for Atomic SubSystem: '<S145>/Protected Division' */
        /* Switch: '<S150>/Switch1' incorporates:
         *  Constant: '<S150>/Constant Value'
         *  Constant: '<S150>/Constant Value1'
         *  Constant: '<S150>/Constant Value2'
         *  Constant: '<S150>/Constant Value3'
         *  Logic: '<S150>/AND'
         *  RelationalOperator: '<S150>/Greater Than or Equal '
         *  RelationalOperator: '<S150>/Greater Than or Equal 1'
         *  RelationalOperator: '<S150>/Not Equal'
         *  RelationalOperator: '<S150>/Not Equal1'
         *  Switch: '<S150>/Switch2'
         *  Switch: '<S150>/Switch3'
         */
        if ((rtb_TmpSignalConversionAtVeTRAR != 0.0F) &&
                (rtb_TmpSignalConversionAtVeESSR != 0.0F))
        {
            /* Switch: '<S150>/Switch1' incorporates:
             *  Product: '<S150>/Division'
             */
            rtb_TmpSignalConversionAtVeESSR = rtb_TmpSignalConversionAtVeTRAR /
                rtb_TmpSignalConversionAtVeESSR;
        }
        else if (rtb_TmpSignalConversionAtVeTRAR > 0.0F)
        {
            /* Switch: '<S150>/Switch2' incorporates:
             *  Constant: '<S150>/MAXFLOAT'
             *  Switch: '<S150>/Switch1'
             */
            rtb_TmpSignalConversionAtVeESSR = 3.402823466E+38F;
        }
        else if (rtb_TmpSignalConversionAtVeTRAR < 0.0F)
        {
            /* Switch: '<S150>/Switch3' incorporates:
             *  Constant: '<S150>/MINFLOAT'
             *  Switch: '<S150>/Switch1'
             *  Switch: '<S150>/Switch2'
             */
            rtb_TmpSignalConversionAtVeESSR = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S150>/Switch1' incorporates:
             *  Constant: '<S150>/Constant Value4'
             *  Switch: '<S150>/Switch2'
             *  Switch: '<S150>/Switch3'
             */
            rtb_TmpSignalConversionAtVeESSR = 0.0F;
        }

        /* End of Switch: '<S150>/Switch1' */
        /* End of Outputs for SubSystem: '<S145>/Protected Division' */
        /* End of Outputs for SubSystem: '<S5>/TiEstMinMax_Active' */
        (void)Rte_Read_VeETQR_M_EngCapacityMinOff_Value(&Merge1);

        /* Outputs for IfAction SubSystem: '<S5>/TiEstMinMax_Active' incorporates:
         *  ActionPort: '<S139>/Action Port'
         */
        /* Sum: '<S145>/Add1' incorporates:
         *  Inport: '<Root>/VeETQR_M_EngCapacityMinOff'
         */
        VeLQIR_M_TiMinEST_ETRQ_Raw = rtb_TmpSignalConversionAtVeESSR -
            rtb_TmpSignalConversionAtVeES_g;

        /* Merge: '<S5>/Merge1' incorporates:
         *  Gain: '<S143>/Gain'
         *  MinMax: '<S145>/MinMax'
         */
        Merge1 = fmaxf(VeLQIR_M_TiMinEST_ETRQ_Raw, Merge1);

        /* End of Outputs for SubSystem: '<S5>/TiEstMinMax_Active' */
    }

    /* End of If: '<S5>/If' */

    /* Update for UnitDelay: '<S5>/Unit Delay' incorporates:
     *  Gain: '<S104>/Gain'
     */
    LQIR_ac_DW.UnitDelay_DSTATE_n = VeLQIR_b_DisableAll;

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeLQIR_M_TiDelayModelActual' incorporates:
     *  SignalConversion generated from: '<S1>/VeLQIR_M_TiDelayModelActual'
     */
    (void)Rte_Write_VeLQIR_M_TiDelayModelActual_Value(rtb_Sum2);

    /* Outport: '<Root>/VeLQIR_M_TiLQI_Cmnd' incorporates:
     *  SignalConversion generated from: '<S1>/VeLQIR_M_TiLQI_Cmnd'
     */
    (void)Rte_Write_VeLQIR_M_TiLQI_Cmnd_Value(rtb_TmpSignalConversionAtVeHS_e);

    /* Outport: '<Root>/VeLQIR_M_TiMaxEST_ETRQ' incorporates:
     *  SignalConversion generated from: '<S1>/VeLQIR_M_TiMaxEST_ETRQ'
     */
    (void)Rte_Write_VeLQIR_M_TiMaxEST_ETRQ_Value(rtb_Switch1);

    /* Outport: '<Root>/VeLQIR_M_TiMinEST_ETRQ' incorporates:
     *  SignalConversion generated from: '<S1>/VeLQIR_M_TiMinEST_ETRQ'
     */
    (void)Rte_Write_VeLQIR_M_TiMinEST_ETRQ_Value(Merge1);

    /* Outport: '<Root>/VeLQIR_M_TiRef' incorporates:
     *  SignalConversion generated from: '<S1>/VeLQIR_M_TiRef'
     */
    (void)Rte_Write_VeLQIR_M_TiRef_Value(rtb_Product1_n);

    /* Outport: '<Root>/VeLQIR_dn_NiDotPred' incorporates:
     *  SignalConversion generated from: '<S1>/VeLQIR_dn_NiDotPred'
     */
    (void)Rte_Write_VeLQIR_dn_NiDotPred_Value(rtb_Product);

    /* Outport: '<Root>/VeLQIR_n_NiStateErrorLQI' incorporates:
     *  SignalConversion generated from: '<S1>/VeLQIR_n_NiStateErrorLQI'
     */
    (void)Rte_Write_VeLQIR_n_NiStateErrorLQI_Value(Gain_h);

    /* End of Outputs for SubSystem: '<Root>/LQIR_MedTEB2' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' */
#endif

}

#endif

/* Output function */
FUNC(void, LQIR_CODE) LQIR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/LQIR_PwrOn'
     */
#if Rte_SysCon_Variant_LQIR_1 || Rte_SysCon_Variant_LQIR_2

    /* S-Function (fcgen): '<S2>/FcnCallGen' */
#if Rte_SysCon_Variant_LQIR_1

    /* Outputs for Function Call SubSystem: '<S2>/LQIC_Init' */
    /* DataStoreWrite: '<S151>/Dsw_CtlrInit' incorporates:
     *  Constant: '<S151>/TRUE Constant'
     */
    VeLQIR_b_CtlrInit = true;

    /* End of Outputs for SubSystem: '<S2>/LQIC_Init' */
#endif

#if Rte_SysCon_Variant_LQIR_2

    /* Outputs for Function Call SubSystem: '<S2>/LQIR_NF' */
    /* SignalConversion generated from: '<S152>/VeLQIR_M_TiRef' */
    LQIR_ac_B.OutportBufferForVeLQIR_M_TiRef = 0.0F;

    /* SignalConversion generated from: '<S152>/VeLQIR_M_TiLQI_Cmnd' */
    LQIR_ac_B.OutportBufferForVeLQIR_M_TiLQI_ = 0.0F;

    /* SignalConversion generated from: '<S152>/VeLQIR_dn_NiDotPred' */
    LQIR_ac_B.OutportBufferForVeLQIR_dn_NiDot = 0.0F;

    /* SignalConversion generated from: '<S152>/VeLQIR_M_TiDelayModelActual' */
    LQIR_ac_B.OutportBufferForVeLQIR_M_TiDela = 0.0F;

    /* SignalConversion generated from: '<S152>/VeLQIR_M_TiMaxEST_ETRQ' */
    LQIR_ac_B.OutportBufferForVeLQIR_M_TiMaxE = 0.0F;

    /* SignalConversion generated from: '<S152>/VeLQIR_M_TiMinEST_ETRQ' */
    LQIR_ac_B.OutportBufferForVeLQIR_M_TiMinE = 0.0F;

    /* SignalConversion generated from: '<S152>/VeLQIR_n_NiStateErrorLQI' */
    LQIR_ac_B.OutportBufferForVeLQIR_n_NiStat = 0.0F;

    /* End of Outputs for SubSystem: '<S2>/LQIR_NF' */
#endif

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
#endif

    /* SignalConversion generated from: '<S2>/VeLQIR_M_TiDelayModelActual' incorporates:
     *  SignalConversion generated from: '<S2>/VeLQIR_M_TiLQI_Cmnd'
     *  SignalConversion generated from: '<S2>/VeLQIR_M_TiMaxEST_ETRQ'
     *  SignalConversion generated from: '<S2>/VeLQIR_M_TiMinEST_ETRQ'
     *  SignalConversion generated from: '<S2>/VeLQIR_M_TiRef'
     *  SignalConversion generated from: '<S2>/VeLQIR_dn_NiDotPred'
     *  SignalConversion generated from: '<S2>/VeLQIR_n_NiStateErrorLQI'
     */
#if Rte_SysCon_Variant_LQIR_2

    /* Outport: '<Root>/VeLQIR_M_TiDelayModelActual' */
    (void)Rte_Write_VeLQIR_M_TiDelayModelActual_Value
        (LQIR_ac_B.OutportBufferForVeLQIR_M_TiDela);

    /* Outport: '<Root>/VeLQIR_M_TiLQI_Cmnd' */
    (void)Rte_Write_VeLQIR_M_TiLQI_Cmnd_Value
        (LQIR_ac_B.OutportBufferForVeLQIR_M_TiLQI_);

    /* Outport: '<Root>/VeLQIR_M_TiMaxEST_ETRQ' */
    (void)Rte_Write_VeLQIR_M_TiMaxEST_ETRQ_Value
        (LQIR_ac_B.OutportBufferForVeLQIR_M_TiMaxE);

    /* Outport: '<Root>/VeLQIR_M_TiMinEST_ETRQ' */
    (void)Rte_Write_VeLQIR_M_TiMinEST_ETRQ_Value
        (LQIR_ac_B.OutportBufferForVeLQIR_M_TiMinE);

    /* Outport: '<Root>/VeLQIR_M_TiRef' */
    (void)Rte_Write_VeLQIR_M_TiRef_Value
        (LQIR_ac_B.OutportBufferForVeLQIR_M_TiRef);

    /* Outport: '<Root>/VeLQIR_dn_NiDotPred' */
    (void)Rte_Write_VeLQIR_dn_NiDotPred_Value
        (LQIR_ac_B.OutportBufferForVeLQIR_dn_NiDot);

    /* Outport: '<Root>/VeLQIR_n_NiStateErrorLQI' */
    (void)Rte_Write_VeLQIR_n_NiStateErrorLQI_Value
        (LQIR_ac_B.OutportBufferForVeLQIR_n_NiStat);

#endif

    /* End of SignalConversion generated from: '<S2>/VeLQIR_M_TiDelayModelActual' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, LQIR_CODE) LQIR_ac_Init(void)
{

#if Rte_SysCon_Variant_LQIR_1

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' */
    /* Enable for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' */
    /* Enable for Function Call SubSystem: '<Root>/LQIR_MedTEB2' */
    /* SystemReset for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/LQIC_Controller'
     */
    /* Enable for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* InitializeConditions for UnitDelay: '<S4>/Unit Delay' */
    LQIR_ac_DW.UnitDelay_DSTATE_e = true;

    /* SystemReset for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/LQIC_TiEstMinMax'
     */
    /* InitializeConditions for UnitDelay: '<S5>/Unit Delay' */
    LQIR_ac_DW.UnitDelay_DSTATE_n = true;

    /* End of SystemReset for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Enable for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Enable for SubSystem: '<Root>/LQIR_MedTEB2' */
    /* End of Enable for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' */
#endif

}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
