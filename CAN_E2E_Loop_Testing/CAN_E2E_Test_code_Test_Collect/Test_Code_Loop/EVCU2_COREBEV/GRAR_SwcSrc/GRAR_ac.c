/*
 * File: GRAR_ac.c
 *
 * Code generated for Simulink model 'GRAR_ac'.
 *
 * Model version                  : 9.1768
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:44:37 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "GRAR_ac.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2020b.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_GRAR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_001_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S38>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_002_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S39>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_003_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S40>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_004_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S41>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_005_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S42>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_006_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S43>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_007_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S44>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_008_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S45>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_009_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S46>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_010_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S48>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_011_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S49>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_012_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S50>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_013_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S51>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_014_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S52>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_015_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S53>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_016_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S54>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_017_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S55>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_018_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S56>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_019_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S57>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_020_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S59>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_021_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S60>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_022_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S61>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_023_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S62>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_024_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S63>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_025_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S64>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_026_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S65>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_027_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S66>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_028_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S67>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_029_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S68>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_030_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S70>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_031_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S71>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_032_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S72>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_033_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S73>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_034_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S74>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_035_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S75>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_036_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S76>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_037_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S77>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_038_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S78>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_039_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S79>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_040_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S81>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_041_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S82>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_042_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S83>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_043_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S84>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_044_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S85>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_045_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S86>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_046_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S87>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_047_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S88>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_048_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S89>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_049_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S90>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_b_EmerOprMod_050_Specs[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S92>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_i_BolArrayReadTest_3x6[18] =
{
    1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 0
} ;                                    /* Referenced by: '<S35>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_i_BolArrayReadTest_4x4[16] =
{
    1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0, 0, 1
} ;                                    /* Referenced by: '<S37>/Calib' */

static volatile CONST(boolean, GRAR_VAR_INIT) KaGRAR_i_BolArrayReadTest_7x3[21] =
{
    0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 1
} ;                                    /* Referenced by: '<S34>/Calib' */

static volatile CONST(float32, GRAR_VAR_INIT) KaGRAR_i_EmrgOperForFault[38] =
{
    1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F, 7.0F, 8.0F, 9.0F, 10.0F, 11.0F, 12.0F,
    13.0F, 14.0F, 15.0F, 16.0F, 17.0F, 18.0F, 19.0F, 20.0F, 21.0F, 22.0F, 23.0F,
    24.0F, 25.0F, 26.0F, 27.0F, 28.0F, 29.0F, 30.0F, 31.0F, 32.0F, 33.0F, 34.0F,
    35.0F, 36.0F, 37.0F, 38.0F
} ;                                    /* Referenced by: '<S106>/Calib' */

static volatile CONST(float32, GRAR_VAR_INIT) KaGRAR_i_MSSBEVActPriority[26] =
{
    1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F, 7.0F, 20.0F, 21.0F, 22.0F, 23.0F, 24.0F,
    25.0F, 26.0F, 27.0F, 28.0F, 29.0F, 30.0F, 31.0F, 32.0F, 33.0F, 34.0F, 35.0F,
    11.0F, 12.0F, 13.0F
} ;                                    /* Referenced by: '<S69>/Calib' */

static volatile CONST(float32, GRAR_VAR_INIT) KaGRAR_i_MSSBEV_ActionForFault[38]
    =
{
    18.0F, 21.0F, 18.0F, 18.0F, 18.0F, 18.0F, 18.0F, 18.0F, 21.0F, 1.0F, 18.0F,
    21.0F, 18.0F, 18.0F, 18.0F, 21.0F, 21.0F, 21.0F, 21.0F, 18.0F, 21.0F, 18.0F,
    18.0F, 18.0F, 21.0F, 21.0F, 21.0F, 21.0F, 1.0F, 1.0F, 1.0F, 18.0F, 21.0F,
    21.0F, 21.0F, 18.0F, 18.0F, 18.0F
} ;                                    /* Referenced by: '<S28>/Calib' */

static volatile CONST(float32, GRAR_VAR_INIT) KaGRAR_i_SinArrayReadTest_3x6[18] =
{
    1.0F, 7.0F, 13.0F, 2.0F, 8.0F, 14.0F, 3.0F, 9.0F, 15.0F, 4.0F, 10.0F, 16.0F,
    5.0F, 11.0F, 17.0F, 6.0F, 12.0F, 18.0F
} ;                                    /* Referenced by: '<S32>/Calib' */

static volatile CONST(float32, GRAR_VAR_INIT) KaGRAR_i_SinArrayReadTest_4x4[16] =
{
    1.0F, 5.0F, 9.0F, 13.0F, 2.0F, 6.0F, 10.0F, 14.0F, 3.0F, 7.0F, 11.0F, 15.0F,
    4.0F, 8.0F, 12.0F, 16.0F
} ;                                    /* Referenced by: '<S33>/Calib' */

static volatile CONST(float32, GRAR_VAR_INIT) KaGRAR_i_SinArrayReadTest_7x3[21] =
{
    1.0F, 4.0F, 7.0F, 10.0F, 13.0F, 16.0F, 19.0F, 2.0F, 5.0F, 8.0F, 11.0F, 14.0F,
    17.0F, 20.0F, 3.0F, 6.0F, 9.0F, 12.0F, 15.0F, 18.0F, 21.0F
} ;                                    /* Referenced by: '<S31>/Calib' */

static volatile CONST(float32, GRAR_VAR_INIT) KeGRAR_Cnt_NumberOfFaultTypes =
    38.0F;                             /* Referenced by: '<S29>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_BEV_LatDynErr_Enbl = 1;/* Referenced by: '<S309>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_BEV_LatDynErr_FltInj = 0;/* Referenced by: '<S308>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_ConsiderPowerUp = 1;/* Referenced by: '<S58>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_Flt_injct_01 = 0;/* Referenced by: '<S244>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_Flt_injct_02 = 0;/* Referenced by: '<S266>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_Flt_injct_03 = 0;/* Referenced by: '<S288>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_Flt_injct_04 = 0;/* Referenced by: '<S310>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_Flt_injct_05 = 0;/* Referenced by: '<S312>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_Flt_injct_06 = 0;/* Referenced by: '<S314>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_Flt_injct_07 = 0;/* Referenced by: '<S316>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_Flt_injct_08 = 0;/* Referenced by: '<S318>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_Flt_injct_09 = 0;/* Referenced by: '<S320>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_Flt_injct_10 = 0;/* Referenced by: '<S246>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_Flt_injct_11 = 0;/* Referenced by: '<S248>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_Flt_injct_12 = 0;/* Referenced by: '<S250>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_Flt_injct_13 = 0;/* Referenced by: '<S252>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_Flt_injct_14 = 0;/* Referenced by: '<S254>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_Flt_injct_15 = 0;/* Referenced by: '<S256>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_Flt_injct_16 = 0;/* Referenced by: '<S258>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_Flt_injct_17 = 0;/* Referenced by: '<S260>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_Flt_injct_18 = 0;/* Referenced by: '<S262>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_Flt_injct_19 = 0;/* Referenced by: '<S264>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_Flt_injct_20 = 0;/* Referenced by: '<S268>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_Flt_injct_21 = 0;/* Referenced by: '<S270>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_Flt_injct_22 = 0;/* Referenced by: '<S272>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_Flt_injct_23 = 0;/* Referenced by: '<S274>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_Flt_injct_24 = 0;/* Referenced by: '<S276>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_Flt_injct_25 = 0;/* Referenced by: '<S278>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_Flt_injct_26 = 0;/* Referenced by: '<S280>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_Flt_injct_27 = 0;/* Referenced by: '<S282>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_Flt_injct_28 = 0;/* Referenced by: '<S284>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_Flt_injct_29 = 0;/* Referenced by: '<S286>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_Flt_injct_30 = 0;/* Referenced by: '<S290>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_Flt_injct_31 = 0;/* Referenced by: '<S292>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_Flt_injct_32 = 0;/* Referenced by: '<S294>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_Flt_injct_33 = 0;/* Referenced by: '<S296>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_Flt_injct_34 = 0;/* Referenced by: '<S298>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_Flt_injct_35 = 0;/* Referenced by: '<S300>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_Flt_injct_36 = 0;/* Referenced by: '<S302>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_Flt_injct_37 = 0;/* Referenced by: '<S304>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_Flt_injct_38 = 0;/* Referenced by: '<S306>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_enable_01 = 1;/* Referenced by: '<S245>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_enable_02 = 1;/* Referenced by: '<S267>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_enable_03 = 1;/* Referenced by: '<S289>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_enable_04 = 1;/* Referenced by: '<S311>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_enable_05 = 1;/* Referenced by: '<S313>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_enable_06 = 1;/* Referenced by: '<S315>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_enable_07 = 1;/* Referenced by: '<S317>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_enable_08 = 1;/* Referenced by: '<S319>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_enable_09 = 1;/* Referenced by: '<S321>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_enable_10 = 1;/* Referenced by: '<S247>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_enable_11 = 1;/* Referenced by: '<S249>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_enable_12 = 1;/* Referenced by: '<S251>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_enable_13 = 1;/* Referenced by: '<S253>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_enable_14 = 1;/* Referenced by: '<S255>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_enable_15 = 1;/* Referenced by: '<S257>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_enable_16 = 1;/* Referenced by: '<S259>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_enable_17 = 1;/* Referenced by: '<S261>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_enable_18 = 1;/* Referenced by: '<S263>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_enable_19 = 1;/* Referenced by: '<S265>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_enable_20 = 1;/* Referenced by: '<S269>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_enable_21 = 1;/* Referenced by: '<S271>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_enable_22 = 1;/* Referenced by: '<S273>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_enable_23 = 1;/* Referenced by: '<S275>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_enable_24 = 1;/* Referenced by: '<S277>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_enable_25 = 1;/* Referenced by: '<S279>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_enable_26 = 1;/* Referenced by: '<S281>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_enable_27 = 1;/* Referenced by: '<S283>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_enable_28 = 1;/* Referenced by: '<S285>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_enable_29 = 1;/* Referenced by: '<S287>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_enable_30 = 1;/* Referenced by: '<S291>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_enable_31 = 1;/* Referenced by: '<S293>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_enable_32 = 1;/* Referenced by: '<S295>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_enable_33 = 1;/* Referenced by: '<S297>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_enable_34 = 1;/* Referenced by: '<S299>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_enable_35 = 1;/* Referenced by: '<S301>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_enable_36 = 1;/* Referenced by: '<S303>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_enable_37 = 1;/* Referenced by: '<S305>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_FF_enable_38 = 1;/* Referenced by: '<S307>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_MSSBEVActReset = 0;/* Referenced by: '<S36>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_MSSBEV_ActionOutEnbl = 0;/* Referenced by: '<S30>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_Set_TargetSts_Normal = 0;/* Referenced by: '<S102>/Calib' */
static volatile CONST(boolean, GRAR_VAR_INIT) KeGRAR_b_UseProcessedAction = 0;/* Referenced by: '<S91>/Calib' */
static volatile CONST(float32, GRAR_VAR_INIT) KeGRAR_i_MSSBEVActOvrrd_1 = 0.0F;/* Referenced by: '<S80>/Calib' */
static volatile CONST(float32, GRAR_VAR_INIT) KeGRAR_i_MSSBEVAct_DlyCycNo = 5.0F;/* Referenced by: '<S47>/Calib' */
static volatile CONST(float32, GRAR_VAR_INIT) KeGRAR_i_bol_3x6_col = 5.0F;/* Referenced by: '<S103>/Calib' */
static volatile CONST(float32, GRAR_VAR_INIT) KeGRAR_i_bol_3x6_row = 0.0F;/* Referenced by: '<S101>/Calib' */
static volatile CONST(float32, GRAR_VAR_INIT) KeGRAR_i_bol_4x4_col = 1.0F;/* Referenced by: '<S105>/Calib' */
static volatile CONST(float32, GRAR_VAR_INIT) KeGRAR_i_bol_4x4_row = 3.0F;/* Referenced by: '<S104>/Calib' */
static volatile CONST(float32, GRAR_VAR_INIT) KeGRAR_i_bol_7x3_col = 1.0F;/* Referenced by: '<S100>/Calib' */
static volatile CONST(float32, GRAR_VAR_INIT) KeGRAR_i_bol_7x3_row = 6.0F;/* Referenced by: '<S99>/Calib' */
static volatile CONST(float32, GRAR_VAR_INIT) KeGRAR_i_sin_3x6_col = 1.0F;/* Referenced by: '<S96>/Calib' */
static volatile CONST(float32, GRAR_VAR_INIT) KeGRAR_i_sin_3x6_row = 1.0F;/* Referenced by: '<S95>/Calib' */
static volatile CONST(float32, GRAR_VAR_INIT) KeGRAR_i_sin_4x4_col = 2.0F;/* Referenced by: '<S98>/Calib' */
static volatile CONST(float32, GRAR_VAR_INIT) KeGRAR_i_sin_4x4_row = 3.0F;/* Referenced by: '<S97>/Calib' */
static volatile CONST(float32, GRAR_VAR_INIT) KeGRAR_i_sin_7x3_col = 0.0F;/* Referenced by: '<S94>/Calib' */
static volatile CONST(float32, GRAR_VAR_INIT) KeGRAR_i_sin_7x3_row = 0.0F;/* Referenced by: '<S93>/Calib' */
static volatile CONST(float32, GRAR_VAR_INIT) KeGRAR_r_RIPratio_RA_Cal_1 = 0.25F;/* Referenced by: '<S343>/Calib' */
static volatile CONST(float32, GRAR_VAR_INIT) KeGRAR_r_RIPratio_RA_Cal_2 = 0.75F;/* Referenced by: '<S342>/Calib' */

#define STOP_SEC_CALIB_UNSPECIFIED_GRAR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_GRAR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(float32, GRAR_VAR_INIT) VaGRAR_i_MSSActions_actv[26];/* '<S9>/Chart1' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAC_b_actv_0_TotTrq;/* '<S26>/Merge1' */
static VAR(TeGRAR_e_TargetSts, GRAR_VAR_INIT) VeGRAC_e_DRV_PoffRegenTgtSts;/* '<S9>/Switch9' */
static VAR(TeGRAR_e_MSSBEV_Action, GRAR_VAR_INIT) VeGRAC_e_MSSBEV_Action;/* '<S21>/Merge' */
static VAR(TeGRAR_e_TargetSts, GRAR_VAR_INIT) VeGRAC_e_MSSBEVdrvPoffRegenTs;/* '<S27>/Merge9' */
static VAR(TeGRAR_e_TargetSts, GRAR_VAR_INIT) VeGRAC_e_MSSBEVeTCS_TargetSts;/* '<S9>/Switch3' */
static VAR(TeGRAR_e_TargetSts, GRAR_VAR_INIT) VeGRAC_e_MSSBEVrwsTargetSts;/* '<S27>/Merge1' */
static VAR(TeGRAR_e_PRND_Req, GRAR_VAR_INIT) VeGRAC_e_PRND_Req;/* '<S22>/Merge' */
static VAR(TeGRAR_e_ParkPawlReq, GRAR_VAR_INIT) VeGRAC_e_ParkPawlReq;/* '<S23>/Merge' */
static VAR(TeGRAR_e_TotMtrTrqRmdlActn, GRAR_VAR_INIT) VeGRAC_e_TotMtrTrqRmdlActn;/* '<S110>/Merge' */
static VAR(float32, GRAR_VAR_INIT) VeGRAC_i_MSSBEV_Action_raw;
                     /* '<S9>/Select_the_MSSBEV_Action_with_highest_priority' */
static VAR(float32, GRAR_VAR_INIT) VeGRAC_r_RA_RIP_Ratio;/* '<S26>/Merge' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAI_b_InFieldMode;/* '<S418>/AND' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAI_b_InFieldMode_1;/* '<S188>/AND' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAI_b_VDAB_Poff_SafActive;/* '<S194>/AND' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAI_b_VDAB_WED_SafActive;/* '<S196>/AND' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAI_b_VDAB_bTCS_SafActive;/* '<S193>/AND' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAI_b_VDAB_bTV_SafActive;/* '<S192>/AND' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAI_b_VDAB_eAWD_SafActive;/* '<S186>/AND' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAI_b_VDAB_eLSD_SafActive;/* '<S191>/AND' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAI_b_VDCD_RWS_SafActive;/* '<S195>/AND' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAI_b_VDCD_Regen_SafActive;/* '<S190>/AND' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAI_b_VDCD_eAWD_SafActive;/* '<S189>/AND' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAI_b_VDCD_eDTC_SafActive;/* '<S187>/AND' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAI_b_VDCD_eTCS_SafActive;/* '<S185>/AND' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAI_b_VehImpactDetected;/* '<S417>/AND' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_1orMoreFaultsActive;/* '<S25>/Logical Operator1' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_001;/* '<S109>/EOM__1' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_002;/* '<S109>/EOM__2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_003;/* '<S109>/EOM__3' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_004;/* '<S109>/EOM__4' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_005;/* '<S109>/EOM__5' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_006;/* '<S109>/EOM__6' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_007;/* '<S109>/EOM__7' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_008;/* '<S109>/EOM__8' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_009;/* '<S109>/EOM__9' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_010;/* '<S109>/EOM__10' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_011;/* '<S109>/EOM__11' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_012;/* '<S109>/EOM__12' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_013;/* '<S109>/EOM__13' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_014;/* '<S109>/EOM__14' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_015;/* '<S109>/EOM__15' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_016;/* '<S109>/EOM__16' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_017;/* '<S109>/EOM__17' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_018;/* '<S109>/EOM__18' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_019;/* '<S109>/EOM__19' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_020;/* '<S109>/EOM__20' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_021;/* '<S109>/EOM__21' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_022;/* '<S109>/EOM__22' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_023;/* '<S109>/EOM__23' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_024;/* '<S109>/EOM__24' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_025;/* '<S109>/EOM__25' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_026;/* '<S109>/EOM__26' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_027;/* '<S109>/EOM__27' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_028;/* '<S109>/EOM__28' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_029;/* '<S109>/EOM__29' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_030;/* '<S109>/EOM__30' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_031;/* '<S109>/EOM__31' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_032;/* '<S109>/EOM__32' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_033;/* '<S109>/EOM__33' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_034;/* '<S109>/EOM__34' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_035;/* '<S109>/EOM__35' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_036;/* '<S109>/EOM__36' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_037;/* '<S109>/EOM__37' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_038;/* '<S109>/EOM__38' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_039;/* '<S109>/EOM__39' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_040;/* '<S109>/EOM__40' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_041;/* '<S109>/EOM__41' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_042;/* '<S109>/EOM__42' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_043;/* '<S109>/EOM__43' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_044;/* '<S109>/EOM__44' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_045;/* '<S109>/EOM__45' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_046;/* '<S109>/EOM__46' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_047;/* '<S109>/EOM__47' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_048;/* '<S109>/EOM__48' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_049;/* '<S109>/EOM__49' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Active_EOM_050;/* '<S109>/EOM__50' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_BEV_LatDynErr_1;/* '<S25>/Logical Operator' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_BEV_LatDynErr_1a;/* '<S237>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_BEV_LatDynErr_2;/* '<S25>/AND1' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Boolean_3x6_test;/* '<S9>/EOM__46' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Boolean_4x4_test;/* '<S9>/EOM__47' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Boolean_7x3_test;/* '<S9>/EOM__42' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Boolean_OR_test;/* '<S108>/Logical Operator' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_BoolnInside3x6Test;/* '<S108>/EOM__46' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_BoolnInside4x4Test;/* '<S108>/EOM__47' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_BoolnInside7x3Test;/* '<S108>/EOM__42' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_CarJustKeydNotOff;
           /* '<S25>/Gives_1_just_after_the_car_is_switched_out_of_OFF_state' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_CarJustKeydOff;
                   /* '<S25>/Gives_1_immediately_after_the_car_is_turned_off' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_CarKeydOff;
                       /* '<S25>/When the car is turned OFF, the output is 1' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Car_keyed_NOT_off;
                                 /* '<S25>/Gives_1_when_car_is_keyed_NOT_off' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Diag_On;/* '<S25>/Relational Operator3' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_EOM_spec_01;/* '<S9>/EOM_spec_01' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_EOM_spec_02;/* '<S9>/EOM_spec_02' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_EOM_spec_03;/* '<S9>/EOM_spec_03' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_EOM_spec_04;/* '<S9>/EOM_spec_04' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_EOM_spec_05;/* '<S9>/EOM_spec_05' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_EOM_spec_06;/* '<S9>/EOM_spec_06' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_EOM_spec_07;/* '<S9>/EOM_spec_07' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_EOM_spec_08;/* '<S9>/EOM_spec_08' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_EOM_spec_09;/* '<S9>/EOM_spec_09' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_EOM_spec_10;/* '<S9>/EOM_spec_10' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_EOM_spec_11;/* '<S9>/EOM_spec_11' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_EOM_spec_12;/* '<S9>/EOM_spec_12' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_EOM_spec_13;/* '<S9>/EOM_spec_13' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_EOM_spec_14;/* '<S9>/EOM_spec_14' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_EOM_spec_15;/* '<S9>/EOM_spec_15' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_EOM_spec_16;/* '<S9>/EOM_spec_16' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_EOM_spec_17;/* '<S9>/EOM_spec_17' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_EOM_spec_18;/* '<S9>/EOM_spec_18' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_EOM_spec_19;/* '<S9>/EOM_spec_19' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_EOM_spec_20;/* '<S9>/EOM_spec_20' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_EOM_spec_21;/* '<S9>/EOM_spec_21' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_EOM_spec_22;/* '<S9>/EOM_spec_22' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_EOM_spec_23;/* '<S9>/EOM_spec_23' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_EOM_spec_24;/* '<S9>/EOM_spec_24' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_EOM_spec_25;/* '<S9>/EOM_spec_25' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_EOM_spec_26;/* '<S9>/EOM_spec_26' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_EOM_spec_27;/* '<S9>/EOM_spec_27' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_EOM_spec_28;/* '<S9>/EOM_spec_28' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_EOM_spec_29;/* '<S9>/EOM_spec_29' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_FF_post_overrd_01;/* '<S205>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_FF_post_overrd_02;/* '<S216>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_FF_post_overrd_03;/* '<S227>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_FF_post_overrd_04;/* '<S238>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_FF_post_overrd_05;/* '<S239>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_FF_post_overrd_06;/* '<S240>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_FF_post_overrd_07;/* '<S241>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_FF_post_overrd_08;/* '<S242>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_FF_post_overrd_09;/* '<S243>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_FF_post_overrd_10;/* '<S206>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_FF_post_overrd_11;/* '<S207>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_FF_post_overrd_12;/* '<S208>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_FF_post_overrd_13;/* '<S209>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_FF_post_overrd_14;/* '<S210>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_FF_post_overrd_15;/* '<S211>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_FF_post_overrd_16;/* '<S212>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_FF_post_overrd_17;/* '<S213>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_FF_post_overrd_18;/* '<S214>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_FF_post_overrd_19;/* '<S215>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_FF_post_overrd_20;/* '<S217>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_FF_post_overrd_21;/* '<S218>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_FF_post_overrd_22;/* '<S219>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_FF_post_overrd_23;/* '<S220>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_FF_post_overrd_24;/* '<S221>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_FF_post_overrd_25;/* '<S222>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_FF_post_overrd_26;/* '<S223>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_FF_post_overrd_27;/* '<S224>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_FF_post_overrd_28;/* '<S225>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_FF_post_overrd_29;/* '<S226>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_FF_post_overrd_30;/* '<S228>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_FF_post_overrd_31;/* '<S229>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_FF_post_overrd_32;/* '<S230>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_FF_post_overrd_33;/* '<S231>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_FF_post_overrd_34;/* '<S232>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_FF_post_overrd_35;/* '<S233>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_FF_post_overrd_36;/* '<S234>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_FF_post_overrd_37;/* '<S235>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_FF_post_overrd_38;/* '<S236>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_KeySts_INIT_PowerUp;
           /* '<S25>/When the car is in PowerUp = Init mode, the output is 1' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Surr_PowerUp;/* '<S9>/Logical Operator1' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_TargtStsPrepIFinput1;/* '<S24>/Logical Operator4' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_TargtStsPrepIFinput2;/* '<S24>/Logical Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_TargtStsPrepIFinput3;/* '<S24>/Relational Operator2' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_TargtStsPrepIFinput4;/* '<S24>/Logical Operator' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Variant_3_SABR_Actv;/* '<S437>/AND' */
static VAR(boolean, GRAR_VAR_INIT) VeGRAR_b_Varnt_SABR_SCDR_Actv;/* '<S438>/AND' */
static VAR(float32, GRAR_VAR_INIT) VeGRAR_i_MSSBEV_Action_Numerical;/* '<S9>/Switch2' */
static VAR(float32, GRAR_VAR_INIT) VeGRAR_i_MSSBEV_Action_numerical_mod;/* '<S24>/Merge1' */
static VAR(float32, GRAR_VAR_INIT) VeGRAR_i_PrirtyOfHighstPrActn;
                     /* '<S9>/Select_the_MSSBEV_Action_with_highest_priority' */
static VAR(float32, GRAR_VAR_INIT) VeGRAR_i_TargtStsPrepMergeOut;/* '<S24>/Merge' */
static VAR(float32, GRAR_VAR_INIT) VeGRAR_r_SingleInside3x6Test;/* '<S108>/EOM__34' */
static VAR(float32, GRAR_VAR_INIT) VeGRAR_r_SingleInside4x4Test;/* '<S108>/EOM__38' */
static VAR(float32, GRAR_VAR_INIT) VeGRAR_r_SingleInside7x3Test;/* '<S108>/EOM__30' */
static VAR(float32, GRAR_VAR_INIT) VeGRAR_r_Single_3x6_test;/* '<S9>/EOM__34' */
static VAR(float32, GRAR_VAR_INIT) VeGRAR_r_Single_4x4_test;/* '<S9>/EOM__38' */
static VAR(float32, GRAR_VAR_INIT) VeGRAR_r_Single_7x3_test;/* '<S9>/EOM__30' */
static VAR(float32, GRAR_VAR_INIT) VeGRAR_r_Single_Sum_test;/* '<S108>/Add12' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_GRAR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_GRAR
#include "MemMap.h"

CONST(ConstB_GRAR_ac_T, GRAR_VAR_INIT) GRAR_ac_ConstB =
{
    CeGRAR_e_Normal,                   /* '<S452>/Constant' */
    CeGRAR_e_TargetSts_Normal,         /* '<S450>/Constant' */
    CeGRAR_e_PP_Normal,                /* '<S448>/Constant' */
    CeGRAR_e_PRND_Normal,              /* '<S449>/Constant' */
    CeGRAR_e_NoLimitation              /* '<S451>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_GRAR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_GRAR
#include "MemMap.h"

VAR(B_GRAR_ac_T, GRAR_VAR_INIT) GRAR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_GRAR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_GRAR
#include "MemMap.h"

VAR(DW_GRAR_ac_T, GRAR_VAR_INIT) GRAR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_GRAR
#include "MemMap.h"

static FUNC(void, GRAR_CODE_LOCAL) GRAR_ac_If_Action_Subsystem(VAR(float32,
    AUTOMATIC) rtu_In1, P2VAR(float32, AUTOMATIC, GRAR_VAR_INIT) rty_Out1);
static FUNC(void, GRAR_CODE_LOCAL) GRAR_ac_If_Action_Subsystem1(VAR(float32,
    AUTOMATIC) rtu_MSSBEV_Action, P2VAR(float32, AUTOMATIC, GRAR_VAR_INIT)
    rty_Out1);
static FUNC(void, GRAR_CODE_LOCAL) GRAR_ac_No_Limitation(P2VAR
    (TeGRAR_e_MSSBEV_Action, AUTOMATIC, GRAR_VAR_INIT) rty_Out1);
static FUNC(void, GRAR_CODE_LOCAL) GRAR_ac_IfActionSubsystem2(VAR
    (TeGRAR_e_PRND_Req, AUTOMATIC) rtu_In1, P2VAR(TeGRAR_e_PRND_Req, AUTOMATIC,
    GRAR_VAR_INIT) rty_out);
static FUNC(void, GRAR_CODE_LOCAL) GRAR_ac_IfActionSubsystem2_d(VAR
    (TeGRAR_e_ParkPawlReq, AUTOMATIC) rtu_In1, P2VAR(TeGRAR_e_ParkPawlReq,
    AUTOMATIC, GRAR_VAR_INIT) rty_out);
static FUNC(void, GRAR_CODE_LOCAL) GRAR_ac_IfActionSubsystem2_l(VAR(float32,
    AUTOMATIC) rtu_In1, P2VAR(float32, AUTOMATIC, GRAR_VAR_INIT) rty_Out1);
static FUNC(void, GRAR_CODE_LOCAL) GRAR_ac_IfActionSubsystem1(P2VAR(float32,
    AUTOMATIC, GRAR_VAR_INIT) rty_RIP_ratio, P2VAR(boolean, AUTOMATIC,
    GRAR_VAR_INIT) rty_Request_Zero_Torque);
static FUNC(void, GRAR_CODE_LOCAL) GRAR_ac_IfActionSubsystem4(P2VAR(float32,
    AUTOMATIC, GRAR_VAR_INIT) rty_RIP_ratio, P2VAR(boolean, AUTOMATIC,
    GRAR_VAR_INIT) rty_Request_Zero_Torque);
static FUNC(void, GRAR_CODE_LOCAL) GRAR_ac_IfActionSubsystem5(VAR(float32,
    AUTOMATIC) rtu_RIP_inbetween_value, P2VAR(float32, AUTOMATIC, GRAR_VAR_INIT)
    rty_RIP_ratio, P2VAR(boolean, AUTOMATIC, GRAR_VAR_INIT)
    rty_Request_Zero_Torque);
static FUNC(void, GRAR_CODE_LOCAL) GRAR_ac_IfActionSubsystem1_p(VAR(float32,
    AUTOMATIC) rtu_In1, P2VAR(float32, AUTOMATIC, GRAR_VAR_INIT)
    rty_Add_to_Numerator, P2VAR(float32, AUTOMATIC, GRAR_VAR_INIT)
    rty_Add_to_Denominator);
static FUNC(void, GRAR_CODE_LOCAL) GRAR_ac_IfActionSubsystem2_g(P2VAR(float32,
    AUTOMATIC, GRAR_VAR_INIT) rty_Add_to_Numerator, P2VAR(float32, AUTOMATIC,
    GRAR_VAR_INIT) rty_Add_to_Denominator);
static FUNC(void, GRAR_CODE_LOCAL) GRAR_ac_PoffRegen_TargetSts_Dminus(P2VAR
    (TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_Out2);
static FUNC(void, GRAR_CODE_LOCAL) GRAR_ac_Disable_(P2VAR(TeGRAR_e_TargetSts,
    AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_eTCS_TargetSts, P2VAR
    (TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_eDTC_TargetSts,
    P2VAR(TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT)
    rty_MSSBEV_Regen_TargetSts, P2VAR(TeGRAR_e_TargetSts, AUTOMATIC,
    GRAR_VAR_INIT) rty_MSSBEV_eLNC_TargetSts, P2VAR(TeGRAR_e_TargetSts,
    AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_bTV_TargetSts, P2VAR(TeGRAR_e_TargetSts,
    AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_bTCS_TargetSts, P2VAR
    (TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_DRV_PoffRegen,
    P2VAR(TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_RWS_TargetSts,
    P2VAR(TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEVeAWD_TgtSts,
    P2VAR(TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_eAWD_TgtSts,
    P2VAR(TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_eLSD_TgtSts);
static FUNC(void, GRAR_CODE_LOCAL) GRAR_ac_Normal_func_(P2VAR(TeGRAR_e_TargetSts,
    AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_eTCS_TargetSts, P2VAR
    (TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_eDTC_TargetSts,
    P2VAR(TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT)
    rty_MSSBEV_Regen_TargetSts, P2VAR(TeGRAR_e_TargetSts, AUTOMATIC,
    GRAR_VAR_INIT) rty_MSSBEV_eLNC_TargetSts, P2VAR(TeGRAR_e_TargetSts,
    AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_bTV_TargetSts, P2VAR(TeGRAR_e_TargetSts,
    AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_bTCS_TargetSts, P2VAR
    (TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_DRV_PoffRegen,
    P2VAR(TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_RWS_TargetSts,
    P2VAR(TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEVeAWD_TgtSts,
    P2VAR(TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_eAWD_TgtSts,
    P2VAR(TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_eLSD_TgtSts);
static FUNC(void, GRAR_CODE_LOCAL) GRAR_ac_DiagOff_(P2VAR(TeGRAR_e_TargetSts,
    AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_eTCS_TargetSts, P2VAR
    (TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_eDTC_TargetSts,
    P2VAR(TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT)
    rty_MSSBEV_Regen_TargetSts, P2VAR(TeGRAR_e_TargetSts, AUTOMATIC,
    GRAR_VAR_INIT) rty_MSSBEV_eLNC_TargetSts, P2VAR(TeGRAR_e_TargetSts,
    AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_bTV_TargetSts, P2VAR(TeGRAR_e_TargetSts,
    AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_bTCS_TargetSts, P2VAR
    (TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_DRV_PoffRegen,
    P2VAR(TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_RWS_TargetSts,
    P2VAR(TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEVeAWD_TgtSts,
    P2VAR(TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_eAWD_TgtSts,
    P2VAR(TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_eLSD_TgtSts);
static FUNC(void, GRAR_CODE_LOCAL) GRAR_ac_IfActionSubsystem(P2VAR
    (TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_Out1);
static FUNC(void, GRAR_CODE_LOCAL) GRAR_ac_IfActionSubsystem1_n(VAR
    (TeGRAR_e_TargetSts, AUTOMATIC) rtu_In1, P2VAR(TeGRAR_e_TargetSts, AUTOMATIC,
    GRAR_VAR_INIT) rty_Out1);
static FUNC(void, GRAR_CODE_LOCAL) GRAR_ac_Monitoring_func_2_(VAR
    (TeGRAR_e_TargetSts, AUTOMATIC) rtu_MSSBEV_eTCS_TargetSts_previous, VAR
    (TeGRAR_e_TargetSts, AUTOMATIC) rtu_MSSBEV_eDTC_TargetSts_previous, VAR
    (TeGRAR_e_TargetSts, AUTOMATIC) rtu_MSSBEV_Regen_TargetSts_previous, VAR
    (TeGRAR_e_TargetSts, AUTOMATIC) rtu_MSSBEV_eLNC_TargetSts_previous, VAR
    (TeGRAR_e_TargetSts, AUTOMATIC) rtu_MSSBEV_bTV_TargetSts_previous, VAR
    (TeGRAR_e_TargetSts, AUTOMATIC) rtu_MSSBEV_bTCS_TargetSts_previous, VAR
    (TeGRAR_e_TargetSts, AUTOMATIC) rtu_MSSBEV_DRV_PoffRegenTtStsPrev, VAR
    (TeGRAR_e_TargetSts, AUTOMATIC) rtu_MSSBEV_RWS_TargetSts_previous, VAR
    (TeGRAR_e_TargetSts, AUTOMATIC) rtu_MSSBEVeAWD_TgtSts_previous, VAR
    (TeGRAR_e_TargetSts, AUTOMATIC) rtu_VeGRAC_e_MSSBEVWED_TS_Prev, VAR
    (TeGRAR_e_TargetSts, AUTOMATIC) rtu_VeGRAC_e_MSSBEVeLSD_TS_Prev, P2VAR
    (TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_eTCS_TargetSts_out,
    P2VAR(TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT)
    rty_MSSBEV_eDTC_TargetSts_out, P2VAR(TeGRAR_e_TargetSts, AUTOMATIC,
    GRAR_VAR_INIT) rty_MSSBEV_Regen_TargetSts_out, P2VAR(TeGRAR_e_TargetSts,
    AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_eLNC_TargetSts_out, P2VAR
    (TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_bTV_TargetSts_out,
    P2VAR(TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT)
    rty_MSSBEV_bTCS_TargetSts_out, P2VAR(TeGRAR_e_TargetSts, AUTOMATIC,
    GRAR_VAR_INIT) rty_MSSBEV_DRV_PoffRegen_out, P2VAR(TeGRAR_e_TargetSts,
    AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_RWS_TargetSts_out, P2VAR
    (TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEVeAWD_TgtSts_out,
    P2VAR(TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT)
    rty_MSSBEV_eAWD_TgtSts_out, P2VAR(TeGRAR_e_TargetSts, AUTOMATIC,
    GRAR_VAR_INIT) rty_MSSBEV_eLSD_TgtSts_out);
static FUNC(void, GRAR_CODE_LOCAL) GRAR_ac_IfActionSubsystem3(VAR
    (TeGRAR_e_TotMtrTrqRmdlActn, AUTOMATIC) rtu_In1, P2VAR
    (TeGRAR_e_TotMtrTrqRmdlActn, AUTOMATIC, GRAR_VAR_INIT) rty_out);

/*
 * Output and update for action system:
 *    '<S9>/If_Action_Subsystem'
 *    '<S9>/If_Action_Subsystem2'
 */
static FUNC(void, GRAR_CODE_LOCAL) GRAR_ac_If_Action_Subsystem(VAR(float32,
    AUTOMATIC) rtu_In1, P2VAR(float32, AUTOMATIC, GRAR_VAR_INIT) rty_Out1)
{
    /* Gain: '<S17>/Gain' */
    *rty_Out1 = rtu_In1;
}

/*
 * Output and update for action system:
 *    '<S9>/If_Action_Subsystem1'
 *    '<S9>/If_Action_Subsystem3'
 */
static FUNC(void, GRAR_CODE_LOCAL) GRAR_ac_If_Action_Subsystem1(VAR(float32,
    AUTOMATIC) rtu_MSSBEV_Action, P2VAR(float32, AUTOMATIC, GRAR_VAR_INIT)
    rty_Out1)
{
    /* Gain: '<S18>/Gain' */
    *rty_Out1 = rtu_MSSBEV_Action;
}

/*
 * Output and update for action system:
 *    '<S21>/No_Limitation'
 *    '<S21>/Catch-all_case__No_Limitation'
 */
static FUNC(void, GRAR_CODE_LOCAL) GRAR_ac_No_Limitation(P2VAR
    (TeGRAR_e_MSSBEV_Action, AUTOMATIC, GRAR_VAR_INIT) rty_Out1)
{
    /* SignalConversion generated from: '<S128>/Out1' incorporates:
     *  Constant: '<S155>/Constant'
     */
    *rty_Out1 = CeGRAR_e_NoLimitation;
}

/*
 * Output and update for action system:
 *    '<S22>/If Action Subsystem2'
 *    '<S22>/If Action Subsystem4'
 */
static FUNC(void, GRAR_CODE_LOCAL) GRAR_ac_IfActionSubsystem2(VAR
    (TeGRAR_e_PRND_Req, AUTOMATIC) rtu_In1, P2VAR(TeGRAR_e_PRND_Req, AUTOMATIC,
    GRAR_VAR_INIT) rty_out)
{
    /* DataTypeConversion: '<S169>/DataTypeConversion' */
    *rty_out = rtu_In1;
}

/*
 * Output and update for action system:
 *    '<S23>/If Action Subsystem2'
 *    '<S23>/If Action Subsystem4'
 */
static FUNC(void, GRAR_CODE_LOCAL) GRAR_ac_IfActionSubsystem2_d(VAR
    (TeGRAR_e_ParkPawlReq, AUTOMATIC) rtu_In1, P2VAR(TeGRAR_e_ParkPawlReq,
    AUTOMATIC, GRAR_VAR_INIT) rty_out)
{
    /* DataTypeConversion: '<S175>/DataTypeConversion' */
    *rty_out = rtu_In1;
}

/*
 * Output and update for action system:
 *    '<S24>/If Action Subsystem2'
 *    '<S24>/If Action Subsystem1'
 *    '<S24>/If Action Subsystem3'
 *    '<S24>/If Action Subsystem'
 *    '<S24>/If Action Subsystem5'
 */
static FUNC(void, GRAR_CODE_LOCAL) GRAR_ac_IfActionSubsystem2_l(VAR(float32,
    AUTOMATIC) rtu_In1, P2VAR(float32, AUTOMATIC, GRAR_VAR_INIT) rty_Out1)
{
    /* Inport: '<S179>/In1' */
    *rty_Out1 = rtu_In1;
}

/*
 * Output and update for action system:
 *    '<S26>/If Action Subsystem1'
 *    '<S26>/If Action Subsystem6'
 */
static FUNC(void, GRAR_CODE_LOCAL) GRAR_ac_IfActionSubsystem1(P2VAR(float32,
    AUTOMATIC, GRAR_VAR_INIT) rty_RIP_ratio, P2VAR(boolean, AUTOMATIC,
    GRAR_VAR_INIT) rty_Request_Zero_Torque)
{
    /* SignalConversion generated from: '<S322>/RIP_ratio' incorporates:
     *  Constant: '<S322>/ 49'
     */
    *rty_RIP_ratio = 0.0F;

    /* SignalConversion generated from: '<S322>/Request_Zero_Torque' incorporates:
     *  Constant: '<S322>/ 51'
     */
    *rty_Request_Zero_Torque = false;
}

/*
 * Output and update for action system:
 *    '<S26>/If Action Subsystem4'
 *    '<S26>/If Action Subsystem7'
 */
static FUNC(void, GRAR_CODE_LOCAL) GRAR_ac_IfActionSubsystem4(P2VAR(float32,
    AUTOMATIC, GRAR_VAR_INIT) rty_RIP_ratio, P2VAR(boolean, AUTOMATIC,
    GRAR_VAR_INIT) rty_Request_Zero_Torque)
{
    /* SignalConversion generated from: '<S325>/RIP_ratio' incorporates:
     *  Constant: '<S325>/ 48'
     */
    *rty_RIP_ratio = 1.0F;

    /* SignalConversion generated from: '<S325>/Request_Zero_Torque' incorporates:
     *  Constant: '<S325>/ 51'
     */
    *rty_Request_Zero_Torque = false;
}

/*
 * Output and update for action system:
 *    '<S26>/If Action Subsystem5'
 *    '<S26>/If Action Subsystem8'
 */
static FUNC(void, GRAR_CODE_LOCAL) GRAR_ac_IfActionSubsystem5(VAR(float32,
    AUTOMATIC) rtu_RIP_inbetween_value, P2VAR(float32, AUTOMATIC, GRAR_VAR_INIT)
    rty_RIP_ratio, P2VAR(boolean, AUTOMATIC, GRAR_VAR_INIT)
    rty_Request_Zero_Torque)
{
    /* Inport: '<S326>/RIP_inbetween_value' */
    *rty_RIP_ratio = rtu_RIP_inbetween_value;

    /* SignalConversion generated from: '<S326>/Request_Zero_Torque' incorporates:
     *  Constant: '<S326>/ 52'
     */
    *rty_Request_Zero_Torque = true;
}

/*
 * Output and update for action system:
 *    '<S331>/If Action Subsystem1'
 *    '<S331>/If Action Subsystem3'
 *    '<S331>/If Action Subsystem5'
 */
static FUNC(void, GRAR_CODE_LOCAL) GRAR_ac_IfActionSubsystem1_p(VAR(float32,
    AUTOMATIC) rtu_In1, P2VAR(float32, AUTOMATIC, GRAR_VAR_INIT)
    rty_Add_to_Numerator, P2VAR(float32, AUTOMATIC, GRAR_VAR_INIT)
    rty_Add_to_Denominator)
{
    /* Inport: '<S332>/In1' */
    *rty_Add_to_Numerator = rtu_In1;

    /* SignalConversion generated from: '<S332>/Add_to_Denominator' incorporates:
     *  Constant: '<S332>/KeyOff_TRQ_Limitation'
     */
    *rty_Add_to_Denominator = 1.0F;
}

/*
 * Output and update for action system:
 *    '<S331>/If Action Subsystem2'
 *    '<S331>/If Action Subsystem4'
 *    '<S331>/If Action Subsystem6'
 */
static FUNC(void, GRAR_CODE_LOCAL) GRAR_ac_IfActionSubsystem2_g(P2VAR(float32,
    AUTOMATIC, GRAR_VAR_INIT) rty_Add_to_Numerator, P2VAR(float32, AUTOMATIC,
    GRAR_VAR_INIT) rty_Add_to_Denominator)
{
    /* SignalConversion generated from: '<S333>/Add_to_Denominator' incorporates:
     *  Constant: '<S333>/KeyOff_TRQ_Limitation'
     */
    *rty_Add_to_Denominator = 0.0F;

    /* SignalConversion generated from: '<S333>/Add_to_Numerator' incorporates:
     *  Constant: '<S333>/KeyOff_TRQ_Limitation'
     */
    *rty_Add_to_Numerator = 0.0F;
}

/* Output and update for function-call system: '<S27>/PoffRegen_TargetSts_Dminus' */
static FUNC(void, GRAR_CODE_LOCAL) GRAR_ac_PoffRegen_TargetSts_Dminus(P2VAR
    (TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_Out2)
{
    /* SignalConversion generated from: '<S350>/Out2' incorporates:
     *  Constant: '<S389>/Constant'
     */
    *rty_Out2 = CeGRAR_e_TargetSts_Dminus;
}

/* Output and update for function-call system: '<S27>/Disable_' */
static FUNC(void, GRAR_CODE_LOCAL) GRAR_ac_Disable_(P2VAR(TeGRAR_e_TargetSts,
    AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_eTCS_TargetSts, P2VAR
    (TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_eDTC_TargetSts,
    P2VAR(TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT)
    rty_MSSBEV_Regen_TargetSts, P2VAR(TeGRAR_e_TargetSts, AUTOMATIC,
    GRAR_VAR_INIT) rty_MSSBEV_eLNC_TargetSts, P2VAR(TeGRAR_e_TargetSts,
    AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_bTV_TargetSts, P2VAR(TeGRAR_e_TargetSts,
    AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_bTCS_TargetSts, P2VAR
    (TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_DRV_PoffRegen,
    P2VAR(TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_RWS_TargetSts,
    P2VAR(TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEVeAWD_TgtSts,
    P2VAR(TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_eAWD_TgtSts,
    P2VAR(TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_eLSD_TgtSts)
{
    /* SignalConversion generated from: '<S346>/MSSBEV_DRV_PoffRegen' incorporates:
     *  Constant: '<S352>/Constant'
     */
    *rty_MSSBEV_DRV_PoffRegen = CeGRAR_e_TargetSts_Disable;

    /* SignalConversion generated from: '<S346>/MSSBEV_RWS_TargetSts' incorporates:
     *  Constant: '<S352>/Constant'
     */
    *rty_MSSBEV_RWS_TargetSts = CeGRAR_e_TargetSts_Disable;

    /* SignalConversion generated from: '<S346>/MSSBEV_Regen_TargetSts' incorporates:
     *  Constant: '<S352>/Constant'
     */
    *rty_MSSBEV_Regen_TargetSts = CeGRAR_e_TargetSts_Disable;

    /* SignalConversion generated from: '<S346>/MSSBEV_bTCS_TargetSts' incorporates:
     *  Constant: '<S352>/Constant'
     */
    *rty_MSSBEV_bTCS_TargetSts = CeGRAR_e_TargetSts_Disable;

    /* SignalConversion generated from: '<S346>/MSSBEV_bTV_TargetSts' incorporates:
     *  Constant: '<S352>/Constant'
     */
    *rty_MSSBEV_bTV_TargetSts = CeGRAR_e_TargetSts_Disable;

    /* SignalConversion generated from: '<S346>/MSSBEV_eAWD_TgtSts' incorporates:
     *  Constant: '<S352>/Constant'
     */
    *rty_MSSBEV_eAWD_TgtSts = CeGRAR_e_TargetSts_Disable;

    /* SignalConversion generated from: '<S346>/MSSBEV_eDTC_TargetSts' incorporates:
     *  Constant: '<S352>/Constant'
     */
    *rty_MSSBEV_eDTC_TargetSts = CeGRAR_e_TargetSts_Disable;

    /* SignalConversion generated from: '<S346>/MSSBEV_eLNC_TargetSts' incorporates:
     *  Constant: '<S352>/Constant'
     */
    *rty_MSSBEV_eLNC_TargetSts = CeGRAR_e_TargetSts_Disable;

    /* SignalConversion generated from: '<S346>/MSSBEV_eLSD_TgtSts' incorporates:
     *  Constant: '<S352>/Constant'
     */
    *rty_MSSBEV_eLSD_TgtSts = CeGRAR_e_TargetSts_Disable;

    /* SignalConversion generated from: '<S346>/MSSBEV_eTCS_TargetSts' incorporates:
     *  Constant: '<S352>/Constant'
     */
    *rty_MSSBEV_eTCS_TargetSts = CeGRAR_e_TargetSts_Disable;

    /* SignalConversion generated from: '<S346>/MSSBEVeAWD_TgtSts ' incorporates:
     *  Constant: '<S352>/Constant'
     */
    *rty_MSSBEVeAWD_TgtSts = CeGRAR_e_TargetSts_Disable;
}

/* Output and update for function-call system: '<S27>/Normal_func_' */
static FUNC(void, GRAR_CODE_LOCAL) GRAR_ac_Normal_func_(P2VAR(TeGRAR_e_TargetSts,
    AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_eTCS_TargetSts, P2VAR
    (TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_eDTC_TargetSts,
    P2VAR(TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT)
    rty_MSSBEV_Regen_TargetSts, P2VAR(TeGRAR_e_TargetSts, AUTOMATIC,
    GRAR_VAR_INIT) rty_MSSBEV_eLNC_TargetSts, P2VAR(TeGRAR_e_TargetSts,
    AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_bTV_TargetSts, P2VAR(TeGRAR_e_TargetSts,
    AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_bTCS_TargetSts, P2VAR
    (TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_DRV_PoffRegen,
    P2VAR(TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_RWS_TargetSts,
    P2VAR(TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEVeAWD_TgtSts,
    P2VAR(TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_eAWD_TgtSts,
    P2VAR(TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_eLSD_TgtSts)
{
    /* SignalConversion generated from: '<S348>/MSSBEV_DRV_PoffRegen' incorporates:
     *  Constant: '<S387>/Constant'
     */
    *rty_MSSBEV_DRV_PoffRegen = CeGRAR_e_TargetSts_Normal;

    /* SignalConversion generated from: '<S348>/MSSBEV_RWS_TargetSts' incorporates:
     *  Constant: '<S387>/Constant'
     */
    *rty_MSSBEV_RWS_TargetSts = CeGRAR_e_TargetSts_Normal;

    /* SignalConversion generated from: '<S348>/MSSBEV_Regen_TargetSts' incorporates:
     *  Constant: '<S387>/Constant'
     */
    *rty_MSSBEV_Regen_TargetSts = CeGRAR_e_TargetSts_Normal;

    /* SignalConversion generated from: '<S348>/MSSBEV_bTCS_TargetSts' incorporates:
     *  Constant: '<S387>/Constant'
     */
    *rty_MSSBEV_bTCS_TargetSts = CeGRAR_e_TargetSts_Normal;

    /* SignalConversion generated from: '<S348>/MSSBEV_bTV_TargetSts' incorporates:
     *  Constant: '<S387>/Constant'
     */
    *rty_MSSBEV_bTV_TargetSts = CeGRAR_e_TargetSts_Normal;

    /* SignalConversion generated from: '<S348>/MSSBEV_eAWD_TgtSts' incorporates:
     *  Constant: '<S387>/Constant'
     */
    *rty_MSSBEV_eAWD_TgtSts = CeGRAR_e_TargetSts_Normal;

    /* SignalConversion generated from: '<S348>/MSSBEV_eDTC_TargetSts' incorporates:
     *  Constant: '<S387>/Constant'
     */
    *rty_MSSBEV_eDTC_TargetSts = CeGRAR_e_TargetSts_Normal;

    /* SignalConversion generated from: '<S348>/MSSBEV_eLNC_TargetSts' incorporates:
     *  Constant: '<S387>/Constant'
     */
    *rty_MSSBEV_eLNC_TargetSts = CeGRAR_e_TargetSts_Normal;

    /* SignalConversion generated from: '<S348>/MSSBEV_eLSD_TgtSts' incorporates:
     *  Constant: '<S387>/Constant'
     */
    *rty_MSSBEV_eLSD_TgtSts = CeGRAR_e_TargetSts_Normal;

    /* SignalConversion generated from: '<S348>/MSSBEV_eTCS_TargetSts' incorporates:
     *  Constant: '<S387>/Constant'
     */
    *rty_MSSBEV_eTCS_TargetSts = CeGRAR_e_TargetSts_Normal;

    /* SignalConversion generated from: '<S348>/MSSBEVeAWD_TgtSts ' incorporates:
     *  Constant: '<S387>/Constant'
     */
    *rty_MSSBEVeAWD_TgtSts = CeGRAR_e_TargetSts_Normal;
}

/* Output and update for function-call system: '<S27>/DiagOff_' */
static FUNC(void, GRAR_CODE_LOCAL) GRAR_ac_DiagOff_(P2VAR(TeGRAR_e_TargetSts,
    AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_eTCS_TargetSts, P2VAR
    (TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_eDTC_TargetSts,
    P2VAR(TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT)
    rty_MSSBEV_Regen_TargetSts, P2VAR(TeGRAR_e_TargetSts, AUTOMATIC,
    GRAR_VAR_INIT) rty_MSSBEV_eLNC_TargetSts, P2VAR(TeGRAR_e_TargetSts,
    AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_bTV_TargetSts, P2VAR(TeGRAR_e_TargetSts,
    AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_bTCS_TargetSts, P2VAR
    (TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_DRV_PoffRegen,
    P2VAR(TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_RWS_TargetSts,
    P2VAR(TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEVeAWD_TgtSts,
    P2VAR(TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_eAWD_TgtSts,
    P2VAR(TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_eLSD_TgtSts)
{
    /* SignalConversion generated from: '<S345>/MSSBEV_DRV_PoffRegen' incorporates:
     *  Constant: '<S351>/Constant'
     */
    *rty_MSSBEV_DRV_PoffRegen = CeGRAR_e_TargetSts_DiagOff;

    /* SignalConversion generated from: '<S345>/MSSBEV_RWS_TargetSts' incorporates:
     *  Constant: '<S351>/Constant'
     */
    *rty_MSSBEV_RWS_TargetSts = CeGRAR_e_TargetSts_DiagOff;

    /* SignalConversion generated from: '<S345>/MSSBEV_Regen_TargetSts' incorporates:
     *  Constant: '<S351>/Constant'
     */
    *rty_MSSBEV_Regen_TargetSts = CeGRAR_e_TargetSts_DiagOff;

    /* SignalConversion generated from: '<S345>/MSSBEV_bTCS_TargetSts' incorporates:
     *  Constant: '<S351>/Constant'
     */
    *rty_MSSBEV_bTCS_TargetSts = CeGRAR_e_TargetSts_DiagOff;

    /* SignalConversion generated from: '<S345>/MSSBEV_bTV_TargetSts' incorporates:
     *  Constant: '<S351>/Constant'
     */
    *rty_MSSBEV_bTV_TargetSts = CeGRAR_e_TargetSts_DiagOff;

    /* SignalConversion generated from: '<S345>/MSSBEV_eAWD_TgtSts' incorporates:
     *  Constant: '<S351>/Constant'
     */
    *rty_MSSBEV_eAWD_TgtSts = CeGRAR_e_TargetSts_DiagOff;

    /* SignalConversion generated from: '<S345>/MSSBEV_eDTC_TargetSts' incorporates:
     *  Constant: '<S351>/Constant'
     */
    *rty_MSSBEV_eDTC_TargetSts = CeGRAR_e_TargetSts_DiagOff;

    /* SignalConversion generated from: '<S345>/MSSBEV_eLNC_TargetSts' incorporates:
     *  Constant: '<S351>/Constant'
     */
    *rty_MSSBEV_eLNC_TargetSts = CeGRAR_e_TargetSts_DiagOff;

    /* SignalConversion generated from: '<S345>/MSSBEV_eLSD_TgtSts' incorporates:
     *  Constant: '<S351>/Constant'
     */
    *rty_MSSBEV_eLSD_TgtSts = CeGRAR_e_TargetSts_DiagOff;

    /* SignalConversion generated from: '<S345>/MSSBEV_eTCS_TargetSts' incorporates:
     *  Constant: '<S351>/Constant'
     */
    *rty_MSSBEV_eTCS_TargetSts = CeGRAR_e_TargetSts_DiagOff;

    /* SignalConversion generated from: '<S345>/MSSBEVeAWD_TgtSts ' incorporates:
     *  Constant: '<S351>/Constant'
     */
    *rty_MSSBEVeAWD_TgtSts = CeGRAR_e_TargetSts_DiagOff;
}

/*
 * Output and update for action system:
 *    '<S347>/If Action Subsystem'
 *    '<S347>/If Action Subsystem2'
 *    '<S347>/If Action Subsystem20'
 *    '<S347>/If Action Subsystem4'
 *    '<S347>/If Action Subsystem6'
 *    '<S347>/If Action Subsystem8'
 *    '<S347>/If Action Subsystem12'
 *    '<S347>/If Action Subsystem14'
 *    '<S347>/If Action Subsystem16'
 *    '<S347>/If Action Subsystem18'
 */
static FUNC(void, GRAR_CODE_LOCAL) GRAR_ac_IfActionSubsystem(P2VAR
    (TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_Out1)
{
    /* SignalConversion generated from: '<S354>/Out1' incorporates:
     *  Constant: '<S376>/Constant'
     */
    *rty_Out1 = CeGRAR_e_TargetSts_On_MonitorOff;
}

/*
 * Output and update for action system:
 *    '<S347>/If Action Subsystem1'
 *    '<S347>/If Action Subsystem3'
 *    '<S347>/If Action Subsystem21'
 *    '<S347>/If Action Subsystem5'
 *    '<S347>/If Action Subsystem7'
 *    '<S347>/If Action Subsystem9'
 *    '<S347>/If Action Subsystem11'
 *    '<S347>/If Action Subsystem13'
 *    '<S347>/If Action Subsystem15'
 *    '<S347>/If Action Subsystem17'
 *    '<S347>/If Action Subsystem19'
 */
static FUNC(void, GRAR_CODE_LOCAL) GRAR_ac_IfActionSubsystem1_n(VAR
    (TeGRAR_e_TargetSts, AUTOMATIC) rtu_In1, P2VAR(TeGRAR_e_TargetSts, AUTOMATIC,
    GRAR_VAR_INIT) rty_Out1)
{
    /* Inport: '<S355>/In1' */
    *rty_Out1 = rtu_In1;
}

/* Output and update for function-call system: '<S27>/Monitoring_func_2_' */
static FUNC(void, GRAR_CODE_LOCAL) GRAR_ac_Monitoring_func_2_(VAR
    (TeGRAR_e_TargetSts, AUTOMATIC) rtu_MSSBEV_eTCS_TargetSts_previous, VAR
    (TeGRAR_e_TargetSts, AUTOMATIC) rtu_MSSBEV_eDTC_TargetSts_previous, VAR
    (TeGRAR_e_TargetSts, AUTOMATIC) rtu_MSSBEV_Regen_TargetSts_previous, VAR
    (TeGRAR_e_TargetSts, AUTOMATIC) rtu_MSSBEV_eLNC_TargetSts_previous, VAR
    (TeGRAR_e_TargetSts, AUTOMATIC) rtu_MSSBEV_bTV_TargetSts_previous, VAR
    (TeGRAR_e_TargetSts, AUTOMATIC) rtu_MSSBEV_bTCS_TargetSts_previous, VAR
    (TeGRAR_e_TargetSts, AUTOMATIC) rtu_MSSBEV_DRV_PoffRegenTtStsPrev, VAR
    (TeGRAR_e_TargetSts, AUTOMATIC) rtu_MSSBEV_RWS_TargetSts_previous, VAR
    (TeGRAR_e_TargetSts, AUTOMATIC) rtu_MSSBEVeAWD_TgtSts_previous, VAR
    (TeGRAR_e_TargetSts, AUTOMATIC) rtu_VeGRAC_e_MSSBEVWED_TS_Prev, VAR
    (TeGRAR_e_TargetSts, AUTOMATIC) rtu_VeGRAC_e_MSSBEVeLSD_TS_Prev, P2VAR
    (TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_eTCS_TargetSts_out,
    P2VAR(TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT)
    rty_MSSBEV_eDTC_TargetSts_out, P2VAR(TeGRAR_e_TargetSts, AUTOMATIC,
    GRAR_VAR_INIT) rty_MSSBEV_Regen_TargetSts_out, P2VAR(TeGRAR_e_TargetSts,
    AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_eLNC_TargetSts_out, P2VAR
    (TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_bTV_TargetSts_out,
    P2VAR(TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT)
    rty_MSSBEV_bTCS_TargetSts_out, P2VAR(TeGRAR_e_TargetSts, AUTOMATIC,
    GRAR_VAR_INIT) rty_MSSBEV_DRV_PoffRegen_out, P2VAR(TeGRAR_e_TargetSts,
    AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEV_RWS_TargetSts_out, P2VAR
    (TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT) rty_MSSBEVeAWD_TgtSts_out,
    P2VAR(TeGRAR_e_TargetSts, AUTOMATIC, GRAR_VAR_INIT)
    rty_MSSBEV_eAWD_TgtSts_out, P2VAR(TeGRAR_e_TargetSts, AUTOMATIC,
    GRAR_VAR_INIT) rty_MSSBEV_eLSD_TgtSts_out)
{
    /* If: '<S347>/If' incorporates:
     *  Constant: '<S353>/Constant'
     *  RelationalOperator: '<S347>/Relational Operator'
     */
    if (CeGRAR_e_TargetSts_Normal == ((uint32)rtu_MSSBEV_eTCS_TargetSts_previous))
    {
        /* Outputs for IfAction SubSystem: '<S347>/If Action Subsystem' incorporates:
         *  ActionPort: '<S354>/Action Port'
         */
        GRAR_ac_IfActionSubsystem(rty_MSSBEV_eTCS_TargetSts_out);

        /* End of Outputs for SubSystem: '<S347>/If Action Subsystem' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S347>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S355>/Action Port'
         */
        GRAR_ac_IfActionSubsystem1_n(rtu_MSSBEV_eTCS_TargetSts_previous,
            rty_MSSBEV_eTCS_TargetSts_out);

        /* End of Outputs for SubSystem: '<S347>/If Action Subsystem1' */
    }

    /* End of If: '<S347>/If' */

    /* If: '<S347>/If5' incorporates:
     *  Constant: '<S353>/Constant'
     *  RelationalOperator: '<S347>/Relational Operator5'
     */
    if (CeGRAR_e_TargetSts_Normal == ((uint32)rtu_MSSBEV_bTCS_TargetSts_previous))
    {
        /* Outputs for IfAction SubSystem: '<S347>/If Action Subsystem10' incorporates:
         *  ActionPort: '<S356>/Action Port'
         */
        /* SignalConversion generated from: '<S356>/Out1' incorporates:
         *  Constant: '<S377>/Constant'
         */
        *rty_MSSBEV_bTCS_TargetSts_out = CeGRAR_e_TargetSts_On_MonitorOff;

        /* End of Outputs for SubSystem: '<S347>/If Action Subsystem10' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S347>/If Action Subsystem11' incorporates:
         *  ActionPort: '<S357>/Action Port'
         */
        GRAR_ac_IfActionSubsystem1_n(rtu_MSSBEV_bTCS_TargetSts_previous,
            rty_MSSBEV_bTCS_TargetSts_out);

        /* End of Outputs for SubSystem: '<S347>/If Action Subsystem11' */
    }

    /* End of If: '<S347>/If5' */

    /* If: '<S347>/If6' incorporates:
     *  Constant: '<S353>/Constant'
     *  RelationalOperator: '<S347>/Relational Operator6'
     */
    if (CeGRAR_e_TargetSts_Normal == ((uint32)rtu_MSSBEV_DRV_PoffRegenTtStsPrev))
    {
        /* Outputs for IfAction SubSystem: '<S347>/If Action Subsystem12' incorporates:
         *  ActionPort: '<S358>/Action Port'
         */
        GRAR_ac_IfActionSubsystem(rty_MSSBEV_DRV_PoffRegen_out);

        /* End of Outputs for SubSystem: '<S347>/If Action Subsystem12' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S347>/If Action Subsystem13' incorporates:
         *  ActionPort: '<S359>/Action Port'
         */
        GRAR_ac_IfActionSubsystem1_n(rtu_MSSBEV_DRV_PoffRegenTtStsPrev,
            rty_MSSBEV_DRV_PoffRegen_out);

        /* End of Outputs for SubSystem: '<S347>/If Action Subsystem13' */
    }

    /* End of If: '<S347>/If6' */

    /* If: '<S347>/If7' incorporates:
     *  Constant: '<S353>/Constant'
     *  RelationalOperator: '<S347>/Relational Operator7'
     */
    if (CeGRAR_e_TargetSts_Normal == ((uint32)rtu_MSSBEV_RWS_TargetSts_previous))
    {
        /* Outputs for IfAction SubSystem: '<S347>/If Action Subsystem14' incorporates:
         *  ActionPort: '<S360>/Action Port'
         */
        GRAR_ac_IfActionSubsystem(rty_MSSBEV_RWS_TargetSts_out);

        /* End of Outputs for SubSystem: '<S347>/If Action Subsystem14' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S347>/If Action Subsystem15' incorporates:
         *  ActionPort: '<S361>/Action Port'
         */
        GRAR_ac_IfActionSubsystem1_n(rtu_MSSBEV_RWS_TargetSts_previous,
            rty_MSSBEV_RWS_TargetSts_out);

        /* End of Outputs for SubSystem: '<S347>/If Action Subsystem15' */
    }

    /* End of If: '<S347>/If7' */

    /* If: '<S347>/If8' incorporates:
     *  Constant: '<S353>/Constant'
     *  RelationalOperator: '<S347>/Relational Operator8'
     */
    if (CeGRAR_e_TargetSts_Normal == ((uint32)rtu_MSSBEVeAWD_TgtSts_previous))
    {
        /* Outputs for IfAction SubSystem: '<S347>/If Action Subsystem16' incorporates:
         *  ActionPort: '<S362>/Action Port'
         */
        GRAR_ac_IfActionSubsystem(rty_MSSBEVeAWD_TgtSts_out);

        /* End of Outputs for SubSystem: '<S347>/If Action Subsystem16' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S347>/If Action Subsystem17' incorporates:
         *  ActionPort: '<S363>/Action Port'
         */
        GRAR_ac_IfActionSubsystem1_n(rtu_MSSBEVeAWD_TgtSts_previous,
            rty_MSSBEVeAWD_TgtSts_out);

        /* End of Outputs for SubSystem: '<S347>/If Action Subsystem17' */
    }

    /* End of If: '<S347>/If8' */

    /* If: '<S347>/If9' incorporates:
     *  Constant: '<S353>/Constant'
     *  RelationalOperator: '<S347>/Relational Operator9'
     */
    if (CeGRAR_e_TargetSts_Normal == ((uint32)rtu_VeGRAC_e_MSSBEVWED_TS_Prev))
    {
        /* Outputs for IfAction SubSystem: '<S347>/If Action Subsystem18' incorporates:
         *  ActionPort: '<S364>/Action Port'
         */
        GRAR_ac_IfActionSubsystem(rty_MSSBEV_eAWD_TgtSts_out);

        /* End of Outputs for SubSystem: '<S347>/If Action Subsystem18' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S347>/If Action Subsystem19' incorporates:
         *  ActionPort: '<S365>/Action Port'
         */
        GRAR_ac_IfActionSubsystem1_n(rtu_VeGRAC_e_MSSBEVWED_TS_Prev,
            rty_MSSBEV_eAWD_TgtSts_out);

        /* End of Outputs for SubSystem: '<S347>/If Action Subsystem19' */
    }

    /* End of If: '<S347>/If9' */

    /* If: '<S347>/If1' incorporates:
     *  Constant: '<S353>/Constant'
     *  RelationalOperator: '<S347>/Relational Operator1'
     */
    if (CeGRAR_e_TargetSts_Normal == ((uint32)rtu_MSSBEV_eDTC_TargetSts_previous))
    {
        /* Outputs for IfAction SubSystem: '<S347>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S366>/Action Port'
         */
        GRAR_ac_IfActionSubsystem(rty_MSSBEV_eDTC_TargetSts_out);

        /* End of Outputs for SubSystem: '<S347>/If Action Subsystem2' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S347>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S369>/Action Port'
         */
        GRAR_ac_IfActionSubsystem1_n(rtu_MSSBEV_eDTC_TargetSts_previous,
            rty_MSSBEV_eDTC_TargetSts_out);

        /* End of Outputs for SubSystem: '<S347>/If Action Subsystem3' */
    }

    /* End of If: '<S347>/If1' */

    /* If: '<S347>/If10' incorporates:
     *  Constant: '<S353>/Constant'
     *  RelationalOperator: '<S347>/Relational Operator10'
     */
    if (CeGRAR_e_TargetSts_Normal == ((uint32)rtu_VeGRAC_e_MSSBEVeLSD_TS_Prev))
    {
        /* Outputs for IfAction SubSystem: '<S347>/If Action Subsystem20' incorporates:
         *  ActionPort: '<S367>/Action Port'
         */
        GRAR_ac_IfActionSubsystem(rty_MSSBEV_eLSD_TgtSts_out);

        /* End of Outputs for SubSystem: '<S347>/If Action Subsystem20' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S347>/If Action Subsystem21' incorporates:
         *  ActionPort: '<S368>/Action Port'
         */
        GRAR_ac_IfActionSubsystem1_n(rtu_VeGRAC_e_MSSBEVeLSD_TS_Prev,
            rty_MSSBEV_eLSD_TgtSts_out);

        /* End of Outputs for SubSystem: '<S347>/If Action Subsystem21' */
    }

    /* End of If: '<S347>/If10' */

    /* If: '<S347>/If2' incorporates:
     *  Constant: '<S353>/Constant'
     *  RelationalOperator: '<S347>/Relational Operator2'
     */
    if (CeGRAR_e_TargetSts_Normal == ((uint32)
            rtu_MSSBEV_Regen_TargetSts_previous))
    {
        /* Outputs for IfAction SubSystem: '<S347>/If Action Subsystem4' incorporates:
         *  ActionPort: '<S370>/Action Port'
         */
        GRAR_ac_IfActionSubsystem(rty_MSSBEV_Regen_TargetSts_out);

        /* End of Outputs for SubSystem: '<S347>/If Action Subsystem4' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S347>/If Action Subsystem5' incorporates:
         *  ActionPort: '<S371>/Action Port'
         */
        GRAR_ac_IfActionSubsystem1_n(rtu_MSSBEV_Regen_TargetSts_previous,
            rty_MSSBEV_Regen_TargetSts_out);

        /* End of Outputs for SubSystem: '<S347>/If Action Subsystem5' */
    }

    /* End of If: '<S347>/If2' */

    /* If: '<S347>/If3' incorporates:
     *  Constant: '<S353>/Constant'
     *  RelationalOperator: '<S347>/Relational Operator3'
     */
    if (CeGRAR_e_TargetSts_Normal == ((uint32)rtu_MSSBEV_eLNC_TargetSts_previous))
    {
        /* Outputs for IfAction SubSystem: '<S347>/If Action Subsystem6' incorporates:
         *  ActionPort: '<S372>/Action Port'
         */
        GRAR_ac_IfActionSubsystem(rty_MSSBEV_eLNC_TargetSts_out);

        /* End of Outputs for SubSystem: '<S347>/If Action Subsystem6' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S347>/If Action Subsystem7' incorporates:
         *  ActionPort: '<S373>/Action Port'
         */
        GRAR_ac_IfActionSubsystem1_n(rtu_MSSBEV_eLNC_TargetSts_previous,
            rty_MSSBEV_eLNC_TargetSts_out);

        /* End of Outputs for SubSystem: '<S347>/If Action Subsystem7' */
    }

    /* End of If: '<S347>/If3' */

    /* If: '<S347>/If4' incorporates:
     *  Constant: '<S353>/Constant'
     *  RelationalOperator: '<S347>/Relational Operator4'
     */
    if (CeGRAR_e_TargetSts_Normal == ((uint32)rtu_MSSBEV_bTV_TargetSts_previous))
    {
        /* Outputs for IfAction SubSystem: '<S347>/If Action Subsystem8' incorporates:
         *  ActionPort: '<S374>/Action Port'
         */
        GRAR_ac_IfActionSubsystem(rty_MSSBEV_bTV_TargetSts_out);

        /* End of Outputs for SubSystem: '<S347>/If Action Subsystem8' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S347>/If Action Subsystem9' incorporates:
         *  ActionPort: '<S375>/Action Port'
         */
        GRAR_ac_IfActionSubsystem1_n(rtu_MSSBEV_bTV_TargetSts_previous,
            rty_MSSBEV_bTV_TargetSts_out);

        /* End of Outputs for SubSystem: '<S347>/If Action Subsystem9' */
    }

    /* End of If: '<S347>/If4' */
}

/*
 * Output and update for action system:
 *    '<S110>/If Action Subsystem3'
 *    '<S110>/If Action Subsystem2'
 *    '<S110>/If Action Subsystem1'
 *    '<S110>/If Action Subsystem4'
 */
static FUNC(void, GRAR_CODE_LOCAL) GRAR_ac_IfActionSubsystem3(VAR
    (TeGRAR_e_TotMtrTrqRmdlActn, AUTOMATIC) rtu_In1, P2VAR
    (TeGRAR_e_TotMtrTrqRmdlActn, AUTOMATIC, GRAR_VAR_INIT) rty_out)
{
    /* DataTypeConversion: '<S396>/DataTypeConversion' */
    *rty_out = rtu_In1;
}

/* Model step function for TID1 */
FUNC(void, GRAR_CODE) GRAR_MedTEB(void) /* Explicit Task: MedTEB */
{
    static const sint8 b[26] =
    {
        1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0
    };

    static const sint8 c[26] =
    {
        0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0
    };

    sint32 i;
    float32 for_cycle_index;
    float32 rtb_Divide;
    float32 rtb_Merge1;
    float32 rtb_Merge2;
    float32 rtb_Merge3;
    float32 rtb_Merge4;
    float32 rtb_Merge_i;
    float32 rtb_Switch1_1;
    TeGRAR_e_TargetSts tmp;
    TeLTIR_e_KeySts tmpRead_i;
    TePSMR_e_LV2PVSMode tmpRead_h;
    TePWMD_e_CanLocStatus tmpRead_j;
    boolean rtb_TmpSignalConversionAtSFunctionInpo_0[38];
    boolean rtb_Curr_Actv_EOM_specs_superset[29];
    boolean rtb_RelationalOperator1;
    boolean rtb_Switch1_b;
    boolean tmpRead;
    boolean tmpRead_0;
    boolean tmpRead_1;
    boolean tmpRead_2;
    boolean tmpRead_3;
    boolean tmpRead_4;
    boolean tmpRead_5;
    boolean tmpRead_6;
    boolean tmpRead_7;
    boolean tmpRead_8;
    boolean tmpRead_9;
    boolean tmpRead_a;
    boolean tmpRead_b;
    boolean tmpRead_c;
    boolean tmpRead_d;
    boolean tmpRead_e;
    boolean tmpRead_f;
    boolean tmpRead_g;
    boolean tmpRead_k;
    boolean tmpRead_l;
    boolean tmpRead_m;
    boolean tmpRead_n;
    boolean tmpRead_o;
    boolean tmpRead_p;
    boolean tmpRead_q;
    boolean tmpRead_r;
    boolean tmpRead_s;

    /* Inport: '<Root>/VeGSMR_b_MissedNeutralReqFlt' */
    (void)Rte_Read_VeGSMR_b_MissedNeutralReqFlt_Value(&tmpRead_g);

    /* Inport: '<Root>/VeGSMR_b_MissedParkReqFlt' */
    (void)Rte_Read_VeGSMR_b_MissedParkReqFlt_Value(&tmpRead_f);

    /* Inport: '<Root>/VeGSMR_b_PpawlInsrtMntrFailed' */
    (void)Rte_Read_VeGSMR_b_PpawlInsrtMntrFailed_Value(&tmpRead_e);

    /* Inport: '<Root>/VeGSMR_b_PRNDMonitorFailed' */
    (void)Rte_Read_VeGSMR_b_PRNDMonitorFailed_Value(&tmpRead_d);

    /* Inport: '<Root>/VeSSMR_b_VehSpdFA' */
    (void)Rte_Read_VeSSMR_b_VehSpdFA_Value(&tmpRead_c);

    /* Inport: '<Root>/VeSSMR_b_VehSpdRatFailed' */
    (void)Rte_Read_VeSSMR_b_VehSpdRatFailed_Value(&tmpRead_b);

    /* Inport: '<Root>/VeCSMR_b_Lv2CruiseMntrFailed' */
    (void)Rte_Read_VeCSMR_b_Lv2CruiseMntrFailed_Value(&tmpRead_a);

    /* Inport: '<Root>/VeMMMR_b_Lv2MtrMd_DBC_Fault' */
    (void)Rte_Read_VeMMMR_b_Lv2MtrMd_DBC_Fault_Value(&tmpRead_9);

    /* Inport: '<Root>/VePSMR_b_Lv2PVS2Failed' */
    (void)Rte_Read_VePSMR_b_Lv2PVS2Failed_Value(&tmpRead_8);

    /* Inport: '<Root>/VeDTMR_b_DTRcmdFlt' */
    (void)Rte_Read_VeDTMR_b_DTRcmdFlt_Value(&tmpRead_7);

    /* Inport: '<Root>/VeSTMR_b_TrqSplit_OS_US' */
    (void)Rte_Read_VeSTMR_b_TrqSplit_OS_US_Value(&tmpRead_6);

    /* Inport: '<Root>/VePSMR_b_Lv2Lv1PdlPosDiffFlt' */
    (void)Rte_Read_VePSMR_b_Lv2Lv1PdlPosDiffFlt_Value(&tmpRead_5);

    /* Inport: '<Root>/VePSMR_b_Lv2AccelPdlPosFlt' */
    (void)Rte_Read_VePSMR_b_Lv2AccelPdlPosFlt_Value(&tmpRead_4);

    /* Inport: '<Root>/VeSTMR_b_RgnEstMntrFlt' */
    (void)Rte_Read_VeSTMR_b_RgnEstMntrFlt_Value(&tmpRead_3);

    /* Inport: '<Root>/VePSMR_b_Lv2PVS1Failed' */
    (void)Rte_Read_VePSMR_b_Lv2PVS1Failed_Value(&tmpRead_2);

    /* Inport: '<Root>/VeSTMR_b_TransOutTrqCmdFlt' */
    (void)Rte_Read_VeSTMR_b_TransOutTrqCmdFlt_Value(&tmpRead_1);

    /* Inport: '<Root>/VeSTMR_b_TransOutTrqCmdFlt_PN' */
    (void)Rte_Read_VeSTMR_b_TransOutTrqCmdFlt_PN_Value(&tmpRead_0);

    /* Inport: '<Root>/VeSTMR_b_Lv2CruiseTrqChkFailed' */
    (void)Rte_Read_VeSTMR_b_Lv2CruiseTrqChkFailed_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/GRAR_MedTEB'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/GRAR_MedTEB_StartCheckpoint'
     */
    /* FunctionCaller: '<S7>/GRAR_MedTEB_StartCheckpoint ' */
    Rte_Call_GRAR_MedTEB_StartCheckpoint_CheckpointReached();

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/GRAI'
     */
    /* SignalConversion generated from: '<S6>/Atlantis_High_and_Brain' */
#if Rte_SysCon_Variant_GRAR_Gets_3_SABR_sig

    /* VariantMerge generated from: '<S6>/Atlantis_High_and_Brain' incorporates:
     *  Constant: '<S6>/Constant4'
     *  Inport: '<Root>/VeSABR_b_SL2outBEV_VDAB_WED_SafActive'
     *  Inport: '<Root>/VeSABR_b_SL2outBEV_VDAB_eAWD_SafActive'
     *  Inport: '<Root>/VeSABR_b_SL2outBEV_VDAB_eLSD_SafActive'
     */
    (void)Rte_Read_VeSABR_b_SL2outBEV_VDAB_eLSD_SafActive_Value
        ((&(VeGRAI_b_VDAB_eLSD_SafActive)));
    (void)Rte_Read_VeSABR_b_SL2outBEV_VDAB_WED_SafActive_Value
        ((&(VeGRAI_b_VDAB_WED_SafActive)));
    (void)Rte_Read_VeSABR_b_SL2outBEV_VDAB_eAWD_SafActive_Value
        ((&(VeGRAI_b_VDAB_eAWD_SafActive)));
    VeGRAR_b_Variant_3_SABR_Actv = true;

#else

    /* VariantMerge generated from: '<S6>/Atlantis_High_and_Brain' incorporates:
     *  Constant: '<S6>/Constant'
     *  Constant: '<S6>/Constant1'
     *  Constant: '<S6>/Constant2'
     *  Constant: '<S6>/Constant3'
     *  SignalConversion generated from: '<S6>/Atlantis_High_and_Brain'
     */
    VeGRAI_b_VDAB_eAWD_SafActive = false;
    VeGRAI_b_VDAB_WED_SafActive = false;
    VeGRAI_b_VDAB_eLSD_SafActive = false;
    VeGRAR_b_Variant_3_SABR_Actv = false;

#endif

    /* End of SignalConversion generated from: '<S6>/Atlantis_High_and_Brain' */

    /* SignalConversion generated from: '<S6>/Brain' */
#if Rte_SysCon_Variant_GRAR_SafActiveRecievd

    /* VariantMerge generated from: '<S6>/Brain' incorporates:
     *  Constant: '<S6>/Constant15'
     *  Inport: '<Root>/VeSABR_b_SL2outBEV_VDAB_Poff_SafActive'
     *  Inport: '<Root>/VeSABR_b_SL2outBEV_VDAB_bTCS_SafActive'
     *  Inport: '<Root>/VeSABR_b_SL2outBEV_VDAB_bTV_SafActive'
     *  Inport: '<Root>/VeSCDR_b_SL2outBEV_VDCD_RWS_SafActive'
     *  Inport: '<Root>/VeSCDR_b_SL2outBEV_VDCD_Regen_SafActive'
     *  Inport: '<Root>/VeSCDR_b_SL2outBEV_VDCD_eAWD_SafActive'
     *  Inport: '<Root>/VeSCDR_b_SL2outBEV_VDCD_eDTC_SafActive'
     *  Inport: '<Root>/VeSCDR_b_SL2outBEV_VDCD_eTCS_SafActive'
     */
    (void)Rte_Read_VeSABR_b_SL2outBEV_VDAB_Poff_SafActive_Value
        ((&(VeGRAI_b_VDAB_Poff_SafActive)));
    (void)Rte_Read_VeSABR_b_SL2outBEV_VDAB_bTCS_SafActive_Value
        ((&(VeGRAI_b_VDAB_bTCS_SafActive)));
    (void)Rte_Read_VeSABR_b_SL2outBEV_VDAB_bTV_SafActive_Value
        ((&(VeGRAI_b_VDAB_bTV_SafActive)));
    (void)Rte_Read_VeSCDR_b_SL2outBEV_VDCD_RWS_SafActive_Value
        ((&(VeGRAI_b_VDCD_RWS_SafActive)));
    (void)Rte_Read_VeSCDR_b_SL2outBEV_VDCD_Regen_SafActive_Value
        ((&(VeGRAI_b_VDCD_Regen_SafActive)));
    (void)Rte_Read_VeSCDR_b_SL2outBEV_VDCD_eDTC_SafActive_Value
        ((&(VeGRAI_b_VDCD_eDTC_SafActive)));
    (void)Rte_Read_VeSCDR_b_SL2outBEV_VDCD_eTCS_SafActive_Value
        ((&(VeGRAI_b_VDCD_eTCS_SafActive)));
    (void)Rte_Read_VeSCDR_b_SL2outBEV_VDCD_eAWD_SafActive_Value
        ((&(VeGRAI_b_VDCD_eAWD_SafActive)));
    VeGRAR_b_Varnt_SABR_SCDR_Actv = true;

#else

    /* VariantMerge generated from: '<S6>/Brain' incorporates:
     *  Constant: '<S6>/Constant10'
     *  Constant: '<S6>/Constant11'
     *  Constant: '<S6>/Constant12'
     *  Constant: '<S6>/Constant13'
     *  Constant: '<S6>/Constant14'
     *  Constant: '<S6>/Constant5'
     *  Constant: '<S6>/Constant6'
     *  Constant: '<S6>/Constant7'
     *  Constant: '<S6>/Constant8'
     *  SignalConversion generated from: '<S6>/Brain'
     */
    VeGRAI_b_VDAB_bTV_SafActive = false;
    VeGRAI_b_VDAB_bTCS_SafActive = false;
    VeGRAI_b_VDAB_Poff_SafActive = false;
    VeGRAI_b_VDCD_eAWD_SafActive = false;
    VeGRAI_b_VDCD_eTCS_SafActive = false;
    VeGRAI_b_VDCD_eDTC_SafActive = false;
    VeGRAI_b_VDCD_Regen_SafActive = false;
    VeGRAI_b_VDCD_RWS_SafActive = false;
    VeGRAR_b_Varnt_SABR_SCDR_Actv = false;

#endif

    /* End of SignalConversion generated from: '<S6>/Brain' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeDTMR_b_Lv2VehStndStillReq_FA' */
    (void)Rte_Read_VeDTMR_b_Lv2VehStndStillReq_FA_Value(&rtb_RelationalOperator1);

    /* Inport: '<Root>/VeDTMR_b_Lv2_OPD_ON_FA' */
    (void)Rte_Read_VeDTMR_b_Lv2_OPD_ON_FA_Value(&rtb_Switch1_b);

    /* Inport: '<Root>/VeWDMR_b_WED_is_disengaged_Flt' */
    (void)Rte_Read_VeWDMR_b_WED_is_disengaged_Flt_Value(&tmpRead_s);

    /* Inport: '<Root>/VeGSMR_b_PPawl_InVldEngCmd' */
    (void)Rte_Read_VeGSMR_b_PPawl_InVldEngCmd_Value(&tmpRead_r);

    /* Inport: '<Root>/VeGSMR_b_OutOfPInValid' */
    (void)Rte_Read_VeGSMR_b_OutOfPInValid_Value(&tmpRead_q);

    /* Inport: '<Root>/VeDTMR_b_Lv2MaxRegenTorqDiff_FA' */
    (void)Rte_Read_VeDTMR_b_Lv2MaxRegenTorqDiff_FA_Value(&tmpRead_p);

    /* Inport: '<Root>/VeCSMR_b_Lv2CrusOff' */
    (void)Rte_Read_VeCSMR_b_Lv2CrusOff_Value(&tmpRead_o);

    /* Inport: '<Root>/VeCSMR_b_Lv2CrusInhEnable' */
    (void)Rte_Read_VeCSMR_b_Lv2CrusInhEnable_Value(&tmpRead_n);

    /* Inport: '<Root>/VePSMR_b_Lv2PVSCohFailed' */
    (void)Rte_Read_VePSMR_b_Lv2PVSCohFailed_Value(&tmpRead_m);

    /* Inport: '<Root>/VeLTIR_b_Lv2BrkMaxRgnReady_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2BrkMaxRgnReady_FA_Value(&tmpRead_l);

    /* Inport: '<Root>/VeDTMR_b_TransOutTrqCmdFlt_PN' */
    (void)Rte_Read_VeDTMR_b_TransOutTrqCmdFlt_PN_Value(&tmpRead_k);

    /* Logic: '<S418>/AND' incorporates:
     *  Inport: '<Root>/VePLTR_b_InFieldMode'
     */
    (void)Rte_Read_VePLTR_b_InFieldMode_Value((&(VeGRAI_b_InFieldMode)));

    /* Inport: '<Root>/VeCANR_e_CanLocEnblStatus' */
    (void)Rte_Read_VeCANR_e_CanLocEnblStatus_VeCANR_e_CanLocEnblStatus
        (&tmpRead_j);

    /* Inport: '<Root>/VeLTIR_e_Lv2KeySts' */
    (void)Rte_Read_VeLTIR_e_Lv2KeySts_Value(&tmpRead_i);

    /* Logic: '<S417>/AND' incorporates:
     *  Inport: '<Root>/VeIMPR_b_HighVoltageRapidShtdwnCmnd'
     */
    (void)Rte_Read_VeIMPR_b_HighVoltageRapidShtdwnCmnd_Value
        ((&(VeGRAI_b_VehImpactDetected)));

    /* Inport: '<Root>/VePSMR_e_Lv2PVSMode' */
    (void)Rte_Read_VePSMR_e_Lv2PVSMode_Value(&tmpRead_h);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/GRAR_MedTEB'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/GRAC'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/GRAI'
     */
    /* Logic: '<S205>/Logical Operator2' incorporates:
     *  Constant: '<S244>/Calib'
     *  Constant: '<S245>/Calib'
     *  Logic: '<S205>/Logical Operator1'
     *  Logic: '<S423>/AND'
     */
    VeGRAR_b_FF_post_overrd_01 = ((KeGRAR_b_FF_Flt_injct_01) || (tmpRead &&
        (KeGRAR_b_FF_enable_01)));

    /* Logic: '<S216>/Logical Operator2' incorporates:
     *  Constant: '<S266>/Calib'
     *  Constant: '<S267>/Calib'
     *  Logic: '<S216>/Logical Operator1'
     *  Logic: '<S398>/AND'
     */
    VeGRAR_b_FF_post_overrd_02 = ((KeGRAR_b_FF_Flt_injct_02) || (tmpRead_0 &&
        (KeGRAR_b_FF_enable_02)));

    /* Logic: '<S227>/Logical Operator2' incorporates:
     *  Constant: '<S288>/Calib'
     *  Constant: '<S289>/Calib'
     *  Logic: '<S227>/Logical Operator1'
     *  Logic: '<S409>/AND'
     */
    VeGRAR_b_FF_post_overrd_03 = ((KeGRAR_b_FF_Flt_injct_03) || (tmpRead_1 &&
        (KeGRAR_b_FF_enable_03)));

    /* Logic: '<S238>/Logical Operator2' incorporates:
     *  Constant: '<S310>/Calib'
     *  Constant: '<S311>/Calib'
     *  Logic: '<S238>/Logical Operator1'
     *  Logic: '<S420>/AND'
     */
    VeGRAR_b_FF_post_overrd_04 = ((KeGRAR_b_FF_Flt_injct_04) || (tmpRead_2 &&
        (KeGRAR_b_FF_enable_04)));

    /* Logic: '<S239>/Logical Operator2' incorporates:
     *  Constant: '<S312>/Calib'
     *  Constant: '<S313>/Calib'
     *  Logic: '<S239>/Logical Operator1'
     *  Logic: '<S431>/AND'
     */
    VeGRAR_b_FF_post_overrd_05 = ((KeGRAR_b_FF_Flt_injct_05) || (tmpRead_3 &&
        (KeGRAR_b_FF_enable_05)));

    /* Logic: '<S240>/Logical Operator2' incorporates:
     *  Constant: '<S314>/Calib'
     *  Constant: '<S315>/Calib'
     *  Logic: '<S240>/Logical Operator1'
     *  Logic: '<S439>/AND'
     */
    VeGRAR_b_FF_post_overrd_06 = ((KeGRAR_b_FF_Flt_injct_06) || (tmpRead_4 &&
        (KeGRAR_b_FF_enable_06)));

    /* Logic: '<S241>/Logical Operator2' incorporates:
     *  Constant: '<S316>/Calib'
     *  Constant: '<S317>/Calib'
     *  Logic: '<S241>/Logical Operator1'
     *  Logic: '<S440>/AND'
     */
    VeGRAR_b_FF_post_overrd_07 = ((KeGRAR_b_FF_Flt_injct_07) || (tmpRead_5 &&
        (KeGRAR_b_FF_enable_07)));

    /* Logic: '<S242>/Logical Operator2' incorporates:
     *  Constant: '<S318>/Calib'
     *  Constant: '<S319>/Calib'
     *  Logic: '<S242>/Logical Operator1'
     *  Logic: '<S441>/AND'
     */
    VeGRAR_b_FF_post_overrd_08 = ((KeGRAR_b_FF_Flt_injct_08) || (tmpRead_6 &&
        (KeGRAR_b_FF_enable_08)));

    /* Logic: '<S243>/Logical Operator2' incorporates:
     *  Constant: '<S320>/Calib'
     *  Constant: '<S321>/Calib'
     *  Logic: '<S243>/Logical Operator1'
     *  Logic: '<S442>/AND'
     */
    VeGRAR_b_FF_post_overrd_09 = ((KeGRAR_b_FF_Flt_injct_09) || (tmpRead_7 &&
        (KeGRAR_b_FF_enable_09)));

    /* Logic: '<S206>/Logical Operator2' incorporates:
     *  Constant: '<S246>/Calib'
     */
    VeGRAR_b_FF_post_overrd_10 = KeGRAR_b_FF_Flt_injct_10;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/GRAI'
     */
    /* Logic: '<S207>/Logical Operator2' incorporates:
     *  Constant: '<S248>/Calib'
     *  Constant: '<S249>/Calib'
     *  Logic: '<S207>/Logical Operator1'
     *  Logic: '<S399>/AND'
     */
    VeGRAR_b_FF_post_overrd_11 = ((KeGRAR_b_FF_Flt_injct_11) || (tmpRead_8 &&
        (KeGRAR_b_FF_enable_11)));

    /* Logic: '<S208>/Logical Operator2' incorporates:
     *  Constant: '<S250>/Calib'
     *  Constant: '<S251>/Calib'
     *  Logic: '<S208>/Logical Operator1'
     *  Logic: '<S400>/AND'
     */
    VeGRAR_b_FF_post_overrd_12 = ((KeGRAR_b_FF_Flt_injct_12) || (tmpRead_9 &&
        (KeGRAR_b_FF_enable_12)));

    /* Logic: '<S209>/Logical Operator2' incorporates:
     *  Constant: '<S252>/Calib'
     *  Constant: '<S253>/Calib'
     *  Logic: '<S209>/Logical Operator1'
     *  Logic: '<S401>/AND'
     */
    VeGRAR_b_FF_post_overrd_13 = ((KeGRAR_b_FF_Flt_injct_13) || (tmpRead_a &&
        (KeGRAR_b_FF_enable_13)));

    /* Logic: '<S210>/Logical Operator2' incorporates:
     *  Constant: '<S254>/Calib'
     *  Constant: '<S255>/Calib'
     *  Logic: '<S210>/Logical Operator1'
     *  Logic: '<S402>/AND'
     */
    VeGRAR_b_FF_post_overrd_14 = ((KeGRAR_b_FF_Flt_injct_14) || (tmpRead_b &&
        (KeGRAR_b_FF_enable_14)));

    /* Logic: '<S211>/Logical Operator2' incorporates:
     *  Constant: '<S256>/Calib'
     *  Constant: '<S257>/Calib'
     *  Logic: '<S211>/Logical Operator1'
     *  Logic: '<S403>/AND'
     */
    VeGRAR_b_FF_post_overrd_15 = ((KeGRAR_b_FF_Flt_injct_15) || (tmpRead_c &&
        (KeGRAR_b_FF_enable_15)));

    /* Logic: '<S212>/Logical Operator2' incorporates:
     *  Constant: '<S258>/Calib'
     *  Constant: '<S259>/Calib'
     *  Logic: '<S212>/Logical Operator1'
     *  Logic: '<S404>/AND'
     */
    VeGRAR_b_FF_post_overrd_16 = ((KeGRAR_b_FF_Flt_injct_16) || (tmpRead_d &&
        (KeGRAR_b_FF_enable_16)));

    /* Logic: '<S213>/Logical Operator2' incorporates:
     *  Constant: '<S260>/Calib'
     *  Constant: '<S261>/Calib'
     *  Logic: '<S213>/Logical Operator1'
     *  Logic: '<S405>/AND'
     */
    VeGRAR_b_FF_post_overrd_17 = ((KeGRAR_b_FF_Flt_injct_17) || (tmpRead_e &&
        (KeGRAR_b_FF_enable_17)));

    /* Logic: '<S214>/Logical Operator2' incorporates:
     *  Constant: '<S262>/Calib'
     *  Constant: '<S263>/Calib'
     *  Logic: '<S214>/Logical Operator1'
     *  Logic: '<S406>/AND'
     */
    VeGRAR_b_FF_post_overrd_18 = ((KeGRAR_b_FF_Flt_injct_18) || (tmpRead_f &&
        (KeGRAR_b_FF_enable_18)));

    /* Logic: '<S215>/Logical Operator2' incorporates:
     *  Constant: '<S264>/Calib'
     *  Constant: '<S265>/Calib'
     *  Logic: '<S215>/Logical Operator1'
     *  Logic: '<S407>/AND'
     */
    VeGRAR_b_FF_post_overrd_19 = ((KeGRAR_b_FF_Flt_injct_19) || (tmpRead_g &&
        (KeGRAR_b_FF_enable_19)));

    /* Logic: '<S25>/Logical Operator' incorporates:
     *  Logic: '<S408>/AND'
     *  Logic: '<S410>/AND'
     *  Logic: '<S411>/AND'
     *  Logic: '<S412>/AND'
     *  Logic: '<S413>/AND'
     *  Logic: '<S414>/AND'
     *  Logic: '<S415>/AND'
     *  Logic: '<S424>/AND'
     *  Logic: '<S434>/AND'
     *  Logic: '<S435>/AND'
     *  Logic: '<S436>/AND'
     */
    VeGRAR_b_BEV_LatDynErr_1 = (((((((((((VeGRAI_b_VDCD_eAWD_SafActive) ||
        (VeGRAI_b_VDCD_eTCS_SafActive)) || (VeGRAI_b_VDCD_eDTC_SafActive)) ||
        (VeGRAI_b_VDCD_Regen_SafActive)) || (VeGRAI_b_VDAB_bTV_SafActive)) ||
        (VeGRAI_b_VDAB_bTCS_SafActive)) || (VeGRAI_b_VDAB_Poff_SafActive)) ||
        (VeGRAI_b_VDCD_RWS_SafActive)) || (VeGRAI_b_VDAB_eAWD_SafActive)) ||
        (VeGRAI_b_VDAB_WED_SafActive)) || (VeGRAI_b_VDAB_eLSD_SafActive));

    /* Logic: '<S237>/Logical Operator2' incorporates:
     *  Constant: '<S308>/Calib'
     *  Constant: '<S309>/Calib'
     *  Logic: '<S237>/Logical Operator1'
     */
    VeGRAR_b_BEV_LatDynErr_1a = ((KeGRAR_b_BEV_LatDynErr_FltInj) ||
        ((VeGRAR_b_BEV_LatDynErr_1) && (KeGRAR_b_BEV_LatDynErr_Enbl)));

    /* RelationalOperator: '<S25>/When the car is turned OFF, the output is 1' incorporates:
     *  Constant: '<S197>/Constant'
     */
    VeGRAR_b_CarKeydOff = (CeLTIR_e_IGN_LK == ((uint32)tmpRead_i));

    /* Logic: '<S25>/Gives_1_when_car_is_keyed_NOT_off' */
    VeGRAR_b_Car_keyed_NOT_off = !VeGRAR_b_CarKeydOff;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/GRAI'
     */
    /* RelationalOperator: '<S25>/Relational Operator3' incorporates:
     *  Constant: '<S204>/Constant'
     *  DataTypeConversion: '<S446>/DataTypeConversion'
     *  Inport: '<Root>/VeCANR_e_CanLocEnblStatus'
     */
    VeGRAR_b_Diag_On = (((uint32)tmpRead_j) == CePWMD_e_LOC_Enable);

    /* Logic: '<S188>/AND' */
    VeGRAI_b_InFieldMode_1 = VeGRAI_b_InFieldMode;

    /* Logic: '<S25>/AND1' */
    VeGRAR_b_BEV_LatDynErr_2 = ((((VeGRAR_b_BEV_LatDynErr_1a) &&
        (VeGRAR_b_Car_keyed_NOT_off)) && (VeGRAR_b_Diag_On)) &&
        (VeGRAI_b_InFieldMode_1));

    /* Logic: '<S217>/Logical Operator2' incorporates:
     *  Constant: '<S268>/Calib'
     *  Constant: '<S269>/Calib'
     *  Logic: '<S217>/Logical Operator1'
     */
    VeGRAR_b_FF_post_overrd_20 = ((KeGRAR_b_FF_Flt_injct_20) ||
        ((VeGRAR_b_BEV_LatDynErr_2) && (KeGRAR_b_FF_enable_20)));

    /* Logic: '<S218>/Logical Operator2' incorporates:
     *  Constant: '<S270>/Calib'
     *  Constant: '<S271>/Calib'
     *  Logic: '<S218>/Logical Operator1'
     */
    VeGRAR_b_FF_post_overrd_21 = ((KeGRAR_b_FF_Flt_injct_21) ||
        ((VeGRAI_b_VehImpactDetected) && (KeGRAR_b_FF_enable_21)));

    /* Logic: '<S219>/Logical Operator2' incorporates:
     *  Constant: '<S198>/Constant'
     *  Constant: '<S272>/Calib'
     *  Constant: '<S273>/Calib'
     *  Logic: '<S219>/Logical Operator1'
     *  RelationalOperator: '<S25>/Relational Operator'
     */
    VeGRAR_b_FF_post_overrd_22 = ((KeGRAR_b_FF_Flt_injct_22) || ((((uint32)
        tmpRead_h) == CePSMR_e_PVS1Faulty) && (KeGRAR_b_FF_enable_22)));

    /* Logic: '<S220>/Logical Operator2' incorporates:
     *  Constant: '<S199>/Constant'
     *  Constant: '<S274>/Calib'
     *  Constant: '<S275>/Calib'
     *  Logic: '<S220>/Logical Operator1'
     *  RelationalOperator: '<S25>/Relational Operator7'
     */
    VeGRAR_b_FF_post_overrd_23 = ((KeGRAR_b_FF_Flt_injct_23) || ((((uint32)
        tmpRead_h) == CePSMR_e_PVS2Faulty) && (KeGRAR_b_FF_enable_23)));

    /* Logic: '<S221>/Logical Operator2' incorporates:
     *  Constant: '<S200>/Constant'
     *  Constant: '<S276>/Calib'
     *  Constant: '<S277>/Calib'
     *  Logic: '<S221>/Logical Operator1'
     *  RelationalOperator: '<S25>/Relational Operator8'
     */
    VeGRAR_b_FF_post_overrd_24 = ((KeGRAR_b_FF_Flt_injct_24) || ((((uint32)
        tmpRead_h) == CePSMR_e_PVS_Incoh) && (KeGRAR_b_FF_enable_24)));

    /* Logic: '<S222>/Logical Operator2' incorporates:
     *  Constant: '<S201>/Constant'
     *  Constant: '<S278>/Calib'
     *  Constant: '<S279>/Calib'
     *  Logic: '<S222>/Logical Operator1'
     *  RelationalOperator: '<S25>/Relational Operator9'
     */
    VeGRAR_b_FF_post_overrd_25 = ((KeGRAR_b_FF_Flt_injct_25) || ((((uint32)
        tmpRead_h) == CePSMR_e_Lv2PVSZeroTrqReq) && (KeGRAR_b_FF_enable_25)));

    /* Logic: '<S223>/Logical Operator2' incorporates:
     *  Constant: '<S202>/Constant'
     *  Constant: '<S280>/Calib'
     *  Constant: '<S281>/Calib'
     *  Logic: '<S223>/Logical Operator1'
     *  RelationalOperator: '<S25>/Relational Operator10'
     */
    VeGRAR_b_FF_post_overrd_26 = ((KeGRAR_b_FF_Flt_injct_26) || ((((uint32)
        tmpRead_h) == CePSMR_e_NotValid) && (KeGRAR_b_FF_enable_26)));

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/GRAI'
     */
    /* Logic: '<S224>/Logical Operator2' incorporates:
     *  Constant: '<S282>/Calib'
     *  Constant: '<S283>/Calib'
     *  Logic: '<S224>/Logical Operator1'
     *  Logic: '<S419>/AND'
     */
    VeGRAR_b_FF_post_overrd_27 = ((KeGRAR_b_FF_Flt_injct_27) || (tmpRead_k &&
        (KeGRAR_b_FF_enable_27)));

    /* Logic: '<S225>/Logical Operator2' incorporates:
     *  Constant: '<S284>/Calib'
     *  Constant: '<S285>/Calib'
     *  Logic: '<S225>/Logical Operator1'
     *  Logic: '<S421>/AND'
     */
    VeGRAR_b_FF_post_overrd_28 = ((KeGRAR_b_FF_Flt_injct_28) || (tmpRead_l &&
        (KeGRAR_b_FF_enable_28)));

    /* Logic: '<S226>/Logical Operator2' incorporates:
     *  Constant: '<S286>/Calib'
     *  Constant: '<S287>/Calib'
     *  Logic: '<S226>/Logical Operator1'
     *  Logic: '<S422>/AND'
     */
    VeGRAR_b_FF_post_overrd_29 = ((KeGRAR_b_FF_Flt_injct_29) || (tmpRead_m &&
        (KeGRAR_b_FF_enable_29)));

    /* Logic: '<S228>/Logical Operator2' incorporates:
     *  Constant: '<S290>/Calib'
     *  Constant: '<S291>/Calib'
     *  Logic: '<S228>/Logical Operator1'
     *  Logic: '<S426>/AND'
     */
    VeGRAR_b_FF_post_overrd_30 = ((KeGRAR_b_FF_Flt_injct_30) || (tmpRead_n &&
        (KeGRAR_b_FF_enable_30)));

    /* Logic: '<S229>/Logical Operator2' incorporates:
     *  Constant: '<S292>/Calib'
     *  Constant: '<S293>/Calib'
     *  Logic: '<S229>/Logical Operator1'
     *  Logic: '<S427>/AND'
     */
    VeGRAR_b_FF_post_overrd_31 = ((KeGRAR_b_FF_Flt_injct_31) || (tmpRead_o &&
        (KeGRAR_b_FF_enable_31)));

    /* Logic: '<S230>/Logical Operator2' incorporates:
     *  Constant: '<S294>/Calib'
     *  Constant: '<S295>/Calib'
     *  Logic: '<S230>/Logical Operator1'
     *  Logic: '<S425>/AND'
     */
    VeGRAR_b_FF_post_overrd_32 = ((KeGRAR_b_FF_Flt_injct_32) || (tmpRead_p &&
        (KeGRAR_b_FF_enable_32)));

    /* Logic: '<S231>/Logical Operator2' incorporates:
     *  Constant: '<S296>/Calib'
     *  Constant: '<S297>/Calib'
     *  Logic: '<S231>/Logical Operator1'
     *  Logic: '<S416>/AND'
     */
    VeGRAR_b_FF_post_overrd_33 = ((KeGRAR_b_FF_Flt_injct_33) || (tmpRead_q &&
        (KeGRAR_b_FF_enable_33)));

    /* Logic: '<S232>/Logical Operator2' incorporates:
     *  Constant: '<S298>/Calib'
     */
    VeGRAR_b_FF_post_overrd_34 = KeGRAR_b_FF_Flt_injct_34;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/GRAI'
     */
    /* Logic: '<S233>/Logical Operator2' incorporates:
     *  Constant: '<S300>/Calib'
     *  Constant: '<S301>/Calib'
     *  Logic: '<S233>/Logical Operator1'
     *  Logic: '<S429>/AND'
     */
    VeGRAR_b_FF_post_overrd_35 = ((KeGRAR_b_FF_Flt_injct_35) || (tmpRead_r &&
        (KeGRAR_b_FF_enable_35)));

    /* Logic: '<S234>/Logical Operator2' incorporates:
     *  Constant: '<S302>/Calib'
     *  Constant: '<S303>/Calib'
     *  Logic: '<S234>/Logical Operator1'
     *  Logic: '<S430>/AND'
     */
    VeGRAR_b_FF_post_overrd_36 = ((KeGRAR_b_FF_Flt_injct_36) || (tmpRead_s &&
        (KeGRAR_b_FF_enable_36)));

    /* Logic: '<S235>/Logical Operator2' incorporates:
     *  Constant: '<S304>/Calib'
     *  Constant: '<S305>/Calib'
     *  Logic: '<S235>/Logical Operator1'
     *  Logic: '<S432>/AND'
     */
    VeGRAR_b_FF_post_overrd_37 = ((KeGRAR_b_FF_Flt_injct_37) || (rtb_Switch1_b &&
        (KeGRAR_b_FF_enable_37)));

    /* Logic: '<S236>/Logical Operator2' incorporates:
     *  Constant: '<S306>/Calib'
     *  Constant: '<S307>/Calib'
     *  Logic: '<S236>/Logical Operator1'
     *  Logic: '<S433>/AND'
     */
    VeGRAR_b_FF_post_overrd_38 = ((KeGRAR_b_FF_Flt_injct_38) ||
        (rtb_RelationalOperator1 && (KeGRAR_b_FF_enable_38)));

    /* SignalConversion generated from: '<S12>/ SFunction ' incorporates:
     *  Chart: '<S9>/Chart1'
     *  Chart: '<S9>/EOM_assignment_to_faults2'
     *  SignalConversion generated from: '<S10>/ SFunction '
     */
    rtb_TmpSignalConversionAtSFunctionInpo_0[0] = VeGRAR_b_FF_post_overrd_01;
    rtb_TmpSignalConversionAtSFunctionInpo_0[1] = VeGRAR_b_FF_post_overrd_02;
    rtb_TmpSignalConversionAtSFunctionInpo_0[2] = VeGRAR_b_FF_post_overrd_03;
    rtb_TmpSignalConversionAtSFunctionInpo_0[3] = VeGRAR_b_FF_post_overrd_04;
    rtb_TmpSignalConversionAtSFunctionInpo_0[4] = VeGRAR_b_FF_post_overrd_05;
    rtb_TmpSignalConversionAtSFunctionInpo_0[5] = VeGRAR_b_FF_post_overrd_06;
    rtb_TmpSignalConversionAtSFunctionInpo_0[6] = VeGRAR_b_FF_post_overrd_07;
    rtb_TmpSignalConversionAtSFunctionInpo_0[7] = VeGRAR_b_FF_post_overrd_08;
    rtb_TmpSignalConversionAtSFunctionInpo_0[8] = VeGRAR_b_FF_post_overrd_09;
    rtb_TmpSignalConversionAtSFunctionInpo_0[9] = VeGRAR_b_FF_post_overrd_10;
    rtb_TmpSignalConversionAtSFunctionInpo_0[10] = VeGRAR_b_FF_post_overrd_11;
    rtb_TmpSignalConversionAtSFunctionInpo_0[11] = VeGRAR_b_FF_post_overrd_12;
    rtb_TmpSignalConversionAtSFunctionInpo_0[12] = VeGRAR_b_FF_post_overrd_13;
    rtb_TmpSignalConversionAtSFunctionInpo_0[13] = VeGRAR_b_FF_post_overrd_14;
    rtb_TmpSignalConversionAtSFunctionInpo_0[14] = VeGRAR_b_FF_post_overrd_15;
    rtb_TmpSignalConversionAtSFunctionInpo_0[15] = VeGRAR_b_FF_post_overrd_16;
    rtb_TmpSignalConversionAtSFunctionInpo_0[16] = VeGRAR_b_FF_post_overrd_17;
    rtb_TmpSignalConversionAtSFunctionInpo_0[17] = VeGRAR_b_FF_post_overrd_18;
    rtb_TmpSignalConversionAtSFunctionInpo_0[18] = VeGRAR_b_FF_post_overrd_19;
    rtb_TmpSignalConversionAtSFunctionInpo_0[19] = VeGRAR_b_FF_post_overrd_20;
    rtb_TmpSignalConversionAtSFunctionInpo_0[20] = VeGRAR_b_FF_post_overrd_21;
    rtb_TmpSignalConversionAtSFunctionInpo_0[21] = VeGRAR_b_FF_post_overrd_22;
    rtb_TmpSignalConversionAtSFunctionInpo_0[22] = VeGRAR_b_FF_post_overrd_23;
    rtb_TmpSignalConversionAtSFunctionInpo_0[23] = VeGRAR_b_FF_post_overrd_24;
    rtb_TmpSignalConversionAtSFunctionInpo_0[24] = VeGRAR_b_FF_post_overrd_25;
    rtb_TmpSignalConversionAtSFunctionInpo_0[25] = VeGRAR_b_FF_post_overrd_26;
    rtb_TmpSignalConversionAtSFunctionInpo_0[26] = VeGRAR_b_FF_post_overrd_27;
    rtb_TmpSignalConversionAtSFunctionInpo_0[27] = VeGRAR_b_FF_post_overrd_28;
    rtb_TmpSignalConversionAtSFunctionInpo_0[28] = VeGRAR_b_FF_post_overrd_29;
    rtb_TmpSignalConversionAtSFunctionInpo_0[29] = VeGRAR_b_FF_post_overrd_30;
    rtb_TmpSignalConversionAtSFunctionInpo_0[30] = VeGRAR_b_FF_post_overrd_31;
    rtb_TmpSignalConversionAtSFunctionInpo_0[31] = VeGRAR_b_FF_post_overrd_32;
    rtb_TmpSignalConversionAtSFunctionInpo_0[32] = VeGRAR_b_FF_post_overrd_33;
    rtb_TmpSignalConversionAtSFunctionInpo_0[33] = VeGRAR_b_FF_post_overrd_34;
    rtb_TmpSignalConversionAtSFunctionInpo_0[34] = VeGRAR_b_FF_post_overrd_35;
    rtb_TmpSignalConversionAtSFunctionInpo_0[35] = VeGRAR_b_FF_post_overrd_36;
    rtb_TmpSignalConversionAtSFunctionInpo_0[36] = VeGRAR_b_FF_post_overrd_37;
    rtb_TmpSignalConversionAtSFunctionInpo_0[37] = VeGRAR_b_FF_post_overrd_38;

    /* Chart: '<S9>/EOM_assignment_to_faults2' incorporates:
     *  Constant: '<S106>/Calib'
     *  Constant: '<S29>/Calib'
     *  Constant: '<S9>/Constant38'
     *  SignalConversion generated from: '<S12>/ SFunction '
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    /* Gateway: GRAR_MedTEB/GRAC/Assign_Rem_Act_to_Faults/EOM_assignment_to_faults2 */
    /* During: GRAR_MedTEB/GRAC/Assign_Rem_Act_to_Faults/EOM_assignment_to_faults2 */
    /* Entry Internal: GRAR_MedTEB/GRAC/Assign_Rem_Act_to_Faults/EOM_assignment_to_faults2 */
    /* Transition: '<S12>:1' */
    for (for_cycle_index = 1.0F; for_cycle_index <=
            KeGRAR_Cnt_NumberOfFaultTypes; for_cycle_index++)
    {
        /* Transition: '<S12>:29' */
        if (rtb_TmpSignalConversionAtSFunctionInpo_0[((sint32)for_cycle_index) -
            1])
        {
            /* Transition: '<S12>:32' */
            /* Transition: '<S12>:34' */
            GRAR_ac_DW.UnitDelay4_DSTATE[((sint32)KaGRAR_i_EmrgOperForFault
                [((sint32)for_cycle_index) - 1]) - 1] = true;

            /* Transition: '<S12>:35' */
        }
        else
        {
            /* Transition: '<S12>:30' */
        }

        /* Transition: '<S12>:13' */
        /* Transition: '<S12>:19' */
        /* Transition: '<S12>:17' */
        /* Transition: '<S12>:18' */
    }

    /* Selector: '<S109>/EOM__1' incorporates:
     *  Constant: '<S109>/Constant29'
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    /* Transition: '<S12>:21' */
    /* Transition: '<S12>:24' */
    /* Transition: '<S12>:23' */
    /* Transition: '<S12>:5' */
    VeGRAR_b_Active_EOM_001 = GRAR_ac_DW.UnitDelay4_DSTATE[0];

    /* Selector: '<S109>/EOM__10' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_010 = GRAR_ac_DW.UnitDelay4_DSTATE[9];

    /* Selector: '<S109>/EOM__11' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_011 = GRAR_ac_DW.UnitDelay4_DSTATE[10];

    /* Selector: '<S109>/EOM__12' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_012 = GRAR_ac_DW.UnitDelay4_DSTATE[11];

    /* Selector: '<S109>/EOM__13' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_013 = GRAR_ac_DW.UnitDelay4_DSTATE[12];

    /* Selector: '<S109>/EOM__14' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_014 = GRAR_ac_DW.UnitDelay4_DSTATE[13];

    /* Selector: '<S109>/EOM__15' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_015 = GRAR_ac_DW.UnitDelay4_DSTATE[14];

    /* Selector: '<S109>/EOM__16' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_016 = GRAR_ac_DW.UnitDelay4_DSTATE[15];

    /* Selector: '<S109>/EOM__17' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_017 = GRAR_ac_DW.UnitDelay4_DSTATE[16];

    /* Selector: '<S109>/EOM__18' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_018 = GRAR_ac_DW.UnitDelay4_DSTATE[17];

    /* Selector: '<S109>/EOM__19' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_019 = GRAR_ac_DW.UnitDelay4_DSTATE[18];

    /* Selector: '<S109>/EOM__2' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_002 = GRAR_ac_DW.UnitDelay4_DSTATE[1];

    /* Selector: '<S109>/EOM__20' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_020 = GRAR_ac_DW.UnitDelay4_DSTATE[19];

    /* Selector: '<S109>/EOM__21' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_021 = GRAR_ac_DW.UnitDelay4_DSTATE[20];

    /* Selector: '<S109>/EOM__22' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_022 = GRAR_ac_DW.UnitDelay4_DSTATE[21];

    /* Selector: '<S109>/EOM__23' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_023 = GRAR_ac_DW.UnitDelay4_DSTATE[22];

    /* Selector: '<S109>/EOM__24' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_024 = GRAR_ac_DW.UnitDelay4_DSTATE[23];

    /* Selector: '<S109>/EOM__25' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_025 = GRAR_ac_DW.UnitDelay4_DSTATE[24];

    /* Selector: '<S109>/EOM__26' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_026 = GRAR_ac_DW.UnitDelay4_DSTATE[25];

    /* Selector: '<S109>/EOM__27' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_027 = GRAR_ac_DW.UnitDelay4_DSTATE[26];

    /* Selector: '<S109>/EOM__28' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_028 = GRAR_ac_DW.UnitDelay4_DSTATE[27];

    /* Selector: '<S109>/EOM__29' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_029 = GRAR_ac_DW.UnitDelay4_DSTATE[28];

    /* Selector: '<S109>/EOM__3' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_003 = GRAR_ac_DW.UnitDelay4_DSTATE[2];

    /* Selector: '<S109>/EOM__30' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_030 = GRAR_ac_DW.UnitDelay4_DSTATE[29];

    /* Selector: '<S109>/EOM__31' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_031 = GRAR_ac_DW.UnitDelay4_DSTATE[30];

    /* Selector: '<S109>/EOM__32' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_032 = GRAR_ac_DW.UnitDelay4_DSTATE[31];

    /* Selector: '<S109>/EOM__33' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_033 = GRAR_ac_DW.UnitDelay4_DSTATE[32];

    /* Selector: '<S109>/EOM__34' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_034 = GRAR_ac_DW.UnitDelay4_DSTATE[33];

    /* Selector: '<S109>/EOM__35' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_035 = GRAR_ac_DW.UnitDelay4_DSTATE[34];

    /* Selector: '<S109>/EOM__36' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_036 = GRAR_ac_DW.UnitDelay4_DSTATE[35];

    /* Selector: '<S109>/EOM__37' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_037 = GRAR_ac_DW.UnitDelay4_DSTATE[36];

    /* Selector: '<S109>/EOM__38' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_038 = GRAR_ac_DW.UnitDelay4_DSTATE[37];

    /* Selector: '<S109>/EOM__39' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_039 = GRAR_ac_DW.UnitDelay4_DSTATE[38];

    /* Selector: '<S109>/EOM__4' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_004 = GRAR_ac_DW.UnitDelay4_DSTATE[3];

    /* Selector: '<S109>/EOM__40' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_040 = GRAR_ac_DW.UnitDelay4_DSTATE[39];

    /* Selector: '<S109>/EOM__41' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_041 = GRAR_ac_DW.UnitDelay4_DSTATE[40];

    /* Selector: '<S109>/EOM__42' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_042 = GRAR_ac_DW.UnitDelay4_DSTATE[41];

    /* Selector: '<S109>/EOM__43' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_043 = GRAR_ac_DW.UnitDelay4_DSTATE[42];

    /* Selector: '<S109>/EOM__44' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_044 = GRAR_ac_DW.UnitDelay4_DSTATE[43];

    /* Selector: '<S109>/EOM__45' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_045 = GRAR_ac_DW.UnitDelay4_DSTATE[44];

    /* Selector: '<S109>/EOM__46' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_046 = GRAR_ac_DW.UnitDelay4_DSTATE[45];

    /* Selector: '<S109>/EOM__47' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_047 = GRAR_ac_DW.UnitDelay4_DSTATE[46];

    /* Selector: '<S109>/EOM__48' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_048 = GRAR_ac_DW.UnitDelay4_DSTATE[47];

    /* Selector: '<S109>/EOM__49' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_049 = GRAR_ac_DW.UnitDelay4_DSTATE[48];

    /* Selector: '<S109>/EOM__5' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_005 = GRAR_ac_DW.UnitDelay4_DSTATE[4];

    /* Selector: '<S109>/EOM__50' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_050 = GRAR_ac_DW.UnitDelay4_DSTATE[49];

    /* Selector: '<S109>/EOM__6' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_006 = GRAR_ac_DW.UnitDelay4_DSTATE[5];

    /* Selector: '<S109>/EOM__7' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_007 = GRAR_ac_DW.UnitDelay4_DSTATE[6];

    /* Selector: '<S109>/EOM__8' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_008 = GRAR_ac_DW.UnitDelay4_DSTATE[7];

    /* Selector: '<S109>/EOM__9' incorporates:
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    VeGRAR_b_Active_EOM_009 = GRAR_ac_DW.UnitDelay4_DSTATE[8];

    /* Logic: '<S25>/Gives_1_just_after_the_car_is_switched_out_of_OFF_state' incorporates:
     *  RelationalOperator: '<S25>/Relational Operator4'
     *  RelationalOperator: '<S25>/Relational Operator5'
     *  UnitDelay: '<S25>/Unit Delay1'
     */
    VeGRAR_b_CarJustKeydNotOff = ((!VeGRAR_b_CarKeydOff) &&
        (GRAR_ac_DW.UnitDelay1_DSTATE_k));

    /* Switch: '<S9>/Switch' incorporates:
     *  Constant: '<S9>/Constant2'
     *  Saturate: '<S9>/Saturation1'
     *  Sum: '<S9>/Add1'
     *  UnitDelay: '<S9>/Unit Delay3'
     */
    if (VeGRAR_b_CarJustKeydNotOff)
    {
        GRAR_ac_DW.UnitDelay3_DSTATE = 1.0F;
    }
    else if ((GRAR_ac_DW.UnitDelay3_DSTATE + 1.0F) > 900000.0F)
    {
        /* Saturate: '<S9>/Saturation1' */
        GRAR_ac_DW.UnitDelay3_DSTATE = 900000.0F;
    }
    else if ((GRAR_ac_DW.UnitDelay3_DSTATE + 1.0F) < -0.5F)
    {
        /* Saturate: '<S9>/Saturation1' */
        GRAR_ac_DW.UnitDelay3_DSTATE = -0.5F;
    }
    else
    {
        /* Saturate: '<S9>/Saturation1' incorporates:
         *  Constant: '<S9>/Constant2'
         *  Sum: '<S9>/Add1'
         *  UnitDelay: '<S9>/Unit Delay3'
         */
        GRAR_ac_DW.UnitDelay3_DSTATE++;
    }

    /* End of Switch: '<S9>/Switch' */

    /* RelationalOperator: '<S9>/Relational Operator1' incorporates:
     *  Constant: '<S47>/Calib'
     *  UnitDelay: '<S9>/Unit Delay3'
     */
    rtb_RelationalOperator1 = (KeGRAR_i_MSSBEVAct_DlyCycNo <
        GRAR_ac_DW.UnitDelay3_DSTATE);

    /* Logic: '<S25>/Gives_1_immediately_after_the_car_is_turned_off' incorporates:
     *  RelationalOperator: '<S25>/Relational Operator1'
     *  RelationalOperator: '<S25>/Relational Operator2'
     *  UnitDelay: '<S25>/Unit Delay1'
     */
    VeGRAR_b_CarJustKeydOff = ((VeGRAR_b_CarKeydOff) &&
        (!GRAR_ac_DW.UnitDelay1_DSTATE_k));

    /* RelationalOperator: '<S25>/When the car is in PowerUp = Init mode, the output is 1' incorporates:
     *  Constant: '<S203>/Constant'
     */
    VeGRAR_b_KeySts_INIT_PowerUp = (((uint32)tmpRead_i) == CeLTIR_e_IGN_INIT);

    /* Switch: '<S9>/Switch1' incorporates:
     *  Constant: '<S58>/Calib'
     */
    rtb_Switch1_b = ((KeGRAR_b_ConsiderPowerUp) && (VeGRAR_b_KeySts_INIT_PowerUp));

    /* Chart: '<S9>/Chart1' incorporates:
     *  Constant: '<S28>/Calib'
     *  Constant: '<S29>/Calib'
     *  Constant: '<S36>/Calib'
     *  SignalConversion generated from: '<S10>/ SFunction '
     *  UnitDelay: '<S9>/Unit Delay1'
     */
    /* Gateway: GRAR_MedTEB/GRAC/Assign_Rem_Act_to_Faults/Chart1 */
    /* During: GRAR_MedTEB/GRAC/Assign_Rem_Act_to_Faults/Chart1 */
    /* Entry Internal: GRAR_MedTEB/GRAC/Assign_Rem_Act_to_Faults/Chart1 */
    /* Transition: '<S10>:1' */
    for_cycle_index = 1.0F;
    if (((GRAR_ac_DW.UnitDelay1_DSTATE[0] == 1.0F) || (KeGRAR_b_MSSBEVActReset))
        || (VeGRAR_b_CarJustKeydOff))
    {
        /* Transition: '<S10>:46' */
        /* Transition: '<S10>:51' */
        for (i = 0; i < 26; i++)
        {
            VaGRAR_i_MSSActions_actv[(i)] = (float32)b[i];
        }

        /* Transition: '<S10>:52' */
    }
    else
    {
        /* Transition: '<S10>:50' */
        memcpy((&(VaGRAR_i_MSSActions_actv[0])), &GRAR_ac_DW.UnitDelay1_DSTATE[0],
               26U * (sizeof(float32)));
    }

    /* Transition: '<S10>:60' */
    if (rtb_Switch1_b)
    {
        /* Transition: '<S10>:64' */
        /* Transition: '<S10>:65' */
        for (i = 0; i < 26; i++)
        {
            VaGRAR_i_MSSActions_actv[(i)] = (float32)c[i];
        }

        /* Transition: '<S10>:66' */
    }
    else
    {
        /* Transition: '<S10>:61' */
    }

    /* Transition: '<S10>:45' */
    while ((for_cycle_index <= KeGRAR_Cnt_NumberOfFaultTypes) &&
            rtb_RelationalOperator1)
    {
        /* Transition: '<S10>:29' */
        if (rtb_TmpSignalConversionAtSFunctionInpo_0[((sint32)for_cycle_index) -
            1])
        {
            /* Transition: '<S10>:32' */
            /* Transition: '<S10>:34' */
            VaGRAR_i_MSSActions_actv[0] = 0.0F;
            VaGRAR_i_MSSActions_actv[((sint32)KaGRAR_i_MSSBEV_ActionForFault
                [((sint32)for_cycle_index) - 1]) - 1] = 1.0F;

            /* Transition: '<S10>:35' */
        }
        else
        {
            /* Transition: '<S10>:30' */
        }

        /* Transition: '<S10>:13' */
        for_cycle_index++;

        /* Transition: '<S10>:19' */
        /* Transition: '<S10>:17' */
        /* Transition: '<S10>:18' */
    }

    /* Chart: '<S9>/Determine_active_EOM_specs2' incorporates:
     *  Constant: '<S38>/Calib'
     *  Constant: '<S39>/Calib'
     *  Constant: '<S40>/Calib'
     *  Constant: '<S41>/Calib'
     *  Constant: '<S42>/Calib'
     *  Constant: '<S43>/Calib'
     *  Constant: '<S44>/Calib'
     *  Constant: '<S45>/Calib'
     *  Constant: '<S46>/Calib'
     *  Constant: '<S48>/Calib'
     *  Constant: '<S49>/Calib'
     *  Constant: '<S50>/Calib'
     *  Constant: '<S51>/Calib'
     *  Constant: '<S52>/Calib'
     *  Constant: '<S53>/Calib'
     *  Constant: '<S54>/Calib'
     *  Constant: '<S55>/Calib'
     *  Constant: '<S56>/Calib'
     *  Constant: '<S57>/Calib'
     *  Constant: '<S59>/Calib'
     *  Constant: '<S60>/Calib'
     *  Constant: '<S61>/Calib'
     *  Constant: '<S62>/Calib'
     *  Constant: '<S63>/Calib'
     *  Constant: '<S64>/Calib'
     *  Constant: '<S65>/Calib'
     *  Constant: '<S66>/Calib'
     *  Constant: '<S67>/Calib'
     *  Constant: '<S68>/Calib'
     *  Constant: '<S70>/Calib'
     *  Constant: '<S71>/Calib'
     *  Constant: '<S72>/Calib'
     *  Constant: '<S73>/Calib'
     *  Constant: '<S74>/Calib'
     *  Constant: '<S75>/Calib'
     *  Constant: '<S76>/Calib'
     *  Constant: '<S77>/Calib'
     *  Constant: '<S78>/Calib'
     *  Constant: '<S79>/Calib'
     *  Constant: '<S81>/Calib'
     *  Constant: '<S82>/Calib'
     *  Constant: '<S83>/Calib'
     *  Constant: '<S84>/Calib'
     *  Constant: '<S85>/Calib'
     *  Constant: '<S86>/Calib'
     *  Constant: '<S87>/Calib'
     *  Constant: '<S88>/Calib'
     *  Constant: '<S89>/Calib'
     *  Constant: '<S90>/Calib'
     *  Constant: '<S92>/Calib'
     *  Constant: '<S9>/Constant28'
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    /* Transition: '<S10>:21' */
    /* Transition: '<S10>:24' */
    /* Transition: '<S10>:23' */
    /* Transition: '<S10>:5' */
    /* Gateway: GRAR_MedTEB/GRAC/Assign_Rem_Act_to_Faults/Determine_active_EOM_specs2 */
    /* During: GRAR_MedTEB/GRAC/Assign_Rem_Act_to_Faults/Determine_active_EOM_specs2 */
    /* Entry Internal: GRAR_MedTEB/GRAC/Assign_Rem_Act_to_Faults/Determine_active_EOM_specs2 */
    /* Transition: '<S11>:235' */
    /* Transition: '<S11>:320' */
    for (i = 0; i < 29; i++)
    {
        rtb_Curr_Actv_EOM_specs_superset[i] = false;
    }

    if (GRAR_ac_DW.UnitDelay4_DSTATE[0])
    {
        /* Transition: '<S11>:333' */
        /* Transition: '<S11>:252' */
        /* Transition: '<S11>:215' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:219' */
            if (KaGRAR_b_EmerOprMod_001_Specs[i - 1])
            {
                /* Transition: '<S11>:221' */
                /* Transition: '<S11>:223' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:224' */
            }
            else
            {
                /* Transition: '<S11>:222' */
            }

            /* Transition: '<S11>:225' */
            /* Transition: '<S11>:226' */
            /* Transition: '<S11>:220' */
            /* Transition: '<S11>:217' */
        }

        /* Transition: '<S11>:216' */
        /* Transition: '<S11>:218' */
        /* Transition: '<S11>:228' */
        /* Transition: '<S11>:230' */
    }
    else
    {
        /* Transition: '<S11>:250' */
        /* Transition: '<S11>:246' */
        /* Transition: '<S11>:248' */
    }

    /* Transition: '<S11>:258' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[1])
    {
        /* Transition: '<S11>:377' */
        /* Transition: '<S11>:372' */
        /* Transition: '<S11>:354' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:358' */
            if (KaGRAR_b_EmerOprMod_002_Specs[i - 1])
            {
                /* Transition: '<S11>:360' */
                /* Transition: '<S11>:362' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:363' */
            }
            else
            {
                /* Transition: '<S11>:361' */
            }

            /* Transition: '<S11>:364' */
            /* Transition: '<S11>:365' */
            /* Transition: '<S11>:359' */
            /* Transition: '<S11>:356' */
        }

        /* Transition: '<S11>:355' */
        /* Transition: '<S11>:357' */
        /* Transition: '<S11>:366' */
        /* Transition: '<S11>:368' */
    }
    else
    {
        /* Transition: '<S11>:370' */
        /* Transition: '<S11>:373' */
        /* Transition: '<S11>:376' */
    }

    /* Transition: '<S11>:425' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[2])
    {
        /* Transition: '<S11>:380' */
        /* Transition: '<S11>:388' */
        /* Transition: '<S11>:406' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:410' */
            if (KaGRAR_b_EmerOprMod_003_Specs[i - 1])
            {
                /* Transition: '<S11>:412' */
                /* Transition: '<S11>:414' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:415' */
            }
            else
            {
                /* Transition: '<S11>:413' */
            }

            /* Transition: '<S11>:416' */
            /* Transition: '<S11>:417' */
            /* Transition: '<S11>:411' */
            /* Transition: '<S11>:408' */
        }

        /* Transition: '<S11>:407' */
        /* Transition: '<S11>:409' */
        /* Transition: '<S11>:418' */
        /* Transition: '<S11>:420' */
    }
    else
    {
        /* Transition: '<S11>:421' */
        /* Transition: '<S11>:422' */
        /* Transition: '<S11>:382' */
    }

    /* Transition: '<S11>:375' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[3])
    {
        /* Transition: '<S11>:522' */
        /* Transition: '<S11>:464' */
        /* Transition: '<S11>:446' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:450' */
            if (KaGRAR_b_EmerOprMod_004_Specs[i - 1])
            {
                /* Transition: '<S11>:452' */
                /* Transition: '<S11>:454' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:455' */
            }
            else
            {
                /* Transition: '<S11>:453' */
            }

            /* Transition: '<S11>:456' */
            /* Transition: '<S11>:457' */
            /* Transition: '<S11>:451' */
            /* Transition: '<S11>:448' */
        }

        /* Transition: '<S11>:447' */
        /* Transition: '<S11>:449' */
        /* Transition: '<S11>:458' */
        /* Transition: '<S11>:460' */
    }
    else
    {
        /* Transition: '<S11>:462' */
        /* Transition: '<S11>:465' */
        /* Transition: '<S11>:468' */
    }

    /* Transition: '<S11>:467' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[4])
    {
        /* Transition: '<S11>:478' */
        /* Transition: '<S11>:486' */
        /* Transition: '<S11>:504' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:508' */
            if (KaGRAR_b_EmerOprMod_005_Specs[i - 1])
            {
                /* Transition: '<S11>:510' */
                /* Transition: '<S11>:512' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:513' */
            }
            else
            {
                /* Transition: '<S11>:511' */
            }

            /* Transition: '<S11>:514' */
            /* Transition: '<S11>:515' */
            /* Transition: '<S11>:509' */
            /* Transition: '<S11>:506' */
        }

        /* Transition: '<S11>:505' */
        /* Transition: '<S11>:507' */
        /* Transition: '<S11>:516' */
        /* Transition: '<S11>:518' */
    }
    else
    {
        /* Transition: '<S11>:519' */
        /* Transition: '<S11>:520' */
        /* Transition: '<S11>:480' */
    }

    /* Transition: '<S11>:524' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[5])
    {
        /* Transition: '<S11>:469' */
        /* Transition: '<S11>:474' */
        /* Transition: '<S11>:542' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:546' */
            if (KaGRAR_b_EmerOprMod_006_Specs[i - 1])
            {
                /* Transition: '<S11>:548' */
                /* Transition: '<S11>:550' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:551' */
            }
            else
            {
                /* Transition: '<S11>:549' */
            }

            /* Transition: '<S11>:552' */
            /* Transition: '<S11>:553' */
            /* Transition: '<S11>:547' */
            /* Transition: '<S11>:544' */
        }

        /* Transition: '<S11>:543' */
        /* Transition: '<S11>:545' */
        /* Transition: '<S11>:554' */
        /* Transition: '<S11>:556' */
    }
    else
    {
        /* Transition: '<S11>:557' */
        /* Transition: '<S11>:558' */
        /* Transition: '<S11>:476' */
    }

    /* Transition: '<S11>:830' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[6])
    {
        /* Transition: '<S11>:657' */
        /* Transition: '<S11>:598' */
        /* Transition: '<S11>:580' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:584' */
            if (KaGRAR_b_EmerOprMod_007_Specs[i - 1])
            {
                /* Transition: '<S11>:586' */
                /* Transition: '<S11>:588' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:589' */
            }
            else
            {
                /* Transition: '<S11>:587' */
            }

            /* Transition: '<S11>:590' */
            /* Transition: '<S11>:591' */
            /* Transition: '<S11>:585' */
            /* Transition: '<S11>:582' */
        }

        /* Transition: '<S11>:581' */
        /* Transition: '<S11>:583' */
        /* Transition: '<S11>:592' */
        /* Transition: '<S11>:594' */
    }
    else
    {
        /* Transition: '<S11>:596' */
        /* Transition: '<S11>:599' */
        /* Transition: '<S11>:602' */
    }

    /* Transition: '<S11>:601' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[7])
    {
        /* Transition: '<S11>:612' */
        /* Transition: '<S11>:620' */
        /* Transition: '<S11>:638' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:642' */
            if (KaGRAR_b_EmerOprMod_008_Specs[i - 1])
            {
                /* Transition: '<S11>:644' */
                /* Transition: '<S11>:646' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:647' */
            }
            else
            {
                /* Transition: '<S11>:645' */
            }

            /* Transition: '<S11>:648' */
            /* Transition: '<S11>:649' */
            /* Transition: '<S11>:643' */
            /* Transition: '<S11>:640' */
        }

        /* Transition: '<S11>:639' */
        /* Transition: '<S11>:641' */
        /* Transition: '<S11>:650' */
        /* Transition: '<S11>:652' */
    }
    else
    {
        /* Transition: '<S11>:653' */
        /* Transition: '<S11>:654' */
        /* Transition: '<S11>:614' */
    }

    /* Transition: '<S11>:659' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[8])
    {
        /* Transition: '<S11>:603' */
        /* Transition: '<S11>:608' */
        /* Transition: '<S11>:677' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:681' */
            if (KaGRAR_b_EmerOprMod_009_Specs[i - 1])
            {
                /* Transition: '<S11>:683' */
                /* Transition: '<S11>:685' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:686' */
            }
            else
            {
                /* Transition: '<S11>:684' */
            }

            /* Transition: '<S11>:687' */
            /* Transition: '<S11>:688' */
            /* Transition: '<S11>:682' */
            /* Transition: '<S11>:679' */
        }

        /* Transition: '<S11>:678' */
        /* Transition: '<S11>:680' */
        /* Transition: '<S11>:689' */
        /* Transition: '<S11>:691' */
    }
    else
    {
        /* Transition: '<S11>:692' */
        /* Transition: '<S11>:693' */
        /* Transition: '<S11>:610' */
    }

    /* Transition: '<S11>:656' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[9])
    {
        /* Transition: '<S11>:794' */
        /* Transition: '<S11>:734' */
        /* Transition: '<S11>:716' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:720' */
            if (KaGRAR_b_EmerOprMod_010_Specs[i - 1])
            {
                /* Transition: '<S11>:722' */
                /* Transition: '<S11>:724' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:725' */
            }
            else
            {
                /* Transition: '<S11>:723' */
            }

            /* Transition: '<S11>:726' */
            /* Transition: '<S11>:727' */
            /* Transition: '<S11>:721' */
            /* Transition: '<S11>:718' */
        }

        /* Transition: '<S11>:717' */
        /* Transition: '<S11>:719' */
        /* Transition: '<S11>:728' */
        /* Transition: '<S11>:730' */
    }
    else
    {
        /* Transition: '<S11>:731' */
        /* Transition: '<S11>:735' */
        /* Transition: '<S11>:741' */
    }

    /* Transition: '<S11>:732' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[10])
    {
        /* Transition: '<S11>:746' */
        /* Transition: '<S11>:753' */
        /* Transition: '<S11>:774' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:778' */
            if (KaGRAR_b_EmerOprMod_011_Specs[i - 1])
            {
                /* Transition: '<S11>:780' */
                /* Transition: '<S11>:782' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:783' */
            }
            else
            {
                /* Transition: '<S11>:781' */
            }

            /* Transition: '<S11>:784' */
            /* Transition: '<S11>:785' */
            /* Transition: '<S11>:779' */
            /* Transition: '<S11>:776' */
        }

        /* Transition: '<S11>:775' */
        /* Transition: '<S11>:777' */
        /* Transition: '<S11>:786' */
        /* Transition: '<S11>:788' */
    }
    else
    {
        /* Transition: '<S11>:789' */
        /* Transition: '<S11>:790' */
        /* Transition: '<S11>:740' */
    }

    /* Transition: '<S11>:792' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[11])
    {
        /* Transition: '<S11>:738' */
        /* Transition: '<S11>:745' */
        /* Transition: '<S11>:812' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:816' */
            if (KaGRAR_b_EmerOprMod_012_Specs[i - 1])
            {
                /* Transition: '<S11>:818' */
                /* Transition: '<S11>:820' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:821' */
            }
            else
            {
                /* Transition: '<S11>:819' */
            }

            /* Transition: '<S11>:822' */
            /* Transition: '<S11>:823' */
            /* Transition: '<S11>:817' */
            /* Transition: '<S11>:814' */
        }

        /* Transition: '<S11>:813' */
        /* Transition: '<S11>:815' */
        /* Transition: '<S11>:824' */
        /* Transition: '<S11>:826' */
    }
    else
    {
        /* Transition: '<S11>:828' */
        /* Transition: '<S11>:827' */
        /* Transition: '<S11>:750' */
    }

    /* Transition: '<S11>:831' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[12])
    {
        /* Transition: '<S11>:841' */
        /* Transition: '<S11>:849' */
        /* Transition: '<S11>:867' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:871' */
            if (KaGRAR_b_EmerOprMod_013_Specs[i - 1])
            {
                /* Transition: '<S11>:873' */
                /* Transition: '<S11>:875' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:876' */
            }
            else
            {
                /* Transition: '<S11>:874' */
            }

            /* Transition: '<S11>:877' */
            /* Transition: '<S11>:878' */
            /* Transition: '<S11>:872' */
            /* Transition: '<S11>:869' */
        }

        /* Transition: '<S11>:868' */
        /* Transition: '<S11>:870' */
        /* Transition: '<S11>:879' */
        /* Transition: '<S11>:881' */
    }
    else
    {
        /* Transition: '<S11>:882' */
        /* Transition: '<S11>:883' */
        /* Transition: '<S11>:843' */
    }

    /* Transition: '<S11>:886' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[13])
    {
        /* Transition: '<S11>:832' */
        /* Transition: '<S11>:837' */
        /* Transition: '<S11>:904' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:908' */
            if (KaGRAR_b_EmerOprMod_014_Specs[i - 1])
            {
                /* Transition: '<S11>:910' */
                /* Transition: '<S11>:912' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:913' */
            }
            else
            {
                /* Transition: '<S11>:911' */
            }

            /* Transition: '<S11>:914' */
            /* Transition: '<S11>:915' */
            /* Transition: '<S11>:909' */
            /* Transition: '<S11>:906' */
        }

        /* Transition: '<S11>:905' */
        /* Transition: '<S11>:907' */
        /* Transition: '<S11>:916' */
        /* Transition: '<S11>:918' */
    }
    else
    {
        /* Transition: '<S11>:919' */
        /* Transition: '<S11>:920' */
        /* Transition: '<S11>:839' */
    }

    /* Transition: '<S11>:885' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[14])
    {
        /* Transition: '<S11>:1291' */
        /* Transition: '<S11>:1231' */
        /* Transition: '<S11>:1213' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:1217' */
            if (KaGRAR_b_EmerOprMod_015_Specs[i - 1])
            {
                /* Transition: '<S11>:1219' */
                /* Transition: '<S11>:1221' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:1222' */
            }
            else
            {
                /* Transition: '<S11>:1220' */
            }

            /* Transition: '<S11>:1223' */
            /* Transition: '<S11>:1224' */
            /* Transition: '<S11>:1218' */
            /* Transition: '<S11>:1215' */
        }

        /* Transition: '<S11>:1214' */
        /* Transition: '<S11>:1216' */
        /* Transition: '<S11>:1225' */
        /* Transition: '<S11>:1227' */
    }
    else
    {
        /* Transition: '<S11>:1228' */
        /* Transition: '<S11>:1232' */
        /* Transition: '<S11>:1238' */
    }

    /* Transition: '<S11>:1229' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[15])
    {
        /* Transition: '<S11>:1243' */
        /* Transition: '<S11>:1250' */
        /* Transition: '<S11>:1271' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:1275' */
            if (KaGRAR_b_EmerOprMod_016_Specs[i - 1])
            {
                /* Transition: '<S11>:1277' */
                /* Transition: '<S11>:1279' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:1280' */
            }
            else
            {
                /* Transition: '<S11>:1278' */
            }

            /* Transition: '<S11>:1281' */
            /* Transition: '<S11>:1282' */
            /* Transition: '<S11>:1276' */
            /* Transition: '<S11>:1273' */
        }

        /* Transition: '<S11>:1272' */
        /* Transition: '<S11>:1274' */
        /* Transition: '<S11>:1283' */
        /* Transition: '<S11>:1285' */
    }
    else
    {
        /* Transition: '<S11>:1286' */
        /* Transition: '<S11>:1287' */
        /* Transition: '<S11>:1237' */
    }

    /* Transition: '<S11>:1289' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[16])
    {
        /* Transition: '<S11>:1235' */
        /* Transition: '<S11>:1242' */
        /* Transition: '<S11>:1309' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:1313' */
            if (KaGRAR_b_EmerOprMod_017_Specs[i - 1])
            {
                /* Transition: '<S11>:1315' */
                /* Transition: '<S11>:1317' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:1318' */
            }
            else
            {
                /* Transition: '<S11>:1316' */
            }

            /* Transition: '<S11>:1319' */
            /* Transition: '<S11>:1320' */
            /* Transition: '<S11>:1314' */
            /* Transition: '<S11>:1311' */
        }

        /* Transition: '<S11>:1310' */
        /* Transition: '<S11>:1312' */
        /* Transition: '<S11>:1321' */
        /* Transition: '<S11>:1323' */
    }
    else
    {
        /* Transition: '<S11>:1325' */
        /* Transition: '<S11>:1324' */
        /* Transition: '<S11>:1247' */
    }

    /* Transition: '<S11>:1192' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[17])
    {
        /* Transition: '<S11>:1105' */
        /* Transition: '<S11>:1014' */
        /* Transition: '<S11>:995' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:999' */
            if (KaGRAR_b_EmerOprMod_018_Specs[i - 1])
            {
                /* Transition: '<S11>:1001' */
                /* Transition: '<S11>:1003' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:1004' */
            }
            else
            {
                /* Transition: '<S11>:1002' */
            }

            /* Transition: '<S11>:1005' */
            /* Transition: '<S11>:1006' */
            /* Transition: '<S11>:1000' */
            /* Transition: '<S11>:997' */
        }

        /* Transition: '<S11>:996' */
        /* Transition: '<S11>:998' */
        /* Transition: '<S11>:1007' */
        /* Transition: '<S11>:1009' */
    }
    else
    {
        /* Transition: '<S11>:1015' */
        /* Transition: '<S11>:975' */
        /* Transition: '<S11>:977' */
    }

    /* Transition: '<S11>:976' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[18])
    {
        /* Transition: '<S11>:922' */
        /* Transition: '<S11>:925' */
        /* Transition: '<S11>:950' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:954' */
            if (KaGRAR_b_EmerOprMod_019_Specs[i - 1])
            {
                /* Transition: '<S11>:956' */
                /* Transition: '<S11>:958' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:959' */
            }
            else
            {
                /* Transition: '<S11>:957' */
            }

            /* Transition: '<S11>:960' */
            /* Transition: '<S11>:961' */
            /* Transition: '<S11>:955' */
            /* Transition: '<S11>:952' */
        }

        /* Transition: '<S11>:951' */
        /* Transition: '<S11>:953' */
        /* Transition: '<S11>:962' */
        /* Transition: '<S11>:964' */
    }
    else
    {
        /* Transition: '<S11>:931' */
        /* Transition: '<S11>:932' */
        /* Transition: '<S11>:927' */
    }

    /* Transition: '<S11>:1107' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[19])
    {
        /* Transition: '<S11>:1011' */
        /* Transition: '<S11>:970' */
        /* Transition: '<S11>:1131' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:1135' */
            if (KaGRAR_b_EmerOprMod_020_Specs[i - 1])
            {
                /* Transition: '<S11>:1137' */
                /* Transition: '<S11>:1139' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:1140' */
            }
            else
            {
                /* Transition: '<S11>:1138' */
            }

            /* Transition: '<S11>:1141' */
            /* Transition: '<S11>:1142' */
            /* Transition: '<S11>:1136' */
            /* Transition: '<S11>:1133' */
        }

        /* Transition: '<S11>:1132' */
        /* Transition: '<S11>:1134' */
        /* Transition: '<S11>:1143' */
        /* Transition: '<S11>:1145' */
    }
    else
    {
        /* Transition: '<S11>:1113' */
        /* Transition: '<S11>:1112' */
        /* Transition: '<S11>:973' */
    }

    /* Transition: '<S11>:1106' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[20])
    {
        /* Transition: '<S11>:1066' */
        /* Transition: '<S11>:1182' */
        /* Transition: '<S11>:1164' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:1168' */
            if (KaGRAR_b_EmerOprMod_021_Specs[i - 1])
            {
                /* Transition: '<S11>:1170' */
                /* Transition: '<S11>:1172' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:1173' */
            }
            else
            {
                /* Transition: '<S11>:1171' */
            }

            /* Transition: '<S11>:1174' */
            /* Transition: '<S11>:1175' */
            /* Transition: '<S11>:1169' */
            /* Transition: '<S11>:1166' */
        }

        /* Transition: '<S11>:1165' */
        /* Transition: '<S11>:1167' */
        /* Transition: '<S11>:1176' */
        /* Transition: '<S11>:1178' */
    }
    else
    {
        /* Transition: '<S11>:1179' */
        /* Transition: '<S11>:1183' */
        /* Transition: '<S11>:1187' */
    }

    /* Transition: '<S11>:1180' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[21])
    {
        /* Transition: '<S11>:1024' */
        /* Transition: '<S11>:1027' */
        /* Transition: '<S11>:1049' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:1053' */
            if (KaGRAR_b_EmerOprMod_022_Specs[i - 1])
            {
                /* Transition: '<S11>:1055' */
                /* Transition: '<S11>:1057' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:1058' */
            }
            else
            {
                /* Transition: '<S11>:1056' */
            }

            /* Transition: '<S11>:1059' */
            /* Transition: '<S11>:1060' */
            /* Transition: '<S11>:1054' */
            /* Transition: '<S11>:1051' */
        }

        /* Transition: '<S11>:1050' */
        /* Transition: '<S11>:1052' */
        /* Transition: '<S11>:1061' */
        /* Transition: '<S11>:1063' */
    }
    else
    {
        /* Transition: '<S11>:1068' */
        /* Transition: '<S11>:1067' */
        /* Transition: '<S11>:1190' */
    }

    /* Transition: '<S11>:1065' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[22])
    {
        /* Transition: '<S11>:1185' */
        /* Transition: '<S11>:1021' */
        /* Transition: '<S11>:1087' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:1091' */
            if (KaGRAR_b_EmerOprMod_023_Specs[i - 1])
            {
                /* Transition: '<S11>:1093' */
                /* Transition: '<S11>:1095' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:1096' */
            }
            else
            {
                /* Transition: '<S11>:1094' */
            }

            /* Transition: '<S11>:1097' */
            /* Transition: '<S11>:1098' */
            /* Transition: '<S11>:1092' */
            /* Transition: '<S11>:1089' */
        }

        /* Transition: '<S11>:1088' */
        /* Transition: '<S11>:1090' */
        /* Transition: '<S11>:1099' */
        /* Transition: '<S11>:1101' */
    }
    else
    {
        /* Transition: '<S11>:1102' */
        /* Transition: '<S11>:1069' */
        /* Transition: '<S11>:1022' */
    }

    /* Transition: '<S11>:2318' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[23])
    {
        /* Transition: '<S11>:1336' */
        /* Transition: '<S11>:1344' */
        /* Transition: '<S11>:1362' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:1366' */
            if (KaGRAR_b_EmerOprMod_024_Specs[i - 1])
            {
                /* Transition: '<S11>:1368' */
                /* Transition: '<S11>:1370' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:1371' */
            }
            else
            {
                /* Transition: '<S11>:1369' */
            }

            /* Transition: '<S11>:1372' */
            /* Transition: '<S11>:1373' */
            /* Transition: '<S11>:1367' */
            /* Transition: '<S11>:1364' */
        }

        /* Transition: '<S11>:1363' */
        /* Transition: '<S11>:1365' */
        /* Transition: '<S11>:1374' */
        /* Transition: '<S11>:1376' */
    }
    else
    {
        /* Transition: '<S11>:1377' */
        /* Transition: '<S11>:1378' */
        /* Transition: '<S11>:1338' */
    }

    /* Transition: '<S11>:1381' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[24])
    {
        /* Transition: '<S11>:1327' */
        /* Transition: '<S11>:1332' */
        /* Transition: '<S11>:1399' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:1403' */
            if (KaGRAR_b_EmerOprMod_025_Specs[i - 1])
            {
                /* Transition: '<S11>:1405' */
                /* Transition: '<S11>:1407' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:1408' */
            }
            else
            {
                /* Transition: '<S11>:1406' */
            }

            /* Transition: '<S11>:1409' */
            /* Transition: '<S11>:1410' */
            /* Transition: '<S11>:1404' */
            /* Transition: '<S11>:1401' */
        }

        /* Transition: '<S11>:1400' */
        /* Transition: '<S11>:1402' */
        /* Transition: '<S11>:1411' */
        /* Transition: '<S11>:1413' */
    }
    else
    {
        /* Transition: '<S11>:1414' */
        /* Transition: '<S11>:1415' */
        /* Transition: '<S11>:1334' */
    }

    /* Transition: '<S11>:1380' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[25])
    {
        /* Transition: '<S11>:2282' */
        /* Transition: '<S11>:2222' */
        /* Transition: '<S11>:2204' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:2208' */
            if (KaGRAR_b_EmerOprMod_026_Specs[i - 1])
            {
                /* Transition: '<S11>:2210' */
                /* Transition: '<S11>:2212' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:2213' */
            }
            else
            {
                /* Transition: '<S11>:2211' */
            }

            /* Transition: '<S11>:2214' */
            /* Transition: '<S11>:2215' */
            /* Transition: '<S11>:2209' */
            /* Transition: '<S11>:2206' */
        }

        /* Transition: '<S11>:2205' */
        /* Transition: '<S11>:2207' */
        /* Transition: '<S11>:2216' */
        /* Transition: '<S11>:2218' */
    }
    else
    {
        /* Transition: '<S11>:2219' */
        /* Transition: '<S11>:2223' */
        /* Transition: '<S11>:2229' */
    }

    /* Transition: '<S11>:2220' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[26])
    {
        /* Transition: '<S11>:2234' */
        /* Transition: '<S11>:2241' */
        /* Transition: '<S11>:2262' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:2266' */
            if (KaGRAR_b_EmerOprMod_027_Specs[i - 1])
            {
                /* Transition: '<S11>:2268' */
                /* Transition: '<S11>:2270' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:2271' */
            }
            else
            {
                /* Transition: '<S11>:2269' */
            }

            /* Transition: '<S11>:2272' */
            /* Transition: '<S11>:2273' */
            /* Transition: '<S11>:2267' */
            /* Transition: '<S11>:2264' */
        }

        /* Transition: '<S11>:2263' */
        /* Transition: '<S11>:2265' */
        /* Transition: '<S11>:2274' */
        /* Transition: '<S11>:2276' */
    }
    else
    {
        /* Transition: '<S11>:2277' */
        /* Transition: '<S11>:2278' */
        /* Transition: '<S11>:2228' */
    }

    /* Transition: '<S11>:2280' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[27])
    {
        /* Transition: '<S11>:2226' */
        /* Transition: '<S11>:2233' */
        /* Transition: '<S11>:2300' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:2304' */
            if (KaGRAR_b_EmerOprMod_028_Specs[i - 1])
            {
                /* Transition: '<S11>:2306' */
                /* Transition: '<S11>:2308' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:2309' */
            }
            else
            {
                /* Transition: '<S11>:2307' */
            }

            /* Transition: '<S11>:2310' */
            /* Transition: '<S11>:2311' */
            /* Transition: '<S11>:2305' */
            /* Transition: '<S11>:2302' */
        }

        /* Transition: '<S11>:2301' */
        /* Transition: '<S11>:2303' */
        /* Transition: '<S11>:2312' */
        /* Transition: '<S11>:2314' */
    }
    else
    {
        /* Transition: '<S11>:2316' */
        /* Transition: '<S11>:2315' */
        /* Transition: '<S11>:2238' */
    }

    /* Transition: '<S11>:1944' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[28])
    {
        /* Transition: '<S11>:1857' */
        /* Transition: '<S11>:1509' */
        /* Transition: '<S11>:1490' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:1494' */
            if (KaGRAR_b_EmerOprMod_029_Specs[i - 1])
            {
                /* Transition: '<S11>:1496' */
                /* Transition: '<S11>:1498' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:1499' */
            }
            else
            {
                /* Transition: '<S11>:1497' */
            }

            /* Transition: '<S11>:1500' */
            /* Transition: '<S11>:1501' */
            /* Transition: '<S11>:1495' */
            /* Transition: '<S11>:1492' */
        }

        /* Transition: '<S11>:1491' */
        /* Transition: '<S11>:1493' */
        /* Transition: '<S11>:1502' */
        /* Transition: '<S11>:1504' */
    }
    else
    {
        /* Transition: '<S11>:1510' */
        /* Transition: '<S11>:1470' */
        /* Transition: '<S11>:1472' */
    }

    /* Transition: '<S11>:1471' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[29])
    {
        /* Transition: '<S11>:1417' */
        /* Transition: '<S11>:1420' */
        /* Transition: '<S11>:1445' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:1449' */
            if (KaGRAR_b_EmerOprMod_030_Specs[i - 1])
            {
                /* Transition: '<S11>:1451' */
                /* Transition: '<S11>:1453' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:1454' */
            }
            else
            {
                /* Transition: '<S11>:1452' */
            }

            /* Transition: '<S11>:1455' */
            /* Transition: '<S11>:1456' */
            /* Transition: '<S11>:1450' */
            /* Transition: '<S11>:1447' */
        }

        /* Transition: '<S11>:1446' */
        /* Transition: '<S11>:1448' */
        /* Transition: '<S11>:1457' */
        /* Transition: '<S11>:1459' */
    }
    else
    {
        /* Transition: '<S11>:1426' */
        /* Transition: '<S11>:1427' */
        /* Transition: '<S11>:1422' */
    }

    /* Transition: '<S11>:1859' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[30])
    {
        /* Transition: '<S11>:1506' */
        /* Transition: '<S11>:1465' */
        /* Transition: '<S11>:1883' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:1887' */
            if (KaGRAR_b_EmerOprMod_031_Specs[i - 1])
            {
                /* Transition: '<S11>:1889' */
                /* Transition: '<S11>:1891' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:1892' */
            }
            else
            {
                /* Transition: '<S11>:1890' */
            }

            /* Transition: '<S11>:1893' */
            /* Transition: '<S11>:1894' */
            /* Transition: '<S11>:1888' */
            /* Transition: '<S11>:1885' */
        }

        /* Transition: '<S11>:1884' */
        /* Transition: '<S11>:1886' */
        /* Transition: '<S11>:1895' */
        /* Transition: '<S11>:1897' */
    }
    else
    {
        /* Transition: '<S11>:1865' */
        /* Transition: '<S11>:1864' */
        /* Transition: '<S11>:1468' */
    }

    /* Transition: '<S11>:1858' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[31])
    {
        /* Transition: '<S11>:1818' */
        /* Transition: '<S11>:1934' */
        /* Transition: '<S11>:1916' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:1920' */
            if (KaGRAR_b_EmerOprMod_032_Specs[i - 1])
            {
                /* Transition: '<S11>:1922' */
                /* Transition: '<S11>:1924' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:1925' */
            }
            else
            {
                /* Transition: '<S11>:1923' */
            }

            /* Transition: '<S11>:1926' */
            /* Transition: '<S11>:1927' */
            /* Transition: '<S11>:1921' */
            /* Transition: '<S11>:1918' */
        }

        /* Transition: '<S11>:1917' */
        /* Transition: '<S11>:1919' */
        /* Transition: '<S11>:1928' */
        /* Transition: '<S11>:1930' */
    }
    else
    {
        /* Transition: '<S11>:1931' */
        /* Transition: '<S11>:1935' */
        /* Transition: '<S11>:1939' */
    }

    /* Transition: '<S11>:1932' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[32])
    {
        /* Transition: '<S11>:1776' */
        /* Transition: '<S11>:1779' */
        /* Transition: '<S11>:1801' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:1805' */
            if (KaGRAR_b_EmerOprMod_033_Specs[i - 1])
            {
                /* Transition: '<S11>:1807' */
                /* Transition: '<S11>:1809' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:1810' */
            }
            else
            {
                /* Transition: '<S11>:1808' */
            }

            /* Transition: '<S11>:1811' */
            /* Transition: '<S11>:1812' */
            /* Transition: '<S11>:1806' */
            /* Transition: '<S11>:1803' */
        }

        /* Transition: '<S11>:1802' */
        /* Transition: '<S11>:1804' */
        /* Transition: '<S11>:1813' */
        /* Transition: '<S11>:1815' */
    }
    else
    {
        /* Transition: '<S11>:1820' */
        /* Transition: '<S11>:1819' */
        /* Transition: '<S11>:1942' */
    }

    /* Transition: '<S11>:1817' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[33])
    {
        /* Transition: '<S11>:1937' */
        /* Transition: '<S11>:1773' */
        /* Transition: '<S11>:1839' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:1843' */
            if (KaGRAR_b_EmerOprMod_034_Specs[i - 1])
            {
                /* Transition: '<S11>:1845' */
                /* Transition: '<S11>:1847' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:1848' */
            }
            else
            {
                /* Transition: '<S11>:1846' */
            }

            /* Transition: '<S11>:1849' */
            /* Transition: '<S11>:1850' */
            /* Transition: '<S11>:1844' */
            /* Transition: '<S11>:1841' */
        }

        /* Transition: '<S11>:1840' */
        /* Transition: '<S11>:1842' */
        /* Transition: '<S11>:1851' */
        /* Transition: '<S11>:1853' */
    }
    else
    {
        /* Transition: '<S11>:1854' */
        /* Transition: '<S11>:1821' */
        /* Transition: '<S11>:1774' */
    }

    /* Transition: '<S11>:2010' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[34])
    {
        /* Transition: '<S11>:2020' */
        /* Transition: '<S11>:2015' */
        /* Transition: '<S11>:2041' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:2045' */
            if (KaGRAR_b_EmerOprMod_035_Specs[i - 1])
            {
                /* Transition: '<S11>:2047' */
                /* Transition: '<S11>:2049' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:2050' */
            }
            else
            {
                /* Transition: '<S11>:2048' */
            }

            /* Transition: '<S11>:2051' */
            /* Transition: '<S11>:2052' */
            /* Transition: '<S11>:2046' */
            /* Transition: '<S11>:2043' */
        }

        /* Transition: '<S11>:2042' */
        /* Transition: '<S11>:2044' */
        /* Transition: '<S11>:2053' */
        /* Transition: '<S11>:2055' */
    }
    else
    {
        /* Transition: '<S11>:2056' */
        /* Transition: '<S11>:2023' */
        /* Transition: '<S11>:2016' */
    }

    /* Transition: '<S11>:2058' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[35])
    {
        /* Transition: '<S11>:2008' */
        /* Transition: '<S11>:2012' */
        /* Transition: '<S11>:2077' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:2081' */
            if (KaGRAR_b_EmerOprMod_036_Specs[i - 1])
            {
                /* Transition: '<S11>:2083' */
                /* Transition: '<S11>:2085' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:2086' */
            }
            else
            {
                /* Transition: '<S11>:2084' */
            }

            /* Transition: '<S11>:2087' */
            /* Transition: '<S11>:2088' */
            /* Transition: '<S11>:2082' */
            /* Transition: '<S11>:2079' */
        }

        /* Transition: '<S11>:2078' */
        /* Transition: '<S11>:2080' */
        /* Transition: '<S11>:2089' */
        /* Transition: '<S11>:2091' */
    }
    else
    {
        /* Transition: '<S11>:2096' */
        /* Transition: '<S11>:2093' */
        /* Transition: '<S11>:2007' */
    }

    /* Transition: '<S11>:2057' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[36])
    {
        /* Transition: '<S11>:1693' */
        /* Transition: '<S11>:1634' */
        /* Transition: '<S11>:1617' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:1621' */
            if (KaGRAR_b_EmerOprMod_037_Specs[i - 1])
            {
                /* Transition: '<S11>:1623' */
                /* Transition: '<S11>:1625' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:1626' */
            }
            else
            {
                /* Transition: '<S11>:1624' */
            }

            /* Transition: '<S11>:1627' */
            /* Transition: '<S11>:1628' */
            /* Transition: '<S11>:1622' */
            /* Transition: '<S11>:1619' */
        }

        /* Transition: '<S11>:1618' */
        /* Transition: '<S11>:1620' */
        /* Transition: '<S11>:1629' */
        /* Transition: '<S11>:1631' */
    }
    else
    {
        /* Transition: '<S11>:1599' */
        /* Transition: '<S11>:1632' */
        /* Transition: '<S11>:1645' */
    }

    /* Transition: '<S11>:1598' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[37])
    {
        /* Transition: '<S11>:1641' */
        /* Transition: '<S11>:1651' */
        /* Transition: '<S11>:1675' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:1679' */
            if (KaGRAR_b_EmerOprMod_038_Specs[i - 1])
            {
                /* Transition: '<S11>:1681' */
                /* Transition: '<S11>:1683' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:1684' */
            }
            else
            {
                /* Transition: '<S11>:1682' */
            }

            /* Transition: '<S11>:1685' */
            /* Transition: '<S11>:1686' */
            /* Transition: '<S11>:1680' */
            /* Transition: '<S11>:1677' */
        }

        /* Transition: '<S11>:1676' */
        /* Transition: '<S11>:1678' */
        /* Transition: '<S11>:1687' */
        /* Transition: '<S11>:1689' */
    }
    else
    {
        /* Transition: '<S11>:1656' */
        /* Transition: '<S11>:1657' */
        /* Transition: '<S11>:1640' */
    }

    /* Transition: '<S11>:1690' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[38])
    {
        /* Transition: '<S11>:1644' */
        /* Transition: '<S11>:1639' */
        /* Transition: '<S11>:1712' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:1716' */
            if (KaGRAR_b_EmerOprMod_039_Specs[i - 1])
            {
                /* Transition: '<S11>:1718' */
                /* Transition: '<S11>:1720' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:1721' */
            }
            else
            {
                /* Transition: '<S11>:1719' */
            }

            /* Transition: '<S11>:1722' */
            /* Transition: '<S11>:1723' */
            /* Transition: '<S11>:1717' */
            /* Transition: '<S11>:1714' */
        }

        /* Transition: '<S11>:1713' */
        /* Transition: '<S11>:1715' */
        /* Transition: '<S11>:1724' */
        /* Transition: '<S11>:1726' */
    }
    else
    {
        /* Transition: '<S11>:1727' */
        /* Transition: '<S11>:1694' */
        /* Transition: '<S11>:1655' */
    }

    /* Transition: '<S11>:1589' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[39])
    {
        /* Transition: '<S11>:1763' */
        /* Transition: '<S11>:1951' */
        /* Transition: '<S11>:2169' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:2173' */
            if (KaGRAR_b_EmerOprMod_040_Specs[i - 1])
            {
                /* Transition: '<S11>:2175' */
                /* Transition: '<S11>:2177' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:2178' */
            }
            else
            {
                /* Transition: '<S11>:2176' */
            }

            /* Transition: '<S11>:2179' */
            /* Transition: '<S11>:2180' */
            /* Transition: '<S11>:2174' */
            /* Transition: '<S11>:2171' */
        }

        /* Transition: '<S11>:2170' */
        /* Transition: '<S11>:2172' */
        /* Transition: '<S11>:2181' */
        /* Transition: '<S11>:2183' */
    }
    else
    {
        /* Transition: '<S11>:1949' */
        /* Transition: '<S11>:2148' */
        /* Transition: '<S11>:2106' */
    }

    /* Transition: '<S11>:2149' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[40])
    {
        /* Transition: '<S11>:2092' */
        /* Transition: '<S11>:2099' */
        /* Transition: '<S11>:2130' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:2134' */
            if (KaGRAR_b_EmerOprMod_041_Specs[i - 1])
            {
                /* Transition: '<S11>:2136' */
                /* Transition: '<S11>:2138' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:2139' */
            }
            else
            {
                /* Transition: '<S11>:2137' */
            }

            /* Transition: '<S11>:2140' */
            /* Transition: '<S11>:2141' */
            /* Transition: '<S11>:2135' */
            /* Transition: '<S11>:2132' */
        }

        /* Transition: '<S11>:2131' */
        /* Transition: '<S11>:2133' */
        /* Transition: '<S11>:2142' */
        /* Transition: '<S11>:2144' */
    }
    else
    {
        /* Transition: '<S11>:2101' */
        /* Transition: '<S11>:2103' */
        /* Transition: '<S11>:2097' */
    }

    /* Transition: '<S11>:1768' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[41])
    {
        /* Transition: '<S11>:1965' */
        /* Transition: '<S11>:2110' */
        /* Transition: '<S11>:1533' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:1537' */
            if (KaGRAR_b_EmerOprMod_042_Specs[i - 1])
            {
                /* Transition: '<S11>:1539' */
                /* Transition: '<S11>:1541' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:1542' */
            }
            else
            {
                /* Transition: '<S11>:1540' */
            }

            /* Transition: '<S11>:1543' */
            /* Transition: '<S11>:1544' */
            /* Transition: '<S11>:1538' */
            /* Transition: '<S11>:1535' */
        }

        /* Transition: '<S11>:1534' */
        /* Transition: '<S11>:1536' */
        /* Transition: '<S11>:1545' */
        /* Transition: '<S11>:1547' */
    }
    else
    {
        /* Transition: '<S11>:1514' */
        /* Transition: '<S11>:1513' */
        /* Transition: '<S11>:2150' */
    }

    /* Transition: '<S11>:1765' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[42])
    {
        /* Transition: '<S11>:1999' */
        /* Transition: '<S11>:1551' */
        /* Transition: '<S11>:1571' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:1575' */
            if (KaGRAR_b_EmerOprMod_043_Specs[i - 1])
            {
                /* Transition: '<S11>:1577' */
                /* Transition: '<S11>:1579' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:1580' */
            }
            else
            {
                /* Transition: '<S11>:1578' */
            }

            /* Transition: '<S11>:1581' */
            /* Transition: '<S11>:1582' */
            /* Transition: '<S11>:1576' */
            /* Transition: '<S11>:1573' */
        }

        /* Transition: '<S11>:1572' */
        /* Transition: '<S11>:1574' */
        /* Transition: '<S11>:1583' */
        /* Transition: '<S11>:1585' */
    }
    else
    {
        /* Transition: '<S11>:1549' */
        /* Transition: '<S11>:1553' */
        /* Transition: '<S11>:1597' */
    }

    /* Transition: '<S11>:1552' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[43])
    {
        /* Transition: '<S11>:1963' */
        /* Transition: '<S11>:1956' */
        /* Transition: '<S11>:1983' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:1987' */
            if (KaGRAR_b_EmerOprMod_044_Specs[i - 1])
            {
                /* Transition: '<S11>:1989' */
                /* Transition: '<S11>:1991' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:1992' */
            }
            else
            {
                /* Transition: '<S11>:1990' */
            }

            /* Transition: '<S11>:1993' */
            /* Transition: '<S11>:1994' */
            /* Transition: '<S11>:1988' */
            /* Transition: '<S11>:1985' */
        }

        /* Transition: '<S11>:1984' */
        /* Transition: '<S11>:1986' */
        /* Transition: '<S11>:1995' */
        /* Transition: '<S11>:1997' */
    }
    else
    {
        /* Transition: '<S11>:2001' */
        /* Transition: '<S11>:2002' */
        /* Transition: '<S11>:1596' */
    }

    /* Transition: '<S11>:2003' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[44])
    {
        /* Transition: '<S11>:1594' */
        /* Transition: '<S11>:1962' */
        /* Transition: '<S11>:1746' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:1750' */
            if (KaGRAR_b_EmerOprMod_045_Specs[i - 1])
            {
                /* Transition: '<S11>:1752' */
                /* Transition: '<S11>:1754' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:1755' */
            }
            else
            {
                /* Transition: '<S11>:1753' */
            }

            /* Transition: '<S11>:1756' */
            /* Transition: '<S11>:1757' */
            /* Transition: '<S11>:1751' */
            /* Transition: '<S11>:1748' */
        }

        /* Transition: '<S11>:1747' */
        /* Transition: '<S11>:1749' */
        /* Transition: '<S11>:1758' */
        /* Transition: '<S11>:1760' */
    }
    else
    {
        /* Transition: '<S11>:1761' */
        /* Transition: '<S11>:2000' */
        /* Transition: '<S11>:1954' */
    }

    /* Transition: '<S11>:2590' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[45])
    {
        /* Transition: '<S11>:2628' */
        /* Transition: '<S11>:2637' */
        /* Transition: '<S11>:2661' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:2665' */
            if (KaGRAR_b_EmerOprMod_046_Specs[i - 1])
            {
                /* Transition: '<S11>:2667' */
                /* Transition: '<S11>:2669' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:2670' */
            }
            else
            {
                /* Transition: '<S11>:2668' */
            }

            /* Transition: '<S11>:2671' */
            /* Transition: '<S11>:2672' */
            /* Transition: '<S11>:2666' */
            /* Transition: '<S11>:2663' */
        }

        /* Transition: '<S11>:2662' */
        /* Transition: '<S11>:2664' */
        /* Transition: '<S11>:2673' */
        /* Transition: '<S11>:2675' */
    }
    else
    {
        /* Transition: '<S11>:2642' */
        /* Transition: '<S11>:2643' */
        /* Transition: '<S11>:2627' */
    }

    /* Transition: '<S11>:2676' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[46])
    {
        /* Transition: '<S11>:2630' */
        /* Transition: '<S11>:2626' */
        /* Transition: '<S11>:2696' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:2700' */
            if (KaGRAR_b_EmerOprMod_047_Specs[i - 1])
            {
                /* Transition: '<S11>:2702' */
                /* Transition: '<S11>:2704' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:2705' */
            }
            else
            {
                /* Transition: '<S11>:2703' */
            }

            /* Transition: '<S11>:2706' */
            /* Transition: '<S11>:2707' */
            /* Transition: '<S11>:2701' */
            /* Transition: '<S11>:2698' */
        }

        /* Transition: '<S11>:2697' */
        /* Transition: '<S11>:2699' */
        /* Transition: '<S11>:2708' */
        /* Transition: '<S11>:2710' */
    }
    else
    {
        /* Transition: '<S11>:2711' */
        /* Transition: '<S11>:2678' */
        /* Transition: '<S11>:2641' */
    }

    /* Transition: '<S11>:2584' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[47])
    {
        /* Transition: '<S11>:2747' */
        /* Transition: '<S11>:3562' */
        /* Transition: '<S11>:3689' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:3693' */
            if (KaGRAR_b_EmerOprMod_048_Specs[i - 1])
            {
                /* Transition: '<S11>:3695' */
                /* Transition: '<S11>:3697' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:3698' */
            }
            else
            {
                /* Transition: '<S11>:3696' */
            }

            /* Transition: '<S11>:3699' */
            /* Transition: '<S11>:3700' */
            /* Transition: '<S11>:3694' */
            /* Transition: '<S11>:3691' */
        }

        /* Transition: '<S11>:3690' */
        /* Transition: '<S11>:3692' */
        /* Transition: '<S11>:3701' */
        /* Transition: '<S11>:3703' */
    }
    else
    {
        /* Transition: '<S11>:3560' */
        /* Transition: '<S11>:3668' */
        /* Transition: '<S11>:3626' */
    }

    /* Transition: '<S11>:3669' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[48])
    {
        /* Transition: '<S11>:3615' */
        /* Transition: '<S11>:3619' */
        /* Transition: '<S11>:3650' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:3654' */
            if (KaGRAR_b_EmerOprMod_049_Specs[i - 1])
            {
                /* Transition: '<S11>:3656' */
                /* Transition: '<S11>:3658' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:3659' */
            }
            else
            {
                /* Transition: '<S11>:3657' */
            }

            /* Transition: '<S11>:3660' */
            /* Transition: '<S11>:3661' */
            /* Transition: '<S11>:3655' */
            /* Transition: '<S11>:3652' */
        }

        /* Transition: '<S11>:3651' */
        /* Transition: '<S11>:3653' */
        /* Transition: '<S11>:3662' */
        /* Transition: '<S11>:3664' */
    }
    else
    {
        /* Transition: '<S11>:3621' */
        /* Transition: '<S11>:3623' */
        /* Transition: '<S11>:3617' */
    }

    /* Transition: '<S11>:2752' */
    if (GRAR_ac_DW.UnitDelay4_DSTATE[49])
    {
        /* Transition: '<S11>:3576' */
        /* Transition: '<S11>:3630' */
        /* Transition: '<S11>:2529' */
        for (i = 1; i < 30; i++)
        {
            /* Transition: '<S11>:2533' */
            if (KaGRAR_b_EmerOprMod_050_Specs[i - 1])
            {
                /* Transition: '<S11>:2535' */
                /* Transition: '<S11>:2537' */
                rtb_Curr_Actv_EOM_specs_superset[i - 1] = true;

                /* Transition: '<S11>:2538' */
            }
            else
            {
                /* Transition: '<S11>:2536' */
            }

            /* Transition: '<S11>:2539' */
            /* Transition: '<S11>:2540' */
            /* Transition: '<S11>:2534' */
            /* Transition: '<S11>:2531' */
        }

        /* Transition: '<S11>:2530' */
        /* Transition: '<S11>:2532' */
        /* Transition: '<S11>:2541' */
        /* Transition: '<S11>:2543' */
    }
    else
    {
        /* Transition: '<S11>:2510' */
        /* Transition: '<S11>:2509' */
        /* Transition: '<S11>:3670' */
    }

    /* End of Chart: '<S9>/Determine_active_EOM_specs2' */

    /* Selector: '<S9>/EOM_spec_17' */
    /* Transition: '<S11>:2749' */
    VeGRAR_b_EOM_spec_17 = rtb_Curr_Actv_EOM_specs_superset[16];

    /* Selector: '<S9>/EOM_spec_18' */
    VeGRAR_b_EOM_spec_18 = rtb_Curr_Actv_EOM_specs_superset[17];

    /* Selector: '<S9>/EOM_spec_19' */
    VeGRAR_b_EOM_spec_19 = rtb_Curr_Actv_EOM_specs_superset[18];

    /* Selector: '<S9>/EOM_spec_20' */
    VeGRAR_b_EOM_spec_20 = rtb_Curr_Actv_EOM_specs_superset[19];

    /* Selector: '<S9>/EOM_spec_21' */
    VeGRAR_b_EOM_spec_21 = rtb_Curr_Actv_EOM_specs_superset[20];

    /* Selector: '<S9>/EOM_spec_22' */
    VeGRAR_b_EOM_spec_22 = rtb_Curr_Actv_EOM_specs_superset[21];

    /* Selector: '<S9>/EOM_spec_23' */
    VeGRAR_b_EOM_spec_23 = rtb_Curr_Actv_EOM_specs_superset[22];

    /* Selector: '<S9>/EOM_spec_24' */
    VeGRAR_b_EOM_spec_24 = rtb_Curr_Actv_EOM_specs_superset[23];

    /* Selector: '<S9>/EOM_spec_25' */
    VeGRAR_b_EOM_spec_25 = rtb_Curr_Actv_EOM_specs_superset[24];

    /* If: '<S22>/If' incorporates:
     *  Constant: '<S22>/Simulink_Sources_Constant1'
     *  Constant: '<S22>/Simulink_Sources_Constant6'
     */
    if (VeGRAR_b_EOM_spec_24)
    {
        /* Outputs for IfAction SubSystem: '<S22>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S165>/Action Port'
         */
        /* Merge: '<S22>/Merge' incorporates:
         *  Constant: '<S22>/Simulink_Sources_Constant7'
         *  DataTypeConversion: '<S168>/DataTypeConversion'
         */
        VeGRAC_e_PRND_Req = CeGRAR_e_LastGoodPRND_Latched;

        /* End of Outputs for SubSystem: '<S22>/If Action Subsystem1' */
    }
    else if (VeGRAR_b_EOM_spec_25)
    {
        /* Outputs for IfAction SubSystem: '<S22>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S166>/Action Port'
         */
        GRAR_ac_IfActionSubsystem2(CeGRAR_e_PRND_ReqP, (&(VeGRAC_e_PRND_Req)));

        /* End of Outputs for SubSystem: '<S22>/If Action Subsystem2' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S22>/If Action Subsystem4' incorporates:
         *  ActionPort: '<S167>/Action Port'
         */
        GRAR_ac_IfActionSubsystem2(CeGRAR_e_PRND_Normal, (&(VeGRAC_e_PRND_Req)));

        /* End of Outputs for SubSystem: '<S22>/If Action Subsystem4' */
    }

    /* End of If: '<S22>/If' */

    /* Selector: '<S9>/EOM_spec_26' */
    VeGRAR_b_EOM_spec_26 = rtb_Curr_Actv_EOM_specs_superset[25];

    /* Selector: '<S9>/EOM_spec_27' */
    VeGRAR_b_EOM_spec_27 = rtb_Curr_Actv_EOM_specs_superset[26];

    /* If: '<S23>/If' incorporates:
     *  Constant: '<S23>/Simulink_Sources_Constant2'
     *  Constant: '<S23>/Simulink_Sources_Constant8'
     */
    if (VeGRAR_b_EOM_spec_26)
    {
        /* Outputs for IfAction SubSystem: '<S23>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S171>/Action Port'
         */
        /* Merge: '<S23>/Merge' incorporates:
         *  Constant: '<S23>/Simulink_Sources_Constant9'
         *  DataTypeConversion: '<S174>/DataTypeConversion'
         */
        VeGRAC_e_ParkPawlReq = CeGRAR_e_PP_Disengage;

        /* End of Outputs for SubSystem: '<S23>/If Action Subsystem1' */
    }
    else if (VeGRAR_b_EOM_spec_27)
    {
        /* Outputs for IfAction SubSystem: '<S23>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S172>/Action Port'
         */
        GRAR_ac_IfActionSubsystem2_d(CeGRAR_e_PP_Engage, (&(VeGRAC_e_ParkPawlReq)));

        /* End of Outputs for SubSystem: '<S23>/If Action Subsystem2' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S23>/If Action Subsystem4' incorporates:
         *  ActionPort: '<S173>/Action Port'
         */
        GRAR_ac_IfActionSubsystem2_d(CeGRAR_e_PP_Normal, (&(VeGRAC_e_ParkPawlReq)));

        /* End of Outputs for SubSystem: '<S23>/If Action Subsystem4' */
    }

    /* End of If: '<S23>/If' */

    /* Selector: '<S9>/EOM_spec_28' */
    VeGRAR_b_EOM_spec_28 = rtb_Curr_Actv_EOM_specs_superset[27];

    /* Selector: '<S9>/EOM_spec_01' incorporates:
     *  Constant: '<S9>/Constant29'
     */
    VeGRAR_b_EOM_spec_01 = rtb_Curr_Actv_EOM_specs_superset[0];

    /* Selector: '<S9>/EOM_spec_29' */
    VeGRAR_b_EOM_spec_29 = rtb_Curr_Actv_EOM_specs_superset[28];

    /* Selector: '<S9>/EOM_spec_10' */
    VeGRAR_b_EOM_spec_10 = rtb_Curr_Actv_EOM_specs_superset[9];

    /* Selector: '<S9>/EOM_spec_11' */
    VeGRAR_b_EOM_spec_11 = rtb_Curr_Actv_EOM_specs_superset[10];

    /* Selector: '<S9>/EOM_spec_12' */
    VeGRAR_b_EOM_spec_12 = rtb_Curr_Actv_EOM_specs_superset[11];

    /* Selector: '<S9>/EOM_spec_14' */
    VeGRAR_b_EOM_spec_14 = rtb_Curr_Actv_EOM_specs_superset[13];

    /* Selector: '<S9>/EOM_spec_13' */
    VeGRAR_b_EOM_spec_13 = rtb_Curr_Actv_EOM_specs_superset[12];

    /* Selector: '<S9>/EOM_spec_15' */
    VeGRAR_b_EOM_spec_15 = rtb_Curr_Actv_EOM_specs_superset[14];

    /* Selector: '<S9>/EOM_spec_16' */
    VeGRAR_b_EOM_spec_16 = rtb_Curr_Actv_EOM_specs_superset[15];

    /* Selector: '<S9>/EOM_spec_02' */
    VeGRAR_b_EOM_spec_02 = rtb_Curr_Actv_EOM_specs_superset[1];

    /* Selector: '<S9>/EOM_spec_03' */
    VeGRAR_b_EOM_spec_03 = rtb_Curr_Actv_EOM_specs_superset[2];

    /* Selector: '<S9>/EOM_spec_04' */
    VeGRAR_b_EOM_spec_04 = rtb_Curr_Actv_EOM_specs_superset[3];

    /* Selector: '<S9>/EOM_spec_05' */
    VeGRAR_b_EOM_spec_05 = rtb_Curr_Actv_EOM_specs_superset[4];

    /* Selector: '<S9>/EOM_spec_06' */
    VeGRAR_b_EOM_spec_06 = rtb_Curr_Actv_EOM_specs_superset[5];

    /* Selector: '<S9>/EOM_spec_07' */
    VeGRAR_b_EOM_spec_07 = rtb_Curr_Actv_EOM_specs_superset[6];

    /* Selector: '<S9>/EOM_spec_08' */
    VeGRAR_b_EOM_spec_08 = rtb_Curr_Actv_EOM_specs_superset[7];

    /* Selector: '<S9>/EOM_spec_09' */
    VeGRAR_b_EOM_spec_09 = rtb_Curr_Actv_EOM_specs_superset[8];

    /* Logic: '<S24>/Logical Operator4' */
    VeGRAR_b_TargtStsPrepIFinput1 = (((VeGRAI_b_VehImpactDetected) &&
        (VeGRAR_b_CarKeydOff)) && (VeGRAR_b_BEV_LatDynErr_2));

    /* Logic: '<S24>/Logical Operator2' */
    VeGRAR_b_TargtStsPrepIFinput2 = ((VeGRAI_b_VehImpactDetected) &&
        (VeGRAR_b_CarKeydOff));

    /* Logic: '<S9>/Logical Operator1' incorporates:
     *  Logic: '<S9>/Logical Operator'
     */
    VeGRAR_b_Surr_PowerUp = (rtb_Switch1_b || (!rtb_RelationalOperator1));

    /* RelationalOperator: '<S24>/Relational Operator2' */
    VeGRAR_b_TargtStsPrepIFinput3 = VeGRAR_b_Surr_PowerUp;

    /* Chart: '<S9>/Select_the_MSSBEV_Action_with_highest_priority' incorporates:
     *  Constant: '<S69>/Calib'
     */
    /* Gateway: GRAR_MedTEB/GRAC/Assign_Rem_Act_to_Faults/Select_the_MSSBEV_Action_with_highest_priority */
    /* During: GRAR_MedTEB/GRAC/Assign_Rem_Act_to_Faults/Select_the_MSSBEV_Action_with_highest_priority */
    /* Entry Internal: GRAR_MedTEB/GRAC/Assign_Rem_Act_to_Faults/Select_the_MSSBEV_Action_with_highest_priority */
    /* Transition: '<S107>:1' */
    VeGRAC_i_MSSBEV_Action_raw = 1.0F;
    VeGRAR_i_PrirtyOfHighstPrActn = KaGRAR_i_MSSBEVActPriority[((sint32)
        VeGRAC_i_MSSBEV_Action_raw) - 1];
    for (i = 0; i < 26; i++)
    {
        /* Transition: '<S107>:29' */
        if (VaGRAR_i_MSSActions_actv[(i)] == 1.0F)
        {
            /* Transition: '<S107>:32' */
            /* Transition: '<S107>:45' */
            if (VeGRAR_i_PrirtyOfHighstPrActn < KaGRAR_i_MSSBEVActPriority[(i)])
            {
                /* Transition: '<S107>:52' */
                /* Transition: '<S107>:48' */
                VeGRAR_i_PrirtyOfHighstPrActn = KaGRAR_i_MSSBEVActPriority[(i)];
                VeGRAC_i_MSSBEV_Action_raw = ((float32)i) + 1.0F;

                /* Transition: '<S107>:47' */
            }
            else
            {
                /* Transition: '<S107>:34' */
            }

            /* Transition: '<S107>:46' */
            /* Transition: '<S107>:35' */
        }
        else
        {
            /* Transition: '<S107>:30' */
        }

        /* Transition: '<S107>:13' */
        /* Transition: '<S107>:19' */
        /* Transition: '<S107>:17' */
        /* Transition: '<S107>:18' */
    }

    /* End of Chart: '<S9>/Select_the_MSSBEV_Action_with_highest_priority' */

    /* If: '<S9>/If' incorporates:
     *  Constant: '<S80>/Calib'
     */
    /* Transition: '<S107>:21' */
    /* Transition: '<S107>:24' */
    /* Transition: '<S107>:23' */
    /* Transition: '<S107>:5' */
    if (KeGRAR_i_MSSBEVActOvrrd_1 > 0.0F)
    {
        /* Outputs for IfAction SubSystem: '<S9>/If_Action_Subsystem' incorporates:
         *  ActionPort: '<S17>/Action Port'
         */
        GRAR_ac_If_Action_Subsystem(KeGRAR_i_MSSBEVActOvrrd_1,
            (&(VeGRAR_i_MSSBEV_Action_Numerical)));

        /* End of Outputs for SubSystem: '<S9>/If_Action_Subsystem' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S9>/If_Action_Subsystem1' incorporates:
         *  ActionPort: '<S18>/Action Port'
         */
        GRAR_ac_If_Action_Subsystem1(VeGRAC_i_MSSBEV_Action_raw,
            (&(VeGRAR_i_MSSBEV_Action_Numerical)));

        /* End of Outputs for SubSystem: '<S9>/If_Action_Subsystem1' */
    }

    /* End of If: '<S9>/If' */

    /* Logic: '<S24>/Logical Operator' incorporates:
     *  Constant: '<S24>/No_Limitation'
     *  RelationalOperator: '<S24>/Relational Operator'
     *  RelationalOperator: '<S24>/Relational Operator1'
     */
    VeGRAR_b_TargtStsPrepIFinput4 = ((VeGRAR_b_CarKeydOff) &&
        (VeGRAR_i_MSSBEV_Action_Numerical == 1.0F));

    /* If: '<S24>/If' incorporates:
     *  Constant: '<S24>/KeyOff_HV_Limitation'
     *  Constant: '<S24>/KeyOff_No_Limitation'
     *  Constant: '<S24>/KeyOff_TRQ_Limitation'
     *  Constant: '<S24>/Power_Up'
     */
    if (VeGRAR_b_TargtStsPrepIFinput1)
    {
        /* Outputs for IfAction SubSystem: '<S24>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S179>/Action Port'
         */
        GRAR_ac_IfActionSubsystem2_l(62.0F, (&(VeGRAR_i_TargtStsPrepMergeOut)));

        /* End of Outputs for SubSystem: '<S24>/If Action Subsystem2' */
    }
    else if (VeGRAR_b_TargtStsPrepIFinput2)
    {
        /* Outputs for IfAction SubSystem: '<S24>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S178>/Action Port'
         */
        GRAR_ac_IfActionSubsystem2_l(25.0F, (&(VeGRAR_i_TargtStsPrepMergeOut)));

        /* End of Outputs for SubSystem: '<S24>/If Action Subsystem1' */
    }
    else if (VeGRAR_b_TargtStsPrepIFinput3)
    {
        /* Outputs for IfAction SubSystem: '<S24>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S180>/Action Port'
         */
        GRAR_ac_IfActionSubsystem2_l(6.0F, (&(VeGRAR_i_TargtStsPrepMergeOut)));

        /* End of Outputs for SubSystem: '<S24>/If Action Subsystem3' */
    }
    else if (VeGRAR_b_TargtStsPrepIFinput4)
    {
        /* Outputs for IfAction SubSystem: '<S24>/If Action Subsystem' incorporates:
         *  ActionPort: '<S177>/Action Port'
         */
        GRAR_ac_IfActionSubsystem2_l(24.0F, (&(VeGRAR_i_TargtStsPrepMergeOut)));

        /* End of Outputs for SubSystem: '<S24>/If Action Subsystem' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S24>/If Action Subsystem4' incorporates:
         *  ActionPort: '<S181>/Action Port'
         */
        /* Merge: '<S24>/Merge' incorporates:
         *  Gain: '<S184>/Gain'
         */
        VeGRAR_i_TargtStsPrepMergeOut = VeGRAR_i_MSSBEV_Action_Numerical;

        /* End of Outputs for SubSystem: '<S24>/If Action Subsystem4' */
    }

    /* End of If: '<S24>/If' */

    /* If: '<S24>/If1' incorporates:
     *  Constant: '<S24>/Power_Up1'
     */
    if (VeGRAI_b_InFieldMode_1)
    {
        /* Outputs for IfAction SubSystem: '<S24>/If Action Subsystem6' incorporates:
         *  ActionPort: '<S183>/Action Port'
         */
        /* Merge: '<S24>/Merge1' incorporates:
         *  Inport: '<S183>/In1'
         */
        VeGRAR_i_MSSBEV_Action_numerical_mod = VeGRAR_i_TargtStsPrepMergeOut;

        /* End of Outputs for SubSystem: '<S24>/If Action Subsystem6' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S24>/If Action Subsystem5' incorporates:
         *  ActionPort: '<S182>/Action Port'
         */
        GRAR_ac_IfActionSubsystem2_l(3.0F,
            (&(VeGRAR_i_MSSBEV_Action_numerical_mod)));

        /* End of Outputs for SubSystem: '<S24>/If Action Subsystem5' */
    }

    /* End of If: '<S24>/If1' */

    /* UnitDelay: '<S27>/Delay_by_one_update_cycle1' */
    GRAR_ac_B.Delay_by_one_update_cycle1 =
        GRAR_ac_DW.Delay_by_one_update_cycle1_DSTATE;

    /* UnitDelay: '<S27>/Delay_by_one_update_cycle2' */
    GRAR_ac_B.Delay_by_one_update_cycle2 =
        GRAR_ac_DW.Delay_by_one_update_cycle2_DSTATE;

    /* UnitDelay: '<S27>/Delay_by_one_update_cycle3' */
    GRAR_ac_B.Delay_by_one_update_cycle3 =
        GRAR_ac_DW.Delay_by_one_update_cycle3_DSTATE;

    /* UnitDelay: '<S27>/Delay_by_one_update_cycle4' */
    GRAR_ac_B.Delay_by_one_update_cycle4 =
        GRAR_ac_DW.Delay_by_one_update_cycle4_DSTATE;

    /* UnitDelay: '<S27>/Delay_by_one_update_cycle5' */
    GRAR_ac_B.Delay_by_one_update_cycle5 =
        GRAR_ac_DW.Delay_by_one_update_cycle5_DSTATE;

    /* UnitDelay: '<S27>/Delay_by_one_update_cycle6' */
    GRAR_ac_B.Delay_by_one_update_cycle6 =
        GRAR_ac_DW.Delay_by_one_update_cycle6_DSTATE;

    /* UnitDelay: '<S27>/Delay_by_one_update_cycle7' */
    GRAR_ac_B.Delay_by_one_update_cycle7 =
        GRAR_ac_DW.Delay_by_one_update_cycle7_DSTATE;

    /* UnitDelay: '<S27>/Delay_by_one_update_cycle8' */
    GRAR_ac_B.Delay_by_one_update_cycle8 =
        GRAR_ac_DW.Delay_by_one_update_cycle8_DSTATE;

    /* UnitDelay: '<S27>/Delay_by_one_update_cycle9' */
    GRAR_ac_B.Delay_by_one_update_cycle9 =
        GRAR_ac_DW.Delay_by_one_update_cycle9_DSTATE;

    /* UnitDelay: '<S27>/Delay_by_one_update_cycle10' */
    GRAR_ac_B.Delay_by_one_update_cycle10 =
        GRAR_ac_DW.Delay_by_one_update_cycle10_DSTATE;

    /* UnitDelay: '<S27>/Delay_by_one_update_cycle11' */
    GRAR_ac_B.Delay_by_one_update_cycle11 =
        GRAR_ac_DW.Delay_by_one_update_cycle11_DSTATE;

    /* Chart: '<S27>/Chart2' incorporates:
     *  SubSystem: '<S27>/Normal_func_'
     */
    /* Gateway: GRAR_MedTEB/GRAC/Assign_Rem_Act_to_Faults/SABR_and_SCDR_communications/Chart2 */
    /* During: GRAR_MedTEB/GRAC/Assign_Rem_Act_to_Faults/SABR_and_SCDR_communications/Chart2 */
    /* Entry Internal: GRAR_MedTEB/GRAC/Assign_Rem_Act_to_Faults/SABR_and_SCDR_communications/Chart2 */
    /* Transition: '<S344>:2' */
    /* Event: '<S344>:6' */
    GRAR_ac_Normal_func_(&GRAR_ac_B.VeGRAC_e_MSSBEV_eTCS_TtSts,
                         &GRAR_ac_B.VeGRAC_e_MSSBEV_eDTC_TtSts,
                         &GRAR_ac_B.VeGRAC_e_MSSBEVrgnTargetSts,
                         &GRAR_ac_B.VeGRAC_e_MSSBEVeLNCtargetSts,
                         &GRAR_ac_B.VeGRAC_e_MSSBEVbTVtargetSts,
                         &GRAR_ac_B.VeGRAC_e_MSSBEVbTCStargetSts,
                         (&(VeGRAC_e_MSSBEVdrvPoffRegenTs)),
                         (&(VeGRAC_e_MSSBEVrwsTargetSts)),
                         &GRAR_ac_B.VeGRAC_e_MSSBEVeAWD_TgtSts,
                         &GRAR_ac_B.Merge10_d, &GRAR_ac_B.Merge11);
    if (VeGRAR_i_MSSBEV_Action_numerical_mod == 4.0F)
    {
        /* Outputs for Function Call SubSystem: '<S27>/On_MonitoringOff_' */
        /* Merge: '<S27>/Merge9' incorporates:
         *  Constant: '<S388>/Constant'
         *  SignalConversion generated from: '<S349>/MSSBEV_DRV_PoffRegen'
         */
        /* Transition: '<S344>:16' */
        /* Transition: '<S344>:20' */
        /* Event: '<S344>:8' */
        VeGRAC_e_MSSBEVdrvPoffRegenTs = CeGRAR_e_TargetSts_On_MonitorOff;

        /* Merge: '<S27>/Merge1' incorporates:
         *  Constant: '<S388>/Constant'
         *  SignalConversion generated from: '<S349>/MSSBEV_RWS_TargetSts'
         */
        VeGRAC_e_MSSBEVrwsTargetSts = CeGRAR_e_TargetSts_On_MonitorOff;

        /* Merge: '<S27>/Merge5' incorporates:
         *  Constant: '<S388>/Constant'
         *  SignalConversion generated from: '<S349>/MSSBEV_Regen_TargetSts'
         */
        GRAR_ac_B.VeGRAC_e_MSSBEVrgnTargetSts = CeGRAR_e_TargetSts_On_MonitorOff;

        /* Merge: '<S27>/Merge8' incorporates:
         *  Constant: '<S388>/Constant'
         *  SignalConversion generated from: '<S349>/MSSBEV_bTCS_TargetSts'
         */
        GRAR_ac_B.VeGRAC_e_MSSBEVbTCStargetSts =
            CeGRAR_e_TargetSts_On_MonitorOff;

        /* Merge: '<S27>/Merge7' incorporates:
         *  Constant: '<S388>/Constant'
         *  SignalConversion generated from: '<S349>/MSSBEV_bTV_TargetSts'
         */
        GRAR_ac_B.VeGRAC_e_MSSBEVbTVtargetSts = CeGRAR_e_TargetSts_On_MonitorOff;

        /* Merge: '<S27>/Merge10' incorporates:
         *  Constant: '<S388>/Constant'
         *  SignalConversion generated from: '<S349>/MSSBEV_eAWD_TgtSts'
         */
        GRAR_ac_B.Merge10_d = CeGRAR_e_TargetSts_On_MonitorOff;

        /* Merge: '<S27>/Merge4' incorporates:
         *  Constant: '<S388>/Constant'
         *  SignalConversion generated from: '<S349>/MSSBEV_eDTC_TargetSts'
         */
        GRAR_ac_B.VeGRAC_e_MSSBEV_eDTC_TtSts = CeGRAR_e_TargetSts_On_MonitorOff;

        /* Merge: '<S27>/Merge6' incorporates:
         *  Constant: '<S388>/Constant'
         *  SignalConversion generated from: '<S349>/MSSBEV_eLNC_TargetSts'
         */
        GRAR_ac_B.VeGRAC_e_MSSBEVeLNCtargetSts =
            CeGRAR_e_TargetSts_On_MonitorOff;

        /* Merge: '<S27>/Merge11' incorporates:
         *  Constant: '<S388>/Constant'
         *  SignalConversion generated from: '<S349>/MSSBEV_eLSD_TgtSts'
         */
        GRAR_ac_B.Merge11 = CeGRAR_e_TargetSts_On_MonitorOff;

        /* Merge: '<S27>/Merge3' incorporates:
         *  Constant: '<S388>/Constant'
         *  SignalConversion generated from: '<S349>/MSSBEV_eTCS_TargetSts'
         */
        GRAR_ac_B.VeGRAC_e_MSSBEV_eTCS_TtSts = CeGRAR_e_TargetSts_On_MonitorOff;

        /* Merge: '<S27>/Merge2' incorporates:
         *  Constant: '<S388>/Constant'
         *  SignalConversion generated from: '<S349>/MSSBEVeAWD_TgtSts '
         */
        GRAR_ac_B.VeGRAC_e_MSSBEVeAWD_TgtSts = CeGRAR_e_TargetSts_On_MonitorOff;

        /* End of Outputs for SubSystem: '<S27>/On_MonitoringOff_' */
        /* Transition: '<S344>:36' */
        /* Transition: '<S344>:35' */
        /* Transition: '<S344>:34' */
    }
    else
    {
        /* Transition: '<S344>:18' */
        if (VeGRAR_i_MSSBEV_Action_numerical_mod == 5.0F)
        {
            /* Outputs for Function Call SubSystem: '<S27>/DiagOff_' */
            /* Transition: '<S344>:23' */
            /* Transition: '<S344>:25' */
            /* Event: '<S344>:7' */
            GRAR_ac_DiagOff_(&GRAR_ac_B.VeGRAC_e_MSSBEV_eTCS_TtSts,
                             &GRAR_ac_B.VeGRAC_e_MSSBEV_eDTC_TtSts,
                             &GRAR_ac_B.VeGRAC_e_MSSBEVrgnTargetSts,
                             &GRAR_ac_B.VeGRAC_e_MSSBEVeLNCtargetSts,
                             &GRAR_ac_B.VeGRAC_e_MSSBEVbTVtargetSts,
                             &GRAR_ac_B.VeGRAC_e_MSSBEVbTCStargetSts,
                             (&(VeGRAC_e_MSSBEVdrvPoffRegenTs)),
                             (&(VeGRAC_e_MSSBEVrwsTargetSts)),
                             &GRAR_ac_B.VeGRAC_e_MSSBEVeAWD_TgtSts,
                             &GRAR_ac_B.Merge10_d, &GRAR_ac_B.Merge11);

            /* End of Outputs for SubSystem: '<S27>/DiagOff_' */
            /* Transition: '<S344>:35' */
            /* Transition: '<S344>:34' */
        }
        else
        {
            /* Transition: '<S344>:27' */
            if (VeGRAR_i_MSSBEV_Action_numerical_mod == 6.0F)
            {
                /* Outputs for Function Call SubSystem: '<S27>/Disable_' */
                /* Transition: '<S344>:29' */
                /* Transition: '<S344>:31' */
                /* Event: '<S344>:5' */
                GRAR_ac_Disable_(&GRAR_ac_B.VeGRAC_e_MSSBEV_eTCS_TtSts,
                                 &GRAR_ac_B.VeGRAC_e_MSSBEV_eDTC_TtSts,
                                 &GRAR_ac_B.VeGRAC_e_MSSBEVrgnTargetSts,
                                 &GRAR_ac_B.VeGRAC_e_MSSBEVeLNCtargetSts,
                                 &GRAR_ac_B.VeGRAC_e_MSSBEVbTVtargetSts,
                                 &GRAR_ac_B.VeGRAC_e_MSSBEVbTCStargetSts,
                                 (&(VeGRAC_e_MSSBEVdrvPoffRegenTs)),
                                 (&(VeGRAC_e_MSSBEVrwsTargetSts)),
                                 &GRAR_ac_B.VeGRAC_e_MSSBEVeAWD_TgtSts,
                                 &GRAR_ac_B.Merge10_d, &GRAR_ac_B.Merge11);

                /* End of Outputs for SubSystem: '<S27>/Disable_' */
                /* Transition: '<S344>:34' */
            }
            else
            {
                /* Transition: '<S344>:33' */
            }
        }
    }

    /* Transition: '<S344>:38' */
    if (((VeGRAR_i_MSSBEV_Action_numerical_mod == 3.0F) ||
            (VeGRAR_i_MSSBEV_Action_numerical_mod == 2.0F)) ||
            (VeGRAI_b_VehImpactDetected))
    {
        /* Outputs for Function Call SubSystem: '<S27>/Disable_' */
        /* Transition: '<S344>:40' */
        /* Transition: '<S344>:42' */
        /* Event: '<S344>:5' */
        GRAR_ac_Disable_(&GRAR_ac_B.VeGRAC_e_MSSBEV_eTCS_TtSts,
                         &GRAR_ac_B.VeGRAC_e_MSSBEV_eDTC_TtSts,
                         &GRAR_ac_B.VeGRAC_e_MSSBEVrgnTargetSts,
                         &GRAR_ac_B.VeGRAC_e_MSSBEVeLNCtargetSts,
                         &GRAR_ac_B.VeGRAC_e_MSSBEVbTVtargetSts,
                         &GRAR_ac_B.VeGRAC_e_MSSBEVbTCStargetSts,
                         (&(VeGRAC_e_MSSBEVdrvPoffRegenTs)),
                         (&(VeGRAC_e_MSSBEVrwsTargetSts)),
                         &GRAR_ac_B.VeGRAC_e_MSSBEVeAWD_TgtSts,
                         &GRAR_ac_B.Merge10_d, &GRAR_ac_B.Merge11);

        /* End of Outputs for SubSystem: '<S27>/Disable_' */
        /* Transition: '<S344>:45' */
        /* Transition: '<S344>:138' */
        /* Transition: '<S344>:140' */
    }
    else
    {
        /* Transition: '<S344>:44' */
        if (VeGRAR_i_MSSBEV_Action_numerical_mod == 1.0F)
        {
            /* Outputs for Function Call SubSystem: '<S27>/Normal_func_' */
            /* Transition: '<S344>:49' */
            /* Transition: '<S344>:51' */
            /* Event: '<S344>:6' */
            GRAR_ac_Normal_func_(&GRAR_ac_B.VeGRAC_e_MSSBEV_eTCS_TtSts,
                                 &GRAR_ac_B.VeGRAC_e_MSSBEV_eDTC_TtSts,
                                 &GRAR_ac_B.VeGRAC_e_MSSBEVrgnTargetSts,
                                 &GRAR_ac_B.VeGRAC_e_MSSBEVeLNCtargetSts,
                                 &GRAR_ac_B.VeGRAC_e_MSSBEVbTVtargetSts,
                                 &GRAR_ac_B.VeGRAC_e_MSSBEVbTCStargetSts,
                                 (&(VeGRAC_e_MSSBEVdrvPoffRegenTs)),
                                 (&(VeGRAC_e_MSSBEVrwsTargetSts)),
                                 &GRAR_ac_B.VeGRAC_e_MSSBEVeAWD_TgtSts,
                                 &GRAR_ac_B.Merge10_d, &GRAR_ac_B.Merge11);

            /* End of Outputs for SubSystem: '<S27>/Normal_func_' */
            if (!VeGRAI_b_InFieldMode_1)
            {
                /* Outputs for Function Call SubSystem: '<S27>/Monitoring_func_2_' */
                /* Transition: '<S344>:56' */
                /* Transition: '<S344>:59' */
                /* Event: '<S344>:9' */
                GRAR_ac_Monitoring_func_2_(GRAR_ac_B.Delay_by_one_update_cycle1,
                    GRAR_ac_B.Delay_by_one_update_cycle2,
                    GRAR_ac_B.Delay_by_one_update_cycle3,
                    GRAR_ac_B.Delay_by_one_update_cycle4,
                    GRAR_ac_B.Delay_by_one_update_cycle5,
                    GRAR_ac_B.Delay_by_one_update_cycle6,
                    GRAR_ac_B.Delay_by_one_update_cycle7,
                    GRAR_ac_B.Delay_by_one_update_cycle8,
                    GRAR_ac_B.Delay_by_one_update_cycle9,
                    GRAR_ac_B.Delay_by_one_update_cycle10,
                    GRAR_ac_B.Delay_by_one_update_cycle11,
                    &GRAR_ac_B.VeGRAC_e_MSSBEV_eTCS_TtSts,
                    &GRAR_ac_B.VeGRAC_e_MSSBEV_eDTC_TtSts,
                    &GRAR_ac_B.VeGRAC_e_MSSBEVrgnTargetSts,
                    &GRAR_ac_B.VeGRAC_e_MSSBEVeLNCtargetSts,
                    &GRAR_ac_B.VeGRAC_e_MSSBEVbTVtargetSts,
                    &GRAR_ac_B.VeGRAC_e_MSSBEVbTCStargetSts,
                    (&(VeGRAC_e_MSSBEVdrvPoffRegenTs)),
                    (&(VeGRAC_e_MSSBEVrwsTargetSts)),
                    &GRAR_ac_B.VeGRAC_e_MSSBEVeAWD_TgtSts, &GRAR_ac_B.Merge10_d,
                    &GRAR_ac_B.Merge11);

                /* End of Outputs for SubSystem: '<S27>/Monitoring_func_2_' */
                /* Transition: '<S344>:60' */
            }
            else
            {
                /* Transition: '<S344>:61' */
            }

            /* Transition: '<S344>:62' */
            /* Transition: '<S344>:94' */
            /* Transition: '<S344>:96' */
            /* Transition: '<S344>:97' */
            /* Transition: '<S344>:98' */
            /* Transition: '<S344>:137' */
            /* Transition: '<S344>:138' */
            /* Transition: '<S344>:140' */
        }
        else
        {
            /* Transition: '<S344>:53' */
            if (VeGRAR_i_MSSBEV_Action_numerical_mod == 24.0F)
            {
                /* Outputs for Function Call SubSystem: '<S27>/DiagOff_' */
                /* Transition: '<S344>:67' */
                /* Transition: '<S344>:68' */
                /* Event: '<S344>:7' */
                GRAR_ac_DiagOff_(&GRAR_ac_B.VeGRAC_e_MSSBEV_eTCS_TtSts,
                                 &GRAR_ac_B.VeGRAC_e_MSSBEV_eDTC_TtSts,
                                 &GRAR_ac_B.VeGRAC_e_MSSBEVrgnTargetSts,
                                 &GRAR_ac_B.VeGRAC_e_MSSBEVeLNCtargetSts,
                                 &GRAR_ac_B.VeGRAC_e_MSSBEVbTVtargetSts,
                                 &GRAR_ac_B.VeGRAC_e_MSSBEVbTCStargetSts,
                                 (&(VeGRAC_e_MSSBEVdrvPoffRegenTs)),
                                 (&(VeGRAC_e_MSSBEVrwsTargetSts)),
                                 &GRAR_ac_B.VeGRAC_e_MSSBEVeAWD_TgtSts,
                                 &GRAR_ac_B.Merge10_d, &GRAR_ac_B.Merge11);

                /* End of Outputs for SubSystem: '<S27>/DiagOff_' */
                /* Transition: '<S344>:69' */
                /* Transition: '<S344>:95' */
                /* Transition: '<S344>:97' */
                /* Transition: '<S344>:98' */
                /* Transition: '<S344>:137' */
                /* Transition: '<S344>:138' */
                /* Transition: '<S344>:140' */
            }
            else
            {
                /* Transition: '<S344>:70' */
                if (VeGRAR_i_MSSBEV_Action_numerical_mod == 8.0F)
                {
                    /* Outputs for Function Call SubSystem: '<S27>/Normal_func_' */
                    /* Transition: '<S344>:75' */
                    /* Transition: '<S344>:77' */
                    /* Event: '<S344>:6' */
                    GRAR_ac_Normal_func_(&GRAR_ac_B.VeGRAC_e_MSSBEV_eTCS_TtSts,
                                         &GRAR_ac_B.VeGRAC_e_MSSBEV_eDTC_TtSts,
                                         &GRAR_ac_B.VeGRAC_e_MSSBEVrgnTargetSts,
                                         &GRAR_ac_B.VeGRAC_e_MSSBEVeLNCtargetSts,
                                         &GRAR_ac_B.VeGRAC_e_MSSBEVbTVtargetSts,
                                         &GRAR_ac_B.VeGRAC_e_MSSBEVbTCStargetSts,
                                         (&(VeGRAC_e_MSSBEVdrvPoffRegenTs)),
                                         (&(VeGRAC_e_MSSBEVrwsTargetSts)),
                                         &GRAR_ac_B.VeGRAC_e_MSSBEVeAWD_TgtSts,
                                         &GRAR_ac_B.Merge10_d,
                                         &GRAR_ac_B.Merge11);

                    /* End of Outputs for SubSystem: '<S27>/Normal_func_' */
                    if (!VeGRAI_b_InFieldMode_1)
                    {
                        /* Outputs for Function Call SubSystem: '<S27>/Monitoring_func_2_' */
                        /* Transition: '<S344>:82' */
                        /* Transition: '<S344>:83' */
                        /* Event: '<S344>:9' */
                        GRAR_ac_Monitoring_func_2_
                            (GRAR_ac_B.Delay_by_one_update_cycle1,
                             GRAR_ac_B.Delay_by_one_update_cycle2,
                             GRAR_ac_B.Delay_by_one_update_cycle3,
                             GRAR_ac_B.Delay_by_one_update_cycle4,
                             GRAR_ac_B.Delay_by_one_update_cycle5,
                             GRAR_ac_B.Delay_by_one_update_cycle6,
                             GRAR_ac_B.Delay_by_one_update_cycle7,
                             GRAR_ac_B.Delay_by_one_update_cycle8,
                             GRAR_ac_B.Delay_by_one_update_cycle9,
                             GRAR_ac_B.Delay_by_one_update_cycle10,
                             GRAR_ac_B.Delay_by_one_update_cycle11,
                             &GRAR_ac_B.VeGRAC_e_MSSBEV_eTCS_TtSts,
                             &GRAR_ac_B.VeGRAC_e_MSSBEV_eDTC_TtSts,
                             &GRAR_ac_B.VeGRAC_e_MSSBEVrgnTargetSts,
                             &GRAR_ac_B.VeGRAC_e_MSSBEVeLNCtargetSts,
                             &GRAR_ac_B.VeGRAC_e_MSSBEVbTVtargetSts,
                             &GRAR_ac_B.VeGRAC_e_MSSBEVbTCStargetSts,
                             (&(VeGRAC_e_MSSBEVdrvPoffRegenTs)),
                             (&(VeGRAC_e_MSSBEVrwsTargetSts)),
                             &GRAR_ac_B.VeGRAC_e_MSSBEVeAWD_TgtSts,
                             &GRAR_ac_B.Merge10_d, &GRAR_ac_B.Merge11);

                        /* End of Outputs for SubSystem: '<S27>/Monitoring_func_2_' */
                        /* Transition: '<S344>:90' */
                        /* Transition: '<S344>:98' */
                        /* Transition: '<S344>:137' */
                        /* Transition: '<S344>:138' */
                        /* Transition: '<S344>:140' */
                    }
                    else
                    {
                        /* Transition: '<S344>:86' */
                        /* Transition: '<S344>:87' */
                        /* Transition: '<S344>:137' */
                        /* Transition: '<S344>:138' */
                        /* Transition: '<S344>:140' */
                    }
                }
                else
                {
                    /* Transition: '<S344>:72' */
                    if ((9.0F <= VeGRAR_i_MSSBEV_Action_numerical_mod) &&
                            (VeGRAR_i_MSSBEV_Action_numerical_mod <= 20.0F))
                    {
                        /* Outputs for Function Call SubSystem: '<S27>/Disable_' */
                        /* Transition: '<S344>:104' */
                        /* Transition: '<S344>:105' */
                        /* Event: '<S344>:5' */
                        GRAR_ac_Disable_(&GRAR_ac_B.VeGRAC_e_MSSBEV_eTCS_TtSts,
                                         &GRAR_ac_B.VeGRAC_e_MSSBEV_eDTC_TtSts,
                                         &GRAR_ac_B.VeGRAC_e_MSSBEVrgnTargetSts,
                                         &GRAR_ac_B.VeGRAC_e_MSSBEVeLNCtargetSts,
                                         &GRAR_ac_B.VeGRAC_e_MSSBEVbTVtargetSts,
                                         &GRAR_ac_B.VeGRAC_e_MSSBEVbTCStargetSts,
                                         (&(VeGRAC_e_MSSBEVdrvPoffRegenTs)),
                                         (&(VeGRAC_e_MSSBEVrwsTargetSts)),
                                         &GRAR_ac_B.VeGRAC_e_MSSBEVeAWD_TgtSts,
                                         &GRAR_ac_B.Merge10_d,
                                         &GRAR_ac_B.Merge11);

                        /* End of Outputs for SubSystem: '<S27>/Disable_' */

                        /* Outputs for Function Call SubSystem: '<S27>/PoffRegen_TargetSts_Dminus' */
                        /* Event: '<S344>:4' */
                        GRAR_ac_PoffRegen_TargetSts_Dminus
                            ((&(VeGRAC_e_MSSBEVdrvPoffRegenTs)));

                        /* End of Outputs for SubSystem: '<S27>/PoffRegen_TargetSts_Dminus' */
                        /* Transition: '<S344>:106' */
                        /* Transition: '<S344>:114' */
                        /* Transition: '<S344>:122' */
                        /* Transition: '<S344>:132' */
                        /* Transition: '<S344>:134' */
                    }
                    else
                    {
                        /* Transition: '<S344>:107' */
                        if (VeGRAR_i_MSSBEV_Action_numerical_mod == 21.0F)
                        {
                            /* Outputs for Function Call SubSystem: '<S27>/Disable_' */
                            /* Transition: '<S344>:112' */
                            /* Transition: '<S344>:110' */
                            /* Event: '<S344>:5' */
                            GRAR_ac_Disable_
                                (&GRAR_ac_B.VeGRAC_e_MSSBEV_eTCS_TtSts,
                                 &GRAR_ac_B.VeGRAC_e_MSSBEV_eDTC_TtSts,
                                 &GRAR_ac_B.VeGRAC_e_MSSBEVrgnTargetSts,
                                 &GRAR_ac_B.VeGRAC_e_MSSBEVeLNCtargetSts,
                                 &GRAR_ac_B.VeGRAC_e_MSSBEVbTVtargetSts,
                                 &GRAR_ac_B.VeGRAC_e_MSSBEVbTCStargetSts,
                                 (&(VeGRAC_e_MSSBEVdrvPoffRegenTs)),
                                 (&(VeGRAC_e_MSSBEVrwsTargetSts)),
                                 &GRAR_ac_B.VeGRAC_e_MSSBEVeAWD_TgtSts,
                                 &GRAR_ac_B.Merge10_d, &GRAR_ac_B.Merge11);

                            /* End of Outputs for SubSystem: '<S27>/Disable_' */
                            /* Transition: '<S344>:108' */
                            /* Transition: '<S344>:122' */
                            /* Transition: '<S344>:132' */
                            /* Transition: '<S344>:134' */
                        }
                        else
                        {
                            /* Transition: '<S344>:119' */
                            if (VeGRAR_i_MSSBEV_Action_numerical_mod == 61.0F)
                            {
                                /* Outputs for Function Call SubSystem: '<S27>/DiagOff_' */
                                /* Transition: '<S344>:115' */
                                /* Transition: '<S344>:117' */
                                /* Event: '<S344>:7' */
                                GRAR_ac_DiagOff_
                                    (&GRAR_ac_B.VeGRAC_e_MSSBEV_eTCS_TtSts,
                                     &GRAR_ac_B.VeGRAC_e_MSSBEV_eDTC_TtSts,
                                     &GRAR_ac_B.VeGRAC_e_MSSBEVrgnTargetSts,
                                     &GRAR_ac_B.VeGRAC_e_MSSBEVeLNCtargetSts,
                                     &GRAR_ac_B.VeGRAC_e_MSSBEVbTVtargetSts,
                                     &GRAR_ac_B.VeGRAC_e_MSSBEVbTCStargetSts,
                                     (&(VeGRAC_e_MSSBEVdrvPoffRegenTs)),
                                     (&(VeGRAC_e_MSSBEVrwsTargetSts)),
                                     &GRAR_ac_B.VeGRAC_e_MSSBEVeAWD_TgtSts,
                                     &GRAR_ac_B.Merge10_d, &GRAR_ac_B.Merge11);

                                /* End of Outputs for SubSystem: '<S27>/DiagOff_' */
                                /* Transition: '<S344>:123' */
                                /* Transition: '<S344>:132' */
                                /* Transition: '<S344>:134' */
                            }
                            else
                            {
                                /* Transition: '<S344>:124' */
                                if (VeGRAR_i_MSSBEV_Action_numerical_mod ==
                                        62.0F)
                                {
                                    /* Outputs for Function Call SubSystem: '<S27>/DiagOff_' */
                                    /* Transition: '<S344>:127' */
                                    /* Transition: '<S344>:126' */
                                    /* Event: '<S344>:7' */
                                    GRAR_ac_DiagOff_
                                        (&GRAR_ac_B.VeGRAC_e_MSSBEV_eTCS_TtSts,
                                         &GRAR_ac_B.VeGRAC_e_MSSBEV_eDTC_TtSts,
                                         &GRAR_ac_B.VeGRAC_e_MSSBEVrgnTargetSts,
                                         &GRAR_ac_B.VeGRAC_e_MSSBEVeLNCtargetSts,
                                         &GRAR_ac_B.VeGRAC_e_MSSBEVbTVtargetSts,
                                         &GRAR_ac_B.VeGRAC_e_MSSBEVbTCStargetSts,
                                         (&(VeGRAC_e_MSSBEVdrvPoffRegenTs)),
                                         (&(VeGRAC_e_MSSBEVrwsTargetSts)),
                                         &GRAR_ac_B.VeGRAC_e_MSSBEVeAWD_TgtSts,
                                         &GRAR_ac_B.Merge10_d,
                                         &GRAR_ac_B.Merge11);

                                    /* End of Outputs for SubSystem: '<S27>/DiagOff_' */

                                    /* Outputs for Function Call SubSystem: '<S27>/PoffRegen_TargetSts_Dminus' */
                                    /* Event: '<S344>:4' */
                                    GRAR_ac_PoffRegen_TargetSts_Dminus
                                        ((&(VeGRAC_e_MSSBEVdrvPoffRegenTs)));

                                    /* End of Outputs for SubSystem: '<S27>/PoffRegen_TargetSts_Dminus' */
                                }
                                else
                                {
                                    /* Outputs for Function Call SubSystem: '<S27>/Disable_' */
                                    /* Transition: '<S344>:141' */
                                    /* Event: '<S344>:5' */
                                    GRAR_ac_Disable_
                                        (&GRAR_ac_B.VeGRAC_e_MSSBEV_eTCS_TtSts,
                                         &GRAR_ac_B.VeGRAC_e_MSSBEV_eDTC_TtSts,
                                         &GRAR_ac_B.VeGRAC_e_MSSBEVrgnTargetSts,
                                         &GRAR_ac_B.VeGRAC_e_MSSBEVeLNCtargetSts,
                                         &GRAR_ac_B.VeGRAC_e_MSSBEVbTVtargetSts,
                                         &GRAR_ac_B.VeGRAC_e_MSSBEVbTCStargetSts,
                                         (&(VeGRAC_e_MSSBEVdrvPoffRegenTs)),
                                         (&(VeGRAC_e_MSSBEVrwsTargetSts)),
                                         &GRAR_ac_B.VeGRAC_e_MSSBEVeAWD_TgtSts,
                                         &GRAR_ac_B.Merge10_d,
                                         &GRAR_ac_B.Merge11);

                                    /* End of Outputs for SubSystem: '<S27>/Disable_' */
                                    /* Transition: '<S344>:140' */
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    /* Switch: '<S9>/Switch9' incorporates:
     *  Constant: '<S102>/Calib'
     */
    /* Transition: '<S344>:135' */
    if (KeGRAR_b_Set_TargetSts_Normal)
    {
        /* Switch: '<S9>/Switch9' incorporates:
         *  Constant: '<S16>/Constant'
         */
        VeGRAC_e_DRV_PoffRegenTgtSts = CeGRAR_e_TargetSts_Normal;
    }
    else
    {
        /* Switch: '<S9>/Switch9' incorporates:
         *  Merge: '<S27>/Merge9'
         */
        VeGRAC_e_DRV_PoffRegenTgtSts = VeGRAC_e_MSSBEVdrvPoffRegenTs;
    }

    /* End of Switch: '<S9>/Switch9' */

    /* Switch: '<S9>/Switch2' incorporates:
     *  Constant: '<S91>/Calib'
     */
    if (KeGRAR_b_UseProcessedAction)
    {
        /* Switch: '<S9>/Switch2' */
        VeGRAR_i_MSSBEV_Action_Numerical = VeGRAR_i_MSSBEV_Action_numerical_mod;
    }

    /* End of Switch: '<S9>/Switch2' */

    /* If: '<S9>/If1' incorporates:
     *  Constant: '<S30>/Calib'
     *  Constant: '<S9>/Constant'
     */
    if (KeGRAR_b_MSSBEV_ActionOutEnbl)
    {
        /* Outputs for IfAction SubSystem: '<S9>/If_Action_Subsystem2' incorporates:
         *  ActionPort: '<S19>/Action Port'
         */
        GRAR_ac_If_Action_Subsystem(VeGRAR_i_MSSBEV_Action_Numerical,
            &for_cycle_index);

        /* End of Outputs for SubSystem: '<S9>/If_Action_Subsystem2' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S9>/If_Action_Subsystem3' incorporates:
         *  ActionPort: '<S20>/Action Port'
         */
        GRAR_ac_If_Action_Subsystem1(1.0F, &for_cycle_index);

        /* End of Outputs for SubSystem: '<S9>/If_Action_Subsystem3' */
    }

    /* End of If: '<S9>/If1' */

    /* Logic: '<S26>/Logical Operator' */
    rtb_RelationalOperator1 = (((VeGRAR_b_EOM_spec_03) || (VeGRAR_b_EOM_spec_05))
        || (VeGRAR_b_EOM_spec_06));

    /* If: '<S331>/If' incorporates:
     *  Constant: '<S331>/KeyOff_TRQ_Limitation'
     */
    if (VeGRAR_b_EOM_spec_03)
    {
        /* Outputs for IfAction SubSystem: '<S331>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S332>/Action Port'
         */
        GRAR_ac_IfActionSubsystem1_p(0.5F, &rtb_Merge_i, &rtb_Merge3);

        /* End of Outputs for SubSystem: '<S331>/If Action Subsystem1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S331>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S333>/Action Port'
         */
        GRAR_ac_IfActionSubsystem2_g(&rtb_Merge_i, &rtb_Merge3);

        /* End of Outputs for SubSystem: '<S331>/If Action Subsystem2' */
    }

    /* End of If: '<S331>/If' */

    /* Outputs for Atomic SubSystem: '<S331>/Limiter1' */
    /* Switch: '<S338>/Switch1' incorporates:
     *  Constant: '<S331>/Max_RIP_ratio_1'
     *  Constant: '<S343>/Calib'
     *  RelationalOperator: '<S338>/Relational Operator'
     */
    if (1.0F < KeGRAR_r_RIPratio_RA_Cal_1)
    {
        /* Switch: '<S339>/Switch1' */
        rtb_Divide = 1.0F;
    }
    else
    {
        /* Switch: '<S339>/Switch1' */
        rtb_Divide = KeGRAR_r_RIPratio_RA_Cal_1;
    }

    /* End of Switch: '<S338>/Switch1' */
    /* End of Outputs for SubSystem: '<S331>/Limiter1' */

    /* If: '<S331>/If1' */
    if (VeGRAR_b_EOM_spec_05)
    {
        /* Outputs for Atomic SubSystem: '<S331>/Limiter1' */
        /* Switch: '<S338>/Switch' incorporates:
         *  Constant: '<S331>/Min_RIP_ratio_1'
         *  RelationalOperator: '<S338>/Relational Operator1'
         */
        if (rtb_Divide <= 0.0F)
        {
            rtb_Divide = 0.0F;
        }

        /* End of Switch: '<S338>/Switch' */
        /* End of Outputs for SubSystem: '<S331>/Limiter1' */

        /* Outputs for IfAction SubSystem: '<S331>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S334>/Action Port'
         */
        GRAR_ac_IfActionSubsystem1_p(rtb_Divide, &rtb_Merge1, &rtb_Merge4);

        /* End of Outputs for SubSystem: '<S331>/If Action Subsystem3' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S331>/If Action Subsystem4' incorporates:
         *  ActionPort: '<S335>/Action Port'
         */
        GRAR_ac_IfActionSubsystem2_g(&rtb_Merge1, &rtb_Merge4);

        /* End of Outputs for SubSystem: '<S331>/If Action Subsystem4' */
    }

    /* End of If: '<S331>/If1' */

    /* Outputs for Atomic SubSystem: '<S331>/Limiter3' */
    /* Switch: '<S340>/Switch1' incorporates:
     *  Constant: '<S331>/Max_RIP_ratio_2'
     *  Constant: '<S342>/Calib'
     *  RelationalOperator: '<S340>/Relational Operator'
     */
    if (1.0F < KeGRAR_r_RIPratio_RA_Cal_2)
    {
        /* Switch: '<S339>/Switch1' */
        rtb_Divide = 1.0F;
    }
    else
    {
        /* Switch: '<S339>/Switch1' */
        rtb_Divide = KeGRAR_r_RIPratio_RA_Cal_2;
    }

    /* End of Switch: '<S340>/Switch1' */
    /* End of Outputs for SubSystem: '<S331>/Limiter3' */

    /* If: '<S331>/If2' */
    if (VeGRAR_b_EOM_spec_06)
    {
        /* Outputs for Atomic SubSystem: '<S331>/Limiter3' */
        /* Switch: '<S340>/Switch' incorporates:
         *  Constant: '<S331>/Min_RIP_ratio_2'
         *  RelationalOperator: '<S340>/Relational Operator1'
         */
        if (rtb_Divide > 0.0F)
        {
            rtb_Switch1_1 = rtb_Divide;
        }
        else
        {
            rtb_Switch1_1 = 0.0F;
        }

        /* End of Switch: '<S340>/Switch' */
        /* End of Outputs for SubSystem: '<S331>/Limiter3' */

        /* Outputs for IfAction SubSystem: '<S331>/If Action Subsystem5' incorporates:
         *  ActionPort: '<S336>/Action Port'
         */
        GRAR_ac_IfActionSubsystem1_p(rtb_Switch1_1, &rtb_Merge2, &rtb_Divide);

        /* End of Outputs for SubSystem: '<S331>/If Action Subsystem5' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S331>/If Action Subsystem6' incorporates:
         *  ActionPort: '<S337>/Action Port'
         */
        GRAR_ac_IfActionSubsystem2_g(&rtb_Merge2, &rtb_Divide);

        /* End of Outputs for SubSystem: '<S331>/If Action Subsystem6' */
    }

    /* End of If: '<S331>/If2' */

    /* Sum: '<S331>/Add1' */
    rtb_Divide += rtb_Merge3 + rtb_Merge4;

    /* Outputs for Atomic SubSystem: '<S331>/Limiter4' */
    /* Switch: '<S341>/Switch1' incorporates:
     *  Constant: '<S331>/Max_RIP_ratio_4'
     *  RelationalOperator: '<S341>/Relational Operator'
     */
    if (20.0F < rtb_Divide)
    {
        /* Switch: '<S339>/Switch1' */
        rtb_Divide = 20.0F;
    }

    /* End of Switch: '<S341>/Switch1' */

    /* Switch: '<S341>/Switch' incorporates:
     *  Constant: '<S331>/Min_RIP_ratio_4'
     *  RelationalOperator: '<S341>/Relational Operator1'
     */
    if (rtb_Divide <= 1.0F)
    {
        rtb_Divide = 1.0F;
    }

    /* End of Switch: '<S341>/Switch' */
    /* End of Outputs for SubSystem: '<S331>/Limiter4' */

    /* Product: '<S331>/Divide' incorporates:
     *  Sum: '<S331>/Add'
     */
    rtb_Divide = ((rtb_Merge_i + rtb_Merge1) + rtb_Merge2) / rtb_Divide;

    /* Outputs for Atomic SubSystem: '<S331>/Limiter2' */
    /* Switch: '<S339>/Switch1' incorporates:
     *  Constant: '<S331>/Max_RIP_ratio_3'
     *  RelationalOperator: '<S339>/Relational Operator'
     */
    if (1.0F < rtb_Divide)
    {
        /* Switch: '<S339>/Switch1' */
        rtb_Divide = 1.0F;
    }

    /* End of Switch: '<S339>/Switch1' */

    /* Switch: '<S339>/Switch' incorporates:
     *  Constant: '<S331>/Min_RIP_ratio_3'
     *  RelationalOperator: '<S339>/Relational Operator1'
     */
    if (rtb_Divide <= 0.0F)
    {
        /* Switch: '<S339>/Switch' */
        rtb_Divide = 0.0F;
    }

    /* End of Switch: '<S339>/Switch' */
    /* End of Outputs for SubSystem: '<S331>/Limiter2' */

    /* RelationalOperator: '<S26>/Relational Operator' */
    rtb_Switch1_b = !VeGRAR_b_EOM_spec_04;

    /* RelationalOperator: '<S26>/Relational Operator3' */
    tmpRead_s = !rtb_RelationalOperator1;

    /* Logic: '<S26>/Logical Operator4' incorporates:
     *  Logic: '<S26>/Logical Operator1'
     */
    tmpRead_r = (rtb_Switch1_b && tmpRead_s);

    /* RelationalOperator: '<S26>/Relational Operator4' */
    tmpRead_q = !VeGRAR_b_EOM_spec_02;

    /* If: '<S26>/If' incorporates:
     *  Logic: '<S26>/Logical Operator1'
     *  Logic: '<S26>/Logical Operator2'
     *  Logic: '<S26>/Logical Operator3'
     *  Logic: '<S26>/Logical Operator4'
     *  Logic: '<S26>/Logical Operator5'
     *  Logic: '<S26>/Logical Operator6'
     *  Logic: '<S26>/Logical Operator7'
     *  Logic: '<S26>/Logical Operator8'
     *  RelationalOperator: '<S26>/Relational Operator13'
     *  RelationalOperator: '<S26>/Relational Operator16'
     *  RelationalOperator: '<S26>/Relational Operator22'
     *  RelationalOperator: '<S26>/Relational Operator5'
     */
    if (tmpRead_r && tmpRead_q)
    {
        /* Outputs for IfAction SubSystem: '<S26>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S323>/Action Port'
         */
        /* Merge: '<S26>/Merge' incorporates:
         *  Constant: '<S323>/ 50'
         *  SignalConversion generated from: '<S323>/RIP_ratio'
         */
        VeGRAC_r_RA_RIP_Ratio = 0.5F;

        /* Merge: '<S26>/Merge1' incorporates:
         *  Constant: '<S323>/ 51'
         *  SignalConversion generated from: '<S323>/Request_Zero_Torque'
         */
        VeGRAC_b_actv_0_TotTrq = false;

        /* End of Outputs for SubSystem: '<S26>/If Action Subsystem2' */
    }
    else if (tmpRead_r && (VeGRAR_b_EOM_spec_02))
    {
        /* Outputs for IfAction SubSystem: '<S26>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S322>/Action Port'
         */
        GRAR_ac_IfActionSubsystem1((&(VeGRAC_r_RA_RIP_Ratio)),
            (&(VeGRAC_b_actv_0_TotTrq)));

        /* End of Outputs for SubSystem: '<S26>/If Action Subsystem1' */
    }
    else
    {
        /* Logic: '<S26>/Logical Operator2' incorporates:
         *  Logic: '<S26>/Logical Operator6'
         *  RelationalOperator: '<S26>/Relational Operator7'
         */
        rtb_Switch1_b = (rtb_Switch1_b && rtb_RelationalOperator1);
        if (rtb_Switch1_b && tmpRead_q)
        {
            /* Outputs for IfAction SubSystem: '<S26>/If Action Subsystem3' incorporates:
             *  ActionPort: '<S324>/Action Port'
             */
            /* Merge: '<S26>/Merge' incorporates:
             *  Inport: '<S324>/RIP_inbetween_value'
             */
            VeGRAC_r_RA_RIP_Ratio = rtb_Divide;

            /* Merge: '<S26>/Merge1' incorporates:
             *  Constant: '<S324>/ 51'
             *  SignalConversion generated from: '<S324>/Request_Zero_Torque'
             */
            VeGRAC_b_actv_0_TotTrq = false;

            /* End of Outputs for SubSystem: '<S26>/If Action Subsystem3' */
        }
        else
        {
            /* Logic: '<S26>/Logical Operator3' incorporates:
             *  Logic: '<S26>/Logical Operator5'
             *  RelationalOperator: '<S26>/Relational Operator9'
             */
            tmpRead_s = ((VeGRAR_b_EOM_spec_04) && tmpRead_s);
            if (tmpRead_s && tmpRead_q)
            {
                /* Outputs for IfAction SubSystem: '<S26>/If Action Subsystem4' incorporates:
                 *  ActionPort: '<S325>/Action Port'
                 */
                GRAR_ac_IfActionSubsystem4((&(VeGRAC_r_RA_RIP_Ratio)),
                    (&(VeGRAC_b_actv_0_TotTrq)));

                /* End of Outputs for SubSystem: '<S26>/If Action Subsystem4' */
            }
            else if (tmpRead_s && (VeGRAR_b_EOM_spec_02))
            {
                /* Outputs for IfAction SubSystem: '<S26>/If Action Subsystem5' incorporates:
                 *  ActionPort: '<S326>/Action Port'
                 */
                GRAR_ac_IfActionSubsystem5(rtb_Divide, (&(VeGRAC_r_RA_RIP_Ratio)),
                    (&(VeGRAC_b_actv_0_TotTrq)));

                /* End of Outputs for SubSystem: '<S26>/If Action Subsystem5' */
            }
            else if (rtb_Switch1_b && (VeGRAR_b_EOM_spec_02))
            {
                /* Outputs for IfAction SubSystem: '<S26>/If Action Subsystem6' incorporates:
                 *  ActionPort: '<S327>/Action Port'
                 */
                GRAR_ac_IfActionSubsystem1((&(VeGRAC_r_RA_RIP_Ratio)),
                    (&(VeGRAC_b_actv_0_TotTrq)));

                /* End of Outputs for SubSystem: '<S26>/If Action Subsystem6' */
            }
            else
            {
                /* Logic: '<S26>/Logical Operator7' incorporates:
                 *  Logic: '<S26>/Logical Operator8'
                 *  RelationalOperator: '<S26>/Relational Operator18'
                 *  RelationalOperator: '<S26>/Relational Operator20'
                 */
                rtb_Switch1_b = ((VeGRAR_b_EOM_spec_04) &&
                                 rtb_RelationalOperator1);
                if (rtb_Switch1_b && tmpRead_q)
                {
                    /* Outputs for IfAction SubSystem: '<S26>/If Action Subsystem7' incorporates:
                     *  ActionPort: '<S328>/Action Port'
                     */
                    GRAR_ac_IfActionSubsystem4((&(VeGRAC_r_RA_RIP_Ratio)),
                        (&(VeGRAC_b_actv_0_TotTrq)));

                    /* End of Outputs for SubSystem: '<S26>/If Action Subsystem7' */
                }
                else if (rtb_Switch1_b && (VeGRAR_b_EOM_spec_02))
                {
                    /* Outputs for IfAction SubSystem: '<S26>/If Action Subsystem8' incorporates:
                     *  ActionPort: '<S329>/Action Port'
                     */
                    GRAR_ac_IfActionSubsystem5(rtb_Divide,
                        (&(VeGRAC_r_RA_RIP_Ratio)), (&(VeGRAC_b_actv_0_TotTrq)));

                    /* End of Outputs for SubSystem: '<S26>/If Action Subsystem8' */
                }
                else
                {
                    /* Outputs for IfAction SubSystem: '<S26>/If Action Subsystem9' incorporates:
                     *  ActionPort: '<S330>/Action Port'
                     */
                    /* Merge: '<S26>/Merge' incorporates:
                     *  Constant: '<S330>/ 50'
                     *  SignalConversion generated from: '<S330>/RIP_ratio'
                     */
                    VeGRAC_r_RA_RIP_Ratio = 0.5F;

                    /* Merge: '<S26>/Merge1' incorporates:
                     *  Constant: '<S330>/ 51'
                     *  SignalConversion generated from: '<S330>/Request_Zero_Torque'
                     */
                    VeGRAC_b_actv_0_TotTrq = true;

                    /* End of Outputs for SubSystem: '<S26>/If Action Subsystem9' */
                }
            }
        }
    }

    /* End of If: '<S26>/If' */

    /* If: '<S21>/If' */
    if (for_cycle_index == 1.0F)
    {
        /* Outputs for IfAction SubSystem: '<S21>/No_Limitation' incorporates:
         *  ActionPort: '<S128>/Action Port'
         */
        GRAR_ac_No_Limitation((&(VeGRAC_e_MSSBEV_Action)));

        /* End of Outputs for SubSystem: '<S21>/No_Limitation' */
    }
    else if (for_cycle_index == 2.0F)
    {
        /* Outputs for IfAction SubSystem: '<S21>/Service_Bypass' incorporates:
         *  ActionPort: '<S131>/Action Port'
         */
        /* Merge: '<S21>/Merge' incorporates:
         *  Constant: '<S158>/Constant'
         *  SignalConversion generated from: '<S131>/Out1'
         */
        VeGRAC_e_MSSBEV_Action = CeGRAR_e_Sevice_ByPass;

        /* End of Outputs for SubSystem: '<S21>/Service_Bypass' */
    }
    else if (for_cycle_index == 3.0F)
    {
        /* Outputs for IfAction SubSystem: '<S21>/Disable_Bypass' incorporates:
         *  ActionPort: '<S113>/Action Port'
         */
        /* Merge: '<S21>/Merge' incorporates:
         *  Constant: '<S140>/Constant'
         *  SignalConversion generated from: '<S113>/Out1'
         */
        VeGRAC_e_MSSBEV_Action = CeGRAR_e_Disable_ByPass;

        /* End of Outputs for SubSystem: '<S21>/Disable_Bypass' */
    }
    else if (for_cycle_index == 4.0F)
    {
        /* Outputs for IfAction SubSystem: '<S21>/Monitoring_Off' incorporates:
         *  ActionPort: '<S126>/Action Port'
         */
        /* Merge: '<S21>/Merge' incorporates:
         *  Constant: '<S153>/Constant'
         *  SignalConversion generated from: '<S126>/Out1'
         */
        VeGRAC_e_MSSBEV_Action = CeGRAR_e_Monitoring_Off;

        /* End of Outputs for SubSystem: '<S21>/Monitoring_Off' */
    }
    else if (for_cycle_index == 5.0F)
    {
        /* Outputs for IfAction SubSystem: '<S21>/Diag_Off' incorporates:
         *  ActionPort: '<S112>/Action Port'
         */
        /* Merge: '<S21>/Merge' incorporates:
         *  Constant: '<S139>/Constant'
         *  SignalConversion generated from: '<S112>/Out1'
         */
        VeGRAC_e_MSSBEV_Action = CeGRAR_e_Diag_Off;

        /* End of Outputs for SubSystem: '<S21>/Diag_Off' */
    }
    else if (for_cycle_index == 6.0F)
    {
        /* Outputs for IfAction SubSystem: '<S21>/Power_Up' incorporates:
         *  ActionPort: '<S130>/Action Port'
         */
        /* Merge: '<S21>/Merge' incorporates:
         *  Constant: '<S157>/Constant'
         *  SignalConversion generated from: '<S130>/Out1'
         */
        VeGRAC_e_MSSBEV_Action = CeGRAR_e_Power_Up;

        /* End of Outputs for SubSystem: '<S21>/Power_Up' */
    }
    else if (for_cycle_index == 7.0F)
    {
        /* Outputs for IfAction SubSystem: '<S21>/Monitoring_Off_Error' incorporates:
         *  ActionPort: '<S127>/Action Port'
         */
        /* Merge: '<S21>/Merge' incorporates:
         *  Constant: '<S154>/Constant'
         *  SignalConversion generated from: '<S127>/Out1'
         */
        VeGRAC_e_MSSBEV_Action = CeGRAR_e_Monitoring_Off_Error;

        /* End of Outputs for SubSystem: '<S21>/Monitoring_Off_Error' */
    }
    else if (for_cycle_index == 8.0F)
    {
        /* Outputs for IfAction SubSystem: '<S21>/No_Limitation_Vertical_Dynamics Off' incorporates:
         *  ActionPort: '<S129>/Action Port'
         */
        /* Merge: '<S21>/Merge' incorporates:
         *  Constant: '<S156>/Constant'
         *  SignalConversion generated from: '<S129>/Out1'
         */
        VeGRAC_e_MSSBEV_Action = CeGRAR_e_No_Lim_VertDynOff;

        /* End of Outputs for SubSystem: '<S21>/No_Limitation_Vertical_Dynamics Off' */
    }
    else if (for_cycle_index == 9.0F)
    {
        /* Outputs for IfAction SubSystem: '<S21>/Soft_Limitation_1.1._TrqLimVxBaseAWDFix' incorporates:
         *  ActionPort: '<S132>/Action Port'
         */
        /* Merge: '<S21>/Merge' incorporates:
         *  Constant: '<S159>/Constant'
         *  SignalConversion generated from: '<S132>/Out1'
         */
        VeGRAC_e_MSSBEV_Action = CeGRAR_e_LimSoft_1_1;

        /* End of Outputs for SubSystem: '<S21>/Soft_Limitation_1.1._TrqLimVxBaseAWDFix' */
    }
    else if (for_cycle_index == 10.0F)
    {
        /* Outputs for IfAction SubSystem: '<S21>/Soft_Limitation_1.2._TrqLimVxBaseRWDFix' incorporates:
         *  ActionPort: '<S133>/Action Port'
         */
        /* Merge: '<S21>/Merge' incorporates:
         *  Constant: '<S160>/Constant'
         *  SignalConversion generated from: '<S133>/Out1'
         */
        VeGRAC_e_MSSBEV_Action = CeGRAR_e_LimSoft_1_2;

        /* End of Outputs for SubSystem: '<S21>/Soft_Limitation_1.2._TrqLimVxBaseRWDFix' */
    }
    else if (for_cycle_index == 11.0F)
    {
        /* Outputs for IfAction SubSystem: '<S21>/Soft_Limitation_1.3._TrqLimVxBaseFWDFix' incorporates:
         *  ActionPort: '<S134>/Action Port'
         */
        /* Merge: '<S21>/Merge' incorporates:
         *  Constant: '<S161>/Constant'
         *  SignalConversion generated from: '<S134>/Out1'
         */
        VeGRAC_e_MSSBEV_Action = CeGRAR_e_LimSoft_1_3;

        /* End of Outputs for SubSystem: '<S21>/Soft_Limitation_1.3._TrqLimVxBaseFWDFix' */
    }
    else if (for_cycle_index == 12.0F)
    {
        /* Outputs for IfAction SubSystem: '<S21>/Medium_Limitation_2.1._SpeedLimAWDFix' incorporates:
         *  ActionPort: '<S123>/Action Port'
         */
        /* Merge: '<S21>/Merge' incorporates:
         *  Constant: '<S150>/Constant'
         *  SignalConversion generated from: '<S123>/Out1'
         */
        VeGRAC_e_MSSBEV_Action = CeGRAR_e_LimMed_2_1;

        /* End of Outputs for SubSystem: '<S21>/Medium_Limitation_2.1._SpeedLimAWDFix' */
    }
    else if (for_cycle_index == 13.0F)
    {
        /* Outputs for IfAction SubSystem: '<S21>/Medium_Limitation_2.2._SpeedLimRWDFix' incorporates:
         *  ActionPort: '<S124>/Action Port'
         */
        /* Merge: '<S21>/Merge' incorporates:
         *  Constant: '<S151>/Constant'
         *  SignalConversion generated from: '<S124>/Out1'
         */
        VeGRAC_e_MSSBEV_Action = CeGRAR_e_LimMed_2_2;

        /* End of Outputs for SubSystem: '<S21>/Medium_Limitation_2.2._SpeedLimRWDFix' */
    }
    else if (for_cycle_index == 14.0F)
    {
        /* Outputs for IfAction SubSystem: '<S21>/Medium_Limitation_2.3._SpeedLimFWDFix' incorporates:
         *  ActionPort: '<S125>/Action Port'
         */
        /* Merge: '<S21>/Merge' incorporates:
         *  Constant: '<S152>/Constant'
         *  SignalConversion generated from: '<S125>/Out1'
         */
        VeGRAC_e_MSSBEV_Action = CeGRAR_e_LimMed_2_3;

        /* End of Outputs for SubSystem: '<S21>/Medium_Limitation_2.3._SpeedLimFWDFix' */
    }
    else if (for_cycle_index == 15.0F)
    {
        /* Outputs for IfAction SubSystem: '<S21>/Hard_Limitation_ 3.1._TrqLimAWDFix' incorporates:
         *  ActionPort: '<S114>/Action Port'
         */
        /* Merge: '<S21>/Merge' incorporates:
         *  Constant: '<S141>/Constant'
         *  SignalConversion generated from: '<S114>/Out1'
         */
        VeGRAC_e_MSSBEV_Action = CeGRAR_e_LimHard_3_1;

        /* End of Outputs for SubSystem: '<S21>/Hard_Limitation_ 3.1._TrqLimAWDFix' */
    }
    else if (for_cycle_index == 16.0F)
    {
        /* Outputs for IfAction SubSystem: '<S21>/Hard_Limitation_3.2._TrqLimRWDFix ' incorporates:
         *  ActionPort: '<S115>/Action Port'
         */
        /* Merge: '<S21>/Merge' incorporates:
         *  Constant: '<S142>/Constant'
         *  SignalConversion generated from: '<S115>/Out1'
         */
        VeGRAC_e_MSSBEV_Action = CeGRAR_e_LimHard_3_2;

        /* End of Outputs for SubSystem: '<S21>/Hard_Limitation_3.2._TrqLimRWDFix ' */
    }
    else if (for_cycle_index == 17.0F)
    {
        /* Outputs for IfAction SubSystem: '<S21>/Hard_Limitation_3.3._TrqLimFWDFix  ' incorporates:
         *  ActionPort: '<S116>/Action Port'
         */
        /* Merge: '<S21>/Merge' incorporates:
         *  Constant: '<S143>/Constant'
         *  SignalConversion generated from: '<S116>/Out1'
         */
        VeGRAC_e_MSSBEV_Action = CeGRAR_e_LimHard_3_3;

        /* End of Outputs for SubSystem: '<S21>/Hard_Limitation_3.3._TrqLimFWDFix  ' */
    }
    else if (for_cycle_index == 18.0F)
    {
        /* Outputs for IfAction SubSystem: '<S21>/Ultra_Hard_Limitation_4.1._TrqLimCreepBModAWD' incorporates:
         *  ActionPort: '<S135>/Action Port'
         */
        /* Merge: '<S21>/Merge' incorporates:
         *  Constant: '<S162>/Constant'
         *  SignalConversion generated from: '<S135>/Out1'
         */
        VeGRAC_e_MSSBEV_Action = CeGRAR_e_LimUltraHard_4_1;

        /* End of Outputs for SubSystem: '<S21>/Ultra_Hard_Limitation_4.1._TrqLimCreepBModAWD' */
    }
    else if (for_cycle_index == 19.0F)
    {
        /* Outputs for IfAction SubSystem: '<S21>/Ultra_Hard_Limitation_4.2.__TrqLimCreepBModRWD' incorporates:
         *  ActionPort: '<S136>/Action Port'
         */
        /* Merge: '<S21>/Merge' incorporates:
         *  Constant: '<S163>/Constant'
         *  SignalConversion generated from: '<S136>/Out1'
         */
        VeGRAC_e_MSSBEV_Action = CeGRAR_e_LimUltraHard_4_2;

        /* End of Outputs for SubSystem: '<S21>/Ultra_Hard_Limitation_4.2.__TrqLimCreepBModRWD' */
    }
    else if (for_cycle_index == 20.0F)
    {
        /* Outputs for IfAction SubSystem: '<S21>/Ultra_Hard_Limitation_4.3._TrqLimCreepBModFWD' incorporates:
         *  ActionPort: '<S137>/Action Port'
         */
        /* Merge: '<S21>/Merge' incorporates:
         *  Constant: '<S164>/Constant'
         *  SignalConversion generated from: '<S137>/Out1'
         */
        VeGRAC_e_MSSBEV_Action = CeGRAR_e_LimUltraHard_4_3;

        /* End of Outputs for SubSystem: '<S21>/Ultra_Hard_Limitation_4.3._TrqLimCreepBModFWD' */
    }
    else if (for_cycle_index == 21.0F)
    {
        /* Outputs for IfAction SubSystem: '<S21>/Limitation_5.1._Vehicle_Stop_Fast' incorporates:
         *  ActionPort: '<S120>/Action Port'
         */
        /* Merge: '<S21>/Merge' incorporates:
         *  Constant: '<S147>/Constant'
         *  SignalConversion generated from: '<S120>/Out1'
         */
        VeGRAC_e_MSSBEV_Action = CeGRAR_e_Lim_5_1_VehStop_Fast;

        /* End of Outputs for SubSystem: '<S21>/Limitation_5.1._Vehicle_Stop_Fast' */
    }
    else if (for_cycle_index == 22.0F)
    {
        /* Outputs for IfAction SubSystem: '<S21>/Limitation_5.2._Vehicle_Stop_Slow' incorporates:
         *  ActionPort: '<S121>/Action Port'
         */
        /* Merge: '<S21>/Merge' incorporates:
         *  Constant: '<S148>/Constant'
         *  SignalConversion generated from: '<S121>/Out1'
         */
        VeGRAC_e_MSSBEV_Action = CeGRAR_e_Lim_5_2_VehStop_Slow;

        /* End of Outputs for SubSystem: '<S21>/Limitation_5.2._Vehicle_Stop_Slow' */
    }
    else if (for_cycle_index == 23.0F)
    {
        /* Outputs for IfAction SubSystem: '<S21>/Limitation_5.3._Vehicle_Stop_MTRMD' incorporates:
         *  ActionPort: '<S122>/Action Port'
         */
        /* Merge: '<S21>/Merge' incorporates:
         *  Constant: '<S149>/Constant'
         *  SignalConversion generated from: '<S122>/Out1'
         */
        VeGRAC_e_MSSBEV_Action = CeGRAR_e_Lim_5_3_VehStop_MTRMD;

        /* End of Outputs for SubSystem: '<S21>/Limitation_5.3._Vehicle_Stop_MTRMD' */
    }
    else if (for_cycle_index == 24.0F)
    {
        /* Outputs for IfAction SubSystem: '<S21>/KeyOff_No_Limitation' incorporates:
         *  ActionPort: '<S118>/Action Port'
         */
        /* Merge: '<S21>/Merge' incorporates:
         *  Constant: '<S145>/Constant'
         *  SignalConversion generated from: '<S118>/Out1'
         */
        VeGRAC_e_MSSBEV_Action = CeGRAR_e_KeyOff_No_Limitation;

        /* End of Outputs for SubSystem: '<S21>/KeyOff_No_Limitation' */
    }
    else if (for_cycle_index == 25.0F)
    {
        /* Outputs for IfAction SubSystem: '<S21>/KeyOff_HV_Limitation' incorporates:
         *  ActionPort: '<S117>/Action Port'
         */
        /* Merge: '<S21>/Merge' incorporates:
         *  Constant: '<S144>/Constant'
         *  SignalConversion generated from: '<S117>/Out1'
         */
        VeGRAC_e_MSSBEV_Action = CeGRAR_e_KeyOff_HV_Limitation;

        /* End of Outputs for SubSystem: '<S21>/KeyOff_HV_Limitation' */
    }
    else if (for_cycle_index == 26.0F)
    {
        /* Outputs for IfAction SubSystem: '<S21>/KeyOff_Torque_Limitation' incorporates:
         *  ActionPort: '<S119>/Action Port'
         */
        /* Merge: '<S21>/Merge' incorporates:
         *  Constant: '<S146>/Constant'
         *  SignalConversion generated from: '<S119>/Out1'
         */
        VeGRAC_e_MSSBEV_Action = CeGRAR_e_KeyOff_TRQ_Limitation;

        /* End of Outputs for SubSystem: '<S21>/KeyOff_Torque_Limitation' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S21>/Catch-all_case__No_Limitation' incorporates:
         *  ActionPort: '<S111>/Action Port'
         */
        GRAR_ac_No_Limitation((&(VeGRAC_e_MSSBEV_Action)));

        /* End of Outputs for SubSystem: '<S21>/Catch-all_case__No_Limitation' */
    }

    /* End of If: '<S21>/If' */

    /* Logic: '<S25>/Logical Operator1' */
    VeGRAR_b_1orMoreFaultsActive =
        ((((((((((((((((((((((((((((((((((((((VeGRAR_b_FF_post_overrd_01) ||
        (VeGRAR_b_FF_post_overrd_02)) || (VeGRAR_b_FF_post_overrd_03)) ||
        (VeGRAR_b_FF_post_overrd_04)) || (VeGRAR_b_FF_post_overrd_05)) ||
        (VeGRAR_b_FF_post_overrd_06)) || (VeGRAR_b_FF_post_overrd_07)) ||
        (VeGRAR_b_FF_post_overrd_08)) || (VeGRAR_b_FF_post_overrd_09)) ||
        (VeGRAR_b_FF_post_overrd_10)) || (VeGRAR_b_FF_post_overrd_11)) ||
        (VeGRAR_b_FF_post_overrd_12)) || (VeGRAR_b_FF_post_overrd_13)) ||
        (VeGRAR_b_FF_post_overrd_14)) || (VeGRAR_b_FF_post_overrd_15)) ||
        (VeGRAR_b_FF_post_overrd_16)) || (VeGRAR_b_FF_post_overrd_17)) ||
        (VeGRAR_b_FF_post_overrd_18)) || (VeGRAR_b_FF_post_overrd_19)) ||
                           (VeGRAR_b_FF_post_overrd_20)) ||
                          (VeGRAR_b_FF_post_overrd_21)) ||
                         (VeGRAR_b_FF_post_overrd_22)) ||
                        (VeGRAR_b_FF_post_overrd_23)) ||
                       (VeGRAR_b_FF_post_overrd_24)) ||
                      (VeGRAR_b_FF_post_overrd_25)) ||
                     (VeGRAR_b_FF_post_overrd_26)) ||
                    (VeGRAR_b_FF_post_overrd_27)) || (VeGRAR_b_FF_post_overrd_28))
                  || (VeGRAR_b_FF_post_overrd_29)) ||
                 (VeGRAR_b_FF_post_overrd_30)) || (VeGRAR_b_FF_post_overrd_31)) ||
               (VeGRAR_b_FF_post_overrd_32)) || (VeGRAR_b_FF_post_overrd_33)) ||
             (VeGRAR_b_FF_post_overrd_34)) || (VeGRAR_b_FF_post_overrd_35)) ||
           (VeGRAR_b_FF_post_overrd_36)) || (VeGRAR_b_FF_post_overrd_37)) ||
         (VeGRAR_b_FF_post_overrd_38));

    /* Switch: '<S9>/Switch3' incorporates:
     *  Constant: '<S102>/Calib'
     */
    if (KeGRAR_b_Set_TargetSts_Normal)
    {
        /* Switch: '<S9>/Switch3' incorporates:
         *  Constant: '<S16>/Constant'
         */
        VeGRAC_e_MSSBEVeTCS_TargetSts = CeGRAR_e_TargetSts_Normal;
    }
    else
    {
        /* Switch: '<S9>/Switch3' incorporates:
         *  Merge: '<S27>/Merge3'
         */
        VeGRAC_e_MSSBEVeTCS_TargetSts = GRAR_ac_B.VeGRAC_e_MSSBEV_eTCS_TtSts;
    }

    /* End of Switch: '<S9>/Switch3' */

    /* If: '<S110>/If' incorporates:
     *  Constant: '<S110>/Simulink_Sources_Constant'
     *  Constant: '<S110>/Simulink_Sources_Constant3'
     *  Constant: '<S110>/Simulink_Sources_Constant4'
     *  Constant: '<S110>/Simulink_Sources_Constant5'
     *  Logic: '<S9>/Logical Operator2'
     */
    if ((VeGRAR_b_EOM_spec_09) || (VeGRAC_b_actv_0_TotTrq))
    {
        /* Outputs for IfAction SubSystem: '<S110>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S392>/Action Port'
         */
        GRAR_ac_IfActionSubsystem3(CeGRAR_e_Zero, (&(VeGRAC_e_TotMtrTrqRmdlActn)));

        /* End of Outputs for SubSystem: '<S110>/If Action Subsystem3' */
    }
    else if (VeGRAR_b_EOM_spec_08)
    {
        /* Outputs for IfAction SubSystem: '<S110>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S391>/Action Port'
         */
        GRAR_ac_IfActionSubsystem3(CeGRAR_e_Creep, (&(VeGRAC_e_TotMtrTrqRmdlActn)));

        /* End of Outputs for SubSystem: '<S110>/If Action Subsystem2' */
    }
    else if (VeGRAR_b_EOM_spec_07)
    {
        /* Outputs for IfAction SubSystem: '<S110>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S390>/Action Port'
         */
        GRAR_ac_IfActionSubsystem3(CeGRAR_e_LimMax,
            (&(VeGRAC_e_TotMtrTrqRmdlActn)));

        /* End of Outputs for SubSystem: '<S110>/If Action Subsystem1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S110>/If Action Subsystem4' incorporates:
         *  ActionPort: '<S393>/Action Port'
         */
        GRAR_ac_IfActionSubsystem3(CeGRAR_e_Normal,
            (&(VeGRAC_e_TotMtrTrqRmdlActn)));

        /* End of Outputs for SubSystem: '<S110>/If Action Subsystem4' */
    }

    /* End of If: '<S110>/If' */

    /* Selector: '<S108>/EOM__30' incorporates:
     *  Constant: '<S108>/Constant56'
     *  Constant: '<S108>/Constant58'
     *  Constant: '<S31>/Calib'
     *  Constant: '<S93>/Calib'
     *  Constant: '<S94>/Calib'
     *  Selector: '<S9>/EOM__30'
     *  Sum: '<S108>/Add10'
     *  Sum: '<S108>/Add11'
     */
    VeGRAR_r_SingleInside7x3Test = KaGRAR_i_SinArrayReadTest_7x3[(((((sint32)
        ((float32)(KeGRAR_i_sin_7x3_col + 1.0F))) - 1) * 7) + ((sint32)((float32)
        (KeGRAR_i_sin_7x3_row + 1.0F)))) - 1];

    /* Selector: '<S108>/EOM__34' incorporates:
     *  Constant: '<S108>/Constant64'
     *  Constant: '<S108>/Constant66'
     *  Constant: '<S32>/Calib'
     *  Constant: '<S95>/Calib'
     *  Constant: '<S96>/Calib'
     *  Selector: '<S9>/EOM__34'
     *  Sum: '<S108>/Add8'
     *  Sum: '<S108>/Add9'
     */
    VeGRAR_r_SingleInside3x6Test = KaGRAR_i_SinArrayReadTest_3x6[(((((sint32)
        ((float32)(KeGRAR_i_sin_3x6_col + 1.0F))) - 1) * 3) + ((sint32)((float32)
        (KeGRAR_i_sin_3x6_row + 1.0F)))) - 1];

    /* Selector: '<S108>/EOM__38' incorporates:
     *  Constant: '<S108>/Constant72'
     *  Constant: '<S108>/Constant74'
     *  Constant: '<S33>/Calib'
     *  Constant: '<S97>/Calib'
     *  Constant: '<S98>/Calib'
     *  Selector: '<S9>/EOM__38'
     *  Sum: '<S108>/Add6'
     *  Sum: '<S108>/Add7'
     */
    VeGRAR_r_SingleInside4x4Test = KaGRAR_i_SinArrayReadTest_4x4[(((((sint32)
        ((float32)(KeGRAR_i_sin_4x4_col + 1.0F))) - 1) * 4) + ((sint32)((float32)
        (KeGRAR_i_sin_4x4_row + 1.0F)))) - 1];

    /* Sum: '<S108>/Add12' */
    VeGRAR_r_Single_Sum_test = (VeGRAR_r_SingleInside7x3Test +
        VeGRAR_r_SingleInside3x6Test) + VeGRAR_r_SingleInside4x4Test;

    /* Selector: '<S108>/EOM__42' incorporates:
     *  Constant: '<S100>/Calib'
     *  Constant: '<S108>/Constant80'
     *  Constant: '<S108>/Constant82'
     *  Constant: '<S34>/Calib'
     *  Constant: '<S99>/Calib'
     *  Selector: '<S9>/EOM__42'
     *  Sum: '<S108>/Add4'
     *  Sum: '<S108>/Add5'
     */
    VeGRAR_b_BoolnInside7x3Test = KaGRAR_i_BolArrayReadTest_7x3[(((((sint32)
        ((float32)(KeGRAR_i_bol_7x3_col + 1.0F))) - 1) * 7) + ((sint32)((float32)
        (KeGRAR_i_bol_7x3_row + 1.0F)))) - 1];

    /* Selector: '<S108>/EOM__46' incorporates:
     *  Constant: '<S101>/Calib'
     *  Constant: '<S103>/Calib'
     *  Constant: '<S108>/Constant86'
     *  Constant: '<S108>/Constant88'
     *  Constant: '<S35>/Calib'
     *  Selector: '<S9>/EOM__46'
     *  Sum: '<S108>/Add'
     *  Sum: '<S108>/Add1'
     */
    VeGRAR_b_BoolnInside3x6Test = KaGRAR_i_BolArrayReadTest_3x6[(((((sint32)
        ((float32)(KeGRAR_i_bol_3x6_col + 1.0F))) - 1) * 3) + ((sint32)((float32)
        (KeGRAR_i_bol_3x6_row + 1.0F)))) - 1];

    /* Selector: '<S108>/EOM__47' incorporates:
     *  Constant: '<S104>/Calib'
     *  Constant: '<S105>/Calib'
     *  Constant: '<S108>/Constant92'
     *  Constant: '<S108>/Constant94'
     *  Constant: '<S37>/Calib'
     *  Selector: '<S9>/EOM__47'
     *  Sum: '<S108>/Add2'
     *  Sum: '<S108>/Add3'
     */
    VeGRAR_b_BoolnInside4x4Test = KaGRAR_i_BolArrayReadTest_4x4[(((((sint32)
        ((float32)(KeGRAR_i_bol_4x4_col + 1.0F))) - 1) * 4) + ((sint32)((float32)
        (KeGRAR_i_bol_4x4_row + 1.0F)))) - 1];

    /* Logic: '<S108>/Logical Operator' */
    VeGRAR_b_Boolean_OR_test = (((VeGRAR_b_BoolnInside7x3Test) ||
        (VeGRAR_b_BoolnInside3x6Test)) || (VeGRAR_b_BoolnInside4x4Test));

    /* Selector: '<S9>/EOM__30' */
    VeGRAR_r_Single_7x3_test = VeGRAR_r_SingleInside7x3Test;

    /* Selector: '<S9>/EOM__34' */
    VeGRAR_r_Single_3x6_test = VeGRAR_r_SingleInside3x6Test;

    /* Selector: '<S9>/EOM__38' */
    VeGRAR_r_Single_4x4_test = VeGRAR_r_SingleInside4x4Test;

    /* Selector: '<S9>/EOM__42' */
    VeGRAR_b_Boolean_7x3_test = VeGRAR_b_BoolnInside7x3Test;

    /* Selector: '<S9>/EOM__46' */
    VeGRAR_b_Boolean_3x6_test = VeGRAR_b_BoolnInside3x6Test;

    /* Selector: '<S9>/EOM__47' */
    VeGRAR_b_Boolean_4x4_test = VeGRAR_b_BoolnInside4x4Test;

    /* Update for UnitDelay: '<S9>/Unit Delay1' */
    memcpy(&GRAR_ac_DW.UnitDelay1_DSTATE[0], (&(VaGRAR_i_MSSActions_actv[0])),
           26U * (sizeof(float32)));

    /* Update for UnitDelay: '<S25>/Unit Delay1' */
    GRAR_ac_DW.UnitDelay1_DSTATE_k = VeGRAR_b_CarKeydOff;

    /* Update for UnitDelay: '<S27>/Delay_by_one_update_cycle1' incorporates:
     *  Merge: '<S27>/Merge3'
     */
    GRAR_ac_DW.Delay_by_one_update_cycle1_DSTATE =
        GRAR_ac_B.VeGRAC_e_MSSBEV_eTCS_TtSts;

    /* Update for UnitDelay: '<S27>/Delay_by_one_update_cycle2' incorporates:
     *  Merge: '<S27>/Merge4'
     */
    GRAR_ac_DW.Delay_by_one_update_cycle2_DSTATE =
        GRAR_ac_B.VeGRAC_e_MSSBEV_eDTC_TtSts;

    /* Update for UnitDelay: '<S27>/Delay_by_one_update_cycle3' incorporates:
     *  Merge: '<S27>/Merge5'
     */
    GRAR_ac_DW.Delay_by_one_update_cycle3_DSTATE =
        GRAR_ac_B.VeGRAC_e_MSSBEVrgnTargetSts;

    /* Update for UnitDelay: '<S27>/Delay_by_one_update_cycle4' incorporates:
     *  Merge: '<S27>/Merge6'
     */
    GRAR_ac_DW.Delay_by_one_update_cycle4_DSTATE =
        GRAR_ac_B.VeGRAC_e_MSSBEVeLNCtargetSts;

    /* Update for UnitDelay: '<S27>/Delay_by_one_update_cycle5' incorporates:
     *  Merge: '<S27>/Merge7'
     */
    GRAR_ac_DW.Delay_by_one_update_cycle5_DSTATE =
        GRAR_ac_B.VeGRAC_e_MSSBEVbTVtargetSts;

    /* Update for UnitDelay: '<S27>/Delay_by_one_update_cycle6' incorporates:
     *  Merge: '<S27>/Merge8'
     */
    GRAR_ac_DW.Delay_by_one_update_cycle6_DSTATE =
        GRAR_ac_B.VeGRAC_e_MSSBEVbTCStargetSts;

    /* Update for UnitDelay: '<S27>/Delay_by_one_update_cycle7' incorporates:
     *  Merge: '<S27>/Merge9'
     */
    GRAR_ac_DW.Delay_by_one_update_cycle7_DSTATE = VeGRAC_e_MSSBEVdrvPoffRegenTs;

    /* Update for UnitDelay: '<S27>/Delay_by_one_update_cycle8' incorporates:
     *  Merge: '<S27>/Merge1'
     */
    GRAR_ac_DW.Delay_by_one_update_cycle8_DSTATE = VeGRAC_e_MSSBEVrwsTargetSts;

    /* Update for UnitDelay: '<S27>/Delay_by_one_update_cycle9' incorporates:
     *  Merge: '<S27>/Merge2'
     */
    GRAR_ac_DW.Delay_by_one_update_cycle9_DSTATE =
        GRAR_ac_B.VeGRAC_e_MSSBEVeAWD_TgtSts;

    /* Update for UnitDelay: '<S27>/Delay_by_one_update_cycle10' incorporates:
     *  Merge: '<S27>/Merge10'
     */
    GRAR_ac_DW.Delay_by_one_update_cycle10_DSTATE = GRAR_ac_B.Merge10_d;

    /* Update for UnitDelay: '<S27>/Delay_by_one_update_cycle11' incorporates:
     *  Merge: '<S27>/Merge11'
     */
    GRAR_ac_DW.Delay_by_one_update_cycle11_DSTATE = GRAR_ac_B.Merge11;

    /* Outport: '<Root>/VeGRAR_b_Assign_RA_RIP_Ratio' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion2'
     *  SignalConversion generated from: '<S2>/VeGRAC_b_Assign_RA_RIP_Ratio'
     */
    (void)Rte_Write_VeGRAR_b_Assign_RA_RIP_Ratio_Value(VeGRAR_b_EOM_spec_01);

    /* Outport: '<Root>/VeGRAR_b_CC_TurnedOff' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion12'
     *  SignalConversion generated from: '<S2>/VeGRAC_b_CC_TurnedOff'
     */
    (void)Rte_Write_VeGRAR_b_CC_TurnedOff_Value(VeGRAR_b_EOM_spec_19);

    /* Outport: '<Root>/VeGRAR_b_DCFC_Off' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion20'
     *  SignalConversion generated from: '<S2>/VeGRAC_b_DCFC_Off'
     */
    (void)Rte_Write_VeGRAR_b_DCFC_Off_Value(VeGRAR_b_EOM_spec_29);

    /* Outport: '<Root>/VeGRAR_b_DCFC_limit2CalValu' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion19'
     *  SignalConversion generated from: '<S2>/VeGRAC_b_DCFC_limit2CalValu'
     */
    (void)Rte_Write_VeGRAR_b_DCFC_limit2CalValu_Value(VeGRAR_b_EOM_spec_28);

    /* Outport: '<Root>/VeGRAR_b_DisableACC' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion9'
     *  SignalConversion generated from: '<S2>/VeGRAC_b_DisableACC'
     */
    (void)Rte_Write_VeGRAR_b_DisableACC_Value(VeGRAR_b_EOM_spec_16);

    /* Outport: '<Root>/VeGRAR_b_DisableASL' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion6'
     *  SignalConversion generated from: '<S2>/VeGRAC_b_DisableASL'
     */
    (void)Rte_Write_VeGRAR_b_DisableASL_Value(VeGRAR_b_EOM_spec_14);

    /* Outport: '<Root>/VeGRAR_b_DisableCC' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion8'
     *  SignalConversion generated from: '<S2>/VeGRAC_b_DisableCC'
     */
    (void)Rte_Write_VeGRAR_b_DisableCC_Value(VeGRAR_b_EOM_spec_15);

    /* Outport: '<Root>/VeGRAR_b_DisableECoast' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion7'
     *  SignalConversion generated from: '<S2>/VeGRAC_b_DisableECoast'
     */
    (void)Rte_Write_VeGRAR_b_DisableECoast_Value(VeGRAR_b_EOM_spec_13);

    /* Outport: '<Root>/VeGRAR_b_DisableOPD' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion5'
     *  SignalConversion generated from: '<S2>/VeGRAC_b_DisableOPD'
     */
    (void)Rte_Write_VeGRAR_b_DisableOPD_Value(VeGRAR_b_EOM_spec_12);

    /* Outport: '<Root>/VeGRAR_b_DisableRegenBrkTrq' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion4'
     *  SignalConversion generated from: '<S2>/VeGRAC_b_DisableRegenBrkTrq'
     */
    (void)Rte_Write_VeGRAR_b_DisableRegenBrkTrq_Value(VeGRAR_b_EOM_spec_11);

    /* Outport: '<Root>/VeGRAR_b_EngageParkBrk' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion15'
     *  SignalConversion generated from: '<S2>/VeGRAC_b_EngageParkBrk'
     */
    (void)Rte_Write_VeGRAR_b_EngageParkBrk_Value(VeGRAR_b_EOM_spec_22);

    /* Outport: '<Root>/VeGRAR_b_LtdCurrent_ExitCar' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion13'
     *  SignalConversion generated from: '<S2>/VeGRAC_b_LtdCurrent_ExitCar'
     */
    (void)Rte_Write_VeGRAR_b_LtdCurrent_ExitCar_Value(VeGRAR_b_EOM_spec_20);

    /* Outport: '<Root>/VeGRAR_b_NoChrg_ExitCar' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion14'
     *  SignalConversion generated from: '<S2>/VeGRAC_b_NoChrg_ExitCar'
     */
    (void)Rte_Write_VeGRAR_b_NoChrg_ExitCar_Value(VeGRAR_b_EOM_spec_21);

    /* Outport: '<Root>/VeGRAR_b_OPD_TurnedOff' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion10'
     *  SignalConversion generated from: '<S2>/VeGRAC_b_OPD_TurnedOff'
     */
    (void)Rte_Write_VeGRAR_b_OPD_TurnedOff_Value(VeGRAR_b_EOM_spec_17);

    /* Outport: '<Root>/VeGRAR_b_TorqueLimCreep' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion11'
     *  SignalConversion generated from: '<S2>/VeGRAC_b_TorqueLimCreep'
     */
    (void)Rte_Write_VeGRAR_b_TorqueLimCreep_Value(VeGRAR_b_EOM_spec_18);

    /* Outport: '<Root>/VeGRAR_b_TotMtrTrqIncRampEnbl' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion3'
     *  SignalConversion generated from: '<S2>/VeGRAC_b_TotMtrTrqIncRampEnbl'
     */
    (void)Rte_Write_VeGRAR_b_TotMtrTrqIncRampEnbl_Value(VeGRAR_b_EOM_spec_10);

    /* Outport: '<Root>/VeGRAR_b_UseMtrN_toEnablPPawl' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion16'
     *  SignalConversion generated from: '<S2>/VeGRAC_b_UseMtrN_toEnablPPawl'
     */
    (void)Rte_Write_VeGRAR_b_UseMtrN_toEnablPPawl_Value(VeGRAR_b_EOM_spec_23);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeGRAR_e_MSSBEV_Action' incorporates:
     *  Merge: '<S21>/Merge'
     *  SignalConversion generated from: '<S2>/VeGRAC_e_MSSBEV_Action'
     */
    (void)Rte_Write_VeGRAR_e_MSSBEV_Action_Value(VeGRAC_e_MSSBEV_Action);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/GRAC'
     */
    /* Outport: '<Root>/VeGRAR_e_MSSBEV_Poff_TargetSts' incorporates:
     *  DataTypeConversion: '<S15>/DataTypeConversion'
     *  SignalConversion generated from: '<S2>/VeGRAC_e_MSSBEV_Poff_TargetSts'
     *  Switch: '<S9>/Switch9'
     */
    (void)Rte_Write_VeGRAR_e_MSSBEV_Poff_TargetSts_Value
        (VeGRAC_e_DRV_PoffRegenTgtSts);

    /* Switch: '<S9>/Switch10' incorporates:
     *  Constant: '<S102>/Calib'
     *  Constant: '<S16>/Constant'
     *  Merge: '<S27>/Merge1'
     */
    if (KeGRAR_b_Set_TargetSts_Normal)
    {
        tmp = CeGRAR_e_TargetSts_Normal;
    }
    else
    {
        tmp = VeGRAC_e_MSSBEVrwsTargetSts;
    }

    /* Outport: '<Root>/VeGRAR_e_MSSBEV_RWS_TargetSts' incorporates:
     *  SignalConversion generated from: '<S2>/VeGRAC_e_MSSBEV_RWS_TargetSts'
     *  Switch: '<S9>/Switch10'
     */
    (void)Rte_Write_VeGRAR_e_MSSBEV_RWS_TargetSts_Value(tmp);

    /* Switch: '<S9>/Switch5' incorporates:
     *  Constant: '<S102>/Calib'
     *  Constant: '<S16>/Constant'
     *  Merge: '<S27>/Merge5'
     */
    if (KeGRAR_b_Set_TargetSts_Normal)
    {
        tmp = CeGRAR_e_TargetSts_Normal;
    }
    else
    {
        tmp = GRAR_ac_B.VeGRAC_e_MSSBEVrgnTargetSts;
    }

    /* Outport: '<Root>/VeGRAR_e_MSSBEV_Regen_TargetSts' incorporates:
     *  SignalConversion generated from: '<S2>/VeGRAC_e_MSSBEV_Regen_TargetSts'
     *  Switch: '<S9>/Switch5'
     */
    (void)Rte_Write_VeGRAR_e_MSSBEV_Regen_TargetSts_Value(tmp);

    /* Switch: '<S9>/Switch12' incorporates:
     *  Constant: '<S102>/Calib'
     *  Constant: '<S16>/Constant'
     *  Merge: '<S27>/Merge10'
     */
    if (KeGRAR_b_Set_TargetSts_Normal)
    {
        tmp = CeGRAR_e_TargetSts_Normal;
    }
    else
    {
        tmp = GRAR_ac_B.Merge10_d;
    }

    /* Outport: '<Root>/VeGRAR_e_MSSBEV_WED_TargetSts' incorporates:
     *  SignalConversion generated from: '<S2>/VeGRAC_e_MSSBEV_WED_TargetSts'
     *  Switch: '<S9>/Switch12'
     */
    (void)Rte_Write_VeGRAR_e_MSSBEV_WED_TargetSts_Value(tmp);

    /* Switch: '<S9>/Switch8' incorporates:
     *  Constant: '<S102>/Calib'
     *  Constant: '<S16>/Constant'
     *  Merge: '<S27>/Merge8'
     */
    if (KeGRAR_b_Set_TargetSts_Normal)
    {
        tmp = CeGRAR_e_TargetSts_Normal;
    }
    else
    {
        tmp = GRAR_ac_B.VeGRAC_e_MSSBEVbTCStargetSts;
    }

    /* Outport: '<Root>/VeGRAR_e_MSSBEV_bTCS_TargetSts' incorporates:
     *  SignalConversion generated from: '<S2>/VeGRAC_e_MSSBEV_bTCS_TargetSts'
     *  Switch: '<S9>/Switch8'
     */
    (void)Rte_Write_VeGRAR_e_MSSBEV_bTCS_TargetSts_Value(tmp);

    /* Switch: '<S9>/Switch7' incorporates:
     *  Constant: '<S102>/Calib'
     *  Constant: '<S16>/Constant'
     *  Merge: '<S27>/Merge7'
     */
    if (KeGRAR_b_Set_TargetSts_Normal)
    {
        tmp = CeGRAR_e_TargetSts_Normal;
    }
    else
    {
        tmp = GRAR_ac_B.VeGRAC_e_MSSBEVbTVtargetSts;
    }

    /* Outport: '<Root>/VeGRAR_e_MSSBEV_bTV_TargetSts' incorporates:
     *  SignalConversion generated from: '<S2>/VeGRAC_e_MSSBEV_bTV_TargetSts'
     *  Switch: '<S9>/Switch7'
     */
    (void)Rte_Write_VeGRAR_e_MSSBEV_bTV_TargetSts_Value(tmp);

    /* Switch: '<S9>/Switch4' incorporates:
     *  Constant: '<S102>/Calib'
     *  Constant: '<S16>/Constant'
     *  Merge: '<S27>/Merge4'
     */
    if (KeGRAR_b_Set_TargetSts_Normal)
    {
        tmp = CeGRAR_e_TargetSts_Normal;
    }
    else
    {
        tmp = GRAR_ac_B.VeGRAC_e_MSSBEV_eDTC_TtSts;
    }

    /* Outport: '<Root>/VeGRAR_e_MSSBEV_eDTC_TargetSts' incorporates:
     *  SignalConversion generated from: '<S2>/VeGRAC_e_MSSBEV_eDTC_TargetSts'
     *  Switch: '<S9>/Switch4'
     */
    (void)Rte_Write_VeGRAR_e_MSSBEV_eDTC_TargetSts_Value(tmp);

    /* Switch: '<S9>/Switch6' incorporates:
     *  Constant: '<S102>/Calib'
     *  Constant: '<S16>/Constant'
     *  Merge: '<S27>/Merge6'
     */
    if (KeGRAR_b_Set_TargetSts_Normal)
    {
        tmp = CeGRAR_e_TargetSts_Normal;
    }
    else
    {
        tmp = GRAR_ac_B.VeGRAC_e_MSSBEVeLNCtargetSts;
    }

    /* Outport: '<Root>/VeGRAR_e_MSSBEV_eLNC_TargetSts' incorporates:
     *  SignalConversion generated from: '<S2>/VeGRAC_e_MSSBEV_eLNC_TargetSts'
     *  Switch: '<S9>/Switch6'
     */
    (void)Rte_Write_VeGRAR_e_MSSBEV_eLNC_TargetSts_Value(tmp);

    /* Switch: '<S9>/Switch13' incorporates:
     *  Constant: '<S102>/Calib'
     *  Constant: '<S16>/Constant'
     *  Merge: '<S27>/Merge11'
     */
    if (KeGRAR_b_Set_TargetSts_Normal)
    {
        tmp = CeGRAR_e_TargetSts_Normal;
    }
    else
    {
        tmp = GRAR_ac_B.Merge11;
    }

    /* Outport: '<Root>/VeGRAR_e_MSSBEV_eLSD_TargetSts' incorporates:
     *  SignalConversion generated from: '<S2>/VeGRAC_e_MSSBEV_eLSD_TargetSts'
     *  Switch: '<S9>/Switch13'
     */
    (void)Rte_Write_VeGRAR_e_MSSBEV_eLSD_TargetSts_Value(tmp);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeGRAR_e_MSSBEV_eTCS_TargetSts' incorporates:
     *  SignalConversion generated from: '<S2>/VeGRAC_e_MSSBEV_eTCS_TargetSts'
     *  Switch: '<S9>/Switch3'
     */
    (void)Rte_Write_VeGRAR_e_MSSBEV_eTCS_TargetSts_Value
        (VeGRAC_e_MSSBEVeTCS_TargetSts);

    /* Outport: '<Root>/VeGRAR_e_MSSBEV_DRV_PoffRegen_TargetSts' incorporates:
     *  SignalConversion generated from: '<S2>/VeGRAC_e_MSSBEVdrvPoffRegenTS'
     *  Switch: '<S9>/Switch9'
     */
    (void)Rte_Write_VeGRAR_e_MSSBEV_DRV_PoffRegen_TargetSts_Value
        (VeGRAC_e_DRV_PoffRegenTgtSts);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/GRAC'
     */
    /* Switch: '<S9>/Switch11' incorporates:
     *  Constant: '<S102>/Calib'
     *  Constant: '<S16>/Constant'
     *  Merge: '<S27>/Merge2'
     */
    if (KeGRAR_b_Set_TargetSts_Normal)
    {
        tmp = CeGRAR_e_TargetSts_Normal;
    }
    else
    {
        tmp = GRAR_ac_B.VeGRAC_e_MSSBEVeAWD_TgtSts;
    }

    /* Outport: '<Root>/VeGRAR_e_MSSBEV_eAWD_TargetSts' incorporates:
     *  SignalConversion generated from: '<S2>/VeGRAC_e_MSSBEVeAWD_TargetSts '
     *  Switch: '<S9>/Switch11'
     */
    (void)Rte_Write_VeGRAR_e_MSSBEV_eAWD_TargetSts_Value(tmp);

    /* Outport: '<Root>/VeGRAR_e_PRND_Req' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion17'
     *  Merge: '<S22>/Merge'
     *  SignalConversion generated from: '<S2>/VeGRAC_e_PRND_Req'
     */
    (void)Rte_Write_VeGRAR_e_PRND_Req_Value(VeGRAC_e_PRND_Req);

    /* Outport: '<Root>/VeGRAR_e_ParkPawlReq' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion18'
     *  Merge: '<S23>/Merge'
     *  SignalConversion generated from: '<S2>/VeGRAC_e_ParkPawlReq'
     */
    (void)Rte_Write_VeGRAR_e_ParkPawlReq_Value(VeGRAC_e_ParkPawlReq);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeGRAR_r_RA_RIP_Ratio' incorporates:
     *  SignalConversion generated from: '<S2>/VeGRAC_r_RA_RIP_Ratio'
     */
    (void)Rte_Write_VeGRAR_r_RA_RIP_Ratio_Value(VeGRAC_r_RA_RIP_Ratio);

    /* Outport: '<Root>/VeGRAR_e_TotMtrTrqRmdlActn' incorporates:
     *  Merge: '<S110>/Merge'
     *  SignalConversion generated from: '<S2>/VeGRAR_e_TotMtrTrqRmdlActn'
     */
    (void)Rte_Write_VeGRAR_e_TotMtrTrqRmdlActn_Value(VeGRAC_e_TotMtrTrqRmdlActn);

    /* Outputs for Atomic SubSystem: '<S2>/GRAR_MedTEB_StopCheckpoint' */
    /* FunctionCaller: '<S8>/GRAR_MedTEB_StopCheckpoint ' */
    Rte_Call_GRAR_MedTEB_StopCheckpoint_CheckpointReached();

    /* End of Outputs for SubSystem: '<S2>/GRAR_MedTEB_StopCheckpoint' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Output function */
FUNC(void, GRAR_CODE) GRAR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/GRAR_PwrOn'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S447>/VeGRAR_b_AsgnRA_RIP_RatioInit' */
    GRAR_ac_B.OutportBufferForVeGRAR_b_AsgnRA_RIP_Rati = false;

    /* SignalConversion generated from: '<S447>/VeGRAR_r_RA_RIP_Ratio_Init' */
    GRAR_ac_B.OutportBufferForVeGRAR_r_RA_RIP_Ratio_In = 0.5F;

    /* SignalConversion generated from: '<S447>/VeGRAR_e_TotMtrTrqRmdlActnInit' incorporates:
     *  Constant: '<S452>/Constant'
     */
    GRAR_ac_B.OutportBufferForVeGRAR_e_TotMtrTrqRmdlAc = GRAR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S447>/VeGRAR_b_TMtrTqIncRpEnbl_Init' */
    GRAR_ac_B.OutportBufferForVeGRAR_b_TMtrTqIncRpEnbl = false;

    /* SignalConversion generated from: '<S447>/VeGRAR_b_DblRgnBrkTrq_Init' */
    GRAR_ac_B.OutportBufferForVeGRAR_b_DblRgnBrkTrq_In = false;

    /* SignalConversion generated from: '<S447>/VeGRAR_b_Disable_OPD_Init' */
    GRAR_ac_B.OutportBufferForVeGRAR_b_Disable_OPD_Ini = false;

    /* SignalConversion generated from: '<S447>/VeGRAR_b_DisableECoast_Init' */
    GRAR_ac_B.OutportBufferForVeGRAR_b_DisableECoast_I = false;

    /* SignalConversion generated from: '<S447>/VeGRAR_b_DisableASL_Init' */
    GRAR_ac_B.OutportBufferForVeGRAR_b_DisableASL_Init = false;

    /* SignalConversion generated from: '<S447>/VeGRAR_b_DisableCC_Init' */
    GRAR_ac_B.OutportBufferForVeGRAR_b_DisableCC_Init = false;

    /* SignalConversion generated from: '<S447>/VeGRAR_b_DisableACC_Init' */
    GRAR_ac_B.OutportBufferForVeGRAR_b_DisableACC_Init = false;

    /* SignalConversion generated from: '<S447>/VeGRAR_b_OPD_TurnedOff_Init' */
    GRAR_ac_B.OutportBufferForVeGRAR_b_OPD_TurnedOff_I = false;

    /* SignalConversion generated from: '<S447>/VeGRAR_b_TorqueLimCreep_Init' */
    GRAR_ac_B.OutportBufferForVeGRAR_b_TorqueLimCreep_ = false;

    /* SignalConversion generated from: '<S447>/VeGRAR_b_CC_TurnedOff_Init' */
    GRAR_ac_B.OutportBufferForVeGRAR_b_CC_TurnedOff_In = false;

    /* SignalConversion generated from: '<S447>/VeGRAR_b_LtdCurrentExitCarInit' */
    GRAR_ac_B.OutportBufferForVeGRAR_b_LtdCurrentExitC = false;

    /* SignalConversion generated from: '<S447>/VeGRAR_b_NoChrg_ExitCar_Init' */
    GRAR_ac_B.OutportBufferForVeGRAR_b_NoChrg_ExitCar_ = false;

    /* SignalConversion generated from: '<S447>/VeGRAR_b_EngageParkBrk_Init' */
    GRAR_ac_B.OutportBufferForVeGRAR_b_EngageParkBrk_I = false;

    /* SignalConversion generated from: '<S447>/VeGRAR_b_UseMtrN2EnablPPInit' */
    GRAR_ac_B.OutportBufferForVeGRAR_b_UseMtrN2EnablPP = false;

    /* SignalConversion generated from: '<S447>/VeGRAR_e_PRND_Req_Init' incorporates:
     *  Constant: '<S449>/Constant'
     */
    GRAR_ac_B.OutportBufferForVeGRAR_e_PRND_Req_Init = GRAR_ac_ConstB.Constant_g;

    /* SignalConversion generated from: '<S447>/VeGRAR_e_ParkPawlReq_Init' incorporates:
     *  Constant: '<S448>/Constant'
     */
    GRAR_ac_B.OutportBufferForVeGRAR_e_ParkPawlReq_Ini =
        GRAR_ac_ConstB.Constant_o;

    /* SignalConversion generated from: '<S447>/VeGRAR_b_DCFC_limit2CalVaInit' */
    GRAR_ac_B.OutportBufferForVeGRAR_b_DCFC_limit2CalV = false;

    /* SignalConversion generated from: '<S447>/VeGRAR_b_DCFC_Off_Init' */
    GRAR_ac_B.OutportBufferForVeGRAR_b_DCFC_Off_Init = false;

    /* SignalConversion generated from: '<S447>/VeGRAR_e_MSSBEV_Action_Init' incorporates:
     *  Constant: '<S451>/Constant'
     */
    GRAR_ac_B.OutportBufferForVeGRAR_e_MSSBEV_Action_I =
        GRAR_ac_ConstB.Constant_a;

    /* SignalConversion generated from: '<S447>/VeGRAR_e_MBPoffRgnTargetStsIn' incorporates:
     *  Constant: '<S450>/Constant'
     */
    GRAR_ac_B.OutportBufferForVeGRAR_e_MBPoffRgnTarget =
        GRAR_ac_ConstB.Constant_j;

    /* SignalConversion generated from: '<S447>/VeGRAR_e_MB_Poff_TargetStsIn' incorporates:
     *  Constant: '<S450>/Constant'
     */
    GRAR_ac_B.OutportBufferForVeGRAR_e_MB_Poff_TargetS =
        GRAR_ac_ConstB.Constant_j;

    /* SignalConversion generated from: '<S447>/VeGRAR_e_MB_WED_TargetStsInit' incorporates:
     *  Constant: '<S450>/Constant'
     */
    GRAR_ac_B.OutportBufferForVeGRAR_e_MB_WED_TargetSt =
        GRAR_ac_ConstB.Constant_j;

    /* SignalConversion generated from: '<S447>/VeGRAR_e_MBbTCS_TargetStsInit' incorporates:
     *  Constant: '<S450>/Constant'
     */
    GRAR_ac_B.OutportBufferForVeGRAR_e_MBbTCS_TargetSt =
        GRAR_ac_ConstB.Constant_j;

    /* SignalConversion generated from: '<S447>/VeGRAR_e_MBbTV_TargetSts_Init' incorporates:
     *  Constant: '<S450>/Constant'
     */
    GRAR_ac_B.OutportBufferForVeGRAR_e_MBbTV_TargetSts =
        GRAR_ac_ConstB.Constant_j;

    /* SignalConversion generated from: '<S447>/VeGRAR_e_MBeDTC_TargetStsInit' incorporates:
     *  Constant: '<S450>/Constant'
     */
    GRAR_ac_B.OutportBufferForVeGRAR_e_MBeDTC_TargetSt =
        GRAR_ac_ConstB.Constant_j;

    /* SignalConversion generated from: '<S447>/VeGRAR_e_MBeLNC_TargetStsInit' incorporates:
     *  Constant: '<S450>/Constant'
     */
    GRAR_ac_B.OutportBufferForVeGRAR_e_MBeLNC_TargetSt =
        GRAR_ac_ConstB.Constant_j;

    /* SignalConversion generated from: '<S447>/VeGRAR_e_MBeLSD_TargetStsInit' incorporates:
     *  Constant: '<S450>/Constant'
     */
    GRAR_ac_B.OutportBufferForVeGRAR_e_MBeLSD_TargetSt =
        GRAR_ac_ConstB.Constant_j;

    /* SignalConversion generated from: '<S447>/VeGRAR_e_MBeTCS_TargetStsInit' incorporates:
     *  Constant: '<S450>/Constant'
     */
    GRAR_ac_B.OutportBufferForVeGRAR_e_MBeTCS_TargetSt =
        GRAR_ac_ConstB.Constant_j;

    /* SignalConversion generated from: '<S447>/VeGRAR_e_MBregen_TargetStsInit' incorporates:
     *  Constant: '<S450>/Constant'
     */
    GRAR_ac_B.OutportBufferForVeGRAR_e_MBregen_TargetS =
        GRAR_ac_ConstB.Constant_j;

    /* SignalConversion generated from: '<S447>/VeGRAR_e_MBrwsTargetSts_Init' incorporates:
     *  Constant: '<S450>/Constant'
     */
    GRAR_ac_B.OutportBufferForVeGRAR_e_MBrwsTargetSts_ =
        GRAR_ac_ConstB.Constant_j;

    /* SignalConversion generated from: '<S447>/VeGRAR_e_MSSBEVeAWDtgtStInit' incorporates:
     *  Constant: '<S450>/Constant'
     */
    GRAR_ac_B.OutportBufferForVeGRAR_e_MSSBEVeAWDtgtSt =
        GRAR_ac_ConstB.Constant_j;

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VeGRAR_b_Assign_RA_RIP_Ratio' incorporates:
     *  SignalConversion generated from: '<S3>/VeGRAR_b_AsgnRA_RIP_RatioInit'
     */
    (void)Rte_Write_VeGRAR_b_Assign_RA_RIP_Ratio_Value
        (GRAR_ac_B.OutportBufferForVeGRAR_b_AsgnRA_RIP_Rati);

    /* Outport: '<Root>/VeGRAR_b_CC_TurnedOff' incorporates:
     *  SignalConversion generated from: '<S3>/VeGRAR_b_CC_TurnedOff_Init'
     */
    (void)Rte_Write_VeGRAR_b_CC_TurnedOff_Value
        (GRAR_ac_B.OutportBufferForVeGRAR_b_CC_TurnedOff_In);

    /* Outport: '<Root>/VeGRAR_b_DCFC_Off' incorporates:
     *  SignalConversion generated from: '<S3>/VeGRAR_b_DCFC_Off_Init'
     */
    (void)Rte_Write_VeGRAR_b_DCFC_Off_Value
        (GRAR_ac_B.OutportBufferForVeGRAR_b_DCFC_Off_Init);

    /* Outport: '<Root>/VeGRAR_b_DCFC_limit2CalValu' incorporates:
     *  SignalConversion generated from: '<S3>/VeGRAR_b_DCFC_limit2CalVaInit'
     */
    (void)Rte_Write_VeGRAR_b_DCFC_limit2CalValu_Value
        (GRAR_ac_B.OutportBufferForVeGRAR_b_DCFC_limit2CalV);

    /* Outport: '<Root>/VeGRAR_b_DisableRegenBrkTrq' incorporates:
     *  SignalConversion generated from: '<S3>/VeGRAR_b_DblRgnBrkTrq_Init'
     */
    (void)Rte_Write_VeGRAR_b_DisableRegenBrkTrq_Value
        (GRAR_ac_B.OutportBufferForVeGRAR_b_DblRgnBrkTrq_In);

    /* Outport: '<Root>/VeGRAR_b_DisableACC' incorporates:
     *  SignalConversion generated from: '<S3>/VeGRAR_b_DisableACC_Init'
     */
    (void)Rte_Write_VeGRAR_b_DisableACC_Value
        (GRAR_ac_B.OutportBufferForVeGRAR_b_DisableACC_Init);

    /* Outport: '<Root>/VeGRAR_b_DisableASL' incorporates:
     *  SignalConversion generated from: '<S3>/VeGRAR_b_DisableASL_Init'
     */
    (void)Rte_Write_VeGRAR_b_DisableASL_Value
        (GRAR_ac_B.OutportBufferForVeGRAR_b_DisableASL_Init);

    /* Outport: '<Root>/VeGRAR_b_DisableCC' incorporates:
     *  SignalConversion generated from: '<S3>/VeGRAR_b_DisableCC_Init'
     */
    (void)Rte_Write_VeGRAR_b_DisableCC_Value
        (GRAR_ac_B.OutportBufferForVeGRAR_b_DisableCC_Init);

    /* Outport: '<Root>/VeGRAR_b_DisableECoast' incorporates:
     *  SignalConversion generated from: '<S3>/VeGRAR_b_DisableECoast_Init'
     */
    (void)Rte_Write_VeGRAR_b_DisableECoast_Value
        (GRAR_ac_B.OutportBufferForVeGRAR_b_DisableECoast_I);

    /* Outport: '<Root>/VeGRAR_b_DisableOPD' incorporates:
     *  SignalConversion generated from: '<S3>/VeGRAR_b_Disable_OPD_Init'
     */
    (void)Rte_Write_VeGRAR_b_DisableOPD_Value
        (GRAR_ac_B.OutportBufferForVeGRAR_b_Disable_OPD_Ini);

    /* Outport: '<Root>/VeGRAR_b_EngageParkBrk' incorporates:
     *  SignalConversion generated from: '<S3>/VeGRAR_b_EngageParkBrk_Init'
     */
    (void)Rte_Write_VeGRAR_b_EngageParkBrk_Value
        (GRAR_ac_B.OutportBufferForVeGRAR_b_EngageParkBrk_I);

    /* Outport: '<Root>/VeGRAR_b_LtdCurrent_ExitCar' incorporates:
     *  SignalConversion generated from: '<S3>/VeGRAR_b_LtdCurrentExitCarInit'
     */
    (void)Rte_Write_VeGRAR_b_LtdCurrent_ExitCar_Value
        (GRAR_ac_B.OutportBufferForVeGRAR_b_LtdCurrentExitC);

    /* Outport: '<Root>/VeGRAR_b_NoChrg_ExitCar' incorporates:
     *  SignalConversion generated from: '<S3>/VeGRAR_b_NoChrg_ExitCar_Init'
     */
    (void)Rte_Write_VeGRAR_b_NoChrg_ExitCar_Value
        (GRAR_ac_B.OutportBufferForVeGRAR_b_NoChrg_ExitCar_);

    /* Outport: '<Root>/VeGRAR_b_OPD_TurnedOff' incorporates:
     *  SignalConversion generated from: '<S3>/VeGRAR_b_OPD_TurnedOff_Init'
     */
    (void)Rte_Write_VeGRAR_b_OPD_TurnedOff_Value
        (GRAR_ac_B.OutportBufferForVeGRAR_b_OPD_TurnedOff_I);

    /* Outport: '<Root>/VeGRAR_b_TotMtrTrqIncRampEnbl' incorporates:
     *  SignalConversion generated from: '<S3>/VeGRAR_b_TMtrTqIncRpEnbl_Init'
     */
    (void)Rte_Write_VeGRAR_b_TotMtrTrqIncRampEnbl_Value
        (GRAR_ac_B.OutportBufferForVeGRAR_b_TMtrTqIncRpEnbl);

    /* Outport: '<Root>/VeGRAR_b_TorqueLimCreep' incorporates:
     *  SignalConversion generated from: '<S3>/VeGRAR_b_TorqueLimCreep_Init'
     */
    (void)Rte_Write_VeGRAR_b_TorqueLimCreep_Value
        (GRAR_ac_B.OutportBufferForVeGRAR_b_TorqueLimCreep_);

    /* Outport: '<Root>/VeGRAR_b_UseMtrN_toEnablPPawl' incorporates:
     *  SignalConversion generated from: '<S3>/VeGRAR_b_UseMtrN2EnablPPInit'
     */
    (void)Rte_Write_VeGRAR_b_UseMtrN_toEnablPPawl_Value
        (GRAR_ac_B.OutportBufferForVeGRAR_b_UseMtrN2EnablPP);

    /* Outport: '<Root>/VeGRAR_e_MSSBEV_DRV_PoffRegen_TargetSts' incorporates:
     *  SignalConversion generated from: '<S3>/VeGRAR_e_MBPoffRgnTargetStsIn'
     *  SignalConversion generated from: '<S447>/VeGRAR_e_MBPoffRgnTargetStsIn'
     */
    (void)Rte_Write_VeGRAR_e_MSSBEV_DRV_PoffRegen_TargetSts_Value
        (GRAR_ac_B.OutportBufferForVeGRAR_e_MBPoffRgnTarget);

    /* Outport: '<Root>/VeGRAR_e_MSSBEV_Poff_TargetSts' incorporates:
     *  SignalConversion generated from: '<S3>/VeGRAR_e_MB_Poff_TargetStsIn'
     *  SignalConversion generated from: '<S447>/VeGRAR_e_MB_Poff_TargetStsIn'
     */
    (void)Rte_Write_VeGRAR_e_MSSBEV_Poff_TargetSts_Value
        (GRAR_ac_B.OutportBufferForVeGRAR_e_MB_Poff_TargetS);

    /* Outport: '<Root>/VeGRAR_e_MSSBEV_WED_TargetSts' incorporates:
     *  SignalConversion generated from: '<S3>/VeGRAR_e_MB_WED_TargetStsInit'
     *  SignalConversion generated from: '<S447>/VeGRAR_e_MB_WED_TargetStsInit'
     */
    (void)Rte_Write_VeGRAR_e_MSSBEV_WED_TargetSts_Value
        (GRAR_ac_B.OutportBufferForVeGRAR_e_MB_WED_TargetSt);

    /* Outport: '<Root>/VeGRAR_e_MSSBEV_bTCS_TargetSts' incorporates:
     *  SignalConversion generated from: '<S3>/VeGRAR_e_MBbTCS_TargetStsInit'
     *  SignalConversion generated from: '<S447>/VeGRAR_e_MBbTCS_TargetStsInit'
     */
    (void)Rte_Write_VeGRAR_e_MSSBEV_bTCS_TargetSts_Value
        (GRAR_ac_B.OutportBufferForVeGRAR_e_MBbTCS_TargetSt);

    /* Outport: '<Root>/VeGRAR_e_MSSBEV_bTV_TargetSts' incorporates:
     *  SignalConversion generated from: '<S3>/VeGRAR_e_MBbTV_TargetSts_Init'
     *  SignalConversion generated from: '<S447>/VeGRAR_e_MBbTV_TargetSts_Init'
     */
    (void)Rte_Write_VeGRAR_e_MSSBEV_bTV_TargetSts_Value
        (GRAR_ac_B.OutportBufferForVeGRAR_e_MBbTV_TargetSts);

    /* Outport: '<Root>/VeGRAR_e_MSSBEV_eDTC_TargetSts' incorporates:
     *  SignalConversion generated from: '<S3>/VeGRAR_e_MBeDTC_TargetStsInit'
     *  SignalConversion generated from: '<S447>/VeGRAR_e_MBeDTC_TargetStsInit'
     */
    (void)Rte_Write_VeGRAR_e_MSSBEV_eDTC_TargetSts_Value
        (GRAR_ac_B.OutportBufferForVeGRAR_e_MBeDTC_TargetSt);

    /* Outport: '<Root>/VeGRAR_e_MSSBEV_eLNC_TargetSts' incorporates:
     *  SignalConversion generated from: '<S3>/VeGRAR_e_MBeLNC_TargetStsInit'
     *  SignalConversion generated from: '<S447>/VeGRAR_e_MBeLNC_TargetStsInit'
     */
    (void)Rte_Write_VeGRAR_e_MSSBEV_eLNC_TargetSts_Value
        (GRAR_ac_B.OutportBufferForVeGRAR_e_MBeLNC_TargetSt);

    /* Outport: '<Root>/VeGRAR_e_MSSBEV_eLSD_TargetSts' incorporates:
     *  SignalConversion generated from: '<S3>/VeGRAR_e_MBeLSD_TargetStsInit'
     *  SignalConversion generated from: '<S447>/VeGRAR_e_MBeLSD_TargetStsInit'
     */
    (void)Rte_Write_VeGRAR_e_MSSBEV_eLSD_TargetSts_Value
        (GRAR_ac_B.OutportBufferForVeGRAR_e_MBeLSD_TargetSt);

    /* Outport: '<Root>/VeGRAR_e_MSSBEV_eTCS_TargetSts' incorporates:
     *  SignalConversion generated from: '<S3>/VeGRAR_e_MBeTCS_TargetStsInit'
     *  SignalConversion generated from: '<S447>/VeGRAR_e_MBeTCS_TargetStsInit'
     */
    (void)Rte_Write_VeGRAR_e_MSSBEV_eTCS_TargetSts_Value
        (GRAR_ac_B.OutportBufferForVeGRAR_e_MBeTCS_TargetSt);

    /* Outport: '<Root>/VeGRAR_e_MSSBEV_Regen_TargetSts' incorporates:
     *  SignalConversion generated from: '<S3>/VeGRAR_e_MBregen_TargetStsInit'
     *  SignalConversion generated from: '<S447>/VeGRAR_e_MBregen_TargetStsInit'
     */
    (void)Rte_Write_VeGRAR_e_MSSBEV_Regen_TargetSts_Value
        (GRAR_ac_B.OutportBufferForVeGRAR_e_MBregen_TargetS);

    /* Outport: '<Root>/VeGRAR_e_MSSBEV_RWS_TargetSts' incorporates:
     *  SignalConversion generated from: '<S3>/VeGRAR_e_MBrwsTargetSts_Init'
     *  SignalConversion generated from: '<S447>/VeGRAR_e_MBrwsTargetSts_Init'
     */
    (void)Rte_Write_VeGRAR_e_MSSBEV_RWS_TargetSts_Value
        (GRAR_ac_B.OutportBufferForVeGRAR_e_MBrwsTargetSts_);

    /* Outport: '<Root>/VeGRAR_e_MSSBEV_Action' incorporates:
     *  SignalConversion generated from: '<S3>/VeGRAR_e_MSSBEV_Action_Init'
     *  SignalConversion generated from: '<S447>/VeGRAR_e_MSSBEV_Action_Init'
     */
    (void)Rte_Write_VeGRAR_e_MSSBEV_Action_Value
        (GRAR_ac_B.OutportBufferForVeGRAR_e_MSSBEV_Action_I);

    /* Outport: '<Root>/VeGRAR_e_MSSBEV_eAWD_TargetSts' incorporates:
     *  SignalConversion generated from: '<S3>/VeGRAR_e_MSSBEVeAWDtgtStInit'
     *  SignalConversion generated from: '<S447>/VeGRAR_e_MSSBEVeAWDtgtStInit'
     */
    (void)Rte_Write_VeGRAR_e_MSSBEV_eAWD_TargetSts_Value
        (GRAR_ac_B.OutportBufferForVeGRAR_e_MSSBEVeAWDtgtSt);

    /* Outport: '<Root>/VeGRAR_e_PRND_Req' incorporates:
     *  SignalConversion generated from: '<S3>/VeGRAR_e_PRND_Req_Init'
     *  SignalConversion generated from: '<S447>/VeGRAR_e_PRND_Req_Init'
     */
    (void)Rte_Write_VeGRAR_e_PRND_Req_Value
        (GRAR_ac_B.OutportBufferForVeGRAR_e_PRND_Req_Init);

    /* Outport: '<Root>/VeGRAR_e_ParkPawlReq' incorporates:
     *  SignalConversion generated from: '<S3>/VeGRAR_e_ParkPawlReq_Init'
     *  SignalConversion generated from: '<S447>/VeGRAR_e_ParkPawlReq_Init'
     */
    (void)Rte_Write_VeGRAR_e_ParkPawlReq_Value
        (GRAR_ac_B.OutportBufferForVeGRAR_e_ParkPawlReq_Ini);

    /* Outport: '<Root>/VeGRAR_e_TotMtrTrqRmdlActn' incorporates:
     *  SignalConversion generated from: '<S3>/VeGRAR_e_TotMtrTrqRmdlActnInit'
     *  SignalConversion generated from: '<S447>/VeGRAR_e_TotMtrTrqRmdlActnInit'
     */
    (void)Rte_Write_VeGRAR_e_TotMtrTrqRmdlActn_Value
        (GRAR_ac_B.OutportBufferForVeGRAR_e_TotMtrTrqRmdlAc);

    /* Outport: '<Root>/VeGRAR_r_RA_RIP_Ratio' incorporates:
     *  SignalConversion generated from: '<S3>/VeGRAR_r_RA_RIP_Ratio_Init'
     */
    (void)Rte_Write_VeGRAR_r_RA_RIP_Ratio_Value
        (GRAR_ac_B.OutportBufferForVeGRAR_r_RA_RIP_Ratio_In);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, GRAR_CODE) GRAR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {
        GRAR_ac_B.OutportBufferForVeGRAR_e_MBPoffRgnTarget =
            CeGRAR_e_TargetSts_Normal;
        GRAR_ac_B.OutportBufferForVeGRAR_e_MB_Poff_TargetS =
            CeGRAR_e_TargetSts_Normal;
        GRAR_ac_B.OutportBufferForVeGRAR_e_MB_WED_TargetSt =
            CeGRAR_e_TargetSts_Normal;
        GRAR_ac_B.OutportBufferForVeGRAR_e_MBbTCS_TargetSt =
            CeGRAR_e_TargetSts_Normal;
        GRAR_ac_B.OutportBufferForVeGRAR_e_MBbTV_TargetSts =
            CeGRAR_e_TargetSts_Normal;
        GRAR_ac_B.OutportBufferForVeGRAR_e_MBeDTC_TargetSt =
            CeGRAR_e_TargetSts_Normal;
        GRAR_ac_B.OutportBufferForVeGRAR_e_MBeLNC_TargetSt =
            CeGRAR_e_TargetSts_Normal;
        GRAR_ac_B.OutportBufferForVeGRAR_e_MBeLSD_TargetSt =
            CeGRAR_e_TargetSts_Normal;
        GRAR_ac_B.OutportBufferForVeGRAR_e_MBeTCS_TargetSt =
            CeGRAR_e_TargetSts_Normal;
        GRAR_ac_B.OutportBufferForVeGRAR_e_MBregen_TargetS =
            CeGRAR_e_TargetSts_Normal;
        GRAR_ac_B.OutportBufferForVeGRAR_e_MBrwsTargetSts_ =
            CeGRAR_e_TargetSts_Normal;
        GRAR_ac_B.OutportBufferForVeGRAR_e_MSSBEVeAWDtgtSt =
            CeGRAR_e_TargetSts_Normal;
        GRAR_ac_B.Delay_by_one_update_cycle1 = CeGRAR_e_TargetSts_Normal;
        GRAR_ac_B.Delay_by_one_update_cycle2 = CeGRAR_e_TargetSts_Normal;
        GRAR_ac_B.Delay_by_one_update_cycle3 = CeGRAR_e_TargetSts_Normal;
        GRAR_ac_B.Delay_by_one_update_cycle4 = CeGRAR_e_TargetSts_Normal;
        GRAR_ac_B.Delay_by_one_update_cycle5 = CeGRAR_e_TargetSts_Normal;
        GRAR_ac_B.Delay_by_one_update_cycle6 = CeGRAR_e_TargetSts_Normal;
        GRAR_ac_B.Delay_by_one_update_cycle7 = CeGRAR_e_TargetSts_Normal;
        GRAR_ac_B.Delay_by_one_update_cycle8 = CeGRAR_e_TargetSts_Normal;
        GRAR_ac_B.Delay_by_one_update_cycle9 = CeGRAR_e_TargetSts_Normal;
        GRAR_ac_B.Delay_by_one_update_cycle10 = CeGRAR_e_TargetSts_Normal;
        GRAR_ac_B.Delay_by_one_update_cycle11 = CeGRAR_e_TargetSts_Normal;
        GRAR_ac_B.Merge10_d = CeGRAR_e_TargetSts_Normal;
        GRAR_ac_B.Merge11 = CeGRAR_e_TargetSts_Normal;
        GRAR_ac_B.VeGRAC_e_MSSBEVeAWD_TgtSts = CeGRAR_e_TargetSts_Normal;
        GRAR_ac_B.VeGRAC_e_MSSBEV_eTCS_TtSts = CeGRAR_e_TargetSts_Normal;
        GRAR_ac_B.VeGRAC_e_MSSBEV_eDTC_TtSts = CeGRAR_e_TargetSts_Normal;
        GRAR_ac_B.VeGRAC_e_MSSBEVrgnTargetSts = CeGRAR_e_TargetSts_Normal;
        GRAR_ac_B.VeGRAC_e_MSSBEVeLNCtargetSts = CeGRAR_e_TargetSts_Normal;
        GRAR_ac_B.VeGRAC_e_MSSBEVbTVtargetSts = CeGRAR_e_TargetSts_Normal;
        GRAR_ac_B.VeGRAC_e_MSSBEVbTCStargetSts = CeGRAR_e_TargetSts_Normal;
    }

    /* custom signals */
    VeGRAC_e_MSSBEVdrvPoffRegenTs = CeGRAR_e_TargetSts_Normal;
    VeGRAC_e_DRV_PoffRegenTgtSts = CeGRAR_e_TargetSts_Normal;
    VeGRAC_e_MSSBEVrwsTargetSts = CeGRAR_e_TargetSts_Normal;
    VeGRAC_e_MSSBEVeTCS_TargetSts = CeGRAR_e_TargetSts_Normal;

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/GRAR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S447>/VeGRAR_r_RA_RIP_Ratio_Init' */
    GRAR_ac_B.OutportBufferForVeGRAR_r_RA_RIP_Ratio_In = 0.5F;

    /* SystemInitialize for SignalConversion generated from: '<S447>/VeGRAR_e_TotMtrTrqRmdlActnInit' incorporates:
     *  Constant: '<S452>/Constant'
     */
    GRAR_ac_B.OutportBufferForVeGRAR_e_TotMtrTrqRmdlAc = GRAR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S447>/VeGRAR_e_PRND_Req_Init' incorporates:
     *  Constant: '<S449>/Constant'
     */
    GRAR_ac_B.OutportBufferForVeGRAR_e_PRND_Req_Init = GRAR_ac_ConstB.Constant_g;

    /* SystemInitialize for SignalConversion generated from: '<S447>/VeGRAR_e_ParkPawlReq_Init' incorporates:
     *  Constant: '<S448>/Constant'
     */
    GRAR_ac_B.OutportBufferForVeGRAR_e_ParkPawlReq_Ini =
        GRAR_ac_ConstB.Constant_o;

    /* SystemInitialize for SignalConversion generated from: '<S447>/VeGRAR_e_MSSBEV_Action_Init' incorporates:
     *  Constant: '<S451>/Constant'
     */
    GRAR_ac_B.OutportBufferForVeGRAR_e_MSSBEV_Action_I =
        GRAR_ac_ConstB.Constant_a;

    /* SystemInitialize for SignalConversion generated from: '<S447>/VeGRAR_e_MBPoffRgnTargetStsIn' incorporates:
     *  Constant: '<S450>/Constant'
     */
    GRAR_ac_B.OutportBufferForVeGRAR_e_MBPoffRgnTarget =
        GRAR_ac_ConstB.Constant_j;

    /* SystemInitialize for SignalConversion generated from: '<S447>/VeGRAR_e_MB_Poff_TargetStsIn' incorporates:
     *  Constant: '<S450>/Constant'
     */
    GRAR_ac_B.OutportBufferForVeGRAR_e_MB_Poff_TargetS =
        GRAR_ac_ConstB.Constant_j;

    /* SystemInitialize for SignalConversion generated from: '<S447>/VeGRAR_e_MB_WED_TargetStsInit' incorporates:
     *  Constant: '<S450>/Constant'
     */
    GRAR_ac_B.OutportBufferForVeGRAR_e_MB_WED_TargetSt =
        GRAR_ac_ConstB.Constant_j;

    /* SystemInitialize for SignalConversion generated from: '<S447>/VeGRAR_e_MBbTCS_TargetStsInit' incorporates:
     *  Constant: '<S450>/Constant'
     */
    GRAR_ac_B.OutportBufferForVeGRAR_e_MBbTCS_TargetSt =
        GRAR_ac_ConstB.Constant_j;

    /* SystemInitialize for SignalConversion generated from: '<S447>/VeGRAR_e_MBbTV_TargetSts_Init' incorporates:
     *  Constant: '<S450>/Constant'
     */
    GRAR_ac_B.OutportBufferForVeGRAR_e_MBbTV_TargetSts =
        GRAR_ac_ConstB.Constant_j;

    /* SystemInitialize for SignalConversion generated from: '<S447>/VeGRAR_e_MBeDTC_TargetStsInit' incorporates:
     *  Constant: '<S450>/Constant'
     */
    GRAR_ac_B.OutportBufferForVeGRAR_e_MBeDTC_TargetSt =
        GRAR_ac_ConstB.Constant_j;

    /* SystemInitialize for SignalConversion generated from: '<S447>/VeGRAR_e_MBeLNC_TargetStsInit' incorporates:
     *  Constant: '<S450>/Constant'
     */
    GRAR_ac_B.OutportBufferForVeGRAR_e_MBeLNC_TargetSt =
        GRAR_ac_ConstB.Constant_j;

    /* SystemInitialize for SignalConversion generated from: '<S447>/VeGRAR_e_MBeLSD_TargetStsInit' incorporates:
     *  Constant: '<S450>/Constant'
     */
    GRAR_ac_B.OutportBufferForVeGRAR_e_MBeLSD_TargetSt =
        GRAR_ac_ConstB.Constant_j;

    /* SystemInitialize for SignalConversion generated from: '<S447>/VeGRAR_e_MBeTCS_TargetStsInit' incorporates:
     *  Constant: '<S450>/Constant'
     */
    GRAR_ac_B.OutportBufferForVeGRAR_e_MBeTCS_TargetSt =
        GRAR_ac_ConstB.Constant_j;

    /* SystemInitialize for SignalConversion generated from: '<S447>/VeGRAR_e_MBregen_TargetStsInit' incorporates:
     *  Constant: '<S450>/Constant'
     */
    GRAR_ac_B.OutportBufferForVeGRAR_e_MBregen_TargetS =
        GRAR_ac_ConstB.Constant_j;

    /* SystemInitialize for SignalConversion generated from: '<S447>/VeGRAR_e_MBrwsTargetSts_Init' incorporates:
     *  Constant: '<S450>/Constant'
     */
    GRAR_ac_B.OutportBufferForVeGRAR_e_MBrwsTargetSts_ =
        GRAR_ac_ConstB.Constant_j;

    /* SystemInitialize for SignalConversion generated from: '<S447>/VeGRAR_e_MSSBEVeAWDtgtStInit' incorporates:
     *  Constant: '<S450>/Constant'
     */
    GRAR_ac_B.OutportBufferForVeGRAR_e_MSSBEVeAWDtgtSt =
        GRAR_ac_ConstB.Constant_j;

    /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/GRAR_MedTEB'
     */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/GRAC'
     */
    /* InitializeConditions for UnitDelay: '<S25>/Unit Delay1' */
    GRAR_ac_DW.UnitDelay1_DSTATE_k = true;

    /* InitializeConditions for UnitDelay: '<S27>/Delay_by_one_update_cycle1' */
    GRAR_ac_DW.Delay_by_one_update_cycle1_DSTATE = CeGRAR_e_TargetSts_Normal;

    /* InitializeConditions for UnitDelay: '<S27>/Delay_by_one_update_cycle2' */
    GRAR_ac_DW.Delay_by_one_update_cycle2_DSTATE = CeGRAR_e_TargetSts_Normal;

    /* InitializeConditions for UnitDelay: '<S27>/Delay_by_one_update_cycle3' */
    GRAR_ac_DW.Delay_by_one_update_cycle3_DSTATE = CeGRAR_e_TargetSts_Normal;

    /* InitializeConditions for UnitDelay: '<S27>/Delay_by_one_update_cycle4' */
    GRAR_ac_DW.Delay_by_one_update_cycle4_DSTATE = CeGRAR_e_TargetSts_Normal;

    /* InitializeConditions for UnitDelay: '<S27>/Delay_by_one_update_cycle5' */
    GRAR_ac_DW.Delay_by_one_update_cycle5_DSTATE = CeGRAR_e_TargetSts_Normal;

    /* InitializeConditions for UnitDelay: '<S27>/Delay_by_one_update_cycle6' */
    GRAR_ac_DW.Delay_by_one_update_cycle6_DSTATE = CeGRAR_e_TargetSts_Normal;

    /* InitializeConditions for UnitDelay: '<S27>/Delay_by_one_update_cycle7' */
    GRAR_ac_DW.Delay_by_one_update_cycle7_DSTATE = CeGRAR_e_TargetSts_Normal;

    /* InitializeConditions for UnitDelay: '<S27>/Delay_by_one_update_cycle8' */
    GRAR_ac_DW.Delay_by_one_update_cycle8_DSTATE = CeGRAR_e_TargetSts_Normal;

    /* InitializeConditions for UnitDelay: '<S27>/Delay_by_one_update_cycle9' */
    GRAR_ac_DW.Delay_by_one_update_cycle9_DSTATE = CeGRAR_e_TargetSts_Normal;

    /* InitializeConditions for UnitDelay: '<S27>/Delay_by_one_update_cycle10' */
    GRAR_ac_DW.Delay_by_one_update_cycle10_DSTATE = CeGRAR_e_TargetSts_Normal;

    /* InitializeConditions for UnitDelay: '<S27>/Delay_by_one_update_cycle11' */
    GRAR_ac_DW.Delay_by_one_update_cycle11_DSTATE = CeGRAR_e_TargetSts_Normal;

    /* SystemInitialize for Merge: '<S27>/Merge1' */
    VeGRAC_e_MSSBEVrwsTargetSts = CeGRAR_e_TargetSts_Normal;

    /* SystemInitialize for Merge: '<S27>/Merge10' */
    GRAR_ac_B.Merge10_d = CeGRAR_e_TargetSts_Normal;

    /* SystemInitialize for Merge: '<S27>/Merge11' */
    GRAR_ac_B.Merge11 = CeGRAR_e_TargetSts_Normal;

    /* SystemInitialize for Merge: '<S27>/Merge2' */
    GRAR_ac_B.VeGRAC_e_MSSBEVeAWD_TgtSts = CeGRAR_e_TargetSts_Normal;

    /* SystemInitialize for Merge: '<S27>/Merge3' */
    GRAR_ac_B.VeGRAC_e_MSSBEV_eTCS_TtSts = CeGRAR_e_TargetSts_Normal;

    /* SystemInitialize for Merge: '<S27>/Merge4' */
    GRAR_ac_B.VeGRAC_e_MSSBEV_eDTC_TtSts = CeGRAR_e_TargetSts_Normal;

    /* SystemInitialize for Merge: '<S27>/Merge5' */
    GRAR_ac_B.VeGRAC_e_MSSBEVrgnTargetSts = CeGRAR_e_TargetSts_Normal;

    /* SystemInitialize for Merge: '<S27>/Merge6' */
    GRAR_ac_B.VeGRAC_e_MSSBEVeLNCtargetSts = CeGRAR_e_TargetSts_Normal;

    /* SystemInitialize for Merge: '<S27>/Merge7' */
    GRAR_ac_B.VeGRAC_e_MSSBEVbTVtargetSts = CeGRAR_e_TargetSts_Normal;

    /* SystemInitialize for Merge: '<S27>/Merge8' */
    GRAR_ac_B.VeGRAC_e_MSSBEVbTCStargetSts = CeGRAR_e_TargetSts_Normal;

    /* SystemInitialize for Merge: '<S27>/Merge9' */
    VeGRAC_e_MSSBEVdrvPoffRegenTs = CeGRAR_e_TargetSts_Normal;

    /* SystemInitialize for Switch: '<S9>/Switch3' incorporates:
     *  Outport: '<S5>/VeGRAC_e_MSSBEV_eTCS_TargetSts'
     */
    VeGRAC_e_MSSBEVeTCS_TargetSts = CeGRAR_e_TargetSts_Normal;

    /* SystemInitialize for Switch: '<S9>/Switch9' incorporates:
     *  Outport: '<S5>/VeGRAC_e_MSSBEVdrvPoffRegenTS'
     */
    VeGRAC_e_DRV_PoffRegenTgtSts = CeGRAR_e_TargetSts_Normal;

    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* SystemInitialize for Outport: '<Root>/VeGRAR_e_TotMtrTrqRmdlActn' incorporates:
     *  Merge: '<Root>/Merge2'
     */
    (void)Rte_Write_VeGRAR_e_TotMtrTrqRmdlActn_Value(CeGRAR_e_Normal);

    /* SystemInitialize for Outport: '<Root>/VeGRAR_e_PRND_Req' incorporates:
     *  Merge: '<Root>/Merge26'
     */
    (void)Rte_Write_VeGRAR_e_PRND_Req_Value(CeGRAR_e_PRND_Normal);

    /* SystemInitialize for Outport: '<Root>/VeGRAR_e_ParkPawlReq' incorporates:
     *  Merge: '<Root>/Merge27'
     */
    (void)Rte_Write_VeGRAR_e_ParkPawlReq_Value(CeGRAR_e_PP_Normal);

    /* SystemInitialize for Outport: '<Root>/VeGRAR_e_MSSBEV_Action' incorporates:
     *  Merge: '<Root>/Merge11'
     */
    (void)Rte_Write_VeGRAR_e_MSSBEV_Action_Value(CeGRAR_e_NoLimitation);

    /* SystemInitialize for Outport: '<Root>/VeGRAR_e_MSSBEV_eTCS_TargetSts' incorporates:
     *  Merge: '<Root>/Merge12'
     */
    (void)Rte_Write_VeGRAR_e_MSSBEV_eTCS_TargetSts_Value
        (CeGRAR_e_TargetSts_Normal);

    /* SystemInitialize for Outport: '<Root>/VeGRAR_e_MSSBEV_eDTC_TargetSts' incorporates:
     *  Merge: '<Root>/Merge13'
     */
    (void)Rte_Write_VeGRAR_e_MSSBEV_eDTC_TargetSts_Value
        (CeGRAR_e_TargetSts_Normal);

    /* SystemInitialize for Outport: '<Root>/VeGRAR_e_MSSBEV_Regen_TargetSts' incorporates:
     *  Merge: '<Root>/Merge14'
     */
    (void)Rte_Write_VeGRAR_e_MSSBEV_Regen_TargetSts_Value
        (CeGRAR_e_TargetSts_Normal);

    /* SystemInitialize for Outport: '<Root>/VeGRAR_e_MSSBEV_eLNC_TargetSts' incorporates:
     *  Merge: '<Root>/Merge15'
     */
    (void)Rte_Write_VeGRAR_e_MSSBEV_eLNC_TargetSts_Value
        (CeGRAR_e_TargetSts_Normal);

    /* SystemInitialize for Outport: '<Root>/VeGRAR_e_MSSBEV_bTV_TargetSts' incorporates:
     *  Merge: '<Root>/Merge16'
     */
    (void)Rte_Write_VeGRAR_e_MSSBEV_bTV_TargetSts_Value
        (CeGRAR_e_TargetSts_Normal);

    /* SystemInitialize for Outport: '<Root>/VeGRAR_e_MSSBEV_bTCS_TargetSts' incorporates:
     *  Merge: '<Root>/Merge17'
     */
    (void)Rte_Write_VeGRAR_e_MSSBEV_bTCS_TargetSts_Value
        (CeGRAR_e_TargetSts_Normal);

    /* SystemInitialize for Outport: '<Root>/VeGRAR_e_MSSBEV_DRV_PoffRegen_TargetSts' incorporates:
     *  Merge: '<Root>/Merge18'
     */
    (void)Rte_Write_VeGRAR_e_MSSBEV_DRV_PoffRegen_TargetSts_Value
        (CeGRAR_e_TargetSts_Normal);

    /* SystemInitialize for Outport: '<Root>/VeGRAR_e_MSSBEV_Poff_TargetSts' incorporates:
     *  Merge: '<Root>/Merge31'
     */
    (void)Rte_Write_VeGRAR_e_MSSBEV_Poff_TargetSts_Value
        (CeGRAR_e_TargetSts_Normal);

    /* SystemInitialize for Outport: '<Root>/VeGRAR_e_MSSBEV_RWS_TargetSts' incorporates:
     *  Merge: '<Root>/Merge10'
     */
    (void)Rte_Write_VeGRAR_e_MSSBEV_RWS_TargetSts_Value
        (CeGRAR_e_TargetSts_Normal);

    /* SystemInitialize for Outport: '<Root>/VeGRAR_e_MSSBEV_eAWD_TargetSts' incorporates:
     *  Merge: '<Root>/Merge30'
     */
    (void)Rte_Write_VeGRAR_e_MSSBEV_eAWD_TargetSts_Value
        (CeGRAR_e_TargetSts_Normal);

    /* SystemInitialize for Outport: '<Root>/VeGRAR_e_MSSBEV_WED_TargetSts' incorporates:
     *  Merge: '<Root>/Merge32'
     */
    (void)Rte_Write_VeGRAR_e_MSSBEV_WED_TargetSts_Value
        (CeGRAR_e_TargetSts_Normal);

    /* SystemInitialize for Outport: '<Root>/VeGRAR_e_MSSBEV_eLSD_TargetSts' incorporates:
     *  Merge: '<Root>/Merge33'
     */
    (void)Rte_Write_VeGRAR_e_MSSBEV_eLSD_TargetSts_Value
        (CeGRAR_e_TargetSts_Normal);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
