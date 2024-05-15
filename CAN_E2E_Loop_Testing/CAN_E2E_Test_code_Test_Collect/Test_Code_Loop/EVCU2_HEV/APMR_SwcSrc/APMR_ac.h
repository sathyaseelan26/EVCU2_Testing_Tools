/*
 * File: APMR_ac.h
 *
 * Code generated for Simulink model 'APMR_ac'.
 *
 * Model version                  : 9.208
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:05:30 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_APMR_ac_h_
#define RTW_HEADER_APMR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef APMR_ac_COMMON_INCLUDES_
#define APMR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_APMR.h"
#endif                                 /* APMR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_APMR_ac_T
{
    float32 UnitDelay_DSTATE;          /* '<S14>/Unit Delay' */
    float32 UnitDelay_DSTATE_k;        /* '<S77>/Unit Delay' */
    float32 UnitDelay_DSTATE_c;        /* '<S76>/Unit Delay' */
    float32 UnitDelay_DSTATE_kp;       /* '<S75>/Unit Delay' */
    float32 UnitDelay_DSTATE_m;        /* '<S38>/Unit Delay' */
    float32 UnitDelay_DSTATE_h;        /* '<S37>/Unit Delay' */
    boolean UnitDelay_DSTATE_p;        /* '<S96>/Unit Delay' */
    boolean UnitDelay_DSTATE_l;        /* '<S95>/Unit Delay' */
    boolean UnitDelay_DSTATE_g;        /* '<S94>/Unit Delay' */
    boolean UnitDelay_DSTATE_f;        /* '<S93>/Unit Delay' */
    boolean UnitDelay_DSTATE_j;        /* '<S92>/Unit Delay' */
    boolean UnitDelay_DSTATE_hm;       /* '<S81>/Unit Delay' */
    boolean UnitDelay_DSTATE_i;        /* '<S80>/Unit Delay' */
    boolean UnitDelay_DSTATE_o;        /* '<S79>/Unit Delay' */
    boolean UnitDelay_DSTATE_a;        /* '<S78>/Unit Delay' */
    boolean UnitDelay_DSTATE_gz;       /* '<S59>/Unit Delay' */
    boolean UnitDelay_DSTATE_of;       /* '<S58>/Unit Delay' */
    boolean UnitDelay_DSTATE_jr;       /* '<S40>/Unit Delay' */
    boolean UnitDelay_DSTATE_at;       /* '<S39>/Unit Delay' */
    uint8 is_active_c3_APMR_ac;        /* '<S5>/Mode_Request_Managment' */
    uint8 is_c3_APMR_ac;               /* '<S5>/Mode_Request_Managment' */
    uint8 is_Run;                      /* '<S5>/Mode_Request_Managment' */
}
DW_APMR_ac_T;

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_APMR
#include "MemMap.h"

extern VAR(DW_APMR_ac_T, APMR_VAR_INIT) APMR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_APMR
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
 * '<Root>' : 'APMR_ac'
 * '<S1>'   : 'APMR_ac/APMR_MedTEB'
 * '<S2>'   : 'APMR_ac/Initialize Function'
 * '<S3>'   : 'APMR_ac/APMR_MedTEB/APMC'
 * '<S4>'   : 'APMR_ac/APMR_MedTEB/APMI'
 * '<S5>'   : 'APMR_ac/APMR_MedTEB/APMC/APMC'
 * '<S6>'   : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing'
 * '<S7>'   : 'APMR_ac/APMR_MedTEB/APMC/RTC'
 * '<S8>'   : 'APMR_ac/APMR_MedTEB/APMC/APMC/CAN Managment'
 * '<S9>'   : 'APMR_ac/APMR_MedTEB/APMC/APMC/LIN Managment'
 * '<S10>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Mode Managment'
 * '<S11>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Mode_Request_Managment'
 * '<S12>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Output Managment'
 * '<S13>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/SCALAR_BLK'
 * '<S14>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Turn Off Delay Time'
 * '<S15>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/CAN Managment/Constant Value1'
 * '<S16>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/CAN Managment/Constant Value2'
 * '<S17>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/CAN Managment/Constant Value3'
 * '<S18>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/CAN Managment/Constant Value4'
 * '<S19>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/CAN Managment/DEC2BIN_Cnvrt_8Bit'
 * '<S20>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/CAN Managment/SCALAR_BLK'
 * '<S21>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/CAN Managment/SCALAR_BLK1'
 * '<S22>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/CAN Managment/SCALAR_BLK2'
 * '<S23>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/CAN Managment/SCALAR_BLK3'
 * '<S24>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/CAN Managment/DEC2BIN_Cnvrt_8Bit/Compare To Zero'
 * '<S25>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/CAN Managment/DEC2BIN_Cnvrt_8Bit/Compare To Zero1'
 * '<S26>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/CAN Managment/DEC2BIN_Cnvrt_8Bit/Compare To Zero2'
 * '<S27>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/CAN Managment/DEC2BIN_Cnvrt_8Bit/Compare To Zero3'
 * '<S28>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/CAN Managment/DEC2BIN_Cnvrt_8Bit/Compare To Zero4'
 * '<S29>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/CAN Managment/DEC2BIN_Cnvrt_8Bit/Compare To Zero5'
 * '<S30>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/CAN Managment/DEC2BIN_Cnvrt_8Bit/Compare To Zero6'
 * '<S31>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/CAN Managment/DEC2BIN_Cnvrt_8Bit/Compare To Zero7'
 * '<S32>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/LIN Managment/Constant Value1'
 * '<S33>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/LIN Managment/Constant Value4'
 * '<S34>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/LIN Managment/DIAL_BLK'
 * '<S35>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/LIN Managment/SCALAR_BLK'
 * '<S36>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/LIN Managment/SCALAR_BLK1'
 * '<S37>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/LIN Managment/Turn Off Delay Time'
 * '<S38>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/LIN Managment/Turn On Delay Time'
 * '<S39>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/LIN Managment/Turn Off Delay Time/EdgeFalling'
 * '<S40>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/LIN Managment/Turn On Delay Time/EdgeRising'
 * '<S41>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Mode Managment/DIAL_BLK'
 * '<S42>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Mode Managment/Enumerated Constant'
 * '<S43>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Mode Managment/Enumerated Constant1'
 * '<S44>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Mode Managment/Enumerated Constant2'
 * '<S45>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Mode Managment/Enumerated Constant3'
 * '<S46>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Mode Managment/Enumerated Constant4'
 * '<S47>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Mode Managment/Enumerated Constant5'
 * '<S48>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Mode Managment/Enumerated Constant6'
 * '<S49>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Mode Managment/Enumerated Constant7'
 * '<S50>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Mode Managment/Enumerated Constant8'
 * '<S51>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Mode Managment/Enumerated Constant9'
 * '<S52>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Mode Managment/IfThenElseifElse'
 * '<S53>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Mode Managment/IfThenElseifElse1'
 * '<S54>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Output Managment/DIAL_BLK1'
 * '<S55>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Output Managment/DIAL_BLK2'
 * '<S56>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Output Managment/DIAL_BLK24'
 * '<S57>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Output Managment/DIAL_BLK3'
 * '<S58>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Output Managment/EdgeFalling'
 * '<S59>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Output Managment/EdgeRising'
 * '<S60>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Output Managment/Enumerated Constant'
 * '<S61>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Output Managment/Enumerated Constant1'
 * '<S62>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Output Managment/Enumerated Constant2'
 * '<S63>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Output Managment/Enumerated Constant3'
 * '<S64>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Output Managment/Enumerated Constant4'
 * '<S65>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Output Managment/Enumerated Constant5'
 * '<S66>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Output Managment/Enumerated Constant6'
 * '<S67>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Output Managment/Enumerated Constant7'
 * '<S68>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Output Managment/IfThenElseifElse'
 * '<S69>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Output Managment/IfThenElseifElse1'
 * '<S70>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Output Managment/SCALAR_BLK'
 * '<S71>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Output Managment/SCALAR_BLK1'
 * '<S72>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Output Managment/SCALAR_BLK2'
 * '<S73>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Output Managment/SCALAR_BLK3'
 * '<S74>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Output Managment/Signal Latch On With Reset'
 * '<S75>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Output Managment/Turn Off Delay Time'
 * '<S76>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Output Managment/Turn On Delay Time'
 * '<S77>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Output Managment/Turn On Delay Time1'
 * '<S78>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Output Managment/Turn Off Delay Time/EdgeFalling'
 * '<S79>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Output Managment/Turn On Delay Time/EdgeRising'
 * '<S80>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Output Managment/Turn On Delay Time1/EdgeRising'
 * '<S81>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC/Turn Off Delay Time/EdgeFalling'
 * '<S82>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/BitRegister_32'
 * '<S83>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/Constant Value1'
 * '<S84>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/Constant Value10'
 * '<S85>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/Constant Value2'
 * '<S86>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/Constant Value3'
 * '<S87>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/Constant Value4'
 * '<S88>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/Constant Value5'
 * '<S89>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/Constant Value6'
 * '<S90>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/Constant Value7'
 * '<S91>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/Constant Value8'
 * '<S92>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/EdgeFalling'
 * '<S93>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/EdgeRising'
 * '<S94>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/EdgeRising1'
 * '<S95>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/EdgeRising2'
 * '<S96>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/EdgeRising3'
 * '<S97>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/Enumerated Constant'
 * '<S98>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/Enumerated Constant1'
 * '<S99>'  : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/Enumerated Constant10'
 * '<S100>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/Enumerated Constant11'
 * '<S101>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/Enumerated Constant2'
 * '<S102>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/Enumerated Constant3'
 * '<S103>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/Enumerated Constant4'
 * '<S104>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/Enumerated Constant5'
 * '<S105>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/Enumerated Constant6'
 * '<S106>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/Enumerated Constant7'
 * '<S107>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/Enumerated Constant8'
 * '<S108>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/Enumerated Constant9'
 * '<S109>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/SCALAR_BLK1'
 * '<S110>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/SCALAR_BLK2'
 * '<S111>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/SCALAR_BLK3'
 * '<S112>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/Signal Latch On With Reset'
 * '<S113>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/BitRegister_32/Bit Set'
 * '<S114>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/BitRegister_32/Bit Set1'
 * '<S115>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/BitRegister_32/Bit Set10'
 * '<S116>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/BitRegister_32/Bit Set11'
 * '<S117>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/BitRegister_32/Bit Set12'
 * '<S118>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/BitRegister_32/Bit Set13'
 * '<S119>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/BitRegister_32/Bit Set14'
 * '<S120>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/BitRegister_32/Bit Set15'
 * '<S121>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/BitRegister_32/Bit Set16'
 * '<S122>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/BitRegister_32/Bit Set17'
 * '<S123>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/BitRegister_32/Bit Set18'
 * '<S124>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/BitRegister_32/Bit Set19'
 * '<S125>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/BitRegister_32/Bit Set2'
 * '<S126>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/BitRegister_32/Bit Set20'
 * '<S127>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/BitRegister_32/Bit Set21'
 * '<S128>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/BitRegister_32/Bit Set22'
 * '<S129>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/BitRegister_32/Bit Set23'
 * '<S130>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/BitRegister_32/Bit Set24'
 * '<S131>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/BitRegister_32/Bit Set25'
 * '<S132>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/BitRegister_32/Bit Set26'
 * '<S133>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/BitRegister_32/Bit Set27'
 * '<S134>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/BitRegister_32/Bit Set28'
 * '<S135>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/BitRegister_32/Bit Set29'
 * '<S136>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/BitRegister_32/Bit Set3'
 * '<S137>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/BitRegister_32/Bit Set30'
 * '<S138>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/BitRegister_32/Bit Set31'
 * '<S139>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/BitRegister_32/Bit Set4'
 * '<S140>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/BitRegister_32/Bit Set5'
 * '<S141>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/BitRegister_32/Bit Set6'
 * '<S142>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/BitRegister_32/Bit Set7'
 * '<S143>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/BitRegister_32/Bit Set8'
 * '<S144>' : 'APMR_ac/APMR_MedTEB/APMC/APMC_InputProcessing/BitRegister_32/Bit Set9'
 * '<S145>' : 'APMR_ac/APMR_MedTEB/APMC/RTC/Day_of_the_Month'
 * '<S146>' : 'APMR_ac/APMR_MedTEB/APMC/RTC/Days_CurrentYear'
 * '<S147>' : 'APMR_ac/APMR_MedTEB/APMC/RTC/Enumerated Constant4'
 * '<S148>' : 'APMR_ac/APMR_MedTEB/APMC/RTC/SCALAR_BLK'
 * '<S149>' : 'APMR_ac/APMR_MedTEB/APMC/RTC/Set Block'
 * '<S150>' : 'APMR_ac/APMR_MedTEB/APMC/RTC/Set Block1'
 * '<S151>' : 'APMR_ac/APMR_MedTEB/APMC/RTC/Set Block2'
 * '<S152>' : 'APMR_ac/APMR_MedTEB/APMC/RTC/Set Block3'
 * '<S153>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK'
 * '<S154>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK1'
 * '<S155>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK10'
 * '<S156>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK11'
 * '<S157>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK12'
 * '<S158>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK13'
 * '<S159>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK14'
 * '<S160>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK15'
 * '<S161>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK16'
 * '<S162>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK17'
 * '<S163>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK18'
 * '<S164>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK19'
 * '<S165>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK2'
 * '<S166>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK20'
 * '<S167>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK21'
 * '<S168>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK22'
 * '<S169>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK23'
 * '<S170>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK24'
 * '<S171>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK25'
 * '<S172>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK26'
 * '<S173>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK27'
 * '<S174>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK28'
 * '<S175>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK29'
 * '<S176>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK3'
 * '<S177>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK30'
 * '<S178>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK31'
 * '<S179>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK32'
 * '<S180>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK33'
 * '<S181>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK34'
 * '<S182>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK35'
 * '<S183>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK36'
 * '<S184>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK37'
 * '<S185>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK38'
 * '<S186>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK39'
 * '<S187>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK4'
 * '<S188>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK40'
 * '<S189>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK41'
 * '<S190>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK42'
 * '<S191>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK43'
 * '<S192>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK44'
 * '<S193>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK45'
 * '<S194>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK46'
 * '<S195>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK47'
 * '<S196>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK48'
 * '<S197>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK49'
 * '<S198>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK5'
 * '<S199>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK50'
 * '<S200>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK6'
 * '<S201>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK7'
 * '<S202>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK8'
 * '<S203>' : 'APMR_ac/APMR_MedTEB/APMI/DIAL_BLK9'
 * '<S204>' : 'APMR_ac/APMR_MedTEB/APMI/Enum Set Block'
 * '<S205>' : 'APMR_ac/APMR_MedTEB/APMI/Enum Set Block1'
 * '<S206>' : 'APMR_ac/APMR_MedTEB/APMI/Enum Set Block10'
 * '<S207>' : 'APMR_ac/APMR_MedTEB/APMI/Enum Set Block11'
 * '<S208>' : 'APMR_ac/APMR_MedTEB/APMI/Enum Set Block12'
 * '<S209>' : 'APMR_ac/APMR_MedTEB/APMI/Enum Set Block13'
 * '<S210>' : 'APMR_ac/APMR_MedTEB/APMI/Enum Set Block14'
 * '<S211>' : 'APMR_ac/APMR_MedTEB/APMI/Enum Set Block2'
 * '<S212>' : 'APMR_ac/APMR_MedTEB/APMI/Enum Set Block3'
 * '<S213>' : 'APMR_ac/APMR_MedTEB/APMI/Enum Set Block4'
 * '<S214>' : 'APMR_ac/APMR_MedTEB/APMI/Enum Set Block5'
 * '<S215>' : 'APMR_ac/APMR_MedTEB/APMI/Enum Set Block6'
 * '<S216>' : 'APMR_ac/APMR_MedTEB/APMI/Enum Set Block7'
 * '<S217>' : 'APMR_ac/APMR_MedTEB/APMI/Enum Set Block8'
 * '<S218>' : 'APMR_ac/APMR_MedTEB/APMI/Enum Set Block9'
 * '<S219>' : 'APMR_ac/APMR_MedTEB/APMI/KaAPMR_e_PowerModeRaw_Map'
 * '<S220>' : 'APMR_ac/APMR_MedTEB/APMI/SCALAR_BLK'
 * '<S221>' : 'APMR_ac/Initialize Function/Enumerated Constant'
 * '<S222>' : 'APMR_ac/Initialize Function/Enumerated Constant1'
 */
#endif                                 /* RTW_HEADER_APMR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
