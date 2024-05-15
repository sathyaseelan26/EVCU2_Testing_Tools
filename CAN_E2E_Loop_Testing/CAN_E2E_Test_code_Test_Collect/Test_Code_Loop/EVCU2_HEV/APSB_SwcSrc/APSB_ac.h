/*
 * File: APSB_ac.h
 *
 * Code generated for Simulink model 'APSB_ac'.
 *
 * Model version                  : 1.57
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:05:36 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_APSB_ac_h_
#define RTW_HEADER_APSB_ac_h_
#include "Rte_Type.h"
#ifndef APSB_ac_COMMON_INCLUDES_
#define APSB_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_APSB.h"
#endif                                 /* APSB_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_APSB_ac_T
{
    float32 InputRaw0;                 /* '<S70>/AntiSpkFil' */
    float32 Cnt;                       /* '<S70>/AntiSpkFil' */
    float32 InputRaw0_h;               /* '<S52>/AntiSpkFil' */
    float32 Cnt_j;                     /* '<S52>/AntiSpkFil' */
    float32 InputRaw0_he;              /* '<S34>/AntiSpkFil' */
    float32 Cnt_c;                     /* '<S34>/AntiSpkFil' */
    float32 InputRaw0_p;               /* '<S16>/AntiSpkFil' */
    float32 Cnt_m;                     /* '<S16>/AntiSpkFil' */
}
B_APSB_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_APSB_ac_T
{
    float32 VeAPSB_U_AccPedSnsrInit_DSTATE;/* '<S15>/VeAPSB_U_AccPedSnsrInit' */
    float32 VeAPSB_U_AccPed1PwrSnsrInit_DSTATE;/* '<S33>/VeAPSB_U_AccPed1PwrSnsrInit' */
    float32 VeAPSB_U_AccPed2SnsrInit_DSTATE;/* '<S51>/VeAPSB_U_AccPed2SnsrInit' */
    float32 VeAPSB_U_AccPed2PwrSnsrInit_DSTATE;/* '<S69>/VeAPSB_U_AccPed2PwrSnsrInit' */
    boolean UnitDelay_DSTATE;          /* '<S2>/Unit Delay' */
    uint8 is_active_c13_APSB_ac;       /* '<S70>/AntiSpkFil' */
    uint8 is_c13_APSB_ac;              /* '<S70>/AntiSpkFil' */
    uint8 is_active_c4_APSB_ac;        /* '<S52>/AntiSpkFil' */
    uint8 is_c4_APSB_ac;               /* '<S52>/AntiSpkFil' */
    uint8 is_active_c9_APSB_ac;        /* '<S34>/AntiSpkFil' */
    uint8 is_c9_APSB_ac;               /* '<S34>/AntiSpkFil' */
    uint8 is_active_c2_APSB_ac;        /* '<S16>/AntiSpkFil' */
    uint8 is_c2_APSB_ac;               /* '<S16>/AntiSpkFil' */
}
DW_APSB_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_APSB
#include "MemMap.h"

extern VAR(B_APSB_ac_T, APSB_VAR_INIT) APSB_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_APSB
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_APSB
#include "MemMap.h"

extern VAR(DW_APSB_ac_T, APSB_VAR_INIT) APSB_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_APSB
#include "MemMap.h"

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'APSB_ac'
 * '<S1>'   : 'APSB_ac/Init'
 * '<S2>'   : 'APSB_ac/SigMngtAndCnvn'
 * '<S3>'   : 'APSB_ac/Init/AccPed'
 * '<S4>'   : 'APSB_ac/Init/AccPed1Pwr'
 * '<S5>'   : 'APSB_ac/Init/AccPed2'
 * '<S6>'   : 'APSB_ac/Init/AccPed2Pwr'
 * '<S7>'   : 'APSB_ac/Init/AccPed/KeAPSB_U_AccPedVoltInit'
 * '<S8>'   : 'APSB_ac/Init/AccPed1Pwr/KeAPSB_U_AccPed1PwrVoltInit'
 * '<S9>'   : 'APSB_ac/Init/AccPed2/KeAPSB_U_AccPed2VoltInit'
 * '<S10>'  : 'APSB_ac/Init/AccPed2Pwr/KeAPSB_U_AccPed2PwrInit'
 * '<S11>'  : 'APSB_ac/SigMngtAndCnvn/AccPed'
 * '<S12>'  : 'APSB_ac/SigMngtAndCnvn/AccPed1Pwr'
 * '<S13>'  : 'APSB_ac/SigMngtAndCnvn/AccPed2'
 * '<S14>'  : 'APSB_ac/SigMngtAndCnvn/AccPed2Pwr'
 * '<S15>'  : 'APSB_ac/SigMngtAndCnvn/AccPed/ElecToPhyCnvnSys'
 * '<S16>'  : 'APSB_ac/SigMngtAndCnvn/AccPed/SigAcqnAndFilSys'
 * '<S17>'  : 'APSB_ac/SigMngtAndCnvn/AccPed/ElecToPhyCnvnSys/HtAPSB_U_AccPedSnsrChartc'
 * '<S18>'  : 'APSB_ac/SigMngtAndCnvn/AccPed/ElecToPhyCnvnSys/Override'
 * '<S19>'  : 'APSB_ac/SigMngtAndCnvn/AccPed/ElecToPhyCnvnSys/Recovery'
 * '<S20>'  : 'APSB_ac/SigMngtAndCnvn/AccPed/ElecToPhyCnvnSys/SWITCH_DOWN'
 * '<S21>'  : 'APSB_ac/SigMngtAndCnvn/AccPed/ElecToPhyCnvnSys/Override/KeAPSB_U_AccPedSnsrByp'
 * '<S22>'  : 'APSB_ac/SigMngtAndCnvn/AccPed/ElecToPhyCnvnSys/Override/KeAPSB_b_AccPedSnsrBypEnbl'
 * '<S23>'  : 'APSB_ac/SigMngtAndCnvn/AccPed/ElecToPhyCnvnSys/Recovery/KeAPSB_U_AccPedSnsrRcvry'
 * '<S24>'  : 'APSB_ac/SigMngtAndCnvn/AccPed/ElecToPhyCnvnSys/Recovery/KeAPSB_b_AccPedSnsrRcvryEnbl'
 * '<S25>'  : 'APSB_ac/SigMngtAndCnvn/AccPed/SigAcqnAndFilSys/AntiSpkFil'
 * '<S26>'  : 'APSB_ac/SigMngtAndCnvn/AccPed/SigAcqnAndFilSys/KeAPSB_Cnt_AccPedSnsrSpikeThd'
 * '<S27>'  : 'APSB_ac/SigMngtAndCnvn/AccPed/SigAcqnAndFilSys/KeAPSB_U_AccPedSnsrSpikeThd'
 * '<S28>'  : 'APSB_ac/SigMngtAndCnvn/AccPed/SigAcqnAndFilSys/KeAPSB_k_AccPedSnsrFiltGx'
 * '<S29>'  : 'APSB_ac/SigMngtAndCnvn/AccPed/SigAcqnAndFilSys/LoPassFil'
 * '<S30>'  : 'APSB_ac/SigMngtAndCnvn/AccPed/SigAcqnAndFilSys/LoPassFil/Inputs_selection'
 * '<S31>'  : 'APSB_ac/SigMngtAndCnvn/AccPed/SigAcqnAndFilSys/LoPassFil/Low_Pass_Filter_Fcn'
 * '<S32>'  : 'APSB_ac/SigMngtAndCnvn/AccPed/SigAcqnAndFilSys/LoPassFil/Outputs_assignment'
 * '<S33>'  : 'APSB_ac/SigMngtAndCnvn/AccPed1Pwr/ElecToPhyCnvnSys'
 * '<S34>'  : 'APSB_ac/SigMngtAndCnvn/AccPed1Pwr/SigAcqnAndFilSys'
 * '<S35>'  : 'APSB_ac/SigMngtAndCnvn/AccPed1Pwr/ElecToPhyCnvnSys/HtAPSB_U_AccPed1PwrSnsrChartc'
 * '<S36>'  : 'APSB_ac/SigMngtAndCnvn/AccPed1Pwr/ElecToPhyCnvnSys/Override'
 * '<S37>'  : 'APSB_ac/SigMngtAndCnvn/AccPed1Pwr/ElecToPhyCnvnSys/Recovery'
 * '<S38>'  : 'APSB_ac/SigMngtAndCnvn/AccPed1Pwr/ElecToPhyCnvnSys/SWITCH_DOWN'
 * '<S39>'  : 'APSB_ac/SigMngtAndCnvn/AccPed1Pwr/ElecToPhyCnvnSys/Override/KeAPSB_U_AccPed1PwrSnsrByp'
 * '<S40>'  : 'APSB_ac/SigMngtAndCnvn/AccPed1Pwr/ElecToPhyCnvnSys/Override/KeAPSB_b_AccPed1PwrSnsrBypEnbl'
 * '<S41>'  : 'APSB_ac/SigMngtAndCnvn/AccPed1Pwr/ElecToPhyCnvnSys/Recovery/KeAPSB_U_AccPed1PwrSnsrRcvry'
 * '<S42>'  : 'APSB_ac/SigMngtAndCnvn/AccPed1Pwr/ElecToPhyCnvnSys/Recovery/KeAPSB_b_AccPed1PwrSnsrRcvryEnbl'
 * '<S43>'  : 'APSB_ac/SigMngtAndCnvn/AccPed1Pwr/SigAcqnAndFilSys/AntiSpkFil'
 * '<S44>'  : 'APSB_ac/SigMngtAndCnvn/AccPed1Pwr/SigAcqnAndFilSys/KeAPSB_Cnt_AccPed1PwrSnsrSpikeThd'
 * '<S45>'  : 'APSB_ac/SigMngtAndCnvn/AccPed1Pwr/SigAcqnAndFilSys/KeAPSB_U_AccPed1PwrSnsrSpikeThd'
 * '<S46>'  : 'APSB_ac/SigMngtAndCnvn/AccPed1Pwr/SigAcqnAndFilSys/KeAPSB_k_AccPed1PwrSnsrFiltGx'
 * '<S47>'  : 'APSB_ac/SigMngtAndCnvn/AccPed1Pwr/SigAcqnAndFilSys/LoPassFil'
 * '<S48>'  : 'APSB_ac/SigMngtAndCnvn/AccPed1Pwr/SigAcqnAndFilSys/LoPassFil/Inputs_selection'
 * '<S49>'  : 'APSB_ac/SigMngtAndCnvn/AccPed1Pwr/SigAcqnAndFilSys/LoPassFil/Low_Pass_Filter_Fcn'
 * '<S50>'  : 'APSB_ac/SigMngtAndCnvn/AccPed1Pwr/SigAcqnAndFilSys/LoPassFil/Outputs_assignment'
 * '<S51>'  : 'APSB_ac/SigMngtAndCnvn/AccPed2/ElecToPhyCnvnSys'
 * '<S52>'  : 'APSB_ac/SigMngtAndCnvn/AccPed2/SigAcqnAndFilSys'
 * '<S53>'  : 'APSB_ac/SigMngtAndCnvn/AccPed2/ElecToPhyCnvnSys/HtAPSB_U_AccPed2SnsrChartc'
 * '<S54>'  : 'APSB_ac/SigMngtAndCnvn/AccPed2/ElecToPhyCnvnSys/Override'
 * '<S55>'  : 'APSB_ac/SigMngtAndCnvn/AccPed2/ElecToPhyCnvnSys/Recovery'
 * '<S56>'  : 'APSB_ac/SigMngtAndCnvn/AccPed2/ElecToPhyCnvnSys/SWITCH_DOWN'
 * '<S57>'  : 'APSB_ac/SigMngtAndCnvn/AccPed2/ElecToPhyCnvnSys/Override/KeAPSB_U_AccPed2SnsrByp'
 * '<S58>'  : 'APSB_ac/SigMngtAndCnvn/AccPed2/ElecToPhyCnvnSys/Override/KeAPSB_b_AccPed2SnsrBypEnbl'
 * '<S59>'  : 'APSB_ac/SigMngtAndCnvn/AccPed2/ElecToPhyCnvnSys/Recovery/KeAPSB_U_AccPed2SnsrRcvry'
 * '<S60>'  : 'APSB_ac/SigMngtAndCnvn/AccPed2/ElecToPhyCnvnSys/Recovery/KeAPSB_b_AccPed2SnsrRcvryEnbl'
 * '<S61>'  : 'APSB_ac/SigMngtAndCnvn/AccPed2/SigAcqnAndFilSys/AntiSpkFil'
 * '<S62>'  : 'APSB_ac/SigMngtAndCnvn/AccPed2/SigAcqnAndFilSys/KeAPSB_Cnt_AccPed2SnsrSpikeThd'
 * '<S63>'  : 'APSB_ac/SigMngtAndCnvn/AccPed2/SigAcqnAndFilSys/KeAPSB_U_AccPed2SnsrSpikeThd'
 * '<S64>'  : 'APSB_ac/SigMngtAndCnvn/AccPed2/SigAcqnAndFilSys/KeAPSB_k_AccPed2SnsrFiltGx'
 * '<S65>'  : 'APSB_ac/SigMngtAndCnvn/AccPed2/SigAcqnAndFilSys/LoPassFil'
 * '<S66>'  : 'APSB_ac/SigMngtAndCnvn/AccPed2/SigAcqnAndFilSys/LoPassFil/Inputs_selection'
 * '<S67>'  : 'APSB_ac/SigMngtAndCnvn/AccPed2/SigAcqnAndFilSys/LoPassFil/Low_Pass_Filter_Fcn'
 * '<S68>'  : 'APSB_ac/SigMngtAndCnvn/AccPed2/SigAcqnAndFilSys/LoPassFil/Outputs_assignment'
 * '<S69>'  : 'APSB_ac/SigMngtAndCnvn/AccPed2Pwr/ElecToPhyCnvnSys'
 * '<S70>'  : 'APSB_ac/SigMngtAndCnvn/AccPed2Pwr/SigAcqnAndFilSys'
 * '<S71>'  : 'APSB_ac/SigMngtAndCnvn/AccPed2Pwr/ElecToPhyCnvnSys/HtAPSB_U_AccPed1PwrSnsrChartc'
 * '<S72>'  : 'APSB_ac/SigMngtAndCnvn/AccPed2Pwr/ElecToPhyCnvnSys/Override'
 * '<S73>'  : 'APSB_ac/SigMngtAndCnvn/AccPed2Pwr/ElecToPhyCnvnSys/Recovery'
 * '<S74>'  : 'APSB_ac/SigMngtAndCnvn/AccPed2Pwr/ElecToPhyCnvnSys/SWITCH_DOWN'
 * '<S75>'  : 'APSB_ac/SigMngtAndCnvn/AccPed2Pwr/ElecToPhyCnvnSys/Override/KeAPSB_U_AccPed2PwrSnsrByp'
 * '<S76>'  : 'APSB_ac/SigMngtAndCnvn/AccPed2Pwr/ElecToPhyCnvnSys/Override/KeAPSB_b_AccPed2PwrSnsrBypEnbl'
 * '<S77>'  : 'APSB_ac/SigMngtAndCnvn/AccPed2Pwr/ElecToPhyCnvnSys/Recovery/KeAPSB_U_AccPed2PwrSnsrRcvry'
 * '<S78>'  : 'APSB_ac/SigMngtAndCnvn/AccPed2Pwr/ElecToPhyCnvnSys/Recovery/KeAPSB_b_AccPed2PwrSnsrRcvryEnbl'
 * '<S79>'  : 'APSB_ac/SigMngtAndCnvn/AccPed2Pwr/SigAcqnAndFilSys/AntiSpkFil'
 * '<S80>'  : 'APSB_ac/SigMngtAndCnvn/AccPed2Pwr/SigAcqnAndFilSys/KeAPSB_Cnt_AccPed2PwrSnsrSpikeThd'
 * '<S81>'  : 'APSB_ac/SigMngtAndCnvn/AccPed2Pwr/SigAcqnAndFilSys/KeAPSB_U_AccPed2PwrSnsrSpikeThd'
 * '<S82>'  : 'APSB_ac/SigMngtAndCnvn/AccPed2Pwr/SigAcqnAndFilSys/KeAPSB_k_AccPed2PwrSnsrFiltGx'
 * '<S83>'  : 'APSB_ac/SigMngtAndCnvn/AccPed2Pwr/SigAcqnAndFilSys/LoPassFil'
 * '<S84>'  : 'APSB_ac/SigMngtAndCnvn/AccPed2Pwr/SigAcqnAndFilSys/LoPassFil/Inputs_selection'
 * '<S85>'  : 'APSB_ac/SigMngtAndCnvn/AccPed2Pwr/SigAcqnAndFilSys/LoPassFil/Low_Pass_Filter_Fcn'
 * '<S86>'  : 'APSB_ac/SigMngtAndCnvn/AccPed2Pwr/SigAcqnAndFilSys/LoPassFil/Outputs_assignment'
 */
#endif                                 /* RTW_HEADER_APSB_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
