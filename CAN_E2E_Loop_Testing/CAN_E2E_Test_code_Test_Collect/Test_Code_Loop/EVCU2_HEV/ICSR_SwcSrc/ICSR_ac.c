/*
 * File: ICSR_ac.c
 *
 * Code generated for Simulink model 'ICSR_ac'.
 *
 * Model version                  : 9.127
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 14:00:17 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ICSR_ac.h"
#include "look1_iflf_binlcapw.h"
#include "look2_iflf_binlcapw.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_ICSR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) HeICSR_t_MedTEB_dT = 0.01F;/* Referenced by:
                                                                      * '<S574>/Calib'
                                                                      * '<S855>/Calib'
                                                                      * '<S86>/Calib'
                                                                      * '<S163>/Calib'
                                                                      * '<S581>/Calib'
                                                                      * '<S590>/Calib'
                                                                      * '<S649>/Calib'
                                                                      * '<S735>/Calib'
                                                                      * '<S811>/Calib'
                                                                      * '<S967>/Calib'
                                                                      * '<S42>/Calib'
                                                                      * '<S57>/Calib'
                                                                      * '<S118>/Calib'
                                                                      * '<S134>/Calib'
                                                                      * '<S395>/Calib'
                                                                      * '<S667>/Calib'
                                                                      * '<S756>/Calib'
                                                                      * '<S206>/Calib'
                                                                      * '<S450>/Calib'
                                                                      * '<S455>/Calib'
                                                                      * '<S460>/Calib'
                                                                      * '<S467>/Calib'
                                                                      * '<S472>/Calib'
                                                                      * '<S477>/Calib'
                                                                      * '<S688>/Calib'
                                                                      * '<S769>/Calib'
                                                                      * '<S790>/Calib'
                                                                      * '<S234>/Calib'
                                                                      * '<S715>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) HeICSR_t_MedTED_dT = 0.02F;/* Referenced by: '<S1025>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KaICSR_K_NiCL_DGain[6] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S207>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KaICSR_K_NiCL_IGain[6] =
{
    0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F
} ;                                    /* Referenced by: '<S208>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KaICSR_K_NiCL_PGain[6] =
{
    0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F
} ;                                    /* Referenced by: '<S209>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KaICSR_K_NiCL_Scalar[29] =
{
    0.05F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 1.0F, 0.1F,
    1.0F, 0.1F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S909>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KaICSR_K_NxCL_Scalar[29] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S927>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KaICSR_M_NiCL_DLimit[6] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S210>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KaICSR_M_NiCL_ILimit[6] =
{
    400.0F, 400.0F, 400.0F, 400.0F, 400.0F, 400.0F
} ;                                    /* Referenced by: '<S211>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KaICSR_M_NiCL_PLimit[6] =
{
    400.0F, 400.0F, 400.0F, 400.0F, 400.0F, 400.0F
} ;                                    /* Referenced by: '<S212>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KaICSR_b_NiCL_OpenMtrTrqLimits[41]
    =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
} ;                                    /* Referenced by: '<S610>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KaICSR_b_NxCL_AcclbsdDsblRmp_Actv
    [36] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S377>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KaICSR_b_StartStopStEnblLP[22] =
{
    0, 0, 0, 0, 1, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S975>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KaICSR_dscl_NiCL_ModeSwtchRmp[6] =
{
    0.1F, 0.15F, 0.15F, 0.12F, 0.15F, 0.15F
} ;                                    /* Referenced by: '<S213>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(uint8, ICSR_VAR_INIT) KeICSR_Cnt_EngCylTotal = 6U;/* Referenced by:
                                                                      * '<S112>/Calib'
                                                                      * '<S114>/Calib'
                                                                      */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_K_AngleCL_FltCoeff = 1.0F;/* Referenced by:
                                                                      * '<S51>/Calib'
                                                                      * '<S128>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_K_InSpdGain1 = 1.0F;/* Referenced by: '<S842>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_K_InSpdGain1r = 1.0F;/* Referenced by: '<S843>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_K_NiCL_DGain_STADA = 0.001F;/* Referenced by: '<S235>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_K_NiCL_IGain_STADA = 0.03F;/* Referenced by: '<S236>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_K_NiCL_PGain_STADA = 0.4F;/* Referenced by: '<S237>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_K_Ni_I_AntiWindup_Gain =
    0.0F;                              /* Referenced by: '<S214>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_K_NxCLFilterD0 = 0.0F;/* Referenced by: '<S865>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_K_NxCLFilterD1 = 0.0F;/* Referenced by: '<S866>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_K_NxCLFilterD2 = 0.0F;/* Referenced by: '<S867>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_K_NxCLFilterN0 = 0.0F;/* Referenced by: '<S868>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_K_NxCLFilterN1 = 0.0F;/* Referenced by: '<S869>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_K_NxCLFilterN2 = 0.0F;/* Referenced by: '<S870>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_K_NxCLFilterN3 = 1.0F;/* Referenced by: '<S871>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_K_NxCL_DGain_EOL = 0.01F;/* Referenced by: '<S396>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_K_NxCL_DGain_InFld_ILE =
    0.005F;                            /* Referenced by: '<S397>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_K_NxCL_DGain_InFld_K0 =
    0.005F;                            /* Referenced by: '<S398>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_K_NxCL_DGain_STADA = 0.001F;/* Referenced by: '<S399>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_K_NxCL_IGain_EOL = 0.001F;/* Referenced by: '<S400>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_K_NxCL_IGain_InFld_ILE =
    0.05F;                             /* Referenced by: '<S401>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_K_NxCL_IGain_InFld_K0 =
    0.002F;                            /* Referenced by: '<S402>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_K_NxCL_IGain_STADA = 0.081F;/* Referenced by: '<S403>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_K_NxCL_I_AntiWind_EOL =
    0.04F;                             /* Referenced by: '<S404>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_K_NxCL_I_AntiWind_InFld_ILE
    = 0.005F;                          /* Referenced by: '<S405>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_K_NxCL_I_AntiWind_InFld_K0 =
    0.05F;                             /* Referenced by: '<S406>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_K_NxCL_I_AntiWind_STADA =
    0.05F;                             /* Referenced by: '<S407>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_K_NxCL_PGain_EOL = 0.5F;/* Referenced by: '<S408>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_K_NxCL_PGain_InFld_ILE =
    0.5F;                              /* Referenced by: '<S409>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_K_NxCL_PGain_InFld_K0 =
    0.5F;                              /* Referenced by: '<S410>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_K_NxCL_PGain_STADA = 0.5F;/* Referenced by: '<S411>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_K_Nx_DGain = 0.01F;/* Referenced by:
                                                                      * '<S451>/Calib'
                                                                      * '<S456>/Calib'
                                                                      * '<S461>/Calib'
                                                                      * '<S468>/Calib'
                                                                      * '<S473>/Calib'
                                                                      * '<S478>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_K_Nx_IGain = 0.3F;/* Referenced by:
                                                                      * '<S452>/Calib'
                                                                      * '<S457>/Calib'
                                                                      * '<S462>/Calib'
                                                                      * '<S469>/Calib'
                                                                      * '<S474>/Calib'
                                                                      * '<S479>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_K_Nx_I_AntiWindup_Gain =
    2.0F;                              /* Referenced by:
                                        * '<S453>/Calib'
                                        * '<S458>/Calib'
                                        * '<S463>/Calib'
                                        * '<S470>/Calib'
                                        * '<S475>/Calib'
                                        * '<S480>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_K_Nx_PGain = 0.05F;/* Referenced by:
                                                                      * '<S454>/Calib'
                                                                      * '<S459>/Calib'
                                                                      * '<S464>/Calib'
                                                                      * '<S471>/Calib'
                                                                      * '<S476>/Calib'
                                                                      * '<S481>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_K_TgtSpdGain1 = 0.3F;/* Referenced by: '<S717>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_K_TgtSpdGain2 = 0.15F;/* Referenced by: '<S718>/Calib' */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_M_AngleCL_DTermLimit =
    20.0F;                             /* Referenced by:
                                        * '<S58>/Calib'
                                        * '<S135>/Calib'
                                        */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_M_AngleCL_ITermLimit =
    20.0F;                             /* Referenced by:
                                        * '<S70>/Calib'
                                        * '<S147>/Calib'
                                        */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_M_AngleCL_PTermLimit =
    60.0F;                             /* Referenced by:
                                        * '<S78>/Calib'
                                        * '<S155>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_M_BltMaxTrq_ThrshLSP =
    -999999.0F;                        /* Referenced by: '<S283>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_M_BltMaxTrq_ThrshRSP =
    -888888.0F;                        /* Referenced by: '<S284>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_M_EngCLRamp_LD = -200.0F;/* Referenced by: '<S948>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_M_EngCLRamp_LU = 100.0F;/* Referenced by: '<S949>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_M_MtrAMaxTrq_ThrshLSP =
    -999999.0F;                        /* Referenced by: '<S285>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_M_MtrAMaxTrq_ThrshRSP =
    -888888.0F;                        /* Referenced by: '<S286>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_M_MtrBMaxTrq_ThrshLSP =
    -999999.0F;                        /* Referenced by: '<S288>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_M_MtrBMaxTrq_ThrshRSP =
    -888888.0F;                        /* Referenced by: '<S289>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_M_NiCL_DLimit_STADA = 50.0F;/* Referenced by: '<S238>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_M_NiCL_ILimit_STADA = 50.0F;/* Referenced by: '<S239>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_M_NiCL_PLimit_STADA = 50.0F;/* Referenced by: '<S240>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_M_NxCL_DLimit_EOL = 50.0F;/* Referenced by: '<S412>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_M_NxCL_DLimit_InFld_ILE =
    50.0F;                             /* Referenced by: '<S413>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_M_NxCL_DLimit_InFld_K0 =
    50.0F;                             /* Referenced by: '<S414>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_M_NxCL_DLimit_STADA = 50.0F;/* Referenced by: '<S415>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_M_NxCL_ILimit_EOL = 50.0F;/* Referenced by: '<S416>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_M_NxCL_ILimit_InFld_ILE =
    50.0F;                             /* Referenced by: '<S417>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_M_NxCL_ILimit_InFld_K0 =
    50.0F;                             /* Referenced by: '<S418>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_M_NxCL_ILimit_STADA = 50.0F;/* Referenced by: '<S419>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_M_NxCL_PLimit_EOL = 50.0F;/* Referenced by: '<S420>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_M_NxCL_PLimit_InFld_ILE =
    50.0F;                             /* Referenced by: '<S421>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_M_NxCL_PLimit_InFld_K0 =
    50.0F;                             /* Referenced by: '<S422>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_M_NxCL_PLimit_STADA = 50.0F;/* Referenced by: '<S423>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_M_Nx_DLimit = 20.0F;/* Referenced by: '<S381>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_M_Nx_ILimit = 25.0F;/* Referenced by: '<S382>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_M_Nx_PLimit = 75.0F;/* Referenced by: '<S383>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_M_PwrSpltMtrAMaxIdleTrq =
    50.0F;                             /* Referenced by: '<S563>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_M_PwrSpltMtrAMinIdleTrq =
    -100.0F;                           /* Referenced by: '<S564>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_M_PwrSpltMtrBMaxIdleTrq =
    100.0F;                            /* Referenced by: '<S565>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_M_PwrSpltMtrBMinIdleTrq =
    -300.0F;                           /* Referenced by: '<S566>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_P_Dsbl_ThrshSTMax_LSP =
    2.0F;                              /* Referenced by: '<S277>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_P_Dsbl_ThrshSTMax_RSP =
    2.5F;                              /* Referenced by: '<S278>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_P_MinNegPwrCL = -10.0F;/* Referenced by: '<S968>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_P_MinPosPwrCL = 5.0F;/* Referenced by: '<S969>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_P_NiResNeg = -1.0F;/* Referenced by: '<S970>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_P_NiResPos = 12.0F;/* Referenced by: '<S971>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_P_ThresMax = 20.0F;/* Referenced by: '<S976>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_P_ThresMin = -20.0F;/* Referenced by: '<S977>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_T_BatMinModTempOvrrd =
    -10.0F;                            /* Referenced by: '<S626>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_T_TransOilTempOvrrd = 50.0F;/* Referenced by: '<S628>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_BatMinModTempOvrrd_Enbl =
    0;                                 /* Referenced by: '<S627>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_Bypass720AnglFA = 1;/* Referenced by: '<S28>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_BypassAnglLrnChk = 1;/* Referenced by: '<S29>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_DisableCL = 0;/* Referenced by: '<S1041>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_Disable_Ni = 0;/* Referenced by: '<S279>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_Disable_Ni_Global = 0;/* Referenced by: '<S189>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_Disable_Nx = 0;/* Referenced by: '<S190>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_DisallowIdleCtrlLckedILE =
    0;                                 /* Referenced by: '<S376>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_DsblPstnCntrl = 1;/* Referenced by: '<S263>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_EnableFACheck = 1;/* Referenced by: '<S888>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_EnblAbsPosCntrlDsbl = 1;/* Referenced by: '<S30>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_EnblNiFromTISR = 0;/* Referenced by: '<S993>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_EnblNiProfSelc4StrtStp =
    1;                                 /* Referenced by: '<S856>/Calib' */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_EnblPstnCntrlInSfZn = 0;/* Referenced by:
                                                                      * '<S31>/Calib'
                                                                      * '<S102>/Calib'
                                                                      */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_EnblPstnCntrlTmr = 1;/* Referenced by:
                                                                      * '<S43>/Calib'
                                                                      * '<S119>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_FreezeIterm_DurEngTrqStrt
    = 0;                               /* Referenced by: '<S1042>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_FreezeIterm_EngOff = 0;/* Referenced by: '<S1043>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_FreezeIterm_ImmedStop = 0;/* Referenced by: '<S1044>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_FreezeIterm_KeyOff = 1;/* Referenced by: '<S1045>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_G2_MtrADsbl_NiCLDsbl = 0;/* Referenced by: '<S310>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_G2_MtrBDsbl_NiCLDsbl = 0;/* Referenced by: '<S312>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_G4_MtrADsbl_NiCLDsbl = 0;/* Referenced by: '<S320>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_G4_MtrBDsbl_NiCLDsbl = 0;/* Referenced by: '<S322>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_HoldEtrqMdIdle = 0;/* Referenced by: '<S280>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_M1_MtrADsbl_NiCLDsbl = 1;/* Referenced by: '<S331>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_M1_MtrBDsbl_NiCLDsbl = 0;/* Referenced by: '<S333>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_M2_MtrADsbl_NiCLDsbl = 0;/* Referenced by: '<S342>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_M2_MtrBDsbl_NiCLDsbl = 0;/* Referenced by: '<S344>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_M3_MtrADsbl_NiCLDsbl = 1;/* Referenced by: '<S353>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_M3_MtrBDsbl_NiCLDsbl = 0;/* Referenced by: '<S355>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_MDS_DeacSpdCtl = 1;/* Referenced by: '<S587>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_N_MtrADsbl_NiCLDsbl = 1;/* Referenced by: '<S364>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_N_MtrBDsbl_NiCLDsbl = 0;/* Referenced by: '<S366>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_NeutRmpOutTaTb = 0;/* Referenced by: '<S360>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT)
    KeICSR_b_NiCL_OpenMtrTrqLimits_Warmup = 0;/* Referenced by: '<S624>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_NiTrqRmvlOvrRd = 0;/* Referenced by: '<S910>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_NxTrqRmvlOvrRd = 0;/* Referenced by: '<S928>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_PowerSplitTrans = 0;/* Referenced by: '<S484>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_SwitchNiLimits_M1 = 0;/* Referenced by: '<S637>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_SwitchNiLimits_M2 = 0;/* Referenced by: '<S638>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_TransOilTempOvrrd_Enbl =
    0;                                 /* Referenced by: '<S629>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_UseNonLinearPgain = 0;/* Referenced by: '<S707>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(boolean, ICSR_VAR_INIT) KeICSR_b_UseRTMRClchLrnTyp = 0;/* Referenced by: '<S994>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_dM_NiCL_ITermLimitGrad =
    5.0F;                              /* Referenced by: '<S680>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_dMt_TaDynRsrvDecay = 100.0F;/* Referenced by: '<S1026>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_dMt_TaDynRsrvLD =
    -100000.0F;                        /* Referenced by: '<S1027>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_dMt_TaDynRsrvLU = 100000.0F;/* Referenced by: '<S1028>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_dMt_TbDynRsrvDecay = 10.0F;/* Referenced by: '<S1029>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_dMt_TbDynRsrvLD = -10000.0F;/* Referenced by: '<S1030>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_dMt_TbDynRsrvLU = 10000.0F;/* Referenced by: '<S1031>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_dscl_DODRampUpRate = 0.45F;/* Referenced by: '<S576>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_dscl_NiCL_DG_RtLmLD =
    -0.02F;                            /* Referenced by: '<S215>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_dscl_NiCL_DG_RtLmLU = 0.02F;/* Referenced by: '<S216>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_dscl_NiCL_DLim_RtLm = 2.0F;/* Referenced by: '<S217>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_dscl_NiCL_IG_RtLmLD =
    -0.02F;                            /* Referenced by: '<S218>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_dscl_NiCL_IG_RtLmLU = 0.02F;/* Referenced by: '<S219>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_dscl_NiCL_ILim_RtLm = 10.0F;/* Referenced by: '<S220>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_dscl_NiCL_PG_RtLmLD =
    -0.02F;                            /* Referenced by: '<S221>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_dscl_NiCL_PG_RtLmLU = 0.02F;/* Referenced by: '<S222>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_dscl_NiCL_PLim_RtLm = 10.0F;/* Referenced by: '<S223>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_dscl_Nx_DisableRmp = 0.05F;/* Referenced by: '<S384>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_dscl_Nx_DisableRmp_Agg =
    20.0F;                             /* Referenced by: '<S378>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_3 && Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(uint16, ICSR_VAR_INIT) KeICSR_i_CaseOvrReverse = 3U;/* Referenced by: '<S300>/Calib' */

#endif

#if (Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_k_DisableAllFilt = 0.2F;/* Referenced by:
                                                                      * '<S924>/Calib'
                                                                      * '<S945>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_k_NiCL_LmtFactor_LD =
    -0.04F;                            /* Referenced by: '<S611>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_k_NiCL_LmtFactor_LU =
    0.025F;                            /* Referenced by: '<S612>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_k_NiFltrCnst = 1.0F;/* Referenced by: '<S979>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_k_NxCL_Fac4Max = 0.5F;/* Referenced by: '<S983>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_k_NxCL_Fac4Min = 0.5F;/* Referenced by: '<S984>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_k_NxFltrCnst = 1.0F;/* Referenced by: '<S958>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_k_NxRawFiltCoeff = 1.0F;/* Referenced by: '<S889>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_n_AbsAngPrkRollSpdThrd =
    10.0F;                             /* Referenced by: '<S32>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_n_DCtrlDeadBand = 1.0F;/* Referenced by: '<S668>/Calib' */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_n_DCtrlDeadBand_Parking =
    0.0F;                              /* Referenced by:
                                        * '<S59>/Calib'
                                        * '<S136>/Calib'
                                        */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_n_EngSpdNTDCThrshld = 50.0F;/* Referenced by:
                                                                      * '<S37>/Calib'
                                                                      * '<S106>/Calib'
                                                                      */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_n_EngSpdPstnCntrl = 150.0F;/* Referenced by:
                                                                      * '<S264>/Calib'
                                                                      * '<S44>/Calib'
                                                                      * '<S120>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_n_FirstIdlePstnCntrl =
    900.0F;                            /* Referenced by: '<S265>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_n_NiCL_Warmup_OutSpdThr =
    100.0F;                            /* Referenced by: '<S625>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_n_NiCtlDeadBnd = 0.0F;/* Referenced by: '<S847>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_n_NiCtlDeadBndr = 0.0F;/* Referenced by: '<S848>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_n_NiErrLmt_ItermRst = 5.0F;/* Referenced by: '<S742>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_n_NiLimitDelta1 = 380.0F;/* Referenced by: '<S603>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_n_NiLimitDelta2 = 400.0F;/* Referenced by: '<S604>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_n_NiLmt_ItermRst = 10.0F;/* Referenced by: '<S743>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_n_NxCL_DCtrlDeadBand =
    30.0F;                             /* Referenced by: '<S757>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_n_Nx_DeadBand = 1.0F;/* Referenced by: '<S861>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_n_Nx_ErrLmt_ItermRst = 5.0F;/* Referenced by: '<S824>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_n_Nx_TgtLmt_ItermRst =
    10.0F;                             /* Referenced by: '<S825>/Calib' */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_n_ParkingNiLmt_ItermRst =
    250.0F;                            /* Referenced by:
                                        * '<S87>/Calib'
                                        * '<S164>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_p_EngManfldAbsPrsThd = 5.0F;/* Referenced by: '<S33>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_p_ThrsEngManfldAbsPrs =
    80.0F;                             /* Referenced by: '<S103>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_phi_AbsAngleTarget = 410.0F;/* Referenced by: '<S25>/Calib' */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_phi_AngleErrLmt_ItermRst =
    20.0F;                             /* Referenced by:
                                        * '<S88>/Calib'
                                        * '<S165>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_phi_DltAnglBfrTDC = 60.0F;/* Referenced by: '<S108>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_phi_MaxDltAnglBfrTDC =
    60.0F;                             /* Referenced by: '<S104>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_phi_MaxNegAbsAnglErr =
    -10.0F;                            /* Referenced by:
                                        * '<S38>/Calib'
                                        * '<S34>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_phi_MinDltAnglBfrTDC =
    30.0F;                             /* Referenced by: '<S105>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_phi_MinNegAnglBfrTDC = 0.0F;/* Referenced by: '<S107>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_phi_MinPosAbsAnglErr =
    40.0F;                             /* Referenced by: '<S35>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_phi_RollOverThd = 610.0F;/* Referenced by: '<S36>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_G1_MtrBIdleSpdSclngFctr =
    0.0F;                              /* Referenced by: '<S555>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_G2_MtrBIdleSpdSclngFctr =
    0.0F;                              /* Referenced by: '<S556>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_G2_TaFromNiCL = 1.0F;/* Referenced by: '<S314>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_G2_TaFromNiCL_MtrBDslb =
    1.0F;                              /* Referenced by: '<S313>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_G2_TbFromNiCL = 0.0F;/* Referenced by: '<S315>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_G2_TbFromNiCL_MtrADslb =
    0.0F;                              /* Referenced by: '<S311>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_G3_MtrBIdleSpdSclngFctr =
    0.0F;                              /* Referenced by: '<S557>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_G4_MtrBIdleSpdSclngFctr =
    0.0F;                              /* Referenced by: '<S558>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_G4_TaFromNiCL = 1.0F;/* Referenced by: '<S324>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_G4_TaFromNiCL_MtrBDslb =
    1.0F;                              /* Referenced by: '<S323>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_G4_TbFromNiCL = 0.0F;/* Referenced by: '<S325>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_G4_TbFromNiCL_MtrADslb =
    0.0F;                              /* Referenced by: '<S321>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_M1_MtrBIdleSpdSclngFctr =
    0.0F;                              /* Referenced by: '<S559>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_M1_TaFromNiCL = 1.0F;/* Referenced by: '<S335>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_M1_TaFromNiCL_MtrBDslb =
    1.0F;                              /* Referenced by: '<S334>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_M1_TbFromNiCL = 0.0F;/* Referenced by: '<S336>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_M1_TbFromNiCL_MtrADslb =
    0.0F;                              /* Referenced by: '<S332>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_M2_MtrBIdleSpdSclngFctr =
    0.0F;                              /* Referenced by: '<S560>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_M2_TaFromNiCL = 1.0F;/* Referenced by: '<S346>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_M2_TaFromNiCL_MtrBDslb =
    1.0F;                              /* Referenced by: '<S345>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_M2_TbFromNiCL = 0.0F;/* Referenced by: '<S347>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_M2_TbFromNiCL_MtrADslb =
    0.0F;                              /* Referenced by: '<S343>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_M3_MtrBIdleSpdSclngFctr =
    0.0F;                              /* Referenced by: '<S561>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_M3_TaFromNiCL = 1.0F;/* Referenced by: '<S357>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_M3_TaFromNiCL_MtrBDslb =
    1.0F;                              /* Referenced by: '<S356>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_M3_TbFromNiCL = 0.0F;/* Referenced by: '<S358>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_M3_TbFromNiCL_MtrADslb =
    0.0F;                              /* Referenced by: '<S354>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_MtrAIdleSpdSclngFctr =
    0.0F;                              /* Referenced by: '<S488>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_N_MtrBIdleSpdSclngFctr =
    0.0F;                              /* Referenced by: '<S562>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_N_TaFromNiCL = 1.0F;/* Referenced by: '<S368>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_N_TaFromNiCLC2C = 1.0F;/* Referenced by: '<S369>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_N_TaFromNiCL_MtrBDslb =
    1.0F;                              /* Referenced by: '<S367>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_N_TbFromNiCL = 0.0F;/* Referenced by: '<S370>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_N_TbFromNiCLC2C = 0.0F;/* Referenced by: '<S371>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_N_TbFromNiCL_MtrADslb =
    0.0F;                              /* Referenced by: '<S365>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_NiCL_LmtFactor_ESP = 1.0F;/* Referenced by: '<S631>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_NiTrqRmvlOvrRdValue =
    0.0F;                              /* Referenced by: '<S911>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_Ni_RmpDnRate = -0.1F;/* Referenced by: '<S912>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_Ni_RmpUpRate = 0.1F;/* Referenced by: '<S913>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_NxTrqRmvlOvrRdValue =
    0.0F;                              /* Referenced by: '<S929>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_Nx_CL2Ta = 0.0F;/* Referenced by: '<S385>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_Nx_CL2Tb = 0.0F;/* Referenced by: '<S386>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_Nx_CL2Tc = 0.4F;/* Referenced by: '<S387>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_Nx_RmpDnRate = -0.02F;/* Referenced by: '<S930>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_r_Nx_RmpUpRate = 0.02F;/* Referenced by: '<S931>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_scl_DODDeacSpdCtlGainModM1 =
    0.8F;                              /* Referenced by: '<S588>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_scl_DODReacSpdCtlGainModM1 =
    0.2F;                              /* Referenced by: '<S596>/Calib' */

#endif

#if (Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_t_ClutchLrnCals_BlndIn_Time
    = 0.5F;                            /* Referenced by:
                                        * '<S424>/Calib'
                                        * '<S689>/Calib'
                                        * '<S770>/Calib'
                                        * '<S791>/Calib'
                                        * '<S241>/Calib'
                                        * '<S719>/Calib'
                                        */

#endif

#if (Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT)
    KeICSR_t_ClutchLrnCals_BlndOut_Time = 0.2F;/* Referenced by:
                                                * '<S425>/Calib'
                                                * '<S690>/Calib'
                                                * '<S771>/Calib'
                                                * '<S792>/Calib'
                                                * '<S242>/Calib'
                                                * '<S720>/Calib'
                                                */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_t_DOD_DeacDlyTm = 0.075F;/* Referenced by: '<S583>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_t_DOD_ReacDlyTm = 0.025F;/* Referenced by: '<S592>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_t_DTermCutoffTime = 8.0F;/* Referenced by: '<S669>/Calib' */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_t_DTermCutoffTime_Parking =
    0.05F;                             /* Referenced by:
                                        * '<S60>/Calib'
                                        * '<S137>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_t_DlyTm_ItermRst = 0.5F;/* Referenced by: '<S736>/Calib' */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_t_DlyTm_ItermRst_Parking =
    0.0125F;                           /* Referenced by:
                                        * '<S89>/Calib'
                                        * '<S166>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_t_InSpdProfile_BlndTm =
    0.0025F;                           /* Referenced by: '<S857>/Calib' */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_t_MxTmforPstnCntrl = 0.25F;/* Referenced by:
                                                                      * '<S45>/Calib'
                                                                      * '<S121>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_t_NiTrqLim_BlndInTm = 0.5F;/* Referenced by: '<S650>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_t_NiTrqLim_BlndOutTm = 0.2F;/* Referenced by: '<S651>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_t_Ni_NL_IGainBlndTime =
    0.5F;                              /* Referenced by: '<S691>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_t_Ni_NL_PGainBlndTime =
    0.5F;                              /* Referenced by: '<S721>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_t_NxCL_DTermCutoffTime =
    0.1F;                              /* Referenced by: '<S758>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_t_NxPwrLim_BlndInTm =
    0.0125F;                           /* Referenced by: '<S972>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_t_NxTrqLim_BlndInTm = 0.5F;/* Referenced by: '<S812>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_t_NxTrqLim_BlndOutTm = 0.3F;/* Referenced by: '<S813>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_t_Nx_NLPGainBlndTime = 0.5F;/* Referenced by: '<S793>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KeICSR_t_Nx_NL_IGainBlndTime =
    0.5F;                              /* Referenced by: '<S772>/Calib' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_K_DTermCorrectDir[8] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S671>/Vector' */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_K_DTermCorrectDir_Parking
    [11] =
{
    -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by:
                                        * '<S65>/Vector'
                                        * '<S142>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_K_DTermWrongDir[8] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S672>/Vector' */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_K_DTermWrongDir_Parking[11]
    =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by:
                                        * '<S66>/Vector'
                                        * '<S143>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_K_M1K0NonLinear[11] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S327>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_K_M1Tc2NonLinearDterm[90] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S465>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_K_M1Tc2NonLinearPterm[90] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S466>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_K_M2ILENonLinear[11] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S338>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_K_M3ILENonLinear[11] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S349>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_K_NTc2NonLinearDterm[90] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S482>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_K_NTc2NonLinearPterm[90] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S483>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_K_NiPGainVsErr[8] =
{
    0.75F, 0.4208F, 0.3F, 0.25F, 0.25F, 0.3F, 0.45F, 0.75F
} ;                                    /* Referenced by: '<S722>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_K_NiPGainVsErr_rev[8] =
{
    1.0F, 0.75F, 0.3F, 0.25F, 0.25F, 0.3F, 0.75F, 1.0F
} ;                                    /* Referenced by: '<S723>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_K_NiPGainVsTgtAcc[8] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S724>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_K_Tcas4Low_NiPGainVsErr[8] =
{
    1.3F, 1.15F, 1.05F, 1.0F, 1.0F, 1.05F, 1.15F, 1.3F
} ;                                    /* Referenced by: '<S725>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT)
    KtICSR_K_Tcas4Low_NiPGainVsErr_rev[8] =
{
    1.3F, 1.15F, 1.05F, 1.0F, 1.0F, 1.05F, 1.15F, 1.3F
} ;                                    /* Referenced by: '<S726>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_M_CLR_NiCLDynamicReserve[9]
    =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S1015>/Vector' */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_dM_AngleCL_DTermRtLmt[11] =
{
    0.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by:
                                        * '<S61>/Vector'
                                        * '<S138>/Vector'
                                        */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_dM_AngleCL_ITermRtLmt[11] =
{
    30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F
} ;                                    /* Referenced by:
                                        * '<S71>/Vector'
                                        * '<S148>/Vector'
                                        */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_dM_AngleCL_PTermRtLmt[11] =
{
    40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F
} ;                                    /* Referenced by:
                                        * '<S79>/Vector'
                                        * '<S156>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_dM_NiCL_ITermRtLmt[3] =
{
    100.0F, 100.0F, 100.0F
} ;                                    /* Referenced by: '<S675>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_dM_NiCL_PTermRtLmt[3] =
{
    100.0F, 100.0F, 100.0F
} ;                                    /* Referenced by: '<S702>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_dscl_NiCL_DisableRmp[54] =
{
    0.125F, 0.125F, 0.125F, 0.125F, 0.125F, 0.125F, 0.0945F, 0.0945F, 0.095F,
    0.0962F, 0.0988F, 0.125F, 0.064F, 0.064F, 0.065F, 0.0675F, 0.0725F, 0.125F,
    0.0335F, 0.0335F, 0.035F, 0.0388F, 0.0463F, 0.125F, 0.003F, 0.003F, 0.005F,
    0.01F, 0.02F, 0.125F, 0.0335F, 0.003F, 0.007F, 0.0481F, 0.0587F, 0.125F,
    0.064F, 0.0437F, 0.0463F, 0.0737F, 0.0808F, 0.125F, 0.0945F, 0.0843F,
    0.0857F, 0.0994F, 0.1029F, 0.125F, 0.125F, 0.125F, 0.125F, 0.125F, 0.125F,
    0.125F
} ;                                    /* Referenced by: '<S261>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_dscl_Nx_DisableRmp[54] =
{
    0.001F, 0.002F, 0.003F, 0.004F, 0.005F, 0.006F, 0.002F, 0.003F, 0.004F,
    0.005F, 0.006F, 0.007F, 0.004F, 0.005F, 0.006F, 0.007F, 0.008F, 0.009F,
    0.003F, 0.004F, 0.005F, 0.006F, 0.007F, 0.01F, 0.006F, 0.007F, 0.001F,
    0.002F, 0.003F, 0.012F, 0.008F, 0.009F, 0.01F, 0.012F, 0.011F, 0.009F, 0.01F,
    0.012F, 0.009F, 0.013F, 0.015F, 0.016F, 0.009F, 0.01F, 0.012F, 0.013F,
    0.014F, 0.015F, 0.01F, 0.012F, 0.013F, 0.014F, 0.015F, 0.02F
} ;                                    /* Referenced by: '<S379>/Vector' */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_k_DGnSclng_TempDep[56] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by:
                                        * '<S62>/Vector'
                                        * '<S139>/Vector'
                                        */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_k_IGnSclng_TempDep[56] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by:
                                        * '<S72>/Vector'
                                        * '<S149>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_k_Ni_NonLinIGain[7] =
{
    1.0F, 1.2F, 1.25F, 1.5F, 1.25F, 1.2F, 1.0F
} ;                                    /* Referenced by: '<S692>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_k_Ni_NonLinIGain_Tcas4Low[7]
    =
{
    1.3F, 1.15F, 1.05F, 1.0F, 1.0F, 1.05F, 1.15F
} ;                                    /* Referenced by: '<S693>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_k_NxErrorFilt[11] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S862>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_k_NxNonLinIGain[7] =
{
    1.3F, 1.15F, 1.05F, 1.0F, 1.0F, 1.05F, 1.15F
} ;                                    /* Referenced by: '<S773>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_k_NxNonLinIGain_Tcas4Low[7]
    =
{
    1.3F, 1.15F, 1.05F, 1.0F, 1.0F, 1.05F, 1.15F
} ;                                    /* Referenced by: '<S774>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_k_NxNonLinPGain[7] =
{
    1.3F, 1.15F, 1.05F, 1.0F, 1.0F, 1.05F, 1.15F
} ;                                    /* Referenced by: '<S794>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_k_NxNonLinPGain_Tcas4Low[7]
    =
{
    1.3F, 1.15F, 1.05F, 1.0F, 1.0F, 1.05F, 1.15F
} ;                                    /* Referenced by: '<S795>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_k_Nx_ILETrq_NLPGain[11] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S796>/Vector' */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_k_PGnSclng_TempDep[56] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by:
                                        * '<S80>/Vector'
                                        * '<S157>/Vector'
                                        */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_k_PstnCntrl_DGain[84] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by:
                                        * '<S63>/Vector'
                                        * '<S140>/Vector'
                                        */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_k_PstnCntrl_IGain[84] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by:
                                        * '<S73>/Vector'
                                        * '<S150>/Vector'
                                        */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_k_PstnCntrl_PGain[84] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by:
                                        * '<S81>/Vector'
                                        * '<S158>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT)
    KtICSR_r_NiCL_ErrorBasedFactor_Max[100] =
{
    0.1F, 0.1F, 0.1F, 0.25F, 0.25F, 0.25F, 0.2F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F,
    0.1F, 0.25F, 0.25F, 0.25F, 0.2F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.25F,
    0.25F, 0.25F, 0.2F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.2F, 0.2F, 0.2F,
    0.2F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.2F, 0.2F, 0.2F, 0.2F, 0.1F, 0.1F,
    0.1F, 0.1F, 0.1F, 0.1F, 0.2F, 0.2F, 0.2F, 0.2F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F,
    0.1F, 0.25F, 0.25F, 0.25F, 0.2F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.25F,
    0.25F, 0.25F, 0.2F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.25F, 0.25F, 0.25F,
    0.2F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.25F, 0.25F, 0.25F, 0.2F, 0.1F,
    0.1F, 0.1F
} ;                                    /* Referenced by: '<S985>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT)
    KtICSR_r_NiCL_ErrorBasedFactor_Min[100] =
{
    0.1F, 0.1F, 0.1F, 0.25F, 0.25F, 0.25F, 0.2F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F,
    0.1F, 0.25F, 0.25F, 0.25F, 0.2F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.25F,
    0.25F, 0.25F, 0.2F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.2F, 0.2F, 0.2F,
    0.2F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.2F, 0.2F, 0.2F, 0.2F, 0.1F, 0.1F,
    0.1F, 0.1F, 0.1F, 0.1F, 0.2F, 0.2F, 0.2F, 0.2F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F,
    0.1F, 0.25F, 0.25F, 0.25F, 0.2F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.25F,
    0.25F, 0.25F, 0.2F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.25F, 0.25F, 0.25F,
    0.2F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.25F, 0.25F, 0.25F, 0.2F, 0.1F,
    0.1F, 0.1F
} ;                                    /* Referenced by: '<S986>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_r_NiCL_LmtFactor_NiErrDep[4]
    =
{
    0.1F, 0.2F, 0.4F, 0.8F
} ;                                    /* Referenced by: '<S613>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_r_NiCL_LmtFactor_NiLmt[4] =
{
    0.5F, 0.75F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S614>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_r_NiCL_LmtFactor_PbatDep[4]
    =
{
    0.1F, 0.2F, 0.5F, 1.0F
} ;                                    /* Referenced by: '<S615>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_r_NiCL_LmtFactor_Shft[4] =
{
    0.2F, 0.3F, 0.4F, 0.85F
} ;                                    /* Referenced by: '<S616>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_r_NiCL_LmtFactor_TempDep[12]
    =
{
    0.3333F, 0.3333F, 0.5F, 0.3333F, 0.5F, 0.5F, 0.5F, 0.6667F, 0.8333F, 0.6667F,
    0.8333F, 1.0F
} ;                                    /* Referenced by: '<S617>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_scl_DODDeacSpdCtlGainModM2
    [72] =
{
    0.375F, 0.365F, 0.365F, 0.35F, 0.341F, 0.33F, 0.321F, 0.309F, 0.299F, 0.375F,
    0.365F, 0.365F, 0.35F, 0.341F, 0.33F, 0.321F, 0.309F, 0.299F, 0.375F, 0.365F,
    0.365F, 0.35F, 0.341F, 0.33F, 0.321F, 0.309F, 0.299F, 0.375F, 0.365F, 0.365F,
    0.35F, 0.341F, 0.33F, 0.321F, 0.309F, 0.299F, 0.375F, 0.365F, 0.365F, 0.35F,
    0.341F, 0.33F, 0.321F, 0.309F, 0.299F, 0.375F, 0.365F, 0.365F, 0.35F, 0.341F,
    0.33F, 0.321F, 0.309F, 0.299F, 0.375F, 0.365F, 0.365F, 0.35F, 0.341F, 0.33F,
    0.321F, 0.309F, 0.299F, 0.375F, 0.365F, 0.365F, 0.35F, 0.341F, 0.33F, 0.321F,
    0.309F, 0.299F
} ;                                    /* Referenced by: '<S577>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KtICSR_scl_DODVehSpdFWTorqGainM2
    [72] =
{
    0.375F, 0.365F, 0.357F, 0.3505F, 0.3405F, 0.3295F, 0.3205F, 0.3085F, 0.2985F,
    0.375F, 0.365F, 0.357F, 0.3505F, 0.3405F, 0.3295F, 0.3205F, 0.3085F, 0.2985F,
    0.375F, 0.365F, 0.357F, 0.3505F, 0.3405F, 0.3295F, 0.3205F, 0.3085F, 0.2985F,
    0.375F, 0.365F, 0.357F, 0.3505F, 0.3405F, 0.3295F, 0.3205F, 0.3085F, 0.2985F,
    0.375F, 0.365F, 0.357F, 0.3505F, 0.3405F, 0.3295F, 0.3205F, 0.3085F, 0.2985F,
    0.375F, 0.365F, 0.354F, 0.35F, 0.3405F, 0.3295F, 0.3205F, 0.3085F, 0.2985F,
    0.375F, 0.365F, 0.354F, 0.35F, 0.3405F, 0.3295F, 0.3205F, 0.3085F, 0.2985F,
    0.375F, 0.365F, 0.354F, 0.35F, 0.3405F, 0.3295F, 0.3205F, 0.3085F, 0.2985F
} ;                                    /* Referenced by: '<S578>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_K_DTermCorrectDir[8] =
{
    -250.0F, -150.0F, -31.0F, -20.0F, 20.0F, 30.0F, 150.0F, 250.0F
} ;                                    /* Referenced by: '<S671>/Vector' */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_K_DTermCorrectDir_Parking
    [11] =
{
    -120.0F, -60.0F, -30.0F, -15.0F, -0.0001F, 0.0F, 0.0001F, 15.0F, 30.0F,
    60.0F, 120.0F
} ;                                    /* Referenced by:
                                        * '<S65>/Vector'
                                        * '<S142>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_K_DTermWrongDir[8] =
{
    -250.0F, -150.0F, -31.0F, -20.0F, 20.0F, 30.0F, 150.0F, 250.0F
} ;                                    /* Referenced by: '<S672>/Vector' */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_K_DTermWrongDir_Parking[11]
    =
{
    -120.0F, -60.0F, -30.0F, -15.0F, -0.0001F, 0.0F, 0.0001F, 15.0F, 30.0F,
    60.0F, 120.0F
} ;                                    /* Referenced by:
                                        * '<S66>/Vector'
                                        * '<S143>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_K_M1K0NonLinear[11] =
{
    0.0F, 20.0F, 40.0F, 61.0F, 80.0F, 100.0F, 120.0F, 140.0F, 160.0F, 180.0F,
    200.0F
} ;                                    /* Referenced by: '<S327>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_K_M1Tc2NonLinearDterm[9] =
{
    -400.0F, -200.0F, -125.0F, -60.0F, 0.0F, 60.0F, 125.0F, 200.0F, 400.0F
} ;                                    /* Referenced by: '<S465>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_K_M1Tc2NonLinearPterm[9] =
{
    -400.0F, -200.0F, -125.0F, -60.0F, 0.0F, 60.0F, 125.0F, 200.0F, 400.0F
} ;                                    /* Referenced by: '<S466>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_K_M2ILENonLinear[11] =
{
    0.0F, 20.0F, 40.0F, 61.0F, 80.0F, 100.0F, 120.0F, 140.0F, 160.0F, 180.0F,
    200.0F
} ;                                    /* Referenced by: '<S338>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_K_M3ILENonLinear[11] =
{
    0.0F, 20.0F, 40.0F, 61.0F, 80.0F, 100.0F, 120.0F, 140.0F, 160.0F, 180.0F,
    200.0F
} ;                                    /* Referenced by: '<S349>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_K_NTc2NonLinearDterm[9] =
{
    -400.0F, -200.0F, -125.0F, -60.0F, 0.0F, 60.0F, 125.0F, 200.0F, 400.0F
} ;                                    /* Referenced by: '<S482>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_K_NTc2NonLinearPterm[9] =
{
    -400.0F, -200.0F, -125.0F, -60.0F, 0.0F, 60.0F, 125.0F, 200.0F, 400.0F
} ;                                    /* Referenced by: '<S483>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_K_NiPGainVsErr[8] =
{
    -300.0F, -225.0F, -150.0F, -3.0F, 3.0F, 150.0F, 225.0F, 300.0F
} ;                                    /* Referenced by: '<S722>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_K_NiPGainVsErr_rev[8] =
{
    -250.0F, -200.0F, -150.0F, -3.0F, 3.0F, 150.0F, 200.0F, 250.0F
} ;                                    /* Referenced by: '<S723>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_K_NiPGainVsTgtAcc[8] =
{
    -250.0F, -150.0F, -31.0F, -20.0F, 20.0F, 30.0F, 150.0F, 250.0F
} ;                                    /* Referenced by: '<S724>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_K_Tcas4Low_NiPGainVsErr[8] =
{
    -250.0F, -150.0F, -30.0F, -20.0F, 20.0F, 30.0F, 150.0F, 250.0F
} ;                                    /* Referenced by: '<S725>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT)
    KxICSR_K_Tcas4Low_NiPGainVsErr_rev[8] =
{
    -250.0F, -150.0F, -30.0F, -20.0F, 20.0F, 30.0F, 150.0F, 250.0F
} ;                                    /* Referenced by: '<S726>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_M_CLR_NiCLDynamicReserve[9]
    =
{
    -400.0F, -200.0F, -125.0F, -60.0F, 0.0F, 100.0F, 125.0F, 200.0F, 400.0F
} ;                                    /* Referenced by: '<S1015>/Vector' */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_dM_AngleCL_DTermRtLmt[11] =
{
    -500.0F, -400.0F, -300.0F, -200.0F, -100.0F, 0.0F, 101.0F, 200.0F, 300.0F,
    400.0F, 500.0F
} ;                                    /* Referenced by:
                                        * '<S61>/Vector'
                                        * '<S138>/Vector'
                                        */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_dM_AngleCL_ITermRtLmt[11] =
{
    -120.0F, -60.0F, -30.0F, -15.0F, -10.0F, 0.0F, 10.0F, 15.0F, 30.0F, 60.0F,
    120.0F
} ;                                    /* Referenced by:
                                        * '<S71>/Vector'
                                        * '<S148>/Vector'
                                        */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_dM_AngleCL_PTermRtLmt[11] =
{
    -120.0F, -60.0F, -30.0F, -15.0F, -10.0F, 0.0F, 10.0F, 15.0F, 30.0F, 60.0F,
    120.0F
} ;                                    /* Referenced by:
                                        * '<S79>/Vector'
                                        * '<S156>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_dM_NiCL_ITermRtLmt[3] =
{
    0.2F, 0.5F, 1.0F
} ;                                    /* Referenced by: '<S675>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_dM_NiCL_PTermRtLmt[3] =
{
    0.2F, 0.6F, 1.0F
} ;                                    /* Referenced by: '<S702>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_dscl_NiCL_DisableRmp[6] =
{
    0.0F, 7.0F, 15.0F, 30.0F, 77.0F, 92.0F
} ;                                    /* Referenced by: '<S261>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_dscl_Nx_DisableRmp[6] =
{
    0.0F, 7.0F, 15.0F, 30.0F, 77.0F, 92.0F
} ;                                    /* Referenced by: '<S379>/Vector' */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_k_DGnSclng_TempDep[7] =
{
    -50.0F, -20.0F, -10.0F, 0.0F, 10.0F, 30.0F, 40.0F
} ;                                    /* Referenced by:
                                        * '<S62>/Vector'
                                        * '<S139>/Vector'
                                        */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_k_IGnSclng_TempDep[7] =
{
    -50.0F, -20.0F, -10.0F, 0.0F, 10.0F, 30.0F, 40.0F
} ;                                    /* Referenced by:
                                        * '<S72>/Vector'
                                        * '<S149>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_k_Ni_NonLinIGain[7] =
{
    -150.0F, -50.0F, -30.0F, 0.0F, 30.0F, 50.0F, 150.0F
} ;                                    /* Referenced by: '<S692>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_k_Ni_NonLinIGain_Tcas4Low[7]
    =
{
    -250.0F, -150.0F, -30.0F, -20.0F, 20.0F, 30.0F, 150.0F
} ;                                    /* Referenced by: '<S693>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_k_NxErrorFilt[11] =
{
    -500.0F, -400.0F, -300.0F, -200.0F, -100.0F, 0.0F, 101.0F, 200.0F, 300.0F,
    400.0F, 500.0F
} ;                                    /* Referenced by: '<S862>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_k_NxNonLinIGain[7] =
{
    -250.0F, -150.0F, -30.0F, -20.0F, 20.0F, 30.0F, 150.0F
} ;                                    /* Referenced by: '<S773>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_k_NxNonLinIGain_Tcas4Low[7]
    =
{
    -250.0F, -150.0F, -30.0F, -20.0F, 20.0F, 30.0F, 150.0F
} ;                                    /* Referenced by: '<S774>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_k_NxNonLinPGain[7] =
{
    -250.0F, -150.0F, -30.0F, -20.0F, 20.0F, 30.0F, 150.0F
} ;                                    /* Referenced by: '<S794>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_k_NxNonLinPGain_Tcas4Low[7]
    =
{
    -250.0F, -150.0F, -30.0F, -20.0F, 20.0F, 30.0F, 150.0F
} ;                                    /* Referenced by: '<S795>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_k_Nx_ILETrq_NLPGain[11] =
{
    0.0F, 20.0F, 40.0F, 61.0F, 80.0F, 100.0F, 120.0F, 140.0F, 160.0F, 180.0F,
    200.0F
} ;                                    /* Referenced by: '<S796>/Vector' */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_k_PGnSclng_TempDep[7] =
{
    -50.0F, -20.0F, -10.0F, 0.0F, 10.0F, 30.0F, 40.0F
} ;                                    /* Referenced by:
                                        * '<S80>/Vector'
                                        * '<S157>/Vector'
                                        */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_k_PstnCntrl_DGain[14] =
{
    -60.0F, -30.0F, 0.0F, 30.0F, 65.0F, 90.0F, 120.0F, 180.0F, 270.0F, 360.0F,
    450.0F, 540.0F, 630.0F, 719.0F
} ;                                    /* Referenced by:
                                        * '<S63>/Vector'
                                        * '<S140>/Vector'
                                        */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_k_PstnCntrl_IGain[14] =
{
    -60.0F, -30.0F, 0.0F, 30.0F, 65.0F, 90.0F, 120.0F, 180.0F, 270.0F, 360.0F,
    450.0F, 540.0F, 630.0F, 719.0F
} ;                                    /* Referenced by:
                                        * '<S73>/Vector'
                                        * '<S150>/Vector'
                                        */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_k_PstnCntrl_PGain[14] =
{
    -60.0F, -30.0F, 0.0F, 30.0F, 65.0F, 90.0F, 120.0F, 180.0F, 270.0F, 360.0F,
    450.0F, 540.0F, 630.0F, 719.0F
} ;                                    /* Referenced by:
                                        * '<S81>/Vector'
                                        * '<S158>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT)
    KxICSR_r_NiCL_ErrorBasedFactor_Max[10] =
{
    -500.0F, -400.0F, -300.0F, -100.0F, 0.0F, 100.0F, 200.0F, 300.0F, 400.0F,
    500.0F
} ;                                    /* Referenced by: '<S985>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT)
    KxICSR_r_NiCL_ErrorBasedFactor_Min[10] =
{
    -500.0F, -400.0F, -300.0F, -100.0F, 0.0F, 100.0F, 200.0F, 300.0F, 400.0F,
    500.0F
} ;                                    /* Referenced by: '<S986>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_r_NiCL_LmtFactor_NiErrDep[4]
    =
{
    50.0F, 100.0F, 200.0F, 400.0F
} ;                                    /* Referenced by: '<S613>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_r_NiCL_LmtFactor_NiLmt[4] =
{
    -10.0F, -5.0F, 0.0F, 5.0F
} ;                                    /* Referenced by: '<S614>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_r_NiCL_LmtFactor_PbatDep[4]
    =
{
    5.0F, 10.0F, 15.0F, 20.0F
} ;                                    /* Referenced by: '<S615>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_r_NiCL_LmtFactor_Shft[4] =
{
    -10.0F, -5.0F, 0.0F, 5.0F
} ;                                    /* Referenced by: '<S616>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_r_NiCL_LmtFactor_TempDep[3]
    =
{
    -20.0F, -10.0F, 0.0F
} ;                                    /* Referenced by: '<S617>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_scl_DODDeacSpdCtlGainModM2
    [9] =
{
    56.0F, 64.0F, 72.0F, 80.0F, 89.0F, 97.0F, 105.0F, 113.0F, 129.0F
} ;                                    /* Referenced by: '<S577>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KxICSR_scl_DODVehSpdFWTorqGainM2[9]
    =
{
    56.0F, 64.0F, 72.0F, 80.0F, 89.0F, 97.0F, 105.0F, 113.0F, 129.0F
} ;                                    /* Referenced by: '<S578>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KyICSR_K_M1Tc2NonLinearDterm[10] =
{
    10.0F, 21.0F, 32.0F, 45.0F, 50.0F, 68.0F, 75.0F, 81.0F, 92.0F, 100.0F
} ;                                    /* Referenced by: '<S465>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KyICSR_K_M1Tc2NonLinearPterm[10] =
{
    10.0F, 21.0F, 32.0F, 45.0F, 50.0F, 68.0F, 75.0F, 81.0F, 92.0F, 100.0F
} ;                                    /* Referenced by: '<S466>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KyICSR_K_NTc2NonLinearDterm[10] =
{
    10.0F, 21.0F, 32.0F, 45.0F, 50.0F, 68.0F, 75.0F, 81.0F, 92.0F, 100.0F
} ;                                    /* Referenced by: '<S482>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KyICSR_K_NTc2NonLinearPterm[10] =
{
    10.0F, 21.0F, 32.0F, 45.0F, 50.0F, 68.0F, 75.0F, 81.0F, 92.0F, 100.0F
} ;                                    /* Referenced by: '<S483>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KyICSR_dscl_NiCL_DisableRmp[9] =
{
    -200.0F, -150.0F, -100.0F, -50.0F, 0.0F, 400.0F, 500.0F, 600.0F, 700.0F
} ;                                    /* Referenced by: '<S261>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KyICSR_dscl_Nx_DisableRmp[9] =
{
    -500.0F, -300.0F, -200.0F, -100.0F, 0.0F, 100.0F, 200.0F, 300.0F, 500.0F
} ;                                    /* Referenced by: '<S379>/Vector' */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KyICSR_k_DGnSclng_TempDep[8] =
{
    -50.0F, -40.0F, -20.0F, 0.0F, 10.0F, 40.0F, 60.0F, 100.0F
} ;                                    /* Referenced by:
                                        * '<S62>/Vector'
                                        * '<S139>/Vector'
                                        */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KyICSR_k_IGnSclng_TempDep[8] =
{
    -50.0F, -40.0F, -20.0F, 0.0F, 10.0F, 40.0F, 60.0F, 100.0F
} ;                                    /* Referenced by:
                                        * '<S72>/Vector'
                                        * '<S149>/Vector'
                                        */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KyICSR_k_PGnSclng_TempDep[8] =
{
    -50.0F, -40.0F, -20.0F, 0.0F, 10.0F, 40.0F, 60.0F, 100.0F
} ;                                    /* Referenced by:
                                        * '<S80>/Vector'
                                        * '<S157>/Vector'
                                        */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KyICSR_k_PstnCntrl_DGain[6] =
{
    35.0F, 60.0F, 90.0F, 120.0F, 150.0F, 160.0F
} ;                                    /* Referenced by:
                                        * '<S63>/Vector'
                                        * '<S140>/Vector'
                                        */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KyICSR_k_PstnCntrl_IGain[6] =
{
    35.0F, 60.0F, 90.0F, 120.0F, 150.0F, 160.0F
} ;                                    /* Referenced by:
                                        * '<S73>/Vector'
                                        * '<S150>/Vector'
                                        */

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

static volatile CONST(float32, ICSR_VAR_INIT) KyICSR_k_PstnCntrl_PGain[6] =
{
    35.0F, 60.0F, 90.0F, 120.0F, 150.0F, 160.0F
} ;                                    /* Referenced by:
                                        * '<S81>/Vector'
                                        * '<S158>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT)
    KyICSR_r_NiCL_ErrorBasedFactor_Max[10] =
{
    -300.0F, -200.0F, -100.0F, -50.0F, 0.0F, 50.0F, 100.0F, 180.0F, 250.0F,
    300.0F
} ;                                    /* Referenced by: '<S985>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT)
    KyICSR_r_NiCL_ErrorBasedFactor_Min[10] =
{
    -300.0F, -200.0F, -100.0F, -50.0F, 0.0F, 50.0F, 100.0F, 180.0F, 250.0F,
    300.0F
} ;                                    /* Referenced by: '<S986>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KyICSR_r_NiCL_LmtFactor_TempDep[4]
    =
{
    -10.0F, -5.0F, 0.0F, 5.0F
} ;                                    /* Referenced by: '<S617>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KyICSR_scl_DODDeacSpdCtlGainModM2
    [8] =
{
    60.0F, 70.0F, 80.0F, 90.0F, 100.0F, 120.0F, 150.0F, 200.0F
} ;                                    /* Referenced by: '<S577>/Vector' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static volatile CONST(float32, ICSR_VAR_INIT) KyICSR_scl_DODVehSpdFWTorqGainM2[8]
    =
{
    70.0F, 80.0F, 90.0F, 100.0F, 120.0F, 150.0F, 200.0F, 250.0F
} ;                                    /* Referenced by: '<S578>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_ICSR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ICSR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VaICSC_M_MtrAMaxCpblty[16];/* '<S8>/Signal Conversion5' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VaICSC_M_MtrAMinCpblty[16];/* '<S8>/Signal Conversion4' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VaICSC_M_MtrBMaxCpblty[16];/* '<S8>/Signal Conversion2' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VaICSC_M_MtrBMinCpblty[16];/* '<S8>/Signal Conversion1' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VaICSC_n_MtrACpbltySpd[16];/* '<S8>/Signal Conversion3' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VaICSC_n_MtrBCpbltySpd[16];/* '<S8>/Signal Conversion' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSC_M_MtrA_IdleMaxTorq;/* '<S186>/Merge1' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSC_M_MtrB_IdleMaxTorq;/* '<S186>/Merge3' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSC_M_NxCLCmd;
                               /* '<S10>/SigConvForSigProp_Variant_Source1_0' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSC_M_NxCL_Iterm;
                                /* '<S10>/SigConvForSigProp_Variant_Source_0' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSC_M_Nx_CLPTerm_Raw;/* '<S753>/Product' */

#endif

#if Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7

static VAR(boolean, ICSR_VAR_INIT) VeICSC_b_AbsNoRolloverReq;/* '<S24>/Comparison3' */

#endif

#if Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7

static VAR(boolean, ICSR_VAR_INIT) VeICSC_b_DsblAbsPosCntrl;/* '<S27>/Logical1' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(boolean, ICSR_VAR_INIT) VeICSC_b_FreezeNiCL_ITerm;/* '<S953>/Comparison2' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(boolean, ICSR_VAR_INIT) VeICSC_b_FreezeNxCL_ITerm;/* '<S955>/Comparison1' */

#endif

#if Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7

static VAR(boolean, ICSR_VAR_INIT) VeICSC_b_GlblDsblAbsAnglCntrl;/* '<S23>/Logical1' */

#endif

#if Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7

static VAR(boolean, ICSR_VAR_INIT) VeICSC_b_GlblDsblAnglCntrl;/* '<S96>/Logical1' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSC_k_Ni_ErrBsdNonLinIGain_Blnd;/* '<S695>/Summation' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSC_k_Ni_ErrBsdNonLinPGain_Blnd;/* '<S728>/Summation' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSC_k_NxCL_NLIGain;/* '<S776>/Summation' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSC_k_NxCL_NLPGain;/* '<S798>/Summation' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSC_k_Nx_ErrBsdNonLinIGain_Blnd;/* '<S779>/Summation' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSC_k_Nx_ErrBsdNonLinPGain_Blnd;/* '<S801>/Summation' */

#endif

#if Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSC_phi_AbsErrorAngle;/* '<S24>/Switch' */

#endif

#if Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSC_phi_ErrorAngle;/* '<S97>/Switch' */

#endif

#if Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSC_phi_NTDC;/* '<S98>/Product' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(boolean, ICSR_VAR_INIT) VeICSI_b_EOL_LrnActv;/* '<S17>/Merge' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(boolean, ICSR_VAR_INIT) VeICSI_b_InFld_ILE_LrnActv;/* '<S17>/Merge3' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(boolean, ICSR_VAR_INIT) VeICSI_b_InFld_K0_LrnActv;/* '<S17>/Merge2' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(boolean, ICSR_VAR_INIT) VeICSI_b_Nx_ClchLrn_Active;/* '<S17>/Logical2' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(boolean, ICSR_VAR_INIT) VeICSI_b_STADA_LrnActv;/* '<S17>/Merge1' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(boolean, ICSR_VAR_INIT) VeICSI_b_TCas4Low_Active;/* '<S17>/Comparison4' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSI_n_NiActl;/* '<S17>/Switch' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_K_DTermNonLinear;/* '<S664>/Switch' */

#endif

#if Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_K_DTermNonLinear_AbsParking;/* '<S53>/Switch' */

#endif

#if Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_K_DTermNonLinear_Parking;/* '<S130>/Switch' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_K_NiCL_IGain;
                               /* '<S8>/SigConvForSigProp_Variant_Source12_0' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_K_NiCL_I_AntiWindUp_Gain;
                               /* '<S8>/SigConvForSigProp_Variant_Source25_0' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_K_NiCL_PGain;
                               /* '<S8>/SigConvForSigProp_Variant_Source11_0' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_K_NxCL_DGain;
                                /* '<S8>/SigConvForSigProp_Variant_Source7_0' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_K_NxCL_Factor_Max;/* '<S954>/Multiplication1' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_K_NxCL_Factor_Min;/* '<S954>/Multiplication2' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_K_NxCL_IGain;
                                /* '<S8>/SigConvForSigProp_Variant_Source1_0' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_K_NxCL_I_Anti_Windup_Gain;
                                /* '<S8>/SigConvForSigProp_Variant_Source9_0' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_K_NxCL_PGain;
                                 /* '<S8>/SigConvForSigProp_Variant_Source_0' */

#endif

#if Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_AbsAngleCLDTerm;/* '<S56>/Sum3' */

#endif

#if Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_AbsAngleCLITerm;/* '<S69>/Sum3' */

#endif

#if Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_AbsAngleCLPTerm;/* '<S77>/Sum3' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_AnglCntrlCLSumRaw;
                                 /* '<S6>/SigConvForSigProp_Variant_Source_0' */

#endif

#if Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_AngleCLDTerm;/* '<S133>/Sum3' */

#endif

#if Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_AngleCLITerm;/* '<S146>/Sum3' */

#endif

#if Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_AngleCLPTerm;/* '<S154>/Sum3' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_EngCLDTerm;/* '<S673>/Switch' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_EngCLITermRaw;/* '<S676>/Switch' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_EngCLPTerm;/* '<S701>/Sum3' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_EngCLPTermRaw;/* '<S706>/Switch' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_EngClSumRaw;
                               /* '<S9>/SigConvForSigProp_Variant_Source11_0' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_ItermInit;/* '<S752>/Multiplication1' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_NiCL_DGain;
                               /* '<S8>/SigConvForSigProp_Variant_Source19_0' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_NiCL_DLimit;
                               /* '<S8>/SigConvForSigProp_Variant_Source17_0' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_NiCL_ILimit;
                               /* '<S8>/SigConvForSigProp_Variant_Source14_0' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_NiCL_Iterm;
                                /* '<S9>/SigConvForSigProp_Variant_Source1_0' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_NiCL_PLimit;
                               /* '<S8>/SigConvForSigProp_Variant_Source13_0' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_NiCL_TaOldScale;
                              /* '<S14>/SigConvForSigProp_Variant_Source11_0' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_NiCL_TaOldUnclScale;
                               /* '<S14>/SigConvForSigProp_Variant_Source9_0' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_NiCL_TbOldScale;
                               /* '<S14>/SigConvForSigProp_Variant_Source7_0' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_NiCL_TbOldUnclScale;
                              /* '<S14>/SigConvForSigProp_Variant_Source10_0' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_Ni_MaxCLTrq_Arb;/* '<S654>/Summation' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_Ni_MinCLTrq_Arb;/* '<S657>/Summation' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_NxCLMaxTrqArb_WED;/* '<S748>/MinMax1' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_NxCLMaxTrqCal;/* '<S748>/Add' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_NxCLMinTrqArb_WED;/* '<S748>/MinMax' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_NxCLPterm;/* '<S784>/Switch' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_NxCL_DLimit;
                                /* '<S8>/SigConvForSigProp_Variant_Source8_0' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_NxCL_ILimit;
                                /* '<S8>/SigConvForSigProp_Variant_Source3_0' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_NxCL_PLimit;
                                /* '<S8>/SigConvForSigProp_Variant_Source2_0' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_NxCL_PwrValue;/* '<S989>/Switch' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_NxCL_TaOld;
                                /* '<S14>/SigConvForSigProp_Variant_Source_0' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_NxCL_TaOldUncl;
                               /* '<S14>/SigConvForSigProp_Variant_Source3_0' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_NxCL_TbOld;
                               /* '<S14>/SigConvForSigProp_Variant_Source1_0' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_NxCL_TbOldUncl;
                               /* '<S14>/SigConvForSigProp_Variant_Source4_0' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_NxDTerm;/* '<S760>/Switch' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_Nx_MaxCLTrq_Arb;/* '<S816>/Summation' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_Nx_MinCLTrq_Arb;/* '<S819>/Summation' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_PIDDterm;/* '<S751>/Multiplication2' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_Ta_NiCLPID;/* '<S15>/Multiplication6' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_Ta_NiCLUnclipped;/* '<S15>/Multiplication1' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_Ta_NxCL;/* '<S7>/Multiplication' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_Tb_NiCLPID;/* '<S15>/Multiplication3' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_Tb_NiCLUnclipped;/* '<S15>/Multiplication2' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_Tb_NxCL;/* '<S7>/Multiplication1' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_M_Tc_NxCL;/* '<S7>/Multiplication4' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_P_NiCL_PowerLimitMax;/* '<S959>/MinMax7' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_P_NiCL_PowerLimitMin;/* '<S959>/MinMax6' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_P_NxCL_PowerLimitMax;/* '<S959>/MinMax5' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_P_NxCL_PowerLimitMin;/* '<S959>/MinMax4' */

#endif

#if Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7

static VAR(boolean, ICSR_VAR_INIT) VeICSR_b_AbsInSafeZone;/* '<S27>/Logical' */

#endif

#if Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7

static VAR(boolean, ICSR_VAR_INIT) VeICSR_b_AbsolPstnCntrlTmr;/* '<S26>/Logical1' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(boolean, ICSR_VAR_INIT) VeICSR_b_DisableALL;/* '<S1032>/Switch' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(boolean, ICSR_VAR_INIT) VeICSR_b_Disable_Nx;/* '<S180>/Logical5' */

#endif

#if Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7

static VAR(boolean, ICSR_VAR_INIT) VeICSR_b_InSafeZone;/* '<S101>/Logical' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static VAR(boolean, ICSR_VAR_INIT) VeICSR_b_ItermRst;/* '<S734>/AND' */

#endif

#if Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7

static VAR(boolean, ICSR_VAR_INIT) VeICSR_b_ItermRst_AbsParking_PostLatch;/* '<S90>/OR1' */

#endif

#if Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7

static VAR(boolean, ICSR_VAR_INIT) VeICSR_b_ItermRst_AbsParking_PreLatch;/* '<S91>/AND' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static VAR(boolean, ICSR_VAR_INIT) VeICSR_b_ItermRst_Chk;/* '<S738>/Logical Operator1' */

#endif

#if Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7

static VAR(boolean, ICSR_VAR_INIT) VeICSR_b_ItermRst_Chk_AbsParking;/* '<S22>/Logical Operator1' */

#endif

#if Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7

static VAR(boolean, ICSR_VAR_INIT) VeICSR_b_ItermRst_Chk_Parking;/* '<S95>/Logical Operator1' */

#endif

#if Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7

static VAR(boolean, ICSR_VAR_INIT) VeICSR_b_ItermRst_Parking_PostLatch;/* '<S167>/OR1' */

#endif

#if Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7

static VAR(boolean, ICSR_VAR_INIT) VeICSR_b_ItermRst_Parking_PreLatch;/* '<S168>/AND' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static VAR(boolean, ICSR_VAR_INIT) VeICSR_b_ItermRst_PostLatch;/* '<S737>/OR1' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static VAR(boolean, ICSR_VAR_INIT) VeICSR_b_ItermRst_PreLatch;/* '<S739>/AND' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static VAR(boolean, ICSR_VAR_INIT) VeICSR_b_LmtFctr_NiMax;/* '<S608>/Switch1' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static VAR(boolean, ICSR_VAR_INIT) VeICSR_b_LmtFctr_NiMin;/* '<S605>/Logical2' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static VAR(boolean, ICSR_VAR_INIT) VeICSR_b_LmtFctr_Warmup;/* '<S619>/Logical3' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static VAR(boolean, ICSR_VAR_INIT) VeICSR_b_MtrA_NiCLDsbld;/* '<S268>/Logical5' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static VAR(boolean, ICSR_VAR_INIT) VeICSR_b_MtrB_NiCLDsbld;/* '<S269>/Logical2' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static VAR(boolean, ICSR_VAR_INIT) VeICSR_b_MtrsNiCLDsbld;/* '<S270>/Merge5' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static VAR(boolean, ICSR_VAR_INIT) VeICSR_b_Nx_ITerm_ResetArb;/* '<S752>/Logical1' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static VAR(boolean, ICSR_VAR_INIT) VeICSR_b_Nx_ItermRst;/* '<S822>/Not Equal' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static VAR(boolean, ICSR_VAR_INIT) VeICSR_b_Nx_ItermRst_Chk;/* '<S823>/Logical Operator1' */

#endif

#if Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7

static VAR(boolean, ICSR_VAR_INIT) VeICSR_b_PstnCntrlTmr;/* '<S100>/Logical1' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(boolean, ICSR_VAR_INIT) VeICSR_b_PwrPrtAct;/* '<S960>/Logical' */

#endif

#if Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7

static VAR(boolean, ICSR_VAR_INIT) VeICSR_b_TDCLim;/* '<S101>/Logical1' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_dM_PIDTerm;/* '<S755>/Multiplication2' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_dn_PIDTerm;/* '<S666>/Multiplication2' */

#endif

#if Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_dphi_PIDTerm_AbsParking;/* '<S55>/Multiplication2' */

#endif

#if Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_dphi_PIDTerm_Parking;/* '<S132>/Multiplication2' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_dscl_NiCL_ModeSwtchRmp;
                               /* '<S8>/SigConvForSigProp_Variant_Source18_0' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_dscl_NxCL_ModeSwtchRmp;
                                /* '<S8>/SigConvForSigProp_Variant_Source6_0' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(uint16, ICSR_VAR_INIT) VeICSR_i_ControlCase;
                               /* '<S8>/SigConvForSigProp_Variant_Source20_0' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_k_NICL_IG;/* '<S198>/Multiplication1' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_k_NICL_PG;/* '<S198>/Selector2' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_k_NICL_PG_NonLinear;/* '<S198>/Multiplication2' */

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_k_Ni_TrqMltFct;/* '<S892>/Switch2' */

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_k_Nx_TrqMltFct;/* '<S894>/Switch2' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_n_2ActualtoControlSpd2;/* '<S827>/Merge' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_n_2ActualtoControlSpd_rev2;/* '<S827>/Merge1' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_n_2NiErr_Raw2;/* '<S845>/Switch1' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_n_2NiErr_Rev2;/* '<S846>/Switch1' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_n_FiltVirtualNx;/* '<S957>/Switch1' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_n_FilteredNi;/* '<S978>/Switch1' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_n_InSpdRaw_EngRunning_DriveKalman;/* '<S840>/Switch1' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_n_InSpdRaw_EngRunning_ReverseKalman;/* '<S841>/Switch1' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_n_InputSpeedProf_PostFilt;/* '<S853>/Summation' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_n_NiErrOut;/* '<S837>/Switch1' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_n_NxErrAftDdBand;/* '<S860>/Switch1' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_n_NxErrFilt;/* '<S859>/Switch1' */

#endif

#if Rte_SysCon_Variant_ICSR_7

static VAR(float32, ICSR_VAR_INIT) VeICSR_n_NxErr_Raw;/* '<S863>/Subtraction' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ICSR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_ICSR
#include "MemMap.h"

CONST(ConstB_ICSR_ac_T, ICSR_VAR_INIT) ICSR_ac_ConstB =
{

#if Rte_SysCon_Variant_ICSR_7

    0.0F,                              /* '<S492>/C_Spd' */

#define CONSTB_ICSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ICSR_8

    CeTRAR_e_SpeedMode                 /* '<S1050>/Constant' */
#define CONSTB_ICSR_AC_T_VARIANT_EXISTS
#endif
#ifndef CONSTB_ICSR_AC_T_VARIANT_EXISTS
    0
#endif                           /* CONSTB_ICSR_AC_T_VARIANT_EXISTS undefined */
};

#define STOP_SEC_CONST_UNSPECIFIED_ICSR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_ICSR
#include "MemMap.h"

CONST(ConstP_ICSR_ac_T, ICSR_VAR_INIT) ICSR_ac_ConstP =
{

#if Rte_SysCon_Variant_ICSR_7

    /* Expression: single(zeros(16,1))
     * Referenced by: '<S485>/Constant'
     */
    {
        0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
        0.0F, 0.0F, 0.0F, 0.0F
    },

#endif

#if (Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7)

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S379>/Vector'
     *   '<S261>/Vector'
     */
    {
        5U, 8U
    },

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S465>/Vector'
     *   '<S466>/Vector'
     *   '<S482>/Vector'
     *   '<S483>/Vector'
     */
    {
        8U, 9U
    },

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S577>/Vector'
     *   '<S578>/Vector'
     */
    {
        8U, 7U
    },

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S617>/Vector'
     */
    {
        2U, 3U
    },

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S63>/Vector'
     *   '<S73>/Vector'
     *   '<S81>/Vector'
     *   '<S140>/Vector'
     *   '<S150>/Vector'
     *   '<S158>/Vector'
     */
    {
        13U, 5U
    },

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S62>/Vector'
     *   '<S72>/Vector'
     *   '<S80>/Vector'
     *   '<S139>/Vector'
     *   '<S149>/Vector'
     *   '<S157>/Vector'
     */
    {
        6U, 7U
    },

#endif

#if Rte_SysCon_Variant_ICSR_7

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S985>/Vector'
     *   '<S986>/Vector'
     */
    {
        9U, 9U
    },

#endif

#ifndef CONSTP_ICSR_AC_T_VARIANT_EXISTS

    0
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_ICSR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ICSR
#include "MemMap.h"

VAR(B_ICSR_ac_T, ICSR_VAR_INIT) ICSR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ICSR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ICSR
#include "MemMap.h"

VAR(DW_ICSR_ac_T, ICSR_VAR_INIT) ICSR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ICSR
#include "MemMap.h"
#if Rte_SysCon_Variant_ICSR_7

static FUNC(void, ICSR_CODE_LOCAL) ICSR_ac_ClosedInterval1(VAR
    (TeTINR_e_TransAdaptStatus, AUTOMATIC) rtu_u, VAR(TeTINR_e_TransAdaptStatus,
    AUTOMATIC) rtu_MN, VAR(TeTINR_e_TransAdaptStatus, AUTOMATIC) rtu_MX, P2VAR
    (B_ClosedInterval1_ICSR_ac_T, AUTOMATIC, ICSR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static FUNC(void, ICSR_CODE_LOCAL) ICSR_ac_BothMtrsDsbl(P2VAR(float32, AUTOMATIC,
    ICSR_VAR_INIT) rty_Ta_NiCLGain, P2VAR(float32, AUTOMATIC, ICSR_VAR_INIT)
    rty_Tb_NiCLGain, P2VAR(boolean, AUTOMATIC, ICSR_VAR_INIT) rty_MtrsNiCLDsbl);

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static FUNC(void, ICSR_CODE_LOCAL) ICSR_ac_M2(P2VAR(float32, AUTOMATIC,
    ICSR_VAR_INIT) rty_P_gain, P2VAR(float32, AUTOMATIC, ICSR_VAR_INIT)
    rty_I_gain, P2VAR(float32, AUTOMATIC, ICSR_VAR_INIT) rty_D_gain, P2VAR
    (float32, AUTOMATIC, ICSR_VAR_INIT) rty_NxCL_I_Anti_Windup_Gain);

#endif

#if Rte_SysCon_Variant_ICSR_7

static FUNC(void, ICSR_CODE_LOCAL) ICSR_ac_Get_Data_Indexes(CONST(float32,
    AUTOMATIC) rtu_xdata[16], VAR(float32, AUTOMATIC) rtu_value, P2VAR
    (B_Get_Data_Indexes_ICSR_ac_T, AUTOMATIC, ICSR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_ICSR_7

static FUNC(void, ICSR_CODE_LOCAL) ICSR_ac_Pass(VAR(float32, AUTOMATIC) rtu_In1,
    VAR(float32, AUTOMATIC) rtu_In2, P2VAR(float32, AUTOMATIC, ICSR_VAR_INIT)
    rty_Out1, P2VAR(float32, AUTOMATIC, ICSR_VAR_INIT) rty_Out2);

#endif

#if Rte_SysCon_Variant_ICSR_7

static FUNC(void, ICSR_CODE_LOCAL) ICSR_ac_Switch(VAR(float32, AUTOMATIC)
    rtu_In1, VAR(float32, AUTOMATIC) rtu_In2, P2VAR(float32, AUTOMATIC,
    ICSR_VAR_INIT) rty_Out1, P2VAR(float32, AUTOMATIC, ICSR_VAR_INIT) rty_Out2);

#endif

#if Rte_SysCon_Variant_ICSR_7

static FUNC(void, ICSR_CODE_LOCAL) ICSR_ac_Get_Data_Indexes_c(CONST(float32,
    AUTOMATIC) rtu_xdata[16], VAR(float32, AUTOMATIC) rtu_value, P2VAR
    (B_Get_Data_Indexes_ICSR_ac_c_T, AUTOMATIC, ICSR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_ICSR_7

static FUNC(void, ICSR_CODE_LOCAL) ICSR_ac_IfActionSubsystem(VAR(float32,
    AUTOMATIC) rtu_In1, VAR(float32, AUTOMATIC) rtu_In2, P2VAR(float32,
    AUTOMATIC, ICSR_VAR_INIT) rty_Out1, P2VAR(float32, AUTOMATIC, ICSR_VAR_INIT)
    rty_Out2);

#endif

#if Rte_SysCon_Variant_ICSR_7

static FUNC(void, ICSR_CODE_LOCAL) ICSR_ac_GradientLimiter1(VAR(float32,
    AUTOMATIC) rtu_LU, VAR(float32, AUTOMATIC) rtu_LD, VAR(float32, AUTOMATIC)
    rtu_u, VAR(float32, AUTOMATIC) rtu_u_old, P2VAR(B_GradientLimiter1_ICSR_ac_T,
    AUTOMATIC, ICSR_VAR_INIT) localB);

#endif

/* Forward declaration for local functions */
#if Rte_SysCon_Variant_ICSR_7

static float32 ICSR_ac_fraction(float32 Upper, float32 Lower, float32 Input);

#endif

/* Forward declaration for local functions */
#if Rte_SysCon_Variant_ICSR_7

static float32 ICSR_ac_fraction_c(float32 Upper, float32 Lower, float32 Input);

#endif

/*
 * Output and update for atomic system:
 *    '<S996>/ClosedInterval1'
 *    '<S996>/ClosedInterval2'
 */
#if Rte_SysCon_Variant_ICSR_7

static FUNC(void, ICSR_CODE_LOCAL) ICSR_ac_ClosedInterval1(VAR
    (TeTINR_e_TransAdaptStatus, AUTOMATIC) rtu_u, VAR(TeTINR_e_TransAdaptStatus,
    AUTOMATIC) rtu_MN, VAR(TeTINR_e_TransAdaptStatus, AUTOMATIC) rtu_MX, P2VAR
    (B_ClosedInterval1_ICSR_ac_T, AUTOMATIC, ICSR_VAR_INIT) localB)
{
    /* Logic: '<S1001>/Logical Operator' incorporates:
     *  RelationalOperator: '<S1001>/Relatonal Operator'
     *  RelationalOperator: '<S1001>/Relatonal Operator1'
     */
    localB->LogicalOperator = ((rtu_u >= rtu_MN) && (rtu_u <= rtu_MX));
}

#endif

/*
 * Output and update for action system:
 *    '<S304>/BothMtrsDsbl'
 *    '<S301>/BothMtrsDsbl'
 *    '<S302>/BothMtrsDsbl'
 *    '<S303>/BothMtrsDsbl'
 *    '<S298>/BothMtrsDsbl'
 *    '<S299>/BothMtrsDsbl'
 */
#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

static FUNC(void, ICSR_CODE_LOCAL) ICSR_ac_BothMtrsDsbl(P2VAR(float32, AUTOMATIC,
    ICSR_VAR_INIT) rty_Ta_NiCLGain, P2VAR(float32, AUTOMATIC, ICSR_VAR_INIT)
    rty_Tb_NiCLGain, P2VAR(boolean, AUTOMATIC, ICSR_VAR_INIT) rty_MtrsNiCLDsbl)
{
    /* SignalConversion generated from: '<S359>/Ta_NiCLGain' incorporates:
     *  Constant: '<S359>/Constant Value'
     */
    *rty_Ta_NiCLGain = 0.0F;

    /* SignalConversion generated from: '<S359>/Tb_NiCLGain' incorporates:
     *  Constant: '<S359>/Constant Value1'
     */
    *rty_Tb_NiCLGain = 0.0F;

    /* SignalConversion generated from: '<S359>/MtrsNiCLDsbl' incorporates:
     *  Constant: '<S359>/TRUE Constant'
     */
    *rty_MtrsNiCLDsbl = true;
}

#endif

/*
 * Output and update for action system:
 *    '<S388>/M2'
 *    '<S388>/M3'
 *    '<S388>/G2'
 *    '<S388>/G4'
 */
#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

static FUNC(void, ICSR_CODE_LOCAL) ICSR_ac_M2(P2VAR(float32, AUTOMATIC,
    ICSR_VAR_INIT) rty_P_gain, P2VAR(float32, AUTOMATIC, ICSR_VAR_INIT)
    rty_I_gain, P2VAR(float32, AUTOMATIC, ICSR_VAR_INIT) rty_D_gain, P2VAR
    (float32, AUTOMATIC, ICSR_VAR_INIT) rty_NxCL_I_Anti_Windup_Gain)
{
    /* SignalConversion generated from: '<S447>/P_gain' incorporates:
     *  Constant: '<S471>/Calib'
     */
    *rty_P_gain = KeICSR_K_Nx_PGain;

    /* Product: '<S447>/Multiplication1' incorporates:
     *  Constant: '<S467>/Calib'
     *  Constant: '<S469>/Calib'
     */
    *rty_I_gain = HeICSR_t_MedTEB_dT * KeICSR_K_Nx_IGain;

    /* SignalConversion generated from: '<S447>/D_gain' incorporates:
     *  Constant: '<S468>/Calib'
     */
    *rty_D_gain = KeICSR_K_Nx_DGain;

    /* SignalConversion generated from: '<S447>/NxCL_I_Anti_Windup_Gain' incorporates:
     *  Constant: '<S470>/Calib'
     */
    *rty_NxCL_I_Anti_Windup_Gain = KeICSR_K_Nx_I_AntiWindup_Gain;
}

#endif

/* Function for Chart: '<S500>/Get_Data_Indexes ' */
#if Rte_SysCon_Variant_ICSR_7

static float32 ICSR_ac_fraction(float32 Upper, float32 Lower, float32 Input)
{
    float32 g;

    /* Graphical Function 'fraction': '<S501>:1' */
    /* Transition: '<S501>:67' */
    if (Lower >= Upper)
    {
        /* Transition: '<S501>:71' */
        /* Transition: '<S501>:72' */
        g = 0.0F;

        /* Transition: '<S501>:73' */
    }
    else
    {
        /* Transition: '<S501>:12' */
        g = (Input - Lower) / (Upper - Lower);
    }

    /* Transition: '<S501>:70' */
    return g;
}

#endif

/*
 * Output and update for atomic system:
 *    '<S500>/Get_Data_Indexes '
 *    '<S506>/Get_Data_Indexes '
 *    '<S515>/Get_Data_Indexes '
 *    '<S521>/Get_Data_Indexes '
 */
#if Rte_SysCon_Variant_ICSR_7

static FUNC(void, ICSR_CODE_LOCAL) ICSR_ac_Get_Data_Indexes(CONST(float32,
    AUTOMATIC) rtu_xdata[16], VAR(float32, AUTOMATIC) rtu_value, P2VAR
    (B_Get_Data_Indexes_ICSR_ac_T, AUTOMATIC, ICSR_VAR_INIT) localB)
{
    /* Chart: '<S500>/Get_Data_Indexes ' */
    /* Gateway: OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes  */
    /* During: OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes  */
    /* Entry Internal: OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes  */
    /* Transition: '<S501>:2' */
    if (rtu_value >= rtu_xdata[8])
    {
        /* Transition: '<S501>:4' */
        if (rtu_value >= rtu_xdata[12])
        {
            /* Transition: '<S501>:7' */
            if (rtu_value >= rtu_xdata[14])
            {
                /* Transition: '<S501>:13' */
                if (rtu_value >= rtu_xdata[15])
                {
                    /* Transition: '<S501>:68' */
                    /* Transition: '<S501>:69' */
                    localB->UpperIndex = 15.0F;
                    localB->LowerIndex = 14.0F;
                    localB->fract = ICSR_ac_fraction(rtu_xdata[15], rtu_xdata[14],
                        rtu_xdata[15]);
                }
                else
                {
                    /* Transition: '<S501>:63' */
                    localB->UpperIndex = 15.0F;
                    localB->LowerIndex = 14.0F;
                    localB->fract = ICSR_ac_fraction(rtu_xdata[15], rtu_xdata[14],
                        rtu_value);

                    /* Transition: '<S501>:66' */
                }

                /* Transition: '<S501>:65' */
                /* Transition: '<S501>:64' */
                /* Transition: '<S501>:33' */
            }
            else
            {
                /* Transition: '<S501>:28' */
                if (rtu_value >= rtu_xdata[13])
                {
                    /* Transition: '<S501>:29' */
                    localB->UpperIndex = 14.0F;
                    localB->LowerIndex = 13.0F;
                    localB->fract = ICSR_ac_fraction(rtu_xdata[14], rtu_xdata[13],
                        rtu_value);

                    /* Transition: '<S501>:6' */
                    /* Transition: '<S501>:32' */
                }
                else
                {
                    /* Transition: '<S501>:30' */
                    localB->UpperIndex = 13.0F;
                    localB->LowerIndex = 12.0F;
                    localB->fract = ICSR_ac_fraction(rtu_xdata[13], rtu_xdata[12],
                        rtu_value);
                }

                /* Transition: '<S501>:18' */
                /* Transition: '<S501>:9' */
                /* Transition: '<S501>:33' */
            }
        }
        else
        {
            /* Transition: '<S501>:15' */
            if (rtu_value >= rtu_xdata[10])
            {
                /* Transition: '<S501>:20' */
                if (rtu_value >= rtu_xdata[11])
                {
                    /* Transition: '<S501>:22' */
                    localB->UpperIndex = 12.0F;
                    localB->LowerIndex = 11.0F;
                    localB->fract = ICSR_ac_fraction(rtu_xdata[12], rtu_xdata[11],
                        rtu_value);

                    /* Transition: '<S501>:19' */
                    /* Transition: '<S501>:9' */
                    /* Transition: '<S501>:33' */
                }
                else
                {
                    /* Transition: '<S501>:23' */
                    localB->UpperIndex = 11.0F;
                    localB->LowerIndex = 10.0F;
                    localB->fract = ICSR_ac_fraction(rtu_xdata[11], rtu_xdata[10],
                        rtu_value);

                    /* Transition: '<S501>:25' */
                    /* Transition: '<S501>:9' */
                    /* Transition: '<S501>:33' */
                }
            }
            else
            {
                /* Transition: '<S501>:21' */
                if (rtu_value >= rtu_xdata[9])
                {
                    /* Transition: '<S501>:24' */
                    localB->UpperIndex = 10.0F;
                    localB->LowerIndex = 9.0F;
                    localB->fract = ICSR_ac_fraction(rtu_xdata[10], rtu_xdata[9],
                        rtu_value);

                    /* Transition: '<S501>:25' */
                    /* Transition: '<S501>:9' */
                    /* Transition: '<S501>:33' */
                }
                else
                {
                    /* Transition: '<S501>:59' */
                    localB->UpperIndex = 9.0F;
                    localB->LowerIndex = 8.0F;
                    localB->fract = ICSR_ac_fraction(rtu_xdata[9], rtu_xdata[8],
                        rtu_value);

                    /* Transition: '<S501>:44' */
                }
            }
        }

        /* Transition: '<S501>:14' */
        /* Transition: '<S501>:56' */
        /* Transition: '<S501>:47' */
    }
    else
    {
        /* Transition: '<S501>:16' */
        if (rtu_value >= rtu_xdata[4])
        {
            /* Transition: '<S501>:17' */
            if (rtu_value >= rtu_xdata[5])
            {
                /* Transition: '<S501>:39' */
                if (rtu_value >= rtu_xdata[6])
                {
                    /* Transition: '<S501>:41' */
                    localB->UpperIndex = 7.0F;
                    localB->LowerIndex = 6.0F;
                    localB->fract = ICSR_ac_fraction(rtu_xdata[7], rtu_xdata[6],
                        rtu_value);
                    if (rtu_value >= rtu_xdata[7])
                    {
                        /* Transition: '<S501>:58' */
                        localB->UpperIndex = 8.0F;
                        localB->LowerIndex = 7.0F;
                        localB->fract = ICSR_ac_fraction(rtu_xdata[8],
                            rtu_xdata[7], rtu_value);

                        /* Transition: '<S501>:55' */
                        /* Transition: '<S501>:53' */
                    }
                    else
                    {
                        /* Transition: '<S501>:3' */
                    }

                    /* Transition: '<S501>:43' */
                    /* Transition: '<S501>:10' */
                }
                else
                {
                    /* Transition: '<S501>:36' */
                    localB->UpperIndex = 6.0F;
                    localB->LowerIndex = 5.0F;
                    localB->fract = ICSR_ac_fraction(rtu_xdata[6], rtu_xdata[5],
                        rtu_value);

                    /* Transition: '<S501>:38' */
                    /* Transition: '<S501>:43' */
                    /* Transition: '<S501>:10' */
                }
            }
            else
            {
                /* Transition: '<S501>:37' */
                if (rtu_value >= rtu_xdata[4])
                {
                    /* Transition: '<S501>:40' */
                    localB->UpperIndex = 5.0F;
                    localB->LowerIndex = 4.0F;
                    localB->fract = ICSR_ac_fraction(rtu_xdata[5], rtu_xdata[4],
                        rtu_value);

                    /* Transition: '<S501>:38' */
                    /* Transition: '<S501>:43' */
                    /* Transition: '<S501>:10' */
                }
                else
                {
                    /* Transition: '<S501>:46' */
                    localB->UpperIndex = 4.0F;
                    localB->LowerIndex = 3.0F;
                    localB->fract = ICSR_ac_fraction(rtu_xdata[4], rtu_xdata[3],
                        rtu_value);

                    /* Transition: '<S501>:45' */
                }
            }

            /* Transition: '<S501>:42' */
            /* Transition: '<S501>:60' */
            /* Transition: '<S501>:61' */
            /* Transition: '<S501>:48' */
            /* Transition: '<S501>:56' */
            /* Transition: '<S501>:47' */
        }
        else
        {
            /* Transition: '<S501>:34' */
            if (rtu_value >= rtu_xdata[2])
            {
                /* Transition: '<S501>:49' */
                if (rtu_value >= rtu_xdata[3])
                {
                    /* Transition: '<S501>:54' */
                    /* Transition: '<S501>:52' */
                    localB->UpperIndex = 4.0F;
                    localB->LowerIndex = 3.0F;
                    localB->fract = ICSR_ac_fraction(rtu_xdata[4], rtu_xdata[3],
                        rtu_value);
                }
                else
                {
                    /* Transition: '<S501>:35' */
                    localB->UpperIndex = 3.0F;
                    localB->LowerIndex = 2.0F;
                    localB->fract = ICSR_ac_fraction(rtu_xdata[3], rtu_xdata[2],
                        rtu_value);

                    /* Transition: '<S501>:57' */
                }

                /* Transition: '<S501>:61' */
                /* Transition: '<S501>:48' */
                /* Transition: '<S501>:56' */
                /* Transition: '<S501>:47' */
            }
            else
            {
                /* Transition: '<S501>:50' */
                if (rtu_value >= rtu_xdata[1])
                {
                    /* Transition: '<S501>:51' */
                    localB->UpperIndex = 2.0F;
                    localB->LowerIndex = 1.0F;
                    localB->fract = ICSR_ac_fraction(rtu_xdata[2], rtu_xdata[1],
                        rtu_value);

                    /* Transition: '<S501>:26' */
                    /* Transition: '<S501>:8' */
                }
                else
                {
                    /* Transition: '<S501>:62' */
                    if (rtu_value >= rtu_xdata[0])
                    {
                        /* Transition: '<S501>:27' */
                        localB->UpperIndex = 1.0F;
                        localB->LowerIndex = 0.0F;
                        localB->fract = ICSR_ac_fraction(rtu_xdata[1],
                            rtu_xdata[0], rtu_value);

                        /* Transition: '<S501>:31' */
                        /* Transition: '<S501>:47' */
                    }
                    else
                    {
                        /* Transition: '<S501>:11' */
                        localB->UpperIndex = 1.0F;
                        localB->LowerIndex = 0.0F;
                        localB->fract = ICSR_ac_fraction(rtu_xdata[1],
                            rtu_xdata[0], rtu_xdata[0]);
                    }
                }
            }
        }
    }

    /* End of Chart: '<S500>/Get_Data_Indexes ' */
    /* Transition: '<S501>:5' */
}

#endif

/*
 * Output and update for action system:
 *    '<S490>/Pass'
 *    '<S491>/Pass'
 *    '<S492>/Pass'
 *    '<S606>/else'
 */
#if Rte_SysCon_Variant_ICSR_7

static FUNC(void, ICSR_CODE_LOCAL) ICSR_ac_Pass(VAR(float32, AUTOMATIC) rtu_In1,
    VAR(float32, AUTOMATIC) rtu_In2, P2VAR(float32, AUTOMATIC, ICSR_VAR_INIT)
    rty_Out1, P2VAR(float32, AUTOMATIC, ICSR_VAR_INIT) rty_Out2)
{
    /* Gain: '<S502>/Gain' */
    *rty_Out1 = rtu_In1;

    /* Gain: '<S503>/Gain' */
    *rty_Out2 = rtu_In2;
}

#endif

/*
 * Output and update for action system:
 *    '<S490>/Switch'
 *    '<S491>/Switch'
 *    '<S492>/Switch'
 */
#if Rte_SysCon_Variant_ICSR_7

static FUNC(void, ICSR_CODE_LOCAL) ICSR_ac_Switch(VAR(float32, AUTOMATIC)
    rtu_In1, VAR(float32, AUTOMATIC) rtu_In2, P2VAR(float32, AUTOMATIC,
    ICSR_VAR_INIT) rty_Out1, P2VAR(float32, AUTOMATIC, ICSR_VAR_INIT) rty_Out2)
{
    /* Product: '<S497>/Product1' */
    *rty_Out1 = -rtu_In2;

    /* Product: '<S497>/Product' */
    *rty_Out2 = -rtu_In1;
}

#endif

/* Function for Chart: '<S530>/Get_Data_Indexes ' */
#if Rte_SysCon_Variant_ICSR_7

static float32 ICSR_ac_fraction_c(float32 Upper, float32 Lower, float32 Input)
{
    float32 g;

    /* Graphical Function 'fraction': '<S531>:1' */
    /* Transition: '<S531>:67' */
    if (Lower >= Upper)
    {
        /* Transition: '<S531>:71' */
        /* Transition: '<S531>:72' */
        g = 0.0F;

        /* Transition: '<S531>:73' */
    }
    else
    {
        /* Transition: '<S531>:12' */
        g = (Input - Lower) / (Upper - Lower);
    }

    /* Transition: '<S531>:70' */
    return g;
}

#endif

/*
 * Output and update for atomic system:
 *    '<S530>/Get_Data_Indexes '
 *    '<S536>/Get_Data_Indexes '
 */
#if Rte_SysCon_Variant_ICSR_7

static FUNC(void, ICSR_CODE_LOCAL) ICSR_ac_Get_Data_Indexes_c(CONST(float32,
    AUTOMATIC) rtu_xdata[16], VAR(float32, AUTOMATIC) rtu_value, P2VAR
    (B_Get_Data_Indexes_ICSR_ac_c_T, AUTOMATIC, ICSR_VAR_INIT) localB)
{
    /* Chart: '<S530>/Get_Data_Indexes ' */
    /* Gateway: OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes  */
    /* During: OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes  */
    /* Entry Internal: OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes  */
    /* Transition: '<S531>:2' */
    if (rtu_value >= rtu_xdata[8])
    {
        /* Transition: '<S531>:4' */
        if (rtu_value >= rtu_xdata[12])
        {
            /* Transition: '<S531>:7' */
            if (rtu_value >= rtu_xdata[14])
            {
                /* Transition: '<S531>:13' */
                if (rtu_value >= rtu_xdata[15])
                {
                    /* Transition: '<S531>:68' */
                    /* Transition: '<S531>:69' */
                    localB->UpperIndex = 15.0F;
                    localB->LowerIndex = 14.0F;
                    localB->fract = ICSR_ac_fraction_c(rtu_xdata[15], rtu_xdata
                        [14], rtu_xdata[15]);
                }
                else
                {
                    /* Transition: '<S531>:63' */
                    localB->UpperIndex = 15.0F;
                    localB->LowerIndex = 14.0F;
                    localB->fract = ICSR_ac_fraction_c(rtu_xdata[15], rtu_xdata
                        [14], rtu_value);

                    /* Transition: '<S531>:66' */
                }

                /* Transition: '<S531>:65' */
                /* Transition: '<S531>:64' */
                /* Transition: '<S531>:33' */
            }
            else
            {
                /* Transition: '<S531>:28' */
                if (rtu_value >= rtu_xdata[13])
                {
                    /* Transition: '<S531>:29' */
                    localB->UpperIndex = 14.0F;
                    localB->LowerIndex = 13.0F;
                    localB->fract = ICSR_ac_fraction_c(rtu_xdata[14], rtu_xdata
                        [13], rtu_value);

                    /* Transition: '<S531>:6' */
                    /* Transition: '<S531>:32' */
                }
                else
                {
                    /* Transition: '<S531>:30' */
                    localB->UpperIndex = 13.0F;
                    localB->LowerIndex = 12.0F;
                    localB->fract = ICSR_ac_fraction_c(rtu_xdata[13], rtu_xdata
                        [12], rtu_value);
                }

                /* Transition: '<S531>:18' */
                /* Transition: '<S531>:9' */
                /* Transition: '<S531>:33' */
            }
        }
        else
        {
            /* Transition: '<S531>:15' */
            if (rtu_value >= rtu_xdata[10])
            {
                /* Transition: '<S531>:20' */
                if (rtu_value >= rtu_xdata[11])
                {
                    /* Transition: '<S531>:22' */
                    localB->UpperIndex = 12.0F;
                    localB->LowerIndex = 11.0F;
                    localB->fract = ICSR_ac_fraction_c(rtu_xdata[12], rtu_xdata
                        [11], rtu_value);

                    /* Transition: '<S531>:19' */
                    /* Transition: '<S531>:9' */
                    /* Transition: '<S531>:33' */
                }
                else
                {
                    /* Transition: '<S531>:23' */
                    localB->UpperIndex = 11.0F;
                    localB->LowerIndex = 10.0F;
                    localB->fract = ICSR_ac_fraction_c(rtu_xdata[11], rtu_xdata
                        [10], rtu_value);

                    /* Transition: '<S531>:25' */
                    /* Transition: '<S531>:9' */
                    /* Transition: '<S531>:33' */
                }
            }
            else
            {
                /* Transition: '<S531>:21' */
                if (rtu_value >= rtu_xdata[9])
                {
                    /* Transition: '<S531>:24' */
                    localB->UpperIndex = 10.0F;
                    localB->LowerIndex = 9.0F;
                    localB->fract = ICSR_ac_fraction_c(rtu_xdata[10], rtu_xdata
                        [9], rtu_value);

                    /* Transition: '<S531>:25' */
                    /* Transition: '<S531>:9' */
                    /* Transition: '<S531>:33' */
                }
                else
                {
                    /* Transition: '<S531>:59' */
                    localB->UpperIndex = 9.0F;
                    localB->LowerIndex = 8.0F;
                    localB->fract = ICSR_ac_fraction_c(rtu_xdata[9], rtu_xdata[8],
                        rtu_value);

                    /* Transition: '<S531>:44' */
                }
            }
        }

        /* Transition: '<S531>:14' */
        /* Transition: '<S531>:56' */
        /* Transition: '<S531>:47' */
    }
    else
    {
        /* Transition: '<S531>:16' */
        if (rtu_value >= rtu_xdata[4])
        {
            /* Transition: '<S531>:17' */
            if (rtu_value >= rtu_xdata[5])
            {
                /* Transition: '<S531>:39' */
                if (rtu_value >= rtu_xdata[6])
                {
                    /* Transition: '<S531>:41' */
                    localB->UpperIndex = 7.0F;
                    localB->LowerIndex = 6.0F;
                    localB->fract = ICSR_ac_fraction_c(rtu_xdata[7], rtu_xdata[6],
                        rtu_value);
                    if (rtu_value >= rtu_xdata[7])
                    {
                        /* Transition: '<S531>:58' */
                        localB->UpperIndex = 8.0F;
                        localB->LowerIndex = 7.0F;
                        localB->fract = ICSR_ac_fraction_c(rtu_xdata[8],
                            rtu_xdata[7], rtu_value);

                        /* Transition: '<S531>:55' */
                        /* Transition: '<S531>:53' */
                    }
                    else
                    {
                        /* Transition: '<S531>:3' */
                    }

                    /* Transition: '<S531>:43' */
                    /* Transition: '<S531>:10' */
                }
                else
                {
                    /* Transition: '<S531>:36' */
                    localB->UpperIndex = 6.0F;
                    localB->LowerIndex = 5.0F;
                    localB->fract = ICSR_ac_fraction_c(rtu_xdata[6], rtu_xdata[5],
                        rtu_value);

                    /* Transition: '<S531>:38' */
                    /* Transition: '<S531>:43' */
                    /* Transition: '<S531>:10' */
                }
            }
            else
            {
                /* Transition: '<S531>:37' */
                if (rtu_value >= rtu_xdata[4])
                {
                    /* Transition: '<S531>:40' */
                    localB->UpperIndex = 5.0F;
                    localB->LowerIndex = 4.0F;
                    localB->fract = ICSR_ac_fraction_c(rtu_xdata[5], rtu_xdata[4],
                        rtu_value);

                    /* Transition: '<S531>:38' */
                    /* Transition: '<S531>:43' */
                    /* Transition: '<S531>:10' */
                }
                else
                {
                    /* Transition: '<S531>:46' */
                    localB->UpperIndex = 4.0F;
                    localB->LowerIndex = 3.0F;
                    localB->fract = ICSR_ac_fraction_c(rtu_xdata[4], rtu_xdata[3],
                        rtu_value);

                    /* Transition: '<S531>:45' */
                }
            }

            /* Transition: '<S531>:42' */
            /* Transition: '<S531>:60' */
            /* Transition: '<S531>:61' */
            /* Transition: '<S531>:48' */
            /* Transition: '<S531>:56' */
            /* Transition: '<S531>:47' */
        }
        else
        {
            /* Transition: '<S531>:34' */
            if (rtu_value >= rtu_xdata[2])
            {
                /* Transition: '<S531>:49' */
                if (rtu_value >= rtu_xdata[3])
                {
                    /* Transition: '<S531>:54' */
                    /* Transition: '<S531>:52' */
                    localB->UpperIndex = 4.0F;
                    localB->LowerIndex = 3.0F;
                    localB->fract = ICSR_ac_fraction_c(rtu_xdata[4], rtu_xdata[3],
                        rtu_value);
                }
                else
                {
                    /* Transition: '<S531>:35' */
                    localB->UpperIndex = 3.0F;
                    localB->LowerIndex = 2.0F;
                    localB->fract = ICSR_ac_fraction_c(rtu_xdata[3], rtu_xdata[2],
                        rtu_value);

                    /* Transition: '<S531>:57' */
                }

                /* Transition: '<S531>:61' */
                /* Transition: '<S531>:48' */
                /* Transition: '<S531>:56' */
                /* Transition: '<S531>:47' */
            }
            else
            {
                /* Transition: '<S531>:50' */
                if (rtu_value >= rtu_xdata[1])
                {
                    /* Transition: '<S531>:51' */
                    localB->UpperIndex = 2.0F;
                    localB->LowerIndex = 1.0F;
                    localB->fract = ICSR_ac_fraction_c(rtu_xdata[2], rtu_xdata[1],
                        rtu_value);

                    /* Transition: '<S531>:26' */
                    /* Transition: '<S531>:8' */
                }
                else
                {
                    /* Transition: '<S531>:62' */
                    if (rtu_value >= rtu_xdata[0])
                    {
                        /* Transition: '<S531>:27' */
                        localB->UpperIndex = 1.0F;
                        localB->LowerIndex = 0.0F;
                        localB->fract = ICSR_ac_fraction_c(rtu_xdata[1],
                            rtu_xdata[0], rtu_value);

                        /* Transition: '<S531>:31' */
                        /* Transition: '<S531>:47' */
                    }
                    else
                    {
                        /* Transition: '<S531>:11' */
                        localB->UpperIndex = 1.0F;
                        localB->LowerIndex = 0.0F;
                        localB->fract = ICSR_ac_fraction_c(rtu_xdata[1],
                            rtu_xdata[0], rtu_xdata[0]);
                    }
                }
            }
        }
    }

    /* End of Chart: '<S530>/Get_Data_Indexes ' */
    /* Transition: '<S531>:5' */
}

#endif

/*
 * Output and update for action system:
 *    '<S827>/IfActionSubsystem'
 *    '<S827>/IfActionSubsystem1'
 */
#if Rte_SysCon_Variant_ICSR_7

static FUNC(void, ICSR_CODE_LOCAL) ICSR_ac_IfActionSubsystem(VAR(float32,
    AUTOMATIC) rtu_In1, VAR(float32, AUTOMATIC) rtu_In2, P2VAR(float32,
    AUTOMATIC, ICSR_VAR_INIT) rty_Out1, P2VAR(float32, AUTOMATIC, ICSR_VAR_INIT)
    rty_Out2)
{
    /* Inport: '<S832>/In1' */
    *rty_Out1 = rtu_In1;

    /* Inport: '<S832>/In2' */
    *rty_Out2 = rtu_In2;
}

#endif

/*
 * Output and update for atomic system:
 *    '<S1009>/GradientLimiter1'
 *    '<S1009>/GradientLimiter2'
 *    '<S1009>/GradientLimiter3'
 *    '<S1009>/GradientLimiter4'
 */
#if Rte_SysCon_Variant_ICSR_7

static FUNC(void, ICSR_CODE_LOCAL) ICSR_ac_GradientLimiter1(VAR(float32,
    AUTOMATIC) rtu_LU, VAR(float32, AUTOMATIC) rtu_LD, VAR(float32, AUTOMATIC)
    rtu_u, VAR(float32, AUTOMATIC) rtu_u_old, P2VAR(B_GradientLimiter1_ICSR_ac_T,
    AUTOMATIC, ICSR_VAR_INIT) localB)
{
    float32 rtb_Sum2_l;

    /* Sum: '<S1011>/Sum2' */
    rtb_Sum2_l = rtu_u - rtu_u_old;

    /* Outputs for Atomic SubSystem: '<S1011>/Limiter' */
    /* Switch: '<S1021>/Switch1' incorporates:
     *  RelationalOperator: '<S1021>/Relational Operator'
     */
    if (rtu_LU < rtb_Sum2_l)
    {
        /* Switch: '<S1021>/Switch1' */
        rtb_Sum2_l = rtu_LU;
    }

    /* End of Switch: '<S1021>/Switch1' */

    /* Switch: '<S1021>/Switch' incorporates:
     *  RelationalOperator: '<S1021>/Relational Operator1'
     */
    if (rtb_Sum2_l <= rtu_LD)
    {
        rtb_Sum2_l = rtu_LD;
    }

    /* End of Switch: '<S1021>/Switch' */
    /* End of Outputs for SubSystem: '<S1011>/Limiter' */

    /* Sum: '<S1011>/Sum3' */
    localB->Sum3 = rtb_Sum2_l + rtu_u_old;
}

#endif

/* Model step function for TID1 */
#if Rte_SysCon_Variant_ICSR_7

FUNC(void, ICSR_CODE) ICSR_MedTEB(void) /* Explicit Task: MedTEB */
{
    /* local block i/o variables */
#if Rte_SysCon_Variant_ICSR_7

    TeTINR_e_TransAdaptStatus rtb_TmpSignalConversionAtVeTINR;

#endif

#if Rte_SysCon_Variant_ICSR_7

    TeHSER_e_RngEqnSel rtb_TmpSignalConversionAtVeHS_p;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    TeHSER_e_RngSt tmpRead;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    TePTAR_e_ImmediateTorqRespType tmpRead_0;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    boolean tmpRead_1;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    TeESPR_e_EngSpdStatus tmpRead_2;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    TeENGR_e_ETRQ_Mode tmpRead_3;

#endif

#if Rte_SysCon_Variant_ICSR_7

    TeFWDR_e_TrnsfrCaseRange tmpRead_4;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    TeTRAR_e_EngCntrlMode tmpRead_5;

#endif

#if Rte_SysCon_Variant_ICSR_7

    boolean rtb_TmpSignalConversionAtVeI_lx;

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7)

    boolean rtb_TmpSignalConversionAtVeIC_g;

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_Subtraction1_b;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    boolean rtb_LeICSR_b_Disable_Ni_Pre;

#endif

#if Rte_SysCon_Variant_ICSR_7

    boolean rtb_VariantMerge_For_Variant__i;

#endif

#if Rte_SysCon_Variant_ICSR_7

    boolean rtb_LeICSR_b_DsblAnglCntrl_Pre;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    boolean rtb_LeICSR_b_AdvancePrepForIdle;

#endif

#if Rte_SysCon_Variant_ICSR_7

    boolean rtb_TmpSignalConversionAtVeES_d;

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_TmpSignalConversionAtVeHSER;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_Abs_o;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_Gain_e;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_TmpSignalConversionAtVeESSR;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_Merge2;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_Merge1;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_Switch1_bk;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_Sum2_ns;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_Multiplication5_o;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_Negation1_i5;

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_Negation1_h;

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_Switch3_p5;

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_Switch3_j;

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_Switch_oy;

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_VariantMerge_For_Variant_pm;

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_LeICSC_phi_DiffTrgt_Crrnt;

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7)

    float32 rtb_TmpSignalConversionAtVeENGR;

#endif

#if Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_TmpSignalConversionAtVeESPR;

#endif

#if Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_Abs;

#endif

#if Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_Gain;

#endif

#if Rte_SysCon_Variant_ICSR_7

    boolean rtb_UnitDelay_g2;

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_Merge4_i;

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_Merge6_g;

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_Merge5_d;

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_VariantMerge_For_Variant_So;

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_VariantMerge_For_Variant__e;

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_VariantMerge_For_Variant_pk;

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_VariantMerge_For_Variant_og;

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_VariantMerge_For_Variant_fz;

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_VariantMerge_For_Variant__g;

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_VariantMerge_For_Variant_gx;

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_VariantMerge_For_Variant__c;

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_TmpSignalConversionAtVeMS_i;

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_TmpSignalConversionAtVeMSPR;

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_TmpSignalConversionAtVeMS_p;

#endif

#if (Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7)

    boolean rtb_TmpSignalConversionAtVeHS_h;

#endif

#if Rte_SysCon_Variant_ICSR_7

    boolean rtb_Logical2_ls;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    boolean rtb_TmpSignalConversionAtVeES_k;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    uint16 rtb_VariantMerge_For_Variant_p4;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_Switch1_bi;

#endif

#if (Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7)

    float32 rtb_Sum2_cg;

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_TmpSignalConversionAtVeTFTR;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_Switch4;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_Product1_n4;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_Product_d0;

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7)

    boolean rtb_NotEqual_j1;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    boolean rtb_AND_bb;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    boolean rtb_AND_k2;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    boolean rtb_AND_kz;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    boolean rtb_AND_gi;

#endif

#if (Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7)

    float32 rtb_TmpSignalConversionAtVeMTIR;

#endif

#if (Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7)

    float32 rtb_TmpSignalConversionAtVeMT_l;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_Vector_as;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_Summation_jb;

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7)

    float32 rtb_Switch2_gm;

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_Switch2_b2;

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_Switch2_ni;

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_Switch2_cm;

#endif

#if (Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7)

    boolean rtb_NotEqual_ol;

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_Switch2_dr;

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_Switch_ib;

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_SumSub1;

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_Vector;

#endif

#if Rte_SysCon_Variant_ICSR_7

    boolean rtb_AND_ar;

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_Vector_c;

#endif

#if Rte_SysCon_Variant_ICSR_2 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_Sum3_iz;

#endif

#if Rte_SysCon_Variant_ICSR_7

    sint8 rtb_Switch_dp;

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_TmpSignalConversionAtVeHTDR;

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_TmpSignalConversionAtVeHT_j;

#endif

#if Rte_SysCon_Variant_ICSR_7

    boolean rtb_AND_gb;

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_Switch_k3;

#endif

#if Rte_SysCon_Variant_ICSR_7

    boolean rtb_LogicalOperator_b;

#endif

#if (Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7)

    boolean rtb_NotEqual_c;

#endif

#if Rte_SysCon_Variant_ICSR_7

    boolean rtb_NotEqual_fj;

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

    boolean rtb_NotEqual_jj;

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_Summation_jv[7];

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_TmpSignalConversionAtVeOSMR;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    boolean rtb_Equal[9];

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_TmpSignalConversionAtVeESMR;

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_TmpSignalConversionAtVeBCPR;

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_Switch_ak;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_Summation_p5[6];

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_LeICSR_n_2NiErrBefDb2;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_Sum2_nj;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_Sum3_j;

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_Switch2_nvv;

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_Sum_k;

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_Sum;

#endif

#if Rte_SysCon_Variant_ICSR_7

    boolean rtb_AND_aj;

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_Switch2_ag[7];

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_Subtraction_ab;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_Switch2_g[6];

#endif

#if Rte_SysCon_Variant_ICSR_1 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_Negation1_eu;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_Maximum_b5;

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_Maximum_e2;

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_Maximum_de;

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_Maximum_l;

#endif

#if Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_Maximum_j;

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_Negation_j;

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_Maximum_bb;

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_TmpSignalConversionAtVeEN_p;

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_TmpSignalConversionAtVeHC_b;

#endif

#if (Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7)

    float32 rtb_TmpSignalConversionAtVeHCCR;

#endif

#if (Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7)

    float32 rtb_TmpSignalConversionAtVeAPSR;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_TmpSignalConversionAtVeCSVR;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    float32 rtb_TmpSignalConversionAtVeTRAR;

#endif

#if Rte_SysCon_Variant_ICSR_7

    TeRTMR_e_ClutchLrnType rtb_TmpSignalConversionAtVeRTMR;

#endif

#if (Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7)

    TeOHSR_e_VLE_DriveStat rtb_TmpSignalConversionAtVeOHSR;

#endif

#if Rte_SysCon_Variant_ICSR_7

    TeTRGR_e_TransRangeState rtb_TmpSignalConversionAtVeTRGR;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    TeTRGR_e_TransRangeState rtb_VM_Conditional_Signal_ICSC_;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    TeHPMR_e_PropSysMode rtb_TmpSignalConversionAtVeHPMR;

#endif

#if Rte_SysCon_Variant_ICSR_7

    TeTRAR_e_EngCntrlMode rtb_VariantMerge_For_Variant__b;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    TeTRAR_e_EngCntrlMode rtb_LeICSR_e_EngCntrlMode_Pre;

#endif

#if Rte_SysCon_Variant_ICSR_7

    TeESSR_e_EngStartStopSt rtb_TmpSignalConversionAtVeES_p;

#endif

#if Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7

    TeENGR_e_CylinderDeacModes rtb_TmpSignalConversionAtVeEN_j;

#endif

#if Rte_SysCon_Variant_ICSR_7

    boolean LeICSR_b_Disable_Ni_Global;

#endif

#if (Rte_SysCon_Variant_ICSR_4 && Rte_SysCon_Variant_ICSR_7) || (Rte_SysCon_Variant_ICSR_5 && Rte_SysCon_Variant_ICSR_7)

    sint32 i;

#endif

#if Rte_SysCon_Variant_ICSR_7

    boolean VeICSI_b_Nx_ClchLrn_Active_tmp;

#endif

#if Rte_SysCon_Variant_ICSR_7

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
    /* Outputs for Function Call SubSystem: '<Root>/ICSR_MedTEB' */
    /* SignalConversion generated from: '<S1>/VeRTMR_e_ClutchLrnType' incorporates:
     *  Inport: '<Root>/VeRTMR_e_ClutchLrnType'
     */
    (void)Rte_Read_VeRTMR_e_ClutchLrnType_Value(&rtb_TmpSignalConversionAtVeRTMR);

    /* SignalConversion generated from: '<S1>/VeTINR_e_TransAdpSts' incorporates:
     *  Inport: '<Root>/VeTINR_e_TransAdpSts'
     */
    (void)Rte_Read_VeTINR_e_TransAdpSts_Value(&rtb_TmpSignalConversionAtVeTINR);

    /* SignalConversion generated from: '<S1>/VeHTDR_P_CLPBatAvail_Max' incorporates:
     *  Inport: '<Root>/VeHTDR_P_CLPBatAvail_Max'
     */
    (void)Rte_Read_VeHTDR_P_CLPBatAvail_Max_Value
        (&rtb_TmpSignalConversionAtVeHTDR);

    /* SignalConversion generated from: '<S1>/VeHTDR_P_CLPBatAvail_Min' incorporates:
     *  Inport: '<Root>/VeHTDR_P_CLPBatAvail_Min'
     */
    (void)Rte_Read_VeHTDR_P_CLPBatAvail_Min_Value
        (&rtb_TmpSignalConversionAtVeHT_j);

    /* SignalConversion generated from: '<S1>/VeMSPR_n_MtrA_SpdRaw' incorporates:
     *  Inport: '<Root>/VeMSPR_n_MtrA_SpdRaw'
     */
    (void)Rte_Read_VeMSPR_n_MtrA_SpdRaw_Value(&rtb_TmpSignalConversionAtVeMSPR);

    /* SignalConversion generated from: '<S1>/VeMSPR_n_MtrB_SpdRaw' incorporates:
     *  Inport: '<Root>/VeMSPR_n_MtrB_SpdRaw'
     */
    (void)Rte_Read_VeMSPR_n_MtrB_SpdRaw_Value(&rtb_TmpSignalConversionAtVeMS_i);

    /* SignalConversion generated from: '<S1>/VeMSPR_n_MtrC_SpdRaw' incorporates:
     *  Inport: '<Root>/VeMSPR_n_MtrC_SpdRaw'
     */
    (void)Rte_Read_VeMSPR_n_MtrC_SpdRaw_Value(&rtb_TmpSignalConversionAtVeMS_p);

    /* SignalConversion generated from: '<S1>/VeESSR_e_EngStartStopSt' incorporates:
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     */
    (void)Rte_Read_VeESSR_e_EngStartStopSt_Value
        (&rtb_TmpSignalConversionAtVeES_p);

    /* SignalConversion generated from: '<S1>/VeICSR_b_DisableALL_Read' incorporates:
     *  Merge: '<Root>/VeICSR_b_DisableALL_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVeI_lx =
        Rte_IrvRead_ICSR_MedTEB_VeICSR_b_DisableALL_write_IRV();

    /* SignalConversion generated from: '<S1>/VeHSER_n_NxProfSmthDly' incorporates:
     *  Inport: '<Root>/VeHSER_n_NxProfSmthDly'
     */
    (void)Rte_Read_VeHSER_n_NxProfSmthDly_Value(&rtb_TmpSignalConversionAtVeHSER);

    /* SignalConversion generated from: '<S1>/VeTRGR_e_VldtdTransRngSt' incorporates:
     *  Inport: '<Root>/VeTRGR_e_VldtdTransRngSt'
     */
    (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value
        (&rtb_TmpSignalConversionAtVeTRGR);

    /* SignalConversion generated from: '<S1>/VeESSR_b_InputTorqOverride' incorporates:
     *  Inport: '<Root>/VeESSR_b_InputTorqOverride'
     */
    (void)Rte_Read_VeESSR_b_InputTorqOverride_Value
        (&rtb_TmpSignalConversionAtVeES_d);

    /* SignalConversion generated from: '<S1>/VeHCCR_M_Clch1_TorqEst' incorporates:
     *  SignalConversion generated from: '<S1>/VeICSR_b_FreezITerm_All_Read'
     *  SignalConversion generated from: '<S1>/VeMTIR_M_P2SpdCntrlMaxTrqLmt'
     *  SignalConversion generated from: '<S1>/VeMTIR_M_P2SpdCntrlMinTrqLmt'
     *  SignalConversion generated from: '<S1>/VeOHSR_e_ILEState'
     */
#if Rte_SysCon_Variant_ICSR_4 || Rte_SysCon_Variant_ICSR_5

    /* SignalConversion generated from: '<S1>/VeHCCR_M_Clch1_TorqEst' incorporates:
     *  Inport: '<Root>/VeHCCR_M_Clch1_TorqEst'
     */
    (void)Rte_Read_VeHCCR_M_Clch1_TorqEst_Value(&rtb_TmpSignalConversionAtVeHCCR);

    /* SignalConversion generated from: '<S1>/VeICSR_b_FreezITerm_All_Read' incorporates:
     *  Merge: '<Root>/VeICSR_b_FreezITerm_All_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVeIC_g =
        Rte_IrvRead_ICSR_MedTEB_VeICSR_b_FreezITerm_All_write_IRV();

    /* SignalConversion generated from: '<S1>/VeMTIR_M_P2SpdCntrlMaxTrqLmt' incorporates:
     *  Inport: '<Root>/VeMTIR_M_P2SpdCntrlMaxTrqLmt'
     */
    (void)Rte_Read_VeMTIR_M_P2SpdCntrlMaxTrqLmt_Value
        (&rtb_TmpSignalConversionAtVeMTIR);

    /* SignalConversion generated from: '<S1>/VeMTIR_M_P2SpdCntrlMinTrqLmt' incorporates:
     *  Inport: '<Root>/VeMTIR_M_P2SpdCntrlMinTrqLmt'
     */
    (void)Rte_Read_VeMTIR_M_P2SpdCntrlMinTrqLmt_Value
        (&rtb_TmpSignalConversionAtVeMT_l);

    /* SignalConversion generated from: '<S1>/VeOHSR_e_ILEState' incorporates:
     *  Inport: '<Root>/VeOHSR_e_ILEState'
     */
    (void)Rte_Read_VeOHSR_e_ILEState_Value(&rtb_TmpSignalConversionAtVeOHSR);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHCCR_M_Clch1_TorqEst' */

    /* SignalConversion generated from: '<S1>/VeESSR_scl_SpdCtlGainMod' */
#if Rte_SysCon_Variant_ICSR_5

    /* SignalConversion generated from: '<S1>/VeESSR_scl_SpdCtlGainMod' incorporates:
     *  Inport: '<Root>/VeESSR_scl_SpdCtlGainMod'
     */
    (void)Rte_Read_VeESSR_scl_SpdCtlGainMod_Value
        (&rtb_TmpSignalConversionAtVeESSR);

#endif

    /* End of SignalConversion generated from: '<S1>/VeESSR_scl_SpdCtlGainMod' */

    /* SignalConversion generated from: '<S1>/VeHSER_e_RngEqnSel' incorporates:
     *  Inport: '<Root>/VeHSER_e_RngEqnSel'
     */
    (void)Rte_Read_VeHSER_e_RngEqnSel_Value(&rtb_TmpSignalConversionAtVeHS_p);

    /* SignalConversion generated from: '<S1>/VeENGR_e_CylinderDeacMode' incorporates:
     *  SignalConversion generated from: '<S1>/VeCSVR_v_VehSpdSigned'
     *  SignalConversion generated from: '<S1>/VeTRAR_M_HybCmndEngTorqPrdtd'
     */
#if Rte_SysCon_Variant_ICSR_5

    /* SignalConversion generated from: '<S1>/VeENGR_e_CylinderDeacMode' incorporates:
     *  Inport: '<Root>/VeENGR_e_CylinderDeacMode'
     */
    (void)Rte_Read_VeENGR_e_CylinderDeacMode_Value
        (&rtb_TmpSignalConversionAtVeEN_j);

    /* SignalConversion generated from: '<S1>/VeTRAR_M_HybCmndEngTorqPrdtd' incorporates:
     *  Inport: '<Root>/VeTRAR_M_HybCmndEngTorqPrdtd'
     */
    (void)Rte_Read_VeTRAR_M_HybCmndEngTorqPrdtd_Value
        (&rtb_TmpSignalConversionAtVeTRAR);

    /* SignalConversion generated from: '<S1>/VeCSVR_v_VehSpdSigned' incorporates:
     *  Inport: '<Root>/VeCSVR_v_VehSpdSigned'
     */
    (void)Rte_Read_VeCSVR_v_VehSpdSigned_Value(&rtb_TmpSignalConversionAtVeCSVR);

#endif

    /* End of SignalConversion generated from: '<S1>/VeENGR_e_CylinderDeacMode' */

    /* SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp' */
#if Rte_SysCon_Variant_ICSR_1 || Rte_SysCon_Variant_ICSR_2 || Rte_SysCon_Variant_ICSR_4 || Rte_SysCon_Variant_ICSR_5

    /* SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp' incorporates:
     *  Inport: '<Root>/VeTFTR_T_TransOilTemp'
     */
    (void)Rte_Read_VeTFTR_T_TransOilTemp_Value(&rtb_TmpSignalConversionAtVeTFTR);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp' */

    /* SignalConversion generated from: '<S1>/VeHSER_b_C2CShiftActive' incorporates:
     *  SignalConversion generated from: '<S1>/VeHCCR_M_Clch2_TorqEst'
     */
#if Rte_SysCon_Variant_ICSR_4 || Rte_SysCon_Variant_ICSR_5

    /* SignalConversion generated from: '<S1>/VeHSER_b_C2CShiftActive' incorporates:
     *  Inport: '<Root>/VeHSER_b_C2CShiftActive'
     */
    (void)Rte_Read_VeHSER_b_C2CShiftActive_Value
        (&rtb_TmpSignalConversionAtVeHS_h);

    /* SignalConversion generated from: '<S1>/VeHCCR_M_Clch2_TorqEst' incorporates:
     *  Inport: '<Root>/VeHCCR_M_Clch2_TorqEst'
     */
    (void)Rte_Read_VeHCCR_M_Clch2_TorqEst_Value(&rtb_TmpSignalConversionAtVeHC_b);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHSER_b_C2CShiftActive' */

    /* SignalConversion generated from: '<S1>/VeHPMR_e_PropSysMode' incorporates:
     *  SignalConversion generated from: '<S1>/VeBCPR_M_BeltTrqMaxHTDR'
     *  SignalConversion generated from: '<S1>/VeESMR_P_BatSTMaxLim'
     *  SignalConversion generated from: '<S1>/VeESSR_b_DsblNiClsdLoopCntrl'
     */
#if Rte_SysCon_Variant_ICSR_5

    /* SignalConversion generated from: '<S1>/VeHPMR_e_PropSysMode' incorporates:
     *  Inport: '<Root>/VeHPMR_e_PropSysMode'
     */
    (void)Rte_Read_VeHPMR_e_PropSysMode_Value(&rtb_TmpSignalConversionAtVeHPMR);

    /* SignalConversion generated from: '<S1>/VeESSR_b_DsblNiClsdLoopCntrl' incorporates:
     *  Inport: '<Root>/VeESSR_b_DsblNiClsdLoopCntrl'
     */
    (void)Rte_Read_VeESSR_b_DsblNiClsdLoopCntrl_Value
        (&rtb_TmpSignalConversionAtVeES_k);

    /* SignalConversion generated from: '<S1>/VeESMR_P_BatSTMaxLim' incorporates:
     *  Inport: '<Root>/VeESMR_P_BatSTMaxLim'
     */
    (void)Rte_Read_VeESMR_P_BatSTMaxLim_Value(&rtb_TmpSignalConversionAtVeESMR);

    /* SignalConversion generated from: '<S1>/VeBCPR_M_BeltTrqMaxHTDR' incorporates:
     *  Inport: '<Root>/VeBCPR_M_BeltTrqMaxHTDR'
     */
    (void)Rte_Read_VeBCPR_M_BeltTrqMaxHTDR_Value
        (&rtb_TmpSignalConversionAtVeBCPR);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHPMR_e_PropSysMode' */

    /* SignalConversion generated from: '<S1>/VeOSMR_n_TransMinEngSpd' incorporates:
     *  Inport: '<Root>/VeOSMR_n_TransMinEngSpd'
     */
    (void)Rte_Read_VeOSMR_n_TransMinEngSpd_Value
        (&rtb_TmpSignalConversionAtVeOSMR);

    /* SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition' */
#if Rte_SysCon_Variant_ICSR_4 || Rte_SysCon_Variant_ICSR_5

    /* SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition' incorporates:
     *  Inport: '<Root>/VeAPSR_Pct_AccelPedalEffPosition'
     */
    (void)Rte_Read_VeAPSR_Pct_AccelPedalEffPosition_Value
        (&rtb_TmpSignalConversionAtVeAPSR);

#endif

    /* End of SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition' */

    /* SignalConversion generated from: '<S1>/VeESPR_phi_EngineAngle_MCP' */
#if Rte_SysCon_Variant_ICSR_2

    /* SignalConversion generated from: '<S1>/VeESPR_phi_EngineAngle_MCP' incorporates:
     *  Inport: '<Root>/VeESPR_phi_EngineAngle_MCP'
     */
    (void)Rte_Read_VeESPR_phi_EngineAngle_MCP_Value
        (&rtb_TmpSignalConversionAtVeESPR);

#endif

    /* End of SignalConversion generated from: '<S1>/VeESPR_phi_EngineAngle_MCP' */

    /* SignalConversion generated from: '<S1>/VeENGR_p_EngManfldAbsPrs' incorporates:
     *  SignalConversion generated from: '<S1>/VeENGR_T_EngCoolantTemp'
     */
#if Rte_SysCon_Variant_ICSR_1 || Rte_SysCon_Variant_ICSR_2

    /* SignalConversion generated from: '<S1>/VeENGR_p_EngManfldAbsPrs' incorporates:
     *  Inport: '<Root>/VeENGR_p_EngManfldAbsPrs'
     */
    (void)Rte_Read_VeENGR_p_EngManfldAbsPrs_Value
        (&rtb_TmpSignalConversionAtVeENGR);

    /* SignalConversion generated from: '<S1>/VeENGR_T_EngCoolantTemp' incorporates:
     *  Inport: '<Root>/VeENGR_T_EngCoolantTemp'
     */
    (void)Rte_Read_VeENGR_T_EngCoolantTemp_Value
        (&rtb_TmpSignalConversionAtVeEN_p);

#endif

    /* End of SignalConversion generated from: '<S1>/VeENGR_p_EngManfldAbsPrs' */
    /* End of Outputs for SubSystem: '<Root>/ICSR_MedTEB' */

    /* Inport: '<Root>/VeFWDR_e_Tcase_Stat' */
    (void)Rte_Read_VeFWDR_e_Tcase_Stat_Value(&tmpRead_4);

    /* Inport: '<Root>/VeTISR_n_NiFromMtr' */
    (void)Rte_Read_VeTISR_n_NiFromMtr_Value(&rtb_Maximum_bb);

    /* Inport: '<Root>/VeTISR_b_NiFromMtrFA' */
    (void)Rte_Read_VeTISR_b_NiFromMtrFA_Value(&LeICSR_b_Disable_Ni_Global);

    /* Inport: '<Root>/VeTISR_n_InputSpeedRaw' */
    (void)Rte_Read_VeTISR_n_InputSpeedRaw_Value(&rtb_Subtraction_ab);

    /* Outputs for Function Call SubSystem: '<Root>/ICSR_MedTEB' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Process_Input'
     */
    /* Switch: '<S17>/Switch' incorporates:
     *  Constant: '<S993>/Calib'
     *  Logic: '<S17>/Logical1'
     */
    if ((KeICSR_b_EnblNiFromTISR) || LeICSR_b_Disable_Ni_Global)
    {
        /* Switch: '<S17>/Switch' */
        VeICSI_n_NiActl = rtb_Subtraction_ab;
    }
    else
    {
        /* Switch: '<S17>/Switch' */
        VeICSI_n_NiActl = rtb_Maximum_bb;
    }

    /* End of Switch: '<S17>/Switch' */

    /* RelationalOperator: '<S17>/Comparison4' incorporates:
     *  Constant: '<S992>/Constant'
     *  Inport: '<Root>/VeFWDR_e_Tcase_Stat'
     */
    VeICSI_b_TCas4Low_Active = (((uint32)tmpRead_4) == CeFWDR_e_TfrCas4Low);

    /* If: '<S17>/If' incorporates:
     *  Constant: '<S1004>/Constant'
     *  Constant: '<S1005>/Constant'
     *  Constant: '<S1007>/Constant'
     *  Constant: '<S1008>/Constant'
     *  Constant: '<S994>/Calib'
     */
    if (KeICSR_b_UseRTMRClchLrnTyp)
    {
        /* Outputs for IfAction SubSystem: '<S17>/Use_RTMR' incorporates:
         *  ActionPort: '<S995>/Action Port'
         */
        /* Merge: '<S17>/Merge' incorporates:
         *  Constant: '<S1000>/Constant'
         *  RelationalOperator: '<S995>/Comparison1'
         *  Switch: '<S995>/Switch1'
         */
        VeICSI_b_EOL_LrnActv = (((uint32)rtb_TmpSignalConversionAtVeRTMR) ==
                                CeRTMR_e_Clutch_EOL);

        /* Outputs for Atomic SubSystem: '<S995>/ClosedInterval' */
        /* Merge: '<S17>/Merge1' incorporates:
         *  Constant: '<S998>/Constant'
         *  Constant: '<S999>/Constant'
         *  Logic: '<S997>/Logical Operator'
         *  RelationalOperator: '<S997>/Relatonal Operator'
         *  RelationalOperator: '<S997>/Relatonal Operator1'
         *  Switch: '<S995>/Switch2'
         */
        VeICSI_b_STADA_LrnActv = ((((uint32)rtb_TmpSignalConversionAtVeRTMR) >=
            CeRTMR_e_Clutch_SerAE) && (((uint32)rtb_TmpSignalConversionAtVeRTMR)
            <= CeRTMR_e_Clutch_SerILE));

        /* End of Outputs for SubSystem: '<S995>/ClosedInterval' */

        /* Merge: '<S17>/Merge2' incorporates:
         *  Constant: '<S995>/FALSE Constant2'
         *  SignalConversion generated from: '<S995>/InField_K0_Learn_Active'
         */
        VeICSI_b_InFld_K0_LrnActv = false;

        /* Merge: '<S17>/Merge3' incorporates:
         *  Constant: '<S995>/FALSE Constant3'
         *  SignalConversion generated from: '<S995>/InField_ILE_Learn_Active'
         */
        VeICSI_b_InFld_ILE_LrnActv = false;

        /* End of Outputs for SubSystem: '<S17>/Use_RTMR' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S17>/Use_TINR' incorporates:
         *  ActionPort: '<S996>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S996>/ClosedInterval1' */
        ICSR_ac_ClosedInterval1(rtb_TmpSignalConversionAtVeTINR,
                                CeTINR_e_EOLAD_ShftCltchsAdapt,
                                CeTINR_e_EOLAD_K0_Adapt,
                                &ICSR_ac_B.ClosedInterval1);

        /* End of Outputs for SubSystem: '<S996>/ClosedInterval1' */

        /* Outputs for Atomic SubSystem: '<S996>/ClosedInterval2' */
        ICSR_ac_ClosedInterval1(rtb_TmpSignalConversionAtVeTINR,
                                CeTINR_e_STADA_ShftCltchsAdapt,
                                CeTINR_e_STADA_ILE_Adapt,
                                &ICSR_ac_B.ClosedInterval2);

        /* End of Outputs for SubSystem: '<S996>/ClosedInterval2' */

        /* Merge: '<S17>/Merge' incorporates:
         *  Constant: '<S1004>/Constant'
         *  Constant: '<S1005>/Constant'
         *  Constant: '<S1007>/Constant'
         *  Constant: '<S1008>/Constant'
         *  Switch: '<S996>/Switch3'
         */
        VeICSI_b_EOL_LrnActv = ICSR_ac_B.ClosedInterval1.LogicalOperator;

        /* Merge: '<S17>/Merge1' incorporates:
         *  Switch: '<S996>/Switch4'
         */
        VeICSI_b_STADA_LrnActv = ICSR_ac_B.ClosedInterval2.LogicalOperator;

        /* Merge: '<S17>/Merge2' incorporates:
         *  Constant: '<S1006>/Constant'
         *  RelationalOperator: '<S996>/Comparison5'
         *  SignalConversion generated from: '<S1>/VeTINR_e_TransAdpSts'
         *  Switch: '<S996>/Switch5'
         */
        VeICSI_b_InFld_K0_LrnActv = (((uint32)rtb_TmpSignalConversionAtVeTINR) ==
            CeTINR_e_K0_PulseAdapt);

        /* Merge: '<S17>/Merge3' incorporates:
         *  Constant: '<S1003>/Constant'
         *  RelationalOperator: '<S996>/Comparison5'
         *  RelationalOperator: '<S996>/Comparison6'
         *  SignalConversion generated from: '<S1>/VeTINR_e_TransAdpSts'
         *  Switch: '<S996>/Switch6'
         */
        VeICSI_b_InFld_ILE_LrnActv = (((uint32)rtb_TmpSignalConversionAtVeTINR) ==
            CeTINR_e_ILE_Adapt);

        /* End of Outputs for SubSystem: '<S17>/Use_TINR' */
    }

    /* End of If: '<S17>/If' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ICSC_CalSelect'
     */
    /* Outputs for Atomic SubSystem: '<S8>/ICSC_Nx_Cals' */
    /* Outputs for IfAction SubSystem: '<S185>/ICSC_Nx_Cals' incorporates:
     *  ActionPort: '<S375>/Action Port'
     */
    /* If: '<S185>/Disable' incorporates:
     *  Logic: '<S17>/Logical2'
     *  Logic: '<S380>/Logical Operator'
     */
    VeICSI_b_Nx_ClchLrn_Active_tmp = ((((VeICSI_b_EOL_LrnActv) ||
        (VeICSI_b_STADA_LrnActv)) || (VeICSI_b_InFld_K0_LrnActv)) ||
        (VeICSI_b_InFld_ILE_LrnActv));

    /* End of Outputs for SubSystem: '<S185>/ICSC_Nx_Cals' */
    /* End of Outputs for SubSystem: '<S8>/ICSC_Nx_Cals' */

    /* Logic: '<S17>/Logical2' */
    VeICSI_b_Nx_ClchLrn_Active = VeICSI_b_Nx_ClchLrn_Active_tmp;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ICSC_ProcessNx'
     */
    /* If: '<S875>/If' incorporates:
     *  Constant: '<S13>/Constant Value1'
     *  Constant: '<S882>/Calib'
     *  DataTypeConversion: '<S875>/Data Type Conversion'
     *  Inport: '<Root>/VeCSLR_b_NC1_FA'
     *  Inport: '<Root>/VeCSLR_b_NC2_FA'
     *  Inport: '<Root>/VeMSPR_b_MtrA_SpdFA'
     *  Inport: '<Root>/VeMSPR_b_MtrB_SpdFA'
     *  Inport: '<Root>/VeMSPR_b_MtrC_SpdFA'
     *  Product: '<S876>/Multiplication'
     *  RelationalOperator: '<S875>/Relational Operator'
     *  RelationalOperator: '<S875>/Relational Operator1'
     *  RelationalOperator: '<S875>/Relational Operator2'
     *  RelationalOperator: '<S875>/Relational Operator3'
     *  RelationalOperator: '<S875>/Relational Operator4'
     *  Sum: '<S876>/Subtraction'
     *  Sum: '<S876>/Subtraction1'
     *  UnitDelay: '<S875>/Unit Delay3'
     */
#if Rte_SysCon_Variant_ICSR_4

    if (((sint32)Rte_Prm_HeTSXR_e_NxDomain_HeTSXR_e_NxDomain()) == 4)
    {
        (void)Rte_Read_VeCSLR_b_NC1_FA_Value(&rtb_NotEqual_c);

        /* Merge: '<S875>/Merge' incorporates:
         *  Inport: '<Root>/VeCSLR_b_NC1_FA'
         *  Inport: '<Root>/VeCSLR_n_Clch1_RawSlipSpeed'
         */
        (void)Rte_Read_VeCSLR_n_Clch1_RawSlipSpeed_Value(&ICSR_ac_B.Merge_j);

        /* Outputs for IfAction SubSystem: '<S875>/If Action Subsystem' incorporates:
         *  ActionPort: '<S883>/Action Port'
         */
        /* VariantMerge generated from: '<S13>/Variant Source1' incorporates:
         *  Constant: '<S888>/Calib'
         *  Logic: '<S883>/Logical Operator'
         */
        ICSR_ac_B.VariantMerge_For_Variant_Sour_e = (rtb_NotEqual_c &&
            (KeICSR_b_EnableFACheck));

        /* End of Outputs for SubSystem: '<S875>/If Action Subsystem' */
    }
    else if (((sint32)Rte_Prm_HeTSXR_e_NxDomain_HeTSXR_e_NxDomain()) == 2)
    {
        (void)Rte_Read_VeMSPR_b_MtrB_SpdFA_Value(&rtb_NotEqual_c);

        /* Outputs for IfAction SubSystem: '<S875>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S884>/Action Port'
         */
        /* Merge: '<S875>/Merge' incorporates:
         *  Inport: '<Root>/VeMSPR_b_MtrB_SpdFA'
         *  Inport: '<S884>/Nb'
         */
        ICSR_ac_B.Merge_j = rtb_TmpSignalConversionAtVeMS_i;

        /* VariantMerge generated from: '<S13>/Variant Source1' incorporates:
         *  Constant: '<S888>/Calib'
         *  Logic: '<S884>/Logical Operator'
         */
        ICSR_ac_B.VariantMerge_For_Variant_Sour_e = (rtb_NotEqual_c &&
            (KeICSR_b_EnableFACheck));

        /* End of Outputs for SubSystem: '<S875>/If Action Subsystem1' */
    }
    else if (((sint32)Rte_Prm_HeTSXR_e_NxDomain_HeTSXR_e_NxDomain()) == 1)
    {
        (void)Rte_Read_VeMSPR_b_MtrA_SpdFA_Value(&rtb_NotEqual_c);

        /* Outputs for IfAction SubSystem: '<S875>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S885>/Action Port'
         */
        /* Merge: '<S875>/Merge' incorporates:
         *  Inport: '<Root>/VeMSPR_b_MtrA_SpdFA'
         *  Inport: '<S885>/Na'
         */
        ICSR_ac_B.Merge_j = rtb_TmpSignalConversionAtVeMSPR;

        /* VariantMerge generated from: '<S13>/Variant Source1' incorporates:
         *  Constant: '<S888>/Calib'
         *  Logic: '<S885>/Logical Operator'
         */
        ICSR_ac_B.VariantMerge_For_Variant_Sour_e = (rtb_NotEqual_c &&
            (KeICSR_b_EnableFACheck));

        /* End of Outputs for SubSystem: '<S875>/If Action Subsystem2' */
    }
    else if (((sint32)Rte_Prm_HeTSXR_e_NxDomain_HeTSXR_e_NxDomain()) == 5)
    {
        (void)Rte_Read_VeCSLR_b_NC2_FA_Value(&rtb_NotEqual_c);

        /* Merge: '<S875>/Merge' incorporates:
         *  Inport: '<Root>/VeCSLR_b_NC2_FA'
         *  Inport: '<Root>/VeCSLR_n_Clch2_RawSlipSpeed'
         */
        (void)Rte_Read_VeCSLR_n_Clch2_RawSlipSpeed_Value(&ICSR_ac_B.Merge_j);

        /* Outputs for IfAction SubSystem: '<S875>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S886>/Action Port'
         */
        /* VariantMerge generated from: '<S13>/Variant Source1' incorporates:
         *  Constant: '<S888>/Calib'
         *  Logic: '<S886>/Logical Operator'
         */
        ICSR_ac_B.VariantMerge_For_Variant_Sour_e = (rtb_NotEqual_c &&
            (KeICSR_b_EnableFACheck));

        /* End of Outputs for SubSystem: '<S875>/If Action Subsystem3' */
    }
    else
    {
        if (((sint32)Rte_Prm_HeTSXR_e_NxDomain_HeTSXR_e_NxDomain()) == 3)
        {
            (void)Rte_Read_VeMSPR_b_MtrC_SpdFA_Value(&rtb_NotEqual_c);

            /* Outputs for IfAction SubSystem: '<S875>/If Action Subsystem4' incorporates:
             *  ActionPort: '<S887>/Action Port'
             */
            /* Merge: '<S875>/Merge' incorporates:
             *  Inport: '<Root>/VeMSPR_b_MtrC_SpdFA'
             *  Inport: '<S887>/Nc'
             */
            ICSR_ac_B.Merge_j = rtb_TmpSignalConversionAtVeMS_p;

            /* VariantMerge generated from: '<S13>/Variant Source1' incorporates:
             *  Constant: '<S888>/Calib'
             *  Logic: '<S887>/Logical Operator'
             */
            ICSR_ac_B.VariantMerge_For_Variant_Sour_e = (rtb_NotEqual_c &&
                (KeICSR_b_EnableFACheck));

            /* End of Outputs for SubSystem: '<S875>/If Action Subsystem4' */
        }
    }

    /* Sum: '<S876>/Subtraction1' incorporates:
     *  Constant: '<S882>/Calib'
     *  Constant: '<S889>/Calib'
     *  Inport: '<Root>/VeCSLR_b_NC1_FA'
     *  Inport: '<Root>/VeCSLR_b_NC2_FA'
     *  Inport: '<Root>/VeMSPR_b_MtrA_SpdFA'
     *  Inport: '<Root>/VeMSPR_b_MtrB_SpdFA'
     *  Inport: '<Root>/VeMSPR_b_MtrC_SpdFA'
     */
    rtb_Subtraction1_b = ((ICSR_ac_B.Merge_j - ICSR_ac_DW.UnitDelay3_DSTATE_c5) *
                          KeICSR_k_NxRawFiltCoeff) +
        ICSR_ac_DW.UnitDelay3_DSTATE_c5;

#else

    ICSR_ac_B.ConstantValue1 = true;

#endif

    /* End of If: '<S875>/If' */

    /* SignalConversion generated from: '<S13>/Variant Source' */
#if Rte_SysCon_Variant_ICSR_4

    /* VariantMerge generated from: '<S13>/Variant Source' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_h = rtb_Subtraction1_b;

#else

    /* VariantMerge generated from: '<S13>/Variant Source1' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_e = ICSR_ac_B.ConstantValue1;

    /* VariantMerge generated from: '<S13>/Variant Source' incorporates:
     *  Constant: '<S13>/Constant Value'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_h = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S13>/Variant Source' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/ICSR_MedTEB' */

    /* Inport: '<Root>/VeESSR_b_DsblNc1ClsdLoopCntrl' */
    (void)Rte_Read_VeESSR_b_DsblNc1ClsdLoopCntrl_Value(&rtb_AND_gb);

    /* Inport: '<Root>/VeHPMR_b_HighMtrStrtSpdActv' */
    (void)Rte_Read_VeHPMR_b_HighMtrStrtSpdActv_Value(&rtb_AND_aj);

    /* Inport: '<Root>/VeHSER_b_DisablNiClsdLoopCntrl' */
    (void)Rte_Read_VeHSER_b_DisablNiClsdLoopCntrl_Value(&rtb_NotEqual_fj);

    /* Inport: '<Root>/VeHSER_b_DisablNxClsdLoopCntrl' */
    (void)Rte_Read_VeHSER_b_DisablNxClsdLoopCntrl_Value(&rtb_LogicalOperator_b);

    /* Outputs for Function Call SubSystem: '<Root>/ICSR_MedTEB' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ICSC_CalSelect'
     */
    /* Logic: '<S179>/Logical4' incorporates:
     *  Constant: '<S189>/Calib'
     */
    LeICSR_b_Disable_Ni_Global = ((KeICSR_b_Disable_Ni_Global) ||
        rtb_NotEqual_fj);

    /* Logic: '<S180>/Logical5' incorporates:
     *  Constant: '<S190>/Calib'
     */
    VeICSR_b_Disable_Nx = (((((KeICSR_b_Disable_Nx) || rtb_LogicalOperator_b) ||
        (ICSR_ac_B.VariantMerge_For_Variant_Sour_e)) || rtb_AND_aj) ||
                           rtb_AND_gb);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Update for UnitDelay: '<S875>/Unit Delay3' incorporates:
     *  Constant: '<S8>/Constant Value9'
     *  SignalConversion generated from: '<S8>/Variant Source10'
     */
#if Rte_SysCon_Variant_ICSR_4

    /* Outputs for Atomic SubSystem: '<S8>/ICSC_Nx_Cals' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ICSC_ProcessNx'
     */
    ICSR_ac_DW.UnitDelay3_DSTATE_c5 = rtb_Subtraction1_b;

    /* Logic: '<S185>/Logical2' incorporates:
     *  Constant: '<S373>/Constant'
     *  Constant: '<S376>/Calib'
     *  Logic: '<S185>/Logical'
     *  RelationalOperator: '<S185>/Comparison4'
     *  RelationalOperator: '<S185>/Comparison5'
     *  SignalConversion generated from: '<S1>/VeHSER_e_RngEqnSel'
     */
    rtb_Logical2_ls = (((VeICSR_b_Disable_Nx) || ((((uint32)
                           rtb_TmpSignalConversionAtVeHS_p) !=
                          CeHSER_e_UseNeutralEqn) &&
                         (KeICSR_b_DisallowIdleCtrlLckedILE))) ||
                       rtb_TmpSignalConversionAtVeHS_h);

    /* Outputs for Atomic SubSystem: '<S185>/EdgeFalling' */
    /* Logic: '<S372>/AND' incorporates:
     *  Logic: '<S372>/OR1'
     *  UnitDelay: '<S372>/Unit Delay'
     */
    rtb_AND_gb = ((!rtb_Logical2_ls) && (ICSR_ac_DW.UnitDelay_DSTATE_klf));

    /* Update for UnitDelay: '<S372>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_klf = rtb_Logical2_ls;

    /* End of Outputs for SubSystem: '<S185>/EdgeFalling' */

    /* Switch: '<S185>/Switch' incorporates:
     *  Signum: '<S185>/Sign'
     */
    if (rtb_Logical2_ls)
    {
        /* Switch: '<S185>/Switch' incorporates:
         *  UnitDelay: '<S185>/Unit Delay'
         */
        rtb_Switch_k3 = ICSR_ac_DW.UnitDelay_DSTATE_j0;

        /* Outputs for IfAction SubSystem: '<S185>/ICSC_NxDisable' incorporates:
         *  ActionPort: '<S374>/Action Port'
         */
        /* If: '<S185>/Disable' incorporates:
         *  Constant: '<S374>/Constant Value'
         *  Constant: '<S374>/Constant Value1'
         *  Constant: '<S374>/Constant Value2'
         *  Constant: '<S374>/Constant Value3'
         *  Constant: '<S374>/Constant Value4'
         *  Constant: '<S374>/Constant Value5'
         *  Constant: '<S374>/Constant Value6'
         *  Constant: '<S374>/Constant Value7'
         *  Constant: '<S374>/Constant Value8'
         *  Constant: '<S374>/Constant Value9'
         *  Constant: '<S377>/Calib'
         *  DataStoreWrite: '<S374>/Dsw_Nx_CalSwitchTrigg'
         *  DataTypeConversion: '<S374>/Data Type Conversion'
         *  DataTypeConversion: '<S374>/Data Type Conversion1'
         *  Merge: '<S185>/Merge'
         *  Merge: '<S185>/Merge1'
         *  Merge: '<S185>/Merge10'
         *  Merge: '<S185>/Merge2'
         *  Merge: '<S185>/Merge3'
         *  Merge: '<S185>/Merge4'
         *  Merge: '<S185>/Merge5'
         *  Merge: '<S185>/Merge7'
         *  Merge: '<S185>/Merge8'
         *  Merge: '<S185>/Merge9'
         *  RelationalOperator: '<S185>/Comparison5'
         *  RelationalOperator: '<S374>/Comparison5'
         *  Selector: '<S374>/Selector'
         *  SignalConversion generated from: '<S1>/VeHSER_e_RngEqnSel'
         *  SignalConversion generated from: '<S1>/VeOHSR_e_ILEState'
         *  Switch: '<S374>/Switch'
         *  UnitDelay: '<S185>/Unit Delay1'
         */
        ICSR_ac_DW.VeICSR_b_Nx_CalSwitchTrigger =
            !ICSR_ac_DW.UnitDelay1_DSTATE_mj;
        ICSR_ac_B.LeICSR_K_NxCL_PGain_Pre = 0.0F;
        ICSR_ac_B.LeICSR_K_NxCL_IGain_Pre = 0.0F;
        ICSR_ac_B.LeICSR_M_NxCL_PLimit_Pre = 0.0F;
        ICSR_ac_B.LeICSR_M_NxCL_ILimit_Pre = 0.0F;
        ICSR_ac_B.LeICSR_r_NxCL2Ta_Pre = 0.0F;
        ICSR_ac_B.LeICSR_r_NxCL2Tb_Pre = 0.0F;
        if (KaICSR_b_NxCL_AcclbsdDsblRmp_Actv[(((sint8)
                rtb_TmpSignalConversionAtVeHS_p) * 4) + ((sint8)
                rtb_TmpSignalConversionAtVeOHSR)])
        {
            /* Merge: '<S185>/Merge6' incorporates:
             *  Lookup_n-D: '<S379>/Vector'
             *  Product: '<S374>/Product'
             *  SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition'
             *  UnitDelay: '<S185>/Unit Delay'
             */
            ICSR_ac_B.LeICSR_dscl_NxCL_ModeSwtchRmp_P = look2_iflf_binlcapw
                (rtb_TmpSignalConversionAtVeAPSR, ICSR_ac_DW.UnitDelay_DSTATE_j0
                 * VeICSR_n_NxErr_Raw, ((const float32 *)
                  &(KxICSR_dscl_Nx_DisableRmp[0])), ((const float32 *)
                  &(KyICSR_dscl_Nx_DisableRmp[0])), ((const float32 *)
                  &(KtICSR_dscl_Nx_DisableRmp[0])), ICSR_ac_ConstP.pooled9, 6U);
        }
        else
        {
            /* Merge: '<S185>/Merge6' incorporates:
             *  Constant: '<S378>/Calib'
             */
            ICSR_ac_B.LeICSR_dscl_NxCL_ModeSwtchRmp_P =
                KeICSR_dscl_Nx_DisableRmp_Agg;
        }

        ICSR_ac_B.LeICSR_K_NxCL_DGain_Pre = 0.0F;
        ICSR_ac_B.LeICSR_M_NxCL_DLimit_Pre = 0.0F;
        ICSR_ac_B.LeICSR_K_NxCL_I_Anti_Windup_Gai = 0.0F;
        ICSR_ac_B.LeICSR_r_NxCL2Tc_Pre = 0.0F;

        /* End of Outputs for SubSystem: '<S185>/ICSC_NxDisable' */
    }
    else
    {
        if (VeICSC_M_NxCLCmd < 0.0F)
        {
            /* Signum: '<S185>/Sign' incorporates:
             *  Switch: '<S185>/Switch'
             */
            rtb_Switch_k3 = -1.0F;
        }
        else if (VeICSC_M_NxCLCmd > 0.0F)
        {
            /* Signum: '<S185>/Sign' incorporates:
             *  Switch: '<S185>/Switch'
             */
            rtb_Switch_k3 = 1.0F;
        }
        else
        {
            /* Switch: '<S185>/Switch' incorporates:
             *  Signum: '<S185>/Sign'
             */
            rtb_Switch_k3 = VeICSC_M_NxCLCmd;
        }

        /* Outputs for IfAction SubSystem: '<S185>/ICSC_Nx_Cals' incorporates:
         *  ActionPort: '<S375>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S380>/EdgeRising' */
        /* If: '<S185>/Disable' incorporates:
         *  Constant: '<S380>/TRUE Constant1'
         *  Constant: '<S384>/Calib'
         *  Constant: '<S385>/Calib'
         *  Constant: '<S386>/Calib'
         *  Constant: '<S387>/Calib'
         *  Constant: '<S433>/TRUE Constant'
         *  DataTypeConversion: '<S388>/Data Type Conversion'
         *  Gain: '<S426>/Gain'
         *  Gain: '<S427>/Gain'
         *  Gain: '<S428>/Gain'
         *  Gain: '<S429>/Gain'
         *  Gain: '<S430>/Gain'
         *  Gain: '<S431>/Gain'
         *  Gain: '<S432>/Gain'
         *  If: '<S388>/If_RangeState'
         *  Logic: '<S380>/Logical Operator1'
         *  Logic: '<S394>/AND'
         *  Logic: '<S394>/OR1'
         *  Merge: '<S185>/Merge'
         *  Merge: '<S185>/Merge1'
         *  Merge: '<S185>/Merge10'
         *  Merge: '<S185>/Merge2'
         *  Merge: '<S185>/Merge3'
         *  Merge: '<S185>/Merge4'
         *  Merge: '<S185>/Merge5'
         *  Merge: '<S185>/Merge6'
         *  Merge: '<S185>/Merge7'
         *  Merge: '<S185>/Merge8'
         *  Merge: '<S185>/Merge9'
         *  Product: '<S433>/Multiplication'
         *  RelationalOperator: '<S390>/Not Equal'
         *  RelationalOperator: '<S391>/Not Equal'
         *  RelationalOperator: '<S392>/Not Equal'
         *  RelationalOperator: '<S393>/Not Equal'
         *  SignalConversion generated from: '<S1>/VeHSER_e_RngEqnSel'
         *  Signum: '<S185>/Sign'
         *  Sum: '<S433>/Summation'
         *  Switch: '<S389>/Switch'
         *  Switch: '<S433>/Switch2'
         *  Switch: '<S433>/Switch3'
         *  UnitDelay: '<S390>/Unit Delay'
         *  UnitDelay: '<S391>/Unit Delay'
         *  UnitDelay: '<S392>/Unit Delay'
         *  UnitDelay: '<S393>/Unit Delay'
         *  UnitDelay: '<S394>/Unit Delay'
         *  UnitDelay: '<S433>/Unit Delay1'
         *  UnitDelay: '<S433>/Unit Delay3'
         * */
        rtb_AND_aj = !ICSR_ac_DW.UnitDelay_DSTATE_fhw;
        ICSR_ac_DW.UnitDelay_DSTATE_fhw = true;

        /* End of Outputs for SubSystem: '<S380>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S380>/EdgeBi1' */
        rtb_NotEqual_c = (VeICSI_b_EOL_LrnActv != ICSR_ac_DW.UnitDelay_DSTATE_ap);
        ICSR_ac_DW.UnitDelay_DSTATE_ap = VeICSI_b_EOL_LrnActv;

        /* End of Outputs for SubSystem: '<S380>/EdgeBi1' */

        /* Outputs for Atomic SubSystem: '<S380>/EdgeBi2' */
        rtb_NotEqual_fj = (VeICSI_b_STADA_LrnActv !=
                           ICSR_ac_DW.UnitDelay_DSTATE_gq);
        ICSR_ac_DW.UnitDelay_DSTATE_gq = VeICSI_b_STADA_LrnActv;

        /* End of Outputs for SubSystem: '<S380>/EdgeBi2' */

        /* Outputs for Atomic SubSystem: '<S380>/EdgeBi3' */
        rtb_LogicalOperator_b = (VeICSI_b_InFld_K0_LrnActv !=
            ICSR_ac_DW.UnitDelay_DSTATE_o2);
        ICSR_ac_DW.UnitDelay_DSTATE_o2 = VeICSI_b_InFld_K0_LrnActv;

        /* End of Outputs for SubSystem: '<S380>/EdgeBi3' */

        /* Outputs for Atomic SubSystem: '<S380>/EdgeBi4' */
        rtb_NotEqual_jj = (VeICSI_b_InFld_ILE_LrnActv !=
                           ICSR_ac_DW.UnitDelay_DSTATE_fu);
        ICSR_ac_DW.UnitDelay_DSTATE_fu = VeICSI_b_InFld_ILE_LrnActv;

        /* End of Outputs for SubSystem: '<S380>/EdgeBi4' */
        if (((rtb_NotEqual_c || rtb_NotEqual_fj) || rtb_LogicalOperator_b) ||
                rtb_NotEqual_jj)
        {
            for (i = 0; i < 7; i++)
            {
                /* Switch: '<S435>/Switch1' */
                if (rtb_AND_gb)
                {
                    /* Switch: '<S433>/Switch2' incorporates:
                     *  Constant: '<S389>/Constant Value'
                     *  Switch: '<S435>/Switch1'
                     */
                    rtb_Switch2_ag[i] = 0.0F;
                }
                else
                {
                    /* Switch: '<S433>/Switch2' incorporates:
                     *  Switch: '<S435>/Switch1'
                     *  UnitDelay: '<S435>/Unit Delay'
                     */
                    rtb_Switch2_ag[i] = ICSR_ac_DW.UnitDelay_DSTATE_dy[i];
                }

                /* End of Switch: '<S435>/Switch1' */
            }

            /* Switch: '<S433>/Switch3' incorporates:
             *  Constant: '<S433>/Constant Value4'
             */
            rtb_Maximum_bb = 0.0F;
        }
        else
        {
            /* Switch: '<S433>/Switch2' incorporates:
             *  UnitDelay: '<S433>/Unit Delay'
             */
            for (i = 0; i < 7; i++)
            {
                rtb_Switch2_ag[i] = ICSR_ac_DW.UnitDelay_DSTATE_li[i];
            }

            /* Switch: '<S389>/Switch1' incorporates:
             *  Constant: '<S424>/Calib'
             *  Constant: '<S425>/Calib'
             */
            if (VeICSI_b_Nx_ClchLrn_Active_tmp)
            {
                rtb_Maximum_bb = KeICSR_t_ClutchLrnCals_BlndIn_Time;
            }
            else
            {
                rtb_Maximum_bb = KeICSR_t_ClutchLrnCals_BlndOut_Time;
            }

            /* End of Switch: '<S389>/Switch1' */

            /* MinMax: '<S433>/Maximum' incorporates:
             *  Constant: '<S395>/Calib'
             */
            rtb_Maximum_bb = fmaxf(HeICSR_t_MedTEB_dT, rtb_Maximum_bb);

            /* Outputs for Atomic SubSystem: '<S433>/Protected Division' */
            /* Switch: '<S436>/Switch1' incorporates:
             *  Constant: '<S395>/Calib'
             *  Constant: '<S436>/Constant Value'
             *  Constant: '<S436>/Constant Value1'
             *  Constant: '<S436>/Constant Value2'
             *  Constant: '<S436>/Constant Value3'
             *  Logic: '<S436>/AND'
             *  RelationalOperator: '<S436>/Greater Than or Equal '
             *  RelationalOperator: '<S436>/Greater Than or Equal 1'
             *  RelationalOperator: '<S436>/Not Equal'
             *  RelationalOperator: '<S436>/Not Equal1'
             *  Switch: '<S436>/Switch2'
             *  Switch: '<S436>/Switch3'
             */
            if ((HeICSR_t_MedTEB_dT != 0.0F) && (rtb_Maximum_bb != 0.0F))
            {
                /* Switch: '<S436>/Switch1' incorporates:
                 *  Product: '<S436>/Division'
                 */
                rtb_Maximum_bb = HeICSR_t_MedTEB_dT / rtb_Maximum_bb;
            }
            else if (HeICSR_t_MedTEB_dT > 0.0F)
            {
                /* Switch: '<S436>/Switch2' incorporates:
                 *  Constant: '<S436>/MAXFLOAT'
                 *  Switch: '<S436>/Switch1'
                 */
                rtb_Maximum_bb = 3.402823466E+38F;
            }
            else if (HeICSR_t_MedTEB_dT < 0.0F)
            {
                /* Switch: '<S436>/Switch3' incorporates:
                 *  Constant: '<S436>/MINFLOAT'
                 *  Switch: '<S436>/Switch1'
                 *  Switch: '<S436>/Switch2'
                 */
                rtb_Maximum_bb = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S436>/Switch1' incorporates:
                 *  Constant: '<S436>/Constant Value4'
                 *  Switch: '<S436>/Switch2'
                 *  Switch: '<S436>/Switch3'
                 */
                rtb_Maximum_bb = 0.0F;
            }

            /* End of Switch: '<S436>/Switch1' */
            /* End of Outputs for SubSystem: '<S433>/Protected Division' */

            /* Switch: '<S433>/Switch1' incorporates:
             *  Constant: '<S433>/Constant Value3'
             *  Logic: '<S433>/Logical'
             *  Logic: '<S433>/Logical2'
             *  UnitDelay: '<S433>/Unit Delay1'
             *  UnitDelay: '<S433>/Unit Delay3'
             */
            if ((ICSR_ac_DW.UnitDelay1_DSTATE_e) && (!rtb_AND_aj))
            {
                rtb_Subtraction1_b = ICSR_ac_DW.UnitDelay3_DSTATE_c;
            }
            else
            {
                rtb_Subtraction1_b = 1.0F;
            }

            /* End of Switch: '<S433>/Switch1' */

            /* Switch: '<S433>/Switch3' incorporates:
             *  Constant: '<S433>/Constant Value2'
             *  MinMax: '<S433>/MinMax'
             *  Sum: '<S433>/Summation1'
             */
            rtb_Maximum_bb = fminf(rtb_Subtraction1_b + rtb_Maximum_bb, 1.0F);
        }

        if ((((sint32)rtb_TmpSignalConversionAtVeHS_p) == 0) || (((sint32)
                rtb_TmpSignalConversionAtVeHS_p) == 8))
        {
            /* Outputs for IfAction SubSystem: '<S388>/Neutral' incorporates:
             *  ActionPort: '<S449>/Action Port'
             */
            /* Merge: '<S388>/Merge2' incorporates:
             *  Constant: '<S481>/Calib'
             *  Lookup_n-D: '<S483>/Vector'
             *  Product: '<S449>/Multiplication2'
             *  SignalConversion generated from: '<S1>/VeHCCR_M_Clch2_TorqEst'
             *  SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp'
             */
            ICSR_ac_B.Merge2 = KeICSR_K_Nx_PGain * look2_iflf_binlcapw
                (rtb_TmpSignalConversionAtVeHC_b,
                 rtb_TmpSignalConversionAtVeTFTR, ((const float32 *)
                  &(KxICSR_K_NTc2NonLinearPterm[0])), ((const float32 *)
                  &(KyICSR_K_NTc2NonLinearPterm[0])), ((const float32 *)
                  &(KtICSR_K_NTc2NonLinearPterm[0])), ICSR_ac_ConstP.pooled10,
                 9U);

            /* Merge: '<S388>/Merge4' incorporates:
             *  Constant: '<S478>/Calib'
             *  Lookup_n-D: '<S482>/Vector'
             *  Product: '<S449>/Multiplication3'
             *  SignalConversion generated from: '<S1>/VeHCCR_M_Clch2_TorqEst'
             *  SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp'
             */
            ICSR_ac_B.Merge4 = KeICSR_K_Nx_DGain * look2_iflf_binlcapw
                (rtb_TmpSignalConversionAtVeHC_b,
                 rtb_TmpSignalConversionAtVeTFTR, ((const float32 *)
                  &(KxICSR_K_NTc2NonLinearDterm[0])), ((const float32 *)
                  &(KyICSR_K_NTc2NonLinearDterm[0])), ((const float32 *)
                  &(KtICSR_K_NTc2NonLinearDterm[0])), ICSR_ac_ConstP.pooled10,
                 9U);

            /* Merge: '<S388>/Merge1' incorporates:
             *  Constant: '<S477>/Calib'
             *  Constant: '<S479>/Calib'
             *  Product: '<S449>/Multiplication1'
             */
            ICSR_ac_B.Merge1 = HeICSR_t_MedTEB_dT * KeICSR_K_Nx_IGain;

            /* Merge: '<S388>/Merge3' incorporates:
             *  Constant: '<S480>/Calib'
             */
            ICSR_ac_B.Merge3 = KeICSR_K_Nx_I_AntiWindup_Gain;

            /* End of Outputs for SubSystem: '<S388>/Neutral' */
        }
        else if (((sint32)rtb_TmpSignalConversionAtVeHS_p) == 1)
        {
            /* Outputs for IfAction SubSystem: '<S388>/M1' incorporates:
             *  ActionPort: '<S446>/Action Port'
             */
            /* Merge: '<S388>/Merge2' incorporates:
             *  Constant: '<S464>/Calib'
             *  Lookup_n-D: '<S466>/Vector'
             *  Product: '<S446>/Multiplication4'
             *  SignalConversion generated from: '<S1>/VeHCCR_M_Clch2_TorqEst'
             *  SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp'
             */
            ICSR_ac_B.Merge2 = KeICSR_K_Nx_PGain * look2_iflf_binlcapw
                (rtb_TmpSignalConversionAtVeHC_b,
                 rtb_TmpSignalConversionAtVeTFTR, ((const float32 *)
                  &(KxICSR_K_M1Tc2NonLinearPterm[0])), ((const float32 *)
                  &(KyICSR_K_M1Tc2NonLinearPterm[0])), ((const float32 *)
                  &(KtICSR_K_M1Tc2NonLinearPterm[0])), ICSR_ac_ConstP.pooled10,
                 9U);

            /* Merge: '<S388>/Merge4' incorporates:
             *  Constant: '<S461>/Calib'
             *  Lookup_n-D: '<S465>/Vector'
             *  Product: '<S446>/Multiplication5'
             *  SignalConversion generated from: '<S1>/VeHCCR_M_Clch2_TorqEst'
             *  SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp'
             */
            ICSR_ac_B.Merge4 = KeICSR_K_Nx_DGain * look2_iflf_binlcapw
                (rtb_TmpSignalConversionAtVeHC_b,
                 rtb_TmpSignalConversionAtVeTFTR, ((const float32 *)
                  &(KxICSR_K_M1Tc2NonLinearDterm[0])), ((const float32 *)
                  &(KyICSR_K_M1Tc2NonLinearDterm[0])), ((const float32 *)
                  &(KtICSR_K_M1Tc2NonLinearDterm[0])), ICSR_ac_ConstP.pooled10,
                 9U);

            /* Merge: '<S388>/Merge1' incorporates:
             *  Constant: '<S460>/Calib'
             *  Constant: '<S462>/Calib'
             *  Product: '<S446>/Multiplication1'
             */
            ICSR_ac_B.Merge1 = HeICSR_t_MedTEB_dT * KeICSR_K_Nx_IGain;

            /* Merge: '<S388>/Merge3' incorporates:
             *  Constant: '<S463>/Calib'
             */
            ICSR_ac_B.Merge3 = KeICSR_K_Nx_I_AntiWindup_Gain;

            /* End of Outputs for SubSystem: '<S388>/M1' */
        }
        else if (((sint32)rtb_TmpSignalConversionAtVeHS_p) == 2)
        {
            /* Outputs for IfAction SubSystem: '<S388>/M2' incorporates:
             *  ActionPort: '<S447>/Action Port'
             */
            ICSR_ac_M2(&ICSR_ac_B.Merge2, &ICSR_ac_B.Merge1, &ICSR_ac_B.Merge4,
                       &ICSR_ac_B.Merge3);

            /* End of Outputs for SubSystem: '<S388>/M2' */
        }
        else if (((sint32)rtb_TmpSignalConversionAtVeHS_p) == 3)
        {
            /* Outputs for IfAction SubSystem: '<S388>/M3' incorporates:
             *  ActionPort: '<S448>/Action Port'
             */
            ICSR_ac_M2(&ICSR_ac_B.Merge2, &ICSR_ac_B.Merge1, &ICSR_ac_B.Merge4,
                       &ICSR_ac_B.Merge3);

            /* End of Outputs for SubSystem: '<S388>/M3' */
        }
        else if (((sint32)rtb_TmpSignalConversionAtVeHS_p) == 5)
        {
            /* Outputs for IfAction SubSystem: '<S388>/G2' incorporates:
             *  ActionPort: '<S444>/Action Port'
             */
            ICSR_ac_M2(&ICSR_ac_B.Merge2, &ICSR_ac_B.Merge1, &ICSR_ac_B.Merge4,
                       &ICSR_ac_B.Merge3);

            /* End of Outputs for SubSystem: '<S388>/G2' */
        }
        else
        {
            if (((sint32)rtb_TmpSignalConversionAtVeHS_p) == 7)
            {
                /* Outputs for IfAction SubSystem: '<S388>/G4' incorporates:
                 *  ActionPort: '<S445>/Action Port'
                 */
                ICSR_ac_M2(&ICSR_ac_B.Merge2, &ICSR_ac_B.Merge1,
                           &ICSR_ac_B.Merge4, &ICSR_ac_B.Merge3);

                /* End of Outputs for SubSystem: '<S388>/G4' */
            }
        }

        if (VeICSI_b_Nx_ClchLrn_Active_tmp)
        {
            /* Switch: '<S380>/Switch1' incorporates:
             *  Switch: '<S380>/Switch'
             *  Switch: '<S380>/Switch2'
             *  Switch: '<S380>/Switch3'
             */
            if (VeICSI_b_EOL_LrnActv)
            {
                /* Sum: '<S433>/Summation' incorporates:
                 *  Constant: '<S396>/Calib'
                 *  Constant: '<S400>/Calib'
                 *  Constant: '<S404>/Calib'
                 *  Constant: '<S408>/Calib'
                 *  Constant: '<S412>/Calib'
                 *  Constant: '<S416>/Calib'
                 *  Constant: '<S420>/Calib'
                 *  Switch: '<S380>/Switch1'
                 */
                rtb_Summation_jv[0] = KeICSR_K_NxCL_PGain_EOL;
                rtb_Summation_jv[1] = KeICSR_K_NxCL_IGain_EOL;
                rtb_Summation_jv[2] = KeICSR_K_NxCL_DGain_EOL;
                rtb_Summation_jv[3] = KeICSR_M_NxCL_PLimit_EOL;
                rtb_Summation_jv[4] = KeICSR_M_NxCL_ILimit_EOL;
                rtb_Summation_jv[5] = KeICSR_M_NxCL_DLimit_EOL;
                rtb_Summation_jv[6] = KeICSR_K_NxCL_I_AntiWind_EOL;
            }
            else if (VeICSI_b_STADA_LrnActv)
            {
                /* Sum: '<S433>/Summation' incorporates:
                 *  Constant: '<S399>/Calib'
                 *  Constant: '<S403>/Calib'
                 *  Constant: '<S407>/Calib'
                 *  Constant: '<S411>/Calib'
                 *  Constant: '<S415>/Calib'
                 *  Constant: '<S419>/Calib'
                 *  Constant: '<S423>/Calib'
                 *  Switch: '<S380>/Switch'
                 */
                rtb_Summation_jv[0] = KeICSR_K_NxCL_PGain_STADA;
                rtb_Summation_jv[1] = KeICSR_K_NxCL_IGain_STADA;
                rtb_Summation_jv[2] = KeICSR_K_NxCL_DGain_STADA;
                rtb_Summation_jv[3] = KeICSR_M_NxCL_PLimit_STADA;
                rtb_Summation_jv[4] = KeICSR_M_NxCL_ILimit_STADA;
                rtb_Summation_jv[5] = KeICSR_M_NxCL_DLimit_STADA;
                rtb_Summation_jv[6] = KeICSR_K_NxCL_I_AntiWind_STADA;
            }
            else if (VeICSI_b_InFld_K0_LrnActv)
            {
                /* Sum: '<S433>/Summation' incorporates:
                 *  Constant: '<S398>/Calib'
                 *  Constant: '<S402>/Calib'
                 *  Constant: '<S406>/Calib'
                 *  Constant: '<S410>/Calib'
                 *  Constant: '<S414>/Calib'
                 *  Constant: '<S418>/Calib'
                 *  Constant: '<S422>/Calib'
                 *  Switch: '<S380>/Switch'
                 *  Switch: '<S380>/Switch2'
                 */
                rtb_Summation_jv[0] = KeICSR_K_NxCL_PGain_InFld_K0;
                rtb_Summation_jv[1] = KeICSR_K_NxCL_IGain_InFld_K0;
                rtb_Summation_jv[2] = KeICSR_K_NxCL_DGain_InFld_K0;
                rtb_Summation_jv[3] = KeICSR_M_NxCL_PLimit_InFld_K0;
                rtb_Summation_jv[4] = KeICSR_M_NxCL_ILimit_InFld_K0;
                rtb_Summation_jv[5] = KeICSR_M_NxCL_DLimit_InFld_K0;
                rtb_Summation_jv[6] = KeICSR_K_NxCL_I_AntiWind_InFld_K0;
            }
            else if (VeICSI_b_InFld_ILE_LrnActv)
            {
                /* Switch: '<S380>/Switch3' incorporates:
                 *  Constant: '<S397>/Calib'
                 *  Constant: '<S401>/Calib'
                 *  Constant: '<S405>/Calib'
                 *  Constant: '<S409>/Calib'
                 *  Constant: '<S413>/Calib'
                 *  Constant: '<S417>/Calib'
                 *  Constant: '<S421>/Calib'
                 *  Sum: '<S433>/Summation'
                 *  Switch: '<S380>/Switch'
                 *  Switch: '<S380>/Switch2'
                 */
                rtb_Summation_jv[0] = KeICSR_K_NxCL_PGain_InFld_ILE;
                rtb_Summation_jv[1] = KeICSR_K_NxCL_IGain_InFld_ILE;
                rtb_Summation_jv[2] = KeICSR_K_NxCL_DGain_InFld_ILE;
                rtb_Summation_jv[3] = KeICSR_M_NxCL_PLimit_InFld_ILE;
                rtb_Summation_jv[4] = KeICSR_M_NxCL_ILimit_InFld_ILE;
                rtb_Summation_jv[5] = KeICSR_M_NxCL_DLimit_InFld_ILE;
                rtb_Summation_jv[6] = KeICSR_K_NxCL_I_AntiWind_InFld_ILE;
            }
            else
            {
                /* Sum: '<S433>/Summation' incorporates:
                 *  Constant: '<S381>/Calib'
                 *  Constant: '<S382>/Calib'
                 *  Constant: '<S383>/Calib'
                 *  Switch: '<S380>/Switch'
                 *  Switch: '<S380>/Switch2'
                 *  Switch: '<S380>/Switch3'
                 */
                rtb_Summation_jv[0] = ICSR_ac_B.Merge2;
                rtb_Summation_jv[1] = ICSR_ac_B.Merge1;
                rtb_Summation_jv[2] = ICSR_ac_B.Merge4;
                rtb_Summation_jv[3] = KeICSR_M_Nx_PLimit;
                rtb_Summation_jv[4] = KeICSR_M_Nx_ILimit;
                rtb_Summation_jv[5] = KeICSR_M_Nx_DLimit;
                rtb_Summation_jv[6] = ICSR_ac_B.Merge3;
            }

            /* End of Switch: '<S380>/Switch1' */
        }
        else
        {
            /* Sum: '<S433>/Summation' incorporates:
             *  Constant: '<S381>/Calib'
             *  Constant: '<S382>/Calib'
             *  Constant: '<S383>/Calib'
             */
            rtb_Summation_jv[0] = ICSR_ac_B.Merge2;
            rtb_Summation_jv[1] = ICSR_ac_B.Merge1;
            rtb_Summation_jv[2] = ICSR_ac_B.Merge4;
            rtb_Summation_jv[3] = KeICSR_M_Nx_PLimit;
            rtb_Summation_jv[4] = KeICSR_M_Nx_ILimit;
            rtb_Summation_jv[5] = KeICSR_M_Nx_DLimit;
            rtb_Summation_jv[6] = ICSR_ac_B.Merge3;
        }

        ICSR_ac_B.LeICSR_r_NxCL2Ta_Pre = KeICSR_r_Nx_CL2Ta;
        ICSR_ac_B.LeICSR_r_NxCL2Tb_Pre = KeICSR_r_Nx_CL2Tb;
        ICSR_ac_B.LeICSR_dscl_NxCL_ModeSwtchRmp_P = KeICSR_dscl_Nx_DisableRmp;
        ICSR_ac_B.LeICSR_r_NxCL2Tc_Pre = KeICSR_r_Nx_CL2Tc;
        ICSR_ac_DW.UnitDelay1_DSTATE_e = true;
        ICSR_ac_DW.UnitDelay3_DSTATE_c = rtb_Maximum_bb;
        for (i = 0; i < 7; i++)
        {
            rtb_Subtraction1_b = rtb_Switch2_ag[i];

            /* Sum: '<S433>/Summation' incorporates:
             *  Constant: '<S433>/Constant Value'
             *  Product: '<S433>/Multiplication'
             *  Product: '<S433>/Multiplication3'
             *  Sum: '<S433>/Subtraction'
             */
            rtb_Subtraction_ab = ((1.0F - rtb_Maximum_bb) * rtb_Subtraction1_b)
                + (rtb_Maximum_bb * rtb_Summation_jv[i]);

            /* Switch: '<S435>/Switch3' */
            if (rtb_AND_gb)
            {
                /* Update for UnitDelay: '<S435>/Unit Delay' incorporates:
                 *  Constant: '<S389>/Constant Value'
                 */
                ICSR_ac_DW.UnitDelay_DSTATE_dy[i] = 0.0F;
            }
            else
            {
                /* Update for UnitDelay: '<S435>/Unit Delay' */
                ICSR_ac_DW.UnitDelay_DSTATE_dy[i] = rtb_Subtraction_ab;
            }

            /* End of Switch: '<S435>/Switch3' */

            /* Update for UnitDelay: '<S433>/Unit Delay' */
            ICSR_ac_DW.UnitDelay_DSTATE_li[i] = rtb_Subtraction1_b;
            rtb_Summation_jv[i] = rtb_Subtraction_ab;
        }

        ICSR_ac_B.LeICSR_K_NxCL_PGain_Pre = rtb_Summation_jv[0];
        ICSR_ac_B.LeICSR_K_NxCL_IGain_Pre = rtb_Summation_jv[1];
        ICSR_ac_B.LeICSR_K_NxCL_DGain_Pre = rtb_Summation_jv[2];
        ICSR_ac_B.LeICSR_M_NxCL_PLimit_Pre = rtb_Summation_jv[3];
        ICSR_ac_B.LeICSR_M_NxCL_ILimit_Pre = rtb_Summation_jv[4];
        ICSR_ac_B.LeICSR_M_NxCL_DLimit_Pre = rtb_Summation_jv[5];
        ICSR_ac_B.LeICSR_K_NxCL_I_Anti_Windup_Gai = rtb_Summation_jv[6];

        /* End of Outputs for SubSystem: '<S185>/ICSC_Nx_Cals' */
    }

    /* End of Switch: '<S185>/Switch' */

    /* VariantMerge generated from: '<S8>/Variant Source10' */
    ICSR_ac_B.VariantMerge_For_Variant_Source = ICSR_ac_B.LeICSR_r_NxCL2Tc_Pre;

    /* VariantMerge generated from: '<S8>/Variant Source5' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_o = ICSR_ac_B.LeICSR_r_NxCL2Tb_Pre;

    /* End of Outputs for SubSystem: '<S8>/ICSC_Nx_Cals' */
#else

    /* VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Constant: '<S8>/Constant Value9'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

    /* VariantMerge generated from: '<S8>/Variant Source10' */
    ICSR_ac_B.VariantMerge_For_Variant_Source =
        ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

#endif

    /* End of Update for UnitDelay: '<S875>/Unit Delay3' */

    /* SignalConversion generated from: '<S8>/Variant Source4' incorporates:
     *  Constant: '<S8>/Constant Value3'
     *  Constant: '<S8>/Constant Value4'
     */
#if Rte_SysCon_Variant_ICSR_4

    /* VariantMerge generated from: '<S8>/Variant Source4' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_k = ICSR_ac_B.LeICSR_r_NxCL2Ta_Pre;

#else

    /* VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Constant: '<S8>/Constant Value4'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

    /* VariantMerge generated from: '<S8>/Variant Source5' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_o =
        ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

    /* VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Constant: '<S8>/Constant Value3'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

    /* VariantMerge generated from: '<S8>/Variant Source4' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_k =
        ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

#endif

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/ICSR_MedTEB' */

    /* SignalConversion: '<S8>/Signal Conversion' incorporates:
     *  Inport: '<Root>/VaMTQR_n_MtrBCpbltyspd'
     */
    (void)Rte_Read_VaMTQR_n_MtrBCpbltyspd_Value((&(VaICSC_n_MtrBCpbltySpd[0])));

    /* SignalConversion: '<S8>/Signal Conversion1' incorporates:
     *  Inport: '<Root>/VaMTQR_M_MtrBMinCpblty_ST'
     */
    (void)Rte_Read_VaMTQR_M_MtrBMinCpblty_ST_Value((&(VaICSC_M_MtrBMinCpblty[0])));

    /* SignalConversion: '<S8>/Signal Conversion2' incorporates:
     *  Inport: '<Root>/VaMTQR_M_MtrBMaxCpblty_ST'
     */
    (void)Rte_Read_VaMTQR_M_MtrBMaxCpblty_ST_Value((&(VaICSC_M_MtrBMaxCpblty[0])));

    /* SignalConversion: '<S8>/Signal Conversion3' incorporates:
     *  Inport: '<Root>/VaMTQR_n_MtrACpbltyspd'
     */
    (void)Rte_Read_VaMTQR_n_MtrACpbltyspd_Value((&(VaICSC_n_MtrACpbltySpd[0])));

    /* SignalConversion: '<S8>/Signal Conversion4' incorporates:
     *  Inport: '<Root>/VaMTQR_M_MtrAMinCpblty_ST'
     */
    (void)Rte_Read_VaMTQR_M_MtrAMinCpblty_ST_Value((&(VaICSC_M_MtrAMinCpblty[0])));

    /* SignalConversion: '<S8>/Signal Conversion5' incorporates:
     *  Inport: '<Root>/VaMTQR_M_MtrAMaxCpblty_ST'
     */
    (void)Rte_Read_VaMTQR_M_MtrAMaxCpblty_ST_Value((&(VaICSC_M_MtrAMaxCpblty[0])));

    /* Outputs for Function Call SubSystem: '<Root>/ICSR_MedTEB' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ICSC_CalSelect'
     */
    /* If: '<S186>/If' incorporates:
     *  Constant: '<S484>/Calib'
     */
    if (KeICSR_b_PowerSplitTrans)
    {
        /* Outputs for IfAction SubSystem: '<S186>/PwrSpltTrns' incorporates:
         *  ActionPort: '<S486>/Action Port'
         */
        /* Merge: '<S186>/Merge1' incorporates:
         *  Constant: '<S563>/Calib'
         *  SignalConversion generated from: '<S486>/MtrA_IdleMaxTorq'
         */
        VeICSC_M_MtrA_IdleMaxTorq = KeICSR_M_PwrSpltMtrAMaxIdleTrq;

        /* Merge: '<S186>/Merge3' incorporates:
         *  Constant: '<S565>/Calib'
         *  SignalConversion generated from: '<S486>/MtrB_IdleMaxTorq'
         */
        VeICSC_M_MtrB_IdleMaxTorq = KeICSR_M_PwrSpltMtrBMaxIdleTrq;

        /* End of Outputs for SubSystem: '<S186>/PwrSpltTrns' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S186>/NoPwrSpltTrns' incorporates:
         *  ActionPort: '<S485>/Action Port'
         */
        /* Product: '<S485>/Product' incorporates:
         *  Constant: '<S488>/Calib'
         */
        rtb_Subtraction1_b = KeICSR_r_MtrAIdleSpdSclngFctr *
            rtb_TmpSignalConversionAtVeOSMR;

        /* If: '<S490>/If' incorporates:
         *  Constant: '<S493>/Constant'
         *  RelationalOperator: '<S490>/Comparison5'
         */
        if (((uint32)rtb_TmpSignalConversionAtVeTRGR) !=
                CeTRGR_e_TransRangeReverse)
        {
            /* Outputs for IfAction SubSystem: '<S490>/Not_Reverse' incorporates:
             *  ActionPort: '<S494>/Action Port'
             */
            /* Chart: '<S500>/Get_Data_Indexes ' incorporates:
             *  Abs: '<S490>/A_spd'
             */
            ICSR_ac_Get_Data_Indexes((&(VaICSC_n_MtrACpbltySpd[0])), fabsf
                (rtb_Subtraction1_b), &ICSR_ac_B.sf_Get_Data_Indexes);

            /* Selector: '<S498>/Selector4' */
            rtb_Maximum_bb = VaICSC_M_MtrAMinCpblty[(sint32)
                ICSR_ac_B.sf_Get_Data_Indexes.LowerIndex];

            /* Merge: '<S490>/Merge4' incorporates:
             *  Product: '<S498>/Multiplication'
             *  Selector: '<S498>/Selector3'
             *  Selector: '<S498>/Selector4'
             *  Sum: '<S498>/Summation'
             *  Sum: '<S498>/Summation1'
             */
            rtb_Maximum_bb += (VaICSC_M_MtrAMinCpblty[(sint32)
                               ICSR_ac_B.sf_Get_Data_Indexes.UpperIndex] -
                               rtb_Maximum_bb) *
                ICSR_ac_B.sf_Get_Data_Indexes.fract;

            /* Selector: '<S499>/Selector4' incorporates:
             *  Selector: '<S498>/Selector4'
             */
            rtb_Subtraction_ab = VaICSC_M_MtrAMaxCpblty[(sint32)
                ICSR_ac_B.sf_Get_Data_Indexes.LowerIndex];

            /* Merge: '<S490>/Merge5' incorporates:
             *  Product: '<S499>/Multiplication'
             *  Selector: '<S498>/Selector3'
             *  Selector: '<S499>/Selector3'
             *  Selector: '<S499>/Selector4'
             *  Sum: '<S499>/Summation'
             *  Sum: '<S499>/Summation1'
             */
            rtb_Subtraction_ab += (VaICSC_M_MtrAMaxCpblty[(sint32)
                                   ICSR_ac_B.sf_Get_Data_Indexes.UpperIndex] -
                                   rtb_Subtraction_ab) *
                ICSR_ac_B.sf_Get_Data_Indexes.fract;

            /* End of Outputs for SubSystem: '<S490>/Not_Reverse' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S490>/Reverse' incorporates:
             *  ActionPort: '<S496>/Action Port'
             */
            /* Chart: '<S506>/Get_Data_Indexes ' incorporates:
             *  Abs: '<S490>/A_spd'
             */
            ICSR_ac_Get_Data_Indexes((&(VaICSC_n_MtrACpbltySpd[0])), fabsf
                (rtb_Subtraction1_b), &ICSR_ac_B.sf_Get_Data_Indexes_b);

            /* Selector: '<S504>/Selector4' */
            rtb_Maximum_bb = VaICSC_M_MtrAMinCpblty[(sint32)
                ICSR_ac_B.sf_Get_Data_Indexes_b.LowerIndex];

            /* Merge: '<S490>/Merge4' incorporates:
             *  Product: '<S504>/Multiplication'
             *  Selector: '<S504>/Selector3'
             *  Selector: '<S504>/Selector4'
             *  Sum: '<S504>/Summation'
             *  Sum: '<S504>/Summation1'
             */
            rtb_Maximum_bb += (VaICSC_M_MtrAMinCpblty[(sint32)
                               ICSR_ac_B.sf_Get_Data_Indexes_b.UpperIndex] -
                               rtb_Maximum_bb) *
                ICSR_ac_B.sf_Get_Data_Indexes_b.fract;

            /* Selector: '<S505>/Selector4' incorporates:
             *  Selector: '<S504>/Selector4'
             */
            rtb_Subtraction_ab = VaICSC_M_MtrAMaxCpblty[(sint32)
                ICSR_ac_B.sf_Get_Data_Indexes_b.LowerIndex];

            /* Merge: '<S490>/Merge5' incorporates:
             *  Product: '<S505>/Multiplication'
             *  Selector: '<S504>/Selector3'
             *  Selector: '<S505>/Selector3'
             *  Selector: '<S505>/Selector4'
             *  Sum: '<S505>/Summation'
             *  Sum: '<S505>/Summation1'
             */
            rtb_Subtraction_ab += (VaICSC_M_MtrAMaxCpblty[(sint32)
                                   ICSR_ac_B.sf_Get_Data_Indexes_b.UpperIndex] -
                                   rtb_Subtraction_ab) *
                ICSR_ac_B.sf_Get_Data_Indexes_b.fract;

            /* End of Outputs for SubSystem: '<S490>/Reverse' */
        }

        /* End of If: '<S490>/If' */

        /* If: '<S490>/If1' */
        if (rtb_Subtraction1_b > 0.0F)
        {
            /* Outputs for IfAction SubSystem: '<S490>/Pass' incorporates:
             *  ActionPort: '<S495>/Action Port'
             */
            ICSR_ac_Pass(rtb_Maximum_bb, rtb_Subtraction_ab, &rtb_Subtraction1_b,
                         (&(VeICSC_M_MtrA_IdleMaxTorq)));

            /* End of Outputs for SubSystem: '<S490>/Pass' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S490>/Switch' incorporates:
             *  ActionPort: '<S497>/Action Port'
             */
            ICSR_ac_Switch(rtb_Maximum_bb, rtb_Subtraction_ab,
                           &rtb_Subtraction1_b, (&(VeICSC_M_MtrA_IdleMaxTorq)));

            /* End of Outputs for SubSystem: '<S490>/Switch' */
        }

        /* End of If: '<S490>/If1' */

        /* If: '<S489>/If' incorporates:
         *  DataTypeConversion: '<S489>/Data Type Conversion'
         *  SignalConversion generated from: '<S1>/VeHSER_e_RngEqnSel'
         */
        if ((((sint32)rtb_TmpSignalConversionAtVeHS_p) == 0) || (((sint32)
                rtb_TmpSignalConversionAtVeHS_p) == 8))
        {
            /* Outputs for IfAction SubSystem: '<S489>/Neutral' incorporates:
             *  ActionPort: '<S554>/Action Port'
             */
            /* Merge: '<S489>/Merge' incorporates:
             *  Constant: '<S562>/Calib'
             *  Product: '<S554>/Product'
             */
            ICSR_ac_B.Merge = rtb_TmpSignalConversionAtVeOSMR *
                KeICSR_r_N_MtrBIdleSpdSclngFctr;

            /* End of Outputs for SubSystem: '<S489>/Neutral' */
        }
        else if (((sint32)rtb_TmpSignalConversionAtVeHS_p) == 1)
        {
            /* Outputs for IfAction SubSystem: '<S489>/M1' incorporates:
             *  ActionPort: '<S551>/Action Port'
             */
            /* Merge: '<S489>/Merge' incorporates:
             *  Constant: '<S559>/Calib'
             *  Product: '<S551>/Product'
             */
            ICSR_ac_B.Merge = rtb_TmpSignalConversionAtVeOSMR *
                KeICSR_r_M1_MtrBIdleSpdSclngFctr;

            /* End of Outputs for SubSystem: '<S489>/M1' */
        }
        else if (((sint32)rtb_TmpSignalConversionAtVeHS_p) == 2)
        {
            /* Outputs for IfAction SubSystem: '<S489>/M2' incorporates:
             *  ActionPort: '<S552>/Action Port'
             */
            /* Merge: '<S489>/Merge' incorporates:
             *  Constant: '<S560>/Calib'
             *  Product: '<S552>/Product'
             */
            ICSR_ac_B.Merge = rtb_TmpSignalConversionAtVeOSMR *
                KeICSR_r_M2_MtrBIdleSpdSclngFctr;

            /* End of Outputs for SubSystem: '<S489>/M2' */
        }
        else if (((sint32)rtb_TmpSignalConversionAtVeHS_p) == 3)
        {
            /* Outputs for IfAction SubSystem: '<S489>/M3' incorporates:
             *  ActionPort: '<S553>/Action Port'
             */
            /* Merge: '<S489>/Merge' incorporates:
             *  Constant: '<S561>/Calib'
             *  Product: '<S553>/Product'
             */
            ICSR_ac_B.Merge = rtb_TmpSignalConversionAtVeOSMR *
                KeICSR_r_M3_MtrBIdleSpdSclngFctr;

            /* End of Outputs for SubSystem: '<S489>/M3' */
        }
        else if (((sint32)rtb_TmpSignalConversionAtVeHS_p) == 4)
        {
            /* Outputs for IfAction SubSystem: '<S489>/G1' incorporates:
             *  ActionPort: '<S547>/Action Port'
             */
            /* Merge: '<S489>/Merge' incorporates:
             *  Constant: '<S555>/Calib'
             *  Product: '<S547>/Product'
             */
            ICSR_ac_B.Merge = rtb_TmpSignalConversionAtVeOSMR *
                KeICSR_r_G1_MtrBIdleSpdSclngFctr;

            /* End of Outputs for SubSystem: '<S489>/G1' */
        }
        else if (((sint32)rtb_TmpSignalConversionAtVeHS_p) == 5)
        {
            /* Outputs for IfAction SubSystem: '<S489>/G2' incorporates:
             *  ActionPort: '<S548>/Action Port'
             */
            /* Merge: '<S489>/Merge' incorporates:
             *  Constant: '<S556>/Calib'
             *  Product: '<S548>/Product'
             */
            ICSR_ac_B.Merge = rtb_TmpSignalConversionAtVeOSMR *
                KeICSR_r_G2_MtrBIdleSpdSclngFctr;

            /* End of Outputs for SubSystem: '<S489>/G2' */
        }
        else if (((sint32)rtb_TmpSignalConversionAtVeHS_p) == 6)
        {
            /* Outputs for IfAction SubSystem: '<S489>/G3' incorporates:
             *  ActionPort: '<S549>/Action Port'
             */
            /* Merge: '<S489>/Merge' incorporates:
             *  Constant: '<S557>/Calib'
             *  Product: '<S549>/Product'
             */
            ICSR_ac_B.Merge = rtb_TmpSignalConversionAtVeOSMR *
                KeICSR_r_G3_MtrBIdleSpdSclngFctr;

            /* End of Outputs for SubSystem: '<S489>/G3' */
        }
        else
        {
            if (((sint32)rtb_TmpSignalConversionAtVeHS_p) == 7)
            {
                /* Outputs for IfAction SubSystem: '<S489>/G4' incorporates:
                 *  ActionPort: '<S550>/Action Port'
                 */
                /* Merge: '<S489>/Merge' incorporates:
                 *  Constant: '<S558>/Calib'
                 *  Product: '<S550>/Product'
                 */
                ICSR_ac_B.Merge = rtb_TmpSignalConversionAtVeOSMR *
                    KeICSR_r_G4_MtrBIdleSpdSclngFctr;

                /* End of Outputs for SubSystem: '<S489>/G4' */
            }
        }

        /* End of If: '<S489>/If' */

        /* If: '<S491>/If' incorporates:
         *  Constant: '<S508>/Constant'
         *  RelationalOperator: '<S491>/Comparison5'
         */
        if (((uint32)rtb_TmpSignalConversionAtVeTRGR) !=
                CeTRGR_e_TransRangeReverse)
        {
            /* Outputs for IfAction SubSystem: '<S491>/Not_Reverse' incorporates:
             *  ActionPort: '<S509>/Action Port'
             */
            /* Chart: '<S515>/Get_Data_Indexes ' incorporates:
             *  Abs: '<S491>/B_Spd'
             */
            ICSR_ac_Get_Data_Indexes((&(VaICSC_n_MtrBCpbltySpd[0])), fabsf
                (ICSR_ac_B.Merge), &ICSR_ac_B.sf_Get_Data_Indexes_a);

            /* Selector: '<S513>/Selector4' */
            rtb_TmpSignalConversionAtVeOSMR = VaICSC_M_MtrBMinCpblty[(sint32)
                ICSR_ac_B.sf_Get_Data_Indexes_a.LowerIndex];

            /* Merge: '<S491>/Merge6' incorporates:
             *  Product: '<S513>/Multiplication'
             *  Selector: '<S513>/Selector3'
             *  Selector: '<S513>/Selector4'
             *  Sum: '<S513>/Summation'
             *  Sum: '<S513>/Summation1'
             */
            rtb_TmpSignalConversionAtVeOSMR += (VaICSC_M_MtrBMinCpblty[(sint32)
                ICSR_ac_B.sf_Get_Data_Indexes_a.UpperIndex] -
                rtb_TmpSignalConversionAtVeOSMR) *
                ICSR_ac_B.sf_Get_Data_Indexes_a.fract;

            /* Selector: '<S514>/Selector4' incorporates:
             *  Selector: '<S513>/Selector4'
             */
            rtb_Maximum_bb = VaICSC_M_MtrBMaxCpblty[(sint32)
                ICSR_ac_B.sf_Get_Data_Indexes_a.LowerIndex];

            /* Merge: '<S491>/Merge7' incorporates:
             *  Product: '<S514>/Multiplication'
             *  Selector: '<S513>/Selector3'
             *  Selector: '<S514>/Selector3'
             *  Selector: '<S514>/Selector4'
             *  Sum: '<S514>/Summation'
             *  Sum: '<S514>/Summation1'
             */
            rtb_Maximum_bb += (VaICSC_M_MtrBMaxCpblty[(sint32)
                               ICSR_ac_B.sf_Get_Data_Indexes_a.UpperIndex] -
                               rtb_Maximum_bb) *
                ICSR_ac_B.sf_Get_Data_Indexes_a.fract;

            /* End of Outputs for SubSystem: '<S491>/Not_Reverse' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S491>/Reverse' incorporates:
             *  ActionPort: '<S511>/Action Port'
             */
            /* Chart: '<S521>/Get_Data_Indexes ' incorporates:
             *  Abs: '<S491>/B_Spd'
             */
            ICSR_ac_Get_Data_Indexes((&(VaICSC_n_MtrBCpbltySpd[0])), fabsf
                (ICSR_ac_B.Merge), &ICSR_ac_B.sf_Get_Data_Indexes_bt);

            /* Selector: '<S519>/Selector4' */
            rtb_TmpSignalConversionAtVeOSMR = VaICSC_M_MtrBMinCpblty[(sint32)
                ICSR_ac_B.sf_Get_Data_Indexes_bt.LowerIndex];

            /* Merge: '<S491>/Merge6' incorporates:
             *  Product: '<S519>/Multiplication'
             *  Selector: '<S519>/Selector3'
             *  Selector: '<S519>/Selector4'
             *  Sum: '<S519>/Summation'
             *  Sum: '<S519>/Summation1'
             */
            rtb_TmpSignalConversionAtVeOSMR += (VaICSC_M_MtrBMinCpblty[(sint32)
                ICSR_ac_B.sf_Get_Data_Indexes_bt.UpperIndex] -
                rtb_TmpSignalConversionAtVeOSMR) *
                ICSR_ac_B.sf_Get_Data_Indexes_bt.fract;

            /* Selector: '<S520>/Selector4' incorporates:
             *  Selector: '<S519>/Selector4'
             */
            rtb_Maximum_bb = VaICSC_M_MtrBMaxCpblty[(sint32)
                ICSR_ac_B.sf_Get_Data_Indexes_bt.LowerIndex];

            /* Merge: '<S491>/Merge7' incorporates:
             *  Product: '<S520>/Multiplication'
             *  Selector: '<S519>/Selector3'
             *  Selector: '<S520>/Selector3'
             *  Selector: '<S520>/Selector4'
             *  Sum: '<S520>/Summation'
             *  Sum: '<S520>/Summation1'
             */
            rtb_Maximum_bb += (VaICSC_M_MtrBMaxCpblty[(sint32)
                               ICSR_ac_B.sf_Get_Data_Indexes_bt.UpperIndex] -
                               rtb_Maximum_bb) *
                ICSR_ac_B.sf_Get_Data_Indexes_bt.fract;

            /* End of Outputs for SubSystem: '<S491>/Reverse' */
        }

        /* End of If: '<S491>/If' */

        /* If: '<S491>/If2' */
        if (ICSR_ac_B.Merge > 0.0F)
        {
            /* Outputs for IfAction SubSystem: '<S491>/Pass' incorporates:
             *  ActionPort: '<S510>/Action Port'
             */
            ICSR_ac_Pass(rtb_TmpSignalConversionAtVeOSMR, rtb_Maximum_bb,
                         &rtb_Subtraction_ab, (&(VeICSC_M_MtrB_IdleMaxTorq)));

            /* End of Outputs for SubSystem: '<S491>/Pass' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S491>/Switch' incorporates:
             *  ActionPort: '<S512>/Action Port'
             */
            ICSR_ac_Switch(rtb_TmpSignalConversionAtVeOSMR, rtb_Maximum_bb,
                           &rtb_Subtraction_ab, (&(VeICSC_M_MtrB_IdleMaxTorq)));

            /* End of Outputs for SubSystem: '<S491>/Switch' */
        }

        /* End of If: '<S491>/If2' */

        /* If: '<S492>/If' incorporates:
         *  Constant: '<S523>/Constant'
         *  RelationalOperator: '<S492>/Comparison5'
         */
        if (((uint32)rtb_TmpSignalConversionAtVeTRGR) !=
                CeTRGR_e_TransRangeReverse)
        {
            /* Outputs for IfAction SubSystem: '<S492>/Not_Reverse' incorporates:
             *  ActionPort: '<S524>/Action Port'
             */
            /* Chart: '<S530>/Get_Data_Indexes ' incorporates:
             *  Constant: '<S485>/Constant'
             */
            ICSR_ac_Get_Data_Indexes_c(ICSR_ac_ConstP.Constant_Value,
                ICSR_ac_ConstB.C_Spd, &ICSR_ac_B.sf_Get_Data_Indexes_c);

            /* End of Outputs for SubSystem: '<S492>/Not_Reverse' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S492>/Reverse' incorporates:
             *  ActionPort: '<S526>/Action Port'
             */
            /* Chart: '<S536>/Get_Data_Indexes ' incorporates:
             *  Constant: '<S485>/Constant'
             */
            ICSR_ac_Get_Data_Indexes_c(ICSR_ac_ConstP.Constant_Value,
                ICSR_ac_ConstB.C_Spd, &ICSR_ac_B.sf_Get_Data_Indexes_f);

            /* End of Outputs for SubSystem: '<S492>/Reverse' */
        }

        /* End of If: '<S492>/If' */

        /* Outputs for IfAction SubSystem: '<S492>/Switch' incorporates:
         *  ActionPort: '<S527>/Action Port'
         */
        /* If: '<S492>/If2' */
        ICSR_ac_Switch(0.0F, 0.0F, &rtb_Subtraction_ab, &rtb_Subtraction1_b);

        /* End of Outputs for SubSystem: '<S492>/Switch' */
        /* End of Outputs for SubSystem: '<S186>/NoPwrSpltTrns' */
    }

    /* End of If: '<S186>/If' */

    /* SignalConversion generated from: '<S8>/ICSC_InputSpdCals' */
#if Rte_SysCon_Variant_ICSR_3 && Rte_SysCon_Variant_ICSR_5

    /* VariantMerge generated from: '<S8>/ICSC_InputSpdCals' incorporates:
     *  SignalConversion generated from: '<S1>/VeTRGR_e_VldtdTransRngSt'
     */
    rtb_VM_Conditional_Signal_ICSC_ = rtb_TmpSignalConversionAtVeTRGR;

#elif !Rte_SysCon_Variant_ICSR_3 && Rte_SysCon_Variant_ICSR_5

    /* VariantMerge generated from: '<S8>/ICSC_InputSpdCals' */
    rtb_VM_Conditional_Signal_ICSC_ = CeTRGR_e_NoSelectionAvailable;

#endif

    /* SignalConversion generated from: '<S8>/Variant Source15' incorporates:
     *  Constant: '<S8>/Constant Value15'
     *  Inport: '<Root>/VeENGR_e_ETRQ_Mode'
     *  Inport: '<Root>/VeESPR_b_BuffrCrnkDiagFailing'
     *  Inport: '<Root>/VeESPR_b_BuffrCrnkPrfrmncFltDtct'
     *  Inport: '<Root>/VeESPR_b_EngNegSpdFltDtct'
     *  Inport: '<Root>/VeESPR_b_EngOvrSpdFltDtct'
     *  Inport: '<Root>/VeESPR_b_EngineAngle_MCPFA'
     *  Inport: '<Root>/VeESPR_b_EngineSpeed_MCPFA'
     *  Inport: '<Root>/VeESPR_e_EngineSpeedStatus'
     *  Inport: '<Root>/VeRTMR_b_DsblEngCL_ICSR'
     *  Inport: '<Root>/VeSRAR_b_DsblNiSpdCntrl'
     *  Inport: '<Root>/VeTRAR_e_EngCntrlMode'
     */
#if Rte_SysCon_Variant_ICSR_5

    /* Outputs for Atomic SubSystem: '<S8>/ICSC_InputSpdCals' */
    (void)Rte_Read_VeENGR_e_ETRQ_Mode_Value(&tmpRead_3);
    (void)Rte_Read_VeTRAR_e_EngCntrlMode_Value(&rtb_LeICSR_e_EngCntrlMode_Pre);

    /* Switch: '<S267>/Switch' incorporates:
     *  Constant: '<S272>/Constant'
     *  Inport: '<Root>/VeENGR_e_ETRQ_Mode'
     *  Inport: '<Root>/VeTRAR_e_EngCntrlMode'
     *  RelationalOperator: '<S267>/Comparison3'
     */
    rtb_AND_gb = (CeENGR_e_Idle == ((uint32)tmpRead_3));

    /* RelationalOperator: '<S267>/Comparison5' incorporates:
     *  Constant: '<S273>/Constant'
     *  Inport: '<Root>/VeTRAR_e_EngCntrlMode'
     */
    rtb_AND_aj = (CeTRAR_e_SpeedMode == ((uint32)rtb_LeICSR_e_EngCntrlMode_Pre));

    /* Logic: '<S267>/Logical5' */
    ICSR_ac_B.Logical5 = ((!rtb_AND_gb) || (!rtb_AND_aj));

    /* Outputs for Atomic SubSystem: '<S267>/Debounce' */
    for (i = 0; i < 9; i++)
    {
        /* RelationalOperator: '<S271>/Equal' incorporates:
         *  S-Function (sfix_udelay): '<S271>/Tapped Delay'
         */
        rtb_Equal[i] = (ICSR_ac_B.Logical5 == ICSR_ac_DW.TappedDelay_X[i]);
    }

    /* Logic: '<S271>/AND' */
    rtb_LogicalOperator_b = rtb_Equal[0];
    for (i = 0; i < 8; i++)
    {
        rtb_LogicalOperator_b = (rtb_LogicalOperator_b && (rtb_Equal[i + 1]));

        /* Update for S-Function (sfix_udelay): '<S271>/Tapped Delay' */
        ICSR_ac_DW.TappedDelay_X[i] = ICSR_ac_DW.TappedDelay_X[i + 1];
    }

    /* Switch: '<S271>/Switch' incorporates:
     *  Logic: '<S271>/AND'
     */
    if (rtb_LogicalOperator_b)
    {
        /* Switch: '<S271>/Switch' */
        rtb_LogicalOperator_b = ICSR_ac_B.Logical5;
    }
    else
    {
        /* Switch: '<S271>/Switch' incorporates:
         *  UnitDelay: '<S271>/Unit Delay2'
         */
        rtb_LogicalOperator_b = ICSR_ac_DW.UnitDelay2_DSTATE_l;
    }

    /* End of Switch: '<S271>/Switch' */

    /* Update for S-Function (sfix_udelay): '<S271>/Tapped Delay' */
    ICSR_ac_DW.TappedDelay_X[8] = ICSR_ac_B.Logical5;

    /* Update for UnitDelay: '<S271>/Unit Delay2' */
    ICSR_ac_DW.UnitDelay2_DSTATE_l = rtb_LogicalOperator_b;

    /* End of Outputs for SubSystem: '<S267>/Debounce' */

    /* Switch: '<S267>/Switch' */
    if (!rtb_LogicalOperator_b)
    {
        /* Switch: '<S267>/Switch' */
        rtb_AND_gb = rtb_AND_aj;
    }

    /* End of Switch: '<S267>/Switch' */

    /* Outputs for Atomic SubSystem: '<S267>/Hysteresis' */
    /* Switch: '<S276>/Switch1' incorporates:
     *  Constant: '<S278>/Calib'
     *  RelationalOperator: '<S276>/Greater  Than'
     */
    if (rtb_TmpSignalConversionAtVeESMR > KeICSR_P_Dsbl_ThrshSTMax_RSP)
    {
        /* Switch: '<S276>/Switch1' incorporates:
         *  Constant: '<S276>/Constant Value'
         */
        rtb_AND_aj = true;
    }
    else
    {
        /* Switch: '<S276>/Switch1' incorporates:
         *  Constant: '<S277>/Calib'
         *  RelationalOperator: '<S276>/Greater  Than1'
         *  UnitDelay: '<S276>/Unit Delay'
         */
        rtb_AND_aj = ((rtb_TmpSignalConversionAtVeESMR >=
                       KeICSR_P_Dsbl_ThrshSTMax_LSP) &&
                      (ICSR_ac_DW.UnitDelay_DSTATE_iu));
    }

    /* End of Switch: '<S276>/Switch1' */

    /* Update for UnitDelay: '<S276>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_iu = rtb_AND_aj;

    /* End of Outputs for SubSystem: '<S267>/Hysteresis' */

    /* Outputs for Atomic SubSystem: '<S268>/Hysteresis3' */
    /* Switch: '<S281>/Switch1' incorporates:
     *  Constant: '<S284>/Calib'
     *  RelationalOperator: '<S281>/Greater  Than'
     */
    if (rtb_TmpSignalConversionAtVeBCPR > KeICSR_M_BltMaxTrq_ThrshRSP)
    {
        /* Switch: '<S281>/Switch1' incorporates:
         *  Constant: '<S281>/Constant Value'
         */
        rtb_LogicalOperator_b = true;
    }
    else
    {
        /* Switch: '<S281>/Switch1' incorporates:
         *  Constant: '<S283>/Calib'
         *  RelationalOperator: '<S281>/Greater  Than1'
         *  UnitDelay: '<S281>/Unit Delay'
         */
        rtb_LogicalOperator_b = ((rtb_TmpSignalConversionAtVeBCPR >=
            KeICSR_M_BltMaxTrq_ThrshLSP) && (ICSR_ac_DW.UnitDelay_DSTATE_ea));
    }

    /* End of Switch: '<S281>/Switch1' */

    /* Update for UnitDelay: '<S281>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_ea = rtb_LogicalOperator_b;

    /* End of Outputs for SubSystem: '<S268>/Hysteresis3' */

    /* Outputs for Atomic SubSystem: '<S268>/Hysteresis4' */
    /* Switch: '<S282>/Switch1' incorporates:
     *  Constant: '<S286>/Calib'
     *  RelationalOperator: '<S282>/Greater  Than'
     */
    if (VeICSC_M_MtrA_IdleMaxTorq > KeICSR_M_MtrAMaxTrq_ThrshRSP)
    {
        /* Switch: '<S282>/Switch1' incorporates:
         *  Constant: '<S282>/Constant Value'
         */
        rtb_NotEqual_c = true;
    }
    else
    {
        /* Switch: '<S282>/Switch1' incorporates:
         *  Constant: '<S285>/Calib'
         *  RelationalOperator: '<S282>/Greater  Than1'
         *  UnitDelay: '<S282>/Unit Delay'
         */
        rtb_NotEqual_c = ((VeICSC_M_MtrA_IdleMaxTorq >=
                           KeICSR_M_MtrAMaxTrq_ThrshLSP) &&
                          (ICSR_ac_DW.UnitDelay_DSTATE_ph));
    }

    /* End of Switch: '<S282>/Switch1' */

    /* Update for UnitDelay: '<S282>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_ph = rtb_NotEqual_c;

    /* End of Outputs for SubSystem: '<S268>/Hysteresis4' */

    /* Logic: '<S268>/Logical5' incorporates:
     *  Logic: '<S268>/Logical1'
     *  Logic: '<S268>/Logical2'
     */
    VeICSR_b_MtrA_NiCLDsbld = ((!rtb_LogicalOperator_b) || (!rtb_NotEqual_c));

    /* Outputs for Atomic SubSystem: '<S269>/Hysteresis6' */
    /* Switch: '<S287>/Switch1' incorporates:
     *  Constant: '<S289>/Calib'
     *  RelationalOperator: '<S287>/Greater  Than'
     */
    if (VeICSC_M_MtrB_IdleMaxTorq > KeICSR_M_MtrBMaxTrq_ThrshRSP)
    {
        /* Switch: '<S287>/Switch1' incorporates:
         *  Constant: '<S287>/Constant Value'
         */
        rtb_LogicalOperator_b = true;
    }
    else
    {
        /* Switch: '<S287>/Switch1' incorporates:
         *  Constant: '<S288>/Calib'
         *  RelationalOperator: '<S287>/Greater  Than1'
         *  UnitDelay: '<S287>/Unit Delay'
         */
        rtb_LogicalOperator_b = ((VeICSC_M_MtrB_IdleMaxTorq >=
            KeICSR_M_MtrBMaxTrq_ThrshLSP) && (ICSR_ac_DW.UnitDelay_DSTATE_oy));
    }

    /* End of Switch: '<S287>/Switch1' */

    /* Update for UnitDelay: '<S287>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_oy = rtb_LogicalOperator_b;

    /* End of Outputs for SubSystem: '<S269>/Hysteresis6' */

    /* Logic: '<S269>/Logical2' */
    VeICSR_b_MtrB_NiCLDsbld = !rtb_LogicalOperator_b;

    /* If: '<S270>/If_RangeState' incorporates:
     *  DataTypeConversion: '<S270>/Data Type Conversion'
     *  SignalConversion generated from: '<S1>/VeHSER_e_RngEqnSel'
     */
    if ((((sint32)rtb_TmpSignalConversionAtVeHS_p) == 0) || (((sint32)
            rtb_TmpSignalConversionAtVeHS_p) == 8))
    {
        /* Outputs for IfAction SubSystem: '<S270>/Neutral' incorporates:
         *  ActionPort: '<S304>/Action Port'
         */
        /* Logic: '<S304>/Logical' incorporates:
         *  Constant: '<S360>/Calib'
         *  DataStoreWrite: '<S304>/Dsw_Ni_CalSwitchTrigg'
         *  RelationalOperator: '<S270>/Comparison5'
         *  UnitDelay: '<S270>/Unit Delay'
         */
        ICSR_ac_DW.VeICSR_b_Ni_CalSwitchTrigger =
            ((rtb_TmpSignalConversionAtVeHS_p != ICSR_ac_DW.UnitDelay_DSTATE_csg)
             && (KeICSR_b_NeutRmpOutTaTb));

        /* Logic: '<S304>/Logical7' incorporates:
         *  Logic: '<S304>/Logical10'
         */
        VeICSI_b_Nx_ClchLrn_Active_tmp = !VeICSR_b_MtrB_NiCLDsbld;

        /* Logic: '<S304>/Logical8' incorporates:
         *  Logic: '<S304>/Logical11'
         */
        rtb_NotEqual_c = !VeICSR_b_MtrA_NiCLDsbld;

        /* If: '<S304>/If1' incorporates:
         *  Logic: '<S304>/Logical12'
         *  Logic: '<S304>/Logical6'
         *  Logic: '<S304>/Logical7'
         *  Logic: '<S304>/Logical8'
         *  Logic: '<S304>/Logical9'
         */
        if (rtb_NotEqual_c && VeICSI_b_Nx_ClchLrn_Active_tmp)
        {
            /* Outputs for IfAction SubSystem: '<S304>/NoMtrsDsbl' incorporates:
             *  ActionPort: '<S363>/Action Port'
             */
            /* Switch: '<S363>/Switch' */
            if (rtb_TmpSignalConversionAtVeHS_h)
            {
                /* Merge: '<S270>/Merge2' incorporates:
                 *  Constant: '<S369>/Calib'
                 */
                ICSR_ac_B.Merge2_g = KeICSR_r_N_TaFromNiCLC2C;

                /* Switch: '<S363>/Switch1' incorporates:
                 *  Constant: '<S371>/Calib'
                 *  Merge: '<S270>/Merge1'
                 */
                ICSR_ac_B.Merge1_n = KeICSR_r_N_TbFromNiCLC2C;
            }
            else
            {
                /* Merge: '<S270>/Merge2' incorporates:
                 *  Constant: '<S368>/Calib'
                 */
                ICSR_ac_B.Merge2_g = KeICSR_r_N_TaFromNiCL;

                /* Merge: '<S270>/Merge1' incorporates:
                 *  Constant: '<S370>/Calib'
                 *  Switch: '<S363>/Switch1'
                 */
                ICSR_ac_B.Merge1_n = KeICSR_r_N_TbFromNiCL;
            }

            /* End of Switch: '<S363>/Switch' */

            /* Merge: '<S270>/Merge5' incorporates:
             *  Constant: '<S363>/FALSE Constant'
             */
            VeICSR_b_MtrsNiCLDsbld = false;

            /* End of Outputs for SubSystem: '<S304>/NoMtrsDsbl' */
        }
        else if ((VeICSR_b_MtrA_NiCLDsbld) && VeICSI_b_Nx_ClchLrn_Active_tmp)
        {
            /* Outputs for IfAction SubSystem: '<S304>/MtrADslb' incorporates:
             *  ActionPort: '<S361>/Action Port'
             */
            /* Merge: '<S270>/Merge2' incorporates:
             *  Constant: '<S361>/Constant Value'
             */
            ICSR_ac_B.Merge2_g = 0.0F;

            /* Merge: '<S270>/Merge1' incorporates:
             *  Constant: '<S365>/Calib'
             */
            ICSR_ac_B.Merge1_n = KeICSR_r_N_TbFromNiCL_MtrADslb;

            /* Merge: '<S270>/Merge5' incorporates:
             *  Constant: '<S364>/Calib'
             */
            VeICSR_b_MtrsNiCLDsbld = KeICSR_b_N_MtrADsbl_NiCLDsbl;

            /* End of Outputs for SubSystem: '<S304>/MtrADslb' */
        }
        else if (rtb_NotEqual_c && (VeICSR_b_MtrB_NiCLDsbld))
        {
            /* Outputs for IfAction SubSystem: '<S304>/MtrBDslb' incorporates:
             *  ActionPort: '<S362>/Action Port'
             */
            /* Merge: '<S270>/Merge2' incorporates:
             *  Constant: '<S367>/Calib'
             */
            ICSR_ac_B.Merge2_g = KeICSR_r_N_TaFromNiCL_MtrBDslb;

            /* Merge: '<S270>/Merge1' incorporates:
             *  Constant: '<S362>/Constant Value'
             */
            ICSR_ac_B.Merge1_n = 0.0F;

            /* Merge: '<S270>/Merge5' incorporates:
             *  Constant: '<S366>/Calib'
             */
            VeICSR_b_MtrsNiCLDsbld = KeICSR_b_N_MtrBDsbl_NiCLDsbl;

            /* End of Outputs for SubSystem: '<S304>/MtrBDslb' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S304>/BothMtrsDsbl' incorporates:
             *  ActionPort: '<S359>/Action Port'
             */
            ICSR_ac_BothMtrsDsbl(&ICSR_ac_B.Merge2_g, &ICSR_ac_B.Merge1_n,
                                 (&(VeICSR_b_MtrsNiCLDsbld)));

            /* End of Outputs for SubSystem: '<S304>/BothMtrsDsbl' */
        }

        /* End of If: '<S304>/If1' */

        /* Merge: '<S270>/Merge4' incorporates:
         *  Constant: '<S304>/Constant Value'
         */
        ICSR_ac_B.Merge4_m = 0U;

        /* Merge: '<S270>/Merge3' incorporates:
         *  Constant: '<S304>/Constant Value5'
         */
        ICSR_ac_B.Merge3_p = 1.0F;

        /* End of Outputs for SubSystem: '<S270>/Neutral' */
    }
    else if (((sint32)rtb_TmpSignalConversionAtVeHS_p) == 1)
    {
        /* Outputs for IfAction SubSystem: '<S270>/M1' incorporates:
         *  ActionPort: '<S301>/Action Port'
         */
        /* Logic: '<S301>/Logical6' incorporates:
         *  Logic: '<S301>/Logical10'
         */
        VeICSI_b_Nx_ClchLrn_Active_tmp = !VeICSR_b_MtrB_NiCLDsbld;

        /* Logic: '<S301>/Logical7' incorporates:
         *  Logic: '<S301>/Logical11'
         */
        rtb_NotEqual_c = !VeICSR_b_MtrA_NiCLDsbld;

        /* If: '<S301>/If1' incorporates:
         *  Logic: '<S301>/Logical5'
         *  Logic: '<S301>/Logical6'
         *  Logic: '<S301>/Logical7'
         *  Logic: '<S301>/Logical8'
         *  Logic: '<S301>/Logical9'
         */
        if (rtb_NotEqual_c && VeICSI_b_Nx_ClchLrn_Active_tmp)
        {
            /* Outputs for IfAction SubSystem: '<S301>/NoMtrsDsbl' incorporates:
             *  ActionPort: '<S330>/Action Port'
             */
            /* Merge: '<S270>/Merge2' incorporates:
             *  Constant: '<S335>/Calib'
             */
            ICSR_ac_B.Merge2_g = KeICSR_r_M1_TaFromNiCL;

            /* Merge: '<S270>/Merge1' incorporates:
             *  Constant: '<S336>/Calib'
             */
            ICSR_ac_B.Merge1_n = KeICSR_r_M1_TbFromNiCL;

            /* Merge: '<S270>/Merge5' incorporates:
             *  Constant: '<S330>/FALSE Constant'
             */
            VeICSR_b_MtrsNiCLDsbld = false;

            /* End of Outputs for SubSystem: '<S301>/NoMtrsDsbl' */
        }
        else if ((VeICSR_b_MtrA_NiCLDsbld) && VeICSI_b_Nx_ClchLrn_Active_tmp)
        {
            /* Outputs for IfAction SubSystem: '<S301>/MtrADslb' incorporates:
             *  ActionPort: '<S328>/Action Port'
             */
            /* Merge: '<S270>/Merge2' incorporates:
             *  Constant: '<S328>/Constant Value'
             */
            ICSR_ac_B.Merge2_g = 0.0F;

            /* Merge: '<S270>/Merge1' incorporates:
             *  Constant: '<S332>/Calib'
             */
            ICSR_ac_B.Merge1_n = KeICSR_r_M1_TbFromNiCL_MtrADslb;

            /* Merge: '<S270>/Merge5' incorporates:
             *  Constant: '<S331>/Calib'
             */
            VeICSR_b_MtrsNiCLDsbld = KeICSR_b_M1_MtrADsbl_NiCLDsbl;

            /* End of Outputs for SubSystem: '<S301>/MtrADslb' */
        }
        else if (rtb_NotEqual_c && (VeICSR_b_MtrB_NiCLDsbld))
        {
            /* Outputs for IfAction SubSystem: '<S301>/MtrBDslb' incorporates:
             *  ActionPort: '<S329>/Action Port'
             */
            /* Merge: '<S270>/Merge2' incorporates:
             *  Constant: '<S334>/Calib'
             */
            ICSR_ac_B.Merge2_g = KeICSR_r_M1_TaFromNiCL_MtrBDslb;

            /* Merge: '<S270>/Merge1' incorporates:
             *  Constant: '<S329>/Constant Value'
             */
            ICSR_ac_B.Merge1_n = 0.0F;

            /* Merge: '<S270>/Merge5' incorporates:
             *  Constant: '<S333>/Calib'
             */
            VeICSR_b_MtrsNiCLDsbld = KeICSR_b_M1_MtrBDsbl_NiCLDsbl;

            /* End of Outputs for SubSystem: '<S301>/MtrBDslb' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S301>/BothMtrsDsbl' incorporates:
             *  ActionPort: '<S326>/Action Port'
             */
            ICSR_ac_BothMtrsDsbl(&ICSR_ac_B.Merge2_g, &ICSR_ac_B.Merge1_n,
                                 (&(VeICSR_b_MtrsNiCLDsbld)));

            /* End of Outputs for SubSystem: '<S301>/BothMtrsDsbl' */
        }

        /* End of If: '<S301>/If1' */

        /* Merge: '<S270>/Merge4' incorporates:
         *  Constant: '<S301>/Constant Value'
         */
        ICSR_ac_B.Merge4_m = 1U;

        /* Merge: '<S270>/Merge3' incorporates:
         *  Lookup_n-D: '<S327>/Vector'
         *  SignalConversion generated from: '<S1>/VeHCCR_M_Clch2_TorqEst'
         */
        ICSR_ac_B.Merge3_p = look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeHC_b,
            ((const float32 *)&(KxICSR_K_M1K0NonLinear[0])), ((const float32 *)
            &(KtICSR_K_M1K0NonLinear[0])), 10U);

        /* End of Outputs for SubSystem: '<S270>/M1' */
    }
    else if (((sint32)rtb_TmpSignalConversionAtVeHS_p) == 2)
    {
        /* Outputs for IfAction SubSystem: '<S270>/M2' incorporates:
         *  ActionPort: '<S302>/Action Port'
         */
        /* Logic: '<S302>/Logical6' incorporates:
         *  Logic: '<S302>/Logical10'
         */
        VeICSI_b_Nx_ClchLrn_Active_tmp = !VeICSR_b_MtrB_NiCLDsbld;

        /* Logic: '<S302>/Logical7' incorporates:
         *  Logic: '<S302>/Logical11'
         */
        rtb_NotEqual_c = !VeICSR_b_MtrA_NiCLDsbld;

        /* If: '<S302>/If1' incorporates:
         *  Logic: '<S302>/Logical5'
         *  Logic: '<S302>/Logical6'
         *  Logic: '<S302>/Logical7'
         *  Logic: '<S302>/Logical8'
         *  Logic: '<S302>/Logical9'
         */
        if (rtb_NotEqual_c && VeICSI_b_Nx_ClchLrn_Active_tmp)
        {
            /* Outputs for IfAction SubSystem: '<S302>/NoMtrsDsbl' incorporates:
             *  ActionPort: '<S341>/Action Port'
             */
            /* Merge: '<S270>/Merge2' incorporates:
             *  Constant: '<S346>/Calib'
             */
            ICSR_ac_B.Merge2_g = KeICSR_r_M2_TaFromNiCL;

            /* Merge: '<S270>/Merge1' incorporates:
             *  Constant: '<S347>/Calib'
             */
            ICSR_ac_B.Merge1_n = KeICSR_r_M2_TbFromNiCL;

            /* Merge: '<S270>/Merge5' incorporates:
             *  Constant: '<S341>/FALSE Constant'
             */
            VeICSR_b_MtrsNiCLDsbld = false;

            /* End of Outputs for SubSystem: '<S302>/NoMtrsDsbl' */
        }
        else if ((VeICSR_b_MtrA_NiCLDsbld) && VeICSI_b_Nx_ClchLrn_Active_tmp)
        {
            /* Outputs for IfAction SubSystem: '<S302>/MtrADslb' incorporates:
             *  ActionPort: '<S339>/Action Port'
             */
            /* Merge: '<S270>/Merge2' incorporates:
             *  Constant: '<S339>/Constant Value'
             */
            ICSR_ac_B.Merge2_g = 0.0F;

            /* Merge: '<S270>/Merge1' incorporates:
             *  Constant: '<S343>/Calib'
             */
            ICSR_ac_B.Merge1_n = KeICSR_r_M2_TbFromNiCL_MtrADslb;

            /* Merge: '<S270>/Merge5' incorporates:
             *  Constant: '<S342>/Calib'
             */
            VeICSR_b_MtrsNiCLDsbld = KeICSR_b_M2_MtrADsbl_NiCLDsbl;

            /* End of Outputs for SubSystem: '<S302>/MtrADslb' */
        }
        else if (rtb_NotEqual_c && (VeICSR_b_MtrB_NiCLDsbld))
        {
            /* Outputs for IfAction SubSystem: '<S302>/MtrBDslb' incorporates:
             *  ActionPort: '<S340>/Action Port'
             */
            /* Merge: '<S270>/Merge2' incorporates:
             *  Constant: '<S345>/Calib'
             */
            ICSR_ac_B.Merge2_g = KeICSR_r_M2_TaFromNiCL_MtrBDslb;

            /* Merge: '<S270>/Merge1' incorporates:
             *  Constant: '<S340>/Constant Value'
             */
            ICSR_ac_B.Merge1_n = 0.0F;

            /* Merge: '<S270>/Merge5' incorporates:
             *  Constant: '<S344>/Calib'
             */
            VeICSR_b_MtrsNiCLDsbld = KeICSR_b_M2_MtrBDsbl_NiCLDsbl;

            /* End of Outputs for SubSystem: '<S302>/MtrBDslb' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S302>/BothMtrsDsbl' incorporates:
             *  ActionPort: '<S337>/Action Port'
             */
            ICSR_ac_BothMtrsDsbl(&ICSR_ac_B.Merge2_g, &ICSR_ac_B.Merge1_n,
                                 (&(VeICSR_b_MtrsNiCLDsbld)));

            /* End of Outputs for SubSystem: '<S302>/BothMtrsDsbl' */
        }

        /* End of If: '<S302>/If1' */

        /* Merge: '<S270>/Merge4' incorporates:
         *  Constant: '<S302>/Constant Value'
         */
        ICSR_ac_B.Merge4_m = 2U;

        /* Merge: '<S270>/Merge3' incorporates:
         *  Lookup_n-D: '<S338>/Vector'
         *  SignalConversion generated from: '<S1>/VeHCCR_M_Clch1_TorqEst'
         */
        ICSR_ac_B.Merge3_p = look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeHCCR,
            ((const float32 *)&(KxICSR_K_M2ILENonLinear[0])), ((const float32 *)
            &(KtICSR_K_M2ILENonLinear[0])), 10U);

        /* End of Outputs for SubSystem: '<S270>/M2' */
    }
    else if (((sint32)rtb_TmpSignalConversionAtVeHS_p) == 3)
    {
        /* Outputs for IfAction SubSystem: '<S270>/M3' incorporates:
         *  ActionPort: '<S303>/Action Port'
         */
        /* Logic: '<S303>/Logical6' incorporates:
         *  Logic: '<S303>/Logical10'
         */
        VeICSI_b_Nx_ClchLrn_Active_tmp = !VeICSR_b_MtrB_NiCLDsbld;

        /* Logic: '<S303>/Logical7' incorporates:
         *  Logic: '<S303>/Logical11'
         */
        rtb_NotEqual_c = !VeICSR_b_MtrA_NiCLDsbld;

        /* If: '<S303>/If1' incorporates:
         *  Logic: '<S303>/Logical5'
         *  Logic: '<S303>/Logical6'
         *  Logic: '<S303>/Logical7'
         *  Logic: '<S303>/Logical8'
         *  Logic: '<S303>/Logical9'
         */
        if (rtb_NotEqual_c && VeICSI_b_Nx_ClchLrn_Active_tmp)
        {
            /* Outputs for IfAction SubSystem: '<S303>/NoMtrsDsbl' incorporates:
             *  ActionPort: '<S352>/Action Port'
             */
            /* Merge: '<S270>/Merge2' incorporates:
             *  Constant: '<S357>/Calib'
             */
            ICSR_ac_B.Merge2_g = KeICSR_r_M3_TaFromNiCL;

            /* Merge: '<S270>/Merge1' incorporates:
             *  Constant: '<S358>/Calib'
             */
            ICSR_ac_B.Merge1_n = KeICSR_r_M3_TbFromNiCL;

            /* Merge: '<S270>/Merge5' incorporates:
             *  Constant: '<S352>/FALSE Constant'
             */
            VeICSR_b_MtrsNiCLDsbld = false;

            /* End of Outputs for SubSystem: '<S303>/NoMtrsDsbl' */
        }
        else if ((VeICSR_b_MtrA_NiCLDsbld) && VeICSI_b_Nx_ClchLrn_Active_tmp)
        {
            /* Outputs for IfAction SubSystem: '<S303>/MtrADslb' incorporates:
             *  ActionPort: '<S350>/Action Port'
             */
            /* Merge: '<S270>/Merge2' incorporates:
             *  Constant: '<S350>/Constant Value'
             */
            ICSR_ac_B.Merge2_g = 0.0F;

            /* Merge: '<S270>/Merge1' incorporates:
             *  Constant: '<S354>/Calib'
             */
            ICSR_ac_B.Merge1_n = KeICSR_r_M3_TbFromNiCL_MtrADslb;

            /* Merge: '<S270>/Merge5' incorporates:
             *  Constant: '<S353>/Calib'
             */
            VeICSR_b_MtrsNiCLDsbld = KeICSR_b_M3_MtrADsbl_NiCLDsbl;

            /* End of Outputs for SubSystem: '<S303>/MtrADslb' */
        }
        else if (rtb_NotEqual_c && (VeICSR_b_MtrB_NiCLDsbld))
        {
            /* Outputs for IfAction SubSystem: '<S303>/MtrBDslb' incorporates:
             *  ActionPort: '<S351>/Action Port'
             */
            /* Merge: '<S270>/Merge2' incorporates:
             *  Constant: '<S356>/Calib'
             */
            ICSR_ac_B.Merge2_g = KeICSR_r_M3_TaFromNiCL_MtrBDslb;

            /* Merge: '<S270>/Merge1' incorporates:
             *  Constant: '<S351>/Constant Value'
             */
            ICSR_ac_B.Merge1_n = 0.0F;

            /* Merge: '<S270>/Merge5' incorporates:
             *  Constant: '<S355>/Calib'
             */
            VeICSR_b_MtrsNiCLDsbld = KeICSR_b_M3_MtrBDsbl_NiCLDsbl;

            /* End of Outputs for SubSystem: '<S303>/MtrBDslb' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S303>/BothMtrsDsbl' incorporates:
             *  ActionPort: '<S348>/Action Port'
             */
            ICSR_ac_BothMtrsDsbl(&ICSR_ac_B.Merge2_g, &ICSR_ac_B.Merge1_n,
                                 (&(VeICSR_b_MtrsNiCLDsbld)));

            /* End of Outputs for SubSystem: '<S303>/BothMtrsDsbl' */
        }

        /* End of If: '<S303>/If1' */

        /* Merge: '<S270>/Merge4' incorporates:
         *  Constant: '<S303>/Constant Value'
         */
        ICSR_ac_B.Merge4_m = 3U;

        /* Merge: '<S270>/Merge3' incorporates:
         *  Lookup_n-D: '<S349>/Vector'
         *  SignalConversion generated from: '<S1>/VeHCCR_M_Clch2_TorqEst'
         */
        ICSR_ac_B.Merge3_p = look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeHC_b,
            ((const float32 *)&(KxICSR_K_M3ILENonLinear[0])), ((const float32 *)
            &(KtICSR_K_M3ILENonLinear[0])), 10U);

        /* End of Outputs for SubSystem: '<S270>/M3' */
    }
    else if (((sint32)rtb_TmpSignalConversionAtVeHS_p) == 5)
    {
        /* Outputs for IfAction SubSystem: '<S270>/G2' incorporates:
         *  ActionPort: '<S298>/Action Port'
         */
        /* Logic: '<S298>/Logical1' incorporates:
         *  Logic: '<S298>/Logical5'
         */
        VeICSI_b_Nx_ClchLrn_Active_tmp = !VeICSR_b_MtrB_NiCLDsbld;

        /* Logic: '<S298>/Logical2' incorporates:
         *  Logic: '<S298>/Logical6'
         */
        rtb_NotEqual_c = !VeICSR_b_MtrA_NiCLDsbld;

        /* If: '<S298>/If' incorporates:
         *  Logic: '<S298>/Logical'
         *  Logic: '<S298>/Logical1'
         *  Logic: '<S298>/Logical2'
         *  Logic: '<S298>/Logical3'
         *  Logic: '<S298>/Logical4'
         */
        if (rtb_NotEqual_c && VeICSI_b_Nx_ClchLrn_Active_tmp)
        {
            /* Outputs for IfAction SubSystem: '<S298>/NoMtrsDsbl' incorporates:
             *  ActionPort: '<S309>/Action Port'
             */
            /* Merge: '<S270>/Merge2' incorporates:
             *  Constant: '<S314>/Calib'
             */
            ICSR_ac_B.Merge2_g = KeICSR_r_G2_TaFromNiCL;

            /* Merge: '<S270>/Merge1' incorporates:
             *  Constant: '<S315>/Calib'
             */
            ICSR_ac_B.Merge1_n = KeICSR_r_G2_TbFromNiCL;

            /* Merge: '<S270>/Merge5' incorporates:
             *  Constant: '<S309>/FALSE Constant'
             */
            VeICSR_b_MtrsNiCLDsbld = false;

            /* End of Outputs for SubSystem: '<S298>/NoMtrsDsbl' */
        }
        else if ((VeICSR_b_MtrA_NiCLDsbld) && VeICSI_b_Nx_ClchLrn_Active_tmp)
        {
            /* Outputs for IfAction SubSystem: '<S298>/MtrADslb' incorporates:
             *  ActionPort: '<S307>/Action Port'
             */
            /* Merge: '<S270>/Merge2' incorporates:
             *  Constant: '<S307>/Constant Value'
             */
            ICSR_ac_B.Merge2_g = 0.0F;

            /* Merge: '<S270>/Merge1' incorporates:
             *  Constant: '<S311>/Calib'
             */
            ICSR_ac_B.Merge1_n = KeICSR_r_G2_TbFromNiCL_MtrADslb;

            /* Merge: '<S270>/Merge5' incorporates:
             *  Constant: '<S310>/Calib'
             */
            VeICSR_b_MtrsNiCLDsbld = KeICSR_b_G2_MtrADsbl_NiCLDsbl;

            /* End of Outputs for SubSystem: '<S298>/MtrADslb' */
        }
        else if (rtb_NotEqual_c && (VeICSR_b_MtrB_NiCLDsbld))
        {
            /* Outputs for IfAction SubSystem: '<S298>/MtrBDslb' incorporates:
             *  ActionPort: '<S308>/Action Port'
             */
            /* Merge: '<S270>/Merge2' incorporates:
             *  Constant: '<S313>/Calib'
             */
            ICSR_ac_B.Merge2_g = KeICSR_r_G2_TaFromNiCL_MtrBDslb;

            /* Merge: '<S270>/Merge1' incorporates:
             *  Constant: '<S308>/Constant Value'
             */
            ICSR_ac_B.Merge1_n = 0.0F;

            /* Merge: '<S270>/Merge5' incorporates:
             *  Constant: '<S312>/Calib'
             */
            VeICSR_b_MtrsNiCLDsbld = KeICSR_b_G2_MtrBDsbl_NiCLDsbl;

            /* End of Outputs for SubSystem: '<S298>/MtrBDslb' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S298>/BothMtrsDsbl' incorporates:
             *  ActionPort: '<S306>/Action Port'
             */
            ICSR_ac_BothMtrsDsbl(&ICSR_ac_B.Merge2_g, &ICSR_ac_B.Merge1_n,
                                 (&(VeICSR_b_MtrsNiCLDsbld)));

            /* End of Outputs for SubSystem: '<S298>/BothMtrsDsbl' */
        }

        /* End of If: '<S298>/If' */

        /* Merge: '<S270>/Merge4' incorporates:
         *  Constant: '<S298>/Constant Value'
         */
        ICSR_ac_B.Merge4_m = 4U;

        /* Merge: '<S270>/Merge3' incorporates:
         *  Constant: '<S298>/Constant Value1'
         */
        ICSR_ac_B.Merge3_p = 1.0F;

        /* End of Outputs for SubSystem: '<S270>/G2' */
    }
    else
    {
        if (((sint32)rtb_TmpSignalConversionAtVeHS_p) == 7)
        {
            /* Outputs for IfAction SubSystem: '<S270>/G4' incorporates:
             *  ActionPort: '<S299>/Action Port'
             */
            /* Logic: '<S299>/Logical1' incorporates:
             *  Logic: '<S299>/Logical5'
             */
            VeICSI_b_Nx_ClchLrn_Active_tmp = !VeICSR_b_MtrB_NiCLDsbld;

            /* Logic: '<S299>/Logical2' incorporates:
             *  Logic: '<S299>/Logical6'
             */
            rtb_NotEqual_c = !VeICSR_b_MtrA_NiCLDsbld;

            /* If: '<S299>/If' incorporates:
             *  Logic: '<S299>/Logical'
             *  Logic: '<S299>/Logical1'
             *  Logic: '<S299>/Logical2'
             *  Logic: '<S299>/Logical3'
             *  Logic: '<S299>/Logical4'
             */
            if (rtb_NotEqual_c && VeICSI_b_Nx_ClchLrn_Active_tmp)
            {
                /* Outputs for IfAction SubSystem: '<S299>/NoMtrsDsbl' incorporates:
                 *  ActionPort: '<S319>/Action Port'
                 */
                /* Merge: '<S270>/Merge2' incorporates:
                 *  Constant: '<S324>/Calib'
                 */
                ICSR_ac_B.Merge2_g = KeICSR_r_G4_TaFromNiCL;

                /* Merge: '<S270>/Merge1' incorporates:
                 *  Constant: '<S325>/Calib'
                 */
                ICSR_ac_B.Merge1_n = KeICSR_r_G4_TbFromNiCL;

                /* Merge: '<S270>/Merge5' incorporates:
                 *  Constant: '<S319>/FALSE Constant'
                 */
                VeICSR_b_MtrsNiCLDsbld = false;

                /* End of Outputs for SubSystem: '<S299>/NoMtrsDsbl' */
            }
            else if ((VeICSR_b_MtrA_NiCLDsbld) && VeICSI_b_Nx_ClchLrn_Active_tmp)
            {
                /* Outputs for IfAction SubSystem: '<S299>/MtrADslb' incorporates:
                 *  ActionPort: '<S317>/Action Port'
                 */
                /* Merge: '<S270>/Merge2' incorporates:
                 *  Constant: '<S317>/Constant Value'
                 */
                ICSR_ac_B.Merge2_g = 0.0F;

                /* Merge: '<S270>/Merge1' incorporates:
                 *  Constant: '<S321>/Calib'
                 */
                ICSR_ac_B.Merge1_n = KeICSR_r_G4_TbFromNiCL_MtrADslb;

                /* Merge: '<S270>/Merge5' incorporates:
                 *  Constant: '<S320>/Calib'
                 */
                VeICSR_b_MtrsNiCLDsbld = KeICSR_b_G4_MtrADsbl_NiCLDsbl;

                /* End of Outputs for SubSystem: '<S299>/MtrADslb' */
            }
            else if (rtb_NotEqual_c && (VeICSR_b_MtrB_NiCLDsbld))
            {
                /* Outputs for IfAction SubSystem: '<S299>/MtrBDslb' incorporates:
                 *  ActionPort: '<S318>/Action Port'
                 */
                /* Merge: '<S270>/Merge2' incorporates:
                 *  Constant: '<S323>/Calib'
                 */
                ICSR_ac_B.Merge2_g = KeICSR_r_G4_TaFromNiCL_MtrBDslb;

                /* Merge: '<S270>/Merge1' incorporates:
                 *  Constant: '<S318>/Constant Value'
                 */
                ICSR_ac_B.Merge1_n = 0.0F;

                /* Merge: '<S270>/Merge5' incorporates:
                 *  Constant: '<S322>/Calib'
                 */
                VeICSR_b_MtrsNiCLDsbld = KeICSR_b_G4_MtrBDsbl_NiCLDsbl;

                /* End of Outputs for SubSystem: '<S299>/MtrBDslb' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S299>/BothMtrsDsbl' incorporates:
                 *  ActionPort: '<S316>/Action Port'
                 */
                ICSR_ac_BothMtrsDsbl(&ICSR_ac_B.Merge2_g, &ICSR_ac_B.Merge1_n, (
                                      &(VeICSR_b_MtrsNiCLDsbld)));

                /* End of Outputs for SubSystem: '<S299>/BothMtrsDsbl' */
            }

            /* End of If: '<S299>/If' */

            /* Merge: '<S270>/Merge4' incorporates:
             *  Constant: '<S299>/Constant Value'
             */
            ICSR_ac_B.Merge4_m = 5U;

            /* Merge: '<S270>/Merge3' incorporates:
             *  Constant: '<S299>/Constant Value1'
             */
            ICSR_ac_B.Merge3_p = 1.0F;

            /* End of Outputs for SubSystem: '<S270>/G4' */
        }
    }

    /* End of If: '<S270>/If_RangeState' */
    (void)Rte_Read_VeRTMR_b_DsblEngCL_ICSR_Value
        (&rtb_LeICSR_b_AdvancePrepForIdle);
    (void)Rte_Read_VeSRAR_b_DsblNiSpdCntrl_Value(&rtb_LeICSR_b_Disable_Ni_Pre);

    /* Logic: '<S267>/Logical2' incorporates:
     *  Constant: '<S274>/Constant'
     *  Constant: '<S275>/Constant'
     *  Constant: '<S279>/Calib'
     *  Constant: '<S280>/Calib'
     *  Inport: '<Root>/VeRTMR_b_DsblEngCL_ICSR'
     *  Inport: '<Root>/VeSRAR_b_DsblNiSpdCntrl'
     *  Logic: '<S267>/Logical3'
     *  Logic: '<S267>/Logical4'
     *  RelationalOperator: '<S267>/Comparison1'
     *  RelationalOperator: '<S267>/Comparison2'
     */
    rtb_LeICSR_b_AdvancePrepForIdle = (((((((((((uint32)
        rtb_TmpSignalConversionAtVeHPMR) == CeHPMR_e_Conventional) || (((uint32)
        rtb_TmpSignalConversionAtVeHPMR) == CeHPMR_e_Alternator)) ||
        (KeICSR_b_Disable_Ni)) || (rtb_AND_gb && (KeICSR_b_HoldEtrqMdIdle))) ||
        rtb_TmpSignalConversionAtVeES_k) || (!rtb_AND_aj)) ||
        (VeICSR_b_MtrsNiCLDsbld)) || rtb_LeICSR_b_AdvancePrepForIdle) ||
        rtb_LeICSR_b_Disable_Ni_Pre);

    /* Logic: '<S267>/Logical1' */
    rtb_LeICSR_b_Disable_Ni_Pre = (rtb_LeICSR_b_AdvancePrepForIdle ||
        LeICSR_b_Disable_Ni_Global);

    /* Outputs for Atomic SubSystem: '<S191>/EdgeFalling' */
    /* Logic: '<S194>/AND' incorporates:
     *  Logic: '<S194>/OR1'
     *  UnitDelay: '<S194>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeHS_h = ((!rtb_LeICSR_b_Disable_Ni_Pre) &&
        (ICSR_ac_DW.UnitDelay_DSTATE_e4));

    /* Update for UnitDelay: '<S194>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_e4 = rtb_LeICSR_b_Disable_Ni_Pre;

    /* End of Outputs for SubSystem: '<S191>/EdgeFalling' */

    /* Switch: '<S191>/Switch' incorporates:
     *  Signum: '<S191>/Sign'
     */
    if (rtb_LeICSR_b_Disable_Ni_Pre)
    {
        /* Switch: '<S191>/Switch' incorporates:
         *  UnitDelay: '<S191>/Unit Delay1'
         */
        rtb_Switch_ak = ICSR_ac_DW.UnitDelay1_DSTATE_i1;
    }
    else if (VeICSR_M_EngClSumRaw < 0.0F)
    {
        /* Signum: '<S191>/Sign' incorporates:
         *  Switch: '<S191>/Switch'
         */
        rtb_Switch_ak = -1.0F;
    }
    else if (VeICSR_M_EngClSumRaw > 0.0F)
    {
        /* Signum: '<S191>/Sign' incorporates:
         *  Switch: '<S191>/Switch'
         */
        rtb_Switch_ak = 1.0F;
    }
    else
    {
        /* Switch: '<S191>/Switch' incorporates:
         *  Signum: '<S191>/Sign'
         */
        rtb_Switch_ak = VeICSR_M_EngClSumRaw;
    }

    /* End of Switch: '<S191>/Switch' */

    /* RelationalOperator: '<S270>/Equal3' incorporates:
     *  Constant: '<S297>/Constant'
     *  Constant: '<S300>/Calib'
     *  Switch: '<S270>/Switch'
     *  VariantMerge generated from: '<S8>/ICSC_InputSpdCals'
     */
#if Rte_SysCon_Variant_ICSR_3

    if (((uint32)rtb_VM_Conditional_Signal_ICSC_) == CeTRGR_e_TransRangeReverse)
    {
        rtb_VariantMerge_For_Variant_p4 = KeICSR_i_CaseOvrReverse;
    }
    else
    {
        rtb_VariantMerge_For_Variant_p4 = ICSR_ac_B.Merge4_m;
    }

#else

    /* VariantMerge generated from: '<S270>/VariantSource' */
    rtb_VariantMerge_For_Variant_p4 = ICSR_ac_B.Merge4_m;

#endif

    /* End of RelationalOperator: '<S270>/Equal3' */

    /* If: '<S191>/If' */
    if (rtb_LeICSR_b_Disable_Ni_Pre)
    {
        /* Outputs for IfAction SubSystem: '<S191>/ICSC_InptSpdDsbl' incorporates:
         *  ActionPort: '<S196>/Action Port'
         */
        /* RelationalOperator: '<S196>/Comparison5' incorporates:
         *  DataStoreWrite: '<S196>/Dsw_Ni_CalSwitchTrigg'
         *  UnitDelay: '<S191>/Unit Delay'
         */
        ICSR_ac_DW.VeICSR_b_Ni_CalSwitchTrigger =
            !ICSR_ac_DW.UnitDelay_DSTATE_cp;

        /* Merge: '<S191>/Merge' incorporates:
         *  Constant: '<S196>/Constant Value'
         */
        ICSR_ac_B.LeICSR_K_NiCL_PGain_Pre = 0.0F;

        /* Merge: '<S191>/Merge1' incorporates:
         *  Constant: '<S196>/Constant Value1'
         */
        ICSR_ac_B.LeICSR_K_NiCL_IGain_Pre = 0.0F;

        /* Merge: '<S191>/Merge2' incorporates:
         *  Constant: '<S196>/Constant Value2'
         */
        ICSR_ac_B.LeICSR_M_NiCL_PLimit_Pre = 0.0F;

        /* Merge: '<S191>/Merge3' incorporates:
         *  Constant: '<S196>/Constant Value3'
         */
        ICSR_ac_B.LeICSR_M_NiCL_ILimit_Pre = 0.0F;

        /* Merge: '<S191>/Merge4' incorporates:
         *  Constant: '<S196>/Constant Value4'
         */
        ICSR_ac_B.LeICSR_r_NiCL_TaGain_Pre = 0.0F;

        /* Merge: '<S191>/Merge5' incorporates:
         *  Constant: '<S196>/Constant Value5'
         */
        ICSR_ac_B.LeICSR_r_NiCL_TbGain_Pre = 0.0F;

        /* Merge: '<S191>/Merge8' incorporates:
         *  Lookup_n-D: '<S261>/Vector'
         *  Product: '<S196>/Product'
         *  SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition'
         */
        ICSR_ac_B.LeICSR_dscl_NiCL_ModeSwtchRmp_P = look2_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeAPSR, rtb_Switch_ak * ICSR_ac_B.Switch_d,
             ((const float32 *)&(KxICSR_dscl_NiCL_DisableRmp[0])), ((const
               float32 *)&(KyICSR_dscl_NiCL_DisableRmp[0])), ((const float32 *)
              &(KtICSR_dscl_NiCL_DisableRmp[0])), ICSR_ac_ConstP.pooled9, 6U);

        /* Merge: '<S191>/Merge11' incorporates:
         *  Constant: '<S196>/Constant Value11'
         */
        ICSR_ac_B.LeICSR_M_NiCL_DLimit_Pre = 0.0F;

        /* Merge: '<S191>/Merge12' incorporates:
         *  Constant: '<S196>/Constant Value10'
         */
        ICSR_ac_B.LeICSR_M_NiCL_DGain_Pre = 0.0F;

        /* Merge: '<S191>/Merge13' incorporates:
         *  Constant: '<S196>/Constant Value6'
         */
        ICSR_ac_B.LeICSR_i_ControlCase_Pre = 7U;

        /* Switch: '<S196>/Switch' incorporates:
         *  Inport: '<Root>/VeESSR_e_EngCntrlMode'
         */
        if (LeICSR_b_Disable_Ni_Global)
        {
            /* Merge: '<S191>/Merge6' incorporates:
             *  Constant: '<S260>/Constant'
             */
            rtb_LeICSR_e_EngCntrlMode_Pre = CeTRAR_e_TorqueMode;
        }
        else
        {
            (void)Rte_Read_VeESSR_e_EngCntrlMode_Value(&tmpRead_5);

            /* Switch: '<S196>/Switch2' incorporates:
             *  Inport: '<Root>/VeESSR_e_EngCntrlMode'
             */
            if (rtb_TmpSignalConversionAtVeES_k)
            {
                /* Merge: '<S191>/Merge6' incorporates:
                 *  Inport: '<Root>/VeESSR_e_EngCntrlMode'
                 */
                rtb_LeICSR_e_EngCntrlMode_Pre = tmpRead_5;
            }
            else
            {
                /* Merge: '<S191>/Merge6' incorporates:
                 *  Constant: '<S259>/Constant'
                 */
                rtb_LeICSR_e_EngCntrlMode_Pre = CeTRAR_e_SpeedMode;
            }

            /* End of Switch: '<S196>/Switch2' */
        }

        /* End of Switch: '<S196>/Switch' */

        /* Merge: '<S191>/Merge7' incorporates:
         *  Constant: '<S196>/Constant Value9'
         */
        ICSR_ac_B.LeICSR_K_NiCL_ITerm_AntiWindUpG = 0.0F;

        /* End of Outputs for SubSystem: '<S191>/ICSC_InptSpdDsbl' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S191>/ICSC_InptSpdCls' incorporates:
         *  ActionPort: '<S195>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S199>/EdgeRising' */
        /* Logic: '<S233>/AND' incorporates:
         *  Logic: '<S233>/OR1'
         *  UnitDelay: '<S233>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeES_k = !ICSR_ac_DW.UnitDelay_DSTATE_cxh;

        /* Update for UnitDelay: '<S233>/Unit Delay' incorporates:
         *  Constant: '<S199>/TRUE Constant1'
         */
        ICSR_ac_DW.UnitDelay_DSTATE_cxh = true;

        /* End of Outputs for SubSystem: '<S199>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S199>/EdgeBi1' */
        /* RelationalOperator: '<S232>/Not Equal' incorporates:
         *  UnitDelay: '<S232>/Unit Delay'
         */
        rtb_AND_gb = (VeICSI_b_STADA_LrnActv != ICSR_ac_DW.UnitDelay_DSTATE_lgd);

        /* Update for UnitDelay: '<S232>/Unit Delay' */
        ICSR_ac_DW.UnitDelay_DSTATE_lgd = VeICSI_b_STADA_LrnActv;

        /* End of Outputs for SubSystem: '<S199>/EdgeBi1' */

        /* Switch: '<S249>/Switch2' incorporates:
         *  Switch: '<S249>/Switch3'
         */
        if (rtb_AND_gb)
        {
            for (i = 0; i < 6; i++)
            {
                /* Switch: '<S251>/Switch1' */
                if (rtb_TmpSignalConversionAtVeHS_h)
                {
                    /* Switch: '<S249>/Switch2' incorporates:
                     *  Constant: '<S231>/Constant Value'
                     *  Switch: '<S251>/Switch1'
                     */
                    rtb_Switch2_g[i] = 0.0F;
                }
                else
                {
                    /* Switch: '<S249>/Switch2' incorporates:
                     *  Switch: '<S251>/Switch1'
                     *  UnitDelay: '<S251>/Unit Delay'
                     */
                    rtb_Switch2_g[i] = ICSR_ac_DW.UnitDelay_DSTATE_nc[i];
                }

                /* End of Switch: '<S251>/Switch1' */
            }

            /* Switch: '<S249>/Switch3' incorporates:
             *  Constant: '<S249>/Constant Value4'
             */
            rtb_TmpSignalConversionAtVeHC_b = 0.0F;
        }
        else
        {
            /* Switch: '<S249>/Switch2' incorporates:
             *  UnitDelay: '<S249>/Unit Delay'
             */
            for (i = 0; i < 6; i++)
            {
                rtb_Switch2_g[i] = ICSR_ac_DW.UnitDelay_DSTATE_liq[i];
            }

            /* Switch: '<S231>/Switch1' incorporates:
             *  Constant: '<S241>/Calib'
             *  Constant: '<S242>/Calib'
             */
            if (VeICSI_b_STADA_LrnActv)
            {
                rtb_Subtraction1_b = KeICSR_t_ClutchLrnCals_BlndIn_Time;
            }
            else
            {
                rtb_Subtraction1_b = KeICSR_t_ClutchLrnCals_BlndOut_Time;
            }

            /* End of Switch: '<S231>/Switch1' */

            /* MinMax: '<S249>/Maximum' incorporates:
             *  Constant: '<S234>/Calib'
             */
            rtb_TmpSignalConversionAtVeHC_b = fmaxf(HeICSR_t_MedTEB_dT,
                rtb_Subtraction1_b);

            /* Outputs for Atomic SubSystem: '<S249>/Protected Division' */
            /* Switch: '<S252>/Switch1' incorporates:
             *  Constant: '<S234>/Calib'
             *  Constant: '<S252>/Constant Value'
             *  Constant: '<S252>/Constant Value1'
             *  Constant: '<S252>/Constant Value2'
             *  Constant: '<S252>/Constant Value3'
             *  Logic: '<S252>/AND'
             *  RelationalOperator: '<S252>/Greater Than or Equal '
             *  RelationalOperator: '<S252>/Greater Than or Equal 1'
             *  RelationalOperator: '<S252>/Not Equal'
             *  RelationalOperator: '<S252>/Not Equal1'
             *  Switch: '<S252>/Switch2'
             *  Switch: '<S252>/Switch3'
             */
            if ((HeICSR_t_MedTEB_dT != 0.0F) && (rtb_TmpSignalConversionAtVeHC_b
                 != 0.0F))
            {
                /* Switch: '<S252>/Switch1' incorporates:
                 *  Product: '<S252>/Division'
                 */
                rtb_TmpSignalConversionAtVeHC_b = HeICSR_t_MedTEB_dT /
                    rtb_TmpSignalConversionAtVeHC_b;
            }
            else if (HeICSR_t_MedTEB_dT > 0.0F)
            {
                /* Switch: '<S252>/Switch2' incorporates:
                 *  Constant: '<S252>/MAXFLOAT'
                 *  Switch: '<S252>/Switch1'
                 */
                rtb_TmpSignalConversionAtVeHC_b = 3.402823466E+38F;
            }
            else if (HeICSR_t_MedTEB_dT < 0.0F)
            {
                /* Switch: '<S252>/Switch3' incorporates:
                 *  Constant: '<S252>/MINFLOAT'
                 *  Switch: '<S252>/Switch1'
                 *  Switch: '<S252>/Switch2'
                 */
                rtb_TmpSignalConversionAtVeHC_b = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S252>/Switch1' incorporates:
                 *  Constant: '<S252>/Constant Value4'
                 *  Switch: '<S252>/Switch2'
                 *  Switch: '<S252>/Switch3'
                 */
                rtb_TmpSignalConversionAtVeHC_b = 0.0F;
            }

            /* End of Switch: '<S252>/Switch1' */
            /* End of Outputs for SubSystem: '<S249>/Protected Division' */

            /* Switch: '<S249>/Switch1' incorporates:
             *  Constant: '<S249>/Constant Value3'
             *  Logic: '<S249>/Logical'
             *  Logic: '<S249>/Logical2'
             *  UnitDelay: '<S249>/Unit Delay1'
             *  UnitDelay: '<S249>/Unit Delay3'
             */
            if ((ICSR_ac_DW.UnitDelay1_DSTATE_d1) &&
                    (!rtb_TmpSignalConversionAtVeES_k))
            {
                rtb_Subtraction1_b = ICSR_ac_DW.UnitDelay3_DSTATE_l;
            }
            else
            {
                rtb_Subtraction1_b = 1.0F;
            }

            /* End of Switch: '<S249>/Switch1' */

            /* Switch: '<S249>/Switch3' incorporates:
             *  Constant: '<S249>/Constant Value2'
             *  MinMax: '<S249>/MinMax'
             *  Sum: '<S249>/Summation1'
             */
            rtb_TmpSignalConversionAtVeHC_b = fminf(rtb_Subtraction1_b +
                rtb_TmpSignalConversionAtVeHC_b, 1.0F);
        }

        /* End of Switch: '<S249>/Switch2' */

        /* Selector: '<S198>/Selector2' incorporates:
         *  Constant: '<S209>/Calib'
         */
        VeICSR_k_NICL_PG = KaICSR_K_NiCL_PGain[(rtb_VariantMerge_For_Variant_p4)];

        /* Product: '<S198>/Multiplication2' */
        VeICSR_k_NICL_PG_NonLinear = ICSR_ac_B.Merge3_p * VeICSR_k_NICL_PG;

        /* Outputs for Atomic SubSystem: '<S198>/GradientLimiter' */
        /* Sum: '<S200>/Sum2' incorporates:
         *  UnitDelay: '<S200>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeBCPR = VeICSR_k_NICL_PG_NonLinear -
            ICSR_ac_DW.UnitDelay_DSTATE_jm;

        /* Outputs for Atomic SubSystem: '<S200>/Limiter' */
        /* Switch: '<S253>/Switch1' incorporates:
         *  Constant: '<S222>/Calib'
         *  RelationalOperator: '<S253>/Relational Operator'
         */
        if (KeICSR_dscl_NiCL_PG_RtLmLU < rtb_TmpSignalConversionAtVeBCPR)
        {
            /* Switch: '<S257>/Switch1' */
            rtb_Subtraction_ab = KeICSR_dscl_NiCL_PG_RtLmLU;
        }
        else
        {
            /* Switch: '<S257>/Switch1' */
            rtb_Subtraction_ab = rtb_TmpSignalConversionAtVeBCPR;
        }

        /* End of Switch: '<S253>/Switch1' */

        /* Switch: '<S253>/Switch' incorporates:
         *  Constant: '<S221>/Calib'
         *  RelationalOperator: '<S253>/Relational Operator1'
         */
        if (rtb_Subtraction_ab <= KeICSR_dscl_NiCL_PG_RtLmLD)
        {
            rtb_Subtraction_ab = KeICSR_dscl_NiCL_PG_RtLmLD;
        }

        /* End of Switch: '<S253>/Switch' */
        /* End of Outputs for SubSystem: '<S200>/Limiter' */

        /* Sum: '<S200>/Sum3' incorporates:
         *  UnitDelay: '<S200>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeBCPR = rtb_Subtraction_ab +
            ICSR_ac_DW.UnitDelay_DSTATE_jm;

        /* Update for UnitDelay: '<S200>/Unit Delay' */
        ICSR_ac_DW.UnitDelay_DSTATE_jm = rtb_TmpSignalConversionAtVeBCPR;

        /* End of Outputs for SubSystem: '<S198>/GradientLimiter' */

        /* Product: '<S198>/Multiplication1' incorporates:
         *  Constant: '<S206>/Calib'
         *  Constant: '<S208>/Calib'
         *  Selector: '<S198>/Selector1'
         */
        VeICSR_k_NICL_IG = HeICSR_t_MedTEB_dT * KaICSR_K_NiCL_IGain
            [(rtb_VariantMerge_For_Variant_p4)];

        /* Outputs for Atomic SubSystem: '<S198>/GradientLimiter1' */
        /* Sum: '<S201>/Sum2' incorporates:
         *  UnitDelay: '<S201>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeAPSR = VeICSR_k_NICL_IG -
            ICSR_ac_DW.UnitDelay_DSTATE_fk;

        /* Outputs for Atomic SubSystem: '<S201>/Limiter' */
        /* Switch: '<S254>/Switch1' incorporates:
         *  Constant: '<S219>/Calib'
         *  RelationalOperator: '<S254>/Relational Operator'
         */
        if (KeICSR_dscl_NiCL_IG_RtLmLU < rtb_TmpSignalConversionAtVeAPSR)
        {
            /* Switch: '<S257>/Switch1' */
            rtb_Subtraction_ab = KeICSR_dscl_NiCL_IG_RtLmLU;
        }
        else
        {
            /* Switch: '<S257>/Switch1' */
            rtb_Subtraction_ab = rtb_TmpSignalConversionAtVeAPSR;
        }

        /* End of Switch: '<S254>/Switch1' */

        /* Switch: '<S254>/Switch' incorporates:
         *  Constant: '<S218>/Calib'
         *  RelationalOperator: '<S254>/Relational Operator1'
         */
        if (rtb_Subtraction_ab <= KeICSR_dscl_NiCL_IG_RtLmLD)
        {
            rtb_Subtraction_ab = KeICSR_dscl_NiCL_IG_RtLmLD;
        }

        /* End of Switch: '<S254>/Switch' */
        /* End of Outputs for SubSystem: '<S201>/Limiter' */

        /* Sum: '<S201>/Sum3' incorporates:
         *  UnitDelay: '<S201>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeAPSR = rtb_Subtraction_ab +
            ICSR_ac_DW.UnitDelay_DSTATE_fk;

        /* Update for UnitDelay: '<S201>/Unit Delay' */
        ICSR_ac_DW.UnitDelay_DSTATE_fk = rtb_TmpSignalConversionAtVeAPSR;

        /* End of Outputs for SubSystem: '<S198>/GradientLimiter1' */

        /* Outputs for Atomic SubSystem: '<S198>/GradientLimiter5' */
        /* Sum: '<S205>/Sum2' incorporates:
         *  Constant: '<S207>/Calib'
         *  Selector: '<S198>/Selector10'
         *  UnitDelay: '<S205>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeOSMR = KaICSR_K_NiCL_DGain
            [(rtb_VariantMerge_For_Variant_p4)] - ICSR_ac_DW.UnitDelay_DSTATE_pq;

        /* Outputs for Atomic SubSystem: '<S205>/Limiter' */
        /* Switch: '<S258>/Switch1' incorporates:
         *  Constant: '<S216>/Calib'
         *  RelationalOperator: '<S258>/Relational Operator'
         */
        if (KeICSR_dscl_NiCL_DG_RtLmLU < rtb_TmpSignalConversionAtVeOSMR)
        {
            /* UnitDelay: '<S204>/Unit Delay' */
            rtb_TmpSignalConversionAtVeOSMR = KeICSR_dscl_NiCL_DG_RtLmLU;
        }

        /* End of Switch: '<S258>/Switch1' */

        /* Switch: '<S258>/Switch' incorporates:
         *  Constant: '<S215>/Calib'
         *  RelationalOperator: '<S258>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeOSMR <= KeICSR_dscl_NiCL_DG_RtLmLD)
        {
            rtb_TmpSignalConversionAtVeOSMR = KeICSR_dscl_NiCL_DG_RtLmLD;
        }

        /* End of Switch: '<S258>/Switch' */
        /* End of Outputs for SubSystem: '<S205>/Limiter' */

        /* Sum: '<S205>/Sum3' incorporates:
         *  UnitDelay: '<S205>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeOSMR += ICSR_ac_DW.UnitDelay_DSTATE_pq;

        /* Update for UnitDelay: '<S205>/Unit Delay' */
        ICSR_ac_DW.UnitDelay_DSTATE_pq = rtb_TmpSignalConversionAtVeOSMR;

        /* End of Outputs for SubSystem: '<S198>/GradientLimiter5' */

        /* Outputs for Atomic SubSystem: '<S198>/GradientLimiter2' */
        /* Sum: '<S202>/Sum2' incorporates:
         *  Constant: '<S212>/Calib'
         *  Selector: '<S198>/Selector6'
         *  UnitDelay: '<S202>/Unit Delay'
         */
        rtb_Subtraction_ab = KaICSR_M_NiCL_PLimit
            [(rtb_VariantMerge_For_Variant_p4)] - ICSR_ac_DW.UnitDelay_DSTATE_hk;

        /* Outputs for Atomic SubSystem: '<S202>/Limiter' */
        /* Switch: '<S255>/Switch1' incorporates:
         *  Constant: '<S223>/Calib'
         *  RelationalOperator: '<S255>/Relational Operator'
         */
        if (KeICSR_dscl_NiCL_PLim_RtLm < rtb_Subtraction_ab)
        {
            /* Switch: '<S257>/Switch1' */
            rtb_Subtraction_ab = KeICSR_dscl_NiCL_PLim_RtLm;
        }

        /* End of Switch: '<S255>/Switch1' */

        /* Switch: '<S255>/Switch' incorporates:
         *  Constant: '<S223>/Calib'
         *  Product: '<S198>/Product'
         *  RelationalOperator: '<S255>/Relational Operator1'
         */
        if (rtb_Subtraction_ab <= (-KeICSR_dscl_NiCL_PLim_RtLm))
        {
            rtb_Subtraction_ab = -KeICSR_dscl_NiCL_PLim_RtLm;
        }

        /* End of Switch: '<S255>/Switch' */
        /* End of Outputs for SubSystem: '<S202>/Limiter' */

        /* Sum: '<S202>/Sum3' incorporates:
         *  UnitDelay: '<S202>/Unit Delay'
         */
        rtb_Maximum_bb = rtb_Subtraction_ab + ICSR_ac_DW.UnitDelay_DSTATE_hk;

        /* Update for UnitDelay: '<S202>/Unit Delay' */
        ICSR_ac_DW.UnitDelay_DSTATE_hk = rtb_Maximum_bb;

        /* End of Outputs for SubSystem: '<S198>/GradientLimiter2' */

        /* Outputs for Atomic SubSystem: '<S198>/GradientLimiter3' */
        /* Sum: '<S203>/Sum2' incorporates:
         *  Constant: '<S211>/Calib'
         *  Selector: '<S198>/Selector3'
         *  UnitDelay: '<S203>/Unit Delay'
         */
        rtb_Subtraction_ab = KaICSR_M_NiCL_ILimit
            [(rtb_VariantMerge_For_Variant_p4)] - ICSR_ac_DW.UnitDelay_DSTATE_cx;

        /* Outputs for Atomic SubSystem: '<S203>/Limiter' */
        /* Switch: '<S256>/Switch1' incorporates:
         *  Constant: '<S220>/Calib'
         *  RelationalOperator: '<S256>/Relational Operator'
         */
        if (KeICSR_dscl_NiCL_ILim_RtLm < rtb_Subtraction_ab)
        {
            /* Switch: '<S257>/Switch1' */
            rtb_Subtraction_ab = KeICSR_dscl_NiCL_ILim_RtLm;
        }

        /* End of Switch: '<S256>/Switch1' */

        /* Switch: '<S256>/Switch' incorporates:
         *  Constant: '<S220>/Calib'
         *  Product: '<S198>/Product1'
         *  RelationalOperator: '<S256>/Relational Operator1'
         */
        if (rtb_Subtraction_ab <= (-KeICSR_dscl_NiCL_ILim_RtLm))
        {
            rtb_Subtraction_ab = -KeICSR_dscl_NiCL_ILim_RtLm;
        }

        /* End of Switch: '<S256>/Switch' */
        /* End of Outputs for SubSystem: '<S203>/Limiter' */

        /* Sum: '<S203>/Sum3' incorporates:
         *  UnitDelay: '<S203>/Unit Delay'
         */
        rtb_Subtraction1_b = rtb_Subtraction_ab + ICSR_ac_DW.UnitDelay_DSTATE_cx;

        /* Update for UnitDelay: '<S203>/Unit Delay' */
        ICSR_ac_DW.UnitDelay_DSTATE_cx = rtb_Subtraction1_b;

        /* End of Outputs for SubSystem: '<S198>/GradientLimiter3' */

        /* Outputs for Atomic SubSystem: '<S198>/GradientLimiter4' */
        /* Sum: '<S204>/Sum2' incorporates:
         *  Constant: '<S210>/Calib'
         *  Selector: '<S198>/Selector9'
         *  UnitDelay: '<S204>/Unit Delay'
         */
        rtb_Subtraction_ab = KaICSR_M_NiCL_DLimit
            [(rtb_VariantMerge_For_Variant_p4)] - ICSR_ac_DW.UnitDelay_DSTATE_lw;

        /* Outputs for Atomic SubSystem: '<S204>/Limiter' */
        /* Switch: '<S257>/Switch1' incorporates:
         *  Constant: '<S217>/Calib'
         *  RelationalOperator: '<S257>/Relational Operator'
         */
        if (KeICSR_dscl_NiCL_DLim_RtLm < rtb_Subtraction_ab)
        {
            /* Switch: '<S257>/Switch1' */
            rtb_Subtraction_ab = KeICSR_dscl_NiCL_DLim_RtLm;
        }

        /* End of Switch: '<S257>/Switch1' */

        /* Switch: '<S257>/Switch' incorporates:
         *  Constant: '<S217>/Calib'
         *  Product: '<S198>/Product2'
         *  RelationalOperator: '<S257>/Relational Operator1'
         */
        if (rtb_Subtraction_ab <= (-KeICSR_dscl_NiCL_DLim_RtLm))
        {
            rtb_Subtraction_ab = -KeICSR_dscl_NiCL_DLim_RtLm;
        }

        /* End of Switch: '<S257>/Switch' */
        /* End of Outputs for SubSystem: '<S204>/Limiter' */

        /* Sum: '<S204>/Sum3' incorporates:
         *  UnitDelay: '<S204>/Unit Delay'
         */
        rtb_Subtraction_ab += ICSR_ac_DW.UnitDelay_DSTATE_lw;

        /* Update for UnitDelay: '<S204>/Unit Delay' */
        ICSR_ac_DW.UnitDelay_DSTATE_lw = rtb_Subtraction_ab;

        /* End of Outputs for SubSystem: '<S198>/GradientLimiter4' */

        /* Switch: '<S231>/Switch' incorporates:
         *  Constant: '<S236>/Calib'
         *  Constant: '<S237>/Calib'
         */
        if (VeICSI_b_STADA_LrnActv)
        {
            rtb_TmpSignalConversionAtVeBCPR = KeICSR_K_NiCL_PGain_STADA;
            rtb_TmpSignalConversionAtVeAPSR = KeICSR_K_NiCL_IGain_STADA;
        }

        /* Sum: '<S249>/Summation' incorporates:
         *  Constant: '<S249>/Constant Value'
         *  Product: '<S249>/Multiplication'
         *  Product: '<S249>/Multiplication3'
         *  Sum: '<S249>/Subtraction'
         */
        rtb_Summation_p5[0] = ((1.0F - rtb_TmpSignalConversionAtVeHC_b) *
                               rtb_Switch2_g[0]) +
            (rtb_TmpSignalConversionAtVeHC_b * rtb_TmpSignalConversionAtVeBCPR);
        rtb_Summation_p5[1] = ((1.0F - rtb_TmpSignalConversionAtVeHC_b) *
                               rtb_Switch2_g[1]) +
            (rtb_TmpSignalConversionAtVeHC_b * rtb_TmpSignalConversionAtVeAPSR);

        /* Switch: '<S231>/Switch' incorporates:
         *  Constant: '<S235>/Calib'
         *  Constant: '<S240>/Calib'
         */
        if (VeICSI_b_STADA_LrnActv)
        {
            rtb_TmpSignalConversionAtVeOSMR = KeICSR_K_NiCL_DGain_STADA;
            rtb_Maximum_bb = KeICSR_M_NiCL_PLimit_STADA;
        }

        /* Sum: '<S249>/Summation' incorporates:
         *  Constant: '<S249>/Constant Value'
         *  Product: '<S249>/Multiplication'
         *  Product: '<S249>/Multiplication3'
         *  Sum: '<S249>/Subtraction'
         */
        rtb_Summation_p5[2] = ((1.0F - rtb_TmpSignalConversionAtVeHC_b) *
                               rtb_Switch2_g[2]) +
            (rtb_TmpSignalConversionAtVeHC_b * rtb_TmpSignalConversionAtVeOSMR);
        rtb_Summation_p5[3] = ((1.0F - rtb_TmpSignalConversionAtVeHC_b) *
                               rtb_Switch2_g[3]) +
            (rtb_TmpSignalConversionAtVeHC_b * rtb_Maximum_bb);

        /* Switch: '<S231>/Switch' incorporates:
         *  Constant: '<S238>/Calib'
         *  Constant: '<S239>/Calib'
         */
        if (VeICSI_b_STADA_LrnActv)
        {
            rtb_Subtraction1_b = KeICSR_M_NiCL_ILimit_STADA;
            rtb_Subtraction_ab = KeICSR_M_NiCL_DLimit_STADA;
        }

        /* Sum: '<S249>/Summation' incorporates:
         *  Constant: '<S249>/Constant Value'
         *  Product: '<S249>/Multiplication'
         *  Product: '<S249>/Multiplication3'
         *  Sum: '<S249>/Subtraction'
         */
        rtb_Summation_p5[4] = ((1.0F - rtb_TmpSignalConversionAtVeHC_b) *
                               rtb_Switch2_g[4]) +
            (rtb_TmpSignalConversionAtVeHC_b * rtb_Subtraction1_b);
        rtb_Summation_p5[5] = ((1.0F - rtb_TmpSignalConversionAtVeHC_b) *
                               rtb_Switch2_g[5]) +
            (rtb_TmpSignalConversionAtVeHC_b * rtb_Subtraction_ab);

        /* Merge: '<S191>/Merge' incorporates:
         *  Gain: '<S243>/Gain'
         */
        ICSR_ac_B.LeICSR_K_NiCL_PGain_Pre = rtb_Summation_p5[0];

        /* Merge: '<S191>/Merge1' incorporates:
         *  Gain: '<S244>/Gain'
         */
        ICSR_ac_B.LeICSR_K_NiCL_IGain_Pre = rtb_Summation_p5[1];

        /* Merge: '<S191>/Merge12' incorporates:
         *  Gain: '<S245>/Gain'
         */
        ICSR_ac_B.LeICSR_M_NiCL_DGain_Pre = rtb_Summation_p5[2];

        /* Merge: '<S191>/Merge2' incorporates:
         *  Gain: '<S246>/Gain'
         */
        ICSR_ac_B.LeICSR_M_NiCL_PLimit_Pre = rtb_Summation_p5[3];

        /* Merge: '<S191>/Merge3' incorporates:
         *  Gain: '<S247>/Gain'
         */
        ICSR_ac_B.LeICSR_M_NiCL_ILimit_Pre = rtb_Summation_p5[4];

        /* Merge: '<S191>/Merge11' incorporates:
         *  Gain: '<S248>/Gain'
         */
        ICSR_ac_B.LeICSR_M_NiCL_DLimit_Pre = rtb_Summation_p5[5];

        /* Merge: '<S191>/Merge8' incorporates:
         *  Constant: '<S213>/Calib'
         *  Selector: '<S198>/Selector4'
         */
        ICSR_ac_B.LeICSR_dscl_NiCL_ModeSwtchRmp_P =
            KaICSR_dscl_NiCL_ModeSwtchRmp[(rtb_VariantMerge_For_Variant_p4)];

        /* Merge: '<S191>/Merge13' incorporates:
         *  Gain: '<S230>/Gain'
         */
        ICSR_ac_B.LeICSR_i_ControlCase_Pre = rtb_VariantMerge_For_Variant_p4;

        /* Merge: '<S191>/Merge7' incorporates:
         *  Constant: '<S214>/Calib'
         */
        ICSR_ac_B.LeICSR_K_NiCL_ITerm_AntiWindUpG =
            KeICSR_K_Ni_I_AntiWindup_Gain;

        /* Merge: '<S191>/Merge4' incorporates:
         *  Inport: '<S195>/NiCL_TaGainIn'
         */
        ICSR_ac_B.LeICSR_r_NiCL_TaGain_Pre = ICSR_ac_B.Merge2_g;

        /* Merge: '<S191>/Merge5' incorporates:
         *  Inport: '<S195>/NiCL_TbGainIn'
         */
        ICSR_ac_B.LeICSR_r_NiCL_TbGain_Pre = ICSR_ac_B.Merge1_n;

        /* Merge: '<S191>/Merge6' incorporates:
         *  Constant: '<S197>/Constant'
         */
        rtb_LeICSR_e_EngCntrlMode_Pre = CeTRAR_e_TorqueMode;

        /* Update for UnitDelay: '<S249>/Unit Delay1' incorporates:
         *  Constant: '<S249>/TRUE Constant'
         */
        ICSR_ac_DW.UnitDelay1_DSTATE_d1 = true;

        /* Update for UnitDelay: '<S249>/Unit Delay3' */
        ICSR_ac_DW.UnitDelay3_DSTATE_l = rtb_TmpSignalConversionAtVeHC_b;
        for (i = 0; i < 6; i++)
        {
            /* Switch: '<S251>/Switch3' */
            if (rtb_TmpSignalConversionAtVeHS_h)
            {
                /* Update for UnitDelay: '<S251>/Unit Delay' incorporates:
                 *  Constant: '<S231>/Constant Value'
                 */
                ICSR_ac_DW.UnitDelay_DSTATE_nc[i] = 0.0F;
            }
            else
            {
                /* Update for UnitDelay: '<S251>/Unit Delay' */
                ICSR_ac_DW.UnitDelay_DSTATE_nc[i] = rtb_Summation_p5[i];
            }

            /* End of Switch: '<S251>/Switch3' */

            /* Update for UnitDelay: '<S249>/Unit Delay' */
            ICSR_ac_DW.UnitDelay_DSTATE_liq[i] = rtb_Switch2_g[i];
        }

        /* End of Outputs for SubSystem: '<S191>/ICSC_InptSpdCls' */
    }

    /* End of If: '<S191>/If' */
    (void)Rte_Read_VeESPR_e_EngineSpeedStatus_Value(&tmpRead_2);
    (void)Rte_Read_VeESPR_b_BuffrCrnkDiagFailing_Value
        (&rtb_LeICSR_b_DsblAnglCntrl_Pre);
    (void)Rte_Read_VeESPR_b_BuffrCrnkPrfrmncFltDtct_Value(&rtb_AND_bb);
    (void)Rte_Read_VeESPR_b_EngineAngle_MCPFA_Value(&rtb_AND_k2);
    (void)Rte_Read_VeESPR_b_EngineSpeed_MCPFA_Value(&rtb_AND_kz);
    (void)Rte_Read_VeESPR_b_EngNegSpdFltDtct_Value(&rtb_AND_gi);
    (void)Rte_Read_VeESPR_b_EngOvrSpdFltDtct_Value(&tmpRead_1);

    /* Outputs for Atomic SubSystem: '<S192>/Signal Latch On' */
    /* Logic: '<S266>/OR2' incorporates:
     *  Constant: '<S265>/Calib'
     *  Inport: '<Root>/VeESPR_b_BuffrCrnkDiagFailing'
     *  Inport: '<Root>/VeESPR_b_BuffrCrnkPrfrmncFltDtct'
     *  Inport: '<Root>/VeESPR_b_EngNegSpdFltDtct'
     *  Inport: '<Root>/VeESPR_b_EngOvrSpdFltDtct'
     *  Inport: '<Root>/VeESPR_b_EngineAngle_MCPFA'
     *  Inport: '<Root>/VeESPR_b_EngineSpeed_MCPFA'
     *  Inport: '<Root>/VeESPR_e_EngineSpeedStatus'
     *  RelationalOperator: '<S192>/Comparison6'
     *  UnitDelay: '<S266>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeES_k = ((VeICSI_n_NiActl >
        KeICSR_n_FirstIdlePstnCntrl) || (ICSR_ac_DW.UnitDelay_DSTATE_nw));

    /* Update for UnitDelay: '<S266>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_nw = rtb_TmpSignalConversionAtVeES_k;

    /* End of Outputs for SubSystem: '<S192>/Signal Latch On' */

    /* Logic: '<S192>/Logical5' incorporates:
     *  Constant: '<S262>/Constant'
     *  Constant: '<S263>/Calib'
     *  Constant: '<S264>/Calib'
     *  Inport: '<Root>/VeESPR_e_EngineSpeedStatus'
     *  Logic: '<S192>/Logical6'
     *  RelationalOperator: '<S192>/Comparison'
     *  RelationalOperator: '<S192>/Comparison5'
     */
    rtb_LeICSR_b_DsblAnglCntrl_Pre = (((((((((((rtb_LeICSR_b_Disable_Ni_Pre ||
        tmpRead_1) || rtb_AND_gi) || rtb_AND_kz) || rtb_AND_k2) || rtb_AND_bb) ||
        rtb_LeICSR_b_DsblAnglCntrl_Pre) || (VeICSI_n_NiActl >
        KeICSR_n_EngSpdPstnCntrl)) || (((uint32)tmpRead_2) !=
        CeESPR_e_EngSpdNormal)) || (!rtb_TmpSignalConversionAtVeES_k)) ||
        (KeICSR_b_DsblPstnCntrl)) || rtb_TmpSignalConversionAtVeI_lx);

    /* VariantMerge generated from: '<S8>/Variant Source15' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_g =
        ICSR_ac_B.LeICSR_r_NiCL_TaGain_Pre;

    /* VariantMerge generated from: '<S8>/Variant Source16' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_d =
        ICSR_ac_B.LeICSR_r_NiCL_TbGain_Pre;

    /* End of Outputs for SubSystem: '<S8>/ICSC_InputSpdCals' */
#else

    /* VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Constant: '<S8>/Constant Value15'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

    /* VariantMerge generated from: '<S8>/Variant Source15' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_g =
        ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

#endif

    /* SignalConversion generated from: '<S8>/Variant Source24' incorporates:
     *  Constant: '<S8>/Constant Value16'
     */
#if Rte_SysCon_Variant_ICSR_5

    /* VariantMerge generated from: '<S8>/Variant Source22' */
    rtb_VariantMerge_For_Variant__i = rtb_LeICSR_b_Disable_Ni_Pre;

#else

    /* VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Constant: '<S8>/Constant Value16'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

    /* VariantMerge generated from: '<S8>/Variant Source16' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_d =
        ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

    /* VariantMerge generated from: '<S8>/Variant Source22' incorporates:
     *  Constant: '<S8>/TRUE Constant2'
     */
    rtb_VariantMerge_For_Variant__i = true;

#endif

    /* SignalConversion generated from: '<S1>/ICSR_b_Disable_Ni' incorporates:
     *  Logic: '<S176>/AND'
     *  Outport: '<Root>/VeICSR_b_Disable_Ni'
     */
    (void)Rte_Write_VeICSR_b_Disable_Ni_Value(rtb_VariantMerge_For_Variant__i);

    /* SignalConversion generated from: '<S8>/Variant Source23' */
#if Rte_SysCon_Variant_ICSR_5

    /* VariantMerge generated from: '<S8>/Variant Source23' */
    ICSR_ac_B.VariantMerge_For_Variant_Sou_gp = rtb_LeICSR_b_DsblAnglCntrl_Pre;

    /* VariantMerge generated from: '<S8>/Variant Source22' */
    rtb_VariantMerge_For_Variant__i = rtb_LeICSR_b_AdvancePrepForIdle;

#else

    /* VariantMerge generated from: '<S8>/Variant Source23' incorporates:
     *  Constant: '<S8>/TRUE Constant3'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sou_gp = true;

#endif

    /* SignalConversion generated from: '<S8>/Variant Source21' */
#if Rte_SysCon_Variant_ICSR_5

    /* VariantMerge generated from: '<S8>/Variant Source21' incorporates:
     *  Merge: '<S191>/Merge6'
     */
    rtb_VariantMerge_For_Variant__b = rtb_LeICSR_e_EngCntrlMode_Pre;

#else

    /* VariantMerge generated from: '<S8>/Variant Source22' incorporates:
     *  Constant: '<S8>/TRUE Constant1'
     */
    rtb_VariantMerge_For_Variant__i = true;

#endif

    /* SignalConversion generated from: '<S8>/Variant Source11' */
#if Rte_SysCon_Variant_ICSR_5

    /* VariantMerge generated from: '<S8>/Variant Source' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i =
        ICSR_ac_B.LeICSR_K_NiCL_PGain_Pre;

#else

    /* VariantMerge generated from: '<S8>/Variant Source21' incorporates:
     *  Constant: '<S183>/Constant'
     */
    rtb_VariantMerge_For_Variant__b = CeTRAR_e_SpeedMode;

    /* VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Constant: '<S8>/Constant Value1'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

#endif

    /* SignalConversion generated from: '<S8>/Variant Source11' */
    VeICSR_K_NiCL_PGain = ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

    /* SignalConversion generated from: '<S8>/Variant Source12' */
#if Rte_SysCon_Variant_ICSR_5

    /* VariantMerge generated from: '<S8>/Variant Source' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i =
        ICSR_ac_B.LeICSR_K_NiCL_IGain_Pre;

#else

    /* VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Constant: '<S8>/Constant Value12'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

#endif

    /* SignalConversion generated from: '<S8>/Variant Source12' */
    VeICSR_K_NiCL_IGain = ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

    /* SignalConversion generated from: '<S8>/Variant Source13' */
#if Rte_SysCon_Variant_ICSR_5

    /* VariantMerge generated from: '<S8>/Variant Source' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i =
        ICSR_ac_B.LeICSR_M_NiCL_PLimit_Pre;

#else

    /* VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Constant: '<S8>/Constant Value13'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

#endif

    /* SignalConversion generated from: '<S8>/Variant Source13' */
    VeICSR_M_NiCL_PLimit = ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

    /* SignalConversion generated from: '<S8>/Variant Source14' */
#if Rte_SysCon_Variant_ICSR_5

    /* VariantMerge generated from: '<S8>/Variant Source' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i =
        ICSR_ac_B.LeICSR_M_NiCL_ILimit_Pre;

#else

    /* VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Constant: '<S8>/Constant Value14'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

#endif

    /* SignalConversion generated from: '<S8>/Variant Source14' */
    VeICSR_M_NiCL_ILimit = ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

    /* SignalConversion generated from: '<S8>/Variant Source17' */
#if Rte_SysCon_Variant_ICSR_5

    /* VariantMerge generated from: '<S8>/Variant Source' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i =
        ICSR_ac_B.LeICSR_M_NiCL_DLimit_Pre;

#else

    /* VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Constant: '<S8>/Constant Value17'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

#endif

    /* SignalConversion generated from: '<S8>/Variant Source17' */
    VeICSR_M_NiCL_DLimit = ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

    /* SignalConversion generated from: '<S8>/Variant Source18' */
#if Rte_SysCon_Variant_ICSR_5

    /* VariantMerge generated from: '<S8>/Variant Source' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i =
        ICSR_ac_B.LeICSR_dscl_NiCL_ModeSwtchRmp_P;

#else

    /* VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Constant: '<S8>/Constant Value18'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

#endif

    /* SignalConversion generated from: '<S8>/Variant Source18' */
    VeICSR_dscl_NiCL_ModeSwtchRmp = ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

    /* SignalConversion generated from: '<S8>/Variant Source19' */
#if Rte_SysCon_Variant_ICSR_5

    /* VariantMerge generated from: '<S8>/Variant Source' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i =
        ICSR_ac_B.LeICSR_M_NiCL_DGain_Pre;

#else

    /* VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Constant: '<S8>/Constant Value19'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

#endif

    /* SignalConversion generated from: '<S8>/Variant Source19' */
    VeICSR_M_NiCL_DGain = ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

    /* SignalConversion generated from: '<S8>/Variant Source1' */
#if Rte_SysCon_Variant_ICSR_4

    /* VariantMerge generated from: '<S8>/Variant Source' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i =
        ICSR_ac_B.LeICSR_K_NxCL_IGain_Pre;

#else

    /* VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Constant: '<S8>/Constant Value2'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

#endif

    /* SignalConversion generated from: '<S8>/Variant Source1' */
    VeICSR_K_NxCL_IGain = ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

    /* SignalConversion generated from: '<S8>/Variant Source20' */
#if Rte_SysCon_Variant_ICSR_5

    /* VariantMerge generated from: '<S8>/Variant Source20' */
    ICSR_ac_B.VariantMerge_For_Variant_Sou_hk =
        ICSR_ac_B.LeICSR_i_ControlCase_Pre;

#else

    /* VariantMerge generated from: '<S8>/Variant Source20' incorporates:
     *  Constant: '<S8>/Constant Value20'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sou_hk = 7U;

#endif

    /* SignalConversion generated from: '<S8>/Variant Source20' */
    VeICSR_i_ControlCase = ICSR_ac_B.VariantMerge_For_Variant_Sou_hk;

    /* SignalConversion generated from: '<S8>/Variant Source25' */
#if Rte_SysCon_Variant_ICSR_5

    /* VariantMerge generated from: '<S8>/Variant Source' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i =
        ICSR_ac_B.LeICSR_K_NiCL_ITerm_AntiWindUpG;

#else

    /* VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Constant: '<S8>/Constant Value21'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

#endif

    /* SignalConversion generated from: '<S8>/Variant Source25' */
    VeICSR_K_NiCL_I_AntiWindUp_Gain = ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

    /* SignalConversion generated from: '<S8>/Variant Source2' */
#if Rte_SysCon_Variant_ICSR_4

    /* VariantMerge generated from: '<S8>/Variant Source' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i =
        ICSR_ac_B.LeICSR_M_NxCL_PLimit_Pre;

#else

    /* VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Constant: '<S8>/Constant Value10'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

#endif

    /* SignalConversion generated from: '<S8>/Variant Source2' */
    VeICSR_M_NxCL_PLimit = ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

    /* SignalConversion generated from: '<S8>/Variant Source3' */
#if Rte_SysCon_Variant_ICSR_4

    /* VariantMerge generated from: '<S8>/Variant Source' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i =
        ICSR_ac_B.LeICSR_M_NxCL_ILimit_Pre;

#else

    /* VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Constant: '<S8>/Constant Value11'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

#endif

    /* SignalConversion generated from: '<S8>/Variant Source3' */
    VeICSR_M_NxCL_ILimit = ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

    /* SignalConversion generated from: '<S8>/Variant Source6' */
#if Rte_SysCon_Variant_ICSR_4

    /* VariantMerge generated from: '<S8>/Variant Source' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i =
        ICSR_ac_B.LeICSR_dscl_NxCL_ModeSwtchRmp_P;

#else

    /* VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Constant: '<S8>/Constant Value5'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

#endif

    /* SignalConversion generated from: '<S8>/Variant Source6' */
    VeICSR_dscl_NxCL_ModeSwtchRmp = ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

    /* SignalConversion generated from: '<S8>/Variant Source7' */
#if Rte_SysCon_Variant_ICSR_4

    /* VariantMerge generated from: '<S8>/Variant Source' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i =
        ICSR_ac_B.LeICSR_K_NxCL_DGain_Pre;

#else

    /* VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Constant: '<S8>/Constant Value6'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

#endif

    /* SignalConversion generated from: '<S8>/Variant Source7' */
    VeICSR_K_NxCL_DGain = ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

    /* SignalConversion generated from: '<S8>/Variant Source8' */
#if Rte_SysCon_Variant_ICSR_4

    /* VariantMerge generated from: '<S8>/Variant Source' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i =
        ICSR_ac_B.LeICSR_M_NxCL_DLimit_Pre;

#else

    /* VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Constant: '<S8>/Constant Value7'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

#endif

    /* SignalConversion generated from: '<S8>/Variant Source8' */
    VeICSR_M_NxCL_DLimit = ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

    /* SignalConversion generated from: '<S8>/Variant Source9' */
#if Rte_SysCon_Variant_ICSR_4

    /* VariantMerge generated from: '<S8>/Variant Source' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i =
        ICSR_ac_B.LeICSR_K_NxCL_I_Anti_Windup_Gai;

#else

    /* VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Constant: '<S8>/Constant Value8'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

#endif

    /* SignalConversion generated from: '<S8>/Variant Source9' */
    VeICSR_K_NxCL_I_Anti_Windup_Gain = ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

    /* SignalConversion generated from: '<S8>/Variant Source' */
#if Rte_SysCon_Variant_ICSR_4

    /* VariantMerge generated from: '<S8>/Variant Source' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i =
        ICSR_ac_B.LeICSR_K_NxCL_PGain_Pre;

#else

    /* VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Constant: '<S8>/Constant Value'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

#endif

    /* SignalConversion generated from: '<S8>/Variant Source' */
    VeICSR_K_NxCL_PGain = ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

#if Rte_SysCon_Variant_ICSR_4

    /* Update for Atomic SubSystem: '<S8>/ICSC_Nx_Cals' */
    /* Update for UnitDelay: '<S185>/Unit Delay1' */
    ICSR_ac_DW.UnitDelay1_DSTATE_mj = rtb_Logical2_ls;

    /* Update for UnitDelay: '<S185>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_j0 = rtb_Switch_k3;

    /* End of Update for SubSystem: '<S8>/ICSC_Nx_Cals' */
#endif

#if Rte_SysCon_Variant_ICSR_5

    /* Update for Atomic SubSystem: '<S8>/ICSC_InputSpdCals' */
    /* Update for UnitDelay: '<S270>/Unit Delay' incorporates:
     *  SignalConversion generated from: '<S1>/VeHSER_e_RngEqnSel'
     */
    ICSR_ac_DW.UnitDelay_DSTATE_csg = rtb_TmpSignalConversionAtVeHS_p;

    /* Update for UnitDelay: '<S191>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_cp = rtb_LeICSR_b_Disable_Ni_Pre;

    /* Update for UnitDelay: '<S191>/Unit Delay1' */
    ICSR_ac_DW.UnitDelay1_DSTATE_i1 = rtb_Switch_ak;

    /* End of Update for SubSystem: '<S8>/ICSC_InputSpdCals' */
#endif

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ICSC_NiCL_CalcErr'
     */
    /* Logic: '<S828>/Logical2' incorporates:
     *  Constant: '<S856>/Calib'
     */
    rtb_Logical2_ls = (rtb_TmpSignalConversionAtVeES_d &&
                       (KeICSR_b_EnblNiProfSelc4StrtStp));

    /* Outputs for Atomic SubSystem: '<S828>/EdgeBi' */
    /* RelationalOperator: '<S854>/Not Equal' incorporates:
     *  UnitDelay: '<S854>/Unit Delay'
     */
    rtb_LeICSR_b_DsblAnglCntrl_Pre = (rtb_Logical2_ls !=
        ICSR_ac_DW.UnitDelay_DSTATE_pg);

    /* Update for UnitDelay: '<S854>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_pg = rtb_Logical2_ls;

    /* End of Outputs for SubSystem: '<S828>/EdgeBi' */

    /* Switch: '<S853>/Switch2' incorporates:
     *  Switch: '<S853>/Switch3'
     */
    if (rtb_LeICSR_b_DsblAnglCntrl_Pre)
    {
        /* Switch: '<S853>/Switch2' incorporates:
         *  UnitDelay: '<S828>/Unit Delay'
         */
        rtb_Switch_k3 = ICSR_ac_DW.UnitDelay_DSTATE_kl;

        /* Switch: '<S853>/Switch3' incorporates:
         *  Constant: '<S853>/Constant Value4'
         */
        rtb_Switch_ak = 0.0F;
    }
    else
    {
        /* Switch: '<S853>/Switch2' incorporates:
         *  UnitDelay: '<S853>/Unit Delay'
         */
        rtb_Switch_k3 = ICSR_ac_DW.UnitDelay_DSTATE_ar;

        /* MinMax: '<S853>/Maximum' incorporates:
         *  Constant: '<S855>/Calib'
         *  Constant: '<S857>/Calib'
         */
        rtb_Switch_ak = fmaxf(HeICSR_t_MedTEB_dT, KeICSR_t_InSpdProfile_BlndTm);

        /* Outputs for Atomic SubSystem: '<S853>/Protected Division1' */
        /* Switch: '<S858>/Switch1' incorporates:
         *  Constant: '<S855>/Calib'
         *  Constant: '<S858>/Constant Value'
         *  Constant: '<S858>/Constant Value1'
         *  Constant: '<S858>/Constant Value2'
         *  Constant: '<S858>/Constant Value3'
         *  Logic: '<S858>/AND'
         *  RelationalOperator: '<S858>/Greater Than or Equal '
         *  RelationalOperator: '<S858>/Greater Than or Equal 1'
         *  RelationalOperator: '<S858>/Not Equal'
         *  RelationalOperator: '<S858>/Not Equal1'
         *  Switch: '<S858>/Switch2'
         *  Switch: '<S858>/Switch3'
         */
        if ((HeICSR_t_MedTEB_dT != 0.0F) && (rtb_Switch_ak != 0.0F))
        {
            /* Switch: '<S858>/Switch1' incorporates:
             *  Product: '<S858>/Division'
             */
            rtb_Switch_ak = HeICSR_t_MedTEB_dT / rtb_Switch_ak;
        }
        else if (HeICSR_t_MedTEB_dT > 0.0F)
        {
            /* Switch: '<S858>/Switch2' incorporates:
             *  Constant: '<S858>/MAXFLOAT'
             *  Switch: '<S858>/Switch1'
             */
            rtb_Switch_ak = 3.402823466E+38F;
        }
        else if (HeICSR_t_MedTEB_dT < 0.0F)
        {
            /* Switch: '<S858>/Switch3' incorporates:
             *  Constant: '<S858>/MINFLOAT'
             *  Switch: '<S858>/Switch1'
             *  Switch: '<S858>/Switch2'
             */
            rtb_Switch_ak = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S858>/Switch1' incorporates:
             *  Constant: '<S858>/Constant Value4'
             *  Switch: '<S858>/Switch2'
             *  Switch: '<S858>/Switch3'
             */
            rtb_Switch_ak = 0.0F;
        }

        /* End of Switch: '<S858>/Switch1' */
        /* End of Outputs for SubSystem: '<S853>/Protected Division1' */

        /* Switch: '<S853>/Switch1' incorporates:
         *  Constant: '<S853>/Constant Value3'
         *  UnitDelay: '<S853>/Unit Delay1'
         *  UnitDelay: '<S853>/Unit Delay3'
         */
        if (ICSR_ac_DW.UnitDelay1_DSTATE_h2)
        {
            rtb_Subtraction1_b = ICSR_ac_DW.UnitDelay3_DSTATE_ey;
        }
        else
        {
            rtb_Subtraction1_b = 1.0F;
        }

        /* End of Switch: '<S853>/Switch1' */

        /* Switch: '<S853>/Switch3' incorporates:
         *  Constant: '<S853>/Constant Value2'
         *  MinMax: '<S853>/MinMax'
         *  Sum: '<S853>/Summation1'
         */
        rtb_Switch_ak = fminf(rtb_Subtraction1_b + rtb_Switch_ak, 1.0F);
    }

    /* End of Switch: '<S853>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/ICSR_MedTEB' */

    /* Inport: '<Root>/VeHSER_n_InputSpeedProfile' */
    (void)Rte_Read_VeHSER_n_InputSpeedProfile_Value(&rtb_LeICSR_n_2NiErrBefDb2);

    /* Inport: '<Root>/VeHSER_n_InputSpeedProfSmthDly' */
    (void)Rte_Read_VeHSER_n_InputSpeedProfSmthDly_Value(&rtb_Negation_j);

    /* Outputs for Function Call SubSystem: '<Root>/ICSR_MedTEB' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ICSC_NiCL_CalcErr'
     */
    /* Switch: '<S828>/Switch10' */
    if (rtb_Logical2_ls)
    {
        rtb_Negation_j = rtb_LeICSR_n_2NiErrBefDb2;
    }

    /* End of Switch: '<S828>/Switch10' */

    /* Sum: '<S853>/Summation' incorporates:
     *  Constant: '<S853>/Constant Value'
     *  Product: '<S853>/Multiplication'
     *  Product: '<S853>/Multiplication3'
     *  Sum: '<S853>/Subtraction'
     */
    VeICSR_n_InputSpeedProf_PostFilt = ((1.0F - rtb_Switch_ak) * rtb_Switch_k3)
        + (rtb_Switch_ak * rtb_Negation_j);

    /* Outputs for Atomic SubSystem: '<S11>/StateOfTheArt_AHSC' */
    /* Outputs for Atomic SubSystem: '<S834>/Digital Lowpass Reset Enabled' */
    /* Switch: '<S840>/Switch1' incorporates:
     *  Constant: '<S842>/Calib'
     *  Product: '<S840>/Multiplication'
     *  Sum: '<S840>/Subtraction'
     *  Sum: '<S840>/Summation'
     *  UnitDelay: '<S840>/Unit Delay'
     */
    VeICSR_n_InSpdRaw_EngRunning_DriveKalman = ((VeICSI_n_NiActl -
        ICSR_ac_DW.UnitDelay_DSTATE_pv) * KeICSR_K_InSpdGain1) +
        ICSR_ac_DW.UnitDelay_DSTATE_pv;

    /* Update for UnitDelay: '<S840>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_pv = VeICSR_n_InSpdRaw_EngRunning_DriveKalman;

    /* End of Outputs for SubSystem: '<S834>/Digital Lowpass Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S834>/Digital Lowpass Reset Enabled1' */
    /* Switch: '<S841>/Switch1' incorporates:
     *  Constant: '<S843>/Calib'
     *  Product: '<S841>/Multiplication'
     *  Sum: '<S841>/Subtraction'
     *  Sum: '<S841>/Summation'
     *  UnitDelay: '<S841>/Unit Delay'
     */
    VeICSR_n_InSpdRaw_EngRunning_ReverseKalman = ((VeICSI_n_NiActl -
        ICSR_ac_DW.UnitDelay_DSTATE_kv) * KeICSR_K_InSpdGain1r) +
        ICSR_ac_DW.UnitDelay_DSTATE_kv;

    /* Update for UnitDelay: '<S841>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_kv = VeICSR_n_InSpdRaw_EngRunning_ReverseKalman;

    /* End of Outputs for SubSystem: '<S834>/Digital Lowpass Reset Enabled1' */

    /* If: '<S827>/If' incorporates:
     *  Constant: '<S829>/Constant'
     *  Constant: '<S830>/Constant'
     *  Logic: '<S827>/Logical1'
     *  RelationalOperator: '<S827>/Comparison1'
     *  RelationalOperator: '<S827>/Comparison4'
     *  SignalConversion generated from: '<S838>/Gain'
     *  SignalConversion generated from: '<S839>/Gain'
     */
    if ((((uint32)rtb_TmpSignalConversionAtVeES_p) == CeESSR_e_SpinUpAutoStrtSt)
        || (((uint32)rtb_TmpSignalConversionAtVeES_p) == CeESSR_e_RampDownSt))
    {
        /* Outputs for IfAction SubSystem: '<S827>/IfActionSubsystem' incorporates:
         *  ActionPort: '<S832>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S827>/EngSS_State_PT' */
        ICSR_ac_IfActionSubsystem(VeICSI_n_NiActl, VeICSI_n_NiActl,
            (&(VeICSR_n_2ActualtoControlSpd2)),
            (&(VeICSR_n_2ActualtoControlSpd_rev2)));

        /* End of Outputs for SubSystem: '<S827>/EngSS_State_PT' */
        /* End of Outputs for SubSystem: '<S827>/IfActionSubsystem' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S827>/IfActionSubsystem1' incorporates:
         *  ActionPort: '<S833>/Action Port'
         */
        ICSR_ac_IfActionSubsystem(VeICSR_n_InSpdRaw_EngRunning_DriveKalman,
            VeICSR_n_InSpdRaw_EngRunning_ReverseKalman,
            (&(VeICSR_n_2ActualtoControlSpd2)),
            (&(VeICSR_n_2ActualtoControlSpd_rev2)));

        /* End of Outputs for SubSystem: '<S827>/IfActionSubsystem1' */
    }

    /* End of If: '<S827>/If' */

    /* RelationalOperator: '<S837>/Comparison3' incorporates:
     *  Constant: '<S844>/Constant'
     */
    rtb_Logical2_ls = (((uint32)rtb_TmpSignalConversionAtVeTRGR) ==
                       CeTRGR_e_TransRangeReverse);

    /* Sum: '<S837>/Subtraction' */
    rtb_LeICSR_n_2NiErrBefDb2 = VeICSR_n_InputSpeedProf_PostFilt -
        VeICSR_n_2ActualtoControlSpd2;

    /* Outputs for Atomic SubSystem: '<S837>/DeadBand' */
    /* Switch: '<S845>/Switch1' incorporates:
     *  Constant: '<S847>/Calib'
     *  Gain: '<S837>/Negation'
     *  RelationalOperator: '<S845>/Greater  Than'
     *  RelationalOperator: '<S845>/Greater  Than1'
     *  Switch: '<S845>/Switch2'
     */
    if (rtb_LeICSR_n_2NiErrBefDb2 >= KeICSR_n_NiCtlDeadBnd)
    {
        /* Switch: '<S845>/Switch1' incorporates:
         *  Sum: '<S845>/Subtraction'
         */
        VeICSR_n_2NiErr_Raw2 = rtb_LeICSR_n_2NiErrBefDb2 - KeICSR_n_NiCtlDeadBnd;
    }
    else if (rtb_LeICSR_n_2NiErrBefDb2 <= (-KeICSR_n_NiCtlDeadBnd))
    {
        /* Switch: '<S845>/Switch2' incorporates:
         *  Gain: '<S837>/Negation'
         *  Sum: '<S845>/Subtraction1'
         *  Switch: '<S845>/Switch1'
         */
        VeICSR_n_2NiErr_Raw2 = rtb_LeICSR_n_2NiErrBefDb2 -
            (-KeICSR_n_NiCtlDeadBnd);
    }
    else
    {
        /* Switch: '<S845>/Switch1' incorporates:
         *  Constant: '<S845>/Constant Value'
         *  Switch: '<S845>/Switch2'
         */
        VeICSR_n_2NiErr_Raw2 = 0.0F;
    }

    /* End of Switch: '<S845>/Switch1' */
    /* End of Outputs for SubSystem: '<S837>/DeadBand' */

    /* Sum: '<S837>/Subtraction1' */
    rtb_LeICSR_n_2NiErrBefDb2 = VeICSR_n_InputSpeedProf_PostFilt -
        VeICSR_n_2ActualtoControlSpd_rev2;

    /* Outputs for Atomic SubSystem: '<S837>/DeadBand1' */
    /* Switch: '<S846>/Switch1' incorporates:
     *  Constant: '<S848>/Calib'
     *  Gain: '<S837>/Negation1'
     *  RelationalOperator: '<S846>/Greater  Than'
     *  RelationalOperator: '<S846>/Greater  Than1'
     *  Switch: '<S846>/Switch2'
     */
    if (rtb_LeICSR_n_2NiErrBefDb2 >= KeICSR_n_NiCtlDeadBndr)
    {
        /* Switch: '<S846>/Switch1' incorporates:
         *  Sum: '<S846>/Subtraction'
         */
        VeICSR_n_2NiErr_Rev2 = rtb_LeICSR_n_2NiErrBefDb2 -
            KeICSR_n_NiCtlDeadBndr;
    }
    else if (rtb_LeICSR_n_2NiErrBefDb2 <= (-KeICSR_n_NiCtlDeadBndr))
    {
        /* Switch: '<S846>/Switch2' incorporates:
         *  Gain: '<S837>/Negation1'
         *  Sum: '<S846>/Subtraction1'
         *  Switch: '<S846>/Switch1'
         */
        VeICSR_n_2NiErr_Rev2 = rtb_LeICSR_n_2NiErrBefDb2 -
            (-KeICSR_n_NiCtlDeadBndr);
    }
    else
    {
        /* Switch: '<S846>/Switch1' incorporates:
         *  Constant: '<S846>/Constant Value'
         *  Switch: '<S846>/Switch2'
         */
        VeICSR_n_2NiErr_Rev2 = 0.0F;
    }

    /* End of Switch: '<S846>/Switch1' */
    /* End of Outputs for SubSystem: '<S837>/DeadBand1' */

    /* Switch: '<S837>/Switch' */
    if (rtb_Logical2_ls)
    {
        /* Switch: '<S837>/Switch' */
        ICSR_ac_B.Switch_d = VeICSR_n_2NiErr_Rev2;
    }
    else
    {
        /* Switch: '<S837>/Switch' */
        ICSR_ac_B.Switch_d = VeICSR_n_2NiErr_Raw2;
    }

    /* End of Switch: '<S837>/Switch' */

    /* Switch: '<S837>/Switch1' incorporates:
     *  Logic: '<S837>/Logical3'
     */
    if (LeICSR_b_Disable_Ni_Global || rtb_TmpSignalConversionAtVeI_lx)
    {
        /* Switch: '<S837>/Switch1' incorporates:
         *  Constant: '<S837>/Constant Value2'
         */
        VeICSR_n_NiErrOut = 0.0F;
    }
    else
    {
        /* Switch: '<S837>/Switch1' */
        VeICSR_n_NiErrOut = ICSR_ac_B.Switch_d;
    }

    /* End of Switch: '<S837>/Switch1' */
    /* End of Outputs for SubSystem: '<S11>/StateOfTheArt_AHSC' */

    /* Update for UnitDelay: '<S828>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_kl = VeICSR_n_InputSpeedProf_PostFilt;

    /* Update for UnitDelay: '<S853>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_ar = rtb_Switch_k3;

    /* Update for UnitDelay: '<S853>/Unit Delay3' */
    ICSR_ac_DW.UnitDelay3_DSTATE_ey = rtb_Switch_ak;

    /* Update for UnitDelay: '<S853>/Unit Delay1' incorporates:
     *  Constant: '<S853>/Constant Value5'
     */
    ICSR_ac_DW.UnitDelay1_DSTATE_h2 = true;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ICSC_Nx_CalcErr'
     */
    /* Sum: '<S863>/Subtraction' */
    VeICSR_n_NxErr_Raw = rtb_TmpSignalConversionAtVeHSER -
        ICSR_ac_B.VariantMerge_For_Variant_Sour_h;

    /* UnitDelay: '<S864>/Unit Delay' */
    rtb_Negation_j = ICSR_ac_DW.UnitDelay_DSTATE_mt;

    /* UnitDelay: '<S864>/Unit Delay3' */
    rtb_Switch_k3 = ICSR_ac_DW.UnitDelay3_DSTATE_ek;

    /* UnitDelay: '<S864>/Unit Delay1' */
    rtb_Switch_ak = ICSR_ac_DW.UnitDelay1_DSTATE_fx;

    /* UnitDelay: '<S864>/Unit Delay2' */
    rtb_TmpSignalConversionAtVeHC_b = ICSR_ac_DW.UnitDelay2_DSTATE_j4;

    /* If: '<S864>/If1' incorporates:
     *  Logic: '<S863>/Logical3'
     */
    if ((VeICSR_b_Disable_Nx) || rtb_TmpSignalConversionAtVeI_lx)
    {
        /* Outputs for IfAction SubSystem: '<S864>/Reset_TF' incorporates:
         *  ActionPort: '<S873>/Resets'
         */
        /* Merge: '<S864>/Merge' incorporates:
         *  Constant: '<S873>/Constant Value'
         *  SignalConversion generated from: '<S873>/Out1'
         */
        rtb_TmpSignalConversionAtVeESMR = 0.0F;

        /* Merge: '<S864>/Merge5' incorporates:
         *  Constant: '<S873>/Constant Value1'
         *  SignalConversion generated from: '<S873>/Out2'
         */
        rtb_TmpSignalConversionAtVeBCPR = 0.0F;

        /* End of Outputs for SubSystem: '<S864>/Reset_TF' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S864>/Calc_TF' incorporates:
         *  ActionPort: '<S872>/Resets'
         */
        /* Merge: '<S864>/Merge' incorporates:
         *  Inport: '<S872>/In1'
         */
        rtb_TmpSignalConversionAtVeESMR = VeICSR_n_NxErr_Raw;

        /* Merge: '<S864>/Merge5' incorporates:
         *  Constant: '<S865>/Calib'
         *  Constant: '<S866>/Calib'
         *  Constant: '<S867>/Calib'
         *  Constant: '<S868>/Calib'
         *  Constant: '<S869>/Calib'
         *  Constant: '<S870>/Calib'
         *  Constant: '<S871>/Calib'
         *  Inport: '<S872>/In3'
         *  Product: '<S864>/Multiplication'
         *  Product: '<S864>/Multiplication1'
         *  Product: '<S864>/Multiplication2'
         *  Product: '<S864>/Multiplication3'
         *  Product: '<S864>/Multiplication4'
         *  Product: '<S864>/Multiplication5'
         *  Product: '<S864>/Multiplication6'
         *  Sum: '<S864>/Summation'
         *  UnitDelay: '<S864>/Unit Delay'
         *  UnitDelay: '<S864>/Unit Delay1'
         *  UnitDelay: '<S864>/Unit Delay2'
         *  UnitDelay: '<S864>/Unit Delay3'
         *  UnitDelay: '<S864>/Unit Delay4'
         *  UnitDelay: '<S864>/Unit Delay5'
         */
        rtb_TmpSignalConversionAtVeBCPR = ((((((VeICSR_n_NxErr_Raw *
            KeICSR_K_NxCLFilterN3) + (ICSR_ac_DW.UnitDelay_DSTATE_mt *
            KeICSR_K_NxCLFilterN2)) + (ICSR_ac_DW.UnitDelay3_DSTATE_ek *
            KeICSR_K_NxCLFilterN1)) + (ICSR_ac_DW.UnitDelay4_DSTATE *
            KeICSR_K_NxCLFilterN0)) - (ICSR_ac_DW.UnitDelay1_DSTATE_fx *
            KeICSR_K_NxCLFilterD2)) - (ICSR_ac_DW.UnitDelay2_DSTATE_j4 *
            KeICSR_K_NxCLFilterD1)) - (ICSR_ac_DW.UnitDelay5_DSTATE *
            KeICSR_K_NxCLFilterD0);

        /* End of Outputs for SubSystem: '<S864>/Calc_TF' */
    }

    /* End of If: '<S864>/If1' */

    /* Outputs for Atomic SubSystem: '<S12>/DeadBand' */
    /* Switch: '<S860>/Switch1' incorporates:
     *  Constant: '<S861>/Calib'
     *  Gain: '<S12>/Gain'
     *  RelationalOperator: '<S860>/Greater  Than'
     *  RelationalOperator: '<S860>/Greater  Than1'
     *  Switch: '<S860>/Switch2'
     */
    if (rtb_TmpSignalConversionAtVeBCPR >= KeICSR_n_Nx_DeadBand)
    {
        /* Switch: '<S860>/Switch1' incorporates:
         *  Sum: '<S860>/Subtraction'
         */
        VeICSR_n_NxErrAftDdBand = rtb_TmpSignalConversionAtVeBCPR -
            KeICSR_n_Nx_DeadBand;
    }
    else if (rtb_TmpSignalConversionAtVeBCPR <= (-KeICSR_n_Nx_DeadBand))
    {
        /* Switch: '<S860>/Switch2' incorporates:
         *  Gain: '<S12>/Gain'
         *  Sum: '<S860>/Subtraction1'
         *  Switch: '<S860>/Switch1'
         */
        VeICSR_n_NxErrAftDdBand = rtb_TmpSignalConversionAtVeBCPR -
            (-KeICSR_n_Nx_DeadBand);
    }
    else
    {
        /* Switch: '<S860>/Switch1' incorporates:
         *  Constant: '<S860>/Constant Value'
         *  Switch: '<S860>/Switch2'
         */
        VeICSR_n_NxErrAftDdBand = 0.0F;
    }

    /* End of Switch: '<S860>/Switch1' */
    /* End of Outputs for SubSystem: '<S12>/DeadBand' */

    /* Outputs for Atomic SubSystem: '<S12>/DLPRE' */
    /* Switch: '<S859>/Switch1' incorporates:
     *  Lookup_n-D: '<S862>/Vector'
     *  Product: '<S859>/Multiplication'
     *  Sum: '<S859>/Subtraction'
     *  Sum: '<S859>/Summation'
     *  Switch: '<S860>/Switch1'
     *  UnitDelay: '<S859>/Unit Delay'
     */
    VeICSR_n_NxErrFilt = ((VeICSR_n_NxErrAftDdBand -
                           ICSR_ac_DW.UnitDelay_DSTATE_nb) * look1_iflf_binlcapw
                          (VeICSR_n_NxErrAftDdBand, ((const float32 *)
                            &(KxICSR_k_NxErrorFilt[0])), ((const float32 *)
                            &(KtICSR_k_NxErrorFilt[0])), 10U)) +
        ICSR_ac_DW.UnitDelay_DSTATE_nb;

    /* Update for UnitDelay: '<S859>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_nb = VeICSR_n_NxErrFilt;

    /* End of Outputs for SubSystem: '<S12>/DLPRE' */

    /* Update for UnitDelay: '<S864>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_mt = rtb_TmpSignalConversionAtVeESMR;

    /* Update for UnitDelay: '<S864>/Unit Delay3' */
    ICSR_ac_DW.UnitDelay3_DSTATE_ek = rtb_Negation_j;

    /* Update for UnitDelay: '<S864>/Unit Delay4' */
    ICSR_ac_DW.UnitDelay4_DSTATE = rtb_Switch_k3;

    /* Update for UnitDelay: '<S864>/Unit Delay1' */
    ICSR_ac_DW.UnitDelay1_DSTATE_fx = rtb_TmpSignalConversionAtVeBCPR;

    /* Update for UnitDelay: '<S864>/Unit Delay2' */
    ICSR_ac_DW.UnitDelay2_DSTATE_j4 = rtb_Switch_ak;

    /* Update for UnitDelay: '<S864>/Unit Delay5' */
    ICSR_ac_DW.UnitDelay5_DSTATE = rtb_TmpSignalConversionAtVeHC_b;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ICSC_EvalEngCL'
     */
    /* If: '<S606>/If' incorporates:
     *  Abs: '<S579>/Abs'
     *  Abs: '<S605>/Abs'
     *  Abs: '<S607>/Abs'
     *  Abs: '<S619>/Abs1'
     *  Abs: '<S738>/Abs'
     *  Abs: '<S738>/Abs1'
     *  Constant: '<S570>/Constant Value5'
     *  Constant: '<S572>/Constant Value1'
     *  Constant: '<S580>/Constant'
     *  Constant: '<S587>/Calib'
     *  Constant: '<S589>/Constant'
     *  Constant: '<S610>/Calib'
     *  Constant: '<S618>/Constant Value1'
     *  Constant: '<S622>/Constant Value11'
     *  Constant: '<S627>/Calib'
     *  Constant: '<S628>/Calib'
     *  Constant: '<S629>/Calib'
     *  Constant: '<S630>/Constant'
     *  Constant: '<S631>/Calib'
     *  Constant: '<S632>/Constant'
     *  Constant: '<S633>/Constant'
     *  Constant: '<S664>/Constant Value'
     *  Constant: '<S677>/Constant Value4'
     *  Constant: '<S707>/Calib'
     *  DataStoreRead: '<S661>/Dsr_CalSwitchTrig'
     *  DataTypeConversion: '<S605>/Data Type Conversion'
     *  Gain: '<S579>/Gain'
     *  Gain: '<S600>/Gain'
     *  Gain: '<S670>/Negation1'
     *  Gain: '<S676>/Negation1'
     *  Gain: '<S703>/Negation1'
     *  Gain: '<S852>/Gain'
     *  If: '<S704>/CalSelect'
     *  Inport: '<Root>/VeBPCR_T_BatModTmp'
     *  Inport: '<Root>/VeDTRR_e_AxleTrqRespType'
     *  Inport: '<Root>/VeEOCR_b_CatalystWarmupEnabled'
     *  Inport: '<Root>/VeESMR_P_BattLTMaxLim'
     *  Inport: '<Root>/VeESMR_P_BattLTMinLim'
     *  Inport: '<Root>/VeESPR_n_EngSpdMaxLim'
     *  Inport: '<Root>/VeESPR_n_EngSpdMinLim'
     *  Inport: '<Root>/VeHSER_e_RngSt'
     *  Inport: '<Root>/VeOSMR_n_InputSpdMaxM1'
     *  Inport: '<Root>/VeOSMR_n_InputSpdMaxM1_ToilDep'
     *  Inport: '<Root>/VeOSMR_n_InputSpdMaxM2'
     *  Inport: '<Root>/VeOSMR_n_InputSpdMaxM2_ToilDep'
     *  Inport: '<Root>/VeOSMR_n_InputSpdMinM1'
     *  Inport: '<Root>/VeOSMR_n_InputSpdMinM1_ToilDep'
     *  Inport: '<Root>/VeOSMR_n_InputSpdMinM2'
     *  Inport: '<Root>/VeOSMR_n_InputSpdMinM2_ToilDep'
     *  Inport: '<Root>/VeVSDR_n_PrimNoSgndFltrd'
     *  Logic: '<S571>/Logical4'
     *  Logic: '<S600>/Logical Operator'
     *  Logic: '<S605>/Logical2'
     *  Logic: '<S618>/Logical4'
     *  Logic: '<S619>/Logical1'
     *  Logic: '<S619>/Logical3'
     *  Logic: '<S661>/Logical1'
     *  Logic: '<S676>/Logical1'
     *  Logic: '<S738>/Logical Operator1'
     *  Logic: '<S738>/Logical Operator2'
     *  Lookup_n-D: '<S613>/Vector'
     *  Lookup_n-D: '<S614>/Vector'
     *  Lookup_n-D: '<S615>/Vector'
     *  Lookup_n-D: '<S617>/Vector'
     *  Lookup_n-D: '<S675>/Vector'
     *  Lookup_n-D: '<S692>/Vector'
     *  Lookup_n-D: '<S693>/Vector'
     *  Lookup_n-D: '<S702>/Vector'
     *  MinMax: '<S567>/MinMax'
     *  MinMax: '<S607>/MinMax1'
     *  MinMax: '<S618>/MinMax1'
     *  MinMax: '<S618>/MinMax2'
     *  MinMax: '<S618>/MinMax3'
     *  MinMax: '<S618>/MinMax4'
     *  Product: '<S579>/Multiplication'
     *  Product: '<S607>/Product'
     *  Product: '<S607>/Product1'
     *  Product: '<S654>/Multiplication'
     *  Product: '<S654>/Multiplication3'
     *  Product: '<S657>/Multiplication'
     *  Product: '<S657>/Multiplication3'
     *  Product: '<S660>/Multiplication5'
     *  Product: '<S661>/Multiplication3'
     *  Product: '<S661>/Multiplication7'
     *  Product: '<S663>/Multiplication'
     *  Product: '<S663>/Multiplication2'
     *  Product: '<S663>/Multiplication4'
     *  Product: '<S664>/Product'
     *  Product: '<S664>/Product1'
     *  Product: '<S666>/Multiplication2'
     *  Product: '<S666>/Multiplication3'
     *  Product: '<S666>/Multiplication4'
     *  Product: '<S695>/Multiplication'
     *  Product: '<S695>/Multiplication3'
     *  Product: '<S698>/Multiplication'
     *  Product: '<S698>/Multiplication3'
     *  RelationalOperator: '<S570>/Comparison3'
     *  RelationalOperator: '<S570>/Comparison5'
     *  RelationalOperator: '<S572>/Comparison'
     *  RelationalOperator: '<S572>/Comparison4'
     *  RelationalOperator: '<S600>/Relational Operator'
     *  RelationalOperator: '<S600>/Relational Operator1'
     *  RelationalOperator: '<S606>/Comparison1'
     *  RelationalOperator: '<S606>/Comparison4'
     *  RelationalOperator: '<S619>/Comparison'
     *  RelationalOperator: '<S622>/Equal1'
     *  RelationalOperator: '<S664>/Comparison'
     *  RelationalOperator: '<S738>/Comparison2'
     *  RelationalOperator: '<S738>/Comparison3'
     *  RelationalOperator: '<S738>/Comparison4'
     *  Selector: '<S605>/Selector2'
     *  SignalConversion generated from: '<S1>/VeHSER_e_RngEqnSel'
     *  SignalConversion generated from: '<S9>/Variant Source11'
     *  Sum: '<S579>/Sum2'
     *  Sum: '<S579>/Sum3'
     *  Sum: '<S600>/Add'
     *  Sum: '<S601>/Sum//Sub1'
     *  Sum: '<S605>/Sum1'
     *  Sum: '<S605>/Sum2'
     *  Sum: '<S605>/Sum4'
     *  Sum: '<S607>/Sum1'
     *  Sum: '<S607>/Sum2'
     *  Sum: '<S607>/Sum3'
     *  Sum: '<S654>/Subtraction'
     *  Sum: '<S654>/Summation'
     *  Sum: '<S657>/Subtraction'
     *  Sum: '<S657>/Summation'
     *  Sum: '<S666>/Summation'
     *  Sum: '<S666>/Summation1'
     *  Sum: '<S666>/Summation2'
     *  Sum: '<S695>/Subtraction'
     *  Sum: '<S695>/Summation'
     *  Sum: '<S698>/Subtraction'
     *  Sum: '<S698>/Summation'
     *  Switch: '<S575>/Switch1'
     *  Switch: '<S575>/Switch2'
     *  Switch: '<S582>/Switch1'
     *  Switch: '<S591>/Switch1'
     *  Switch: '<S618>/Switch4'
     *  Switch: '<S618>/Switch5'
     *  Switch: '<S619>/Switch3'
     *  Switch: '<S620>/Switch1'
     *  Switch: '<S621>/Switch6'
     *  Switch: '<S622>/Switch2'
     *  Switch: '<S652>/Switch'
     *  Switch: '<S653>/Switch'
     *  Switch: '<S654>/Switch2'
     *  Switch: '<S654>/Switch3'
     *  Switch: '<S657>/Switch2'
     *  Switch: '<S657>/Switch3'
     *  Switch: '<S664>/Switch'
     *  Switch: '<S676>/Switch'
     *  Switch: '<S676>/Switch2'
     *  Switch: '<S683>/Switch'
     *  Switch: '<S694>/Switch'
     *  Switch: '<S695>/Switch2'
     *  Switch: '<S695>/Switch3'
     *  Switch: '<S698>/Switch2'
     *  Switch: '<S698>/Switch3'
     *  UnitDelay: '<S567>/Unit Delay1'
     *  UnitDelay: '<S569>/Unit Delay1'
     *  UnitDelay: '<S570>/Unit Delay2'
     *  UnitDelay: '<S572>/Unit Delay'
     *  UnitDelay: '<S601>/Unit Delay'
     *  UnitDelay: '<S601>/Unit Delay1'
     *  UnitDelay: '<S607>/Unit Delay'
     *  UnitDelay: '<S652>/Unit Delay'
     *  UnitDelay: '<S653>/Unit Delay'
     *  UnitDelay: '<S654>/Unit Delay'
     *  UnitDelay: '<S654>/Unit Delay1'
     *  UnitDelay: '<S654>/Unit Delay3'
     *  UnitDelay: '<S657>/Unit Delay'
     *  UnitDelay: '<S657>/Unit Delay1'
     *  UnitDelay: '<S657>/Unit Delay3'
     *  UnitDelay: '<S661>/Unit Delay'
     *  UnitDelay: '<S666>/Unit Delay'
     *  UnitDelay: '<S666>/Unit Delay1'
     *  UnitDelay: '<S676>/Unit Delay'
     *  UnitDelay: '<S683>/Unit Delay'
     *  UnitDelay: '<S694>/Unit Delay'
     *  UnitDelay: '<S695>/Unit Delay'
     *  UnitDelay: '<S695>/Unit Delay1'
     *  UnitDelay: '<S695>/Unit Delay3'
     *  UnitDelay: '<S698>/Unit Delay'
     *  UnitDelay: '<S698>/Unit Delay1'
     *  UnitDelay: '<S698>/Unit Delay3'
     */
#if Rte_SysCon_Variant_ICSR_5

    /* Outputs for Atomic SubSystem: '<S601>/Limiter1' */
    /* Outputs for Atomic SubSystem: '<S663>/GradientLimiter' */
    /* Outputs for Atomic SubSystem: '<S703>/Limiter1' */
    /* Outputs for Atomic SubSystem: '<S661>/GradientLimiter1' */
    /* Outputs for Atomic SubSystem: '<S677>/EdgeRising2' */
    /* Outputs for Atomic SubSystem: '<S677>/EdgeBi1' */
    /* Outputs for Atomic SubSystem: '<S677>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S677>/EdgeBi2' */
    /* Outputs for Atomic SubSystem: '<S676>/GradientLimiter' */
    /* Outputs for Atomic SubSystem: '<S602>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S602>/LOWR' */
    /* Outputs for Atomic SubSystem: '<S738>/EdgeRising1' */
    /* Outputs for Atomic SubSystem: '<S602>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S670>/Limiter1' */
    /* Outputs for Atomic SubSystem: '<S660>/DeadBand' */
    /* Outputs for Atomic SubSystem: '<S600>/EdgeRising3' */
    /* Outputs for Atomic SubSystem: '<S600>/EdgeRising2' */
    /* Outputs for Atomic SubSystem: '<S600>/EdgeRising1' */
    /* Outputs for Atomic SubSystem: '<S600>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S600>/EdgeBi2' */
    /* Outputs for Atomic SubSystem: '<S600>/EdgeBi1' */
    /* Outputs for Atomic SubSystem: '<S607>/Limiter' */
    /* Outputs for Atomic SubSystem: '<S605>/Hysteresis1' */
    /* Outputs for Atomic SubSystem: '<S605>/Hysteresis' */
    /* Outputs for Atomic SubSystem: '<S579>/Limiter2' */
    /* Outputs for Atomic SubSystem: '<S579>/Limiter1' */
    if (((uint32)rtb_TmpSignalConversionAtVeEN_j) == CeENGR_e_DeacInProgress)
    {
        /* Switch: '<S582>/Switch1' incorporates:
         *  Constant: '<S583>/Calib'
         */
        rtb_Switch1_bi = KeICSR_t_DOD_DeacDlyTm;
    }
    else
    {
        /* Switch: '<S582>/Switch1' incorporates:
         *  Constant: '<S570>/Constant Value4'
         *  Constant: '<S581>/Calib'
         *  MinMax: '<S570>/MinMax2'
         *  Sum: '<S570>/Sum2'
         */
        rtb_Switch1_bi = fmaxf(0.0F, ICSR_ac_DW.UnitDelay2_DSTATE_d -
                               HeICSR_t_MedTEB_dT);
    }

    /* Abs: '<S579>/Abs' incorporates:
     *  Constant: '<S574>/Calib'
     *  Constant: '<S576>/Calib'
     *  Constant: '<S580>/Constant'
     */
    rtb_Abs_o = fabsf(KeICSR_dscl_DODRampUpRate * HeICSR_t_MedTEB_dT);

    /* Sum: '<S579>/Sum2' */
    rtb_Sum2_cg = rtb_TmpSignalConversionAtVeESSR -
        ICSR_ac_DW.UnitDelay1_DSTATE_p;

    /* Switch: '<S597>/Switch1' incorporates:
     *  RelationalOperator: '<S597>/Relational Operator'
     */
    if (rtb_Abs_o < rtb_Sum2_cg)
    {
        /* Switch: '<S662>/Switch1' */
        rtb_Switch1_bk = rtb_Abs_o;
    }
    else
    {
        /* Switch: '<S662>/Switch1' */
        rtb_Switch1_bk = rtb_Sum2_cg;
    }

    /* End of Switch: '<S597>/Switch1' */

    /* Switch: '<S597>/Switch' incorporates:
     *  RelationalOperator: '<S597>/Relational Operator1'
     */
    if (rtb_Switch1_bk <= (-rtb_Abs_o))
    {
        rtb_Switch1_bk = -rtb_Abs_o;
    }

    /* End of Switch: '<S597>/Switch' */

    /* Sum: '<S579>/Sum3' */
    rtb_Gain_e = rtb_Switch1_bk + ICSR_ac_DW.UnitDelay1_DSTATE_p;

    /* Switch: '<S598>/Switch1' incorporates:
     *  Constant: '<S567>/Constant Value2'
     *  RelationalOperator: '<S598>/Relational Operator'
     */
    if (2.0F < rtb_Gain_e)
    {
        /* Switch: '<S662>/Switch1' */
        rtb_Switch1_bk = 2.0F;
    }
    else
    {
        /* Switch: '<S662>/Switch1' */
        rtb_Switch1_bk = rtb_Gain_e;
    }

    /* End of Switch: '<S598>/Switch1' */

    /* Switch: '<S598>/Switch' incorporates:
     *  Constant: '<S567>/Constant Value3'
     *  RelationalOperator: '<S598>/Relational Operator1'
     */
    if (rtb_Switch1_bk <= 0.0F)
    {
        rtb_Switch1_bk = 0.0F;
    }

    /* End of Switch: '<S598>/Switch' */

    /* MinMax: '<S567>/MinMax' */
    rtb_Abs_o = fminf(rtb_TmpSignalConversionAtVeESSR, rtb_Switch1_bk);
    if (((uint32)rtb_TmpSignalConversionAtVeEN_j) == CeENGR_e_ReacInProgress)
    {
        /* Switch: '<S591>/Switch1' incorporates:
         *  Constant: '<S592>/Calib'
         */
        rtb_Gain_e = KeICSR_t_DOD_ReacDlyTm;
    }
    else
    {
        /* Switch: '<S591>/Switch1' incorporates:
         *  Constant: '<S572>/Constant Value'
         *  Constant: '<S590>/Calib'
         *  MinMax: '<S572>/MinMax1'
         *  Sum: '<S572>/Sum1'
         */
        rtb_Gain_e = fmaxf(0.0F, ICSR_ac_DW.UnitDelay_DSTATE_bz -
                           HeICSR_t_MedTEB_dT);
    }

    if (rtb_Gain_e > 0.0F)
    {
        /* Switch: '<S595>/Switch1' incorporates:
         *  Constant: '<S593>/Constant'
         *  Constant: '<S594>/Constant'
         *  RelationalOperator: '<S573>/Comparison1'
         *  RelationalOperator: '<S573>/Comparison2'
         *  SignalConversion generated from: '<S1>/VeHSER_e_RngEqnSel'
         *  Switch: '<S595>/Switch2'
         */
        if (((uint32)rtb_TmpSignalConversionAtVeHS_p) == CeHSER_e_UseM2Eqn)
        {
            /* Switch: '<S595>/Switch1' incorporates:
             *  Lookup_n-D: '<S578>/Vector'
             *  SignalConversion generated from: '<S1>/VeCSVR_v_VehSpdSigned'
             *  SignalConversion generated from: '<S1>/VeTRAR_M_HybCmndEngTorqPrdtd'
             */
            rtb_Abs_o = look2_iflf_binlcapw(rtb_TmpSignalConversionAtVeCSVR,
                rtb_TmpSignalConversionAtVeTRAR, ((const float32 *)
                &(KxICSR_scl_DODVehSpdFWTorqGainM2[0])), ((const float32 *)
                &(KyICSR_scl_DODVehSpdFWTorqGainM2[0])), ((const float32 *)
                &(KtICSR_scl_DODVehSpdFWTorqGainM2[0])), ICSR_ac_ConstP.pooled11,
                9U);
        }
        else
        {
            if (((uint32)rtb_TmpSignalConversionAtVeHS_p) == CeHSER_e_UseM1Eqn)
            {
                /* Switch: '<S595>/Switch2' incorporates:
                 *  Constant: '<S596>/Calib'
                 *  Switch: '<S595>/Switch1'
                 */
                rtb_Abs_o = KeICSR_scl_DODReacSpdCtlGainModM1;
            }
        }

        /* End of Switch: '<S595>/Switch1' */
    }
    else
    {
        if ((KeICSR_b_MDS_DeacSpdCtl) && (rtb_Switch1_bi > 0.0F))
        {
            /* Switch: '<S586>/Switch1' incorporates:
             *  Constant: '<S584>/Constant'
             *  Constant: '<S585>/Constant'
             *  RelationalOperator: '<S571>/Comparison6'
             *  RelationalOperator: '<S571>/Comparison7'
             *  SignalConversion generated from: '<S1>/VeHSER_e_RngEqnSel'
             *  Switch: '<S575>/Switch2'
             *  Switch: '<S586>/Switch2'
             */
            if (((uint32)rtb_TmpSignalConversionAtVeHS_p) == CeHSER_e_UseM2Eqn)
            {
                /* Switch: '<S586>/Switch1' incorporates:
                 *  Lookup_n-D: '<S577>/Vector'
                 *  SignalConversion generated from: '<S1>/VeCSVR_v_VehSpdSigned'
                 *  SignalConversion generated from: '<S1>/VeTRAR_M_HybCmndEngTorqPrdtd'
                 */
                rtb_Abs_o = look2_iflf_binlcapw(rtb_TmpSignalConversionAtVeCSVR,
                    rtb_TmpSignalConversionAtVeTRAR, ((const float32 *)
                    &(KxICSR_scl_DODDeacSpdCtlGainModM2[0])), ((const float32 *)
                    &(KyICSR_scl_DODDeacSpdCtlGainModM2[0])), ((const float32 *)
                    &(KtICSR_scl_DODDeacSpdCtlGainModM2[0])),
                    ICSR_ac_ConstP.pooled11, 9U);
            }
            else
            {
                if (((uint32)rtb_TmpSignalConversionAtVeHS_p) ==
                        CeHSER_e_UseM1Eqn)
                {
                    /* Switch: '<S586>/Switch2' incorporates:
                     *  Constant: '<S588>/Calib'
                     *  Switch: '<S586>/Switch1'
                     */
                    rtb_Abs_o = KeICSR_scl_DODDeacSpdCtlGainModM1;
                }
            }

            /* End of Switch: '<S586>/Switch1' */
        }
    }

    (void)Rte_Read_VeHSER_e_RngSt_Value(&tmpRead);
    (void)Rte_Read_VeESMR_P_BattLTMaxLim_Value(&rtb_Sum2_ns);
    (void)Rte_Read_VeESMR_P_BattLTMinLim_Value(&rtb_Product1_n4);
    (void)Rte_Read_VeBPCR_T_BatModTmp_Value(&rtb_Sum2_nj);
    if (KeICSR_b_BatMinModTempOvrrd_Enbl)
    {
        /* Switch: '<S620>/Switch1' incorporates:
         *  Constant: '<S626>/Calib'
         */
        rtb_Sum2_cg = KeICSR_T_BatMinModTempOvrrd;
    }
    else
    {
        /* Switch: '<S620>/Switch1' */
        rtb_Sum2_cg = rtb_Sum2_nj;
    }

    (void)Rte_Read_VeDTRR_e_AxleTrqRespType_Value(&tmpRead_0);

    /* Outputs for Function Call SubSystem: '<S1>/ICSC_NiCL_CalcErr' */
    /* Outputs for Atomic SubSystem: '<S11>/StateOfTheArt_AHSC' */
    rtb_Sum2_nj = fabsf(VeICSR_n_NiErrOut);

    /* End of Outputs for SubSystem: '<S11>/StateOfTheArt_AHSC' */
    /* End of Outputs for SubSystem: '<S1>/ICSC_NiCL_CalcErr' */
    if (((uint32)rtb_TmpSignalConversionAtVeHS_p) == CeHSER_e_UseM1Eqn)
    {
        (void)Rte_Read_VeOSMR_n_InputSpdMaxM1_Value(&rtb_Switch4);
        (void)Rte_Read_VeOSMR_n_InputSpdMinM1_Value(&rtb_Maximum_b5);
        (void)Rte_Read_VeOSMR_n_InputSpdMaxM1_ToilDep_Value(&rtb_Merge2);
        (void)Rte_Read_VeOSMR_n_InputSpdMinM1_ToilDep_Value(&rtb_Merge1);

        /* Outputs for IfAction SubSystem: '<S606>/M1' incorporates:
         *  ActionPort: '<S634>/Action Port'
         */
        /* Switch: '<S634>/Switch' incorporates:
         *  Constant: '<S637>/Calib'
         *  Inport: '<Root>/VeOSMR_n_InputSpdMaxM1'
         *  Inport: '<Root>/VeOSMR_n_InputSpdMaxM1_ToilDep'
         *  Inport: '<Root>/VeOSMR_n_InputSpdMinM1'
         *  Inport: '<Root>/VeOSMR_n_InputSpdMinM1_ToilDep'
         *  Switch: '<S634>/Switch6'
         */
        if (KeICSR_b_SwitchNiLimits_M1)
        {
            /* Merge: '<S606>/Merge1' */
            rtb_Merge1 = rtb_Maximum_b5;

            /* Merge: '<S606>/Merge2' */
            rtb_Merge2 = rtb_Switch4;
        }

        /* End of Switch: '<S634>/Switch' */
        /* End of Outputs for SubSystem: '<S606>/M1' */
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeHS_p) == CeHSER_e_UseM2Eqn)
    {
        (void)Rte_Read_VeOSMR_n_InputSpdMaxM2_Value(&rtb_Switch4);
        (void)Rte_Read_VeOSMR_n_InputSpdMinM2_Value(&rtb_Maximum_b5);
        (void)Rte_Read_VeOSMR_n_InputSpdMaxM2_ToilDep_Value(&rtb_Merge2);
        (void)Rte_Read_VeOSMR_n_InputSpdMinM2_ToilDep_Value(&rtb_Merge1);

        /* Outputs for IfAction SubSystem: '<S606>/M2' incorporates:
         *  ActionPort: '<S635>/Action Port'
         */
        /* Switch: '<S635>/Switch' incorporates:
         *  Constant: '<S638>/Calib'
         *  Inport: '<Root>/VeOSMR_n_InputSpdMaxM2'
         *  Inport: '<Root>/VeOSMR_n_InputSpdMaxM2_ToilDep'
         *  Inport: '<Root>/VeOSMR_n_InputSpdMinM2'
         *  Inport: '<Root>/VeOSMR_n_InputSpdMinM2_ToilDep'
         *  Switch: '<S635>/Switch6'
         */
        if (KeICSR_b_SwitchNiLimits_M2)
        {
            /* Merge: '<S606>/Merge1' */
            rtb_Merge1 = rtb_Maximum_b5;

            /* Merge: '<S606>/Merge2' */
            rtb_Merge2 = rtb_Switch4;
        }

        /* End of Switch: '<S635>/Switch' */
        /* End of Outputs for SubSystem: '<S606>/M2' */
    }
    else
    {
        (void)Rte_Read_VeESPR_n_EngSpdMinLim_Value(&rtb_Switch4);
        (void)Rte_Read_VeESPR_n_EngSpdMaxLim_Value(&rtb_Maximum_b5);

        /* Outputs for IfAction SubSystem: '<S606>/else' incorporates:
         *  ActionPort: '<S636>/Action Port'
         */
        ICSR_ac_Pass(rtb_Switch4, rtb_Maximum_b5, &rtb_Merge1, &rtb_Merge2);

        /* End of Outputs for SubSystem: '<S606>/else' */
    }

    /* Switch: '<S608>/Switch1' incorporates:
     *  Constant: '<S570>/Constant Value5'
     *  Constant: '<S572>/Constant Value1'
     *  Constant: '<S587>/Calib'
     *  Constant: '<S589>/Constant'
     *  Constant: '<S603>/Calib'
     *  Constant: '<S627>/Calib'
     *  Constant: '<S632>/Constant'
     *  Constant: '<S633>/Constant'
     *  Gain: '<S852>/Gain'
     *  Inport: '<Root>/VeBPCR_T_BatModTmp'
     *  Inport: '<Root>/VeDTRR_e_AxleTrqRespType'
     *  Inport: '<Root>/VeESMR_P_BattLTMaxLim'
     *  Inport: '<Root>/VeESMR_P_BattLTMinLim'
     *  Inport: '<Root>/VeESPR_n_EngSpdMaxLim'
     *  Inport: '<Root>/VeESPR_n_EngSpdMinLim'
     *  Inport: '<Root>/VeHSER_e_RngSt'
     *  Inport: '<Root>/VeOSMR_n_InputSpdMaxM1'
     *  Inport: '<Root>/VeOSMR_n_InputSpdMaxM1_ToilDep'
     *  Inport: '<Root>/VeOSMR_n_InputSpdMaxM2'
     *  Inport: '<Root>/VeOSMR_n_InputSpdMaxM2_ToilDep'
     *  Inport: '<Root>/VeOSMR_n_InputSpdMinM1'
     *  Inport: '<Root>/VeOSMR_n_InputSpdMinM1_ToilDep'
     *  Inport: '<Root>/VeOSMR_n_InputSpdMinM2'
     *  Inport: '<Root>/VeOSMR_n_InputSpdMinM2_ToilDep'
     *  Logic: '<S571>/Logical4'
     *  RelationalOperator: '<S570>/Comparison3'
     *  RelationalOperator: '<S608>/Greater  Than'
     *  SignalConversion generated from: '<S1>/VeHSER_e_RngEqnSel'
     *  Switch: '<S575>/Switch2'
     */
    if (VeICSI_n_NiActl > (rtb_Merge2 - KeICSR_n_NiLimitDelta1))
    {
        /* Switch: '<S608>/Switch1' incorporates:
         *  Constant: '<S608>/Constant Value'
         */
        VeICSR_b_LmtFctr_NiMax = true;
    }
    else
    {
        /* Switch: '<S608>/Switch1' incorporates:
         *  Constant: '<S604>/Calib'
         *  RelationalOperator: '<S608>/Greater  Than1'
         *  Sum: '<S605>/Sum3'
         *  UnitDelay: '<S608>/Unit Delay'
         */
        VeICSR_b_LmtFctr_NiMax = ((VeICSI_n_NiActl >= (rtb_Merge2 -
            KeICSR_n_NiLimitDelta2)) && (ICSR_ac_DW.UnitDelay_DSTATE_lb));
    }

    /* End of Switch: '<S608>/Switch1' */

    /* Update for UnitDelay: '<S608>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_lb = VeICSR_b_LmtFctr_NiMax;

    /* Switch: '<S609>/Switch1' incorporates:
     *  Constant: '<S604>/Calib'
     *  RelationalOperator: '<S609>/Greater  Than'
     */
    if (VeICSI_n_NiActl > (rtb_Merge1 + KeICSR_n_NiLimitDelta2))
    {
        /* Switch: '<S609>/Switch1' incorporates:
         *  Constant: '<S609>/Constant Value'
         */
        rtb_LeICSR_b_DsblAnglCntrl_Pre = true;
    }
    else
    {
        /* Switch: '<S609>/Switch1' incorporates:
         *  Constant: '<S603>/Calib'
         *  RelationalOperator: '<S609>/Greater  Than1'
         *  Sum: '<S605>/Sum5'
         *  UnitDelay: '<S609>/Unit Delay'
         */
        rtb_LeICSR_b_DsblAnglCntrl_Pre = ((VeICSI_n_NiActl >= (rtb_Merge1 +
            KeICSR_n_NiLimitDelta1)) && (ICSR_ac_DW.UnitDelay_DSTATE_o));
    }

    /* End of Switch: '<S609>/Switch1' */

    /* Update for UnitDelay: '<S609>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_o = rtb_LeICSR_b_DsblAnglCntrl_Pre;

    /* Logic: '<S605>/Logical2' */
    VeICSR_b_LmtFctr_NiMin = !rtb_LeICSR_b_DsblAnglCntrl_Pre;
    if (KaICSR_b_NiCL_OpenMtrTrqLimits[(tmpRead)])
    {
        /* Switch: '<S618>/Switch4' incorporates:
         *  Lookup_n-D: '<S616>/Vector'
         *  Switch: '<S620>/Switch1'
         */
        rtb_Switch4 = look1_iflf_binlcapw(rtb_Sum2_cg, ((const float32 *)
            &(KxICSR_r_NiCL_LmtFactor_Shft[0])), ((const float32 *)
            &(KtICSR_r_NiCL_LmtFactor_Shft[0])), 3U);
    }
    else
    {
        /* Switch: '<S618>/Switch4' incorporates:
         *  Constant: '<S618>/Constant Value17'
         */
        rtb_Switch4 = 0.0F;
    }

    (void)Rte_Read_VeVSDR_n_PrimNoSgndFltrd_Value(&rtb_Product_d0);
    (void)Rte_Read_VeEOCR_b_CatalystWarmupEnabled_Value(&rtb_NotEqual_j1);

    /* Logic: '<S619>/Logical3' incorporates:
     *  Constant: '<S610>/Calib'
     *  Constant: '<S624>/Calib'
     *  Constant: '<S625>/Calib'
     *  Inport: '<Root>/VeEOCR_b_CatalystWarmupEnabled'
     *  Inport: '<Root>/VeHSER_e_RngSt'
     *  Inport: '<Root>/VeVSDR_n_PrimNoSgndFltrd'
     */
    VeICSR_b_LmtFctr_Warmup = ((rtb_NotEqual_j1 && (fabsf(rtb_Product_d0) <
        KeICSR_n_NiCL_Warmup_OutSpdThr)) &&
        (KeICSR_b_NiCL_OpenMtrTrqLimits_Warmup));
    if (KeICSR_b_TransOilTempOvrrd_Enbl)
    {
        rtb_Subtraction1_b = KeICSR_T_TransOilTempOvrrd;
    }
    else
    {
        rtb_Subtraction1_b = rtb_TmpSignalConversionAtVeTFTR;
    }

    if (((uint32)tmpRead_0) != CePTAR_e_Inactive)
    {
        rtb_Maximum_b5 = KeICSR_r_NiCL_LmtFactor_ESP;
    }
    else
    {
        rtb_Maximum_b5 = 1.0F;
    }

    if ((VeICSR_b_LmtFctr_NiMax) || (VeICSR_b_LmtFctr_NiMin))
    {
        rtb_Merge2 = look1_iflf_binlcapw(rtb_Sum2_cg, ((const float32 *)
            &(KxICSR_r_NiCL_LmtFactor_NiLmt[0])), ((const float32 *)
            &(KtICSR_r_NiCL_LmtFactor_NiLmt[0])), 3U);
    }
    else
    {
        rtb_Merge2 = 0.0F;
    }

    /* Sum: '<S607>/Sum2' incorporates:
     *  Constant: '<S618>/Constant Value1'
     *  Constant: '<S622>/Constant Value11'
     *  Constant: '<S628>/Calib'
     *  Constant: '<S629>/Calib'
     *  Constant: '<S630>/Constant'
     *  Constant: '<S631>/Calib'
     *  Inport: '<Root>/VeDTRR_e_AxleTrqRespType'
     *  Lookup_n-D: '<S614>/Vector'
     *  Switch: '<S620>/Switch1'
     */
    rtb_Sum2_ns = fmaxf(fmaxf(fmaxf(fminf(fmaxf(look1_iflf_binlcapw(rtb_Sum2_nj,
        ((const float32 *)&(KxICSR_r_NiCL_LmtFactor_NiErrDep[0])), ((const
        float32 *)&(KtICSR_r_NiCL_LmtFactor_NiErrDep[0])), 3U), fminf
                            (look1_iflf_binlcapw(rtb_Sum2_ns - rtb_Product1_n4,
        ((const float32 *)&(KxICSR_r_NiCL_LmtFactor_PbatDep[0])), ((const
        float32 *)&(KtICSR_r_NiCL_LmtFactor_PbatDep[0])), 3U),
        look2_iflf_binlcapw(rtb_Sum2_cg, rtb_Subtraction1_b, ((const float32 *)
        &(KxICSR_r_NiCL_LmtFactor_TempDep[0])), ((const float32 *)
        &(KyICSR_r_NiCL_LmtFactor_TempDep[0])), ((const float32 *)
        &(KtICSR_r_NiCL_LmtFactor_TempDep[0])), ICSR_ac_ConstP.Vector_maxIndex,
                            3U))), rtb_Maximum_b5), rtb_Merge2), rtb_Switch4),
                        (float32)((rtb_TmpSignalConversionAtVeES_d ||
                          (VeICSR_b_LmtFctr_Warmup)) ? 1 : 0)) -
        ICSR_ac_DW.UnitDelay_DSTATE_ck;

    /* Switch: '<S662>/Switch1' incorporates:
     *  Constant: '<S607>/Constant Value'
     *  Constant: '<S607>/Constant Value1'
     */
    rtb_Switch1_bk = fmaxf(0.01F, 1.0F - fabsf(rtb_Sum2_ns));

    /* Product: '<S607>/Product1' incorporates:
     *  Constant: '<S612>/Calib'
     */
    rtb_Product1_n4 = KeICSR_k_NiCL_LmtFactor_LU * rtb_Switch1_bk;

    /* Product: '<S607>/Product' incorporates:
     *  Constant: '<S611>/Calib'
     */
    rtb_Product_d0 = KeICSR_k_NiCL_LmtFactor_LD * rtb_Switch1_bk;

    /* Switch: '<S623>/Switch1' incorporates:
     *  RelationalOperator: '<S623>/Relational Operator'
     */
    if (rtb_Product1_n4 < rtb_Sum2_ns)
    {
        /* Switch: '<S662>/Switch1' */
        rtb_Switch1_bk = rtb_Product1_n4;
    }
    else
    {
        /* Switch: '<S662>/Switch1' */
        rtb_Switch1_bk = rtb_Sum2_ns;
    }

    /* End of Switch: '<S623>/Switch1' */

    /* Switch: '<S623>/Switch' incorporates:
     *  RelationalOperator: '<S623>/Relational Operator1'
     */
    if (rtb_Switch1_bk > rtb_Product_d0)
    {
        rtb_Product_d0 = rtb_Switch1_bk;
    }

    /* End of Switch: '<S623>/Switch' */

    /* Sum: '<S607>/Sum3' */
    rtb_Sum2_ns = rtb_Product_d0 + ICSR_ac_DW.UnitDelay_DSTATE_ck;

    /* Sum: '<S600>/Add' */
    rtb_Merge2 = (VeICSR_M_NiCL_PLimit + VeICSR_M_NiCL_ILimit) +
        VeICSR_M_NiCL_DLimit;

    /* Logic: '<S600>/Logical Operator' incorporates:
     *  Constant: '<S647>/Constant'
     *  Constant: '<S648>/Constant'
     *  SignalConversion generated from: '<S1>/VeHSER_e_RngEqnSel'
     *  SignalConversion generated from: '<S1>/VeOHSR_e_ILEState'
     */
    rtb_TmpSignalConversionAtVeES_d = ((((uint32)rtb_TmpSignalConversionAtVeHS_p)
        == CeHSER_e_UseM2Eqn) && (((uint32)rtb_TmpSignalConversionAtVeOHSR) ==
        CeOHSR_e_LaunchSpdCntrl));

    /* RelationalOperator: '<S641>/Not Equal' incorporates:
     *  UnitDelay: '<S641>/Unit Delay'
     */
    rtb_NotEqual_j1 = (rtb_TmpSignalConversionAtVeES_d !=
                       ICSR_ac_DW.UnitDelay_DSTATE_gu);

    /* Update for UnitDelay: '<S641>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_gu = rtb_TmpSignalConversionAtVeES_d;

    /* RelationalOperator: '<S642>/Not Equal' incorporates:
     *  UnitDelay: '<S642>/Unit Delay'
     */
    rtb_LeICSR_b_DsblAnglCntrl_Pre = (rtb_TmpSignalConversionAtVeES_d !=
        ICSR_ac_DW.UnitDelay_DSTATE_n0);

    /* Update for UnitDelay: '<S642>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_n0 = rtb_TmpSignalConversionAtVeES_d;

    /* Logic: '<S643>/AND' incorporates:
     *  Logic: '<S643>/OR1'
     *  UnitDelay: '<S643>/Unit Delay'
     */
    rtb_AND_bb = (rtb_TmpSignalConversionAtVeES_d &&
                  (!ICSR_ac_DW.UnitDelay_DSTATE_ix));

    /* Update for UnitDelay: '<S643>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_ix = rtb_TmpSignalConversionAtVeES_d;

    /* Logic: '<S644>/AND' incorporates:
     *  Logic: '<S644>/OR1'
     *  UnitDelay: '<S644>/Unit Delay'
     */
    rtb_AND_k2 = (rtb_TmpSignalConversionAtVeES_d &&
                  (!ICSR_ac_DW.UnitDelay_DSTATE_es));

    /* Update for UnitDelay: '<S644>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_es = rtb_TmpSignalConversionAtVeES_d;

    /* Logic: '<S645>/AND' incorporates:
     *  Logic: '<S645>/OR1'
     *  UnitDelay: '<S645>/Unit Delay'
     */
    rtb_AND_kz = !ICSR_ac_DW.UnitDelay_DSTATE_g3;

    /* Update for UnitDelay: '<S645>/Unit Delay' incorporates:
     *  Constant: '<S600>/TRUE Constant5'
     */
    ICSR_ac_DW.UnitDelay_DSTATE_g3 = true;

    /* Logic: '<S646>/AND' incorporates:
     *  Logic: '<S646>/OR1'
     *  UnitDelay: '<S646>/Unit Delay'
     */
    rtb_AND_gi = !ICSR_ac_DW.UnitDelay_DSTATE_at;

    /* Update for UnitDelay: '<S646>/Unit Delay' incorporates:
     *  Constant: '<S600>/TRUE Constant1'
     */
    ICSR_ac_DW.UnitDelay_DSTATE_at = true;
    if (rtb_NotEqual_j1)
    {
        /* Switch: '<S652>/Switch2' */
        if (rtb_AND_bb)
        {
            /* Switch: '<S652>/Switch2' incorporates:
             *  MinMax: '<S652>/MinMax'
             */
            rtb_Product1_n4 = fmaxf(ICSR_ac_DW.UnitDelay1_DSTATE_i,
                                    rtb_TmpSignalConversionAtVeMTIR);
        }
        else
        {
            /* Switch: '<S652>/Switch2' */
            rtb_Product1_n4 = ICSR_ac_DW.UnitDelay_DSTATE_mc;
        }

        /* End of Switch: '<S652>/Switch2' */

        /* Switch: '<S654>/Switch3' incorporates:
         *  Constant: '<S654>/Constant Value4'
         */
        rtb_Product_d0 = 0.0F;
    }
    else
    {
        /* Switch: '<S654>/Switch2' */
        rtb_Product1_n4 = ICSR_ac_DW.UnitDelay_DSTATE_ci;

        /* Switch: '<S652>/Switch1' incorporates:
         *  Constant: '<S650>/Calib'
         *  Constant: '<S651>/Calib'
         */
        if (rtb_TmpSignalConversionAtVeES_d)
        {
            rtb_Sum2_cg = KeICSR_t_NiTrqLim_BlndInTm;
        }
        else
        {
            rtb_Sum2_cg = KeICSR_t_NiTrqLim_BlndOutTm;
        }

        /* End of Switch: '<S652>/Switch1' */

        /* MinMax: '<S654>/Maximum' incorporates:
         *  Constant: '<S649>/Calib'
         */
        rtb_Product_d0 = fmaxf(HeICSR_t_MedTEB_dT, rtb_Sum2_cg);

        /* Outputs for Atomic SubSystem: '<S654>/Protected Division' */
        /* Switch: '<S656>/Switch1' incorporates:
         *  Constant: '<S649>/Calib'
         *  Constant: '<S656>/Constant Value'
         *  Constant: '<S656>/Constant Value1'
         *  Constant: '<S656>/Constant Value2'
         *  Constant: '<S656>/Constant Value3'
         *  Logic: '<S656>/AND'
         *  RelationalOperator: '<S656>/Greater Than or Equal '
         *  RelationalOperator: '<S656>/Greater Than or Equal 1'
         *  RelationalOperator: '<S656>/Not Equal'
         *  RelationalOperator: '<S656>/Not Equal1'
         *  Switch: '<S656>/Switch2'
         *  Switch: '<S656>/Switch3'
         */
        if ((HeICSR_t_MedTEB_dT != 0.0F) && (rtb_Product_d0 != 0.0F))
        {
            /* Switch: '<S656>/Switch1' incorporates:
             *  Product: '<S656>/Division'
             */
            rtb_Product_d0 = HeICSR_t_MedTEB_dT / rtb_Product_d0;
        }
        else if (HeICSR_t_MedTEB_dT > 0.0F)
        {
            /* Switch: '<S656>/Switch2' incorporates:
             *  Constant: '<S656>/MAXFLOAT'
             *  Switch: '<S656>/Switch1'
             */
            rtb_Product_d0 = 3.402823466E+38F;
        }
        else if (HeICSR_t_MedTEB_dT < 0.0F)
        {
            /* Switch: '<S656>/Switch3' incorporates:
             *  Constant: '<S656>/MINFLOAT'
             *  Switch: '<S656>/Switch1'
             *  Switch: '<S656>/Switch2'
             */
            rtb_Product_d0 = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S656>/Switch1' incorporates:
             *  Constant: '<S656>/Constant Value4'
             *  Switch: '<S656>/Switch2'
             *  Switch: '<S656>/Switch3'
             */
            rtb_Product_d0 = 0.0F;
        }

        /* End of Switch: '<S656>/Switch1' */
        /* End of Outputs for SubSystem: '<S654>/Protected Division' */

        /* Switch: '<S654>/Switch1' incorporates:
         *  Constant: '<S654>/Constant Value3'
         *  Logic: '<S654>/Logical'
         *  Logic: '<S654>/Logical2'
         */
        if ((ICSR_ac_DW.UnitDelay1_DSTATE_dl) && (!rtb_AND_kz))
        {
            rtb_Subtraction1_b = ICSR_ac_DW.UnitDelay3_DSTATE_n;
        }
        else
        {
            rtb_Subtraction1_b = 1.0F;
        }

        /* End of Switch: '<S654>/Switch1' */

        /* Switch: '<S654>/Switch3' incorporates:
         *  Constant: '<S654>/Constant Value2'
         *  MinMax: '<S654>/MinMax'
         *  Sum: '<S654>/Summation1'
         */
        rtb_Product_d0 = fminf(rtb_Subtraction1_b + rtb_Product_d0, 1.0F);
    }

    if (rtb_TmpSignalConversionAtVeES_d)
    {
        rtb_Sum2_cg = rtb_TmpSignalConversionAtVeMTIR;
    }
    else
    {
        rtb_Sum2_cg = rtb_Merge2;
    }

    /* Sum: '<S654>/Summation' incorporates:
     *  Constant: '<S654>/Constant Value'
     */
    VeICSR_M_Ni_MaxCLTrq_Arb = ((1.0F - rtb_Product_d0) * rtb_Product1_n4) +
        (rtb_Product_d0 * rtb_Sum2_cg);
    if (rtb_LeICSR_b_DsblAnglCntrl_Pre)
    {
        /* Switch: '<S653>/Switch2' */
        if (rtb_AND_k2)
        {
            /* Switch: '<S653>/Switch2' incorporates:
             *  MinMax: '<S653>/MinMax'
             */
            rtb_Switch4 = fminf(ICSR_ac_DW.UnitDelay1_DSTATE_i,
                                rtb_TmpSignalConversionAtVeMT_l);
        }
        else
        {
            /* Switch: '<S653>/Switch2' */
            rtb_Switch4 = ICSR_ac_DW.UnitDelay_DSTATE_lc;
        }

        /* End of Switch: '<S653>/Switch2' */

        /* Switch: '<S657>/Switch3' incorporates:
         *  Constant: '<S657>/Constant Value4'
         */
        rtb_Maximum_b5 = 0.0F;
    }
    else
    {
        /* Switch: '<S657>/Switch2' */
        rtb_Switch4 = ICSR_ac_DW.UnitDelay_DSTATE_c3;

        /* Switch: '<S653>/Switch1' incorporates:
         *  Constant: '<S650>/Calib'
         *  Constant: '<S651>/Calib'
         */
        if (rtb_TmpSignalConversionAtVeES_d)
        {
            rtb_Sum2_cg = KeICSR_t_NiTrqLim_BlndInTm;
        }
        else
        {
            rtb_Sum2_cg = KeICSR_t_NiTrqLim_BlndOutTm;
        }

        /* End of Switch: '<S653>/Switch1' */

        /* MinMax: '<S657>/Maximum' incorporates:
         *  Constant: '<S649>/Calib'
         */
        rtb_Maximum_b5 = fmaxf(HeICSR_t_MedTEB_dT, rtb_Sum2_cg);

        /* Outputs for Atomic SubSystem: '<S657>/Protected Division' */
        /* Switch: '<S659>/Switch1' incorporates:
         *  Constant: '<S649>/Calib'
         *  Constant: '<S659>/Constant Value'
         *  Constant: '<S659>/Constant Value1'
         *  Constant: '<S659>/Constant Value2'
         *  Constant: '<S659>/Constant Value3'
         *  Logic: '<S659>/AND'
         *  RelationalOperator: '<S659>/Greater Than or Equal '
         *  RelationalOperator: '<S659>/Greater Than or Equal 1'
         *  RelationalOperator: '<S659>/Not Equal'
         *  RelationalOperator: '<S659>/Not Equal1'
         *  Switch: '<S659>/Switch2'
         *  Switch: '<S659>/Switch3'
         */
        if ((HeICSR_t_MedTEB_dT != 0.0F) && (rtb_Maximum_b5 != 0.0F))
        {
            /* Switch: '<S659>/Switch1' incorporates:
             *  Product: '<S659>/Division'
             */
            rtb_Maximum_b5 = HeICSR_t_MedTEB_dT / rtb_Maximum_b5;
        }
        else if (HeICSR_t_MedTEB_dT > 0.0F)
        {
            /* Switch: '<S659>/Switch2' incorporates:
             *  Constant: '<S659>/MAXFLOAT'
             *  Switch: '<S659>/Switch1'
             */
            rtb_Maximum_b5 = 3.402823466E+38F;
        }
        else if (HeICSR_t_MedTEB_dT < 0.0F)
        {
            /* Switch: '<S659>/Switch3' incorporates:
             *  Constant: '<S659>/MINFLOAT'
             *  Switch: '<S659>/Switch1'
             *  Switch: '<S659>/Switch2'
             */
            rtb_Maximum_b5 = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S659>/Switch1' incorporates:
             *  Constant: '<S659>/Constant Value4'
             *  Switch: '<S659>/Switch2'
             *  Switch: '<S659>/Switch3'
             */
            rtb_Maximum_b5 = 0.0F;
        }

        /* End of Switch: '<S659>/Switch1' */
        /* End of Outputs for SubSystem: '<S657>/Protected Division' */

        /* Switch: '<S657>/Switch1' incorporates:
         *  Constant: '<S657>/Constant Value3'
         *  Logic: '<S657>/Logical'
         *  Logic: '<S657>/Logical2'
         */
        if ((ICSR_ac_DW.UnitDelay1_DSTATE_cj) && (!rtb_AND_gi))
        {
            rtb_Subtraction1_b = ICSR_ac_DW.UnitDelay3_DSTATE_o;
        }
        else
        {
            rtb_Subtraction1_b = 1.0F;
        }

        /* End of Switch: '<S657>/Switch1' */

        /* Switch: '<S657>/Switch3' incorporates:
         *  Constant: '<S657>/Constant Value2'
         *  MinMax: '<S657>/MinMax'
         *  Sum: '<S657>/Summation1'
         */
        rtb_Maximum_b5 = fminf(rtb_Subtraction1_b + rtb_Maximum_b5, 1.0F);
    }

    if (rtb_TmpSignalConversionAtVeES_d)
    {
        rtb_Sum2_cg = rtb_TmpSignalConversionAtVeMT_l;
    }
    else
    {
        rtb_Sum2_cg = -rtb_Merge2;
    }

    /* Sum: '<S657>/Summation' incorporates:
     *  Constant: '<S657>/Constant Value'
     *  Gain: '<S600>/Gain'
     */
    VeICSR_M_Ni_MinCLTrq_Arb = ((1.0F - rtb_Maximum_b5) * rtb_Switch4) +
        (rtb_Maximum_b5 * rtb_Sum2_cg);

    /* Switch: '<S662>/Switch1' incorporates:
     *  Constant: '<S666>/Constant Value1'
     *  Constant: '<S667>/Calib'
     */
    rtb_Switch1_bk = HeICSR_t_MedTEB_dT / 2.0F;

    /* Outputs for Function Call SubSystem: '<S1>/ICSC_NiCL_CalcErr' */
    /* Outputs for Atomic SubSystem: '<S11>/StateOfTheArt_AHSC' */
    /* Switch: '<S665>/Switch1' incorporates:
     *  Constant: '<S668>/Calib'
     *  Gain: '<S660>/Gain'
     *  Gain: '<S852>/Gain'
     *  RelationalOperator: '<S665>/Greater  Than'
     *  RelationalOperator: '<S665>/Greater  Than1'
     *  Switch: '<S665>/Switch2'
     */
    if (VeICSR_n_NiErrOut >= KeICSR_n_DCtrlDeadBand)
    {
        /* Switch: '<S665>/Switch1' incorporates:
         *  Sum: '<S665>/Subtraction'
         */
        rtb_Merge2 = VeICSR_n_NiErrOut - KeICSR_n_DCtrlDeadBand;
    }
    else if (VeICSR_n_NiErrOut <= (-KeICSR_n_DCtrlDeadBand))
    {
        /* Switch: '<S665>/Switch2' incorporates:
         *  Gain: '<S660>/Gain'
         *  Sum: '<S665>/Subtraction1'
         *  Switch: '<S665>/Switch1'
         */
        rtb_Merge2 = VeICSR_n_NiErrOut - (-KeICSR_n_DCtrlDeadBand);
    }
    else
    {
        /* Switch: '<S665>/Switch1' incorporates:
         *  Constant: '<S665>/Constant Value'
         *  Switch: '<S665>/Switch2'
         */
        rtb_Merge2 = 0.0F;
    }

    /* End of Switch: '<S665>/Switch1' */
    /* End of Outputs for SubSystem: '<S11>/StateOfTheArt_AHSC' */
    /* End of Outputs for SubSystem: '<S1>/ICSC_NiCL_CalcErr' */

    /* Product: '<S666>/Multiplication2' incorporates:
     *  Constant: '<S669>/Calib'
     */
    VeICSR_dn_PIDTerm = ((rtb_Merge2 - ((rtb_Switch1_bk -
                            KeICSR_t_DTermCutoffTime) *
                           ICSR_ac_DW.UnitDelay1_DSTATE_f)) -
                         ICSR_ac_DW.UnitDelay_DSTATE_gx) / (rtb_Switch1_bk +
        KeICSR_t_DTermCutoffTime);

    /* Outputs for Function Call SubSystem: '<S1>/ICSC_NiCL_CalcErr' */
    /* Outputs for Atomic SubSystem: '<S11>/StateOfTheArt_AHSC' */
    if ((VeICSR_n_NiErrOut * VeICSR_dn_PIDTerm) > 0.0F)
    {
        /* Switch: '<S664>/Switch' incorporates:
         *  Lookup_n-D: '<S671>/Vector'
         *  Product: '<S666>/Multiplication2'
         */
        VeICSR_K_DTermNonLinear = look1_iflf_binlcapw(VeICSR_dn_PIDTerm, ((const
            float32 *)&(KxICSR_K_DTermCorrectDir[0])), ((const float32 *)
            &(KtICSR_K_DTermCorrectDir[0])), 7U);
    }
    else
    {
        /* Switch: '<S664>/Switch' incorporates:
         *  Lookup_n-D: '<S672>/Vector'
         *  Product: '<S666>/Multiplication2'
         */
        VeICSR_K_DTermNonLinear = look1_iflf_binlcapw(VeICSR_dn_PIDTerm, ((const
            float32 *)&(KxICSR_K_DTermWrongDir[0])), ((const float32 *)
            &(KtICSR_K_DTermWrongDir[0])), 7U);
    }

    /* End of Outputs for SubSystem: '<S11>/StateOfTheArt_AHSC' */
    /* End of Outputs for SubSystem: '<S1>/ICSC_NiCL_CalcErr' */

    /* Product: '<S664>/Product1' incorporates:
     *  Constant: '<S664>/Constant Value'
     *  Gain: '<S852>/Gain'
     */
    rtb_Sum2_cg = (VeICSR_M_NiCL_DGain * VeICSR_dn_PIDTerm) *
        VeICSR_K_DTermNonLinear;

    /* Product: '<S660>/Multiplication5' */
    rtb_Multiplication5_o = VeICSR_M_NiCL_DLimit * rtb_Sum2_ns;

    /* Switch: '<S673>/Switch1' incorporates:
     *  RelationalOperator: '<S673>/Relational Operator'
     */
    if (rtb_Multiplication5_o < rtb_Sum2_cg)
    {
        /* Switch: '<S662>/Switch1' */
        rtb_Switch1_bk = rtb_Multiplication5_o;
    }
    else
    {
        /* Switch: '<S662>/Switch1' */
        rtb_Switch1_bk = rtb_Sum2_cg;
    }

    /* End of Switch: '<S673>/Switch1' */

    /* Switch: '<S673>/Switch' incorporates:
     *  RelationalOperator: '<S673>/Relational Operator1'
     */
    if (rtb_Switch1_bk > (-rtb_Multiplication5_o))
    {
        /* Switch: '<S673>/Switch' */
        VeICSR_M_EngCLDTerm = rtb_Switch1_bk;
    }
    else
    {
        /* Switch: '<S673>/Switch' */
        VeICSR_M_EngCLDTerm = -rtb_Multiplication5_o;
    }

    /* End of Switch: '<S673>/Switch' */

    /* Lookup_n-D: '<S675>/Vector' incorporates:
     *  Sum: '<S607>/Sum3'
     */
    rtb_Vector_as = look1_iflf_binlcapw(rtb_Sum2_ns, ((const float32 *)
        &(KxICSR_dM_NiCL_ITermRtLmt[0])), ((const float32 *)
        &(KtICSR_dM_NiCL_ITermRtLmt[0])), 2U);

    /* RelationalOperator: '<S738>/Comparison4' incorporates:
     *  Constant: '<S741>/Constant'
     */
    rtb_TmpSignalConversionAtVeES_d = (((uint32)rtb_TmpSignalConversionAtVeES_p)
        == CeESSR_e_EngOff);

    /* Logic: '<S738>/Logical Operator1' incorporates:
     *  Constant: '<S742>/Calib'
     *  Constant: '<S743>/Calib'
     */
    VeICSR_b_ItermRst_Chk = (((rtb_Sum2_nj <= KeICSR_n_NiErrLmt_ItermRst) &&
        (fabsf(VeICSI_n_NiActl) <= KeICSR_n_NiLmt_ItermRst)) &&
        rtb_TmpSignalConversionAtVeES_d);

    /* Outputs for Atomic SubSystem: '<S739>/EdgeRising' */
    /* Logic: '<S744>/AND' incorporates:
     *  Logic: '<S744>/OR1'
     *  UnitDelay: '<S744>/Unit Delay'
     */
    rtb_NotEqual_j1 = ((VeICSR_b_ItermRst_Chk) &&
                       (!ICSR_ac_DW.UnitDelay_DSTATE_mn));

    /* Update for UnitDelay: '<S744>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_mn = VeICSR_b_ItermRst_Chk;

    /* End of Outputs for SubSystem: '<S739>/EdgeRising' */

    /* Switch: '<S739>/Switch1' incorporates:
     *  Logic: '<S739>/OR'
     *  Logic: '<S739>/OR1'
     */
    if ((!VeICSR_b_ItermRst_Chk) || rtb_NotEqual_j1)
    {
        /* Switch: '<S739>/Switch1' incorporates:
         *  Constant: '<S739>/Constant Value1'
         */
        rtb_Merge1 = 0.0F;
    }
    else
    {
        /* Switch: '<S739>/Switch1' incorporates:
         *  Constant: '<S735>/Calib'
         *  Constant: '<S736>/Calib'
         *  MinMax: '<S739>/Minimum'
         *  Sum: '<S739>/Summation'
         *  UnitDelay: '<S739>/Unit Delay'
         */
        rtb_Merge1 = fminf(KeICSR_t_DlyTm_ItermRst, HeICSR_t_MedTEB_dT +
                           ICSR_ac_DW.UnitDelay_DSTATE_p2);
    }

    /* End of Switch: '<S739>/Switch1' */

    /* Logic: '<S739>/AND' incorporates:
     *  Constant: '<S736>/Calib'
     *  RelationalOperator: '<S739>/Greater  Than'
     */
    VeICSR_b_ItermRst_PreLatch = ((VeICSR_b_ItermRst_Chk) && (rtb_Merge1 >=
        KeICSR_t_DlyTm_ItermRst));

    /* Update for UnitDelay: '<S739>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_p2 = rtb_Merge1;

    /* Logic: '<S738>/Logical Operator2' */
    rtb_TmpSignalConversionAtVeES_d = !rtb_TmpSignalConversionAtVeES_d;

    /* Logic: '<S740>/AND' incorporates:
     *  Logic: '<S740>/OR1'
     *  UnitDelay: '<S740>/Unit Delay'
     */
    rtb_NotEqual_j1 = (rtb_TmpSignalConversionAtVeES_d &&
                       (!ICSR_ac_DW.UnitDelay_DSTATE_jkn));

    /* Update for UnitDelay: '<S740>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_jkn = rtb_TmpSignalConversionAtVeES_d;

    /* Logic: '<S737>/OR1' incorporates:
     *  Logic: '<S737>/NOT'
     *  Logic: '<S737>/OR'
     *  UnitDelay: '<S737>/Unit Delay'
     */
    VeICSR_b_ItermRst_PostLatch = ((VeICSR_b_ItermRst_PreLatch) ||
        ((!rtb_NotEqual_j1) && (ICSR_ac_DW.UnitDelay_DSTATE_pvl)));

    /* Update for UnitDelay: '<S737>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_pvl = VeICSR_b_ItermRst_PostLatch;

    /* Logic: '<S734>/AND' incorporates:
     *  Logic: '<S734>/OR1'
     *  UnitDelay: '<S734>/Unit Delay'
     */
    VeICSR_b_ItermRst = ((VeICSR_b_ItermRst_PostLatch) &&
                         (!ICSR_ac_DW.UnitDelay_DSTATE_fco));

    /* Update for UnitDelay: '<S734>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_fco = VeICSR_b_ItermRst_PostLatch;

    /* Sum: '<S679>/Sum2' incorporates:
     *  UnitDelay: '<S679>/Unit Delay'
     */
    rtb_Sum2_nj = (VeICSR_M_NiCL_ILimit * rtb_Sum2_ns) -
        ICSR_ac_DW.UnitDelay_DSTATE_ht;

    /* Outputs for Atomic SubSystem: '<S679>/Limiter' */
    /* Switch: '<S682>/Switch1' incorporates:
     *  Constant: '<S680>/Calib'
     *  RelationalOperator: '<S682>/Relational Operator'
     */
    if (KeICSR_dM_NiCL_ITermLimitGrad < rtb_Sum2_nj)
    {
        /* Switch: '<S705>/Switch1' */
        rtb_TmpSignalConversionAtVeTRAR = KeICSR_dM_NiCL_ITermLimitGrad;
    }
    else
    {
        /* Switch: '<S705>/Switch1' */
        rtb_TmpSignalConversionAtVeTRAR = rtb_Sum2_nj;
    }

    /* End of Switch: '<S682>/Switch1' */

    /* Switch: '<S682>/Switch' incorporates:
     *  Constant: '<S680>/Calib'
     *  RelationalOperator: '<S682>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeTRAR <= (-KeICSR_dM_NiCL_ITermLimitGrad))
    {
        rtb_TmpSignalConversionAtVeTRAR = -KeICSR_dM_NiCL_ITermLimitGrad;
    }

    /* End of Switch: '<S682>/Switch' */
    /* End of Outputs for SubSystem: '<S679>/Limiter' */

    /* Sum: '<S679>/Sum3' incorporates:
     *  UnitDelay: '<S679>/Unit Delay'
     */
    rtb_Sum3_j = rtb_TmpSignalConversionAtVeTRAR +
        ICSR_ac_DW.UnitDelay_DSTATE_ht;

    /* Update for UnitDelay: '<S679>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_ht = rtb_Sum3_j;

    /* RelationalOperator: '<S685>/Not Equal' incorporates:
     *  UnitDelay: '<S685>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeES_d = (VeICSI_b_STADA_LrnActv !=
        ICSR_ac_DW.UnitDelay_DSTATE_na);

    /* Update for UnitDelay: '<S685>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_na = VeICSI_b_STADA_LrnActv;

    /* Logic: '<S686>/AND' incorporates:
     *  Logic: '<S686>/OR1'
     *  UnitDelay: '<S686>/Unit Delay'
     */
    rtb_NotEqual_j1 = !ICSR_ac_DW.UnitDelay_DSTATE_css;

    /* Update for UnitDelay: '<S686>/Unit Delay' incorporates:
     *  Constant: '<S677>/TRUE Constant1'
     */
    ICSR_ac_DW.UnitDelay_DSTATE_css = true;
    if (rtb_TmpSignalConversionAtVeES_d)
    {
        /* Switch: '<S695>/Switch2' */
        rtb_Merge1 = ICSR_ac_DW.UnitDelay_DSTATE_pb;

        /* Switch: '<S695>/Switch3' incorporates:
         *  Constant: '<S695>/Constant Value4'
         */
        rtb_Sum2_nj = 0.0F;
    }
    else
    {
        /* Switch: '<S695>/Switch2' */
        rtb_Merge1 = ICSR_ac_DW.UnitDelay_DSTATE_ii;

        /* Switch: '<S683>/Switch1' incorporates:
         *  Constant: '<S689>/Calib'
         *  Constant: '<S690>/Calib'
         */
        if (VeICSI_b_STADA_LrnActv)
        {
            rtb_Subtraction1_b = KeICSR_t_ClutchLrnCals_BlndIn_Time;
        }
        else
        {
            rtb_Subtraction1_b = KeICSR_t_ClutchLrnCals_BlndOut_Time;
        }

        /* End of Switch: '<S683>/Switch1' */

        /* MinMax: '<S695>/Maximum' incorporates:
         *  Constant: '<S688>/Calib'
         */
        rtb_Sum2_nj = fmaxf(HeICSR_t_MedTEB_dT, rtb_Subtraction1_b);

        /* Outputs for Atomic SubSystem: '<S695>/Protected Division' */
        /* Switch: '<S697>/Switch1' incorporates:
         *  Constant: '<S688>/Calib'
         *  Constant: '<S697>/Constant Value'
         *  Constant: '<S697>/Constant Value1'
         *  Constant: '<S697>/Constant Value2'
         *  Constant: '<S697>/Constant Value3'
         *  Logic: '<S697>/AND'
         *  RelationalOperator: '<S697>/Greater Than or Equal '
         *  RelationalOperator: '<S697>/Greater Than or Equal 1'
         *  RelationalOperator: '<S697>/Not Equal'
         *  RelationalOperator: '<S697>/Not Equal1'
         *  Switch: '<S697>/Switch2'
         *  Switch: '<S697>/Switch3'
         */
        if ((HeICSR_t_MedTEB_dT != 0.0F) && (rtb_Sum2_nj != 0.0F))
        {
            /* Switch: '<S697>/Switch1' incorporates:
             *  Product: '<S697>/Division'
             */
            rtb_Sum2_nj = HeICSR_t_MedTEB_dT / rtb_Sum2_nj;
        }
        else if (HeICSR_t_MedTEB_dT > 0.0F)
        {
            /* Switch: '<S697>/Switch2' incorporates:
             *  Constant: '<S697>/MAXFLOAT'
             *  Switch: '<S697>/Switch1'
             */
            rtb_Sum2_nj = 3.402823466E+38F;
        }
        else if (HeICSR_t_MedTEB_dT < 0.0F)
        {
            /* Switch: '<S697>/Switch3' incorporates:
             *  Constant: '<S697>/MINFLOAT'
             *  Switch: '<S697>/Switch1'
             *  Switch: '<S697>/Switch2'
             */
            rtb_Sum2_nj = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S697>/Switch1' incorporates:
             *  Constant: '<S697>/Constant Value4'
             *  Switch: '<S697>/Switch2'
             *  Switch: '<S697>/Switch3'
             */
            rtb_Sum2_nj = 0.0F;
        }

        /* End of Switch: '<S697>/Switch1' */
        /* End of Outputs for SubSystem: '<S695>/Protected Division' */

        /* Switch: '<S695>/Switch1' incorporates:
         *  Constant: '<S695>/Constant Value3'
         *  Logic: '<S695>/Logical'
         *  Logic: '<S695>/Logical2'
         */
        if ((ICSR_ac_DW.UnitDelay1_DSTATE_mf) && (!rtb_NotEqual_j1))
        {
            rtb_Subtraction1_b = ICSR_ac_DW.UnitDelay3_DSTATE_iy;
        }
        else
        {
            rtb_Subtraction1_b = 1.0F;
        }

        /* End of Switch: '<S695>/Switch1' */

        /* Switch: '<S695>/Switch3' incorporates:
         *  Constant: '<S695>/Constant Value2'
         *  MinMax: '<S695>/MinMax'
         *  Sum: '<S695>/Summation1'
         */
        rtb_Sum2_nj = fminf(rtb_Subtraction1_b + rtb_Sum2_nj, 1.0F);
    }

    /* RelationalOperator: '<S684>/Not Equal' incorporates:
     *  UnitDelay: '<S684>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeES_d = (VeICSI_b_TCas4Low_Active !=
        ICSR_ac_DW.UnitDelay_DSTATE_bv);

    /* Update for UnitDelay: '<S684>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_bv = VeICSI_b_TCas4Low_Active;

    /* Logic: '<S687>/AND' incorporates:
     *  Logic: '<S687>/OR1'
     *  UnitDelay: '<S687>/Unit Delay'
     */
    rtb_NotEqual_j1 = !ICSR_ac_DW.UnitDelay_DSTATE_fh;

    /* Update for UnitDelay: '<S687>/Unit Delay' incorporates:
     *  Constant: '<S677>/TRUE Constant5'
     */
    ICSR_ac_DW.UnitDelay_DSTATE_fh = true;
    if (rtb_TmpSignalConversionAtVeES_d)
    {
        /* Switch: '<S698>/Switch2' */
        rtb_Sum2_cg = ICSR_ac_DW.UnitDelay_DSTATE_df;

        /* Switch: '<S698>/Switch3' incorporates:
         *  Constant: '<S698>/Constant Value4'
         */
        rtb_Multiplication5_o = 0.0F;
    }
    else
    {
        /* Switch: '<S698>/Switch2' */
        rtb_Sum2_cg = ICSR_ac_DW.UnitDelay_DSTATE_an;

        /* MinMax: '<S698>/Maximum' incorporates:
         *  Constant: '<S688>/Calib'
         *  Constant: '<S691>/Calib'
         *  Switch: '<S694>/Switch1'
         */
        rtb_Multiplication5_o = fmaxf(HeICSR_t_MedTEB_dT,
            KeICSR_t_Ni_NL_IGainBlndTime);

        /* Outputs for Atomic SubSystem: '<S698>/Protected Division' */
        /* Switch: '<S700>/Switch1' incorporates:
         *  Constant: '<S688>/Calib'
         *  Constant: '<S700>/Constant Value'
         *  Constant: '<S700>/Constant Value1'
         *  Constant: '<S700>/Constant Value2'
         *  Constant: '<S700>/Constant Value3'
         *  Logic: '<S700>/AND'
         *  RelationalOperator: '<S700>/Greater Than or Equal '
         *  RelationalOperator: '<S700>/Greater Than or Equal 1'
         *  RelationalOperator: '<S700>/Not Equal'
         *  RelationalOperator: '<S700>/Not Equal1'
         *  Switch: '<S700>/Switch2'
         *  Switch: '<S700>/Switch3'
         */
        if ((HeICSR_t_MedTEB_dT != 0.0F) && (rtb_Multiplication5_o != 0.0F))
        {
            /* Switch: '<S700>/Switch1' incorporates:
             *  Product: '<S700>/Division'
             */
            rtb_Multiplication5_o = HeICSR_t_MedTEB_dT / rtb_Multiplication5_o;
        }
        else if (HeICSR_t_MedTEB_dT > 0.0F)
        {
            /* Switch: '<S700>/Switch2' incorporates:
             *  Constant: '<S700>/MAXFLOAT'
             *  Switch: '<S700>/Switch1'
             */
            rtb_Multiplication5_o = 3.402823466E+38F;
        }
        else if (HeICSR_t_MedTEB_dT < 0.0F)
        {
            /* Switch: '<S700>/Switch3' incorporates:
             *  Constant: '<S700>/MINFLOAT'
             *  Switch: '<S700>/Switch1'
             *  Switch: '<S700>/Switch2'
             */
            rtb_Multiplication5_o = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S700>/Switch1' incorporates:
             *  Constant: '<S700>/Constant Value4'
             *  Switch: '<S700>/Switch2'
             *  Switch: '<S700>/Switch3'
             */
            rtb_Multiplication5_o = 0.0F;
        }

        /* End of Switch: '<S700>/Switch1' */
        /* End of Outputs for SubSystem: '<S698>/Protected Division' */

        /* Switch: '<S698>/Switch1' incorporates:
         *  Constant: '<S698>/Constant Value3'
         *  Logic: '<S698>/Logical'
         *  Logic: '<S698>/Logical2'
         */
        if ((ICSR_ac_DW.UnitDelay1_DSTATE_fm) && (!rtb_NotEqual_j1))
        {
            rtb_Subtraction1_b = ICSR_ac_DW.UnitDelay3_DSTATE_j;
        }
        else
        {
            rtb_Subtraction1_b = 1.0F;
        }

        /* End of Switch: '<S698>/Switch1' */

        /* Switch: '<S698>/Switch3' incorporates:
         *  Constant: '<S698>/Constant Value2'
         *  MinMax: '<S698>/MinMax'
         *  Sum: '<S698>/Summation1'
         */
        rtb_Multiplication5_o = fminf(rtb_Subtraction1_b + rtb_Multiplication5_o,
            1.0F);
    }

    if (VeICSI_b_TCas4Low_Active)
    {
        /* Outputs for Function Call SubSystem: '<S1>/ICSC_NiCL_CalcErr' */
        /* Outputs for Atomic SubSystem: '<S11>/StateOfTheArt_AHSC' */
        rtb_Subtraction1_b = look1_iflf_binlcapw(VeICSR_n_NiErrOut, ((const
            float32 *)&(KxICSR_k_Ni_NonLinIGain_Tcas4Low[0])), ((const float32 *)
            &(KtICSR_k_Ni_NonLinIGain_Tcas4Low[0])), 6U);

        /* End of Outputs for SubSystem: '<S11>/StateOfTheArt_AHSC' */
        /* End of Outputs for SubSystem: '<S1>/ICSC_NiCL_CalcErr' */
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S1>/ICSC_NiCL_CalcErr' */
        /* Outputs for Atomic SubSystem: '<S11>/StateOfTheArt_AHSC' */
        rtb_Subtraction1_b = look1_iflf_binlcapw(VeICSR_n_NiErrOut, ((const
            float32 *)&(KxICSR_k_Ni_NonLinIGain[0])), ((const float32 *)
            &(KtICSR_k_Ni_NonLinIGain[0])), 6U);

        /* End of Outputs for SubSystem: '<S11>/StateOfTheArt_AHSC' */
        /* End of Outputs for SubSystem: '<S1>/ICSC_NiCL_CalcErr' */
    }

    /* Sum: '<S698>/Summation' incorporates:
     *  Constant: '<S698>/Constant Value'
     *  Gain: '<S852>/Gain'
     *  Lookup_n-D: '<S692>/Vector'
     *  Lookup_n-D: '<S693>/Vector'
     */
    rtb_Summation_jb = ((1.0F - rtb_Multiplication5_o) * rtb_Sum2_cg) +
        (rtb_Multiplication5_o * rtb_Subtraction1_b);
    if (VeICSI_b_STADA_LrnActv)
    {
        rtb_Subtraction1_b = 1.0F;
    }
    else
    {
        rtb_Subtraction1_b = rtb_Summation_jb;
    }

    /* Sum: '<S695>/Summation' incorporates:
     *  Constant: '<S677>/Constant Value4'
     *  Constant: '<S695>/Constant Value'
     */
    VeICSC_k_Ni_ErrBsdNonLinIGain_Blnd = ((1.0F - rtb_Sum2_nj) * rtb_Merge1) +
        (rtb_Sum2_nj * rtb_Subtraction1_b);
    if ((VeICSC_b_FreezeNiCL_ITerm) || rtb_TmpSignalConversionAtVeIC_g)
    {
        /* Switch: '<S676>/Switch2' */
        rtb_Sum3_j = ICSR_ac_DW.UnitDelay_DSTATE_nm;
    }
    else
    {
        /* Product: '<S676>/Multiplication1' */
        rtb_TmpSignalConversionAtVeTRAR = rtb_Abs_o * rtb_Sum3_j;

        /* Gain: '<S676>/Negation' */
        rtb_Sum3_j = -rtb_TmpSignalConversionAtVeTRAR;

        /* Outputs for Function Call SubSystem: '<S1>/ICSC_NiCL_CalcErr' */
        /* Outputs for Atomic SubSystem: '<S11>/StateOfTheArt_AHSC' */
        /* Sum: '<S661>/Sum//Sub' incorporates:
         *  Gain: '<S852>/Gain'
         *  Product: '<S661>/Multiplication1'
         *  Product: '<S661>/Multiplication2'
         *  Sum: '<S661>/Add'
         */
        rtb_TmpSignalConversionAtVeCSVR = (((VeICSR_n_NiErrOut *
            VeICSR_K_NiCL_IGain) * VeICSC_k_Ni_ErrBsdNonLinIGain_Blnd) -
            ((ICSR_ac_DW.UnitDelay_DSTATE_d3 - ICSR_ac_DW.UnitDelay1_DSTATE_k3) *
             VeICSR_K_NiCL_I_AntiWindUp_Gain)) + ICSR_ac_DW.UnitDelay_DSTATE_i1;

        /* End of Outputs for SubSystem: '<S11>/StateOfTheArt_AHSC' */
        /* End of Outputs for SubSystem: '<S1>/ICSC_NiCL_CalcErr' */

        /* Outputs for Atomic SubSystem: '<S676>/Limiter' */
        /* Switch: '<S681>/Switch1' incorporates:
         *  RelationalOperator: '<S681>/Relational Operator'
         */
        if (rtb_TmpSignalConversionAtVeTRAR >= rtb_TmpSignalConversionAtVeCSVR)
        {
            /* Switch: '<S681>/Switch1' */
            rtb_TmpSignalConversionAtVeTRAR = rtb_TmpSignalConversionAtVeCSVR;
        }

        /* End of Switch: '<S681>/Switch1' */

        /* Switch: '<S681>/Switch' incorporates:
         *  RelationalOperator: '<S681>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeTRAR > rtb_Sum3_j)
        {
            /* Switch: '<S676>/Switch2' */
            rtb_Sum3_j = rtb_TmpSignalConversionAtVeTRAR;
        }

        /* End of Switch: '<S681>/Switch' */
        /* End of Outputs for SubSystem: '<S676>/Limiter' */
    }

    if ((rtb_TmpSignalConversionAtVeI_lx ||
            (ICSR_ac_DW.VeICSR_b_Ni_CalSwitchTrigger)) || (VeICSR_b_ItermRst))
    {
        /* Switch: '<S676>/Switch' incorporates:
         *  Constant: '<S676>/Constant Value'
         */
        VeICSR_M_EngCLITermRaw = 0.0F;
    }
    else
    {
        /* Switch: '<S676>/Switch' */
        VeICSR_M_EngCLITermRaw = rtb_Sum3_j;
    }

    /* Sum: '<S674>/Sum2' incorporates:
     *  DataStoreRead: '<S661>/Dsr_CalSwitchTrig'
     *  UnitDelay: '<S674>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeTRAR = VeICSR_M_EngCLITermRaw -
        ICSR_ac_DW.UnitDelay_DSTATE_ah;

    /* Outputs for Atomic SubSystem: '<S674>/Limiter' */
    /* Switch: '<S678>/Switch1' incorporates:
     *  RelationalOperator: '<S678>/Relational Operator'
     */
    if (rtb_Vector_as < rtb_TmpSignalConversionAtVeTRAR)
    {
        /* Switch: '<S705>/Switch1' */
        rtb_TmpSignalConversionAtVeTRAR = rtb_Vector_as;
    }

    /* End of Switch: '<S678>/Switch1' */

    /* Switch: '<S678>/Switch' incorporates:
     *  RelationalOperator: '<S678>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeTRAR <= (-rtb_Vector_as))
    {
        rtb_TmpSignalConversionAtVeTRAR = -rtb_Vector_as;
    }

    /* End of Switch: '<S678>/Switch' */
    /* End of Outputs for SubSystem: '<S674>/Limiter' */

    /* Sum: '<S674>/Sum3' incorporates:
     *  UnitDelay: '<S674>/Unit Delay'
     */
    rtb_Vector_as = rtb_TmpSignalConversionAtVeTRAR +
        ICSR_ac_DW.UnitDelay_DSTATE_ah;

    /* Update for UnitDelay: '<S674>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_ah = rtb_Vector_as;

    /* Lookup_n-D: '<S702>/Vector' incorporates:
     *  Sum: '<S607>/Sum3'
     */
    rtb_TmpSignalConversionAtVeTRAR = look1_iflf_binlcapw(rtb_Sum2_ns, ((const
        float32 *)&(KxICSR_dM_NiCL_PTermRtLmt[0])), ((const float32 *)
        &(KtICSR_dM_NiCL_PTermRtLmt[0])), 2U);

    /* Product: '<S663>/Multiplication4' */
    rtb_TmpSignalConversionAtVeESSR = -rtb_TmpSignalConversionAtVeTRAR;

    /* Product: '<S663>/Multiplication2' */
    rtb_TmpSignalConversionAtVeCSVR = VeICSR_M_NiCL_PLimit * rtb_Sum2_ns;
    if (KeICSR_b_UseNonLinearPgain)
    {
        /* Outputs for IfAction SubSystem: '<S704>/NonLinearGain' incorporates:
         *  ActionPort: '<S709>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S709>/EdgeRising' */
        /* Logic: '<S713>/AND' incorporates:
         *  Logic: '<S713>/OR1'
         *  UnitDelay: '<S713>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeES_d = !ICSR_ac_DW.UnitDelay_DSTATE_ds;

        /* Update for UnitDelay: '<S713>/Unit Delay' incorporates:
         *  Constant: '<S709>/TRUE Constant1'
         */
        ICSR_ac_DW.UnitDelay_DSTATE_ds = true;

        /* End of Outputs for SubSystem: '<S709>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S709>/EdgeBi2' */
        /* RelationalOperator: '<S712>/Not Equal' incorporates:
         *  UnitDelay: '<S712>/Unit Delay'
         */
        rtb_NotEqual_j1 = (VeICSI_b_STADA_LrnActv !=
                           ICSR_ac_DW.UnitDelay_DSTATE_ms);

        /* Update for UnitDelay: '<S712>/Unit Delay' */
        ICSR_ac_DW.UnitDelay_DSTATE_ms = VeICSI_b_STADA_LrnActv;

        /* End of Outputs for SubSystem: '<S709>/EdgeBi2' */

        /* Switch: '<S728>/Switch2' incorporates:
         *  Switch: '<S728>/Switch3'
         */
        if (rtb_NotEqual_j1)
        {
            /* Switch: '<S728>/Switch2' incorporates:
             *  UnitDelay: '<S710>/Unit Delay'
             */
            rtb_Switch2_nvv = ICSR_ac_DW.UnitDelay_DSTATE_ng;

            /* Switch: '<S728>/Switch3' incorporates:
             *  Constant: '<S728>/Constant Value4'
             */
            rtb_Negation_j = 0.0F;
        }
        else
        {
            /* Switch: '<S728>/Switch2' incorporates:
             *  UnitDelay: '<S728>/Unit Delay'
             */
            rtb_Switch2_nvv = ICSR_ac_DW.UnitDelay_DSTATE_dn;

            /* Switch: '<S710>/Switch1' incorporates:
             *  Constant: '<S719>/Calib'
             *  Constant: '<S720>/Calib'
             */
            if (VeICSI_b_STADA_LrnActv)
            {
                rtb_Subtraction1_b = KeICSR_t_ClutchLrnCals_BlndIn_Time;
            }
            else
            {
                rtb_Subtraction1_b = KeICSR_t_ClutchLrnCals_BlndOut_Time;
            }

            /* End of Switch: '<S710>/Switch1' */

            /* MinMax: '<S728>/Maximum' incorporates:
             *  Constant: '<S715>/Calib'
             */
            rtb_Switch1_bk = fmaxf(HeICSR_t_MedTEB_dT, rtb_Subtraction1_b);

            /* Outputs for Atomic SubSystem: '<S728>/Protected Division' */
            /* Switch: '<S730>/Switch1' incorporates:
             *  Constant: '<S715>/Calib'
             *  Constant: '<S730>/Constant Value'
             *  Constant: '<S730>/Constant Value1'
             *  Constant: '<S730>/Constant Value2'
             *  Constant: '<S730>/Constant Value3'
             *  Logic: '<S730>/AND'
             *  RelationalOperator: '<S730>/Greater Than or Equal '
             *  RelationalOperator: '<S730>/Greater Than or Equal 1'
             *  RelationalOperator: '<S730>/Not Equal'
             *  RelationalOperator: '<S730>/Not Equal1'
             *  Switch: '<S730>/Switch2'
             *  Switch: '<S730>/Switch3'
             */
            if ((HeICSR_t_MedTEB_dT != 0.0F) && (rtb_Switch1_bk != 0.0F))
            {
                /* Switch: '<S730>/Switch1' incorporates:
                 *  Product: '<S730>/Division'
                 */
                rtb_Switch1_bk = HeICSR_t_MedTEB_dT / rtb_Switch1_bk;
            }
            else if (HeICSR_t_MedTEB_dT > 0.0F)
            {
                /* Switch: '<S730>/Switch2' incorporates:
                 *  Constant: '<S730>/MAXFLOAT'
                 *  Switch: '<S730>/Switch1'
                 */
                rtb_Switch1_bk = 3.402823466E+38F;
            }
            else if (HeICSR_t_MedTEB_dT < 0.0F)
            {
                /* Switch: '<S730>/Switch3' incorporates:
                 *  Constant: '<S730>/MINFLOAT'
                 *  Switch: '<S730>/Switch1'
                 *  Switch: '<S730>/Switch2'
                 */
                rtb_Switch1_bk = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S730>/Switch1' incorporates:
                 *  Constant: '<S730>/Constant Value4'
                 *  Switch: '<S730>/Switch2'
                 *  Switch: '<S730>/Switch3'
                 */
                rtb_Switch1_bk = 0.0F;
            }

            /* End of Switch: '<S730>/Switch1' */
            /* End of Outputs for SubSystem: '<S728>/Protected Division' */

            /* Switch: '<S728>/Switch1' incorporates:
             *  Constant: '<S728>/Constant Value3'
             *  Logic: '<S728>/Logical'
             *  Logic: '<S728>/Logical2'
             *  UnitDelay: '<S728>/Unit Delay1'
             *  UnitDelay: '<S728>/Unit Delay3'
             */
            if ((ICSR_ac_DW.UnitDelay1_DSTATE_g) &&
                    (!rtb_TmpSignalConversionAtVeES_d))
            {
                rtb_Subtraction1_b = ICSR_ac_DW.UnitDelay3_DSTATE_d;
            }
            else
            {
                rtb_Subtraction1_b = 1.0F;
            }

            /* End of Switch: '<S728>/Switch1' */

            /* Switch: '<S728>/Switch3' incorporates:
             *  Constant: '<S728>/Constant Value2'
             *  MinMax: '<S728>/MinMax'
             *  Sum: '<S728>/Summation1'
             */
            rtb_Negation_j = fminf(rtb_Subtraction1_b + rtb_Switch1_bk, 1.0F);
        }

        /* End of Switch: '<S728>/Switch2' */

        /* Outputs for Atomic SubSystem: '<S709>/EdgeBi1' */
        /* RelationalOperator: '<S711>/Not Equal' incorporates:
         *  UnitDelay: '<S711>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeES_d = (VeICSI_b_TCas4Low_Active !=
            ICSR_ac_DW.UnitDelay_DSTATE_dr);

        /* Update for UnitDelay: '<S711>/Unit Delay' */
        ICSR_ac_DW.UnitDelay_DSTATE_dr = VeICSI_b_TCas4Low_Active;

        /* End of Outputs for SubSystem: '<S709>/EdgeBi1' */

        /* Outputs for Atomic SubSystem: '<S709>/EdgeRising2' */
        /* Logic: '<S714>/AND' incorporates:
         *  Logic: '<S714>/OR1'
         *  UnitDelay: '<S714>/Unit Delay'
         */
        rtb_NotEqual_j1 = !ICSR_ac_DW.UnitDelay_DSTATE_l2;

        /* Update for UnitDelay: '<S714>/Unit Delay' incorporates:
         *  Constant: '<S709>/TRUE Constant5'
         */
        ICSR_ac_DW.UnitDelay_DSTATE_l2 = true;

        /* End of Outputs for SubSystem: '<S709>/EdgeRising2' */

        /* Switch: '<S731>/Switch2' incorporates:
         *  Switch: '<S731>/Switch3'
         */
        if (rtb_TmpSignalConversionAtVeES_d)
        {
            /* Switch: '<S731>/Switch2' incorporates:
             *  UnitDelay: '<S727>/Unit Delay'
             */
            rtb_Switch_k3 = ICSR_ac_DW.UnitDelay_DSTATE_co;

            /* Switch: '<S731>/Switch3' incorporates:
             *  Constant: '<S731>/Constant Value4'
             */
            rtb_Switch_ak = 0.0F;
        }
        else
        {
            /* Switch: '<S731>/Switch2' incorporates:
             *  UnitDelay: '<S731>/Unit Delay'
             */
            rtb_Switch_k3 = ICSR_ac_DW.UnitDelay_DSTATE_i5;

            /* MinMax: '<S731>/Maximum' incorporates:
             *  Constant: '<S715>/Calib'
             *  Constant: '<S721>/Calib'
             *  Switch: '<S727>/Switch1'
             */
            rtb_Switch1_bk = fmaxf(HeICSR_t_MedTEB_dT,
                                   KeICSR_t_Ni_NL_PGainBlndTime);

            /* Outputs for Atomic SubSystem: '<S731>/Protected Division' */
            /* Switch: '<S733>/Switch1' incorporates:
             *  Constant: '<S715>/Calib'
             *  Constant: '<S733>/Constant Value'
             *  Constant: '<S733>/Constant Value1'
             *  Constant: '<S733>/Constant Value2'
             *  Constant: '<S733>/Constant Value3'
             *  Logic: '<S733>/AND'
             *  RelationalOperator: '<S733>/Greater Than or Equal '
             *  RelationalOperator: '<S733>/Greater Than or Equal 1'
             *  RelationalOperator: '<S733>/Not Equal'
             *  RelationalOperator: '<S733>/Not Equal1'
             *  Switch: '<S733>/Switch2'
             *  Switch: '<S733>/Switch3'
             */
            if ((HeICSR_t_MedTEB_dT != 0.0F) && (rtb_Switch1_bk != 0.0F))
            {
                /* Switch: '<S733>/Switch1' incorporates:
                 *  Product: '<S733>/Division'
                 */
                rtb_Switch1_bk = HeICSR_t_MedTEB_dT / rtb_Switch1_bk;
            }
            else if (HeICSR_t_MedTEB_dT > 0.0F)
            {
                /* Switch: '<S733>/Switch2' incorporates:
                 *  Constant: '<S733>/MAXFLOAT'
                 *  Switch: '<S733>/Switch1'
                 */
                rtb_Switch1_bk = 3.402823466E+38F;
            }
            else if (HeICSR_t_MedTEB_dT < 0.0F)
            {
                /* Switch: '<S733>/Switch3' incorporates:
                 *  Constant: '<S733>/MINFLOAT'
                 *  Switch: '<S733>/Switch1'
                 *  Switch: '<S733>/Switch2'
                 */
                rtb_Switch1_bk = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S733>/Switch1' incorporates:
                 *  Constant: '<S733>/Constant Value4'
                 *  Switch: '<S733>/Switch2'
                 *  Switch: '<S733>/Switch3'
                 */
                rtb_Switch1_bk = 0.0F;
            }

            /* End of Switch: '<S733>/Switch1' */
            /* End of Outputs for SubSystem: '<S731>/Protected Division' */

            /* Switch: '<S731>/Switch1' incorporates:
             *  Constant: '<S731>/Constant Value3'
             *  Logic: '<S731>/Logical'
             *  Logic: '<S731>/Logical2'
             *  UnitDelay: '<S731>/Unit Delay1'
             *  UnitDelay: '<S731>/Unit Delay3'
             */
            if ((ICSR_ac_DW.UnitDelay1_DSTATE_ba) && (!rtb_NotEqual_j1))
            {
                rtb_Subtraction1_b = ICSR_ac_DW.UnitDelay3_DSTATE_oy;
            }
            else
            {
                rtb_Subtraction1_b = 1.0F;
            }

            /* End of Switch: '<S731>/Switch1' */

            /* Switch: '<S731>/Switch3' incorporates:
             *  Constant: '<S731>/Constant Value2'
             *  MinMax: '<S731>/MinMax'
             *  Sum: '<S731>/Summation1'
             */
            rtb_Switch_ak = fminf(rtb_Subtraction1_b + rtb_Switch1_bk, 1.0F);
        }

        /* End of Switch: '<S731>/Switch2' */

        /* Switch: '<S727>/Switch' incorporates:
         *  Gain: '<S849>/Gain'
         *  Gain: '<S852>/Gain'
         *  Lookup_n-D: '<S722>/Vector'
         *  Switch: '<S709>/Switch'
         */
        if (VeICSI_b_TCas4Low_Active)
        {
            /* Outputs for Function Call SubSystem: '<S1>/ICSC_NiCL_CalcErr' */
            /* Outputs for Atomic SubSystem: '<S11>/StateOfTheArt_AHSC' */
            /* Switch: '<S709>/Switch2' incorporates:
             *  Gain: '<S849>/Gain'
             *  Gain: '<S852>/Gain'
             *  Lookup_n-D: '<S725>/Vector'
             *  Lookup_n-D: '<S726>/Vector'
             */
            if (rtb_Logical2_ls)
            {
                rtb_Subtraction1_b = look1_iflf_binlcapw(VeICSR_n_NiErrOut, ((
                    const float32 *)&(KxICSR_K_Tcas4Low_NiPGainVsErr_rev[0])),
                    ((const float32 *)&(KtICSR_K_Tcas4Low_NiPGainVsErr_rev[0])),
                    7U);
            }
            else
            {
                rtb_Subtraction1_b = look1_iflf_binlcapw(VeICSR_n_NiErrOut, ((
                    const float32 *)&(KxICSR_K_Tcas4Low_NiPGainVsErr[0])), ((
                    const float32 *)&(KtICSR_K_Tcas4Low_NiPGainVsErr[0])), 7U);
            }

            /* End of Switch: '<S709>/Switch2' */
            /* End of Outputs for SubSystem: '<S11>/StateOfTheArt_AHSC' */
            /* End of Outputs for SubSystem: '<S1>/ICSC_NiCL_CalcErr' */
        }
        else
        {
            /* Outputs for Function Call SubSystem: '<S1>/ICSC_NiCL_CalcErr' */
            /* Outputs for Atomic SubSystem: '<S11>/StateOfTheArt_AHSC' */
            if (rtb_Logical2_ls)
            {
                /* Switch: '<S709>/Switch' incorporates:
                 *  Gain: '<S852>/Gain'
                 *  Lookup_n-D: '<S723>/Vector'
                 */
                rtb_Subtraction1_b = look1_iflf_binlcapw(VeICSR_n_NiErrOut, ((
                    const float32 *)&(KxICSR_K_NiPGainVsErr_rev[0])), ((const
                    float32 *)&(KtICSR_K_NiPGainVsErr_rev[0])), 7U);
            }
            else
            {
                rtb_Subtraction1_b = look1_iflf_binlcapw(VeICSR_n_NiErrOut, ((
                    const float32 *)&(KxICSR_K_NiPGainVsErr[0])), ((const
                    float32 *)&(KtICSR_K_NiPGainVsErr[0])), 7U);
            }

            /* End of Outputs for SubSystem: '<S11>/StateOfTheArt_AHSC' */
            /* End of Outputs for SubSystem: '<S1>/ICSC_NiCL_CalcErr' */
        }

        /* End of Switch: '<S727>/Switch' */

        /* Sum: '<S731>/Summation' incorporates:
         *  Constant: '<S731>/Constant Value'
         *  Product: '<S731>/Multiplication'
         *  Product: '<S731>/Multiplication3'
         *  Sum: '<S731>/Subtraction'
         */
        rtb_TmpSignalConversionAtVeHC_b = ((1.0F - rtb_Switch_ak) *
            rtb_Switch_k3) + (rtb_Switch_ak * rtb_Subtraction1_b);

        /* Outputs for Atomic SubSystem: '<S709>/KF_E' */
        /* UnitDelay: '<S716>/Unit Delay1' incorporates:
         *  Sum: '<S716>/error'
         *  UnitDelay: '<S716>/Unit Delay'
         */
        rtb_Switch1_bk = VeICSR_n_InputSpeedProf_PostFilt -
            ICSR_ac_DW.UnitDelay_DSTATE_nz;

        /* Sum: '<S716>/Summation1' incorporates:
         *  Constant: '<S718>/Calib'
         *  Product: '<S716>/Multiplication3'
         *  UnitDelay: '<S716>/Unit Delay1'
         */
        rtb_TmpSignalConversionAtVeESMR = (rtb_Switch1_bk * KeICSR_K_TgtSpdGain2)
            + ICSR_ac_DW.UnitDelay1_DSTATE_n;

        /* Update for UnitDelay: '<S716>/Unit Delay' incorporates:
         *  Constant: '<S715>/Calib'
         *  Constant: '<S717>/Calib'
         *  Product: '<S716>/Multiplication1'
         *  Product: '<S716>/Multiplication4'
         *  Sum: '<S716>/Summation2'
         *  UnitDelay: '<S716>/Unit Delay1'
         */
        ICSR_ac_DW.UnitDelay_DSTATE_nz = ((rtb_Switch1_bk * KeICSR_K_TgtSpdGain1)
            + ICSR_ac_DW.UnitDelay_DSTATE_nz) + (HeICSR_t_MedTEB_dT *
            ICSR_ac_DW.UnitDelay1_DSTATE_n);

        /* Update for UnitDelay: '<S716>/Unit Delay1' */
        ICSR_ac_DW.UnitDelay1_DSTATE_n = rtb_TmpSignalConversionAtVeESMR;

        /* End of Outputs for SubSystem: '<S709>/KF_E' */

        /* Switch: '<S710>/Switch' incorporates:
         *  Constant: '<S709>/Constant Value4'
         *  Lookup_n-D: '<S724>/Vector'
         *  Product: '<S709>/Product'
         *  Sum: '<S716>/Summation1'
         */
        if (VeICSI_b_STADA_LrnActv)
        {
            rtb_Subtraction1_b = 1.0F;
        }
        else
        {
            rtb_Subtraction1_b = rtb_TmpSignalConversionAtVeHC_b *
                look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeESMR, ((const
                float32 *)&(KxICSR_K_NiPGainVsTgtAcc[0])), ((const float32 *)
                &(KtICSR_K_NiPGainVsTgtAcc[0])), 7U);
        }

        /* End of Switch: '<S710>/Switch' */

        /* Sum: '<S728>/Summation' incorporates:
         *  Constant: '<S728>/Constant Value'
         *  Product: '<S728>/Multiplication'
         *  Product: '<S728>/Multiplication3'
         *  Sum: '<S728>/Subtraction'
         */
        VeICSC_k_Ni_ErrBsdNonLinPGain_Blnd = ((1.0F - rtb_Negation_j) *
            rtb_Switch2_nvv) + (rtb_Negation_j * rtb_Subtraction1_b);

        /* Outputs for Function Call SubSystem: '<S1>/ICSC_NiCL_CalcErr' */
        /* Outputs for Atomic SubSystem: '<S11>/StateOfTheArt_AHSC' */
        /* Switch: '<S662>/Switch1' incorporates:
         *  Gain: '<S852>/Gain'
         *  Product: '<S709>/Product1'
         */
        rtb_Switch1_bk = VeICSC_k_Ni_ErrBsdNonLinPGain_Blnd * VeICSR_n_NiErrOut;

        /* End of Outputs for SubSystem: '<S11>/StateOfTheArt_AHSC' */
        /* End of Outputs for SubSystem: '<S1>/ICSC_NiCL_CalcErr' */

        /* Update for UnitDelay: '<S728>/Unit Delay1' incorporates:
         *  Constant: '<S728>/TRUE Constant'
         */
        ICSR_ac_DW.UnitDelay1_DSTATE_g = true;

        /* Update for UnitDelay: '<S728>/Unit Delay3' */
        ICSR_ac_DW.UnitDelay3_DSTATE_d = rtb_Negation_j;

        /* Update for UnitDelay: '<S710>/Unit Delay' */
        ICSR_ac_DW.UnitDelay_DSTATE_ng = VeICSC_k_Ni_ErrBsdNonLinPGain_Blnd;

        /* Update for UnitDelay: '<S728>/Unit Delay' */
        ICSR_ac_DW.UnitDelay_DSTATE_dn = rtb_Switch2_nvv;

        /* Update for UnitDelay: '<S727>/Unit Delay' */
        ICSR_ac_DW.UnitDelay_DSTATE_co = rtb_TmpSignalConversionAtVeHC_b;

        /* Update for UnitDelay: '<S731>/Unit Delay' */
        ICSR_ac_DW.UnitDelay_DSTATE_i5 = rtb_Switch_k3;

        /* Update for UnitDelay: '<S731>/Unit Delay3' */
        ICSR_ac_DW.UnitDelay3_DSTATE_oy = rtb_Switch_ak;

        /* Update for UnitDelay: '<S731>/Unit Delay1' incorporates:
         *  Constant: '<S731>/TRUE Constant'
         */
        ICSR_ac_DW.UnitDelay1_DSTATE_ba = true;

        /* End of Outputs for SubSystem: '<S704>/NonLinearGain' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S704>/LinearGain' incorporates:
         *  ActionPort: '<S708>/Action Port'
         */
        /* Outputs for Function Call SubSystem: '<S1>/ICSC_NiCL_CalcErr' */
        /* Outputs for Atomic SubSystem: '<S11>/StateOfTheArt_AHSC' */
        /* Switch: '<S662>/Switch1' incorporates:
         *  Gain: '<S852>/Gain'
         *  Inport: '<S708>/Eng_Err'
         */
        rtb_Switch1_bk = VeICSR_n_NiErrOut;

        /* End of Outputs for SubSystem: '<S11>/StateOfTheArt_AHSC' */
        /* End of Outputs for SubSystem: '<S1>/ICSC_NiCL_CalcErr' */
        /* End of Outputs for SubSystem: '<S704>/LinearGain' */
    }

    /* Product: '<S663>/Multiplication' incorporates:
     *  Constant: '<S707>/Calib'
     */
    rtb_Switch1_bk = (rtb_Switch1_bk * VeICSR_K_NiCL_PGain) * rtb_Abs_o;

    /* Switch: '<S706>/Switch1' incorporates:
     *  RelationalOperator: '<S706>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtVeCSVR < rtb_Switch1_bk)
    {
        /* Switch: '<S662>/Switch1' */
        rtb_Switch1_bk = rtb_TmpSignalConversionAtVeCSVR;
    }

    /* End of Switch: '<S706>/Switch1' */

    /* Switch: '<S706>/Switch' incorporates:
     *  RelationalOperator: '<S706>/Relational Operator1'
     */
    if (rtb_Switch1_bk > (-rtb_TmpSignalConversionAtVeCSVR))
    {
        /* Switch: '<S706>/Switch' */
        VeICSR_M_EngCLPTermRaw = rtb_Switch1_bk;
    }
    else
    {
        /* Switch: '<S706>/Switch' */
        VeICSR_M_EngCLPTermRaw = -rtb_TmpSignalConversionAtVeCSVR;
    }

    /* End of Switch: '<S706>/Switch' */

    /* Sum: '<S701>/Sum2' incorporates:
     *  UnitDelay: '<S701>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCSVR = VeICSR_M_EngCLPTermRaw -
        ICSR_ac_DW.UnitDelay_DSTATE_au;

    /* Outputs for Atomic SubSystem: '<S701>/Limiter' */
    /* Switch: '<S705>/Switch1' incorporates:
     *  RelationalOperator: '<S705>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtVeTRAR >= rtb_TmpSignalConversionAtVeCSVR)
    {
        /* Switch: '<S705>/Switch1' */
        rtb_TmpSignalConversionAtVeTRAR = rtb_TmpSignalConversionAtVeCSVR;
    }

    /* End of Switch: '<S705>/Switch1' */

    /* Switch: '<S705>/Switch' incorporates:
     *  RelationalOperator: '<S705>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeTRAR > rtb_TmpSignalConversionAtVeESSR)
    {
        rtb_TmpSignalConversionAtVeESSR = rtb_TmpSignalConversionAtVeTRAR;
    }

    /* End of Switch: '<S705>/Switch' */
    /* End of Outputs for SubSystem: '<S701>/Limiter' */

    /* Sum: '<S701>/Sum3' incorporates:
     *  UnitDelay: '<S701>/Unit Delay'
     */
    VeICSR_M_EngCLPTerm = rtb_TmpSignalConversionAtVeESSR +
        ICSR_ac_DW.UnitDelay_DSTATE_au;

    /* Update for UnitDelay: '<S701>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_au = VeICSR_M_EngCLPTerm;

    /* Sum: '<S601>/Sum//Sub1' */
    rtb_Negation1_i5 = (VeICSR_M_EngCLPTerm + rtb_Vector_as) +
        VeICSR_M_EngCLDTerm;

    /* Switch: '<S662>/Switch1' incorporates:
     *  RelationalOperator: '<S662>/Relational Operator'
     */
    if (VeICSR_M_Ni_MaxCLTrq_Arb < rtb_Negation1_i5)
    {
        /* Switch: '<S662>/Switch1' */
        rtb_Switch1_bk = VeICSR_M_Ni_MaxCLTrq_Arb;
    }
    else
    {
        /* Switch: '<S662>/Switch1' */
        rtb_Switch1_bk = rtb_Negation1_i5;
    }

    /* End of Switch: '<S662>/Switch1' */

    /* Switch: '<S662>/Switch' incorporates:
     *  RelationalOperator: '<S662>/Relational Operator1'
     */
    if (rtb_Switch1_bk <= VeICSR_M_Ni_MinCLTrq_Arb)
    {
        /* Switch: '<S662>/Switch' */
        rtb_Switch1_bk = VeICSR_M_Ni_MinCLTrq_Arb;
    }

    /* End of Switch: '<S662>/Switch' */

    /* VariantMerge generated from: '<S9>/Variant Source1' */
    rtb_Switch2_nvv = rtb_Switch1_bk;

    /* End of Outputs for SubSystem: '<S579>/Limiter1' */
    /* End of Outputs for SubSystem: '<S579>/Limiter2' */
    /* End of Outputs for SubSystem: '<S605>/Hysteresis' */
    /* End of Outputs for SubSystem: '<S605>/Hysteresis1' */
    /* End of Outputs for SubSystem: '<S607>/Limiter' */
    /* End of Outputs for SubSystem: '<S600>/EdgeBi1' */
    /* End of Outputs for SubSystem: '<S600>/EdgeBi2' */
    /* End of Outputs for SubSystem: '<S600>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S600>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S600>/EdgeRising2' */
    /* End of Outputs for SubSystem: '<S600>/EdgeRising3' */
    /* End of Outputs for SubSystem: '<S660>/DeadBand' */
    /* End of Outputs for SubSystem: '<S670>/Limiter1' */
    /* End of Outputs for SubSystem: '<S602>/Turn On Delay Time' */
    /* End of Outputs for SubSystem: '<S738>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S602>/LOWR' */
    /* End of Outputs for SubSystem: '<S602>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S676>/GradientLimiter' */
    /* End of Outputs for SubSystem: '<S677>/EdgeBi2' */
    /* End of Outputs for SubSystem: '<S677>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S677>/EdgeBi1' */
    /* End of Outputs for SubSystem: '<S677>/EdgeRising2' */
    /* End of Outputs for SubSystem: '<S661>/GradientLimiter1' */
    /* End of Outputs for SubSystem: '<S703>/Limiter1' */
    /* End of Outputs for SubSystem: '<S663>/GradientLimiter' */
    /* End of Outputs for SubSystem: '<S601>/Limiter1' */
#else

    /* VariantMerge generated from: '<S9>/Variant Source1' incorporates:
     *  Constant: '<S9>/Constant Value'
     */
    rtb_Switch2_nvv = 0.0F;

#endif

    /* End of If: '<S606>/If' */

    /* SignalConversion generated from: '<S9>/Variant Source11' */
    VeICSR_M_EngClSumRaw = rtb_Switch2_nvv;

    /* SignalConversion generated from: '<S9>/Variant Source1' */
#if Rte_SysCon_Variant_ICSR_5

    /* VariantMerge generated from: '<S9>/Variant Source1' */
    rtb_Switch2_nvv = rtb_Vector_as;

#else

    /* VariantMerge generated from: '<S9>/Variant Source1' incorporates:
     *  Constant: '<S9>/Constant Value1'
     */
    rtb_Switch2_nvv = 0.0F;

#endif

    /* SignalConversion generated from: '<S9>/Variant Source1' */
    VeICSR_M_NiCL_Iterm = rtb_Switch2_nvv;

    /* Update for UnitDelay: '<S570>/Unit Delay2' incorporates:
     *  Constant: '<S654>/TRUE Constant'
     *  Constant: '<S657>/TRUE Constant'
     *  Constant: '<S695>/TRUE Constant'
     *  Constant: '<S698>/TRUE Constant'
     *  UnitDelay: '<S567>/Unit Delay1'
     *  UnitDelay: '<S569>/Unit Delay1'
     *  UnitDelay: '<S572>/Unit Delay'
     *  UnitDelay: '<S601>/Unit Delay'
     *  UnitDelay: '<S601>/Unit Delay1'
     *  UnitDelay: '<S607>/Unit Delay'
     *  UnitDelay: '<S652>/Unit Delay'
     *  UnitDelay: '<S653>/Unit Delay'
     *  UnitDelay: '<S654>/Unit Delay'
     *  UnitDelay: '<S654>/Unit Delay1'
     *  UnitDelay: '<S654>/Unit Delay3'
     *  UnitDelay: '<S657>/Unit Delay'
     *  UnitDelay: '<S657>/Unit Delay1'
     *  UnitDelay: '<S657>/Unit Delay3'
     *  UnitDelay: '<S661>/Unit Delay'
     *  UnitDelay: '<S666>/Unit Delay'
     *  UnitDelay: '<S666>/Unit Delay1'
     *  UnitDelay: '<S676>/Unit Delay'
     *  UnitDelay: '<S683>/Unit Delay'
     *  UnitDelay: '<S694>/Unit Delay'
     *  UnitDelay: '<S695>/Unit Delay'
     *  UnitDelay: '<S695>/Unit Delay1'
     *  UnitDelay: '<S695>/Unit Delay3'
     *  UnitDelay: '<S698>/Unit Delay'
     *  UnitDelay: '<S698>/Unit Delay1'
     *  UnitDelay: '<S698>/Unit Delay3'
     */
#if Rte_SysCon_Variant_ICSR_5

    ICSR_ac_DW.UnitDelay2_DSTATE_d = rtb_Switch1_bi;
    ICSR_ac_DW.UnitDelay1_DSTATE_p = rtb_Abs_o;
    ICSR_ac_DW.UnitDelay_DSTATE_bz = rtb_Gain_e;
    ICSR_ac_DW.UnitDelay_DSTATE_ck = rtb_Sum2_ns;
    ICSR_ac_DW.UnitDelay1_DSTATE_dl = true;
    ICSR_ac_DW.UnitDelay3_DSTATE_n = rtb_Product_d0;
    ICSR_ac_DW.UnitDelay1_DSTATE_i = rtb_Switch1_bk;
    ICSR_ac_DW.UnitDelay_DSTATE_mc = VeICSR_M_Ni_MaxCLTrq_Arb;
    ICSR_ac_DW.UnitDelay_DSTATE_ci = rtb_Product1_n4;
    ICSR_ac_DW.UnitDelay1_DSTATE_cj = true;
    ICSR_ac_DW.UnitDelay3_DSTATE_o = rtb_Maximum_b5;
    ICSR_ac_DW.UnitDelay_DSTATE_lc = VeICSR_M_Ni_MinCLTrq_Arb;
    ICSR_ac_DW.UnitDelay_DSTATE_c3 = rtb_Switch4;
    ICSR_ac_DW.UnitDelay1_DSTATE_f = VeICSR_dn_PIDTerm;
    ICSR_ac_DW.UnitDelay_DSTATE_gx = rtb_Merge2;
    ICSR_ac_DW.UnitDelay_DSTATE_d3 = rtb_Negation1_i5;
    ICSR_ac_DW.UnitDelay1_DSTATE_k3 = rtb_Switch1_bk;
    ICSR_ac_DW.UnitDelay_DSTATE_nm = rtb_Sum3_j;
    ICSR_ac_DW.UnitDelay_DSTATE_pb = VeICSC_k_Ni_ErrBsdNonLinIGain_Blnd;
    ICSR_ac_DW.UnitDelay_DSTATE_ii = rtb_Merge1;
    ICSR_ac_DW.UnitDelay3_DSTATE_iy = rtb_Sum2_nj;
    ICSR_ac_DW.UnitDelay1_DSTATE_mf = true;
    ICSR_ac_DW.UnitDelay_DSTATE_df = rtb_Summation_jb;
    ICSR_ac_DW.UnitDelay_DSTATE_an = rtb_Sum2_cg;
    ICSR_ac_DW.UnitDelay3_DSTATE_j = rtb_Multiplication5_o;
    ICSR_ac_DW.UnitDelay1_DSTATE_fm = true;
    ICSR_ac_DW.UnitDelay_DSTATE_i1 = VeICSR_M_EngCLITermRaw;

#endif

    /* End of Update for UnitDelay: '<S570>/Unit Delay2' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ICSC_EvalNxCL'
     */
    /* UnitDelay: '<S745>/Unit Delay' incorporates:
     *  Abs: '<S823>/Abs'
     *  Abs: '<S823>/Abs1'
     *  Constant: '<S762>/Constant Value4'
     *  Constant: '<S783>/Constant Value4'
     *  Gain: '<S748>/Gain'
     *  Gain: '<S759>/Gain1'
     *  Gain: '<S782>/Negation1'
     *  Inport: '<Root>/VeADCR_M_WEDMtrCLMax'
     *  Inport: '<Root>/VeADCR_M_WEDMtrCLMin'
     *  Inport: '<Root>/VeOHSR_b_P2IdleZeroSpdEnbl'
     *  Logic: '<S752>/Logical1'
     *  Logic: '<S761>/Logical1'
     *  Logic: '<S823>/Logical Operator1'
     *  Lookup_n-D: '<S773>/Vector'
     *  Lookup_n-D: '<S774>/Vector'
     *  Lookup_n-D: '<S794>/Vector'
     *  Lookup_n-D: '<S795>/Vector'
     *  Lookup_n-D: '<S796>/Vector'
     *  MinMax: '<S748>/MinMax'
     *  MinMax: '<S748>/MinMax1'
     *  Product: '<S751>/Multiplication2'
     *  Product: '<S752>/Multiplication1'
     *  Product: '<S752>/Multiplication2'
     *  Product: '<S753>/Product'
     *  Product: '<S755>/Multiplication2'
     *  Product: '<S755>/Multiplication3'
     *  Product: '<S755>/Multiplication4'
     *  Product: '<S776>/Multiplication'
     *  Product: '<S776>/Multiplication3'
     *  Product: '<S779>/Multiplication'
     *  Product: '<S779>/Multiplication3'
     *  Product: '<S783>/Product'
     *  Product: '<S798>/Multiplication'
     *  Product: '<S798>/Multiplication3'
     *  Product: '<S801>/Multiplication'
     *  Product: '<S801>/Multiplication3'
     *  Product: '<S816>/Multiplication'
     *  Product: '<S816>/Multiplication3'
     *  Product: '<S819>/Multiplication'
     *  Product: '<S819>/Multiplication3'
     *  RelationalOperator: '<S748>/Relational Operator'
     *  RelationalOperator: '<S823>/Comparison2'
     *  RelationalOperator: '<S823>/Comparison3'
     *  SignalConversion generated from: '<S10>/Variant Source1'
     *  SignalConversion generated from: '<S1>/VeHCCR_M_Clch1_TorqEst'
     *  Sum: '<S747>/Sum//Sub1'
     *  Sum: '<S748>/Add'
     *  Sum: '<S752>/Add'
     *  Sum: '<S752>/Add1'
     *  Sum: '<S755>/Summation'
     *  Sum: '<S755>/Summation1'
     *  Sum: '<S755>/Summation2'
     *  Sum: '<S776>/Subtraction'
     *  Sum: '<S776>/Summation'
     *  Sum: '<S779>/Subtraction'
     *  Sum: '<S779>/Summation'
     *  Sum: '<S798>/Subtraction'
     *  Sum: '<S798>/Summation'
     *  Sum: '<S801>/Subtraction'
     *  Sum: '<S801>/Summation'
     *  Sum: '<S816>/Subtraction'
     *  Sum: '<S816>/Summation'
     *  Sum: '<S819>/Subtraction'
     *  Sum: '<S819>/Summation'
     *  Switch: '<S761>/Switch'
     *  Switch: '<S761>/Switch2'
     *  Switch: '<S764>/Switch'
     *  Switch: '<S775>/Switch'
     *  Switch: '<S776>/Switch2'
     *  Switch: '<S776>/Switch3'
     *  Switch: '<S779>/Switch2'
     *  Switch: '<S779>/Switch3'
     *  Switch: '<S785>/Switch'
     *  Switch: '<S797>/Switch'
     *  Switch: '<S798>/Switch2'
     *  Switch: '<S798>/Switch3'
     *  Switch: '<S801>/Switch2'
     *  Switch: '<S801>/Switch3'
     *  Switch: '<S814>/Switch'
     *  Switch: '<S814>/Switch1'
     *  Switch: '<S815>/Switch'
     *  Switch: '<S815>/Switch1'
     *  Switch: '<S816>/Switch2'
     *  Switch: '<S816>/Switch3'
     *  Switch: '<S819>/Switch2'
     *  Switch: '<S819>/Switch3'
     *  Switch: '<S859>/Switch1'
     *  UnitDelay: '<S747>/Unit Delay'
     *  UnitDelay: '<S747>/Unit Delay1'
     *  UnitDelay: '<S752>/Unit Delay'
     *  UnitDelay: '<S755>/Unit Delay'
     *  UnitDelay: '<S755>/Unit Delay1'
     *  UnitDelay: '<S761>/Unit Delay'
     *  UnitDelay: '<S764>/Unit Delay'
     *  UnitDelay: '<S775>/Unit Delay'
     *  UnitDelay: '<S776>/Unit Delay'
     *  UnitDelay: '<S776>/Unit Delay1'
     *  UnitDelay: '<S776>/Unit Delay3'
     *  UnitDelay: '<S779>/Unit Delay'
     *  UnitDelay: '<S779>/Unit Delay1'
     *  UnitDelay: '<S779>/Unit Delay3'
     *  UnitDelay: '<S785>/Unit Delay'
     *  UnitDelay: '<S797>/Unit Delay'
     *  UnitDelay: '<S798>/Unit Delay'
     *  UnitDelay: '<S798>/Unit Delay1'
     *  UnitDelay: '<S798>/Unit Delay3'
     *  UnitDelay: '<S801>/Unit Delay'
     *  UnitDelay: '<S801>/Unit Delay1'
     *  UnitDelay: '<S801>/Unit Delay3'
     *  UnitDelay: '<S814>/Unit Delay'
     *  UnitDelay: '<S815>/Unit Delay'
     *  UnitDelay: '<S816>/Unit Delay'
     *  UnitDelay: '<S816>/Unit Delay1'
     *  UnitDelay: '<S816>/Unit Delay3'
     *  UnitDelay: '<S819>/Unit Delay'
     *  UnitDelay: '<S819>/Unit Delay1'
     *  UnitDelay: '<S819>/Unit Delay3'
     */
#if Rte_SysCon_Variant_ICSR_4

    /* Outputs for Atomic SubSystem: '<S747>/Limiter1' */
    /* Outputs for Atomic SubSystem: '<S759>/Limiter' */
    /* Outputs for Atomic SubSystem: '<S751>/DeadBand' */
    /* Outputs for Atomic SubSystem: '<S762>/EdgeRising2' */
    /* Outputs for Atomic SubSystem: '<S762>/EdgeBi1' */
    /* Outputs for Atomic SubSystem: '<S762>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S762>/EdgeBi2' */
    /* Outputs for Atomic SubSystem: '<S749>/EdgeBi' */
    /* Outputs for Atomic SubSystem: '<S782>/Limiter1' */
    /* Outputs for Atomic SubSystem: '<S783>/EdgeRising2' */
    /* Outputs for Atomic SubSystem: '<S783>/EdgeBi1' */
    /* Outputs for Atomic SubSystem: '<S783>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S783>/EdgeBi2' */
    /* Outputs for Atomic SubSystem: '<S748>/EdgeRising3' */
    /* Outputs for Atomic SubSystem: '<S748>/EdgeBi2' */
    /* Outputs for Atomic SubSystem: '<S748>/EdgeRising1' */
    /* Outputs for Atomic SubSystem: '<S748>/EdgeRising2' */
    /* Outputs for Atomic SubSystem: '<S748>/EdgeBi1' */
    /* Outputs for Atomic SubSystem: '<S748>/EdgeRising' */
    /* RelationalOperator: '<S748>/Relational Operator' incorporates:
     *  Constant: '<S810>/Constant'
     *  SignalConversion generated from: '<S1>/VeOHSR_e_ILEState'
     */
    rtb_TmpSignalConversionAtVeES_d = (((uint32)rtb_TmpSignalConversionAtVeOHSR)
        == CeOHSR_e_LaunchSpdCntrl);

    /* Logic: '<S806>/AND' incorporates:
     *  Logic: '<S806>/OR1'
     *  UnitDelay: '<S806>/Unit Delay'
     */
    rtb_Logical2_ls = (rtb_TmpSignalConversionAtVeES_d &&
                       (!ICSR_ac_DW.UnitDelay_DSTATE_fc));

    /* Update for UnitDelay: '<S806>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_fc = rtb_TmpSignalConversionAtVeES_d;

    /* RelationalOperator: '<S804>/Not Equal' incorporates:
     *  UnitDelay: '<S804>/Unit Delay'
     */
    rtb_NotEqual_j1 = (rtb_TmpSignalConversionAtVeES_d !=
                       ICSR_ac_DW.UnitDelay_DSTATE_hl);

    /* Update for UnitDelay: '<S804>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_hl = rtb_TmpSignalConversionAtVeES_d;
    if (rtb_NotEqual_j1)
    {
        /* Switch: '<S814>/Switch2' */
        if (rtb_Logical2_ls)
        {
            /* Switch: '<S814>/Switch2' incorporates:
             *  MinMax: '<S814>/MinMax'
             */
            rtb_Switch2_gm = fmaxf(ICSR_ac_DW.UnitDelay_DSTATE_cd,
                                   rtb_TmpSignalConversionAtVeMTIR);
        }
        else
        {
            /* Switch: '<S814>/Switch2' */
            rtb_Switch2_gm = ICSR_ac_DW.UnitDelay_DSTATE_g;
        }

        /* End of Switch: '<S814>/Switch2' */
    }
    else
    {
        /* Switch: '<S816>/Switch2' */
        rtb_Switch2_gm = ICSR_ac_DW.UnitDelay_DSTATE_ho;
    }

    /* Logic: '<S808>/AND' incorporates:
     *  Logic: '<S808>/OR1'
     *  UnitDelay: '<S808>/Unit Delay'
     */
    rtb_Logical2_ls = !ICSR_ac_DW.UnitDelay_DSTATE_az;

    /* Update for UnitDelay: '<S808>/Unit Delay' incorporates:
     *  Constant: '<S748>/TRUE Constant5'
     */
    ICSR_ac_DW.UnitDelay_DSTATE_az = true;
    if (rtb_NotEqual_j1)
    {
        /* Switch: '<S816>/Switch3' incorporates:
         *  Constant: '<S816>/Constant Value4'
         */
        rtb_Maximum_e2 = 0.0F;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeES_d)
        {
            /* Switch: '<S814>/Switch1' incorporates:
             *  Constant: '<S812>/Calib'
             */
            rtb_Sum2_cg = KeICSR_t_NxTrqLim_BlndInTm;
        }
        else
        {
            /* Switch: '<S814>/Switch1' incorporates:
             *  Constant: '<S813>/Calib'
             */
            rtb_Sum2_cg = KeICSR_t_NxTrqLim_BlndOutTm;
        }

        /* MinMax: '<S816>/Maximum' incorporates:
         *  Constant: '<S811>/Calib'
         */
        rtb_Maximum_e2 = fmaxf(HeICSR_t_MedTEB_dT, rtb_Sum2_cg);

        /* Outputs for Atomic SubSystem: '<S816>/Protected Division' */
        /* Switch: '<S818>/Switch1' incorporates:
         *  Constant: '<S811>/Calib'
         *  Constant: '<S818>/Constant Value'
         *  Constant: '<S818>/Constant Value1'
         *  Constant: '<S818>/Constant Value2'
         *  Constant: '<S818>/Constant Value3'
         *  Logic: '<S818>/AND'
         *  RelationalOperator: '<S818>/Greater Than or Equal '
         *  RelationalOperator: '<S818>/Greater Than or Equal 1'
         *  RelationalOperator: '<S818>/Not Equal'
         *  RelationalOperator: '<S818>/Not Equal1'
         *  Switch: '<S818>/Switch2'
         *  Switch: '<S818>/Switch3'
         */
        if ((HeICSR_t_MedTEB_dT != 0.0F) && (rtb_Maximum_e2 != 0.0F))
        {
            /* Switch: '<S818>/Switch1' incorporates:
             *  Product: '<S818>/Division'
             */
            rtb_Maximum_e2 = HeICSR_t_MedTEB_dT / rtb_Maximum_e2;
        }
        else if (HeICSR_t_MedTEB_dT > 0.0F)
        {
            /* Switch: '<S818>/Switch2' incorporates:
             *  Constant: '<S818>/MAXFLOAT'
             *  Switch: '<S818>/Switch1'
             */
            rtb_Maximum_e2 = 3.402823466E+38F;
        }
        else if (HeICSR_t_MedTEB_dT < 0.0F)
        {
            /* Switch: '<S818>/Switch3' incorporates:
             *  Constant: '<S818>/MINFLOAT'
             *  Switch: '<S818>/Switch1'
             *  Switch: '<S818>/Switch2'
             */
            rtb_Maximum_e2 = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S818>/Switch1' incorporates:
             *  Constant: '<S818>/Constant Value4'
             *  Switch: '<S818>/Switch2'
             *  Switch: '<S818>/Switch3'
             */
            rtb_Maximum_e2 = 0.0F;
        }

        /* End of Switch: '<S818>/Switch1' */
        /* End of Outputs for SubSystem: '<S816>/Protected Division' */

        /* Switch: '<S816>/Switch1' incorporates:
         *  Constant: '<S816>/Constant Value3'
         *  Logic: '<S816>/Logical'
         *  Logic: '<S816>/Logical2'
         */
        if ((ICSR_ac_DW.UnitDelay1_DSTATE_pl) && (!rtb_Logical2_ls))
        {
            rtb_Subtraction1_b = ICSR_ac_DW.UnitDelay3_DSTATE_b;
        }
        else
        {
            rtb_Subtraction1_b = 1.0F;
        }

        /* End of Switch: '<S816>/Switch1' */

        /* Switch: '<S816>/Switch3' incorporates:
         *  Constant: '<S816>/Constant Value2'
         *  MinMax: '<S816>/MinMax'
         *  Sum: '<S816>/Summation1'
         */
        rtb_Maximum_e2 = fminf(rtb_Subtraction1_b + rtb_Maximum_e2, 1.0F);
    }

    /* Sum: '<S748>/Add' incorporates:
     *  Switch: '<S814>/Switch1'
     */
    VeICSR_M_NxCLMaxTrqCal = (VeICSR_M_NxCL_PLimit + VeICSR_M_NxCL_ILimit) +
        VeICSR_M_NxCL_DLimit;
    (void)Rte_Read_VeADCR_M_WEDMtrCLMax_Value(&rtb_Switch2_b2);

    /* MinMax: '<S748>/MinMax1' incorporates:
     *  Inport: '<Root>/VeADCR_M_WEDMtrCLMax'
     */
    VeICSR_M_NxCLMaxTrqArb_WED = fminf(rtb_Switch2_b2, VeICSR_M_NxCLMaxTrqCal);
    if (!rtb_TmpSignalConversionAtVeES_d)
    {
        rtb_TmpSignalConversionAtVeMTIR = VeICSR_M_NxCLMaxTrqArb_WED;
    }

    /* Sum: '<S816>/Summation' incorporates:
     *  Constant: '<S816>/Constant Value'
     */
    VeICSR_M_Nx_MaxCLTrq_Arb = ((1.0F - rtb_Maximum_e2) * rtb_Switch2_gm) +
        (rtb_Maximum_e2 * rtb_TmpSignalConversionAtVeMTIR);

    /* Logic: '<S807>/AND' incorporates:
     *  Logic: '<S807>/OR1'
     *  UnitDelay: '<S807>/Unit Delay'
     */
    rtb_Logical2_ls = (rtb_TmpSignalConversionAtVeES_d &&
                       (!ICSR_ac_DW.UnitDelay_DSTATE_c4));

    /* Update for UnitDelay: '<S807>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_c4 = rtb_TmpSignalConversionAtVeES_d;

    /* RelationalOperator: '<S805>/Not Equal' incorporates:
     *  UnitDelay: '<S805>/Unit Delay'
     */
    rtb_NotEqual_j1 = (rtb_TmpSignalConversionAtVeES_d !=
                       ICSR_ac_DW.UnitDelay_DSTATE_ik);

    /* Update for UnitDelay: '<S805>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_ik = rtb_TmpSignalConversionAtVeES_d;
    if (rtb_NotEqual_j1)
    {
        /* Switch: '<S815>/Switch2' */
        if (rtb_Logical2_ls)
        {
            /* Switch: '<S815>/Switch2' incorporates:
             *  MinMax: '<S815>/MinMax'
             */
            rtb_Switch2_b2 = fminf(ICSR_ac_DW.UnitDelay_DSTATE_cd,
                                   rtb_TmpSignalConversionAtVeMT_l);
        }
        else
        {
            /* Switch: '<S815>/Switch2' */
            rtb_Switch2_b2 = ICSR_ac_DW.UnitDelay_DSTATE_i2;
        }

        /* End of Switch: '<S815>/Switch2' */
    }
    else
    {
        /* Switch: '<S819>/Switch2' */
        rtb_Switch2_b2 = ICSR_ac_DW.UnitDelay_DSTATE_eb;
    }

    /* Logic: '<S809>/AND' incorporates:
     *  Logic: '<S809>/OR1'
     *  UnitDelay: '<S809>/Unit Delay'
     */
    rtb_Logical2_ls = !ICSR_ac_DW.UnitDelay_DSTATE_bl;

    /* Update for UnitDelay: '<S809>/Unit Delay' incorporates:
     *  Constant: '<S748>/TRUE Constant1'
     */
    ICSR_ac_DW.UnitDelay_DSTATE_bl = true;
    if (rtb_NotEqual_j1)
    {
        /* Switch: '<S819>/Switch3' incorporates:
         *  Constant: '<S819>/Constant Value4'
         */
        rtb_Maximum_de = 0.0F;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeES_d)
        {
            /* Switch: '<S815>/Switch1' incorporates:
             *  Constant: '<S812>/Calib'
             */
            rtb_Sum2_cg = KeICSR_t_NxTrqLim_BlndInTm;
        }
        else
        {
            /* Switch: '<S815>/Switch1' incorporates:
             *  Constant: '<S813>/Calib'
             */
            rtb_Sum2_cg = KeICSR_t_NxTrqLim_BlndOutTm;
        }

        /* MinMax: '<S819>/Maximum' incorporates:
         *  Constant: '<S811>/Calib'
         */
        rtb_Maximum_de = fmaxf(HeICSR_t_MedTEB_dT, rtb_Sum2_cg);

        /* Outputs for Atomic SubSystem: '<S819>/Protected Division' */
        /* Switch: '<S821>/Switch1' incorporates:
         *  Constant: '<S811>/Calib'
         *  Constant: '<S821>/Constant Value'
         *  Constant: '<S821>/Constant Value1'
         *  Constant: '<S821>/Constant Value2'
         *  Constant: '<S821>/Constant Value3'
         *  Logic: '<S821>/AND'
         *  RelationalOperator: '<S821>/Greater Than or Equal '
         *  RelationalOperator: '<S821>/Greater Than or Equal 1'
         *  RelationalOperator: '<S821>/Not Equal'
         *  RelationalOperator: '<S821>/Not Equal1'
         *  Switch: '<S821>/Switch2'
         *  Switch: '<S821>/Switch3'
         */
        if ((HeICSR_t_MedTEB_dT != 0.0F) && (rtb_Maximum_de != 0.0F))
        {
            /* Switch: '<S821>/Switch1' incorporates:
             *  Product: '<S821>/Division'
             */
            rtb_Maximum_de = HeICSR_t_MedTEB_dT / rtb_Maximum_de;
        }
        else if (HeICSR_t_MedTEB_dT > 0.0F)
        {
            /* Switch: '<S821>/Switch2' incorporates:
             *  Constant: '<S821>/MAXFLOAT'
             *  Switch: '<S821>/Switch1'
             */
            rtb_Maximum_de = 3.402823466E+38F;
        }
        else if (HeICSR_t_MedTEB_dT < 0.0F)
        {
            /* Switch: '<S821>/Switch3' incorporates:
             *  Constant: '<S821>/MINFLOAT'
             *  Switch: '<S821>/Switch1'
             *  Switch: '<S821>/Switch2'
             */
            rtb_Maximum_de = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S821>/Switch1' incorporates:
             *  Constant: '<S821>/Constant Value4'
             *  Switch: '<S821>/Switch2'
             *  Switch: '<S821>/Switch3'
             */
            rtb_Maximum_de = 0.0F;
        }

        /* End of Switch: '<S821>/Switch1' */
        /* End of Outputs for SubSystem: '<S819>/Protected Division' */

        /* Switch: '<S819>/Switch1' incorporates:
         *  Constant: '<S819>/Constant Value3'
         *  Logic: '<S819>/Logical'
         *  Logic: '<S819>/Logical2'
         */
        if ((ICSR_ac_DW.UnitDelay1_DSTATE_kl) && (!rtb_Logical2_ls))
        {
            rtb_Subtraction1_b = ICSR_ac_DW.UnitDelay3_DSTATE_m;
        }
        else
        {
            rtb_Subtraction1_b = 1.0F;
        }

        /* End of Switch: '<S819>/Switch1' */

        /* Switch: '<S819>/Switch3' incorporates:
         *  Constant: '<S819>/Constant Value2'
         *  MinMax: '<S819>/MinMax'
         *  Sum: '<S819>/Summation1'
         */
        rtb_Maximum_de = fminf(rtb_Subtraction1_b + rtb_Maximum_de, 1.0F);
    }

    (void)Rte_Read_VeADCR_M_WEDMtrCLMin_Value(&rtb_Switch2_ni);

    /* MinMax: '<S748>/MinMax' incorporates:
     *  Inport: '<Root>/VeADCR_M_WEDMtrCLMin'
     *  Switch: '<S815>/Switch1'
     */
    VeICSR_M_NxCLMinTrqArb_WED = fmaxf(rtb_Switch2_ni, -VeICSR_M_NxCLMaxTrqCal);
    if (!rtb_TmpSignalConversionAtVeES_d)
    {
        rtb_TmpSignalConversionAtVeMT_l = VeICSR_M_NxCLMinTrqArb_WED;
    }

    /* Sum: '<S819>/Summation' incorporates:
     *  Constant: '<S819>/Constant Value'
     */
    VeICSR_M_Nx_MinCLTrq_Arb = ((1.0F - rtb_Maximum_de) * rtb_Switch2_b2) +
        (rtb_Maximum_de * rtb_TmpSignalConversionAtVeMT_l);

    /* RelationalOperator: '<S787>/Not Equal' incorporates:
     *  UnitDelay: '<S787>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeES_d = (VeICSI_b_Nx_ClchLrn_Active !=
        ICSR_ac_DW.UnitDelay_DSTATE_lz);

    /* Update for UnitDelay: '<S787>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_lz = VeICSI_b_Nx_ClchLrn_Active;

    /* Logic: '<S788>/AND' incorporates:
     *  Logic: '<S788>/OR1'
     *  UnitDelay: '<S788>/Unit Delay'
     */
    rtb_NotEqual_j1 = !ICSR_ac_DW.UnitDelay_DSTATE_fj;

    /* Update for UnitDelay: '<S788>/Unit Delay' incorporates:
     *  Constant: '<S783>/TRUE Constant1'
     */
    ICSR_ac_DW.UnitDelay_DSTATE_fj = true;
    if (rtb_TmpSignalConversionAtVeES_d)
    {
        /* Switch: '<S798>/Switch2' */
        rtb_Switch2_ni = ICSR_ac_DW.UnitDelay_DSTATE_jk;

        /* Switch: '<S798>/Switch3' incorporates:
         *  Constant: '<S798>/Constant Value4'
         */
        rtb_Maximum_l = 0.0F;
    }
    else
    {
        /* Switch: '<S798>/Switch2' */
        rtb_Switch2_ni = ICSR_ac_DW.UnitDelay_DSTATE_jf;

        /* Switch: '<S785>/Switch1' incorporates:
         *  Constant: '<S791>/Calib'
         *  Constant: '<S792>/Calib'
         */
        if (VeICSI_b_Nx_ClchLrn_Active)
        {
            rtb_Subtraction1_b = KeICSR_t_ClutchLrnCals_BlndIn_Time;
        }
        else
        {
            rtb_Subtraction1_b = KeICSR_t_ClutchLrnCals_BlndOut_Time;
        }

        /* End of Switch: '<S785>/Switch1' */

        /* MinMax: '<S798>/Maximum' incorporates:
         *  Constant: '<S790>/Calib'
         */
        rtb_Maximum_l = fmaxf(HeICSR_t_MedTEB_dT, rtb_Subtraction1_b);

        /* Outputs for Atomic SubSystem: '<S798>/Protected Division' */
        /* Switch: '<S800>/Switch1' incorporates:
         *  Constant: '<S790>/Calib'
         *  Constant: '<S800>/Constant Value'
         *  Constant: '<S800>/Constant Value1'
         *  Constant: '<S800>/Constant Value2'
         *  Constant: '<S800>/Constant Value3'
         *  Logic: '<S800>/AND'
         *  RelationalOperator: '<S800>/Greater Than or Equal '
         *  RelationalOperator: '<S800>/Greater Than or Equal 1'
         *  RelationalOperator: '<S800>/Not Equal'
         *  RelationalOperator: '<S800>/Not Equal1'
         *  Switch: '<S800>/Switch2'
         *  Switch: '<S800>/Switch3'
         */
        if ((HeICSR_t_MedTEB_dT != 0.0F) && (rtb_Maximum_l != 0.0F))
        {
            /* Switch: '<S800>/Switch1' incorporates:
             *  Product: '<S800>/Division'
             */
            rtb_Maximum_l = HeICSR_t_MedTEB_dT / rtb_Maximum_l;
        }
        else if (HeICSR_t_MedTEB_dT > 0.0F)
        {
            /* Switch: '<S800>/Switch2' incorporates:
             *  Constant: '<S800>/MAXFLOAT'
             *  Switch: '<S800>/Switch1'
             */
            rtb_Maximum_l = 3.402823466E+38F;
        }
        else if (HeICSR_t_MedTEB_dT < 0.0F)
        {
            /* Switch: '<S800>/Switch3' incorporates:
             *  Constant: '<S800>/MINFLOAT'
             *  Switch: '<S800>/Switch1'
             *  Switch: '<S800>/Switch2'
             */
            rtb_Maximum_l = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S800>/Switch1' incorporates:
             *  Constant: '<S800>/Constant Value4'
             *  Switch: '<S800>/Switch2'
             *  Switch: '<S800>/Switch3'
             */
            rtb_Maximum_l = 0.0F;
        }

        /* End of Switch: '<S800>/Switch1' */
        /* End of Outputs for SubSystem: '<S798>/Protected Division' */

        /* Switch: '<S798>/Switch1' incorporates:
         *  Constant: '<S798>/Constant Value3'
         *  Logic: '<S798>/Logical'
         *  Logic: '<S798>/Logical2'
         */
        if ((ICSR_ac_DW.UnitDelay1_DSTATE_jq) && (!rtb_NotEqual_j1))
        {
            rtb_Subtraction1_b = ICSR_ac_DW.UnitDelay3_DSTATE_h;
        }
        else
        {
            rtb_Subtraction1_b = 1.0F;
        }

        /* End of Switch: '<S798>/Switch1' */

        /* Switch: '<S798>/Switch3' incorporates:
         *  Constant: '<S798>/Constant Value2'
         *  MinMax: '<S798>/MinMax'
         *  Sum: '<S798>/Summation1'
         */
        rtb_Maximum_l = fminf(rtb_Subtraction1_b + rtb_Maximum_l, 1.0F);
    }

    /* RelationalOperator: '<S786>/Not Equal' incorporates:
     *  UnitDelay: '<S786>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeES_d = (VeICSI_b_TCas4Low_Active !=
        ICSR_ac_DW.UnitDelay_DSTATE_f2s);

    /* Update for UnitDelay: '<S786>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_f2s = VeICSI_b_TCas4Low_Active;

    /* Logic: '<S789>/AND' incorporates:
     *  Logic: '<S789>/OR1'
     *  UnitDelay: '<S789>/Unit Delay'
     */
    rtb_NotEqual_j1 = !ICSR_ac_DW.UnitDelay_DSTATE_jcc;

    /* Update for UnitDelay: '<S789>/Unit Delay' incorporates:
     *  Constant: '<S783>/TRUE Constant5'
     */
    ICSR_ac_DW.UnitDelay_DSTATE_jcc = true;
    if (rtb_TmpSignalConversionAtVeES_d)
    {
        /* Switch: '<S801>/Switch2' */
        rtb_Switch2_cm = ICSR_ac_DW.UnitDelay_DSTATE_cq;

        /* Switch: '<S801>/Switch3' incorporates:
         *  Constant: '<S801>/Constant Value4'
         */
        rtb_Maximum_j = 0.0F;
    }
    else
    {
        /* Switch: '<S801>/Switch2' */
        rtb_Switch2_cm = ICSR_ac_DW.UnitDelay_DSTATE_d;

        /* MinMax: '<S801>/Maximum' incorporates:
         *  Constant: '<S790>/Calib'
         *  Constant: '<S793>/Calib'
         *  Switch: '<S797>/Switch1'
         */
        rtb_Maximum_j = fmaxf(HeICSR_t_MedTEB_dT, KeICSR_t_Nx_NLPGainBlndTime);

        /* Outputs for Atomic SubSystem: '<S801>/Protected Division' */
        /* Switch: '<S803>/Switch1' incorporates:
         *  Constant: '<S790>/Calib'
         *  Constant: '<S803>/Constant Value'
         *  Constant: '<S803>/Constant Value1'
         *  Constant: '<S803>/Constant Value2'
         *  Constant: '<S803>/Constant Value3'
         *  Logic: '<S803>/AND'
         *  RelationalOperator: '<S803>/Greater Than or Equal '
         *  RelationalOperator: '<S803>/Greater Than or Equal 1'
         *  RelationalOperator: '<S803>/Not Equal'
         *  RelationalOperator: '<S803>/Not Equal1'
         *  Switch: '<S803>/Switch2'
         *  Switch: '<S803>/Switch3'
         */
        if ((HeICSR_t_MedTEB_dT != 0.0F) && (rtb_Maximum_j != 0.0F))
        {
            /* Switch: '<S803>/Switch1' incorporates:
             *  Product: '<S803>/Division'
             */
            rtb_Maximum_j = HeICSR_t_MedTEB_dT / rtb_Maximum_j;
        }
        else if (HeICSR_t_MedTEB_dT > 0.0F)
        {
            /* Switch: '<S803>/Switch2' incorporates:
             *  Constant: '<S803>/MAXFLOAT'
             *  Switch: '<S803>/Switch1'
             */
            rtb_Maximum_j = 3.402823466E+38F;
        }
        else if (HeICSR_t_MedTEB_dT < 0.0F)
        {
            /* Switch: '<S803>/Switch3' incorporates:
             *  Constant: '<S803>/MINFLOAT'
             *  Switch: '<S803>/Switch1'
             *  Switch: '<S803>/Switch2'
             */
            rtb_Maximum_j = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S803>/Switch1' incorporates:
             *  Constant: '<S803>/Constant Value4'
             *  Switch: '<S803>/Switch2'
             *  Switch: '<S803>/Switch3'
             */
            rtb_Maximum_j = 0.0F;
        }

        /* End of Switch: '<S803>/Switch1' */
        /* End of Outputs for SubSystem: '<S801>/Protected Division' */

        /* Switch: '<S801>/Switch1' incorporates:
         *  Constant: '<S801>/Constant Value3'
         *  Logic: '<S801>/Logical'
         *  Logic: '<S801>/Logical2'
         */
        if ((ICSR_ac_DW.UnitDelay1_DSTATE_jj) && (!rtb_NotEqual_j1))
        {
            rtb_Subtraction1_b = ICSR_ac_DW.UnitDelay3_DSTATE_i;
        }
        else
        {
            rtb_Subtraction1_b = 1.0F;
        }

        /* End of Switch: '<S801>/Switch1' */

        /* Switch: '<S801>/Switch3' incorporates:
         *  Constant: '<S801>/Constant Value2'
         *  MinMax: '<S801>/MinMax'
         *  Sum: '<S801>/Summation1'
         */
        rtb_Maximum_j = fminf(rtb_Subtraction1_b + rtb_Maximum_j, 1.0F);
    }

    if (VeICSI_b_TCas4Low_Active)
    {
        rtb_Subtraction1_b = look1_iflf_binlcapw(VeICSR_n_NxErrFilt, ((const
            float32 *)&(KxICSR_k_NxNonLinPGain_Tcas4Low[0])), ((const float32 *)
            &(KtICSR_k_NxNonLinPGain_Tcas4Low[0])), 6U);
    }
    else
    {
        rtb_Subtraction1_b = look1_iflf_binlcapw(VeICSR_n_NxErrFilt, ((const
            float32 *)&(KxICSR_k_NxNonLinPGain[0])), ((const float32 *)
            &(KtICSR_k_NxNonLinPGain[0])), 6U);
    }

    /* Sum: '<S801>/Summation' incorporates:
     *  Constant: '<S801>/Constant Value'
     *  Lookup_n-D: '<S794>/Vector'
     *  Lookup_n-D: '<S795>/Vector'
     *  Switch: '<S859>/Switch1'
     */
    VeICSC_k_Nx_ErrBsdNonLinPGain_Blnd = ((1.0F - rtb_Maximum_j) *
        rtb_Switch2_cm) + (rtb_Maximum_j * rtb_Subtraction1_b);
    if (VeICSI_b_Nx_ClchLrn_Active)
    {
        rtb_Subtraction1_b = 1.0F;
    }
    else
    {
        rtb_Subtraction1_b = VeICSC_k_Nx_ErrBsdNonLinPGain_Blnd *
            look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeHCCR, ((const float32
            *)&(KxICSR_k_Nx_ILETrq_NLPGain[0])), ((const float32 *)
            &(KtICSR_k_Nx_ILETrq_NLPGain[0])), 10U);
    }

    /* Sum: '<S798>/Summation' incorporates:
     *  Constant: '<S783>/Constant Value4'
     *  Constant: '<S798>/Constant Value'
     *  Lookup_n-D: '<S796>/Vector'
     *  Product: '<S783>/Product'
     *  SignalConversion generated from: '<S1>/VeHCCR_M_Clch1_TorqEst'
     */
    VeICSC_k_NxCL_NLPGain = ((1.0F - rtb_Maximum_l) * rtb_Switch2_ni) +
        (rtb_Maximum_l * rtb_Subtraction1_b);

    /* Product: '<S753>/Product' */
    VeICSC_M_Nx_CLPTerm_Raw = (VeICSR_n_NxErrFilt * VeICSR_K_NxCL_PGain) *
        VeICSC_k_NxCL_NLPGain;

    /* Switch: '<S784>/Switch1' incorporates:
     *  RelationalOperator: '<S784>/Relational Operator'
     */
    if (VeICSR_M_NxCL_PLimit < VeICSC_M_Nx_CLPTerm_Raw)
    {
        /* Switch: '<S750>/Switch1' */
        rtb_TmpSignalConversionAtVeMT_l = VeICSR_M_NxCL_PLimit;
    }
    else
    {
        /* Switch: '<S750>/Switch1' */
        rtb_TmpSignalConversionAtVeMT_l = VeICSC_M_Nx_CLPTerm_Raw;
    }

    /* End of Switch: '<S784>/Switch1' */

    /* Switch: '<S784>/Switch' incorporates:
     *  RelationalOperator: '<S784>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeMT_l > (-VeICSR_M_NxCL_PLimit))
    {
        /* Switch: '<S784>/Switch' */
        VeICSR_M_NxCLPterm = rtb_TmpSignalConversionAtVeMT_l;
    }
    else
    {
        /* Switch: '<S784>/Switch' */
        VeICSR_M_NxCLPterm = -VeICSR_M_NxCL_PLimit;
    }

    /* End of Switch: '<S784>/Switch' */
    (void)Rte_Read_VeOHSR_b_P2IdleZeroSpdEnbl_Value(&rtb_NotEqual_ol);

    /* Logic: '<S823>/Logical Operator1' incorporates:
     *  Constant: '<S824>/Calib'
     *  Constant: '<S825>/Calib'
     *  Inport: '<Root>/VeOHSR_b_P2IdleZeroSpdEnbl'
     */
    VeICSR_b_Nx_ItermRst_Chk = (((fabsf(VeICSR_n_NxErrFilt) <=
        KeICSR_n_Nx_ErrLmt_ItermRst) && (fabsf(rtb_TmpSignalConversionAtVeHSER) <=
        KeICSR_n_Nx_TgtLmt_ItermRst)) && rtb_NotEqual_ol);

    /* RelationalOperator: '<S822>/Not Equal' incorporates:
     *  UnitDelay: '<S822>/Unit Delay'
     */
    VeICSR_b_Nx_ItermRst = (VeICSR_b_Nx_ItermRst_Chk !=
                            ICSR_ac_DW.UnitDelay_DSTATE_m4k);

    /* Update for UnitDelay: '<S822>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_m4k = VeICSR_b_Nx_ItermRst_Chk;

    /* Logic: '<S752>/Logical1' incorporates:
     *  DataStoreRead: '<S752>/Dsr_NxCalSwitchTrig'
     */
    VeICSR_b_Nx_ITerm_ResetArb = ((rtb_TmpSignalConversionAtVeI_lx ||
        (ICSR_ac_DW.VeICSR_b_Nx_CalSwitchTrigger)) || (VeICSR_b_Nx_ItermRst));

    /* RelationalOperator: '<S766>/Not Equal' incorporates:
     *  UnitDelay: '<S766>/Unit Delay'
     */
    rtb_NotEqual_ol = (VeICSI_b_Nx_ClchLrn_Active !=
                       ICSR_ac_DW.UnitDelay_DSTATE_mgv);

    /* Update for UnitDelay: '<S766>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_mgv = VeICSI_b_Nx_ClchLrn_Active;

    /* Logic: '<S767>/AND' incorporates:
     *  Logic: '<S767>/OR1'
     *  UnitDelay: '<S767>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeES_d = !ICSR_ac_DW.UnitDelay_DSTATE_bp;

    /* Update for UnitDelay: '<S767>/Unit Delay' incorporates:
     *  Constant: '<S762>/TRUE Constant1'
     */
    ICSR_ac_DW.UnitDelay_DSTATE_bp = true;
    if (rtb_NotEqual_ol)
    {
        /* Switch: '<S776>/Switch2' */
        rtb_Negation1_h = ICSR_ac_DW.UnitDelay_DSTATE_lm;

        /* Switch: '<S776>/Switch3' incorporates:
         *  Constant: '<S776>/Constant Value4'
         */
        rtb_Switch3_p5 = 0.0F;
    }
    else
    {
        /* Switch: '<S776>/Switch2' */
        rtb_Negation1_h = ICSR_ac_DW.UnitDelay_DSTATE_a;

        /* Switch: '<S764>/Switch1' incorporates:
         *  Constant: '<S770>/Calib'
         *  Constant: '<S771>/Calib'
         */
        if (VeICSI_b_Nx_ClchLrn_Active)
        {
            rtb_Subtraction1_b = KeICSR_t_ClutchLrnCals_BlndIn_Time;
        }
        else
        {
            rtb_Subtraction1_b = KeICSR_t_ClutchLrnCals_BlndOut_Time;
        }

        /* End of Switch: '<S764>/Switch1' */

        /* MinMax: '<S776>/Maximum' incorporates:
         *  Constant: '<S769>/Calib'
         */
        rtb_TmpSignalConversionAtVeHSER = fmaxf(HeICSR_t_MedTEB_dT,
            rtb_Subtraction1_b);

        /* Outputs for Atomic SubSystem: '<S776>/Protected Division' */
        /* Switch: '<S778>/Switch1' incorporates:
         *  Constant: '<S769>/Calib'
         *  Constant: '<S778>/Constant Value'
         *  Constant: '<S778>/Constant Value1'
         *  Constant: '<S778>/Constant Value2'
         *  Constant: '<S778>/Constant Value3'
         *  Logic: '<S778>/AND'
         *  RelationalOperator: '<S778>/Greater Than or Equal '
         *  RelationalOperator: '<S778>/Greater Than or Equal 1'
         *  RelationalOperator: '<S778>/Not Equal'
         *  RelationalOperator: '<S778>/Not Equal1'
         *  Switch: '<S778>/Switch2'
         *  Switch: '<S778>/Switch3'
         */
        if ((HeICSR_t_MedTEB_dT != 0.0F) && (rtb_TmpSignalConversionAtVeHSER !=
                0.0F))
        {
            /* Switch: '<S778>/Switch1' incorporates:
             *  Product: '<S778>/Division'
             */
            rtb_TmpSignalConversionAtVeHSER = HeICSR_t_MedTEB_dT /
                rtb_TmpSignalConversionAtVeHSER;
        }
        else if (HeICSR_t_MedTEB_dT > 0.0F)
        {
            /* Switch: '<S778>/Switch2' incorporates:
             *  Constant: '<S778>/MAXFLOAT'
             *  Switch: '<S778>/Switch1'
             */
            rtb_TmpSignalConversionAtVeHSER = 3.402823466E+38F;
        }
        else if (HeICSR_t_MedTEB_dT < 0.0F)
        {
            /* Switch: '<S778>/Switch3' incorporates:
             *  Constant: '<S778>/MINFLOAT'
             *  Switch: '<S778>/Switch1'
             *  Switch: '<S778>/Switch2'
             */
            rtb_TmpSignalConversionAtVeHSER = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S778>/Switch1' incorporates:
             *  Constant: '<S778>/Constant Value4'
             *  Switch: '<S778>/Switch2'
             *  Switch: '<S778>/Switch3'
             */
            rtb_TmpSignalConversionAtVeHSER = 0.0F;
        }

        /* End of Switch: '<S778>/Switch1' */
        /* End of Outputs for SubSystem: '<S776>/Protected Division' */

        /* Switch: '<S776>/Switch1' incorporates:
         *  Constant: '<S776>/Constant Value3'
         *  Logic: '<S776>/Logical'
         *  Logic: '<S776>/Logical2'
         */
        if ((ICSR_ac_DW.UnitDelay1_DSTATE_m) &&
                (!rtb_TmpSignalConversionAtVeES_d))
        {
            rtb_Subtraction1_b = ICSR_ac_DW.UnitDelay3_DSTATE_fe;
        }
        else
        {
            rtb_Subtraction1_b = 1.0F;
        }

        /* End of Switch: '<S776>/Switch1' */

        /* Switch: '<S776>/Switch3' incorporates:
         *  Constant: '<S776>/Constant Value2'
         *  MinMax: '<S776>/MinMax'
         *  Sum: '<S776>/Summation1'
         */
        rtb_Switch3_p5 = fminf(rtb_Subtraction1_b +
                               rtb_TmpSignalConversionAtVeHSER, 1.0F);
    }

    /* RelationalOperator: '<S765>/Not Equal' incorporates:
     *  UnitDelay: '<S765>/Unit Delay'
     */
    rtb_NotEqual_ol = (VeICSI_b_TCas4Low_Active !=
                       ICSR_ac_DW.UnitDelay_DSTATE_i21);

    /* Update for UnitDelay: '<S765>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_i21 = VeICSI_b_TCas4Low_Active;

    /* Logic: '<S768>/AND' incorporates:
     *  Logic: '<S768>/OR1'
     *  UnitDelay: '<S768>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeES_d = !ICSR_ac_DW.UnitDelay_DSTATE_dh;

    /* Update for UnitDelay: '<S768>/Unit Delay' incorporates:
     *  Constant: '<S762>/TRUE Constant5'
     */
    ICSR_ac_DW.UnitDelay_DSTATE_dh = true;
    if (rtb_NotEqual_ol)
    {
        /* Switch: '<S779>/Switch2' */
        rtb_Switch2_dr = ICSR_ac_DW.UnitDelay_DSTATE_p3;

        /* Switch: '<S779>/Switch3' incorporates:
         *  Constant: '<S779>/Constant Value4'
         */
        rtb_Switch3_j = 0.0F;
    }
    else
    {
        /* Switch: '<S779>/Switch2' */
        rtb_Switch2_dr = ICSR_ac_DW.UnitDelay_DSTATE_m4;

        /* MinMax: '<S779>/Maximum' incorporates:
         *  Constant: '<S769>/Calib'
         *  Constant: '<S772>/Calib'
         *  Switch: '<S775>/Switch1'
         */
        rtb_TmpSignalConversionAtVeHSER = fmaxf(HeICSR_t_MedTEB_dT,
            KeICSR_t_Nx_NL_IGainBlndTime);

        /* Outputs for Atomic SubSystem: '<S779>/Protected Division' */
        /* Switch: '<S781>/Switch1' incorporates:
         *  Constant: '<S769>/Calib'
         *  Constant: '<S781>/Constant Value'
         *  Constant: '<S781>/Constant Value1'
         *  Constant: '<S781>/Constant Value2'
         *  Constant: '<S781>/Constant Value3'
         *  Logic: '<S781>/AND'
         *  RelationalOperator: '<S781>/Greater Than or Equal '
         *  RelationalOperator: '<S781>/Greater Than or Equal 1'
         *  RelationalOperator: '<S781>/Not Equal'
         *  RelationalOperator: '<S781>/Not Equal1'
         *  Switch: '<S781>/Switch2'
         *  Switch: '<S781>/Switch3'
         */
        if ((HeICSR_t_MedTEB_dT != 0.0F) && (rtb_TmpSignalConversionAtVeHSER !=
                0.0F))
        {
            /* Switch: '<S781>/Switch1' incorporates:
             *  Product: '<S781>/Division'
             */
            rtb_TmpSignalConversionAtVeHSER = HeICSR_t_MedTEB_dT /
                rtb_TmpSignalConversionAtVeHSER;
        }
        else if (HeICSR_t_MedTEB_dT > 0.0F)
        {
            /* Switch: '<S781>/Switch2' incorporates:
             *  Constant: '<S781>/MAXFLOAT'
             *  Switch: '<S781>/Switch1'
             */
            rtb_TmpSignalConversionAtVeHSER = 3.402823466E+38F;
        }
        else if (HeICSR_t_MedTEB_dT < 0.0F)
        {
            /* Switch: '<S781>/Switch3' incorporates:
             *  Constant: '<S781>/MINFLOAT'
             *  Switch: '<S781>/Switch1'
             *  Switch: '<S781>/Switch2'
             */
            rtb_TmpSignalConversionAtVeHSER = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S781>/Switch1' incorporates:
             *  Constant: '<S781>/Constant Value4'
             *  Switch: '<S781>/Switch2'
             *  Switch: '<S781>/Switch3'
             */
            rtb_TmpSignalConversionAtVeHSER = 0.0F;
        }

        /* End of Switch: '<S781>/Switch1' */
        /* End of Outputs for SubSystem: '<S779>/Protected Division' */

        /* Switch: '<S779>/Switch1' incorporates:
         *  Constant: '<S779>/Constant Value3'
         *  Logic: '<S779>/Logical'
         *  Logic: '<S779>/Logical2'
         */
        if ((ICSR_ac_DW.UnitDelay1_DSTATE_ji) &&
                (!rtb_TmpSignalConversionAtVeES_d))
        {
            rtb_Subtraction1_b = ICSR_ac_DW.UnitDelay3_DSTATE_k;
        }
        else
        {
            rtb_Subtraction1_b = 1.0F;
        }

        /* End of Switch: '<S779>/Switch1' */

        /* Switch: '<S779>/Switch3' incorporates:
         *  Constant: '<S779>/Constant Value2'
         *  MinMax: '<S779>/MinMax'
         *  Sum: '<S779>/Summation1'
         */
        rtb_Switch3_j = fminf(rtb_Subtraction1_b +
                              rtb_TmpSignalConversionAtVeHSER, 1.0F);
    }

    if (VeICSI_b_TCas4Low_Active)
    {
        rtb_Subtraction1_b = look1_iflf_binlcapw(VeICSR_n_NxErrFilt, ((const
            float32 *)&(KxICSR_k_NxNonLinIGain_Tcas4Low[0])), ((const float32 *)
            &(KtICSR_k_NxNonLinIGain_Tcas4Low[0])), 6U);
    }
    else
    {
        rtb_Subtraction1_b = look1_iflf_binlcapw(VeICSR_n_NxErrFilt, ((const
            float32 *)&(KxICSR_k_NxNonLinIGain[0])), ((const float32 *)
            &(KtICSR_k_NxNonLinIGain[0])), 6U);
    }

    /* Sum: '<S779>/Summation' incorporates:
     *  Constant: '<S779>/Constant Value'
     *  Lookup_n-D: '<S773>/Vector'
     *  Lookup_n-D: '<S774>/Vector'
     *  Switch: '<S859>/Switch1'
     */
    VeICSC_k_Nx_ErrBsdNonLinIGain_Blnd = ((1.0F - rtb_Switch3_j) *
        rtb_Switch2_dr) + (rtb_Switch3_j * rtb_Subtraction1_b);
    if (VeICSI_b_Nx_ClchLrn_Active)
    {
        rtb_Subtraction1_b = 1.0F;
    }
    else
    {
        rtb_Subtraction1_b = VeICSC_k_Nx_ErrBsdNonLinIGain_Blnd;
    }

    /* Sum: '<S776>/Summation' incorporates:
     *  Constant: '<S762>/Constant Value4'
     *  Constant: '<S776>/Constant Value'
     */
    VeICSC_k_NxCL_NLIGain = ((1.0F - rtb_Switch3_p5) * rtb_Negation1_h) +
        (rtb_Switch3_p5 * rtb_Subtraction1_b);

    /* Product: '<S752>/Multiplication1' */
    VeICSR_M_ItermInit = ((VeICSR_n_NxErrFilt - ((ICSR_ac_DW.UnitDelay_DSTATE_e1
        - ICSR_ac_DW.UnitDelay1_DSTATE_c4) * VeICSR_K_NxCL_I_Anti_Windup_Gain)) *
                          VeICSR_K_NxCL_IGain) * VeICSC_k_NxCL_NLIGain;
    if ((VeICSC_b_FreezeNxCL_ITerm) || rtb_TmpSignalConversionAtVeIC_g)
    {
        /* Switch: '<S761>/Switch2' */
        rtb_Switch_ib = ICSR_ac_DW.UnitDelay_DSTATE_cv;
    }
    else if (VeICSR_b_Nx_ITerm_ResetArb)
    {
        /* Switch: '<S761>/Switch' incorporates:
         *  Constant: '<S761>/Constant Value'
         */
        rtb_Switch_ib = 0.0F;
    }
    else
    {
        /* Sum: '<S752>/Sum//Sub' incorporates:
         *  Switch: '<S761>/Switch'
         */
        rtb_TmpSignalConversionAtVeHCCR = VeICSR_M_ItermInit +
            ICSR_ac_DW.UnitDelay_DSTATE_ko;

        /* Outputs for Atomic SubSystem: '<S761>/Limiter' */
        /* Switch: '<S763>/Switch1' incorporates:
         *  RelationalOperator: '<S763>/Relational Operator'
         *  Switch: '<S761>/Switch'
         */
        if (VeICSR_M_NxCL_ILimit < rtb_TmpSignalConversionAtVeHCCR)
        {
            /* Switch: '<S763>/Switch1' */
            rtb_TmpSignalConversionAtVeHCCR = VeICSR_M_NxCL_ILimit;
        }

        /* End of Switch: '<S763>/Switch1' */

        /* Switch: '<S763>/Switch' incorporates:
         *  Gain: '<S761>/Negation'
         *  RelationalOperator: '<S763>/Relational Operator1'
         *  Switch: '<S761>/Switch'
         */
        if (rtb_TmpSignalConversionAtVeHCCR > (-VeICSR_M_NxCL_ILimit))
        {
            /* Switch: '<S761>/Switch' */
            rtb_Switch_ib = rtb_TmpSignalConversionAtVeHCCR;
        }
        else
        {
            /* Switch: '<S761>/Switch' */
            rtb_Switch_ib = -VeICSR_M_NxCL_ILimit;
        }

        /* End of Switch: '<S763>/Switch' */
        /* End of Outputs for SubSystem: '<S761>/Limiter' */
    }

    /* Switch: '<S750>/Switch1' incorporates:
     *  Constant: '<S755>/Constant Value1'
     *  Constant: '<S756>/Calib'
     *  Switch: '<S761>/Switch'
     */
    rtb_TmpSignalConversionAtVeMT_l = HeICSR_t_MedTEB_dT / 2.0F;

    /* Switch: '<S754>/Switch1' incorporates:
     *  Constant: '<S757>/Calib'
     *  Gain: '<S751>/Gain'
     *  RelationalOperator: '<S754>/Greater  Than'
     *  RelationalOperator: '<S754>/Greater  Than1'
     *  Switch: '<S754>/Switch2'
     */
    if (VeICSR_n_NxErrFilt >= KeICSR_n_NxCL_DCtrlDeadBand)
    {
        /* Switch: '<S754>/Switch1' incorporates:
         *  Sum: '<S754>/Subtraction'
         */
        rtb_TmpSignalConversionAtVeHCCR = VeICSR_n_NxErrFilt -
            KeICSR_n_NxCL_DCtrlDeadBand;
    }
    else if (VeICSR_n_NxErrFilt <= (-KeICSR_n_NxCL_DCtrlDeadBand))
    {
        /* Switch: '<S754>/Switch2' incorporates:
         *  Gain: '<S751>/Gain'
         *  Sum: '<S754>/Subtraction1'
         *  Switch: '<S754>/Switch1'
         */
        rtb_TmpSignalConversionAtVeHCCR = VeICSR_n_NxErrFilt -
            (-KeICSR_n_NxCL_DCtrlDeadBand);
    }
    else
    {
        /* Switch: '<S754>/Switch1' incorporates:
         *  Constant: '<S754>/Constant Value'
         *  Switch: '<S754>/Switch2'
         */
        rtb_TmpSignalConversionAtVeHCCR = 0.0F;
    }

    /* End of Switch: '<S754>/Switch1' */

    /* Product: '<S751>/Multiplication2' */
    VeICSR_M_PIDDterm = VeICSR_K_NxCL_DGain * rtb_TmpSignalConversionAtVeHCCR;

    /* Product: '<S755>/Multiplication2' incorporates:
     *  Constant: '<S758>/Calib'
     */
    VeICSR_dM_PIDTerm = ((VeICSR_M_PIDDterm - ((rtb_TmpSignalConversionAtVeMT_l
                            - KeICSR_t_NxCL_DTermCutoffTime) *
                           ICSR_ac_DW.UnitDelay1_DSTATE_h)) -
                         ICSR_ac_DW.UnitDelay_DSTATE_jg) /
        (rtb_TmpSignalConversionAtVeMT_l + KeICSR_t_NxCL_DTermCutoffTime);

    /* Switch: '<S760>/Switch1' incorporates:
     *  RelationalOperator: '<S760>/Relational Operator'
     */
    if (VeICSR_M_NxCL_DLimit < VeICSR_dM_PIDTerm)
    {
        /* Switch: '<S750>/Switch1' */
        rtb_TmpSignalConversionAtVeMT_l = VeICSR_M_NxCL_DLimit;
    }
    else
    {
        /* Switch: '<S750>/Switch1' */
        rtb_TmpSignalConversionAtVeMT_l = VeICSR_dM_PIDTerm;
    }

    /* End of Switch: '<S760>/Switch1' */

    /* Switch: '<S760>/Switch' incorporates:
     *  RelationalOperator: '<S760>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeMT_l > (-VeICSR_M_NxCL_DLimit))
    {
        /* Switch: '<S760>/Switch' */
        VeICSR_M_NxDTerm = rtb_TmpSignalConversionAtVeMT_l;
    }
    else
    {
        /* Switch: '<S760>/Switch' */
        VeICSR_M_NxDTerm = -VeICSR_M_NxCL_DLimit;
    }

    /* End of Switch: '<S760>/Switch' */

    /* Sum: '<S747>/Sum//Sub1' */
    rtb_SumSub1 = (VeICSR_M_NxCLPterm + rtb_Switch_ib) + VeICSR_M_NxDTerm;

    /* Switch: '<S750>/Switch1' incorporates:
     *  RelationalOperator: '<S750>/Relational Operator'
     */
    if (VeICSR_M_Nx_MaxCLTrq_Arb < rtb_SumSub1)
    {
        /* Switch: '<S750>/Switch1' */
        rtb_TmpSignalConversionAtVeMT_l = VeICSR_M_Nx_MaxCLTrq_Arb;
    }
    else
    {
        /* Switch: '<S750>/Switch1' */
        rtb_TmpSignalConversionAtVeMT_l = rtb_SumSub1;
    }

    /* End of Switch: '<S750>/Switch1' */

    /* Switch: '<S750>/Switch' incorporates:
     *  RelationalOperator: '<S750>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeMT_l > VeICSR_M_Nx_MinCLTrq_Arb)
    {
        /* Switch: '<S750>/Switch' */
        rtb_Switch_oy = rtb_TmpSignalConversionAtVeMT_l;
    }
    else
    {
        /* Switch: '<S750>/Switch' */
        rtb_Switch_oy = VeICSR_M_Nx_MinCLTrq_Arb;
    }

    /* End of Switch: '<S750>/Switch' */

    /* VariantMerge generated from: '<S10>/Variant Source' */
    rtb_VariantMerge_For_Variant_pm = rtb_Switch_oy;

    /* End of Outputs for SubSystem: '<S748>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S748>/EdgeBi1' */
    /* End of Outputs for SubSystem: '<S748>/EdgeRising2' */
    /* End of Outputs for SubSystem: '<S748>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S748>/EdgeBi2' */
    /* End of Outputs for SubSystem: '<S748>/EdgeRising3' */
    /* End of Outputs for SubSystem: '<S783>/EdgeBi2' */
    /* End of Outputs for SubSystem: '<S783>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S783>/EdgeBi1' */
    /* End of Outputs for SubSystem: '<S783>/EdgeRising2' */
    /* End of Outputs for SubSystem: '<S782>/Limiter1' */
    /* End of Outputs for SubSystem: '<S749>/EdgeBi' */
    /* End of Outputs for SubSystem: '<S762>/EdgeBi2' */
    /* End of Outputs for SubSystem: '<S762>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S762>/EdgeBi1' */
    /* End of Outputs for SubSystem: '<S762>/EdgeRising2' */
    /* End of Outputs for SubSystem: '<S751>/DeadBand' */
    /* End of Outputs for SubSystem: '<S759>/Limiter' */
    /* End of Outputs for SubSystem: '<S747>/Limiter1' */
#else

    /* VariantMerge generated from: '<S10>/Variant Source' incorporates:
     *  Constant: '<S10>/Constant Value1'
     */
    rtb_VariantMerge_For_Variant_pm = 0.0F;

#endif

    /* End of UnitDelay: '<S745>/Unit Delay' */

    /* SignalConversion generated from: '<S10>/Variant Source1' */
    VeICSC_M_NxCLCmd = rtb_VariantMerge_For_Variant_pm;

    /* SignalConversion generated from: '<S10>/Variant Source' */
#if Rte_SysCon_Variant_ICSR_4

    /* VariantMerge generated from: '<S10>/Variant Source' */
    rtb_VariantMerge_For_Variant_pm = rtb_Switch_ib;

#else

    /* VariantMerge generated from: '<S10>/Variant Source' incorporates:
     *  Constant: '<S10>/Constant Value'
     */
    rtb_VariantMerge_For_Variant_pm = 0.0F;

#endif

    /* SignalConversion generated from: '<S10>/Variant Source' */
    VeICSC_M_NxCL_Iterm = rtb_VariantMerge_For_Variant_pm;

    /* Update for UnitDelay: '<S745>/Unit Delay' incorporates:
     *  Constant: '<S776>/TRUE Constant'
     *  Constant: '<S779>/TRUE Constant'
     *  Constant: '<S798>/TRUE Constant'
     *  Constant: '<S801>/TRUE Constant'
     *  Constant: '<S816>/TRUE Constant'
     *  Constant: '<S819>/TRUE Constant'
     *  UnitDelay: '<S747>/Unit Delay'
     *  UnitDelay: '<S747>/Unit Delay1'
     *  UnitDelay: '<S752>/Unit Delay'
     *  UnitDelay: '<S755>/Unit Delay'
     *  UnitDelay: '<S755>/Unit Delay1'
     *  UnitDelay: '<S761>/Unit Delay'
     *  UnitDelay: '<S764>/Unit Delay'
     *  UnitDelay: '<S775>/Unit Delay'
     *  UnitDelay: '<S776>/Unit Delay'
     *  UnitDelay: '<S776>/Unit Delay1'
     *  UnitDelay: '<S776>/Unit Delay3'
     *  UnitDelay: '<S779>/Unit Delay'
     *  UnitDelay: '<S779>/Unit Delay1'
     *  UnitDelay: '<S779>/Unit Delay3'
     *  UnitDelay: '<S785>/Unit Delay'
     *  UnitDelay: '<S797>/Unit Delay'
     *  UnitDelay: '<S798>/Unit Delay'
     *  UnitDelay: '<S798>/Unit Delay1'
     *  UnitDelay: '<S798>/Unit Delay3'
     *  UnitDelay: '<S801>/Unit Delay'
     *  UnitDelay: '<S801>/Unit Delay1'
     *  UnitDelay: '<S801>/Unit Delay3'
     *  UnitDelay: '<S814>/Unit Delay'
     *  UnitDelay: '<S815>/Unit Delay'
     *  UnitDelay: '<S816>/Unit Delay'
     *  UnitDelay: '<S816>/Unit Delay1'
     *  UnitDelay: '<S816>/Unit Delay3'
     *  UnitDelay: '<S819>/Unit Delay'
     *  UnitDelay: '<S819>/Unit Delay1'
     *  UnitDelay: '<S819>/Unit Delay3'
     */
#if Rte_SysCon_Variant_ICSR_4

    ICSR_ac_DW.UnitDelay_DSTATE_cd = rtb_Switch_oy;
    ICSR_ac_DW.UnitDelay_DSTATE_g = VeICSR_M_Nx_MaxCLTrq_Arb;
    ICSR_ac_DW.UnitDelay_DSTATE_ho = rtb_Switch2_gm;
    ICSR_ac_DW.UnitDelay3_DSTATE_b = rtb_Maximum_e2;
    ICSR_ac_DW.UnitDelay1_DSTATE_pl = true;
    ICSR_ac_DW.UnitDelay_DSTATE_i2 = VeICSR_M_Nx_MinCLTrq_Arb;
    ICSR_ac_DW.UnitDelay_DSTATE_eb = rtb_Switch2_b2;
    ICSR_ac_DW.UnitDelay3_DSTATE_m = rtb_Maximum_de;
    ICSR_ac_DW.UnitDelay1_DSTATE_kl = true;
    ICSR_ac_DW.UnitDelay_DSTATE_jk = VeICSC_k_NxCL_NLPGain;
    ICSR_ac_DW.UnitDelay_DSTATE_jf = rtb_Switch2_ni;
    ICSR_ac_DW.UnitDelay3_DSTATE_h = rtb_Maximum_l;
    ICSR_ac_DW.UnitDelay1_DSTATE_jq = true;
    ICSR_ac_DW.UnitDelay_DSTATE_cq = VeICSC_k_Nx_ErrBsdNonLinPGain_Blnd;
    ICSR_ac_DW.UnitDelay_DSTATE_d = rtb_Switch2_cm;
    ICSR_ac_DW.UnitDelay3_DSTATE_i = rtb_Maximum_j;
    ICSR_ac_DW.UnitDelay1_DSTATE_jj = true;
    ICSR_ac_DW.UnitDelay_DSTATE_cv = rtb_Switch_ib;
    ICSR_ac_DW.UnitDelay_DSTATE_e1 = rtb_SumSub1;
    ICSR_ac_DW.UnitDelay1_DSTATE_c4 = rtb_Switch_oy;
    ICSR_ac_DW.UnitDelay_DSTATE_lm = VeICSC_k_NxCL_NLIGain;
    ICSR_ac_DW.UnitDelay_DSTATE_a = rtb_Negation1_h;
    ICSR_ac_DW.UnitDelay3_DSTATE_fe = rtb_Switch3_p5;
    ICSR_ac_DW.UnitDelay1_DSTATE_m = true;
    ICSR_ac_DW.UnitDelay_DSTATE_p3 = VeICSC_k_Nx_ErrBsdNonLinIGain_Blnd;
    ICSR_ac_DW.UnitDelay_DSTATE_m4 = rtb_Switch2_dr;
    ICSR_ac_DW.UnitDelay3_DSTATE_k = rtb_Switch3_j;
    ICSR_ac_DW.UnitDelay1_DSTATE_ji = true;
    ICSR_ac_DW.UnitDelay_DSTATE_ko = rtb_Switch_ib;
    ICSR_ac_DW.UnitDelay1_DSTATE_h = VeICSR_dM_PIDTerm;
    ICSR_ac_DW.UnitDelay_DSTATE_jg = VeICSR_M_PIDDterm;

#endif

    /* End of Update for UnitDelay: '<S745>/Unit Delay' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/EvalAnglCL1'
     */
    /* Sum: '<S24>/Sum2' incorporates:
     *  Abs: '<S22>/Abs'
     *  Abs: '<S22>/Abs1'
     *  Constant: '<S24>/Constant Value2'
     *  Constant: '<S37>/Calib'
     *  Constant: '<S38>/Calib'
     *  Constant: '<S53>/Constant Value'
     *  Gain: '<S64>/Negation1'
     *  Inport: '<Root>/VeESPR_b_EngAngle720SyncFA'
     *  Inport: '<Root>/VeESPR_b_EngAngle720SyncLrn'
     *  Inport: '<Root>/VeESPR_phi_EngAngle720Sync'
     *  Logic: '<S22>/Logical Operator1'
     *  Logic: '<S23>/Logical Operator1'
     *  Logic: '<S23>/Logical Operator2'
     *  Logic: '<S23>/Logical Operator3'
     *  Logic: '<S23>/Logical Operator4'
     *  Logic: '<S23>/Logical Operator5'
     *  Logic: '<S23>/Logical Operator6'
     *  Logic: '<S23>/Logical1'
     *  Logic: '<S26>/Logical'
     *  Logic: '<S26>/Logical1'
     *  Logic: '<S26>/Logical2'
     *  Logic: '<S27>/Logical'
     *  Logic: '<S27>/Logical1'
     *  Logic: '<S27>/Logical3'
     *  Lookup_n-D: '<S61>/Vector'
     *  Lookup_n-D: '<S62>/Vector'
     *  Lookup_n-D: '<S63>/Vector'
     *  Lookup_n-D: '<S71>/Vector'
     *  Lookup_n-D: '<S79>/Vector'
     *  Product: '<S48>/Multiplication'
     *  Product: '<S49>/Multiplication1'
     *  Product: '<S49>/Multiplication10'
     *  Product: '<S50>/Multiplication8'
     *  Product: '<S52>/Multiplication9'
     *  Product: '<S53>/Product'
     *  Product: '<S53>/Product1'
     *  Product: '<S55>/Multiplication2'
     *  Product: '<S55>/Multiplication3'
     *  Product: '<S55>/Multiplication4'
     *  RelationalOperator: '<S22>/Comparison2'
     *  RelationalOperator: '<S22>/Comparison3'
     *  RelationalOperator: '<S24>/Comparison1'
     *  RelationalOperator: '<S24>/Comparison3'
     *  RelationalOperator: '<S26>/Comparison1'
     *  RelationalOperator: '<S26>/Comparison4'
     *  RelationalOperator: '<S27>/Comparison'
     *  RelationalOperator: '<S27>/Comparison1'
     *  RelationalOperator: '<S27>/Comparison2'
     *  RelationalOperator: '<S27>/Comparison3'
     *  RelationalOperator: '<S27>/Comparison4'
     *  RelationalOperator: '<S53>/Comparison'
     *  Sum: '<S21>/Sum//Sub2'
     *  Sum: '<S48>/Subtraction'
     *  Sum: '<S48>/Subtraction1'
     *  Sum: '<S55>/Summation'
     *  Sum: '<S55>/Summation1'
     *  Sum: '<S55>/Summation2'
     *  Switch: '<S21>/Switch'
     *  Switch: '<S23>/Switch1'
     *  Switch: '<S24>/Switch'
     *  Switch: '<S24>/Switch1'
     *  Switch: '<S53>/Switch'
     *  Switch: '<S74>/Switch'
     *  Switch: '<S82>/Switch'
     *  UnitDelay: '<S21>/Unit Delay2'
     *  UnitDelay: '<S50>/Unit Delay1'
     *  UnitDelay: '<S55>/Unit Delay'
     *  UnitDelay: '<S55>/Unit Delay1'
     */
#if Rte_SysCon_Variant_ICSR_1

    /* Outputs for Atomic SubSystem: '<S49>/GradientLimiter4' */
    /* Outputs for Atomic SubSystem: '<S64>/Limiter1' */
    /* Outputs for Atomic SubSystem: '<S49>/DeadBand1' */
    /* Outputs for Atomic SubSystem: '<S50>/GradientLimiter3' */
    /* Outputs for Atomic SubSystem: '<S22>/LOWR' */
    /* Outputs for Atomic SubSystem: '<S22>/EdgeFalling' */
    /* Outputs for Atomic SubSystem: '<S22>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S52>/GradientLimiter2' */
    /* Outputs for Atomic SubSystem: '<S26>/TRTE' */
    /* Outputs for Atomic SubSystem: '<S26>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S26>/EdgeRising1' */
    (void)Rte_Read_VeESPR_phi_EngAngle720Sync_Value
        (&rtb_LeICSC_phi_DiffTrgt_Crrnt);

    /* Sum: '<S24>/Sum2' incorporates:
     *  Constant: '<S25>/Calib'
     *  Inport: '<Root>/VeESPR_phi_EngAngle720Sync'
     */
    rtb_LeICSC_phi_DiffTrgt_Crrnt = KeICSR_phi_AbsAngleTarget -
        rtb_LeICSC_phi_DiffTrgt_Crrnt;
    if (VeICSI_n_NiActl > KeICSR_n_EngSpdNTDCThrshld)
    {
        rtb_Subtraction1_b = 0.0F;
    }
    else
    {
        rtb_Subtraction1_b = KeICSR_phi_MaxNegAbsAnglErr;
    }

    /* RelationalOperator: '<S24>/Comparison3' incorporates:
     *  Constant: '<S24>/Constant Value2'
     *  Constant: '<S37>/Calib'
     *  Constant: '<S38>/Calib'
     */
    VeICSC_b_AbsNoRolloverReq = (rtb_LeICSC_phi_DiffTrgt_Crrnt >=
        rtb_Subtraction1_b);
    if (VeICSC_b_AbsNoRolloverReq)
    {
        /* Switch: '<S24>/Switch' */
        VeICSC_phi_AbsErrorAngle = rtb_LeICSC_phi_DiffTrgt_Crrnt;
    }
    else
    {
        /* Switch: '<S24>/Switch' incorporates:
         *  Constant: '<S24>/Constant Value1'
         *  Sum: '<S24>/Sum3'
         */
        VeICSC_phi_AbsErrorAngle = rtb_LeICSC_phi_DiffTrgt_Crrnt + 720.0F;
    }

    /* Logic: '<S27>/Logical' incorporates:
     *  Constant: '<S31>/Calib'
     *  Constant: '<S34>/Calib'
     *  Constant: '<S35>/Calib'
     */
    VeICSR_b_AbsInSafeZone = (((VeICSC_phi_AbsErrorAngle >=
        KeICSR_phi_MaxNegAbsAnglErr) && (VeICSC_phi_AbsErrorAngle <=
        KeICSR_phi_MinPosAbsAnglErr)) && (!KeICSR_b_EnblPstnCntrlInSfZn));

    /* Logic: '<S27>/Logical1' incorporates:
     *  Constant: '<S30>/Calib'
     *  Constant: '<S32>/Calib'
     *  Constant: '<S33>/Calib'
     *  Constant: '<S36>/Calib'
     */
    VeICSC_b_DsblAbsPosCntrl = ((((rtb_TmpSignalConversionAtVeENGR >=
        KeICSR_p_EngManfldAbsPrsThd) && (VeICSI_n_NiActl <=
        KeICSR_n_AbsAngPrkRollSpdThrd)) && (KeICSR_b_EnblAbsPosCntrlDsbl)) &&
        (VeICSC_phi_AbsErrorAngle >= KeICSR_phi_RollOverThd));
    (void)Rte_Read_VeESPR_b_EngAngle720SyncFA_Value(&rtb_AND_ar);
    (void)Rte_Read_VeESPR_b_EngAngle720SyncLrn_Value(&rtb_UnitDelay_g2);

    /* RelationalOperator: '<S26>/Comparison1' incorporates:
     *  Constant: '<S44>/Calib'
     *  Inport: '<Root>/VeESPR_b_EngAngle720SyncFA'
     *  Inport: '<Root>/VeESPR_b_EngAngle720SyncLrn'
     */
    rtb_TmpSignalConversionAtVeIC_g = (KeICSR_n_EngSpdPstnCntrl >
        VeICSI_n_NiActl);

    /* Logic: '<S26>/Logical' incorporates:
     *  Constant: '<S43>/Calib'
     */
    rtb_TmpSignalConversionAtVeES_d = (rtb_TmpSignalConversionAtVeIC_g &&
        (KeICSR_b_EnblPstnCntrlTmr));

    /* Logic: '<S41>/AND' incorporates:
     *  Logic: '<S41>/OR1'
     *  UnitDelay: '<S41>/Unit Delay'
     */
    rtb_NotEqual_ol = (rtb_TmpSignalConversionAtVeES_d &&
                       (!ICSR_ac_DW.UnitDelay_DSTATE_pe));

    /* Update for UnitDelay: '<S41>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_pe = rtb_TmpSignalConversionAtVeES_d;

    /* RelationalOperator: '<S26>/Comparison4' incorporates:
     *  Constant: '<S39>/Constant'
     */
    rtb_TmpSignalConversionAtVeES_d = (((uint32)rtb_TmpSignalConversionAtVeTRGR)
        == CeTRGR_e_TransRangePark);

    /* Logic: '<S40>/AND' incorporates:
     *  Logic: '<S40>/OR1'
     *  UnitDelay: '<S40>/Unit Delay'
     */
    rtb_NotEqual_j1 = (rtb_TmpSignalConversionAtVeES_d &&
                       (!ICSR_ac_DW.UnitDelay_DSTATE_nv));

    /* Update for UnitDelay: '<S40>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_nv = rtb_TmpSignalConversionAtVeES_d;

    /* Logic: '<S26>/Logical2' */
    rtb_NotEqual_ol = (rtb_NotEqual_ol || rtb_NotEqual_j1);

    /* Outputs for Atomic SubSystem: '<S46>/EdgeRising' */
    /* Logic: '<S47>/AND' incorporates:
     *  Logic: '<S47>/OR1'
     *  UnitDelay: '<S47>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeES_d = (rtb_NotEqual_ol &&
        (!ICSR_ac_DW.UnitDelay_DSTATE_cs));

    /* Update for UnitDelay: '<S47>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_cs = rtb_NotEqual_ol;

    /* End of Outputs for SubSystem: '<S46>/EdgeRising' */

    /* Switch: '<S46>/Switch1' incorporates:
     *  Constant: '<S46>/Constant Value3'
     *  Logic: '<S46>/AND1'
     *  RelationalOperator: '<S46>/Greater  Than2'
     *  Switch: '<S46>/Switch2'
     *  UnitDelay: '<S46>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeES_d && (ICSR_ac_DW.UnitDelay_DSTATE_la <=
            0.0F))
    {
        /* Switch: '<S46>/Switch1' incorporates:
         *  Constant: '<S45>/Calib'
         */
        rtb_LeICSC_phi_DiffTrgt_Crrnt = KeICSR_t_MxTmforPstnCntrl;
    }
    else if (rtb_TmpSignalConversionAtVeIC_g)
    {
        /* Switch: '<S46>/Switch2' incorporates:
         *  Constant: '<S42>/Calib'
         *  Constant: '<S46>/Constant Value4'
         *  MinMax: '<S46>/Maximum'
         *  Sum: '<S46>/Subtraction'
         *  Switch: '<S46>/Switch1'
         */
        rtb_LeICSC_phi_DiffTrgt_Crrnt = fmaxf(ICSR_ac_DW.UnitDelay_DSTATE_la -
            HeICSR_t_MedTEB_dT, 0.0F);
    }
    else
    {
        /* Switch: '<S46>/Switch1' incorporates:
         *  Switch: '<S46>/Switch2'
         */
        rtb_LeICSC_phi_DiffTrgt_Crrnt = ICSR_ac_DW.UnitDelay_DSTATE_la;
    }

    /* End of Switch: '<S46>/Switch1' */

    /* Update for UnitDelay: '<S46>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_la = rtb_LeICSC_phi_DiffTrgt_Crrnt;

    /* Logic: '<S26>/Logical1' incorporates:
     *  Constant: '<S46>/Constant Value2'
     *  RelationalOperator: '<S46>/Greater  Than1'
     */
    VeICSR_b_AbsolPstnCntrlTmr = (rtb_LeICSC_phi_DiffTrgt_Crrnt <= 0.0F);

    /* Logic: '<S23>/Logical1' incorporates:
     *  Constant: '<S28>/Calib'
     *  Constant: '<S29>/Calib'
     */
    VeICSC_b_GlblDsblAbsAnglCntrl = ((((((!VeICSC_b_AbsNoRolloverReq) &&
        (VeICSC_b_DsblAbsPosCntrl)) ||
        (ICSR_ac_B.VariantMerge_For_Variant_Sou_gp)) ||
        (VeICSR_b_AbsolPstnCntrlTmr)) || (VeICSR_b_AbsInSafeZone)) ||
        ((rtb_AND_ar && (!KeICSR_b_Bypass720AnglFA)) || ((!rtb_UnitDelay_g2) &&
        (!KeICSR_b_BypassAnglLrnChk))));

    /* Lookup_n-D: '<S79>/Vector' incorporates:
     *  Switch: '<S24>/Switch'
     */
    rtb_Vector = look1_iflf_binlcapw(VeICSC_phi_AbsErrorAngle, ((const float32 *)
        &(KxICSR_dM_AngleCL_PTermRtLmt[0])), ((const float32 *)
        &(KtICSR_dM_AngleCL_PTermRtLmt[0])), 10U);
    if (VeICSC_b_GlblDsblAbsAnglCntrl)
    {
        /* Switch: '<S82>/Switch' incorporates:
         *  Constant: '<S82>/Constant Value'
         */
        rtb_Negation1_eu = 0.0F;
    }
    else
    {
        /* Gain: '<S82>/Negation1' incorporates:
         *  Constant: '<S78>/Calib'
         */
        rtb_Negation1_eu = -KeICSR_M_AngleCL_PTermLimit;

        /* Product: '<S52>/Multiplication13' incorporates:
         *  Lookup_n-D: '<S80>/Vector'
         *  Lookup_n-D: '<S81>/Vector'
         *  Product: '<S52>/Multiplication1'
         *  SignalConversion generated from: '<S1>/VeENGR_T_EngCoolantTemp'
         *  SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp'
         *  Switch: '<S17>/Switch'
         *  Switch: '<S24>/Switch'
         */
        rtb_Switch2_gm = (look2_iflf_binlcapw(rtb_TmpSignalConversionAtVeTFTR,
                           rtb_TmpSignalConversionAtVeEN_p, ((const float32 *)
                            &(KxICSR_k_PGnSclng_TempDep[0])), ((const float32 *)
                            &(KyICSR_k_PGnSclng_TempDep[0])), ((const float32 *)
                            &(KtICSR_k_PGnSclng_TempDep[0])),
                           ICSR_ac_ConstP.pooled13, 7U) * look2_iflf_binlcapw
                          (VeICSC_phi_AbsErrorAngle, VeICSI_n_NiActl, ((const
                             float32 *)&(KxICSR_k_PstnCntrl_PGain[0])), ((const
                             float32 *)&(KyICSR_k_PstnCntrl_PGain[0])), ((const
                             float32 *)&(KtICSR_k_PstnCntrl_PGain[0])),
                           ICSR_ac_ConstP.pooled12, 14U)) *
            VeICSC_phi_AbsErrorAngle;

        /* Outputs for Atomic SubSystem: '<S82>/Limiter1' */
        /* Switch: '<S84>/Switch1' incorporates:
         *  Constant: '<S78>/Calib'
         *  RelationalOperator: '<S84>/Relational Operator'
         */
        if (KeICSR_M_AngleCL_PTermLimit < rtb_Switch2_gm)
        {
            /* Switch: '<S84>/Switch1' */
            rtb_Switch2_gm = KeICSR_M_AngleCL_PTermLimit;
        }

        /* End of Switch: '<S84>/Switch1' */

        /* Switch: '<S84>/Switch' incorporates:
         *  Constant: '<S78>/Calib'
         *  Gain: '<S82>/Negation1'
         *  RelationalOperator: '<S84>/Relational Operator1'
         */
        if (rtb_Switch2_gm > (-KeICSR_M_AngleCL_PTermLimit))
        {
            /* Switch: '<S82>/Switch' */
            rtb_Negation1_eu = rtb_Switch2_gm;
        }

        /* End of Switch: '<S84>/Switch' */
        /* End of Outputs for SubSystem: '<S82>/Limiter1' */
    }

    /* Sum: '<S77>/Sum2' incorporates:
     *  UnitDelay: '<S77>/Unit Delay'
     */
    rtb_Negation1_eu -= ICSR_ac_DW.UnitDelay_DSTATE_p;

    /* Outputs for Atomic SubSystem: '<S77>/Limiter' */
    /* Switch: '<S83>/Switch1' incorporates:
     *  RelationalOperator: '<S83>/Relational Operator'
     */
    if (rtb_Vector < rtb_Negation1_eu)
    {
        /* Switch: '<S144>/Switch1' */
        rtb_Switch2_gm = rtb_Vector;
    }
    else
    {
        /* Switch: '<S144>/Switch1' */
        rtb_Switch2_gm = rtb_Negation1_eu;
    }

    /* End of Switch: '<S83>/Switch1' */

    /* Switch: '<S83>/Switch' incorporates:
     *  RelationalOperator: '<S83>/Relational Operator1'
     */
    if (rtb_Switch2_gm <= (-rtb_Vector))
    {
        rtb_Switch2_gm = -rtb_Vector;
    }

    /* End of Switch: '<S83>/Switch' */
    /* End of Outputs for SubSystem: '<S77>/Limiter' */

    /* Sum: '<S77>/Sum3' incorporates:
     *  UnitDelay: '<S77>/Unit Delay'
     */
    VeICSR_M_AbsAngleCLPTerm = rtb_Switch2_gm + ICSR_ac_DW.UnitDelay_DSTATE_p;

    /* Update for UnitDelay: '<S77>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_p = VeICSR_M_AbsAngleCLPTerm;

    /* Lookup_n-D: '<S71>/Vector' incorporates:
     *  Switch: '<S24>/Switch'
     */
    rtb_Negation1_eu = look1_iflf_binlcapw(VeICSC_phi_AbsErrorAngle, ((const
        float32 *)&(KxICSR_dM_AngleCL_ITermRtLmt[0])), ((const float32 *)
        &(KtICSR_dM_AngleCL_ITermRtLmt[0])), 10U);

    /* Logic: '<S22>/Logical Operator1' incorporates:
     *  Constant: '<S87>/Calib'
     *  Constant: '<S88>/Calib'
     */
    VeICSR_b_ItermRst_Chk_AbsParking = (((fabsf(VeICSC_phi_AbsErrorAngle) <=
        KeICSR_phi_AngleErrLmt_ItermRst) || (fabsf(VeICSI_n_NiActl) >=
        KeICSR_n_ParkingNiLmt_ItermRst)) || (VeICSC_b_GlblDsblAbsAnglCntrl));

    /* Outputs for Atomic SubSystem: '<S91>/EdgeRising' */
    /* Logic: '<S92>/AND' incorporates:
     *  Logic: '<S92>/OR1'
     *  UnitDelay: '<S92>/Unit Delay'
     */
    rtb_AND_ar = ((VeICSR_b_ItermRst_Chk_AbsParking) &&
                  (!ICSR_ac_DW.UnitDelay_DSTATE_iq));

    /* Update for UnitDelay: '<S92>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_iq = VeICSR_b_ItermRst_Chk_AbsParking;

    /* End of Outputs for SubSystem: '<S91>/EdgeRising' */

    /* Switch: '<S91>/Switch1' incorporates:
     *  Logic: '<S91>/OR'
     *  Logic: '<S91>/OR1'
     */
    if ((!VeICSR_b_ItermRst_Chk_AbsParking) || rtb_AND_ar)
    {
        /* Switch: '<S91>/Switch1' incorporates:
         *  Constant: '<S91>/Constant Value1'
         */
        rtb_LeICSC_phi_DiffTrgt_Crrnt = 0.0F;
    }
    else
    {
        /* Switch: '<S91>/Switch1' incorporates:
         *  Constant: '<S86>/Calib'
         *  Constant: '<S89>/Calib'
         *  MinMax: '<S91>/Minimum'
         *  Sum: '<S91>/Summation'
         *  UnitDelay: '<S91>/Unit Delay'
         */
        rtb_LeICSC_phi_DiffTrgt_Crrnt = fminf(KeICSR_t_DlyTm_ItermRst_Parking,
            HeICSR_t_MedTEB_dT + ICSR_ac_DW.UnitDelay_DSTATE_hr);
    }

    /* End of Switch: '<S91>/Switch1' */

    /* Logic: '<S91>/AND' incorporates:
     *  Constant: '<S89>/Calib'
     *  RelationalOperator: '<S91>/Greater  Than'
     */
    VeICSR_b_ItermRst_AbsParking_PreLatch = ((VeICSR_b_ItermRst_Chk_AbsParking) &&
        (rtb_LeICSC_phi_DiffTrgt_Crrnt >= KeICSR_t_DlyTm_ItermRst_Parking));

    /* Update for UnitDelay: '<S91>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_hr = rtb_LeICSC_phi_DiffTrgt_Crrnt;

    /* Logic: '<S85>/AND' incorporates:
     *  Logic: '<S85>/OR1'
     *  UnitDelay: '<S85>/Unit Delay'
     */
    rtb_AND_ar = ((!VeICSC_b_GlblDsblAbsAnglCntrl) &&
                  (ICSR_ac_DW.UnitDelay_DSTATE_pp));

    /* Update for UnitDelay: '<S85>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_pp = VeICSC_b_GlblDsblAbsAnglCntrl;

    /* Logic: '<S90>/OR1' incorporates:
     *  Logic: '<S90>/NOT'
     *  Logic: '<S90>/OR'
     *  UnitDelay: '<S90>/Unit Delay'
     */
    VeICSR_b_ItermRst_AbsParking_PostLatch =
        ((VeICSR_b_ItermRst_AbsParking_PreLatch) || ((!rtb_AND_ar) &&
          (ICSR_ac_DW.UnitDelay_DSTATE_hj)));

    /* Update for UnitDelay: '<S90>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_hj = VeICSR_b_ItermRst_AbsParking_PostLatch;
    if (VeICSR_b_ItermRst_AbsParking_PostLatch)
    {
        /* Switch: '<S74>/Switch' incorporates:
         *  Constant: '<S74>/Constant Value'
         */
        rtb_LeICSC_phi_DiffTrgt_Crrnt = 0.0F;
    }
    else
    {
        /* Gain: '<S74>/Negation' incorporates:
         *  Constant: '<S70>/Calib'
         */
        rtb_LeICSC_phi_DiffTrgt_Crrnt = -KeICSR_M_AngleCL_ITermLimit;

        /* Sum: '<S50>/Sum//Sub3' incorporates:
         *  Lookup_n-D: '<S72>/Vector'
         *  Lookup_n-D: '<S73>/Vector'
         *  Product: '<S50>/Multiplication1'
         *  Product: '<S50>/Multiplication12'
         *  SignalConversion generated from: '<S1>/VeENGR_T_EngCoolantTemp'
         *  SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp'
         *  Switch: '<S17>/Switch'
         *  Switch: '<S24>/Switch'
         */
        rtb_Switch2_gm = ((look2_iflf_binlcapw(rtb_TmpSignalConversionAtVeTFTR,
                            rtb_TmpSignalConversionAtVeEN_p, ((const float32 *)
                             &(KxICSR_k_IGnSclng_TempDep[0])), ((const float32 *)
                             &(KyICSR_k_IGnSclng_TempDep[0])), ((const float32 *)
                             &(KtICSR_k_IGnSclng_TempDep[0])),
                            ICSR_ac_ConstP.pooled13, 7U) * look2_iflf_binlcapw
                           (VeICSC_phi_AbsErrorAngle, VeICSI_n_NiActl, ((const
                              float32 *)&(KxICSR_k_PstnCntrl_IGain[0])), ((const
                              float32 *)&(KyICSR_k_PstnCntrl_IGain[0])), ((const
                              float32 *)&(KtICSR_k_PstnCntrl_IGain[0])),
                            ICSR_ac_ConstP.pooled12, 14U)) *
                          VeICSC_phi_AbsErrorAngle) +
            ICSR_ac_DW.UnitDelay1_DSTATE_d;

        /* Outputs for Atomic SubSystem: '<S74>/Limiter' */
        /* Switch: '<S76>/Switch1' incorporates:
         *  Constant: '<S70>/Calib'
         *  RelationalOperator: '<S76>/Relational Operator'
         */
        if (KeICSR_M_AngleCL_ITermLimit < rtb_Switch2_gm)
        {
            /* Switch: '<S76>/Switch1' */
            rtb_Switch2_gm = KeICSR_M_AngleCL_ITermLimit;
        }

        /* End of Switch: '<S76>/Switch1' */

        /* Switch: '<S76>/Switch' incorporates:
         *  Constant: '<S70>/Calib'
         *  Gain: '<S74>/Negation'
         *  RelationalOperator: '<S76>/Relational Operator1'
         */
        if (rtb_Switch2_gm > (-KeICSR_M_AngleCL_ITermLimit))
        {
            /* Switch: '<S74>/Switch' */
            rtb_LeICSC_phi_DiffTrgt_Crrnt = rtb_Switch2_gm;
        }

        /* End of Switch: '<S76>/Switch' */
        /* End of Outputs for SubSystem: '<S74>/Limiter' */
    }

    /* Sum: '<S69>/Sum2' incorporates:
     *  UnitDelay: '<S69>/Unit Delay'
     */
    rtb_Switch2_gm = rtb_LeICSC_phi_DiffTrgt_Crrnt -
        ICSR_ac_DW.UnitDelay_DSTATE_lg;

    /* Outputs for Atomic SubSystem: '<S69>/Limiter' */
    /* Switch: '<S75>/Switch1' incorporates:
     *  RelationalOperator: '<S75>/Relational Operator'
     */
    if (rtb_Negation1_eu < rtb_Switch2_gm)
    {
        /* Switch: '<S144>/Switch1' */
        rtb_Switch2_gm = rtb_Negation1_eu;
    }

    /* End of Switch: '<S75>/Switch1' */

    /* Switch: '<S75>/Switch' incorporates:
     *  RelationalOperator: '<S75>/Relational Operator1'
     */
    if (rtb_Switch2_gm <= (-rtb_Negation1_eu))
    {
        rtb_Switch2_gm = -rtb_Negation1_eu;
    }

    /* End of Switch: '<S75>/Switch' */
    /* End of Outputs for SubSystem: '<S69>/Limiter' */

    /* Sum: '<S69>/Sum3' incorporates:
     *  UnitDelay: '<S69>/Unit Delay'
     */
    VeICSR_M_AbsAngleCLITerm = rtb_Switch2_gm + ICSR_ac_DW.UnitDelay_DSTATE_lg;

    /* Update for UnitDelay: '<S69>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_lg = VeICSR_M_AbsAngleCLITerm;

    /* Lookup_n-D: '<S61>/Vector' incorporates:
     *  Switch: '<S24>/Switch'
     */
    rtb_Vector_c = look1_iflf_binlcapw(VeICSC_phi_AbsErrorAngle, ((const float32
        *)&(KxICSR_dM_AngleCL_DTermRtLmt[0])), ((const float32 *)
        &(KtICSR_dM_AngleCL_DTermRtLmt[0])), 10U);

    /* UnitDelay: '<S133>/Unit Delay' incorporates:
     *  Constant: '<S55>/Constant Value1'
     *  Constant: '<S57>/Calib'
     */
    rtb_Switch2_gm = HeICSR_t_MedTEB_dT / 2.0F;

    /* Switch: '<S54>/Switch1' incorporates:
     *  Constant: '<S59>/Calib'
     *  Gain: '<S49>/Gain1'
     *  RelationalOperator: '<S54>/Greater  Than'
     *  RelationalOperator: '<S54>/Greater  Than1'
     *  Switch: '<S54>/Switch2'
     */
    if (VeICSC_phi_AbsErrorAngle >= KeICSR_n_DCtrlDeadBand_Parking)
    {
        /* Switch: '<S54>/Switch1' incorporates:
         *  Sum: '<S54>/Subtraction'
         */
        rtb_Vector = VeICSC_phi_AbsErrorAngle - KeICSR_n_DCtrlDeadBand_Parking;
    }
    else if (VeICSC_phi_AbsErrorAngle <= (-KeICSR_n_DCtrlDeadBand_Parking))
    {
        /* Switch: '<S54>/Switch2' incorporates:
         *  Gain: '<S49>/Gain1'
         *  Sum: '<S54>/Subtraction1'
         *  Switch: '<S54>/Switch1'
         */
        rtb_Vector = VeICSC_phi_AbsErrorAngle - (-KeICSR_n_DCtrlDeadBand_Parking);
    }
    else
    {
        /* Switch: '<S54>/Switch1' incorporates:
         *  Constant: '<S54>/Constant Value'
         *  Switch: '<S54>/Switch2'
         */
        rtb_Vector = 0.0F;
    }

    /* End of Switch: '<S54>/Switch1' */

    /* Product: '<S55>/Multiplication2' incorporates:
     *  Constant: '<S60>/Calib'
     */
    VeICSR_dphi_PIDTerm_AbsParking = ((rtb_Vector - ((rtb_Switch2_gm -
        KeICSR_t_DTermCutoffTime_Parking) * ICSR_ac_DW.UnitDelay1_DSTATE_c)) -
        ICSR_ac_DW.UnitDelay_DSTATE_ma) / (rtb_Switch2_gm +
        KeICSR_t_DTermCutoffTime_Parking);
    if ((VeICSC_phi_AbsErrorAngle * VeICSR_dphi_PIDTerm_AbsParking) > 0.0F)
    {
        /* Switch: '<S53>/Switch' incorporates:
         *  Lookup_n-D: '<S65>/Vector'
         *  Product: '<S55>/Multiplication2'
         */
        VeICSR_K_DTermNonLinear_AbsParking = look1_iflf_binlcapw
            (VeICSR_dphi_PIDTerm_AbsParking, ((const float32 *)
              &(KxICSR_K_DTermCorrectDir_Parking[0])), ((const float32 *)
              &(KtICSR_K_DTermCorrectDir_Parking[0])), 10U);
    }
    else
    {
        /* Switch: '<S53>/Switch' incorporates:
         *  Lookup_n-D: '<S66>/Vector'
         *  Product: '<S55>/Multiplication2'
         */
        VeICSR_K_DTermNonLinear_AbsParking = look1_iflf_binlcapw
            (VeICSR_dphi_PIDTerm_AbsParking, ((const float32 *)
              &(KxICSR_K_DTermWrongDir_Parking[0])), ((const float32 *)
              &(KtICSR_K_DTermWrongDir_Parking[0])), 10U);
    }

    /* Product: '<S53>/Product1' incorporates:
     *  Constant: '<S53>/Constant Value'
     *  SignalConversion generated from: '<S1>/VeENGR_T_EngCoolantTemp'
     *  SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp'
     *  Switch: '<S17>/Switch'
     *  Switch: '<S24>/Switch'
     */
    rtb_Switch2_gm = ((look2_iflf_binlcapw(rtb_TmpSignalConversionAtVeTFTR,
                        rtb_TmpSignalConversionAtVeEN_p, ((const float32 *)
                         &(KxICSR_k_DGnSclng_TempDep[0])), ((const float32 *)
                         &(KyICSR_k_DGnSclng_TempDep[0])), ((const float32 *)
                         &(KtICSR_k_DGnSclng_TempDep[0])),
                        ICSR_ac_ConstP.pooled13, 7U) * look2_iflf_binlcapw
                       (VeICSC_phi_AbsErrorAngle, VeICSI_n_NiActl, ((const
                          float32 *)&(KxICSR_k_PstnCntrl_DGain[0])), ((const
                          float32 *)&(KyICSR_k_PstnCntrl_DGain[0])), ((const
                          float32 *)&(KtICSR_k_PstnCntrl_DGain[0])),
                        ICSR_ac_ConstP.pooled12, 14U)) *
                      VeICSR_dphi_PIDTerm_AbsParking) *
        VeICSR_K_DTermNonLinear_AbsParking;

    /* Switch: '<S68>/Switch1' incorporates:
     *  Constant: '<S58>/Calib'
     *  RelationalOperator: '<S68>/Relational Operator'
     */
    if (KeICSR_M_AngleCL_DTermLimit < rtb_Switch2_gm)
    {
        /* UnitDelay: '<S133>/Unit Delay' */
        rtb_Switch2_gm = KeICSR_M_AngleCL_DTermLimit;
    }

    /* End of Switch: '<S68>/Switch1' */

    /* Switch: '<S68>/Switch' incorporates:
     *  Constant: '<S58>/Calib'
     *  RelationalOperator: '<S68>/Relational Operator1'
     */
    if (rtb_Switch2_gm <= (-KeICSR_M_AngleCL_DTermLimit))
    {
        rtb_Switch2_gm = -KeICSR_M_AngleCL_DTermLimit;
    }

    /* End of Switch: '<S68>/Switch' */

    /* Sum: '<S56>/Sum2' incorporates:
     *  UnitDelay: '<S56>/Unit Delay'
     */
    rtb_Switch2_gm -= ICSR_ac_DW.UnitDelay_DSTATE_b;

    /* Outputs for Atomic SubSystem: '<S56>/Limiter' */
    /* Switch: '<S67>/Switch1' incorporates:
     *  RelationalOperator: '<S67>/Relational Operator'
     */
    if (rtb_Vector_c < rtb_Switch2_gm)
    {
        /* Switch: '<S144>/Switch1' */
        rtb_Switch2_gm = rtb_Vector_c;
    }

    /* End of Switch: '<S67>/Switch1' */

    /* Switch: '<S67>/Switch' incorporates:
     *  RelationalOperator: '<S67>/Relational Operator1'
     */
    if (rtb_Switch2_gm <= (-rtb_Vector_c))
    {
        rtb_Switch2_gm = -rtb_Vector_c;
    }

    /* End of Switch: '<S67>/Switch' */
    /* End of Outputs for SubSystem: '<S56>/Limiter' */

    /* Sum: '<S56>/Sum3' incorporates:
     *  UnitDelay: '<S56>/Unit Delay'
     */
    VeICSR_M_AbsAngleCLDTerm = rtb_Switch2_gm + ICSR_ac_DW.UnitDelay_DSTATE_b;

    /* Update for UnitDelay: '<S56>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_b = VeICSR_M_AbsAngleCLDTerm;

    /* Sum: '<S48>/Subtraction1' incorporates:
     *  Constant: '<S51>/Calib'
     */
    rtb_Negation1_eu = ((((VeICSR_M_AbsAngleCLPTerm + VeICSR_M_AbsAngleCLITerm)
                          + VeICSR_M_AbsAngleCLDTerm) -
                         ICSR_ac_DW.UnitDelay2_DSTATE_h) *
                        KeICSR_K_AngleCL_FltCoeff) +
        ICSR_ac_DW.UnitDelay2_DSTATE_h;
    if (VeICSC_b_GlblDsblAbsAnglCntrl)
    {
        /* VariantMerge generated from: '<S6>/Variant Source' incorporates:
         *  Constant: '<S21>/Constant Value4'
         */
        rtb_Vector_c = 0.0F;
    }
    else
    {
        /* VariantMerge generated from: '<S6>/Variant Source' */
        rtb_Vector_c = rtb_Negation1_eu;
    }

    /* End of Outputs for SubSystem: '<S26>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S26>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S26>/TRTE' */
    /* End of Outputs for SubSystem: '<S52>/GradientLimiter2' */
    /* End of Outputs for SubSystem: '<S22>/Turn On Delay Time' */
    /* End of Outputs for SubSystem: '<S22>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S22>/LOWR' */
    /* End of Outputs for SubSystem: '<S50>/GradientLimiter3' */
    /* End of Outputs for SubSystem: '<S49>/DeadBand1' */
    /* End of Outputs for SubSystem: '<S64>/Limiter1' */
    /* End of Outputs for SubSystem: '<S49>/GradientLimiter4' */
#endif

    /* End of Sum: '<S24>/Sum2' */

    /* Abs: '<S98>/Abs' incorporates:
     *  Abs: '<S95>/Abs'
     *  Abs: '<S95>/Abs1'
     *  Constant: '<S106>/Calib'
     *  Constant: '<S107>/Calib'
     *  Constant: '<S114>/Calib'
     *  Constant: '<S130>/Constant Value'
     *  Constant: '<S97>/Constant Value2'
     *  Constant: '<S99>/Constant Value1'
     *  DataStoreRead: '<S99>/Data Store Read'
     *  Gain: '<S141>/Negation1'
     *  Gain: '<S98>/Gain'
     *  Logic: '<S100>/Logical'
     *  Logic: '<S100>/Logical1'
     *  Logic: '<S100>/Logical2'
     *  Logic: '<S101>/Logical'
     *  Logic: '<S101>/Logical1'
     *  Logic: '<S101>/Logical3'
     *  Logic: '<S95>/Logical Operator1'
     *  Logic: '<S96>/Logical1'
     *  Logic: '<S99>/Logical'
     *  Logic: '<S99>/Logical2'
     *  Logic: '<S99>/Logical3'
     *  Lookup_n-D: '<S138>/Vector'
     *  Lookup_n-D: '<S139>/Vector'
     *  Lookup_n-D: '<S140>/Vector'
     *  Lookup_n-D: '<S148>/Vector'
     *  Lookup_n-D: '<S156>/Vector'
     *  Product: '<S125>/Multiplication'
     *  Product: '<S126>/Multiplication1'
     *  Product: '<S126>/Multiplication10'
     *  Product: '<S127>/Multiplication8'
     *  Product: '<S129>/Multiplication9'
     *  Product: '<S130>/Product'
     *  Product: '<S130>/Product1'
     *  Product: '<S132>/Multiplication2'
     *  Product: '<S132>/Multiplication3'
     *  Product: '<S132>/Multiplication4'
     *  Product: '<S98>/Product'
     *  Product: '<S98>/Product1'
     *  Product: '<S99>/Product'
     *  RelationalOperator: '<S100>/Comparison'
     *  RelationalOperator: '<S100>/Comparison1'
     *  RelationalOperator: '<S100>/Comparison4'
     *  RelationalOperator: '<S101>/Comparison'
     *  RelationalOperator: '<S101>/Comparison1'
     *  RelationalOperator: '<S101>/Comparison3'
     *  RelationalOperator: '<S130>/Comparison'
     *  RelationalOperator: '<S95>/Comparison2'
     *  RelationalOperator: '<S95>/Comparison3'
     *  RelationalOperator: '<S97>/Comparison1'
     *  RelationalOperator: '<S97>/Comparison3'
     *  RelationalOperator: '<S99>/Comparison2'
     *  Rounding: '<S98>/Rounding1'
     *  Rounding: '<S98>/Rounding3'
     *  SignalConversion generated from: '<S6>/Variant Source'
     *  Sum: '<S101>/Sum4'
     *  Sum: '<S101>/Sum5'
     *  Sum: '<S125>/Subtraction'
     *  Sum: '<S125>/Subtraction1'
     *  Sum: '<S132>/Summation'
     *  Sum: '<S132>/Summation1'
     *  Sum: '<S132>/Summation2'
     *  Sum: '<S94>/Sum//Sub2'
     *  Sum: '<S97>/Sum2'
     *  Sum: '<S98>/Sum'
     *  Sum: '<S98>/Sum1'
     *  Sum: '<S98>/Sum2'
     *  Sum: '<S98>/Sum3'
     *  Sum: '<S99>/Sum'
     *  Switch: '<S130>/Switch'
     *  Switch: '<S151>/Switch'
     *  Switch: '<S159>/Switch'
     *  Switch: '<S94>/Switch'
     *  Switch: '<S96>/Switch1'
     *  Switch: '<S97>/Switch'
     *  Switch: '<S97>/Switch1'
     *  UnitDelay: '<S127>/Unit Delay1'
     *  UnitDelay: '<S132>/Unit Delay'
     *  UnitDelay: '<S132>/Unit Delay1'
     *  UnitDelay: '<S94>/Unit Delay2'
     */
#if Rte_SysCon_Variant_ICSR_2

    /* Outputs for Atomic SubSystem: '<S126>/GradientLimiter4' */
    /* Outputs for Atomic SubSystem: '<S141>/Limiter1' */
    /* Outputs for Atomic SubSystem: '<S126>/DeadBand1' */
    /* Outputs for Atomic SubSystem: '<S127>/GradientLimiter3' */
    /* Outputs for Atomic SubSystem: '<S95>/LOWR' */
    /* Outputs for Atomic SubSystem: '<S95>/EdgeFalling' */
    /* Outputs for Atomic SubSystem: '<S95>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S129>/GradientLimiter2' */
    /* Outputs for Enabled SubSystem: '<S100>/UnLatchCrrntAngle' */
    /* Outputs for Enabled SubSystem: '<S99>/LatchCrrntAngle' */
    /* Outputs for Atomic SubSystem: '<S100>/TRTE' */
    /* Outputs for Atomic SubSystem: '<S100>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S100>/EdgeRising1' */
    /* Outputs for Atomic SubSystem: '<S98>/Protected Division' */
    /* Outputs for Atomic SubSystem: '<S98>/PD2' */
    /* Outputs for Atomic SubSystem: '<S98>/PD1' */
    /* Abs: '<S98>/Abs' */
    rtb_Abs = fabsf(rtb_TmpSignalConversionAtVeESPR);

    /* Switch: '<S109>/Switch1' incorporates:
     *  Constant: '<S109>/Constant Value1'
     *  Constant: '<S112>/Calib'
     *  RelationalOperator: '<S109>/Not Equal1'
     */
    if (((float32)KeICSR_Cnt_EngCylTotal) != 0.0F)
    {
        /* Switch: '<S109>/Switch1' incorporates:
         *  Constant: '<S98>/Constant Value3'
         *  Product: '<S109>/Division'
         */
        rtb_Gain = 720.0F / ((float32)KeICSR_Cnt_EngCylTotal);
    }
    else
    {
        /* Switch: '<S109>/Switch1' */
        rtb_Gain = 3.402823466E+38F;
    }

    /* End of Switch: '<S109>/Switch1' */

    /* Switch: '<S110>/Switch1' incorporates:
     *  Product: '<S110>/Division'
     */
    rtb_Sum3_iz = (rtb_Abs + rtb_Gain) / rtb_Gain;

    /* Switch: '<S111>/Switch1' incorporates:
     *  Constant: '<S111>/Constant Value'
     *  RelationalOperator: '<S111>/Not Equal'
     */
    if (rtb_Abs != 0.0F)
    {
        /* Switch: '<S111>/Switch1' incorporates:
         *  Product: '<S111>/Division'
         */
        rtb_Abs /= rtb_Gain;
    }

    /* End of Switch: '<S111>/Switch1' */

    /* Product: '<S98>/Product' incorporates:
     *  Constant: '<S98>/Constant Value1'
     */
    VeICSC_phi_NTDC = (truncf(rtb_Abs) + 1.0F) * rtb_Gain;

    /* Sum: '<S97>/Sum2' incorporates:
     *  Constant: '<S108>/Calib'
     */
    rtb_Abs = (VeICSC_phi_NTDC - KeICSR_phi_DltAnglBfrTDC) -
        rtb_TmpSignalConversionAtVeESPR;
    if (VeICSI_n_NiActl > KeICSR_n_EngSpdNTDCThrshld)
    {
        rtb_Subtraction1_b = 0.0F;
    }
    else
    {
        rtb_Subtraction1_b = KeICSR_phi_MinNegAnglBfrTDC;
    }

    /* RelationalOperator: '<S97>/Comparison3' incorporates:
     *  Constant: '<S106>/Calib'
     *  Constant: '<S107>/Calib'
     *  Constant: '<S97>/Constant Value2'
     */
    rtb_AND_ar = (rtb_Abs > rtb_Subtraction1_b);

    /* Logic: '<S101>/Logical1' incorporates:
     *  DataStoreRead: '<S101>/Data Store Read'
     *  DataStoreRead: '<S101>/Data Store Read1'
     */
    VeICSR_b_TDCLim = ((ICSR_ac_DW.VeICSR_b_CrrntAngleLtchd) &&
                       (rtb_TmpSignalConversionAtVeESPR >=
                        ICSR_ac_DW.VeICSR_phi_PstnCntrlStrtngAngle));
    if (rtb_AND_ar)
    {
        /* UnitDelay: '<S167>/Unit Delay' incorporates:
         *  Constant: '<S96>/FALSE Constant'
         */
        rtb_UnitDelay_g2 = false;
    }
    else
    {
        /* UnitDelay: '<S167>/Unit Delay' incorporates:
         *  Constant: '<S103>/Calib'
         *  Logic: '<S101>/Logical2'
         *  RelationalOperator: '<S101>/Comparison2'
         */
        rtb_UnitDelay_g2 = ((rtb_TmpSignalConversionAtVeENGR >=
                             KeICSR_p_ThrsEngManfldAbsPrs) || (VeICSR_b_TDCLim));
    }

    /* RelationalOperator: '<S100>/Comparison1' incorporates:
     *  Constant: '<S120>/Calib'
     */
    rtb_TmpSignalConversionAtVeIC_g = (KeICSR_n_EngSpdPstnCntrl >
        VeICSI_n_NiActl);

    /* Logic: '<S100>/Logical' incorporates:
     *  Constant: '<S119>/Calib'
     */
    rtb_TmpSignalConversionAtVeES_d = (rtb_TmpSignalConversionAtVeIC_g &&
        (KeICSR_b_EnblPstnCntrlTmr));

    /* Logic: '<S117>/AND' incorporates:
     *  Logic: '<S117>/OR1'
     *  UnitDelay: '<S117>/Unit Delay'
     */
    rtb_NotEqual_ol = (rtb_TmpSignalConversionAtVeES_d &&
                       (!ICSR_ac_DW.UnitDelay_DSTATE_mg));

    /* Update for UnitDelay: '<S117>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_mg = rtb_TmpSignalConversionAtVeES_d;

    /* RelationalOperator: '<S100>/Comparison4' incorporates:
     *  Constant: '<S115>/Constant'
     */
    rtb_TmpSignalConversionAtVeES_d = (((uint32)rtb_TmpSignalConversionAtVeTRGR)
        == CeTRGR_e_TransRangePark);

    /* Logic: '<S116>/AND' incorporates:
     *  Logic: '<S116>/OR1'
     *  UnitDelay: '<S116>/Unit Delay'
     */
    rtb_NotEqual_j1 = (rtb_TmpSignalConversionAtVeES_d &&
                       (!ICSR_ac_DW.UnitDelay_DSTATE_al));

    /* Update for UnitDelay: '<S116>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_al = rtb_TmpSignalConversionAtVeES_d;

    /* Logic: '<S100>/Logical2' */
    rtb_NotEqual_ol = (rtb_NotEqual_ol || rtb_NotEqual_j1);

    /* Outputs for Atomic SubSystem: '<S122>/EdgeRising' */
    /* Logic: '<S124>/AND' incorporates:
     *  Logic: '<S124>/OR1'
     *  UnitDelay: '<S124>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeES_d = (rtb_NotEqual_ol &&
        (!ICSR_ac_DW.UnitDelay_DSTATE_fn));

    /* Update for UnitDelay: '<S124>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_fn = rtb_NotEqual_ol;

    /* End of Outputs for SubSystem: '<S122>/EdgeRising' */

    /* Switch: '<S122>/Switch1' incorporates:
     *  Constant: '<S122>/Constant Value3'
     *  Logic: '<S122>/AND1'
     *  RelationalOperator: '<S122>/Greater  Than2'
     *  Switch: '<S122>/Switch2'
     *  UnitDelay: '<S122>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeES_d && (ICSR_ac_DW.UnitDelay_DSTATE_e <=
            0.0F))
    {
        /* Switch: '<S122>/Switch1' incorporates:
         *  Constant: '<S121>/Calib'
         */
        rtb_TmpSignalConversionAtVeENGR = KeICSR_t_MxTmforPstnCntrl;
    }
    else if (rtb_TmpSignalConversionAtVeIC_g)
    {
        /* Switch: '<S122>/Switch2' incorporates:
         *  Constant: '<S118>/Calib'
         *  Constant: '<S122>/Constant Value4'
         *  MinMax: '<S122>/Maximum'
         *  Sum: '<S122>/Subtraction'
         *  Switch: '<S122>/Switch1'
         */
        rtb_TmpSignalConversionAtVeENGR = fmaxf(ICSR_ac_DW.UnitDelay_DSTATE_e -
            HeICSR_t_MedTEB_dT, 0.0F);
    }
    else
    {
        /* Switch: '<S122>/Switch1' incorporates:
         *  Switch: '<S122>/Switch2'
         */
        rtb_TmpSignalConversionAtVeENGR = ICSR_ac_DW.UnitDelay_DSTATE_e;
    }

    /* End of Switch: '<S122>/Switch1' */

    /* Update for UnitDelay: '<S122>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_e = rtb_TmpSignalConversionAtVeENGR;

    /* Logic: '<S100>/Logical1' incorporates:
     *  Constant: '<S122>/Constant Value2'
     *  RelationalOperator: '<S122>/Greater  Than1'
     */
    VeICSR_b_PstnCntrlTmr = (rtb_TmpSignalConversionAtVeENGR <= 0.0F);

    /* Logic: '<S101>/Logical' incorporates:
     *  Constant: '<S102>/Calib'
     *  Constant: '<S104>/Calib'
     *  Constant: '<S105>/Calib'
     */
    VeICSR_b_InSafeZone = (((rtb_TmpSignalConversionAtVeESPR >= (VeICSC_phi_NTDC
        - KeICSR_phi_MaxDltAnglBfrTDC)) && (rtb_TmpSignalConversionAtVeESPR <=
        (VeICSC_phi_NTDC - KeICSR_phi_MinDltAnglBfrTDC))) &&
                           (!KeICSR_b_EnblPstnCntrlInSfZn));

    /* Logic: '<S96>/Logical1' */
    VeICSC_b_GlblDsblAnglCntrl = (((rtb_UnitDelay_g2 ||
        (ICSR_ac_B.VariantMerge_For_Variant_Sou_gp)) || (VeICSR_b_PstnCntrlTmr))
        || (VeICSR_b_InSafeZone));

    /* Logic: '<S162>/OR1' */
    VeICSI_b_Nx_ClchLrn_Active_tmp = !VeICSC_b_GlblDsblAnglCntrl;

    /* Outputs for Enabled SubSystem: '<S99>/LatchCrrntAngle' incorporates:
     *  EnablePort: '<S113>/Enable'
     */
    if ((VeICSI_b_Nx_ClchLrn_Active_tmp && (!ICSR_ac_DW.VeICSR_b_CrrntAngleLtchd))
        && (rtb_TmpSignalConversionAtVeESPR < ((((float32)KeICSR_Cnt_EngCylTotal)
           - 1.0F) * rtb_Gain)))
    {
        /* DataStoreWrite: '<S113>/Data Store Write' incorporates:
         *  Constant: '<S98>/Constant Value2'
         */
        ICSR_ac_DW.VeICSR_phi_PstnCntrlStrtngAngle = (truncf(rtb_Sum3_iz) + 1.0F)
            * rtb_Gain;

        /* DataStoreWrite: '<S113>/Data Store Write1' incorporates:
         *  Constant: '<S113>/TRUE Constant'
         */
        ICSR_ac_DW.VeICSR_b_CrrntAngleLtchd = true;
    }

    if (rtb_AND_ar)
    {
        /* Switch: '<S97>/Switch' */
        VeICSC_phi_ErrorAngle = rtb_Abs;
    }
    else
    {
        /* Switch: '<S97>/Switch' incorporates:
         *  Sum: '<S97>/Sum3'
         */
        VeICSC_phi_ErrorAngle = rtb_Abs + rtb_Gain;
    }

    /* Outputs for Enabled SubSystem: '<S100>/UnLatchCrrntAngle' incorporates:
     *  EnablePort: '<S123>/Enable'
     */
    /* DataStoreWrite: '<S123>/Data Store Write1' incorporates:
     *  Constant: '<S114>/Calib'
     *  Constant: '<S120>/Calib'
     *  Constant: '<S99>/Constant Value1'
     *  DataStoreRead: '<S99>/Data Store Read'
     */
    ICSR_ac_DW.VeICSR_b_CrrntAngleLtchd = ((VeICSI_n_NiActl <=
        KeICSR_n_EngSpdPstnCntrl) && (ICSR_ac_DW.VeICSR_b_CrrntAngleLtchd));

    /* Lookup_n-D: '<S156>/Vector' incorporates:
     *  Switch: '<S97>/Switch'
     */
    rtb_TmpSignalConversionAtVeESPR = look1_iflf_binlcapw(VeICSC_phi_ErrorAngle,
        ((const float32 *)&(KxICSR_dM_AngleCL_PTermRtLmt[0])), ((const float32 *)
        &(KtICSR_dM_AngleCL_PTermRtLmt[0])), 10U);
    if (VeICSC_b_GlblDsblAnglCntrl)
    {
        /* Switch: '<S159>/Switch' incorporates:
         *  Constant: '<S159>/Constant Value'
         */
        rtb_TmpSignalConversionAtVeENGR = 0.0F;
    }
    else
    {
        /* Gain: '<S159>/Negation1' incorporates:
         *  Constant: '<S155>/Calib'
         */
        rtb_TmpSignalConversionAtVeENGR = -KeICSR_M_AngleCL_PTermLimit;

        /* Product: '<S129>/Multiplication13' incorporates:
         *  Lookup_n-D: '<S157>/Vector'
         *  Lookup_n-D: '<S158>/Vector'
         *  Product: '<S129>/Multiplication1'
         *  SignalConversion generated from: '<S1>/VeENGR_T_EngCoolantTemp'
         *  SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp'
         *  Switch: '<S17>/Switch'
         *  Switch: '<S97>/Switch'
         */
        rtb_Sum3_iz = (look2_iflf_binlcapw(rtb_TmpSignalConversionAtVeTFTR,
                        rtb_TmpSignalConversionAtVeEN_p, ((const float32 *)
                         &(KxICSR_k_PGnSclng_TempDep[0])), ((const float32 *)
                         &(KyICSR_k_PGnSclng_TempDep[0])), ((const float32 *)
                         &(KtICSR_k_PGnSclng_TempDep[0])),
                        ICSR_ac_ConstP.pooled13, 7U) * look2_iflf_binlcapw
                       (VeICSC_phi_ErrorAngle, VeICSI_n_NiActl, ((const float32 *)
                         &(KxICSR_k_PstnCntrl_PGain[0])), ((const float32 *)
                         &(KyICSR_k_PstnCntrl_PGain[0])), ((const float32 *)
                         &(KtICSR_k_PstnCntrl_PGain[0])),
                        ICSR_ac_ConstP.pooled12, 14U)) * VeICSC_phi_ErrorAngle;

        /* Outputs for Atomic SubSystem: '<S159>/Limiter1' */
        /* Switch: '<S161>/Switch1' incorporates:
         *  Constant: '<S155>/Calib'
         *  RelationalOperator: '<S161>/Relational Operator'
         */
        if (KeICSR_M_AngleCL_PTermLimit < rtb_Sum3_iz)
        {
            /* Switch: '<S161>/Switch1' */
            rtb_Sum3_iz = KeICSR_M_AngleCL_PTermLimit;
        }

        /* End of Switch: '<S161>/Switch1' */

        /* Switch: '<S161>/Switch' incorporates:
         *  Constant: '<S155>/Calib'
         *  Gain: '<S159>/Negation1'
         *  RelationalOperator: '<S161>/Relational Operator1'
         */
        if (rtb_Sum3_iz > (-KeICSR_M_AngleCL_PTermLimit))
        {
            /* Switch: '<S159>/Switch' */
            rtb_TmpSignalConversionAtVeENGR = rtb_Sum3_iz;
        }

        /* End of Switch: '<S161>/Switch' */
        /* End of Outputs for SubSystem: '<S159>/Limiter1' */
    }

    /* Sum: '<S154>/Sum2' incorporates:
     *  UnitDelay: '<S154>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeENGR -= ICSR_ac_DW.UnitDelay_DSTATE_k;

    /* Outputs for Atomic SubSystem: '<S154>/Limiter' */
    /* Switch: '<S160>/Switch1' incorporates:
     *  RelationalOperator: '<S160>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtVeESPR < rtb_TmpSignalConversionAtVeENGR)
    {
        /* Switch: '<S144>/Switch1' */
        rtb_Switch2_gm = rtb_TmpSignalConversionAtVeESPR;
    }
    else
    {
        /* Switch: '<S144>/Switch1' */
        rtb_Switch2_gm = rtb_TmpSignalConversionAtVeENGR;
    }

    /* End of Switch: '<S160>/Switch1' */

    /* Switch: '<S160>/Switch' incorporates:
     *  RelationalOperator: '<S160>/Relational Operator1'
     */
    if (rtb_Switch2_gm <= (-rtb_TmpSignalConversionAtVeESPR))
    {
        rtb_Switch2_gm = -rtb_TmpSignalConversionAtVeESPR;
    }

    /* End of Switch: '<S160>/Switch' */
    /* End of Outputs for SubSystem: '<S154>/Limiter' */

    /* Sum: '<S154>/Sum3' incorporates:
     *  UnitDelay: '<S154>/Unit Delay'
     */
    VeICSR_M_AngleCLPTerm = rtb_Switch2_gm + ICSR_ac_DW.UnitDelay_DSTATE_k;

    /* Update for UnitDelay: '<S154>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_k = VeICSR_M_AngleCLPTerm;

    /* Lookup_n-D: '<S148>/Vector' incorporates:
     *  Switch: '<S97>/Switch'
     */
    rtb_TmpSignalConversionAtVeENGR = look1_iflf_binlcapw(VeICSC_phi_ErrorAngle,
        ((const float32 *)&(KxICSR_dM_AngleCL_ITermRtLmt[0])), ((const float32 *)
        &(KtICSR_dM_AngleCL_ITermRtLmt[0])), 10U);

    /* Logic: '<S95>/Logical Operator1' incorporates:
     *  Constant: '<S164>/Calib'
     *  Constant: '<S165>/Calib'
     */
    VeICSR_b_ItermRst_Chk_Parking = (((fabsf(VeICSC_phi_ErrorAngle) <=
        KeICSR_phi_AngleErrLmt_ItermRst) || (fabsf(VeICSI_n_NiActl) >=
        KeICSR_n_ParkingNiLmt_ItermRst)) || (VeICSC_b_GlblDsblAnglCntrl));

    /* Outputs for Atomic SubSystem: '<S168>/EdgeRising' */
    /* Logic: '<S169>/AND' incorporates:
     *  Logic: '<S169>/OR1'
     *  UnitDelay: '<S169>/Unit Delay'
     */
    rtb_AND_ar = ((VeICSR_b_ItermRst_Chk_Parking) &&
                  (!ICSR_ac_DW.UnitDelay_DSTATE_d4));

    /* Update for UnitDelay: '<S169>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_d4 = VeICSR_b_ItermRst_Chk_Parking;

    /* End of Outputs for SubSystem: '<S168>/EdgeRising' */

    /* Switch: '<S168>/Switch1' incorporates:
     *  Logic: '<S168>/OR'
     *  Logic: '<S168>/OR1'
     */
    if ((!VeICSR_b_ItermRst_Chk_Parking) || rtb_AND_ar)
    {
        /* Switch: '<S168>/Switch1' incorporates:
         *  Constant: '<S168>/Constant Value1'
         */
        rtb_Gain = 0.0F;
    }
    else
    {
        /* Switch: '<S168>/Switch1' incorporates:
         *  Constant: '<S163>/Calib'
         *  Constant: '<S166>/Calib'
         *  MinMax: '<S168>/Minimum'
         *  Sum: '<S168>/Summation'
         *  UnitDelay: '<S168>/Unit Delay'
         */
        rtb_Gain = fminf(KeICSR_t_DlyTm_ItermRst_Parking, HeICSR_t_MedTEB_dT +
                         ICSR_ac_DW.UnitDelay_DSTATE_i);
    }

    /* End of Switch: '<S168>/Switch1' */

    /* Logic: '<S168>/AND' incorporates:
     *  Constant: '<S166>/Calib'
     *  RelationalOperator: '<S168>/Greater  Than'
     */
    VeICSR_b_ItermRst_Parking_PreLatch = ((VeICSR_b_ItermRst_Chk_Parking) &&
        (rtb_Gain >= KeICSR_t_DlyTm_ItermRst_Parking));

    /* Update for UnitDelay: '<S168>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_i = rtb_Gain;

    /* Logic: '<S162>/AND' incorporates:
     *  UnitDelay: '<S162>/Unit Delay'
     */
    rtb_AND_ar = (VeICSI_b_Nx_ClchLrn_Active_tmp &&
                  (ICSR_ac_DW.UnitDelay_DSTATE_kc));

    /* Update for UnitDelay: '<S162>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_kc = VeICSC_b_GlblDsblAnglCntrl;

    /* Logic: '<S167>/OR1' incorporates:
     *  Logic: '<S167>/NOT'
     *  Logic: '<S167>/OR'
     *  UnitDelay: '<S167>/Unit Delay'
     */
    VeICSR_b_ItermRst_Parking_PostLatch = ((VeICSR_b_ItermRst_Parking_PreLatch) ||
        ((!rtb_AND_ar) && (ICSR_ac_DW.UnitDelay_DSTATE_cke)));

    /* Update for UnitDelay: '<S167>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_cke = VeICSR_b_ItermRst_Parking_PostLatch;
    if (VeICSR_b_ItermRst_Parking_PostLatch)
    {
        /* Switch: '<S151>/Switch' incorporates:
         *  Constant: '<S151>/Constant Value'
         */
        rtb_Gain = 0.0F;
    }
    else
    {
        /* Gain: '<S151>/Negation' incorporates:
         *  Constant: '<S147>/Calib'
         */
        rtb_Gain = -KeICSR_M_AngleCL_ITermLimit;

        /* Sum: '<S127>/Sum//Sub3' incorporates:
         *  Lookup_n-D: '<S149>/Vector'
         *  Lookup_n-D: '<S150>/Vector'
         *  Product: '<S127>/Multiplication1'
         *  Product: '<S127>/Multiplication12'
         *  SignalConversion generated from: '<S1>/VeENGR_T_EngCoolantTemp'
         *  SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp'
         *  Switch: '<S17>/Switch'
         *  Switch: '<S97>/Switch'
         */
        rtb_Sum3_iz = ((look2_iflf_binlcapw(rtb_TmpSignalConversionAtVeTFTR,
                         rtb_TmpSignalConversionAtVeEN_p, ((const float32 *)
                          &(KxICSR_k_IGnSclng_TempDep[0])), ((const float32 *)
                          &(KyICSR_k_IGnSclng_TempDep[0])), ((const float32 *)
                          &(KtICSR_k_IGnSclng_TempDep[0])),
                         ICSR_ac_ConstP.pooled13, 7U) * look2_iflf_binlcapw
                        (VeICSC_phi_ErrorAngle, VeICSI_n_NiActl, ((const float32
                           *)&(KxICSR_k_PstnCntrl_IGain[0])), ((const float32 *)
                          &(KyICSR_k_PstnCntrl_IGain[0])), ((const float32 *)
                          &(KtICSR_k_PstnCntrl_IGain[0])),
                         ICSR_ac_ConstP.pooled12, 14U)) * VeICSC_phi_ErrorAngle)
            + ICSR_ac_DW.UnitDelay1_DSTATE_k;

        /* Outputs for Atomic SubSystem: '<S151>/Limiter' */
        /* Switch: '<S153>/Switch1' incorporates:
         *  Constant: '<S147>/Calib'
         *  RelationalOperator: '<S153>/Relational Operator'
         */
        if (KeICSR_M_AngleCL_ITermLimit < rtb_Sum3_iz)
        {
            /* Switch: '<S153>/Switch1' */
            rtb_Sum3_iz = KeICSR_M_AngleCL_ITermLimit;
        }

        /* End of Switch: '<S153>/Switch1' */

        /* Switch: '<S153>/Switch' incorporates:
         *  Constant: '<S147>/Calib'
         *  Gain: '<S151>/Negation'
         *  RelationalOperator: '<S153>/Relational Operator1'
         */
        if (rtb_Sum3_iz > (-KeICSR_M_AngleCL_ITermLimit))
        {
            /* Switch: '<S151>/Switch' */
            rtb_Gain = rtb_Sum3_iz;
        }

        /* End of Switch: '<S153>/Switch' */
        /* End of Outputs for SubSystem: '<S151>/Limiter' */
    }

    /* Sum: '<S146>/Sum2' incorporates:
     *  UnitDelay: '<S146>/Unit Delay'
     */
    rtb_Sum3_iz = rtb_Gain - ICSR_ac_DW.UnitDelay_DSTATE_lu;

    /* Outputs for Atomic SubSystem: '<S146>/Limiter' */
    /* Switch: '<S152>/Switch1' incorporates:
     *  RelationalOperator: '<S152>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtVeENGR < rtb_Sum3_iz)
    {
        /* Switch: '<S144>/Switch1' */
        rtb_Switch2_gm = rtb_TmpSignalConversionAtVeENGR;
    }
    else
    {
        /* Switch: '<S144>/Switch1' */
        rtb_Switch2_gm = rtb_Sum3_iz;
    }

    /* End of Switch: '<S152>/Switch1' */

    /* Switch: '<S152>/Switch' incorporates:
     *  RelationalOperator: '<S152>/Relational Operator1'
     */
    if (rtb_Switch2_gm <= (-rtb_TmpSignalConversionAtVeENGR))
    {
        rtb_Switch2_gm = -rtb_TmpSignalConversionAtVeENGR;
    }

    /* End of Switch: '<S152>/Switch' */
    /* End of Outputs for SubSystem: '<S146>/Limiter' */

    /* Sum: '<S146>/Sum3' incorporates:
     *  UnitDelay: '<S146>/Unit Delay'
     */
    VeICSR_M_AngleCLITerm = rtb_Switch2_gm + ICSR_ac_DW.UnitDelay_DSTATE_lu;

    /* Update for UnitDelay: '<S146>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_lu = VeICSR_M_AngleCLITerm;

    /* Lookup_n-D: '<S138>/Vector' incorporates:
     *  Switch: '<S97>/Switch'
     */
    rtb_TmpSignalConversionAtVeENGR = look1_iflf_binlcapw(VeICSC_phi_ErrorAngle,
        ((const float32 *)&(KxICSR_dM_AngleCL_DTermRtLmt[0])), ((const float32 *)
        &(KtICSR_dM_AngleCL_DTermRtLmt[0])), 10U);

    /* UnitDelay: '<S133>/Unit Delay' incorporates:
     *  Constant: '<S132>/Constant Value1'
     *  Constant: '<S134>/Calib'
     */
    rtb_Switch2_gm = HeICSR_t_MedTEB_dT / 2.0F;

    /* Switch: '<S131>/Switch1' incorporates:
     *  Constant: '<S136>/Calib'
     *  Gain: '<S126>/Gain1'
     *  RelationalOperator: '<S131>/Greater  Than'
     *  RelationalOperator: '<S131>/Greater  Than1'
     *  Switch: '<S131>/Switch2'
     */
    if (VeICSC_phi_ErrorAngle >= KeICSR_n_DCtrlDeadBand_Parking)
    {
        /* Switch: '<S131>/Switch1' incorporates:
         *  Sum: '<S131>/Subtraction'
         */
        rtb_Sum3_iz = VeICSC_phi_ErrorAngle - KeICSR_n_DCtrlDeadBand_Parking;
    }
    else if (VeICSC_phi_ErrorAngle <= (-KeICSR_n_DCtrlDeadBand_Parking))
    {
        /* Switch: '<S131>/Switch2' incorporates:
         *  Gain: '<S126>/Gain1'
         *  Sum: '<S131>/Subtraction1'
         *  Switch: '<S131>/Switch1'
         */
        rtb_Sum3_iz = VeICSC_phi_ErrorAngle - (-KeICSR_n_DCtrlDeadBand_Parking);
    }
    else
    {
        /* Switch: '<S131>/Switch1' incorporates:
         *  Constant: '<S131>/Constant Value'
         *  Switch: '<S131>/Switch2'
         */
        rtb_Sum3_iz = 0.0F;
    }

    /* End of Switch: '<S131>/Switch1' */

    /* Product: '<S132>/Multiplication2' incorporates:
     *  Constant: '<S137>/Calib'
     */
    VeICSR_dphi_PIDTerm_Parking = ((rtb_Sum3_iz - ((rtb_Switch2_gm -
        KeICSR_t_DTermCutoffTime_Parking) * ICSR_ac_DW.UnitDelay1_DSTATE_j)) -
        ICSR_ac_DW.UnitDelay_DSTATE_my) / (rtb_Switch2_gm +
        KeICSR_t_DTermCutoffTime_Parking);
    if ((VeICSC_phi_ErrorAngle * VeICSR_dphi_PIDTerm_Parking) > 0.0F)
    {
        /* Switch: '<S130>/Switch' incorporates:
         *  Lookup_n-D: '<S142>/Vector'
         *  Product: '<S132>/Multiplication2'
         */
        VeICSR_K_DTermNonLinear_Parking = look1_iflf_binlcapw
            (VeICSR_dphi_PIDTerm_Parking, ((const float32 *)
              &(KxICSR_K_DTermCorrectDir_Parking[0])), ((const float32 *)
              &(KtICSR_K_DTermCorrectDir_Parking[0])), 10U);
    }
    else
    {
        /* Switch: '<S130>/Switch' incorporates:
         *  Lookup_n-D: '<S143>/Vector'
         *  Product: '<S132>/Multiplication2'
         */
        VeICSR_K_DTermNonLinear_Parking = look1_iflf_binlcapw
            (VeICSR_dphi_PIDTerm_Parking, ((const float32 *)
              &(KxICSR_K_DTermWrongDir_Parking[0])), ((const float32 *)
              &(KtICSR_K_DTermWrongDir_Parking[0])), 10U);
    }

    /* Product: '<S130>/Product1' incorporates:
     *  Constant: '<S130>/Constant Value'
     *  SignalConversion generated from: '<S1>/VeENGR_T_EngCoolantTemp'
     *  SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp'
     *  Switch: '<S17>/Switch'
     *  Switch: '<S97>/Switch'
     */
    rtb_TmpSignalConversionAtVeTFTR = ((look2_iflf_binlcapw
        (rtb_TmpSignalConversionAtVeTFTR, rtb_TmpSignalConversionAtVeEN_p, ((
        const float32 *)&(KxICSR_k_DGnSclng_TempDep[0])), ((const float32 *)
        &(KyICSR_k_DGnSclng_TempDep[0])), ((const float32 *)
        &(KtICSR_k_DGnSclng_TempDep[0])), ICSR_ac_ConstP.pooled13, 7U) *
        look2_iflf_binlcapw(VeICSC_phi_ErrorAngle, VeICSI_n_NiActl, ((const
        float32 *)&(KxICSR_k_PstnCntrl_DGain[0])), ((const float32 *)
        &(KyICSR_k_PstnCntrl_DGain[0])), ((const float32 *)
        &(KtICSR_k_PstnCntrl_DGain[0])), ICSR_ac_ConstP.pooled12, 14U)) *
        VeICSR_dphi_PIDTerm_Parking) * VeICSR_K_DTermNonLinear_Parking;

    /* Switch: '<S145>/Switch1' incorporates:
     *  Constant: '<S135>/Calib'
     *  RelationalOperator: '<S145>/Relational Operator'
     */
    if (KeICSR_M_AngleCL_DTermLimit < rtb_TmpSignalConversionAtVeTFTR)
    {
        /* UnitDelay: '<S133>/Unit Delay' */
        rtb_Switch2_gm = KeICSR_M_AngleCL_DTermLimit;
    }
    else
    {
        /* UnitDelay: '<S133>/Unit Delay' */
        rtb_Switch2_gm = rtb_TmpSignalConversionAtVeTFTR;
    }

    /* End of Switch: '<S145>/Switch1' */

    /* Switch: '<S145>/Switch' incorporates:
     *  Constant: '<S135>/Calib'
     *  RelationalOperator: '<S145>/Relational Operator1'
     */
    if (rtb_Switch2_gm <= (-KeICSR_M_AngleCL_DTermLimit))
    {
        rtb_Switch2_gm = -KeICSR_M_AngleCL_DTermLimit;
    }

    /* End of Switch: '<S145>/Switch' */

    /* Sum: '<S133>/Sum2' incorporates:
     *  UnitDelay: '<S133>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeTFTR = rtb_Switch2_gm -
        ICSR_ac_DW.UnitDelay_DSTATE_mw;

    /* Outputs for Atomic SubSystem: '<S133>/Limiter' */
    /* Switch: '<S144>/Switch1' incorporates:
     *  RelationalOperator: '<S144>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtVeENGR < rtb_TmpSignalConversionAtVeTFTR)
    {
        /* Switch: '<S144>/Switch1' */
        rtb_Switch2_gm = rtb_TmpSignalConversionAtVeENGR;
    }
    else
    {
        /* Switch: '<S144>/Switch1' */
        rtb_Switch2_gm = rtb_TmpSignalConversionAtVeTFTR;
    }

    /* End of Switch: '<S144>/Switch1' */

    /* Switch: '<S144>/Switch' incorporates:
     *  RelationalOperator: '<S144>/Relational Operator1'
     */
    if (rtb_Switch2_gm <= (-rtb_TmpSignalConversionAtVeENGR))
    {
        rtb_Switch2_gm = -rtb_TmpSignalConversionAtVeENGR;
    }

    /* End of Switch: '<S144>/Switch' */
    /* End of Outputs for SubSystem: '<S133>/Limiter' */

    /* Sum: '<S133>/Sum3' incorporates:
     *  UnitDelay: '<S133>/Unit Delay'
     */
    VeICSR_M_AngleCLDTerm = rtb_Switch2_gm + ICSR_ac_DW.UnitDelay_DSTATE_mw;

    /* Update for UnitDelay: '<S133>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_mw = VeICSR_M_AngleCLDTerm;

    /* Sum: '<S125>/Subtraction1' incorporates:
     *  Constant: '<S128>/Calib'
     */
    rtb_Abs = ((((VeICSR_M_AngleCLPTerm + VeICSR_M_AngleCLITerm) +
                 VeICSR_M_AngleCLDTerm) - ICSR_ac_DW.UnitDelay2_DSTATE_j) *
               KeICSR_K_AngleCL_FltCoeff) + ICSR_ac_DW.UnitDelay2_DSTATE_j;
    if (VeICSC_b_GlblDsblAnglCntrl)
    {
        /* VariantMerge generated from: '<S6>/Variant Source' incorporates:
         *  Constant: '<S94>/Constant Value4'
         */
        rtb_Vector_c = 0.0F;
    }
    else
    {
        /* VariantMerge generated from: '<S6>/Variant Source' */
        rtb_Vector_c = rtb_Abs;
    }

    /* End of Outputs for SubSystem: '<S129>/GradientLimiter2' */
    /* End of Outputs for SubSystem: '<S95>/Turn On Delay Time' */
    /* End of Outputs for SubSystem: '<S95>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S95>/LOWR' */
    /* End of Outputs for SubSystem: '<S127>/GradientLimiter3' */
    /* End of Outputs for SubSystem: '<S126>/DeadBand1' */
    /* End of Outputs for SubSystem: '<S141>/Limiter1' */
    /* End of Outputs for SubSystem: '<S126>/GradientLimiter4' */
#elif !Rte_SysCon_Variant_ICSR_1 && !Rte_SysCon_Variant_ICSR_2

    /* VariantMerge generated from: '<S6>/Variant Source' incorporates:
     *  Constant: '<S6>/Constant Value'
     *  SignalConversion generated from: '<S6>/Variant Source'
     */
    rtb_Vector_c = 0.0F;

#endif

    /* End of Abs: '<S98>/Abs' */
    /* End of Outputs for SubSystem: '<S98>/PD1' */
    /* End of Outputs for SubSystem: '<S98>/PD2' */
    /* End of Outputs for SubSystem: '<S98>/Protected Division' */
    /* End of Outputs for SubSystem: '<S100>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S100>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S100>/TRTE' */
    /* End of Outputs for SubSystem: '<S99>/LatchCrrntAngle' */
    /* End of Outputs for SubSystem: '<S100>/UnLatchCrrntAngle' */

    /* SignalConversion generated from: '<S6>/Variant Source' */
    VeICSR_M_AnglCntrlCLSumRaw = rtb_Vector_c;

    /* Update for UnitDelay: '<S50>/Unit Delay1' incorporates:
     *  UnitDelay: '<S21>/Unit Delay2'
     *  UnitDelay: '<S55>/Unit Delay'
     *  UnitDelay: '<S55>/Unit Delay1'
     */
#if Rte_SysCon_Variant_ICSR_1

    ICSR_ac_DW.UnitDelay1_DSTATE_d = rtb_LeICSC_phi_DiffTrgt_Crrnt;
    ICSR_ac_DW.UnitDelay1_DSTATE_c = VeICSR_dphi_PIDTerm_AbsParking;
    ICSR_ac_DW.UnitDelay_DSTATE_ma = rtb_Vector;
    ICSR_ac_DW.UnitDelay2_DSTATE_h = rtb_Negation1_eu;

#endif

    /* End of Update for UnitDelay: '<S50>/Unit Delay1' */

    /* Update for UnitDelay: '<S127>/Unit Delay1' incorporates:
     *  UnitDelay: '<S132>/Unit Delay'
     *  UnitDelay: '<S132>/Unit Delay1'
     *  UnitDelay: '<S94>/Unit Delay2'
     */
#if Rte_SysCon_Variant_ICSR_2

    ICSR_ac_DW.UnitDelay1_DSTATE_k = rtb_Gain;
    ICSR_ac_DW.UnitDelay1_DSTATE_j = VeICSR_dphi_PIDTerm_Parking;
    ICSR_ac_DW.UnitDelay_DSTATE_my = rtb_Sum3_iz;
    ICSR_ac_DW.UnitDelay2_DSTATE_j = rtb_Abs;

#endif

    /* End of Update for UnitDelay: '<S127>/Unit Delay1' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/NiNxCL_PwrLmtn'
     */
    /* Outputs for Atomic SubSystem: '<S951>/DLP_RE' */
    /* Switch: '<S957>/Switch1' incorporates:
     *  Constant: '<S958>/Calib'
     *  Product: '<S951>/Multiplication1'
     *  Product: '<S951>/Multiplication3'
     *  Product: '<S951>/Multiplication4'
     *  Product: '<S957>/Multiplication'
     *  Sum: '<S951>/Sum1'
     *  Sum: '<S957>/Subtraction'
     *  Sum: '<S957>/Summation'
     *  UnitDelay: '<S957>/Unit Delay'
     */
    VeICSR_n_FiltVirtualNx = (((((rtb_TmpSignalConversionAtVeMSPR *
        ICSR_ac_B.VariantMerge_For_Variant_Sour_k) +
        (ICSR_ac_B.VariantMerge_For_Variant_Sour_o *
         rtb_TmpSignalConversionAtVeMS_i)) + (rtb_TmpSignalConversionAtVeMS_p *
        ICSR_ac_B.VariantMerge_For_Variant_Source)) -
        ICSR_ac_DW.UnitDelay_DSTATE_c) * KeICSR_k_NxFltrCnst) +
        ICSR_ac_DW.UnitDelay_DSTATE_c;

    /* Update for UnitDelay: '<S957>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_c = VeICSR_n_FiltVirtualNx;

    /* End of Outputs for SubSystem: '<S951>/DLP_RE' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ICSC_NiCL_CalcErr'
     */
    /* Outputs for Atomic SubSystem: '<S11>/StateOfTheArt_AHSC' */
    /* Product: '<S954>/Multiplication1' incorporates:
     *  Constant: '<S983>/Calib'
     *  Gain: '<S852>/Gain'
     *  Lookup_n-D: '<S985>/Vector'
     *  Switch: '<S859>/Switch1'
     */
    VeICSR_K_NxCL_Factor_Max = KeICSR_k_NxCL_Fac4Max * look2_iflf_binlcapw
        (VeICSR_n_NiErrOut, VeICSR_n_NxErrFilt, ((const float32 *)
          &(KxICSR_r_NiCL_ErrorBasedFactor_Max[0])), ((const float32 *)
          &(KyICSR_r_NiCL_ErrorBasedFactor_Max[0])), ((const float32 *)
          &(KtICSR_r_NiCL_ErrorBasedFactor_Max[0])), ICSR_ac_ConstP.pooled14,
         10U);

    /* End of Outputs for SubSystem: '<S11>/StateOfTheArt_AHSC' */

    /* Outputs for Atomic SubSystem: '<S954>/Limiter' */
    /* Switch: '<S987>/Switch1' incorporates:
     *  Constant: '<S954>/Constant Value'
     *  RelationalOperator: '<S987>/Relational Operator'
     */
    if (1.0F < VeICSR_K_NxCL_Factor_Max)
    {
        /* Switch: '<S989>/Switch1' */
        rtb_TmpSignalConversionAtVeTFTR = 1.0F;
    }
    else
    {
        /* Switch: '<S989>/Switch1' */
        rtb_TmpSignalConversionAtVeTFTR = VeICSR_K_NxCL_Factor_Max;
    }

    /* End of Switch: '<S987>/Switch1' */

    /* Switch: '<S987>/Switch' incorporates:
     *  Constant: '<S954>/Constant Value1'
     *  RelationalOperator: '<S987>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeTFTR > 0.0F)
    {
        /* Switch: '<S987>/Switch' */
        rtb_TmpSignalConversionAtVeMS_i = rtb_TmpSignalConversionAtVeTFTR;
    }
    else
    {
        /* Switch: '<S987>/Switch' */
        rtb_TmpSignalConversionAtVeMS_i = 0.0F;
    }

    /* End of Switch: '<S987>/Switch' */
    /* End of Outputs for SubSystem: '<S954>/Limiter' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ICSC_NiCL_CalcErr'
     */
    /* Outputs for Atomic SubSystem: '<S11>/StateOfTheArt_AHSC' */
    /* Product: '<S954>/Multiplication2' incorporates:
     *  Constant: '<S984>/Calib'
     *  Gain: '<S852>/Gain'
     *  Lookup_n-D: '<S986>/Vector'
     *  Switch: '<S859>/Switch1'
     */
    VeICSR_K_NxCL_Factor_Min = look2_iflf_binlcapw(VeICSR_n_NiErrOut,
        VeICSR_n_NxErrFilt, ((const float32 *)
        &(KxICSR_r_NiCL_ErrorBasedFactor_Min[0])), ((const float32 *)
        &(KyICSR_r_NiCL_ErrorBasedFactor_Min[0])), ((const float32 *)
        &(KtICSR_r_NiCL_ErrorBasedFactor_Min[0])), ICSR_ac_ConstP.pooled14, 10U)
        * KeICSR_k_NxCL_Fac4Min;

    /* End of Outputs for SubSystem: '<S11>/StateOfTheArt_AHSC' */

    /* Outputs for Atomic SubSystem: '<S954>/Limiter1' */
    /* Switch: '<S988>/Switch1' incorporates:
     *  Constant: '<S954>/Constant Value2'
     *  RelationalOperator: '<S988>/Relational Operator'
     */
    if (1.0F < VeICSR_K_NxCL_Factor_Min)
    {
        /* Switch: '<S989>/Switch1' */
        rtb_TmpSignalConversionAtVeTFTR = 1.0F;
    }
    else
    {
        /* Switch: '<S989>/Switch1' */
        rtb_TmpSignalConversionAtVeTFTR = VeICSR_K_NxCL_Factor_Min;
    }

    /* End of Switch: '<S988>/Switch1' */
    /* End of Outputs for SubSystem: '<S954>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S16>/FreezeAtLimit' */
    /* Outputs for Atomic SubSystem: '<S959>/EdgeRising2' */
    /* Logic: '<S966>/AND' incorporates:
     *  Logic: '<S966>/OR1'
     *  UnitDelay: '<S966>/Unit Delay'
     */
    rtb_AND_ar = !ICSR_ac_DW.UnitDelay_DSTATE_f2;

    /* Update for UnitDelay: '<S966>/Unit Delay' incorporates:
     *  Constant: '<S959>/TRUE Constant'
     */
    ICSR_ac_DW.UnitDelay_DSTATE_f2 = true;

    /* End of Outputs for SubSystem: '<S959>/EdgeRising2' */

    /* Switch: '<S960>/Switch' incorporates:
     *  DataTypeConversion: '<S960>/Data Type Conversion'
     */
    rtb_Switch_dp = (sint8)rtb_TmpSignalConversionAtVeES_p;

    /* Switch: '<S960>/Switch' incorporates:
     *  Constant: '<S960>/Constant Value2'
     *  DataTypeConversion: '<S960>/Data Type Conversion'
     *  RelationalOperator: '<S960>/Comparison'
     */
    if (((sint8)rtb_TmpSignalConversionAtVeES_p) > 21)
    {
        /* Switch: '<S960>/Switch' incorporates:
         *  Constant: '<S960>/Constant Value'
         */
        rtb_Switch_dp = 0;
    }

    /* End of Switch: '<S960>/Switch' */

    /* Logic: '<S960>/Logical' incorporates:
     *  Constant: '<S975>/Calib'
     *  Constant: '<S976>/Calib'
     *  Constant: '<S977>/Calib'
     *  Logic: '<S960>/Logical2'
     *  Logic: '<S960>/Logical3'
     *  RelationalOperator: '<S960>/Comparison1'
     *  RelationalOperator: '<S960>/Comparison3'
     *  Selector: '<S960>/Selector'
     */
    VeICSR_b_PwrPrtAct = (((KaICSR_b_StartStopStEnblLP[(rtb_Switch_dp)]) &&
                           (!LeICSR_b_Disable_Ni_Global)) &&
                          ((rtb_TmpSignalConversionAtVeHTDR <= KeICSR_P_ThresMax)
                           || (rtb_TmpSignalConversionAtVeHT_j >=
                            KeICSR_P_ThresMin)));

    /* Outputs for Atomic SubSystem: '<S959>/EdgeBi' */
    /* RelationalOperator: '<S963>/Not Equal' incorporates:
     *  UnitDelay: '<S963>/Unit Delay'
     */
    rtb_UnitDelay_g2 = (VeICSR_b_PwrPrtAct != ICSR_ac_DW.UnitDelay_DSTATE_ew);

    /* Update for UnitDelay: '<S963>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_ew = VeICSR_b_PwrPrtAct;

    /* End of Outputs for SubSystem: '<S959>/EdgeBi' */

    /* Switch: '<S961>/Switch2' incorporates:
     *  Switch: '<S961>/Switch3'
     */
    if (rtb_UnitDelay_g2)
    {
        /* Switch: '<S961>/Switch2' incorporates:
         *  UnitDelay: '<S959>/Unit Delay3'
         */
        rtb_TmpSignalConversionAtVeMSPR = ICSR_ac_DW.UnitDelay3_DSTATE_e;

        /* Switch: '<S961>/Switch3' incorporates:
         *  Constant: '<S961>/Constant Value4'
         */
        rtb_TmpSignalConversionAtVeMS_p = 0.0F;
    }
    else
    {
        /* Switch: '<S961>/Switch2' incorporates:
         *  UnitDelay: '<S961>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeMSPR = ICSR_ac_DW.UnitDelay_DSTATE_n;

        /* MinMax: '<S961>/Maximum' incorporates:
         *  Constant: '<S967>/Calib'
         *  Constant: '<S972>/Calib'
         */
        rtb_TmpSignalConversionAtVeMS_p = fmaxf(HeICSR_t_MedTEB_dT,
            KeICSR_t_NxPwrLim_BlndInTm);

        /* Outputs for Atomic SubSystem: '<S961>/Protected Division1' */
        /* Switch: '<S973>/Switch1' incorporates:
         *  Constant: '<S967>/Calib'
         *  Constant: '<S973>/Constant Value'
         *  Constant: '<S973>/Constant Value1'
         *  Constant: '<S973>/Constant Value2'
         *  Constant: '<S973>/Constant Value3'
         *  Logic: '<S973>/AND'
         *  RelationalOperator: '<S973>/Greater Than or Equal '
         *  RelationalOperator: '<S973>/Greater Than or Equal 1'
         *  RelationalOperator: '<S973>/Not Equal'
         *  RelationalOperator: '<S973>/Not Equal1'
         *  Switch: '<S973>/Switch2'
         *  Switch: '<S973>/Switch3'
         */
        if ((HeICSR_t_MedTEB_dT != 0.0F) && (rtb_TmpSignalConversionAtVeMS_p !=
                0.0F))
        {
            /* Switch: '<S973>/Switch1' incorporates:
             *  Product: '<S973>/Division'
             */
            rtb_TmpSignalConversionAtVeMS_p = HeICSR_t_MedTEB_dT /
                rtb_TmpSignalConversionAtVeMS_p;
        }
        else if (HeICSR_t_MedTEB_dT > 0.0F)
        {
            /* Switch: '<S973>/Switch2' incorporates:
             *  Constant: '<S973>/MAXFLOAT'
             *  Switch: '<S973>/Switch1'
             */
            rtb_TmpSignalConversionAtVeMS_p = 3.402823466E+38F;
        }
        else if (HeICSR_t_MedTEB_dT < 0.0F)
        {
            /* Switch: '<S973>/Switch3' incorporates:
             *  Constant: '<S973>/MINFLOAT'
             *  Switch: '<S973>/Switch1'
             *  Switch: '<S973>/Switch2'
             */
            rtb_TmpSignalConversionAtVeMS_p = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S973>/Switch1' incorporates:
             *  Constant: '<S973>/Constant Value4'
             *  Switch: '<S973>/Switch2'
             *  Switch: '<S973>/Switch3'
             */
            rtb_TmpSignalConversionAtVeMS_p = 0.0F;
        }

        /* End of Switch: '<S973>/Switch1' */
        /* End of Outputs for SubSystem: '<S961>/Protected Division1' */

        /* Switch: '<S961>/Switch1' incorporates:
         *  Constant: '<S961>/Constant Value3'
         *  Logic: '<S961>/Logical'
         *  Logic: '<S961>/Logical2'
         *  UnitDelay: '<S961>/Unit Delay1'
         *  UnitDelay: '<S961>/Unit Delay3'
         */
        if ((ICSR_ac_DW.UnitDelay1_DSTATE_o) && (!rtb_AND_ar))
        {
            rtb_Subtraction1_b = ICSR_ac_DW.UnitDelay3_DSTATE_f;
        }
        else
        {
            rtb_Subtraction1_b = 1.0F;
        }

        /* End of Switch: '<S961>/Switch1' */

        /* Switch: '<S961>/Switch3' incorporates:
         *  Constant: '<S961>/Constant Value2'
         *  MinMax: '<S961>/MinMax'
         *  Sum: '<S961>/Summation1'
         */
        rtb_TmpSignalConversionAtVeMS_p = fminf(rtb_Subtraction1_b +
            rtb_TmpSignalConversionAtVeMS_p, 1.0F);
    }

    /* End of Switch: '<S961>/Switch2' */

    /* Switch: '<S959>/Switch2' incorporates:
     *  Constant: '<S954>/Constant Value3'
     *  RelationalOperator: '<S988>/Relational Operator1'
     *  Switch: '<S988>/Switch'
     */
    if (VeICSR_b_PwrPrtAct)
    {
        /* Outputs for Atomic SubSystem: '<S954>/Limiter1' */
        /* Switch: '<S988>/Switch' incorporates:
         *  Constant: '<S954>/Constant Value3'
         *  RelationalOperator: '<S988>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeTFTR <= 0.0F)
        {
            rtb_TmpSignalConversionAtVeTFTR = 0.0F;
        }

        /* End of Outputs for SubSystem: '<S954>/Limiter1' */

        /* Sum: '<S959>/Sum5' incorporates:
         *  Constant: '<S970>/Calib'
         *  MinMax: '<S959>/MinMax13'
         *  MinMax: '<S959>/MinMax8'
         *  MinMax: '<S959>/MinMax9'
         *  Product: '<S959>/Multiplication2'
         *  Sum: '<S959>/Sum2'
         *  Sum: '<S959>/Sum7'
         *  UnitDelay: '<S953>/Unit Delay1'
         *  UnitDelay: '<S955>/Unit Delay2'
         */
        rtb_Vector = fmaxf(rtb_TmpSignalConversionAtVeHT_j -
                           ICSR_ac_DW.UnitDelay1_DSTATE_b, fminf
                           (ICSR_ac_DW.UnitDelay2_DSTATE_c, fmaxf
                            (rtb_TmpSignalConversionAtVeTFTR *
                             rtb_TmpSignalConversionAtVeHT_j,
                             rtb_TmpSignalConversionAtVeHT_j - KeICSR_P_NiResNeg)));
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S954>/Limiter1' */
        if (rtb_TmpSignalConversionAtVeTFTR <= 0.0F)
        {
            /* Switch: '<S988>/Switch' incorporates:
             *  Constant: '<S954>/Constant Value3'
             */
            rtb_TmpSignalConversionAtVeTFTR = 0.0F;
        }

        /* End of Outputs for SubSystem: '<S954>/Limiter1' */

        /* Sum: '<S959>/Sum5' incorporates:
         *  MinMax: '<S959>/MinMax'
         *  MinMax: '<S959>/MinMax3'
         *  Product: '<S959>/Multiplication2'
         *  Sum: '<S959>/Sum4'
         *  UnitDelay: '<S953>/Unit Delay1'
         *  UnitDelay: '<S955>/Unit Delay2'
         */
        rtb_Vector = fmaxf(rtb_TmpSignalConversionAtVeHT_j -
                           ICSR_ac_DW.UnitDelay1_DSTATE_b, fminf
                           (ICSR_ac_DW.UnitDelay2_DSTATE_c,
                            rtb_TmpSignalConversionAtVeTFTR *
                            rtb_TmpSignalConversionAtVeHT_j));
    }

    /* End of Switch: '<S959>/Switch2' */

    /* Sum: '<S961>/Summation' incorporates:
     *  Constant: '<S961>/Constant Value'
     *  Product: '<S961>/Multiplication'
     *  Product: '<S961>/Multiplication3'
     *  Sum: '<S961>/Subtraction'
     */
    rtb_TmpSignalConversionAtVeTFTR = ((1.0F - rtb_TmpSignalConversionAtVeMS_p) *
        rtb_TmpSignalConversionAtVeMSPR) + (rtb_TmpSignalConversionAtVeMS_p *
        rtb_Vector);

    /* Outputs for Atomic SubSystem: '<S959>/EdgeRising' */
    /* Logic: '<S965>/AND' incorporates:
     *  Logic: '<S965>/OR1'
     *  UnitDelay: '<S965>/Unit Delay'
     */
    rtb_AND_ar = !ICSR_ac_DW.UnitDelay_DSTATE_jc;

    /* Update for UnitDelay: '<S965>/Unit Delay' incorporates:
     *  Constant: '<S959>/TRUE Constant2'
     */
    ICSR_ac_DW.UnitDelay_DSTATE_jc = true;

    /* End of Outputs for SubSystem: '<S959>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S959>/EdgeBi1' */
    /* RelationalOperator: '<S964>/Not Equal' incorporates:
     *  UnitDelay: '<S964>/Unit Delay'
     */
    rtb_UnitDelay_g2 = (VeICSR_b_PwrPrtAct != ICSR_ac_DW.UnitDelay_DSTATE_dp);

    /* Update for UnitDelay: '<S964>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_dp = VeICSR_b_PwrPrtAct;

    /* End of Outputs for SubSystem: '<S959>/EdgeBi1' */

    /* Switch: '<S962>/Switch2' incorporates:
     *  Switch: '<S962>/Switch3'
     */
    if (rtb_UnitDelay_g2)
    {
        /* Switch: '<S962>/Switch2' incorporates:
         *  UnitDelay: '<S959>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeEN_p = ICSR_ac_DW.UnitDelay_DSTATE_f;

        /* Switch: '<S962>/Switch3' incorporates:
         *  Constant: '<S962>/Constant Value4'
         */
        rtb_LeICSC_phi_DiffTrgt_Crrnt = 0.0F;
    }
    else
    {
        /* Switch: '<S962>/Switch2' incorporates:
         *  UnitDelay: '<S962>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeEN_p = ICSR_ac_DW.UnitDelay_DSTATE_h;

        /* MinMax: '<S962>/Maximum' incorporates:
         *  Constant: '<S967>/Calib'
         *  Constant: '<S972>/Calib'
         */
        rtb_LeICSC_phi_DiffTrgt_Crrnt = fmaxf(HeICSR_t_MedTEB_dT,
            KeICSR_t_NxPwrLim_BlndInTm);

        /* Outputs for Atomic SubSystem: '<S962>/Protected Division1' */
        /* Switch: '<S974>/Switch1' incorporates:
         *  Constant: '<S967>/Calib'
         *  Constant: '<S974>/Constant Value'
         *  Constant: '<S974>/Constant Value1'
         *  Constant: '<S974>/Constant Value2'
         *  Constant: '<S974>/Constant Value3'
         *  Logic: '<S974>/AND'
         *  RelationalOperator: '<S974>/Greater Than or Equal '
         *  RelationalOperator: '<S974>/Greater Than or Equal 1'
         *  RelationalOperator: '<S974>/Not Equal'
         *  RelationalOperator: '<S974>/Not Equal1'
         *  Switch: '<S974>/Switch2'
         *  Switch: '<S974>/Switch3'
         */
        if ((HeICSR_t_MedTEB_dT != 0.0F) && (rtb_LeICSC_phi_DiffTrgt_Crrnt !=
                0.0F))
        {
            /* Switch: '<S974>/Switch1' incorporates:
             *  Product: '<S974>/Division'
             */
            rtb_LeICSC_phi_DiffTrgt_Crrnt = HeICSR_t_MedTEB_dT /
                rtb_LeICSC_phi_DiffTrgt_Crrnt;
        }
        else if (HeICSR_t_MedTEB_dT > 0.0F)
        {
            /* Switch: '<S974>/Switch2' incorporates:
             *  Constant: '<S974>/MAXFLOAT'
             *  Switch: '<S974>/Switch1'
             */
            rtb_LeICSC_phi_DiffTrgt_Crrnt = 3.402823466E+38F;
        }
        else if (HeICSR_t_MedTEB_dT < 0.0F)
        {
            /* Switch: '<S974>/Switch3' incorporates:
             *  Constant: '<S974>/MINFLOAT'
             *  Switch: '<S974>/Switch1'
             *  Switch: '<S974>/Switch2'
             */
            rtb_LeICSC_phi_DiffTrgt_Crrnt = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S974>/Switch1' incorporates:
             *  Constant: '<S974>/Constant Value4'
             *  Switch: '<S974>/Switch2'
             *  Switch: '<S974>/Switch3'
             */
            rtb_LeICSC_phi_DiffTrgt_Crrnt = 0.0F;
        }

        /* End of Switch: '<S974>/Switch1' */
        /* End of Outputs for SubSystem: '<S962>/Protected Division1' */

        /* Switch: '<S962>/Switch1' incorporates:
         *  Constant: '<S962>/Constant Value3'
         *  Logic: '<S962>/Logical'
         *  Logic: '<S962>/Logical2'
         *  UnitDelay: '<S962>/Unit Delay1'
         *  UnitDelay: '<S962>/Unit Delay3'
         */
        if ((ICSR_ac_DW.UnitDelay1_DSTATE_iw) && (!rtb_AND_ar))
        {
            rtb_Subtraction1_b = ICSR_ac_DW.UnitDelay3_DSTATE_fh;
        }
        else
        {
            rtb_Subtraction1_b = 1.0F;
        }

        /* End of Switch: '<S962>/Switch1' */

        /* Switch: '<S962>/Switch3' incorporates:
         *  Constant: '<S962>/Constant Value2'
         *  MinMax: '<S962>/MinMax'
         *  Sum: '<S962>/Summation1'
         */
        rtb_LeICSC_phi_DiffTrgt_Crrnt = fminf(rtb_Subtraction1_b +
            rtb_LeICSC_phi_DiffTrgt_Crrnt, 1.0F);
    }

    /* End of Switch: '<S962>/Switch2' */

    /* Switch: '<S959>/Switch' incorporates:
     *  Constant: '<S971>/Calib'
     *  MinMax: '<S959>/MinMax1'
     *  MinMax: '<S959>/MinMax10'
     *  MinMax: '<S959>/MinMax11'
     *  MinMax: '<S959>/MinMax12'
     *  MinMax: '<S959>/MinMax2'
     *  Product: '<S959>/Multiplication1'
     *  Sum: '<S959>/Sum1'
     *  Sum: '<S959>/Sum3'
     *  Sum: '<S959>/Sum8'
     *  UnitDelay: '<S953>/Unit Delay1'
     *  UnitDelay: '<S955>/Unit Delay2'
     */
    if (VeICSR_b_PwrPrtAct)
    {
        rtb_Subtraction1_b = fminf(rtb_TmpSignalConversionAtVeHTDR -
            ICSR_ac_DW.UnitDelay1_DSTATE_b, fmaxf(ICSR_ac_DW.UnitDelay2_DSTATE_c,
            fminf(rtb_TmpSignalConversionAtVeMS_i *
                  rtb_TmpSignalConversionAtVeHTDR,
                  rtb_TmpSignalConversionAtVeHTDR - KeICSR_P_NiResPos)));
    }
    else
    {
        rtb_Subtraction1_b = fminf(rtb_TmpSignalConversionAtVeHTDR -
            ICSR_ac_DW.UnitDelay1_DSTATE_b, fmaxf(ICSR_ac_DW.UnitDelay2_DSTATE_c,
            rtb_TmpSignalConversionAtVeMS_i * rtb_TmpSignalConversionAtVeHTDR));
    }

    /* End of Switch: '<S959>/Switch' */

    /* Sum: '<S962>/Summation' incorporates:
     *  Constant: '<S962>/Constant Value'
     *  Product: '<S962>/Multiplication'
     *  Product: '<S962>/Multiplication3'
     *  Sum: '<S962>/Subtraction'
     */
    rtb_TmpSignalConversionAtVeMS_i = ((1.0F - rtb_LeICSC_phi_DiffTrgt_Crrnt) *
        rtb_TmpSignalConversionAtVeEN_p) + (rtb_LeICSC_phi_DiffTrgt_Crrnt *
        rtb_Subtraction1_b);

    /* MinMax: '<S959>/MinMax4' incorporates:
     *  Constant: '<S968>/Calib'
     */
    VeICSR_P_NxCL_PowerLimitMin = fminf(rtb_TmpSignalConversionAtVeTFTR,
        KeICSR_P_MinNegPwrCL);

    /* MinMax: '<S959>/MinMax5' incorporates:
     *  Constant: '<S969>/Calib'
     */
    VeICSR_P_NxCL_PowerLimitMax = fmaxf(rtb_TmpSignalConversionAtVeMS_i,
        KeICSR_P_MinPosPwrCL);

    /* MinMax: '<S959>/MinMax6' incorporates:
     *  Constant: '<S968>/Calib'
     *  Sum: '<S959>/Sum6'
     */
    VeICSR_P_NiCL_PowerLimitMin = fminf(KeICSR_P_MinNegPwrCL,
        rtb_TmpSignalConversionAtVeHT_j - VeICSR_P_NxCL_PowerLimitMin);

    /* MinMax: '<S959>/MinMax7' incorporates:
     *  Constant: '<S969>/Calib'
     *  Sum: '<S959>/Sum5'
     */
    VeICSR_P_NiCL_PowerLimitMax = fmaxf(KeICSR_P_MinPosPwrCL,
        rtb_TmpSignalConversionAtVeHTDR - VeICSR_P_NxCL_PowerLimitMax);

    /* Update for UnitDelay: '<S961>/Unit Delay1' incorporates:
     *  Constant: '<S961>/Constant Value5'
     */
    ICSR_ac_DW.UnitDelay1_DSTATE_o = true;

    /* Update for UnitDelay: '<S961>/Unit Delay3' */
    ICSR_ac_DW.UnitDelay3_DSTATE_f = rtb_TmpSignalConversionAtVeMS_p;

    /* Update for UnitDelay: '<S959>/Unit Delay3' */
    ICSR_ac_DW.UnitDelay3_DSTATE_e = rtb_TmpSignalConversionAtVeTFTR;

    /* Update for UnitDelay: '<S961>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_n = rtb_TmpSignalConversionAtVeMSPR;

    /* Update for UnitDelay: '<S962>/Unit Delay1' incorporates:
     *  Constant: '<S962>/Constant Value5'
     */
    ICSR_ac_DW.UnitDelay1_DSTATE_iw = true;

    /* Update for UnitDelay: '<S962>/Unit Delay3' */
    ICSR_ac_DW.UnitDelay3_DSTATE_fh = rtb_LeICSC_phi_DiffTrgt_Crrnt;

    /* Update for UnitDelay: '<S959>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_f = rtb_TmpSignalConversionAtVeMS_i;

    /* Update for UnitDelay: '<S962>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_h = rtb_TmpSignalConversionAtVeEN_p;

    /* End of Outputs for SubSystem: '<S16>/FreezeAtLimit' */

    /* Sum: '<S953>/Sum' */
    rtb_TmpSignalConversionAtVeHT_j = VeICSR_M_EngClSumRaw +
        VeICSR_M_AnglCntrlCLSumRaw;

    /* Product: '<S953>/Product' incorporates:
     *  Constant: '<S953>/Constant Value1'
     */
    rtb_TmpSignalConversionAtVeHTDR = VeICSR_P_NiCL_PowerLimitMax * 9549.3F;

    /* Outputs for Atomic SubSystem: '<S953>/DLP_RE1' */
    /* Switch: '<S978>/Switch1' incorporates:
     *  Constant: '<S979>/Calib'
     *  Product: '<S978>/Multiplication'
     *  Sum: '<S978>/Subtraction'
     *  Sum: '<S978>/Summation'
     *  UnitDelay: '<S978>/Unit Delay'
     */
    VeICSR_n_FilteredNi = ((VeICSI_n_NiActl - ICSR_ac_DW.UnitDelay_DSTATE_ls) *
                           KeICSR_k_NiFltrCnst) + ICSR_ac_DW.UnitDelay_DSTATE_ls;

    /* Update for UnitDelay: '<S978>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_ls = VeICSR_n_FilteredNi;

    /* End of Outputs for SubSystem: '<S953>/DLP_RE1' */

    /* Outputs for Atomic SubSystem: '<S953>/PD2' */
    /* Switch: '<S981>/Switch1' incorporates:
     *  Constant: '<S981>/Constant Value'
     *  Constant: '<S981>/Constant Value1'
     *  Constant: '<S981>/Constant Value2'
     *  Constant: '<S981>/Constant Value3'
     *  Logic: '<S981>/AND'
     *  RelationalOperator: '<S981>/Greater Than or Equal '
     *  RelationalOperator: '<S981>/Greater Than or Equal 1'
     *  RelationalOperator: '<S981>/Not Equal'
     *  RelationalOperator: '<S981>/Not Equal1'
     *  Switch: '<S981>/Switch2'
     *  Switch: '<S981>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeHTDR != 0.0F) && (VeICSR_n_FilteredNi !=
            0.0F))
    {
        /* Switch: '<S981>/Switch1' incorporates:
         *  Product: '<S981>/Division'
         */
        rtb_TmpSignalConversionAtVeHTDR /= VeICSR_n_FilteredNi;
    }
    else if (rtb_TmpSignalConversionAtVeHTDR > 0.0F)
    {
        /* Switch: '<S981>/Switch2' incorporates:
         *  Constant: '<S981>/MAXFLOAT'
         *  Switch: '<S981>/Switch1'
         */
        rtb_TmpSignalConversionAtVeHTDR = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeHTDR < 0.0F)
    {
        /* Switch: '<S981>/Switch3' incorporates:
         *  Constant: '<S981>/MINFLOAT'
         *  Switch: '<S981>/Switch1'
         *  Switch: '<S981>/Switch2'
         */
        rtb_TmpSignalConversionAtVeHTDR = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S981>/Switch1' incorporates:
         *  Constant: '<S981>/Constant Value4'
         *  Switch: '<S981>/Switch2'
         *  Switch: '<S981>/Switch3'
         */
        rtb_TmpSignalConversionAtVeHTDR = 0.0F;
    }

    /* End of Switch: '<S981>/Switch1' */
    /* End of Outputs for SubSystem: '<S953>/PD2' */

    /* Product: '<S953>/Product1' incorporates:
     *  Constant: '<S953>/Constant Value2'
     */
    rtb_TmpSignalConversionAtVeMSPR = VeICSR_P_NiCL_PowerLimitMin * 9549.3F;

    /* Outputs for Atomic SubSystem: '<S953>/PD3' */
    /* Switch: '<S982>/Switch1' incorporates:
     *  Constant: '<S982>/Constant Value'
     *  Constant: '<S982>/Constant Value1'
     *  Constant: '<S982>/Constant Value2'
     *  Constant: '<S982>/Constant Value3'
     *  Logic: '<S982>/AND'
     *  RelationalOperator: '<S982>/Greater Than or Equal '
     *  RelationalOperator: '<S982>/Greater Than or Equal 1'
     *  RelationalOperator: '<S982>/Not Equal'
     *  RelationalOperator: '<S982>/Not Equal1'
     *  Switch: '<S982>/Switch2'
     *  Switch: '<S982>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeMSPR != 0.0F) && (VeICSR_n_FilteredNi !=
            0.0F))
    {
        /* Switch: '<S982>/Switch1' incorporates:
         *  Product: '<S982>/Division'
         */
        rtb_TmpSignalConversionAtVeMS_i = rtb_TmpSignalConversionAtVeMSPR /
            VeICSR_n_FilteredNi;
    }
    else if (rtb_TmpSignalConversionAtVeMSPR > 0.0F)
    {
        /* Switch: '<S982>/Switch2' incorporates:
         *  Constant: '<S982>/MAXFLOAT'
         *  Switch: '<S982>/Switch1'
         */
        rtb_TmpSignalConversionAtVeMS_i = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeMSPR < 0.0F)
    {
        /* Switch: '<S982>/Switch3' incorporates:
         *  Constant: '<S982>/MINFLOAT'
         *  Switch: '<S982>/Switch1'
         *  Switch: '<S982>/Switch2'
         */
        rtb_TmpSignalConversionAtVeMS_i = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S982>/Switch1' incorporates:
         *  Constant: '<S982>/Constant Value4'
         *  Switch: '<S982>/Switch2'
         *  Switch: '<S982>/Switch3'
         */
        rtb_TmpSignalConversionAtVeMS_i = 0.0F;
    }

    /* End of Switch: '<S982>/Switch1' */
    /* End of Outputs for SubSystem: '<S953>/PD3' */

    /* MinMax: '<S953>/MinMax3' */
    rtb_TmpSignalConversionAtVeMSPR = fmaxf(rtb_TmpSignalConversionAtVeHTDR,
        rtb_TmpSignalConversionAtVeMS_i);

    /* MinMax: '<S953>/MinMax4' */
    rtb_TmpSignalConversionAtVeHTDR = fminf(rtb_TmpSignalConversionAtVeHTDR,
        rtb_TmpSignalConversionAtVeMS_i);

    /* Outputs for Atomic SubSystem: '<S953>/Limiter3' */
    /* Switch: '<S980>/Switch1' incorporates:
     *  RelationalOperator: '<S980>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtVeMSPR < rtb_TmpSignalConversionAtVeHT_j)
    {
        /* Switch: '<S989>/Switch1' */
        rtb_TmpSignalConversionAtVeTFTR = rtb_TmpSignalConversionAtVeMSPR;
    }
    else
    {
        /* Switch: '<S989>/Switch1' */
        rtb_TmpSignalConversionAtVeTFTR = rtb_TmpSignalConversionAtVeHT_j;
    }

    /* End of Switch: '<S980>/Switch1' */

    /* Switch: '<S980>/Switch' incorporates:
     *  RelationalOperator: '<S980>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeTFTR > rtb_TmpSignalConversionAtVeHTDR)
    {
        /* Switch: '<S980>/Switch' */
        rtb_TmpSignalConversionAtVeHTDR = rtb_TmpSignalConversionAtVeTFTR;
    }

    /* End of Switch: '<S980>/Switch' */
    /* End of Outputs for SubSystem: '<S953>/Limiter3' */

    /* RelationalOperator: '<S953>/Comparison2' */
    VeICSC_b_FreezeNiCL_ITerm = (rtb_TmpSignalConversionAtVeHT_j !=
        rtb_TmpSignalConversionAtVeHTDR);

    /* Product: '<S955>/Product1' incorporates:
     *  Constant: '<S955>/Constant Value2'
     */
    rtb_TmpSignalConversionAtVeMSPR = VeICSR_P_NxCL_PowerLimitMax * 9549.3F;

    /* Outputs for Atomic SubSystem: '<S955>/PD' */
    /* Switch: '<S990>/Switch1' incorporates:
     *  Constant: '<S990>/Constant Value'
     *  Constant: '<S990>/Constant Value1'
     *  Constant: '<S990>/Constant Value2'
     *  Constant: '<S990>/Constant Value3'
     *  Logic: '<S990>/AND'
     *  RelationalOperator: '<S990>/Greater Than or Equal '
     *  RelationalOperator: '<S990>/Greater Than or Equal 1'
     *  RelationalOperator: '<S990>/Not Equal'
     *  RelationalOperator: '<S990>/Not Equal1'
     *  Switch: '<S990>/Switch2'
     *  Switch: '<S990>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeMSPR != 0.0F) && (VeICSR_n_FiltVirtualNx !=
            0.0F))
    {
        /* Switch: '<S990>/Switch1' incorporates:
         *  Product: '<S990>/Division'
         */
        rtb_TmpSignalConversionAtVeMSPR /= VeICSR_n_FiltVirtualNx;
    }
    else if (rtb_TmpSignalConversionAtVeMSPR > 0.0F)
    {
        /* Switch: '<S990>/Switch2' incorporates:
         *  Constant: '<S990>/MAXFLOAT'
         *  Switch: '<S990>/Switch1'
         */
        rtb_TmpSignalConversionAtVeMSPR = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeMSPR < 0.0F)
    {
        /* Switch: '<S990>/Switch3' incorporates:
         *  Constant: '<S990>/MINFLOAT'
         *  Switch: '<S990>/Switch1'
         *  Switch: '<S990>/Switch2'
         */
        rtb_TmpSignalConversionAtVeMSPR = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S990>/Switch1' incorporates:
         *  Constant: '<S990>/Constant Value4'
         *  Switch: '<S990>/Switch2'
         *  Switch: '<S990>/Switch3'
         */
        rtb_TmpSignalConversionAtVeMSPR = 0.0F;
    }

    /* End of Switch: '<S990>/Switch1' */
    /* End of Outputs for SubSystem: '<S955>/PD' */

    /* Product: '<S955>/Product' incorporates:
     *  Constant: '<S955>/Constant Value1'
     */
    rtb_TmpSignalConversionAtVeMS_i = VeICSR_P_NxCL_PowerLimitMin * 9549.3F;

    /* Outputs for Atomic SubSystem: '<S955>/PD1' */
    /* Switch: '<S991>/Switch1' incorporates:
     *  Constant: '<S991>/Constant Value'
     *  Constant: '<S991>/Constant Value1'
     *  Constant: '<S991>/Constant Value2'
     *  Constant: '<S991>/Constant Value3'
     *  Logic: '<S991>/AND'
     *  RelationalOperator: '<S991>/Greater Than or Equal '
     *  RelationalOperator: '<S991>/Greater Than or Equal 1'
     *  RelationalOperator: '<S991>/Not Equal'
     *  RelationalOperator: '<S991>/Not Equal1'
     *  Switch: '<S991>/Switch2'
     *  Switch: '<S991>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeMS_i != 0.0F) && (VeICSR_n_FiltVirtualNx !=
            0.0F))
    {
        /* Switch: '<S991>/Switch1' incorporates:
         *  Product: '<S991>/Division'
         */
        rtb_TmpSignalConversionAtVeMS_p = rtb_TmpSignalConversionAtVeMS_i /
            VeICSR_n_FiltVirtualNx;
    }
    else if (rtb_TmpSignalConversionAtVeMS_i > 0.0F)
    {
        /* Switch: '<S991>/Switch2' incorporates:
         *  Constant: '<S991>/MAXFLOAT'
         *  Switch: '<S991>/Switch1'
         */
        rtb_TmpSignalConversionAtVeMS_p = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeMS_i < 0.0F)
    {
        /* Switch: '<S991>/Switch3' incorporates:
         *  Constant: '<S991>/MINFLOAT'
         *  Switch: '<S991>/Switch1'
         *  Switch: '<S991>/Switch2'
         */
        rtb_TmpSignalConversionAtVeMS_p = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S991>/Switch1' incorporates:
         *  Constant: '<S991>/Constant Value4'
         *  Switch: '<S991>/Switch2'
         *  Switch: '<S991>/Switch3'
         */
        rtb_TmpSignalConversionAtVeMS_p = 0.0F;
    }

    /* End of Switch: '<S991>/Switch1' */
    /* End of Outputs for SubSystem: '<S955>/PD1' */

    /* MinMax: '<S955>/MinMax1' */
    rtb_TmpSignalConversionAtVeMS_i = fmaxf(rtb_TmpSignalConversionAtVeMSPR,
        rtb_TmpSignalConversionAtVeMS_p);

    /* MinMax: '<S955>/MinMax2' */
    rtb_TmpSignalConversionAtVeMSPR = fminf(rtb_TmpSignalConversionAtVeMSPR,
        rtb_TmpSignalConversionAtVeMS_p);

    /* Outputs for Atomic SubSystem: '<S955>/Limiter2' */
    /* Switch: '<S989>/Switch1' incorporates:
     *  Inport: '<S16>/NxCL_Sum'
     *  RelationalOperator: '<S989>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtVeMS_i < VeICSC_M_NxCLCmd)
    {
        /* Switch: '<S989>/Switch1' */
        rtb_TmpSignalConversionAtVeTFTR = rtb_TmpSignalConversionAtVeMS_i;
    }
    else
    {
        /* Switch: '<S989>/Switch1' */
        rtb_TmpSignalConversionAtVeTFTR = VeICSC_M_NxCLCmd;
    }

    /* End of Switch: '<S989>/Switch1' */

    /* Switch: '<S989>/Switch' incorporates:
     *  RelationalOperator: '<S989>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeTFTR > rtb_TmpSignalConversionAtVeMSPR)
    {
        /* Switch: '<S989>/Switch' */
        VeICSR_M_NxCL_PwrValue = rtb_TmpSignalConversionAtVeTFTR;
    }
    else
    {
        /* Switch: '<S989>/Switch' */
        VeICSR_M_NxCL_PwrValue = rtb_TmpSignalConversionAtVeMSPR;
    }

    /* End of Switch: '<S989>/Switch' */
    /* End of Outputs for SubSystem: '<S955>/Limiter2' */

    /* RelationalOperator: '<S955>/Comparison1' incorporates:
     *  Inport: '<S16>/NxCL_Sum'
     */
    VeICSC_b_FreezeNxCL_ITerm = (VeICSC_M_NxCLCmd != VeICSR_M_NxCL_PwrValue);

    /* Update for UnitDelay: '<S955>/Unit Delay2' incorporates:
     *  Constant: '<S955>/Constant Value3'
     *  Product: '<S955>/Divide'
     *  Product: '<S955>/Multiplication5'
     */
    ICSR_ac_DW.UnitDelay2_DSTATE_c = (VeICSR_n_FiltVirtualNx *
        VeICSR_M_NxCL_PwrValue) / 9549.3F;

    /* Update for UnitDelay: '<S953>/Unit Delay1' incorporates:
     *  Constant: '<S953>/Constant Value3'
     *  Product: '<S953>/Divide'
     *  Product: '<S953>/Multiplication6'
     */
    ICSR_ac_DW.UnitDelay1_DSTATE_b = (VeICSR_n_FilteredNi *
        rtb_TmpSignalConversionAtVeHTDR) / 9549.3F;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/NiCL_ApplyVector'
     */
    /* Outputs for Atomic SubSystem: '<S15>/GradientLimiter' */
    /* Sum: '<S947>/Sum2' incorporates:
     *  UnitDelay: '<S947>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeMSPR = rtb_TmpSignalConversionAtVeHTDR -
        ICSR_ac_DW.UnitDelay_DSTATE_m;

    /* Outputs for Atomic SubSystem: '<S947>/Limiter' */
    /* Switch: '<S950>/Switch1' incorporates:
     *  Constant: '<S949>/Calib'
     *  RelationalOperator: '<S950>/Relational Operator'
     */
    if (KeICSR_M_EngCLRamp_LU < rtb_TmpSignalConversionAtVeMSPR)
    {
        /* Switch: '<S950>/Switch1' */
        rtb_TmpSignalConversionAtVeMSPR = KeICSR_M_EngCLRamp_LU;
    }

    /* End of Switch: '<S950>/Switch1' */

    /* Switch: '<S950>/Switch' incorporates:
     *  Constant: '<S948>/Calib'
     *  RelationalOperator: '<S950>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeMSPR <= KeICSR_M_EngCLRamp_LD)
    {
        rtb_TmpSignalConversionAtVeMSPR = KeICSR_M_EngCLRamp_LD;
    }

    /* End of Switch: '<S950>/Switch' */
    /* End of Outputs for SubSystem: '<S947>/Limiter' */

    /* Sum: '<S947>/Sum3' incorporates:
     *  UnitDelay: '<S947>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeMSPR += ICSR_ac_DW.UnitDelay_DSTATE_m;

    /* Update for UnitDelay: '<S947>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_m = rtb_TmpSignalConversionAtVeMSPR;

    /* End of Outputs for SubSystem: '<S15>/GradientLimiter' */

    /* Product: '<S15>/Multiplication1' */
    VeICSR_M_Ta_NiCLUnclipped = ICSR_ac_B.VariantMerge_For_Variant_Sour_g *
        rtb_TmpSignalConversionAtVeHT_j;

    /* Product: '<S15>/Multiplication2' */
    VeICSR_M_Tb_NiCLUnclipped = rtb_TmpSignalConversionAtVeHT_j *
        ICSR_ac_B.VariantMerge_For_Variant_Sour_d;

    /* Product: '<S15>/Multiplication3' */
    VeICSR_M_Tb_NiCLPID = rtb_TmpSignalConversionAtVeMSPR *
        ICSR_ac_B.VariantMerge_For_Variant_Sour_d;

    /* Product: '<S15>/Multiplication6' */
    VeICSR_M_Ta_NiCLPID = ICSR_ac_B.VariantMerge_For_Variant_Sour_g *
        rtb_TmpSignalConversionAtVeMSPR;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ICSC_ApplyVector'
     */
    /* Product: '<S7>/Multiplication' */
    VeICSR_M_Ta_NxCL = ICSR_ac_B.VariantMerge_For_Variant_Sour_k *
        VeICSR_M_NxCL_PwrValue;

    /* Product: '<S7>/Multiplication1' */
    VeICSR_M_Tb_NxCL = VeICSR_M_NxCL_PwrValue *
        ICSR_ac_B.VariantMerge_For_Variant_Sour_o;

    /* Product: '<S7>/Multiplication4' */
    VeICSR_M_Tc_NxCL = VeICSR_M_NxCL_PwrValue *
        ICSR_ac_B.VariantMerge_For_Variant_Source;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ICSC_SumAndRamp'
     */
    /* Outputs for Atomic SubSystem: '<S892>/GradientLimiter1' */
    /* If: '<S893>/CalChange' incorporates:
     *  Constant: '<S893>/Constant Value'
     *  Constant: '<S910>/Calib'
     *  DataStoreRead: '<S893>/Dsr_CalSwitchTrig'
     *  DataStoreRead: '<S893>/Dsr_RampVal'
     *  DataStoreWrite: '<S893>/Dsw_NiTaOld'
     *  DataStoreWrite: '<S893>/Dsw_NiTbOld'
     *  DataStoreWrite: '<S893>/Dsw_NiTbOld1'
     *  DataStoreWrite: '<S893>/Dsw_NiTbOld2'
     *  DataStoreWrite: '<S893>/Dsw_NiTbOld3'
     *  DataTypeConversion: '<S892>/Data Type Conversion'
     *  Product: '<S893>/Multiplication1'
     *  Product: '<S893>/Multiplication2'
     *  Product: '<S893>/Multiplication3'
     *  Product: '<S893>/Multiplication5'
     *  Product: '<S893>/Multiplication6'
     *  RelationalOperator: '<S893>/Comparison4'
     *  Selector: '<S892>/Selector2'
     *  Switch: '<S892>/Switch2'
     */
#if Rte_SysCon_Variant_ICSR_5

    if (rtb_TmpSignalConversionAtVeI_lx)
    {
        /* Outputs for IfAction SubSystem: '<S893>/ICSC_NiDisableAll' incorporates:
         *  ActionPort: '<S915>/Action Port'
         */
        /* DataStoreWrite: '<S915>/Dsw_TaLatch' incorporates:
         *  DataStoreRead: '<S915>/Dsr_NiTaOld'
         */
        ICSR_ac_DW.VeICSR_M_NiCL_TaLatch = ICSR_ac_DW.VeICSR_M_NiCL_TaOld;

        /* DataStoreWrite: '<S915>/Dsw_TaLatch1' incorporates:
         *  DataStoreRead: '<S915>/Data Store Read2'
         */
        ICSR_ac_DW.VeICSR_M_NiCL_TaUnclippedLatch =
            ICSR_ac_DW.VeICSR_M_NiCL_TaUnclipped_Old;

        /* DataStoreWrite: '<S915>/Dsw_TaLatch2' incorporates:
         *  DataStoreRead: '<S915>/Data Store Read1'
         */
        ICSR_ac_DW.VeICSR_M_NiCL_TbUnclippedLatch =
            ICSR_ac_DW.VeICSR_M_NiCL_TbUnclipped_Old;

        /* DataStoreWrite: '<S915>/Dsw_TbLatch' incorporates:
         *  DataStoreRead: '<S915>/Dsr_NiTbOld'
         */
        ICSR_ac_DW.VeICSR_M_NiCL_TbLatch = ICSR_ac_DW.VeICSR_M_NiCL_TbOld;

        /* DataStoreWrite: '<S915>/Dsw_TbLatch1' incorporates:
         *  DataStoreRead: '<S915>/Dsr_NiTbOld1'
         */
        ICSR_ac_DW.VeICSR_M_NiCL_ItermLatch = ICSR_ac_DW.VeICSR_M_NiCL_ItermOld;

        /* DataStoreWrite: '<S915>/Dsw_RampVal' incorporates:
         *  Constant: '<S915>/Constant Value'
         */
        ICSR_ac_DW.VeICSR_scl_NiCtlRampVal = 0.0F;

        /* DataStoreWrite: '<S915>/Dsw_CalSwitchTrigg' incorporates:
         *  Constant: '<S915>/TRUE Constant'
         */
        ICSR_ac_DW.VeICSR_b_Ni_CalSwitchTrigger = true;

        /* Merge: '<S895>/Merge1' incorporates:
         *  Constant: '<S915>/Constant Value1'
         *  Constant: '<S924>/Calib'
         *  DataStoreRead: '<S915>/Dsr_NiTaOld'
         *  Product: '<S919>/Multiplication'
         *  Sum: '<S919>/Subtraction'
         *  Sum: '<S919>/Subtraction1'
         */
        rtb_TmpSignalConversionAtVeHT_j = ((0.0F -
            ICSR_ac_DW.VeICSR_M_NiCL_TaOld) * KeICSR_k_DisableAllFilt) +
            ICSR_ac_DW.VeICSR_M_NiCL_TaOld;

        /* Merge: '<S895>/Merge8' incorporates:
         *  Constant: '<S915>/Constant Value2'
         *  Constant: '<S924>/Calib'
         *  DataStoreRead: '<S915>/Dsr_NiTbOld'
         *  Product: '<S920>/Multiplication'
         *  Sum: '<S920>/Subtraction'
         *  Sum: '<S920>/Subtraction1'
         */
        rtb_TmpSignalConversionAtVeMS_p = ((0.0F -
            ICSR_ac_DW.VeICSR_M_NiCL_TbOld) * KeICSR_k_DisableAllFilt) +
            ICSR_ac_DW.VeICSR_M_NiCL_TbOld;

        /* Merge: '<S895>/Merge7' incorporates:
         *  Constant: '<S915>/Constant Value3'
         *  Constant: '<S924>/Calib'
         *  DataStoreRead: '<S915>/Dsr_NiTbOld1'
         *  Product: '<S921>/Multiplication'
         *  Sum: '<S921>/Subtraction'
         *  Sum: '<S921>/Subtraction1'
         */
        rtb_TmpSignalConversionAtVeMSPR = ((0.0F -
            ICSR_ac_DW.VeICSR_M_NiCL_ItermOld) * KeICSR_k_DisableAllFilt) +
            ICSR_ac_DW.VeICSR_M_NiCL_ItermOld;

        /* Merge: '<S895>/Merge3' incorporates:
         *  Constant: '<S915>/Constant Value4'
         *  Constant: '<S924>/Calib'
         *  DataStoreRead: '<S915>/Data Store Read2'
         *  Product: '<S922>/Multiplication'
         *  Sum: '<S922>/Subtraction'
         *  Sum: '<S922>/Subtraction1'
         */
        rtb_TmpSignalConversionAtVeMS_i = ((0.0F -
            ICSR_ac_DW.VeICSR_M_NiCL_TaUnclipped_Old) * KeICSR_k_DisableAllFilt)
            + ICSR_ac_DW.VeICSR_M_NiCL_TaUnclipped_Old;

        /* Merge: '<S895>/Merge2' incorporates:
         *  Constant: '<S915>/Constant Value5'
         *  Constant: '<S924>/Calib'
         *  DataStoreRead: '<S915>/Data Store Read1'
         *  Product: '<S923>/Multiplication'
         *  Sum: '<S923>/Subtraction'
         *  Sum: '<S923>/Subtraction1'
         */
        rtb_TmpSignalConversionAtVeTFTR = ((0.0F -
            ICSR_ac_DW.VeICSR_M_NiCL_TbUnclipped_Old) * KeICSR_k_DisableAllFilt)
            + ICSR_ac_DW.VeICSR_M_NiCL_TbUnclipped_Old;

        /* End of Outputs for SubSystem: '<S893>/ICSC_NiDisableAll' */
    }
    else if (ICSR_ac_DW.VeICSR_b_Ni_CalSwitchTrigger)
    {
        /* Outputs for IfAction SubSystem: '<S893>/ICSC_NiLatch' incorporates:
         *  ActionPort: '<S916>/Action Port'
         */
        /* DataStoreWrite: '<S916>/Dsw_RampVal' incorporates:
         *  Constant: '<S916>/Constant Value'
         */
        ICSR_ac_DW.VeICSR_scl_NiCtlRampVal = 0.0F;

        /* DataStoreWrite: '<S916>/Dsw_TaLatch1' incorporates:
         *  DataStoreRead: '<S916>/Data Store Read'
         */
        ICSR_ac_DW.VeICSR_M_NiCL_TaUnclippedLatch =
            ICSR_ac_DW.VeICSR_M_NiCL_TaUnclipped_Old;

        /* DataStoreWrite: '<S916>/Dsw_TaLatch2' incorporates:
         *  DataStoreRead: '<S916>/Data Store Read2'
         */
        ICSR_ac_DW.VeICSR_M_NiCL_TbUnclippedLatch =
            ICSR_ac_DW.VeICSR_M_NiCL_TbUnclipped_Old;

        /* DataStoreWrite: '<S916>/Dsw_TaLatch' incorporates:
         *  DataStoreRead: '<S916>/Dsr_NiTaOld1'
         */
        ICSR_ac_DW.VeICSR_M_NiCL_TaLatch = ICSR_ac_DW.VeICSR_M_NiCL_TaOld;

        /* DataStoreWrite: '<S916>/Dsw_TbLatch' incorporates:
         *  DataStoreRead: '<S916>/Dsr_NiTbOld1'
         */
        ICSR_ac_DW.VeICSR_M_NiCL_TbLatch = ICSR_ac_DW.VeICSR_M_NiCL_TbOld;

        /* DataStoreWrite: '<S916>/Dsw_TbLatch1' incorporates:
         *  DataStoreRead: '<S916>/Dsr_NiTbOld3'
         */
        ICSR_ac_DW.VeICSR_M_NiCL_ItermLatch = ICSR_ac_DW.VeICSR_M_NiCL_ItermOld;

        /* DataStoreWrite: '<S916>/Dsw_CalSwitchTrigg' incorporates:
         *  Constant: '<S916>/FALSE Constant'
         */
        ICSR_ac_DW.VeICSR_b_Ni_CalSwitchTrigger = false;

        /* Merge: '<S895>/Merge1' incorporates:
         *  DataStoreRead: '<S916>/Dsr_NiTaOld'
         */
        rtb_TmpSignalConversionAtVeHT_j = ICSR_ac_DW.VeICSR_M_NiCL_TaOld;

        /* Merge: '<S895>/Merge8' incorporates:
         *  DataStoreRead: '<S916>/Dsr_NiTbOld'
         */
        rtb_TmpSignalConversionAtVeMS_p = ICSR_ac_DW.VeICSR_M_NiCL_TbOld;

        /* Merge: '<S895>/Merge7' incorporates:
         *  DataStoreRead: '<S916>/Dsr_NiTbOld2'
         */
        rtb_TmpSignalConversionAtVeMSPR = ICSR_ac_DW.VeICSR_M_NiCL_ItermOld;

        /* Merge: '<S895>/Merge3' incorporates:
         *  DataStoreRead: '<S916>/Data Store Read1'
         */
        rtb_TmpSignalConversionAtVeMS_i =
            ICSR_ac_DW.VeICSR_M_NiCL_TaUnclipped_Old;

        /* Merge: '<S895>/Merge2' incorporates:
         *  DataStoreRead: '<S916>/Data Store Read3'
         */
        rtb_TmpSignalConversionAtVeTFTR =
            ICSR_ac_DW.VeICSR_M_NiCL_TbUnclipped_Old;

        /* End of Outputs for SubSystem: '<S893>/ICSC_NiLatch' */
    }
    else if (ICSR_ac_DW.VeICSR_scl_NiCtlRampVal != 1.0F)
    {
        /* Outputs for IfAction SubSystem: '<S893>/ICSC_NiRamp' incorporates:
         *  ActionPort: '<S917>/Action Port'
         */
        /* Sum: '<S917>/Sum' incorporates:
         *  DataStoreRead: '<S917>/Dsr_RampVal'
         */
        rtb_Sum_k = ICSR_ac_DW.VeICSR_scl_NiCtlRampVal +
            VeICSR_dscl_NiCL_ModeSwtchRmp;

        /* Outputs for Atomic SubSystem: '<S917>/Limiter' */
        /* Switch: '<S925>/Switch1' incorporates:
         *  Constant: '<S917>/Constant Value1'
         *  RelationalOperator: '<S925>/Relational Operator'
         */
        if (1.0F < rtb_Sum_k)
        {
            /* Sum: '<S917>/Sum2' */
            rtb_Sum_k = 1.0F;
        }

        /* End of Switch: '<S925>/Switch1' */

        /* Switch: '<S925>/Switch' incorporates:
         *  Constant: '<S917>/Constant Value'
         *  DataStoreWrite: '<S917>/Dsw_RampVal'
         *  RelationalOperator: '<S925>/Relational Operator1'
         */
        if (rtb_Sum_k > 0.0F)
        {
            ICSR_ac_DW.VeICSR_scl_NiCtlRampVal = rtb_Sum_k;
        }
        else
        {
            ICSR_ac_DW.VeICSR_scl_NiCtlRampVal = 0.0F;
        }

        /* End of Switch: '<S925>/Switch' */
        /* End of Outputs for SubSystem: '<S917>/Limiter' */

        /* Merge: '<S895>/Merge1' incorporates:
         *  Constant: '<S917>/Constant Value2'
         *  DataStoreRead: '<S917>/Dsr_TaLatch1'
         *  DataStoreWrite: '<S917>/Dsw_RampVal'
         *  Product: '<S917>/Product'
         *  Product: '<S917>/Product3'
         *  Sum: '<S917>/Sum1'
         *  Sum: '<S917>/Sum2'
         */
        rtb_TmpSignalConversionAtVeHT_j = ((1.0F -
            ICSR_ac_DW.VeICSR_scl_NiCtlRampVal) *
            ICSR_ac_DW.VeICSR_M_NiCL_TaLatch) + (VeICSR_M_Ta_NiCLPID *
            ICSR_ac_DW.VeICSR_scl_NiCtlRampVal);

        /* Merge: '<S895>/Merge8' incorporates:
         *  Constant: '<S917>/Constant Value2'
         *  DataStoreRead: '<S917>/Dsr_TbLatch1'
         *  DataStoreWrite: '<S917>/Dsw_RampVal'
         *  Product: '<S917>/Product1'
         *  Product: '<S917>/Product2'
         *  Sum: '<S917>/Sum2'
         *  Sum: '<S917>/Sum3'
         */
        rtb_TmpSignalConversionAtVeMS_p = ((1.0F -
            ICSR_ac_DW.VeICSR_scl_NiCtlRampVal) *
            ICSR_ac_DW.VeICSR_M_NiCL_TbLatch) + (VeICSR_M_Tb_NiCLPID *
            ICSR_ac_DW.VeICSR_scl_NiCtlRampVal);

        /* Merge: '<S895>/Merge7' incorporates:
         *  Constant: '<S917>/Constant Value2'
         *  DataStoreRead: '<S917>/Dsr_TaLatch2'
         *  DataStoreWrite: '<S917>/Dsw_RampVal'
         *  Product: '<S917>/Product4'
         *  Product: '<S917>/Product5'
         *  Sum: '<S917>/Sum2'
         *  Sum: '<S917>/Sum4'
         */
        rtb_TmpSignalConversionAtVeMSPR = ((1.0F -
            ICSR_ac_DW.VeICSR_scl_NiCtlRampVal) *
            ICSR_ac_DW.VeICSR_M_NiCL_ItermLatch) + (VeICSR_M_NiCL_Iterm *
            ICSR_ac_DW.VeICSR_scl_NiCtlRampVal);

        /* Merge: '<S895>/Merge3' incorporates:
         *  Constant: '<S917>/Constant Value2'
         *  DataStoreRead: '<S917>/Dsr_TaLatch3'
         *  DataStoreWrite: '<S917>/Dsw_RampVal'
         *  Product: '<S917>/Product6'
         *  Product: '<S917>/Product9'
         *  Sum: '<S917>/Sum2'
         *  Sum: '<S917>/Sum5'
         */
        rtb_TmpSignalConversionAtVeMS_i = ((1.0F -
            ICSR_ac_DW.VeICSR_scl_NiCtlRampVal) *
            ICSR_ac_DW.VeICSR_M_NiCL_TaUnclippedLatch) +
            (VeICSR_M_Ta_NiCLUnclipped * ICSR_ac_DW.VeICSR_scl_NiCtlRampVal);

        /* Merge: '<S895>/Merge2' incorporates:
         *  Constant: '<S917>/Constant Value2'
         *  DataStoreRead: '<S917>/Dsr_TaLatch4'
         *  DataStoreWrite: '<S917>/Dsw_RampVal'
         *  Product: '<S917>/Product7'
         *  Product: '<S917>/Product8'
         *  Sum: '<S917>/Sum2'
         *  Sum: '<S917>/Sum6'
         */
        rtb_TmpSignalConversionAtVeTFTR = ((1.0F -
            ICSR_ac_DW.VeICSR_scl_NiCtlRampVal) *
            ICSR_ac_DW.VeICSR_M_NiCL_TbUnclippedLatch) +
            (VeICSR_M_Tb_NiCLUnclipped * ICSR_ac_DW.VeICSR_scl_NiCtlRampVal);

        /* End of Outputs for SubSystem: '<S893>/ICSC_NiRamp' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S893>/ICSC_NiSteadySt' incorporates:
         *  ActionPort: '<S918>/Action Port'
         */
        /* Merge: '<S895>/Merge1' incorporates:
         *  Inport: '<S918>/NITaCL_Raw'
         */
        rtb_TmpSignalConversionAtVeHT_j = VeICSR_M_Ta_NiCLPID;

        /* Merge: '<S895>/Merge8' incorporates:
         *  Inport: '<S918>/NiTbCL_Raw'
         */
        rtb_TmpSignalConversionAtVeMS_p = VeICSR_M_Tb_NiCLPID;

        /* Merge: '<S895>/Merge7' incorporates:
         *  Inport: '<S918>/NiCL_Iterm'
         */
        rtb_TmpSignalConversionAtVeMSPR = VeICSR_M_NiCL_Iterm;

        /* Merge: '<S895>/Merge3' incorporates:
         *  Inport: '<S918>/Ta_NiCL_Raw_Unclipped'
         */
        rtb_TmpSignalConversionAtVeMS_i = VeICSR_M_Ta_NiCLUnclipped;

        /* Merge: '<S895>/Merge2' incorporates:
         *  Inport: '<S918>/Tb_NiCL_Raw_Unclipped'
         */
        rtb_TmpSignalConversionAtVeTFTR = VeICSR_M_Tb_NiCLUnclipped;

        /* End of Outputs for SubSystem: '<S893>/ICSC_NiSteadySt' */
    }

    ICSR_ac_DW.VeICSR_M_NiCL_TaOld = rtb_TmpSignalConversionAtVeHT_j;
    ICSR_ac_DW.VeICSR_M_NiCL_TbOld = rtb_TmpSignalConversionAtVeMS_p;
    ICSR_ac_DW.VeICSR_M_NiCL_ItermOld = rtb_TmpSignalConversionAtVeMSPR;
    ICSR_ac_DW.VeICSR_M_NiCL_TaUnclipped_Old = rtb_TmpSignalConversionAtVeMS_i;
    ICSR_ac_DW.VeICSR_M_NiCL_TbUnclipped_Old = rtb_TmpSignalConversionAtVeTFTR;

    /* Sum: '<S908>/Sum2' incorporates:
     *  Constant: '<S893>/Constant Value'
     *  Constant: '<S909>/Calib'
     *  DataStoreRead: '<S893>/Dsr_CalSwitchTrig'
     *  DataStoreRead: '<S893>/Dsr_RampVal'
     *  SignalConversion generated from: '<S1>/VeESSR_e_EngStartStopSt'
     *  UnitDelay: '<S908>/Unit Delay'
     */
    rtb_Sum_k = KaICSR_K_NiCL_Scalar[(rtb_TmpSignalConversionAtVeES_p)] -
        ICSR_ac_DW.UnitDelay_DSTATE_j;

    /* Outputs for Atomic SubSystem: '<S908>/Limiter' */
    /* Switch: '<S914>/Switch1' incorporates:
     *  Constant: '<S913>/Calib'
     *  RelationalOperator: '<S914>/Relational Operator'
     */
    if (KeICSR_r_Ni_RmpUpRate < rtb_Sum_k)
    {
        /* UnitDelay: '<S926>/Unit Delay' */
        rtb_Sum_k = KeICSR_r_Ni_RmpUpRate;
    }

    /* End of Switch: '<S914>/Switch1' */

    /* Switch: '<S914>/Switch' incorporates:
     *  Constant: '<S912>/Calib'
     *  RelationalOperator: '<S914>/Relational Operator1'
     */
    if (rtb_Sum_k <= KeICSR_r_Ni_RmpDnRate)
    {
        rtb_Sum_k = KeICSR_r_Ni_RmpDnRate;
    }

    /* End of Switch: '<S914>/Switch' */
    /* End of Outputs for SubSystem: '<S908>/Limiter' */

    /* Sum: '<S908>/Sum3' incorporates:
     *  UnitDelay: '<S908>/Unit Delay'
     */
    rtb_Sum_k += ICSR_ac_DW.UnitDelay_DSTATE_j;

    /* Update for UnitDelay: '<S908>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_j = rtb_Sum_k;
    if (KeICSR_b_NiTrqRmvlOvrRd)
    {
        /* Switch: '<S892>/Switch2' incorporates:
         *  Constant: '<S911>/Calib'
         */
        VeICSR_k_Ni_TrqMltFct = KeICSR_r_NiTrqRmvlOvrRdValue;
    }
    else
    {
        /* Switch: '<S892>/Switch2' */
        VeICSR_k_Ni_TrqMltFct = rtb_Sum_k;
    }

    /* VariantMerge generated from: '<S14>/Variant Source9' incorporates:
     *  Constant: '<S910>/Calib'
     */
    rtb_Sum_k = rtb_TmpSignalConversionAtVeMS_i * VeICSR_k_Ni_TrqMltFct;

    /* VariantMerge generated from: '<S14>/Variant Source11' */
    rtb_VariantMerge_For_Variant_So = rtb_TmpSignalConversionAtVeHT_j *
        VeICSR_k_Ni_TrqMltFct;

    /* VariantMerge generated from: '<S14>/Variant Source10' */
    rtb_VariantMerge_For_Variant_gx = rtb_TmpSignalConversionAtVeTFTR *
        VeICSR_k_Ni_TrqMltFct;

    /* VariantMerge generated from: '<S14>/Variant Source7' */
    rtb_VariantMerge_For_Variant_fz = rtb_TmpSignalConversionAtVeMS_p *
        VeICSR_k_Ni_TrqMltFct;

    /* VariantMerge generated from: '<S14>/Variant Source8' */
    rtb_VariantMerge_For_Variant__e = rtb_TmpSignalConversionAtVeMSPR *
        VeICSR_k_Ni_TrqMltFct;

#endif

    /* End of If: '<S893>/CalChange' */
    /* End of Outputs for SubSystem: '<S892>/GradientLimiter1' */

    /* Outputs for Atomic SubSystem: '<S894>/GradientLimiter1' */
    /* If: '<S895>/CalChange1' incorporates:
     *  Constant: '<S895>/Constant Value1'
     *  Constant: '<S928>/Calib'
     *  DataStoreRead: '<S895>/Dsr_NxCalSwitchTrig'
     *  DataStoreRead: '<S895>/Dsr_RampVal1'
     *  DataStoreWrite: '<S895>/Dsw_NcTaOld'
     *  DataStoreWrite: '<S895>/Dsw_NcTbOld'
     *  DataStoreWrite: '<S895>/Dsw_NcTbOld1'
     *  DataStoreWrite: '<S895>/Dsw_NcTbOld2'
     *  DataStoreWrite: '<S895>/Dsw_NiTbOld1'
     *  DataStoreWrite: '<S895>/Dsw_NiTbOld2'
     *  DataStoreWrite: '<S895>/Dsw_NiTbOld3'
     *  DataStoreWrite: '<S895>/Dsw_NiTbOld4'
     *  DataTypeConversion: '<S894>/Data Type Conversion'
     *  Product: '<S895>/Multiplication1'
     *  Product: '<S895>/Multiplication2'
     *  Product: '<S895>/Multiplication3'
     *  Product: '<S895>/Multiplication4'
     *  Product: '<S895>/Multiplication5'
     *  Product: '<S895>/Multiplication6'
     *  Product: '<S895>/Multiplication7'
     *  Product: '<S895>/Multiplication8'
     *  RelationalOperator: '<S895>/Comparison1'
     *  Selector: '<S894>/Selector2'
     *  Switch: '<S894>/Switch2'
     */
#if Rte_SysCon_Variant_ICSR_4

    if (rtb_TmpSignalConversionAtVeI_lx)
    {
        /* Outputs for IfAction SubSystem: '<S895>/ICSC_NcDisableAll' incorporates:
         *  ActionPort: '<S933>/Action Port'
         */
        /* DataStoreWrite: '<S933>/Data Store Write' incorporates:
         *  DataStoreRead: '<S933>/Data Store Read1'
         */
        ICSR_ac_DW.VeICSR_M_Nx_TcLatch = ICSR_ac_DW.VeICSR_M_Nx_TcOld;

        /* DataStoreWrite: '<S933>/Data Store Write1' incorporates:
         *  DataStoreRead: '<S933>/Data Store Read4'
         */
        ICSR_ac_DW.VeICSR_M_Nx_TallLatch = ICSR_ac_DW.VeICSR_M_Nx_TallOld;

        /* DataStoreWrite: '<S933>/Dsw_TaLatch1' incorporates:
         *  DataStoreRead: '<S933>/Data Store Read'
         */
        ICSR_ac_DW.VeICSR_M_Nx_TaUnclippedLatch =
            ICSR_ac_DW.VeICSR_M_Nx_TaUnclipped_Old;

        /* DataStoreWrite: '<S933>/Dsw_TaLatch2' incorporates:
         *  DataStoreRead: '<S933>/Dsr_NcTaOld'
         */
        ICSR_ac_DW.VeICSR_M_Nx_TaLatch = ICSR_ac_DW.VeICSR_M_Nx_TaOld;

        /* DataStoreWrite: '<S933>/Dsw_TaLatch3' incorporates:
         *  DataStoreRead: '<S933>/Data Store Read2'
         */
        ICSR_ac_DW.VeICSR_M_Nx_TbUnclippedLatch =
            ICSR_ac_DW.VeICSR_M_Nx_TbUnclipped_Old;

        /* DataStoreWrite: '<S933>/Dsw_TaLatch4' incorporates:
         *  DataStoreRead: '<S933>/Data Store Read3'
         */
        ICSR_ac_DW.VeICSR_M_Nx_TcUnclippedLatch =
            ICSR_ac_DW.VeICSR_M_Nx_TcUnclipped_Old;

        /* DataStoreWrite: '<S933>/Dsw_TbLatch1' incorporates:
         *  DataStoreRead: '<S933>/Dsr_NiTbOld1'
         */
        ICSR_ac_DW.VeICSR_M_NxCL_ItermLatch = ICSR_ac_DW.VeICSR_M_Nx_ItermOld;

        /* DataStoreWrite: '<S933>/Dsw_TbLatch2' incorporates:
         *  DataStoreRead: '<S933>/Dsr_NcTbOld'
         */
        ICSR_ac_DW.VeICSR_M_Nx_TbLatch = ICSR_ac_DW.VeICSR_M_Nx_TbOld;

        /* DataStoreWrite: '<S933>/Dsw_RampVal' incorporates:
         *  Constant: '<S933>/Constant Value'
         */
        ICSR_ac_DW.VeICSR_scl_NxCtlRampVal = 0.0F;

        /* DataStoreWrite: '<S933>/Dsw_CalSwitchTrigg' incorporates:
         *  Constant: '<S933>/TRUE Constant'
         */
        ICSR_ac_DW.VeICSR_b_Nx_CalSwitchTrigger = true;

        /* Merge: '<S895>/Merge2' incorporates:
         *  Constant: '<S933>/Constant Value1'
         *  Constant: '<S945>/Calib'
         *  DataStoreRead: '<S933>/Dsr_NcTaOld'
         *  Product: '<S937>/Multiplication'
         *  Sum: '<S937>/Subtraction'
         *  Sum: '<S937>/Subtraction1'
         */
        rtb_TmpSignalConversionAtVeTFTR = ((0.0F - ICSR_ac_DW.VeICSR_M_Nx_TaOld)
            * KeICSR_k_DisableAllFilt) + ICSR_ac_DW.VeICSR_M_Nx_TaOld;

        /* Merge: '<S895>/Merge3' incorporates:
         *  Constant: '<S933>/Constant Value2'
         *  Constant: '<S945>/Calib'
         *  DataStoreRead: '<S933>/Dsr_NcTbOld'
         *  Product: '<S938>/Multiplication'
         *  Sum: '<S938>/Subtraction'
         *  Sum: '<S938>/Subtraction1'
         */
        rtb_TmpSignalConversionAtVeMS_i = ((0.0F - ICSR_ac_DW.VeICSR_M_Nx_TbOld)
            * KeICSR_k_DisableAllFilt) + ICSR_ac_DW.VeICSR_M_Nx_TbOld;

        /* Merge: '<S895>/Merge6' incorporates:
         *  Constant: '<S933>/Constant Value3'
         *  Constant: '<S945>/Calib'
         *  DataStoreRead: '<S933>/Dsr_NiTbOld1'
         *  Product: '<S939>/Multiplication'
         *  Sum: '<S939>/Subtraction'
         *  Sum: '<S939>/Subtraction1'
         */
        rtb_Merge6_g = ((0.0F - ICSR_ac_DW.VeICSR_M_Nx_ItermOld) *
                        KeICSR_k_DisableAllFilt) +
            ICSR_ac_DW.VeICSR_M_Nx_ItermOld;

        /* Merge: '<S895>/Merge1' incorporates:
         *  Constant: '<S933>/Constant Value4'
         *  Constant: '<S945>/Calib'
         *  DataStoreRead: '<S933>/Data Store Read'
         *  Product: '<S940>/Multiplication'
         *  Sum: '<S940>/Subtraction'
         *  Sum: '<S940>/Subtraction1'
         */
        rtb_TmpSignalConversionAtVeHT_j = ((0.0F -
            ICSR_ac_DW.VeICSR_M_Nx_TaUnclipped_Old) * KeICSR_k_DisableAllFilt) +
            ICSR_ac_DW.VeICSR_M_Nx_TaUnclipped_Old;

        /* Merge: '<S895>/Merge4' incorporates:
         *  Constant: '<S933>/Constant Value5'
         *  Constant: '<S945>/Calib'
         *  DataStoreRead: '<S933>/Data Store Read2'
         *  Product: '<S941>/Multiplication'
         *  Sum: '<S941>/Subtraction'
         *  Sum: '<S941>/Subtraction1'
         */
        rtb_Merge4_i = ((0.0F - ICSR_ac_DW.VeICSR_M_Nx_TbUnclipped_Old) *
                        KeICSR_k_DisableAllFilt) +
            ICSR_ac_DW.VeICSR_M_Nx_TbUnclipped_Old;

        /* Merge: '<S895>/Merge7' incorporates:
         *  Constant: '<S933>/Constant Value6'
         *  Constant: '<S945>/Calib'
         *  DataStoreRead: '<S933>/Data Store Read1'
         *  Product: '<S942>/Multiplication'
         *  Sum: '<S942>/Subtraction'
         *  Sum: '<S942>/Subtraction1'
         */
        rtb_TmpSignalConversionAtVeMSPR = ((0.0F - ICSR_ac_DW.VeICSR_M_Nx_TcOld)
            * KeICSR_k_DisableAllFilt) + ICSR_ac_DW.VeICSR_M_Nx_TcOld;

        /* Merge: '<S895>/Merge5' incorporates:
         *  Constant: '<S933>/Constant Value7'
         *  Constant: '<S945>/Calib'
         *  DataStoreRead: '<S933>/Data Store Read3'
         *  Product: '<S943>/Multiplication'
         *  Sum: '<S943>/Subtraction'
         *  Sum: '<S943>/Subtraction1'
         */
        rtb_Merge5_d = ((0.0F - ICSR_ac_DW.VeICSR_M_Nx_TcUnclipped_Old) *
                        KeICSR_k_DisableAllFilt) +
            ICSR_ac_DW.VeICSR_M_Nx_TcUnclipped_Old;

        /* Merge: '<S895>/Merge8' incorporates:
         *  Constant: '<S933>/Constant Value8'
         *  Constant: '<S945>/Calib'
         *  DataStoreRead: '<S933>/Data Store Read4'
         *  Product: '<S944>/Multiplication'
         *  Sum: '<S944>/Subtraction'
         *  Sum: '<S944>/Subtraction1'
         */
        rtb_TmpSignalConversionAtVeMS_p = ((0.0F -
            ICSR_ac_DW.VeICSR_M_Nx_TallOld) * KeICSR_k_DisableAllFilt) +
            ICSR_ac_DW.VeICSR_M_Nx_TallOld;

        /* End of Outputs for SubSystem: '<S895>/ICSC_NcDisableAll' */
    }
    else if (ICSR_ac_DW.VeICSR_b_Nx_CalSwitchTrigger)
    {
        /* Outputs for IfAction SubSystem: '<S895>/ICSC_NcLatch' incorporates:
         *  ActionPort: '<S934>/Action Port'
         */
        /* DataStoreWrite: '<S934>/Dsw_RampVal' incorporates:
         *  Constant: '<S934>/Constant Value'
         */
        ICSR_ac_DW.VeICSR_scl_NxCtlRampVal = 0.0F;

        /* DataStoreWrite: '<S934>/Dsw_TaLatch2' incorporates:
         *  DataStoreRead: '<S934>/Data Store Read'
         */
        ICSR_ac_DW.VeICSR_M_Nx_TaUnclippedLatch =
            ICSR_ac_DW.VeICSR_M_Nx_TaUnclipped_Old;

        /* DataStoreWrite: '<S934>/Dsw_TaLatch3' incorporates:
         *  DataStoreRead: '<S934>/Data Store Read2'
         */
        ICSR_ac_DW.VeICSR_M_Nx_TbUnclippedLatch =
            ICSR_ac_DW.VeICSR_M_Nx_TbUnclipped_Old;

        /* DataStoreWrite: '<S934>/Dsw_TaLatch4' incorporates:
         *  DataStoreRead: '<S934>/Data Store Read5'
         */
        ICSR_ac_DW.VeICSR_M_Nx_TcUnclippedLatch =
            ICSR_ac_DW.VeICSR_M_Nx_TcUnclipped_Old;

        /* DataStoreWrite: '<S934>/Dsw_TbLatch3' incorporates:
         *  DataStoreRead: '<S934>/Data Store Read6'
         */
        ICSR_ac_DW.VeICSR_M_Nx_TcLatch = ICSR_ac_DW.VeICSR_M_Nx_TcOld;

        /* DataStoreWrite: '<S934>/Dsw_TbLatch4' incorporates:
         *  DataStoreRead: '<S934>/Data Store Read8'
         */
        ICSR_ac_DW.VeICSR_M_Nx_TallLatch = ICSR_ac_DW.VeICSR_M_Nx_TallOld;

        /* DataStoreWrite: '<S934>/Dsw_TaLatch1' incorporates:
         *  DataStoreRead: '<S934>/Dsr_NcTaOld1'
         */
        ICSR_ac_DW.VeICSR_M_Nx_TaLatch = ICSR_ac_DW.VeICSR_M_Nx_TaOld;

        /* DataStoreWrite: '<S934>/Dsw_TbLatch1' incorporates:
         *  DataStoreRead: '<S934>/Dsr_NcTbOld1'
         */
        ICSR_ac_DW.VeICSR_M_Nx_TbLatch = ICSR_ac_DW.VeICSR_M_Nx_TbOld;

        /* DataStoreWrite: '<S934>/Dsw_TbLatch2' incorporates:
         *  DataStoreRead: '<S934>/Dsr_NiTbOld3'
         */
        ICSR_ac_DW.VeICSR_M_NxCL_ItermLatch = ICSR_ac_DW.VeICSR_M_Nx_ItermOld;

        /* DataStoreWrite: '<S934>/Dsw_CalSwitchTrigg' incorporates:
         *  Constant: '<S934>/FALSE Constant'
         */
        ICSR_ac_DW.VeICSR_b_Nx_CalSwitchTrigger = false;

        /* Merge: '<S895>/Merge2' incorporates:
         *  DataStoreRead: '<S934>/Dsr_NcTaOld'
         */
        rtb_TmpSignalConversionAtVeTFTR = ICSR_ac_DW.VeICSR_M_Nx_TaOld;

        /* Merge: '<S895>/Merge3' incorporates:
         *  DataStoreRead: '<S934>/Dsr_NcTbOld'
         */
        rtb_TmpSignalConversionAtVeMS_i = ICSR_ac_DW.VeICSR_M_Nx_TbOld;

        /* Merge: '<S895>/Merge6' incorporates:
         *  DataStoreRead: '<S934>/Dsr_NiTbOld2'
         */
        rtb_Merge6_g = ICSR_ac_DW.VeICSR_M_Nx_ItermOld;

        /* Merge: '<S895>/Merge1' incorporates:
         *  DataStoreRead: '<S934>/Data Store Read1'
         */
        rtb_TmpSignalConversionAtVeHT_j = ICSR_ac_DW.VeICSR_M_Nx_TaUnclipped_Old;

        /* Merge: '<S895>/Merge4' incorporates:
         *  DataStoreRead: '<S934>/Data Store Read3'
         */
        rtb_Merge4_i = ICSR_ac_DW.VeICSR_M_Nx_TbUnclipped_Old;

        /* Merge: '<S895>/Merge5' incorporates:
         *  DataStoreRead: '<S934>/Data Store Read4'
         */
        rtb_Merge5_d = ICSR_ac_DW.VeICSR_M_Nx_TcUnclipped_Old;

        /* Merge: '<S895>/Merge7' incorporates:
         *  DataStoreRead: '<S934>/Data Store Read7'
         */
        rtb_TmpSignalConversionAtVeMSPR = ICSR_ac_DW.VeICSR_M_Nx_TcOld;

        /* Merge: '<S895>/Merge8' incorporates:
         *  DataStoreRead: '<S934>/Data Store Read9'
         */
        rtb_TmpSignalConversionAtVeMS_p = ICSR_ac_DW.VeICSR_M_Nx_TallOld;

        /* End of Outputs for SubSystem: '<S895>/ICSC_NcLatch' */
    }
    else if (ICSR_ac_DW.VeICSR_scl_NxCtlRampVal != 1.0F)
    {
        /* Outputs for IfAction SubSystem: '<S895>/ICSC_NcRamp' incorporates:
         *  ActionPort: '<S935>/Action Port'
         */
        /* Sum: '<S935>/Sum' incorporates:
         *  DataStoreRead: '<S935>/Dsr_RampVal'
         */
        rtb_Sum = ICSR_ac_DW.VeICSR_scl_NxCtlRampVal +
            VeICSR_dscl_NxCL_ModeSwtchRmp;

        /* Outputs for Atomic SubSystem: '<S935>/Limiter' */
        /* Switch: '<S946>/Switch1' incorporates:
         *  Constant: '<S935>/Constant Value1'
         *  RelationalOperator: '<S946>/Relational Operator'
         */
        if (1.0F < rtb_Sum)
        {
            /* Sum: '<S935>/Sum2' */
            rtb_Sum = 1.0F;
        }

        /* End of Switch: '<S946>/Switch1' */

        /* Switch: '<S946>/Switch' incorporates:
         *  Constant: '<S935>/Constant Value'
         *  DataStoreWrite: '<S935>/Dsw_RampVal'
         *  RelationalOperator: '<S946>/Relational Operator1'
         */
        if (rtb_Sum > 0.0F)
        {
            ICSR_ac_DW.VeICSR_scl_NxCtlRampVal = rtb_Sum;
        }
        else
        {
            ICSR_ac_DW.VeICSR_scl_NxCtlRampVal = 0.0F;
        }

        /* End of Switch: '<S946>/Switch' */
        /* End of Outputs for SubSystem: '<S935>/Limiter' */

        /* Merge: '<S895>/Merge2' incorporates:
         *  Constant: '<S935>/Constant Value2'
         *  DataStoreRead: '<S935>/Dsr_TaLatch1'
         *  DataStoreWrite: '<S935>/Dsw_RampVal'
         *  Product: '<S935>/Product'
         *  Product: '<S935>/Product3'
         *  Sum: '<S935>/Sum1'
         *  Sum: '<S935>/Sum2'
         */
        rtb_TmpSignalConversionAtVeTFTR = ((1.0F -
            ICSR_ac_DW.VeICSR_scl_NxCtlRampVal) * ICSR_ac_DW.VeICSR_M_Nx_TaLatch)
            + (VeICSR_M_Ta_NxCL * ICSR_ac_DW.VeICSR_scl_NxCtlRampVal);

        /* Merge: '<S895>/Merge3' incorporates:
         *  Constant: '<S935>/Constant Value2'
         *  DataStoreRead: '<S935>/Dsr_TbLatch1'
         *  DataStoreWrite: '<S935>/Dsw_RampVal'
         *  Product: '<S935>/Product1'
         *  Product: '<S935>/Product2'
         *  Sum: '<S935>/Sum2'
         *  Sum: '<S935>/Sum3'
         */
        rtb_TmpSignalConversionAtVeMS_i = ((1.0F -
            ICSR_ac_DW.VeICSR_scl_NxCtlRampVal) * ICSR_ac_DW.VeICSR_M_Nx_TbLatch)
            + (VeICSR_M_Tb_NxCL * ICSR_ac_DW.VeICSR_scl_NxCtlRampVal);

        /* Merge: '<S895>/Merge6' incorporates:
         *  Constant: '<S935>/Constant Value2'
         *  DataStoreRead: '<S935>/Dsr_TaLatch2'
         *  DataStoreWrite: '<S935>/Dsw_RampVal'
         *  Product: '<S935>/Product4'
         *  Product: '<S935>/Product5'
         *  Sum: '<S935>/Sum2'
         *  Sum: '<S935>/Sum4'
         */
        rtb_Merge6_g = ((1.0F - ICSR_ac_DW.VeICSR_scl_NxCtlRampVal) *
                        ICSR_ac_DW.VeICSR_M_NxCL_ItermLatch) +
            (VeICSC_M_NxCL_Iterm * ICSR_ac_DW.VeICSR_scl_NxCtlRampVal);

        /* Outputs for Function Call SubSystem: '<S1>/ICSC_ApplyVector' */
        /* Outputs for Function Call SubSystem: '<S1>/NiNxCL_PwrLmtn' */
        /* Merge: '<S895>/Merge1' incorporates:
         *  Constant: '<S935>/Constant Value2'
         *  DataStoreRead: '<S935>/Data Store Read3'
         *  DataStoreWrite: '<S935>/Dsw_RampVal'
         *  Inport: '<S16>/NxCL_Sum'
         *  Product: '<S7>/Multiplication2'
         *  Product: '<S935>/Product6'
         *  Product: '<S935>/Product9'
         *  Sum: '<S935>/Sum2'
         *  Sum: '<S935>/Sum5'
         */
        rtb_TmpSignalConversionAtVeHT_j =
            ((ICSR_ac_B.VariantMerge_For_Variant_Sour_k * VeICSC_M_NxCLCmd) *
             ICSR_ac_DW.VeICSR_scl_NxCtlRampVal) + ((1.0F -
            ICSR_ac_DW.VeICSR_scl_NxCtlRampVal) *
            ICSR_ac_DW.VeICSR_M_Nx_TaUnclippedLatch);

        /* Merge: '<S895>/Merge4' incorporates:
         *  Constant: '<S935>/Constant Value2'
         *  DataStoreRead: '<S935>/Data Store Read1'
         *  DataStoreWrite: '<S935>/Dsw_RampVal'
         *  Inport: '<S16>/NxCL_Sum'
         *  Product: '<S7>/Multiplication3'
         *  Product: '<S935>/Product7'
         *  Product: '<S935>/Product8'
         *  Sum: '<S935>/Sum2'
         *  Sum: '<S935>/Sum6'
         */
        rtb_Merge4_i = ((VeICSC_M_NxCLCmd *
                         ICSR_ac_B.VariantMerge_For_Variant_Sour_o) *
                        ICSR_ac_DW.VeICSR_scl_NxCtlRampVal) + ((1.0F -
            ICSR_ac_DW.VeICSR_scl_NxCtlRampVal) *
            ICSR_ac_DW.VeICSR_M_Nx_TbUnclippedLatch);

        /* Merge: '<S895>/Merge5' incorporates:
         *  Constant: '<S935>/Constant Value2'
         *  DataStoreRead: '<S935>/Data Store Read2'
         *  DataStoreWrite: '<S935>/Dsw_RampVal'
         *  Inport: '<S16>/NxCL_Sum'
         *  Product: '<S7>/Multiplication5'
         *  Product: '<S935>/Product10'
         *  Product: '<S935>/Product11'
         *  Sum: '<S935>/Sum2'
         *  Sum: '<S935>/Sum7'
         */
        rtb_Merge5_d = ((VeICSC_M_NxCLCmd *
                         ICSR_ac_B.VariantMerge_For_Variant_Source) *
                        ICSR_ac_DW.VeICSR_scl_NxCtlRampVal) + ((1.0F -
            ICSR_ac_DW.VeICSR_scl_NxCtlRampVal) *
            ICSR_ac_DW.VeICSR_M_Nx_TcUnclippedLatch);

        /* End of Outputs for SubSystem: '<S1>/NiNxCL_PwrLmtn' */
        /* End of Outputs for SubSystem: '<S1>/ICSC_ApplyVector' */

        /* Merge: '<S895>/Merge7' incorporates:
         *  Constant: '<S935>/Constant Value2'
         *  DataStoreRead: '<S935>/Data Store Read4'
         *  DataStoreWrite: '<S935>/Dsw_RampVal'
         *  Product: '<S935>/Product12'
         *  Product: '<S935>/Product13'
         *  Sum: '<S935>/Sum2'
         *  Sum: '<S935>/Sum8'
         */
        rtb_TmpSignalConversionAtVeMSPR = ((1.0F -
            ICSR_ac_DW.VeICSR_scl_NxCtlRampVal) * ICSR_ac_DW.VeICSR_M_Nx_TcLatch)
            + (VeICSR_M_Tc_NxCL * ICSR_ac_DW.VeICSR_scl_NxCtlRampVal);

        /* Merge: '<S895>/Merge8' incorporates:
         *  Constant: '<S935>/Constant Value2'
         *  DataStoreRead: '<S935>/Data Store Read5'
         *  DataStoreWrite: '<S935>/Dsw_RampVal'
         *  Product: '<S935>/Product14'
         *  Product: '<S935>/Product15'
         *  Sum: '<S935>/Sum2'
         *  Sum: '<S935>/Sum9'
         */
        rtb_TmpSignalConversionAtVeMS_p = ((1.0F -
            ICSR_ac_DW.VeICSR_scl_NxCtlRampVal) *
            ICSR_ac_DW.VeICSR_M_Nx_TallLatch) + (VeICSR_M_NxCL_PwrValue *
            ICSR_ac_DW.VeICSR_scl_NxCtlRampVal);

        /* End of Outputs for SubSystem: '<S895>/ICSC_NcRamp' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S895>/ICSC_NcSteadySt' incorporates:
         *  ActionPort: '<S936>/Action Port'
         */
        /* Merge: '<S895>/Merge2' incorporates:
         *  Inport: '<S936>/Nx_TaCLRaw'
         */
        rtb_TmpSignalConversionAtVeTFTR = VeICSR_M_Ta_NxCL;

        /* Merge: '<S895>/Merge3' incorporates:
         *  Inport: '<S936>/Nx_TbCLRaw'
         */
        rtb_TmpSignalConversionAtVeMS_i = VeICSR_M_Tb_NxCL;

        /* Merge: '<S895>/Merge6' incorporates:
         *  Inport: '<S936>/NxCL_Iterm'
         */
        rtb_Merge6_g = VeICSC_M_NxCL_Iterm;

        /* Outputs for Function Call SubSystem: '<S1>/ICSC_ApplyVector' */
        /* Outputs for Function Call SubSystem: '<S1>/NiNxCL_PwrLmtn' */
        /* Merge: '<S895>/Merge1' incorporates:
         *  Inport: '<S16>/NxCL_Sum'
         *  Inport: '<S936>/Nx_TaCLRaw_Unclipped'
         *  Product: '<S7>/Multiplication2'
         */
        rtb_TmpSignalConversionAtVeHT_j =
            ICSR_ac_B.VariantMerge_For_Variant_Sour_k * VeICSC_M_NxCLCmd;

        /* Merge: '<S895>/Merge4' incorporates:
         *  Inport: '<S16>/NxCL_Sum'
         *  Inport: '<S936>/Nx_TbCLRaw_Unclipped'
         *  Product: '<S7>/Multiplication3'
         */
        rtb_Merge4_i = VeICSC_M_NxCLCmd *
            ICSR_ac_B.VariantMerge_For_Variant_Sour_o;

        /* Merge: '<S895>/Merge5' incorporates:
         *  Inport: '<S16>/NxCL_Sum'
         *  Inport: '<S936>/Tc_NxCL_Unclipped'
         *  Product: '<S7>/Multiplication5'
         */
        rtb_Merge5_d = VeICSC_M_NxCLCmd *
            ICSR_ac_B.VariantMerge_For_Variant_Source;

        /* End of Outputs for SubSystem: '<S1>/NiNxCL_PwrLmtn' */
        /* End of Outputs for SubSystem: '<S1>/ICSC_ApplyVector' */

        /* Merge: '<S895>/Merge7' incorporates:
         *  Inport: '<S936>/Tc_NxCL'
         */
        rtb_TmpSignalConversionAtVeMSPR = VeICSR_M_Tc_NxCL;

        /* Merge: '<S895>/Merge8' incorporates:
         *  Inport: '<S936>/Tall_NxCL'
         */
        rtb_TmpSignalConversionAtVeMS_p = VeICSR_M_NxCL_PwrValue;

        /* End of Outputs for SubSystem: '<S895>/ICSC_NcSteadySt' */
    }

    ICSR_ac_DW.VeICSR_M_Nx_TaOld = rtb_TmpSignalConversionAtVeTFTR;
    ICSR_ac_DW.VeICSR_M_Nx_TbOld = rtb_TmpSignalConversionAtVeMS_i;
    ICSR_ac_DW.VeICSR_M_Nx_TcOld = rtb_TmpSignalConversionAtVeMSPR;
    ICSR_ac_DW.VeICSR_M_Nx_TallOld = rtb_TmpSignalConversionAtVeMS_p;
    ICSR_ac_DW.VeICSR_M_Nx_TaUnclipped_Old = rtb_TmpSignalConversionAtVeHT_j;
    ICSR_ac_DW.VeICSR_M_Nx_TbUnclipped_Old = rtb_Merge4_i;
    ICSR_ac_DW.VeICSR_M_Nx_ItermOld = rtb_Merge6_g;
    ICSR_ac_DW.VeICSR_M_Nx_TcUnclipped_Old = rtb_Merge5_d;

    /* Sum: '<S926>/Sum2' incorporates:
     *  Constant: '<S895>/Constant Value1'
     *  Constant: '<S927>/Calib'
     *  DataStoreRead: '<S895>/Dsr_NxCalSwitchTrig'
     *  DataStoreRead: '<S895>/Dsr_RampVal1'
     *  SignalConversion generated from: '<S1>/VeESSR_e_EngStartStopSt'
     *  UnitDelay: '<S926>/Unit Delay'
     */
    rtb_Sum = KaICSR_K_NxCL_Scalar[(rtb_TmpSignalConversionAtVeES_p)] -
        ICSR_ac_DW.UnitDelay_DSTATE_l;

    /* Outputs for Atomic SubSystem: '<S926>/Limiter' */
    /* Switch: '<S932>/Switch1' incorporates:
     *  Constant: '<S931>/Calib'
     *  RelationalOperator: '<S932>/Relational Operator'
     */
    if (KeICSR_r_Nx_RmpUpRate < rtb_Sum)
    {
        /* Switch: '<S932>/Switch1' */
        rtb_Sum = KeICSR_r_Nx_RmpUpRate;
    }

    /* End of Switch: '<S932>/Switch1' */

    /* Switch: '<S932>/Switch' incorporates:
     *  Constant: '<S930>/Calib'
     *  RelationalOperator: '<S932>/Relational Operator1'
     */
    if (rtb_Sum <= KeICSR_r_Nx_RmpDnRate)
    {
        rtb_Sum = KeICSR_r_Nx_RmpDnRate;
    }

    /* End of Switch: '<S932>/Switch' */
    /* End of Outputs for SubSystem: '<S926>/Limiter' */

    /* Sum: '<S926>/Sum3' incorporates:
     *  UnitDelay: '<S926>/Unit Delay'
     */
    rtb_Sum += ICSR_ac_DW.UnitDelay_DSTATE_l;

    /* Update for UnitDelay: '<S926>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE_l = rtb_Sum;
    if (KeICSR_b_NxTrqRmvlOvrRd)
    {
        /* Switch: '<S894>/Switch2' incorporates:
         *  Constant: '<S929>/Calib'
         */
        VeICSR_k_Nx_TrqMltFct = KeICSR_r_NxTrqRmvlOvrRdValue;
    }
    else
    {
        /* Switch: '<S894>/Switch2' */
        VeICSR_k_Nx_TrqMltFct = rtb_Sum;
    }

    /* VariantMerge generated from: '<S14>/Variant Source' incorporates:
     *  Constant: '<S928>/Calib'
     */
    rtb_Sum = rtb_TmpSignalConversionAtVeTFTR * VeICSR_k_Nx_TrqMltFct;

    /* VariantMerge generated from: '<S14>/Variant Source3' */
    rtb_VariantMerge_For_Variant_og = rtb_TmpSignalConversionAtVeHT_j *
        VeICSR_k_Nx_TrqMltFct;

    /* VariantMerge generated from: '<S14>/Variant Source4' */
    rtb_Merge4_i *= VeICSR_k_Nx_TrqMltFct;

    /* VariantMerge generated from: '<S14>/Variant Source5' */
    rtb_Merge5_d *= VeICSR_k_Nx_TrqMltFct;

    /* VariantMerge generated from: '<S14>/Variant Source6' */
    rtb_VariantMerge_For_Variant__c = rtb_TmpSignalConversionAtVeMSPR *
        VeICSR_k_Nx_TrqMltFct;

    /* VariantMerge generated from: '<S14>/Variant Source12' */
    rtb_VariantMerge_For_Variant_pk = rtb_TmpSignalConversionAtVeMS_p *
        VeICSR_k_Nx_TrqMltFct;

    /* VariantMerge generated from: '<S14>/Variant Source1' */
    rtb_VariantMerge_For_Variant__g = rtb_TmpSignalConversionAtVeMS_i *
        VeICSR_k_Nx_TrqMltFct;

    /* VariantMerge generated from: '<S14>/Variant Source2' */
    rtb_Merge6_g *= VeICSR_k_Nx_TrqMltFct;

#endif

    /* End of If: '<S895>/CalChange1' */
    /* End of Outputs for SubSystem: '<S894>/GradientLimiter1' */

    /* SignalConversion generated from: '<S14>/Variant Source11' */
#if !Rte_SysCon_Variant_ICSR_5

    /* VariantMerge generated from: '<S14>/Variant Source11' incorporates:
     *  Constant: '<S14>/Constant Value1'
     */
    rtb_VariantMerge_For_Variant_So = 0.0F;

#endif

    /* SignalConversion generated from: '<S14>/Variant Source11' */
    VeICSR_M_NiCL_TaOldScale = rtb_VariantMerge_For_Variant_So;

    /* SignalConversion generated from: '<S14>/Variant Source' */
#if !Rte_SysCon_Variant_ICSR_4

    /* VariantMerge generated from: '<S14>/Variant Source' incorporates:
     *  Constant: '<S14>/Constant Value'
     */
    rtb_Sum = 0.0F;

#endif

    /* SignalConversion generated from: '<S14>/Variant Source' */
    VeICSR_M_NxCL_TaOld = rtb_Sum;

    /* SignalConversion generated from: '<S14>/Variant Source8' */
#if !Rte_SysCon_Variant_ICSR_5

    /* VariantMerge generated from: '<S14>/Variant Source8' incorporates:
     *  Constant: '<S14>/Constant Value3'
     */
    rtb_VariantMerge_For_Variant__e = 0.0F;

    /* VariantMerge generated from: '<S14>/Variant Source9' incorporates:
     *  Constant: '<S14>/Constant Value4'
     */
    rtb_Sum_k = 0.0F;

#endif

    /* SignalConversion generated from: '<S14>/Variant Source12' */
#if !Rte_SysCon_Variant_ICSR_4

    /* VariantMerge generated from: '<S14>/Variant Source12' incorporates:
     *  Constant: '<S14>/Constant Value12'
     */
    rtb_VariantMerge_For_Variant_pk = 0.0F;

    /* VariantMerge generated from: '<S14>/Variant Source3' incorporates:
     *  Constant: '<S14>/Constant Value8'
     */
    rtb_VariantMerge_For_Variant_og = 0.0F;

#endif

    /* SignalConversion generated from: '<S14>/Variant Source9' */
    VeICSR_M_NiCL_TaOldUnclScale = rtb_Sum_k;

    /* SignalConversion generated from: '<S14>/Variant Source3' */
    VeICSR_M_NxCL_TaOldUncl = rtb_VariantMerge_For_Variant_og;

    /* SignalConversion generated from: '<S14>/Variant Source2' */
#if !Rte_SysCon_Variant_ICSR_4

    /* VariantMerge generated from: '<S14>/Variant Source2' incorporates:
     *  Constant: '<S14>/Constant Value7'
     */
    rtb_Merge6_g = 0.0F;

#endif

    /* SignalConversion generated from: '<S14>/Variant Source7' */
#if !Rte_SysCon_Variant_ICSR_5

    /* VariantMerge generated from: '<S14>/Variant Source7' incorporates:
     *  Constant: '<S14>/Constant Value2'
     */
    rtb_VariantMerge_For_Variant_fz = 0.0F;

#endif

    /* SignalConversion generated from: '<S14>/Variant Source7' */
    VeICSR_M_NiCL_TbOldScale = rtb_VariantMerge_For_Variant_fz;

    /* SignalConversion generated from: '<S14>/Variant Source1' */
#if !Rte_SysCon_Variant_ICSR_4

    /* VariantMerge generated from: '<S14>/Variant Source1' incorporates:
     *  Constant: '<S14>/Constant Value6'
     */
    rtb_VariantMerge_For_Variant__g = 0.0F;

#endif

    /* SignalConversion generated from: '<S14>/Variant Source1' */
    VeICSR_M_NxCL_TbOld = rtb_VariantMerge_For_Variant__g;

    /* SignalConversion generated from: '<S14>/Variant Source10' */
#if !Rte_SysCon_Variant_ICSR_5

    /* VariantMerge generated from: '<S14>/Variant Source10' incorporates:
     *  Constant: '<S14>/Constant Value5'
     */
    rtb_VariantMerge_For_Variant_gx = 0.0F;

#endif

    /* SignalConversion generated from: '<S14>/Variant Source10' */
    VeICSR_M_NiCL_TbOldUnclScale = rtb_VariantMerge_For_Variant_gx;

    /* SignalConversion generated from: '<S14>/Variant Source4' */
#if !Rte_SysCon_Variant_ICSR_4

    /* VariantMerge generated from: '<S14>/Variant Source4' incorporates:
     *  Constant: '<S14>/Constant Value9'
     */
    rtb_Merge4_i = 0.0F;

    /* VariantMerge generated from: '<S14>/Variant Source5' incorporates:
     *  Constant: '<S14>/Constant Value10'
     */
    rtb_Merge5_d = 0.0F;

    /* VariantMerge generated from: '<S14>/Variant Source6' incorporates:
     *  Constant: '<S14>/Constant Value11'
     */
    rtb_VariantMerge_For_Variant__c = 0.0F;

#endif

    /* SignalConversion generated from: '<S14>/Variant Source4' */
    VeICSR_M_NxCL_TbOldUncl = rtb_Merge4_i;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ICSC_CalSelect'
     */
    /* Outport: '<Root>/VeICSR_b_AdvancePrepForIdle' incorporates:
     *  Logic: '<S178>/AND'
     *  SignalConversion generated from: '<S1>/AdvancePrepForIdle'
     */
    (void)Rte_Write_VeICSR_b_AdvancePrepForIdle_Value
        (rtb_VariantMerge_For_Variant__i);

    /* Outport: '<Root>/VeICSR_b_DsblAnglCntrl' incorporates:
     *  Logic: '<S177>/AND'
     *  SignalConversion generated from: '<S1>/DsblAnglCntrl_out'
     */
    (void)Rte_Write_VeICSR_b_DsblAnglCntrl_Value
        (ICSR_ac_B.VariantMerge_For_Variant_Sou_gp);

    /* Outport: '<Root>/VeICSR_e_EngCntrlMode' incorporates:
     *  DataTypeConversion: '<S182>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/EngCntrlMode'
     *  VariantMerge generated from: '<S8>/Variant Source21'
     */
    (void)Rte_Write_VeICSR_e_EngCntrlMode_Value(rtb_VariantMerge_For_Variant__b);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ICSC_SumAndRamp'
     */
    /* Outport: '<Root>/VeICSR_M_NxCLIterm' incorporates:
     *  Gain: '<S901>/Gain'
     *  SignalConversion generated from: '<S1>/ICSR_M_NxCLIterm'
     */
    (void)Rte_Write_VeICSR_M_NxCLIterm_Value(rtb_Merge6_g);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/NiNxCL_PwrLmtn'
     */
    /* Outport: '<Root>/VeICSR_M_EngCL' incorporates:
     *  Gain: '<S956>/Gain'
     *  SignalConversion generated from: '<S1>/NiCL_Sum_Limited_out'
     */
    (void)Rte_Write_VeICSR_M_EngCL_Value(rtb_TmpSignalConversionAtVeHTDR);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ICSC_SumAndRamp'
     */
    /* Outport: '<Root>/VeICSR_M_TaCL' incorporates:
     *  SignalConversion generated from: '<S1>/TaCL'
     *  Sum: '<S14>/Sum2'
     */
    (void)Rte_Write_VeICSR_M_TaCL_Value(VeICSR_M_NiCL_TaOldScale +
        VeICSR_M_NxCL_TaOld);

    /* Outport: '<Root>/VeICSR_M_TaCL_PreRamp' incorporates:
     *  SignalConversion generated from: '<S1>/TaCL_PreRamp'
     *  Sum: '<S14>/Sum1'
     */
    (void)Rte_Write_VeICSR_M_TaCL_PreRamp_Value(VeICSR_M_Ta_NiCLPID +
        VeICSR_M_Ta_NxCL);

    /* Outport: '<Root>/VeICSR_M_TaCL_Unclipped' incorporates:
     *  SignalConversion generated from: '<S1>/TaCL_Unclipped'
     *  Sum: '<S14>/Sum5'
     */
    (void)Rte_Write_VeICSR_M_TaCL_Unclipped_Value(VeICSR_M_NiCL_TaOldUnclScale +
        VeICSR_M_NxCL_TaOldUncl);

    /* Outport: '<Root>/VeICSR_M_NxCL' incorporates:
     *  Gain: '<S899>/Gain'
     *  SignalConversion generated from: '<S1>/TallNx_CL'
     */
    (void)Rte_Write_VeICSR_M_NxCL_Value(rtb_VariantMerge_For_Variant_pk);

    /* Outport: '<Root>/VeICSR_M_TbCL' incorporates:
     *  SignalConversion generated from: '<S1>/TbCL'
     *  Sum: '<S14>/Sum3'
     */
    (void)Rte_Write_VeICSR_M_TbCL_Value(VeICSR_M_NiCL_TbOldScale +
        VeICSR_M_NxCL_TbOld);

    /* Outport: '<Root>/VeICSR_M_TbCL_PreRamp' incorporates:
     *  SignalConversion generated from: '<S1>/TbCL_PreRamp'
     *  Sum: '<S14>/Sum4'
     */
    (void)Rte_Write_VeICSR_M_TbCL_PreRamp_Value(VeICSR_M_Tb_NiCLPID +
        VeICSR_M_Tb_NxCL);

    /* Outport: '<Root>/VeICSR_M_TbCL_Unclipped' incorporates:
     *  SignalConversion generated from: '<S1>/TbCL_Unclipped'
     *  Sum: '<S14>/Sum6'
     */
    (void)Rte_Write_VeICSR_M_TbCL_Unclipped_Value(VeICSR_M_NiCL_TbOldUnclScale +
        VeICSR_M_NxCL_TbOldUncl);

    /* Outport: '<Root>/VeICSR_M_TcCL' incorporates:
     *  Gain: '<S905>/Gain'
     *  SignalConversion generated from: '<S1>/TcCL'
     */
    (void)Rte_Write_VeICSR_M_TcCL_Value(rtb_VariantMerge_For_Variant__c);

    /* Outport: '<Root>/VeICSR_M_TcCL_PreRamp' incorporates:
     *  Gain: '<S896>/Gain'
     *  SignalConversion generated from: '<S1>/TcCL_PreRamp'
     */
    (void)Rte_Write_VeICSR_M_TcCL_PreRamp_Value(VeICSR_M_Tc_NxCL);

    /* Outport: '<Root>/VeICSR_M_TcCL_Unclipped' incorporates:
     *  Gain: '<S904>/Gain'
     *  SignalConversion generated from: '<S1>/TcCL_Unclipped'
     */
    (void)Rte_Write_VeICSR_M_TcCL_Unclipped_Value(rtb_Merge5_d);

    /* Outport: '<Root>/VeICSR_M_EngCLITerm' incorporates:
     *  Gain: '<S898>/Gain'
     *  SignalConversion generated from: '<S1>/VeICSR_M_EngCLITerm'
     */
    (void)Rte_Write_VeICSR_M_EngCLITerm_Value(rtb_VariantMerge_For_Variant__e);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ICSC_CalSelect'
     */
    /* Outport: '<Root>/VeICSR_b_Disable_Ni_Global' incorporates:
     *  Logic: '<S170>/AND'
     *  SignalConversion generated from: '<S1>/VeICSR_b_Disable_Ni_Global_out'
     */
    (void)Rte_Write_VeICSR_b_Disable_Ni_Global_Value(LeICSR_b_Disable_Ni_Global);

    /* Outport: '<Root>/VeICSR_b_TaNiCL_Enabled' incorporates:
     *  Abs: '<S188>/Abs2'
     *  Constant: '<S188>/Constant Value'
     *  RelationalOperator: '<S188>/Relational Operator2'
     *  SignalConversion generated from: '<S1>/VeICSR_b_TaNiCL_Enabled'
     */
    (void)Rte_Write_VeICSR_b_TaNiCL_Enabled_Value(fabsf
        (ICSR_ac_B.VariantMerge_For_Variant_Sour_g) >= 0.001F);

    /* Outport: '<Root>/VeICSR_b_TaNxCL_Enabled' incorporates:
     *  Abs: '<S188>/Abs'
     *  Constant: '<S188>/Constant Value'
     *  RelationalOperator: '<S188>/Relational Operator'
     *  SignalConversion generated from: '<S1>/VeICSR_b_TaNxCL_Enabled'
     */
    (void)Rte_Write_VeICSR_b_TaNxCL_Enabled_Value(fabsf
        (ICSR_ac_B.VariantMerge_For_Variant_Sour_k) >= 0.001F);

    /* Outport: '<Root>/VeICSR_b_TbNiCL_Enabled' incorporates:
     *  Abs: '<S188>/Abs3'
     *  Constant: '<S188>/Constant Value'
     *  RelationalOperator: '<S188>/Relational Operator3'
     *  SignalConversion generated from: '<S1>/VeICSR_b_TbNiCL_Enabled'
     */
    (void)Rte_Write_VeICSR_b_TbNiCL_Enabled_Value(fabsf
        (ICSR_ac_B.VariantMerge_For_Variant_Sour_d) >= 0.001F);

    /* Outport: '<Root>/VeICSR_b_TbNxCL_Enabled' incorporates:
     *  Abs: '<S188>/Abs1'
     *  Constant: '<S188>/Constant Value'
     *  RelationalOperator: '<S188>/Relational Operator1'
     *  SignalConversion generated from: '<S1>/VeICSR_b_TbNxCL_Enabled'
     */
    (void)Rte_Write_VeICSR_b_TbNxCL_Enabled_Value(fabsf
        (ICSR_ac_B.VariantMerge_For_Variant_Sour_o) >= 0.001F);

    /* Outport: '<Root>/VeICSR_b_TcNxCL_Enabled' incorporates:
     *  Abs: '<S188>/Abs4'
     *  Constant: '<S188>/Constant Value'
     *  RelationalOperator: '<S188>/Relational Operator4'
     *  SignalConversion generated from: '<S1>/VeICSR_b_TcNxCL_Enabled'
     */
    (void)Rte_Write_VeICSR_b_TcNxCL_Enabled_Value(fabsf
        (ICSR_ac_B.VariantMerge_For_Variant_Source) >= 0.001F);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ICSC_NiCL_CalcErr'
     */
    /* Outport: '<Root>/VeICSR_n_NiErr_out' incorporates:
     *  Gain: '<S826>/Gain'
     *  SignalConversion generated from: '<S1>/VeICSR_n_NiErr_out'
     */
    (void)Rte_Write_VeICSR_n_NiErr_out_Value(ICSR_ac_B.Switch_d);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Merge: '<Root>/VeICSR_r_NiCL_TaGain_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/VeICSR_r_NiCL_TaGain_write'
     * */
    Rte_IrvWrite_ICSR_MedTEB_VeICSR_r_NiCL_TaGain_write_IRV
        (ICSR_ac_B.VariantMerge_For_Variant_Sour_g);

    /* Merge: '<Root>/VeICSR_r_NiCL_TbGain_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/VeICSR_r_NiCL_TbGain_write'
     * */
    Rte_IrvWrite_ICSR_MedTEB_VeICSR_r_NiCL_TbGain_write_IRV
        (ICSR_ac_B.VariantMerge_For_Variant_Sour_d);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ICSC_NiCL_CalcErr'
     */
    /* Outputs for Atomic SubSystem: '<S11>/StateOfTheArt_AHSC' */
    /* Merge: '<Root>/y_IRV_Merge' incorporates:
     *  Gain: '<S852>/Gain'
     *  SignalConversion generated from: '<S1>/y_write'
     */
    Rte_IrvWrite_ICSR_MedTEB_y_write_IRV(VeICSR_n_NiErrOut);

    /* End of Outputs for SubSystem: '<S11>/StateOfTheArt_AHSC' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/ICSR_MedTEB' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
#endif

}

#endif

/* Model step function for TID2 */
#if Rte_SysCon_Variant_ICSR_7

FUNC(void, ICSR_CODE) ICSR_MedTED(void) /* Explicit Task: MedTED */
{

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_Multiplication8;

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_Minimum1;

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_Vector;

#endif

#if Rte_SysCon_Variant_ICSR_7

    float32 rtb_LeICSC_M_TaReserveRaw_CLR;

#endif

#if Rte_SysCon_Variant_ICSR_7

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
    /* Outputs for Function Call SubSystem: '<Root>/ICSR_MedTED' */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/ICSC_SpdCntrlDynRs'
     */
    /* Product: '<S1020>/Multiplication8' incorporates:
     *  Constant: '<S1025>/Calib'
     *  Constant: '<S1026>/Calib'
     */
    rtb_Multiplication8 = KeICSR_dMt_TaDynRsrvDecay * HeICSR_t_MedTED_dT;

    /* Lookup_n-D: '<S1015>/Vector' incorporates:
     *  Merge: '<Root>/y_IRV_Merge'
     *  SignalConversion generated from: '<S2>/y_Read'
     */
    rtb_Vector = look1_iflf_binlcapw(Rte_IrvRead_ICSR_MedTED_y_write_IRV(), ((
        const float32 *)&(KxICSR_M_CLR_NiCLDynamicReserve[0])), ((const float32 *)
        &(KtICSR_M_CLR_NiCLDynamicReserve[0])), 8U);

    /* Product: '<S1020>/Multiplication3' incorporates:
     *  Merge: '<Root>/VeICSR_r_NiCL_TaGain_IRV_Merge'
     *  SignalConversion generated from: '<S2>/VeICSR_r_NiCL_TaGain_Read'
     */
    rtb_LeICSC_M_TaReserveRaw_CLR = rtb_Vector *
        Rte_IrvRead_ICSR_MedTED_VeICSR_r_NiCL_TaGain_write_IRV();

    /* Outputs for Atomic SubSystem: '<S1009>/GradientLimiter1' */
    /* Product: '<S1020>/Multiplication5' incorporates:
     *  Constant: '<S1025>/Calib'
     *  Constant: '<S1028>/Calib'
     *  Gain: '<S1020>/Negation2'
     *  UnitDelay: '<S1009>/Unit Delay'
     */
    ICSR_ac_GradientLimiter1(KeICSR_dMt_TaDynRsrvLU * HeICSR_t_MedTED_dT,
        -rtb_Multiplication8, rtb_LeICSC_M_TaReserveRaw_CLR,
        ICSR_ac_DW.UnitDelay_DSTATE, &ICSR_ac_B.GradientLimiter1_lz);

    /* End of Outputs for SubSystem: '<S1009>/GradientLimiter1' */

    /* Outputs for Atomic SubSystem: '<S1009>/GradientLimiter2' */
    /* Product: '<S1020>/Multiplication6' incorporates:
     *  Constant: '<S1025>/Calib'
     *  Constant: '<S1027>/Calib'
     *  UnitDelay: '<S1009>/Unit Delay1'
     */
    ICSR_ac_GradientLimiter1(rtb_Multiplication8, KeICSR_dMt_TaDynRsrvLD *
        HeICSR_t_MedTED_dT, rtb_LeICSC_M_TaReserveRaw_CLR,
        ICSR_ac_DW.UnitDelay1_DSTATE, &ICSR_ac_B.GradientLimiter2_h);

    /* End of Outputs for SubSystem: '<S1009>/GradientLimiter2' */

    /* Product: '<S1020>/Multiplication13' incorporates:
     *  Constant: '<S1025>/Calib'
     *  Constant: '<S1029>/Calib'
     */
    rtb_Multiplication8 = KeICSR_dMt_TbDynRsrvDecay * HeICSR_t_MedTED_dT;

    /* Product: '<S1020>/Multiplication1' incorporates:
     *  Merge: '<Root>/VeICSR_r_NiCL_TbGain_IRV_Merge'
     *  SignalConversion generated from: '<S2>/VeICSR_r_NiCL_TbGain_Read'
     */
    rtb_Vector *= Rte_IrvRead_ICSR_MedTED_VeICSR_r_NiCL_TbGain_write_IRV();

    /* Outputs for Atomic SubSystem: '<S1009>/GradientLimiter3' */
    /* Product: '<S1020>/Multiplication10' incorporates:
     *  Constant: '<S1025>/Calib'
     *  Constant: '<S1031>/Calib'
     *  Gain: '<S1020>/Negation3'
     *  UnitDelay: '<S1009>/Unit Delay2'
     */
    ICSR_ac_GradientLimiter1(KeICSR_dMt_TbDynRsrvLU * HeICSR_t_MedTED_dT,
        -rtb_Multiplication8, rtb_Vector, ICSR_ac_DW.UnitDelay2_DSTATE,
        &ICSR_ac_B.GradientLimiter3_h);

    /* End of Outputs for SubSystem: '<S1009>/GradientLimiter3' */

    /* Outputs for Atomic SubSystem: '<S1009>/GradientLimiter4' */
    /* Product: '<S1020>/Multiplication11' incorporates:
     *  Constant: '<S1025>/Calib'
     *  Constant: '<S1030>/Calib'
     *  UnitDelay: '<S1009>/Unit Delay3'
     */
    ICSR_ac_GradientLimiter1(rtb_Multiplication8, KeICSR_dMt_TbDynRsrvLD *
        HeICSR_t_MedTED_dT, rtb_Vector, ICSR_ac_DW.UnitDelay3_DSTATE,
        &ICSR_ac_B.GradientLimiter4_n);

    /* End of Outputs for SubSystem: '<S1009>/GradientLimiter4' */

    /* MinMax: '<S1009>/Maximum' incorporates:
     *  Constant: '<S1009>/Constant Value1'
     */
    rtb_Vector = fmaxf(ICSR_ac_B.GradientLimiter1_lz.Sum3, 0.0F);

    /* MinMax: '<S1009>/Maximum1' incorporates:
     *  Constant: '<S1009>/Constant Value3'
     */
    rtb_Multiplication8 = fmaxf(ICSR_ac_B.GradientLimiter3_h.Sum3, 0.0F);

    /* MinMax: '<S1009>/Minimum' incorporates:
     *  Constant: '<S1009>/Constant Value2'
     */
    rtb_LeICSC_M_TaReserveRaw_CLR = fminf(ICSR_ac_B.GradientLimiter2_h.Sum3,
        0.0F);

    /* MinMax: '<S1009>/Minimum1' incorporates:
     *  Constant: '<S1009>/Constant Value4'
     */
    rtb_Minimum1 = fminf(ICSR_ac_B.GradientLimiter4_n.Sum3, 0.0F);

    /* Update for UnitDelay: '<S1009>/Unit Delay' */
    ICSR_ac_DW.UnitDelay_DSTATE = rtb_Vector;

    /* Update for UnitDelay: '<S1009>/Unit Delay1' */
    ICSR_ac_DW.UnitDelay1_DSTATE = rtb_LeICSC_M_TaReserveRaw_CLR;

    /* Update for UnitDelay: '<S1009>/Unit Delay2' */
    ICSR_ac_DW.UnitDelay2_DSTATE = rtb_Multiplication8;

    /* Update for UnitDelay: '<S1009>/Unit Delay3' */
    ICSR_ac_DW.UnitDelay3_DSTATE = rtb_Minimum1;

    /* Outport: '<Root>/VeICSR_M_TaMaxReserve_CLR' incorporates:
     *  Gain: '<S1017>/Gain'
     *  SignalConversion generated from: '<S2>/TaMaxReserve'
     */
    (void)Rte_Write_VeICSR_M_TaMaxReserve_CLR_Value(rtb_Vector);

    /* Outport: '<Root>/VeICSR_M_TaMinReserve_CLR' incorporates:
     *  Gain: '<S1009>/Negation6'
     *  SignalConversion generated from: '<S2>/TaMinReserve'
     */
    (void)Rte_Write_VeICSR_M_TaMinReserve_CLR_Value
        (-rtb_LeICSC_M_TaReserveRaw_CLR);

    /* Outport: '<Root>/VeICSR_M_TbMaxReserve_CLR' incorporates:
     *  Gain: '<S1018>/Gain'
     *  SignalConversion generated from: '<S2>/TbMaxReserve'
     */
    (void)Rte_Write_VeICSR_M_TbMaxReserve_CLR_Value(rtb_Multiplication8);

    /* Outport: '<Root>/VeICSR_M_TbMinReserve_CLR' incorporates:
     *  Gain: '<S1009>/Negation5'
     *  SignalConversion generated from: '<S2>/TbMinReseve'
     */
    (void)Rte_Write_VeICSR_M_TbMinReserve_CLR_Value(-rtb_Minimum1);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/ICSR_MedTED' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
#endif

}

#endif

/* Model step function for TID3 */
#if Rte_SysCon_Variant_ICSR_7

FUNC(void, ICSR_CODE) ICSR_MedTEF(void) /* Explicit Task: MedTEF */
{

#if Rte_SysCon_Variant_ICSR_7

    boolean tmpRead;

#endif

#if Rte_SysCon_Variant_ICSR_7

    TeESSR_e_EngStartStopSt tmpRead_0;

#endif

#if Rte_SysCon_Variant_ICSR_7

    boolean tmpRead_1;

#endif

#if Rte_SysCon_Variant_ICSR_7

    TeESSR_e_EngStrtType tmpRead_2;

#endif

#if Rte_SysCon_Variant_ICSR_7

    TeHPMR_e_HybSysState rtb_TmpSignalConversionAtVeHPMR;

#endif

#if Rte_SysCon_Variant_ICSR_7

    TeSTRR_e_HybStrtrSt rtb_TmpSignalConversionAtVeSTRR;

#endif

#if Rte_SysCon_Variant_ICSR_7

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' */
    /* Outputs for Function Call SubSystem: '<Root>/ICSR_MedTEF' */
    /* SignalConversion generated from: '<S3>/VeHPMR_e_HybSysSt' incorporates:
     *  Inport: '<Root>/VeHPMR_e_HybSysSt'
     */
    (void)Rte_Read_VeHPMR_e_HybSysSt_Value(&rtb_TmpSignalConversionAtVeHPMR);

    /* SignalConversion generated from: '<S3>/VeSTRR_e_HybStrtrSt' incorporates:
     *  Inport: '<Root>/VeSTRR_e_HybStrtrSt'
     */
    (void)Rte_Read_VeSTRR_e_HybStrtrSt_Value(&rtb_TmpSignalConversionAtVeSTRR);

    /* End of Outputs for SubSystem: '<Root>/ICSR_MedTEF' */

    /* Inport: '<Root>/VeHPMR_b_HighMtrStrtSpdActv' */
    (void)Rte_Read_VeHPMR_b_HighMtrStrtSpdActv_Value(&tmpRead_1);

    /* Outputs for Function Call SubSystem: '<Root>/ICSR_MedTEF' */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/ICSC_DisableCtl'
     */
    /* Switch: '<S1032>/Switch' incorporates:
     *  Inport: '<Root>/VeHTDR_b_ClsdLoopOvrdActv'
     */
    if (tmpRead_1)
    {
        /* Switch: '<S1032>/Switch' incorporates:
         *  Constant: '<S1032>/FALSE Constant'
         */
        VeICSR_b_DisableALL = false;
    }
    else
    {
        (void)Rte_Read_VeHTDR_b_ClsdLoopOvrdActv_Value(&tmpRead);

        /* Switch: '<S1032>/Switch' incorporates:
         *  Constant: '<S1038>/Constant'
         *  Constant: '<S1039>/Constant'
         *  Constant: '<S1040>/Constant'
         *  Constant: '<S1041>/Calib'
         *  DataStoreRead: '<S1032>/Dsr_CtlrInit'
         *  Inport: '<Root>/VeHTDR_b_ClsdLoopOvrdActv'
         *  Logic: '<S1032>/OR1'
         *  Logic: '<S1032>/OR2'
         *  RelationalOperator: '<S1032>/Not Equal2'
         *  RelationalOperator: '<S1032>/Not Equal3'
         *  RelationalOperator: '<S1032>/Not Equal4'
         */
        VeICSR_b_DisableALL = (((tmpRead || (((((uint32)
            rtb_TmpSignalConversionAtVeHPMR) != CeHPMR_e_INV_ENABLED) &&
            (((uint32)rtb_TmpSignalConversionAtVeHPMR) !=
             CeHPMR_e_EVAL_PRPLSN_DISBL)) && (((uint32)
            rtb_TmpSignalConversionAtVeHPMR) != CeHPMR_e_OPERATIONAL))) ||
                                (KeICSR_b_DisableCL)) ||
                               (ICSR_ac_DW.VeICSR_b_CtlrInit));
    }

    /* End of Switch: '<S1032>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/ICSR_MedTEF' */

    /* Inport: '<Root>/VeESSR_e_EngStrtType' */
    (void)Rte_Read_VeESSR_e_EngStrtType_Value(&tmpRead_2);

    /* Inport: '<Root>/VeESSR_e_EngStartStopSt' */
    (void)Rte_Read_VeESSR_e_EngStartStopSt_Value(&tmpRead_0);

    /* Outputs for Function Call SubSystem: '<Root>/ICSR_MedTEF' */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/ICSC_DisableCtl'
     */
    /* Merge: '<Root>/VeICSR_b_DisableALL_IRV_Merge' incorporates:
     *  Gain: '<S1046>/Gain'
     *  SignalConversion generated from: '<S3>/VeICSR_b_DisableALL_write'
     */
    Rte_IrvWrite_ICSR_MedTEF_VeICSR_b_DisableALL_write_IRV(VeICSR_b_DisableALL);

    /* Merge: '<Root>/VeICSR_b_FreezITerm_All_IRV_Merge' incorporates:
     *  Constant: '<S1034>/Constant'
     *  Constant: '<S1035>/Constant'
     *  Constant: '<S1036>/Constant'
     *  Constant: '<S1037>/Constant'
     *  Constant: '<S1042>/Calib'
     *  Constant: '<S1043>/Calib'
     *  Constant: '<S1044>/Calib'
     *  Constant: '<S1045>/Calib'
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     *  Inport: '<Root>/VeESSR_e_EngStrtType'
     *  Logic: '<S1032>/Logical'
     *  Logic: '<S1032>/Logical1'
     *  Logic: '<S1032>/Logical2'
     *  Logic: '<S1032>/Logical3'
     *  Logic: '<S1032>/Logical8'
     *  RelationalOperator: '<S1032>/Comparison1'
     *  RelationalOperator: '<S1032>/Comparison2'
     *  RelationalOperator: '<S1032>/Comparison3'
     *  RelationalOperator: '<S1032>/Comparison4'
     *  SignalConversion generated from: '<S3>/VeICSR_b_FreezITerm_All_write'
     *  SignalConversion generated from: '<S3>/VeSTRR_e_HybStrtrSt'
     */
    Rte_IrvWrite_ICSR_MedTEF_VeICSR_b_FreezITerm_All_write_IRV
        (((((KeICSR_b_FreezeIterm_KeyOff) && (CeSTRR_e_KeyOffSt == ((uint32)
              rtb_TmpSignalConversionAtVeSTRR))) || ((((uint32)
              rtb_TmpSignalConversionAtVeSTRR) == CeSTRR_e_EngOffSt) &&
            (KeICSR_b_FreezeIterm_EngOff))) || ((((uint32)tmpRead_0) ==
            CeESSR_e_ImmedStopSt) && (KeICSR_b_FreezeIterm_ImmedStop))) ||
         ((((uint32)tmpRead_2) == CeESSR_e_EngTrqStrt) &&
          (KeICSR_b_FreezeIterm_DurEngTrqStrt)));

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/ICSR_MedTEF' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' */
#endif

}

#endif

/* Model step function for TID4 */
#if Rte_SysCon_Variant_ICSR_7

FUNC(void, ICSR_CODE) ICSR_SlowTEB(void) /* Explicit Task: SlowTEB */
{

#if Rte_SysCon_Variant_ICSR_7

    /* RootInportFunctionCallGenerator generated from: '<Root>/SlowTEB' */
    /* Outputs for Function Call SubSystem: '<Root>/ICSR_SlowTEB' */
    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/ICSC_ClearInit'
     */
    /* DataStoreWrite: '<S1051>/Dsw_CtlrInit' incorporates:
     *  Constant: '<S1051>/FALSE Constant'
     */
    ICSR_ac_DW.VeICSR_b_CtlrInit = false;

    /* End of Outputs for S-Function (fcgen): '<S5>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/ICSR_SlowTEB' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/SlowTEB' */
#endif

}

#endif

/* Output function */
FUNC(void, ICSR_CODE) ICSR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/ICSR_PwrOn'
     */
    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/ICSC_Init'
     */
    /* DataStoreWrite: '<S1047>/Dsw_RampVal' incorporates:
     *  Constant: '<S1047>/Constant Value'
     */
    ICSR_ac_DW.VeICSR_scl_NiCtlRampVal = 0.0F;

    /* DataStoreWrite: '<S1047>/Dsw_RampVal1' incorporates:
     *  Constant: '<S1047>/Constant Value'
     */
    ICSR_ac_DW.VeICSR_scl_NxCtlRampVal = 0.0F;

    /* DataStoreWrite: '<S1047>/Dsw_TaLatch' incorporates:
     *  Constant: '<S1047>/Constant Value'
     */
    ICSR_ac_DW.VeICSR_M_NiCL_TaLatch = 0.0F;

    /* DataStoreWrite: '<S1047>/Dsw_TaLatch1' incorporates:
     *  Constant: '<S1047>/Constant Value'
     */
    ICSR_ac_DW.VeICSR_M_Nx_TaLatch = 0.0F;

    /* DataStoreWrite: '<S1047>/Dsw_TbLatch' incorporates:
     *  Constant: '<S1047>/Constant Value'
     */
    ICSR_ac_DW.VeICSR_M_NiCL_TbLatch = 0.0F;

    /* DataStoreWrite: '<S1047>/Dsw_TbLatch1' incorporates:
     *  Constant: '<S1047>/Constant Value'
     */
    ICSR_ac_DW.VeICSR_M_Nx_TbLatch = 0.0F;

    /* DataStoreWrite: '<S1047>/Dsw_TbLatch2' incorporates:
     *  Constant: '<S1047>/Constant Value'
     */
    ICSR_ac_DW.VeICSR_M_NxCL_ItermLatch = 0.0F;

    /* DataStoreWrite: '<S1047>/Dsw_TbLatch3' incorporates:
     *  Constant: '<S1047>/Constant Value'
     */
    ICSR_ac_DW.VeICSR_M_NiCL_TbUnclippedLatch = 0.0F;

    /* DataStoreWrite: '<S1047>/Dsw_TbLatch4' incorporates:
     *  Constant: '<S1047>/Constant Value'
     */
    ICSR_ac_DW.VeICSR_M_NiCL_TaUnclippedLatch = 0.0F;

    /* DataStoreWrite: '<S1047>/Dsw_TbLatch5' incorporates:
     *  Constant: '<S1047>/Constant Value'
     */
    ICSR_ac_DW.VeICSR_M_NiCL_ItermLatch = 0.0F;

    /* DataStoreWrite: '<S1047>/Dsw_TbLatch6' incorporates:
     *  Constant: '<S1047>/Constant Value'
     */
    ICSR_ac_DW.VeICSR_M_Nx_TbUnclippedLatch = 0.0F;

    /* DataStoreWrite: '<S1047>/Dsw_TbLatch7' incorporates:
     *  Constant: '<S1047>/Constant Value'
     */
    ICSR_ac_DW.VeICSR_M_Nx_TaUnclippedLatch = 0.0F;

    /* DataStoreWrite: '<S1047>/Dsw_CalSwitchTrigg' incorporates:
     *  Constant: '<S1047>/FALSE Constant'
     */
    ICSR_ac_DW.VeICSR_b_Ni_CalSwitchTrigger = false;

    /* DataStoreWrite: '<S1047>/Dsw_CalSwitchTrigg1' incorporates:
     *  Constant: '<S1047>/FALSE Constant'
     */
    ICSR_ac_DW.VeICSR_b_Nx_CalSwitchTrigger = false;

    /* DataStoreWrite: '<S1047>/Dsw_CtlrInit' incorporates:
     *  Constant: '<S1047>/TRUE Constant'
     */
    ICSR_ac_DW.VeICSR_b_CtlrInit = true;

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S1049>/VeICSR_r_NiCL_TaGain_write' */
    ICSR_ac_B.OutportBufferForVeICSR_r_NiCL_T = 0.0F;

    /* SignalConversion generated from: '<S1049>/VeICSR_r_NiCL_TbGain_write' */
    ICSR_ac_B.OutportBufferForVeICSR_r_NiCL_p = 0.0F;

    /* SignalConversion generated from: '<S1049>/y_write' */
    ICSR_ac_B.OutportBufferFory_write = 0.0F;

    /* SignalConversion generated from: '<S1049>/VeICSR_b_DisableALL_write' */
    ICSR_ac_B.OutportBufferForVeICSR_b_Disabl = false;

    /* SignalConversion generated from: '<S1049>/VeICSR_b_FreezITerm_All_write' */
    ICSR_ac_B.OutportBufferForVeICSR_b_FreezI = false;

    /* SignalConversion generated from: '<S4>/VeICSR_M_EngCL' incorporates:
     *  SignalConversion generated from: '<S4>/VeICSR_M_EngCLITerm'
     *  SignalConversion generated from: '<S4>/VeICSR_M_NxCL'
     *  SignalConversion generated from: '<S4>/VeICSR_M_NxCLIterm'
     *  SignalConversion generated from: '<S4>/VeICSR_M_TaCL'
     *  SignalConversion generated from: '<S4>/VeICSR_M_TaCL_PreRamp'
     *  SignalConversion generated from: '<S4>/VeICSR_M_TaCL_Unclipped'
     *  SignalConversion generated from: '<S4>/VeICSR_M_TaMaxReserve_CLR'
     *  SignalConversion generated from: '<S4>/VeICSR_M_TaMinReserve_CLR'
     *  SignalConversion generated from: '<S4>/VeICSR_M_TbCL'
     *  SignalConversion generated from: '<S4>/VeICSR_M_TbCL_PreRamp'
     *  SignalConversion generated from: '<S4>/VeICSR_M_TbCL_Unclipped'
     *  SignalConversion generated from: '<S4>/VeICSR_M_TbMaxReserve_CLR'
     *  SignalConversion generated from: '<S4>/VeICSR_M_TbMinReserve_CLR'
     *  SignalConversion generated from: '<S4>/VeICSR_M_TcCL'
     *  SignalConversion generated from: '<S4>/VeICSR_M_TcCL_PreRamp'
     *  SignalConversion generated from: '<S4>/VeICSR_M_TcCL_Unclipped'
     *  SignalConversion generated from: '<S4>/VeICSR_b_AdvancePrepForIdle'
     *  SignalConversion generated from: '<S4>/VeICSR_b_Disable_Ni'
     *  SignalConversion generated from: '<S4>/VeICSR_b_Disable_Ni_Global'
     *  SignalConversion generated from: '<S4>/VeICSR_b_DsblAnglCntrl'
     *  SignalConversion generated from: '<S4>/VeICSR_b_TaNiCL_Enabled'
     *  SignalConversion generated from: '<S4>/VeICSR_b_TaNxCL_Enabled'
     *  SignalConversion generated from: '<S4>/VeICSR_b_TbNiCL_Enabled'
     *  SignalConversion generated from: '<S4>/VeICSR_b_TbNxCL_Enabled'
     *  SignalConversion generated from: '<S4>/VeICSR_b_TcNxCL_Enabled'
     *  SignalConversion generated from: '<S4>/VeICSR_e_EngCntrlMode'
     *  SignalConversion generated from: '<S4>/VeICSR_n_NiErr_out'
     */
#if Rte_SysCon_Variant_ICSR_8

    /* Outputs for Function Call SubSystem: '<S4>/ICSO' */
    /* SignalConversion generated from: '<S1048>/VeICSR_M_TaCL' */
    ICSR_ac_B.OutportBufferForVeICSR_M_TaCL = 0.0F;

    /* SignalConversion generated from: '<S1048>/VeICSR_M_TbCL' */
    ICSR_ac_B.OutportBufferForVeICSR_M_TbCL = 0.0F;

    /* SignalConversion generated from: '<S1048>/VeICSR_M_EngCL' */
    ICSR_ac_B.OutportBufferForVeICSR_M_EngCL = 0.0F;

    /* SignalConversion generated from: '<S1048>/VeICSR_M_TaMinReserve_CLR' */
    ICSR_ac_B.OutportBufferForVeICSR_M_TaMinR = 0.0F;

    /* SignalConversion generated from: '<S1048>/VeICSR_M_TaMaxReserve_CLR' */
    ICSR_ac_B.OutportBufferForVeICSR_M_TaMaxR = 0.0F;

    /* SignalConversion generated from: '<S1048>/VeICSR_M_TbMinReserve_CLR' */
    ICSR_ac_B.OutportBufferForVeICSR_M_TbMinR = 0.0F;

    /* SignalConversion generated from: '<S1048>/VeICSR_M_TbMaxReserve_CLR' */
    ICSR_ac_B.OutportBufferForVeICSR_M_TbMaxR = 0.0F;

    /* SignalConversion generated from: '<S1048>/VeICSR_n_NiErr_out' */
    ICSR_ac_B.OutportBufferForVeICSR_n_NiErr_ = 0.0F;

    /* SignalConversion generated from: '<S1048>/VeICSR_e_EngCntrlMode' incorporates:
     *  Constant: '<S1050>/Constant'
     */
    ICSR_ac_B.OutportBufferForVeICSR_e_EngCnt = ICSR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S1048>/VeICSR_b_AdvancePrepForIdle' */
    ICSR_ac_B.OutportBufferForVeICSR_b_Advanc = true;

    /* SignalConversion generated from: '<S1048>/VeICSR_M_EngCLITerm' */
    ICSR_ac_B.OutportBufferForVeICSR_M_EngCLI = 0.0F;

    /* SignalConversion generated from: '<S1048>/VeICSR_M_NxCLIterm' */
    ICSR_ac_B.OutportBufferForVeICSR_M_NxCLIt = 0.0F;

    /* SignalConversion generated from: '<S1048>/VeICSR_b_Disable_Ni' */
    ICSR_ac_B.OutportBufferForVeICSR_b_Disa_b = true;

    /* SignalConversion generated from: '<S1048>/VeICSR_b_Disable_Ni_Global' */
    ICSR_ac_B.OutportBufferForVeICSR_b_Disa_n = true;

    /* SignalConversion generated from: '<S1048>/VeICSR_b_DsblAnglCntrl' */
    ICSR_ac_B.OutportBufferForVeICSR_b_DsblAn = true;

    /* SignalConversion generated from: '<S1048>/VeICSR_M_TaCL_PreRamp' */
    ICSR_ac_B.OutportBufferForVeICSR_M_TaCL_P = 0.0F;

    /* SignalConversion generated from: '<S1048>/VeICSR_M_TbCL_PreRamp' */
    ICSR_ac_B.OutportBufferForVeICSR_M_TbCL_P = 0.0F;

    /* SignalConversion generated from: '<S1048>/VeICSR_b_TaNiCL_Enabled' */
    ICSR_ac_B.OutportBufferForVeICSR_b_TaNiCL = false;

    /* SignalConversion generated from: '<S1048>/VeICSR_b_TbNiCL_Enabled' */
    ICSR_ac_B.OutportBufferForVeICSR_b_TbNiCL = false;

    /* SignalConversion generated from: '<S1048>/VeICSR_b_TaNxCL_Enabled' */
    ICSR_ac_B.OutportBufferForVeICSR_b_TaNxCL = false;

    /* SignalConversion generated from: '<S1048>/VeICSR_b_TbNxCL_Enabled' */
    ICSR_ac_B.OutportBufferForVeICSR_b_TbNxCL = false;

    /* SignalConversion generated from: '<S1048>/VeICSR_M_TaCL_Unclipped' */
    ICSR_ac_B.OutportBufferForVeICSR_M_TaCL_U = 0.0F;

    /* SignalConversion generated from: '<S1048>/VeICSR_M_TbCL_Unclipped' */
    ICSR_ac_B.OutportBufferForVeICSR_M_TbCL_U = 0.0F;

    /* SignalConversion generated from: '<S1048>/VeICSR_M_TcCL_Unclipped' */
    ICSR_ac_B.OutportBufferForVeICSR_M_TcCL_U = 0.0F;

    /* SignalConversion generated from: '<S1048>/VeICSR_M_TcCL' */
    ICSR_ac_B.OutportBufferForVeICSR_M_TcCL = 0.0F;

    /* SignalConversion generated from: '<S1048>/VeICSR_b_TcNxCL_Enabled' */
    ICSR_ac_B.OutportBufferForVeICSR_b_TcNxCL = false;

    /* SignalConversion generated from: '<S1048>/VeICSR_M_TcCL_PreRamp' */
    ICSR_ac_B.OutportBufferForVeICSR_M_TcCL_P = 0.0F;

    /* SignalConversion generated from: '<S1048>/VeICSR_M_NxCL' */
    ICSR_ac_B.OutportBufferForVeICSR_M_NxCL = 0.0F;

    /* End of Outputs for SubSystem: '<S4>/ICSO' */

    /* Outport: '<Root>/VeICSR_M_EngCL' */
    (void)Rte_Write_VeICSR_M_EngCL_Value
        (ICSR_ac_B.OutportBufferForVeICSR_M_EngCL);

    /* Outport: '<Root>/VeICSR_M_EngCLITerm' */
    (void)Rte_Write_VeICSR_M_EngCLITerm_Value
        (ICSR_ac_B.OutportBufferForVeICSR_M_EngCLI);

    /* Outport: '<Root>/VeICSR_M_NxCL' */
    (void)Rte_Write_VeICSR_M_NxCL_Value(ICSR_ac_B.OutportBufferForVeICSR_M_NxCL);

    /* Outport: '<Root>/VeICSR_M_NxCLIterm' */
    (void)Rte_Write_VeICSR_M_NxCLIterm_Value
        (ICSR_ac_B.OutportBufferForVeICSR_M_NxCLIt);

    /* Outport: '<Root>/VeICSR_M_TaCL' */
    (void)Rte_Write_VeICSR_M_TaCL_Value(ICSR_ac_B.OutportBufferForVeICSR_M_TaCL);

    /* Outport: '<Root>/VeICSR_M_TaCL_PreRamp' */
    (void)Rte_Write_VeICSR_M_TaCL_PreRamp_Value
        (ICSR_ac_B.OutportBufferForVeICSR_M_TaCL_P);

    /* Outport: '<Root>/VeICSR_M_TaCL_Unclipped' */
    (void)Rte_Write_VeICSR_M_TaCL_Unclipped_Value
        (ICSR_ac_B.OutportBufferForVeICSR_M_TaCL_U);

    /* Outport: '<Root>/VeICSR_M_TaMaxReserve_CLR' */
    (void)Rte_Write_VeICSR_M_TaMaxReserve_CLR_Value
        (ICSR_ac_B.OutportBufferForVeICSR_M_TaMaxR);

    /* Outport: '<Root>/VeICSR_M_TaMinReserve_CLR' */
    (void)Rte_Write_VeICSR_M_TaMinReserve_CLR_Value
        (ICSR_ac_B.OutportBufferForVeICSR_M_TaMinR);

    /* Outport: '<Root>/VeICSR_M_TbCL' */
    (void)Rte_Write_VeICSR_M_TbCL_Value(ICSR_ac_B.OutportBufferForVeICSR_M_TbCL);

    /* Outport: '<Root>/VeICSR_M_TbCL_PreRamp' */
    (void)Rte_Write_VeICSR_M_TbCL_PreRamp_Value
        (ICSR_ac_B.OutportBufferForVeICSR_M_TbCL_P);

    /* Outport: '<Root>/VeICSR_M_TbCL_Unclipped' */
    (void)Rte_Write_VeICSR_M_TbCL_Unclipped_Value
        (ICSR_ac_B.OutportBufferForVeICSR_M_TbCL_U);

    /* Outport: '<Root>/VeICSR_M_TbMaxReserve_CLR' */
    (void)Rte_Write_VeICSR_M_TbMaxReserve_CLR_Value
        (ICSR_ac_B.OutportBufferForVeICSR_M_TbMaxR);

    /* Outport: '<Root>/VeICSR_M_TbMinReserve_CLR' */
    (void)Rte_Write_VeICSR_M_TbMinReserve_CLR_Value
        (ICSR_ac_B.OutportBufferForVeICSR_M_TbMinR);

    /* Outport: '<Root>/VeICSR_M_TcCL' */
    (void)Rte_Write_VeICSR_M_TcCL_Value(ICSR_ac_B.OutportBufferForVeICSR_M_TcCL);

    /* Outport: '<Root>/VeICSR_M_TcCL_PreRamp' */
    (void)Rte_Write_VeICSR_M_TcCL_PreRamp_Value
        (ICSR_ac_B.OutportBufferForVeICSR_M_TcCL_P);

    /* Outport: '<Root>/VeICSR_M_TcCL_Unclipped' */
    (void)Rte_Write_VeICSR_M_TcCL_Unclipped_Value
        (ICSR_ac_B.OutportBufferForVeICSR_M_TcCL_U);

    /* Outport: '<Root>/VeICSR_b_AdvancePrepForIdle' */
    (void)Rte_Write_VeICSR_b_AdvancePrepForIdle_Value
        (ICSR_ac_B.OutportBufferForVeICSR_b_Advanc);

    /* Outport: '<Root>/VeICSR_b_Disable_Ni' */
    (void)Rte_Write_VeICSR_b_Disable_Ni_Value
        (ICSR_ac_B.OutportBufferForVeICSR_b_Disa_b);

    /* Outport: '<Root>/VeICSR_b_Disable_Ni_Global' */
    (void)Rte_Write_VeICSR_b_Disable_Ni_Global_Value
        (ICSR_ac_B.OutportBufferForVeICSR_b_Disa_n);

    /* Outport: '<Root>/VeICSR_b_DsblAnglCntrl' */
    (void)Rte_Write_VeICSR_b_DsblAnglCntrl_Value
        (ICSR_ac_B.OutportBufferForVeICSR_b_DsblAn);

    /* Outport: '<Root>/VeICSR_b_TaNiCL_Enabled' */
    (void)Rte_Write_VeICSR_b_TaNiCL_Enabled_Value
        (ICSR_ac_B.OutportBufferForVeICSR_b_TaNiCL);

    /* Outport: '<Root>/VeICSR_b_TaNxCL_Enabled' */
    (void)Rte_Write_VeICSR_b_TaNxCL_Enabled_Value
        (ICSR_ac_B.OutportBufferForVeICSR_b_TaNxCL);

    /* Outport: '<Root>/VeICSR_b_TbNiCL_Enabled' */
    (void)Rte_Write_VeICSR_b_TbNiCL_Enabled_Value
        (ICSR_ac_B.OutportBufferForVeICSR_b_TbNiCL);

    /* Outport: '<Root>/VeICSR_b_TbNxCL_Enabled' */
    (void)Rte_Write_VeICSR_b_TbNxCL_Enabled_Value
        (ICSR_ac_B.OutportBufferForVeICSR_b_TbNxCL);

    /* Outport: '<Root>/VeICSR_b_TcNxCL_Enabled' */
    (void)Rte_Write_VeICSR_b_TcNxCL_Enabled_Value
        (ICSR_ac_B.OutportBufferForVeICSR_b_TcNxCL);

    /* Outport: '<Root>/VeICSR_e_EngCntrlMode' incorporates:
     *  SignalConversion generated from: '<S1048>/VeICSR_e_EngCntrlMode'
     */
    (void)Rte_Write_VeICSR_e_EngCntrlMode_Value
        (ICSR_ac_B.OutportBufferForVeICSR_e_EngCnt);

    /* Outport: '<Root>/VeICSR_n_NiErr_out' */
    (void)Rte_Write_VeICSR_n_NiErr_out_Value
        (ICSR_ac_B.OutportBufferForVeICSR_n_NiErr_);

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */
#endif

    /* End of SignalConversion generated from: '<S4>/VeICSR_M_EngCL' */

    /* Merge: '<Root>/VeICSR_b_DisableALL_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/VeICSR_b_DisableALL_write'
     * */
    Rte_IrvWrite_ICSR_PwrOn_VeICSR_b_DisableALL_write_IRV
        (ICSR_ac_B.OutportBufferForVeICSR_b_Disabl);

    /* Merge: '<Root>/VeICSR_b_FreezITerm_All_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/VeICSR_b_FreezITerm_All_write'
     * */
    Rte_IrvWrite_ICSR_PwrOn_VeICSR_b_FreezITerm_All_write_IRV
        (ICSR_ac_B.OutportBufferForVeICSR_b_FreezI);

    /* Merge: '<Root>/VeICSR_r_NiCL_TaGain_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/VeICSR_r_NiCL_TaGain_write'
     * */
    Rte_IrvWrite_ICSR_PwrOn_VeICSR_r_NiCL_TaGain_write_IRV
        (ICSR_ac_B.OutportBufferForVeICSR_r_NiCL_T);

    /* Merge: '<Root>/VeICSR_r_NiCL_TbGain_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/VeICSR_r_NiCL_TbGain_write'
     * */
    Rte_IrvWrite_ICSR_PwrOn_VeICSR_r_NiCL_TbGain_write_IRV
        (ICSR_ac_B.OutportBufferForVeICSR_r_NiCL_p);

    /* Merge: '<Root>/y_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/y_write'
     * */
    Rte_IrvWrite_ICSR_PwrOn_y_write_IRV(ICSR_ac_B.OutportBufferFory_write);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, ICSR_CODE) ICSR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/ICSR_PwrOn'
     */
#if Rte_SysCon_Variant_ICSR_8

    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' */
    /* SystemInitialize for Function Call SubSystem: '<S4>/ICSO' */
    /* SystemInitialize for SignalConversion generated from: '<S1048>/VeICSR_e_EngCntrlMode' incorporates:
     *  Constant: '<S1050>/Constant'
     */
    ICSR_ac_B.OutportBufferForVeICSR_e_EngCnt = ICSR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S1048>/VeICSR_b_AdvancePrepForIdle' */
    ICSR_ac_B.OutportBufferForVeICSR_b_Advanc = true;

    /* SystemInitialize for SignalConversion generated from: '<S1048>/VeICSR_b_Disable_Ni' */
    ICSR_ac_B.OutportBufferForVeICSR_b_Disa_b = true;

    /* SystemInitialize for SignalConversion generated from: '<S1048>/VeICSR_b_Disable_Ni_Global' */
    ICSR_ac_B.OutportBufferForVeICSR_b_Disa_n = true;

    /* SystemInitialize for SignalConversion generated from: '<S1048>/VeICSR_b_DsblAnglCntrl' */
    ICSR_ac_B.OutportBufferForVeICSR_b_DsblAn = true;

    /* End of SystemInitialize for SubSystem: '<S4>/ICSO' */
    /* End of SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' */
#endif

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
#if Rte_SysCon_Variant_ICSR_7

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
    /* SystemInitialize for Function Call SubSystem: '<Root>/ICSR_MedTEB' */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ICSC_ProcessNx'
     */
    /* InitializeConditions for UnitDelay: '<S875>/Unit Delay3' incorporates:
     *  Constant: '<S13>/Constant Value1'
     *  Constant: '<S8>/Constant Value3'
     *  Constant: '<S8>/Constant Value4'
     *  Constant: '<S8>/Constant Value9'
     *  Merge: '<S875>/Merge'
     *  Merge: '<S875>/Merge1'
     *  SignalConversion generated from: '<S13>/Variant Source1'
     */
#if Rte_SysCon_Variant_ICSR_4

    /* SystemInitialize for VariantMerge generated from: '<S13>/Variant Source1' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_e = false;

#else

    /* SystemInitialize for Function Call SubSystem: '<S1>/ICSC_CalSelect' */
    ICSR_ac_B.ConstantValue1 = true;

    /* SystemInitialize for VariantMerge generated from: '<S13>/Variant Source1' incorporates:
     *  Constant: '<S13>/Constant Value1'
     *  SignalConversion generated from: '<S13>/Variant Source1'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_e = ICSR_ac_B.ConstantValue1;

    /* Start for VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Constant: '<S8>/Constant Value3'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

#endif

    /* End of InitializeConditions for UnitDelay: '<S875>/Unit Delay3' */

    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ICSC_CalSelect'
     */
    /* Start for Constant: '<S8>/Constant Value15' incorporates:
     *  Constant: '<S8>/Constant Value16'
     */
#if !Rte_SysCon_Variant_ICSR_5

    /* Start for VariantMerge generated from: '<S8>/Variant Source' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

#endif

    /* End of Start for Constant: '<S8>/Constant Value15' */

    /* SystemInitialize for SignalConversion generated from: '<S8>/Variant Source11' */
    VeICSR_K_NiCL_PGain = ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

    /* SystemInitialize for SignalConversion generated from: '<S8>/Variant Source12' */
    VeICSR_K_NiCL_IGain = ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

    /* SystemInitialize for SignalConversion generated from: '<S8>/Variant Source13' */
    VeICSR_M_NiCL_PLimit = ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

    /* SystemInitialize for SignalConversion generated from: '<S8>/Variant Source14' */
    VeICSR_M_NiCL_ILimit = ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

    /* SystemInitialize for SignalConversion generated from: '<S8>/Variant Source17' */
    VeICSR_M_NiCL_DLimit = ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

    /* SystemInitialize for SignalConversion generated from: '<S8>/Variant Source18' */
    VeICSR_dscl_NiCL_ModeSwtchRmp = ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

    /* SystemInitialize for SignalConversion generated from: '<S8>/Variant Source19' */
    VeICSR_M_NiCL_DGain = ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

    /* SystemInitialize for SignalConversion generated from: '<S8>/Variant Source1' */
    VeICSR_K_NxCL_IGain = ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

    /* SystemInitialize for SignalConversion generated from: '<S8>/Variant Source20' */
    VeICSR_i_ControlCase = ICSR_ac_B.VariantMerge_For_Variant_Sou_hk;

    /* SystemInitialize for SignalConversion generated from: '<S8>/Variant Source25' */
    VeICSR_K_NiCL_I_AntiWindUp_Gain = ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

    /* SystemInitialize for SignalConversion generated from: '<S8>/Variant Source2' */
    VeICSR_M_NxCL_PLimit = ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

    /* SystemInitialize for SignalConversion generated from: '<S8>/Variant Source3' */
    VeICSR_M_NxCL_ILimit = ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

    /* SystemInitialize for SignalConversion generated from: '<S8>/Variant Source6' */
    VeICSR_dscl_NxCL_ModeSwtchRmp = ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

    /* SystemInitialize for SignalConversion generated from: '<S8>/Variant Source7' */
    VeICSR_K_NxCL_DGain = ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

    /* SystemInitialize for SignalConversion generated from: '<S8>/Variant Source8' */
    VeICSR_M_NxCL_DLimit = ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

    /* SystemInitialize for SignalConversion generated from: '<S8>/Variant Source9' */
    VeICSR_K_NxCL_I_Anti_Windup_Gain = ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

    /* SystemInitialize for SignalConversion generated from: '<S8>/Variant Source' */
    VeICSR_K_NxCL_PGain = ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

    /* SystemInitialize for SignalConversion generated from: '<S8>/Variant Source10' */
#if Rte_SysCon_Variant_ICSR_4

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source10' */
    ICSR_ac_B.VariantMerge_For_Variant_Source = ICSR_ac_B.LeICSR_r_NxCL2Tc_Pre;

#else

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source10' */
    ICSR_ac_B.VariantMerge_For_Variant_Source =
        ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

#endif

    /* SystemInitialize for SignalConversion generated from: '<S8>/Variant Source11' */
#if Rte_SysCon_Variant_ICSR_5

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i =
        ICSR_ac_B.LeICSR_K_NiCL_PGain_Pre;

#else

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Constant: '<S8>/Constant Value1'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

#endif

    /* SystemInitialize for SignalConversion generated from: '<S8>/Variant Source12' */
#if Rte_SysCon_Variant_ICSR_5

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i =
        ICSR_ac_B.LeICSR_K_NiCL_IGain_Pre;

#else

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Constant: '<S8>/Constant Value12'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

#endif

    /* SystemInitialize for SignalConversion generated from: '<S8>/Variant Source13' */
#if Rte_SysCon_Variant_ICSR_5

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i =
        ICSR_ac_B.LeICSR_M_NiCL_PLimit_Pre;

#else

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Constant: '<S8>/Constant Value13'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

#endif

    /* SystemInitialize for SignalConversion generated from: '<S8>/Variant Source14' */
#if Rte_SysCon_Variant_ICSR_5

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i =
        ICSR_ac_B.LeICSR_M_NiCL_ILimit_Pre;

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source15' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_g =
        ICSR_ac_B.LeICSR_r_NiCL_TaGain_Pre;

#else

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Constant: '<S8>/Constant Value14'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

#endif

    /* SystemInitialize for SignalConversion generated from: '<S8>/Variant Source16' */
#if Rte_SysCon_Variant_ICSR_5

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source16' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_d =
        ICSR_ac_B.LeICSR_r_NiCL_TbGain_Pre;

#else

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source15' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_g =
        ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source16' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_d =
        ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

#endif

    /* SystemInitialize for SignalConversion generated from: '<S8>/Variant Source17' */
#if Rte_SysCon_Variant_ICSR_5

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i =
        ICSR_ac_B.LeICSR_M_NiCL_DLimit_Pre;

#else

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Constant: '<S8>/Constant Value17'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

#endif

    /* SystemInitialize for SignalConversion generated from: '<S8>/Variant Source18' */
#if Rte_SysCon_Variant_ICSR_5

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i =
        ICSR_ac_B.LeICSR_dscl_NiCL_ModeSwtchRmp_P;

#else

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Constant: '<S8>/Constant Value18'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

#endif

    /* SystemInitialize for SignalConversion generated from: '<S8>/Variant Source19' */
#if Rte_SysCon_Variant_ICSR_5

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i =
        ICSR_ac_B.LeICSR_M_NiCL_DGain_Pre;

#else

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Constant: '<S8>/Constant Value19'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

#endif

    /* SystemInitialize for SignalConversion generated from: '<S8>/Variant Source1' */
#if Rte_SysCon_Variant_ICSR_4

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i =
        ICSR_ac_B.LeICSR_K_NxCL_IGain_Pre;

#else

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Constant: '<S8>/Constant Value2'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

#endif

    /* SystemInitialize for SignalConversion generated from: '<S8>/Variant Source20' */
#if Rte_SysCon_Variant_ICSR_5

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source20' */
    ICSR_ac_B.VariantMerge_For_Variant_Sou_hk =
        ICSR_ac_B.LeICSR_i_ControlCase_Pre;

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i =
        ICSR_ac_B.LeICSR_K_NiCL_ITerm_AntiWindUpG;

#else

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source20' incorporates:
     *  Constant: '<S8>/Constant Value20'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sou_hk = 7U;

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Constant: '<S8>/Constant Value21'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

#endif

    /* SystemInitialize for SignalConversion generated from: '<S8>/Variant Source2' */
#if Rte_SysCon_Variant_ICSR_4

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i =
        ICSR_ac_B.LeICSR_M_NxCL_PLimit_Pre;

#else

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Constant: '<S8>/Constant Value10'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

#endif

    /* SystemInitialize for SignalConversion generated from: '<S8>/Variant Source3' */
#if Rte_SysCon_Variant_ICSR_4

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i =
        ICSR_ac_B.LeICSR_M_NxCL_ILimit_Pre;

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source4' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_k = ICSR_ac_B.LeICSR_r_NxCL2Ta_Pre;

#else

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Constant: '<S8>/Constant Value11'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

#endif

    /* SystemInitialize for SignalConversion generated from: '<S8>/Variant Source5' */
#if Rte_SysCon_Variant_ICSR_4

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source5' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_o = ICSR_ac_B.LeICSR_r_NxCL2Tb_Pre;

#else

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source4' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_k =
        ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source5' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_o =
        ICSR_ac_B.VariantMerge_For_Variant_Sour_i;

#endif

    /* SystemInitialize for SignalConversion generated from: '<S8>/Variant Source6' */
#if Rte_SysCon_Variant_ICSR_4

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i =
        ICSR_ac_B.LeICSR_dscl_NxCL_ModeSwtchRmp_P;

#else

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Constant: '<S8>/Constant Value5'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

#endif

    /* SystemInitialize for SignalConversion generated from: '<S8>/Variant Source7' */
#if Rte_SysCon_Variant_ICSR_4

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i =
        ICSR_ac_B.LeICSR_K_NxCL_DGain_Pre;

#else

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Constant: '<S8>/Constant Value6'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

#endif

    /* SystemInitialize for SignalConversion generated from: '<S8>/Variant Source8' */
#if Rte_SysCon_Variant_ICSR_4

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i =
        ICSR_ac_B.LeICSR_M_NxCL_DLimit_Pre;

#else

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Constant: '<S8>/Constant Value7'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

#endif

    /* SystemInitialize for SignalConversion generated from: '<S8>/Variant Source9' */
#if Rte_SysCon_Variant_ICSR_4

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i =
        ICSR_ac_B.LeICSR_K_NxCL_I_Anti_Windup_Gai;

#else

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Constant: '<S8>/Constant Value8'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

#endif

    /* SystemInitialize for SignalConversion generated from: '<S8>/Variant Source' */
#if Rte_SysCon_Variant_ICSR_4

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source' */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i =
        ICSR_ac_B.LeICSR_K_NxCL_PGain_Pre;

#else

    /* SystemInitialize for VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Constant: '<S8>/Constant Value'
     */
    ICSR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

#endif

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for SubSystem: '<Root>/ICSR_MedTEB' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
#endif

    /* SystemInitialize for Merge: '<Root>/Merge_22' incorporates:
     *  Merge: '<Root>/Merge_10'
     *  Merge: '<Root>/Merge_11'
     *  Merge: '<Root>/Merge_12'
     *  Merge: '<Root>/Merge_14'
     *  Merge: '<Root>/Merge_15'
     *  Merge: '<Root>/Merge_16'
     *  Merge: '<Root>/Merge_17'
     *  Merge: '<Root>/Merge_18'
     *  Merge: '<Root>/Merge_19'
     *  Merge: '<Root>/Merge_20'
     *  Merge: '<Root>/Merge_21'
     *  Merge: '<Root>/Merge_23'
     *  Merge: '<Root>/Merge_24'
     *  Merge: '<Root>/Merge_25'
     *  Merge: '<Root>/Merge_26'
     *  Merge: '<Root>/Merge_27'
     *  Merge: '<Root>/Merge_28'
     *  Merge: '<Root>/Merge_3'
     *  Merge: '<Root>/Merge_4'
     *  Merge: '<Root>/Merge_5'
     *  Merge: '<Root>/Merge_6'
     *  Merge: '<Root>/Merge_7'
     *  Merge: '<Root>/Merge_8'
     *  Merge: '<Root>/Merge_9'
     */
#if Rte_SysCon_Variant_ICSR_7 || Rte_SysCon_Variant_ICSR_8

    /* SystemInitialize for Outport: '<Root>/VeICSR_e_EngCntrlMode' */
    (void)Rte_Write_VeICSR_e_EngCntrlMode_Value(CeTRAR_e_TorqueMode);

#endif

    /* End of SystemInitialize for Merge: '<Root>/Merge_22' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
