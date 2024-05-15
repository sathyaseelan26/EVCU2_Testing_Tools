/*
 * File: TRIB_ac.c
 *
 * Code generated for Simulink model 'TRIB_ac'.
 *
 * Model version                  : 1.160
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:49:45 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TRIB_ac.h"
#include "look1_iflf_binlca_19a.h"

/* Named constants for Chart: '<S30>/AntiSpkFil' */
#if Rte_SysCon_Variant_TRIB_BTIS_Presence || Rte_SysCon_Variant_TRIB_BTOS_Presence || Rte_SysCon_Variant_TRIB_BatClntSns_Presence || Rte_SysCon_Variant_TRIB_HCCTIS_Presence
#define TRIB_ac_IN_FILTERING           ((uint8)1U)
#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence || Rte_SysCon_Variant_TRIB_BTOS_Presence || Rte_SysCon_Variant_TRIB_BatClntSns_Presence || Rte_SysCon_Variant_TRIB_HCCTIS_Presence
#define TRIB_ac_IN_NORMAL              ((uint8)2U)
#endif

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2019a.
//
// PROD Model Config Ver#19a.1 2/14/2020
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_TRIB
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_TRIB_BTIS_Presence

static volatile CONST(uint8, TRIB_VAR_INIT) KeTRIB_Cnt_BTISSpikeThd = 2U;/* Referenced by: '<S83>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

static volatile CONST(uint8, TRIB_VAR_INIT) KeTRIB_Cnt_BTOSSpikeThd = 2U;/* Referenced by: '<S146>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BatClntSns_Presence

static volatile CONST(uint8, TRIB_VAR_INIT) KeTRIB_Cnt_BatClntSnsSpikeThd = 2U;/* Referenced by: '<S188>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

static volatile CONST(uint8, TRIB_VAR_INIT) KeTRIB_Cnt_HCCTISSpikeThd = 2U;/* Referenced by: '<S251>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

static volatile CONST(uint16, TRIB_VAR_INIT) KeTRIB_Cnt_STBFailLimBTIS = 100U;/* Referenced by: '<S35>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

static volatile CONST(uint16, TRIB_VAR_INIT) KeTRIB_Cnt_STBFailLimBTOS = 100U;/* Referenced by: '<S98>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

static volatile CONST(uint16, TRIB_VAR_INIT) KeTRIB_Cnt_STBFailLimHCCTIS = 100U;/* Referenced by: '<S203>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

static volatile CONST(uint16, TRIB_VAR_INIT) KeTRIB_Cnt_STBSmplLimBTIS = 150U;/* Referenced by: '<S36>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

static volatile CONST(uint16, TRIB_VAR_INIT) KeTRIB_Cnt_STBSmplLimBTOS = 150U;/* Referenced by: '<S99>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

static volatile CONST(uint16, TRIB_VAR_INIT) KeTRIB_Cnt_STBSmplLimHCCTIS = 150U;/* Referenced by: '<S204>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

static volatile CONST(uint16, TRIB_VAR_INIT) KeTRIB_Cnt_STGFailLimBTIS = 100U;/* Referenced by: '<S55>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

static volatile CONST(uint16, TRIB_VAR_INIT) KeTRIB_Cnt_STGFailLimBTOS = 100U;/* Referenced by: '<S118>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BatClntSns_Presence

static volatile CONST(uint16, TRIB_VAR_INIT) KeTRIB_Cnt_STGFailLimBatClntSns =
    100U;                              /* Referenced by: '<S160>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

static volatile CONST(uint16, TRIB_VAR_INIT) KeTRIB_Cnt_STGFailLimHCCTIS = 100U;/* Referenced by: '<S223>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

static volatile CONST(uint16, TRIB_VAR_INIT) KeTRIB_Cnt_STGSmplLimBTIS = 150U;/* Referenced by: '<S56>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

static volatile CONST(uint16, TRIB_VAR_INIT) KeTRIB_Cnt_STGSmplLimBTOS = 150U;/* Referenced by: '<S119>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BatClntSns_Presence

static volatile CONST(uint16, TRIB_VAR_INIT) KeTRIB_Cnt_STGSmplLimBatClntSns =
    150U;                              /* Referenced by: '<S161>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

static volatile CONST(uint16, TRIB_VAR_INIT) KeTRIB_Cnt_STGSmplLimHCCTIS = 150U;/* Referenced by: '<S224>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

static volatile CONST(float32, TRIB_VAR_INIT) KeTRIB_T_BTISByp = 25.0F;/* Referenced by: '<S78>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

static volatile CONST(float32, TRIB_VAR_INIT) KeTRIB_T_BTISRcvry = 25.0F;/* Referenced by: '<S80>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

static volatile CONST(float32, TRIB_VAR_INIT) KeTRIB_T_BTISTempInit = 25.0F;/* Referenced by: '<S11>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

static volatile CONST(float32, TRIB_VAR_INIT) KeTRIB_T_BTOSByp = 25.0F;/* Referenced by: '<S141>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

static volatile CONST(float32, TRIB_VAR_INIT) KeTRIB_T_BTOSRcvry = 25.0F;/* Referenced by: '<S143>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

static volatile CONST(float32, TRIB_VAR_INIT) KeTRIB_T_BTOSTempInit = 25.0F;/* Referenced by: '<S15>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

static volatile CONST(float32, TRIB_VAR_INIT) KeTRIB_T_HCCTISByp = 25.0F;/* Referenced by: '<S246>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

static volatile CONST(float32, TRIB_VAR_INIT) KeTRIB_T_HCCTISRcvry = 25.0F;/* Referenced by: '<S248>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

static volatile CONST(float32, TRIB_VAR_INIT) KeTRIB_T_HCCTISTempInit = 25.0F;/* Referenced by: '<S22>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

static volatile CONST(float32, TRIB_VAR_INIT) KeTRIB_U_BTISSpikeThd = 2.0F;/* Referenced by: '<S84>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

static volatile CONST(float32, TRIB_VAR_INIT) KeTRIB_U_BTOSSpikeThd = 2.0F;/* Referenced by: '<S147>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BatClntSns_Presence

static volatile CONST(float32, TRIB_VAR_INIT) KeTRIB_U_BatClntLvlInit = 3.0F;/* Referenced by: '<S18>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BatClntSns_Presence

static volatile CONST(float32, TRIB_VAR_INIT) KeTRIB_U_BatClntSnsByp = 3.0F;/* Referenced by: '<S183>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BatClntSns_Presence

static volatile CONST(float32, TRIB_VAR_INIT) KeTRIB_U_BatClntSnsRcvry = 3.0F;/* Referenced by: '<S185>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BatClntSns_Presence

static volatile CONST(float32, TRIB_VAR_INIT) KeTRIB_U_BatClntSnsSpikeThd = 2.0F;/* Referenced by: '<S189>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

static volatile CONST(float32, TRIB_VAR_INIT) KeTRIB_U_HCCTISSpikeThd = 2.0F;/* Referenced by: '<S252>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

static volatile CONST(float32, TRIB_VAR_INIT) KeTRIB_U_STBCktHiFltLimBTIS =
    4.755F;                            /* Referenced by: '<S37>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

static volatile CONST(float32, TRIB_VAR_INIT) KeTRIB_U_STBCktHiFltLimBTOS =
    4.755F;                            /* Referenced by: '<S100>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

static volatile CONST(float32, TRIB_VAR_INIT) KeTRIB_U_STBCktHiFltLimHCCTIS =
    4.755F;                            /* Referenced by: '<S205>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BatClntSns_Presence

static volatile CONST(float32, TRIB_VAR_INIT) KeTRIB_U_STGCktLowFltLimBatClntSns
    = 0.166F;                          /* Referenced by: '<S162>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

static volatile CONST(float32, TRIB_VAR_INIT) KeTRIB_U_STGCktLowFltLim_BTIS =
    0.166F;                            /* Referenced by: '<S57>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

static volatile CONST(float32, TRIB_VAR_INIT) KeTRIB_U_STGCktLowFltLim_BTOS =
    0.166F;                            /* Referenced by: '<S120>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

static volatile CONST(float32, TRIB_VAR_INIT) KeTRIB_U_STGCktLowFltLim_HCCTIS =
    0.166F;                            /* Referenced by: '<S225>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

static volatile CONST(boolean, TRIB_VAR_INIT) KeTRIB_b_BTISBypEnbl = 0;/* Referenced by: '<S79>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

static volatile CONST(boolean, TRIB_VAR_INIT) KeTRIB_b_BTISRcvryEnbl = 0;/* Referenced by: '<S81>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

static volatile CONST(boolean, TRIB_VAR_INIT) KeTRIB_b_BTOSBypEnbl = 0;/* Referenced by: '<S142>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

static volatile CONST(boolean, TRIB_VAR_INIT) KeTRIB_b_BTOSRcvryEnbl = 0;/* Referenced by: '<S144>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BatClntSns_Presence

static volatile CONST(boolean, TRIB_VAR_INIT) KeTRIB_b_BatClntSnsBypEnbl = 0;/* Referenced by: '<S184>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BatClntSns_Presence

static volatile CONST(boolean, TRIB_VAR_INIT) KeTRIB_b_BatClntSnsRcvryEnbl = 0;/* Referenced by: '<S186>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

static volatile CONST(boolean, TRIB_VAR_INIT) KeTRIB_b_HCCTISBypEnbl = 0;/* Referenced by: '<S247>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

static volatile CONST(boolean, TRIB_VAR_INIT) KeTRIB_b_HCCTISRcvryEnbl = 0;/* Referenced by: '<S249>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

static volatile CONST(boolean, TRIB_VAR_INIT) KeTRIB_b_LtchEnblBTISSTB = 0;
              /* Referenced by: '<S34>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

static volatile CONST(boolean, TRIB_VAR_INIT) KeTRIB_b_LtchEnblBTISSTG = 0;
              /* Referenced by: '<S54>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

static volatile CONST(boolean, TRIB_VAR_INIT) KeTRIB_b_LtchEnblBTOSSTB = 0;
              /* Referenced by: '<S97>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

static volatile CONST(boolean, TRIB_VAR_INIT) KeTRIB_b_LtchEnblBTOSSTG = 0;
             /* Referenced by: '<S117>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_TRIB_BatClntSns_Presence

static volatile CONST(boolean, TRIB_VAR_INIT) KeTRIB_b_LtchEnblBatClntSnsSTG = 0;
             /* Referenced by: '<S159>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

static volatile CONST(boolean, TRIB_VAR_INIT) KeTRIB_b_LtchEnblHCCTISSTB = 0;
             /* Referenced by: '<S202>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

static volatile CONST(boolean, TRIB_VAR_INIT) KeTRIB_b_LtchEnblHCCTISSTG = 0;
             /* Referenced by: '<S222>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

static volatile CONST(boolean, TRIB_VAR_INIT) KeTRIB_b_STBDiagEnblBTIS = 1;/* Referenced by: '<S38>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

static volatile CONST(boolean, TRIB_VAR_INIT) KeTRIB_b_STBDiagEnblBTOS = 1;/* Referenced by: '<S101>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

static volatile CONST(boolean, TRIB_VAR_INIT) KeTRIB_b_STBDiagEnblHCCTIS = 1;/* Referenced by: '<S206>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BatClntSns_Presence

static volatile CONST(boolean, TRIB_VAR_INIT) KeTRIB_b_STGDiagEnblBatClntSns = 1;/* Referenced by: '<S163>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

static volatile CONST(boolean, TRIB_VAR_INIT) KeTRIB_b_STGDiagEnbl_BTIS = 1;/* Referenced by: '<S58>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

static volatile CONST(boolean, TRIB_VAR_INIT) KeTRIB_b_STGDiagEnbl_BTOS = 1;/* Referenced by: '<S121>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

static volatile CONST(boolean, TRIB_VAR_INIT) KeTRIB_b_STGDiagEnbl_HCCTIS = 1;/* Referenced by: '<S226>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

static volatile CONST(float32, TRIB_VAR_INIT) KeTRIB_k_BTISFiltGx = 1.0F;/* Referenced by: '<S85>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

static volatile CONST(float32, TRIB_VAR_INIT) KeTRIB_k_BTOSFiltGx = 1.0F;/* Referenced by: '<S148>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BatClntSns_Presence

static volatile CONST(float32, TRIB_VAR_INIT) KeTRIB_k_BatClntSnsFiltGx = 1.0F;/* Referenced by: '<S190>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

static volatile CONST(float32, TRIB_VAR_INIT) KeTRIB_k_HCCTISFiltGx = 1.0F;/* Referenced by: '<S253>/Calib' */

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

static volatile CONST(float32, TRIB_VAR_INIT) KtTRIB_T_BTISChartc[24] =
{
    191.0F, 150.0F, 140.0F, 130.0F, 120.0F, 110.0F, 100.0F, 90.0F, 80.0F, 70.0F,
    60.0F, 50.0F, 40.0F, 30.0F, 20.0F, 10.0F, 0.0F, -10.0F, -20.0F, -30.0F,
    -40.0F, -50.0F, -60.0F, -64.0F
} ;                                    /* Referenced by: '<S74>/Vector' */

#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

static volatile CONST(float32, TRIB_VAR_INIT) KtTRIB_T_BTOSChartc[24] =
{
    191.0F, 150.0F, 140.0F, 130.0F, 120.0F, 110.0F, 100.0F, 90.0F, 80.0F, 70.0F,
    60.0F, 50.0F, 40.0F, 30.0F, 20.0F, 10.0F, 0.0F, -10.0F, -20.0F, -30.0F,
    -40.0F, -50.0F, -60.0F, -64.0F
} ;                                    /* Referenced by: '<S137>/Vector' */

#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

static volatile CONST(float32, TRIB_VAR_INIT) KtTRIB_T_HCCTISChartc[24] =
{
    191.0F, 150.0F, 140.0F, 130.0F, 120.0F, 110.0F, 100.0F, 90.0F, 80.0F, 70.0F,
    60.0F, 50.0F, 40.0F, 30.0F, 20.0F, 10.0F, 0.0F, -10.0F, -20.0F, -30.0F,
    -40.0F, -50.0F, -60.0F, -64.0F
} ;                                    /* Referenced by: '<S242>/Vector' */

#endif

#if Rte_SysCon_Variant_TRIB_BatClntSns_Presence

static volatile CONST(float32, TRIB_VAR_INIT) KtTRIB_U_BatClntSnsrChartc[8] =
{
    0.0F, 0.5F, 1.0F, 2.0F, 3.0F, 4.0F, 4.5F, 5.0F
} ;                                    /* Referenced by: '<S179>/Vector' */

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

static volatile CONST(float32, TRIB_VAR_INIT) KxTRIB_U_BTISChartc[24] =
{
    0.0F, 0.22F, 0.279F, 0.347F, 0.445F, 0.552F, 0.723F, 0.929F, 1.193F, 1.52F,
    1.916F, 2.366F, 2.849F, 3.338F, 3.788F, 4.164F, 4.457F, 4.668F, 4.804F,
    4.897F, 4.946F, 4.971F, 4.99F, 5.0F
} ;                                    /* Referenced by: '<S74>/Vector' */

#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

static volatile CONST(float32, TRIB_VAR_INIT) KxTRIB_U_BTOSChartc[24] =
{
    0.0F, 0.22F, 0.279F, 0.347F, 0.445F, 0.552F, 0.723F, 0.929F, 1.193F, 1.52F,
    1.916F, 2.366F, 2.849F, 3.338F, 3.788F, 4.164F, 4.457F, 4.668F, 4.804F,
    4.897F, 4.946F, 4.971F, 4.99F, 5.0F
} ;                                    /* Referenced by: '<S137>/Vector' */

#endif

#if Rte_SysCon_Variant_TRIB_BatClntSns_Presence

static volatile CONST(float32, TRIB_VAR_INIT) KxTRIB_U_BatClntSnsrChartc[8] =
{
    0.0F, 0.5F, 1.0F, 2.0F, 3.0F, 4.0F, 4.5F, 5.0F
} ;                                    /* Referenced by: '<S179>/Vector' */

#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

static volatile CONST(float32, TRIB_VAR_INIT) KxTRIB_U_HCCTISChartc[24] =
{
    0.0F, 0.22F, 0.279F, 0.347F, 0.445F, 0.552F, 0.723F, 0.929F, 1.193F, 1.52F,
    1.916F, 2.366F, 2.849F, 3.338F, 3.788F, 4.164F, 4.457F, 4.668F, 4.804F,
    4.897F, 4.946F, 4.971F, 4.99F, 5.0F
} ;                                    /* Referenced by: '<S242>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_TRIB
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TRIB
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_TRIB_BTIS_Presence

static VAR(uint16, TRIB_VAR_INIT) VeTRIB_Cnt_STBFailLimBTIS;/* '<S47>/Switch1' */

#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

static VAR(uint16, TRIB_VAR_INIT) VeTRIB_Cnt_STBFailLimBTOS;/* '<S110>/Switch1' */

#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

static VAR(uint16, TRIB_VAR_INIT) VeTRIB_Cnt_STBFailLimHCCTIS;/* '<S215>/Switch1' */

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

static VAR(uint16, TRIB_VAR_INIT) VeTRIB_Cnt_STBSmplLimBTIS;/* '<S48>/Switch1' */

#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

static VAR(uint16, TRIB_VAR_INIT) VeTRIB_Cnt_STBSmplLimBTOS;/* '<S111>/Switch1' */

#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

static VAR(uint16, TRIB_VAR_INIT) VeTRIB_Cnt_STBSmplLimHCCTIS;/* '<S216>/Switch1' */

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

static VAR(uint16, TRIB_VAR_INIT) VeTRIB_Cnt_STGFailLimBTIS;/* '<S67>/Switch1' */

#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

static VAR(uint16, TRIB_VAR_INIT) VeTRIB_Cnt_STGFailLimBTOS;/* '<S130>/Switch1' */

#endif

#if Rte_SysCon_Variant_TRIB_BatClntSns_Presence

static VAR(uint16, TRIB_VAR_INIT) VeTRIB_Cnt_STGFailLimBatClntSns;/* '<S172>/Switch1' */

#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

static VAR(uint16, TRIB_VAR_INIT) VeTRIB_Cnt_STGFailLimHCCTIS;/* '<S235>/Switch1' */

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

static VAR(uint16, TRIB_VAR_INIT) VeTRIB_Cnt_STGSmplLimBTIS;/* '<S68>/Switch1' */

#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

static VAR(uint16, TRIB_VAR_INIT) VeTRIB_Cnt_STGSmplLimBTOS;/* '<S131>/Switch1' */

#endif

#if Rte_SysCon_Variant_TRIB_BatClntSns_Presence

static VAR(uint16, TRIB_VAR_INIT) VeTRIB_Cnt_STGSmplLimBatClntSns;/* '<S173>/Switch1' */

#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

static VAR(uint16, TRIB_VAR_INIT) VeTRIB_Cnt_STGSmplLimHCCTIS;/* '<S236>/Switch1' */

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

static VAR(float32, TRIB_VAR_INIT) VeTRIB_U_BTISVolt;/* '<S89>/Assignment_y' */

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

static VAR(float32, TRIB_VAR_INIT) VeTRIB_U_BTISVoltRaw;/* '<S30>/AntiSpkFil' */

#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

static VAR(float32, TRIB_VAR_INIT) VeTRIB_U_BTOSVolt;/* '<S152>/Assignment_y' */

#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

static VAR(float32, TRIB_VAR_INIT) VeTRIB_U_BTOSVoltRaw;/* '<S93>/AntiSpkFil' */

#endif

#if Rte_SysCon_Variant_TRIB_BatClntSns_Presence

static VAR(float32, TRIB_VAR_INIT) VeTRIB_U_BatClntSnsVolt;/* '<S194>/Assignment_y' */

#endif

#if Rte_SysCon_Variant_TRIB_BatClntSns_Presence

static VAR(float32, TRIB_VAR_INIT) VeTRIB_U_BatClntSnsVoltRaw;/* '<S156>/AntiSpkFil' */

#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

static VAR(float32, TRIB_VAR_INIT) VeTRIB_U_HCCTISVolt;/* '<S257>/Assignment_y' */

#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

static VAR(float32, TRIB_VAR_INIT) VeTRIB_U_HCCTISVoltRaw;/* '<S198>/AntiSpkFil' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TRIB
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TRIB
#include "MemMap.h"

VAR(B_TRIB_ac_T, TRIB_VAR_INIT) TRIB_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TRIB
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TRIB
#include "MemMap.h"

VAR(DW_TRIB_ac_T, TRIB_VAR_INIT) TRIB_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TRIB
#include "MemMap.h"
#if Rte_SysCon_Variant_TRIB_BTIS_Presence || Rte_SysCon_Variant_TRIB_BTOS_Presence || Rte_SysCon_Variant_TRIB_BatClntSns_Presence || Rte_SysCon_Variant_TRIB_HCCTIS_Presence

static FUNC(void, TRIB_CODE_LOCAL) TRIB_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, TRIB_VAR_INIT)
    rty_FaultSts);

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence || Rte_SysCon_Variant_TRIB_BTOS_Presence || Rte_SysCon_Variant_TRIB_BatClntSns_Presence || Rte_SysCon_Variant_TRIB_HCCTIS_Presence

static FUNC(void, TRIB_CODE_LOCAL) TRIB_ac_Init_i(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, TRIB_VAR_INIT)
    rty_FaultSts);

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence || Rte_SysCon_Variant_TRIB_BTOS_Presence || Rte_SysCon_Variant_TRIB_BatClntSns_Presence || Rte_SysCon_Variant_TRIB_HCCTIS_Presence

static FUNC(void, TRIB_CODE_LOCAL) TRIB_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, TRIB_VAR_INIT)
    rty_FaultSts);

#endif

/*
 * Output and update for enable system:
 *    '<S39>/Fail'
 *    '<S59>/Fail'
 *    '<S102>/Fail'
 *    '<S122>/Fail'
 *    '<S164>/Fail'
 *    '<S207>/Fail'
 *    '<S227>/Fail'
 */
#if Rte_SysCon_Variant_TRIB_BTIS_Presence || Rte_SysCon_Variant_TRIB_BTOS_Presence || Rte_SysCon_Variant_TRIB_BatClntSns_Presence || Rte_SysCon_Variant_TRIB_HCCTIS_Presence

static FUNC(void, TRIB_CODE_LOCAL) TRIB_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, TRIB_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S39>/Fail' incorporates:
     *  EnablePort: '<S43>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S43>/FaultSts' incorporates:
         *  Constant: '<S49>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Fail;
    }

    /* End of Outputs for SubSystem: '<S39>/Fail' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S39>/Init'
 *    '<S59>/Init'
 *    '<S102>/Init'
 *    '<S122>/Init'
 *    '<S164>/Init'
 *    '<S207>/Init'
 *    '<S227>/Init'
 */
#if Rte_SysCon_Variant_TRIB_BTIS_Presence || Rte_SysCon_Variant_TRIB_BTOS_Presence || Rte_SysCon_Variant_TRIB_BatClntSns_Presence || Rte_SysCon_Variant_TRIB_HCCTIS_Presence

static FUNC(void, TRIB_CODE_LOCAL) TRIB_ac_Init_i(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, TRIB_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S39>/Init' incorporates:
     *  EnablePort: '<S44>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S44>/FaultSts' incorporates:
         *  Constant: '<S50>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Init;
    }

    /* End of Outputs for SubSystem: '<S39>/Init' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S39>/Pass'
 *    '<S59>/Pass'
 *    '<S102>/Pass'
 *    '<S122>/Pass'
 *    '<S164>/Pass'
 *    '<S207>/Pass'
 *    '<S227>/Pass'
 */
#if Rte_SysCon_Variant_TRIB_BTIS_Presence || Rte_SysCon_Variant_TRIB_BTOS_Presence || Rte_SysCon_Variant_TRIB_BatClntSns_Presence || Rte_SysCon_Variant_TRIB_HCCTIS_Presence

static FUNC(void, TRIB_CODE_LOCAL) TRIB_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, TRIB_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S39>/Pass' incorporates:
     *  EnablePort: '<S45>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S45>/FaultSts' incorporates:
         *  Constant: '<S51>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Pass;
    }

    /* End of Outputs for SubSystem: '<S39>/Pass' */
}

#endif

/* Model step function for TID1 */
FUNC(void, TRIB_CODE) TRIB_MedTEH(void) /* Explicit Task: MedTEH */
{

#if Rte_SysCon_Variant_TRIB_BTIS_Presence || Rte_SysCon_Variant_TRIB_BTOS_Presence || Rte_SysCon_Variant_TRIB_BatClntSns_Presence || Rte_SysCon_Variant_TRIB_HCCTIS_Presence

    sint32 iU;

#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

    IDTRAdcInpResData tmpRead;

#endif

#if Rte_SysCon_Variant_TRIB_BatClntSns_Presence

    IDTRAdcInpResData tmpRead_0;

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

    IDTRAdcInpResData tmpRead_1;

#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

    IDTRAdcInpResData tmpRead_2;

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

    float32 rtb_Vector_p[2];

#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

    float32 rtb_Vector_h[2];

#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

    float32 rtb_Vector[2];

#endif

#if Rte_SysCon_Variant_TRIB_BatClntSns_Presence

    float32 rtb_Vector_o[2];

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence || Rte_SysCon_Variant_TRIB_BTOS_Presence || Rte_SysCon_Variant_TRIB_BatClntSns_Presence || Rte_SysCon_Variant_TRIB_HCCTIS_Presence

    boolean rtb_TmpSignalConversionAtVeADFB_b_A2DFau;

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence || Rte_SysCon_Variant_TRIB_BTOS_Presence || Rte_SysCon_Variant_TRIB_BatClntSns_Presence || Rte_SysCon_Variant_TRIB_HCCTIS_Presence

    boolean rtb_TmpSignalConversionAtVeDFIR_b_IsDiag;

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence || Rte_SysCon_Variant_TRIB_BTOS_Presence || Rte_SysCon_Variant_TRIB_HCCTIS_Presence

    boolean rtb_RelationalOperator3_j;

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence || Rte_SysCon_Variant_TRIB_BTOS_Presence || Rte_SysCon_Variant_TRIB_BatClntSns_Presence || Rte_SysCon_Variant_TRIB_HCCTIS_Presence

    boolean rtb_Logical1_m;

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence || Rte_SysCon_Variant_TRIB_BTOS_Presence || Rte_SysCon_Variant_TRIB_BatClntSns_Presence || Rte_SysCon_Variant_TRIB_HCCTIS_Presence

    boolean rtb_RelationalOperator2_o;

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence || Rte_SysCon_Variant_TRIB_BTOS_Presence || Rte_SysCon_Variant_TRIB_BatClntSns_Presence || Rte_SysCon_Variant_TRIB_HCCTIS_Presence

    boolean rtb_TmpSignalConversionAtVeDFIR_b_DsblDi;

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence || Rte_SysCon_Variant_TRIB_BTOS_Presence || Rte_SysCon_Variant_TRIB_BatClntSns_Presence || Rte_SysCon_Variant_TRIB_HCCTIS_Presence

    boolean rtb_TmpSignalConversionAtVeDFIR_b_PostCo;

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence || Rte_SysCon_Variant_TRIB_BTOS_Presence || Rte_SysCon_Variant_TRIB_BatClntSns_Presence || Rte_SysCon_Variant_TRIB_HCCTIS_Presence

    boolean rtb_NOT4_o;

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence || Rte_SysCon_Variant_TRIB_BTOS_Presence

    boolean rtb_AND_o2;

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence || Rte_SysCon_Variant_TRIB_BTOS_Presence || Rte_SysCon_Variant_TRIB_BatClntSns_Presence || Rte_SysCon_Variant_TRIB_HCCTIS_Presence

    boolean rtb_RelationalOperator1_lo;

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence || Rte_SysCon_Variant_TRIB_BTOS_Presence

    boolean rtb_AND_n;

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence || Rte_SysCon_Variant_TRIB_BTOS_Presence || Rte_SysCon_Variant_TRIB_BatClntSns_Presence || Rte_SysCon_Variant_TRIB_HCCTIS_Presence

    float32 rtb_Switch_aa;

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence || Rte_SysCon_Variant_TRIB_BTOS_Presence || Rte_SysCon_Variant_TRIB_BatClntSns_Presence || Rte_SysCon_Variant_TRIB_HCCTIS_Presence

    float32 rtb_TmpSignalConversionAtVectorInport1_a[2];

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_l;

#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Status;

#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_n;

#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Sta_mx;

#endif

#if Rte_SysCon_Variant_TRIB_BatClntSns_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Sta_e5;

#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_e;

#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_k;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/SigMngtAndCnvn'
     */
    /* SignalConversion generated from: '<S3>/VeDFIR_b_IsDiagGlobalConditionsValid' incorporates:
     *  SignalConversion generated from: '<S3>/VeADFB_b_A2DFault'
     *  SignalConversion generated from: '<S3>/VeDFIR_b_PostCodeClrDiagDsbl'
     *  UnitDelay: '<S3>/Unit Delay'
     */
#if Rte_SysCon_Variant_TRIB_BTIS_Presence || Rte_SysCon_Variant_TRIB_BTOS_Presence || Rte_SysCon_Variant_TRIB_BatClntSns_Presence || Rte_SysCon_Variant_TRIB_HCCTIS_Presence

    /* SignalConversion generated from: '<S3>/VeDFIR_b_IsDiagGlobalConditionsValid' incorporates:
     *  Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid'
     */
    (void)Rte_Read_VeDFIR_b_IsDiagGlobalConditionsValid_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_IsDiag);

    /* SignalConversion generated from: '<S3>/VeDFIR_b_PostCodeClrDiagDsbl' incorporates:
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* SignalConversion generated from: '<S3>/VeADFB_b_A2DFault' incorporates:
     *  Inport: '<Root>/VeADFB_b_A2DFault'
     */
    (void)Rte_Read_VeADFB_b_A2DFault_Value
        (&rtb_TmpSignalConversionAtVeADFB_b_A2DFau);

#endif

    /* End of SignalConversion generated from: '<S3>/VeDFIR_b_IsDiagGlobalConditionsValid' */

    /* SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_HybBatPacCooInlTemSenCirLow' incorporates:
     *  SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_HybBatPacCooInlTemSenCirHig'
     */
#if Rte_SysCon_Variant_TRIB_BTIS_Presence

    /* SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_HybBatPacCooInlTemSenCirLow' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HybBatPacCooInlTemSenCirLow'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HybBatPacCooInlTemSenCirLow_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Status);

    /* SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_HybBatPacCooInlTemSenCirHig' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HybBatPacCooInlTemSenCirHig'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HybBatPacCooInlTemSenCirHig_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_l);

#endif

    /* End of SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_HybBatPacCooInlTemSenCirLow' */

    /* SignalConversion generated from: '<S3>/VeDFIR_b_DsblDiagFailSafe' */
#if Rte_SysCon_Variant_TRIB_BTIS_Presence || Rte_SysCon_Variant_TRIB_BTOS_Presence || Rte_SysCon_Variant_TRIB_BatClntSns_Presence || Rte_SysCon_Variant_TRIB_HCCTIS_Presence

    /* SignalConversion generated from: '<S3>/VeDFIR_b_DsblDiagFailSafe' incorporates:
     *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
     */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_DsblDi);

#endif

    /* End of SignalConversion generated from: '<S3>/VeDFIR_b_DsblDiagFailSafe' */
#if Rte_SysCon_Variant_TRIB_BTIS_Presence

    /* Outputs for Atomic SubSystem: '<S3>/BTIS' */
    /* Outputs for Atomic SubSystem: '<S23>/BTIS' */

    /* RelationalOperator: '<S39>/Relational Operator3' incorporates:
     *  Constant: '<S39>/Constant3'
     *  S-Function (sfix_bitop): '<S39>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_j = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_l) & 64U) == 0U);

    /* Logic: '<S31>/Logical Operator' incorporates:
     *  Logic: '<S31>/Logical Operator1'
     *  Logic: '<S32>/Logical Operator'
     */
    rtb_RelationalOperator1_lo = (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
        (!rtb_TmpSignalConversionAtVeADFB_b_A2DFau));

    /* Logic: '<S39>/Logical1' incorporates:
     *  Constant: '<S34>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S38>/Calib'
     *  Constant: '<S39>/Constant1'
     *  Logic: '<S31>/Logical Operator'
     *  Logic: '<S39>/Logical Operator'
     *  Logic: '<S39>/Logical10'
     *  Logic: '<S39>/Logical12'
     *  RelationalOperator: '<S39>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S39>/Bitwise Operator3'
     */
    rtb_Logical1_m = ((rtb_RelationalOperator1_lo && (KeTRIB_b_STBDiagEnblBTIS))
                      && ((!KeTRIB_b_LtchEnblBTISSTB) || (((((uint32)
                           rtb_TmpSignalConversionAtVeDMAB_y_Stat_l) & 1U) == 0U)
                        || (!rtb_RelationalOperator3_j))));

    /* End of Outputs for SubSystem: '<S23>/BTIS' */

    /* Inport: '<Root>/VeADCR_U_Hvbtis_VsADCR_e_CnvnRes' */
    /* Gateway: SigMngtAndCnvn/BTIS/BTIS/SigAcqnAndFilSys/AntiSpkFil */
    /* During: SigMngtAndCnvn/BTIS/BTIS/SigAcqnAndFilSys/AntiSpkFil */
    (void)Rte_Read_VeADCR_U_Hvbtis_VsADCR_e_CnvnRes(&tmpRead_1);

    /* Outputs for Atomic SubSystem: '<S23>/BTIS' */
    /* Chart: '<S30>/AntiSpkFil' incorporates:
     *  Constant: '<S83>/Calib'
     *  Constant: '<S84>/Calib'
     */
    if (((uint32)TRIB_ac_DW.is_active_c3_TRIB_ac) == 0U)
    {
        /* Entry: SigMngtAndCnvn/BTIS/BTIS/SigAcqnAndFilSys/AntiSpkFil */
        TRIB_ac_DW.is_active_c3_TRIB_ac = 1U;

        /* Entry Internal: SigMngtAndCnvn/BTIS/BTIS/SigAcqnAndFilSys/AntiSpkFil */
        /* Transition: '<S82>:8' */
        TRIB_ac_DW.is_c3_TRIB_ac = TRIB_ac_IN_NORMAL;

        /* Entry 'NORMAL': '<S82>:37' */
        TRIB_ac_B.InputRaw0_p = tmpRead_1.e_CnvnRes;
        VeTRIB_U_BTISVoltRaw = tmpRead_1.e_CnvnRes;
    }
    else if (((sint32)TRIB_ac_DW.is_c3_TRIB_ac) == 1)
    {
        /* During 'FILTERING': '<S82>:38' */
        if (TRIB_ac_B.Cnt_b >= ((float32)KeTRIB_Cnt_BTISSpikeThd))
        {
            /* Transition: '<S82>:40' */
            TRIB_ac_DW.is_c3_TRIB_ac = TRIB_ac_IN_NORMAL;

            /* Entry 'NORMAL': '<S82>:37' */
            TRIB_ac_B.InputRaw0_p = tmpRead_1.e_CnvnRes;
            VeTRIB_U_BTISVoltRaw = tmpRead_1.e_CnvnRes;
        }
        else
        {
            TRIB_ac_B.Cnt_b++;
        }
    }
    else
    {
        /* During 'NORMAL': '<S82>:37' */
        rtb_Switch_aa = tmpRead_1.e_CnvnRes - TRIB_ac_B.InputRaw0_p;
        if ((rtb_Switch_aa > KeTRIB_U_BTISSpikeThd) || (rtb_Switch_aa <
                (-KeTRIB_U_BTISSpikeThd)))
        {
            /* Transition: '<S82>:39' */
            TRIB_ac_DW.is_c3_TRIB_ac = TRIB_ac_IN_FILTERING;

            /* Entry 'FILTERING': '<S82>:38' */
            TRIB_ac_B.Cnt_b = 0.0F;
        }
        else
        {
            VeTRIB_U_BTISVoltRaw = tmpRead_1.e_CnvnRes;
            TRIB_ac_B.InputRaw0_p = tmpRead_1.e_CnvnRes;
        }
    }

    /* End of Chart: '<S30>/AntiSpkFil' */

    /* RelationalOperator: '<S31>/Relational Operator2' incorporates:
     *  Constant: '<S37>/Calib'
     */
    rtb_RelationalOperator2_o = (VeTRIB_U_BTISVoltRaw >
        KeTRIB_U_STBCktHiFltLimBTIS);

    /* Logic: '<S33>/NOT4' */
    rtb_NOT4_o = (rtb_TmpSignalConversionAtVeDFIR_b_DsblDi ||
                  rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* Outputs for Atomic SubSystem: '<S39>/EdgeFalling1' */
    /* Logic: '<S41>/AND' incorporates:
     *  Logic: '<S41>/OR1'
     *  UnitDelay: '<S41>/Unit Delay'
     */
    rtb_AND_o2 = ((!rtb_RelationalOperator3_j) && (TRIB_ac_DW.UnitDelay_DSTATE_c));

    /* Update for UnitDelay: '<S41>/Unit Delay' */
    TRIB_ac_DW.UnitDelay_DSTATE_c = rtb_RelationalOperator3_j;

    /* End of Outputs for SubSystem: '<S39>/EdgeFalling1' */

    /* Logic: '<S39>/Logical5' */
    rtb_RelationalOperator3_j = (rtb_NOT4_o || rtb_AND_o2);

    /* Outputs for Atomic SubSystem: '<S40>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S40>/Counter Reset  Enabled ' */
    /* Switch: '<S47>/Switch1' incorporates:
     *  Logic: '<S40>/Fail Counter Reset'
     *  Logic: '<S40>/NOT6'
     *  Switch: '<S47>/Switch2'
     *  Switch: '<S48>/Switch1'
     *  UnitDelay: '<S40>/Unit Delay'
     *  UnitDelay: '<S40>/Unit Delay1'
     */
    if ((rtb_RelationalOperator3_j || (TRIB_ac_DW.UnitDelay_DSTATE_it)) ||
            (TRIB_ac_DW.UnitDelay1_DSTATE_m))
    {
        /* Switch: '<S47>/Switch1' incorporates:
         *  Constant: '<S47>/Constant Value2'
         */
        VeTRIB_Cnt_STBFailLimBTIS = 0U;

        /* Switch: '<S48>/Switch1' incorporates:
         *  Constant: '<S48>/Constant Value2'
         */
        VeTRIB_Cnt_STBSmplLimBTIS = 0U;
    }
    else
    {
        if (rtb_Logical1_m && rtb_RelationalOperator2_o)
        {
            /* Switch: '<S47>/Switch1' incorporates:
             *  Constant: '<S47>/Constant Value1'
             *  Sum: '<S47>/Subtraction'
             *  Switch: '<S47>/Switch2'
             *  UnitDelay: '<S47>/Unit Delay'
             */
            VeTRIB_Cnt_STBFailLimBTIS = (uint16)(((uint32)
                VeTRIB_Cnt_STBFailLimBTIS) + 1U);
        }

        /* Switch: '<S48>/Switch2' */
        if (rtb_Logical1_m)
        {
            /* Switch: '<S48>/Switch1' incorporates:
             *  Constant: '<S48>/Constant Value1'
             *  Sum: '<S48>/Subtraction'
             *  Switch: '<S48>/Switch2'
             *  UnitDelay: '<S48>/Unit Delay'
             */
            VeTRIB_Cnt_STBSmplLimBTIS = (uint16)(((uint32)
                VeTRIB_Cnt_STBSmplLimBTIS) + 1U);
        }

        /* End of Switch: '<S48>/Switch2' */
    }

    /* End of Switch: '<S47>/Switch1' */
    /* End of Outputs for SubSystem: '<S40>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S40>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S40>/Greater Than or Equal ' incorporates:
     *  Constant: '<S35>/Calib'
     */
    TRIB_ac_DW.UnitDelay1_DSTATE_m = (VeTRIB_Cnt_STBFailLimBTIS >=
        KeTRIB_Cnt_STBFailLimBTIS);

    /* Logic: '<S40>/NOT5' incorporates:
     *  Constant: '<S36>/Calib'
     *  Logic: '<S40>/NOT3'
     *  RelationalOperator: '<S40>/Less Than  or Equal'
     */
    rtb_Logical1_m = ((VeTRIB_Cnt_STBSmplLimBTIS >= KeTRIB_Cnt_STBSmplLimBTIS) &&
                      (!TRIB_ac_DW.UnitDelay1_DSTATE_m));

    /* Switch: '<S53>/Switch1' incorporates:
     *  Constant: '<S46>/Constant Value'
     *  DataStoreWrite: '<S31>/Data Store Write1'
     *  Switch: '<S52>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        TRIB_ac_DW.NeTRIB_Cnt_BTISSTB_MFOP = 0U;
    }
    else
    {
        if (rtb_Logical1_m)
        {
            /* MinMax: '<S46>/Minimum2' incorporates:
             *  DataStoreRead: '<S31>/Data Store Read1'
             *  Switch: '<S52>/Switch1'
             */
            if (VeTRIB_Cnt_STBFailLimBTIS > TRIB_ac_DW.NeTRIB_Cnt_BTISSTB_MFOP)
            {
                /* DataStoreWrite: '<S31>/Data Store Write1' incorporates:
                 *  Switch: '<S52>/Switch1'
                 */
                TRIB_ac_DW.NeTRIB_Cnt_BTISSTB_MFOP = VeTRIB_Cnt_STBFailLimBTIS;
            }

            /* End of MinMax: '<S46>/Minimum2' */
        }
    }

    /* End of Switch: '<S53>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S39>/Fail' */
    TRIB_ac_Fail(TRIB_ac_DW.UnitDelay1_DSTATE_m, &TRIB_ac_B.Merge_k);

    /* End of Outputs for SubSystem: '<S39>/Fail' */

    /* Outputs for Enabled SubSystem: '<S39>/Init' */
    TRIB_ac_Init_i(rtb_RelationalOperator3_j, &TRIB_ac_B.Merge_k);

    /* End of Outputs for SubSystem: '<S39>/Init' */

    /* Outputs for Enabled SubSystem: '<S39>/Pass' */
    TRIB_ac_Pass(rtb_Logical1_m, &TRIB_ac_B.Merge_k);

    /* End of Outputs for SubSystem: '<S39>/Pass' */

    /* RelationalOperator: '<S59>/Relational Operator3' incorporates:
     *  Constant: '<S59>/Constant3'
     *  S-Function (sfix_bitop): '<S59>/Bitwise Operator2'
     */
    rtb_AND_o2 = ((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Status) & 64U) ==
                  0U);

    /* Outputs for Atomic SubSystem: '<S59>/EdgeFalling1' */
    /* Logic: '<S59>/Logical Operator' incorporates:
     *  Logic: '<S61>/OR1'
     */
    rtb_AND_n = !rtb_AND_o2;

    /* End of Outputs for SubSystem: '<S59>/EdgeFalling1' */

    /* Logic: '<S59>/Logical1' incorporates:
     *  Constant: '<S54>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S58>/Calib'
     *  Constant: '<S59>/Constant1'
     *  Logic: '<S32>/Logical Operator'
     *  Logic: '<S59>/Logical Operator'
     *  Logic: '<S59>/Logical10'
     *  Logic: '<S59>/Logical12'
     *  RelationalOperator: '<S59>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S59>/Bitwise Operator3'
     */
    rtb_RelationalOperator3_j = ((rtb_RelationalOperator1_lo &&
        (KeTRIB_b_STGDiagEnbl_BTIS)) && ((!KeTRIB_b_LtchEnblBTISSTG) ||
        (((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Status) & 1U) == 0U) ||
         rtb_AND_n)));

    /* RelationalOperator: '<S32>/Relational Operator1' incorporates:
     *  Constant: '<S57>/Calib'
     */
    rtb_RelationalOperator1_lo = (VeTRIB_U_BTISVoltRaw <
        KeTRIB_U_STGCktLowFltLim_BTIS);

    /* Outputs for Atomic SubSystem: '<S59>/EdgeFalling1' */
    /* Logic: '<S61>/AND' incorporates:
     *  UnitDelay: '<S61>/Unit Delay'
     */
    rtb_AND_n = (rtb_AND_n && (TRIB_ac_DW.UnitDelay_DSTATE_m5));

    /* Update for UnitDelay: '<S61>/Unit Delay' */
    TRIB_ac_DW.UnitDelay_DSTATE_m5 = rtb_AND_o2;

    /* End of Outputs for SubSystem: '<S59>/EdgeFalling1' */

    /* Logic: '<S59>/Logical5' */
    rtb_NOT4_o = (rtb_NOT4_o || rtb_AND_n);

    /* UnitDelay: '<S60>/Unit Delay1' incorporates:
     *  UnitDelay: '<S40>/Unit Delay'
     */
    TRIB_ac_DW.UnitDelay_DSTATE_it = TRIB_ac_DW.UnitDelay1_DSTATE_mh;

    /* Outputs for Atomic SubSystem: '<S60>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S60>/Counter Reset  Enabled ' */
    /* Switch: '<S67>/Switch1' incorporates:
     *  Logic: '<S60>/Fail Counter Reset'
     *  Logic: '<S60>/NOT6'
     *  Switch: '<S67>/Switch2'
     *  Switch: '<S68>/Switch1'
     *  UnitDelay: '<S40>/Unit Delay'
     *  UnitDelay: '<S60>/Unit Delay'
     */
    if ((rtb_NOT4_o || (TRIB_ac_DW.UnitDelay_DSTATE_kr)) ||
            (TRIB_ac_DW.UnitDelay_DSTATE_it))
    {
        /* Switch: '<S67>/Switch1' incorporates:
         *  Constant: '<S67>/Constant Value2'
         */
        VeTRIB_Cnt_STGFailLimBTIS = 0U;

        /* Switch: '<S68>/Switch1' incorporates:
         *  Constant: '<S68>/Constant Value2'
         */
        VeTRIB_Cnt_STGSmplLimBTIS = 0U;
    }
    else
    {
        if (rtb_RelationalOperator3_j && rtb_RelationalOperator1_lo)
        {
            /* Switch: '<S67>/Switch1' incorporates:
             *  Constant: '<S67>/Constant Value1'
             *  Sum: '<S67>/Subtraction'
             *  Switch: '<S67>/Switch2'
             *  UnitDelay: '<S67>/Unit Delay'
             */
            VeTRIB_Cnt_STGFailLimBTIS = (uint16)(((uint32)
                VeTRIB_Cnt_STGFailLimBTIS) + 1U);
        }

        /* Switch: '<S68>/Switch2' */
        if (rtb_RelationalOperator3_j)
        {
            /* Switch: '<S68>/Switch1' incorporates:
             *  Constant: '<S68>/Constant Value1'
             *  Sum: '<S68>/Subtraction'
             *  Switch: '<S68>/Switch2'
             *  UnitDelay: '<S68>/Unit Delay'
             */
            VeTRIB_Cnt_STGSmplLimBTIS = (uint16)(((uint32)
                VeTRIB_Cnt_STGSmplLimBTIS) + 1U);
        }

        /* End of Switch: '<S68>/Switch2' */
    }

    /* End of Switch: '<S67>/Switch1' */
    /* End of Outputs for SubSystem: '<S60>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S60>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S60>/Greater Than or Equal ' incorporates:
     *  Constant: '<S55>/Calib'
     */
    TRIB_ac_DW.UnitDelay1_DSTATE_mh = (VeTRIB_Cnt_STGFailLimBTIS >=
        KeTRIB_Cnt_STGFailLimBTIS);

    /* Logic: '<S60>/NOT5' incorporates:
     *  Constant: '<S56>/Calib'
     *  Logic: '<S60>/NOT3'
     *  RelationalOperator: '<S60>/Less Than  or Equal'
     */
    TRIB_ac_DW.UnitDelay_DSTATE_kr = ((VeTRIB_Cnt_STGSmplLimBTIS >=
        KeTRIB_Cnt_STGSmplLimBTIS) && (!TRIB_ac_DW.UnitDelay1_DSTATE_mh));

    /* Switch: '<S73>/Switch1' incorporates:
     *  Constant: '<S66>/Constant Value'
     *  DataStoreWrite: '<S32>/Data Store Write1'
     *  Switch: '<S72>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        TRIB_ac_DW.NeTRIB_Cnt_BTISSTG_MFOP = 0U;
    }
    else
    {
        if (TRIB_ac_DW.UnitDelay_DSTATE_kr)
        {
            /* MinMax: '<S66>/Minimum2' incorporates:
             *  DataStoreRead: '<S32>/Data Store Read1'
             *  Switch: '<S72>/Switch1'
             */
            if (VeTRIB_Cnt_STGFailLimBTIS > TRIB_ac_DW.NeTRIB_Cnt_BTISSTG_MFOP)
            {
                /* DataStoreWrite: '<S32>/Data Store Write1' incorporates:
                 *  Switch: '<S72>/Switch1'
                 */
                TRIB_ac_DW.NeTRIB_Cnt_BTISSTG_MFOP = VeTRIB_Cnt_STGFailLimBTIS;
            }

            /* End of MinMax: '<S66>/Minimum2' */
        }
    }

    /* End of Switch: '<S73>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S59>/Fail' */
    TRIB_ac_Fail(TRIB_ac_DW.UnitDelay1_DSTATE_mh, &TRIB_ac_B.Merge_e);

    /* End of Outputs for SubSystem: '<S59>/Fail' */

    /* Outputs for Enabled SubSystem: '<S59>/Init' */
    TRIB_ac_Init_i(rtb_NOT4_o, &TRIB_ac_B.Merge_e);

    /* End of Outputs for SubSystem: '<S59>/Init' */

    /* Outputs for Enabled SubSystem: '<S59>/Pass' */
    TRIB_ac_Pass(TRIB_ac_DW.UnitDelay_DSTATE_kr, &TRIB_ac_B.Merge_e);

    /* End of Outputs for SubSystem: '<S59>/Pass' */

    /* Logic: '<S28>/Logical Operator1' incorporates:
     *  Constant: '<S42>/Constant'
     *  Constant: '<S62>/Constant'
     *  Merge: '<S39>/Merge'
     *  Merge: '<S59>/Merge'
     *  RelationalOperator: '<S39>/Relational Operator'
     *  RelationalOperator: '<S59>/Relational Operator'
     */
    rtb_NOT4_o = (((((uint32)TRIB_ac_B.Merge_e) == CeDFIB_e_Fail) || (((uint32)
                     TRIB_ac_B.Merge_k) == CeDFIB_e_Fail)) ||
                  rtb_TmpSignalConversionAtVeADFB_b_A2DFau);

    /* Switch: '<S88>/Switch' incorporates:
     *  Selector: '<S87>/Selector_R'
     */
    if (TRIB_ac_DW.UnitDelay_DSTATE_l)
    {
        /* Assignment: '<S89>/Assignment_y' incorporates:
         *  Switch: '<S75>/Switch'
         */
        VeTRIB_U_BTISVolt = VeTRIB_U_BTISVoltRaw;
    }
    else
    {
        /* Assignment: '<S89>/Assignment_y' incorporates:
         *  Constant: '<S85>/Calib'
         *  Product: '<S88>/Product'
         *  Selector: '<S87>/Selector_u'
         *  Selector: '<S87>/Selector_x'
         *  Sum: '<S88>/Difference'
         *  Sum: '<S88>/Sum'
         *  Switch: '<S75>/Switch'
         *  Switch: '<S88>/Switch_E'
         */
        VeTRIB_U_BTISVolt = ((VeTRIB_U_BTISVoltRaw - VeTRIB_U_BTISVolt) *
                             KeTRIB_k_BTISFiltGx) + VeTRIB_U_BTISVolt;
    }

    /* End of Switch: '<S88>/Switch' */

    /* SignalConversion generated from: '<S74>/Vector' */
    rtb_TmpSignalConversionAtVectorInport1_a[0] = VeTRIB_U_BTISVoltRaw;
    rtb_TmpSignalConversionAtVectorInport1_a[1] = VeTRIB_U_BTISVolt;

    /* Lookup_n-D: '<S74>/Vector' */
    for (iU = 0; iU < 2; iU++)
    {
        rtb_Vector_p[iU] = look1_iflf_binlca_19a
            (rtb_TmpSignalConversionAtVectorInport1_a[iU], ((const float32 *)
              &(KxTRIB_U_BTISChartc[0])), ((const float32 *)
              &(KtTRIB_T_BTISChartc[0])), 23U);
    }

    /* End of Lookup_n-D: '<S74>/Vector' */

    /* Switch: '<S77>/Switch' incorporates:
     *  Logic: '<S28>/Logical Operator'
     *  Logic: '<S29>/Logical Operator1'
     */
    if (((!rtb_RelationalOperator1_lo) && (!rtb_RelationalOperator2_o)) &&
            (!rtb_NOT4_o))
    {
        /* Switch: '<S77>/Switch' */
        TRIB_ac_DW.VeTRIB_T_BTISInit_DSTATE = rtb_Vector_p[1];
    }

    /* End of Switch: '<S77>/Switch' */

    /* Switch: '<S75>/Switch' incorporates:
     *  Constant: '<S79>/Calib'
     *  Constant: '<S81>/Calib'
     *  Logic: '<S76>/Logical Operator1'
     *  Switch: '<S76>/Switch'
     */
    if (KeTRIB_b_BTISBypEnbl)
    {
        /* Switch: '<S75>/Switch' incorporates:
         *  Constant: '<S78>/Calib'
         */
        rtb_Switch_aa = KeTRIB_T_BTISByp;
    }
    else if ((KeTRIB_b_BTISRcvryEnbl) && rtb_NOT4_o)
    {
        /* Switch: '<S76>/Switch' incorporates:
         *  Constant: '<S80>/Calib'
         *  Switch: '<S75>/Switch'
         */
        rtb_Switch_aa = KeTRIB_T_BTISRcvry;
    }
    else
    {
        /* Switch: '<S75>/Switch' incorporates:
         *  Switch: '<S76>/Switch'
         */
        rtb_Switch_aa = TRIB_ac_DW.VeTRIB_T_BTISInit_DSTATE;
    }

    /* End of Switch: '<S75>/Switch' */

    /* FunctionCaller: '<S27>/Function Caller' */
    Rte_Call_PokeTRIR_T_HV_BatClntTmp_In_PokeTRIR_T_HV_BatClntTmp_In
        (rtb_Switch_aa, rtb_NOT4_o);

    /* Outport: '<Root>/VeTRIB_T_HV_BatClntTmp_In' incorporates:
     *  SignalConversion: '<S27>/Signal Conversion'
     */
    (void)Rte_Write_VeTRIB_T_HV_BatClntTmp_In_Value(rtb_Switch_aa);

    /* Outport: '<Root>/VeTRIB_b_HV_BatClntTmp_In_FA' incorporates:
     *  SignalConversion: '<S27>/Signal Conversion1'
     */
    (void)Rte_Write_VeTRIB_b_HV_BatClntTmp_In_FA_Value(rtb_NOT4_o);

    /* Update for UnitDelay: '<S40>/Unit Delay' */
    TRIB_ac_DW.UnitDelay_DSTATE_it = rtb_Logical1_m;

    /* End of Outputs for SubSystem: '<S23>/BTIS' */
    /* End of Outputs for SubSystem: '<S3>/BTIS' */
#endif

    /* SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_HybBatPacCooOutTemSenCir' incorporates:
     *  Inport: '<Root>/VeADCR_U_Hvbtos_VsADCR_e_CnvnRes'
     *  SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_HybBatPacCooOutTemSenCirHig'
     */
#if Rte_SysCon_Variant_TRIB_BTOS_Presence

    /* Outputs for Atomic SubSystem: '<S3>/BTOS' */
    /* SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_HybBatPacCooOutTemSenCir' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HybBatPacCooOutTemSenCir'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HybBatPacCooOutTemSenCir_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Sta_mx);

    /* SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_HybBatPacCooOutTemSenCirHig' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HybBatPacCooOutTemSenCirHig'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HybBatPacCooOutTemSenCirHig_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_n);

    /* Outputs for Atomic SubSystem: '<S24>/BTOS' */

    /* RelationalOperator: '<S102>/Relational Operator3' incorporates:
     *  Constant: '<S102>/Constant3'
     *  S-Function (sfix_bitop): '<S102>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_j = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_n) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S102>/EdgeFalling1' */
    /* Logic: '<S102>/Logical Operator' incorporates:
     *  Logic: '<S104>/OR1'
     */
    rtb_AND_o2 = !rtb_RelationalOperator3_j;

    /* End of Outputs for SubSystem: '<S102>/EdgeFalling1' */

    /* Logic: '<S94>/Logical Operator' incorporates:
     *  Logic: '<S94>/Logical Operator1'
     *  Logic: '<S95>/Logical Operator'
     */
    rtb_RelationalOperator1_lo = (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
        (!rtb_TmpSignalConversionAtVeADFB_b_A2DFau));

    /* Logic: '<S102>/Logical1' incorporates:
     *  Constant: '<S101>/Calib'
     *  Constant: '<S102>/Constant1'
     *  Constant: '<S97>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Logic: '<S102>/Logical Operator'
     *  Logic: '<S102>/Logical10'
     *  Logic: '<S102>/Logical12'
     *  Logic: '<S94>/Logical Operator'
     *  RelationalOperator: '<S102>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S102>/Bitwise Operator3'
     */
    rtb_Logical1_m = ((rtb_RelationalOperator1_lo && (KeTRIB_b_STBDiagEnblBTOS))
                      && ((!KeTRIB_b_LtchEnblBTOSSTB) || (((((uint32)
                           rtb_TmpSignalConversionAtVeDMAB_y_Stat_n) & 1U) == 0U)
                        || rtb_AND_o2)));

    /* End of Outputs for SubSystem: '<S24>/BTOS' */
    /* Gateway: SigMngtAndCnvn/BTOS/BTOS/SigAcqnAndFilSys/AntiSpkFil */
    /* During: SigMngtAndCnvn/BTOS/BTOS/SigAcqnAndFilSys/AntiSpkFil */
    (void)Rte_Read_VeADCR_U_Hvbtos_VsADCR_e_CnvnRes(&tmpRead_2);

    /* Outputs for Atomic SubSystem: '<S24>/BTOS' */
    /* Chart: '<S93>/AntiSpkFil' incorporates:
     *  Constant: '<S146>/Calib'
     *  Constant: '<S147>/Calib'
     *  Inport: '<Root>/VeADCR_U_Hvbtos_VsADCR_e_CnvnRes'
     */
    if (((uint32)TRIB_ac_DW.is_active_c4_TRIB_ac) == 0U)
    {
        /* Entry: SigMngtAndCnvn/BTOS/BTOS/SigAcqnAndFilSys/AntiSpkFil */
        TRIB_ac_DW.is_active_c4_TRIB_ac = 1U;

        /* Entry Internal: SigMngtAndCnvn/BTOS/BTOS/SigAcqnAndFilSys/AntiSpkFil */
        /* Transition: '<S145>:8' */
        TRIB_ac_DW.is_c4_TRIB_ac = TRIB_ac_IN_NORMAL;

        /* Entry 'NORMAL': '<S145>:37' */
        TRIB_ac_B.InputRaw0_c = tmpRead_2.e_CnvnRes;
        VeTRIB_U_BTOSVoltRaw = tmpRead_2.e_CnvnRes;
    }
    else if (((sint32)TRIB_ac_DW.is_c4_TRIB_ac) == 1)
    {
        /* During 'FILTERING': '<S145>:38' */
        if (TRIB_ac_B.Cnt_j >= ((float32)KeTRIB_Cnt_BTOSSpikeThd))
        {
            /* Transition: '<S145>:40' */
            TRIB_ac_DW.is_c4_TRIB_ac = TRIB_ac_IN_NORMAL;

            /* Entry 'NORMAL': '<S145>:37' */
            TRIB_ac_B.InputRaw0_c = tmpRead_2.e_CnvnRes;
            VeTRIB_U_BTOSVoltRaw = tmpRead_2.e_CnvnRes;
        }
        else
        {
            TRIB_ac_B.Cnt_j++;
        }
    }
    else
    {
        /* During 'NORMAL': '<S145>:37' */
        rtb_Switch_aa = tmpRead_2.e_CnvnRes - TRIB_ac_B.InputRaw0_c;
        if ((rtb_Switch_aa > KeTRIB_U_BTOSSpikeThd) || (rtb_Switch_aa <
                (-KeTRIB_U_BTOSSpikeThd)))
        {
            /* Transition: '<S145>:39' */
            TRIB_ac_DW.is_c4_TRIB_ac = TRIB_ac_IN_FILTERING;

            /* Entry 'FILTERING': '<S145>:38' */
            TRIB_ac_B.Cnt_j = 0.0F;
        }
        else
        {
            VeTRIB_U_BTOSVoltRaw = tmpRead_2.e_CnvnRes;
            TRIB_ac_B.InputRaw0_c = tmpRead_2.e_CnvnRes;
        }
    }

    /* End of Chart: '<S93>/AntiSpkFil' */

    /* RelationalOperator: '<S94>/Relational Operator2' incorporates:
     *  Constant: '<S100>/Calib'
     */
    rtb_RelationalOperator2_o = (VeTRIB_U_BTOSVoltRaw >
        KeTRIB_U_STBCktHiFltLimBTOS);

    /* Logic: '<S96>/NOT4' */
    rtb_NOT4_o = (rtb_TmpSignalConversionAtVeDFIR_b_DsblDi ||
                  rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* Outputs for Atomic SubSystem: '<S102>/EdgeFalling1' */
    /* Logic: '<S104>/AND' incorporates:
     *  UnitDelay: '<S104>/Unit Delay'
     */
    rtb_AND_o2 = (rtb_AND_o2 && (TRIB_ac_DW.UnitDelay_DSTATE_i2));

    /* Update for UnitDelay: '<S104>/Unit Delay' */
    TRIB_ac_DW.UnitDelay_DSTATE_i2 = rtb_RelationalOperator3_j;

    /* End of Outputs for SubSystem: '<S102>/EdgeFalling1' */

    /* Logic: '<S102>/Logical5' */
    rtb_RelationalOperator3_j = (rtb_NOT4_o || rtb_AND_o2);

    /* Outputs for Atomic SubSystem: '<S103>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S103>/Counter Reset  Enabled ' */
    /* Switch: '<S110>/Switch1' incorporates:
     *  Logic: '<S103>/Fail Counter Reset'
     *  Logic: '<S103>/NOT6'
     *  Switch: '<S110>/Switch2'
     *  Switch: '<S111>/Switch1'
     *  UnitDelay: '<S103>/Unit Delay'
     *  UnitDelay: '<S103>/Unit Delay1'
     */
    if ((rtb_RelationalOperator3_j || (TRIB_ac_DW.UnitDelay_DSTATE_kx)) ||
            (TRIB_ac_DW.UnitDelay1_DSTATE_a))
    {
        /* Switch: '<S110>/Switch1' incorporates:
         *  Constant: '<S110>/Constant Value2'
         */
        VeTRIB_Cnt_STBFailLimBTOS = 0U;

        /* Switch: '<S111>/Switch1' incorporates:
         *  Constant: '<S111>/Constant Value2'
         */
        VeTRIB_Cnt_STBSmplLimBTOS = 0U;
    }
    else
    {
        if (rtb_Logical1_m && rtb_RelationalOperator2_o)
        {
            /* Switch: '<S110>/Switch1' incorporates:
             *  Constant: '<S110>/Constant Value1'
             *  Sum: '<S110>/Subtraction'
             *  Switch: '<S110>/Switch2'
             *  UnitDelay: '<S110>/Unit Delay'
             */
            VeTRIB_Cnt_STBFailLimBTOS = (uint16)(((uint32)
                VeTRIB_Cnt_STBFailLimBTOS) + 1U);
        }

        /* Switch: '<S111>/Switch2' */
        if (rtb_Logical1_m)
        {
            /* Switch: '<S111>/Switch1' incorporates:
             *  Constant: '<S111>/Constant Value1'
             *  Sum: '<S111>/Subtraction'
             *  Switch: '<S111>/Switch2'
             *  UnitDelay: '<S111>/Unit Delay'
             */
            VeTRIB_Cnt_STBSmplLimBTOS = (uint16)(((uint32)
                VeTRIB_Cnt_STBSmplLimBTOS) + 1U);
        }

        /* End of Switch: '<S111>/Switch2' */
    }

    /* End of Switch: '<S110>/Switch1' */
    /* End of Outputs for SubSystem: '<S103>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S103>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S103>/Greater Than or Equal ' incorporates:
     *  Constant: '<S98>/Calib'
     */
    TRIB_ac_DW.UnitDelay1_DSTATE_a = (VeTRIB_Cnt_STBFailLimBTOS >=
        KeTRIB_Cnt_STBFailLimBTOS);

    /* Logic: '<S103>/NOT5' incorporates:
     *  Constant: '<S99>/Calib'
     *  Logic: '<S103>/NOT3'
     *  RelationalOperator: '<S103>/Less Than  or Equal'
     */
    rtb_Logical1_m = ((VeTRIB_Cnt_STBSmplLimBTOS >= KeTRIB_Cnt_STBSmplLimBTOS) &&
                      (!TRIB_ac_DW.UnitDelay1_DSTATE_a));

    /* Switch: '<S116>/Switch1' incorporates:
     *  Constant: '<S109>/Constant Value'
     *  DataStoreWrite: '<S94>/Data Store Write1'
     *  Switch: '<S115>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        TRIB_ac_DW.NeTRIB_Cnt_BTOSSTB_MFOP = 0U;
    }
    else
    {
        if (rtb_Logical1_m)
        {
            /* MinMax: '<S109>/Minimum2' incorporates:
             *  DataStoreRead: '<S94>/Data Store Read1'
             *  Switch: '<S115>/Switch1'
             */
            if (VeTRIB_Cnt_STBFailLimBTOS > TRIB_ac_DW.NeTRIB_Cnt_BTOSSTB_MFOP)
            {
                /* DataStoreWrite: '<S94>/Data Store Write1' incorporates:
                 *  Switch: '<S115>/Switch1'
                 */
                TRIB_ac_DW.NeTRIB_Cnt_BTOSSTB_MFOP = VeTRIB_Cnt_STBFailLimBTOS;
            }

            /* End of MinMax: '<S109>/Minimum2' */
        }
    }

    /* End of Switch: '<S116>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S102>/Fail' */
    TRIB_ac_Fail(TRIB_ac_DW.UnitDelay1_DSTATE_a, &TRIB_ac_B.Merge_f);

    /* End of Outputs for SubSystem: '<S102>/Fail' */

    /* Outputs for Enabled SubSystem: '<S102>/Init' */
    TRIB_ac_Init_i(rtb_RelationalOperator3_j, &TRIB_ac_B.Merge_f);

    /* End of Outputs for SubSystem: '<S102>/Init' */

    /* Outputs for Enabled SubSystem: '<S102>/Pass' */
    TRIB_ac_Pass(rtb_Logical1_m, &TRIB_ac_B.Merge_f);

    /* End of Outputs for SubSystem: '<S102>/Pass' */

    /* RelationalOperator: '<S122>/Relational Operator3' incorporates:
     *  Constant: '<S122>/Constant3'
     *  S-Function (sfix_bitop): '<S122>/Bitwise Operator2'
     */
    rtb_AND_o2 = ((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Sta_mx) & 64U) ==
                  0U);

    /* Outputs for Atomic SubSystem: '<S122>/EdgeFalling1' */
    /* Logic: '<S122>/Logical Operator' incorporates:
     *  Logic: '<S124>/OR1'
     */
    rtb_AND_n = !rtb_AND_o2;

    /* End of Outputs for SubSystem: '<S122>/EdgeFalling1' */

    /* Logic: '<S122>/Logical1' incorporates:
     *  Constant: '<S117>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S121>/Calib'
     *  Constant: '<S122>/Constant1'
     *  Logic: '<S122>/Logical Operator'
     *  Logic: '<S122>/Logical10'
     *  Logic: '<S122>/Logical12'
     *  Logic: '<S95>/Logical Operator'
     *  RelationalOperator: '<S122>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S122>/Bitwise Operator3'
     */
    rtb_RelationalOperator3_j = ((rtb_RelationalOperator1_lo &&
        (KeTRIB_b_STGDiagEnbl_BTOS)) && ((!KeTRIB_b_LtchEnblBTOSSTG) ||
        (((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Sta_mx) & 1U) == 0U) ||
         rtb_AND_n)));

    /* RelationalOperator: '<S95>/Relational Operator1' incorporates:
     *  Constant: '<S120>/Calib'
     */
    rtb_RelationalOperator1_lo = (VeTRIB_U_BTOSVoltRaw <
        KeTRIB_U_STGCktLowFltLim_BTOS);

    /* Outputs for Atomic SubSystem: '<S122>/EdgeFalling1' */
    /* Logic: '<S124>/AND' incorporates:
     *  UnitDelay: '<S124>/Unit Delay'
     */
    rtb_AND_n = (rtb_AND_n && (TRIB_ac_DW.UnitDelay_DSTATE_di));

    /* Update for UnitDelay: '<S124>/Unit Delay' */
    TRIB_ac_DW.UnitDelay_DSTATE_di = rtb_AND_o2;

    /* End of Outputs for SubSystem: '<S122>/EdgeFalling1' */

    /* Logic: '<S122>/Logical5' */
    rtb_NOT4_o = (rtb_NOT4_o || rtb_AND_n);

    /* UnitDelay: '<S123>/Unit Delay1' incorporates:
     *  UnitDelay: '<S103>/Unit Delay'
     */
    TRIB_ac_DW.UnitDelay_DSTATE_kx = TRIB_ac_DW.UnitDelay1_DSTATE_i;

    /* Outputs for Atomic SubSystem: '<S123>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S123>/Counter Reset  Enabled ' */
    /* Switch: '<S130>/Switch1' incorporates:
     *  Logic: '<S123>/Fail Counter Reset'
     *  Logic: '<S123>/NOT6'
     *  Switch: '<S130>/Switch2'
     *  Switch: '<S131>/Switch1'
     *  UnitDelay: '<S103>/Unit Delay'
     *  UnitDelay: '<S123>/Unit Delay'
     */
    if ((rtb_NOT4_o || (TRIB_ac_DW.UnitDelay_DSTATE_ai)) ||
            (TRIB_ac_DW.UnitDelay_DSTATE_kx))
    {
        /* Switch: '<S130>/Switch1' incorporates:
         *  Constant: '<S130>/Constant Value2'
         */
        VeTRIB_Cnt_STGFailLimBTOS = 0U;

        /* Switch: '<S131>/Switch1' incorporates:
         *  Constant: '<S131>/Constant Value2'
         */
        VeTRIB_Cnt_STGSmplLimBTOS = 0U;
    }
    else
    {
        if (rtb_RelationalOperator3_j && rtb_RelationalOperator1_lo)
        {
            /* Switch: '<S130>/Switch1' incorporates:
             *  Constant: '<S130>/Constant Value1'
             *  Sum: '<S130>/Subtraction'
             *  Switch: '<S130>/Switch2'
             *  UnitDelay: '<S130>/Unit Delay'
             */
            VeTRIB_Cnt_STGFailLimBTOS = (uint16)(((uint32)
                VeTRIB_Cnt_STGFailLimBTOS) + 1U);
        }

        /* Switch: '<S131>/Switch2' */
        if (rtb_RelationalOperator3_j)
        {
            /* Switch: '<S131>/Switch1' incorporates:
             *  Constant: '<S131>/Constant Value1'
             *  Sum: '<S131>/Subtraction'
             *  Switch: '<S131>/Switch2'
             *  UnitDelay: '<S131>/Unit Delay'
             */
            VeTRIB_Cnt_STGSmplLimBTOS = (uint16)(((uint32)
                VeTRIB_Cnt_STGSmplLimBTOS) + 1U);
        }

        /* End of Switch: '<S131>/Switch2' */
    }

    /* End of Switch: '<S130>/Switch1' */
    /* End of Outputs for SubSystem: '<S123>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S123>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S123>/Greater Than or Equal ' incorporates:
     *  Constant: '<S118>/Calib'
     */
    TRIB_ac_DW.UnitDelay1_DSTATE_i = (VeTRIB_Cnt_STGFailLimBTOS >=
        KeTRIB_Cnt_STGFailLimBTOS);

    /* Logic: '<S123>/NOT5' incorporates:
     *  Constant: '<S119>/Calib'
     *  Logic: '<S123>/NOT3'
     *  RelationalOperator: '<S123>/Less Than  or Equal'
     */
    TRIB_ac_DW.UnitDelay_DSTATE_ai = ((VeTRIB_Cnt_STGSmplLimBTOS >=
        KeTRIB_Cnt_STGSmplLimBTOS) && (!TRIB_ac_DW.UnitDelay1_DSTATE_i));

    /* Switch: '<S136>/Switch1' incorporates:
     *  Constant: '<S129>/Constant Value'
     *  DataStoreWrite: '<S95>/Data Store Write1'
     *  Switch: '<S135>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        TRIB_ac_DW.NeTRIB_Cnt_BTOSSTG_MFOP = 0U;
    }
    else
    {
        if (TRIB_ac_DW.UnitDelay_DSTATE_ai)
        {
            /* MinMax: '<S129>/Minimum2' incorporates:
             *  DataStoreRead: '<S95>/Data Store Read1'
             *  Switch: '<S135>/Switch1'
             */
            if (VeTRIB_Cnt_STGFailLimBTOS > TRIB_ac_DW.NeTRIB_Cnt_BTOSSTG_MFOP)
            {
                /* DataStoreWrite: '<S95>/Data Store Write1' incorporates:
                 *  Switch: '<S135>/Switch1'
                 */
                TRIB_ac_DW.NeTRIB_Cnt_BTOSSTG_MFOP = VeTRIB_Cnt_STGFailLimBTOS;
            }

            /* End of MinMax: '<S129>/Minimum2' */
        }
    }

    /* End of Switch: '<S136>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S122>/Fail' */
    TRIB_ac_Fail(TRIB_ac_DW.UnitDelay1_DSTATE_i, &TRIB_ac_B.Merge_c);

    /* End of Outputs for SubSystem: '<S122>/Fail' */

    /* Outputs for Enabled SubSystem: '<S122>/Init' */
    TRIB_ac_Init_i(rtb_NOT4_o, &TRIB_ac_B.Merge_c);

    /* End of Outputs for SubSystem: '<S122>/Init' */

    /* Outputs for Enabled SubSystem: '<S122>/Pass' */
    TRIB_ac_Pass(TRIB_ac_DW.UnitDelay_DSTATE_ai, &TRIB_ac_B.Merge_c);

    /* End of Outputs for SubSystem: '<S122>/Pass' */

    /* Logic: '<S91>/Logical Operator1' incorporates:
     *  Constant: '<S105>/Constant'
     *  Constant: '<S125>/Constant'
     *  Merge: '<S102>/Merge'
     *  Merge: '<S122>/Merge'
     *  RelationalOperator: '<S102>/Relational Operator'
     *  RelationalOperator: '<S122>/Relational Operator'
     */
    rtb_NOT4_o = (((((uint32)TRIB_ac_B.Merge_c) == CeDFIB_e_Fail) || (((uint32)
                     TRIB_ac_B.Merge_f) == CeDFIB_e_Fail)) ||
                  rtb_TmpSignalConversionAtVeADFB_b_A2DFau);

    /* Switch: '<S151>/Switch' incorporates:
     *  Selector: '<S150>/Selector_R'
     */
    if (TRIB_ac_DW.UnitDelay_DSTATE_l)
    {
        /* Assignment: '<S152>/Assignment_y' incorporates:
         *  Switch: '<S138>/Switch'
         */
        VeTRIB_U_BTOSVolt = VeTRIB_U_BTOSVoltRaw;
    }
    else
    {
        /* Assignment: '<S152>/Assignment_y' incorporates:
         *  Constant: '<S148>/Calib'
         *  Product: '<S151>/Product'
         *  Selector: '<S150>/Selector_u'
         *  Selector: '<S150>/Selector_x'
         *  Sum: '<S151>/Difference'
         *  Sum: '<S151>/Sum'
         *  Switch: '<S138>/Switch'
         *  Switch: '<S151>/Switch_E'
         */
        VeTRIB_U_BTOSVolt = ((VeTRIB_U_BTOSVoltRaw - VeTRIB_U_BTOSVolt) *
                             KeTRIB_k_BTOSFiltGx) + VeTRIB_U_BTOSVolt;
    }

    /* End of Switch: '<S151>/Switch' */

    /* SignalConversion generated from: '<S137>/Vector' */
    rtb_TmpSignalConversionAtVectorInport1_a[0] = VeTRIB_U_BTOSVoltRaw;
    rtb_TmpSignalConversionAtVectorInport1_a[1] = VeTRIB_U_BTOSVolt;

    /* Lookup_n-D: '<S137>/Vector' */
    for (iU = 0; iU < 2; iU++)
    {
        rtb_Vector_h[iU] = look1_iflf_binlca_19a
            (rtb_TmpSignalConversionAtVectorInport1_a[iU], ((const float32 *)
              &(KxTRIB_U_BTOSChartc[0])), ((const float32 *)
              &(KtTRIB_T_BTOSChartc[0])), 23U);
    }

    /* End of Lookup_n-D: '<S137>/Vector' */

    /* Switch: '<S140>/Switch' incorporates:
     *  Logic: '<S91>/Logical Operator'
     *  Logic: '<S92>/Logical Operator1'
     */
    if (((!rtb_RelationalOperator1_lo) && (!rtb_RelationalOperator2_o)) &&
            (!rtb_NOT4_o))
    {
        /* Switch: '<S140>/Switch' */
        TRIB_ac_DW.VeTRIB_T_BTOSInit_DSTATE = rtb_Vector_h[1];
    }

    /* End of Switch: '<S140>/Switch' */

    /* Switch: '<S138>/Switch' incorporates:
     *  Constant: '<S142>/Calib'
     *  Constant: '<S144>/Calib'
     *  Logic: '<S139>/Logical Operator1'
     *  Switch: '<S139>/Switch'
     */
    if (KeTRIB_b_BTOSBypEnbl)
    {
        /* Outport: '<Root>/VeTRIB_T_HV_BatClntTmpOut' incorporates:
         *  Constant: '<S141>/Calib'
         *  SignalConversion: '<S90>/Signal Conversion'
         */
        (void)Rte_Write_VeTRIB_T_HV_BatClntTmpOut_Value(KeTRIB_T_BTOSByp);
    }
    else if ((KeTRIB_b_BTOSRcvryEnbl) && rtb_NOT4_o)
    {
        /* Outport: '<Root>/VeTRIB_T_HV_BatClntTmpOut' incorporates:
         *  Constant: '<S143>/Calib'
         *  SignalConversion: '<S90>/Signal Conversion'
         *  Switch: '<S139>/Switch'
         */
        (void)Rte_Write_VeTRIB_T_HV_BatClntTmpOut_Value(KeTRIB_T_BTOSRcvry);
    }
    else
    {
        /* Outport: '<Root>/VeTRIB_T_HV_BatClntTmpOut' incorporates:
         *  SignalConversion: '<S90>/Signal Conversion'
         *  Switch: '<S139>/Switch'
         */
        (void)Rte_Write_VeTRIB_T_HV_BatClntTmpOut_Value
            (TRIB_ac_DW.VeTRIB_T_BTOSInit_DSTATE);
    }

    /* End of Switch: '<S138>/Switch' */

    /* Outport: '<Root>/VeTRIB_b_HV_BatClntTmp_Out_FA' incorporates:
     *  SignalConversion: '<S90>/Signal Conversion1'
     */
    (void)Rte_Write_VeTRIB_b_HV_BatClntTmp_Out_FA_Value(rtb_NOT4_o);

    /* Update for UnitDelay: '<S103>/Unit Delay' */
    TRIB_ac_DW.UnitDelay_DSTATE_kx = rtb_Logical1_m;

    /* End of Outputs for SubSystem: '<S24>/BTOS' */
    /* End of Outputs for SubSystem: '<S3>/BTOS' */
#endif

    /* End of SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_HybBatPacCooOutTemSenCir' */

    /* SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_BattCoolLvlSnsCkt' incorporates:
     *  Inport: '<Root>/VeADCR_U_Bcls_VsADCR_e_CnvnRes'
     */
#if Rte_SysCon_Variant_TRIB_BatClntSns_Presence

    /* Outputs for Atomic SubSystem: '<S3>/BatClntSns' */
    /* SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_BattCoolLvlSnsCkt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattCoolLvlSnsCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattCoolLvlSnsCkt_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Sta_e5);

    /* Outputs for Atomic SubSystem: '<S25>/BatClntSns' */

    /* RelationalOperator: '<S164>/Relational Operator3' incorporates:
     *  Constant: '<S164>/Constant3'
     *  S-Function (sfix_bitop): '<S164>/Bitwise Operator2'
     */
    rtb_Logical1_m = ((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Sta_e5) & 64U)
                      == 0U);

    /* Outputs for Atomic SubSystem: '<S164>/EdgeFalling1' */
    /* Logic: '<S164>/Logical Operator' incorporates:
     *  Logic: '<S166>/OR1'
     */
    rtb_RelationalOperator1_lo = !rtb_Logical1_m;

    /* End of Outputs for SubSystem: '<S164>/EdgeFalling1' */

    /* Logic: '<S164>/Logical1' incorporates:
     *  Constant: '<S159>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S163>/Calib'
     *  Constant: '<S164>/Constant1'
     *  Logic: '<S157>/Logical Operator'
     *  Logic: '<S157>/Logical Operator1'
     *  Logic: '<S164>/Logical Operator'
     *  Logic: '<S164>/Logical10'
     *  Logic: '<S164>/Logical12'
     *  RelationalOperator: '<S164>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S164>/Bitwise Operator3'
     */
    rtb_NOT4_o = (((rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
                    (!rtb_TmpSignalConversionAtVeADFB_b_A2DFau)) &&
                   (KeTRIB_b_STGDiagEnblBatClntSns)) &&
                  ((!KeTRIB_b_LtchEnblBatClntSnsSTG) || (((((uint32)
                       rtb_TmpSignalConversionAtVeDMAB_y_Sta_e5) & 1U) == 0U) ||
                    rtb_RelationalOperator1_lo)));

    /* End of Outputs for SubSystem: '<S25>/BatClntSns' */
    /* Gateway: SigMngtAndCnvn/BatClntSns/BatClntSns/SigAcqnAndFilSys/AntiSpkFil */
    /* During: SigMngtAndCnvn/BatClntSns/BatClntSns/SigAcqnAndFilSys/AntiSpkFil */
    (void)Rte_Read_VeADCR_U_Bcls_VsADCR_e_CnvnRes(&tmpRead_0);

    /* Outputs for Atomic SubSystem: '<S25>/BatClntSns' */
    /* Chart: '<S156>/AntiSpkFil' incorporates:
     *  Constant: '<S188>/Calib'
     *  Constant: '<S189>/Calib'
     *  Inport: '<Root>/VeADCR_U_Bcls_VsADCR_e_CnvnRes'
     */
    if (((uint32)TRIB_ac_DW.is_active_c1_TRIB_ac) == 0U)
    {
        /* Entry: SigMngtAndCnvn/BatClntSns/BatClntSns/SigAcqnAndFilSys/AntiSpkFil */
        TRIB_ac_DW.is_active_c1_TRIB_ac = 1U;

        /* Entry Internal: SigMngtAndCnvn/BatClntSns/BatClntSns/SigAcqnAndFilSys/AntiSpkFil */
        /* Transition: '<S187>:8' */
        TRIB_ac_DW.is_c1_TRIB_ac = TRIB_ac_IN_NORMAL;

        /* Entry 'NORMAL': '<S187>:37' */
        TRIB_ac_B.InputRaw0_g = tmpRead_0.e_CnvnRes;
        VeTRIB_U_BatClntSnsVoltRaw = tmpRead_0.e_CnvnRes;
    }
    else if (((sint32)TRIB_ac_DW.is_c1_TRIB_ac) == 1)
    {
        /* During 'FILTERING': '<S187>:38' */
        if (TRIB_ac_B.Cnt_l >= ((float32)KeTRIB_Cnt_BatClntSnsSpikeThd))
        {
            /* Transition: '<S187>:40' */
            TRIB_ac_DW.is_c1_TRIB_ac = TRIB_ac_IN_NORMAL;

            /* Entry 'NORMAL': '<S187>:37' */
            TRIB_ac_B.InputRaw0_g = tmpRead_0.e_CnvnRes;
            VeTRIB_U_BatClntSnsVoltRaw = tmpRead_0.e_CnvnRes;
        }
        else
        {
            TRIB_ac_B.Cnt_l++;
        }
    }
    else
    {
        /* During 'NORMAL': '<S187>:37' */
        rtb_Switch_aa = tmpRead_0.e_CnvnRes - TRIB_ac_B.InputRaw0_g;
        if ((rtb_Switch_aa > KeTRIB_U_BatClntSnsSpikeThd) || (rtb_Switch_aa <
                (-KeTRIB_U_BatClntSnsSpikeThd)))
        {
            /* Transition: '<S187>:39' */
            TRIB_ac_DW.is_c1_TRIB_ac = TRIB_ac_IN_FILTERING;

            /* Entry 'FILTERING': '<S187>:38' */
            TRIB_ac_B.Cnt_l = 0.0F;
        }
        else
        {
            VeTRIB_U_BatClntSnsVoltRaw = tmpRead_0.e_CnvnRes;
            TRIB_ac_B.InputRaw0_g = tmpRead_0.e_CnvnRes;
        }
    }

    /* End of Chart: '<S156>/AntiSpkFil' */

    /* RelationalOperator: '<S157>/Relational Operator1' incorporates:
     *  Constant: '<S162>/Calib'
     */
    rtb_RelationalOperator2_o = (VeTRIB_U_BatClntSnsVoltRaw <
        KeTRIB_U_STGCktLowFltLimBatClntSns);

    /* Outputs for Atomic SubSystem: '<S164>/EdgeFalling1' */
    /* Logic: '<S166>/AND' incorporates:
     *  UnitDelay: '<S166>/Unit Delay'
     */
    rtb_RelationalOperator1_lo = (rtb_RelationalOperator1_lo &&
        (TRIB_ac_DW.UnitDelay_DSTATE_bo));

    /* Update for UnitDelay: '<S166>/Unit Delay' */
    TRIB_ac_DW.UnitDelay_DSTATE_bo = rtb_Logical1_m;

    /* End of Outputs for SubSystem: '<S164>/EdgeFalling1' */

    /* Logic: '<S164>/Logical5' incorporates:
     *  Logic: '<S158>/NOT4'
     */
    rtb_Logical1_m = ((rtb_TmpSignalConversionAtVeDFIR_b_DsblDi ||
                       rtb_TmpSignalConversionAtVeDFIR_b_PostCo) ||
                      rtb_RelationalOperator1_lo);

    /* Outputs for Atomic SubSystem: '<S165>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S165>/Counter Reset  Enabled ' */
    /* Switch: '<S172>/Switch1' incorporates:
     *  Logic: '<S165>/Fail Counter Reset'
     *  Logic: '<S165>/NOT6'
     *  Switch: '<S172>/Switch2'
     *  Switch: '<S173>/Switch1'
     *  UnitDelay: '<S165>/Unit Delay'
     *  UnitDelay: '<S165>/Unit Delay1'
     */
    if ((rtb_Logical1_m || (TRIB_ac_DW.UnitDelay_DSTATE_aw)) ||
            (TRIB_ac_DW.UnitDelay1_DSTATE_j))
    {
        /* Switch: '<S172>/Switch1' incorporates:
         *  Constant: '<S172>/Constant Value2'
         */
        VeTRIB_Cnt_STGFailLimBatClntSns = 0U;

        /* Switch: '<S173>/Switch1' incorporates:
         *  Constant: '<S173>/Constant Value2'
         */
        VeTRIB_Cnt_STGSmplLimBatClntSns = 0U;
    }
    else
    {
        if (rtb_NOT4_o && rtb_RelationalOperator2_o)
        {
            /* Switch: '<S172>/Switch1' incorporates:
             *  Constant: '<S172>/Constant Value1'
             *  Sum: '<S172>/Subtraction'
             *  Switch: '<S172>/Switch2'
             *  UnitDelay: '<S172>/Unit Delay'
             */
            VeTRIB_Cnt_STGFailLimBatClntSns = (uint16)(((uint32)
                VeTRIB_Cnt_STGFailLimBatClntSns) + 1U);
        }

        /* Switch: '<S173>/Switch2' */
        if (rtb_NOT4_o)
        {
            /* Switch: '<S173>/Switch1' incorporates:
             *  Constant: '<S173>/Constant Value1'
             *  Sum: '<S173>/Subtraction'
             *  Switch: '<S173>/Switch2'
             *  UnitDelay: '<S173>/Unit Delay'
             */
            VeTRIB_Cnt_STGSmplLimBatClntSns = (uint16)(((uint32)
                VeTRIB_Cnt_STGSmplLimBatClntSns) + 1U);
        }

        /* End of Switch: '<S173>/Switch2' */
    }

    /* End of Switch: '<S172>/Switch1' */
    /* End of Outputs for SubSystem: '<S165>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S165>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S165>/Greater Than or Equal ' incorporates:
     *  Constant: '<S160>/Calib'
     */
    TRIB_ac_DW.UnitDelay1_DSTATE_j = (VeTRIB_Cnt_STGFailLimBatClntSns >=
        KeTRIB_Cnt_STGFailLimBatClntSns);

    /* Logic: '<S165>/NOT5' incorporates:
     *  Constant: '<S161>/Calib'
     *  Logic: '<S165>/NOT3'
     *  RelationalOperator: '<S165>/Less Than  or Equal'
     */
    TRIB_ac_DW.UnitDelay_DSTATE_aw = ((VeTRIB_Cnt_STGSmplLimBatClntSns >=
        KeTRIB_Cnt_STGSmplLimBatClntSns) && (!TRIB_ac_DW.UnitDelay1_DSTATE_j));

    /* Switch: '<S178>/Switch1' incorporates:
     *  Constant: '<S171>/Constant Value'
     *  DataStoreWrite: '<S157>/Data Store Write1'
     *  Switch: '<S177>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        TRIB_ac_DW.NeTRIB_Cnt_BatClntSnsSTG_MFOP = 0U;
    }
    else
    {
        if (TRIB_ac_DW.UnitDelay_DSTATE_aw)
        {
            /* MinMax: '<S171>/Minimum2' incorporates:
             *  DataStoreRead: '<S157>/Data Store Read1'
             *  Switch: '<S177>/Switch1'
             */
            if (VeTRIB_Cnt_STGFailLimBatClntSns >
                    TRIB_ac_DW.NeTRIB_Cnt_BatClntSnsSTG_MFOP)
            {
                /* DataStoreWrite: '<S157>/Data Store Write1' incorporates:
                 *  Switch: '<S177>/Switch1'
                 */
                TRIB_ac_DW.NeTRIB_Cnt_BatClntSnsSTG_MFOP =
                    VeTRIB_Cnt_STGFailLimBatClntSns;
            }

            /* End of MinMax: '<S171>/Minimum2' */
        }
    }

    /* End of Switch: '<S178>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S164>/Fail' */
    TRIB_ac_Fail(TRIB_ac_DW.UnitDelay1_DSTATE_j, &TRIB_ac_B.Merge_g);

    /* End of Outputs for SubSystem: '<S164>/Fail' */

    /* Outputs for Enabled SubSystem: '<S164>/Init' */
    TRIB_ac_Init_i(rtb_Logical1_m, &TRIB_ac_B.Merge_g);

    /* End of Outputs for SubSystem: '<S164>/Init' */

    /* Outputs for Enabled SubSystem: '<S164>/Pass' */
    TRIB_ac_Pass(TRIB_ac_DW.UnitDelay_DSTATE_aw, &TRIB_ac_B.Merge_g);

    /* End of Outputs for SubSystem: '<S164>/Pass' */

    /* Logic: '<S154>/Logical Operator1' incorporates:
     *  Constant: '<S167>/Constant'
     *  Merge: '<S164>/Merge'
     *  RelationalOperator: '<S164>/Relational Operator'
     */
    rtb_NOT4_o = ((((uint32)TRIB_ac_B.Merge_g) == CeDFIB_e_Fail) ||
                  rtb_TmpSignalConversionAtVeADFB_b_A2DFau);

    /* Switch: '<S193>/Switch' incorporates:
     *  Selector: '<S192>/Selector_R'
     */
    if (TRIB_ac_DW.UnitDelay_DSTATE_l)
    {
        /* Assignment: '<S194>/Assignment_y' incorporates:
         *  Switch: '<S180>/Switch'
         */
        VeTRIB_U_BatClntSnsVolt = VeTRIB_U_BatClntSnsVoltRaw;
    }
    else
    {
        /* Assignment: '<S194>/Assignment_y' incorporates:
         *  Constant: '<S190>/Calib'
         *  Product: '<S193>/Product'
         *  Selector: '<S192>/Selector_u'
         *  Selector: '<S192>/Selector_x'
         *  Sum: '<S193>/Difference'
         *  Sum: '<S193>/Sum'
         *  Switch: '<S180>/Switch'
         *  Switch: '<S193>/Switch_E'
         */
        VeTRIB_U_BatClntSnsVolt = ((VeTRIB_U_BatClntSnsVoltRaw -
            VeTRIB_U_BatClntSnsVolt) * KeTRIB_k_BatClntSnsFiltGx) +
            VeTRIB_U_BatClntSnsVolt;
    }

    /* End of Switch: '<S193>/Switch' */

    /* SignalConversion generated from: '<S179>/Vector' */
    rtb_TmpSignalConversionAtVectorInport1_a[0] = VeTRIB_U_BatClntSnsVoltRaw;
    rtb_TmpSignalConversionAtVectorInport1_a[1] = VeTRIB_U_BatClntSnsVolt;

    /* Lookup_n-D: '<S179>/Vector' */
    for (iU = 0; iU < 2; iU++)
    {
        rtb_Vector_o[iU] = look1_iflf_binlca_19a
            (rtb_TmpSignalConversionAtVectorInport1_a[iU], ((const float32 *)
              &(KxTRIB_U_BatClntSnsrChartc[0])), ((const float32 *)
              &(KtTRIB_U_BatClntSnsrChartc[0])), 7U);
    }

    /* End of Lookup_n-D: '<S179>/Vector' */

    /* Switch: '<S182>/Switch' incorporates:
     *  Logic: '<S155>/Logical Operator1'
     */
    if ((!rtb_RelationalOperator2_o) && (!rtb_NOT4_o))
    {
        /* Switch: '<S182>/Switch' */
        TRIB_ac_DW.VeTRIB_U_BatClntSnsrInit_DSTATE = rtb_Vector_o[1];
    }

    /* End of Switch: '<S182>/Switch' */

    /* Switch: '<S180>/Switch' incorporates:
     *  Constant: '<S184>/Calib'
     *  Constant: '<S186>/Calib'
     *  Logic: '<S181>/Logical Operator1'
     *  Switch: '<S181>/Switch'
     */
    if (KeTRIB_b_BatClntSnsBypEnbl)
    {
        /* Outport: '<Root>/VeTRIB_U_BatBotlClnt_LoLvlVolt' incorporates:
         *  Constant: '<S183>/Calib'
         *  SignalConversion: '<S153>/Signal Conversion'
         */
        (void)Rte_Write_VeTRIB_U_BatBotlClnt_LoLvlVolt_Value
            (KeTRIB_U_BatClntSnsByp);
    }
    else if ((KeTRIB_b_BatClntSnsRcvryEnbl) && rtb_NOT4_o)
    {
        /* Outport: '<Root>/VeTRIB_U_BatBotlClnt_LoLvlVolt' incorporates:
         *  Constant: '<S185>/Calib'
         *  SignalConversion: '<S153>/Signal Conversion'
         *  Switch: '<S181>/Switch'
         */
        (void)Rte_Write_VeTRIB_U_BatBotlClnt_LoLvlVolt_Value
            (KeTRIB_U_BatClntSnsRcvry);
    }
    else
    {
        /* Outport: '<Root>/VeTRIB_U_BatBotlClnt_LoLvlVolt' incorporates:
         *  SignalConversion: '<S153>/Signal Conversion'
         *  Switch: '<S181>/Switch'
         */
        (void)Rte_Write_VeTRIB_U_BatBotlClnt_LoLvlVolt_Value
            (TRIB_ac_DW.VeTRIB_U_BatClntSnsrInit_DSTATE);
    }

    /* End of Switch: '<S180>/Switch' */

    /* Outport: '<Root>/VeTRIB_b_BatBotlClntLoLvl_FA' incorporates:
     *  SignalConversion: '<S153>/Signal Conversion1'
     */
    (void)Rte_Write_VeTRIB_b_BatBotlClntLoLvl_FA_Value(rtb_NOT4_o);

    /* End of Outputs for SubSystem: '<S25>/BatClntSns' */
    /* End of Outputs for SubSystem: '<S3>/BatClntSns' */
#endif

    /* End of SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_BattCoolLvlSnsCkt' */

    /* SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_CT3_SnsrCktLo' incorporates:
     *  Inport: '<Root>/VeADCR_U_Hcctis_VsADCR_e_CnvnRes'
     *  SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_CT3_SnsrCktHi'
     */
#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

    /* Outputs for Atomic SubSystem: '<S3>/HCCTIS' */
    /* SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_CT3_SnsrCktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT3_SnsrCktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT3_SnsrCktLo_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_k);

    /* SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_CT3_SnsrCktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT3_SnsrCktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT3_SnsrCktHi_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_e);

    /* Outputs for Atomic SubSystem: '<S26>/HCCTIS' */

    /* RelationalOperator: '<S207>/Relational Operator3' incorporates:
     *  Constant: '<S207>/Constant3'
     *  S-Function (sfix_bitop): '<S207>/Bitwise Operator2'
     */
    rtb_NOT4_o = ((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Stat_e) & 64U) ==
                  0U);

    /* Outputs for Atomic SubSystem: '<S207>/EdgeFalling1' */
    /* Logic: '<S207>/Logical Operator' incorporates:
     *  Logic: '<S209>/OR1'
     */
    rtb_RelationalOperator1_lo = !rtb_NOT4_o;

    /* End of Outputs for SubSystem: '<S207>/EdgeFalling1' */

    /* Logic: '<S199>/Logical Operator' incorporates:
     *  Logic: '<S199>/Logical Operator1'
     *  Logic: '<S200>/Logical Operator'
     */
    rtb_RelationalOperator2_o = (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
        (!rtb_TmpSignalConversionAtVeADFB_b_A2DFau));

    /* Logic: '<S207>/Logical1' incorporates:
     *  Constant: '<S202>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S206>/Calib'
     *  Constant: '<S207>/Constant1'
     *  Logic: '<S199>/Logical Operator'
     *  Logic: '<S207>/Logical Operator'
     *  Logic: '<S207>/Logical10'
     *  Logic: '<S207>/Logical12'
     *  RelationalOperator: '<S207>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S207>/Bitwise Operator3'
     */
    rtb_Logical1_m = ((rtb_RelationalOperator2_o && (KeTRIB_b_STBDiagEnblHCCTIS))
                      && ((!KeTRIB_b_LtchEnblHCCTISSTB) || (((((uint32)
                           rtb_TmpSignalConversionAtVeDMAB_y_Stat_e) & 1U) == 0U)
                        || rtb_RelationalOperator1_lo)));

    /* End of Outputs for SubSystem: '<S26>/HCCTIS' */
    /* Gateway: SigMngtAndCnvn/HCCTIS/HCCTIS/SigAcqnAndFilSys/AntiSpkFil */
    /* During: SigMngtAndCnvn/HCCTIS/HCCTIS/SigAcqnAndFilSys/AntiSpkFil */
    (void)Rte_Read_VeADCR_U_Hcctis_VsADCR_e_CnvnRes(&tmpRead);

    /* Outputs for Atomic SubSystem: '<S26>/HCCTIS' */
    /* Chart: '<S198>/AntiSpkFil' incorporates:
     *  Constant: '<S251>/Calib'
     *  Constant: '<S252>/Calib'
     *  Inport: '<Root>/VeADCR_U_Hcctis_VsADCR_e_CnvnRes'
     */
    if (((uint32)TRIB_ac_DW.is_active_c2_TRIB_ac) == 0U)
    {
        /* Entry: SigMngtAndCnvn/HCCTIS/HCCTIS/SigAcqnAndFilSys/AntiSpkFil */
        TRIB_ac_DW.is_active_c2_TRIB_ac = 1U;

        /* Entry Internal: SigMngtAndCnvn/HCCTIS/HCCTIS/SigAcqnAndFilSys/AntiSpkFil */
        /* Transition: '<S250>:8' */
        TRIB_ac_DW.is_c2_TRIB_ac = TRIB_ac_IN_NORMAL;

        /* Entry 'NORMAL': '<S250>:37' */
        TRIB_ac_B.InputRaw0 = tmpRead.e_CnvnRes;
        VeTRIB_U_HCCTISVoltRaw = tmpRead.e_CnvnRes;
    }
    else if (((sint32)TRIB_ac_DW.is_c2_TRIB_ac) == 1)
    {
        /* During 'FILTERING': '<S250>:38' */
        if (TRIB_ac_B.Cnt >= ((float32)KeTRIB_Cnt_HCCTISSpikeThd))
        {
            /* Transition: '<S250>:40' */
            TRIB_ac_DW.is_c2_TRIB_ac = TRIB_ac_IN_NORMAL;

            /* Entry 'NORMAL': '<S250>:37' */
            TRIB_ac_B.InputRaw0 = tmpRead.e_CnvnRes;
            VeTRIB_U_HCCTISVoltRaw = tmpRead.e_CnvnRes;
        }
        else
        {
            TRIB_ac_B.Cnt++;
        }
    }
    else
    {
        /* During 'NORMAL': '<S250>:37' */
        rtb_Switch_aa = tmpRead.e_CnvnRes - TRIB_ac_B.InputRaw0;
        if ((rtb_Switch_aa > KeTRIB_U_HCCTISSpikeThd) || (rtb_Switch_aa <
                (-KeTRIB_U_HCCTISSpikeThd)))
        {
            /* Transition: '<S250>:39' */
            TRIB_ac_DW.is_c2_TRIB_ac = TRIB_ac_IN_FILTERING;

            /* Entry 'FILTERING': '<S250>:38' */
            TRIB_ac_B.Cnt = 0.0F;
        }
        else
        {
            VeTRIB_U_HCCTISVoltRaw = tmpRead.e_CnvnRes;
            TRIB_ac_B.InputRaw0 = tmpRead.e_CnvnRes;
        }
    }

    /* End of Chart: '<S198>/AntiSpkFil' */

    /* RelationalOperator: '<S199>/Relational Operator2' incorporates:
     *  Constant: '<S205>/Calib'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_IsDiag = (VeTRIB_U_HCCTISVoltRaw >
        KeTRIB_U_STBCktHiFltLimHCCTIS);

    /* Logic: '<S201>/NOT4' */
    rtb_TmpSignalConversionAtVeDFIR_b_DsblDi =
        (rtb_TmpSignalConversionAtVeDFIR_b_DsblDi ||
         rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* Outputs for Atomic SubSystem: '<S207>/EdgeFalling1' */
    /* Logic: '<S209>/AND' incorporates:
     *  UnitDelay: '<S209>/Unit Delay'
     */
    rtb_RelationalOperator1_lo = (rtb_RelationalOperator1_lo &&
        (TRIB_ac_DW.UnitDelay_DSTATE_b));

    /* Update for UnitDelay: '<S209>/Unit Delay' */
    TRIB_ac_DW.UnitDelay_DSTATE_b = rtb_NOT4_o;

    /* End of Outputs for SubSystem: '<S207>/EdgeFalling1' */

    /* Logic: '<S207>/Logical5' */
    rtb_RelationalOperator1_lo = (rtb_TmpSignalConversionAtVeDFIR_b_DsblDi ||
        rtb_RelationalOperator1_lo);

    /* Outputs for Atomic SubSystem: '<S208>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S208>/Counter Reset  Enabled ' */
    /* Switch: '<S215>/Switch1' incorporates:
     *  Logic: '<S208>/Fail Counter Reset'
     *  Logic: '<S208>/NOT6'
     *  Switch: '<S215>/Switch2'
     *  Switch: '<S216>/Switch1'
     *  UnitDelay: '<S208>/Unit Delay'
     *  UnitDelay: '<S208>/Unit Delay1'
     */
    if ((rtb_RelationalOperator1_lo || (TRIB_ac_DW.UnitDelay_DSTATE_ly)) ||
            (TRIB_ac_DW.UnitDelay1_DSTATE))
    {
        /* Switch: '<S215>/Switch1' incorporates:
         *  Constant: '<S215>/Constant Value2'
         */
        VeTRIB_Cnt_STBFailLimHCCTIS = 0U;

        /* Switch: '<S216>/Switch1' incorporates:
         *  Constant: '<S216>/Constant Value2'
         */
        VeTRIB_Cnt_STBSmplLimHCCTIS = 0U;
    }
    else
    {
        if (rtb_Logical1_m && rtb_TmpSignalConversionAtVeDFIR_b_IsDiag)
        {
            /* Switch: '<S215>/Switch1' incorporates:
             *  Constant: '<S215>/Constant Value1'
             *  Sum: '<S215>/Subtraction'
             *  Switch: '<S215>/Switch2'
             *  UnitDelay: '<S215>/Unit Delay'
             */
            VeTRIB_Cnt_STBFailLimHCCTIS = (uint16)(((uint32)
                VeTRIB_Cnt_STBFailLimHCCTIS) + 1U);
        }

        /* Switch: '<S216>/Switch2' */
        if (rtb_Logical1_m)
        {
            /* Switch: '<S216>/Switch1' incorporates:
             *  Constant: '<S216>/Constant Value1'
             *  Sum: '<S216>/Subtraction'
             *  Switch: '<S216>/Switch2'
             *  UnitDelay: '<S216>/Unit Delay'
             */
            VeTRIB_Cnt_STBSmplLimHCCTIS = (uint16)(((uint32)
                VeTRIB_Cnt_STBSmplLimHCCTIS) + 1U);
        }

        /* End of Switch: '<S216>/Switch2' */
    }

    /* End of Switch: '<S215>/Switch1' */
    /* End of Outputs for SubSystem: '<S208>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S208>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S208>/Greater Than or Equal ' incorporates:
     *  Constant: '<S203>/Calib'
     */
    TRIB_ac_DW.UnitDelay1_DSTATE = (VeTRIB_Cnt_STBFailLimHCCTIS >=
        KeTRIB_Cnt_STBFailLimHCCTIS);

    /* Logic: '<S208>/NOT5' incorporates:
     *  Constant: '<S204>/Calib'
     *  Logic: '<S208>/NOT3'
     *  RelationalOperator: '<S208>/Less Than  or Equal'
     */
    rtb_NOT4_o = ((VeTRIB_Cnt_STBSmplLimHCCTIS >= KeTRIB_Cnt_STBSmplLimHCCTIS) &&
                  (!TRIB_ac_DW.UnitDelay1_DSTATE));

    /* Switch: '<S221>/Switch1' incorporates:
     *  Constant: '<S214>/Constant Value'
     *  DataStoreWrite: '<S199>/Data Store Write1'
     *  Switch: '<S220>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        TRIB_ac_DW.NeTRIB_Cnt_HCCTISSTB_MFOP = 0U;
    }
    else
    {
        if (rtb_NOT4_o)
        {
            /* MinMax: '<S214>/Minimum2' incorporates:
             *  DataStoreRead: '<S199>/Data Store Read1'
             *  Switch: '<S220>/Switch1'
             */
            if (VeTRIB_Cnt_STBFailLimHCCTIS >
                    TRIB_ac_DW.NeTRIB_Cnt_HCCTISSTB_MFOP)
            {
                /* DataStoreWrite: '<S199>/Data Store Write1' incorporates:
                 *  Switch: '<S220>/Switch1'
                 */
                TRIB_ac_DW.NeTRIB_Cnt_HCCTISSTB_MFOP =
                    VeTRIB_Cnt_STBFailLimHCCTIS;
            }

            /* End of MinMax: '<S214>/Minimum2' */
        }
    }

    /* End of Switch: '<S221>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S207>/Fail' */
    TRIB_ac_Fail(TRIB_ac_DW.UnitDelay1_DSTATE, &TRIB_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S207>/Fail' */

    /* Outputs for Enabled SubSystem: '<S207>/Init' */
    TRIB_ac_Init_i(rtb_RelationalOperator1_lo, &TRIB_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S207>/Init' */

    /* Outputs for Enabled SubSystem: '<S207>/Pass' */
    TRIB_ac_Pass(rtb_NOT4_o, &TRIB_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S207>/Pass' */

    /* RelationalOperator: '<S227>/Relational Operator3' incorporates:
     *  Constant: '<S227>/Constant3'
     *  S-Function (sfix_bitop): '<S227>/Bitwise Operator2'
     */
    rtb_RelationalOperator1_lo = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_k) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S227>/EdgeFalling1' */
    /* Logic: '<S227>/Logical Operator' incorporates:
     *  Logic: '<S229>/OR1'
     */
    rtb_RelationalOperator3_j = !rtb_RelationalOperator1_lo;

    /* End of Outputs for SubSystem: '<S227>/EdgeFalling1' */

    /* Logic: '<S227>/Logical1' incorporates:
     *  Constant: '<S222>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S226>/Calib'
     *  Constant: '<S227>/Constant1'
     *  Logic: '<S200>/Logical Operator'
     *  Logic: '<S227>/Logical Operator'
     *  Logic: '<S227>/Logical10'
     *  Logic: '<S227>/Logical12'
     *  RelationalOperator: '<S227>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S227>/Bitwise Operator3'
     */
    rtb_Logical1_m = ((rtb_RelationalOperator2_o && (KeTRIB_b_STGDiagEnbl_HCCTIS))
                      && ((!KeTRIB_b_LtchEnblHCCTISSTG) || (((((uint32)
                           rtb_TmpSignalConversionAtVeDMAB_y_Stat_k) & 1U) == 0U)
                        || rtb_RelationalOperator3_j)));

    /* RelationalOperator: '<S200>/Relational Operator1' incorporates:
     *  Constant: '<S225>/Calib'
     */
    rtb_RelationalOperator2_o = (VeTRIB_U_HCCTISVoltRaw <
        KeTRIB_U_STGCktLowFltLim_HCCTIS);

    /* Outputs for Atomic SubSystem: '<S227>/EdgeFalling1' */
    /* Logic: '<S229>/AND' incorporates:
     *  UnitDelay: '<S229>/Unit Delay'
     */
    rtb_RelationalOperator3_j = (rtb_RelationalOperator3_j &&
        (TRIB_ac_DW.UnitDelay_DSTATE_g));

    /* Update for UnitDelay: '<S229>/Unit Delay' */
    TRIB_ac_DW.UnitDelay_DSTATE_g = rtb_RelationalOperator1_lo;

    /* End of Outputs for SubSystem: '<S227>/EdgeFalling1' */

    /* Logic: '<S227>/Logical5' */
    rtb_TmpSignalConversionAtVeDFIR_b_DsblDi =
        (rtb_TmpSignalConversionAtVeDFIR_b_DsblDi || rtb_RelationalOperator3_j);

    /* UnitDelay: '<S228>/Unit Delay1' incorporates:
     *  UnitDelay: '<S208>/Unit Delay'
     */
    TRIB_ac_DW.UnitDelay_DSTATE_ly = TRIB_ac_DW.UnitDelay1_DSTATE_p;

    /* Outputs for Atomic SubSystem: '<S228>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S228>/Counter Reset  Enabled ' */
    /* Switch: '<S235>/Switch1' incorporates:
     *  Logic: '<S228>/Fail Counter Reset'
     *  Logic: '<S228>/NOT6'
     *  Switch: '<S235>/Switch2'
     *  Switch: '<S236>/Switch1'
     *  UnitDelay: '<S208>/Unit Delay'
     *  UnitDelay: '<S228>/Unit Delay'
     */
    if ((rtb_TmpSignalConversionAtVeDFIR_b_DsblDi ||
            (TRIB_ac_DW.UnitDelay_DSTATE_m)) || (TRIB_ac_DW.UnitDelay_DSTATE_ly))
    {
        /* Switch: '<S235>/Switch1' incorporates:
         *  Constant: '<S235>/Constant Value2'
         */
        VeTRIB_Cnt_STGFailLimHCCTIS = 0U;

        /* Switch: '<S236>/Switch1' incorporates:
         *  Constant: '<S236>/Constant Value2'
         */
        VeTRIB_Cnt_STGSmplLimHCCTIS = 0U;
    }
    else
    {
        if (rtb_Logical1_m && rtb_RelationalOperator2_o)
        {
            /* Switch: '<S235>/Switch1' incorporates:
             *  Constant: '<S235>/Constant Value1'
             *  Sum: '<S235>/Subtraction'
             *  Switch: '<S235>/Switch2'
             *  UnitDelay: '<S235>/Unit Delay'
             */
            VeTRIB_Cnt_STGFailLimHCCTIS = (uint16)(((uint32)
                VeTRIB_Cnt_STGFailLimHCCTIS) + 1U);
        }

        /* Switch: '<S236>/Switch2' */
        if (rtb_Logical1_m)
        {
            /* Switch: '<S236>/Switch1' incorporates:
             *  Constant: '<S236>/Constant Value1'
             *  Sum: '<S236>/Subtraction'
             *  Switch: '<S236>/Switch2'
             *  UnitDelay: '<S236>/Unit Delay'
             */
            VeTRIB_Cnt_STGSmplLimHCCTIS = (uint16)(((uint32)
                VeTRIB_Cnt_STGSmplLimHCCTIS) + 1U);
        }

        /* End of Switch: '<S236>/Switch2' */
    }

    /* End of Switch: '<S235>/Switch1' */
    /* End of Outputs for SubSystem: '<S228>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S228>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S228>/Greater Than or Equal ' incorporates:
     *  Constant: '<S223>/Calib'
     */
    TRIB_ac_DW.UnitDelay1_DSTATE_p = (VeTRIB_Cnt_STGFailLimHCCTIS >=
        KeTRIB_Cnt_STGFailLimHCCTIS);

    /* Logic: '<S228>/NOT5' incorporates:
     *  Constant: '<S224>/Calib'
     *  Logic: '<S228>/NOT3'
     *  RelationalOperator: '<S228>/Less Than  or Equal'
     */
    TRIB_ac_DW.UnitDelay_DSTATE_m = ((VeTRIB_Cnt_STGSmplLimHCCTIS >=
        KeTRIB_Cnt_STGSmplLimHCCTIS) && (!TRIB_ac_DW.UnitDelay1_DSTATE_p));

    /* Switch: '<S241>/Switch1' incorporates:
     *  Constant: '<S234>/Constant Value'
     *  DataStoreWrite: '<S200>/Data Store Write1'
     *  Switch: '<S240>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        TRIB_ac_DW.NeTRIB_Cnt_HCCTISSTG_MFOP = 0U;
    }
    else
    {
        if (TRIB_ac_DW.UnitDelay_DSTATE_m)
        {
            /* MinMax: '<S234>/Minimum2' incorporates:
             *  DataStoreRead: '<S200>/Data Store Read1'
             *  Switch: '<S240>/Switch1'
             */
            if (VeTRIB_Cnt_STGFailLimHCCTIS >
                    TRIB_ac_DW.NeTRIB_Cnt_HCCTISSTG_MFOP)
            {
                /* DataStoreWrite: '<S200>/Data Store Write1' incorporates:
                 *  Switch: '<S240>/Switch1'
                 */
                TRIB_ac_DW.NeTRIB_Cnt_HCCTISSTG_MFOP =
                    VeTRIB_Cnt_STGFailLimHCCTIS;
            }

            /* End of MinMax: '<S234>/Minimum2' */
        }
    }

    /* End of Switch: '<S241>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S227>/Fail' */
    TRIB_ac_Fail(TRIB_ac_DW.UnitDelay1_DSTATE_p, &TRIB_ac_B.Merge_p);

    /* End of Outputs for SubSystem: '<S227>/Fail' */

    /* Outputs for Enabled SubSystem: '<S227>/Init' */
    TRIB_ac_Init_i(rtb_TmpSignalConversionAtVeDFIR_b_DsblDi, &TRIB_ac_B.Merge_p);

    /* End of Outputs for SubSystem: '<S227>/Init' */

    /* Outputs for Enabled SubSystem: '<S227>/Pass' */
    TRIB_ac_Pass(TRIB_ac_DW.UnitDelay_DSTATE_m, &TRIB_ac_B.Merge_p);

    /* End of Outputs for SubSystem: '<S227>/Pass' */

    /* Logic: '<S196>/Logical Operator1' incorporates:
     *  Constant: '<S210>/Constant'
     *  Constant: '<S230>/Constant'
     *  Merge: '<S207>/Merge'
     *  Merge: '<S227>/Merge'
     *  RelationalOperator: '<S207>/Relational Operator'
     *  RelationalOperator: '<S227>/Relational Operator'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_PostCo = (((((uint32)TRIB_ac_B.Merge_p) ==
        CeDFIB_e_Fail) || (((uint32)TRIB_ac_B.Merge) == CeDFIB_e_Fail)) ||
        rtb_TmpSignalConversionAtVeADFB_b_A2DFau);

    /* Switch: '<S256>/Switch' incorporates:
     *  Selector: '<S255>/Selector_R'
     */
    if (TRIB_ac_DW.UnitDelay_DSTATE_l)
    {
        /* Assignment: '<S257>/Assignment_y' incorporates:
         *  Switch: '<S243>/Switch'
         */
        VeTRIB_U_HCCTISVolt = VeTRIB_U_HCCTISVoltRaw;
    }
    else
    {
        /* Assignment: '<S257>/Assignment_y' incorporates:
         *  Constant: '<S253>/Calib'
         *  Product: '<S256>/Product'
         *  Selector: '<S255>/Selector_u'
         *  Selector: '<S255>/Selector_x'
         *  Sum: '<S256>/Difference'
         *  Sum: '<S256>/Sum'
         *  Switch: '<S243>/Switch'
         *  Switch: '<S256>/Switch_E'
         */
        VeTRIB_U_HCCTISVolt = ((VeTRIB_U_HCCTISVoltRaw - VeTRIB_U_HCCTISVolt) *
                               KeTRIB_k_HCCTISFiltGx) + VeTRIB_U_HCCTISVolt;
    }

    /* End of Switch: '<S256>/Switch' */

    /* SignalConversion generated from: '<S242>/Vector' */
    rtb_TmpSignalConversionAtVectorInport1_a[0] = VeTRIB_U_HCCTISVoltRaw;
    rtb_TmpSignalConversionAtVectorInport1_a[1] = VeTRIB_U_HCCTISVolt;

    /* Lookup_n-D: '<S242>/Vector' */
    for (iU = 0; iU < 2; iU++)
    {
        rtb_Vector[iU] = look1_iflf_binlca_19a
            (rtb_TmpSignalConversionAtVectorInport1_a[iU], ((const float32 *)
              &(KxTRIB_U_HCCTISChartc[0])), ((const float32 *)
              &(KtTRIB_T_HCCTISChartc[0])), 23U);
    }

    /* End of Lookup_n-D: '<S242>/Vector' */

    /* Switch: '<S245>/Switch' incorporates:
     *  Logic: '<S196>/Logical Operator'
     *  Logic: '<S197>/Logical Operator1'
     */
    if (((!rtb_RelationalOperator2_o) &&
            (!rtb_TmpSignalConversionAtVeDFIR_b_IsDiag)) &&
            (!rtb_TmpSignalConversionAtVeDFIR_b_PostCo))
    {
        /* Switch: '<S245>/Switch' */
        TRIB_ac_DW.VeTRIB_T_HCCTISInit_DSTATE = rtb_Vector[1];
    }

    /* End of Switch: '<S245>/Switch' */

    /* Switch: '<S243>/Switch' incorporates:
     *  Constant: '<S247>/Calib'
     *  Constant: '<S249>/Calib'
     *  Logic: '<S244>/Logical Operator1'
     *  Switch: '<S244>/Switch'
     */
    if (KeTRIB_b_HCCTISBypEnbl)
    {
        /* Outport: '<Root>/VeTRIB_T_HtrCorClnt_TmpIn' incorporates:
         *  Constant: '<S246>/Calib'
         *  SignalConversion: '<S195>/Signal Conversion'
         */
        (void)Rte_Write_VeTRIB_T_HtrCorClnt_TmpIn_Value(KeTRIB_T_HCCTISByp);
    }
    else if ((KeTRIB_b_HCCTISRcvryEnbl) &&
             rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        /* Outport: '<Root>/VeTRIB_T_HtrCorClnt_TmpIn' incorporates:
         *  Constant: '<S248>/Calib'
         *  SignalConversion: '<S195>/Signal Conversion'
         *  Switch: '<S244>/Switch'
         */
        (void)Rte_Write_VeTRIB_T_HtrCorClnt_TmpIn_Value(KeTRIB_T_HCCTISRcvry);
    }
    else
    {
        /* Outport: '<Root>/VeTRIB_T_HtrCorClnt_TmpIn' incorporates:
         *  SignalConversion: '<S195>/Signal Conversion'
         *  Switch: '<S244>/Switch'
         */
        (void)Rte_Write_VeTRIB_T_HtrCorClnt_TmpIn_Value
            (TRIB_ac_DW.VeTRIB_T_HCCTISInit_DSTATE);
    }

    /* End of Switch: '<S243>/Switch' */

    /* Outport: '<Root>/VeTRIB_b_HtrCorClnt_TmpIn_FA' incorporates:
     *  SignalConversion: '<S195>/Signal Conversion1'
     */
    (void)Rte_Write_VeTRIB_b_HtrCorClnt_TmpIn_FA_Value
        (rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* Update for UnitDelay: '<S208>/Unit Delay' */
    TRIB_ac_DW.UnitDelay_DSTATE_ly = rtb_NOT4_o;

    /* End of Outputs for SubSystem: '<S26>/HCCTIS' */
    /* End of Outputs for SubSystem: '<S3>/HCCTIS' */
#endif

    /* End of SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_CT3_SnsrCktLo' */

    /* SignalConversion generated from: '<S3>/VeTRIB_T_BTISRaw' */
#if Rte_SysCon_Variant_TRIB_BTIS_Presence

    /* Outport: '<Root>/VeTRIB_T_HV_BatClntTmp_InRaw' */
    (void)Rte_Write_VeTRIB_T_HV_BatClntTmp_InRaw_Value(rtb_Vector_p[0]);

#endif

    /* End of SignalConversion generated from: '<S3>/VeTRIB_T_BTISRaw' */

    /* SignalConversion generated from: '<S3>/VeTRIB_T_BTOSRaw' */
#if Rte_SysCon_Variant_TRIB_BTOS_Presence

    /* Outport: '<Root>/VeTRIB_T_HV_BatClntTmpOutRaw' */
    (void)Rte_Write_VeTRIB_T_HV_BatClntTmpOutRaw_Value(rtb_Vector_h[0]);

#endif

    /* End of SignalConversion generated from: '<S3>/VeTRIB_T_BTOSRaw' */

    /* SignalConversion generated from: '<S3>/VeTRIB_T_HCCTISRaw' */
#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

    /* Outport: '<Root>/VeTRIB_T_HtrCorClnt_TmpInRaw' */
    (void)Rte_Write_VeTRIB_T_HtrCorClnt_TmpInRaw_Value(rtb_Vector[0]);

#endif

    /* End of SignalConversion generated from: '<S3>/VeTRIB_T_HCCTISRaw' */

    /* SignalConversion generated from: '<S3>/VeTRIB_U_BatClntSnsRaw' */
#if Rte_SysCon_Variant_TRIB_BatClntSns_Presence

    /* Outport: '<Root>/VeTRIB_U_BatBotlClnt_LoLvlVoltRaw' */
    (void)Rte_Write_VeTRIB_U_BatBotlClnt_LoLvlVoltRaw_Value(rtb_Vector_o[0]);

#endif

    /* End of SignalConversion generated from: '<S3>/VeTRIB_U_BatClntSnsRaw' */

    /* SignalConversion generated from: '<S3>/VeTRIB_e_BTISSTB_PassFail' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRIB_e_BTISSTG_PassFail'
     */
#if Rte_SysCon_Variant_TRIB_BTIS_Presence

    /* Outport: '<Root>/VeTRIB_e_FaultSts_HybBatPacCooInlTemSenCirHig' incorporates:
     *  Merge: '<S39>/Merge'
     */
    (void)Rte_Write_VeTRIB_e_FaultSts_HybBatPacCooInlTemSenCirHig_Value
        (TRIB_ac_B.Merge_k);

    /* Outport: '<Root>/VeTRIB_e_FaultSts_HybBatPacCooInlTemSenCirLow' incorporates:
     *  Merge: '<S59>/Merge'
     */
    (void)Rte_Write_VeTRIB_e_FaultSts_HybBatPacCooInlTemSenCirLow_Value
        (TRIB_ac_B.Merge_e);

#endif

    /* End of SignalConversion generated from: '<S3>/VeTRIB_e_BTISSTB_PassFail' */

    /* SignalConversion generated from: '<S3>/VeTRIB_e_BTOSSTB_PassFail' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRIB_e_BTOSSTG_PassFail'
     */
#if Rte_SysCon_Variant_TRIB_BTOS_Presence

    /* Outport: '<Root>/VeTRIB_e_FaultSts_HybBatPacCooOutTemSenCirHig' incorporates:
     *  Merge: '<S102>/Merge'
     */
    (void)Rte_Write_VeTRIB_e_FaultSts_HybBatPacCooOutTemSenCirHig_Value
        (TRIB_ac_B.Merge_f);

    /* Outport: '<Root>/VeTRIB_e_FaultSts_HybBatPacCooOutTemSenCir' incorporates:
     *  Merge: '<S122>/Merge'
     */
    (void)Rte_Write_VeTRIB_e_FaultSts_HybBatPacCooOutTemSenCir_Value
        (TRIB_ac_B.Merge_c);

#endif

    /* End of SignalConversion generated from: '<S3>/VeTRIB_e_BTOSSTB_PassFail' */

    /* SignalConversion generated from: '<S3>/VeTRIB_e_BatClntSnsSTG_PassFail' */
#if Rte_SysCon_Variant_TRIB_BatClntSns_Presence

    /* Outport: '<Root>/VeTRIB_e_FaultSts_BattCoolLvlSnsCkt' incorporates:
     *  Merge: '<S164>/Merge'
     */
    (void)Rte_Write_VeTRIB_e_FaultSts_BattCoolLvlSnsCkt_Value(TRIB_ac_B.Merge_g);

#endif

    /* End of SignalConversion generated from: '<S3>/VeTRIB_e_BatClntSnsSTG_PassFail' */

    /* SignalConversion generated from: '<S3>/VeTRIB_e_HCCTISSTB_PassFail' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRIB_e_HCCTISSTG_PassFail'
     */
#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

    /* Outport: '<Root>/VeTRIB_e_FaultSts_CT3_SnsrCktHi' incorporates:
     *  Merge: '<S207>/Merge'
     */
    (void)Rte_Write_VeTRIB_e_FaultSts_CT3_SnsrCktHi_Value(TRIB_ac_B.Merge);

    /* Outport: '<Root>/VeTRIB_e_FaultSts_CT3_SnsrCktLo' incorporates:
     *  Merge: '<S227>/Merge'
     */
    (void)Rte_Write_VeTRIB_e_FaultSts_CT3_SnsrCktLo_Value(TRIB_ac_B.Merge_p);

#endif

    /* End of SignalConversion generated from: '<S3>/VeTRIB_e_HCCTISSTB_PassFail' */

    /* Update for UnitDelay: '<S3>/Unit Delay' incorporates:
     *  Constant: '<S3>/Constant3'
     */
#if Rte_SysCon_Variant_TRIB_BTIS_Presence || Rte_SysCon_Variant_TRIB_BTOS_Presence || Rte_SysCon_Variant_TRIB_BatClntSns_Presence || Rte_SysCon_Variant_TRIB_HCCTIS_Presence

    TRIB_ac_DW.UnitDelay_DSTATE_l = false;

#endif

    /* End of Update for UnitDelay: '<S3>/Unit Delay' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
}

/* Output function */
FUNC(void, TRIB_CODE) TRIB_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/ADIB_PwrOff'
     */
    /* Outport: '<Root>/NeTRIB_Cnt_HCCTISSTG_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/NeCDMR_Cnt_BCIMInternal_MFOP'
     */
    (void)Rte_Write_NeTRIB_Cnt_HCCTISSTG_MFOP_NeTRIB_Cnt_HCCTISSTG_MFOP
        (TRIB_ac_DW.NeTRIB_Cnt_HCCTISSTG_MFOP);

    /* Outport: '<Root>/NeTRIB_Cnt_HCCTISSTB_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/NeCDMR_Cnt_BCIMInternal_MSOF'
     */
    (void)Rte_Write_NeTRIB_Cnt_HCCTISSTB_MFOP_NeTRIB_Cnt_HCCTISSTB_MFOP
        (TRIB_ac_DW.NeTRIB_Cnt_HCCTISSTB_MFOP);

    /* Outport: '<Root>/NeTRIB_Cnt_BatClntSnsSTG_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/NeCDMR_Cnt_CPIMInternal_MFOP'
     */
    (void)Rte_Write_NeTRIB_Cnt_BatClntSnsSTG_MFOP_NeTRIB_Cnt_BatClntSnsSTG_MFOP
        (TRIB_ac_DW.NeTRIB_Cnt_BatClntSnsSTG_MFOP);

    /* Outport: '<Root>/NeTRIB_Cnt_BTISSTG_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/NeCDMR_Cnt_CPIMInternal_MSOF'
     */
    (void)Rte_Write_NeTRIB_Cnt_BTISSTG_MFOP_NeTRIB_Cnt_BTISSTG_MFOP
        (TRIB_ac_DW.NeTRIB_Cnt_BTISSTG_MFOP);

    /* Outport: '<Root>/NeTRIB_Cnt_BTISSTB_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/NeCDMR_Cnt_ChgPrtLckFailHMFOP'
     */
    (void)Rte_Write_NeTRIB_Cnt_BTISSTB_MFOP_NeTRIB_Cnt_BTISSTB_MFOP
        (TRIB_ac_DW.NeTRIB_Cnt_BTISSTB_MFOP);

    /* Outport: '<Root>/NeTRIB_Cnt_BTOSSTG_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/NeCDMR_Cnt_ChgPrtLckFailHMSOF'
     */
    (void)Rte_Write_NeTRIB_Cnt_BTOSSTG_MFOP_NeTRIB_Cnt_BTOSSTG_MFOP
        (TRIB_ac_DW.NeTRIB_Cnt_BTOSSTG_MFOP);

    /* Outport: '<Root>/NeTRIB_Cnt_BTOSSTB_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/NeCDMR_Cnt_ChgPrtLckFailHMSOF1'
     */
    (void)Rte_Write_NeTRIB_Cnt_BTOSSTB_MFOP_NeTRIB_Cnt_BTOSSTB_MFOP
        (TRIB_ac_DW.NeTRIB_Cnt_BTOSSTB_MFOP);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Model initialize function */
FUNC(void, TRIB_CODE) TRIB_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/SigMngtAndCnvn'
     */
    /* InitializeConditions for UnitDelay: '<S3>/Unit Delay' */
#if Rte_SysCon_Variant_TRIB_BTIS_Presence || Rte_SysCon_Variant_TRIB_BTOS_Presence || Rte_SysCon_Variant_TRIB_BatClntSns_Presence || Rte_SysCon_Variant_TRIB_HCCTIS_Presence

    TRIB_ac_DW.UnitDelay_DSTATE_l = true;

#endif

    /* End of InitializeConditions for UnitDelay: '<S3>/Unit Delay' */
#if Rte_SysCon_Variant_TRIB_BTIS_Presence
#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence
#endif

#if Rte_SysCon_Variant_TRIB_BatClntSns_Presence
#endif

    /* Outputs for Atomic SubSystem: '<Root>/Init' */
#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

    /* Outputs for Atomic SubSystem: '<S2>/HCCTIS' */
    /* SystemInitialize for Atomic SubSystem: '<S3>/HCCTIS' */

    /* Outputs for Atomic SubSystem: '<S7>/HCCTIS' */
    /* DataStoreWrite: '<S19>/NeCDMR_Cnt_BCIMInternal_MFOP1' incorporates:
     *  Inport: '<Root>/NeTRIB_Cnt_HCCTISSTB_MFOP_PM_In'
     */
    (void)Rte_Read_NeTRIB_Cnt_HCCTISSTB_MFOP_Rx_NeTRIB_Cnt_HCCTISSTB_MFOP
        (&TRIB_ac_DW.NeTRIB_Cnt_HCCTISSTB_MFOP);

    /* DataStoreWrite: '<S19>/NeCDMR_Cnt_BCIMInternal_MFOP' incorporates:
     *  Inport: '<Root>/NeTRIB_Cnt_HCCTISSTG_MFOP_PM_In'
     */
    (void)Rte_Read_NeTRIB_Cnt_HCCTISSTG_MFOP_Rx_NeTRIB_Cnt_HCCTISSTG_MFOP
        (&TRIB_ac_DW.NeTRIB_Cnt_HCCTISSTG_MFOP);

    /* StateWriter: '<S19>/State Writer' incorporates:
     *  Constant: '<S22>/Calib'
     */
    TRIB_ac_DW.VeTRIB_T_HCCTISInit_DSTATE = KeTRIB_T_HCCTISTempInit;

    /* Outport: '<Root>/VeTRIB_T_HtrCorClnt_TmpIn' incorporates:
     *  Constant: '<S22>/Calib'
     *  SignalConversion: '<S19>/Signal Conversion1'
     */
    (void)Rte_Write_VeTRIB_T_HtrCorClnt_TmpIn_Value(KeTRIB_T_HCCTISTempInit);

    /* Outport: '<Root>/VeTRIB_T_HtrCorClnt_TmpInRaw' incorporates:
     *  Constant: '<S22>/Calib'
     *  SignalConversion: '<S19>/Signal Conversion2'
     */
    (void)Rte_Write_VeTRIB_T_HtrCorClnt_TmpInRaw_Value(KeTRIB_T_HCCTISTempInit);

    /* Outport: '<Root>/VeTRIB_e_FaultSts_CT3_SnsrCktLo' incorporates:
     *  Constant: '<S21>/Constant'
     */
    (void)Rte_Write_VeTRIB_e_FaultSts_CT3_SnsrCktLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeTRIB_e_FaultSts_CT3_SnsrCktHi' incorporates:
     *  Constant: '<S20>/Constant'
     */
    (void)Rte_Write_VeTRIB_e_FaultSts_CT3_SnsrCktHi_Value(CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S7>/HCCTIS' */
    /* End of Outputs for SubSystem: '<S2>/HCCTIS' */
#endif

    /* End of SystemInitialize for SubSystem: '<S3>/HCCTIS' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
#if Rte_SysCon_Variant_TRIB_BatClntSns_Presence

    /* Outputs for Atomic SubSystem: '<S2>/BatClntSns' */
    /* Outputs for Atomic SubSystem: '<S6>/BatClntSns' */
    /* DataStoreWrite: '<S16>/NeCDMR_Cnt_BCIMInternal_MFOP' incorporates:
     *  Inport: '<Root>/NeTRIB_Cnt_BatClntSnsSTG_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeTRIB_Cnt_BatClntSnsSTG_MFOP_Rx_NeTRIB_Cnt_BatClntSnsSTG_MFOP(
        &TRIB_ac_DW.NeTRIB_Cnt_BatClntSnsSTG_MFOP);

    /* StateWriter: '<S16>/State Writer' incorporates:
     *  Constant: '<S18>/Calib'
     */
    TRIB_ac_DW.VeTRIB_U_BatClntSnsrInit_DSTATE = KeTRIB_U_BatClntLvlInit;

    /* Outport: '<Root>/VeTRIB_U_BatBotlClnt_LoLvlVolt' incorporates:
     *  Constant: '<S18>/Calib'
     *  SignalConversion: '<S16>/Signal Conversion1'
     */
    (void)Rte_Write_VeTRIB_U_BatBotlClnt_LoLvlVolt_Value(KeTRIB_U_BatClntLvlInit);

    /* Outport: '<Root>/VeTRIB_U_BatBotlClnt_LoLvlVoltRaw' incorporates:
     *  Constant: '<S18>/Calib'
     *  SignalConversion: '<S16>/Signal Conversion2'
     */
    (void)Rte_Write_VeTRIB_U_BatBotlClnt_LoLvlVoltRaw_Value
        (KeTRIB_U_BatClntLvlInit);

    /* Outport: '<Root>/VeTRIB_e_FaultSts_BattCoolLvlSnsCkt' incorporates:
     *  Constant: '<S17>/Constant'
     */
    (void)Rte_Write_VeTRIB_e_FaultSts_BattCoolLvlSnsCkt_Value(CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S6>/BatClntSns' */
    /* End of Outputs for SubSystem: '<S2>/BatClntSns' */
#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

    /* Outputs for Atomic SubSystem: '<S2>/BTIS' */
    /* Outputs for Atomic SubSystem: '<S4>/BTIS' */
    /* DataStoreWrite: '<S8>/NeCDMR_Cnt_BCIMInternal_MFOP1' incorporates:
     *  Inport: '<Root>/NeTRIB_Cnt_BTISSTB_MFOP_PM_In'
     */
    (void)Rte_Read_NeTRIB_Cnt_BTISSTB_MFOP_Rx_NeTRIB_Cnt_BTISSTB_MFOP
        (&TRIB_ac_DW.NeTRIB_Cnt_BTISSTB_MFOP);

    /* DataStoreWrite: '<S8>/NeCDMR_Cnt_BCIMInternal_MFOP' incorporates:
     *  Inport: '<Root>/NeTRIB_Cnt_BTISSTG_MFOP_PM_In'
     */
    (void)Rte_Read_NeTRIB_Cnt_BTISSTG_MFOP_Rx_NeTRIB_Cnt_BTISSTG_MFOP
        (&TRIB_ac_DW.NeTRIB_Cnt_BTISSTG_MFOP);

    /* StateWriter: '<S8>/State Writer' incorporates:
     *  Constant: '<S11>/Calib'
     */
    TRIB_ac_DW.VeTRIB_T_BTISInit_DSTATE = KeTRIB_T_BTISTempInit;

    /* Outport: '<Root>/VeTRIB_T_HV_BatClntTmp_In' incorporates:
     *  Constant: '<S11>/Calib'
     *  SignalConversion: '<S8>/Signal Conversion1'
     */
    (void)Rte_Write_VeTRIB_T_HV_BatClntTmp_In_Value(KeTRIB_T_BTISTempInit);

    /* Outport: '<Root>/VeTRIB_T_HV_BatClntTmp_InRaw' incorporates:
     *  Constant: '<S11>/Calib'
     *  SignalConversion: '<S8>/Signal Conversion2'
     */
    (void)Rte_Write_VeTRIB_T_HV_BatClntTmp_InRaw_Value(KeTRIB_T_BTISTempInit);

    /* Outport: '<Root>/VeTRIB_e_FaultSts_HybBatPacCooInlTemSenCirLow' incorporates:
     *  Constant: '<S10>/Constant'
     */
    (void)Rte_Write_VeTRIB_e_FaultSts_HybBatPacCooInlTemSenCirLow_Value
        (CeDFIB_e_Init);

    /* Outport: '<Root>/VeTRIB_e_FaultSts_HybBatPacCooInlTemSenCirHig' incorporates:
     *  Constant: '<S9>/Constant'
     */
    (void)Rte_Write_VeTRIB_e_FaultSts_HybBatPacCooInlTemSenCirHig_Value
        (CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S4>/BTIS' */
    /* End of Outputs for SubSystem: '<S2>/BTIS' */
#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

    /* Outputs for Atomic SubSystem: '<S2>/BTOS' */
    /* Outputs for Atomic SubSystem: '<S5>/BTOS' */
    /* DataStoreWrite: '<S12>/NeCDMR_Cnt_BCIMInternal_MFOP1' incorporates:
     *  Inport: '<Root>/NeTRIB_Cnt_BTOSSTB_MFOP_PM_In'
     */
    (void)Rte_Read_NeTRIB_Cnt_BTOSSTB_MFOP_Rx_NeTRIB_Cnt_BTOSSTB_MFOP
        (&TRIB_ac_DW.NeTRIB_Cnt_BTOSSTB_MFOP);

    /* DataStoreWrite: '<S12>/NeCDMR_Cnt_BCIMInternal_MFOP' incorporates:
     *  Inport: '<Root>/NeTRIB_Cnt_BTOSSTG_MFOP_PM_In'
     */
    (void)Rte_Read_NeTRIB_Cnt_BTOSSTG_MFOP_Rx_NeTRIB_Cnt_BTOSSTG_MFOP
        (&TRIB_ac_DW.NeTRIB_Cnt_BTOSSTG_MFOP);

    /* StateWriter: '<S12>/State Writer' incorporates:
     *  Constant: '<S15>/Calib'
     */
    TRIB_ac_DW.VeTRIB_T_BTOSInit_DSTATE = KeTRIB_T_BTOSTempInit;

    /* Outport: '<Root>/VeTRIB_T_HV_BatClntTmpOut' incorporates:
     *  Constant: '<S15>/Calib'
     *  SignalConversion: '<S12>/Signal Conversion1'
     */
    (void)Rte_Write_VeTRIB_T_HV_BatClntTmpOut_Value(KeTRIB_T_BTOSTempInit);

    /* Outport: '<Root>/VeTRIB_T_HV_BatClntTmpOutRaw' incorporates:
     *  Constant: '<S15>/Calib'
     *  SignalConversion: '<S12>/Signal Conversion2'
     */
    (void)Rte_Write_VeTRIB_T_HV_BatClntTmpOutRaw_Value(KeTRIB_T_BTOSTempInit);

    /* Outport: '<Root>/VeTRIB_e_FaultSts_HybBatPacCooOutTemSenCir' incorporates:
     *  Constant: '<S14>/Constant'
     */
    (void)Rte_Write_VeTRIB_e_FaultSts_HybBatPacCooOutTemSenCir_Value
        (CeDFIB_e_Init);

    /* Outport: '<Root>/VeTRIB_e_FaultSts_HybBatPacCooOutTemSenCirHig' incorporates:
     *  Constant: '<S13>/Constant'
     */
    (void)Rte_Write_VeTRIB_e_FaultSts_HybBatPacCooOutTemSenCirHig_Value
        (CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S5>/BTOS' */
    /* End of Outputs for SubSystem: '<S2>/BTOS' */
#endif

    /* End of Outputs for SubSystem: '<Root>/Init' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
