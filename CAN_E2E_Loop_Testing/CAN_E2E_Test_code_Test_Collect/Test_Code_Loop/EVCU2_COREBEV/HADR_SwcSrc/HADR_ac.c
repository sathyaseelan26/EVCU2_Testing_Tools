/*
 * File: HADR_ac.c
 *
 * Code generated for Simulink model 'HADR_ac'.
 *
 * Model version                  : 9.268
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:45:40 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "HADR_ac.h"
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
#define START_SEC_CALIB_UNSPECIFIED_HADR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_HADR_SinWave && Rte_SysCon_Variant_HADR_SumAndLimits

static volatile CONST(float32, HADR_VAR_INIT) HaHADR_s_SinWave[640] =
{
    0.0F, 0.0098173F, 0.019634F, 0.029448F, 0.03926F, 0.049068F, 0.058871F,
    0.068668F, 0.078459F, 0.088242F, 0.098017F, 0.10778F, 0.11754F, 0.12728F,
    0.13701F, 0.14673F, 0.15643F, 0.16612F, 0.1758F, 0.18545F, 0.19509F,
    0.20471F, 0.21431F, 0.22389F, 0.23345F, 0.24298F, 0.25249F, 0.26198F,
    0.27144F, 0.28088F, 0.29028F, 0.29967F, 0.30902F, 0.31834F, 0.32763F,
    0.33689F, 0.34612F, 0.35531F, 0.36447F, 0.37359F, 0.38268F, 0.39174F,
    0.40075F, 0.40972F, 0.41866F, 0.42756F, 0.43641F, 0.44522F, 0.45399F,
    0.46272F, 0.4714F, 0.48003F, 0.48862F, 0.49716F, 0.50566F, 0.5141F, 0.5225F,
    0.53084F, 0.53914F, 0.54738F, 0.55557F, 0.56371F, 0.57179F, 0.57981F,
    0.58779F, 0.5957F, 0.60356F, 0.61135F, 0.61909F, 0.62677F, 0.63439F,
    0.64195F, 0.64945F, 0.65688F, 0.66425F, 0.67156F, 0.6788F, 0.68598F,
    0.69309F, 0.70013F, 0.70711F, 0.71401F, 0.72085F, 0.72762F, 0.73432F,
    0.74095F, 0.74751F, 0.75399F, 0.76041F, 0.76675F, 0.77301F, 0.7792F,
    0.78532F, 0.79136F, 0.79732F, 0.80321F, 0.80902F, 0.81475F, 0.8204F,
    0.82598F, 0.83147F, 0.83688F, 0.84222F, 0.84747F, 0.85264F, 0.85773F,
    0.86273F, 0.86766F, 0.8725F, 0.87725F, 0.88192F, 0.88651F, 0.89101F,
    0.89542F, 0.89975F, 0.90399F, 0.90814F, 0.91221F, 0.91619F, 0.92008F,
    0.92388F, 0.92759F, 0.93121F, 0.93475F, 0.93819F, 0.94154F, 0.94481F,
    0.94798F, 0.95106F, 0.95404F, 0.95694F, 0.95974F, 0.96246F, 0.96507F,
    0.9676F, 0.97003F, 0.97237F, 0.97461F, 0.97677F, 0.97882F, 0.98079F,
    0.98265F, 0.98443F, 0.9861F, 0.98769F, 0.98918F, 0.99057F, 0.99187F,
    0.99307F, 0.99417F, 0.99518F, 0.9961F, 0.99692F, 0.99764F, 0.99827F, 0.9988F,
    0.99923F, 0.99957F, 0.99981F, 0.99995F, 1.0F, 0.99995F, 0.99981F, 0.99957F,
    0.99923F, 0.9988F, 0.99827F, 0.99764F, 0.99692F, 0.9961F, 0.99518F, 0.99417F,
    0.99307F, 0.99187F, 0.99057F, 0.98918F, 0.98769F, 0.9861F, 0.98443F,
    0.98265F, 0.98079F, 0.97882F, 0.97677F, 0.97461F, 0.97237F, 0.97003F,
    0.9676F, 0.96507F, 0.96246F, 0.95974F, 0.95694F, 0.95404F, 0.95106F,
    0.94798F, 0.94481F, 0.94154F, 0.93819F, 0.93475F, 0.93121F, 0.92759F,
    0.92388F, 0.92008F, 0.91619F, 0.91221F, 0.90814F, 0.90399F, 0.89975F,
    0.89542F, 0.89101F, 0.88651F, 0.88192F, 0.87725F, 0.8725F, 0.86766F,
    0.86273F, 0.85773F, 0.85264F, 0.84747F, 0.84222F, 0.83688F, 0.83147F,
    0.82598F, 0.8204F, 0.81475F, 0.80902F, 0.80321F, 0.79732F, 0.79136F,
    0.78532F, 0.7792F, 0.77301F, 0.76675F, 0.76041F, 0.75399F, 0.74751F,
    0.74095F, 0.73432F, 0.72762F, 0.72085F, 0.71401F, 0.70711F, 0.70013F,
    0.69309F, 0.68598F, 0.6788F, 0.67156F, 0.66425F, 0.65688F, 0.64945F,
    0.64195F, 0.63439F, 0.62677F, 0.61909F, 0.61135F, 0.60356F, 0.5957F,
    0.58779F, 0.57981F, 0.57179F, 0.56371F, 0.55557F, 0.54738F, 0.53914F,
    0.53084F, 0.5225F, 0.5141F, 0.50566F, 0.49716F, 0.48862F, 0.48003F, 0.4714F,
    0.46272F, 0.45399F, 0.44522F, 0.43641F, 0.42756F, 0.41866F, 0.40972F,
    0.40075F, 0.39174F, 0.38268F, 0.37359F, 0.36447F, 0.35531F, 0.34612F,
    0.33689F, 0.32763F, 0.31834F, 0.30902F, 0.29967F, 0.29028F, 0.28088F,
    0.27144F, 0.26198F, 0.25249F, 0.24298F, 0.23345F, 0.22389F, 0.21431F,
    0.20471F, 0.19509F, 0.18545F, 0.1758F, 0.16612F, 0.15643F, 0.14673F,
    0.13701F, 0.12728F, 0.11754F, 0.10778F, 0.098017F, 0.088242F, 0.078459F,
    0.068668F, 0.058871F, 0.049068F, 0.03926F, 0.029448F, 0.019634F, 0.0098173F,
    1.2246E-16F, -0.0098173F, -0.019634F, -0.029448F, -0.03926F, -0.049068F,
    -0.058871F, -0.068668F, -0.078459F, -0.088242F, -0.098017F, -0.10778F,
    -0.11754F, -0.12728F, -0.13701F, -0.14673F, -0.15643F, -0.16612F, -0.1758F,
    -0.18545F, -0.19509F, -0.20471F, -0.21431F, -0.22389F, -0.23345F, -0.24298F,
    -0.25249F, -0.26198F, -0.27144F, -0.28088F, -0.29028F, -0.29967F, -0.30902F,
    -0.31834F, -0.32763F, -0.33689F, -0.34612F, -0.35531F, -0.36447F, -0.37359F,
    -0.38268F, -0.39174F, -0.40075F, -0.40972F, -0.41866F, -0.42756F, -0.43641F,
    -0.44522F, -0.45399F, -0.46272F, -0.4714F, -0.48003F, -0.48862F, -0.49716F,
    -0.50566F, -0.5141F, -0.5225F, -0.53084F, -0.53914F, -0.54738F, -0.55557F,
    -0.56371F, -0.57179F, -0.57981F, -0.58779F, -0.5957F, -0.60356F, -0.61135F,
    -0.61909F, -0.62677F, -0.63439F, -0.64195F, -0.64945F, -0.65688F, -0.66425F,
    -0.67156F, -0.6788F, -0.68598F, -0.69309F, -0.70013F, -0.70711F, -0.71401F,
    -0.72085F, -0.72762F, -0.73432F, -0.74095F, -0.74751F, -0.75399F, -0.76041F,
    -0.76675F, -0.77301F, -0.7792F, -0.78532F, -0.79136F, -0.79732F, -0.80321F,
    -0.80902F, -0.81475F, -0.8204F, -0.82598F, -0.83147F, -0.83688F, -0.84222F,
    -0.84747F, -0.85264F, -0.85773F, -0.86273F, -0.86766F, -0.8725F, -0.87725F,
    -0.88192F, -0.88651F, -0.89101F, -0.89542F, -0.89975F, -0.90399F, -0.90814F,
    -0.91221F, -0.91619F, -0.92008F, -0.92388F, -0.92759F, -0.93121F, -0.93475F,
    -0.93819F, -0.94154F, -0.94481F, -0.94798F, -0.95106F, -0.95404F, -0.95694F,
    -0.95974F, -0.96246F, -0.96507F, -0.9676F, -0.97003F, -0.97237F, -0.97461F,
    -0.97677F, -0.97882F, -0.98079F, -0.98265F, -0.98443F, -0.9861F, -0.98769F,
    -0.98918F, -0.99057F, -0.99187F, -0.99307F, -0.99417F, -0.99518F, -0.9961F,
    -0.99692F, -0.99764F, -0.99827F, -0.9988F, -0.99923F, -0.99957F, -0.99981F,
    -0.99995F, -1.0F, -0.99995F, -0.99981F, -0.99957F, -0.99923F, -0.9988F,
    -0.99827F, -0.99764F, -0.99692F, -0.9961F, -0.99518F, -0.99417F, -0.99307F,
    -0.99187F, -0.99057F, -0.98918F, -0.98769F, -0.9861F, -0.98443F, -0.98265F,
    -0.98079F, -0.97882F, -0.97677F, -0.97461F, -0.97237F, -0.97003F, -0.9676F,
    -0.96507F, -0.96246F, -0.95974F, -0.95694F, -0.95404F, -0.95106F, -0.94798F,
    -0.94481F, -0.94154F, -0.93819F, -0.93475F, -0.93121F, -0.92759F, -0.92388F,
    -0.92008F, -0.91619F, -0.91221F, -0.90814F, -0.90399F, -0.89975F, -0.89542F,
    -0.89101F, -0.88651F, -0.88192F, -0.87725F, -0.8725F, -0.86766F, -0.86273F,
    -0.85773F, -0.85264F, -0.84747F, -0.84222F, -0.83688F, -0.83147F, -0.82598F,
    -0.8204F, -0.81475F, -0.80902F, -0.80321F, -0.79732F, -0.79136F, -0.78532F,
    -0.7792F, -0.77301F, -0.76675F, -0.76041F, -0.75399F, -0.74751F, -0.74095F,
    -0.73432F, -0.72762F, -0.72085F, -0.71401F, -0.70711F, -0.70013F, -0.69309F,
    -0.68598F, -0.6788F, -0.67156F, -0.66425F, -0.65688F, -0.64945F, -0.64195F,
    -0.63439F, -0.62677F, -0.61909F, -0.61135F, -0.60356F, -0.5957F, -0.58779F,
    -0.57981F, -0.57179F, -0.56371F, -0.55557F, -0.54738F, -0.53914F, -0.53084F,
    -0.5225F, -0.5141F, -0.50566F, -0.49716F, -0.48862F, -0.48003F, -0.4714F,
    -0.46272F, -0.45399F, -0.44522F, -0.43641F, -0.42756F, -0.41866F, -0.40972F,
    -0.40075F, -0.39174F, -0.38268F, -0.37359F, -0.36447F, -0.35531F, -0.34612F,
    -0.33689F, -0.32763F, -0.31834F, -0.30902F, -0.29967F, -0.29028F, -0.28088F,
    -0.27144F, -0.26198F, -0.25249F, -0.24298F, -0.23345F, -0.22389F, -0.21431F,
    -0.20471F, -0.19509F, -0.18545F, -0.1758F, -0.16612F, -0.15643F, -0.14673F,
    -0.13701F, -0.12728F, -0.11754F, -0.10778F, -0.098017F, -0.088242F,
    -0.078459F, -0.068668F, -0.058871F, -0.049068F, -0.03926F, -0.029448F,
    -0.019634F, -0.0098173F
} ;                                    /* Referenced by: '<S442>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_SinWave && Rte_SysCon_Variant_HADR_SumAndLimits

static volatile CONST(float32, HADR_VAR_INIT) HeHADR_Cnt_NumPtsOfBaseFreq =
    640.0F;                            /* Referenced by:
                                        * '<S430>/Calib'
                                        * '<S455>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_HADR_SinWave && Rte_SysCon_Variant_HADR_SumAndLimits

static volatile CONST(float32, HADR_VAR_INIT) HeHADR_Cnt_TwiceNumPtsBaseFreq =
    1280.0F;                           /* Referenced by: '<S431>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(boolean, HADR_VAR_INIT) HeHADR_b_DeactLash = 0;/* Referenced by: '<S23>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl || (Rte_SysCon_Variant_HADR_SinWave && Rte_SysCon_Variant_HADR_SumAndLimits)

static volatile CONST(boolean, HADR_VAR_INIT) HeHADR_b_REEV_System = 1;/* Referenced by:
                                                                      * '<S10>/Calib'
                                                                      * '<S447>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl || (Rte_SysCon_Variant_HADR_SinWave && Rte_SysCon_Variant_HADR_SumAndLimits)

static volatile CONST(float32, HADR_VAR_INIT) HeHADR_t_FastTEF_dT = 0.005F;/* Referenced by:
                                                                      * '<S456>/Calib'
                                                                      * '<S250>/Calib'
                                                                      * '<S418>/Calib'
                                                                      * '<S229>/Calib'
                                                                      * '<S235>/Calib'
                                                                      * '<S236>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G1_KF_M_BLAll[15] =
{
    0.269481301F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.269481301F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.270156205F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S94>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G1_KF_M_BLTa[15] =
{
    0.269481301F, 1.04598585E-17F, 1.73973884E-17F, 0.0F, -1.97568331E-16F,
    1.04598585E-17F, 0.302151859F, 0.0382285F, 0.0F, -0.220891148F,
    1.73973884E-17F, 0.0382285F, 0.264113963F, 0.0F, -0.295296341F
} ;                                    /* Referenced by: '<S95>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G1_KF_M_BLTb[15] =
{
    0.302151859F, 6.60225786E-18F, 0.0382285F, -0.220891148F, 0.0F,
    6.60225786E-18F, 0.269481301F, -5.27563321E-17F, -1.78952552E-17F, 0.0F,
    0.0382285F, -5.27563321E-17F, 0.264113963F, -0.295296341F, 0.0F
} ;                                    /* Referenced by: '<S96>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G1_KF_M_ContactAll[15] =
{
    0.296780407F, 0.0276795104F, 0.0342208222F, -0.200449035F, -0.136643395F,
    0.0276795104F, 0.296780407F, 0.0342208222F, -0.136643395F, -0.200449035F,
    0.0342208222F, 0.0342208222F, 0.25970006F, -0.277227968F, -0.277227968F
} ;                                    /* Referenced by: '<S97>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G1_LQI_CMat_BLAll[10] =
{
    1.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S300>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G1_LQI_CMat_BLTa[10] =
{
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S301>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G1_LQI_CMat_BLTb[10] =
{
    0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S302>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G1_LQI_CMat_ContactAll[10]
    =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S303>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G1_LQI_Ki_BLAll[4] =
{
    28.7972889F, -0.0F, -0.0F, 28.7972889F
} ;                                    /* Referenced by: '<S304>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G1_LQI_Ki_BLTa[4] =
{
    9.38374805F, -1.8794308E-15F, -4.2912486E-8F, 27.8693562F
} ;                                    /* Referenced by: '<S305>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G1_LQI_Ki_BLTb[4] =
{
    27.8693542F, 1.06374403E-8F, 1.4426057E-14F, 9.38374805F
} ;                                    /* Referenced by: '<S306>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G1_LQI_Ki_ContactAll[4] =
{
    28.1414433F, 0.0374334492F, 0.0374334604F, 28.1414433F
} ;                                    /* Referenced by: '<S307>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G1_LQI_Kp_BLAll[10] =
{
    2.08908319F, 0.0F, 0.0F, 2.08908319F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S308>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G1_LQI_Kp_BLTa[10] =
{
    1.40793204F, 2.14171248E-16F, 1.10820858E-11F, 2.6726594F, 1.35407532E-7F,
    -2.67545748F, 0.0F, 0.0F, -2.0821854E-10F, 0.588525295F
} ;                                    /* Referenced by: '<S309>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G1_LQI_Kp_BLTb[10] =
{
    2.6726594F, -2.74851843E-12F, -1.32852258E-15F, 1.40793204F, -2.67545652F,
    -3.35657688E-8F, 0.588525295F, 5.16143968E-11F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S310>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G1_LQI_Kp_ContactAll[10] =
{
    2.49564266F, -0.0273738019F, -0.0273738019F, 2.49564266F, -2.47810054F,
    -2.47810054F, 0.57462877F, -0.00959307794F, -0.009593077F, 0.57462877F
} ;                                    /* Referenced by: '<S311>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G1_Plant_A_BLAll[25] =
{
    0.998902917F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.998902917F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S98>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G1_Plant_A_BLTa[25] =
{
    0.998902917F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.947157621F, 0.000935082498F,
    0.0F, 0.605285F, 0.0F, 0.0517689921F, 0.999064505F, 0.0F, -0.605620265F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, -0.0857454613F, 0.00154964358F, 0.0F,
    0.972724557F
} ;                                    /* Referenced by: '<S99>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G1_Plant_A_BLTb[25] =
{
    0.947157621F, 0.0F, 0.000935082498F, 0.605285F, 0.0F, 0.0F, 0.998902917F,
    0.0F, 0.0F, 0.0F, 0.0517689921F, 0.0F, 0.999064505F, -0.605620265F, 0.0F,
    -0.0857454613F, 0.0F, 0.00154964358F, 0.972724557F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S100>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G1_Plant_A_ContactAll[25]
    =
{
    0.947157621F, 1.6125332E-5F, 0.000934791169F, 0.605285048F, -0.000238470035F,
    1.6125332E-5F, 0.947157621F, 0.000934791169F, -0.000238470035F, 0.605285048F,
    0.0517528653F, 0.0517528653F, 0.998129547F, -0.605381727F, -0.605381727F,
    -0.0857454687F, 3.37819765E-5F, 0.00154903333F, 0.972724676F,
    -0.000477695867F, 3.37819765E-5F, -0.0857454687F, 0.00154903333F,
    -0.000477695867F, 0.972724676F
} ;                                    /* Referenced by: '<S101>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G1_Plant_B_BLAll[15] =
{
    0.0876711756F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0876711756F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, -0.00158443837F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S102>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G1_Plant_B_BLTa[15] =
{
    0.0876711756F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0857796371F, 3.41772793E-5F,
    0.0F, 0.0267913416F, 0.0F, -3.41772793E-5F, -0.00158382079F, 0.0F,
    0.000484099F
} ;                                    /* Referenced by: '<S103>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G1_Plant_B_BLTb[15] =
{
    0.0857796371F, 0.0F, 3.41772793E-5F, 0.0267913416F, 0.0F, 0.0F,
    0.0876711756F, 0.0F, 0.0F, 0.0F, -3.41772793E-5F, 0.0F, -0.00158382079F,
    0.000484099F, 0.0F
} ;                                    /* Referenced by: '<S104>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G1_Plant_B_ContactAll[15]
    =
{
    0.0857796371F, 3.88289806E-7F, 3.41702653E-5F, 0.0267913416F,
    -6.28950102E-6F, 3.88289806E-7F, 0.0857796371F, 3.41702653E-5F,
    -6.28950102E-6F, 0.0267913416F, -3.41702653E-5F, -3.41702653E-5F,
    -0.00158320356F, 0.000483985379F, 0.000483985379F
} ;                                    /* Referenced by: '<S105>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G1_Plant_C_BLAll[25] =
{
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S106>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G1_Plant_C_BLTa[25] =
{
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S107>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G1_Plant_C_BLTb[25] =
{
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S108>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G1_Plant_C_ContactAll[25]
    =
{
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S109>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G1_Plant_D_BLAll[15] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S110>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G1_Plant_D_BLTa[15] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S111>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G1_Plant_D_BLTb[15] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S112>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G1_Plant_D_ContactAll[15]
    =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S113>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G2_KF_M_BLAll[15] =
{
    0.269481301F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.269481301F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.270156205F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S114>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G2_KF_M_BLTa[15] =
{
    0.269481301F, 1.04598585E-17F, 1.73973884E-17F, 0.0F, -1.97568331E-16F,
    1.04598585E-17F, 0.302151859F, 0.0382285F, 0.0F, -0.220891148F,
    1.73973884E-17F, 0.0382285F, 0.264113963F, 0.0F, -0.295296341F
} ;                                    /* Referenced by: '<S115>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G2_KF_M_BLTb[15] =
{
    0.302151859F, 6.60225786E-18F, 0.0382285F, -0.220891148F, 0.0F,
    6.60225786E-18F, 0.269481301F, -5.27563321E-17F, -1.78952552E-17F, 0.0F,
    0.0382285F, -5.27563321E-17F, 0.264113963F, -0.295296341F, 0.0F
} ;                                    /* Referenced by: '<S116>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G2_KF_M_ContactAll[15] =
{
    0.296780407F, 0.0276795104F, 0.0342208222F, -0.200449035F, -0.136643395F,
    0.0276795104F, 0.296780407F, 0.0342208222F, -0.136643395F, -0.200449035F,
    0.0342208222F, 0.0342208222F, 0.25970006F, -0.277227968F, -0.277227968F
} ;                                    /* Referenced by: '<S117>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G2_LQI_CMat_BLAll[10] =
{
    1.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S312>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G2_LQI_CMat_BLTa[10] =
{
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S313>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G2_LQI_CMat_BLTb[10] =
{
    0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S314>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G2_LQI_CMat_ContactAll[10]
    =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S315>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G2_LQI_Ki_BLAll[4] =
{
    28.7972889F, -0.0F, -0.0F, 28.7972889F
} ;                                    /* Referenced by: '<S316>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G2_LQI_Ki_BLTa[4] =
{
    9.38374805F, -1.8794308E-15F, -4.2912486E-8F, 27.8693562F
} ;                                    /* Referenced by: '<S317>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G2_LQI_Ki_BLTb[4] =
{
    27.8693542F, 1.06374403E-8F, 1.4426057E-14F, 9.38374805F
} ;                                    /* Referenced by: '<S318>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G2_LQI_Ki_ContactAll[4] =
{
    28.1414433F, 0.0374334492F, 0.0374334604F, 28.1414433F
} ;                                    /* Referenced by: '<S319>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G2_LQI_Kp_BLAll[10] =
{
    2.08908319F, 0.0F, 0.0F, 2.08908319F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S320>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G2_LQI_Kp_BLTa[10] =
{
    1.40793204F, 2.14171248E-16F, 1.10820858E-11F, 2.6726594F, 1.35407532E-7F,
    -2.67545748F, 0.0F, 0.0F, -2.0821854E-10F, 0.588525295F
} ;                                    /* Referenced by: '<S321>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G2_LQI_Kp_BLTb[10] =
{
    2.6726594F, -2.74851843E-12F, -1.32852258E-15F, 1.40793204F, -2.67545652F,
    -3.35657688E-8F, 0.588525295F, 5.16143968E-11F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S322>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G2_LQI_Kp_ContactAll[10] =
{
    2.49564266F, -0.0273738019F, -0.0273738019F, 2.49564266F, -2.47810054F,
    -2.47810054F, 0.57462877F, -0.00959307794F, -0.009593077F, 0.57462877F
} ;                                    /* Referenced by: '<S323>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G2_Plant_A_BLAll[25] =
{
    0.998902917F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.998902917F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S118>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G2_Plant_A_BLTa[25] =
{
    0.998902917F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.947157621F, 0.000935082498F,
    0.0F, 0.605285F, 0.0F, 0.0517689921F, 0.999064505F, 0.0F, -0.605620265F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, -0.0857454613F, 0.00154964358F, 0.0F,
    0.972724557F
} ;                                    /* Referenced by: '<S119>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G2_Plant_A_BLTb[25] =
{
    0.947157621F, 0.0F, 0.000935082498F, 0.605285F, 0.0F, 0.0F, 0.998902917F,
    0.0F, 0.0F, 0.0F, 0.0517689921F, 0.0F, 0.999064505F, -0.605620265F, 0.0F,
    -0.0857454613F, 0.0F, 0.00154964358F, 0.972724557F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S120>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G2_Plant_A_ContactAll[25]
    =
{
    0.947157621F, 1.6125332E-5F, 0.000934791169F, 0.605285048F, -0.000238470035F,
    1.6125332E-5F, 0.947157621F, 0.000934791169F, -0.000238470035F, 0.605285048F,
    0.0517528653F, 0.0517528653F, 0.998129547F, -0.605381727F, -0.605381727F,
    -0.0857454687F, 3.37819765E-5F, 0.00154903333F, 0.972724676F,
    -0.000477695867F, 3.37819765E-5F, -0.0857454687F, 0.00154903333F,
    -0.000477695867F, 0.972724676F
} ;                                    /* Referenced by: '<S121>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G2_Plant_B_BLAll[15] =
{
    0.0876711756F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0876711756F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, -0.00158443837F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S122>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G2_Plant_B_BLTa[15] =
{
    0.0876711756F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0857796371F, 3.41772793E-5F,
    0.0F, 0.0267913416F, 0.0F, -3.41772793E-5F, -0.00158382079F, 0.0F,
    0.000484099F
} ;                                    /* Referenced by: '<S123>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G2_Plant_B_BLTb[15] =
{
    0.0857796371F, 0.0F, 3.41772793E-5F, 0.0267913416F, 0.0F, 0.0F,
    0.0876711756F, 0.0F, 0.0F, 0.0F, -3.41772793E-5F, 0.0F, -0.00158382079F,
    0.000484099F, 0.0F
} ;                                    /* Referenced by: '<S124>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G2_Plant_B_ContactAll[15]
    =
{
    0.0857796371F, 3.88289806E-7F, 3.41702653E-5F, 0.0267913416F,
    -6.28950102E-6F, 3.88289806E-7F, 0.0857796371F, 3.41702653E-5F,
    -6.28950102E-6F, 0.0267913416F, -3.41702653E-5F, -3.41702653E-5F,
    -0.00158320356F, 0.000483985379F, 0.000483985379F
} ;                                    /* Referenced by: '<S125>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G2_Plant_C_BLAll[25] =
{
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S126>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G2_Plant_C_BLTa[25] =
{
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S127>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G2_Plant_C_BLTb[25] =
{
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S128>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G2_Plant_C_ContactAll[25]
    =
{
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S129>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G2_Plant_D_BLAll[15] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S130>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G2_Plant_D_BLTa[15] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S131>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G2_Plant_D_BLTb[15] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S132>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G2_Plant_D_ContactAll[15]
    =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S133>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G3_KF_M_BLAll[15] =
{
    0.269481301F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.269481301F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.270156205F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S134>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G3_KF_M_BLTa[15] =
{
    0.269481301F, 1.04598585E-17F, 1.73973884E-17F, 0.0F, -1.97568331E-16F,
    1.04598585E-17F, 0.302151859F, 0.0382285F, 0.0F, -0.220891148F,
    1.73973884E-17F, 0.0382285F, 0.264113963F, 0.0F, -0.295296341F
} ;                                    /* Referenced by: '<S135>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G3_KF_M_BLTb[15] =
{
    0.302151859F, 6.60225786E-18F, 0.0382285F, -0.220891148F, 0.0F,
    6.60225786E-18F, 0.269481301F, -5.27563321E-17F, -1.78952552E-17F, 0.0F,
    0.0382285F, -5.27563321E-17F, 0.264113963F, -0.295296341F, 0.0F
} ;                                    /* Referenced by: '<S136>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G3_KF_M_ContactAll[15] =
{
    0.296780407F, 0.0276795104F, 0.0342208222F, -0.200449035F, -0.136643395F,
    0.0276795104F, 0.296780407F, 0.0342208222F, -0.136643395F, -0.200449035F,
    0.0342208222F, 0.0342208222F, 0.25970006F, -0.277227968F, -0.277227968F
} ;                                    /* Referenced by: '<S137>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G3_LQI_CMat_BLAll[10] =
{
    1.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S324>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G3_LQI_CMat_BLTa[10] =
{
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S325>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G3_LQI_CMat_BLTb[10] =
{
    0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S326>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G3_LQI_CMat_ContactAll[10]
    =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S327>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G3_LQI_Ki_BLAll[4] =
{
    28.7972889F, -0.0F, -0.0F, 28.7972889F
} ;                                    /* Referenced by: '<S328>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G3_LQI_Ki_BLTa[4] =
{
    9.38374805F, -1.8794308E-15F, -4.2912486E-8F, 27.8693562F
} ;                                    /* Referenced by: '<S329>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G3_LQI_Ki_BLTb[4] =
{
    27.8693542F, 1.06374403E-8F, 1.4426057E-14F, 9.38374805F
} ;                                    /* Referenced by: '<S330>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G3_LQI_Ki_ContactAll[4] =
{
    28.1414433F, 0.0374334492F, 0.0374334604F, 28.1414433F
} ;                                    /* Referenced by: '<S331>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G3_LQI_Kp_BLAll[10] =
{
    2.08908319F, 0.0F, 0.0F, 2.08908319F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S332>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G3_LQI_Kp_BLTa[10] =
{
    1.40793204F, 2.14171248E-16F, 1.10820858E-11F, 2.6726594F, 1.35407532E-7F,
    -2.67545748F, 0.0F, 0.0F, -2.0821854E-10F, 0.588525295F
} ;                                    /* Referenced by: '<S333>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G3_LQI_Kp_BLTb[10] =
{
    2.6726594F, -2.74851843E-12F, -1.32852258E-15F, 1.40793204F, -2.67545652F,
    -3.35657688E-8F, 0.588525295F, 5.16143968E-11F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S334>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G3_LQI_Kp_ContactAll[10] =
{
    2.49564266F, -0.0273738019F, -0.0273738019F, 2.49564266F, -2.47810054F,
    -2.47810054F, 0.57462877F, -0.00959307794F, -0.009593077F, 0.57462877F
} ;                                    /* Referenced by: '<S335>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G3_Plant_A_BLAll[25] =
{
    0.998902917F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.998902917F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S138>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G3_Plant_A_BLTa[25] =
{
    0.998902917F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.947157621F, 0.000935082498F,
    0.0F, 0.605285F, 0.0F, 0.0517689921F, 0.999064505F, 0.0F, -0.605620265F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, -0.0857454613F, 0.00154964358F, 0.0F,
    0.972724557F
} ;                                    /* Referenced by: '<S139>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G3_Plant_A_BLTb[25] =
{
    0.947157621F, 0.0F, 0.000935082498F, 0.605285F, 0.0F, 0.0F, 0.998902917F,
    0.0F, 0.0F, 0.0F, 0.0517689921F, 0.0F, 0.999064505F, -0.605620265F, 0.0F,
    -0.0857454613F, 0.0F, 0.00154964358F, 0.972724557F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S140>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G3_Plant_A_ContactAll[25]
    =
{
    0.947157621F, 1.6125332E-5F, 0.000934791169F, 0.605285048F, -0.000238470035F,
    1.6125332E-5F, 0.947157621F, 0.000934791169F, -0.000238470035F, 0.605285048F,
    0.0517528653F, 0.0517528653F, 0.998129547F, -0.605381727F, -0.605381727F,
    -0.0857454687F, 3.37819765E-5F, 0.00154903333F, 0.972724676F,
    -0.000477695867F, 3.37819765E-5F, -0.0857454687F, 0.00154903333F,
    -0.000477695867F, 0.972724676F
} ;                                    /* Referenced by: '<S141>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G3_Plant_B_BLAll[15] =
{
    0.0876711756F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0876711756F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, -0.00158443837F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S142>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G3_Plant_B_BLTa[15] =
{
    0.0876711756F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0857796371F, 3.41772793E-5F,
    0.0F, 0.0267913416F, 0.0F, -3.41772793E-5F, -0.00158382079F, 0.0F,
    0.000484099F
} ;                                    /* Referenced by: '<S143>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G3_Plant_B_BLTb[15] =
{
    0.0857796371F, 0.0F, 3.41772793E-5F, 0.0267913416F, 0.0F, 0.0F,
    0.0876711756F, 0.0F, 0.0F, 0.0F, -3.41772793E-5F, 0.0F, -0.00158382079F,
    0.000484099F, 0.0F
} ;                                    /* Referenced by: '<S144>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G3_Plant_B_ContactAll[15]
    =
{
    0.0857796371F, 3.88289806E-7F, 3.41702653E-5F, 0.0267913416F,
    -6.28950102E-6F, 3.88289806E-7F, 0.0857796371F, 3.41702653E-5F,
    -6.28950102E-6F, 0.0267913416F, -3.41702653E-5F, -3.41702653E-5F,
    -0.00158320356F, 0.000483985379F, 0.000483985379F
} ;                                    /* Referenced by: '<S145>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G3_Plant_C_BLAll[25] =
{
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S146>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G3_Plant_C_BLTa[25] =
{
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S147>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G3_Plant_C_BLTb[25] =
{
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S148>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G3_Plant_C_ContactAll[25]
    =
{
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S149>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G3_Plant_D_BLAll[15] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S150>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G3_Plant_D_BLTa[15] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S151>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G3_Plant_D_BLTb[15] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S152>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G3_Plant_D_ContactAll[15]
    =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S153>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G4_KF_M_BLAll[15] =
{
    0.269481301F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.269481301F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.270156205F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S154>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G4_KF_M_BLTa[15] =
{
    0.269481301F, 1.04598585E-17F, 1.73973884E-17F, 0.0F, -1.97568331E-16F,
    1.04598585E-17F, 0.302151859F, 0.0382285F, 0.0F, -0.220891148F,
    1.73973884E-17F, 0.0382285F, 0.264113963F, 0.0F, -0.295296341F
} ;                                    /* Referenced by: '<S155>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G4_KF_M_BLTb[15] =
{
    0.302151859F, 6.60225786E-18F, 0.0382285F, -0.220891148F, 0.0F,
    6.60225786E-18F, 0.269481301F, -5.27563321E-17F, -1.78952552E-17F, 0.0F,
    0.0382285F, -5.27563321E-17F, 0.264113963F, -0.295296341F, 0.0F
} ;                                    /* Referenced by: '<S156>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G4_KF_M_ContactAll[15] =
{
    0.296780407F, 0.0276795104F, 0.0342208222F, -0.200449035F, -0.136643395F,
    0.0276795104F, 0.296780407F, 0.0342208222F, -0.136643395F, -0.200449035F,
    0.0342208222F, 0.0342208222F, 0.25970006F, -0.277227968F, -0.277227968F
} ;                                    /* Referenced by: '<S157>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G4_LQI_CMat_BLAll[10] =
{
    1.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S336>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G4_LQI_CMat_BLTa[10] =
{
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S337>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G4_LQI_CMat_BLTb[10] =
{
    0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S338>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G4_LQI_CMat_ContactAll[10]
    =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S339>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G4_LQI_Ki_BLAll[4] =
{
    28.7972889F, -0.0F, -0.0F, 28.7972889F
} ;                                    /* Referenced by: '<S340>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G4_LQI_Ki_BLTa[4] =
{
    9.38374805F, -1.8794308E-15F, -4.2912486E-8F, 27.8693562F
} ;                                    /* Referenced by: '<S341>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G4_LQI_Ki_BLTb[4] =
{
    27.8693542F, 1.06374403E-8F, 1.4426057E-14F, 9.38374805F
} ;                                    /* Referenced by: '<S342>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G4_LQI_Ki_ContactAll[4] =
{
    28.1414433F, 0.0374334492F, 0.0374334604F, 28.1414433F
} ;                                    /* Referenced by: '<S343>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G4_LQI_Kp_BLAll[10] =
{
    2.08908319F, 0.0F, 0.0F, 2.08908319F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S344>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G4_LQI_Kp_BLTa[10] =
{
    1.40793204F, 2.14171248E-16F, 1.10820858E-11F, 2.6726594F, 1.35407532E-7F,
    -2.67545748F, 0.0F, 0.0F, -2.0821854E-10F, 0.588525295F
} ;                                    /* Referenced by: '<S345>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G4_LQI_Kp_BLTb[10] =
{
    2.6726594F, -2.74851843E-12F, -1.32852258E-15F, 1.40793204F, -2.67545652F,
    -3.35657688E-8F, 0.588525295F, 5.16143968E-11F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S346>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G4_LQI_Kp_ContactAll[10] =
{
    2.49564266F, -0.0273738019F, -0.0273738019F, 2.49564266F, -2.47810054F,
    -2.47810054F, 0.57462877F, -0.00959307794F, -0.009593077F, 0.57462877F
} ;                                    /* Referenced by: '<S347>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G4_Plant_A_BLAll[25] =
{
    0.998902917F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.998902917F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S158>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G4_Plant_A_BLTa[25] =
{
    0.998902917F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.947157621F, 0.000935082498F,
    0.0F, 0.605285F, 0.0F, 0.0517689921F, 0.999064505F, 0.0F, -0.605620265F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, -0.0857454613F, 0.00154964358F, 0.0F,
    0.972724557F
} ;                                    /* Referenced by: '<S159>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G4_Plant_A_BLTb[25] =
{
    0.947157621F, 0.0F, 0.000935082498F, 0.605285F, 0.0F, 0.0F, 0.998902917F,
    0.0F, 0.0F, 0.0F, 0.0517689921F, 0.0F, 0.999064505F, -0.605620265F, 0.0F,
    -0.0857454613F, 0.0F, 0.00154964358F, 0.972724557F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S160>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G4_Plant_A_ContactAll[25]
    =
{
    0.947157621F, 1.6125332E-5F, 0.000934791169F, 0.605285048F, -0.000238470035F,
    1.6125332E-5F, 0.947157621F, 0.000934791169F, -0.000238470035F, 0.605285048F,
    0.0517528653F, 0.0517528653F, 0.998129547F, -0.605381727F, -0.605381727F,
    -0.0857454687F, 3.37819765E-5F, 0.00154903333F, 0.972724676F,
    -0.000477695867F, 3.37819765E-5F, -0.0857454687F, 0.00154903333F,
    -0.000477695867F, 0.972724676F
} ;                                    /* Referenced by: '<S161>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G4_Plant_B_BLAll[15] =
{
    0.0876711756F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0876711756F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, -0.00158443837F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S162>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G4_Plant_B_BLTa[15] =
{
    0.0876711756F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0857796371F, 3.41772793E-5F,
    0.0F, 0.0267913416F, 0.0F, -3.41772793E-5F, -0.00158382079F, 0.0F,
    0.000484099F
} ;                                    /* Referenced by: '<S163>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G4_Plant_B_BLTb[15] =
{
    0.0857796371F, 0.0F, 3.41772793E-5F, 0.0267913416F, 0.0F, 0.0F,
    0.0876711756F, 0.0F, 0.0F, 0.0F, -3.41772793E-5F, 0.0F, -0.00158382079F,
    0.000484099F, 0.0F
} ;                                    /* Referenced by: '<S164>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G4_Plant_B_ContactAll[15]
    =
{
    0.0857796371F, 3.88289806E-7F, 3.41702653E-5F, 0.0267913416F,
    -6.28950102E-6F, 3.88289806E-7F, 0.0857796371F, 3.41702653E-5F,
    -6.28950102E-6F, 0.0267913416F, -3.41702653E-5F, -3.41702653E-5F,
    -0.00158320356F, 0.000483985379F, 0.000483985379F
} ;                                    /* Referenced by: '<S165>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G4_Plant_C_BLAll[25] =
{
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S166>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G4_Plant_C_BLTa[25] =
{
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S167>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G4_Plant_C_BLTb[25] =
{
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S168>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G4_Plant_C_ContactAll[25]
    =
{
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S169>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G4_Plant_D_BLAll[15] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S170>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G4_Plant_D_BLTa[15] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S171>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G4_Plant_D_BLTb[15] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S172>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_G4_Plant_D_ContactAll[15]
    =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S173>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M1_KF_M_BLAll[15] =
{
    0.269481301F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.269481301F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.270156205F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S174>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M1_KF_M_BLTa[15] =
{
    0.269481301F, 1.04598585E-17F, 1.73973884E-17F, 0.0F, -1.97568331E-16F,
    1.04598585E-17F, 0.302151859F, 0.0382285F, 0.0F, -0.220891148F,
    1.73973884E-17F, 0.0382285F, 0.264113963F, 0.0F, -0.295296341F
} ;                                    /* Referenced by: '<S175>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M1_LQI_CMat_BLAll[10] =
{
    1.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S348>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M1_LQI_CMat_BLTa[10] =
{
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S349>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M1_LQI_Ki_BLAll[4] =
{
    28.7972889F, -0.0F, -0.0F, 28.7972889F
} ;                                    /* Referenced by: '<S350>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M1_LQI_Ki_BLTa[4] =
{
    9.38374805F, -1.8794308E-15F, -4.2912486E-8F, 27.8693562F
} ;                                    /* Referenced by: '<S351>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M1_LQI_Kp_BLAll[10] =
{
    2.08908319F, 0.0F, 0.0F, 2.08908319F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S352>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M1_LQI_Kp_BLTa[10] =
{
    1.40793204F, 2.14171248E-16F, 1.10820858E-11F, 2.6726594F, 1.35407532E-7F,
    -2.67545748F, 0.0F, 0.0F, -2.0821854E-10F, 0.588525295F
} ;                                    /* Referenced by: '<S353>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M1_Plant_A_BLAll[25] =
{
    0.998902917F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.998902917F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S176>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M1_Plant_A_BLTa[25] =
{
    0.998902917F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.947157621F, 0.000935082498F,
    0.0F, 0.605285F, 0.0F, 0.0517689921F, 0.999064505F, 0.0F, -0.605620265F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, -0.0857454613F, 0.00154964358F, 0.0F,
    0.972724557F
} ;                                    /* Referenced by: '<S177>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M1_Plant_B_BLAll[15] =
{
    0.0876711756F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0876711756F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, -0.00158443837F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S178>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M1_Plant_B_BLTa[15] =
{
    0.0876711756F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0857796371F, 3.41772793E-5F,
    0.0F, 0.0267913416F, 0.0F, -3.41772793E-5F, -0.00158382079F, 0.0F,
    0.000484099F
} ;                                    /* Referenced by: '<S179>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M1_Plant_C_BLAll[25] =
{
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S180>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M1_Plant_C_BLTa[25] =
{
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S181>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M1_Plant_D_BLAll[15] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S182>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M1_Plant_D_BLTa[15] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S183>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M2_KF_M_BLAll[15] =
{
    0.269481301F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.269481301F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.270156205F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S184>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M2_KF_M_BLTa[15] =
{
    0.269481301F, 1.04598585E-17F, 1.73973884E-17F, 0.0F, -1.97568331E-16F,
    1.04598585E-17F, 0.302151859F, 0.0382285F, 0.0F, -0.220891148F,
    1.73973884E-17F, 0.0382285F, 0.264113963F, 0.0F, -0.295296341F
} ;                                    /* Referenced by: '<S185>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M2_KF_M_BLTb[15] =
{
    0.302151859F, 6.60225786E-18F, 0.0382285F, -0.220891148F, 0.0F,
    6.60225786E-18F, 0.269481301F, -5.27563321E-17F, -1.78952552E-17F, 0.0F,
    0.0382285F, -5.27563321E-17F, 0.264113963F, -0.295296341F, 0.0F
} ;                                    /* Referenced by: '<S186>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M2_KF_M_ContactAll[15] =
{
    0.296780407F, 0.0276795104F, 0.0342208222F, -0.200449035F, -0.136643395F,
    0.0276795104F, 0.296780407F, 0.0342208222F, -0.136643395F, -0.200449035F,
    0.0342208222F, 0.0342208222F, 0.25970006F, -0.277227968F, -0.277227968F
} ;                                    /* Referenced by: '<S187>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M2_LQI_CMat_BLAll[10] =
{
    1.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S354>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M2_LQI_CMat_BLTa[10] =
{
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S355>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M2_LQI_CMat_BLTb[10] =
{
    0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S356>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M2_LQI_CMat_ContactAll[10]
    =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S357>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M2_LQI_Ki_BLAll[4] =
{
    28.7972889F, -0.0F, -0.0F, 28.7972889F
} ;                                    /* Referenced by: '<S358>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M2_LQI_Ki_BLTa[4] =
{
    9.38374805F, -1.8794308E-15F, -4.2912486E-8F, 27.8693562F
} ;                                    /* Referenced by: '<S359>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M2_LQI_Ki_BLTb[4] =
{
    27.8693542F, 1.06374403E-8F, 1.4426057E-14F, 9.38374805F
} ;                                    /* Referenced by: '<S360>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M2_LQI_Ki_ContactAll[4] =
{
    28.1414433F, 0.0374334492F, 0.0374334604F, 28.1414433F
} ;                                    /* Referenced by: '<S361>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M2_LQI_Kp_BLAll[10] =
{
    2.08908319F, 0.0F, 0.0F, 2.08908319F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S362>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M2_LQI_Kp_BLTa[10] =
{
    1.40793204F, 2.14171248E-16F, 1.10820858E-11F, 2.6726594F, 1.35407532E-7F,
    -2.67545748F, 0.0F, 0.0F, -2.0821854E-10F, 0.588525295F
} ;                                    /* Referenced by: '<S363>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M2_LQI_Kp_BLTb[10] =
{
    2.6726594F, -2.74851843E-12F, -1.32852258E-15F, 1.40793204F, -2.67545652F,
    -3.35657688E-8F, 0.588525295F, 5.16143968E-11F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S364>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M2_LQI_Kp_ContactAll[10] =
{
    2.49564266F, -0.0273738019F, -0.0273738019F, 2.49564266F, -2.47810054F,
    -2.47810054F, 0.57462877F, -0.00959307794F, -0.009593077F, 0.57462877F
} ;                                    /* Referenced by: '<S365>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M2_Plant_A_BLAll[25] =
{
    0.998902917F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.998902917F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S188>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M2_Plant_A_BLTa[25] =
{
    0.998902917F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.947157621F, 0.000935082498F,
    0.0F, 0.605285F, 0.0F, 0.0517689921F, 0.999064505F, 0.0F, -0.605620265F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, -0.0857454613F, 0.00154964358F, 0.0F,
    0.972724557F
} ;                                    /* Referenced by: '<S189>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M2_Plant_A_BLTb[25] =
{
    0.947157621F, 0.0F, 0.000935082498F, 0.605285F, 0.0F, 0.0F, 0.998902917F,
    0.0F, 0.0F, 0.0F, 0.0517689921F, 0.0F, 0.999064505F, -0.605620265F, 0.0F,
    -0.0857454613F, 0.0F, 0.00154964358F, 0.972724557F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S190>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M2_Plant_A_ContactAll[25]
    =
{
    0.947157621F, 1.6125332E-5F, 0.000934791169F, 0.605285048F, -0.000238470035F,
    1.6125332E-5F, 0.947157621F, 0.000934791169F, -0.000238470035F, 0.605285048F,
    0.0517528653F, 0.0517528653F, 0.998129547F, -0.605381727F, -0.605381727F,
    -0.0857454687F, 3.37819765E-5F, 0.00154903333F, 0.972724676F,
    -0.000477695867F, 3.37819765E-5F, -0.0857454687F, 0.00154903333F,
    -0.000477695867F, 0.972724676F
} ;                                    /* Referenced by: '<S191>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M2_Plant_B_BLAll[15] =
{
    0.0876711756F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0876711756F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, -0.00158443837F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S192>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M2_Plant_B_BLTa[15] =
{
    0.0876711756F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0857796371F, 3.41772793E-5F,
    0.0F, 0.0267913416F, 0.0F, -3.41772793E-5F, -0.00158382079F, 0.0F,
    0.000484099F
} ;                                    /* Referenced by: '<S193>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M2_Plant_B_BLTb[15] =
{
    0.0857796371F, 0.0F, 3.41772793E-5F, 0.0267913416F, 0.0F, 0.0F,
    0.0876711756F, 0.0F, 0.0F, 0.0F, -3.41772793E-5F, 0.0F, -0.00158382079F,
    0.000484099F, 0.0F
} ;                                    /* Referenced by: '<S194>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M2_Plant_B_ContactAll[15]
    =
{
    0.0857796371F, 3.88289806E-7F, 3.41702653E-5F, 0.0267913416F,
    -6.28950102E-6F, 3.88289806E-7F, 0.0857796371F, 3.41702653E-5F,
    -6.28950102E-6F, 0.0267913416F, -3.41702653E-5F, -3.41702653E-5F,
    -0.00158320356F, 0.000483985379F, 0.000483985379F
} ;                                    /* Referenced by: '<S195>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M2_Plant_C_BLAll[25] =
{
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S196>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M2_Plant_C_BLTa[25] =
{
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S197>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M2_Plant_C_BLTb[25] =
{
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S198>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M2_Plant_C_ContactAll[25]
    =
{
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S199>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M2_Plant_D_BLAll[15] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S200>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M2_Plant_D_BLTa[15] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S201>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M2_Plant_D_BLTb[15] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S202>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M2_Plant_D_ContactAll[15]
    =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S203>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M3_KF_M_BLAll[15] =
{
    0.269481301F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.269481301F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.270156205F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S204>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M3_KF_M_BLTa[15] =
{
    0.269481301F, 1.04598585E-17F, 1.73973884E-17F, 0.0F, -1.97568331E-16F,
    1.04598585E-17F, 0.302151859F, 0.0382285F, 0.0F, -0.220891148F,
    1.73973884E-17F, 0.0382285F, 0.264113963F, 0.0F, -0.295296341F
} ;                                    /* Referenced by: '<S205>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M3_LQI_CMat_BLAll[10] =
{
    1.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S366>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M3_LQI_CMat_BLTa[10] =
{
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S367>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M3_LQI_Ki_BLAll[4] =
{
    28.7972889F, -0.0F, -0.0F, 28.7972889F
} ;                                    /* Referenced by: '<S368>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M3_LQI_Ki_BLTa[4] =
{
    9.38374805F, -1.8794308E-15F, -4.2912486E-8F, 27.8693562F
} ;                                    /* Referenced by: '<S369>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M3_LQI_Kp_BLAll[10] =
{
    2.08908319F, 0.0F, 0.0F, 2.08908319F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S370>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M3_LQI_Kp_BLTa[10] =
{
    1.40793204F, 2.14171248E-16F, 1.10820858E-11F, 2.6726594F, 1.35407532E-7F,
    -2.67545748F, 0.0F, 0.0F, -2.0821854E-10F, 0.588525295F
} ;                                    /* Referenced by: '<S371>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M3_Plant_A_BLAll[25] =
{
    0.998902917F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.998902917F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S206>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M3_Plant_A_BLTa[25] =
{
    0.998902917F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.947157621F, 0.000935082498F,
    0.0F, 0.605285F, 0.0F, 0.0517689921F, 0.999064505F, 0.0F, -0.605620265F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, -0.0857454613F, 0.00154964358F, 0.0F,
    0.972724557F
} ;                                    /* Referenced by: '<S207>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M3_Plant_B_BLAll[15] =
{
    0.0876711756F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0876711756F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, -0.00158443837F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S208>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M3_Plant_B_BLTa[15] =
{
    0.0876711756F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0857796371F, 3.41772793E-5F,
    0.0F, 0.0267913416F, 0.0F, -3.41772793E-5F, -0.00158382079F, 0.0F,
    0.000484099F
} ;                                    /* Referenced by: '<S209>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M3_Plant_C_BLAll[25] =
{
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S210>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M3_Plant_C_BLTa[25] =
{
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S211>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M3_Plant_D_BLAll[15] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S212>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_M3_Plant_D_BLTa[15] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S213>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_N_KF_M_BLAll[15] =
{
    0.269481301F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.269481301F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.270156205F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S214>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_N_KF_M_BLTa[15] =
{
    0.269481301F, 1.04598585E-17F, 1.73973884E-17F, 0.0F, -1.97568331E-16F,
    1.04598585E-17F, 0.302151859F, 0.0382285F, 0.0F, -0.220891148F,
    1.73973884E-17F, 0.0382285F, 0.264113963F, 0.0F, -0.295296341F
} ;                                    /* Referenced by: '<S215>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_N_LQI_CMat_BLAll[10] =
{
    1.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S372>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_N_LQI_CMat_BLTa[10] =
{
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S373>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_N_LQI_Ki_BLAll[4] =
{
    28.7972889F, -0.0F, -0.0F, 28.7972889F
} ;                                    /* Referenced by: '<S374>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_N_LQI_Ki_BLTa[4] =
{
    9.38374805F, -1.8794308E-15F, -4.2912486E-8F, 27.8693562F
} ;                                    /* Referenced by: '<S375>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_N_LQI_Kp_BLAll[10] =
{
    2.08908319F, 0.0F, 0.0F, 2.08908319F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S376>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_N_LQI_Kp_BLTa[10] =
{
    1.40793204F, 2.14171248E-16F, 1.10820858E-11F, 2.6726594F, 1.35407532E-7F,
    -2.67545748F, 0.0F, 0.0F, -2.0821854E-10F, 0.588525295F
} ;                                    /* Referenced by: '<S377>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_N_Plant_A_BLAll[25] =
{
    0.998902917F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.998902917F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S216>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_N_Plant_A_BLTa[25] =
{
    0.998902917F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.947157621F, 0.000935082498F,
    0.0F, 0.605285F, 0.0F, 0.0517689921F, 0.999064505F, 0.0F, -0.605620265F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, -0.0857454613F, 0.00154964358F, 0.0F,
    0.972724557F
} ;                                    /* Referenced by: '<S217>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_N_Plant_B_BLAll[15] =
{
    0.0876711756F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0876711756F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, -0.00158443837F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S218>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_N_Plant_B_BLTa[15] =
{
    0.0876711756F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0857796371F, 3.41772793E-5F,
    0.0F, 0.0267913416F, 0.0F, -3.41772793E-5F, -0.00158382079F, 0.0F,
    0.000484099F
} ;                                    /* Referenced by: '<S219>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_N_Plant_C_BLAll[25] =
{
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S220>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_N_Plant_C_BLTa[25] =
{
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S221>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_N_Plant_D_BLAll[15] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S222>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_K_N_Plant_D_BLTa[15] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S223>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(boolean, HADR_VAR_INIT) KaHADR_b_EnblRLPI[2] =
{
    1, 1
} ;                                    /* Referenced by: '<S419>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_k_MatC_KalmanPlant[15] =
{
    1.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S224>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_r_BMat_REF[3] =
{
    0.00152916659F, 0.00152916659F, 0.00152916659F
} ;                                    /* Referenced by: '<S402>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KaHADR_r_CMat_REF[3] =
{
    1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S403>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(uint8, HADR_VAR_INIT) KeHADR_Cnt_KalIterLimit = 5U;/* Referenced by: '<S46>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_SinWave && Rte_SysCon_Variant_HADR_SumAndLimits

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_Cnt_NumPtsPerFreq = 0.0F;/* Referenced by: '<S432>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_SinWave && Rte_SysCon_Variant_HADR_SumAndLimits

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_Cnt_SinGenEnbl = 43690.0F;/* Referenced by: '<S457>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_SinWave && Rte_SysCon_Variant_HADR_SumAndLimits

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_Cnt_SinGenLoop = 6.0F;/* Referenced by: '<S458>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_SinWave && Rte_SysCon_Variant_HADR_SumAndLimits

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_Cnt_TblOfstInc = 0.0F;/* Referenced by: '<S433>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_SinWave && Rte_SysCon_Variant_HADR_SumAndLimits

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_Cnt_TblOfstStop = 100.0F;/* Referenced by: '<S434>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_K_BackCalcMtrALQI = 1.0F;/* Referenced by: '<S254>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_K_BackCalcMtrBLQI = 1.0F;/* Referenced by: '<S255>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_M_MaxOffsetLQIMtrA = 30.0F;/* Referenced by: '<S256>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_M_MaxOffsetLQIMtrB = 30.0F;/* Referenced by: '<S257>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_M_MinOffsetLQIMtrA = -30.0F;/* Referenced by: '<S258>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_M_MinOffsetLQIMtrB = -30.0F;/* Referenced by: '<S259>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_M_MtrA_LQI6SOLim_LSP =
    0.05F;                             /* Referenced by: '<S260>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_M_MtrA_LQI6SOLim_RSP = 0.1F;/* Referenced by: '<S261>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_M_MtrB_LQI6SOLim_LSP =
    0.05F;                             /* Referenced by: '<S262>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_M_MtrB_LQI6SOLim_RSP = 0.1F;/* Referenced by: '<S263>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_SinWave && Rte_SysCon_Variant_HADR_SumAndLimits

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_M_Mtr_SinMag = 5.0F;/* Referenced by: '<S443>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_SinWave && Rte_SysCon_Variant_HADR_SumAndLimits

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_M_Mtr_SinMaxThd = 4.5F;/* Referenced by: '<S448>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_SinWave && Rte_SysCon_Variant_HADR_SumAndLimits

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_M_Mtr_SinMinThd = -3.0F;/* Referenced by: '<S449>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_M_RLPIMax = 1000.0F;/* Referenced by: '<S420>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_M_RLPIMin = -1000.0F;/* Referenced by: '<S421>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_SinWave && Rte_SysCon_Variant_HADR_SumAndLimits

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_Pct_PctChngInFreq = 0.0F;/* Referenced by: '<S435>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(boolean, HADR_VAR_INIT) KeHADR_b_MtrA_ShtDwn_AEMD = 0;/* Referenced by: '<S48>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(boolean, HADR_VAR_INIT) KeHADR_b_MtrA_ShtDwn_OPTL = 0;/* Referenced by: '<S49>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(boolean, HADR_VAR_INIT) KeHADR_b_MtrB_ShtDwn_AEMD = 0;/* Referenced by: '<S50>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(boolean, HADR_VAR_INIT) KeHADR_b_MtrB_ShtDwn_OPTL = 0;/* Referenced by: '<S51>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(boolean, HADR_VAR_INIT) KeHADR_b_ShutdwnLQIBL = 0;/* Referenced by: '<S264>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(boolean, HADR_VAR_INIT) KeHADR_b_UseDlyRefSt = 1;/* Referenced by: '<S24>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_SinWave && Rte_SysCon_Variant_HADR_SumAndLimits

static volatile CONST(boolean, HADR_VAR_INIT) KeHADR_b_UseFixedSinInc = 1;/* Referenced by: '<S436>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(boolean, HADR_VAR_INIT) KeHADR_b_UseGenConv4Spd = 1;/* Referenced by: '<S25>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(boolean, HADR_VAR_INIT) KeHADR_b_UseRawMtrSpd = 1;/* Referenced by: '<S26>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(boolean, HADR_VAR_INIT) KeHADR_b_UseTblLQIOffset = 1;/* Referenced by: '<S265>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(boolean, HADR_VAR_INIT) KeHADR_b_UseWhlSpd4VehRefSpd = 1;/* Referenced by: '<S394>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(boolean, HADR_VAR_INIT) KeHADR_b_bypassDCBlkFilt = 0;/* Referenced by: '<S27>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_k_MtrA_ADGain = 1.0F;/* Referenced by: '<S28>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_k_MtrA_DcBlkFiltCoeff =
    0.1F;                              /* Referenced by: '<S29>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_k_MtrB_ADGain = 1.0F;/* Referenced by: '<S30>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_k_MtrB_DcBlkFiltCoeff =
    0.1F;                              /* Referenced by: '<S31>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_k_RLEstVehEstSpdFilt = 1.0F;/* Referenced by: '<S32>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_k_RLIGain = 75.0F;/* Referenced by: '<S422>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_k_RLPGain = 100.0F;/* Referenced by: '<S423>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_k_SpringConst = 123.843697F;/* Referenced by:
                                                                      * '<S237>/Calib'
                                                                      * '<S239>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_k_TaInLashSpdFilt = 1.0F;/* Referenced by: '<S266>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_k_TaSpringTrqShpLashExit =
    0.2F;                              /* Referenced by: '<S267>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_k_TbInLashSpdFilt = 1.0F;/* Referenced by: '<S268>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_k_TbSpringTrqShpLashExit =
    0.2F;                              /* Referenced by: '<S269>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_nr_BacklashAng_Arad = 0.4F;/* Referenced by:
                                                                      * '<S58>/Calib'
                                                                      * '<S68>/Calib'
                                                                      * '<S238>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_nr_BacklashAng_Brad = 0.15F;/* Referenced by:
                                                                      * '<S59>/Calib'
                                                                      * '<S69>/Calib'
                                                                      * '<S240>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_r_AMat_REF = 0.999961734F;/* Referenced by: '<S404>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_r_BacklashAngResl = 1.0E-5F;/* Referenced by: '<S60>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_r_ConvRPM2RadpSec =
    0.10472F;                          /* Referenced by: '<S383>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_r_ConvRadpSec2RPM = 9.5493F;/* Referenced by: '<S11>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_r_FrntLWhlSpdConv =
    1.14146435F;                       /* Referenced by: '<S395>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_r_FrntRWhlSpdConv =
    1.14146435F;                       /* Referenced by: '<S396>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_r_KpHMPH = 0.621371F;/* Referenced by: '<S405>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_r_LBF2NM = 4.44822F;/* Referenced by: '<S406>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_r_MtrSpeedDomainConv = 1.0F;/* Referenced by: '<S12>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_r_RDL_A = 56.18F;/* Referenced by: '<S407>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_r_RDL_B = 0.2774F;/* Referenced by: '<S408>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_r_RDL_C = 0.03846F;/* Referenced by: '<S409>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_r_RearLWhlSpdConv =
    1.14146435F;                       /* Referenced by: '<S397>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_r_RearRWhlSpdConv =
    1.14146435F;                       /* Referenced by: '<S398>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_r_TireRadius = 0.3F;/* Referenced by:
                                                                      * '<S388>/Calib'
                                                                      * '<S410>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_r_VehSpdConv = 1.0F;/* Referenced by: '<S399>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_t_MtrA_LQI6SOEnblDelay =
    0.25F;                             /* Referenced by: '<S270>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_t_MtrB_LQI6SOEnblDelay =
    0.25F;                             /* Referenced by: '<S271>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_SinWave && Rte_SysCon_Variant_HADR_SumAndLimits

static volatile CONST(float32, HADR_VAR_INIT) KeHADR_t_SinPeriod = 0.5F;/* Referenced by: '<S459>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(uint8, HADR_VAR_INIT) KeHADR_y_SelADStrat = 1U;/* Referenced by: '<S33>/Calib' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KtHADR_dn_BackLashAcc_Ta[24] =
{
    -11.8469772F, -10.9223738F, -8.78595352F, -8.583951F, -8.16496563F,
    -7.9471941F, -4.58831453F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 4.58831453F, 7.9471941F, 8.16496563F, 8.583951F, 8.78595352F,
    10.9223738F, 11.8469772F
} ;                                    /* Referenced by: '<S272>/Vector' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KtHADR_dn_BackLashAcc_Tb[24] =
{
    -11.8469772F, -10.9223738F, -8.78595352F, -8.583951F, -8.16496563F,
    -7.9471941F, -4.58831453F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 4.58831453F, 7.9471941F, 8.16496563F, 8.583951F, 8.78595352F,
    10.9223738F, 11.8469772F
} ;                                    /* Referenced by: '<S273>/Vector' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KtHADR_m_AllowedMtrLQIOffset[12] =
{
    30.0F, 60.0F, 60.0F, 30.0F, 30.0F, 60.0F, 60.0F, 30.0F, 30.0F, 60.0F, 60.0F,
    60.0F
} ;                                    /* Referenced by:
                                        * '<S379>/Vector'
                                        * '<S380>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KxHADR_dn_BackLashAcc_Ta[3] =
{
    -1.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S272>/Vector' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KxHADR_dn_BackLashAcc_Tb[3] =
{
    -1.0F, 0.0F, 1.0F
} ;                                    /* Referenced by: '<S273>/Vector' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KxHADR_m_AllowedMtrLQIOffset[3] =
{
    0.0F, 30.0F, 61.0F
} ;                                    /* Referenced by:
                                        * '<S379>/Vector'
                                        * '<S380>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KyHADR_dn_BackLashAcc_Ta[8] =
{
    -0.4F, -0.28F, -0.04F, -0.02F, 0.02F, 0.04F, 0.28F, 0.4F
} ;                                    /* Referenced by: '<S272>/Vector' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KyHADR_dn_BackLashAcc_Tb[8] =
{
    -0.15F, -0.105F, -0.04F, -0.02F, 0.02F, 0.04F, 0.105F, 0.15F
} ;                                    /* Referenced by: '<S273>/Vector' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static volatile CONST(float32, HADR_VAR_INIT) KyHADR_m_AllowedMtrLQIOffset[4] =
{
    -65.0F, -60.0F, 60.0F, 66.0F
} ;                                    /* Referenced by:
                                        * '<S379>/Vector'
                                        * '<S380>/Vector'
                                        */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_HADR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_HADR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VaHADR_K_KF_M[15];/* '<S56>/Merge4' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VaHADR_K_LQI_CMat[10];/* '<S249>/Merge7' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VaHADR_K_LQI_Ki[4];/* '<S249>/Merge6' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VaHADR_K_LQI_Kp[10];/* '<S249>/Merge5' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VaHADR_K_Plant_A[25];/* '<S56>/Merge' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VaHADR_K_Plant_B[15];/* '<S56>/Merge1' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VaHADR_K_Plant_C[25];/* '<S56>/Merge2' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VaHADR_K_Plant_D[15];/* '<S56>/Merge3' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VaHADR_M_LQIBL_Ki[2];/* '<S378>/Switch' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VaHADR_M_LQIBL_Kp[2];/* '<S47>/Product' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VaHADR_M_LQIError[5];/* '<S47>/Sum1' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VaHADR_M_RLCL[2];/* '<S414>/Switch' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VaHADR_M_RoadLoadEst_AD[2];/* '<S413>/Switch1' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VaHADR_M_TrqCmndsAD[2];/* '<S9>/Merge' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VaHADR_nr_KalmanBL_XHat[5];/* '<S45>/Add4' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VaHADR_nr_RefSpd[3];/* '<S37>/Product' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VaHADR_nr_xHat_Pos[3];/* '<S67>/Switch1' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VaHADR_nr_xHat_PosRaw[3];/* '<S234>/Gain' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(uint16, HADR_VAR_INIT) VeHADR_Cnt_MatrixCase_KF;/* '<S45>/Switch' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(uint16, HADR_VAR_INIT) VeHADR_Cnt_MatrixCase_LQI;/* '<S47>/Switch14' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VeHADR_M_LQIMtrAcmd;/* '<S47>/Switch9' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VeHADR_M_LQIMtrAraw;/* '<S278>/Gain' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VeHADR_M_LQIMtrBcmd;/* '<S47>/Switch10' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VeHADR_M_LQIMtrBraw;/* '<S279>/Gain' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VeHADR_M_MtrAAD;/* '<S9>/Switch7' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VeHADR_M_MtrADB4Filt_Gain;/* '<S9>/Sum1' */

#endif

static VAR(float32, HADR_VAR_INIT) VeHADR_M_MtrA_Lash;/* '<S3>/HADR_LashCtrl' */

#if Rte_SysCon_Variant_HADR_SumAndLimits

static VAR(float32, HADR_VAR_INIT) VeHADR_M_MtrA_Sin;/* '<S4>/HADR_SinGen' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VeHADR_M_MtrBAD;/* '<S9>/Switch8' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VeHADR_M_MtrBDB4Filt_Gain;/* '<S9>/Sum2' */

#endif

static VAR(float32, HADR_VAR_INIT) VeHADR_M_MtrB_Lash;/* '<S3>/HADR_LashCtrl' */
static VAR(float32, HADR_VAR_INIT) VeHADR_M_MtrC_Lash;/* '<S3>/HADR_LashCtrl' */

#if Rte_SysCon_Variant_HADR_SumAndLimits

static VAR(float32, HADR_VAR_INIT) VeHADR_M_MtrC_Sin;/* '<S4>/HADR_SinGen' */

#endif

#if Rte_SysCon_Variant_HADR_SinWave && Rte_SysCon_Variant_HADR_SumAndLimits

static VAR(float32, HADR_VAR_INIT) VeHADR_M_Mtr_OffsetStart;/* '<S460>/Switch1' */

#endif

#if Rte_SysCon_Variant_HADR_SinWave && Rte_SysCon_Variant_HADR_SumAndLimits

static VAR(float32, HADR_VAR_INIT) VeHADR_M_Mtr_SinBfrLmt;/* '<S450>/Switch' */

#endif

#if Rte_SysCon_Variant_HADR_SinWave && Rte_SysCon_Variant_HADR_SumAndLimits

static VAR(float32, HADR_VAR_INIT) VeHADR_M_Mtr_SinBfrThd;/* '<S429>/Multiplication3' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VeHADR_M_RLBrkTrq;/* '<S412>/Merge' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VeHADR_M_RlEst;/* '<S38>/Switch' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VeHADR_M_TaLQIBL_Ref;/* '<S47>/Switch7' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VeHADR_M_TbLQIBL_Ref;/* '<S47>/Switch8' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(boolean, HADR_VAR_INIT) VeHADR_b_CalcBLSpeedRefNa;/* '<S47>/Logical' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(boolean, HADR_VAR_INIT) VeHADR_b_CalcBLSpeedRefNb;/* '<S47>/Logical2' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(boolean, HADR_VAR_INIT) VeHADR_b_DsblMtrA_Dnmc_KF;/* '<S56>/Merge8' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(boolean, HADR_VAR_INIT) VeHADR_b_DsblMtrA_Dnmc_LQI;/* '<S249>/Merge8' */

#endif

#if Rte_SysCon_Variant_HADR_SinWave && Rte_SysCon_Variant_HADR_SumAndLimits

static VAR(boolean, HADR_VAR_INIT) VeHADR_b_Mtr_SinEnable;/* '<S438>/Switch' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(boolean, HADR_VAR_INIT) VeHADR_b_TaLQIwBLOn;/* '<S252>/Switch1' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(boolean, HADR_VAR_INIT) VeHADR_b_TaLQIwBLReset;/* '<S280>/AND' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(boolean, HADR_VAR_INIT) VeHADR_b_TbLQIwBLOn;/* '<S251>/Switch1' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(boolean, HADR_VAR_INIT) VeHADR_b_TbLQIwBLReset;/* '<S281>/AND' */

#endif

#if Rte_SysCon_Variant_HADR_SinWave && Rte_SysCon_Variant_HADR_SumAndLimits

static VAR(float32, HADR_VAR_INIT) VeHADR_f_MtrSinFreq;/* '<S429>/Gain' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VeHADR_nr_MtrASpdActRad;/* '<S18>/Product' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VeHADR_nr_MtrA_BL_rad;/* '<S70>/Switch' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VeHADR_nr_MtrA_Disp;/* '<S52>/Sum9' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VeHADR_nr_MtrBSpdActRad;/* '<S18>/Product1' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VeHADR_nr_MtrB_BL_rad;/* '<S71>/Switch' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VeHADR_nr_MtrB_Disp;/* '<S52>/Sum8' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VeHADR_nr_NaRef_BLRaw;/* '<S47>/Sum5' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VeHADR_nr_NaRef_LQIBL;/* '<S47>/Switch11' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VeHADR_nr_NbRef_BLRaw;/* '<S47>/Sum3' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VeHADR_nr_NbRef_LQIBL;/* '<S47>/Switch2' */

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static VAR(float32, HADR_VAR_INIT) VeHADR_nr_VehSpd_Act;/* '<S9>/Merge3' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_HADR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_HADR
#include "MemMap.h"

CONST(ConstB_HADR_ac_T, HADR_VAR_INIT) HADR_ac_ConstB =
{
    CeHADR_e_LashStZero                /* '<S469>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_HADR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_HADR
#include "MemMap.h"

CONST(ConstP_HADR_ac_T, HADR_VAR_INIT) HADR_ac_ConstP =
{

#if Rte_SysCon_Variant_HADR_LashCtrl

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S379>/Vector'
     *   '<S380>/Vector'
     */
    {
        3U, 2U
    },

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S272>/Vector'
     *   '<S273>/Vector'
     */
    {
        7U, 2U
    },

#endif

#ifndef CONSTP_HADR_AC_T_VARIANT_EXISTS

    0
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_HADR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_HADR
#include "MemMap.h"

VAR(B_HADR_ac_T, HADR_VAR_INIT) HADR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_HADR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_HADR
#include "MemMap.h"

VAR(DW_HADR_ac_T, HADR_VAR_INIT) HADR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_HADR
#include "MemMap.h"
#if Rte_SysCon_Variant_HADR_LashCtrl

static FUNC(void, HADR_CODE_LOCAL) GRsChangeHADR_KF(void);

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static FUNC(void, HADR_CODE_LOCAL) HADR_ac_Kalman_Plant(void);

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

static FUNC(void, HADR_CODE_LOCAL) GRsChangeHADR_LQI(void);

#endif

/* Output and update for function-call system: '<S45>/HADR_Prmtr_Selection_KF' */
#if Rte_SysCon_Variant_HADR_LashCtrl

static FUNC(void, HADR_CODE_LOCAL) GRsChangeHADR_KF(void)
{
    sint32 i;

    /* If: '<S56>/If' incorporates:
     *  Constant: '<S76>/Constant'
     *  Constant: '<S77>/Constant'
     *  Constant: '<S78>/Constant'
     *  Constant: '<S79>/Constant'
     *  Constant: '<S80>/Constant'
     *  Constant: '<S81>/Constant'
     *  Constant: '<S82>/Constant'
     *  Constant: '<S83>/Constant'
     *  Constant: '<S84>/Constant'
     *  Constant: '<S85>/Constant'
     *  Logic: '<S56>/Logical1'
     *  Logic: '<S56>/Logical2'
     *  RelationalOperator: '<S56>/Comparison1'
     *  RelationalOperator: '<S56>/Comparison10'
     *  RelationalOperator: '<S56>/Comparison2'
     *  RelationalOperator: '<S56>/Comparison3'
     *  RelationalOperator: '<S56>/Comparison4'
     *  RelationalOperator: '<S56>/Comparison5'
     *  RelationalOperator: '<S56>/Comparison6'
     *  RelationalOperator: '<S56>/Comparison7'
     *  RelationalOperator: '<S56>/Comparison8'
     *  RelationalOperator: '<S56>/Comparison9'
     */
    if ((((uint32)HADR_ac_B.TmpSignalConversionAtHSER_e_HADRLeadStat) ==
            CeHSER_e_Neut_State) || (((uint32)
            HADR_ac_B.TmpSignalConversionAtHSER_e_HADRLeadStat) ==
            CeHSER_e_Neut_State_2))
    {
        /* Outputs for IfAction SubSystem: '<S56>/Neutral' incorporates:
         *  ActionPort: '<S93>/Action Port'
         */
        /* MultiPortSwitch: '<S93>/Multiport Switch' */
        switch (VeHADR_Cnt_MatrixCase_KF)
        {
          case 1:
            /* Merge: '<S56>/Merge' incorporates:
             *  Constant: '<S217>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_A[0])), ((const float32 *)
                    &(KaHADR_K_N_Plant_A_BLTa[0])), 25U * (sizeof(float32)));
            break;

          case 2:
            /* Merge: '<S56>/Merge' incorporates:
             *  Constant: '<S217>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_A[0])), ((const float32 *)
                    &(KaHADR_K_N_Plant_A_BLTa[0])), 25U * (sizeof(float32)));
            break;

          case 3:
            /* Merge: '<S56>/Merge' incorporates:
             *  Constant: '<S216>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_A[0])), ((const float32 *)
                    &(KaHADR_K_N_Plant_A_BLAll[0])), 25U * (sizeof(float32)));
            break;

          default:
            /* Merge: '<S56>/Merge' incorporates:
             *  Constant: '<S216>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_A[0])), ((const float32 *)
                    &(KaHADR_K_N_Plant_A_BLAll[0])), 25U * (sizeof(float32)));
            break;
        }

        /* End of MultiPortSwitch: '<S93>/Multiport Switch' */

        /* MultiPortSwitch: '<S93>/Multiport Switch1' */
        switch (VeHADR_Cnt_MatrixCase_KF)
        {
          case 1:
            /* Merge: '<S56>/Merge1' incorporates:
             *  Constant: '<S219>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_B[(i)] = KaHADR_K_N_Plant_B_BLTa[(i)];
            }
            break;

          case 2:
            /* Merge: '<S56>/Merge1' incorporates:
             *  Constant: '<S219>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_B[(i)] = KaHADR_K_N_Plant_B_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S56>/Merge1' incorporates:
             *  Constant: '<S218>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_B[(i)] = KaHADR_K_N_Plant_B_BLAll[(i)];
            }
            break;

          default:
            /* Merge: '<S56>/Merge1' incorporates:
             *  Constant: '<S218>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_B[(i)] = KaHADR_K_N_Plant_B_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S93>/Multiport Switch1' */

        /* MultiPortSwitch: '<S93>/Multiport Switch2' */
        switch (VeHADR_Cnt_MatrixCase_KF)
        {
          case 1:
            /* Merge: '<S56>/Merge2' incorporates:
             *  Constant: '<S221>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_C[0])), ((const float32 *)
                    &(KaHADR_K_N_Plant_C_BLTa[0])), 25U * (sizeof(float32)));
            break;

          case 2:
            /* Merge: '<S56>/Merge2' incorporates:
             *  Constant: '<S221>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_C[0])), ((const float32 *)
                    &(KaHADR_K_N_Plant_C_BLTa[0])), 25U * (sizeof(float32)));
            break;

          case 3:
            /* Merge: '<S56>/Merge2' incorporates:
             *  Constant: '<S220>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_C[0])), ((const float32 *)
                    &(KaHADR_K_N_Plant_C_BLAll[0])), 25U * (sizeof(float32)));
            break;

          default:
            /* Merge: '<S56>/Merge2' incorporates:
             *  Constant: '<S220>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_C[0])), ((const float32 *)
                    &(KaHADR_K_N_Plant_C_BLAll[0])), 25U * (sizeof(float32)));
            break;
        }

        /* End of MultiPortSwitch: '<S93>/Multiport Switch2' */

        /* MultiPortSwitch: '<S93>/Multiport Switch3' */
        switch (VeHADR_Cnt_MatrixCase_KF)
        {
          case 1:
            /* Merge: '<S56>/Merge3' incorporates:
             *  Constant: '<S223>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_D[(i)] = KaHADR_K_N_Plant_D_BLTa[(i)];
            }
            break;

          case 2:
            /* Merge: '<S56>/Merge3' incorporates:
             *  Constant: '<S223>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_D[(i)] = KaHADR_K_N_Plant_D_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S56>/Merge3' incorporates:
             *  Constant: '<S222>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_D[(i)] = KaHADR_K_N_Plant_D_BLAll[(i)];
            }
            break;

          default:
            /* Merge: '<S56>/Merge3' incorporates:
             *  Constant: '<S222>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_D[(i)] = KaHADR_K_N_Plant_D_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S93>/Multiport Switch3' */

        /* MultiPortSwitch: '<S93>/Multiport Switch4' */
        switch (VeHADR_Cnt_MatrixCase_KF)
        {
          case 1:
            /* Merge: '<S56>/Merge4' incorporates:
             *  Constant: '<S215>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_KF_M[(i)] = KaHADR_K_N_KF_M_BLTa[(i)];
            }
            break;

          case 2:
            /* Merge: '<S56>/Merge4' incorporates:
             *  Constant: '<S215>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_KF_M[(i)] = KaHADR_K_N_KF_M_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S56>/Merge4' incorporates:
             *  Constant: '<S214>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_KF_M[(i)] = KaHADR_K_N_KF_M_BLAll[(i)];
            }
            break;

          default:
            /* Merge: '<S56>/Merge4' incorporates:
             *  Constant: '<S214>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_KF_M[(i)] = KaHADR_K_N_KF_M_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S93>/Multiport Switch4' */

        /* Merge: '<S56>/Merge8' incorporates:
         *  Constant: '<S93>/Constant'
         *  SignalConversion generated from: '<S93>/VeHADR_b_N_DsblMtrA_Dnmc'
         */
        VeHADR_b_DsblMtrA_Dnmc_KF = true;

        /* End of Outputs for SubSystem: '<S56>/Neutral' */
    }
    else if (((uint32)HADR_ac_B.TmpSignalConversionAtHSER_e_HADRLeadStat) ==
             CeHSER_e_M1_State)
    {
        /* Outputs for IfAction SubSystem: '<S56>/M1' incorporates:
         *  ActionPort: '<S90>/Action Port'
         */
        /* MultiPortSwitch: '<S90>/Multiport Switch' */
        switch (VeHADR_Cnt_MatrixCase_KF)
        {
          case 1:
            /* Merge: '<S56>/Merge' incorporates:
             *  Constant: '<S177>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_A[0])), ((const float32 *)
                    &(KaHADR_K_M1_Plant_A_BLTa[0])), 25U * (sizeof(float32)));
            break;

          case 2:
            /* Merge: '<S56>/Merge' incorporates:
             *  Constant: '<S177>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_A[0])), ((const float32 *)
                    &(KaHADR_K_M1_Plant_A_BLTa[0])), 25U * (sizeof(float32)));
            break;

          case 3:
            /* Merge: '<S56>/Merge' incorporates:
             *  Constant: '<S176>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_A[0])), ((const float32 *)
                    &(KaHADR_K_M1_Plant_A_BLAll[0])), 25U * (sizeof(float32)));
            break;

          default:
            /* Merge: '<S56>/Merge' incorporates:
             *  Constant: '<S176>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_A[0])), ((const float32 *)
                    &(KaHADR_K_M1_Plant_A_BLAll[0])), 25U * (sizeof(float32)));
            break;
        }

        /* End of MultiPortSwitch: '<S90>/Multiport Switch' */

        /* MultiPortSwitch: '<S90>/Multiport Switch1' */
        switch (VeHADR_Cnt_MatrixCase_KF)
        {
          case 1:
            /* Merge: '<S56>/Merge1' incorporates:
             *  Constant: '<S179>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_B[(i)] = KaHADR_K_M1_Plant_B_BLTa[(i)];
            }
            break;

          case 2:
            /* Merge: '<S56>/Merge1' incorporates:
             *  Constant: '<S179>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_B[(i)] = KaHADR_K_M1_Plant_B_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S56>/Merge1' incorporates:
             *  Constant: '<S178>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_B[(i)] = KaHADR_K_M1_Plant_B_BLAll[(i)];
            }
            break;

          default:
            /* Merge: '<S56>/Merge1' incorporates:
             *  Constant: '<S178>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_B[(i)] = KaHADR_K_M1_Plant_B_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S90>/Multiport Switch1' */

        /* MultiPortSwitch: '<S90>/Multiport Switch2' */
        switch (VeHADR_Cnt_MatrixCase_KF)
        {
          case 1:
            /* Merge: '<S56>/Merge2' incorporates:
             *  Constant: '<S181>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_C[0])), ((const float32 *)
                    &(KaHADR_K_M1_Plant_C_BLTa[0])), 25U * (sizeof(float32)));
            break;

          case 2:
            /* Merge: '<S56>/Merge2' incorporates:
             *  Constant: '<S181>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_C[0])), ((const float32 *)
                    &(KaHADR_K_M1_Plant_C_BLTa[0])), 25U * (sizeof(float32)));
            break;

          case 3:
            /* Merge: '<S56>/Merge2' incorporates:
             *  Constant: '<S180>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_C[0])), ((const float32 *)
                    &(KaHADR_K_M1_Plant_C_BLAll[0])), 25U * (sizeof(float32)));
            break;

          default:
            /* Merge: '<S56>/Merge2' incorporates:
             *  Constant: '<S180>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_C[0])), ((const float32 *)
                    &(KaHADR_K_M1_Plant_C_BLAll[0])), 25U * (sizeof(float32)));
            break;
        }

        /* End of MultiPortSwitch: '<S90>/Multiport Switch2' */

        /* MultiPortSwitch: '<S90>/Multiport Switch3' */
        switch (VeHADR_Cnt_MatrixCase_KF)
        {
          case 1:
            /* Merge: '<S56>/Merge3' incorporates:
             *  Constant: '<S183>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_D[(i)] = KaHADR_K_M1_Plant_D_BLTa[(i)];
            }
            break;

          case 2:
            /* Merge: '<S56>/Merge3' incorporates:
             *  Constant: '<S183>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_D[(i)] = KaHADR_K_M1_Plant_D_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S56>/Merge3' incorporates:
             *  Constant: '<S182>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_D[(i)] = KaHADR_K_M1_Plant_D_BLAll[(i)];
            }
            break;

          default:
            /* Merge: '<S56>/Merge3' incorporates:
             *  Constant: '<S182>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_D[(i)] = KaHADR_K_M1_Plant_D_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S90>/Multiport Switch3' */

        /* MultiPortSwitch: '<S90>/Multiport Switch4' */
        switch (VeHADR_Cnt_MatrixCase_KF)
        {
          case 1:
            /* Merge: '<S56>/Merge4' incorporates:
             *  Constant: '<S175>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_KF_M[(i)] = KaHADR_K_M1_KF_M_BLTa[(i)];
            }
            break;

          case 2:
            /* Merge: '<S56>/Merge4' incorporates:
             *  Constant: '<S175>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_KF_M[(i)] = KaHADR_K_M1_KF_M_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S56>/Merge4' incorporates:
             *  Constant: '<S174>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_KF_M[(i)] = KaHADR_K_M1_KF_M_BLAll[(i)];
            }
            break;

          default:
            /* Merge: '<S56>/Merge4' incorporates:
             *  Constant: '<S174>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_KF_M[(i)] = KaHADR_K_M1_KF_M_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S90>/Multiport Switch4' */

        /* Merge: '<S56>/Merge8' incorporates:
         *  Constant: '<S90>/Constant'
         *  SignalConversion generated from: '<S90>/VeHADR_b_M1_DsblMtrA_Dnmc'
         */
        VeHADR_b_DsblMtrA_Dnmc_KF = true;

        /* End of Outputs for SubSystem: '<S56>/M1' */
    }
    else if ((((uint32)HADR_ac_B.TmpSignalConversionAtHSER_e_HADRLeadStat) ==
              CeHSER_e_M2_State) || (((uint32)
               HADR_ac_B.TmpSignalConversionAtHSER_e_HADRLeadStat) ==
              CeHSER_e_M2_State_2))
    {
        /* Outputs for IfAction SubSystem: '<S56>/M2' incorporates:
         *  ActionPort: '<S91>/Action Port'
         */
        /* MultiPortSwitch: '<S91>/Multiport Switch' */
        switch (VeHADR_Cnt_MatrixCase_KF)
        {
          case 1:
            /* Merge: '<S56>/Merge' incorporates:
             *  Constant: '<S191>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_A[0])), ((const float32 *)
                    &(KaHADR_K_M2_Plant_A_ContactAll[0])), 25U * (sizeof(float32)));
            break;

          case 2:
            /* Merge: '<S56>/Merge' incorporates:
             *  Constant: '<S189>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_A[0])), ((const float32 *)
                    &(KaHADR_K_M2_Plant_A_BLTa[0])), 25U * (sizeof(float32)));
            break;

          case 3:
            /* Merge: '<S56>/Merge' incorporates:
             *  Constant: '<S190>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_A[0])), ((const float32 *)
                    &(KaHADR_K_M2_Plant_A_BLTb[0])), 25U * (sizeof(float32)));
            break;

          default:
            /* Merge: '<S56>/Merge' incorporates:
             *  Constant: '<S188>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_A[0])), ((const float32 *)
                    &(KaHADR_K_M2_Plant_A_BLAll[0])), 25U * (sizeof(float32)));
            break;
        }

        /* End of MultiPortSwitch: '<S91>/Multiport Switch' */

        /* MultiPortSwitch: '<S91>/Multiport Switch1' */
        switch (VeHADR_Cnt_MatrixCase_KF)
        {
          case 1:
            /* Merge: '<S56>/Merge1' incorporates:
             *  Constant: '<S195>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_B[(i)] = KaHADR_K_M2_Plant_B_ContactAll[(i)];
            }
            break;

          case 2:
            /* Merge: '<S56>/Merge1' incorporates:
             *  Constant: '<S193>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_B[(i)] = KaHADR_K_M2_Plant_B_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S56>/Merge1' incorporates:
             *  Constant: '<S194>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_B[(i)] = KaHADR_K_M2_Plant_B_BLTb[(i)];
            }
            break;

          default:
            /* Merge: '<S56>/Merge1' incorporates:
             *  Constant: '<S192>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_B[(i)] = KaHADR_K_M2_Plant_B_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S91>/Multiport Switch1' */

        /* MultiPortSwitch: '<S91>/Multiport Switch2' */
        switch (VeHADR_Cnt_MatrixCase_KF)
        {
          case 1:
            /* Merge: '<S56>/Merge2' incorporates:
             *  Constant: '<S199>/Calib'
             *  MultiPortSwitch: '<S91>/Multiport Switch2'
             */
            memcpy((&(VaHADR_K_Plant_C[0])), ((const float32 *)
                    &(KaHADR_K_M2_Plant_C_ContactAll[0])), 25U * (sizeof(float32)));
            break;

          case 2:
            /* Merge: '<S56>/Merge2' incorporates:
             *  Constant: '<S197>/Calib'
             *  MultiPortSwitch: '<S91>/Multiport Switch2'
             */
            memcpy((&(VaHADR_K_Plant_C[0])), ((const float32 *)
                    &(KaHADR_K_M2_Plant_C_BLTa[0])), 25U * (sizeof(float32)));
            break;

          case 3:
            /* Merge: '<S56>/Merge2' incorporates:
             *  Constant: '<S198>/Calib'
             *  MultiPortSwitch: '<S91>/Multiport Switch2'
             */
            memcpy((&(VaHADR_K_Plant_C[0])), ((const float32 *)
                    &(KaHADR_K_M2_Plant_C_BLTb[0])), 25U * (sizeof(float32)));
            break;

          default:
            /* Merge: '<S56>/Merge2' incorporates:
             *  Constant: '<S196>/Calib'
             *  MultiPortSwitch: '<S91>/Multiport Switch2'
             */
            memcpy((&(VaHADR_K_Plant_C[0])), ((const float32 *)
                    &(KaHADR_K_M2_Plant_C_BLAll[0])), 25U * (sizeof(float32)));
            break;
        }

        /* End of MultiPortSwitch: '<S91>/Multiport Switch2' */

        /* MultiPortSwitch: '<S91>/Multiport Switch3' */
        switch (VeHADR_Cnt_MatrixCase_KF)
        {
          case 1:
            /* Merge: '<S56>/Merge3' incorporates:
             *  Constant: '<S203>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_D[(i)] = KaHADR_K_M2_Plant_D_ContactAll[(i)];
            }
            break;

          case 2:
            /* Merge: '<S56>/Merge3' incorporates:
             *  Constant: '<S201>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_D[(i)] = KaHADR_K_M2_Plant_D_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S56>/Merge3' incorporates:
             *  Constant: '<S202>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_D[(i)] = KaHADR_K_M2_Plant_D_BLTb[(i)];
            }
            break;

          default:
            /* Merge: '<S56>/Merge3' incorporates:
             *  Constant: '<S200>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_D[(i)] = KaHADR_K_M2_Plant_D_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S91>/Multiport Switch3' */

        /* MultiPortSwitch: '<S91>/Multiport Switch4' */
        switch (VeHADR_Cnt_MatrixCase_KF)
        {
          case 1:
            /* Merge: '<S56>/Merge4' incorporates:
             *  Constant: '<S187>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_KF_M[(i)] = KaHADR_K_M2_KF_M_ContactAll[(i)];
            }
            break;

          case 2:
            /* Merge: '<S56>/Merge4' incorporates:
             *  Constant: '<S185>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_KF_M[(i)] = KaHADR_K_M2_KF_M_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S56>/Merge4' incorporates:
             *  Constant: '<S186>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_KF_M[(i)] = KaHADR_K_M2_KF_M_BLTb[(i)];
            }
            break;

          default:
            /* Merge: '<S56>/Merge4' incorporates:
             *  Constant: '<S184>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_KF_M[(i)] = KaHADR_K_M2_KF_M_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S91>/Multiport Switch4' */

        /* Merge: '<S56>/Merge8' incorporates:
         *  Constant: '<S91>/Constant'
         *  SignalConversion generated from: '<S91>/VeHADR_b_M2_DsblMtrA_Dnmc'
         */
        VeHADR_b_DsblMtrA_Dnmc_KF = false;

        /* End of Outputs for SubSystem: '<S56>/M2' */
    }
    else if (((uint32)HADR_ac_B.TmpSignalConversionAtHSER_e_HADRLeadStat) ==
             CeHSER_e_M3_State)
    {
        /* Outputs for IfAction SubSystem: '<S56>/M3' incorporates:
         *  ActionPort: '<S92>/Action Port'
         */
        /* MultiPortSwitch: '<S92>/Multiport Switch' */
        switch (VeHADR_Cnt_MatrixCase_KF)
        {
          case 1:
            /* Merge: '<S56>/Merge' incorporates:
             *  Constant: '<S207>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_A[0])), ((const float32 *)
                    &(KaHADR_K_M3_Plant_A_BLTa[0])), 25U * (sizeof(float32)));
            break;

          case 2:
            /* Merge: '<S56>/Merge' incorporates:
             *  Constant: '<S207>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_A[0])), ((const float32 *)
                    &(KaHADR_K_M3_Plant_A_BLTa[0])), 25U * (sizeof(float32)));
            break;

          case 3:
            /* Merge: '<S56>/Merge' incorporates:
             *  Constant: '<S206>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_A[0])), ((const float32 *)
                    &(KaHADR_K_M3_Plant_A_BLAll[0])), 25U * (sizeof(float32)));
            break;

          default:
            /* Merge: '<S56>/Merge' incorporates:
             *  Constant: '<S206>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_A[0])), ((const float32 *)
                    &(KaHADR_K_M3_Plant_A_BLAll[0])), 25U * (sizeof(float32)));
            break;
        }

        /* End of MultiPortSwitch: '<S92>/Multiport Switch' */

        /* MultiPortSwitch: '<S92>/Multiport Switch1' */
        switch (VeHADR_Cnt_MatrixCase_KF)
        {
          case 1:
            /* Merge: '<S56>/Merge1' incorporates:
             *  Constant: '<S209>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_B[(i)] = KaHADR_K_M3_Plant_B_BLTa[(i)];
            }
            break;

          case 2:
            /* Merge: '<S56>/Merge1' incorporates:
             *  Constant: '<S209>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_B[(i)] = KaHADR_K_M3_Plant_B_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S56>/Merge1' incorporates:
             *  Constant: '<S208>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_B[(i)] = KaHADR_K_M3_Plant_B_BLAll[(i)];
            }
            break;

          default:
            /* Merge: '<S56>/Merge1' incorporates:
             *  Constant: '<S208>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_B[(i)] = KaHADR_K_M3_Plant_B_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S92>/Multiport Switch1' */

        /* MultiPortSwitch: '<S92>/Multiport Switch2' */
        switch (VeHADR_Cnt_MatrixCase_KF)
        {
          case 1:
            /* Merge: '<S56>/Merge2' incorporates:
             *  Constant: '<S211>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_C[0])), ((const float32 *)
                    &(KaHADR_K_M3_Plant_C_BLTa[0])), 25U * (sizeof(float32)));
            break;

          case 2:
            /* Merge: '<S56>/Merge2' incorporates:
             *  Constant: '<S211>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_C[0])), ((const float32 *)
                    &(KaHADR_K_M3_Plant_C_BLTa[0])), 25U * (sizeof(float32)));
            break;

          case 3:
            /* Merge: '<S56>/Merge2' incorporates:
             *  Constant: '<S210>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_C[0])), ((const float32 *)
                    &(KaHADR_K_M3_Plant_C_BLAll[0])), 25U * (sizeof(float32)));
            break;

          default:
            /* Merge: '<S56>/Merge2' incorporates:
             *  Constant: '<S210>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_C[0])), ((const float32 *)
                    &(KaHADR_K_M3_Plant_C_BLAll[0])), 25U * (sizeof(float32)));
            break;
        }

        /* End of MultiPortSwitch: '<S92>/Multiport Switch2' */

        /* MultiPortSwitch: '<S92>/Multiport Switch3' */
        switch (VeHADR_Cnt_MatrixCase_KF)
        {
          case 1:
            /* Merge: '<S56>/Merge3' incorporates:
             *  Constant: '<S213>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_D[(i)] = KaHADR_K_M3_Plant_D_BLTa[(i)];
            }
            break;

          case 2:
            /* Merge: '<S56>/Merge3' incorporates:
             *  Constant: '<S213>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_D[(i)] = KaHADR_K_M3_Plant_D_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S56>/Merge3' incorporates:
             *  Constant: '<S212>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_D[(i)] = KaHADR_K_M3_Plant_D_BLAll[(i)];
            }
            break;

          default:
            /* Merge: '<S56>/Merge3' incorporates:
             *  Constant: '<S212>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_D[(i)] = KaHADR_K_M3_Plant_D_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S92>/Multiport Switch3' */

        /* MultiPortSwitch: '<S92>/Multiport Switch4' */
        switch (VeHADR_Cnt_MatrixCase_KF)
        {
          case 1:
            /* Merge: '<S56>/Merge4' incorporates:
             *  Constant: '<S205>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_KF_M[(i)] = KaHADR_K_M3_KF_M_BLTa[(i)];
            }
            break;

          case 2:
            /* Merge: '<S56>/Merge4' incorporates:
             *  Constant: '<S205>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_KF_M[(i)] = KaHADR_K_M3_KF_M_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S56>/Merge4' incorporates:
             *  Constant: '<S204>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_KF_M[(i)] = KaHADR_K_M3_KF_M_BLAll[(i)];
            }
            break;

          default:
            /* Merge: '<S56>/Merge4' incorporates:
             *  Constant: '<S204>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_KF_M[(i)] = KaHADR_K_M3_KF_M_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S92>/Multiport Switch4' */

        /* Merge: '<S56>/Merge8' incorporates:
         *  Constant: '<S92>/Constant'
         *  SignalConversion generated from: '<S92>/VeHADR_b_M3_DsblMtrA_Dnmc'
         */
        VeHADR_b_DsblMtrA_Dnmc_KF = true;

        /* End of Outputs for SubSystem: '<S56>/M3' */
    }
    else if (((uint32)HADR_ac_B.TmpSignalConversionAtHSER_e_HADRLeadStat) ==
             CeHSER_e_G1_State)
    {
        /* Outputs for IfAction SubSystem: '<S56>/G1' incorporates:
         *  ActionPort: '<S86>/Action Port'
         */
        /* MultiPortSwitch: '<S86>/Multiport Switch' */
        switch (VeHADR_Cnt_MatrixCase_KF)
        {
          case 1:
            /* Merge: '<S56>/Merge' incorporates:
             *  Constant: '<S101>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_A[0])), ((const float32 *)
                    &(KaHADR_K_G1_Plant_A_ContactAll[0])), 25U * (sizeof(float32)));
            break;

          case 2:
            /* Merge: '<S56>/Merge' incorporates:
             *  Constant: '<S99>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_A[0])), ((const float32 *)
                    &(KaHADR_K_G1_Plant_A_BLTa[0])), 25U * (sizeof(float32)));
            break;

          case 3:
            /* Merge: '<S56>/Merge' incorporates:
             *  Constant: '<S100>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_A[0])), ((const float32 *)
                    &(KaHADR_K_G1_Plant_A_BLTb[0])), 25U * (sizeof(float32)));
            break;

          default:
            /* Merge: '<S56>/Merge' incorporates:
             *  Constant: '<S98>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_A[0])), ((const float32 *)
                    &(KaHADR_K_G1_Plant_A_BLAll[0])), 25U * (sizeof(float32)));
            break;
        }

        /* End of MultiPortSwitch: '<S86>/Multiport Switch' */

        /* MultiPortSwitch: '<S86>/Multiport Switch1' */
        switch (VeHADR_Cnt_MatrixCase_KF)
        {
          case 1:
            /* Merge: '<S56>/Merge1' incorporates:
             *  Constant: '<S105>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_B[(i)] = KaHADR_K_G1_Plant_B_ContactAll[(i)];
            }
            break;

          case 2:
            /* Merge: '<S56>/Merge1' incorporates:
             *  Constant: '<S103>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_B[(i)] = KaHADR_K_G1_Plant_B_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S56>/Merge1' incorporates:
             *  Constant: '<S104>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_B[(i)] = KaHADR_K_G1_Plant_B_BLTb[(i)];
            }
            break;

          default:
            /* Merge: '<S56>/Merge1' incorporates:
             *  Constant: '<S102>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_B[(i)] = KaHADR_K_G1_Plant_B_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S86>/Multiport Switch1' */

        /* MultiPortSwitch: '<S86>/Multiport Switch2' */
        switch (VeHADR_Cnt_MatrixCase_KF)
        {
          case 1:
            /* Merge: '<S56>/Merge2' incorporates:
             *  Constant: '<S109>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_C[0])), ((const float32 *)
                    &(KaHADR_K_G1_Plant_C_ContactAll[0])), 25U * (sizeof(float32)));
            break;

          case 2:
            /* Merge: '<S56>/Merge2' incorporates:
             *  Constant: '<S107>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_C[0])), ((const float32 *)
                    &(KaHADR_K_G1_Plant_C_BLTa[0])), 25U * (sizeof(float32)));
            break;

          case 3:
            /* Merge: '<S56>/Merge2' incorporates:
             *  Constant: '<S108>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_C[0])), ((const float32 *)
                    &(KaHADR_K_G1_Plant_C_BLTb[0])), 25U * (sizeof(float32)));
            break;

          default:
            /* Merge: '<S56>/Merge2' incorporates:
             *  Constant: '<S106>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_C[0])), ((const float32 *)
                    &(KaHADR_K_G1_Plant_C_BLAll[0])), 25U * (sizeof(float32)));
            break;
        }

        /* End of MultiPortSwitch: '<S86>/Multiport Switch2' */

        /* MultiPortSwitch: '<S86>/Multiport Switch3' */
        switch (VeHADR_Cnt_MatrixCase_KF)
        {
          case 1:
            /* Merge: '<S56>/Merge3' incorporates:
             *  Constant: '<S113>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_D[(i)] = KaHADR_K_G1_Plant_D_ContactAll[(i)];
            }
            break;

          case 2:
            /* Merge: '<S56>/Merge3' incorporates:
             *  Constant: '<S111>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_D[(i)] = KaHADR_K_G1_Plant_D_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S56>/Merge3' incorporates:
             *  Constant: '<S112>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_D[(i)] = KaHADR_K_G1_Plant_D_BLTb[(i)];
            }
            break;

          default:
            /* Merge: '<S56>/Merge3' incorporates:
             *  Constant: '<S110>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_D[(i)] = KaHADR_K_G1_Plant_D_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S86>/Multiport Switch3' */

        /* MultiPortSwitch: '<S86>/Multiport Switch4' */
        switch (VeHADR_Cnt_MatrixCase_KF)
        {
          case 1:
            /* Merge: '<S56>/Merge4' incorporates:
             *  Constant: '<S97>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_KF_M[(i)] = KaHADR_K_G1_KF_M_ContactAll[(i)];
            }
            break;

          case 2:
            /* Merge: '<S56>/Merge4' incorporates:
             *  Constant: '<S95>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_KF_M[(i)] = KaHADR_K_G1_KF_M_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S56>/Merge4' incorporates:
             *  Constant: '<S96>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_KF_M[(i)] = KaHADR_K_G1_KF_M_BLTb[(i)];
            }
            break;

          default:
            /* Merge: '<S56>/Merge4' incorporates:
             *  Constant: '<S94>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_KF_M[(i)] = KaHADR_K_G1_KF_M_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S86>/Multiport Switch4' */

        /* Merge: '<S56>/Merge8' incorporates:
         *  Constant: '<S86>/Constant'
         *  SignalConversion generated from: '<S86>/VeHADR_b_G1_DsblMtrA_Dnmc'
         */
        VeHADR_b_DsblMtrA_Dnmc_KF = false;

        /* End of Outputs for SubSystem: '<S56>/G1' */
    }
    else if (((uint32)HADR_ac_B.TmpSignalConversionAtHSER_e_HADRLeadStat) ==
             CeHSER_e_G2_State)
    {
        /* Outputs for IfAction SubSystem: '<S56>/G2' incorporates:
         *  ActionPort: '<S87>/Action Port'
         */
        /* MultiPortSwitch: '<S87>/Multiport Switch' */
        switch (VeHADR_Cnt_MatrixCase_KF)
        {
          case 1:
            /* Merge: '<S56>/Merge' incorporates:
             *  Constant: '<S121>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_A[0])), ((const float32 *)
                    &(KaHADR_K_G2_Plant_A_ContactAll[0])), 25U * (sizeof(float32)));
            break;

          case 2:
            /* Merge: '<S56>/Merge' incorporates:
             *  Constant: '<S119>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_A[0])), ((const float32 *)
                    &(KaHADR_K_G2_Plant_A_BLTa[0])), 25U * (sizeof(float32)));
            break;

          case 3:
            /* Merge: '<S56>/Merge' incorporates:
             *  Constant: '<S120>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_A[0])), ((const float32 *)
                    &(KaHADR_K_G2_Plant_A_BLTb[0])), 25U * (sizeof(float32)));
            break;

          default:
            /* Merge: '<S56>/Merge' incorporates:
             *  Constant: '<S118>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_A[0])), ((const float32 *)
                    &(KaHADR_K_G2_Plant_A_BLAll[0])), 25U * (sizeof(float32)));
            break;
        }

        /* End of MultiPortSwitch: '<S87>/Multiport Switch' */

        /* MultiPortSwitch: '<S87>/Multiport Switch1' */
        switch (VeHADR_Cnt_MatrixCase_KF)
        {
          case 1:
            /* Merge: '<S56>/Merge1' incorporates:
             *  Constant: '<S125>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_B[(i)] = KaHADR_K_G2_Plant_B_ContactAll[(i)];
            }
            break;

          case 2:
            /* Merge: '<S56>/Merge1' incorporates:
             *  Constant: '<S123>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_B[(i)] = KaHADR_K_G2_Plant_B_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S56>/Merge1' incorporates:
             *  Constant: '<S124>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_B[(i)] = KaHADR_K_G2_Plant_B_BLTb[(i)];
            }
            break;

          default:
            /* Merge: '<S56>/Merge1' incorporates:
             *  Constant: '<S122>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_B[(i)] = KaHADR_K_G2_Plant_B_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S87>/Multiport Switch1' */

        /* MultiPortSwitch: '<S87>/Multiport Switch2' */
        switch (VeHADR_Cnt_MatrixCase_KF)
        {
          case 1:
            /* Merge: '<S56>/Merge2' incorporates:
             *  Constant: '<S129>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_C[0])), ((const float32 *)
                    &(KaHADR_K_G2_Plant_C_ContactAll[0])), 25U * (sizeof(float32)));
            break;

          case 2:
            /* Merge: '<S56>/Merge2' incorporates:
             *  Constant: '<S127>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_C[0])), ((const float32 *)
                    &(KaHADR_K_G2_Plant_C_BLTa[0])), 25U * (sizeof(float32)));
            break;

          case 3:
            /* Merge: '<S56>/Merge2' incorporates:
             *  Constant: '<S128>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_C[0])), ((const float32 *)
                    &(KaHADR_K_G2_Plant_C_BLTb[0])), 25U * (sizeof(float32)));
            break;

          default:
            /* Merge: '<S56>/Merge2' incorporates:
             *  Constant: '<S126>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_C[0])), ((const float32 *)
                    &(KaHADR_K_G2_Plant_C_BLAll[0])), 25U * (sizeof(float32)));
            break;
        }

        /* End of MultiPortSwitch: '<S87>/Multiport Switch2' */

        /* MultiPortSwitch: '<S87>/Multiport Switch3' */
        switch (VeHADR_Cnt_MatrixCase_KF)
        {
          case 1:
            /* Merge: '<S56>/Merge3' incorporates:
             *  Constant: '<S133>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_D[(i)] = KaHADR_K_G2_Plant_D_ContactAll[(i)];
            }
            break;

          case 2:
            /* Merge: '<S56>/Merge3' incorporates:
             *  Constant: '<S131>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_D[(i)] = KaHADR_K_G2_Plant_D_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S56>/Merge3' incorporates:
             *  Constant: '<S132>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_D[(i)] = KaHADR_K_G2_Plant_D_BLTb[(i)];
            }
            break;

          default:
            /* Merge: '<S56>/Merge3' incorporates:
             *  Constant: '<S130>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_D[(i)] = KaHADR_K_G2_Plant_D_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S87>/Multiport Switch3' */

        /* MultiPortSwitch: '<S87>/Multiport Switch4' */
        switch (VeHADR_Cnt_MatrixCase_KF)
        {
          case 1:
            /* Merge: '<S56>/Merge4' incorporates:
             *  Constant: '<S117>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_KF_M[(i)] = KaHADR_K_G2_KF_M_ContactAll[(i)];
            }
            break;

          case 2:
            /* Merge: '<S56>/Merge4' incorporates:
             *  Constant: '<S115>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_KF_M[(i)] = KaHADR_K_G2_KF_M_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S56>/Merge4' incorporates:
             *  Constant: '<S116>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_KF_M[(i)] = KaHADR_K_G2_KF_M_BLTb[(i)];
            }
            break;

          default:
            /* Merge: '<S56>/Merge4' incorporates:
             *  Constant: '<S114>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_KF_M[(i)] = KaHADR_K_G2_KF_M_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S87>/Multiport Switch4' */

        /* Merge: '<S56>/Merge8' incorporates:
         *  Constant: '<S87>/Constant'
         *  SignalConversion generated from: '<S87>/VeHADR_b_G2_DsblMtrA_Dnmc'
         */
        VeHADR_b_DsblMtrA_Dnmc_KF = false;

        /* End of Outputs for SubSystem: '<S56>/G2' */
    }
    else if (((uint32)HADR_ac_B.TmpSignalConversionAtHSER_e_HADRLeadStat) ==
             CeHSER_e_G3_State)
    {
        /* Outputs for IfAction SubSystem: '<S56>/G3' incorporates:
         *  ActionPort: '<S88>/Action Port'
         */
        /* MultiPortSwitch: '<S88>/Multiport Switch' */
        switch (VeHADR_Cnt_MatrixCase_KF)
        {
          case 1:
            /* Merge: '<S56>/Merge' incorporates:
             *  Constant: '<S141>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_A[0])), ((const float32 *)
                    &(KaHADR_K_G3_Plant_A_ContactAll[0])), 25U * (sizeof(float32)));
            break;

          case 2:
            /* Merge: '<S56>/Merge' incorporates:
             *  Constant: '<S139>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_A[0])), ((const float32 *)
                    &(KaHADR_K_G3_Plant_A_BLTa[0])), 25U * (sizeof(float32)));
            break;

          case 3:
            /* Merge: '<S56>/Merge' incorporates:
             *  Constant: '<S140>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_A[0])), ((const float32 *)
                    &(KaHADR_K_G3_Plant_A_BLTb[0])), 25U * (sizeof(float32)));
            break;

          default:
            /* Merge: '<S56>/Merge' incorporates:
             *  Constant: '<S138>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_A[0])), ((const float32 *)
                    &(KaHADR_K_G3_Plant_A_BLAll[0])), 25U * (sizeof(float32)));
            break;
        }

        /* End of MultiPortSwitch: '<S88>/Multiport Switch' */

        /* MultiPortSwitch: '<S88>/Multiport Switch1' */
        switch (VeHADR_Cnt_MatrixCase_KF)
        {
          case 1:
            /* Merge: '<S56>/Merge1' incorporates:
             *  Constant: '<S145>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_B[(i)] = KaHADR_K_G3_Plant_B_ContactAll[(i)];
            }
            break;

          case 2:
            /* Merge: '<S56>/Merge1' incorporates:
             *  Constant: '<S143>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_B[(i)] = KaHADR_K_G3_Plant_B_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S56>/Merge1' incorporates:
             *  Constant: '<S144>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_B[(i)] = KaHADR_K_G3_Plant_B_BLTb[(i)];
            }
            break;

          default:
            /* Merge: '<S56>/Merge1' incorporates:
             *  Constant: '<S142>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_B[(i)] = KaHADR_K_G3_Plant_B_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S88>/Multiport Switch1' */

        /* MultiPortSwitch: '<S88>/Multiport Switch2' */
        switch (VeHADR_Cnt_MatrixCase_KF)
        {
          case 1:
            /* Merge: '<S56>/Merge2' incorporates:
             *  Constant: '<S149>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_C[0])), ((const float32 *)
                    &(KaHADR_K_G3_Plant_C_ContactAll[0])), 25U * (sizeof(float32)));
            break;

          case 2:
            /* Merge: '<S56>/Merge2' incorporates:
             *  Constant: '<S147>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_C[0])), ((const float32 *)
                    &(KaHADR_K_G3_Plant_C_BLTa[0])), 25U * (sizeof(float32)));
            break;

          case 3:
            /* Merge: '<S56>/Merge2' incorporates:
             *  Constant: '<S148>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_C[0])), ((const float32 *)
                    &(KaHADR_K_G3_Plant_C_BLTb[0])), 25U * (sizeof(float32)));
            break;

          default:
            /* Merge: '<S56>/Merge2' incorporates:
             *  Constant: '<S146>/Calib'
             */
            memcpy((&(VaHADR_K_Plant_C[0])), ((const float32 *)
                    &(KaHADR_K_G3_Plant_C_BLAll[0])), 25U * (sizeof(float32)));
            break;
        }

        /* End of MultiPortSwitch: '<S88>/Multiport Switch2' */

        /* MultiPortSwitch: '<S88>/Multiport Switch3' */
        switch (VeHADR_Cnt_MatrixCase_KF)
        {
          case 1:
            /* Merge: '<S56>/Merge3' incorporates:
             *  Constant: '<S153>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_D[(i)] = KaHADR_K_G3_Plant_D_ContactAll[(i)];
            }
            break;

          case 2:
            /* Merge: '<S56>/Merge3' incorporates:
             *  Constant: '<S151>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_D[(i)] = KaHADR_K_G3_Plant_D_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S56>/Merge3' incorporates:
             *  Constant: '<S152>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_D[(i)] = KaHADR_K_G3_Plant_D_BLTb[(i)];
            }
            break;

          default:
            /* Merge: '<S56>/Merge3' incorporates:
             *  Constant: '<S150>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_Plant_D[(i)] = KaHADR_K_G3_Plant_D_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S88>/Multiport Switch3' */

        /* MultiPortSwitch: '<S88>/Multiport Switch4' */
        switch (VeHADR_Cnt_MatrixCase_KF)
        {
          case 1:
            /* Merge: '<S56>/Merge4' incorporates:
             *  Constant: '<S137>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_KF_M[(i)] = KaHADR_K_G3_KF_M_ContactAll[(i)];
            }
            break;

          case 2:
            /* Merge: '<S56>/Merge4' incorporates:
             *  Constant: '<S135>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_KF_M[(i)] = KaHADR_K_G3_KF_M_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S56>/Merge4' incorporates:
             *  Constant: '<S136>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_KF_M[(i)] = KaHADR_K_G3_KF_M_BLTb[(i)];
            }
            break;

          default:
            /* Merge: '<S56>/Merge4' incorporates:
             *  Constant: '<S134>/Calib'
             */
            for (i = 0; i < 15; i++)
            {
                VaHADR_K_KF_M[(i)] = KaHADR_K_G3_KF_M_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S88>/Multiport Switch4' */

        /* Merge: '<S56>/Merge8' incorporates:
         *  Constant: '<S88>/Constant'
         *  SignalConversion generated from: '<S88>/VeHADR_b_G3_DsblMtrA_Dnmc'
         */
        VeHADR_b_DsblMtrA_Dnmc_KF = false;

        /* End of Outputs for SubSystem: '<S56>/G3' */
    }
    else
    {
        if (((uint32)HADR_ac_B.TmpSignalConversionAtHSER_e_HADRLeadStat) ==
                CeHSER_e_G4_State)
        {
            /* Outputs for IfAction SubSystem: '<S56>/G4' incorporates:
             *  ActionPort: '<S89>/Action Port'
             */
            /* MultiPortSwitch: '<S89>/Multiport Switch' */
            switch (VeHADR_Cnt_MatrixCase_KF)
            {
              case 1:
                /* Merge: '<S56>/Merge' incorporates:
                 *  Constant: '<S161>/Calib'
                 */
                memcpy((&(VaHADR_K_Plant_A[0])), ((const float32 *)
                        &(KaHADR_K_G4_Plant_A_ContactAll[0])), 25U * (sizeof
                        (float32)));
                break;

              case 2:
                /* Merge: '<S56>/Merge' incorporates:
                 *  Constant: '<S159>/Calib'
                 */
                memcpy((&(VaHADR_K_Plant_A[0])), ((const float32 *)
                        &(KaHADR_K_G4_Plant_A_BLTa[0])), 25U * (sizeof(float32)));
                break;

              case 3:
                /* Merge: '<S56>/Merge' incorporates:
                 *  Constant: '<S160>/Calib'
                 */
                memcpy((&(VaHADR_K_Plant_A[0])), ((const float32 *)
                        &(KaHADR_K_G4_Plant_A_BLTb[0])), 25U * (sizeof(float32)));
                break;

              default:
                /* Merge: '<S56>/Merge' incorporates:
                 *  Constant: '<S158>/Calib'
                 */
                memcpy((&(VaHADR_K_Plant_A[0])), ((const float32 *)
                        &(KaHADR_K_G4_Plant_A_BLAll[0])), 25U * (sizeof(float32)));
                break;
            }

            /* End of MultiPortSwitch: '<S89>/Multiport Switch' */

            /* MultiPortSwitch: '<S89>/Multiport Switch1' */
            switch (VeHADR_Cnt_MatrixCase_KF)
            {
              case 1:
                /* Merge: '<S56>/Merge1' incorporates:
                 *  Constant: '<S165>/Calib'
                 */
                for (i = 0; i < 15; i++)
                {
                    VaHADR_K_Plant_B[(i)] = KaHADR_K_G4_Plant_B_ContactAll[(i)];
                }
                break;

              case 2:
                /* Merge: '<S56>/Merge1' incorporates:
                 *  Constant: '<S163>/Calib'
                 */
                for (i = 0; i < 15; i++)
                {
                    VaHADR_K_Plant_B[(i)] = KaHADR_K_G4_Plant_B_BLTa[(i)];
                }
                break;

              case 3:
                /* Merge: '<S56>/Merge1' incorporates:
                 *  Constant: '<S164>/Calib'
                 */
                for (i = 0; i < 15; i++)
                {
                    VaHADR_K_Plant_B[(i)] = KaHADR_K_G4_Plant_B_BLTb[(i)];
                }
                break;

              default:
                /* Merge: '<S56>/Merge1' incorporates:
                 *  Constant: '<S162>/Calib'
                 */
                for (i = 0; i < 15; i++)
                {
                    VaHADR_K_Plant_B[(i)] = KaHADR_K_G4_Plant_B_BLAll[(i)];
                }
                break;
            }

            /* End of MultiPortSwitch: '<S89>/Multiport Switch1' */

            /* MultiPortSwitch: '<S89>/Multiport Switch2' */
            switch (VeHADR_Cnt_MatrixCase_KF)
            {
              case 1:
                /* Merge: '<S56>/Merge2' incorporates:
                 *  Constant: '<S169>/Calib'
                 */
                memcpy((&(VaHADR_K_Plant_C[0])), ((const float32 *)
                        &(KaHADR_K_G4_Plant_C_ContactAll[0])), 25U * (sizeof
                        (float32)));
                break;

              case 2:
                /* Merge: '<S56>/Merge2' incorporates:
                 *  Constant: '<S167>/Calib'
                 */
                memcpy((&(VaHADR_K_Plant_C[0])), ((const float32 *)
                        &(KaHADR_K_G4_Plant_C_BLTa[0])), 25U * (sizeof(float32)));
                break;

              case 3:
                /* Merge: '<S56>/Merge2' incorporates:
                 *  Constant: '<S168>/Calib'
                 */
                memcpy((&(VaHADR_K_Plant_C[0])), ((const float32 *)
                        &(KaHADR_K_G4_Plant_C_BLTb[0])), 25U * (sizeof(float32)));
                break;

              default:
                /* Merge: '<S56>/Merge2' incorporates:
                 *  Constant: '<S166>/Calib'
                 */
                memcpy((&(VaHADR_K_Plant_C[0])), ((const float32 *)
                        &(KaHADR_K_G4_Plant_C_BLAll[0])), 25U * (sizeof(float32)));
                break;
            }

            /* End of MultiPortSwitch: '<S89>/Multiport Switch2' */

            /* MultiPortSwitch: '<S89>/Multiport Switch3' */
            switch (VeHADR_Cnt_MatrixCase_KF)
            {
              case 1:
                /* Merge: '<S56>/Merge3' incorporates:
                 *  Constant: '<S173>/Calib'
                 */
                for (i = 0; i < 15; i++)
                {
                    VaHADR_K_Plant_D[(i)] = KaHADR_K_G4_Plant_D_ContactAll[(i)];
                }
                break;

              case 2:
                /* Merge: '<S56>/Merge3' incorporates:
                 *  Constant: '<S171>/Calib'
                 */
                for (i = 0; i < 15; i++)
                {
                    VaHADR_K_Plant_D[(i)] = KaHADR_K_G4_Plant_D_BLTa[(i)];
                }
                break;

              case 3:
                /* Merge: '<S56>/Merge3' incorporates:
                 *  Constant: '<S172>/Calib'
                 */
                for (i = 0; i < 15; i++)
                {
                    VaHADR_K_Plant_D[(i)] = KaHADR_K_G4_Plant_D_BLTb[(i)];
                }
                break;

              default:
                /* Merge: '<S56>/Merge3' incorporates:
                 *  Constant: '<S170>/Calib'
                 */
                for (i = 0; i < 15; i++)
                {
                    VaHADR_K_Plant_D[(i)] = KaHADR_K_G4_Plant_D_BLAll[(i)];
                }
                break;
            }

            /* End of MultiPortSwitch: '<S89>/Multiport Switch3' */

            /* MultiPortSwitch: '<S89>/Multiport Switch4' */
            switch (VeHADR_Cnt_MatrixCase_KF)
            {
              case 1:
                /* Merge: '<S56>/Merge4' incorporates:
                 *  Constant: '<S157>/Calib'
                 */
                for (i = 0; i < 15; i++)
                {
                    VaHADR_K_KF_M[(i)] = KaHADR_K_G4_KF_M_ContactAll[(i)];
                }
                break;

              case 2:
                /* Merge: '<S56>/Merge4' incorporates:
                 *  Constant: '<S155>/Calib'
                 */
                for (i = 0; i < 15; i++)
                {
                    VaHADR_K_KF_M[(i)] = KaHADR_K_G4_KF_M_BLTa[(i)];
                }
                break;

              case 3:
                /* Merge: '<S56>/Merge4' incorporates:
                 *  Constant: '<S156>/Calib'
                 */
                for (i = 0; i < 15; i++)
                {
                    VaHADR_K_KF_M[(i)] = KaHADR_K_G4_KF_M_BLTb[(i)];
                }
                break;

              default:
                /* Merge: '<S56>/Merge4' incorporates:
                 *  Constant: '<S154>/Calib'
                 */
                for (i = 0; i < 15; i++)
                {
                    VaHADR_K_KF_M[(i)] = KaHADR_K_G4_KF_M_BLAll[(i)];
                }
                break;
            }

            /* End of MultiPortSwitch: '<S89>/Multiport Switch4' */

            /* Merge: '<S56>/Merge8' incorporates:
             *  Constant: '<S89>/Constant'
             *  SignalConversion generated from: '<S89>/VeHADR_b_G4_DsblMtrA_Dnmc'
             */
            VeHADR_b_DsblMtrA_Dnmc_KF = false;

            /* End of Outputs for SubSystem: '<S56>/G4' */
        }
    }

    /* End of If: '<S56>/If' */
}

#endif

/* Output and update for function-call system: '<S17>/Kalman_Plant' */
#if Rte_SysCon_Variant_HADR_LashCtrl

static FUNC(void, HADR_CODE_LOCAL) HADR_ac_Kalman_Plant(void)
{
    sint32 i;
    sint32 i_0;
    float32 tmp[5];
    float32 tmp_0[5];
    float32 rtb_Add3[3];
    float32 rtb_TmpSignalConversionAtProductInport2[3];
    float32 rtb_Abs1;
    float32 rtb_Abs2;
    float32 rtb_Sum;
    uint8 rtb_DataTypeConversion;
    boolean rtb_Comparison1_h;
    boolean rtb_RelationalOperator1;

    /* RelationalOperator: '<S45>/Relational Operator1' incorporates:
     *  Constant: '<S45>/Constant1'
     */
    rtb_RelationalOperator1 = (HADR_ac_B.i == 0);

    /* Switch: '<S45>/Switch' incorporates:
     *  Constant: '<S45>/BL_ALL'
     *  Logic: '<S45>/Logical Operator2'
     *  Switch: '<S45>/Switch1'
     *  Switch: '<S45>/Switch2'
     */
    if ((HADR_ac_B.UseBL_TbCurr_Out) && (HADR_ac_B.UseBL_TaCurr_Out))
    {
        VeHADR_Cnt_MatrixCase_KF = 4U;
    }
    else if (HADR_ac_B.UseBL_TbCurr_Out)
    {
        /* Switch: '<S45>/Switch1' incorporates:
         *  Constant: '<S45>/MtrB_in_BL'
         */
        VeHADR_Cnt_MatrixCase_KF = 3U;
    }
    else if (HADR_ac_B.UseBL_TaCurr_Out)
    {
        /* Switch: '<S45>/Switch2' incorporates:
         *  Constant: '<S45>/MtrA_in_BL'
         *  Switch: '<S45>/Switch1'
         */
        VeHADR_Cnt_MatrixCase_KF = 2U;
    }
    else
    {
        /* Switch: '<S45>/Switch1' incorporates:
         *  Constant: '<S45>/All_in_Contact'
         *  Switch: '<S45>/Switch2'
         */
        VeHADR_Cnt_MatrixCase_KF = 1U;
    }

    /* End of Switch: '<S45>/Switch' */

    /* DataTypeConversion: '<S45>/Data Type Conversion' incorporates:
     *  SignalConversion generated from: '<S1>/HSER_e_HADRLeadState'
     */
    rtb_DataTypeConversion = (uint8)
        HADR_ac_B.TmpSignalConversionAtHSER_e_HADRLeadStat;

    /* Outputs for Enabled SubSystem: '<S45>/FnCallGRChng_KF' incorporates:
     *  EnablePort: '<S55>/Enable'
     */
    /* Logic: '<S45>/Logical Operator' incorporates:
     *  RelationalOperator: '<S45>/Relational Operator'
     *  RelationalOperator: '<S45>/Relational Operator2'
     *  UnitDelay: '<S45>/Unit Delay2'
     */
    if (((rtb_RelationalOperator1 || (HADR_ac_B.AND_k)) ||
            (HADR_ac_B.Matrix_Case_Out != VeHADR_Cnt_MatrixCase_KF)) ||
            (HADR_ac_DW.UnitDelay2_DSTATE_c != rtb_DataTypeConversion))
    {
        /* S-Function (fcgen): '<S55>/Function-Call Generator' incorporates:
         *  SubSystem: '<S45>/HADR_Prmtr_Selection_KF'
         */
        GRsChangeHADR_KF();

        /* End of Outputs for S-Function (fcgen): '<S55>/Function-Call Generator' */
    }

    /* End of Logic: '<S45>/Logical Operator' */
    /* End of Outputs for SubSystem: '<S45>/FnCallGRChng_KF' */

    /* SignalConversion generated from: '<S45>/Product' */
    rtb_TmpSignalConversionAtProductInport2[0] = HADR_ac_B.TaLQI_Out;
    rtb_TmpSignalConversionAtProductInport2[1] = HADR_ac_B.TbLQI_Out;
    rtb_TmpSignalConversionAtProductInport2[2] = HADR_ac_B.TRL_Out;
    for (i = 0; i < 5; i++)
    {
        /* Product: '<S45>/Product' incorporates:
         *  Merge: '<S56>/Merge1'
         */
        tmp[i] = 0.0F;
        for (i_0 = 0; i_0 < 3; i_0++)
        {
            tmp[i] += VaHADR_K_Plant_B[(5 * i_0) + i] *
                rtb_TmpSignalConversionAtProductInport2[i_0];
        }

        /* End of Product: '<S45>/Product' */

        /* Product: '<S45>/Product1' incorporates:
         *  Merge: '<S56>/Merge'
         */
        tmp_0[i] = 0.0F;
        for (i_0 = 0; i_0 < 5; i_0++)
        {
            tmp_0[i] += VaHADR_K_Plant_A[(5 * i_0) + i] * HADR_ac_B.xHat_Out[i_0];
        }

        /* End of Product: '<S45>/Product1' */

        /* Sum: '<S45>/Add1' */
        VaHADR_nr_KalmanBL_XHat[(i)] = tmp[i] + tmp_0[i];
    }

    /* Outputs for Enabled SubSystem: '<S45>/KF_measurement_update' incorporates:
     *  EnablePort: '<S57>/Enable'
     */
    if (rtb_RelationalOperator1)
    {
        HADR_ac_DW.KF_measurement_update_MODE = true;
        for (i = 0; i < 3; i++)
        {
            /* Sum: '<S57>/Add3' incorporates:
             *  Constant: '<S224>/Calib'
             *  Product: '<S57>/Product6'
             */
            rtb_Add3[i] = 0.0F;
            for (i_0 = 0; i_0 < 5; i_0++)
            {
                rtb_Add3[i] += KaHADR_k_MatC_KalmanPlant[(3 * i_0) + i] *
                    VaHADR_nr_KalmanBL_XHat[(i_0)];
            }
        }

        /* Sum: '<S57>/Add3' */
        rtb_Sum = rtb_Add3[0];
        rtb_Abs1 = rtb_Add3[1];
        rtb_Abs2 = rtb_Add3[2];

        /* Sum: '<S57>/Add3' */
        rtb_Add3[0] = VeHADR_nr_MtrASpdActRad - rtb_Sum;
        rtb_Add3[1] = VeHADR_nr_MtrBSpdActRad - rtb_Abs1;
        rtb_Add3[2] = VeHADR_nr_VehSpd_Act - rtb_Abs2;
        for (i = 0; i < 5; i++)
        {
            /* Product: '<S57>/Product5' incorporates:
             *  Merge: '<S56>/Merge4'
             */
            HADR_ac_B.Product5[i] = 0.0F;
            for (i_0 = 0; i_0 < 3; i_0++)
            {
                HADR_ac_B.Product5[i] += VaHADR_K_KF_M[(5 * i_0) + i] *
                    rtb_Add3[i_0];
            }

            /* End of Product: '<S57>/Product5' */
        }
    }
    else
    {
        if (HADR_ac_DW.KF_measurement_update_MODE)
        {
            for (i = 0; i < 5; i++)
            {
                /* Disable for Product: '<S57>/Product5' incorporates:
                 *  Outport: '<S57>/Out1'
                 */
                HADR_ac_B.Product5[i] = 0.0F;
            }

            HADR_ac_DW.KF_measurement_update_MODE = false;
        }
    }

    /* End of Outputs for SubSystem: '<S45>/KF_measurement_update' */
    for (i = 0; i < 5; i++)
    {
        /* Sum: '<S45>/Add4' */
        VaHADR_nr_KalmanBL_XHat[(i)] = HADR_ac_B.Product5[i] +
            VaHADR_nr_KalmanBL_XHat[(i)];
    }

    for (i = 0; i < 5; i++)
    {
        /* Product: '<S45>/Product2' incorporates:
         *  Merge: '<S56>/Merge2'
         */
        tmp[i] = 0.0F;
        for (i_0 = 0; i_0 < 5; i_0++)
        {
            tmp[i] += VaHADR_K_Plant_C[(5 * i_0) + i] * VaHADR_nr_KalmanBL_XHat
                [(i_0)];
        }

        /* End of Product: '<S45>/Product2' */

        /* Product: '<S45>/Product3' incorporates:
         *  Merge: '<S56>/Merge3'
         */
        tmp_0[i] = 0.0F;
        for (i_0 = 0; i_0 < 3; i_0++)
        {
            tmp_0[i] += VaHADR_K_Plant_D[(5 * i_0) + i] *
                rtb_TmpSignalConversionAtProductInport2[i_0];
        }

        /* End of Product: '<S45>/Product3' */

        /* Sum: '<S45>/Add2' */
        HADR_ac_B.Add2[i] = tmp[i] + tmp_0[i];
    }

    /* Sum: '<S67>/Sum' incorporates:
     *  Constant: '<S229>/Calib'
     *  Product: '<S67>/Product'
     */
    rtb_Sum = (HeHADR_t_FastTEF_dT * HADR_ac_B.Add2[2]) + HADR_ac_B.xPos_Out[2];

    /* Gain: '<S63>/Gain' */
    HADR_ac_B.Gain = HADR_ac_B.Add2[0];

    /* If: '<S67>/If' incorporates:
     *  Constant: '<S232>/Constant Value'
     *  RelationalOperator: '<S232>/Comparison2'
     *  Sum: '<S232>/Sum7'
     *  Switch: '<S232>/Switch'
     */
    if (HADR_ac_B.UseBL_TaCurr_Out)
    {
        /* Outputs for IfAction SubSystem: '<S67>/In_BL_MtrA' incorporates:
         *  ActionPort: '<S230>/Action Port'
         */
        /* Gain: '<S234>/Gain' incorporates:
         *  Abs: '<S45>/Abs2'
         *  Constant: '<S235>/Calib'
         *  Product: '<S230>/Product'
         *  Sum: '<S230>/Sum'
         */
        VaHADR_nr_xHat_PosRaw[0] = (HeHADR_t_FastTEF_dT * HADR_ac_B.Gain) +
            HADR_ac_B.xPos_Out[0];

        /* End of Outputs for SubSystem: '<S67>/In_BL_MtrA' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S67>/In_Contact_MtrA' incorporates:
         *  ActionPort: '<S232>/Action Port'
         */
        if ((HADR_ac_B.xPos_Out[0] - HADR_ac_B.xPos_Out[2]) >= 0.0F)
        {
            /* Gain: '<S234>/Gain' incorporates:
             *  Abs: '<S45>/Abs2'
             *  Constant: '<S237>/Calib'
             *  Constant: '<S238>/Calib'
             *  Product: '<S232>/Divide'
             *  Sum: '<S232>/Sum1'
             *  Sum: '<S232>/Sum5'
             *  Switch: '<S232>/Switch'
             */
            VaHADR_nr_xHat_PosRaw[0] = ((HADR_ac_B.Add2[3] /
                KeHADR_k_SpringConst) + rtb_Sum) + KeHADR_nr_BacklashAng_Arad;
        }
        else
        {
            /* Gain: '<S234>/Gain' incorporates:
             *  Abs: '<S45>/Abs2'
             *  Constant: '<S237>/Calib'
             *  Constant: '<S238>/Calib'
             *  Product: '<S232>/Divide'
             *  Sum: '<S232>/Sum2'
             *  Sum: '<S232>/Sum5'
             *  Switch: '<S232>/Switch'
             */
            VaHADR_nr_xHat_PosRaw[0] = ((HADR_ac_B.Add2[3] /
                KeHADR_k_SpringConst) + rtb_Sum) - KeHADR_nr_BacklashAng_Arad;
        }

        /* End of Outputs for SubSystem: '<S67>/In_Contact_MtrA' */
    }

    /* End of If: '<S67>/If' */

    /* Gain: '<S64>/Gain' */
    HADR_ac_B.Gain_e = HADR_ac_B.Add2[1];

    /* If: '<S67>/If1' incorporates:
     *  Constant: '<S233>/Constant Value'
     *  RelationalOperator: '<S233>/Comparison2'
     *  Sum: '<S233>/Sum7'
     *  Switch: '<S233>/Switch'
     */
    if (HADR_ac_B.UseBL_TbCurr_Out)
    {
        /* Outputs for IfAction SubSystem: '<S67>/In_BL_MtrB' incorporates:
         *  ActionPort: '<S231>/Action Port'
         */
        /* Gain: '<S234>/Gain' incorporates:
         *  Abs: '<S45>/Abs1'
         *  Constant: '<S236>/Calib'
         *  Product: '<S231>/Product'
         *  Sum: '<S231>/Sum'
         */
        VaHADR_nr_xHat_PosRaw[1] = (HeHADR_t_FastTEF_dT * HADR_ac_B.Gain_e) +
            HADR_ac_B.xPos_Out[1];

        /* End of Outputs for SubSystem: '<S67>/In_BL_MtrB' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S67>/In_Contact_MtrB' incorporates:
         *  ActionPort: '<S233>/Action Port'
         */
        if ((HADR_ac_B.xPos_Out[1] - HADR_ac_B.xPos_Out[2]) >= 0.0F)
        {
            /* Gain: '<S234>/Gain' incorporates:
             *  Abs: '<S45>/Abs1'
             *  Constant: '<S239>/Calib'
             *  Constant: '<S240>/Calib'
             *  Product: '<S233>/Divide'
             *  Sum: '<S233>/Sum1'
             *  Sum: '<S233>/Sum5'
             *  Switch: '<S233>/Switch'
             */
            VaHADR_nr_xHat_PosRaw[1] = ((HADR_ac_B.Add2[4] /
                KeHADR_k_SpringConst) + rtb_Sum) + KeHADR_nr_BacklashAng_Brad;
        }
        else
        {
            /* Gain: '<S234>/Gain' incorporates:
             *  Abs: '<S45>/Abs1'
             *  Constant: '<S239>/Calib'
             *  Constant: '<S240>/Calib'
             *  Product: '<S233>/Divide'
             *  Sum: '<S233>/Sum2'
             *  Sum: '<S233>/Sum5'
             *  Switch: '<S233>/Switch'
             */
            VaHADR_nr_xHat_PosRaw[1] = ((HADR_ac_B.Add2[4] /
                KeHADR_k_SpringConst) + rtb_Sum) - KeHADR_nr_BacklashAng_Brad;
        }

        /* End of Outputs for SubSystem: '<S67>/In_Contact_MtrB' */
    }

    /* End of If: '<S67>/If1' */

    /* Gain: '<S234>/Gain' */
    VaHADR_nr_xHat_PosRaw[2] = rtb_Sum;
    for (i = 0; i < 3; i++)
    {
        /* Switch: '<S67>/Switch' incorporates:
         *  Constant: '<S67>/360 deg'
         *  RelationalOperator: '<S67>/Comparison1'
         */
        if (rtb_Sum > 6.28319F)
        {
            /* Switch: '<S67>/Switch' incorporates:
             *  Constant: '<S67>/360 deg4'
             *  Sum: '<S67>/Sum4'
             */
            VaHADR_nr_xHat_Pos[(i)] = VaHADR_nr_xHat_PosRaw[(i)] - 6.28319F;
        }
        else
        {
            /* Switch: '<S67>/Switch' */
            VaHADR_nr_xHat_Pos[(i)] = VaHADR_nr_xHat_PosRaw[(i)];
        }

        /* End of Switch: '<S67>/Switch' */

        /* Switch: '<S67>/Switch1' incorporates:
         *  Constant: '<S67>/360 deg2'
         *  RelationalOperator: '<S67>/Comparison3'
         */
        if (rtb_Sum < -6.28319F)
        {
            /* Switch: '<S67>/Switch1' incorporates:
             *  Constant: '<S67>/360 deg5'
             *  Sum: '<S67>/Sum6'
             */
            VaHADR_nr_xHat_Pos[(i)] = VaHADR_nr_xHat_Pos[(i)] + 6.28319F;
        }

        /* End of Switch: '<S67>/Switch1' */
    }

    /* Sum: '<S52>/Sum8' */
    VeHADR_nr_MtrB_Disp = VaHADR_nr_xHat_Pos[1] - VaHADR_nr_xHat_Pos[2];

    /* Outputs for Atomic SubSystem: '<S52>/Limiter3' */
    /* Switch: '<S71>/Switch1' incorporates:
     *  Constant: '<S69>/Calib'
     *  RelationalOperator: '<S71>/Relational Operator'
     */
    if (KeHADR_nr_BacklashAng_Brad < VeHADR_nr_MtrB_Disp)
    {
        /* Sum: '<S45>/Sum2' */
        rtb_Sum = KeHADR_nr_BacklashAng_Brad;
    }
    else
    {
        /* Sum: '<S45>/Sum2' */
        rtb_Sum = VeHADR_nr_MtrB_Disp;
    }

    /* End of Switch: '<S71>/Switch1' */

    /* Switch: '<S71>/Switch' incorporates:
     *  Constant: '<S69>/Calib'
     *  Gain: '<S52>/Gain1'
     *  RelationalOperator: '<S71>/Relational Operator1'
     */
    if (rtb_Sum > (-KeHADR_nr_BacklashAng_Brad))
    {
        /* Switch: '<S71>/Switch' */
        VeHADR_nr_MtrB_BL_rad = rtb_Sum;
    }
    else
    {
        /* Switch: '<S71>/Switch' */
        VeHADR_nr_MtrB_BL_rad = -KeHADR_nr_BacklashAng_Brad;
    }

    /* End of Switch: '<S71>/Switch' */
    /* End of Outputs for SubSystem: '<S52>/Limiter3' */

    /* Abs: '<S45>/Abs1' */
    rtb_Abs1 = fabsf(VeHADR_nr_MtrB_BL_rad);

    /* Sum: '<S52>/Sum9' */
    VeHADR_nr_MtrA_Disp = VaHADR_nr_xHat_Pos[0] - VaHADR_nr_xHat_Pos[2];

    /* Outputs for Atomic SubSystem: '<S52>/Limiter2' */
    /* Switch: '<S70>/Switch1' incorporates:
     *  Constant: '<S68>/Calib'
     *  RelationalOperator: '<S70>/Relational Operator'
     */
    if (KeHADR_nr_BacklashAng_Arad < VeHADR_nr_MtrA_Disp)
    {
        /* Sum: '<S45>/Sum2' */
        rtb_Sum = KeHADR_nr_BacklashAng_Arad;
    }
    else
    {
        /* Sum: '<S45>/Sum2' */
        rtb_Sum = VeHADR_nr_MtrA_Disp;
    }

    /* End of Switch: '<S70>/Switch1' */

    /* Switch: '<S70>/Switch' incorporates:
     *  Constant: '<S68>/Calib'
     *  Gain: '<S52>/Gain'
     *  RelationalOperator: '<S70>/Relational Operator1'
     */
    if (rtb_Sum > (-KeHADR_nr_BacklashAng_Arad))
    {
        /* Switch: '<S70>/Switch' */
        VeHADR_nr_MtrA_BL_rad = rtb_Sum;
    }
    else
    {
        /* Switch: '<S70>/Switch' */
        VeHADR_nr_MtrA_BL_rad = -KeHADR_nr_BacklashAng_Arad;
    }

    /* End of Switch: '<S70>/Switch' */
    /* End of Outputs for SubSystem: '<S52>/Limiter2' */

    /* Abs: '<S45>/Abs2' */
    rtb_Abs2 = fabsf(VeHADR_nr_MtrA_BL_rad);

    /* Sum: '<S45>/Sum2' incorporates:
     *  Constant: '<S59>/Calib'
     *  Constant: '<S60>/Calib'
     *  Sum: '<S45>/Sum6'
     */
    rtb_Sum = KeHADR_nr_BacklashAng_Brad - KeHADR_r_BacklashAngResl;

    /* RelationalOperator: '<S45>/Comparison' */
    rtb_RelationalOperator1 = (rtb_Abs1 > rtb_Sum);

    /* RelationalOperator: '<S45>/Comparison1' */
    rtb_Comparison1_h = (rtb_Abs1 < rtb_Sum);

    /* Sum: '<S45>/Sum2' incorporates:
     *  Constant: '<S58>/Calib'
     *  Constant: '<S60>/Calib'
     */
    rtb_Sum = KeHADR_nr_BacklashAng_Arad - KeHADR_r_BacklashAngResl;

    /* Outputs for Atomic SubSystem: '<S45>/SignalLatchOnWithReset1' */
    /* VariantMerge generated from: '<S6>/VeHADR_b_FrntMtrBL' incorporates:
     *  Constant: '<S227>/Constant'
     *  Constant: '<S228>/Constant'
     *  Constant: '<S74>/Constant'
     *  Constant: '<S75>/Constant'
     *  Logic: '<S45>/Logical Operator1'
     *  Logic: '<S45>/Logical Operator8'
     *  Logic: '<S54>/LogicalOperator3'
     *  Logic: '<S62>/LogicalOperator3'
     *  Logic: '<S66>/NOT'
     *  Logic: '<S66>/OR'
     *  Logic: '<S66>/OR1'
     *  RelationalOperator: '<S227>/Compare'
     *  RelationalOperator: '<S228>/Compare'
     *  RelationalOperator: '<S45>/Comparison2'
     *  RelationalOperator: '<S45>/Comparison3'
     *  RelationalOperator: '<S74>/Compare'
     *  RelationalOperator: '<S75>/Compare'
     *  UnitDelay: '<S45>/Unit Delay8'
     */
    HADR_ac_B.VariantMergeForOutportVeHADR_b_FrntMtrBL =
        ((HADR_ac_DW.UnitDelay8_DSTATE_f) || (((((HADR_ac_B.Add2[3] > 0.0F) &&
             (HADR_ac_B.SpringTrqMtrA_Plant_sym_Out < 0.0F)) ||
            ((HADR_ac_B.Add2[3] < 0.0F) &&
             (HADR_ac_B.SpringTrqMtrA_Plant_sym_Out > 0.0F))) || (rtb_Abs2 <
            rtb_Sum)) || ((rtb_Abs2 <= rtb_Sum) && (HADR_ac_B.UseBL_TaCurr_Out))));

    /* End of Outputs for SubSystem: '<S45>/SignalLatchOnWithReset1' */

    /* SignalConversion generated from: '<S45>/SpringTa' */
    HADR_ac_B.OutportBufferForSpringTa = HADR_ac_B.Add2[3];

    /* SignalConversion generated from: '<S45>/SpringTb' */
    HADR_ac_B.OutportBufferForSpringTb = HADR_ac_B.Add2[4];

    /* Outputs for Atomic SubSystem: '<S45>/SignalLatchOnWithReset' */
    /* VariantMerge generated from: '<S6>/VeHADR_b_RearMtrBL' incorporates:
     *  Constant: '<S225>/Constant'
     *  Constant: '<S226>/Constant'
     *  Constant: '<S72>/Constant'
     *  Constant: '<S73>/Constant'
     *  Logic: '<S45>/Logical Operator3'
     *  Logic: '<S53>/LogicalOperator3'
     *  Logic: '<S61>/LogicalOperator3'
     *  Logic: '<S65>/NOT'
     *  Logic: '<S65>/OR'
     *  Logic: '<S65>/OR1'
     *  RelationalOperator: '<S225>/Compare'
     *  RelationalOperator: '<S226>/Compare'
     *  RelationalOperator: '<S72>/Compare'
     *  RelationalOperator: '<S73>/Compare'
     */
    HADR_ac_B.VariantMergeForOutportVeHADR_b_RearMtrBL = (((((HADR_ac_B.Add2[4] >
        0.0F) && (HADR_ac_B.SpringTrqMtrB_Plant_sym_Out < 0.0F)) ||
        ((HADR_ac_B.Add2[4] < 0.0F) && (HADR_ac_B.SpringTrqMtrB_Plant_sym_Out >
        0.0F))) || rtb_Comparison1_h) || ((!rtb_RelationalOperator1) &&
        (HADR_ac_B.UseBL_TbCurr_Out)));

    /* End of Outputs for SubSystem: '<S45>/SignalLatchOnWithReset' */

    /* Update for UnitDelay: '<S45>/Unit Delay2' */
    HADR_ac_DW.UnitDelay2_DSTATE_c = rtb_DataTypeConversion;

    /* Update for UnitDelay: '<S45>/Unit Delay8' */
    HADR_ac_DW.UnitDelay8_DSTATE_f = VeHADR_b_DsblMtrA_Dnmc_KF;
}

#endif

/* Output and update for function-call system: '<S47>/HADR_Prmtr_Selection_LQI' */
#if Rte_SysCon_Variant_HADR_LashCtrl

static FUNC(void, HADR_CODE_LOCAL) GRsChangeHADR_LQI(void)
{
    sint32 i;

    /* If: '<S249>/If' incorporates:
     *  Constant: '<S282>/Constant'
     *  Constant: '<S283>/Constant'
     *  Constant: '<S284>/Constant'
     *  Constant: '<S285>/Constant'
     *  Constant: '<S286>/Constant'
     *  Constant: '<S287>/Constant'
     *  Constant: '<S288>/Constant'
     *  Constant: '<S289>/Constant'
     *  Constant: '<S290>/Constant'
     *  Constant: '<S291>/Constant'
     *  Logic: '<S249>/Logical1'
     *  Logic: '<S249>/Logical2'
     *  RelationalOperator: '<S249>/Comparison1'
     *  RelationalOperator: '<S249>/Comparison10'
     *  RelationalOperator: '<S249>/Comparison2'
     *  RelationalOperator: '<S249>/Comparison3'
     *  RelationalOperator: '<S249>/Comparison4'
     *  RelationalOperator: '<S249>/Comparison5'
     *  RelationalOperator: '<S249>/Comparison6'
     *  RelationalOperator: '<S249>/Comparison7'
     *  RelationalOperator: '<S249>/Comparison8'
     *  RelationalOperator: '<S249>/Comparison9'
     */
    if ((((uint32)HADR_ac_B.TmpSignalConversionAtHSER_e_HADRLeadStat) ==
            CeHSER_e_Neut_State) || (((uint32)
            HADR_ac_B.TmpSignalConversionAtHSER_e_HADRLeadStat) ==
            CeHSER_e_Neut_State_2))
    {
        /* Outputs for IfAction SubSystem: '<S249>/Neutral' incorporates:
         *  ActionPort: '<S299>/Action Port'
         */
        /* MultiPortSwitch: '<S299>/Multiport Switch5' */
        switch (VeHADR_Cnt_MatrixCase_LQI)
        {
          case 1:
            /* Merge: '<S249>/Merge5' incorporates:
             *  Constant: '<S377>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_Kp[(i)] = KaHADR_K_N_LQI_Kp_BLTa[(i)];
            }
            break;

          case 2:
            /* Merge: '<S249>/Merge5' incorporates:
             *  Constant: '<S377>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_Kp[(i)] = KaHADR_K_N_LQI_Kp_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S249>/Merge5' incorporates:
             *  Constant: '<S376>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_Kp[(i)] = KaHADR_K_N_LQI_Kp_BLAll[(i)];
            }
            break;

          default:
            /* Merge: '<S249>/Merge5' incorporates:
             *  Constant: '<S376>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_Kp[(i)] = KaHADR_K_N_LQI_Kp_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S299>/Multiport Switch5' */

        /* MultiPortSwitch: '<S299>/Multiport Switch6' */
        switch (VeHADR_Cnt_MatrixCase_LQI)
        {
          case 1:
            /* Merge: '<S249>/Merge6' incorporates:
             *  Constant: '<S375>/Calib'
             */
            for (i = 0; i < 4; i++)
            {
                VaHADR_K_LQI_Ki[(i)] = KaHADR_K_N_LQI_Ki_BLTa[(i)];
            }
            break;

          case 2:
            /* Merge: '<S249>/Merge6' incorporates:
             *  Constant: '<S375>/Calib'
             */
            for (i = 0; i < 4; i++)
            {
                VaHADR_K_LQI_Ki[(i)] = KaHADR_K_N_LQI_Ki_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S249>/Merge6' incorporates:
             *  Constant: '<S374>/Calib'
             */
            for (i = 0; i < 4; i++)
            {
                VaHADR_K_LQI_Ki[(i)] = KaHADR_K_N_LQI_Ki_BLAll[(i)];
            }
            break;

          default:
            /* Merge: '<S249>/Merge6' incorporates:
             *  Constant: '<S374>/Calib'
             */
            for (i = 0; i < 4; i++)
            {
                VaHADR_K_LQI_Ki[(i)] = KaHADR_K_N_LQI_Ki_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S299>/Multiport Switch6' */

        /* MultiPortSwitch: '<S299>/Multiport Switch7' */
        switch (VeHADR_Cnt_MatrixCase_LQI)
        {
          case 1:
            /* Merge: '<S249>/Merge7' incorporates:
             *  Constant: '<S373>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_CMat[(i)] = KaHADR_K_N_LQI_CMat_BLTa[(i)];
            }
            break;

          case 2:
            /* Merge: '<S249>/Merge7' incorporates:
             *  Constant: '<S373>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_CMat[(i)] = KaHADR_K_N_LQI_CMat_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S249>/Merge7' incorporates:
             *  Constant: '<S372>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_CMat[(i)] = KaHADR_K_N_LQI_CMat_BLAll[(i)];
            }
            break;

          default:
            /* Merge: '<S249>/Merge7' incorporates:
             *  Constant: '<S372>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_CMat[(i)] = KaHADR_K_N_LQI_CMat_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S299>/Multiport Switch7' */

        /* Merge: '<S249>/Merge8' incorporates:
         *  Constant: '<S299>/Constant'
         *  SignalConversion generated from: '<S299>/VeHADR_b_N_DsblMtrA_Dnmc'
         */
        VeHADR_b_DsblMtrA_Dnmc_LQI = true;

        /* End of Outputs for SubSystem: '<S249>/Neutral' */
    }
    else if (((uint32)HADR_ac_B.TmpSignalConversionAtHSER_e_HADRLeadStat) ==
             CeHSER_e_M1_State)
    {
        /* Outputs for IfAction SubSystem: '<S249>/M1' incorporates:
         *  ActionPort: '<S296>/Action Port'
         */
        /* MultiPortSwitch: '<S296>/Multiport Switch5' */
        switch (VeHADR_Cnt_MatrixCase_LQI)
        {
          case 1:
            /* Merge: '<S249>/Merge5' incorporates:
             *  Constant: '<S353>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_Kp[(i)] = KaHADR_K_M1_LQI_Kp_BLTa[(i)];
            }
            break;

          case 2:
            /* Merge: '<S249>/Merge5' incorporates:
             *  Constant: '<S353>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_Kp[(i)] = KaHADR_K_M1_LQI_Kp_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S249>/Merge5' incorporates:
             *  Constant: '<S352>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_Kp[(i)] = KaHADR_K_M1_LQI_Kp_BLAll[(i)];
            }
            break;

          default:
            /* Merge: '<S249>/Merge5' incorporates:
             *  Constant: '<S352>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_Kp[(i)] = KaHADR_K_M1_LQI_Kp_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S296>/Multiport Switch5' */

        /* MultiPortSwitch: '<S296>/Multiport Switch6' */
        switch (VeHADR_Cnt_MatrixCase_LQI)
        {
          case 1:
            /* Merge: '<S249>/Merge6' incorporates:
             *  Constant: '<S351>/Calib'
             */
            for (i = 0; i < 4; i++)
            {
                VaHADR_K_LQI_Ki[(i)] = KaHADR_K_M1_LQI_Ki_BLTa[(i)];
            }
            break;

          case 2:
            /* Merge: '<S249>/Merge6' incorporates:
             *  Constant: '<S351>/Calib'
             */
            for (i = 0; i < 4; i++)
            {
                VaHADR_K_LQI_Ki[(i)] = KaHADR_K_M1_LQI_Ki_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S249>/Merge6' incorporates:
             *  Constant: '<S350>/Calib'
             */
            for (i = 0; i < 4; i++)
            {
                VaHADR_K_LQI_Ki[(i)] = KaHADR_K_M1_LQI_Ki_BLAll[(i)];
            }
            break;

          default:
            /* Merge: '<S249>/Merge6' incorporates:
             *  Constant: '<S350>/Calib'
             */
            for (i = 0; i < 4; i++)
            {
                VaHADR_K_LQI_Ki[(i)] = KaHADR_K_M1_LQI_Ki_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S296>/Multiport Switch6' */

        /* MultiPortSwitch: '<S296>/Multiport Switch7' */
        switch (VeHADR_Cnt_MatrixCase_LQI)
        {
          case 1:
            /* Merge: '<S249>/Merge7' incorporates:
             *  Constant: '<S349>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_CMat[(i)] = KaHADR_K_M1_LQI_CMat_BLTa[(i)];
            }
            break;

          case 2:
            /* Merge: '<S249>/Merge7' incorporates:
             *  Constant: '<S349>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_CMat[(i)] = KaHADR_K_M1_LQI_CMat_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S249>/Merge7' incorporates:
             *  Constant: '<S348>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_CMat[(i)] = KaHADR_K_M1_LQI_CMat_BLAll[(i)];
            }
            break;

          default:
            /* Merge: '<S249>/Merge7' incorporates:
             *  Constant: '<S348>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_CMat[(i)] = KaHADR_K_M1_LQI_CMat_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S296>/Multiport Switch7' */

        /* Merge: '<S249>/Merge8' incorporates:
         *  Constant: '<S296>/Constant'
         *  SignalConversion generated from: '<S296>/VeHADR_b_M1_DsblMtrA_Dnmc'
         */
        VeHADR_b_DsblMtrA_Dnmc_LQI = true;

        /* End of Outputs for SubSystem: '<S249>/M1' */
    }
    else if ((((uint32)HADR_ac_B.TmpSignalConversionAtHSER_e_HADRLeadStat) ==
              CeHSER_e_M2_State) || (((uint32)
               HADR_ac_B.TmpSignalConversionAtHSER_e_HADRLeadStat) ==
              CeHSER_e_M2_State_2))
    {
        /* Outputs for IfAction SubSystem: '<S249>/M2' incorporates:
         *  ActionPort: '<S297>/Action Port'
         */
        /* MultiPortSwitch: '<S297>/Multiport Switch5' */
        switch (VeHADR_Cnt_MatrixCase_LQI)
        {
          case 1:
            /* Merge: '<S249>/Merge5' incorporates:
             *  Constant: '<S365>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_Kp[(i)] = KaHADR_K_M2_LQI_Kp_ContactAll[(i)];
            }
            break;

          case 2:
            /* Merge: '<S249>/Merge5' incorporates:
             *  Constant: '<S363>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_Kp[(i)] = KaHADR_K_M2_LQI_Kp_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S249>/Merge5' incorporates:
             *  Constant: '<S364>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_Kp[(i)] = KaHADR_K_M2_LQI_Kp_BLTb[(i)];
            }
            break;

          default:
            /* Merge: '<S249>/Merge5' incorporates:
             *  Constant: '<S362>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_Kp[(i)] = KaHADR_K_M2_LQI_Kp_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S297>/Multiport Switch5' */

        /* MultiPortSwitch: '<S297>/Multiport Switch6' */
        switch (VeHADR_Cnt_MatrixCase_LQI)
        {
          case 1:
            /* Merge: '<S249>/Merge6' incorporates:
             *  Constant: '<S361>/Calib'
             */
            for (i = 0; i < 4; i++)
            {
                VaHADR_K_LQI_Ki[(i)] = KaHADR_K_M2_LQI_Ki_ContactAll[(i)];
            }
            break;

          case 2:
            /* Merge: '<S249>/Merge6' incorporates:
             *  Constant: '<S359>/Calib'
             */
            for (i = 0; i < 4; i++)
            {
                VaHADR_K_LQI_Ki[(i)] = KaHADR_K_M2_LQI_Ki_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S249>/Merge6' incorporates:
             *  Constant: '<S360>/Calib'
             */
            for (i = 0; i < 4; i++)
            {
                VaHADR_K_LQI_Ki[(i)] = KaHADR_K_M2_LQI_Ki_BLTb[(i)];
            }
            break;

          default:
            /* Merge: '<S249>/Merge6' incorporates:
             *  Constant: '<S358>/Calib'
             */
            for (i = 0; i < 4; i++)
            {
                VaHADR_K_LQI_Ki[(i)] = KaHADR_K_M2_LQI_Ki_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S297>/Multiport Switch6' */

        /* MultiPortSwitch: '<S297>/Multiport Switch7' */
        switch (VeHADR_Cnt_MatrixCase_LQI)
        {
          case 1:
            /* Merge: '<S249>/Merge7' incorporates:
             *  Constant: '<S357>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_CMat[(i)] = KaHADR_K_M2_LQI_CMat_ContactAll[(i)];
            }
            break;

          case 2:
            /* Merge: '<S249>/Merge7' incorporates:
             *  Constant: '<S355>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_CMat[(i)] = KaHADR_K_M2_LQI_CMat_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S249>/Merge7' incorporates:
             *  Constant: '<S356>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_CMat[(i)] = KaHADR_K_M2_LQI_CMat_BLTb[(i)];
            }
            break;

          default:
            /* Merge: '<S249>/Merge7' incorporates:
             *  Constant: '<S354>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_CMat[(i)] = KaHADR_K_M2_LQI_CMat_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S297>/Multiport Switch7' */

        /* Merge: '<S249>/Merge8' incorporates:
         *  Constant: '<S297>/Constant'
         *  SignalConversion generated from: '<S297>/VeHADR_b_M2_DsblMtrA_Dnmc'
         */
        VeHADR_b_DsblMtrA_Dnmc_LQI = false;

        /* End of Outputs for SubSystem: '<S249>/M2' */
    }
    else if (((uint32)HADR_ac_B.TmpSignalConversionAtHSER_e_HADRLeadStat) ==
             CeHSER_e_M3_State)
    {
        /* Outputs for IfAction SubSystem: '<S249>/M3' incorporates:
         *  ActionPort: '<S298>/Action Port'
         */
        /* MultiPortSwitch: '<S298>/Multiport Switch5' */
        switch (VeHADR_Cnt_MatrixCase_LQI)
        {
          case 1:
            /* Merge: '<S249>/Merge5' incorporates:
             *  Constant: '<S371>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_Kp[(i)] = KaHADR_K_M3_LQI_Kp_BLTa[(i)];
            }
            break;

          case 2:
            /* Merge: '<S249>/Merge5' incorporates:
             *  Constant: '<S371>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_Kp[(i)] = KaHADR_K_M3_LQI_Kp_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S249>/Merge5' incorporates:
             *  Constant: '<S370>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_Kp[(i)] = KaHADR_K_M3_LQI_Kp_BLAll[(i)];
            }
            break;

          default:
            /* Merge: '<S249>/Merge5' incorporates:
             *  Constant: '<S370>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_Kp[(i)] = KaHADR_K_M3_LQI_Kp_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S298>/Multiport Switch5' */

        /* MultiPortSwitch: '<S298>/Multiport Switch6' */
        switch (VeHADR_Cnt_MatrixCase_LQI)
        {
          case 1:
            /* Merge: '<S249>/Merge6' incorporates:
             *  Constant: '<S369>/Calib'
             */
            for (i = 0; i < 4; i++)
            {
                VaHADR_K_LQI_Ki[(i)] = KaHADR_K_M3_LQI_Ki_BLTa[(i)];
            }
            break;

          case 2:
            /* Merge: '<S249>/Merge6' incorporates:
             *  Constant: '<S369>/Calib'
             */
            for (i = 0; i < 4; i++)
            {
                VaHADR_K_LQI_Ki[(i)] = KaHADR_K_M3_LQI_Ki_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S249>/Merge6' incorporates:
             *  Constant: '<S368>/Calib'
             */
            for (i = 0; i < 4; i++)
            {
                VaHADR_K_LQI_Ki[(i)] = KaHADR_K_M3_LQI_Ki_BLAll[(i)];
            }
            break;

          default:
            /* Merge: '<S249>/Merge6' incorporates:
             *  Constant: '<S368>/Calib'
             */
            for (i = 0; i < 4; i++)
            {
                VaHADR_K_LQI_Ki[(i)] = KaHADR_K_M3_LQI_Ki_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S298>/Multiport Switch6' */

        /* MultiPortSwitch: '<S298>/Multiport Switch7' */
        switch (VeHADR_Cnt_MatrixCase_LQI)
        {
          case 1:
            /* Merge: '<S249>/Merge7' incorporates:
             *  Constant: '<S367>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_CMat[(i)] = KaHADR_K_M3_LQI_CMat_BLTa[(i)];
            }
            break;

          case 2:
            /* Merge: '<S249>/Merge7' incorporates:
             *  Constant: '<S367>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_CMat[(i)] = KaHADR_K_M3_LQI_CMat_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S249>/Merge7' incorporates:
             *  Constant: '<S366>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_CMat[(i)] = KaHADR_K_M3_LQI_CMat_BLAll[(i)];
            }
            break;

          default:
            /* Merge: '<S249>/Merge7' incorporates:
             *  Constant: '<S366>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_CMat[(i)] = KaHADR_K_M3_LQI_CMat_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S298>/Multiport Switch7' */

        /* Merge: '<S249>/Merge8' incorporates:
         *  Constant: '<S298>/Constant'
         *  SignalConversion generated from: '<S298>/VeHADR_b_M3_DsblMtrA_Dnmc'
         */
        VeHADR_b_DsblMtrA_Dnmc_LQI = true;

        /* End of Outputs for SubSystem: '<S249>/M3' */
    }
    else if (((uint32)HADR_ac_B.TmpSignalConversionAtHSER_e_HADRLeadStat) ==
             CeHSER_e_G1_State)
    {
        /* Outputs for IfAction SubSystem: '<S249>/G1' incorporates:
         *  ActionPort: '<S292>/Action Port'
         */
        /* MultiPortSwitch: '<S292>/Multiport Switch5' */
        switch (VeHADR_Cnt_MatrixCase_LQI)
        {
          case 1:
            /* Merge: '<S249>/Merge5' incorporates:
             *  Constant: '<S311>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_Kp[(i)] = KaHADR_K_G1_LQI_Kp_ContactAll[(i)];
            }
            break;

          case 2:
            /* Merge: '<S249>/Merge5' incorporates:
             *  Constant: '<S309>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_Kp[(i)] = KaHADR_K_G1_LQI_Kp_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S249>/Merge5' incorporates:
             *  Constant: '<S310>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_Kp[(i)] = KaHADR_K_G1_LQI_Kp_BLTb[(i)];
            }
            break;

          default:
            /* Merge: '<S249>/Merge5' incorporates:
             *  Constant: '<S308>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_Kp[(i)] = KaHADR_K_G1_LQI_Kp_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S292>/Multiport Switch5' */

        /* MultiPortSwitch: '<S292>/Multiport Switch6' */
        switch (VeHADR_Cnt_MatrixCase_LQI)
        {
          case 1:
            /* Merge: '<S249>/Merge6' incorporates:
             *  Constant: '<S307>/Calib'
             */
            for (i = 0; i < 4; i++)
            {
                VaHADR_K_LQI_Ki[(i)] = KaHADR_K_G1_LQI_Ki_ContactAll[(i)];
            }
            break;

          case 2:
            /* Merge: '<S249>/Merge6' incorporates:
             *  Constant: '<S305>/Calib'
             */
            for (i = 0; i < 4; i++)
            {
                VaHADR_K_LQI_Ki[(i)] = KaHADR_K_G1_LQI_Ki_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S249>/Merge6' incorporates:
             *  Constant: '<S306>/Calib'
             */
            for (i = 0; i < 4; i++)
            {
                VaHADR_K_LQI_Ki[(i)] = KaHADR_K_G1_LQI_Ki_BLTb[(i)];
            }
            break;

          default:
            /* Merge: '<S249>/Merge6' incorporates:
             *  Constant: '<S304>/Calib'
             */
            for (i = 0; i < 4; i++)
            {
                VaHADR_K_LQI_Ki[(i)] = KaHADR_K_G1_LQI_Ki_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S292>/Multiport Switch6' */

        /* MultiPortSwitch: '<S292>/Multiport Switch7' */
        switch (VeHADR_Cnt_MatrixCase_LQI)
        {
          case 1:
            /* Merge: '<S249>/Merge7' incorporates:
             *  Constant: '<S303>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_CMat[(i)] = KaHADR_K_G1_LQI_CMat_ContactAll[(i)];
            }
            break;

          case 2:
            /* Merge: '<S249>/Merge7' incorporates:
             *  Constant: '<S301>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_CMat[(i)] = KaHADR_K_G1_LQI_CMat_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S249>/Merge7' incorporates:
             *  Constant: '<S302>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_CMat[(i)] = KaHADR_K_G1_LQI_CMat_BLTb[(i)];
            }
            break;

          default:
            /* Merge: '<S249>/Merge7' incorporates:
             *  Constant: '<S300>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_CMat[(i)] = KaHADR_K_G1_LQI_CMat_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S292>/Multiport Switch7' */

        /* Merge: '<S249>/Merge8' incorporates:
         *  Constant: '<S292>/Constant'
         *  SignalConversion generated from: '<S292>/VeHADR_b_G1_DsblMtrA_Dnmc'
         */
        VeHADR_b_DsblMtrA_Dnmc_LQI = false;

        /* End of Outputs for SubSystem: '<S249>/G1' */
    }
    else if (((uint32)HADR_ac_B.TmpSignalConversionAtHSER_e_HADRLeadStat) ==
             CeHSER_e_G2_State)
    {
        /* Outputs for IfAction SubSystem: '<S249>/G2' incorporates:
         *  ActionPort: '<S293>/Action Port'
         */
        /* MultiPortSwitch: '<S293>/Multiport Switch5' */
        switch (VeHADR_Cnt_MatrixCase_LQI)
        {
          case 1:
            /* Merge: '<S249>/Merge5' incorporates:
             *  Constant: '<S323>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_Kp[(i)] = KaHADR_K_G2_LQI_Kp_ContactAll[(i)];
            }
            break;

          case 2:
            /* Merge: '<S249>/Merge5' incorporates:
             *  Constant: '<S321>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_Kp[(i)] = KaHADR_K_G2_LQI_Kp_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S249>/Merge5' incorporates:
             *  Constant: '<S322>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_Kp[(i)] = KaHADR_K_G2_LQI_Kp_BLTb[(i)];
            }
            break;

          default:
            /* Merge: '<S249>/Merge5' incorporates:
             *  Constant: '<S320>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_Kp[(i)] = KaHADR_K_G2_LQI_Kp_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S293>/Multiport Switch5' */

        /* MultiPortSwitch: '<S293>/Multiport Switch6' */
        switch (VeHADR_Cnt_MatrixCase_LQI)
        {
          case 1:
            /* Merge: '<S249>/Merge6' incorporates:
             *  Constant: '<S319>/Calib'
             */
            for (i = 0; i < 4; i++)
            {
                VaHADR_K_LQI_Ki[(i)] = KaHADR_K_G2_LQI_Ki_ContactAll[(i)];
            }
            break;

          case 2:
            /* Merge: '<S249>/Merge6' incorporates:
             *  Constant: '<S317>/Calib'
             */
            for (i = 0; i < 4; i++)
            {
                VaHADR_K_LQI_Ki[(i)] = KaHADR_K_G2_LQI_Ki_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S249>/Merge6' incorporates:
             *  Constant: '<S318>/Calib'
             */
            for (i = 0; i < 4; i++)
            {
                VaHADR_K_LQI_Ki[(i)] = KaHADR_K_G2_LQI_Ki_BLTb[(i)];
            }
            break;

          default:
            /* Merge: '<S249>/Merge6' incorporates:
             *  Constant: '<S316>/Calib'
             */
            for (i = 0; i < 4; i++)
            {
                VaHADR_K_LQI_Ki[(i)] = KaHADR_K_G2_LQI_Ki_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S293>/Multiport Switch6' */

        /* MultiPortSwitch: '<S293>/Multiport Switch7' */
        switch (VeHADR_Cnt_MatrixCase_LQI)
        {
          case 1:
            /* Merge: '<S249>/Merge7' incorporates:
             *  Constant: '<S315>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_CMat[(i)] = KaHADR_K_G2_LQI_CMat_ContactAll[(i)];
            }
            break;

          case 2:
            /* Merge: '<S249>/Merge7' incorporates:
             *  Constant: '<S313>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_CMat[(i)] = KaHADR_K_G2_LQI_CMat_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S249>/Merge7' incorporates:
             *  Constant: '<S314>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_CMat[(i)] = KaHADR_K_G2_LQI_CMat_BLTb[(i)];
            }
            break;

          default:
            /* Merge: '<S249>/Merge7' incorporates:
             *  Constant: '<S312>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_CMat[(i)] = KaHADR_K_G2_LQI_CMat_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S293>/Multiport Switch7' */

        /* Merge: '<S249>/Merge8' incorporates:
         *  Constant: '<S293>/Constant'
         *  SignalConversion generated from: '<S293>/VeHADR_b_G2_DsblMtrA_Dnmc'
         */
        VeHADR_b_DsblMtrA_Dnmc_LQI = false;

        /* End of Outputs for SubSystem: '<S249>/G2' */
    }
    else if (((uint32)HADR_ac_B.TmpSignalConversionAtHSER_e_HADRLeadStat) ==
             CeHSER_e_G3_State)
    {
        /* Outputs for IfAction SubSystem: '<S249>/G3' incorporates:
         *  ActionPort: '<S294>/Action Port'
         */
        /* MultiPortSwitch: '<S294>/Multiport Switch5' */
        switch (VeHADR_Cnt_MatrixCase_LQI)
        {
          case 1:
            /* Merge: '<S249>/Merge5' incorporates:
             *  Constant: '<S335>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_Kp[(i)] = KaHADR_K_G3_LQI_Kp_ContactAll[(i)];
            }
            break;

          case 2:
            /* Merge: '<S249>/Merge5' incorporates:
             *  Constant: '<S333>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_Kp[(i)] = KaHADR_K_G3_LQI_Kp_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S249>/Merge5' incorporates:
             *  Constant: '<S334>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_Kp[(i)] = KaHADR_K_G3_LQI_Kp_BLTb[(i)];
            }
            break;

          default:
            /* Merge: '<S249>/Merge5' incorporates:
             *  Constant: '<S332>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_Kp[(i)] = KaHADR_K_G3_LQI_Kp_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S294>/Multiport Switch5' */

        /* MultiPortSwitch: '<S294>/Multiport Switch6' */
        switch (VeHADR_Cnt_MatrixCase_LQI)
        {
          case 1:
            /* Merge: '<S249>/Merge6' incorporates:
             *  Constant: '<S331>/Calib'
             */
            for (i = 0; i < 4; i++)
            {
                VaHADR_K_LQI_Ki[(i)] = KaHADR_K_G3_LQI_Ki_ContactAll[(i)];
            }
            break;

          case 2:
            /* Merge: '<S249>/Merge6' incorporates:
             *  Constant: '<S329>/Calib'
             */
            for (i = 0; i < 4; i++)
            {
                VaHADR_K_LQI_Ki[(i)] = KaHADR_K_G3_LQI_Ki_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S249>/Merge6' incorporates:
             *  Constant: '<S330>/Calib'
             */
            for (i = 0; i < 4; i++)
            {
                VaHADR_K_LQI_Ki[(i)] = KaHADR_K_G3_LQI_Ki_BLTb[(i)];
            }
            break;

          default:
            /* Merge: '<S249>/Merge6' incorporates:
             *  Constant: '<S328>/Calib'
             */
            for (i = 0; i < 4; i++)
            {
                VaHADR_K_LQI_Ki[(i)] = KaHADR_K_G3_LQI_Ki_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S294>/Multiport Switch6' */

        /* MultiPortSwitch: '<S294>/Multiport Switch7' */
        switch (VeHADR_Cnt_MatrixCase_LQI)
        {
          case 1:
            /* Merge: '<S249>/Merge7' incorporates:
             *  Constant: '<S327>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_CMat[(i)] = KaHADR_K_G3_LQI_CMat_ContactAll[(i)];
            }
            break;

          case 2:
            /* Merge: '<S249>/Merge7' incorporates:
             *  Constant: '<S325>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_CMat[(i)] = KaHADR_K_G3_LQI_CMat_BLTa[(i)];
            }
            break;

          case 3:
            /* Merge: '<S249>/Merge7' incorporates:
             *  Constant: '<S326>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_CMat[(i)] = KaHADR_K_G3_LQI_CMat_BLTb[(i)];
            }
            break;

          default:
            /* Merge: '<S249>/Merge7' incorporates:
             *  Constant: '<S324>/Calib'
             */
            for (i = 0; i < 10; i++)
            {
                VaHADR_K_LQI_CMat[(i)] = KaHADR_K_G3_LQI_CMat_BLAll[(i)];
            }
            break;
        }

        /* End of MultiPortSwitch: '<S294>/Multiport Switch7' */

        /* Merge: '<S249>/Merge8' incorporates:
         *  Constant: '<S294>/Constant'
         *  SignalConversion generated from: '<S294>/VeHADR_b_G3_DsblMtrA_Dnmc'
         */
        VeHADR_b_DsblMtrA_Dnmc_LQI = false;

        /* End of Outputs for SubSystem: '<S249>/G3' */
    }
    else
    {
        if (((uint32)HADR_ac_B.TmpSignalConversionAtHSER_e_HADRLeadStat) ==
                CeHSER_e_G4_State)
        {
            /* Outputs for IfAction SubSystem: '<S249>/G4' incorporates:
             *  ActionPort: '<S295>/Action Port'
             */
            /* MultiPortSwitch: '<S295>/Multiport Switch5' */
            switch (VeHADR_Cnt_MatrixCase_LQI)
            {
              case 1:
                /* Merge: '<S249>/Merge5' incorporates:
                 *  Constant: '<S347>/Calib'
                 */
                for (i = 0; i < 10; i++)
                {
                    VaHADR_K_LQI_Kp[(i)] = KaHADR_K_G4_LQI_Kp_ContactAll[(i)];
                }
                break;

              case 2:
                /* Merge: '<S249>/Merge5' incorporates:
                 *  Constant: '<S345>/Calib'
                 */
                for (i = 0; i < 10; i++)
                {
                    VaHADR_K_LQI_Kp[(i)] = KaHADR_K_G4_LQI_Kp_BLTa[(i)];
                }
                break;

              case 3:
                /* Merge: '<S249>/Merge5' incorporates:
                 *  Constant: '<S346>/Calib'
                 */
                for (i = 0; i < 10; i++)
                {
                    VaHADR_K_LQI_Kp[(i)] = KaHADR_K_G4_LQI_Kp_BLTb[(i)];
                }
                break;

              default:
                /* Merge: '<S249>/Merge5' incorporates:
                 *  Constant: '<S344>/Calib'
                 */
                for (i = 0; i < 10; i++)
                {
                    VaHADR_K_LQI_Kp[(i)] = KaHADR_K_G4_LQI_Kp_BLAll[(i)];
                }
                break;
            }

            /* End of MultiPortSwitch: '<S295>/Multiport Switch5' */

            /* MultiPortSwitch: '<S295>/Multiport Switch6' */
            switch (VeHADR_Cnt_MatrixCase_LQI)
            {
              case 1:
                /* Merge: '<S249>/Merge6' incorporates:
                 *  Constant: '<S343>/Calib'
                 */
                for (i = 0; i < 4; i++)
                {
                    VaHADR_K_LQI_Ki[(i)] = KaHADR_K_G4_LQI_Ki_ContactAll[(i)];
                }
                break;

              case 2:
                /* Merge: '<S249>/Merge6' incorporates:
                 *  Constant: '<S341>/Calib'
                 */
                for (i = 0; i < 4; i++)
                {
                    VaHADR_K_LQI_Ki[(i)] = KaHADR_K_G4_LQI_Ki_BLTa[(i)];
                }
                break;

              case 3:
                /* Merge: '<S249>/Merge6' incorporates:
                 *  Constant: '<S342>/Calib'
                 */
                for (i = 0; i < 4; i++)
                {
                    VaHADR_K_LQI_Ki[(i)] = KaHADR_K_G4_LQI_Ki_BLTb[(i)];
                }
                break;

              default:
                /* Merge: '<S249>/Merge6' incorporates:
                 *  Constant: '<S340>/Calib'
                 */
                for (i = 0; i < 4; i++)
                {
                    VaHADR_K_LQI_Ki[(i)] = KaHADR_K_G4_LQI_Ki_BLAll[(i)];
                }
                break;
            }

            /* End of MultiPortSwitch: '<S295>/Multiport Switch6' */

            /* MultiPortSwitch: '<S295>/Multiport Switch7' */
            switch (VeHADR_Cnt_MatrixCase_LQI)
            {
              case 1:
                /* Merge: '<S249>/Merge7' incorporates:
                 *  Constant: '<S339>/Calib'
                 */
                for (i = 0; i < 10; i++)
                {
                    VaHADR_K_LQI_CMat[(i)] = KaHADR_K_G4_LQI_CMat_ContactAll[(i)];
                }
                break;

              case 2:
                /* Merge: '<S249>/Merge7' incorporates:
                 *  Constant: '<S337>/Calib'
                 */
                for (i = 0; i < 10; i++)
                {
                    VaHADR_K_LQI_CMat[(i)] = KaHADR_K_G4_LQI_CMat_BLTa[(i)];
                }
                break;

              case 3:
                /* Merge: '<S249>/Merge7' incorporates:
                 *  Constant: '<S338>/Calib'
                 */
                for (i = 0; i < 10; i++)
                {
                    VaHADR_K_LQI_CMat[(i)] = KaHADR_K_G4_LQI_CMat_BLTb[(i)];
                }
                break;

              default:
                /* Merge: '<S249>/Merge7' incorporates:
                 *  Constant: '<S336>/Calib'
                 */
                for (i = 0; i < 10; i++)
                {
                    VaHADR_K_LQI_CMat[(i)] = KaHADR_K_G4_LQI_CMat_BLAll[(i)];
                }
                break;
            }

            /* End of MultiPortSwitch: '<S295>/Multiport Switch7' */

            /* Merge: '<S249>/Merge8' incorporates:
             *  Constant: '<S295>/Constant'
             *  SignalConversion generated from: '<S295>/VeHADR_b_G4_DsblMtrA_Dnmc'
             */
            VeHADR_b_DsblMtrA_Dnmc_LQI = false;

            /* End of Outputs for SubSystem: '<S249>/G4' */
        }
    }

    /* End of If: '<S249>/If' */
}

#endif

/* Model step function for TID1 */
FUNC(void, HADR_CODE) HADR_FastTEF(void) /* Explicit Task: FastTEF */
{

#if Rte_SysCon_Variant_HADR_LashCtrl

    float32 tmpRead;

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

    float32 tmpRead_0;

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

    float32 tmpRead_1;

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

    float32 tmpRead_2;

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

    float32 tmpRead_3;

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

    float32 tmpRead_4;

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

    float32 tmpRead_5;

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl || (Rte_SysCon_Variant_HADR_SinWave && Rte_SysCon_Variant_HADR_SumAndLimits)

    boolean rtb_Logical_m;

#endif

#if Rte_SysCon_Variant_HADR_SinWave && Rte_SysCon_Variant_HADR_SumAndLimits

    float32 rtb_Summation1;

#endif

#if Rte_SysCon_Variant_HADR_SinWave && Rte_SysCon_Variant_HADR_SumAndLimits

    float32 rtb_Switch7;

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl || (Rte_SysCon_Variant_HADR_SinWave && Rte_SysCon_Variant_HADR_SumAndLimits)

    float32 rtb_Switch_k[2];

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

    float32 rtb_TmpSignalConversionAtMtrBOLOutport1;

#endif

#if Rte_SysCon_Variant_HADR_SinWave && Rte_SysCon_Variant_HADR_SumAndLimits

    boolean rtb_OR1_m3;

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

    float32 rtb_TmpSignalConversionAtCSVR_n_WhlSpdLH;

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

    float32 rtb_TmpSignalConversionAtCSVR_n_WhlSpdRH;

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl || (Rte_SysCon_Variant_HADR_SinWave && Rte_SysCon_Variant_HADR_SumAndLimits)

    float32 rtb_TmpSignalConversionAtCSVR_n_WhlSpd_o;

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl || (Rte_SysCon_Variant_HADR_SinWave && Rte_SysCon_Variant_HADR_SumAndLimits)

    float32 rtb_TmpSignalConversionAtCSVR_n_WhlSpd_n;

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

    float32 rtb_TmpSignalConversionAtRGNR_M_RgnBrkOu;

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

    float32 rtb_TmpSignalConversionAtRGNR_M_RgnBrk_m;

#endif

#if Rte_SysCon_Variant_HADR_SinWave && Rte_SysCon_Variant_HADR_SumAndLimits

    boolean rtb_OR1_p;

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

    float32 rtb_TmpSignalConversionAtCSVR_v_VehSpdSi;

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

    uint16 rtb_UnitDelay_b;

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

    uint8 rtb_UnitDelay2_n;

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

    boolean rtb_LogicalOperator2_n;

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

    boolean rtb_Logical3;

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

    boolean rtb_LogicalOperator5;

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

    boolean rtb_Logical4;

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

    float32 rtb_TmpSignalConversionAtProduct5Inport2[5];

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

    float32 rtb_TmpSignalConversionAtProduct4Inport2[5];

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

    float32 rtb_Switch_l[2];

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

    float32 tmp[2];

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

    float32 rtb_Switch_b[2];

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

    boolean rtb_Logical13_0[2];

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

    float32 VeHADR_M_MtrAOL_AD[2];

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

    sint32 i;

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

    sint32 i_0;

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

    float32 rtb_Switch1_j_idx_0;

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

    float32 rtb_Switch1_j_idx_1;

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

    float32 rtb_Switch1_j_idx_2;

#endif

#if Rte_SysCon_Variant_HADR_LashCtrl

    sint32 VaHADR_M_LQIBL_Kp_tmp;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/HADR_FastTEF'
     */
    /* SignalConversion generated from: '<S1>/HSER_e_HADRLeadState' incorporates:
     *  Inport: '<Root>/VeHSER_e_HADRLeadState'
     *  SignalConversion generated from: '<S1>/CSVR_n_WhlSpdLHF'
     *  SignalConversion generated from: '<S1>/CSVR_n_WhlSpdLHR'
     *  SignalConversion generated from: '<S1>/CSVR_n_WhlSpdRHF'
     *  SignalConversion generated from: '<S1>/CSVR_n_WhlSpdRHR'
     *  SignalConversion generated from: '<S1>/CSVR_v_VehSpdSigned'
     *  SignalConversion generated from: '<S1>/MtrBOL'
     *  SignalConversion generated from: '<S1>/RGNR_M_RgnBrkOutTrq_Frnt'
     *  SignalConversion generated from: '<S1>/RGNR_M_RgnBrkOutTrq_Rear'
     */
#if Rte_SysCon_Variant_HADR_LashCtrl

    (void)Rte_Read_VeHSER_e_HADRLeadState_Value
        (&HADR_ac_B.TmpSignalConversionAtHSER_e_HADRLeadStat);

    /* SignalConversion generated from: '<S1>/CSVR_n_WhlSpdLHF' incorporates:
     *  Inport: '<Root>/VeCSVR_n_WhlSpdLHF'
     *  Inport: '<Root>/VeHSER_e_HADRLeadState'
     */
    (void)Rte_Read_VeCSVR_n_WhlSpdLHF_Value
        (&rtb_TmpSignalConversionAtCSVR_n_WhlSpdLH);

    /* SignalConversion generated from: '<S1>/CSVR_n_WhlSpdRHF' incorporates:
     *  Inport: '<Root>/VeCSVR_n_WhlSpdRHF'
     */
    (void)Rte_Read_VeCSVR_n_WhlSpdRHF_Value
        (&rtb_TmpSignalConversionAtCSVR_n_WhlSpdRH);

    /* SignalConversion generated from: '<S1>/CSVR_n_WhlSpdLHR' incorporates:
     *  Inport: '<Root>/VeCSVR_n_WhlSpdLHR'
     */
    (void)Rte_Read_VeCSVR_n_WhlSpdLHR_Value
        (&rtb_TmpSignalConversionAtCSVR_n_WhlSpd_o);

    /* SignalConversion generated from: '<S1>/CSVR_n_WhlSpdRHR' incorporates:
     *  Inport: '<Root>/VeCSVR_n_WhlSpdRHR'
     */
    (void)Rte_Read_VeCSVR_n_WhlSpdRHR_Value
        (&rtb_TmpSignalConversionAtCSVR_n_WhlSpd_n);

    /* SignalConversion generated from: '<S1>/CSVR_v_VehSpdSigned' incorporates:
     *  Inport: '<Root>/VeCSVR_v_VehSpdSigned'
     */
    (void)Rte_Read_VeCSVR_v_VehSpdSigned_Value
        (&rtb_TmpSignalConversionAtCSVR_v_VehSpdSi);

    /* SignalConversion generated from: '<S1>/MtrBOL' incorporates:
     *  Inport: '<Root>/VeHTDR_M_MtrB_OptTaTb_wRamp'
     */
    (void)Rte_Read_VeHTDR_M_MtrB_OptTaTb_wRamp_Value
        (&rtb_TmpSignalConversionAtMtrBOLOutport1);

    /* SignalConversion generated from: '<S1>/RGNR_M_RgnBrkOutTrq_Frnt' incorporates:
     *  Inport: '<Root>/VeRGNR_M_RgnBrkOutTrq_Frnt'
     */
    (void)Rte_Read_VeRGNR_M_RgnBrkOutTrq_Frnt_Value
        (&rtb_TmpSignalConversionAtRGNR_M_RgnBrkOu);

    /* SignalConversion generated from: '<S1>/RGNR_M_RgnBrkOutTrq_Rear' incorporates:
     *  Inport: '<Root>/VeRGNR_M_RgnBrkOutTrq_Rear'
     */
    (void)Rte_Read_VeRGNR_M_RgnBrkOutTrq_Rear_Value
        (&rtb_TmpSignalConversionAtRGNR_M_RgnBrk_m);

#endif

    /* End of SignalConversion generated from: '<S1>/HSER_e_HADRLeadState' */
#if Rte_SysCon_Variant_HADR_SumAndLimits

    /* S-Function (fcgen): '<S1>/FcnCallGen' */
    /* Outputs for Function Call SubSystem: '<S1>/HADR_SinGen' */
    /* Outputs for Atomic SubSystem: '<S4>/HADR_SinGen' */
#if Rte_SysCon_Variant_HADR_SinWave

    /* Outputs for Atomic SubSystem: '<S426>/HADR_SinGen' */
    /* Product: '<S438>/Product' incorporates:
     *  Constant: '<S455>/Calib'
     *  Constant: '<S456>/Calib'
     */
    rtb_TmpSignalConversionAtCSVR_n_WhlSpd_o = HeHADR_Cnt_NumPtsOfBaseFreq *
        HeHADR_t_FastTEF_dT;

    /* Outputs for Atomic SubSystem: '<S438>/ProtectedDivision' */
    /* Switch: '<S460>/Switch1' incorporates:
     *  Constant: '<S459>/Calib'
     *  Constant: '<S460>/Constant Value'
     *  Constant: '<S460>/Constant Value1'
     *  Constant: '<S460>/Constant Value2'
     *  Constant: '<S460>/Constant Value3'
     *  Logic: '<S460>/AND'
     *  RelationalOperator: '<S460>/Greater Than or Equal '
     *  RelationalOperator: '<S460>/Greater Than or Equal 1'
     *  RelationalOperator: '<S460>/Not Equal'
     *  RelationalOperator: '<S460>/Not Equal1'
     *  Switch: '<S460>/Switch2'
     *  Switch: '<S460>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtCSVR_n_WhlSpd_o != 0.0F) &&
            (KeHADR_t_SinPeriod != 0.0F))
    {
        /* Switch: '<S460>/Switch1' incorporates:
         *  Product: '<S460>/Division'
         */
        VeHADR_M_Mtr_OffsetStart = rtb_TmpSignalConversionAtCSVR_n_WhlSpd_o /
            KeHADR_t_SinPeriod;
    }
    else if (rtb_TmpSignalConversionAtCSVR_n_WhlSpd_o > 0.0F)
    {
        /* Switch: '<S460>/Switch2' incorporates:
         *  Constant: '<S460>/MAXFLOAT'
         *  Switch: '<S460>/Switch1'
         */
        VeHADR_M_Mtr_OffsetStart = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtCSVR_n_WhlSpd_o < 0.0F)
    {
        /* Switch: '<S460>/Switch3' incorporates:
         *  Constant: '<S460>/MINFLOAT'
         *  Switch: '<S460>/Switch1'
         *  Switch: '<S460>/Switch2'
         */
        VeHADR_M_Mtr_OffsetStart = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S460>/Switch1' incorporates:
         *  Constant: '<S460>/Constant Value4'
         *  Switch: '<S460>/Switch2'
         *  Switch: '<S460>/Switch3'
         */
        VeHADR_M_Mtr_OffsetStart = 0.0F;
    }

    /* End of Switch: '<S460>/Switch1' */
    /* End of Outputs for SubSystem: '<S438>/ProtectedDivision' */

    /* Inport: '<Root>/VeADCR_b_WiggleRequest' */
    (void)Rte_Read_VeADCR_b_WiggleRequest_Value(&rtb_Logical_m);

    /* Logic: '<S438>/Logical' incorporates:
     *  Constant: '<S438>/Constant Value10'
     *  Constant: '<S457>/Calib'
     *  RelationalOperator: '<S438>/Equal4'
     */
    rtb_Logical_m = (rtb_Logical_m && (KeHADR_Cnt_SinGenEnbl == 43690.0F));

    /* Outputs for Atomic SubSystem: '<S438>/TimerRetriggerResetTriggerEnabled' */
    /* Outputs for Atomic SubSystem: '<S461>/EdgeRising_F2T' */
    /* Logic: '<S462>/OR1' incorporates:
     *  UnitDelay: '<S462>/Unit Delay'
     */
    rtb_OR1_p = !HADR_ac_DW.UnitDelay_DSTATE_o;

    /* Update for UnitDelay: '<S462>/Unit Delay' */
    HADR_ac_DW.UnitDelay_DSTATE_o = rtb_Logical_m;

    /* Switch: '<S461>/Switch1' incorporates:
     *  Constant: '<S456>/Calib'
     *  Constant: '<S458>/Calib'
     *  Constant: '<S459>/Calib'
     *  Constant: '<S461>/Constant Value4'
     *  Logic: '<S462>/AND'
     *  MinMax: '<S461>/Maximum'
     *  Product: '<S438>/Product1'
     *  Sum: '<S461>/Subtraction'
     *  UnitDelay: '<S461>/Unit Delay'
     */
    if (rtb_Logical_m && rtb_OR1_p)
    {
        HADR_ac_DW.UnitDelay_DSTATE_lw = KeHADR_t_SinPeriod *
            KeHADR_Cnt_SinGenLoop;
    }
    else
    {
        HADR_ac_DW.UnitDelay_DSTATE_lw = fmaxf(HADR_ac_DW.UnitDelay_DSTATE_lw -
            HeHADR_t_FastTEF_dT, 0.0F);
    }

    /* End of Switch: '<S461>/Switch1' */
    /* End of Outputs for SubSystem: '<S461>/EdgeRising_F2T' */

    /* Switch: '<S438>/Switch' incorporates:
     *  Constant: '<S461>/Constant Value2'
     *  RelationalOperator: '<S461>/Greater  Than1'
     *  UnitDelay: '<S461>/Unit Delay'
     */
    VeHADR_b_Mtr_SinEnable = (rtb_Logical_m && (HADR_ac_DW.UnitDelay_DSTATE_lw >
        0.0F));

    /* End of Outputs for SubSystem: '<S438>/TimerRetriggerResetTriggerEnabled' */

    /* Outputs for Atomic SubSystem: '<S429>/EdgeRising3' */
    /* UnitDelay: '<S429>/Unit Delay3' incorporates:
     *  UnitDelay: '<S441>/Unit Delay'
     */
    rtb_Logical_m = HADR_ac_DW.UnitDelay_DSTATE_b0;

    /* Update for UnitDelay: '<S441>/Unit Delay' */
    HADR_ac_DW.UnitDelay_DSTATE_b0 = VeHADR_b_Mtr_SinEnable;

    /* Outputs for Atomic SubSystem: '<S429>/SignalLatchOffWithReset1' */
    /* Logic: '<S446>/OR2' incorporates:
     *  Constant: '<S434>/Calib'
     *  Logic: '<S441>/AND'
     *  Logic: '<S441>/OR1'
     *  Logic: '<S446>/OR'
     *  RelationalOperator: '<S429>/Greater Than or Equal 2'
     *  UnitDelay: '<S429>/Unit Delay'
     *  UnitDelay: '<S446>/Unit Delay'
     */
    HADR_ac_DW.UnitDelay_DSTATE_mu = ((HADR_ac_DW.UnitDelay_DSTATE_at <=
        KeHADR_Cnt_TblOfstStop) && (((VeHADR_b_Mtr_SinEnable) && (!rtb_Logical_m))
        || (HADR_ac_DW.UnitDelay_DSTATE_mu)));

    /* End of Outputs for SubSystem: '<S429>/SignalLatchOffWithReset1' */
    /* End of Outputs for SubSystem: '<S429>/EdgeRising3' */

    /* Logic: '<S429>/AND1' incorporates:
     *  UnitDelay: '<S446>/Unit Delay'
     */
    rtb_Logical_m = ((VeHADR_b_Mtr_SinEnable) && (HADR_ac_DW.UnitDelay_DSTATE_mu));

    /* Outputs for Atomic SubSystem: '<S429>/EdgeRising2' */
    /* Logic: '<S440>/OR1' incorporates:
     *  UnitDelay: '<S440>/Unit Delay'
     */
    rtb_OR1_p = !HADR_ac_DW.UnitDelay_DSTATE_oa;

    /* Update for UnitDelay: '<S440>/Unit Delay' */
    HADR_ac_DW.UnitDelay_DSTATE_oa = rtb_Logical_m;

    /* End of Outputs for SubSystem: '<S429>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S429>/EdgeRising1' */
    /* Logic: '<S439>/OR1' incorporates:
     *  UnitDelay: '<S439>/Unit Delay'
     */
    rtb_OR1_m3 = !HADR_ac_DW.UnitDelay_DSTATE_me;

    /* Update for UnitDelay: '<S439>/Unit Delay' */
    HADR_ac_DW.UnitDelay_DSTATE_me = rtb_Logical_m;

    /* Switch: '<S429>/Switch4' incorporates:
     *  Logic: '<S439>/AND'
     *  UnitDelay: '<S429>/Unit Delay6'
     */
    rtb_OR1_m3 = ((rtb_Logical_m && rtb_OR1_m3) || (HADR_ac_DW.UnitDelay6_DSTATE));

    /* End of Outputs for SubSystem: '<S429>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S429>/EdgeRising2' */
    /* Switch: '<S429>/Switch8' incorporates:
     *  Constant: '<S429>/Constant Value16'
     *  Logic: '<S440>/AND'
     *  Switch: '<S429>/Switch'
     */
    if (rtb_Logical_m && rtb_OR1_p)
    {
        HADR_ac_DW.UnitDelay7_DSTATE_c = VeHADR_M_Mtr_OffsetStart;
    }
    else if (rtb_Logical_m)
    {
        /* Switch: '<S429>/Switch3' incorporates:
         *  Constant: '<S429>/Constant Value'
         *  Switch: '<S429>/Switch'
         */
        if (rtb_OR1_m3)
        {
            /* Switch: '<S429>/Switch11' incorporates:
             *  Constant: '<S433>/Calib'
             *  Constant: '<S436>/Calib'
             */
            if (KeHADR_b_UseFixedSinInc)
            {
                HADR_ac_DW.UnitDelay7_DSTATE_c = KeHADR_Cnt_TblOfstInc;
            }

            /* End of Switch: '<S429>/Switch11' */
        }
        else
        {
            HADR_ac_DW.UnitDelay7_DSTATE_c = 0.0F;
        }

        /* End of Switch: '<S429>/Switch3' */
    }
    else
    {
        HADR_ac_DW.UnitDelay7_DSTATE_c = 0.0F;
    }

    /* End of Outputs for SubSystem: '<S429>/EdgeRising2' */

    /* Sum: '<S429>/Summation' incorporates:
     *  UnitDelay: '<S429>/Unit Delay'
     */
    HADR_ac_DW.UnitDelay_DSTATE_at += HADR_ac_DW.UnitDelay7_DSTATE_c;

    /* Switch: '<S429>/Switch7' incorporates:
     *  Logic: '<S429>/OR'
     */
    if (rtb_Logical_m || rtb_OR1_m3)
    {
        /* Switch: '<S429>/Switch7' incorporates:
         *  UnitDelay: '<S429>/Unit Delay4'
         */
        rtb_Switch7 = HADR_ac_DW.UnitDelay4_DSTATE_p;
    }
    else
    {
        /* Switch: '<S429>/Switch7' incorporates:
         *  Constant: '<S429>/Constant Value15'
         */
        rtb_Switch7 = 0.0F;
    }

    /* End of Switch: '<S429>/Switch7' */

    /* Sum: '<S429>/Summation3' */
    HADR_ac_DW.UnitDelay4_DSTATE_p = HADR_ac_DW.UnitDelay_DSTATE_at +
        rtb_Switch7;

    /* Switch: '<S429>/Switch6' incorporates:
     *  Constant: '<S429>/Constant Value10'
     *  Constant: '<S430>/Calib'
     *  RelationalOperator: '<S429>/Greater  Than'
     *  Sum: '<S429>/Summation4'
     *  Sum: '<S429>/Summation5'
     *  UnitDelay: '<S429>/Unit Delay4'
     */
    if (HADR_ac_DW.UnitDelay4_DSTATE_p > (HeHADR_Cnt_NumPtsOfBaseFreq - 1.0F))
    {
        HADR_ac_DW.UnitDelay4_DSTATE_p -= HeHADR_Cnt_NumPtsOfBaseFreq - 1.0F;
    }

    /* End of Switch: '<S429>/Switch6' */

    /* Sum: '<S429>/Summation2' incorporates:
     *  UnitDelay: '<S429>/Unit Delay2'
     *  UnitDelay: '<S429>/Unit Delay3'
     */
    rtb_TmpSignalConversionAtCSVR_n_WhlSpd_o = ((float32)
        (HADR_ac_DW.UnitDelay3_DSTATE_f ? 1.0F : 0.0F)) +
        HADR_ac_DW.UnitDelay2_DSTATE_h;

    /* Outputs for Atomic SubSystem: '<S429>/ProtectedDivision1' */
    /* Switch: '<S444>/Switch1' incorporates:
     *  Constant: '<S431>/Calib'
     *  Constant: '<S444>/Constant Value'
     *  Constant: '<S444>/Constant Value1'
     *  Constant: '<S444>/Constant Value2'
     *  Constant: '<S444>/Constant Value3'
     *  Logic: '<S444>/AND'
     *  RelationalOperator: '<S444>/Greater Than or Equal '
     *  RelationalOperator: '<S444>/Greater Than or Equal 1'
     *  RelationalOperator: '<S444>/Not Equal'
     *  RelationalOperator: '<S444>/Not Equal1'
     *  Switch: '<S444>/Switch2'
     *  Switch: '<S444>/Switch3'
     */
    if ((HeHADR_Cnt_TwiceNumPtsBaseFreq != 0.0F) &&
            (HADR_ac_DW.UnitDelay_DSTATE_at != 0.0F))
    {
        /* Switch: '<S444>/Switch1' incorporates:
         *  Product: '<S444>/Division'
         */
        rtb_TmpSignalConversionAtCSVR_n_WhlSpd_n =
            HeHADR_Cnt_TwiceNumPtsBaseFreq / HADR_ac_DW.UnitDelay_DSTATE_at;
    }
    else if (HeHADR_Cnt_TwiceNumPtsBaseFreq > 0.0F)
    {
        /* Switch: '<S444>/Switch2' incorporates:
         *  Constant: '<S444>/MAXFLOAT'
         *  Switch: '<S444>/Switch1'
         */
        rtb_TmpSignalConversionAtCSVR_n_WhlSpd_n = 3.402823466E+38F;
    }
    else if (HeHADR_Cnt_TwiceNumPtsBaseFreq < 0.0F)
    {
        /* Switch: '<S444>/Switch3' incorporates:
         *  Constant: '<S444>/MINFLOAT'
         *  Switch: '<S444>/Switch1'
         *  Switch: '<S444>/Switch2'
         */
        rtb_TmpSignalConversionAtCSVR_n_WhlSpd_n = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S444>/Switch1' incorporates:
         *  Constant: '<S444>/Constant Value4'
         *  Switch: '<S444>/Switch2'
         *  Switch: '<S444>/Switch3'
         */
        rtb_TmpSignalConversionAtCSVR_n_WhlSpd_n = 0.0F;
    }

    /* End of Switch: '<S444>/Switch1' */
    /* End of Outputs for SubSystem: '<S429>/ProtectedDivision1' */

    /* Sum: '<S429>/Summation1' incorporates:
     *  UnitDelay: '<S429>/Unit Delay1'
     *  UnitDelay: '<S429>/Unit Delay3'
     */
    rtb_Summation1 = ((float32)(HADR_ac_DW.UnitDelay3_DSTATE_f ? 1.0F : 0.0F)) +
        HADR_ac_DW.UnitDelay1_DSTATE_p;

    /* Gain: '<S429>/Gain' */
    VeHADR_f_MtrSinFreq = 0.25F * HADR_ac_DW.UnitDelay_DSTATE_at;

    /* Product: '<S429>/Multiplication1' incorporates:
     *  Constant: '<S435>/Calib'
     *  UnitDelay: '<S429>/Unit Delay1'
     */
    HADR_ac_DW.UnitDelay1_DSTATE_p = HADR_ac_DW.UnitDelay_DSTATE_at *
        KeHADR_Pct_PctChngInFreq;

    /* Switch: '<S450>/Switch1' incorporates:
     *  Rounding: '<S429>/Round'
     *  UnitDelay: '<S429>/Unit Delay1'
     */
    VeHADR_M_Mtr_SinBfrLmt = roundf(HADR_ac_DW.UnitDelay1_DSTATE_p);

    /* Product: '<S429>/Multiplication3' incorporates:
     *  Constant: '<S442>/Calib'
     *  Constant: '<S443>/Calib'
     *  Selector: '<S429>/Selector'
     */
    VeHADR_M_Mtr_SinBfrThd = HaHADR_s_SinWave[(sint32)rtb_Switch7] *
        KeHADR_M_Mtr_SinMag;

    /* Logic: '<S429>/NOT' */
    HADR_ac_DW.UnitDelay3_DSTATE_f = !rtb_OR1_m3;

    /* Switch: '<S429>/Switch13' incorporates:
     *  Constant: '<S429>/Constant Value17'
     *  RelationalOperator: '<S429>/Greater  Than1'
     *  Sum: '<S429>/Subtraction1'
     *  UnitDelay: '<S429>/Unit Delay1'
     */
    HADR_ac_DW.UnitDelay1_DSTATE_p = (float32)(((HADR_ac_DW.UnitDelay1_DSTATE_p
        - VeHADR_M_Mtr_SinBfrLmt) > 0.0F) ? 1 : 0);

    /* Switch: '<S429>/Switch8' incorporates:
     *  Sum: '<S429>/Summation7'
     *  UnitDelay: '<S429>/Unit Delay1'
     *  UnitDelay: '<S429>/Unit Delay7'
     */
    HADR_ac_DW.UnitDelay7_DSTATE_c = VeHADR_M_Mtr_SinBfrLmt +
        HADR_ac_DW.UnitDelay1_DSTATE_p;

    /* Switch: '<S429>/Switch1' incorporates:
     *  Constant: '<S429>/Constant Value2'
     *  UnitDelay: '<S429>/Unit Delay'
     */
    if (!rtb_Logical_m)
    {
        HADR_ac_DW.UnitDelay_DSTATE_at = 0.0F;
    }

    /* End of Switch: '<S429>/Switch1' */

    /* Switch: '<S429>/Switch2' incorporates:
     *  Constant: '<S429>/Constant Value3'
     *  Constant: '<S429>/Constant Value4'
     *  Switch: '<S429>/Switch9'
     *  UnitDelay: '<S429>/Unit Delay1'
     *  UnitDelay: '<S429>/Unit Delay2'
     */
    if (HADR_ac_DW.UnitDelay3_DSTATE_f)
    {
        HADR_ac_DW.UnitDelay1_DSTATE_p = rtb_Summation1;
        HADR_ac_DW.UnitDelay2_DSTATE_h =
            rtb_TmpSignalConversionAtCSVR_n_WhlSpd_o;
    }
    else
    {
        HADR_ac_DW.UnitDelay1_DSTATE_p = 0.0F;
        HADR_ac_DW.UnitDelay2_DSTATE_h = 0.0F;
    }

    /* End of Switch: '<S429>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S437>/Limiter' */
    /* Switch: '<S450>/Switch1' incorporates:
     *  Constant: '<S448>/Calib'
     *  RelationalOperator: '<S450>/Relational Operator'
     */
    if (KeHADR_M_Mtr_SinMaxThd < VeHADR_M_Mtr_SinBfrThd)
    {
        /* Switch: '<S450>/Switch1' */
        VeHADR_M_Mtr_SinBfrLmt = KeHADR_M_Mtr_SinMaxThd;
    }
    else
    {
        /* Switch: '<S450>/Switch1' */
        VeHADR_M_Mtr_SinBfrLmt = VeHADR_M_Mtr_SinBfrThd;
    }

    /* End of Switch: '<S450>/Switch1' */

    /* Switch: '<S450>/Switch' incorporates:
     *  Constant: '<S449>/Calib'
     *  RelationalOperator: '<S450>/Relational Operator1'
     */
    if (VeHADR_M_Mtr_SinBfrLmt <= KeHADR_M_Mtr_SinMinThd)
    {
        /* Switch: '<S450>/Switch' */
        VeHADR_M_Mtr_SinBfrLmt = KeHADR_M_Mtr_SinMinThd;
    }

    /* End of Switch: '<S450>/Switch' */
    /* End of Outputs for SubSystem: '<S437>/Limiter' */

    /* Switch: '<S437>/Switch' incorporates:
     *  Constant: '<S437>/Constant Value3'
     *  Constant: '<S447>/Calib'
     *  RelationalOperator: '<S452>/Relational Operator'
     *  Switch: '<S452>/Switch1'
     */
    if (HeHADR_b_REEV_System)
    {
        /* Outputs for Atomic SubSystem: '<S437>/Limiter1' */
        /* Switch: '<S451>/Switch1' incorporates:
         *  Constant: '<S437>/Constant Value1'
         *  RelationalOperator: '<S451>/Relational Operator'
         */
        if (5.0F < VeHADR_M_Mtr_SinBfrLmt)
        {
            /* Switch: '<S451>/Switch1' */
            rtb_Switch7 = 5.0F;
        }
        else
        {
            /* Switch: '<S451>/Switch1' */
            rtb_Switch7 = VeHADR_M_Mtr_SinBfrLmt;
        }

        /* End of Switch: '<S451>/Switch1' */
        /* End of Outputs for SubSystem: '<S437>/Limiter1' */

        /* Switch: '<S437>/Switch' incorporates:
         *  Constant: '<S437>/Constant Value8'
         */
        rtb_Switch_k[0] = 0.0F;

        /* Outputs for Atomic SubSystem: '<S437>/Limiter1' */
        /* Switch: '<S451>/Switch' incorporates:
         *  Constant: '<S437>/Constant Value2'
         *  RelationalOperator: '<S451>/Relational Operator1'
         */
        if (rtb_Switch7 > -5.0F)
        {
            /* Switch: '<S437>/Switch' */
            rtb_Switch_k[1] = rtb_Switch7;
        }
        else
        {
            /* Switch: '<S437>/Switch' */
            rtb_Switch_k[1] = -5.0F;
        }

        /* End of Switch: '<S451>/Switch' */
        /* End of Outputs for SubSystem: '<S437>/Limiter1' */
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S437>/Limiter2' */
        if (5.0F < VeHADR_M_Mtr_SinBfrLmt)
        {
            /* Switch: '<S452>/Switch1' incorporates:
             *  Constant: '<S437>/Constant Value3'
             */
            rtb_Switch7 = 5.0F;
        }
        else
        {
            /* Switch: '<S452>/Switch1' */
            rtb_Switch7 = VeHADR_M_Mtr_SinBfrLmt;
        }

        /* Switch: '<S452>/Switch' incorporates:
         *  Constant: '<S437>/Constant Value4'
         *  RelationalOperator: '<S452>/Relational Operator1'
         */
        if (rtb_Switch7 > -5.0F)
        {
            /* Switch: '<S437>/Switch' */
            rtb_Switch_k[0] = rtb_Switch7;
        }
        else
        {
            /* Switch: '<S437>/Switch' */
            rtb_Switch_k[0] = -5.0F;
        }

        /* End of Switch: '<S452>/Switch' */
        /* End of Outputs for SubSystem: '<S437>/Limiter2' */

        /* Switch: '<S437>/Switch' incorporates:
         *  Constant: '<S437>/Constant Value9'
         */
        rtb_Switch_k[1] = 0.0F;
    }

    /* End of Switch: '<S437>/Switch' */

    /* VariantMerge generated from: '<S426>/VeHADR_M_MtrA_Sin' incorporates:
     *  Gain: '<S453>/Gain'
     */
    VeHADR_M_MtrA_Sin = rtb_Switch_k[0];

    /* VariantMerge generated from: '<S426>/VeHADR_M_MtrC_Sin' incorporates:
     *  Gain: '<S454>/Gain'
     */
    VeHADR_M_MtrC_Sin = rtb_Switch_k[1];

    /* Update for UnitDelay: '<S429>/Unit Delay6' incorporates:
     *  Constant: '<S429>/Constant Value10'
     *  Constant: '<S429>/Constant Value12'
     *  Constant: '<S430>/Calib'
     *  Constant: '<S432>/Calib'
     *  Logic: '<S429>/AND'
     *  RelationalOperator: '<S429>/Equal'
     *  RelationalOperator: '<S429>/Greater Than or Equal 1'
     *  RelationalOperator: '<S429>/Greater Than or Equal 3'
     *  Sum: '<S429>/Subtraction'
     *  Sum: '<S429>/Summation5'
     *  UnitDelay: '<S429>/Unit Delay4'
     */
    HADR_ac_DW.UnitDelay6_DSTATE = ((((HeHADR_Cnt_NumPtsOfBaseFreq - 1.0F) ==
        HADR_ac_DW.UnitDelay4_DSTATE_p) &&
        (rtb_TmpSignalConversionAtCSVR_n_WhlSpd_o >= KeHADR_Cnt_NumPtsPerFreq)) &&
        ((rtb_TmpSignalConversionAtCSVR_n_WhlSpd_n - rtb_Summation1) <= 0.0F));

    /* End of Outputs for SubSystem: '<S426>/HADR_SinGen' */
    /* End of Outputs for SubSystem: '<S1>/HADR_SinGen' */
#else

    /* Outputs for Atomic SubSystem: '<S426>/HADR_SinGen_NF' */
    /* VariantMerge generated from: '<S426>/VeHADR_M_MtrA_Sin' incorporates:
     *  Constant: '<S428>/Constant1'
     */
    VeHADR_M_MtrA_Sin = 0.0F;

    /* VariantMerge generated from: '<S426>/VeHADR_M_MtrC_Sin' incorporates:
     *  Constant: '<S428>/Constant2'
     */
    VeHADR_M_MtrC_Sin = 0.0F;

    /* End of Outputs for SubSystem: '<S426>/HADR_SinGen_NF' */
#endif

    /* End of Outputs for SubSystem: '<S4>/HADR_SinGen' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
#endif

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/HADR_LashCtrl'
     */
    /* Outputs for Atomic SubSystem: '<S3>/HADR_LashCtrl' */
#if Rte_SysCon_Variant_HADR_LashCtrl

    /* Outputs for Atomic SubSystem: '<S6>/HADR_LashCtrl' */
    /* Inport: '<Root>/VeHTDR_M_OutTorqReqModHH' */
    (void)Rte_Read_VeHTDR_M_OutTorqReqModHH_Value(&tmpRead_4);

    /* If: '<S9>/If' incorporates:
     *  Constant: '<S25>/Calib'
     */
    if (KeHADR_b_UseGenConv4Spd)
    {
        /* Outputs for IfAction SubSystem: '<S9>/ProcRefSpds_GenericConv' incorporates:
         *  ActionPort: '<S36>/Action Port'
         */
        /* Switch: '<S36>/Switch' incorporates:
         *  Constant: '<S394>/Calib'
         *  Constant: '<S395>/Calib'
         *  Constant: '<S396>/Calib'
         *  Constant: '<S399>/Calib'
         *  Gain: '<S36>/Gain'
         *  Product: '<S36>/Product'
         *  Product: '<S36>/Product1'
         *  Product: '<S36>/Product4'
         *  Sum: '<S36>/Sum'
         */
        if (KeHADR_b_UseWhlSpd4VehRefSpd)
        {
            VeHADR_nr_VehSpd_Act = ((rtb_TmpSignalConversionAtCSVR_n_WhlSpdLH *
                KeHADR_r_FrntLWhlSpdConv) +
                                    (rtb_TmpSignalConversionAtCSVR_n_WhlSpdRH *
                KeHADR_r_FrntRWhlSpdConv)) * 0.5F;
        }
        else
        {
            VeHADR_nr_VehSpd_Act = rtb_TmpSignalConversionAtCSVR_v_VehSpdSi *
                KeHADR_r_VehSpdConv;
        }

        /* End of Switch: '<S36>/Switch' */
        /* End of Outputs for SubSystem: '<S9>/ProcRefSpds_GenericConv' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S9>/ProcRefSpds' incorporates:
         *  ActionPort: '<S35>/Action Port'
         */
        /* Product: '<S35>/Product4' incorporates:
         *  Constant: '<S35>/Constant Value1'
         *  Constant: '<S388>/Calib'
         */
        rtb_TmpSignalConversionAtCSVR_n_WhlSpdLH = 3.6F * KeHADR_r_TireRadius;

        /* Product: '<S35>/Product6' incorporates:
         *  Constant: '<S390>/Calib'
         */
        rtb_TmpSignalConversionAtCSVR_n_WhlSpdRH =
            rtb_TmpSignalConversionAtCSVR_v_VehSpdSi * ((float32)
            Rte_Prm_KeTSXR_r_FDRr_KeTSXR_r_FDRr());

        /* Outputs for Atomic SubSystem: '<S35>/ProtectedDivision5' */
        /* Switch: '<S393>/Switch1' incorporates:
         *  Constant: '<S393>/Constant Value'
         *  Constant: '<S393>/Constant Value1'
         *  Constant: '<S393>/Constant Value2'
         *  Constant: '<S393>/Constant Value3'
         *  Logic: '<S393>/AND'
         *  Product: '<S393>/Division'
         *  RelationalOperator: '<S393>/Greater Than or Equal '
         *  RelationalOperator: '<S393>/Greater Than or Equal 1'
         *  RelationalOperator: '<S393>/Not Equal'
         *  RelationalOperator: '<S393>/Not Equal1'
         *  Switch: '<S393>/Switch2'
         *  Switch: '<S393>/Switch3'
         */
        if ((rtb_TmpSignalConversionAtCSVR_n_WhlSpdRH != 0.0F) &&
                (rtb_TmpSignalConversionAtCSVR_n_WhlSpdLH != 0.0F))
        {
            VeHADR_nr_VehSpd_Act = rtb_TmpSignalConversionAtCSVR_n_WhlSpdRH /
                rtb_TmpSignalConversionAtCSVR_n_WhlSpdLH;
        }
        else if (rtb_TmpSignalConversionAtCSVR_n_WhlSpdRH > 0.0F)
        {
            /* Switch: '<S393>/Switch2' incorporates:
             *  Constant: '<S393>/MAXFLOAT'
             */
            VeHADR_nr_VehSpd_Act = 3.402823466E+38F;
        }
        else if (rtb_TmpSignalConversionAtCSVR_n_WhlSpdRH < 0.0F)
        {
            /* Switch: '<S393>/Switch3' incorporates:
             *  Constant: '<S393>/MINFLOAT'
             *  Switch: '<S393>/Switch2'
             */
            VeHADR_nr_VehSpd_Act = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S393>/Switch2' incorporates:
             *  Constant: '<S393>/Constant Value4'
             *  Switch: '<S393>/Switch3'
             */
            VeHADR_nr_VehSpd_Act = 0.0F;
        }

        /* End of Switch: '<S393>/Switch1' */
        /* End of Outputs for SubSystem: '<S35>/ProtectedDivision5' */
        /* End of Outputs for SubSystem: '<S9>/ProcRefSpds' */
    }

    /* End of If: '<S9>/If' */

    /* Sum: '<S20>/Subtraction1' incorporates:
     *  Constant: '<S32>/Calib'
     *  Product: '<S20>/Multiplication'
     *  Sum: '<S20>/Subtraction'
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    HADR_ac_DW.UnitDelay4_DSTATE += (VeHADR_nr_VehSpd_Act -
        HADR_ac_DW.UnitDelay4_DSTATE) * KeHADR_k_RLEstVehEstSpdFilt;

    /* Switch: '<S38>/Switch' incorporates:
     *  Constant: '<S38>/Constant Value'
     *  Constant: '<S38>/Constant Value1'
     *  Logic: '<S38>/Logical'
     *  RelationalOperator: '<S38>/Comparison1'
     *  RelationalOperator: '<S38>/Comparison5'
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    if ((tmpRead_4 != 0.0F) && (HADR_ac_DW.UnitDelay4_DSTATE != 0.0F))
    {
        /* Product: '<S38>/Product1' incorporates:
         *  Constant: '<S405>/Calib'
         */
        rtb_TmpSignalConversionAtCSVR_v_VehSpdSi *= KeHADR_r_KpHMPH;

        /* Switch: '<S38>/Switch' incorporates:
         *  Constant: '<S406>/Calib'
         *  Constant: '<S407>/Calib'
         *  Constant: '<S408>/Calib'
         *  Constant: '<S409>/Calib'
         *  Constant: '<S410>/Calib'
         *  Gain: '<S38>/Gain'
         *  Math: '<S38>/Math Function'
         *  Product: '<S38>/Divide2'
         *  Product: '<S38>/Divide3'
         *  Product: '<S38>/Product2'
         *  Sum: '<S38>/Sum'
         */
        VeHADR_M_RlEst = ((((KeHADR_r_RDL_B *
                             rtb_TmpSignalConversionAtCSVR_v_VehSpdSi) +
                            KeHADR_r_RDL_A) +
                           ((rtb_TmpSignalConversionAtCSVR_v_VehSpdSi *
                             rtb_TmpSignalConversionAtCSVR_v_VehSpdSi) *
                            KeHADR_r_RDL_C)) * KeHADR_r_LBF2NM) *
            (-KeHADR_r_TireRadius);
    }
    else
    {
        /* Switch: '<S38>/Switch' incorporates:
         *  Constant: '<S38>/Constant Value2'
         */
        VeHADR_M_RlEst = 0.0F;
    }

    /* End of Switch: '<S38>/Switch' */

    /* Outputs for Atomic SubSystem: '<S414>/PIControl1' */
    /* Outputs for Atomic SubSystem: '<S424>/Limiter1' */
    for (i = 0; i < 2; i++)
    {
        /* Sum: '<S414>/Sum1' incorporates:
         *  UnitDelay: '<S9>/Unit Delay2'
         *  UnitDelay: '<S9>/Unit Delay4'
         */
        HADR_ac_DW.UnitDelay2_DSTATE[i] = HADR_ac_DW.UnitDelay4_DSTATE -
            HADR_ac_DW.UnitDelay2_DSTATE[i];

        /* Sum: '<S424>/Sum//Sub' incorporates:
         *  Constant: '<S418>/Calib'
         *  Constant: '<S422>/Calib'
         *  Product: '<S424>/Multiplication1'
         *  UnitDelay: '<S424>/Unit Delay'
         */
        HADR_ac_DW.UnitDelay_DSTATE_l[i] += (HADR_ac_DW.UnitDelay2_DSTATE[i] *
            KeHADR_k_RLIGain) * HeHADR_t_FastTEF_dT;

        /* Switch: '<S425>/Switch1' incorporates:
         *  Constant: '<S420>/Calib'
         *  RelationalOperator: '<S425>/Relational Operator'
         *  Switch: '<S424>/Switch'
         */
        if (KeHADR_M_RLPIMax < HADR_ac_DW.UnitDelay_DSTATE_l[i])
        {
            /* Switch: '<S7>/Switch' */
            rtb_TmpSignalConversionAtCSVR_v_VehSpdSi = KeHADR_M_RLPIMax;
        }
        else
        {
            /* Switch: '<S7>/Switch' */
            rtb_TmpSignalConversionAtCSVR_v_VehSpdSi =
                HADR_ac_DW.UnitDelay_DSTATE_l[i];
        }

        /* End of Switch: '<S425>/Switch1' */

        /* Switch: '<S425>/Switch' incorporates:
         *  Constant: '<S421>/Calib'
         *  RelationalOperator: '<S425>/Relational Operator1'
         *  UnitDelay: '<S424>/Unit Delay'
         */
        if (rtb_TmpSignalConversionAtCSVR_v_VehSpdSi > KeHADR_M_RLPIMin)
        {
            HADR_ac_DW.UnitDelay_DSTATE_l[i] =
                rtb_TmpSignalConversionAtCSVR_v_VehSpdSi;
        }
        else
        {
            HADR_ac_DW.UnitDelay_DSTATE_l[i] = KeHADR_M_RLPIMin;
        }

        /* End of Switch: '<S425>/Switch' */

        /* Switch: '<S424>/Switch1' incorporates:
         *  Constant: '<S419>/Calib'
         *  Switch: '<S414>/Switch'
         */
        if (KaHADR_b_EnblRLPI[(i)])
        {
            /* Switch: '<S414>/Switch' incorporates:
             *  Constant: '<S423>/Calib'
             *  Product: '<S424>/proportional_term'
             *  Sum: '<S424>/Sum//Sub1'
             *  UnitDelay: '<S424>/Unit Delay'
             */
            VaHADR_M_RLCL[(i)] = (HADR_ac_DW.UnitDelay2_DSTATE[i] *
                                  KeHADR_k_RLPGain) +
                HADR_ac_DW.UnitDelay_DSTATE_l[i];
        }
        else
        {
            /* Switch: '<S414>/Switch' incorporates:
             *  Constant: '<S414>/Constant Value1'
             */
            VaHADR_M_RLCL[(i)] = 0.0F;
        }

        /* End of Switch: '<S424>/Switch1' */
    }

    /* End of Outputs for SubSystem: '<S424>/Limiter1' */
    /* End of Outputs for SubSystem: '<S414>/PIControl1' */

    /* Inport: '<Root>/VeATRR_M_DrvIntndTotBrkOutTorq' */
    (void)Rte_Read_VeATRR_M_DrvIntndTotBrkOutTorq_Value(&tmpRead_5);

    /* If: '<S412>/If' incorporates:
     *  Constant: '<S412>/Constant Value'
     *  Constant: '<S412>/Constant Value1'
     *  RelationalOperator: '<S412>/Comparison'
     *  RelationalOperator: '<S412>/Comparison1'
     *  UnitDelay: '<S9>/Unit Delay4'
     */
    if (HADR_ac_DW.UnitDelay4_DSTATE > 0.001F)
    {
        /* Outputs for IfAction SubSystem: '<S412>/PosSpd' incorporates:
         *  ActionPort: '<S416>/Action Port'
         */
        /* Merge: '<S412>/Merge' incorporates:
         *  Abs: '<S416>/Abs'
         *  Gain: '<S416>/Gain'
         *  Sum: '<S416>/Sum1'
         */
        VeHADR_M_RLBrkTrq = ((-fabsf(tmpRead_5)) -
                             rtb_TmpSignalConversionAtRGNR_M_RgnBrkOu) -
            rtb_TmpSignalConversionAtRGNR_M_RgnBrk_m;

        /* End of Outputs for SubSystem: '<S412>/PosSpd' */
    }
    else if (HADR_ac_DW.UnitDelay4_DSTATE < -0.001F)
    {
        /* Outputs for IfAction SubSystem: '<S412>/NegSpd' incorporates:
         *  ActionPort: '<S415>/Action Port'
         */
        /* Merge: '<S412>/Merge' incorporates:
         *  Abs: '<S415>/Abs'
         *  Sum: '<S415>/Sum1'
         */
        VeHADR_M_RLBrkTrq = (fabsf(tmpRead_5) -
                             rtb_TmpSignalConversionAtRGNR_M_RgnBrkOu) -
            rtb_TmpSignalConversionAtRGNR_M_RgnBrk_m;

        /* End of Outputs for SubSystem: '<S412>/NegSpd' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S412>/ZeroSpd' incorporates:
         *  ActionPort: '<S417>/Action Port'
         */
        /* Merge: '<S412>/Merge' incorporates:
         *  Constant: '<S417>/Constant Value'
         *  SignalConversion generated from: '<S417>/BrkTrqOut'
         */
        VeHADR_M_RLBrkTrq = 0.0F;

        /* End of Outputs for SubSystem: '<S412>/ZeroSpd' */
    }

    /* End of If: '<S412>/If' */

    /* Inport: '<Root>/VeSCCR_b_RearDFOffReq' */
    (void)Rte_Read_VeSCCR_b_RearDFOffReq_Value(&rtb_LogicalOperator5);

    /* Inport: '<Root>/VeSCCR_b_FrontDFOffReq' */
    (void)Rte_Read_VeSCCR_b_FrontDFOffReq_Value(&rtb_LogicalOperator2_n);

    /* Inport: '<Root>/VeSCCR_b_RrAxlRq' */
    (void)Rte_Read_VeSCCR_b_RrAxlRq_Value(&rtb_Logical4);

    /* Inport: '<Root>/VeSCCR_b_FrntAxlRq' */
    (void)Rte_Read_VeSCCR_b_FrntAxlRq_Value(&rtb_Logical3);

    /* Inport: '<Root>/VeMSPR_n_MtrC_SpdRaw' */
    (void)Rte_Read_VeMSPR_n_MtrC_SpdRaw_Value(&rtb_Switch1_j_idx_2);

    /* Inport: '<Root>/VeMSPR_n_MtrB_SpdRaw' */
    (void)Rte_Read_VeMSPR_n_MtrB_SpdRaw_Value(&tmpRead_3);

    /* Inport: '<Root>/VeMSPR_n_MtrA_SpdRaw' */
    (void)Rte_Read_VeMSPR_n_MtrA_SpdRaw_Value(&tmpRead_2);

    /* Inport: '<Root>/VeMSPR_n_MtrC_Spd' */
    (void)Rte_Read_VeMSPR_n_MtrC_Spd_Value(&rtb_Switch1_j_idx_1);

    /* Inport: '<Root>/VeMSPR_n_MtrB_Spd' */
    (void)Rte_Read_VeMSPR_n_MtrB_Spd_Value(&tmpRead_1);

    /* Inport: '<Root>/VeMSPR_n_MtrA_Spd' */
    (void)Rte_Read_VeMSPR_n_MtrA_Spd_Value(&tmpRead_0);

    /* Inport: '<Root>/VeHTDR_M_MtrC_OptTaTb_wRamp' */
    (void)Rte_Read_VeHTDR_M_MtrC_OptTaTb_wRamp_Value(&rtb_Switch1_j_idx_0);

    /* Inport: '<Root>/VeHTDR_M_MtrA_OptTaTb_wRamp' */
    (void)Rte_Read_VeHTDR_M_MtrA_OptTaTb_wRamp_Value(&tmpRead);

    /* Outputs for Atomic SubSystem: '<S38>/ProtectedDivision1' */
    /* RelationalOperator: '<S413>/Not Equal1' incorporates:
     *  Constant: '<S411>/Calib'
     *  Constant: '<S413>/Constant Value1'
     */
    rtb_Logical_m = (((float32)Rte_Prm_KeTSXR_r_FDRf_KeTSXR_r_FDRf()) != 0.0F);
    for (i = 0; i < 2; i++)
    {
        /* Sum: '<S38>/Sum2' */
        VaHADR_M_RoadLoadEst_AD[(i)] = (VeHADR_M_RlEst + VaHADR_M_RLCL[(i)]) +
            VeHADR_M_RLBrkTrq;

        /* Switch: '<S413>/Switch1' incorporates:
         *  Constant: '<S413>/Constant Value'
         *  Constant: '<S413>/Constant Value2'
         *  Constant: '<S413>/Constant Value3'
         *  Logic: '<S413>/AND'
         *  RelationalOperator: '<S413>/Greater Than or Equal '
         *  RelationalOperator: '<S413>/Greater Than or Equal 1'
         *  RelationalOperator: '<S413>/Not Equal'
         *  Switch: '<S413>/Switch2'
         *  Switch: '<S413>/Switch3'
         */
        if ((VaHADR_M_RoadLoadEst_AD[(i)] != 0.0F) && rtb_Logical_m)
        {
            /* Switch: '<S413>/Switch1' incorporates:
             *  Constant: '<S411>/Calib'
             *  Product: '<S413>/Division'
             */
            VaHADR_M_RoadLoadEst_AD[(i)] = VaHADR_M_RoadLoadEst_AD[(i)] /
                ((float32)Rte_Prm_KeTSXR_r_FDRf_KeTSXR_r_FDRf());
        }
        else if (VaHADR_M_RoadLoadEst_AD[(i)] > 0.0F)
        {
            /* Switch: '<S413>/Switch2' incorporates:
             *  Constant: '<S413>/MAXFLOAT'
             *  Switch: '<S413>/Switch1'
             */
            VaHADR_M_RoadLoadEst_AD[(i)] = 3.402823466E+38F;
        }
        else if (VaHADR_M_RoadLoadEst_AD[(i)] < 0.0F)
        {
            /* Switch: '<S413>/Switch3' incorporates:
             *  Constant: '<S413>/MINFLOAT'
             *  Switch: '<S413>/Switch1'
             */
            VaHADR_M_RoadLoadEst_AD[(i)] = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S413>/Switch1' incorporates:
             *  Constant: '<S413>/Constant Value4'
             *  Switch: '<S413>/Switch3'
             */
            VaHADR_M_RoadLoadEst_AD[(i)] = 0.0F;
        }

        /* End of Switch: '<S413>/Switch1' */
    }

    /* End of Outputs for SubSystem: '<S38>/ProtectedDivision1' */

    /* Gain: '<S40>/Gain' incorporates:
     *  Sum: '<S40>/Sum'
     *  UnitDelay: '<S40>/Unit Delay3'
     */
    rtb_TmpSignalConversionAtRGNR_M_RgnBrkOu =
        (rtb_TmpSignalConversionAtMtrBOLOutport1 + HADR_ac_DW.UnitDelay3_DSTATE)
        * 0.5F;

    /* Switch: '<S7>/Switch1' incorporates:
     *  Constant: '<S10>/Calib'
     */
    if (HeHADR_b_REEV_System)
    {
        /* Switch: '<S7>/Switch1' */
        rtb_Switch1_j_idx_0 = tmpRead;
        rtb_Switch1_j_idx_1 = tmpRead_0;
        rtb_Switch1_j_idx_2 = tmpRead_2;
    }

    /* End of Switch: '<S7>/Switch1' */

    /* Gain: '<S39>/Gain' incorporates:
     *  Sum: '<S39>/Sum'
     *  UnitDelay: '<S39>/Unit Delay3'
     */
    rtb_TmpSignalConversionAtRGNR_M_RgnBrk_m = (rtb_Switch1_j_idx_0 +
        HADR_ac_DW.UnitDelay3_DSTATE_b) * 0.5F;

    /* Sum: '<S37>/Sum' incorporates:
     *  Constant: '<S37>/Constant Value'
     *  Constant: '<S402>/Calib'
     *  Product: '<S37>/Product3'
     *  Product: '<S37>/Product4'
     *  Product: '<S37>/Product5'
     *  Selector: '<S37>/Selector'
     *  Selector: '<S37>/Selector1'
     *  Selector: '<S37>/Selector2'
     *  SignalConversion generated from: '<S37>/Selector3'
     */
    rtb_TmpSignalConversionAtCSVR_v_VehSpdSi = ((KaHADR_r_BMat_REF[0] *
        rtb_TmpSignalConversionAtRGNR_M_RgnBrk_m) + (KaHADR_r_BMat_REF[1] *
        rtb_TmpSignalConversionAtRGNR_M_RgnBrkOu)) + (KaHADR_r_BMat_REF[2] *
        VaHADR_M_RoadLoadEst_AD[0]);
    for (i = 0; i < 3; i++)
    {
        /* Product: '<S37>/Product' incorporates:
         *  Constant: '<S403>/Calib'
         *  Constant: '<S404>/Calib'
         *  Product: '<S37>/Product6'
         *  Sum: '<S37>/Sum2'
         *  UnitDelay: '<S37>/Unit Delay'
         */
        VaHADR_nr_RefSpd[(i)] = ((KeHADR_r_AMat_REF *
            HADR_ac_DW.UnitDelay_DSTATE[i]) +
            rtb_TmpSignalConversionAtCSVR_v_VehSpdSi) * KaHADR_r_CMat_REF[(i)];

        /* Switch: '<S9>/Switch4' incorporates:
         *  Constant: '<S24>/Calib'
         */
        if (!KeHADR_b_UseDlyRefSt)
        {
            /* Switch: '<S9>/Switch4' */
            HADR_ac_DW.UnitDelay1_DSTATE[i] = VaHADR_nr_RefSpd[(i)];
        }

        /* End of Switch: '<S9>/Switch4' */
    }

    /* Switch: '<S9>/Switch' incorporates:
     *  Constant: '<S26>/Calib'
     *  Switch: '<S9>/Switch1'
     */
    if (KeHADR_b_UseRawMtrSpd)
    {
        rtb_Switch1_j_idx_1 = rtb_Switch1_j_idx_2;
        tmpRead_1 = tmpRead_3;
    }

    /* End of Switch: '<S9>/Switch' */

    /* Product: '<S18>/Product' incorporates:
     *  Constant: '<S383>/Calib'
     */
    VeHADR_nr_MtrASpdActRad = rtb_Switch1_j_idx_1 * KeHADR_r_ConvRPM2RadpSec;

    /* Product: '<S18>/Product1' incorporates:
     *  Constant: '<S383>/Calib'
     */
    VeHADR_nr_MtrBSpdActRad = KeHADR_r_ConvRPM2RadpSec * tmpRead_1;

    /* Outputs for Atomic SubSystem: '<S17>/EdgeRising' */
    /* Logic: '<S43>/AND' incorporates:
     *  Logic: '<S43>/OR1'
     *  UnitDelay: '<S43>/Unit Delay'
     */
    HADR_ac_B.AND_k = !HADR_ac_DW.UnitDelay_DSTATE_nm;

    /* Update for UnitDelay: '<S43>/Unit Delay' incorporates:
     *  Constant: '<S17>/Constant3'
     */
    HADR_ac_DW.UnitDelay_DSTATE_nm = true;

    /* End of Outputs for SubSystem: '<S17>/EdgeRising' */
    /* Gateway: HADR_ADLash/Backlash_LQI_KFloop/Kalman_Looping_Stateflow */
    /* During: HADR_ADLash/Backlash_LQI_KFloop/Kalman_Looping_Stateflow */
    /* Entry Internal: HADR_ADLash/Backlash_LQI_KFloop/Kalman_Looping_Stateflow */
    /* Transition: '<S44>:1' */
    /*  Run Kalman towards current timestep  */
    /* Transition: '<S44>:4' */
    HADR_ac_B.i = 0;

    /*  Output U matrix */
    HADR_ac_B.TaLQI_Out = HADR_ac_DW.TaLQI[HADR_ac_B.i];
    HADR_ac_B.TbLQI_Out = HADR_ac_DW.TbLQI[HADR_ac_B.i];
    HADR_ac_B.TRL_Out = HADR_ac_DW.TRL[HADR_ac_B.i];
    HADR_ac_B.Matrix_Case_Out = HADR_ac_DW.Matrix_Case[HADR_ac_B.i];

    /*  Output xHat matrix */
    HADR_ac_B.xHat_Out[0] = HADR_ac_DW.xHat[HADR_ac_B.i];
    HADR_ac_B.xHat_Out[1] = HADR_ac_DW.xHat[HADR_ac_B.i + 20];
    HADR_ac_B.xHat_Out[2] = HADR_ac_DW.xHat[HADR_ac_B.i + 40];
    HADR_ac_B.xHat_Out[3] = HADR_ac_DW.xHat[HADR_ac_B.i + 60];
    HADR_ac_B.xHat_Out[4] = HADR_ac_DW.xHat[HADR_ac_B.i + 80];
    HADR_ac_B.xPos_Out[0] = HADR_ac_DW.xPos[HADR_ac_B.i];
    HADR_ac_B.xPos_Out[1] = HADR_ac_DW.xPos[HADR_ac_B.i + 20];
    HADR_ac_B.xPos_Out[2] = HADR_ac_DW.xPos[HADR_ac_B.i + 40];
    HADR_ac_B.SpringTrqMtrB_Plant_sym_Out =
        HADR_ac_DW.SpringTrqMtrB_Plant_sym[HADR_ac_B.i];
    HADR_ac_B.SpringTrqMtrA_Plant_sym_Out =
        HADR_ac_DW.SpringTrqMtrA_Plant_sym[HADR_ac_B.i];
    HADR_ac_B.UseBL_TbCurr_Out = HADR_ac_DW.UseBL_TbCurr[HADR_ac_B.i];
    HADR_ac_B.UseBL_TaCurr_Out = HADR_ac_DW.UseBL_TaCurr[HADR_ac_B.i];

    /* Chart: '<S17>/Kalman_Looping_Stateflow' incorporates:
     *  SubSystem: '<S17>/Kalman_Plant'
     */
    /* Event: '<S44>:12' */
    HADR_ac_Kalman_Plant();
    HADR_ac_B.i++;

    /* Constant: '<S46>/Calib' */
    while (((sint32)HADR_ac_B.i) < ((sint32)KeHADR_Cnt_KalIterLimit))
    {
        /* Transition: '<S44>:2' */
        /* Transition: '<S44>:3' */
        /*  Update the time array & Copy i-1 values from i timestep each sequence
           Input Store U matrix */
        HADR_ac_DW.TaLQI[HADR_ac_B.i - 1] = HADR_ac_DW.TaLQI[HADR_ac_B.i];
        HADR_ac_DW.TbLQI[HADR_ac_B.i - 1] = HADR_ac_DW.TbLQI[HADR_ac_B.i];
        HADR_ac_DW.TRL[HADR_ac_B.i - 1] = HADR_ac_DW.TRL[HADR_ac_B.i];

        /*  Store the solution of prev. kalman step */
        HADR_ac_DW.Matrix_Case[HADR_ac_B.i - 1] = VeHADR_Cnt_MatrixCase_KF;
        HADR_ac_DW.xHat[HADR_ac_B.i - 1] = VaHADR_nr_KalmanBL_XHat[0];
        HADR_ac_DW.xHat[HADR_ac_B.i + 19] = VaHADR_nr_KalmanBL_XHat[1];
        HADR_ac_DW.xHat[HADR_ac_B.i + 39] = VaHADR_nr_KalmanBL_XHat[2];
        HADR_ac_DW.xHat[HADR_ac_B.i + 59] = VaHADR_nr_KalmanBL_XHat[3];
        HADR_ac_DW.xHat[HADR_ac_B.i + 79] = VaHADR_nr_KalmanBL_XHat[4];
        HADR_ac_DW.xPos[HADR_ac_B.i - 1] = VaHADR_nr_xHat_Pos[0];
        HADR_ac_DW.xPos[HADR_ac_B.i + 19] = VaHADR_nr_xHat_Pos[1];
        HADR_ac_DW.xPos[HADR_ac_B.i + 39] = VaHADR_nr_xHat_Pos[2];
        HADR_ac_DW.SpringTrqMtrB_Plant_sym[HADR_ac_B.i - 1] =
            HADR_ac_B.OutportBufferForSpringTb;
        HADR_ac_DW.SpringTrqMtrA_Plant_sym[HADR_ac_B.i - 1] =
            HADR_ac_B.OutportBufferForSpringTa;
        HADR_ac_DW.UseBL_TbCurr[HADR_ac_B.i - 1] =
            HADR_ac_B.VariantMergeForOutportVeHADR_b_RearMtrBL;
        HADR_ac_DW.UseBL_TaCurr[HADR_ac_B.i - 1] =
            HADR_ac_B.VariantMergeForOutportVeHADR_b_FrntMtrBL;

        /*  Pull out the next timesteps Inputs */
        HADR_ac_B.TaLQI_Out = HADR_ac_DW.TaLQI[HADR_ac_B.i];
        HADR_ac_B.TbLQI_Out = HADR_ac_DW.TbLQI[HADR_ac_B.i];
        HADR_ac_B.TRL_Out = HADR_ac_DW.TRL[HADR_ac_B.i];

        /*  Pass through the previous Plant Model outputs as Prev Value */
        HADR_ac_B.Matrix_Case_Out = VeHADR_Cnt_MatrixCase_KF;
        HADR_ac_B.xHat_Out[0] = VaHADR_nr_KalmanBL_XHat[0];
        HADR_ac_B.xHat_Out[1] = VaHADR_nr_KalmanBL_XHat[1];
        HADR_ac_B.xHat_Out[2] = VaHADR_nr_KalmanBL_XHat[2];
        HADR_ac_B.xHat_Out[3] = VaHADR_nr_KalmanBL_XHat[3];
        HADR_ac_B.xHat_Out[4] = VaHADR_nr_KalmanBL_XHat[4];
        HADR_ac_B.xPos_Out[0] = VaHADR_nr_xHat_Pos[0];
        HADR_ac_B.xPos_Out[1] = VaHADR_nr_xHat_Pos[1];
        HADR_ac_B.xPos_Out[2] = VaHADR_nr_xHat_Pos[2];
        HADR_ac_B.SpringTrqMtrB_Plant_sym_Out =
            HADR_ac_B.OutportBufferForSpringTb;
        HADR_ac_B.SpringTrqMtrA_Plant_sym_Out =
            HADR_ac_B.OutportBufferForSpringTa;
        HADR_ac_B.UseBL_TbCurr_Out =
            HADR_ac_B.VariantMergeForOutportVeHADR_b_RearMtrBL;
        HADR_ac_B.UseBL_TaCurr_Out =
            HADR_ac_B.VariantMergeForOutportVeHADR_b_FrntMtrBL;

        /* Outputs for Function Call SubSystem: '<S17>/Kalman_Plant' */
        /*  Rerun the Kalman */
        /* Event: '<S44>:12' */
        HADR_ac_Kalman_Plant();

        /* End of Outputs for SubSystem: '<S17>/Kalman_Plant' */
        /* Transition: '<S44>:5' */
        HADR_ac_B.i++;
    }

    /* End of Constant: '<S46>/Calib' */

    /* Chart: '<S17>/Kalman_Looping_Stateflow' incorporates:
     *  SubSystem: '<S17>/LQI'
     */
    /* Abs: '<S47>/Abs2' */
    /* Transition: '<S44>:6' */
    /* Event: '<S44>:13' */
    rtb_TmpSignalConversionAtCSVR_n_WhlSpdLH = fabsf
        (rtb_TmpSignalConversionAtRGNR_M_RgnBrk_m);

    /* Abs: '<S47>/Abs3' */
    rtb_TmpSignalConversionAtCSVR_v_VehSpdSi = fabsf
        (rtb_TmpSignalConversionAtRGNR_M_RgnBrkOu);

    /* Outputs for Atomic SubSystem: '<S47>/EdgeRising' */
    /* Logic: '<S247>/AND' incorporates:
     *  Logic: '<S247>/OR1'
     *  UnitDelay: '<S247>/Unit Delay'
     */
    rtb_Logical_m = !HADR_ac_DW.UnitDelay_DSTATE_n0;

    /* Update for UnitDelay: '<S247>/Unit Delay' incorporates:
     *  Constant: '<S47>/Constant29'
     */
    HADR_ac_DW.UnitDelay_DSTATE_n0 = true;

    /* End of Outputs for SubSystem: '<S47>/EdgeRising' */

    /* UnitDelay: '<S47>/Unit Delay' */
    rtb_UnitDelay_b = VeHADR_Cnt_MatrixCase_LQI;

    /* Switch: '<S47>/Switch14' incorporates:
     *  Constant: '<S47>/BL_ALL'
     *  Logic: '<S47>/Logical Operator4'
     *  Switch: '<S47>/Switch15'
     *  Switch: '<S47>/Switch16'
     */
    if ((HADR_ac_B.VariantMergeForOutportVeHADR_b_RearMtrBL) &&
            (HADR_ac_B.VariantMergeForOutportVeHADR_b_FrntMtrBL))
    {
        VeHADR_Cnt_MatrixCase_LQI = 4U;
    }
    else if (HADR_ac_B.VariantMergeForOutportVeHADR_b_RearMtrBL)
    {
        /* Switch: '<S47>/Switch15' incorporates:
         *  Constant: '<S47>/MtrB_in_BL'
         */
        VeHADR_Cnt_MatrixCase_LQI = 3U;
    }
    else if (HADR_ac_B.VariantMergeForOutportVeHADR_b_FrntMtrBL)
    {
        /* Switch: '<S47>/Switch16' incorporates:
         *  Constant: '<S47>/MtrA_in_BL'
         *  Switch: '<S47>/Switch15'
         */
        VeHADR_Cnt_MatrixCase_LQI = 2U;
    }
    else
    {
        /* Switch: '<S47>/Switch15' incorporates:
         *  Constant: '<S47>/All_in_Contact'
         *  Switch: '<S47>/Switch16'
         */
        VeHADR_Cnt_MatrixCase_LQI = 1U;
    }

    /* End of Switch: '<S47>/Switch14' */

    /* UnitDelay: '<S47>/Unit Delay2' */
    rtb_UnitDelay2_n = HADR_ac_DW.UnitDelay2_DSTATE_i3;

    /* DataTypeConversion: '<S47>/Data Type Conversion' incorporates:
     *  SignalConversion generated from: '<S1>/HSER_e_HADRLeadState'
     *  UnitDelay: '<S47>/Unit Delay2'
     */
    HADR_ac_DW.UnitDelay2_DSTATE_i3 = (uint8)
        HADR_ac_B.TmpSignalConversionAtHSER_e_HADRLeadStat;

    /* Outputs for Enabled SubSystem: '<S47>/FnCallGRChng_LQI' incorporates:
     *  EnablePort: '<S248>/Enable'
     */
    /* Logic: '<S47>/Logical Operator3' incorporates:
     *  RelationalOperator: '<S47>/Relational Operator'
     *  RelationalOperator: '<S47>/Relational Operator1'
     *  UnitDelay: '<S47>/Unit Delay2'
     */
    if ((rtb_Logical_m || (rtb_UnitDelay_b != VeHADR_Cnt_MatrixCase_LQI)) ||
            (rtb_UnitDelay2_n != HADR_ac_DW.UnitDelay2_DSTATE_i3))
    {
        /* S-Function (fcgen): '<S248>/Function-Call Generator' incorporates:
         *  SubSystem: '<S47>/HADR_Prmtr_Selection_LQI'
         */
        GRsChangeHADR_LQI();

        /* End of Outputs for S-Function (fcgen): '<S248>/Function-Call Generator' */
    }

    /* End of Logic: '<S47>/Logical Operator3' */
    /* End of Outputs for SubSystem: '<S47>/FnCallGRChng_LQI' */

    /* Sum: '<S47>/Sum5' incorporates:
     *  Gain: '<S39>/Gain'
     *  Lookup_n-D: '<S272>/Vector'
     *  Switch: '<S70>/Switch'
     */
    VeHADR_nr_NaRef_BLRaw = look2_iflf_binlca_16a(VeHADR_nr_MtrA_BL_rad,
        rtb_TmpSignalConversionAtRGNR_M_RgnBrk_m, ((const float32 *)
        &(KyHADR_dn_BackLashAcc_Ta[0])), ((const float32 *)
        &(KxHADR_dn_BackLashAcc_Ta[0])), ((const float32 *)
        &(KtHADR_dn_BackLashAcc_Ta[0])), HADR_ac_ConstP.pooled11, 8U) +
        VaHADR_nr_KalmanBL_XHat[2];

    /* Logic: '<S47>/Logical Operator2' incorporates:
     *  Constant: '<S264>/Calib'
     *  Constant: '<S48>/Calib'
     *  Constant: '<S49>/Calib'
     *  Logic: '<S42>/Logical Operator1'
     *  Logic: '<S42>/Logical Operator5'
     *  Logic: '<S42>/Logical Operator6'
     */
    rtb_LogicalOperator2_n = (((VeHADR_b_DsblMtrA_Dnmc_LQI) ||
        (((KeHADR_b_MtrA_ShtDwn_AEMD) && rtb_Logical3) ||
         ((KeHADR_b_MtrA_ShtDwn_OPTL) && rtb_LogicalOperator2_n))) ||
        (KeHADR_b_ShutdwnLQIBL));

    /* Outputs for Atomic SubSystem: '<S47>/Hysteresis2' */
    /* Switch: '<S252>/Switch1' incorporates:
     *  Constant: '<S261>/Calib'
     *  RelationalOperator: '<S252>/Greater  Than'
     */
    if (rtb_TmpSignalConversionAtCSVR_n_WhlSpdLH > KeHADR_M_MtrA_LQI6SOLim_RSP)
    {
        /* Switch: '<S252>/Switch1' incorporates:
         *  Constant: '<S252>/Constant Value'
         */
        VeHADR_b_TaLQIwBLOn = true;
    }
    else
    {
        /* Switch: '<S252>/Switch1' incorporates:
         *  Constant: '<S260>/Calib'
         *  RelationalOperator: '<S252>/Greater  Than1'
         *  UnitDelay: '<S252>/Unit Delay'
         */
        VeHADR_b_TaLQIwBLOn = ((rtb_TmpSignalConversionAtCSVR_n_WhlSpdLH >=
                                KeHADR_M_MtrA_LQI6SOLim_LSP) &&
                               (VeHADR_b_TaLQIwBLOn));
    }

    /* End of Switch: '<S252>/Switch1' */
    /* End of Outputs for SubSystem: '<S47>/Hysteresis2' */

    /* Logic: '<S47>/Logical3' */
    rtb_Logical3 = !VeHADR_b_TaLQIwBLOn;

    /* Outputs for Atomic SubSystem: '<S47>/TurnOnDelayTime2' */
    /* Outputs for Atomic SubSystem: '<S280>/EdgeRising' */
    /* Logic: '<S381>/AND' incorporates:
     *  Logic: '<S381>/OR1'
     *  UnitDelay: '<S381>/Unit Delay'
     */
    rtb_Logical_m = (rtb_Logical3 && (!HADR_ac_DW.UnitDelay_DSTATE_f));

    /* Update for UnitDelay: '<S381>/Unit Delay' */
    HADR_ac_DW.UnitDelay_DSTATE_f = rtb_Logical3;

    /* End of Outputs for SubSystem: '<S280>/EdgeRising' */

    /* Switch: '<S280>/Switch1' incorporates:
     *  Constant: '<S250>/Calib'
     *  Constant: '<S270>/Calib'
     *  Constant: '<S280>/Constant Value1'
     *  Logic: '<S280>/OR'
     *  Logic: '<S280>/OR1'
     *  MinMax: '<S280>/Minimum'
     *  Sum: '<S280>/Summation'
     *  UnitDelay: '<S280>/Unit Delay'
     */
    if ((!rtb_Logical3) || rtb_Logical_m)
    {
        HADR_ac_DW.UnitDelay_DSTATE_p = 0.0F;
    }
    else
    {
        HADR_ac_DW.UnitDelay_DSTATE_p = fminf(KeHADR_t_MtrA_LQI6SOEnblDelay,
            HeHADR_t_FastTEF_dT + HADR_ac_DW.UnitDelay_DSTATE_p);
    }

    /* End of Switch: '<S280>/Switch1' */

    /* Logic: '<S280>/AND' incorporates:
     *  Constant: '<S270>/Calib'
     *  RelationalOperator: '<S280>/Greater  Than'
     *  UnitDelay: '<S280>/Unit Delay'
     */
    VeHADR_b_TaLQIwBLReset = (rtb_Logical3 && (HADR_ac_DW.UnitDelay_DSTATE_p >=
        KeHADR_t_MtrA_LQI6SOEnblDelay));

    /* End of Outputs for SubSystem: '<S47>/TurnOnDelayTime2' */

    /* Logic: '<S47>/Logical13' */
    rtb_Logical3 = (rtb_LogicalOperator2_n || (VeHADR_b_TaLQIwBLReset));

    /* Logic: '<S47>/Logical' incorporates:
     *  Logic: '<S47>/Logical11'
     */
    VeHADR_b_CalcBLSpeedRefNa =
        ((HADR_ac_B.VariantMergeForOutportVeHADR_b_FrntMtrBL) && (!rtb_Logical3));

    /* Switch: '<S47>/Switch12' */
    if (VeHADR_b_DsblMtrA_Dnmc_LQI)
    {
        /* Switch: '<S47>/Switch12' incorporates:
         *  Constant: '<S47>/Constant26'
         */
        rtb_TmpSignalConversionAtCSVR_n_WhlSpdRH = 0.0F;
    }
    else
    {
        /* Switch: '<S47>/Switch12' */
        rtb_TmpSignalConversionAtCSVR_n_WhlSpdRH = VaHADR_nr_KalmanBL_XHat[0];
    }

    /* End of Switch: '<S47>/Switch12' */

    /* Outputs for Atomic SubSystem: '<S47>/DigitalLowpassResetEnabled6' */
    /* Switch: '<S246>/Switch1' incorporates:
     *  Constant: '<S266>/Calib'
     *  Logic: '<S47>/Logical Operator'
     *  Product: '<S246>/Multiplication'
     *  Sum: '<S246>/Subtraction'
     *  Sum: '<S246>/Summation'
     *  UnitDelay: '<S246>/Unit Delay'
     */
    if (!VeHADR_b_CalcBLSpeedRefNa)
    {
        HADR_ac_DW.UnitDelay_DSTATE_d = rtb_TmpSignalConversionAtCSVR_n_WhlSpdRH;
    }
    else
    {
        HADR_ac_DW.UnitDelay_DSTATE_d += (VeHADR_nr_NaRef_BLRaw -
            HADR_ac_DW.UnitDelay_DSTATE_d) * KeHADR_k_TaInLashSpdFilt;
    }

    /* End of Switch: '<S246>/Switch1' */
    /* End of Outputs for SubSystem: '<S47>/DigitalLowpassResetEnabled6' */

    /* Switch: '<S47>/Switch11' incorporates:
     *  Switch: '<S47>/Switch1'
     */
    if (VeHADR_b_DsblMtrA_Dnmc_LQI)
    {
        /* Switch: '<S47>/Switch11' incorporates:
         *  Constant: '<S47>/Constant25'
         */
        VeHADR_nr_NaRef_LQIBL = 0.0F;
    }
    else if (VeHADR_b_CalcBLSpeedRefNa)
    {
        /* Switch: '<S47>/Switch1' incorporates:
         *  Switch: '<S47>/Switch11'
         *  UnitDelay: '<S246>/Unit Delay'
         */
        VeHADR_nr_NaRef_LQIBL = HADR_ac_DW.UnitDelay_DSTATE_d;
    }
    else
    {
        /* Switch: '<S47>/Switch11' incorporates:
         *  Switch: '<S47>/Switch1'
         */
        VeHADR_nr_NaRef_LQIBL = HADR_ac_DW.UnitDelay1_DSTATE[0];
    }

    /* End of Switch: '<S47>/Switch11' */

    /* Sum: '<S47>/Sum3' incorporates:
     *  Gain: '<S40>/Gain'
     *  Lookup_n-D: '<S273>/Vector'
     *  Switch: '<S71>/Switch'
     */
    VeHADR_nr_NbRef_BLRaw = look2_iflf_binlca_16a(VeHADR_nr_MtrB_BL_rad,
        rtb_TmpSignalConversionAtRGNR_M_RgnBrkOu, ((const float32 *)
        &(KyHADR_dn_BackLashAcc_Tb[0])), ((const float32 *)
        &(KxHADR_dn_BackLashAcc_Tb[0])), ((const float32 *)
        &(KtHADR_dn_BackLashAcc_Tb[0])), HADR_ac_ConstP.pooled11, 8U) +
        VaHADR_nr_KalmanBL_XHat[2];

    /* Logic: '<S47>/Logical Operator5' incorporates:
     *  Constant: '<S264>/Calib'
     *  Constant: '<S50>/Calib'
     *  Constant: '<S51>/Calib'
     *  Logic: '<S42>/Logical Operator2'
     *  Logic: '<S42>/Logical Operator3'
     *  Logic: '<S42>/Logical Operator4'
     */
    rtb_LogicalOperator5 = ((KeHADR_b_ShutdwnLQIBL) ||
                            (((KeHADR_b_MtrB_ShtDwn_AEMD) && rtb_Logical4) ||
        ((KeHADR_b_MtrB_ShtDwn_OPTL) && rtb_LogicalOperator5)));

    /* Outputs for Atomic SubSystem: '<S47>/Hysteresis1' */
    /* Switch: '<S251>/Switch1' incorporates:
     *  Constant: '<S263>/Calib'
     *  RelationalOperator: '<S251>/Greater  Than'
     */
    if (rtb_TmpSignalConversionAtCSVR_v_VehSpdSi > KeHADR_M_MtrB_LQI6SOLim_RSP)
    {
        /* Switch: '<S251>/Switch1' incorporates:
         *  Constant: '<S251>/Constant Value'
         */
        VeHADR_b_TbLQIwBLOn = true;
    }
    else
    {
        /* Switch: '<S251>/Switch1' incorporates:
         *  Constant: '<S262>/Calib'
         *  RelationalOperator: '<S251>/Greater  Than1'
         *  UnitDelay: '<S251>/Unit Delay'
         */
        VeHADR_b_TbLQIwBLOn = ((rtb_TmpSignalConversionAtCSVR_v_VehSpdSi >=
                                KeHADR_M_MtrB_LQI6SOLim_LSP) &&
                               (VeHADR_b_TbLQIwBLOn));
    }

    /* End of Switch: '<S251>/Switch1' */
    /* End of Outputs for SubSystem: '<S47>/Hysteresis1' */

    /* Logic: '<S47>/Logical4' */
    rtb_Logical4 = !VeHADR_b_TbLQIwBLOn;

    /* Outputs for Atomic SubSystem: '<S47>/TurnOnDelayTime3' */
    /* Outputs for Atomic SubSystem: '<S281>/EdgeRising' */
    /* Logic: '<S382>/AND' incorporates:
     *  Logic: '<S382>/OR1'
     *  UnitDelay: '<S382>/Unit Delay'
     */
    rtb_Logical_m = (rtb_Logical4 && (!HADR_ac_DW.UnitDelay_DSTATE_jye));

    /* Update for UnitDelay: '<S382>/Unit Delay' */
    HADR_ac_DW.UnitDelay_DSTATE_jye = rtb_Logical4;

    /* End of Outputs for SubSystem: '<S281>/EdgeRising' */

    /* Switch: '<S281>/Switch1' incorporates:
     *  Constant: '<S250>/Calib'
     *  Constant: '<S271>/Calib'
     *  Constant: '<S281>/Constant Value1'
     *  Logic: '<S281>/OR'
     *  Logic: '<S281>/OR1'
     *  MinMax: '<S281>/Minimum'
     *  Sum: '<S281>/Summation'
     *  UnitDelay: '<S281>/Unit Delay'
     */
    if ((!rtb_Logical4) || rtb_Logical_m)
    {
        HADR_ac_DW.UnitDelay_DSTATE_lq = 0.0F;
    }
    else
    {
        HADR_ac_DW.UnitDelay_DSTATE_lq = fminf(KeHADR_t_MtrB_LQI6SOEnblDelay,
            HeHADR_t_FastTEF_dT + HADR_ac_DW.UnitDelay_DSTATE_lq);
    }

    /* End of Switch: '<S281>/Switch1' */

    /* Logic: '<S281>/AND' incorporates:
     *  Constant: '<S271>/Calib'
     *  RelationalOperator: '<S281>/Greater  Than'
     *  UnitDelay: '<S281>/Unit Delay'
     */
    VeHADR_b_TbLQIwBLReset = (rtb_Logical4 && (HADR_ac_DW.UnitDelay_DSTATE_lq >=
        KeHADR_t_MtrB_LQI6SOEnblDelay));

    /* End of Outputs for SubSystem: '<S47>/TurnOnDelayTime3' */

    /* Logic: '<S47>/Logical14' */
    rtb_Logical4 = (rtb_LogicalOperator5 || (VeHADR_b_TbLQIwBLReset));

    /* Logic: '<S47>/Logical2' incorporates:
     *  Logic: '<S47>/Logical12'
     */
    VeHADR_b_CalcBLSpeedRefNb =
        ((HADR_ac_B.VariantMergeForOutportVeHADR_b_RearMtrBL) && (!rtb_Logical4));

    /* Outputs for Atomic SubSystem: '<S47>/DigitalLowpassResetEnabled5' */
    /* Switch: '<S245>/Switch1' incorporates:
     *  Constant: '<S268>/Calib'
     *  Logic: '<S47>/Logical Operator1'
     *  Product: '<S245>/Multiplication'
     *  Sum: '<S245>/Subtraction'
     *  Sum: '<S245>/Summation'
     *  UnitDelay: '<S245>/Unit Delay'
     */
    if (!VeHADR_b_CalcBLSpeedRefNb)
    {
        HADR_ac_DW.UnitDelay_DSTATE_m = VaHADR_nr_KalmanBL_XHat[1];
    }
    else
    {
        HADR_ac_DW.UnitDelay_DSTATE_m += (VeHADR_nr_NbRef_BLRaw -
            HADR_ac_DW.UnitDelay_DSTATE_m) * KeHADR_k_TbInLashSpdFilt;
    }

    /* End of Switch: '<S245>/Switch1' */
    /* End of Outputs for SubSystem: '<S47>/DigitalLowpassResetEnabled5' */

    /* Switch: '<S47>/Switch2' */
    if (VeHADR_b_CalcBLSpeedRefNb)
    {
        /* Switch: '<S47>/Switch2' incorporates:
         *  UnitDelay: '<S245>/Unit Delay'
         */
        VeHADR_nr_NbRef_LQIBL = HADR_ac_DW.UnitDelay_DSTATE_m;
    }
    else
    {
        /* Switch: '<S47>/Switch2' */
        VeHADR_nr_NbRef_LQIBL = HADR_ac_DW.UnitDelay1_DSTATE[1];
    }

    /* End of Switch: '<S47>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S47>/DigitalLowpassResetEnabled3' */
    /* Outputs for Atomic SubSystem: '<S47>/DigitalLowpassResetEnabled1' */
    /* Switch: '<S241>/Switch1' incorporates:
     *  Constant: '<S269>/Calib'
     *  Constant: '<S47>/Constant10'
     *  Constant: '<S47>/Constant11'
     *  Constant: '<S47>/Constant13'
     *  Product: '<S241>/Multiplication'
     *  Product: '<S243>/Multiplication'
     *  Sum: '<S241>/Subtraction'
     *  Sum: '<S241>/Summation'
     *  Sum: '<S243>/Subtraction'
     *  Sum: '<S243>/Summation'
     *  Switch: '<S243>/Switch1'
     *  UnitDelay: '<S241>/Unit Delay'
     *  UnitDelay: '<S243>/Unit Delay'
     */
    if (HADR_ac_B.VariantMergeForOutportVeHADR_b_RearMtrBL)
    {
        HADR_ac_DW.UnitDelay_DSTATE_n = 0.0F;
        HADR_ac_DW.UnitDelay_DSTATE_bh = 0.0F;
    }
    else
    {
        HADR_ac_DW.UnitDelay_DSTATE_n += (1.0F - HADR_ac_DW.UnitDelay_DSTATE_n) *
            KeHADR_k_TbSpringTrqShpLashExit;
        HADR_ac_DW.UnitDelay_DSTATE_bh +=
            (rtb_TmpSignalConversionAtRGNR_M_RgnBrkOu -
             HADR_ac_DW.UnitDelay_DSTATE_bh) * HADR_ac_DW.UnitDelay_DSTATE_n;
    }

    /* End of Switch: '<S241>/Switch1' */
    /* End of Outputs for SubSystem: '<S47>/DigitalLowpassResetEnabled1' */
    /* End of Outputs for SubSystem: '<S47>/DigitalLowpassResetEnabled3' */

    /* Sum: '<S47>/Sum8' incorporates:
     *  UnitDelay: '<S243>/Unit Delay'
     */
    rtb_TmpSignalConversionAtCSVR_n_WhlSpdLH =
        rtb_TmpSignalConversionAtRGNR_M_RgnBrkOu -
        HADR_ac_DW.UnitDelay_DSTATE_bh;

    /* Outputs for Atomic SubSystem: '<S47>/DigitalLowpassResetEnabled2' */
    /* Outputs for Atomic SubSystem: '<S47>/DigitalLowpassResetEnabled4' */
    /* Switch: '<S244>/Switch1' incorporates:
     *  Constant: '<S267>/Calib'
     *  Constant: '<S47>/Constant6'
     *  Constant: '<S47>/Constant7'
     *  Constant: '<S47>/Constant9'
     *  Product: '<S242>/Multiplication'
     *  Product: '<S244>/Multiplication'
     *  Sum: '<S242>/Subtraction'
     *  Sum: '<S242>/Summation'
     *  Sum: '<S244>/Subtraction'
     *  Sum: '<S244>/Summation'
     *  Switch: '<S242>/Switch1'
     *  UnitDelay: '<S242>/Unit Delay'
     *  UnitDelay: '<S244>/Unit Delay'
     */
    if (HADR_ac_B.VariantMergeForOutportVeHADR_b_FrntMtrBL)
    {
        HADR_ac_DW.UnitDelay_DSTATE_a = 0.0F;
        HADR_ac_DW.UnitDelay_DSTATE_c = 0.0F;
    }
    else
    {
        HADR_ac_DW.UnitDelay_DSTATE_a += (1.0F - HADR_ac_DW.UnitDelay_DSTATE_a) *
            KeHADR_k_TaSpringTrqShpLashExit;
        HADR_ac_DW.UnitDelay_DSTATE_c +=
            (rtb_TmpSignalConversionAtRGNR_M_RgnBrk_m -
             HADR_ac_DW.UnitDelay_DSTATE_c) * HADR_ac_DW.UnitDelay_DSTATE_a;
    }

    /* End of Switch: '<S244>/Switch1' */
    /* End of Outputs for SubSystem: '<S47>/DigitalLowpassResetEnabled4' */
    /* End of Outputs for SubSystem: '<S47>/DigitalLowpassResetEnabled2' */

    /* Switch: '<S47>/Switch7' incorporates:
     *  Constant: '<S47>/Constant11'
     *  Constant: '<S47>/Constant17'
     *  Constant: '<S47>/Constant19'
     *  Logic: '<S47>/Logical7'
     *  Logic: '<S47>/Logical8'
     *  RelationalOperator: '<S47>/Comparison4'
     *  RelationalOperator: '<S47>/Comparison6'
     *  RelationalOperator: '<S47>/Comparison8'
     *  UnitDelay: '<S241>/Unit Delay'
     */
    if ((((sint32)VeHADR_Cnt_MatrixCase_LQI) == 3) || ((((sint32)
            VeHADR_Cnt_MatrixCase_LQI) == 1) && (1.0F !=
            HADR_ac_DW.UnitDelay_DSTATE_n)))
    {
        /* Switch: '<S47>/Switch7' incorporates:
         *  Sum: '<S47>/Sum9'
         *  UnitDelay: '<S242>/Unit Delay'
         */
        VeHADR_M_TaLQIBL_Ref = rtb_TmpSignalConversionAtCSVR_n_WhlSpdLH +
            HADR_ac_DW.UnitDelay_DSTATE_c;
    }
    else
    {
        /* Switch: '<S47>/Switch7' incorporates:
         *  UnitDelay: '<S242>/Unit Delay'
         */
        VeHADR_M_TaLQIBL_Ref = HADR_ac_DW.UnitDelay_DSTATE_c;
    }

    /* End of Switch: '<S47>/Switch7' */

    /* Sum: '<S47>/Sum7' incorporates:
     *  UnitDelay: '<S242>/Unit Delay'
     */
    rtb_TmpSignalConversionAtCSVR_v_VehSpdSi =
        rtb_TmpSignalConversionAtRGNR_M_RgnBrk_m - HADR_ac_DW.UnitDelay_DSTATE_c;

    /* Switch: '<S47>/Switch8' incorporates:
     *  Constant: '<S47>/Constant18'
     *  Constant: '<S47>/Constant21'
     *  Constant: '<S47>/Constant7'
     *  Logic: '<S47>/Logical10'
     *  Logic: '<S47>/Logical9'
     *  RelationalOperator: '<S47>/Comparison10'
     *  RelationalOperator: '<S47>/Comparison3'
     *  RelationalOperator: '<S47>/Comparison7'
     *  UnitDelay: '<S244>/Unit Delay'
     */
    if ((((sint32)VeHADR_Cnt_MatrixCase_LQI) == 2) || ((((sint32)
            VeHADR_Cnt_MatrixCase_LQI) == 1) && (1.0F !=
            HADR_ac_DW.UnitDelay_DSTATE_a)))
    {
        /* Switch: '<S47>/Switch8' incorporates:
         *  Sum: '<S47>/Sum10'
         *  UnitDelay: '<S243>/Unit Delay'
         */
        VeHADR_M_TbLQIBL_Ref = rtb_TmpSignalConversionAtCSVR_v_VehSpdSi +
            HADR_ac_DW.UnitDelay_DSTATE_bh;
    }
    else
    {
        /* Switch: '<S47>/Switch8' incorporates:
         *  UnitDelay: '<S243>/Unit Delay'
         */
        VeHADR_M_TbLQIBL_Ref = HADR_ac_DW.UnitDelay_DSTATE_bh;
    }

    /* End of Switch: '<S47>/Switch8' */

    /* SignalConversion generated from: '<S47>/Product5' */
    rtb_TmpSignalConversionAtProduct5Inport2[0] = VeHADR_nr_NaRef_LQIBL;
    rtb_TmpSignalConversionAtProduct5Inport2[1] = VeHADR_nr_NbRef_LQIBL;
    rtb_TmpSignalConversionAtProduct5Inport2[2] = HADR_ac_DW.UnitDelay1_DSTATE[2];
    rtb_TmpSignalConversionAtProduct5Inport2[3] = VeHADR_M_TaLQIBL_Ref;
    rtb_TmpSignalConversionAtProduct5Inport2[4] = VeHADR_M_TbLQIBL_Ref;

    /* SignalConversion generated from: '<S47>/Product4' */
    rtb_TmpSignalConversionAtProduct4Inport2[0] =
        rtb_TmpSignalConversionAtCSVR_n_WhlSpdRH;
    for (i = 0; i < 2; i++)
    {
        rtb_TmpSignalConversionAtProduct4Inport2[i + 1] =
            VaHADR_nr_KalmanBL_XHat[i + 1];
    }

    /* Switch: '<S47>/Switch13' */
    if (VeHADR_b_DsblMtrA_Dnmc_LQI)
    {
        /* SignalConversion generated from: '<S47>/Product4' incorporates:
         *  Constant: '<S47>/Constant27'
         */
        rtb_TmpSignalConversionAtProduct4Inport2[3] = 0.0F;
    }
    else
    {
        /* SignalConversion generated from: '<S47>/Product4' */
        rtb_TmpSignalConversionAtProduct4Inport2[3] = VaHADR_nr_KalmanBL_XHat[3];
    }

    /* End of Switch: '<S47>/Switch13' */

    /* SignalConversion generated from: '<S47>/Product4' */
    rtb_TmpSignalConversionAtProduct4Inport2[4] = VaHADR_nr_KalmanBL_XHat[4];
    for (i = 0; i < 5; i++)
    {
        /* Sum: '<S47>/Sum1' */
        VaHADR_M_LQIError[(i)] = rtb_TmpSignalConversionAtProduct5Inport2[i] -
            rtb_TmpSignalConversionAtProduct4Inport2[i];
    }

    for (i_0 = 0; i_0 < 2; i_0++)
    {
        /* Product: '<S47>/Product' */
        VaHADR_M_LQIBL_Kp[(i_0)] = 0.0F;

        /* Product: '<S47>/Product5' */
        tmp[i_0] = 0.0F;

        /* Product: '<S47>/Product4' */
        rtb_Switch_b[i_0] = 0.0F;
        for (i = 0; i < 5; i++)
        {
            /* Product: '<S47>/Product' incorporates:
             *  Product: '<S47>/Product4'
             *  Product: '<S47>/Product5'
             */
            VaHADR_M_LQIBL_Kp_tmp = (i * 2) + i_0;

            /* Product: '<S47>/Product' incorporates:
             *  Merge: '<S249>/Merge5'
             */
            VaHADR_M_LQIBL_Kp[(i_0)] = (VaHADR_K_LQI_Kp[(VaHADR_M_LQIBL_Kp_tmp)]
                * VaHADR_M_LQIError[(i)]) + VaHADR_M_LQIBL_Kp[(i_0)];

            /* Product: '<S47>/Product5' incorporates:
             *  Merge: '<S249>/Merge7'
             *  Product: '<S47>/Product4'
             */
            rtb_TmpSignalConversionAtCSVR_n_WhlSpdRH = VaHADR_K_LQI_CMat
                [(VaHADR_M_LQIBL_Kp_tmp)];
            tmp[i_0] += rtb_TmpSignalConversionAtCSVR_n_WhlSpdRH *
                rtb_TmpSignalConversionAtProduct5Inport2[i];

            /* Product: '<S47>/Product4' */
            rtb_Switch_b[i_0] += rtb_TmpSignalConversionAtCSVR_n_WhlSpdRH *
                rtb_TmpSignalConversionAtProduct4Inport2[i];
        }

        /* Sum: '<S47>/Sum2' */
        rtb_Switch_k[i_0] = tmp[i_0] - rtb_Switch_b[i_0];
    }

    /* SignalConversion generated from: '<S47>/Product1' incorporates:
     *  Constant: '<S254>/Calib'
     *  Constant: '<S255>/Calib'
     *  Product: '<S47>/Product2'
     *  Product: '<S47>/Product3'
     *  Sum: '<S47>/Add5'
     *  Sum: '<S47>/Add6'
     *  Sum: '<S47>/Add7'
     *  Sum: '<S47>/Add8'
     *  UnitDelay: '<S47>/Unit Delay1'
     *  UnitDelay: '<S47>/Unit Delay3'
     */
    rtb_Switch_b[0] = ((HADR_ac_DW.UnitDelay1_DSTATE_o - VeHADR_M_LQIMtrAraw) *
                       KeHADR_K_BackCalcMtrALQI) + rtb_Switch_k[0];
    rtb_Switch_b[1] = ((HADR_ac_DW.UnitDelay3_DSTATE_m - VeHADR_M_LQIMtrBraw) *
                       KeHADR_K_BackCalcMtrBLQI) + rtb_Switch_k[1];

    /* Outputs for Atomic SubSystem: '<S47>/IntegratorKResetEnabledLimited1' */
    /* Switch: '<S253>/Switch' */
    rtb_Logical13_0[0] = rtb_Logical3;
    rtb_Logical13_0[1] = rtb_Logical4;
    VeHADR_M_MtrAOL_AD[0] = rtb_TmpSignalConversionAtRGNR_M_RgnBrk_m;
    VeHADR_M_MtrAOL_AD[1] = rtb_TmpSignalConversionAtRGNR_M_RgnBrkOu;

    /* Outputs for Atomic SubSystem: '<S253>/Limiter' */
    for (i = 0; i < 2; i++)
    {
        /* Product: '<S47>/Product1' incorporates:
         *  Merge: '<S249>/Merge6'
         */
        tmp[i] = 0.0F;
        for (i_0 = 0; i_0 < 2; i_0++)
        {
            tmp[i] += VaHADR_K_LQI_Ki[(i_0 * 2) + i] * rtb_Switch_b[i_0];
        }

        /* End of Product: '<S47>/Product1' */

        /* Switch: '<S253>/Switch' */
        if (rtb_Logical13_0[i])
        {
            /* Switch: '<S253>/Switch' */
            rtb_TmpSignalConversionAtCSVR_n_WhlSpdRH = VeHADR_M_MtrAOL_AD[i];
        }
        else
        {
            /* Switch: '<S253>/Switch' incorporates:
             *  Constant: '<S250>/Calib'
             *  Product: '<S253>/Multiplication'
             *  Sum: '<S253>/Sum//Sub'
             *  UnitDelay: '<S253>/Unit Delay'
             */
            rtb_TmpSignalConversionAtCSVR_n_WhlSpdRH = (tmp[i] *
                HeHADR_t_FastTEF_dT) + VaHADR_M_LQIBL_Ki[(i)];
        }

        /* Switch: '<S378>/Switch1' incorporates:
         *  Constant: '<S47>/Constant'
         *  RelationalOperator: '<S378>/Relational Operator'
         */
        if (9999.0F < rtb_TmpSignalConversionAtCSVR_n_WhlSpdRH)
        {
            /* Sum: '<S47>/Add' */
            rtb_TmpSignalConversionAtCSVR_n_WhlSpdRH = 9999.0F;
        }

        /* End of Switch: '<S378>/Switch1' */

        /* Switch: '<S378>/Switch' incorporates:
         *  Constant: '<S47>/Constant1'
         *  RelationalOperator: '<S378>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtCSVR_n_WhlSpdRH > -9999.0F)
        {
            /* Switch: '<S378>/Switch' */
            VaHADR_M_LQIBL_Ki[(i)] = rtb_TmpSignalConversionAtCSVR_n_WhlSpdRH;
        }
        else
        {
            /* Switch: '<S378>/Switch' */
            VaHADR_M_LQIBL_Ki[(i)] = -9999.0F;
        }

        /* End of Switch: '<S378>/Switch' */

        /* Switch: '<S253>/Switch' incorporates:
         *  Sum: '<S47>/Add'
         */
        rtb_Switch_l[i] = VaHADR_M_LQIBL_Kp[(i)] + VaHADR_M_LQIBL_Ki[(i)];
    }

    /* End of Outputs for SubSystem: '<S253>/Limiter' */
    /* End of Outputs for SubSystem: '<S47>/IntegratorKResetEnabledLimited1' */

    /* Switch: '<S47>/Switch6' incorporates:
     *  Constant: '<S265>/Calib'
     */
    if (KeHADR_b_UseTblLQIOffset)
    {
        /* Lookup_n-D: '<S379>/Vector' incorporates:
         *  Gain: '<S39>/Gain'
         *  Sum: '<S47>/Sum8'
         */
        rtb_TmpSignalConversionAtCSVR_n_WhlSpd_n = look2_iflf_binlca_16a
            (rtb_TmpSignalConversionAtCSVR_n_WhlSpdLH,
             rtb_TmpSignalConversionAtRGNR_M_RgnBrk_m, ((const float32 *)
              &(KyHADR_m_AllowedMtrLQIOffset[0])), ((const float32 *)
              &(KxHADR_m_AllowedMtrLQIOffset[0])), ((const float32 *)
              &(KtHADR_m_AllowedMtrLQIOffset[0])), HADR_ac_ConstP.pooled10, 4U);

        /* Lookup_n-D: '<S380>/Vector' incorporates:
         *  Gain: '<S40>/Gain'
         *  Sum: '<S47>/Sum7'
         */
        rtb_TmpSignalConversionAtCSVR_n_WhlSpdRH = look2_iflf_binlca_16a
            (rtb_TmpSignalConversionAtCSVR_v_VehSpdSi,
             rtb_TmpSignalConversionAtRGNR_M_RgnBrkOu, ((const float32 *)
              &(KyHADR_m_AllowedMtrLQIOffset[0])), ((const float32 *)
              &(KxHADR_m_AllowedMtrLQIOffset[0])), ((const float32 *)
              &(KtHADR_m_AllowedMtrLQIOffset[0])), HADR_ac_ConstP.pooled10, 4U);

        /* Switch: '<S47>/Switch6' incorporates:
         *  Gain: '<S276>/Gain'
         *  Gain: '<S277>/Gain'
         */
        rtb_TmpSignalConversionAtCSVR_n_WhlSpd_o =
            -rtb_TmpSignalConversionAtCSVR_n_WhlSpd_n;
        rtb_TmpSignalConversionAtCSVR_n_WhlSpdLH =
            -rtb_TmpSignalConversionAtCSVR_n_WhlSpdRH;
    }
    else
    {
        /* Switch: '<S47>/Switch6' incorporates:
         *  Constant: '<S256>/Calib'
         *  Constant: '<S257>/Calib'
         *  Constant: '<S258>/Calib'
         *  Constant: '<S259>/Calib'
         */
        rtb_TmpSignalConversionAtCSVR_n_WhlSpd_n = KeHADR_M_MaxOffsetLQIMtrA;
        rtb_TmpSignalConversionAtCSVR_n_WhlSpd_o = KeHADR_M_MinOffsetLQIMtrA;
        rtb_TmpSignalConversionAtCSVR_n_WhlSpdRH = KeHADR_M_MaxOffsetLQIMtrB;
        rtb_TmpSignalConversionAtCSVR_n_WhlSpdLH = KeHADR_M_MinOffsetLQIMtrB;
    }

    /* End of Switch: '<S47>/Switch6' */

    /* Switch: '<S47>/Switch' incorporates:
     *  Switch: '<S47>/Switch3'
     */
    if (rtb_Logical3)
    {
        /* Switch: '<S47>/Switch' incorporates:
         *  Constant: '<S47>/Constant5'
         */
        rtb_TmpSignalConversionAtCSVR_v_VehSpdSi = 0.0F;

        /* Switch: '<S47>/Switch3' incorporates:
         *  Constant: '<S47>/Constant8'
         */
        HADR_ac_DW.UnitDelay1_DSTATE_o = 0.0F;
    }
    else
    {
        /* Switch: '<S47>/Switch' incorporates:
         *  Sum: '<S47>/Add1'
         */
        rtb_TmpSignalConversionAtCSVR_v_VehSpdSi =
            rtb_TmpSignalConversionAtCSVR_n_WhlSpd_n +
            rtb_TmpSignalConversionAtRGNR_M_RgnBrk_m;

        /* Switch: '<S47>/Switch3' incorporates:
         *  Sum: '<S47>/Add2'
         */
        HADR_ac_DW.UnitDelay1_DSTATE_o =
            rtb_TmpSignalConversionAtRGNR_M_RgnBrk_m +
            rtb_TmpSignalConversionAtCSVR_n_WhlSpd_o;
    }

    /* End of Switch: '<S47>/Switch' */

    /* Gain: '<S278>/Gain' */
    VeHADR_M_LQIMtrAraw = rtb_Switch_l[0];

    /* Outputs for Atomic SubSystem: '<S47>/Limiter2' */
    /* Switch: '<S274>/Switch1' incorporates:
     *  RelationalOperator: '<S274>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtCSVR_v_VehSpdSi >= VeHADR_M_LQIMtrAraw)
    {
        /* Switch: '<S275>/Switch1' */
        rtb_TmpSignalConversionAtCSVR_v_VehSpdSi = VeHADR_M_LQIMtrAraw;
    }

    /* End of Switch: '<S274>/Switch1' */

    /* Switch: '<S274>/Switch' incorporates:
     *  RelationalOperator: '<S274>/Relational Operator1'
     *  UnitDelay: '<S47>/Unit Delay1'
     */
    if (rtb_TmpSignalConversionAtCSVR_v_VehSpdSi >
            HADR_ac_DW.UnitDelay1_DSTATE_o)
    {
        HADR_ac_DW.UnitDelay1_DSTATE_o =
            rtb_TmpSignalConversionAtCSVR_v_VehSpdSi;
    }

    /* End of Switch: '<S274>/Switch' */
    /* End of Outputs for SubSystem: '<S47>/Limiter2' */

    /* Switch: '<S47>/Switch4' incorporates:
     *  Switch: '<S47>/Switch5'
     */
    if (rtb_Logical4)
    {
        /* Switch: '<S47>/Switch4' incorporates:
         *  Constant: '<S47>/Constant12'
         */
        rtb_TmpSignalConversionAtCSVR_v_VehSpdSi = 0.0F;

        /* Switch: '<S47>/Switch5' incorporates:
         *  Constant: '<S47>/Constant16'
         */
        HADR_ac_DW.UnitDelay3_DSTATE_m = 0.0F;
    }
    else
    {
        /* Switch: '<S47>/Switch4' incorporates:
         *  Sum: '<S47>/Add3'
         */
        rtb_TmpSignalConversionAtCSVR_v_VehSpdSi =
            rtb_TmpSignalConversionAtCSVR_n_WhlSpdRH +
            rtb_TmpSignalConversionAtRGNR_M_RgnBrkOu;

        /* Switch: '<S47>/Switch5' incorporates:
         *  Sum: '<S47>/Add4'
         */
        HADR_ac_DW.UnitDelay3_DSTATE_m =
            rtb_TmpSignalConversionAtRGNR_M_RgnBrkOu +
            rtb_TmpSignalConversionAtCSVR_n_WhlSpdLH;
    }

    /* End of Switch: '<S47>/Switch4' */

    /* Gain: '<S279>/Gain' */
    VeHADR_M_LQIMtrBraw = rtb_Switch_l[1];

    /* Outputs for Atomic SubSystem: '<S47>/Limiter3' */
    /* Switch: '<S275>/Switch1' incorporates:
     *  RelationalOperator: '<S275>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtCSVR_v_VehSpdSi >= VeHADR_M_LQIMtrBraw)
    {
        /* Switch: '<S275>/Switch1' */
        rtb_TmpSignalConversionAtCSVR_v_VehSpdSi = VeHADR_M_LQIMtrBraw;
    }

    /* End of Switch: '<S275>/Switch1' */

    /* Switch: '<S275>/Switch' incorporates:
     *  RelationalOperator: '<S275>/Relational Operator1'
     *  UnitDelay: '<S47>/Unit Delay3'
     */
    if (rtb_TmpSignalConversionAtCSVR_v_VehSpdSi >
            HADR_ac_DW.UnitDelay3_DSTATE_m)
    {
        HADR_ac_DW.UnitDelay3_DSTATE_m =
            rtb_TmpSignalConversionAtCSVR_v_VehSpdSi;
    }

    /* End of Switch: '<S275>/Switch' */
    /* End of Outputs for SubSystem: '<S47>/Limiter3' */

    /* Switch: '<S47>/Switch10' */
    if (rtb_LogicalOperator5)
    {
        /* Switch: '<S47>/Switch10' */
        VeHADR_M_LQIMtrBcmd = rtb_TmpSignalConversionAtRGNR_M_RgnBrkOu;
    }
    else
    {
        /* Switch: '<S47>/Switch10' incorporates:
         *  UnitDelay: '<S47>/Unit Delay3'
         */
        VeHADR_M_LQIMtrBcmd = HADR_ac_DW.UnitDelay3_DSTATE_m;
    }

    /* End of Switch: '<S47>/Switch10' */

    /* Switch: '<S47>/Switch9' */
    if (rtb_LogicalOperator2_n)
    {
        /* Switch: '<S47>/Switch9' */
        VeHADR_M_LQIMtrAcmd = rtb_TmpSignalConversionAtRGNR_M_RgnBrk_m;
    }
    else
    {
        /* Switch: '<S47>/Switch9' incorporates:
         *  UnitDelay: '<S47>/Unit Delay1'
         */
        VeHADR_M_LQIMtrAcmd = HADR_ac_DW.UnitDelay1_DSTATE_o;
    }

    /* End of Switch: '<S47>/Switch9' */
    /*  Since i = 5 is used to end the Kalman loop which is also bigger than the matrix we are storing
       which is 0 based, need to drop to i-1 to store LQI results of current timestep
       Input Store U matrix */
    HADR_ac_DW.TaLQI[HADR_ac_B.i - 1] = VeHADR_M_LQIMtrAcmd;
    HADR_ac_DW.TbLQI[HADR_ac_B.i - 1] = VeHADR_M_LQIMtrBcmd;

    /* Gain: '<S17>/Gain' */
    HADR_ac_DW.TRL[HADR_ac_B.i - 1] = -VaHADR_M_RoadLoadEst_AD[1];
    HADR_ac_DW.Matrix_Case[HADR_ac_B.i - 1] = VeHADR_Cnt_MatrixCase_KF;

    /*  Input Store xHat matrix */
    HADR_ac_DW.xHat[HADR_ac_B.i - 1] = VaHADR_nr_KalmanBL_XHat[0];
    HADR_ac_DW.xHat[HADR_ac_B.i + 19] = VaHADR_nr_KalmanBL_XHat[1];
    HADR_ac_DW.xHat[HADR_ac_B.i + 39] = VaHADR_nr_KalmanBL_XHat[2];
    HADR_ac_DW.xHat[HADR_ac_B.i + 59] = VaHADR_nr_KalmanBL_XHat[3];
    HADR_ac_DW.xHat[HADR_ac_B.i + 79] = VaHADR_nr_KalmanBL_XHat[4];
    HADR_ac_DW.xPos[HADR_ac_B.i - 1] = VaHADR_nr_xHat_Pos[0];
    HADR_ac_DW.xPos[HADR_ac_B.i + 19] = VaHADR_nr_xHat_Pos[1];
    HADR_ac_DW.xPos[HADR_ac_B.i + 39] = VaHADR_nr_xHat_Pos[2];
    HADR_ac_DW.SpringTrqMtrB_Plant_sym[HADR_ac_B.i - 1] =
        HADR_ac_B.OutportBufferForSpringTb;
    HADR_ac_DW.SpringTrqMtrA_Plant_sym[HADR_ac_B.i - 1] =
        HADR_ac_B.OutportBufferForSpringTa;
    HADR_ac_DW.UseBL_TbCurr[HADR_ac_B.i - 1] =
        HADR_ac_B.VariantMergeForOutportVeHADR_b_RearMtrBL;
    HADR_ac_DW.UseBL_TaCurr[HADR_ac_B.i - 1] =
        HADR_ac_B.VariantMergeForOutportVeHADR_b_FrntMtrBL;

    /* VariantMerge generated from: '<S6>/VeHADR_scl_AEMDFrntMtrGain' incorporates:
     *  Switch: '<S16>/Switch'
     */
    HADR_ac_B.VariantMergeForOutportVeHADR_scl_AEMDFrn = (float32)
        ((!HADR_ac_B.VariantMergeForOutportVeHADR_b_FrntMtrBL) ? 1 : 0);

    /* VariantMerge generated from: '<S6>/VeHADR_scl_AEMDRearMtrGain' incorporates:
     *  Switch: '<S16>/Switch1'
     */
    HADR_ac_B.VariantMergeForOutportVeHADR_scl_AEMDRea = (float32)
        ((!HADR_ac_B.VariantMergeForOutportVeHADR_b_RearMtrBL) ? 1 : 0);

    /* SwitchCase: '<S9>/Switch_Case' incorporates:
     *  Constant: '<S33>/Calib'
     */
    if (((sint32)KeHADR_y_SelADStrat) == 1)
    {
        /* Outputs for IfAction SubSystem: '<S9>/LQICmndBL' incorporates:
         *  ActionPort: '<S34>/Action Port'
         */
        /* Merge: '<S9>/Merge' incorporates:
         *  Inport: '<S34>/TrqCmndIn'
         *  SignalConversion generated from: '<S34>/TrqCmndOut'
         */
        VaHADR_M_TrqCmndsAD[0] = VeHADR_M_LQIMtrAcmd;
        VaHADR_M_TrqCmndsAD[1] = VeHADR_M_LQIMtrBcmd;

        /* End of Outputs for SubSystem: '<S9>/LQICmndBL' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S9>/ELSE_OL' incorporates:
         *  ActionPort: '<S19>/Action Port'
         */
        /* Merge: '<S9>/Merge' incorporates:
         *  Inport: '<S19>/TrqCmndIn'
         */
        VaHADR_M_TrqCmndsAD[0] = rtb_TmpSignalConversionAtRGNR_M_RgnBrk_m;
        VaHADR_M_TrqCmndsAD[1] = rtb_TmpSignalConversionAtRGNR_M_RgnBrkOu;

        /* End of Outputs for SubSystem: '<S9>/ELSE_OL' */
    }

    /* End of SwitchCase: '<S9>/Switch_Case' */

    /* Switch: '<S9>/Switch2' incorporates:
     *  Constant: '<S23>/Calib'
     */
    if (HeHADR_b_DeactLash)
    {
        /* Switch: '<S7>/Switch' */
        rtb_Switch_k[0] = rtb_TmpSignalConversionAtRGNR_M_RgnBrk_m;
        rtb_Switch_k[1] = rtb_TmpSignalConversionAtRGNR_M_RgnBrkOu;
    }
    else
    {
        /* Switch: '<S7>/Switch' */
        rtb_Switch_k[0] = VaHADR_M_TrqCmndsAD[0];
        rtb_Switch_k[1] = VaHADR_M_TrqCmndsAD[1];
    }

    /* End of Switch: '<S9>/Switch2' */

    /* Sum: '<S9>/Sum2' */
    VeHADR_M_MtrBDB4Filt_Gain = rtb_Switch_k[1] -
        rtb_TmpSignalConversionAtRGNR_M_RgnBrkOu;

    /* Product: '<S9>/Product1' incorporates:
     *  Constant: '<S30>/Calib'
     */
    rtb_TmpSignalConversionAtRGNR_M_RgnBrkOu = VeHADR_M_MtrBDB4Filt_Gain *
        KeHADR_k_MtrB_ADGain;

    /* RelationalOperator: '<S21>/Comparison4' incorporates:
     *  Constant: '<S21>/Constant Value1'
     */
    rtb_LogicalOperator5 = (rtb_TmpSignalConversionAtRGNR_M_RgnBrkOu == 0.0F);

    /* Outputs for Atomic SubSystem: '<S21>/EdgeRising1' */
    /* Logic: '<S385>/OR1' incorporates:
     *  UnitDelay: '<S385>/Unit Delay'
     */
    rtb_Logical4 = !HADR_ac_DW.UnitDelay_DSTATE_jy;

    /* Update for UnitDelay: '<S385>/Unit Delay' */
    HADR_ac_DW.UnitDelay_DSTATE_jy = rtb_LogicalOperator5;

    /* Outputs for Atomic SubSystem: '<S21>/DigitalLowpassResetEnabled' */
    /* Switch: '<S384>/Switch1' incorporates:
     *  Constant: '<S31>/Calib'
     *  Logic: '<S385>/AND'
     *  Product: '<S384>/Multiplication'
     *  Sum: '<S384>/Subtraction'
     *  Sum: '<S384>/Summation'
     *  UnitDelay: '<S21>/Unit Delay1'
     *  UnitDelay: '<S21>/Unit Delay2'
     *  UnitDelay: '<S384>/Unit Delay'
     */
    if (rtb_LogicalOperator5 && rtb_Logical4)
    {
        HADR_ac_DW.UnitDelay_DSTATE_b = HADR_ac_DW.UnitDelay2_DSTATE_g;
    }
    else
    {
        HADR_ac_DW.UnitDelay_DSTATE_b += (HADR_ac_DW.UnitDelay1_DSTATE_b -
            HADR_ac_DW.UnitDelay_DSTATE_b) * KeHADR_k_MtrB_DcBlkFiltCoeff;
    }

    /* End of Switch: '<S384>/Switch1' */
    /* End of Outputs for SubSystem: '<S21>/DigitalLowpassResetEnabled' */
    /* End of Outputs for SubSystem: '<S21>/EdgeRising1' */

    /* Sum: '<S21>/Subtraction1' incorporates:
     *  UnitDelay: '<S384>/Unit Delay'
     */
    VeHADR_M_MtrBAD = rtb_TmpSignalConversionAtRGNR_M_RgnBrkOu -
        HADR_ac_DW.UnitDelay_DSTATE_b;

    /* Gain: '<S21>/Gain' incorporates:
     *  UnitDelay: '<S21>/Unit Delay2'
     */
    HADR_ac_DW.UnitDelay2_DSTATE_g = -VeHADR_M_MtrBAD;

    /* Sum: '<S9>/Sum1' */
    VeHADR_M_MtrADB4Filt_Gain = rtb_Switch_k[0] -
        rtb_TmpSignalConversionAtRGNR_M_RgnBrk_m;

    /* Product: '<S9>/Product' incorporates:
     *  Constant: '<S28>/Calib'
     */
    rtb_TmpSignalConversionAtRGNR_M_RgnBrk_m = VeHADR_M_MtrADB4Filt_Gain *
        KeHADR_k_MtrA_ADGain;

    /* RelationalOperator: '<S22>/Comparison4' incorporates:
     *  Constant: '<S22>/Constant Value1'
     */
    rtb_LogicalOperator5 = (rtb_TmpSignalConversionAtRGNR_M_RgnBrk_m == 0.0F);

    /* Outputs for Atomic SubSystem: '<S22>/EdgeRising1' */
    /* Logic: '<S387>/OR1' incorporates:
     *  UnitDelay: '<S387>/Unit Delay'
     */
    rtb_Logical4 = !HADR_ac_DW.UnitDelay_DSTATE_h;

    /* Update for UnitDelay: '<S387>/Unit Delay' */
    HADR_ac_DW.UnitDelay_DSTATE_h = rtb_LogicalOperator5;

    /* Outputs for Atomic SubSystem: '<S22>/DigitalLowpassResetEnabled' */
    /* Switch: '<S386>/Switch1' incorporates:
     *  Constant: '<S29>/Calib'
     *  Logic: '<S387>/AND'
     *  Product: '<S386>/Multiplication'
     *  Sum: '<S386>/Subtraction'
     *  Sum: '<S386>/Summation'
     *  UnitDelay: '<S22>/Unit Delay1'
     *  UnitDelay: '<S22>/Unit Delay2'
     *  UnitDelay: '<S386>/Unit Delay'
     */
    if (rtb_LogicalOperator5 && rtb_Logical4)
    {
        HADR_ac_DW.UnitDelay_DSTATE_j = HADR_ac_DW.UnitDelay2_DSTATE_i;
    }
    else
    {
        HADR_ac_DW.UnitDelay_DSTATE_j += (HADR_ac_DW.UnitDelay1_DSTATE_n -
            HADR_ac_DW.UnitDelay_DSTATE_j) * KeHADR_k_MtrA_DcBlkFiltCoeff;
    }

    /* End of Switch: '<S386>/Switch1' */
    /* End of Outputs for SubSystem: '<S22>/DigitalLowpassResetEnabled' */
    /* End of Outputs for SubSystem: '<S22>/EdgeRising1' */

    /* Product: '<S7>/Product' incorporates:
     *  Sum: '<S22>/Subtraction1'
     *  UnitDelay: '<S386>/Unit Delay'
     */
    rtb_TmpSignalConversionAtCSVR_v_VehSpdSi =
        rtb_TmpSignalConversionAtRGNR_M_RgnBrk_m - HADR_ac_DW.UnitDelay_DSTATE_j;

    /* Gain: '<S22>/Gain' incorporates:
     *  UnitDelay: '<S22>/Unit Delay2'
     */
    HADR_ac_DW.UnitDelay2_DSTATE_i = -rtb_TmpSignalConversionAtCSVR_v_VehSpdSi;

    /* Switch: '<S9>/Switch7' incorporates:
     *  Constant: '<S27>/Calib'
     *  Switch: '<S9>/Switch8'
     */
    if (KeHADR_b_bypassDCBlkFilt)
    {
        /* Switch: '<S9>/Switch7' */
        VeHADR_M_MtrAAD = rtb_TmpSignalConversionAtRGNR_M_RgnBrk_m;

        /* Switch: '<S9>/Switch8' */
        VeHADR_M_MtrBAD = rtb_TmpSignalConversionAtRGNR_M_RgnBrkOu;
    }
    else
    {
        /* Switch: '<S9>/Switch7' */
        VeHADR_M_MtrAAD = rtb_TmpSignalConversionAtCSVR_v_VehSpdSi;
    }

    /* End of Switch: '<S9>/Switch7' */

    /* Product: '<S7>/Product' incorporates:
     *  Constant: '<S11>/Calib'
     *  Constant: '<S12>/Calib'
     */
    rtb_TmpSignalConversionAtCSVR_v_VehSpdSi = KeHADR_r_ConvRadpSec2RPM *
        KeHADR_r_MtrSpeedDomainConv;

    /* VariantMerge generated from: '<S6>/VeHADR_n_FrntMtrSpeedEst' incorporates:
     *  Product: '<S7>/Product1'
     */
    HADR_ac_B.VariantMergeForOutportVeHADR_n_FrntMtrSp = HADR_ac_B.Gain *
        rtb_TmpSignalConversionAtCSVR_v_VehSpdSi;

    /* VariantMerge generated from: '<S6>/VeHADR_n_RearMtrSpeedEst' incorporates:
     *  Product: '<S7>/Product2'
     */
    HADR_ac_B.VariantMergeForOutportVeHADR_n_RearMtrSp =
        rtb_TmpSignalConversionAtCSVR_v_VehSpdSi * HADR_ac_B.Gain_e;

    /* Switch: '<S7>/Switch' incorporates:
     *  Constant: '<S10>/Calib'
     */
    if (HeHADR_b_REEV_System)
    {
        /* Switch: '<S7>/Switch' incorporates:
         *  Constant: '<S7>/Constant4'
         */
        rtb_Switch_k[0] = 0.0F;
        rtb_Switch_k[1] = VeHADR_M_MtrAAD;
    }
    else
    {
        /* Switch: '<S7>/Switch' incorporates:
         *  Constant: '<S7>/Constant1'
         */
        rtb_Switch_k[0] = VeHADR_M_MtrAAD;
        rtb_Switch_k[1] = 0.0F;
    }

    /* End of Switch: '<S7>/Switch' */

    /* VariantMerge generated from: '<S6>/VeHADR_M_MtrA_Lash' incorporates:
     *  Gain: '<S13>/Gain'
     */
    VeHADR_M_MtrA_Lash = rtb_Switch_k[0];

    /* VariantMerge generated from: '<S6>/VeHADR_M_MtrC_Lash' incorporates:
     *  Gain: '<S14>/Gain'
     */
    VeHADR_M_MtrC_Lash = rtb_Switch_k[1];

    /* VariantMerge generated from: '<S6>/VeHADR_M_MtrB_Lash' incorporates:
     *  Gain: '<S15>/Gain'
     */
    VeHADR_M_MtrB_Lash = VeHADR_M_MtrBAD;

    /* Update for UnitDelay: '<S9>/Unit Delay2' incorporates:
     *  Selector: '<S9>/Selector'
     */
    HADR_ac_DW.UnitDelay2_DSTATE[0] = VaHADR_nr_RefSpd[2];
    HADR_ac_DW.UnitDelay2_DSTATE[1] = HADR_ac_B.Add2[2];

    /* Update for UnitDelay: '<S40>/Unit Delay3' */
    HADR_ac_DW.UnitDelay3_DSTATE = rtb_TmpSignalConversionAtMtrBOLOutport1;

    /* Update for UnitDelay: '<S39>/Unit Delay3' */
    HADR_ac_DW.UnitDelay3_DSTATE_b = rtb_Switch1_j_idx_0;
    for (i = 0; i < 3; i++)
    {
        /* Update for UnitDelay: '<S9>/Unit Delay1' */
        HADR_ac_DW.UnitDelay1_DSTATE[i] = VaHADR_nr_RefSpd[(i)];

        /* Update for UnitDelay: '<S37>/Unit Delay' */
        HADR_ac_DW.UnitDelay_DSTATE[i] = VaHADR_nr_RefSpd[(i)];
    }

    /* Update for UnitDelay: '<S21>/Unit Delay1' */
    HADR_ac_DW.UnitDelay1_DSTATE_b = rtb_TmpSignalConversionAtRGNR_M_RgnBrkOu;

    /* Update for UnitDelay: '<S22>/Unit Delay1' */
    HADR_ac_DW.UnitDelay1_DSTATE_n = rtb_TmpSignalConversionAtRGNR_M_RgnBrk_m;

    /* End of Outputs for SubSystem: '<S6>/HADR_LashCtrl' */
    /* End of Outputs for SubSystem: '<S3>/HADR_LashCtrl' */
#else

    /* Outputs for Atomic SubSystem: '<S6>/HADR_LashCtrl_NF' */
    /* VariantMerge generated from: '<S6>/VeHADR_M_MtrA_Lash' incorporates:
     *  Constant: '<S8>/Constant1'
     */
    VeHADR_M_MtrA_Lash = 0.0F;

    /* VariantMerge generated from: '<S6>/VeHADR_M_MtrB_Lash' incorporates:
     *  Constant: '<S8>/Constant2'
     */
    VeHADR_M_MtrB_Lash = 0.0F;

    /* VariantMerge generated from: '<S6>/VeHADR_M_MtrC_Lash' incorporates:
     *  Constant: '<S8>/Constant3'
     */
    VeHADR_M_MtrC_Lash = 0.0F;

    /* VariantMerge generated from: '<S6>/VeHADR_scl_AEMDFrntMtrGain' incorporates:
     *  Constant: '<S8>/Constant4'
     */
    HADR_ac_B.VariantMergeForOutportVeHADR_scl_AEMDFrn = 0.0F;

    /* VariantMerge generated from: '<S6>/VeHADR_scl_AEMDRearMtrGain' incorporates:
     *  Constant: '<S8>/Constant5'
     */
    HADR_ac_B.VariantMergeForOutportVeHADR_scl_AEMDRea = 0.0F;

    /* Constant: '<S8>/Constant8' */
    HADR_ac_B.VariantMergeForOutportVeHADR_b_FrntMtrBL = false;

    /* Constant: '<S8>/Constant9' */
    HADR_ac_B.VariantMergeForOutportVeHADR_b_RearMtrBL = false;

    /* VariantMerge generated from: '<S6>/VeHADR_n_FrntMtrSpeedEst' incorporates:
     *  Constant: '<S8>/Constant6'
     */
    HADR_ac_B.VariantMergeForOutportVeHADR_n_FrntMtrSp = 0.0F;

    /* VariantMerge generated from: '<S6>/VeHADR_n_RearMtrSpeedEst' incorporates:
     *  Constant: '<S8>/Constant7'
     */
    HADR_ac_B.VariantMergeForOutportVeHADR_n_RearMtrSp = 0.0F;

    /* End of Outputs for SubSystem: '<S6>/HADR_LashCtrl_NF' */
#endif

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/HADR_SumAndLimits'
     */
    /* Outputs for Atomic SubSystem: '<S5>/HADR_SumAndLimits' */
#if Rte_SysCon_Variant_HADR_SumAndLimits

    /* Outputs for Atomic SubSystem: '<S463>/HADR_SumAndLimits' */
    /* VariantMerge generated from: '<S463>/VeHADR_M_AxleTorqEst' incorporates:
     *  Constant: '<S464>/Constant1'
     */
    HADR_ac_B.VeHADR_M_AxleTorqEst = 0.0F;

    /* VariantMerge generated from: '<S463>/VeHADR_M_DmprTorqEst' incorporates:
     *  Constant: '<S464>/Constant2'
     */
    HADR_ac_B.VeHADR_M_DmprTorqEst = 0.0F;

    /* VariantMerge generated from: '<S463>/VeHADR_M_MtrA_DrvlineDmpgTorq' incorporates:
     *  Sum: '<S464>/Sum'
     */
    HADR_ac_B.VeHADR_M_MtrA_DrvlineDmpgTorq = VeHADR_M_MtrA_Sin +
        VeHADR_M_MtrA_Lash;

    /* VariantMerge generated from: '<S463>/VeHADR_M_MtrA_ReserveTorqNeg' incorporates:
     *  Constant: '<S464>/Constant5'
     */
    HADR_ac_B.VeHADR_M_MtrA_ReserveTorqNeg = 0.0F;

    /* VariantMerge generated from: '<S463>/VeHADR_M_MtrA_ReserveTorqPos' incorporates:
     *  Constant: '<S464>/Constant6'
     */
    HADR_ac_B.VeHADR_M_MtrA_ReserveTorqPos = 0.0F;

    /* VariantMerge generated from: '<S463>/VeHADR_M_MtrB_DrvlineDmpgTorq' incorporates:
     *  Inport: '<S464>/VeHADR_M_MtrB_Lash'
     */
    HADR_ac_B.VeHADR_M_MtrB_DrvlineDmpgTorq = VeHADR_M_MtrB_Lash;

    /* VariantMerge generated from: '<S463>/VeHADR_M_MtrB_ReserveTorqNeg' incorporates:
     *  Constant: '<S464>/Constant9'
     */
    HADR_ac_B.VeHADR_M_MtrB_ReserveTorqNeg = 0.0F;

    /* VariantMerge generated from: '<S463>/VeHADR_M_MtrB_ReserveTorqPos' incorporates:
     *  Constant: '<S464>/Constant10'
     */
    HADR_ac_B.VeHADR_M_MtrB_ReserveTorqPos = 0.0F;

    /* VariantMerge generated from: '<S463>/VeHADR_M_MtrC_DrvlineDmpgTorq' incorporates:
     *  Sum: '<S464>/Sum1'
     */
    HADR_ac_B.VeHADR_M_MtrC_DrvlineDmpgTorq = VeHADR_M_MtrC_Sin +
        VeHADR_M_MtrC_Lash;

    /* VariantMerge generated from: '<S463>/VeHADR_M_MtrC_ReserveTorqNeg' incorporates:
     *  Constant: '<S464>/Constant7'
     */
    HADR_ac_B.VeHADR_M_MtrC_ReserveTorqNeg = 0.0F;

    /* VariantMerge generated from: '<S463>/VeHADR_M_MtrC_ReserveTorqPos' incorporates:
     *  Constant: '<S464>/Constant11'
     */
    HADR_ac_B.VeHADR_M_MtrC_ReserveTorqPos = 0.0F;

    /* VariantMerge generated from: '<S463>/VeHADR_b_EngActDmpgDsblReq' incorporates:
     *  Constant: '<S464>/Constant12'
     */
    HADR_ac_B.VeHADR_b_EngActDmpgDsblReq = false;

    /* VariantMerge generated from: '<S463>/VeHADR_e_LashSt' incorporates:
     *  Constant: '<S466>/Constant'
     */
    HADR_ac_B.VeHADR_e_LashSt = CeHADR_e_LashStZero;

    /* End of Outputs for SubSystem: '<S463>/HADR_SumAndLimits' */
#else

    /* Outputs for Atomic SubSystem: '<S463>/HADR_SumAndLimits_NF' */
    /* VariantMerge generated from: '<S463>/VeHADR_M_AxleTorqEst' incorporates:
     *  Constant: '<S465>/Constant1'
     */
    HADR_ac_B.VeHADR_M_AxleTorqEst = 0.0F;

    /* VariantMerge generated from: '<S463>/VeHADR_M_DmprTorqEst' incorporates:
     *  Constant: '<S465>/Constant2'
     */
    HADR_ac_B.VeHADR_M_DmprTorqEst = 0.0F;

    /* VariantMerge generated from: '<S463>/VeHADR_M_MtrA_DrvlineDmpgTorq' incorporates:
     *  Constant: '<S465>/Constant3'
     */
    HADR_ac_B.VeHADR_M_MtrA_DrvlineDmpgTorq = 0.0F;

    /* VariantMerge generated from: '<S463>/VeHADR_M_MtrA_ReserveTorqNeg' incorporates:
     *  Constant: '<S465>/Constant5'
     */
    HADR_ac_B.VeHADR_M_MtrA_ReserveTorqNeg = 0.0F;

    /* VariantMerge generated from: '<S463>/VeHADR_M_MtrA_ReserveTorqPos' incorporates:
     *  Constant: '<S465>/Constant6'
     */
    HADR_ac_B.VeHADR_M_MtrA_ReserveTorqPos = 0.0F;

    /* VariantMerge generated from: '<S463>/VeHADR_M_MtrB_DrvlineDmpgTorq' incorporates:
     *  Constant: '<S465>/Constant4'
     */
    HADR_ac_B.VeHADR_M_MtrB_DrvlineDmpgTorq = 0.0F;

    /* VariantMerge generated from: '<S463>/VeHADR_M_MtrB_ReserveTorqNeg' incorporates:
     *  Constant: '<S465>/Constant9'
     */
    HADR_ac_B.VeHADR_M_MtrB_ReserveTorqNeg = 0.0F;

    /* VariantMerge generated from: '<S463>/VeHADR_M_MtrB_ReserveTorqPos' incorporates:
     *  Constant: '<S465>/Constant10'
     */
    HADR_ac_B.VeHADR_M_MtrB_ReserveTorqPos = 0.0F;

    /* VariantMerge generated from: '<S463>/VeHADR_M_MtrC_DrvlineDmpgTorq' incorporates:
     *  Constant: '<S465>/Constant8'
     */
    HADR_ac_B.VeHADR_M_MtrC_DrvlineDmpgTorq = 0.0F;

    /* VariantMerge generated from: '<S463>/VeHADR_M_MtrC_ReserveTorqNeg' incorporates:
     *  Constant: '<S465>/Constant7'
     */
    HADR_ac_B.VeHADR_M_MtrC_ReserveTorqNeg = 0.0F;

    /* VariantMerge generated from: '<S463>/VeHADR_M_MtrC_ReserveTorqPos' incorporates:
     *  Constant: '<S465>/Constant11'
     */
    HADR_ac_B.VeHADR_M_MtrC_ReserveTorqPos = 0.0F;

    /* VariantMerge generated from: '<S463>/VeHADR_b_EngActDmpgDsblReq' incorporates:
     *  Constant: '<S465>/Constant12'
     */
    HADR_ac_B.VeHADR_b_EngActDmpgDsblReq = false;

    /* VariantMerge generated from: '<S463>/VeHADR_e_LashSt' incorporates:
     *  Constant: '<S467>/Constant'
     */
    HADR_ac_B.VeHADR_e_LashSt = CeHADR_e_LashStZero;

    /* End of Outputs for SubSystem: '<S463>/HADR_SumAndLimits_NF' */
#endif

    /* End of Outputs for SubSystem: '<S5>/HADR_SumAndLimits' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeHADR_M_AxleTorqEst' incorporates:
     *  SignalConversion generated from: '<S1>/VeHADR_M_AxleTorqEst'
     */
    (void)Rte_Write_VeHADR_M_AxleTorqEst_Value(HADR_ac_B.VeHADR_M_AxleTorqEst);

    /* Outport: '<Root>/VeHADR_M_DmprTorqEst' incorporates:
     *  SignalConversion generated from: '<S1>/VeHADR_M_DmprTorqEst'
     */
    (void)Rte_Write_VeHADR_M_DmprTorqEst_Value(HADR_ac_B.VeHADR_M_DmprTorqEst);

    /* Outport: '<Root>/VeHADR_M_MtrA_DrvlineDmpgTorq' incorporates:
     *  SignalConversion generated from: '<S1>/VeHADR_M_MtrA_DrvlineDmpgTorq'
     */
    (void)Rte_Write_VeHADR_M_MtrA_DrvlineDmpgTorq_Value
        (HADR_ac_B.VeHADR_M_MtrA_DrvlineDmpgTorq);

    /* Outport: '<Root>/VeHADR_M_MtrA_ReserveTorqNeg' incorporates:
     *  SignalConversion generated from: '<S1>/VeHADR_M_MtrA_ReserveTorqNeg'
     */
    (void)Rte_Write_VeHADR_M_MtrA_ReserveTorqNeg_Value
        (HADR_ac_B.VeHADR_M_MtrA_ReserveTorqNeg);

    /* Outport: '<Root>/VeHADR_M_MtrA_ReserveTorqPos' incorporates:
     *  SignalConversion generated from: '<S1>/VeHADR_M_MtrA_ReserveTorqPos'
     */
    (void)Rte_Write_VeHADR_M_MtrA_ReserveTorqPos_Value
        (HADR_ac_B.VeHADR_M_MtrA_ReserveTorqPos);

    /* Outport: '<Root>/VeHADR_M_MtrB_DrvlineDmpgTorq' incorporates:
     *  SignalConversion generated from: '<S1>/VeHADR_M_MtrB_DrvlineDmpgTorq'
     */
    (void)Rte_Write_VeHADR_M_MtrB_DrvlineDmpgTorq_Value
        (HADR_ac_B.VeHADR_M_MtrB_DrvlineDmpgTorq);

    /* Outport: '<Root>/VeHADR_M_MtrB_ReserveTorqNeg' incorporates:
     *  SignalConversion generated from: '<S1>/VeHADR_M_MtrB_ReserveTorqNeg'
     */
    (void)Rte_Write_VeHADR_M_MtrB_ReserveTorqNeg_Value
        (HADR_ac_B.VeHADR_M_MtrB_ReserveTorqNeg);

    /* Outport: '<Root>/VeHADR_M_MtrB_ReserveTorqPos' incorporates:
     *  SignalConversion generated from: '<S1>/VeHADR_M_MtrB_ReserveTorqPos'
     */
    (void)Rte_Write_VeHADR_M_MtrB_ReserveTorqPos_Value
        (HADR_ac_B.VeHADR_M_MtrB_ReserveTorqPos);

    /* Outport: '<Root>/VeHADR_M_MtrC_DrvlineDmpgTorq' incorporates:
     *  SignalConversion generated from: '<S1>/VeHADR_M_MtrC_DrvlineDmpgTorq'
     */
    (void)Rte_Write_VeHADR_M_MtrC_DrvlineDmpgTorq_Value
        (HADR_ac_B.VeHADR_M_MtrC_DrvlineDmpgTorq);

    /* Outport: '<Root>/VeHADR_M_MtrC_ReserveTorqNeg' incorporates:
     *  SignalConversion generated from: '<S1>/VeHADR_M_MtrC_ReserveTorqNeg'
     */
    (void)Rte_Write_VeHADR_M_MtrC_ReserveTorqNeg_Value
        (HADR_ac_B.VeHADR_M_MtrC_ReserveTorqNeg);

    /* Outport: '<Root>/VeHADR_M_MtrC_ReserveTorqPos' incorporates:
     *  SignalConversion generated from: '<S1>/VeHADR_M_MtrC_ReserveTorqPos'
     */
    (void)Rte_Write_VeHADR_M_MtrC_ReserveTorqPos_Value
        (HADR_ac_B.VeHADR_M_MtrC_ReserveTorqPos);

    /* Outport: '<Root>/VeHADR_b_EngActDmpgDsblReq' incorporates:
     *  SignalConversion generated from: '<S1>/VeHADR_b_EngActDmpgDsblReq'
     */
    (void)Rte_Write_VeHADR_b_EngActDmpgDsblReq_Value
        (HADR_ac_B.VeHADR_b_EngActDmpgDsblReq);

    /* Outport: '<Root>/VeHADR_b_FrntMtrBL' incorporates:
     *  SignalConversion generated from: '<S1>/VeHADR_b_FrntMtrBL'
     */
    (void)Rte_Write_VeHADR_b_FrntMtrBL_Value
        (HADR_ac_B.VariantMergeForOutportVeHADR_b_FrntMtrBL);

    /* Outport: '<Root>/VeHADR_b_RearMtrBL' incorporates:
     *  SignalConversion generated from: '<S1>/VeHADR_b_RearMtrBL'
     */
    (void)Rte_Write_VeHADR_b_RearMtrBL_Value
        (HADR_ac_B.VariantMergeForOutportVeHADR_b_RearMtrBL);

    /* Outport: '<Root>/VeHADR_e_LashSt' incorporates:
     *  SignalConversion generated from: '<S1>/VeHADR_e_LashSt'
     *  VariantMerge generated from: '<S463>/VeHADR_e_LashSt'
     */
    (void)Rte_Write_VeHADR_e_LashSt_Value(HADR_ac_B.VeHADR_e_LashSt);

    /* Outport: '<Root>/VeHADR_n_FrntMtrSpeedEst' incorporates:
     *  SignalConversion generated from: '<S1>/VeHADR_n_FrntMtrSpeedEst'
     */
    (void)Rte_Write_VeHADR_n_FrntMtrSpeedEst_Value
        (HADR_ac_B.VariantMergeForOutportVeHADR_n_FrntMtrSp);

    /* Outport: '<Root>/VeHADR_n_RearMtrSpeedEst' incorporates:
     *  SignalConversion generated from: '<S1>/VeHADR_n_RearMtrSpeedEst'
     */
    (void)Rte_Write_VeHADR_n_RearMtrSpeedEst_Value
        (HADR_ac_B.VariantMergeForOutportVeHADR_n_RearMtrSp);

    /* Outport: '<Root>/VeHADR_scl_AEMDFrntMtrGain' incorporates:
     *  SignalConversion generated from: '<S1>/VeHADR_scl_AEMDFrntMtrGain'
     */
    (void)Rte_Write_VeHADR_scl_AEMDFrntMtrGain_Value
        (HADR_ac_B.VariantMergeForOutportVeHADR_scl_AEMDFrn);

    /* Outport: '<Root>/VeHADR_scl_AEMDRearMtrGain' incorporates:
     *  SignalConversion generated from: '<S1>/VeHADR_scl_AEMDRearMtrGain'
     */
    (void)Rte_Write_VeHADR_scl_AEMDRearMtrGain_Value
        (HADR_ac_B.VariantMergeForOutportVeHADR_scl_AEMDRea);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Output function */
FUNC(void, HADR_CODE) HADR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/HADR_NF_PwrOn'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/HADR_NF'
     */
    /* SignalConversion generated from: '<S468>/VeHADR_M_AxleTorqEst' */
    HADR_ac_B.OutportBufferForVeHADR_M_AxleTorqEst = 0.0F;

    /* SignalConversion generated from: '<S468>/VeHADR_M_DmprTorqEst' */
    HADR_ac_B.OutportBufferForVeHADR_M_DmprTorqEst = 0.0F;

    /* SignalConversion generated from: '<S468>/VeHADR_M_MtrA_DrvlineDmpgTorq' */
    HADR_ac_B.OutportBufferForVeHADR_M_MtrA_DrvlineDmp = 0.0F;

    /* SignalConversion generated from: '<S468>/VeHADR_M_MtrA_ReserveTorqNeg' */
    HADR_ac_B.OutportBufferForVeHADR_M_MtrA_ReserveTor = 0.0F;

    /* SignalConversion generated from: '<S468>/VeHADR_M_MtrA_ReserveTorqPos' */
    HADR_ac_B.OutportBufferForVeHADR_M_MtrA_ReserveT_g = 0.0F;

    /* SignalConversion generated from: '<S468>/VeHADR_M_MtrB_DrvlineDmpgTorq' */
    HADR_ac_B.OutportBufferForVeHADR_M_MtrB_DrvlineDmp = 0.0F;

    /* SignalConversion generated from: '<S468>/VeHADR_M_MtrB_ReserveTorqNeg' */
    HADR_ac_B.OutportBufferForVeHADR_M_MtrB_ReserveTor = 0.0F;

    /* SignalConversion generated from: '<S468>/VeHADR_M_MtrB_ReserveTorqPos' */
    HADR_ac_B.OutportBufferForVeHADR_M_MtrB_ReserveT_e = 0.0F;

    /* SignalConversion generated from: '<S468>/VeHADR_M_MtrC_DrvlineDmpgTorq' */
    HADR_ac_B.OutportBufferForVeHADR_M_MtrC_DrvlineDmp = 0.0F;

    /* SignalConversion generated from: '<S468>/VeHADR_M_MtrC_ReserveTorqNeg' */
    HADR_ac_B.OutportBufferForVeHADR_M_MtrC_ReserveTor = 0.0F;

    /* SignalConversion generated from: '<S468>/VeHADR_M_MtrC_ReserveTorqPos' */
    HADR_ac_B.OutportBufferForVeHADR_M_MtrC_ReserveT_n = 0.0F;

    /* SignalConversion generated from: '<S468>/VeHADR_b_EngActDmpgDsblReq' */
    HADR_ac_B.OutportBufferForVeHADR_b_EngActDmpgDsblR = false;

    /* SignalConversion generated from: '<S468>/VeHADR_e_LashSt' incorporates:
     *  Constant: '<S469>/Constant'
     */
    HADR_ac_B.OutportBufferForVeHADR_e_LashSt = HADR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S468>/VeHADR_scl_AEMDFrntMtrGain' */
    HADR_ac_B.OutportBufferForVeHADR_scl_AEMDFrntMtrGa = 0.0F;

    /* SignalConversion generated from: '<S468>/VeHADR_scl_AEMDRearMtrGain' */
    HADR_ac_B.OutportBufferForVeHADR_scl_AEMDRearMtrGa = 0.0F;

    /* SignalConversion generated from: '<S468>/VeHADR_b_FrntMtrBL' */
    HADR_ac_B.OutportBufferForVeHADR_b_FrntMtrBL = false;

    /* SignalConversion generated from: '<S468>/VeHADR_b_RearMtrBL' */
    HADR_ac_B.OutportBufferForVeHADR_b_RearMtrBL = false;

    /* SignalConversion generated from: '<S468>/VeHADR_n_FrntMtrSpeedEst' */
    HADR_ac_B.OutportBufferForVeHADR_n_FrntMtrSpeedEst = 0.0F;

    /* SignalConversion generated from: '<S468>/VeHADR_n_RearMtrSpeedEst' */
    HADR_ac_B.OutportBufferForVeHADR_n_RearMtrSpeedEst = 0.0F;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeHADR_M_AxleTorqEst' incorporates:
     *  SignalConversion generated from: '<S2>/VeHADR_M_AxleTorqEst'
     */
    (void)Rte_Write_VeHADR_M_AxleTorqEst_Value
        (HADR_ac_B.OutportBufferForVeHADR_M_AxleTorqEst);

    /* Outport: '<Root>/VeHADR_M_DmprTorqEst' incorporates:
     *  SignalConversion generated from: '<S2>/VeHADR_M_DmprTorqEst'
     */
    (void)Rte_Write_VeHADR_M_DmprTorqEst_Value
        (HADR_ac_B.OutportBufferForVeHADR_M_DmprTorqEst);

    /* Outport: '<Root>/VeHADR_M_MtrA_DrvlineDmpgTorq' incorporates:
     *  SignalConversion generated from: '<S2>/VeHADR_M_MtrA_DrvlineDmpgTorq'
     */
    (void)Rte_Write_VeHADR_M_MtrA_DrvlineDmpgTorq_Value
        (HADR_ac_B.OutportBufferForVeHADR_M_MtrA_DrvlineDmp);

    /* Outport: '<Root>/VeHADR_M_MtrA_ReserveTorqNeg' incorporates:
     *  SignalConversion generated from: '<S2>/VeHADR_M_MtrA_ReserveTorqNeg'
     */
    (void)Rte_Write_VeHADR_M_MtrA_ReserveTorqNeg_Value
        (HADR_ac_B.OutportBufferForVeHADR_M_MtrA_ReserveTor);

    /* Outport: '<Root>/VeHADR_M_MtrA_ReserveTorqPos' incorporates:
     *  SignalConversion generated from: '<S2>/VeHADR_M_MtrA_ReserveTorqPos'
     */
    (void)Rte_Write_VeHADR_M_MtrA_ReserveTorqPos_Value
        (HADR_ac_B.OutportBufferForVeHADR_M_MtrA_ReserveT_g);

    /* Outport: '<Root>/VeHADR_M_MtrB_DrvlineDmpgTorq' incorporates:
     *  SignalConversion generated from: '<S2>/VeHADR_M_MtrB_DrvlineDmpgTorq'
     */
    (void)Rte_Write_VeHADR_M_MtrB_DrvlineDmpgTorq_Value
        (HADR_ac_B.OutportBufferForVeHADR_M_MtrB_DrvlineDmp);

    /* Outport: '<Root>/VeHADR_M_MtrB_ReserveTorqNeg' incorporates:
     *  SignalConversion generated from: '<S2>/VeHADR_M_MtrB_ReserveTorqNeg'
     */
    (void)Rte_Write_VeHADR_M_MtrB_ReserveTorqNeg_Value
        (HADR_ac_B.OutportBufferForVeHADR_M_MtrB_ReserveTor);

    /* Outport: '<Root>/VeHADR_M_MtrB_ReserveTorqPos' incorporates:
     *  SignalConversion generated from: '<S2>/VeHADR_M_MtrB_ReserveTorqPos'
     */
    (void)Rte_Write_VeHADR_M_MtrB_ReserveTorqPos_Value
        (HADR_ac_B.OutportBufferForVeHADR_M_MtrB_ReserveT_e);

    /* Outport: '<Root>/VeHADR_M_MtrC_DrvlineDmpgTorq' incorporates:
     *  SignalConversion generated from: '<S2>/VeHADR_M_MtrC_DrvlineDmpgTorq'
     */
    (void)Rte_Write_VeHADR_M_MtrC_DrvlineDmpgTorq_Value
        (HADR_ac_B.OutportBufferForVeHADR_M_MtrC_DrvlineDmp);

    /* Outport: '<Root>/VeHADR_M_MtrC_ReserveTorqNeg' incorporates:
     *  SignalConversion generated from: '<S2>/VeHADR_M_MtrC_ReserveTorqNeg'
     */
    (void)Rte_Write_VeHADR_M_MtrC_ReserveTorqNeg_Value
        (HADR_ac_B.OutportBufferForVeHADR_M_MtrC_ReserveTor);

    /* Outport: '<Root>/VeHADR_M_MtrC_ReserveTorqPos' incorporates:
     *  SignalConversion generated from: '<S2>/VeHADR_M_MtrC_ReserveTorqPos'
     */
    (void)Rte_Write_VeHADR_M_MtrC_ReserveTorqPos_Value
        (HADR_ac_B.OutportBufferForVeHADR_M_MtrC_ReserveT_n);

    /* Outport: '<Root>/VeHADR_b_EngActDmpgDsblReq' incorporates:
     *  SignalConversion generated from: '<S2>/VeHADR_b_EngActDmpgDsblReq'
     */
    (void)Rte_Write_VeHADR_b_EngActDmpgDsblReq_Value
        (HADR_ac_B.OutportBufferForVeHADR_b_EngActDmpgDsblR);

    /* Outport: '<Root>/VeHADR_b_FrntMtrBL' incorporates:
     *  SignalConversion generated from: '<S2>/VeHADR_b_FrntMtrBL'
     */
    (void)Rte_Write_VeHADR_b_FrntMtrBL_Value
        (HADR_ac_B.OutportBufferForVeHADR_b_FrntMtrBL);

    /* Outport: '<Root>/VeHADR_b_RearMtrBL' incorporates:
     *  SignalConversion generated from: '<S2>/VeHADR_b_RearMtrBL'
     */
    (void)Rte_Write_VeHADR_b_RearMtrBL_Value
        (HADR_ac_B.OutportBufferForVeHADR_b_RearMtrBL);

    /* Outport: '<Root>/VeHADR_e_LashSt' incorporates:
     *  SignalConversion generated from: '<S2>/VeHADR_e_LashSt'
     *  SignalConversion generated from: '<S468>/VeHADR_e_LashSt'
     */
    (void)Rte_Write_VeHADR_e_LashSt_Value
        (HADR_ac_B.OutportBufferForVeHADR_e_LashSt);

    /* Outport: '<Root>/VeHADR_n_FrntMtrSpeedEst' incorporates:
     *  SignalConversion generated from: '<S2>/VeHADR_n_FrntMtrSpeedEst'
     */
    (void)Rte_Write_VeHADR_n_FrntMtrSpeedEst_Value
        (HADR_ac_B.OutportBufferForVeHADR_n_FrntMtrSpeedEst);

    /* Outport: '<Root>/VeHADR_n_RearMtrSpeedEst' incorporates:
     *  SignalConversion generated from: '<S2>/VeHADR_n_RearMtrSpeedEst'
     */
    (void)Rte_Write_VeHADR_n_RearMtrSpeedEst_Value
        (HADR_ac_B.OutportBufferForVeHADR_n_RearMtrSpeedEst);

    /* Outport: '<Root>/VeHADR_scl_AEMDFrntMtrGain' incorporates:
     *  SignalConversion generated from: '<S2>/VeHADR_scl_AEMDFrntMtrGain'
     */
    (void)Rte_Write_VeHADR_scl_AEMDFrntMtrGain_Value
        (HADR_ac_B.OutportBufferForVeHADR_scl_AEMDFrntMtrGa);

    /* Outport: '<Root>/VeHADR_scl_AEMDRearMtrGain' incorporates:
     *  SignalConversion generated from: '<S2>/VeHADR_scl_AEMDRearMtrGain'
     */
    (void)Rte_Write_VeHADR_scl_AEMDRearMtrGain_Value
        (HADR_ac_B.OutportBufferForVeHADR_scl_AEMDRearMtrGa);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, HADR_CODE) HADR_ac_Init(void)
{
    {

#if Rte_SysCon_Variant_HADR_LashCtrl

        sint32 i;

#endif

        /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
         *  SubSystem: '<Root>/HADR_NF_PwrOn'
         */
        /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
         *  SubSystem: '<S2>/HADR_NF'
         */
        /* SystemInitialize for SignalConversion generated from: '<S468>/VeHADR_e_LashSt' incorporates:
         *  Constant: '<S469>/Constant'
         */
        HADR_ac_B.OutportBufferForVeHADR_e_LashSt = HADR_ac_ConstB.Constant;

        /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
        /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

        /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
         *  SubSystem: '<Root>/HADR_FastTEF'
         */
#if Rte_SysCon_Variant_HADR_SumAndLimits

        /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
        /* SystemInitialize for Function Call SubSystem: '<S1>/HADR_SinGen' */
        /* SystemInitialize for Atomic SubSystem: '<S4>/HADR_SinGen' */
#if Rte_SysCon_Variant_HADR_SinWave

        /* SystemInitialize for Atomic SubSystem: '<S426>/HADR_SinGen' */
        /* InitializeConditions for Switch: '<S429>/Switch8' incorporates:
         *  UnitDelay: '<S429>/Unit Delay7'
         */
        HADR_ac_DW.UnitDelay7_DSTATE_c = 1.0F;

        /* InitializeConditions for UnitDelay: '<S429>/Unit Delay6' */
        HADR_ac_DW.UnitDelay6_DSTATE = true;

        /* SystemInitialize for Atomic SubSystem: '<S429>/SignalLatchOffWithReset1' */
        /* InitializeConditions for UnitDelay: '<S446>/Unit Delay' */
        HADR_ac_DW.UnitDelay_DSTATE_mu = true;

        /* End of SystemInitialize for SubSystem: '<S429>/SignalLatchOffWithReset1' */
        /* End of SystemInitialize for SubSystem: '<S426>/HADR_SinGen' */
        /* End of SystemInitialize for SubSystem: '<S1>/HADR_SinGen' */
#endif

        /* End of SystemInitialize for SubSystem: '<S4>/HADR_SinGen' */
        /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
#endif

        /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
         *  SubSystem: '<S1>/HADR_LashCtrl'
         */
        /* SystemInitialize for Atomic SubSystem: '<S3>/HADR_LashCtrl' */
#if Rte_SysCon_Variant_HADR_LashCtrl

        /* SystemInitialize for Atomic SubSystem: '<S6>/HADR_LashCtrl' */
        /* SystemInitialize for Chart: '<S17>/Kalman_Looping_Stateflow' */
        for (i = 0; i < 20; i++)
        {
            HADR_ac_DW.Matrix_Case[i] = 4U;
            HADR_ac_DW.UseBL_TbCurr[i] = true;
            HADR_ac_DW.UseBL_TaCurr[i] = true;
        }

        /* End of SystemInitialize for Chart: '<S17>/Kalman_Looping_Stateflow' */
        /* End of SystemInitialize for SubSystem: '<S6>/HADR_LashCtrl' */
        /* End of SystemInitialize for SubSystem: '<S3>/HADR_LashCtrl' */
#endif

        /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
        /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

        /* SystemInitialize for Outport: '<Root>/VeHADR_e_LashSt' incorporates:
         *  Merge: '<Root>/Merge12'
         */
        (void)Rte_Write_VeHADR_e_LashSt_Value(CeHADR_e_LashStZero);
    }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
