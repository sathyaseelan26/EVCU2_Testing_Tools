/*
 * File: PLTR_ac.c
 *
 * Code generated for Simulink model 'PLTR_ac'.
 *
 * Model version                  : 9.416
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 18:00:08 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PLTR_ac.h"
#include "look1_iflf_binlca_16a.h"
#include "look2_iflf_binlca_16a.h"

/* Named constants for Chart: '<S526>/RTCSync_GPSCheck' */
#define PLTR_ac_IN_INIT                ((uint8)1U)
#define PLTR_ac_IN_RUNNING             ((uint8)2U)

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_PLTR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(boolean, PLTR_VAR_INIT) HePLTR_b_EnblGen1RTC = 0;/* Referenced by:
                                                                      * '<S512>/Calib'
                                                                      * '<S577>/Calib'
                                                                      */
static volatile CONST(boolean, PLTR_VAR_INIT) HePLTR_b_SpeedUnitSwtchEnabl = 0;/* Referenced by: '<S318>/Calib' */
static volatile CONST(float32, PLTR_VAR_INIT) HePLTR_t_MedTEB = 0.01F;/* Referenced by:
                                                                      * '<S319>/Calib'
                                                                      * '<S288>/Calib'
                                                                      */
static volatile CONST(boolean, PLTR_VAR_INIT) KaPLTR_b_Prmry_ManualMode_Map[2] =
{
    0, 1
} ;                                    /* Referenced by: '<S657>/Calib' */

static volatile CONST(TePLTR_e_ACCSystemSts, PLTR_VAR_INIT)
    KaPLTR_e_ACCSystemSts_Map[16] =
{
    CePLTR_e_Off, CePLTR_e_Enabled, CePLTR_e_Engaged, CePLTR_e_Engaged_BrakeOnly,
    CePLTR_e_Cancel, CePLTR_e_NCC_Enabled, CePLTR_e_NCC_Engaged,
    CePLTR_e_NCC_Cancel, CePLTR_e_HAS_BSoC, CePLTR_e_RRCC_Enabled_No_Set_Speed,
    CePLTR_e_RRCC_Enabled_With_Set_Speed, CePLTR_e_RRCC_Engaged, CePLTR_e_Off,
    CePLTR_e_Off, CePLTR_e_Off, CePLTR_e_ACCSystemSts_SNA
};                                     /* Referenced by: '<S684>/Calib' */

static volatile CONST(TeTRGR_e_AutoPosCorrMd, PLTR_VAR_INIT)
    KaPLTR_e_AutoPosCorrMd_Map[4] =
{
    CeTRGR_e_AutoPosCorrMd_Off, CeTRGR_e_AutoPosCorrMd_On,
    CeTRGR_e_AutoPosCorrMd_Pending, CeTRGR_e_AutoPosCorrMd_SNA
};                                     /* Referenced by:
                                        * '<S707>/Calib'
                                        * '<S715>/Calib'
                                        */

static volatile CONST(TePLTR_e_DRV_SEATBELT, PLTR_VAR_INIT)
    KaPLTR_e_DriverSeatBeltSts_Map[4] =
{
    CePLTR_e_DRV_SEATBELT_OK, CePLTR_e_DRV_SEATBELT_NOK, CePLTR_e_SEATBELT_FAIL,
    CePLTR_e_SEATBELT_SNA
};                                     /* Referenced by: '<S639>/Calib' */

static volatile CONST(TePLTR_e_EPBHoldSts, PLTR_VAR_INIT)
    KaPLTR_e_EPBHoldSts_Map[16] =
{
    CePLTR_e_EPBHoldSts_REL, CePLTR_e_EPBHoldSts_APPLIED,
    CePLTR_e_EPBHoldSts_DynamBrkESC, CePLTR_e_EPBHoldSts_DynamBrkEPB,
    CePLTR_e_EPBHoldSts_Emrgnc_Brk, CePLTR_e_EPBHoldSts_APPLYING,
    CePLTR_e_EPBHoldSts_MaintMd, CePLTR_e_EPBHoldSts_AssmblyChk,
    CePLTR_e_EPBHoldSts_InspMd, CePLTR_e_EPBHoldSts_ReClamping,
    CePLTR_e_EPBHoldSts_Adjust_Md, CePLTR_e_EPBHoldSts_RELEASING,
    CePLTR_e_EPBHoldSts_Flt_EPBRel, CePLTR_e_EPBHoldSts_Flt_EPBAppl,
    CePLTR_e_EPBHoldSts_Flt_Prsnt, CePLTR_e_EPBHoldSts_SNA
};                                     /* Referenced by: '<S693>/Calib' */

static volatile CONST(TeTRGR_e_ERS_SW, PLTR_VAR_INIT) KaPLTR_e_ERS_SW_Map[8] =
{
    CeTRGR_e_ERSBttn_NotActvtd, CeTRGR_e_ERSBttn_Plus, CeTRGR_e_ERSBttn_Minus,
    CeTRGR_e_ERS_PLHD, CeTRGR_e_ERS_MIHD, CeTRGR_e_ERSBttn_NotDef,
    CeTRGR_e_ERSBttn_EXIT, CeTRGR_e_ERSBttn_SNA
};                                     /* Referenced by: '<S695>/Calib' */

static volatile CONST(TePLTR_e_InvOprStat, PLTR_VAR_INIT)
    KaPLTR_e_InvrOprStatus_Map[10] =
{
    CePLTR_e_NoPlgIn_Tools, CePLTR_e_PlgIn_NoOpr, CePLTR_e_PlgIn_InvOpr_Tools,
    CePLTR_e_NoPlgIn_Tools, CePLTR_e_NoPlgIn_Tools, CePLTR_e_NoPlgIn_Tools,
    CePLTR_e_NoPlgIn_Tools, CePLTR_e_NoPlgIn_Tools, CePLTR_e_NoPlgIn_Tools,
    CePLTR_e_NoPlgIn_Tools
};                                     /* Referenced by: '<S700>/Calib' */

static volatile CONST(TeTRGR_e_TransRangeState, PLTR_VAR_INIT)
    KaPLTR_e_Prmry_PRND_ValidatePstn_Map[256] =
{
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_TransRangeDrive, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_TransRangeNeutral, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_TransRangePark, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_TransRangeReverse, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_TransRangeIllegal
};                                     /* Referenced by: '<S709>/Calib' */

static volatile CONST(TeTRGR_e_TransRangeState, PLTR_VAR_INIT)
    KaPLTR_e_Prmry_ShiftLeverPosition_Map[256] =
{
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_TransRangeDrive, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_TransRangeNeutral, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_TransRangePark, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_TransRangeReverse, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_TransRangeIllegal
};                                     /* Referenced by: '<S711>/Calib' */

static volatile CONST(TeTRGR_e_TransRangeState, PLTR_VAR_INIT)
    KaPLTR_e_Prmry_TransShiftPstn_Map[256] =
{
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_TransRangeDrive, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_TransRangeNeutral, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_TransRangePark, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_TransRangeReverse, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_TransRangeIllegal
};                                     /* Referenced by: '<S713>/Calib' */

static volatile CONST(TeTRGR_e_TransRangeState, PLTR_VAR_INIT)
    KaPLTR_e_Scndry_PRND_ValidatePstn_Map[256] =
{
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_TransRangeDrive, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_TransRangeNeutral, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_TransRangePark, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_TransRangeReverse, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_TransRangeIllegal
};                                     /* Referenced by: '<S717>/Calib' */

static volatile CONST(TeTRGR_e_TransRangeState, PLTR_VAR_INIT)
    KaPLTR_e_Scndry_ShiftLeverPosition_Map[256] =
{
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_TransRangeDrive, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_TransRangeNeutral, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_TransRangePark, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_TransRangeReverse, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_TransRangeIllegal
};                                     /* Referenced by: '<S719>/Calib' */

static volatile CONST(TeTRGR_e_TransRangeState, PLTR_VAR_INIT)
    KaPLTR_e_Scndry_TransShiftPstn_Map[256] =
{
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_TransRangeDrive, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_TransRangeNeutral, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_TransRangePark, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_TransRangeReverse, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_NoSelectionAvailable,
    CeTRGR_e_NoSelectionAvailable, CeTRGR_e_TransRangeIllegal
};                                     /* Referenced by: '<S721>/Calib' */

static volatile CONST(TePLTR_e_ShipingMode, PLTR_VAR_INIT)
    KaPLTR_e_ShipingMode_Map[4] =
{
    CePLTR_e_ShipingMode_CUST_MD, CePLTR_e_ShipingMode_ABBRV_MD,
    CePLTR_e_ShipingMode_SHIP_MD, CePLTR_e_ShipingMode_NOT_PROG
};                                     /* Referenced by: '<S724>/Calib' */

static volatile CONST(TePLTR_e_Towing_MD_RQ, PLTR_VAR_INIT)
    KaPLTR_e_TowHaulMode_Map[4] =
{
    CePLTR_e_Towing_MD_RQ_OFF, CePLTR_e_Towing_MD_RQ_ON,
    CePLTR_e_Towing_MD_RQ_Undefined, CePLTR_e_Towing_MD_RQ_SNA
};                                     /* Referenced by: '<S726>/Calib' */

static volatile CONST(TePLTR_e_V2GOprStat, PLTR_VAR_INIT)
    KaPLTR_e_V2GOprStat_Map[10] =
{
    CePLTR_e_NoPlgIn, CePLTR_e_PlgIn_NOOP_V2G, CePLTR_e_PlgIn_V2GOpr,
    CePLTR_e_NoPlgIn, CePLTR_e_NoPlgIn, CePLTR_e_NoPlgIn, CePLTR_e_NoPlgIn,
    CePLTR_e_NoPlgIn, CePLTR_e_NoPlgIn, CePLTR_e_NoPlgIn
};                                     /* Referenced by: '<S728>/Calib' */

static volatile CONST(float32, PLTR_VAR_INIT) KePLTR_Cf_AccelerometerScale =
    1.0F;                              /* Referenced by: '<S323>/Calib' */
static volatile CONST(float32, PLTR_VAR_INIT) KePLTR_Cf_AccelerometerYScale =
    1.0F;                              /* Referenced by: '<S324>/Calib' */
static volatile CONST(float32, PLTR_VAR_INIT) KePLTR_Cf_AmbientAirPrsConv =
    10.0F;                             /* Referenced by:
                                        * '<S393>/Calib'
                                        * '<S429>/Calib'
                                        */
static volatile CONST(float32, PLTR_VAR_INIT) KePLTR_Cf_LatAccelScaleFctr = 1.0F;/* Referenced by: '<S325>/Calib' */
static volatile CONST(float32, PLTR_VAR_INIT) KePLTR_Cf_LatAccelScaleFctr1 =
    -1.0F;                             /* Referenced by: '<S326>/Calib' */
static volatile CONST(float32, PLTR_VAR_INIT) KePLTR_Cf_LongAccelScaleFctr =
    1.0F;                              /* Referenced by: '<S327>/Calib' */
static volatile CONST(float32, PLTR_VAR_INIT) KePLTR_Cf_LongAccelScaleFctr1 =
    -1.0F;                             /* Referenced by: '<S328>/Calib' */
static volatile CONST(uint16, PLTR_VAR_INIT) KePLTR_Cnt_HCPOffTimeIn = 3U;/* Referenced by: '<S582>/Calib' */
static volatile CONST(uint16, PLTR_VAR_INIT)
    KePLTR_Cnt_IgnKeyOffTmrPerfTooFast_FailLim = 1U;/* Referenced by: '<S401>/Calib' */
static volatile CONST(uint16, PLTR_VAR_INIT)
    KePLTR_Cnt_IgnKeyOffTmrPerfTooFast_SmplLim = 1U;/* Referenced by: '<S402>/Calib' */
static volatile CONST(float32, PLTR_VAR_INIT) KePLTR_Pct_AccelPedalPosLimit =
    0.0F;                              /* Referenced by: '<S554>/Calib' */
static volatile CONST(float32, PLTR_VAR_INIT) KePLTR_Pct_ProxiSpdomtrTol_Init =
    0.0F;                              /* Referenced by: '<S463>/Calib' */
static volatile CONST(float32, PLTR_VAR_INIT) KePLTR_W_Inverter_PowerDraw_Init =
    100.0F;                            /* Referenced by: '<S464>/Calib' */
static volatile CONST(float32, PLTR_VAR_INIT) KePLTR_a_LatAccelFsftVal = 0.0F;
                           /* Referenced by: '<S4>/FsftPLTR_a_TransAccelChrt' */
static volatile CONST(float32, PLTR_VAR_INIT) KePLTR_a_LatAccelOffsetFsftVal =
    0.0F;            /* Referenced by: '<S5>/FsftPLTR_a_TransAccelOffsetChrt' */
static volatile CONST(float32, PLTR_VAR_INIT) KePLTR_a_LatAccel_ORC_Init = 0.0F;/* Referenced by: '<S465>/Calib' */
static volatile CONST(float32, PLTR_VAR_INIT) KePLTR_a_LongAccelFsftVal = 0.0F;
                            /* Referenced by: '<S2>/FsftPLTR_a_LongAccelChrt' */
static volatile CONST(float32, PLTR_VAR_INIT) KePLTR_a_LongAccelOffsetFsftVal =
    0.0F;             /* Referenced by: '<S3>/FsftPLTR_a_LongAccelOffsetChrt' */
static volatile CONST(float32, PLTR_VAR_INIT) KePLTR_a_LongAccel_FirstValue =
    0.0F;                              /* Referenced by: '<S329>/Calib' */
static volatile CONST(float32, PLTR_VAR_INIT) KePLTR_a_LongAccel_ORC_Init = 0.0F;/* Referenced by: '<S466>/Calib' */
static volatile CONST(boolean, PLTR_VAR_INIT) KePLTR_b_ACC_OnFA_Init = 0;/* Referenced by: '<S467>/Calib' */
static volatile CONST(boolean, PLTR_VAR_INIT) KePLTR_b_ACC_On_Init = 0;/* Referenced by: '<S468>/Calib' */
static volatile CONST(boolean, PLTR_VAR_INIT) KePLTR_b_CC_Type_Init = 0;/* Referenced by: '<S469>/Calib' */
static volatile CONST(boolean, PLTR_VAR_INIT) KePLTR_b_CrsCntrlActv = 0;/* Referenced by: '<S470>/Calib' */
static volatile CONST(boolean, PLTR_VAR_INIT) KePLTR_b_Dflt_ManMd = 0;
                   /* Referenced by: '<S123>/PokePLTR_b_Prmry_ManualModeChrt' */
static volatile CONST(boolean, PLTR_VAR_INIT) KePLTR_b_DriverDetected_Init = 0;/* Referenced by: '<S471>/Calib' */
static volatile CONST(boolean, PLTR_VAR_INIT) KePLTR_b_DrvrSeatSnsr_Avail = 0;/* Referenced by: '<S377>/Calib' */
static volatile CONST(boolean, PLTR_VAR_INIT) KePLTR_b_Hill_Des_Stat_Prx_Init =
    0;                                 /* Referenced by: '<S472>/Calib' */
static volatile CONST(boolean, PLTR_VAR_INIT)
    KePLTR_b_IgnKeyOffTmrPerfTooFast_DiagEnbl = 1;/* Referenced by: '<S403>/Calib' */
static volatile CONST(boolean, PLTR_VAR_INIT)
    KePLTR_b_IgnKeyOffTmrPerfTooFast_LtchEnbl = 0;/* Referenced by: '<S404>/Calib' */
static volatile CONST(boolean, PLTR_VAR_INIT) KePLTR_b_InternalLightSts_Init = 0;/* Referenced by: '<S473>/Calib' */
static volatile CONST(boolean, PLTR_VAR_INIT) KePLTR_b_LHRDoorSts_Init = 0;/* Referenced by: '<S474>/Calib' */
static volatile CONST(boolean, PLTR_VAR_INIT)
    KePLTR_b_OvrrdBatteryWasDisconnected_Enbl = 0;/* Referenced by: '<S565>/Calib' */
static volatile CONST(boolean, PLTR_VAR_INIT)
    KePLTR_b_OvrrdBatteryWasDisconnected_Val = 0;/* Referenced by: '<S566>/Calib' */
static volatile CONST(boolean, PLTR_VAR_INIT) KePLTR_b_OvrrdECMVtdFreezeEnabl =
    1;                                 /* Referenced by: '<S567>/Calib' */
static volatile CONST(boolean, PLTR_VAR_INIT)
    KePLTR_b_OvrrdFuelLevelLowClsterEnabl = 0;/* Referenced by: '<S568>/Calib' */
static volatile CONST(boolean, PLTR_VAR_INIT)
    KePLTR_b_OvrrdFuelLevelLowClsterVal = 0;/* Referenced by: '<S569>/Calib' */
static volatile CONST(boolean, PLTR_VAR_INIT)
    KePLTR_b_OvrrdIPEETestMileageLimitEnabl = 0;/* Referenced by: '<S570>/Calib' */
static volatile CONST(boolean, PLTR_VAR_INIT) KePLTR_b_OvrrdInFieldModeEnabl = 0;/* Referenced by: '<S571>/Calib' */
static volatile CONST(boolean, PLTR_VAR_INIT) KePLTR_b_OvrrdInFieldModeVal = 0;/* Referenced by: '<S572>/Calib' */
static volatile CONST(boolean, PLTR_VAR_INIT) KePLTR_b_ParkBrakeSts_Init = 0;/* Referenced by: '<S475>/Calib' */
static volatile CONST(boolean, PLTR_VAR_INIT)
    KePLTR_b_Prmry_BODY_RFHUB1_Flt_Ovrd = 0;/* Referenced by: '<S359>/Calib' */
static volatile CONST(boolean, PLTR_VAR_INIT) KePLTR_b_Prmry_Flt_Ovrd = 0;/* Referenced by:
                                                                      * '<S360>/Calib'
                                                                      * '<S387>/Calib'
                                                                      */
static volatile CONST(boolean, PLTR_VAR_INIT)
    KePLTR_b_Prmry_RFHub_ForcePark_Dflt = 0;
              /* Referenced by: '<S125>/PokePLTR_b_Prmry_RFHub_ForceParkChrt' */
static volatile CONST(boolean, PLTR_VAR_INIT) KePLTR_b_Prmry_SC_Flt_Ovrd = 0;/* Referenced by: '<S361>/Calib' */
static volatile CONST(boolean, PLTR_VAR_INIT) KePLTR_b_ProxiCADM2_Init = 0;/* Referenced by: '<S476>/Calib' */
static volatile CONST(boolean, PLTR_VAR_INIT) KePLTR_b_ProxiCADM_Init = 0;/* Referenced by: '<S477>/Calib' */
static volatile CONST(boolean, PLTR_VAR_INIT) KePLTR_b_ProxiCC_Init = 0;/* Referenced by: '<S478>/Calib' */
static volatile CONST(boolean, PLTR_VAR_INIT) KePLTR_b_ProxiNavPrsnc_Init = 0;/* Referenced by: '<S479>/Calib' */
static volatile CONST(boolean, PLTR_VAR_INIT) KePLTR_b_ProxiSpdLimiter_Init = 0;/* Referenced by: '<S480>/Calib' */
static volatile CONST(boolean, PLTR_VAR_INIT)
    KePLTR_b_ProxiTrafficSignRcgntn_Init = 0;/* Referenced by: '<S481>/Calib' */
static volatile CONST(boolean, PLTR_VAR_INIT) KePLTR_b_PsngrDoorSts_Init = 0;/* Referenced by: '<S482>/Calib' */
static volatile CONST(boolean, PLTR_VAR_INIT) KePLTR_b_RHRDoorSts_Init = 0;/* Referenced by: '<S483>/Calib' */
static volatile CONST(boolean, PLTR_VAR_INIT) KePLTR_b_RHatchSts_Init = 0;/* Referenced by: '<S484>/Calib' */
static volatile CONST(boolean, PLTR_VAR_INIT) KePLTR_b_RRCCPROXI_Init = 0;/* Referenced by: '<S485>/Calib' */
static volatile CONST(boolean, PLTR_VAR_INIT) KePLTR_b_ResetLifetimeAfterReprog =
    1;                                 /* Referenced by: '<S621>/Calib' */
static volatile CONST(boolean, PLTR_VAR_INIT)
    KePLTR_b_Scndry_BODY_RFHUB1_Flt_Ovrd = 0;/* Referenced by: '<S362>/Calib' */
static volatile CONST(boolean, PLTR_VAR_INIT) KePLTR_b_Scndry_Flt_Ovrd = 0;/* Referenced by:
                                                                      * '<S363>/Calib'
                                                                      * '<S388>/Calib'
                                                                      */
static volatile CONST(boolean, PLTR_VAR_INIT)
    KePLTR_b_Scndry_RFHub_ForcePark_Dflt = 0;
             /* Referenced by: '<S137>/PokePLTR_b_Scndry_RFHub_ForceParkChrt' */
static volatile CONST(boolean, PLTR_VAR_INIT) KePLTR_b_Scndry_SC_Flt_Ovrd = 0;/* Referenced by: '<S364>/Calib' */
static volatile CONST(boolean, PLTR_VAR_INIT) KePLTR_b_ShiftIndStOvrrd = 0;/* Referenced by: '<S486>/Calib' */
static volatile CONST(boolean, PLTR_VAR_INIT) KePLTR_b_SpeedUnit_Init = 0;/* Referenced by: '<S487>/Calib' */
static volatile CONST(boolean, PLTR_VAR_INIT) KePLTR_b_VehcfgStOvrrd = 0;/* Referenced by: '<S488>/Calib' */
static volatile CONST(boolean, PLTR_VAR_INIT)
    KePLTR_b_Worksite_Inverter_Active_Init = 0;/* Referenced by: '<S489>/Calib' */
static volatile CONST(float32, PLTR_VAR_INIT) KePLTR_dphi_LwsSpeed_Init = 0.0F;/* Referenced by: '<S490>/Calib' */
static volatile CONST(float32, PLTR_VAR_INIT) KePLTR_dphi_YawRate_ORC_Init =
    0.0F;                              /* Referenced by: '<S491>/Calib' */
static volatile CONST(TePLTR_e_AEB_SystemSts, PLTR_VAR_INIT)
    KePLTR_e_AEBSystemSts_Init = CePLTR_e_FCW_Off;/* Referenced by: '<S492>/Calib' */
static volatile CONST(TePLTR_e_Command_15Sts, PLTR_VAR_INIT)
    KePLTR_e_Command_15Sts_Init = CePLTR_e_Not_Pressed;/* Referenced by: '<S493>/Calib' */
static volatile CONST(TePLTR_e_EPBHoldSts, PLTR_VAR_INIT) KePLTR_e_EPBHoldStDflt
    = CePLTR_e_EPBHoldSts_SNA;
                           /* Referenced by: '<S58>/FsftPLTR_e_EPBHoldStChrt' */
static volatile CONST(TePLTR_e_HAS_TelltaleSts, PLTR_VAR_INIT)
    KePLTR_e_HAS_TelltaleSts_Init = CePLTR_e_HAS_TelltaleSts_OFF;/* Referenced by: '<S494>/Calib' */
static volatile CONST(TePLTR_e_LwsAngleType, PLTR_VAR_INIT)
    KePLTR_e_LwsAngleType_Init = CePLTR_e_LwsAngleType_SNA;/* Referenced by: '<S495>/Calib' */
static volatile CONST(TePLTR_e_ECMVtdFreeze, PLTR_VAR_INIT)
    KePLTR_e_OvrrdECMVtdFreezeVal = CePLTR_e_NoReset;/* Referenced by: '<S573>/Calib' */
static volatile CONST(TePLTR_e_Autonomy_Lvl, PLTR_VAR_INIT)
    KePLTR_e_Proxi_Autonomy_Lvl_Init = CePLTR_e_None_Level1;/* Referenced by: '<S496>/Calib' */
static volatile CONST(TePLTR_e_Cruise_Control_Logic, PLTR_VAR_INIT)
    KePLTR_e_Proxi_CC_Logic_Init = CePLTR_e_Logic1;/* Referenced by: '<S497>/Calib' */
static volatile CONST(TePLTR_e_HybridType, PLTR_VAR_INIT)
    KePLTR_e_ProxyHybridTypeInit = CePLTR_e_NotApplicable;/* Referenced by: '<S498>/Calib' */
static volatile CONST(TePLTR_e_RTCSyncDiag_Type, PLTR_VAR_INIT)
    KePLTR_e_RTCSyncDiag_Type = CePLTR_e_RTCSyncDiag_BOTH_OR;/* Referenced by:
                                                              * '<S597>/Calib'
                                                              * '<S610>/Calib'
                                                              * '<S619>/Calib'
                                                              */
static volatile CONST(TePLTR_e_ShiftIndSt, PLTR_VAR_INIT)
    KePLTR_e_ShiftIndStOvrdVal = CePLTR_e_GSI;/* Referenced by: '<S499>/Calib' */
static volatile CONST(TePLTR_e_VehCategory, PLTR_VAR_INIT)
    KePLTR_e_VehCategory_Init = CePLTR_e_Category_M1;/* Referenced by: '<S500>/Calib' */
static volatile CONST(TePLTR_e_VehCfgSt, PLTR_VAR_INIT) KePLTR_e_VehCfgStOvrdVal
    = CePLTR_e_NotAvailable;           /* Referenced by: '<S501>/Calib' */
static volatile CONST(TePLTR_e_WSInverterSts, PLTR_VAR_INIT)
    KePLTR_e_Worksite_Inverter_Sts_Init = CePLTR_e_WSInverterSts_NOT_ACTIVE;/* Referenced by: '<S502>/Calib' */
static volatile CONST(TePLTR_e_eBurn_Stages, PLTR_VAR_INIT)
    KePLTR_e_eBurn_Stages_Init = CePLTR_e_eBurn_NormalStage;/* Referenced by: '<S503>/Calib' */
static volatile CONST(float32, PLTR_VAR_INIT) KePLTR_k_AccelVehFiltCoeff =
    0.0755346864F;                     /* Referenced by: '<S291>/Calib' */
static volatile CONST(float32, PLTR_VAR_INIT) KePLTR_k_LatAccelFiltCoeff = 0.2F;/* Referenced by: '<S292>/Calib' */
static volatile CONST(float32, PLTR_VAR_INIT) KePLTR_k_LongAccelFiltCoeff =
    0.0755346864F;                     /* Referenced by: '<S293>/Calib' */
static volatile CONST(float32, PLTR_VAR_INIT) KePLTR_kl_OdometerMaxValue = 0.0F;/* Referenced by: '<S504>/Calib' */
static volatile CONST(float32, PLTR_VAR_INIT) KePLTR_l_TravelDistance_Init =
    0.0F;                              /* Referenced by: '<S505>/Calib' */
static volatile CONST(float32, PLTR_VAR_INIT)
    KePLTR_milel_OvrrdIPEETestMileageLimitVal = 16.0F;/* Referenced by: '<S574>/Calib' */
static volatile CONST(float32, PLTR_VAR_INIT) KePLTR_n_VehSpdLimit = 25.0F;/* Referenced by: '<S555>/Calib' */
static volatile CONST(float32, PLTR_VAR_INIT) KePLTR_n_VehSpdLimitForPSAIdle =
    1.0F;                              /* Referenced by: '<S556>/Calib' */
static volatile CONST(float32, PLTR_VAR_INIT) KePLTR_p_AmbientAirDflt = 101.0F;/* Referenced by:
                                                                      * '<S72>/FsftPLTR_p_AmbientAirPrsChrt'
                                                                      * '<S185>/PokePLTR_p_AmbientAirPrsChrt'
                                                                      */
static volatile CONST(float32, PLTR_VAR_INIT) KePLTR_p_AmbientAirPrsInitVal =
    100.0F;                            /* Referenced by: '<S506>/Calib' */
static volatile CONST(float32, PLTR_VAR_INIT) KePLTR_phi_LwsAngle_Init = 0.0F;/* Referenced by: '<S507>/Calib' */
static volatile CONST(float32, PLTR_VAR_INIT) KePLTR_t_BlendForLongAccel = 0.1F;/* Referenced by: '<S294>/Calib' */
static volatile CONST(float32, PLTR_VAR_INIT) KePLTR_t_DbncService04Req = 1.0F;/* Referenced by: '<S397>/Calib' */
static volatile CONST(float32, PLTR_VAR_INIT) KePLTR_t_LongAccel_FirstWindow =
    2.0F;                              /* Referenced by: '<S330>/Calib' */
static volatile CONST(uint32, PLTR_VAR_INIT) KePLTR_t_RTCSyncDiagThrshld = 12U;/* Referenced by: '<S598>/Calib' */
static volatile CONST(uint32, PLTR_VAR_INIT) KePLTR_t_RTCSyncDiagTstWndw =
    14400U;                            /* Referenced by: '<S599>/Calib' */
static volatile CONST(float32, PLTR_VAR_INIT) KePLTR_t_TimeForVehSpdLmt = 300.0F;/* Referenced by: '<S557>/Calib' */
static volatile CONST(float32, PLTR_VAR_INIT) KePLTR_t_TimeLmtForPSAIdle = 30.0F;/* Referenced by: '<S558>/Calib' */
static volatile CONST(float32, PLTR_VAR_INIT) KePLTR_t_TimeSincePSALmt = 600.0F;/* Referenced by: '<S559>/Calib' */
static volatile CONST(float32, PLTR_VAR_INIT) KePLTR_t_dt1000ms = 1.0F;/* Referenced by: '<S560>/Calib' */
static volatile CONST(float32, PLTR_VAR_INIT) KtPLTR_Cf_arcsintodeg[6] =
{
    0.0F, 9.0F, 15.0F, 25.0F, 37.0F, 45.0F
} ;                                    /* Referenced by: '<S295>/Vector' */

static volatile CONST(float32, PLTR_VAR_INIT) KtPLTR_Cf_arcsintodeg1[6] =
{
    0.0F, 9.0F, 15.0F, 25.0F, 37.0F, 45.0F
} ;                                    /* Referenced by: '<S296>/Vector' */

static volatile CONST(float32, PLTR_VAR_INIT) KtPLTR_K_DegToPct[9] =
{
    -100.0F, -75.082F, -49.858F, -24.9328F, 0.0F, 24.9328F, 49.858F, 75.082F,
    100.0F
} ;                                    /* Referenced by: '<S297>/Vector' */

static volatile CONST(float32, PLTR_VAR_INIT) KtPLTR_K_LSP_LongAccel[25] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S298>/Vector' */

static volatile CONST(float32, PLTR_VAR_INIT) KtPLTR_K_Offset_ForPitch[25] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S299>/Vector' */

static volatile CONST(float32, PLTR_VAR_INIT) KtPLTR_K_RSP_LongAccel[25] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S300>/Vector' */

static volatile CONST(float32, PLTR_VAR_INIT) KtPLTR_v_LatAccelHysLSP[5] =
{
    0.5F, 0.5F, 1.0F, 1.5F, 2.0F
} ;                                    /* Referenced by: '<S301>/Vector' */

static volatile CONST(float32, PLTR_VAR_INIT) KtPLTR_v_LatAccelHysRSP[5] =
{
    1.0F, 1.0F, 1.5F, 2.0F, 2.5F
} ;                                    /* Referenced by: '<S302>/Vector' */

static volatile CONST(float32, PLTR_VAR_INIT) KxPLTR_Cf_arcsintodeg[6] =
{
    0.0F, 0.156F, 0.259F, 0.423F, 0.602F, 0.707F
} ;                                    /* Referenced by: '<S295>/Vector' */

static volatile CONST(float32, PLTR_VAR_INIT) KxPLTR_Cf_arcsintodeg1[6] =
{
    0.0F, 0.156F, 0.259F, 0.423F, 0.602F, 0.707F
} ;                                    /* Referenced by: '<S296>/Vector' */

static volatile CONST(float32, PLTR_VAR_INIT) KxPLTR_K_DegToPct[9] =
{
    -45.0F, -36.9F, -26.5F, -14.0F, 0.0F, 14.0F, 26.5F, 36.9F, 45.0F
} ;                                    /* Referenced by: '<S297>/Vector' */

static volatile CONST(float32, PLTR_VAR_INIT) KxPLTR_K_LSP_LongAccel[5] =
{
    5.0F, 10.0F, 16.0F, 21.0F, 25.0F
} ;                                    /* Referenced by: '<S298>/Vector' */

static volatile CONST(float32, PLTR_VAR_INIT) KxPLTR_K_Offset_ForPitch[5] =
{
    5.0F, 10.0F, 15.0F, 20.0F, 23.0F
} ;                                    /* Referenced by: '<S299>/Vector' */

static volatile CONST(float32, PLTR_VAR_INIT) KxPLTR_K_RSP_LongAccel[5] =
{
    5.0F, 10.0F, 15.0F, 20.0F, 23.0F
} ;                                    /* Referenced by: '<S300>/Vector' */

static volatile CONST(float32, PLTR_VAR_INIT) KxPLTR_v_LatAccelHysLSP[5] =
{
    0.0F, 10.0F, 20.0F, 30.0F, 40.0F
} ;                                    /* Referenced by: '<S301>/Vector' */

static volatile CONST(float32, PLTR_VAR_INIT) KxPLTR_v_LatAccelHysRSP[5] =
{
    0.0F, 10.0F, 20.0F, 30.0F, 40.0F
} ;                                    /* Referenced by: '<S302>/Vector' */

static volatile CONST(float32, PLTR_VAR_INIT) KyPLTR_K_LSP_LongAccel[5] =
{
    1.0F, 3.0F, 5.0F, 8.0F, 11.0F
} ;                                    /* Referenced by: '<S298>/Vector' */

static volatile CONST(float32, PLTR_VAR_INIT) KyPLTR_K_Offset_ForPitch[5] =
{
    1.0F, 3.0F, 6.0F, 9.0F, 10.0F
} ;                                    /* Referenced by: '<S299>/Vector' */

static volatile CONST(float32, PLTR_VAR_INIT) KyPLTR_K_RSP_LongAccel[5] =
{
    1.0F, 3.0F, 5.0F, 8.0F, 9.0F
} ;                                    /* Referenced by: '<S300>/Vector' */

#define STOP_SEC_CALIB_UNSPECIFIED_PLTR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PLTR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(boolean, PLTR_VAR_INIT) AePLTR_b_InFieldMode;/* '<Root>/DSM_23' */
static VAR(boolean, PLTR_VAR_INIT) AePLTR_b_PwrOffOk;/* '<Root>/DSM_36' */
static VAR(boolean, PLTR_VAR_INIT) AePLTR_b_REMDisabled;/* '<Root>/DSM_33' */
static VAR(boolean, PLTR_VAR_INIT) AePLTR_b_RadFanHandshake_disbld;/* '<Root>/DSM_1' */
static VAR(float32, PLTR_VAR_INIT) AePLTR_milel_IPEETestMileageLimit;/* '<Root>/DSM_32' */
static VAR(boolean, PLTR_VAR_INIT) EePLTR_b_RTC_CurrentTimeFA;/* '<Root>/DSM_35' */
static VAR(sint16, PLTR_VAR_INIT) EePLTR_e_RTCStatus;/* '<Root>/DSM_16' */
static VAR(sint16, PLTR_VAR_INIT) EePLTR_e_ShippingMode;/* '<Root>/DSM_2' */
static VAR(uint32, PLTR_VAR_INIT) EePLTR_t_PowerdownTime;/* '<Root>/DSM_17' */
static VAR(uint32, PLTR_VAR_INIT) EePLTR_t_RTCTime;/* '<Root>/DSM_15' */
static VAR(boolean, PLTR_VAR_INIT) VePLTC_b_1stCondition;/* '<S564>/Comparison' */
static VAR(boolean, PLTR_VAR_INIT) VePLTC_b_2ndCondition;/* '<S562>/Comparison' */
static VAR(boolean, PLTR_VAR_INIT) VePLTC_b_3rdCondition;/* '<S561>/OR1' */
static VAR(boolean, PLTR_VAR_INIT) VePLTI_b_Prmry_BODY_RFHUB1_Fail;/* '<S334>/Logical73' */
static VAR(boolean, PLTR_VAR_INIT) VePLTI_b_Prmry_Fail;/* '<S334>/Logical1' */
static VAR(boolean, PLTR_VAR_INIT) VePLTI_b_Prmry_SC_Fail;/* '<S334>/Logical75' */
static VAR(boolean, PLTR_VAR_INIT) VePLTI_b_Scndry_BODY_RFHUB1_Fail;/* '<S334>/Logical72' */
static VAR(boolean, PLTR_VAR_INIT) VePLTI_b_Scndry_Fail;/* '<S334>/Logical2' */
static VAR(boolean, PLTR_VAR_INIT) VePLTI_b_Scndry_SC_Fail;/* '<S334>/Logical74' */
static VAR(boolean, PLTR_VAR_INIT) VePLTI_b_TransShiftPstnBusFlt;/* '<S334>/Logical5' */
static VAR(boolean, PLTR_VAR_INIT) VePLTI_b_TransShiftPstnFABusFlt;/* '<S334>/Logical10' */
static VAR(boolean, PLTR_VAR_INIT) VePLTI_b_TransShiftPstnFAPrmryFlt;/* '<S334>/Logical7' */
static VAR(boolean, PLTR_VAR_INIT) VePLTI_b_TransShiftPstnFAScndryFlt;/* '<S334>/Logical9' */
static VAR(boolean, PLTR_VAR_INIT) VePLTI_b_TransShiftPstnPrmryFlt;/* '<S334>/Logical' */
static VAR(boolean, PLTR_VAR_INIT) VePLTI_b_TransShiftPstnScndryFlt;/* '<S334>/Logical4' */
static VAR(TePLTR_e_DRV_SEATBELT, PLTR_VAR_INIT) VePLTI_e_SeatBeltSt;/* '<S380>/Switch1' */
static VAR(float32, PLTR_VAR_INIT) VePLTI_milel_Odometer_Miles;/* '<S530>/Product1' */
static VAR(uint16, PLTR_VAR_INIT) VePLTR_Cnt_IgnKeyOffTmrPerfTooFast_FailCntr;/* '<S416>/Switch1' */
static VAR(uint16, PLTR_VAR_INIT) VePLTR_Cnt_IgnKeyOffTmrPerfTooFast_SmplCntr;/* '<S417>/Switch1' */
static VAR(float32, PLTR_VAR_INIT) VePLTR_a_AccelWheelFilt;/* '<S283>/Unit Delay14' */
static VAR(float32, PLTR_VAR_INIT) VePLTR_a_LatAccelFilt;/* '<S283>/Unit Delay2' */
static VAR(float32, PLTR_VAR_INIT) VePLTR_a_LatAccel_Processed;/* '<S282>/Sum4' */
static VAR(float32, PLTR_VAR_INIT) VePLTR_a_LongAccelFilt;/* '<S283>/Unit Delay1' */
static VAR(float32, PLTR_VAR_INIT) VePLTR_a_LongAccel_Processed;/* '<S320>/Switch1' */
static VAR(boolean, PLTR_VAR_INIT) VePLTR_b_AutoPosCorrMdFA;/* '<S353>/Switch1' */
static VAR(boolean, PLTR_VAR_INIT) VePLTR_b_DrvrDoorOpen;/* '<S381>/Switch1' */
static VAR(boolean, PLTR_VAR_INIT) VePLTR_b_FirstWindow;/* '<S333>/Greater  Than1' */
static VAR(boolean, PLTR_VAR_INIT) VePLTR_b_HCPOffTime_Pass;/* '<S583>/AND' */
static VAR(boolean, PLTR_VAR_INIT) VePLTR_b_InFieldMode_Raw;/* '<S530>/Data Store Read6' */
static VAR(boolean, PLTR_VAR_INIT) VePLTR_b_Prmry_Fail_MSG;/* '<S337>/Logical1' */
static VAR(boolean, PLTR_VAR_INIT) VePLTR_b_Scndry_Fail_MSG;/* '<S337>/Logical2' */
static VAR(boolean, PLTR_VAR_INIT) VePLTR_b_ShiftPstnFA;/* '<S365>/Gain' */
static VAR(TePLTR_e_RTCSyncDiagTestReport, PLTR_VAR_INIT)
    VePLTR_e_RTCSyncDiagReport_GPSCheck;/* '<S526>/RTCSync_GPSCheck' */
static VAR(TePLTR_e_RTCSyncDiagTestReport, PLTR_VAR_INIT)
    VePLTR_e_RTCSyncDiagReport_HCPCheck;/* '<S526>/RTCSync_HCPCheck' */
static VAR(TePLTR_e_RTCSyncDiagStat, PLTR_VAR_INIT)
    VePLTR_e_RTCSyncDiagStat_GPSCheck; /* '<S526>/RTCSync_GPSCheck' */
static VAR(TePLTR_e_RTCSyncDiagStat, PLTR_VAR_INIT)
    VePLTR_e_RTCSyncDiagStat_HCPCheck; /* '<S526>/RTCSync_HCPCheck' */
static VAR(float32, PLTR_VAR_INIT) VePLTR_phi_EstSlopeAngle_Raw;/* '<S303>/Switch' */
static VAR(uint32, PLTR_VAR_INIT) VePLTR_t_GPSTimeTest;/* '<S526>/RTCSync_GPSCheck' */
static VAR(uint32, PLTR_VAR_INIT) VePLTR_t_HCPTimeTest;/* '<S526>/RTCSync_HCPCheck' */
static VAR(uint32, PLTR_VAR_INIT) VePLTR_t_HCPTimer;/* '<S526>/RTCSync_GPSCheck' */
static VAR(uint32, PLTR_VAR_INIT) VePLTR_t_RTCTimeTest_GPSCheck;/* '<S526>/RTCSync_GPSCheck' */
static VAR(uint32, PLTR_VAR_INIT) VePLTR_t_RTCTimeTest_HCPCheck;/* '<S526>/RTCSync_HCPCheck' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PLTR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_PLTR
#include "MemMap.h"

CONST(ConstB_PLTR_ac_T, PLTR_VAR_INIT) PLTR_ac_ConstB =
{
    CeTRGR_e_NoSelectionAvailable,     /* '<S427>/Const15' */
    CeTRGR_e_NoSelectionAvailable,     /* '<S427>/Const22' */
    CeTRGR_e_NoSelectionAvailable,     /* '<S427>/Const26' */
    CeTRGR_e_NoSelectionAvailable,     /* '<S427>/Const27' */
    CeTRGR_e_TransRangePark,           /* '<S446>/Constant' */
    CeTRGR_e_TransRangePark,           /* '<S448>/Constant' */
    CeTRGR_e_TransRangePark,           /* '<S449>/Constant' */
    CeTRGR_e_TransRangePark,           /* '<S450>/Constant' */
    CeTRGR_e_TransRangePark,           /* '<S451>/Constant' */
    CeTRGR_e_TransRangePark,           /* '<S452>/Constant' */
    CeTRGR_e_AutoPosCorrMd_Off,        /* '<S427>/Const16' */
    CeTRGR_e_AutoPosCorrMd_Off,        /* '<S443>/Constant' */
    CeTRGR_e_AutoPosCorrMd_Off,        /* '<S444>/Constant' */
    CePLTR_e_VCC_OTHERS,               /* '<S427>/Const2' */
    CePLTR_e_NoPlgIn,                  /* '<S459>/Constant' */
    CePLTR_e_Towing_MD_RQ_OFF,         /* '<S432>/Constant' */
    CePLTR_e_ShipingMode_CUST_MD,      /* '<S427>/Const3' */
    CePLTR_e_ShipingMode_NOT_PROG,     /* '<S434>/Constant' */
    CePLTR_e_SelectSpdSts_OFF,         /* '<S456>/Constant' */
    CePLTR_e_RTCSyncDiag_NotTested,    /* '<S462>/Constant' */
    CePLTR_e_GearShiftReq_Idle,        /* '<S458>/Constant' */
    CePLTR_e_Not_Active,               /* '<S445>/Constant' */
    CePLTR_e_Not_Active,               /* '<S447>/Constant' */
    CePLTR_e_NotActive,                /* '<S454>/Constant' */
    CePLTR_e_NoPlgIn_Tools,            /* '<S457>/Constant' */
    CePLTR_e_Increasing_0,             /* '<S439>/Constant' */
    CePLTR_e_HiBmLvr_Stat_Idle,        /* '<S433>/Constant' */
    CePLTR_e_EPBHoldSts_BSU,           /* '<S460>/Constant' */
    CePLTR_e_NoReset,                  /* '<S441>/Constant' */
    CePLTR_e_DrvrSeatSnsrSts_Init,     /* '<S453>/Constant' */
    CePLTR_e_DrvrDoorOnOffSts_SNA,     /* '<S440>/Constant' */
    CePLTR_e_DRV_SEATBELT_OK,          /* '<S455>/Constant' */
    CePLTR_e_No_Req,                   /* '<S442>/Constant' */
    CePLTR_e_ACC_Absent,               /* '<S438>/Constant' */
    CePLTR_e_ASCM_Stat_NONE,           /* '<S437>/Constant' */
    CePLTR_e_Off,                      /* '<S461>/Constant' */
    CeDFIB_e_Init,                     /* '<S518>/Constant' */
    CeDFIB_e_Init                      /* '<S425>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_PLTR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_PLTR
#include "MemMap.h"

CONST(ConstP_PLTR_ac_T, PLTR_VAR_INIT) PLTR_ac_ConstP =
{
    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S298>/Vector'
     *   '<S299>/Vector'
     *   '<S300>/Vector'
     */
    {
        4U, 4U
    }
};

#define STOP_SEC_CONST_UNSPECIFIED_PLTR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PLTR
#include "MemMap.h"

VAR(B_PLTR_ac_T, PLTR_VAR_INIT) PLTR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PLTR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PLTR
#include "MemMap.h"

VAR(DW_PLTR_ac_T, PLTR_VAR_INIT) PLTR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PLTR
#include "MemMap.h"

static FUNC(void, PLTR_CODE_LOCAL) PLTR_ac_AtmPress_100ms(VAR(float32, AUTOMATIC)
    rtu_AmbientAirPrs_KPa, P2VAR(B_AtmPress_100ms_PLTR_ac_T, AUTOMATIC,
    PLTR_VAR_INIT) localB);
static FUNC(void, PLTR_CODE_LOCAL) PLTR_ac_RTCFromBPCM(VAR(uint32, AUTOMATIC)
    rtu_BPCM_RTC_CurrentTime, VAR(boolean, AUTOMATIC) rtu_BPCM_RTC_CurrentTimeFA,
    VAR(uint32, AUTOMATIC) rtu_BPCM_RTC_SleepTime, P2VAR(uint32, AUTOMATIC,
    PLTR_VAR_INIT) rty_VePLTC_t_BPCM_RTC_CurrentTime, P2VAR(boolean, AUTOMATIC,
    PLTR_VAR_INIT) rty_VePLTC_b_BPCM_RTC_CurrentTimeFA, P2VAR(uint32, AUTOMATIC,
    PLTR_VAR_INIT) rty_VePLTC_t_BPCM_RTC_SleepTime);

/* Forward declaration for local functions */
static uint8 safe_cast_to_TePLTR_e_BSM_AxleTrq_Enbld(uint8 input);
static uint8 PL_safe_cast_to_TePLTR_e_DrvrSeatSnsrSts(uint8 input);
static uint8 safe_cast_to_TePLTR_e_LSMDExtReleaseLock(uint8 input);
static uint8 PLTR__safe_cast_to_TePLTR_e_LwsAngleType(uint8 input);
static uint8 PLTR_ac_safe_cast_to_TePLTR_e_MRM_Status(uint8 input);
static uint8 PLTR_safe_cast_to_TePLTR_e_WSInverterSts(uint8 input);
static uint8 PLTR__safe_cast_to_TePLTR_e_eBurn_Stages(uint8 input);

/*
 * Output and update for function-call system:
 *    '<S84>/AtmPress_100ms'
 *    '<S86>/AtmPress_100ms'
 */
static FUNC(void, PLTR_CODE_LOCAL) PLTR_ac_AtmPress_100ms(VAR(float32, AUTOMATIC)
    rtu_AmbientAirPrs_KPa, P2VAR(B_AtmPress_100ms_PLTR_ac_T, AUTOMATIC,
    PLTR_VAR_INIT) localB)
{
    /* Product: '<S389>/Product2' incorporates:
     *  Constant: '<S393>/Calib'
     */
    localB->VePLTR_pmbar_AmbientAirPrs = rtu_AmbientAirPrs_KPa *
        KePLTR_Cf_AmbientAirPrsConv;
}

/*
 * Output and update for action system:
 *    '<S426>/RTCFromBPCM'
 *    '<S525>/RTCFromBPCM'
 */
static FUNC(void, PLTR_CODE_LOCAL) PLTR_ac_RTCFromBPCM(VAR(uint32, AUTOMATIC)
    rtu_BPCM_RTC_CurrentTime, VAR(boolean, AUTOMATIC) rtu_BPCM_RTC_CurrentTimeFA,
    VAR(uint32, AUTOMATIC) rtu_BPCM_RTC_SleepTime, P2VAR(uint32, AUTOMATIC,
    PLTR_VAR_INIT) rty_VePLTC_t_BPCM_RTC_CurrentTime, P2VAR(boolean, AUTOMATIC,
    PLTR_VAR_INIT) rty_VePLTC_b_BPCM_RTC_CurrentTimeFA, P2VAR(uint32, AUTOMATIC,
    PLTR_VAR_INIT) rty_VePLTC_t_BPCM_RTC_SleepTime)
{
    /* Gain: '<S515>/Gain' */
    *rty_VePLTC_t_BPCM_RTC_CurrentTime = rtu_BPCM_RTC_CurrentTime;

    /* Gain: '<S516>/Gain' */
    *rty_VePLTC_b_BPCM_RTC_CurrentTimeFA = rtu_BPCM_RTC_CurrentTimeFA;

    /* Gain: '<S517>/Gain' */
    *rty_VePLTC_t_BPCM_RTC_SleepTime = rtu_BPCM_RTC_SleepTime;
}

static uint8 safe_cast_to_TePLTR_e_BSM_AxleTrq_Enbld(uint8 input)
{
    uint8 y;

    /* Initialize output value to default value for TePLTR_e_BSM_AxleTrq_Enbld (CePLTR_e_No_Req) */
    y = 0U;
    if ((((sint32)input) <= 4) || (((sint32)input) == 15))
    {
        /* Set output value to input value if it is a member of TePLTR_e_BSM_AxleTrq_Enbld */
        y = input;
    }

    return y;
}

static uint8 PL_safe_cast_to_TePLTR_e_DrvrSeatSnsrSts(uint8 input)
{
    uint8 y;

    /* Initialize output value to default value for TePLTR_e_DrvrSeatSnsrSts (CePLTR_e_DrvrSeatSnsrSts_Init) */
    y = 0U;
    if (((sint32)input) <= 3)
    {
        /* Set output value to input value if it is a member of TePLTR_e_DrvrSeatSnsrSts */
        y = input;
    }

    return y;
}

static uint8 safe_cast_to_TePLTR_e_LSMDExtReleaseLock(uint8 input)
{
    uint8 y;

    /* Initialize output value to default value for TePLTR_e_LSMDExtReleaseLockReq (CePLTR_e_NotActive) */
    y = 0U;
    if (((sint32)input) <= 2)
    {
        /* Set output value to input value if it is a member of TePLTR_e_LSMDExtReleaseLockReq */
        y = input;
    }

    return y;
}

static uint8 PLTR__safe_cast_to_TePLTR_e_LwsAngleType(uint8 input)
{
    uint8 y;

    /* Initialize output value to default value for TePLTR_e_LwsAngleType (CePLTR_e_Absolute) */
    y = 0U;
    if (((sint32)input) <= 2)
    {
        /* Set output value to input value if it is a member of TePLTR_e_LwsAngleType */
        y = input;
    }

    return y;
}

static uint8 PLTR_ac_safe_cast_to_TePLTR_e_MRM_Status(uint8 input)
{
    uint8 y;

    /* Initialize output value to default value for TePLTR_e_MRM_Status (CePLTR_e_Not_Active) */
    y = 0U;
    if (((sint32)input) <= 4)
    {
        /* Set output value to input value if it is a member of TePLTR_e_MRM_Status */
        y = input;
    }

    return y;
}

static uint8 PLTR_safe_cast_to_TePLTR_e_WSInverterSts(uint8 input)
{
    uint8 y;

    /* Initialize output value to default value for TePLTR_e_WSInverterSts (CePLTR_e_WSInverterSts_NOT_ACTIVE) */
    y = 0U;
    if ((((sint32)input) <= 1) || (((sint32)input) == 3))
    {
        /* Set output value to input value if it is a member of TePLTR_e_WSInverterSts */
        y = input;
    }

    return y;
}

static uint8 PLTR__safe_cast_to_TePLTR_e_eBurn_Stages(uint8 input)
{
    uint8 y;

    /* Initialize output value to default value for TePLTR_e_eBurn_Stages (CePLTR_e_eBurn_NormalStage) */
    y = 0U;
    if (((sint32)input) <= 7)
    {
        /* Set output value to input value if it is a member of TePLTR_e_eBurn_Stages */
        y = input;
    }

    return y;
}

/* Model step function for TID1 */
FUNC(void, PLTR_CODE) PLTR_MedTEB(void) /* Explicit Task: MedTEB */
{
    float32 rtb_Abs3;
    float32 rtb_Maximum;
    float32 rtb_Switch1_cp;
    float32 rtb_TmpSignalConversionAtOutTorqReqModHH;
    float32 rtb_TmpSignalConversionAtVePLTR_a_LongAc;
    float32 rtb_TmpSignalConversionAtVePLTR_a_TransA;
    float32 rtb_TmpSignalConversionAtVehSpd_ReadOutp;
    float32 tmpRead_h;
    float32 tmpRead_i;
    TePMDR_e_PowerMode tmpRead_0;
    TePRXR_e_AdaptiveCruiseCtrl tmpRead_b;
    TePRXR_e_Autonomy_Lvl tmpRead_f;
    TePRXR_e_Cruise_Control_Logic tmpRead_g;
    TePRXR_e_HybridType tmpRead_d;
    TePRXR_e_IncreasingSpdConst tmpRead_c;
    TePRXR_e_ShiftIndSt tmpRead_a;
    TePRXR_e_VehCategory tmpRead_e;
    TePRXR_e_VehicleCountryCode tmpRead_9;
    boolean rtb_AND_g0;
    boolean rtb_Equal1;
    boolean tmpRead;
    boolean tmpRead_1;
    boolean tmpRead_2;
    boolean tmpRead_3;
    boolean tmpRead_4;
    boolean tmpRead_5;
    boolean tmpRead_6;
    boolean tmpRead_7;
    boolean tmpRead_8;

    /* Inport: '<Root>/VeCSVR_b_VehSpdFA' */
    (void)Rte_Read_VeCSVR_b_VehSpdFA_Value(&tmpRead);

    /* Inport: '<Root>/VeCSVR_a_VehAccel' */
    (void)Rte_Read_VeCSVR_a_VehAccel_Value(&rtb_Maximum);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/PLTR_MedTEB'
     */
    /* SignalConversion generated from: '<S82>/VePLTR_a_LongAccel_read' incorporates:
     *  Merge: '<Root>/Merge_69_Irv'
     */
    rtb_TmpSignalConversionAtVePLTR_a_LongAc =
        Rte_IrvRead_PLTR_MedTEB_VePLTR_a_LongAccel_write_IRV();

    /* SignalConversion generated from: '<S82>/VePLTR_a_TransAccel_read' incorporates:
     *  Merge: '<Root>/Merge_45_Irv'
     */
    rtb_TmpSignalConversionAtVePLTR_a_TransA =
        Rte_IrvRead_PLTR_MedTEB_VePLTR_a_TransAccel_write_IRV();

    /* SignalConversion generated from: '<S82>/VehSpd_Read' incorporates:
     *  Merge: '<Root>/VehSpd_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVehSpd_ReadOutp =
        Rte_IrvRead_PLTR_MedTEB_VehSpd_write_IRV();

    /* SignalConversion generated from: '<S82>/OutTorqReqModHH_Read' incorporates:
     *  Merge: '<Root>/OutTorqReqModHH_IRV_Merge'
     */
    rtb_TmpSignalConversionAtOutTorqReqModHH =
        Rte_IrvRead_PLTR_MedTEB_OutTorqReqModHH_write_IRV();

    /* S-Function (fcgen): '<S82>/FcnCallGen' incorporates:
     *  SubSystem: '<S82>/PLTI_ProcessInputs'
     */
    /* Outputs for Atomic SubSystem: '<S282>/Protected Division4' */
    /* Switch: '<S332>/Switch1' incorporates:
     *  Constant: '<S324>/Calib'
     *  Constant: '<S332>/Constant Value'
     *  Constant: '<S332>/Constant Value1'
     *  Constant: '<S332>/Constant Value2'
     *  Constant: '<S332>/Constant Value3'
     *  Logic: '<S332>/AND'
     *  RelationalOperator: '<S332>/Greater Than or Equal '
     *  RelationalOperator: '<S332>/Greater Than or Equal 1'
     *  RelationalOperator: '<S332>/Not Equal'
     *  RelationalOperator: '<S332>/Not Equal1'
     *  Switch: '<S332>/Switch2'
     *  Switch: '<S332>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVePLTR_a_TransA != 0.0F) &&
            (KePLTR_Cf_AccelerometerYScale != 0.0F))
    {
        /* Switch: '<S332>/Switch1' incorporates:
         *  Product: '<S332>/Division'
         */
        rtb_Switch1_cp = rtb_TmpSignalConversionAtVePLTR_a_TransA /
            KePLTR_Cf_AccelerometerYScale;
    }
    else if (rtb_TmpSignalConversionAtVePLTR_a_TransA > 0.0F)
    {
        /* Switch: '<S332>/Switch2' incorporates:
         *  Constant: '<S332>/MAXFLOAT'
         *  Switch: '<S332>/Switch1'
         */
        rtb_Switch1_cp = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVePLTR_a_TransA < 0.0F)
    {
        /* Switch: '<S332>/Switch3' incorporates:
         *  Constant: '<S332>/MINFLOAT'
         *  Switch: '<S332>/Switch1'
         *  Switch: '<S332>/Switch2'
         */
        rtb_Switch1_cp = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S332>/Switch1' incorporates:
         *  Constant: '<S332>/Constant Value4'
         *  Switch: '<S332>/Switch2'
         *  Switch: '<S332>/Switch3'
         */
        rtb_Switch1_cp = 0.0F;
    }

    /* End of Switch: '<S332>/Switch1' */
    /* End of Outputs for SubSystem: '<S282>/Protected Division4' */
    /* End of Outputs for S-Function (fcgen): '<S82>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VePMDR_e_PMM_PowerMode' */
    (void)Rte_Read_VePMDR_e_PMM_PowerMode_Value(&tmpRead_0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/PLTR_MedTEB'
     */
    /* S-Function (fcgen): '<S82>/FcnCallGen' incorporates:
     *  SubSystem: '<S82>/PLTI_ProcessInputs'
     */
    /* Switch: '<S322>/Switch1' incorporates:
     *  Constant: '<S282>/Constant Value3'
     *  Constant: '<S325>/Calib'
     *  Constant: '<S326>/Calib'
     *  RelationalOperator: '<S282>/Comparison3'
     */
    if (rtb_TmpSignalConversionAtVePLTR_a_TransA > 0.0F)
    {
        rtb_TmpSignalConversionAtVePLTR_a_TransA = KePLTR_Cf_LatAccelScaleFctr;
    }
    else
    {
        rtb_TmpSignalConversionAtVePLTR_a_TransA = KePLTR_Cf_LatAccelScaleFctr1;
    }

    /* End of Switch: '<S322>/Switch1' */

    /* Sum: '<S282>/Sum4' incorporates:
     *  Merge: '<Root>/Merge_48'
     *  Product: '<S282>/Product2'
     *  SignalConversion generated from: '<S82>/VePLTR_a_TransAccelOffset_read'
     */
    VePLTR_a_LatAccel_Processed = rtb_Switch1_cp -
        (rtb_TmpSignalConversionAtVePLTR_a_TransA *
         Rte_IrvRead_PLTR_MedTEB_VePLTR_a_TransAccelOffset_write_IRV());

    /* RelationalOperator: '<S282>/Equal1' incorporates:
     *  Constant: '<S309>/Constant'
     *  Inport: '<Root>/VePMDR_e_PMM_PowerMode'
     */
    rtb_Equal1 = (((uint32)tmpRead_0) == CePMDR_e_PowerMode_Off);

    /* Outputs for Atomic SubSystem: '<S282>/Timer Retrigger Reset Enabled1' */
    /* Switch: '<S333>/Switch1' incorporates:
     *  Constant: '<S319>/Calib'
     *  Constant: '<S330>/Calib'
     *  Constant: '<S333>/Constant Value4'
     *  Logic: '<S282>/AND3'
     *  Logic: '<S282>/AND4'
     *  Logic: '<S282>/Logical4'
     *  Logic: '<S282>/Logical5'
     *  MinMax: '<S333>/Maximum'
     *  Sum: '<S333>/Subtraction'
     *  UnitDelay: '<S282>/Unit Delay3'
     *  UnitDelay: '<S282>/Unit Delay4'
     *  UnitDelay: '<S333>/Unit Delay'
     */
    if ((!PLTR_ac_DW.UnitDelay3_DSTATE_c) || ((!rtb_Equal1) &&
            (PLTR_ac_DW.UnitDelay4_DSTATE)))
    {
        PLTR_ac_DW.UnitDelay_DSTATE_a = KePLTR_t_LongAccel_FirstWindow;
    }
    else
    {
        PLTR_ac_DW.UnitDelay_DSTATE_a = fmaxf(PLTR_ac_DW.UnitDelay_DSTATE_a -
            HePLTR_t_MedTEB, 0.0F);
    }

    /* End of Switch: '<S333>/Switch1' */

    /* RelationalOperator: '<S333>/Greater  Than1' incorporates:
     *  Constant: '<S333>/Constant Value2'
     *  UnitDelay: '<S333>/Unit Delay'
     */
    VePLTR_b_FirstWindow = (PLTR_ac_DW.UnitDelay_DSTATE_a > 0.0F);

    /* End of Outputs for SubSystem: '<S282>/Timer Retrigger Reset Enabled1' */

    /* Switch: '<S320>/Switch1' incorporates:
     *  Constant: '<S323>/Calib'
     *  Constant: '<S331>/Constant Value'
     *  Constant: '<S331>/Constant Value1'
     *  Constant: '<S331>/Constant Value2'
     *  Constant: '<S331>/Constant Value3'
     *  Logic: '<S331>/AND'
     *  RelationalOperator: '<S331>/Greater Than or Equal '
     *  RelationalOperator: '<S331>/Greater Than or Equal 1'
     *  RelationalOperator: '<S331>/Not Equal'
     *  RelationalOperator: '<S331>/Not Equal1'
     *  Switch: '<S331>/Switch1'
     *  Switch: '<S331>/Switch2'
     *  Switch: '<S331>/Switch3'
     */
    if (VePLTR_b_FirstWindow)
    {
        /* Switch: '<S320>/Switch1' incorporates:
         *  Constant: '<S329>/Calib'
         */
        VePLTR_a_LongAccel_Processed = KePLTR_a_LongAccel_FirstValue;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S282>/Protected Division3' */
        if ((rtb_TmpSignalConversionAtVePLTR_a_LongAc != 0.0F) &&
                (KePLTR_Cf_AccelerometerScale != 0.0F))
        {
            /* Switch: '<S331>/Switch1' incorporates:
             *  Constant: '<S323>/Calib'
             *  Product: '<S331>/Division'
             */
            rtb_Switch1_cp = rtb_TmpSignalConversionAtVePLTR_a_LongAc /
                KePLTR_Cf_AccelerometerScale;
        }
        else if (rtb_TmpSignalConversionAtVePLTR_a_LongAc > 0.0F)
        {
            /* Switch: '<S331>/Switch2' incorporates:
             *  Constant: '<S331>/MAXFLOAT'
             *  Switch: '<S331>/Switch1'
             */
            rtb_Switch1_cp = 3.402823466E+38F;
        }
        else if (rtb_TmpSignalConversionAtVePLTR_a_LongAc < 0.0F)
        {
            /* Switch: '<S331>/Switch3' incorporates:
             *  Constant: '<S331>/MINFLOAT'
             *  Switch: '<S331>/Switch1'
             *  Switch: '<S331>/Switch2'
             */
            rtb_Switch1_cp = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S331>/Switch1' incorporates:
             *  Constant: '<S331>/Constant Value4'
             *  Switch: '<S331>/Switch2'
             *  Switch: '<S331>/Switch3'
             */
            rtb_Switch1_cp = 0.0F;
        }

        /* End of Outputs for SubSystem: '<S282>/Protected Division3' */

        /* Switch: '<S321>/Switch1' incorporates:
         *  Constant: '<S282>/Constant Value2'
         *  Constant: '<S327>/Calib'
         *  Constant: '<S328>/Calib'
         *  Constant: '<S331>/Constant Value2'
         *  Constant: '<S331>/Constant Value3'
         *  RelationalOperator: '<S282>/Comparison2'
         *  RelationalOperator: '<S331>/Greater Than or Equal '
         *  RelationalOperator: '<S331>/Greater Than or Equal 1'
         *  Switch: '<S331>/Switch1'
         *  Switch: '<S331>/Switch2'
         *  Switch: '<S331>/Switch3'
         */
        if (rtb_TmpSignalConversionAtVePLTR_a_LongAc > 0.0F)
        {
            rtb_TmpSignalConversionAtVePLTR_a_TransA =
                KePLTR_Cf_LongAccelScaleFctr;
        }
        else
        {
            rtb_TmpSignalConversionAtVePLTR_a_TransA =
                KePLTR_Cf_LongAccelScaleFctr1;
        }

        /* End of Switch: '<S321>/Switch1' */

        /* Switch: '<S320>/Switch1' incorporates:
         *  Merge: '<Root>/Merge_38_Irv'
         *  Product: '<S282>/Product3'
         *  SignalConversion generated from: '<S82>/VePLTR_a_LongAccelOffset_read'
         *  Sum: '<S282>/Sum3'
         */
        VePLTR_a_LongAccel_Processed = rtb_Switch1_cp -
            (rtb_TmpSignalConversionAtVePLTR_a_TransA *
             Rte_IrvRead_PLTR_MedTEB_VePLTR_a_LongAccelOffset_write_IRV());
    }

    /* End of Switch: '<S320>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S82>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VePRXR_v_HomSpdLim' */
    (void)Rte_Read_VePRXR_v_HomSpdLim_Value(&tmpRead_i);

    /* Inport: '<Root>/VePRXR_Pct_ProxiSpdomtrTol' */
    (void)Rte_Read_VePRXR_Pct_ProxiSpdomtrTol_Value(&tmpRead_h);

    /* Inport: '<Root>/VePRXR_e_Proxi_CC_Logic' */
    (void)Rte_Read_VePRXR_e_Proxi_CC_Logic_Value(&tmpRead_g);

    /* Inport: '<Root>/VePRXR_e_Proxi_Autonomy_Lvl' */
    (void)Rte_Read_VePRXR_e_Proxi_Autonomy_Lvl_Value(&tmpRead_f);

    /* Inport: '<Root>/VePRXR_e_VehCategory' */
    (void)Rte_Read_VePRXR_e_VehCategory_Value(&tmpRead_e);

    /* Inport: '<Root>/VePRXR_e_ProxyHybridType' */
    (void)Rte_Read_VePRXR_e_ProxyHybridType_Value(&tmpRead_d);

    /* Inport: '<Root>/VePRXR_e_ProxiIncreasingSpdCnst' */
    (void)Rte_Read_VePRXR_e_ProxiIncreasingSpdCnst_Value(&tmpRead_c);

    /* Inport: '<Root>/VePRXR_e_ProxiACC' */
    (void)Rte_Read_VePRXR_e_ProxiACC_Value(&tmpRead_b);

    /* Inport: '<Root>/VePRXR_e_ShiftIndSt' */
    (void)Rte_Read_VePRXR_e_ShiftIndSt_Value(&tmpRead_a);

    /* Inport: '<Root>/VePRXR_e_VehicleCountryCode' */
    (void)Rte_Read_VePRXR_e_VehicleCountryCode_Value(&tmpRead_9);

    /* Inport: '<Root>/VePRXR_b_Hill_Des_Stat_Prx' */
    (void)Rte_Read_VePRXR_b_Hill_Des_Stat_Prx_Value(&tmpRead_8);

    /* Inport: '<Root>/VePRXR_b_ProxiCADM2' */
    (void)Rte_Read_VePRXR_b_ProxiCADM2_Value(&tmpRead_7);

    /* Inport: '<Root>/VePRXR_b_ProxiCADM' */
    (void)Rte_Read_VePRXR_b_ProxiCADM_Value(&tmpRead_6);

    /* Inport: '<Root>/VePRXR_b_RRCCPROXI' */
    (void)Rte_Read_VePRXR_b_RRCCPROXI_Value(&tmpRead_5);

    /* Inport: '<Root>/VePRXR_b_ProxiTrafficSignRcgntn' */
    (void)Rte_Read_VePRXR_b_ProxiTrafficSignRcgntn_Value(&tmpRead_4);

    /* Inport: '<Root>/VePRXR_b_ProxiNavPrsnc' */
    (void)Rte_Read_VePRXR_b_ProxiNavPrsnc_Value(&tmpRead_3);

    /* Inport: '<Root>/VePRXR_b_ProxiSpdLimiter' */
    (void)Rte_Read_VePRXR_b_ProxiSpdLimiter_Value(&tmpRead_2);

    /* Inport: '<Root>/VePRXR_b_ProxiCC' */
    (void)Rte_Read_VePRXR_b_ProxiCC_Value(&tmpRead_1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/PLTR_MedTEB'
     */
    /* S-Function (fcgen): '<S82>/FcnCallGen' incorporates:
     *  SubSystem: '<S82>/PLTI_ProcessInputs'
     */
    /* Update for UnitDelay: '<S282>/Unit Delay4' */
    PLTR_ac_DW.UnitDelay4_DSTATE = rtb_Equal1;

    /* Update for UnitDelay: '<S282>/Unit Delay3' incorporates:
     *  Constant: '<S282>/TRUE Constant1'
     */
    PLTR_ac_DW.UnitDelay3_DSTATE_c = true;

    /* S-Function (fcgen): '<S82>/FcnCallGen' incorporates:
     *  SubSystem: '<S82>/PLTC_Control_12p5ms'
     */
    /* UnitDelay: '<S283>/Unit Delay14' */
    VePLTR_a_AccelWheelFilt = PLTR_ac_DW.UnitDelay14_DSTATE;

    /* UnitDelay: '<S283>/Unit Delay1' */
    VePLTR_a_LongAccelFilt = PLTR_ac_DW.UnitDelay1_DSTATE;

    /* Sum: '<S283>/Subtract' */
    rtb_TmpSignalConversionAtVePLTR_a_LongAc = VePLTR_a_LongAccelFilt -
        VePLTR_a_AccelWheelFilt;

    /* Outputs for Atomic SubSystem: '<S283>/Protected Division' */
    /* Switch: '<S305>/Switch1' incorporates:
     *  Constant: '<S305>/Constant Value'
     *  RelationalOperator: '<S305>/Not Equal'
     */
    if (rtb_TmpSignalConversionAtVePLTR_a_LongAc != 0.0F)
    {
        /* Switch: '<S305>/Switch1' incorporates:
         *  Constant: '<S283>/Constant Value3'
         *  Product: '<S305>/Division'
         */
        rtb_TmpSignalConversionAtVePLTR_a_TransA =
            rtb_TmpSignalConversionAtVePLTR_a_LongAc / 9.81F;
    }
    else
    {
        /* Switch: '<S305>/Switch1' incorporates:
         *  Constant: '<S305>/Constant Value4'
         *  Switch: '<S305>/Switch2'
         *  Switch: '<S305>/Switch3'
         */
        rtb_TmpSignalConversionAtVePLTR_a_TransA = 0.0F;
    }

    /* End of Switch: '<S305>/Switch1' */
    /* End of Outputs for SubSystem: '<S283>/Protected Division' */

    /* UnitDelay: '<S283>/Unit Delay2' */
    VePLTR_a_LatAccelFilt = PLTR_ac_DW.UnitDelay2_DSTATE;

    /* Outputs for Atomic SubSystem: '<S283>/Protected Division1' */
    /* Switch: '<S306>/Switch1' incorporates:
     *  Constant: '<S306>/Constant Value'
     *  Constant: '<S306>/Constant Value2'
     *  Constant: '<S306>/Constant Value3'
     *  RelationalOperator: '<S306>/Greater Than or Equal '
     *  RelationalOperator: '<S306>/Greater Than or Equal 1'
     *  RelationalOperator: '<S306>/Not Equal'
     *  Switch: '<S306>/Switch2'
     *  Switch: '<S306>/Switch3'
     */
    if (VePLTR_a_LatAccelFilt != 0.0F)
    {
        /* Switch: '<S306>/Switch1' incorporates:
         *  Constant: '<S283>/Constant Value1'
         *  Product: '<S306>/Division'
         */
        rtb_TmpSignalConversionAtVePLTR_a_LongAc = VePLTR_a_LatAccelFilt / 9.81F;
    }
    else if (VePLTR_a_LatAccelFilt > 0.0F)
    {
        /* Switch: '<S306>/Switch2' incorporates:
         *  Constant: '<S306>/MAXFLOAT'
         *  Switch: '<S306>/Switch1'
         */
        rtb_TmpSignalConversionAtVePLTR_a_LongAc = 3.402823466E+38F;
    }
    else if (VePLTR_a_LatAccelFilt < 0.0F)
    {
        /* Switch: '<S306>/Switch3' incorporates:
         *  Constant: '<S306>/MINFLOAT'
         *  Switch: '<S306>/Switch1'
         *  Switch: '<S306>/Switch2'
         */
        rtb_TmpSignalConversionAtVePLTR_a_LongAc = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S306>/Switch1' incorporates:
         *  Constant: '<S306>/Constant Value4'
         *  Switch: '<S306>/Switch2'
         *  Switch: '<S306>/Switch3'
         */
        rtb_TmpSignalConversionAtVePLTR_a_LongAc = 0.0F;
    }

    /* End of Switch: '<S306>/Switch1' */
    /* End of Outputs for SubSystem: '<S283>/Protected Division1' */

    /* Abs: '<S283>/Abs2' */
    rtb_Switch1_cp = fabsf(VePLTR_a_LongAccelFilt);

    /* Outputs for Atomic SubSystem: '<S283>/Digital Lowpass Reset Enabled3' */
    /* Switch: '<S286>/Switch1' incorporates:
     *  Constant: '<S292>/Calib'
     *  Product: '<S286>/Multiplication'
     *  Sum: '<S286>/Subtraction'
     *  Sum: '<S286>/Summation'
     *  UnitDelay: '<S283>/Unit Delay2'
     *  UnitDelay: '<S286>/Unit Delay'
     */
    PLTR_ac_DW.UnitDelay2_DSTATE = ((VePLTR_a_LatAccel_Processed -
        PLTR_ac_DW.UnitDelay_DSTATE_b) * KePLTR_k_LatAccelFiltCoeff) +
        PLTR_ac_DW.UnitDelay_DSTATE_b;

    /* Update for UnitDelay: '<S286>/Unit Delay' incorporates:
     *  UnitDelay: '<S283>/Unit Delay2'
     */
    PLTR_ac_DW.UnitDelay_DSTATE_b = PLTR_ac_DW.UnitDelay2_DSTATE;

    /* End of Outputs for SubSystem: '<S283>/Digital Lowpass Reset Enabled3' */

    /* Abs: '<S283>/Abs3' incorporates:
     *  UnitDelay: '<S283>/Unit Delay2'
     */
    rtb_Abs3 = fabsf(PLTR_ac_DW.UnitDelay2_DSTATE);

    /* Outputs for Atomic SubSystem: '<S283>/Digital Lowpass Reset Enabled1' */
    /* Switch: '<S284>/Switch1' incorporates:
     *  Constant: '<S293>/Calib'
     *  Product: '<S284>/Multiplication'
     *  Sum: '<S284>/Subtraction'
     *  Sum: '<S284>/Summation'
     *  UnitDelay: '<S283>/Unit Delay1'
     *  UnitDelay: '<S284>/Unit Delay'
     */
    PLTR_ac_DW.UnitDelay1_DSTATE = ((VePLTR_a_LongAccel_Processed -
        PLTR_ac_DW.UnitDelay_DSTATE_bc) * KePLTR_k_LongAccelFiltCoeff) +
        PLTR_ac_DW.UnitDelay_DSTATE_bc;

    /* Update for UnitDelay: '<S284>/Unit Delay' incorporates:
     *  UnitDelay: '<S283>/Unit Delay1'
     */
    PLTR_ac_DW.UnitDelay_DSTATE_bc = PLTR_ac_DW.UnitDelay1_DSTATE;

    /* End of Outputs for SubSystem: '<S283>/Digital Lowpass Reset Enabled1' */

    /* Outputs for Atomic SubSystem: '<S283>/Digital Lowpass Reset Enabled2' */
    /* S-Function (fcgen): '<S82>/FcnCallGen' incorporates:
     *  SubSystem: '<S82>/PLTI_ProcessInputs'
     */
    /* Switch: '<S285>/Switch1' incorporates:
     *  Constant: '<S291>/Calib'
     *  Inport: '<S282>/VeCSVR_a_VehAccel'
     *  Product: '<S285>/Multiplication'
     *  Sum: '<S285>/Subtraction'
     *  Sum: '<S285>/Summation'
     *  UnitDelay: '<S283>/Unit Delay14'
     *  UnitDelay: '<S285>/Unit Delay'
     */
    PLTR_ac_DW.UnitDelay14_DSTATE = ((rtb_Maximum -
        PLTR_ac_DW.UnitDelay_DSTATE_fm) * KePLTR_k_AccelVehFiltCoeff) +
        PLTR_ac_DW.UnitDelay_DSTATE_fm;

    /* Update for UnitDelay: '<S285>/Unit Delay' incorporates:
     *  UnitDelay: '<S283>/Unit Delay14'
     */
    PLTR_ac_DW.UnitDelay_DSTATE_fm = PLTR_ac_DW.UnitDelay14_DSTATE;

    /* End of Outputs for SubSystem: '<S283>/Digital Lowpass Reset Enabled2' */

    /* Outputs for Atomic SubSystem: '<S283>/Hysteresis' */
    /* Switch: '<S289>/Switch1' incorporates:
     *  Constant: '<S289>/Constant Value'
     *  Lookup_n-D: '<S298>/Vector'
     *  Lookup_n-D: '<S300>/Vector'
     *  RelationalOperator: '<S289>/Greater  Than'
     *  RelationalOperator: '<S289>/Greater  Than1'
     *  SignalConversion generated from: '<S82>/OutTorqReqModHH_Read'
     *  SignalConversion generated from: '<S82>/VehSpd_Read'
     *  UnitDelay: '<S289>/Unit Delay'
     */
    if (rtb_Switch1_cp > look2_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVehSpd_ReadOutp,
             rtb_TmpSignalConversionAtOutTorqReqModHH, ((const float32 *)
            &(KxPLTR_K_RSP_LongAccel[0])), ((const float32 *)
            &(KyPLTR_K_RSP_LongAccel[0])), ((const float32 *)
            &(KtPLTR_K_RSP_LongAccel[0])), PLTR_ac_ConstP.pooled8, 5U))
    {
        PLTR_ac_DW.UnitDelay_DSTATE_hz = true;
    }
    else
    {
        PLTR_ac_DW.UnitDelay_DSTATE_hz = ((rtb_Switch1_cp >=
            look2_iflf_binlca_16a(rtb_TmpSignalConversionAtVehSpd_ReadOutp,
            rtb_TmpSignalConversionAtOutTorqReqModHH, ((const float32 *)
            &(KxPLTR_K_LSP_LongAccel[0])), ((const float32 *)
            &(KyPLTR_K_LSP_LongAccel[0])), ((const float32 *)
            &(KtPLTR_K_LSP_LongAccel[0])), PLTR_ac_ConstP.pooled8, 5U)) &&
            (PLTR_ac_DW.UnitDelay_DSTATE_hz));
    }

    /* End of Switch: '<S289>/Switch1' */
    /* End of Outputs for SubSystem: '<S283>/Hysteresis' */

    /* Outputs for Atomic SubSystem: '<S283>/Hysteresis1' */
    /* Switch: '<S290>/Switch1' incorporates:
     *  Constant: '<S290>/Constant Value'
     *  Lookup_n-D: '<S301>/Vector'
     *  Lookup_n-D: '<S302>/Vector'
     *  RelationalOperator: '<S290>/Greater  Than'
     *  RelationalOperator: '<S290>/Greater  Than1'
     *  SignalConversion generated from: '<S82>/VehSpd_Read'
     *  UnitDelay: '<S290>/Unit Delay'
     */
    if (rtb_Abs3 > look1_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVehSpd_ReadOutp, ((const float32 *)
            &(KxPLTR_v_LatAccelHysRSP[0])), ((const float32 *)
            &(KtPLTR_v_LatAccelHysRSP[0])), 4U))
    {
        PLTR_ac_DW.UnitDelay_DSTATE_ca = true;
    }
    else
    {
        PLTR_ac_DW.UnitDelay_DSTATE_ca = ((rtb_Abs3 >= look1_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVehSpd_ReadOutp, ((const float32 *)
            &(KxPLTR_v_LatAccelHysLSP[0])), ((const float32 *)
            &(KtPLTR_v_LatAccelHysLSP[0])), 4U)) &&
            (PLTR_ac_DW.UnitDelay_DSTATE_ca));
    }

    /* End of Switch: '<S290>/Switch1' */
    /* End of Outputs for SubSystem: '<S283>/Hysteresis1' */

    /* Logic: '<S283>/Logical1' incorporates:
     *  Logic: '<S283>/Logical2'
     *  UnitDelay: '<S289>/Unit Delay'
     *  UnitDelay: '<S290>/Unit Delay'
     */
    rtb_Equal1 = ((PLTR_ac_DW.UnitDelay_DSTATE_hz) &&
                  (!PLTR_ac_DW.UnitDelay_DSTATE_ca));

    /* Outputs for Atomic SubSystem: '<S283>/EdgeRising' */
    /* Logic: '<S287>/AND' incorporates:
     *  Logic: '<S287>/OR1'
     *  UnitDelay: '<S287>/Unit Delay'
     */
    rtb_AND_g0 = (rtb_Equal1 && (!PLTR_ac_DW.UnitDelay_DSTATE_jr));

    /* Update for UnitDelay: '<S287>/Unit Delay' */
    PLTR_ac_DW.UnitDelay_DSTATE_jr = rtb_Equal1;

    /* End of Outputs for SubSystem: '<S283>/EdgeRising' */

    /* Switch: '<S307>/Switch2' incorporates:
     *  Switch: '<S307>/Switch3'
     *  UnitDelay: '<S283>/Unit Delay'
     *  UnitDelay: '<S307>/Unit Delay'
     */
    if (rtb_AND_g0)
    {
        PLTR_ac_DW.UnitDelay_DSTATE_e = PLTR_ac_DW.UnitDelay_DSTATE_f;

        /* Switch: '<S307>/Switch1' incorporates:
         *  Constant: '<S307>/Constant Value4'
         *  UnitDelay: '<S283>/Unit Delay'
         *  UnitDelay: '<S307>/Unit Delay'
         *  UnitDelay: '<S307>/Unit Delay3'
         */
        PLTR_ac_DW.UnitDelay3_DSTATE = 0.0F;
    }
    else
    {
        /* MinMax: '<S307>/Maximum' incorporates:
         *  Constant: '<S288>/Calib'
         *  Constant: '<S294>/Calib'
         */
        rtb_Maximum = fmaxf(HePLTR_t_MedTEB, KePLTR_t_BlendForLongAccel);

        /* Outputs for Atomic SubSystem: '<S307>/Protected Division' */
        /* Switch: '<S308>/Switch1' incorporates:
         *  Constant: '<S288>/Calib'
         *  Constant: '<S308>/Constant Value'
         *  Constant: '<S308>/Constant Value1'
         *  Constant: '<S308>/Constant Value2'
         *  Constant: '<S308>/Constant Value3'
         *  Logic: '<S308>/AND'
         *  RelationalOperator: '<S308>/Greater Than or Equal '
         *  RelationalOperator: '<S308>/Greater Than or Equal 1'
         *  RelationalOperator: '<S308>/Not Equal'
         *  RelationalOperator: '<S308>/Not Equal1'
         *  Switch: '<S308>/Switch2'
         *  Switch: '<S308>/Switch3'
         */
        if ((HePLTR_t_MedTEB != 0.0F) && (rtb_Maximum != 0.0F))
        {
            /* Switch: '<S308>/Switch1' incorporates:
             *  Product: '<S308>/Division'
             */
            rtb_Maximum = HePLTR_t_MedTEB / rtb_Maximum;
        }
        else if (HePLTR_t_MedTEB > 0.0F)
        {
            /* Switch: '<S308>/Switch2' incorporates:
             *  Constant: '<S308>/MAXFLOAT'
             *  Switch: '<S308>/Switch1'
             */
            rtb_Maximum = 3.402823466E+38F;
        }
        else if (HePLTR_t_MedTEB < 0.0F)
        {
            /* Switch: '<S308>/Switch3' incorporates:
             *  Constant: '<S308>/MINFLOAT'
             *  Switch: '<S308>/Switch1'
             *  Switch: '<S308>/Switch2'
             */
            rtb_Maximum = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S308>/Switch1' incorporates:
             *  Constant: '<S308>/Constant Value4'
             *  Switch: '<S308>/Switch2'
             *  Switch: '<S308>/Switch3'
             */
            rtb_Maximum = 0.0F;
        }

        /* End of Switch: '<S308>/Switch1' */
        /* End of Outputs for SubSystem: '<S307>/Protected Division' */

        /* Switch: '<S307>/Switch1' incorporates:
         *  Constant: '<S307>/Constant Value2'
         *  Constant: '<S307>/Constant Value3'
         *  MinMax: '<S307>/MinMax'
         *  Sum: '<S307>/Summation1'
         *  UnitDelay: '<S307>/Unit Delay1'
         *  UnitDelay: '<S307>/Unit Delay3'
         */
        if (!PLTR_ac_DW.UnitDelay1_DSTATE_ov)
        {
            PLTR_ac_DW.UnitDelay3_DSTATE = 1.0F;
        }

        PLTR_ac_DW.UnitDelay3_DSTATE = fminf(PLTR_ac_DW.UnitDelay3_DSTATE +
            rtb_Maximum, 1.0F);
    }

    /* End of Switch: '<S307>/Switch2' */

    /* Signum: '<S283>/Signum' */
    if (rtb_TmpSignalConversionAtVePLTR_a_TransA < 0.0F)
    {
        rtb_Maximum = -1.0F;
    }
    else if (rtb_TmpSignalConversionAtVePLTR_a_TransA > 0.0F)
    {
        rtb_Maximum = 1.0F;
    }
    else
    {
        rtb_Maximum = rtb_TmpSignalConversionAtVePLTR_a_TransA;
    }

    /* End of Signum: '<S283>/Signum' */

    /* Sum: '<S283>/Subtract1' incorporates:
     *  Abs: '<S283>/Abs'
     *  Lookup_n-D: '<S295>/Vector'
     *  Lookup_n-D: '<S299>/Vector'
     *  Product: '<S283>/Product'
     *  SignalConversion generated from: '<S82>/OutTorqReqModHH_Read'
     *  UnitDelay: '<S283>/Unit Delay14'
     */
    VePLTR_phi_EstSlopeAngle_Raw = (look1_iflf_binlca_16a(fabsf
        (rtb_TmpSignalConversionAtVePLTR_a_TransA), ((const float32 *)
        &(KxPLTR_Cf_arcsintodeg[0])), ((const float32 *)&(KtPLTR_Cf_arcsintodeg
        [0])), 5U) * rtb_Maximum) + look2_iflf_binlca_16a
        (rtb_TmpSignalConversionAtOutTorqReqModHH, VePLTR_a_AccelWheelFilt, ((
           const float32 *)&(KxPLTR_K_Offset_ForPitch[0])), ((const float32 *)
          &(KyPLTR_K_Offset_ForPitch[0])), ((const float32 *)
          &(KtPLTR_K_Offset_ForPitch[0])), PLTR_ac_ConstP.pooled8, 5U);

    /* Outputs for Atomic SubSystem: '<S283>/Limiter' */
    /* Switch: '<S303>/Switch1' incorporates:
     *  Constant: '<S283>/Constant Value4'
     *  RelationalOperator: '<S303>/Relational Operator'
     */
    if (45.0F < VePLTR_phi_EstSlopeAngle_Raw)
    {
        /* Switch: '<S303>/Switch1' */
        VePLTR_phi_EstSlopeAngle_Raw = 45.0F;
    }

    /* End of Switch: '<S303>/Switch1' */

    /* Switch: '<S303>/Switch' incorporates:
     *  Constant: '<S283>/Constant Value5'
     *  RelationalOperator: '<S303>/Relational Operator1'
     */
    if (VePLTR_phi_EstSlopeAngle_Raw <= -45.0F)
    {
        /* Switch: '<S303>/Switch' */
        VePLTR_phi_EstSlopeAngle_Raw = -45.0F;
    }

    /* End of Switch: '<S303>/Switch' */
    /* End of Outputs for SubSystem: '<S283>/Limiter' */

    /* Switch: '<S283>/Switch' incorporates:
     *  UnitDelay: '<S283>/Unit Delay'
     */
    if (rtb_Equal1)
    {
        PLTR_ac_DW.UnitDelay_DSTATE_f = VePLTR_phi_EstSlopeAngle_Raw;
    }

    /* End of Switch: '<S283>/Switch' */

    /* Sum: '<S307>/Summation' incorporates:
     *  Constant: '<S307>/Constant Value'
     *  Product: '<S307>/Multiplication'
     *  Product: '<S307>/Multiplication3'
     *  Sum: '<S307>/Subtraction'
     *  UnitDelay: '<S283>/Unit Delay'
     *  UnitDelay: '<S307>/Unit Delay'
     *  UnitDelay: '<S307>/Unit Delay3'
     */
    rtb_TmpSignalConversionAtOutTorqReqModHH = ((1.0F -
        PLTR_ac_DW.UnitDelay3_DSTATE) * PLTR_ac_DW.UnitDelay_DSTATE_e) +
        (PLTR_ac_DW.UnitDelay3_DSTATE * PLTR_ac_DW.UnitDelay_DSTATE_f);

    /* Signum: '<S283>/Signum1' */
    if (rtb_TmpSignalConversionAtVePLTR_a_LongAc < 0.0F)
    {
        rtb_Maximum = -1.0F;
    }
    else if (rtb_TmpSignalConversionAtVePLTR_a_LongAc > 0.0F)
    {
        rtb_Maximum = 1.0F;
    }
    else
    {
        rtb_Maximum = rtb_TmpSignalConversionAtVePLTR_a_LongAc;
    }

    /* End of Signum: '<S283>/Signum1' */

    /* Product: '<S283>/Product1' incorporates:
     *  Abs: '<S283>/Abs1'
     *  Lookup_n-D: '<S296>/Vector'
     */
    rtb_Maximum *= look1_iflf_binlca_16a(fabsf
        (rtb_TmpSignalConversionAtVePLTR_a_LongAc), ((const float32 *)
        &(KxPLTR_Cf_arcsintodeg1[0])), ((const float32 *)
        &(KtPLTR_Cf_arcsintodeg1[0])), 5U);

    /* Outputs for Atomic SubSystem: '<S283>/Limiter1' */
    /* Switch: '<S304>/Switch1' incorporates:
     *  Constant: '<S283>/Constant Value2'
     *  RelationalOperator: '<S304>/Relational Operator'
     */
    if (45.0F < rtb_Maximum)
    {
        /* Switch: '<S304>/Switch1' */
        rtb_Maximum = 45.0F;
    }

    /* End of Switch: '<S304>/Switch1' */
    /* End of Outputs for SubSystem: '<S283>/Limiter1' */

    /* Update for UnitDelay: '<S307>/Unit Delay1' incorporates:
     *  Constant: '<S307>/TRUE Constant'
     */
    PLTR_ac_DW.UnitDelay1_DSTATE_ov = true;

    /* S-Function (fcgen): '<S82>/FcnCallGen' incorporates:
     *  SubSystem: '<S82>/PLTI_ProcessInputs'
     */
    /* Switch: '<S282>/Switch4' incorporates:
     *  Constant: '<S318>/Calib'
     *  Logic: '<S282>/Logical2'
     *  Merge: '<Root>/Merge_68'
     *  SignalConversion generated from: '<S82>/VePLTR_b_SpeedUnit_read'
     */
    if (HePLTR_b_SpeedUnitSwtchEnabl)
    {
        rtb_Equal1 = !Rte_IrvRead_PLTR_MedTEB_VePLTR_b_SpeedUnit_Init_write_IRV();
    }
    else
    {
        rtb_Equal1 = Rte_IrvRead_PLTR_MedTEB_VePLTR_b_SpeedUnit_Init_write_IRV();
    }

    /* End of Switch: '<S282>/Switch4' */
    /* End of Outputs for S-Function (fcgen): '<S82>/FcnCallGen' */

    /* Outport: '<Root>/VePLTR_b_SpeedUnit' incorporates:
     *  SignalConversion generated from: '<S82>/VePLTI_b_SpeedUnit'
     */
    (void)Rte_Write_VePLTR_b_SpeedUnit_Value(rtb_Equal1);

    /* S-Function (fcgen): '<S82>/FcnCallGen' incorporates:
     *  SubSystem: '<S82>/PLTC_Control_12p5ms'
     */
    /* Outport: '<Root>/VePLTR_Pct_EstSlopeAnglePct' incorporates:
     *  Lookup_n-D: '<S297>/Vector'
     *  SignalConversion generated from: '<S82>/VePLTR_Pct_EstSlopeAnglePct'
     *  Sum: '<S307>/Summation'
     */
    (void)Rte_Write_VePLTR_Pct_EstSlopeAnglePct_Value(look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtOutTorqReqModHH, ((const float32 *)
        &(KxPLTR_K_DegToPct[0])), ((const float32 *)&(KtPLTR_K_DegToPct[0])), 8U));

    /* S-Function (fcgen): '<S82>/FcnCallGen' incorporates:
     *  SubSystem: '<S82>/PLTI_ProcessInputs'
     */
    /* Outport: '<Root>/VePLTR_Pct_ProxiSpdomtrTol' incorporates:
     *  Inport: '<S282>/VePRXR_Pct_ProxiSpdomtrTol'
     *  SignalConversion generated from: '<S82>/VePLTR_Pct_ProxiSpdomtrTol'
     */
    (void)Rte_Write_VePLTR_Pct_ProxiSpdomtrTol_Value(tmpRead_h);

    /* S-Function (fcgen): '<S82>/FcnCallGen' incorporates:
     *  SubSystem: '<S82>/PLTC_Control_12p5ms'
     */
    /* Outport: '<Root>/VePLTR_b_CrsCntrlActv' incorporates:
     *  Logic: '<S281>/Logical3'
     *  Merge: '<Root>/Merge_77'
     *  Merge: '<Root>/Merge_91'
     *  SignalConversion generated from: '<S82>/VePLTR_b_CrsCntrlActv'
     *  SignalConversion generated from: '<S82>/VePLTR_b_ACCEnbld_read'
     *  SignalConversion generated from: '<S82>/VePLTR_b_CrsCntrlActv_read'
     */
    (void)Rte_Write_VePLTR_b_CrsCntrlActv_Value
        ((Rte_IrvRead_PLTR_MedTEB_VePLTR_b_CrsCntrlActv_write_IRV()) ||
         (Rte_IrvRead_PLTR_MedTEB_VePLTR_b_ACCEnbledInit_write_IRV()));

    /* Outport: '<Root>/VePLTR_b_EstRollAngleAtZeroSpdFA' incorporates:
     *  Logic: '<S281>/Logical2'
     *  Merge: '<Root>/Merge_14'
     *  Merge: '<Root>/Merge_46'
     *  SignalConversion generated from: '<S82>/VePLTR_b_EstRollAngleAtZeroSpdFA'
     *  SignalConversion generated from: '<S82>/VePLTR_b_TransAccelFA_read'
     *  SignalConversion generated from: '<S82>/VePLTR_b_TransAccelOffsetFA_read'
     */
    (void)Rte_Write_VePLTR_b_EstRollAngleAtZeroSpdFA_Value
        ((Rte_IrvRead_PLTR_MedTEB_VePLTR_b_TransAccelFA_write_IRV()) ||
         (Rte_IrvRead_PLTR_MedTEB_VePLTR_b_TransAccelOffsetFA_write_IRV()));

    /* End of Outputs for S-Function (fcgen): '<S82>/FcnCallGen' */

    /* S-Function (fcgen): '<S82>/FcnCallGen' incorporates:
     *  SubSystem: '<S82>/PLTI_ProcessInputs'
     */
    /* Outport: '<Root>/VePLTR_b_EstSlopeAngleFA' incorporates:
     *  Inport: '<S282>/VeCSVR_b_VehSpdFA'
     *  Logic: '<S281>/Logical1'
     *  Merge: '<Root>/Merge_24_Irv'
     *  Merge: '<Root>/Merge_39'
     *  SignalConversion generated from: '<S82>/VePLTR_b_EstSlopeAngleFA'
     *  SignalConversion generated from: '<S82>/VePLTR_b_LongAccelFA_read'
     *  SignalConversion generated from: '<S82>/VePLTR_b_LongAccelOffsetFA_read'
     */
    (void)Rte_Write_VePLTR_b_EstSlopeAngleFA_Value
        (((Rte_IrvRead_PLTR_MedTEB_VePLTR_b_LongAccelFA_write_IRV()) ||
          (Rte_IrvRead_PLTR_MedTEB_VePLTR_b_LongAccelOffsetFA_write_IRV())) ||
         tmpRead);

    /* Outport: '<Root>/VePLTR_b_Hill_Des_Stat_Prx' incorporates:
     *  Inport: '<S282>/VePRXR_b_Hill_Des_Stat_Prx'
     *  SignalConversion generated from: '<S82>/VePLTR_b_Hill_Des_Stat_Prx'
     */
    (void)Rte_Write_VePLTR_b_Hill_Des_Stat_Prx_Value(tmpRead_8);

    /* Outport: '<Root>/VePLTR_b_ProxiCADM' incorporates:
     *  Inport: '<S282>/VePRXR_b_ProxiCADM'
     *  SignalConversion generated from: '<S82>/VePLTR_b_ProxiCADM'
     */
    (void)Rte_Write_VePLTR_b_ProxiCADM_Value(tmpRead_6);

    /* Outport: '<Root>/VePLTR_b_ProxiCADM2' incorporates:
     *  Inport: '<S282>/VePRXR_b_ProxiCADM2'
     *  SignalConversion generated from: '<S82>/VePLTR_b_ProxiCADM2'
     */
    (void)Rte_Write_VePLTR_b_ProxiCADM2_Value(tmpRead_7);

    /* Outport: '<Root>/VePLTR_b_ProxiCC' incorporates:
     *  Inport: '<S282>/VePRXR_b_ProxiCC'
     *  SignalConversion generated from: '<S82>/VePLTR_b_ProxiCC'
     */
    (void)Rte_Write_VePLTR_b_ProxiCC_Value(tmpRead_1);

    /* Outport: '<Root>/VePLTR_b_ProxiNAVPrsnc' incorporates:
     *  Inport: '<S282>/VePRXR_b_ProxiNavPrsnc'
     *  SignalConversion generated from: '<S82>/VePLTR_b_ProxiNAVPrsnc'
     */
    (void)Rte_Write_VePLTR_b_ProxiNAVPrsnc_Value(tmpRead_3);

    /* Outport: '<Root>/VePLTR_b_ProxiSpdLimiter' incorporates:
     *  Inport: '<S282>/VePRXR_b_ProxiSpdLimiter'
     *  SignalConversion generated from: '<S82>/VePLTR_b_ProxiSpdLimiter'
     */
    (void)Rte_Write_VePLTR_b_ProxiSpdLimiter_Value(tmpRead_2);

    /* Outport: '<Root>/VePLTR_b_ProxiTrafficSignRcgntn' incorporates:
     *  Inport: '<S282>/VePRXR_b_ProxiTrafficSignRcgntn'
     *  SignalConversion generated from: '<S82>/VePLTR_b_ProxiTrafficSignRcgntn'
     */
    (void)Rte_Write_VePLTR_b_ProxiTrafficSignRcgntn_Value(tmpRead_4);

    /* Outport: '<Root>/VePLTR_b_RRCCPROXI' incorporates:
     *  Inport: '<S282>/VePRXR_b_RRCCPROXI'
     *  SignalConversion generated from: '<S82>/VePLTR_b_RRCCPROXI'
     */
    (void)Rte_Write_VePLTR_b_RRCCPROXI_Value(tmpRead_5);

    /* Outport: '<Root>/VePLTR_e_ProxiACC' incorporates:
     *  DataTypeConversion: '<S312>/DataTypeConversion'
     *  Inport: '<Root>/VePRXR_e_ProxiACC'
     *  SignalConversion generated from: '<S82>/VePLTR_e_ProxiACC'
     */
    (void)Rte_Write_VePLTR_e_ProxiACC_Value((TePLTR_e_AdaptiveCruiseCtrl)
        tmpRead_b);

    /* Outport: '<Root>/VePLTR_e_ProxiIncreasingSpdCnst' incorporates:
     *  DataTypeConversion: '<S313>/DataTypeConversion'
     *  Inport: '<Root>/VePRXR_e_ProxiIncreasingSpdCnst'
     *  SignalConversion generated from: '<S82>/VePLTR_e_ProxiIncreasingSpdCnst'
     */
    (void)Rte_Write_VePLTR_e_ProxiIncreasingSpdCnst_Value
        ((TePLTR_e_IncreasingSpdConst)tmpRead_c);

    /* Outport: '<Root>/VePLTR_e_Proxi_Autonomy_Lvl' incorporates:
     *  DataTypeConversion: '<S316>/DataTypeConversion'
     *  Inport: '<Root>/VePRXR_e_Proxi_Autonomy_Lvl'
     *  SignalConversion generated from: '<S82>/VePLTR_e_Proxi_Autonomy_Lvl'
     */
    (void)Rte_Write_VePLTR_e_Proxi_Autonomy_Lvl_Value((TePLTR_e_Autonomy_Lvl)
        tmpRead_f);

    /* Outport: '<Root>/VePLTR_e_Proxi_CC_Logic' incorporates:
     *  DataTypeConversion: '<S317>/DataTypeConversion'
     *  Inport: '<Root>/VePRXR_e_Proxi_CC_Logic'
     *  SignalConversion generated from: '<S82>/VePLTR_e_Proxi_CC_Logic'
     */
    (void)Rte_Write_VePLTR_e_Proxi_CC_Logic_Value((TePLTR_e_Cruise_Control_Logic)
        tmpRead_g);

    /* Outport: '<Root>/VePLTR_e_ProxyHybridType' incorporates:
     *  DataTypeConversion: '<S314>/DataTypeConversion'
     *  Inport: '<Root>/VePRXR_e_ProxyHybridType'
     *  SignalConversion generated from: '<S82>/VePLTR_e_ProxyHybridType'
     */
    (void)Rte_Write_VePLTR_e_ProxyHybridType_Value((TePLTR_e_HybridType)
        tmpRead_d);

    /* Outport: '<Root>/VePLTR_e_ShiftIndSt' incorporates:
     *  DataTypeConversion: '<S311>/DataTypeConversion'
     *  Inport: '<Root>/VePRXR_e_ShiftIndSt'
     *  SignalConversion generated from: '<S82>/VePLTR_e_ShiftIndSt'
     */
    (void)Rte_Write_VePLTR_e_ShiftIndSt_Value((TePLTR_e_ShiftIndSt)tmpRead_a);

    /* Outport: '<Root>/VePLTR_e_VehCategory' incorporates:
     *  DataTypeConversion: '<S315>/DataTypeConversion'
     *  Inport: '<Root>/VePRXR_e_VehCategory'
     *  SignalConversion generated from: '<S82>/VePLTR_e_VehCategory'
     */
    (void)Rte_Write_VePLTR_e_VehCategory_Value((TePLTR_e_VehCategory)tmpRead_e);

    /* Outport: '<Root>/VePLTR_e_VehicleCountryCode' incorporates:
     *  DataTypeConversion: '<S310>/DataTypeConversion'
     *  Inport: '<Root>/VePRXR_e_VehicleCountryCode'
     *  SignalConversion generated from: '<S82>/VePLTR_e_VehicleCountryCode'
     */
    (void)Rte_Write_VePLTR_e_VehicleCountryCode_Value
        ((TePLTR_e_VehicleCountryCode)tmpRead_9);

    /* S-Function (fcgen): '<S82>/FcnCallGen' incorporates:
     *  SubSystem: '<S82>/PLTC_Control_12p5ms'
     */
    /* Outputs for Atomic SubSystem: '<S283>/Limiter1' */
    /* Switch: '<S304>/Switch' incorporates:
     *  Constant: '<S283>/Constant Value8'
     *  RelationalOperator: '<S304>/Relational Operator1'
     */
    if (rtb_Maximum <= -45.0F)
    {
        rtb_Maximum = -45.0F;
    }

    /* End of Switch: '<S304>/Switch' */
    /* End of Outputs for SubSystem: '<S283>/Limiter1' */
    /* End of Outputs for S-Function (fcgen): '<S82>/FcnCallGen' */

    /* Outport: '<Root>/VePLTR_phi_EstRollAngleAtZeroSpd' incorporates:
     *  SignalConversion generated from: '<S82>/VePLTR_phi_EstRollAngleAtZeroSpd'
     */
    (void)Rte_Write_VePLTR_phi_EstRollAngleAtZeroSpd_Value(rtb_Maximum);

    /* Outport: '<Root>/VePLTR_phi_EstSlopeAngle' incorporates:
     *  SignalConversion generated from: '<S82>/VePLTR_phi_EstSlopeAngle'
     */
    (void)Rte_Write_VePLTR_phi_EstSlopeAngle_Value
        (rtb_TmpSignalConversionAtOutTorqReqModHH);

    /* S-Function (fcgen): '<S82>/FcnCallGen' incorporates:
     *  SubSystem: '<S82>/PLTI_ProcessInputs'
     */
    /* Outport: '<Root>/VePLTR_v_HomSpdLim' incorporates:
     *  Inport: '<S282>/VePRXR_v_HomSpdLim'
     *  SignalConversion generated from: '<S82>/VePLTR_v_HomSpdLim'
     */
    (void)Rte_Write_VePLTR_v_HomSpdLim_Value(tmpRead_i);

    /* End of Outputs for S-Function (fcgen): '<S82>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Model step function for TID2 */
FUNC(void, PLTR_CODE) PLTR_MedTED(void) /* Explicit Task: MedTED */
{
    /* local block i/o variables */
    boolean rtb_DriverDetected_write_IRV;
    TePLTR_e_DrvrSeatSnsrSts rtb_Switch2_lh_tmp;
    TeTRGR_e_AutoPosCorrMd tmp;
    TeTRGR_e_TransRangeState rtb_TmpSignalConversionAtVePLTR_e_Prmry_;
    TeTRGR_e_TransRangeState rtb_TmpSignalConversionAtVePLTR_e_Scnd_k;
    TeTRGR_e_TransRangeState tmpRead_1;
    boolean rtb_TmpSignalConversionAtVePLTR_b_DoorFa;
    boolean rtb_TmpSignalConversionAtVePLTR_b_Prmry_;
    boolean rtb_TmpSignalConversionAtVePLTR_b_Scnd_b;
    boolean rtb_TmpSignalConversionAtVePLTR_b_Scnd_f;
    boolean tmpRead;
    boolean tmpRead_0;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/PLTR_MedTED'
     */
    /* SignalConversion generated from: '<S83>/DriverDetected_read' incorporates:
     *  Merge: '<Root>/Merge_138_Irv'
     */
    rtb_DriverDetected_write_IRV =
        Rte_IrvRead_PLTR_MedTED_DriverDetected_write_IRV();

    /* SignalConversion generated from: '<S83>/VePLTR_e_Prmry_TransShiftPstn_read' incorporates:
     *  Merge: '<Root>/Merge_132_Irv'
     */
    rtb_TmpSignalConversionAtVePLTR_e_Prmry_ =
        Rte_IrvRead_PLTR_MedTED_TransShiftPosInitMSG_write_IRV();

    /* SignalConversion generated from: '<S83>/VePLTR_b_Prmry_TransShiftPstnFA_read' incorporates:
     *  Merge: '<Root>/Merge_133_Irv'
     */
    rtb_TmpSignalConversionAtVePLTR_b_Prmry_ =
        Rte_IrvRead_PLTR_MedTED_VePLTR_b_Prmry_TransShiftPstnFA_write_IRV();

    /* SignalConversion generated from: '<S83>/VePLTR_e_Scndry_TransShiftPstn_read' incorporates:
     *  Merge: '<Root>/Merge_127_Irv'
     */
    rtb_TmpSignalConversionAtVePLTR_e_Scnd_k =
        Rte_IrvRead_PLTR_MedTED_TransShiftPos_InitMSG_write_IRV();

    /* SignalConversion generated from: '<S83>/VePLTR_b_Scndry_TransShiftPstnFA_read' incorporates:
     *  Merge: '<Root>/Merge_128_Irv'
     */
    rtb_TmpSignalConversionAtVePLTR_b_Scnd_b =
        Rte_IrvRead_PLTR_MedTED_VePLTR_b_Scndry_TransShiftPstnFA_write_IRV();

    /* SignalConversion generated from: '<S83>/VePLTR_b_DoorFailSts_read' incorporates:
     *  Merge: '<Root>/Merge_74'
     */
    rtb_TmpSignalConversionAtVePLTR_b_DoorFa =
        Rte_IrvRead_PLTR_MedTED_VePLTR_b_DoorFailSts_Init_write_IRV();

    /* SignalConversion generated from: '<S83>/VePLTR_b_Prmry_AutoPosCorrMdFA_read' incorporates:
     *  Merge: '<Root>/Merge_117'
     */
    VePLTR_b_AutoPosCorrMdFA =
        Rte_IrvRead_PLTR_MedTED_VePLTR_b_Prmry_AutoPosCorrMdFA_write_IRV();

    /* SignalConversion generated from: '<S83>/VePLTR_b_Scndry_AutoPosCorrMdFA_read' incorporates:
     *  Merge: '<Root>/Merge_106'
     */
    rtb_TmpSignalConversionAtVePLTR_b_Scnd_f =
        Rte_IrvRead_PLTR_MedTED_VePLTR_b_Scndry_AutoPosCorrMdFA_write_IRV();

    /* S-Function (fcgen): '<S83>/FcnCallGen' incorporates:
     *  SubSystem: '<S83>/CANBus_RationalizationFUNC'
     */
    /* Logic: '<S334>/Logical1' incorporates:
     *  Constant: '<S360>/Calib'
     */
    VePLTI_b_Prmry_Fail = ((rtb_TmpSignalConversionAtVePLTR_b_Prmry_ ||
                            (VePLTR_b_AutoPosCorrMdFA)) ||
                           (KePLTR_b_Prmry_Flt_Ovrd));

    /* Logic: '<S334>/Logical2' incorporates:
     *  Constant: '<S363>/Calib'
     */
    VePLTI_b_Scndry_Fail = ((rtb_TmpSignalConversionAtVePLTR_b_Scnd_b ||
        rtb_TmpSignalConversionAtVePLTR_b_Scnd_f) || (KePLTR_b_Scndry_Flt_Ovrd));

    /* Logic: '<S334>/Logical' incorporates:
     *  Logic: '<S334>/Logical3'
     *  Logic: '<S334>/Logical7'
     */
    VePLTI_b_TransShiftPstnPrmryFlt = ((VePLTI_b_Prmry_Fail) &&
        (!VePLTI_b_Scndry_Fail));

    /* Logic: '<S334>/Logical4' incorporates:
     *  Logic: '<S334>/Logical6'
     *  Logic: '<S334>/Logical9'
     */
    VePLTI_b_TransShiftPstnScndryFlt = ((!VePLTI_b_Prmry_Fail) &&
        (VePLTI_b_Scndry_Fail));

    /* Logic: '<S334>/Logical5' incorporates:
     *  Logic: '<S334>/Logical10'
     *  Logic: '<S334>/Logical20'
     *  Logic: '<S334>/Logical35'
     *  Logic: '<S334>/Logical40'
     *  Logic: '<S334>/Logical45'
     *  Logic: '<S334>/Logical50'
     *  Logic: '<S334>/Logical60'
     *  Logic: '<S334>/Logical65'
     *  Switch: '<S350>/Switch1'
     *  Switch: '<S350>/Switch2'
     *  Switch: '<S351>/Switch1'
     *  Switch: '<S351>/Switch2'
     *  Switch: '<S353>/Switch1'
     *  Switch: '<S353>/Switch2'
     *  Switch: '<S354>/Switch1'
     *  Switch: '<S354>/Switch2'
     *  Switch: '<S355>/Switch1'
     *  Switch: '<S355>/Switch2'
     *  Switch: '<S356>/Switch1'
     *  Switch: '<S356>/Switch2'
     *  Switch: '<S358>/Switch1'
     *  Switch: '<S358>/Switch2'
     */
    VePLTI_b_TransShiftPstnBusFlt = ((VePLTI_b_Prmry_Fail) &&
        (VePLTI_b_Scndry_Fail));

    /* Logic: '<S334>/Logical7' */
    VePLTI_b_TransShiftPstnFAPrmryFlt = VePLTI_b_TransShiftPstnPrmryFlt;

    /* Logic: '<S334>/Logical9' */
    VePLTI_b_TransShiftPstnFAScndryFlt = VePLTI_b_TransShiftPstnScndryFlt;

    /* Logic: '<S334>/Logical10' */
    VePLTI_b_TransShiftPstnFABusFlt = VePLTI_b_TransShiftPstnBusFlt;

    /* Switch: '<S353>/Switch1' incorporates:
     *  Logic: '<S334>/Logical17'
     *  Logic: '<S334>/Logical18'
     *  Logic: '<S334>/Logical19'
     *  Logic: '<S334>/Logical21'
     *  Switch: '<S353>/Switch2'
     */
    if ((VePLTI_b_Prmry_Fail) && (!VePLTI_b_Scndry_Fail))
    {
        /* Switch: '<S353>/Switch1' */
        VePLTR_b_AutoPosCorrMdFA = rtb_TmpSignalConversionAtVePLTR_b_Scnd_f;
    }
    else
    {
        if ((VePLTI_b_Prmry_Fail) || (!VePLTI_b_Scndry_Fail))
        {
            /* Switch: '<S353>/Switch1' incorporates:
             *  Switch: '<S353>/Switch2'
             *  Switch: '<S353>/Switch3'
             */
            VePLTR_b_AutoPosCorrMdFA = ((VePLTI_b_TransShiftPstnBusFlt) ||
                (VePLTR_b_AutoPosCorrMdFA));
        }
    }

    /* Switch: '<S349>/Switch1' incorporates:
     *  Switch: '<S349>/Switch2'
     */
    if (VePLTI_b_TransShiftPstnFAPrmryFlt)
    {
        /* Gain: '<S365>/Gain' */
        VePLTR_b_ShiftPstnFA = rtb_TmpSignalConversionAtVePLTR_b_Scnd_b;
    }
    else if (VePLTI_b_TransShiftPstnFAScndryFlt)
    {
        /* Switch: '<S349>/Switch2' incorporates:
         *  Gain: '<S365>/Gain'
         */
        VePLTR_b_ShiftPstnFA = rtb_TmpSignalConversionAtVePLTR_b_Prmry_;
    }
    else
    {
        /* Gain: '<S365>/Gain' incorporates:
         *  Switch: '<S349>/Switch2'
         *  Switch: '<S349>/Switch3'
         */
        VePLTR_b_ShiftPstnFA = ((VePLTI_b_TransShiftPstnFABusFlt) ||
                                rtb_TmpSignalConversionAtVePLTR_b_Prmry_);
    }

    /* End of Switch: '<S349>/Switch1' */

    /* Logic: '<S334>/Logical75' incorporates:
     *  Constant: '<S361>/Calib'
     *  Merge: '<Root>/Merge_126'
     *  SignalConversion generated from: '<S83>/VePLTR_b_Prmry_ShiftLeverPositionReqFA_read'
     */
    VePLTI_b_Prmry_SC_Fail =
        ((Rte_IrvRead_PLTR_MedTED_VePLTR_b_Prmry_ShiftLeverPositionReqFA_write_IRV
          ()) || (KePLTR_b_Prmry_SC_Flt_Ovrd));

    /* Logic: '<S334>/Logical74' incorporates:
     *  Constant: '<S364>/Calib'
     *  Merge: '<Root>/Merge_118'
     *  SignalConversion generated from: '<S83>/VePLTR_b_Scndry_ShiftLeverPositionReqFA_read'
     */
    VePLTI_b_Scndry_SC_Fail =
        ((Rte_IrvRead_PLTR_MedTED_VePLTR_b_Scndry_ShiftLeverPositionReqFA_write_IRV
          ()) || (KePLTR_b_Scndry_SC_Flt_Ovrd));

    /* Logic: '<S334>/Logical73' incorporates:
     *  Constant: '<S359>/Calib'
     *  Merge: '<Root>/Merge_115'
     *  SignalConversion generated from: '<S83>/VePLTR_b_Prmry_ForceParkFA_read'
     */
    VePLTI_b_Prmry_BODY_RFHUB1_Fail =
        ((Rte_IrvRead_PLTR_MedTED_VePLTR_b_Prmry_ForceParkFA_write_IRV()) ||
         (KePLTR_b_Prmry_BODY_RFHUB1_Flt_Ovrd));

    /* Logic: '<S334>/Logical72' incorporates:
     *  Constant: '<S362>/Calib'
     *  Merge: '<Root>/Merge_104'
     *  SignalConversion generated from: '<S83>/VePLTR_b_Scndry_ForceParkFA_read'
     */
    VePLTI_b_Scndry_BODY_RFHUB1_Fail =
        ((Rte_IrvRead_PLTR_MedTED_VePLTR_b_Scndry_ForceParkFA_write_IRV()) ||
         (KePLTR_b_Scndry_BODY_RFHUB1_Flt_Ovrd));

    /* S-Function (fcgen): '<S83>/FcnCallGen' incorporates:
     *  SubSystem: '<S83>/Proc_CANBus'
     */
    /* Logic: '<S337>/Logical1' incorporates:
     *  Constant: '<S387>/Calib'
     *  Merge: '<Root>/Merge_134'
     *  Merge: '<Root>/Merge_136'
     *  SignalConversion generated from: '<S83>/VePLTR_b_Prmry_ManualModeFA_read'
     *  SignalConversion generated from: '<S83>/VePLTR_b_Prmry_PRND_ValidatePstnFA_read'
     */
    VePLTR_b_Prmry_Fail_MSG = (((rtb_TmpSignalConversionAtVePLTR_b_Prmry_ ||
        (Rte_IrvRead_PLTR_MedTED_VePLTR_b_Prmry_ManualModeFA_write_IRV())) ||
        (Rte_IrvRead_PLTR_MedTED_VePLTR_b_Prmry_PRND_ValidatePstnFA_write_IRV()))
        || (KePLTR_b_Prmry_Flt_Ovrd));

    /* Logic: '<S337>/Logical2' incorporates:
     *  Constant: '<S388>/Calib'
     *  Merge: '<Root>/Merge_130'
     *  SignalConversion generated from: '<S83>/VePLTR_b_Scndry_PRND_ValidatePstnFA_read'
     */
    VePLTR_b_Scndry_Fail_MSG =
        (((Rte_IrvRead_PLTR_MedTED_VePLTR_b_Scndry_PRND_ValidatePstnFA_write_IRV
           ()) || rtb_TmpSignalConversionAtVePLTR_b_Scnd_b) ||
         (KePLTR_b_Scndry_Flt_Ovrd));

    /* End of Outputs for S-Function (fcgen): '<S83>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeTRGR_e_VldtdTransRngSt' */
    (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value(&tmpRead_1);

    /* Inport: '<Root>/VeTRGR_b_BrakeFA' */
    (void)Rte_Read_VeTRGR_b_BrakeFA_Value(&tmpRead_0);

    /* Inport: '<Root>/VeTRGR_b_BrkApplied' */
    (void)Rte_Read_VeTRGR_b_BrkApplied_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/PLTR_MedTED'
     */
    /* S-Function (fcgen): '<S83>/FcnCallGen' incorporates:
     *  SubSystem: '<S83>/PLTI_ProcessInputs25ms'
     */
    /* Switch: '<S381>/Switch1' incorporates:
     *  Merge: '<Root>/Merge_47_Irv'
     *  SignalConversion generated from: '<S83>/VePLTR_b_DrvDrAjar_read'
     */
    VePLTR_b_DrvrDoorOpen = (rtb_TmpSignalConversionAtVePLTR_b_DoorFa ||
        (Rte_IrvRead_PLTR_MedTED_VePLTR_b_DrvDrAjar_write_IRV()));

    /* Switch: '<S380>/Switch1' incorporates:
     *  Logic: '<S336>/Logical2'
     *  Merge: '<Root>/Merge_17'
     *  SignalConversion generated from: '<S83>/VePLTR_b_DriverSeatBeltStsFA_read'
     */
    if (!Rte_IrvRead_PLTR_MedTED_VePLTR_b_DriverSeatBeltStsFA_write_IRV())
    {
        /* RelationalOperator: '<S335>/Comparison7' incorporates:
         *  Merge: '<Root>/Merge_19'
         *  SignalConversion generated from: '<S83>/VePLTR_e_DriverSeatBeltSts_read'
         *  Switch: '<S380>/Switch1'
         */
        VePLTI_e_SeatBeltSt =
            Rte_IrvRead_PLTR_MedTED_VePLTR_e_DriverSeatBeltSts_write_IRV();
    }
    else
    {
        /* RelationalOperator: '<S335>/Comparison7' incorporates:
         *  Constant: '<S379>/Constant'
         *  Switch: '<S380>/Switch1'
         */
        VePLTI_e_SeatBeltSt = CePLTR_e_SEATBELT_FAIL;
    }

    /* End of Switch: '<S380>/Switch1' */

    /* S-Function (fcgen): '<S83>/FcnCallGen' incorporates:
     *  SubSystem: '<S83>/PLTC_Control_25ms'
     */
    /* Switch: '<S335>/Switch2' incorporates:
     *  Constant: '<S377>/Calib'
     *  Logic: '<S335>/Logical14'
     *  Logic: '<S335>/Logical17'
     *  Logic: '<S335>/Logical18'
     *  Logic: '<S335>/Logical19'
     *  Merge: '<Root>/Merge_96'
     *  Merge: '<Root>/Merge_99'
     *  SignalConversion generated from: '<S83>/VePLTR_b_DrvrSeatSnsrFailSts_read'
     *  SignalConversion generated from: '<S83>/VePLTR_b_DrvrSeatSnsrSts_FA_read'
     *  Switch: '<S335>/Switch1'
     */
    if (((!Rte_IrvRead_PLTR_MedTED_VePLTR_b_DrvrSeatSnsrSts_FA_write_IRV()) && (
            !Rte_IrvRead_PLTR_MedTED_DrvrSeatSnsr_FailSts_Init_write_IRV())) &&
            (KePLTR_b_DrvrSeatSnsr_Avail))
    {
        /* RelationalOperator: '<S335>/Comparison4' incorporates:
         *  Merge: '<Root>/Merge_98'
         *  RelationalOperator: '<S335>/Comparison3'
         *  SignalConversion generated from: '<S83>/VePLTR_e_DrvrSeatSnsrSts_read'
         */
        rtb_Switch2_lh_tmp =
            Rte_IrvRead_PLTR_MedTED_DrvrSeatSnsrSts_Init_write_IRV();

        /* Switch: '<S335>/Switch2' incorporates:
         *  Constant: '<S368>/Constant'
         *  RelationalOperator: '<S335>/Comparison4'
         */
        rtb_TmpSignalConversionAtVePLTR_b_Scnd_b = (((uint32)rtb_Switch2_lh_tmp)
            == CePLTR_e_Drvr_NotPresent);

        /* Switch: '<S335>/Switch1' incorporates:
         *  Constant: '<S367>/Constant'
         *  RelationalOperator: '<S335>/Comparison3'
         */
        rtb_TmpSignalConversionAtVePLTR_b_DoorFa = (((uint32)rtb_Switch2_lh_tmp)
            == CePLTR_e_Drvr_Present);
    }
    else
    {
        /* Switch: '<S335>/Switch2' incorporates:
         *  Constant: '<S376>/Constant'
         *  Logic: '<S335>/Logical10'
         *  Logic: '<S335>/Logical12'
         *  Logic: '<S335>/Logical5'
         *  Merge: '<Root>/Merge_69_Irv2'
         *  Merge: '<Root>/Merge_69_Irv3'
         *  RelationalOperator: '<S335>/Comparison8'
         *  SignalConversion generated from: '<S83>/VePLTR_b_DriverDoorOnOffSts_FA_read'
         *  SignalConversion generated from: '<S83>/VePLTR_e_DriverDoorOnOffSts_read'
         */
        rtb_TmpSignalConversionAtVePLTR_b_Scnd_b = ((((VePLTR_b_DrvrDoorOpen) &&
            (!rtb_TmpSignalConversionAtVePLTR_b_DoorFa)) && (((uint32)
            Rte_IrvRead_PLTR_MedTED_VePLTR_e_DriverDoorOnOffSts_Init_IRV()) ==
            CePLTR_e_DOOR_ON)) &&
            (!Rte_IrvRead_PLTR_MedTED_VePLTR_b_DriverDoorOnOffSts_FA_IRV()));

        /* Logic: '<S335>/Logical16' incorporates:
         *  Logic: '<S335>/Logical6'
         */
        rtb_TmpSignalConversionAtVePLTR_b_DoorFa = !VePLTR_b_DrvrDoorOpen;

        /* Switch: '<S335>/Switch1' incorporates:
         *  Constant: '<S369>/Constant'
         *  Constant: '<S370>/Constant'
         *  Constant: '<S371>/Constant'
         *  Constant: '<S372>/Constant'
         *  Logic: '<S335>/Logical15'
         *  Logic: '<S335>/Logical16'
         *  Logic: '<S335>/Logical6'
         *  Logic: '<S378>/NOT'
         *  Logic: '<S378>/OR'
         *  Logic: '<S378>/OR1'
         *  RelationalOperator: '<S335>/Comparison10'
         *  RelationalOperator: '<S335>/Comparison5'
         *  RelationalOperator: '<S335>/Comparison6'
         *  RelationalOperator: '<S335>/Comparison7'
         *  SignalConversion generated from: '<S335>/DriverDetected_old'
         */
        rtb_TmpSignalConversionAtVePLTR_b_DoorFa =
            (((rtb_TmpSignalConversionAtVePLTR_b_DoorFa && (((uint32)
                 VePLTI_e_SeatBeltSt) == CePLTR_e_DRV_SEATBELT_OK)) && (((uint32)
                tmpRead_1) != CeTRGR_e_TransRangePark)) ||
             (((rtb_TmpSignalConversionAtVePLTR_b_DoorFa || (((uint32)
                  VePLTI_e_SeatBeltSt) != CePLTR_e_DRV_SEATBELT_NOK)) ||
               (((uint32)tmpRead_1) != CeTRGR_e_TransRangePark)) &&
              rtb_DriverDetected_write_IRV));
    }

    /* End of Switch: '<S335>/Switch2' */

    /* S-Function (fcgen): '<S83>/FcnCallGen' incorporates:
     *  SubSystem: '<S83>/CANBus_RationalizationFUNC'
     */
    /* Switch: '<S347>/Switch1' incorporates:
     *  Logic: '<S334>/Logical12'
     *  Logic: '<S334>/Logical13'
     *  Logic: '<S334>/Logical14'
     *  Logic: '<S334>/Logical15'
     *  Logic: '<S334>/Logical16'
     *  Merge: '<Root>/Merge_105'
     *  Merge: '<Root>/Merge_116'
     *  SignalConversion generated from: '<S83>/VePLTR_e_Prmry_AutoPosCorrMd_read'
     *  SignalConversion generated from: '<S83>/VePLTR_e_Scndry_AutoPosCorrMd_read'
     *  Switch: '<S347>/Switch2'
     *  Switch: '<S347>/Switch3'
     */
    if ((VePLTI_b_Prmry_Fail) && (!VePLTI_b_Scndry_Fail))
    {
        tmp = Rte_IrvRead_PLTR_MedTED_AutoPosCorrMd_Ini_write_IRV();
    }
    else if ((!VePLTI_b_Prmry_Fail) && (VePLTI_b_Scndry_Fail))
    {
        /* Switch: '<S347>/Switch2' incorporates:
         *  Merge: '<Root>/Merge_116'
         *  SignalConversion generated from: '<S83>/VePLTR_e_Prmry_AutoPosCorrMd_read'
         */
        tmp = Rte_IrvRead_PLTR_MedTED_AutoPosCorrMd_Init_write_IRV();
    }
    else if ((VePLTI_b_Prmry_Fail) && (VePLTI_b_Scndry_Fail))
    {
        /* Switch: '<S347>/Switch3' incorporates:
         *  Constant: '<S338>/Constant'
         *  Switch: '<S347>/Switch2'
         */
        tmp = CeTRGR_e_AutoPosCorrMd_SNA;
    }
    else
    {
        tmp = Rte_IrvRead_PLTR_MedTED_AutoPosCorrMd_Init_write_IRV();
    }

    /* End of Switch: '<S347>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S83>/FcnCallGen' */

    /* Outport: '<Root>/VePLTR_e_AutoPosCorrMd' incorporates:
     *  SignalConversion generated from: '<S83>/AutoPosCorrMd'
     */
    (void)Rte_Write_VePLTR_e_AutoPosCorrMd_Value(tmp);

    /* S-Function (fcgen): '<S83>/FcnCallGen' incorporates:
     *  SubSystem: '<S83>/PLTC_Control_25ms'
     */
    /* S-Function (fcgen): '<S83>/FcnCallGen' incorporates:
     *  SubSystem: '<S83>/PLTI_ProcessInputs25ms'
     */
    /* Outport: '<Root>/VePLTR_b_DAI_Enbl' incorporates:
     *  Constant: '<S373>/Constant'
     *  Constant: '<S374>/Constant'
     *  Constant: '<S375>/Constant'
     *  Inport: '<S336>/VeTRGR_b_BrakeFA'
     *  Inport: '<S336>/VeTRGR_b_BrkApplied'
     *  Logic: '<S335>/Logical1'
     *  Logic: '<S335>/Logical2'
     *  Logic: '<S335>/Logical3'
     *  Logic: '<S335>/Logical4'
     *  RelationalOperator: '<S335>/Comparison1'
     *  RelationalOperator: '<S335>/Comparison17'
     *  RelationalOperator: '<S335>/Comparison2'
     *  SignalConversion generated from: '<S83>/DAI_Enbl'
     *  Switch: '<S380>/Switch1'
     */
    (void)Rte_Write_VePLTR_b_DAI_Enbl_Value((((!tmpRead) || tmpRead_0) &&
        (((((uint32)VePLTI_e_SeatBeltSt) == CePLTR_e_DRV_SEATBELT_NOK) ||
          (((uint32)VePLTI_e_SeatBeltSt) == CePLTR_e_SEATBELT_FAIL)) ||
         (((uint32)VePLTI_e_SeatBeltSt) == CePLTR_e_SEATBELT_SNA))) &&
        rtb_TmpSignalConversionAtVePLTR_b_Scnd_b);

    /* End of Outputs for S-Function (fcgen): '<S83>/FcnCallGen' */

    /* Outport: '<Root>/VePLTR_b_DriverDetected' incorporates:
     *  SignalConversion generated from: '<S83>/DriverDetected'
     */
    (void)Rte_Write_VePLTR_b_DriverDetected_Value
        (rtb_TmpSignalConversionAtVePLTR_b_DoorFa);

    /* S-Function (fcgen): '<S83>/FcnCallGen' incorporates:
     *  SubSystem: '<S83>/CANBus_RationalizationFUNC'
     */
    /* Switch: '<S348>/Switch1' incorporates:
     *  SignalConversion generated from: '<S83>/VePLTR_e_Prmry_TransShiftPstn_read'
     *  SignalConversion generated from: '<S83>/VePLTR_e_Scndry_TransShiftPstn_read'
     *  Switch: '<S348>/Switch2'
     *  Switch: '<S348>/Switch3'
     */
    if (VePLTI_b_TransShiftPstnPrmryFlt)
    {
        tmpRead_1 = rtb_TmpSignalConversionAtVePLTR_e_Scnd_k;
    }
    else if (VePLTI_b_TransShiftPstnScndryFlt)
    {
        /* Switch: '<S348>/Switch2' incorporates:
         *  SignalConversion generated from: '<S83>/VePLTR_e_Prmry_TransShiftPstn_read'
         */
        tmpRead_1 = rtb_TmpSignalConversionAtVePLTR_e_Prmry_;
    }
    else if (VePLTI_b_TransShiftPstnBusFlt)
    {
        /* Switch: '<S348>/Switch3' incorporates:
         *  Constant: '<S346>/Constant'
         *  Switch: '<S348>/Switch2'
         */
        tmpRead_1 = CeTRGR_e_TransRangeIllegal;
    }
    else
    {
        tmpRead_1 = rtb_TmpSignalConversionAtVePLTR_e_Prmry_;
    }

    /* End of Switch: '<S348>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S83>/FcnCallGen' */

    /* Outport: '<Root>/VePLTR_e_ESMTransRngSt' incorporates:
     *  SignalConversion generated from: '<S83>/ESMTransRngSt'
     */
    (void)Rte_Write_VePLTR_e_ESMTransRngSt_Value(tmpRead_1);

    /* Outport: '<Root>/VePLTR_y_GatedParkSwFlt' incorporates:
     *  Merge: '<Root>/Merge_102'
     *  SignalConversion generated from: '<S83>/GatedParkSWFA'
     *  SignalConversion generated from: '<S83>/VePLTR_e_GatedParkSw_FaultSts_read'
     */
    (void)Rte_Write_VePLTR_y_GatedParkSwFlt_Value
        (Rte_IrvRead_PLTR_MedTED_HWIO_GatedParkSWFault_write_IRV());

    /* S-Function (fcgen): '<S83>/FcnCallGen' incorporates:
     *  SubSystem: '<S83>/Proc_CANBus'
     */
    /* Outport: '<Root>/VePLTR_b_ManualMode' incorporates:
     *  Merge: '<Root>/Merge_131'
     *  SignalConversion generated from: '<S83>/ManualMd'
     *  SignalConversion generated from: '<S83>/VePLTR_b_Prmry_ManualMode_read'
     *  Switch: '<S384>/Switch1'
     */
    (void)Rte_Write_VePLTR_b_ManualMode_Value((!VePLTR_b_Prmry_Fail_MSG) &&
        (Rte_IrvRead_PLTR_MedTED_ManualMode_Init_write_IRV()));

    /* S-Function (fcgen): '<S83>/FcnCallGen' incorporates:
     *  SubSystem: '<S83>/CANBus_RationalizationFUNC'
     */
    /* Switch: '<S351>/Switch1' incorporates:
     *  Logic: '<S334>/Logical62'
     *  Logic: '<S334>/Logical63'
     *  Logic: '<S334>/Logical64'
     *  Logic: '<S334>/Logical66'
     *  Merge: '<Root>/Merge_112'
     *  Merge: '<Root>/Merge_119'
     *  SignalConversion generated from: '<S83>/VePLTR_b_Prmry_PRNDFailStsFA_read'
     *  SignalConversion generated from: '<S83>/VePLTR_b_Scndry_PRNDFailStsFA_read'
     *  Switch: '<S351>/Switch2'
     */
    if ((VePLTI_b_Prmry_Fail) && (!VePLTI_b_Scndry_Fail))
    {
        tmpRead_0 =
            Rte_IrvRead_PLTR_MedTED_VePLTR_b_Scndry_PRNDFailStsFA_write_IRV();
    }
    else if ((!VePLTI_b_Prmry_Fail) && (VePLTI_b_Scndry_Fail))
    {
        /* Switch: '<S351>/Switch2' incorporates:
         *  Merge: '<Root>/Merge_119'
         *  SignalConversion generated from: '<S83>/VePLTR_b_Prmry_PRNDFailStsFA_read'
         */
        tmpRead_0 =
            Rte_IrvRead_PLTR_MedTED_VePLTR_b_Prmry_PRNDFailStsFA_write_IRV();
    }
    else
    {
        tmpRead_0 = ((VePLTI_b_TransShiftPstnBusFlt) ||
                     (Rte_IrvRead_PLTR_MedTED_VePLTR_b_Prmry_PRNDFailStsFA_write_IRV
                      ()));
    }

    /* End of Outputs for S-Function (fcgen): '<S83>/FcnCallGen' */

    /* Outport: '<Root>/VePLTR_b_PRNDFailSts' incorporates:
     *  SignalConversion generated from: '<S83>/PRNDFailSts'
     */
    (void)Rte_Write_VePLTR_b_PRNDFailSts_Value(tmpRead_0);

    /* S-Function (fcgen): '<S83>/FcnCallGen' incorporates:
     *  SubSystem: '<S83>/Proc_CANBus'
     */
    /* Logic: '<S337>/Logical4' incorporates:
     *  Logic: '<S337>/Logical23'
     */
    tmpRead_0 = !VePLTR_b_Scndry_Fail_MSG;

    /* Switch: '<S385>/Switch1' incorporates:
     *  Logic: '<S337>/Logical3'
     *  Logic: '<S337>/Logical4'
     *  Logic: '<S337>/Logical5'
     *  Logic: '<S337>/Logical7'
     *  SignalConversion generated from: '<S83>/VePLTR_e_Scndry_TransShiftPstn_read'
     *  Switch: '<S385>/Switch2'
     */
    if ((VePLTR_b_Prmry_Fail_MSG) && tmpRead_0)
    {
        rtb_TmpSignalConversionAtVePLTR_e_Prmry_ =
            rtb_TmpSignalConversionAtVePLTR_e_Scnd_k;
    }
    else
    {
        if ((VePLTR_b_Prmry_Fail_MSG) || (!VePLTR_b_Scndry_Fail_MSG))
        {
            /* Switch: '<S385>/Switch3' incorporates:
             *  Constant: '<S383>/Constant'
             *  Logic: '<S337>/Logical6'
             *  Switch: '<S385>/Switch2'
             */
            if ((VePLTR_b_Prmry_Fail_MSG) && (VePLTR_b_Scndry_Fail_MSG))
            {
                rtb_TmpSignalConversionAtVePLTR_e_Prmry_ =
                    CeTRGR_e_TransRangeIllegal;
            }

            /* End of Switch: '<S385>/Switch3' */
        }
    }

    /* End of Switch: '<S385>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S83>/FcnCallGen' */

    /* Outport: '<Root>/VePLTR_e_RationalisedRngSt' incorporates:
     *  SignalConversion generated from: '<S83>/Proc_CANBus__ESMTransRngSt'
     */
    (void)Rte_Write_VePLTR_e_RationalisedRngSt_Value
        (rtb_TmpSignalConversionAtVePLTR_e_Prmry_);

    /* S-Function (fcgen): '<S83>/FcnCallGen' incorporates:
     *  SubSystem: '<S83>/CANBus_RationalizationFUNC'
     */
    /* Logic: '<S334>/Logical68' incorporates:
     *  Logic: '<S334>/Logical70'
     *  Switch: '<S352>/Switch1'
     *  Switch: '<S352>/Switch2'
     */
    tmpRead = !VePLTI_b_Scndry_BODY_RFHUB1_Fail;

    /* Switch: '<S352>/Switch1' incorporates:
     *  Logic: '<S334>/Logical67'
     *  Logic: '<S334>/Logical68'
     *  Merge: '<Root>/Merge_103'
     *  SignalConversion generated from: '<S83>/VePLTR_b_Scndry_RFHub_ForcePark_read'
     */
    if ((VePLTI_b_Prmry_BODY_RFHUB1_Fail) && tmpRead)
    {
        tmpRead = Rte_IrvRead_PLTR_MedTED_RFHUB_ForcePark_Init_PwrOn_1_IRV_IRV();
    }
    else
    {
        /* Logic: '<S334>/Logical71' incorporates:
         *  Logic: '<S334>/Logical70'
         *  Switch: '<S352>/Switch2'
         */
        rtb_TmpSignalConversionAtVePLTR_b_Scnd_b =
            !VePLTI_b_Prmry_BODY_RFHUB1_Fail;

        /* Switch: '<S352>/Switch2' incorporates:
         *  Logic: '<S334>/Logical69'
         *  Logic: '<S334>/Logical70'
         *  Logic: '<S334>/Logical71'
         *  Merge: '<Root>/Merge_114'
         *  SignalConversion generated from: '<S83>/VePLTR_b_Prmry_RFHub_ForcePark_read'
         */
        if (rtb_TmpSignalConversionAtVePLTR_b_Scnd_b &&
                (VePLTI_b_Scndry_BODY_RFHUB1_Fail))
        {
            tmpRead = Rte_IrvRead_PLTR_MedTED_RFHub_ForcePark_Init_write_IRV();
        }
        else
        {
            tmpRead = ((rtb_TmpSignalConversionAtVePLTR_b_Scnd_b || tmpRead) &&
                       (Rte_IrvRead_PLTR_MedTED_RFHub_ForcePark_Init_write_IRV()));
        }
    }

    /* End of Outputs for S-Function (fcgen): '<S83>/FcnCallGen' */

    /* Outport: '<Root>/VePLTR_b_RFHub_ForcePark' incorporates:
     *  SignalConversion generated from: '<S83>/RFHub_ForcePark'
     */
    (void)Rte_Write_VePLTR_b_RFHub_ForcePark_Value(tmpRead);

    /* S-Function (fcgen): '<S83>/FcnCallGen' incorporates:
     *  SubSystem: '<S83>/CANBus_RationalizationFUNC'
     */
    /* Switch: '<S356>/Switch1' incorporates:
     *  Logic: '<S334>/Logical47'
     *  Logic: '<S334>/Logical48'
     *  Logic: '<S334>/Logical49'
     *  Logic: '<S334>/Logical51'
     *  Merge: '<Root>/Merge_111'
     *  Merge: '<Root>/Merge_123'
     *  SignalConversion generated from: '<S83>/VePLTR_b_Prmry_RackDetentSensorFAFA_read'
     *  SignalConversion generated from: '<S83>/VePLTR_b_Scndry_RackDetentSensorFAFA_read'
     *  Switch: '<S356>/Switch2'
     */
    if ((VePLTI_b_Prmry_Fail) && (!VePLTI_b_Scndry_Fail))
    {
        tmpRead =
            Rte_IrvRead_PLTR_MedTED_VePLTR_b_Scndry_RackDetentSensorFAFA_write_IRV
            ();
    }
    else if ((!VePLTI_b_Prmry_Fail) && (VePLTI_b_Scndry_Fail))
    {
        /* Switch: '<S356>/Switch2' incorporates:
         *  Merge: '<Root>/Merge_123'
         *  SignalConversion generated from: '<S83>/VePLTR_b_Prmry_RackDetentSensorFAFA_read'
         */
        tmpRead =
            Rte_IrvRead_PLTR_MedTED_VePLTR_b_Prmry_RackDetentSensorFAFA_write_IRV
            ();
    }
    else
    {
        tmpRead = ((VePLTI_b_TransShiftPstnBusFlt) ||
                   (Rte_IrvRead_PLTR_MedTED_VePLTR_b_Prmry_RackDetentSensorFAFA_write_IRV
                    ()));
    }

    /* End of Outputs for S-Function (fcgen): '<S83>/FcnCallGen' */

    /* Outport: '<Root>/VePLTR_b_RackFaultFA' incorporates:
     *  SignalConversion generated from: '<S83>/RackDetentSensorFA'
     */
    (void)Rte_Write_VePLTR_b_RackFaultFA_Value(tmpRead);

    /* S-Function (fcgen): '<S83>/FcnCallGen' incorporates:
     *  SubSystem: '<S83>/CANBus_RationalizationFUNC'
     */
    /* Switch: '<S358>/Switch1' incorporates:
     *  Logic: '<S334>/Logical37'
     *  Logic: '<S334>/Logical38'
     *  Logic: '<S334>/Logical39'
     *  Logic: '<S334>/Logical41'
     *  Merge: '<Root>/Merge_108'
     *  Merge: '<Root>/Merge_121'
     *  SignalConversion generated from: '<S83>/VePLTR_b_Prmry_ShiftLockFAFA_read'
     *  SignalConversion generated from: '<S83>/VePLTR_b_Scndry_ShiftLockFAFA_read'
     *  Switch: '<S358>/Switch2'
     */
    if ((VePLTI_b_Prmry_Fail) && (!VePLTI_b_Scndry_Fail))
    {
        tmpRead =
            Rte_IrvRead_PLTR_MedTED_VePLTR_b_Scndry_ShiftLockFAFA_write_IRV();
    }
    else if ((!VePLTI_b_Prmry_Fail) && (VePLTI_b_Scndry_Fail))
    {
        /* Switch: '<S358>/Switch2' incorporates:
         *  Merge: '<Root>/Merge_121'
         *  SignalConversion generated from: '<S83>/VePLTR_b_Prmry_ShiftLockFAFA_read'
         */
        tmpRead = Rte_IrvRead_PLTR_MedTED_VePLTR_b_Prmry_ShiftLockFAFA_write_IRV
            ();
    }
    else
    {
        tmpRead = ((VePLTI_b_TransShiftPstnBusFlt) ||
                   (Rte_IrvRead_PLTR_MedTED_VePLTR_b_Prmry_ShiftLockFAFA_write_IRV
                    ()));
    }

    /* End of Outputs for S-Function (fcgen): '<S83>/FcnCallGen' */

    /* Outport: '<Root>/VePLTR_b_ShftLckFlt' incorporates:
     *  SignalConversion generated from: '<S83>/ShftLck_Flt'
     */
    (void)Rte_Write_VePLTR_b_ShftLckFlt_Value(tmpRead);

    /* S-Function (fcgen): '<S83>/FcnCallGen' incorporates:
     *  SubSystem: '<S83>/CANBus_RationalizationFUNC'
     */
    /* Switch: '<S355>/Switch1' incorporates:
     *  Logic: '<S334>/Logical42'
     *  Logic: '<S334>/Logical43'
     *  Logic: '<S334>/Logical44'
     *  Logic: '<S334>/Logical46'
     *  Merge: '<Root>/Merge_110'
     *  Merge: '<Root>/Merge_122'
     *  SignalConversion generated from: '<S83>/VePLTR_b_Prmry_ShiftSnsFAFA_read'
     *  SignalConversion generated from: '<S83>/VePLTR_b_Scndry_ShiftSnsFAFA_read'
     *  Switch: '<S355>/Switch2'
     */
    if ((VePLTI_b_Prmry_Fail) && (!VePLTI_b_Scndry_Fail))
    {
        tmpRead = Rte_IrvRead_PLTR_MedTED_VePLTR_b_Scndry_ShiftSnsFAFA_write_IRV
            ();
    }
    else if ((!VePLTI_b_Prmry_Fail) && (VePLTI_b_Scndry_Fail))
    {
        /* Switch: '<S355>/Switch2' incorporates:
         *  Merge: '<Root>/Merge_122'
         *  SignalConversion generated from: '<S83>/VePLTR_b_Prmry_ShiftSnsFAFA_read'
         */
        tmpRead = Rte_IrvRead_PLTR_MedTED_VePLTR_b_Prmry_ShiftSnsFAFA_write_IRV();
    }
    else
    {
        tmpRead = ((VePLTI_b_TransShiftPstnBusFlt) ||
                   (Rte_IrvRead_PLTR_MedTED_VePLTR_b_Prmry_ShiftSnsFAFA_write_IRV
                    ()));
    }

    /* End of Outputs for S-Function (fcgen): '<S83>/FcnCallGen' */

    /* Outport: '<Root>/VePLTR_b_ShftSnsFA' incorporates:
     *  SignalConversion generated from: '<S83>/ShftSnsFA'
     */
    (void)Rte_Write_VePLTR_b_ShftSnsFA_Value(tmpRead);

    /* S-Function (fcgen): '<S83>/FcnCallGen' incorporates:
     *  SubSystem: '<S83>/CANBus_RationalizationFUNC'
     */
    /* Switch: '<S354>/Switch1' incorporates:
     *  Logic: '<S334>/Logical32'
     *  Logic: '<S334>/Logical33'
     *  Logic: '<S334>/Logical34'
     *  Logic: '<S334>/Logical36'
     *  Merge: '<Root>/Merge_107'
     *  Merge: '<Root>/Merge_120'
     *  SignalConversion generated from: '<S83>/VePLTR_b_Prmry_ShifterDispFAFA_read'
     *  SignalConversion generated from: '<S83>/VePLTR_b_Scndry_ShifterDispFAFA_read'
     *  Switch: '<S354>/Switch2'
     */
    if ((VePLTI_b_Prmry_Fail) && (!VePLTI_b_Scndry_Fail))
    {
        tmpRead =
            Rte_IrvRead_PLTR_MedTED_VePLTR_b_Scndry_ShifterDispFAFA_write_IRV();
    }
    else if ((!VePLTI_b_Prmry_Fail) && (VePLTI_b_Scndry_Fail))
    {
        /* Switch: '<S354>/Switch2' incorporates:
         *  Merge: '<Root>/Merge_120'
         *  SignalConversion generated from: '<S83>/VePLTR_b_Prmry_ShifterDispFAFA_read'
         */
        tmpRead =
            Rte_IrvRead_PLTR_MedTED_VePLTR_b_Prmry_ShifterDispFAFA_write_IRV();
    }
    else
    {
        tmpRead = ((VePLTI_b_TransShiftPstnBusFlt) ||
                   (Rte_IrvRead_PLTR_MedTED_VePLTR_b_Prmry_ShifterDispFAFA_write_IRV
                    ()));
    }

    /* End of Outputs for S-Function (fcgen): '<S83>/FcnCallGen' */

    /* Outport: '<Root>/VePLTR_b_ShiftDspFlt' incorporates:
     *  SignalConversion generated from: '<S83>/ShiftDisp_Flt'
     */
    (void)Rte_Write_VePLTR_b_ShiftDspFlt_Value(tmpRead);

    /* S-Function (fcgen): '<S83>/FcnCallGen' incorporates:
     *  SubSystem: '<S83>/CANBus_RationalizationFUNC'
     */
    /* Switch: '<S350>/Switch1' incorporates:
     *  Logic: '<S334>/Logical57'
     *  Logic: '<S334>/Logical58'
     *  Logic: '<S334>/Logical59'
     *  Logic: '<S334>/Logical61'
     *  Merge: '<Root>/Merge_109'
     *  Merge: '<Root>/Merge_124'
     *  SignalConversion generated from: '<S83>/VePLTR_b_Prmry_ShiftLeverFailStsFA_read'
     *  SignalConversion generated from: '<S83>/VePLTR_b_Scndry_ShiftLeverFailStsFA_read'
     *  Switch: '<S350>/Switch2'
     */
    if ((VePLTI_b_Prmry_Fail) && (!VePLTI_b_Scndry_Fail))
    {
        tmpRead =
            Rte_IrvRead_PLTR_MedTED_VePLTR_b_Scndry_ShiftLeverFailStsFA_write_IRV
            ();
    }
    else if ((!VePLTI_b_Prmry_Fail) && (VePLTI_b_Scndry_Fail))
    {
        /* Switch: '<S350>/Switch2' incorporates:
         *  Merge: '<Root>/Merge_124'
         *  SignalConversion generated from: '<S83>/VePLTR_b_Prmry_ShiftLeverFailStsFA_read'
         */
        tmpRead =
            Rte_IrvRead_PLTR_MedTED_VePLTR_b_Prmry_ShiftLeverFailStsFA_write_IRV
            ();
    }
    else
    {
        tmpRead = ((VePLTI_b_TransShiftPstnBusFlt) ||
                   (Rte_IrvRead_PLTR_MedTED_VePLTR_b_Prmry_ShiftLeverFailStsFA_write_IRV
                    ()));
    }

    /* End of Outputs for S-Function (fcgen): '<S83>/FcnCallGen' */

    /* Outport: '<Root>/VePLTR_b_ShiftLeverFailSts' incorporates:
     *  SignalConversion generated from: '<S83>/ShiftLeverFailSts'
     */
    (void)Rte_Write_VePLTR_b_ShiftLeverFailSts_Value(tmpRead);

    /* S-Function (fcgen): '<S83>/FcnCallGen' incorporates:
     *  SubSystem: '<S83>/CANBus_RationalizationFUNC'
     */
    /* Switch: '<S357>/Switch1' incorporates:
     *  Logic: '<S334>/Logical52'
     *  Logic: '<S334>/Logical53'
     *  Logic: '<S334>/Logical54'
     *  Logic: '<S334>/Logical55'
     *  Logic: '<S334>/Logical56'
     *  Merge: '<Root>/Merge_113'
     *  Merge: '<Root>/Merge_125'
     *  SignalConversion generated from: '<S83>/VePLTR_e_Prmry_ShiftLeverPositionReq_read'
     *  SignalConversion generated from: '<S83>/VePLTR_e_Scndry_ShiftLeverPositionReq_read'
     *  Switch: '<S357>/Switch2'
     *  Switch: '<S357>/Switch3'
     */
    if ((VePLTI_b_Prmry_SC_Fail) && (!VePLTI_b_Scndry_SC_Fail))
    {
        tmpRead_1 = Rte_IrvRead_PLTR_MedTED_ShiftLeverPositionReq_Ini_write_IRV();
    }
    else if ((!VePLTI_b_Prmry_SC_Fail) && (VePLTI_b_Scndry_SC_Fail))
    {
        /* Switch: '<S357>/Switch2' incorporates:
         *  Merge: '<Root>/Merge_125'
         *  SignalConversion generated from: '<S83>/VePLTR_e_Prmry_ShiftLeverPositionReq_read'
         */
        tmpRead_1 = Rte_IrvRead_PLTR_MedTED_ShiftLeverPositionReq_Init_write_IRV
            ();
    }
    else if ((VePLTI_b_Prmry_SC_Fail) && (VePLTI_b_Scndry_SC_Fail))
    {
        /* Switch: '<S357>/Switch3' incorporates:
         *  Constant: '<S345>/Constant'
         *  Switch: '<S357>/Switch2'
         */
        tmpRead_1 = CeTRGR_e_TransRangeIllegal;
    }
    else
    {
        tmpRead_1 = Rte_IrvRead_PLTR_MedTED_ShiftLeverPositionReq_Init_write_IRV
            ();
    }

    /* End of Switch: '<S357>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S83>/FcnCallGen' */

    /* Outport: '<Root>/VePLTR_e_ShiftLeverPosReq' incorporates:
     *  SignalConversion generated from: '<S83>/ShiftLeverPosReq'
     */
    (void)Rte_Write_VePLTR_e_ShiftLeverPosReq_Value(tmpRead_1);

    /* S-Function (fcgen): '<S83>/FcnCallGen' incorporates:
     *  SubSystem: '<S83>/Proc_CANBus'
     */
    /* Switch: '<S386>/Switch1' incorporates:
     *  Logic: '<S337>/Logical22'
     *  Logic: '<S337>/Logical24'
     *  Logic: '<S337>/Logical25'
     *  Logic: '<S337>/Logical26'
     *  Merge: '<Root>/Merge_129'
     *  Merge: '<Root>/Merge_135'
     *  SignalConversion generated from: '<S83>/VePLTR_e_Prmry_PRND_ValidatePstn_read'
     *  SignalConversion generated from: '<S83>/VePLTR_e_Scndry_PRND_ValidatePstn_read'
     *  Switch: '<S386>/Switch2'
     *  Switch: '<S386>/Switch3'
     */
    if ((VePLTR_b_Prmry_Fail_MSG) && tmpRead_0)
    {
        tmpRead_1 =
            Rte_IrvRead_PLTR_MedTED_PRND_ValidatePstn_InitSndry_write_IRV();
    }
    else if ((!VePLTR_b_Prmry_Fail_MSG) && (VePLTR_b_Scndry_Fail_MSG))
    {
        /* Switch: '<S386>/Switch2' incorporates:
         *  Merge: '<Root>/Merge_135'
         *  SignalConversion generated from: '<S83>/VePLTR_e_Prmry_PRND_ValidatePstn_read'
         */
        tmpRead_1 = Rte_IrvRead_PLTR_MedTED_PRND_ValidatePstn_Init_write_IRV();
    }
    else if ((VePLTR_b_Prmry_Fail_MSG) && (VePLTR_b_Scndry_Fail_MSG))
    {
        /* Switch: '<S386>/Switch3' incorporates:
         *  Constant: '<S382>/Constant'
         *  Switch: '<S386>/Switch2'
         */
        tmpRead_1 = CeTRGR_e_TransRangeIllegal;
    }
    else
    {
        tmpRead_1 = Rte_IrvRead_PLTR_MedTED_PRND_ValidatePstn_Init_write_IRV();
    }

    /* End of Switch: '<S386>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S83>/FcnCallGen' */

    /* Outport: '<Root>/VePLTR_e_ValidatePstn' incorporates:
     *  SignalConversion generated from: '<S83>/ValidatePstn'
     */
    (void)Rte_Write_VePLTR_e_ValidatePstn_Value(tmpRead_1);

    /* Merge: '<Root>/Merge_138_Irv' incorporates:
     *  SignalConversion generated from: '<S83>/DriverDetected_write'
     * */
    Rte_IrvWrite_PLTR_MedTED_DriverDetected_write_IRV
        (rtb_TmpSignalConversionAtVePLTR_b_DoorFa);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
}

/* Model step function for TID3 */
FUNC(void, PLTR_CODE) PLTR_MedTEH(void) /* Explicit Task: MedTEH */
{
    /* local block i/o variables */
    float32 rtb_TmpSignalConversionAtVePLTR_p_Ambien;
    float32 rtb_TmpSignalConversionAtVeENGR_V_FuelCo;
    TePLTR_e_RTCSyncDiagTestReport rtb_TmpSignalConversionAtVePLTR_e_RTCTes;
    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Status;
    boolean rtb_NotEqual;
    boolean rtb_TmpSignalConversionAtToggle_1s_ReadO;
    boolean rtb_TmpSignalConversionAtVeDFIB_b_RTCC_c;
    boolean rtb_TmpSignalConversionAtVeDFIR_b_ClearT;
    boolean rtb_TmpSignalConversionAtVeDFIR_b_IsDi_i;
    boolean rtb_TmpSignalConversionAtVeDFIR_b_PostCo;
    boolean tmpRead;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/PLTR_MedTEH'
     */
    /* SignalConversion generated from: '<S84>/VeDFIB_b_RTCChipErr' incorporates:
     *  Inport: '<Root>/VeDFIB_b_RTCChipErr'
     */
    (void)Rte_Read_VeDFIB_b_RTCChipErr_Value
        (&rtb_TmpSignalConversionAtVeDFIB_b_RTCC_c);

    /* SignalConversion generated from: '<S84>/VePLTR_e_RTCTestSyncReport' incorporates:
     *  Merge: '<Root>/Merge_69_Irv1'
     */
    rtb_TmpSignalConversionAtVePLTR_e_RTCTes =
        Rte_IrvRead_PLTR_MedTEH_VePLTR_e_RTCTestSyncReport_Init_IRV();

    /* SignalConversion generated from: '<S84>/VeDMAB_y_StatusByte_IgnKeyOffTmrPerfTooFast' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_IgnKeyOffTmrPerfTooFast'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_IgnKeyOffTmrPerfTooFast_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Status);

    /* SignalConversion generated from: '<S84>/VeDFIR_b_PostCodeClrDiagDsbl' incorporates:
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* SignalConversion generated from: '<S84>/VeDFIR_b_IsDiagGlobalConditionsValid' incorporates:
     *  Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid'
     */
    (void)Rte_Read_VeDFIR_b_IsDiagGlobalConditionsValid_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_IsDi_i);

    /* SignalConversion generated from: '<S84>/VeENGR_V_FuelConsumption' incorporates:
     *  Inport: '<Root>/VeENGR_V_FuelConsumption'
     */
    (void)Rte_Read_VeENGR_V_FuelConsumption_Value
        (&rtb_TmpSignalConversionAtVeENGR_V_FuelCo);

    /* SignalConversion generated from: '<S84>/VeDFIR_b_ClearTrackingInfoService04' incorporates:
     *  Inport: '<Root>/VeDFIR_b_ClearTrackingInfoService04'
     */
    (void)Rte_Read_VeDFIR_b_ClearTrackingInfoService04_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_ClearT);

    /* SignalConversion generated from: '<S84>/Toggle_1s_Read' incorporates:
     *  Merge: '<Root>/Toggle_1s_IRV_Merge'
     */
    rtb_TmpSignalConversionAtToggle_1s_ReadO =
        Rte_IrvRead_PLTR_MedTEH_Toggle_1s_write_IRV();

    /* SignalConversion generated from: '<S84>/VePLTR_p_AmbientAirPrs_read' incorporates:
     *  Merge: '<Root>/Merge_12_Irv'
     */
    rtb_TmpSignalConversionAtVePLTR_p_Ambien =
        Rte_IrvRead_PLTR_MedTEH_VePLTR_p_AmbientAirPrs_write_IRV();

    /* S-Function (fcgen): '<S84>/FcnCallGen' incorporates:
     *  SubSystem: '<S84>/PLTC_Control_100ms'
     */
    /* Outputs for Atomic SubSystem: '<S390>/EdgeBi' */
    /* RelationalOperator: '<S396>/Not Equal' incorporates:
     *  UnitDelay: '<S396>/Unit Delay'
     */
    rtb_NotEqual = (rtb_TmpSignalConversionAtToggle_1s_ReadO !=
                    PLTR_ac_DW.UnitDelay_DSTATE_hc);

    /* Update for UnitDelay: '<S396>/Unit Delay' */
    PLTR_ac_DW.UnitDelay_DSTATE_hc = rtb_TmpSignalConversionAtToggle_1s_ReadO;

    /* End of Outputs for SubSystem: '<S390>/EdgeBi' */

    /* Outputs for Atomic SubSystem: '<S390>/Accumulator Reset' */
    /* Switch: '<S394>/Switch1' incorporates:
     *  Sum: '<S394>/Summation'
     *  UnitDelay: '<S394>/Unit Delay'
     */
    if (rtb_NotEqual)
    {
        PLTR_ac_DW.UnitDelay_DSTATE_l = rtb_TmpSignalConversionAtVeENGR_V_FuelCo;
    }
    else
    {
        PLTR_ac_DW.UnitDelay_DSTATE_l +=
            rtb_TmpSignalConversionAtVeENGR_V_FuelCo;
    }

    /* End of Switch: '<S394>/Switch1' */
    /* End of Outputs for SubSystem: '<S390>/Accumulator Reset' */

    /* Product: '<S390>/Product' incorporates:
     *  Constant: '<S390>/Constant'
     *  UnitDelay: '<S394>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeENGR_V_FuelCo = PLTR_ac_DW.UnitDelay_DSTATE_l *
        0.1F;

    /* Outputs for Atomic SubSystem: '<S390>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S398>/EdgeFalling1' */
    /* Logic: '<S399>/AND' incorporates:
     *  Logic: '<S399>/OR1'
     *  UnitDelay: '<S399>/Unit Delay'
     */
    rtb_TmpSignalConversionAtToggle_1s_ReadO =
        ((!rtb_TmpSignalConversionAtVeDFIR_b_ClearT) &&
         (PLTR_ac_DW.UnitDelay_DSTATE_mp));

    /* Update for UnitDelay: '<S399>/Unit Delay' */
    PLTR_ac_DW.UnitDelay_DSTATE_mp = rtb_TmpSignalConversionAtVeDFIR_b_ClearT;

    /* End of Outputs for SubSystem: '<S398>/EdgeFalling1' */

    /* Switch: '<S398>/Switch' incorporates:
     *  Constant: '<S390>/Constant'
     *  Constant: '<S397>/Calib'
     *  Constant: '<S398>/Constant Value1'
     *  MinMax: '<S398>/Minimum'
     *  Sum: '<S398>/Summation'
     *  UnitDelay: '<S398>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtToggle_1s_ReadO)
    {
        PLTR_ac_DW.UnitDelay_DSTATE_o = KePLTR_t_DbncService04Req;
    }
    else
    {
        PLTR_ac_DW.UnitDelay_DSTATE_o = fmaxf(PLTR_ac_DW.UnitDelay_DSTATE_o -
            0.1F, 0.0F);
    }

    /* End of Switch: '<S398>/Switch' */
    /* End of Outputs for SubSystem: '<S390>/Turn Off Delay Time' */
    /* End of Outputs for S-Function (fcgen): '<S84>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe' */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/PLTR_MedTEH'
     */
    /* S-Function (fcgen): '<S84>/FcnCallGen' incorporates:
     *  SubSystem: '<S84>/PLTC_Control_100ms'
     */
    /* Outputs for Atomic SubSystem: '<S390>/Turn Off Delay Time' */
    /* Logic: '<S398>/AND' incorporates:
     *  Constant: '<S398>/Constant Value2'
     *  RelationalOperator: '<S398>/Greater  Than'
     *  UnitDelay: '<S398>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_ClearT =
        (rtb_TmpSignalConversionAtVeDFIR_b_ClearT ||
         (PLTR_ac_DW.UnitDelay_DSTATE_o > 0.0F));

    /* End of Outputs for SubSystem: '<S390>/Turn Off Delay Time' */

    /* S-Function (fcgen): '<S84>/FcnCallGen' incorporates:
     *  SubSystem: '<S84>/AtmPress_100ms'
     */
    PLTR_ac_AtmPress_100ms(rtb_TmpSignalConversionAtVePLTR_p_Ambien,
                           &PLTR_ac_B.AtmPress_100ms);

    /* S-Function (fcgen): '<S84>/FcnCallGen' incorporates:
     *  SubSystem: '<S84>/RTCDiag_P1001'
     */

    /* RelationalOperator: '<S407>/Relational Operator3' incorporates:
     *  Constant: '<S407>/Constant3'
     *  S-Function (sfix_bitop): '<S407>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtToggle_1s_ReadO = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Status) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S407>/EdgeFalling1' */
    /* Logic: '<S407>/Logical Operator' incorporates:
     *  Logic: '<S410>/OR1'
     */
    rtb_NotEqual = !rtb_TmpSignalConversionAtToggle_1s_ReadO;

    /* End of Outputs for SubSystem: '<S407>/EdgeFalling1' */

    /* Logic: '<S407>/Logical1' incorporates:
     *  Constant: '<S400>/Constant'
     *  Constant: '<S403>/Calib'
     *  Constant: '<S404>/Calib'
     *  Constant: '<S407>/Constant1'
     *  Logic: '<S391>/AND'
     *  Logic: '<S391>/AND1'
     *  Logic: '<S391>/AND2'
     *  Logic: '<S407>/Logical Operator'
     *  Logic: '<S407>/Logical10'
     *  Logic: '<S407>/Logical12'
     *  RelationalOperator: '<S391>/Equal3'
     *  RelationalOperator: '<S407>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S407>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_IsDi_i =
        ((((KePLTR_b_IgnKeyOffTmrPerfTooFast_DiagEnbl) &&
           rtb_TmpSignalConversionAtVeDFIR_b_IsDi_i) && ((((uint32)
             rtb_TmpSignalConversionAtVePLTR_e_RTCTes) !=
            CePLTR_e_RTCSyncDiag_NotTested) ||
           rtb_TmpSignalConversionAtVeDFIB_b_RTCC_c)) &&
         ((!KePLTR_b_IgnKeyOffTmrPerfTooFast_LtchEnbl) || (((((uint32)
              rtb_TmpSignalConversionAtVeDMAB_y_Status) & 1U) == 0U) ||
           rtb_NotEqual)));

    /* Outputs for Atomic SubSystem: '<S407>/EdgeFalling1' */
    /* Logic: '<S410>/AND' incorporates:
     *  UnitDelay: '<S410>/Unit Delay'
     */
    rtb_NotEqual = (rtb_NotEqual && (PLTR_ac_DW.UnitDelay_DSTATE_dx));

    /* Update for UnitDelay: '<S410>/Unit Delay' */
    PLTR_ac_DW.UnitDelay_DSTATE_dx = rtb_TmpSignalConversionAtToggle_1s_ReadO;

    /* End of Outputs for SubSystem: '<S407>/EdgeFalling1' */

    /* Logic: '<S407>/Logical5' incorporates:
     *  Logic: '<S406>/NOT4'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_PostCo = ((tmpRead ||
        rtb_TmpSignalConversionAtVeDFIR_b_PostCo) || rtb_NotEqual);

    /* Outputs for Atomic SubSystem: '<S409>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S409>/Counter Reset  Enabled ' */
    /* Switch: '<S416>/Switch1' incorporates:
     *  Constant: '<S408>/Constant'
     *  Logic: '<S405>/OR'
     *  Logic: '<S409>/Fail Counter Reset'
     *  Logic: '<S409>/NOT6'
     *  RelationalOperator: '<S405>/Equal3'
     *  Switch: '<S416>/Switch2'
     *  Switch: '<S417>/Switch1'
     *  UnitDelay: '<S409>/Unit Delay'
     *  UnitDelay: '<S409>/Unit Delay1'
     */
    if ((rtb_TmpSignalConversionAtVeDFIR_b_PostCo ||
            (PLTR_ac_DW.UnitDelay_DSTATE_c)) || (PLTR_ac_DW.UnitDelay1_DSTATE_h))
    {
        /* Switch: '<S416>/Switch1' incorporates:
         *  Constant: '<S416>/Constant Value2'
         */
        VePLTR_Cnt_IgnKeyOffTmrPerfTooFast_FailCntr = 0U;

        /* Switch: '<S417>/Switch1' incorporates:
         *  Constant: '<S417>/Constant Value2'
         */
        VePLTR_Cnt_IgnKeyOffTmrPerfTooFast_SmplCntr = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeDFIR_b_IsDi_i &&
                (rtb_TmpSignalConversionAtVeDFIB_b_RTCC_c || (((uint32)
                rtb_TmpSignalConversionAtVePLTR_e_RTCTes) ==
                CePLTR_e_RTCSyncDiag_Fail)))
        {
            /* Switch: '<S416>/Switch1' incorporates:
             *  Constant: '<S416>/Constant Value1'
             *  Sum: '<S416>/Subtraction'
             *  Switch: '<S416>/Switch2'
             *  UnitDelay: '<S416>/Unit Delay'
             */
            VePLTR_Cnt_IgnKeyOffTmrPerfTooFast_FailCntr = (uint16)(((uint32)
                VePLTR_Cnt_IgnKeyOffTmrPerfTooFast_FailCntr) + 1U);
        }

        /* Switch: '<S417>/Switch2' */
        if (rtb_TmpSignalConversionAtVeDFIR_b_IsDi_i)
        {
            /* Switch: '<S417>/Switch1' incorporates:
             *  Constant: '<S417>/Constant Value1'
             *  Sum: '<S417>/Subtraction'
             *  Switch: '<S417>/Switch2'
             *  UnitDelay: '<S417>/Unit Delay'
             */
            VePLTR_Cnt_IgnKeyOffTmrPerfTooFast_SmplCntr = (uint16)(((uint32)
                VePLTR_Cnt_IgnKeyOffTmrPerfTooFast_SmplCntr) + 1U);
        }

        /* End of Switch: '<S417>/Switch2' */
    }

    /* End of Switch: '<S416>/Switch1' */
    /* End of Outputs for SubSystem: '<S409>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S409>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S409>/Greater Than or Equal ' incorporates:
     *  Constant: '<S401>/Calib'
     */
    PLTR_ac_DW.UnitDelay1_DSTATE_h =
        (VePLTR_Cnt_IgnKeyOffTmrPerfTooFast_FailCntr >=
         KePLTR_Cnt_IgnKeyOffTmrPerfTooFast_FailLim);

    /* Logic: '<S409>/NOT5' incorporates:
     *  Constant: '<S402>/Calib'
     *  Logic: '<S409>/NOT3'
     *  RelationalOperator: '<S409>/Less Than  or Equal'
     */
    PLTR_ac_DW.UnitDelay_DSTATE_c =
        ((VePLTR_Cnt_IgnKeyOffTmrPerfTooFast_SmplCntr >=
          KePLTR_Cnt_IgnKeyOffTmrPerfTooFast_SmplLim) &&
         (!PLTR_ac_DW.UnitDelay1_DSTATE_h));

    /* Outputs for Enabled SubSystem: '<S407>/Fail' incorporates:
     *  EnablePort: '<S412>/Enable'
     */
    if (PLTR_ac_DW.UnitDelay1_DSTATE_h)
    {
        /* Merge: '<S407>/Merge' incorporates:
         *  Constant: '<S418>/Constant'
         *  SignalConversion generated from: '<S412>/FaultSts'
         */
        PLTR_ac_B.Merge_j = CeDFIB_e_Fail;
    }

    /* End of Outputs for SubSystem: '<S407>/Fail' */

    /* Outputs for Enabled SubSystem: '<S407>/Init' incorporates:
     *  EnablePort: '<S413>/Enable'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        /* Merge: '<S407>/Merge' incorporates:
         *  Constant: '<S419>/Constant'
         *  SignalConversion generated from: '<S413>/FaultSts'
         */
        PLTR_ac_B.Merge_j = CeDFIB_e_Init;
    }

    /* End of Outputs for SubSystem: '<S407>/Init' */

    /* Outputs for Enabled SubSystem: '<S407>/Pass' incorporates:
     *  EnablePort: '<S414>/Enable'
     */
    if (PLTR_ac_DW.UnitDelay_DSTATE_c)
    {
        /* Merge: '<S407>/Merge' incorporates:
         *  Constant: '<S420>/Constant'
         *  SignalConversion generated from: '<S414>/FaultSts'
         */
        PLTR_ac_B.Merge_j = CeDFIB_e_Pass;
    }

    /* End of Outputs for SubSystem: '<S407>/Pass' */

    /* RelationalOperator: '<S407>/Relational Operator' incorporates:
     *  Constant: '<S411>/Constant'
     *  Merge: '<S407>/Merge'
     */
    PLTR_ac_B.RelationalOperator = (((uint32)PLTR_ac_B.Merge_j) == CeDFIB_e_Fail);

    /* End of Outputs for S-Function (fcgen): '<S84>/FcnCallGen' */

    /* Outport: '<Root>/VePLTR_pmbar_AmbientAirPrs' incorporates:
     *  SignalConversion generated from: '<S84>/AmbientAirPrs'
     */
    (void)Rte_Write_VePLTR_pmbar_AmbientAirPrs_Value
        (PLTR_ac_B.AtmPress_100ms.VePLTR_pmbar_AmbientAirPrs);

    /* Outport: '<Root>/VePLTR_b_ClrTrackingInfo' incorporates:
     *  SignalConversion generated from: '<S84>/ClrTrackingInfo_1s'
     */
    (void)Rte_Write_VePLTR_b_ClrTrackingInfo_Value
        (rtb_TmpSignalConversionAtVeDFIR_b_ClearT);

    /* Outport: '<Root>/VePLTR_dVh_FuelConsumption_avrg' incorporates:
     *  SignalConversion generated from: '<S84>/FuelConsumption_1s'
     */
    (void)Rte_Write_VePLTR_dVh_FuelConsumption_avrg_Value
        (rtb_TmpSignalConversionAtVeENGR_V_FuelCo);

    /* Outport: '<Root>/VePLTR_e_FaultSts_IgnKeyOffTmrPerfTooFast' incorporates:
     *  Merge: '<S407>/Merge'
     *  SignalConversion generated from: '<S84>/VePLTR_e_FaultSts_IgnKeyOffTmrPerfTooFast'
     */
    (void)Rte_Write_VePLTR_e_FaultSts_IgnKeyOffTmrPerfTooFast_Value
        (PLTR_ac_B.Merge_j);

    /* SignalConversion generated from: '<S84>/VePLTR_b_RTCFltDtctd' */
    Rte_IrvWrite_PLTR_MedTEH_VePLTR_b_RTCFltDtctd_IRV
        (PLTR_ac_B.RelationalOperator);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
}

/* Model step function for TID4 */
FUNC(void, PLTR_CODE) PLTR_SlowTEF(void) /* Explicit Task: SlowTEF */
{
    float32 tmpRead;
    float32 tmpRead_0;
    float32 tmpRead_1;
    float32 tmpRead_2;
    uint32 DataTypeConversion2;
    uint32 qY;
    TeDFIB_e_RTCCallSts rtb_TmpSignalConversionAtVeDFIB_e_RTCRea;
    TePLTR_e_ECMVtdFreeze tmp;
    TePLTR_e_RTCSyncDiagTestReport tmp_0;
    uint8 tmpRead_4;
    boolean AND_e;
    boolean Switch4;
    boolean guard1 = false;
    boolean rtb_AND_im;
    boolean rtb_Merge1;
    boolean rtb_OR;
    boolean rtb_OR1_g;
    boolean rtb_RelationalOperator3;
    boolean rtb_TmpSignalConversionAtVeDFIB_b_RTCChi;
    boolean rtb_TmpSignalConversionAtVeDFIR_b_IsDiag;
    boolean tmpRead_3;

    /* Inport: '<Root>/VeBPCR_t_HVBatSleepTime' */
    (void)Rte_Read_VeBPCR_t_HVBatSleepTime_Value(&tmpRead_1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/SlowTEF' incorporates:
     *  SubSystem: '<Root>/PLTR_SlowTEF'
     */
    /* SignalConversion generated from: '<S87>/VeDFIB_e_RTCReadSts' incorporates:
     *  Inport: '<Root>/VeDFIB_e_RTCReadSts'
     */
    (void)Rte_Read_VeDFIB_e_RTCReadSts_Value
        (&rtb_TmpSignalConversionAtVeDFIB_e_RTCRea);

    /* SignalConversion generated from: '<S87>/VeDFIR_b_IsDiagGlobalConditionsValid' incorporates:
     *  Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid'
     */
    (void)Rte_Read_VeDFIR_b_IsDiagGlobalConditionsValid_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_IsDiag);

    /* SignalConversion generated from: '<S87>/VeDFIB_b_RTCChipErr' incorporates:
     *  Inport: '<Root>/VeDFIB_b_RTCChipErr'
     */
    (void)Rte_Read_VeDFIB_b_RTCChipErr_Value
        (&rtb_TmpSignalConversionAtVeDFIB_b_RTCChi);

    /* SignalConversion generated from: '<S87>/VeAPMR_t_EPOCHTime' incorporates:
     *  Inport: '<Root>/VeAPMR_t_EPOCHTime'
     */
    (void)Rte_Read_VeAPMR_t_EPOCHTime_Value(&PLTR_ac_B.Merge_m);

    /* S-Function (fcgen): '<S87>/FcnCallGen' incorporates:
     *  SubSystem: '<S87>/PLTI_ProcessInputs1'
     */
    /* Switch: '<S524>/Switch1' incorporates:
     *  Constant: '<S570>/Calib'
     *  Constant: '<S574>/Calib'
     *  DataStoreWrite: '<S524>/Data Store Write2'
     */
    if (KePLTR_b_OvrrdIPEETestMileageLimitEnabl)
    {
        AePLTR_milel_IPEETestMileageLimit =
            KePLTR_milel_OvrrdIPEETestMileageLimitVal;
    }

    /* End of Switch: '<S524>/Switch1' */

    /* Switch: '<S524>/Switch' incorporates:
     *  Constant: '<S571>/Calib'
     *  Constant: '<S572>/Calib'
     *  DataStoreWrite: '<S524>/Data Store Write1'
     */
    if (KePLTR_b_OvrrdInFieldModeEnabl)
    {
        AePLTR_b_InFieldMode = KePLTR_b_OvrrdInFieldModeVal;
    }

    /* End of Switch: '<S524>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S87>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/SlowTEF' */

    /* Inport: '<Root>/VeDMAB_y_StatusByte_ECUInplantmodeAct' */
    (void)Rte_Read_VeDMAB_y_StatusByte_ECUInplantmodeAct_Value(&tmpRead_4);

    /* Inport: '<Root>/VeHTDR_M_OutTorqReqModHH' */
    (void)Rte_Read_VeHTDR_M_OutTorqReqModHH_Value(&tmpRead_2);

    /* Inport: '<S524>/VeBPCR_b_HVBatRealTimeClock_FA' incorporates:
     *  Inport: '<Root>/VeBPCR_b_HVBatRealTimeClock_FA'
     */
    (void)Rte_Read_VeBPCR_b_HVBatRealTimeClock_FA_Value
        (&PLTR_ac_B.VePLTI_b_HVBatRealTimeClock_FA_BPCM);

    /* Inport: '<S524>/VeBPCR_t_HVBatRealTimeClock' incorporates:
     *  Inport: '<Root>/VeBPCR_t_HVBatRealTimeClock'
     */
    (void)Rte_Read_VeBPCR_t_HVBatRealTimeClock_Value
        (&PLTR_ac_B.VePLTI_t_HVBatRealTimeClock_BPCM);

    /* Inport: '<Root>/VeAPSR_Pct_AccelPedalActPosition' */
    (void)Rte_Read_VeAPSR_Pct_AccelPedalActPosition_Value(&tmpRead_0);

    /* Inport: '<Root>/VeCSVR_v_VehSpdSigned' */
    (void)Rte_Read_VeCSVR_v_VehSpdSigned_Value(&tmpRead);

    /* Inport: '<Root>/VeHPMR_b_PropSysActv' */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value(&rtb_Merge1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/SlowTEF' incorporates:
     *  SubSystem: '<Root>/PLTR_SlowTEF'
     */
    /* S-Function (fcgen): '<S87>/FcnCallGen' incorporates:
     *  SubSystem: '<S87>/PLTI_ProcessInputs1'
     */
    /* Inport: '<S524>/VeBPCR_t_HVBatSleepTime' incorporates:
     *  DataTypeConversion: '<S87>/Data Type Conversion'
     */
    PLTR_ac_B.VePLTI_t_HVBatSleepTime_BPCM = (uint32)tmpRead_1;

    /* Logic: '<S524>/Logical5' incorporates:
     *  UnitDelay: '<S524>/Unit Delay1'
     */
    PLTR_ac_DW.UnitDelay1_DSTATE_o = !PLTR_ac_DW.UnitDelay1_DSTATE_o;

    /* Switch: '<S524>/Switch4' incorporates:
     *  Constant: '<S565>/Calib'
     */
    if (KePLTR_b_OvrrdBatteryWasDisconnected_Enbl)
    {
        /* Switch: '<S524>/Switch4' incorporates:
         *  Constant: '<S566>/Calib'
         */
        Switch4 = KePLTR_b_OvrrdBatteryWasDisconnected_Val;
    }
    else
    {
        /* Switch: '<S524>/Switch4' incorporates:
         *  SignalConversion generated from: '<S86>/VePLTR_b_BatteryWasDisconnected_Init_write'
         *  SignalConversion generated from: '<S87>/BatteryWasDisconnected_Init_read'
         */
        Switch4 =
            Rte_IrvRead_PLTR_SlowTEF_VePLTR_b_BatteryWasDisconnected_Init_write_IRV
            ();
    }

    /* End of Switch: '<S524>/Switch4' */

    /* S-Function (fcgen): '<S87>/FcnCallGen' incorporates:
     *  SubSystem: '<S87>/PLTC_Control_1000ms'
     */
    /* S-Function (fcgen): '<S523>/FunctionCallGenerator1' incorporates:
     *  SubSystem: '<S523>/Processing_P161A'
     */
    /* Product: '<S530>/Product1' incorporates:
     *  Constant: '<S530>/Constant'
     *  Merge: '<Root>/Merge_42'
     *  SignalConversion generated from: '<S87>/VePLTR_l_Odometer_Km_read'
     */
    VePLTI_milel_Odometer_Miles =
        Rte_IrvRead_PLTR_SlowTEF_VePLTI_kl_Odometer_Km_write_IRV() * 0.621371F;

    /* DataStoreRead: '<S530>/Data Store Read6' */
    VePLTR_b_InFieldMode_Raw = AePLTR_b_InFieldMode;

    /* Outputs for Atomic SubSystem: '<S530>/EdgeFalling' */
    /* Logic: '<S538>/OR1' incorporates:
     *  Logic: '<S530>/Logical4'
     */
    rtb_OR1_g = !VePLTR_b_InFieldMode_Raw;

    /* Logic: '<S538>/AND' incorporates:
     *  Logic: '<S538>/OR1'
     *  UnitDelay: '<S538>/Unit Delay'
     */
    AND_e = (rtb_OR1_g && (PLTR_ac_DW.UnitDelay_DSTATE_g4));

    /* Update for UnitDelay: '<S538>/Unit Delay' */
    PLTR_ac_DW.UnitDelay_DSTATE_g4 = VePLTR_b_InFieldMode_Raw;

    /* End of Outputs for SubSystem: '<S530>/EdgeFalling' */

    /* RelationalOperator: '<S539>/Relational Operator3' incorporates:
     *  Constant: '<S539>/Constant3'
     *  S-Function (sfix_bitop): '<S539>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = ((((uint32)tmpRead_4) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S539>/EdgeFalling1' */
    /* Logic: '<S540>/AND' incorporates:
     *  Logic: '<S540>/OR1'
     *  UnitDelay: '<S540>/Unit Delay'
     */
    rtb_AND_im = ((!rtb_RelationalOperator3) && (PLTR_ac_DW.UnitDelay_DSTATE_e2));

    /* Update for UnitDelay: '<S540>/Unit Delay' */
    PLTR_ac_DW.UnitDelay_DSTATE_e2 = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S539>/EdgeFalling1' */

    /* If: '<S539>/If' */
    if (rtb_AND_im)
    {
        /* Outputs for IfAction SubSystem: '<S539>/Init' incorporates:
         *  ActionPort: '<S542>/Action Port'
         */
        /* Merge: '<S539>/Merge' incorporates:
         *  Constant: '<S545>/Constant'
         *  SignalConversion generated from: '<S542>/e_FaultStsInit'
         */
        PLTR_ac_B.Merge_a3 = CeDFIB_e_Init;

        /* End of Outputs for SubSystem: '<S539>/Init' */
    }
    else if (rtb_OR1_g)
    {
        /* Outputs for IfAction SubSystem: '<S539>/Fail' incorporates:
         *  ActionPort: '<S541>/Action Port'
         */
        /* Merge: '<S539>/Merge' incorporates:
         *  Constant: '<S544>/Constant'
         *  SignalConversion generated from: '<S541>/e_FaultStsFail'
         */
        PLTR_ac_B.Merge_a3 = CeDFIB_e_Fail;

        /* End of Outputs for SubSystem: '<S539>/Fail' */
    }
    else
    {
        if (VePLTR_b_InFieldMode_Raw)
        {
            /* Outputs for IfAction SubSystem: '<S539>/Pass' incorporates:
             *  ActionPort: '<S543>/Action Port'
             */
            /* Merge: '<S539>/Merge' incorporates:
             *  Constant: '<S546>/Constant'
             *  SignalConversion generated from: '<S543>/b_FaultStsPass'
             */
            PLTR_ac_B.Merge_a3 = CeDFIB_e_Pass;

            /* End of Outputs for SubSystem: '<S539>/Pass' */
        }
    }

    /* End of If: '<S539>/If' */

    /* S-Function (fcgen): '<S523>/FunctionCallGenerator1' incorporates:
     *  SubSystem: '<S523>/Shipping_Mode'
     */
    /* Switch: '<S531>/Switch1' incorporates:
     *  Constant: '<S531>/Constant Value2'
     *  RelationalOperator: '<S531>/Comparison3'
     */
    if (VePLTI_milel_Odometer_Miles >= 16.0F)
    {
        /* DataTypeConversion: '<S531>/Data Type Conversion' incorporates:
         *  Constant: '<S547>/Constant'
         *  DataStoreWrite: '<S531>/Data Store Write1'
         */
        EePLTR_e_ShippingMode = CePLTR_e_ShipingMode_CUST_MD;
    }
    else
    {
        /* DataTypeConversion: '<S531>/Data Type Conversion' incorporates:
         *  DataStoreWrite: '<S531>/Data Store Write1'
         *  Merge: '<Root>/Merge_41'
         *  SignalConversion generated from: '<S87>/VePLTR_e_ShipingMode_read'
         */
        EePLTR_e_ShippingMode =
            Rte_IrvRead_PLTR_SlowTEF_VePLTI_e_ShippingMode_write_IRV();
    }

    /* End of Switch: '<S531>/Switch1' */

    /* S-Function (fcgen): '<S523>/FunctionCallGenerator1' incorporates:
     *  SubSystem: '<S523>/To_InPlant_Check'
     */
    /* Outputs for Enabled SubSystem: '<S533>/StoreOdoLimit' incorporates:
     *  EnablePort: '<S550>/Enable'
     */
    if (AND_e)
    {
        /* Sum: '<S550>/Sum1' incorporates:
         *  DataStoreRead: '<S533>/Data Store Read5'
         *  DataStoreWrite: '<S550>/Data Store Write1'
         */
        PLTR_ac_DW.AePLTR_milel_OdometerLimit = VePLTI_milel_Odometer_Miles +
            AePLTR_milel_IPEETestMileageLimit;

        /* Outport: '<Root>/AePLTR_milel_OdometerLimit_Strimm_Out' incorporates:
         *  DataStoreRead: '<S550>/Data Store Read5'
         */
        (void)Rte_Write_AePLTR_milel_OdometerLimit_AePLTR_milel_OdometerLimit
            (PLTR_ac_DW.AePLTR_milel_OdometerLimit);
    }

    /* End of Outputs for SubSystem: '<S533>/StoreOdoLimit' */

    /* S-Function (fcgen): '<S523>/FunctionCallGenerator1' incorporates:
     *  SubSystem: '<S523>/To_InField_Check'
     */
    /* Outputs for Enabled SubSystem: '<S532>/InPlant_to_InField' incorporates:
     *  EnablePort: '<S548>/Enable'
     */
    /* S-Function (fcgen): '<S523>/FunctionCallGenerator1' incorporates:
     *  SubSystem: '<S523>/Processing_P161A'
     */
    /* Logic: '<S532>/Logical3' incorporates:
     *  DataStoreRead: '<S532>/Data Store Read1'
     *  RelationalOperator: '<S532>/Comparison1'
     */
    if ((VePLTI_milel_Odometer_Miles >= PLTR_ac_DW.AePLTR_milel_OdometerLimit) &&
        rtb_OR1_g)
    {
        /* DataStoreWrite: '<S548>/Data Store Write1' incorporates:
         *  Constant: '<S548>/FALSE Constant'
         */
        AePLTR_b_InFieldMode = true;

        /* Outport: '<Root>/AePLTR_b_InFieldMode_Strimm_Out' incorporates:
         *  DataStoreRead: '<S548>/Data Store Read'
         */
        (void)Rte_Write_AePLTR_b_InFieldMode_AePLTR_b_InFieldMode
            (AePLTR_b_InFieldMode);
    }

    /* End of Logic: '<S532>/Logical3' */
    /* End of Outputs for SubSystem: '<S532>/InPlant_to_InField' */

    /* S-Function (fcgen): '<S523>/FunctionCallGenerator1' incorporates:
     *  SubSystem: '<S523>/WarmupAchievedSubsystem'
     */
    /* Outputs for Atomic SubSystem: '<S534>/EdgeRising4' */
    /* Logic: '<S552>/OR1' incorporates:
     *  UnitDelay: '<S552>/Unit Delay'
     */
    rtb_OR1_g = !PLTR_ac_DW.UnitDelay_DSTATE_h;

    /* Update for UnitDelay: '<S552>/Unit Delay' incorporates:
     *  Constant: '<S534>/TRUE Constant2'
     */
    PLTR_ac_DW.UnitDelay_DSTATE_h = true;

    /* End of Outputs for SubSystem: '<S534>/EdgeRising4' */

    /* Outputs for Atomic SubSystem: '<S534>/EdgeRising5' */
    /* Logic: '<S553>/OR1' incorporates:
     *  UnitDelay: '<S553>/Unit Delay'
     */
    AND_e = !PLTR_ac_DW.UnitDelay_DSTATE_jl;

    /* End of Outputs for S-Function (fcgen): '<S87>/FcnCallGen' */

    /* S-Function (fcgen): '<S87>/FcnCallGen' incorporates:
     *  SubSystem: '<S87>/PLTI_ProcessInputs1'
     */
    /* Update for UnitDelay: '<S553>/Unit Delay' incorporates:
     *  Inport: '<S524>/VeHPMR_t_PropSysActv'
     */
    PLTR_ac_DW.UnitDelay_DSTATE_jl = rtb_Merge1;

    /* Outputs for Atomic SubSystem: '<S534>/EdgeRising4' */
    /* Logic: '<S534>/Logical2' incorporates:
     *  Inport: '<S524>/VeHPMR_t_PropSysActv'
     *  Logic: '<S552>/AND'
     *  Logic: '<S553>/AND'
     */
    rtb_OR1_g = (rtb_OR1_g || (rtb_Merge1 && AND_e));

    /* End of Outputs for SubSystem: '<S534>/EdgeRising4' */
    /* End of Outputs for SubSystem: '<S534>/EdgeRising5' */

    /* Outputs for Atomic SubSystem: '<S534>/Stop Watch Reset Enabled1' */
    /* Outputs for Atomic SubSystem: '<S534>/Stop Watch Reset Enabled4' */
    /* Switch: '<S564>/Switch4' incorporates:
     *  Constant: '<S555>/Calib'
     *  Constant: '<S562>/Constant Value1'
     *  Constant: '<S564>/Constant Value1'
     *  Inport: '<S524>/VeCSVR_v_VehSpd'
     *  RelationalOperator: '<S534>/Comparison6'
     *  Switch: '<S562>/Switch4'
     *  Switch: '<S564>/Switch2'
     *  UnitDelay: '<S562>/Unit Delay'
     *  UnitDelay: '<S564>/Unit Delay'
     */
    if (rtb_OR1_g)
    {
        PLTR_ac_DW.UnitDelay_DSTATE = 0.0F;
        PLTR_ac_DW.UnitDelay_DSTATE_g = 0.0F;
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S87>/PLTI_ProcessInputs1' */
        if (tmpRead >= KePLTR_n_VehSpdLimit)
        {
            /* Switch: '<S564>/Switch3' incorporates:
             *  Constant: '<S560>/Calib'
             *  Constant: '<S564>/Constant Value2'
             *  Switch: '<S564>/Switch2'
             *  UnitDelay: '<S564>/Unit Delay2'
             */
            if (VePLTC_b_1stCondition)
            {
                tmpRead_1 = 0.0F;
            }
            else
            {
                tmpRead_1 = KePLTR_t_dt1000ms;
            }

            /* End of Switch: '<S564>/Switch3' */

            /* UnitDelay: '<S564>/Unit Delay' incorporates:
             *  Sum: '<S564>/Subtraction'
             *  Switch: '<S564>/Switch2'
             */
            PLTR_ac_DW.UnitDelay_DSTATE += tmpRead_1;
        }

        /* Switch: '<S562>/Switch2' incorporates:
         *  Inport: '<S524>/VeHPMR_t_PropSysActv'
         */
        if (rtb_Merge1)
        {
            /* Switch: '<S562>/Switch3' incorporates:
             *  Constant: '<S560>/Calib'
             *  Constant: '<S562>/Constant Value2'
             *  UnitDelay: '<S562>/Unit Delay2'
             */
            if (VePLTC_b_2ndCondition)
            {
                tmpRead_1 = 0.0F;
            }
            else
            {
                tmpRead_1 = KePLTR_t_dt1000ms;
            }

            /* End of Switch: '<S562>/Switch3' */

            /* UnitDelay: '<S562>/Unit Delay' incorporates:
             *  Sum: '<S562>/Subtraction'
             *  Switch: '<S562>/Switch2'
             */
            PLTR_ac_DW.UnitDelay_DSTATE_g += tmpRead_1;
        }

        /* End of Switch: '<S562>/Switch2' */
        /* End of Outputs for SubSystem: '<S87>/PLTI_ProcessInputs1' */
    }

    /* End of Switch: '<S564>/Switch4' */
    /* End of Outputs for SubSystem: '<S534>/Stop Watch Reset Enabled1' */

    /* RelationalOperator: '<S564>/Comparison' incorporates:
     *  Constant: '<S557>/Calib'
     *  UnitDelay: '<S564>/Unit Delay'
     */
    VePLTC_b_1stCondition = (PLTR_ac_DW.UnitDelay_DSTATE >=
        KePLTR_t_TimeForVehSpdLmt);

    /* End of Outputs for SubSystem: '<S534>/Stop Watch Reset Enabled4' */

    /* Outputs for Atomic SubSystem: '<S534>/Stop Watch Reset Enabled1' */
    /* RelationalOperator: '<S562>/Comparison' incorporates:
     *  Constant: '<S559>/Calib'
     *  UnitDelay: '<S562>/Unit Delay'
     */
    VePLTC_b_2ndCondition = (PLTR_ac_DW.UnitDelay_DSTATE_g >=
        KePLTR_t_TimeSincePSALmt);

    /* End of Outputs for SubSystem: '<S534>/Stop Watch Reset Enabled1' */

    /* Outputs for Atomic SubSystem: '<S534>/Stop Watch Reset Enabled2' */
    /* S-Function (fcgen): '<S87>/FcnCallGen' incorporates:
     *  SubSystem: '<S87>/PLTI_ProcessInputs1'
     */
    /* Switch: '<S563>/Switch4' incorporates:
     *  Constant: '<S554>/Calib'
     *  Constant: '<S556>/Calib'
     *  Constant: '<S563>/Constant Value1'
     *  Inport: '<S524>/VeAPSR_Pct_AccelPedalActPosition'
     *  Inport: '<S524>/VeCSVR_v_VehSpd'
     *  Logic: '<S534>/Logical1'
     *  Logic: '<S534>/Logical3'
     *  Logic: '<S534>/Logical4'
     *  RelationalOperator: '<S534>/Comparison3'
     *  RelationalOperator: '<S534>/Comparison5'
     *  Switch: '<S563>/Switch2'
     *  Switch: '<S563>/Switch3'
     *  UnitDelay: '<S563>/Unit Delay'
     *  UnitDelay: '<S563>/Unit Delay2'
     */
    if (rtb_OR1_g || ((tmpRead_0 > KePLTR_Pct_AccelPedalPosLimit) || (tmpRead >
            KePLTR_n_VehSpdLimitForPSAIdle)))
    {
        PLTR_ac_DW.UnitDelay_DSTATE_d = 0.0F;
    }
    else
    {
        if (PLTR_ac_DW.UnitDelay2_DSTATE_i)
        {
            /* Switch: '<S563>/Switch3' incorporates:
             *  Constant: '<S563>/Constant Value2'
             *  Switch: '<S563>/Switch2'
             */
            tmpRead_1 = 0.0F;
        }
        else
        {
            /* Switch: '<S563>/Switch3' incorporates:
             *  Constant: '<S560>/Calib'
             *  Switch: '<S563>/Switch2'
             */
            tmpRead_1 = KePLTR_t_dt1000ms;
        }

        /* UnitDelay: '<S563>/Unit Delay' incorporates:
         *  Sum: '<S563>/Subtraction'
         *  Switch: '<S563>/Switch2'
         */
        PLTR_ac_DW.UnitDelay_DSTATE_d += tmpRead_1;
    }

    /* End of Switch: '<S563>/Switch4' */

    /* RelationalOperator: '<S563>/Comparison' incorporates:
     *  Constant: '<S558>/Calib'
     *  UnitDelay: '<S563>/Unit Delay'
     *  UnitDelay: '<S563>/Unit Delay2'
     */
    PLTR_ac_DW.UnitDelay2_DSTATE_i = (PLTR_ac_DW.UnitDelay_DSTATE_d >=
        KePLTR_t_TimeLmtForPSAIdle);

    /* End of Outputs for SubSystem: '<S534>/Stop Watch Reset Enabled2' */

    /* Outputs for Atomic SubSystem: '<S534>/Signal Latch On With Reset' */
    /* Logic: '<S561>/OR1' incorporates:
     *  Logic: '<S561>/NOT'
     *  Logic: '<S561>/OR'
     *  UnitDelay: '<S561>/Unit Delay'
     *  UnitDelay: '<S563>/Unit Delay2'
     */
    VePLTC_b_3rdCondition = ((PLTR_ac_DW.UnitDelay2_DSTATE_i) || ((!rtb_OR1_g) &&
        (VePLTC_b_3rdCondition)));

    /* End of Outputs for SubSystem: '<S534>/Signal Latch On With Reset' */

    /* S-Function (fcgen): '<S523>/FunctionCallGenerator1' incorporates:
     *  SubSystem: '<S523>/Outputs_Update'
     */
    /* Outport: '<Root>/VePLTR_b_InFieldMode' incorporates:
     *  Logic: '<S535>/AND'
     */
    (void)Rte_Write_VePLTR_b_InFieldMode_Value(VePLTR_b_InFieldMode_Raw);

    /* End of Outputs for S-Function (fcgen): '<S523>/FunctionCallGenerator1' */

    /* S-Function (fcgen): '<S87>/FcnCallGen' incorporates:
     *  SubSystem: '<S87>/RTCArbitration'
     */
    /* If: '<S525>/If1' incorporates:
     *  Constant: '<S577>/Calib'
     */
    if (HePLTR_b_EnblGen1RTC)
    {
        /* Outputs for IfAction SubSystem: '<S525>/RTCFromBPCM' incorporates:
         *  ActionPort: '<S578>/Action Port'
         */
        PLTR_ac_RTCFromBPCM(PLTR_ac_B.VePLTI_t_HVBatRealTimeClock_BPCM,
                            PLTR_ac_B.VePLTI_b_HVBatRealTimeClock_FA_BPCM,
                            PLTR_ac_B.VePLTI_t_HVBatSleepTime_BPCM,
                            &PLTR_ac_B.Merge_m, &rtb_Merge1, &PLTR_ac_B.Merge2_n);

        /* End of Outputs for SubSystem: '<S525>/RTCFromBPCM' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S525>/RTCFromBSW' incorporates:
         *  ActionPort: '<S579>/Action Port'
         */
        /* DataStoreWrite: '<S579>/Data Store Write5' */
        EePLTR_t_RTCTime = PLTR_ac_B.Merge_m;

        /* Switch: '<S579>/Switch5' incorporates:
         *  Constant: '<S588>/Constant'
         *  DataStoreWrite: '<S579>/Data Store Write1'
         *  Logic: '<S579>/Logical3'
         *  RelationalOperator: '<S579>/Comparison2'
         *  SignalConversion generated from: '<S84>/VePLTR_b_RTCFltDtctd'
         *  SignalConversion generated from: '<S87>/VePLTR_b_RTCFltDtctd'
         */
        EePLTR_b_RTC_CurrentTimeFA = ((((uint32)
            rtb_TmpSignalConversionAtVeDFIB_e_RTCRea) !=
            CeDFIB_e_RTCCallCompleteOK) ||
            (Rte_IrvRead_PLTR_SlowTEF_VePLTR_b_RTCFltDtctd_IRV()));

        /* DataTypeConversion: '<S579>/Data Type Conversion1' incorporates:
         *  DataStoreWrite: '<S579>/Data Store Write6'
         */
        EePLTR_e_RTCStatus = rtb_TmpSignalConversionAtVeDFIB_e_RTCRea;

        /* Merge: '<S525>/Merge1' incorporates:
         *  DataStoreWrite: '<S579>/Data Store Write1'
         *  SignalConversion generated from: '<S579>/VePLTC_b_RTC_CurrentTimeFA'
         */
        rtb_Merge1 = EePLTR_b_RTC_CurrentTimeFA;

        /* Merge: '<S525>/Merge2' incorporates:
         *  DataStoreRead: '<S579>/Data Store Read1'
         */
        PLTR_ac_B.Merge2_n = EePLTR_t_PowerdownTime;

        /* End of Outputs for SubSystem: '<S525>/RTCFromBSW' */
    }

    /* End of If: '<S525>/If1' */

    /* Outputs for Atomic SubSystem: '<S576>/EdgeRising' */
    /* Logic: '<S581>/AND' incorporates:
     *  Logic: '<S581>/OR1'
     *  UnitDelay: '<S581>/Unit Delay'
     */
    rtb_OR1_g = !PLTR_ac_DW.UnitDelay_DSTATE_fv;

    /* Update for UnitDelay: '<S581>/Unit Delay' incorporates:
     *  Constant: '<S576>/Constant'
     */
    PLTR_ac_DW.UnitDelay_DSTATE_fv = true;

    /* End of Outputs for SubSystem: '<S576>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S576>/Turn Off Delay Sample Modified' */
    /* Outputs for Atomic SubSystem: '<S583>/EdgeFalling' */
    /* Logic: '<S584>/AND' incorporates:
     *  Logic: '<S584>/OR1'
     *  UnitDelay: '<S584>/Unit Delay'
     */
    AND_e = ((!rtb_OR1_g) && (PLTR_ac_DW.UnitDelay_DSTATE_bp));

    /* Update for UnitDelay: '<S584>/Unit Delay' */
    PLTR_ac_DW.UnitDelay_DSTATE_bp = rtb_OR1_g;

    /* End of Outputs for SubSystem: '<S583>/EdgeFalling' */

    /* Switch: '<S583>/Switch' incorporates:
     *  MinMax: '<S583>/Minimum1'
     *  UnitDelay: '<S583>/Unit Delay'
     */
    if (AND_e)
    {
        /* MinMax: '<S583>/Minimum1' incorporates:
         *  Constant: '<S582>/Calib'
         *  UnitDelay: '<S583>/Unit Delay'
         */
        PLTR_ac_DW.UnitDelay_DSTATE_n = KePLTR_Cnt_HCPOffTimeIn;
    }
    else
    {
        if (((sint32)PLTR_ac_DW.UnitDelay_DSTATE_n) <= 1)
        {
            /* MinMax: '<S583>/Minimum1' */
            PLTR_ac_DW.UnitDelay_DSTATE_n = 1U;
        }

        /* MinMax: '<S583>/Minimum1' incorporates:
         *  Constant: '<S583>/Constant Value'
         *  Sum: '<S583>/Summation'
         *  UnitDelay: '<S583>/Unit Delay'
         */
        PLTR_ac_DW.UnitDelay_DSTATE_n = (uint16)((sint32)(((sint32)
            PLTR_ac_DW.UnitDelay_DSTATE_n) - 1));
    }

    /* End of Switch: '<S583>/Switch' */

    /* Logic: '<S583>/AND' incorporates:
     *  Constant: '<S583>/Constant Value2'
     *  RelationalOperator: '<S583>/Greater  Than'
     *  UnitDelay: '<S583>/Unit Delay'
     */
    VePLTR_b_HCPOffTime_Pass = (rtb_OR1_g || (((sint32)
        PLTR_ac_DW.UnitDelay_DSTATE_n) > 0));

    /* End of Outputs for SubSystem: '<S576>/Turn Off Delay Sample Modified' */

    /* Outputs for Enabled SubSystem: '<S525>/Subsystem' incorporates:
     *  EnablePort: '<S580>/Enable'
     */
    if (VePLTR_b_HCPOffTime_Pass)
    {
        /* Sum: '<S580>/Sum' */
        PLTR_ac_B.Sum = PLTR_ac_B.Merge_m - PLTR_ac_B.Merge2_n;

        /* Logic: '<S580>/Logical1' incorporates:
         *  SignalConversion generated from: '<S86>/VePLTI_b_RTC_CurrentTimeFA_Init_write'
         *  SignalConversion generated from: '<S87>/RTC_CurrentTimeFA_Init_read'
         */
        PLTR_ac_B.Logical1 = ((rtb_Merge1 || Switch4) ||
                              (Rte_IrvRead_PLTR_SlowTEF_VePLTI_b_RTC_CurrentTimeFA_Init_write_IRV
                               ()));
    }

    /* End of Outputs for SubSystem: '<S525>/Subsystem' */
    /* End of Outputs for S-Function (fcgen): '<S87>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/SlowTEF' */

    /* Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl' */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value(&rtb_OR);

    /* Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe' */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value(&tmpRead_3);

    /* RootInportFunctionCallGenerator generated from: '<Root>/SlowTEF' incorporates:
     *  SubSystem: '<Root>/PLTR_SlowTEF'
     */
    /* S-Function (fcgen): '<S87>/FcnCallGen' incorporates:
     *  SubSystem: '<S87>/GPSTimeRead'
     */
    /* DataTypeConversion: '<S527>/Data Type Conversion2' incorporates:
     *  Constant: '<S527>/Constant'
     *  Constant: '<S527>/Constant1'
     *  Merge: '<Root>/Merge31'
     *  Merge: '<Root>/Merge33'
     *  Merge: '<Root>/Merge35'
     *  Product: '<S527>/Product'
     *  Product: '<S527>/Product1'
     *  SignalConversion generated from: '<S87>/VePLTR_t_GPSUTCSecond'
     *  SignalConversion generated from: '<S87>/VePLTR_thr_GPSUTCHour'
     *  SignalConversion generated from: '<S87>/VePLTR_tmn_GPSUTCMinute'
     *  Sum: '<S527>/Add'
     *  Sum: '<S527>/Add1'
     */
    DataTypeConversion2 = (uint32)((float32)
        ((((Rte_IrvRead_PLTR_SlowTEF_VePLTR_thr_GPS_UTC_Hour_PwrOn_IRV() * 60.0F)
           + Rte_IrvRead_PLTR_SlowTEF_VePLTR_tmn_GPS_UTC_Minute_PwrOn_IRV()) *
          60.0F) + Rte_IrvRead_PLTR_SlowTEF_VePLTR_t_GPS_UTC_Second_PwrOn_IRV()));

    /* Logic: '<S522>/Logical Operator' incorporates:
     *  Merge: '<Root>/Merge24'
     *  Merge: '<Root>/Merge26'
     *  Merge: '<Root>/Merge28'
     *  Merge: '<Root>/Merge30'
     *  Merge: '<Root>/Merge32'
     *  Merge: '<Root>/Merge34'
     *  SignalConversion generated from: '<S87>/VePLTR_b_GPSDateDay_FA'
     *  SignalConversion generated from: '<S87>/VePLTR_b_GPSDateMonth_FA'
     *  SignalConversion generated from: '<S87>/VePLTR_b_GPSDateYear_FA'
     *  SignalConversion generated from: '<S87>/VePLTR_b_GPSUTCHour_FA'
     *  SignalConversion generated from: '<S87>/VePLTR_b_GPSUTCMinute_FA'
     *  SignalConversion generated from: '<S87>/VePLTR_b_GPSUTCSecond_FA'
     */
    rtb_OR1_g = ((((((Rte_IrvRead_PLTR_SlowTEF_VePLTR_b_GPS_Date_DayFA_write_IRV
                      ()) ||
                     (Rte_IrvRead_PLTR_SlowTEF_VePLTR_b_GPS_Date_MonthFA_write_IRV
                      ())) ||
                    (Rte_IrvRead_PLTR_SlowTEF_VePLTR_b_GPS_Date_YearFA_write_IRV
                     ())) ||
                   (Rte_IrvRead_PLTR_SlowTEF_VePLTR_b_GPS_UTC_HourFA_write_IRV()))
                  ||
                  (Rte_IrvRead_PLTR_SlowTEF_VePLTR_b_GPS_UTC_MinuteFA_write_IRV()))
                 ||
                 (Rte_IrvRead_PLTR_SlowTEF_VePLTR_b_GPS_UTC_SecondFA_write_IRV()));

    /* S-Function (fcgen): '<S87>/FcnCallGen' incorporates:
     *  SubSystem: '<S87>/RTCDiag'
     */
    /* RelationalOperator: '<S526>/Comparison2' incorporates:
     *  Constant: '<S591>/Constant'
     *  SignalConversion generated from: '<S87>/VeDFIB_e_RTCReadSts'
     */
    AND_e = (((uint32)rtb_TmpSignalConversionAtVeDFIB_e_RTCRea) !=
             CeDFIB_e_RTCCallCompleteOK);

    /* Logic: '<S526>/Logical Operator' incorporates:
     *  Constant: '<S590>/Constant'
     *  Constant: '<S592>/Constant'
     *  Constant: '<S593>/Constant'
     *  Constant: '<S597>/Calib'
     *  Logic: '<S526>/Logical Operator1'
     *  RelationalOperator: '<S526>/Comparison1'
     *  RelationalOperator: '<S526>/Comparison3'
     *  RelationalOperator: '<S526>/Comparison4'
     */
    rtb_RelationalOperator3 = (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
        (((((uint32)KePLTR_e_RTCSyncDiag_Type) == CePLTR_e_RTCSyncDiag_HCPOnly) ||
          (((uint32)KePLTR_e_RTCSyncDiag_Type) == CePLTR_e_RTCSyncDiag_BOTH_OR))
         || (((uint32)KePLTR_e_RTCSyncDiag_Type) ==
             CePLTR_e_RTCSyncDiag_BOTH_AND)));

    /* Logic: '<S526>/Logical Operator2' incorporates:
     *  Constant: '<S594>/Constant'
     *  Constant: '<S595>/Constant'
     *  Constant: '<S596>/Constant'
     *  Logic: '<S526>/Logical Operator3'
     *  RelationalOperator: '<S526>/Comparison5'
     *  RelationalOperator: '<S526>/Comparison6'
     *  RelationalOperator: '<S526>/Comparison7'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_IsDiag =
        (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag && (((((uint32)
             KePLTR_e_RTCSyncDiag_Type) == CePLTR_e_RTCSyncDiag_GPSOnly) ||
           (((uint32)KePLTR_e_RTCSyncDiag_Type) == CePLTR_e_RTCSyncDiag_BOTH_OR))
          || (((uint32)KePLTR_e_RTCSyncDiag_Type) ==
              CePLTR_e_RTCSyncDiag_BOTH_AND)));

    /* Logic: '<S526>/OR' */
    rtb_OR = (tmpRead_3 || rtb_OR);

    /* Chart: '<S526>/RTCSync_GPSCheck' incorporates:
     *  Constant: '<S598>/Calib'
     */
    /* Gateway: PLTR_SlowTEF/RTCDiag/RTCSync_GPSCheck */
    /* During: PLTR_SlowTEF/RTCDiag/RTCSync_GPSCheck */
    if (((uint32)PLTR_ac_DW.is_active_c141_PLTR_ac) == 0U)
    {
        /* Entry: PLTR_SlowTEF/RTCDiag/RTCSync_GPSCheck */
        PLTR_ac_DW.is_active_c141_PLTR_ac = 1U;

        /* Entry Internal: PLTR_SlowTEF/RTCDiag/RTCSync_GPSCheck */
        /* Transition: '<S600>:723' */
        PLTR_ac_DW.is_c141_PLTR_ac = PLTR_ac_IN_INIT;

        /* Entry 'INIT': '<S600>:722' */
        VePLTR_e_RTCSyncDiagStat_GPSCheck = CePLTR_e_RTCSyncDiagStat_INIT;
        VePLTR_e_RTCSyncDiagReport_GPSCheck = CePLTR_e_RTCSyncDiag_NotTested;
    }
    else if (((sint32)PLTR_ac_DW.is_c141_PLTR_ac) == 1)
    {
        /* During 'INIT': '<S600>:722' */
        if (((((!rtb_OR) && (!rtb_TmpSignalConversionAtVeDFIB_b_RTCChi)) &&
                rtb_TmpSignalConversionAtVeDFIR_b_IsDiag) && (!AND_e)) &&
                (!rtb_OR1_g))
        {
            /* Transition: '<S600>:786' */
            /* Transition: '<S600>:727' */
            PLTR_ac_DW.RTCTimeTestInit_d = PLTR_ac_B.Merge_m;
            PLTR_ac_DW.GPSTimeTestInit = DataTypeConversion2;
            VePLTR_t_HCPTimer = 0U;
            VePLTR_t_RTCTimeTest_GPSCheck = 0U;
            VePLTR_t_GPSTimeTest = 0U;

            /* Exit 'INIT': '<S600>:722' */
            VePLTR_e_RTCSyncDiagStat_GPSCheck = CePLTR_e_RTCSyncDiagStat_RUNNING;
            PLTR_ac_DW.is_c141_PLTR_ac = PLTR_ac_IN_RUNNING;
        }
    }
    else
    {
        /* During 'RUNNING': '<S600>:726' */
        guard1 = false;
        if ((rtb_OR || rtb_TmpSignalConversionAtVeDFIB_b_RTCChi) ||
                (!rtb_TmpSignalConversionAtVeDFIR_b_IsDiag))
        {
            /* Transition: '<S600>:787' */
            guard1 = true;
        }
        else
        {
            /*  Time Resynchronization  */
            if (VePLTR_t_HCPTimer >= KePLTR_t_RTCSyncDiagTstWndw)
            {
                /* Transition: '<S600>:791' */
                if ((!AND_e) && (!rtb_OR1_g))
                {
                    /* Transition: '<S600>:790' */
                    /* Transition: '<S600>:727' */
                    PLTR_ac_DW.RTCTimeTestInit_d = PLTR_ac_B.Merge_m;
                    PLTR_ac_DW.GPSTimeTestInit = DataTypeConversion2;
                    VePLTR_t_HCPTimer = 0U;
                    VePLTR_t_RTCTimeTest_GPSCheck = 0U;
                    VePLTR_t_GPSTimeTest = 0U;
                    PLTR_ac_DW.is_c141_PLTR_ac = PLTR_ac_IN_RUNNING;
                }
                else
                {
                    /* Transition: '<S600>:789' */
                    guard1 = true;
                }
            }
            else
            {
                /* Transition: '<S600>:800' */
                qY = VePLTR_t_HCPTimer + 1U;
                if ((VePLTR_t_HCPTimer + 1U) < VePLTR_t_HCPTimer)
                {
                    qY = MAX_uint32_T;
                }

                VePLTR_t_HCPTimer = qY;
                if (AND_e || rtb_OR1_g)
                {
                    /* Transition: '<S600>:801' */
                    /* Transition: '<S600>:805' */
                    VePLTR_e_RTCSyncDiagReport_GPSCheck =
                        CePLTR_e_RTCSyncDiag_NotTested;

                    /* Transition: '<S600>:819' */
                    /* Transition: '<S600>:823' */
                }
                else
                {
                    /* Transition: '<S600>:802' */
                    VePLTR_t_RTCTimeTest_GPSCheck = PLTR_ac_B.Merge_m -
                        PLTR_ac_DW.RTCTimeTestInit_d;
                    if (VePLTR_t_RTCTimeTest_GPSCheck > PLTR_ac_B.Merge_m)
                    {
                        VePLTR_t_RTCTimeTest_GPSCheck = 0U;
                    }

                    if (DataTypeConversion2 > PLTR_ac_DW.GPSTimeTestInit)
                    {
                        /* Transition: '<S600>:806' */
                        /* Transition: '<S600>:807' */
                        VePLTR_t_GPSTimeTest = DataTypeConversion2 -
                            PLTR_ac_DW.GPSTimeTestInit;
                        if (VePLTR_t_GPSTimeTest > DataTypeConversion2)
                        {
                            VePLTR_t_GPSTimeTest = 0U;
                        }

                        /* Transition: '<S600>:809' */
                    }
                    else
                    {
                        /* Transition: '<S600>:811' */
                        qY = 86399U - PLTR_ac_DW.GPSTimeTestInit;
                        if ((86399U - PLTR_ac_DW.GPSTimeTestInit) > 86399U)
                        {
                            qY = 0U;
                        }

                        DataTypeConversion2 += qY;
                        if (DataTypeConversion2 < qY)
                        {
                            DataTypeConversion2 = MAX_uint32_T;
                        }

                        VePLTR_t_GPSTimeTest = DataTypeConversion2 + 1U;
                        if ((DataTypeConversion2 + 1U) < DataTypeConversion2)
                        {
                            VePLTR_t_GPSTimeTest = MAX_uint32_T;
                        }
                    }

                    /* Transition: '<S600>:810' */
                    qY = VePLTR_t_GPSTimeTest + KePLTR_t_RTCSyncDiagThrshld;
                    if (qY < VePLTR_t_GPSTimeTest)
                    {
                        qY = MAX_uint32_T;
                    }

                    DataTypeConversion2 = VePLTR_t_GPSTimeTest -
                        KePLTR_t_RTCSyncDiagThrshld;
                    if (DataTypeConversion2 > VePLTR_t_GPSTimeTest)
                    {
                        DataTypeConversion2 = 0U;
                    }

                    if ((VePLTR_t_RTCTimeTest_GPSCheck > qY) ||
                            (VePLTR_t_RTCTimeTest_GPSCheck < DataTypeConversion2))
                    {
                        /* Transition: '<S600>:812' */
                        /* Transition: '<S600>:821' */
                        VePLTR_e_RTCSyncDiagReport_GPSCheck =
                            CePLTR_e_RTCSyncDiag_Fail;

                        /* Transition: '<S600>:823' */
                    }
                    else
                    {
                        /* Transition: '<S600>:820' */
                        VePLTR_e_RTCSyncDiagReport_GPSCheck =
                            CePLTR_e_RTCSyncDiag_Pass;
                    }
                }

                /* Transition: '<S600>:822' */
            }
        }

        if (guard1)
        {
            PLTR_ac_DW.is_c141_PLTR_ac = PLTR_ac_IN_INIT;

            /* Entry 'INIT': '<S600>:722' */
            VePLTR_e_RTCSyncDiagStat_GPSCheck = CePLTR_e_RTCSyncDiagStat_INIT;
            VePLTR_e_RTCSyncDiagReport_GPSCheck = CePLTR_e_RTCSyncDiag_NotTested;
        }
    }

    /* End of Chart: '<S526>/RTCSync_GPSCheck' */

    /* Chart: '<S526>/RTCSync_HCPCheck' incorporates:
     *  Constant: '<S598>/Calib'
     */
    /* Gateway: PLTR_SlowTEF/RTCDiag/RTCSync_HCPCheck */
    /* During: PLTR_SlowTEF/RTCDiag/RTCSync_HCPCheck */
    if (((uint32)PLTR_ac_DW.is_active_c83_PLTR_ac) == 0U)
    {
        /* Entry: PLTR_SlowTEF/RTCDiag/RTCSync_HCPCheck */
        PLTR_ac_DW.is_active_c83_PLTR_ac = 1U;

        /* Entry Internal: PLTR_SlowTEF/RTCDiag/RTCSync_HCPCheck */
        /* Transition: '<S601>:723' */
        PLTR_ac_DW.is_c83_PLTR_ac = PLTR_ac_IN_INIT;

        /* Entry 'INIT': '<S601>:722' */
        VePLTR_e_RTCSyncDiagStat_HCPCheck = CePLTR_e_RTCSyncDiagStat_INIT;
        VePLTR_e_RTCSyncDiagReport_HCPCheck = CePLTR_e_RTCSyncDiag_NotTested;
    }
    else if (((sint32)PLTR_ac_DW.is_c83_PLTR_ac) == 1)
    {
        /* During 'INIT': '<S601>:722' */
        if ((((!rtb_OR) && (!rtb_TmpSignalConversionAtVeDFIB_b_RTCChi)) &&
                rtb_RelationalOperator3) && (!AND_e))
        {
            /* Transition: '<S601>:786' */
            /* Transition: '<S601>:727' */
            PLTR_ac_DW.RTCTimeTestInit = PLTR_ac_B.Merge_m;
            VePLTR_t_HCPTimeTest = 0U;
            VePLTR_t_RTCTimeTest_HCPCheck = 0U;

            /* Exit 'INIT': '<S601>:722' */
            VePLTR_e_RTCSyncDiagStat_HCPCheck = CePLTR_e_RTCSyncDiagStat_RUNNING;
            PLTR_ac_DW.is_c83_PLTR_ac = PLTR_ac_IN_RUNNING;
        }
    }
    else
    {
        /* During 'RUNNING': '<S601>:726' */
        guard1 = false;
        if ((rtb_OR || rtb_TmpSignalConversionAtVeDFIB_b_RTCChi) ||
                (!rtb_RelationalOperator3))
        {
            /* Transition: '<S601>:787' */
            guard1 = true;
        }
        else
        {
            /*  Time Resynchronization  */
            if (VePLTR_t_HCPTimeTest >= KePLTR_t_RTCSyncDiagTstWndw)
            {
                /* Transition: '<S601>:791' */
                if (!AND_e)
                {
                    /* Transition: '<S601>:790' */
                    /* Transition: '<S601>:727' */
                    PLTR_ac_DW.RTCTimeTestInit = PLTR_ac_B.Merge_m;
                    VePLTR_t_HCPTimeTest = 0U;
                    VePLTR_t_RTCTimeTest_HCPCheck = 0U;
                    PLTR_ac_DW.is_c83_PLTR_ac = PLTR_ac_IN_RUNNING;
                }
                else
                {
                    /* Transition: '<S601>:789' */
                    guard1 = true;
                }
            }
            else
            {
                /* Transition: '<S601>:767' */
                qY = VePLTR_t_HCPTimeTest + 1U;
                if ((VePLTR_t_HCPTimeTest + 1U) < VePLTR_t_HCPTimeTest)
                {
                    qY = MAX_uint32_T;
                }

                VePLTR_t_HCPTimeTest = qY;
                if (AND_e)
                {
                    /* Transition: '<S601>:769' */
                    /* Transition: '<S601>:779' */
                    VePLTR_e_RTCSyncDiagReport_HCPCheck =
                        CePLTR_e_RTCSyncDiag_NotTested;

                    /* Transition: '<S601>:781' */
                    /* Transition: '<S601>:782' */
                }
                else
                {
                    /* Transition: '<S601>:770' */
                    VePLTR_t_RTCTimeTest_HCPCheck = PLTR_ac_B.Merge_m -
                        PLTR_ac_DW.RTCTimeTestInit;
                    if (VePLTR_t_RTCTimeTest_HCPCheck > PLTR_ac_B.Merge_m)
                    {
                        VePLTR_t_RTCTimeTest_HCPCheck = 0U;
                    }

                    qY = VePLTR_t_HCPTimeTest + KePLTR_t_RTCSyncDiagThrshld;
                    if (qY < VePLTR_t_HCPTimeTest)
                    {
                        qY = MAX_uint32_T;
                    }

                    DataTypeConversion2 = VePLTR_t_HCPTimeTest -
                        KePLTR_t_RTCSyncDiagThrshld;
                    if (DataTypeConversion2 > VePLTR_t_HCPTimeTest)
                    {
                        DataTypeConversion2 = 0U;
                    }

                    if ((VePLTR_t_RTCTimeTest_HCPCheck > qY) ||
                            (VePLTR_t_RTCTimeTest_HCPCheck < DataTypeConversion2))
                    {
                        /* Transition: '<S601>:783' */
                        /* Transition: '<S601>:780' */
                        VePLTR_e_RTCSyncDiagReport_HCPCheck =
                            CePLTR_e_RTCSyncDiag_Fail;

                        /* Transition: '<S601>:782' */
                    }
                    else
                    {
                        /* Transition: '<S601>:784' */
                        VePLTR_e_RTCSyncDiagReport_HCPCheck =
                            CePLTR_e_RTCSyncDiag_Pass;
                    }
                }

                /* Transition: '<S601>:796' */
            }
        }

        if (guard1)
        {
            PLTR_ac_DW.is_c83_PLTR_ac = PLTR_ac_IN_INIT;

            /* Entry 'INIT': '<S601>:722' */
            VePLTR_e_RTCSyncDiagStat_HCPCheck = CePLTR_e_RTCSyncDiagStat_INIT;
            VePLTR_e_RTCSyncDiagReport_HCPCheck = CePLTR_e_RTCSyncDiag_NotTested;
        }
    }

    /* End of Chart: '<S526>/RTCSync_HCPCheck' */

    /* RelationalOperator: '<S602>/Relational Operator' incorporates:
     *  Constant: '<S609>/Constant'
     */
    rtb_TmpSignalConversionAtVeDFIB_b_RTCChi = (((uint32)
        VePLTR_e_RTCSyncDiagReport_HCPCheck) == CePLTR_e_RTCSyncDiag_Pass);

    /* RelationalOperator: '<S602>/Relational Operator4' incorporates:
     *  Constant: '<S605>/Constant'
     */
    rtb_OR = (((uint32)VePLTR_e_RTCSyncDiagReport_GPSCheck) ==
              CePLTR_e_RTCSyncDiag_Pass);

    /* End of Outputs for S-Function (fcgen): '<S87>/FcnCallGen' */

    /* Outport: '<Root>/VePLTR_b_BatteryWasDisconnected' incorporates:
     *  Logic: '<S521>/AND'
     */
    (void)Rte_Write_VePLTR_b_BatteryWasDisconnected_Value(Switch4);

    /* S-Function (fcgen): '<S87>/FcnCallGen' incorporates:
     *  SubSystem: '<S87>/PLTI_ProcessInputs1'
     */
    /* Switch: '<S524>/Switch3' incorporates:
     *  Constant: '<S567>/Calib'
     *  Constant: '<S573>/Calib'
     *  Merge: '<Root>/Merge_84'
     *  SignalConversion generated from: '<S87>/VePLTR_e_ECMVtdFreeze_read'
     */
    if (KePLTR_b_OvrrdECMVtdFreezeEnabl)
    {
        tmp = KePLTR_e_OvrrdECMVtdFreezeVal;
    }
    else
    {
        tmp = Rte_IrvRead_PLTR_SlowTEF_VePLTR_e_ECMVtdFreezeInit_write_IRV();
    }

    /* Outport: '<Root>/VePLTR_e_ECMVtdFreeze' incorporates:
     *  SignalConversion generated from: '<S87>/ECMVtdFreeze'
     *  Switch: '<S524>/Switch3'
     */
    (void)Rte_Write_VePLTR_e_ECMVtdFreeze_Value(tmp);

    /* Switch: '<S524>/Switch2' incorporates:
     *  Constant: '<S568>/Calib'
     *  Constant: '<S569>/Calib'
     *  Merge: '<Root>/Merge_141'
     *  SignalConversion generated from: '<S87>/VePLTR_b_FuelLevelLowClster'
     */
    if (KePLTR_b_OvrrdFuelLevelLowClsterEnabl)
    {
        Switch4 = KePLTR_b_OvrrdFuelLevelLowClsterVal;
    }
    else
    {
        Switch4 = Rte_IrvRead_PLTR_SlowTEF_FuelLevelLowClster_Init_write_IRV();
    }

    /* End of Switch: '<S524>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S87>/FcnCallGen' */

    /* Outport: '<Root>/VePLTR_b_FuelLevelLowClster' incorporates:
     *  SignalConversion generated from: '<S87>/FuelLevelLowClster'
     */
    (void)Rte_Write_VePLTR_b_FuelLevelLowClster_Value(Switch4);

    /* Outport: '<Root>/VePLTR_b_HCPOffTimeFA' incorporates:
     *  SignalConversion generated from: '<S87>/VePLTC_b_HCPOffTimeFA'
     */
    (void)Rte_Write_VePLTR_b_HCPOffTimeFA_Value(PLTR_ac_B.Logical1);

    /* S-Function (fcgen): '<S87>/FcnCallGen' incorporates:
     *  SubSystem: '<S87>/RTCArbitration'
     */
    /* Outport: '<Root>/VePLTR_b_RTC_CurrentTimeFA' incorporates:
     *  Logic: '<S575>/AND'
     *  SignalConversion generated from: '<S87>/VePLTC_b_RTC_CurrentTimeFA'
     */
    (void)Rte_Write_VePLTR_b_RTC_CurrentTimeFA_Value(rtb_Merge1);

    /* End of Outputs for S-Function (fcgen): '<S87>/FcnCallGen' */

    /* Outport: '<Root>/VePLTR_t_HCPOffTime' incorporates:
     *  SignalConversion generated from: '<S87>/VePLTC_t_HCPOffTime'
     */
    (void)Rte_Write_VePLTR_t_HCPOffTime_Value(PLTR_ac_B.Sum);

    /* Outport: '<Root>/VePLTR_t_RTC_CurrentTime' incorporates:
     *  SignalConversion generated from: '<S87>/VePLTC_t_RTC_CurrentTime'
     */
    (void)Rte_Write_VePLTR_t_RTC_CurrentTime_Value(PLTR_ac_B.Merge_m);

    /* Outport: '<Root>/VePLTR_t_RTC_SleepTime' incorporates:
     *  SignalConversion generated from: '<S87>/VePLTC_t_RTC_SleepTime'
     */
    (void)Rte_Write_VePLTR_t_RTC_SleepTime_Value(PLTR_ac_B.Merge2_n);

    /* S-Function (fcgen): '<S87>/FcnCallGen' incorporates:
     *  SubSystem: '<S87>/PLTC_Control_1000ms'
     */
    /* S-Function (fcgen): '<S523>/FunctionCallGenerator1' incorporates:
     *  SubSystem: '<S523>/WarmupAchievedSubsystem'
     */
    /* Outport: '<Root>/VePLTR_b_WarmupAchieved' incorporates:
     *  Logic: '<S534>/Logical7'
     *  SignalConversion generated from: '<S87>/VePLTR_b_WarmupAchieved'
     */
    (void)Rte_Write_VePLTR_b_WarmupAchieved_Value(((VePLTC_b_1stCondition) &&
        (VePLTC_b_2ndCondition)) && (VePLTC_b_3rdCondition));

    /* End of Outputs for S-Function (fcgen): '<S523>/FunctionCallGenerator1' */
    /* End of Outputs for S-Function (fcgen): '<S87>/FcnCallGen' */

    /* Outport: '<Root>/VePLTR_e_FaultSts_ECUInplantmodeAct' incorporates:
     *  Merge: '<S539>/Merge'
     *  SignalConversion generated from: '<S87>/VePLTR_e_FaultSts_ECUInplantmodeAct'
     */
    (void)Rte_Write_VePLTR_e_FaultSts_ECUInplantmodeAct_Value(PLTR_ac_B.Merge_a3);

    /* S-Function (fcgen): '<S87>/FcnCallGen' incorporates:
     *  SubSystem: '<S87>/PLTC_Control_1000ms'
     */
    /* S-Function (fcgen): '<S523>/FunctionCallGenerator1' incorporates:
     *  SubSystem: '<S523>/Outputs_Update'
     */
    /* Outport: '<Root>/VePLTR_e_ShippingMode' incorporates:
     *  DataStoreRead: '<S529>/Data Store Read1'
     *  DataTypeConversion: '<S536>/DataTypeConversion'
     *  SignalConversion generated from: '<S87>/VePLTR_e_ShippingMode'
     */
    (void)Rte_Write_VePLTR_e_ShippingMode_Value((TePLTR_e_ShipingMode)
        EePLTR_e_ShippingMode);

    /* Outport: '<Root>/VePLTR_milel_IPEETestMileageLimit' incorporates:
     *  DataStoreRead: '<S529>/Data Store Read3'
     *  SignalConversion generated from: '<S87>/VePLTR_milel_IPEETestMileageLimit'
     */
    (void)Rte_Write_VePLTR_milel_IPEETestMileageLimit_Value
        (AePLTR_milel_IPEETestMileageLimit);

    /* Outport: '<Root>/VePLTR_milel_InPlntMileageLmt_Miles' incorporates:
     *  DataStoreRead: '<S529>/Data Store Read2'
     *  SignalConversion generated from: '<S87>/VePLTR_milel_InPlntMileageLmt_Miles'
     */
    (void)Rte_Write_VePLTR_milel_InPlntMileageLmt_Miles_Value
        (PLTR_ac_DW.AePLTR_milel_OdometerLimit);

    /* Outport: '<Root>/VePLTR_milel_Odometer_Miles' incorporates:
     *  Gain: '<S537>/Gain'
     *  SignalConversion generated from: '<S87>/VePLTR_milel_Odometer_Miles'
     */
    (void)Rte_Write_VePLTR_milel_Odometer_Miles_Value
        (VePLTI_milel_Odometer_Miles);

    /* End of Outputs for S-Function (fcgen): '<S523>/FunctionCallGenerator1' */
    /* End of Outputs for S-Function (fcgen): '<S87>/FcnCallGen' */

    /* Merge: '<Root>/HVBatRealTimeClock_BPCM_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S87>/HVBatRealTimeClock_BPCM_write'
     * */
    Rte_IrvWrite_PLTR_SlowTEF_HVBatRealTimeClock_BPCM_write_IRV
        (PLTR_ac_B.VePLTI_t_HVBatRealTimeClock_BPCM);

    /* Merge: '<Root>/HVBatRealTimeClock_FA_BPCM_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S87>/HVBatRealTimeClock_FA_BPCM_write'
     * */
    Rte_IrvWrite_PLTR_SlowTEF_HVBatRealTimeClock_FA_BPCM_write_IRV
        (PLTR_ac_B.VePLTI_b_HVBatRealTimeClock_FA_BPCM);

    /* Merge: '<Root>/HVBatSleepTime_BPCM_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S87>/HVBatSleepTime_BPCM_write'
     * */
    Rte_IrvWrite_PLTR_SlowTEF_HVBatSleepTime_BPCM_write_IRV
        (PLTR_ac_B.VePLTI_t_HVBatSleepTime_BPCM);

    /* S-Function (fcgen): '<S87>/FcnCallGen' incorporates:
     *  SubSystem: '<S87>/PLTI_ProcessInputs1'
     */
    /* Merge: '<Root>/OutTorqReqModHH_IRV_Merge' incorporates:
     *  Inport: '<S524>/VeHTDR_M_OutTorqReqModHH'
     *  SignalConversion generated from: '<S87>/OutTorqReqModHH_write'
     */
    Rte_IrvWrite_PLTR_SlowTEF_OutTorqReqModHH_write_IRV(tmpRead_2);

    /* End of Outputs for S-Function (fcgen): '<S87>/FcnCallGen' */

    /* Merge: '<Root>/Toggle_1s_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S87>/Toggle_1s_write'
     *  UnitDelay: '<S524>/Unit Delay1'
     * */
    Rte_IrvWrite_PLTR_SlowTEF_Toggle_1s_write_IRV(PLTR_ac_DW.UnitDelay1_DSTATE_o);

    /* S-Function (fcgen): '<S87>/FcnCallGen' incorporates:
     *  SubSystem: '<S87>/RTCDiag'
     */
    /* If: '<S602>/If1' incorporates:
     *  Constant: '<S606>/Constant'
     *  Constant: '<S607>/Constant'
     *  Constant: '<S608>/Constant'
     *  Constant: '<S614>/Constant'
     *  Constant: '<S615>/Constant'
     *  Constant: '<S618>/Constant'
     *  Logic: '<S604>/Logical Operator1'
     *  Logic: '<S604>/Logical Operator10'
     *  Logic: '<S604>/Logical Operator11'
     *  Logic: '<S604>/Logical Operator12'
     *  Logic: '<S604>/Logical Operator2'
     *  Logic: '<S604>/Logical Operator3'
     *  RelationalOperator: '<S602>/Comparison1'
     *  RelationalOperator: '<S602>/Relational Operator1'
     *  RelationalOperator: '<S602>/Relational Operator5'
     *  RelationalOperator: '<S604>/Comparison1'
     *  RelationalOperator: '<S604>/Comparison2'
     *  Switch: '<S604>/Switch3'
     *  Switch: '<S604>/Switch5'
     */
    if (((uint32)KePLTR_e_RTCSyncDiag_Type) == CePLTR_e_RTCSyncDiag_BOTH_AND)
    {
        /* Outputs for IfAction SubSystem: '<S602>/BOTH_AND' incorporates:
         *  ActionPort: '<S603>/Action Port'
         */
        /* Switch: '<S603>/Switch1' incorporates:
         *  Constant: '<S606>/Constant'
         *  Constant: '<S607>/Constant'
         *  Constant: '<S611>/Constant'
         *  Constant: '<S612>/Constant'
         *  Logic: '<S603>/Logical Operator1'
         *  Logic: '<S603>/Logical Operator2'
         *  RelationalOperator: '<S602>/Relational Operator1'
         *  RelationalOperator: '<S602>/Relational Operator5'
         *  Switch: '<S603>/Switch2'
         */
        if ((((uint32)VePLTR_e_RTCSyncDiagReport_HCPCheck) ==
                CePLTR_e_RTCSyncDiag_Fail) && (((uint32)
                VePLTR_e_RTCSyncDiagReport_GPSCheck) ==
                CePLTR_e_RTCSyncDiag_Fail))
        {
            tmp_0 = CePLTR_e_RTCSyncDiag_Fail;
        }
        else if (rtb_TmpSignalConversionAtVeDFIB_b_RTCChi && rtb_OR)
        {
            /* Switch: '<S603>/Switch2' incorporates:
             *  Constant: '<S613>/Constant'
             */
            tmp_0 = CePLTR_e_RTCSyncDiag_Pass;
        }
        else
        {
            tmp_0 = CePLTR_e_RTCSyncDiag_NotTested;
        }

        /* End of Switch: '<S603>/Switch1' */
        /* End of Outputs for SubSystem: '<S602>/BOTH_AND' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S602>/BOTH_OR' incorporates:
         *  ActionPort: '<S604>/Action Port'
         */
        if ((((uint32)VePLTR_e_RTCSyncDiagReport_HCPCheck) ==
                CePLTR_e_RTCSyncDiag_Fail) || (((uint32)
                VePLTR_e_RTCSyncDiagReport_GPSCheck) ==
                CePLTR_e_RTCSyncDiag_Fail))
        {
            /* Switch: '<S604>/Switch3' incorporates:
             *  Constant: '<S617>/Constant'
             */
            tmp_0 = CePLTR_e_RTCSyncDiag_Fail;
        }
        else if (((rtb_TmpSignalConversionAtVeDFIB_b_RTCChi && rtb_OR) &&
                  (((uint32)KePLTR_e_RTCSyncDiag_Type) ==
                   CePLTR_e_RTCSyncDiag_BOTH_OR)) ||
                 ((rtb_TmpSignalConversionAtVeDFIB_b_RTCChi || rtb_OR) &&
                  (((uint32)KePLTR_e_RTCSyncDiag_Type) !=
                   CePLTR_e_RTCSyncDiag_BOTH_OR)))
        {
            /* Switch: '<S604>/Switch5' incorporates:
             *  Constant: '<S616>/Constant'
             *  Switch: '<S604>/Switch3'
             */
            tmp_0 = CePLTR_e_RTCSyncDiag_Pass;
        }
        else
        {
            tmp_0 = CePLTR_e_RTCSyncDiag_NotTested;
        }

        /* End of Outputs for SubSystem: '<S602>/BOTH_OR' */
    }

    /* End of If: '<S602>/If1' */
    /* End of Outputs for S-Function (fcgen): '<S87>/FcnCallGen' */

    /* Merge: '<Root>/Merge_69_Irv1' incorporates:
     *  SignalConversion generated from: '<S87>/VePLTR_e_RTCTestSyncReport'
     */
    Rte_IrvWrite_PLTR_SlowTEF_VePLTR_e_RTCTestSyncReport_Init_IRV(tmp_0);

    /* S-Function (fcgen): '<S87>/FcnCallGen' incorporates:
     *  SubSystem: '<S87>/PLTI_ProcessInputs1'
     */
    /* Merge: '<Root>/VehSpd_IRV_Merge' incorporates:
     *  Inport: '<S524>/VeCSVR_v_VehSpd'
     *  SignalConversion generated from: '<S87>/VehSpd_write'
     */
    Rte_IrvWrite_PLTR_SlowTEF_VehSpd_write_IRV(tmpRead);

    /* End of Outputs for S-Function (fcgen): '<S87>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/SlowTEF' */
}

/* Output function */
FUNC(void, PLTR_CODE) DidWrite_RWD3025_HCPModEnblr_PLTR(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/DidWrite_RWD3025_HCPModEnblr_PLTR' incorporates:
     *  SubSystem: '<Root>/RWD3025_HCPModEnblr_PLTR'
     */
    /* SignalConversion generated from: '<S195>/VeDCAB_b_RWD3025_REMDisabled' incorporates:
     *  DataStoreWrite: '<S195>/Data Store Write2'
     *  Inport: '<Root>/VeDCAB_b_RWD3025_REMDisabled'
     */
    (void)Rte_Read_VeDCAB_b_RWD3025_REMDisabled_Value((&(AePLTR_b_REMDisabled)));

    /* SignalConversion generated from: '<S195>/VeDCAB_b_RWD3025_RadFanHandshake_disbld' incorporates:
     *  DataStoreWrite: '<S195>/Data Store Write1'
     *  Inport: '<Root>/VeDCAB_b_RWD3025_RadFanHandshake_disbld'
     */
    (void)Rte_Read_VeDCAB_b_RWD3025_RadFanHandshake_disbld_Value
        ((&(AePLTR_b_RadFanHandshake_disbld)));

    /* SignalConversion generated from: '<S195>/VeDCAB_b_RWD3025_InFieldMode' incorporates:
     *  DataStoreWrite: '<S195>/Data Store Write'
     *  Inport: '<Root>/VeDCAB_b_RWD3025_InFieldMode'
     */
    (void)Rte_Read_VeDCAB_b_RWD3025_InFieldMode_Value((&(AePLTR_b_InFieldMode)));

    /* Outport: '<Root>/AePLTR_b_InFieldMode_Strimm_Out' incorporates:
     *  DataStoreWrite: '<S195>/Data Store Write'
     *  SignalConversion generated from: '<S195>/AePLTR_b_InFieldMode_Did_out'
     */
    (void)Rte_Write_AePLTR_b_InFieldMode_AePLTR_b_InFieldMode
        (AePLTR_b_InFieldMode);

    /* Outport: '<Root>/AePLTR_b_RadFanHandshake_disbld_Strimm_Out' incorporates:
     *  DataStoreWrite: '<S195>/Data Store Write1'
     *  SignalConversion generated from: '<S195>/AePLTR_b_RadFanHandshake_disbld_Did_out'
     */
    (void)
        Rte_Write_AePLTR_b_RadFanHandshake_disbld_AePLTR_b_RadFanHandshake_disbld
        (AePLTR_b_RadFanHandshake_disbld);

    /* Outport: '<Root>/VePLTR_b_RadFanHndShk_dsbld' incorporates:
     *  DataStoreWrite: '<S195>/Data Store Write1'
     *  SignalConversion generated from: '<S195>/VePLTR_b_RadFanHandshake_disbld'
     */
    (void)Rte_Write_VePLTR_b_RadFanHndShk_dsbld_Value
        (AePLTR_b_RadFanHandshake_disbld);

    /* Outport: '<Root>/AePLTR_b_REMDisabled_Strimm_Out' incorporates:
     *  DataStoreWrite: '<S195>/Data Store Write2'
     *  SignalConversion generated from: '<S195>/AePLTR_b_REMDisabled_Did_out'
     */
    (void)Rte_Write_AePLTR_b_REMDisabled_AePLTR_b_REMDisabled
        (AePLTR_b_REMDisabled);

    /* Outport: '<Root>/VePLTR_b_REMDisabled' incorporates:
     *  DataStoreWrite: '<S195>/Data Store Write2'
     *  SignalConversion generated from: '<S195>/VePLTR_b_REMDisabled'
     */
    (void)Rte_Write_VePLTR_b_REMDisabled_Value(AePLTR_b_REMDisabled);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/DidWrite_RWD3025_HCPModEnblr_PLTR' */
}

/* Output function */
FUNC(void, PLTR_CODE) DidWrite_RWD9E3B_IPEETstMilgeLmt(void)
{
    float32 tmpRead;

    /* Inport: '<Root>/VeDCAB_milel_RWD9E3B_IPEETstMilgeLmt' */
    (void)Rte_Read_VeDCAB_milel_RWD9E3B_IPEETstMilgeLmt_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/DidWrite_RWD9E3B_IPEETstMilgeLmt' incorporates:
     *  SubSystem: '<Root>/RWD9E3B_IPEETstMilgeLmt'
     */
    /* DataStoreWrite: '<S196>/Data Store Write1' incorporates:
     *  SignalConversion generated from: '<S196>/VeDCAB_milel_RWD9E3B_IPEETstMilgeLmt'
     */
    AePLTR_milel_IPEETestMileageLimit = tmpRead;

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/DidWrite_RWD9E3B_IPEETstMilgeLmt' */

    /* RootInportFunctionCallGenerator generated from: '<Root>/DidWrite_RWD9E3B_IPEETstMilgeLmt' incorporates:
     *  SubSystem: '<Root>/RWD9E3B_IPEETstMilgeLmt'
     */

    /* Outport: '<Root>/AePLTR_milel_IPEETestMileageLimit_Strimm_Out' incorporates:
     *  SignalConversion generated from: '<S196>/VeDCAB_milel_RWD9E3B_IPEETstMilgeLmt'
     */
    (void)
        Rte_Write_AePLTR_milel_IPEETestMileageLimit_AePLTR_milel_IPEETestMileageLimit
        (tmpRead);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/DidWrite_RWD9E3B_IPEETstMilgeLmt' */
}

/* Output function */
FUNC(void, PLTR_CODE) DidWrite_RWD9EEB_InPlant_SOC_Setpoint(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/DidWrite_RWD9EEB_InPlant_SOC_Setpoint' incorporates:
     *  SubSystem: '<Root>/RWD9EEB_InPlant_SOC_Setpoint'
     */
    /* SignalConversion generated from: '<S197>/VeDCAB_Pct_RWD9EEB_InPlant_SOC_Setpoint' incorporates:
     *  DataStoreWrite: '<S197>/Data Store Write1'
     *  Inport: '<Root>/VeDCAB_Pct_RWD9EEB_InPlant_SOC_Setpoint'
     */
    (void)Rte_Read_VeDCAB_Pct_RWD9EEB_InPlant_SOC_Setpoint_Value
        (&PLTR_ac_DW.AePLTR_Pct_IP_SOCSetPt);

    /* Outport: '<Root>/AePLTR_Pct_IP_SOCSetPt_Strimm_Out' incorporates:
     *  DataStoreWrite: '<S197>/Data Store Write1'
     *  SignalConversion generated from: '<S197>/AePLTR_Pct_IP_SOCSetPt_Did_Out'
     */
    (void)Rte_Write_AePLTR_Pct_IP_SOCSetPt_AePLTR_Pct_IP_SOCSetPt
        (PLTR_ac_DW.AePLTR_Pct_IP_SOCSetPt);

    /* Outport: '<Root>/VePLTR_Pct_InPlant_SOCSetPt' incorporates:
     *  DataStoreWrite: '<S197>/Data Store Write1'
     *  SignalConversion generated from: '<S197>/VePLTR_Pct_InPlant_SOCSetPt'
     */
    (void)Rte_Write_VePLTR_Pct_InPlant_SOCSetPt_Value
        (PLTR_ac_DW.AePLTR_Pct_IP_SOCSetPt);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/DidWrite_RWD9EEB_InPlant_SOC_Setpoint' */
}

/* Output function */
FUNC(void, PLTR_CODE) DidWrite_RWD9EEC_REM_Logistics_SOC_Setpoint(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/DidWrite_RWD9EEC_REM_Logistics_SOC_Setpoint' incorporates:
     *  SubSystem: '<Root>/RWD9EEC_REM_Logistics_SOC_Setpoint'
     */
    /* SignalConversion generated from: '<S198>/VeDCAB_Pct_RWD9EEC_REM_Logistics_SOC_Setpoint' incorporates:
     *  DataStoreWrite: '<S198>/Data Store Write1'
     *  Inport: '<Root>/VeDCAB_Pct_RWD9EEC_REM_Logistics_SOC_Setpoint'
     */
    (void)Rte_Read_VeDCAB_Pct_RWD9EEC_REM_Logistics_SOC_Setpoint_Value
        (&PLTR_ac_DW.AePLTR_Pct_CS_SOCSetPt);

    /* Outport: '<Root>/AePLTR_Pct_CS_SOCSetPt_Strimm_Out' incorporates:
     *  DataStoreWrite: '<S198>/Data Store Write1'
     *  SignalConversion generated from: '<S198>/AePLTR_Pct_CS_SOCSetPt_Did_Out'
     */
    (void)Rte_Write_AePLTR_Pct_CS_SOCSetPt_AePLTR_Pct_CS_SOCSetPt
        (PLTR_ac_DW.AePLTR_Pct_CS_SOCSetPt);

    /* Outport: '<Root>/VePLTR_Pct_REMLogisticSOCSetPt' incorporates:
     *  DataStoreWrite: '<S198>/Data Store Write1'
     *  SignalConversion generated from: '<S198>/VePLTR_Pct_REMLogisticSOCSetPt'
     */
    (void)Rte_Write_VePLTR_Pct_REMLogisticSOCSetPt_Value
        (PLTR_ac_DW.AePLTR_Pct_CS_SOCSetPt);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/DidWrite_RWD9EEC_REM_Logistics_SOC_Setpoint' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_Pct_Slope(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_Pct_Slope' */
    /* Outport: '<Root>/VePLTR_b_Slope_FA' incorporates:
     *  Chart: '<S1>/FsftPLTR_Pct_SlopeChrt'
     *  SignalConversion generated from: '<S1>/VePLTR_b_Slope_FA_out'
     */
    /* Gateway: FsftPLTR_Pct_Slope/FsftPLTR_Pct_SlopeChrt */
    /* During: FsftPLTR_Pct_Slope/FsftPLTR_Pct_SlopeChrt */
    /* Entry Internal: FsftPLTR_Pct_Slope/FsftPLTR_Pct_SlopeChrt */
    /* Transition: '<S200>:2' */
    (void)Rte_Write_VePLTR_b_Slope_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_Pct_Slope' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_a_LongAccel(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_a_LongAccel' */
    /* Outport: '<Root>/VePLTR_a_LongAccel' incorporates:
     *  Chart: '<S2>/FsftPLTR_a_LongAccelChrt'
     *  SignalConversion generated from: '<S2>/VePLTR_a_LongAccel'
     */
    /* Gateway: FsftPLTR_a_LongAccel/FsftPLTR_a_LongAccelChrt */
    /* During: FsftPLTR_a_LongAccel/FsftPLTR_a_LongAccelChrt */
    /* Entry Internal: FsftPLTR_a_LongAccel/FsftPLTR_a_LongAccelChrt */
    /* Transition: '<S201>:2' */
    (void)Rte_Write_VePLTR_a_LongAccel_Value(KePLTR_a_LongAccelFsftVal);

    /* Outport: '<Root>/VePLTR_b_LongAccelFA' incorporates:
     *  Chart: '<S2>/FsftPLTR_a_LongAccelChrt'
     *  SignalConversion generated from: '<S2>/VePLTR_b_LongAccelFA'
     */
    (void)Rte_Write_VePLTR_b_LongAccelFA_Value(true);

    /* Merge: '<Root>/Merge_69_Irv' incorporates:
     *  Chart: '<S2>/FsftPLTR_a_LongAccelChrt'
     *  SignalConversion generated from: '<S2>/VePLTR_a_LongAccel_write'
     */
    Rte_IrvWrite_FsftPLTR_a_LongAccel_VePLTR_a_LongAccel_write_IRV
        (KePLTR_a_LongAccelFsftVal);

    /* Merge: '<Root>/Merge_24_Irv' incorporates:
     *  Chart: '<S2>/FsftPLTR_a_LongAccelChrt'
     *  SignalConversion generated from: '<S2>/VePLTR_b_LongAccelFA_write'
     */
    Rte_IrvWrite_FsftPLTR_a_LongAccel_VePLTR_b_LongAccelFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_a_LongAccel' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_a_LongAccelOffset(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_a_LongAccelOffset' */
    /* Outport: '<Root>/VePLTR_a_LongAccelOffset' incorporates:
     *  Chart: '<S3>/FsftPLTR_a_LongAccelOffsetChrt'
     *  SignalConversion generated from: '<S3>/VePLTR_a_LongAccelOffset'
     */
    /* Gateway: FsftPLTR_a_LongAccelOffset/FsftPLTR_a_LongAccelOffsetChrt */
    /* During: FsftPLTR_a_LongAccelOffset/FsftPLTR_a_LongAccelOffsetChrt */
    /* Entry Internal: FsftPLTR_a_LongAccelOffset/FsftPLTR_a_LongAccelOffsetChrt */
    /* Transition: '<S202>:2' */
    (void)Rte_Write_VePLTR_a_LongAccelOffset_Value
        (KePLTR_a_LongAccelOffsetFsftVal);

    /* Merge: '<Root>/Merge_38_Irv' incorporates:
     *  Chart: '<S3>/FsftPLTR_a_LongAccelOffsetChrt'
     *  SignalConversion generated from: '<S3>/VePLTR_a_LongAccelOffset_write'
     */
    Rte_IrvWrite_FsftPLTR_a_LongAccelOffset_VePLTR_a_LongAccelOffset_write_IRV
        (KePLTR_a_LongAccelOffsetFsftVal);

    /* Merge: '<Root>/Merge_39' incorporates:
     *  Chart: '<S3>/FsftPLTR_a_LongAccelOffsetChrt'
     *  SignalConversion generated from: '<S3>/VePLTR_b_LongAccelOffsetFA_write'
     */
    Rte_IrvWrite_FsftPLTR_a_LongAccelOffset_VePLTR_b_LongAccelOffsetFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_a_LongAccelOffset' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_a_TransAccel(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_a_TransAccel' */
    /* Outport: '<Root>/VePLTR_a_LatAccel' incorporates:
     *  Chart: '<S4>/FsftPLTR_a_TransAccelChrt'
     *  SignalConversion generated from: '<S4>/VePLTR_a_TransAccel'
     */
    /* Gateway: FsftPLTR_a_TransAccel/FsftPLTR_a_TransAccelChrt */
    /* During: FsftPLTR_a_TransAccel/FsftPLTR_a_TransAccelChrt */
    /* Entry Internal: FsftPLTR_a_TransAccel/FsftPLTR_a_TransAccelChrt */
    /* Transition: '<S203>:2' */
    (void)Rte_Write_VePLTR_a_LatAccel_Value(KePLTR_a_LatAccelFsftVal);

    /* Outport: '<Root>/VePLTR_b_LatAccelFA' incorporates:
     *  Chart: '<S4>/FsftPLTR_a_TransAccelChrt'
     *  SignalConversion generated from: '<S4>/VePLTR_b_TransAccelFA'
     */
    (void)Rte_Write_VePLTR_b_LatAccelFA_Value(true);

    /* Merge: '<Root>/Merge_45_Irv' incorporates:
     *  Chart: '<S4>/FsftPLTR_a_TransAccelChrt'
     *  SignalConversion generated from: '<S4>/VePLTR_a_TransAccel_write'
     */
    Rte_IrvWrite_FsftPLTR_a_TransAccel_VePLTR_a_TransAccel_write_IRV
        (KePLTR_a_LatAccelFsftVal);

    /* Merge: '<Root>/Merge_14' incorporates:
     *  Chart: '<S4>/FsftPLTR_a_TransAccelChrt'
     *  SignalConversion generated from: '<S4>/VePLTR_b_TransAccelFA_write'
     */
    Rte_IrvWrite_FsftPLTR_a_TransAccel_VePLTR_b_TransAccelFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_a_TransAccel' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_a_TransAccelOffset(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_a_TransAccelOffset' */
    /* Merge: '<Root>/Merge_48' incorporates:
     *  Chart: '<S5>/FsftPLTR_a_TransAccelOffsetChrt'
     *  SignalConversion generated from: '<S5>/VePLTR_a_TransAccelOffset_write'
     */
    /* Gateway: FsftPLTR_a_TransAccelOffset/FsftPLTR_a_TransAccelOffsetChrt */
    /* During: FsftPLTR_a_TransAccelOffset/FsftPLTR_a_TransAccelOffsetChrt */
    /* Entry Internal: FsftPLTR_a_TransAccelOffset/FsftPLTR_a_TransAccelOffsetChrt */
    /* Transition: '<S204>:2' */
    Rte_IrvWrite_FsftPLTR_a_TransAccelOffset_VePLTR_a_TransAccelOffset_write_IRV
        (KePLTR_a_LatAccelOffsetFsftVal);

    /* Merge: '<Root>/Merge_46' incorporates:
     *  Chart: '<S5>/FsftPLTR_a_TransAccelOffsetChrt'
     *  SignalConversion generated from: '<S5>/VePLTR_b_TransAccelOffsetFA_write'
     */
    Rte_IrvWrite_FsftPLTR_a_TransAccelOffset_VePLTR_b_TransAccelOffsetFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_a_TransAccelOffset' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_ACC_On(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_ACC_On' */
    /* Outport: '<Root>/VePLTR_b_ACC_OnFA' incorporates:
     *  Chart: '<S6>/FsftPLTR_b_ACC_OnChrt'
     *  SignalConversion generated from: '<S6>/VePLTR_b_ACC_OnFA'
     */
    /* Gateway: FsftPLTR_b_ACC_On/FsftPLTR_b_ACC_OnChrt */
    /* During: FsftPLTR_b_ACC_On/FsftPLTR_b_ACC_OnChrt */
    /* Entry Internal: FsftPLTR_b_ACC_On/FsftPLTR_b_ACC_OnChrt */
    /* Transition: '<S205>:2' */
    (void)Rte_Write_VePLTR_b_ACC_OnFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_ACC_On' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_ASCM_Srv(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_ASCM_Srv' */
    /* Outport: '<Root>/VePLTR_b_ASCM_Srv_FA' incorporates:
     *  Chart: '<S7>/FsftPLTR_b_ASCM_SrvChrt'
     *  SignalConversion generated from: '<S7>/VePLTR_b_ASCM_Srv_FA'
     */
    /* Gateway: FsftPLTR_b_ASCM_Srv/FsftPLTR_b_ASCM_SrvChrt */
    /* During: FsftPLTR_b_ASCM_Srv/FsftPLTR_b_ASCM_SrvChrt */
    /* Entry Internal: FsftPLTR_b_ASCM_Srv/FsftPLTR_b_ASCM_SrvChrt */
    /* Transition: '<S206>:2' */
    (void)Rte_Write_VePLTR_b_ASCM_Srv_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_ASCM_Srv' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_ASCM_SysFail(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_ASCM_SysFail' */
    /* Outport: '<Root>/VePLTR_b_ASCM_SysFail_FA' incorporates:
     *  Chart: '<S8>/FsftPLTR_b_ASCM_SysFailChrt'
     *  SignalConversion generated from: '<S8>/VePLTR_b_ASCM_SysFail_FA'
     */
    /* Gateway: FsftPLTR_b_ASCM_SysFail/FsftPLTR_b_ASCM_SysFailChrt */
    /* During: FsftPLTR_b_ASCM_SysFail/FsftPLTR_b_ASCM_SysFailChrt */
    /* Entry Internal: FsftPLTR_b_ASCM_SysFail/FsftPLTR_b_ASCM_SysFailChrt */
    /* Transition: '<S207>:2' */
    (void)Rte_Write_VePLTR_b_ASCM_SysFail_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_ASCM_SysFail' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_ASCM_SysSys(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_ASCM_SysSys' */
    /* Outport: '<Root>/VePLTR_b_ADS_SrvSys_FA' incorporates:
     *  Chart: '<S9>/FsftPLTR_b_ASCM_SysSysChrt'
     *  SignalConversion generated from: '<S9>/VePLTR_b_ADS_SrvSys_FA_out'
     */
    /* Gateway: FsftPLTR_b_ASCM_SysSys/FsftPLTR_b_ASCM_SysSysChrt */
    /* During: FsftPLTR_b_ASCM_SysSys/FsftPLTR_b_ASCM_SysSysChrt */
    /* Entry Internal: FsftPLTR_b_ASCM_SysSys/FsftPLTR_b_ASCM_SysSysChrt */
    /* Transition: '<S208>:2' */
    (void)Rte_Write_VePLTR_b_ADS_SrvSys_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_ASCM_SysSys' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_ChargeReq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_ChargeReq' */
    /* Outport: '<Root>/VePLTR_b_ChargeReq' incorporates:
     *  Chart: '<S10>/FsftPLTR_b_ChargeReqChrt'
     *  SignalConversion generated from: '<S10>/VePLTR_b_ChargeReqFA'
     */
    /* Gateway: FsftPLTR_b_ChargeReq/FsftPLTR_b_ChargeReqChrt */
    /* During: FsftPLTR_b_ChargeReq/FsftPLTR_b_ChargeReqChrt */
    /* Entry Internal: FsftPLTR_b_ChargeReq/FsftPLTR_b_ChargeReqChrt */
    /* Transition: '<S209>:2' */
    (void)Rte_Write_VePLTR_b_ChargeReq_Value(true);

    /* Outport: '<Root>/VePLTR_b_ChargeReqSgnlRcvd' incorporates:
     *  Chart: '<S10>/FsftPLTR_b_ChargeReqChrt'
     *  SignalConversion generated from: '<S10>/VePLTR_b_ChargeReqSgnl_Rcvd'
     */
    (void)Rte_Write_VePLTR_b_ChargeReqSgnlRcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_ChargeReq' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_DrvDrAjar(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_DrvDrAjar' */
    /* Outport: '<Root>/VePLTR_b_DrvDrAjarFA' incorporates:
     *  Chart: '<S11>/FsftPLTR_b_DrvDrAjarChrt'
     *  SignalConversion generated from: '<S11>/VePLTR_b_DrvDrAjarFA'
     */
    /* Gateway: FsftPLTR_b_DrvDrAjar/FsftPLTR_b_DrvDrAjarChrt */
    /* During: FsftPLTR_b_DrvDrAjar/FsftPLTR_b_DrvDrAjarChrt */
    /* Entry Internal: FsftPLTR_b_DrvDrAjar/FsftPLTR_b_DrvDrAjarChrt */
    /* Transition: '<S210>:2' */
    (void)Rte_Write_VePLTR_b_DrvDrAjarFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_DrvDrAjar' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_EPBFailSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_EPBFailSts' */
    /* Outport: '<Root>/VePLTR_b_EPBFailSts' incorporates:
     *  Chart: '<S12>/FsftPLTR_b_EPBFailStsChrt'
     *  SignalConversion generated from: '<S12>/VePLTR_b_EPBFailStsFA'
     */
    /* Gateway: FsftPLTR_b_EPBFailSts/FsftPLTR_b_EPBFailStsChrt */
    /* During: FsftPLTR_b_EPBFailSts/FsftPLTR_b_EPBFailStsChrt */
    /* Entry Internal: FsftPLTR_b_EPBFailSts/FsftPLTR_b_EPBFailStsChrt */
    /* Transition: '<S211>:2' */
    (void)Rte_Write_VePLTR_b_EPBFailSts_Value(false);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_EPBFailSts' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_ESSActvEBrake(void)
{
    /* Gateway: FsftPLTR_b_ESSActvEBrake/FsftPLTR_b_ESSActvEBrakeChrt */
    /* During: FsftPLTR_b_ESSActvEBrake/FsftPLTR_b_ESSActvEBrakeChrt */
    /* Entry Internal: FsftPLTR_b_ESSActvEBrake/FsftPLTR_b_ESSActvEBrakeChrt */
    /* Transition: '<S212>:2' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_ESSRqShftPark(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_ESSRqShftPark' */
    /* Outport: '<Root>/VePLTR_b_ESSRqShftPark' incorporates:
     *  Chart: '<S14>/FsftPLTR_b_ESSRqShftParkChrt'
     *  SignalConversion generated from: '<S14>/VePLTR_b_ESSRqShftParkFA'
     */
    /* Gateway: FsftPLTR_b_ESSRqShftPark/FsftPLTR_b_ESSRqShftParkChrt */
    /* During: FsftPLTR_b_ESSRqShftPark/FsftPLTR_b_ESSRqShftParkChrt */
    /* Entry Internal: FsftPLTR_b_ESSRqShftPark/FsftPLTR_b_ESSRqShftParkChrt */
    /* Transition: '<S213>:2' */
    (void)Rte_Write_VePLTR_b_ESSRqShftPark_Value(false);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_ESSRqShftPark' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_HDCEnabledCAN(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_HDCEnabledCAN' */
    /* Outport: '<Root>/VePLTR_b_HDCEnabledCAN' incorporates:
     *  Chart: '<S15>/FsftPLTR_b_HDCEnabledCANChrt'
     *  SignalConversion generated from: '<S15>/VePLTR_b_HDCEnabledCAN'
     */
    /* Gateway: FsftPLTR_b_HDCEnabledCAN/FsftPLTR_b_HDCEnabledCANChrt */
    /* During: FsftPLTR_b_HDCEnabledCAN/FsftPLTR_b_HDCEnabledCANChrt */
    /* Entry Internal: FsftPLTR_b_HDCEnabledCAN/FsftPLTR_b_HDCEnabledCANChrt */
    /* Transition: '<S214>:2' */
    (void)Rte_Write_VePLTR_b_HDCEnabledCAN_Value(false);

    /* Outport: '<Root>/VePLTR_b_HDCEnabledCAN_FA' incorporates:
     *  Chart: '<S15>/FsftPLTR_b_HDCEnabledCANChrt'
     *  SignalConversion generated from: '<S15>/VePLTR_b_HDCEnabledCAN_FA'
     */
    (void)Rte_Write_VePLTR_b_HDCEnabledCAN_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_HDCEnabledCAN' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_ImmoParkReq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_ImmoParkReq' */
    /* Outport: '<Root>/VePLTR_b_ImmoParkReq' incorporates:
     *  Chart: '<S16>/FsftPLTR_b_ImmoParkReqChrt'
     *  SignalConversion generated from: '<S16>/VePLTR_b_ImmoParkReq_out'
     */
    /* Gateway: FsftPLTR_b_ImmoParkReq/FsftPLTR_b_ImmoParkReqChrt */
    /* During: FsftPLTR_b_ImmoParkReq/FsftPLTR_b_ImmoParkReqChrt */
    /* Entry Internal: FsftPLTR_b_ImmoParkReq/FsftPLTR_b_ImmoParkReqChrt */
    /* Transition: '<S215>:2' */
    (void)Rte_Write_VePLTR_b_ImmoParkReq_Value(false);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_ImmoParkReq' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_Inverter_PowerDraw(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_Inverter_PowerDraw' */
    /* Outport: '<Root>/VePLTR_b_Inverter_PowerDraw_FA' incorporates:
     *  Chart: '<S17>/FsftPLTR_b_Inverter_PowerDrawChrt'
     *  SignalConversion generated from: '<S17>/VePLTR_b_Inverter_PowerDrawFA'
     */
    /* Gateway: FsftPLTR_b_Inverter_PowerDraw/FsftPLTR_b_Inverter_PowerDrawChrt */
    /* During: FsftPLTR_b_Inverter_PowerDraw/FsftPLTR_b_Inverter_PowerDrawChrt */
    /* Entry Internal: FsftPLTR_b_Inverter_PowerDraw/FsftPLTR_b_Inverter_PowerDrawChrt */
    /* Transition: '<S216>:2' */
    (void)Rte_Write_VePLTR_b_Inverter_PowerDraw_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_Inverter_PowerDraw' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_LHRDoorSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_LHRDoorSts' */
    /* Outport: '<Root>/VePLTR_b_LHRDoorSts_FA' incorporates:
     *  Chart: '<S18>/FsftPLTR_b_LHRDoorStsChrt'
     *  SignalConversion generated from: '<S18>/VePLTR_b_LHRDoorSts_FA_out'
     */
    /* Gateway: FsftPLTR_b_LHRDoorSts/FsftPLTR_b_LHRDoorStsChrt */
    /* During: FsftPLTR_b_LHRDoorSts/FsftPLTR_b_LHRDoorStsChrt */
    /* Entry Internal: FsftPLTR_b_LHRDoorSts/FsftPLTR_b_LHRDoorStsChrt */
    /* Transition: '<S217>:2' */
    (void)Rte_Write_VePLTR_b_LHRDoorSts_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_LHRDoorSts' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_MILOnRq_ESC(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_MILOnRq_ESC' */
    /* Outport: '<Root>/VePLTR_b_MILOnRq_ESC' incorporates:
     *  Chart: '<S19>/FsftPLTR_b_MILOnRq_ESCChrt'
     *  SignalConversion generated from: '<S19>/VePLTR_b_MILOnRq_ESCFA'
     */
    /* Gateway: FsftPLTR_b_MILOnRq_ESC/FsftPLTR_b_MILOnRq_ESCChrt */
    /* During: FsftPLTR_b_MILOnRq_ESC/FsftPLTR_b_MILOnRq_ESCChrt */
    /* Entry Internal: FsftPLTR_b_MILOnRq_ESC/FsftPLTR_b_MILOnRq_ESCChrt */
    /* Transition: '<S218>:2' */
    (void)Rte_Write_VePLTR_b_MILOnRq_ESC_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_MILOnRq_ESC' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_ParkBrakeSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_ParkBrakeSts' */
    /* Outport: '<Root>/VePLTR_b_ParkBrakeSts_FA' incorporates:
     *  Chart: '<S20>/FsftPLTR_b_ParkBrakeStsChrt'
     *  SignalConversion generated from: '<S20>/VePLTR_b_ParkBrakeSts_FA_out'
     */
    /* Gateway: FsftPLTR_b_ParkBrakeSts/FsftPLTR_b_ParkBrakeStsChrt */
    /* During: FsftPLTR_b_ParkBrakeSts/FsftPLTR_b_ParkBrakeStsChrt */
    /* Entry Internal: FsftPLTR_b_ParkBrakeSts/FsftPLTR_b_ParkBrakeStsChrt */
    /* Transition: '<S219>:2' */
    (void)Rte_Write_VePLTR_b_ParkBrakeSts_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_ParkBrakeSts' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_Prmry_AutoPosCorrMd(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_Prmry_AutoPosCorrMd' */
    /* Merge: '<Root>/Merge_117' incorporates:
     *  Chart: '<S21>/FsftPLTR_b_Prmry_AutoPosCorrMdChrt'
     *  SignalConversion generated from: '<S21>/VePLTR_b_Prmry_AutoPosCorrMdFA_write'
     */
    /* Gateway: FsftPLTR_b_Prmry_AutoPosCorrMd/FsftPLTR_b_Prmry_AutoPosCorrMdChrt */
    /* During: FsftPLTR_b_Prmry_AutoPosCorrMd/FsftPLTR_b_Prmry_AutoPosCorrMdChrt */
    /* Entry Internal: FsftPLTR_b_Prmry_AutoPosCorrMd/FsftPLTR_b_Prmry_AutoPosCorrMdChrt */
    /* Transition: '<S220>:2' */
    Rte_IrvWrite_FsftPLTR_b_Prmry_AutoPosCorrMd_VePLTR_b_Prmry_AutoPosCorrMdFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_Prmry_AutoPosCorrMd' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_Prmry_ForcePark(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_Prmry_ForcePark' */
    /* Merge: '<Root>/Merge_115' incorporates:
     *  Chart: '<S22>/FsftPLTR_b_Prmry_ForceParkChrt'
     *  SignalConversion generated from: '<S22>/VePLTR_b_Prmry_ForceParkFA_write'
     */
    /* Gateway: FsftPLTR_b_Prmry_ForcePark/FsftPLTR_b_Prmry_ForceParkChrt */
    /* During: FsftPLTR_b_Prmry_ForcePark/FsftPLTR_b_Prmry_ForceParkChrt */
    /* Entry Internal: FsftPLTR_b_Prmry_ForcePark/FsftPLTR_b_Prmry_ForceParkChrt */
    /* Transition: '<S221>:2' */
    Rte_IrvWrite_FsftPLTR_b_Prmry_ForcePark_VePLTR_b_Prmry_ForceParkFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_Prmry_ForcePark' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_Prmry_ManualMode(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_Prmry_ManualMode' */
    /* Merge: '<Root>/Merge_134' incorporates:
     *  Chart: '<S23>/FsftPLTR_b_Prmry_ManualModeChrt'
     *  SignalConversion generated from: '<S23>/VePLTR_b_Prmry_ManualModeFA_write'
     */
    /* Gateway: FsftPLTR_b_Prmry_ManualMode/FsftPLTR_b_Prmry_ManualModeChrt */
    /* During: FsftPLTR_b_Prmry_ManualMode/FsftPLTR_b_Prmry_ManualModeChrt */
    /* Entry Internal: FsftPLTR_b_Prmry_ManualMode/FsftPLTR_b_Prmry_ManualModeChrt */
    /* Transition: '<S222>:2' */
    Rte_IrvWrite_FsftPLTR_b_Prmry_ManualMode_VePLTR_b_Prmry_ManualModeFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_Prmry_ManualMode' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_Prmry_PRNDFailSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_Prmry_PRNDFailSts' */
    /* Merge: '<Root>/Merge_119' incorporates:
     *  Chart: '<S24>/FsftPLTR_b_Prmry_PRNDFailStsChrt'
     *  SignalConversion generated from: '<S24>/VePLTR_b_Prmry_PRNDFailStsFA_write'
     */
    /* Gateway: FsftPLTR_b_Prmry_PRNDFailSts/FsftPLTR_b_Prmry_PRNDFailStsChrt */
    /* During: FsftPLTR_b_Prmry_PRNDFailSts/FsftPLTR_b_Prmry_PRNDFailStsChrt */
    /* Entry Internal: FsftPLTR_b_Prmry_PRNDFailSts/FsftPLTR_b_Prmry_PRNDFailStsChrt */
    /* Transition: '<S223>:2' */
    Rte_IrvWrite_FsftPLTR_b_Prmry_PRNDFailSts_VePLTR_b_Prmry_PRNDFailStsFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_Prmry_PRNDFailSts' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_Prmry_PRND_ValidatePstn(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_Prmry_PRND_ValidatePstn' */
    /* Merge: '<Root>/Merge_136' incorporates:
     *  Chart: '<S25>/FsftPLTR_b_Prmry_PRND_ValidatePstnChrt'
     *  SignalConversion generated from: '<S25>/VePLTR_b_Prmry_PRND_ValidatePstnFA_write'
     */
    /* Gateway: FsftPLTR_b_Prmry_PRND_ValidatePstn/FsftPLTR_b_Prmry_PRND_ValidatePstnChrt */
    /* During: FsftPLTR_b_Prmry_PRND_ValidatePstn/FsftPLTR_b_Prmry_PRND_ValidatePstnChrt */
    /* Entry Internal: FsftPLTR_b_Prmry_PRND_ValidatePstn/FsftPLTR_b_Prmry_PRND_ValidatePstnChrt */
    /* Transition: '<S224>:2' */
    Rte_IrvWrite_FsftPLTR_b_Prmry_PRND_ValidatePstn_VePLTR_b_Prmry_PRND_ValidatePstnFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_Prmry_PRND_ValidatePstn' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_Prmry_RackDetentSensorFA(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_Prmry_RackDetentSensorFA' */
    /* Merge: '<Root>/Merge_123' incorporates:
     *  Chart: '<S26>/FsftPLTR_b_Prmry_RackDetentSensorFAChrt'
     *  SignalConversion generated from: '<S26>/VePLTR_b_Prmry_RackDetentSensorFAFA_write'
     */
    /* Gateway: FsftPLTR_b_Prmry_RackDetentSensorFA/FsftPLTR_b_Prmry_RackDetentSensorFAChrt */
    /* During: FsftPLTR_b_Prmry_RackDetentSensorFA/FsftPLTR_b_Prmry_RackDetentSensorFAChrt */
    /* Entry Internal: FsftPLTR_b_Prmry_RackDetentSensorFA/FsftPLTR_b_Prmry_RackDetentSensorFAChrt */
    /* Transition: '<S225>:2' */
    Rte_IrvWrite_FsftPLTR_b_Prmry_RackDetentSensorFA_VePLTR_b_Prmry_RackDetentSensorFAFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_Prmry_RackDetentSensorFA' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_Prmry_ShiftLeverFailSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_Prmry_ShiftLeverFailSts' */
    /* Merge: '<Root>/Merge_124' incorporates:
     *  Chart: '<S27>/FsftPLTR_b_Prmry_ShiftLeverFailStsChrt'
     *  SignalConversion generated from: '<S27>/VePLTR_b_Prmry_ShiftLeverFailStsFA_write'
     */
    /* Gateway: FsftPLTR_b_Prmry_ShiftLeverFailSts/FsftPLTR_b_Prmry_ShiftLeverFailStsChrt */
    /* During: FsftPLTR_b_Prmry_ShiftLeverFailSts/FsftPLTR_b_Prmry_ShiftLeverFailStsChrt */
    /* Entry Internal: FsftPLTR_b_Prmry_ShiftLeverFailSts/FsftPLTR_b_Prmry_ShiftLeverFailStsChrt */
    /* Transition: '<S226>:2' */
    Rte_IrvWrite_FsftPLTR_b_Prmry_ShiftLeverFailSts_VePLTR_b_Prmry_ShiftLeverFailStsFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_Prmry_ShiftLeverFailSts' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_Prmry_ShiftLeverPositionReq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_Prmry_ShiftLeverPositionReq' */
    /* Merge: '<Root>/Merge_126' incorporates:
     *  Chart: '<S28>/FsftPLTR_b_Prmry_ShiftLeverPositionReqChrt'
     *  SignalConversion generated from: '<S28>/VePLTR_b_Prmry_ShiftLeverPositionReqFA_write'
     */
    /* Gateway: FsftPLTR_b_Prmry_ShiftLeverPositionReq/FsftPLTR_b_Prmry_ShiftLeverPositionReqChrt */
    /* During: FsftPLTR_b_Prmry_ShiftLeverPositionReq/FsftPLTR_b_Prmry_ShiftLeverPositionReqChrt */
    /* Entry Internal: FsftPLTR_b_Prmry_ShiftLeverPositionReq/FsftPLTR_b_Prmry_ShiftLeverPositionReqChrt */
    /* Transition: '<S227>:2' */
    Rte_IrvWrite_FsftPLTR_b_Prmry_ShiftLeverPositionReq_VePLTR_b_Prmry_ShiftLeverPositionReqFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_Prmry_ShiftLeverPositionReq' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_Prmry_ShiftLockFA(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_Prmry_ShiftLockFA' */
    /* Merge: '<Root>/Merge_121' incorporates:
     *  Chart: '<S29>/FsftPLTR_b_Prmry_ShiftLockFAChrt'
     *  SignalConversion generated from: '<S29>/VePLTR_b_Prmry_ShiftLockFAFA_write'
     */
    /* Gateway: FsftPLTR_b_Prmry_ShiftLockFA/FsftPLTR_b_Prmry_ShiftLockFAChrt */
    /* During: FsftPLTR_b_Prmry_ShiftLockFA/FsftPLTR_b_Prmry_ShiftLockFAChrt */
    /* Entry Internal: FsftPLTR_b_Prmry_ShiftLockFA/FsftPLTR_b_Prmry_ShiftLockFAChrt */
    /* Transition: '<S228>:2' */
    Rte_IrvWrite_FsftPLTR_b_Prmry_ShiftLockFA_VePLTR_b_Prmry_ShiftLockFAFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_Prmry_ShiftLockFA' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_Prmry_ShiftSnsFA(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_Prmry_ShiftSnsFA' */
    /* Merge: '<Root>/Merge_122' incorporates:
     *  Chart: '<S30>/FsftPLTR_b_Prmry_ShiftSnsFAChrt'
     *  SignalConversion generated from: '<S30>/VePLTR_b_Prmry_ShiftSnsFAFA_write'
     */
    /* Gateway: FsftPLTR_b_Prmry_ShiftSnsFA/FsftPLTR_b_Prmry_ShiftSnsFAChrt */
    /* During: FsftPLTR_b_Prmry_ShiftSnsFA/FsftPLTR_b_Prmry_ShiftSnsFAChrt */
    /* Entry Internal: FsftPLTR_b_Prmry_ShiftSnsFA/FsftPLTR_b_Prmry_ShiftSnsFAChrt */
    /* Transition: '<S229>:2' */
    Rte_IrvWrite_FsftPLTR_b_Prmry_ShiftSnsFA_VePLTR_b_Prmry_ShiftSnsFAFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_Prmry_ShiftSnsFA' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_Prmry_ShifterDispFA(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_Prmry_ShifterDispFA' */
    /* Merge: '<Root>/Merge_120' incorporates:
     *  Chart: '<S31>/FsftPLTR_b_Prmry_ShifterDispFAChrt'
     *  SignalConversion generated from: '<S31>/VePLTR_b_Prmry_ShifterDispFAFA_write'
     */
    /* Gateway: FsftPLTR_b_Prmry_ShifterDispFA/FsftPLTR_b_Prmry_ShifterDispFAChrt */
    /* During: FsftPLTR_b_Prmry_ShifterDispFA/FsftPLTR_b_Prmry_ShifterDispFAChrt */
    /* Entry Internal: FsftPLTR_b_Prmry_ShifterDispFA/FsftPLTR_b_Prmry_ShifterDispFAChrt */
    /* Transition: '<S230>:2' */
    Rte_IrvWrite_FsftPLTR_b_Prmry_ShifterDispFA_VePLTR_b_Prmry_ShifterDispFAFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_Prmry_ShifterDispFA' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_Prmry_TransShiftPstn(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_Prmry_TransShiftPstn' */
    /* Outport: '<Root>/VePLTR_b_Prmry_TransShiftPstnFA' incorporates:
     *  Chart: '<S32>/FsftPLTR_b_Prmry_TransShiftPstnChrt'
     *  SignalConversion generated from: '<S32>/VePLTR_b_Prmry_TransShiftPstnFA'
     */
    /* Gateway: FsftPLTR_b_Prmry_TransShiftPstn/FsftPLTR_b_Prmry_TransShiftPstnChrt */
    /* During: FsftPLTR_b_Prmry_TransShiftPstn/FsftPLTR_b_Prmry_TransShiftPstnChrt */
    /* Entry Internal: FsftPLTR_b_Prmry_TransShiftPstn/FsftPLTR_b_Prmry_TransShiftPstnChrt */
    /* Transition: '<S231>:2' */
    (void)Rte_Write_VePLTR_b_Prmry_TransShiftPstnFA_Value(true);

    /* Merge: '<Root>/Merge_133_Irv' incorporates:
     *  Chart: '<S32>/FsftPLTR_b_Prmry_TransShiftPstnChrt'
     *  SignalConversion generated from: '<S32>/VePLTR_b_Prmry_TransShiftPstnFA_write'
     */
    Rte_IrvWrite_FsftPLTR_b_Prmry_TransShiftPstn_VePLTR_b_Prmry_TransShiftPstnFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_Prmry_TransShiftPstn' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_PsngrDoorSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_PsngrDoorSts' */
    /* Outport: '<Root>/VePLTR_b_PsngrDoorSts_FA' incorporates:
     *  Chart: '<S33>/FsftPLTR_b_PsngrDoorStsChrt'
     *  SignalConversion generated from: '<S33>/VePLTR_b_PsngrDoorSts_FA_out'
     */
    /* Gateway: FsftPLTR_b_PsngrDoorSts/FsftPLTR_b_PsngrDoorStsChrt */
    /* During: FsftPLTR_b_PsngrDoorSts/FsftPLTR_b_PsngrDoorStsChrt */
    /* Entry Internal: FsftPLTR_b_PsngrDoorSts/FsftPLTR_b_PsngrDoorStsChrt */
    /* Transition: '<S232>:2' */
    (void)Rte_Write_VePLTR_b_PsngrDoorSts_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_PsngrDoorSts' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_RHRDoorSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_RHRDoorSts' */
    /* Outport: '<Root>/VePLTR_b_RHRDoorSts_FA' incorporates:
     *  Chart: '<S34>/FsftPLTR_b_RHRDoorStsChrt'
     *  SignalConversion generated from: '<S34>/VePLTR_b_RHRDoorSts_FA_out'
     */
    /* Gateway: FsftPLTR_b_RHRDoorSts/FsftPLTR_b_RHRDoorStsChrt */
    /* During: FsftPLTR_b_RHRDoorSts/FsftPLTR_b_RHRDoorStsChrt */
    /* Entry Internal: FsftPLTR_b_RHRDoorSts/FsftPLTR_b_RHRDoorStsChrt */
    /* Transition: '<S233>:2' */
    (void)Rte_Write_VePLTR_b_RHRDoorSts_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_RHRDoorSts' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_RHatchSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_RHatchSts' */
    /* Outport: '<Root>/VePLTR_b_RHatchSts_FA' incorporates:
     *  Chart: '<S35>/FsftPLTR_b_RHatchStsChrt'
     *  SignalConversion generated from: '<S35>/VePLTR_b_RHatchSts_FA_out'
     */
    /* Gateway: FsftPLTR_b_RHatchSts/FsftPLTR_b_RHatchStsChrt */
    /* During: FsftPLTR_b_RHatchSts/FsftPLTR_b_RHatchStsChrt */
    /* Entry Internal: FsftPLTR_b_RHatchSts/FsftPLTR_b_RHatchStsChrt */
    /* Transition: '<S234>:2' */
    (void)Rte_Write_VePLTR_b_RHatchSts_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_RHatchSts' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_RmtVehStartReq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_RmtVehStartReq' */
    /* Outport: '<Root>/VePLTR_b_RmtVehStartReqFA' incorporates:
     *  Chart: '<S36>/FsftPLTR_b_RmtVehStartReqChrt'
     *  SignalConversion generated from: '<S36>/VePLTR_b_RmtVehStartReqFA'
     */
    /* Gateway: FsftPLTR_b_RmtVehStartReq/FsftPLTR_b_RmtVehStartReqChrt */
    /* During: FsftPLTR_b_RmtVehStartReq/FsftPLTR_b_RmtVehStartReqChrt */
    /* Entry Internal: FsftPLTR_b_RmtVehStartReq/FsftPLTR_b_RmtVehStartReqChrt */
    /* Transition: '<S235>:2' */
    (void)Rte_Write_VePLTR_b_RmtVehStartReqFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_RmtVehStartReq' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_Scndry_AutoPosCorrMd(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_Scndry_AutoPosCorrMd' */
    /* Merge: '<Root>/Merge_106' incorporates:
     *  Chart: '<S37>/FsftPLTR_b_Scndry_AutoPosCorrMdChrt'
     *  SignalConversion generated from: '<S37>/VePLTR_b_Scndry_AutoPosCorrMdFA_write'
     */
    /* Gateway: FsftPLTR_b_Scndry_AutoPosCorrMd/FsftPLTR_b_Scndry_AutoPosCorrMdChrt */
    /* During: FsftPLTR_b_Scndry_AutoPosCorrMd/FsftPLTR_b_Scndry_AutoPosCorrMdChrt */
    /* Entry Internal: FsftPLTR_b_Scndry_AutoPosCorrMd/FsftPLTR_b_Scndry_AutoPosCorrMdChrt */
    /* Transition: '<S236>:2' */
    Rte_IrvWrite_FsftPLTR_b_Scndry_AutoPosCorrMd_VePLTR_b_Scndry_AutoPosCorrMdFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_Scndry_AutoPosCorrMd' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_Scndry_ForcePark(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_Scndry_ForcePark' */
    /* Merge: '<Root>/Merge_104' incorporates:
     *  Chart: '<S38>/FsftPLTR_b_Scndry_ForceParkChrt'
     *  SignalConversion generated from: '<S38>/VePLTR_b_Scndry_ForceParkFA_write'
     */
    /* Gateway: FsftPLTR_b_Scndry_ForcePark/FsftPLTR_b_Scndry_ForceParkChrt */
    /* During: FsftPLTR_b_Scndry_ForcePark/FsftPLTR_b_Scndry_ForceParkChrt */
    /* Entry Internal: FsftPLTR_b_Scndry_ForcePark/FsftPLTR_b_Scndry_ForceParkChrt */
    /* Transition: '<S237>:2' */
    Rte_IrvWrite_FsftPLTR_b_Scndry_ForcePark_VePLTR_b_Scndry_ForceParkFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_Scndry_ForcePark' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_Scndry_PRNDFailSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_Scndry_PRNDFailSts' */
    /* Merge: '<Root>/Merge_112' incorporates:
     *  Chart: '<S39>/FsftPLTR_b_Scndry_PRNDFailStsChrt'
     *  SignalConversion generated from: '<S39>/VePLTR_b_Scndry_PRNDFailStsFA_write'
     */
    /* Gateway: FsftPLTR_b_Scndry_PRNDFailSts/FsftPLTR_b_Scndry_PRNDFailStsChrt */
    /* During: FsftPLTR_b_Scndry_PRNDFailSts/FsftPLTR_b_Scndry_PRNDFailStsChrt */
    /* Entry Internal: FsftPLTR_b_Scndry_PRNDFailSts/FsftPLTR_b_Scndry_PRNDFailStsChrt */
    /* Transition: '<S238>:2' */
    Rte_IrvWrite_FsftPLTR_b_Scndry_PRNDFailSts_VePLTR_b_Scndry_PRNDFailStsFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_Scndry_PRNDFailSts' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_Scndry_PRND_ValidatePstn(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_Scndry_PRND_ValidatePstn' */
    /* Merge: '<Root>/Merge_130' incorporates:
     *  Chart: '<S40>/FsftPLTR_b_Scndry_PRND_ValidatePstnChrt'
     *  SignalConversion generated from: '<S40>/VePLTR_b_Scndry_PRND_ValidatePstnFA_write'
     */
    /* Gateway: FsftPLTR_b_Scndry_PRND_ValidatePstn/FsftPLTR_b_Scndry_PRND_ValidatePstnChrt */
    /* During: FsftPLTR_b_Scndry_PRND_ValidatePstn/FsftPLTR_b_Scndry_PRND_ValidatePstnChrt */
    /* Entry Internal: FsftPLTR_b_Scndry_PRND_ValidatePstn/FsftPLTR_b_Scndry_PRND_ValidatePstnChrt */
    /* Transition: '<S239>:2' */
    Rte_IrvWrite_FsftPLTR_b_Scndry_PRND_ValidatePstn_VePLTR_b_Scndry_PRND_ValidatePstnFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_Scndry_PRND_ValidatePstn' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_Scndry_RackDetentSensorFA(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_Scndry_RackDetentSensorFA' */
    /* Merge: '<Root>/Merge_111' incorporates:
     *  Chart: '<S41>/FsftPLTR_b_Scndry_RackDetentSensorFAChrt'
     *  SignalConversion generated from: '<S41>/VePLTR_b_Scndry_RackDetentSensorFAFA_write'
     */
    /* Gateway: FsftPLTR_b_Scndry_RackDetentSensorFA/FsftPLTR_b_Scndry_RackDetentSensorFAChrt */
    /* During: FsftPLTR_b_Scndry_RackDetentSensorFA/FsftPLTR_b_Scndry_RackDetentSensorFAChrt */
    /* Entry Internal: FsftPLTR_b_Scndry_RackDetentSensorFA/FsftPLTR_b_Scndry_RackDetentSensorFAChrt */
    /* Transition: '<S240>:2' */
    Rte_IrvWrite_FsftPLTR_b_Scndry_RackDetentSensorFA_VePLTR_b_Scndry_RackDetentSensorFAFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_Scndry_RackDetentSensorFA' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_Scndry_ShiftLeverFailSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_Scndry_ShiftLeverFailSts' */
    /* Merge: '<Root>/Merge_109' incorporates:
     *  Chart: '<S42>/FsftPLTR_b_Scndry_ShiftLeverFailStsChrt'
     *  SignalConversion generated from: '<S42>/VePLTR_b_Scndry_ShiftLeverFailStsFA_write'
     */
    /* Gateway: FsftPLTR_b_Scndry_ShiftLeverFailSts/FsftPLTR_b_Scndry_ShiftLeverFailStsChrt */
    /* During: FsftPLTR_b_Scndry_ShiftLeverFailSts/FsftPLTR_b_Scndry_ShiftLeverFailStsChrt */
    /* Entry Internal: FsftPLTR_b_Scndry_ShiftLeverFailSts/FsftPLTR_b_Scndry_ShiftLeverFailStsChrt */
    /* Transition: '<S241>:2' */
    Rte_IrvWrite_FsftPLTR_b_Scndry_ShiftLeverFailSts_VePLTR_b_Scndry_ShiftLeverFailStsFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_Scndry_ShiftLeverFailSts' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_Scndry_ShiftLeverPositionReq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_Scndry_ShiftLeverPositionReq' */
    /* Merge: '<Root>/Merge_118' incorporates:
     *  Chart: '<S43>/FsftPLTR_b_Scndry_ShiftLeverPositionReqChrt'
     *  SignalConversion generated from: '<S43>/VePLTR_b_Scndry_ShiftLeverPositionReqFA_write'
     */
    /* Gateway: FsftPLTR_b_Scndry_ShiftLeverPositionReq/FsftPLTR_b_Scndry_ShiftLeverPositionReqChrt */
    /* During: FsftPLTR_b_Scndry_ShiftLeverPositionReq/FsftPLTR_b_Scndry_ShiftLeverPositionReqChrt */
    /* Entry Internal: FsftPLTR_b_Scndry_ShiftLeverPositionReq/FsftPLTR_b_Scndry_ShiftLeverPositionReqChrt */
    /* Transition: '<S242>:2' */
    Rte_IrvWrite_FsftPLTR_b_Scndry_ShiftLeverPositionReq_VePLTR_b_Scndry_ShiftLeverPositionReqFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_Scndry_ShiftLeverPositionReq' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_Scndry_ShiftLockFA(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_Scndry_ShiftLockFA' */
    /* Merge: '<Root>/Merge_108' incorporates:
     *  Chart: '<S44>/FsftPLTR_b_Scndry_ShiftLockFAChrt'
     *  SignalConversion generated from: '<S44>/VePLTR_b_Scndry_ShiftLockFAFA_write'
     */
    /* Gateway: FsftPLTR_b_Scndry_ShiftLockFA/FsftPLTR_b_Scndry_ShiftLockFAChrt */
    /* During: FsftPLTR_b_Scndry_ShiftLockFA/FsftPLTR_b_Scndry_ShiftLockFAChrt */
    /* Entry Internal: FsftPLTR_b_Scndry_ShiftLockFA/FsftPLTR_b_Scndry_ShiftLockFAChrt */
    /* Transition: '<S243>:2' */
    Rte_IrvWrite_FsftPLTR_b_Scndry_ShiftLockFA_VePLTR_b_Scndry_ShiftLockFAFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_Scndry_ShiftLockFA' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_Scndry_ShiftSnsFA(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_Scndry_ShiftSnsFA' */
    /* Merge: '<Root>/Merge_110' incorporates:
     *  Chart: '<S45>/FsftPLTR_b_Scndry_ShiftSnsFAChrt'
     *  SignalConversion generated from: '<S45>/VePLTR_b_Scndry_ShiftSnsFAFA_write'
     */
    /* Gateway: FsftPLTR_b_Scndry_ShiftSnsFA/FsftPLTR_b_Scndry_ShiftSnsFAChrt */
    /* During: FsftPLTR_b_Scndry_ShiftSnsFA/FsftPLTR_b_Scndry_ShiftSnsFAChrt */
    /* Entry Internal: FsftPLTR_b_Scndry_ShiftSnsFA/FsftPLTR_b_Scndry_ShiftSnsFAChrt */
    /* Transition: '<S244>:2' */
    Rte_IrvWrite_FsftPLTR_b_Scndry_ShiftSnsFA_VePLTR_b_Scndry_ShiftSnsFAFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_Scndry_ShiftSnsFA' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_Scndry_ShifterDispFA(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_Scndry_ShifterDispFA' */
    /* Merge: '<Root>/Merge_107' incorporates:
     *  Chart: '<S46>/FsftPLTR_b_Scndry_ShifterDispFAChrt'
     *  SignalConversion generated from: '<S46>/VePLTR_b_Scndry_ShifterDispFAFA_write'
     */
    /* Gateway: FsftPLTR_b_Scndry_ShifterDispFA/FsftPLTR_b_Scndry_ShifterDispFAChrt */
    /* During: FsftPLTR_b_Scndry_ShifterDispFA/FsftPLTR_b_Scndry_ShifterDispFAChrt */
    /* Entry Internal: FsftPLTR_b_Scndry_ShifterDispFA/FsftPLTR_b_Scndry_ShifterDispFAChrt */
    /* Transition: '<S245>:2' */
    Rte_IrvWrite_FsftPLTR_b_Scndry_ShifterDispFA_VePLTR_b_Scndry_ShifterDispFAFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_Scndry_ShifterDispFA' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_Scndry_TransShiftPstn(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_Scndry_TransShiftPstn' */
    /* Outport: '<Root>/VePLTR_b_Scndry_TransShiftPstnFA' incorporates:
     *  Chart: '<S47>/FsftPLTR_b_Scndry_TransShiftPstnChrt'
     *  SignalConversion generated from: '<S47>/VePLTR_b_Scndry_TransShiftPstnFA'
     */
    /* Gateway: FsftPLTR_b_Scndry_TransShiftPstn/FsftPLTR_b_Scndry_TransShiftPstnChrt */
    /* During: FsftPLTR_b_Scndry_TransShiftPstn/FsftPLTR_b_Scndry_TransShiftPstnChrt */
    /* Entry Internal: FsftPLTR_b_Scndry_TransShiftPstn/FsftPLTR_b_Scndry_TransShiftPstnChrt */
    /* Transition: '<S246>:2' */
    (void)Rte_Write_VePLTR_b_Scndry_TransShiftPstnFA_Value(true);

    /* Merge: '<Root>/Merge_128_Irv' incorporates:
     *  Chart: '<S47>/FsftPLTR_b_Scndry_TransShiftPstnChrt'
     *  SignalConversion generated from: '<S47>/VePLTR_b_Scndry_TransShiftPstnFA_write'
     */
    Rte_IrvWrite_FsftPLTR_b_Scndry_TransShiftPstn_VePLTR_b_Scndry_TransShiftPstnFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_Scndry_TransShiftPstn' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_Secure_Idle_Req(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_Secure_Idle_Req' */
    /* Outport: '<Root>/VePLTR_b_Secure_Idle_Req_FA' incorporates:
     *  Chart: '<S48>/FsftPLTR_b_Secure_Idle_ReqChrt'
     *  SignalConversion generated from: '<S48>/VePLTR_b_Secure_Idle_Req_FA_out'
     */
    /* Gateway: FsftPLTR_b_Secure_Idle_Req/FsftPLTR_b_Secure_Idle_ReqChrt */
    /* During: FsftPLTR_b_Secure_Idle_Req/FsftPLTR_b_Secure_Idle_ReqChrt */
    /* Entry Internal: FsftPLTR_b_Secure_Idle_Req/FsftPLTR_b_Secure_Idle_ReqChrt */
    /* Transition: '<S247>:2' */
    (void)Rte_Write_VePLTR_b_Secure_Idle_Req_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_Secure_Idle_Req' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_SpeedUnit(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_SpeedUnit' */
    /* Outport: '<Root>/VePLTR_b_SpeedUnit_FA' incorporates:
     *  Chart: '<S49>/FsftPLTR_b_SpeedUnitChrt'
     *  SignalConversion generated from: '<S49>/VePLTR_b_SpeedUnitFA'
     */
    /* Gateway: FsftPLTR_b_SpeedUnit/FsftPLTR_b_SpeedUnitChrt */
    /* During: FsftPLTR_b_SpeedUnit/FsftPLTR_b_SpeedUnitChrt */
    /* Entry Internal: FsftPLTR_b_SpeedUnit/FsftPLTR_b_SpeedUnitChrt */
    /* Transition: '<S248>:2' */
    (void)Rte_Write_VePLTR_b_SpeedUnit_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_SpeedUnit' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_b_Worksite_Inverter_Active(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_b_Worksite_Inverter_Active' */
    /* Outport: '<Root>/VePLTR_b_Worksite_Inverter_Active_FA' incorporates:
     *  Chart: '<S50>/FsftPLTR_b_Worksite_Inverter_ActiveChrt'
     *  SignalConversion generated from: '<S50>/VePLTR_b_Worksite_Inverter_ActiveFA'
     */
    /* Gateway: FsftPLTR_b_Worksite_Inverter_Active/FsftPLTR_b_Worksite_Inverter_ActiveChrt */
    /* During: FsftPLTR_b_Worksite_Inverter_Active/FsftPLTR_b_Worksite_Inverter_ActiveChrt */
    /* Entry Internal: FsftPLTR_b_Worksite_Inverter_Active/FsftPLTR_b_Worksite_Inverter_ActiveChrt */
    /* Transition: '<S249>:2' */
    (void)Rte_Write_VePLTR_b_Worksite_Inverter_Active_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_b_Worksite_Inverter_Active' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_e_ACCSystemSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_e_ACCSystemSts' */
    /* Outport: '<Root>/VePLTR_b_ACCSystemSts_FA' incorporates:
     *  Chart: '<S51>/FsftPLTR_e_ACCSystemStsChrt'
     *  SignalConversion generated from: '<S51>/VePLTR_b_ACCSystemStsFA'
     */
    /* Gateway: FsftPLTR_e_ACCSystemSts/FsftPLTR_e_ACCSystemStsChrt */
    /* During: FsftPLTR_e_ACCSystemSts/FsftPLTR_e_ACCSystemStsChrt */
    /* Entry Internal: FsftPLTR_e_ACCSystemSts/FsftPLTR_e_ACCSystemStsChrt */
    /* Transition: '<S250>:2' */
    (void)Rte_Write_VePLTR_b_ACCSystemSts_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_e_ACCSystemSts' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_e_AEBSystemSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_e_AEBSystemSts' */
    /* Outport: '<Root>/VePLTR_b_AEBSystemSts_FA' incorporates:
     *  Chart: '<S52>/FsftPLTR_e_AEBSystemStsChrt'
     *  SignalConversion generated from: '<S52>/VePLTR_b_AEBSystemSts_FA_out'
     */
    /* Gateway: FsftPLTR_e_AEBSystemSts/FsftPLTR_e_AEBSystemStsChrt */
    /* During: FsftPLTR_e_AEBSystemSts/FsftPLTR_e_AEBSystemStsChrt */
    /* Entry Internal: FsftPLTR_e_AEBSystemSts/FsftPLTR_e_AEBSystemStsChrt */
    /* Transition: '<S251>:2' */
    (void)Rte_Write_VePLTR_b_AEBSystemSts_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_e_AEBSystemSts' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_e_ASCM_Stat(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_e_ASCM_Stat' */
    /* Outport: '<Root>/VePLTR_b_ASCM_Stat_FA' incorporates:
     *  Chart: '<S53>/FsftPLTR_e_ASCM_StatChrt'
     *  SignalConversion generated from: '<S53>/VePLTR_b_ASCM_Stat_FA'
     */
    /* Gateway: FsftPLTR_e_ASCM_Stat/FsftPLTR_e_ASCM_StatChrt */
    /* During: FsftPLTR_e_ASCM_Stat/FsftPLTR_e_ASCM_StatChrt */
    /* Entry Internal: FsftPLTR_e_ASCM_Stat/FsftPLTR_e_ASCM_StatChrt */
    /* Transition: '<S252>:2' */
    (void)Rte_Write_VePLTR_b_ASCM_Stat_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_e_ASCM_Stat' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_e_Command_15Sts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_e_Command_15Sts' */
    /* Outport: '<Root>/VePLTR_b_Command_15Sts_FA' incorporates:
     *  Chart: '<S54>/FsftPLTR_e_Command_15StsChrt'
     *  SignalConversion generated from: '<S54>/VePLTR_b_Command_15Sts_FA_out'
     */
    /* Gateway: FsftPLTR_e_Command_15Sts/FsftPLTR_e_Command_15StsChrt */
    /* During: FsftPLTR_e_Command_15Sts/FsftPLTR_e_Command_15StsChrt */
    /* Entry Internal: FsftPLTR_e_Command_15Sts/FsftPLTR_e_Command_15StsChrt */
    /* Transition: '<S253>:2' */
    (void)Rte_Write_VePLTR_b_Command_15Sts_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_e_Command_15Sts' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_e_DriverDoorOnOffSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_e_DriverDoorOnOffSts' */
    /* Merge: '<Root>/Merge_69_Irv3' incorporates:
     *  Chart: '<S55>/FsftPLTR_e_DriverDoorOnOffStsChrt'
     *  SignalConversion generated from: '<S55>/VePLTR_b_DriverDoorOnOffSts_FA'
     */
    /* Gateway: FsftPLTR_e_DriverDoorOnOffSts/FsftPLTR_e_DriverDoorOnOffStsChrt */
    /* During: FsftPLTR_e_DriverDoorOnOffSts/FsftPLTR_e_DriverDoorOnOffStsChrt */
    /* Entry Internal: FsftPLTR_e_DriverDoorOnOffSts/FsftPLTR_e_DriverDoorOnOffStsChrt */
    /* Transition: '<S254>:2' */
    Rte_IrvWrite_FsftPLTR_e_DriverDoorOnOffSts_VePLTR_b_DriverDoorOnOffSts_FA_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_e_DriverDoorOnOffSts' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_e_DriverSeatBeltSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_e_DriverSeatBeltSts' */
    /* Outport: '<Root>/VePLTR_b_DriverSeatBeltStsFA' incorporates:
     *  Chart: '<S56>/FsftPLTR_e_DriverSeatBeltStsChrt'
     *  SignalConversion generated from: '<S56>/VePLTR_b_DriverSeatBeltStsFA'
     */
    /* Gateway: FsftPLTR_e_DriverSeatBeltSts/FsftPLTR_e_DriverSeatBeltStsChrt */
    /* During: FsftPLTR_e_DriverSeatBeltSts/FsftPLTR_e_DriverSeatBeltStsChrt */
    /* Entry Internal: FsftPLTR_e_DriverSeatBeltSts/FsftPLTR_e_DriverSeatBeltStsChrt */
    /* Transition: '<S255>:2' */
    (void)Rte_Write_VePLTR_b_DriverSeatBeltStsFA_Value(true);

    /* Outport: '<Root>/VePLTR_e_DriverSeatBeltSts' incorporates:
     *  Chart: '<S56>/FsftPLTR_e_DriverSeatBeltStsChrt'
     *  SignalConversion generated from: '<S56>/VePLTR_e_DriverSeatBeltSts'
     */
    (void)Rte_Write_VePLTR_e_DriverSeatBeltSts_Value(CePLTR_e_DRV_SEATBELT_OK);

    /* Merge: '<Root>/Merge_17' incorporates:
     *  Chart: '<S56>/FsftPLTR_e_DriverSeatBeltStsChrt'
     *  SignalConversion generated from: '<S56>/VePLTR_b_DriverSeatBeltStsFA_write'
     */
    Rte_IrvWrite_FsftPLTR_e_DriverSeatBeltSts_VePLTR_b_DriverSeatBeltStsFA_write_IRV
        (true);

    /* Merge: '<Root>/Merge_19' incorporates:
     *  Chart: '<S56>/FsftPLTR_e_DriverSeatBeltStsChrt'
     *  SignalConversion generated from: '<S56>/VePLTR_e_DriverSeatBeltSts_write'
     */
    Rte_IrvWrite_FsftPLTR_e_DriverSeatBeltSts_VePLTR_e_DriverSeatBeltSts_write_IRV
        (CePLTR_e_DRV_SEATBELT_OK);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_e_DriverSeatBeltSts' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_e_DrvrSeatSnsrSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_e_DrvrSeatSnsrSts' */
    /* Merge: '<Root>/Merge_96' incorporates:
     *  Chart: '<S57>/FsftPLTR_e_DrvrSeatSnsrStsChrt'
     *  SignalConversion generated from: '<S57>/VePLTR_b_DrvrSeatSnsrSts_FA_write'
     */
    /* Gateway: FsftPLTR_e_DrvrSeatSnsrSts/FsftPLTR_e_DrvrSeatSnsrStsChrt */
    /* During: FsftPLTR_e_DrvrSeatSnsrSts/FsftPLTR_e_DrvrSeatSnsrStsChrt */
    /* Entry Internal: FsftPLTR_e_DrvrSeatSnsrSts/FsftPLTR_e_DrvrSeatSnsrStsChrt */
    /* Transition: '<S256>:2' */
    Rte_IrvWrite_FsftPLTR_e_DrvrSeatSnsrSts_VePLTR_b_DrvrSeatSnsrSts_FA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_e_DrvrSeatSnsrSts' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_e_EPBHoldSt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_e_EPBHoldSt' */
    /* Outport: '<Root>/VePLTR_b_EPBHoldStsFA' incorporates:
     *  Chart: '<S58>/FsftPLTR_e_EPBHoldStChrt'
     *  SignalConversion generated from: '<S58>/VePLTR_b_EPBHoldStFA'
     */
    /* Gateway: FsftPLTR_e_EPBHoldSt/FsftPLTR_e_EPBHoldStChrt */
    /* During: FsftPLTR_e_EPBHoldSt/FsftPLTR_e_EPBHoldStChrt */
    /* Entry Internal: FsftPLTR_e_EPBHoldSt/FsftPLTR_e_EPBHoldStChrt */
    /* Transition: '<S257>:2' */
    (void)Rte_Write_VePLTR_b_EPBHoldStsFA_Value(true);

    /* Outport: '<Root>/VePLTR_e_EPBHoldSts' incorporates:
     *  Chart: '<S58>/FsftPLTR_e_EPBHoldStChrt'
     *  SignalConversion generated from: '<S58>/VePLTR_e_EPBHoldSt'
     */
    (void)Rte_Write_VePLTR_e_EPBHoldSts_Value(KePLTR_e_EPBHoldStDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_e_EPBHoldSt' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_e_ERS_SW(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_e_ERS_SW' */
    /* Outport: '<Root>/VePLTR_b_ERS_SWFA' incorporates:
     *  Chart: '<S59>/FsftPLTR_e_ERS_SWChrt'
     *  SignalConversion generated from: '<S59>/VePLTR_b_ERS_SWFA'
     */
    /* Gateway: FsftPLTR_e_ERS_SW/FsftPLTR_e_ERS_SWChrt */
    /* During: FsftPLTR_e_ERS_SW/FsftPLTR_e_ERS_SWChrt */
    /* Entry Internal: FsftPLTR_e_ERS_SW/FsftPLTR_e_ERS_SWChrt */
    /* Transition: '<S258>:2' */
    (void)Rte_Write_VePLTR_b_ERS_SWFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_e_ERS_SW' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_e_HAS_TelltaleSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_e_HAS_TelltaleSts' */
    /* Outport: '<Root>/VePLTR_b_HAS_TelltaleSts_FA' incorporates:
     *  Chart: '<S60>/FsftPLTR_e_HAS_TelltaleStsChrt'
     *  SignalConversion generated from: '<S60>/VePLTR_b_HAS_TelltaleSts_FA_out'
     */
    /* Gateway: FsftPLTR_e_HAS_TelltaleSts/FsftPLTR_e_HAS_TelltaleStsChrt */
    /* During: FsftPLTR_e_HAS_TelltaleSts/FsftPLTR_e_HAS_TelltaleStsChrt */
    /* Entry Internal: FsftPLTR_e_HAS_TelltaleSts/FsftPLTR_e_HAS_TelltaleStsChrt */
    /* Transition: '<S259>:2' */
    (void)Rte_Write_VePLTR_b_HAS_TelltaleSts_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_e_HAS_TelltaleSts' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_e_HiBmLvr_Stat(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_e_HiBmLvr_Stat' */
    /* Outport: '<Root>/VePLTR_b_HiBmLvr_Stat_FA' incorporates:
     *  Chart: '<S61>/FsftPLTR_e_HiBmLvr_StatChrt'
     *  SignalConversion generated from: '<S61>/VePLTR_b_HiBmLvr_Stat_FA'
     */
    /* Gateway: FsftPLTR_e_HiBmLvr_Stat/FsftPLTR_e_HiBmLvr_StatChrt */
    /* During: FsftPLTR_e_HiBmLvr_Stat/FsftPLTR_e_HiBmLvr_StatChrt */
    /* Entry Internal: FsftPLTR_e_HiBmLvr_Stat/FsftPLTR_e_HiBmLvr_StatChrt */
    /* Transition: '<S260>:2' */
    (void)Rte_Write_VePLTR_b_HiBmLvr_Stat_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_e_HiBmLvr_Stat' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_e_LSMDExtReleaseLockReq(void)
{
    /* Gateway: FsftPLTR_e_LSMDExtReleaseLockReq/FsftPLTR_e_LSMDExtReleaseLockReqChrt */
    /* During: FsftPLTR_e_LSMDExtReleaseLockReq/FsftPLTR_e_LSMDExtReleaseLockReqChrt */
    /* Entry Internal: FsftPLTR_e_LSMDExtReleaseLockReq/FsftPLTR_e_LSMDExtReleaseLockReqChrt */
    /* Transition: '<S261>:2' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_e_MRM_Status(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_e_MRM_Status' */
    /* Outport: '<Root>/VePLTR_b_MRM_Status_FA' incorporates:
     *  Chart: '<S63>/FsftPLTR_e_MRM_StatusChrt'
     *  SignalConversion generated from: '<S63>/VePLTR_b_MRM_Status_FA'
     */
    /* Gateway: FsftPLTR_e_MRM_Status/FsftPLTR_e_MRM_StatusChrt */
    /* During: FsftPLTR_e_MRM_Status/FsftPLTR_e_MRM_StatusChrt */
    /* Entry Internal: FsftPLTR_e_MRM_Status/FsftPLTR_e_MRM_StatusChrt */
    /* Transition: '<S262>:2' */
    (void)Rte_Write_VePLTR_b_MRM_Status_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_e_MRM_Status' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_e_MRM_Status_C2(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_e_MRM_Status_C2' */
    /* Outport: '<Root>/VePLTR_e_MRM_Status_C2_FA' incorporates:
     *  Chart: '<S64>/FsftPLTR_e_MRM_Status_C2Chrt'
     *  SignalConversion generated from: '<S64>/VePLTR_b_MRM_Status_C2_FA'
     */
    /* Gateway: FsftPLTR_e_MRM_Status_C2/FsftPLTR_e_MRM_Status_C2Chrt */
    /* During: FsftPLTR_e_MRM_Status_C2/FsftPLTR_e_MRM_Status_C2Chrt */
    /* Entry Internal: FsftPLTR_e_MRM_Status_C2/FsftPLTR_e_MRM_Status_C2Chrt */
    /* Transition: '<S263>:2' */
    (void)Rte_Write_VePLTR_e_MRM_Status_C2_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_e_MRM_Status_C2' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_e_ParkingGearShiftReq_BSM(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_e_ParkingGearShiftReq_BSM' */
    /* Outport: '<Root>/VePLTR_b_ParkingGearShiftReq_BSM_FA' incorporates:
     *  Chart: '<S65>/FsftPLTR_e_ParkingGearShiftReq_BSMChrt'
     *  SignalConversion generated from: '<S65>/VePLTR_b_ParkingGearShiftReq_BSM_FA'
     */
    /* Gateway: FsftPLTR_e_ParkingGearShiftReq_BSM/FsftPLTR_e_ParkingGearShiftReq_BSMChrt */
    /* During: FsftPLTR_e_ParkingGearShiftReq_BSM/FsftPLTR_e_ParkingGearShiftReq_BSMChrt */
    /* Entry Internal: FsftPLTR_e_ParkingGearShiftReq_BSM/FsftPLTR_e_ParkingGearShiftReq_BSMChrt */
    /* Transition: '<S264>:2' */
    (void)Rte_Write_VePLTR_b_ParkingGearShiftReq_BSM_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_e_ParkingGearShiftReq_BSM' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_e_SelectSpdSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_e_SelectSpdSts' */
    /* Outport: '<Root>/VePLTR_b_SelectSpdSts_FA' incorporates:
     *  Chart: '<S66>/FsftPLTR_e_SelectSpdStsChrt'
     *  SignalConversion generated from: '<S66>/VePLTR_b_SelectSpdStsFA'
     */
    /* Gateway: FsftPLTR_e_SelectSpdSts/FsftPLTR_e_SelectSpdStsChrt */
    /* During: FsftPLTR_e_SelectSpdSts/FsftPLTR_e_SelectSpdStsChrt */
    /* Entry Internal: FsftPLTR_e_SelectSpdSts/FsftPLTR_e_SelectSpdStsChrt */
    /* Transition: '<S265>:2' */
    (void)Rte_Write_VePLTR_b_SelectSpdSts_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_e_SelectSpdSts' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_e_TowHaulMode(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_e_TowHaulMode' */
    /* Outport: '<Root>/VePLTR_e_TowHaulMode' incorporates:
     *  Chart: '<S67>/FsftPLTR_e_TowHaulModeChrt'
     *  SignalConversion generated from: '<S67>/VePLTR_e_TowHaulMode'
     */
    /* Gateway: FsftPLTR_e_TowHaulMode/FsftPLTR_e_TowHaulModeChrt */
    /* During: FsftPLTR_e_TowHaulMode/FsftPLTR_e_TowHaulModeChrt */
    /* Entry Internal: FsftPLTR_e_TowHaulMode/FsftPLTR_e_TowHaulModeChrt */
    /* Transition: '<S266>:2' */
    (void)Rte_Write_VePLTR_e_TowHaulMode_Value(CePLTR_e_Towing_MD_RQ_OFF);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_e_TowHaulMode' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_e_VehicleCountryCode(void)
{
    /* Gateway: FsftPLTR_e_VehicleCountryCode/FsftPLTR_e_VehicleCountryCodeChrt */
    /* During: FsftPLTR_e_VehicleCountryCode/FsftPLTR_e_VehicleCountryCodeChrt */
    /* Entry Internal: FsftPLTR_e_VehicleCountryCode/FsftPLTR_e_VehicleCountryCodeChrt */
    /* Transition: '<S267>:2' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_e_eBurn_Stages(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_e_eBurn_Stages' */
    /* Outport: '<Root>/VePLTR_b_eBurn_Stages_FA' incorporates:
     *  Chart: '<S69>/FsftPLTR_e_eBurn_StagesChrt'
     *  SignalConversion generated from: '<S69>/VePLTR_b_eBurn_Stages_FA_out'
     */
    /* Gateway: FsftPLTR_e_eBurn_Stages/FsftPLTR_e_eBurn_StagesChrt */
    /* During: FsftPLTR_e_eBurn_Stages/FsftPLTR_e_eBurn_StagesChrt */
    /* Entry Internal: FsftPLTR_e_eBurn_Stages/FsftPLTR_e_eBurn_StagesChrt */
    /* Transition: '<S268>:2' */
    (void)Rte_Write_VePLTR_b_eBurn_Stages_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_e_eBurn_Stages' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_l_Odometer_Km(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_l_Odometer_Km' */
    /* Outport: '<Root>/VePLTR_b_Odometer_KmFA' incorporates:
     *  Chart: '<S70>/FsftPLTR_l_Odometer_KmChrt'
     *  SignalConversion generated from: '<S70>/VePLTR_b_Odometer_KmFA'
     */
    /* Gateway: FsftPLTR_l_Odometer_Km/FsftPLTR_l_Odometer_KmChrt */
    /* During: FsftPLTR_l_Odometer_Km/FsftPLTR_l_Odometer_KmChrt */
    /* Entry Internal: FsftPLTR_l_Odometer_Km/FsftPLTR_l_Odometer_KmChrt */
    /* Transition: '<S269>:2' */
    (void)Rte_Write_VePLTR_b_Odometer_KmFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_l_Odometer_Km' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_l_TravelDistance(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_l_TravelDistance' */
    /* Outport: '<Root>/VePLTR_b_TravelDistance_FA' incorporates:
     *  Chart: '<S71>/FsftPLTR_l_TravelDistanceChrt'
     *  SignalConversion generated from: '<S71>/VePLTR_b_TravelDistance_FA_out'
     */
    /* Gateway: FsftPLTR_l_TravelDistance/FsftPLTR_l_TravelDistanceChrt */
    /* During: FsftPLTR_l_TravelDistance/FsftPLTR_l_TravelDistanceChrt */
    /* Entry Internal: FsftPLTR_l_TravelDistance/FsftPLTR_l_TravelDistanceChrt */
    /* Transition: '<S270>:2' */
    (void)Rte_Write_VePLTR_b_TravelDistance_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_l_TravelDistance' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_p_AmbientAirPrs(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_p_AmbientAirPrs' */
    /* Outport: '<Root>/VePLTR_b_AmbientAirPrsFA' incorporates:
     *  Chart: '<S72>/FsftPLTR_p_AmbientAirPrsChrt'
     *  SignalConversion generated from: '<S72>/VePLTR_b_AmbientAirPrsFA'
     */
    /* Gateway: FsftPLTR_p_AmbientAirPrs/FsftPLTR_p_AmbientAirPrsChrt */
    /* During: FsftPLTR_p_AmbientAirPrs/FsftPLTR_p_AmbientAirPrsChrt */
    /* Entry Internal: FsftPLTR_p_AmbientAirPrs/FsftPLTR_p_AmbientAirPrsChrt */
    /* Transition: '<S271>:2' */
    (void)Rte_Write_VePLTR_b_AmbientAirPrsFA_Value(true);

    /* Outport: '<Root>/VePLTR_p_AmbientAirPrs' incorporates:
     *  Chart: '<S72>/FsftPLTR_p_AmbientAirPrsChrt'
     *  SignalConversion generated from: '<S72>/VePLTR_p_AmbientAirPrs'
     */
    (void)Rte_Write_VePLTR_p_AmbientAirPrs_Value(KePLTR_p_AmbientAirDflt);

    /* Merge: '<Root>/Merge_12_Irv' incorporates:
     *  Chart: '<S72>/FsftPLTR_p_AmbientAirPrsChrt'
     *  SignalConversion generated from: '<S72>/VePLTR_p_AmbientAirPrs_write'
     */
    Rte_IrvWrite_FsftPLTR_p_AmbientAirPrs_VePLTR_p_AmbientAirPrs_write_IRV
        (KePLTR_p_AmbientAirDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_p_AmbientAirPrs' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_phi_LwsAngle(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_phi_LwsAngle' */
    /* Outport: '<Root>/VePLTR_b_LwsAngleFA' incorporates:
     *  Chart: '<S73>/FsftPLTR_phi_LwsAngleChrt'
     *  SignalConversion generated from: '<S73>/VePLTR_b_LwsAngleFA'
     */
    /* Gateway: FsftPLTR_phi_LwsAngle/FsftPLTR_phi_LwsAngleChrt */
    /* During: FsftPLTR_phi_LwsAngle/FsftPLTR_phi_LwsAngleChrt */
    /* Entry Internal: FsftPLTR_phi_LwsAngle/FsftPLTR_phi_LwsAngleChrt */
    /* Transition: '<S272>:2' */
    (void)Rte_Write_VePLTR_b_LwsAngleFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_phi_LwsAngle' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_t_GPS_UTC_Second(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_t_GPS_UTC_Second' */
    /* Merge: '<Root>/Merge34' incorporates:
     *  Chart: '<S74>/FsftPLTR_t_GPS_UTC_SecondChrt'
     *  SignalConversion generated from: '<S74>/VePLTR_b_GPS_UTC_SecondFA_write'
     */
    /* Gateway: FsftPLTR_t_GPS_UTC_Second/FsftPLTR_t_GPS_UTC_SecondChrt */
    /* During: FsftPLTR_t_GPS_UTC_Second/FsftPLTR_t_GPS_UTC_SecondChrt */
    /* Entry Internal: FsftPLTR_t_GPS_UTC_Second/FsftPLTR_t_GPS_UTC_SecondChrt */
    /* Transition: '<S273>:2' */
    Rte_IrvWrite_FsftPLTR_t_GPS_UTC_Second_VePLTR_b_GPS_UTC_SecondFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_t_GPS_UTC_Second' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_tdy_GPS_Date_Day(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_tdy_GPS_Date_Day' */
    /* Merge: '<Root>/Merge24' incorporates:
     *  Chart: '<S75>/FsftPLTR_tdy_GPS_Date_DayChrt'
     *  SignalConversion generated from: '<S75>/VePLTR_b_GPS_Date_DayFA_write'
     */
    /* Gateway: FsftPLTR_tdy_GPS_Date_Day/FsftPLTR_tdy_GPS_Date_DayChrt */
    /* During: FsftPLTR_tdy_GPS_Date_Day/FsftPLTR_tdy_GPS_Date_DayChrt */
    /* Entry Internal: FsftPLTR_tdy_GPS_Date_Day/FsftPLTR_tdy_GPS_Date_DayChrt */
    /* Transition: '<S274>:2' */
    Rte_IrvWrite_FsftPLTR_tdy_GPS_Date_Day_VePLTR_b_GPS_Date_DayFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_tdy_GPS_Date_Day' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_thr_GPS_UTC_Hour(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_thr_GPS_UTC_Hour' */
    /* Merge: '<Root>/Merge30' incorporates:
     *  Chart: '<S76>/FsftPLTR_thr_GPS_UTC_HourChrt'
     *  SignalConversion generated from: '<S76>/VePLTR_b_GPS_UTC_HourFA_write'
     */
    /* Gateway: FsftPLTR_thr_GPS_UTC_Hour/FsftPLTR_thr_GPS_UTC_HourChrt */
    /* During: FsftPLTR_thr_GPS_UTC_Hour/FsftPLTR_thr_GPS_UTC_HourChrt */
    /* Entry Internal: FsftPLTR_thr_GPS_UTC_Hour/FsftPLTR_thr_GPS_UTC_HourChrt */
    /* Transition: '<S275>:2' */
    Rte_IrvWrite_FsftPLTR_thr_GPS_UTC_Hour_VePLTR_b_GPS_UTC_HourFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_thr_GPS_UTC_Hour' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_tmn_GPS_UTC_Minute(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_tmn_GPS_UTC_Minute' */
    /* Merge: '<Root>/Merge32' incorporates:
     *  Chart: '<S77>/FsftPLTR_tmn_GPS_UTC_MinuteChrt'
     *  SignalConversion generated from: '<S77>/VePLTR_b_GPS_UTC_MinuteFA_write'
     */
    /* Gateway: FsftPLTR_tmn_GPS_UTC_Minute/FsftPLTR_tmn_GPS_UTC_MinuteChrt */
    /* During: FsftPLTR_tmn_GPS_UTC_Minute/FsftPLTR_tmn_GPS_UTC_MinuteChrt */
    /* Entry Internal: FsftPLTR_tmn_GPS_UTC_Minute/FsftPLTR_tmn_GPS_UTC_MinuteChrt */
    /* Transition: '<S276>:2' */
    Rte_IrvWrite_FsftPLTR_tmn_GPS_UTC_Minute_VePLTR_b_GPS_UTC_MinuteFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_tmn_GPS_UTC_Minute' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_tmt_GPS_Date_Month(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_tmt_GPS_Date_Month' */
    /* Merge: '<Root>/Merge26' incorporates:
     *  Chart: '<S78>/FsftPLTR_tmt_GPS_Date_MonthChrt'
     *  SignalConversion generated from: '<S78>/VePLTR_b_GPS_Date_MonthFA_write'
     */
    /* Gateway: FsftPLTR_tmt_GPS_Date_Month/FsftPLTR_tmt_GPS_Date_MonthChrt */
    /* During: FsftPLTR_tmt_GPS_Date_Month/FsftPLTR_tmt_GPS_Date_MonthChrt */
    /* Entry Internal: FsftPLTR_tmt_GPS_Date_Month/FsftPLTR_tmt_GPS_Date_MonthChrt */
    /* Transition: '<S277>:2' */
    Rte_IrvWrite_FsftPLTR_tmt_GPS_Date_Month_VePLTR_b_GPS_Date_MonthFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_tmt_GPS_Date_Month' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_tyr_GPS_Date_Year(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_tyr_GPS_Date_Year' */
    /* Merge: '<Root>/Merge28' incorporates:
     *  Chart: '<S79>/FsftPLTR_tyr_GPS_Date_YearChrt'
     *  SignalConversion generated from: '<S79>/VePLTR_b_GPS_Date_YearFA_write'
     */
    /* Gateway: FsftPLTR_tyr_GPS_Date_Year/FsftPLTR_tyr_GPS_Date_YearChrt */
    /* During: FsftPLTR_tyr_GPS_Date_Year/FsftPLTR_tyr_GPS_Date_YearChrt */
    /* Entry Internal: FsftPLTR_tyr_GPS_Date_Year/FsftPLTR_tyr_GPS_Date_YearChrt */
    /* Transition: '<S278>:2' */
    Rte_IrvWrite_FsftPLTR_tyr_GPS_Date_Year_VePLTR_b_GPS_Date_YearFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_tyr_GPS_Date_Year' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_y_AUD_LVL(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_y_AUD_LVL' */
    /* Outport: '<Root>/VePLTR_b_AUD_LVL_FA' incorporates:
     *  Chart: '<S80>/FsftPLTR_y_AUD_LVLChrt'
     *  SignalConversion generated from: '<S80>/VePLTR_b_AUD_LVL_FA_out'
     */
    /* Gateway: FsftPLTR_y_AUD_LVL/FsftPLTR_y_AUD_LVLChrt */
    /* During: FsftPLTR_y_AUD_LVL/FsftPLTR_y_AUD_LVLChrt */
    /* Entry Internal: FsftPLTR_y_AUD_LVL/FsftPLTR_y_AUD_LVLChrt */
    /* Transition: '<S279>:2' */
    (void)Rte_Write_VePLTR_b_AUD_LVL_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_y_AUD_LVL' */
}

/* Output function */
FUNC(void, PLTR_CODE) FsftPLTR_y_FobSearchResult(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftPLTR_y_FobSearchResult' */
    /* Outport: '<Root>/VePLTR_b_FobSearchResult_FA' incorporates:
     *  Chart: '<S81>/FsftPLTR_y_FobSearchResultChrt'
     *  SignalConversion generated from: '<S81>/VePLTR_b_FobSearchResult_FA_out'
     */
    /* Gateway: FsftPLTR_y_FobSearchResult/FsftPLTR_y_FobSearchResultChrt */
    /* During: FsftPLTR_y_FobSearchResult/FsftPLTR_y_FobSearchResultChrt */
    /* Entry Internal: FsftPLTR_y_FobSearchResult/FsftPLTR_y_FobSearchResultChrt */
    /* Transition: '<S280>:2' */
    (void)Rte_Write_VePLTR_b_FobSearchResult_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftPLTR_y_FobSearchResult' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_Pct_Slope(VAR(float32, AUTOMATIC)
    LePLTR_Pct_Slope, VAR(boolean, AUTOMATIC) LePLTR_b_Slope_FA)
{
    boolean rtb_LePLTR_b_Slope_FA_out_f;

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_Pct_Slope' */
    /* Chart: '<S88>/PokePLTR_Pct_SlopeChrt' incorporates:
     *  SignalConversion generated from: '<S88>/LePLTR_Pct_Slope'
     *  SignalConversion generated from: '<S88>/LePLTR_b_Slope_FA'
     */
    /* Gateway: PokePLTR_Pct_Slope/PokePLTR_Pct_SlopeChrt */
    /* During: PokePLTR_Pct_Slope/PokePLTR_Pct_SlopeChrt */
    /* Entry Internal: PokePLTR_Pct_Slope/PokePLTR_Pct_SlopeChrt */
    /* Transition: '<S620>:2' */
    if (!LePLTR_b_Slope_FA)
    {
        /* Transition: '<S620>:3' */
        /* Transition: '<S620>:15' */
        PLTR_ac_B.LePLTR_Pct_Slope_out = LePLTR_Pct_Slope;
        rtb_LePLTR_b_Slope_FA_out_f = false;

        /* Transition: '<S620>:18' */
    }
    else
    {
        /* Transition: '<S620>:4' */
        rtb_LePLTR_b_Slope_FA_out_f = true;
    }

    /* End of Chart: '<S88>/PokePLTR_Pct_SlopeChrt' */

    /* Outport: '<Root>/VePLTR_Pct_Slope' incorporates:
     *  SignalConversion generated from: '<S88>/VePLTR_Pct_Slope'
     */
    (void)Rte_Write_VePLTR_Pct_Slope_Value(PLTR_ac_B.LePLTR_Pct_Slope_out);

    /* Outport: '<Root>/VePLTR_b_Slope_FA' incorporates:
     *  SignalConversion generated from: '<S88>/VePLTR_b_Slope_FA'
     */
    (void)Rte_Write_VePLTR_b_Slope_FA_Value(rtb_LePLTR_b_Slope_FA_out_f);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_Pct_Slope' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_ReInit_EEPROM(void)
{
    uint8 tmpRead;
    boolean rtb_LePLTI_b_ResetFlagLifetime_out;

    /* Inport: '<Root>/VeBSWR_e_ITIDLifetimeEEProgStatus' */
    (void)Rte_Read_VeBSWR_e_ITIDLifetimeEEProgStatus_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_ReInit_EEPROM' */
    /* Chart: '<S89>/PokePLTR_ReInit_EEPROMChrt' incorporates:
     *  Constant: '<S621>/Calib'
     *  SignalConversion generated from: '<S89>/VeBSWR_e_ITIDLifetimeEEProgStatus'
     */
    /* Gateway: PokePLTR_ReInit_EEPROM/PokePLTR_ReInit_EEPROMChrt */
    /* During: PokePLTR_ReInit_EEPROM/PokePLTR_ReInit_EEPROMChrt */
    /* Entry Internal: PokePLTR_ReInit_EEPROM/PokePLTR_ReInit_EEPROMChrt */
    /* Transition: '<S622>:2' */
    if (((((uint32)tmpRead) & 32U) != 0U) || (((((uint32)tmpRead) & 64U) != 0U) &&
         (KePLTR_b_ResetLifetimeAfterReprog)))
    {
        /* Transition: '<S622>:23' */
        /* Transition: '<S622>:29' */
        rtb_LePLTI_b_ResetFlagLifetime_out = true;

        /* ProgramRunTime_ITIDLifetime(LaPLTR_l_arr1, LaPLTR_Cnt_arr2, LaPLTR_P_arr3 ,LaPLTR_Cnt_arr4, LaPLTR_Cnt_arr5); */
        /* Transition: '<S622>:31' */
    }
    else
    {
        /* Transition: '<S622>:32' */
        rtb_LePLTI_b_ResetFlagLifetime_out = false;
    }

    /* End of Chart: '<S89>/PokePLTR_ReInit_EEPROMChrt' */

    /* Outport: '<Root>/VePLTR_b_ResetFlagLifetime_EEerror' incorporates:
     *  SignalConversion generated from: '<S89>/VePLTI_b_ResetFlagLifetime'
     */
    (void)Rte_Write_VePLTR_b_ResetFlagLifetime_EEerror_Value
        (rtb_LePLTI_b_ResetFlagLifetime_out);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_ReInit_EEPROM' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_W_Inverter_PowerDraw(VAR(float32, AUTOMATIC)
    LePLTR_W_Inverter_PowerDraw, VAR(boolean, AUTOMATIC)
    LePLTR_b_Inverter_PowerDrawFA)
{
    boolean rtb_LePLTR_b_Inverter_PowerDrawFA_out_a;

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_W_Inverter_PowerDraw' */
    /* Chart: '<S90>/PokePLTR_W_Inverter_PowerDrawChrt' incorporates:
     *  SignalConversion generated from: '<S90>/LePLTR_W_Inverter_PowerDraw'
     *  SignalConversion generated from: '<S90>/LePLTR_b_Inverter_PowerDrawFA'
     */
    /* Gateway: PokePLTR_W_Inverter_PowerDraw/PokePLTR_W_Inverter_PowerDrawChrt */
    /* During: PokePLTR_W_Inverter_PowerDraw/PokePLTR_W_Inverter_PowerDrawChrt */
    /* Entry Internal: PokePLTR_W_Inverter_PowerDraw/PokePLTR_W_Inverter_PowerDrawChrt */
    /* Transition: '<S623>:2' */
    if (!LePLTR_b_Inverter_PowerDrawFA)
    {
        /* Transition: '<S623>:3' */
        /* Transition: '<S623>:15' */
        PLTR_ac_B.LePLTR_W_Inverter_PowerDraw_out = LePLTR_W_Inverter_PowerDraw;
        rtb_LePLTR_b_Inverter_PowerDrawFA_out_a = false;

        /* Transition: '<S623>:18' */
    }
    else
    {
        /* Transition: '<S623>:4' */
        rtb_LePLTR_b_Inverter_PowerDrawFA_out_a = true;
    }

    /* End of Chart: '<S90>/PokePLTR_W_Inverter_PowerDrawChrt' */

    /* Outport: '<Root>/VePLTR_W_Inverter_PowerDraw' incorporates:
     *  SignalConversion generated from: '<S90>/VePLTR_W_Inverter_PowerDraw'
     */
    (void)Rte_Write_VePLTR_W_Inverter_PowerDraw_Value
        (PLTR_ac_B.LePLTR_W_Inverter_PowerDraw_out);

    /* Outport: '<Root>/VePLTR_b_Inverter_PowerDraw_FA' incorporates:
     *  SignalConversion generated from: '<S90>/VePLTR_b_Inverter_PowerDrawFA'
     */
    (void)Rte_Write_VePLTR_b_Inverter_PowerDraw_FA_Value
        (rtb_LePLTR_b_Inverter_PowerDrawFA_out_a);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_W_Inverter_PowerDraw' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_a_LatAccel_ORC(VAR(float32, AUTOMATIC)
    LePLTR_a_LatAccel_ORC)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_a_LatAccel_ORC' */
    /* Outport: '<Root>/VePLTR_a_LatAccel_ORC' incorporates:
     *  SignalConversion generated from: '<S91>/VePLTR_a_LatAccel_ORC'
     *  SignalConversion generated from: '<S91>/LePLTR_a_LatAccel_ORC'
     */
    /* Gateway: PokePLTR_a_LatAccel_ORC/PokePLTR_a_LatAccel_ORCChrt */
    /* During: PokePLTR_a_LatAccel_ORC/PokePLTR_a_LatAccel_ORCChrt */
    /* Entry Internal: PokePLTR_a_LatAccel_ORC/PokePLTR_a_LatAccel_ORCChrt */
    /* Transition: '<S624>:2' */
    (void)Rte_Write_VePLTR_a_LatAccel_ORC_Value(LePLTR_a_LatAccel_ORC);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_a_LatAccel_ORC' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_a_LongAccel(VAR(float32, AUTOMATIC)
    LePLTR_a_LongAccel, VAR(boolean, AUTOMATIC) LePLTR_b_LongAccelFA)
{
    boolean rtb_LePLTR_b_LongAccelFA_out_i;

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_a_LongAccel' */
    /* Chart: '<S92>/PokePLTR_a_LongAccelChrt' incorporates:
     *  SignalConversion generated from: '<S92>/LePLTR_a_LongAccel'
     *  SignalConversion generated from: '<S92>/LePLTR_b_LongAccelFA'
     */
    /* Gateway: PokePLTR_a_LongAccel/PokePLTR_a_LongAccelChrt */
    /* During: PokePLTR_a_LongAccel/PokePLTR_a_LongAccelChrt */
    /* Entry Internal: PokePLTR_a_LongAccel/PokePLTR_a_LongAccelChrt */
    /* Transition: '<S625>:2' */
    if (!LePLTR_b_LongAccelFA)
    {
        /* Transition: '<S625>:3' */
        /* Transition: '<S625>:15' */
        PLTR_ac_B.LePLTR_a_LongAccel_out = LePLTR_a_LongAccel;
        rtb_LePLTR_b_LongAccelFA_out_i = false;

        /* Transition: '<S625>:18' */
    }
    else
    {
        /* Transition: '<S625>:4' */
        rtb_LePLTR_b_LongAccelFA_out_i = true;
    }

    /* End of Chart: '<S92>/PokePLTR_a_LongAccelChrt' */

    /* Outport: '<Root>/VePLTR_a_LongAccel' incorporates:
     *  SignalConversion generated from: '<S92>/VePLTR_a_LongAccel'
     */
    (void)Rte_Write_VePLTR_a_LongAccel_Value(PLTR_ac_B.LePLTR_a_LongAccel_out);

    /* Outport: '<Root>/VePLTR_b_LongAccelFA' incorporates:
     *  SignalConversion generated from: '<S92>/VePLTR_b_LongAccelFA'
     */
    (void)Rte_Write_VePLTR_b_LongAccelFA_Value(rtb_LePLTR_b_LongAccelFA_out_i);

    /* Merge: '<Root>/Merge_69_Irv' incorporates:
     *  SignalConversion generated from: '<S92>/VePLTR_a_LongAccel_write'
     * */
    Rte_IrvWrite_PokePLTR_a_LongAccel_VePLTR_a_LongAccel_write_IRV
        (PLTR_ac_B.LePLTR_a_LongAccel_out);

    /* Merge: '<Root>/Merge_24_Irv' incorporates:
     *  SignalConversion generated from: '<S92>/VePLTR_b_LongAccelFA_write'
     * */
    Rte_IrvWrite_PokePLTR_a_LongAccel_VePLTR_b_LongAccelFA_write_IRV
        (rtb_LePLTR_b_LongAccelFA_out_i);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_a_LongAccel' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_a_LongAccelOffset(VAR(float32, AUTOMATIC)
    LePLTR_a_LongAccelOffset, VAR(boolean, AUTOMATIC) LePLTR_b_LongAccelOffsetFA)
{
    boolean rtb_LePLTR_b_LongAccelOffsetFA_out_e;

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_a_LongAccelOffset' */
    /* Chart: '<S93>/PokePLTR_a_LongAccelOffsetChrt' incorporates:
     *  SignalConversion generated from: '<S93>/LePLTR_a_LongAccelOffset'
     *  SignalConversion generated from: '<S93>/LePLTR_b_LongAccelOffsetFA'
     */
    /* Gateway: PokePLTR_a_LongAccelOffset/PokePLTR_a_LongAccelOffsetChrt */
    /* During: PokePLTR_a_LongAccelOffset/PokePLTR_a_LongAccelOffsetChrt */
    /* Entry Internal: PokePLTR_a_LongAccelOffset/PokePLTR_a_LongAccelOffsetChrt */
    /* Transition: '<S626>:2' */
    if (!LePLTR_b_LongAccelOffsetFA)
    {
        /* Transition: '<S626>:3' */
        /* Transition: '<S626>:15' */
        PLTR_ac_B.LePLTR_a_LongAccelOffset_out = LePLTR_a_LongAccelOffset;
        rtb_LePLTR_b_LongAccelOffsetFA_out_e = false;

        /* Transition: '<S626>:18' */
    }
    else
    {
        /* Transition: '<S626>:4' */
        rtb_LePLTR_b_LongAccelOffsetFA_out_e = true;
    }

    /* End of Chart: '<S93>/PokePLTR_a_LongAccelOffsetChrt' */

    /* Outport: '<Root>/VePLTR_a_LongAccelOffset' incorporates:
     *  SignalConversion generated from: '<S93>/VePLTR_a_LongAccelOffset'
     */
    (void)Rte_Write_VePLTR_a_LongAccelOffset_Value
        (PLTR_ac_B.LePLTR_a_LongAccelOffset_out);

    /* Merge: '<Root>/Merge_38_Irv' incorporates:
     *  SignalConversion generated from: '<S93>/VePLTR_a_LongAccelOffset_write'
     * */
    Rte_IrvWrite_PokePLTR_a_LongAccelOffset_VePLTR_a_LongAccelOffset_write_IRV
        (PLTR_ac_B.LePLTR_a_LongAccelOffset_out);

    /* Merge: '<Root>/Merge_39' incorporates:
     *  SignalConversion generated from: '<S93>/VePLTR_b_LongAccelOffsetFA_write'
     * */
    Rte_IrvWrite_PokePLTR_a_LongAccelOffset_VePLTR_b_LongAccelOffsetFA_write_IRV
        (rtb_LePLTR_b_LongAccelOffsetFA_out_e);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_a_LongAccelOffset' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_a_LongAccel_ORC(VAR(float32, AUTOMATIC)
    LePLTR_a_LongAccel_ORC)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_a_LongAccel_ORC' */
    /* Outport: '<Root>/VePLTR_a_LongAccel_ORC' incorporates:
     *  SignalConversion generated from: '<S94>/VePLTR_a_LongAccel_ORC'
     *  SignalConversion generated from: '<S94>/LePLTR_a_LongAccel_ORC'
     */
    /* Gateway: PokePLTR_a_LongAccel_ORC/PokePLTR_a_LongAccel_ORCChrt */
    /* During: PokePLTR_a_LongAccel_ORC/PokePLTR_a_LongAccel_ORCChrt */
    /* Entry Internal: PokePLTR_a_LongAccel_ORC/PokePLTR_a_LongAccel_ORCChrt */
    /* Transition: '<S627>:2' */
    (void)Rte_Write_VePLTR_a_LongAccel_ORC_Value(LePLTR_a_LongAccel_ORC);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_a_LongAccel_ORC' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_a_TransAccel(VAR(float32, AUTOMATIC)
    LePLTR_a_TransAccel, VAR(boolean, AUTOMATIC) LePLTR_b_TransAccelFA)
{
    boolean rtb_LePLTR_b_TransAccelFA_out_c;

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_a_TransAccel' */
    /* Chart: '<S95>/PokePLTR_a_TransAccelChrt' incorporates:
     *  SignalConversion generated from: '<S95>/LePLTR_a_TransAccel'
     *  SignalConversion generated from: '<S95>/LePLTR_b_TransAccelFA'
     */
    /* Gateway: PokePLTR_a_TransAccel/PokePLTR_a_TransAccelChrt */
    /* During: PokePLTR_a_TransAccel/PokePLTR_a_TransAccelChrt */
    /* Entry Internal: PokePLTR_a_TransAccel/PokePLTR_a_TransAccelChrt */
    /* Transition: '<S628>:2' */
    if (!LePLTR_b_TransAccelFA)
    {
        /* Transition: '<S628>:3' */
        /* Transition: '<S628>:15' */
        PLTR_ac_B.LePLTR_a_TransAccel_out = LePLTR_a_TransAccel;
        rtb_LePLTR_b_TransAccelFA_out_c = false;

        /* Transition: '<S628>:18' */
    }
    else
    {
        /* Transition: '<S628>:4' */
        rtb_LePLTR_b_TransAccelFA_out_c = true;
    }

    /* End of Chart: '<S95>/PokePLTR_a_TransAccelChrt' */

    /* Outport: '<Root>/VePLTR_a_LatAccel' incorporates:
     *  SignalConversion generated from: '<S95>/VePLTR_a_TransAccel'
     */
    (void)Rte_Write_VePLTR_a_LatAccel_Value(PLTR_ac_B.LePLTR_a_TransAccel_out);

    /* Outport: '<Root>/VePLTR_b_LatAccelFA' incorporates:
     *  SignalConversion generated from: '<S95>/VePLTR_b_TransAccelFA'
     */
    (void)Rte_Write_VePLTR_b_LatAccelFA_Value(rtb_LePLTR_b_TransAccelFA_out_c);

    /* Merge: '<Root>/Merge_45_Irv' incorporates:
     *  SignalConversion generated from: '<S95>/VePLTR_a_TransAccel_write'
     * */
    Rte_IrvWrite_PokePLTR_a_TransAccel_VePLTR_a_TransAccel_write_IRV
        (PLTR_ac_B.LePLTR_a_TransAccel_out);

    /* Merge: '<Root>/Merge_14' incorporates:
     *  SignalConversion generated from: '<S95>/VePLTR_b_TransAccelFA_write'
     * */
    Rte_IrvWrite_PokePLTR_a_TransAccel_VePLTR_b_TransAccelFA_write_IRV
        (rtb_LePLTR_b_TransAccelFA_out_c);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_a_TransAccel' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_a_TransAccelOffset(VAR(float32, AUTOMATIC)
    LePLTR_a_TransAccelOffset, VAR(boolean, AUTOMATIC)
    LePLTR_b_TransAccelOffsetFA)
{
    boolean rtb_LePLTR_b_TransAccelOffsetFA_out_n;

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_a_TransAccelOffset' */
    /* Chart: '<S96>/PokePLTR_a_TransAccelOffsetChrt' incorporates:
     *  SignalConversion generated from: '<S96>/LePLTR_a_TransAccelOffset'
     *  SignalConversion generated from: '<S96>/LePLTR_b_TransAccelOffsetFA'
     */
    /* Gateway: PokePLTR_a_TransAccelOffset/PokePLTR_a_TransAccelOffsetChrt */
    /* During: PokePLTR_a_TransAccelOffset/PokePLTR_a_TransAccelOffsetChrt */
    /* Entry Internal: PokePLTR_a_TransAccelOffset/PokePLTR_a_TransAccelOffsetChrt */
    /* Transition: '<S629>:2' */
    if (!LePLTR_b_TransAccelOffsetFA)
    {
        /* Transition: '<S629>:3' */
        /* Transition: '<S629>:15' */
        PLTR_ac_B.LePLTR_a_TransAccelOffset_out = LePLTR_a_TransAccelOffset;
        rtb_LePLTR_b_TransAccelOffsetFA_out_n = false;

        /* Transition: '<S629>:18' */
    }
    else
    {
        /* Transition: '<S629>:4' */
        rtb_LePLTR_b_TransAccelOffsetFA_out_n = true;
    }

    /* End of Chart: '<S96>/PokePLTR_a_TransAccelOffsetChrt' */

    /* Merge: '<Root>/Merge_48' incorporates:
     *  SignalConversion generated from: '<S96>/VePLTR_a_TransAccelOffset_write'
     * */
    Rte_IrvWrite_PokePLTR_a_TransAccelOffset_VePLTR_a_TransAccelOffset_write_IRV
        (PLTR_ac_B.LePLTR_a_TransAccelOffset_out);

    /* Merge: '<Root>/Merge_46' incorporates:
     *  SignalConversion generated from: '<S96>/VePLTR_b_TransAccelOffsetFA_write'
     * */
    Rte_IrvWrite_PokePLTR_a_TransAccelOffset_VePLTR_b_TransAccelOffsetFA_write_IRV
        (rtb_LePLTR_b_TransAccelOffsetFA_out_n);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_a_TransAccelOffset' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_ACCEnbld(VAR(boolean, AUTOMATIC)
    LePLTR_b_ACCEnbld)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_ACCEnbld' */
    /* Merge: '<Root>/Merge_77' incorporates:
     *  SignalConversion generated from: '<S97>/LePLTR_b_ACCEnbld'
     *  SignalConversion generated from: '<S97>/VePLTR_b_ACCEnbld_write'
     */
    /* Gateway: PokePLTR_b_ACCEnbld/PokePLTR_b_ACCEnbldChrt */
    /* During: PokePLTR_b_ACCEnbld/PokePLTR_b_ACCEnbldChrt */
    /* Entry Internal: PokePLTR_b_ACCEnbld/PokePLTR_b_ACCEnbldChrt */
    /* Transition: '<S630>:2' */
    Rte_IrvWrite_PokePLTR_b_ACCEnbld_VePLTR_b_ACCEnbledInit_write_IRV
        (LePLTR_b_ACCEnbld);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_ACCEnbld' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_ACC_On(VAR(boolean, AUTOMATIC) LePLTR_b_ACC_On)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_ACC_On' */
    /* Outport: '<Root>/VePLTR_b_ACC_On' incorporates:
     *  SignalConversion generated from: '<S98>/VePLTR_b_ACC_On'
     *  SignalConversion generated from: '<S98>/LePLTR_b_ACC_On'
     */
    /* Gateway: PokePLTR_b_ACC_On/PokePLTR_b_ACC_OnChrt */
    /* During: PokePLTR_b_ACC_On/PokePLTR_b_ACC_OnChrt */
    /* Entry Internal: PokePLTR_b_ACC_On/PokePLTR_b_ACC_OnChrt */
    /* Transition: '<S631>:2' */
    (void)Rte_Write_VePLTR_b_ACC_On_Value(LePLTR_b_ACC_On);

    /* Outport: '<Root>/VePLTR_b_ACC_OnFA' incorporates:
     *  Chart: '<S98>/PokePLTR_b_ACC_OnChrt'
     *  SignalConversion generated from: '<S98>/VePLTR_b_ACC_OnFA'
     */
    (void)Rte_Write_VePLTR_b_ACC_OnFA_Value(false);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_ACC_On' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_ASCM_Srv(VAR(boolean, AUTOMATIC)
    LePLTR_b_ASCM_Srv)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_ASCM_Srv' */
    /* Outport: '<Root>/VePLTR_b_ASCM_Srv' incorporates:
     *  SignalConversion generated from: '<S99>/VePLTR_b_ASCM_Srv'
     *  SignalConversion generated from: '<S99>/LePLTR_b_ASCM_Srv'
     */
    /* Gateway: PokePLTR_b_ASCM_Srv/PokePLTR_b_ASCM_SrvChrt */
    /* During: PokePLTR_b_ASCM_Srv/PokePLTR_b_ASCM_SrvChrt */
    /* Entry Internal: PokePLTR_b_ASCM_Srv/PokePLTR_b_ASCM_SrvChrt */
    /* Transition: '<S632>:2' */
    (void)Rte_Write_VePLTR_b_ASCM_Srv_Value(LePLTR_b_ASCM_Srv);

    /* Outport: '<Root>/VePLTR_b_ASCM_Srv_FA' incorporates:
     *  Chart: '<S99>/PokePLTR_b_ASCM_SrvChrt'
     *  SignalConversion generated from: '<S99>/VePLTR_b_ASCM_Srv_FA'
     */
    (void)Rte_Write_VePLTR_b_ASCM_Srv_FA_Value(false);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_ASCM_Srv' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_ASCM_SysFail(VAR(boolean, AUTOMATIC)
    LePLTR_b_ASCM_SysFail)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_ASCM_SysFail' */
    /* Outport: '<Root>/VePLTR_b_ASCM_SysFail' incorporates:
     *  SignalConversion generated from: '<S100>/VePLTR_b_ASCM_SysFail'
     *  SignalConversion generated from: '<S100>/LePLTR_b_ASCM_SysFail'
     */
    /* Gateway: PokePLTR_b_ASCM_SysFail/PokePLTR_b_ASCM_SysFailChrt */
    /* During: PokePLTR_b_ASCM_SysFail/PokePLTR_b_ASCM_SysFailChrt */
    /* Entry Internal: PokePLTR_b_ASCM_SysFail/PokePLTR_b_ASCM_SysFailChrt */
    /* Transition: '<S633>:2' */
    (void)Rte_Write_VePLTR_b_ASCM_SysFail_Value(LePLTR_b_ASCM_SysFail);

    /* Outport: '<Root>/VePLTR_b_ASCM_SysFail_FA' incorporates:
     *  Chart: '<S100>/PokePLTR_b_ASCM_SysFailChrt'
     *  SignalConversion generated from: '<S100>/VePLTR_b_ASCM_SysFail_FA'
     */
    (void)Rte_Write_VePLTR_b_ASCM_SysFail_FA_Value(false);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_ASCM_SysFail' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_ASCM_SysSys(VAR(boolean, AUTOMATIC)
    LePLTR_b_ADS_SrvSys)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_ASCM_SysSys' */
    /* Outport: '<Root>/VePLTR_b_ADS_SrvSys' incorporates:
     *  SignalConversion generated from: '<S101>/VePLTR_b_ADS_SrvSys'
     *  SignalConversion generated from: '<S101>/LePLTR_b_ADS_SrvSys'
     */
    /* Gateway: PokePLTR_b_ASCM_SysSys/PokePLTR_b_ASCM_SysSysChrt */
    /* During: PokePLTR_b_ASCM_SysSys/PokePLTR_b_ASCM_SysSysChrt */
    /* Entry Internal: PokePLTR_b_ASCM_SysSys/PokePLTR_b_ASCM_SysSysChrt */
    /* Transition: '<S634>:2' */
    (void)Rte_Write_VePLTR_b_ADS_SrvSys_Value(LePLTR_b_ADS_SrvSys);

    /* Outport: '<Root>/VePLTR_b_ADS_SrvSys_FA' incorporates:
     *  Chart: '<S101>/PokePLTR_b_ASCM_SysSysChrt'
     *  SignalConversion generated from: '<S101>/VePLTR_b_ADS_SrvSys_FA_out'
     */
    (void)Rte_Write_VePLTR_b_ADS_SrvSys_FA_Value(false);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_ASCM_SysSys' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_CC_Type(VAR(boolean, AUTOMATIC)
    LePLTR_b_CC_Type)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_CC_Type' */
    /* Outport: '<Root>/VePLTR_b_CC_Type' incorporates:
     *  SignalConversion generated from: '<S102>/VePLTR_b_CC_Type'
     *  SignalConversion generated from: '<S102>/LePLTR_b_CC_Type'
     */
    /* Gateway: PokePLTR_b_CC_Type/PokePLTR_b_CC_TypeChrt */
    /* During: PokePLTR_b_CC_Type/PokePLTR_b_CC_TypeChrt */
    /* Entry Internal: PokePLTR_b_CC_Type/PokePLTR_b_CC_TypeChrt */
    /* Transition: '<S635>:2' */
    (void)Rte_Write_VePLTR_b_CC_Type_Value(LePLTR_b_CC_Type);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_CC_Type' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_ChargeReq(VAR(boolean, AUTOMATIC)
    LePLTR_b_ChargeReq, VAR(boolean, AUTOMATIC) LePLTR_b_ChargeReqFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_ChargeReq' */
    /* Chart: '<S103>/PokePLTR_b_ChargeReqChrt' incorporates:
     *  SignalConversion generated from: '<S103>/LePLTR_b_ChargeReqFA'
     *  SignalConversion generated from: '<S103>/LePLTR_b_ChargeReq'
     */
    /* Gateway: PokePLTR_b_ChargeReq/PokePLTR_b_ChargeReqChrt */
    /* During: PokePLTR_b_ChargeReq/PokePLTR_b_ChargeReqChrt */
    /* Entry Internal: PokePLTR_b_ChargeReq/PokePLTR_b_ChargeReqChrt */
    /* Transition: '<S636>:2' */
    if (!LePLTR_b_ChargeReqFA)
    {
        /* Transition: '<S636>:3' */
        /* Transition: '<S636>:15' */
        PLTR_ac_B.LePLTR_b_ChargeReq_out = LePLTR_b_ChargeReq;
        PLTR_ac_B.LePLTR_b_ChargeReqSgnl_Rcvd = true;

        /* Transition: '<S636>:18' */
    }
    else
    {
        /* Transition: '<S636>:4' */
    }

    /* End of Chart: '<S103>/PokePLTR_b_ChargeReqChrt' */

    /* Outport: '<Root>/VePLTR_b_ChargeReq' incorporates:
     *  SignalConversion generated from: '<S103>/VePLTR_b_ChargeReq'
     */
    (void)Rte_Write_VePLTR_b_ChargeReq_Value(PLTR_ac_B.LePLTR_b_ChargeReq_out);

    /* Outport: '<Root>/VePLTR_b_ChargeReqSgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S103>/VePLTR_b_ChargeReqSgnl_Rcvd'
     */
    (void)Rte_Write_VePLTR_b_ChargeReqSgnlRcvd_Value
        (PLTR_ac_B.LePLTR_b_ChargeReqSgnl_Rcvd);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_ChargeReq' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_CrsCntrlActv(VAR(boolean, AUTOMATIC)
    LePLTR_b_CrsCntrlActv)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_CrsCntrlActv' */
    /* Merge: '<Root>/Merge_91' incorporates:
     *  SignalConversion generated from: '<S104>/LePLTR_b_CrsCntrlActv'
     *  SignalConversion generated from: '<S104>/VePLTR_b_CrsCntrlActv_write'
     */
    /* Gateway: PokePLTR_b_CrsCntrlActv/PokePLTR_b_CrsCntrlActvChrt */
    /* During: PokePLTR_b_CrsCntrlActv/PokePLTR_b_CrsCntrlActvChrt */
    /* Entry Internal: PokePLTR_b_CrsCntrlActv/PokePLTR_b_CrsCntrlActvChrt */
    /* Transition: '<S637>:2' */
    Rte_IrvWrite_PokePLTR_b_CrsCntrlActv_VePLTR_b_CrsCntrlActv_write_IRV
        (LePLTR_b_CrsCntrlActv);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_CrsCntrlActv' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_DoorFailSts(VAR(boolean, AUTOMATIC)
    LePLTR_b_DoorFailSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_DoorFailSts' */
    /* Merge: '<Root>/Merge_74' incorporates:
     *  SignalConversion generated from: '<S105>/LePLTR_b_DoorFailSts'
     *  SignalConversion generated from: '<S105>/VePLTR_b_DoorFailSts_write'
     */
    /* Gateway: PokePLTR_b_DoorFailSts/PokePLTR_b_DoorFailStsChrt */
    /* During: PokePLTR_b_DoorFailSts/PokePLTR_b_DoorFailStsChrt */
    /* Entry Internal: PokePLTR_b_DoorFailSts/PokePLTR_b_DoorFailStsChrt */
    /* Transition: '<S638>:2' */
    Rte_IrvWrite_PokePLTR_b_DoorFailSts_VePLTR_b_DoorFailSts_Init_write_IRV
        (LePLTR_b_DoorFailSts);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_DoorFailSts' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_DriverSeatBeltSts(VAR(TePLTR_e_DRV_SEATBELT,
    AUTOMATIC) LePLTR_e_DriverSeatBeltSts, VAR(boolean, AUTOMATIC)
    LePLTR_b_DriverSeatBeltStsFA)
{
    TePLTR_e_DRV_SEATBELT rtb_LePLTR_e_DriverSeatBeltSts_out_b;
    boolean rtb_LePLTR_b_DriverSeatBeltStsFA_out_j;

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_DriverSeatBeltSts' */
    /* Chart: '<S106>/PokePLTR_b_DriverSeatBeltStsChrt' incorporates:
     *  Constant: '<S639>/Calib'
     *  SignalConversion generated from: '<S106>/LePLTR_b_DriverSeatBeltStsFA'
     *  SignalConversion generated from: '<S106>/LePLTR_e_DriverSeatBeltSts'
     */
    /* Gateway: PokePLTR_b_DriverSeatBeltSts/PokePLTR_b_DriverSeatBeltStsChrt */
    /* During: PokePLTR_b_DriverSeatBeltSts/PokePLTR_b_DriverSeatBeltStsChrt */
    /* Entry Internal: PokePLTR_b_DriverSeatBeltSts/PokePLTR_b_DriverSeatBeltStsChrt */
    /* Transition: '<S640>:2' */
    if (!LePLTR_b_DriverSeatBeltStsFA)
    {
        /* Transition: '<S640>:3' */
        /* Transition: '<S640>:15' */
        rtb_LePLTR_e_DriverSeatBeltSts_out_b = KaPLTR_e_DriverSeatBeltSts_Map
            [(LePLTR_e_DriverSeatBeltSts)];
        rtb_LePLTR_b_DriverSeatBeltStsFA_out_j = false;

        /* Transition: '<S640>:18' */
    }
    else
    {
        /* Transition: '<S640>:4' */
        rtb_LePLTR_e_DriverSeatBeltSts_out_b = CePLTR_e_DRV_SEATBELT_OK;
        rtb_LePLTR_b_DriverSeatBeltStsFA_out_j = true;
    }

    /* End of Chart: '<S106>/PokePLTR_b_DriverSeatBeltStsChrt' */

    /* Outport: '<Root>/VePLTR_b_DriverSeatBeltStsFA' incorporates:
     *  SignalConversion generated from: '<S106>/VePLTR_b_DriverSeatBeltStsFA'
     */
    (void)Rte_Write_VePLTR_b_DriverSeatBeltStsFA_Value
        (rtb_LePLTR_b_DriverSeatBeltStsFA_out_j);

    /* Outport: '<Root>/VePLTR_e_DriverSeatBeltSts' incorporates:
     *  SignalConversion generated from: '<S106>/VePLTR_e_DriverSeatBeltSts'
     */
    (void)Rte_Write_VePLTR_e_DriverSeatBeltSts_Value
        (rtb_LePLTR_e_DriverSeatBeltSts_out_b);

    /* Merge: '<Root>/Merge_17' incorporates:
     *  SignalConversion generated from: '<S106>/VePLTR_b_DriverSeatBeltStsFA_write'
     * */
    Rte_IrvWrite_PokePLTR_b_DriverSeatBeltSts_VePLTR_b_DriverSeatBeltStsFA_write_IRV
        (rtb_LePLTR_b_DriverSeatBeltStsFA_out_j);

    /* Merge: '<Root>/Merge_19' incorporates:
     *  SignalConversion generated from: '<S106>/VePLTR_e_DriverSeatBeltSts_write'
     * */
    Rte_IrvWrite_PokePLTR_b_DriverSeatBeltSts_VePLTR_e_DriverSeatBeltSts_write_IRV
        (rtb_LePLTR_e_DriverSeatBeltSts_out_b);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_DriverSeatBeltSts' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_DrvDrAjar(VAR(boolean, AUTOMATIC)
    LePLTR_b_DrvDrAjar)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_DrvDrAjar' */
    /* Outport: '<Root>/VePLTR_b_DrvDrAjar' incorporates:
     *  SignalConversion generated from: '<S107>/VePLTR_b_DrvDrAjar'
     *  SignalConversion generated from: '<S107>/LePLTR_b_DrvDrAjar'
     */
    /* Gateway: PokePLTR_b_DrvDrAjar/PokePLTR_b_DrvDrAjarChrt */
    /* During: PokePLTR_b_DrvDrAjar/PokePLTR_b_DrvDrAjarChrt */
    /* Entry Internal: PokePLTR_b_DrvDrAjar/PokePLTR_b_DrvDrAjarChrt */
    /* Transition: '<S641>:2' */
    (void)Rte_Write_VePLTR_b_DrvDrAjar_Value(LePLTR_b_DrvDrAjar);

    /* Merge: '<Root>/Merge_47_Irv' incorporates:
     *  SignalConversion generated from: '<S107>/LePLTR_b_DrvDrAjar'
     *  SignalConversion generated from: '<S107>/VePLTR_b_DrvDrAjar_write'
     */
    Rte_IrvWrite_PokePLTR_b_DrvDrAjar_VePLTR_b_DrvDrAjar_write_IRV
        (LePLTR_b_DrvDrAjar);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_DrvDrAjar' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_DrvrSeatSnsrFailSts(VAR(boolean, AUTOMATIC)
    LePLTR_b_DrvrSeatSnsrFailSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_DrvrSeatSnsrFailSts' */
    /* Merge: '<Root>/Merge_99' incorporates:
     *  SignalConversion generated from: '<S108>/LePLTR_b_DrvrSeatSnsrFailSts'
     *  SignalConversion generated from: '<S108>/VePLTR_b_DrvrSeatSnsrFailSts_write'
     */
    /* Gateway: PokePLTR_b_DrvrSeatSnsrFailSts/PokePLTR_b_DrvrSeatSnsrFailStsChrt */
    /* During: PokePLTR_b_DrvrSeatSnsrFailSts/PokePLTR_b_DrvrSeatSnsrFailStsChrt */
    /* Entry Internal: PokePLTR_b_DrvrSeatSnsrFailSts/PokePLTR_b_DrvrSeatSnsrFailStsChrt */
    /* Transition: '<S642>:2' */
    Rte_IrvWrite_PokePLTR_b_DrvrSeatSnsrFailSts_DrvrSeatSnsr_FailSts_Init_write_IRV
        (LePLTR_b_DrvrSeatSnsrFailSts);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_DrvrSeatSnsrFailSts' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_EPBFailSts(VAR(boolean, AUTOMATIC)
    LePLTR_b_EPBFailSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_EPBFailSts' */
    /* Outport: '<Root>/VePLTR_b_EPBFailSts' incorporates:
     *  SignalConversion generated from: '<S109>/VePLTR_b_EPBFailSts'
     *  SignalConversion generated from: '<S109>/LePLTR_b_EPBFailSts'
     */
    /* Gateway: PokePLTR_b_EPBFailSts/PokePLTR_b_EPBFailStsChrt */
    /* During: PokePLTR_b_EPBFailSts/PokePLTR_b_EPBFailStsChrt */
    /* Entry Internal: PokePLTR_b_EPBFailSts/PokePLTR_b_EPBFailStsChrt */
    /* Transition: '<S643>:2' */
    (void)Rte_Write_VePLTR_b_EPBFailSts_Value(LePLTR_b_EPBFailSts);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_EPBFailSts' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_ESSActvEBrake(VAR(boolean, AUTOMATIC)
    LePLTR_b_ESSActvEBrake)
{
    UNUSED_PARAMETER(LePLTR_b_ESSActvEBrake);

    /* Gateway: PokePLTR_b_ESSActvEBrake/PokePLTR_b_ESSActvEBrakeChrt */
    /* During: PokePLTR_b_ESSActvEBrake/PokePLTR_b_ESSActvEBrakeChrt */
    /* Entry Internal: PokePLTR_b_ESSActvEBrake/PokePLTR_b_ESSActvEBrakeChrt */
    /* Transition: '<S644>:2' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_ESSRqShftPark(VAR(boolean, AUTOMATIC)
    LePLTR_b_ESSRqShftPark)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_ESSRqShftPark' */
    /* Outport: '<Root>/VePLTR_b_ESSRqShftPark' incorporates:
     *  SignalConversion generated from: '<S111>/VePLTR_b_ESSRqShftPark'
     *  SignalConversion generated from: '<S111>/LePLTR_b_ESSRqShftPark'
     */
    /* Gateway: PokePLTR_b_ESSRqShftPark/PokePLTR_b_ESSRqShftParkChrt */
    /* During: PokePLTR_b_ESSRqShftPark/PokePLTR_b_ESSRqShftParkChrt */
    /* Entry Internal: PokePLTR_b_ESSRqShftPark/PokePLTR_b_ESSRqShftParkChrt */
    /* Transition: '<S645>:2' */
    (void)Rte_Write_VePLTR_b_ESSRqShftPark_Value(LePLTR_b_ESSRqShftPark);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_ESSRqShftPark' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_FuelLevelLowClster(VAR(boolean, AUTOMATIC)
    LePLTR_b_FuelLevelLowClster)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_FuelLevelLowClster' */
    /* Merge: '<Root>/Merge_141' incorporates:
     *  SignalConversion generated from: '<S112>/LePLTR_b_FuelLevelLowClster'
     *  SignalConversion generated from: '<S112>/VePLTR_b_FuelLevelLowClster_write'
     */
    /* Gateway: PokePLTR_b_FuelLevelLowClster/PokePLTR_b_FuelLevelLowClsterChrt */
    /* During: PokePLTR_b_FuelLevelLowClster/PokePLTR_b_FuelLevelLowClsterChrt */
    /* Entry Internal: PokePLTR_b_FuelLevelLowClster/PokePLTR_b_FuelLevelLowClsterChrt */
    /* Transition: '<S646>:2' */
    Rte_IrvWrite_PokePLTR_b_FuelLevelLowClster_FuelLevelLowClster_Init_write_IRV
        (LePLTR_b_FuelLevelLowClster);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_FuelLevelLowClster' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_HDCEnabledCAN(VAR(boolean, AUTOMATIC)
    LePLTR_b_HDCEnabledCAN)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_HDCEnabledCAN' */
    /* Outport: '<Root>/VePLTR_b_HDCEnabledCAN' incorporates:
     *  Chart: '<S113>/PokePLTR_b_HDCEnabledCANChrt'
     *  SignalConversion generated from: '<S113>/VePLTR_b_HDCEnabledCAN'
     *  SignalConversion generated from: '<S113>/LePLTR_b_HDCEnabledCAN'
     */
    /* Gateway: PokePLTR_b_HDCEnabledCAN/PokePLTR_b_HDCEnabledCANChrt */
    /* During: PokePLTR_b_HDCEnabledCAN/PokePLTR_b_HDCEnabledCANChrt */
    /* Entry Internal: PokePLTR_b_HDCEnabledCAN/PokePLTR_b_HDCEnabledCANChrt */
    /* Transition: '<S647>:2' */
    (void)Rte_Write_VePLTR_b_HDCEnabledCAN_Value(!LePLTR_b_HDCEnabledCAN);

    /* Outport: '<Root>/VePLTR_b_HDCEnabledCAN_FA' incorporates:
     *  Chart: '<S113>/PokePLTR_b_HDCEnabledCANChrt'
     *  SignalConversion generated from: '<S113>/VePLTR_b_HDCEnabledCAN_FA'
     */
    (void)Rte_Write_VePLTR_b_HDCEnabledCAN_FA_Value(false);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_HDCEnabledCAN' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_HotEnablerReq(VAR(boolean, AUTOMATIC)
    LePLTR_b_HotEnablerReq)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_HotEnablerReq' */
    /* Outport: '<Root>/VePLTR_b_HotEnablerReq' incorporates:
     *  SignalConversion generated from: '<S114>/VePLTR_b_HotEnablerReq'
     *  SignalConversion generated from: '<S114>/LePLTR_b_HotEnablerReq'
     */
    /* Gateway: PokePLTR_b_HotEnablerReq/PokePLTR_b_HotEnablerReqChrt */
    /* During: PokePLTR_b_HotEnablerReq/PokePLTR_b_HotEnablerReqChrt */
    /* Entry Internal: PokePLTR_b_HotEnablerReq/PokePLTR_b_HotEnablerReqChrt */
    /* Transition: '<S648>:2' */
    (void)Rte_Write_VePLTR_b_HotEnablerReq_Value(LePLTR_b_HotEnablerReq);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_HotEnablerReq' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_ImmoParkReq(VAR(boolean, AUTOMATIC)
    LePLTR_b_ImmoParkReq)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_ImmoParkReq' */
    /* Outport: '<Root>/VePLTR_b_ImmoParkReq' incorporates:
     *  SignalConversion generated from: '<S115>/VePLTR_b_ImmoParkReq'
     *  SignalConversion generated from: '<S115>/LePLTR_b_ImmoParkReq'
     */
    /* Gateway: PokePLTR_b_ImmoParkReq/PokePLTR_b_ImmoParkReqChrt */
    /* During: PokePLTR_b_ImmoParkReq/PokePLTR_b_ImmoParkReqChrt */
    /* Entry Internal: PokePLTR_b_ImmoParkReq/PokePLTR_b_ImmoParkReqChrt */
    /* Transition: '<S649>:2' */
    (void)Rte_Write_VePLTR_b_ImmoParkReq_Value(LePLTR_b_ImmoParkReq);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_ImmoParkReq' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_InPlantAllowCharge(VAR(boolean, AUTOMATIC)
    LePLTR_b_InPlantAllowCharge)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_InPlantAllowCharge' */
    /* Outport: '<Root>/VePLTR_b_InPlantAllowCharge' incorporates:
     *  SignalConversion generated from: '<S116>/VePLTR_b_InPlantAllowCharge'
     *  SignalConversion generated from: '<S116>/LePLTR_b_InPlantAllowCharge'
     */
    /* Gateway: PokePLTR_b_InPlantAllowCharge/PokePLTR_b_InPlantAllowChargeChrt */
    /* During: PokePLTR_b_InPlantAllowCharge/PokePLTR_b_InPlantAllowChargeChrt */
    /* Entry Internal: PokePLTR_b_InPlantAllowCharge/PokePLTR_b_InPlantAllowChargeChrt */
    /* Transition: '<S650>:2' */
    (void)Rte_Write_VePLTR_b_InPlantAllowCharge_Value
        (LePLTR_b_InPlantAllowCharge);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_InPlantAllowCharge' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_InternalLightSts(VAR(boolean, AUTOMATIC)
    LePLTR_b_InternalLightSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_InternalLightSts' */
    /* Outport: '<Root>/VePLTR_b_InternalLightSts' incorporates:
     *  SignalConversion generated from: '<S117>/VePLTR_b_InternalLightSts'
     *  SignalConversion generated from: '<S117>/LePLTR_b_InternalLightSts'
     */
    /* Gateway: PokePLTR_b_InternalLightSts/PokePLTR_b_InternalLightStsChrt */
    /* During: PokePLTR_b_InternalLightSts/PokePLTR_b_InternalLightStsChrt */
    /* Entry Internal: PokePLTR_b_InternalLightSts/PokePLTR_b_InternalLightStsChrt */
    /* Transition: '<S651>:2' */
    (void)Rte_Write_VePLTR_b_InternalLightSts_Value(LePLTR_b_InternalLightSts);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_InternalLightSts' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_LHRDoorSts(VAR(boolean, AUTOMATIC)
    LePLTR_b_LHRDoorSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_LHRDoorSts' */
    /* Outport: '<Root>/VePLTR_b_LHRDoorSts' incorporates:
     *  SignalConversion generated from: '<S118>/VePLTR_b_LHRDoorSts'
     *  SignalConversion generated from: '<S118>/LePLTR_b_LHRDoorSts'
     */
    /* Gateway: PokePLTR_b_LHRDoorSts/PokePLTR_b_LHRDoorStsChrt */
    /* During: PokePLTR_b_LHRDoorSts/PokePLTR_b_LHRDoorStsChrt */
    /* Entry Internal: PokePLTR_b_LHRDoorSts/PokePLTR_b_LHRDoorStsChrt */
    /* Transition: '<S652>:2' */
    (void)Rte_Write_VePLTR_b_LHRDoorSts_Value(LePLTR_b_LHRDoorSts);

    /* Outport: '<Root>/VePLTR_b_LHRDoorSts_FA' incorporates:
     *  Chart: '<S118>/PokePLTR_b_LHRDoorStsChrt'
     *  SignalConversion generated from: '<S118>/VePLTR_b_LHRDoorSts_FA_out'
     */
    (void)Rte_Write_VePLTR_b_LHRDoorSts_FA_Value(false);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_LHRDoorSts' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_LatAccelFailSts_ORC(VAR(boolean, AUTOMATIC)
    LePLTR_b_LatAccelFailSts_ORC)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_LatAccelFailSts_ORC' */
    /* Outport: '<Root>/VePLTR_b_LatAccelFailSts_ORC' incorporates:
     *  SignalConversion generated from: '<S119>/VePLTR_b_LatAccelFailSts_ORC'
     *  SignalConversion generated from: '<S119>/LePLTR_b_LatAccelFailSts_ORC'
     */
    /* Gateway: PokePLTR_b_LatAccelFailSts_ORC/PokePLTR_b_LatAccelFailSts_ORCChrt */
    /* During: PokePLTR_b_LatAccelFailSts_ORC/PokePLTR_b_LatAccelFailSts_ORCChrt */
    /* Entry Internal: PokePLTR_b_LatAccelFailSts_ORC/PokePLTR_b_LatAccelFailSts_ORCChrt */
    /* Transition: '<S653>:2' */
    (void)Rte_Write_VePLTR_b_LatAccelFailSts_ORC_Value
        (LePLTR_b_LatAccelFailSts_ORC);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_LatAccelFailSts_ORC' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_LongAccelFailSts_ORC(VAR(boolean, AUTOMATIC)
    LePLTR_b_LongAccelFailSts_ORC)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_LongAccelFailSts_ORC' */
    /* Outport: '<Root>/VePLTR_b_LongAccelFailSts_ORC' incorporates:
     *  SignalConversion generated from: '<S120>/VePLTR_b_LongAccelFailSts_ORC'
     *  SignalConversion generated from: '<S120>/LePLTR_b_LongAccelFailSts_ORC'
     */
    /* Gateway: PokePLTR_b_LongAccelFailSts_ORC/PokePLTR_b_LongAccelFailSts_ORCChrt */
    /* During: PokePLTR_b_LongAccelFailSts_ORC/PokePLTR_b_LongAccelFailSts_ORCChrt */
    /* Entry Internal: PokePLTR_b_LongAccelFailSts_ORC/PokePLTR_b_LongAccelFailSts_ORCChrt */
    /* Transition: '<S654>:2' */
    (void)Rte_Write_VePLTR_b_LongAccelFailSts_ORC_Value
        (LePLTR_b_LongAccelFailSts_ORC);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_LongAccelFailSts_ORC' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_MILOnRq_ESC(VAR(boolean, AUTOMATIC)
    LePLTR_b_MILOnRq_ESC)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_MILOnRq_ESC' */
    /* Outport: '<Root>/VePLTR_b_MILOnRq_ESC' incorporates:
     *  SignalConversion generated from: '<S121>/VePLTR_b_MILOnRq_ESC'
     *  SignalConversion generated from: '<S121>/LePLTR_b_MILOnRq_ESC'
     */
    /* Gateway: PokePLTR_b_MILOnRq_ESC/PokePLTR_b_MILOnRq_ESCChrt */
    /* During: PokePLTR_b_MILOnRq_ESC/PokePLTR_b_MILOnRq_ESCChrt */
    /* Entry Internal: PokePLTR_b_MILOnRq_ESC/PokePLTR_b_MILOnRq_ESCChrt */
    /* Transition: '<S655>:2' */
    (void)Rte_Write_VePLTR_b_MILOnRq_ESC_Value(LePLTR_b_MILOnRq_ESC);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_MILOnRq_ESC' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_ParkBrakeSts(VAR(boolean, AUTOMATIC)
    LePLTR_b_ParkBrakeSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_ParkBrakeSts' */
    /* Outport: '<Root>/VePLTR_b_ParkBrakeSts' incorporates:
     *  SignalConversion generated from: '<S122>/VePLTR_b_ParkBrakeSts'
     *  SignalConversion generated from: '<S122>/LePLTR_b_ParkBrakeSts'
     */
    /* Gateway: PokePLTR_b_ParkBrakeSts/PokePLTR_b_ParkBrakeStsChrt */
    /* During: PokePLTR_b_ParkBrakeSts/PokePLTR_b_ParkBrakeStsChrt */
    /* Entry Internal: PokePLTR_b_ParkBrakeSts/PokePLTR_b_ParkBrakeStsChrt */
    /* Transition: '<S656>:2' */
    (void)Rte_Write_VePLTR_b_ParkBrakeSts_Value(LePLTR_b_ParkBrakeSts);

    /* Outport: '<Root>/VePLTR_b_ParkBrakeSts_FA' incorporates:
     *  Chart: '<S122>/PokePLTR_b_ParkBrakeStsChrt'
     *  SignalConversion generated from: '<S122>/VePLTR_b_ParkBrakeSts_FA_out'
     */
    (void)Rte_Write_VePLTR_b_ParkBrakeSts_FA_Value(false);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_ParkBrakeSts' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_Prmry_ManualMode(VAR(boolean, AUTOMATIC)
    LePLTR_b_Prmry_ManualMode, VAR(boolean, AUTOMATIC)
    LePLTR_b_Prmry_ManualModeFA)
{
    boolean rtb_LePLTR_b_Prmry_ManualModeFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_Prmry_ManualMode' */
    /* Chart: '<S123>/PokePLTR_b_Prmry_ManualModeChrt' incorporates:
     *  SignalConversion generated from: '<S123>/LePLTR_b_Prmry_ManualModeFA'
     */
    /* Gateway: PokePLTR_b_Prmry_ManualMode/PokePLTR_b_Prmry_ManualModeChrt */
    /* During: PokePLTR_b_Prmry_ManualMode/PokePLTR_b_Prmry_ManualModeChrt */
    /* Entry Internal: PokePLTR_b_Prmry_ManualMode/PokePLTR_b_Prmry_ManualModeChrt */
    /* Transition: '<S658>:2' */
    if (!LePLTR_b_Prmry_ManualModeFA)
    {
        /* SignalConversion generated from: '<S123>/VePLTR_b_Prmry_ManualMode_write' incorporates:
         *  Constant: '<S657>/Calib'
         *  Merge: '<Root>/Merge_131'
         *  SignalConversion generated from: '<S123>/LePLTR_b_Prmry_ManualMode'
         */
        /* Transition: '<S658>:3' */
        /* Transition: '<S658>:15' */
        Rte_IrvWrite_PokePLTR_b_Prmry_ManualMode_ManualMode_Init_write_IRV
            (KaPLTR_b_Prmry_ManualMode_Map[(sint32)(LePLTR_b_Prmry_ManualMode ?
              1 : 0)]);
        rtb_LePLTR_b_Prmry_ManualModeFA_out = false;

        /* Transition: '<S658>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S123>/VePLTR_b_Prmry_ManualMode_write' incorporates:
         *  Merge: '<Root>/Merge_131'
         */
        /* Transition: '<S658>:4' */
        Rte_IrvWrite_PokePLTR_b_Prmry_ManualMode_ManualMode_Init_write_IRV
            (KePLTR_b_Dflt_ManMd);
        rtb_LePLTR_b_Prmry_ManualModeFA_out = true;
    }

    /* End of Chart: '<S123>/PokePLTR_b_Prmry_ManualModeChrt' */

    /* Merge: '<Root>/Merge_134' incorporates:
     *  SignalConversion generated from: '<S123>/VePLTR_b_Prmry_ManualModeFA_write'
     * */
    Rte_IrvWrite_PokePLTR_b_Prmry_ManualMode_VePLTR_b_Prmry_ManualModeFA_write_IRV
        (rtb_LePLTR_b_Prmry_ManualModeFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_Prmry_ManualMode' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_Prmry_PRNDFailSts(VAR(boolean, AUTOMATIC)
    LePLTR_b_Prmry_PRNDFailSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_Prmry_PRNDFailSts' */
    /* Merge: '<Root>/Merge_119' incorporates:
     *  SignalConversion generated from: '<S124>/LePLTR_b_Prmry_PRNDFailSts'
     *  SignalConversion generated from: '<S124>/VePLTR_b_Prmry_PRNDFailSts_write'
     */
    /* Gateway: PokePLTR_b_Prmry_PRNDFailSts/PokePLTR_b_Prmry_PRNDFailStsChrt */
    /* During: PokePLTR_b_Prmry_PRNDFailSts/PokePLTR_b_Prmry_PRNDFailStsChrt */
    /* Entry Internal: PokePLTR_b_Prmry_PRNDFailSts/PokePLTR_b_Prmry_PRNDFailStsChrt */
    /* Transition: '<S659>:2' */
    Rte_IrvWrite_PokePLTR_b_Prmry_PRNDFailSts_VePLTR_b_Prmry_PRNDFailStsFA_write_IRV
        (LePLTR_b_Prmry_PRNDFailSts);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_Prmry_PRNDFailSts' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_Prmry_RFHub_ForcePark(VAR(boolean, AUTOMATIC)
    LePLTR_b_Prmry_RFHub_ForcePark)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_Prmry_RFHub_ForcePark' */
    /* Merge: '<Root>/Merge_115' incorporates:
     *  Chart: '<S125>/PokePLTR_b_Prmry_RFHub_ForceParkChrt'
     *  SignalConversion generated from: '<S125>/VePLTR_b_Prmry_RFHub_ForceParkFA_write'
     */
    /* Gateway: PokePLTR_b_Prmry_RFHub_ForcePark/PokePLTR_b_Prmry_RFHub_ForceParkChrt */
    /* During: PokePLTR_b_Prmry_RFHub_ForcePark/PokePLTR_b_Prmry_RFHub_ForceParkChrt */
    /* Entry Internal: PokePLTR_b_Prmry_RFHub_ForcePark/PokePLTR_b_Prmry_RFHub_ForceParkChrt */
    /* Transition: '<S660>:2' */
    Rte_IrvWrite_PokePLTR_b_Prmry_RFHub_ForcePark_VePLTR_b_Prmry_ForceParkFA_write_IRV
        (KePLTR_b_Prmry_RFHub_ForcePark_Dflt);

    /* Merge: '<Root>/Merge_114' incorporates:
     *  SignalConversion generated from: '<S125>/LePLTR_b_Prmry_RFHub_ForcePark'
     *  SignalConversion generated from: '<S125>/VePLTR_b_Prmry_RFHub_ForcePark_write'
     */
    Rte_IrvWrite_PokePLTR_b_Prmry_RFHub_ForcePark_RFHub_ForcePark_Init_write_IRV
        (LePLTR_b_Prmry_RFHub_ForcePark);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_Prmry_RFHub_ForcePark' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_Prmry_RackDetentSensorFA(VAR(boolean, AUTOMATIC)
    LePLTR_b_Prmry_RackDetentSensorFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_Prmry_RackDetentSensorFA' */
    /* Merge: '<Root>/Merge_123' incorporates:
     *  SignalConversion generated from: '<S126>/LePLTR_b_Prmry_RackDetentSensorFA'
     *  SignalConversion generated from: '<S126>/VePLTR_b_Prmry_RackDetentSensorFA_write'
     */
    /* Gateway: PokePLTR_b_Prmry_RackDetentSensorFA/PokePLTR_b_Prmry_RackDetentSensorFAChrt */
    /* During: PokePLTR_b_Prmry_RackDetentSensorFA/PokePLTR_b_Prmry_RackDetentSensorFAChrt */
    /* Entry Internal: PokePLTR_b_Prmry_RackDetentSensorFA/PokePLTR_b_Prmry_RackDetentSensorFAChrt */
    /* Transition: '<S661>:2' */
    Rte_IrvWrite_PokePLTR_b_Prmry_RackDetentSensorFA_VePLTR_b_Prmry_RackDetentSensorFAFA_write_IRV
        (LePLTR_b_Prmry_RackDetentSensorFA);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_Prmry_RackDetentSensorFA' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_Prmry_ShiftLeverFailSts(VAR(boolean, AUTOMATIC)
    LePLTR_b_Prmry_ShiftLeverFailSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_Prmry_ShiftLeverFailSts' */
    /* Merge: '<Root>/Merge_124' incorporates:
     *  SignalConversion generated from: '<S127>/LePLTR_b_Prmry_ShiftLeverFailSts'
     *  SignalConversion generated from: '<S127>/VePLTR_b_Prmry_ShiftLeverFailSts_write'
     */
    /* Gateway: PokePLTR_b_Prmry_ShiftLeverFailSts/PokePLTR_b_Prmry_ShiftLeverFailStsChrt */
    /* During: PokePLTR_b_Prmry_ShiftLeverFailSts/PokePLTR_b_Prmry_ShiftLeverFailStsChrt */
    /* Entry Internal: PokePLTR_b_Prmry_ShiftLeverFailSts/PokePLTR_b_Prmry_ShiftLeverFailStsChrt */
    /* Transition: '<S662>:2' */
    Rte_IrvWrite_PokePLTR_b_Prmry_ShiftLeverFailSts_VePLTR_b_Prmry_ShiftLeverFailStsFA_write_IRV
        (LePLTR_b_Prmry_ShiftLeverFailSts);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_Prmry_ShiftLeverFailSts' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_Prmry_ShiftLockFA(VAR(boolean, AUTOMATIC)
    LePLTR_b_Prmry_ShiftLockFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_Prmry_ShiftLockFA' */
    /* Merge: '<Root>/Merge_121' incorporates:
     *  SignalConversion generated from: '<S128>/LePLTR_b_Prmry_ShiftLockFA'
     *  SignalConversion generated from: '<S128>/VePLTR_b_Prmry_ShiftLockFA_write'
     */
    /* Gateway: PokePLTR_b_Prmry_ShiftLockFA/PokePLTR_b_Prmry_ShiftLockFAChrt */
    /* During: PokePLTR_b_Prmry_ShiftLockFA/PokePLTR_b_Prmry_ShiftLockFAChrt */
    /* Entry Internal: PokePLTR_b_Prmry_ShiftLockFA/PokePLTR_b_Prmry_ShiftLockFAChrt */
    /* Transition: '<S663>:2' */
    Rte_IrvWrite_PokePLTR_b_Prmry_ShiftLockFA_VePLTR_b_Prmry_ShiftLockFAFA_write_IRV
        (LePLTR_b_Prmry_ShiftLockFA);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_Prmry_ShiftLockFA' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_Prmry_ShiftSnsFA(VAR(boolean, AUTOMATIC)
    LePLTR_b_Prmry_ShiftSnsFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_Prmry_ShiftSnsFA' */
    /* Merge: '<Root>/Merge_122' incorporates:
     *  SignalConversion generated from: '<S129>/LePLTR_b_Prmry_ShiftSnsFA'
     *  SignalConversion generated from: '<S129>/VePLTR_b_Prmry_ShiftSnsFA_write'
     */
    /* Gateway: PokePLTR_b_Prmry_ShiftSnsFA/PokePLTR_b_Prmry_ShiftSnsFAChrt */
    /* During: PokePLTR_b_Prmry_ShiftSnsFA/PokePLTR_b_Prmry_ShiftSnsFAChrt */
    /* Entry Internal: PokePLTR_b_Prmry_ShiftSnsFA/PokePLTR_b_Prmry_ShiftSnsFAChrt */
    /* Transition: '<S664>:2' */
    Rte_IrvWrite_PokePLTR_b_Prmry_ShiftSnsFA_VePLTR_b_Prmry_ShiftSnsFAFA_write_IRV
        (LePLTR_b_Prmry_ShiftSnsFA);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_Prmry_ShiftSnsFA' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_Prmry_ShifterDispFA(VAR(boolean, AUTOMATIC)
    LePLTR_b_Prmry_ShifterDispFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_Prmry_ShifterDispFA' */
    /* Merge: '<Root>/Merge_120' incorporates:
     *  SignalConversion generated from: '<S130>/LePLTR_b_Prmry_ShifterDispFA'
     *  SignalConversion generated from: '<S130>/VePLTR_b_Prmry_ShifterDispFA_write'
     */
    /* Gateway: PokePLTR_b_Prmry_ShifterDispFA/PokePLTR_b_Prmry_ShifterDispFAChrt */
    /* During: PokePLTR_b_Prmry_ShifterDispFA/PokePLTR_b_Prmry_ShifterDispFAChrt */
    /* Entry Internal: PokePLTR_b_Prmry_ShifterDispFA/PokePLTR_b_Prmry_ShifterDispFAChrt */
    /* Transition: '<S665>:2' */
    Rte_IrvWrite_PokePLTR_b_Prmry_ShifterDispFA_VePLTR_b_Prmry_ShifterDispFAFA_write_IRV
        (LePLTR_b_Prmry_ShifterDispFA);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_Prmry_ShifterDispFA' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_PsngrDoorSts(VAR(boolean, AUTOMATIC)
    LePLTR_b_PsngrDoorSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_PsngrDoorSts' */
    /* Outport: '<Root>/VePLTR_b_PsngrDoorSts' incorporates:
     *  SignalConversion generated from: '<S131>/VePLTR_b_PsngrDoorSts'
     *  SignalConversion generated from: '<S131>/LePLTR_b_PsngrDoorSts'
     */
    /* Gateway: PokePLTR_b_PsngrDoorSts/PokePLTR_b_PsngrDoorStsChrt */
    /* During: PokePLTR_b_PsngrDoorSts/PokePLTR_b_PsngrDoorStsChrt */
    /* Entry Internal: PokePLTR_b_PsngrDoorSts/PokePLTR_b_PsngrDoorStsChrt */
    /* Transition: '<S666>:2' */
    (void)Rte_Write_VePLTR_b_PsngrDoorSts_Value(LePLTR_b_PsngrDoorSts);

    /* Outport: '<Root>/VePLTR_b_PsngrDoorSts_FA' incorporates:
     *  Chart: '<S131>/PokePLTR_b_PsngrDoorStsChrt'
     *  SignalConversion generated from: '<S131>/VePLTR_b_PsngrDoorSts_FA_out'
     */
    (void)Rte_Write_VePLTR_b_PsngrDoorSts_FA_Value(false);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_PsngrDoorSts' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_RHRDoorSts(VAR(boolean, AUTOMATIC)
    LePLTR_b_RHRDoorSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_RHRDoorSts' */
    /* Outport: '<Root>/VePLTR_b_RHRDoorSts' incorporates:
     *  SignalConversion generated from: '<S132>/VePLTR_b_RHRDoorSts'
     *  SignalConversion generated from: '<S132>/LePLTR_b_RHRDoorSts'
     */
    /* Gateway: PokePLTR_b_RHRDoorSts/PokePLTR_b_RHRDoorStsChrt */
    /* During: PokePLTR_b_RHRDoorSts/PokePLTR_b_RHRDoorStsChrt */
    /* Entry Internal: PokePLTR_b_RHRDoorSts/PokePLTR_b_RHRDoorStsChrt */
    /* Transition: '<S667>:2' */
    (void)Rte_Write_VePLTR_b_RHRDoorSts_Value(LePLTR_b_RHRDoorSts);

    /* Outport: '<Root>/VePLTR_b_RHRDoorSts_FA' incorporates:
     *  Chart: '<S132>/PokePLTR_b_RHRDoorStsChrt'
     *  SignalConversion generated from: '<S132>/VePLTR_b_RHRDoorSts_FA_out'
     */
    (void)Rte_Write_VePLTR_b_RHRDoorSts_FA_Value(false);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_RHRDoorSts' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_RHatchSts(VAR(boolean, AUTOMATIC)
    LePLTR_b_RHatchSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_RHatchSts' */
    /* Outport: '<Root>/VePLTR_b_RHatchSts' incorporates:
     *  SignalConversion generated from: '<S133>/VePLTR_b_RHatchSts'
     *  SignalConversion generated from: '<S133>/LePLTR_b_RHatchSts'
     */
    /* Gateway: PokePLTR_b_RHatchSts/PokePLTR_b_RHatchStsChrt */
    /* During: PokePLTR_b_RHatchSts/PokePLTR_b_RHatchStsChrt */
    /* Entry Internal: PokePLTR_b_RHatchSts/PokePLTR_b_RHatchStsChrt */
    /* Transition: '<S668>:2' */
    (void)Rte_Write_VePLTR_b_RHatchSts_Value(LePLTR_b_RHatchSts);

    /* Outport: '<Root>/VePLTR_b_RHatchSts_FA' incorporates:
     *  Chart: '<S133>/PokePLTR_b_RHatchStsChrt'
     *  SignalConversion generated from: '<S133>/VePLTR_b_RHatchSts_FA_out'
     */
    (void)Rte_Write_VePLTR_b_RHatchSts_FA_Value(false);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_RHatchSts' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_RearFogLightSts(VAR(boolean, AUTOMATIC)
    LePLTR_b_RearFogLightSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_RearFogLightSts' */
    /* Outport: '<Root>/VePLTR_b_RearFogLightSts' incorporates:
     *  SignalConversion generated from: '<S134>/VePLTR_b_RearFogLightSts'
     *  SignalConversion generated from: '<S134>/LePLTR_b_RearFogLightSts'
     */
    /* Gateway: PokePLTR_b_RearFogLightSts/PokePLTR_b_RearFogLightStsChrt */
    /* During: PokePLTR_b_RearFogLightSts/PokePLTR_b_RearFogLightStsChrt */
    /* Entry Internal: PokePLTR_b_RearFogLightSts/PokePLTR_b_RearFogLightStsChrt */
    /* Transition: '<S669>:2' */
    (void)Rte_Write_VePLTR_b_RearFogLightSts_Value(LePLTR_b_RearFogLightSts);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_RearFogLightSts' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_RmtVehStartReq(VAR(boolean, AUTOMATIC)
    LePLTR_b_RmtVehStartReq)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_RmtVehStartReq' */
    /* Outport: '<Root>/VePLTR_b_RmtVehStartReq' incorporates:
     *  SignalConversion generated from: '<S135>/VePLTR_b_RmtVehStartReq'
     *  SignalConversion generated from: '<S135>/LePLTR_b_RmtVehStartReq'
     */
    /* Gateway: PokePLTR_b_RmtVehStartReq/PokePLTR_b_RmtVehStartReqChrt */
    /* During: PokePLTR_b_RmtVehStartReq/PokePLTR_b_RmtVehStartReqChrt */
    /* Entry Internal: PokePLTR_b_RmtVehStartReq/PokePLTR_b_RmtVehStartReqChrt */
    /* Transition: '<S670>:2' */
    (void)Rte_Write_VePLTR_b_RmtVehStartReq_Value(LePLTR_b_RmtVehStartReq);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_RmtVehStartReq' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_Scndry_PRNDFailSts(VAR(boolean, AUTOMATIC)
    LePLTR_b_Scndry_PRNDFailSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_Scndry_PRNDFailSts' */
    /* Merge: '<Root>/Merge_112' incorporates:
     *  SignalConversion generated from: '<S136>/LePLTR_b_Scndry_PRNDFailSts'
     *  SignalConversion generated from: '<S136>/VePLTR_b_Scndry_PRNDFailSts_write'
     */
    /* Gateway: PokePLTR_b_Scndry_PRNDFailSts/PokePLTR_b_Scndry_PRNDFailStsChrt */
    /* During: PokePLTR_b_Scndry_PRNDFailSts/PokePLTR_b_Scndry_PRNDFailStsChrt */
    /* Entry Internal: PokePLTR_b_Scndry_PRNDFailSts/PokePLTR_b_Scndry_PRNDFailStsChrt */
    /* Transition: '<S671>:2' */
    Rte_IrvWrite_PokePLTR_b_Scndry_PRNDFailSts_VePLTR_b_Scndry_PRNDFailStsFA_write_IRV
        (LePLTR_b_Scndry_PRNDFailSts);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_Scndry_PRNDFailSts' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_Scndry_RFHub_ForcePark(VAR(boolean, AUTOMATIC)
    LePLTR_b_Scndry_RFHub_ForcePark)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_Scndry_RFHub_ForcePark' */
    /* Merge: '<Root>/Merge_104' incorporates:
     *  Chart: '<S137>/PokePLTR_b_Scndry_RFHub_ForceParkChrt'
     *  SignalConversion generated from: '<S137>/VePLTR_b_Scndry_RFHub_ForceParkFA_write'
     */
    /* Gateway: PokePLTR_b_Scndry_RFHub_ForcePark/PokePLTR_b_Scndry_RFHub_ForceParkChrt */
    /* During: PokePLTR_b_Scndry_RFHub_ForcePark/PokePLTR_b_Scndry_RFHub_ForceParkChrt */
    /* Entry Internal: PokePLTR_b_Scndry_RFHub_ForcePark/PokePLTR_b_Scndry_RFHub_ForceParkChrt */
    /* Transition: '<S672>:2' */
    Rte_IrvWrite_PokePLTR_b_Scndry_RFHub_ForcePark_VePLTR_b_Scndry_ForceParkFA_write_IRV
        (KePLTR_b_Scndry_RFHub_ForcePark_Dflt);

    /* Merge: '<Root>/Merge_103' incorporates:
     *  SignalConversion generated from: '<S137>/LePLTR_b_Scndry_RFHub_ForcePark'
     *  SignalConversion generated from: '<S137>/VePLTR_b_Scndry_RFHub_ForcePark_write'
     */
    Rte_IrvWrite_PokePLTR_b_Scndry_RFHub_ForcePark_RFHUB_ForcePark_Init_PwrOn_1_IRV_IRV
        (LePLTR_b_Scndry_RFHub_ForcePark);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_Scndry_RFHub_ForcePark' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_Scndry_RackDetentSensorFA(VAR(boolean,
    AUTOMATIC) LePLTR_b_Scndry_RackDetentSensorFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_Scndry_RackDetentSensorFA' */
    /* Merge: '<Root>/Merge_111' incorporates:
     *  SignalConversion generated from: '<S138>/LePLTR_b_Scndry_RackDetentSensorFA'
     *  SignalConversion generated from: '<S138>/VePLTR_b_Scndry_RackDetentSensorFA_write'
     */
    /* Gateway: PokePLTR_b_Scndry_RackDetentSensorFA/PokePLTR_b_Scndry_RackDetentSensorFAChrt */
    /* During: PokePLTR_b_Scndry_RackDetentSensorFA/PokePLTR_b_Scndry_RackDetentSensorFAChrt */
    /* Entry Internal: PokePLTR_b_Scndry_RackDetentSensorFA/PokePLTR_b_Scndry_RackDetentSensorFAChrt */
    /* Transition: '<S673>:2' */
    Rte_IrvWrite_PokePLTR_b_Scndry_RackDetentSensorFA_VePLTR_b_Scndry_RackDetentSensorFAFA_write_IRV
        (LePLTR_b_Scndry_RackDetentSensorFA);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_Scndry_RackDetentSensorFA' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_Scndry_ShiftLeverFailSts(VAR(boolean, AUTOMATIC)
    LePLTR_b_Scndry_ShiftLeverFailSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_Scndry_ShiftLeverFailSts' */
    /* Merge: '<Root>/Merge_109' incorporates:
     *  SignalConversion generated from: '<S139>/LePLTR_b_Scndry_ShiftLeverFailSts'
     *  SignalConversion generated from: '<S139>/VePLTR_b_Scndry_ShiftLeverFailSts_write'
     */
    /* Gateway: PokePLTR_b_Scndry_ShiftLeverFailSts/PokePLTR_b_Scndry_ShiftLeverFailStsChrt */
    /* During: PokePLTR_b_Scndry_ShiftLeverFailSts/PokePLTR_b_Scndry_ShiftLeverFailStsChrt */
    /* Entry Internal: PokePLTR_b_Scndry_ShiftLeverFailSts/PokePLTR_b_Scndry_ShiftLeverFailStsChrt */
    /* Transition: '<S674>:2' */
    Rte_IrvWrite_PokePLTR_b_Scndry_ShiftLeverFailSts_VePLTR_b_Scndry_ShiftLeverFailStsFA_write_IRV
        (LePLTR_b_Scndry_ShiftLeverFailSts);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_Scndry_ShiftLeverFailSts' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_Scndry_ShiftLockFA(VAR(boolean, AUTOMATIC)
    LePLTR_b_Scndry_ShiftLockFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_Scndry_ShiftLockFA' */
    /* Merge: '<Root>/Merge_108' incorporates:
     *  SignalConversion generated from: '<S140>/LePLTR_b_Scndry_ShiftLockFA'
     *  SignalConversion generated from: '<S140>/VePLTR_b_Scndry_ShiftLockFA_write'
     */
    /* Gateway: PokePLTR_b_Scndry_ShiftLockFA/PokePLTR_b_Scndry_ShiftLockFAChrt */
    /* During: PokePLTR_b_Scndry_ShiftLockFA/PokePLTR_b_Scndry_ShiftLockFAChrt */
    /* Entry Internal: PokePLTR_b_Scndry_ShiftLockFA/PokePLTR_b_Scndry_ShiftLockFAChrt */
    /* Transition: '<S675>:2' */
    Rte_IrvWrite_PokePLTR_b_Scndry_ShiftLockFA_VePLTR_b_Scndry_ShiftLockFAFA_write_IRV
        (LePLTR_b_Scndry_ShiftLockFA);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_Scndry_ShiftLockFA' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_Scndry_ShiftSnsFA(VAR(boolean, AUTOMATIC)
    LePLTR_b_Scndry_ShiftSnsFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_Scndry_ShiftSnsFA' */
    /* Merge: '<Root>/Merge_110' incorporates:
     *  SignalConversion generated from: '<S141>/LePLTR_b_Scndry_ShiftSnsFA'
     *  SignalConversion generated from: '<S141>/VePLTR_b_Scndry_ShiftSnsFA_write'
     */
    /* Gateway: PokePLTR_b_Scndry_ShiftSnsFA/PokePLTR_b_Scndry_ShiftSnsFAChrt */
    /* During: PokePLTR_b_Scndry_ShiftSnsFA/PokePLTR_b_Scndry_ShiftSnsFAChrt */
    /* Entry Internal: PokePLTR_b_Scndry_ShiftSnsFA/PokePLTR_b_Scndry_ShiftSnsFAChrt */
    /* Transition: '<S676>:2' */
    Rte_IrvWrite_PokePLTR_b_Scndry_ShiftSnsFA_VePLTR_b_Scndry_ShiftSnsFAFA_write_IRV
        (LePLTR_b_Scndry_ShiftSnsFA);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_Scndry_ShiftSnsFA' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_Scndry_ShifterDispFA(VAR(boolean, AUTOMATIC)
    LePLTR_b_Scndry_ShifterDispFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_Scndry_ShifterDispFA' */
    /* Merge: '<Root>/Merge_107' incorporates:
     *  SignalConversion generated from: '<S142>/LePLTR_b_Scndry_ShifterDispFA'
     *  SignalConversion generated from: '<S142>/VePLTR_b_Scndry_ShifterDispFA_write'
     */
    /* Gateway: PokePLTR_b_Scndry_ShifterDispFA/PokePLTR_b_Scndry_ShifterDispFAChrt */
    /* During: PokePLTR_b_Scndry_ShifterDispFA/PokePLTR_b_Scndry_ShifterDispFAChrt */
    /* Entry Internal: PokePLTR_b_Scndry_ShifterDispFA/PokePLTR_b_Scndry_ShifterDispFAChrt */
    /* Transition: '<S677>:2' */
    Rte_IrvWrite_PokePLTR_b_Scndry_ShifterDispFA_VePLTR_b_Scndry_ShifterDispFAFA_write_IRV
        (LePLTR_b_Scndry_ShifterDispFA);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_Scndry_ShifterDispFA' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_Secure_Idle_Req(VAR(boolean, AUTOMATIC)
    LePLTR_b_Secure_Idle_Req)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_Secure_Idle_Req' */
    /* Outport: '<Root>/VePLTR_b_Secure_Idle_Req' incorporates:
     *  SignalConversion generated from: '<S143>/VePLTR_b_Secure_Idle_Req'
     *  SignalConversion generated from: '<S143>/LePLTR_b_Secure_Idle_Req'
     */
    /* Gateway: PokePLTR_b_Secure_Idle_Req/PokePLTR_b_Secure_Idle_ReqChrt */
    /* During: PokePLTR_b_Secure_Idle_Req/PokePLTR_b_Secure_Idle_ReqChrt */
    /* Entry Internal: PokePLTR_b_Secure_Idle_Req/PokePLTR_b_Secure_Idle_ReqChrt */
    /* Transition: '<S678>:2' */
    (void)Rte_Write_VePLTR_b_Secure_Idle_Req_Value(LePLTR_b_Secure_Idle_Req);

    /* Outport: '<Root>/VePLTR_b_Secure_Idle_Req_FA' incorporates:
     *  Chart: '<S143>/PokePLTR_b_Secure_Idle_ReqChrt'
     *  SignalConversion generated from: '<S143>/VePLTR_b_Secure_Idle_Req_FA_out'
     */
    (void)Rte_Write_VePLTR_b_Secure_Idle_Req_FA_Value(false);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_Secure_Idle_Req' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_SpeedUnit(VAR(boolean, AUTOMATIC)
    LePLTR_b_SpeedUnit)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_SpeedUnit' */
    /* Merge: '<Root>/Merge_68' incorporates:
     *  SignalConversion generated from: '<S144>/LePLTR_b_SpeedUnit'
     *  SignalConversion generated from: '<S144>/VePLTR_b_SpeedUnit_write'
     */
    /* Gateway: PokePLTR_b_SpeedUnit/PokePLTR_b_SpeedUnitChrt */
    /* During: PokePLTR_b_SpeedUnit/PokePLTR_b_SpeedUnitChrt */
    /* Entry Internal: PokePLTR_b_SpeedUnit/PokePLTR_b_SpeedUnitChrt */
    /* Transition: '<S679>:2' */
    Rte_IrvWrite_PokePLTR_b_SpeedUnit_VePLTR_b_SpeedUnit_Init_write_IRV
        (LePLTR_b_SpeedUnit);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_SpeedUnit' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_Worksite_Inverter_Active(VAR(boolean, AUTOMATIC)
    LePLTR_b_Worksite_Inverter_Active, VAR(boolean, AUTOMATIC)
    LePLTR_b_Worksite_Inverter_ActiveFA)
{
    boolean rtb_LePLTR_b_Worksite_Inverter_ActiveFA_;

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_Worksite_Inverter_Active' */
    /* Chart: '<S145>/PokePLTR_b_Worksite_Inverter_ActiveChrt' incorporates:
     *  SignalConversion generated from: '<S145>/LePLTR_b_Worksite_Inverter_ActiveFA'
     *  SignalConversion generated from: '<S145>/LePLTR_b_Worksite_Inverter_Active'
     */
    /* Gateway: PokePLTR_b_Worksite_Inverter_Active/PokePLTR_b_Worksite_Inverter_ActiveChrt */
    /* During: PokePLTR_b_Worksite_Inverter_Active/PokePLTR_b_Worksite_Inverter_ActiveChrt */
    /* Entry Internal: PokePLTR_b_Worksite_Inverter_Active/PokePLTR_b_Worksite_Inverter_ActiveChrt */
    /* Transition: '<S680>:2' */
    if (!LePLTR_b_Worksite_Inverter_ActiveFA)
    {
        /* Transition: '<S680>:3' */
        /* Transition: '<S680>:15' */
        PLTR_ac_B.LePLTR_b_Worksite_Inverter_Active_out =
            LePLTR_b_Worksite_Inverter_Active;
        rtb_LePLTR_b_Worksite_Inverter_ActiveFA_ = false;

        /* Transition: '<S680>:18' */
    }
    else
    {
        /* Transition: '<S680>:4' */
        rtb_LePLTR_b_Worksite_Inverter_ActiveFA_ = true;
    }

    /* End of Chart: '<S145>/PokePLTR_b_Worksite_Inverter_ActiveChrt' */

    /* Outport: '<Root>/VePLTR_b_Worksite_Inverter_Active' incorporates:
     *  SignalConversion generated from: '<S145>/VePLTR_b_Worksite_Inverter_Active'
     */
    (void)Rte_Write_VePLTR_b_Worksite_Inverter_Active_Value
        (PLTR_ac_B.LePLTR_b_Worksite_Inverter_Active_out);

    /* Outport: '<Root>/VePLTR_b_Worksite_Inverter_Active_FA' incorporates:
     *  SignalConversion generated from: '<S145>/VePLTR_b_Worksite_Inverter_ActiveFA'
     */
    (void)Rte_Write_VePLTR_b_Worksite_Inverter_Active_FA_Value
        (rtb_LePLTR_b_Worksite_Inverter_ActiveFA_);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_Worksite_Inverter_Active' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_b_YawRateFailSts_ORC(VAR(boolean, AUTOMATIC)
    LePLTR_b_YawRateFailSts_ORC)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_b_YawRateFailSts_ORC' */
    /* Outport: '<Root>/VePLTR_b_YawRateFailSts_ORC' incorporates:
     *  SignalConversion generated from: '<S146>/VePLTR_b_YawRateFailSts_ORC'
     *  SignalConversion generated from: '<S146>/LePLTR_b_YawRateFailSts_ORC'
     */
    /* Gateway: PokePLTR_b_YawRateFailSts_ORC/PokePLTR_b_YawRateFailSts_ORCChrt */
    /* During: PokePLTR_b_YawRateFailSts_ORC/PokePLTR_b_YawRateFailSts_ORCChrt */
    /* Entry Internal: PokePLTR_b_YawRateFailSts_ORC/PokePLTR_b_YawRateFailSts_ORCChrt */
    /* Transition: '<S681>:2' */
    (void)Rte_Write_VePLTR_b_YawRateFailSts_ORC_Value
        (LePLTR_b_YawRateFailSts_ORC);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_b_YawRateFailSts_ORC' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_dphi_LwsSpeed(VAR(float32, AUTOMATIC)
    LePLTR_dphi_LwsSpeed)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_dphi_LwsSpeed' */
    /* Outport: '<Root>/VePLTR_dphi_LwsSpeed' incorporates:
     *  SignalConversion generated from: '<S147>/VePLTR_dphi_LwsSpeed'
     *  SignalConversion generated from: '<S147>/LePLTR_dphi_LwsSpeed'
     */
    /* Gateway: PokePLTR_dphi_LwsSpeed/PokePLTR_dphi_LwsSpeedChrt */
    /* During: PokePLTR_dphi_LwsSpeed/PokePLTR_dphi_LwsSpeedChrt */
    /* Entry Internal: PokePLTR_dphi_LwsSpeed/PokePLTR_dphi_LwsSpeedChrt */
    /* Transition: '<S682>:2' */
    (void)Rte_Write_VePLTR_dphi_LwsSpeed_Value(LePLTR_dphi_LwsSpeed);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_dphi_LwsSpeed' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_dphi_YawRate_ORC(VAR(float32, AUTOMATIC)
    LePLTR_dphi_YawRate_ORC)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_dphi_YawRate_ORC' */
    /* Outport: '<Root>/VePLTR_dphi_YawRate_ORC' incorporates:
     *  SignalConversion generated from: '<S148>/VePLTR_dphi_YawRate_ORC'
     *  SignalConversion generated from: '<S148>/LePLTR_dphi_YawRate_ORC'
     */
    /* Gateway: PokePLTR_dphi_YawRate_ORC/PokePLTR_dphi_YawRate_ORCChrt */
    /* During: PokePLTR_dphi_YawRate_ORC/PokePLTR_dphi_YawRate_ORCChrt */
    /* Entry Internal: PokePLTR_dphi_YawRate_ORC/PokePLTR_dphi_YawRate_ORCChrt */
    /* Transition: '<S683>:2' */
    (void)Rte_Write_VePLTR_dphi_YawRate_ORC_Value(LePLTR_dphi_YawRate_ORC);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_dphi_YawRate_ORC' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_e_ACCSystemSts(VAR(uint8, AUTOMATIC)
    LePLTR_e_ACCSystemSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_e_ACCSystemSts' */
    /* Outport: '<Root>/VePLTR_b_ACCSystemSts_FA' incorporates:
     *  Chart: '<S149>/PokePLTR_e_ACCSystemStsChrt'
     *  SignalConversion generated from: '<S149>/VePLTR_b_ACCSystemSts_FA'
     */
    /* Gateway: PokePLTR_e_ACCSystemSts/PokePLTR_e_ACCSystemStsChrt */
    /* During: PokePLTR_e_ACCSystemSts/PokePLTR_e_ACCSystemStsChrt */
    /* Entry Internal: PokePLTR_e_ACCSystemSts/PokePLTR_e_ACCSystemStsChrt */
    /* Transition: '<S685>:26' */
    (void)Rte_Write_VePLTR_b_ACCSystemSts_FA_Value(false);

    /* Outport: '<Root>/VePLTR_e_ACCSystemSts' incorporates:
     *  Chart: '<S149>/PokePLTR_e_ACCSystemStsChrt'
     *  Constant: '<S684>/Calib'
     *  SignalConversion generated from: '<S149>/VePLTR_e_ACCSystemSts'
     *  SignalConversion generated from: '<S149>/LePLTR_e_ACCSystemSts'
     */
    (void)Rte_Write_VePLTR_e_ACCSystemSts_Value(KaPLTR_e_ACCSystemSts_Map
        [(LePLTR_e_ACCSystemSts)]);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_e_ACCSystemSts' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_e_AEBSystemSts(VAR(TePLTR_e_AEB_SystemSts,
    AUTOMATIC) LePLTR_e_AEBSystemSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_e_AEBSystemSts' */
    /* Outport: '<Root>/VePLTR_b_AEBSystemSts_FA' incorporates:
     *  Chart: '<S150>/PokePLTR_e_AEBSystemStsChrt'
     *  SignalConversion generated from: '<S150>/VePLTR_b_AEBSystemSts_FA_out'
     */
    /* Gateway: PokePLTR_e_AEBSystemSts/PokePLTR_e_AEBSystemStsChrt */
    /* During: PokePLTR_e_AEBSystemSts/PokePLTR_e_AEBSystemStsChrt */
    /* Entry Internal: PokePLTR_e_AEBSystemSts/PokePLTR_e_AEBSystemStsChrt */
    /* Transition: '<S686>:2' */
    (void)Rte_Write_VePLTR_b_AEBSystemSts_FA_Value(false);

    /* Outport: '<Root>/VePLTR_e_AEBSystemSts' incorporates:
     *  SignalConversion generated from: '<S150>/VePLTR_e_AEBSystemSts'
     *  SignalConversion generated from: '<S150>/LePLTR_e_AEBSystemSts'
     */
    (void)Rte_Write_VePLTR_e_AEBSystemSts_Value(LePLTR_e_AEBSystemSts);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_e_AEBSystemSts' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_e_ASCM_Stat(VAR(TePLTR_e_ASCM_Stat, AUTOMATIC)
    LePLTR_e_ASCM_Stat, VAR(boolean, AUTOMATIC) LePLTR_b_ASCM_Stat_FA)
{
    TePLTR_e_ASCM_Stat rtb_LePLTR_e_ASCM_Stat_out;
    boolean rtb_LePLTR_b_ASCM_Stat_FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_e_ASCM_Stat' */
    /* Chart: '<S151>/PokePLTR_e_ASCM_StatChrt' incorporates:
     *  SignalConversion generated from: '<S151>/LePLTR_b_ASCM_Stat_FA'
     *  SignalConversion generated from: '<S151>/LePLTR_e_ASCM_Stat'
     */
    /* Gateway: PokePLTR_e_ASCM_Stat/PokePLTR_e_ASCM_StatChrt */
    /* During: PokePLTR_e_ASCM_Stat/PokePLTR_e_ASCM_StatChrt */
    /* Entry Internal: PokePLTR_e_ASCM_Stat/PokePLTR_e_ASCM_StatChrt */
    /* Transition: '<S687>:2' */
    if (!LePLTR_b_ASCM_Stat_FA)
    {
        /* Transition: '<S687>:3' */
        /* Transition: '<S687>:15' */
        rtb_LePLTR_e_ASCM_Stat_out = LePLTR_e_ASCM_Stat;
        rtb_LePLTR_b_ASCM_Stat_FA_out = false;

        /* Transition: '<S687>:18' */
    }
    else
    {
        /* Transition: '<S687>:4' */
        rtb_LePLTR_b_ASCM_Stat_FA_out = true;
        rtb_LePLTR_e_ASCM_Stat_out = CePLTR_e_ASCM_Stat_SNA;
    }

    /* End of Chart: '<S151>/PokePLTR_e_ASCM_StatChrt' */

    /* Outport: '<Root>/VePLTR_b_ASCM_Stat_FA' incorporates:
     *  SignalConversion generated from: '<S151>/VePLTR_b_ASCM_Stat_FA'
     */
    (void)Rte_Write_VePLTR_b_ASCM_Stat_FA_Value(rtb_LePLTR_b_ASCM_Stat_FA_out);

    /* Outport: '<Root>/VePLTR_e_ASCM_Stat' incorporates:
     *  SignalConversion generated from: '<S151>/VePLTR_e_ASCM_Stat'
     */
    (void)Rte_Write_VePLTR_e_ASCM_Stat_Value(rtb_LePLTR_e_ASCM_Stat_out);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_e_ASCM_Stat' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_e_BSM_AxleTrq_Enbld(VAR(uint8, AUTOMATIC)
    LePLTR_e_BSM_AxleTrq_Enbld)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_e_BSM_AxleTrq_Enbld' */
    /* Outport: '<Root>/VePLTR_e_BSM_AxleTrq_Enbld' incorporates:
     *  Chart: '<S152>/PokePLTR_e_BSM_AxleTrq_EnbldChrt'
     *  SignalConversion generated from: '<S152>/VePLTR_e_BSM_AxleTrq_Enbld'
     *  SignalConversion generated from: '<S152>/LePLTR_e_BSM_AxleTrq_Enbld'
     */
    /* Gateway: PokePLTR_e_BSM_AxleTrq_Enbld/PokePLTR_e_BSM_AxleTrq_EnbldChrt */
    /* During: PokePLTR_e_BSM_AxleTrq_Enbld/PokePLTR_e_BSM_AxleTrq_EnbldChrt */
    /* Entry Internal: PokePLTR_e_BSM_AxleTrq_Enbld/PokePLTR_e_BSM_AxleTrq_EnbldChrt */
    /* Transition: '<S688>:2' */
    (void)Rte_Write_VePLTR_e_BSM_AxleTrq_Enbld_Value((TePLTR_e_BSM_AxleTrq_Enbld)
        safe_cast_to_TePLTR_e_BSM_AxleTrq_Enbld(LePLTR_e_BSM_AxleTrq_Enbld));

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_e_BSM_AxleTrq_Enbld' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_e_Command_15Sts(VAR(TePLTR_e_Command_15Sts,
    AUTOMATIC) LePLTR_e_Command_15Sts, VAR(boolean, AUTOMATIC)
    LePLTR_b_Command_15Sts_FA)
{
    boolean rtb_LePLTR_b_Command_15Sts_FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_e_Command_15Sts' */
    /* Chart: '<S153>/PokePLTR_e_Command_15StsChrt' incorporates:
     *  SignalConversion generated from: '<S153>/LePLTR_b_Command_15Sts_FA'
     *  SignalConversion generated from: '<S153>/LePLTR_e_Command_15Sts'
     */
    /* Gateway: PokePLTR_e_Command_15Sts/PokePLTR_e_Command_15StsChrt */
    /* During: PokePLTR_e_Command_15Sts/PokePLTR_e_Command_15StsChrt */
    /* Entry Internal: PokePLTR_e_Command_15Sts/PokePLTR_e_Command_15StsChrt */
    /* Transition: '<S689>:2' */
    if (!LePLTR_b_Command_15Sts_FA)
    {
        /* Transition: '<S689>:3' */
        /* Transition: '<S689>:15' */
        PLTR_ac_B.LePLTR_e_Command_15Sts_out = LePLTR_e_Command_15Sts;
        rtb_LePLTR_b_Command_15Sts_FA_out = false;

        /* Transition: '<S689>:18' */
    }
    else
    {
        /* Transition: '<S689>:4' */
        rtb_LePLTR_b_Command_15Sts_FA_out = true;
    }

    /* End of Chart: '<S153>/PokePLTR_e_Command_15StsChrt' */

    /* Outport: '<Root>/VePLTR_b_Command_15Sts_FA' incorporates:
     *  SignalConversion generated from: '<S153>/VePLTR_b_Command_15Sts_FA_out'
     */
    (void)Rte_Write_VePLTR_b_Command_15Sts_FA_Value
        (rtb_LePLTR_b_Command_15Sts_FA_out);

    /* Outport: '<Root>/VePLTR_e_Command_15Sts' incorporates:
     *  SignalConversion generated from: '<S153>/VePLTR_e_Command_15Sts_out'
     */
    (void)Rte_Write_VePLTR_e_Command_15Sts_Value
        (PLTR_ac_B.LePLTR_e_Command_15Sts_out);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_e_Command_15Sts' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_e_DriverDoorOnOffSts(VAR
    (TePLTR_e_DrvrDoorOnOffSts, AUTOMATIC) LePLTR_e_DriverDoorOnOffSts, VAR
    (boolean, AUTOMATIC) LePLTR_b_DriverDoorOnOffSts_FA)
{
    TePLTR_e_DrvrDoorOnOffSts rtb_LePLTR_e_DriverDoorOnOffSts_out;
    boolean rtb_LePLTR_b_DriverDoorOnOffSts_FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_e_DriverDoorOnOffSts' */
    /* Chart: '<S154>/PokePLTR_e_DriverDoorOnOffStsChrt' incorporates:
     *  SignalConversion generated from: '<S154>/LePLTR_b_DriverDoorOnOffSts_FA'
     *  SignalConversion generated from: '<S154>/LePLTR_e_DriverDoorOnOffSts'
     */
    /* Gateway: PokePLTR_e_DriverDoorOnOffSts/PokePLTR_e_DriverDoorOnOffStsChrt */
    /* During: PokePLTR_e_DriverDoorOnOffSts/PokePLTR_e_DriverDoorOnOffStsChrt */
    /* Entry Internal: PokePLTR_e_DriverDoorOnOffSts/PokePLTR_e_DriverDoorOnOffStsChrt */
    /* Transition: '<S690>:2' */
    if (!LePLTR_b_DriverDoorOnOffSts_FA)
    {
        /* Transition: '<S690>:3' */
        /* Transition: '<S690>:15' */
        rtb_LePLTR_e_DriverDoorOnOffSts_out = LePLTR_e_DriverDoorOnOffSts;
        rtb_LePLTR_b_DriverDoorOnOffSts_FA_out = false;

        /* Transition: '<S690>:18' */
    }
    else
    {
        /* Transition: '<S690>:4' */
        rtb_LePLTR_b_DriverDoorOnOffSts_FA_out = true;
        rtb_LePLTR_e_DriverDoorOnOffSts_out = CePLTR_e_DrvrDoorOnOffSts_SNA;
    }

    /* End of Chart: '<S154>/PokePLTR_e_DriverDoorOnOffStsChrt' */

    /* Merge: '<Root>/Merge_69_Irv3' incorporates:
     *  SignalConversion generated from: '<S154>/VePLTR_b_DriverDoorOnOffSts_FA_write'
     * */
    Rte_IrvWrite_PokePLTR_e_DriverDoorOnOffSts_VePLTR_b_DriverDoorOnOffSts_FA_IRV
        (rtb_LePLTR_b_DriverDoorOnOffSts_FA_out);

    /* Merge: '<Root>/Merge_69_Irv2' incorporates:
     *  SignalConversion generated from: '<S154>/VePLTR_e_DriverDoorOnOffSts_write'
     * */
    Rte_IrvWrite_PokePLTR_e_DriverDoorOnOffSts_VePLTR_e_DriverDoorOnOffSts_Init_IRV
        (rtb_LePLTR_e_DriverDoorOnOffSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_e_DriverDoorOnOffSts' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_e_DrvrSeatSnsrSts(VAR(uint8, AUTOMATIC)
    LePLTR_e_DrvrSeatSnsrSts, VAR(boolean, AUTOMATIC)
    LePLTR_b_DrvrSeatSnsrSts_FA)
{
    boolean rtb_LePLTR_b_DrvrSeatSnsrSts_FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_e_DrvrSeatSnsrSts' */
    /* Chart: '<S155>/PokePLTR_e_DrvrSeatSnsrStsChrt' incorporates:
     *  SignalConversion generated from: '<S155>/LePLTR_b_DrvrSeatSnsrSts_FA'
     *  SignalConversion generated from: '<S155>/LePLTR_e_DrvrSeatSnsrSts'
     */
    /* Gateway: PokePLTR_e_DrvrSeatSnsrSts/PokePLTR_e_DrvrSeatSnsrStsChrt */
    /* During: PokePLTR_e_DrvrSeatSnsrSts/PokePLTR_e_DrvrSeatSnsrStsChrt */
    /* Entry Internal: PokePLTR_e_DrvrSeatSnsrSts/PokePLTR_e_DrvrSeatSnsrStsChrt */
    /* Transition: '<S691>:2' */
    if (!LePLTR_b_DrvrSeatSnsrSts_FA)
    {
        /* Transition: '<S691>:3' */
        /* Transition: '<S691>:15' */
        PLTR_ac_B.LePLTR_e_DrvrSeatSnsrSts_out = (TePLTR_e_DrvrSeatSnsrSts)
            PL_safe_cast_to_TePLTR_e_DrvrSeatSnsrSts(LePLTR_e_DrvrSeatSnsrSts);
        rtb_LePLTR_b_DrvrSeatSnsrSts_FA_out = false;

        /* Transition: '<S691>:18' */
    }
    else
    {
        /* Transition: '<S691>:4' */
        rtb_LePLTR_b_DrvrSeatSnsrSts_FA_out = true;
    }

    /* End of Chart: '<S155>/PokePLTR_e_DrvrSeatSnsrStsChrt' */

    /* Merge: '<Root>/Merge_96' incorporates:
     *  SignalConversion generated from: '<S155>/VePLTR_b_DrvrSeatSnsrSts_FA_write'
     * */
    Rte_IrvWrite_PokePLTR_e_DrvrSeatSnsrSts_VePLTR_b_DrvrSeatSnsrSts_FA_write_IRV
        (rtb_LePLTR_b_DrvrSeatSnsrSts_FA_out);

    /* Merge: '<Root>/Merge_98' incorporates:
     *  SignalConversion generated from: '<S155>/VePLTR_e_DrvrSeatSnsrSts_write'
     * */
    Rte_IrvWrite_PokePLTR_e_DrvrSeatSnsrSts_DrvrSeatSnsrSts_Init_write_IRV
        (PLTR_ac_B.LePLTR_e_DrvrSeatSnsrSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_e_DrvrSeatSnsrSts' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_e_ECMVtdFreeze(VAR(TePLTR_e_ECMVtdFreeze,
    AUTOMATIC) LePLTR_e_ECMVtdFreeze)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_e_ECMVtdFreeze' */
    /* Merge: '<Root>/Merge_84' incorporates:
     *  SignalConversion generated from: '<S156>/LePLTR_e_ECMVtdFreeze'
     *  SignalConversion generated from: '<S156>/VePLTR_e_ECMVtdFreeze_write'
     */
    /* Gateway: PokePLTR_e_ECMVtdFreeze/PokePLTR_e_ECMVtdFreezeChrt */
    /* During: PokePLTR_e_ECMVtdFreeze/PokePLTR_e_ECMVtdFreezeChrt */
    /* Entry Internal: PokePLTR_e_ECMVtdFreeze/PokePLTR_e_ECMVtdFreezeChrt */
    /* Transition: '<S692>:2' */
    Rte_IrvWrite_PokePLTR_e_ECMVtdFreeze_VePLTR_e_ECMVtdFreezeInit_write_IRV
        (LePLTR_e_ECMVtdFreeze);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_e_ECMVtdFreeze' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_e_EPBHoldSt(VAR(uint8, AUTOMATIC)
    LePLTR_e_EPBHoldSt, VAR(boolean, AUTOMATIC) LePLTR_b_EPBHoldStFA)
{
    boolean rtb_LePLTR_b_EPBHoldStFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_e_EPBHoldSt' */
    /* Chart: '<S157>/PokePLTR_e_EPBHoldStChrt' incorporates:
     *  Constant: '<S693>/Calib'
     *  SignalConversion generated from: '<S157>/LePLTR_b_EPBHoldStFA'
     *  SignalConversion generated from: '<S157>/LePLTR_e_EPBHoldSt'
     */
    /* Gateway: PokePLTR_e_EPBHoldSt/PokePLTR_e_EPBHoldStChrt */
    /* During: PokePLTR_e_EPBHoldSt/PokePLTR_e_EPBHoldStChrt */
    /* Entry Internal: PokePLTR_e_EPBHoldSt/PokePLTR_e_EPBHoldStChrt */
    /* Transition: '<S694>:2' */
    if (!LePLTR_b_EPBHoldStFA)
    {
        /* Transition: '<S694>:3' */
        /* Transition: '<S694>:15' */
        PLTR_ac_B.LePLTR_e_EPBHoldSt_out = KaPLTR_e_EPBHoldSts_Map
            [(LePLTR_e_EPBHoldSt)];
        rtb_LePLTR_b_EPBHoldStFA_out = false;

        /* Transition: '<S694>:18' */
    }
    else
    {
        /* Transition: '<S694>:4' */
        rtb_LePLTR_b_EPBHoldStFA_out = true;
    }

    /* End of Chart: '<S157>/PokePLTR_e_EPBHoldStChrt' */

    /* Outport: '<Root>/VePLTR_b_EPBHoldStsFA' incorporates:
     *  SignalConversion generated from: '<S157>/VePLTR_b_EPBHoldStFA'
     */
    (void)Rte_Write_VePLTR_b_EPBHoldStsFA_Value(rtb_LePLTR_b_EPBHoldStFA_out);

    /* Outport: '<Root>/VePLTR_e_EPBHoldSts' incorporates:
     *  SignalConversion generated from: '<S157>/VePLTR_e_EPBHoldSt'
     */
    (void)Rte_Write_VePLTR_e_EPBHoldSts_Value(PLTR_ac_B.LePLTR_e_EPBHoldSt_out);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_e_EPBHoldSt' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_e_ERS_SW(VAR(TeTRGR_e_ERS_SW, AUTOMATIC)
    LePLTR_e_ERS_SW, VAR(boolean, AUTOMATIC) LePLTR_b_ERS_SWFA)
{
    boolean rtb_LePLTR_b_ERS_SWFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_e_ERS_SW' */
    /* Chart: '<S158>/PokePLTR_e_ERS_SWChrt' incorporates:
     *  Constant: '<S695>/Calib'
     *  SignalConversion generated from: '<S158>/LePLTR_b_ERS_SWFA'
     *  SignalConversion generated from: '<S158>/LePLTR_e_ERS_SW'
     */
    /* Gateway: PokePLTR_e_ERS_SW/PokePLTR_e_ERS_SWChrt */
    /* During: PokePLTR_e_ERS_SW/PokePLTR_e_ERS_SWChrt */
    /* Entry Internal: PokePLTR_e_ERS_SW/PokePLTR_e_ERS_SWChrt */
    /* Transition: '<S696>:2' */
    if (!LePLTR_b_ERS_SWFA)
    {
        /* Transition: '<S696>:3' */
        /* Transition: '<S696>:15' */
        PLTR_ac_B.LePLTR_e_ERS_SW_out = KaPLTR_e_ERS_SW_Map[(LePLTR_e_ERS_SW)];
        rtb_LePLTR_b_ERS_SWFA_out = false;

        /* Transition: '<S696>:18' */
    }
    else
    {
        /* Transition: '<S696>:4' */
        rtb_LePLTR_b_ERS_SWFA_out = true;
    }

    /* End of Chart: '<S158>/PokePLTR_e_ERS_SWChrt' */

    /* Outport: '<Root>/VePLTR_b_ERS_SWFA' incorporates:
     *  SignalConversion generated from: '<S158>/VePLTR_b_ERS_SWFA'
     */
    (void)Rte_Write_VePLTR_b_ERS_SWFA_Value(rtb_LePLTR_b_ERS_SWFA_out);

    /* Outport: '<Root>/VePLTR_e_ERS_SW' incorporates:
     *  SignalConversion generated from: '<S158>/VePLTR_e_ERS_SW'
     */
    (void)Rte_Write_VePLTR_e_ERS_SW_Value(PLTR_ac_B.LePLTR_e_ERS_SW_out);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_e_ERS_SW' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_e_GatedParkSw_FaultSts(VAR(sint16, AUTOMATIC)
    LePLTR_e_GatedParkSw_FaultSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_e_GatedParkSw_FaultSts' */
    /* Merge: '<Root>/Merge_102' incorporates:
     *  SignalConversion generated from: '<S159>/LePLTR_e_GatedParkSw_FaultSts'
     *  SignalConversion generated from: '<S159>/VePLTR_e_GatedParkSw_FaultSts_write'
     */
    /* Gateway: PokePLTR_e_GatedParkSw_FaultSts/PokePLTR_e_GatedParkSw_FaultStsChrt */
    /* During: PokePLTR_e_GatedParkSw_FaultSts/PokePLTR_e_GatedParkSw_FaultStsChrt */
    /* Entry Internal: PokePLTR_e_GatedParkSw_FaultSts/PokePLTR_e_GatedParkSw_FaultStsChrt */
    /* Transition: '<S697>:2' */
    Rte_IrvWrite_PokePLTR_e_GatedParkSw_FaultSts_HWIO_GatedParkSWFault_write_IRV
        (LePLTR_e_GatedParkSw_FaultSts);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_e_GatedParkSw_FaultSts' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_e_HAS_TelltaleSts(VAR(TePLTR_e_HAS_TelltaleSts,
    AUTOMATIC) LePLTR_e_HAS_TelltaleSts, VAR(boolean, AUTOMATIC)
    LePLTR_b_HAS_TelltaleSts_FA)
{
    boolean rtb_LePLTR_b_HAS_TelltaleSts_FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_e_HAS_TelltaleSts' */
    /* Chart: '<S160>/PokePLTR_e_HAS_TelltaleStsChrt' incorporates:
     *  SignalConversion generated from: '<S160>/LePLTR_b_HAS_TelltaleSts_FA'
     *  SignalConversion generated from: '<S160>/LePLTR_e_HAS_TelltaleSts'
     */
    /* Gateway: PokePLTR_e_HAS_TelltaleSts/PokePLTR_e_HAS_TelltaleStsChrt */
    /* During: PokePLTR_e_HAS_TelltaleSts/PokePLTR_e_HAS_TelltaleStsChrt */
    /* Entry Internal: PokePLTR_e_HAS_TelltaleSts/PokePLTR_e_HAS_TelltaleStsChrt */
    /* Transition: '<S698>:2' */
    if (!LePLTR_b_HAS_TelltaleSts_FA)
    {
        /* Transition: '<S698>:3' */
        /* Transition: '<S698>:15' */
        PLTR_ac_B.LePLTR_e_HAS_TelltaleSts_out = LePLTR_e_HAS_TelltaleSts;
        rtb_LePLTR_b_HAS_TelltaleSts_FA_out = false;

        /* Transition: '<S698>:18' */
    }
    else
    {
        /* Transition: '<S698>:4' */
        rtb_LePLTR_b_HAS_TelltaleSts_FA_out = true;
    }

    /* End of Chart: '<S160>/PokePLTR_e_HAS_TelltaleStsChrt' */

    /* Outport: '<Root>/VePLTR_b_HAS_TelltaleSts_FA' incorporates:
     *  SignalConversion generated from: '<S160>/VePLTR_b_HAS_TelltaleSts_FA_out'
     */
    (void)Rte_Write_VePLTR_b_HAS_TelltaleSts_FA_Value
        (rtb_LePLTR_b_HAS_TelltaleSts_FA_out);

    /* Outport: '<Root>/VePLTR_e_HAS_TelltaleSts' incorporates:
     *  SignalConversion generated from: '<S160>/VePLTR_e_HAS_TelltaleSts_out'
     */
    (void)Rte_Write_VePLTR_e_HAS_TelltaleSts_Value
        (PLTR_ac_B.LePLTR_e_HAS_TelltaleSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_e_HAS_TelltaleSts' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_e_HiBmLvr_Stat(VAR(TePLTR_e_HiBmLvr_Stat,
    AUTOMATIC) LePLTR_e_HiBmLvr_Stat, VAR(boolean, AUTOMATIC)
    LePLTR_b_HiBmLvr_Stat_FA)
{
    TePLTR_e_HiBmLvr_Stat rtb_LePLTR_e_HiBmLvr_Stat_out;
    boolean rtb_LePLTR_b_HiBmLvr_Stat_FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_e_HiBmLvr_Stat' */
    /* Chart: '<S161>/PokePLTR_e_HiBmLvr_StatChrt' incorporates:
     *  SignalConversion generated from: '<S161>/LePLTR_b_HiBmLvr_Stat_FA'
     *  SignalConversion generated from: '<S161>/LePLTR_e_HiBmLvr_Stat'
     */
    /* Gateway: PokePLTR_e_HiBmLvr_Stat/PokePLTR_e_HiBmLvr_StatChrt */
    /* During: PokePLTR_e_HiBmLvr_Stat/PokePLTR_e_HiBmLvr_StatChrt */
    /* Entry Internal: PokePLTR_e_HiBmLvr_Stat/PokePLTR_e_HiBmLvr_StatChrt */
    /* Transition: '<S699>:2' */
    if (!LePLTR_b_HiBmLvr_Stat_FA)
    {
        /* Transition: '<S699>:3' */
        /* Transition: '<S699>:15' */
        rtb_LePLTR_e_HiBmLvr_Stat_out = LePLTR_e_HiBmLvr_Stat;
        rtb_LePLTR_b_HiBmLvr_Stat_FA_out = false;

        /* Transition: '<S699>:18' */
    }
    else
    {
        /* Transition: '<S699>:4' */
        rtb_LePLTR_b_HiBmLvr_Stat_FA_out = true;
        rtb_LePLTR_e_HiBmLvr_Stat_out = CePLTR_e_HiBmLvr_Stat_SNA;
    }

    /* End of Chart: '<S161>/PokePLTR_e_HiBmLvr_StatChrt' */

    /* Outport: '<Root>/VePLTR_b_HiBmLvr_Stat_FA' incorporates:
     *  SignalConversion generated from: '<S161>/VePLTR_b_HiBmLvr_Stat_FA'
     */
    (void)Rte_Write_VePLTR_b_HiBmLvr_Stat_FA_Value
        (rtb_LePLTR_b_HiBmLvr_Stat_FA_out);

    /* Outport: '<Root>/VePLTR_e_HiBmLvr_Stat' incorporates:
     *  SignalConversion generated from: '<S161>/VePLTR_e_HiBmLvr_Stat'
     */
    (void)Rte_Write_VePLTR_e_HiBmLvr_Stat_Value(rtb_LePLTR_e_HiBmLvr_Stat_out);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_e_HiBmLvr_Stat' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_e_InvrOprStatus(VAR(TePLTR_e_InvOprStat,
    AUTOMATIC) LePLTR_e_InvrOprStatus, VAR(boolean, AUTOMATIC)
    LePLTR_b_InvrOprStatusFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_e_InvrOprStatus' */
    /* Chart: '<S162>/PokePLTR_e_InvrOprStatusChrt' incorporates:
     *  Constant: '<S700>/Calib'
     *  SignalConversion generated from: '<S162>/LePLTR_b_InvrOprStatusFA'
     *  SignalConversion generated from: '<S162>/LePLTR_e_InvrOprStatus'
     */
    /* Gateway: PokePLTR_e_InvrOprStatus/PokePLTR_e_InvrOprStatusChrt */
    /* During: PokePLTR_e_InvrOprStatus/PokePLTR_e_InvrOprStatusChrt */
    /* Entry Internal: PokePLTR_e_InvrOprStatus/PokePLTR_e_InvrOprStatusChrt */
    /* Transition: '<S701>:2' */
    if (!LePLTR_b_InvrOprStatusFA)
    {
        /* Transition: '<S701>:3' */
        /* Transition: '<S701>:15' */
        PLTR_ac_B.LePLTR_e_InvrOprStatus_out = KaPLTR_e_InvrOprStatus_Map
            [(LePLTR_e_InvrOprStatus)];

        /* Transition: '<S701>:18' */
    }
    else
    {
        /* Transition: '<S701>:4' */
    }

    /* End of Chart: '<S162>/PokePLTR_e_InvrOprStatusChrt' */

    /* Outport: '<Root>/VePLTR_e_InvOprStat' incorporates:
     *  SignalConversion generated from: '<S162>/VePLTR_e_InvrOprStatus'
     */
    (void)Rte_Write_VePLTR_e_InvOprStat_Value
        (PLTR_ac_B.LePLTR_e_InvrOprStatus_out);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_e_InvrOprStatus' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_e_LSMDExtReleaseLockReq(VAR(uint8, AUTOMATIC)
    LePLTR_e_LSMDExtReleaseLockReq)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_e_LSMDExtReleaseLockReq' */
    /* Outport: '<Root>/VePLTR_e_LSMDExtReleaseLockReq' incorporates:
     *  Chart: '<S163>/PokePLTR_e_LSMDExtReleaseLockReqChrt'
     *  SignalConversion generated from: '<S163>/VePLTR_e_LSMDExtReleaseLockReq'
     *  SignalConversion generated from: '<S163>/LePLTR_e_LSMDExtReleaseLockReq'
     */
    /* Gateway: PokePLTR_e_LSMDExtReleaseLockReq/PokePLTR_e_LSMDExtReleaseLockReqChrt */
    /* During: PokePLTR_e_LSMDExtReleaseLockReq/PokePLTR_e_LSMDExtReleaseLockReqChrt */
    /* Entry Internal: PokePLTR_e_LSMDExtReleaseLockReq/PokePLTR_e_LSMDExtReleaseLockReqChrt */
    /* Transition: '<S702>:2' */
    (void)Rte_Write_VePLTR_e_LSMDExtReleaseLockReq_Value
        ((TePLTR_e_LSMDExtReleaseLockReq)
         safe_cast_to_TePLTR_e_LSMDExtReleaseLock(LePLTR_e_LSMDExtReleaseLockReq));

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_e_LSMDExtReleaseLockReq' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_e_LwsAngleType(VAR(uint8, AUTOMATIC)
    LePLTR_e_LwsAngleType)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_e_LwsAngleType' */
    /* Outport: '<Root>/VePLTR_e_LwsAngleType' incorporates:
     *  Chart: '<S164>/PokePLTR_e_LwsAngleTypeChrt'
     *  SignalConversion generated from: '<S164>/VePLTR_e_LwsAngleType'
     *  SignalConversion generated from: '<S164>/LePLTR_e_LwsAngleType'
     */
    /* Gateway: PokePLTR_e_LwsAngleType/PokePLTR_e_LwsAngleTypeChrt */
    /* During: PokePLTR_e_LwsAngleType/PokePLTR_e_LwsAngleTypeChrt */
    /* Entry Internal: PokePLTR_e_LwsAngleType/PokePLTR_e_LwsAngleTypeChrt */
    /* Transition: '<S703>:2' */
    (void)Rte_Write_VePLTR_e_LwsAngleType_Value((TePLTR_e_LwsAngleType)
        PLTR__safe_cast_to_TePLTR_e_LwsAngleType(LePLTR_e_LwsAngleType));

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_e_LwsAngleType' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_e_MRM_Status(VAR(uint16, AUTOMATIC)
    LePLTR_e_MRM_Status, VAR(boolean, AUTOMATIC) LePLTR_b_MRM_Status_FA)
{
    boolean rtb_LePLTR_b_MRM_Status_FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_e_MRM_Status' */
    /* Chart: '<S165>/PokePLTR_e_MRM_StatusChrt' incorporates:
     *  SignalConversion generated from: '<S165>/LePLTR_b_MRM_Status_FA'
     *  SignalConversion generated from: '<S165>/LePLTR_e_MRM_Status'
     */
    /* Gateway: PokePLTR_e_MRM_Status/PokePLTR_e_MRM_StatusChrt */
    /* During: PokePLTR_e_MRM_Status/PokePLTR_e_MRM_StatusChrt */
    /* Entry Internal: PokePLTR_e_MRM_Status/PokePLTR_e_MRM_StatusChrt */
    /* Transition: '<S704>:2' */
    if (!LePLTR_b_MRM_Status_FA)
    {
        /* Transition: '<S704>:3' */
        /* Transition: '<S704>:15' */
        PLTR_ac_B.LePLTR_e_MRM_Status_out = (TePLTR_e_MRM_Status)
            PLTR_ac_safe_cast_to_TePLTR_e_MRM_Status((uint8)LePLTR_e_MRM_Status);
        rtb_LePLTR_b_MRM_Status_FA_out = false;

        /* Transition: '<S704>:18' */
    }
    else
    {
        /* Transition: '<S704>:4' */
        rtb_LePLTR_b_MRM_Status_FA_out = true;
    }

    /* End of Chart: '<S165>/PokePLTR_e_MRM_StatusChrt' */

    /* Outport: '<Root>/VePLTR_b_MRM_Status_FA' incorporates:
     *  SignalConversion generated from: '<S165>/VePLTR_b_MRM_Status_FA'
     */
    (void)Rte_Write_VePLTR_b_MRM_Status_FA_Value(rtb_LePLTR_b_MRM_Status_FA_out);

    /* Outport: '<Root>/VePLTR_e_MRM_Status' incorporates:
     *  SignalConversion generated from: '<S165>/VePLTR_e_MRM_Status'
     */
    (void)Rte_Write_VePLTR_e_MRM_Status_Value(PLTR_ac_B.LePLTR_e_MRM_Status_out);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_e_MRM_Status' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_e_MRM_Status_C2(VAR(uint16, AUTOMATIC)
    LePLTR_e_MRM_Status_C2, VAR(boolean, AUTOMATIC) LePLTR_b_MRM_Status_C2_FA)
{
    boolean rtb_LePLTR_b_MRM_Status_C2_FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_e_MRM_Status_C2' */
    /* Chart: '<S166>/PokePLTR_e_MRM_Status_C2Chrt' incorporates:
     *  SignalConversion generated from: '<S166>/LePLTR_b_MRM_Status_C2_FA'
     *  SignalConversion generated from: '<S166>/LePLTR_e_MRM_Status_C2'
     */
    /* Gateway: PokePLTR_e_MRM_Status_C2/PokePLTR_e_MRM_Status_C2Chrt */
    /* During: PokePLTR_e_MRM_Status_C2/PokePLTR_e_MRM_Status_C2Chrt */
    /* Entry Internal: PokePLTR_e_MRM_Status_C2/PokePLTR_e_MRM_Status_C2Chrt */
    /* Transition: '<S705>:2' */
    if (!LePLTR_b_MRM_Status_C2_FA)
    {
        /* Transition: '<S705>:3' */
        /* Transition: '<S705>:15' */
        PLTR_ac_B.LePLTR_e_MRM_Status_C2_out = (TePLTR_e_MRM_Status)
            PLTR_ac_safe_cast_to_TePLTR_e_MRM_Status((uint8)
            LePLTR_e_MRM_Status_C2);
        rtb_LePLTR_b_MRM_Status_C2_FA_out = false;

        /* Transition: '<S705>:18' */
    }
    else
    {
        /* Transition: '<S705>:4' */
        rtb_LePLTR_b_MRM_Status_C2_FA_out = true;
    }

    /* End of Chart: '<S166>/PokePLTR_e_MRM_Status_C2Chrt' */

    /* Outport: '<Root>/VePLTR_e_MRM_Status_C2_FA' incorporates:
     *  SignalConversion generated from: '<S166>/VePLTR_b_MRM_Status_C2_FA'
     */
    (void)Rte_Write_VePLTR_e_MRM_Status_C2_FA_Value
        (rtb_LePLTR_b_MRM_Status_C2_FA_out);

    /* Outport: '<Root>/VePLTR_e_MRM_Status_C2' incorporates:
     *  SignalConversion generated from: '<S166>/VePLTR_e_MRM_Status_C2'
     */
    (void)Rte_Write_VePLTR_e_MRM_Status_C2_Value
        (PLTR_ac_B.LePLTR_e_MRM_Status_C2_out);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_e_MRM_Status_C2' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_e_ParkingGearShiftReq_BSM(VAR
    (TePLTR_e_ParkingGearShiftReq_BSM, AUTOMATIC)
    LePLTR_e_ParkingGearShiftReq_BSM, VAR(boolean, AUTOMATIC)
    LePLTR_b_ParkingGearShiftReq_BSM_FA)
{
    TePLTR_e_ParkingGearShiftReq_BSM rtb_LePLTR_e_ParkingGearShiftReq_BSM_out;
    boolean rtb_LePLTR_b_ParkingGearShiftReq_BSM_FA_;

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_e_ParkingGearShiftReq_BSM' */
    /* Chart: '<S167>/PokePLTR_e_ParkingGearShiftReq_BSMChrt' incorporates:
     *  SignalConversion generated from: '<S167>/LePLTR_b_SelectSpdStsFA'
     *  SignalConversion generated from: '<S167>/LePLTR_e_SelectSpdSts'
     */
    /* Gateway: PokePLTR_e_ParkingGearShiftReq_BSM/PokePLTR_e_ParkingGearShiftReq_BSMChrt */
    /* During: PokePLTR_e_ParkingGearShiftReq_BSM/PokePLTR_e_ParkingGearShiftReq_BSMChrt */
    /* Entry Internal: PokePLTR_e_ParkingGearShiftReq_BSM/PokePLTR_e_ParkingGearShiftReq_BSMChrt */
    /* Transition: '<S706>:2' */
    if (!LePLTR_b_ParkingGearShiftReq_BSM_FA)
    {
        /* Transition: '<S706>:3' */
        /* Transition: '<S706>:15' */
        rtb_LePLTR_e_ParkingGearShiftReq_BSM_out =
            LePLTR_e_ParkingGearShiftReq_BSM;
        rtb_LePLTR_b_ParkingGearShiftReq_BSM_FA_ = false;

        /* Transition: '<S706>:18' */
    }
    else
    {
        /* Transition: '<S706>:4' */
        rtb_LePLTR_b_ParkingGearShiftReq_BSM_FA_ = true;
        rtb_LePLTR_e_ParkingGearShiftReq_BSM_out = CePLTR_e_GearShiftReq_SNA;
    }

    /* End of Chart: '<S167>/PokePLTR_e_ParkingGearShiftReq_BSMChrt' */

    /* Outport: '<Root>/VePLTR_b_ParkingGearShiftReq_BSM_FA' incorporates:
     *  SignalConversion generated from: '<S167>/VePLTR_b_ParkingGearShiftReq_BSM_FA'
     */
    (void)Rte_Write_VePLTR_b_ParkingGearShiftReq_BSM_FA_Value
        (rtb_LePLTR_b_ParkingGearShiftReq_BSM_FA_);

    /* Outport: '<Root>/VePLTR_e_ParkingGearShiftReq_BSM' incorporates:
     *  SignalConversion generated from: '<S167>/VePLTR_e_ParkingGearShiftReq_BSM'
     */
    (void)Rte_Write_VePLTR_e_ParkingGearShiftReq_BSM_Value
        (rtb_LePLTR_e_ParkingGearShiftReq_BSM_out);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_e_ParkingGearShiftReq_BSM' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_e_Prmry_AutoPosCorrMd(VAR(TeTRGR_e_AutoPosCorrMd,
    AUTOMATIC) LePLTR_e_Prmry_AutoPosCorrMdRaw, VAR(boolean, AUTOMATIC)
    LePLTR_b_Prmry_AutoPosCorrMdFARaw)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_e_Prmry_AutoPosCorrMd' */
    /* Merge: '<Root>/Merge_117' incorporates:
     *  SignalConversion generated from: '<S168>/LePLTR_b_Prmry_AutoPosCorrMdFARaw'
     *  SignalConversion generated from: '<S168>/VePLTR_b_Prmry_AutoPosCorrMdFA_write'
     */
    /* Gateway: PokePLTR_e_Prmry_AutoPosCorrMd/PokePLTR_e_Prmry_AutoPosCorrMdChrt */
    /* During: PokePLTR_e_Prmry_AutoPosCorrMd/PokePLTR_e_Prmry_AutoPosCorrMdChrt */
    /* Entry Internal: PokePLTR_e_Prmry_AutoPosCorrMd/PokePLTR_e_Prmry_AutoPosCorrMdChrt */
    /* Transition: '<S708>:31' */
    Rte_IrvWrite_PokePLTR_e_Prmry_AutoPosCorrMd_VePLTR_b_Prmry_AutoPosCorrMdFA_write_IRV
        (LePLTR_b_Prmry_AutoPosCorrMdFARaw);

    /* Merge: '<Root>/Merge_116' incorporates:
     *  Chart: '<S168>/PokePLTR_e_Prmry_AutoPosCorrMdChrt'
     *  Constant: '<S707>/Calib'
     *  SignalConversion generated from: '<S168>/LePLTR_e_Prmry_AutoPosCorrMdRaw'
     *  SignalConversion generated from: '<S168>/VePLTR_e_Prmry_AutoPosCorrMd_write'
     */
    Rte_IrvWrite_PokePLTR_e_Prmry_AutoPosCorrMd_AutoPosCorrMd_Init_write_IRV
        (KaPLTR_e_AutoPosCorrMd_Map[(LePLTR_e_Prmry_AutoPosCorrMdRaw)]);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_e_Prmry_AutoPosCorrMd' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_e_Prmry_PRND_ValidatePstn(VAR
    (TeTRGR_e_TransRangeState, AUTOMATIC) LePLTR_e_Prmry_PRND_ValidatePstn, VAR
    (boolean, AUTOMATIC) LePLTR_b_Prmry_PRND_ValidatePstnFA)
{
    boolean rtb_LePLTR_b_Prmry_PRND_ValidatePstnFA_o;

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_e_Prmry_PRND_ValidatePstn' */
    /* Chart: '<S169>/PokePLTR_e_Prmry_PRND_ValidatePstnChrt' incorporates:
     *  Constant: '<S709>/Calib'
     *  SignalConversion generated from: '<S169>/LePLTR_b_Prmry_PRND_ValidatePstnFA'
     *  SignalConversion generated from: '<S169>/LePLTR_e_Prmry_PRND_ValidatePstn'
     */
    /* Gateway: PokePLTR_e_Prmry_PRND_ValidatePstn/PokePLTR_e_Prmry_PRND_ValidatePstnChrt */
    /* During: PokePLTR_e_Prmry_PRND_ValidatePstn/PokePLTR_e_Prmry_PRND_ValidatePstnChrt */
    /* Entry Internal: PokePLTR_e_Prmry_PRND_ValidatePstn/PokePLTR_e_Prmry_PRND_ValidatePstnChrt */
    /* Transition: '<S710>:2' */
    if (!LePLTR_b_Prmry_PRND_ValidatePstnFA)
    {
        /* Transition: '<S710>:3' */
        /* Transition: '<S710>:15' */
        PLTR_ac_B.LePLTR_e_Prmry_PRND_ValidatePstn_out =
            KaPLTR_e_Prmry_PRND_ValidatePstn_Map
            [(LePLTR_e_Prmry_PRND_ValidatePstn)];
        rtb_LePLTR_b_Prmry_PRND_ValidatePstnFA_o = false;

        /* Transition: '<S710>:18' */
    }
    else
    {
        /* Transition: '<S710>:4' */
        rtb_LePLTR_b_Prmry_PRND_ValidatePstnFA_o = true;
    }

    /* End of Chart: '<S169>/PokePLTR_e_Prmry_PRND_ValidatePstnChrt' */

    /* Merge: '<Root>/Merge_136' incorporates:
     *  SignalConversion generated from: '<S169>/VePLTR_b_Prmry_PRND_ValidatePstnFA_write'
     * */
    Rte_IrvWrite_PokePLTR_e_Prmry_PRND_ValidatePstn_VePLTR_b_Prmry_PRND_ValidatePstnFA_write_IRV
        (rtb_LePLTR_b_Prmry_PRND_ValidatePstnFA_o);

    /* Merge: '<Root>/Merge_135' incorporates:
     *  SignalConversion generated from: '<S169>/VePLTR_e_Prmry_PRND_ValidatePstn_write'
     * */
    Rte_IrvWrite_PokePLTR_e_Prmry_PRND_ValidatePstn_PRND_ValidatePstn_Init_write_IRV
        (PLTR_ac_B.LePLTR_e_Prmry_PRND_ValidatePstn_out);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_e_Prmry_PRND_ValidatePstn' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_e_Prmry_ShiftLeverPositionReq(VAR
    (TeTRGR_e_TransRangeState, AUTOMATIC)
    LePLTR_e_Prmry_ShiftLeverPositionReqRaw, VAR(boolean, AUTOMATIC)
    LePLTR_b_Prmry_ShiftLeverPositionReqFARaw)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_e_Prmry_ShiftLeverPositionReq' */
    /* Merge: '<Root>/Merge_126' incorporates:
     *  SignalConversion generated from: '<S170>/LePLTR_b_Prmry_ShiftLeverPositionReqFARaw'
     *  SignalConversion generated from: '<S170>/VePLTR_b_Prmry_ShiftLeverPositionReqFA_write'
     */
    /* Gateway: PokePLTR_e_Prmry_ShiftLeverPositionReq/PokePLTR_e_Prmry_ShiftLeverPositionReqChrt */
    /* During: PokePLTR_e_Prmry_ShiftLeverPositionReq/PokePLTR_e_Prmry_ShiftLeverPositionReqChrt */
    /* Entry Internal: PokePLTR_e_Prmry_ShiftLeverPositionReq/PokePLTR_e_Prmry_ShiftLeverPositionReqChrt */
    /* Transition: '<S712>:31' */
    Rte_IrvWrite_PokePLTR_e_Prmry_ShiftLeverPositionReq_VePLTR_b_Prmry_ShiftLeverPositionReqFA_write_IRV
        (LePLTR_b_Prmry_ShiftLeverPositionReqFARaw);

    /* Merge: '<Root>/Merge_125' incorporates:
     *  Chart: '<S170>/PokePLTR_e_Prmry_ShiftLeverPositionReqChrt'
     *  Constant: '<S711>/Calib'
     *  SignalConversion generated from: '<S170>/LePLTR_e_Prmry_ShiftLeverPositionReqRaw'
     *  SignalConversion generated from: '<S170>/VePLTR_e_Prmry_ShiftLeverPositionReq_write'
     */
    Rte_IrvWrite_PokePLTR_e_Prmry_ShiftLeverPositionReq_ShiftLeverPositionReq_Init_write_IRV
        (KaPLTR_e_Prmry_ShiftLeverPosition_Map
         [(LePLTR_e_Prmry_ShiftLeverPositionReqRaw)]);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_e_Prmry_ShiftLeverPositionReq' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_e_Prmry_TransShiftPstn(VAR
    (TeTRGR_e_TransRangeState, AUTOMATIC) LePLTR_e_Prmry_TransShiftPstn, VAR
    (boolean, AUTOMATIC) LePLTR_b_Prmry_TransShiftPstnFA)
{
    boolean rtb_LePLTR_b_Prmry_TransShiftPstnFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_e_Prmry_TransShiftPstn' */
    /* Chart: '<S171>/PokePLTR_e_Prmry_TransShiftPstnChrt' incorporates:
     *  Constant: '<S713>/Calib'
     *  SignalConversion generated from: '<S171>/LePLTR_b_Prmry_TransShiftPstnFA'
     *  SignalConversion generated from: '<S171>/LePLTR_e_Prmry_TransShiftPstn'
     */
    /* Gateway: PokePLTR_e_Prmry_TransShiftPstn/PokePLTR_e_Prmry_TransShiftPstnChrt */
    /* During: PokePLTR_e_Prmry_TransShiftPstn/PokePLTR_e_Prmry_TransShiftPstnChrt */
    /* Entry Internal: PokePLTR_e_Prmry_TransShiftPstn/PokePLTR_e_Prmry_TransShiftPstnChrt */
    /* Transition: '<S714>:2' */
    if (!LePLTR_b_Prmry_TransShiftPstnFA)
    {
        /* Transition: '<S714>:3' */
        /* Transition: '<S714>:15' */
        PLTR_ac_B.LePLTR_e_Prmry_TransShiftPstn_out =
            KaPLTR_e_Prmry_TransShiftPstn_Map[(LePLTR_e_Prmry_TransShiftPstn)];
        rtb_LePLTR_b_Prmry_TransShiftPstnFA_out = false;

        /* Transition: '<S714>:18' */
    }
    else
    {
        /* Transition: '<S714>:4' */
        rtb_LePLTR_b_Prmry_TransShiftPstnFA_out = true;
    }

    /* End of Chart: '<S171>/PokePLTR_e_Prmry_TransShiftPstnChrt' */

    /* Outport: '<Root>/VePLTR_b_Prmry_TransShiftPstnFA' incorporates:
     *  SignalConversion generated from: '<S171>/VePLTR_b_Prmry_TransShiftPstnFA'
     */
    (void)Rte_Write_VePLTR_b_Prmry_TransShiftPstnFA_Value
        (rtb_LePLTR_b_Prmry_TransShiftPstnFA_out);

    /* Outport: '<Root>/VePLTR_e_Prmry_TransShiftPstn' incorporates:
     *  SignalConversion generated from: '<S171>/VePLTR_e_Prmry_TransShiftPstn'
     */
    (void)Rte_Write_VePLTR_e_Prmry_TransShiftPstn_Value
        (PLTR_ac_B.LePLTR_e_Prmry_TransShiftPstn_out);

    /* Merge: '<Root>/Merge_133_Irv' incorporates:
     *  SignalConversion generated from: '<S171>/VePLTR_b_Prmry_TransShiftPstnFA_write'
     * */
    Rte_IrvWrite_PokePLTR_e_Prmry_TransShiftPstn_VePLTR_b_Prmry_TransShiftPstnFA_write_IRV
        (rtb_LePLTR_b_Prmry_TransShiftPstnFA_out);

    /* Merge: '<Root>/Merge_132_Irv' incorporates:
     *  SignalConversion generated from: '<S171>/VePLTR_e_Prmry_TransShiftPstn_write'
     * */
    Rte_IrvWrite_PokePLTR_e_Prmry_TransShiftPstn_TransShiftPosInitMSG_write_IRV
        (PLTR_ac_B.LePLTR_e_Prmry_TransShiftPstn_out);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_e_Prmry_TransShiftPstn' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_e_Scndry_AutoPosCorrMd(VAR(TeTRGR_e_AutoPosCorrMd,
    AUTOMATIC) LePLTR_e_Scndry_AutoPosCorrMdRaw, VAR(boolean, AUTOMATIC)
    LePLTR_b_Scndry_AutoPosCorrMdFARaw)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_e_Scndry_AutoPosCorrMd' */
    /* Merge: '<Root>/Merge_106' incorporates:
     *  SignalConversion generated from: '<S172>/LePLTR_b_Scndry_AutoPosCorrMdFARaw'
     *  SignalConversion generated from: '<S172>/VePLTR_b_Scndry_AutoPosCorrMdFA_write'
     */
    /* Gateway: PokePLTR_e_Scndry_AutoPosCorrMd/PokePLTR_e_Scndry_AutoPosCorrMdChrt */
    /* During: PokePLTR_e_Scndry_AutoPosCorrMd/PokePLTR_e_Scndry_AutoPosCorrMdChrt */
    /* Entry Internal: PokePLTR_e_Scndry_AutoPosCorrMd/PokePLTR_e_Scndry_AutoPosCorrMdChrt */
    /* Transition: '<S716>:31' */
    Rte_IrvWrite_PokePLTR_e_Scndry_AutoPosCorrMd_VePLTR_b_Scndry_AutoPosCorrMdFA_write_IRV
        (LePLTR_b_Scndry_AutoPosCorrMdFARaw);

    /* Merge: '<Root>/Merge_105' incorporates:
     *  Chart: '<S172>/PokePLTR_e_Scndry_AutoPosCorrMdChrt'
     *  Constant: '<S715>/Calib'
     *  SignalConversion generated from: '<S172>/LePLTR_e_Scndry_AutoPosCorrMdRaw'
     *  SignalConversion generated from: '<S172>/VePLTR_e_Scndry_AutoPosCorrMd_write'
     */
    Rte_IrvWrite_PokePLTR_e_Scndry_AutoPosCorrMd_AutoPosCorrMd_Ini_write_IRV
        (KaPLTR_e_AutoPosCorrMd_Map[(LePLTR_e_Scndry_AutoPosCorrMdRaw)]);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_e_Scndry_AutoPosCorrMd' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_e_Scndry_PRND_ValidatePstn(VAR
    (TeTRGR_e_TransRangeState, AUTOMATIC) LePLTR_e_Scndry_PRND_ValidatePstn, VAR
    (boolean, AUTOMATIC) LePLTR_b_Scndry_PRND_ValidatePstnFA)
{
    boolean rtb_LePLTR_b_Scndry_PRND_ValidatePstnFA_;

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_e_Scndry_PRND_ValidatePstn' */
    /* Chart: '<S173>/PokePLTR_e_Scndry_PRND_ValidatePstnChrt' incorporates:
     *  Constant: '<S717>/Calib'
     *  SignalConversion generated from: '<S173>/LePLTR_b_Scndry_PRND_ValidatePstnFA'
     *  SignalConversion generated from: '<S173>/LePLTR_e_Scndry_PRND_ValidatePstn'
     */
    /* Gateway: PokePLTR_e_Scndry_PRND_ValidatePstn/PokePLTR_e_Scndry_PRND_ValidatePstnChrt */
    /* During: PokePLTR_e_Scndry_PRND_ValidatePstn/PokePLTR_e_Scndry_PRND_ValidatePstnChrt */
    /* Entry Internal: PokePLTR_e_Scndry_PRND_ValidatePstn/PokePLTR_e_Scndry_PRND_ValidatePstnChrt */
    /* Transition: '<S718>:2' */
    if (!LePLTR_b_Scndry_PRND_ValidatePstnFA)
    {
        /* Transition: '<S718>:3' */
        /* Transition: '<S718>:15' */
        PLTR_ac_B.LePLTR_e_Scndry_PRND_ValidatePstn_out =
            KaPLTR_e_Scndry_PRND_ValidatePstn_Map
            [(LePLTR_e_Scndry_PRND_ValidatePstn)];
        rtb_LePLTR_b_Scndry_PRND_ValidatePstnFA_ = false;

        /* Transition: '<S718>:18' */
    }
    else
    {
        /* Transition: '<S718>:4' */
        rtb_LePLTR_b_Scndry_PRND_ValidatePstnFA_ = true;
    }

    /* End of Chart: '<S173>/PokePLTR_e_Scndry_PRND_ValidatePstnChrt' */

    /* Merge: '<Root>/Merge_130' incorporates:
     *  SignalConversion generated from: '<S173>/VePLTR_b_Scndry_PRND_ValidatePstnFA_write'
     * */
    Rte_IrvWrite_PokePLTR_e_Scndry_PRND_ValidatePstn_VePLTR_b_Scndry_PRND_ValidatePstnFA_write_IRV
        (rtb_LePLTR_b_Scndry_PRND_ValidatePstnFA_);

    /* Merge: '<Root>/Merge_129' incorporates:
     *  SignalConversion generated from: '<S173>/VePLTR_e_Scndry_PRND_ValidatePstn_write'
     * */
    Rte_IrvWrite_PokePLTR_e_Scndry_PRND_ValidatePstn_PRND_ValidatePstn_InitSndry_write_IRV
        (PLTR_ac_B.LePLTR_e_Scndry_PRND_ValidatePstn_out);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_e_Scndry_PRND_ValidatePstn' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_e_Scndry_ShiftLeverPositionReq(VAR
    (TeTRGR_e_TransRangeState, AUTOMATIC)
    LePLTR_e_Scndry_ShiftLeverPositionReqRaw, VAR(boolean, AUTOMATIC)
    LePLTR_b_Scndry_ShiftLeverPositionReqFARaw)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_e_Scndry_ShiftLeverPositionReq' */
    /* Merge: '<Root>/Merge_118' incorporates:
     *  SignalConversion generated from: '<S174>/LePLTR_b_Scndry_ShiftLeverPositionReqFARaw'
     *  SignalConversion generated from: '<S174>/VePLTR_b_Scndry_ShiftLeverPositionReqFA_write'
     */
    /* Gateway: PokePLTR_e_Scndry_ShiftLeverPositionReq/PokePLTR_e_Scndry_ShiftLeverPositionReqChrt */
    /* During: PokePLTR_e_Scndry_ShiftLeverPositionReq/PokePLTR_e_Scndry_ShiftLeverPositionReqChrt */
    /* Entry Internal: PokePLTR_e_Scndry_ShiftLeverPositionReq/PokePLTR_e_Scndry_ShiftLeverPositionReqChrt */
    /* Transition: '<S720>:31' */
    Rte_IrvWrite_PokePLTR_e_Scndry_ShiftLeverPositionReq_VePLTR_b_Scndry_ShiftLeverPositionReqFA_write_IRV
        (LePLTR_b_Scndry_ShiftLeverPositionReqFARaw);

    /* Merge: '<Root>/Merge_113' incorporates:
     *  Chart: '<S174>/PokePLTR_e_Scndry_ShiftLeverPositionReqChrt'
     *  Constant: '<S719>/Calib'
     *  SignalConversion generated from: '<S174>/LePLTR_e_Scndry_ShiftLeverPositionReqRaw'
     *  SignalConversion generated from: '<S174>/VePLTR_e_Scndry_ShiftLeverPositionReq_write'
     */
    Rte_IrvWrite_PokePLTR_e_Scndry_ShiftLeverPositionReq_ShiftLeverPositionReq_Ini_write_IRV
        (KaPLTR_e_Scndry_ShiftLeverPosition_Map
         [(LePLTR_e_Scndry_ShiftLeverPositionReqRaw)]);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_e_Scndry_ShiftLeverPositionReq' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_e_Scndry_TransShiftPstn(VAR
    (TeTRGR_e_TransRangeState, AUTOMATIC) LePLTR_e_Scndry_TransShiftPstn, VAR
    (boolean, AUTOMATIC) LePLTR_b_Scndry_TransShiftPstnFA)
{
    boolean rtb_LePLTR_b_Scndry_TransShiftPstnFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_e_Scndry_TransShiftPstn' */
    /* Chart: '<S175>/PokePLTR_e_Scndry_TransShiftPstnChrt' incorporates:
     *  Constant: '<S721>/Calib'
     *  SignalConversion generated from: '<S175>/LePLTR_b_Scndry_TransShiftPstnFA'
     *  SignalConversion generated from: '<S175>/LePLTR_e_Scndry_TransShiftPstn'
     */
    /* Gateway: PokePLTR_e_Scndry_TransShiftPstn/PokePLTR_e_Scndry_TransShiftPstnChrt */
    /* During: PokePLTR_e_Scndry_TransShiftPstn/PokePLTR_e_Scndry_TransShiftPstnChrt */
    /* Entry Internal: PokePLTR_e_Scndry_TransShiftPstn/PokePLTR_e_Scndry_TransShiftPstnChrt */
    /* Transition: '<S722>:2' */
    if (!LePLTR_b_Scndry_TransShiftPstnFA)
    {
        /* Transition: '<S722>:3' */
        /* Transition: '<S722>:15' */
        PLTR_ac_B.LePLTR_e_Scndry_TransShiftPstn_out =
            KaPLTR_e_Scndry_TransShiftPstn_Map[(LePLTR_e_Scndry_TransShiftPstn)];
        rtb_LePLTR_b_Scndry_TransShiftPstnFA_out = false;

        /* Transition: '<S722>:18' */
    }
    else
    {
        /* Transition: '<S722>:4' */
        rtb_LePLTR_b_Scndry_TransShiftPstnFA_out = true;
    }

    /* End of Chart: '<S175>/PokePLTR_e_Scndry_TransShiftPstnChrt' */

    /* Outport: '<Root>/VePLTR_b_Scndry_TransShiftPstnFA' incorporates:
     *  SignalConversion generated from: '<S175>/VePLTR_b_Scndry_TransShiftPstnFA'
     */
    (void)Rte_Write_VePLTR_b_Scndry_TransShiftPstnFA_Value
        (rtb_LePLTR_b_Scndry_TransShiftPstnFA_out);

    /* Outport: '<Root>/VePLTR_e_Scndry_TransShiftPstn' incorporates:
     *  SignalConversion generated from: '<S175>/VePLTR_e_Scndry_TransShiftPstn'
     */
    (void)Rte_Write_VePLTR_e_Scndry_TransShiftPstn_Value
        (PLTR_ac_B.LePLTR_e_Scndry_TransShiftPstn_out);

    /* Merge: '<Root>/Merge_128_Irv' incorporates:
     *  SignalConversion generated from: '<S175>/VePLTR_b_Scndry_TransShiftPstnFA_write'
     * */
    Rte_IrvWrite_PokePLTR_e_Scndry_TransShiftPstn_VePLTR_b_Scndry_TransShiftPstnFA_write_IRV
        (rtb_LePLTR_b_Scndry_TransShiftPstnFA_out);

    /* Merge: '<Root>/Merge_127_Irv' incorporates:
     *  SignalConversion generated from: '<S175>/VePLTR_e_Scndry_TransShiftPstn_write'
     * */
    Rte_IrvWrite_PokePLTR_e_Scndry_TransShiftPstn_TransShiftPos_InitMSG_write_IRV
        (PLTR_ac_B.LePLTR_e_Scndry_TransShiftPstn_out);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_e_Scndry_TransShiftPstn' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_e_SelectSpdSts(VAR(TePLTR_e_SelectSpdSts,
    AUTOMATIC) LePLTR_e_SelectSpdSts, VAR(boolean, AUTOMATIC)
    LePLTR_b_SelectSpdStsFA)
{
    TePLTR_e_SelectSpdSts rtb_LePLTR_e_SelectSpdSts_out;
    boolean rtb_LePLTR_b_SelectSpdStsFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_e_SelectSpdSts' */
    /* Chart: '<S176>/PokePLTR_e_SelectSpdStsChrt' incorporates:
     *  SignalConversion generated from: '<S176>/LePLTR_b_SelectSpdStsFA'
     *  SignalConversion generated from: '<S176>/LePLTR_e_SelectSpdSts'
     */
    /* Gateway: PokePLTR_e_SelectSpdSts/PokePLTR_e_SelectSpdStsChrt */
    /* During: PokePLTR_e_SelectSpdSts/PokePLTR_e_SelectSpdStsChrt */
    /* Entry Internal: PokePLTR_e_SelectSpdSts/PokePLTR_e_SelectSpdStsChrt */
    /* Transition: '<S723>:2' */
    if (!LePLTR_b_SelectSpdStsFA)
    {
        /* Transition: '<S723>:3' */
        /* Transition: '<S723>:15' */
        rtb_LePLTR_e_SelectSpdSts_out = LePLTR_e_SelectSpdSts;
        rtb_LePLTR_b_SelectSpdStsFA_out = false;

        /* Transition: '<S723>:18' */
    }
    else
    {
        /* Transition: '<S723>:4' */
        rtb_LePLTR_b_SelectSpdStsFA_out = true;
        rtb_LePLTR_e_SelectSpdSts_out = CePLTR_e_SelectSpdSts_SNA;
    }

    /* End of Chart: '<S176>/PokePLTR_e_SelectSpdStsChrt' */

    /* Outport: '<Root>/VePLTR_b_SelectSpdSts_FA' incorporates:
     *  SignalConversion generated from: '<S176>/VePLTR_b_SelectSpdStsFA'
     */
    (void)Rte_Write_VePLTR_b_SelectSpdSts_FA_Value
        (rtb_LePLTR_b_SelectSpdStsFA_out);

    /* Outport: '<Root>/VePLTR_e_SelectSpdSts' incorporates:
     *  SignalConversion generated from: '<S176>/VePLTR_e_SelectSpdSts'
     */
    (void)Rte_Write_VePLTR_e_SelectSpdSts_Value(rtb_LePLTR_e_SelectSpdSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_e_SelectSpdSts' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_e_ShipingMode(VAR(sint16, AUTOMATIC) LeShpngMd)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_e_ShipingMode' */
    /* Outport: '<Root>/VePLTR_i_ShippingModeRaw' incorporates:
     *  SignalConversion generated from: '<S177>/VePLTR_e_ShipingModeRaw'
     *  SignalConversion generated from: '<S177>/LeShpngMd'
     */
    /* Gateway: PokePLTR_e_ShipingMode/PokePLTR_e_ShipingModeChrt */
    /* During: PokePLTR_e_ShipingMode/PokePLTR_e_ShipingModeChrt */
    /* Entry Internal: PokePLTR_e_ShipingMode/PokePLTR_e_ShipingModeChrt */
    /* Transition: '<S725>:31' */
    (void)Rte_Write_VePLTR_i_ShippingModeRaw_Value(LeShpngMd);

    /* Merge: '<Root>/Merge_41' incorporates:
     *  Chart: '<S177>/PokePLTR_e_ShipingModeChrt'
     *  Constant: '<S724>/Calib'
     *  SignalConversion generated from: '<S177>/LeShpngMd'
     *  SignalConversion generated from: '<S177>/VePLTR_e_ShipingMode_write'
     */
    Rte_IrvWrite_PokePLTR_e_ShipingMode_VePLTI_e_ShippingMode_write_IRV
        (KaPLTR_e_ShipingMode_Map[(LeShpngMd)]);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_e_ShipingMode' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_e_TowHaulMode(VAR(TePLTR_e_Towing_MD_RQ,
    AUTOMATIC) LePLTR_e_TowHaulMode, VAR(boolean, AUTOMATIC)
    LePLTR_b_TowHaulModeFA)
{
    TePLTR_e_Towing_MD_RQ rtb_LePLTR_e_TowHaulMode_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_e_TowHaulMode' */
    /* Chart: '<S178>/PokePLTR_e_TowHaulModeChrt' incorporates:
     *  Constant: '<S726>/Calib'
     *  SignalConversion generated from: '<S178>/LePLTR_b_TowHaulModeFA'
     *  SignalConversion generated from: '<S178>/LePLTR_e_TowHaulMode'
     */
    /* Gateway: PokePLTR_e_TowHaulMode/PokePLTR_e_TowHaulModeChrt */
    /* During: PokePLTR_e_TowHaulMode/PokePLTR_e_TowHaulModeChrt */
    /* Entry Internal: PokePLTR_e_TowHaulMode/PokePLTR_e_TowHaulModeChrt */
    /* Transition: '<S727>:2' */
    if (!LePLTR_b_TowHaulModeFA)
    {
        /* Transition: '<S727>:3' */
        /* Transition: '<S727>:15' */
        rtb_LePLTR_e_TowHaulMode_out = KaPLTR_e_TowHaulMode_Map
            [(LePLTR_e_TowHaulMode)];

        /* Transition: '<S727>:18' */
    }
    else
    {
        /* Transition: '<S727>:4' */
        rtb_LePLTR_e_TowHaulMode_out = CePLTR_e_Towing_MD_RQ_OFF;
    }

    /* End of Chart: '<S178>/PokePLTR_e_TowHaulModeChrt' */

    /* Outport: '<Root>/VePLTR_e_TowHaulMode' incorporates:
     *  SignalConversion generated from: '<S178>/VePLTR_e_TowHaulMode'
     */
    (void)Rte_Write_VePLTR_e_TowHaulMode_Value(rtb_LePLTR_e_TowHaulMode_out);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_e_TowHaulMode' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_e_V2GOprStat(VAR(TePLTR_e_V2GOprStat, AUTOMATIC)
    LePLTR_e_V2GOprStat, VAR(boolean, AUTOMATIC) LePLTR_b_V2GOprStatFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_e_V2GOprStat' */
    /* Chart: '<S179>/PokePLTR_e_V2GOprStatChrt' incorporates:
     *  Constant: '<S728>/Calib'
     *  SignalConversion generated from: '<S179>/LePLTR_b_V2GOprStatFA'
     *  SignalConversion generated from: '<S179>/LePLTR_e_V2GOprStat'
     */
    /* Gateway: PokePLTR_e_V2GOprStat/PokePLTR_e_V2GOprStatChrt */
    /* During: PokePLTR_e_V2GOprStat/PokePLTR_e_V2GOprStatChrt */
    /* Entry Internal: PokePLTR_e_V2GOprStat/PokePLTR_e_V2GOprStatChrt */
    /* Transition: '<S729>:2' */
    if (!LePLTR_b_V2GOprStatFA)
    {
        /* Transition: '<S729>:3' */
        /* Transition: '<S729>:15' */
        PLTR_ac_B.LePLTR_e_V2GOprStat_out = KaPLTR_e_V2GOprStat_Map
            [(LePLTR_e_V2GOprStat)];

        /* Transition: '<S729>:18' */
    }
    else
    {
        /* Transition: '<S729>:4' */
    }

    /* End of Chart: '<S179>/PokePLTR_e_V2GOprStatChrt' */

    /* Outport: '<Root>/VePLTR_e_V2GOprStat' incorporates:
     *  SignalConversion generated from: '<S179>/VePLTR_e_V2GOprStat'
     */
    (void)Rte_Write_VePLTR_e_V2GOprStat_Value(PLTR_ac_B.LePLTR_e_V2GOprStat_out);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_e_V2GOprStat' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_e_VehCfgSt(VAR(TePLTR_e_VehCfgSt, AUTOMATIC)
    LePLTR_e_VehCfgSt)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_e_VehCfgSt' */
    /* Outport: '<Root>/VePLTR_e_VehCfgSt' incorporates:
     *  SignalConversion generated from: '<S180>/VePLTR_e_VehCfgSt'
     *  SignalConversion generated from: '<S180>/LePLTR_e_VehCfgSt'
     */
    /* Gateway: PokePLTR_e_VehCfgSt/PokePLTR_e_VehCfgStChrt */
    /* During: PokePLTR_e_VehCfgSt/PokePLTR_e_VehCfgStChrt */
    /* Entry Internal: PokePLTR_e_VehCfgSt/PokePLTR_e_VehCfgStChrt */
    /* Transition: '<S730>:2' */
    (void)Rte_Write_VePLTR_e_VehCfgSt_Value(LePLTR_e_VehCfgSt);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_e_VehCfgSt' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_e_Worksite_Inverter_Sts(VAR(uint8, AUTOMATIC)
    LePLTR_e_Worksite_Inverter_Sts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_e_Worksite_Inverter_Sts' */
    /* Outport: '<Root>/VePLTR_e_Worksite_Inverter_Sts' incorporates:
     *  Chart: '<S181>/PokePLTR_e_Worksite_Inverter_StsChrt'
     *  SignalConversion generated from: '<S181>/VePLTR_e_Worksite_Inverter_Sts'
     *  SignalConversion generated from: '<S181>/LePLTR_e_Worksite_Inverter_Sts'
     */
    /* Gateway: PokePLTR_e_Worksite_Inverter_Sts/PokePLTR_e_Worksite_Inverter_StsChrt */
    /* During: PokePLTR_e_Worksite_Inverter_Sts/PokePLTR_e_Worksite_Inverter_StsChrt */
    /* Entry Internal: PokePLTR_e_Worksite_Inverter_Sts/PokePLTR_e_Worksite_Inverter_StsChrt */
    /* Transition: '<S731>:2' */
    (void)Rte_Write_VePLTR_e_Worksite_Inverter_Sts_Value((TePLTR_e_WSInverterSts)
        PLTR_safe_cast_to_TePLTR_e_WSInverterSts(LePLTR_e_Worksite_Inverter_Sts));

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_e_Worksite_Inverter_Sts' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_e_eBurn_Stages(VAR(uint8, AUTOMATIC)
    LePLTR_e_eBurn_Stages, VAR(boolean, AUTOMATIC) LePLTR_b_eBurn_Stages_FA)
{
    TePLTR_e_eBurn_Stages rtb_LePLTR_e_eBurn_Stages_out;
    boolean rtb_LePLTR_b_eBurn_Stages_FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_e_eBurn_Stages' */
    /* Chart: '<S182>/PokePLTR_e_eBurn_StagesChrt' incorporates:
     *  SignalConversion generated from: '<S182>/LePLTR_b_eBurn_Stages_FA'
     *  SignalConversion generated from: '<S182>/LePLTR_e_eBurn_Stages'
     */
    /* Gateway: PokePLTR_e_eBurn_Stages/PokePLTR_e_eBurn_StagesChrt */
    /* During: PokePLTR_e_eBurn_Stages/PokePLTR_e_eBurn_StagesChrt */
    /* Entry Internal: PokePLTR_e_eBurn_Stages/PokePLTR_e_eBurn_StagesChrt */
    /* Transition: '<S732>:2' */
    if (!LePLTR_b_eBurn_Stages_FA)
    {
        /* Transition: '<S732>:3' */
        /* Transition: '<S732>:15' */
        rtb_LePLTR_e_eBurn_Stages_out = (TePLTR_e_eBurn_Stages)
            PLTR__safe_cast_to_TePLTR_e_eBurn_Stages(LePLTR_e_eBurn_Stages);
        rtb_LePLTR_b_eBurn_Stages_FA_out = false;

        /* Transition: '<S732>:18' */
    }
    else
    {
        /* Transition: '<S732>:4' */
        rtb_LePLTR_b_eBurn_Stages_FA_out = true;
        rtb_LePLTR_e_eBurn_Stages_out = CePLTR_e_eBurn_SNA;
    }

    /* End of Chart: '<S182>/PokePLTR_e_eBurn_StagesChrt' */

    /* Outport: '<Root>/VePLTR_b_eBurn_Stages_FA' incorporates:
     *  SignalConversion generated from: '<S182>/VePLTR_b_eBurn_Stages_FA_out'
     */
    (void)Rte_Write_VePLTR_b_eBurn_Stages_FA_Value
        (rtb_LePLTR_b_eBurn_Stages_FA_out);

    /* Outport: '<Root>/VePLTR_e_eBurn_Stages' incorporates:
     *  SignalConversion generated from: '<S182>/VePLTR_e_eBurn_Stages_out'
     */
    (void)Rte_Write_VePLTR_e_eBurn_Stages_Value(rtb_LePLTR_e_eBurn_Stages_out);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_e_eBurn_Stages' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_l_Odometer_Km(VAR(float32, AUTOMATIC)
    LePLTR_l_Odometer_Km, VAR(boolean, AUTOMATIC) LePLTR_b_Odometer_KmFA)
{
    boolean rtb_LePLTR_b_Odometer_KmFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_l_Odometer_Km' */
    /* Chart: '<S183>/PokePLTR_l_Odometer_KmChrt' incorporates:
     *  SignalConversion generated from: '<S183>/LePLTR_b_Odometer_KmFA'
     *  SignalConversion generated from: '<S183>/LePLTR_l_Odometer_Km'
     */
    /* Gateway: PokePLTR_l_Odometer_Km/PokePLTR_l_Odometer_KmChrt */
    /* During: PokePLTR_l_Odometer_Km/PokePLTR_l_Odometer_KmChrt */
    /* Entry Internal: PokePLTR_l_Odometer_Km/PokePLTR_l_Odometer_KmChrt */
    /* Transition: '<S733>:2' */
    if (!LePLTR_b_Odometer_KmFA)
    {
        /* Transition: '<S733>:3' */
        /* Transition: '<S733>:15' */
        PLTR_ac_B.LePLTR_l_Odometer_Km_out = LePLTR_l_Odometer_Km;
        rtb_LePLTR_b_Odometer_KmFA_out = false;

        /* Transition: '<S733>:18' */
    }
    else
    {
        /* Transition: '<S733>:4' */
        rtb_LePLTR_b_Odometer_KmFA_out = true;
    }

    /* End of Chart: '<S183>/PokePLTR_l_Odometer_KmChrt' */

    /* Outport: '<Root>/VePLTR_b_Odometer_KmFA' incorporates:
     *  SignalConversion generated from: '<S183>/VePLTR_b_Odometer_KmFA'
     */
    (void)Rte_Write_VePLTR_b_Odometer_KmFA_Value(rtb_LePLTR_b_Odometer_KmFA_out);

    /* Outport: '<Root>/VePLTR_kl_Odometer_Km' incorporates:
     *  SignalConversion generated from: '<S183>/VePLTR_l_Odometer_Km'
     */
    (void)Rte_Write_VePLTR_kl_Odometer_Km_Value
        (PLTR_ac_B.LePLTR_l_Odometer_Km_out);

    /* Merge: '<Root>/Merge_42' incorporates:
     *  SignalConversion generated from: '<S183>/VePLTR_l_Odometer_Km_write'
     * */
    Rte_IrvWrite_PokePLTR_l_Odometer_Km_VePLTI_kl_Odometer_Km_write_IRV
        (PLTR_ac_B.LePLTR_l_Odometer_Km_out);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_l_Odometer_Km' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_l_TravelDistance(VAR(float32, AUTOMATIC)
    LePLTR_l_TravelDistance, VAR(boolean, AUTOMATIC) LePLTR_b_TravelDistance_FA)
{
    boolean rtb_LePLTR_b_TravelDistance_FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_l_TravelDistance' */
    /* Chart: '<S184>/PokePLTR_l_TravelDistanceChrt' incorporates:
     *  SignalConversion generated from: '<S184>/LePLTR_b_TravelDistance_FA'
     *  SignalConversion generated from: '<S184>/LePLTR_l_TravelDistance'
     */
    /* Gateway: PokePLTR_l_TravelDistance/PokePLTR_l_TravelDistanceChrt */
    /* During: PokePLTR_l_TravelDistance/PokePLTR_l_TravelDistanceChrt */
    /* Entry Internal: PokePLTR_l_TravelDistance/PokePLTR_l_TravelDistanceChrt */
    /* Transition: '<S734>:2' */
    if (!LePLTR_b_TravelDistance_FA)
    {
        /* Transition: '<S734>:3' */
        /* Transition: '<S734>:15' */
        PLTR_ac_B.LePLTR_l_TravelDistance_out = LePLTR_l_TravelDistance;
        rtb_LePLTR_b_TravelDistance_FA_out = false;

        /* Transition: '<S734>:18' */
    }
    else
    {
        /* Transition: '<S734>:4' */
        rtb_LePLTR_b_TravelDistance_FA_out = true;
    }

    /* End of Chart: '<S184>/PokePLTR_l_TravelDistanceChrt' */

    /* Outport: '<Root>/VePLTR_b_TravelDistance_FA' incorporates:
     *  SignalConversion generated from: '<S184>/VePLTR_b_TravelDistance_FA'
     */
    (void)Rte_Write_VePLTR_b_TravelDistance_FA_Value
        (rtb_LePLTR_b_TravelDistance_FA_out);

    /* Outport: '<Root>/VePLTR_l_TravelDistance' incorporates:
     *  SignalConversion generated from: '<S184>/VePLTR_l_TravelDistance'
     */
    (void)Rte_Write_VePLTR_l_TravelDistance_Value
        (PLTR_ac_B.LePLTR_l_TravelDistance_out);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_l_TravelDistance' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_p_AmbientAirPrs(VAR(float32, AUTOMATIC)
    LePLTR_p_AmbientAirPrs, VAR(boolean, AUTOMATIC) LePLTR_b_AmbientAirPrsFA)
{
    float32 rtb_LePLTR_p_AmbientAirPrs_out;
    boolean rtb_LePLTR_b_AmbientAirPrsFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_p_AmbientAirPrs' */
    /* Chart: '<S185>/PokePLTR_p_AmbientAirPrsChrt' incorporates:
     *  SignalConversion generated from: '<S185>/LePLTR_b_AmbientAirPrsFA'
     *  SignalConversion generated from: '<S185>/LePLTR_p_AmbientAirPrs'
     */
    /* Gateway: PokePLTR_p_AmbientAirPrs/PokePLTR_p_AmbientAirPrsChrt */
    /* During: PokePLTR_p_AmbientAirPrs/PokePLTR_p_AmbientAirPrsChrt */
    /* Entry Internal: PokePLTR_p_AmbientAirPrs/PokePLTR_p_AmbientAirPrsChrt */
    /* Transition: '<S735>:2' */
    if (!LePLTR_b_AmbientAirPrsFA)
    {
        /* Transition: '<S735>:3' */
        /* Transition: '<S735>:15' */
        rtb_LePLTR_p_AmbientAirPrs_out = LePLTR_p_AmbientAirPrs;
        rtb_LePLTR_b_AmbientAirPrsFA_out = false;

        /* Transition: '<S735>:18' */
    }
    else
    {
        /* Transition: '<S735>:4' */
        rtb_LePLTR_p_AmbientAirPrs_out = KePLTR_p_AmbientAirDflt;
        rtb_LePLTR_b_AmbientAirPrsFA_out = true;
    }

    /* End of Chart: '<S185>/PokePLTR_p_AmbientAirPrsChrt' */

    /* Outport: '<Root>/VePLTR_b_AmbientAirPrsFA' incorporates:
     *  SignalConversion generated from: '<S185>/VePLTR_b_AmbientAirPrsFA'
     */
    (void)Rte_Write_VePLTR_b_AmbientAirPrsFA_Value
        (rtb_LePLTR_b_AmbientAirPrsFA_out);

    /* Outport: '<Root>/VePLTR_p_AmbientAirPrs' incorporates:
     *  SignalConversion generated from: '<S185>/VePLTR_p_AmbientAirPrs'
     */
    (void)Rte_Write_VePLTR_p_AmbientAirPrs_Value(rtb_LePLTR_p_AmbientAirPrs_out);

    /* Merge: '<Root>/Merge_12_Irv' incorporates:
     *  SignalConversion generated from: '<S185>/VePLTR_p_AmbientAirPrs_write'
     * */
    Rte_IrvWrite_PokePLTR_p_AmbientAirPrs_VePLTR_p_AmbientAirPrs_write_IRV
        (rtb_LePLTR_p_AmbientAirPrs_out);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_p_AmbientAirPrs' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_phi_LwsAngle(VAR(float32, AUTOMATIC)
    LePLTR_phi_LwsAngle, VAR(boolean, AUTOMATIC) LePLTR_b_LwsAngleFA)
{
    boolean rtb_LePLTR_b_LwsAngleFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_phi_LwsAngle' */
    /* Chart: '<S186>/PokePLTR_phi_LwsAngleChrt' incorporates:
     *  SignalConversion generated from: '<S186>/LePLTR_b_LwsAngleFA'
     *  SignalConversion generated from: '<S186>/LePLTR_phi_LwsAngle'
     */
    /* Gateway: PokePLTR_phi_LwsAngle/PokePLTR_phi_LwsAngleChrt */
    /* During: PokePLTR_phi_LwsAngle/PokePLTR_phi_LwsAngleChrt */
    /* Entry Internal: PokePLTR_phi_LwsAngle/PokePLTR_phi_LwsAngleChrt */
    /* Transition: '<S736>:2' */
    if (!LePLTR_b_LwsAngleFA)
    {
        /* Transition: '<S736>:3' */
        /* Transition: '<S736>:15' */
        PLTR_ac_B.LePLTR_phi_LwsAngle_out = LePLTR_phi_LwsAngle;
        rtb_LePLTR_b_LwsAngleFA_out = false;

        /* Transition: '<S736>:18' */
    }
    else
    {
        /* Transition: '<S736>:4' */
        rtb_LePLTR_b_LwsAngleFA_out = true;
    }

    /* End of Chart: '<S186>/PokePLTR_phi_LwsAngleChrt' */

    /* Outport: '<Root>/VePLTR_b_LwsAngleFA' incorporates:
     *  SignalConversion generated from: '<S186>/VePLTR_b_LwsAngleFA'
     */
    (void)Rte_Write_VePLTR_b_LwsAngleFA_Value(rtb_LePLTR_b_LwsAngleFA_out);

    /* Outport: '<Root>/VePLTR_phi_LwsAngle' incorporates:
     *  SignalConversion generated from: '<S186>/VePLTR_phi_LwsAngle'
     */
    (void)Rte_Write_VePLTR_phi_LwsAngle_Value(PLTR_ac_B.LePLTR_phi_LwsAngle_out);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_phi_LwsAngle' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_t_GPS_UTC_Second(VAR(float32, AUTOMATIC)
    LePLTR_t_GPS_UTC_Second, VAR(boolean, AUTOMATIC) LePLTR_b_GPS_UTC_Second_FA)
{
    boolean rtb_LePLTR_b_GPS_UTC_Second_FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_t_GPS_UTC_Second' */
    /* Chart: '<S187>/PokePLTR_t_GPS_UTC_SecondChrt' incorporates:
     *  SignalConversion generated from: '<S187>/LePLTR_b_GPS_Date_Day_FA'
     *  SignalConversion generated from: '<S187>/LePLTR_tdy_GPS_Date_Day'
     */
    /* Gateway: PokePLTR_t_GPS_UTC_Second/PokePLTR_t_GPS_UTC_SecondChrt */
    /* During: PokePLTR_t_GPS_UTC_Second/PokePLTR_t_GPS_UTC_SecondChrt */
    /* Entry Internal: PokePLTR_t_GPS_UTC_Second/PokePLTR_t_GPS_UTC_SecondChrt */
    /* Transition: '<S737>:2' */
    if (!LePLTR_b_GPS_UTC_Second_FA)
    {
        /* Transition: '<S737>:3' */
        /* Transition: '<S737>:15' */
        PLTR_ac_B.LePLTR_t_GPS_UTC_Second_out = LePLTR_t_GPS_UTC_Second;
        rtb_LePLTR_b_GPS_UTC_Second_FA_out = false;

        /* Transition: '<S737>:18' */
    }
    else
    {
        /* Transition: '<S737>:4' */
        rtb_LePLTR_b_GPS_UTC_Second_FA_out = true;
    }

    /* End of Chart: '<S187>/PokePLTR_t_GPS_UTC_SecondChrt' */

    /* Merge: '<Root>/Merge34' incorporates:
     *  SignalConversion generated from: '<S187>/VePLTR_b_GPS_UTC_Second_FA_out'
     * */
    Rte_IrvWrite_PokePLTR_t_GPS_UTC_Second_VePLTR_b_GPS_UTC_SecondFA_write_IRV
        (rtb_LePLTR_b_GPS_UTC_Second_FA_out);

    /* Merge: '<Root>/Merge35' incorporates:
     *  SignalConversion generated from: '<S187>/VePLTR_t_GPS_UTC_Second_out'
     * */
    Rte_IrvWrite_PokePLTR_t_GPS_UTC_Second_VePLTR_t_GPS_UTC_Second_PwrOn_IRV
        (PLTR_ac_B.LePLTR_t_GPS_UTC_Second_out);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_t_GPS_UTC_Second' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_tdy_GPS_Date_Day(VAR(float32, AUTOMATIC)
    LePLTR_tdy_GPS_Date_Day, VAR(boolean, AUTOMATIC) LePLTR_b_GPS_Date_Day_FA)
{
    boolean rtb_LePLTR_b_GPS_Date_Day_FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_tdy_GPS_Date_Day' */
    /* Chart: '<S188>/PokePLTR_tdy_GPS_Date_DayChrt' incorporates:
     *  SignalConversion generated from: '<S188>/LePLTR_b_GPS_Date_Day_FA'
     *  SignalConversion generated from: '<S188>/LePLTR_tdy_GPS_Date_Day'
     */
    /* Gateway: PokePLTR_tdy_GPS_Date_Day/PokePLTR_tdy_GPS_Date_DayChrt */
    /* During: PokePLTR_tdy_GPS_Date_Day/PokePLTR_tdy_GPS_Date_DayChrt */
    /* Entry Internal: PokePLTR_tdy_GPS_Date_Day/PokePLTR_tdy_GPS_Date_DayChrt */
    /* Transition: '<S738>:2' */
    if (!LePLTR_b_GPS_Date_Day_FA)
    {
        /* Transition: '<S738>:3' */
        /* Transition: '<S738>:15' */
        PLTR_ac_B.LePLTR_tdy_GPS_Date_Day_out = LePLTR_tdy_GPS_Date_Day;
        rtb_LePLTR_b_GPS_Date_Day_FA_out = false;

        /* Transition: '<S738>:18' */
    }
    else
    {
        /* Transition: '<S738>:4' */
        rtb_LePLTR_b_GPS_Date_Day_FA_out = true;
    }

    /* End of Chart: '<S188>/PokePLTR_tdy_GPS_Date_DayChrt' */

    /* Merge: '<Root>/Merge24' incorporates:
     *  SignalConversion generated from: '<S188>/VePLTR_b_GPS_Date_Day_FA_out'
     * */
    Rte_IrvWrite_PokePLTR_tdy_GPS_Date_Day_VePLTR_b_GPS_Date_DayFA_write_IRV
        (rtb_LePLTR_b_GPS_Date_Day_FA_out);

    /* Merge: '<Root>/Merge25' incorporates:
     *  SignalConversion generated from: '<S188>/VePLTR_tdy_GPS_Date_Day_out'
     * */
    Rte_IrvWrite_PokePLTR_tdy_GPS_Date_Day_VePLTR_tdy_GPS_Date_Day_PwrOn_IRV
        (PLTR_ac_B.LePLTR_tdy_GPS_Date_Day_out);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_tdy_GPS_Date_Day' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_thr_GPS_UTC_Hour(VAR(float32, AUTOMATIC)
    LePLTR_thr_GPS_UTC_Hour, VAR(boolean, AUTOMATIC) LePLTR_b_GPS_UTC_Hour_FA)
{
    boolean rtb_LePLTR_b_GPS_UTC_Hour_FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_thr_GPS_UTC_Hour' */
    /* Chart: '<S189>/PokePLTR_thr_GPS_UTC_HourChrt' incorporates:
     *  SignalConversion generated from: '<S189>/LePLTR_b_GPS_Date_Day_FA'
     *  SignalConversion generated from: '<S189>/LePLTR_tdy_GPS_Date_Day'
     */
    /* Gateway: PokePLTR_thr_GPS_UTC_Hour/PokePLTR_thr_GPS_UTC_HourChrt */
    /* During: PokePLTR_thr_GPS_UTC_Hour/PokePLTR_thr_GPS_UTC_HourChrt */
    /* Entry Internal: PokePLTR_thr_GPS_UTC_Hour/PokePLTR_thr_GPS_UTC_HourChrt */
    /* Transition: '<S739>:2' */
    if (!LePLTR_b_GPS_UTC_Hour_FA)
    {
        /* Transition: '<S739>:3' */
        /* Transition: '<S739>:15' */
        PLTR_ac_B.LePLTR_thr_GPS_UTC_Hour_out = LePLTR_thr_GPS_UTC_Hour;
        rtb_LePLTR_b_GPS_UTC_Hour_FA_out = false;

        /* Transition: '<S739>:18' */
    }
    else
    {
        /* Transition: '<S739>:4' */
        rtb_LePLTR_b_GPS_UTC_Hour_FA_out = true;
    }

    /* End of Chart: '<S189>/PokePLTR_thr_GPS_UTC_HourChrt' */

    /* Merge: '<Root>/Merge30' incorporates:
     *  SignalConversion generated from: '<S189>/VePLTR_b_GPS_UTC_Hour_FA_out'
     * */
    Rte_IrvWrite_PokePLTR_thr_GPS_UTC_Hour_VePLTR_b_GPS_UTC_HourFA_write_IRV
        (rtb_LePLTR_b_GPS_UTC_Hour_FA_out);

    /* Merge: '<Root>/Merge31' incorporates:
     *  SignalConversion generated from: '<S189>/VePLTR_thr_GPS_UTC_Hour_out'
     * */
    Rte_IrvWrite_PokePLTR_thr_GPS_UTC_Hour_VePLTR_thr_GPS_UTC_Hour_PwrOn_IRV
        (PLTR_ac_B.LePLTR_thr_GPS_UTC_Hour_out);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_thr_GPS_UTC_Hour' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_tmn_GPS_UTC_Minute(VAR(float32, AUTOMATIC)
    LePLTR_tmn_GPS_UTC_Minute, VAR(boolean, AUTOMATIC)
    LePLTR_b_GPS_UTC_Minute_FA)
{
    boolean rtb_LePLTR_b_GPS_UTC_Minute_FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_tmn_GPS_UTC_Minute' */
    /* Chart: '<S190>/PokePLTR_tmn_GPS_UTC_MinuteChrt' incorporates:
     *  SignalConversion generated from: '<S190>/LePLTR_b_GPS_Date_Day_FA'
     *  SignalConversion generated from: '<S190>/LePLTR_tdy_GPS_Date_Day'
     */
    /* Gateway: PokePLTR_tmn_GPS_UTC_Minute/PokePLTR_tmn_GPS_UTC_MinuteChrt */
    /* During: PokePLTR_tmn_GPS_UTC_Minute/PokePLTR_tmn_GPS_UTC_MinuteChrt */
    /* Entry Internal: PokePLTR_tmn_GPS_UTC_Minute/PokePLTR_tmn_GPS_UTC_MinuteChrt */
    /* Transition: '<S740>:2' */
    if (!LePLTR_b_GPS_UTC_Minute_FA)
    {
        /* Transition: '<S740>:3' */
        /* Transition: '<S740>:15' */
        PLTR_ac_B.LePLTR_tmn_GPS_UTC_Minute_out = LePLTR_tmn_GPS_UTC_Minute;
        rtb_LePLTR_b_GPS_UTC_Minute_FA_out = false;

        /* Transition: '<S740>:18' */
    }
    else
    {
        /* Transition: '<S740>:4' */
        rtb_LePLTR_b_GPS_UTC_Minute_FA_out = true;
    }

    /* End of Chart: '<S190>/PokePLTR_tmn_GPS_UTC_MinuteChrt' */

    /* Merge: '<Root>/Merge32' incorporates:
     *  SignalConversion generated from: '<S190>/VePLTR_b_GPS_UTC_Minute_FA_out'
     * */
    Rte_IrvWrite_PokePLTR_tmn_GPS_UTC_Minute_VePLTR_b_GPS_UTC_MinuteFA_write_IRV
        (rtb_LePLTR_b_GPS_UTC_Minute_FA_out);

    /* Merge: '<Root>/Merge33' incorporates:
     *  SignalConversion generated from: '<S190>/VePLTR_tmn_GPS_UTC_Minute_out'
     * */
    Rte_IrvWrite_PokePLTR_tmn_GPS_UTC_Minute_VePLTR_tmn_GPS_UTC_Minute_PwrOn_IRV
        (PLTR_ac_B.LePLTR_tmn_GPS_UTC_Minute_out);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_tmn_GPS_UTC_Minute' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_tmt_GPS_Date_Month(VAR(float32, AUTOMATIC)
    LePLTR_tmt_GPS_Date_Month, VAR(boolean, AUTOMATIC)
    LePLTR_b_GPS_Date_Month_FA)
{
    boolean rtb_LePLTR_b_GPS_Date_Month_FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_tmt_GPS_Date_Month' */
    /* Chart: '<S191>/PokePLTR_tmt_GPS_Date_MonthChrt' incorporates:
     *  SignalConversion generated from: '<S191>/LePLTR_b_GPS_Date_Day_FA'
     *  SignalConversion generated from: '<S191>/LePLTR_tdy_GPS_Date_Day'
     */
    /* Gateway: PokePLTR_tmt_GPS_Date_Month/PokePLTR_tmt_GPS_Date_MonthChrt */
    /* During: PokePLTR_tmt_GPS_Date_Month/PokePLTR_tmt_GPS_Date_MonthChrt */
    /* Entry Internal: PokePLTR_tmt_GPS_Date_Month/PokePLTR_tmt_GPS_Date_MonthChrt */
    /* Transition: '<S741>:2' */
    if (!LePLTR_b_GPS_Date_Month_FA)
    {
        /* Transition: '<S741>:3' */
        /* Transition: '<S741>:15' */
        PLTR_ac_B.LePLTR_tmt_GPS_Date_Month_out = LePLTR_tmt_GPS_Date_Month;
        rtb_LePLTR_b_GPS_Date_Month_FA_out = false;

        /* Transition: '<S741>:18' */
    }
    else
    {
        /* Transition: '<S741>:4' */
        rtb_LePLTR_b_GPS_Date_Month_FA_out = true;
    }

    /* End of Chart: '<S191>/PokePLTR_tmt_GPS_Date_MonthChrt' */

    /* Merge: '<Root>/Merge26' incorporates:
     *  SignalConversion generated from: '<S191>/VePLTR_b_GPS_Date_Month_FA_out'
     * */
    Rte_IrvWrite_PokePLTR_tmt_GPS_Date_Month_VePLTR_b_GPS_Date_MonthFA_write_IRV
        (rtb_LePLTR_b_GPS_Date_Month_FA_out);

    /* Merge: '<Root>/Merge27' incorporates:
     *  SignalConversion generated from: '<S191>/VePLTR_tmt_GPS_Date_Month_out'
     * */
    Rte_IrvWrite_PokePLTR_tmt_GPS_Date_Month_VePLTR_tmt_GPS_Date_Month_PwrOn_IRV
        (PLTR_ac_B.LePLTR_tmt_GPS_Date_Month_out);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_tmt_GPS_Date_Month' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_tyr_GPS_Date_Year(VAR(float32, AUTOMATIC)
    LePLTR_tyr_GPS_Date_Year, VAR(boolean, AUTOMATIC) LePLTR_b_GPS_Date_Year_FA)
{
    boolean rtb_LePLTR_b_GPS_Date_Year_FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_tyr_GPS_Date_Year' */
    /* Chart: '<S192>/PokePLTR_tyr_GPS_Date_YearChrt' incorporates:
     *  SignalConversion generated from: '<S192>/LePLTR_b_GPS_Date_Day_FA'
     *  SignalConversion generated from: '<S192>/LePLTR_tdy_GPS_Date_Day'
     */
    /* Gateway: PokePLTR_tyr_GPS_Date_Year/PokePLTR_tyr_GPS_Date_YearChrt */
    /* During: PokePLTR_tyr_GPS_Date_Year/PokePLTR_tyr_GPS_Date_YearChrt */
    /* Entry Internal: PokePLTR_tyr_GPS_Date_Year/PokePLTR_tyr_GPS_Date_YearChrt */
    /* Transition: '<S742>:2' */
    if (!LePLTR_b_GPS_Date_Year_FA)
    {
        /* Transition: '<S742>:3' */
        /* Transition: '<S742>:15' */
        PLTR_ac_B.LePLTR_tyr_GPS_Date_Year_out = LePLTR_tyr_GPS_Date_Year;
        rtb_LePLTR_b_GPS_Date_Year_FA_out = false;

        /* Transition: '<S742>:18' */
    }
    else
    {
        /* Transition: '<S742>:4' */
        rtb_LePLTR_b_GPS_Date_Year_FA_out = true;
    }

    /* End of Chart: '<S192>/PokePLTR_tyr_GPS_Date_YearChrt' */

    /* Merge: '<Root>/Merge28' incorporates:
     *  SignalConversion generated from: '<S192>/VePLTR_b_GPS_Date_Year_FA_out'
     * */
    Rte_IrvWrite_PokePLTR_tyr_GPS_Date_Year_VePLTR_b_GPS_Date_YearFA_write_IRV
        (rtb_LePLTR_b_GPS_Date_Year_FA_out);

    /* Merge: '<Root>/Merge29' incorporates:
     *  SignalConversion generated from: '<S192>/VePLTR_tyr_GPS_Date_Year_out'
     * */
    Rte_IrvWrite_PokePLTR_tyr_GPS_Date_Year_VePLTR_tyr_GPS_Date_Year_PwrOn_IRV
        (PLTR_ac_B.LePLTR_tyr_GPS_Date_Year_out);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_tyr_GPS_Date_Year' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_y_AUD_LVL(VAR(uint8, AUTOMATIC) LePLTR_y_AUD_LVL,
    VAR(boolean, AUTOMATIC) LePLTR_b_AUD_LVL_FA)
{
    boolean rtb_LePLTR_b_AUD_LVL_FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_y_AUD_LVL' */
    /* Chart: '<S193>/PokePLTR_y_AUD_LVLChrt' incorporates:
     *  SignalConversion generated from: '<S193>/LePLTR_b_AUD_LVL_FA'
     *  SignalConversion generated from: '<S193>/LePLTR_y_AUD_LVL'
     */
    /* Gateway: PokePLTR_y_AUD_LVL/PokePLTR_y_AUD_LVLChrt */
    /* During: PokePLTR_y_AUD_LVL/PokePLTR_y_AUD_LVLChrt */
    /* Entry Internal: PokePLTR_y_AUD_LVL/PokePLTR_y_AUD_LVLChrt */
    /* Transition: '<S743>:2' */
    if (!LePLTR_b_AUD_LVL_FA)
    {
        /* Transition: '<S743>:3' */
        /* Transition: '<S743>:15' */
        PLTR_ac_B.LePLTR_y_AUD_LVL_out = LePLTR_y_AUD_LVL;
        rtb_LePLTR_b_AUD_LVL_FA_out = false;

        /* Transition: '<S743>:18' */
    }
    else
    {
        /* Transition: '<S743>:4' */
        rtb_LePLTR_b_AUD_LVL_FA_out = true;
    }

    /* End of Chart: '<S193>/PokePLTR_y_AUD_LVLChrt' */

    /* Outport: '<Root>/VePLTR_b_AUD_LVL_FA' incorporates:
     *  SignalConversion generated from: '<S193>/VePLTR_b_AUD_LVL_FA'
     */
    (void)Rte_Write_VePLTR_b_AUD_LVL_FA_Value(rtb_LePLTR_b_AUD_LVL_FA_out);

    /* Outport: '<Root>/VePLTR_y_AUD_LVL' incorporates:
     *  SignalConversion generated from: '<S193>/VePLTR_y_AUD_LVL'
     */
    (void)Rte_Write_VePLTR_y_AUD_LVL_Value(PLTR_ac_B.LePLTR_y_AUD_LVL_out);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_y_AUD_LVL' */
}

/* Output function */
FUNC(void, PLTR_CODE) PokePLTR_y_FobSearchResult(VAR(uint8, AUTOMATIC)
    LePLTR_y_FobSearchResult, VAR(boolean, AUTOMATIC)
    LePLTR_b_FobSearchResult_FA)
{
    boolean rtb_LePLTR_b_FobSearchResult_FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokePLTR_y_FobSearchResult' */
    /* Chart: '<S194>/PokePLTR_y_FobSearchResultChrt' incorporates:
     *  SignalConversion generated from: '<S194>/LePLTR_b_FobSearchResult_FA'
     *  SignalConversion generated from: '<S194>/LePLTR_y_FobSearchResult'
     */
    /* Gateway: PokePLTR_y_FobSearchResult/PokePLTR_y_FobSearchResultChrt */
    /* During: PokePLTR_y_FobSearchResult/PokePLTR_y_FobSearchResultChrt */
    /* Entry Internal: PokePLTR_y_FobSearchResult/PokePLTR_y_FobSearchResultChrt */
    /* Transition: '<S744>:2' */
    if (!LePLTR_b_FobSearchResult_FA)
    {
        /* Transition: '<S744>:3' */
        /* Transition: '<S744>:15' */
        PLTR_ac_B.LePLTR_y_FobSearchResult_out = LePLTR_y_FobSearchResult;
        rtb_LePLTR_b_FobSearchResult_FA_out = false;

        /* Transition: '<S744>:18' */
    }
    else
    {
        /* Transition: '<S744>:4' */
        rtb_LePLTR_b_FobSearchResult_FA_out = true;
    }

    /* End of Chart: '<S194>/PokePLTR_y_FobSearchResultChrt' */

    /* Outport: '<Root>/VePLTR_b_FobSearchResult_FA' incorporates:
     *  SignalConversion generated from: '<S194>/VePLTR_b_FobSearchResult_FA'
     */
    (void)Rte_Write_VePLTR_b_FobSearchResult_FA_Value
        (rtb_LePLTR_b_FobSearchResult_FA_out);

    /* Outport: '<Root>/VePLTR_y_FobSearchResult' incorporates:
     *  SignalConversion generated from: '<S194>/VePLTR_y_FobSearchResult'
     */
    (void)Rte_Write_VePLTR_y_FobSearchResult_Value
        (PLTR_ac_B.LePLTR_y_FobSearchResult_out);

    /* End of Outputs for SubSystem: '<Root>/PokePLTR_y_FobSearchResult' */
}

/* Output function */
FUNC(void, PLTR_CODE) PLTR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/PLTR_PwrOff'
     */
    /* DataStoreWrite: '<S85>/Data Store Write' incorporates:
     *  DataStoreRead: '<S85>/EePLTR_t_RTCTime'
     */
    EePLTR_t_PowerdownTime = EePLTR_t_RTCTime;

    /* Outport: '<Root>/EePLTR_e_RTCStatus_PM_Out' incorporates:
     *  DataStoreRead: '<S85>/EePLTR_e_RTCStatus'
     */
    (void)Rte_Write_EePLTR_e_RTCStatus_EePLTR_e_RTCStatus(EePLTR_e_RTCStatus);

    /* Outport: '<Root>/EePLTR_t_PowerdownTime_PM_Out' incorporates:
     *  DataStoreRead: '<S85>/EePLTR_t_PowerdownTime'
     */
    (void)Rte_Write_EePLTR_t_PowerdownTime_EePLTR_t_PowerdownTime
        (EePLTR_t_PowerdownTime);

    /* Outport: '<Root>/EePLTR_e_ShippingMode_PM_Out' incorporates:
     *  DataStoreRead: '<S85>/EePLTR_e_ShippingMode'
     */
    (void)Rte_Write_EePLTR_e_ShippingMode_EePLTR_e_ShippingMode
        (EePLTR_e_ShippingMode);

    /* Outport: '<Root>/AePLTR_b_PwrOffOk_Strimm_Out' incorporates:
     *  Constant: '<S85>/FALSE Constant20'
     */
    (void)Rte_Write_AePLTR_b_PwrOffOk_AePLTR_b_PwrOffOk(true);

    /* Outport: '<Root>/EePLTR_b_RTC_CurrentTimeFA_PM_Out' incorporates:
     *  DataStoreRead: '<S85>/EePLTR_e_RTCStatus1'
     */
    (void)Rte_Write_EePLTR_b_RTC_CurrentTimeFA_EePLTR_b_RTC_CurrentTimeFA
        (EePLTR_b_RTC_CurrentTimeFA);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/PLTR_PwrOff'
     */

    /* Outport: '<Root>/EePLTR_t_RTCTime_PM_Out' incorporates:
     *  DataStoreRead: '<S85>/EePLTR_t_RTCTime'
     */
    (void)Rte_Write_EePLTR_t_RTCTime_EePLTR_t_RTCTime(EePLTR_t_RTCTime);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, PLTR_CODE) PLTR_PwrOn(void)
{
    /* local block i/o variables */
    uint32 rtb_HVBatRealTimeClock_BPCM_write_IRV;
    uint32 rtb_HVBatSleepTime_BPCM_write_IRV;
    float32 rtb_VePLTR_p_AmbientAirPrs_write_IRV;
    boolean rtb_HVBatRealTimeClock_FA_BPCM_write_IRV;
    TePLTR_e_ShiftIndSt tmp;
    TePLTR_e_VehCfgSt tmp_0;

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/PLTR_PwrOn'
     */
    /* S-Function (fcgen): '<S86>/FcnCallGen' incorporates:
     *  SubSystem: '<S86>/DSM_Init'
     */
    /* DataStoreWrite: '<S424>/Data Store Write1' incorporates:
     *  Inport: '<Root>/EePLTR_b_RTC_CurrentTimeFA_PM_In'
     */
    (void)Rte_Read_EePLTR_b_RTC_CurrentTimeFA_Rx_EePLTR_b_RTC_CurrentTimeFA
        ((&(EePLTR_b_RTC_CurrentTimeFA)));

    /* DataStoreWrite: '<S424>/Data Store Write' incorporates:
     *  Inport: '<Root>/AePLTR_b_PwrOffOk_Strimm_In'
     */
    (void)Rte_Read_AePLTR_b_PwrOffOk_Rx_AePLTR_b_PwrOffOk((&(AePLTR_b_PwrOffOk)));

    /* DataStoreWrite: '<S424>/EePLTR_b_InFieldMode2' incorporates:
     *  Inport: '<Root>/AePLTR_b_REMDisabled_Strimm_In'
     */
    (void)Rte_Read_AePLTR_b_REMDisabled_Rx_AePLTR_b_REMDisabled
        ((&(AePLTR_b_REMDisabled)));

    /* DataStoreWrite: '<S424>/EePLTR_b_InFieldMode1' incorporates:
     *  Inport: '<Root>/AePLTR_b_RadFanHandshake_disbld_Strimm_In'
     */
    (void)
        Rte_Read_AePLTR_b_RadFanHandshake_disbld_Rx_AePLTR_b_RadFanHandshake_disbld
        ((&(AePLTR_b_RadFanHandshake_disbld)));

    /* DataStoreWrite: '<S424>/BePLTR_Pct_IP_SOCSetPt' incorporates:
     *  Inport: '<Root>/AePLTR_Pct_IP_SOCSetPt_Strimm_In'
     */
    (void)Rte_Read_AePLTR_Pct_IP_SOCSetPt_Rx_AePLTR_Pct_IP_SOCSetPt
        (&PLTR_ac_DW.AePLTR_Pct_IP_SOCSetPt);

    /* DataStoreWrite: '<S424>/BePLTR_Pct_CS_SOCSetPt' incorporates:
     *  Inport: '<Root>/AePLTR_Pct_CS_SOCSetPt_Strimm_In'
     */
    (void)Rte_Read_AePLTR_Pct_CS_SOCSetPt_Rx_AePLTR_Pct_CS_SOCSetPt
        (&PLTR_ac_DW.AePLTR_Pct_CS_SOCSetPt);

    /* DataStoreWrite: '<S424>/BePLTR_milel_IPEETestMileageLimit' incorporates:
     *  Inport: '<Root>/AePLTR_milel_IPEETestMileageLimit_Strimm_In'
     */
    (void)
        Rte_Read_AePLTR_milel_IPEETestMileageLimit_Rx_AePLTR_milel_IPEETestMileageLimit
        ((&(AePLTR_milel_IPEETestMileageLimit)));

    /* DataStoreWrite: '<S424>/EePLTR_e_ShippingMode' incorporates:
     *  Inport: '<Root>/EePLTR_e_ShippingMode_PM_In'
     */
    (void)Rte_Read_EePLTR_e_ShippingMode_Rx_EePLTR_e_ShippingMode
        ((&(EePLTR_e_ShippingMode)));

    /* DataStoreWrite: '<S424>/EePLTR_t_PowerdownTime' incorporates:
     *  Inport: '<Root>/EePLTR_t_PowerdownTime_PM_In'
     */
    (void)Rte_Read_EePLTR_t_PowerdownTime_Rx_EePLTR_t_PowerdownTime
        ((&(EePLTR_t_PowerdownTime)));

    /* DataStoreWrite: '<S424>/EePLTR_e_RTCStatus' incorporates:
     *  Inport: '<Root>/EePLTR_e_RTCStatus_PM_In'
     */
    (void)Rte_Read_EePLTR_e_RTCStatus_Rx_EePLTR_e_RTCStatus
        ((&(EePLTR_e_RTCStatus)));

    /* DataStoreWrite: '<S424>/EePLTR_t_RTCTime' incorporates:
     *  Inport: '<Root>/EePLTR_t_RTCTime_PM_In'
     */
    (void)Rte_Read_EePLTR_t_RTCTime_Rx_EePLTR_t_RTCTime((&(EePLTR_t_RTCTime)));

    /* DataStoreWrite: '<S424>/BePLTR_milel_OdometerLimit' incorporates:
     *  Inport: '<Root>/AePLTR_milel_OdometerLimit_Strimm_In'
     */
    (void)Rte_Read_AePLTR_milel_OdometerLimit_Rx_AePLTR_milel_OdometerLimit
        (&PLTR_ac_DW.AePLTR_milel_OdometerLimit);

    /* DataStoreWrite: '<S424>/EePLTR_b_InFieldMode' incorporates:
     *  Inport: '<Root>/AePLTR_b_InFieldMode_Strimm_In'
     */
    (void)Rte_Read_AePLTR_b_InFieldMode_Rx_AePLTR_b_InFieldMode
        ((&(AePLTR_b_InFieldMode)));

    /* End of Outputs for S-Function (fcgen): '<S86>/FcnCallGen' */

    /* SignalConversion generated from: '<S86>/HVBatRealTimeClock_BPCM_Read' incorporates:
     *  Merge: '<Root>/HVBatRealTimeClock_BPCM_IRV_Merge'
     */
    rtb_HVBatRealTimeClock_BPCM_write_IRV =
        Rte_IrvRead_PLTR_PwrOn_HVBatRealTimeClock_BPCM_write_IRV();

    /* SignalConversion generated from: '<S86>/HVBatRealTimeClock_FA_BPCM_Read' incorporates:
     *  Merge: '<Root>/HVBatRealTimeClock_FA_BPCM_IRV_Merge'
     */
    rtb_HVBatRealTimeClock_FA_BPCM_write_IRV =
        Rte_IrvRead_PLTR_PwrOn_HVBatRealTimeClock_FA_BPCM_write_IRV();

    /* SignalConversion generated from: '<S86>/HVBatSleepTime_BPCM_Read' incorporates:
     *  Merge: '<Root>/HVBatSleepTime_BPCM_IRV_Merge'
     */
    rtb_HVBatSleepTime_BPCM_write_IRV =
        Rte_IrvRead_PLTR_PwrOn_HVBatSleepTime_BPCM_write_IRV();

    /* SignalConversion generated from: '<S86>/VePLTR_p_AmbientAirPrs_read' incorporates:
     *  Merge: '<Root>/Merge_12_Irv'
     */
    rtb_VePLTR_p_AmbientAirPrs_write_IRV =
        Rte_IrvRead_PLTR_PwrOn_VePLTR_p_AmbientAirPrs_write_IRV();

    /* S-Function (fcgen): '<S86>/FcnCallGen' incorporates:
     *  SubSystem: '<S86>/Initialize_PTLI_Outputs'
     */
    /* SignalConversion generated from: '<S425>/VePLTR_a_LongAccel' */
    PLTR_ac_B.OutportBufferForVePLTR_a_LongAccel = 0.0F;

    /* SignalConversion generated from: '<S425>/VePLTR_b_LongAccelFA' */
    PLTR_ac_B.OutportBufferForVePLTR_b_LongAccelFA = false;

    /* SignalConversion generated from: '<S425>/VePLTR_b_ERS_SWFA' */
    PLTR_ac_B.OutportBufferForVePLTR_b_ERS_SWFA = false;

    /* SignalConversion generated from: '<S425>/VePLTR_b_CrsCntrlActv' incorporates:
     *  Constant: '<S470>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_b_CrsCntrlActv = KePLTR_b_CrsCntrlActv;

    /* SignalConversion generated from: '<S425>/VePLTR_b_RmtVehStartReq' */
    PLTR_ac_B.OutportBufferForVePLTR_b_RmtVehStartReq = false;

    /* SignalConversion generated from: '<S425>/VePLTR_p_AmbientAirPrs' incorporates:
     *  Constant: '<S506>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_p_AmbientAirPrs =
        KePLTR_p_AmbientAirPrsInitVal;

    /* SignalConversion generated from: '<S425>/VePLTR_e_TowHaulModeRaw' incorporates:
     *  Constant: '<S432>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_TowHaulModeRaw =
        PLTR_ac_ConstB.Constant_c;

    /* SignalConversion generated from: '<S425>/VePLTR_b_DrvDrAjar' */
    PLTR_ac_B.OutportBufferForVePLTR_b_DrvDrAjar = false;

    /* SignalConversion generated from: '<S425>/VePLTR_e_SeatBeltSts' incorporates:
     *  Constant: '<S455>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_SeatBeltSts = PLTR_ac_ConstB.Constant_ip;

    /* SignalConversion generated from: '<S425>/VePLTR_b_SeatBeltStsFA' */
    PLTR_ac_B.OutportBufferForVePLTR_b_SeatBeltStsFA = false;

    /* SignalConversion generated from: '<S425>/VePLTR_b_ChargeReq' */
    PLTR_ac_B.OutportBufferForVePLTR_b_ChargeReq = false;

    /* SignalConversion generated from: '<S425>/VePLTR_e_InvrOprStatus' incorporates:
     *  Constant: '<S457>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_InvrOprStatus =
        PLTR_ac_ConstB.Constant_g0;

    /* SignalConversion generated from: '<S425>/VePLTR_e_V2GOprStat' incorporates:
     *  Constant: '<S459>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_V2GOprStat = PLTR_ac_ConstB.Constant_p2;

    /* SignalConversion generated from: '<S425>/VePLTR_e_EPBHoldSts' incorporates:
     *  Constant: '<S460>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_EPBHoldSts = PLTR_ac_ConstB.Constant_i;

    /* SignalConversion generated from: '<S425>/VePLTR_b_ESSRqShftPark' */
    PLTR_ac_B.OutportBufferForVePLTR_b_ESSRqShftPark = false;

    /* SignalConversion generated from: '<S425>/VePLTR_a_LongAccelOffset' */
    PLTR_ac_B.OutportBufferForVePLTR_a_LongAccelOffset = 0.0F;

    /* SignalConversion generated from: '<S425>/VePLTR_b_LongAccelOffsetFA' */
    PLTR_ac_B.OutportBufferForVePLTR_b_LongAccelOffset = false;

    /* SignalConversion generated from: '<S425>/VePLTI_e_ShippingMode' incorporates:
     *  Constant: '<S434>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTI_e_ShippingMode = PLTR_ac_ConstB.Constant_e;

    /* SignalConversion generated from: '<S425>/VePLTI_kl_Odometer_Km' incorporates:
     *  Constant: '<S504>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTI_kl_Odometer_Km = KePLTR_kl_OdometerMaxValue;

    /* SignalConversion generated from: '<S425>/VePLTI_b_Odometer_FA' */
    PLTR_ac_B.OutportBufferForVePLTI_b_Odometer_FA = false;

    /* SignalConversion generated from: '<S425>/VePLTR_a_LatAccel' */
    PLTR_ac_B.OutportBufferForVePLTR_a_LatAccel = 0.0F;

    /* SignalConversion generated from: '<S425>/VePLTR_b_LatAccelFA' */
    PLTR_ac_B.OutportBufferForVePLTR_b_LatAccelFA = false;

    /* SignalConversion generated from: '<S425>/VePLTR_a_LatAccelOffset' */
    PLTR_ac_B.OutportBufferForVePLTR_a_LatAccelOffset = 0.0F;

    /* SignalConversion generated from: '<S425>/VePLTR_b_LatAccelOffsetFA' */
    PLTR_ac_B.OutportBufferForVePLTR_b_LatAccelOffsetF = false;

    /* SignalConversion generated from: '<S425>/VePLTI_b_MILOnRq_ESCInit' */
    PLTR_ac_B.OutportBufferForVePLTI_b_MILOnRq_ESCInit = false;

    /* SignalConversion generated from: '<S425>/VePLTI_b_EPBFailStsInit' */
    PLTR_ac_B.OutportBufferForVePLTI_b_EPBFailStsInit = true;

    /* SignalConversion generated from: '<S425>/VePLTR_e_ProxiACC_Init' incorporates:
     *  Constant: '<S438>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_ProxiACC_Init =
        PLTR_ac_ConstB.Constant_n3;

    /* SignalConversion generated from: '<S425>/VePLTR_b_ProxiCC_Init' incorporates:
     *  Constant: '<S478>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_b_ProxiCC_Init = KePLTR_b_ProxiCC_Init;

    /* SignalConversion generated from: '<S425>/VePLTR_b_ProxiSpdLimiter_Init' incorporates:
     *  Constant: '<S480>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_b_ProxiSpdLimiter =
        KePLTR_b_ProxiSpdLimiter_Init;

    /* SignalConversion generated from: '<S425>/VePLTR_b_ProxiNavPrsnc_Init' incorporates:
     *  Constant: '<S479>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_b_ProxiNavPrsnc_I =
        KePLTR_b_ProxiNavPrsnc_Init;

    /* SignalConversion generated from: '<S425>/VePLTR_b_ProxiTrafficSignRcgntn_Init' incorporates:
     *  Constant: '<S481>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_b_ProxiTrafficSig =
        KePLTR_b_ProxiTrafficSignRcgntn_Init;

    /* SignalConversion generated from: '<S425>/VePLTR_Pct_ProxiSpdomtrTol_Init' incorporates:
     *  Constant: '<S463>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_Pct_ProxiSpdomtrT =
        KePLTR_Pct_ProxiSpdomtrTol_Init;

    /* SignalConversion generated from: '<S425>/VePLTR_e_IncreasingSpdConst_Init' incorporates:
     *  Constant: '<S439>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_IncreasingSpdCo =
        PLTR_ac_ConstB.Constant_es;

    /* SignalConversion generated from: '<S425>/VePLTR_b_ACC_On_Init' incorporates:
     *  Constant: '<S468>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_b_ACC_On_Init = KePLTR_b_ACC_On_Init;

    /* SignalConversion generated from: '<S425>/VePLTR_b_ACC_OnFA_Init' incorporates:
     *  Constant: '<S467>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_b_ACC_OnFA_Init = KePLTR_b_ACC_OnFA_Init;

    /* SignalConversion generated from: '<S425>/VePLTR_b_ParkBrakeSts_Init' incorporates:
     *  Constant: '<S475>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_b_ParkBrakeSts_In =
        KePLTR_b_ParkBrakeSts_Init;

    /* SignalConversion generated from: '<S425>/VePLTR_b_SpeedUnit_Init' incorporates:
     *  Constant: '<S487>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_b_SpeedUnit_Init = KePLTR_b_SpeedUnit_Init;

    /* SignalConversion generated from: '<S425>/VePLTR_e_ACCSystemSts_Init' incorporates:
     *  Constant: '<S461>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_ACCSystemSts_In =
        PLTR_ac_ConstB.Constant_bl;

    /* SignalConversion generated from: '<S425>/VePLTR_b_InternalLightSts_Init' incorporates:
     *  Constant: '<S473>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_b_InternalLightSt =
        KePLTR_b_InternalLightSts_Init;

    /* SignalConversion generated from: '<S425>/VePLTR_b_RmtVehStartReqFA' */
    PLTR_ac_B.OutportBufferForVePLTR_b_RmtVehStartReqF = false;

    /* SignalConversion generated from: '<S425>/VePLTR_b_DrvDrAjarFA' */
    PLTR_ac_B.OutportBufferForVePLTR_b_DrvDrAjarFA = false;

    /* SignalConversion generated from: '<S425>/VePLTR_b_DoorFailSts_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_DoorFailSts_Ini = false;

    /* SignalConversion generated from: '<S425>/VePLTR_b_ACCEnbledInit' */
    PLTR_ac_B.OutportBufferForVePLTR_b_ACCEnbledInit = false;

    /* SignalConversion generated from: '<S425>/VePLTR_e_ECMVtdFreezeInit' incorporates:
     *  Constant: '<S441>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_ECMVtdFreezeIni =
        PLTR_ac_ConstB.Constant_lv;

    /* SignalConversion generated from: '<S425>/AutoPosCorrMd_Init' incorporates:
     *  Constant: '<S443>/Constant'
     */
    PLTR_ac_B.OutportBufferForAutoPosCorrMd_Init = PLTR_ac_ConstB.Constant_p;

    /* SignalConversion generated from: '<S425>/AutoPosCorrMdFA_Init' */
    PLTR_ac_B.OutportBufferForAutoPosCorrMdFA_Init = false;

    /* SignalConversion generated from: '<S425>/ShftDsplyFlt_Init' */
    PLTR_ac_B.OutportBufferForShftDsplyFlt_Init = false;

    /* SignalConversion generated from: '<S425>/ShftLockFlt_Init' */
    PLTR_ac_B.OutportBufferForShftLockFlt_Init = false;

    /* SignalConversion generated from: '<S425>/RFHub_ForcePark_Init' */
    PLTR_ac_B.OutportBufferForRFHub_ForcePark_Init = false;

    /* SignalConversion generated from: '<S425>/RFHub_ForceParkFA_Init' */
    PLTR_ac_B.OutportBufferForRFHub_ForceParkFA_Init = false;

    /* SignalConversion generated from: '<S425>/ShftSnsrFlt_Init' */
    PLTR_ac_B.OutportBufferForShftSnsrFlt_Init = false;

    /* SignalConversion generated from: '<S425>/RackDetentSnsrFA_Init' */
    PLTR_ac_B.OutportBufferForRackDetentSnsrFA_Init = false;

    /* SignalConversion generated from: '<S425>/ShiftLeverPositionReq_Init' incorporates:
     *  Constant: '<S446>/Constant'
     */
    PLTR_ac_B.OutportBufferForShiftLeverPositionReq_In = PLTR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S425>/ShiftLeverPositionReqFA_Init' */
    PLTR_ac_B.OutportBufferForShiftLeverPositionReqFA_ = false;

    /* SignalConversion generated from: '<S425>/ShiftLeverFailSts_Init' */
    PLTR_ac_B.OutportBufferForShiftLeverFailSts_Init = false;

    /* SignalConversion generated from: '<S425>/ShiftLeverFailStsFA_Init' */
    PLTR_ac_B.OutportBufferForShiftLeverFailStsFA_Init = false;

    /* SignalConversion generated from: '<S425>/RFHUB_ForcePark_Init_PwrOn_1_IRV' */
    PLTR_ac_B.OutportBufferForRFHUB_ForcePark_Init_Pwr = false;

    /* SignalConversion generated from: '<S425>/RFHUB_ForceParkFA_Init' */
    PLTR_ac_B.OutportBufferForRFHUB_ForceParkFA_Init = false;

    /* SignalConversion generated from: '<S425>/AutoPosCorrMd_Ini' incorporates:
     *  Constant: '<S444>/Constant'
     */
    PLTR_ac_B.OutportBufferForAutoPosCorrMd_Ini = PLTR_ac_ConstB.Constant_h;

    /* SignalConversion generated from: '<S425>/AutoPosCorrMdFA_Ini' */
    PLTR_ac_B.OutportBufferForAutoPosCorrMdFA_Ini = false;

    /* SignalConversion generated from: '<S425>/ShftDsplyFlt_Ini' */
    PLTR_ac_B.OutportBufferForShftDsplyFlt_Ini = false;

    /* SignalConversion generated from: '<S425>/ShftLockFlt_Ini' */
    PLTR_ac_B.OutportBufferForShftLockFlt_Ini = false;

    /* SignalConversion generated from: '<S425>/ShftSnsrFlt_In' */
    PLTR_ac_B.OutportBufferForShftSnsrFlt_In = false;

    /* SignalConversion generated from: '<S425>/RackDetentSnsrFA_In' */
    PLTR_ac_B.OutportBufferForRackDetentSnsrFA_In = false;

    /* SignalConversion generated from: '<S425>/ShiftLeverPositionReq_Ini' incorporates:
     *  Constant: '<S448>/Constant'
     */
    PLTR_ac_B.OutportBufferForShiftLeverPositionReq__a =
        PLTR_ac_ConstB.Constant_k;

    /* SignalConversion generated from: '<S425>/ShiftLeverPositionReqFA_Ini' */
    PLTR_ac_B.OutportBufferForShiftLeverPositionReqF_d = false;

    /* SignalConversion generated from: '<S425>/ShiftLeverFailSts_Ini' */
    PLTR_ac_B.OutportBufferForShiftLeverFailSts_Ini = false;

    /* SignalConversion generated from: '<S425>/ShiftLeverFail_PRNDStsFA_Ini' */
    PLTR_ac_B.OutportBufferForShiftLeverFail_PRNDStsFA = false;

    /* SignalConversion generated from: '<S425>/HWIO_GatedParkSWFault' */
    PLTR_ac_B.OutportBufferForHWIO_GatedParkSWFault = 0;

    /* SignalConversion generated from: '<S425>/ManualMode_Init' */
    PLTR_ac_B.OutportBufferForManualMode_Init = false;

    /* SignalConversion generated from: '<S425>/ManualModeFA_Init' */
    PLTR_ac_B.OutportBufferForManualModeFA_Init = false;

    /* SignalConversion generated from: '<S425>/PRND_ValidatePstn_Init' incorporates:
     *  Constant: '<S449>/Constant'
     */
    PLTR_ac_B.OutportBufferForPRND_ValidatePstn_Init = PLTR_ac_ConstB.Constant_b;

    /* SignalConversion generated from: '<S425>/VldtPstnFA_Init' */
    PLTR_ac_B.OutportBufferForVldtPstnFA_Init = false;

    /* SignalConversion generated from: '<S425>/TransShiftPosInitMSG' incorporates:
     *  Constant: '<S450>/Constant'
     */
    PLTR_ac_B.OutportBufferForTransShiftPosInitMSG = PLTR_ac_ConstB.Constant_l;

    /* SignalConversion generated from: '<S425>/ShiftPosFlt_InitMSG' */
    PLTR_ac_B.OutportBufferForShiftPosFlt_InitMSG = false;

    /* SignalConversion generated from: '<S425>/TransShiftPos_InitMSG' incorporates:
     *  Constant: '<S451>/Constant'
     */
    PLTR_ac_B.OutportBufferForTransShiftPos_InitMSG = PLTR_ac_ConstB.Constant_g;

    /* SignalConversion generated from: '<S425>/ShiftPosFlt_IntMSG' */
    PLTR_ac_B.OutportBufferForShiftPosFlt_IntMSG = false;

    /* SignalConversion generated from: '<S425>/PRND_ValidatePstn_InitSndry' incorporates:
     *  Constant: '<S452>/Constant'
     */
    PLTR_ac_B.OutportBufferForPRND_ValidatePstn_InitSn =
        PLTR_ac_ConstB.Constant_l2;

    /* SignalConversion generated from: '<S425>/VldtPstnFA_InitSndry' */
    PLTR_ac_B.OutportBufferForVldtPstnFA_InitSndry = false;

    /* SignalConversion generated from: '<S425>/VePLTR_b_InPlant' */
    PLTR_ac_B.OutportBufferForVePLTR_b_InPlant = false;

    /* SignalConversion generated from: '<S425>/VePLTR_e_ProxyHybridType_Init' incorporates:
     *  Constant: '<S498>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_ProxyHybridType =
        KePLTR_e_ProxyHybridTypeInit;

    /* SignalConversion generated from: '<S425>/VePLTI_b_EPBHoldStsFA' */
    PLTR_ac_B.OutportBufferForVePLTI_b_EPBHoldStsFA = false;

    /* Outport: '<Root>/VePLTR_Cnt_TotalEngRunTime_Recent' incorporates:
     *  Constant: '<S425>/Constant Value1'
     *  Gain: '<S510>/Gain'
     */
    (void)Rte_Write_VePLTR_Cnt_TotalEngRunTime_Recent_Value(MAX_uint32_T);

    /* Outport: '<Root>/VePLTR_Cnt_TotalEngRunTime_Lifetime' incorporates:
     *  Constant: '<S425>/Constant Value2'
     *  Gain: '<S508>/Gain'
     */
    (void)Rte_Write_VePLTR_Cnt_TotalEngRunTime_Lifetime_Value(MAX_uint32_T);

    /* Outport: '<Root>/VePLTR_Cnt_TotalIdleEngRunTime_Recent' incorporates:
     *  Constant: '<S425>/Constant Value3'
     *  Gain: '<S509>/Gain'
     */
    (void)Rte_Write_VePLTR_Cnt_TotalIdleEngRunTime_Recent_Value(MAX_uint32_T);

    /* Outport: '<Root>/VePLTR_Cnt_TotalIdleEngRunTime_Lifetime' incorporates:
     *  Constant: '<S425>/Constant Value4'
     *  Gain: '<S511>/Gain'
     */
    (void)Rte_Write_VePLTR_Cnt_TotalIdleEngRunTime_Lifetime_Value(MAX_uint32_T);

    /* SignalConversion generated from: '<S425>/VePLTR_e_Proxi_Autonomy_Lvl_Init' incorporates:
     *  Constant: '<S496>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_Proxi_Autonomy_ =
        KePLTR_e_Proxi_Autonomy_Lvl_Init;

    /* SignalConversion generated from: '<S425>/VePLTR_e_Proxi_CC_Logic_Init' incorporates:
     *  Constant: '<S497>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_Proxi_CC_Logic_ =
        KePLTR_e_Proxi_CC_Logic_Init;

    /* SignalConversion generated from: '<S425>/VePLTR_b_Hill_Des_Stat_Prx_Init' incorporates:
     *  Constant: '<S472>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_b_Hill_Des_Stat_P =
        KePLTR_b_Hill_Des_Stat_Prx_Init;

    /* SignalConversion generated from: '<S425>/VePLTR_e_MRM_Status_Init' incorporates:
     *  Constant: '<S445>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_MRM_Status_Init =
        PLTR_ac_ConstB.Constant_n;

    /* SignalConversion generated from: '<S425>/VePLTR_b_MRM_Status_FA_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_MRM_Status_FA_I = false;

    /* SignalConversion generated from: '<S425>/VePLTR_e_MRM_Status_C2_Init' incorporates:
     *  Constant: '<S447>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_MRM_Status_C2_I =
        PLTR_ac_ConstB.Constant_lt;

    /* SignalConversion generated from: '<S425>/VePLTR_b_MRM_Status_C2_FA_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_MRM_Status_C2_F = false;

    /* SignalConversion generated from: '<S425>/VePLTR_e_LSMDExtReleaseLockReq_Init' incorporates:
     *  Constant: '<S454>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_LSMDExtReleaseL =
        PLTR_ac_ConstB.Constant_ee;

    /* SignalConversion generated from: '<S425>/VePLTR_b_HotEnablerReq_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_HotEnablerReq_I = false;

    /* SignalConversion generated from: '<S425>/VePLTR_b_SpeedUnit_FA_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_SpeedUnit_FA_In = false;

    /* SignalConversion generated from: '<S425>/VePLTR_b_ACCSystemSts_FA_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_ACCSystemSts_FA = false;

    /* SignalConversion generated from: '<S425>/VePLTR_v_HomSpdLim_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_v_HomSpdLim_Init = 255.0F;

    /* SignalConversion generated from: '<S425>/VePLTR_e_VehCategory_Init' incorporates:
     *  Constant: '<S500>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_VehCategory_Ini =
        KePLTR_e_VehCategory_Init;

    /* SignalConversion generated from: '<S425>/VePLTR_b_HDCEnabledCAN_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_HDCEnabledCAN_I = false;

    /* SignalConversion generated from: '<S425>/VePLTR_b_HDCEnabledCAN_FA_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_HDCEnabledCAN_F = false;

    /* SignalConversion generated from: '<S425>/VePLTR_phi_LwsAngle_Init' incorporates:
     *  Constant: '<S507>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_phi_LwsAngle_Init =
        KePLTR_phi_LwsAngle_Init;

    /* SignalConversion generated from: '<S425>/VePLTR_dphi_LwsSpeed_Init' incorporates:
     *  Constant: '<S490>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_dphi_LwsSpeed_Ini =
        KePLTR_dphi_LwsSpeed_Init;

    /* SignalConversion generated from: '<S425>/VePLTR_e_LwsAngleType_Init' incorporates:
     *  Constant: '<S495>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_LwsAngleType_In =
        KePLTR_e_LwsAngleType_Init;

    /* SignalConversion generated from: '<S425>/VePLTR_a_LongAccel_ORC_Init' incorporates:
     *  Constant: '<S466>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_a_LongAccel_ORC_I =
        KePLTR_a_LongAccel_ORC_Init;

    /* SignalConversion generated from: '<S425>/VePLTR_a_LatAccel_ORC_Init' incorporates:
     *  Constant: '<S465>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_a_LatAccel_ORC_In =
        KePLTR_a_LatAccel_ORC_Init;

    /* SignalConversion generated from: '<S425>/VePLTR_dphi_YawRate_ORC_Init' incorporates:
     *  Constant: '<S491>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_dphi_YawRate_ORC_ =
        KePLTR_dphi_YawRate_ORC_Init;

    /* SignalConversion generated from: '<S425>/VePLTR_b_LongAccelFailSts_ORC_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_LongAccelFailSt = false;

    /* SignalConversion generated from: '<S425>/VePLTR_b_LatAccelFailSts_ORC_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_LatAccelFailSts = false;

    /* SignalConversion generated from: '<S425>/VePLTR_b_YawRateFailSts_ORC_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_YawRateFailSts_ = false;

    /* SignalConversion generated from: '<S425>/VePLTR_b_ProxiCADM_Init' incorporates:
     *  Constant: '<S477>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_b_ProxiCADM_Init = KePLTR_b_ProxiCADM_Init;

    /* SignalConversion generated from: '<S425>/VePLTR_b_ProxiCADM2_Init' incorporates:
     *  Constant: '<S476>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_b_ProxiCADM2_Init =
        KePLTR_b_ProxiCADM2_Init;

    /* SignalConversion generated from: '<S425>/Inverter_PowerDraw_Init' incorporates:
     *  Constant: '<S464>/Calib'
     */
    PLTR_ac_B.OutportBufferForInverter_PowerDraw_Init =
        KePLTR_W_Inverter_PowerDraw_Init;

    /* SignalConversion generated from: '<S425>/Inverter_PowerDraw_FA_Init' */
    PLTR_ac_B.OutportBufferForInverter_PowerDraw_FA_In = false;

    /* SignalConversion generated from: '<S425>/Worksite_Inverter_Active_Init' incorporates:
     *  Constant: '<S489>/Calib'
     */
    PLTR_ac_B.OutportBufferForWorksite_Inverter_Active =
        KePLTR_b_Worksite_Inverter_Active_Init;

    /* SignalConversion generated from: '<S425>/Worksite_Inverter_Active_FA_Init' */
    PLTR_ac_B.OutportBufferForWorksite_Inverter_Acti_f = false;

    /* SignalConversion generated from: '<S425>/Worksite_Inverter_Sts_Init' incorporates:
     *  Constant: '<S502>/Calib'
     */
    PLTR_ac_B.OutportBufferForWorksite_Inverter_Sts_In =
        KePLTR_e_Worksite_Inverter_Sts_Init;

    /* SignalConversion generated from: '<S425>/DrvrSeatSnsrSts_Init' incorporates:
     *  Constant: '<S453>/Constant'
     */
    PLTR_ac_B.OutportBufferForDrvrSeatSnsrSts_Init = PLTR_ac_ConstB.Constant_lf;

    /* SignalConversion generated from: '<S425>/DrvrSeatSnsrSts_FA_Init' */
    PLTR_ac_B.OutportBufferForDrvrSeatSnsrSts_FA_Init = false;

    /* SignalConversion generated from: '<S425>/DrvrSeatSnsr_FailSts_Init' */
    PLTR_ac_B.OutportBufferForDrvrSeatSnsr_FailSts_Ini = false;

    /* SignalConversion generated from: '<S425>/VePLTR_b_AmbientAirPrsFA_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_AmbientAirPrsFA = false;

    /* SignalConversion generated from: '<S425>/FuelLevelLowClster_Init' */
    PLTR_ac_B.OutportBufferForFuelLevelLowClster_Init = false;

    /* SignalConversion generated from: '<S425>/VePLTR_b_CC_Type_Init' incorporates:
     *  Constant: '<S469>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_b_CC_Type_Init = KePLTR_b_CC_Type_Init;

    /* SignalConversion generated from: '<S425>/DriverDetected_Init' incorporates:
     *  Constant: '<S471>/Calib'
     */
    PLTR_ac_B.OutportBufferForDriverDetected_Init = KePLTR_b_DriverDetected_Init;

    /* SignalConversion generated from: '<S425>/VePLTR_b_RRCCPROXI_Init' incorporates:
     *  Constant: '<S485>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_b_RRCCPROXI_Init = KePLTR_b_RRCCPROXI_Init;

    /* SignalConversion generated from: '<S425>/VePLTR_e_BSM_AxleTrq_Enbld_Init' incorporates:
     *  Constant: '<S442>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_BSM_AxleTrq_Enb =
        PLTR_ac_ConstB.Constant_ll;

    /* SignalConversion generated from: '<S425>/VePLTR_e_HAS_TelltaleSts_Init' incorporates:
     *  Constant: '<S494>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_HAS_TelltaleSts =
        KePLTR_e_HAS_TelltaleSts_Init;

    /* SignalConversion generated from: '<S425>/VePLTR_b_HAS_TelltaleSts_FA_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_HAS_TelltaleSts = false;

    /* SignalConversion generated from: '<S425>/VePLTR_e_AEBSystemSts_Init' incorporates:
     *  Constant: '<S492>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_AEBSystemSts_In =
        KePLTR_e_AEBSystemSts_Init;

    /* SignalConversion generated from: '<S425>/VePLTR_b_AEBSystemSts_FA_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_AEBSystemSts_FA = false;

    /* SignalConversion generated from: '<S425>/VePLTR_e_Command_15Sts_Init' incorporates:
     *  Constant: '<S493>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_Command_15Sts_I =
        KePLTR_e_Command_15Sts_Init;

    /* SignalConversion generated from: '<S425>/VePLTR_b_Command_15Sts_FA_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_Command_15Sts_F = false;

    /* SignalConversion generated from: '<S425>/VePLTR_b_LHRDoorSts_Init' incorporates:
     *  Constant: '<S474>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_b_LHRDoorSts_Init =
        KePLTR_b_LHRDoorSts_Init;

    /* SignalConversion generated from: '<S425>/VePLTR_b_LHRDoorSts_FA_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_LHRDoorSts_FA_I = false;

    /* SignalConversion generated from: '<S425>/VePLTR_b_ParkBrakeSts_FA_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_ParkBrakeSts_FA = false;

    /* SignalConversion generated from: '<S425>/VePLTR_b_PsngrDoorSts_Init' incorporates:
     *  Constant: '<S482>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_b_PsngrDoorSts_In =
        KePLTR_b_PsngrDoorSts_Init;

    /* SignalConversion generated from: '<S425>/VePLTR_b_PsngrDoorSts_FA_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_PsngrDoorSts_FA = false;

    /* SignalConversion generated from: '<S425>/VePLTR_b_RHatchSts_Init' incorporates:
     *  Constant: '<S484>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_b_RHatchSts_Init = KePLTR_b_RHatchSts_Init;

    /* SignalConversion generated from: '<S425>/VePLTR_b_RHatchSts_FA_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_RHatchSts_FA_In = false;

    /* SignalConversion generated from: '<S425>/VePLTR_b_RHRDoorSts_Init' incorporates:
     *  Constant: '<S483>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_b_RHRDoorSts_Init =
        KePLTR_b_RHRDoorSts_Init;

    /* SignalConversion generated from: '<S425>/VePLTR_b_RHRDoorSts_FA_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_RHRDoorSts_FA_I = false;

    /* SignalConversion generated from: '<S425>/VePLTR_b_ImmoParkReq_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_ImmoParkReq_Ini = false;

    /* SignalConversion generated from: '<S425>/VePLTR_b_LwsAngleFA_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_LwsAngleFA_Init = false;

    /* SignalConversion generated from: '<S425>/VePLTR_e_eBurn_Stages_Init' incorporates:
     *  Constant: '<S503>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_eBurn_Stages_In =
        KePLTR_e_eBurn_Stages_Init;

    /* SignalConversion generated from: '<S425>/VePLTR_b_eBurn_Stages_FA_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_eBurn_Stages_FA = false;

    /* SignalConversion generated from: '<S425>/VePLTR_l_TravelDistance_Init' incorporates:
     *  Constant: '<S505>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_l_TravelDistance_ =
        KePLTR_l_TravelDistance_Init;

    /* SignalConversion generated from: '<S425>/VePLTR_b_TravelDistance_FA_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_TravelDistance_ = false;

    /* SignalConversion generated from: '<S425>/VePLTR_tdy_GPS_Date_Day_PwrOn' */
    PLTR_ac_B.OutportBufferForVePLTR_tdy_GPS_Date_Day_ = 0.0F;

    /* SignalConversion generated from: '<S425>/VePLTR_b_GPS_Date_DayFA_PwrOn' */
    PLTR_ac_B.OutportBufferForVePLTR_b_GPS_Date_DayFA_ = true;

    /* SignalConversion generated from: '<S425>/VePLTR_tmt_GPS_Date_Month_PwrOn' */
    PLTR_ac_B.OutportBufferForVePLTR_tmt_GPS_Date_Mont = 0.0F;

    /* SignalConversion generated from: '<S425>/VePLTR_b_GPS_Date_MonthFA_PwrOn' */
    PLTR_ac_B.OutportBufferForVePLTR_b_GPS_Date_MonthF = true;

    /* SignalConversion generated from: '<S425>/VePLTR_tyr_GPS_Date_Year_PwrOn' */
    PLTR_ac_B.OutportBufferForVePLTR_tyr_GPS_Date_Year = 0.0F;

    /* SignalConversion generated from: '<S425>/VePLTR_b_GPS_Date_YearFA_PwrOn' */
    PLTR_ac_B.OutportBufferForVePLTR_b_GPS_Date_YearFA = true;

    /* SignalConversion generated from: '<S425>/VePLTR_thr_GPS_UTC_Hour_PwrOn' */
    PLTR_ac_B.OutportBufferForVePLTR_thr_GPS_UTC_Hour_ = 0.0F;

    /* SignalConversion generated from: '<S425>/VePLTR_b_GPS_UTC_HourFA_PwrOn' */
    PLTR_ac_B.OutportBufferForVePLTR_b_GPS_UTC_HourFA_ = true;

    /* SignalConversion generated from: '<S425>/VePLTR_tmn_GPS_UTC_Minute_PwrOn' */
    PLTR_ac_B.OutportBufferForVePLTR_tmn_GPS_UTC_Minut = 0.0F;

    /* SignalConversion generated from: '<S425>/VePLTR_b_GPS_UTC_MinuteFA_PwrOn' */
    PLTR_ac_B.OutportBufferForVePLTR_b_GPS_UTC_MinuteF = true;

    /* SignalConversion generated from: '<S425>/VePLTR_t_GPS_UTC_Second_PwrOn' */
    PLTR_ac_B.OutportBufferForVePLTR_t_GPS_UTC_Second_ = 0.0F;

    /* SignalConversion generated from: '<S425>/VePLTR_b_GPS_UTC_SecondFA_PwrOn' */
    PLTR_ac_B.OutportBufferForVePLTR_b_GPS_UTC_SecondF = true;

    /* SignalConversion generated from: '<S425>/VePLTR_e_FaultSts_IgnKeyOffTmrPerfTooFast_Init' incorporates:
     *  Constant: '<S425>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_FaultSts_IgnKey =
        PLTR_ac_ConstB.Constant_bw;

    /* SignalConversion generated from: '<S425>/VePLTR_e_RTCTestSyncReport_Init' incorporates:
     *  Constant: '<S462>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_RTCTestSyncRepo =
        PLTR_ac_ConstB.Constant_a;

    /* SignalConversion generated from: '<S425>/VePLTR_e_SelectSpdSts_Init' incorporates:
     *  Constant: '<S456>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_SelectSpdSts_In =
        PLTR_ac_ConstB.Constant_ly;

    /* SignalConversion generated from: '<S425>/VePLTR_b_SelectSpdSts_FA_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_SelectSpdSts_FA = false;

    /* SignalConversion generated from: '<S425>/VePLTR_e_ParkingGearShiftReq_BSM_Init' incorporates:
     *  Constant: '<S458>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_ParkingGearShif =
        PLTR_ac_ConstB.Constant_h2;

    /* SignalConversion generated from: '<S425>/VePLTR_b_ParkingGearShiftReq_BSM_FA_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_ParkingGearShif = false;

    /* SignalConversion generated from: '<S425>/VePLTR_Pct_Slope_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_Pct_Slope_Init = 0.0F;

    /* SignalConversion generated from: '<S425>/VePLTR_b_Slope_FA_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_Slope_FA_Init = false;

    /* SignalConversion generated from: '<S425>/VePLTR_y_FobSearchResult_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_y_FobSearchResult = 0U;

    /* SignalConversion generated from: '<S425>/VePLTR_b_FobSearchResult_FA_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_FobSearchResult = false;

    /* SignalConversion generated from: '<S425>/VePLTR_b_Secure_Idle_Req_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_Secure_Idle_Req = false;

    /* SignalConversion generated from: '<S425>/VePLTR_b_Secure_Idle_Req_FA_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_Secure_Idle_R_f = false;

    /* SignalConversion generated from: '<S425>/VePLTR_e_HiBmLvr_Stat_Init' incorporates:
     *  Constant: '<S433>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_HiBmLvr_Stat_In =
        PLTR_ac_ConstB.Constant_ay;

    /* SignalConversion generated from: '<S425>/VePLTR_b_HiBmLvr_Stat_FA_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_HiBmLvr_Stat_FA = false;

    /* SignalConversion generated from: '<S425>/VePLTR_b_RearFogLightSts_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_RearFogLightSts = false;

    /* SignalConversion generated from: '<S425>/VePLTR_y_AUD_LVL_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_y_AUD_LVL_Init = 0U;

    /* SignalConversion generated from: '<S425>/VePLTR_b_AUD_LVL_FA_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_AUD_LVL_FA_Init = false;

    /* SignalConversion generated from: '<S425>/VePLTR_b_ADS_SrvSys_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_ADS_SrvSys_Init = false;

    /* SignalConversion generated from: '<S425>/VePLTR_b_ADS_SrvSys_FA_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_ADS_SrvSys_FA_I = false;

    /* SignalConversion generated from: '<S425>/VePLTR_b_ASCM_Srv_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_ASCM_Srv_Init = false;

    /* SignalConversion generated from: '<S425>/VePLTR_b_ASCM_Srv_FA_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_ASCM_Srv_FA_Ini = false;

    /* SignalConversion generated from: '<S425>/VePLTR_e_ASCM_Stat_Init' incorporates:
     *  Constant: '<S437>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_ASCM_Stat_Init =
        PLTR_ac_ConstB.Constant_nd;

    /* SignalConversion generated from: '<S425>/VePLTR_b_ASCM_Stat_FA_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_ASCM_Stat_FA_In = false;

    /* SignalConversion generated from: '<S425>/VePLTR_b_ASCM_SysFail_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_ASCM_SysFail_In = false;

    /* SignalConversion generated from: '<S425>/VePLTR_b_ASCM_SysFail_FA_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_ASCM_SysFail_FA = false;

    /* SignalConversion generated from: '<S425>/VePLTR_e_DriverDoorOnOffSts_Init' incorporates:
     *  Constant: '<S440>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_DriverDoorOnOff =
        PLTR_ac_ConstB.Constant_ek;

    /* SignalConversion generated from: '<S425>/VePLTR_b_DriverDoorOnOffSts_FA_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_DriverDoorOnOff = false;

    /* S-Function (fcgen): '<S86>/FcnCallGen' incorporates:
     *  SubSystem: '<S86>/RTCArbitration'
     */
    /* If: '<S426>/If1' incorporates:
     *  Constant: '<S512>/Calib'
     */
    if (HePLTR_b_EnblGen1RTC)
    {
        /* Outputs for IfAction SubSystem: '<S426>/RTCFromBPCM' incorporates:
         *  ActionPort: '<S513>/Action Port'
         */
        PLTR_ac_RTCFromBPCM(rtb_HVBatRealTimeClock_BPCM_write_IRV,
                            rtb_HVBatRealTimeClock_FA_BPCM_write_IRV,
                            rtb_HVBatSleepTime_BPCM_write_IRV,
                            &PLTR_ac_B.Merge_a, &PLTR_ac_B.Merge1_a,
                            &PLTR_ac_B.Merge2_e);

        /* End of Outputs for SubSystem: '<S426>/RTCFromBPCM' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S426>/RTCFromBSW' incorporates:
         *  ActionPort: '<S514>/Action Port'
         */
        /* Merge: '<S426>/Merge' incorporates:
         *  DataStoreRead: '<S514>/Data Store Read'
         */
        PLTR_ac_B.Merge_a = EePLTR_t_RTCTime;

        /* Merge: '<S426>/Merge1' incorporates:
         *  DataStoreRead: '<S514>/Data Store Read2'
         */
        PLTR_ac_B.Merge1_a = EePLTR_b_RTC_CurrentTimeFA;

        /* Merge: '<S426>/Merge2' incorporates:
         *  DataStoreRead: '<S514>/Data Store Read1'
         */
        PLTR_ac_B.Merge2_e = EePLTR_t_PowerdownTime;

        /* End of Outputs for SubSystem: '<S426>/RTCFromBSW' */
    }

    /* End of If: '<S426>/If1' */

    /* SignalConversion generated from: '<S426>/VePLTI_t_HCPOffTime_Init' */
    PLTR_ac_B.OutportBufferForVePLTI_t_HCPOffTime_Init = 0U;

    /* S-Function (fcgen): '<S86>/FcnCallGen' incorporates:
     *  SubSystem: '<S86>/AtmPress_100ms'
     */
    PLTR_ac_AtmPress_100ms(rtb_VePLTR_p_AmbientAirPrs_write_IRV,
                           &PLTR_ac_B.AtmPress_100ms_e);

    /* S-Function (fcgen): '<S86>/FcnCallGen' incorporates:
     *  SubSystem: '<S86>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S427>/VePLTR_b_CrsCntrlActv_Out_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_CrsCntrlActv_Ou = false;

    /* SignalConversion generated from: '<S427>/VePLTR_e_VehicleCountryCode_Out_Init' incorporates:
     *  Constant: '<S427>/Const2'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_VehicleCountryC = PLTR_ac_ConstB.Const2;

    /* SignalConversion generated from: '<S427>/VePLTR_e_ShippingMode_Out_Init' incorporates:
     *  Constant: '<S427>/Const3'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_ShippingMode_Ou = PLTR_ac_ConstB.Const3;

    /* SignalConversion generated from: '<S427>/VePLTR_milel_InPlntMileageLmt_Miles_Out_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_milel_InPlntMilea = 0.0F;

    /* SignalConversion generated from: '<S427>/VePLTR_milel_Odometer_Miles_Out_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_milel_Odometer_Mi = 0.0F;

    /* SignalConversion generated from: '<S427>/VePLTR_phi_EstSlopeAngle_Out_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_phi_EstSlopeAngle = 0.0F;

    /* SignalConversion generated from: '<S427>/VePLTR_b_EstSlopeAngleFA_Out_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_EstSlopeAngleFA = false;

    /* SignalConversion generated from: '<S427>/VePLTR_b_ChargeReqSgnlRcvd_Out_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_ChargeReqSgnlRc = false;

    /* SignalConversion generated from: '<S427>/VePLTR_phi_EstRollAngleAtZeroSpd_Out_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_phi_EstRollAngleA = 0.0F;

    /* SignalConversion generated from: '<S427>/VePLTR_b_EstRollAngleAtZeroSpdFA_Out_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_EstRollAngleAtZ = false;

    /* SignalConversion generated from: '<S427>/VePLTR_b_WarmupAchieved_Out_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_WarmupAchieved_ = false;

    /* SignalConversion generated from: '<S427>/VePLTR_b_SpeedUnit_Out_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_SpeedUnit_Out_I = false;

    /* SignalConversion generated from: '<S427>/VePLTR_e_ESMTransRngSt_Out_Init' incorporates:
     *  Constant: '<S427>/Const15'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_ESMTransRngSt_O = PLTR_ac_ConstB.Const15;

    /* SignalConversion generated from: '<S427>/VePLTR_e_AutoPosCorrMd_Out_Init' incorporates:
     *  Constant: '<S427>/Const16'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_AutoPosCorrMd_O = PLTR_ac_ConstB.Const16;

    /* SignalConversion generated from: '<S427>/VePLTR_b_ShftLckFlt_Out_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_ShftLckFlt_Out_ = false;

    /* SignalConversion generated from: '<S427>/VePLTR_b_RackFaultFA_Out_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_RackFaultFA_Out = false;

    /* SignalConversion generated from: '<S427>/VePLTR_b_ShftSnsFA_Out_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_ShftSnsFA_Out_I = false;

    /* SignalConversion generated from: '<S427>/VePLTR_b_ShiftDspFlt_Out_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_ShiftDspFlt_Out = false;

    /* SignalConversion generated from: '<S427>/VePLTR_y_GatedParkSwFlt_Out_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_y_GatedParkSwFlt_ = 0;

    /* SignalConversion generated from: '<S427>/VePLTR_e_ShiftLeverPosReq_Out_Init' incorporates:
     *  Constant: '<S427>/Const22'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_ShiftLeverPosRe = PLTR_ac_ConstB.Const22;

    /* SignalConversion generated from: '<S427>/VePLTR_b_ShiftLeverFailSts_Out_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_ShiftLeverFailS = false;

    /* SignalConversion generated from: '<S427>/VePLTR_b_PRNDFailSts_Out_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_PRNDFailSts_Out = false;

    /* SignalConversion generated from: '<S427>/VePLTR_b_RFHub_ForcePark_Out_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_RFHub_ForcePark = false;

    /* SignalConversion generated from: '<S427>/VePLTR_e_RationalisedRngSt_Out_Init' incorporates:
     *  Constant: '<S427>/Const26'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_RationalisedRng = PLTR_ac_ConstB.Const26;

    /* SignalConversion generated from: '<S427>/VePLTR_e_ValidatePstn_Out_Init' incorporates:
     *  Constant: '<S427>/Const27'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_ValidatePstn_Ou = PLTR_ac_ConstB.Const27;

    /* SignalConversion generated from: '<S427>/VePLTR_b_ManualMode_Out_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_ManualMode_Out_ = false;

    /* SignalConversion generated from: '<S427>/VePLTR_Pct_EstSlopeAnglePct_Out_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_Pct_EstSlopeAngle = 0.0F;

    /* SignalConversion generated from: '<S427>/VePLTR_b_DAI_Enbl_Out_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_b_DAI_Enbl_Out_In = false;

    /* Outport: '<Root>/VePLTR_b_ResetFlagRecent_EEerror' incorporates:
     *  SignalConversion generated from: '<S427>/ResetFlagForRecentNeError'
     */
    (void)Rte_Write_VePLTR_b_ResetFlagRecent_EEerror_Value(false);

    /* SignalConversion generated from: '<S427>/FuelConsumption_1s' */
    PLTR_ac_B.OutportBufferForFuelConsumption_1s = 0.0F;

    /* SignalConversion generated from: '<S427>/ClrTrackingInfo_1s' */
    PLTR_ac_B.OutportBufferForClrTrackingInfo_1s = false;

    /* SignalConversion generated from: '<S427>/HVBatRealTimeClock_BPCM_write' */
    PLTR_ac_B.OutportBufferForHVBatRealTimeClock_BPCM_ = 0U;

    /* SignalConversion generated from: '<S427>/HVBatRealTimeClock_FA_BPCM_write' */
    PLTR_ac_B.OutportBufferForHVBatRealTimeClock_FA_BP = false;

    /* SignalConversion generated from: '<S427>/HVBatSleepTime_BPCM_write' */
    PLTR_ac_B.OutportBufferForHVBatSleepTime_BPCM_writ = 0U;

    /* SignalConversion generated from: '<S427>/VehSpd_write' */
    PLTR_ac_B.OutportBufferForVehSpd_write = 0.0F;

    /* SignalConversion generated from: '<S427>/OutTorqReqModHH_write' */
    PLTR_ac_B.OutportBufferForOutTorqReqModHH_write = 0.0F;

    /* SignalConversion generated from: '<S427>/Toggle_1s_write' */
    PLTR_ac_B.OutportBufferForToggle_1s_write = false;

    /* SignalConversion generated from: '<S427>/VePLTI_b_ResetFlagLifetime' */
    PLTR_ac_B.OutportBufferForVePLTI_b_ResetFlagLifeti = false;

    /* SignalConversion generated from: '<S427>/VePLTR_e_FaultSts_ECUInplantmodeAct' incorporates:
     *  Constant: '<S518>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_FaultSts_ECUInp =
        PLTR_ac_ConstB.Constant_j;

    /* S-Function (fcgen): '<S427>/FunctionCallGenerator1' incorporates:
     *  SubSystem: '<S427>/PwrOffOk_Reading'
     */
    /* Logic: '<S519>/Logical Operator' incorporates:
     *  DataStoreRead: '<S519>/Data Store Read'
     */
    PLTR_ac_B.LogicalOperator_b = !AePLTR_b_PwrOffOk;

    /* S-Function (fcgen): '<S427>/FunctionCallGenerator1' incorporates:
     *  SubSystem: '<S427>/PwrOffOk_Writing'
     */
    /* DataStoreWrite: '<S520>/Data Store Write' incorporates:
     *  Constant: '<S520>/FALSE Constant2'
     */
    AePLTR_b_PwrOffOk = false;

    /* Outport: '<Root>/AePLTR_b_PwrOffOk_Strimm_Out' incorporates:
     *  DataStoreRead: '<S520>/Data Store Read'
     */
    (void)Rte_Write_AePLTR_b_PwrOffOk_AePLTR_b_PwrOffOk(AePLTR_b_PwrOffOk);

    /* End of Outputs for S-Function (fcgen): '<S427>/FunctionCallGenerator1' */
    /* End of Outputs for S-Function (fcgen): '<S86>/FcnCallGen' */

    /* Outport: '<Root>/VePLTR_pmbar_AmbientAirPrs' incorporates:
     *  SignalConversion generated from: '<S86>/AmbientAirPrs'
     */
    (void)Rte_Write_VePLTR_pmbar_AmbientAirPrs_Value
        (PLTR_ac_B.AtmPress_100ms_e.VePLTR_pmbar_AmbientAirPrs);

    /* Outport: '<Root>/VePLTR_b_ClrTrackingInfo' incorporates:
     *  SignalConversion generated from: '<S86>/ClrTrackingInfo_1s'
     */
    (void)Rte_Write_VePLTR_b_ClrTrackingInfo_Value
        (PLTR_ac_B.OutportBufferForClrTrackingInfo_1s);

    /* Outport: '<Root>/VePLTR_b_DriverDetected' incorporates:
     *  SignalConversion generated from: '<S86>/DriverDetected_Init'
     */
    (void)Rte_Write_VePLTR_b_DriverDetected_Value
        (PLTR_ac_B.OutportBufferForDriverDetected_Init);

    /* Outport: '<Root>/VePLTR_dVh_FuelConsumption_avrg' incorporates:
     *  SignalConversion generated from: '<S86>/FuelConsumption_1s'
     */
    (void)Rte_Write_VePLTR_dVh_FuelConsumption_avrg_Value
        (PLTR_ac_B.OutportBufferForFuelConsumption_1s);

    /* Outport: '<Root>/VePLTR_b_FuelLevelLowClster' incorporates:
     *  SignalConversion generated from: '<S86>/FuelLevelLowClster_Init'
     */
    (void)Rte_Write_VePLTR_b_FuelLevelLowClster_Value
        (PLTR_ac_B.OutportBufferForFuelLevelLowClster_Init);

    /* Outport: '<Root>/VePLTR_b_Inverter_PowerDraw_FA' incorporates:
     *  SignalConversion generated from: '<S86>/Inverter_PowerDraw_FA_Init'
     */
    (void)Rte_Write_VePLTR_b_Inverter_PowerDraw_FA_Value
        (PLTR_ac_B.OutportBufferForInverter_PowerDraw_FA_In);

    /* Outport: '<Root>/VePLTR_W_Inverter_PowerDraw' incorporates:
     *  SignalConversion generated from: '<S86>/Inverter_PowerDraw_Init'
     */
    (void)Rte_Write_VePLTR_W_Inverter_PowerDraw_Value
        (PLTR_ac_B.OutportBufferForInverter_PowerDraw_Init);

    /* Outport: '<Root>/VePLTR_e_FaultSts_ECUInplantmodeAct' incorporates:
     *  SignalConversion generated from: '<S427>/VePLTR_e_FaultSts_ECUInplantmodeAct'
     *  SignalConversion generated from: '<S86>/R_VePLTR_e_FaultSts_ECUInplantmodeAct'
     */
    (void)Rte_Write_VePLTR_e_FaultSts_ECUInplantmodeAct_Value
        (PLTR_ac_B.OutportBufferForVePLTR_e_FaultSts_ECUInp);

    /* Outport: '<Root>/VePLTR_b_Prmry_TransShiftPstnFA' incorporates:
     *  SignalConversion generated from: '<S86>/ShiftPosFlt_InitMSG'
     */
    (void)Rte_Write_VePLTR_b_Prmry_TransShiftPstnFA_Value
        (PLTR_ac_B.OutportBufferForShiftPosFlt_InitMSG);

    /* Outport: '<Root>/VePLTR_b_Scndry_TransShiftPstnFA' incorporates:
     *  SignalConversion generated from: '<S86>/ShiftPosFlt_IntMSG'
     */
    (void)Rte_Write_VePLTR_b_Scndry_TransShiftPstnFA_Value
        (PLTR_ac_B.OutportBufferForShiftPosFlt_IntMSG);

    /* Outport: '<Root>/VePLTR_e_Prmry_TransShiftPstn' incorporates:
     *  SignalConversion generated from: '<S425>/TransShiftPosInitMSG'
     *  SignalConversion generated from: '<S86>/TransShiftPosInitMSG'
     */
    (void)Rte_Write_VePLTR_e_Prmry_TransShiftPstn_Value
        (PLTR_ac_B.OutportBufferForTransShiftPosInitMSG);

    /* Outport: '<Root>/VePLTR_e_Scndry_TransShiftPstn' incorporates:
     *  SignalConversion generated from: '<S425>/TransShiftPos_InitMSG'
     *  SignalConversion generated from: '<S86>/TransShiftPos_InitMSG'
     */
    (void)Rte_Write_VePLTR_e_Scndry_TransShiftPstn_Value
        (PLTR_ac_B.OutportBufferForTransShiftPos_InitMSG);

    /* S-Function (fcgen): '<S86>/FcnCallGen' incorporates:
     *  SubSystem: '<S86>/Initialize_PTLI_Outputs'
     */
    /* Outport: '<Root>/VePLTR_Pct_InPlant_SOCSetPt' incorporates:
     *  DataStoreRead: '<S425>/Data Store Read4'
     *  SignalConversion generated from: '<S86>/VePLTI_Pct_InPlantSOCSetPt_Init'
     */
    (void)Rte_Write_VePLTR_Pct_InPlant_SOCSetPt_Value
        (PLTR_ac_DW.AePLTR_Pct_IP_SOCSetPt);

    /* Outport: '<Root>/VePLTR_Pct_REMLogisticSOCSetPt' incorporates:
     *  DataStoreRead: '<S425>/Data Store Read'
     *  SignalConversion generated from: '<S86>/VePLTI_Pct_REMLogisticSOCSetPt_Init'
     */
    (void)Rte_Write_VePLTR_Pct_REMLogisticSOCSetPt_Value
        (PLTR_ac_DW.AePLTR_Pct_CS_SOCSetPt);

    /* End of Outputs for S-Function (fcgen): '<S86>/FcnCallGen' */

    /* Outport: '<Root>/VePLTR_b_EPBFailSts' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTI_b_EPBFailStsInit'
     */
    (void)Rte_Write_VePLTR_b_EPBFailSts_Value
        (PLTR_ac_B.OutportBufferForVePLTI_b_EPBFailStsInit);

    /* Outport: '<Root>/VePLTR_b_EPBHoldStsFA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTI_b_EPBHoldStsFA'
     */
    (void)Rte_Write_VePLTR_b_EPBHoldStsFA_Value
        (PLTR_ac_B.OutportBufferForVePLTI_b_EPBHoldStsFA);

    /* S-Function (fcgen): '<S86>/FcnCallGen' incorporates:
     *  SubSystem: '<S86>/RTCArbitration'
     */
    /* Outport: '<Root>/VePLTR_b_HCPOffTimeFA' incorporates:
     *  DataStoreRead: '<S426>/Data Store Read3'
     *  SignalConversion generated from: '<S86>/VePLTI_b_HCPOffTimeFA_Init'
     */
    (void)Rte_Write_VePLTR_b_HCPOffTimeFA_Value(EePLTR_b_RTC_CurrentTimeFA);

    /* S-Function (fcgen): '<S86>/FcnCallGen' incorporates:
     *  SubSystem: '<S86>/Initialize_PTLI_Outputs'
     */
    /* Outport: '<Root>/VePLTR_b_InFieldMode' incorporates:
     *  DataStoreRead: '<S425>/Data Store Read3'
     *  SignalConversion generated from: '<S86>/VePLTI_b_InFieldMode'
     */
    (void)Rte_Write_VePLTR_b_InFieldMode_Value(AePLTR_b_InFieldMode);

    /* End of Outputs for S-Function (fcgen): '<S86>/FcnCallGen' */

    /* Outport: '<Root>/VePLTR_b_MILOnRq_ESC' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTI_b_MILOnRq_ESCInit'
     */
    (void)Rte_Write_VePLTR_b_MILOnRq_ESC_Value
        (PLTR_ac_B.OutportBufferForVePLTI_b_MILOnRq_ESCInit);

    /* Outport: '<Root>/VePLTR_b_Odometer_KmFA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTI_b_Odometer_KmFA_Init'
     */
    (void)Rte_Write_VePLTR_b_Odometer_KmFA_Value
        (PLTR_ac_B.OutportBufferForVePLTI_b_Odometer_FA);

    /* Outport: '<Root>/VePLTR_b_RTC_CurrentTimeFA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTI_b_RTC_CurrentTimeFA_Init'
     */
    (void)Rte_Write_VePLTR_b_RTC_CurrentTimeFA_Value(PLTR_ac_B.Merge1_a);

    /* Outport: '<Root>/VePLTR_b_ResetFlagLifetime_EEerror' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTI_b_ResetFlagLifetime'
     */
    (void)Rte_Write_VePLTR_b_ResetFlagLifetime_EEerror_Value
        (PLTR_ac_B.OutportBufferForVePLTI_b_ResetFlagLifeti);

    /* S-Function (fcgen): '<S86>/FcnCallGen' incorporates:
     *  SubSystem: '<S86>/Initialize_PTLI_Outputs'
     */
    /* Outport: '<Root>/VePLTR_i_ShippingModeRaw' incorporates:
     *  Constant: '<S431>/Constant'
     *  DataTypeConversion: '<S425>/DTCBlk25'
     *  SignalConversion generated from: '<S86>/VePLTI_e_ShippingModeRaw'
     */
    (void)Rte_Write_VePLTR_i_ShippingModeRaw_Value(CePLTR_e_ShipingMode_NOT_PROG);

    /* End of Outputs for S-Function (fcgen): '<S86>/FcnCallGen' */

    /* Outport: '<Root>/VePLTR_kl_Odometer_Km' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTI_kl_Odometer_Km_Init'
     */
    (void)Rte_Write_VePLTR_kl_Odometer_Km_Value
        (PLTR_ac_B.OutportBufferForVePLTI_kl_Odometer_Km);

    /* Outport: '<Root>/VePLTR_t_HCPOffTime' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTI_t_HCPOffTime_Init'
     */
    (void)Rte_Write_VePLTR_t_HCPOffTime_Value
        (PLTR_ac_B.OutportBufferForVePLTI_t_HCPOffTime_Init);

    /* Outport: '<Root>/VePLTR_t_RTC_CurrentTime' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTI_t_RTC_CurrentTime_Init'
     */
    (void)Rte_Write_VePLTR_t_RTC_CurrentTime_Value(PLTR_ac_B.Merge_a);

    /* Outport: '<Root>/VePLTR_t_RTC_SleepTime' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTI_t_RTC_SleepTime_Init'
     */
    (void)Rte_Write_VePLTR_t_RTC_SleepTime_Value(PLTR_ac_B.Merge2_e);

    /* Outport: '<Root>/VePLTR_Pct_EstSlopeAnglePct' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_Pct_EstSlopeAnglePct_Out_Init'
     */
    (void)Rte_Write_VePLTR_Pct_EstSlopeAnglePct_Value
        (PLTR_ac_B.OutportBufferForVePLTR_Pct_EstSlopeAngle);

    /* Outport: '<Root>/VePLTR_Pct_ProxiSpdomtrTol' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_Pct_ProxiSpdomtrTol_Init'
     */
    (void)Rte_Write_VePLTR_Pct_ProxiSpdomtrTol_Value
        (PLTR_ac_B.OutportBufferForVePLTR_Pct_ProxiSpdomtrT);

    /* Outport: '<Root>/VePLTR_Pct_Slope' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_Pct_Slope_Init'
     */
    (void)Rte_Write_VePLTR_Pct_Slope_Value
        (PLTR_ac_B.OutportBufferForVePLTR_Pct_Slope_Init);

    /* Outport: '<Root>/VePLTR_a_LatAccel' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_a_LatAccel'
     */
    (void)Rte_Write_VePLTR_a_LatAccel_Value
        (PLTR_ac_B.OutportBufferForVePLTR_a_LatAccel);

    /* Outport: '<Root>/VePLTR_a_LatAccel_ORC' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_a_LatAccel_ORC_Init'
     */
    (void)Rte_Write_VePLTR_a_LatAccel_ORC_Value
        (PLTR_ac_B.OutportBufferForVePLTR_a_LatAccel_ORC_In);

    /* Outport: '<Root>/VePLTR_a_LongAccel' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_a_LongAccel'
     */
    (void)Rte_Write_VePLTR_a_LongAccel_Value
        (PLTR_ac_B.OutportBufferForVePLTR_a_LongAccel);

    /* Outport: '<Root>/VePLTR_a_LongAccelOffset' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_a_LongAccelOffset'
     */
    (void)Rte_Write_VePLTR_a_LongAccelOffset_Value
        (PLTR_ac_B.OutportBufferForVePLTR_a_LongAccelOffset);

    /* Outport: '<Root>/VePLTR_a_LongAccel_ORC' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_a_LongAccel_ORC_Init'
     */
    (void)Rte_Write_VePLTR_a_LongAccel_ORC_Value
        (PLTR_ac_B.OutportBufferForVePLTR_a_LongAccel_ORC_I);

    /* Outport: '<Root>/VePLTR_b_ACCSystemSts_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_ACCSystemSts_FA_Init'
     */
    (void)Rte_Write_VePLTR_b_ACCSystemSts_FA_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_ACCSystemSts_FA);

    /* Outport: '<Root>/VePLTR_b_ACC_OnFA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_ACC_OnFA_Init'
     */
    (void)Rte_Write_VePLTR_b_ACC_OnFA_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_ACC_OnFA_Init);

    /* Outport: '<Root>/VePLTR_b_ACC_On' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_ACC_On_Init'
     */
    (void)Rte_Write_VePLTR_b_ACC_On_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_ACC_On_Init);

    /* Outport: '<Root>/VePLTR_b_ADS_SrvSys_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_ADS_SrvSys_FA_Init'
     */
    (void)Rte_Write_VePLTR_b_ADS_SrvSys_FA_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_ADS_SrvSys_FA_I);

    /* Outport: '<Root>/VePLTR_b_ADS_SrvSys' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_ADS_SrvSys_Init'
     */
    (void)Rte_Write_VePLTR_b_ADS_SrvSys_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_ADS_SrvSys_Init);

    /* Outport: '<Root>/VePLTR_b_AEBSystemSts_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_AEBSystemSts_FA_Init'
     */
    (void)Rte_Write_VePLTR_b_AEBSystemSts_FA_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_AEBSystemSts_FA);

    /* Outport: '<Root>/VePLTR_b_ASCM_Srv_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_ASCM_Srv_FA_Init'
     */
    (void)Rte_Write_VePLTR_b_ASCM_Srv_FA_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_ASCM_Srv_FA_Ini);

    /* Outport: '<Root>/VePLTR_b_ASCM_Srv' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_ASCM_Srv_Init'
     */
    (void)Rte_Write_VePLTR_b_ASCM_Srv_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_ASCM_Srv_Init);

    /* Outport: '<Root>/VePLTR_b_ASCM_Stat_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_ASCM_Stat_FA_Init'
     */
    (void)Rte_Write_VePLTR_b_ASCM_Stat_FA_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_ASCM_Stat_FA_In);

    /* Outport: '<Root>/VePLTR_b_ASCM_SysFail_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_ASCM_SysFail_FA_Init'
     */
    (void)Rte_Write_VePLTR_b_ASCM_SysFail_FA_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_ASCM_SysFail_FA);

    /* Outport: '<Root>/VePLTR_b_ASCM_SysFail' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_ASCM_SysFail_Init'
     */
    (void)Rte_Write_VePLTR_b_ASCM_SysFail_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_ASCM_SysFail_In);

    /* Outport: '<Root>/VePLTR_b_AUD_LVL_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_AUD_LVL_FA_Init'
     */
    (void)Rte_Write_VePLTR_b_AUD_LVL_FA_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_AUD_LVL_FA_Init);

    /* Outport: '<Root>/VePLTR_b_AmbientAirPrsFA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_AmbientAirPrsFA_Init'
     */
    (void)Rte_Write_VePLTR_b_AmbientAirPrsFA_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_AmbientAirPrsFA);

    /* Outport: '<Root>/VePLTR_b_BatteryWasDisconnected' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_BatteryWasDisconnected_Init'
     */
    (void)Rte_Write_VePLTR_b_BatteryWasDisconnected_Value
        (PLTR_ac_B.LogicalOperator_b);

    /* Outport: '<Root>/VePLTR_b_CC_Type' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_CC_Type_Init'
     */
    (void)Rte_Write_VePLTR_b_CC_Type_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_CC_Type_Init);

    /* Outport: '<Root>/VePLTR_b_ChargeReq' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_ChargeReq'
     */
    (void)Rte_Write_VePLTR_b_ChargeReq_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_ChargeReq);

    /* Outport: '<Root>/VePLTR_b_ChargeReqSgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_ChargeReqSgnlRcvd_Out_Init'
     */
    (void)Rte_Write_VePLTR_b_ChargeReqSgnlRcvd_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_ChargeReqSgnlRc);

    /* Outport: '<Root>/VePLTR_b_Command_15Sts_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_Command_15Sts_FA_Init'
     */
    (void)Rte_Write_VePLTR_b_Command_15Sts_FA_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_Command_15Sts_F);

    /* Outport: '<Root>/VePLTR_b_CrsCntrlActv' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_CrsCntrlActv_Out_Init'
     */
    (void)Rte_Write_VePLTR_b_CrsCntrlActv_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_CrsCntrlActv_Ou);

    /* Outport: '<Root>/VePLTR_b_DAI_Enbl' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_DAI_Enbl_Out_Init'
     */
    (void)Rte_Write_VePLTR_b_DAI_Enbl_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_DAI_Enbl_Out_In);

    /* Outport: '<Root>/VePLTR_b_DrvDrAjar' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_DrvDrAjar'
     */
    (void)Rte_Write_VePLTR_b_DrvDrAjar_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_DrvDrAjar);

    /* Outport: '<Root>/VePLTR_b_DrvDrAjarFA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_DrvDrAjarFA'
     */
    (void)Rte_Write_VePLTR_b_DrvDrAjarFA_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_DrvDrAjarFA);

    /* Outport: '<Root>/VePLTR_b_ERS_SWFA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_ERS_SWFA'
     */
    (void)Rte_Write_VePLTR_b_ERS_SWFA_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_ERS_SWFA);

    /* Outport: '<Root>/VePLTR_b_ESSRqShftPark' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_ESSRqShftPark'
     */
    (void)Rte_Write_VePLTR_b_ESSRqShftPark_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_ESSRqShftPark);

    /* Outport: '<Root>/VePLTR_b_EstRollAngleAtZeroSpdFA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_EstRollAngleAtZeroSpdFA_Out_Init'
     */
    (void)Rte_Write_VePLTR_b_EstRollAngleAtZeroSpdFA_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_EstRollAngleAtZ);

    /* Outport: '<Root>/VePLTR_b_EstSlopeAngleFA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_EstSlopeAngleFA_Out_Init'
     */
    (void)Rte_Write_VePLTR_b_EstSlopeAngleFA_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_EstSlopeAngleFA);

    /* Outport: '<Root>/VePLTR_b_FobSearchResult_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_FobSearchResult_FA_Init'
     */
    (void)Rte_Write_VePLTR_b_FobSearchResult_FA_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_FobSearchResult);

    /* Outport: '<Root>/VePLTR_b_HAS_TelltaleSts_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_HAS_TelltaleSts_FA_Init'
     */
    (void)Rte_Write_VePLTR_b_HAS_TelltaleSts_FA_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_HAS_TelltaleSts);

    /* Outport: '<Root>/VePLTR_b_HDCEnabledCAN_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_HDCEnabledCAN_FA_Init'
     */
    (void)Rte_Write_VePLTR_b_HDCEnabledCAN_FA_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_HDCEnabledCAN_F);

    /* Outport: '<Root>/VePLTR_b_HDCEnabledCAN' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_HDCEnabledCAN_Init'
     */
    (void)Rte_Write_VePLTR_b_HDCEnabledCAN_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_HDCEnabledCAN_I);

    /* Outport: '<Root>/VePLTR_b_HiBmLvr_Stat_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_HiBmLvr_Stat_FA_Init'
     */
    (void)Rte_Write_VePLTR_b_HiBmLvr_Stat_FA_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_HiBmLvr_Stat_FA);

    /* Outport: '<Root>/VePLTR_b_Hill_Des_Stat_Prx' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_Hill_Des_Stat_Prx_Init'
     */
    (void)Rte_Write_VePLTR_b_Hill_Des_Stat_Prx_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_Hill_Des_Stat_P);

    /* Outport: '<Root>/VePLTR_b_HotEnablerReq' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_HotEnablerReq_Init'
     */
    (void)Rte_Write_VePLTR_b_HotEnablerReq_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_HotEnablerReq_I);

    /* Outport: '<Root>/VePLTR_b_ImmoParkReq' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_ImmoParkReq_Init'
     */
    (void)Rte_Write_VePLTR_b_ImmoParkReq_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_ImmoParkReq_Ini);

    /* Outport: '<Root>/VePLTR_b_InPlantAllowCharge' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_InPlant'
     */
    (void)Rte_Write_VePLTR_b_InPlantAllowCharge_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_InPlant);

    /* Outport: '<Root>/VePLTR_b_InternalLightSts' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_InternalLightSts_Init'
     */
    (void)Rte_Write_VePLTR_b_InternalLightSts_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_InternalLightSt);

    /* Outport: '<Root>/VePLTR_b_LHRDoorSts_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_LHRDoorSts_FA_Init'
     */
    (void)Rte_Write_VePLTR_b_LHRDoorSts_FA_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_LHRDoorSts_FA_I);

    /* Outport: '<Root>/VePLTR_b_LHRDoorSts' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_LHRDoorSts_Init'
     */
    (void)Rte_Write_VePLTR_b_LHRDoorSts_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_LHRDoorSts_Init);

    /* Outport: '<Root>/VePLTR_b_LatAccelFA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_LatAccelFA'
     */
    (void)Rte_Write_VePLTR_b_LatAccelFA_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_LatAccelFA);

    /* Outport: '<Root>/VePLTR_b_LatAccelFailSts_ORC' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_LatAccelFailSts_ORC_Init'
     */
    (void)Rte_Write_VePLTR_b_LatAccelFailSts_ORC_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_LatAccelFailSts);

    /* Outport: '<Root>/VePLTR_b_LongAccelFA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_LongAccelFA'
     */
    (void)Rte_Write_VePLTR_b_LongAccelFA_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_LongAccelFA);

    /* Outport: '<Root>/VePLTR_b_LongAccelFailSts_ORC' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_LongAccelFailSts_ORC_Init'
     */
    (void)Rte_Write_VePLTR_b_LongAccelFailSts_ORC_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_LongAccelFailSt);

    /* Outport: '<Root>/VePLTR_b_LwsAngleFA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_LwsAngleFA_Init'
     */
    (void)Rte_Write_VePLTR_b_LwsAngleFA_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_LwsAngleFA_Init);

    /* Outport: '<Root>/VePLTR_b_TravelDistance_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_LwsAngleFA_Init4'
     */
    (void)Rte_Write_VePLTR_b_TravelDistance_FA_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_TravelDistance_);

    /* Outport: '<Root>/VePLTR_e_MRM_Status_C2_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_MRM_Status_C2_FA_Init'
     */
    (void)Rte_Write_VePLTR_e_MRM_Status_C2_FA_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_MRM_Status_C2_F);

    /* Outport: '<Root>/VePLTR_b_MRM_Status_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_MRM_Status_FA_Init'
     */
    (void)Rte_Write_VePLTR_b_MRM_Status_FA_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_MRM_Status_FA_I);

    /* Outport: '<Root>/VePLTR_b_ManualMode' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_ManualMode_Out_Init'
     */
    (void)Rte_Write_VePLTR_b_ManualMode_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_ManualMode_Out_);

    /* Outport: '<Root>/VePLTR_b_PRNDFailSts' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_PRNDFailSts_Out_Init'
     */
    (void)Rte_Write_VePLTR_b_PRNDFailSts_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_PRNDFailSts_Out);

    /* Outport: '<Root>/VePLTR_b_ParkBrakeSts_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_ParkBrakeSts_FA_Init'
     */
    (void)Rte_Write_VePLTR_b_ParkBrakeSts_FA_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_ParkBrakeSts_FA);

    /* Outport: '<Root>/VePLTR_b_ParkBrakeSts' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_ParkBrakeSts_Init'
     */
    (void)Rte_Write_VePLTR_b_ParkBrakeSts_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_ParkBrakeSts_In);

    /* Outport: '<Root>/VePLTR_b_ParkingGearShiftReq_BSM_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_ParkingGearShiftReq_BSM_FA_Init'
     */
    (void)Rte_Write_VePLTR_b_ParkingGearShiftReq_BSM_FA_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_ParkingGearShif);

    /* Outport: '<Root>/VePLTR_b_ProxiCADM2' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_ProxiCADM2_Init'
     */
    (void)Rte_Write_VePLTR_b_ProxiCADM2_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_ProxiCADM2_Init);

    /* Outport: '<Root>/VePLTR_b_ProxiCADM' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_ProxiCADM_Init'
     */
    (void)Rte_Write_VePLTR_b_ProxiCADM_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_ProxiCADM_Init);

    /* Outport: '<Root>/VePLTR_b_ProxiCC' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_ProxiCC_Init'
     */
    (void)Rte_Write_VePLTR_b_ProxiCC_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_ProxiCC_Init);

    /* Outport: '<Root>/VePLTR_b_ProxiNAVPrsnc' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_ProxiNavPrsnc_Init'
     */
    (void)Rte_Write_VePLTR_b_ProxiNAVPrsnc_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_ProxiNavPrsnc_I);

    /* Outport: '<Root>/VePLTR_b_ProxiSpdLimiter' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_ProxiSpdLimiter_Init'
     */
    (void)Rte_Write_VePLTR_b_ProxiSpdLimiter_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_ProxiSpdLimiter);

    /* Outport: '<Root>/VePLTR_b_ProxiTrafficSignRcgntn' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_ProxiTrafficSignRcgntn_Init'
     */
    (void)Rte_Write_VePLTR_b_ProxiTrafficSignRcgntn_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_ProxiTrafficSig);

    /* Outport: '<Root>/VePLTR_b_PsngrDoorSts_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_PsngrDoorSts_FA_Init'
     */
    (void)Rte_Write_VePLTR_b_PsngrDoorSts_FA_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_PsngrDoorSts_FA);

    /* Outport: '<Root>/VePLTR_b_PsngrDoorSts' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_PsngrDoorSts_Init'
     */
    (void)Rte_Write_VePLTR_b_PsngrDoorSts_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_PsngrDoorSts_In);

    /* S-Function (fcgen): '<S86>/FcnCallGen' incorporates:
     *  SubSystem: '<S86>/Initialize_PTLI_Outputs'
     */
    /* Outport: '<Root>/VePLTR_b_REMDisabled' incorporates:
     *  DataStoreRead: '<S425>/Data Store Read2'
     *  SignalConversion generated from: '<S86>/VePLTR_b_REMDisabled_Init'
     */
    (void)Rte_Write_VePLTR_b_REMDisabled_Value(AePLTR_b_REMDisabled);

    /* End of Outputs for S-Function (fcgen): '<S86>/FcnCallGen' */

    /* Outport: '<Root>/VePLTR_b_RFHub_ForcePark' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_RFHub_ForcePark_Out_Init'
     */
    (void)Rte_Write_VePLTR_b_RFHub_ForcePark_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_RFHub_ForcePark);

    /* Outport: '<Root>/VePLTR_b_RHRDoorSts_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_RHRDoorSts_FA_Init'
     */
    (void)Rte_Write_VePLTR_b_RHRDoorSts_FA_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_RHRDoorSts_FA_I);

    /* Outport: '<Root>/VePLTR_b_RHRDoorSts' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_RHRDoorSts_Init'
     */
    (void)Rte_Write_VePLTR_b_RHRDoorSts_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_RHRDoorSts_Init);

    /* Outport: '<Root>/VePLTR_b_RHatchSts_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_RHatchSts_FA_Init'
     */
    (void)Rte_Write_VePLTR_b_RHatchSts_FA_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_RHatchSts_FA_In);

    /* Outport: '<Root>/VePLTR_b_RHatchSts' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_RHatchSts_Init'
     */
    (void)Rte_Write_VePLTR_b_RHatchSts_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_RHatchSts_Init);

    /* Outport: '<Root>/VePLTR_b_RRCCPROXI' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_RRCCPROXI_Init'
     */
    (void)Rte_Write_VePLTR_b_RRCCPROXI_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_RRCCPROXI_Init);

    /* Outport: '<Root>/VePLTR_b_RackFaultFA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_RackFaultFA_Out_Init'
     */
    (void)Rte_Write_VePLTR_b_RackFaultFA_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_RackFaultFA_Out);

    /* S-Function (fcgen): '<S86>/FcnCallGen' incorporates:
     *  SubSystem: '<S86>/Initialize_PTLI_Outputs'
     */
    /* Outport: '<Root>/VePLTR_b_RadFanHndShk_dsbld' incorporates:
     *  DataStoreRead: '<S425>/Data Store Read1'
     *  SignalConversion generated from: '<S86>/VePLTR_b_RadFanHndShk_dsbld_Init'
     */
    (void)Rte_Write_VePLTR_b_RadFanHndShk_dsbld_Value
        (AePLTR_b_RadFanHandshake_disbld);

    /* End of Outputs for S-Function (fcgen): '<S86>/FcnCallGen' */

    /* Outport: '<Root>/VePLTR_b_RearFogLightSts' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_RearFogLightSts_Init'
     */
    (void)Rte_Write_VePLTR_b_RearFogLightSts_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_RearFogLightSts);

    /* Outport: '<Root>/VePLTR_b_RmtVehStartReq' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_RmtVehStartReq'
     */
    (void)Rte_Write_VePLTR_b_RmtVehStartReq_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_RmtVehStartReq);

    /* Outport: '<Root>/VePLTR_b_RmtVehStartReqFA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_RmtVehStartReqFA'
     */
    (void)Rte_Write_VePLTR_b_RmtVehStartReqFA_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_RmtVehStartReqF);

    /* Outport: '<Root>/VePLTR_b_DriverSeatBeltStsFA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_SeatBeltStsFA_Init'
     */
    (void)Rte_Write_VePLTR_b_DriverSeatBeltStsFA_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_SeatBeltStsFA);

    /* Outport: '<Root>/VePLTR_b_Secure_Idle_Req_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_Secure_Idle_Req_FA_Init'
     */
    (void)Rte_Write_VePLTR_b_Secure_Idle_Req_FA_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_Secure_Idle_R_f);

    /* Outport: '<Root>/VePLTR_b_Secure_Idle_Req' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_Secure_Idle_Req_Init'
     */
    (void)Rte_Write_VePLTR_b_Secure_Idle_Req_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_Secure_Idle_Req);

    /* Outport: '<Root>/VePLTR_b_SelectSpdSts_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_SelectSpdSts_FA_Init'
     */
    (void)Rte_Write_VePLTR_b_SelectSpdSts_FA_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_SelectSpdSts_FA);

    /* Outport: '<Root>/VePLTR_b_ShftLckFlt' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_ShftLckFlt_Out_Init'
     */
    (void)Rte_Write_VePLTR_b_ShftLckFlt_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_ShftLckFlt_Out_);

    /* Outport: '<Root>/VePLTR_b_ShftSnsFA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_ShftSnsFA_Out_Init'
     */
    (void)Rte_Write_VePLTR_b_ShftSnsFA_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_ShftSnsFA_Out_I);

    /* Outport: '<Root>/VePLTR_b_ShiftDspFlt' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_ShiftDspFlt_Out_Init'
     */
    (void)Rte_Write_VePLTR_b_ShiftDspFlt_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_ShiftDspFlt_Out);

    /* Outport: '<Root>/VePLTR_b_ShiftLeverFailSts' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_ShiftLeverFailSts_Out_Init'
     */
    (void)Rte_Write_VePLTR_b_ShiftLeverFailSts_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_ShiftLeverFailS);

    /* Outport: '<Root>/VePLTR_b_Slope_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_Slope_FA_Init'
     */
    (void)Rte_Write_VePLTR_b_Slope_FA_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_Slope_FA_Init);

    /* Outport: '<Root>/VePLTR_b_SpeedUnit_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_SpeedUnit_FA_Init'
     */
    (void)Rte_Write_VePLTR_b_SpeedUnit_FA_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_SpeedUnit_FA_In);

    /* Outport: '<Root>/VePLTR_b_SpeedUnit' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_SpeedUnit_Out_Init'
     */
    (void)Rte_Write_VePLTR_b_SpeedUnit_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_SpeedUnit_Out_I);

    /* Outport: '<Root>/VePLTR_b_WarmupAchieved' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_WarmupAchieved_Out_Init'
     */
    (void)Rte_Write_VePLTR_b_WarmupAchieved_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_WarmupAchieved_);

    /* Outport: '<Root>/VePLTR_b_YawRateFailSts_ORC' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_YawRateFailSts_ORC_Init'
     */
    (void)Rte_Write_VePLTR_b_YawRateFailSts_ORC_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_YawRateFailSts_);

    /* Outport: '<Root>/VePLTR_b_eBurn_Stages_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_eBurn_Stages_FA_Init'
     */
    (void)Rte_Write_VePLTR_b_eBurn_Stages_FA_Value
        (PLTR_ac_B.OutportBufferForVePLTR_b_eBurn_Stages_FA);

    /* Outport: '<Root>/VePLTR_dphi_LwsSpeed' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_dphi_LwsSpeed_Init'
     */
    (void)Rte_Write_VePLTR_dphi_LwsSpeed_Value
        (PLTR_ac_B.OutportBufferForVePLTR_dphi_LwsSpeed_Ini);

    /* Outport: '<Root>/VePLTR_dphi_YawRate_ORC' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_dphi_YawRate_ORC_Init'
     */
    (void)Rte_Write_VePLTR_dphi_YawRate_ORC_Value
        (PLTR_ac_B.OutportBufferForVePLTR_dphi_YawRate_ORC_);

    /* Outport: '<Root>/VePLTR_e_ACCSystemSts' incorporates:
     *  SignalConversion generated from: '<S425>/VePLTR_e_ACCSystemSts_Init'
     *  SignalConversion generated from: '<S86>/VePLTR_e_ACCSystemSts_Init'
     */
    (void)Rte_Write_VePLTR_e_ACCSystemSts_Value
        (PLTR_ac_B.OutportBufferForVePLTR_e_ACCSystemSts_In);

    /* Outport: '<Root>/VePLTR_e_AEBSystemSts' incorporates:
     *  SignalConversion generated from: '<S425>/VePLTR_e_AEBSystemSts_Init'
     *  SignalConversion generated from: '<S86>/VePLTR_e_AEBSystemSts_Init'
     */
    (void)Rte_Write_VePLTR_e_AEBSystemSts_Value
        (PLTR_ac_B.OutportBufferForVePLTR_e_AEBSystemSts_In);

    /* Outport: '<Root>/VePLTR_e_ASCM_Stat' incorporates:
     *  SignalConversion generated from: '<S425>/VePLTR_e_ASCM_Stat_Init'
     *  SignalConversion generated from: '<S86>/VePLTR_e_ASCM_Stat_Init'
     */
    (void)Rte_Write_VePLTR_e_ASCM_Stat_Value
        (PLTR_ac_B.OutportBufferForVePLTR_e_ASCM_Stat_Init);

    /* Outport: '<Root>/VePLTR_e_AutoPosCorrMd' incorporates:
     *  SignalConversion generated from: '<S427>/VePLTR_e_AutoPosCorrMd_Out_Init'
     *  SignalConversion generated from: '<S86>/VePLTR_e_AutoPosCorrMd_Out_Init'
     */
    (void)Rte_Write_VePLTR_e_AutoPosCorrMd_Value
        (PLTR_ac_B.OutportBufferForVePLTR_e_AutoPosCorrMd_O);

    /* Outport: '<Root>/VePLTR_e_BSM_AxleTrq_Enbld' incorporates:
     *  SignalConversion generated from: '<S425>/VePLTR_e_BSM_AxleTrq_Enbld_Init'
     *  SignalConversion generated from: '<S86>/VePLTR_e_BSM_AxleTrq_Enbld_Init'
     */
    (void)Rte_Write_VePLTR_e_BSM_AxleTrq_Enbld_Value
        (PLTR_ac_B.OutportBufferForVePLTR_e_BSM_AxleTrq_Enb);

    /* Outport: '<Root>/VePLTR_e_Command_15Sts' incorporates:
     *  SignalConversion generated from: '<S425>/VePLTR_e_Command_15Sts_Init'
     *  SignalConversion generated from: '<S86>/VePLTR_e_Command_15Sts_Init'
     */
    (void)Rte_Write_VePLTR_e_Command_15Sts_Value
        (PLTR_ac_B.OutportBufferForVePLTR_e_Command_15Sts_I);

    /* Outport: '<Root>/VePLTR_e_ECMVtdFreeze' incorporates:
     *  SignalConversion generated from: '<S425>/VePLTR_e_ECMVtdFreezeInit'
     *  SignalConversion generated from: '<S86>/VePLTR_e_ECMVtdFreeze_Init'
     */
    (void)Rte_Write_VePLTR_e_ECMVtdFreeze_Value
        (PLTR_ac_B.OutportBufferForVePLTR_e_ECMVtdFreezeIni);

    /* Outport: '<Root>/VePLTR_e_EPBHoldSts' incorporates:
     *  SignalConversion generated from: '<S425>/VePLTR_e_EPBHoldSts'
     *  SignalConversion generated from: '<S86>/VePLTR_e_EPBHoldSts'
     */
    (void)Rte_Write_VePLTR_e_EPBHoldSts_Value
        (PLTR_ac_B.OutportBufferForVePLTR_e_EPBHoldSts);

    /* S-Function (fcgen): '<S86>/FcnCallGen' incorporates:
     *  SubSystem: '<S86>/Initialize_PTLI_Outputs'
     */
    /* Outport: '<Root>/VePLTR_e_ERS_SW' incorporates:
     *  DataTypeConversion: '<S430>/DataTypeConversion'
     *  SignalConversion generated from: '<S86>/VePLTR_e_ERS_SW'
     */
    (void)Rte_Write_VePLTR_e_ERS_SW_Value((TeTRGR_e_ERS_SW)0U);

    /* End of Outputs for S-Function (fcgen): '<S86>/FcnCallGen' */

    /* Outport: '<Root>/VePLTR_e_ESMTransRngSt' incorporates:
     *  SignalConversion generated from: '<S427>/VePLTR_e_ESMTransRngSt_Out_Init'
     *  SignalConversion generated from: '<S86>/VePLTR_e_ESMTransRngSt_Out_Init'
     */
    (void)Rte_Write_VePLTR_e_ESMTransRngSt_Value
        (PLTR_ac_B.OutportBufferForVePLTR_e_ESMTransRngSt_O);

    /* Outport: '<Root>/VePLTR_e_FaultSts_IgnKeyOffTmrPerfTooFast' incorporates:
     *  SignalConversion generated from: '<S425>/VePLTR_e_FaultSts_IgnKeyOffTmrPerfTooFast_Init'
     *  SignalConversion generated from: '<S86>/VePLTR_e_FaultSts_IgnKeyOffTmrPerfTooFast_Init'
     */
    (void)Rte_Write_VePLTR_e_FaultSts_IgnKeyOffTmrPerfTooFast_Value
        (PLTR_ac_B.OutportBufferForVePLTR_e_FaultSts_IgnKey);

    /* Outport: '<Root>/VePLTR_e_HAS_TelltaleSts' incorporates:
     *  SignalConversion generated from: '<S425>/VePLTR_e_HAS_TelltaleSts_Init'
     *  SignalConversion generated from: '<S86>/VePLTR_e_HAS_TelltaleSts_Init'
     */
    (void)Rte_Write_VePLTR_e_HAS_TelltaleSts_Value
        (PLTR_ac_B.OutportBufferForVePLTR_e_HAS_TelltaleSts);

    /* Outport: '<Root>/VePLTR_e_HiBmLvr_Stat' incorporates:
     *  SignalConversion generated from: '<S425>/VePLTR_e_HiBmLvr_Stat_Init'
     *  SignalConversion generated from: '<S86>/VePLTR_e_HiBmLvr_Stat_Init'
     */
    (void)Rte_Write_VePLTR_e_HiBmLvr_Stat_Value
        (PLTR_ac_B.OutportBufferForVePLTR_e_HiBmLvr_Stat_In);

    /* Outport: '<Root>/VePLTR_e_ProxiIncreasingSpdCnst' incorporates:
     *  SignalConversion generated from: '<S425>/VePLTR_e_IncreasingSpdConst_Init'
     *  SignalConversion generated from: '<S86>/VePLTR_e_IncreasingSpdConst_Init'
     */
    (void)Rte_Write_VePLTR_e_ProxiIncreasingSpdCnst_Value
        (PLTR_ac_B.OutportBufferForVePLTR_e_IncreasingSpdCo);

    /* Outport: '<Root>/VePLTR_e_InvOprStat' incorporates:
     *  SignalConversion generated from: '<S425>/VePLTR_e_InvrOprStatus'
     *  SignalConversion generated from: '<S86>/VePLTR_e_InvrOprStatus'
     */
    (void)Rte_Write_VePLTR_e_InvOprStat_Value
        (PLTR_ac_B.OutportBufferForVePLTR_e_InvrOprStatus);

    /* Outport: '<Root>/VePLTR_e_LSMDExtReleaseLockReq' incorporates:
     *  SignalConversion generated from: '<S425>/VePLTR_e_LSMDExtReleaseLockReq_Init'
     *  SignalConversion generated from: '<S86>/VePLTR_e_LSMDExtReleaseLockReq_Init'
     */
    (void)Rte_Write_VePLTR_e_LSMDExtReleaseLockReq_Value
        (PLTR_ac_B.OutportBufferForVePLTR_e_LSMDExtReleaseL);

    /* Outport: '<Root>/VePLTR_e_LwsAngleType' incorporates:
     *  SignalConversion generated from: '<S425>/VePLTR_e_LwsAngleType_Init'
     *  SignalConversion generated from: '<S86>/VePLTR_e_LwsAngleType_Init'
     */
    (void)Rte_Write_VePLTR_e_LwsAngleType_Value
        (PLTR_ac_B.OutportBufferForVePLTR_e_LwsAngleType_In);

    /* Outport: '<Root>/VePLTR_e_MRM_Status_C2' incorporates:
     *  SignalConversion generated from: '<S425>/VePLTR_e_MRM_Status_C2_Init'
     *  SignalConversion generated from: '<S86>/VePLTR_e_MRM_Status_C2_Init'
     */
    (void)Rte_Write_VePLTR_e_MRM_Status_C2_Value
        (PLTR_ac_B.OutportBufferForVePLTR_e_MRM_Status_C2_I);

    /* Outport: '<Root>/VePLTR_e_MRM_Status' incorporates:
     *  SignalConversion generated from: '<S425>/VePLTR_e_MRM_Status_Init'
     *  SignalConversion generated from: '<S86>/VePLTR_e_MRM_Status_Init'
     */
    (void)Rte_Write_VePLTR_e_MRM_Status_Value
        (PLTR_ac_B.OutportBufferForVePLTR_e_MRM_Status_Init);

    /* Outport: '<Root>/VePLTR_e_ParkingGearShiftReq_BSM' incorporates:
     *  SignalConversion generated from: '<S425>/VePLTR_e_ParkingGearShiftReq_BSM_Init'
     *  SignalConversion generated from: '<S86>/VePLTR_e_ParkingGearShiftReq_BSM_Init'
     */
    (void)Rte_Write_VePLTR_e_ParkingGearShiftReq_BSM_Value
        (PLTR_ac_B.OutportBufferForVePLTR_e_ParkingGearShif);

    /* Outport: '<Root>/VePLTR_e_ProxiACC' incorporates:
     *  SignalConversion generated from: '<S425>/VePLTR_e_ProxiACC_Init'
     *  SignalConversion generated from: '<S86>/VePLTR_e_ProxiACC_Init'
     */
    (void)Rte_Write_VePLTR_e_ProxiACC_Value
        (PLTR_ac_B.OutportBufferForVePLTR_e_ProxiACC_Init);

    /* Outport: '<Root>/VePLTR_e_Proxi_Autonomy_Lvl' incorporates:
     *  SignalConversion generated from: '<S425>/VePLTR_e_Proxi_Autonomy_Lvl_Init'
     *  SignalConversion generated from: '<S86>/VePLTR_e_Proxi_Autonomy_Lvl_Init'
     */
    (void)Rte_Write_VePLTR_e_Proxi_Autonomy_Lvl_Value
        (PLTR_ac_B.OutportBufferForVePLTR_e_Proxi_Autonomy_);

    /* Outport: '<Root>/VePLTR_e_Proxi_CC_Logic' incorporates:
     *  SignalConversion generated from: '<S425>/VePLTR_e_Proxi_CC_Logic_Init'
     *  SignalConversion generated from: '<S86>/VePLTR_e_Proxi_CC_Logic_Init'
     */
    (void)Rte_Write_VePLTR_e_Proxi_CC_Logic_Value
        (PLTR_ac_B.OutportBufferForVePLTR_e_Proxi_CC_Logic_);

    /* Outport: '<Root>/VePLTR_e_ProxyHybridType' incorporates:
     *  SignalConversion generated from: '<S425>/VePLTR_e_ProxyHybridType_Init'
     *  SignalConversion generated from: '<S86>/VePLTR_e_ProxyHybridType_Init'
     */
    (void)Rte_Write_VePLTR_e_ProxyHybridType_Value
        (PLTR_ac_B.OutportBufferForVePLTR_e_ProxyHybridType);

    /* Outport: '<Root>/VePLTR_e_RationalisedRngSt' incorporates:
     *  SignalConversion generated from: '<S427>/VePLTR_e_RationalisedRngSt_Out_Init'
     *  SignalConversion generated from: '<S86>/VePLTR_e_RationalisedRngSt_Out_Init'
     */
    (void)Rte_Write_VePLTR_e_RationalisedRngSt_Value
        (PLTR_ac_B.OutportBufferForVePLTR_e_RationalisedRng);

    /* Outport: '<Root>/VePLTR_e_DriverSeatBeltSts' incorporates:
     *  SignalConversion generated from: '<S425>/VePLTR_e_SeatBeltSts'
     *  SignalConversion generated from: '<S86>/VePLTR_e_SeatBeltSts_Init'
     */
    (void)Rte_Write_VePLTR_e_DriverSeatBeltSts_Value
        (PLTR_ac_B.OutportBufferForVePLTR_e_SeatBeltSts);

    /* Outport: '<Root>/VePLTR_e_SelectSpdSts' incorporates:
     *  SignalConversion generated from: '<S425>/VePLTR_e_SelectSpdSts_Init'
     *  SignalConversion generated from: '<S86>/VePLTR_e_SelectSpdSts_Init'
     */
    (void)Rte_Write_VePLTR_e_SelectSpdSts_Value
        (PLTR_ac_B.OutportBufferForVePLTR_e_SelectSpdSts_In);

    /* S-Function (fcgen): '<S86>/FcnCallGen' incorporates:
     *  SubSystem: '<S86>/Initialize_PTLI_Outputs'
     */
    /* Switch: '<S425>/Switch' incorporates:
     *  Constant: '<S435>/Constant'
     *  Constant: '<S486>/Calib'
     *  Constant: '<S499>/Calib'
     */
    if (KePLTR_b_ShiftIndStOvrrd)
    {
        tmp = KePLTR_e_ShiftIndStOvrdVal;
    }
    else
    {
        tmp = CePLTR_e_NotPresent;
    }

    /* Outport: '<Root>/VePLTR_e_ShiftIndSt' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_e_ShiftIndSt_Init'
     *  Switch: '<S425>/Switch'
     */
    (void)Rte_Write_VePLTR_e_ShiftIndSt_Value(tmp);

    /* End of Outputs for S-Function (fcgen): '<S86>/FcnCallGen' */

    /* Outport: '<Root>/VePLTR_e_ShiftLeverPosReq' incorporates:
     *  SignalConversion generated from: '<S427>/VePLTR_e_ShiftLeverPosReq_Out_Init'
     *  SignalConversion generated from: '<S86>/VePLTR_e_ShiftLeverPosReq_Out_Init'
     */
    (void)Rte_Write_VePLTR_e_ShiftLeverPosReq_Value
        (PLTR_ac_B.OutportBufferForVePLTR_e_ShiftLeverPosRe);

    /* Outport: '<Root>/VePLTR_e_ShippingMode' incorporates:
     *  SignalConversion generated from: '<S427>/VePLTR_e_ShippingMode_Out_Init'
     *  SignalConversion generated from: '<S86>/VePLTR_e_ShippingMode_Out_Init'
     */
    (void)Rte_Write_VePLTR_e_ShippingMode_Value
        (PLTR_ac_B.OutportBufferForVePLTR_e_ShippingMode_Ou);

    /* Outport: '<Root>/VePLTR_e_TowHaulMode' incorporates:
     *  SignalConversion generated from: '<S425>/VePLTR_e_TowHaulModeRaw'
     *  SignalConversion generated from: '<S86>/VePLTR_e_TowHaulModeRaw'
     */
    (void)Rte_Write_VePLTR_e_TowHaulMode_Value
        (PLTR_ac_B.OutportBufferForVePLTR_e_TowHaulModeRaw);

    /* Outport: '<Root>/VePLTR_e_V2GOprStat' incorporates:
     *  SignalConversion generated from: '<S425>/VePLTR_e_V2GOprStat'
     *  SignalConversion generated from: '<S86>/VePLTR_e_V2GOprStat'
     */
    (void)Rte_Write_VePLTR_e_V2GOprStat_Value
        (PLTR_ac_B.OutportBufferForVePLTR_e_V2GOprStat);

    /* Outport: '<Root>/VePLTR_e_ValidatePstn' incorporates:
     *  SignalConversion generated from: '<S427>/VePLTR_e_ValidatePstn_Out_Init'
     *  SignalConversion generated from: '<S86>/VePLTR_e_ValidatePstn_Out_Init'
     */
    (void)Rte_Write_VePLTR_e_ValidatePstn_Value
        (PLTR_ac_B.OutportBufferForVePLTR_e_ValidatePstn_Ou);

    /* Outport: '<Root>/VePLTR_e_VehCategory' incorporates:
     *  SignalConversion generated from: '<S425>/VePLTR_e_VehCategory_Init'
     *  SignalConversion generated from: '<S86>/VePLTR_e_VehCategory_Init'
     */
    (void)Rte_Write_VePLTR_e_VehCategory_Value
        (PLTR_ac_B.OutportBufferForVePLTR_e_VehCategory_Ini);

    /* S-Function (fcgen): '<S86>/FcnCallGen' incorporates:
     *  SubSystem: '<S86>/Initialize_PTLI_Outputs'
     */
    /* Switch: '<S425>/Switch1' incorporates:
     *  Constant: '<S436>/Constant'
     *  Constant: '<S488>/Calib'
     *  Constant: '<S501>/Calib'
     */
    if (KePLTR_b_VehcfgStOvrrd)
    {
        tmp_0 = KePLTR_e_VehCfgStOvrdVal;
    }
    else
    {
        tmp_0 = CePLTR_e_NotAvailable;
    }

    /* Outport: '<Root>/VePLTR_e_VehCfgSt' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_e_VehCfgSt_Init'
     *  Switch: '<S425>/Switch1'
     */
    (void)Rte_Write_VePLTR_e_VehCfgSt_Value(tmp_0);

    /* End of Outputs for S-Function (fcgen): '<S86>/FcnCallGen' */

    /* Outport: '<Root>/VePLTR_e_VehicleCountryCode' incorporates:
     *  SignalConversion generated from: '<S427>/VePLTR_e_VehicleCountryCode_Out_Init'
     *  SignalConversion generated from: '<S86>/VePLTR_e_VehicleCountryCode_Out_Init'
     */
    (void)Rte_Write_VePLTR_e_VehicleCountryCode_Value
        (PLTR_ac_B.OutportBufferForVePLTR_e_VehicleCountryC);

    /* Outport: '<Root>/VePLTR_e_eBurn_Stages' incorporates:
     *  SignalConversion generated from: '<S425>/VePLTR_e_eBurn_Stages_Init'
     *  SignalConversion generated from: '<S86>/VePLTR_e_eBurn_Stages_Init'
     */
    (void)Rte_Write_VePLTR_e_eBurn_Stages_Value
        (PLTR_ac_B.OutportBufferForVePLTR_e_eBurn_Stages_In);

    /* Outport: '<Root>/VePLTR_l_TravelDistance' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_l_TravelDistance_Init'
     */
    (void)Rte_Write_VePLTR_l_TravelDistance_Value
        (PLTR_ac_B.OutportBufferForVePLTR_l_TravelDistance_);

    /* S-Function (fcgen): '<S86>/FcnCallGen' incorporates:
     *  SubSystem: '<S86>/Sub_Out_Init'
     */
    /* Outport: '<Root>/VePLTR_milel_IPEETestMileageLimit' incorporates:
     *  DataStoreRead: '<S427>/Data Store Read1'
     *  SignalConversion generated from: '<S86>/VePLTR_milel_IPEETestMileageLimit_Out_Init'
     */
    (void)Rte_Write_VePLTR_milel_IPEETestMileageLimit_Value
        (AePLTR_milel_IPEETestMileageLimit);

    /* End of Outputs for S-Function (fcgen): '<S86>/FcnCallGen' */

    /* Outport: '<Root>/VePLTR_milel_InPlntMileageLmt_Miles' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_milel_InPlntMileageLmt_Miles_Out_Init'
     */
    (void)Rte_Write_VePLTR_milel_InPlntMileageLmt_Miles_Value
        (PLTR_ac_B.OutportBufferForVePLTR_milel_InPlntMilea);

    /* Outport: '<Root>/VePLTR_milel_Odometer_Miles' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_milel_Odometer_Miles_Out_Init'
     */
    (void)Rte_Write_VePLTR_milel_Odometer_Miles_Value
        (PLTR_ac_B.OutportBufferForVePLTR_milel_Odometer_Mi);

    /* Outport: '<Root>/VePLTR_p_AmbientAirPrs' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_p_AmbientAirPrs'
     */
    (void)Rte_Write_VePLTR_p_AmbientAirPrs_Value
        (PLTR_ac_B.OutportBufferForVePLTR_p_AmbientAirPrs);

    /* Outport: '<Root>/VePLTR_phi_EstRollAngleAtZeroSpd' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_phi_EstRollAngleAtZeroSpd_Out_Init'
     */
    (void)Rte_Write_VePLTR_phi_EstRollAngleAtZeroSpd_Value
        (PLTR_ac_B.OutportBufferForVePLTR_phi_EstRollAngleA);

    /* Outport: '<Root>/VePLTR_phi_EstSlopeAngle' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_phi_EstSlopeAngle_Out_Init'
     */
    (void)Rte_Write_VePLTR_phi_EstSlopeAngle_Value
        (PLTR_ac_B.OutportBufferForVePLTR_phi_EstSlopeAngle);

    /* Outport: '<Root>/VePLTR_phi_LwsAngle' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_phi_LwsAngle_Init'
     */
    (void)Rte_Write_VePLTR_phi_LwsAngle_Value
        (PLTR_ac_B.OutportBufferForVePLTR_phi_LwsAngle_Init);

    /* Outport: '<Root>/VePLTR_v_HomSpdLim' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_v_HomSpdLim_Init'
     */
    (void)Rte_Write_VePLTR_v_HomSpdLim_Value
        (PLTR_ac_B.OutportBufferForVePLTR_v_HomSpdLim_Init);

    /* Outport: '<Root>/VePLTR_y_AUD_LVL' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_y_AUD_LVL_Init'
     */
    (void)Rte_Write_VePLTR_y_AUD_LVL_Value
        (PLTR_ac_B.OutportBufferForVePLTR_y_AUD_LVL_Init);

    /* Outport: '<Root>/VePLTR_y_FobSearchResult' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_y_FobSearchResult_Init'
     */
    (void)Rte_Write_VePLTR_y_FobSearchResult_Value
        (PLTR_ac_B.OutportBufferForVePLTR_y_FobSearchResult);

    /* Outport: '<Root>/VePLTR_y_GatedParkSwFlt' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_y_GatedParkSwFlt_Out_Init'
     */
    (void)Rte_Write_VePLTR_y_GatedParkSwFlt_Value
        (PLTR_ac_B.OutportBufferForVePLTR_y_GatedParkSwFlt_);

    /* Outport: '<Root>/VePLTR_b_Worksite_Inverter_Active_FA' incorporates:
     *  SignalConversion generated from: '<S86>/Worksite_Inverter_Active_FA_Init'
     */
    (void)Rte_Write_VePLTR_b_Worksite_Inverter_Active_FA_Value
        (PLTR_ac_B.OutportBufferForWorksite_Inverter_Acti_f);

    /* Outport: '<Root>/VePLTR_b_Worksite_Inverter_Active' incorporates:
     *  SignalConversion generated from: '<S86>/Worksite_Inverter_Active_Init'
     */
    (void)Rte_Write_VePLTR_b_Worksite_Inverter_Active_Value
        (PLTR_ac_B.OutportBufferForWorksite_Inverter_Active);

    /* Outport: '<Root>/VePLTR_e_Worksite_Inverter_Sts' incorporates:
     *  SignalConversion generated from: '<S425>/Worksite_Inverter_Sts_Init'
     *  SignalConversion generated from: '<S86>/Worksite_Inverter_Sts_Init'
     */
    (void)Rte_Write_VePLTR_e_Worksite_Inverter_Sts_Value
        (PLTR_ac_B.OutportBufferForWorksite_Inverter_Sts_In);

    /* Merge: '<Root>/Merge_106' incorporates:
     *  SignalConversion generated from: '<S86>/AutoPosCorrMdFA_Ini_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_Scndry_AutoPosCorrMdFA_write_IRV
        (PLTR_ac_B.OutportBufferForAutoPosCorrMdFA_Ini);

    /* Merge: '<Root>/Merge_117' incorporates:
     *  SignalConversion generated from: '<S86>/AutoPosCorrMdFA_Init_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_Prmry_AutoPosCorrMdFA_write_IRV
        (PLTR_ac_B.OutportBufferForAutoPosCorrMdFA_Init);

    /* Merge: '<Root>/Merge_105' incorporates:
     *  SignalConversion generated from: '<S425>/AutoPosCorrMd_Ini'
     *  SignalConversion generated from: '<S86>/AutoPosCorrMd_Ini_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_AutoPosCorrMd_Ini_write_IRV
        (PLTR_ac_B.OutportBufferForAutoPosCorrMd_Ini);

    /* Merge: '<Root>/Merge_116' incorporates:
     *  SignalConversion generated from: '<S425>/AutoPosCorrMd_Init'
     *  SignalConversion generated from: '<S86>/AutoPosCorrMd_Init_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_AutoPosCorrMd_Init_write_IRV
        (PLTR_ac_B.OutportBufferForAutoPosCorrMd_Init);

    /* Merge: '<Root>/Merge_138_Irv' incorporates:
     *  SignalConversion generated from: '<S86>/DriverDetected_Init_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_DriverDetected_write_IRV
        (PLTR_ac_B.OutportBufferForDriverDetected_Init);

    /* Merge: '<Root>/Merge_96' incorporates:
     *  SignalConversion generated from: '<S86>/DrvrSeatSnsrSts_FA_Init_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_DrvrSeatSnsrSts_FA_write_IRV
        (PLTR_ac_B.OutportBufferForDrvrSeatSnsrSts_FA_Init);

    /* Merge: '<Root>/Merge_98' incorporates:
     *  SignalConversion generated from: '<S425>/DrvrSeatSnsrSts_Init'
     *  SignalConversion generated from: '<S86>/DrvrSeatSnsrSts_Init_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_DrvrSeatSnsrSts_Init_write_IRV
        (PLTR_ac_B.OutportBufferForDrvrSeatSnsrSts_Init);

    /* Merge: '<Root>/Merge_99' incorporates:
     *  SignalConversion generated from: '<S86>/DrvrSeatSnsr_FailSts_Init_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_DrvrSeatSnsr_FailSts_Init_write_IRV
        (PLTR_ac_B.OutportBufferForDrvrSeatSnsr_FailSts_Ini);

    /* Merge: '<Root>/Merge_141' incorporates:
     *  SignalConversion generated from: '<S86>/FuelLevelLowClster_Init_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_FuelLevelLowClster_Init_write_IRV
        (PLTR_ac_B.OutportBufferForFuelLevelLowClster_Init);

    /* Merge: '<Root>/HVBatRealTimeClock_BPCM_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S86>/HVBatRealTimeClock_BPCM_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_HVBatRealTimeClock_BPCM_write_IRV
        (PLTR_ac_B.OutportBufferForHVBatRealTimeClock_BPCM_);

    /* Merge: '<Root>/HVBatRealTimeClock_FA_BPCM_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S86>/HVBatRealTimeClock_FA_BPCM_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_HVBatRealTimeClock_FA_BPCM_write_IRV
        (PLTR_ac_B.OutportBufferForHVBatRealTimeClock_FA_BP);

    /* Merge: '<Root>/HVBatSleepTime_BPCM_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S86>/HVBatSleepTime_BPCM_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_HVBatSleepTime_BPCM_write_IRV
        (PLTR_ac_B.OutportBufferForHVBatSleepTime_BPCM_writ);

    /* Merge: '<Root>/Merge_102' incorporates:
     *  SignalConversion generated from: '<S86>/HWIO_GatedParkSWFault_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_HWIO_GatedParkSWFault_write_IRV
        (PLTR_ac_B.OutportBufferForHWIO_GatedParkSWFault);

    /* Merge: '<Root>/Merge_134' incorporates:
     *  SignalConversion generated from: '<S86>/ManualModeFA_Init_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_Prmry_ManualModeFA_write_IRV
        (PLTR_ac_B.OutportBufferForManualModeFA_Init);

    /* Merge: '<Root>/Merge_131' incorporates:
     *  SignalConversion generated from: '<S86>/ManualMode_Init_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_ManualMode_Init_write_IRV
        (PLTR_ac_B.OutportBufferForManualMode_Init);

    /* Merge: '<Root>/OutTorqReqModHH_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S86>/OutTorqReqModHH_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_OutTorqReqModHH_write_IRV
        (PLTR_ac_B.OutportBufferForOutTorqReqModHH_write);

    /* Merge: '<Root>/Merge_129' incorporates:
     *  SignalConversion generated from: '<S425>/PRND_ValidatePstn_InitSndry'
     *  SignalConversion generated from: '<S86>/PRND_ValidatePstn_InitSndry_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_PRND_ValidatePstn_InitSndry_write_IRV
        (PLTR_ac_B.OutportBufferForPRND_ValidatePstn_InitSn);

    /* Merge: '<Root>/Merge_135' incorporates:
     *  SignalConversion generated from: '<S425>/PRND_ValidatePstn_Init'
     *  SignalConversion generated from: '<S86>/PRND_ValidatePstn_Init_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_PRND_ValidatePstn_Init_write_IRV
        (PLTR_ac_B.OutportBufferForPRND_ValidatePstn_Init);

    /* Merge: '<Root>/Merge_104' incorporates:
     *  SignalConversion generated from: '<S86>/RFHUB_ForceParkFA_Init_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_Scndry_ForceParkFA_write_IRV
        (PLTR_ac_B.OutportBufferForRFHUB_ForceParkFA_Init);

    /* Merge: '<Root>/Merge_103' incorporates:
     *  SignalConversion generated from: '<S86>/RFHUB_ForcePark_Init_PwrOn_1_IRV'
     * */
    Rte_IrvWrite_PLTR_PwrOn_RFHUB_ForcePark_Init_PwrOn_1_IRV_IRV
        (PLTR_ac_B.OutportBufferForRFHUB_ForcePark_Init_Pwr);

    /* Merge: '<Root>/Merge_115' incorporates:
     *  SignalConversion generated from: '<S86>/RFHub_ForceParkFA_Init_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_Prmry_ForceParkFA_write_IRV
        (PLTR_ac_B.OutportBufferForRFHub_ForceParkFA_Init);

    /* Merge: '<Root>/Merge_114' incorporates:
     *  SignalConversion generated from: '<S86>/RFHub_ForcePark_Init_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_RFHub_ForcePark_Init_write_IRV
        (PLTR_ac_B.OutportBufferForRFHub_ForcePark_Init);

    /* Merge: '<Root>/Merge_111' incorporates:
     *  SignalConversion generated from: '<S86>/RackDetentSnsrFA_In_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_Scndry_RackDetentSensorFAFA_write_IRV
        (PLTR_ac_B.OutportBufferForRackDetentSnsrFA_In);

    /* Merge: '<Root>/Merge_123' incorporates:
     *  SignalConversion generated from: '<S86>/RackDetentSnsrFA_Init_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_Prmry_RackDetentSensorFAFA_write_IRV
        (PLTR_ac_B.OutportBufferForRackDetentSnsrFA_Init);

    /* Merge: '<Root>/Merge_107' incorporates:
     *  SignalConversion generated from: '<S86>/ShftDsplyFlt_Ini_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_Scndry_ShifterDispFAFA_write_IRV
        (PLTR_ac_B.OutportBufferForShftDsplyFlt_Ini);

    /* Merge: '<Root>/Merge_120' incorporates:
     *  SignalConversion generated from: '<S86>/ShftDsplyFlt_Init_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_Prmry_ShifterDispFAFA_write_IRV
        (PLTR_ac_B.OutportBufferForShftDsplyFlt_Init);

    /* Merge: '<Root>/Merge_108' incorporates:
     *  SignalConversion generated from: '<S86>/ShftLockFlt_Ini_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_Scndry_ShiftLockFAFA_write_IRV
        (PLTR_ac_B.OutportBufferForShftLockFlt_Ini);

    /* Merge: '<Root>/Merge_121' incorporates:
     *  SignalConversion generated from: '<S86>/ShftLockFlt_Init_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_Prmry_ShiftLockFAFA_write_IRV
        (PLTR_ac_B.OutportBufferForShftLockFlt_Init);

    /* Merge: '<Root>/Merge_110' incorporates:
     *  SignalConversion generated from: '<S86>/ShftSnsrFlt_In_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_Scndry_ShiftSnsFAFA_write_IRV
        (PLTR_ac_B.OutportBufferForShftSnsrFlt_In);

    /* Merge: '<Root>/Merge_122' incorporates:
     *  SignalConversion generated from: '<S86>/ShftSnsrFlt_Init_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_Prmry_ShiftSnsFAFA_write_IRV
        (PLTR_ac_B.OutportBufferForShftSnsrFlt_Init);

    /* Merge: '<Root>/Merge_119' incorporates:
     *  SignalConversion generated from: '<S86>/ShiftLeverFailStsFA_Init_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_Prmry_PRNDFailStsFA_write_IRV
        (PLTR_ac_B.OutportBufferForShiftLeverFailStsFA_Init);

    /* Merge: '<Root>/Merge_109' incorporates:
     *  SignalConversion generated from: '<S86>/ShiftLeverFailSts_Ini_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_Scndry_ShiftLeverFailStsFA_write_IRV
        (PLTR_ac_B.OutportBufferForShiftLeverFailSts_Ini);

    /* Merge: '<Root>/Merge_124' incorporates:
     *  SignalConversion generated from: '<S86>/ShiftLeverFailSts_Init_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_Prmry_ShiftLeverFailStsFA_write_IRV
        (PLTR_ac_B.OutportBufferForShiftLeverFailSts_Init);

    /* Merge: '<Root>/Merge_112' incorporates:
     *  SignalConversion generated from: '<S86>/ShiftLeverFail_PRNDStsFA_Ini_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_Scndry_PRNDFailStsFA_write_IRV
        (PLTR_ac_B.OutportBufferForShiftLeverFail_PRNDStsFA);

    /* Merge: '<Root>/Merge_118' incorporates:
     *  SignalConversion generated from: '<S86>/ShiftLeverPositionReqFA_Ini_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_Scndry_ShiftLeverPositionReqFA_write_IRV
        (PLTR_ac_B.OutportBufferForShiftLeverPositionReqF_d);

    /* Merge: '<Root>/Merge_126' incorporates:
     *  SignalConversion generated from: '<S86>/ShiftLeverPositionReqFA_Init_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_Prmry_ShiftLeverPositionReqFA_write_IRV
        (PLTR_ac_B.OutportBufferForShiftLeverPositionReqFA_);

    /* Merge: '<Root>/Merge_113' incorporates:
     *  SignalConversion generated from: '<S425>/ShiftLeverPositionReq_Ini'
     *  SignalConversion generated from: '<S86>/ShiftLeverPositionReq_Ini_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_ShiftLeverPositionReq_Ini_write_IRV
        (PLTR_ac_B.OutportBufferForShiftLeverPositionReq__a);

    /* Merge: '<Root>/Merge_125' incorporates:
     *  SignalConversion generated from: '<S425>/ShiftLeverPositionReq_Init'
     *  SignalConversion generated from: '<S86>/ShiftLeverPositionReq_Init_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_ShiftLeverPositionReq_Init_write_IRV
        (PLTR_ac_B.OutportBufferForShiftLeverPositionReq_In);

    /* Merge: '<Root>/Merge_133_Irv' incorporates:
     *  SignalConversion generated from: '<S86>/ShiftPosFlt_InitMSG_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_Prmry_TransShiftPstnFA_write_IRV
        (PLTR_ac_B.OutportBufferForShiftPosFlt_InitMSG);

    /* Merge: '<Root>/Merge_128_Irv' incorporates:
     *  SignalConversion generated from: '<S86>/ShiftPosFlt_IntMSG_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_Scndry_TransShiftPstnFA_write_IRV
        (PLTR_ac_B.OutportBufferForShiftPosFlt_IntMSG);

    /* Merge: '<Root>/Toggle_1s_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S86>/Toggle_1s_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_Toggle_1s_write_IRV
        (PLTR_ac_B.OutportBufferForToggle_1s_write);

    /* Merge: '<Root>/Merge_132_Irv' incorporates:
     *  SignalConversion generated from: '<S425>/TransShiftPosInitMSG'
     *  SignalConversion generated from: '<S86>/TransShiftPosInitMSG_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_TransShiftPosInitMSG_write_IRV
        (PLTR_ac_B.OutportBufferForTransShiftPosInitMSG);

    /* Merge: '<Root>/Merge_127_Irv' incorporates:
     *  SignalConversion generated from: '<S425>/TransShiftPos_InitMSG'
     *  SignalConversion generated from: '<S86>/TransShiftPos_InitMSG_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_TransShiftPos_InitMSG_write_IRV
        (PLTR_ac_B.OutportBufferForTransShiftPos_InitMSG);

    /* SignalConversion generated from: '<S86>/VePLTI_b_RTC_CurrentTimeFA_Init_write' */
    Rte_IrvWrite_PLTR_PwrOn_VePLTI_b_RTC_CurrentTimeFA_Init_write_IRV
        (PLTR_ac_B.Merge1_a);

    /* Merge: '<Root>/Merge_41' incorporates:
     *  SignalConversion generated from: '<S425>/VePLTI_e_ShippingMode'
     *  SignalConversion generated from: '<S86>/VePLTI_e_ShippingMode_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTI_e_ShippingMode_write_IRV
        (PLTR_ac_B.OutportBufferForVePLTI_e_ShippingMode);

    /* Merge: '<Root>/Merge_42' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTI_kl_Odometer_Km_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTI_kl_Odometer_Km_write_IRV
        (PLTR_ac_B.OutportBufferForVePLTI_kl_Odometer_Km);

    /* Merge: '<Root>/Merge_48' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_a_LatAccelOffset_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_a_TransAccelOffset_write_IRV
        (PLTR_ac_B.OutportBufferForVePLTR_a_LatAccelOffset);

    /* Merge: '<Root>/Merge_45_Irv' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_a_LatAccel_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_a_TransAccel_write_IRV
        (PLTR_ac_B.OutportBufferForVePLTR_a_LatAccel);

    /* Merge: '<Root>/Merge_38_Irv' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_a_LongAccelOffset_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_a_LongAccelOffset_write_IRV
        (PLTR_ac_B.OutportBufferForVePLTR_a_LongAccelOffset);

    /* Merge: '<Root>/Merge_69_Irv' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_a_LongAccel_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_a_LongAccel_write_IRV
        (PLTR_ac_B.OutportBufferForVePLTR_a_LongAccel);

    /* Merge: '<Root>/Merge_77' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_ACCEnbledInit_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_ACCEnbledInit_write_IRV
        (PLTR_ac_B.OutportBufferForVePLTR_b_ACCEnbledInit);

    /* SignalConversion generated from: '<S86>/VePLTR_b_BatteryWasDisconnected_Init_write' */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_BatteryWasDisconnected_Init_write_IRV
        (PLTR_ac_B.LogicalOperator_b);

    /* Merge: '<Root>/Merge_91' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_CrsCntrlActv_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_CrsCntrlActv_write_IRV
        (PLTR_ac_B.OutportBufferForVePLTR_b_CrsCntrlActv);

    /* Merge: '<Root>/Merge_74' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_DoorFailSts_Init_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_DoorFailSts_Init_write_IRV
        (PLTR_ac_B.OutportBufferForVePLTR_b_DoorFailSts_Ini);

    /* Merge: '<Root>/Merge_69_Irv3' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_DriverDoorOnOffSts_FA_Init'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_DriverDoorOnOffSts_FA_IRV
        (PLTR_ac_B.OutportBufferForVePLTR_b_DriverDoorOnOff);

    /* Merge: '<Root>/Merge_47_Irv' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_DrvDrAjar_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_DrvDrAjar_write_IRV
        (PLTR_ac_B.OutportBufferForVePLTR_b_DrvDrAjar);

    /* Merge: '<Root>/Merge24' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_GPS_Date_DayFA_PwrOn'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_GPS_Date_DayFA_write_IRV
        (PLTR_ac_B.OutportBufferForVePLTR_b_GPS_Date_DayFA_);

    /* Merge: '<Root>/Merge26' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_GPS_Date_MonthFA_PwrOn'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_GPS_Date_MonthFA_write_IRV
        (PLTR_ac_B.OutportBufferForVePLTR_b_GPS_Date_MonthF);

    /* Merge: '<Root>/Merge28' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_GPS_Date_YearFA_PwrOn'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_GPS_Date_YearFA_write_IRV
        (PLTR_ac_B.OutportBufferForVePLTR_b_GPS_Date_YearFA);

    /* Merge: '<Root>/Merge30' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_GPS_UTC_HourFA_PwrOn'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_GPS_UTC_HourFA_write_IRV
        (PLTR_ac_B.OutportBufferForVePLTR_b_GPS_UTC_HourFA_);

    /* Merge: '<Root>/Merge32' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_GPS_UTC_MinuteFA_PwrOn'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_GPS_UTC_MinuteFA_write_IRV
        (PLTR_ac_B.OutportBufferForVePLTR_b_GPS_UTC_MinuteF);

    /* Merge: '<Root>/Merge34' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_GPS_UTC_SecondFA_PwrOn'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_GPS_UTC_SecondFA_write_IRV
        (PLTR_ac_B.OutportBufferForVePLTR_b_GPS_UTC_SecondF);

    /* Merge: '<Root>/Merge_14' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_LatAccelFA_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_TransAccelFA_write_IRV
        (PLTR_ac_B.OutportBufferForVePLTR_b_LatAccelFA);

    /* Merge: '<Root>/Merge_46' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_LatAccelOffsetFA_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_TransAccelOffsetFA_write_IRV
        (PLTR_ac_B.OutportBufferForVePLTR_b_LatAccelOffsetF);

    /* Merge: '<Root>/Merge_24_Irv' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_LongAccelFA_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_LongAccelFA_write_IRV
        (PLTR_ac_B.OutportBufferForVePLTR_b_LongAccelFA);

    /* Merge: '<Root>/Merge_39' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_LongAccelOffsetFA_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_LongAccelOffsetFA_write_IRV
        (PLTR_ac_B.OutportBufferForVePLTR_b_LongAccelOffset);

    /* Merge: '<Root>/Merge_17' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_SeatBeltStsFA_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_DriverSeatBeltStsFA_write_IRV
        (PLTR_ac_B.OutportBufferForVePLTR_b_SeatBeltStsFA);

    /* Merge: '<Root>/Merge_68' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_b_SpeedUnit_Init_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_SpeedUnit_Init_write_IRV
        (PLTR_ac_B.OutportBufferForVePLTR_b_SpeedUnit_Init);

    /* Merge: '<Root>/Merge_69_Irv2' incorporates:
     *  SignalConversion generated from: '<S425>/VePLTR_e_DriverDoorOnOffSts_Init'
     *  SignalConversion generated from: '<S86>/VePLTR_e_DriverDoorOnOffSts_Init'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_e_DriverDoorOnOffSts_Init_IRV
        (PLTR_ac_B.OutportBufferForVePLTR_e_DriverDoorOnOff);

    /* Merge: '<Root>/Merge_84' incorporates:
     *  SignalConversion generated from: '<S425>/VePLTR_e_ECMVtdFreezeInit'
     *  SignalConversion generated from: '<S86>/VePLTR_e_ECMVtdFreezeInit_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_e_ECMVtdFreezeInit_write_IRV
        (PLTR_ac_B.OutportBufferForVePLTR_e_ECMVtdFreezeIni);

    /* Merge: '<Root>/Merge_69_Irv1' incorporates:
     *  SignalConversion generated from: '<S425>/VePLTR_e_RTCTestSyncReport_Init'
     *  SignalConversion generated from: '<S86>/VePLTR_e_RTCTestSyncReport_Init'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_e_RTCTestSyncReport_Init_IRV
        (PLTR_ac_B.OutportBufferForVePLTR_e_RTCTestSyncRepo);

    /* Merge: '<Root>/Merge_19' incorporates:
     *  SignalConversion generated from: '<S425>/VePLTR_e_SeatBeltSts'
     *  SignalConversion generated from: '<S86>/VePLTR_e_SeatBeltSts_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_e_DriverSeatBeltSts_write_IRV
        (PLTR_ac_B.OutportBufferForVePLTR_e_SeatBeltSts);

    /* Merge: '<Root>/Merge_12_Irv' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_p_AmbientAirPrs_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_p_AmbientAirPrs_write_IRV
        (PLTR_ac_B.OutportBufferForVePLTR_p_AmbientAirPrs);

    /* Merge: '<Root>/Merge35' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_t_GPS_UTC_Second_PwrOn'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_t_GPS_UTC_Second_PwrOn_IRV
        (PLTR_ac_B.OutportBufferForVePLTR_t_GPS_UTC_Second_);

    /* Merge: '<Root>/Merge25' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_tdy_GPS_Date_Day_PwrOn'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_tdy_GPS_Date_Day_PwrOn_IRV
        (PLTR_ac_B.OutportBufferForVePLTR_tdy_GPS_Date_Day_);

    /* Merge: '<Root>/Merge31' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_thr_GPS_UTC_Hour_PwrOn'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_thr_GPS_UTC_Hour_PwrOn_IRV
        (PLTR_ac_B.OutportBufferForVePLTR_thr_GPS_UTC_Hour_);

    /* Merge: '<Root>/Merge33' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_tmn_GPS_UTC_Minute_PwrOn'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_tmn_GPS_UTC_Minute_PwrOn_IRV
        (PLTR_ac_B.OutportBufferForVePLTR_tmn_GPS_UTC_Minut);

    /* Merge: '<Root>/Merge27' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_tmt_GPS_Date_Month_PwrOn'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_tmt_GPS_Date_Month_PwrOn_IRV
        (PLTR_ac_B.OutportBufferForVePLTR_tmt_GPS_Date_Mont);

    /* Merge: '<Root>/Merge29' incorporates:
     *  SignalConversion generated from: '<S86>/VePLTR_tyr_GPS_Date_Year_PwrOn'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_tyr_GPS_Date_Year_PwrOn_IRV
        (PLTR_ac_B.OutportBufferForVePLTR_tyr_GPS_Date_Year);

    /* Merge: '<Root>/VehSpd_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S86>/VehSpd_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VehSpd_write_IRV
        (PLTR_ac_B.OutportBufferForVehSpd_write);

    /* Merge: '<Root>/Merge_130' incorporates:
     *  SignalConversion generated from: '<S86>/VldtPstnFA_InitSndry_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_Scndry_PRND_ValidatePstnFA_write_IRV
        (PLTR_ac_B.OutportBufferForVldtPstnFA_InitSndry);

    /* Merge: '<Root>/Merge_136' incorporates:
     *  SignalConversion generated from: '<S86>/VldtPstnFA_Init_write'
     * */
    Rte_IrvWrite_PLTR_PwrOn_VePLTR_b_Prmry_PRND_ValidatePstnFA_write_IRV
        (PLTR_ac_B.OutportBufferForVldtPstnFA_Init);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Output function */
FUNC(void, PLTR_CODE) TmotPLTR_b_ChargeReq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotPLTR_b_ChargeReq' */
    /* Outport: '<Root>/VePLTR_b_ChargeReqSgnlRcvd' incorporates:
     *  Chart: '<S199>/TmotPLTR_b_ChargeReqChrt'
     *  SignalConversion generated from: '<S199>/VePLTR_b_ChargeReqSgnl_Rcvd'
     */
    /* Gateway: TmotPLTR_b_ChargeReq/TmotPLTR_b_ChargeReqChrt */
    /* During: TmotPLTR_b_ChargeReq/TmotPLTR_b_ChargeReqChrt */
    /* Entry Internal: TmotPLTR_b_ChargeReq/TmotPLTR_b_ChargeReqChrt */
    /* Transition: '<S745>:2' */
    (void)Rte_Write_VePLTR_b_ChargeReqSgnlRcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/TmotPLTR_b_ChargeReq' */
}

/* Model initialize function */
FUNC(void, PLTR_CODE) PLTR_ac_Init(void)
{
    /* Start for DataStoreMemory: '<Root>/DSM_23' */
    AePLTR_b_InFieldMode = true;

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/PLTR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S86>/FcnCallGen' incorporates:
     *  SubSystem: '<S86>/Initialize_PTLI_Outputs'
     */
    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_b_CrsCntrlActv' incorporates:
     *  Constant: '<S470>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_b_CrsCntrlActv = KePLTR_b_CrsCntrlActv;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_p_AmbientAirPrs' incorporates:
     *  Constant: '<S506>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_p_AmbientAirPrs =
        KePLTR_p_AmbientAirPrsInitVal;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_e_TowHaulModeRaw' incorporates:
     *  Constant: '<S432>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_TowHaulModeRaw =
        PLTR_ac_ConstB.Constant_c;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_e_SeatBeltSts' incorporates:
     *  Constant: '<S455>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_SeatBeltSts = PLTR_ac_ConstB.Constant_ip;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_e_InvrOprStatus' incorporates:
     *  Constant: '<S457>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_InvrOprStatus =
        PLTR_ac_ConstB.Constant_g0;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_e_V2GOprStat' incorporates:
     *  Constant: '<S459>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_V2GOprStat = PLTR_ac_ConstB.Constant_p2;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_e_EPBHoldSts' incorporates:
     *  Constant: '<S460>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_EPBHoldSts = PLTR_ac_ConstB.Constant_i;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTI_e_ShippingMode' incorporates:
     *  Constant: '<S434>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTI_e_ShippingMode = PLTR_ac_ConstB.Constant_e;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTI_kl_Odometer_Km' incorporates:
     *  Constant: '<S504>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTI_kl_Odometer_Km = KePLTR_kl_OdometerMaxValue;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTI_b_EPBFailStsInit' */
    PLTR_ac_B.OutportBufferForVePLTI_b_EPBFailStsInit = true;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_e_ProxiACC_Init' incorporates:
     *  Constant: '<S438>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_ProxiACC_Init =
        PLTR_ac_ConstB.Constant_n3;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_b_ProxiCC_Init' incorporates:
     *  Constant: '<S478>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_b_ProxiCC_Init = KePLTR_b_ProxiCC_Init;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_b_ProxiSpdLimiter_Init' incorporates:
     *  Constant: '<S480>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_b_ProxiSpdLimiter =
        KePLTR_b_ProxiSpdLimiter_Init;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_b_ProxiNavPrsnc_Init' incorporates:
     *  Constant: '<S479>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_b_ProxiNavPrsnc_I =
        KePLTR_b_ProxiNavPrsnc_Init;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_b_ProxiTrafficSignRcgntn_Init' incorporates:
     *  Constant: '<S481>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_b_ProxiTrafficSig =
        KePLTR_b_ProxiTrafficSignRcgntn_Init;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_Pct_ProxiSpdomtrTol_Init' incorporates:
     *  Constant: '<S463>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_Pct_ProxiSpdomtrT =
        KePLTR_Pct_ProxiSpdomtrTol_Init;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_e_IncreasingSpdConst_Init' incorporates:
     *  Constant: '<S439>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_IncreasingSpdCo =
        PLTR_ac_ConstB.Constant_es;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_b_ACC_On_Init' incorporates:
     *  Constant: '<S468>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_b_ACC_On_Init = KePLTR_b_ACC_On_Init;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_b_ACC_OnFA_Init' incorporates:
     *  Constant: '<S467>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_b_ACC_OnFA_Init = KePLTR_b_ACC_OnFA_Init;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_b_ParkBrakeSts_Init' incorporates:
     *  Constant: '<S475>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_b_ParkBrakeSts_In =
        KePLTR_b_ParkBrakeSts_Init;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_b_SpeedUnit_Init' incorporates:
     *  Constant: '<S487>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_b_SpeedUnit_Init = KePLTR_b_SpeedUnit_Init;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_e_ACCSystemSts_Init' incorporates:
     *  Constant: '<S461>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_ACCSystemSts_In =
        PLTR_ac_ConstB.Constant_bl;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_b_InternalLightSts_Init' incorporates:
     *  Constant: '<S473>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_b_InternalLightSt =
        KePLTR_b_InternalLightSts_Init;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_e_ECMVtdFreezeInit' incorporates:
     *  Constant: '<S441>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_ECMVtdFreezeIni =
        PLTR_ac_ConstB.Constant_lv;

    /* SystemInitialize for SignalConversion generated from: '<S425>/AutoPosCorrMd_Init' incorporates:
     *  Constant: '<S443>/Constant'
     */
    PLTR_ac_B.OutportBufferForAutoPosCorrMd_Init = PLTR_ac_ConstB.Constant_p;

    /* SystemInitialize for SignalConversion generated from: '<S425>/ShiftLeverPositionReq_Init' incorporates:
     *  Constant: '<S446>/Constant'
     */
    PLTR_ac_B.OutportBufferForShiftLeverPositionReq_In = PLTR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S425>/AutoPosCorrMd_Ini' incorporates:
     *  Constant: '<S444>/Constant'
     */
    PLTR_ac_B.OutportBufferForAutoPosCorrMd_Ini = PLTR_ac_ConstB.Constant_h;

    /* SystemInitialize for SignalConversion generated from: '<S425>/ShiftLeverPositionReq_Ini' incorporates:
     *  Constant: '<S448>/Constant'
     */
    PLTR_ac_B.OutportBufferForShiftLeverPositionReq__a =
        PLTR_ac_ConstB.Constant_k;

    /* SystemInitialize for SignalConversion generated from: '<S425>/PRND_ValidatePstn_Init' incorporates:
     *  Constant: '<S449>/Constant'
     */
    PLTR_ac_B.OutportBufferForPRND_ValidatePstn_Init = PLTR_ac_ConstB.Constant_b;

    /* SystemInitialize for SignalConversion generated from: '<S425>/TransShiftPosInitMSG' incorporates:
     *  Constant: '<S450>/Constant'
     */
    PLTR_ac_B.OutportBufferForTransShiftPosInitMSG = PLTR_ac_ConstB.Constant_l;

    /* SystemInitialize for SignalConversion generated from: '<S425>/TransShiftPos_InitMSG' incorporates:
     *  Constant: '<S451>/Constant'
     */
    PLTR_ac_B.OutportBufferForTransShiftPos_InitMSG = PLTR_ac_ConstB.Constant_g;

    /* SystemInitialize for SignalConversion generated from: '<S425>/PRND_ValidatePstn_InitSndry' incorporates:
     *  Constant: '<S452>/Constant'
     */
    PLTR_ac_B.OutportBufferForPRND_ValidatePstn_InitSn =
        PLTR_ac_ConstB.Constant_l2;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_e_ProxyHybridType_Init' incorporates:
     *  Constant: '<S498>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_ProxyHybridType =
        KePLTR_e_ProxyHybridTypeInit;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_e_Proxi_Autonomy_Lvl_Init' incorporates:
     *  Constant: '<S496>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_Proxi_Autonomy_ =
        KePLTR_e_Proxi_Autonomy_Lvl_Init;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_e_Proxi_CC_Logic_Init' incorporates:
     *  Constant: '<S497>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_Proxi_CC_Logic_ =
        KePLTR_e_Proxi_CC_Logic_Init;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_b_Hill_Des_Stat_Prx_Init' incorporates:
     *  Constant: '<S472>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_b_Hill_Des_Stat_P =
        KePLTR_b_Hill_Des_Stat_Prx_Init;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_e_MRM_Status_Init' incorporates:
     *  Constant: '<S445>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_MRM_Status_Init =
        PLTR_ac_ConstB.Constant_n;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_e_MRM_Status_C2_Init' incorporates:
     *  Constant: '<S447>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_MRM_Status_C2_I =
        PLTR_ac_ConstB.Constant_lt;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_e_LSMDExtReleaseLockReq_Init' incorporates:
     *  Constant: '<S454>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_LSMDExtReleaseL =
        PLTR_ac_ConstB.Constant_ee;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_v_HomSpdLim_Init' */
    PLTR_ac_B.OutportBufferForVePLTR_v_HomSpdLim_Init = 255.0F;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_e_VehCategory_Init' incorporates:
     *  Constant: '<S500>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_VehCategory_Ini =
        KePLTR_e_VehCategory_Init;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_phi_LwsAngle_Init' incorporates:
     *  Constant: '<S507>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_phi_LwsAngle_Init =
        KePLTR_phi_LwsAngle_Init;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_dphi_LwsSpeed_Init' incorporates:
     *  Constant: '<S490>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_dphi_LwsSpeed_Ini =
        KePLTR_dphi_LwsSpeed_Init;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_e_LwsAngleType_Init' incorporates:
     *  Constant: '<S495>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_LwsAngleType_In =
        KePLTR_e_LwsAngleType_Init;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_a_LongAccel_ORC_Init' incorporates:
     *  Constant: '<S466>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_a_LongAccel_ORC_I =
        KePLTR_a_LongAccel_ORC_Init;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_a_LatAccel_ORC_Init' incorporates:
     *  Constant: '<S465>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_a_LatAccel_ORC_In =
        KePLTR_a_LatAccel_ORC_Init;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_dphi_YawRate_ORC_Init' incorporates:
     *  Constant: '<S491>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_dphi_YawRate_ORC_ =
        KePLTR_dphi_YawRate_ORC_Init;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_b_ProxiCADM_Init' incorporates:
     *  Constant: '<S477>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_b_ProxiCADM_Init = KePLTR_b_ProxiCADM_Init;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_b_ProxiCADM2_Init' incorporates:
     *  Constant: '<S476>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_b_ProxiCADM2_Init =
        KePLTR_b_ProxiCADM2_Init;

    /* SystemInitialize for SignalConversion generated from: '<S425>/Inverter_PowerDraw_Init' incorporates:
     *  Constant: '<S464>/Calib'
     */
    PLTR_ac_B.OutportBufferForInverter_PowerDraw_Init =
        KePLTR_W_Inverter_PowerDraw_Init;

    /* SystemInitialize for SignalConversion generated from: '<S425>/Worksite_Inverter_Active_Init' incorporates:
     *  Constant: '<S489>/Calib'
     */
    PLTR_ac_B.OutportBufferForWorksite_Inverter_Active =
        KePLTR_b_Worksite_Inverter_Active_Init;

    /* SystemInitialize for SignalConversion generated from: '<S425>/Worksite_Inverter_Sts_Init' incorporates:
     *  Constant: '<S502>/Calib'
     */
    PLTR_ac_B.OutportBufferForWorksite_Inverter_Sts_In =
        KePLTR_e_Worksite_Inverter_Sts_Init;

    /* SystemInitialize for SignalConversion generated from: '<S425>/DrvrSeatSnsrSts_Init' incorporates:
     *  Constant: '<S453>/Constant'
     */
    PLTR_ac_B.OutportBufferForDrvrSeatSnsrSts_Init = PLTR_ac_ConstB.Constant_lf;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_b_CC_Type_Init' incorporates:
     *  Constant: '<S469>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_b_CC_Type_Init = KePLTR_b_CC_Type_Init;

    /* SystemInitialize for SignalConversion generated from: '<S425>/DriverDetected_Init' incorporates:
     *  Constant: '<S471>/Calib'
     */
    PLTR_ac_B.OutportBufferForDriverDetected_Init = KePLTR_b_DriverDetected_Init;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_b_RRCCPROXI_Init' incorporates:
     *  Constant: '<S485>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_b_RRCCPROXI_Init = KePLTR_b_RRCCPROXI_Init;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_e_BSM_AxleTrq_Enbld_Init' incorporates:
     *  Constant: '<S442>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_BSM_AxleTrq_Enb =
        PLTR_ac_ConstB.Constant_ll;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_e_HAS_TelltaleSts_Init' incorporates:
     *  Constant: '<S494>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_HAS_TelltaleSts =
        KePLTR_e_HAS_TelltaleSts_Init;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_e_AEBSystemSts_Init' incorporates:
     *  Constant: '<S492>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_AEBSystemSts_In =
        KePLTR_e_AEBSystemSts_Init;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_e_Command_15Sts_Init' incorporates:
     *  Constant: '<S493>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_Command_15Sts_I =
        KePLTR_e_Command_15Sts_Init;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_b_LHRDoorSts_Init' incorporates:
     *  Constant: '<S474>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_b_LHRDoorSts_Init =
        KePLTR_b_LHRDoorSts_Init;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_b_PsngrDoorSts_Init' incorporates:
     *  Constant: '<S482>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_b_PsngrDoorSts_In =
        KePLTR_b_PsngrDoorSts_Init;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_b_RHatchSts_Init' incorporates:
     *  Constant: '<S484>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_b_RHatchSts_Init = KePLTR_b_RHatchSts_Init;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_b_RHRDoorSts_Init' incorporates:
     *  Constant: '<S483>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_b_RHRDoorSts_Init =
        KePLTR_b_RHRDoorSts_Init;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_e_eBurn_Stages_Init' incorporates:
     *  Constant: '<S503>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_eBurn_Stages_In =
        KePLTR_e_eBurn_Stages_Init;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_l_TravelDistance_Init' incorporates:
     *  Constant: '<S505>/Calib'
     */
    PLTR_ac_B.OutportBufferForVePLTR_l_TravelDistance_ =
        KePLTR_l_TravelDistance_Init;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_b_GPS_Date_DayFA_PwrOn' */
    PLTR_ac_B.OutportBufferForVePLTR_b_GPS_Date_DayFA_ = true;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_b_GPS_Date_MonthFA_PwrOn' */
    PLTR_ac_B.OutportBufferForVePLTR_b_GPS_Date_MonthF = true;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_b_GPS_Date_YearFA_PwrOn' */
    PLTR_ac_B.OutportBufferForVePLTR_b_GPS_Date_YearFA = true;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_b_GPS_UTC_HourFA_PwrOn' */
    PLTR_ac_B.OutportBufferForVePLTR_b_GPS_UTC_HourFA_ = true;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_b_GPS_UTC_MinuteFA_PwrOn' */
    PLTR_ac_B.OutportBufferForVePLTR_b_GPS_UTC_MinuteF = true;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_b_GPS_UTC_SecondFA_PwrOn' */
    PLTR_ac_B.OutportBufferForVePLTR_b_GPS_UTC_SecondF = true;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_e_FaultSts_IgnKeyOffTmrPerfTooFast_Init' incorporates:
     *  Constant: '<S425>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_FaultSts_IgnKey =
        PLTR_ac_ConstB.Constant_bw;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_e_RTCTestSyncReport_Init' incorporates:
     *  Constant: '<S462>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_RTCTestSyncRepo =
        PLTR_ac_ConstB.Constant_a;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_e_SelectSpdSts_Init' incorporates:
     *  Constant: '<S456>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_SelectSpdSts_In =
        PLTR_ac_ConstB.Constant_ly;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_e_ParkingGearShiftReq_BSM_Init' incorporates:
     *  Constant: '<S458>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_ParkingGearShif =
        PLTR_ac_ConstB.Constant_h2;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_e_HiBmLvr_Stat_Init' incorporates:
     *  Constant: '<S433>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_HiBmLvr_Stat_In =
        PLTR_ac_ConstB.Constant_ay;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_e_ASCM_Stat_Init' incorporates:
     *  Constant: '<S437>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_ASCM_Stat_Init =
        PLTR_ac_ConstB.Constant_nd;

    /* SystemInitialize for SignalConversion generated from: '<S425>/VePLTR_e_DriverDoorOnOffSts_Init' incorporates:
     *  Constant: '<S440>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_DriverDoorOnOff =
        PLTR_ac_ConstB.Constant_ek;

    /* SystemInitialize for S-Function (fcgen): '<S86>/FcnCallGen' incorporates:
     *  SubSystem: '<S86>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S427>/VePLTR_e_VehicleCountryCode_Out_Init' incorporates:
     *  Constant: '<S427>/Const2'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_VehicleCountryC = PLTR_ac_ConstB.Const2;

    /* SystemInitialize for SignalConversion generated from: '<S427>/VePLTR_e_ShippingMode_Out_Init' incorporates:
     *  Constant: '<S427>/Const3'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_ShippingMode_Ou = PLTR_ac_ConstB.Const3;

    /* SystemInitialize for SignalConversion generated from: '<S427>/VePLTR_e_ESMTransRngSt_Out_Init' incorporates:
     *  Constant: '<S427>/Const15'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_ESMTransRngSt_O = PLTR_ac_ConstB.Const15;

    /* SystemInitialize for SignalConversion generated from: '<S427>/VePLTR_e_AutoPosCorrMd_Out_Init' incorporates:
     *  Constant: '<S427>/Const16'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_AutoPosCorrMd_O = PLTR_ac_ConstB.Const16;

    /* SystemInitialize for SignalConversion generated from: '<S427>/VePLTR_e_ShiftLeverPosReq_Out_Init' incorporates:
     *  Constant: '<S427>/Const22'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_ShiftLeverPosRe = PLTR_ac_ConstB.Const22;

    /* SystemInitialize for SignalConversion generated from: '<S427>/VePLTR_e_RationalisedRngSt_Out_Init' incorporates:
     *  Constant: '<S427>/Const26'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_RationalisedRng = PLTR_ac_ConstB.Const26;

    /* SystemInitialize for SignalConversion generated from: '<S427>/VePLTR_e_ValidatePstn_Out_Init' incorporates:
     *  Constant: '<S427>/Const27'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_ValidatePstn_Ou = PLTR_ac_ConstB.Const27;

    /* SystemInitialize for SignalConversion generated from: '<S427>/VePLTR_e_FaultSts_ECUInplantmodeAct' incorporates:
     *  Constant: '<S518>/Constant'
     */
    PLTR_ac_B.OutportBufferForVePLTR_e_FaultSts_ECUInp =
        PLTR_ac_ConstB.Constant_j;

    /* End of SystemInitialize for S-Function (fcgen): '<S86>/FcnCallGen' */

    /* SystemInitialize for SignalConversion generated from: '<S86>/VePLTI_b_RTC_CurrentTimeFA_Init_write' */
    Rte_IrvWrite_PLTR_ac_Init_VePLTI_b_RTC_CurrentTimeFA_Init_write_IRV
        (PLTR_ac_B.Merge1_a);

    /* SystemInitialize for SignalConversion generated from: '<S86>/VePLTR_b_BatteryWasDisconnected_Init_write' */
    Rte_IrvWrite_PLTR_ac_Init_VePLTR_b_BatteryWasDisconnected_Init_write_IRV
        (PLTR_ac_B.LogicalOperator_b);

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_ERS_SW' incorporates:
     *  Merge: '<Root>/Merge_80'
     */
    (void)Rte_Write_VePLTR_e_ERS_SW_Value(CeTRGR_e_ERSBttn_NotActvtd);

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_TowHaulMode' incorporates:
     *  Merge: '<Root>/Merge_2'
     */
    (void)Rte_Write_VePLTR_e_TowHaulMode_Value(CePLTR_e_Towing_MD_RQ_OFF);

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_InvOprStat' incorporates:
     *  Merge: '<Root>/Merge_27'
     */
    (void)Rte_Write_VePLTR_e_InvOprStat_Value(CePLTR_e_NoPlgIn_Tools);

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_V2GOprStat' incorporates:
     *  Merge: '<Root>/Merge_28'
     */
    (void)Rte_Write_VePLTR_e_V2GOprStat_Value(CePLTR_e_NoPlgIn);

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_EPBHoldSts' incorporates:
     *  Merge: '<Root>/Merge_31'
     */
    (void)Rte_Write_VePLTR_e_EPBHoldSts_Value(CePLTR_e_EPBHoldSts_REL);

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_VehicleCountryCode' incorporates:
     *  Merge: '<Root>/Merge_Outport_14'
     */
    (void)Rte_Write_VePLTR_e_VehicleCountryCode_Value(CePLTR_e_VCC_OTHERS);

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_ShippingMode' incorporates:
     *  Merge: '<Root>/Merge_Outport_18'
     */
    (void)Rte_Write_VePLTR_e_ShippingMode_Value(CePLTR_e_ShipingMode_CUST_MD);

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_ShiftIndSt' incorporates:
     *  Merge: '<Root>/Merge_40'
     */
    (void)Rte_Write_VePLTR_e_ShiftIndSt_Value(CePLTR_e_NotPresent);

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_VehCfgSt' incorporates:
     *  Merge: '<Root>/Merge_51'
     */
    (void)Rte_Write_VePLTR_e_VehCfgSt_Value(CePLTR_e_NotAvailable);

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_ProxiACC' incorporates:
     *  Merge: '<Root>/Merge_57'
     */
    (void)Rte_Write_VePLTR_e_ProxiACC_Value(CePLTR_e_ACC_Absent);

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_ProxiIncreasingSpdCnst' incorporates:
     *  Merge: '<Root>/Merge_65'
     */
    (void)Rte_Write_VePLTR_e_ProxiIncreasingSpdCnst_Value(CePLTR_e_Increasing_0);

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_ACCSystemSts' incorporates:
     *  Merge: '<Root>/Merge_70'
     */
    (void)Rte_Write_VePLTR_e_ACCSystemSts_Value(CePLTR_e_Off);

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_Prmry_TransShiftPstn' incorporates:
     *  Merge: '<Root>/Merge_132'
     */
    (void)Rte_Write_VePLTR_e_Prmry_TransShiftPstn_Value
        (CeTRGR_e_NoSelectionAvailable);

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_ESMTransRngSt' incorporates:
     *  Merge: '<Root>/Merge_Outport_58'
     */
    (void)Rte_Write_VePLTR_e_ESMTransRngSt_Value(CeTRGR_e_NoSelectionAvailable);

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_AutoPosCorrMd' incorporates:
     *  Merge: '<Root>/Merge_Outport_59'
     */
    (void)Rte_Write_VePLTR_e_AutoPosCorrMd_Value(CeTRGR_e_AutoPosCorrMd_Off);

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_ShiftLeverPosReq' incorporates:
     *  Merge: '<Root>/Merge_Outport_65'
     */
    (void)Rte_Write_VePLTR_e_ShiftLeverPosReq_Value
        (CeTRGR_e_NoSelectionAvailable);

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_Scndry_TransShiftPstn' incorporates:
     *  Merge: '<Root>/Merge_127'
     */
    (void)Rte_Write_VePLTR_e_Scndry_TransShiftPstn_Value
        (CeTRGR_e_NoSelectionAvailable);

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_RationalisedRngSt' incorporates:
     *  Merge: '<Root>/Merge_Outport_71'
     */
    (void)Rte_Write_VePLTR_e_RationalisedRngSt_Value
        (CeTRGR_e_NoSelectionAvailable);

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_ValidatePstn' incorporates:
     *  Merge: '<Root>/Merge_Outport_72'
     */
    (void)Rte_Write_VePLTR_e_ValidatePstn_Value(CeTRGR_e_NoSelectionAvailable);

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_ProxyHybridType' incorporates:
     *  Merge: '<Root>/Merge_86'
     */
    (void)Rte_Write_VePLTR_e_ProxyHybridType_Value(CePLTR_e_NotApplicable);

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_Proxi_Autonomy_Lvl' incorporates:
     *  Merge: '<Root>/Merge_88'
     */
    (void)Rte_Write_VePLTR_e_Proxi_Autonomy_Lvl_Value(CePLTR_e_None_Level1);

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_Proxi_CC_Logic' incorporates:
     *  Merge: '<Root>/Merge_89'
     */
    (void)Rte_Write_VePLTR_e_Proxi_CC_Logic_Value(CePLTR_e_Logic1);

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_MRM_Status' incorporates:
     *  Merge: '<Root>/Merge_92'
     */
    (void)Rte_Write_VePLTR_e_MRM_Status_Value(CePLTR_e_Not_Active);

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_LSMDExtReleaseLockReq' incorporates:
     *  Merge: '<Root>/Merge_97'
     */
    (void)Rte_Write_VePLTR_e_LSMDExtReleaseLockReq_Value(CePLTR_e_NotActive);

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_VehCategory' incorporates:
     *  Merge: '<Root>/Merge_36'
     */
    (void)Rte_Write_VePLTR_e_VehCategory_Value(CePLTR_e_Category_M1);

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_LwsAngleType' incorporates:
     *  Merge: '<Root>/Merge_15'
     */
    (void)Rte_Write_VePLTR_e_LwsAngleType_Value(CePLTR_e_Absolute);

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_MRM_Status_C2' incorporates:
     *  Merge: '<Root>/Merge_95'
     */
    (void)Rte_Write_VePLTR_e_MRM_Status_C2_Value(CePLTR_e_Not_Active);

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_Worksite_Inverter_Sts' incorporates:
     *  Merge: '<Root>/Merge_53'
     */
    (void)Rte_Write_VePLTR_e_Worksite_Inverter_Sts_Value
        (CePLTR_e_WSInverterSts_NOT_ACTIVE);

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/PLTR_MedTEH'
     */

    /* SystemInitialize for SignalConversion generated from: '<S84>/VePLTR_b_RTCFltDtctd' */
    Rte_IrvWrite_PLTR_ac_Init_VePLTR_b_RTCFltDtctd_IRV
        (PLTR_ac_B.RelationalOperator);

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_BSM_AxleTrq_Enbld' incorporates:
     *  Merge: '<Root>/Merge_20'
     */
    (void)Rte_Write_VePLTR_e_BSM_AxleTrq_Enbld_Value(CePLTR_e_No_Req);

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_FaultSts_ECUInplantmodeAct' incorporates:
     *  Merge: '<Root>/M_VePLTR_e_FaultSts_ECUInplantmodeAct'
     */
    (void)Rte_Write_VePLTR_e_FaultSts_ECUInplantmodeAct_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_HAS_TelltaleSts' incorporates:
     *  Merge: '<Root>/Merge5'
     */
    (void)Rte_Write_VePLTR_e_HAS_TelltaleSts_Value(CePLTR_e_HAS_TelltaleSts_OFF);

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_AEBSystemSts' incorporates:
     *  Merge: '<Root>/Merge7'
     */
    (void)Rte_Write_VePLTR_e_AEBSystemSts_Value(CePLTR_e_FCW_Off);

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_Command_15Sts' incorporates:
     *  Merge: '<Root>/Merge9'
     */
    (void)Rte_Write_VePLTR_e_Command_15Sts_Value(CePLTR_e_Not_Pressed);

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_eBurn_Stages' incorporates:
     *  Merge: '<Root>/Merge20'
     */
    (void)Rte_Write_VePLTR_e_eBurn_Stages_Value(CePLTR_e_eBurn_NormalStage);

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_FaultSts_IgnKeyOffTmrPerfTooFast' incorporates:
     *  Merge: '<Root>/Merge36'
     */
    (void)Rte_Write_VePLTR_e_FaultSts_IgnKeyOffTmrPerfTooFast_Value
        (CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_SelectSpdSts' incorporates:
     *  Merge: '<Root>/Merge38'
     */
    (void)Rte_Write_VePLTR_e_SelectSpdSts_Value(CePLTR_e_SelectSpdSts_OFF);

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_ParkingGearShiftReq_BSM' incorporates:
     *  Merge: '<Root>/Merge40'
     */
    (void)Rte_Write_VePLTR_e_ParkingGearShiftReq_BSM_Value
        (CePLTR_e_GearShiftReq_Idle);

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_HiBmLvr_Stat' incorporates:
     *  Merge: '<Root>/Merge48'
     */
    (void)Rte_Write_VePLTR_e_HiBmLvr_Stat_Value(CePLTR_e_HiBmLvr_Stat_Idle);

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_ASCM_Stat' incorporates:
     *  Merge: '<Root>/Merge57'
     */
    (void)Rte_Write_VePLTR_e_ASCM_Stat_Value(CePLTR_e_ASCM_Stat_NONE);

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_DriverSeatBeltSts' incorporates:
     *  Merge: '<Root>/Merge_33'
     */
    (void)Rte_Write_VePLTR_e_DriverSeatBeltSts_Value(CePLTR_e_DRV_SEATBELT_OK);

    /* SystemInitialize for Outport: '<Root>/VePLTR_e_ECMVtdFreeze' incorporates:
     *  Merge: '<Root>/Merge_83'
     */
    (void)Rte_Write_VePLTR_e_ECMVtdFreeze_Value(CePLTR_e_NoReset);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
