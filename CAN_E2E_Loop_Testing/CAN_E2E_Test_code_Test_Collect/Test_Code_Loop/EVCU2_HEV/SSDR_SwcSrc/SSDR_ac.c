/*
 * File: SSDR_ac.c
 *
 * Code generated for Simulink model 'SSDR_ac'.
 *
 * Model version                  : 9.69
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:04:45 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SSDR_ac.h"

/* Named constants for Truth Table: '<S7>/TruthTable1' */
#define SSDR_ac_Eight                  ((uint16)8U)
#define SSDR_ac_Eighteen               ((uint16)18U)
#define SSDR_ac_Eleven                 ((uint16)11U)
#define SSDR_ac_Fifteen                ((uint16)15U)
#define SSDR_ac_Fifty                  ((uint16)50U)
#define SSDR_ac_Fiftyeight             ((uint16)58U)
#define SSDR_ac_Fiftyfive              ((uint16)55U)
#define SSDR_ac_Fiftyfour              ((uint16)54U)
#define SSDR_ac_Fiftynine              ((uint16)59U)
#define SSDR_ac_Fiftyone               ((uint16)51U)
#define SSDR_ac_Fiftyseven             ((uint16)57U)
#define SSDR_ac_Fiftysix               ((uint16)56U)
#define SSDR_ac_Fiftythree             ((uint16)53U)
#define SSDR_ac_Fiftytwo               ((uint16)52U)
#define SSDR_ac_Five                   ((uint16)5U)
#define SSDR_ac_Forty                  ((uint16)40U)
#define SSDR_ac_Fortyeight             ((uint16)48U)
#define SSDR_ac_Fortyfive              ((uint16)45U)
#define SSDR_ac_Fortyfour              ((uint16)44U)
#define SSDR_ac_Fortynine              ((uint16)49U)
#define SSDR_ac_Fortyone               ((uint16)41U)
#define SSDR_ac_Fortyseven             ((uint16)47U)
#define SSDR_ac_Fortysix               ((uint16)46U)
#define SSDR_ac_Fortythree             ((uint16)43U)
#define SSDR_ac_Fortytwo               ((uint16)42U)
#define SSDR_ac_Four                   ((uint16)4U)
#define SSDR_ac_Fourteen               ((uint16)14U)
#define SSDR_ac_Nine                   ((uint16)9U)
#define SSDR_ac_Nineteen               ((uint16)19U)
#define SSDR_ac_One                    ((uint16)1U)
#define SSDR_ac_Seven                  ((uint16)7U)
#define SSDR_ac_Seventeen              ((uint16)17U)
#define SSDR_ac_Seventy                ((uint16)70U)
#define SSDR_ac_Seventyone             ((uint16)71U)
#define SSDR_ac_Seventythree           ((uint16)73U)
#define SSDR_ac_Seventytwo             ((uint16)72U)
#define SSDR_ac_Six                    ((uint16)6U)
#define SSDR_ac_Sixteen                ((uint16)16U)
#define SSDR_ac_Sixty                  ((uint16)60U)
#define SSDR_ac_Sixtyeight             ((uint16)68U)
#define SSDR_ac_Sixtyfive              ((uint16)65U)
#define SSDR_ac_Sixtyfour              ((uint16)64U)
#define SSDR_ac_Sixtynine              ((uint16)69U)
#define SSDR_ac_Sixtyone               ((uint16)61U)
#define SSDR_ac_Sixtyseven             ((uint16)67U)
#define SSDR_ac_Sixtysix               ((uint16)66U)
#define SSDR_ac_Sixtythree             ((uint16)63U)
#define SSDR_ac_Sixtytwo               ((uint16)62U)
#define SSDR_ac_Ten                    ((uint16)10U)
#define SSDR_ac_Thirteen               ((uint16)13U)
#define SSDR_ac_Thirty                 ((uint16)30U)
#define SSDR_ac_Thirtyeight            ((uint16)38U)
#define SSDR_ac_Thirtyfive             ((uint16)35U)
#define SSDR_ac_Thirtyfour             ((uint16)34U)
#define SSDR_ac_Thirtynine             ((uint16)39U)
#define SSDR_ac_Thirtyone              ((uint16)31U)
#define SSDR_ac_Thirtyseven            ((uint16)37U)
#define SSDR_ac_Thirtysix              ((uint16)36U)
#define SSDR_ac_Thirtythree            ((uint16)33U)
#define SSDR_ac_Thirtytwo              ((uint16)32U)
#define SSDR_ac_Three                  ((uint16)3U)
#define SSDR_ac_Twelve                 ((uint16)12U)
#define SSDR_ac_Twenty                 ((uint16)20U)
#define SSDR_ac_Twentyeight            ((uint16)28U)
#define SSDR_ac_Twentyfive             ((uint16)25U)
#define SSDR_ac_Twentyfour             ((uint16)24U)
#define SSDR_ac_Twentynine             ((uint16)29U)
#define SSDR_ac_Twentyone              ((uint16)21U)
#define SSDR_ac_Twentyseven            ((uint16)27U)
#define SSDR_ac_Twentysix              ((uint16)26U)
#define SSDR_ac_Twentythree            ((uint16)23U)
#define SSDR_ac_Twentytwo              ((uint16)22U)
#define SSDR_ac_Two                    ((uint16)2U)

/* Named constants for Truth Table: '<S7>/TruthTable2' */
#define SSDR_ac_TwentyFive             ((uint16)25U)
#define SSDR_ac_TwentyFour             ((uint16)24U)
#define SSDR_ac_TwentyOne              ((uint16)21U)
#define SSDR_ac_TwentyThree            ((uint16)23U)
#define SSDR_ac_TwentyTwo              ((uint16)22U)

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_SSDR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(float32, SSDR_VAR_INIT) HeSSDR_t_dT = 0.005F;/* Referenced by: '<S139>/Calib' */
static volatile CONST(uint16, SSDR_VAR_INIT) KaSSDR_K_EncodedSysSt[1825] =
{
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 128U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 228U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 132U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 132U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 132U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 228U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 452U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 196U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 196U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 228U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 228U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    228U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 228U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 228U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 500U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 244U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 228U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 228U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 128U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 128U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 228U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 228U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 132U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 132U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 228U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 228U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 196U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 196U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 228U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 228U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 228U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 228U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 228U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 228U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 228U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 228U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 228U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 228U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 128U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 128U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 228U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 228U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 132U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 132U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    228U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 228U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    204U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 204U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 236U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 236U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 236U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 236U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 236U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 236U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 236U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 236U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 236U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 236U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 140U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 140U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 236U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    236U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 140U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    140U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 236U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 236U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 204U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 204U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 236U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 236U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 236U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 236U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 236U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 236U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 236U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 236U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 236U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 236U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 388U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 132U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 132U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 132U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 132U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 132U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 132U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 132U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 140U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 140U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 140U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 140U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 140U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 140U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 140U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 140U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
} ;                                    /* Referenced by: '<S13>/Calib' */

static volatile CONST(uint16, SSDR_VAR_INIT) KeSSDR_Cnt_CntrlrPwrHold_Latch =
    35U;                               /* Referenced by: '<S172>/Calib' */
static volatile CONST(uint16, SSDR_VAR_INIT) KeSSDR_Cnt_DrvAllwdDbnc = 4U;/* Referenced by: '<S64>/Calib' */
static volatile CONST(uint16, SSDR_VAR_INIT) KeSSDR_Cnt_DrvAllwdDbncTP = 6400U;/* Referenced by: '<S65>/Calib' */
static volatile CONST(uint16, SSDR_VAR_INIT) KeSSDR_Cnt_DrvAllwdTPChkDbnc = 480U;/* Referenced by: '<S66>/Calib' */
static volatile CONST(uint16, SSDR_VAR_INIT) KeSSDR_K_EncSysStOvrd = 0U;/* Referenced by: '<S14>/Calib' */
static volatile CONST(uint16, SSDR_VAR_INIT) KeSSDR_K_EncodedSysSt_IdxDec1 = 1U;/* Referenced by: '<S30>/Calib' */
static volatile CONST(uint16, SSDR_VAR_INIT) KeSSDR_K_EncodedSysSt_IdxDec2 = 73U;/* Referenced by: '<S31>/Calib' */
static volatile CONST(uint16, SSDR_VAR_INIT) KeSSDR_K_EncodedSysSt_IdxDec3 = 1U;/* Referenced by: '<S32>/Calib' */
static volatile CONST(float32, SSDR_VAR_INIT) KeSSDR_P_BattLTMaxLim = 5.0F;/* Referenced by: '<S407>/Calib' */
static volatile CONST(float32, SSDR_VAR_INIT) KeSSDR_P_DrvAllwHThrshld = 35.0F;/* Referenced by: '<S67>/Calib' */
static volatile CONST(float32, SSDR_VAR_INIT) KeSSDR_P_DrvAllwLThrshld = 25.0F;/* Referenced by: '<S68>/Calib' */
static volatile CONST(float32, SSDR_VAR_INIT) KeSSDR_Pct_BattPackSOC_V2X_LSP =
    13.5F;                             /* Referenced by: '<S132>/Calib' */
static volatile CONST(float32, SSDR_VAR_INIT) KeSSDR_Pct_BattPackSOC_V2X_RSP =
    14.5F;                             /* Referenced by: '<S133>/Calib' */
static volatile CONST(float32, SSDR_VAR_INIT) KeSSDR_Pct_HVBattPackSOC = 50.0F;/* Referenced by: '<S408>/Calib' */
static volatile CONST(float32, SSDR_VAR_INIT) KeSSDR_T_BatModTmp = 0.0F;/* Referenced by: '<S409>/Calib' */
static volatile CONST(float32, SSDR_VAR_INIT) KeSSDR_T_BatModTmpFAOvrd = -30.0F;/* Referenced by: '<S69>/Calib' */
static volatile CONST(float32, SSDR_VAR_INIT) KeSSDR_T_DrvAllwHThrshld = -10.0F;/* Referenced by: '<S70>/Calib' */
static volatile CONST(float32, SSDR_VAR_INIT) KeSSDR_T_DrvAllwLThrshld = -20.0F;/* Referenced by: '<S71>/Calib' */
static volatile CONST(float32, SSDR_VAR_INIT) KeSSDR_T_HVBatHghTempCondThrshld =
    -999.0F;                           /* Referenced by: '<S211>/Calib' */
static volatile CONST(float32, SSDR_VAR_INIT) KeSSDR_T_HVBatLowTempCondThrshld =
    999.0F;                            /* Referenced by: '<S212>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_AfterRunReq = 0;/* Referenced by: '<S410>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_AuxLoadOffReq = 0;/* Referenced by: '<S504>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_BPCM_OVActv = 0;/* Referenced by: '<S411>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_BPCM_UVActv = 0;/* Referenced by: '<S412>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_BSWTimerExp_Select = 1;/* Referenced by: '<S413>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_BSWTimerExpired = 0;/* Referenced by: '<S414>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_BatModTempMaxFA = 0;/* Referenced by: '<S415>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_BatModTempMinFA = 0;/* Referenced by: '<S416>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT)
    KeSSDR_b_BatPerWU_12VChrg_Timer_ExpEnbl = 1;/* Referenced by: '<S191>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT)
    KeSSDR_b_BatPerWU_ThrmlCond_Timer_ExpEnbl = 1;/* Referenced by: '<S192>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_CabPrecDny_BattCond = 0;/* Referenced by: '<S417>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_ChrgNow = 0;/* Referenced by: '<S418>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_ChrgPluggedInOvrd = 0;/* Referenced by: '<S253>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_CntrlrPwrHold = 0;/* Referenced by: '<S419>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_Comfort_Enable_Act = 0;/* Referenced by: '<S420>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_DrvDoorSelect = 0;/* Referenced by: '<S254>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_DrvDoorSts = 0;/* Referenced by: '<S421>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_DrvDrAjarFA = 0;/* Referenced by: '<S422>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_DsblDrvAllwdPwrChck = 0;/* Referenced by: '<S72>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_DsblHVFltStpChrgCheck = 1;/* Referenced by: '<S109>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_DsblPSA_PlgIn_EngOn = 0;/* Referenced by: '<S423>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_DsblPrplsnSys_RemStrtArb =
    0;                                 /* Referenced by: '<S117>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_DsblSwBattPack = 1;/* Referenced by: '<S75>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_DsblTPChck_FC = 0;/* Referenced by: '<S73>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_EnblAccPostRun_Neut = 0;/* Referenced by: '<S102>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_EnblDsblDrvTPChkOvrdMnvr =
    1;                                 /* Referenced by: '<S76>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_EnblInPlant_Neut = 0;/* Referenced by: '<S103>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_EnblKeyCabDnyBattCond = 0;/* Referenced by: '<S224>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_EnblPncShtDwnPSADrop = 1;/* Referenced by: '<S107>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_EnblThrmlHandShake = 0;/* Referenced by: '<S121>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_EnblTransNoSlctAvail = 1;/* Referenced by: '<S77>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_EnblTransRngIllgl = 1;/* Referenced by: '<S78>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_EnblUnintendedShtdwnHV =
    1;                                 /* Referenced by: '<S108>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_EngineOffRequest = 0;/* Referenced by: '<S424>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_FltShtDwnBPClsd = 0;/* Referenced by: '<S427>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_FltShtDwnCmnd = 0;/* Referenced by: '<S428>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_GENRRdy4ShtDwn = 0;/* Referenced by: '<S429>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_HVBatRdy = 0;/* Referenced by: '<S430>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_HVFltStpChrg = 0;/* Referenced by: '<S553>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT)
    KeSSDR_b_HV_PerWU_CabinPre_Timer_ExpEnbl = 1;/* Referenced by: '<S193>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT)
    KeSSDR_b_HV_PerWU_SchChrg_Timer_ExpEnbl = 1;/* Referenced by: '<S194>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_HotEnablerReq = 0;/* Referenced by: '<S431>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_InFieldMode = 0;/* Referenced by: '<S554>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_KeepHotCold_PCC_Enbl = 1;/* Referenced by: '<S339>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_KeyInIgn_NotAvail = 0;/* Referenced by: '<S432>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OBCRRdy4ShtDwn = 0;/* Referenced by: '<S433>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OnboardPP1_Dtctd = 0;/* Referenced by: '<S434>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OnboardPP2_Dtctd = 0;/* Referenced by: '<S435>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrSC_PrecTimer = 0;/* Referenced by: '<S436>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrSchChrg_WUTime = 0;/* Referenced by: '<S437>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrTimeToDeparture = 0;/* Referenced by: '<S438>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdAfterRunReq = 0;/* Referenced by: '<S439>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdAuxLoadOffReq = 0;/* Referenced by: '<S501>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdBPCM_OVActv = 0;/* Referenced by: '<S440>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdBSWTimerExpired = 0;/* Referenced by: '<S441>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdBatModTempMaxFA = 0;/* Referenced by: '<S442>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdBatModTempMinFA = 0;/* Referenced by: '<S443>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdBatModTmp = 0;/* Referenced by: '<S444>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdBattLTMaxLim = 0;/* Referenced by: '<S445>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdBrkPedalDscrtInpt = 0;/* Referenced by: '<S446>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdCabPrecDny_BattCond =
    0;                                 /* Referenced by: '<S447>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdCabinPreCondReqStat =
    0;                                 /* Referenced by: '<S448>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdChrgNow = 0;/* Referenced by: '<S449>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdCntrlrPwrHold = 0;/* Referenced by: '<S450>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdComfort_Enable_Act =
    0;                                 /* Referenced by: '<S451>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdDrvDoorSts = 0;/* Referenced by: '<S452>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdDrvDrAjarFA = 0;/* Referenced by: '<S453>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdDsblPSA_PlgIn_EngOn =
    0;                                 /* Referenced by: '<S454>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdESMTransRngSt = 0;/* Referenced by: '<S455>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdEnblPTSys = 0;/* Referenced by: '<S362>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdEngStartStopSt = 0;/* Referenced by: '<S456>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdEngineOffRequest = 0;/* Referenced by: '<S457>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdFCPS_ActualMode = 0;/* Referenced by: '<S459>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdFCPS_HTCoolReq = 0;/* Referenced by: '<S458>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdFOTAInstallType = 0;/* Referenced by: '<S460>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdFOTASchCnflct = 0;/* Referenced by: '<S461>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdFOTASchCnflctVal = 0;/* Referenced by: '<S462>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdFltShtDwnBPClsd = 0;/* Referenced by: '<S463>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdFltShtDwnCmnd = 0;/* Referenced by: '<S464>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdGENRRdy4ShtDwn = 0;/* Referenced by: '<S465>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdHVBatRdy = 0;/* Referenced by: '<S466>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdHVBattPackSOC = 0;/* Referenced by: '<S467>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdHV_BatCntctrStat = 0;/* Referenced by: '<S468>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdHotEnablerReq = 0;/* Referenced by: '<S469>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdHybSysSt = 0;/* Referenced by: '<S502>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdInFieldMode = 0;/* Referenced by: '<S550>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdInitStatus = 0;/* Referenced by: '<S470>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdInvOprStat = 0;/* Referenced by: '<S471>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdKeepHotColdStatus = 0;/* Referenced by: '<S472>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdKeyInIgn = 0;/* Referenced by: '<S473>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdLSMDExtReleaseLockReq
    = 0;                               /* Referenced by: '<S474>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdOBCRRdy4ShtDwn = 0;/* Referenced by: '<S475>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdPerWU = 0;/* Referenced by: '<S476>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdPerWup12VChg = 0;/* Referenced by: '<S477>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdPerWupThrml = 0;/* Referenced by: '<S478>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdPlgInStat = 0;/* Referenced by: '<S479>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdPluggedIn = 0;/* Referenced by: '<S480>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdPrepareToShtdwn = 0;/* Referenced by: '<S481>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdPropSysActv = 0;/* Referenced by: '<S482>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdPwrMd = 0;/* Referenced by: '<S483>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdRmtStrt = 0;/* Referenced by: '<S484>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdRmtVehStartReqFA = 0;/* Referenced by: '<S485>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdSecureConEst = 0;/* Referenced by: '<S486>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdStpCharging = 0;/* Referenced by: '<S487>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdTHMRRdy4ShtDwn = 0;/* Referenced by: '<S488>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdThrmlShtdwnReqHonrd =
    0;                                 /* Referenced by: '<S489>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdTimerPerWup12VChrg =
    0;                                 /* Referenced by: '<S490>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdTimerPerWupThrml = 0;/* Referenced by: '<S491>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdUnintendedShtdwn = 0;/* Referenced by: '<S492>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdV2GOprStat = 0;/* Referenced by: '<S493>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdValidPluginDetected =
    0;                                 /* Referenced by: '<S494>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_OvrdVldtdTransRngSt = 0;/* Referenced by: '<S495>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_Ovrd_BPCM_UVActv = 0;/* Referenced by: '<S496>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_Ovrd_HVFltStpChrg = 0;/* Referenced by: '<S549>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_Ovrd_OnboardPP1_Dtctd = 0;/* Referenced by: '<S497>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_Ovrd_OnboardPP2_Dtctd = 0;/* Referenced by: '<S498>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT)
    KeSSDR_b_Ovrd_Rdy4ShtDwn_OnboardPP1 = 0;/* Referenced by: '<S547>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT)
    KeSSDR_b_Ovrd_Rdy4ShtDwn_OnboardPP2 = 0;/* Referenced by: '<S548>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_Ovrd_Rdy4Shtdwn_VDVR = 0;/* Referenced by: '<S500>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_Ovrd_Rdy4Shtdwn_VTLR = 0;/* Referenced by: '<S499>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_Ovrd_Sch_Submit = 0;/* Referenced by: '<S505>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_Ovrd_SecureConnV2L = 0;/* Referenced by: '<S506>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_Ovrd_SecuredtoShtdwn = 0;/* Referenced by: '<S507>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_PerWup12VChg = 0;/* Referenced by: '<S508>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_PerWupHVBattChrg = 0;/* Referenced by: '<S509>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_PerWupThrml = 0;/* Referenced by: '<S510>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_PluggedIn = 0;/* Referenced by: '<S511>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_PrepareToShtdwn = 0;/* Referenced by: '<S512>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_PropSysActv = 0;/* Referenced by: '<S513>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_Rdy4ShtDwn_OnboardPP1 = 0;/* Referenced by: '<S551>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_Rdy4ShtDwn_OnboardPP2 = 0;/* Referenced by: '<S552>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_Rdy4Shtdwn_VDVR = 0;/* Referenced by: '<S515>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_Rdy4Shtdwn_VTLR = 0;/* Referenced by: '<S514>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_RmtStartActv = 0;/* Referenced by: '<S516>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_RmtVehStartReqFA = 0;/* Referenced by: '<S517>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_Sch_Submit = 0;/* Referenced by: '<S518>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_SecureConEst = 0;/* Referenced by: '<S519>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_SecureConnV2L = 0;/* Referenced by: '<S520>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_Secured_to_shtdwn = 0;/* Referenced by: '<S521>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_StpCharging = 0;/* Referenced by: '<S522>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_THMRRdy4ShtDwn = 0;/* Referenced by: '<S523>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_ThrmlShtdwnReqHonrd = 0;/* Referenced by: '<S524>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_UnintendedShtdwnOcc = 0;/* Referenced by: '<S525>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_UseBPFltShtDwn = 1;/* Referenced by: '<S110>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_UseCalForEncSysSt = 0;/* Referenced by: '<S15>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_UseFltShtDwn = 1;/* Referenced by: '<S111>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_ValidPluginDetected = 0;/* Referenced by: '<S526>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_ZeroAsMinTimer_12VChrg =
    0;                                 /* Referenced by: '<S195>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_ZeroAsMinTimer_DepSched =
    0;                                 /* Referenced by: '<S196>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_ZeroAsMinTimer_SchedChrg =
    0;                                 /* Referenced by: '<S197>/Calib' */
static volatile CONST(boolean, SSDR_VAR_INIT) KeSSDR_b_ZeroAsMinTimer_ThrmlCond =
    0;                                 /* Referenced by: '<S198>/Calib' */
static volatile CONST(TeBRKR_e_BrkPdl_Stat, SSDR_VAR_INIT)
    KeSSDR_e_BrkPedalDscrtInpt = CeBRKR_e_BrkApplied;/* Referenced by: '<S527>/Calib' */
static volatile CONST(TeTPCR_e_CabinPreCondReqStat, SSDR_VAR_INIT)
    KeSSDR_e_CabinPreCondReqStat = CeTPCR_e_CabinPrec_Dflt;/* Referenced by: '<S528>/Calib' */
static volatile CONST(TeTRGR_e_TransRangeState, SSDR_VAR_INIT)
    KeSSDR_e_ESMTransRngSt = CeTRGR_e_TransRangePark;/* Referenced by: '<S529>/Calib' */
static volatile CONST(TeESSR_e_EngStartStopSt, SSDR_VAR_INIT)
    KeSSDR_e_EngStartStopSt = CeESSR_e_EngOff;/* Referenced by: '<S530>/Calib' */
static volatile CONST(TeFCPR_e_ActualMode, SSDR_VAR_INIT)
    KeSSDR_e_FCPS_ActualMode = CeFCPR_e_ActualMode_Off;/* Referenced by: '<S426>/Calib' */
static volatile CONST(TeFCPR_e_FCPS_HTCoolReq, SSDR_VAR_INIT)
    KeSSDR_e_FCPS_HTCoolReq = CeFCPR_e_No_Request;/* Referenced by: '<S425>/Calib' */
static volatile CONST(TeCITR_e_FOTA_Install_Type, SSDR_VAR_INIT)
    KeSSDR_e_FOTAInstallTypeVal = CeCITR_e_NoFOTA;/* Referenced by: '<S531>/Calib' */
static volatile CONST(TeHVTR_e_HV_BatCntctrStat, SSDR_VAR_INIT)
    KeSSDR_e_HV_BatCntctrStat = CeHVTR_e_Closed;/* Referenced by: '<S532>/Calib' */
static volatile CONST(TeHPMR_e_HybSysState, SSDR_VAR_INIT) KeSSDR_e_HybSysSt =
    CeHPMR_e_POWERUP;                  /* Referenced by: '<S503>/Calib' */
static volatile CONST(TeSCPR_e_InitStatus, SSDR_VAR_INIT) KeSSDR_e_InitStatus =
    CeSCPR_e_InitDefault;              /* Referenced by: '<S533>/Calib' */
static volatile CONST(TeTPCR_e_KeepHotColdStatus, SSDR_VAR_INIT)
    KeSSDR_e_KeepHotColdStatus = CeTPCR_e_NotActive;/* Referenced by: '<S534>/Calib' */
static volatile CONST(TePMDR_e_KeyInIgn, SSDR_VAR_INIT) KeSSDR_e_KeyInIgn =
    CePMDR_e_KeyInIgn_DEFAULT;         /* Referenced by: '<S535>/Calib' */
static volatile CONST(TePLTR_e_LSMDExtReleaseLockReq, SSDR_VAR_INIT)
    KeSSDR_e_LSMDExtReleaseLockReq = CePLTR_e_NotActive;/* Referenced by: '<S536>/Calib' */
static volatile CONST(TePLTR_e_InvOprStat, SSDR_VAR_INIT)
    KeSSDR_e_OvrdInvOprStat = CePLTR_e_NoPlgIn_Tools;/* Referenced by: '<S537>/Calib' */
static volatile CONST(TeOBCR_e_ChargingLevel, SSDR_VAR_INIT) KeSSDR_e_PlgInStat =
    CeOBCR_e_ChargingLvlDefault;       /* Referenced by: '<S538>/Calib' */
static volatile CONST(TePMDR_e_PowerMode, SSDR_VAR_INIT) KeSSDR_e_PwrMd =
    CePMDR_e_PowerMode_Off;            /* Referenced by: '<S539>/Calib' */
static volatile CONST(TePLTR_e_V2GOprStat, SSDR_VAR_INIT) KeSSDR_e_V2GOprStat =
    CePLTR_e_NoPlgIn;                  /* Referenced by: '<S540>/Calib' */
static volatile CONST(TeTRGR_e_TransRangeState, SSDR_VAR_INIT)
    KeSSDR_e_VldtdTransRngSt = CeTRGR_e_TransRangeNeutral;/* Referenced by: '<S541>/Calib' */
static volatile CONST(float32, SSDR_VAR_INIT) KeSSDR_t_AfterRunShtDnTmr = 120.0F;/* Referenced by: '<S94>/Calib' */
static volatile CONST(float32, SSDR_VAR_INIT) KeSSDR_t_DDROpnDbncForHV = 0.4F;/* Referenced by: '<S255>/Calib' */
static volatile CONST(float32, SSDR_VAR_INIT) KeSSDR_t_DDROpnSysWupTmr = 120.0F;/* Referenced by: '<S256>/Calib' */
static volatile CONST(float32, SSDR_VAR_INIT) KeSSDR_t_DbncThermalClrToShtdwn =
    0.2F;                              /* Referenced by: '<S122>/Calib' */
static volatile CONST(float32, SSDR_VAR_INIT) KeSSDR_t_DelayForcetoPark = 0.0F;/* Referenced by: '<S74>/Calib' */
static volatile CONST(float32, SSDR_VAR_INIT) KeSSDR_t_FOTASchCfltDly = 3.0F;/* Referenced by: '<S153>/Calib' */
static volatile CONST(float32, SSDR_VAR_INIT) KeSSDR_t_HVBattNotRdyTimeOut =
    7200.0F;                           /* Referenced by: '<S112>/Calib' */
static volatile CONST(sint16, SSDR_VAR_INIT) KeSSDR_t_SC_PrecTimer = 0;/* Referenced by: '<S542>/Calib' */
static volatile CONST(sint16, SSDR_VAR_INIT) KeSSDR_t_SC_PrecTimer_HighThrshld =
    45;                                /* Referenced by: '<S199>/Calib' */
static volatile CONST(sint16, SSDR_VAR_INIT) KeSSDR_t_SC_PrecTimer_LowThrshld =
    0;                                 /* Referenced by: '<S200>/Calib' */
static volatile CONST(sint16, SSDR_VAR_INIT) KeSSDR_t_SchChrg_WUTime = 0;/* Referenced by: '<S543>/Calib' */
static volatile CONST(float32, SSDR_VAR_INIT) KeSSDR_t_SubSysEnblTimer = 3.0F;/* Referenced by: '<S363>/Calib' */
static volatile CONST(float32, SSDR_VAR_INIT) KeSSDR_t_ThrmlShtDnDbnc = 0.05F;/* Referenced by: '<S118>/Calib' */
static volatile CONST(float32, SSDR_VAR_INIT) KeSSDR_t_TimeDelayWUToEnblTChck =
    0.7F;                              /* Referenced by: '<S213>/Calib' */
static volatile CONST(sint16, SSDR_VAR_INIT) KeSSDR_t_TimeToDeparture = 0;/* Referenced by: '<S544>/Calib' */
static volatile CONST(float32, SSDR_VAR_INIT) KeSSDR_t_TimerPerWup12VChrg = 0.0F;/* Referenced by: '<S545>/Calib' */
static volatile CONST(float32, SSDR_VAR_INIT) KeSSDR_t_TimerPerWupThrml = 0.0F;/* Referenced by: '<S546>/Calib' */
static volatile CONST(float32, SSDR_VAR_INIT) KeSSDR_t_TmotDsblThrmlFdbk =
    120.0F;                            /* Referenced by: '<S123>/Calib' */
static volatile CONST(float32, SSDR_VAR_INIT) KeSSDR_t_V2XShtdwn_delay = 1.0F;/* Referenced by: '<S134>/Calib' */

#define STOP_SEC_CALIB_UNSPECIFIED_SSDR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_SSDR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(float32, SSDR_VAR_INIT) VeSSDC_T_BatModTmpFAArb;/* '<S33>/Switch3' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDC_b_BSWTmrExpLtchCond;/* '<S210>/AND' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDC_b_BatPerWU_12VChrg_Timer_Exp;/* '<S168>/Logical18' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDC_b_BatPerWU_ThrmlCond_Timer_Exp;/* '<S168>/Logical17' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDC_b_BattCondTempCheck;/* '<S218>/OR1' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDC_b_BattCondTempCheckArb;/* '<S169>/Switch' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDC_b_BattCondTempCheckEnbl;/* '<S169>/Logical1' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDC_b_BattCondTempCheckOut;/* '<S169>/Logical2' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDC_b_CntrlrPwrHoldCntdwn;/* '<S170>/Greater  Than1' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDC_b_DrvAllwdArb;/* '<S41>/AND' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDC_b_DrvAllwdArbTpChck;/* '<S33>/Logical16' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDC_b_DrvAllwdIn;/* '<S33>/Logical9' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDC_b_DrvAllwdLtchd;/* '<S80>/OR1' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDC_b_DrvAllwdPrev;/* '<S33>/Unit Delay1' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDC_b_DrvAllwdTPChck_Arb;/* '<S33>/Switch' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDC_b_DrvAllwd_PN_PwrLmt;/* '<S33>/Switch2' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDC_b_DrvTPChkOvrd;/* '<S84>/AND' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDC_b_DsblHVBattChrg;/* '<S36>/Logical4' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDC_b_DsblHVBattDischrg;/* '<S36>/Logical3' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDC_b_EnblDrvAllwdTPChk;/* '<S33>/Logical1' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDC_b_EnblHVBattChrg;/* '<S42>/AND' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDC_b_EnblHVSysArb;/* '<S25>/Compare' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDC_b_EnblHVSysOut;/* '<S34>/Logical1' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDC_b_EnblPrplsnSysArb;/* '<S40>/AND' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDC_b_EnblTable;/* '<S364>/AND' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDC_b_EnblThrmlSysArb;/* '<S43>/AND' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDC_b_EnblV2GOpr;/* '<S45>/AND' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDC_b_EngineOffRequest;/* '<S36>/Logical14' */
static VAR(TeSSDR_e_InvOprStat, SSDR_VAR_INIT) VeSSDC_e_InvOprStat;/* '<S289>/Switch1' */
static VAR(float32, SSDR_VAR_INIT) VeSSDI_P_BattLTMaxLim;/* '<S5>/Switch51' */
static VAR(float32, SSDR_VAR_INIT) VeSSDI_Pct_HV_BatPackSOC;/* '<S5>/Switch66' */
static VAR(float32, SSDR_VAR_INIT) VeSSDI_T_BatModTmp;/* '<S5>/Switch35' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_AnyUserIPOnOff;/* '<S142>/Logical15' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_BPCM_OVActv;/* '<S5>/Switch18' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_BPCM_UVActv;/* '<S5>/Switch19' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_BSWTimerExpired;/* '<S5>/Switch37' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_BSWTimerExpired_LatchedOn;/* '<S219>/OR1' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_CabPrecDny_BattCond;/* '<S5>/Switch38' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_ChargeNow;/* '<S5>/Switch60' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_CntrlrPwrHold;/* '<S5>/Switch21' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_CntrlrPwrHold_Latch;/* '<S173>/OR1' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_Comfort_Enable_Act;/* '<S5>/Switch3' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_Comfort_EnblAct_FA;/* '<S5>/VeTRIR_b_Comfort_EnblAct_FA' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_DrvDoorSts;/* '<S5>/Switch8' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_DrvDrAjarFA;/* '<S5>/Switch45' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_DsblPSA_PlgIn_EngOn;/* '<S5>/Switch22' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_EngineOffRequest;/* '<S5>/Switch2' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_FOTASchCnflct;/* '<S5>/Switch50' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_FltShtDwnBPClsdCmnd;/* '<S5>/Switch11' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_FltShtDwnCmnd;/* '<S5>/Switch12' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_GENRRdy4ShtDwn;/* '<S5>/Switch16' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_HCP_LTP_FanAftRun_Rq;/* '<S5>/Switch53' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_HVBatPerWU12VChrg;/* '<S5>/Switch28' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_HVBatPerWUThermal;/* '<S5>/Switch29' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_HVBatPerWakeUp;/* '<S5>/Switch13' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_HVBatRdy;/* '<S5>/Switch17' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_HVFltStpChrg;/* '<S5>/Switch71' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_HV_AuxLoadOffReq;/* '<S5>/Switch74' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_HV_BatModTempMaxFA;/* '<S5>/Switch55' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_HV_BatModTempMinFA;/* '<S5>/Switch56' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_HotEnablerReq;/* '<S5>/Switch44' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_InFieldMode;/* '<S5>/Switch72' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_InvOnOff;/* '<S262>/OR1' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_NoUserInputOnlyDoor;/* '<S142>/Logical16' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_OBCRRdy4ShtDwn;/* '<S5>/Switch9' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_OnboardPP1_Dtctd;/* '<S5>/Switch67' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_OnboardPP2_Dtctd;/* '<S5>/Switch68' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_PlgInOffOut;/* '<S142>/Switch1' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_PluggedIn;/* '<S5>/Switch26' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_PrepareToShtdwn;/* '<S5>/Switch49' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_PropSysActv;/* '<S5>/Switch54' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_PwrMdOnOff;/* '<S259>/OR1' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_Rdy4ShtDwn_OnboardPP1;/* '<S5>/Switch69' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_Rdy4ShtDwn_OnboardPP2;/* '<S5>/Switch70' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_Rdy4ShtDwn_VDVR;/* '<S5>/Switch73' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_Rdy4ShtDwn_VTLR;/* '<S5>/Switch63' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_RmtStartActv;/* '<S5>/Switch5' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_RmtStrtOnOff;/* '<S261>/OR1' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_RmtVehStartReqFA;/* '<S5>/Switch46' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_Sch_Submit;/* '<S5>/Switch61' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_SecureConEst;/* '<S5>/Switch23' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_SecureConnV2L;/* '<S5>/Switch64' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_Secured_To_Shtdwn;/* '<S5>/Switch62' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_StpCharging;/* '<S5>/Switch25' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_THMRRdy4ShtDwn;/* '<S5>/Switch10' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_ThrmlShtdwnReqHonrd;/* '<S5>/Switch48' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_UnintendedShtdwnOcc;/* '<S5>/Switch14' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_V2GOnOff;/* '<S263>/OR1' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDI_b_ValidPluginDetected;/* '<S5>/Switch39' */
static VAR(TeBRKR_e_BrkPdl_Stat, SSDR_VAR_INIT) VeSSDI_e_BrkPedalDscrtInpt;/* '<S5>/Switch20' */
static VAR(TeTPCR_e_CabinPreCondReqStat, SSDR_VAR_INIT)
    VeSSDI_e_CabinPreCondReqStat;      /* '<S5>/Switch24' */
static VAR(TeOBCR_e_ChargingLevel, SSDR_VAR_INIT) VeSSDI_e_ChargingLevel;/* '<S5>/Switch1' */
static VAR(TeTRGR_e_TransRangeState, SSDR_VAR_INIT) VeSSDI_e_ESMTransRngSt;/* '<S5>/Switch27' */
static VAR(TeESSR_e_EngStartStopSt, SSDR_VAR_INIT) VeSSDI_e_EngStartStopSt;/* '<S5>/Switch65' */
static VAR(TeFCPR_e_ActualMode, SSDR_VAR_INIT) VeSSDI_e_FCPS_ActualMode;/* '<S5>/Switch58' */
static VAR(TeFCPR_e_FCPS_HTCoolReq, SSDR_VAR_INIT) VeSSDI_e_FCPS_HTCoolReq;/* '<S5>/Switch57' */
static VAR(TeCITR_e_FOTA_Install_Type, SSDR_VAR_INIT) VeSSDI_e_FOTA_Install_Type;/* '<S5>/Switch43' */
static VAR(TeHVTR_e_HV_BatCntctrStat, SSDR_VAR_INIT) VeSSDI_e_HV_BatCntctrStat;/* '<S5>/Switch59' */
static VAR(TeHPMR_e_HybSysState, SSDR_VAR_INIT) VeSSDI_e_HybSysSt;/* '<S5>/Switch75' */
static VAR(TeSCPR_e_InitStatus, SSDR_VAR_INIT) VeSSDI_e_InitStatus;/* '<S5>/Switch47' */
static VAR(TePLTR_e_InvOprStat, SSDR_VAR_INIT) VeSSDI_e_InvOprStat;/* '<S5>/Switch6' */
static VAR(TeTPCR_e_KeepHotColdStatus, SSDR_VAR_INIT) VeSSDI_e_KeepHotColdSts;/* '<S5>/Switch15' */
static VAR(TePMDR_e_KeyInIgn, SSDR_VAR_INIT) VeSSDI_e_KeyInIgn;/* '<S5>/Switch4' */
static VAR(TePMDR_e_KeyInIgn, SSDR_VAR_INIT) VeSSDI_e_KeyInIgnArb;/* '<S5>/Switch40' */
static VAR(TePLTR_e_LSMDExtReleaseLockReq, SSDR_VAR_INIT)
    VeSSDI_e_LSMDExtReleaseLockReq;    /* '<S5>/Switch42' */
static VAR(TePMDR_e_PowerMode, SSDR_VAR_INIT) VeSSDI_e_PMM_PowerMode;/* '<S5>/Switch' */
static VAR(TePLTR_e_V2GOprStat, SSDR_VAR_INIT) VeSSDI_e_V2GOprStat;/* '<S5>/Switch7' */
static VAR(TeTRGR_e_TransRangeState, SSDR_VAR_INIT) VeSSDI_e_VldtdTransRngSt;/* '<S5>/Switch52' */
static VAR(float32, SSDR_VAR_INIT) VeSSDI_t_BatPerWU_ThrmlCond_Timer;/* '<S5>/Switch30' */
static VAR(float32, SSDR_VAR_INIT) VeSSDI_t_BattPerWU_12VChrg_Timer;/* '<S5>/Switch31' */
static VAR(sint16, SSDR_VAR_INIT) VeSSDI_t_SC_PrecTimer;/* '<S5>/Switch36' */
static VAR(sint16, SSDR_VAR_INIT) VeSSDI_t_SchChrg_WUTime;/* '<S5>/Switch33' */
static VAR(sint16, SSDR_VAR_INIT) VeSSDI_t_TimeToDeparture;/* '<S5>/Switch34' */
static VAR(uint32, SSDR_VAR_INIT) VeSSDR_K_EncSysStActual_Idx;/* '<S18>/Sum2' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDR_b_InvRstCond;/* '<S144>/Logical4' */
static VAR(boolean, SSDR_VAR_INIT) VeSSDR_b_RstInvOpr;/* '<S292>/OR1' */
static VAR(TeSSDR_e_InvOprStat, SSDR_VAR_INIT) VeSSDR_e_InvOprStat;/* '<S291>/Switch1' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_SSDR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_SSDR
#include "MemMap.h"

CONST(ConstB_SSDR_ac_T, SSDR_VAR_INIT) SSDR_ac_ConstB =
{
    CeSSDR_e_KeyOff                    /* '<S557>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_SSDR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_SSDR
#include "MemMap.h"

VAR(B_SSDR_ac_T, SSDR_VAR_INIT) SSDR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_SSDR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_SSDR
#include "MemMap.h"

VAR(DW_SSDR_ac_T, SSDR_VAR_INIT) SSDR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_SSDR
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, SSDR_CODE) SSDR_FastTEF(void) /* Explicit Task: FastTEF */
{
    sint32 exitg1;
    sint32 i_0;
    float32 rtb_Switch1_ol;
    float32 tmp;
    uint32 rtb_Product;
    uint32 rtb_Product1;
    uint32 rtb_Product2;
    uint32 rtb_Product4;
    sint16 rtb_Sum1_m;
    uint16 rtb_TimerArraySorted[4];
    uint16 rtb_Switch_d;
    uint16 rtb_Switch_l1;
    uint16 rtb_Switch_o5;
    uint16 rtb_VeSSDR_K_EncSysState;
    uint16 rtb_VeSSDR_K_Index_T1;
    uint16 rtb_VeSSDR_K_Index_T2;
    TeSSDR_e_HVBattChrgStat rtb_Switch1_e;
    TeSSDR_e_KeySts Switch1_h;
    TeSSDR_e_V2GOprStat rtb_Switch1_pa;
    uint8 rtb_ArrayIndicesSorted[4];
    uint8 rtb_ContempFlag[4];
    uint8 TemporaryTrack;
    uint8 i;
    uint8 j;
    boolean aVarTruthTableCondition_1;
    boolean aVarTruthTableCondition_10;
    boolean aVarTruthTableCondition_2;
    boolean aVarTruthTableCondition_3;
    boolean aVarTruthTableCondition_4;
    boolean aVarTruthTableCondition_5;
    boolean aVarTruthTableCondition_7;
    boolean aVarTruthTableCondition_8;
    boolean aVarTruthTableCondition_9;
    boolean rtb_AND_c;
    boolean rtb_AND_df;
    boolean rtb_AND_fw;
    boolean rtb_AND_fx;
    boolean rtb_AND_la;
    boolean rtb_AND_pa;
    boolean rtb_AND_py;
    boolean rtb_Logical1_p;
    boolean rtb_Logical3_nz;
    boolean rtb_Logical5_p;
    boolean rtb_Logical9_j;
    boolean rtb_Merge3;
    boolean rtb_Merge4;
    boolean rtb_OR1_dn;
    boolean rtb_OR1_fw;
    boolean rtb_UnitDelay3_e;
    boolean rtb_UnitDelay3_n;
    boolean rtb_UnitDelay3_o;
    boolean rtb_UnitDelay_gw;
    boolean rtb_UnitDelay_m;
    boolean rtb_UnitDelay_nn;
    boolean rtb_VeSSDC_b_ShtDwnPrplsnFlg;
    boolean tmpRead;
    boolean tmp_0;
    boolean tmp_1;
    boolean tmp_2;
    boolean tmp_3;
    boolean tmp_4;
    boolean tmp_5;
    boolean tmp_6;
    boolean tmp_7;
    boolean tmp_8;

    /* Inport: '<Root>/VePMDR_e_KeyInIgn' */
    (void)Rte_Read_VePMDR_e_KeyInIgn_Value((&(VeSSDI_e_KeyInIgn)));

    /* Inport: '<Root>/VePLTR_b_RmtVehStartReq' */
    (void)Rte_Read_VePLTR_b_RmtVehStartReq_Value((&(VeSSDI_b_RmtStartActv)));

    /* Inport: '<Root>/VeOBCR_e_ChargingLevel' */
    (void)Rte_Read_VeOBCR_e_ChargingLevel_Value((&(VeSSDI_e_ChargingLevel)));

    /* Inport: '<Root>/VePMDR_e_PMM_PowerMode' */
    (void)Rte_Read_VePMDR_e_PMM_PowerMode_Value((&(VeSSDI_e_PMM_PowerMode)));

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SSDR_FastTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SSDI'
     */
    /* Switch: '<S5>/Switch' incorporates:
     *  Constant: '<S483>/Calib'
     */
    if (KeSSDR_b_OvrdPwrMd)
    {
        /* Switch: '<S5>/Switch' incorporates:
         *  Constant: '<S539>/Calib'
         *  Inport: '<Root>/VePMDR_e_PMM_PowerMode'
         */
        VeSSDI_e_PMM_PowerMode = KeSSDR_e_PwrMd;
    }

    /* End of Switch: '<S5>/Switch' */

    /* Switch: '<S5>/Switch1' incorporates:
     *  Constant: '<S479>/Calib'
     */
    if (KeSSDR_b_OvrdPlgInStat)
    {
        /* Switch: '<S5>/Switch1' incorporates:
         *  Constant: '<S538>/Calib'
         *  Inport: '<Root>/VeOBCR_e_ChargingLevel'
         */
        VeSSDI_e_ChargingLevel = KeSSDR_e_PlgInStat;
    }

    /* End of Switch: '<S5>/Switch1' */

    /* Switch: '<S5>/Switch4' incorporates:
     *  Constant: '<S473>/Calib'
     */
    if (KeSSDR_b_OvrdKeyInIgn)
    {
        /* Switch: '<S5>/Switch4' incorporates:
         *  Constant: '<S535>/Calib'
         *  Inport: '<Root>/VePMDR_e_KeyInIgn'
         */
        VeSSDI_e_KeyInIgn = KeSSDR_e_KeyInIgn;
    }

    /* End of Switch: '<S5>/Switch4' */

    /* Switch: '<S5>/Switch5' incorporates:
     *  Constant: '<S516>/Calib'
     */
    if (KeSSDR_b_RmtStartActv)
    {
        /* Switch: '<S5>/Switch5' incorporates:
         *  Constant: '<S484>/Calib'
         *  Inport: '<Root>/VePLTR_b_RmtVehStartReq'
         */
        VeSSDI_b_RmtStartActv = KeSSDR_b_OvrdRmtStrt;
    }

    /* End of Switch: '<S5>/Switch5' */

    /* Switch: '<S5>/Switch40' incorporates:
     *  Constant: '<S432>/Calib'
     */
    if (KeSSDR_b_KeyInIgn_NotAvail)
    {
        /* Switch: '<S5>/Switch41' */
        if (VeSSDI_b_RmtStartActv)
        {
            /* Switch: '<S5>/Switch40' incorporates:
             *  Constant: '<S405>/Constant'
             */
            VeSSDI_e_KeyInIgnArb = CePMDR_e_KeyInIgn_Not_In_Ign;
        }
        else
        {
            /* Switch: '<S5>/Switch40' incorporates:
             *  Constant: '<S406>/Constant'
             */
            VeSSDI_e_KeyInIgnArb = CePMDR_e_KeyInIgn_In_Ign;
        }

        /* End of Switch: '<S5>/Switch41' */
    }
    else
    {
        /* Switch: '<S5>/Switch40' incorporates:
         *  Switch: '<S5>/Switch4'
         */
        VeSSDI_e_KeyInIgnArb = VeSSDI_e_KeyInIgn;
    }

    /* End of Switch: '<S5>/Switch40' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeBPCR_T_BatModTmp' */
    (void)Rte_Read_VeBPCR_T_BatModTmp_Value((&(VeSSDI_T_BatModTmp)));

    /* Inport: '<Root>/VeTHMR_t_SC_PrecTimer' */
    (void)Rte_Read_VeTHMR_t_SC_PrecTimer_Value((&(VeSSDI_t_SC_PrecTimer)));

    /* Inport: '<Root>/VeSCPR_t_TimeToDeparture' */
    (void)Rte_Read_VeSCPR_t_TimeToDeparture_Value((&(VeSSDI_t_TimeToDeparture)));

    /* Inport: '<Root>/VeSCPR_t_SchChrg_WUTime' */
    (void)Rte_Read_VeSCPR_t_SchChrg_WUTime_Value((&(VeSSDI_t_SchChrg_WUTime)));

    /* Inport: '<Root>/VeGENR_t_BattPerWU_12VChg_Timer' */
    (void)Rte_Read_VeGENR_t_BattPerWU_12VChg_Timer_Value
        ((&(VeSSDI_t_BattPerWU_12VChrg_Timer)));

    /* Inport: '<Root>/VeTHMR_t_BatPerWU_ThrmlCond_Timer' */
    (void)Rte_Read_VeTHMR_t_BatPerWU_ThrmlCond_Timer_Value
        ((&(VeSSDI_t_BatPerWU_ThrmlCond_Timer)));

    /* Inport: '<Root>/VeOBCR_b_PluggedIn' */
    (void)Rte_Read_VeOBCR_b_PluggedIn_Value((&(VeSSDI_b_PluggedIn)));

    /* Inport: '<Root>/VeTHMR_b_HCP_LTP_FanAftRun_Rq' */
    (void)Rte_Read_VeTHMR_b_HCP_LTP_FanAftRun_Rq_Value
        ((&(VeSSDI_b_HCP_LTP_FanAftRun_Rq)));

    /* Inport: '<Root>/VeSRAR_b_StpCharging' */
    (void)Rte_Read_VeSRAR_b_StpCharging_Value((&(VeSSDI_b_StpCharging)));

    /* Inport: '<Root>/VeTHMR_e_CabPrecondReqSt' */
    (void)Rte_Read_VeTHMR_e_CabPrecondReqSt_Value
        ((&(VeSSDI_e_CabinPreCondReqStat)));

    /* Inport: '<Root>/VeOBCR_b_SecureConEst' */
    (void)Rte_Read_VeOBCR_b_SecureConEst_Value((&(VeSSDI_b_SecureConEst)));

    /* Inport: '<Root>/VeSRAR_b_DsblPSA_PlgIn_EngOn' */
    (void)Rte_Read_VeSRAR_b_DsblPSA_PlgIn_EngOn_Value
        ((&(VeSSDI_b_DsblPSA_PlgIn_EngOn)));

    /* Inport: '<Root>/VeHPMR_b_CntrlrPwrHold' */
    (void)Rte_Read_VeHPMR_b_CntrlrPwrHold_Value((&(VeSSDI_b_CntrlrPwrHold)));

    /* Inport: '<Root>/VeBPCR_b_BPCM_UVActv' */
    (void)Rte_Read_VeBPCR_b_BPCM_UVActv_Value((&(VeSSDI_b_BPCM_UVActv)));

    /* Inport: '<Root>/VeBPCR_b_BPCM_OVActv' */
    (void)Rte_Read_VeBPCR_b_BPCM_OVActv_Value((&(VeSSDI_b_BPCM_OVActv)));

    /* Inport: '<Root>/VeBPCR_b_HVBatRdy' */
    (void)Rte_Read_VeBPCR_b_HVBatRdy_Value((&(VeSSDI_b_HVBatRdy)));

    /* Inport: '<Root>/VeGENR_b_RdyForShtDwn' */
    (void)Rte_Read_VeGENR_b_RdyForShtDwn_Value((&(VeSSDI_b_GENRRdy4ShtDwn)));

    /* Inport: '<Root>/VeHPMR_b_UnintendedShtdwnOcc' */
    (void)Rte_Read_VeHPMR_b_UnintendedShtdwnOcc_Value
        ((&(VeSSDI_b_UnintendedShtdwnOcc)));

    /* Inport: '<Root>/VeBPCR_b_HVBatPerWakeUp' */
    (void)Rte_Read_VeBPCR_b_HVBatPerWakeUp_Value((&(VeSSDI_b_HVBatPerWakeUp)));

    /* Inport: '<Root>/VeSRAR_b_FltShtDwnCmnd' */
    (void)Rte_Read_VeSRAR_b_FltShtDwnCmnd_Value((&(VeSSDI_b_FltShtDwnCmnd)));

    /* Inport: '<Root>/VeSRAR_b_FltShtDwnBPClsdCmnd' */
    (void)Rte_Read_VeSRAR_b_FltShtDwnBPClsdCmnd_Value
        ((&(VeSSDI_b_FltShtDwnBPClsdCmnd)));

    /* Inport: '<Root>/VeTHMR_b_RdyForShtDwn' */
    (void)Rte_Read_VeTHMR_b_RdyForShtDwn_Value((&(VeSSDI_b_THMRRdy4ShtDwn)));

    /* Inport: '<Root>/VeOBCR_b_RdyForShtDwn' */
    (void)Rte_Read_VeOBCR_b_RdyForShtDwn_Value((&(VeSSDI_b_OBCRRdy4ShtDwn)));

    /* Inport: '<Root>/VePLTR_b_DrvDrAjar' */
    (void)Rte_Read_VePLTR_b_DrvDrAjar_Value((&(VeSSDI_b_DrvDoorSts)));

    /* Inport: '<Root>/VePLTR_e_V2GOprStat' */
    (void)Rte_Read_VePLTR_e_V2GOprStat_Value((&(VeSSDI_e_V2GOprStat)));

    /* Inport: '<Root>/VePLTR_e_InvOprStat' */
    (void)Rte_Read_VePLTR_e_InvOprStat_Value((&(VeSSDI_e_InvOprStat)));

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SSDR_FastTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SSDI'
     */
    /* Switch: '<S5>/Switch6' incorporates:
     *  Constant: '<S471>/Calib'
     */
    if (KeSSDR_b_OvrdInvOprStat)
    {
        /* Switch: '<S5>/Switch6' incorporates:
         *  Constant: '<S537>/Calib'
         *  Inport: '<Root>/VePLTR_e_InvOprStat'
         */
        VeSSDI_e_InvOprStat = KeSSDR_e_OvrdInvOprStat;
    }

    /* End of Switch: '<S5>/Switch6' */

    /* Switch: '<S5>/Switch7' incorporates:
     *  Constant: '<S493>/Calib'
     */
    if (KeSSDR_b_OvrdV2GOprStat)
    {
        /* Switch: '<S5>/Switch7' incorporates:
         *  Constant: '<S540>/Calib'
         *  Inport: '<Root>/VePLTR_e_V2GOprStat'
         */
        VeSSDI_e_V2GOprStat = KeSSDR_e_V2GOprStat;
    }

    /* End of Switch: '<S5>/Switch7' */

    /* Switch: '<S5>/Switch8' incorporates:
     *  Constant: '<S452>/Calib'
     */
    if (KeSSDR_b_OvrdDrvDoorSts)
    {
        /* Switch: '<S5>/Switch8' incorporates:
         *  Constant: '<S421>/Calib'
         *  Inport: '<Root>/VePLTR_b_DrvDrAjar'
         */
        VeSSDI_b_DrvDoorSts = KeSSDR_b_DrvDoorSts;
    }

    /* End of Switch: '<S5>/Switch8' */

    /* Switch: '<S5>/Switch9' incorporates:
     *  Constant: '<S475>/Calib'
     */
    if (KeSSDR_b_OvrdOBCRRdy4ShtDwn)
    {
        /* Switch: '<S5>/Switch9' incorporates:
         *  Constant: '<S433>/Calib'
         *  Inport: '<Root>/VeOBCR_b_RdyForShtDwn'
         */
        VeSSDI_b_OBCRRdy4ShtDwn = KeSSDR_b_OBCRRdy4ShtDwn;
    }

    /* End of Switch: '<S5>/Switch9' */

    /* Switch: '<S5>/Switch10' incorporates:
     *  Constant: '<S488>/Calib'
     */
    if (KeSSDR_b_OvrdTHMRRdy4ShtDwn)
    {
        /* Switch: '<S5>/Switch10' incorporates:
         *  Constant: '<S523>/Calib'
         *  Inport: '<Root>/VeTHMR_b_RdyForShtDwn'
         */
        VeSSDI_b_THMRRdy4ShtDwn = KeSSDR_b_THMRRdy4ShtDwn;
    }

    /* End of Switch: '<S5>/Switch10' */

    /* Switch: '<S5>/Switch11' incorporates:
     *  Constant: '<S463>/Calib'
     */
    if (KeSSDR_b_OvrdFltShtDwnBPClsd)
    {
        /* Switch: '<S5>/Switch11' incorporates:
         *  Constant: '<S427>/Calib'
         *  Inport: '<Root>/VeSRAR_b_FltShtDwnBPClsdCmnd'
         */
        VeSSDI_b_FltShtDwnBPClsdCmnd = KeSSDR_b_FltShtDwnBPClsd;
    }

    /* End of Switch: '<S5>/Switch11' */

    /* Switch: '<S5>/Switch12' incorporates:
     *  Constant: '<S464>/Calib'
     */
    if (KeSSDR_b_OvrdFltShtDwnCmnd)
    {
        /* Switch: '<S5>/Switch12' incorporates:
         *  Constant: '<S428>/Calib'
         *  Inport: '<Root>/VeSRAR_b_FltShtDwnCmnd'
         */
        VeSSDI_b_FltShtDwnCmnd = KeSSDR_b_FltShtDwnCmnd;
    }

    /* End of Switch: '<S5>/Switch12' */

    /* Switch: '<S5>/Switch14' incorporates:
     *  Constant: '<S492>/Calib'
     */
    if (KeSSDR_b_OvrdUnintendedShtdwn)
    {
        /* Switch: '<S5>/Switch14' incorporates:
         *  Constant: '<S525>/Calib'
         *  Inport: '<Root>/VeHPMR_b_UnintendedShtdwnOcc'
         */
        VeSSDI_b_UnintendedShtdwnOcc = KeSSDR_b_UnintendedShtdwnOcc;
    }

    /* End of Switch: '<S5>/Switch14' */

    /* Switch: '<S5>/Switch16' incorporates:
     *  Constant: '<S465>/Calib'
     */
    if (KeSSDR_b_OvrdGENRRdy4ShtDwn)
    {
        /* Switch: '<S5>/Switch16' incorporates:
         *  Constant: '<S429>/Calib'
         *  Inport: '<Root>/VeGENR_b_RdyForShtDwn'
         */
        VeSSDI_b_GENRRdy4ShtDwn = KeSSDR_b_GENRRdy4ShtDwn;
    }

    /* End of Switch: '<S5>/Switch16' */

    /* Switch: '<S5>/Switch17' incorporates:
     *  Constant: '<S466>/Calib'
     */
    if (KeSSDR_b_OvrdHVBatRdy)
    {
        /* Switch: '<S5>/Switch17' incorporates:
         *  Constant: '<S430>/Calib'
         *  Inport: '<Root>/VeBPCR_b_HVBatRdy'
         */
        VeSSDI_b_HVBatRdy = KeSSDR_b_HVBatRdy;
    }

    /* End of Switch: '<S5>/Switch17' */

    /* Switch: '<S5>/Switch18' incorporates:
     *  Constant: '<S440>/Calib'
     */
    if (KeSSDR_b_OvrdBPCM_OVActv)
    {
        /* Switch: '<S5>/Switch18' incorporates:
         *  Constant: '<S411>/Calib'
         *  Inport: '<Root>/VeBPCR_b_BPCM_OVActv'
         */
        VeSSDI_b_BPCM_OVActv = KeSSDR_b_BPCM_OVActv;
    }

    /* End of Switch: '<S5>/Switch18' */

    /* Switch: '<S5>/Switch19' incorporates:
     *  Constant: '<S496>/Calib'
     */
    if (KeSSDR_b_Ovrd_BPCM_UVActv)
    {
        /* Switch: '<S5>/Switch19' incorporates:
         *  Constant: '<S412>/Calib'
         *  Inport: '<Root>/VeBPCR_b_BPCM_UVActv'
         */
        VeSSDI_b_BPCM_UVActv = KeSSDR_b_BPCM_UVActv;
    }

    /* End of Switch: '<S5>/Switch19' */

    /* Switch: '<S5>/Switch21' incorporates:
     *  Constant: '<S450>/Calib'
     */
    if (KeSSDR_b_OvrdCntrlrPwrHold)
    {
        /* Switch: '<S5>/Switch21' incorporates:
         *  Constant: '<S419>/Calib'
         *  Inport: '<Root>/VeHPMR_b_CntrlrPwrHold'
         */
        VeSSDI_b_CntrlrPwrHold = KeSSDR_b_CntrlrPwrHold;
    }

    /* End of Switch: '<S5>/Switch21' */

    /* Switch: '<S5>/Switch22' incorporates:
     *  Constant: '<S454>/Calib'
     */
    if (KeSSDR_b_OvrdDsblPSA_PlgIn_EngOn)
    {
        /* Switch: '<S5>/Switch22' incorporates:
         *  Constant: '<S423>/Calib'
         *  Inport: '<Root>/VeSRAR_b_DsblPSA_PlgIn_EngOn'
         */
        VeSSDI_b_DsblPSA_PlgIn_EngOn = KeSSDR_b_DsblPSA_PlgIn_EngOn;
    }

    /* End of Switch: '<S5>/Switch22' */

    /* Switch: '<S5>/Switch23' incorporates:
     *  Constant: '<S486>/Calib'
     */
    if (KeSSDR_b_OvrdSecureConEst)
    {
        /* Switch: '<S5>/Switch23' incorporates:
         *  Constant: '<S519>/Calib'
         *  Inport: '<Root>/VeOBCR_b_SecureConEst'
         */
        VeSSDI_b_SecureConEst = KeSSDR_b_SecureConEst;
    }

    /* End of Switch: '<S5>/Switch23' */

    /* Switch: '<S5>/Switch24' incorporates:
     *  Constant: '<S448>/Calib'
     */
    if (KeSSDR_b_OvrdCabinPreCondReqStat)
    {
        /* Switch: '<S5>/Switch24' incorporates:
         *  Constant: '<S528>/Calib'
         *  Inport: '<Root>/VeTHMR_e_CabPrecondReqSt'
         */
        VeSSDI_e_CabinPreCondReqStat = KeSSDR_e_CabinPreCondReqStat;
    }

    /* End of Switch: '<S5>/Switch24' */

    /* Switch: '<S5>/Switch25' incorporates:
     *  Constant: '<S487>/Calib'
     */
    if (KeSSDR_b_OvrdStpCharging)
    {
        /* Switch: '<S5>/Switch25' incorporates:
         *  Constant: '<S522>/Calib'
         *  Inport: '<Root>/VeSRAR_b_StpCharging'
         */
        VeSSDI_b_StpCharging = KeSSDR_b_StpCharging;
    }

    /* End of Switch: '<S5>/Switch25' */

    /* Switch: '<S5>/Switch53' incorporates:
     *  Constant: '<S439>/Calib'
     */
    if (KeSSDR_b_OvrdAfterRunReq)
    {
        /* Switch: '<S5>/Switch53' incorporates:
         *  Constant: '<S410>/Calib'
         *  Inport: '<Root>/VeTHMR_b_HCP_LTP_FanAftRun_Rq'
         */
        VeSSDI_b_HCP_LTP_FanAftRun_Rq = KeSSDR_b_AfterRunReq;
    }

    /* End of Switch: '<S5>/Switch53' */

    /* Switch: '<S5>/Switch26' incorporates:
     *  Constant: '<S480>/Calib'
     */
    if (KeSSDR_b_OvrdPluggedIn)
    {
        /* Switch: '<S5>/Switch26' incorporates:
         *  Constant: '<S511>/Calib'
         *  Inport: '<Root>/VeOBCR_b_PluggedIn'
         */
        VeSSDI_b_PluggedIn = KeSSDR_b_PluggedIn;
    }

    /* End of Switch: '<S5>/Switch26' */

    /* Switch: '<S5>/Switch30' incorporates:
     *  Constant: '<S491>/Calib'
     */
    if (KeSSDR_b_OvrdTimerPerWupThrml)
    {
        /* Switch: '<S5>/Switch30' incorporates:
         *  Constant: '<S546>/Calib'
         *  Inport: '<Root>/VeTHMR_t_BatPerWU_ThrmlCond_Timer'
         */
        VeSSDI_t_BatPerWU_ThrmlCond_Timer = KeSSDR_t_TimerPerWupThrml;
    }

    /* End of Switch: '<S5>/Switch30' */

    /* Switch: '<S5>/Switch31' incorporates:
     *  Constant: '<S490>/Calib'
     */
    if (KeSSDR_b_OvrdTimerPerWup12VChrg)
    {
        /* Switch: '<S5>/Switch31' incorporates:
         *  Constant: '<S545>/Calib'
         *  Inport: '<Root>/VeGENR_t_BattPerWU_12VChg_Timer'
         */
        VeSSDI_t_BattPerWU_12VChrg_Timer = KeSSDR_t_TimerPerWup12VChrg;
    }

    /* End of Switch: '<S5>/Switch31' */

    /* Switch: '<S5>/Switch33' incorporates:
     *  Constant: '<S437>/Calib'
     */
    if (KeSSDR_b_OvrSchChrg_WUTime)
    {
        /* Switch: '<S5>/Switch33' incorporates:
         *  Constant: '<S543>/Calib'
         *  Inport: '<Root>/VeSCPR_t_SchChrg_WUTime'
         */
        VeSSDI_t_SchChrg_WUTime = KeSSDR_t_SchChrg_WUTime;
    }

    /* End of Switch: '<S5>/Switch33' */

    /* Switch: '<S5>/Switch34' incorporates:
     *  Constant: '<S438>/Calib'
     */
    if (KeSSDR_b_OvrTimeToDeparture)
    {
        /* Switch: '<S5>/Switch34' incorporates:
         *  Constant: '<S544>/Calib'
         *  Inport: '<Root>/VeSCPR_t_TimeToDeparture'
         */
        VeSSDI_t_TimeToDeparture = KeSSDR_t_TimeToDeparture;
    }

    /* End of Switch: '<S5>/Switch34' */

    /* Switch: '<S5>/Switch35' incorporates:
     *  Constant: '<S444>/Calib'
     */
    if (KeSSDR_b_OvrdBatModTmp)
    {
        /* Switch: '<S5>/Switch35' incorporates:
         *  Constant: '<S409>/Calib'
         *  Inport: '<Root>/VeBPCR_T_BatModTmp'
         */
        VeSSDI_T_BatModTmp = KeSSDR_T_BatModTmp;
    }

    /* End of Switch: '<S5>/Switch35' */

    /* Switch: '<S5>/Switch36' incorporates:
     *  Constant: '<S436>/Calib'
     */
    if (KeSSDR_b_OvrSC_PrecTimer)
    {
        /* Switch: '<S5>/Switch36' incorporates:
         *  Constant: '<S542>/Calib'
         *  Inport: '<Root>/VeTHMR_t_SC_PrecTimer'
         */
        VeSSDI_t_SC_PrecTimer = KeSSDR_t_SC_PrecTimer;
    }

    /* End of Switch: '<S5>/Switch36' */

    /* Switch: '<S5>/Switch13' incorporates:
     *  Constant: '<S476>/Calib'
     */
    if (KeSSDR_b_OvrdPerWU)
    {
        /* Switch: '<S5>/Switch13' incorporates:
         *  Constant: '<S509>/Calib'
         *  Inport: '<Root>/VeBPCR_b_HVBatPerWakeUp'
         */
        VeSSDI_b_HVBatPerWakeUp = KeSSDR_b_PerWupHVBattChrg;
    }

    /* End of Switch: '<S5>/Switch13' */

    /* Switch: '<S5>/Switch37' incorporates:
     *  Constant: '<S441>/Calib'
     *  Inport: '<Root>/VeAPMR_b_TimerExpired'
     */
    if (KeSSDR_b_OvrdBSWTimerExpired)
    {
        /* Switch: '<S5>/Switch37' incorporates:
         *  Constant: '<S414>/Calib'
         *  Inport: '<Root>/VeAPMR_b_TimerExpired'
         */
        VeSSDI_b_BSWTimerExpired = KeSSDR_b_BSWTimerExpired;
    }
    else
    {
        (void)Rte_Read_VeAPMR_b_TimerExpired_Value((&(VeSSDI_b_BSWTimerExpired)));

        /* Switch: '<S5>/Switch32' incorporates:
         *  Constant: '<S413>/Calib'
         *  Inport: '<Root>/VeAPMR_b_TimerExpired'
         */
        if (!KeSSDR_b_BSWTimerExp_Select)
        {
            /* Switch: '<S5>/Switch37' */
            VeSSDI_b_BSWTimerExpired = VeSSDI_b_HVBatPerWakeUp;
        }

        /* End of Switch: '<S5>/Switch32' */
    }

    /* End of Switch: '<S5>/Switch37' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeBPCR_e_HV_BatCntctrStat' */
    (void)Rte_Read_VeBPCR_e_HV_BatCntctrStat_Value((&(VeSSDI_e_HV_BatCntctrStat)));

    /* Inport: '<Root>/VeFCPR_e_ActualMode' */
    (void)Rte_Read_VeFCPR_e_ActualMode_Value((&(VeSSDI_e_FCPS_ActualMode)));

    /* Inport: '<Root>/VeFCPR_e_FCPS_HTCoolReq' */
    (void)Rte_Read_VeFCPR_e_FCPS_HTCoolReq_Value((&(VeSSDI_e_FCPS_HTCoolReq)));

    /* Inport: '<Root>/VeSCPR_b_FOTASchCnflct' */
    (void)Rte_Read_VeSCPR_b_FOTASchCnflct_Value((&(VeSSDI_b_FOTASchCnflct)));

    /* Inport: '<Root>/VeCITR_e_FOTA_Install_Type' */
    (void)Rte_Read_VeCITR_e_FOTA_Install_Type_Value
        ((&(VeSSDI_e_FOTA_Install_Type)));

    /* Inport: '<Root>/VeHPMR_b_PrepareToShtdwn' */
    (void)Rte_Read_VeHPMR_b_PrepareToShtdwn_Value((&(VeSSDI_b_PrepareToShtdwn)));

    /* Inport: '<Root>/VePMTR_b_ThrmlShtdwnReqHonrd' */
    (void)Rte_Read_VePMTR_b_ThrmlShtdwnReqHonrd_Value
        ((&(VeSSDI_b_ThrmlShtdwnReqHonrd)));

    /* Inport: '<Root>/VeSCPR_e_InitStatus' */
    (void)Rte_Read_VeSCPR_e_InitStatus_Value((&(VeSSDI_e_InitStatus)));

    /* Inport: '<Root>/VePLTR_b_HotEnablerReq' */
    (void)Rte_Read_VePLTR_b_HotEnablerReq_Value((&(VeSSDI_b_HotEnablerReq)));

    /* Inport: '<Root>/VePLTR_e_LSMDExtReleaseLockReq' */
    (void)Rte_Read_VePLTR_e_LSMDExtReleaseLockReq_Value
        ((&(VeSSDI_e_LSMDExtReleaseLockReq)));

    /* Inport: '<Root>/VeTRGR_e_ESMTransRngSt' */
    (void)Rte_Read_VeTRGR_e_ESMTransRngSt_Value((&(VeSSDI_e_ESMTransRngSt)));

    /* Inport: '<Root>/VeBRKR_e_BrkPedalDscrtInpt' */
    (void)Rte_Read_VeBRKR_e_BrkPedalDscrtInpt_Value
        ((&(VeSSDI_e_BrkPedalDscrtInpt)));

    /* Inport: '<Root>/VeTPCR_e_KeepHotColdSts' */
    (void)Rte_Read_VeTPCR_e_KeepHotColdSts_Value((&(VeSSDI_e_KeepHotColdSts)));

    /* Inport: '<Root>/VeTRIR_b_Comfort_EnblAct' */
    (void)Rte_Read_VeTRIR_b_Comfort_EnblAct_Value((&(VeSSDI_b_Comfort_Enable_Act)));

    /* Inport: '<Root>/VePMDR_b_EngineOffRequest' */
    (void)Rte_Read_VePMDR_b_EngineOffRequest_Value((&(VeSSDI_b_EngineOffRequest)));

    /* Inport: '<Root>/VeBPCR_b_HV_BatModTempMinFA' */
    (void)Rte_Read_VeBPCR_b_HV_BatModTempMinFA_Value
        ((&(VeSSDI_b_HV_BatModTempMinFA)));

    /* Inport: '<Root>/VeBPCR_b_HV_BatModTempMaxFA' */
    (void)Rte_Read_VeBPCR_b_HV_BatModTempMaxFA_Value
        ((&(VeSSDI_b_HV_BatModTempMaxFA)));

    /* Inport: '<Root>/VeHPMR_b_PropSysActv' */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value((&(VeSSDI_b_PropSysActv)));

    /* Inport: '<Root>/VeTRGR_e_VldtdTransRngSt' */
    (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value((&(VeSSDI_e_VldtdTransRngSt)));

    /* Inport: '<Root>/VeESMR_P_BattLTMaxLim' */
    (void)Rte_Read_VeESMR_P_BattLTMaxLim_Value((&(VeSSDI_P_BattLTMaxLim)));

    /* Inport: '<Root>/VePLTR_b_RmtVehStartReqFA' */
    (void)Rte_Read_VePLTR_b_RmtVehStartReqFA_Value((&(VeSSDI_b_RmtVehStartReqFA)));

    /* Inport: '<Root>/VePLTR_b_DrvDrAjarFA' */
    (void)Rte_Read_VePLTR_b_DrvDrAjarFA_Value((&(VeSSDI_b_DrvDrAjarFA)));

    /* Inport: '<Root>/VeOBCR_b_ValidPluginDetected' */
    (void)Rte_Read_VeOBCR_b_ValidPluginDetected_Value
        ((&(VeSSDI_b_ValidPluginDetected)));

    /* Inport: '<Root>/VeTHMR_b_CabPrecDny_BattCond' */
    (void)Rte_Read_VeTHMR_b_CabPrecDny_BattCond_Value
        ((&(VeSSDI_b_CabPrecDny_BattCond)));

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SSDR_FastTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SSDI'
     */
    /* Switch: '<S5>/Switch38' incorporates:
     *  Constant: '<S447>/Calib'
     */
    if (KeSSDR_b_OvrdCabPrecDny_BattCond)
    {
        /* Switch: '<S5>/Switch38' incorporates:
         *  Constant: '<S417>/Calib'
         *  Inport: '<Root>/VeTHMR_b_CabPrecDny_BattCond'
         */
        VeSSDI_b_CabPrecDny_BattCond = KeSSDR_b_CabPrecDny_BattCond;
    }

    /* End of Switch: '<S5>/Switch38' */

    /* Switch: '<S5>/Switch39' incorporates:
     *  Constant: '<S494>/Calib'
     */
    if (KeSSDR_b_OvrdValidPluginDetected)
    {
        /* Switch: '<S5>/Switch39' incorporates:
         *  Constant: '<S526>/Calib'
         *  Inport: '<Root>/VeOBCR_b_ValidPluginDetected'
         */
        VeSSDI_b_ValidPluginDetected = KeSSDR_b_ValidPluginDetected;
    }

    /* End of Switch: '<S5>/Switch39' */

    /* Switch: '<S5>/Switch45' incorporates:
     *  Constant: '<S453>/Calib'
     */
    if (KeSSDR_b_OvrdDrvDrAjarFA)
    {
        /* Switch: '<S5>/Switch45' incorporates:
         *  Constant: '<S422>/Calib'
         *  Inport: '<Root>/VePLTR_b_DrvDrAjarFA'
         */
        VeSSDI_b_DrvDrAjarFA = KeSSDR_b_DrvDrAjarFA;
    }

    /* End of Switch: '<S5>/Switch45' */

    /* Switch: '<S5>/Switch46' incorporates:
     *  Constant: '<S485>/Calib'
     */
    if (KeSSDR_b_OvrdRmtVehStartReqFA)
    {
        /* Switch: '<S5>/Switch46' incorporates:
         *  Constant: '<S517>/Calib'
         *  Inport: '<Root>/VePLTR_b_RmtVehStartReqFA'
         */
        VeSSDI_b_RmtVehStartReqFA = KeSSDR_b_RmtVehStartReqFA;
    }

    /* End of Switch: '<S5>/Switch46' */

    /* Switch: '<S5>/Switch51' incorporates:
     *  Constant: '<S445>/Calib'
     */
    if (KeSSDR_b_OvrdBattLTMaxLim)
    {
        /* Switch: '<S5>/Switch51' incorporates:
         *  Constant: '<S407>/Calib'
         *  Inport: '<Root>/VeESMR_P_BattLTMaxLim'
         */
        VeSSDI_P_BattLTMaxLim = KeSSDR_P_BattLTMaxLim;
    }

    /* End of Switch: '<S5>/Switch51' */

    /* Switch: '<S5>/Switch52' incorporates:
     *  Constant: '<S495>/Calib'
     */
    if (KeSSDR_b_OvrdVldtdTransRngSt)
    {
        /* Switch: '<S5>/Switch52' incorporates:
         *  Constant: '<S541>/Calib'
         *  Inport: '<Root>/VeTRGR_e_VldtdTransRngSt'
         */
        VeSSDI_e_VldtdTransRngSt = KeSSDR_e_VldtdTransRngSt;
    }

    /* End of Switch: '<S5>/Switch52' */

    /* Switch: '<S5>/Switch54' incorporates:
     *  Constant: '<S482>/Calib'
     */
    if (KeSSDR_b_OvrdPropSysActv)
    {
        /* Switch: '<S5>/Switch54' incorporates:
         *  Constant: '<S513>/Calib'
         *  Inport: '<Root>/VeHPMR_b_PropSysActv'
         */
        VeSSDI_b_PropSysActv = KeSSDR_b_PropSysActv;
    }

    /* End of Switch: '<S5>/Switch54' */

    /* Switch: '<S5>/Switch55' incorporates:
     *  Constant: '<S442>/Calib'
     */
    if (KeSSDR_b_OvrdBatModTempMaxFA)
    {
        /* Switch: '<S5>/Switch55' incorporates:
         *  Constant: '<S415>/Calib'
         *  Inport: '<Root>/VeBPCR_b_HV_BatModTempMaxFA'
         */
        VeSSDI_b_HV_BatModTempMaxFA = KeSSDR_b_BatModTempMaxFA;
    }

    /* End of Switch: '<S5>/Switch55' */

    /* Switch: '<S5>/Switch56' incorporates:
     *  Constant: '<S443>/Calib'
     */
    if (KeSSDR_b_OvrdBatModTempMinFA)
    {
        /* Switch: '<S5>/Switch56' incorporates:
         *  Constant: '<S416>/Calib'
         *  Inport: '<Root>/VeBPCR_b_HV_BatModTempMinFA'
         */
        VeSSDI_b_HV_BatModTempMinFA = KeSSDR_b_BatModTempMinFA;
    }

    /* End of Switch: '<S5>/Switch56' */

    /* Switch: '<S5>/Switch2' incorporates:
     *  Constant: '<S457>/Calib'
     */
    if (KeSSDR_b_OvrdEngineOffRequest)
    {
        /* Switch: '<S5>/Switch2' incorporates:
         *  Constant: '<S424>/Calib'
         *  Inport: '<Root>/VePMDR_b_EngineOffRequest'
         */
        VeSSDI_b_EngineOffRequest = KeSSDR_b_EngineOffRequest;
    }

    /* End of Switch: '<S5>/Switch2' */

    /* Switch: '<S5>/Switch3' incorporates:
     *  Constant: '<S451>/Calib'
     */
    if (KeSSDR_b_OvrdComfort_Enable_Act)
    {
        /* Switch: '<S5>/Switch3' incorporates:
         *  Constant: '<S420>/Calib'
         *  Inport: '<Root>/VeTRIR_b_Comfort_EnblAct'
         */
        VeSSDI_b_Comfort_Enable_Act = KeSSDR_b_Comfort_Enable_Act;
    }

    /* End of Switch: '<S5>/Switch3' */

    /* Switch: '<S5>/Switch15' incorporates:
     *  Constant: '<S472>/Calib'
     */
    if (KeSSDR_b_OvrdKeepHotColdStatus)
    {
        /* Switch: '<S5>/Switch15' incorporates:
         *  Constant: '<S534>/Calib'
         *  Inport: '<Root>/VeTPCR_e_KeepHotColdSts'
         */
        VeSSDI_e_KeepHotColdSts = KeSSDR_e_KeepHotColdStatus;
    }

    /* End of Switch: '<S5>/Switch15' */

    /* Switch: '<S5>/Switch20' incorporates:
     *  Constant: '<S446>/Calib'
     */
    if (KeSSDR_b_OvrdBrkPedalDscrtInpt)
    {
        /* Switch: '<S5>/Switch20' incorporates:
         *  Constant: '<S527>/Calib'
         *  Inport: '<Root>/VeBRKR_e_BrkPedalDscrtInpt'
         */
        VeSSDI_e_BrkPedalDscrtInpt = KeSSDR_e_BrkPedalDscrtInpt;
    }

    /* End of Switch: '<S5>/Switch20' */

    /* Switch: '<S5>/Switch27' incorporates:
     *  Constant: '<S455>/Calib'
     */
    if (KeSSDR_b_OvrdESMTransRngSt)
    {
        /* Switch: '<S5>/Switch27' incorporates:
         *  Constant: '<S529>/Calib'
         *  Inport: '<Root>/VeTRGR_e_ESMTransRngSt'
         */
        VeSSDI_e_ESMTransRngSt = KeSSDR_e_ESMTransRngSt;
    }

    /* End of Switch: '<S5>/Switch27' */

    /* Switch: '<S5>/Switch42' incorporates:
     *  Constant: '<S474>/Calib'
     */
    if (KeSSDR_b_OvrdLSMDExtReleaseLockReq)
    {
        /* Switch: '<S5>/Switch42' incorporates:
         *  Constant: '<S536>/Calib'
         *  Inport: '<Root>/VePLTR_e_LSMDExtReleaseLockReq'
         */
        VeSSDI_e_LSMDExtReleaseLockReq = KeSSDR_e_LSMDExtReleaseLockReq;
    }

    /* End of Switch: '<S5>/Switch42' */

    /* Switch: '<S5>/Switch44' incorporates:
     *  Constant: '<S469>/Calib'
     */
    if (KeSSDR_b_OvrdHotEnablerReq)
    {
        /* Switch: '<S5>/Switch44' incorporates:
         *  Constant: '<S431>/Calib'
         *  Inport: '<Root>/VePLTR_b_HotEnablerReq'
         */
        VeSSDI_b_HotEnablerReq = KeSSDR_b_HotEnablerReq;
    }

    /* End of Switch: '<S5>/Switch44' */

    /* Switch: '<S5>/Switch47' incorporates:
     *  Constant: '<S470>/Calib'
     */
    if (KeSSDR_b_OvrdInitStatus)
    {
        /* Switch: '<S5>/Switch47' incorporates:
         *  Constant: '<S533>/Calib'
         *  Inport: '<Root>/VeSCPR_e_InitStatus'
         */
        VeSSDI_e_InitStatus = KeSSDR_e_InitStatus;
    }

    /* End of Switch: '<S5>/Switch47' */

    /* Switch: '<S5>/Switch48' incorporates:
     *  Constant: '<S489>/Calib'
     */
    if (KeSSDR_b_OvrdThrmlShtdwnReqHonrd)
    {
        /* Switch: '<S5>/Switch48' incorporates:
         *  Constant: '<S524>/Calib'
         *  Inport: '<Root>/VePMTR_b_ThrmlShtdwnReqHonrd'
         */
        VeSSDI_b_ThrmlShtdwnReqHonrd = KeSSDR_b_ThrmlShtdwnReqHonrd;
    }

    /* End of Switch: '<S5>/Switch48' */

    /* Switch: '<S5>/Switch49' incorporates:
     *  Constant: '<S481>/Calib'
     */
    if (KeSSDR_b_OvrdPrepareToShtdwn)
    {
        /* Switch: '<S5>/Switch49' incorporates:
         *  Constant: '<S512>/Calib'
         *  Inport: '<Root>/VeHPMR_b_PrepareToShtdwn'
         */
        VeSSDI_b_PrepareToShtdwn = KeSSDR_b_PrepareToShtdwn;
    }

    /* End of Switch: '<S5>/Switch49' */

    /* Switch: '<S5>/Switch43' incorporates:
     *  Constant: '<S460>/Calib'
     */
    if (KeSSDR_b_OvrdFOTAInstallType)
    {
        /* Switch: '<S5>/Switch43' incorporates:
         *  Constant: '<S531>/Calib'
         *  Inport: '<Root>/VeCITR_e_FOTA_Install_Type'
         */
        VeSSDI_e_FOTA_Install_Type = KeSSDR_e_FOTAInstallTypeVal;
    }

    /* End of Switch: '<S5>/Switch43' */

    /* Switch: '<S5>/Switch50' incorporates:
     *  Constant: '<S461>/Calib'
     */
    if (KeSSDR_b_OvrdFOTASchCnflct)
    {
        /* Switch: '<S5>/Switch50' incorporates:
         *  Constant: '<S462>/Calib'
         *  Inport: '<Root>/VeSCPR_b_FOTASchCnflct'
         */
        VeSSDI_b_FOTASchCnflct = KeSSDR_b_OvrdFOTASchCnflctVal;
    }

    /* End of Switch: '<S5>/Switch50' */

    /* Switch: '<S5>/Switch57' incorporates:
     *  Constant: '<S458>/Calib'
     */
    if (KeSSDR_b_OvrdFCPS_HTCoolReq)
    {
        /* Switch: '<S5>/Switch57' incorporates:
         *  Constant: '<S425>/Calib'
         *  Inport: '<Root>/VeFCPR_e_FCPS_HTCoolReq'
         */
        VeSSDI_e_FCPS_HTCoolReq = KeSSDR_e_FCPS_HTCoolReq;
    }

    /* End of Switch: '<S5>/Switch57' */

    /* Switch: '<S5>/Switch58' incorporates:
     *  Constant: '<S459>/Calib'
     */
    if (KeSSDR_b_OvrdFCPS_ActualMode)
    {
        /* Switch: '<S5>/Switch58' incorporates:
         *  Constant: '<S426>/Calib'
         *  Inport: '<Root>/VeFCPR_e_ActualMode'
         */
        VeSSDI_e_FCPS_ActualMode = KeSSDR_e_FCPS_ActualMode;
    }

    /* End of Switch: '<S5>/Switch58' */

    /* Switch: '<S5>/Switch59' incorporates:
     *  Constant: '<S468>/Calib'
     */
    if (KeSSDR_b_OvrdHV_BatCntctrStat)
    {
        /* Switch: '<S5>/Switch59' incorporates:
         *  Constant: '<S532>/Calib'
         *  Inport: '<Root>/VeBPCR_e_HV_BatCntctrStat'
         */
        VeSSDI_e_HV_BatCntctrStat = KeSSDR_e_HV_BatCntctrStat;
    }

    /* End of Switch: '<S5>/Switch59' */

    /* Switch: '<S5>/Switch60' incorporates:
     *  Constant: '<S449>/Calib'
     *  Inport: '<Root>/VeCITR_b_ChargeNow'
     *  Inport: '<Root>/VeCITR_b_TBM_ChargeNow'
     */
    if (KeSSDR_b_OvrdChrgNow)
    {
        /* Switch: '<S5>/Switch60' incorporates:
         *  Constant: '<S418>/Calib'
         */
        VeSSDI_b_ChargeNow = KeSSDR_b_ChrgNow;
    }
    else
    {
        (void)Rte_Read_VeCITR_b_TBM_ChargeNow_Value(&tmpRead);
        (void)Rte_Read_VeCITR_b_ChargeNow_Value(&rtb_AND_fw);

        /* Switch: '<S5>/Switch60' incorporates:
         *  Inport: '<Root>/VeCITR_b_ChargeNow'
         *  Inport: '<Root>/VeCITR_b_TBM_ChargeNow'
         *  Logic: '<S5>/Logical Operator'
         */
        VeSSDI_b_ChargeNow = (rtb_AND_fw || tmpRead);
    }

    /* End of Switch: '<S5>/Switch60' */

    /* Switch: '<S5>/Switch61' incorporates:
     *  Constant: '<S505>/Calib'
     *  Inport: '<Root>/VeCITR_b_HU_Sch1_Submit'
     *  Inport: '<Root>/VeCITR_b_HU_Sch2_Submit'
     *  Inport: '<Root>/VeCITR_b_HU_Sch3_Submit'
     *  Inport: '<Root>/VeCITR_b_HU_Sch4_Submit'
     *  Inport: '<Root>/VeCITR_b_TBM_Sch1_Submit'
     *  Inport: '<Root>/VeCITR_b_TBM_Sch2_Submit'
     *  Inport: '<Root>/VeCITR_b_TBM_Sch3_Submit'
     *  Inport: '<Root>/VeCITR_b_TBM_Sch4_Submit'
     */
    if (KeSSDR_b_Ovrd_Sch_Submit)
    {
        /* Switch: '<S5>/Switch61' incorporates:
         *  Constant: '<S518>/Calib'
         */
        VeSSDI_b_Sch_Submit = KeSSDR_b_Sch_Submit;
    }
    else
    {
        (void)Rte_Read_VeCITR_b_TBM_Sch4_Submit_Value
            (&rtb_VeSSDC_b_ShtDwnPrplsnFlg);
        (void)Rte_Read_VeCITR_b_HU_Sch4_Submit_Value(&rtb_OR1_dn);
        (void)Rte_Read_VeCITR_b_TBM_Sch3_Submit_Value(&rtb_AND_df);
        (void)Rte_Read_VeCITR_b_HU_Sch3_Submit_Value(&rtb_AND_la);
        (void)Rte_Read_VeCITR_b_HU_Sch2_Submit_Value(&rtb_AND_c);
        (void)Rte_Read_VeCITR_b_TBM_Sch2_Submit_Value(&rtb_UnitDelay3_n);
        (void)Rte_Read_VeCITR_b_HU_Sch1_Submit_Value(&rtb_UnitDelay3_e);
        (void)Rte_Read_VeCITR_b_TBM_Sch1_Submit_Value(&rtb_AND_py);

        /* Switch: '<S5>/Switch61' incorporates:
         *  Inport: '<Root>/VeCITR_b_HU_Sch1_Submit'
         *  Inport: '<Root>/VeCITR_b_HU_Sch2_Submit'
         *  Inport: '<Root>/VeCITR_b_HU_Sch3_Submit'
         *  Inport: '<Root>/VeCITR_b_HU_Sch4_Submit'
         *  Inport: '<Root>/VeCITR_b_TBM_Sch1_Submit'
         *  Inport: '<Root>/VeCITR_b_TBM_Sch2_Submit'
         *  Inport: '<Root>/VeCITR_b_TBM_Sch3_Submit'
         *  Inport: '<Root>/VeCITR_b_TBM_Sch4_Submit'
         *  Logic: '<S5>/Logical Operator1'
         */
        VeSSDI_b_Sch_Submit = (((((((rtb_AND_py || rtb_UnitDelay3_e) ||
            rtb_UnitDelay3_n) || rtb_AND_c) || rtb_AND_la) || rtb_AND_df) ||
                                rtb_OR1_dn) || rtb_VeSSDC_b_ShtDwnPrplsnFlg);
    }

    /* End of Switch: '<S5>/Switch61' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeHPMR_e_HybSysSt' */
    (void)Rte_Read_VeHPMR_e_HybSysSt_Value((&(VeSSDI_e_HybSysSt)));

    /* Inport: '<Root>/VeBPCR_b_HV_AuxLoadOffReq' */
    (void)Rte_Read_VeBPCR_b_HV_AuxLoadOffReq_Value((&(VeSSDI_b_HV_AuxLoadOffReq)));

    /* Inport: '<Root>/VeVDVR_b_Rdy4ShtDwn' */
    (void)Rte_Read_VeVDVR_b_Rdy4ShtDwn_Value((&(VeSSDI_b_Rdy4ShtDwn_VDVR)));

    /* Inport: '<S5>/VeTRIR_b_Comfort_EnblAct_FA' incorporates:
     *  Inport: '<Root>/VeTRIR_b_Comfort_EnblAct_FA'
     */
    (void)Rte_Read_VeTRIR_b_Comfort_EnblAct_FA_Value
        ((&(VeSSDI_b_Comfort_EnblAct_FA)));

    /* Inport: '<Root>/VePLTR_b_InFieldMode' */
    (void)Rte_Read_VePLTR_b_InFieldMode_Value((&(VeSSDI_b_InFieldMode)));

    /* Inport: '<Root>/VeHPMR_b_HVFltStpChrg' */
    (void)Rte_Read_VeHPMR_b_HVFltStpChrg_Value((&(VeSSDI_b_HVFltStpChrg)));

    /* Inport: '<Root>/VeVTLR_b_Rdy4ShtDwn_OnboardPP2' */
    (void)Rte_Read_VeVTLR_b_Rdy4ShtDwn_OnboardPP2_Value
        ((&(VeSSDI_b_Rdy4ShtDwn_OnboardPP2)));

    /* Inport: '<Root>/VeVTLR_b_Rdy4ShtDwn_OnboardPP1' */
    (void)Rte_Read_VeVTLR_b_Rdy4ShtDwn_OnboardPP1_Value
        ((&(VeSSDI_b_Rdy4ShtDwn_OnboardPP1)));

    /* Inport: '<Root>/VeVTLR_b_OnboardPP2_Dtctd' */
    (void)Rte_Read_VeVTLR_b_OnboardPP2_Dtctd_Value((&(VeSSDI_b_OnboardPP2_Dtctd)));

    /* Inport: '<Root>/VeVTLR_b_OnboardPP1_Dtctd' */
    (void)Rte_Read_VeVTLR_b_OnboardPP1_Dtctd_Value((&(VeSSDI_b_OnboardPP1_Dtctd)));

    /* Inport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Arb' */
    (void)Rte_Read_VeBPCR_Pct_HV_BatPackSOC_Arb_Value
        ((&(VeSSDI_Pct_HV_BatPackSOC)));

    /* Inport: '<Root>/VeESSR_e_EngStartStopSt' */
    (void)Rte_Read_VeESSR_e_EngStartStopSt_Value((&(VeSSDI_e_EngStartStopSt)));

    /* Inport: '<Root>/VeOBCR_b_SecureConnV2L' */
    (void)Rte_Read_VeOBCR_b_SecureConnV2L_Value((&(VeSSDI_b_SecureConnV2L)));

    /* Inport: '<Root>/VeVTLR_b_Rdy4ShtDwn' */
    (void)Rte_Read_VeVTLR_b_Rdy4ShtDwn_Value((&(VeSSDI_b_Rdy4ShtDwn_VTLR)));

    /* Inport: '<Root>/VeTRGR_b_Secured_To_Shtdwn' */
    (void)Rte_Read_VeTRGR_b_Secured_To_Shtdwn_Value
        ((&(VeSSDI_b_Secured_To_Shtdwn)));

    /* Inport: '<Root>/VeBPCR_b_HVBatPerWUThermal' */
    (void)Rte_Read_VeBPCR_b_HVBatPerWUThermal_Value
        ((&(VeSSDI_b_HVBatPerWUThermal)));

    /* Inport: '<Root>/VeBPCR_b_HVBatPerWU12VChrg' */
    (void)Rte_Read_VeBPCR_b_HVBatPerWU12VChrg_Value
        ((&(VeSSDI_b_HVBatPerWU12VChrg)));

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SSDR_FastTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SSDI'
     */
    /* Switch: '<S5>/Switch62' incorporates:
     *  Constant: '<S507>/Calib'
     */
    if (KeSSDR_b_Ovrd_SecuredtoShtdwn)
    {
        /* Switch: '<S5>/Switch62' incorporates:
         *  Constant: '<S521>/Calib'
         *  Inport: '<Root>/VeTRGR_b_Secured_To_Shtdwn'
         */
        VeSSDI_b_Secured_To_Shtdwn = KeSSDR_b_Secured_to_shtdwn;
    }

    /* End of Switch: '<S5>/Switch62' */

    /* Switch: '<S5>/Switch63' incorporates:
     *  Constant: '<S499>/Calib'
     */
    if (KeSSDR_b_Ovrd_Rdy4Shtdwn_VTLR)
    {
        /* Switch: '<S5>/Switch63' incorporates:
         *  Constant: '<S514>/Calib'
         *  Inport: '<Root>/VeVTLR_b_Rdy4ShtDwn'
         */
        VeSSDI_b_Rdy4ShtDwn_VTLR = KeSSDR_b_Rdy4Shtdwn_VTLR;
    }

    /* End of Switch: '<S5>/Switch63' */

    /* Switch: '<S5>/Switch64' incorporates:
     *  Constant: '<S506>/Calib'
     */
    if (KeSSDR_b_Ovrd_SecureConnV2L)
    {
        /* Switch: '<S5>/Switch64' incorporates:
         *  Constant: '<S520>/Calib'
         *  Inport: '<Root>/VeOBCR_b_SecureConnV2L'
         */
        VeSSDI_b_SecureConnV2L = KeSSDR_b_SecureConnV2L;
    }

    /* End of Switch: '<S5>/Switch64' */

    /* Switch: '<S5>/Switch65' incorporates:
     *  Constant: '<S456>/Calib'
     */
    if (KeSSDR_b_OvrdEngStartStopSt)
    {
        /* Switch: '<S5>/Switch65' incorporates:
         *  Constant: '<S530>/Calib'
         *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
         */
        VeSSDI_e_EngStartStopSt = KeSSDR_e_EngStartStopSt;
    }

    /* End of Switch: '<S5>/Switch65' */

    /* Switch: '<S5>/Switch66' incorporates:
     *  Constant: '<S467>/Calib'
     */
    if (KeSSDR_b_OvrdHVBattPackSOC)
    {
        /* Switch: '<S5>/Switch66' incorporates:
         *  Constant: '<S408>/Calib'
         *  Inport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Arb'
         */
        VeSSDI_Pct_HV_BatPackSOC = KeSSDR_Pct_HVBattPackSOC;
    }

    /* End of Switch: '<S5>/Switch66' */

    /* Switch: '<S5>/Switch67' incorporates:
     *  Constant: '<S497>/Calib'
     */
    if (KeSSDR_b_Ovrd_OnboardPP1_Dtctd)
    {
        /* Switch: '<S5>/Switch67' incorporates:
         *  Constant: '<S434>/Calib'
         *  Inport: '<Root>/VeVTLR_b_OnboardPP1_Dtctd'
         */
        VeSSDI_b_OnboardPP1_Dtctd = KeSSDR_b_OnboardPP1_Dtctd;
    }

    /* End of Switch: '<S5>/Switch67' */

    /* Switch: '<S5>/Switch68' incorporates:
     *  Constant: '<S498>/Calib'
     */
    if (KeSSDR_b_Ovrd_OnboardPP2_Dtctd)
    {
        /* Switch: '<S5>/Switch68' incorporates:
         *  Constant: '<S435>/Calib'
         *  Inport: '<Root>/VeVTLR_b_OnboardPP2_Dtctd'
         */
        VeSSDI_b_OnboardPP2_Dtctd = KeSSDR_b_OnboardPP2_Dtctd;
    }

    /* End of Switch: '<S5>/Switch68' */

    /* Switch: '<S5>/Switch69' incorporates:
     *  Constant: '<S547>/Calib'
     */
    if (KeSSDR_b_Ovrd_Rdy4ShtDwn_OnboardPP1)
    {
        /* Switch: '<S5>/Switch69' incorporates:
         *  Constant: '<S551>/Calib'
         *  Inport: '<Root>/VeVTLR_b_Rdy4ShtDwn_OnboardPP1'
         */
        VeSSDI_b_Rdy4ShtDwn_OnboardPP1 = KeSSDR_b_Rdy4ShtDwn_OnboardPP1;
    }

    /* End of Switch: '<S5>/Switch69' */

    /* Switch: '<S5>/Switch70' incorporates:
     *  Constant: '<S548>/Calib'
     */
    if (KeSSDR_b_Ovrd_Rdy4ShtDwn_OnboardPP2)
    {
        /* Switch: '<S5>/Switch70' incorporates:
         *  Constant: '<S552>/Calib'
         *  Inport: '<Root>/VeVTLR_b_Rdy4ShtDwn_OnboardPP2'
         */
        VeSSDI_b_Rdy4ShtDwn_OnboardPP2 = KeSSDR_b_Rdy4ShtDwn_OnboardPP2;
    }

    /* End of Switch: '<S5>/Switch70' */

    /* Switch: '<S5>/Switch71' incorporates:
     *  Constant: '<S549>/Calib'
     */
    if (KeSSDR_b_Ovrd_HVFltStpChrg)
    {
        /* Switch: '<S5>/Switch71' incorporates:
         *  Constant: '<S553>/Calib'
         *  Inport: '<Root>/VeHPMR_b_HVFltStpChrg'
         */
        VeSSDI_b_HVFltStpChrg = KeSSDR_b_HVFltStpChrg;
    }

    /* End of Switch: '<S5>/Switch71' */

    /* Switch: '<S5>/Switch72' incorporates:
     *  Constant: '<S550>/Calib'
     */
    if (KeSSDR_b_OvrdInFieldMode)
    {
        /* Switch: '<S5>/Switch72' incorporates:
         *  Constant: '<S554>/Calib'
         *  Inport: '<Root>/VePLTR_b_InFieldMode'
         */
        VeSSDI_b_InFieldMode = KeSSDR_b_InFieldMode;
    }

    /* End of Switch: '<S5>/Switch72' */

    /* Switch: '<S5>/Switch73' incorporates:
     *  Constant: '<S500>/Calib'
     */
    if (KeSSDR_b_Ovrd_Rdy4Shtdwn_VDVR)
    {
        /* Switch: '<S5>/Switch73' incorporates:
         *  Constant: '<S515>/Calib'
         *  Inport: '<Root>/VeVDVR_b_Rdy4ShtDwn'
         */
        VeSSDI_b_Rdy4ShtDwn_VDVR = KeSSDR_b_Rdy4Shtdwn_VDVR;
    }

    /* End of Switch: '<S5>/Switch73' */

    /* Switch: '<S5>/Switch74' incorporates:
     *  Constant: '<S501>/Calib'
     */
    if (KeSSDR_b_OvrdAuxLoadOffReq)
    {
        /* Switch: '<S5>/Switch74' incorporates:
         *  Constant: '<S504>/Calib'
         *  Inport: '<Root>/VeBPCR_b_HV_AuxLoadOffReq'
         */
        VeSSDI_b_HV_AuxLoadOffReq = KeSSDR_b_AuxLoadOffReq;
    }

    /* End of Switch: '<S5>/Switch74' */

    /* Switch: '<S5>/Switch75' incorporates:
     *  Constant: '<S502>/Calib'
     */
    if (KeSSDR_b_OvrdHybSysSt)
    {
        /* Switch: '<S5>/Switch75' incorporates:
         *  Constant: '<S503>/Calib'
         *  Inport: '<Root>/VeHPMR_e_HybSysSt'
         */
        VeSSDI_e_HybSysSt = KeSSDR_e_HybSysSt;
    }

    /* End of Switch: '<S5>/Switch75' */

    /* Switch: '<S5>/Switch28' incorporates:
     *  Constant: '<S477>/Calib'
     */
    if (KeSSDR_b_OvrdPerWup12VChg)
    {
        /* Switch: '<S5>/Switch28' incorporates:
         *  Constant: '<S508>/Calib'
         *  Inport: '<Root>/VeBPCR_b_HVBatPerWU12VChrg'
         */
        VeSSDI_b_HVBatPerWU12VChrg = KeSSDR_b_PerWup12VChg;
    }

    /* End of Switch: '<S5>/Switch28' */

    /* Switch: '<S5>/Switch29' incorporates:
     *  Constant: '<S478>/Calib'
     */
    if (KeSSDR_b_OvrdPerWupThrml)
    {
        /* Switch: '<S5>/Switch29' incorporates:
         *  Constant: '<S510>/Calib'
         *  Inport: '<Root>/VeBPCR_b_HVBatPerWUThermal'
         */
        VeSSDI_b_HVBatPerWUThermal = KeSSDR_b_PerWupThrml;
    }

    /* End of Switch: '<S5>/Switch29' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SSDC_DtrmSysState'
     */
    /* Outputs for Atomic SubSystem: '<S145>/EdgeRising' */
    /* Logic: '<S294>/OR1' incorporates:
     *  UnitDelay: '<S294>/Unit Delay'
     */
    rtb_OR1_dn = !SSDR_ac_DW.UnitDelay_DSTATE_ds;

    /* Update for UnitDelay: '<S294>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_ds = VeSSDI_b_UnintendedShtdwnOcc;

    /* End of Outputs for SubSystem: '<S145>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S146>/EdgeFalling2' */
    /* Outputs for Atomic SubSystem: '<S146>/EdgeFalling1' */
    /* Outputs for Atomic SubSystem: '<S146>/EdgeFalling' */
    /* Outputs for Atomic SubSystem: '<S147>/EdgeFalling' */
    /* Outputs for Atomic SubSystem: '<S142>/EdgeFalling' */
    /* Outputs for Atomic SubSystem: '<S148>/EdgeFalling' */
    /* Outputs for Atomic SubSystem: '<S149>/EdgeFalling' */
    /* Outputs for Atomic SubSystem: '<S144>/EdgeFalling1' */
    /* Outputs for Atomic SubSystem: '<S143>/EdgeFalling' */
    /* Outputs for Atomic SubSystem: '<S145>/EdgeFalling' */
    /* Logic: '<S293>/OR1' incorporates:
     *  Logic: '<S239>/OR1'
     *  Logic: '<S267>/OR1'
     *  Logic: '<S282>/OR1'
     *  Logic: '<S328>/OR1'
     *  Logic: '<S329>/OR1'
     *  Logic: '<S330>/OR1'
     *  Logic: '<S343>/OR1'
     *  Logic: '<S346>/OR1'
     *  Logic: '<S350>/OR1'
     */
    rtb_AND_c = !VeSSDI_b_UnintendedShtdwnOcc;

    /* End of Outputs for SubSystem: '<S143>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S144>/EdgeFalling1' */
    /* End of Outputs for SubSystem: '<S149>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S148>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S142>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S147>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S146>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S146>/EdgeFalling1' */
    /* End of Outputs for SubSystem: '<S146>/EdgeFalling2' */

    /* Logic: '<S293>/AND' incorporates:
     *  Logic: '<S293>/OR1'
     *  UnitDelay: '<S293>/Unit Delay'
     */
    rtb_AND_df = (rtb_AND_c && (SSDR_ac_DW.UnitDelay_DSTATE_ln));

    /* Update for UnitDelay: '<S293>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_ln = VeSSDI_b_UnintendedShtdwnOcc;

    /* End of Outputs for SubSystem: '<S145>/EdgeFalling' */

    /* Logic: '<S36>/Logical7' incorporates:
     *  Constant: '<S301>/Constant'
     *  Constant: '<S305>/Constant'
     *  Constant: '<S306>/Constant'
     *  Constant: '<S308>/Constant'
     *  Constant: '<S309>/Constant'
     *  Constant: '<S310>/Constant'
     *  Constant: '<S311>/Constant'
     *  Constant: '<S312>/Constant'
     *  Logic: '<S145>/Logical12'
     *  Logic: '<S145>/Logical5'
     *  Logic: '<S145>/Logical6'
     *  Logic: '<S145>/Logical7'
     *  Logic: '<S145>/Logical8'
     *  Logic: '<S145>/Logical9'
     *  RelationalOperator: '<S145>/Comparison10'
     *  RelationalOperator: '<S145>/Comparison12'
     *  RelationalOperator: '<S145>/Comparison13'
     *  RelationalOperator: '<S145>/Comparison14'
     *  RelationalOperator: '<S145>/Comparison15'
     *  RelationalOperator: '<S145>/Comparison16'
     *  RelationalOperator: '<S145>/Comparison17'
     *  RelationalOperator: '<S145>/Comparison18'
     *  RelationalOperator: '<S145>/Comparison19'
     *  UnitDelay: '<S145>/Unit Delay3'
     *  UnitDelay: '<S145>/Unit Delay4'
     *  UnitDelay: '<S145>/Unit Delay7'
     *  UnitDelay: '<S145>/Unit Delay8'
     *  UnitDelay: '<S145>/Unit Delay9'
     */
    rtb_VeSSDC_b_ShtDwnPrplsnFlg = ((((SSDR_ac_DW.UnitDelay3_DSTATE_o !=
        VeSSDI_e_PMM_PowerMode) && (((uint32)VeSSDI_e_PMM_PowerMode) !=
        CePMDR_e_PowerMode_Off)) && ((((((uint32)SSDR_ac_DW.UnitDelay7_DSTATE_a)
        == CePMDR_e_PowerMode_Off) && (((uint32)VeSSDI_e_PMM_PowerMode) !=
        CePMDR_e_PowerMode_Off)) || ((((uint32)SSDR_ac_DW.UnitDelay8_DSTATE) ==
        CePMDR_e_PowerMode_Acc) && ((((uint32)VeSSDI_e_PMM_PowerMode) ==
        CePMDR_e_PowerMode_Run) || (((uint32)VeSSDI_e_PMM_PowerMode) ==
        CePMDR_e_PowerMode_Crank)))) || ((((uint32)SSDR_ac_DW.UnitDelay9_DSTATE)
        == CePMDR_e_PowerMode_Run) && (((uint32)VeSSDI_e_PMM_PowerMode) ==
        CePMDR_e_PowerMode_Crank)))) && (SSDR_ac_DW.UnitDelay4_DSTATE));

    /* Outputs for Atomic SubSystem: '<S145>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S145>/EdgeRising' */
    /* Logic: '<S327>/OR1' incorporates:
     *  Logic: '<S145>/Logical2'
     *  Logic: '<S294>/AND'
     *  Logic: '<S327>/NOT'
     *  Logic: '<S327>/OR'
     *  UnitDelay: '<S145>/Unit Delay4'
     *  UnitDelay: '<S327>/Unit Delay'
     */
    SSDR_ac_DW.UnitDelay4_DSTATE = (((VeSSDI_b_UnintendedShtdwnOcc) &&
        rtb_OR1_dn) || (((!rtb_AND_df) && (!rtb_VeSSDC_b_ShtDwnPrplsnFlg)) &&
                        (SSDR_ac_DW.UnitDelay_DSTATE_c4)));

    /* End of Outputs for SubSystem: '<S145>/EdgeRising' */

    /* Update for UnitDelay: '<S327>/Unit Delay' incorporates:
     *  UnitDelay: '<S145>/Unit Delay4'
     */
    SSDR_ac_DW.UnitDelay_DSTATE_c4 = SSDR_ac_DW.UnitDelay4_DSTATE;

    /* End of Outputs for SubSystem: '<S145>/Signal Latch On With Reset' */

    /* Switch: '<S320>/Switch1' incorporates:
     *  Constant: '<S295>/Constant'
     *  Constant: '<S296>/Constant'
     *  Constant: '<S299>/Constant'
     *  Constant: '<S303>/Constant'
     *  Constant: '<S304>/Constant'
     *  Constant: '<S307>/Constant'
     *  Constant: '<S313>/Constant'
     *  Constant: '<S314>/Constant'
     *  Constant: '<S315>/Constant'
     *  Constant: '<S318>/Constant'
     *  Constant: '<S319>/Constant'
     *  Logic: '<S145>/Logical'
     *  Logic: '<S145>/Logical1'
     *  Logic: '<S145>/Logical3'
     *  Logic: '<S145>/Logical4'
     *  RelationalOperator: '<S145>/Comparison1'
     *  RelationalOperator: '<S145>/Comparison11'
     *  RelationalOperator: '<S145>/Comparison2'
     *  RelationalOperator: '<S145>/Comparison3'
     *  RelationalOperator: '<S145>/Comparison4'
     *  RelationalOperator: '<S145>/Comparison5'
     *  RelationalOperator: '<S145>/Comparison6'
     *  RelationalOperator: '<S145>/Comparison7'
     *  RelationalOperator: '<S145>/Comparison8'
     *  RelationalOperator: '<S145>/Comparison9'
     *  Switch: '<S321>/Switch1'
     *  Switch: '<S322>/Switch1'
     *  Switch: '<S323>/Switch1'
     *  Switch: '<S324>/Switch1'
     *  Switch: '<S326>/Switch1'
     *  UnitDelay: '<S145>/Unit Delay'
     *  UnitDelay: '<S145>/Unit Delay1'
     *  UnitDelay: '<S145>/Unit Delay2'
     *  UnitDelay: '<S145>/Unit Delay5'
     *  UnitDelay: '<S145>/Unit Delay6'
     */
    if (((uint32)VeSSDI_e_PMM_PowerMode) == CePMDR_e_PowerMode_Off)
    {
        SSDR_ac_DW.UnitDelay1_DSTATE_d = CeSSDR_e_KeyOff;
    }
    else if (((uint32)VeSSDI_e_PMM_PowerMode) == CePMDR_e_PowerMode_Crank)
    {
        /* Switch: '<S322>/Switch1' incorporates:
         *  Constant: '<S316>/Constant'
         *  Switch: '<S320>/Switch1'
         *  UnitDelay: '<S145>/Unit Delay1'
         */
        SSDR_ac_DW.UnitDelay1_DSTATE_d = CeSSDR_e_KeyCrank;
    }
    else if ((((uint32)SSDR_ac_DW.UnitDelay_DSTATE_cs) ==
              CePMDR_e_PowerMode_Crank) && (((uint32)VeSSDI_e_PMM_PowerMode) ==
              CePMDR_e_PowerMode_Run))
    {
        /* Switch: '<S323>/Switch1' incorporates:
         *  Constant: '<S317>/Constant'
         *  Switch: '<S320>/Switch1'
         *  Switch: '<S322>/Switch1'
         *  UnitDelay: '<S145>/Unit Delay1'
         */
        SSDR_ac_DW.UnitDelay1_DSTATE_d = CeSSDR_e_KeyPostCrnk;
    }
    else if ((((uint32)SSDR_ac_DW.UnitDelay5_DSTATE_i) == CePMDR_e_PowerMode_Run)
             && (((uint32)VeSSDI_e_PMM_PowerMode) == CePMDR_e_PowerMode_Acc))
    {
        /* Switch: '<S321>/Switch1' incorporates:
         *  Constant: '<S298>/Constant'
         *  Switch: '<S320>/Switch1'
         *  Switch: '<S322>/Switch1'
         *  Switch: '<S323>/Switch1'
         *  UnitDelay: '<S145>/Unit Delay1'
         */
        SSDR_ac_DW.UnitDelay1_DSTATE_d = CeSSDR_e_KeyPostRunAccy;
    }
    else if ((((uint32)VeSSDI_e_PMM_PowerMode) == CePMDR_e_PowerMode_Run) &&
             (((uint32)SSDR_ac_DW.UnitDelay2_DSTATE_h) != CeSSDR_e_KeyPostCrnk))
    {
        /* Switch: '<S324>/Switch1' incorporates:
         *  Constant: '<S297>/Constant'
         *  Switch: '<S320>/Switch1'
         *  Switch: '<S321>/Switch1'
         *  Switch: '<S322>/Switch1'
         *  Switch: '<S323>/Switch1'
         *  UnitDelay: '<S145>/Unit Delay1'
         */
        SSDR_ac_DW.UnitDelay1_DSTATE_d = CeSSDR_e_KeyRun;
    }
    else
    {
        if ((((uint32)VeSSDI_e_PMM_PowerMode) == CePMDR_e_PowerMode_Acc) &&
                (((uint32)SSDR_ac_DW.UnitDelay6_DSTATE_f) !=
                 CeSSDR_e_KeyPostRunAccy))
        {
            /* Switch: '<S326>/Switch1' incorporates:
             *  Constant: '<S302>/Constant'
             *  Switch: '<S320>/Switch1'
             *  Switch: '<S321>/Switch1'
             *  Switch: '<S322>/Switch1'
             *  Switch: '<S323>/Switch1'
             *  Switch: '<S324>/Switch1'
             *  UnitDelay: '<S145>/Unit Delay1'
             */
            SSDR_ac_DW.UnitDelay1_DSTATE_d = CeSSDR_e_KeyAccy;
        }
    }

    /* End of Switch: '<S320>/Switch1' */

    /* Switch: '<S325>/Switch1' incorporates:
     *  UnitDelay: '<S145>/Unit Delay4'
     */
    if (SSDR_ac_DW.UnitDelay4_DSTATE)
    {
        /* Switch: '<S325>/Switch1' incorporates:
         *  Constant: '<S300>/Constant'
         */
        Switch1_h = CeSSDR_e_KeyOff;
    }
    else
    {
        /* Switch: '<S325>/Switch1' incorporates:
         *  Switch: '<S320>/Switch1'
         *  UnitDelay: '<S145>/Unit Delay1'
         */
        Switch1_h = SSDR_ac_DW.UnitDelay1_DSTATE_d;
    }

    /* End of Switch: '<S325>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S143>/EdgeRising' */
    /* Logic: '<S268>/OR1' incorporates:
     *  UnitDelay: '<S268>/Unit Delay'
     */
    rtb_OR1_dn = !SSDR_ac_DW.UnitDelay_DSTATE_lm;

    /* Update for UnitDelay: '<S268>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_lm = VeSSDI_b_UnintendedShtdwnOcc;

    /* End of Outputs for SubSystem: '<S143>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S143>/EdgeFalling' */
    /* Logic: '<S267>/AND' incorporates:
     *  UnitDelay: '<S267>/Unit Delay'
     */
    rtb_AND_la = (rtb_AND_c && (SSDR_ac_DW.UnitDelay_DSTATE_mz));

    /* Update for UnitDelay: '<S267>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_mz = VeSSDI_b_UnintendedShtdwnOcc;

    /* End of Outputs for SubSystem: '<S143>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S143>/EdgeRising1' */
    /* UnitDelay: '<S177>/Unit Delay' incorporates:
     *  UnitDelay: '<S269>/Unit Delay'
     */
    rtb_UnitDelay_gw = SSDR_ac_DW.UnitDelay_DSTATE_oe;

    /* Update for UnitDelay: '<S269>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_oe = VeSSDI_b_SecureConEst;

    /* End of Outputs for SubSystem: '<S143>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S142>/Signal Latch On With Reset4' */
    /* Logic: '<S143>/Logical13' incorporates:
     *  Logic: '<S142>/Logical4'
     *  Logic: '<S261>/NOT'
     */
    rtb_AND_df = !VeSSDI_b_RmtStartActv;

    /* End of Outputs for SubSystem: '<S142>/Signal Latch On With Reset4' */

    /* Outputs for Atomic SubSystem: '<S143>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S143>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S143>/EdgeRising1' */
    /* Logic: '<S281>/OR1' incorporates:
     *  Constant: '<S271>/Constant'
     *  Constant: '<S273>/Constant'
     *  Constant: '<S274>/Constant'
     *  Logic: '<S143>/Logical10'
     *  Logic: '<S143>/Logical11'
     *  Logic: '<S143>/Logical12'
     *  Logic: '<S143>/Logical13'
     *  Logic: '<S143>/Logical15'
     *  Logic: '<S143>/Logical16'
     *  Logic: '<S143>/Logical21'
     *  Logic: '<S268>/AND'
     *  Logic: '<S269>/AND'
     *  Logic: '<S269>/OR1'
     *  Logic: '<S281>/NOT'
     *  Logic: '<S281>/OR'
     *  RelationalOperator: '<S143>/Comparison10'
     *  RelationalOperator: '<S143>/Comparison11'
     *  RelationalOperator: '<S143>/Comparison12'
     *  RelationalOperator: '<S143>/Comparison13'
     *  RelationalOperator: '<S143>/Comparison14'
     *  RelationalOperator: '<S143>/Comparison15'
     *  RelationalOperator: '<S143>/Comparison16'
     *  RelationalOperator: '<S143>/Comparison9'
     *  Switch: '<S5>/Switch1'
     *  UnitDelay: '<S143>/Unit Delay'
     *  UnitDelay: '<S143>/Unit Delay1'
     *  UnitDelay: '<S143>/Unit Delay3'
     *  UnitDelay: '<S143>/Unit Delay4'
     *  UnitDelay: '<S143>/Unit Delay5'
     *  UnitDelay: '<S143>/Unit Delay6'
     *  UnitDelay: '<S281>/Unit Delay'
     */
    SSDR_ac_DW.UnitDelay_DSTATE_h = (((VeSSDI_b_UnintendedShtdwnOcc) &&
        rtb_OR1_dn) || (((!rtb_AND_la) && ((!SSDR_ac_DW.UnitDelay_DSTATE_h) ||
        ((((((SSDR_ac_DW.UnitDelay1_DSTATE_lf == VeSSDI_e_ChargingLevel) &&
             ((SSDR_ac_DW.UnitDelay3_DSTATE_pd == VeSSDI_e_PMM_PowerMode) ||
              (((uint32)VeSSDI_e_PMM_PowerMode) == CePMDR_e_PowerMode_Off))) &&
            ((SSDR_ac_DW.UnitDelay4_DSTATE_k == VeSSDI_b_RmtStartActv) ||
             rtb_AND_df)) && ((SSDR_ac_DW.UnitDelay5_DSTATE_e ==
        VeSSDI_e_InvOprStat) || (((uint32)VeSSDI_e_InvOprStat) ==
        CePLTR_e_NoPlgIn_Tools))) && ((SSDR_ac_DW.UnitDelay6_DSTATE_d ==
        VeSSDI_e_V2GOprStat) || (((uint32)VeSSDI_e_V2GOprStat) ==
        CePLTR_e_NoPlgIn))) && ((!VeSSDI_b_SecureConEst) || rtb_UnitDelay_gw))))
                        && (SSDR_ac_DW.UnitDelay_DSTATE_pc)));

    /* End of Outputs for SubSystem: '<S143>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S143>/EdgeRising' */

    /* Update for UnitDelay: '<S281>/Unit Delay' incorporates:
     *  UnitDelay: '<S143>/Unit Delay'
     */
    SSDR_ac_DW.UnitDelay_DSTATE_pc = SSDR_ac_DW.UnitDelay_DSTATE_h;

    /* End of Outputs for SubSystem: '<S143>/Signal Latch On With Reset' */

    /* Switch: '<S277>/Switch1' incorporates:
     *  Constant: '<S270>/Constant'
     *  Logic: '<S143>/Logical3'
     *  Logic: '<S143>/Logical8'
     *  Switch: '<S278>/Switch1'
     *  Switch: '<S280>/Switch1'
     *  UnitDelay: '<S143>/Unit Delay2'
     */
    if (!VeSSDI_b_PluggedIn)
    {
        SSDR_ac_DW.UnitDelay2_DSTATE_k = CeSSDR_e_NotPlgdIn;
    }
    else if ((VeSSDI_b_PluggedIn) && (VeSSDI_b_OBCRRdy4ShtDwn))
    {
        /* Switch: '<S278>/Switch1' incorporates:
         *  Constant: '<S275>/Constant'
         *  Switch: '<S277>/Switch1'
         *  UnitDelay: '<S143>/Unit Delay2'
         */
        SSDR_ac_DW.UnitDelay2_DSTATE_k = CeSSDR_e_PlgIn_NOOP;
    }
    else
    {
        if (VeSSDI_b_PluggedIn)
        {
            /* Switch: '<S280>/Switch1' incorporates:
             *  Constant: '<S276>/Constant'
             *  Switch: '<S277>/Switch1'
             *  Switch: '<S278>/Switch1'
             *  UnitDelay: '<S143>/Unit Delay2'
             */
            SSDR_ac_DW.UnitDelay2_DSTATE_k = CeSSDR_e_PlgIn_HVBattChrg;
        }
    }

    /* End of Switch: '<S277>/Switch1' */

    /* Switch: '<S279>/Switch1' incorporates:
     *  UnitDelay: '<S143>/Unit Delay'
     */
    if (SSDR_ac_DW.UnitDelay_DSTATE_h)
    {
        /* Switch: '<S279>/Switch1' incorporates:
         *  Constant: '<S272>/Constant'
         */
        rtb_Switch1_e = CeSSDR_e_NotPlgdIn;
    }
    else
    {
        /* Switch: '<S279>/Switch1' incorporates:
         *  Switch: '<S277>/Switch1'
         *  UnitDelay: '<S143>/Unit Delay2'
         */
        rtb_Switch1_e = SSDR_ac_DW.UnitDelay2_DSTATE_k;
    }

    /* End of Switch: '<S279>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S144>/EdgeRising1' */
    /* Logic: '<S283>/OR1' incorporates:
     *  UnitDelay: '<S283>/Unit Delay'
     */
    rtb_OR1_dn = !SSDR_ac_DW.UnitDelay_DSTATE_dd;

    /* Update for UnitDelay: '<S283>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_dd = VeSSDI_b_UnintendedShtdwnOcc;

    /* End of Outputs for SubSystem: '<S144>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S144>/EdgeFalling1' */
    /* Logic: '<S282>/AND' incorporates:
     *  UnitDelay: '<S282>/Unit Delay'
     */
    rtb_AND_la = (rtb_AND_c && (SSDR_ac_DW.UnitDelay_DSTATE_of));

    /* Update for UnitDelay: '<S282>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_of = VeSSDI_b_UnintendedShtdwnOcc;

    /* End of Outputs for SubSystem: '<S144>/EdgeFalling1' */

    /* UnitDelay: '<S144>/Unit Delay3' */
    rtb_UnitDelay3_n = SSDR_ac_DW.UnitDelay3_DSTATE_p;

    /* Logic: '<S144>/Logical2' incorporates:
     *  UnitDelay: '<S144>/Unit Delay3'
     */
    SSDR_ac_DW.UnitDelay3_DSTATE_p = ((VeSSDI_b_OnboardPP1_Dtctd) ||
        (VeSSDI_b_OnboardPP2_Dtctd));

    /* Logic: '<S144>/Logical4' incorporates:
     *  RelationalOperator: '<S144>/Comparison1'
     *  UnitDelay: '<S144>/Unit Delay2'
     *  UnitDelay: '<S144>/Unit Delay3'
     */
    VeSSDR_b_InvRstCond = ((SSDR_ac_DW.UnitDelay2_DSTATE_l) && (rtb_UnitDelay3_n
                            != SSDR_ac_DW.UnitDelay3_DSTATE_p));

    /* Outputs for Atomic SubSystem: '<S144>/Signal Latch On With Reset1' */
    /* Outputs for Atomic SubSystem: '<S144>/EdgeRising1' */
    /* Logic: '<S292>/OR1' incorporates:
     *  Logic: '<S144>/Logical1'
     *  Logic: '<S283>/AND'
     *  Logic: '<S292>/NOT'
     *  Logic: '<S292>/OR'
     *  UnitDelay: '<S292>/Unit Delay'
     */
    VeSSDR_b_RstInvOpr = (((VeSSDI_b_UnintendedShtdwnOcc) && rtb_OR1_dn) || ((((
        !rtb_AND_la) && (!VeSSDR_b_InvRstCond)) &&
                            (!rtb_VeSSDC_b_ShtDwnPrplsnFlg)) &&
                           (VeSSDR_b_RstInvOpr)));

    /* End of Outputs for SubSystem: '<S144>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S144>/Signal Latch On With Reset1' */

    /* Switch: '<S289>/Switch1' incorporates:
     *  UnitDelay: '<S144>/Unit Delay3'
     */
    if (SSDR_ac_DW.UnitDelay3_DSTATE_p)
    {
        /* Switch: '<S290>/Switch1' incorporates:
         *  Logic: '<S144>/Logical3'
         *  Logic: '<S144>/Logical6'
         *  Logic: '<S144>/Logical8'
         */
        if (((VeSSDI_b_OnboardPP1_Dtctd) && (VeSSDI_b_Rdy4ShtDwn_OnboardPP1)) &&
            ((VeSSDI_b_OnboardPP2_Dtctd) && (VeSSDI_b_Rdy4ShtDwn_OnboardPP2)))
        {
            /* Switch: '<S289>/Switch1' incorporates:
             *  Constant: '<S287>/Constant'
             */
            VeSSDC_e_InvOprStat = CeSSDR_e_PlgIn_NoOpr;
        }
        else
        {
            /* Switch: '<S289>/Switch1' incorporates:
             *  Constant: '<S288>/Constant'
             */
            VeSSDC_e_InvOprStat = CeSSDR_e_PlgIn_InvOpr_Tools;
        }

        /* End of Switch: '<S290>/Switch1' */
    }
    else
    {
        /* Switch: '<S289>/Switch1' incorporates:
         *  Constant: '<S285>/Constant'
         */
        VeSSDC_e_InvOprStat = CeSSDR_e_NoPlgIn_Tools;
    }

    /* End of Switch: '<S289>/Switch1' */

    /* Switch: '<S291>/Switch1' */
    if (VeSSDR_b_RstInvOpr)
    {
        /* RelationalOperator: '<S150>/Equal3' incorporates:
         *  Constant: '<S286>/Constant'
         *  Switch: '<S291>/Switch1'
         */
        VeSSDR_e_InvOprStat = CeSSDR_e_NoPlgIn_Tools;
    }
    else
    {
        /* RelationalOperator: '<S150>/Equal3' incorporates:
         *  Switch: '<S289>/Switch1'
         *  Switch: '<S291>/Switch1'
         */
        VeSSDR_e_InvOprStat = VeSSDC_e_InvOprStat;
    }

    /* End of Switch: '<S291>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S149>/EdgeRising' */
    /* Logic: '<S351>/OR1' incorporates:
     *  UnitDelay: '<S351>/Unit Delay'
     */
    rtb_OR1_dn = !SSDR_ac_DW.UnitDelay_DSTATE_l;

    /* Update for UnitDelay: '<S351>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_l = VeSSDI_b_UnintendedShtdwnOcc;

    /* End of Outputs for SubSystem: '<S149>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S149>/EdgeFalling' */
    /* Logic: '<S350>/AND' incorporates:
     *  UnitDelay: '<S350>/Unit Delay'
     */
    rtb_AND_la = (rtb_AND_c && (SSDR_ac_DW.UnitDelay_DSTATE_hv));

    /* Update for UnitDelay: '<S350>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_hv = VeSSDI_b_UnintendedShtdwnOcc;

    /* End of Outputs for SubSystem: '<S149>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S149>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S149>/EdgeRising' */
    /* Logic: '<S361>/OR1' incorporates:
     *  Logic: '<S149>/Logical1'
     *  Logic: '<S149>/Logical10'
     *  Logic: '<S351>/AND'
     *  Logic: '<S361>/NOT'
     *  Logic: '<S361>/OR'
     *  RelationalOperator: '<S149>/Comparison9'
     *  UnitDelay: '<S149>/Unit Delay'
     *  UnitDelay: '<S149>/Unit Delay1'
     *  UnitDelay: '<S361>/Unit Delay'
     */
    SSDR_ac_DW.UnitDelay_DSTATE_fu = (((VeSSDI_b_UnintendedShtdwnOcc) &&
        rtb_OR1_dn) || ((((!rtb_AND_la) && ((!SSDR_ac_DW.UnitDelay_DSTATE_fu) ||
        (SSDR_ac_DW.UnitDelay1_DSTATE_b == VeSSDI_b_SecureConnV2L))) &&
                         (!rtb_VeSSDC_b_ShtDwnPrplsnFlg)) &&
                        (SSDR_ac_DW.UnitDelay_DSTATE_c0)));

    /* End of Outputs for SubSystem: '<S149>/EdgeRising' */

    /* Update for UnitDelay: '<S361>/Unit Delay' incorporates:
     *  UnitDelay: '<S149>/Unit Delay'
     */
    SSDR_ac_DW.UnitDelay_DSTATE_c0 = SSDR_ac_DW.UnitDelay_DSTATE_fu;

    /* End of Outputs for SubSystem: '<S149>/Signal Latch On With Reset' */

    /* Switch: '<S357>/Switch1' incorporates:
     *  Constant: '<S353>/Constant'
     *  Logic: '<S149>/Logical3'
     *  Logic: '<S149>/Logical8'
     *  Logic: '<S149>/OR'
     *  Switch: '<S358>/Switch1'
     *  Switch: '<S360>/Switch1'
     *  UnitDelay: '<S149>/Unit Delay2'
     */
    if (!VeSSDI_b_SecureConnV2L)
    {
        SSDR_ac_DW.UnitDelay2_DSTATE_c0 = CeSSDR_e_NoPlgIn;
    }
    else if ((VeSSDI_b_SecureConnV2L) && ((VeSSDI_b_Rdy4ShtDwn_VTLR) ||
              (VeSSDI_b_Rdy4ShtDwn_VDVR)))
    {
        /* Switch: '<S358>/Switch1' incorporates:
         *  Constant: '<S355>/Constant'
         *  Switch: '<S357>/Switch1'
         *  UnitDelay: '<S149>/Unit Delay2'
         */
        SSDR_ac_DW.UnitDelay2_DSTATE_c0 = CeSSDR_e_PlgIn_NOOP_V2G;
    }
    else
    {
        if (VeSSDI_b_SecureConnV2L)
        {
            /* Switch: '<S360>/Switch1' incorporates:
             *  Constant: '<S356>/Constant'
             *  Switch: '<S357>/Switch1'
             *  Switch: '<S358>/Switch1'
             *  UnitDelay: '<S149>/Unit Delay2'
             */
            SSDR_ac_DW.UnitDelay2_DSTATE_c0 = CeSSDR_e_PlgIn_V2GOpr;
        }
    }

    /* End of Switch: '<S357>/Switch1' */

    /* Switch: '<S359>/Switch1' incorporates:
     *  UnitDelay: '<S149>/Unit Delay'
     */
    if (SSDR_ac_DW.UnitDelay_DSTATE_fu)
    {
        /* Switch: '<S359>/Switch1' incorporates:
         *  Constant: '<S354>/Constant'
         */
        rtb_Switch1_pa = CeSSDR_e_NoPlgIn;
    }
    else
    {
        /* Switch: '<S359>/Switch1' incorporates:
         *  Switch: '<S357>/Switch1'
         *  UnitDelay: '<S149>/Unit Delay2'
         */
        rtb_Switch1_pa = SSDR_ac_DW.UnitDelay2_DSTATE_c0;
    }

    /* End of Switch: '<S359>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S148>/EdgeRising' */
    /* UnitDelay: '<S177>/Unit Delay' incorporates:
     *  UnitDelay: '<S347>/Unit Delay'
     */
    rtb_UnitDelay_gw = SSDR_ac_DW.UnitDelay_DSTATE_c1k;

    /* Update for UnitDelay: '<S347>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_c1k = VeSSDI_b_UnintendedShtdwnOcc;

    /* End of Outputs for SubSystem: '<S148>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S148>/EdgeFalling' */
    /* Logic: '<S346>/AND' incorporates:
     *  UnitDelay: '<S346>/Unit Delay'
     */
    rtb_OR1_dn = (rtb_AND_c && (SSDR_ac_DW.UnitDelay_DSTATE_g3));

    /* Update for UnitDelay: '<S346>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_g3 = VeSSDI_b_UnintendedShtdwnOcc;

    /* End of Outputs for SubSystem: '<S148>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S148>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S148>/EdgeRising' */
    /* Logic: '<S349>/OR1' incorporates:
     *  Logic: '<S148>/Logical1'
     *  Logic: '<S148>/Logical10'
     *  Logic: '<S148>/Logical2'
     *  Logic: '<S347>/AND'
     *  Logic: '<S347>/OR1'
     *  Logic: '<S349>/NOT'
     *  Logic: '<S349>/OR'
     *  RelationalOperator: '<S148>/Comparison9'
     *  UnitDelay: '<S148>/Unit Delay'
     *  UnitDelay: '<S148>/Unit Delay1'
     *  UnitDelay: '<S349>/Unit Delay'
     */
    SSDR_ac_DW.UnitDelay_DSTATE_j = ((((VeSSDI_b_UnintendedShtdwnOcc) &&
        (!rtb_UnitDelay_gw)) || (VeSSDI_b_THMRRdy4ShtDwn)) || (((!rtb_OR1_dn) &&
        ((!SSDR_ac_DW.UnitDelay_DSTATE_j) || (SSDR_ac_DW.UnitDelay1_DSTATE_f ==
        VeSSDI_b_RmtStartActv))) && (SSDR_ac_DW.UnitDelay_DSTATE_pe)));

    /* End of Outputs for SubSystem: '<S148>/EdgeRising' */

    /* Update for UnitDelay: '<S349>/Unit Delay' incorporates:
     *  UnitDelay: '<S148>/Unit Delay'
     */
    SSDR_ac_DW.UnitDelay_DSTATE_pe = SSDR_ac_DW.UnitDelay_DSTATE_j;

    /* End of Outputs for SubSystem: '<S148>/Signal Latch On With Reset' */

    /* Switch: '<S348>/Switch1' incorporates:
     *  UnitDelay: '<S148>/Unit Delay'
     */
    rtb_OR1_dn = ((!SSDR_ac_DW.UnitDelay_DSTATE_j) && (VeSSDI_b_RmtStartActv));

    /* Outputs for Atomic SubSystem: '<S142>/EdgeRising' */
    /* Logic: '<S240>/OR1' incorporates:
     *  UnitDelay: '<S240>/Unit Delay'
     */
    rtb_AND_la = !SSDR_ac_DW.UnitDelay_DSTATE_nc;

    /* Update for UnitDelay: '<S240>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_nc = VeSSDI_b_UnintendedShtdwnOcc;

    /* End of Outputs for SubSystem: '<S142>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S142>/EdgeFalling' */
    /* Logic: '<S239>/AND' incorporates:
     *  UnitDelay: '<S239>/Unit Delay'
     */
    rtb_UnitDelay3_n = (rtb_AND_c && (SSDR_ac_DW.UnitDelay_DSTATE_og));

    /* Update for UnitDelay: '<S239>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_og = VeSSDI_b_UnintendedShtdwnOcc;

    /* End of Outputs for SubSystem: '<S142>/EdgeFalling' */

    /* UnitDelay: '<S142>/Unit Delay3' */
    rtb_UnitDelay3_e = SSDR_ac_DW.UnitDelay3_DSTATE_k;

    /* Switch: '<S142>/Switch3' incorporates:
     *  Constant: '<S244>/Constant'
     *  Constant: '<S254>/Calib'
     *  RelationalOperator: '<S142>/Comparison1'
     *  Switch: '<S5>/Switch42'
     *  UnitDelay: '<S142>/Unit Delay3'
     */
    if (KeSSDR_b_DrvDoorSelect)
    {
        SSDR_ac_DW.UnitDelay3_DSTATE_k = VeSSDI_b_DrvDoorSts;
    }
    else
    {
        SSDR_ac_DW.UnitDelay3_DSTATE_k = (((uint32)
            VeSSDI_e_LSMDExtReleaseLockReq) == CePLTR_e_Release);
    }

    /* End of Switch: '<S142>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S142>/Signal Latch On With Reset1' */
    /* Outputs for Atomic SubSystem: '<S142>/EdgeRising' */
    /* Logic: '<S258>/OR1' incorporates:
     *  Logic: '<S142>/Logical12'
     *  Logic: '<S142>/Logical7'
     *  Logic: '<S240>/AND'
     *  Logic: '<S258>/NOT'
     *  Logic: '<S258>/OR'
     *  RelationalOperator: '<S142>/Comparison10'
     *  UnitDelay: '<S142>/Unit Delay3'
     *  UnitDelay: '<S142>/Unit Delay4'
     *  UnitDelay: '<S258>/Unit Delay'
     */
    SSDR_ac_DW.UnitDelay4_DSTATE_f = (((VeSSDI_b_UnintendedShtdwnOcc) &&
        rtb_AND_la) || (((!rtb_UnitDelay3_n) && ((rtb_UnitDelay3_e ==
        SSDR_ac_DW.UnitDelay3_DSTATE_k) || (!SSDR_ac_DW.UnitDelay4_DSTATE_f))) &&
                        (SSDR_ac_DW.UnitDelay_DSTATE_go)));

    /* End of Outputs for SubSystem: '<S142>/EdgeRising' */

    /* Update for UnitDelay: '<S258>/Unit Delay' incorporates:
     *  UnitDelay: '<S142>/Unit Delay4'
     */
    SSDR_ac_DW.UnitDelay_DSTATE_go = SSDR_ac_DW.UnitDelay4_DSTATE_f;

    /* End of Outputs for SubSystem: '<S142>/Signal Latch On With Reset1' */

    /* Outputs for Atomic SubSystem: '<S142>/Signal Latch On With Reset' */
    /* Logic: '<S142>/Logical3' incorporates:
     *  Logic: '<S257>/NOT'
     *  UnitDelay: '<S142>/Unit Delay3'
     */
    rtb_AND_la = !SSDR_ac_DW.UnitDelay3_DSTATE_k;

    /* Logic: '<S257>/OR1' incorporates:
     *  Logic: '<S142>/Logical1'
     *  Logic: '<S142>/Logical3'
     *  Logic: '<S257>/OR'
     *  UnitDelay: '<S142>/Unit Delay1'
     *  UnitDelay: '<S257>/Unit Delay'
     */
    SSDR_ac_DW.UnitDelay_DSTATE_fo = (((SSDR_ac_DW.UnitDelay1_DSTATE_n) &&
        rtb_AND_la) || (rtb_AND_la && (SSDR_ac_DW.UnitDelay_DSTATE_fo)));

    /* End of Outputs for SubSystem: '<S142>/Signal Latch On With Reset' */

    /* Logic: '<S142>/Logical10' incorporates:
     *  UnitDelay: '<S142>/Unit Delay3'
     */
    rtb_AND_la = ((SSDR_ac_DW.UnitDelay3_DSTATE_k) ||
                  (SSDR_ac_DW.UnitDelay_DSTATE_fo));

    /* Outputs for Atomic SubSystem: '<S142>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S265>/EdgeRising' */
    /* Logic: '<S266>/AND' incorporates:
     *  Logic: '<S266>/OR1'
     *  UnitDelay: '<S266>/Unit Delay'
     */
    rtb_UnitDelay3_n = (rtb_AND_la && (!SSDR_ac_DW.UnitDelay_DSTATE_eo));

    /* Update for UnitDelay: '<S266>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_eo = rtb_AND_la;

    /* End of Outputs for SubSystem: '<S265>/EdgeRising' */

    /* Logic: '<S265>/OR1' incorporates:
     *  Logic: '<S265>/AND'
     */
    rtb_AND_pa = !rtb_AND_la;

    /* Switch: '<S265>/Switch1' incorporates:
     *  Constant: '<S139>/Calib'
     *  Constant: '<S255>/Calib'
     *  Constant: '<S265>/Constant Value1'
     *  Logic: '<S265>/OR'
     *  Logic: '<S265>/OR1'
     *  MinMax: '<S265>/Minimum'
     *  Sum: '<S265>/Summation'
     *  UnitDelay: '<S265>/Unit Delay'
     */
    if (rtb_AND_pa || rtb_UnitDelay3_n)
    {
        SSDR_ac_DW.UnitDelay_DSTATE_n = 0.0F;
    }
    else
    {
        SSDR_ac_DW.UnitDelay_DSTATE_n = fminf(KeSSDR_t_DDROpnDbncForHV,
            HeSSDR_t_dT + SSDR_ac_DW.UnitDelay_DSTATE_n);
    }

    /* End of Switch: '<S265>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S142>/Stop Watch Reset Enabled1' */
    /* Switch: '<S264>/Switch1' incorporates:
     *  Constant: '<S255>/Calib'
     *  Constant: '<S264>/Constant Value2'
     *  Logic: '<S142>/Logical5'
     *  Logic: '<S264>/Logical5'
     *  Logic: '<S265>/AND'
     *  RelationalOperator: '<S265>/Greater  Than'
     *  Switch: '<S264>/Switch2'
     *  UnitDelay: '<S142>/Unit Delay2'
     *  UnitDelay: '<S264>/Unit Delay'
     *  UnitDelay: '<S265>/Unit Delay'
     */
    if (rtb_AND_pa || (SSDR_ac_DW.UnitDelay_DSTATE_n < KeSSDR_t_DDROpnDbncForHV))
    {
        SSDR_ac_DW.UnitDelay_DSTATE_e = 0.0F;
    }
    else
    {
        if (!SSDR_ac_DW.UnitDelay2_DSTATE_j)
        {
            /* UnitDelay: '<S264>/Unit Delay' incorporates:
             *  Constant: '<S139>/Calib'
             *  Sum: '<S264>/Subtraction'
             *  Switch: '<S264>/Switch2'
             */
            SSDR_ac_DW.UnitDelay_DSTATE_e += HeSSDR_t_dT;
        }
    }

    /* End of Switch: '<S264>/Switch1' */
    /* End of Outputs for SubSystem: '<S142>/Stop Watch Reset Enabled1' */
    /* End of Outputs for SubSystem: '<S142>/Turn On Delay Time' */

    /* RelationalOperator: '<S142>/Comparison5' incorporates:
     *  Constant: '<S256>/Calib'
     *  UnitDelay: '<S142>/Unit Delay2'
     *  UnitDelay: '<S264>/Unit Delay'
     */
    SSDR_ac_DW.UnitDelay2_DSTATE_j = (SSDR_ac_DW.UnitDelay_DSTATE_e >=
        KeSSDR_t_DDROpnSysWupTmr);

    /* Outputs for Atomic SubSystem: '<S142>/Signal Latch On With Reset2' */
    /* Logic: '<S259>/OR1' incorporates:
     *  Constant: '<S241>/Constant'
     *  Constant: '<S247>/Constant'
     *  Constant: '<S250>/Constant'
     *  Logic: '<S142>/Logical9'
     *  Logic: '<S259>/NOT'
     *  Logic: '<S259>/OR'
     *  RelationalOperator: '<S142>/Comparison11'
     *  RelationalOperator: '<S142>/Comparison4'
     *  RelationalOperator: '<S142>/Comparison6'
     *  UnitDelay: '<S142>/Unit Delay5'
     *  UnitDelay: '<S259>/Unit Delay'
     */
    VeSSDI_b_PwrMdOnOff = (((((uint32)VeSSDI_e_PMM_PowerMode) ==
        CePMDR_e_PowerMode_Off) && (((uint32)SSDR_ac_DW.UnitDelay5_DSTATE_d) !=
        CePMDR_e_PowerMode_Off)) || ((((uint32)VeSSDI_e_PMM_PowerMode) ==
        CePMDR_e_PowerMode_Off) && (SSDR_ac_DW.UnitDelay_DSTATE_bk)));

    /* Update for UnitDelay: '<S259>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_bk = VeSSDI_b_PwrMdOnOff;

    /* End of Outputs for SubSystem: '<S142>/Signal Latch On With Reset2' */

    /* Outputs for Atomic SubSystem: '<S142>/Signal Latch On With Reset3' */
    /* Logic: '<S142>/Logical11' incorporates:
     *  Logic: '<S260>/NOT'
     */
    rtb_UnitDelay3_n = !VeSSDI_b_PluggedIn;

    /* Logic: '<S260>/OR1' incorporates:
     *  Logic: '<S142>/Logical11'
     *  Logic: '<S142>/Logical18'
     *  Logic: '<S260>/OR'
     *  UnitDelay: '<S142>/Unit Delay6'
     *  UnitDelay: '<S260>/Unit Delay'
     */
    SSDR_ac_DW.UnitDelay_DSTATE_dh = ((rtb_UnitDelay3_n &&
        (SSDR_ac_DW.UnitDelay6_DSTATE)) || (rtb_UnitDelay3_n &&
        (SSDR_ac_DW.UnitDelay_DSTATE_dh)));

    /* End of Outputs for SubSystem: '<S142>/Signal Latch On With Reset3' */

    /* Switch: '<S142>/Switch1' incorporates:
     *  Constant: '<S253>/Calib'
     */
    VeSSDI_b_PlgInOffOut = ((KeSSDR_b_ChrgPluggedInOvrd) &&
                            (SSDR_ac_DW.UnitDelay_DSTATE_dh));

    /* Outputs for Atomic SubSystem: '<S142>/Signal Latch On With Reset4' */
    /* Logic: '<S261>/OR1' incorporates:
     *  Logic: '<S142>/Logical8'
     *  Logic: '<S261>/OR'
     *  UnitDelay: '<S142>/Unit Delay7'
     *  UnitDelay: '<S261>/Unit Delay'
     */
    VeSSDI_b_RmtStrtOnOff = ((rtb_AND_df && (SSDR_ac_DW.UnitDelay7_DSTATE)) ||
        (rtb_AND_df && (SSDR_ac_DW.UnitDelay_DSTATE_i)));

    /* Update for UnitDelay: '<S261>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_i = VeSSDI_b_RmtStrtOnOff;

    /* End of Outputs for SubSystem: '<S142>/Signal Latch On With Reset4' */

    /* Outputs for Atomic SubSystem: '<S142>/Signal Latch On With Reset5' */
    /* Logic: '<S262>/OR1' incorporates:
     *  Constant: '<S242>/Constant'
     *  Constant: '<S245>/Constant'
     *  Constant: '<S248>/Constant'
     *  Logic: '<S142>/Logical13'
     *  Logic: '<S262>/NOT'
     *  Logic: '<S262>/OR'
     *  RelationalOperator: '<S142>/Comparison13'
     *  RelationalOperator: '<S142>/Comparison2'
     *  RelationalOperator: '<S142>/Comparison8'
     *  UnitDelay: '<S142>/Unit Delay8'
     *  UnitDelay: '<S262>/Unit Delay'
     */
    VeSSDI_b_InvOnOff = (((((uint32)VeSSDI_e_InvOprStat) ==
                           CePLTR_e_NoPlgIn_Tools) && (((uint32)
                            SSDR_ac_DW.UnitDelay8_DSTATE_o) !=
                           CePLTR_e_NoPlgIn_Tools)) || ((((uint32)
                            VeSSDI_e_InvOprStat) == CePLTR_e_NoPlgIn_Tools) &&
                          (VeSSDI_b_InvOnOff)));

    /* End of Outputs for SubSystem: '<S142>/Signal Latch On With Reset5' */

    /* Outputs for Atomic SubSystem: '<S142>/Signal Latch On With Reset6' */
    /* Logic: '<S263>/OR1' incorporates:
     *  Constant: '<S243>/Constant'
     *  Constant: '<S246>/Constant'
     *  Constant: '<S249>/Constant'
     *  Logic: '<S142>/Logical14'
     *  Logic: '<S263>/NOT'
     *  Logic: '<S263>/OR'
     *  RelationalOperator: '<S142>/Comparison14'
     *  RelationalOperator: '<S142>/Comparison3'
     *  RelationalOperator: '<S142>/Comparison9'
     *  UnitDelay: '<S142>/Unit Delay9'
     *  UnitDelay: '<S263>/Unit Delay'
     */
    VeSSDI_b_V2GOnOff = (((((uint32)VeSSDI_e_V2GOprStat) == CePLTR_e_NoPlgIn) &&
                          (((uint32)SSDR_ac_DW.UnitDelay9_DSTATE_j) !=
                           CePLTR_e_NoPlgIn)) || ((((uint32)VeSSDI_e_V2GOprStat)
                           == CePLTR_e_NoPlgIn) && (VeSSDI_b_V2GOnOff)));

    /* End of Outputs for SubSystem: '<S142>/Signal Latch On With Reset6' */

    /* Logic: '<S142>/Logical15' */
    VeSSDI_b_AnyUserIPOnOff = (((((VeSSDI_b_PwrMdOnOff) || (VeSSDI_b_PlgInOffOut))
        || (VeSSDI_b_RmtStrtOnOff)) || (VeSSDI_b_InvOnOff)) ||
        (VeSSDI_b_V2GOnOff));

    /* Logic: '<S142>/Logical16' */
    VeSSDI_b_NoUserInputOnlyDoor = !VeSSDI_b_AnyUserIPOnOff;

    /* Switch: '<S252>/Switch1' incorporates:
     *  UnitDelay: '<S142>/Unit Delay4'
     */
    if (SSDR_ac_DW.UnitDelay4_DSTATE_f)
    {
        /* Switch: '<S252>/Switch1' incorporates:
         *  Constant: '<S142>/FALSE Constant1'
         */
        rtb_AND_df = false;
    }
    else
    {
        /* Switch: '<S252>/Switch1' incorporates:
         *  Logic: '<S142>/Logical17'
         *  Logic: '<S142>/Logical2'
         *  Logic: '<S142>/Logical6'
         *  UnitDelay: '<S142>/Unit Delay2'
         */
        rtb_AND_df = ((rtb_AND_la && (!SSDR_ac_DW.UnitDelay2_DSTATE_j)) &&
                      (VeSSDI_b_NoUserInputOnlyDoor));
    }

    /* End of Switch: '<S252>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S147>/EdgeFalling' */
    /* Logic: '<S343>/AND' incorporates:
     *  UnitDelay: '<S343>/Unit Delay'
     */
    rtb_AND_fw = (rtb_AND_c && (SSDR_ac_DW.UnitDelay_DSTATE_kx));

    /* Update for UnitDelay: '<S343>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_kx = VeSSDI_b_UnintendedShtdwnOcc;

    /* End of Outputs for SubSystem: '<S147>/EdgeFalling' */

    /* UnitDelay: '<S147>/Unit Delay3' */
    rtb_UnitDelay3_o = SSDR_ac_DW.UnitDelay3_DSTATE_j;

    /* Logic: '<S215>/Logical4' incorporates:
     *  Constant: '<S221>/Constant'
     *  Constant: '<S222>/Constant'
     *  Constant: '<S223>/Constant'
     *  RelationalOperator: '<S215>/Comparison1'
     *  RelationalOperator: '<S215>/Comparison2'
     *  RelationalOperator: '<S215>/Comparison4'
     */
    rtb_UnitDelay3_e = (((((uint32)VeSSDI_e_PMM_PowerMode) ==
                          CePMDR_e_PowerMode_Acc) || (((uint32)
                           VeSSDI_e_PMM_PowerMode) == CePMDR_e_PowerMode_Run)) ||
                        (((uint32)VeSSDI_e_PMM_PowerMode) ==
                         CePMDR_e_PowerMode_Crank));

    /* Outputs for Atomic SubSystem: '<S215>/Signal Latch On' */
    /* Logic: '<S229>/OR2' incorporates:
     *  UnitDelay: '<S229>/Unit Delay'
     */
    SSDR_ac_DW.UnitDelay_DSTATE_o4r = (rtb_UnitDelay3_e ||
        (SSDR_ac_DW.UnitDelay_DSTATE_o4r));

    /* End of Outputs for SubSystem: '<S215>/Signal Latch On' */

    /* Logic: '<S215>/Logical9' incorporates:
     *  Logic: '<S215>/Logical7'
     */
    rtb_AND_la = !SSDR_ac_DW.UnitDelay_DSTATE_o4r;

    /* Outputs for Atomic SubSystem: '<S215>/Signal Latch On8' */
    /* Logic: '<S237>/OR2' incorporates:
     *  UnitDelay: '<S237>/Unit Delay'
     */
    SSDR_ac_DW.UnitDelay_DSTATE_im = ((VeSSDI_b_THMRRdy4ShtDwn) ||
        (SSDR_ac_DW.UnitDelay_DSTATE_im));

    /* End of Outputs for SubSystem: '<S215>/Signal Latch On8' */

    /* Outputs for Atomic SubSystem: '<S169>/EdgeRising3' */
    /* Logic: '<S210>/AND' incorporates:
     *  Logic: '<S210>/OR1'
     *  UnitDelay: '<S210>/Unit Delay'
     */
    VeSSDC_b_BSWTmrExpLtchCond = ((VeSSDI_b_BSWTimerExpired) &&
        (!SSDR_ac_DW.UnitDelay_DSTATE_c2));

    /* Update for UnitDelay: '<S210>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_c2 = VeSSDI_b_BSWTimerExpired;

    /* End of Outputs for SubSystem: '<S169>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S167>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S167>/EdgeFalling' */
    /* Logic: '<S171>/OR1' incorporates:
     *  Logic: '<S173>/NOT'
     */
    rtb_UnitDelay3_n = !VeSSDI_b_CntrlrPwrHold;

    /* End of Outputs for SubSystem: '<S167>/Signal Latch On With Reset' */

    /* Logic: '<S171>/AND' incorporates:
     *  Logic: '<S171>/OR1'
     *  UnitDelay: '<S171>/Unit Delay'
     */
    rtb_AND_py = (rtb_UnitDelay3_n && (SSDR_ac_DW.UnitDelay_DSTATE_ps));

    /* Update for UnitDelay: '<S171>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_ps = VeSSDI_b_CntrlrPwrHold;

    /* End of Outputs for SubSystem: '<S167>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S167>/Signal Latch On With Reset' */
    /* Logic: '<S173>/OR1' incorporates:
     *  Logic: '<S173>/OR'
     *  UnitDelay: '<S173>/Unit Delay'
     */
    VeSSDI_b_CntrlrPwrHold_Latch = (rtb_AND_py || (rtb_UnitDelay3_n &&
        (SSDR_ac_DW.UnitDelay_DSTATE_jo)));

    /* Update for UnitDelay: '<S173>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_jo = VeSSDI_b_CntrlrPwrHold_Latch;

    /* End of Outputs for SubSystem: '<S167>/Signal Latch On With Reset' */

    /* Outputs for Atomic SubSystem: '<S169>/Signal Latch On With Reset1' */
    /* Logic: '<S219>/OR1' incorporates:
     *  Logic: '<S219>/NOT'
     *  Logic: '<S219>/OR'
     *  UnitDelay: '<S219>/Unit Delay'
     */
    VeSSDI_b_BSWTimerExpired_LatchedOn = ((VeSSDC_b_BSWTmrExpLtchCond) ||
        ((!VeSSDI_b_CntrlrPwrHold_Latch) && (SSDR_ac_DW.UnitDelay_DSTATE_os)));

    /* Update for UnitDelay: '<S219>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_os = VeSSDI_b_BSWTimerExpired_LatchedOn;

    /* End of Outputs for SubSystem: '<S169>/Signal Latch On With Reset1' */

    /* If: '<S169>/If1' */
    if (VeSSDI_b_BSWTimerExpired_LatchedOn)
    {
        /* Outputs for IfAction SubSystem: '<S169>/PerWU_StoredRsns' incorporates:
         *  ActionPort: '<S216>/Action Port'
         */
        /* Merge: '<S169>/Merge5' incorporates:
         *  DataStoreRead: '<S216>/Data Store Read'
         */
        rtb_UnitDelay3_n = SSDR_ac_DW.NeSSDC_b_HVBatPerWUThermal;

        /* Merge: '<S169>/Merge4' incorporates:
         *  DataStoreRead: '<S216>/Data Store Read1'
         */
        rtb_Merge4 = SSDR_ac_DW.NeSSDC_b_HVBatPerWU12VChrg;

        /* Merge: '<S169>/Merge3' incorporates:
         *  DataStoreRead: '<S216>/Data Store Read2'
         */
        rtb_Merge3 = SSDR_ac_DW.NeSSDC_b_HVBatPerWUSchChrg;

        /* Merge: '<S169>/Merge2' incorporates:
         *  DataStoreRead: '<S216>/Data Store Read3'
         */
        rtb_AND_py = SSDR_ac_DW.NeSSDC_b_HVBatPerWUCabinPre;

        /* End of Outputs for SubSystem: '<S169>/PerWU_StoredRsns' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S169>/NoPerWU_DftlRsns' incorporates:
         *  ActionPort: '<S214>/Action Port'
         */
        /* Merge: '<S169>/Merge5' incorporates:
         *  Constant: '<S214>/FALSE Constant'
         *  SignalConversion generated from: '<S214>/VeSSDC_b_HVBatPerWUThermal_Init'
         */
        rtb_UnitDelay3_n = false;

        /* Merge: '<S169>/Merge4' incorporates:
         *  Constant: '<S214>/FALSE Constant1'
         *  SignalConversion generated from: '<S214>/VeSSDC_b_HVBatPerWU12VChrg_Init'
         */
        rtb_Merge4 = false;

        /* Merge: '<S169>/Merge3' incorporates:
         *  Constant: '<S214>/FALSE Constant2'
         *  SignalConversion generated from: '<S214>/VeSSDC_b_HV_PerWU_SchChrg_Init'
         */
        rtb_Merge3 = false;

        /* Merge: '<S169>/Merge2' incorporates:
         *  Constant: '<S214>/FALSE Constant3'
         *  SignalConversion generated from: '<S214>/VeSSDC_b_HV_PerWU_CabinPre_Init'
         */
        rtb_AND_py = false;

        /* End of Outputs for SubSystem: '<S169>/NoPerWU_DftlRsns' */
    }

    /* End of If: '<S169>/If1' */

    /* Outputs for Atomic SubSystem: '<S168>/Limiter' */
    /* Switch: '<S201>/Switch1' incorporates:
     *  Constant: '<S168>/Constant Value12'
     *  DataTypeConversion: '<S168>/FloatToFix'
     *  RelationalOperator: '<S201>/Relational Operator'
     */
    if (65500 < ((sint32)((uint16)VeSSDI_t_BatPerWU_ThrmlCond_Timer)))
    {
        /* Switch: '<S204>/Switch1' */
        rtb_VeSSDR_K_EncSysState = 65500U;
    }
    else
    {
        /* Switch: '<S204>/Switch1' */
        rtb_VeSSDR_K_EncSysState = (uint16)VeSSDI_t_BatPerWU_ThrmlCond_Timer;
    }

    /* End of Switch: '<S201>/Switch1' */

    /* Switch: '<S201>/Switch' incorporates:
     *  Constant: '<S168>/Constant Value13'
     *  RelationalOperator: '<S201>/Relational Operator1'
     */
    if (((sint32)rtb_VeSSDR_K_EncSysState) > 0)
    {
        /* Switch: '<S201>/Switch' */
        rtb_Switch_d = rtb_VeSSDR_K_EncSysState;
    }
    else
    {
        /* Switch: '<S201>/Switch' */
        rtb_Switch_d = 0U;
    }

    /* End of Switch: '<S201>/Switch' */
    /* End of Outputs for SubSystem: '<S168>/Limiter' */

    /* Outputs for Atomic SubSystem: '<S168>/Protected Division' */
    /* Switch: '<S206>/Switch1' incorporates:
     *  Constant: '<S139>/Calib'
     *  Constant: '<S206>/Constant Value1'
     *  RelationalOperator: '<S206>/Not Equal1'
     */
    if (HeSSDR_t_dT != 0.0F)
    {
        /* Switch: '<S206>/Switch1' incorporates:
         *  Constant: '<S168>/Constant Value19'
         *  Product: '<S206>/Division'
         */
        rtb_Switch1_ol = 1.0F / HeSSDR_t_dT;
    }
    else
    {
        /* Switch: '<S206>/Switch1' */
        rtb_Switch1_ol = 3.402823466E+38F;
    }

    /* End of Switch: '<S206>/Switch1' */
    /* End of Outputs for SubSystem: '<S168>/Protected Division' */

    /* Product: '<S168>/Product' incorporates:
     *  Constant: '<S168>/Constant Value1'
     *  DataTypeConversion: '<S168>/Data Type Conversion'
     */
    rtb_Product = (((uint32)rtb_Switch_d) * 60U) * ((uint32)((uint16)
        rtb_Switch1_ol));

    /* Outputs for Atomic SubSystem: '<S168>/Count Down  Reset Enabled' */
    /* Switch: '<S185>/Switch1' incorporates:
     *  Constant: '<S185>/Constant Value'
     *  RelationalOperator: '<S168>/Comparison5'
     *  RelationalOperator: '<S185>/Greater  Than'
     *  Switch: '<S185>/Switch2'
     *  UnitDelay: '<S168>/Unit Delay'
     *  UnitDelay: '<S185>/Unit Delay'
     */
    if (rtb_Product != SSDR_ac_DW.UnitDelay_DSTATE_me)
    {
        SSDR_ac_DW.UnitDelay_DSTATE_ga = rtb_Product;
    }
    else
    {
        if (SSDR_ac_DW.UnitDelay_DSTATE_ga > 0U)
        {
            /* UnitDelay: '<S185>/Unit Delay' incorporates:
             *  Constant: '<S185>/Constant Value1'
             *  Sum: '<S185>/Subtraction'
             *  Switch: '<S185>/Switch2'
             */
            SSDR_ac_DW.UnitDelay_DSTATE_ga--;
        }
    }

    /* End of Switch: '<S185>/Switch1' */

    /* Logic: '<S168>/Logical17' incorporates:
     *  Constant: '<S168>/Constant Value2'
     *  Constant: '<S185>/Constant Value2'
     *  Constant: '<S192>/Calib'
     *  Constant: '<S198>/Calib'
     *  Logic: '<S168>/Logical'
     *  Logic: '<S168>/Logical1'
     *  Logic: '<S168>/Logical3'
     *  RelationalOperator: '<S168>/Comparison1'
     *  RelationalOperator: '<S185>/Greater  Than1'
     *  UnitDelay: '<S185>/Unit Delay'
     */
    VeSSDC_b_BatPerWU_ThrmlCond_Timer_Exp = (((SSDR_ac_DW.UnitDelay_DSTATE_ga <=
        0U) && ((((sint32)rtb_Switch_d) != 0) ||
                (KeSSDR_b_ZeroAsMinTimer_ThrmlCond))) &&
        (KeSSDR_b_BatPerWU_ThrmlCond_Timer_ExpEnbl));

    /* End of Outputs for SubSystem: '<S168>/Count Down  Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S215>/Signal Latch On With Reset3' */
    /* Outputs for Atomic SubSystem: '<S37>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S169>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S215>/Signal Latch On With Reset' */
    /* Logic: '<S230>/NOT' incorporates:
     *  Logic: '<S119>/OR1'
     *  Logic: '<S218>/NOT'
     *  Logic: '<S233>/NOT'
     *  Logic: '<S34>/Logical5'
     */
    tmpRead = !VeSSDI_b_THMRRdy4ShtDwn;

    /* End of Outputs for SubSystem: '<S169>/Signal Latch On With Reset' */
    /* End of Outputs for SubSystem: '<S37>/Turn On Delay Time' */
    /* End of Outputs for SubSystem: '<S215>/Signal Latch On With Reset3' */

    /* Logic: '<S230>/OR1' incorporates:
     *  Logic: '<S230>/NOT'
     *  Logic: '<S230>/OR'
     *  UnitDelay: '<S230>/Unit Delay'
     */
    SSDR_ac_DW.UnitDelay_DSTATE_ho = ((VeSSDC_b_BatPerWU_ThrmlCond_Timer_Exp) ||
        (tmpRead && (SSDR_ac_DW.UnitDelay_DSTATE_ho)));

    /* End of Outputs for SubSystem: '<S215>/Signal Latch On With Reset' */

    /* Logic: '<S169>/Logical2' incorporates:
     *  Constant: '<S211>/Calib'
     *  Constant: '<S212>/Calib'
     *  RelationalOperator: '<S169>/Comparison1'
     *  RelationalOperator: '<S169>/Comparison3'
     */
    VeSSDC_b_BattCondTempCheckOut = ((VeSSDI_T_BatModTmp <=
        KeSSDR_T_HVBatLowTempCondThrshld) || (VeSSDI_T_BatModTmp >=
        KeSSDR_T_HVBatHghTempCondThrshld));

    /* Outputs for Atomic SubSystem: '<S169>/EdgeRising' */
    /* UnitDelay: '<S177>/Unit Delay' incorporates:
     *  UnitDelay: '<S207>/Unit Delay'
     */
    rtb_UnitDelay_gw = SSDR_ac_DW.UnitDelay_DSTATE_gt;

    /* Update for UnitDelay: '<S207>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_gt = VeSSDI_b_BSWTimerExpired;

    /* Outputs for Atomic SubSystem: '<S169>/Signal Latch On' */
    /* Logic: '<S217>/OR2' incorporates:
     *  DataStoreRead: '<S169>/Data Store Read'
     *  Logic: '<S169>/Logical'
     *  Logic: '<S207>/AND'
     *  Logic: '<S207>/OR1'
     *  UnitDelay: '<S217>/Unit Delay'
     */
    SSDR_ac_DW.UnitDelay_DSTATE_pv = ((((VeSSDI_b_BSWTimerExpired) &&
        (!rtb_UnitDelay_gw)) && (SSDR_ac_DW.NeSSDC_b_HVBatPerWUThermal)) ||
        (SSDR_ac_DW.UnitDelay_DSTATE_pv));

    /* End of Outputs for SubSystem: '<S169>/Signal Latch On' */
    /* End of Outputs for SubSystem: '<S169>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S169>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S220>/EdgeRising' */
    /* Logic: '<S238>/AND' incorporates:
     *  Logic: '<S238>/OR1'
     *  UnitDelay: '<S238>/Unit Delay'
     */
    rtb_AND_pa = ((SSDR_ac_DW.UnitDelay_DSTATE_pv) &&
                  (!SSDR_ac_DW.UnitDelay_DSTATE_gg));

    /* Update for UnitDelay: '<S238>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_gg = SSDR_ac_DW.UnitDelay_DSTATE_pv;

    /* End of Outputs for SubSystem: '<S220>/EdgeRising' */

    /* Switch: '<S220>/Switch1' incorporates:
     *  Constant: '<S139>/Calib'
     *  Constant: '<S213>/Calib'
     *  Constant: '<S220>/Constant Value1'
     *  Logic: '<S220>/OR'
     *  Logic: '<S220>/OR1'
     *  MinMax: '<S220>/Minimum'
     *  Sum: '<S220>/Summation'
     *  UnitDelay: '<S220>/Unit Delay'
     */
    if ((!SSDR_ac_DW.UnitDelay_DSTATE_pv) || rtb_AND_pa)
    {
        SSDR_ac_DW.UnitDelay_DSTATE_m = 0.0F;
    }
    else
    {
        SSDR_ac_DW.UnitDelay_DSTATE_m = fminf(KeSSDR_t_TimeDelayWUToEnblTChck,
            HeSSDR_t_dT + SSDR_ac_DW.UnitDelay_DSTATE_m);
    }

    /* End of Switch: '<S220>/Switch1' */

    /* Logic: '<S220>/AND' incorporates:
     *  Constant: '<S213>/Calib'
     *  RelationalOperator: '<S220>/Greater  Than'
     *  UnitDelay: '<S220>/Unit Delay'
     */
    rtb_AND_pa = ((SSDR_ac_DW.UnitDelay_DSTATE_pv) &&
                  (SSDR_ac_DW.UnitDelay_DSTATE_m >=
                   KeSSDR_t_TimeDelayWUToEnblTChck));

    /* End of Outputs for SubSystem: '<S169>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S169>/EdgeRising1' */
    /* Logic: '<S208>/OR1' incorporates:
     *  UnitDelay: '<S208>/Unit Delay'
     */
    rtb_UnitDelay_gw = !SSDR_ac_DW.UnitDelay_DSTATE_gy;

    /* Update for UnitDelay: '<S208>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_gy = rtb_AND_pa;

    /* End of Outputs for SubSystem: '<S169>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S169>/EdgeRising2' */
    /* Logic: '<S209>/OR1' incorporates:
     *  UnitDelay: '<S209>/Unit Delay'
     */
    rtb_OR1_fw = !SSDR_ac_DW.UnitDelay_DSTATE_ff;

    /* Update for UnitDelay: '<S209>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_ff = VeSSDC_b_BatPerWU_ThrmlCond_Timer_Exp;

    /* Outputs for Atomic SubSystem: '<S169>/EdgeRising1' */
    /* Logic: '<S169>/Logical1' incorporates:
     *  Logic: '<S208>/AND'
     *  Logic: '<S209>/AND'
     */
    VeSSDC_b_BattCondTempCheckEnbl = ((rtb_AND_pa && rtb_UnitDelay_gw) ||
        ((VeSSDC_b_BatPerWU_ThrmlCond_Timer_Exp) && rtb_OR1_fw));

    /* End of Outputs for SubSystem: '<S169>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S169>/EdgeRising2' */

    /* Switch: '<S169>/Switch' */
    VeSSDC_b_BattCondTempCheckArb = ((VeSSDC_b_BattCondTempCheckEnbl) &&
        (VeSSDC_b_BattCondTempCheckOut));

    /* Outputs for Atomic SubSystem: '<S169>/Signal Latch On With Reset' */
    /* Logic: '<S218>/OR1' incorporates:
     *  Logic: '<S218>/OR'
     *  UnitDelay: '<S218>/Unit Delay'
     */
    VeSSDC_b_BattCondTempCheck = ((VeSSDC_b_BattCondTempCheckArb) || (tmpRead &&
        (SSDR_ac_DW.UnitDelay_DSTATE_hm)));

    /* Update for UnitDelay: '<S218>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_hm = VeSSDC_b_BattCondTempCheck;

    /* End of Outputs for SubSystem: '<S169>/Signal Latch On With Reset' */

    /* Switch: '<S215>/Switch' incorporates:
     *  Constant: '<S215>/FALSE Constant'
     *  Logic: '<S215>/Logical'
     *  Logic: '<S215>/Logical1'
     *  Switch: '<S215>/Switch4'
     *  UnitDelay: '<S230>/Unit Delay'
     *  UnitDelay: '<S237>/Unit Delay'
     */
    if (VeSSDI_b_THMRRdy4ShtDwn)
    {
        rtb_AND_pa = false;
    }
    else
    {
        rtb_AND_pa = (((((!SSDR_ac_DW.UnitDelay_DSTATE_im) && rtb_UnitDelay3_n) ||
                        (SSDR_ac_DW.UnitDelay_DSTATE_ho)) &&
                       (VeSSDC_b_BattCondTempCheck)) && (VeSSDI_b_PluggedIn));
    }

    /* End of Switch: '<S215>/Switch' */

    /* Logic: '<S215>/Logical8' */
    rtb_UnitDelay3_n = (rtb_AND_la && rtb_AND_pa);

    /* Outputs for Atomic SubSystem: '<S215>/Signal Latch On1' */
    /* Logic: '<S234>/OR2' incorporates:
     *  UnitDelay: '<S234>/Unit Delay'
     */
    SSDR_ac_DW.UnitDelay_DSTATE_a = ((VeSSDI_b_GENRRdy4ShtDwn) ||
        (SSDR_ac_DW.UnitDelay_DSTATE_a));

    /* End of Outputs for SubSystem: '<S215>/Signal Latch On1' */

    /* DataTypeConversion: '<S168>/FloatToFix1' incorporates:
     *  Constant: '<S9>/Constant Value'
     *  Product: '<S9>/Product'
     */
    tmp = 60.0F * VeSSDI_t_BattPerWU_12VChrg_Timer;
    if (tmp < 65536.0F)
    {
        if (tmp >= 0.0F)
        {
            rtb_VeSSDR_K_EncSysState = (uint16)tmp;
        }
        else
        {
            rtb_VeSSDR_K_EncSysState = 0U;
        }
    }
    else
    {
        rtb_VeSSDR_K_EncSysState = MAX_uint16_T;
    }

    /* Outputs for Atomic SubSystem: '<S168>/Limiter1' */
    /* Switch: '<S202>/Switch1' incorporates:
     *  Constant: '<S168>/Constant Value12'
     *  DataTypeConversion: '<S168>/FloatToFix1'
     *  RelationalOperator: '<S202>/Relational Operator'
     */
    if (65500 < ((sint32)rtb_VeSSDR_K_EncSysState))
    {
        /* Switch: '<S204>/Switch1' */
        rtb_VeSSDR_K_EncSysState = 65500U;
    }

    /* End of Switch: '<S202>/Switch1' */

    /* Switch: '<S202>/Switch' incorporates:
     *  Constant: '<S168>/Constant Value13'
     *  RelationalOperator: '<S202>/Relational Operator1'
     */
    if (((sint32)rtb_VeSSDR_K_EncSysState) > 0)
    {
        /* Switch: '<S202>/Switch' */
        rtb_Switch_l1 = rtb_VeSSDR_K_EncSysState;
    }
    else
    {
        /* Switch: '<S202>/Switch' */
        rtb_Switch_l1 = 0U;
    }

    /* End of Switch: '<S202>/Switch' */
    /* End of Outputs for SubSystem: '<S168>/Limiter1' */

    /* Product: '<S168>/Product4' incorporates:
     *  Constant: '<S168>/Constant Value4'
     *  DataTypeConversion: '<S168>/Data Type Conversion'
     */
    rtb_Product4 = (((uint32)rtb_Switch_l1) * 60U) * ((uint32)((uint16)
        rtb_Switch1_ol));

    /* Outputs for Atomic SubSystem: '<S168>/Count Down  Reset Enabled1' */
    /* Switch: '<S186>/Switch1' incorporates:
     *  Constant: '<S186>/Constant Value'
     *  RelationalOperator: '<S168>/Comparison3'
     *  RelationalOperator: '<S186>/Greater  Than'
     *  Switch: '<S186>/Switch2'
     *  UnitDelay: '<S168>/Unit Delay1'
     *  UnitDelay: '<S186>/Unit Delay'
     */
    if (rtb_Product4 != SSDR_ac_DW.UnitDelay1_DSTATE)
    {
        SSDR_ac_DW.UnitDelay_DSTATE_kd = rtb_Product4;
    }
    else
    {
        if (SSDR_ac_DW.UnitDelay_DSTATE_kd > 0U)
        {
            /* UnitDelay: '<S186>/Unit Delay' incorporates:
             *  Constant: '<S186>/Constant Value1'
             *  Sum: '<S186>/Subtraction'
             *  Switch: '<S186>/Switch2'
             */
            SSDR_ac_DW.UnitDelay_DSTATE_kd--;
        }
    }

    /* End of Switch: '<S186>/Switch1' */

    /* Logic: '<S168>/Logical18' incorporates:
     *  Constant: '<S168>/Constant Value5'
     *  Constant: '<S186>/Constant Value2'
     *  Constant: '<S191>/Calib'
     *  Constant: '<S195>/Calib'
     *  Logic: '<S168>/Logical4'
     *  Logic: '<S168>/Logical5'
     *  Logic: '<S168>/Logical7'
     *  RelationalOperator: '<S168>/Comparison2'
     *  RelationalOperator: '<S186>/Greater  Than1'
     *  UnitDelay: '<S186>/Unit Delay'
     */
    VeSSDC_b_BatPerWU_12VChrg_Timer_Exp = (((SSDR_ac_DW.UnitDelay_DSTATE_kd <=
        0U) && ((((sint32)rtb_Switch_l1) != 0) ||
                (KeSSDR_b_ZeroAsMinTimer_12VChrg))) &&
        (KeSSDR_b_BatPerWU_12VChrg_Timer_ExpEnbl));

    /* End of Outputs for SubSystem: '<S168>/Count Down  Reset Enabled1' */

    /* Outputs for Atomic SubSystem: '<S215>/Signal Latch On With Reset2' */
    /* Logic: '<S232>/OR1' incorporates:
     *  Logic: '<S232>/NOT'
     *  Logic: '<S232>/OR'
     *  UnitDelay: '<S232>/Unit Delay'
     */
    SSDR_ac_DW.UnitDelay_DSTATE_dn = ((VeSSDC_b_BatPerWU_12VChrg_Timer_Exp) ||
        ((!VeSSDI_b_GENRRdy4ShtDwn) && (SSDR_ac_DW.UnitDelay_DSTATE_dn)));

    /* End of Outputs for SubSystem: '<S215>/Signal Latch On With Reset2' */

    /* Switch: '<S215>/Switch1' incorporates:
     *  Constant: '<S215>/FALSE Constant1'
     *  Logic: '<S215>/Logical6'
     *  Switch: '<S215>/Switch5'
     *  UnitDelay: '<S232>/Unit Delay'
     *  UnitDelay: '<S234>/Unit Delay'
     */
    if (VeSSDI_b_GENRRdy4ShtDwn)
    {
        rtb_AND_pa = false;
    }
    else
    {
        rtb_AND_pa = (((!SSDR_ac_DW.UnitDelay_DSTATE_a) && rtb_Merge4) ||
                      (SSDR_ac_DW.UnitDelay_DSTATE_dn));
    }

    /* End of Switch: '<S215>/Switch1' */

    /* Logic: '<S215>/Logical9' */
    rtb_AND_la = (rtb_AND_la && rtb_AND_pa);

    /* Logic: '<S215>/Logical10' incorporates:
     *  Constant: '<S224>/Calib'
     *  Logic: '<S215>/Logical11'
     *  Logic: '<S215>/Logical12'
     *  Switch: '<S215>/Switch8'
     */
    rtb_UnitDelay3_e = (((!rtb_UnitDelay3_e) || (KeSSDR_b_EnblKeyCabDnyBattCond))
                        && (tmpRead && (VeSSDI_b_CabPrecDny_BattCond)));

    /* Logic: '<S215>/Logical5' incorporates:
     *  UnitDelay: '<S147>/Unit Delay3'
     */
    SSDR_ac_DW.UnitDelay3_DSTATE_j = ((rtb_UnitDelay3_n || rtb_AND_la) ||
        rtb_UnitDelay3_e);

    /* Outputs for Atomic SubSystem: '<S147>/Signal Latch On With Reset' */
    /* Logic: '<S345>/OR1' incorporates:
     *  Logic: '<S147>/Logical12'
     *  Logic: '<S147>/Logical4'
     *  Logic: '<S345>/NOT'
     *  Logic: '<S345>/OR'
     *  RelationalOperator: '<S147>/Comparison10'
     *  UnitDelay: '<S147>/Unit Delay3'
     *  UnitDelay: '<S147>/Unit Delay4'
     *  UnitDelay: '<S345>/Unit Delay'
     */
    SSDR_ac_DW.UnitDelay4_DSTATE_h = ((VeSSDI_b_UnintendedShtdwnOcc) ||
        (((!rtb_AND_fw) && ((rtb_UnitDelay3_o == SSDR_ac_DW.UnitDelay3_DSTATE_j)
                            || (!SSDR_ac_DW.UnitDelay4_DSTATE_h))) &&
         (SSDR_ac_DW.UnitDelay_DSTATE_d)));

    /* Update for UnitDelay: '<S345>/Unit Delay' incorporates:
     *  UnitDelay: '<S147>/Unit Delay4'
     */
    SSDR_ac_DW.UnitDelay_DSTATE_d = SSDR_ac_DW.UnitDelay4_DSTATE_h;

    /* End of Outputs for SubSystem: '<S147>/Signal Latch On With Reset' */

    /* Switch: '<S344>/Switch1' incorporates:
     *  UnitDelay: '<S147>/Unit Delay3'
     *  UnitDelay: '<S147>/Unit Delay4'
     */
    rtb_AND_fw = ((!SSDR_ac_DW.UnitDelay4_DSTATE_h) &&
                  (SSDR_ac_DW.UnitDelay3_DSTATE_j));

    /* Logic: '<S150>/OR1' incorporates:
     *  Constant: '<S362>/Calib'
     *  Logic: '<S150>/OR'
     *  RelationalOperator: '<S150>/Equal'
     *  RelationalOperator: '<S150>/Equal1'
     *  RelationalOperator: '<S150>/Equal2'
     *  RelationalOperator: '<S150>/Equal3'
     *  RelationalOperator: '<S150>/Equal4'
     *  RelationalOperator: '<S150>/Equal5'
     *  RelationalOperator: '<S150>/Equal6'
     *  UnitDelay: '<S150>/Unit Delay'
     *  UnitDelay: '<S150>/Unit Delay1'
     *  UnitDelay: '<S150>/Unit Delay2'
     *  UnitDelay: '<S150>/Unit Delay3'
     *  UnitDelay: '<S150>/Unit Delay4'
     *  UnitDelay: '<S150>/Unit Delay5'
     *  UnitDelay: '<S150>/Unit Delay6'
     */
    rtb_AND_pa = ((((((((Switch1_h != SSDR_ac_DW.UnitDelay1_DSTATE_o) ||
                        (rtb_Switch1_e != SSDR_ac_DW.UnitDelay2_DSTATE_c)) ||
                       (rtb_OR1_dn != SSDR_ac_DW.UnitDelay_DSTATE_or)) ||
                      (VeSSDR_e_InvOprStat != SSDR_ac_DW.UnitDelay3_DSTATE_c)) ||
                     (rtb_Switch1_pa != SSDR_ac_DW.UnitDelay4_DSTATE_l)) ||
                    (rtb_AND_fw != SSDR_ac_DW.UnitDelay5_DSTATE)) || (rtb_AND_df
                    != SSDR_ac_DW.UnitDelay6_DSTATE_p)) ||
                  (KeSSDR_b_OvrdEnblPTSys));

    /* Outputs for Atomic SubSystem: '<S150>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S364>/EdgeFalling' */
    /* Logic: '<S365>/AND' incorporates:
     *  Logic: '<S365>/OR1'
     *  UnitDelay: '<S365>/Unit Delay'
     */
    rtb_UnitDelay_gw = ((!rtb_AND_pa) && (SSDR_ac_DW.UnitDelay_DSTATE_fw));

    /* Update for UnitDelay: '<S365>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_fw = rtb_AND_pa;

    /* End of Outputs for SubSystem: '<S364>/EdgeFalling' */

    /* Switch: '<S364>/Switch' incorporates:
     *  Constant: '<S139>/Calib'
     *  Constant: '<S363>/Calib'
     *  Constant: '<S364>/Constant Value1'
     *  MinMax: '<S364>/Minimum'
     *  Sum: '<S364>/Summation'
     *  UnitDelay: '<S364>/Unit Delay'
     */
    if (rtb_UnitDelay_gw)
    {
        SSDR_ac_DW.UnitDelay_DSTATE = KeSSDR_t_SubSysEnblTimer;
    }
    else
    {
        SSDR_ac_DW.UnitDelay_DSTATE = fmaxf(SSDR_ac_DW.UnitDelay_DSTATE -
            HeSSDR_t_dT, 0.0F);
    }

    /* End of Switch: '<S364>/Switch' */

    /* Logic: '<S364>/AND' incorporates:
     *  Constant: '<S364>/Constant Value2'
     *  RelationalOperator: '<S364>/Greater  Than'
     *  UnitDelay: '<S364>/Unit Delay'
     */
    VeSSDC_b_EnblTable = (rtb_AND_pa || (SSDR_ac_DW.UnitDelay_DSTATE > 0.0F));

    /* End of Outputs for SubSystem: '<S150>/Turn Off Delay Time' */

    /* Outputs for Enabled SubSystem: '<S4>/DtrmnPTSysState' incorporates:
     *  EnablePort: '<S7>/Enable'
     */
    if (VeSSDC_b_EnblTable)
    {
        /* Truth Table: '<S7>/TruthTable1' */
        /* Truth Table Function 'SSDR_FastTEF/SSDC_DtrmSysState/DtrmnPTSysState/TruthTable1': '<S19>:1' */
        /*  V2G Operation Status: Not Plugged In */
        /* Condition '#1': '<S19>:1:16' */
        aVarTruthTableCondition_1 = (((uint32)rtb_Switch1_pa) ==
            CeSSDR_e_NoPlgIn);

        /*  V2G Operation Status: Plugged In and No Operation */
        /* Condition '#2': '<S19>:1:20' */
        aVarTruthTableCondition_2 = (((uint32)rtb_Switch1_pa) ==
            CeSSDR_e_PlgIn_NOOP_V2G);

        /*  V2G Operation status: Plugged In and V2G operation Allowed */
        /* Condition '#3': '<S19>:1:24' */
        aVarTruthTableCondition_3 = (((uint32)rtb_Switch1_pa) ==
            CeSSDR_e_PlgIn_V2GOpr);

        /*  Inverter Operation Status: Tools not plugged In */
        /* Condition '#4': '<S19>:1:28' */
        aVarTruthTableCondition_4 = (((uint32)VeSSDR_e_InvOprStat) ==
            CeSSDR_e_NoPlgIn_Tools);

        /*  Inverter Operation Status: Tools plugged In.No Inverter Operation */
        /* Condition '#5': '<S19>:1:32' */
        aVarTruthTableCondition_5 = (((uint32)VeSSDR_e_InvOprStat) ==
            CeSSDR_e_PlgIn_NoOpr);

        /*  Inverter Operation Status: Tools plugged In. Okay for Inverter Operation */
        /* Condition '#6': '<S19>:1:36' */
        rtb_UnitDelay_gw = (((uint32)VeSSDR_e_InvOprStat) ==
                            CeSSDR_e_PlgIn_InvOpr_Tools);

        /*  Enable Cabin Condition */
        /*  Periodic Wakeup */
        /*  Driver Door Open Condition Met */
        rtb_AND_pa = !aVarTruthTableCondition_3;
        rtb_OR1_fw = !aVarTruthTableCondition_5;
        rtb_UnitDelay3_o = !rtb_UnitDelay_gw;
        rtb_Merge4 = !rtb_OR1_dn;
        rtb_Logical1_p = !rtb_AND_fw;
        rtb_Logical5_p = !rtb_AND_df;
        rtb_Logical9_j = !aVarTruthTableCondition_2;
        rtb_Logical3_nz = ((aVarTruthTableCondition_1 && rtb_Logical9_j) &&
                           rtb_AND_pa);
        rtb_AND_fx = (((rtb_Logical3_nz && aVarTruthTableCondition_4) &&
                       rtb_OR1_fw) && rtb_UnitDelay3_o);
        rtb_UnitDelay_nn = (rtb_AND_fx && rtb_Merge4);
        rtb_UnitDelay_m = (rtb_UnitDelay_nn && rtb_Logical1_p);
        if (rtb_UnitDelay_m && rtb_Logical5_p)
        {
            /* Decision 'D1': '<S19>:1:50' */
            /*  Action based on Decision 1 */
            /* Action '1': '<S19>:1:202' */
            rtb_VeSSDR_K_Index_T1 = SSDR_ac_One;
        }
        else
        {
            aVarTruthTableCondition_1 = !aVarTruthTableCondition_1;
            rtb_AND_pa = ((aVarTruthTableCondition_1 &&
                           aVarTruthTableCondition_2) && rtb_AND_pa);
            aVarTruthTableCondition_2 = (((rtb_AND_pa &&
                aVarTruthTableCondition_4) && rtb_OR1_fw) && rtb_UnitDelay3_o);
            aVarTruthTableCondition_7 = (aVarTruthTableCondition_2 && rtb_Merge4);
            aVarTruthTableCondition_8 = (aVarTruthTableCondition_7 &&
                rtb_Logical1_p);
            if (aVarTruthTableCondition_8 && rtb_Logical5_p)
            {
                /* Decision 'D2': '<S19>:1:52' */
                /*  Action based on Decision 2 */
                /* Action '2': '<S19>:1:208' */
                rtb_VeSSDR_K_Index_T1 = SSDR_ac_Two;
            }
            else
            {
                rtb_Logical9_j = ((aVarTruthTableCondition_1 && rtb_Logical9_j) &&
                                  aVarTruthTableCondition_3);
                aVarTruthTableCondition_1 = (((rtb_Logical9_j &&
                    aVarTruthTableCondition_4) && rtb_OR1_fw) &&
                    rtb_UnitDelay3_o);
                aVarTruthTableCondition_3 = (aVarTruthTableCondition_1 &&
                    rtb_Merge4);
                aVarTruthTableCondition_9 = (aVarTruthTableCondition_3 &&
                    rtb_Logical1_p);
                if (aVarTruthTableCondition_9 && rtb_Logical5_p)
                {
                    /* Decision 'D3': '<S19>:1:54' */
                    /*  Action based on Decision 3 */
                    /* Action '3': '<S19>:1:214' */
                    rtb_VeSSDR_K_Index_T1 = SSDR_ac_Three;
                }
                else
                {
                    aVarTruthTableCondition_4 = !aVarTruthTableCondition_4;
                    rtb_Logical3_nz = (rtb_Logical3_nz &&
                                       aVarTruthTableCondition_4);
                    aVarTruthTableCondition_10 = ((rtb_Logical3_nz &&
                        aVarTruthTableCondition_5) && rtb_UnitDelay3_o);
                    tmp_4 = (aVarTruthTableCondition_10 && rtb_Merge4);
                    tmp_0 = (tmp_4 && rtb_Logical1_p);
                    if (tmp_0 && rtb_Logical5_p)
                    {
                        /* Decision 'D4': '<S19>:1:56' */
                        /*  Action based on Decision 4 */
                        /* Action '4': '<S19>:1:220' */
                        rtb_VeSSDR_K_Index_T1 = SSDR_ac_Four;
                    }
                    else
                    {
                        rtb_AND_pa = (rtb_AND_pa && aVarTruthTableCondition_4);
                        tmp_8 = ((rtb_AND_pa && aVarTruthTableCondition_5) &&
                                 rtb_UnitDelay3_o);
                        tmp_5 = (tmp_8 && rtb_Merge4);
                        tmp_1 = (tmp_5 && rtb_Logical1_p);
                        if (tmp_1 && rtb_Logical5_p)
                        {
                            /* Decision 'D5': '<S19>:1:58' */
                            /*  Action based on Decision 5 */
                            /* Action '5': '<S19>:1:226' */
                            rtb_VeSSDR_K_Index_T1 = SSDR_ac_Five;
                        }
                        else
                        {
                            rtb_Logical9_j = (rtb_Logical9_j &&
                                              aVarTruthTableCondition_4);
                            rtb_UnitDelay3_o = ((rtb_Logical9_j &&
                                                 aVarTruthTableCondition_5) &&
                                                rtb_UnitDelay3_o);
                            aVarTruthTableCondition_4 = (rtb_UnitDelay3_o &&
                                rtb_Merge4);
                            aVarTruthTableCondition_5 =
                                (aVarTruthTableCondition_4 && rtb_Logical1_p);
                            if (aVarTruthTableCondition_5 && rtb_Logical5_p)
                            {
                                /* Decision 'D6': '<S19>:1:60' */
                                /*  Action based on Decision 6 */
                                /* Action '6': '<S19>:1:232' */
                                rtb_VeSSDR_K_Index_T1 = SSDR_ac_Six;
                            }
                            else
                            {
                                rtb_Logical3_nz = ((rtb_Logical3_nz &&
                                                    rtb_OR1_fw) &&
                                                   rtb_UnitDelay_gw);
                                tmp_6 = (rtb_Logical3_nz && rtb_Merge4);
                                tmp_2 = (tmp_6 && rtb_Logical1_p);
                                if (tmp_2 && rtb_Logical5_p)
                                {
                                    /* Decision 'D7': '<S19>:1:62' */
                                    /*  Action based on Decision 7 */
                                    /* Action '7': '<S19>:1:238' */
                                    rtb_VeSSDR_K_Index_T1 = SSDR_ac_Seven;
                                }
                                else
                                {
                                    rtb_AND_pa = ((rtb_AND_pa && rtb_OR1_fw) &&
                                                  rtb_UnitDelay_gw);
                                    tmp_7 = (rtb_AND_pa && rtb_Merge4);
                                    tmp_3 = (tmp_7 && rtb_Logical1_p);
                                    if (tmp_3 && rtb_Logical5_p)
                                    {
                                        /* Decision 'D8': '<S19>:1:64' */
                                        /*  Action based on Decision 8 */
                                        /* Action '8': '<S19>:1:244' */
                                        rtb_VeSSDR_K_Index_T1 = SSDR_ac_Eight;
                                    }
                                    else
                                    {
                                        rtb_OR1_fw = ((rtb_Logical9_j &&
                                                       rtb_OR1_fw) &&
                                                      rtb_UnitDelay_gw);
                                        rtb_Merge4 = (rtb_OR1_fw && rtb_Merge4);
                                        rtb_Logical9_j = (rtb_Merge4 &&
                                                          rtb_Logical1_p);
                                        if (rtb_Logical9_j && rtb_Logical5_p)
                                        {
                                            /* Decision 'D9': '<S19>:1:66' */
                                            /*  Action based on Decision 9 */
                                            /* Action '9': '<S19>:1:250' */
                                            rtb_VeSSDR_K_Index_T1 = SSDR_ac_Nine;
                                        }
                                        else if (rtb_UnitDelay_m && rtb_AND_df)
                                        {
                                            /* Decision 'D10': '<S19>:1:68' */
                                            /* Condition '#9': '<S19>:1:48' */
                                            /*  Action based on Decision 10 */
                                            /* Action '10': '<S19>:1:256' */
                                            rtb_VeSSDR_K_Index_T1 = SSDR_ac_Ten;
                                        }
                                        else if (aVarTruthTableCondition_8 &&
                                                 rtb_AND_df)
                                        {
                                            /* Decision 'D11': '<S19>:1:70' */
                                            /* Condition '#9': '<S19>:1:48' */
                                            /*  Action based on Decision 11 */
                                            /* Action '11': '<S19>:1:262' */
                                            rtb_VeSSDR_K_Index_T1 =
                                                SSDR_ac_Eleven;
                                        }
                                        else if (aVarTruthTableCondition_9 &&
                                                 rtb_AND_df)
                                        {
                                            /* Decision 'D12': '<S19>:1:72' */
                                            /* Condition '#9': '<S19>:1:48' */
                                            /*  Action based on Decision 12 */
                                            /* Action '12': '<S19>:1:268' */
                                            rtb_VeSSDR_K_Index_T1 =
                                                SSDR_ac_Twelve;
                                        }
                                        else if (tmp_0 && rtb_AND_df)
                                        {
                                            /* Decision 'D13': '<S19>:1:74' */
                                            /* Condition '#9': '<S19>:1:48' */
                                            /*  Action based on Decision 13 */
                                            /* Action '13': '<S19>:1:274' */
                                            rtb_VeSSDR_K_Index_T1 =
                                                SSDR_ac_Thirteen;
                                        }
                                        else if (tmp_1 && rtb_AND_df)
                                        {
                                            /* Decision 'D14': '<S19>:1:76' */
                                            /* Condition '#9': '<S19>:1:48' */
                                            /*  Action based on Decision 14 */
                                            /* Action '14': '<S19>:1:280' */
                                            rtb_VeSSDR_K_Index_T1 =
                                                SSDR_ac_Fourteen;
                                        }
                                        else if (aVarTruthTableCondition_5 &&
                                                 rtb_AND_df)
                                        {
                                            /* Decision 'D15': '<S19>:1:78' */
                                            /* Condition '#9': '<S19>:1:48' */
                                            /*  Action based on Decision 15 */
                                            /* Action '15': '<S19>:1:286' */
                                            rtb_VeSSDR_K_Index_T1 =
                                                SSDR_ac_Fifteen;
                                        }
                                        else if (tmp_2 && rtb_AND_df)
                                        {
                                            /* Decision 'D16': '<S19>:1:80' */
                                            /* Condition '#9': '<S19>:1:48' */
                                            /*  Action based on Decision 16 */
                                            /* Action '16': '<S19>:1:292' */
                                            rtb_VeSSDR_K_Index_T1 =
                                                SSDR_ac_Sixteen;
                                        }
                                        else if (tmp_3 && rtb_AND_df)
                                        {
                                            /* Decision 'D17': '<S19>:1:82' */
                                            /* Condition '#9': '<S19>:1:48' */
                                            /*  Action based on Decision 17 */
                                            /* Action '17': '<S19>:1:298' */
                                            rtb_VeSSDR_K_Index_T1 =
                                                SSDR_ac_Seventeen;
                                        }
                                        else if (rtb_Logical9_j && rtb_AND_df)
                                        {
                                            /* Decision 'D18': '<S19>:1:84' */
                                            /* Condition '#9': '<S19>:1:48' */
                                            /*  Action based on Decision 18 */
                                            /* Action '18': '<S19>:1:304' */
                                            rtb_VeSSDR_K_Index_T1 =
                                                SSDR_ac_Eighteen;
                                        }
                                        else
                                        {
                                            rtb_Logical9_j = (rtb_UnitDelay_nn &&
                                                              rtb_AND_fw);
                                            if (rtb_Logical9_j && rtb_Logical5_p)
                                            {
                                                /* Decision 'D19': '<S19>:1:86' */
                                                /* Condition '#8': '<S19>:1:44' */
                                                /*  Action based on Decision 19 */
                                                /* Action '19': '<S19>:1:310' */
                                                rtb_VeSSDR_K_Index_T1 =
                                                    SSDR_ac_Nineteen;
                                            }
                                            else
                                            {
                                                rtb_UnitDelay_nn =
                                                    (aVarTruthTableCondition_7 &&
                                                     rtb_AND_fw);
                                                if (rtb_UnitDelay_nn &&
                                                        rtb_Logical5_p)
                                                {
                                                    /* Decision 'D20': '<S19>:1:88' */
                                                    /* Condition '#8': '<S19>:1:44' */
                                                    /*  Action based on Decision 20 */
                                                    /* Action '20': '<S19>:1:316' */
                                                    rtb_VeSSDR_K_Index_T1 =
                                                        SSDR_ac_Twenty;
                                                }
                                                else
                                                {
                                                    rtb_UnitDelay_m =
                                                        (aVarTruthTableCondition_3
                                                         && rtb_AND_fw);
                                                    if (rtb_UnitDelay_m &&
                                                            rtb_Logical5_p)
                                                    {
                                                        /* Decision 'D21': '<S19>:1:90' */
                                                        /* Condition '#8': '<S19>:1:44' */
                                                        /*  Action based on Decision 21 */
                                                        /* Action '21': '<S19>:1:322' */
                                                        rtb_VeSSDR_K_Index_T1 =
                                                            SSDR_ac_Twentyone;
                                                    }
                                                    else
                                                    {
                                                        aVarTruthTableCondition_7
                                                            = (tmp_4 &&
                                                               rtb_AND_fw);
                                                        if (aVarTruthTableCondition_7
                                                            && rtb_Logical5_p)
                                                        {
                                                            /* Decision 'D22': '<S19>:1:92' */
                                                            /* Condition '#8': '<S19>:1:44' */
                                                            /*  Action based on Decision 22 */
                                                            /* Action '22': '<S19>:1:328' */
                                                            rtb_VeSSDR_K_Index_T1
                                                                =
                                                                SSDR_ac_Twentytwo;
                                                        }
                                                        else
                                                        {
                                                            aVarTruthTableCondition_8
                                                                = (tmp_5 &&
                                                                   rtb_AND_fw);
                                                            if (aVarTruthTableCondition_8
                                                                && rtb_Logical5_p)
                                                            {
                                                                /* Decision 'D23': '<S19>:1:94' */
                                                                /* Condition '#8': '<S19>:1:44' */
                                                                /*  Action based on Decision 23 */
                                                                /* Action '23': '<S19>:1:334' */
                                                                rtb_VeSSDR_K_Index_T1
                                                                    =
                                                                    SSDR_ac_Twentythree;
                                                            }
                                                            else
                                                            {
                                                                aVarTruthTableCondition_3
                                                                    =
                                                                    (aVarTruthTableCondition_4
                                                                     &&
                                                                     rtb_AND_fw);
                                                                if (aVarTruthTableCondition_3
                                                                    &&
                                                                      rtb_Logical5_p)
                                                                {
                                                                    /* Decision 'D24': '<S19>:1:96' */
                                                                    /* Condition '#8': '<S19>:1:44' */
                                                                    /*  Action based on Decision 24 */
                                                                    /* Action '24': '<S19>:1:340' */
                                                                    rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Twentyfour;
                                                                }
                                                                else
                                                                {
                                                                    aVarTruthTableCondition_9
                                                                      = (tmp_6 &&
                                                                      rtb_AND_fw);
                                                                    if
                                                                      (aVarTruthTableCondition_9
                                                                      &&
                                                                      rtb_Logical5_p)
                                                                    {
                                                                      /* Decision 'D25': '<S19>:1:98' */
                                                                      /* Condition '#8': '<S19>:1:44' */
                                                                      /*  Action based on Decision 25 */
                                                                      /* Action '25': '<S19>:1:346' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Twentyfive;
                                                                    }
                                                                    else
                                                                    {
                                                                      aVarTruthTableCondition_4
                                                                      = (tmp_7 &&
                                                                      rtb_AND_fw);
                                                                      if
                                                                      (aVarTruthTableCondition_4
                                                                      &&
                                                                      rtb_Logical5_p)
                                                                      {
                                                                      /* Decision 'D26': '<S19>:1:100' */
                                                                      /* Condition '#8': '<S19>:1:44' */
                                                                      /*  Action based on Decision 26 */
                                                                      /* Action '26': '<S19>:1:352' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Twentysix;
                                                                      }
                                                                      else
                                                                      {
                                                                      rtb_Merge4
                                                                      =
                                                                      (rtb_Merge4
                                                                      &&
                                                                      rtb_AND_fw);
                                                                      if
                                                                      (rtb_Merge4
                                                                      &&
                                                                      rtb_Logical5_p)
                                                                      {
                                                                      /* Decision 'D27': '<S19>:1:102' */
                                                                      /* Condition '#8': '<S19>:1:44' */
                                                                      /*  Action based on Decision 27 */
                                                                      /* Action '27': '<S19>:1:358' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Twentyseven;
                                                                      }
                                                                      else if
                                                                      (rtb_Logical9_j
                                                                      &&
                                                                      rtb_AND_df)
                                                                      {
                                                                      /* Decision 'D28': '<S19>:1:104' */
                                                                      /* Condition '#8': '<S19>:1:44' */
                                                                      /* Condition '#9': '<S19>:1:48' */
                                                                      /*  Action based on Decision 28 */
                                                                      /* Action '28': '<S19>:1:364' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Twentyeight;
                                                                      }
                                                                      else if
                                                                      (rtb_UnitDelay_nn
                                                                      &&
                                                                      rtb_AND_df)
                                                                      {
                                                                      /* Decision 'D29': '<S19>:1:106' */
                                                                      /* Condition '#8': '<S19>:1:44' */
                                                                      /* Condition '#9': '<S19>:1:48' */
                                                                      /*  Action based on Decision 29 */
                                                                      /* Action '29': '<S19>:1:370' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Twentynine;
                                                                      }
                                                                      else if
                                                                      (rtb_UnitDelay_m
                                                                      &&
                                                                      rtb_AND_df)
                                                                      {
                                                                      /* Decision 'D30': '<S19>:1:108' */
                                                                      /* Condition '#8': '<S19>:1:44' */
                                                                      /* Condition '#9': '<S19>:1:48' */
                                                                      /*  Action based on Decision 30 */
                                                                      /* Action '30': '<S19>:1:376' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Thirty;
                                                                      }
                                                                      else if
                                                                      (aVarTruthTableCondition_7
                                                                      &&
                                                                      rtb_AND_df)
                                                                      {
                                                                      /* Decision 'D31': '<S19>:1:110' */
                                                                      /* Condition '#8': '<S19>:1:44' */
                                                                      /* Condition '#9': '<S19>:1:48' */
                                                                      /*  Action based on Decision 31 */
                                                                      /* Action '31': '<S19>:1:382' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Thirtyone;
                                                                      }
                                                                      else if
                                                                      (aVarTruthTableCondition_8
                                                                      &&
                                                                      rtb_AND_df)
                                                                      {
                                                                      /* Decision 'D32': '<S19>:1:112' */
                                                                      /* Condition '#8': '<S19>:1:44' */
                                                                      /* Condition '#9': '<S19>:1:48' */
                                                                      /*  Action based on Decision 32 */
                                                                      /* Action '32': '<S19>:1:388' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Thirtytwo;
                                                                      }
                                                                      else if
                                                                      (aVarTruthTableCondition_3
                                                                      &&
                                                                      rtb_AND_df)
                                                                      {
                                                                      /* Decision 'D33': '<S19>:1:114' */
                                                                      /* Condition '#8': '<S19>:1:44' */
                                                                      /* Condition '#9': '<S19>:1:48' */
                                                                      /*  Action based on Decision 33 */
                                                                      /* Action '33': '<S19>:1:394' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Thirtythree;
                                                                      }
                                                                      else if
                                                                      (aVarTruthTableCondition_9
                                                                      &&
                                                                      rtb_AND_df)
                                                                      {
                                                                      /* Decision 'D34': '<S19>:1:116' */
                                                                      /* Condition '#8': '<S19>:1:44' */
                                                                      /* Condition '#9': '<S19>:1:48' */
                                                                      /*  Action based on Decision 34 */
                                                                      /* Action '34': '<S19>:1:400' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Thirtyfour;
                                                                      }
                                                                      else if
                                                                      (aVarTruthTableCondition_4
                                                                      &&
                                                                      rtb_AND_df)
                                                                      {
                                                                      /* Decision 'D35': '<S19>:1:118' */
                                                                      /* Condition '#8': '<S19>:1:44' */
                                                                      /* Condition '#9': '<S19>:1:48' */
                                                                      /*  Action based on Decision 35 */
                                                                      /* Action '35': '<S19>:1:406' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Thirtyfive;
                                                                      }
                                                                      else if
                                                                      (rtb_Merge4
                                                                      &&
                                                                      rtb_AND_df)
                                                                      {
                                                                      /* Decision 'D36': '<S19>:1:120' */
                                                                      /* Condition '#8': '<S19>:1:44' */
                                                                      /* Condition '#9': '<S19>:1:48' */
                                                                      /*  Action based on Decision 36 */
                                                                      /* Action '36': '<S19>:1:412' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Thirtysix;
                                                                      }
                                                                      else
                                                                      {
                                                                      rtb_Merge4
                                                                      =
                                                                      (rtb_AND_fx
                                                                      &&
                                                                      rtb_OR1_dn);
                                                                      rtb_Logical9_j
                                                                      =
                                                                      (rtb_Merge4
                                                                      &&
                                                                      rtb_Logical1_p);
                                                                      if
                                                                      (rtb_Logical9_j
                                                                      &&
                                                                      rtb_Logical5_p)
                                                                      {
                                                                      /* Decision 'D37': '<S19>:1:122' */
                                                                      /* Condition '#7': '<S19>:1:40' */
                                                                      /*  Action based on Decision 37 */
                                                                      /* Action '37': '<S19>:1:418' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Thirtyseven;
                                                                      }
                                                                      else
                                                                      {
                                                                      rtb_AND_fx
                                                                      =
                                                                      (aVarTruthTableCondition_2
                                                                      &&
                                                                      rtb_OR1_dn);
                                                                      rtb_UnitDelay_nn
                                                                      =
                                                                      (rtb_AND_fx
                                                                      &&
                                                                      rtb_Logical1_p);
                                                                      if
                                                                      (rtb_UnitDelay_nn
                                                                      &&
                                                                      rtb_Logical5_p)
                                                                      {
                                                                      /* Decision 'D38': '<S19>:1:124' */
                                                                      /* Condition '#7': '<S19>:1:40' */
                                                                      /*  Action based on Decision 38 */
                                                                      /* Action '38': '<S19>:1:424' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Thirtyeight;
                                                                      }
                                                                      else
                                                                      {
                                                                      rtb_UnitDelay_m
                                                                      =
                                                                      (aVarTruthTableCondition_1
                                                                      &&
                                                                      rtb_OR1_dn);
                                                                      aVarTruthTableCondition_1
                                                                      =
                                                                      (rtb_UnitDelay_m
                                                                      &&
                                                                      rtb_Logical1_p);
                                                                      if
                                                                      (aVarTruthTableCondition_1
                                                                      &&
                                                                      rtb_Logical5_p)
                                                                      {
                                                                      /* Decision 'D39': '<S19>:1:126' */
                                                                      /* Condition '#7': '<S19>:1:40' */
                                                                      /*  Action based on Decision 39 */
                                                                      /* Action '39': '<S19>:1:430' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Thirtynine;
                                                                      }
                                                                      else
                                                                      {
                                                                      aVarTruthTableCondition_2
                                                                      =
                                                                      (aVarTruthTableCondition_10
                                                                      &&
                                                                      rtb_OR1_dn);
                                                                      aVarTruthTableCondition_7
                                                                      =
                                                                      (aVarTruthTableCondition_2
                                                                      &&
                                                                      rtb_Logical1_p);
                                                                      if
                                                                      (aVarTruthTableCondition_7
                                                                      &&
                                                                      rtb_Logical5_p)
                                                                      {
                                                                      /* Decision 'D40': '<S19>:1:128' */
                                                                      /* Condition '#7': '<S19>:1:40' */
                                                                      /*  Action based on Decision 40 */
                                                                      /* Action '40': '<S19>:1:436' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Forty;
                                                                      }
                                                                      else
                                                                      {
                                                                      aVarTruthTableCondition_8
                                                                      = (tmp_8 &&
                                                                      rtb_OR1_dn);
                                                                      aVarTruthTableCondition_3
                                                                      =
                                                                      (aVarTruthTableCondition_8
                                                                      &&
                                                                      rtb_Logical1_p);
                                                                      if
                                                                      (aVarTruthTableCondition_3
                                                                      &&
                                                                      rtb_Logical5_p)
                                                                      {
                                                                      /* Decision 'D41': '<S19>:1:130' */
                                                                      /* Condition '#7': '<S19>:1:40' */
                                                                      /*  Action based on Decision 41 */
                                                                      /* Action '41': '<S19>:1:442' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Fortyone;
                                                                      }
                                                                      else
                                                                      {
                                                                      rtb_UnitDelay3_o
                                                                      =
                                                                      (rtb_UnitDelay3_o
                                                                      &&
                                                                      rtb_OR1_dn);
                                                                      aVarTruthTableCondition_9
                                                                      =
                                                                      (rtb_UnitDelay3_o
                                                                      &&
                                                                      rtb_Logical1_p);
                                                                      if
                                                                      (aVarTruthTableCondition_9
                                                                      &&
                                                                      rtb_Logical5_p)
                                                                      {
                                                                      /* Decision 'D42': '<S19>:1:132' */
                                                                      /* Condition '#7': '<S19>:1:40' */
                                                                      /*  Action based on Decision 42 */
                                                                      /* Action '42': '<S19>:1:448' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Fortytwo;
                                                                      }
                                                                      else
                                                                      {
                                                                      rtb_Logical3_nz
                                                                      =
                                                                      (rtb_Logical3_nz
                                                                      &&
                                                                      rtb_OR1_dn);
                                                                      aVarTruthTableCondition_4
                                                                      =
                                                                      (rtb_Logical3_nz
                                                                      &&
                                                                      rtb_Logical1_p);
                                                                      if
                                                                      (aVarTruthTableCondition_4
                                                                      &&
                                                                      rtb_Logical5_p)
                                                                      {
                                                                      /* Decision 'D43': '<S19>:1:134' */
                                                                      /* Condition '#7': '<S19>:1:40' */
                                                                      /*  Action based on Decision 43 */
                                                                      /* Action '43': '<S19>:1:454' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Fortythree;
                                                                      }
                                                                      else
                                                                      {
                                                                      rtb_AND_pa
                                                                      =
                                                                      (rtb_AND_pa
                                                                      &&
                                                                      rtb_OR1_dn);
                                                                      aVarTruthTableCondition_10
                                                                      =
                                                                      (rtb_AND_pa
                                                                      &&
                                                                      rtb_Logical1_p);
                                                                      if
                                                                      (aVarTruthTableCondition_10
                                                                      &&
                                                                      rtb_Logical5_p)
                                                                      {
                                                                      /* Decision 'D44': '<S19>:1:136' */
                                                                      /* Condition '#7': '<S19>:1:40' */
                                                                      /*  Action based on Decision 44 */
                                                                      /* Action '44': '<S19>:1:460' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Fortyfour;
                                                                      }
                                                                      else
                                                                      {
                                                                      rtb_OR1_fw
                                                                      =
                                                                      (rtb_OR1_fw
                                                                      &&
                                                                      rtb_OR1_dn);
                                                                      rtb_Logical1_p
                                                                      =
                                                                      (rtb_OR1_fw
                                                                      &&
                                                                      rtb_Logical1_p);
                                                                      if
                                                                      (rtb_Logical1_p
                                                                      &&
                                                                      rtb_Logical5_p)
                                                                      {
                                                                      /* Decision 'D45': '<S19>:1:138' */
                                                                      /* Condition '#7': '<S19>:1:40' */
                                                                      /*  Action based on Decision 45 */
                                                                      /* Action '45': '<S19>:1:466' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Fortyfive;
                                                                      }
                                                                      else if
                                                                      (rtb_Logical9_j
                                                                      &&
                                                                      rtb_AND_df)
                                                                      {
                                                                      /* Decision 'D46': '<S19>:1:140' */
                                                                      /* Condition '#7': '<S19>:1:40' */
                                                                      /* Condition '#9': '<S19>:1:48' */
                                                                      /*  Action based on Decision 46 */
                                                                      /* Action '46': '<S19>:1:472' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Fortysix;
                                                                      }
                                                                      else if
                                                                      (rtb_UnitDelay_nn
                                                                      &&
                                                                      rtb_AND_df)
                                                                      {
                                                                      /* Decision 'D47': '<S19>:1:142' */
                                                                      /* Condition '#7': '<S19>:1:40' */
                                                                      /* Condition '#9': '<S19>:1:48' */
                                                                      /*  Action based on Decision 47 */
                                                                      /* Action '47': '<S19>:1:478' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Fortyseven;
                                                                      }
                                                                      else if
                                                                      (aVarTruthTableCondition_1
                                                                      &&
                                                                      rtb_AND_df)
                                                                      {
                                                                      /* Decision 'D48': '<S19>:1:144' */
                                                                      /* Condition '#7': '<S19>:1:40' */
                                                                      /* Condition '#9': '<S19>:1:48' */
                                                                      /*  Action based on Decision 48 */
                                                                      /* Action '48': '<S19>:1:484' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Fortyeight;
                                                                      }
                                                                      else if
                                                                      (aVarTruthTableCondition_7
                                                                      &&
                                                                      rtb_AND_df)
                                                                      {
                                                                      /* Decision 'D49': '<S19>:1:146' */
                                                                      /* Condition '#7': '<S19>:1:40' */
                                                                      /* Condition '#9': '<S19>:1:48' */
                                                                      /*  Action based on Decision 49 */
                                                                      /* Action '49': '<S19>:1:490' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Fortynine;
                                                                      }
                                                                      else if
                                                                      (aVarTruthTableCondition_3
                                                                      &&
                                                                      rtb_AND_df)
                                                                      {
                                                                      /* Decision 'D50': '<S19>:1:148' */
                                                                      /* Condition '#7': '<S19>:1:40' */
                                                                      /* Condition '#9': '<S19>:1:48' */
                                                                      /*  Action based on Decision 50 */
                                                                      /* Action '50': '<S19>:1:496' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Fifty;
                                                                      }
                                                                      else if
                                                                      (aVarTruthTableCondition_9
                                                                      &&
                                                                      rtb_AND_df)
                                                                      {
                                                                      /* Decision 'D51': '<S19>:1:150' */
                                                                      /* Condition '#7': '<S19>:1:40' */
                                                                      /* Condition '#9': '<S19>:1:48' */
                                                                      /*  Action based on Decision 51 */
                                                                      /* Action '51': '<S19>:1:502' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Fiftyone;
                                                                      }
                                                                      else if
                                                                      (aVarTruthTableCondition_4
                                                                      &&
                                                                      rtb_AND_df)
                                                                      {
                                                                      /* Decision 'D52': '<S19>:1:152' */
                                                                      /* Condition '#7': '<S19>:1:40' */
                                                                      /* Condition '#9': '<S19>:1:48' */
                                                                      /*  Action based on Decision 52 */
                                                                      /* Action '52': '<S19>:1:508' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Fiftytwo;
                                                                      }
                                                                      else if
                                                                      (aVarTruthTableCondition_10
                                                                      &&
                                                                      rtb_AND_df)
                                                                      {
                                                                      /* Decision 'D53': '<S19>:1:154' */
                                                                      /* Condition '#7': '<S19>:1:40' */
                                                                      /* Condition '#9': '<S19>:1:48' */
                                                                      /*  Action based on Decision 53 */
                                                                      /* Action '53': '<S19>:1:514' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Fiftythree;
                                                                      }
                                                                      else if
                                                                      (rtb_Logical1_p
                                                                      &&
                                                                      rtb_AND_df)
                                                                      {
                                                                      /* Decision 'D54': '<S19>:1:156' */
                                                                      /* Condition '#7': '<S19>:1:40' */
                                                                      /* Condition '#9': '<S19>:1:48' */
                                                                      /*  Action based on Decision 54 */
                                                                      /* Action '54': '<S19>:1:520' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Fiftyfour;
                                                                      }
                                                                      else
                                                                      {
                                                                      rtb_Merge4
                                                                      =
                                                                      (rtb_Merge4
                                                                      &&
                                                                      rtb_AND_fw);
                                                                      if
                                                                      (rtb_Merge4
                                                                      &&
                                                                      rtb_Logical5_p)
                                                                      {
                                                                      /* Decision 'D55': '<S19>:1:158' */
                                                                      /* Condition '#7': '<S19>:1:40' */
                                                                      /* Condition '#8': '<S19>:1:44' */
                                                                      /*  Action based on Decision 55 */
                                                                      /* Action '55': '<S19>:1:526' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Fiftyfive;
                                                                      }
                                                                      else
                                                                      {
                                                                      rtb_Logical1_p
                                                                      =
                                                                      (rtb_AND_fx
                                                                      &&
                                                                      rtb_AND_fw);
                                                                      if
                                                                      (rtb_Logical1_p
                                                                      &&
                                                                      rtb_Logical5_p)
                                                                      {
                                                                      /* Decision 'D56': '<S19>:1:160' */
                                                                      /* Condition '#7': '<S19>:1:40' */
                                                                      /* Condition '#8': '<S19>:1:44' */
                                                                      /*  Action based on Decision 56 */
                                                                      /* Action '56': '<S19>:1:532' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Fiftysix;
                                                                      }
                                                                      else
                                                                      {
                                                                      rtb_Logical9_j
                                                                      =
                                                                      (rtb_UnitDelay_m
                                                                      &&
                                                                      rtb_AND_fw);
                                                                      if
                                                                      (rtb_Logical9_j
                                                                      &&
                                                                      rtb_Logical5_p)
                                                                      {
                                                                      /* Decision 'D57': '<S19>:1:162' */
                                                                      /* Condition '#7': '<S19>:1:40' */
                                                                      /* Condition '#8': '<S19>:1:44' */
                                                                      /*  Action based on Decision 57 */
                                                                      /* Action '57': '<S19>:1:538' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Fiftyseven;
                                                                      }
                                                                      else
                                                                      {
                                                                      rtb_AND_fx
                                                                      =
                                                                      (aVarTruthTableCondition_2
                                                                      &&
                                                                      rtb_AND_fw);
                                                                      if
                                                                      (rtb_AND_fx
                                                                      &&
                                                                      rtb_Logical5_p)
                                                                      {
                                                                      /* Decision 'D58': '<S19>:1:164' */
                                                                      /* Condition '#7': '<S19>:1:40' */
                                                                      /* Condition '#8': '<S19>:1:44' */
                                                                      /*  Action based on Decision 58 */
                                                                      /* Action '58': '<S19>:1:544' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Fiftyeight;
                                                                      }
                                                                      else
                                                                      {
                                                                      rtb_UnitDelay_nn
                                                                      =
                                                                      (aVarTruthTableCondition_8
                                                                      &&
                                                                      rtb_AND_fw);
                                                                      if
                                                                      (rtb_UnitDelay_nn
                                                                      &&
                                                                      rtb_Logical5_p)
                                                                      {
                                                                      /* Decision 'D59': '<S19>:1:166' */
                                                                      /* Condition '#7': '<S19>:1:40' */
                                                                      /* Condition '#8': '<S19>:1:44' */
                                                                      /*  Action based on Decision 59 */
                                                                      /* Action '59': '<S19>:1:550' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Fiftynine;
                                                                      }
                                                                      else
                                                                      {
                                                                      rtb_UnitDelay3_o
                                                                      =
                                                                      (rtb_UnitDelay3_o
                                                                      &&
                                                                      rtb_AND_fw);
                                                                      if
                                                                      (rtb_UnitDelay3_o
                                                                      &&
                                                                      rtb_Logical5_p)
                                                                      {
                                                                      /* Decision 'D60': '<S19>:1:168' */
                                                                      /* Condition '#7': '<S19>:1:40' */
                                                                      /* Condition '#8': '<S19>:1:44' */
                                                                      /*  Action based on Decision 60 */
                                                                      /* Action '60': '<S19>:1:556' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Sixty;
                                                                      }
                                                                      else
                                                                      {
                                                                      rtb_Logical3_nz
                                                                      =
                                                                      (rtb_Logical3_nz
                                                                      &&
                                                                      rtb_AND_fw);
                                                                      if
                                                                      (rtb_Logical3_nz
                                                                      &&
                                                                      rtb_Logical5_p)
                                                                      {
                                                                      /* Decision 'D61': '<S19>:1:170' */
                                                                      /* Condition '#7': '<S19>:1:40' */
                                                                      /* Condition '#8': '<S19>:1:44' */
                                                                      /*  Action based on Decision 61 */
                                                                      /* Action '61': '<S19>:1:562' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Sixtyone;
                                                                      }
                                                                      else
                                                                      {
                                                                      rtb_AND_pa
                                                                      =
                                                                      (rtb_AND_pa
                                                                      &&
                                                                      rtb_AND_fw);
                                                                      if
                                                                      (rtb_AND_pa
                                                                      &&
                                                                      rtb_Logical5_p)
                                                                      {
                                                                      /* Decision 'D62': '<S19>:1:172' */
                                                                      /* Condition '#7': '<S19>:1:40' */
                                                                      /* Condition '#8': '<S19>:1:44' */
                                                                      /*  Action based on Decision 62 */
                                                                      /* Action '62': '<S19>:1:568' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Sixtytwo;
                                                                      }
                                                                      else
                                                                      {
                                                                      rtb_OR1_fw
                                                                      =
                                                                      (rtb_OR1_fw
                                                                      &&
                                                                      rtb_AND_fw);
                                                                      if
                                                                      (rtb_OR1_fw
                                                                      &&
                                                                      rtb_Logical5_p)
                                                                      {
                                                                      /* Decision 'D63': '<S19>:1:174' */
                                                                      /* Condition '#7': '<S19>:1:40' */
                                                                      /* Condition '#8': '<S19>:1:44' */
                                                                      /*  Action based on Decision 63 */
                                                                      /* Action '63': '<S19>:1:574' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Sixtythree;
                                                                      }
                                                                      else if
                                                                      (rtb_Merge4
                                                                      &&
                                                                      rtb_AND_df)
                                                                      {
                                                                      /* Decision 'D64': '<S19>:1:176' */
                                                                      /* Condition '#7': '<S19>:1:40' */
                                                                      /* Condition '#8': '<S19>:1:44' */
                                                                      /* Condition '#9': '<S19>:1:48' */
                                                                      /*  Action based on Decision 64 */
                                                                      /* Action '64': '<S19>:1:580' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Sixtyfour;
                                                                      }
                                                                      else if
                                                                      (rtb_Logical1_p
                                                                      &&
                                                                      rtb_AND_df)
                                                                      {
                                                                      /* Decision 'D65': '<S19>:1:178' */
                                                                      /* Condition '#7': '<S19>:1:40' */
                                                                      /* Condition '#8': '<S19>:1:44' */
                                                                      /* Condition '#9': '<S19>:1:48' */
                                                                      /*  Action based on Decision 65 */
                                                                      /* Action '65': '<S19>:1:586' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Sixtyfive;
                                                                      }
                                                                      else if
                                                                      (rtb_Logical9_j
                                                                      &&
                                                                      rtb_AND_df)
                                                                      {
                                                                      /* Decision 'D66': '<S19>:1:180' */
                                                                      /* Condition '#7': '<S19>:1:40' */
                                                                      /* Condition '#8': '<S19>:1:44' */
                                                                      /* Condition '#9': '<S19>:1:48' */
                                                                      /*  Action based on Decision 66 */
                                                                      /* Action '66': '<S19>:1:592' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Sixtysix;
                                                                      }
                                                                      else if
                                                                      (rtb_AND_fx
                                                                      &&
                                                                      rtb_AND_df)
                                                                      {
                                                                      /* Decision 'D67': '<S19>:1:182' */
                                                                      /* Condition '#7': '<S19>:1:40' */
                                                                      /* Condition '#8': '<S19>:1:44' */
                                                                      /* Condition '#9': '<S19>:1:48' */
                                                                      /*  Action based on Decision 67 */
                                                                      /* Action '67': '<S19>:1:598' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Sixtyseven;
                                                                      }
                                                                      else if
                                                                      (rtb_UnitDelay_nn
                                                                      &&
                                                                      rtb_AND_df)
                                                                      {
                                                                      /* Decision 'D68': '<S19>:1:184' */
                                                                      /* Condition '#7': '<S19>:1:40' */
                                                                      /* Condition '#8': '<S19>:1:44' */
                                                                      /* Condition '#9': '<S19>:1:48' */
                                                                      /*  Action based on Decision 68 */
                                                                      /* Action '68': '<S19>:1:604' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Sixtyeight;
                                                                      }
                                                                      else if
                                                                      (rtb_UnitDelay3_o
                                                                      &&
                                                                      rtb_AND_df)
                                                                      {
                                                                      /* Decision 'D69': '<S19>:1:186' */
                                                                      /* Condition '#7': '<S19>:1:40' */
                                                                      /* Condition '#8': '<S19>:1:44' */
                                                                      /* Condition '#9': '<S19>:1:48' */
                                                                      /*  Action based on Decision 69 */
                                                                      /* Action '69': '<S19>:1:610' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Sixtynine;
                                                                      }
                                                                      else if
                                                                      (rtb_Logical3_nz
                                                                      &&
                                                                      rtb_AND_df)
                                                                      {
                                                                      /* Decision 'D70': '<S19>:1:188' */
                                                                      /* Condition '#7': '<S19>:1:40' */
                                                                      /* Condition '#8': '<S19>:1:44' */
                                                                      /* Condition '#9': '<S19>:1:48' */
                                                                      /*  Action based on Decision 70 */
                                                                      /* Action '70': '<S19>:1:616' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Seventy;
                                                                      }
                                                                      else if
                                                                      (rtb_AND_pa
                                                                      &&
                                                                      rtb_AND_df)
                                                                      {
                                                                      /* Decision 'D71': '<S19>:1:190' */
                                                                      /* Condition '#7': '<S19>:1:40' */
                                                                      /* Condition '#8': '<S19>:1:44' */
                                                                      /* Condition '#9': '<S19>:1:48' */
                                                                      /*  Action based on Decision 71 */
                                                                      /* Action '71': '<S19>:1:622' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Seventyone;
                                                                      }
                                                                      else if
                                                                      (rtb_OR1_fw
                                                                      &&
                                                                      rtb_AND_df)
                                                                      {
                                                                      /* Decision 'D72': '<S19>:1:192' */
                                                                      /* Condition '#7': '<S19>:1:40' */
                                                                      /* Condition '#8': '<S19>:1:44' */
                                                                      /* Condition '#9': '<S19>:1:48' */
                                                                      /*  Action based on Decision 72 */
                                                                      /* Action '72': '<S19>:1:628' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Seventytwo;
                                                                      }
                                                                      else
                                                                      {
                                                                      /*  Default */
                                                                      /*  Action based on Decision 73 */
                                                                      /* Action '73': '<S19>:1:634' */
                                                                      rtb_VeSSDR_K_Index_T1
                                                                      =
                                                                      SSDR_ac_Seventythree;
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                      }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }

        /* End of Truth Table: '<S7>/TruthTable1' */

        /* Truth Table: '<S7>/TruthTable2' */
        /* Truth Table Function 'SSDR_FastTEF/SSDC_DtrmSysState/DtrmnPTSysState/TruthTable2': '<S20>:1' */
        /*  Key Status: Key Off */
        /* Condition '#1': '<S20>:1:17' */
        aVarTruthTableCondition_1 = (((uint32)Switch1_h) == CeSSDR_e_KeyOff);

        /*  Key Status: Key in Accy Position */
        /* Condition '#2': '<S20>:1:21' */
        aVarTruthTableCondition_2 = (((uint32)Switch1_h) == CeSSDR_e_KeyAccy);

        /*  Key Status: Key in Run Position */
        /* Condition '#3': '<S20>:1:25' */
        aVarTruthTableCondition_3 = (((uint32)Switch1_h) == CeSSDR_e_KeyRun);

        /*  Key Status: Key in Crank Positio */
        /* Condition '#4': '<S20>:1:29' */
        aVarTruthTableCondition_4 = (((uint32)Switch1_h) == CeSSDR_e_KeyCrank);

        /*  Key Status: Key in Post Crank Position */
        /* Condition '#5': '<S20>:1:33' */
        aVarTruthTableCondition_5 = (((uint32)Switch1_h) == CeSSDR_e_KeyPostCrnk);

        /*  HV Battery Charge Status: Not Plugged In */
        /* Condition '#6': '<S20>:1:37' */
        rtb_UnitDelay_gw = (((uint32)rtb_Switch1_e) == CeSSDR_e_NotPlgdIn);

        /*  HV Battery Charge Status: Plugged in with No Operation. Cannot Drive. Cannot Charg */
        /* Condition '#7': '<S20>:1:41' */
        aVarTruthTableCondition_7 = (((uint32)rtb_Switch1_e) ==
            CeSSDR_e_PlgIn_NOOP);

        /*  HV Battery Charge Status: Plugged In with No Charge Request */
        /* Condition '#8': '<S20>:1:45' */
        aVarTruthTableCondition_8 = (((uint32)rtb_Switch1_e) ==
            CeSSDR_e_PlgIn_NoChrgReq);

        /*  HV Battery Charge Status:Plugged In. Okay to Charge HV Battery */
        /* Condition '#9': '<S20>:1:49' */
        aVarTruthTableCondition_9 = (((uint32)rtb_Switch1_e) ==
            CeSSDR_e_PlgIn_HVBattChrg);

        /*  Key Status: Key in Post Run Accy Position */
        /* Condition '#10': '<S20>:1:53' */
        aVarTruthTableCondition_10 = (((uint32)Switch1_h) ==
            CeSSDR_e_KeyPostRunAccy);
        rtb_AND_pa = !aVarTruthTableCondition_3;
        rtb_OR1_fw = !aVarTruthTableCondition_4;
        rtb_UnitDelay3_o = !aVarTruthTableCondition_5;
        rtb_Merge4 = !aVarTruthTableCondition_7;
        rtb_Logical1_p = !aVarTruthTableCondition_8;
        rtb_Logical5_p = !aVarTruthTableCondition_9;
        rtb_Logical9_j = !aVarTruthTableCondition_10;
        rtb_Logical3_nz = !aVarTruthTableCondition_2;
        rtb_AND_fx = ((((aVarTruthTableCondition_1 && rtb_Logical3_nz) &&
                        rtb_AND_pa) && rtb_OR1_fw) && rtb_UnitDelay3_o);
        if (((((rtb_AND_fx && rtb_UnitDelay_gw) && rtb_Merge4) && rtb_Logical1_p)
             && rtb_Logical5_p) && rtb_Logical9_j)
        {
            /* Decision 'D1': '<S20>:1:55' */
            /*  Action based on Decision 1 */
            /* Action '1': '<S20>:1:111' */
            rtb_VeSSDR_K_Index_T2 = SSDR_ac_One;
        }
        else
        {
            rtb_UnitDelay_nn = !aVarTruthTableCondition_1;
            rtb_UnitDelay_m = ((((rtb_UnitDelay_nn && aVarTruthTableCondition_2)
                                 && rtb_AND_pa) && rtb_OR1_fw) &&
                               rtb_UnitDelay3_o);
            if (((((rtb_UnitDelay_m && rtb_UnitDelay_gw) && rtb_Merge4) &&
                    rtb_Logical1_p) && rtb_Logical5_p) && rtb_Logical9_j)
            {
                /* Decision 'D2': '<S20>:1:57' */
                /*  Action based on Decision 2 */
                /* Action '2': '<S20>:1:117' */
                rtb_VeSSDR_K_Index_T2 = SSDR_ac_Two;
            }
            else
            {
                rtb_Logical3_nz = (rtb_UnitDelay_nn && rtb_Logical3_nz);
                rtb_UnitDelay_nn = (((rtb_Logical3_nz &&
                                      aVarTruthTableCondition_3) && rtb_OR1_fw) &&
                                    rtb_UnitDelay3_o);
                if (((((rtb_UnitDelay_nn && rtb_UnitDelay_gw) && rtb_Merge4) &&
                        rtb_Logical1_p) && rtb_Logical5_p) && rtb_Logical9_j)
                {
                    /* Decision 'D3': '<S20>:1:59' */
                    /*  Action based on Decision 3 */
                    /* Action '3': '<S20>:1:123' */
                    rtb_VeSSDR_K_Index_T2 = SSDR_ac_Three;
                }
                else
                {
                    rtb_AND_pa = (rtb_Logical3_nz && rtb_AND_pa);
                    rtb_Logical3_nz = ((rtb_AND_pa && aVarTruthTableCondition_4)
                                       && rtb_UnitDelay3_o);
                    if (((((rtb_Logical3_nz && rtb_UnitDelay_gw) && rtb_Merge4) &&
                          rtb_Logical1_p) && rtb_Logical5_p) && rtb_Logical9_j)
                    {
                        /* Decision 'D4': '<S20>:1:61' */
                        /*  Action based on Decision 4 */
                        /* Action '4': '<S20>:1:129' */
                        rtb_VeSSDR_K_Index_T2 = SSDR_ac_Four;
                    }
                    else
                    {
                        rtb_AND_pa = (rtb_AND_pa && rtb_OR1_fw);
                        rtb_OR1_fw = (rtb_AND_pa && aVarTruthTableCondition_5);
                        if (((((rtb_OR1_fw && rtb_UnitDelay_gw) && rtb_Merge4) &&
                              rtb_Logical1_p) && rtb_Logical5_p) &&
                                rtb_Logical9_j)
                        {
                            /* Decision 'D5': '<S20>:1:63' */
                            /*  Action based on Decision 5 */
                            /* Action '5': '<S20>:1:135' */
                            rtb_VeSSDR_K_Index_T2 = SSDR_ac_Five;
                        }
                        else
                        {
                            aVarTruthTableCondition_1 = !rtb_UnitDelay_gw;
                            rtb_AND_fx = (rtb_AND_fx &&
                                          aVarTruthTableCondition_1);
                            if ((((rtb_AND_fx && aVarTruthTableCondition_7) &&
                                    rtb_Logical1_p) && rtb_Logical5_p) &&
                                    rtb_Logical9_j)
                            {
                                /* Decision 'D6': '<S20>:1:65' */
                                /*  Action based on Decision 6 */
                                /* Action '6': '<S20>:1:141' */
                                rtb_VeSSDR_K_Index_T2 = SSDR_ac_Six;
                            }
                            else
                            {
                                rtb_UnitDelay_m = (rtb_UnitDelay_m &&
                                                   aVarTruthTableCondition_1);
                                if ((((rtb_UnitDelay_m &&
                                        aVarTruthTableCondition_7) &&
                                        rtb_Logical1_p) && rtb_Logical5_p) &&
                                        rtb_Logical9_j)
                                {
                                    /* Decision 'D7': '<S20>:1:67' */
                                    /*  Action based on Decision 7 */
                                    /* Action '7': '<S20>:1:147' */
                                    rtb_VeSSDR_K_Index_T2 = SSDR_ac_Seven;
                                }
                                else
                                {
                                    rtb_UnitDelay_nn = (rtb_UnitDelay_nn &&
                                                        aVarTruthTableCondition_1);
                                    if ((((rtb_UnitDelay_nn &&
                                            aVarTruthTableCondition_7) &&
                                            rtb_Logical1_p) && rtb_Logical5_p) &&
                                        rtb_Logical9_j)
                                    {
                                        /* Decision 'D8': '<S20>:1:69' */
                                        /*  Action based on Decision 8 */
                                        /* Action '8': '<S20>:1:153' */
                                        rtb_VeSSDR_K_Index_T2 = SSDR_ac_Eight;
                                    }
                                    else
                                    {
                                        rtb_Logical3_nz = (rtb_Logical3_nz &&
                                                           aVarTruthTableCondition_1);
                                        if ((((rtb_Logical3_nz &&
                                                aVarTruthTableCondition_7) &&
                                                rtb_Logical1_p) &&
                                                rtb_Logical5_p) &&
                                                rtb_Logical9_j)
                                        {
                                            /* Decision 'D9': '<S20>:1:71' */
                                            /*  Action based on Decision 9 */
                                            /* Action '9': '<S20>:1:159' */
                                            rtb_VeSSDR_K_Index_T2 = SSDR_ac_Nine;
                                        }
                                        else
                                        {
                                            rtb_OR1_fw = (rtb_OR1_fw &&
                                                          aVarTruthTableCondition_1);
                                            if ((((rtb_OR1_fw &&
                                                    aVarTruthTableCondition_7) &&
                                                  rtb_Logical1_p) &&
                                                    rtb_Logical5_p) &&
                                                    rtb_Logical9_j)
                                            {
                                                /* Decision 'D10': '<S20>:1:73' */
                                                /*  Action based on Decision 10 */
                                                /* Action '10': '<S20>:1:165' */
                                                rtb_VeSSDR_K_Index_T2 =
                                                    SSDR_ac_Ten;
                                            }
                                            else
                                            {
                                                rtb_AND_fx = (rtb_AND_fx &&
                                                              rtb_Merge4);
                                                if (((rtb_AND_fx &&
                                                        aVarTruthTableCondition_8)
                                                     && rtb_Logical5_p) &&
                                                        rtb_Logical9_j)
                                                {
                                                    /* Decision 'D11': '<S20>:1:75' */
                                                    /*  Action based on Decision 11 */
                                                    /* Action '11': '<S20>:1:171' */
                                                    rtb_VeSSDR_K_Index_T2 =
                                                        SSDR_ac_Eleven;
                                                }
                                                else
                                                {
                                                    rtb_UnitDelay_m =
                                                        (rtb_UnitDelay_m &&
                                                         rtb_Merge4);
                                                    if (((rtb_UnitDelay_m &&
                                                            aVarTruthTableCondition_8)
                                                         && rtb_Logical5_p) &&
                                                            rtb_Logical9_j)
                                                    {
                                                        /* Decision 'D12': '<S20>:1:77' */
                                                        /*  Action based on Decision 12 */
                                                        /* Action '12': '<S20>:1:177' */
                                                        rtb_VeSSDR_K_Index_T2 =
                                                            SSDR_ac_Twelve;
                                                    }
                                                    else
                                                    {
                                                        rtb_UnitDelay_nn =
                                                            (rtb_UnitDelay_nn &&
                                                             rtb_Merge4);
                                                        if (((rtb_UnitDelay_nn &&
                                                              aVarTruthTableCondition_8)
                                                             && rtb_Logical5_p) &&
                                                            rtb_Logical9_j)
                                                        {
                                                            /* Decision 'D13': '<S20>:1:79' */
                                                            /*  Action based on Decision 13 */
                                                            /* Action '13': '<S20>:1:183' */
                                                            rtb_VeSSDR_K_Index_T2
                                                                =
                                                                SSDR_ac_Thirteen;
                                                        }
                                                        else
                                                        {
                                                            rtb_Logical3_nz =
                                                                (rtb_Logical3_nz
                                                                 && rtb_Merge4);
                                                            if (((rtb_Logical3_nz
                                                                  &&
                                                                    aVarTruthTableCondition_8)
                                                                 && rtb_Logical5_p)
                                                                && rtb_Logical9_j)
                                                            {
                                                                /* Decision 'D14': '<S20>:1:81' */
                                                                /*  Action based on Decision 14 */
                                                                /* Action '14': '<S20>:1:189' */
                                                                rtb_VeSSDR_K_Index_T2
                                                                    =
                                                                    SSDR_ac_Fourteen;
                                                            }
                                                            else
                                                            {
                                                                rtb_OR1_fw =
                                                                    (rtb_OR1_fw &&
                                                                     rtb_Merge4);
                                                                if (((rtb_OR1_fw
                                                                      &&
                                                                      aVarTruthTableCondition_8)
                                                                     &&
                                                                      rtb_Logical5_p)
                                                                    &&
                                                                      rtb_Logical9_j)
                                                                {
                                                                    /* Decision 'D15': '<S20>:1:83' */
                                                                    /*  Action based on Decision 15 */
                                                                    /* Action '15': '<S20>:1:195' */
                                                                    rtb_VeSSDR_K_Index_T2
                                                                      =
                                                                      SSDR_ac_Fifteen;
                                                                }
                                                                else if
                                                                      (((rtb_AND_fx
                                                                      &&
                                                                      rtb_Logical1_p)
                                                                      &&
                                                                      aVarTruthTableCondition_9)
                                                                      &&
                                                                      rtb_Logical9_j)
                                                                {
                                                                    /* Decision 'D16': '<S20>:1:85' */
                                                                    /*  Action based on Decision 16 */
                                                                    /* Action '16': '<S20>:1:201' */
                                                                    rtb_VeSSDR_K_Index_T2
                                                                      =
                                                                      SSDR_ac_Sixteen;
                                                                }
                                                                else if
                                                                      (((rtb_UnitDelay_m
                                                                      &&
                                                                      rtb_Logical1_p)
                                                                      &&
                                                                      aVarTruthTableCondition_9)
                                                                      &&
                                                                      rtb_Logical9_j)
                                                                {
                                                                    /* Decision 'D17': '<S20>:1:87' */
                                                                    /*  Action based on Decision 17 */
                                                                    /* Action '17': '<S20>:1:207' */
                                                                    rtb_VeSSDR_K_Index_T2
                                                                      =
                                                                      SSDR_ac_Seventeen;
                                                                }
                                                                else if
                                                                      (((rtb_UnitDelay_nn
                                                                      &&
                                                                      rtb_Logical1_p)
                                                                      &&
                                                                      aVarTruthTableCondition_9)
                                                                      &&
                                                                      rtb_Logical9_j)
                                                                {
                                                                    /* Decision 'D18': '<S20>:1:89' */
                                                                    /*  Action based on Decision 18 */
                                                                    /* Action '18': '<S20>:1:213' */
                                                                    rtb_VeSSDR_K_Index_T2
                                                                      =
                                                                      SSDR_ac_Eighteen;
                                                                }
                                                                else if
                                                                      (((rtb_Logical3_nz
                                                                      &&
                                                                      rtb_Logical1_p)
                                                                      &&
                                                                      aVarTruthTableCondition_9)
                                                                      &&
                                                                      rtb_Logical9_j)
                                                                {
                                                                    /* Decision 'D19': '<S20>:1:91' */
                                                                    /*  Action based on Decision 19 */
                                                                    /* Action '19': '<S20>:1:219' */
                                                                    rtb_VeSSDR_K_Index_T2
                                                                      =
                                                                      SSDR_ac_Nineteen;
                                                                }
                                                                else if
                                                                      (((rtb_OR1_fw
                                                                      &&
                                                                      rtb_Logical1_p)
                                                                      &&
                                                                      aVarTruthTableCondition_9)
                                                                      &&
                                                                      rtb_Logical9_j)
                                                                {
                                                                    /* Decision 'D20': '<S20>:1:93' */
                                                                    /*  Action based on Decision 20 */
                                                                    /* Action '20': '<S20>:1:225' */
                                                                    rtb_VeSSDR_K_Index_T2
                                                                      =
                                                                      SSDR_ac_Twenty;
                                                                }
                                                                else
                                                                {
                                                                    rtb_AND_pa =
                                                                      (rtb_AND_pa
                                                                      &&
                                                                      rtb_UnitDelay3_o);
                                                                    if
                                                                      (((((rtb_AND_pa
                                                                      &&
                                                                      rtb_UnitDelay_gw)
                                                                      &&
                                                                      rtb_Merge4)
                                                                      &&
                                                                      rtb_Logical1_p)
                                                                      &&
                                                                      rtb_Logical5_p)
                                                                      &&
                                                                      aVarTruthTableCondition_10)
                                                                    {
                                                                      /* Decision 'D21': '<S20>:1:95' */
                                                                      /*  Action based on Decision 21 */
                                                                      /* Action '21': '<S20>:1:231' */
                                                                      rtb_VeSSDR_K_Index_T2
                                                                      =
                                                                      SSDR_ac_TwentyOne;
                                                                    }
                                                                    else
                                                                    {
                                                                      rtb_AND_pa
                                                                      =
                                                                      (rtb_AND_pa
                                                                      &&
                                                                      aVarTruthTableCondition_1);
                                                                      if
                                                                      ((((rtb_AND_pa
                                                                      &&
                                                                      aVarTruthTableCondition_7)
                                                                      &&
                                                                      rtb_Logical1_p)
                                                                      &&
                                                                      rtb_Logical5_p)
                                                                      &&
                                                                      aVarTruthTableCondition_10)
                                                                      {
                                                                      /* Decision 'D22': '<S20>:1:97' */
                                                                      /*  Action based on Decision 22 */
                                                                      /* Action '22': '<S20>:1:237' */
                                                                      rtb_VeSSDR_K_Index_T2
                                                                      =
                                                                      SSDR_ac_TwentyTwo;
                                                                      }
                                                                      else
                                                                      {
                                                                      rtb_AND_pa
                                                                      =
                                                                      (rtb_AND_pa
                                                                      &&
                                                                      rtb_Merge4);
                                                                      if
                                                                      (((rtb_AND_pa
                                                                      &&
                                                                      aVarTruthTableCondition_8)
                                                                      &&
                                                                      rtb_Logical5_p)
                                                                      &&
                                                                      aVarTruthTableCondition_10)
                                                                      {
                                                                      /* Decision 'D23': '<S20>:1:99' */
                                                                      /*  Action based on Decision 23 */
                                                                      /* Action '23': '<S20>:1:243' */
                                                                      rtb_VeSSDR_K_Index_T2
                                                                      =
                                                                      SSDR_ac_TwentyThree;
                                                                      }
                                                                      else if
                                                                      (((rtb_AND_pa
                                                                      &&
                                                                      rtb_Logical1_p)
                                                                      &&
                                                                      aVarTruthTableCondition_9)
                                                                      &&
                                                                      aVarTruthTableCondition_10)
                                                                      {
                                                                      /* Decision 'D24': '<S20>:1:101' */
                                                                      /*  Action based on Decision 24 */
                                                                      /* Action '24': '<S20>:1:249' */
                                                                      rtb_VeSSDR_K_Index_T2
                                                                      =
                                                                      SSDR_ac_TwentyFour;
                                                                      }
                                                                      else
                                                                      {
                                                                      /* Decision 'D25': '<S20>:1:103' */
                                                                      /*  Default */
                                                                      /*  Action based on Decision 25 */
                                                                      /* Action '25': '<S20>:1:255' */
                                                                      rtb_VeSSDR_K_Index_T2
                                                                      =
                                                                      SSDR_ac_TwentyFive;
                                                                      }
                                                                      }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }

        /* End of Truth Table: '<S7>/TruthTable2' */

        /* Switch: '<S7>/Switch' incorporates:
         *  Constant: '<S15>/Calib'
         */
        if (KeSSDR_b_UseCalForEncSysSt)
        {
            /* Switch: '<S7>/Switch' incorporates:
             *  Constant: '<S14>/Calib'
             */
            rtb_VeSSDR_K_EncSysState = KeSSDR_K_EncSysStOvrd;
        }
        else
        {
            /* Switch: '<S7>/Switch' incorporates:
             *  Constant: '<S13>/Calib'
             *  Selector: '<S7>/Selector'
             */
            rtb_VeSSDR_K_EncSysState = KaSSDR_K_EncodedSysSt[(((((sint32)
                rtb_VeSSDR_K_Index_T2) - 1) * 73) + ((sint32)
                rtb_VeSSDR_K_Index_T1)) - 1];
        }

        /* End of Switch: '<S7>/Switch' */

        /* RelationalOperator: '<S21>/Compare' incorporates:
         *  Constant: '<S12>/Constant17'
         *  Constant: '<S21>/Constant'
         *  S-Function (sfix_bitop): '<S12>/Bitwise Logical Operator'
         */
        SSDR_ac_B.Compare = ((((sint32)rtb_VeSSDR_K_EncSysState) & 1) > 0);

        /* RelationalOperator: '<S22>/Compare' incorporates:
         *  Constant: '<S12>/Constant25'
         *  Constant: '<S22>/Constant'
         *  S-Function (sfix_bitop): '<S12>/Bitwise Logical Operator1'
         */
        SSDR_ac_B.Compare_h = ((((sint32)rtb_VeSSDR_K_EncSysState) & 2) > 0);

        /* RelationalOperator: '<S23>/Compare' incorporates:
         *  Constant: '<S12>/Constant26'
         *  Constant: '<S23>/Constant'
         *  S-Function (sfix_bitop): '<S12>/Bitwise Logical Operator2'
         */
        SSDR_ac_B.Compare_m = ((((sint32)rtb_VeSSDR_K_EncSysState) & 4) > 0);

        /* RelationalOperator: '<S24>/Compare' incorporates:
         *  Constant: '<S12>/Constant27'
         *  Constant: '<S24>/Constant'
         *  S-Function (sfix_bitop): '<S12>/Bitwise Logical Operator3'
         */
        SSDR_ac_B.Compare_d = ((((sint32)rtb_VeSSDR_K_EncSysState) & 8) > 0);

        /* RelationalOperator: '<S25>/Compare' incorporates:
         *  Constant: '<S12>/Constant31'
         *  Constant: '<S25>/Constant'
         *  S-Function (sfix_bitop): '<S12>/Bitwise Logical Operator7'
         */
        VeSSDC_b_EnblHVSysArb = ((((sint32)rtb_VeSSDR_K_EncSysState) & 128) > 0);

        /* RelationalOperator: '<S26>/Compare' incorporates:
         *  Constant: '<S12>/Constant30'
         *  Constant: '<S26>/Constant'
         *  S-Function (sfix_bitop): '<S12>/Bitwise Logical Operator6'
         */
        SSDR_ac_B.Compare_l = ((((sint32)rtb_VeSSDR_K_EncSysState) & 64) > 0);

        /* RelationalOperator: '<S27>/Compare' incorporates:
         *  Constant: '<S12>/Constant29'
         *  Constant: '<S27>/Constant'
         *  S-Function (sfix_bitop): '<S12>/Bitwise Logical Operator5'
         */
        SSDR_ac_B.Compare_o = ((((sint32)rtb_VeSSDR_K_EncSysState) & 32) > 0);

        /* RelationalOperator: '<S28>/Compare' incorporates:
         *  Constant: '<S12>/Constant28'
         *  Constant: '<S28>/Constant'
         *  S-Function (sfix_bitop): '<S12>/Bitwise Logical Operator4'
         */
        SSDR_ac_B.Compare_l0 = ((((sint32)rtb_VeSSDR_K_EncSysState) & 16) > 0);

        /* RelationalOperator: '<S29>/Compare' incorporates:
         *  Constant: '<S12>/Constant32'
         *  Constant: '<S29>/Constant'
         *  S-Function (sfix_bitop): '<S12>/Bitwise Logical Operator8'
         */
        SSDR_ac_B.Compare_da = ((((sint32)rtb_VeSSDR_K_EncSysState) & 256) > 0);

        /* Sum: '<S18>/Sum2' incorporates:
         *  Constant: '<S30>/Calib'
         *  Constant: '<S31>/Calib'
         *  Constant: '<S32>/Calib'
         *  Product: '<S18>/Product'
         *  Sum: '<S18>/Sum'
         *  Sum: '<S18>/Sum1'
         */
        VeSSDR_K_EncSysStActual_Idx = ((((uint32)((uint16)(rtb_VeSSDR_K_Index_T2
            - KeSSDR_K_EncodedSysSt_IdxDec1))) * ((uint32)
            KeSSDR_K_EncodedSysSt_IdxDec2)) + ((uint32)rtb_VeSSDR_K_Index_T1)) -
            ((uint32)KeSSDR_K_EncodedSysSt_IdxDec3);
    }

    /* End of Outputs for SubSystem: '<S4>/DtrmnPTSysState' */

    /* Logic: '<S33>/Logical5' incorporates:
     *  Constant: '<S59>/Constant'
     *  Constant: '<S60>/Constant'
     *  Constant: '<S61>/Constant'
     *  Constant: '<S76>/Calib'
     *  Logic: '<S33>/Logical6'
     *  RelationalOperator: '<S33>/Comparison10'
     *  RelationalOperator: '<S33>/Comparison11'
     *  RelationalOperator: '<S33>/Comparison9'
     *  Switch: '<S5>/Switch20'
     *  Switch: '<S5>/Switch27'
     */
    rtb_AND_pa = (((KeSSDR_b_EnblDsblDrvTPChkOvrdMnvr) && ((((uint32)
                      VeSSDI_e_ESMTransRngSt) == CeTRGR_e_TransRangeReverse) ||
                    (((uint32)VeSSDI_e_ESMTransRngSt) ==
                     CeTRGR_e_TransRangeDrive))) && (((uint32)
                    VeSSDI_e_BrkPedalDscrtInpt) == CeBRKR_e_BrkApplied));

    /* Outputs for Atomic SubSystem: '<S33>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S84>/EdgeRising' */
    /* Logic: '<S88>/AND' incorporates:
     *  Logic: '<S88>/OR1'
     *  UnitDelay: '<S88>/Unit Delay'
     */
    rtb_UnitDelay_gw = (rtb_AND_pa && (!SSDR_ac_DW.UnitDelay_DSTATE_bc));

    /* Update for UnitDelay: '<S88>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_bc = rtb_AND_pa;

    /* End of Outputs for SubSystem: '<S84>/EdgeRising' */

    /* Switch: '<S84>/Switch1' incorporates:
     *  Constant: '<S66>/Calib'
     *  Constant: '<S84>/Constant Value'
     *  Constant: '<S84>/Constant Value1'
     *  Logic: '<S84>/OR'
     *  Logic: '<S84>/OR1'
     *  MinMax: '<S84>/Minimum'
     *  Sum: '<S84>/Summation'
     *  UnitDelay: '<S84>/Unit Delay'
     */
    if ((!rtb_AND_pa) || rtb_UnitDelay_gw)
    {
        SSDR_ac_DW.UnitDelay_DSTATE_b2 = 0U;
    }
    else if (KeSSDR_Cnt_DrvAllwdTPChkDbnc < ((uint16)(((uint32)
                SSDR_ac_DW.UnitDelay_DSTATE_b2) + 1U)))
    {
        /* MinMax: '<S84>/Minimum' incorporates:
         *  Constant: '<S66>/Calib'
         */
        SSDR_ac_DW.UnitDelay_DSTATE_b2 = KeSSDR_Cnt_DrvAllwdTPChkDbnc;
    }
    else
    {
        /* MinMax: '<S84>/Minimum' incorporates:
         *  Constant: '<S84>/Constant Value'
         *  Sum: '<S84>/Summation'
         *  UnitDelay: '<S84>/Unit Delay'
         */
        SSDR_ac_DW.UnitDelay_DSTATE_b2 = (uint16)(((uint32)
            SSDR_ac_DW.UnitDelay_DSTATE_b2) + 1U);
    }

    /* End of Switch: '<S84>/Switch1' */

    /* Logic: '<S84>/AND' incorporates:
     *  Constant: '<S66>/Calib'
     *  RelationalOperator: '<S84>/Greater  Than'
     *  UnitDelay: '<S84>/Unit Delay'
     */
    VeSSDC_b_DrvTPChkOvrd = (rtb_AND_pa && (SSDR_ac_DW.UnitDelay_DSTATE_b2 >=
        KeSSDR_Cnt_DrvAllwdTPChkDbnc));

    /* End of Outputs for SubSystem: '<S33>/Turn On Delay Sample1' */

    /* UnitDelay: '<S33>/Unit Delay1' */
    VeSSDC_b_DrvAllwdPrev = VeSSDC_b_DrvAllwdArbTpChck;

    /* Outputs for Atomic SubSystem: '<S33>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S83>/EdgeRising' */
    /* Logic: '<S87>/AND' incorporates:
     *  Logic: '<S87>/OR1'
     *  UnitDelay: '<S87>/Unit Delay'
     */
    rtb_AND_pa = ((VeSSDC_b_DrvAllwdPrev) && (!SSDR_ac_DW.UnitDelay_DSTATE_pl));

    /* Update for UnitDelay: '<S87>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_pl = VeSSDC_b_DrvAllwdPrev;

    /* End of Outputs for SubSystem: '<S83>/EdgeRising' */

    /* Switch: '<S83>/Switch1' incorporates:
     *  Constant: '<S64>/Calib'
     *  Constant: '<S83>/Constant Value'
     *  Constant: '<S83>/Constant Value1'
     *  Logic: '<S83>/OR'
     *  Logic: '<S83>/OR1'
     *  MinMax: '<S83>/Minimum'
     *  Sum: '<S83>/Summation'
     *  UnitDelay: '<S83>/Unit Delay'
     */
    if ((!VeSSDC_b_DrvAllwdPrev) || rtb_AND_pa)
    {
        SSDR_ac_DW.UnitDelay_DSTATE_bnd = 0U;
    }
    else if (KeSSDR_Cnt_DrvAllwdDbnc < ((uint16)(((uint32)
                SSDR_ac_DW.UnitDelay_DSTATE_bnd) + 1U)))
    {
        /* MinMax: '<S83>/Minimum' incorporates:
         *  Constant: '<S64>/Calib'
         */
        SSDR_ac_DW.UnitDelay_DSTATE_bnd = KeSSDR_Cnt_DrvAllwdDbnc;
    }
    else
    {
        /* MinMax: '<S83>/Minimum' incorporates:
         *  Constant: '<S83>/Constant Value'
         *  Sum: '<S83>/Summation'
         *  UnitDelay: '<S83>/Unit Delay'
         */
        SSDR_ac_DW.UnitDelay_DSTATE_bnd = (uint16)(((uint32)
            SSDR_ac_DW.UnitDelay_DSTATE_bnd) + 1U);
    }

    /* End of Switch: '<S83>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S33>/Signal Latch On With Reset' */
    /* Logic: '<S80>/OR1' incorporates:
     *  Constant: '<S52>/Constant'
     *  Constant: '<S64>/Calib'
     *  Logic: '<S33>/Logical2'
     *  Logic: '<S80>/NOT'
     *  Logic: '<S80>/OR'
     *  Logic: '<S83>/AND'
     *  RelationalOperator: '<S33>/Comparison1'
     *  RelationalOperator: '<S33>/Comparison4'
     *  RelationalOperator: '<S83>/Greater  Than'
     *  UnitDelay: '<S33>/Unit Delay'
     *  UnitDelay: '<S80>/Unit Delay'
     *  UnitDelay: '<S83>/Unit Delay'
     */
    VeSSDC_b_DrvAllwdLtchd = (((VeSSDC_b_DrvAllwdPrev) &&
        (SSDR_ac_DW.UnitDelay_DSTATE_bnd >= KeSSDR_Cnt_DrvAllwdDbnc)) ||
        (((((uint32)SSDR_ac_DW.UnitDelay_DSTATE_hmy) == CeSSDR_e_KeyCrank) ||
          (CeSSDR_e_KeyCrank != ((uint32)Switch1_h))) && (VeSSDC_b_DrvAllwdLtchd)));

    /* End of Outputs for SubSystem: '<S33>/Signal Latch On With Reset' */
    /* End of Outputs for SubSystem: '<S33>/Turn On Delay Sample' */

    /* Switch: '<S33>/Switch3' incorporates:
     *  Logic: '<S33>/Logical3'
     */
    if ((VeSSDI_b_HV_BatModTempMaxFA) || (VeSSDI_b_HV_BatModTempMinFA))
    {
        /* Switch: '<S33>/Switch3' incorporates:
         *  Constant: '<S69>/Calib'
         */
        VeSSDC_T_BatModTmpFAArb = KeSSDR_T_BatModTmpFAOvrd;
    }
    else
    {
        /* Switch: '<S33>/Switch3' */
        VeSSDC_T_BatModTmpFAArb = VeSSDI_T_BatModTmp;
    }

    /* End of Switch: '<S33>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S33>/Hysteresis' */
    /* Switch: '<S62>/Switch1' incorporates:
     *  Constant: '<S62>/Constant Value'
     *  Constant: '<S70>/Calib'
     *  Constant: '<S71>/Calib'
     *  RelationalOperator: '<S62>/Greater  Than'
     *  RelationalOperator: '<S62>/Greater  Than1'
     *  UnitDelay: '<S62>/Unit Delay'
     */
    if (VeSSDC_T_BatModTmpFAArb > KeSSDR_T_DrvAllwHThrshld)
    {
        SSDR_ac_DW.UnitDelay_DSTATE_jz = true;
    }
    else
    {
        SSDR_ac_DW.UnitDelay_DSTATE_jz = ((VeSSDC_T_BatModTmpFAArb >=
            KeSSDR_T_DrvAllwLThrshld) && (SSDR_ac_DW.UnitDelay_DSTATE_jz));
    }

    /* End of Switch: '<S62>/Switch1' */
    /* End of Outputs for SubSystem: '<S33>/Hysteresis' */

    /* Outputs for Atomic SubSystem: '<S33>/Hysteresis1' */
    /* Switch: '<S63>/Switch1' incorporates:
     *  Constant: '<S63>/Constant Value'
     *  Constant: '<S67>/Calib'
     *  Constant: '<S68>/Calib'
     *  RelationalOperator: '<S63>/Greater  Than'
     *  RelationalOperator: '<S63>/Greater  Than1'
     *  UnitDelay: '<S63>/Unit Delay'
     */
    if (VeSSDI_P_BattLTMaxLim > KeSSDR_P_DrvAllwHThrshld)
    {
        SSDR_ac_DW.UnitDelay_DSTATE_hp = true;
    }
    else
    {
        SSDR_ac_DW.UnitDelay_DSTATE_hp = ((VeSSDI_P_BattLTMaxLim >=
            KeSSDR_P_DrvAllwLThrshld) && (SSDR_ac_DW.UnitDelay_DSTATE_hp));
    }

    /* End of Switch: '<S63>/Switch1' */
    /* End of Outputs for SubSystem: '<S33>/Hysteresis1' */

    /* Logic: '<S33>/Logical1' incorporates:
     *  UnitDelay: '<S62>/Unit Delay'
     *  UnitDelay: '<S63>/Unit Delay'
     */
    VeSSDC_b_EnblDrvAllwdTPChk = ((SSDR_ac_DW.UnitDelay_DSTATE_jz) ||
        (SSDR_ac_DW.UnitDelay_DSTATE_hp));

    /* Switch: '<S33>/Switch2' incorporates:
     *  Constant: '<S51>/Constant'
     *  Constant: '<S54>/Constant'
     *  Constant: '<S55>/Constant'
     *  Constant: '<S56>/Constant'
     *  Constant: '<S57>/Constant'
     *  Constant: '<S58>/Constant'
     *  Constant: '<S77>/Calib'
     *  Constant: '<S78>/Calib'
     *  Logic: '<S33>/Logical'
     *  Logic: '<S33>/Logical10'
     *  Logic: '<S33>/Logical4'
     *  RelationalOperator: '<S33>/Comparison2'
     *  RelationalOperator: '<S33>/Comparison3'
     *  RelationalOperator: '<S33>/Comparison5'
     *  RelationalOperator: '<S33>/Comparison6'
     *  RelationalOperator: '<S33>/Comparison7'
     *  RelationalOperator: '<S33>/Comparison8'
     *  Switch: '<S5>/Switch52'
     */
    VeSSDC_b_DrvAllwd_PN_PwrLmt = ((((((((((uint32)VeSSDI_e_VldtdTransRngSt) ==
        CeTRGR_e_TransRangeNeutral) || (((uint32)VeSSDI_e_VldtdTransRngSt) ==
        CeTRGR_e_TransRangePark)) || (((uint32)VeSSDI_e_VldtdTransRngSt) ==
        CeTRGR_e_ParkToNeutral)) || (((uint32)VeSSDI_e_VldtdTransRngSt) ==
        CeTRGR_e_NeutralToPark)) || ((((uint32)VeSSDI_e_VldtdTransRngSt) ==
        CeTRGR_e_NoSelectionAvailable) && (KeSSDR_b_EnblTransNoSlctAvail))) ||
        ((((uint32)VeSSDI_e_VldtdTransRngSt) == CeTRGR_e_TransRangeIllegal) &&
         (KeSSDR_b_EnblTransRngIllgl))) && (VeSSDC_b_EnblDrvAllwdTPChk)) ||
        ((((((((uint32)VeSSDI_e_VldtdTransRngSt) != CeTRGR_e_TransRangeNeutral) &&
             (((uint32)VeSSDI_e_VldtdTransRngSt) != CeTRGR_e_TransRangePark)) &&
            (((uint32)VeSSDI_e_VldtdTransRngSt) != CeTRGR_e_ParkToNeutral)) &&
           (((uint32)VeSSDI_e_VldtdTransRngSt) != CeTRGR_e_NeutralToPark)) &&
          ((((uint32)VeSSDI_e_VldtdTransRngSt) != CeTRGR_e_NoSelectionAvailable)
           || (!KeSSDR_b_EnblTransNoSlctAvail))) && ((((uint32)
        VeSSDI_e_VldtdTransRngSt) != CeTRGR_e_TransRangeIllegal) ||
        (!KeSSDR_b_EnblTransRngIllgl))));

    /* Switch: '<S33>/Switch' incorporates:
     *  Logic: '<S33>/Logical7'
     */
    VeSSDC_b_DrvAllwdTPChck_Arb = (((VeSSDC_b_DrvTPChkOvrd) ||
        (VeSSDC_b_DrvAllwdLtchd)) || (VeSSDC_b_DrvAllwd_PN_PwrLmt));

    /* Outputs for Atomic SubSystem: '<S33>/Count Down  Reset Trigger Enabled' */
    /* Outputs for Atomic SubSystem: '<S48>/EdgeRising_F2T' */
    /* Logic: '<S85>/OR1' incorporates:
     *  UnitDelay: '<S85>/Unit Delay'
     */
    rtb_AND_pa = !SSDR_ac_DW.UnitDelay_DSTATE_e0;

    /* Update for UnitDelay: '<S85>/Unit Delay' incorporates:
     *  Constant: '<S33>/TRUE Constant1'
     */
    SSDR_ac_DW.UnitDelay_DSTATE_e0 = true;

    /* Switch: '<S48>/Switch1' incorporates:
     *  Constant: '<S48>/Constant Value'
     *  Constant: '<S65>/Calib'
     *  Logic: '<S85>/AND'
     *  RelationalOperator: '<S48>/Greater  Than'
     *  Switch: '<S48>/Switch2'
     *  UnitDelay: '<S48>/Unit Delay'
     */
    if (rtb_AND_pa)
    {
        SSDR_ac_DW.UnitDelay_DSTATE_f5 = KeSSDR_Cnt_DrvAllwdDbncTP;
    }
    else
    {
        if (((sint32)SSDR_ac_DW.UnitDelay_DSTATE_f5) > 0)
        {
            /* UnitDelay: '<S48>/Unit Delay' incorporates:
             *  Constant: '<S48>/Constant Value1'
             *  Sum: '<S48>/Subtraction'
             *  Switch: '<S48>/Switch2'
             */
            SSDR_ac_DW.UnitDelay_DSTATE_f5 = (uint16)((sint32)(((sint32)
                SSDR_ac_DW.UnitDelay_DSTATE_f5) - 1));
        }
    }

    /* End of Switch: '<S48>/Switch1' */
    /* End of Outputs for SubSystem: '<S48>/EdgeRising_F2T' */

    /* UnitDelay: '<S155>/Unit Delay' incorporates:
     *  Constant: '<S48>/Constant Value2'
     *  Logic: '<S33>/Logical13'
     *  Logic: '<S33>/Logical14'
     *  RelationalOperator: '<S48>/Greater  Than1'
     *  UnitDelay: '<S48>/Unit Delay'
     */
    rtb_AND_pa = ((VeSSDI_b_PropSysActv) || (((sint32)
                    SSDR_ac_DW.UnitDelay_DSTATE_f5) <= 0));

    /* End of Outputs for SubSystem: '<S33>/Count Down  Reset Trigger Enabled' */

    /* Logic: '<S33>/Logical12' incorporates:
     *  Constant: '<S72>/Calib'
     *  Switch: '<S33>/Switch1'
     */
    rtb_UnitDelay3_o = ((rtb_AND_pa && (VeSSDC_b_DrvAllwdTPChck_Arb)) ||
                        (KeSSDR_b_DsblDrvAllwdPwrChck));

    /* Logic: '<S36>/Logical9' incorporates:
     *  Constant: '<S110>/Calib'
     *  Logic: '<S36>/Logical'
     */
    rtb_Logical9_j = ((VeSSDI_b_FltShtDwnBPClsdCmnd) && (KeSSDR_b_UseBPFltShtDwn));

    /* Logic: '<S36>/Logical1' incorporates:
     *  Constant: '<S111>/Calib'
     */
    rtb_Logical1_p = ((VeSSDI_b_FltShtDwnCmnd) && (KeSSDR_b_UseFltShtDwn));

    /* Outputs for Atomic SubSystem: '<S36>/Stop Watch Reset Enabled1' */
    /* Logic: '<S36>/Logical2' incorporates:
     *  Logic: '<S36>/Logical5'
     *  Switch: '<S113>/Switch1'
     */
    rtb_Logical3_nz = !VeSSDI_b_HVBatRdy;

    /* Switch: '<S113>/Switch1' incorporates:
     *  Constant: '<S113>/Constant Value2'
     *  Logic: '<S113>/Logical1'
     *  Logic: '<S113>/Logical5'
     *  Switch: '<S113>/Switch2'
     *  UnitDelay: '<S113>/Unit Delay'
     *  UnitDelay: '<S36>/Unit Delay2'
     */
    if (VeSSDI_b_HVBatRdy)
    {
        SSDR_ac_DW.UnitDelay_DSTATE_c = 0.0F;
    }
    else
    {
        if (rtb_Logical3_nz && (!SSDR_ac_DW.UnitDelay2_DSTATE_a))
        {
            /* UnitDelay: '<S113>/Unit Delay' incorporates:
             *  Constant: '<S139>/Calib'
             *  Sum: '<S113>/Subtraction'
             *  Switch: '<S113>/Switch2'
             */
            SSDR_ac_DW.UnitDelay_DSTATE_c += HeSSDR_t_dT;
        }
    }

    /* End of Outputs for SubSystem: '<S36>/Stop Watch Reset Enabled1' */

    /* RelationalOperator: '<S36>/Comparison5' incorporates:
     *  Constant: '<S112>/Calib'
     *  UnitDelay: '<S113>/Unit Delay'
     */
    SSDR_ac_DW.UnitDelay2_DSTATE_a = (SSDR_ac_DW.UnitDelay_DSTATE_c >=
        KeSSDR_t_HVBattNotRdyTimeOut);

    /* UnitDelay: '<S177>/Unit Delay' incorporates:
     *  Constant: '<S105>/Constant'
     *  RelationalOperator: '<S36>/Equal'
     */
    rtb_UnitDelay_gw = (((uint32)VeSSDI_e_FCPS_ActualMode) ==
                        CeFCPR_e_ActualMode_Refueling);

    /* Outputs for Atomic SubSystem: '<S33>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S82>/EdgeFalling' */
    /* Outputs for Atomic SubSystem: '<S47>/EdgeFalling' */
    /* Logic: '<S129>/OR1' incorporates:
     *  Logic: '<S82>/AND'
     *  Logic: '<S86>/OR1'
     */
    rtb_Merge4 = !VeSSDI_b_ValidPluginDetected;

    /* End of Outputs for SubSystem: '<S82>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S33>/Turn Off Delay Time' */

    /* Logic: '<S129>/AND' incorporates:
     *  Logic: '<S129>/OR1'
     *  UnitDelay: '<S129>/Unit Delay'
     */
    rtb_OR1_fw = (rtb_Merge4 && (SSDR_ac_DW.UnitDelay_DSTATE_a5));

    /* Update for UnitDelay: '<S129>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_a5 = VeSSDI_b_ValidPluginDetected;

    /* End of Outputs for SubSystem: '<S47>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S47>/Signal Latch On With Reset' */
    /* Logic: '<S135>/OR1' incorporates:
     *  Logic: '<S135>/NOT'
     *  Logic: '<S135>/OR'
     *  Logic: '<S47>/Logical Operator2'
     *  UnitDelay: '<S135>/Unit Delay'
     */
    SSDR_ac_DW.UnitDelay_DSTATE_mj0 = ((VeSSDI_b_SecureConnV2L) ||
        (((!rtb_OR1_fw) && (!rtb_VeSSDC_b_ShtDwnPrplsnFlg)) &&
         (SSDR_ac_DW.UnitDelay_DSTATE_mj0)));

    /* End of Outputs for SubSystem: '<S47>/Signal Latch On With Reset' */

    /* Outputs for Atomic SubSystem: '<S47>/Hysteresis_1' */
    /* Switch: '<S131>/Switch1' incorporates:
     *  Constant: '<S131>/Constant Value'
     *  Constant: '<S132>/Calib'
     *  Constant: '<S133>/Calib'
     *  RelationalOperator: '<S131>/Greater  Than'
     *  RelationalOperator: '<S131>/Greater  Than1'
     *  UnitDelay: '<S131>/Unit Delay'
     */
    if (VeSSDI_Pct_HV_BatPackSOC >= KeSSDR_Pct_BattPackSOC_V2X_RSP)
    {
        SSDR_ac_DW.UnitDelay_DSTATE_kb = true;
    }
    else
    {
        SSDR_ac_DW.UnitDelay_DSTATE_kb = ((VeSSDI_Pct_HV_BatPackSOC >
            KeSSDR_Pct_BattPackSOC_V2X_LSP) && (SSDR_ac_DW.UnitDelay_DSTATE_kb));
    }

    /* End of Switch: '<S131>/Switch1' */
    /* End of Outputs for SubSystem: '<S47>/Hysteresis_1' */

    /* Logic: '<S47>/Logical Operator' incorporates:
     *  Constant: '<S130>/Constant'
     *  Logic: '<S47>/Logical Operator1'
     *  RelationalOperator: '<S47>/Comparison5'
     *  Switch: '<S5>/Switch65'
     *  UnitDelay: '<S131>/Unit Delay'
     *  UnitDelay: '<S135>/Unit Delay'
     */
    rtb_VeSSDC_b_ShtDwnPrplsnFlg = (((((uint32)VeSSDI_e_EngStartStopSt) ==
        CeESSR_e_EngOff) && (SSDR_ac_DW.UnitDelay_DSTATE_mj0)) &&
        (!SSDR_ac_DW.UnitDelay_DSTATE_kb));

    /* Outputs for Atomic SubSystem: '<S47>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S136>/EdgeRising' */
    /* Logic: '<S137>/AND' incorporates:
     *  Logic: '<S137>/OR1'
     *  UnitDelay: '<S137>/Unit Delay'
     */
    rtb_OR1_fw = (rtb_VeSSDC_b_ShtDwnPrplsnFlg &&
                  (!SSDR_ac_DW.UnitDelay_DSTATE_bm));

    /* Update for UnitDelay: '<S137>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_bm = rtb_VeSSDC_b_ShtDwnPrplsnFlg;

    /* End of Outputs for SubSystem: '<S136>/EdgeRising' */

    /* Switch: '<S136>/Switch1' incorporates:
     *  Constant: '<S134>/Calib'
     *  Constant: '<S136>/Constant Value1'
     *  Constant: '<S139>/Calib'
     *  Logic: '<S136>/OR'
     *  Logic: '<S136>/OR1'
     *  MinMax: '<S136>/Minimum'
     *  Sum: '<S136>/Summation'
     *  UnitDelay: '<S136>/Unit Delay'
     */
    if ((!rtb_VeSSDC_b_ShtDwnPrplsnFlg) || rtb_OR1_fw)
    {
        SSDR_ac_DW.UnitDelay_DSTATE_bn = 0.0F;
    }
    else
    {
        SSDR_ac_DW.UnitDelay_DSTATE_bn = fminf(KeSSDR_t_V2XShtdwn_delay,
            HeSSDR_t_dT + SSDR_ac_DW.UnitDelay_DSTATE_bn);
    }

    /* End of Switch: '<S136>/Switch1' */

    /* Logic: '<S136>/AND' incorporates:
     *  Constant: '<S134>/Calib'
     *  RelationalOperator: '<S136>/Greater  Than'
     *  UnitDelay: '<S136>/Unit Delay'
     */
    rtb_AND_fx = (rtb_VeSSDC_b_ShtDwnPrplsnFlg &&
                  (SSDR_ac_DW.UnitDelay_DSTATE_bn >= KeSSDR_t_V2XShtdwn_delay));

    /* End of Outputs for SubSystem: '<S47>/Turn On Delay Time' */

    /* Logic: '<S36>/Logical7' incorporates:
     *  Logic: '<S36>/Logical2'
     */
    rtb_VeSSDC_b_ShtDwnPrplsnFlg = ((((rtb_Logical1_p || rtb_Logical3_nz) ||
        (SSDR_ac_DW.UnitDelay2_DSTATE_a)) || rtb_UnitDelay_gw) || rtb_AND_fx);

    /* Logic: '<S36>/Logical14' incorporates:
     *  Constant: '<S107>/Calib'
     */
    VeSSDC_b_EngineOffRequest = ((VeSSDI_b_EngineOffRequest) &&
        (KeSSDR_b_EnblPncShtDwnPSADrop));

    /* Logic: '<S8>/Logical13' incorporates:
     *  Logic: '<S45>/NOT'
     */
    rtb_Logical5_p = !rtb_VeSSDC_b_ShtDwnPrplsnFlg;

    /* Logic: '<S41>/AND' incorporates:
     *  Logic: '<S41>/NOT'
     *  Logic: '<S8>/Logical13'
     */
    VeSSDC_b_DrvAllwdArb = ((SSDR_ac_B.Compare_l0) && (((!rtb_Logical9_j) &&
        rtb_Logical5_p) && (!VeSSDC_b_EngineOffRequest)));

    /* Outputs for Atomic SubSystem: '<S33>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S82>/EdgeFalling' */
    /* UnitDelay: '<S124>/Unit Delay' incorporates:
     *  UnitDelay: '<S86>/Unit Delay'
     */
    rtb_UnitDelay_nn = SSDR_ac_DW.UnitDelay_DSTATE_kmc;

    /* Update for UnitDelay: '<S86>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_kmc = VeSSDI_b_ValidPluginDetected;

    /* Switch: '<S82>/Switch' incorporates:
     *  Constant: '<S139>/Calib'
     *  Constant: '<S74>/Calib'
     *  Constant: '<S82>/Constant Value1'
     *  Logic: '<S86>/AND'
     *  MinMax: '<S82>/Minimum'
     *  Sum: '<S82>/Summation'
     *  UnitDelay: '<S82>/Unit Delay'
     */
    if (rtb_Merge4 && rtb_UnitDelay_nn)
    {
        SSDR_ac_DW.UnitDelay_DSTATE_p = KeSSDR_t_DelayForcetoPark;
    }
    else
    {
        SSDR_ac_DW.UnitDelay_DSTATE_p = fmaxf(SSDR_ac_DW.UnitDelay_DSTATE_p -
            HeSSDR_t_dT, 0.0F);
    }

    /* End of Switch: '<S82>/Switch' */
    /* End of Outputs for SubSystem: '<S82>/EdgeFalling' */

    /* Logic: '<S33>/Logical9' incorporates:
     *  Constant: '<S50>/Constant'
     *  Constant: '<S82>/Constant Value2'
     *  Logic: '<S33>/Logical15'
     *  Logic: '<S82>/AND'
     *  RelationalOperator: '<S33>/Comparison13'
     *  RelationalOperator: '<S82>/Greater  Than'
     *  Switch: '<S5>/Switch40'
     *  UnitDelay: '<S82>/Unit Delay'
     */
    VeSSDC_b_DrvAllwdIn = (((VeSSDC_b_DrvAllwdArb) && (((uint32)
        VeSSDI_e_KeyInIgnArb) == CePMDR_e_KeyInIgn_In_Ign)) && (rtb_Merge4 &&
                            (SSDR_ac_DW.UnitDelay_DSTATE_p <= 0.0F)));

    /* End of Outputs for SubSystem: '<S33>/Turn Off Delay Time' */

    /* Logic: '<S33>/Logical16' */
    VeSSDC_b_DrvAllwdArbTpChck = (rtb_UnitDelay3_o && (VeSSDC_b_DrvAllwdIn));

    /* Outputs for Atomic SubSystem: '<S33>/Signal Latch On With Reset1' */
    /* Logic: '<S81>/OR1' incorporates:
     *  Constant: '<S49>/Constant'
     *  Logic: '<S33>/AND'
     *  Logic: '<S81>/NOT'
     *  Logic: '<S81>/OR'
     *  RelationalOperator: '<S33>/Equal'
     *  Switch: '<S5>/Switch75'
     *  UnitDelay: '<S81>/Unit Delay'
     */
    SSDR_ac_DW.UnitDelay_DSTATE_et = (((VeSSDC_b_DrvAllwdArbTpChck) &&
        (VeSSDI_b_HV_AuxLoadOffReq)) || ((((uint32)VeSSDI_e_HybSysSt) !=
        CeHPMR_e_OPERATIONAL) && (SSDR_ac_DW.UnitDelay_DSTATE_et)));

    /* End of Outputs for SubSystem: '<S33>/Signal Latch On With Reset1' */

    /* UnitDelay: '<S155>/Unit Delay' incorporates:
     *  Switch: '<S33>/Switch4'
     */
    rtb_AND_pa = ((!rtb_AND_pa) || (VeSSDC_b_EnblDrvAllwdTPChk));

    /* Logic: '<S33>/Logical11' incorporates:
     *  Constant: '<S72>/Calib'
     *  Logic: '<S33>/Logical8'
     */
    rtb_Merge4 = ((!KeSSDR_b_DsblDrvAllwdPwrChck) && (!rtb_AND_pa));

    /* Outputs for Atomic SubSystem: '<S34>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S95>/EdgeRising' */
    /* UnitDelay: '<S124>/Unit Delay' incorporates:
     *  UnitDelay: '<S96>/Unit Delay'
     */
    rtb_UnitDelay_nn = SSDR_ac_DW.UnitDelay_DSTATE_jp;

    /* Update for UnitDelay: '<S96>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_jp = VeSSDI_b_HCP_LTP_FanAftRun_Rq;

    /* End of Outputs for SubSystem: '<S95>/EdgeRising' */

    /* Logic: '<S95>/OR1' incorporates:
     *  Logic: '<S34>/Logical5'
     *  Logic: '<S95>/AND'
     */
    rtb_AND_pa = !VeSSDI_b_HCP_LTP_FanAftRun_Rq;

    /* Outputs for Atomic SubSystem: '<S95>/EdgeRising' */
    /* Switch: '<S95>/Switch1' incorporates:
     *  Constant: '<S139>/Calib'
     *  Constant: '<S94>/Calib'
     *  Constant: '<S95>/Constant Value1'
     *  Logic: '<S95>/OR'
     *  Logic: '<S95>/OR1'
     *  Logic: '<S96>/AND'
     *  Logic: '<S96>/OR1'
     *  MinMax: '<S95>/Minimum'
     *  Sum: '<S95>/Summation'
     *  UnitDelay: '<S95>/Unit Delay'
     */
    if (rtb_AND_pa || ((VeSSDI_b_HCP_LTP_FanAftRun_Rq) && (!rtb_UnitDelay_nn)))
    {
        SSDR_ac_DW.UnitDelay_DSTATE_cn = 0.0F;
    }
    else
    {
        SSDR_ac_DW.UnitDelay_DSTATE_cn = fminf(KeSSDR_t_AfterRunShtDnTmr,
            HeSSDR_t_dT + SSDR_ac_DW.UnitDelay_DSTATE_cn);
    }

    /* End of Switch: '<S95>/Switch1' */
    /* End of Outputs for SubSystem: '<S95>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S34>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S146>/EdgeRising' */
    /* Logic: '<S331>/OR1' incorporates:
     *  UnitDelay: '<S331>/Unit Delay'
     */
    rtb_OR1_fw = !SSDR_ac_DW.UnitDelay_DSTATE_mj;

    /* Update for UnitDelay: '<S331>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_mj = VeSSDI_b_UnintendedShtdwnOcc;

    /* End of Outputs for SubSystem: '<S146>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S146>/EdgeFalling' */
    /* Logic: '<S328>/AND' incorporates:
     *  UnitDelay: '<S328>/Unit Delay'
     */
    rtb_UnitDelay_nn = (rtb_AND_c && (SSDR_ac_DW.UnitDelay_DSTATE_o4));

    /* Update for UnitDelay: '<S328>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_o4 = VeSSDI_b_UnintendedShtdwnOcc;

    /* End of Outputs for SubSystem: '<S146>/EdgeFalling' */

    /* UnitDelay: '<S146>/Unit Delay' */
    rtb_UnitDelay_m = SSDR_ac_DW.UnitDelay_DSTATE_ns;

    /* Logic: '<S146>/AND' incorporates:
     *  Logic: '<S146>/NOT'
     *  UnitDelay: '<S146>/Unit Delay'
     */
    SSDR_ac_DW.UnitDelay_DSTATE_ns = ((VeSSDI_b_Comfort_Enable_Act) &&
        (!VeSSDI_b_Comfort_EnblAct_FA));

    /* Outputs for Atomic SubSystem: '<S146>/Signal Latch On With Reset8' */
    /* Outputs for Atomic SubSystem: '<S146>/EdgeRising' */
    /* Logic: '<S341>/OR1' incorporates:
     *  Logic: '<S146>/Logical15'
     *  Logic: '<S331>/AND'
     *  Logic: '<S341>/NOT'
     *  Logic: '<S341>/OR'
     *  RelationalOperator: '<S146>/Comparison4'
     *  UnitDelay: '<S146>/Unit Delay'
     *  UnitDelay: '<S341>/Unit Delay'
     */
    SSDR_ac_DW.UnitDelay_DSTATE_op = (((VeSSDI_b_UnintendedShtdwnOcc) &&
        rtb_OR1_fw) || (((!rtb_UnitDelay_nn) && (rtb_UnitDelay_m ==
        SSDR_ac_DW.UnitDelay_DSTATE_ns)) && (SSDR_ac_DW.UnitDelay_DSTATE_op)));

    /* End of Outputs for SubSystem: '<S146>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S146>/Signal Latch On With Reset8' */

    /* Outputs for Atomic SubSystem: '<S146>/EdgeRising1' */
    /* Logic: '<S332>/OR1' incorporates:
     *  UnitDelay: '<S332>/Unit Delay'
     */
    rtb_OR1_fw = !SSDR_ac_DW.UnitDelay_DSTATE_pej;

    /* Update for UnitDelay: '<S332>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_pej = VeSSDI_b_UnintendedShtdwnOcc;

    /* End of Outputs for SubSystem: '<S146>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S146>/EdgeFalling1' */
    /* Logic: '<S329>/AND' incorporates:
     *  UnitDelay: '<S329>/Unit Delay'
     */
    rtb_UnitDelay_nn = (rtb_AND_c && (SSDR_ac_DW.UnitDelay_DSTATE_es));

    /* Update for UnitDelay: '<S329>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_es = VeSSDI_b_UnintendedShtdwnOcc;

    /* End of Outputs for SubSystem: '<S146>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S146>/Signal Latch On With Reset9' */
    /* Outputs for Atomic SubSystem: '<S146>/EdgeRising1' */
    /* Logic: '<S342>/OR1' incorporates:
     *  Logic: '<S146>/Logical16'
     *  Logic: '<S332>/AND'
     *  Logic: '<S342>/NOT'
     *  Logic: '<S342>/OR'
     *  RelationalOperator: '<S146>/Comparison1'
     *  UnitDelay: '<S146>/Unit Delay1'
     *  UnitDelay: '<S342>/Unit Delay'
     */
    SSDR_ac_DW.UnitDelay_DSTATE_gk = (((VeSSDI_b_UnintendedShtdwnOcc) &&
        rtb_OR1_fw) || (((!rtb_UnitDelay_nn) && (SSDR_ac_DW.UnitDelay1_DSTATE_j ==
        VeSSDI_e_KeepHotColdSts)) && (SSDR_ac_DW.UnitDelay_DSTATE_gk)));

    /* End of Outputs for SubSystem: '<S146>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S146>/Signal Latch On With Reset9' */

    /* Outputs for Atomic SubSystem: '<S146>/EdgeRising2' */
    /* Logic: '<S333>/OR1' incorporates:
     *  UnitDelay: '<S333>/Unit Delay'
     */
    rtb_OR1_fw = !SSDR_ac_DW.UnitDelay_DSTATE_kw;

    /* Update for UnitDelay: '<S333>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_kw = VeSSDI_b_UnintendedShtdwnOcc;

    /* End of Outputs for SubSystem: '<S146>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S146>/EdgeFalling2' */
    /* Logic: '<S330>/AND' incorporates:
     *  UnitDelay: '<S330>/Unit Delay'
     */
    rtb_AND_c = (rtb_AND_c && (SSDR_ac_DW.UnitDelay_DSTATE_eg));

    /* Update for UnitDelay: '<S330>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_eg = VeSSDI_b_UnintendedShtdwnOcc;

    /* End of Outputs for SubSystem: '<S146>/EdgeFalling2' */

    /* Outputs for Atomic SubSystem: '<S146>/Signal Latch On With Reset1' */
    /* Outputs for Atomic SubSystem: '<S146>/EdgeRising2' */
    /* Logic: '<S340>/OR1' incorporates:
     *  Logic: '<S146>/Logical1'
     *  Logic: '<S333>/AND'
     *  Logic: '<S340>/NOT'
     *  Logic: '<S340>/OR'
     *  RelationalOperator: '<S146>/Comparison3'
     *  UnitDelay: '<S146>/Unit Delay2'
     *  UnitDelay: '<S340>/Unit Delay'
     */
    SSDR_ac_DW.UnitDelay_DSTATE_dl = (((VeSSDI_b_UnintendedShtdwnOcc) &&
        rtb_OR1_fw) || (((!rtb_AND_c) && (SSDR_ac_DW.UnitDelay2_DSTATE_i ==
        VeSSDI_b_HotEnablerReq)) && (SSDR_ac_DW.UnitDelay_DSTATE_dl)));

    /* End of Outputs for SubSystem: '<S146>/EdgeRising2' */
    /* End of Outputs for SubSystem: '<S146>/Signal Latch On With Reset1' */

    /* Switch: '<S337>/Switch1' incorporates:
     *  Constant: '<S339>/Calib'
     */
    if (KeSSDR_b_KeepHotCold_PCC_Enbl)
    {
        /* Switch: '<S336>/Switch1' incorporates:
         *  Constant: '<S146>/FALSE Constant1'
         *  Constant: '<S334>/Constant'
         *  RelationalOperator: '<S146>/Comparison2'
         *  UnitDelay: '<S342>/Unit Delay'
         */
        if (SSDR_ac_DW.UnitDelay_DSTATE_gk)
        {
            rtb_OR1_fw = false;
        }
        else
        {
            rtb_OR1_fw = (((uint32)VeSSDI_e_KeepHotColdSts) == CeTPCR_e_Active);
        }

        /* End of Switch: '<S336>/Switch1' */

        /* Switch: '<S337>/Switch1' incorporates:
         *  Logic: '<S146>/Logical17'
         *  Switch: '<S335>/Switch1'
         *  Switch: '<S338>/Switch1'
         *  UnitDelay: '<S146>/Unit Delay'
         *  UnitDelay: '<S340>/Unit Delay'
         *  UnitDelay: '<S341>/Unit Delay'
         */
        rtb_AND_c = ((((!SSDR_ac_DW.UnitDelay_DSTATE_op) &&
                       (SSDR_ac_DW.UnitDelay_DSTATE_ns)) || rtb_OR1_fw) ||
                     ((!SSDR_ac_DW.UnitDelay_DSTATE_dl) &&
                      (VeSSDI_b_HotEnablerReq)));
    }
    else
    {
        /* Switch: '<S337>/Switch1' incorporates:
         *  Constant: '<S146>/FALSE Constant2'
         */
        rtb_AND_c = false;
    }

    /* End of Switch: '<S337>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S34>/Turn On Delay Time' */
    /* Logic: '<S34>/Logical1' incorporates:
     *  Constant: '<S89>/Constant'
     *  Constant: '<S90>/Constant'
     *  Constant: '<S91>/Constant'
     *  Constant: '<S92>/Constant'
     *  Constant: '<S93>/Constant'
     *  Constant: '<S94>/Calib'
     *  Logic: '<S34>/AND1'
     *  Logic: '<S34>/Logical2'
     *  Logic: '<S34>/Logical3'
     *  Logic: '<S34>/Logical4'
     *  Logic: '<S34>/Logical5'
     *  Logic: '<S34>/OR'
     *  Logic: '<S95>/AND'
     *  RelationalOperator: '<S34>/Equal1'
     *  RelationalOperator: '<S34>/Equal2'
     *  RelationalOperator: '<S34>/Equal3'
     *  RelationalOperator: '<S34>/Equal4'
     *  RelationalOperator: '<S34>/Equal5'
     *  RelationalOperator: '<S95>/Greater  Than'
     *  Switch: '<S5>/Switch57'
     *  UnitDelay: '<S95>/Unit Delay'
     */
    VeSSDC_b_EnblHVSysOut = ((((VeSSDC_b_EnblHVSysArb) || (((tmpRead ||
        rtb_AND_pa) && (VeSSDI_b_HCP_LTP_FanAftRun_Rq)) && (rtb_AND_pa ||
        (SSDR_ac_DW.UnitDelay_DSTATE_cn < KeSSDR_t_AfterRunShtDnTmr)))) ||
        rtb_AND_c) || (((((((uint32)VeSSDI_e_FCPS_ActualMode) ==
                           CeFCPR_e_ActualMode_Shutdown) || (((uint32)
        VeSSDI_e_FCPS_ActualMode) == CeFCPR_e_ActualMode_Starting)) || (((uint32)
        VeSSDI_e_FCPS_ActualMode) == CeFCPR_e_ActualMode_Run)) || (((uint32)
        VeSSDI_e_FCPS_ActualMode) == CeFCPR_e_ActualMode_PreheatReqd)) ||
                       (((uint32)VeSSDI_e_FCPS_HTCoolReq) != CeFCPR_e_No_Request)));

    /* End of Outputs for SubSystem: '<S34>/Turn On Delay Time' */

    /* Logic: '<S8>/Logical12' */
    rtb_UnitDelay_nn = ((rtb_Logical9_j || rtb_VeSSDC_b_ShtDwnPrplsnFlg) ||
                        (VeSSDC_b_EngineOffRequest));

    /* Logic: '<S36>/Logical9' incorporates:
     *  Logic: '<S36>/Logical2'
     */
    rtb_Logical9_j = (rtb_Logical3_nz && (VeSSDI_b_BPCM_OVActv));

    /* Logic: '<S36>/Logical8' incorporates:
     *  Logic: '<S36>/Logical11'
     */
    rtb_AND_pa = !rtb_Logical1_p;
    rtb_UnitDelay_m = !SSDR_ac_DW.UnitDelay2_DSTATE_a;

    /* Logic: '<S42>/AND' incorporates:
     *  Logic: '<S36>/Logical8'
     *  Logic: '<S42>/NOT'
     */
    VeSSDC_b_EnblHVBattChrg = ((SSDR_ac_B.Compare_d) && (((rtb_AND_pa &&
        (!rtb_Logical9_j)) && rtb_UnitDelay_m) && (!VeSSDI_b_StpCharging)));

    /* Outputs for Atomic SubSystem: '<S35>/Signal Latch On With Reset' */
    /* Logic: '<S104>/OR1' incorporates:
     *  Constant: '<S101>/Constant'
     *  Constant: '<S97>/Constant'
     *  Constant: '<S99>/Constant'
     *  Logic: '<S104>/NOT'
     *  Logic: '<S104>/OR'
     *  Logic: '<S35>/Logical4'
     *  RelationalOperator: '<S35>/Comparison2'
     *  RelationalOperator: '<S35>/Comparison3'
     *  RelationalOperator: '<S35>/Comparison4'
     *  UnitDelay: '<S104>/Unit Delay'
     *  UnitDelay: '<S35>/X0=TePMDR_e_PowerMode.CePMDR_e_PowerMode_Off'
     */
    SSDR_ac_DW.UnitDelay_DSTATE_fft = (((((uint32)
        SSDR_ac_DW.X0TePMDR_e_PowerModeCePMDR_e_PowerMode_O) ==
        CePMDR_e_PowerMode_Run) && (((uint32)VeSSDI_e_PMM_PowerMode) ==
        CePMDR_e_PowerMode_Acc)) || ((((uint32)VeSSDI_e_PMM_PowerMode) ==
        CePMDR_e_PowerMode_Acc) && (SSDR_ac_DW.UnitDelay_DSTATE_fft)));

    /* End of Outputs for SubSystem: '<S35>/Signal Latch On With Reset' */

    /* Logic: '<S138>/Logical3' */
    rtb_OR1_fw = !VeSSDI_b_FOTASchCnflct;

    /* Outputs for Atomic SubSystem: '<S138>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S154>/EdgeRising' */
    /* Logic: '<S155>/AND' incorporates:
     *  Logic: '<S155>/OR1'
     *  UnitDelay: '<S155>/Unit Delay'
     */
    aVarTruthTableCondition_1 = (rtb_OR1_fw && (!SSDR_ac_DW.UnitDelay_DSTATE_mv));

    /* Update for UnitDelay: '<S155>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_mv = rtb_OR1_fw;

    /* End of Outputs for SubSystem: '<S154>/EdgeRising' */

    /* Switch: '<S154>/Switch1' incorporates:
     *  Constant: '<S138>/Constant Value'
     *  Constant: '<S153>/Calib'
     *  Constant: '<S154>/Constant Value1'
     *  Logic: '<S154>/OR'
     *  Logic: '<S154>/OR1'
     *  MinMax: '<S154>/Minimum'
     *  Sum: '<S154>/Summation'
     *  UnitDelay: '<S154>/Unit Delay'
     */
    if ((!rtb_OR1_fw) || aVarTruthTableCondition_1)
    {
        SSDR_ac_DW.UnitDelay_DSTATE_b = 0.0F;
    }
    else
    {
        SSDR_ac_DW.UnitDelay_DSTATE_b = fminf(KeSSDR_t_FOTASchCfltDly,
            SSDR_ac_DW.UnitDelay_DSTATE_b + 0.00625F);
    }

    /* End of Switch: '<S154>/Switch1' */

    /* Logic: '<S138>/Logical1' incorporates:
     *  Constant: '<S151>/Constant'
     *  Constant: '<S152>/Constant'
     *  Constant: '<S153>/Calib'
     *  Logic: '<S138>/Logical16'
     *  Logic: '<S154>/AND'
     *  RelationalOperator: '<S138>/Comparison1'
     *  RelationalOperator: '<S138>/Comparison3'
     *  RelationalOperator: '<S154>/Greater  Than'
     *  UnitDelay: '<S154>/Unit Delay'
     */
    rtb_OR1_fw = ((((uint32)VeSSDI_e_FOTA_Install_Type) == CeCITR_e_FOTANow) ||
                  ((((uint32)VeSSDI_e_FOTA_Install_Type) ==
                    CeCITR_e_FOTASchedule) && (rtb_OR1_fw &&
                    (SSDR_ac_DW.UnitDelay_DSTATE_b >= KeSSDR_t_FOTASchCfltDly))));

    /* End of Outputs for SubSystem: '<S138>/Turn On Delay Time' */

    /* Logic: '<S36>/Logical10' incorporates:
     *  Constant: '<S106>/Constant'
     *  Constant: '<S108>/Calib'
     *  Logic: '<S36>/Logical15'
     *  Logic: '<S36>/Logical16'
     *  RelationalOperator: '<S36>/Comparison2'
     *  Switch: '<S5>/Switch59'
     */
    rtb_Logical1_p = (((((rtb_Logical1_p || (SSDR_ac_DW.UnitDelay2_DSTATE_a)) ||
                         rtb_OR1_fw) || (((VeSSDI_b_UnintendedShtdwnOcc) &&
                          (((uint32)VeSSDI_e_HV_BatCntctrStat) ==
                           CeHVTR_e_Closed)) && (KeSSDR_b_EnblUnintendedShtdwnHV)))
                       || rtb_AND_fx) || rtb_UnitDelay_gw);

    /* Logic: '<S36>/Logical3' incorporates:
     *  Logic: '<S36>/Logical2'
     *  Logic: '<S36>/Logical6'
     */
    VeSSDC_b_DsblHVBattDischrg = (((VeSSDI_b_UnintendedShtdwnOcc) ||
        (SSDR_ac_DW.UnitDelay2_DSTATE_a)) || (rtb_Logical3_nz &&
        (VeSSDI_b_BPCM_UVActv)));

    /* Logic: '<S36>/Logical4' incorporates:
     *  Constant: '<S109>/Calib'
     *  Logic: '<S36>/Logical12'
     *  Logic: '<S36>/Logical13'
     */
    VeSSDC_b_DsblHVBattChrg = ((rtb_Logical9_j ||
        (SSDR_ac_DW.UnitDelay2_DSTATE_a)) || (((KeSSDR_b_DsblHVFltStpChrgCheck) ||
        (VeSSDI_b_HVFltStpChrg)) && (VeSSDI_b_UnintendedShtdwnOcc)));

    /* Logic: '<S40>/AND' incorporates:
     *  Logic: '<S40>/NOT'
     */
    VeSSDC_b_EnblPrplsnSysArb = ((SSDR_ac_B.Compare_o) && (!rtb_UnitDelay_nn));

    /* Outputs for Atomic SubSystem: '<S37>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S119>/EdgeRising' */
    /* UnitDelay: '<S124>/Unit Delay' incorporates:
     *  UnitDelay: '<S120>/Unit Delay'
     */
    rtb_UnitDelay_nn = SSDR_ac_DW.UnitDelay_DSTATE_km;

    /* Update for UnitDelay: '<S120>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_km = VeSSDI_b_THMRRdy4ShtDwn;

    /* Switch: '<S119>/Switch1' incorporates:
     *  Constant: '<S118>/Calib'
     *  Constant: '<S119>/Constant Value1'
     *  Constant: '<S139>/Calib'
     *  Logic: '<S119>/OR'
     *  Logic: '<S120>/AND'
     *  Logic: '<S120>/OR1'
     *  MinMax: '<S119>/Minimum'
     *  Sum: '<S119>/Summation'
     *  UnitDelay: '<S119>/Unit Delay'
     */
    if (tmpRead || ((VeSSDI_b_THMRRdy4ShtDwn) && (!rtb_UnitDelay_nn)))
    {
        SSDR_ac_DW.UnitDelay_DSTATE_g = 0.0F;
    }
    else
    {
        SSDR_ac_DW.UnitDelay_DSTATE_g = fminf(KeSSDR_t_ThrmlShtDnDbnc,
            HeSSDR_t_dT + SSDR_ac_DW.UnitDelay_DSTATE_g);
    }

    /* End of Switch: '<S119>/Switch1' */
    /* End of Outputs for SubSystem: '<S119>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S37>/Turn On Delay Time' */

    /* Switch: '<S37>/Switch' incorporates:
     *  Constant: '<S117>/Calib'
     */
    if (KeSSDR_b_DsblPrplsnSys_RemStrtArb)
    {
        /* Outputs for Atomic SubSystem: '<S37>/Turn On Delay Time' */
        /* Switch: '<S37>/Switch' incorporates:
         *  Constant: '<S114>/Constant'
         *  Constant: '<S118>/Calib'
         *  Logic: '<S119>/AND'
         *  Logic: '<S37>/Logical2'
         *  RelationalOperator: '<S119>/Greater  Than'
         *  RelationalOperator: '<S37>/Comparison1'
         *  Switch: '<S5>/Switch24'
         *  UnitDelay: '<S119>/Unit Delay'
         */
        rtb_Logical9_j = (((VeSSDI_b_RmtStartActv) && ((VeSSDI_b_THMRRdy4ShtDwn)
                            && (SSDR_ac_DW.UnitDelay_DSTATE_g >=
                                KeSSDR_t_ThrmlShtDnDbnc))) && (((uint32)
                            VeSSDI_e_CabinPreCondReqStat) !=
                           CeTPCR_e_OkCabinPrec));

        /* End of Outputs for SubSystem: '<S37>/Turn On Delay Time' */
    }
    else
    {
        /* Switch: '<S37>/Switch' incorporates:
         *  Constant: '<S115>/Constant'
         *  Constant: '<S116>/Constant'
         *  Logic: '<S37>/Logical4'
         *  Logic: '<S37>/Logical5'
         *  RelationalOperator: '<S37>/Comparison2'
         *  RelationalOperator: '<S37>/Comparison3'
         */
        rtb_Logical9_j = ((VeSSDI_b_RmtStartActv) && ((((uint32)
                             VeSSDI_e_CabinPreCondReqStat) !=
                            CeTPCR_e_OkCabinPrec) || (((uint32)
                             VeSSDI_e_CabinPreCondReqStat) !=
                            CeTPCR_e_CabinPrec_SP_Reached)));
    }

    /* End of Switch: '<S37>/Switch' */

    /* Logic: '<S43>/AND' incorporates:
     *  Logic: '<S36>/Logical11'
     *  Logic: '<S43>/NOT'
     */
    VeSSDC_b_EnblThrmlSysArb = ((SSDR_ac_B.Compare_m) && (rtb_AND_pa &&
        rtb_UnitDelay_m));

    /* Logic: '<S45>/AND' */
    VeSSDC_b_EnblV2GOpr = ((SSDR_ac_B.Compare) && rtb_Logical5_p);

    /* Outputs for Atomic SubSystem: '<S46>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S125>/EdgeRising' */
    /* UnitDelay: '<S124>/Unit Delay' incorporates:
     *  UnitDelay: '<S127>/Unit Delay'
     */
    rtb_UnitDelay_nn = SSDR_ac_DW.UnitDelay_DSTATE_ncl;

    /* Update for UnitDelay: '<S127>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_ncl = VeSSDI_b_ThrmlShtdwnReqHonrd;

    /* End of Outputs for SubSystem: '<S125>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S46>/Signal Latch On With Reset' */
    /* Logic: '<S125>/OR1' incorporates:
     *  Logic: '<S124>/NOT'
     *  Logic: '<S46>/Logical2'
     *  Switch: '<S46>/Switch1'
     *  Switch: '<S46>/Switch2'
     */
    rtb_AND_pa = !VeSSDI_b_ThrmlShtdwnReqHonrd;

    /* End of Outputs for SubSystem: '<S46>/Signal Latch On With Reset' */

    /* Outputs for Atomic SubSystem: '<S125>/EdgeRising' */
    /* Switch: '<S125>/Switch1' incorporates:
     *  Constant: '<S122>/Calib'
     *  Constant: '<S125>/Constant Value1'
     *  Constant: '<S139>/Calib'
     *  Logic: '<S125>/OR'
     *  Logic: '<S125>/OR1'
     *  Logic: '<S127>/AND'
     *  Logic: '<S127>/OR1'
     *  MinMax: '<S125>/Minimum'
     *  Sum: '<S125>/Summation'
     *  UnitDelay: '<S125>/Unit Delay'
     */
    if (rtb_AND_pa || ((VeSSDI_b_ThrmlShtdwnReqHonrd) && (!rtb_UnitDelay_nn)))
    {
        SSDR_ac_DW.UnitDelay_DSTATE_o = 0.0F;
    }
    else
    {
        SSDR_ac_DW.UnitDelay_DSTATE_o = fminf(KeSSDR_t_DbncThermalClrToShtdwn,
            HeSSDR_t_dT + SSDR_ac_DW.UnitDelay_DSTATE_o);
    }

    /* End of Switch: '<S125>/Switch1' */
    /* End of Outputs for SubSystem: '<S125>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S46>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S46>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S126>/EdgeRising' */
    /* UnitDelay: '<S124>/Unit Delay' incorporates:
     *  UnitDelay: '<S128>/Unit Delay'
     */
    rtb_UnitDelay_nn = SSDR_ac_DW.UnitDelay_DSTATE_ap;

    /* Update for UnitDelay: '<S128>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_ap = VeSSDI_b_PrepareToShtdwn;

    /* Switch: '<S126>/Switch1' incorporates:
     *  Constant: '<S123>/Calib'
     *  Constant: '<S126>/Constant Value1'
     *  Constant: '<S139>/Calib'
     *  Logic: '<S126>/OR'
     *  Logic: '<S126>/OR1'
     *  Logic: '<S128>/AND'
     *  Logic: '<S128>/OR1'
     *  MinMax: '<S126>/Minimum'
     *  Sum: '<S126>/Summation'
     *  UnitDelay: '<S126>/Unit Delay'
     */
    if ((!VeSSDI_b_PrepareToShtdwn) || ((VeSSDI_b_PrepareToShtdwn) &&
            (!rtb_UnitDelay_nn)))
    {
        SSDR_ac_DW.UnitDelay_DSTATE_f = 0.0F;
    }
    else
    {
        SSDR_ac_DW.UnitDelay_DSTATE_f = fminf(KeSSDR_t_TmotDsblThrmlFdbk,
            HeSSDR_t_dT + SSDR_ac_DW.UnitDelay_DSTATE_f);
    }

    /* End of Switch: '<S126>/Switch1' */
    /* End of Outputs for SubSystem: '<S126>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S46>/Turn On Delay Time' */
    /* Logic: '<S46>/Logical5' incorporates:
     *  Constant: '<S122>/Calib'
     *  Constant: '<S123>/Calib'
     *  Logic: '<S125>/AND'
     *  Logic: '<S126>/AND'
     *  RelationalOperator: '<S125>/Greater  Than'
     *  RelationalOperator: '<S126>/Greater  Than'
     *  UnitDelay: '<S125>/Unit Delay'
     *  UnitDelay: '<S126>/Unit Delay'
     */
    rtb_Logical5_p = (((VeSSDI_b_ThrmlShtdwnReqHonrd) &&
                       (SSDR_ac_DW.UnitDelay_DSTATE_o >=
                        KeSSDR_t_DbncThermalClrToShtdwn)) ||
                      ((VeSSDI_b_PrepareToShtdwn) &&
                       (SSDR_ac_DW.UnitDelay_DSTATE_f >=
                        KeSSDR_t_TmotDsblThrmlFdbk)));

    /* End of Outputs for SubSystem: '<S46>/Turn On Delay Time' */
    /* End of Outputs for SubSystem: '<S46>/Turn On Delay Time1' */

    /* Logic: '<S46>/Logical3' incorporates:
     *  Logic: '<S8>/Logical1'
     *  Logic: '<S8>/Logical2'
     *  Logic: '<S8>/Logical3'
     */
    rtb_Logical3_nz = (((VeSSDI_b_HVBatRdy) || (!VeSSDI_b_BPCM_UVActv)) ||
                       (VeSSDC_b_EnblHVBattChrg));

    /* Switch: '<S46>/Switch' */
    if (VeSSDI_b_PrepareToShtdwn)
    {
        /* Switch: '<S46>/Switch' incorporates:
         *  Logic: '<S46>/Logical4'
         */
        rtb_AND_fx = !rtb_Logical5_p;
    }
    else
    {
        /* Switch: '<S46>/Switch' */
        rtb_AND_fx = VeSSDI_b_CntrlrPwrHold;
    }

    /* End of Switch: '<S46>/Switch' */

    /* Outputs for Atomic SubSystem: '<S46>/Signal Latch On With Reset' */
    /* Logic: '<S124>/OR1' incorporates:
     *  Logic: '<S124>/OR'
     *  UnitDelay: '<S124>/Unit Delay'
     */
    SSDR_ac_DW.UnitDelay_DSTATE_lp = ((VeSSDC_b_EnblThrmlSysArb) || (rtb_AND_pa &&
        (SSDR_ac_DW.UnitDelay_DSTATE_lp)));

    /* End of Outputs for SubSystem: '<S46>/Signal Latch On With Reset' */

    /* Switch: '<S156>/Switch1' incorporates:
     *  Gain: '<S226>/Gain'
     */
    if (rtb_AND_la)
    {
        /* Switch: '<S156>/Switch1' incorporates:
         *  Gain: '<S227>/Gain'
         *  S-Function (sfix_bitop): '<S158>/FixPt Bitwise Operator1'
         */
        rtb_VeSSDR_K_Index_T1 = (uint16)((sint32)((rtb_UnitDelay3_n ? 1 : 0) |
            ((uint8)2)));
    }
    else
    {
        /* Switch: '<S156>/Switch1' incorporates:
         *  Gain: '<S227>/Gain'
         */
        rtb_VeSSDR_K_Index_T1 = rtb_UnitDelay3_n ? ((uint16)1) : ((uint16)0);
    }

    /* End of Switch: '<S156>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S215>/Signal Latch On2' */
    /* Logic: '<S235>/OR2' incorporates:
     *  UnitDelay: '<S235>/Unit Delay'
     */
    SSDR_ac_DW.UnitDelay_DSTATE_e4 = ((VeSSDI_b_OBCRRdy4ShtDwn) ||
        (SSDR_ac_DW.UnitDelay_DSTATE_e4));

    /* End of Outputs for SubSystem: '<S215>/Signal Latch On2' */

    /* Switch: '<S168>/Switch4' incorporates:
     *  Constant: '<S168>/Constant1'
     *  Constant: '<S189>/Constant'
     *  Logic: '<S168>/Logical21'
     *  RelationalOperator: '<S168>/Comparison12'
     *  RelationalOperator: '<S168>/Comparison13'
     */
    if ((((uint32)VeSSDI_e_InitStatus) != CeSCPR_e_InitComplete) || (0 >
            VeSSDI_t_SchChrg_WUTime))
    {
        /* Switch: '<S168>/Switch4' incorporates:
         *  Constant: '<S168>/Constant2'
         */
        rtb_VeSSDR_K_EncSysState = 0U;
    }
    else
    {
        /* Switch: '<S168>/Switch4' */
        rtb_VeSSDR_K_EncSysState = (uint16)VeSSDI_t_SchChrg_WUTime;
    }

    /* End of Switch: '<S168>/Switch4' */

    /* Outputs for Atomic SubSystem: '<S168>/Limiter2' */
    /* Switch: '<S203>/Switch1' incorporates:
     *  Constant: '<S168>/Constant Value12'
     *  RelationalOperator: '<S203>/Relational Operator'
     */
    if (65500 < ((sint32)rtb_VeSSDR_K_EncSysState))
    {
        /* Switch: '<S204>/Switch1' */
        rtb_VeSSDR_K_EncSysState = 65500U;
    }

    /* End of Switch: '<S203>/Switch1' */

    /* Switch: '<S203>/Switch' incorporates:
     *  Constant: '<S168>/Constant Value13'
     *  RelationalOperator: '<S203>/Relational Operator1'
     */
    if (((sint32)rtb_VeSSDR_K_EncSysState) <= 0)
    {
        /* Switch: '<S203>/Switch' */
        rtb_VeSSDR_K_EncSysState = 0U;
    }

    /* End of Switch: '<S203>/Switch' */
    /* End of Outputs for SubSystem: '<S168>/Limiter2' */

    /* Product: '<S168>/Product1' incorporates:
     *  Constant: '<S168>/Constant Value7'
     *  DataTypeConversion: '<S168>/Data Type Conversion'
     */
    rtb_Product1 = (((uint32)rtb_VeSSDR_K_EncSysState) * 60U) * ((uint32)
        ((uint16)rtb_Switch1_ol));

    /* Outputs for Atomic SubSystem: '<S168>/Count Down  Reset Enabled2' */
    /* Switch: '<S187>/Switch1' incorporates:
     *  Constant: '<S187>/Constant Value'
     *  RelationalOperator: '<S168>/Comparison6'
     *  RelationalOperator: '<S187>/Greater  Than'
     *  Switch: '<S187>/Switch2'
     *  UnitDelay: '<S168>/Unit Delay2'
     *  UnitDelay: '<S187>/Unit Delay'
     */
    if (rtb_Product1 != SSDR_ac_DW.UnitDelay2_DSTATE)
    {
        SSDR_ac_DW.UnitDelay_DSTATE_k = rtb_Product1;
    }
    else
    {
        if (SSDR_ac_DW.UnitDelay_DSTATE_k > 0U)
        {
            /* UnitDelay: '<S187>/Unit Delay' incorporates:
             *  Constant: '<S187>/Constant Value1'
             *  Sum: '<S187>/Subtraction'
             *  Switch: '<S187>/Switch2'
             */
            SSDR_ac_DW.UnitDelay_DSTATE_k--;
        }
    }

    /* End of Switch: '<S187>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S215>/Signal Latch On With Reset1' */
    /* Logic: '<S231>/OR1' incorporates:
     *  Constant: '<S168>/Constant Value8'
     *  Constant: '<S187>/Constant Value2'
     *  Constant: '<S194>/Calib'
     *  Constant: '<S197>/Calib'
     *  Logic: '<S168>/Logical11'
     *  Logic: '<S168>/Logical19'
     *  Logic: '<S168>/Logical8'
     *  Logic: '<S168>/Logical9'
     *  Logic: '<S231>/NOT'
     *  Logic: '<S231>/OR'
     *  RelationalOperator: '<S168>/Comparison4'
     *  RelationalOperator: '<S187>/Greater  Than1'
     *  UnitDelay: '<S187>/Unit Delay'
     *  UnitDelay: '<S231>/Unit Delay'
     */
    SSDR_ac_DW.UnitDelay_DSTATE_cb = ((((SSDR_ac_DW.UnitDelay_DSTATE_k <= 0U) &&
        ((((sint32)rtb_VeSSDR_K_EncSysState) != 0) ||
         (KeSSDR_b_ZeroAsMinTimer_SchedChrg))) &&
        (KeSSDR_b_HV_PerWU_SchChrg_Timer_ExpEnbl)) || ((!VeSSDI_b_OBCRRdy4ShtDwn)
        && (SSDR_ac_DW.UnitDelay_DSTATE_cb)));

    /* End of Outputs for SubSystem: '<S215>/Signal Latch On With Reset1' */
    /* End of Outputs for SubSystem: '<S168>/Count Down  Reset Enabled2' */

    /* Switch: '<S215>/Switch2' */
    if (VeSSDI_b_OBCRRdy4ShtDwn)
    {
        /* Switch: '<S215>/Switch2' incorporates:
         *  Constant: '<S215>/FALSE Constant2'
         */
        rtb_Merge3 = false;
    }
    else
    {
        /* Switch: '<S215>/Switch2' incorporates:
         *  Logic: '<S215>/Logical2'
         *  Switch: '<S215>/Switch6'
         *  UnitDelay: '<S231>/Unit Delay'
         *  UnitDelay: '<S235>/Unit Delay'
         */
        rtb_Merge3 = (((!SSDR_ac_DW.UnitDelay_DSTATE_e4) && rtb_Merge3) ||
                      (SSDR_ac_DW.UnitDelay_DSTATE_cb));
    }

    /* End of Switch: '<S215>/Switch2' */

    /* Switch: '<S156>/Switch2' */
    if (rtb_Merge3)
    {
        /* Switch: '<S156>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S160>/FixPt Bitwise Operator1'
         */
        rtb_VeSSDR_K_Index_T1 |= (uint16)4;
    }

    /* End of Switch: '<S156>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S215>/Signal Latch On3' */
    /* Logic: '<S236>/OR2' incorporates:
     *  UnitDelay: '<S236>/Unit Delay'
     */
    SSDR_ac_DW.UnitDelay_DSTATE_g5 = ((VeSSDI_b_THMRRdy4ShtDwn) ||
        (SSDR_ac_DW.UnitDelay_DSTATE_g5));

    /* End of Outputs for SubSystem: '<S215>/Signal Latch On3' */

    /* Switch: '<S168>/Switch1' incorporates:
     *  Constant: '<S168>/Constant Value16'
     *  Constant: '<S168>/Constant Value18'
     *  Constant: '<S190>/Constant'
     *  Constant: '<S199>/Calib'
     *  Logic: '<S168>/Logical16'
     *  RelationalOperator: '<S168>/Comparison10'
     *  RelationalOperator: '<S168>/Comparison11'
     *  RelationalOperator: '<S168>/Comparison14'
     *  RelationalOperator: '<S205>/Relational Operator'
     *  Switch: '<S205>/Switch1'
     */
    if (((((uint32)VeSSDI_e_InitStatus) != CeSCPR_e_InitComplete) ||
            (VeSSDI_t_TimeToDeparture == 0)) || (VeSSDI_t_SC_PrecTimer == -1))
    {
        /* Switch: '<S168>/Switch1' incorporates:
         *  Constant: '<S168>/Constant Value17'
         */
        rtb_Sum1_m = 0;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S168>/Limiter4' */
        if (KeSSDR_t_SC_PrecTimer_HighThrshld < VeSSDI_t_SC_PrecTimer)
        {
            /* Switch: '<S205>/Switch1' incorporates:
             *  Constant: '<S199>/Calib'
             *  Sum: '<S168>/Sum1'
             */
            rtb_Sum1_m = KeSSDR_t_SC_PrecTimer_HighThrshld;
        }
        else
        {
            /* Sum: '<S168>/Sum1' incorporates:
             *  Switch: '<S205>/Switch1'
             */
            rtb_Sum1_m = VeSSDI_t_SC_PrecTimer;
        }

        /* Switch: '<S205>/Switch' incorporates:
         *  Constant: '<S200>/Calib'
         *  RelationalOperator: '<S205>/Relational Operator1'
         */
        if (rtb_Sum1_m <= KeSSDR_t_SC_PrecTimer_LowThrshld)
        {
            rtb_Sum1_m = KeSSDR_t_SC_PrecTimer_LowThrshld;
        }

        /* End of Switch: '<S205>/Switch' */
        /* End of Outputs for SubSystem: '<S168>/Limiter4' */

        /* Sum: '<S168>/Sum1' */
        rtb_Sum1_m = (sint16)(VeSSDI_t_TimeToDeparture - rtb_Sum1_m);

        /* Switch: '<S168>/Switch' incorporates:
         *  Constant: '<S168>/Constant Value14'
         *  RelationalOperator: '<S168>/Comparison9'
         */
        if (rtb_Sum1_m <= 0)
        {
            /* Switch: '<S168>/Switch1' incorporates:
             *  Constant: '<S168>/Constant Value15'
             */
            rtb_Sum1_m = 1;
        }

        /* End of Switch: '<S168>/Switch' */
    }

    /* End of Switch: '<S168>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S168>/Limiter3' */
    /* Switch: '<S204>/Switch' incorporates:
     *  Constant: '<S168>/Constant Value13'
     *  RelationalOperator: '<S204>/Relational Operator1'
     *  Switch: '<S168>/Switch2'
     */
    if (((sint32)((uint16)rtb_Sum1_m)) > 0)
    {
        /* Switch: '<S204>/Switch' */
        rtb_Switch_o5 = (uint16)rtb_Sum1_m;
    }
    else
    {
        /* Switch: '<S204>/Switch' */
        rtb_Switch_o5 = 0U;
    }

    /* End of Switch: '<S204>/Switch' */
    /* End of Outputs for SubSystem: '<S168>/Limiter3' */

    /* Product: '<S168>/Product2' incorporates:
     *  Constant: '<S168>/Constant Value10'
     *  DataTypeConversion: '<S168>/Data Type Conversion'
     */
    rtb_Product2 = (((uint32)rtb_Switch_o5) * 60U) * ((uint32)((uint16)
        rtb_Switch1_ol));

    /* Outputs for Atomic SubSystem: '<S168>/Count Down  Reset Enabled3' */
    /* Switch: '<S188>/Switch1' incorporates:
     *  Constant: '<S188>/Constant Value'
     *  RelationalOperator: '<S168>/Comparison8'
     *  RelationalOperator: '<S188>/Greater  Than'
     *  Switch: '<S188>/Switch2'
     *  UnitDelay: '<S168>/Unit Delay3'
     *  UnitDelay: '<S188>/Unit Delay'
     */
    if (rtb_Product2 != SSDR_ac_DW.UnitDelay3_DSTATE)
    {
        SSDR_ac_DW.UnitDelay_DSTATE_c1 = rtb_Product2;
    }
    else
    {
        if (SSDR_ac_DW.UnitDelay_DSTATE_c1 > 0U)
        {
            /* UnitDelay: '<S188>/Unit Delay' incorporates:
             *  Constant: '<S188>/Constant Value1'
             *  Sum: '<S188>/Subtraction'
             *  Switch: '<S188>/Switch2'
             */
            SSDR_ac_DW.UnitDelay_DSTATE_c1--;
        }
    }

    /* End of Switch: '<S188>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S215>/Signal Latch On With Reset3' */
    /* Logic: '<S233>/OR1' incorporates:
     *  Constant: '<S168>/Constant Value11'
     *  Constant: '<S188>/Constant Value2'
     *  Constant: '<S193>/Calib'
     *  Constant: '<S196>/Calib'
     *  Logic: '<S168>/Logical13'
     *  Logic: '<S168>/Logical14'
     *  Logic: '<S168>/Logical15'
     *  Logic: '<S168>/Logical20'
     *  Logic: '<S233>/OR'
     *  RelationalOperator: '<S168>/Comparison7'
     *  RelationalOperator: '<S188>/Greater  Than1'
     *  UnitDelay: '<S188>/Unit Delay'
     *  UnitDelay: '<S233>/Unit Delay'
     */
    SSDR_ac_DW.UnitDelay_DSTATE_ms = ((((SSDR_ac_DW.UnitDelay_DSTATE_c1 <= 0U) &&
        ((((sint32)rtb_Switch_o5) != 0) || (KeSSDR_b_ZeroAsMinTimer_DepSched))) &&
        (KeSSDR_b_HV_PerWU_CabinPre_Timer_ExpEnbl)) || (tmpRead &&
        (SSDR_ac_DW.UnitDelay_DSTATE_ms)));

    /* End of Outputs for SubSystem: '<S215>/Signal Latch On With Reset3' */
    /* End of Outputs for SubSystem: '<S168>/Count Down  Reset Enabled3' */

    /* Switch: '<S215>/Switch3' */
    if (VeSSDI_b_THMRRdy4ShtDwn)
    {
        /* UnitDelay: '<S177>/Unit Delay' incorporates:
         *  Constant: '<S215>/FALSE Constant3'
         */
        rtb_UnitDelay_gw = false;
    }
    else
    {
        /* UnitDelay: '<S177>/Unit Delay' incorporates:
         *  Logic: '<S215>/Logical3'
         *  Switch: '<S215>/Switch7'
         *  UnitDelay: '<S233>/Unit Delay'
         *  UnitDelay: '<S236>/Unit Delay'
         */
        rtb_UnitDelay_gw = (((!SSDR_ac_DW.UnitDelay_DSTATE_g5) && rtb_AND_py) ||
                            (SSDR_ac_DW.UnitDelay_DSTATE_ms));
    }

    /* End of Switch: '<S215>/Switch3' */

    /* Switch: '<S156>/Switch3' incorporates:
     *  Gain: '<S225>/Gain'
     */
    if (rtb_UnitDelay_gw)
    {
        /* Switch: '<S156>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S161>/FixPt Bitwise Operator1'
         */
        rtb_VeSSDR_K_Index_T1 |= (uint16)8;
    }

    /* End of Switch: '<S156>/Switch3' */

    /* Switch: '<S156>/Switch4' */
    if (rtb_AND_fw)
    {
        /* Switch: '<S156>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S162>/FixPt Bitwise Operator1'
         */
        rtb_VeSSDR_K_Index_T1 |= (uint16)16;
    }

    /* End of Switch: '<S156>/Switch4' */

    /* Switch: '<S156>/Switch12' */
    if (VeSSDI_b_BSWTimerExpired)
    {
        /* Switch: '<S156>/Switch12' incorporates:
         *  S-Function (sfix_bitop): '<S159>/FixPt Bitwise Operator1'
         */
        rtb_VeSSDR_K_Index_T1 |= (uint16)32;
    }

    /* End of Switch: '<S156>/Switch12' */

    /* Outputs for Atomic SubSystem: '<S167>/Count Down  Reset Trigger Enabled' */
    /* Outputs for Atomic SubSystem: '<S170>/EdgeRising_F2T' */
    /* Logic: '<S177>/OR1' incorporates:
     *  UnitDelay: '<S177>/Unit Delay'
     */
    rtb_AND_py = !SSDR_ac_DW.UnitDelay_DSTATE_cx;

    /* Update for UnitDelay: '<S177>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_cx = VeSSDI_b_CntrlrPwrHold_Latch;

    /* Switch: '<S170>/Switch1' incorporates:
     *  Constant: '<S170>/Constant Value'
     *  Constant: '<S172>/Calib'
     *  Logic: '<S170>/AND'
     *  Logic: '<S177>/AND'
     *  RelationalOperator: '<S170>/Greater  Than'
     *  Switch: '<S170>/Switch2'
     *  UnitDelay: '<S170>/Unit Delay'
     */
    if ((VeSSDI_b_CntrlrPwrHold_Latch) && rtb_AND_py)
    {
        SSDR_ac_DW.UnitDelay_DSTATE_oj = KeSSDR_Cnt_CntrlrPwrHold_Latch;
    }
    else
    {
        if ((VeSSDI_b_CntrlrPwrHold_Latch) && (((sint32)
                SSDR_ac_DW.UnitDelay_DSTATE_oj) > 0))
        {
            /* UnitDelay: '<S170>/Unit Delay' incorporates:
             *  Constant: '<S170>/Constant Value1'
             *  Sum: '<S170>/Subtraction'
             *  Switch: '<S170>/Switch2'
             */
            SSDR_ac_DW.UnitDelay_DSTATE_oj = (uint16)((sint32)(((sint32)
                SSDR_ac_DW.UnitDelay_DSTATE_oj) - 1));
        }
    }

    /* End of Switch: '<S170>/Switch1' */
    /* End of Outputs for SubSystem: '<S170>/EdgeRising_F2T' */

    /* RelationalOperator: '<S170>/Greater  Than1' incorporates:
     *  Constant: '<S170>/Constant Value2'
     *  UnitDelay: '<S170>/Unit Delay'
     */
    VeSSDC_b_CntrlrPwrHoldCntdwn = (((sint32)SSDR_ac_DW.UnitDelay_DSTATE_oj) > 0);

    /* End of Outputs for SubSystem: '<S167>/Count Down  Reset Trigger Enabled' */

    /* If: '<S167>/If' */
    if (VeSSDI_b_CntrlrPwrHold_Latch)
    {
        /* Outputs for IfAction SubSystem: '<S167>/TimerArb_at_PwrDwn_Gtwy' incorporates:
         *  ActionPort: '<S175>/Action Port'
         */
        /* Merge: '<S167>/Merge' incorporates:
         *  Inport: '<S175>/In1'
         *  UnitDelay: '<S167>/Unit Delay'
         */
        rtb_VeSSDR_K_Index_T2 = SSDR_ac_DW.UnitDelay_DSTATE_p4;

        /* End of Outputs for SubSystem: '<S167>/TimerArb_at_PwrDwn_Gtwy' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S167>/TimerArb_at_PwrUp' incorporates:
         *  ActionPort: '<S176>/Action Port'
         */
        /* Merge: '<S167>/Merge' incorporates:
         *  Constant: '<S176>/Constant Value3'
         *  SignalConversion generated from: '<S176>/MinimumTimerFirstWup'
         */
        rtb_VeSSDR_K_Index_T2 = 0U;

        /* End of Outputs for SubSystem: '<S167>/TimerArb_at_PwrUp' */
    }

    /* End of If: '<S167>/If' */

    /* Outputs for Enabled SubSystem: '<S167>/TimerArb_at_PwrDwn' incorporates:
     *  EnablePort: '<S174>/Enable'
     */
    if (VeSSDC_b_CntrlrPwrHoldCntdwn)
    {
        /* Chart: '<S178>/ArrayIndices_generator' */
        /* Gateway: SSDR_FastTEF/SSDC_DtrmSysState/ProcUserInputs/PreProcPeriodicWupSignals/PerWU_Shtdwn_Mngr/TimerArb_at_PwrDwn/WakeupConditionAfterSleep/ArrayIndices_generator */
        /* During: SSDR_FastTEF/SSDC_DtrmSysState/ProcUserInputs/PreProcPeriodicWupSignals/PerWU_Shtdwn_Mngr/TimerArb_at_PwrDwn/WakeupConditionAfterSleep/ArrayIndices_generator */
        /* Entry Internal: SSDR_FastTEF/SSDC_DtrmSysState/ProcUserInputs/PreProcPeriodicWupSignals/PerWU_Shtdwn_Mngr/TimerArb_at_PwrDwn/WakeupConditionAfterSleep/ArrayIndices_generator */
        /* Transition: '<S179>:1' */
        i = 0U;
        SSDR_ac_B.ArrayIndices[0] = 0U;
        while (((sint32)i) < 3)
        {
            /* Transition: '<S179>:4' */
            /* Transition: '<S179>:6' */
            SSDR_ac_B.ArrayIndices[((sint32)i) + 1] = (uint8)((sint32)(((sint32)
                SSDR_ac_B.ArrayIndices[i]) + 1));

            /* Transition: '<S179>:8' */
            /* Transition: '<S179>:9' */
            i = (uint8)((sint32)(((sint32)i) + 1));
        }

        /* End of Chart: '<S178>/ArrayIndices_generator' */

        /* Chart: '<S178>/Sort_Algorithm' */
        /* Transition: '<S179>:11' */
        /* Gateway: SSDR_FastTEF/SSDC_DtrmSysState/ProcUserInputs/PreProcPeriodicWupSignals/PerWU_Shtdwn_Mngr/TimerArb_at_PwrDwn/WakeupConditionAfterSleep/Sort_Algorithm */
        /* During: SSDR_FastTEF/SSDC_DtrmSysState/ProcUserInputs/PreProcPeriodicWupSignals/PerWU_Shtdwn_Mngr/TimerArb_at_PwrDwn/WakeupConditionAfterSleep/Sort_Algorithm */
        /* Entry Internal: SSDR_FastTEF/SSDC_DtrmSysState/ProcUserInputs/PreProcPeriodicWupSignals/PerWU_Shtdwn_Mngr/TimerArb_at_PwrDwn/WakeupConditionAfterSleep/Sort_Algorithm */
        /* Transition: '<S181>:1' */
        i = 3U;

        /* Switch: '<S178>/Switch' incorporates:
         *  Constant: '<S178>/Constant Value1'
         *  RelationalOperator: '<S178>/Comparison9'
         */
        if (0 == ((sint32)rtb_Switch_d))
        {
            /* Chart: '<S178>/Sort_Algorithm' incorporates:
             *  Constant: '<S178>/Constant Value'
             */
            rtb_TimerArraySorted[0] = 65500U;
        }
        else
        {
            /* Chart: '<S178>/Sort_Algorithm' */
            rtb_TimerArraySorted[0] = rtb_Switch_d;
        }

        /* End of Switch: '<S178>/Switch' */

        /* Switch: '<S178>/Switch1' incorporates:
         *  Constant: '<S178>/Constant Value1'
         *  RelationalOperator: '<S178>/Comparison1'
         */
        if (0 == ((sint32)rtb_Switch_l1))
        {
            /* Chart: '<S178>/Sort_Algorithm' incorporates:
             *  Constant: '<S178>/Constant Value'
             */
            rtb_TimerArraySorted[1] = 65500U;
        }
        else
        {
            /* Chart: '<S178>/Sort_Algorithm' */
            rtb_TimerArraySorted[1] = rtb_Switch_l1;
        }

        /* End of Switch: '<S178>/Switch1' */

        /* Switch: '<S178>/Switch2' incorporates:
         *  Constant: '<S178>/Constant Value1'
         *  RelationalOperator: '<S178>/Comparison2'
         */
        if (0 == ((sint32)rtb_VeSSDR_K_EncSysState))
        {
            /* Chart: '<S178>/Sort_Algorithm' incorporates:
             *  Constant: '<S178>/Constant Value'
             */
            rtb_TimerArraySorted[2] = 65500U;
        }
        else
        {
            /* Chart: '<S178>/Sort_Algorithm' */
            rtb_TimerArraySorted[2] = rtb_VeSSDR_K_EncSysState;
        }

        /* End of Switch: '<S178>/Switch2' */

        /* Switch: '<S178>/Switch3' incorporates:
         *  Constant: '<S178>/Constant Value1'
         *  RelationalOperator: '<S178>/Comparison3'
         */
        if (0 == ((sint32)rtb_Switch_o5))
        {
            /* Chart: '<S178>/Sort_Algorithm' incorporates:
             *  Constant: '<S178>/Constant Value'
             */
            rtb_TimerArraySorted[3] = 65500U;
        }
        else
        {
            /* Chart: '<S178>/Sort_Algorithm' */
            rtb_TimerArraySorted[3] = rtb_Switch_o5;
        }

        /* End of Switch: '<S178>/Switch3' */

        /* Chart: '<S178>/Sort_Algorithm' */
        for (i_0 = 0; i_0 < 4; i_0++)
        {
            rtb_ArrayIndicesSorted[i_0] = SSDR_ac_B.ArrayIndices[i_0];
        }

        while (((sint32)i) > 0)
        {
            /* Transition: '<S181>:4' */
            /* Transition: '<S181>:6' */
            for (j = 0U; j < i; j = (uint8)((sint32)(((sint32)j) + 1)))
            {
                /* Transition: '<S181>:13' */
                /* Transition: '<S181>:15' */
                rtb_Switch_d = rtb_TimerArraySorted[((sint32)j) + 1];
                if (rtb_TimerArraySorted[j] > rtb_Switch_d)
                {
                    /* Transition: '<S181>:20' */
                    /* Transition: '<S181>:22' */
                    rtb_Switch_l1 = rtb_TimerArraySorted[j];
                    rtb_TimerArraySorted[j] = rtb_Switch_d;
                    rtb_TimerArraySorted[((sint32)j) + 1] = rtb_Switch_l1;
                    TemporaryTrack = rtb_ArrayIndicesSorted[j];
                    rtb_ArrayIndicesSorted[j] = rtb_ArrayIndicesSorted[((sint32)
                        j) + 1];
                    rtb_ArrayIndicesSorted[((sint32)j) + 1] = TemporaryTrack;

                    /* Transition: '<S181>:24' */
                    /* Transition: '<S181>:25' */
                }
                else
                {
                    /* Transition: '<S181>:17' */
                }

                /* Transition: '<S181>:18' */
            }

            /* Transition: '<S181>:8' */
            /* Transition: '<S181>:9' */
            i = (uint8)((sint32)(((sint32)i) - 1));
        }

        /* Transition: '<S181>:11' */
        /* Transition: '<S181>:40' */
        SSDR_ac_B.MinimumTimerAtFirstWup = rtb_TimerArraySorted[0];

        /* Chart: '<S178>/ContempFlag_array_generator' */
        /* Gateway: SSDR_FastTEF/SSDC_DtrmSysState/ProcUserInputs/PreProcPeriodicWupSignals/PerWU_Shtdwn_Mngr/TimerArb_at_PwrDwn/WakeupConditionAfterSleep/ContempFlag_array_generator */
        /* During: SSDR_FastTEF/SSDC_DtrmSysState/ProcUserInputs/PreProcPeriodicWupSignals/PerWU_Shtdwn_Mngr/TimerArb_at_PwrDwn/WakeupConditionAfterSleep/ContempFlag_array_generator */
        /* Entry Internal: SSDR_FastTEF/SSDC_DtrmSysState/ProcUserInputs/PreProcPeriodicWupSignals/PerWU_Shtdwn_Mngr/TimerArb_at_PwrDwn/WakeupConditionAfterSleep/ContempFlag_array_generator */
        /* Transition: '<S180>:1' */
        i = 0U;
        SSDR_ac_B.ContempFlag_Init[0] = 0U;
        while (((sint32)i) < 3)
        {
            /* Transition: '<S180>:4' */
            /* Transition: '<S180>:6' */
            SSDR_ac_B.ContempFlag_Init[((sint32)i) + 1] = 0U;

            /* Transition: '<S180>:8' */
            /* Transition: '<S180>:9' */
            i = (uint8)((sint32)(((sint32)i) + 1));
        }

        /* End of Chart: '<S178>/ContempFlag_array_generator' */

        /* Chart: '<S178>/Stateflow Chart' */
        /* Transition: '<S180>:11' */
        /* Gateway: SSDR_FastTEF/SSDC_DtrmSysState/ProcUserInputs/PreProcPeriodicWupSignals/PerWU_Shtdwn_Mngr/TimerArb_at_PwrDwn/WakeupConditionAfterSleep/Stateflow
           Chart */
        /* During: SSDR_FastTEF/SSDC_DtrmSysState/ProcUserInputs/PreProcPeriodicWupSignals/PerWU_Shtdwn_Mngr/TimerArb_at_PwrDwn/WakeupConditionAfterSleep/Stateflow
           Chart */
        /* Entry Internal: SSDR_FastTEF/SSDC_DtrmSysState/ProcUserInputs/PreProcPeriodicWupSignals/PerWU_Shtdwn_Mngr/TimerArb_at_PwrDwn/WakeupConditionAfterSleep/Stateflow
           Chart */
        /* Transition: '<S182>:1' */
        i = 0U;
        for (i_0 = 0; i_0 < 4; i_0++)
        {
            rtb_ContempFlag[i_0] = SSDR_ac_B.ContempFlag_Init[i_0];
        }

        while (((sint32)i) < 3)
        {
            /* Transition: '<S182>:4' */
            if (rtb_TimerArraySorted[((sint32)i) + 1] == rtb_TimerArraySorted[i])
            {
                /* Transition: '<S182>:6' */
                /* Transition: '<S182>:8' */
                rtb_ContempFlag[((sint32)i) + 1] = rtb_ContempFlag[i];

                /* Transition: '<S182>:10' */
            }
            else
            {
                /* Transition: '<S182>:11' */
                rtb_ContempFlag[((sint32)i) + 1] = (uint8)((sint32)(((sint32)
                    rtb_ContempFlag[i]) + 1));
            }

            /* Transition: '<S182>:13' */
            /* Transition: '<S182>:14' */
            i = (uint8)((sint32)(((sint32)i) + 1));
        }

        /* End of Chart: '<S178>/Stateflow Chart' */

        /* Chart: '<S178>/Stateflow Chart1' */
        /* Transition: '<S182>:16' */
        /* Transition: '<S182>:25' */
        /* Gateway: SSDR_FastTEF/SSDC_DtrmSysState/ProcUserInputs/PreProcPeriodicWupSignals/PerWU_Shtdwn_Mngr/TimerArb_at_PwrDwn/WakeupConditionAfterSleep/Stateflow
           Chart1 */
        /* During: SSDR_FastTEF/SSDC_DtrmSysState/ProcUserInputs/PreProcPeriodicWupSignals/PerWU_Shtdwn_Mngr/TimerArb_at_PwrDwn/WakeupConditionAfterSleep/Stateflow
           Chart1 */
        /* Entry Internal: SSDR_FastTEF/SSDC_DtrmSysState/ProcUserInputs/PreProcPeriodicWupSignals/PerWU_Shtdwn_Mngr/TimerArb_at_PwrDwn/WakeupConditionAfterSleep/Stateflow
           Chart1 */
        /* Transition: '<S183>:1' */
        i = 0U;
        SSDR_ac_B.ContempActivationBit[0] = true;
        SSDR_ac_B.ContempActivationBit[1] = false;
        SSDR_ac_B.ContempActivationBit[2] = false;
        SSDR_ac_B.ContempActivationBit[3] = false;
        do
        {
            exitg1 = 0;
            if (((sint32)i) < 3)
            {
                /* Transition: '<S183>:4' */
                if (rtb_ContempFlag[((sint32)i) + 1] == rtb_ContempFlag[i])
                {
                    /* Transition: '<S183>:6' */
                    /* Transition: '<S183>:8' */
                    SSDR_ac_B.ContempActivationBit[((sint32)i) + 1] = true;

                    /* Transition: '<S183>:10' */
                }
                else
                {
                    /* Transition: '<S183>:11' */
                }

                if (SSDR_ac_B.ContempActivationBit[((sint32)i) + 1])
                {
                    /* Transition: '<S183>:13' */
                    /* Transition: '<S183>:14' */
                    i = (uint8)((sint32)(((sint32)i) + 1));
                }
                else
                {
                    /* Transition: '<S183>:16' */
                    /* Transition: '<S183>:18' */
                    /* Transition: '<S183>:20' */
                    exitg1 = 1;
                }
            }
            else
            {
                /* Transition: '<S183>:21' */
                exitg1 = 1;
            }
        }
        while (exitg1 == 0);

        /* Chart: '<S178>/Stateflow Chart2' incorporates:
         *  Constant: '<S174>/Constant Value17'
         */
        /* Gateway: SSDR_FastTEF/SSDC_DtrmSysState/ProcUserInputs/PreProcPeriodicWupSignals/PerWU_Shtdwn_Mngr/TimerArb_at_PwrDwn/WakeupConditionAfterSleep/Stateflow
           Chart2 */
        /* During: SSDR_FastTEF/SSDC_DtrmSysState/ProcUserInputs/PreProcPeriodicWupSignals/PerWU_Shtdwn_Mngr/TimerArb_at_PwrDwn/WakeupConditionAfterSleep/Stateflow
           Chart2 */
        /* Entry Internal: SSDR_FastTEF/SSDC_DtrmSysState/ProcUserInputs/PreProcPeriodicWupSignals/PerWU_Shtdwn_Mngr/TimerArb_at_PwrDwn/WakeupConditionAfterSleep/Stateflow
           Chart2 */
        /* Transition: '<S184>:1' */
        i = 0U;
        SSDR_ac_DW.temp[0] = rtb_ArrayIndicesSorted[0];
        while (((sint32)i) < 4)
        {
            /* Transition: '<S184>:4' */
            if (SSDR_ac_B.ContempActivationBit[i])
            {
                /* Transition: '<S184>:6' */
                /* Transition: '<S184>:8' */
                SSDR_ac_DW.temp[i] = rtb_ArrayIndicesSorted[i];

                /* Transition: '<S184>:10' */
            }
            else
            {
                /* Transition: '<S184>:78' */
                SSDR_ac_DW.temp[i] = 14U;
            }

            /* Transition: '<S184>:13' */
            /* Transition: '<S184>:14' */
            i = (uint8)((sint32)(((sint32)i) + 1));
        }

        /* Transition: '<S184>:16' */
        /* Transition: '<S184>:39' */
        i = 0U;
        SSDR_ac_B.WakeupReasonBit[0] = false;
        SSDR_ac_B.WakeupReasonBit[1] = false;
        SSDR_ac_B.WakeupReasonBit[2] = false;
        SSDR_ac_B.WakeupReasonBit[3] = false;
        while (((sint32)i) < 4)
        {
            /* Transition: '<S184>:50' */
            if ((((sint32)SSDR_ac_DW.temp[i]) != 14) && (((sint32)
                    SSDR_ac_DW.temp[i]) < 4))
            {
                /* Transition: '<S184>:52' */
                /* Transition: '<S184>:54' */
                SSDR_ac_B.WakeupReasonBit[SSDR_ac_DW.temp[i]] = true;

                /* Transition: '<S184>:56' */
            }
            else
            {
                /* Transition: '<S184>:57' */
            }

            /* Transition: '<S184>:59' */
            /* Transition: '<S184>:60' */
            i = (uint8)((sint32)(((sint32)i) + 1));
        }

        /* End of Chart: '<S178>/Stateflow Chart2' */

        /* DataStoreWrite: '<S174>/Data Store Write' */
        /* Transition: '<S184>:62' */
        SSDR_ac_DW.NeSSDC_b_HVBatPerWUThermal = SSDR_ac_B.WakeupReasonBit[0];

        /* DataStoreWrite: '<S174>/Data Store Write1' */
        SSDR_ac_DW.NeSSDC_b_HVBatPerWU12VChrg = SSDR_ac_B.WakeupReasonBit[1];

        /* DataStoreWrite: '<S174>/Data Store Write2' */
        SSDR_ac_DW.NeSSDC_b_HVBatPerWUSchChrg = SSDR_ac_B.WakeupReasonBit[2];

        /* DataStoreWrite: '<S174>/Data Store Write3' */
        SSDR_ac_DW.NeSSDC_b_HVBatPerWUCabinPre = SSDR_ac_B.WakeupReasonBit[3];
    }

    /* End of Outputs for SubSystem: '<S167>/TimerArb_at_PwrDwn' */

    /* Update for UnitDelay: '<S145>/Unit Delay3' incorporates:
     *  Switch: '<S5>/Switch'
     */
    SSDR_ac_DW.UnitDelay3_DSTATE_o = VeSSDI_e_PMM_PowerMode;

    /* Update for UnitDelay: '<S145>/Unit Delay7' incorporates:
     *  Switch: '<S5>/Switch'
     */
    SSDR_ac_DW.UnitDelay7_DSTATE_a = VeSSDI_e_PMM_PowerMode;

    /* Update for UnitDelay: '<S145>/Unit Delay8' incorporates:
     *  Switch: '<S5>/Switch'
     */
    SSDR_ac_DW.UnitDelay8_DSTATE = VeSSDI_e_PMM_PowerMode;

    /* Update for UnitDelay: '<S145>/Unit Delay9' incorporates:
     *  Switch: '<S5>/Switch'
     */
    SSDR_ac_DW.UnitDelay9_DSTATE = VeSSDI_e_PMM_PowerMode;

    /* Update for UnitDelay: '<S145>/Unit Delay' incorporates:
     *  Switch: '<S5>/Switch'
     */
    SSDR_ac_DW.UnitDelay_DSTATE_cs = VeSSDI_e_PMM_PowerMode;

    /* Update for UnitDelay: '<S145>/Unit Delay5' incorporates:
     *  Switch: '<S5>/Switch'
     */
    SSDR_ac_DW.UnitDelay5_DSTATE_i = VeSSDI_e_PMM_PowerMode;

    /* Update for UnitDelay: '<S145>/Unit Delay2' incorporates:
     *  Switch: '<S320>/Switch1'
     *  UnitDelay: '<S145>/Unit Delay1'
     */
    SSDR_ac_DW.UnitDelay2_DSTATE_h = SSDR_ac_DW.UnitDelay1_DSTATE_d;

    /* Update for UnitDelay: '<S145>/Unit Delay6' incorporates:
     *  Switch: '<S320>/Switch1'
     *  UnitDelay: '<S145>/Unit Delay1'
     */
    SSDR_ac_DW.UnitDelay6_DSTATE_f = SSDR_ac_DW.UnitDelay1_DSTATE_d;

    /* Update for UnitDelay: '<S143>/Unit Delay1' incorporates:
     *  Switch: '<S5>/Switch1'
     */
    SSDR_ac_DW.UnitDelay1_DSTATE_lf = VeSSDI_e_ChargingLevel;

    /* Update for UnitDelay: '<S143>/Unit Delay3' incorporates:
     *  Switch: '<S5>/Switch'
     */
    SSDR_ac_DW.UnitDelay3_DSTATE_pd = VeSSDI_e_PMM_PowerMode;

    /* Update for UnitDelay: '<S143>/Unit Delay4' */
    SSDR_ac_DW.UnitDelay4_DSTATE_k = VeSSDI_b_RmtStartActv;

    /* Update for UnitDelay: '<S143>/Unit Delay5' incorporates:
     *  Switch: '<S5>/Switch6'
     */
    SSDR_ac_DW.UnitDelay5_DSTATE_e = VeSSDI_e_InvOprStat;

    /* Update for UnitDelay: '<S143>/Unit Delay6' incorporates:
     *  Switch: '<S5>/Switch7'
     */
    SSDR_ac_DW.UnitDelay6_DSTATE_d = VeSSDI_e_V2GOprStat;

    /* Update for UnitDelay: '<S144>/Unit Delay2' */
    SSDR_ac_DW.UnitDelay2_DSTATE_l = VeSSDR_b_RstInvOpr;

    /* Update for UnitDelay: '<S149>/Unit Delay1' */
    SSDR_ac_DW.UnitDelay1_DSTATE_b = VeSSDI_b_SecureConnV2L;

    /* Update for UnitDelay: '<S148>/Unit Delay1' */
    SSDR_ac_DW.UnitDelay1_DSTATE_f = VeSSDI_b_RmtStartActv;

    /* Update for UnitDelay: '<S142>/Unit Delay1' incorporates:
     *  UnitDelay: '<S142>/Unit Delay3'
     */
    SSDR_ac_DW.UnitDelay1_DSTATE_n = SSDR_ac_DW.UnitDelay3_DSTATE_k;

    /* Update for UnitDelay: '<S142>/Unit Delay5' incorporates:
     *  Switch: '<S5>/Switch'
     */
    SSDR_ac_DW.UnitDelay5_DSTATE_d = VeSSDI_e_PMM_PowerMode;

    /* Update for UnitDelay: '<S142>/Unit Delay6' */
    SSDR_ac_DW.UnitDelay6_DSTATE = VeSSDI_b_PluggedIn;

    /* Update for UnitDelay: '<S142>/Unit Delay7' */
    SSDR_ac_DW.UnitDelay7_DSTATE = VeSSDI_b_RmtStartActv;

    /* Update for UnitDelay: '<S142>/Unit Delay8' incorporates:
     *  Switch: '<S5>/Switch6'
     */
    SSDR_ac_DW.UnitDelay8_DSTATE_o = VeSSDI_e_InvOprStat;

    /* Update for UnitDelay: '<S142>/Unit Delay9' incorporates:
     *  Switch: '<S5>/Switch7'
     */
    SSDR_ac_DW.UnitDelay9_DSTATE_j = VeSSDI_e_V2GOprStat;

    /* Update for UnitDelay: '<S168>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_me = rtb_Product;

    /* Update for UnitDelay: '<S168>/Unit Delay1' */
    SSDR_ac_DW.UnitDelay1_DSTATE = rtb_Product4;

    /* Update for UnitDelay: '<S150>/Unit Delay1' incorporates:
     *  Switch: '<S325>/Switch1'
     */
    SSDR_ac_DW.UnitDelay1_DSTATE_o = Switch1_h;

    /* Update for UnitDelay: '<S150>/Unit Delay2' incorporates:
     *  Switch: '<S279>/Switch1'
     */
    SSDR_ac_DW.UnitDelay2_DSTATE_c = rtb_Switch1_e;

    /* Update for UnitDelay: '<S150>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_or = rtb_OR1_dn;

    /* Update for UnitDelay: '<S150>/Unit Delay3' incorporates:
     *  Switch: '<S291>/Switch1'
     */
    SSDR_ac_DW.UnitDelay3_DSTATE_c = VeSSDR_e_InvOprStat;

    /* Update for UnitDelay: '<S150>/Unit Delay4' incorporates:
     *  Switch: '<S359>/Switch1'
     */
    SSDR_ac_DW.UnitDelay4_DSTATE_l = rtb_Switch1_pa;

    /* Update for UnitDelay: '<S150>/Unit Delay5' */
    SSDR_ac_DW.UnitDelay5_DSTATE = rtb_AND_fw;

    /* Update for UnitDelay: '<S150>/Unit Delay6' */
    SSDR_ac_DW.UnitDelay6_DSTATE_p = rtb_AND_df;

    /* Update for UnitDelay: '<S33>/Unit Delay' incorporates:
     *  Switch: '<S325>/Switch1'
     */
    SSDR_ac_DW.UnitDelay_DSTATE_hmy = Switch1_h;

    /* Update for UnitDelay: '<S146>/Unit Delay1' incorporates:
     *  Switch: '<S5>/Switch15'
     */
    SSDR_ac_DW.UnitDelay1_DSTATE_j = VeSSDI_e_KeepHotColdSts;

    /* Update for UnitDelay: '<S146>/Unit Delay2' */
    SSDR_ac_DW.UnitDelay2_DSTATE_i = VeSSDI_b_HotEnablerReq;

    /* Update for UnitDelay: '<S35>/X0=TePMDR_e_PowerMode.CePMDR_e_PowerMode_Off' incorporates:
     *  Switch: '<S5>/Switch'
     */
    SSDR_ac_DW.X0TePMDR_e_PowerModeCePMDR_e_PowerMode_O = VeSSDI_e_PMM_PowerMode;

    /* Update for UnitDelay: '<S168>/Unit Delay2' */
    SSDR_ac_DW.UnitDelay2_DSTATE = rtb_Product1;

    /* Update for UnitDelay: '<S168>/Unit Delay3' */
    SSDR_ac_DW.UnitDelay3_DSTATE = rtb_Product2;

    /* Update for UnitDelay: '<S167>/Unit Delay' */
    SSDR_ac_DW.UnitDelay_DSTATE_p4 = SSDR_ac_B.MinimumTimerAtFirstWup;

    /* Outport: '<Root>/VeSSDR_b_NeutAllwd' incorporates:
     *  Constant: '<S100>/Constant'
     *  Constant: '<S102>/Calib'
     *  Constant: '<S103>/Calib'
     *  Constant: '<S98>/Constant'
     *  Logic: '<S35>/Logical1'
     *  Logic: '<S35>/Logical10'
     *  Logic: '<S35>/Logical2'
     *  Logic: '<S35>/Logical3'
     *  Logic: '<S35>/Logical5'
     *  Logic: '<S35>/Logical6'
     *  Logic: '<S35>/Logical7'
     *  Logic: '<S35>/Logical8'
     *  Logic: '<S35>/Logical9'
     *  RelationalOperator: '<S35>/Comparison1'
     *  RelationalOperator: '<S35>/Comparison5'
     *  SignalConversion generated from: '<S1>/SSDR_OutputOvrd__VeSSDR_b_NeutAllwd'
     *  Switch: '<S5>/Switch'
     *  Switch: '<S5>/Switch40'
     *  UnitDelay: '<S104>/Unit Delay'
     */
    (void)Rte_Write_VeSSDR_b_NeutAllwd_Value(((((uint32)VeSSDI_e_KeyInIgnArb) ==
        CePMDR_e_KeyInIgn_In_Ign) || ((!VeSSDI_b_InFieldMode) &&
        (KeSSDR_b_EnblInPlant_Neut))) && ((SSDR_ac_B.Compare_da) ||
        ((!VeSSDI_b_ValidPluginDetected) && ((((uint32)VeSSDI_e_PMM_PowerMode) ==
        CePMDR_e_PowerMode_Run) || ((KeSSDR_b_EnblAccPostRun_Neut) &&
        (SSDR_ac_DW.UnitDelay_DSTATE_fft))))));

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SSDR_OutputOvrd'
     */
    /* Outport: '<Root>/VeSSDR_e_KeySts' incorporates:
     *  Inport: '<S6>/VeSSDC_e_KeySts'
     *  SignalConversion generated from: '<S1>/SSDR_OutputOvrd__VeSSDR_e_KeySts'
     *  Switch: '<S325>/Switch1'
     */
    (void)Rte_Write_VeSSDR_e_KeySts_Value(Switch1_h);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SSDC_DtrmSysState'
     */
    /* Outport: '<Root>/VeSSDR_b_CabPrecDny_BattCond' incorporates:
     *  Gain: '<S228>/Gain'
     *  SignalConversion generated from: '<S1>/VeSSDO_b_CabPrecDny_BattCond'
     */
    (void)Rte_Write_VeSSDR_b_CabPrecDny_BattCond_Value(rtb_UnitDelay3_e);

    /* Outport: '<Root>/VeSSDR_b_DrvAllwd' incorporates:
     *  Constant: '<S75>/Calib'
     *  Logic: '<S33>/AND1'
     *  Logic: '<S33>/NOT'
     *  Logic: '<S33>/OR'
     *  SignalConversion generated from: '<S1>/VeSSDO_b_DrvAllwd'
     *  UnitDelay: '<S81>/Unit Delay'
     */
    (void)Rte_Write_VeSSDR_b_DrvAllwd_Value((VeSSDC_b_DrvAllwdArbTpChck) &&
        ((KeSSDR_b_DsblSwBattPack) || (!SSDR_ac_DW.UnitDelay_DSTATE_et)));

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SSDR_OutputOvrd'
     */
    /* Outport: '<Root>/VeSSDR_b_DrvNotAllwdTPChck' incorporates:
     *  Inport: '<S6>/VeSSDC_b_DrvNotAllwdTPChck'
     *  SignalConversion generated from: '<S1>/VeSSDO_b_DrvNotAllwdTPChck'
     */
    (void)Rte_Write_VeSSDR_b_DrvNotAllwdTPChck_Value(rtb_Merge4);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SSDC_DtrmSysState'
     */
    /* Outport: '<Root>/VeSSDR_b_DrvNotAllwdTPChckKeepPlugIn' incorporates:
     *  Constant: '<S53>/Constant'
     *  Logic: '<S33>/Logical19'
     *  RelationalOperator: '<S33>/Comparison12'
     *  SignalConversion generated from: '<S1>/VeSSDO_b_DrvNotAllwdTPChckKeepPlugIn'
     *  Switch: '<S5>/Switch1'
     */
    (void)Rte_Write_VeSSDR_b_DrvNotAllwdTPChckKeepPlugIn_Value(rtb_Merge4 &&
        (((uint32)VeSSDI_e_ChargingLevel) != CeOBCR_e_ChargingLvlDefault));

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SSDR_OutputOvrd'
     */
    /* Outport: '<Root>/VeSSDR_b_DsblPrplsnSysArb_Out' incorporates:
     *  Inport: '<S6>/VeSSDC_b_DsblPrplsnSysArb_Out'
     *  SignalConversion generated from: '<S1>/VeSSDO_b_DsblPrplsnSysArb_Out'
     */
    (void)Rte_Write_VeSSDR_b_DsblPrplsnSysArb_Out_Value(rtb_Logical9_j);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SSDC_DtrmSysState'
     */
    /* Outport: '<Root>/VeSSDR_b_EnblHVSys' incorporates:
     *  Logic: '<S38>/AND'
     *  Logic: '<S38>/NOT'
     *  SignalConversion generated from: '<S1>/VeSSDO_b_EnblHVSys'
     */
    (void)Rte_Write_VeSSDR_b_EnblHVSys_Value((VeSSDC_b_EnblHVSysOut) &&
        (!rtb_Logical1_p));

    /* Outport: '<Root>/VeSSDR_b_EnblInvrtrOpr' incorporates:
     *  Logic: '<S44>/AND'
     *  Logic: '<S44>/NOT'
     *  SignalConversion generated from: '<S1>/VeSSDO_b_EnblInvrtrOpr'
     */
    (void)Rte_Write_VeSSDR_b_EnblInvrtrOpr_Value((SSDR_ac_B.Compare_h) &&
        (!rtb_VeSSDC_b_ShtDwnPrplsnFlg));

    /* Outport: '<Root>/VeSSDR_b_EnblMtrSys' incorporates:
     *  Logic: '<S39>/AND'
     *  Logic: '<S39>/NOT'
     *  SignalConversion generated from: '<S1>/VeSSDO_b_EnblMtrSys'
     */
    (void)Rte_Write_VeSSDR_b_EnblMtrSys_Value((SSDR_ac_B.Compare_l) &&
        (!rtb_VeSSDC_b_ShtDwnPrplsnFlg));

    /* Outport: '<Root>/VeSSDR_b_EnblPrplsnSys' incorporates:
     *  Logic: '<S37>/Logical1'
     *  Logic: '<S37>/Logical3'
     *  SignalConversion generated from: '<S1>/VeSSDO_b_EnblPrplsnSys'
     */
    (void)Rte_Write_VeSSDR_b_EnblPrplsnSys_Value((VeSSDC_b_EnblPrplsnSysArb) &&
        (!rtb_Logical9_j));

    /* Switch: '<S46>/Switch1' incorporates:
     *  Constant: '<S121>/Calib'
     *  Logic: '<S46>/Logical6'
     */
    if (KeSSDR_b_EnblThrmlHandShake)
    {
        /* Switch: '<S46>/Switch2' incorporates:
         *  Logic: '<S46>/Logical1'
         *  Logic: '<S46>/Logical2'
         *  Logic: '<S46>/Logical7'
         *  UnitDelay: '<S124>/Unit Delay'
         */
        if (VeSSDI_b_PrepareToShtdwn)
        {
            rtb_AND_pa = (rtb_AND_pa && (!rtb_Logical5_p));
        }
        else
        {
            rtb_AND_pa = ((SSDR_ac_DW.UnitDelay_DSTATE_lp) && rtb_Logical3_nz);
        }
    }
    else
    {
        rtb_AND_pa = (rtb_Logical3_nz && rtb_AND_fx);
    }

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSSDR_b_EnblThrmlSys' incorporates:
     *  SignalConversion generated from: '<S1>/VeSSDO_b_EnblThrmlSys'
     */
    (void)Rte_Write_VeSSDR_b_EnblThrmlSys_Value(rtb_AND_pa);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SSDR_OutputOvrd'
     */
    /* Outport: '<Root>/VeSSDR_b_FOTAOvrrdEnblHVSys' incorporates:
     *  Inport: '<S6>/VeSSDC_b_FOTAOvrrdEnblHVSys'
     *  SignalConversion generated from: '<S1>/VeSSDO_b_FOTAOvrrdEnblHVSys'
     */
    (void)Rte_Write_VeSSDR_b_FOTAOvrrdEnblHVSys_Value(rtb_OR1_fw);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SSDC_DtrmSysState'
     */
    /* Outport: '<Root>/VeSSDR_b_HVBatPerWU12VChrg' incorporates:
     *  Gain: '<S226>/Gain'
     *  SignalConversion generated from: '<S1>/VeSSDO_b_HVBatPerWU12VChrg'
     */
    (void)Rte_Write_VeSSDR_b_HVBatPerWU12VChrg_Value(rtb_AND_la);

    /* Outport: '<Root>/VeSSDR_b_HVBatPerWUThermal' incorporates:
     *  Gain: '<S227>/Gain'
     *  SignalConversion generated from: '<S1>/VeSSDO_b_HVBatPerWUThermal'
     */
    (void)Rte_Write_VeSSDR_b_HVBatPerWUThermal_Value(rtb_UnitDelay3_n);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SSDR_OutputOvrd'
     */
    /* Outport: '<Root>/VeSSDR_b_HVBatRdyTimeOut' incorporates:
     *  Inport: '<S6>/VeSSDC_b_HVBatRdyTimeOut'
     *  SignalConversion generated from: '<S1>/VeSSDO_b_HVBatRdyTimeOut'
     */
    (void)Rte_Write_VeSSDR_b_HVBatRdyTimeOut_Value
        (SSDR_ac_DW.UnitDelay2_DSTATE_a);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SSDC_DtrmSysState'
     */
    /* Outport: '<Root>/VeSSDR_b_HV_PerWU_CabinPre' incorporates:
     *  Gain: '<S225>/Gain'
     *  SignalConversion generated from: '<S1>/VeSSDO_b_HV_PerWU_CabinPre'
     */
    (void)Rte_Write_VeSSDR_b_HV_PerWU_CabinPre_Value(rtb_UnitDelay_gw);

    /* Outport: '<Root>/VeSSDR_b_PrepareToShtdwn' incorporates:
     *  Gain: '<S10>/Gain'
     *  SignalConversion generated from: '<S1>/VeSSDO_b_PrepareToShtdwn'
     */
    (void)Rte_Write_VeSSDR_b_PrepareToShtdwn_Value(VeSSDI_b_PrepareToShtdwn);

    /* Switch: '<S156>/Switch5' incorporates:
     *  Gain: '<S228>/Gain'
     *  S-Function (sfix_bitop): '<S163>/FixPt Bitwise Operator1'
     *  Switch: '<S156>/Switch7'
     */
    if (rtb_UnitDelay3_e)
    {
        rtb_VeSSDR_K_Index_T1 |= (uint16)64;
    }

    /* End of Switch: '<S156>/Switch5' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSSDR_k_DiagPerWakeUp' incorporates:
     *  SignalConversion generated from: '<S1>/VeSSDO_k_DiagPerWakeUp'
     */
    (void)Rte_Write_VeSSDR_k_DiagPerWakeUp_Value(rtb_VeSSDR_K_Index_T1);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SSDR_OutputOvrd'
     */
    /* Outport: '<Root>/VeSSDR_t_WU_TimerValue' incorporates:
     *  Inport: '<S6>/VeSSDC_t_WU_TimerValue'
     *  SignalConversion generated from: '<S1>/VeSSDO_t_WU_TimerValue'
     */
    (void)Rte_Write_VeSSDR_t_WU_TimerValue_Value(rtb_VeSSDR_K_Index_T2);

    /* Outport: '<Root>/VeSSDR_b_DrvAllwdTPChck' incorporates:
     *  Inport: '<S6>/VeSSDC_b_DrvAllwdTPChck'
     *  SignalConversion generated from: '<S1>/VeSSDR_b_DrvAllwdTPChck'
     */
    (void)Rte_Write_VeSSDR_b_DrvAllwdTPChck_Value(rtb_UnitDelay3_o);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SSDC_DtrmSysState'
     */
    /* Outport: '<Root>/VeSSDR_b_DrvAllwd_FCEnbl' incorporates:
     *  Constant: '<S73>/Calib'
     *  Logic: '<S33>/Logical17'
     *  Logic: '<S33>/Logical18'
     *  SignalConversion generated from: '<S1>/VeSSDR_b_DrvAllwd_FCEnbl'
     */
    (void)Rte_Write_VeSSDR_b_DrvAllwd_FCEnbl_Value(((KeSSDR_b_DsblTPChck_FC) ||
        rtb_UnitDelay3_o) && (VeSSDC_b_DrvAllwdIn));

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SSDR_OutputOvrd'
     */
    /* Outport: '<Root>/VeSSDR_b_DsblHVBattChrg' incorporates:
     *  Inport: '<S6>/VeSSDC_b_DsblHVBattChrg'
     *  SignalConversion generated from: '<S1>/VeSSDR_b_DsblHVBattChrg'
     */
    (void)Rte_Write_VeSSDR_b_DsblHVBattChrg_Value(VeSSDC_b_DsblHVBattChrg);

    /* Outport: '<Root>/VeSSDR_b_DsblHVBattDischrg' incorporates:
     *  Inport: '<S6>/VeSSDC_b_DsblHVBattDischrg'
     *  SignalConversion generated from: '<S1>/VeSSDR_b_DsblHVBattDischrg'
     */
    (void)Rte_Write_VeSSDR_b_DsblHVBattDischrg_Value(VeSSDC_b_DsblHVBattDischrg);

    /* Outport: '<Root>/VeSSDR_b_EnblLIN' incorporates:
     *  Inport: '<S6>/VeSSDC_b_EnblLIN'
     *  SignalConversion generated from: '<S1>/VeSSDR_b_EnblLIN'
     */
    (void)Rte_Write_VeSSDR_b_EnblLIN_Value(rtb_AND_fx);

    /* Outport: '<Root>/VeSSDR_b_KeepHotCold_PCC' incorporates:
     *  Inport: '<S6>/VeSSDC_b_KeepHotCold_PCC'
     *  SignalConversion generated from: '<S1>/VeSSDR_b_KeepHotCold_PCC'
     */
    (void)Rte_Write_VeSSDR_b_KeepHotCold_PCC_Value(rtb_AND_c);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SSDC_DtrmSysState'
     */
    /* Switch: '<S381>/Switch1' incorporates:
     *  Constant: '<S11>/Constant1'
     *  Constant: '<S11>/Constant13'
     *  Constant: '<S367>/Constant'
     *  Constant: '<S368>/Constant'
     *  Constant: '<S369>/Constant'
     *  Constant: '<S370>/Constant'
     *  Constant: '<S371>/Constant'
     *  Constant: '<S372>/Constant'
     *  Gain: '<S225>/Gain'
     *  Gain: '<S226>/Gain'
     *  Gain: '<S227>/Gain'
     *  Logic: '<S11>/Logical1'
     *  Logic: '<S11>/Logical3'
     *  RelationalOperator: '<S11>/Comparison1'
     *  RelationalOperator: '<S11>/Comparison2'
     *  RelationalOperator: '<S11>/Comparison3'
     *  RelationalOperator: '<S11>/Comparison4'
     *  RelationalOperator: '<S11>/Comparison5'
     *  RelationalOperator: '<S11>/Comparison6'
     *  Switch: '<S373>/Switch1'
     *  Switch: '<S374>/Switch1'
     *  Switch: '<S375>/Switch1'
     *  Switch: '<S376>/Switch1'
     *  Switch: '<S377>/Switch1'
     *  Switch: '<S378>/Switch1'
     *  Switch: '<S379>/Switch1'
     *  Switch: '<S380>/Switch1'
     *  Switch: '<S382>/Switch1'
     *  Switch: '<S383>/Switch1'
     *  Switch: '<S384>/Switch1'
     *  Switch: '<S385>/Switch1'
     *  Switch: '<S386>/Switch1'
     *  Switch: '<S387>/Switch1'
     *  Switch: '<S388>/Switch1'
     */
    if (((((uint32)VeSSDI_e_PMM_PowerMode) == CePMDR_e_PowerMode_Crank) ||
            (((uint32)VeSSDI_e_PMM_PowerMode) == CePMDR_e_PowerMode_Run)) ||
            (((uint32)VeSSDI_e_PMM_PowerMode) == CePMDR_e_PowerMode_Run))
    {
        i_0 = 1;
    }
    else if (rtb_OR1_dn)
    {
        /* Switch: '<S373>/Switch1' incorporates:
         *  Constant: '<S11>/Constant2'
         */
        i_0 = 3;
    }
    else if (rtb_UnitDelay_gw)
    {
        /* Switch: '<S382>/Switch1' incorporates:
         *  Constant: '<S11>/Constant3'
         *  Switch: '<S373>/Switch1'
         */
        i_0 = 13;
    }
    else if (rtb_UnitDelay3_n)
    {
        /* Switch: '<S383>/Switch1' incorporates:
         *  Constant: '<S11>/Constant4'
         *  Switch: '<S373>/Switch1'
         *  Switch: '<S382>/Switch1'
         */
        i_0 = 14;
    }
    else if (rtb_AND_la)
    {
        /* Switch: '<S384>/Switch1' incorporates:
         *  Constant: '<S11>/Constant5'
         *  Switch: '<S373>/Switch1'
         *  Switch: '<S382>/Switch1'
         *  Switch: '<S383>/Switch1'
         */
        i_0 = 15;
    }
    else if (rtb_AND_c)
    {
        /* Switch: '<S385>/Switch1' incorporates:
         *  Constant: '<S11>/Constant6'
         *  Switch: '<S373>/Switch1'
         *  Switch: '<S382>/Switch1'
         *  Switch: '<S383>/Switch1'
         *  Switch: '<S384>/Switch1'
         */
        i_0 = 15;
    }
    else if (VeSSDI_b_ChargeNow)
    {
        /* Switch: '<S379>/Switch1' incorporates:
         *  Constant: '<S11>/Constant15'
         *  Switch: '<S373>/Switch1'
         *  Switch: '<S382>/Switch1'
         *  Switch: '<S383>/Switch1'
         *  Switch: '<S384>/Switch1'
         *  Switch: '<S385>/Switch1'
         */
        i_0 = 9;
    }
    else if (rtb_Merge3)
    {
        /* Switch: '<S386>/Switch1' incorporates:
         *  Constant: '<S11>/Constant7'
         *  Switch: '<S373>/Switch1'
         *  Switch: '<S379>/Switch1'
         *  Switch: '<S382>/Switch1'
         *  Switch: '<S383>/Switch1'
         *  Switch: '<S384>/Switch1'
         *  Switch: '<S385>/Switch1'
         */
        i_0 = 10;
    }
    else if (((uint32)rtb_Switch1_e) == CeSSDR_e_PlgIn_HVBattChrg)
    {
        /* Switch: '<S387>/Switch1' incorporates:
         *  Constant: '<S11>/Constant8'
         *  Switch: '<S373>/Switch1'
         *  Switch: '<S379>/Switch1'
         *  Switch: '<S382>/Switch1'
         *  Switch: '<S383>/Switch1'
         *  Switch: '<S384>/Switch1'
         *  Switch: '<S385>/Switch1'
         *  Switch: '<S386>/Switch1'
         */
        i_0 = 18;
    }
    else if (rtb_AND_df)
    {
        /* Switch: '<S388>/Switch1' incorporates:
         *  Constant: '<S11>/Constant9'
         *  Switch: '<S373>/Switch1'
         *  Switch: '<S379>/Switch1'
         *  Switch: '<S382>/Switch1'
         *  Switch: '<S383>/Switch1'
         *  Switch: '<S384>/Switch1'
         *  Switch: '<S385>/Switch1'
         *  Switch: '<S386>/Switch1'
         *  Switch: '<S387>/Switch1'
         */
        i_0 = 2;
    }
    else if (((uint32)VeSSDI_e_FOTA_Install_Type) == CeCITR_e_FOTASchedule)
    {
        /* Switch: '<S374>/Switch1' incorporates:
         *  Constant: '<S11>/Constant10'
         *  Switch: '<S373>/Switch1'
         *  Switch: '<S379>/Switch1'
         *  Switch: '<S382>/Switch1'
         *  Switch: '<S383>/Switch1'
         *  Switch: '<S384>/Switch1'
         *  Switch: '<S385>/Switch1'
         *  Switch: '<S386>/Switch1'
         *  Switch: '<S387>/Switch1'
         *  Switch: '<S388>/Switch1'
         */
        i_0 = 26;
    }
    else if (((uint32)VeSSDI_e_FOTA_Install_Type) == CeCITR_e_FOTANow)
    {
        /* Switch: '<S375>/Switch1' incorporates:
         *  Constant: '<S11>/Constant11'
         *  Switch: '<S373>/Switch1'
         *  Switch: '<S374>/Switch1'
         *  Switch: '<S379>/Switch1'
         *  Switch: '<S382>/Switch1'
         *  Switch: '<S383>/Switch1'
         *  Switch: '<S384>/Switch1'
         *  Switch: '<S385>/Switch1'
         *  Switch: '<S386>/Switch1'
         *  Switch: '<S387>/Switch1'
         *  Switch: '<S388>/Switch1'
         */
        i_0 = 25;
    }
    else if (VeSSDI_b_HCP_LTP_FanAftRun_Rq)
    {
        /* Switch: '<S377>/Switch1' incorporates:
         *  Constant: '<S11>/Constant14'
         *  Switch: '<S373>/Switch1'
         *  Switch: '<S374>/Switch1'
         *  Switch: '<S375>/Switch1'
         *  Switch: '<S379>/Switch1'
         *  Switch: '<S382>/Switch1'
         *  Switch: '<S383>/Switch1'
         *  Switch: '<S384>/Switch1'
         *  Switch: '<S385>/Switch1'
         *  Switch: '<S386>/Switch1'
         *  Switch: '<S387>/Switch1'
         *  Switch: '<S388>/Switch1'
         */
        i_0 = 5;
    }
    else if (!VeSSDI_b_Secured_To_Shtdwn)
    {
        /* Switch: '<S378>/Switch1' incorporates:
         *  Constant: '<S11>/Constant16'
         *  Switch: '<S373>/Switch1'
         *  Switch: '<S374>/Switch1'
         *  Switch: '<S375>/Switch1'
         *  Switch: '<S377>/Switch1'
         *  Switch: '<S379>/Switch1'
         *  Switch: '<S382>/Switch1'
         *  Switch: '<S383>/Switch1'
         *  Switch: '<S384>/Switch1'
         *  Switch: '<S385>/Switch1'
         *  Switch: '<S386>/Switch1'
         *  Switch: '<S387>/Switch1'
         *  Switch: '<S388>/Switch1'
         */
        i_0 = 23;
    }
    else if (VeSSDI_b_Sch_Submit)
    {
        /* Switch: '<S380>/Switch1' incorporates:
         *  Constant: '<S11>/Constant17'
         *  Switch: '<S373>/Switch1'
         *  Switch: '<S374>/Switch1'
         *  Switch: '<S375>/Switch1'
         *  Switch: '<S377>/Switch1'
         *  Switch: '<S378>/Switch1'
         *  Switch: '<S379>/Switch1'
         *  Switch: '<S382>/Switch1'
         *  Switch: '<S383>/Switch1'
         *  Switch: '<S384>/Switch1'
         *  Switch: '<S385>/Switch1'
         *  Switch: '<S386>/Switch1'
         *  Switch: '<S387>/Switch1'
         *  Switch: '<S388>/Switch1'
         */
        i_0 = 12;
    }
    else if (VeSSDI_b_CntrlrPwrHold)
    {
        /* Switch: '<S376>/Switch1' incorporates:
         *  Constant: '<S11>/Constant12'
         *  Switch: '<S373>/Switch1'
         *  Switch: '<S374>/Switch1'
         *  Switch: '<S375>/Switch1'
         *  Switch: '<S377>/Switch1'
         *  Switch: '<S378>/Switch1'
         *  Switch: '<S379>/Switch1'
         *  Switch: '<S380>/Switch1'
         *  Switch: '<S382>/Switch1'
         *  Switch: '<S383>/Switch1'
         *  Switch: '<S384>/Switch1'
         *  Switch: '<S385>/Switch1'
         *  Switch: '<S386>/Switch1'
         *  Switch: '<S387>/Switch1'
         *  Switch: '<S388>/Switch1'
         */
        i_0 = 24;
    }
    else
    {
        i_0 = 0;
    }

    /* End of Switch: '<S381>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSSDR_e_WakeupRsn' incorporates:
     *  SignalConversion generated from: '<S1>/VeSSDR_k_WakeupRsn'
     */
    (void)Rte_Write_VeSSDR_e_WakeupRsn_Value((float32)i_0);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Output function */
FUNC(void, SSDR_CODE) SSDR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/SSDR_PwrOff'
     */
    /* Outport: '<Root>/NeSSDC_b_HVBatPerWU12VChrg_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeSSDC_b_HVBatPerWU12VChrg'
     */
    (void)Rte_Write_NeSSDC_b_HVBatPerWU12VChrg_NeSSDC_b_HVBatPerWU12VChrg
        (SSDR_ac_DW.NeSSDC_b_HVBatPerWU12VChrg);

    /* Outport: '<Root>/NeSSDC_b_HVBatPerWUCabinPre_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeSSDC_b_HVBatPerWUCabinPre'
     */
    (void)Rte_Write_NeSSDC_b_HVBatPerWUCabinPre_NeSSDC_b_HVBatPerWUCabinPre
        (SSDR_ac_DW.NeSSDC_b_HVBatPerWUCabinPre);

    /* Outport: '<Root>/NeSSDC_b_HVBatPerWUSchChrg_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeSSDC_b_HVBatPerWUSchChrg'
     */
    (void)Rte_Write_NeSSDC_b_HVBatPerWUSchChrg_NeSSDC_b_HVBatPerWUSchChrg
        (SSDR_ac_DW.NeSSDC_b_HVBatPerWUSchChrg);

    /* Outport: '<Root>/NeSSDC_b_HVBatPerWUThermal_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeSSDC_b_HVBatPerWUThermal'
     */
    (void)Rte_Write_NeSSDC_b_HVBatPerWUThermal_NeSSDC_b_HVBatPerWUThermal
        (SSDR_ac_DW.NeSSDC_b_HVBatPerWUThermal);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, SSDR_CODE) SSDR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/SSDR_PwrOn'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/DSM_Init'
     */
    /* DataStoreWrite: '<S555>/NeSSDC_b_HVBatPerWUThermal' incorporates:
     *  Inport: '<Root>/NeSSDC_b_HVBatPerWUThermal_PM_In'
     */
    (void)Rte_Read_NeSSDC_b_HVBatPerWUThermal_Rx_NeSSDC_b_HVBatPerWUThermal
        (&SSDR_ac_DW.NeSSDC_b_HVBatPerWUThermal);

    /* DataStoreWrite: '<S555>/NeSSDC_b_HVBatPerWUSchChrg' incorporates:
     *  Inport: '<Root>/NeSSDC_b_HVBatPerWUSchChrg_PM_In'
     */
    (void)Rte_Read_NeSSDC_b_HVBatPerWUSchChrg_Rx_NeSSDC_b_HVBatPerWUSchChrg
        (&SSDR_ac_DW.NeSSDC_b_HVBatPerWUSchChrg);

    /* DataStoreWrite: '<S555>/NeSSDC_b_HVBatPerWUCabinPre' incorporates:
     *  Inport: '<Root>/NeSSDC_b_HVBatPerWUCabinPre_PM_In'
     */
    (void)Rte_Read_NeSSDC_b_HVBatPerWUCabinPre_Rx_NeSSDC_b_HVBatPerWUCabinPre
        (&SSDR_ac_DW.NeSSDC_b_HVBatPerWUCabinPre);

    /* DataStoreWrite: '<S555>/NeSSDC_b_HVBatPerWU12VChrg' incorporates:
     *  Inport: '<Root>/NeSSDC_b_HVBatPerWU12VChrg_PM_In'
     */
    (void)Rte_Read_NeSSDC_b_HVBatPerWU12VChrg_Rx_NeSSDC_b_HVBatPerWU12VChrg
        (&SSDR_ac_DW.NeSSDC_b_HVBatPerWU12VChrg);

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/SSDC_Init'
     */
    /* SignalConversion generated from: '<S556>/LeSSDR_b_EnblHVSys' */
    SSDR_ac_B.OutportBufferForLeSSDR_b_EnblHVSys = false;

    /* SignalConversion generated from: '<S556>/LeSSDR_b_EnblMtrSys' */
    SSDR_ac_B.OutportBufferForLeSSDR_b_EnblMtrSys = false;

    /* SignalConversion generated from: '<S556>/LeSSDR_b_EnblPrplsnSys' */
    SSDR_ac_B.OutportBufferForLeSSDR_b_EnblPrplsnSys = false;

    /* SignalConversion generated from: '<S556>/LeSSDR_b_DrvAllwd' */
    SSDR_ac_B.OutportBufferForLeSSDR_b_DrvAllwd = false;

    /* SignalConversion generated from: '<S556>/LeSSDR_b_EnblThrmlSys' */
    SSDR_ac_B.OutportBufferForLeSSDR_b_EnblThrmlSys = false;

    /* SignalConversion generated from: '<S556>/LeSSDR_b_EnblInvrtrOpr' */
    SSDR_ac_B.OutportBufferForLeSSDR_b_EnblInvrtrOpr = false;

    /* SignalConversion generated from: '<S556>/LeSSDR_b_NeutAllwd' */
    SSDR_ac_B.OutportBufferForLeSSDR_b_NeutAllwd = false;

    /* SignalConversion generated from: '<S556>/LeSSDR_e_KeySts' incorporates:
     *  Constant: '<S557>/Constant'
     */
    SSDR_ac_B.OutportBufferForLeSSDR_e_KeySts = SSDR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S556>/LeSSDR_b_DsblHVBattChrg' */
    SSDR_ac_B.OutportBufferForLeSSDR_b_DsblHVBattChrg = false;

    /* SignalConversion generated from: '<S556>/LeSSDR_b_HVBatPerWUThermal' */
    SSDR_ac_B.OutportBufferForLeSSDR_b_HVBatPerWUTherm = false;

    /* SignalConversion generated from: '<S556>/LeSSDR_b_HVBatPerWU12VChrg' */
    SSDR_ac_B.OutportBufferForLeSSDR_b_HVBatPerWU12VCh = false;

    /* SignalConversion generated from: '<S556>/LeSSDR_b_HVBatPerWUCabPrec' */
    SSDR_ac_B.OutportBufferForLeSSDR_b_HVBatPerWUCabPr = false;

    /* SignalConversion generated from: '<S556>/LeSSDR_t_WU_TimerValue' */
    SSDR_ac_B.OutportBufferForLeSSDR_t_WU_TimerValue = 0U;

    /* SignalConversion generated from: '<S556>/LeSSDR_b_HVBatRdyTimeOut' */
    SSDR_ac_B.OutportBufferForLeSSDR_b_HVBatRdyTimeOut = false;

    /* SignalConversion generated from: '<S556>/LeSSDR_b_DsblPrplsnSysArb_Out' */
    SSDR_ac_B.OutportBufferForLeSSDR_b_DsblPrplsnSysAr = false;

    /* SignalConversion generated from: '<S556>/LeSSDR_b_CabPrecDny_BattCond' */
    SSDR_ac_B.OutportBufferForLeSSDR_b_CabPrecDny_Batt = false;

    /* SignalConversion generated from: '<S556>/LeSSDR_k_DiagPerWakeUp' */
    SSDR_ac_B.OutportBufferForLeSSDR_k_DiagPerWakeUp = 0U;

    /* SignalConversion generated from: '<S556>/LeSSDR_b_DrvNotAllwdTPChck' */
    SSDR_ac_B.OutportBufferForLeSSDR_b_DrvNotAllwdTPCh = false;

    /* SignalConversion generated from: '<S556>/LeSSDR_b_DrvNotAllwdTPChckKeepPlugIn' */
    SSDR_ac_B.OutportBufferForLeSSDR_b_DrvNotAllwdTP_d = false;

    /* SignalConversion generated from: '<S556>/LeSSDR_b_PrepareToShtdwn' */
    SSDR_ac_B.OutportBufferForLeSSDR_b_PrepareToShtdwn = false;

    /* SignalConversion generated from: '<S556>/LeSSDR_b_FOTAOvrrdEnblHVSys' */
    SSDR_ac_B.OutportBufferForLeSSDR_b_FOTAOvrrdEnblHV = false;

    /* SignalConversion generated from: '<S556>/LeSSDR_b_DrvAllwd_FCEnbl' */
    SSDR_ac_B.OutportBufferForLeSSDR_b_DrvAllwd_FCEnbl = false;

    /* SignalConversion generated from: '<S556>/LeSSDR_e_WakeupRsn' */
    SSDR_ac_B.OutportBufferForLeSSDR_e_WakeupRsn = 0.0F;

    /* SignalConversion generated from: '<S556>/LeSSDR_b_DrvAllwdTPChck' */
    SSDR_ac_B.OutportBufferForLeSSDR_b_DrvAllwdTPChck = false;

    /* SignalConversion generated from: '<S556>/LeSSDR_b_EnblLIN' */
    SSDR_ac_B.OutportBufferForLeSSDR_b_EnblLIN = false;

    /* SignalConversion generated from: '<S556>/LeSSDR_b_KeepHotCold_PCC' */
    SSDR_ac_B.OutportBufferForLeSSDR_b_KeepHotCold_PCC = false;

    /* SignalConversion generated from: '<S556>/LeSSDR_b_DsblHVBattDischrg' */
    SSDR_ac_B.OutportBufferForLeSSDR_b_DsblHVBattDisch = false;

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VeSSDR_b_CabPrecDny_BattCond' incorporates:
     *  SignalConversion generated from: '<S3>/LeSSDR_b_CabPrecDny_BattCond'
     */
    (void)Rte_Write_VeSSDR_b_CabPrecDny_BattCond_Value
        (SSDR_ac_B.OutportBufferForLeSSDR_b_CabPrecDny_Batt);

    /* Outport: '<Root>/VeSSDR_b_DrvAllwd' incorporates:
     *  SignalConversion generated from: '<S3>/LeSSDR_b_DrvAllwd'
     */
    (void)Rte_Write_VeSSDR_b_DrvAllwd_Value
        (SSDR_ac_B.OutportBufferForLeSSDR_b_DrvAllwd);

    /* Outport: '<Root>/VeSSDR_b_DrvAllwdTPChck' incorporates:
     *  SignalConversion generated from: '<S3>/LeSSDR_b_DrvAllwdTPChck'
     */
    (void)Rte_Write_VeSSDR_b_DrvAllwdTPChck_Value
        (SSDR_ac_B.OutportBufferForLeSSDR_b_DrvAllwdTPChck);

    /* Outport: '<Root>/VeSSDR_b_DrvAllwd_FCEnbl' incorporates:
     *  SignalConversion generated from: '<S3>/LeSSDR_b_DrvAllwd_FCEnbl'
     */
    (void)Rte_Write_VeSSDR_b_DrvAllwd_FCEnbl_Value
        (SSDR_ac_B.OutportBufferForLeSSDR_b_DrvAllwd_FCEnbl);

    /* Outport: '<Root>/VeSSDR_b_DrvNotAllwdTPChck' incorporates:
     *  SignalConversion generated from: '<S3>/LeSSDR_b_DrvNotAllwdTPChck'
     */
    (void)Rte_Write_VeSSDR_b_DrvNotAllwdTPChck_Value
        (SSDR_ac_B.OutportBufferForLeSSDR_b_DrvNotAllwdTPCh);

    /* Outport: '<Root>/VeSSDR_b_DrvNotAllwdTPChckKeepPlugIn' incorporates:
     *  SignalConversion generated from: '<S3>/LeSSDR_b_DrvNotAllwdTPChckKeepPlugIn'
     */
    (void)Rte_Write_VeSSDR_b_DrvNotAllwdTPChckKeepPlugIn_Value
        (SSDR_ac_B.OutportBufferForLeSSDR_b_DrvNotAllwdTP_d);

    /* Outport: '<Root>/VeSSDR_b_DsblHVBattChrg' incorporates:
     *  SignalConversion generated from: '<S3>/LeSSDR_b_DsblHVBattChrg'
     */
    (void)Rte_Write_VeSSDR_b_DsblHVBattChrg_Value
        (SSDR_ac_B.OutportBufferForLeSSDR_b_DsblHVBattChrg);

    /* Outport: '<Root>/VeSSDR_b_DsblHVBattDischrg' incorporates:
     *  SignalConversion generated from: '<S3>/LeSSDR_b_DsblHVBattDischrg'
     */
    (void)Rte_Write_VeSSDR_b_DsblHVBattDischrg_Value
        (SSDR_ac_B.OutportBufferForLeSSDR_b_DsblHVBattDisch);

    /* Outport: '<Root>/VeSSDR_b_DsblPrplsnSysArb_Out' incorporates:
     *  SignalConversion generated from: '<S3>/LeSSDR_b_DsblPrplsnSysArb_Out'
     */
    (void)Rte_Write_VeSSDR_b_DsblPrplsnSysArb_Out_Value
        (SSDR_ac_B.OutportBufferForLeSSDR_b_DsblPrplsnSysAr);

    /* Outport: '<Root>/VeSSDR_b_EnblHVSys' incorporates:
     *  SignalConversion generated from: '<S3>/LeSSDR_b_EnblHVSys'
     */
    (void)Rte_Write_VeSSDR_b_EnblHVSys_Value
        (SSDR_ac_B.OutportBufferForLeSSDR_b_EnblHVSys);

    /* Outport: '<Root>/VeSSDR_b_EnblInvrtrOpr' incorporates:
     *  SignalConversion generated from: '<S3>/LeSSDR_b_EnblInvrtrOpr'
     */
    (void)Rte_Write_VeSSDR_b_EnblInvrtrOpr_Value
        (SSDR_ac_B.OutportBufferForLeSSDR_b_EnblInvrtrOpr);

    /* Outport: '<Root>/VeSSDR_b_EnblLIN' incorporates:
     *  SignalConversion generated from: '<S3>/LeSSDR_b_EnblLIN'
     */
    (void)Rte_Write_VeSSDR_b_EnblLIN_Value
        (SSDR_ac_B.OutportBufferForLeSSDR_b_EnblLIN);

    /* Outport: '<Root>/VeSSDR_b_EnblMtrSys' incorporates:
     *  SignalConversion generated from: '<S3>/LeSSDR_b_EnblMtrSys'
     */
    (void)Rte_Write_VeSSDR_b_EnblMtrSys_Value
        (SSDR_ac_B.OutportBufferForLeSSDR_b_EnblMtrSys);

    /* Outport: '<Root>/VeSSDR_b_EnblPrplsnSys' incorporates:
     *  SignalConversion generated from: '<S3>/LeSSDR_b_EnblPrplsnSys'
     */
    (void)Rte_Write_VeSSDR_b_EnblPrplsnSys_Value
        (SSDR_ac_B.OutportBufferForLeSSDR_b_EnblPrplsnSys);

    /* Outport: '<Root>/VeSSDR_b_EnblThrmlSys' incorporates:
     *  SignalConversion generated from: '<S3>/LeSSDR_b_EnblThrmlSys'
     */
    (void)Rte_Write_VeSSDR_b_EnblThrmlSys_Value
        (SSDR_ac_B.OutportBufferForLeSSDR_b_EnblThrmlSys);

    /* Outport: '<Root>/VeSSDR_b_FOTAOvrrdEnblHVSys' incorporates:
     *  SignalConversion generated from: '<S3>/LeSSDR_b_FOTAOvrrdEnblHVSys'
     */
    (void)Rte_Write_VeSSDR_b_FOTAOvrrdEnblHVSys_Value
        (SSDR_ac_B.OutportBufferForLeSSDR_b_FOTAOvrrdEnblHV);

    /* Outport: '<Root>/VeSSDR_b_HVBatPerWU12VChrg' incorporates:
     *  SignalConversion generated from: '<S3>/LeSSDR_b_HVBatPerWU12VChrg'
     */
    (void)Rte_Write_VeSSDR_b_HVBatPerWU12VChrg_Value
        (SSDR_ac_B.OutportBufferForLeSSDR_b_HVBatPerWU12VCh);

    /* Outport: '<Root>/VeSSDR_b_HV_PerWU_CabinPre' incorporates:
     *  SignalConversion generated from: '<S3>/LeSSDR_b_HVBatPerWUCabPrec'
     */
    (void)Rte_Write_VeSSDR_b_HV_PerWU_CabinPre_Value
        (SSDR_ac_B.OutportBufferForLeSSDR_b_HVBatPerWUCabPr);

    /* Outport: '<Root>/VeSSDR_b_HVBatPerWUThermal' incorporates:
     *  SignalConversion generated from: '<S3>/LeSSDR_b_HVBatPerWUThermal'
     */
    (void)Rte_Write_VeSSDR_b_HVBatPerWUThermal_Value
        (SSDR_ac_B.OutportBufferForLeSSDR_b_HVBatPerWUTherm);

    /* Outport: '<Root>/VeSSDR_b_HVBatRdyTimeOut' incorporates:
     *  SignalConversion generated from: '<S3>/LeSSDR_b_HVBatRdyTimeOut'
     */
    (void)Rte_Write_VeSSDR_b_HVBatRdyTimeOut_Value
        (SSDR_ac_B.OutportBufferForLeSSDR_b_HVBatRdyTimeOut);

    /* Outport: '<Root>/VeSSDR_b_KeepHotCold_PCC' incorporates:
     *  SignalConversion generated from: '<S3>/LeSSDR_b_KeepHotCold_PCC'
     */
    (void)Rte_Write_VeSSDR_b_KeepHotCold_PCC_Value
        (SSDR_ac_B.OutportBufferForLeSSDR_b_KeepHotCold_PCC);

    /* Outport: '<Root>/VeSSDR_b_NeutAllwd' incorporates:
     *  SignalConversion generated from: '<S3>/LeSSDR_b_NeutAllwd'
     */
    (void)Rte_Write_VeSSDR_b_NeutAllwd_Value
        (SSDR_ac_B.OutportBufferForLeSSDR_b_NeutAllwd);

    /* Outport: '<Root>/VeSSDR_b_PrepareToShtdwn' incorporates:
     *  SignalConversion generated from: '<S3>/LeSSDR_b_PrepareToShtdwn'
     */
    (void)Rte_Write_VeSSDR_b_PrepareToShtdwn_Value
        (SSDR_ac_B.OutportBufferForLeSSDR_b_PrepareToShtdwn);

    /* Outport: '<Root>/VeSSDR_e_KeySts' incorporates:
     *  SignalConversion generated from: '<S3>/LeSSDR_e_KeySts'
     *  SignalConversion generated from: '<S556>/LeSSDR_e_KeySts'
     */
    (void)Rte_Write_VeSSDR_e_KeySts_Value
        (SSDR_ac_B.OutportBufferForLeSSDR_e_KeySts);

    /* Outport: '<Root>/VeSSDR_e_WakeupRsn' incorporates:
     *  SignalConversion generated from: '<S3>/LeSSDR_e_WakeupRsn'
     */
    (void)Rte_Write_VeSSDR_e_WakeupRsn_Value
        (SSDR_ac_B.OutportBufferForLeSSDR_e_WakeupRsn);

    /* Outport: '<Root>/VeSSDR_k_DiagPerWakeUp' incorporates:
     *  SignalConversion generated from: '<S3>/LeSSDR_k_DiagPerWakeUp'
     */
    (void)Rte_Write_VeSSDR_k_DiagPerWakeUp_Value
        (SSDR_ac_B.OutportBufferForLeSSDR_k_DiagPerWakeUp);

    /* Outport: '<Root>/VeSSDR_t_WU_TimerValue' incorporates:
     *  SignalConversion generated from: '<S3>/LeSSDR_t_WU_TimerValue'
     */
    (void)Rte_Write_VeSSDR_t_WU_TimerValue_Value
        (SSDR_ac_B.OutportBufferForLeSSDR_t_WU_TimerValue);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, SSDR_CODE) SSDR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/SSDR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/SSDC_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S556>/LeSSDR_e_KeySts' incorporates:
     *  Constant: '<S557>/Constant'
     */
    SSDR_ac_B.OutportBufferForLeSSDR_e_KeySts = SSDR_ac_ConstB.Constant;

    /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeSSDR_e_KeySts' incorporates:
     *  Merge: '<Root>/Merge_4'
     */
    (void)Rte_Write_VeSSDR_e_KeySts_Value(CeSSDR_e_KeyOff);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
