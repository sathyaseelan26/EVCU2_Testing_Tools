/*
 * File: TMIB_ac.c
 *
 * Code generated for Simulink model 'TMIB_ac'.
 *
 * Model version                  : 1.114
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:45:24 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TMIB_ac.h"
#include "look1_iflf_binlca_19a.h"

/* Named constants for Chart: '<S25>/AntiSpkFil' */
#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence || Rte_SysCon_Variant_TMIB_PECTOS_Presence || Rte_SysCon_Variant_TMIB_PPCTIS_Presence
#define TMIB_ac_IN_FILTERING           ((uint8)1U)
#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence || Rte_SysCon_Variant_TMIB_PECTOS_Presence || Rte_SysCon_Variant_TMIB_PPCTIS_Presence
#define TMIB_ac_IN_NORMAL              ((uint8)2U)
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
#define START_SEC_CALIB_UNSPECIFIED_TMIB
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence

static volatile CONST(uint8, TMIB_VAR_INIT) KeTMIB_Cnt_ECHTISSpikeThd = 2U;/* Referenced by: '<S78>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_PECTOS_Presence

static volatile CONST(uint8, TMIB_VAR_INIT) KeTMIB_Cnt_PECTOSSpikeThd = 2U;/* Referenced by: '<S141>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_PPCTIS_Presence

static volatile CONST(uint8, TMIB_VAR_INIT) KeTMIB_Cnt_PPCTISSpikeThd = 2U;/* Referenced by: '<S204>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence

static volatile CONST(uint16, TMIB_VAR_INIT) KeTMIB_Cnt_STBFailLimECHTIS = 10U;/* Referenced by: '<S30>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_PECTOS_Presence

static volatile CONST(uint16, TMIB_VAR_INIT) KeTMIB_Cnt_STBFailLimPECTOS = 10U;/* Referenced by: '<S93>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_PPCTIS_Presence

static volatile CONST(uint16, TMIB_VAR_INIT) KeTMIB_Cnt_STBFailLimPPCTIS = 10U;/* Referenced by: '<S156>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence

static volatile CONST(uint16, TMIB_VAR_INIT) KeTMIB_Cnt_STBSmplLimECHTIS = 15U;/* Referenced by: '<S31>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_PECTOS_Presence

static volatile CONST(uint16, TMIB_VAR_INIT) KeTMIB_Cnt_STBSmplLimPECTOS = 15U;/* Referenced by: '<S94>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_PPCTIS_Presence

static volatile CONST(uint16, TMIB_VAR_INIT) KeTMIB_Cnt_STBSmplLimPPCTIS = 15U;/* Referenced by: '<S157>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence

static volatile CONST(uint16, TMIB_VAR_INIT) KeTMIB_Cnt_STGFailLimECHTIS = 10U;/* Referenced by: '<S50>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_PECTOS_Presence

static volatile CONST(uint16, TMIB_VAR_INIT) KeTMIB_Cnt_STGFailLimPECTOS = 10U;/* Referenced by: '<S113>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_PPCTIS_Presence

static volatile CONST(uint16, TMIB_VAR_INIT) KeTMIB_Cnt_STGFailLimPPCTIS = 10U;/* Referenced by: '<S176>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence

static volatile CONST(uint16, TMIB_VAR_INIT) KeTMIB_Cnt_STGSmplLimECHTIS = 15U;/* Referenced by: '<S51>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_PECTOS_Presence

static volatile CONST(uint16, TMIB_VAR_INIT) KeTMIB_Cnt_STGSmplLimPECTOS = 15U;/* Referenced by: '<S114>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_PPCTIS_Presence

static volatile CONST(uint16, TMIB_VAR_INIT) KeTMIB_Cnt_STGSmplLimPPCTIS = 15U;/* Referenced by: '<S177>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence

static volatile CONST(float32, TMIB_VAR_INIT) KeTMIB_T_ECHTISByp = 25.0F;/* Referenced by: '<S73>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence

static volatile CONST(float32, TMIB_VAR_INIT) KeTMIB_T_ECHTISRcvry = 25.0F;/* Referenced by: '<S75>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence

static volatile CONST(float32, TMIB_VAR_INIT) KeTMIB_T_ECHTISTempInit = 25.0F;/* Referenced by: '<S10>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_PECTOS_Presence

static volatile CONST(float32, TMIB_VAR_INIT) KeTMIB_T_PECTOSByp = 25.0F;/* Referenced by: '<S136>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_PECTOS_Presence

static volatile CONST(float32, TMIB_VAR_INIT) KeTMIB_T_PECTOSRcvry = 25.0F;/* Referenced by: '<S138>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_PECTOS_Presence

static volatile CONST(float32, TMIB_VAR_INIT) KeTMIB_T_PECTOSTempInit = 25.0F;/* Referenced by: '<S14>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_PPCTIS_Presence

static volatile CONST(float32, TMIB_VAR_INIT) KeTMIB_T_PPCTISByp = 25.0F;/* Referenced by: '<S199>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_PPCTIS_Presence

static volatile CONST(float32, TMIB_VAR_INIT) KeTMIB_T_PPCTISRcvry = 25.0F;/* Referenced by: '<S201>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_PPCTIS_Presence

static volatile CONST(float32, TMIB_VAR_INIT) KeTMIB_T_PPCTISTempInit = 25.0F;/* Referenced by: '<S18>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence

static volatile CONST(float32, TMIB_VAR_INIT) KeTMIB_U_ECHTISSpikeThd = 1.0F;/* Referenced by: '<S79>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_PECTOS_Presence

static volatile CONST(float32, TMIB_VAR_INIT) KeTMIB_U_PECTOSSpikeThd = 1.0F;/* Referenced by: '<S142>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_PPCTIS_Presence

static volatile CONST(float32, TMIB_VAR_INIT) KeTMIB_U_PPCTISSpikeThd = 1.0F;/* Referenced by: '<S205>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence

static volatile CONST(float32, TMIB_VAR_INIT) KeTMIB_U_STBCktHiFltLimECHTIS =
    4.755F;                            /* Referenced by: '<S32>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_PECTOS_Presence

static volatile CONST(float32, TMIB_VAR_INIT) KeTMIB_U_STBCktHiFltLimPECTOS =
    4.755F;                            /* Referenced by: '<S95>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_PPCTIS_Presence

static volatile CONST(float32, TMIB_VAR_INIT) KeTMIB_U_STBCktHiFltLimPPCTIS =
    4.755F;                            /* Referenced by: '<S158>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_PECTOS_Presence

static volatile CONST(float32, TMIB_VAR_INIT) KeTMIB_U_STGCktLowFltLimPECTOS =
    0.166F;                            /* Referenced by: '<S115>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_PPCTIS_Presence

static volatile CONST(float32, TMIB_VAR_INIT) KeTMIB_U_STGCktLowFltLimPPCTIS =
    0.166F;                            /* Referenced by: '<S178>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence

static volatile CONST(float32, TMIB_VAR_INIT) KeTMIB_U_STGCktLowFltLim_ECHTIS =
    0.166F;                            /* Referenced by: '<S52>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence

static volatile CONST(boolean, TMIB_VAR_INIT) KeTMIB_b_ECHTISBypEnbl = 0;/* Referenced by: '<S74>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence

static volatile CONST(boolean, TMIB_VAR_INIT) KeTMIB_b_ECHTISRcvryEnbl = 0;/* Referenced by: '<S76>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence

static volatile CONST(boolean, TMIB_VAR_INIT) KeTMIB_b_LtchEnblECHTISSTB = 0;
              /* Referenced by: '<S29>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence

static volatile CONST(boolean, TMIB_VAR_INIT) KeTMIB_b_LtchEnblECHTISSTG = 0;
              /* Referenced by: '<S49>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_TMIB_PECTOS_Presence

static volatile CONST(boolean, TMIB_VAR_INIT) KeTMIB_b_LtchEnblPECTOSSTB = 0;
              /* Referenced by: '<S92>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_TMIB_PECTOS_Presence

static volatile CONST(boolean, TMIB_VAR_INIT) KeTMIB_b_LtchEnblPECTOSSTG = 0;
             /* Referenced by: '<S112>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_TMIB_PPCTIS_Presence

static volatile CONST(boolean, TMIB_VAR_INIT) KeTMIB_b_LtchEnblPPCTISSTB = 0;
             /* Referenced by: '<S155>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_TMIB_PPCTIS_Presence

static volatile CONST(boolean, TMIB_VAR_INIT) KeTMIB_b_LtchEnblPPCTISSTG = 0;
             /* Referenced by: '<S175>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_TMIB_PECTOS_Presence

static volatile CONST(boolean, TMIB_VAR_INIT) KeTMIB_b_PECTOSBypEnbl = 0;/* Referenced by: '<S137>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_PECTOS_Presence

static volatile CONST(boolean, TMIB_VAR_INIT) KeTMIB_b_PECTOSRcvryEnbl = 0;/* Referenced by: '<S139>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_PPCTIS_Presence

static volatile CONST(boolean, TMIB_VAR_INIT) KeTMIB_b_PPCTISBypEnbl = 0;/* Referenced by: '<S200>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_PPCTIS_Presence

static volatile CONST(boolean, TMIB_VAR_INIT) KeTMIB_b_PPCTISRcvryEnbl = 0;/* Referenced by: '<S202>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence

static volatile CONST(boolean, TMIB_VAR_INIT) KeTMIB_b_STBDiagEnblECHTIS = 1;/* Referenced by: '<S33>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_PECTOS_Presence

static volatile CONST(boolean, TMIB_VAR_INIT) KeTMIB_b_STBDiagEnblPECTOS = 1;/* Referenced by: '<S96>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_PPCTIS_Presence

static volatile CONST(boolean, TMIB_VAR_INIT) KeTMIB_b_STBDiagEnblPPCTIS = 1;/* Referenced by: '<S159>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_PECTOS_Presence

static volatile CONST(boolean, TMIB_VAR_INIT) KeTMIB_b_STGDiagEnblPECTOS = 1;/* Referenced by: '<S116>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_PPCTIS_Presence

static volatile CONST(boolean, TMIB_VAR_INIT) KeTMIB_b_STGDiagEnblPPCTIS = 1;/* Referenced by: '<S179>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence

static volatile CONST(boolean, TMIB_VAR_INIT) KeTMIB_b_STGDiagEnbl_ECHTIS = 1;/* Referenced by: '<S53>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence

static volatile CONST(float32, TMIB_VAR_INIT) KeTMIB_k_ECHTISFiltGx = 1.0F;/* Referenced by: '<S80>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_PECTOS_Presence

static volatile CONST(float32, TMIB_VAR_INIT) KeTMIB_k_PECTOSFiltGx = 1.0F;/* Referenced by: '<S143>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_PPCTIS_Presence

static volatile CONST(float32, TMIB_VAR_INIT) KeTMIB_k_PPCTISFiltGx = 1.0F;/* Referenced by: '<S206>/Calib' */

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence

static volatile CONST(float32, TMIB_VAR_INIT) KtTMIB_T_ECHTISChartc[24] =
{
    191.0F, 150.0F, 140.0F, 130.0F, 120.0F, 110.0F, 100.0F, 90.0F, 80.0F, 70.0F,
    60.0F, 50.0F, 40.0F, 30.0F, 20.0F, 10.0F, 0.0F, -10.0F, -20.0F, -30.0F,
    -40.0F, -50.0F, -60.0F, -64.0F
} ;                                    /* Referenced by: '<S69>/Vector' */

#endif

#if Rte_SysCon_Variant_TMIB_PECTOS_Presence

static volatile CONST(float32, TMIB_VAR_INIT) KtTMIB_T_PECTOSChartc[24] =
{
    191.0F, 150.0F, 140.0F, 130.0F, 120.0F, 110.0F, 100.0F, 90.0F, 80.0F, 70.0F,
    60.0F, 50.0F, 40.0F, 30.0F, 20.0F, 10.0F, 0.0F, -10.0F, -20.0F, -30.0F,
    -40.0F, -50.0F, -60.0F, -64.0F
} ;                                    /* Referenced by: '<S132>/Vector' */

#endif

#if Rte_SysCon_Variant_TMIB_PPCTIS_Presence

static volatile CONST(float32, TMIB_VAR_INIT) KtTMIB_T_PPCTISChartc[24] =
{
    191.0F, 150.0F, 140.0F, 130.0F, 120.0F, 110.0F, 100.0F, 90.0F, 80.0F, 70.0F,
    60.0F, 50.0F, 40.0F, 30.0F, 20.0F, 10.0F, 0.0F, -10.0F, -20.0F, -30.0F,
    -40.0F, -50.0F, -60.0F, -64.0F
} ;                                    /* Referenced by: '<S195>/Vector' */

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence

static volatile CONST(float32, TMIB_VAR_INIT) KxTMIB_U_ECHTISChartc[24] =
{
    0.0F, 0.22F, 0.279F, 0.347F, 0.445F, 0.552F, 0.723F, 0.929F, 1.193F, 1.52F,
    1.916F, 2.366F, 2.849F, 3.338F, 3.788F, 4.164F, 4.457F, 4.668F, 4.804F,
    4.897F, 4.946F, 4.971F, 4.99F, 5.0F
} ;                                    /* Referenced by: '<S69>/Vector' */

#endif

#if Rte_SysCon_Variant_TMIB_PECTOS_Presence

static volatile CONST(float32, TMIB_VAR_INIT) KxTMIB_U_PECTOSChartc[24] =
{
    0.0F, 0.22F, 0.279F, 0.347F, 0.445F, 0.552F, 0.723F, 0.929F, 1.193F, 1.52F,
    1.916F, 2.366F, 2.849F, 3.338F, 3.788F, 4.164F, 4.457F, 4.668F, 4.804F,
    4.897F, 4.946F, 4.971F, 4.99F, 5.0F
} ;                                    /* Referenced by: '<S132>/Vector' */

#endif

#if Rte_SysCon_Variant_TMIB_PPCTIS_Presence

static volatile CONST(float32, TMIB_VAR_INIT) KxTMIB_U_PPCTISChartc[24] =
{
    0.0F, 0.22F, 0.279F, 0.347F, 0.445F, 0.552F, 0.723F, 0.929F, 1.193F, 1.52F,
    1.916F, 2.366F, 2.849F, 3.338F, 3.788F, 4.164F, 4.457F, 4.668F, 4.804F,
    4.897F, 4.946F, 4.971F, 4.99F, 5.0F
} ;                                    /* Referenced by: '<S195>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_TMIB
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TMIB
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence

static VAR(uint16, TMIB_VAR_INIT) VeTMIB_Cnt_STBFailLimECHTIS;/* '<S42>/Switch1' */

#endif

#if Rte_SysCon_Variant_TMIB_PECTOS_Presence

static VAR(uint16, TMIB_VAR_INIT) VeTMIB_Cnt_STBFailLimPECTOS;/* '<S105>/Switch1' */

#endif

#if Rte_SysCon_Variant_TMIB_PPCTIS_Presence

static VAR(uint16, TMIB_VAR_INIT) VeTMIB_Cnt_STBFailLimPPCTIS;/* '<S168>/Switch1' */

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence

static VAR(uint16, TMIB_VAR_INIT) VeTMIB_Cnt_STBSmplLimECHTIS;/* '<S43>/Switch1' */

#endif

#if Rte_SysCon_Variant_TMIB_PECTOS_Presence

static VAR(uint16, TMIB_VAR_INIT) VeTMIB_Cnt_STBSmplLimPECTOS;/* '<S106>/Switch1' */

#endif

#if Rte_SysCon_Variant_TMIB_PPCTIS_Presence

static VAR(uint16, TMIB_VAR_INIT) VeTMIB_Cnt_STBSmplLimPPCTIS;/* '<S169>/Switch1' */

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence

static VAR(uint16, TMIB_VAR_INIT) VeTMIB_Cnt_STGFailLimECHTIS;/* '<S62>/Switch1' */

#endif

#if Rte_SysCon_Variant_TMIB_PECTOS_Presence

static VAR(uint16, TMIB_VAR_INIT) VeTMIB_Cnt_STGFailLimPECTOS;/* '<S125>/Switch1' */

#endif

#if Rte_SysCon_Variant_TMIB_PPCTIS_Presence

static VAR(uint16, TMIB_VAR_INIT) VeTMIB_Cnt_STGFailLimPPCTIS;/* '<S188>/Switch1' */

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence

static VAR(uint16, TMIB_VAR_INIT) VeTMIB_Cnt_STGSmplLimECHTIS;/* '<S63>/Switch1' */

#endif

#if Rte_SysCon_Variant_TMIB_PECTOS_Presence

static VAR(uint16, TMIB_VAR_INIT) VeTMIB_Cnt_STGSmplLimPECTOS;/* '<S126>/Switch1' */

#endif

#if Rte_SysCon_Variant_TMIB_PPCTIS_Presence

static VAR(uint16, TMIB_VAR_INIT) VeTMIB_Cnt_STGSmplLimPPCTIS;/* '<S189>/Switch1' */

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence

static VAR(float32, TMIB_VAR_INIT) VeTMIB_U_ECHTISVolt;/* '<S84>/Assignment_y' */

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence

static VAR(float32, TMIB_VAR_INIT) VeTMIB_U_ECHTISVoltRaw;/* '<S25>/AntiSpkFil' */

#endif

#if Rte_SysCon_Variant_TMIB_PECTOS_Presence

static VAR(float32, TMIB_VAR_INIT) VeTMIB_U_PECTOSVolt;/* '<S147>/Assignment_y' */

#endif

#if Rte_SysCon_Variant_TMIB_PECTOS_Presence

static VAR(float32, TMIB_VAR_INIT) VeTMIB_U_PECTOSVoltRaw;/* '<S88>/AntiSpkFil' */

#endif

#if Rte_SysCon_Variant_TMIB_PPCTIS_Presence

static VAR(float32, TMIB_VAR_INIT) VeTMIB_U_PPCTISVolt;/* '<S210>/Assignment_y' */

#endif

#if Rte_SysCon_Variant_TMIB_PPCTIS_Presence

static VAR(float32, TMIB_VAR_INIT) VeTMIB_U_PPCTISVoltRaw;/* '<S151>/AntiSpkFil' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TMIB
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TMIB
#include "MemMap.h"

VAR(B_TMIB_ac_T, TMIB_VAR_INIT) TMIB_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TMIB
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TMIB
#include "MemMap.h"

VAR(DW_TMIB_ac_T, TMIB_VAR_INIT) TMIB_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TMIB
#include "MemMap.h"
#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence || Rte_SysCon_Variant_TMIB_PECTOS_Presence || Rte_SysCon_Variant_TMIB_PPCTIS_Presence

static FUNC(void, TMIB_CODE_LOCAL) TMIB_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, TMIB_VAR_INIT)
    rty_FaultSts);

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence || Rte_SysCon_Variant_TMIB_PECTOS_Presence || Rte_SysCon_Variant_TMIB_PPCTIS_Presence

static FUNC(void, TMIB_CODE_LOCAL) TMIB_ac_Init_k(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, TMIB_VAR_INIT)
    rty_FaultSts);

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence || Rte_SysCon_Variant_TMIB_PECTOS_Presence || Rte_SysCon_Variant_TMIB_PPCTIS_Presence

static FUNC(void, TMIB_CODE_LOCAL) TMIB_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, TMIB_VAR_INIT)
    rty_FaultSts);

#endif

/*
 * Output and update for enable system:
 *    '<S34>/Fail'
 *    '<S54>/Fail'
 *    '<S97>/Fail'
 *    '<S117>/Fail'
 *    '<S160>/Fail'
 *    '<S180>/Fail'
 */
#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence || Rte_SysCon_Variant_TMIB_PECTOS_Presence || Rte_SysCon_Variant_TMIB_PPCTIS_Presence

static FUNC(void, TMIB_CODE_LOCAL) TMIB_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, TMIB_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S34>/Fail' incorporates:
     *  EnablePort: '<S38>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S38>/FaultSts' incorporates:
         *  Constant: '<S44>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Fail;
    }

    /* End of Outputs for SubSystem: '<S34>/Fail' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S34>/Init'
 *    '<S54>/Init'
 *    '<S97>/Init'
 *    '<S117>/Init'
 *    '<S160>/Init'
 *    '<S180>/Init'
 */
#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence || Rte_SysCon_Variant_TMIB_PECTOS_Presence || Rte_SysCon_Variant_TMIB_PPCTIS_Presence

static FUNC(void, TMIB_CODE_LOCAL) TMIB_ac_Init_k(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, TMIB_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S34>/Init' incorporates:
     *  EnablePort: '<S39>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S39>/FaultSts' incorporates:
         *  Constant: '<S45>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Init;
    }

    /* End of Outputs for SubSystem: '<S34>/Init' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S34>/Pass'
 *    '<S54>/Pass'
 *    '<S97>/Pass'
 *    '<S117>/Pass'
 *    '<S160>/Pass'
 *    '<S180>/Pass'
 */
#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence || Rte_SysCon_Variant_TMIB_PECTOS_Presence || Rte_SysCon_Variant_TMIB_PPCTIS_Presence

static FUNC(void, TMIB_CODE_LOCAL) TMIB_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, TMIB_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S34>/Pass' incorporates:
     *  EnablePort: '<S40>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S40>/FaultSts' incorporates:
         *  Constant: '<S46>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Pass;
    }

    /* End of Outputs for SubSystem: '<S34>/Pass' */
}

#endif

/* Model step function for TID1 */
FUNC(void, TMIB_CODE) TMIB_MedTEH(void) /* Explicit Task: MedTEH */
{

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence || Rte_SysCon_Variant_TMIB_PECTOS_Presence || Rte_SysCon_Variant_TMIB_PPCTIS_Presence

    sint32 iU;

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence

    IDTRAdcInpResData tmpRead;

#endif

#if Rte_SysCon_Variant_TMIB_PECTOS_Presence

    IDTRAdcInpResData tmpRead_0;

#endif

#if Rte_SysCon_Variant_TMIB_PPCTIS_Presence

    IDTRAdcInpResData tmpRead_1;

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence

    float32 rtb_Vector_c[2];

#endif

#if Rte_SysCon_Variant_TMIB_PECTOS_Presence || Rte_SysCon_Variant_TMIB_PPCTIS_Presence

    float32 rtb_Vector_e[2];

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence || Rte_SysCon_Variant_TMIB_PECTOS_Presence || Rte_SysCon_Variant_TMIB_PPCTIS_Presence

    boolean rtb_TmpSignalConversionAtVeADFB_b_A2DFau;

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence || Rte_SysCon_Variant_TMIB_PECTOS_Presence || Rte_SysCon_Variant_TMIB_PPCTIS_Presence

    boolean rtb_TmpSignalConversionAtVeDFIR_b_IsDiag;

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence || Rte_SysCon_Variant_TMIB_PECTOS_Presence || Rte_SysCon_Variant_TMIB_PPCTIS_Presence

    boolean rtb_RelationalOperator3_o;

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence || Rte_SysCon_Variant_TMIB_PECTOS_Presence || Rte_SysCon_Variant_TMIB_PPCTIS_Presence

    boolean rtb_Logical1_g;

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence || Rte_SysCon_Variant_TMIB_PECTOS_Presence || Rte_SysCon_Variant_TMIB_PPCTIS_Presence

    boolean rtb_RelationalOperator2_e;

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence || Rte_SysCon_Variant_TMIB_PECTOS_Presence || Rte_SysCon_Variant_TMIB_PPCTIS_Presence

    boolean rtb_TmpSignalConversionAtVeDFIR_b_DsblDi;

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence || Rte_SysCon_Variant_TMIB_PECTOS_Presence || Rte_SysCon_Variant_TMIB_PPCTIS_Presence

    boolean rtb_TmpSignalConversionAtVeDFIR_b_PostCo;

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence || Rte_SysCon_Variant_TMIB_PECTOS_Presence || Rte_SysCon_Variant_TMIB_PPCTIS_Presence

    boolean rtb_NOT4_p;

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence || Rte_SysCon_Variant_TMIB_PECTOS_Presence

    boolean rtb_AND_j;

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence || Rte_SysCon_Variant_TMIB_PECTOS_Presence || Rte_SysCon_Variant_TMIB_PPCTIS_Presence

    boolean rtb_RelationalOperator1_lk;

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence || Rte_SysCon_Variant_TMIB_PECTOS_Presence

    boolean rtb_AND_o;

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence || Rte_SysCon_Variant_TMIB_PECTOS_Presence || Rte_SysCon_Variant_TMIB_PPCTIS_Presence

    float32 rtb_TmpSignalConversionAtVectorInport1_i[2];

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_d;

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Status;

#endif

#if Rte_SysCon_Variant_TMIB_PECTOS_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_n;

#endif

#if Rte_SysCon_Variant_TMIB_PECTOS_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Sta_kg;

#endif

#if Rte_SysCon_Variant_TMIB_PPCTIS_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_c;

#endif

#if Rte_SysCon_Variant_TMIB_PPCTIS_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Sta_j2;

#endif

#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence || Rte_SysCon_Variant_TMIB_PECTOS_Presence || Rte_SysCon_Variant_TMIB_PPCTIS_Presence

    float32 tmp;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/SigMngtAndCnvn'
     */
    /* SignalConversion generated from: '<S3>/VeDFIR_b_IsDiagGlobalConditionsValid' incorporates:
     *  SignalConversion generated from: '<S3>/VeADFB_b_A2DFault'
     *  SignalConversion generated from: '<S3>/VeDFIR_b_PostCodeClrDiagDsbl'
     *  UnitDelay: '<S3>/Unit Delay'
     */
#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence || Rte_SysCon_Variant_TMIB_PECTOS_Presence || Rte_SysCon_Variant_TMIB_PPCTIS_Presence

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

    /* SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_CT2_SnsrCktLo' incorporates:
     *  SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_CT2_SnsrCktHi'
     */
#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence

    /* SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_CT2_SnsrCktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT2_SnsrCktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT2_SnsrCktLo_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Status);

    /* SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_CT2_SnsrCktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT2_SnsrCktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT2_SnsrCktHi_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_d);

#endif

    /* End of SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_CT2_SnsrCktLo' */

    /* SignalConversion generated from: '<S3>/VeDFIR_b_DsblDiagFailSafe' */
#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence || Rte_SysCon_Variant_TMIB_PECTOS_Presence || Rte_SysCon_Variant_TMIB_PPCTIS_Presence

    /* SignalConversion generated from: '<S3>/VeDFIR_b_DsblDiagFailSafe' incorporates:
     *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
     */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_DsblDi);

#endif

    /* End of SignalConversion generated from: '<S3>/VeDFIR_b_DsblDiagFailSafe' */

    /* SignalConversion generated from: '<S3>/VeTMIB_T_ECHTISRaw' incorporates:
     *  Inport: '<Root>/VeADCR_U_Chtis_VsADCR_e_CnvnRes'
     */
#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence

    /* Outputs for Atomic SubSystem: '<S3>/ECHTIS' */
    /* Outputs for Atomic SubSystem: '<S19>/ECHTIS' */

    /* RelationalOperator: '<S34>/Relational Operator3' incorporates:
     *  Constant: '<S34>/Constant3'
     *  S-Function (sfix_bitop): '<S34>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_o = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_d) & 64U) == 0U);

    /* Logic: '<S26>/Logical Operator' incorporates:
     *  Logic: '<S26>/Logical Operator1'
     *  Logic: '<S27>/Logical Operator'
     */
    rtb_RelationalOperator1_lk = (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
        (!rtb_TmpSignalConversionAtVeADFB_b_A2DFau));

    /* Logic: '<S34>/Logical1' incorporates:
     *  Constant: '<S29>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S33>/Calib'
     *  Constant: '<S34>/Constant1'
     *  Logic: '<S26>/Logical Operator'
     *  Logic: '<S34>/Logical Operator'
     *  Logic: '<S34>/Logical10'
     *  Logic: '<S34>/Logical12'
     *  RelationalOperator: '<S34>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S34>/Bitwise Operator3'
     */
    rtb_Logical1_g = ((rtb_RelationalOperator1_lk && (KeTMIB_b_STBDiagEnblECHTIS))
                      && ((!KeTMIB_b_LtchEnblECHTISSTB) || (((((uint32)
                           rtb_TmpSignalConversionAtVeDMAB_y_Stat_d) & 1U) == 0U)
                        || (!rtb_RelationalOperator3_o))));

    /* End of Outputs for SubSystem: '<S19>/ECHTIS' */
    /* Gateway: SigMngtAndCnvn/ECHTIS/ECHTIS/SigAcqnAndFilSys/AntiSpkFil */
    /* During: SigMngtAndCnvn/ECHTIS/ECHTIS/SigAcqnAndFilSys/AntiSpkFil */
    (void)Rte_Read_VeADCR_U_Chtis_VsADCR_e_CnvnRes(&tmpRead);

    /* Outputs for Atomic SubSystem: '<S19>/ECHTIS' */
    /* Chart: '<S25>/AntiSpkFil' incorporates:
     *  Constant: '<S78>/Calib'
     *  Constant: '<S79>/Calib'
     *  Inport: '<Root>/VeADCR_U_Chtis_VsADCR_e_CnvnRes'
     */
    if (((uint32)TMIB_ac_DW.is_active_c2_TMIB_ac) == 0U)
    {
        /* Entry: SigMngtAndCnvn/ECHTIS/ECHTIS/SigAcqnAndFilSys/AntiSpkFil */
        TMIB_ac_DW.is_active_c2_TMIB_ac = 1U;

        /* Entry Internal: SigMngtAndCnvn/ECHTIS/ECHTIS/SigAcqnAndFilSys/AntiSpkFil */
        /* Transition: '<S77>:8' */
        TMIB_ac_DW.is_c2_TMIB_ac = TMIB_ac_IN_NORMAL;

        /* Entry 'NORMAL': '<S77>:37' */
        TMIB_ac_B.InputRaw0_p = tmpRead.e_CnvnRes;
        VeTMIB_U_ECHTISVoltRaw = tmpRead.e_CnvnRes;
    }
    else if (((sint32)TMIB_ac_DW.is_c2_TMIB_ac) == 1)
    {
        /* During 'FILTERING': '<S77>:38' */
        if (TMIB_ac_B.Cnt_m >= ((float32)KeTMIB_Cnt_ECHTISSpikeThd))
        {
            /* Transition: '<S77>:40' */
            TMIB_ac_DW.is_c2_TMIB_ac = TMIB_ac_IN_NORMAL;

            /* Entry 'NORMAL': '<S77>:37' */
            TMIB_ac_B.InputRaw0_p = tmpRead.e_CnvnRes;
            VeTMIB_U_ECHTISVoltRaw = tmpRead.e_CnvnRes;
        }
        else
        {
            TMIB_ac_B.Cnt_m++;
        }
    }
    else
    {
        /* During 'NORMAL': '<S77>:37' */
        tmp = tmpRead.e_CnvnRes - TMIB_ac_B.InputRaw0_p;
        if ((tmp > KeTMIB_U_ECHTISSpikeThd) || (tmp < (-KeTMIB_U_ECHTISSpikeThd)))
        {
            /* Transition: '<S77>:39' */
            TMIB_ac_DW.is_c2_TMIB_ac = TMIB_ac_IN_FILTERING;

            /* Entry 'FILTERING': '<S77>:38' */
            TMIB_ac_B.Cnt_m = 0.0F;
        }
        else
        {
            VeTMIB_U_ECHTISVoltRaw = tmpRead.e_CnvnRes;
            TMIB_ac_B.InputRaw0_p = tmpRead.e_CnvnRes;
        }
    }

    /* End of Chart: '<S25>/AntiSpkFil' */

    /* RelationalOperator: '<S26>/Relational Operator2' incorporates:
     *  Constant: '<S32>/Calib'
     */
    rtb_RelationalOperator2_e = (VeTMIB_U_ECHTISVoltRaw >
        KeTMIB_U_STBCktHiFltLimECHTIS);

    /* Logic: '<S28>/NOT4' */
    rtb_NOT4_p = (rtb_TmpSignalConversionAtVeDFIR_b_DsblDi ||
                  rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* Outputs for Atomic SubSystem: '<S34>/EdgeFalling1' */
    /* Logic: '<S36>/AND' incorporates:
     *  Logic: '<S36>/OR1'
     *  UnitDelay: '<S36>/Unit Delay'
     */
    rtb_AND_j = ((!rtb_RelationalOperator3_o) && (TMIB_ac_DW.UnitDelay_DSTATE_br));

    /* Update for UnitDelay: '<S36>/Unit Delay' */
    TMIB_ac_DW.UnitDelay_DSTATE_br = rtb_RelationalOperator3_o;

    /* End of Outputs for SubSystem: '<S34>/EdgeFalling1' */

    /* Logic: '<S34>/Logical5' */
    rtb_RelationalOperator3_o = (rtb_NOT4_p || rtb_AND_j);

    /* Outputs for Atomic SubSystem: '<S35>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S35>/Counter Reset  Enabled ' */
    /* Switch: '<S42>/Switch1' incorporates:
     *  Logic: '<S35>/Fail Counter Reset'
     *  Logic: '<S35>/NOT6'
     *  Switch: '<S42>/Switch2'
     *  Switch: '<S43>/Switch1'
     *  UnitDelay: '<S35>/Unit Delay'
     *  UnitDelay: '<S35>/Unit Delay1'
     */
    if ((rtb_RelationalOperator3_o || (TMIB_ac_DW.UnitDelay_DSTATE_pn)) ||
            (TMIB_ac_DW.UnitDelay1_DSTATE_n))
    {
        /* Switch: '<S42>/Switch1' incorporates:
         *  Constant: '<S42>/Constant Value2'
         */
        VeTMIB_Cnt_STBFailLimECHTIS = 0U;

        /* Switch: '<S43>/Switch1' incorporates:
         *  Constant: '<S43>/Constant Value2'
         */
        VeTMIB_Cnt_STBSmplLimECHTIS = 0U;
    }
    else
    {
        if (rtb_Logical1_g && rtb_RelationalOperator2_e)
        {
            /* Switch: '<S42>/Switch1' incorporates:
             *  Constant: '<S42>/Constant Value1'
             *  Sum: '<S42>/Subtraction'
             *  Switch: '<S42>/Switch2'
             *  UnitDelay: '<S42>/Unit Delay'
             */
            VeTMIB_Cnt_STBFailLimECHTIS = (uint16)(((uint32)
                VeTMIB_Cnt_STBFailLimECHTIS) + 1U);
        }

        /* Switch: '<S43>/Switch2' */
        if (rtb_Logical1_g)
        {
            /* Switch: '<S43>/Switch1' incorporates:
             *  Constant: '<S43>/Constant Value1'
             *  Sum: '<S43>/Subtraction'
             *  Switch: '<S43>/Switch2'
             *  UnitDelay: '<S43>/Unit Delay'
             */
            VeTMIB_Cnt_STBSmplLimECHTIS = (uint16)(((uint32)
                VeTMIB_Cnt_STBSmplLimECHTIS) + 1U);
        }

        /* End of Switch: '<S43>/Switch2' */
    }

    /* End of Switch: '<S42>/Switch1' */
    /* End of Outputs for SubSystem: '<S35>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S35>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S35>/Greater Than or Equal ' incorporates:
     *  Constant: '<S30>/Calib'
     */
    TMIB_ac_DW.UnitDelay1_DSTATE_n = (VeTMIB_Cnt_STBFailLimECHTIS >=
        KeTMIB_Cnt_STBFailLimECHTIS);

    /* Logic: '<S35>/NOT5' incorporates:
     *  Constant: '<S31>/Calib'
     *  Logic: '<S35>/NOT3'
     *  RelationalOperator: '<S35>/Less Than  or Equal'
     */
    rtb_Logical1_g = ((VeTMIB_Cnt_STBSmplLimECHTIS >=
                       KeTMIB_Cnt_STBSmplLimECHTIS) &&
                      (!TMIB_ac_DW.UnitDelay1_DSTATE_n));

    /* Switch: '<S48>/Switch1' incorporates:
     *  Constant: '<S41>/Constant Value'
     *  DataStoreWrite: '<S26>/Data Store Write1'
     *  Switch: '<S47>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        TMIB_ac_DW.NeTMIB_Cnt_ECHTISSTB_MFOP = 0U;
    }
    else
    {
        if (rtb_Logical1_g)
        {
            /* MinMax: '<S41>/Minimum2' incorporates:
             *  DataStoreRead: '<S26>/Data Store Read1'
             *  Switch: '<S47>/Switch1'
             */
            if (VeTMIB_Cnt_STBFailLimECHTIS >
                    TMIB_ac_DW.NeTMIB_Cnt_ECHTISSTB_MFOP)
            {
                /* DataStoreWrite: '<S26>/Data Store Write1' incorporates:
                 *  Switch: '<S47>/Switch1'
                 */
                TMIB_ac_DW.NeTMIB_Cnt_ECHTISSTB_MFOP =
                    VeTMIB_Cnt_STBFailLimECHTIS;
            }

            /* End of MinMax: '<S41>/Minimum2' */
        }
    }

    /* End of Switch: '<S48>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S34>/Fail' */
    TMIB_ac_Fail(TMIB_ac_DW.UnitDelay1_DSTATE_n, &TMIB_ac_B.Merge_n);

    /* End of Outputs for SubSystem: '<S34>/Fail' */

    /* Outputs for Enabled SubSystem: '<S34>/Init' */
    TMIB_ac_Init_k(rtb_RelationalOperator3_o, &TMIB_ac_B.Merge_n);

    /* End of Outputs for SubSystem: '<S34>/Init' */

    /* Outputs for Enabled SubSystem: '<S34>/Pass' */
    TMIB_ac_Pass(rtb_Logical1_g, &TMIB_ac_B.Merge_n);

    /* End of Outputs for SubSystem: '<S34>/Pass' */

    /* RelationalOperator: '<S54>/Relational Operator3' incorporates:
     *  Constant: '<S54>/Constant3'
     *  S-Function (sfix_bitop): '<S54>/Bitwise Operator2'
     */
    rtb_AND_j = ((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Status) & 64U) ==
                 0U);

    /* Outputs for Atomic SubSystem: '<S54>/EdgeFalling1' */
    /* Logic: '<S54>/Logical Operator' incorporates:
     *  Logic: '<S56>/OR1'
     */
    rtb_AND_o = !rtb_AND_j;

    /* End of Outputs for SubSystem: '<S54>/EdgeFalling1' */

    /* Logic: '<S54>/Logical1' incorporates:
     *  Constant: '<S49>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S53>/Calib'
     *  Constant: '<S54>/Constant1'
     *  Logic: '<S27>/Logical Operator'
     *  Logic: '<S54>/Logical Operator'
     *  Logic: '<S54>/Logical10'
     *  Logic: '<S54>/Logical12'
     *  RelationalOperator: '<S54>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S54>/Bitwise Operator3'
     */
    rtb_RelationalOperator3_o = ((rtb_RelationalOperator1_lk &&
        (KeTMIB_b_STGDiagEnbl_ECHTIS)) && ((!KeTMIB_b_LtchEnblECHTISSTG) ||
        (((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Status) & 1U) == 0U) ||
         rtb_AND_o)));

    /* RelationalOperator: '<S27>/Relational Operator1' incorporates:
     *  Constant: '<S52>/Calib'
     */
    rtb_RelationalOperator1_lk = (VeTMIB_U_ECHTISVoltRaw <
        KeTMIB_U_STGCktLowFltLim_ECHTIS);

    /* Outputs for Atomic SubSystem: '<S54>/EdgeFalling1' */
    /* Logic: '<S56>/AND' incorporates:
     *  UnitDelay: '<S56>/Unit Delay'
     */
    rtb_AND_o = (rtb_AND_o && (TMIB_ac_DW.UnitDelay_DSTATE_ls));

    /* Update for UnitDelay: '<S56>/Unit Delay' */
    TMIB_ac_DW.UnitDelay_DSTATE_ls = rtb_AND_j;

    /* End of Outputs for SubSystem: '<S54>/EdgeFalling1' */

    /* Logic: '<S54>/Logical5' */
    rtb_NOT4_p = (rtb_NOT4_p || rtb_AND_o);

    /* UnitDelay: '<S55>/Unit Delay1' incorporates:
     *  UnitDelay: '<S35>/Unit Delay'
     */
    TMIB_ac_DW.UnitDelay_DSTATE_pn = TMIB_ac_DW.UnitDelay1_DSTATE_h;

    /* Outputs for Atomic SubSystem: '<S55>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S55>/Counter Reset  Enabled ' */
    /* Switch: '<S62>/Switch1' incorporates:
     *  Logic: '<S55>/Fail Counter Reset'
     *  Logic: '<S55>/NOT6'
     *  Switch: '<S62>/Switch2'
     *  Switch: '<S63>/Switch1'
     *  UnitDelay: '<S35>/Unit Delay'
     *  UnitDelay: '<S55>/Unit Delay'
     */
    if ((rtb_NOT4_p || (TMIB_ac_DW.UnitDelay_DSTATE_m2)) ||
            (TMIB_ac_DW.UnitDelay_DSTATE_pn))
    {
        /* Switch: '<S62>/Switch1' incorporates:
         *  Constant: '<S62>/Constant Value2'
         */
        VeTMIB_Cnt_STGFailLimECHTIS = 0U;

        /* Switch: '<S63>/Switch1' incorporates:
         *  Constant: '<S63>/Constant Value2'
         */
        VeTMIB_Cnt_STGSmplLimECHTIS = 0U;
    }
    else
    {
        if (rtb_RelationalOperator3_o && rtb_RelationalOperator1_lk)
        {
            /* Switch: '<S62>/Switch1' incorporates:
             *  Constant: '<S62>/Constant Value1'
             *  Sum: '<S62>/Subtraction'
             *  Switch: '<S62>/Switch2'
             *  UnitDelay: '<S62>/Unit Delay'
             */
            VeTMIB_Cnt_STGFailLimECHTIS = (uint16)(((uint32)
                VeTMIB_Cnt_STGFailLimECHTIS) + 1U);
        }

        /* Switch: '<S63>/Switch2' */
        if (rtb_RelationalOperator3_o)
        {
            /* Switch: '<S63>/Switch1' incorporates:
             *  Constant: '<S63>/Constant Value1'
             *  Sum: '<S63>/Subtraction'
             *  Switch: '<S63>/Switch2'
             *  UnitDelay: '<S63>/Unit Delay'
             */
            VeTMIB_Cnt_STGSmplLimECHTIS = (uint16)(((uint32)
                VeTMIB_Cnt_STGSmplLimECHTIS) + 1U);
        }

        /* End of Switch: '<S63>/Switch2' */
    }

    /* End of Switch: '<S62>/Switch1' */
    /* End of Outputs for SubSystem: '<S55>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S55>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S55>/Greater Than or Equal ' incorporates:
     *  Constant: '<S50>/Calib'
     */
    TMIB_ac_DW.UnitDelay1_DSTATE_h = (VeTMIB_Cnt_STGFailLimECHTIS >=
        KeTMIB_Cnt_STGFailLimECHTIS);

    /* Logic: '<S55>/NOT5' incorporates:
     *  Constant: '<S51>/Calib'
     *  Logic: '<S55>/NOT3'
     *  RelationalOperator: '<S55>/Less Than  or Equal'
     */
    TMIB_ac_DW.UnitDelay_DSTATE_m2 = ((VeTMIB_Cnt_STGSmplLimECHTIS >=
        KeTMIB_Cnt_STGSmplLimECHTIS) && (!TMIB_ac_DW.UnitDelay1_DSTATE_h));

    /* Switch: '<S68>/Switch1' incorporates:
     *  Constant: '<S61>/Constant Value'
     *  DataStoreWrite: '<S27>/Data Store Write1'
     *  Switch: '<S67>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        TMIB_ac_DW.NeTMIB_Cnt_ECHTISSTG_MFOP = 0U;
    }
    else
    {
        if (TMIB_ac_DW.UnitDelay_DSTATE_m2)
        {
            /* MinMax: '<S61>/Minimum2' incorporates:
             *  DataStoreRead: '<S27>/Data Store Read1'
             *  Switch: '<S67>/Switch1'
             */
            if (VeTMIB_Cnt_STGFailLimECHTIS >
                    TMIB_ac_DW.NeTMIB_Cnt_ECHTISSTG_MFOP)
            {
                /* DataStoreWrite: '<S27>/Data Store Write1' incorporates:
                 *  Switch: '<S67>/Switch1'
                 */
                TMIB_ac_DW.NeTMIB_Cnt_ECHTISSTG_MFOP =
                    VeTMIB_Cnt_STGFailLimECHTIS;
            }

            /* End of MinMax: '<S61>/Minimum2' */
        }
    }

    /* End of Switch: '<S68>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S54>/Fail' */
    TMIB_ac_Fail(TMIB_ac_DW.UnitDelay1_DSTATE_h, &TMIB_ac_B.Merge_j);

    /* End of Outputs for SubSystem: '<S54>/Fail' */

    /* Outputs for Enabled SubSystem: '<S54>/Init' */
    TMIB_ac_Init_k(rtb_NOT4_p, &TMIB_ac_B.Merge_j);

    /* End of Outputs for SubSystem: '<S54>/Init' */

    /* Outputs for Enabled SubSystem: '<S54>/Pass' */
    TMIB_ac_Pass(TMIB_ac_DW.UnitDelay_DSTATE_m2, &TMIB_ac_B.Merge_j);

    /* End of Outputs for SubSystem: '<S54>/Pass' */

    /* Logic: '<S23>/Logical Operator1' incorporates:
     *  Constant: '<S37>/Constant'
     *  Constant: '<S57>/Constant'
     *  Merge: '<S34>/Merge'
     *  Merge: '<S54>/Merge'
     *  RelationalOperator: '<S34>/Relational Operator'
     *  RelationalOperator: '<S54>/Relational Operator'
     */
    rtb_NOT4_p = (((((uint32)TMIB_ac_B.Merge_j) == CeDFIB_e_Fail) || (((uint32)
                     TMIB_ac_B.Merge_n) == CeDFIB_e_Fail)) ||
                  rtb_TmpSignalConversionAtVeADFB_b_A2DFau);

    /* Switch: '<S83>/Switch' incorporates:
     *  Selector: '<S82>/Selector_R'
     */
    if (TMIB_ac_DW.UnitDelay_DSTATE_l)
    {
        /* Assignment: '<S84>/Assignment_y' incorporates:
         *  Switch: '<S70>/Switch'
         */
        VeTMIB_U_ECHTISVolt = VeTMIB_U_ECHTISVoltRaw;
    }
    else
    {
        /* Assignment: '<S84>/Assignment_y' incorporates:
         *  Constant: '<S80>/Calib'
         *  Product: '<S83>/Product'
         *  Selector: '<S82>/Selector_u'
         *  Selector: '<S82>/Selector_x'
         *  Sum: '<S83>/Difference'
         *  Sum: '<S83>/Sum'
         *  Switch: '<S70>/Switch'
         *  Switch: '<S83>/Switch_E'
         */
        VeTMIB_U_ECHTISVolt = ((VeTMIB_U_ECHTISVoltRaw - VeTMIB_U_ECHTISVolt) *
                               KeTMIB_k_ECHTISFiltGx) + VeTMIB_U_ECHTISVolt;
    }

    /* End of Switch: '<S83>/Switch' */

    /* SignalConversion generated from: '<S69>/Vector' */
    rtb_TmpSignalConversionAtVectorInport1_i[0] = VeTMIB_U_ECHTISVoltRaw;
    rtb_TmpSignalConversionAtVectorInport1_i[1] = VeTMIB_U_ECHTISVolt;

    /* Lookup_n-D: '<S69>/Vector' */
    for (iU = 0; iU < 2; iU++)
    {
        rtb_Vector_c[iU] = look1_iflf_binlca_19a
            (rtb_TmpSignalConversionAtVectorInport1_i[iU], ((const float32 *)
              &(KxTMIB_U_ECHTISChartc[0])), ((const float32 *)
              &(KtTMIB_T_ECHTISChartc[0])), 23U);
    }

    /* End of Lookup_n-D: '<S69>/Vector' */

    /* Switch: '<S72>/Switch' incorporates:
     *  Logic: '<S23>/Logical Operator'
     *  Logic: '<S24>/Logical Operator1'
     */
    if (((!rtb_RelationalOperator1_lk) && (!rtb_RelationalOperator2_e)) &&
            (!rtb_NOT4_p))
    {
        /* Switch: '<S72>/Switch' */
        TMIB_ac_DW.VeTMIB_T_ECHTISInit_DSTATE = rtb_Vector_c[1];
    }

    /* End of Switch: '<S72>/Switch' */

    /* Switch: '<S70>/Switch' incorporates:
     *  Constant: '<S74>/Calib'
     *  Constant: '<S76>/Calib'
     *  Logic: '<S71>/Logical Operator1'
     *  Switch: '<S71>/Switch'
     */
    if (KeTMIB_b_ECHTISBypEnbl)
    {
        /* Outport: '<Root>/VeTMIB_T_ElecClntHtr_TmpIn' incorporates:
         *  Constant: '<S73>/Calib'
         *  SignalConversion: '<S22>/Signal Conversion'
         */
        (void)Rte_Write_VeTMIB_T_ElecClntHtr_TmpIn_Value(KeTMIB_T_ECHTISByp);
    }
    else if ((KeTMIB_b_ECHTISRcvryEnbl) && rtb_NOT4_p)
    {
        /* Outport: '<Root>/VeTMIB_T_ElecClntHtr_TmpIn' incorporates:
         *  Constant: '<S75>/Calib'
         *  SignalConversion: '<S22>/Signal Conversion'
         *  Switch: '<S71>/Switch'
         */
        (void)Rte_Write_VeTMIB_T_ElecClntHtr_TmpIn_Value(KeTMIB_T_ECHTISRcvry);
    }
    else
    {
        /* Outport: '<Root>/VeTMIB_T_ElecClntHtr_TmpIn' incorporates:
         *  SignalConversion: '<S22>/Signal Conversion'
         *  Switch: '<S71>/Switch'
         */
        (void)Rte_Write_VeTMIB_T_ElecClntHtr_TmpIn_Value
            (TMIB_ac_DW.VeTMIB_T_ECHTISInit_DSTATE);
    }

    /* End of Switch: '<S70>/Switch' */

    /* Outport: '<Root>/VeTMIB_b_ElecClntHtr_TmpIn_FA' incorporates:
     *  SignalConversion: '<S22>/Signal Conversion1'
     */
    (void)Rte_Write_VeTMIB_b_ElecClntHtr_TmpIn_FA_Value(rtb_NOT4_p);

    /* Update for UnitDelay: '<S35>/Unit Delay' */
    TMIB_ac_DW.UnitDelay_DSTATE_pn = rtb_Logical1_g;

    /* End of Outputs for SubSystem: '<S19>/ECHTIS' */

    /* Outport: '<Root>/VeTMIB_T_ElecClntHtr_TmpInRaw' */
    (void)Rte_Write_VeTMIB_T_ElecClntHtr_TmpInRaw_Value(rtb_Vector_c[0]);

    /* End of Outputs for SubSystem: '<S3>/ECHTIS' */
#endif

    /* End of SignalConversion generated from: '<S3>/VeTMIB_T_ECHTISRaw' */

    /* SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_CT_SnsrCktLo' incorporates:
     *  Inport: '<Root>/VeADCR_U_Pectos_VsADCR_e_CnvnRes'
     *  SignalConversion generated from: '<S3>/VeTMIB_T_PECTOSRaw'
     *  SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_CT_SnsrCktHi'
     */
#if Rte_SysCon_Variant_TMIB_PECTOS_Presence

    /* Outputs for Atomic SubSystem: '<S3>/PECTOS' */
    /* SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_CT_SnsrCktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT_SnsrCktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT_SnsrCktLo_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Sta_kg);

    /* SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_CT_SnsrCktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT_SnsrCktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT_SnsrCktHi_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_n);

    /* Outputs for Atomic SubSystem: '<S20>/PECTOS' */

    /* RelationalOperator: '<S97>/Relational Operator3' incorporates:
     *  Constant: '<S97>/Constant3'
     *  S-Function (sfix_bitop): '<S97>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_o = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_n) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S97>/EdgeFalling1' */
    /* Logic: '<S97>/Logical Operator' incorporates:
     *  Logic: '<S99>/OR1'
     */
    rtb_AND_j = !rtb_RelationalOperator3_o;

    /* End of Outputs for SubSystem: '<S97>/EdgeFalling1' */

    /* Logic: '<S89>/Logical Operator' incorporates:
     *  Logic: '<S89>/Logical Operator1'
     *  Logic: '<S90>/Logical Operator'
     */
    rtb_RelationalOperator1_lk = (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
        (!rtb_TmpSignalConversionAtVeADFB_b_A2DFau));

    /* Logic: '<S97>/Logical1' incorporates:
     *  Constant: '<S92>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S96>/Calib'
     *  Constant: '<S97>/Constant1'
     *  Logic: '<S89>/Logical Operator'
     *  Logic: '<S97>/Logical Operator'
     *  Logic: '<S97>/Logical10'
     *  Logic: '<S97>/Logical12'
     *  RelationalOperator: '<S97>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S97>/Bitwise Operator3'
     */
    rtb_Logical1_g = ((rtb_RelationalOperator1_lk && (KeTMIB_b_STBDiagEnblPECTOS))
                      && ((!KeTMIB_b_LtchEnblPECTOSSTB) || (((((uint32)
                           rtb_TmpSignalConversionAtVeDMAB_y_Stat_n) & 1U) == 0U)
                        || rtb_AND_j)));

    /* End of Outputs for SubSystem: '<S20>/PECTOS' */
    /* Gateway: SigMngtAndCnvn/PECTOS/PECTOS/SigAcqnAndFilSys/AntiSpkFil */
    /* During: SigMngtAndCnvn/PECTOS/PECTOS/SigAcqnAndFilSys/AntiSpkFil */
    (void)Rte_Read_VeADCR_U_Pectos_VsADCR_e_CnvnRes(&tmpRead_0);

    /* Outputs for Atomic SubSystem: '<S20>/PECTOS' */
    /* Chart: '<S88>/AntiSpkFil' incorporates:
     *  Constant: '<S141>/Calib'
     *  Constant: '<S142>/Calib'
     *  Inport: '<Root>/VeADCR_U_Pectos_VsADCR_e_CnvnRes'
     */
    if (((uint32)TMIB_ac_DW.is_active_c1_TMIB_ac) == 0U)
    {
        /* Entry: SigMngtAndCnvn/PECTOS/PECTOS/SigAcqnAndFilSys/AntiSpkFil */
        TMIB_ac_DW.is_active_c1_TMIB_ac = 1U;

        /* Entry Internal: SigMngtAndCnvn/PECTOS/PECTOS/SigAcqnAndFilSys/AntiSpkFil */
        /* Transition: '<S140>:8' */
        TMIB_ac_DW.is_c1_TMIB_ac = TMIB_ac_IN_NORMAL;

        /* Entry 'NORMAL': '<S140>:37' */
        TMIB_ac_B.InputRaw0_g = tmpRead_0.e_CnvnRes;
        VeTMIB_U_PECTOSVoltRaw = tmpRead_0.e_CnvnRes;
    }
    else if (((sint32)TMIB_ac_DW.is_c1_TMIB_ac) == 1)
    {
        /* During 'FILTERING': '<S140>:38' */
        if (TMIB_ac_B.Cnt_l >= ((float32)KeTMIB_Cnt_PECTOSSpikeThd))
        {
            /* Transition: '<S140>:40' */
            TMIB_ac_DW.is_c1_TMIB_ac = TMIB_ac_IN_NORMAL;

            /* Entry 'NORMAL': '<S140>:37' */
            TMIB_ac_B.InputRaw0_g = tmpRead_0.e_CnvnRes;
            VeTMIB_U_PECTOSVoltRaw = tmpRead_0.e_CnvnRes;
        }
        else
        {
            TMIB_ac_B.Cnt_l++;
        }
    }
    else
    {
        /* During 'NORMAL': '<S140>:37' */
        tmp = tmpRead_0.e_CnvnRes - TMIB_ac_B.InputRaw0_g;
        if ((tmp > KeTMIB_U_PECTOSSpikeThd) || (tmp < (-KeTMIB_U_PECTOSSpikeThd)))
        {
            /* Transition: '<S140>:39' */
            TMIB_ac_DW.is_c1_TMIB_ac = TMIB_ac_IN_FILTERING;

            /* Entry 'FILTERING': '<S140>:38' */
            TMIB_ac_B.Cnt_l = 0.0F;
        }
        else
        {
            VeTMIB_U_PECTOSVoltRaw = tmpRead_0.e_CnvnRes;
            TMIB_ac_B.InputRaw0_g = tmpRead_0.e_CnvnRes;
        }
    }

    /* End of Chart: '<S88>/AntiSpkFil' */

    /* RelationalOperator: '<S89>/Relational Operator2' incorporates:
     *  Constant: '<S95>/Calib'
     */
    rtb_RelationalOperator2_e = (VeTMIB_U_PECTOSVoltRaw >
        KeTMIB_U_STBCktHiFltLimPECTOS);

    /* Logic: '<S91>/NOT4' */
    rtb_NOT4_p = (rtb_TmpSignalConversionAtVeDFIR_b_DsblDi ||
                  rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* Outputs for Atomic SubSystem: '<S97>/EdgeFalling1' */
    /* Logic: '<S99>/AND' incorporates:
     *  UnitDelay: '<S99>/Unit Delay'
     */
    rtb_AND_j = (rtb_AND_j && (TMIB_ac_DW.UnitDelay_DSTATE_be));

    /* Update for UnitDelay: '<S99>/Unit Delay' */
    TMIB_ac_DW.UnitDelay_DSTATE_be = rtb_RelationalOperator3_o;

    /* End of Outputs for SubSystem: '<S97>/EdgeFalling1' */

    /* Logic: '<S97>/Logical5' */
    rtb_RelationalOperator3_o = (rtb_NOT4_p || rtb_AND_j);

    /* Outputs for Atomic SubSystem: '<S98>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S98>/Counter Reset  Enabled ' */
    /* Switch: '<S105>/Switch1' incorporates:
     *  Logic: '<S98>/Fail Counter Reset'
     *  Logic: '<S98>/NOT6'
     *  Switch: '<S105>/Switch2'
     *  Switch: '<S106>/Switch1'
     *  UnitDelay: '<S98>/Unit Delay'
     *  UnitDelay: '<S98>/Unit Delay1'
     */
    if ((rtb_RelationalOperator3_o || (TMIB_ac_DW.UnitDelay_DSTATE_oh)) ||
            (TMIB_ac_DW.UnitDelay1_DSTATE_d))
    {
        /* Switch: '<S105>/Switch1' incorporates:
         *  Constant: '<S105>/Constant Value2'
         */
        VeTMIB_Cnt_STBFailLimPECTOS = 0U;

        /* Switch: '<S106>/Switch1' incorporates:
         *  Constant: '<S106>/Constant Value2'
         */
        VeTMIB_Cnt_STBSmplLimPECTOS = 0U;
    }
    else
    {
        if (rtb_Logical1_g && rtb_RelationalOperator2_e)
        {
            /* Switch: '<S105>/Switch1' incorporates:
             *  Constant: '<S105>/Constant Value1'
             *  Sum: '<S105>/Subtraction'
             *  Switch: '<S105>/Switch2'
             *  UnitDelay: '<S105>/Unit Delay'
             */
            VeTMIB_Cnt_STBFailLimPECTOS = (uint16)(((uint32)
                VeTMIB_Cnt_STBFailLimPECTOS) + 1U);
        }

        /* Switch: '<S106>/Switch2' */
        if (rtb_Logical1_g)
        {
            /* Switch: '<S106>/Switch1' incorporates:
             *  Constant: '<S106>/Constant Value1'
             *  Sum: '<S106>/Subtraction'
             *  Switch: '<S106>/Switch2'
             *  UnitDelay: '<S106>/Unit Delay'
             */
            VeTMIB_Cnt_STBSmplLimPECTOS = (uint16)(((uint32)
                VeTMIB_Cnt_STBSmplLimPECTOS) + 1U);
        }

        /* End of Switch: '<S106>/Switch2' */
    }

    /* End of Switch: '<S105>/Switch1' */
    /* End of Outputs for SubSystem: '<S98>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S98>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S98>/Greater Than or Equal ' incorporates:
     *  Constant: '<S93>/Calib'
     */
    TMIB_ac_DW.UnitDelay1_DSTATE_d = (VeTMIB_Cnt_STBFailLimPECTOS >=
        KeTMIB_Cnt_STBFailLimPECTOS);

    /* Logic: '<S98>/NOT5' incorporates:
     *  Constant: '<S94>/Calib'
     *  Logic: '<S98>/NOT3'
     *  RelationalOperator: '<S98>/Less Than  or Equal'
     */
    rtb_Logical1_g = ((VeTMIB_Cnt_STBSmplLimPECTOS >=
                       KeTMIB_Cnt_STBSmplLimPECTOS) &&
                      (!TMIB_ac_DW.UnitDelay1_DSTATE_d));

    /* Switch: '<S111>/Switch1' incorporates:
     *  Constant: '<S104>/Constant Value'
     *  DataStoreWrite: '<S89>/Data Store Write1'
     *  Switch: '<S110>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        TMIB_ac_DW.NeTMIB_Cnt_PECTOSSTB_MFOP = 0U;
    }
    else
    {
        if (rtb_Logical1_g)
        {
            /* MinMax: '<S104>/Minimum2' incorporates:
             *  DataStoreRead: '<S89>/Data Store Read1'
             *  Switch: '<S110>/Switch1'
             */
            if (VeTMIB_Cnt_STBFailLimPECTOS >
                    TMIB_ac_DW.NeTMIB_Cnt_PECTOSSTB_MFOP)
            {
                /* DataStoreWrite: '<S89>/Data Store Write1' incorporates:
                 *  Switch: '<S110>/Switch1'
                 */
                TMIB_ac_DW.NeTMIB_Cnt_PECTOSSTB_MFOP =
                    VeTMIB_Cnt_STBFailLimPECTOS;
            }

            /* End of MinMax: '<S104>/Minimum2' */
        }
    }

    /* End of Switch: '<S111>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S97>/Fail' */
    TMIB_ac_Fail(TMIB_ac_DW.UnitDelay1_DSTATE_d, &TMIB_ac_B.Merge_m);

    /* End of Outputs for SubSystem: '<S97>/Fail' */

    /* Outputs for Enabled SubSystem: '<S97>/Init' */
    TMIB_ac_Init_k(rtb_RelationalOperator3_o, &TMIB_ac_B.Merge_m);

    /* End of Outputs for SubSystem: '<S97>/Init' */

    /* Outputs for Enabled SubSystem: '<S97>/Pass' */
    TMIB_ac_Pass(rtb_Logical1_g, &TMIB_ac_B.Merge_m);

    /* End of Outputs for SubSystem: '<S97>/Pass' */

    /* RelationalOperator: '<S117>/Relational Operator3' incorporates:
     *  Constant: '<S117>/Constant3'
     *  S-Function (sfix_bitop): '<S117>/Bitwise Operator2'
     */
    rtb_AND_j = ((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Sta_kg) & 64U) ==
                 0U);

    /* Outputs for Atomic SubSystem: '<S117>/EdgeFalling1' */
    /* Logic: '<S117>/Logical Operator' incorporates:
     *  Logic: '<S119>/OR1'
     */
    rtb_AND_o = !rtb_AND_j;

    /* End of Outputs for SubSystem: '<S117>/EdgeFalling1' */

    /* Logic: '<S117>/Logical1' incorporates:
     *  Constant: '<S112>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S116>/Calib'
     *  Constant: '<S117>/Constant1'
     *  Logic: '<S117>/Logical Operator'
     *  Logic: '<S117>/Logical10'
     *  Logic: '<S117>/Logical12'
     *  Logic: '<S90>/Logical Operator'
     *  RelationalOperator: '<S117>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S117>/Bitwise Operator3'
     */
    rtb_RelationalOperator1_lk = ((rtb_RelationalOperator1_lk &&
        (KeTMIB_b_STGDiagEnblPECTOS)) && ((!KeTMIB_b_LtchEnblPECTOSSTG) ||
        (((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Sta_kg) & 1U) == 0U) ||
         rtb_AND_o)));

    /* RelationalOperator: '<S90>/Relational Operator1' incorporates:
     *  Constant: '<S115>/Calib'
     */
    rtb_RelationalOperator3_o = (VeTMIB_U_PECTOSVoltRaw <
        KeTMIB_U_STGCktLowFltLimPECTOS);

    /* Outputs for Atomic SubSystem: '<S117>/EdgeFalling1' */
    /* Logic: '<S119>/AND' incorporates:
     *  UnitDelay: '<S119>/Unit Delay'
     */
    rtb_AND_o = (rtb_AND_o && (TMIB_ac_DW.UnitDelay_DSTATE_p));

    /* Update for UnitDelay: '<S119>/Unit Delay' */
    TMIB_ac_DW.UnitDelay_DSTATE_p = rtb_AND_j;

    /* End of Outputs for SubSystem: '<S117>/EdgeFalling1' */

    /* Logic: '<S117>/Logical5' */
    rtb_NOT4_p = (rtb_NOT4_p || rtb_AND_o);

    /* UnitDelay: '<S118>/Unit Delay1' incorporates:
     *  UnitDelay: '<S98>/Unit Delay'
     */
    TMIB_ac_DW.UnitDelay_DSTATE_oh = TMIB_ac_DW.UnitDelay1_DSTATE_a;

    /* Outputs for Atomic SubSystem: '<S118>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S118>/Counter Reset  Enabled ' */
    /* Switch: '<S125>/Switch1' incorporates:
     *  Logic: '<S118>/Fail Counter Reset'
     *  Logic: '<S118>/NOT6'
     *  Switch: '<S125>/Switch2'
     *  Switch: '<S126>/Switch1'
     *  UnitDelay: '<S118>/Unit Delay'
     *  UnitDelay: '<S98>/Unit Delay'
     */
    if ((rtb_NOT4_p || (TMIB_ac_DW.UnitDelay_DSTATE_h)) ||
            (TMIB_ac_DW.UnitDelay_DSTATE_oh))
    {
        /* Switch: '<S125>/Switch1' incorporates:
         *  Constant: '<S125>/Constant Value2'
         */
        VeTMIB_Cnt_STGFailLimPECTOS = 0U;

        /* Switch: '<S126>/Switch1' incorporates:
         *  Constant: '<S126>/Constant Value2'
         */
        VeTMIB_Cnt_STGSmplLimPECTOS = 0U;
    }
    else
    {
        if (rtb_RelationalOperator1_lk && rtb_RelationalOperator3_o)
        {
            /* Switch: '<S125>/Switch1' incorporates:
             *  Constant: '<S125>/Constant Value1'
             *  Sum: '<S125>/Subtraction'
             *  Switch: '<S125>/Switch2'
             *  UnitDelay: '<S125>/Unit Delay'
             */
            VeTMIB_Cnt_STGFailLimPECTOS = (uint16)(((uint32)
                VeTMIB_Cnt_STGFailLimPECTOS) + 1U);
        }

        /* Switch: '<S126>/Switch2' */
        if (rtb_RelationalOperator1_lk)
        {
            /* Switch: '<S126>/Switch1' incorporates:
             *  Constant: '<S126>/Constant Value1'
             *  Sum: '<S126>/Subtraction'
             *  Switch: '<S126>/Switch2'
             *  UnitDelay: '<S126>/Unit Delay'
             */
            VeTMIB_Cnt_STGSmplLimPECTOS = (uint16)(((uint32)
                VeTMIB_Cnt_STGSmplLimPECTOS) + 1U);
        }

        /* End of Switch: '<S126>/Switch2' */
    }

    /* End of Switch: '<S125>/Switch1' */
    /* End of Outputs for SubSystem: '<S118>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S118>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S118>/Greater Than or Equal ' incorporates:
     *  Constant: '<S113>/Calib'
     */
    TMIB_ac_DW.UnitDelay1_DSTATE_a = (VeTMIB_Cnt_STGFailLimPECTOS >=
        KeTMIB_Cnt_STGFailLimPECTOS);

    /* Logic: '<S118>/NOT5' incorporates:
     *  Constant: '<S114>/Calib'
     *  Logic: '<S118>/NOT3'
     *  RelationalOperator: '<S118>/Less Than  or Equal'
     */
    TMIB_ac_DW.UnitDelay_DSTATE_h = ((VeTMIB_Cnt_STGSmplLimPECTOS >=
        KeTMIB_Cnt_STGSmplLimPECTOS) && (!TMIB_ac_DW.UnitDelay1_DSTATE_a));

    /* Switch: '<S131>/Switch1' incorporates:
     *  Constant: '<S124>/Constant Value'
     *  DataStoreWrite: '<S90>/Data Store Write1'
     *  Switch: '<S130>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        TMIB_ac_DW.NeTMIB_Cnt_PECTOSSTG_MFOP = 0U;
    }
    else
    {
        if (TMIB_ac_DW.UnitDelay_DSTATE_h)
        {
            /* MinMax: '<S124>/Minimum2' incorporates:
             *  DataStoreRead: '<S90>/Data Store Read1'
             *  Switch: '<S130>/Switch1'
             */
            if (VeTMIB_Cnt_STGFailLimPECTOS >
                    TMIB_ac_DW.NeTMIB_Cnt_PECTOSSTG_MFOP)
            {
                /* DataStoreWrite: '<S90>/Data Store Write1' incorporates:
                 *  Switch: '<S130>/Switch1'
                 */
                TMIB_ac_DW.NeTMIB_Cnt_PECTOSSTG_MFOP =
                    VeTMIB_Cnt_STGFailLimPECTOS;
            }

            /* End of MinMax: '<S124>/Minimum2' */
        }
    }

    /* End of Switch: '<S131>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S117>/Fail' */
    TMIB_ac_Fail(TMIB_ac_DW.UnitDelay1_DSTATE_a, &TMIB_ac_B.Merge_mf);

    /* End of Outputs for SubSystem: '<S117>/Fail' */

    /* Outputs for Enabled SubSystem: '<S117>/Init' */
    TMIB_ac_Init_k(rtb_NOT4_p, &TMIB_ac_B.Merge_mf);

    /* End of Outputs for SubSystem: '<S117>/Init' */

    /* Outputs for Enabled SubSystem: '<S117>/Pass' */
    TMIB_ac_Pass(TMIB_ac_DW.UnitDelay_DSTATE_h, &TMIB_ac_B.Merge_mf);

    /* End of Outputs for SubSystem: '<S117>/Pass' */

    /* Logic: '<S86>/Logical Operator' */
    rtb_RelationalOperator2_e = (rtb_RelationalOperator3_o ||
        rtb_RelationalOperator2_e);

    /* Logic: '<S86>/Logical Operator1' incorporates:
     *  Constant: '<S100>/Constant'
     *  Constant: '<S120>/Constant'
     *  Merge: '<S117>/Merge'
     *  Merge: '<S97>/Merge'
     *  RelationalOperator: '<S117>/Relational Operator'
     *  RelationalOperator: '<S97>/Relational Operator'
     */
    rtb_NOT4_p = (((((uint32)TMIB_ac_B.Merge_mf) == CeDFIB_e_Fail) || (((uint32)
                     TMIB_ac_B.Merge_m) == CeDFIB_e_Fail)) ||
                  rtb_TmpSignalConversionAtVeADFB_b_A2DFau);

    /* Switch: '<S146>/Switch' incorporates:
     *  Selector: '<S145>/Selector_R'
     */
    if (TMIB_ac_DW.UnitDelay_DSTATE_l)
    {
        /* Assignment: '<S147>/Assignment_y' incorporates:
         *  Switch: '<S133>/Switch'
         */
        VeTMIB_U_PECTOSVolt = VeTMIB_U_PECTOSVoltRaw;
    }
    else
    {
        /* Assignment: '<S147>/Assignment_y' incorporates:
         *  Constant: '<S143>/Calib'
         *  Product: '<S146>/Product'
         *  Selector: '<S145>/Selector_u'
         *  Selector: '<S145>/Selector_x'
         *  Sum: '<S146>/Difference'
         *  Sum: '<S146>/Sum'
         *  Switch: '<S133>/Switch'
         *  Switch: '<S146>/Switch_E'
         */
        VeTMIB_U_PECTOSVolt = ((VeTMIB_U_PECTOSVoltRaw - VeTMIB_U_PECTOSVolt) *
                               KeTMIB_k_PECTOSFiltGx) + VeTMIB_U_PECTOSVolt;
    }

    /* End of Switch: '<S146>/Switch' */

    /* SignalConversion generated from: '<S132>/Vector' */
    rtb_TmpSignalConversionAtVectorInport1_i[0] = VeTMIB_U_PECTOSVoltRaw;
    rtb_TmpSignalConversionAtVectorInport1_i[1] = VeTMIB_U_PECTOSVolt;

    /* Lookup_n-D: '<S132>/Vector' */
    for (iU = 0; iU < 2; iU++)
    {
        rtb_Vector_e[iU] = look1_iflf_binlca_19a
            (rtb_TmpSignalConversionAtVectorInport1_i[iU], ((const float32 *)
              &(KxTMIB_U_PECTOSChartc[0])), ((const float32 *)
              &(KtTMIB_T_PECTOSChartc[0])), 23U);
    }

    /* End of Lookup_n-D: '<S132>/Vector' */

    /* Logic: '<S87>/Logical Operator1' incorporates:
     *  UnitDelay: '<S98>/Unit Delay'
     */
    TMIB_ac_DW.UnitDelay_DSTATE_oh = (rtb_RelationalOperator2_e || rtb_NOT4_p);

    /* Switch: '<S135>/Switch' incorporates:
     *  UnitDelay: '<S98>/Unit Delay'
     */
    if (!TMIB_ac_DW.UnitDelay_DSTATE_oh)
    {
        /* Switch: '<S135>/Switch' */
        TMIB_ac_DW.VeTMIB_T_PECTOSInit_DSTATE = rtb_Vector_e[1];
    }

    /* End of Switch: '<S135>/Switch' */

    /* Switch: '<S133>/Switch' incorporates:
     *  Constant: '<S137>/Calib'
     *  Constant: '<S139>/Calib'
     *  Logic: '<S134>/Logical Operator1'
     *  Switch: '<S134>/Switch'
     */
    if (KeTMIB_b_PECTOSBypEnbl)
    {
        /* Outport: '<Root>/VeTMIB_T_OnBrdChrg_ClntTmpIn' incorporates:
         *  Constant: '<S136>/Calib'
         *  SignalConversion: '<S85>/Signal Conversion'
         */
        (void)Rte_Write_VeTMIB_T_OnBrdChrg_ClntTmpIn_Value(KeTMIB_T_PECTOSByp);
    }
    else if ((KeTMIB_b_PECTOSRcvryEnbl) && rtb_NOT4_p)
    {
        /* Outport: '<Root>/VeTMIB_T_OnBrdChrg_ClntTmpIn' incorporates:
         *  Constant: '<S138>/Calib'
         *  SignalConversion: '<S85>/Signal Conversion'
         *  Switch: '<S134>/Switch'
         */
        (void)Rte_Write_VeTMIB_T_OnBrdChrg_ClntTmpIn_Value(KeTMIB_T_PECTOSRcvry);
    }
    else
    {
        /* Outport: '<Root>/VeTMIB_T_OnBrdChrg_ClntTmpIn' incorporates:
         *  SignalConversion: '<S85>/Signal Conversion'
         *  Switch: '<S134>/Switch'
         */
        (void)Rte_Write_VeTMIB_T_OnBrdChrg_ClntTmpIn_Value
            (TMIB_ac_DW.VeTMIB_T_PECTOSInit_DSTATE);
    }

    /* End of Switch: '<S133>/Switch' */

    /* Outport: '<Root>/VeTMIB_b_OnBrdChrg_ClntTmpIn_FA' incorporates:
     *  SignalConversion: '<S85>/Signal Conversion1'
     */
    (void)Rte_Write_VeTMIB_b_OnBrdChrg_ClntTmpIn_FA_Value(rtb_NOT4_p);

    /* Outport: '<Root>/VeTMIB_b_OnBrdChrg_ClntTmpIn_FF' incorporates:
     *  SignalConversion: '<S85>/Signal Conversion2'
     */
    (void)Rte_Write_VeTMIB_b_OnBrdChrg_ClntTmpIn_FF_Value
        (rtb_RelationalOperator2_e);

    /* Update for UnitDelay: '<S98>/Unit Delay' */
    TMIB_ac_DW.UnitDelay_DSTATE_oh = rtb_Logical1_g;

    /* End of Outputs for SubSystem: '<S20>/PECTOS' */

    /* Outport: '<Root>/VeTMIB_T_OnBrdChrg_ClntTmpInRaw' */
    (void)Rte_Write_VeTMIB_T_OnBrdChrg_ClntTmpInRaw_Value(rtb_Vector_e[0]);

    /* End of Outputs for SubSystem: '<S3>/PECTOS' */
#endif

    /* End of SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_CT_SnsrCktLo' */

    /* SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_MtrElect_CT_SnsrCktLo' incorporates:
     *  Inport: '<Root>/VeADCR_U_Ppctis_VsADCR_e_CnvnRes'
     *  SignalConversion generated from: '<S3>/VeTMIB_T_PPCTISRaw'
     *  SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_MtrElect_CT_SnsrCktHi'
     */
#if Rte_SysCon_Variant_TMIB_PPCTIS_Presence

    /* Outputs for Atomic SubSystem: '<S3>/PPCTIS' */
    /* SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_MtrElect_CT_SnsrCktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CT_SnsrCktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CT_SnsrCktLo_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Sta_j2);

    /* SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_MtrElect_CT_SnsrCktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CT_SnsrCktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CT_SnsrCktHi_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_c);

    /* Outputs for Atomic SubSystem: '<S21>/PPCTIS' */

    /* RelationalOperator: '<S160>/Relational Operator3' incorporates:
     *  Constant: '<S160>/Constant3'
     *  S-Function (sfix_bitop): '<S160>/Bitwise Operator2'
     */
    rtb_NOT4_p = ((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Stat_c) & 64U) ==
                  0U);

    /* Outputs for Atomic SubSystem: '<S160>/EdgeFalling1' */
    /* Logic: '<S160>/Logical Operator' incorporates:
     *  Logic: '<S162>/OR1'
     */
    rtb_RelationalOperator1_lk = !rtb_NOT4_p;

    /* End of Outputs for SubSystem: '<S160>/EdgeFalling1' */

    /* Logic: '<S152>/Logical Operator' incorporates:
     *  Logic: '<S152>/Logical Operator1'
     *  Logic: '<S153>/Logical Operator'
     */
    rtb_RelationalOperator2_e = (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
        (!rtb_TmpSignalConversionAtVeADFB_b_A2DFau));

    /* Logic: '<S160>/Logical1' incorporates:
     *  Constant: '<S155>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S159>/Calib'
     *  Constant: '<S160>/Constant1'
     *  Logic: '<S152>/Logical Operator'
     *  Logic: '<S160>/Logical Operator'
     *  Logic: '<S160>/Logical10'
     *  Logic: '<S160>/Logical12'
     *  RelationalOperator: '<S160>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S160>/Bitwise Operator3'
     */
    rtb_Logical1_g = ((rtb_RelationalOperator2_e && (KeTMIB_b_STBDiagEnblPPCTIS))
                      && ((!KeTMIB_b_LtchEnblPPCTISSTB) || (((((uint32)
                           rtb_TmpSignalConversionAtVeDMAB_y_Stat_c) & 1U) == 0U)
                        || rtb_RelationalOperator1_lk)));

    /* End of Outputs for SubSystem: '<S21>/PPCTIS' */
    /* Gateway: SigMngtAndCnvn/PPCTIS/PPCTIS/SigAcqnAndFilSys/AntiSpkFil */
    /* During: SigMngtAndCnvn/PPCTIS/PPCTIS/SigAcqnAndFilSys/AntiSpkFil */
    (void)Rte_Read_VeADCR_U_Ppctis_VsADCR_e_CnvnRes(&tmpRead_1);

    /* Outputs for Atomic SubSystem: '<S21>/PPCTIS' */
    /* Chart: '<S151>/AntiSpkFil' incorporates:
     *  Constant: '<S204>/Calib'
     *  Constant: '<S205>/Calib'
     *  Inport: '<Root>/VeADCR_U_Ppctis_VsADCR_e_CnvnRes'
     */
    if (((uint32)TMIB_ac_DW.is_active_c3_TMIB_ac) == 0U)
    {
        /* Entry: SigMngtAndCnvn/PPCTIS/PPCTIS/SigAcqnAndFilSys/AntiSpkFil */
        TMIB_ac_DW.is_active_c3_TMIB_ac = 1U;

        /* Entry Internal: SigMngtAndCnvn/PPCTIS/PPCTIS/SigAcqnAndFilSys/AntiSpkFil */
        /* Transition: '<S203>:8' */
        TMIB_ac_DW.is_c3_TMIB_ac = TMIB_ac_IN_NORMAL;

        /* Entry 'NORMAL': '<S203>:37' */
        TMIB_ac_B.InputRaw0 = tmpRead_1.e_CnvnRes;
        VeTMIB_U_PPCTISVoltRaw = tmpRead_1.e_CnvnRes;
    }
    else if (((sint32)TMIB_ac_DW.is_c3_TMIB_ac) == 1)
    {
        /* During 'FILTERING': '<S203>:38' */
        if (TMIB_ac_B.Cnt >= ((float32)KeTMIB_Cnt_PPCTISSpikeThd))
        {
            /* Transition: '<S203>:40' */
            TMIB_ac_DW.is_c3_TMIB_ac = TMIB_ac_IN_NORMAL;

            /* Entry 'NORMAL': '<S203>:37' */
            TMIB_ac_B.InputRaw0 = tmpRead_1.e_CnvnRes;
            VeTMIB_U_PPCTISVoltRaw = tmpRead_1.e_CnvnRes;
        }
        else
        {
            TMIB_ac_B.Cnt++;
        }
    }
    else
    {
        /* During 'NORMAL': '<S203>:37' */
        tmp = tmpRead_1.e_CnvnRes - TMIB_ac_B.InputRaw0;
        if ((tmp > KeTMIB_U_PPCTISSpikeThd) || (tmp < (-KeTMIB_U_PPCTISSpikeThd)))
        {
            /* Transition: '<S203>:39' */
            TMIB_ac_DW.is_c3_TMIB_ac = TMIB_ac_IN_FILTERING;

            /* Entry 'FILTERING': '<S203>:38' */
            TMIB_ac_B.Cnt = 0.0F;
        }
        else
        {
            VeTMIB_U_PPCTISVoltRaw = tmpRead_1.e_CnvnRes;
            TMIB_ac_B.InputRaw0 = tmpRead_1.e_CnvnRes;
        }
    }

    /* End of Chart: '<S151>/AntiSpkFil' */

    /* RelationalOperator: '<S152>/Relational Operator2' incorporates:
     *  Constant: '<S158>/Calib'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_IsDiag = (VeTMIB_U_PPCTISVoltRaw >
        KeTMIB_U_STBCktHiFltLimPPCTIS);

    /* Logic: '<S154>/NOT4' */
    rtb_TmpSignalConversionAtVeDFIR_b_DsblDi =
        (rtb_TmpSignalConversionAtVeDFIR_b_DsblDi ||
         rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* Outputs for Atomic SubSystem: '<S160>/EdgeFalling1' */
    /* Logic: '<S162>/AND' incorporates:
     *  UnitDelay: '<S162>/Unit Delay'
     */
    rtb_RelationalOperator1_lk = (rtb_RelationalOperator1_lk &&
        (TMIB_ac_DW.UnitDelay_DSTATE_mt));

    /* Update for UnitDelay: '<S162>/Unit Delay' */
    TMIB_ac_DW.UnitDelay_DSTATE_mt = rtb_NOT4_p;

    /* End of Outputs for SubSystem: '<S160>/EdgeFalling1' */

    /* Logic: '<S160>/Logical5' */
    rtb_RelationalOperator1_lk = (rtb_TmpSignalConversionAtVeDFIR_b_DsblDi ||
        rtb_RelationalOperator1_lk);

    /* Outputs for Atomic SubSystem: '<S161>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S161>/Counter Reset  Enabled ' */
    /* Switch: '<S168>/Switch1' incorporates:
     *  Logic: '<S161>/Fail Counter Reset'
     *  Logic: '<S161>/NOT6'
     *  Switch: '<S168>/Switch2'
     *  Switch: '<S169>/Switch1'
     *  UnitDelay: '<S161>/Unit Delay'
     *  UnitDelay: '<S161>/Unit Delay1'
     */
    if ((rtb_RelationalOperator1_lk || (TMIB_ac_DW.UnitDelay_DSTATE_ft)) ||
            (TMIB_ac_DW.UnitDelay1_DSTATE))
    {
        /* Switch: '<S168>/Switch1' incorporates:
         *  Constant: '<S168>/Constant Value2'
         */
        VeTMIB_Cnt_STBFailLimPPCTIS = 0U;

        /* Switch: '<S169>/Switch1' incorporates:
         *  Constant: '<S169>/Constant Value2'
         */
        VeTMIB_Cnt_STBSmplLimPPCTIS = 0U;
    }
    else
    {
        if (rtb_Logical1_g && rtb_TmpSignalConversionAtVeDFIR_b_IsDiag)
        {
            /* Switch: '<S168>/Switch1' incorporates:
             *  Constant: '<S168>/Constant Value1'
             *  Sum: '<S168>/Subtraction'
             *  Switch: '<S168>/Switch2'
             *  UnitDelay: '<S168>/Unit Delay'
             */
            VeTMIB_Cnt_STBFailLimPPCTIS = (uint16)(((uint32)
                VeTMIB_Cnt_STBFailLimPPCTIS) + 1U);
        }

        /* Switch: '<S169>/Switch2' */
        if (rtb_Logical1_g)
        {
            /* Switch: '<S169>/Switch1' incorporates:
             *  Constant: '<S169>/Constant Value1'
             *  Sum: '<S169>/Subtraction'
             *  Switch: '<S169>/Switch2'
             *  UnitDelay: '<S169>/Unit Delay'
             */
            VeTMIB_Cnt_STBSmplLimPPCTIS = (uint16)(((uint32)
                VeTMIB_Cnt_STBSmplLimPPCTIS) + 1U);
        }

        /* End of Switch: '<S169>/Switch2' */
    }

    /* End of Switch: '<S168>/Switch1' */
    /* End of Outputs for SubSystem: '<S161>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S161>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S161>/Greater Than or Equal ' incorporates:
     *  Constant: '<S156>/Calib'
     */
    TMIB_ac_DW.UnitDelay1_DSTATE = (VeTMIB_Cnt_STBFailLimPPCTIS >=
        KeTMIB_Cnt_STBFailLimPPCTIS);

    /* Logic: '<S161>/NOT5' incorporates:
     *  Constant: '<S157>/Calib'
     *  Logic: '<S161>/NOT3'
     *  RelationalOperator: '<S161>/Less Than  or Equal'
     */
    rtb_NOT4_p = ((VeTMIB_Cnt_STBSmplLimPPCTIS >= KeTMIB_Cnt_STBSmplLimPPCTIS) &&
                  (!TMIB_ac_DW.UnitDelay1_DSTATE));

    /* Switch: '<S174>/Switch1' incorporates:
     *  Constant: '<S167>/Constant Value'
     *  DataStoreWrite: '<S152>/Data Store Write1'
     *  Switch: '<S173>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        TMIB_ac_DW.NeTMIB_Cnt_PPCTISSTB_MFOP = 0U;
    }
    else
    {
        if (rtb_NOT4_p)
        {
            /* MinMax: '<S167>/Minimum2' incorporates:
             *  DataStoreRead: '<S152>/Data Store Read1'
             *  Switch: '<S173>/Switch1'
             */
            if (VeTMIB_Cnt_STBFailLimPPCTIS >
                    TMIB_ac_DW.NeTMIB_Cnt_PPCTISSTB_MFOP)
            {
                /* DataStoreWrite: '<S152>/Data Store Write1' incorporates:
                 *  Switch: '<S173>/Switch1'
                 */
                TMIB_ac_DW.NeTMIB_Cnt_PPCTISSTB_MFOP =
                    VeTMIB_Cnt_STBFailLimPPCTIS;
            }

            /* End of MinMax: '<S167>/Minimum2' */
        }
    }

    /* End of Switch: '<S174>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S160>/Fail' */
    TMIB_ac_Fail(TMIB_ac_DW.UnitDelay1_DSTATE, &TMIB_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S160>/Fail' */

    /* Outputs for Enabled SubSystem: '<S160>/Init' */
    TMIB_ac_Init_k(rtb_RelationalOperator1_lk, &TMIB_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S160>/Init' */

    /* Outputs for Enabled SubSystem: '<S160>/Pass' */
    TMIB_ac_Pass(rtb_NOT4_p, &TMIB_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S160>/Pass' */

    /* RelationalOperator: '<S180>/Relational Operator3' incorporates:
     *  Constant: '<S180>/Constant3'
     *  S-Function (sfix_bitop): '<S180>/Bitwise Operator2'
     */
    rtb_RelationalOperator1_lk = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_j2) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S180>/EdgeFalling1' */
    /* Logic: '<S180>/Logical Operator' incorporates:
     *  Logic: '<S182>/OR1'
     */
    rtb_RelationalOperator3_o = !rtb_RelationalOperator1_lk;

    /* End of Outputs for SubSystem: '<S180>/EdgeFalling1' */

    /* Logic: '<S180>/Logical1' incorporates:
     *  Constant: '<S175>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S179>/Calib'
     *  Constant: '<S180>/Constant1'
     *  Logic: '<S153>/Logical Operator'
     *  Logic: '<S180>/Logical Operator'
     *  Logic: '<S180>/Logical10'
     *  Logic: '<S180>/Logical12'
     *  RelationalOperator: '<S180>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S180>/Bitwise Operator3'
     */
    rtb_Logical1_g = ((rtb_RelationalOperator2_e && (KeTMIB_b_STGDiagEnblPPCTIS))
                      && ((!KeTMIB_b_LtchEnblPPCTISSTG) || (((((uint32)
                           rtb_TmpSignalConversionAtVeDMAB_y_Sta_j2) & 1U) == 0U)
                        || rtb_RelationalOperator3_o)));

    /* RelationalOperator: '<S153>/Relational Operator1' incorporates:
     *  Constant: '<S178>/Calib'
     */
    rtb_RelationalOperator2_e = (VeTMIB_U_PPCTISVoltRaw <
        KeTMIB_U_STGCktLowFltLimPPCTIS);

    /* Outputs for Atomic SubSystem: '<S180>/EdgeFalling1' */
    /* Logic: '<S182>/AND' incorporates:
     *  UnitDelay: '<S182>/Unit Delay'
     */
    rtb_RelationalOperator3_o = (rtb_RelationalOperator3_o &&
        (TMIB_ac_DW.UnitDelay_DSTATE_dh));

    /* Update for UnitDelay: '<S182>/Unit Delay' */
    TMIB_ac_DW.UnitDelay_DSTATE_dh = rtb_RelationalOperator1_lk;

    /* End of Outputs for SubSystem: '<S180>/EdgeFalling1' */

    /* Logic: '<S180>/Logical5' */
    rtb_TmpSignalConversionAtVeDFIR_b_DsblDi =
        (rtb_TmpSignalConversionAtVeDFIR_b_DsblDi || rtb_RelationalOperator3_o);

    /* UnitDelay: '<S181>/Unit Delay1' incorporates:
     *  UnitDelay: '<S161>/Unit Delay'
     */
    TMIB_ac_DW.UnitDelay_DSTATE_ft = TMIB_ac_DW.UnitDelay1_DSTATE_f;

    /* Outputs for Atomic SubSystem: '<S181>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S181>/Counter Reset  Enabled ' */
    /* Switch: '<S188>/Switch1' incorporates:
     *  Logic: '<S181>/Fail Counter Reset'
     *  Logic: '<S181>/NOT6'
     *  Switch: '<S188>/Switch2'
     *  Switch: '<S189>/Switch1'
     *  UnitDelay: '<S161>/Unit Delay'
     *  UnitDelay: '<S181>/Unit Delay'
     */
    if ((rtb_TmpSignalConversionAtVeDFIR_b_DsblDi ||
            (TMIB_ac_DW.UnitDelay_DSTATE_j)) || (TMIB_ac_DW.UnitDelay_DSTATE_ft))
    {
        /* Switch: '<S188>/Switch1' incorporates:
         *  Constant: '<S188>/Constant Value2'
         */
        VeTMIB_Cnt_STGFailLimPPCTIS = 0U;

        /* Switch: '<S189>/Switch1' incorporates:
         *  Constant: '<S189>/Constant Value2'
         */
        VeTMIB_Cnt_STGSmplLimPPCTIS = 0U;
    }
    else
    {
        if (rtb_Logical1_g && rtb_RelationalOperator2_e)
        {
            /* Switch: '<S188>/Switch1' incorporates:
             *  Constant: '<S188>/Constant Value1'
             *  Sum: '<S188>/Subtraction'
             *  Switch: '<S188>/Switch2'
             *  UnitDelay: '<S188>/Unit Delay'
             */
            VeTMIB_Cnt_STGFailLimPPCTIS = (uint16)(((uint32)
                VeTMIB_Cnt_STGFailLimPPCTIS) + 1U);
        }

        /* Switch: '<S189>/Switch2' */
        if (rtb_Logical1_g)
        {
            /* Switch: '<S189>/Switch1' incorporates:
             *  Constant: '<S189>/Constant Value1'
             *  Sum: '<S189>/Subtraction'
             *  Switch: '<S189>/Switch2'
             *  UnitDelay: '<S189>/Unit Delay'
             */
            VeTMIB_Cnt_STGSmplLimPPCTIS = (uint16)(((uint32)
                VeTMIB_Cnt_STGSmplLimPPCTIS) + 1U);
        }

        /* End of Switch: '<S189>/Switch2' */
    }

    /* End of Switch: '<S188>/Switch1' */
    /* End of Outputs for SubSystem: '<S181>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S181>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S181>/Greater Than or Equal ' incorporates:
     *  Constant: '<S176>/Calib'
     */
    TMIB_ac_DW.UnitDelay1_DSTATE_f = (VeTMIB_Cnt_STGFailLimPPCTIS >=
        KeTMIB_Cnt_STGFailLimPPCTIS);

    /* Logic: '<S181>/NOT5' incorporates:
     *  Constant: '<S177>/Calib'
     *  Logic: '<S181>/NOT3'
     *  RelationalOperator: '<S181>/Less Than  or Equal'
     */
    TMIB_ac_DW.UnitDelay_DSTATE_j = ((VeTMIB_Cnt_STGSmplLimPPCTIS >=
        KeTMIB_Cnt_STGSmplLimPPCTIS) && (!TMIB_ac_DW.UnitDelay1_DSTATE_f));

    /* Switch: '<S194>/Switch1' incorporates:
     *  Constant: '<S187>/Constant Value'
     *  DataStoreWrite: '<S153>/Data Store Write1'
     *  Switch: '<S193>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        TMIB_ac_DW.NeTMIB_Cnt_PPCTISSTG_MFOP = 0U;
    }
    else
    {
        if (TMIB_ac_DW.UnitDelay_DSTATE_j)
        {
            /* MinMax: '<S187>/Minimum2' incorporates:
             *  DataStoreRead: '<S153>/Data Store Read1'
             *  Switch: '<S193>/Switch1'
             */
            if (VeTMIB_Cnt_STGFailLimPPCTIS >
                    TMIB_ac_DW.NeTMIB_Cnt_PPCTISSTG_MFOP)
            {
                /* DataStoreWrite: '<S153>/Data Store Write1' incorporates:
                 *  Switch: '<S193>/Switch1'
                 */
                TMIB_ac_DW.NeTMIB_Cnt_PPCTISSTG_MFOP =
                    VeTMIB_Cnt_STGFailLimPPCTIS;
            }

            /* End of MinMax: '<S187>/Minimum2' */
        }
    }

    /* End of Switch: '<S194>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S180>/Fail' */
    TMIB_ac_Fail(TMIB_ac_DW.UnitDelay1_DSTATE_f, &TMIB_ac_B.Merge_l);

    /* End of Outputs for SubSystem: '<S180>/Fail' */

    /* Outputs for Enabled SubSystem: '<S180>/Init' */
    TMIB_ac_Init_k(rtb_TmpSignalConversionAtVeDFIR_b_DsblDi, &TMIB_ac_B.Merge_l);

    /* End of Outputs for SubSystem: '<S180>/Init' */

    /* Outputs for Enabled SubSystem: '<S180>/Pass' */
    TMIB_ac_Pass(TMIB_ac_DW.UnitDelay_DSTATE_j, &TMIB_ac_B.Merge_l);

    /* End of Outputs for SubSystem: '<S180>/Pass' */

    /* Logic: '<S149>/Logical Operator1' incorporates:
     *  Constant: '<S163>/Constant'
     *  Constant: '<S183>/Constant'
     *  Merge: '<S160>/Merge'
     *  Merge: '<S180>/Merge'
     *  RelationalOperator: '<S160>/Relational Operator'
     *  RelationalOperator: '<S180>/Relational Operator'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_PostCo = (((((uint32)TMIB_ac_B.Merge_l) ==
        CeDFIB_e_Fail) || (((uint32)TMIB_ac_B.Merge) == CeDFIB_e_Fail)) ||
        rtb_TmpSignalConversionAtVeADFB_b_A2DFau);

    /* Switch: '<S209>/Switch' incorporates:
     *  Selector: '<S208>/Selector_R'
     */
    if (TMIB_ac_DW.UnitDelay_DSTATE_l)
    {
        /* Assignment: '<S210>/Assignment_y' incorporates:
         *  Switch: '<S196>/Switch'
         */
        VeTMIB_U_PPCTISVolt = VeTMIB_U_PPCTISVoltRaw;
    }
    else
    {
        /* Assignment: '<S210>/Assignment_y' incorporates:
         *  Constant: '<S206>/Calib'
         *  Product: '<S209>/Product'
         *  Selector: '<S208>/Selector_u'
         *  Selector: '<S208>/Selector_x'
         *  Sum: '<S209>/Difference'
         *  Sum: '<S209>/Sum'
         *  Switch: '<S196>/Switch'
         *  Switch: '<S209>/Switch_E'
         */
        VeTMIB_U_PPCTISVolt = ((VeTMIB_U_PPCTISVoltRaw - VeTMIB_U_PPCTISVolt) *
                               KeTMIB_k_PPCTISFiltGx) + VeTMIB_U_PPCTISVolt;
    }

    /* End of Switch: '<S209>/Switch' */

    /* SignalConversion generated from: '<S195>/Vector' */
    rtb_Vector_e[0] = VeTMIB_U_PPCTISVoltRaw;
    rtb_Vector_e[1] = VeTMIB_U_PPCTISVolt;

    /* Lookup_n-D: '<S195>/Vector' */
    for (iU = 0; iU < 2; iU++)
    {
        rtb_TmpSignalConversionAtVectorInport1_i[iU] = look1_iflf_binlca_19a
            (rtb_Vector_e[iU], ((const float32 *)&(KxTMIB_U_PPCTISChartc[0])),
             ((const float32 *)&(KtTMIB_T_PPCTISChartc[0])), 23U);
    }

    /* End of Lookup_n-D: '<S195>/Vector' */

    /* Switch: '<S198>/Switch' incorporates:
     *  Logic: '<S149>/Logical Operator'
     *  Logic: '<S150>/Logical Operator1'
     */
    if (((!rtb_RelationalOperator2_e) &&
            (!rtb_TmpSignalConversionAtVeDFIR_b_IsDiag)) &&
            (!rtb_TmpSignalConversionAtVeDFIR_b_PostCo))
    {
        /* Switch: '<S198>/Switch' */
        TMIB_ac_DW.VeTMIB_T_PPCTISInit_DSTATE =
            rtb_TmpSignalConversionAtVectorInport1_i[1];
    }

    /* End of Switch: '<S198>/Switch' */

    /* Switch: '<S196>/Switch' incorporates:
     *  Constant: '<S200>/Calib'
     *  Constant: '<S202>/Calib'
     *  Logic: '<S197>/Logical Operator1'
     *  Switch: '<S197>/Switch'
     */
    if (KeTMIB_b_PPCTISBypEnbl)
    {
        /* Outport: '<Root>/VeTMIB_T_PsvPmpClnt_TmpIn' incorporates:
         *  Constant: '<S199>/Calib'
         *  SignalConversion: '<S148>/Signal Conversion'
         */
        (void)Rte_Write_VeTMIB_T_PsvPmpClnt_TmpIn_Value(KeTMIB_T_PPCTISByp);
    }
    else if ((KeTMIB_b_PPCTISRcvryEnbl) &&
             rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        /* Outport: '<Root>/VeTMIB_T_PsvPmpClnt_TmpIn' incorporates:
         *  Constant: '<S201>/Calib'
         *  SignalConversion: '<S148>/Signal Conversion'
         *  Switch: '<S197>/Switch'
         */
        (void)Rte_Write_VeTMIB_T_PsvPmpClnt_TmpIn_Value(KeTMIB_T_PPCTISRcvry);
    }
    else
    {
        /* Outport: '<Root>/VeTMIB_T_PsvPmpClnt_TmpIn' incorporates:
         *  SignalConversion: '<S148>/Signal Conversion'
         *  Switch: '<S197>/Switch'
         */
        (void)Rte_Write_VeTMIB_T_PsvPmpClnt_TmpIn_Value
            (TMIB_ac_DW.VeTMIB_T_PPCTISInit_DSTATE);
    }

    /* End of Switch: '<S196>/Switch' */

    /* Outport: '<Root>/VeTMIB_b_PsvPmpClnt_TmpIn_FA' incorporates:
     *  SignalConversion: '<S148>/Signal Conversion1'
     */
    (void)Rte_Write_VeTMIB_b_PsvPmpClnt_TmpIn_FA_Value
        (rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* Update for UnitDelay: '<S161>/Unit Delay' */
    TMIB_ac_DW.UnitDelay_DSTATE_ft = rtb_NOT4_p;

    /* End of Outputs for SubSystem: '<S21>/PPCTIS' */

    /* Outport: '<Root>/VeTMIB_T_PsvPmpClnt_TmpInRaw' */
    (void)Rte_Write_VeTMIB_T_PsvPmpClnt_TmpInRaw_Value
        (rtb_TmpSignalConversionAtVectorInport1_i[0]);

    /* End of Outputs for SubSystem: '<S3>/PPCTIS' */
#endif

    /* End of SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_MtrElect_CT_SnsrCktLo' */

    /* SignalConversion generated from: '<S3>/VeTMIB_e_ECHTISSTB_PassFail' incorporates:
     *  SignalConversion generated from: '<S3>/VeTMIB_e_ECHTISSTG_PassFail'
     */
#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence

    /* Outport: '<Root>/VeTMIB_e_FaultSts_CT2_SnsrCktHi' incorporates:
     *  Merge: '<S34>/Merge'
     */
    (void)Rte_Write_VeTMIB_e_FaultSts_CT2_SnsrCktHi_Value(TMIB_ac_B.Merge_n);

    /* Outport: '<Root>/VeTMIB_e_FaultSts_CT2_SnsrCktLo' incorporates:
     *  Merge: '<S54>/Merge'
     */
    (void)Rte_Write_VeTMIB_e_FaultSts_CT2_SnsrCktLo_Value(TMIB_ac_B.Merge_j);

#endif

    /* End of SignalConversion generated from: '<S3>/VeTMIB_e_ECHTISSTB_PassFail' */

    /* SignalConversion generated from: '<S3>/VeTMIB_e_PECTOSSTB_PassFail' incorporates:
     *  SignalConversion generated from: '<S3>/VeTMIB_e_PECTOSSTG_PassFail'
     */
#if Rte_SysCon_Variant_TMIB_PECTOS_Presence

    /* Outport: '<Root>/VeTMIB_e_FaultSts_CT_SnsrCktHi' incorporates:
     *  Merge: '<S97>/Merge'
     */
    (void)Rte_Write_VeTMIB_e_FaultSts_CT_SnsrCktHi_Value(TMIB_ac_B.Merge_m);

    /* Outport: '<Root>/VeTMIB_e_FaultSts_CT_SnsrCktLo' incorporates:
     *  Merge: '<S117>/Merge'
     */
    (void)Rte_Write_VeTMIB_e_FaultSts_CT_SnsrCktLo_Value(TMIB_ac_B.Merge_mf);

#endif

    /* End of SignalConversion generated from: '<S3>/VeTMIB_e_PECTOSSTB_PassFail' */

    /* SignalConversion generated from: '<S3>/VeTMIB_e_PPCTISSTB_PassFail' incorporates:
     *  SignalConversion generated from: '<S3>/VeTMIB_e_PPCTISSTG_PassFail'
     */
#if Rte_SysCon_Variant_TMIB_PPCTIS_Presence

    /* Outport: '<Root>/VeTMIB_e_FaultSts_MtrElect_CT_SnsrCktHi' incorporates:
     *  Merge: '<S160>/Merge'
     */
    (void)Rte_Write_VeTMIB_e_FaultSts_MtrElect_CT_SnsrCktHi_Value
        (TMIB_ac_B.Merge);

    /* Outport: '<Root>/VeTMIB_e_FaultSts_MtrElect_CT_SnsrCktLo' incorporates:
     *  Merge: '<S180>/Merge'
     */
    (void)Rte_Write_VeTMIB_e_FaultSts_MtrElect_CT_SnsrCktLo_Value
        (TMIB_ac_B.Merge_l);

#endif

    /* End of SignalConversion generated from: '<S3>/VeTMIB_e_PPCTISSTB_PassFail' */

    /* Update for UnitDelay: '<S3>/Unit Delay' incorporates:
     *  Constant: '<S3>/Constant3'
     */
#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence || Rte_SysCon_Variant_TMIB_PECTOS_Presence || Rte_SysCon_Variant_TMIB_PPCTIS_Presence

    TMIB_ac_DW.UnitDelay_DSTATE_l = false;

#endif

    /* End of Update for UnitDelay: '<S3>/Unit Delay' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
}

/* Output function */
FUNC(void, TMIB_CODE) TMIB_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/ADIB_PwrOff'
     */
    /* Outport: '<Root>/NeTMIB_Cnt_ECHTISSTG_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/NeCDMR_Cnt_BCIMInternal_MFOP'
     */
    (void)Rte_Write_NeTMIB_Cnt_ECHTISSTG_MFOP_NeTMIB_Cnt_ECHTISSTG_MFOP
        (TMIB_ac_DW.NeTMIB_Cnt_ECHTISSTG_MFOP);

    /* Outport: '<Root>/NeTMIB_Cnt_ECHTISSTB_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/NeCDMR_Cnt_BCIMInternal_MSOF'
     */
    (void)Rte_Write_NeTMIB_Cnt_ECHTISSTB_MFOP_NeTMIB_Cnt_ECHTISSTB_MFOP
        (TMIB_ac_DW.NeTMIB_Cnt_ECHTISSTB_MFOP);

    /* Outport: '<Root>/NeTMIB_Cnt_PECTOSSTG_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/NeCDMR_Cnt_CPIMInternal_MFOP'
     */
    (void)Rte_Write_NeTMIB_Cnt_PECTOSSTG_MFOP_NeTMIB_Cnt_PECTOSSTG_MFOP
        (TMIB_ac_DW.NeTMIB_Cnt_PECTOSSTG_MFOP);

    /* Outport: '<Root>/NeTMIB_Cnt_PECTOSSTB_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/NeCDMR_Cnt_CPIMInternal_MSOF'
     */
    (void)Rte_Write_NeTMIB_Cnt_PECTOSSTB_MFOP_NeTMIB_Cnt_PECTOSSTB_MFOP
        (TMIB_ac_DW.NeTMIB_Cnt_PECTOSSTB_MFOP);

    /* Outport: '<Root>/NeTMIB_Cnt_PPCTISSTG_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/NeCDMR_Cnt_ChgPrtLckFailHMFOP'
     */
    (void)Rte_Write_NeTMIB_Cnt_PPCTISSTG_MFOP_NeTMIB_Cnt_PPCTISSTG_MFOP
        (TMIB_ac_DW.NeTMIB_Cnt_PPCTISSTG_MFOP);

    /* Outport: '<Root>/NeTMIB_Cnt_PPCTISSTB_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/NeCDMR_Cnt_ChgPrtLckFailHMSOF'
     */
    (void)Rte_Write_NeTMIB_Cnt_PPCTISSTB_MFOP_NeTMIB_Cnt_PPCTISSTB_MFOP
        (TMIB_ac_DW.NeTMIB_Cnt_PPCTISSTB_MFOP);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Model initialize function */
FUNC(void, TMIB_CODE) TMIB_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/SigMngtAndCnvn'
     */
    /* InitializeConditions for UnitDelay: '<S3>/Unit Delay' */
#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence || Rte_SysCon_Variant_TMIB_PECTOS_Presence || Rte_SysCon_Variant_TMIB_PPCTIS_Presence

    TMIB_ac_DW.UnitDelay_DSTATE_l = true;

#endif

    /* End of InitializeConditions for UnitDelay: '<S3>/Unit Delay' */
#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence
#endif

#if Rte_SysCon_Variant_TMIB_PECTOS_Presence
#endif

#if Rte_SysCon_Variant_TMIB_PPCTIS_Presence
#endif

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* Outputs for Atomic SubSystem: '<Root>/Init' */
#if Rte_SysCon_Variant_TMIB_ECHTIS_Presence

    /* Outputs for Atomic SubSystem: '<S2>/ECHTIS' */
    /* Outputs for Atomic SubSystem: '<S4>/ECHTIS' */
    /* DataStoreWrite: '<S7>/NeCDMR_Cnt_BCIMInternal_MFOP1' incorporates:
     *  Inport: '<Root>/NeTMIB_Cnt_ECHTISSTB_MFOP_PM_In'
     */
    (void)Rte_Read_NeTMIB_Cnt_ECHTISSTB_MFOP_Rx_NeTMIB_Cnt_ECHTISSTB_MFOP
        (&TMIB_ac_DW.NeTMIB_Cnt_ECHTISSTB_MFOP);

    /* DataStoreWrite: '<S7>/NeCDMR_Cnt_BCIMInternal_MFOP' incorporates:
     *  Inport: '<Root>/NeTMIB_Cnt_ECHTISSTG_MFOP_PM_In'
     */
    (void)Rte_Read_NeTMIB_Cnt_ECHTISSTG_MFOP_Rx_NeTMIB_Cnt_ECHTISSTG_MFOP
        (&TMIB_ac_DW.NeTMIB_Cnt_ECHTISSTG_MFOP);

    /* StateWriter: '<S7>/State Writer' incorporates:
     *  Constant: '<S10>/Calib'
     */
    TMIB_ac_DW.VeTMIB_T_ECHTISInit_DSTATE = KeTMIB_T_ECHTISTempInit;

    /* Outport: '<Root>/VeTMIB_T_ElecClntHtr_TmpInRaw' incorporates:
     *  Constant: '<S10>/Calib'
     *  SignalConversion: '<S7>/Signal Conversion'
     */
    (void)Rte_Write_VeTMIB_T_ElecClntHtr_TmpInRaw_Value(KeTMIB_T_ECHTISTempInit);

    /* Outport: '<Root>/VeTMIB_T_ElecClntHtr_TmpIn' incorporates:
     *  Constant: '<S10>/Calib'
     *  SignalConversion: '<S7>/Signal Conversion1'
     */
    (void)Rte_Write_VeTMIB_T_ElecClntHtr_TmpIn_Value(KeTMIB_T_ECHTISTempInit);

    /* Outport: '<Root>/VeTMIB_e_FaultSts_CT2_SnsrCktHi' incorporates:
     *  Constant: '<S8>/Constant'
     */
    (void)Rte_Write_VeTMIB_e_FaultSts_CT2_SnsrCktHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeTMIB_e_FaultSts_CT2_SnsrCktLo' incorporates:
     *  Constant: '<S9>/Constant'
     */
    (void)Rte_Write_VeTMIB_e_FaultSts_CT2_SnsrCktLo_Value(CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S4>/ECHTIS' */
    /* End of Outputs for SubSystem: '<S2>/ECHTIS' */
#endif

#if Rte_SysCon_Variant_TMIB_PECTOS_Presence

    /* Outputs for Atomic SubSystem: '<S2>/PECTOS' */
    /* Outputs for Atomic SubSystem: '<S5>/PECTOS' */
    /* DataStoreWrite: '<S11>/NeCDMR_Cnt_BCIMInternal_MFOP1' incorporates:
     *  Inport: '<Root>/NeTMIB_Cnt_PECTOSSTB_MFOP_PM_In'
     */
    (void)Rte_Read_NeTMIB_Cnt_PECTOSSTB_MFOP_Rx_NeTMIB_Cnt_PECTOSSTB_MFOP
        (&TMIB_ac_DW.NeTMIB_Cnt_PECTOSSTB_MFOP);

    /* DataStoreWrite: '<S11>/NeCDMR_Cnt_BCIMInternal_MFOP' incorporates:
     *  Inport: '<Root>/NeTMIB_Cnt_PECTOSSTG_MFOP_PM_In'
     */
    (void)Rte_Read_NeTMIB_Cnt_PECTOSSTG_MFOP_Rx_NeTMIB_Cnt_PECTOSSTG_MFOP
        (&TMIB_ac_DW.NeTMIB_Cnt_PECTOSSTG_MFOP);

    /* StateWriter: '<S11>/State Writer' incorporates:
     *  Constant: '<S14>/Calib'
     */
    TMIB_ac_DW.VeTMIB_T_PECTOSInit_DSTATE = KeTMIB_T_PECTOSTempInit;

    /* Outport: '<Root>/VeTMIB_T_OnBrdChrg_ClntTmpIn' incorporates:
     *  Constant: '<S14>/Calib'
     *  SignalConversion: '<S11>/Signal Conversion1'
     */
    (void)Rte_Write_VeTMIB_T_OnBrdChrg_ClntTmpIn_Value(KeTMIB_T_PECTOSTempInit);

    /* Outport: '<Root>/VeTMIB_T_OnBrdChrg_ClntTmpInRaw' incorporates:
     *  Constant: '<S14>/Calib'
     *  SignalConversion: '<S11>/Signal Conversion2'
     */
    (void)Rte_Write_VeTMIB_T_OnBrdChrg_ClntTmpInRaw_Value
        (KeTMIB_T_PECTOSTempInit);

    /* Outport: '<Root>/VeTMIB_e_FaultSts_CT_SnsrCktHi' incorporates:
     *  Constant: '<S12>/Constant'
     */
    (void)Rte_Write_VeTMIB_e_FaultSts_CT_SnsrCktHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeTMIB_e_FaultSts_CT_SnsrCktLo' incorporates:
     *  Constant: '<S13>/Constant'
     */
    (void)Rte_Write_VeTMIB_e_FaultSts_CT_SnsrCktLo_Value(CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S5>/PECTOS' */
    /* End of Outputs for SubSystem: '<S2>/PECTOS' */
#endif

#if Rte_SysCon_Variant_TMIB_PPCTIS_Presence

    /* Outputs for Atomic SubSystem: '<S2>/PPCTIS' */
    /* Outputs for Atomic SubSystem: '<S6>/PPCTIS' */
    /* DataStoreWrite: '<S15>/NeCDMR_Cnt_BCIMInternal_MFOP1' incorporates:
     *  Inport: '<Root>/NeTMIB_Cnt_PPCTISSTB_MFOP_PM_In'
     */
    (void)Rte_Read_NeTMIB_Cnt_PPCTISSTB_MFOP_Rx_NeTMIB_Cnt_PPCTISSTB_MFOP
        (&TMIB_ac_DW.NeTMIB_Cnt_PPCTISSTB_MFOP);

    /* DataStoreWrite: '<S15>/NeCDMR_Cnt_BCIMInternal_MFOP' incorporates:
     *  Inport: '<Root>/NeTMIB_Cnt_PPCTISSTG_MFOP_PM_In'
     */
    (void)Rte_Read_NeTMIB_Cnt_PPCTISSTG_MFOP_Rx_NeTMIB_Cnt_PPCTISSTG_MFOP
        (&TMIB_ac_DW.NeTMIB_Cnt_PPCTISSTG_MFOP);

    /* StateWriter: '<S15>/State Writer' incorporates:
     *  Constant: '<S18>/Calib'
     */
    TMIB_ac_DW.VeTMIB_T_PPCTISInit_DSTATE = KeTMIB_T_PPCTISTempInit;

    /* Outport: '<Root>/VeTMIB_T_PsvPmpClnt_TmpIn' incorporates:
     *  Constant: '<S18>/Calib'
     *  SignalConversion: '<S15>/Signal Conversion1'
     */
    (void)Rte_Write_VeTMIB_T_PsvPmpClnt_TmpIn_Value(KeTMIB_T_PPCTISTempInit);

    /* Outport: '<Root>/VeTMIB_T_PsvPmpClnt_TmpInRaw' incorporates:
     *  Constant: '<S18>/Calib'
     *  SignalConversion: '<S15>/Signal Conversion2'
     */
    (void)Rte_Write_VeTMIB_T_PsvPmpClnt_TmpInRaw_Value(KeTMIB_T_PPCTISTempInit);

    /* Outport: '<Root>/VeTMIB_e_FaultSts_MtrElect_CT_SnsrCktHi' incorporates:
     *  Constant: '<S16>/Constant'
     */
    (void)Rte_Write_VeTMIB_e_FaultSts_MtrElect_CT_SnsrCktHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeTMIB_e_FaultSts_MtrElect_CT_SnsrCktLo' incorporates:
     *  Constant: '<S17>/Constant'
     */
    (void)Rte_Write_VeTMIB_e_FaultSts_MtrElect_CT_SnsrCktLo_Value(CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S6>/PPCTIS' */
    /* End of Outputs for SubSystem: '<S2>/PPCTIS' */
#endif

    /* End of Outputs for SubSystem: '<Root>/Init' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
